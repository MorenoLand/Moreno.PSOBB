#include "protos.h"

void f_0081a2b0(void) /* sub_81A2B0 */
{
    FN_ENTER(0x0081a2b0);
    /* 0081a2b0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0081a2b1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0081a2b2: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0081a2b5: mov ebp, dword ptr [esp + 0x1c] */ r_ebp = R32((u32)(r_esp+0x1cu));
    /* 0081a2b9: movsx eax, word ptr [esp + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x20u));
    /* 0081a2be: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0081a2bf: movsx edi, word ptr [ebp] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ebp));
    /* 0081a2c3: mov ecx, eax */ r_ecx = r_eax;
    /* 0081a2c5: movsx eax, word ptr [esp + 0x24] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x24u));
    /* 0081a2ca: xor ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0081a2cc: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0081a2ce: and ecx, 0xff */ {  u32 a = r_ecx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0081a2d4: xor ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0081a2d6: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0081a2d8: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0081a2d9: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0081a2db: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0081a2dd: and eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0081a2e2: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0081a2e4: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0081a2e6: mov edx, edi */ r_edx = r_edi;
    /* 0081a2e8: and edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0081a2ee: cmp edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0081a2f4: je 0x81a367 */ if (fZ) goto L_0081a367;
L_0081a2f6:; BB(0x0081a2f6);
    /* 0081a2f6: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0081a2fa: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 0081a2fe: movzx ecx, word ptr [esp + 0x28] */ r_ecx = (u32)R16((u32)(r_esp+0x28u));
    /* 0081a303: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 0081a306: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
L_0081a30a:; BB(0x0081a30a);
    /* 0081a30a: cmp edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0081a30d: je 0x81a390 */ if (fZ) goto L_0081a390;
L_0081a313:; BB(0x0081a313);
    /* 0081a313: cmp edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0081a319: je 0x81a38b */ if (fZ) goto L_0081a38b;
L_0081a31b:; BB(0x0081a31b);
    /* 0081a31b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0081a31d: jne 0x81a324 */ if (!fZ) goto L_0081a324;
L_0081a31f:; BB(0x0081a31f);
    /* 0081a31f: add ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0081a322: jmp 0x81a34c */ goto L_0081a34c;
L_0081a324:; BB(0x0081a324);
    /* 0081a324: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0081a327: je 0x81a386 */ if (fZ) goto L_0081a386;
L_0081a329:; BB(0x0081a329);
    /* 0081a329: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0081a32c: je 0x81a381 */ if (fZ) goto L_0081a381;
L_0081a32e:; BB(0x0081a32e);
    /* 0081a32e: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0081a331: je 0x81a37c */ if (fZ) goto L_0081a37c;
L_0081a333:; BB(0x0081a333);
    /* 0081a333: cmp edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0081a336: je 0x81a377 */ if (fZ) goto L_0081a377;
L_0081a338:; BB(0x0081a338);
    /* 0081a338: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0081a33b: je 0x81a372 */ if (fZ) goto L_0081a372;
L_0081a33d:; BB(0x0081a33d);
    /* 0081a33d: cmp edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0081a340: je 0x81a36d */ if (fZ) goto L_0081a36d;
L_0081a342:; BB(0x0081a342);
    /* 0081a342: movsx eax, word ptr [ebp + 2] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x2u));
    /* 0081a346: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0081a348: lea ebp, [ebp + eax + 4] */ r_ebp = (u32)(r_ebp+r_eax+0x4u);
L_0081a34c:; BB(0x0081a34c);
    /* 0081a34c: movsx edi, word ptr [ebp] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ebp));
    /* 0081a350: mov edx, edi */ r_edx = r_edi;
    /* 0081a352: and edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0081a358: cmp edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0081a35e: jne 0x81a30a */ if (!fZ) goto L_0081a30a;
L_0081a360:; BB(0x0081a360);
    /* 0081a360: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 0081a363: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
L_0081a367:; BB(0x0081a367);
    /* 0081a367: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0081a36a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0081a36b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0081a36c: ret  */ FN_RET(0x0081a2b0); r_esp += 4; return;
L_0081a36d:; BB(0x0081a36d);
    /* 0081a36d: add ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0081a370: jmp 0x81a34c */ goto L_0081a34c;
L_0081a372:; BB(0x0081a372);
    /* 0081a372: add ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0081a375: jmp 0x81a34c */ goto L_0081a34c;
L_0081a377:; BB(0x0081a377);
    /* 0081a377: add ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0081a37a: jmp 0x81a34c */ goto L_0081a34c;
L_0081a37c:; BB(0x0081a37c);
    /* 0081a37c: add ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0081a37f: jmp 0x81a34c */ goto L_0081a34c;
L_0081a381:; BB(0x0081a381);
    /* 0081a381: add ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0081a384: jmp 0x81a34c */ goto L_0081a34c;
L_0081a386:; BB(0x0081a386);
    /* 0081a386: add ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0081a389: jmp 0x81a34c */ goto L_0081a34c;
L_0081a38b:; BB(0x0081a38b);
    /* 0081a38b: add ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0081a38e: jmp 0x81a34c */ goto L_0081a34c;
L_0081a390:; BB(0x0081a390);
    /* 0081a390: lea ebx, [ebp + 2] */ r_ebx = (u32)(r_ebp+0x2u);
    /* 0081a393: movsx eax, word ptr [ebx] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 0081a396: mov esi, eax */ r_esi = r_eax;
    /* 0081a398: and esi, 0x1fff */ {  u32 a = r_esi; u32 b = 0x1fffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0081a39e: cmp esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0081a3a0: jne 0x81a313 */ if (!fZ) goto L_0081a313;
L_0081a3a6:; BB(0x0081a3a6);
    /* 0081a3a6: and edi, 0xcfff */ {  u32 a = r_edi; u32 b = 0xcfffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0081a3ac: movsx edx, di */ r_edx = (u32)(i32)(i16)(u16)r_edi;
    /* 0081a3af: mov word ptr [ebp], dx */ W16((u32)(r_ebp), (u16)r_edx);
    /* 0081a3b3: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 0081a3b6: cmp edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0081a3bc: je 0x81a3e6 */ if (fZ) goto L_0081a3e6;
L_0081a3be:; BB(0x0081a3be);
    /* 0081a3be: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0081a3c0: je 0x81a3e6 */ if (fZ) goto L_0081a3e6;
L_0081a3c2:; BB(0x0081a3c2);
    /* 0081a3c2: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0081a3c5: je 0x81a3e6 */ if (fZ) goto L_0081a3e6;
L_0081a3c7:; BB(0x0081a3c7);
    /* 0081a3c7: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0081a3ca: je 0x81a3e6 */ if (fZ) goto L_0081a3e6;
L_0081a3cc:; BB(0x0081a3cc);
    /* 0081a3cc: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0081a3cf: je 0x81a3e6 */ if (fZ) goto L_0081a3e6;
L_0081a3d1:; BB(0x0081a3d1);
    /* 0081a3d1: cmp edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0081a3d4: je 0x81a3e6 */ if (fZ) goto L_0081a3e6;
L_0081a3d6:; BB(0x0081a3d6);
    /* 0081a3d6: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0081a3d9: je 0x81a3e6 */ if (fZ) goto L_0081a3e6;
L_0081a3db:; BB(0x0081a3db);
    /* 0081a3db: cmp edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0081a3de: je 0x81a43a */ if (fZ) goto L_0081a43a;
L_0081a3e0:; BB(0x0081a3e0);
    /* 0081a3e0: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0081a3e2: lea ebx, [ebp + eax + 4] */ r_ebx = (u32)(r_ebp+r_eax+0x4u);
L_0081a3e6:; BB(0x0081a3e6);
    /* 0081a3e6: movzx edi, word ptr [ebx + 4] */ r_edi = (u32)R16((u32)(r_ebx+0x4u));
    /* 0081a3ea: and edi, 0x1fff */ {  u32 a = r_edi; u32 b = 0x1fffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0081a3f0: lea ebp, [ebx + 6] */ r_ebp = (u32)(r_ebx+0x6u);
    /* 0081a3f3: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0081a3f5: je 0x81a34c */ if (fZ) goto L_0081a34c;
L_0081a3fb:; BB(0x0081a3fb);
    /* 0081a3fb: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 0081a3ff: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
L_0081a403:; BB(0x0081a403);
    /* 0081a403: movsx eax, word ptr [ebp] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp));
    /* 0081a407: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0081a408: add ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0081a40b: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0081a40d: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0081a40f: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0081a412: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0081a414: je 0x81a42b */ if (fZ) goto L_0081a42b;
L_0081a416:; BB(0x0081a416);
    /* 0081a416: add word ptr [ebp + 2], si */ { u32 ad = (u32)(r_ebp+0x2u);  u32 a = R16(ad); u32 b = (u16)r_esi; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 0081a41a: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0081a41d: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 0081a420: add word ptr [ebp + 4], bx */ { u32 ad = (u32)(r_ebp+0x4u);  u32 a = R16(ad); u32 b = (u16)r_ebx; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 0081a424: add ebp, 6 */ {  u32 a = r_ebp; u32 b = 0x6u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0081a427: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0081a429: jne 0x81a416 */ if (!fZ) goto L_0081a416;
L_0081a42b:; BB(0x0081a42b);
    /* 0081a42b: add edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0081a42e: movzx eax, di */ r_eax = (u32)(u16)r_edi;
    /* 0081a431: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0081a433: jne 0x81a403 */ if (!fZ) goto L_0081a403;
L_0081a435:; BB(0x0081a435);
    /* 0081a435: jmp 0x81a34c */ goto L_0081a34c;
L_0081a43a:; BB(0x0081a43a);
    /* 0081a43a: lea ebx, [ebp + 4] */ r_ebx = (u32)(r_ebp+0x4u);
    /* 0081a43d: jmp 0x81a3e6 */ goto L_0081a3e6;
}

void f_0081a440(void) /* sub_81A440 */
{
    FN_ENTER(0x0081a440);
    /* 0081a440: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0081a443: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0081a447: movzx edx, word ptr [esp + 0x10] */ r_edx = (u32)R16((u32)(r_esp+0x10u));
    /* 0081a44c: movzx eax, word ptr [ecx] */ r_eax = (u32)R16((u32)(r_ecx));
    /* 0081a44f: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0081a452: cmp eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0081a457: je 0x81a4b5 */ if (fZ) goto L_0081a4b5;
L_0081a459:; BB(0x0081a459);
    /* 0081a459: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 0081a45d: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
L_0081a460:; BB(0x0081a460);
    /* 0081a460: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0081a463: je 0x81a4dc */ if (fZ) goto L_0081a4dc;
L_0081a469:; BB(0x0081a469);
    /* 0081a469: cmp eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0081a46e: je 0x81a4d7 */ if (fZ) goto L_0081a4d7;
L_0081a470:; BB(0x0081a470);
    /* 0081a470: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0081a472: jne 0x81a479 */ if (!fZ) goto L_0081a479;
L_0081a474:; BB(0x0081a474);
    /* 0081a474: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0081a477: jmp 0x81a4a1 */ goto L_0081a4a1;
L_0081a479:; BB(0x0081a479);
    /* 0081a479: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0081a47c: je 0x81a4d2 */ if (fZ) goto L_0081a4d2;
L_0081a47e:; BB(0x0081a47e);
    /* 0081a47e: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0081a481: je 0x81a4cd */ if (fZ) goto L_0081a4cd;
L_0081a483:; BB(0x0081a483);
    /* 0081a483: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0081a486: je 0x81a4c8 */ if (fZ) goto L_0081a4c8;
L_0081a488:; BB(0x0081a488);
    /* 0081a488: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0081a48b: je 0x81a4c3 */ if (fZ) goto L_0081a4c3;
L_0081a48d:; BB(0x0081a48d);
    /* 0081a48d: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0081a490: je 0x81a4be */ if (fZ) goto L_0081a4be;
L_0081a492:; BB(0x0081a492);
    /* 0081a492: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0081a495: je 0x81a4b9 */ if (fZ) goto L_0081a4b9;
L_0081a497:; BB(0x0081a497);
    /* 0081a497: movsx eax, word ptr [ecx + 2] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x2u));
    /* 0081a49b: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0081a49d: lea ecx, [ecx + eax + 4] */ r_ecx = (u32)(r_ecx+r_eax+0x4u);
L_0081a4a1:; BB(0x0081a4a1);
    /* 0081a4a1: movzx eax, word ptr [ecx] */ r_eax = (u32)R16((u32)(r_ecx));
    /* 0081a4a4: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0081a4a7: cmp eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0081a4ac: jne 0x81a460 */ if (!fZ) goto L_0081a460;
L_0081a4ae:; BB(0x0081a4ae);
    /* 0081a4ae: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 0081a4b2: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
L_0081a4b5:; BB(0x0081a4b5);
    /* 0081a4b5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0081a4b8: ret  */ FN_RET(0x0081a440); r_esp += 4; return;
L_0081a4b9:; BB(0x0081a4b9);
    /* 0081a4b9: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0081a4bc: jmp 0x81a4a1 */ goto L_0081a4a1;
L_0081a4be:; BB(0x0081a4be);
    /* 0081a4be: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0081a4c1: jmp 0x81a4a1 */ goto L_0081a4a1;
L_0081a4c3:; BB(0x0081a4c3);
    /* 0081a4c3: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0081a4c6: jmp 0x81a4a1 */ goto L_0081a4a1;
L_0081a4c8:; BB(0x0081a4c8);
    /* 0081a4c8: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0081a4cb: jmp 0x81a4a1 */ goto L_0081a4a1;
L_0081a4cd:; BB(0x0081a4cd);
    /* 0081a4cd: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0081a4d0: jmp 0x81a4a1 */ goto L_0081a4a1;
L_0081a4d2:; BB(0x0081a4d2);
    /* 0081a4d2: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0081a4d5: jmp 0x81a4a1 */ goto L_0081a4a1;
L_0081a4d7:; BB(0x0081a4d7);
    /* 0081a4d7: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0081a4da: jmp 0x81a4a1 */ goto L_0081a4a1;
L_0081a4dc:; BB(0x0081a4dc);
    /* 0081a4dc: movzx esi, word ptr [ecx + 2] */ r_esi = (u32)R16((u32)(r_ecx+0x2u));
    /* 0081a4e0: and esi, 0xe000 */ {  u32 a = r_esi; u32 b = 0xe000u; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0081a4e6: lea ebx, [ecx + 2] */ r_ebx = (u32)(r_ecx+0x2u);
    /* 0081a4e9: or esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 0081a4eb: movsx esi, si */ r_esi = (u32)(i32)(i16)(u16)r_esi;
    /* 0081a4ee: mov word ptr [ecx + 2], si */ W16((u32)(r_ecx+0x2u), (u16)r_esi);
    /* 0081a4f2: cmp eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0081a4f7: je 0x81a555 */ if (fZ) goto L_0081a555;
L_0081a4f9:; BB(0x0081a4f9);
    /* 0081a4f9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0081a4fb: jne 0x81a501 */ if (!fZ) goto L_0081a501;
L_0081a4fd:; BB(0x0081a4fd);
    /* 0081a4fd: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0081a4ff: jmp 0x81a4a1 */ goto L_0081a4a1;
L_0081a501:; BB(0x0081a501);
    /* 0081a501: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0081a504: je 0x81a54e */ if (fZ) goto L_0081a54e;
L_0081a506:; BB(0x0081a506);
    /* 0081a506: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0081a509: je 0x81a547 */ if (fZ) goto L_0081a547;
L_0081a50b:; BB(0x0081a50b);
    /* 0081a50b: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0081a50e: je 0x81a540 */ if (fZ) goto L_0081a540;
L_0081a510:; BB(0x0081a510);
    /* 0081a510: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0081a513: je 0x81a539 */ if (fZ) goto L_0081a539;
L_0081a515:; BB(0x0081a515);
    /* 0081a515: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0081a518: je 0x81a532 */ if (fZ) goto L_0081a532;
L_0081a51a:; BB(0x0081a51a);
    /* 0081a51a: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0081a51d: je 0x81a52a */ if (fZ) goto L_0081a52a;
L_0081a51f:; BB(0x0081a51f);
    /* 0081a51f: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0081a521: lea ecx, [ecx + esi + 4] */ r_ecx = (u32)(r_ecx+r_esi+0x4u);
    /* 0081a525: jmp 0x81a4a1 */ goto L_0081a4a1;
L_0081a52a:; BB(0x0081a52a);
    /* 0081a52a: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0081a52d: jmp 0x81a4a1 */ goto L_0081a4a1;
L_0081a532:; BB(0x0081a532);
    /* 0081a532: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0081a534: jmp 0x81a4a1 */ goto L_0081a4a1;
L_0081a539:; BB(0x0081a539);
    /* 0081a539: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0081a53b: jmp 0x81a4a1 */ goto L_0081a4a1;
L_0081a540:; BB(0x0081a540);
    /* 0081a540: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0081a542: jmp 0x81a4a1 */ goto L_0081a4a1;
L_0081a547:; BB(0x0081a547);
    /* 0081a547: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0081a549: jmp 0x81a4a1 */ goto L_0081a4a1;
L_0081a54e:; BB(0x0081a54e);
    /* 0081a54e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0081a550: jmp 0x81a4a1 */ goto L_0081a4a1;
L_0081a555:; BB(0x0081a555);
    /* 0081a555: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0081a557: jmp 0x81a4a1 */ goto L_0081a4a1;
}

void f_0081a55c(void) /* sub_81A55C */
{
    FN_ENTER(0x0081a55c);
    /* 0081a55c: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0081a560: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0081a562: je 0x81a587 */ if (fZ) goto L_0081a587;
L_0081a564:; BB(0x0081a564);
    /* 0081a564: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0081a566: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 0081a569: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0081a56b: je 0x81a587 */ if (fZ) goto L_0081a587;
L_0081a56d:; BB(0x0081a56d);
    /* 0081a56d: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 0081a56f: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0081a572: jne 0x81a57f */ if (!fZ) goto L_0081a57f;
L_0081a574:; BB(0x0081a574);
    /* 0081a574: mov ecx, 2 */ r_ecx = 0x2u;
    /* 0081a579: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 0081a57c: mov dword ptr [edx + 8], ecx */ W32((u32)(r_edx+0x8u), r_ecx);
L_0081a57f:; BB(0x0081a57f);
    /* 0081a57f: add edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0081a582: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0081a585: jne 0x81a56d */ if (!fZ) goto L_0081a56d;
L_0081a587:; BB(0x0081a587);
    /* 0081a587: ret  */ FN_RET(0x0081a55c); r_esp += 4; return;
}

void f_0081a588(void) /* sub_81A588 */
{
    FN_ENTER(0x0081a588);
    /* 0081a588: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0081a589: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0081a58a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0081a58b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0081a58c: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0081a590: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0081a592: je 0x81a62a */ if (fZ) goto L_0081a62a;
L_0081a598:; BB(0x0081a598);
    /* 0081a598: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 0081a59b: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0081a59d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0081a59f: je 0x81a5e1 */ if (fZ) goto L_0081a5e1;
L_0081a5a1:; BB(0x0081a5a1);
    /* 0081a5a1: movzx ebx, word ptr [esp + 0x18] */ r_ebx = (u32)R16((u32)(r_esp+0x18u));
    /* 0081a5a6: lea ecx, [ebp + ebp*4] */ r_ecx = (u32)(r_ebp+r_ebp*4);
    /* 0081a5aa: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0081a5ac: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
L_0081a5ae:; BB(0x0081a5ae);
    /* 0081a5ae: mov edi, dword ptr [eax + 0xc] */ r_edi = R32((u32)(r_eax+0xcu));
    /* 0081a5b1: mov esi, ecx */ r_esi = r_ecx;
    /* 0081a5b3: add esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_esi = r; fZ = (r == 0); }
    /* 0081a5b5: je 0x81a5d7 */ if (fZ) goto L_0081a5d7;
L_0081a5b7:; BB(0x0081a5b7);
    /* 0081a5b7: mov esi, dword ptr [ecx + edi] */ r_esi = R32((u32)(r_ecx+r_edi));
    /* 0081a5ba: mov edi, dword ptr [ecx + edi + 4] */ r_edi = R32((u32)(r_ecx+r_edi+0x4u));
    /* 0081a5be: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0081a5c0: je 0x81a5d7 */ if (fZ) goto L_0081a5d7;
L_0081a5c2:; BB(0x0081a5c2);
    /* 0081a5c2: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 0081a5c4: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0081a5c7: jne 0x81a5cc */ if (!fZ) goto L_0081a5cc;
L_0081a5c9:; BB(0x0081a5c9);
    /* 0081a5c9: mov dword ptr [esi + 4], ebx */ W32((u32)(r_esi+0x4u), r_ebx);
L_0081a5cc:; BB(0x0081a5cc);
    /* 0081a5cc: add esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0081a5cf: add edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edi = r; fZ = (r == 0); }
    /* 0081a5d2: jne 0x81a5c2 */ if (!fZ) goto L_0081a5c2;
L_0081a5d4:; BB(0x0081a5d4);
    /* 0081a5d4: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
L_0081a5d7:; BB(0x0081a5d7);
    /* 0081a5d7: add ecx, 0x14 */ {  u32 a = r_ecx; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0081a5da: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0081a5dd: cmp ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0081a5df: jb 0x81a5ae */ if (fC) goto L_0081a5ae;
L_0081a5e1:; BB(0x0081a5e1);
    /* 0081a5e1: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 0081a5e4: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0081a5e6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0081a5e8: je 0x81a62a */ if (fZ) goto L_0081a62a;
L_0081a5ea:; BB(0x0081a5ea);
    /* 0081a5ea: movzx ebx, word ptr [esp + 0x18] */ r_ebx = (u32)R16((u32)(r_esp+0x18u));
    /* 0081a5ef: lea ecx, [ebp + ebp*4] */ r_ecx = (u32)(r_ebp+r_ebp*4);
    /* 0081a5f3: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0081a5f5: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
L_0081a5f7:; BB(0x0081a5f7);
    /* 0081a5f7: mov edi, dword ptr [eax + 0x14] */ r_edi = R32((u32)(r_eax+0x14u));
    /* 0081a5fa: mov esi, ecx */ r_esi = r_ecx;
    /* 0081a5fc: add esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_esi = r; fZ = (r == 0); }
    /* 0081a5fe: je 0x81a620 */ if (fZ) goto L_0081a620;
L_0081a600:; BB(0x0081a600);
    /* 0081a600: mov esi, dword ptr [ecx + edi] */ r_esi = R32((u32)(r_ecx+r_edi));
    /* 0081a603: mov edi, dword ptr [ecx + edi + 4] */ r_edi = R32((u32)(r_ecx+r_edi+0x4u));
    /* 0081a607: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0081a609: je 0x81a620 */ if (fZ) goto L_0081a620;
L_0081a60b:; BB(0x0081a60b);
    /* 0081a60b: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 0081a60d: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0081a610: jne 0x81a615 */ if (!fZ) goto L_0081a615;
L_0081a612:; BB(0x0081a612);
    /* 0081a612: mov dword ptr [esi + 4], ebx */ W32((u32)(r_esi+0x4u), r_ebx);
L_0081a615:; BB(0x0081a615);
    /* 0081a615: add esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0081a618: add edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edi = r; fZ = (r == 0); }
    /* 0081a61b: jne 0x81a60b */ if (!fZ) goto L_0081a60b;
L_0081a61d:; BB(0x0081a61d);
    /* 0081a61d: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
L_0081a620:; BB(0x0081a620);
    /* 0081a620: add ecx, 0x14 */ {  u32 a = r_ecx; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0081a623: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0081a626: cmp ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0081a628: jb 0x81a5f7 */ if (fC) goto L_0081a5f7;
L_0081a62a:; BB(0x0081a62a);
    /* 0081a62a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0081a62b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0081a62c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0081a62d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0081a62e: ret  */ FN_RET(0x0081a588); r_esp += 4; return;
}

void f_0081a630(void) /* sub_81A630 */
{
    FN_ENTER(0x0081a630);
    /* 0081a630: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0081a631: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0081a632: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0081a633: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0081a634: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0081a635: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 0081a639: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0081a63b: je 0x81a69c */ if (fZ) goto L_0081a69c;
L_0081a63d:; BB(0x0081a63d);
    /* 0081a63d: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0081a63f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0081a641: je 0x81a69c */ if (fZ) goto L_0081a69c;
L_0081a643:; BB(0x0081a643);
    /* 0081a643: mov edx, dword ptr [edx + 4] */ r_edx = R32((u32)(r_edx+0x4u));
    /* 0081a646: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0081a649: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0081a64b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0081a64d: jbe 0x81a69c */ if ((fC||fZ)) goto L_0081a69c;
L_0081a64f:; BB(0x0081a64f);
    /* 0081a64f: lea edx, [ebx + ebx] */ r_edx = (u32)(r_ebx+r_ebx);
    /* 0081a652: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0081a654: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 0081a657: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0081a659: mov ebp, eax */ r_ebp = r_eax;
L_0081a65b:; BB(0x0081a65b);
    /* 0081a65b: mov esi, dword ptr [ecx + ebp] */ r_esi = R32((u32)(r_ecx+r_ebp));
    /* 0081a65e: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0081a660: je 0x81a68f */ if (fZ) goto L_0081a68f;
L_0081a662:; BB(0x0081a662);
    /* 0081a662: mov edi, dword ptr [esp + 0x1c] */ r_edi = R32((u32)(r_esp+0x1cu));
L_0081a666:; BB(0x0081a666);
    /* 0081a666: mov dl, byte ptr [edi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 0081a668: cmp dl, byte ptr [esi] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 0081a66a: jne 0x81a686 */ if (!fZ) goto L_0081a686;
L_0081a66c:; BB(0x0081a66c);
    /* 0081a66c: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 0081a66e: je 0x81a682 */ if (fZ) goto L_0081a682;
L_0081a670:; BB(0x0081a670);
    /* 0081a670: mov dl, byte ptr [edi + 1] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi+0x1u))) & 0xffu);
    /* 0081a673: cmp dl, byte ptr [esi + 1] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi+0x1u)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 0081a676: jne 0x81a686 */ if (!fZ) goto L_0081a686;
L_0081a678:; BB(0x0081a678);
    /* 0081a678: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0081a67b: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0081a67e: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 0081a680: jne 0x81a666 */ if (!fZ) goto L_0081a666;
L_0081a682:; BB(0x0081a682);
    /* 0081a682: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0081a684: jmp 0x81a68b */ goto L_0081a68b;
L_0081a686:; BB(0x0081a686);
    /* 0081a686: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 0081a688: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_0081a68b:; BB(0x0081a68b);
    /* 0081a68b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0081a68d: je 0x81a6a7 */ if (fZ) goto L_0081a6a7;
L_0081a68f:; BB(0x0081a68f);
    /* 0081a68f: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 0081a692: add ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0081a695: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0081a698: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0081a69a: jb 0x81a65b */ if (fC) goto L_0081a65b;
L_0081a69c:; BB(0x0081a69c);
    /* 0081a69c: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0081a6a1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0081a6a2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0081a6a3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0081a6a4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0081a6a5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0081a6a6: ret  */ FN_RET(0x0081a630); r_esp += 4; return;
L_0081a6a7:; BB(0x0081a6a7);
    /* 0081a6a7: mov eax, ebx */ r_eax = r_ebx;
    /* 0081a6a9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0081a6aa: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0081a6ab: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0081a6ac: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0081a6ad: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0081a6ae: ret  */ FN_RET(0x0081a630); r_esp += 4; return;
}

void f_0081a6b0(void) /* sub_81A6B0 */
{
    FN_ENTER(0x0081a6b0);
    /* 0081a6b0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0081a6b1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0081a6b2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0081a6b3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0081a6b4: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 0081a6b8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0081a6ba: je 0x81a769 */ if (fZ) goto L_0081a769;
L_0081a6c0:; BB(0x0081a6c0);
    /* 0081a6c0: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0081a6c3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0081a6c5: je 0x81a769 */ if (fZ) goto L_0081a769;
L_0081a6cb:; BB(0x0081a6cb);
    /* 0081a6cb: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 0081a6ce: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0081a6d0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0081a6d2: je 0x81a71a */ if (fZ) goto L_0081a71a;
L_0081a6d4:; BB(0x0081a6d4);
    /* 0081a6d4: lea ebp, [edi + edi*4] */ r_ebp = (u32)(r_edi+r_edi*4);
    /* 0081a6d7: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0081a6d9: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
L_0081a6db:; BB(0x0081a6db);
    /* 0081a6db: mov esi, dword ptr [eax + 0xc] */ r_esi = R32((u32)(r_eax+0xcu));
    /* 0081a6de: mov ebx, ebp */ r_ebx = r_ebp;
    /* 0081a6e0: add ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); }
    /* 0081a6e2: je 0x81a710 */ if (fZ) goto L_0081a710;
L_0081a6e4:; BB(0x0081a6e4);
    /* 0081a6e4: mov ebx, dword ptr [ebp + esi] */ r_ebx = R32((u32)(r_ebp+r_esi));
    /* 0081a6e8: mov esi, dword ptr [ebp + esi + 4] */ r_esi = R32((u32)(r_ebp+r_esi+0x4u));
    /* 0081a6ec: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0081a6ee: je 0x81a710 */ if (fZ) goto L_0081a710;
L_0081a6f0:; BB(0x0081a6f0);
    /* 0081a6f0: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0081a6f2: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0081a6f5: jne 0x81a702 */ if (!fZ) goto L_0081a702;
L_0081a6f7:; BB(0x0081a6f7);
    /* 0081a6f7: mov eax, 2 */ r_eax = 0x2u;
    /* 0081a6fc: mov dword ptr [ebx + 4], eax */ W32((u32)(r_ebx+0x4u), r_eax);
    /* 0081a6ff: mov dword ptr [ebx + 8], eax */ W32((u32)(r_ebx+0x8u), r_eax);
L_0081a702:; BB(0x0081a702);
    /* 0081a702: add ebx, 0x10 */ {  u32 a = r_ebx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0081a705: add esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_esi = r; fZ = (r == 0); }
    /* 0081a708: jne 0x81a6f0 */ if (!fZ) goto L_0081a6f0;
L_0081a70a:; BB(0x0081a70a);
    /* 0081a70a: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0081a70d: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
L_0081a710:; BB(0x0081a710);
    /* 0081a710: add ebp, 0x14 */ {  u32 a = r_ebp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0081a713: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0081a716: cmp edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0081a718: jb 0x81a6db */ if (fC) goto L_0081a6db;
L_0081a71a:; BB(0x0081a71a);
    /* 0081a71a: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 0081a71d: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0081a71f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0081a721: je 0x81a769 */ if (fZ) goto L_0081a769;
L_0081a723:; BB(0x0081a723);
    /* 0081a723: lea ebp, [edi + edi*4] */ r_ebp = (u32)(r_edi+r_edi*4);
    /* 0081a726: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0081a728: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
L_0081a72a:; BB(0x0081a72a);
    /* 0081a72a: mov esi, dword ptr [eax + 0x14] */ r_esi = R32((u32)(r_eax+0x14u));
    /* 0081a72d: mov ebx, ebp */ r_ebx = r_ebp;
    /* 0081a72f: add ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); }
    /* 0081a731: je 0x81a75f */ if (fZ) goto L_0081a75f;
L_0081a733:; BB(0x0081a733);
    /* 0081a733: mov ebx, dword ptr [ebp + esi] */ r_ebx = R32((u32)(r_ebp+r_esi));
    /* 0081a737: mov esi, dword ptr [ebp + esi + 4] */ r_esi = R32((u32)(r_ebp+r_esi+0x4u));
    /* 0081a73b: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0081a73d: je 0x81a75f */ if (fZ) goto L_0081a75f;
L_0081a73f:; BB(0x0081a73f);
    /* 0081a73f: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0081a741: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0081a744: jne 0x81a751 */ if (!fZ) goto L_0081a751;
L_0081a746:; BB(0x0081a746);
    /* 0081a746: mov eax, 2 */ r_eax = 0x2u;
    /* 0081a74b: mov dword ptr [ebx + 4], eax */ W32((u32)(r_ebx+0x4u), r_eax);
    /* 0081a74e: mov dword ptr [ebx + 8], eax */ W32((u32)(r_ebx+0x8u), r_eax);
L_0081a751:; BB(0x0081a751);
    /* 0081a751: add ebx, 0x10 */ {  u32 a = r_ebx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0081a754: add esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_esi = r; fZ = (r == 0); }
    /* 0081a757: jne 0x81a73f */ if (!fZ) goto L_0081a73f;
L_0081a759:; BB(0x0081a759);
    /* 0081a759: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0081a75c: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
L_0081a75f:; BB(0x0081a75f);
    /* 0081a75f: add ebp, 0x14 */ {  u32 a = r_ebp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0081a762: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0081a765: cmp edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0081a767: jb 0x81a72a */ if (fC) goto L_0081a72a;
L_0081a769:; BB(0x0081a769);
    /* 0081a769: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0081a76a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0081a76b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0081a76c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0081a76d: ret  */ FN_RET(0x0081a6b0); r_esp += 4; return;
}

void f_0081a770(void)
{
    FN_ENTER(0x0081a770);
    /* 0081a770: mov eax, dword ptr [0xaca4a4] */ r_eax = R32((u32)(0xaca4a4u));
    /* 0081a775: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0081a777: je 0x81a78a */ if (fZ) goto L_0081a78a;
L_0081a779:; BB(0x0081a779);
    /* 0081a779: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0081a77a: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x81a77fu); f_0082e960();
    /* 0081a77f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0081a780: mov dword ptr [0xaca4a4], 0 */ W32((u32)(0xaca4a4u), 0x0u);
L_0081a78a:; BB(0x0081a78a);
    /* 0081a78a: mov eax, dword ptr [0xaca4a0] */ r_eax = R32((u32)(0xaca4a0u));
    /* 0081a78f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0081a791: je 0x81a7a4 */ if (fZ) goto L_0081a7a4;
L_0081a793:; BB(0x0081a793);
    /* 0081a793: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0081a794: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x81a799u); f_0082e960();
    /* 0081a799: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0081a79a: mov dword ptr [0xaca4a0], 0 */ W32((u32)(0xaca4a0u), 0x0u);
L_0081a7a4:; BB(0x0081a7a4);
    /* 0081a7a4: ret  */ FN_RET(0x0081a770); r_esp += 4; return;
}

void f_0081a7a8(void) /* sub_81A7A8 */
{
    FN_ENTER(0x0081a7a8);
    /* 0081a7a8: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 0081a7ac: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0081a7ae: je 0x81a7bd */ if (fZ) goto L_0081a7bd;
L_0081a7b0:; BB(0x0081a7b0);
    /* 0081a7b0: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0081a7b2: call 0x829e74 */ r_esp -= 4; W32(r_esp, 0x81a7b7u); f_00829e74();
    /* 0081a7b7: mov eax, 1 */ r_eax = 0x1u;
    /* 0081a7bc: ret  */ FN_RET(0x0081a7a8); r_esp += 4; return;
L_0081a7bd:; BB(0x0081a7bd);
    /* 0081a7bd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0081a7bf: ret  */ FN_RET(0x0081a7a8); r_esp += 4; return;
}

void f_0081a7c0(void) /* sub_81A7C0 */
{
    FN_ENTER(0x0081a7c0);
    /* 0081a7c0: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 0081a7c4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0081a7c6: je 0x81a7d3 */ if (fZ) goto L_0081a7d3;
L_0081a7c8:; BB(0x0081a7c8);
    /* 0081a7c8: call 0x829de0 */ r_esp -= 4; W32(r_esp, 0x81a7cdu); f_00829de0();
    /* 0081a7cd: mov eax, 1 */ r_eax = 0x1u;
    /* 0081a7d2: ret  */ FN_RET(0x0081a7c0); r_esp += 4; return;
L_0081a7d3:; BB(0x0081a7d3);
    /* 0081a7d3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0081a7d5: ret  */ FN_RET(0x0081a7c0); r_esp += 4; return;
}

void f_0081a7d8(void) /* sub_81A7D8 */
{
    FN_ENTER(0x0081a7d8);
    /* 0081a7d8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0081a7d9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0081a7da: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0081a7db: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0081a7dc: sub esp, 0x88 */ {  u32 a = r_esp; u32 b = 0x88u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0081a7e2: mov eax, dword ptr [esp + 0x9c] */ r_eax = R32((u32)(r_esp+0x9cu));
    /* 0081a7e9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0081a7eb: mov ebx, dword ptr [esp + 0xa0] */ r_ebx = R32((u32)(r_esp+0xa0u));
    /* 0081a7f2: je 0x81a912 */ if (fZ) goto L_0081a912;
L_0081a7f8:; BB(0x0081a7f8);
    /* 0081a7f8: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0081a7fa: je 0x81a912 */ if (fZ) goto L_0081a912;
L_0081a800:; BB(0x0081a800);
    /* 0081a800: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0081a803: push 0x92b2b8 */ { u32 v = 0x92b2b8u; r_esp -= 4; W32(r_esp, v); }
    /* 0081a808: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0081a809: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0081a80a: call 0x78e1c0 */ r_esp -= 4; W32(r_esp, 0x81a80fu); f_0078e1c0();
    /* 0081a80f: lea ebp, [esp + 0xc] */ r_ebp = (u32)(r_esp+0xcu);
    /* 0081a813: push 0x1800 */ { u32 v = 0x1800u; r_esp -= 4; W32(r_esp, v); }
    /* 0081a818: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0081a81a: push dword ptr [0xaca4a4] */ { u32 v = R32((u32)(0xaca4a4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0081a820: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x81a825u); f_0086b688();
    /* 0081a825: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0081a828: mov edx, dword ptr [0xaca4a4] */ r_edx = R32((u32)(0xaca4a4u));
    /* 0081a82e: push 0x200 */ { u32 v = 0x200u; r_esp -= 4; W32(r_esp, v); }
    /* 0081a833: push dword ptr [0xaca4a0] */ { u32 v = R32((u32)(0xaca4a0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0081a839: lea ecx, [esp + 0x88] */ r_ecx = (u32)(r_esp+0x88u);
    /* 0081a840: call 0x83cd64 */ r_esp -= 4; W32(r_esp, 0x81a845u); f_0083cd64();
    /* 0081a845: lea eax, [esp + 0x80] */ r_eax = (u32)(r_esp+0x80u);
    /* 0081a84c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0081a84d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0081a84e: call 0x800bc0 */ r_esp -= 4; W32(r_esp, 0x81a853u); f_00800bc0();
    /* 0081a853: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0081a856: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0081a859: je 0x81a912 */ if (fZ) goto L_0081a912;
L_0081a85f:; BB(0x0081a85f);
    /* 0081a85f: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 0081a862: mov esi, dword ptr [ebx] */ r_esi = R32((u32)(r_ebx));
    /* 0081a864: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0081a866: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0081a868: jle 0x81a8fa */ if ((fZ||fS!=fO)) goto L_0081a8fa;
L_0081a86e:; BB(0x0081a86e);
    /* 0081a86e: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0081a871: jl 0x81a90a */ if ((fS!=fO)) goto L_0081a90a;
L_0081a877:; BB(0x0081a877);
    /* 0081a877: mov ebx, dword ptr [0xaca4a4] */ r_ebx = R32((u32)(0xaca4a4u));
    /* 0081a87d: lea ecx, [eax - 5] */ r_ecx = (u32)(r_eax+0xfffffffbu);
    /* 0081a880: lea edi, [ebp + ebp] */ r_edi = (u32)(r_ebp+r_ebp);
    /* 0081a884: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0081a886: lea edx, [edi + edi] */ r_edx = (u32)(r_edi+r_edi);
    /* 0081a889: add edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
L_0081a88b:; BB(0x0081a88b);
    /* 0081a88b: mov edi, dword ptr [edx + ebx + 8] */ r_edi = R32((u32)(r_edx+r_ebx+0x8u));
    /* 0081a88f: mov dword ptr [esi + edx + 8], edi */ W32((u32)(r_esi+r_edx+0x8u), r_edi);
    /* 0081a893: mov edi, dword ptr [edx + ebx + 4] */ r_edi = R32((u32)(r_edx+r_ebx+0x4u));
    /* 0081a897: add ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0081a89a: mov dword ptr [esi + edx + 4], edi */ W32((u32)(r_esi+r_edx+0x4u), r_edi);
    /* 0081a89e: mov edi, dword ptr [edx + ebx + 0x14] */ r_edi = R32((u32)(r_edx+r_ebx+0x14u));
    /* 0081a8a2: mov dword ptr [esi + edx + 0x14], edi */ W32((u32)(r_esi+r_edx+0x14u), r_edi);
    /* 0081a8a6: mov edi, dword ptr [edx + ebx + 0x10] */ r_edi = R32((u32)(r_edx+r_ebx+0x10u));
    /* 0081a8aa: mov dword ptr [esi + edx + 0x10], edi */ W32((u32)(r_esi+r_edx+0x10u), r_edi);
    /* 0081a8ae: mov edi, dword ptr [edx + ebx + 0x20] */ r_edi = R32((u32)(r_edx+r_ebx+0x20u));
    /* 0081a8b2: mov dword ptr [esi + edx + 0x20], edi */ W32((u32)(r_esi+r_edx+0x20u), r_edi);
    /* 0081a8b6: mov edi, dword ptr [edx + ebx + 0x1c] */ r_edi = R32((u32)(r_edx+r_ebx+0x1cu));
    /* 0081a8ba: mov dword ptr [esi + edx + 0x1c], edi */ W32((u32)(r_esi+r_edx+0x1cu), r_edi);
    /* 0081a8be: mov edi, dword ptr [edx + ebx + 0x2c] */ r_edi = R32((u32)(r_edx+r_ebx+0x2cu));
    /* 0081a8c2: mov dword ptr [esi + edx + 0x2c], edi */ W32((u32)(r_esi+r_edx+0x2cu), r_edi);
    /* 0081a8c6: mov edi, dword ptr [edx + ebx + 0x28] */ r_edi = R32((u32)(r_edx+r_ebx+0x28u));
    /* 0081a8ca: mov dword ptr [esi + edx + 0x28], edi */ W32((u32)(r_esi+r_edx+0x28u), r_edi);
    /* 0081a8ce: add edx, 0x30 */ {  u32 a = r_edx; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0081a8d1: cmp ebp, ecx */ {  u32 a = r_ebp; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0081a8d3: jle 0x81a88b */ if ((fZ||fS!=fO)) goto L_0081a88b;
L_0081a8d5:; BB(0x0081a8d5);
    /* 0081a8d5: lea ecx, [ebp + ebp] */ r_ecx = (u32)(r_ebp+r_ebp);
    /* 0081a8d9: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0081a8db: lea edx, [ecx + ecx] */ r_edx = (u32)(r_ecx+r_ecx);
    /* 0081a8de: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
L_0081a8e0:; BB(0x0081a8e0);
    /* 0081a8e0: mov ecx, dword ptr [edx + ebx + 8] */ r_ecx = R32((u32)(r_edx+r_ebx+0x8u));
    /* 0081a8e4: mov dword ptr [esi + edx + 8], ecx */ W32((u32)(r_esi+r_edx+0x8u), r_ecx);
    /* 0081a8e8: mov edi, dword ptr [edx + ebx + 4] */ r_edi = R32((u32)(r_edx+r_ebx+0x4u));
    /* 0081a8ec: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0081a8ef: mov dword ptr [esi + edx + 4], edi */ W32((u32)(r_esi+r_edx+0x4u), r_edi);
    /* 0081a8f3: add edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0081a8f6: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0081a8f8: jl 0x81a8e0 */ if ((fS!=fO)) goto L_0081a8e0;
L_0081a8fa:; BB(0x0081a8fa);
    /* 0081a8fa: mov eax, 1 */ r_eax = 0x1u;
    /* 0081a8ff: add esp, 0x88 */ {  u32 a = r_esp; u32 b = 0x88u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0081a905: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0081a906: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0081a907: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0081a908: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0081a909: ret  */ FN_RET(0x0081a7d8); r_esp += 4; return;
L_0081a90a:; BB(0x0081a90a);
    /* 0081a90a: mov ebx, dword ptr [0xaca4a4] */ r_ebx = R32((u32)(0xaca4a4u));
    /* 0081a910: jmp 0x81a8d5 */ goto L_0081a8d5;
L_0081a912:; BB(0x0081a912);
    /* 0081a912: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0081a914: add esp, 0x88 */ {  u32 a = r_esp; u32 b = 0x88u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0081a91a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0081a91b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0081a91c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0081a91d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0081a91e: ret  */ FN_RET(0x0081a7d8); r_esp += 4; return;
}

void f_0081a920(void) /* sub_81A920 */
{
    FN_ENTER(0x0081a920);
    /* 0081a920: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0081a923: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0081a927: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0081a92b: call 0x81a93c */ r_esp -= 4; W32(r_esp, 0x81a930u); f_0081a93c();
    /* 0081a930: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0081a933: ret  */ FN_RET(0x0081a920); r_esp += 4; return;
}

void f_0081a934(void) /* sub_81A934 */
{
    FN_ENTER(0x0081a934);
    /* 0081a934: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0081a938: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 0081a93c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0081a93d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0081a93e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0081a93f: mov ebx, edx */ r_ebx = r_edx;
    /* 0081a941: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0081a942: push 0x989cf4 */ { u32 v = 0x989cf4u; r_esp -= 4; W32(r_esp, v); }
    /* 0081a947: push 0xaca3a0 */ { u32 v = 0xaca3a0u; r_esp -= 4; W32(r_esp, v); }
    /* 0081a94c: call 0x858bf5 */ r_esp -= 4; W32(r_esp, 0x81a951u); f_00858bf5();
    /* 0081a951: push 0xaca3a0 */ { u32 v = 0xaca3a0u; r_esp -= 4; W32(r_esp, v); }
    /* 0081a956: call 0x5b9554 */ r_esp -= 4; W32(r_esp, 0x81a95bu); f_005b9554();
    /* 0081a95b: mov edi, eax */ r_edi = r_eax;
    /* 0081a95d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0081a960: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0081a962: je 0x81a9aa */ if (fZ) goto L_0081a9aa;
L_0081a964:; BB(0x0081a964);
    /* 0081a964: push 0x100000 */ { u32 v = 0x100000u; r_esp -= 4; W32(r_esp, v); }
    /* 0081a969: call 0x82e940 */ r_esp -= 4; W32(r_esp, 0x81a96eu); f_0082e940();
    /* 0081a96e: mov esi, eax */ r_esi = r_eax;
    /* 0081a970: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0081a971: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0081a972: call 0x788154 */ r_esp -= 4; W32(r_esp, 0x81a977u); f_00788154();
    /* 0081a977: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0081a97a: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0081a97f: call 0x82aab8 */ r_esp -= 4; W32(r_esp, 0x81a984u); f_0082aab8();
    /* 0081a984: mov ecx, esi */ r_ecx = r_esi;
    /* 0081a986: mov edx, ebx */ r_edx = r_ebx;
    /* 0081a988: call 0x82a7d8 */ r_esp -= 4; W32(r_esp, 0x81a98du); f_0082a7d8();
    /* 0081a98d: call 0x82aac0 */ r_esp -= 4; W32(r_esp, 0x81a992u); f_0082aac0();
    /* 0081a992: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0081a993: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x81a998u); f_0082e960();
    /* 0081a998: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0081a999: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x81a99eu); f_0082e960();
    /* 0081a99e: mov eax, 1 */ r_eax = 0x1u;
    /* 0081a9a3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0081a9a6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0081a9a7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0081a9a8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0081a9a9: ret  */ FN_RET(0x0081a934); r_esp += 4; return;
L_0081a9aa:; BB(0x0081a9aa);
    /* 0081a9aa: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0081a9ab: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x81a9b0u); f_0082e960();
    /* 0081a9b0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0081a9b2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0081a9b3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0081a9b4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0081a9b5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0081a9b6: ret  */ FN_RET(0x0081a934); r_esp += 4; return;
}

void f_0081a93c(void) /* sub_81A93C */
{
    FN_ENTER(0x0081a93c);
    /* 0081a93c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0081a93d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0081a93e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0081a93f: mov ebx, edx */ r_ebx = r_edx;
    /* 0081a941: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0081a942: push 0x989cf4 */ { u32 v = 0x989cf4u; r_esp -= 4; W32(r_esp, v); }
    /* 0081a947: push 0xaca3a0 */ { u32 v = 0xaca3a0u; r_esp -= 4; W32(r_esp, v); }
    /* 0081a94c: call 0x858bf5 */ r_esp -= 4; W32(r_esp, 0x81a951u); f_00858bf5();
    /* 0081a951: push 0xaca3a0 */ { u32 v = 0xaca3a0u; r_esp -= 4; W32(r_esp, v); }
    /* 0081a956: call 0x5b9554 */ r_esp -= 4; W32(r_esp, 0x81a95bu); f_005b9554();
    /* 0081a95b: mov edi, eax */ r_edi = r_eax;
    /* 0081a95d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0081a960: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0081a962: je 0x81a9aa */ if (fZ) goto L_0081a9aa;
L_0081a964:; BB(0x0081a964);
    /* 0081a964: push 0x100000 */ { u32 v = 0x100000u; r_esp -= 4; W32(r_esp, v); }
    /* 0081a969: call 0x82e940 */ r_esp -= 4; W32(r_esp, 0x81a96eu); f_0082e940();
    /* 0081a96e: mov esi, eax */ r_esi = r_eax;
    /* 0081a970: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0081a971: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0081a972: call 0x788154 */ r_esp -= 4; W32(r_esp, 0x81a977u); f_00788154();
    /* 0081a977: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0081a97a: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0081a97f: call 0x82aab8 */ r_esp -= 4; W32(r_esp, 0x81a984u); f_0082aab8();
    /* 0081a984: mov ecx, esi */ r_ecx = r_esi;
    /* 0081a986: mov edx, ebx */ r_edx = r_ebx;
    /* 0081a988: call 0x82a7d8 */ r_esp -= 4; W32(r_esp, 0x81a98du); f_0082a7d8();
    /* 0081a98d: call 0x82aac0 */ r_esp -= 4; W32(r_esp, 0x81a992u); f_0082aac0();
    /* 0081a992: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0081a993: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x81a998u); f_0082e960();
    /* 0081a998: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0081a999: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x81a99eu); f_0082e960();
    /* 0081a99e: mov eax, 1 */ r_eax = 0x1u;
    /* 0081a9a3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0081a9a6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0081a9a7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0081a9a8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0081a9a9: ret  */ FN_RET(0x0081a93c); r_esp += 4; return;
L_0081a9aa:; BB(0x0081a9aa);
    /* 0081a9aa: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0081a9ab: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x81a9b0u); f_0082e960();
    /* 0081a9b0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0081a9b2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0081a9b3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0081a9b4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0081a9b5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0081a9b6: ret  */ FN_RET(0x0081a93c); r_esp += 4; return;
}

void f_0081a9b8(void) /* sub_81A9B8 */
{
    FN_ENTER(0x0081a9b8);
    /* 0081a9b8: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 0081a9bc: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0081a9be: je 0x81a9cb */ if (fZ) goto L_0081a9cb;
L_0081a9c0:; BB(0x0081a9c0);
    /* 0081a9c0: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x81a9c5u); f_00829cc8();
    /* 0081a9c5: mov eax, 1 */ r_eax = 0x1u;
    /* 0081a9ca: ret  */ FN_RET(0x0081a9b8); r_esp += 4; return;
L_0081a9cb:; BB(0x0081a9cb);
    /* 0081a9cb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0081a9cd: ret  */ FN_RET(0x0081a9b8); r_esp += 4; return;
}

void f_0081a9d0(void)
{
    FN_ENTER(0x0081a9d0);
    /* 0081a9d0: push 0x1800 */ { u32 v = 0x1800u; r_esp -= 4; W32(r_esp, v); }
    /* 0081a9d5: call 0x82e940 */ r_esp -= 4; W32(r_esp, 0x81a9dau); f_0082e940();
    /* 0081a9da: mov dword ptr [0xaca4a4], eax */ W32((u32)(0xaca4a4u), r_eax);
    /* 0081a9df: push 0x1800 */ { u32 v = 0x1800u; r_esp -= 4; W32(r_esp, v); }
    /* 0081a9e4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0081a9e6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0081a9e7: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x81a9ecu); f_0086b688();
    /* 0081a9ec: push 0x3800 */ { u32 v = 0x3800u; r_esp -= 4; W32(r_esp, v); }
    /* 0081a9f1: call 0x82e940 */ r_esp -= 4; W32(r_esp, 0x81a9f6u); f_0082e940();
    /* 0081a9f6: mov dword ptr [0xaca4a0], eax */ W32((u32)(0xaca4a0u), r_eax);
    /* 0081a9fb: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0081a9fe: ret  */ FN_RET(0x0081a9d0); r_esp += 4; return;
}

void f_0081aa00(void) /* sub_81AA00 */
{
    FN_ENTER(0x0081aa00);
    /* 0081aa00: mov eax, dword ptr [0xaca4e4] */ r_eax = R32((u32)(0xaca4e4u));
    /* 0081aa05: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0081aa07: je 0x81aa4f */ if (fZ) goto L_0081aa4f;
L_0081aa09:; BB(0x0081aa09);
    /* 0081aa09: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0081aa0c: jne 0x81aa3b */ if (!fZ) goto L_0081aa3b;
L_0081aa0e:; BB(0x0081aa0e);
    /* 0081aa0e: mov edx, dword ptr [0xaca4e0] */ r_edx = R32((u32)(0xaca4e0u));
    /* 0081aa14: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0081aa16: je 0x81aa2f */ if (fZ) goto L_0081aa2f;
L_0081aa18:; BB(0x0081aa18);
    /* 0081aa18: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0081aa1c: mov dword ptr [0xaca4e0], 0 */ W32((u32)(0xaca4e0u), 0x0u);
    /* 0081aa26: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0081aa2b: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_0081aa2f:; BB(0x0081aa2f);
    /* 0081aa2f: mov dword ptr [0xaca4e4], 2 */ W32((u32)(0xaca4e4u), 0x2u);
    /* 0081aa39: jmp 0x81aa4f */ goto L_0081aa4f;
L_0081aa3b:; BB(0x0081aa3b);
    /* 0081aa3b: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0081aa3e: jne 0x81aa4f */ if (!fZ) goto L_0081aa4f;
L_0081aa40:; BB(0x0081aa40);
    /* 0081aa40: mov dword ptr [0xaca4e4], 0 */ W32((u32)(0xaca4e4u), 0x0u);
    /* 0081aa4a: call 0x81aac8 */ r_esp -= 4; W32(r_esp, 0x81aa4fu); f_0081aac8();
L_0081aa4f:; BB(0x0081aa4f);
    /* 0081aa4f: call 0x83adbc */ r_esp -= 4; W32(r_esp, 0x81aa54u); f_0083adbc();
    /* 0081aa54: call 0x7becd4 */ r_esp -= 4; W32(r_esp, 0x81aa59u); f_007becd4();
    /* 0081aa59: call 0x7bfba0 */ r_esp -= 4; W32(r_esp, 0x81aa5eu); f_007bfba0();
    /* 0081aa5e: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 0081aa63: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x81aa68u); f_0061cdb0();
    /* 0081aa68: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 0081aa6d: call 0x81745c */ r_esp -= 4; W32(r_esp, 0x81aa72u); f_0081745c();
    /* 0081aa72: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 0081aa77: call 0x817604 */ r_esp -= 4; W32(r_esp, 0x81aa7cu); f_00817604();
    /* 0081aa7c: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 0081aa81: call 0x818f80 */ r_esp -= 4; W32(r_esp, 0x81aa86u); f_00818f80();
    /* 0081aa86: call 0x5ba748 */ r_esp -= 4; W32(r_esp, 0x81aa8bu); f_005ba748();
    /* 0081aa8b: call 0x814168 */ r_esp -= 4; W32(r_esp, 0x81aa90u); f_00814168();
    /* 0081aa90: call 0x6c38bc */ r_esp -= 4; W32(r_esp, 0x81aa95u); f_006c38bc();
    /* 0081aa95: mov eax, dword ptr [0xa95de0] */ r_eax = R32((u32)(0xa95de0u));
    /* 0081aa9a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0081aa9c: jne 0x81aac0 */ if (!fZ) goto L_0081aac0;
L_0081aa9e:; BB(0x0081aa9e);
    /* 0081aa9e: call 0x7bfedc */ r_esp -= 4; W32(r_esp, 0x81aaa3u); f_007bfedc();
    /* 0081aaa3: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 0081aaa6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0081aaa8: je 0x81aaaf */ if (fZ) goto L_0081aaaf;
L_0081aaaa:; BB(0x0081aaaa);
    /* 0081aaaa: call 0x7a6174 */ r_esp -= 4; W32(r_esp, 0x81aaafu); f_007a6174();
L_0081aaaf:; BB(0x0081aaaf);
    /* 0081aaaf: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x81aab4u); f_006dc358();
    /* 0081aab4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0081aab6: je 0x81aac0 */ if (fZ) goto L_0081aac0;
L_0081aab8:; BB(0x0081aab8);
    /* 0081aab8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0081aaba: call 0x7a60dc */ r_esp -= 4; W32(r_esp, 0x81aabfu); f_007a60dc();
    /* 0081aabf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0081aac0:; BB(0x0081aac0);
    /* 0081aac0: call 0x80030c */ r_esp -= 4; W32(r_esp, 0x81aac5u); f_0080030c();
    /* 0081aac5: ret  */ FN_RET(0x0081aa00); r_esp += 4; return;
}

void f_0081aac8(void) /* sub_81AAC8 */
{
    FN_ENTER(0x0081aac8);
    /* 0081aac8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0081aac9: mov ebp, esp */ r_ebp = r_esp;
    /* 0081aacb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0081aacd: push 0x8f795e */ { u32 v = 0x8f795eu; r_esp -= 4; W32(r_esp, v); }
    /* 0081aad2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0081aad8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0081aad9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0081aae0: sub esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0081aae3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0081aae6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0081aae9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0081aaec: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0081aaef: pushal  */ { u32 sp = r_esp; r_esp -= 32; W32(r_esp, r_edi); W32(r_esp + 4, r_esi); W32(r_esp + 8, r_ebp); W32(r_esp + 12, sp); W32(r_esp + 16, r_ebx); W32(r_esp + 20, r_edx); W32(r_esp + 24, r_ecx); W32(r_esp + 28, r_eax); }
    /* 0081aaf0: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0081aaf2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0081aaf4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0081aaf6: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0081aaf8: call dword ptr [0x8f8348] */ { u32 t = R32((u32)(0x8f8348u)); r_esp -= 4; W32(r_esp, 0x81aafeu); call_ind(t); }
    /* 0081aafe: popal  */ { r_edi = R32(r_esp); r_esi = R32(r_esp + 4); r_ebp = R32(r_esp + 8); r_ebx = R32(r_esp + 16); r_edx = R32(r_esp + 20); r_ecx = R32(r_esp + 24); r_eax = R32(r_esp + 28); r_esp += 32; }
    /* 0081aaff: pushal  */ { u32 sp = r_esp; r_esp -= 32; W32(r_esp, r_edi); W32(r_esp + 4, r_esi); W32(r_esp + 8, r_ebp); W32(r_esp + 12, sp); W32(r_esp + 16, r_ebx); W32(r_esp + 20, r_edx); W32(r_esp + 24, r_ecx); W32(r_esp + 28, r_eax); }
    /* 0081ab00: jmp 0x81dd21 */ goto L_0081dd21;
L_0081dd21:; BB(0x0081dd21);
    /* 0081dd21: popal  */ { r_edi = R32(r_esp); r_esi = R32(r_esp + 4); r_ebp = R32(r_esp + 8); r_ebx = R32(r_esp + 16); r_edx = R32(r_esp + 20); r_ecx = R32(r_esp + 24); r_eax = R32(r_esp + 28); r_esp += 32; }
    /* 0081dd22: mov eax, dword ptr [0xa165f0] */ r_eax = R32((u32)(0xa165f0u));
    /* 0081dd27: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0081dd29: je 0x81dd41 */ if (fZ) goto L_0081dd41;
L_0081dd2b:; BB(0x0081dd2b);
    /* 0081dd2b: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0081dd2e: je 0x81dd41 */ if (fZ) goto L_0081dd41;
L_0081dd30:; BB(0x0081dd30);
    /* 0081dd30: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0081dd31: mov eax, 0x971e6c */ r_eax = 0x971e6cu;
    /* 0081dd36: call 0x81e118 */ r_esp -= 4; W32(r_esp, 0x81dd3bu); f_0081e118();
    /* 0081dd3b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0081dd3c: mov eax, dword ptr [0xa165f0] */ r_eax = R32((u32)(0xa165f0u));
L_0081dd41:; BB(0x0081dd41);
    /* 0081dd41: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0081dd44: ja 0x81e066 */ if ((!fC&&!fZ)) goto L_0081e066;
L_0081dd4a:; BB(0x0081dd4a);
    /* 0081dd4a: mov eax, dword ptr [eax*4 + 0x989d28] */ r_eax = R32((u32)(r_eax*4+0x989d28u));
    /* 0081dd51: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0081e066:; BB(0x0081e066);
    /* 0081e066: pushal  */ { u32 sp = r_esp; r_esp -= 32; W32(r_esp, r_edi); W32(r_esp + 4, r_esi); W32(r_esp + 8, r_ebp); W32(r_esp + 12, sp); W32(r_esp + 16, r_ebx); W32(r_esp + 20, r_edx); W32(r_esp + 24, r_ecx); W32(r_esp + 28, r_eax); }
    /* 0081e067: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0081e069: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0081e06b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0081e06d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0081e06f: call dword ptr [0x8f8348] */ { u32 t = R32((u32)(0x8f8348u)); r_esp -= 4; W32(r_esp, 0x81e075u); call_ind(t); }
    /* 0081e075: jmp 0x81e095 */ goto L_0081e095;
L_0081e095:; BB(0x0081e095);
    /* 0081e095: popal  */ { r_edi = R32(r_esp); r_esi = R32(r_esp + 4); r_ebp = R32(r_esp + 8); r_ebx = R32(r_esp + 16); r_edx = R32(r_esp + 20); r_ecx = R32(r_esp + 24); r_eax = R32(r_esp + 28); r_esp += 32; }
    /* 0081e096: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0081e099: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0081e09c: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0081e09f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0081e0a2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0081e0a9: mov esp, ebp */ r_esp = r_ebp;
    /* 0081e0ab: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0081e0ac: ret  */ FN_RET(0x0081aac8); r_esp += 4; return;
}

