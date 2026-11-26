#include "protos.h"

void f_005bb0e8(void) /* sub_5BB0E8 */
{
    FN_ENTER(0x005bb0e8);
    /* 005bb0e8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bb0e9: mov ebp, esp */ r_ebp = r_esp;
    /* 005bb0eb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005bb0ed: push 0x8d9370 */ { u32 v = 0x8d9370u; r_esp -= 4; W32(r_esp, v); }
    /* 005bb0f2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005bb0f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bb0f9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005bb100: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005bb103: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005bb106: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005bb109: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005bb10c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005bb10f: call 0x5b9134 */ r_esp -= 4; W32(r_esp, 0x5bb114u); f_005b9134();
    /* 005bb114: push 0x800 */ { u32 v = 0x800u; r_esp -= 4; W32(r_esp, v); }
    /* 005bb119: call 0x82e940 */ r_esp -= 4; W32(r_esp, 0x5bb11eu); f_0082e940();
    /* 005bb11e: mov dword ptr [0xa74b70], eax */ W32((u32)(0xa74b70u), r_eax);
    /* 005bb123: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 005bb125: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005bb127: mov dword ptr [0xa74b68], eax */ W32((u32)(0xa74b68u), r_eax);
    /* 005bb12c: mov dword ptr [0xa74b64], eax */ W32((u32)(0xa74b64u), r_eax);
    /* 005bb131: mov dword ptr [0xa74b6c], eax */ W32((u32)(0xa74b6cu), r_eax);
    /* 005bb136: mov dword ptr [0xa74b74], eax */ W32((u32)(0xa74b74u), r_eax);
    /* 005bb13b: mov dword ptr [0xa74b60], eax */ W32((u32)(0xa74b60u), r_eax);
    /* 005bb140: mov dword ptr [0xa74b5c], eax */ W32((u32)(0xa74b5cu), r_eax);
    /* 005bb145: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005bb148: call 0x7a8b68 */ r_esp -= 4; W32(r_esp, 0x5bb14du); f_007a8b68();
    /* 005bb14d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bb150: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005bb153: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bb155: je 0x5bb191 */ if (fZ) goto L_005bb191;
L_005bb157:; BB(0x005bb157);
    /* 005bb157: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005bb15e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005bb165: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005bb168: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 005bb16a: push 0x4000 */ { u32 v = 0x4000u; r_esp -= 4; W32(r_esp, v); }
    /* 005bb16f: call 0x7a89dc */ r_esp -= 4; W32(r_esp, 0x5bb174u); f_007a89dc();
    /* 005bb174: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005bb177: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005bb17e:; BB(0x005bb17e);
    /* 005bb17e: mov dword ptr [0xa74b4c], eax */ W32((u32)(0xa74b4cu), r_eax);
    /* 005bb183: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005bb186: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005bb18d: mov esp, ebp */ r_esp = r_ebp;
    /* 005bb18f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bb190: ret  */ FN_RET(0x005bb0e8); r_esp += 4; return;
L_005bb191:; BB(0x005bb191);
    /* 005bb191: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005bb193: jmp 0x5bb17e */ goto L_005bb17e;
}

void f_005bb198(void) /* sub_5BB198 */
{
    FN_ENTER(0x005bb198);
    /* 005bb198: call 0x5bb1a0 */ r_esp -= 4; W32(r_esp, 0x5bb19du); f_005bb1a0();
    /* 005bb19d: ret  */ FN_RET(0x005bb198); r_esp += 4; return;
}

void f_005bb1a0(void) /* sub_5BB1A0 */
{
    FN_ENTER(0x005bb1a0);
    /* 005bb1a0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005bb1a1: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005bb1a4: mov eax, dword ptr [0xa8d494] */ r_eax = R32((u32)(0xa8d494u));
    /* 005bb1a9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bb1ab: je 0x5bb206 */ if (fZ) goto L_005bb206;
L_005bb1ad:; BB(0x005bb1ad);
    /* 005bb1ad: mov edi, dword ptr [0x9c1ea0] */ r_edi = R32((u32)(0x9c1ea0u));
    /* 005bb1b3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005bb1b5: mov dh, byte ptr [edi] */ r_edx = (r_edx & 0xffff00ffu) | (((R8((u32)(r_edi))) & 0xffu) << 8);
    /* 005bb1b7: mov ecx, edi */ r_ecx = r_edi;
    /* 005bb1b9: test dh, dh */ {  u32 a = (u8)(r_edx>>8); u32 b = (u8)(r_edx>>8); u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005bb1bb: je 0x5bb1c9 */ if (fZ) goto L_005bb1c9;
L_005bb1bd:; BB(0x005bb1bd);
    /* 005bb1bd: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005bb1c0: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005bb1c3: mov dl, byte ptr [ecx] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx))) & 0xffu);
    /* 005bb1c5: test dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005bb1c7: jne 0x5bb1bd */ if (!fZ) goto L_005bb1bd;
L_005bb1c9:; BB(0x005bb1c9);
    /* 005bb1c9: mov edi, eax */ r_edi = r_eax;
    /* 005bb1cb: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005bb1cd: jle 0x5bb1f5 */ if ((fZ||fS!=fO)) goto L_005bb1f5;
L_005bb1cf:; BB(0x005bb1cf);
    /* 005bb1cf: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 005bb1d2: push 0x92b69c */ { u32 v = 0x92b69cu; r_esp -= 4; W32(r_esp, v); }
    /* 005bb1d7: push 0xa8d4a0 */ { u32 v = 0xa8d4a0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bb1dc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bb1dd: call 0x78e1c0 */ r_esp -= 4; W32(r_esp, 0x5bb1e2u); f_0078e1c0();
    /* 005bb1e2: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 005bb1e6: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005bb1e7: push 0xa75380 */ { u32 v = 0xa75380u; r_esp -= 4; W32(r_esp, v); }
    /* 005bb1ec: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bb1ed: call 0x5b9f68 */ r_esp -= 4; W32(r_esp, 0x5bb1f2u); f_005b9f68();
    /* 005bb1f2: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005bb1f5:; BB(0x005bb1f5);
    /* 005bb1f5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005bb1f7: mov dword ptr [0xa8d490], eax */ W32((u32)(0xa8d490u), r_eax);
    /* 005bb1fc: mov dword ptr [0xa8d494], eax */ W32((u32)(0xa8d494u), r_eax);
    /* 005bb201: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005bb204: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005bb205: ret  */ FN_RET(0x005bb1a0); r_esp += 4; return;
L_005bb206:; BB(0x005bb206);
    /* 005bb206: push dword ptr [0xa8d49c] */ { u32 v = R32((u32)(0xa8d49cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005bb20c: call 0x86db40 */ r_esp -= 4; W32(r_esp, 0x5bb211u); f_0086db40();
    /* 005bb211: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005bb212: mov dword ptr [0xa8d49c], 0 */ W32((u32)(0xa8d49cu), 0x0u);
    /* 005bb21c: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005bb21f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005bb220: ret  */ FN_RET(0x005bb1a0); r_esp += 4; return;
}

void f_005bb224(void) /* sub_5BB224 */
{
    FN_ENTER(0x005bb224);
    /* 005bb224: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005bb225: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bb226: sub esp, 0x10c */ {  u32 a = r_esp; u32 b = 0x10cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005bb22c: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005bb22e: mov esi, dword ptr [esp + 0x118] */ r_esi = R32((u32)(r_esp+0x118u));
    /* 005bb235: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005bb237: mov dword ptr [ebp + 0x20], eax */ W32((u32)(r_ebp+0x20u), r_eax);
    /* 005bb23a: mov dword ptr [ebp + 0x28], eax */ W32((u32)(r_ebp+0x28u), r_eax);
    /* 005bb23d: call 0x5bc004 */ r_esp -= 4; W32(r_esp, 0x5bb242u); f_005bc004();
    /* 005bb242: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005bb243: call 0x5b92f4 */ r_esp -= 4; W32(r_esp, 0x5bb248u); f_005b92f4();
    /* 005bb248: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005bb249: mov dword ptr [0xa8d48c], eax */ W32((u32)(0xa8d48cu), r_eax);
    /* 005bb24e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005bb250: jle 0x5bb2ab */ if ((fZ||fS!=fO)) goto L_005bb2ab;
L_005bb252:; BB(0x005bb252);
    /* 005bb252: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bb254: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005bb255: call 0x708238 */ r_esp -= 4; W32(r_esp, 0x5bb25au); f_00708238();
    /* 005bb25a: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 005bb25c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005bb25d: mov dword ptr [ebp + 0x20], eax */ W32((u32)(r_ebp+0x20u), r_eax);
    /* 005bb260: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bb261: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x5bb266u); f_00858900();
    /* 005bb266: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005bb269:; BB(0x005bb269);
    /* 005bb269: mov eax, dword ptr [esp + 0x11c] */ r_eax = R32((u32)(r_esp+0x11cu));
    /* 005bb270: mov dword ptr [ebp + 0x24], eax */ W32((u32)(r_ebp+0x24u), r_eax);
    /* 005bb273: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bb275: jne 0x5bb29e */ if (!fZ) goto L_005bb29e;
L_005bb277:; BB(0x005bb277);
    /* 005bb277: call 0x5b7a28 */ r_esp -= 4; W32(r_esp, 0x5bb27cu); f_005b7a28();
    /* 005bb27c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bb27e: jne 0x5bb28e */ if (!fZ) goto L_005bb28e;
L_005bb280:; BB(0x005bb280);
    /* 005bb280: call 0x5baacc */ r_esp -= 4; W32(r_esp, 0x5bb285u); f_005baacc();
    /* 005bb285: call 0x5b7a28 */ r_esp -= 4; W32(r_esp, 0x5bb28au); f_005b7a28();
    /* 005bb28a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bb28c: je 0x5bb280 */ if (fZ) goto L_005bb280;
L_005bb28e:; BB(0x005bb28e);
    /* 005bb28e: push 0x92b6ac */ { u32 v = 0x92b6acu; r_esp -= 4; W32(r_esp, v); }
    /* 005bb293: call 0x5b7a44 */ r_esp -= 4; W32(r_esp, 0x5bb298u); f_005b7a44();
    /* 005bb298: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005bb299: mov dword ptr [0xa8d4c0], eax */ W32((u32)(0xa8d4c0u), r_eax);
L_005bb29e:; BB(0x005bb29e);
    /* 005bb29e: mov eax, ebp */ r_eax = r_ebp;
    /* 005bb2a0: add esp, 0x10c */ {  u32 a = r_esp; u32 b = 0x10cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005bb2a6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bb2a7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005bb2a8: ret 8 */ FN_RET(0x005bb224); r_esp += 12; return;
L_005bb2ab:; BB(0x005bb2ab);
    /* 005bb2ab: mov edx, dword ptr [0xa8d49c] */ r_edx = R32((u32)(0xa8d49cu));
    /* 005bb2b1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bb2b3: je 0x5bb3b6 */ if (fZ) goto L_005bb3b6;
L_005bb2b9:; BB(0x005bb2b9);
    /* 005bb2b9: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 005bb2bd: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 005bb2c2: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005bb2c3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bb2c4: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x5bb2c9u); f_00858900();
    /* 005bb2c9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bb2cc: lea esi, [esp + 0xc] */ r_esi = (u32)(r_esp+0xcu);
    /* 005bb2d0: movsx eax, byte ptr [esi] */ r_eax = (u32)(i32)(i8)R8((u32)(r_esi));
    /* 005bb2d3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bb2d5: je 0x5bb2f9 */ if (fZ) goto L_005bb2f9;
L_005bb2d7:; BB(0x005bb2d7);
    /* 005bb2d7: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 005bb2da: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
L_005bb2de:; BB(0x005bb2de);
    /* 005bb2de: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bb2df: call 0x8599c1 */ r_esp -= 4; W32(r_esp, 0x5bb2e4u); f_008599c1();
    /* 005bb2e4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005bb2e5: mov byte ptr [esi], al */ W8((u32)(r_esi), (u8)r_eax);
    /* 005bb2e7: movsx eax, byte ptr [esi + 1] */ r_eax = (u32)(i32)(i8)R8((u32)(r_esi+0x1u));
    /* 005bb2eb: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005bb2ee: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bb2f0: jne 0x5bb2de */ if (!fZ) goto L_005bb2de;
L_005bb2f2:; BB(0x005bb2f2);
    /* 005bb2f2: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 005bb2f5: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
L_005bb2f9:; BB(0x005bb2f9);
    /* 005bb2f9: mov ecx, dword ptr [0xa8d498] */ r_ecx = R32((u32)(0xa8d498u));
    /* 005bb2ff: mov eax, 0xa75380 */ r_eax = 0xa75380u;
    /* 005bb304: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005bb306: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005bb308: jle 0x5bb35d */ if ((fZ||fS!=fO)) goto L_005bb35d;
L_005bb30a:; BB(0x005bb30a);
    /* 005bb30a: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
    /* 005bb30e: mov ebp, edx */ r_ebp = r_edx;
    /* 005bb310: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 005bb313: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 005bb317: mov ebx, eax */ r_ebx = r_eax;
L_005bb319:; BB(0x005bb319);
    /* 005bb319: lea esi, [esp + 0xc] */ r_esi = (u32)(r_esp+0xcu);
    /* 005bb31d: mov edi, ebx */ r_edi = r_ebx;
L_005bb31f:; BB(0x005bb31f);
    /* 005bb31f: mov dl, byte ptr [edi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 005bb321: cmp dl, byte ptr [esi] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 005bb323: jne 0x5bb33f */ if (!fZ) goto L_005bb33f;
L_005bb325:; BB(0x005bb325);
    /* 005bb325: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 005bb327: je 0x5bb33b */ if (fZ) goto L_005bb33b;
L_005bb329:; BB(0x005bb329);
    /* 005bb329: mov dl, byte ptr [edi + 1] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi+0x1u))) & 0xffu);
    /* 005bb32c: cmp dl, byte ptr [esi + 1] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi+0x1u)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 005bb32f: jne 0x5bb33f */ if (!fZ) goto L_005bb33f;
L_005bb331:; BB(0x005bb331);
    /* 005bb331: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005bb334: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005bb337: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 005bb339: jne 0x5bb31f */ if (!fZ) goto L_005bb31f;
L_005bb33b:; BB(0x005bb33b);
    /* 005bb33b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005bb33d: jmp 0x5bb344 */ goto L_005bb344;
L_005bb33f:; BB(0x005bb33f);
    /* 005bb33f: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 005bb341: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_005bb344:; BB(0x005bb344);
    /* 005bb344: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bb346: je 0x5bb3a7 */ if (fZ) goto L_005bb3a7;
L_005bb348:; BB(0x005bb348);
    /* 005bb348: add ebx, 0x30 */ {  u32 a = r_ebx; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005bb34b: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005bb34e: cmp ebp, ecx */ {  u32 a = r_ebp; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005bb350: jl 0x5bb319 */ if ((fS!=fO)) goto L_005bb319;
L_005bb352:; BB(0x005bb352);
    /* 005bb352: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
    /* 005bb356: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 005bb359: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
L_005bb35d:; BB(0x005bb35d);
    /* 005bb35d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005bb35f:; BB(0x005bb35f);
    /* 005bb35f: mov dword ptr [ebp + 0x28], eax */ W32((u32)(r_ebp+0x28u), r_eax);
    /* 005bb362: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bb364: je 0x5bb397 */ if (fZ) goto L_005bb397;
L_005bb366:; BB(0x005bb366);
    /* 005bb366: mov edx, dword ptr [0xa8d49c] */ r_edx = R32((u32)(0xa8d49cu));
    /* 005bb36c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bb36e: mov dword ptr [ebp + 0x20], edx */ W32((u32)(r_ebp+0x20u), r_edx);
    /* 005bb371: push dword ptr [eax + 0x20] */ { u32 v = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 005bb374: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bb375: call 0x86dc20 */ r_esp -= 4; W32(r_esp, 0x5bb37au); f_0086dc20();
    /* 005bb37a: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 005bb37c: mov esi, dword ptr [ebp + 0x28] */ r_esi = R32((u32)(r_ebp+0x28u));
    /* 005bb37f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005bb380: mov edx, dword ptr [esi + 0x24] */ r_edx = R32((u32)(r_esi+0x24u));
    /* 005bb383: mov dword ptr [0xa8d48c], edx */ W32((u32)(0xa8d48cu), r_edx);
    /* 005bb389: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bb38a: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x5bb38fu); f_00858900();
    /* 005bb38f: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bb392: jmp 0x5bb269 */ goto L_005bb269;
L_005bb397:; BB(0x005bb397);
    /* 005bb397: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005bb399: mov dword ptr [0xa8d48c], edx */ W32((u32)(0xa8d48cu), r_edx);
    /* 005bb39f: mov byte ptr [ebp], dl */ W8((u32)(r_ebp), (u8)r_edx);
    /* 005bb3a2: jmp 0x5bb269 */ goto L_005bb269;
L_005bb3a7:; BB(0x005bb3a7);
    /* 005bb3a7: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
    /* 005bb3ab: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 005bb3af: mov eax, ebx */ r_eax = r_ebx;
    /* 005bb3b1: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 005bb3b4: jmp 0x5bb35f */ goto L_005bb35f;
L_005bb3b6:; BB(0x005bb3b6);
    /* 005bb3b6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005bb3b8: jmp 0x5bb35f */ goto L_005bb35f;
}

void f_005bb3bc(void) /* sub_5BB3BC */
{
    FN_ENTER(0x005bb3bc);
    /* 005bb3bc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005bb3bd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005bb3be: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bb3bf: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005bb3c0: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005bb3c3: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 005bb3c5: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 005bb3c9: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 005bb3cd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005bb3cf: jle 0x5bb4c9 */ if ((fZ||fS!=fO)) goto L_005bb4c9;
L_005bb3d5:; BB(0x005bb3d5);
    /* 005bb3d5: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 005bb3d9: mov ebx, eax */ r_ebx = r_eax;
    /* 005bb3db: mov ebp, edx */ r_ebp = r_edx;
L_005bb3dd:; BB(0x005bb3dd);
    /* 005bb3dd: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 005bb3e1: mov esi, dword ptr [ecx + 0x20] */ r_esi = R32((u32)(r_ecx+0x20u));
    /* 005bb3e4: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bb3e6: je 0x5bb4c9 */ if (fZ) goto L_005bb4c9;
L_005bb3ec:; BB(0x005bb3ec);
    /* 005bb3ec: call 0x5bb4ec */ r_esp -= 4; W32(r_esp, 0x5bb3f1u); f_005bb4ec();
    /* 005bb3f1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bb3f3: jne 0x5bb47e */ if (!fZ) goto L_005bb47e;
L_005bb3f9:; BB(0x005bb3f9);
    /* 005bb3f9: mov eax, dword ptr [0xa8d48c] */ r_eax = R32((u32)(0xa8d48cu));
    /* 005bb3fe: sub eax, dword ptr [0xa8d488] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa8d488u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005bb404: cmp eax, 0x90000 */ {  u32 a = r_eax; u32 b = 0x90000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005bb409: jl 0x5bb410 */ if ((fS!=fO)) goto L_005bb410;
L_005bb40b:; BB(0x005bb40b);
    /* 005bb40b: mov eax, 0x90000 */ r_eax = 0x90000u;
L_005bb410:; BB(0x005bb410);
    /* 005bb410: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005bb412: jle 0x5bb47e */ if ((fZ||fS!=fO)) goto L_005bb47e;
L_005bb414:; BB(0x005bb414);
    /* 005bb414: mov dword ptr [0xa8d484], 0 */ W32((u32)(0xa8d484u), 0x0u);
    /* 005bb41e: mov dword ptr [0xa8d480], eax */ W32((u32)(0xa8d480u), r_eax);
    /* 005bb423: lea ecx, [eax + 0x7ff] */ r_ecx = (u32)(r_eax+0x7ffu);
    /* 005bb429: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 005bb42c: sar ecx, 0xa */ { u32 c = (10u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 005bb42f: shr ecx, 0x15 */ { u32 c = (21u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 005bb432: lea edx, [ecx + eax + 0x7ff] */ r_edx = (u32)(r_ecx+r_eax+0x7ffu);
    /* 005bb439: sar edx, 0xb */ { u32 c = (11u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 005bb43c: mov ecx, dword ptr [0xa8d4c0] */ r_ecx = R32((u32)(0xa8d4c0u));
    /* 005bb442: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 005bb446: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 005bb44a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bb44b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bb44c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005bb44d: call 0x86db64 */ r_esp -= 4; W32(r_esp, 0x5bb452u); f_0086db64();
    /* 005bb452: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 005bb456: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 005bb45a: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 005bb45e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bb45f: call 0x5b9334 */ r_esp -= 4; W32(r_esp, 0x5bb464u); f_005b9334();
    /* 005bb464: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bb467: jmp 0x5bb46e */ goto L_005bb46e;
L_005bb469:; BB(0x005bb469);
    /* 005bb469: call 0x5b9204 */ r_esp -= 4; W32(r_esp, 0x5bb46eu); f_005b9204();
L_005bb46e:; BB(0x005bb46e);
    /* 005bb46e: push dword ptr [esp] */ { u32 v = R32((u32)(r_esp)); r_esp -= 4; W32(r_esp, v); }
    /* 005bb471: call 0x86dc94 */ r_esp -= 4; W32(r_esp, 0x5bb476u); f_0086dc94();
    /* 005bb476: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005bb477: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bb47a: je 0x5bb4d5 */ if (fZ) goto L_005bb4d5;
L_005bb47c:; BB(0x005bb47c);
    /* 005bb47c: jmp 0x5bb469 */ goto L_005bb469;
L_005bb47e:; BB(0x005bb47e);
    /* 005bb47e: call 0x5bb4ec */ r_esp -= 4; W32(r_esp, 0x5bb483u); f_005bb4ec();
    /* 005bb483: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005bb485: jle 0x5bb4c9 */ if ((fZ||fS!=fO)) goto L_005bb4c9;
L_005bb487:; BB(0x005bb487);
    /* 005bb487: mov esi, dword ptr [0xa8d480] */ r_esi = R32((u32)(0xa8d480u));
    /* 005bb48d: mov eax, dword ptr [0xa8d484] */ r_eax = R32((u32)(0xa8d484u));
    /* 005bb492: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 005bb494: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005bb496: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005bb498: jg 0x5bb49c */ if ((!fZ&&fS==fO)) goto L_005bb49c;
L_005bb49a:; BB(0x005bb49a);
    /* 005bb49a: mov esi, ecx */ r_esi = r_ecx;
L_005bb49c:; BB(0x005bb49c);
    /* 005bb49c: cmp ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005bb49e: jge 0x5bb4a2 */ if ((fS==fO)) goto L_005bb4a2;
L_005bb4a0:; BB(0x005bb4a0);
    /* 005bb4a0: mov esi, ebx */ r_esi = r_ebx;
L_005bb4a2:; BB(0x005bb4a2);
    /* 005bb4a2: mov ecx, dword ptr [0xa8d4c0] */ r_ecx = R32((u32)(0xa8d4c0u));
    /* 005bb4a8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005bb4a9: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005bb4ab: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bb4ac: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bb4ad: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x5bb4b2u); f_0086b6b8();
    /* 005bb4b2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bb4b5: add dword ptr [0xa8d484], esi */ { u32 ad = (u32)(0xa8d484u);  u32 a = R32(ad); u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 005bb4bb: add ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005bb4bd: sub ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 005bb4bf: add edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005bb4c1: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005bb4c3: jg 0x5bb3dd */ if ((!fZ&&fS==fO)) goto L_005bb3dd;
L_005bb4c9:; BB(0x005bb4c9);
    /* 005bb4c9: mov eax, edi */ r_eax = r_edi;
    /* 005bb4cb: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005bb4ce: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005bb4cf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bb4d0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005bb4d1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005bb4d2: ret 8 */ FN_RET(0x005bb3bc); r_esp += 12; return;
L_005bb4d5:; BB(0x005bb4d5);
    /* 005bb4d5: call 0x5b9354 */ r_esp -= 4; W32(r_esp, 0x5bb4dau); f_005b9354();
    /* 005bb4da: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 005bb4de: shl ecx, 0xb */ { u32 c = (11u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 005bb4e1: add dword ptr [0xa8d488], ecx */ { u32 ad = (u32)(0xa8d488u);  u32 a = R32(ad); u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 005bb4e7: jmp 0x5bb47e */ goto L_005bb47e;
}

void f_005bb4ec(void) /* sub_5BB4EC */
{
    FN_ENTER(0x005bb4ec);
    /* 005bb4ec: mov eax, dword ptr [0xa8d480] */ r_eax = R32((u32)(0xa8d480u));
    /* 005bb4f1: sub eax, dword ptr [0xa8d484] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa8d484u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005bb4f7: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005bb4f9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005bb4fb: jg 0x5bb4ff */ if ((!fZ&&fS==fO)) goto L_005bb4ff;
L_005bb4fd:; BB(0x005bb4fd);
    /* 005bb4fd: mov eax, edx */ r_eax = r_edx;
L_005bb4ff:; BB(0x005bb4ff);
    /* 005bb4ff: ret  */ FN_RET(0x005bb4ec); r_esp += 4; return;
}

void f_005bb500(void) /* sub_5BB500 */
{
    FN_ENTER(0x005bb500);
    /* 005bb500: mov dword ptr [0xa8d480], 0 */ W32((u32)(0xa8d480u), 0x0u);
    /* 005bb50a: mov dword ptr [0xa8d484], 0x90000 */ W32((u32)(0xa8d484u), 0x90000u);
    /* 005bb514: ret  */ FN_RET(0x005bb500); r_esp += 4; return;
}

void f_005bb518(void) /* sub_5BB518 */
{
    FN_ENTER(0x005bb518);
    /* 005bb518: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 005bb51c: mov eax, dword ptr [0xa8d484] */ r_eax = R32((u32)(0xa8d484u));
    /* 005bb521: lea eax, [eax + ecx - 1] */ r_eax = (u32)(r_eax+r_ecx+0xffffffffu);
    /* 005bb525: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005bb526: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005bb526, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005bb526, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005bb528: imul eax, ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005bb52b: mov dword ptr [0xa8d484], eax */ W32((u32)(0xa8d484u), r_eax);
    /* 005bb530: ret 4 */ FN_RET(0x005bb518); r_esp += 8; return;
}

void f_005bb534(void) /* sub_5BB534 */
{
    FN_ENTER(0x005bb534);
    /* 005bb534: mov eax, dword ptr [0xa8d48c] */ r_eax = R32((u32)(0xa8d48cu));
    /* 005bb539: ret  */ FN_RET(0x005bb534); r_esp += 4; return;
}

void f_005bb53c(void) /* sub_5BB53C */
{
    FN_ENTER(0x005bb53c);
    /* 005bb53c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bb53d: mov ebp, esp */ r_ebp = r_esp;
    /* 005bb53f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005bb541: push 0x8d938e */ { u32 v = 0x8d938eu; r_esp -= 4; W32(r_esp, v); }
    /* 005bb546: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005bb54c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bb54d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005bb554: sub esp, 0x140 */ {  u32 a = r_esp; u32 b = 0x140u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005bb55a: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005bb55d: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005bb560: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005bb563: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005bb566: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005bb568: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 005bb56b: mov dword ptr [ebp - 0x12c], eax */ W32((u32)(r_ebp+0xfffffed4u), r_eax);
    /* 005bb571: mov dword ptr [ebp - 0x124], eax */ W32((u32)(r_ebp+0xfffffedcu), r_eax);
    /* 005bb577: call 0x5bc004 */ r_esp -= 4; W32(r_esp, 0x5bb57cu); f_005bc004();
    /* 005bb57c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005bb57d: call 0x5b92f4 */ r_esp -= 4; W32(r_esp, 0x5bb582u); f_005b92f4();
    /* 005bb582: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005bb583: mov dword ptr [0xa8d48c], eax */ W32((u32)(0xa8d48cu), r_eax);
    /* 005bb588: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005bb58a: jle 0x5bb760 */ if ((fZ||fS!=fO)) goto L_005bb760;
L_005bb590:; BB(0x005bb590);
    /* 005bb590: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bb592: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005bb593: call 0x708238 */ r_esp -= 4; W32(r_esp, 0x5bb598u); f_00708238();
    /* 005bb598: mov dword ptr [ebp - 0x12c], eax */ W32((u32)(r_ebp+0xfffffed4u), r_eax);
    /* 005bb59e: lea eax, [ebp - 0x14c] */ r_eax = (u32)(r_ebp+0xfffffeb4u);
    /* 005bb5a4: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 005bb5a6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005bb5a7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bb5a8: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x5bb5adu); f_00858900();
    /* 005bb5ad: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005bb5b0:; BB(0x005bb5b0);
    /* 005bb5b0: mov dword ptr [ebp - 0x128], 1 */ W32((u32)(r_ebp+0xfffffed8u), 0x1u);
    /* 005bb5ba: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005bb5c1: mov ebx, dword ptr [0xa8d48c] */ r_ebx = R32((u32)(0xa8d48cu));
    /* 005bb5c7: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005bb5c9: jle 0x5bb732 */ if ((fZ||fS!=fO)) goto L_005bb732;
L_005bb5cf:; BB(0x005bb5cf);
    /* 005bb5cf: lea eax, [ebx + 0x7ff] */ r_eax = (u32)(r_ebx+0x7ffu);
    /* 005bb5d5: sar eax, 0xa */ { u32 c = (10u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005bb5d8: shr eax, 0x15 */ { u32 c = (21u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 005bb5db: lea esi, [eax + ebx + 0x7ff] */ r_esi = (u32)(r_eax+r_ebx+0x7ffu);
    /* 005bb5e2: sar esi, 0xb */ { u32 c = (11u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 005bb5e5: mov eax, dword ptr [ebp - 0x124] */ r_eax = R32((u32)(r_ebp+0xfffffedcu));
    /* 005bb5eb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bb5ed: je 0x5bb658 */ if (fZ) goto L_005bb658;
L_005bb5ef:; BB(0x005bb5ef);
    /* 005bb5ef: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 005bb5f2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bb5f4: je 0x5bb658 */ if (fZ) goto L_005bb658;
L_005bb5f6:; BB(0x005bb5f6);
    /* 005bb5f6: lea eax, [edx + 0x7ff] */ r_eax = (u32)(r_edx+0x7ffu);
    /* 005bb5fc: sar eax, 0xa */ { u32 c = (10u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005bb5ff: shr eax, 0x15 */ { u32 c = (21u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 005bb602: lea edx, [eax + edx + 0x7ff] */ r_edx = (u32)(r_eax+r_edx+0x7ffu);
    /* 005bb609: and edx, 0xfffff800 */ {  u32 a = r_edx; u32 b = 0xfffff800u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005bb60f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bb610: call 0x82e940 */ r_esp -= 4; W32(r_esp, 0x5bb615u); f_0082e940();
    /* 005bb615: mov ebx, eax */ r_ebx = r_eax;
    /* 005bb617: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bb61a: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bb61c: je 0x5bb6e9 */ if (fZ) goto L_005bb6e9;
L_005bb622:; BB(0x005bb622);
    /* 005bb622: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005bb623: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005bb624: push dword ptr [ebp - 0x12c] */ { u32 v = R32((u32)(r_ebp+0xfffffed4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005bb62a: call 0x86db64 */ r_esp -= 4; W32(r_esp, 0x5bb62fu); f_0086db64();
    /* 005bb62f: lea edx, [ebp - 0x12c] */ r_edx = (u32)(r_ebp+0xfffffed4u);
    /* 005bb635: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005bb636: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005bb637: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bb638: call 0x5b9334 */ r_esp -= 4; W32(r_esp, 0x5bb63du); f_005b9334();
    /* 005bb63d: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005bb640:; BB(0x005bb640);
    /* 005bb640: push dword ptr [ebp - 0x12c] */ { u32 v = R32((u32)(r_ebp+0xfffffed4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005bb646: call 0x86dc94 */ r_esp -= 4; W32(r_esp, 0x5bb64bu); f_0086dc94();
    /* 005bb64b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005bb64c: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bb64f: je 0x5bb694 */ if (fZ) goto L_005bb694;
L_005bb651:; BB(0x005bb651);
    /* 005bb651: call 0x5b9204 */ r_esp -= 4; W32(r_esp, 0x5bb656u); f_005b9204();
    /* 005bb656: jmp 0x5bb640 */ goto L_005bb640;
L_005bb658:; BB(0x005bb658);
    /* 005bb658: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005bb65b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bb65c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005bb65d: push dword ptr [ebp - 0x12c] */ { u32 v = R32((u32)(r_ebp+0xfffffed4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005bb663: call 0x86db64 */ r_esp -= 4; W32(r_esp, 0x5bb668u); f_0086db64();
    /* 005bb668: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005bb66b: lea edx, [ebp - 0x12c] */ r_edx = (u32)(r_ebp+0xfffffed4u);
    /* 005bb671: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bb672: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005bb673: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bb674: call 0x5b9334 */ r_esp -= 4; W32(r_esp, 0x5bb679u); f_005b9334();
    /* 005bb679: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005bb67c:; BB(0x005bb67c);
    /* 005bb67c: push dword ptr [ebp - 0x12c] */ { u32 v = R32((u32)(r_ebp+0xfffffed4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005bb682: call 0x86dc94 */ r_esp -= 4; W32(r_esp, 0x5bb687u); f_0086dc94();
    /* 005bb687: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005bb688: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bb68b: je 0x5bb6f9 */ if (fZ) goto L_005bb6f9;
L_005bb68d:; BB(0x005bb68d);
    /* 005bb68d: call 0x5b9204 */ r_esp -= 4; W32(r_esp, 0x5bb692u); f_005b9204();
    /* 005bb692: jmp 0x5bb67c */ goto L_005bb67c;
L_005bb694:; BB(0x005bb694);
    /* 005bb694: call 0x5b9354 */ r_esp -= 4; W32(r_esp, 0x5bb699u); f_005b9354();
    /* 005bb699: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005bb69c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bb69d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005bb69e: shl esi, 0xb */ { u32 c = (11u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 005bb6a1: add dword ptr [0xa8d488], esi */ { u32 ad = (u32)(0xa8d488u);  u32 a = R32(ad); u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 005bb6a7: call 0x788154 */ r_esp -= 4; W32(r_esp, 0x5bb6acu); f_00788154();
    /* 005bb6ac: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005bb6ad: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x5bb6b2u); f_0082e960();
    /* 005bb6b2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bb6b5: mov eax, dword ptr [ebp - 0x124] */ r_eax = R32((u32)(r_ebp+0xfffffedcu));
    /* 005bb6bb: mov ebx, dword ptr [eax + 0x28] */ r_ebx = R32((u32)(r_eax+0x28u));
    /* 005bb6be: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005bb6c5: lea ecx, [ebp - 0x14c] */ r_ecx = (u32)(r_ebp+0xfffffeb4u);
    /* 005bb6cb: call 0x5bb854 */ r_esp -= 4; W32(r_esp, 0x5bb6d0u); f_005bb854();
    /* 005bb6d0: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 005bb6d3: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 005bb6d6: mov eax, ebx */ r_eax = r_ebx;
    /* 005bb6d8: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005bb6db: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005bb6de: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005bb6e5: mov esp, ebp */ r_esp = r_ebp;
    /* 005bb6e7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bb6e8: ret  */ FN_RET(0x005bb53c); r_esp += 4; return;
L_005bb6e9:; BB(0x005bb6e9);
    /* 005bb6e9: push 0x92b6b8 */ { u32 v = 0x92b6b8u; r_esp -= 4; W32(r_esp, v); }
    /* 005bb6ee: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x5bb6f3u); f_0061cdb0();
    /* 005bb6f3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005bb6f4: jmp 0x5bb622 */ goto L_005bb622;
L_005bb6f9:; BB(0x005bb6f9);
    /* 005bb6f9: call 0x5b9354 */ r_esp -= 4; W32(r_esp, 0x5bb6feu); f_005b9354();
    /* 005bb6fe: shl esi, 0xb */ { u32 c = (11u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 005bb701: add dword ptr [0xa8d488], esi */ { u32 ad = (u32)(0xa8d488u);  u32 a = R32(ad); u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 005bb707: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005bb70e: lea ecx, [ebp - 0x14c] */ r_ecx = (u32)(r_ebp+0xfffffeb4u);
    /* 005bb714: call 0x5bb854 */ r_esp -= 4; W32(r_esp, 0x5bb719u); f_005bb854();
    /* 005bb719: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 005bb71c: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 005bb71f: mov eax, ebx */ r_eax = r_ebx;
    /* 005bb721: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005bb724: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005bb727: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005bb72e: mov esp, ebp */ r_esp = r_ebp;
    /* 005bb730: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bb731: ret  */ FN_RET(0x005bb53c); r_esp += 4; return;
L_005bb732:; BB(0x005bb732);
    /* 005bb732: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005bb739: lea ecx, [ebp - 0x14c] */ r_ecx = (u32)(r_ebp+0xfffffeb4u);
    /* 005bb73f: call 0x5bb854 */ r_esp -= 4; W32(r_esp, 0x5bb744u); f_005bb854();
    /* 005bb744: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 005bb747: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 005bb74a: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005bb74d: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 005bb752: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005bb755: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005bb75c: mov esp, ebp */ r_esp = r_ebp;
    /* 005bb75e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bb75f: ret  */ FN_RET(0x005bb53c); r_esp += 4; return;
L_005bb760:; BB(0x005bb760);
    /* 005bb760: mov eax, dword ptr [0xa8d49c] */ r_eax = R32((u32)(0xa8d49cu));
    /* 005bb765: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bb767: je 0x5bb84f */ if (fZ) goto L_005bb84f;
L_005bb76d:; BB(0x005bb76d);
    /* 005bb76d: lea eax, [ebp - 0x120] */ r_eax = (u32)(r_ebp+0xfffffee0u);
    /* 005bb773: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 005bb778: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005bb779: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bb77a: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x5bb77fu); f_00858900();
    /* 005bb77f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bb782: lea ebx, [ebp - 0x120] */ r_ebx = (u32)(r_ebp+0xfffffee0u);
    /* 005bb788: movsx eax, byte ptr [ebx] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebx));
    /* 005bb78b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bb78d: je 0x5bb7a2 */ if (fZ) goto L_005bb7a2;
L_005bb78f:; BB(0x005bb78f);
    /* 005bb78f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bb790: call 0x8599c1 */ r_esp -= 4; W32(r_esp, 0x5bb795u); f_008599c1();
    /* 005bb795: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005bb796: mov byte ptr [ebx], al */ W8((u32)(r_ebx), (u8)r_eax);
    /* 005bb798: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005bb79b: movsx eax, byte ptr [ebx] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebx));
    /* 005bb79e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bb7a0: jne 0x5bb78f */ if (!fZ) goto L_005bb78f;
L_005bb7a2:; BB(0x005bb7a2);
    /* 005bb7a2: mov eax, dword ptr [0xa8d498] */ r_eax = R32((u32)(0xa8d498u));
    /* 005bb7a7: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005bb7aa: mov ebx, 0xa75380 */ r_ebx = 0xa75380u;
    /* 005bb7af: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005bb7b1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005bb7b3: jle 0x5bb7f3 */ if ((fZ||fS!=fO)) goto L_005bb7f3;
L_005bb7b5:; BB(0x005bb7b5);
    /* 005bb7b5: lea esi, [ebp - 0x120] */ r_esi = (u32)(r_ebp+0xfffffee0u);
    /* 005bb7bb: mov edi, ebx */ r_edi = r_ebx;
L_005bb7bd:; BB(0x005bb7bd);
    /* 005bb7bd: mov dl, byte ptr [edi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 005bb7bf: cmp dl, byte ptr [esi] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 005bb7c1: jne 0x5bb7dd */ if (!fZ) goto L_005bb7dd;
L_005bb7c3:; BB(0x005bb7c3);
    /* 005bb7c3: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 005bb7c5: je 0x5bb7d9 */ if (fZ) goto L_005bb7d9;
L_005bb7c7:; BB(0x005bb7c7);
    /* 005bb7c7: mov dl, byte ptr [edi + 1] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi+0x1u))) & 0xffu);
    /* 005bb7ca: cmp dl, byte ptr [esi + 1] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi+0x1u)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 005bb7cd: jne 0x5bb7dd */ if (!fZ) goto L_005bb7dd;
L_005bb7cf:; BB(0x005bb7cf);
    /* 005bb7cf: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005bb7d2: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005bb7d5: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 005bb7d7: jne 0x5bb7bd */ if (!fZ) goto L_005bb7bd;
L_005bb7d9:; BB(0x005bb7d9);
    /* 005bb7d9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005bb7db: jmp 0x5bb7e2 */ goto L_005bb7e2;
L_005bb7dd:; BB(0x005bb7dd);
    /* 005bb7dd: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 005bb7df: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_005bb7e2:; BB(0x005bb7e2);
    /* 005bb7e2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bb7e4: je 0x5bb7f5 */ if (fZ) goto L_005bb7f5;
L_005bb7e6:; BB(0x005bb7e6);
    /* 005bb7e6: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005bb7e9: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005bb7ec: add ebx, 0x30 */ {  u32 a = r_ebx; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005bb7ef: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005bb7f1: jl 0x5bb7b5 */ if ((fS!=fO)) goto L_005bb7b5;
L_005bb7f3:; BB(0x005bb7f3);
    /* 005bb7f3: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_005bb7f5:; BB(0x005bb7f5);
    /* 005bb7f5: mov dword ptr [ebp - 0x124], ebx */ W32((u32)(r_ebp+0xfffffedcu), r_ebx);
    /* 005bb7fb: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bb7fd: je 0x5bb83a */ if (fZ) goto L_005bb83a;
L_005bb7ff:; BB(0x005bb7ff);
    /* 005bb7ff: mov eax, dword ptr [0xa8d49c] */ r_eax = R32((u32)(0xa8d49cu));
    /* 005bb804: mov dword ptr [ebp - 0x12c], eax */ W32((u32)(r_ebp+0xfffffed4u), r_eax);
    /* 005bb80a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bb80c: push dword ptr [ebx + 0x20] */ { u32 v = R32((u32)(r_ebx+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 005bb80f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bb810: call 0x86dc20 */ r_esp -= 4; W32(r_esp, 0x5bb815u); f_0086dc20();
    /* 005bb815: mov edx, dword ptr [ebp - 0x124] */ r_edx = R32((u32)(r_ebp+0xfffffedcu));
    /* 005bb81b: lea ecx, [ebp - 0x14c] */ r_ecx = (u32)(r_ebp+0xfffffeb4u);
    /* 005bb821: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 005bb823: mov eax, dword ptr [edx + 0x24] */ r_eax = R32((u32)(r_edx+0x24u));
    /* 005bb826: mov dword ptr [0xa8d48c], eax */ W32((u32)(0xa8d48cu), r_eax);
    /* 005bb82b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bb82c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bb82d: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x5bb832u); f_00858900();
    /* 005bb832: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bb835: jmp 0x5bb5b0 */ goto L_005bb5b0;
L_005bb83a:; BB(0x005bb83a);
    /* 005bb83a: mov eax, 0 */ r_eax = 0x0u;
    /* 005bb83f: mov dword ptr [0xa8d48c], eax */ W32((u32)(0xa8d48cu), r_eax);
    /* 005bb844: mov byte ptr [ebp - 0x14c], al */ W8((u32)(r_ebp+0xfffffeb4u), (u8)r_eax);
    /* 005bb84a: jmp 0x5bb5b0 */ goto L_005bb5b0;
L_005bb84f:; BB(0x005bb84f);
    /* 005bb84f: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 005bb851: jmp 0x5bb7f5 */ goto L_005bb7f5;
}

void f_005bb854(void) /* sub_5BB854 */
{
    FN_ENTER(0x005bb854);
    /* 005bb854: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005bb855: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005bb857: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 005bb85a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bb85c: je 0x5bb874 */ if (fZ) goto L_005bb874;
L_005bb85e:; BB(0x005bb85e);
    /* 005bb85e: mov eax, dword ptr [ebx + 0x24] */ r_eax = R32((u32)(r_ebx+0x24u));
    /* 005bb861: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005bb863: je 0x5bb867 */ if (fZ) goto L_005bb867;
L_005bb865:; BB(0x005bb865);
    /* 005bb865: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005bb866: ret  */ FN_RET(0x005bb854); r_esp += 4; return;
L_005bb867:; BB(0x005bb867);
    /* 005bb867: push 0x92b6ac */ { u32 v = 0x92b6acu; r_esp -= 4; W32(r_esp, v); }
    /* 005bb86c: call 0x5b9008 */ r_esp -= 4; W32(r_esp, 0x5bb871u); f_005b9008();
    /* 005bb871: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005bb872: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005bb873: ret  */ FN_RET(0x005bb854); r_esp += 4; return;
L_005bb874:; BB(0x005bb874);
    /* 005bb874: push dword ptr [ebx + 0x20] */ { u32 v = R32((u32)(r_ebx+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 005bb877: call 0x86db40 */ r_esp -= 4; W32(r_esp, 0x5bb87cu); f_0086db40();
    /* 005bb87c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005bb87d: jmp 0x5bb85e */ goto L_005bb85e;
}

void f_005bb880(void) /* sub_5BB880 */
{
    FN_ENTER(0x005bb880);
    /* 005bb880: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bb881: mov ebp, esp */ r_ebp = r_esp;
    /* 005bb883: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005bb885: push 0x8d93aa */ { u32 v = 0x8d93aau; r_esp -= 4; W32(r_esp, v); }
    /* 005bb88a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005bb890: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bb891: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005bb898: sub esp, 0x140 */ {  u32 a = r_esp; u32 b = 0x140u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005bb89e: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005bb8a1: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005bb8a4: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005bb8a7: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005bb8aa: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005bb8ac: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 005bb8af: mov dword ptr [ebp - 0x12c], eax */ W32((u32)(r_ebp+0xfffffed4u), r_eax);
    /* 005bb8b5: mov dword ptr [ebp - 0x124], eax */ W32((u32)(r_ebp+0xfffffedcu), r_eax);
    /* 005bb8bb: call 0x5bc004 */ r_esp -= 4; W32(r_esp, 0x5bb8c0u); f_005bc004();
    /* 005bb8c0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005bb8c1: call 0x5b92f4 */ r_esp -= 4; W32(r_esp, 0x5bb8c6u); f_005b92f4();
    /* 005bb8c6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005bb8c7: mov dword ptr [0xa8d48c], eax */ W32((u32)(0xa8d48cu), r_eax);
    /* 005bb8cc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005bb8ce: jle 0x5bba57 */ if ((fZ||fS!=fO)) goto L_005bba57;
L_005bb8d4:; BB(0x005bb8d4);
    /* 005bb8d4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bb8d6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005bb8d7: call 0x708238 */ r_esp -= 4; W32(r_esp, 0x5bb8dcu); f_00708238();
    /* 005bb8dc: mov dword ptr [ebp - 0x12c], eax */ W32((u32)(r_ebp+0xfffffed4u), r_eax);
    /* 005bb8e2: lea eax, [ebp - 0x14c] */ r_eax = (u32)(r_ebp+0xfffffeb4u);
    /* 005bb8e8: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 005bb8ea: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005bb8eb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bb8ec: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x5bb8f1u); f_00858900();
    /* 005bb8f1: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005bb8f4:; BB(0x005bb8f4);
    /* 005bb8f4: mov dword ptr [ebp - 0x128], 1 */ W32((u32)(r_ebp+0xfffffed8u), 0x1u);
    /* 005bb8fe: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005bb905: mov edi, dword ptr [0xa8d48c] */ r_edi = R32((u32)(0xa8d48cu));
    /* 005bb90b: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005bb90d: jle 0x5bba29 */ if ((fZ||fS!=fO)) goto L_005bba29;
L_005bb913:; BB(0x005bb913);
    /* 005bb913: mov esi, edi */ r_esi = r_edi;
    /* 005bb915: sar esi, 0xa */ { u32 c = (10u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 005bb918: shr esi, 0x15 */ { u32 c = (21u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 005bb91b: add esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005bb91d: sar esi, 0xb */ { u32 c = (11u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 005bb920: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005bb922: jle 0x5bb964 */ if ((fZ||fS!=fO)) goto L_005bb964;
L_005bb924:; BB(0x005bb924);
    /* 005bb924: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005bb927: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bb928: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005bb929: push dword ptr [ebp - 0x12c] */ { u32 v = R32((u32)(r_ebp+0xfffffed4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005bb92f: call 0x86db64 */ r_esp -= 4; W32(r_esp, 0x5bb934u); f_0086db64();
    /* 005bb934: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005bb937: lea ecx, [ebp - 0x12c] */ r_ecx = (u32)(r_ebp+0xfffffed4u);
    /* 005bb93d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bb93e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005bb93f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bb940: call 0x5b9334 */ r_esp -= 4; W32(r_esp, 0x5bb945u); f_005b9334();
    /* 005bb945: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005bb948:; BB(0x005bb948);
    /* 005bb948: push dword ptr [ebp - 0x12c] */ { u32 v = R32((u32)(r_ebp+0xfffffed4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005bb94e: call 0x86dc94 */ r_esp -= 4; W32(r_esp, 0x5bb953u); f_0086dc94();
    /* 005bb953: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005bb954: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bb957: je 0x5bb9e6 */ if (fZ) goto L_005bb9e6;
L_005bb95d:; BB(0x005bb95d);
    /* 005bb95d: call 0x5b9204 */ r_esp -= 4; W32(r_esp, 0x5bb962u); f_005b9204();
    /* 005bb962: jmp 0x5bb948 */ goto L_005bb948;
L_005bb964:; BB(0x005bb964);
    /* 005bb964: mov eax, edi */ r_eax = r_edi;
    /* 005bb966: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005bb967: mov ebx, eax */ r_ebx = r_eax;
    /* 005bb969: xor ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 005bb96b: sub ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 005bb96d: and ebx, 0x7ff */ {  u32 a = r_ebx; u32 b = 0x7ffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 005bb973: xor ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 005bb975: sub ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 005bb977: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005bb979: jle 0x5bb9bb */ if ((fZ||fS!=fO)) goto L_005bb9bb;
L_005bb97b:; BB(0x005bb97b);
    /* 005bb97b: push 0xa74b80 */ { u32 v = 0xa74b80u; r_esp -= 4; W32(r_esp, v); }
    /* 005bb980: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005bb982: push dword ptr [ebp - 0x12c] */ { u32 v = R32((u32)(r_ebp+0xfffffed4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005bb988: call 0x86db64 */ r_esp -= 4; W32(r_esp, 0x5bb98du); f_0086db64();
    /* 005bb98d: push 0xa74b80 */ { u32 v = 0xa74b80u; r_esp -= 4; W32(r_esp, v); }
    /* 005bb992: lea edx, [ebp - 0x12c] */ r_edx = (u32)(r_ebp+0xfffffed4u);
    /* 005bb998: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005bb99a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bb99b: call 0x5b9334 */ r_esp -= 4; W32(r_esp, 0x5bb9a0u); f_005b9334();
    /* 005bb9a0: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005bb9a3:; BB(0x005bb9a3);
    /* 005bb9a3: push dword ptr [ebp - 0x12c] */ { u32 v = R32((u32)(r_ebp+0xfffffed4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005bb9a9: call 0x86dc94 */ r_esp -= 4; W32(r_esp, 0x5bb9aeu); f_0086dc94();
    /* 005bb9ae: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005bb9af: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bb9b2: je 0x5bb9fb */ if (fZ) goto L_005bb9fb;
L_005bb9b4:; BB(0x005bb9b4);
    /* 005bb9b4: call 0x5b9204 */ r_esp -= 4; W32(r_esp, 0x5bb9b9u); f_005b9204();
    /* 005bb9b9: jmp 0x5bb9a3 */ goto L_005bb9a3;
L_005bb9bb:; BB(0x005bb9bb);
    /* 005bb9bb: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005bb9c2: lea ecx, [ebp - 0x14c] */ r_ecx = (u32)(r_ebp+0xfffffeb4u);
    /* 005bb9c8: call 0x5bb854 */ r_esp -= 4; W32(r_esp, 0x5bb9cdu); f_005bb854();
    /* 005bb9cd: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 005bb9d0: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005bb9d3: mov eax, edi */ r_eax = r_edi;
    /* 005bb9d5: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 005bb9d8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005bb9db: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005bb9e2: mov esp, ebp */ r_esp = r_ebp;
    /* 005bb9e4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bb9e5: ret  */ FN_RET(0x005bb880); r_esp += 4; return;
L_005bb9e6:; BB(0x005bb9e6);
    /* 005bb9e6: call 0x5b9354 */ r_esp -= 4; W32(r_esp, 0x5bb9ebu); f_005b9354();
    /* 005bb9eb: mov edx, esi */ r_edx = r_esi;
    /* 005bb9ed: shl edx, 0xb */ { u32 c = (11u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 005bb9f0: add dword ptr [0xa8d488], edx */ { u32 ad = (u32)(0xa8d488u);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 005bb9f6: jmp 0x5bb964 */ goto L_005bb964;
L_005bb9fb:; BB(0x005bb9fb);
    /* 005bb9fb: call 0x5b9354 */ r_esp -= 4; W32(r_esp, 0x5bba00u); f_005b9354();
    /* 005bba00: mov edx, dword ptr [0xa8d488] */ r_edx = R32((u32)(0xa8d488u));
    /* 005bba06: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005bba07: add edx, 0x800 */ {  u32 a = r_edx; u32 b = 0x800u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005bba0d: shl esi, 0xb */ { u32 c = (11u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 005bba10: add esi, dword ptr [ebp + 0xc] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005bba13: push 0xa74b80 */ { u32 v = 0xa74b80u; r_esp -= 4; W32(r_esp, v); }
    /* 005bba18: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005bba19: mov dword ptr [0xa8d488], edx */ W32((u32)(0xa8d488u), r_edx);
    /* 005bba1f: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x5bba24u); f_0086b6b8();
    /* 005bba24: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bba27: jmp 0x5bb9bb */ goto L_005bb9bb;
L_005bba29:; BB(0x005bba29);
    /* 005bba29: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005bba30: lea ecx, [ebp - 0x14c] */ r_ecx = (u32)(r_ebp+0xfffffeb4u);
    /* 005bba36: call 0x5bb854 */ r_esp -= 4; W32(r_esp, 0x5bba3bu); f_005bb854();
    /* 005bba3b: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 005bba3e: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 005bba41: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005bba44: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 005bba49: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005bba4c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005bba53: mov esp, ebp */ r_esp = r_ebp;
    /* 005bba55: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bba56: ret  */ FN_RET(0x005bb880); r_esp += 4; return;
L_005bba57:; BB(0x005bba57);
    /* 005bba57: mov eax, dword ptr [0xa8d49c] */ r_eax = R32((u32)(0xa8d49cu));
    /* 005bba5c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bba5e: je 0x5bbb46 */ if (fZ) goto L_005bbb46;
L_005bba64:; BB(0x005bba64);
    /* 005bba64: lea eax, [ebp - 0x120] */ r_eax = (u32)(r_ebp+0xfffffee0u);
    /* 005bba6a: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 005bba6f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005bba70: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bba71: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x5bba76u); f_00858900();
    /* 005bba76: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bba79: lea ebx, [ebp - 0x120] */ r_ebx = (u32)(r_ebp+0xfffffee0u);
    /* 005bba7f: movsx eax, byte ptr [ebx] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebx));
    /* 005bba82: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bba84: je 0x5bba99 */ if (fZ) goto L_005bba99;
L_005bba86:; BB(0x005bba86);
    /* 005bba86: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bba87: call 0x8599c1 */ r_esp -= 4; W32(r_esp, 0x5bba8cu); f_008599c1();
    /* 005bba8c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005bba8d: mov byte ptr [ebx], al */ W8((u32)(r_ebx), (u8)r_eax);
    /* 005bba8f: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005bba92: movsx eax, byte ptr [ebx] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebx));
    /* 005bba95: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bba97: jne 0x5bba86 */ if (!fZ) goto L_005bba86;
L_005bba99:; BB(0x005bba99);
    /* 005bba99: mov eax, dword ptr [0xa8d498] */ r_eax = R32((u32)(0xa8d498u));
    /* 005bba9e: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005bbaa1: mov ebx, 0xa75380 */ r_ebx = 0xa75380u;
    /* 005bbaa6: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005bbaa8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005bbaaa: jle 0x5bbaea */ if ((fZ||fS!=fO)) goto L_005bbaea;
L_005bbaac:; BB(0x005bbaac);
    /* 005bbaac: lea esi, [ebp - 0x120] */ r_esi = (u32)(r_ebp+0xfffffee0u);
    /* 005bbab2: mov edi, ebx */ r_edi = r_ebx;
L_005bbab4:; BB(0x005bbab4);
    /* 005bbab4: mov dl, byte ptr [edi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 005bbab6: cmp dl, byte ptr [esi] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 005bbab8: jne 0x5bbad4 */ if (!fZ) goto L_005bbad4;
L_005bbaba:; BB(0x005bbaba);
    /* 005bbaba: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 005bbabc: je 0x5bbad0 */ if (fZ) goto L_005bbad0;
L_005bbabe:; BB(0x005bbabe);
    /* 005bbabe: mov dl, byte ptr [edi + 1] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi+0x1u))) & 0xffu);
    /* 005bbac1: cmp dl, byte ptr [esi + 1] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi+0x1u)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 005bbac4: jne 0x5bbad4 */ if (!fZ) goto L_005bbad4;
L_005bbac6:; BB(0x005bbac6);
    /* 005bbac6: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005bbac9: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005bbacc: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 005bbace: jne 0x5bbab4 */ if (!fZ) goto L_005bbab4;
L_005bbad0:; BB(0x005bbad0);
    /* 005bbad0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005bbad2: jmp 0x5bbad9 */ goto L_005bbad9;
L_005bbad4:; BB(0x005bbad4);
    /* 005bbad4: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 005bbad6: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_005bbad9:; BB(0x005bbad9);
    /* 005bbad9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bbadb: je 0x5bbaec */ if (fZ) goto L_005bbaec;
L_005bbadd:; BB(0x005bbadd);
    /* 005bbadd: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005bbae0: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005bbae3: add ebx, 0x30 */ {  u32 a = r_ebx; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005bbae6: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005bbae8: jl 0x5bbaac */ if ((fS!=fO)) goto L_005bbaac;
L_005bbaea:; BB(0x005bbaea);
    /* 005bbaea: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_005bbaec:; BB(0x005bbaec);
    /* 005bbaec: mov dword ptr [ebp - 0x124], ebx */ W32((u32)(r_ebp+0xfffffedcu), r_ebx);
    /* 005bbaf2: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bbaf4: je 0x5bbb31 */ if (fZ) goto L_005bbb31;
L_005bbaf6:; BB(0x005bbaf6);
    /* 005bbaf6: mov eax, dword ptr [0xa8d49c] */ r_eax = R32((u32)(0xa8d49cu));
    /* 005bbafb: mov dword ptr [ebp - 0x12c], eax */ W32((u32)(r_ebp+0xfffffed4u), r_eax);
    /* 005bbb01: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bbb03: push dword ptr [ebx + 0x20] */ { u32 v = R32((u32)(r_ebx+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 005bbb06: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bbb07: call 0x86dc20 */ r_esp -= 4; W32(r_esp, 0x5bbb0cu); f_0086dc20();
    /* 005bbb0c: mov edx, dword ptr [ebp - 0x124] */ r_edx = R32((u32)(r_ebp+0xfffffedcu));
    /* 005bbb12: lea ecx, [ebp - 0x14c] */ r_ecx = (u32)(r_ebp+0xfffffeb4u);
    /* 005bbb18: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 005bbb1a: mov eax, dword ptr [edx + 0x24] */ r_eax = R32((u32)(r_edx+0x24u));
    /* 005bbb1d: mov dword ptr [0xa8d48c], eax */ W32((u32)(0xa8d48cu), r_eax);
    /* 005bbb22: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bbb23: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bbb24: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x5bbb29u); f_00858900();
    /* 005bbb29: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bbb2c: jmp 0x5bb8f4 */ goto L_005bb8f4;
L_005bbb31:; BB(0x005bbb31);
    /* 005bbb31: mov eax, 0 */ r_eax = 0x0u;
    /* 005bbb36: mov dword ptr [0xa8d48c], eax */ W32((u32)(0xa8d48cu), r_eax);
    /* 005bbb3b: mov byte ptr [ebp - 0x14c], al */ W8((u32)(r_ebp+0xfffffeb4u), (u8)r_eax);
    /* 005bbb41: jmp 0x5bb8f4 */ goto L_005bb8f4;
L_005bbb46:; BB(0x005bbb46);
    /* 005bbb46: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 005bbb48: jmp 0x5bbaec */ goto L_005bbaec;
}

void f_005bbb4c(void) /* sub_5BBB4C */
{
    FN_ENTER(0x005bbb4c);
    /* 005bbb4c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bbb4d: mov ebp, esp */ r_ebp = r_esp;
    /* 005bbb4f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005bbb51: push 0x8d93c6 */ { u32 v = 0x8d93c6u; r_esp -= 4; W32(r_esp, v); }
    /* 005bbb56: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005bbb5c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bbb5d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005bbb64: sub esp, 0x140 */ {  u32 a = r_esp; u32 b = 0x140u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005bbb6a: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005bbb6d: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005bbb70: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005bbb73: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005bbb76: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005bbb78: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 005bbb7b: mov dword ptr [ebp - 0x12c], eax */ W32((u32)(r_ebp+0xfffffed4u), r_eax);
    /* 005bbb81: mov dword ptr [ebp - 0x124], eax */ W32((u32)(r_ebp+0xfffffedcu), r_eax);
    /* 005bbb87: call 0x5bc004 */ r_esp -= 4; W32(r_esp, 0x5bbb8cu); f_005bc004();
    /* 005bbb8c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005bbb8d: call 0x5b92f4 */ r_esp -= 4; W32(r_esp, 0x5bbb92u); f_005b92f4();
    /* 005bbb92: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005bbb93: mov dword ptr [0xa8d48c], eax */ W32((u32)(0xa8d48cu), r_eax);
    /* 005bbb98: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005bbb9a: jle 0x5bbcc7 */ if ((fZ||fS!=fO)) goto L_005bbcc7;
L_005bbba0:; BB(0x005bbba0);
    /* 005bbba0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bbba2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005bbba3: call 0x708238 */ r_esp -= 4; W32(r_esp, 0x5bbba8u); f_00708238();
    /* 005bbba8: mov dword ptr [ebp - 0x12c], eax */ W32((u32)(r_ebp+0xfffffed4u), r_eax);
    /* 005bbbae: lea eax, [ebp - 0x14c] */ r_eax = (u32)(r_ebp+0xfffffeb4u);
    /* 005bbbb4: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 005bbbb6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005bbbb7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bbbb8: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x5bbbbdu); f_00858900();
    /* 005bbbbd: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005bbbc0:; BB(0x005bbbc0);
    /* 005bbbc0: mov dword ptr [ebp - 0x128], 1 */ W32((u32)(r_ebp+0xfffffed8u), 0x1u);
    /* 005bbbca: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005bbbd1: mov edx, dword ptr [0xa8d48c] */ r_edx = R32((u32)(0xa8d48cu));
    /* 005bbbd7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005bbbd9: jg 0x5bbc06 */ if ((!fZ&&fS==fO)) goto L_005bbc06;
L_005bbbdb:; BB(0x005bbbdb);
    /* 005bbbdb: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005bbbe2: lea ecx, [ebp - 0x14c] */ r_ecx = (u32)(r_ebp+0xfffffeb4u);
    /* 005bbbe8: call 0x5bb854 */ r_esp -= 4; W32(r_esp, 0x5bbbedu); f_005bb854();
    /* 005bbbed: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 005bbbf0: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 005bbbf3: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005bbbf6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005bbbf8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005bbbfb: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005bbc02: mov esp, ebp */ r_esp = r_ebp;
    /* 005bbc04: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bbc05: ret  */ FN_RET(0x005bbb4c); r_esp += 4; return;
L_005bbc06:; BB(0x005bbc06);
    /* 005bbc06: lea eax, [edx + 0x7ff] */ r_eax = (u32)(r_edx+0x7ffu);
    /* 005bbc0c: sar eax, 0xa */ { u32 c = (10u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005bbc0f: shr eax, 0x15 */ { u32 c = (21u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 005bbc12: lea ebx, [eax + edx + 0x7ff] */ r_ebx = (u32)(r_eax+r_edx+0x7ffu);
    /* 005bbc19: sar ebx, 0xb */ { u32 c = (11u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 005bbc1c: mov edi, ebx */ r_edi = r_ebx;
    /* 005bbc1e: shl edi, 0xb */ { u32 c = (11u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 005bbc21: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005bbc22: call 0x82e940 */ r_esp -= 4; W32(r_esp, 0x5bbc27u); f_0082e940();
    /* 005bbc27: mov esi, eax */ r_esi = r_eax;
    /* 005bbc29: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bbc2c: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bbc2e: jne 0x5bbc5b */ if (!fZ) goto L_005bbc5b;
L_005bbc30:; BB(0x005bbc30);
    /* 005bbc30: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005bbc37: lea ecx, [ebp - 0x14c] */ r_ecx = (u32)(r_ebp+0xfffffeb4u);
    /* 005bbc3d: call 0x5bb854 */ r_esp -= 4; W32(r_esp, 0x5bbc42u); f_005bb854();
    /* 005bbc42: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 005bbc45: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 005bbc48: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005bbc4b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005bbc4d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005bbc50: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005bbc57: mov esp, ebp */ r_esp = r_ebp;
    /* 005bbc59: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bbc5a: ret  */ FN_RET(0x005bbb4c); r_esp += 4; return;
L_005bbc5b:; BB(0x005bbc5b);
    /* 005bbc5b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005bbc5c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005bbc5d: push dword ptr [ebp - 0x12c] */ { u32 v = R32((u32)(r_ebp+0xfffffed4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005bbc63: call 0x86db64 */ r_esp -= 4; W32(r_esp, 0x5bbc68u); f_0086db64();
    /* 005bbc68: lea edx, [ebp - 0x12c] */ r_edx = (u32)(r_ebp+0xfffffed4u);
    /* 005bbc6e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005bbc6f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005bbc70: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bbc71: call 0x5b9334 */ r_esp -= 4; W32(r_esp, 0x5bbc76u); f_005b9334();
    /* 005bbc76: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005bbc79:; BB(0x005bbc79);
    /* 005bbc79: push dword ptr [ebp - 0x12c] */ { u32 v = R32((u32)(r_ebp+0xfffffed4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005bbc7f: call 0x86dc94 */ r_esp -= 4; W32(r_esp, 0x5bbc84u); f_0086dc94();
    /* 005bbc84: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005bbc85: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bbc88: je 0x5bbc91 */ if (fZ) goto L_005bbc91;
L_005bbc8a:; BB(0x005bbc8a);
    /* 005bbc8a: call 0x5b9204 */ r_esp -= 4; W32(r_esp, 0x5bbc8fu); f_005b9204();
    /* 005bbc8f: jmp 0x5bbc79 */ goto L_005bbc79;
L_005bbc91:; BB(0x005bbc91);
    /* 005bbc91: call 0x5b9354 */ r_esp -= 4; W32(r_esp, 0x5bbc96u); f_005b9354();
    /* 005bbc96: add dword ptr [0xa8d488], edi */ { u32 ad = (u32)(0xa8d488u);  u32 a = R32(ad); u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 005bbc9c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005bbca3: lea ecx, [ebp - 0x14c] */ r_ecx = (u32)(r_ebp+0xfffffeb4u);
    /* 005bbca9: call 0x5bb854 */ r_esp -= 4; W32(r_esp, 0x5bbcaeu); f_005bb854();
    /* 005bbcae: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 005bbcb1: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005bbcb4: mov eax, esi */ r_eax = r_esi;
    /* 005bbcb6: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 005bbcb9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005bbcbc: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005bbcc3: mov esp, ebp */ r_esp = r_ebp;
    /* 005bbcc5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bbcc6: ret  */ FN_RET(0x005bbb4c); r_esp += 4; return;
L_005bbcc7:; BB(0x005bbcc7);
    /* 005bbcc7: mov eax, dword ptr [0xa8d49c] */ r_eax = R32((u32)(0xa8d49cu));
    /* 005bbccc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bbcce: je 0x5bbdb6 */ if (fZ) goto L_005bbdb6;
L_005bbcd4:; BB(0x005bbcd4);
    /* 005bbcd4: lea eax, [ebp - 0x120] */ r_eax = (u32)(r_ebp+0xfffffee0u);
    /* 005bbcda: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 005bbcdf: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005bbce0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bbce1: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x5bbce6u); f_00858900();
    /* 005bbce6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bbce9: lea ebx, [ebp - 0x120] */ r_ebx = (u32)(r_ebp+0xfffffee0u);
    /* 005bbcef: movsx eax, byte ptr [ebx] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebx));
    /* 005bbcf2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bbcf4: je 0x5bbd09 */ if (fZ) goto L_005bbd09;
L_005bbcf6:; BB(0x005bbcf6);
    /* 005bbcf6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bbcf7: call 0x8599c1 */ r_esp -= 4; W32(r_esp, 0x5bbcfcu); f_008599c1();
    /* 005bbcfc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005bbcfd: mov byte ptr [ebx], al */ W8((u32)(r_ebx), (u8)r_eax);
    /* 005bbcff: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005bbd02: movsx eax, byte ptr [ebx] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebx));
    /* 005bbd05: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bbd07: jne 0x5bbcf6 */ if (!fZ) goto L_005bbcf6;
L_005bbd09:; BB(0x005bbd09);
    /* 005bbd09: mov eax, dword ptr [0xa8d498] */ r_eax = R32((u32)(0xa8d498u));
    /* 005bbd0e: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005bbd11: mov ebx, 0xa75380 */ r_ebx = 0xa75380u;
    /* 005bbd16: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005bbd18: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005bbd1a: jle 0x5bbd5a */ if ((fZ||fS!=fO)) goto L_005bbd5a;
L_005bbd1c:; BB(0x005bbd1c);
    /* 005bbd1c: lea esi, [ebp - 0x120] */ r_esi = (u32)(r_ebp+0xfffffee0u);
    /* 005bbd22: mov edi, ebx */ r_edi = r_ebx;
L_005bbd24:; BB(0x005bbd24);
    /* 005bbd24: mov dl, byte ptr [edi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 005bbd26: cmp dl, byte ptr [esi] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 005bbd28: jne 0x5bbd44 */ if (!fZ) goto L_005bbd44;
L_005bbd2a:; BB(0x005bbd2a);
    /* 005bbd2a: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 005bbd2c: je 0x5bbd40 */ if (fZ) goto L_005bbd40;
L_005bbd2e:; BB(0x005bbd2e);
    /* 005bbd2e: mov dl, byte ptr [edi + 1] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi+0x1u))) & 0xffu);
    /* 005bbd31: cmp dl, byte ptr [esi + 1] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi+0x1u)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 005bbd34: jne 0x5bbd44 */ if (!fZ) goto L_005bbd44;
L_005bbd36:; BB(0x005bbd36);
    /* 005bbd36: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005bbd39: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005bbd3c: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 005bbd3e: jne 0x5bbd24 */ if (!fZ) goto L_005bbd24;
L_005bbd40:; BB(0x005bbd40);
    /* 005bbd40: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005bbd42: jmp 0x5bbd49 */ goto L_005bbd49;
L_005bbd44:; BB(0x005bbd44);
    /* 005bbd44: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 005bbd46: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_005bbd49:; BB(0x005bbd49);
    /* 005bbd49: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bbd4b: je 0x5bbd5c */ if (fZ) goto L_005bbd5c;
L_005bbd4d:; BB(0x005bbd4d);
    /* 005bbd4d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005bbd50: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005bbd53: add ebx, 0x30 */ {  u32 a = r_ebx; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005bbd56: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005bbd58: jl 0x5bbd1c */ if ((fS!=fO)) goto L_005bbd1c;
L_005bbd5a:; BB(0x005bbd5a);
    /* 005bbd5a: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_005bbd5c:; BB(0x005bbd5c);
    /* 005bbd5c: mov dword ptr [ebp - 0x124], ebx */ W32((u32)(r_ebp+0xfffffedcu), r_ebx);
    /* 005bbd62: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bbd64: je 0x5bbda1 */ if (fZ) goto L_005bbda1;
L_005bbd66:; BB(0x005bbd66);
    /* 005bbd66: mov eax, dword ptr [0xa8d49c] */ r_eax = R32((u32)(0xa8d49cu));
    /* 005bbd6b: mov dword ptr [ebp - 0x12c], eax */ W32((u32)(r_ebp+0xfffffed4u), r_eax);
    /* 005bbd71: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bbd73: push dword ptr [ebx + 0x20] */ { u32 v = R32((u32)(r_ebx+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 005bbd76: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bbd77: call 0x86dc20 */ r_esp -= 4; W32(r_esp, 0x5bbd7cu); f_0086dc20();
    /* 005bbd7c: mov edx, dword ptr [ebp - 0x124] */ r_edx = R32((u32)(r_ebp+0xfffffedcu));
    /* 005bbd82: lea ecx, [ebp - 0x14c] */ r_ecx = (u32)(r_ebp+0xfffffeb4u);
    /* 005bbd88: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 005bbd8a: mov eax, dword ptr [edx + 0x24] */ r_eax = R32((u32)(r_edx+0x24u));
    /* 005bbd8d: mov dword ptr [0xa8d48c], eax */ W32((u32)(0xa8d48cu), r_eax);
    /* 005bbd92: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bbd93: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bbd94: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x5bbd99u); f_00858900();
    /* 005bbd99: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bbd9c: jmp 0x5bbbc0 */ goto L_005bbbc0;
L_005bbda1:; BB(0x005bbda1);
    /* 005bbda1: mov eax, 0 */ r_eax = 0x0u;
    /* 005bbda6: mov dword ptr [0xa8d48c], eax */ W32((u32)(0xa8d48cu), r_eax);
    /* 005bbdab: mov byte ptr [ebp - 0x14c], al */ W8((u32)(r_ebp+0xfffffeb4u), (u8)r_eax);
    /* 005bbdb1: jmp 0x5bbbc0 */ goto L_005bbbc0;
L_005bbdb6:; BB(0x005bbdb6);
    /* 005bbdb6: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 005bbdb8: jmp 0x5bbd5c */ goto L_005bbd5c;
}

void f_005bbdbc(void) /* sub_5BBDBC */
{
    FN_ENTER(0x005bbdbc);
    /* 005bbdbc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005bbdbd: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bbdbe: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005bbdbf: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005bbdc1: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 005bbdc5: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
    /* 005bbdc9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005bbdca: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005bbdcb: push dword ptr [ebp + 0x20] */ { u32 v = R32((u32)(r_ebp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 005bbdce: call 0x86db64 */ r_esp -= 4; W32(r_esp, 0x5bbdd3u); f_0086db64();
    /* 005bbdd3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005bbdd4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005bbdd5: lea eax, [ebp + 0x20] */ r_eax = (u32)(r_ebp+0x20u);
    /* 005bbdd8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bbdd9: call 0x5b9334 */ r_esp -= 4; W32(r_esp, 0x5bbddeu); f_005b9334();
    /* 005bbdde: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bbde1: jmp 0x5bbde8 */ goto L_005bbde8;
L_005bbde3:; BB(0x005bbde3);
    /* 005bbde3: call 0x5b9204 */ r_esp -= 4; W32(r_esp, 0x5bbde8u); f_005b9204();
L_005bbde8:; BB(0x005bbde8);
    /* 005bbde8: push dword ptr [ebp + 0x20] */ { u32 v = R32((u32)(r_ebp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 005bbdeb: call 0x86dc94 */ r_esp -= 4; W32(r_esp, 0x5bbdf0u); f_0086dc94();
    /* 005bbdf0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005bbdf1: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bbdf4: jne 0x5bbde3 */ if (!fZ) goto L_005bbde3;
L_005bbdf6:; BB(0x005bbdf6);
    /* 005bbdf6: call 0x5b9354 */ r_esp -= 4; W32(r_esp, 0x5bbdfbu); f_005b9354();
    /* 005bbdfb: shl edi, 0xb */ { u32 c = (11u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 005bbdfe: add dword ptr [0xa8d488], edi */ { u32 ad = (u32)(0xa8d488u);  u32 a = R32(ad); u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005bbe04: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005bbe05: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bbe06: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005bbe07: ret 8 */ FN_RET(0x005bbdbc); r_esp += 12; return;
}

void f_005bbe0c(void) /* sub_5BBE0C */
{
    FN_ENTER(0x005bbe0c);
    /* 005bbe0c: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x5bbe11u); f_00807ac0();
    /* 005bbe11: cmp eax, 0x17 */ {  u32 a = r_eax; u32 b = 0x17u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005bbe14: jge 0x5bbe1c */ if ((fS==fO)) goto L_005bbe1c;
L_005bbe16:; BB(0x005bbe16);
    /* 005bbe16: call 0x520e6c */ r_esp -= 4; W32(r_esp, 0x5bbe1bu); f_00520e6c();
    /* 005bbe1b: ret  */ FN_RET(0x005bbe0c); r_esp += 4; return;
L_005bbe1c:; BB(0x005bbe1c);
    /* 005bbe1c: call 0x482a20 */ r_esp -= 4; W32(r_esp, 0x5bbe21u); f_00482a20();
    /* 005bbe21: ret  */ FN_RET(0x005bbe0c); r_esp += 4; return;
}

void f_005bbe24(void) /* sub_5BBE24 */
{
    FN_ENTER(0x005bbe24);
    /* 005bbe24: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005bbe25: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bbe26: sub esp, 0x10c */ {  u32 a = r_esp; u32 b = 0x10cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005bbe2c: mov edi, dword ptr [esp + 0x118] */ r_edi = R32((u32)(r_esp+0x118u));
    /* 005bbe33: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005bbe34: call 0x5b92f4 */ r_esp -= 4; W32(r_esp, 0x5bbe39u); f_005b92f4();
    /* 005bbe39: mov ebp, eax */ r_ebp = r_eax;
    /* 005bbe3b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bbe3e: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005bbe40: jl 0x5bbe4d */ if ((fS!=fO)) goto L_005bbe4d;
L_005bbe42:; BB(0x005bbe42);
    /* 005bbe42: mov eax, ebp */ r_eax = r_ebp;
    /* 005bbe44: add esp, 0x10c */ {  u32 a = r_esp; u32 b = 0x10cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005bbe4a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bbe4b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005bbe4c: ret  */ FN_RET(0x005bbe24); r_esp += 4; return;
L_005bbe4d:; BB(0x005bbe4d);
    /* 005bbe4d: mov edx, dword ptr [0xa8d49c] */ r_edx = R32((u32)(0xa8d49cu));
    /* 005bbe53: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bbe55: je 0x5bbf18 */ if (fZ) goto L_005bbf18;
L_005bbe5b:; BB(0x005bbe5b);
    /* 005bbe5b: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 005bbe5f: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 005bbe64: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005bbe65: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bbe66: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x5bbe6bu); f_00858900();
    /* 005bbe6b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bbe6e: lea edi, [esp + 0xc] */ r_edi = (u32)(r_esp+0xcu);
    /* 005bbe72: movsx edx, byte ptr [edi] */ r_edx = (u32)(i32)(i8)R8((u32)(r_edi));
    /* 005bbe75: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bbe77: je 0x5bbe8f */ if (fZ) goto L_005bbe8f;
L_005bbe79:; BB(0x005bbe79);
    /* 005bbe79: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bbe7a: call 0x8599c1 */ r_esp -= 4; W32(r_esp, 0x5bbe7fu); f_008599c1();
    /* 005bbe7f: movsx edx, byte ptr [edi + 1] */ r_edx = (u32)(i32)(i8)R8((u32)(r_edi+0x1u));
    /* 005bbe83: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bbe86: mov byte ptr [edi], al */ W8((u32)(r_edi), (u8)r_eax);
    /* 005bbe88: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005bbe8b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bbe8d: jne 0x5bbe79 */ if (!fZ) goto L_005bbe79;
L_005bbe8f:; BB(0x005bbe8f);
    /* 005bbe8f: mov ecx, dword ptr [0xa8d498] */ r_ecx = R32((u32)(0xa8d498u));
    /* 005bbe95: mov edi, 0xa75380 */ r_edi = 0xa75380u;
    /* 005bbe9a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005bbe9c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005bbe9e: jle 0x5bbef3 */ if ((fZ||fS!=fO)) goto L_005bbef3;
L_005bbea0:; BB(0x005bbea0);
    /* 005bbea0: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 005bbea3: mov ebp, eax */ r_ebp = r_eax;
    /* 005bbea5: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 005bbea9: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 005bbead: mov ebx, edi */ r_ebx = r_edi;
L_005bbeaf:; BB(0x005bbeaf);
    /* 005bbeaf: lea esi, [esp + 0xc] */ r_esi = (u32)(r_esp+0xcu);
    /* 005bbeb3: mov edi, ebx */ r_edi = r_ebx;
L_005bbeb5:; BB(0x005bbeb5);
    /* 005bbeb5: mov dl, byte ptr [edi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 005bbeb7: cmp dl, byte ptr [esi] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 005bbeb9: jne 0x5bbed5 */ if (!fZ) goto L_005bbed5;
L_005bbebb:; BB(0x005bbebb);
    /* 005bbebb: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 005bbebd: je 0x5bbed1 */ if (fZ) goto L_005bbed1;
L_005bbebf:; BB(0x005bbebf);
    /* 005bbebf: mov dl, byte ptr [edi + 1] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi+0x1u))) & 0xffu);
    /* 005bbec2: cmp dl, byte ptr [esi + 1] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi+0x1u)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 005bbec5: jne 0x5bbed5 */ if (!fZ) goto L_005bbed5;
L_005bbec7:; BB(0x005bbec7);
    /* 005bbec7: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005bbeca: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005bbecd: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 005bbecf: jne 0x5bbeb5 */ if (!fZ) goto L_005bbeb5;
L_005bbed1:; BB(0x005bbed1);
    /* 005bbed1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005bbed3: jmp 0x5bbeda */ goto L_005bbeda;
L_005bbed5:; BB(0x005bbed5);
    /* 005bbed5: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 005bbed7: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_005bbeda:; BB(0x005bbeda);
    /* 005bbeda: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bbedc: je 0x5bbf09 */ if (fZ) goto L_005bbf09;
L_005bbede:; BB(0x005bbede);
    /* 005bbede: add ebx, 0x30 */ {  u32 a = r_ebx; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005bbee1: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005bbee4: cmp ebp, ecx */ {  u32 a = r_ebp; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005bbee6: jl 0x5bbeaf */ if ((fS!=fO)) goto L_005bbeaf;
L_005bbee8:; BB(0x005bbee8);
    /* 005bbee8: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
    /* 005bbeeb: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 005bbeef: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
L_005bbef3:; BB(0x005bbef3);
    /* 005bbef3: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_005bbef5:; BB(0x005bbef5);
    /* 005bbef5: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bbef7: je 0x5bbe42 */ if (fZ) goto L_005bbe42;
L_005bbefd:; BB(0x005bbefd);
    /* 005bbefd: mov eax, dword ptr [edi + 0x24] */ r_eax = R32((u32)(r_edi+0x24u));
    /* 005bbf00: add esp, 0x10c */ {  u32 a = r_esp; u32 b = 0x10cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005bbf06: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bbf07: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005bbf08: ret  */ FN_RET(0x005bbe24); r_esp += 4; return;
L_005bbf09:; BB(0x005bbf09);
    /* 005bbf09: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
    /* 005bbf0c: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 005bbf10: mov edi, ebx */ r_edi = r_ebx;
    /* 005bbf12: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 005bbf16: jmp 0x5bbef5 */ goto L_005bbef5;
L_005bbf18:; BB(0x005bbf18);
    /* 005bbf18: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 005bbf1a: jmp 0x5bbef5 */ goto L_005bbef5;
}

void f_005bbf1c(void) /* sub_5BBF1C */
{
    FN_ENTER(0x005bbf1c);
    /* 005bbf1c: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 005bbf1e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005bbf20: mov dword ptr [0xa8d4c0], eax */ W32((u32)(0xa8d4c0u), r_eax);
    /* 005bbf25: push 0x92b6a0 */ { u32 v = 0x92b6a0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bbf2a: mov dword ptr [0xa8d49c], eax */ W32((u32)(0xa8d49cu), r_eax);
    /* 005bbf2f: push 0xa8d4a0 */ { u32 v = 0xa8d4a0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bbf34: mov byte ptr [0xa8d4a0], al */ W8((u32)(0xa8d4a0u), (u8)r_eax);
    /* 005bbf39: mov dword ptr [0xa8d494], eax */ W32((u32)(0xa8d494u), r_eax);
    /* 005bbf3e: mov dword ptr [0xa8d490], eax */ W32((u32)(0xa8d490u), r_eax);
    /* 005bbf43: mov dword ptr [0xa8d498], eax */ W32((u32)(0xa8d498u), r_eax);
    /* 005bbf48: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x5bbf4du); f_00858900();
    /* 005bbf4d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bbf50: mov eax, dword ptr [0xa8d494] */ r_eax = R32((u32)(0xa8d494u));
    /* 005bbf55: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bbf57: je 0x5bbf73 */ if (fZ) goto L_005bbf73;
L_005bbf59:; BB(0x005bbf59);
    /* 005bbf59: mov edx, dword ptr [0x9c1ea0] */ r_edx = R32((u32)(0x9c1ea0u));
    /* 005bbf5f: mov dword ptr [0xa8d490], 1 */ W32((u32)(0xa8d490u), 0x1u);
    /* 005bbf69: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005bbf6b: mov dword ptr [0xa8d498], eax */ W32((u32)(0xa8d498u), r_eax);
    /* 005bbf70: mov byte ptr [edx], al */ W8((u32)(r_edx), (u8)r_eax);
    /* 005bbf72: ret  */ FN_RET(0x005bbf1c); r_esp += 4; return;
L_005bbf73:; BB(0x005bbf73);
    /* 005bbf73: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bbf75: push 0x92b6a0 */ { u32 v = 0x92b6a0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bbf7a: call 0x708238 */ r_esp -= 4; W32(r_esp, 0x5bbf7fu); f_00708238();
    /* 005bbf7f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bbf82: mov dword ptr [0xa8d49c], eax */ W32((u32)(0xa8d49cu), r_eax);
    /* 005bbf87: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005bbf89: jne 0x5bbf8c */ if (!fZ) goto L_005bbf8c;
L_005bbf8b:; BB(0x005bbf8b);
    /* 005bbf8b: ret  */ FN_RET(0x005bbf1c); r_esp += 4; return;
L_005bbf8c:; BB(0x005bbf8c);
    /* 005bbf8c: call 0x5bc004 */ r_esp -= 4; W32(r_esp, 0x5bbf91u); f_005bc004();
    /* 005bbf91: push 0xa75380 */ { u32 v = 0xa75380u; r_esp -= 4; W32(r_esp, v); }
    /* 005bbf96: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 005bbf98: push dword ptr [0xa8d49c] */ { u32 v = R32((u32)(0xa8d49cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005bbf9e: call 0x86db64 */ r_esp -= 4; W32(r_esp, 0x5bbfa3u); f_0086db64();
    /* 005bbfa3: push 0xa75380 */ { u32 v = 0xa75380u; r_esp -= 4; W32(r_esp, v); }
    /* 005bbfa8: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 005bbfaa: push 0xa8d49c */ { u32 v = 0xa8d49cu; r_esp -= 4; W32(r_esp, v); }
    /* 005bbfaf: call 0x5b9334 */ r_esp -= 4; W32(r_esp, 0x5bbfb4u); f_005b9334();
    /* 005bbfb4: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bbfb7: jmp 0x5bbfbe */ goto L_005bbfbe;
L_005bbfb9:; BB(0x005bbfb9);
    /* 005bbfb9: call 0x5b9204 */ r_esp -= 4; W32(r_esp, 0x5bbfbeu); f_005b9204();
L_005bbfbe:; BB(0x005bbfbe);
    /* 005bbfbe: push dword ptr [0xa8d49c] */ { u32 v = R32((u32)(0xa8d49cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005bbfc4: call 0x86dc94 */ r_esp -= 4; W32(r_esp, 0x5bbfc9u); f_0086dc94();
    /* 005bbfc9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005bbfca: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bbfcd: jne 0x5bbfb9 */ if (!fZ) goto L_005bbfb9;
L_005bbfcf:; BB(0x005bbfcf);
    /* 005bbfcf: call 0x5b9354 */ r_esp -= 4; W32(r_esp, 0x5bbfd4u); f_005b9354();
    /* 005bbfd4: mov dword ptr [0xa8d498], 0 */ W32((u32)(0xa8d498u), 0x0u);
    /* 005bbfde: mov edx, 0xa75380 */ r_edx = 0xa75380u;
    /* 005bbfe3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005bbfe5:; BB(0x005bbfe5);
    /* 005bbfe5: movsx ecx, byte ptr [edx] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_edx));
    /* 005bbfe8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005bbfea: je 0x5bbffb */ if (fZ) goto L_005bbffb;
L_005bbfec:; BB(0x005bbfec);
    /* 005bbfec: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005bbfef: add edx, 0x30 */ {  u32 a = r_edx; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005bbff2: cmp eax, 0x7ff */ {  u32 a = r_eax; u32 b = 0x7ffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005bbff7: jl 0x5bbfe5 */ if ((fS!=fO)) goto L_005bbfe5;
L_005bbff9:; BB(0x005bbff9);
    /* 005bbff9: jmp 0x5bbf8b */ goto L_005bbf8b;
L_005bbffb:; BB(0x005bbffb);
    /* 005bbffb: mov dword ptr [0xa8d498], eax */ W32((u32)(0xa8d498u), r_eax);
    /* 005bc000: ret  */ FN_RET(0x005bbf1c); r_esp += 4; return;
}

