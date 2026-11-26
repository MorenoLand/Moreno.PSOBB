#include "protos.h"

void f_006cb13c(void)
{
    FN_ENTER(0x006cb13c);
    /* 006cb13c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006cb13d: mov ebp, esp */ r_ebp = r_esp;
    /* 006cb13f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006cb141: push 0x8ed862 */ { u32 v = 0x8ed862u; r_esp -= 4; W32(r_esp, v); }
    /* 006cb146: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006cb14c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cb14d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006cb154: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006cb157: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006cb15a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 006cb15d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 006cb160: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 006cb163: call 0x7a61a4 */ r_esp -= 4; W32(r_esp, 0x6cb168u); f_007a61a4();
    /* 006cb168: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cb16b: je 0x6cb265 */ if (fZ) goto L_006cb265;
L_006cb171:; BB(0x006cb171);
    /* 006cb171: call 0x7a61a4 */ r_esp -= 4; W32(r_esp, 0x6cb176u); f_007a61a4();
    /* 006cb176: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cb179: jne 0x6cb244 */ if (!fZ) goto L_006cb244;
L_006cb17f:; BB(0x006cb17f);
    /* 006cb17f: mov eax, dword ptr [0xa9c4f4] */ r_eax = R32((u32)(0xa9c4f4u));
    /* 006cb184: cmp eax, dword ptr [0xa9c4dc] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa9c4dcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cb18a: jne 0x6cb1ea */ if (!fZ) goto L_006cb1ea;
L_006cb18c:; BB(0x006cb18c);
    /* 006cb18c: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 006cb193: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 006cb195: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6cb19au); f_005caba4();
    /* 006cb19a: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006cb19d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006cb1a0: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 006cb1a3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cb1a5: je 0x6cb254 */ if (fZ) goto L_006cb254;
L_006cb1ab:; BB(0x006cb1ab);
    /* 006cb1ab: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 006cb1b2: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 006cb1b9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006cb1bc: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006cb1bf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cb1c0: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 006cb1c6: call 0x6cd830 */ r_esp -= 4; W32(r_esp, 0x6cb1cbu); f_006cd830();
    /* 006cb1cb: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 006cb1d2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006cb1d5: mov dword ptr [eax + 0x44], 1 */ W32((u32)(r_eax+0x44u), 0x1u);
    /* 006cb1dc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006cb1df: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006cb1e6: mov esp, ebp */ r_esp = r_ebp;
    /* 006cb1e8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006cb1e9: ret  */ FN_RET(0x006cb13c); r_esp += 4; return;
L_006cb1ea:; BB(0x006cb1ea);
    /* 006cb1ea: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 006cb1f1: push 0x44 */ { u32 v = 0x44u; r_esp -= 4; W32(r_esp, v); }
    /* 006cb1f3: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6cb1f8u); f_005caba4();
    /* 006cb1f8: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006cb1fb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006cb1fe: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 006cb201: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cb203: je 0x6cb25e */ if (fZ) goto L_006cb25e;
L_006cb205:; BB(0x006cb205);
    /* 006cb205: mov dword ptr [ebp - 0x38], 1 */ W32((u32)(r_ebp+0xffffffc8u), 0x1u);
    /* 006cb20c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006cb213: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006cb216: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006cb219: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cb21a: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 006cb220: call 0x6cde48 */ r_esp -= 4; W32(r_esp, 0x6cb225u); f_006cde48();
    /* 006cb225: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_006cb22c:; BB(0x006cb22c);
    /* 006cb22c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006cb22f: mov dword ptr [eax + 0x40], 1 */ W32((u32)(r_eax+0x40u), 0x1u);
    /* 006cb236: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006cb239: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006cb240: mov esp, ebp */ r_esp = r_ebp;
    /* 006cb242: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006cb243: ret  */ FN_RET(0x006cb13c); r_esp += 4; return;
L_006cb244:; BB(0x006cb244);
    /* 006cb244: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006cb246: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006cb249: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006cb250: mov esp, ebp */ r_esp = r_ebp;
    /* 006cb252: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006cb253: ret  */ FN_RET(0x006cb13c); r_esp += 4; return;
L_006cb254:; BB(0x006cb254);
    /* 006cb254: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006cb256: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006cb259: jmp 0x6cb1d2 */ f_006cb1d2(); return;
L_006cb25e:; BB(0x006cb25e);
    /* 006cb25e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006cb260: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006cb263: jmp 0x6cb22c */ goto L_006cb22c;
L_006cb265:; BB(0x006cb265);
    /* 006cb265: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 006cb26c: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 006cb26e: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6cb273u); f_005caba4();
    /* 006cb273: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006cb276: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006cb279: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 006cb27c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cb27e: je 0x6cb2b8 */ if (fZ) goto L_006cb2b8;
L_006cb280:; BB(0x006cb280);
    /* 006cb280: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 006cb287: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 006cb28e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006cb291: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006cb294: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cb295: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 006cb29b: call 0x6cc320 */ r_esp -= 4; W32(r_esp, 0x6cb2a0u); f_006cc320();
    /* 006cb2a0: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_006cb2a7:; BB(0x006cb2a7);
    /* 006cb2a7: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006cb2aa: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006cb2ad: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006cb2b4: mov esp, ebp */ r_esp = r_ebp;
    /* 006cb2b6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006cb2b7: ret  */ FN_RET(0x006cb13c); r_esp += 4; return;
L_006cb2b8:; BB(0x006cb2b8);
    /* 006cb2b8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006cb2ba: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006cb2bd: jmp 0x6cb2a7 */ goto L_006cb2a7;
}

void f_006cb2c0(void) /* sub_6CB2C0 */
{
    FN_ENTER(0x006cb2c0);
    /* 006cb2c0: call 0x7a61a4 */ r_esp -= 4; W32(r_esp, 0x6cb2c5u); f_007a61a4();
    /* 006cb2c5: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006cb2c8: je 0x6cb2d0 */ if (fZ) goto L_006cb2d0;
L_006cb2ca:; BB(0x006cb2ca);
    /* 006cb2ca: mov eax, 3 */ r_eax = 0x3u;
    /* 006cb2cf: ret  */ FN_RET(0x006cb2c0); r_esp += 4; return;
L_006cb2d0:; BB(0x006cb2d0);
    /* 006cb2d0: mov eax, dword ptr [0xa9c4dc] */ r_eax = R32((u32)(0xa9c4dcu));
    /* 006cb2d5: cmp eax, dword ptr [0xa9c4f4] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa9c4f4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cb2db: jne 0x6cb2fc */ if (!fZ) goto L_006cb2fc;
L_006cb2dd:; BB(0x006cb2dd);
    /* 006cb2dd: call 0x6d0584 */ r_esp -= 4; W32(r_esp, 0x6cb2e2u); f_006d0584();
    /* 006cb2e2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006cb2e4: je 0x6cb306 */ if (fZ) goto L_006cb306;
L_006cb2e6:; BB(0x006cb2e6);
    /* 006cb2e6: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006cb2e9: jne 0x6cb2f1 */ if (!fZ) goto L_006cb2f1;
L_006cb2eb:; BB(0x006cb2eb);
    /* 006cb2eb: mov eax, 1 */ r_eax = 0x1u;
    /* 006cb2f0: ret  */ FN_RET(0x006cb2c0); r_esp += 4; return;
L_006cb2f1:; BB(0x006cb2f1);
    /* 006cb2f1: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006cb2f4: jne 0x6cb30c */ if (!fZ) goto L_006cb30c;
L_006cb2f6:; BB(0x006cb2f6);
    /* 006cb2f6: mov eax, 2 */ r_eax = 0x2u;
    /* 006cb2fb: ret  */ FN_RET(0x006cb2c0); r_esp += 4; return;
L_006cb2fc:; BB(0x006cb2fc);
    /* 006cb2fc: call 0x6cde34 */ r_esp -= 4; W32(r_esp, 0x6cb301u); f_006cde34();
    /* 006cb301: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006cb304: jne 0x6cb30c */ if (!fZ) goto L_006cb30c;
L_006cb306:; BB(0x006cb306);
    /* 006cb306: mov eax, 3 */ r_eax = 0x3u;
    /* 006cb30b: ret  */ FN_RET(0x006cb2c0); r_esp += 4; return;
L_006cb30c:; BB(0x006cb30c);
    /* 006cb30c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006cb30e: ret  */ FN_RET(0x006cb2c0); r_esp += 4; return;
}

void f_006cb310(void) /* sub_6CB310 */
{
    FN_ENTER(0x006cb310);
    /* 006cb310: call 0x6d0524 */ r_esp -= 4; W32(r_esp, 0x6cb315u); f_006d0524();
    /* 006cb315: ret  */ FN_RET(0x006cb310); r_esp += 4; return;
}

void f_006cb318(void) /* sub_6CB318 */
{
    FN_ENTER(0x006cb318);
    /* 006cb318: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 006cb31c: mov dword ptr [0xa95f28], eax */ W32((u32)(0xa95f28u), r_eax);
    /* 006cb321: ret  */ FN_RET(0x006cb318); r_esp += 4; return;
}

void f_006cb324(void) /* sub_6CB324 */
{
    FN_ENTER(0x006cb324);
    /* 006cb324: mov dword ptr [0xa95f18], 0x3f800000 */ W32((u32)(0xa95f18u), 0x3f800000u);
    /* 006cb32e: mov dword ptr [0xa95f1c], 0x41000000 */ W32((u32)(0xa95f1cu), 0x41000000u);
    /* 006cb338: mov dword ptr [0xa95f20], 0x3fc00000 */ W32((u32)(0xa95f20u), 0x3fc00000u);
    /* 006cb342: ret  */ FN_RET(0x006cb324); r_esp += 4; return;
}

void f_006cb344(void) /* sub_6CB344 */
{
    FN_ENTER(0x006cb344);
    /* 006cb344: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006cb345: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006cb346: mov eax, ecx */ r_eax = r_ecx;
    /* 006cb348: lea edx, [eax + 0x24] */ r_edx = (u32)(r_eax+0x24u);
    /* 006cb34b: add eax, 0x34 */ {  u32 a = r_eax; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006cb34e: mov ebx, eax */ r_ebx = r_eax;
    /* 006cb350: mov esi, edx */ r_esi = r_edx;
L_006cb352:; BB(0x006cb352);
    /* 006cb352: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 006cb354: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cb356: je 0x6cb363 */ if (fZ) goto L_006cb363;
L_006cb358:; BB(0x006cb358);
    /* 006cb358: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6cb35du); f_007127b0();
    /* 006cb35d: mov dword ptr [esi], 0 */ W32((u32)(r_esi), 0x0u);
L_006cb363:; BB(0x006cb363);
    /* 006cb363: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006cb366: cmp ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006cb368: ja 0x6cb352 */ if ((!fC&&!fZ)) goto L_006cb352;
L_006cb36a:; BB(0x006cb36a);
    /* 006cb36a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006cb36b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006cb36c: ret  */ FN_RET(0x006cb344); r_esp += 4; return;
}

void f_006cb370(void) /* sub_6CB370 */
{
    FN_ENTER(0x006cb370);
    /* 006cb370: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006cb371: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006cb372: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006cb375: mov esi, ecx */ r_esi = r_ecx;
    /* 006cb377: fld dword ptr [0x96b9d0] */ FPUSH(R_F32((u32)(0x96b9d0u)));
    /* 006cb37d: fld dword ptr [0x96b9d0] */ FPUSH(R_F32((u32)(0x96b9d0u)));
    /* 006cb383: mov eax, dword ptr [0xa0f45c] */ r_eax = R32((u32)(0xa0f45cu));
    /* 006cb388: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006cb38a: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 006cb38e: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 006cb392: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006cb395: jle 0x6cb3ad */ if ((fZ||fS!=fO)) goto L_006cb3ad;
L_006cb397:; BB(0x006cb397);
    /* 006cb397: fld dword ptr [0x96b9cc] */ FPUSH(R_F32((u32)(0x96b9ccu)));
    /* 006cb39d: fld dword ptr [0x96b9cc] */ FPUSH(R_F32((u32)(0x96b9ccu)));
    /* 006cb3a3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006cb3a5: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 006cb3a9: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
L_006cb3ad:; BB(0x006cb3ad);
    /* 006cb3ad: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 006cb3b0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cb3b2: je 0x6cb4cb */ if (fZ) goto L_006cb4cb;
L_006cb3b8:; BB(0x006cb3b8);
    /* 006cb3b8: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cb3bb: jne 0x6cb454 */ if (!fZ) goto L_006cb454;
L_006cb3c1:; BB(0x006cb3c1);
    /* 006cb3c1: mov eax, 0x42f00000 */ r_eax = 0x42f00000u;
    /* 006cb3c6: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 006cb3ca: mov edx, 0x43a10000 */ r_edx = 0x43a10000u;
    /* 006cb3cf: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 006cb3d2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006cb3d4: call 0x4d30cc */ r_esp -= 4; W32(r_esp, 0x6cb3d9u); f_004d30cc();
    /* 006cb3d9: movzx ebx, ax */ r_ebx = (u32)(u16)r_eax;
    /* 006cb3dc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006cb3dd: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6cb3e2u); f_0068d5a8();
    /* 006cb3e2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006cb3e5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cb3e7: je 0x6cb40c */ if (fZ) goto L_006cb40c;
L_006cb3e9:; BB(0x006cb3e9);
    /* 006cb3e9: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 006cb3eb: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x6cb3f0u); f_0073ec50();
    /* 006cb3f0: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 006cb3f4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006cb3f5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006cb3f7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006cb3f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cb3f9: call 0x73aa40 */ r_esp -= 4; W32(r_esp, 0x6cb3feu); f_0073aa40();
    /* 006cb3fe: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006cb401: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006cb403: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006cb405: add esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006cb407: mov dword ptr [esi + 0x24], eax */ W32((u32)(r_esi+0x24u), r_eax);
    /* 006cb40a: jmp 0x6cb415 */ goto L_006cb415;
L_006cb40c:; BB(0x006cb40c);
    /* 006cb40c: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006cb40e: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006cb410: add esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006cb412: mov eax, dword ptr [esi + 0x24] */ r_eax = R32((u32)(r_esi+0x24u));
L_006cb415:; BB(0x006cb415);
    /* 006cb415: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cb417: je 0x6cb555 */ if (fZ) goto L_006cb555;
L_006cb41d:; BB(0x006cb41d);
    /* 006cb41d: push 0x68 */ { u32 v = 0x68u; r_esp -= 4; W32(r_esp, v); }
    /* 006cb41f: call 0x7930dc */ r_esp -= 4; W32(r_esp, 0x6cb424u); f_007930dc();
    /* 006cb424: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006cb425: push 0x81 */ { u32 v = 0x81u; r_esp -= 4; W32(r_esp, v); }
    /* 006cb42a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cb42b: mov ecx, dword ptr [esi + 0x24] */ r_ecx = R32((u32)(r_esi+0x24u));
    /* 006cb42e: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x6cb433u); f_0073ae38();
    /* 006cb433: mov ecx, dword ptr [esi + 0x24] */ r_ecx = R32((u32)(r_esi+0x24u));
    /* 006cb436: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006cb439: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 006cb43d: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 006cb441: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006cb443: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006cb446: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 006cb44a: call 0x70f5a4 */ r_esp -= 4; W32(r_esp, 0x6cb44fu); f_0070f5a4();
    /* 006cb44f: jmp 0x6cb555 */ goto L_006cb555;
L_006cb454:; BB(0x006cb454);
    /* 006cb454: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cb457: jne 0x6cb555 */ if (!fZ) goto L_006cb555;
L_006cb45d:; BB(0x006cb45d);
    /* 006cb45d: mov eax, 0x42f00000 */ r_eax = 0x42f00000u;
    /* 006cb462: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 006cb466: mov edx, 0x43a10000 */ r_edx = 0x43a10000u;
    /* 006cb46b: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 006cb46e: mov ebx, 0x64 */ r_ebx = 0x64u;
    /* 006cb473: call 0x78b1c4 */ r_esp -= 4; W32(r_esp, 0x6cb478u); f_0078b1c4();
    /* 006cb478: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cb47b: jne 0x6cb482 */ if (!fZ) goto L_006cb482;
L_006cb47d:; BB(0x006cb47d);
    /* 006cb47d: mov ebx, 0x6a */ r_ebx = 0x6au;
L_006cb482:; BB(0x006cb482);
    /* 006cb482: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006cb484: call 0x4d30cc */ r_esp -= 4; W32(r_esp, 0x6cb489u); f_004d30cc();
    /* 006cb489: mov edx, eax */ r_edx = r_eax;
    /* 006cb48b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006cb48e: mov dword ptr [esp + 0x14], esi */ W32((u32)(r_esp+0x14u), r_esi);
    /* 006cb492: mov dword ptr [esp + 0x10], ebx */ W32((u32)(r_esp+0x10u), r_ebx);
    /* 006cb496: mov dword ptr [esp + 0xc], edi */ W32((u32)(r_esp+0xcu), r_edi);
    /* 006cb49a: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
    /* 006cb49e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006cb4a0: movzx ecx, dx */ r_ecx = (u32)(u16)r_edx;
    /* 006cb4a3: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006cb4a5: mov edi, eax */ r_edi = r_eax;
    /* 006cb4a7: mov ebp, edx */ r_ebp = r_edx;
    /* 006cb4a9: mov esi, ecx */ r_esi = r_ecx;
L_006cb4ab:; BB(0x006cb4ab);
    /* 006cb4ab: cmp edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cb4ad: jne 0x6cb55d */ if (!fZ) goto L_006cb55d;
L_006cb4b3:; BB(0x006cb4b3);
    /* 006cb4b3: add ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 006cb4b6: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006cb4b9: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006cb4bc: jl 0x6cb4ab */ if ((fS!=fO)) goto L_006cb4ab;
L_006cb4be:; BB(0x006cb4be);
    /* 006cb4be: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 006cb4c2: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
    /* 006cb4c6: jmp 0x6cb555 */ goto L_006cb555;
L_006cb4cb:; BB(0x006cb4cb);
    /* 006cb4cb: mov eax, 0x42f00000 */ r_eax = 0x42f00000u;
    /* 006cb4d0: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 006cb4d4: mov edx, 0x43a10000 */ r_edx = 0x43a10000u;
    /* 006cb4d9: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 006cb4dc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006cb4de: call 0x4d30cc */ r_esp -= 4; W32(r_esp, 0x6cb4e3u); f_004d30cc();
    /* 006cb4e3: movzx ebx, ax */ r_ebx = (u32)(u16)r_eax;
    /* 006cb4e6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006cb4e7: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6cb4ecu); f_0068d5a8();
    /* 006cb4ec: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006cb4ef: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cb4f1: je 0x6cb516 */ if (fZ) goto L_006cb516;
L_006cb4f3:; BB(0x006cb4f3);
    /* 006cb4f3: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 006cb4f5: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x6cb4fau); f_0073ec50();
    /* 006cb4fa: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 006cb4fe: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006cb4ff: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006cb501: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006cb502: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cb503: call 0x73aa40 */ r_esp -= 4; W32(r_esp, 0x6cb508u); f_0073aa40();
    /* 006cb508: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006cb50b: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006cb50d: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006cb50f: add esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006cb511: mov dword ptr [esi + 0x24], eax */ W32((u32)(r_esi+0x24u), r_eax);
    /* 006cb514: jmp 0x6cb51f */ goto L_006cb51f;
L_006cb516:; BB(0x006cb516);
    /* 006cb516: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006cb518: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006cb51a: add esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006cb51c: mov eax, dword ptr [esi + 0x24] */ r_eax = R32((u32)(r_esi+0x24u));
L_006cb51f:; BB(0x006cb51f);
    /* 006cb51f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cb521: je 0x6cb555 */ if (fZ) goto L_006cb555;
L_006cb523:; BB(0x006cb523);
    /* 006cb523: push 0x63 */ { u32 v = 0x63u; r_esp -= 4; W32(r_esp, v); }
    /* 006cb525: call 0x7930dc */ r_esp -= 4; W32(r_esp, 0x6cb52au); f_007930dc();
    /* 006cb52a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006cb52b: push 0x81 */ { u32 v = 0x81u; r_esp -= 4; W32(r_esp, v); }
    /* 006cb530: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cb531: mov ecx, dword ptr [esi + 0x24] */ r_ecx = R32((u32)(r_esi+0x24u));
    /* 006cb534: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x6cb539u); f_0073ae38();
    /* 006cb539: mov ecx, dword ptr [esi + 0x24] */ r_ecx = R32((u32)(r_esi+0x24u));
    /* 006cb53c: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006cb53f: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 006cb543: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 006cb547: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006cb549: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006cb54c: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 006cb550: call 0x70f5a4 */ r_esp -= 4; W32(r_esp, 0x6cb555u); f_0070f5a4();
L_006cb555:; BB(0x006cb555);
    /* 006cb555: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006cb558: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006cb559: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006cb55a: ret 4 */ FN_RET(0x006cb370); r_esp += 8; return;
L_006cb55d:; BB(0x006cb55d);
    /* 006cb55d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006cb55e: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6cb563u); f_0068d5a8();
    /* 006cb563: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006cb564: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cb566: je 0x6cb58c */ if (fZ) goto L_006cb58c;
L_006cb568:; BB(0x006cb568);
    /* 006cb568: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 006cb56a: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x6cb56fu); f_0073ec50();
    /* 006cb56f: lea ebx, [esp + 4] */ r_ebx = (u32)(r_esp+0x4u);
    /* 006cb573: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006cb574: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006cb576: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006cb577: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cb578: call 0x73aa40 */ r_esp -= 4; W32(r_esp, 0x6cb57du); f_0073aa40();
    /* 006cb57d: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006cb580: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
    /* 006cb584: lea ebx, [ebx + ebp] */ r_ebx = (u32)(r_ebx+r_ebp);
    /* 006cb587: mov dword ptr [ebx + 0x24], eax */ W32((u32)(r_ebx+0x24u), r_eax);
    /* 006cb58a: jmp 0x6cb596 */ goto L_006cb596;
L_006cb58c:; BB(0x006cb58c);
    /* 006cb58c: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
    /* 006cb590: lea ebx, [ebx + ebp] */ r_ebx = (u32)(r_ebx+r_ebp);
    /* 006cb593: mov eax, dword ptr [ebx + 0x24] */ r_eax = R32((u32)(r_ebx+0x24u));
L_006cb596:; BB(0x006cb596);
    /* 006cb596: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cb598: je 0x6cb4b3 */ if (fZ) goto L_006cb4b3;
L_006cb59e:; BB(0x006cb59e);
    /* 006cb59e: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 006cb5a2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cb5a3: call 0x7930dc */ r_esp -= 4; W32(r_esp, 0x6cb5a8u); f_007930dc();
    /* 006cb5a8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006cb5a9: push 0x81 */ { u32 v = 0x81u; r_esp -= 4; W32(r_esp, v); }
    /* 006cb5ae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cb5af: mov ecx, dword ptr [ebx + 0x24] */ r_ecx = R32((u32)(r_ebx+0x24u));
    /* 006cb5b2: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x6cb5b7u); f_0073ae38();
    /* 006cb5b7: mov ecx, dword ptr [ebx + 0x24] */ r_ecx = R32((u32)(r_ebx+0x24u));
    /* 006cb5ba: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006cb5bd: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 006cb5c1: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 006cb5c5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006cb5c7: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006cb5ca: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 006cb5ce: call 0x70f5a4 */ r_esp -= 4; W32(r_esp, 0x6cb5d3u); f_0070f5a4();
    /* 006cb5d3: jmp 0x6cb4b3 */ goto L_006cb4b3;
}

void f_006cb5d8(void) /* sub_6CB5D8 */
{
    FN_ENTER(0x006cb5d8);
    /* 006cb5d8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006cb5da: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 006cb5dd: mov dword ptr [ecx + 0x28], eax */ W32((u32)(r_ecx+0x28u), r_eax);
    /* 006cb5e0: mov dword ptr [ecx + 0x2c], eax */ W32((u32)(r_ecx+0x2cu), r_eax);
    /* 006cb5e3: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 006cb5e6: ret  */ FN_RET(0x006cb5d8); r_esp += 4; return;
}

void f_006cb5e8(void) /* sub_6CB5E8 */
{
    FN_ENTER(0x006cb5e8);
    /* 006cb5e8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006cb5e9: mov ebp, esp */ r_ebp = r_esp;
    /* 006cb5eb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006cb5ed: push 0x8ed87c */ { u32 v = 0x8ed87cu; r_esp -= 4; W32(r_esp, v); }
    /* 006cb5f2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006cb5f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cb5f9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006cb600: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006cb603: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006cb606: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006cb609: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006cb60c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006cb60f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006cb612: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006cb619: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006cb61c: mov dword ptr [ecx], 0xb3ba40 */ W32((u32)(r_ecx), 0xb3ba40u);
    /* 006cb622: call 0x6cb344 */ r_esp -= 4; W32(r_esp, 0x6cb627u); f_006cb344();
    /* 006cb627: mov dword ptr [0xa95f24], 0 */ W32((u32)(0xa95f24u), 0x0u);
    /* 006cb631: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006cb638: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006cb63b: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x6cb640u); f_008171e8();
    /* 006cb640: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006cb643: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006cb64a: mov esp, ebp */ r_esp = r_ebp;
    /* 006cb64c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006cb64d: ret  */ FN_RET(0x006cb5e8); r_esp += 4; return;
}

void f_006cb650(void) /* sub_6CB650 */
{
    FN_ENTER(0x006cb650);
    /* 006cb650: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006cb651: mov ebp, esp */ r_ebp = r_esp;
    /* 006cb653: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006cb655: push 0x8ed898 */ { u32 v = 0x8ed898u; r_esp -= 4; W32(r_esp, v); }
    /* 006cb65a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006cb660: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cb661: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006cb668: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006cb66b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006cb66e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 006cb671: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 006cb674: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 006cb677: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 006cb67a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006cb67d: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 006cb680: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006cb683: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x6cb688u); f_008193cc();
    /* 006cb688: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006cb68f: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006cb692: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006cb695: mov dword ptr [ecx], 0xb3ba40 */ W32((u32)(r_ecx), 0xb3ba40u);
    /* 006cb69b: mov eax, dword ptr [0x9cece4] */ r_eax = R32((u32)(0x9cece4u));
    /* 006cb6a0: mov dword ptr [ecx + 0x20], 0x5a */ W32((u32)(r_ecx+0x20u), 0x5au);
    /* 006cb6a7: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 006cb6aa: mov dword ptr [ecx + 0x1c], edx */ W32((u32)(r_ecx+0x1cu), r_edx);
    /* 006cb6ad: call 0x6cb5d8 */ r_esp -= 4; W32(r_esp, 0x6cb6b2u); f_006cb5d8();
    /* 006cb6b2: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006cb6b5: push dword ptr [ecx + 0x1c] */ { u32 v = R32((u32)(r_ecx+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006cb6b8: call 0x6cb370 */ r_esp -= 4; W32(r_esp, 0x6cb6bdu); f_006cb370();
    /* 006cb6bd: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 006cb6c0: mov dword ptr [0xa95f24], eax */ W32((u32)(0xa95f24u), r_eax);
    /* 006cb6c5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006cb6c8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006cb6cf: mov esp, ebp */ r_esp = r_ebp;
    /* 006cb6d1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006cb6d2: ret 8 */ FN_RET(0x006cb650); r_esp += 12; return;
}

void f_006cb6d8(void) /* sub_6CB6D8 */
{
    FN_ENTER(0x006cb6d8);
    /* 006cb6d8: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x6cb6ddu); f_006dc358();
    /* 006cb6dd: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006cb6e0: je 0x6cb6e3 */ if (fZ) goto L_006cb6e3;
L_006cb6e2:; BB(0x006cb6e2);
    /* 006cb6e2: ret  */ FN_RET(0x006cb6d8); r_esp += 4; return;
L_006cb6e3:; BB(0x006cb6e3);
    /* 006cb6e3: mov ecx, dword ptr [0xa95f24] */ r_ecx = R32((u32)(0xa95f24u));
    /* 006cb6e9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006cb6eb: je 0x6cb6e2 */ if (fZ) goto L_006cb6e2;
L_006cb6ed:; BB(0x006cb6ed);
    /* 006cb6ed: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x6cb6f2u); f_008173b4();
    /* 006cb6f2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006cb6f4: je 0x6cb6e2 */ if (fZ) goto L_006cb6e2;
L_006cb6f6:; BB(0x006cb6f6);
    /* 006cb6f6: mov edx, dword ptr [0xa95f24] */ r_edx = R32((u32)(0xa95f24u));
    /* 006cb6fc: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 006cb700: mov dword ptr [0xa95f24], 0 */ W32((u32)(0xa95f24u), 0x0u);
    /* 006cb70a: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006cb70f: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 006cb713: ret  */ FN_RET(0x006cb6d8); r_esp += 4; return;
}

void f_006cb714(void) /* sub_6CB714 */
{
    FN_ENTER(0x006cb714);
    /* 006cb714: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006cb715: mov ebp, esp */ r_ebp = r_esp;
    /* 006cb717: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006cb719: push 0x8ed8c0 */ { u32 v = 0x8ed8c0u; r_esp -= 4; W32(r_esp, v); }
    /* 006cb71e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006cb724: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cb725: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006cb72c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006cb72f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006cb732: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006cb735: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006cb738: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006cb73b: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x6cb740u); f_006dc358();
    /* 006cb740: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006cb743: jne 0x6cb74e */ if (!fZ) goto L_006cb74e;
L_006cb745:; BB(0x006cb745);
    /* 006cb745: mov eax, dword ptr [0xa95f24] */ r_eax = R32((u32)(0xa95f24u));
    /* 006cb74a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006cb74c: je 0x6cb75c */ if (fZ) goto L_006cb75c;
L_006cb74e:; BB(0x006cb74e);
    /* 006cb74e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006cb751: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006cb758: mov esp, ebp */ r_esp = r_ebp;
    /* 006cb75a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006cb75b: ret  */ FN_RET(0x006cb714); r_esp += 4; return;
L_006cb75c:; BB(0x006cb75c);
    /* 006cb75c: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006cb763: push 0x34 */ { u32 v = 0x34u; r_esp -= 4; W32(r_esp, v); }
    /* 006cb765: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6cb76au); f_005caba4();
    /* 006cb76a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006cb76b: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006cb76e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006cb770: je 0x6cb74e */ if (fZ) goto L_006cb74e;
L_006cb772:; BB(0x006cb772);
    /* 006cb772: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 006cb779: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006cb780: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006cb783: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 006cb789: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006cb78c: call 0x6cb650 */ r_esp -= 4; W32(r_esp, 0x6cb791u); f_006cb650();
    /* 006cb791: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006cb798: jmp 0x6cb74e */ goto L_006cb74e;
}

void f_006cb79c(void) /* sub_6CB79C */
{
    FN_ENTER(0x006cb79c);
    /* 006cb79c: mov eax, dword ptr [ecx + 0x1c] */ r_eax = R32((u32)(r_ecx+0x1cu));
    /* 006cb79f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006cb7a1: jl 0x6cb7c2 */ if ((fS!=fO)) goto L_006cb7c2;
L_006cb7a3:; BB(0x006cb7a3);
    /* 006cb7a3: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006cb7a6: jg 0x6cb7c2 */ if ((!fZ&&fS==fO)) goto L_006cb7c2;
L_006cb7a8:; BB(0x006cb7a8);
    /* 006cb7a8: mov eax, dword ptr [ecx + 0x20] */ r_eax = R32((u32)(r_ecx+0x20u));
    /* 006cb7ab: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006cb7ae: mov dword ptr [ecx + 0x20], eax */ W32((u32)(r_ecx+0x20u), r_eax);
    /* 006cb7b1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006cb7b3: jge 0x6cb7c2 */ if ((fS==fO)) goto L_006cb7c2;
L_006cb7b5:; BB(0x006cb7b5);
    /* 006cb7b5: movzx eax, word ptr [ecx + 8] */ r_eax = (u32)R16((u32)(r_ecx+0x8u));
    /* 006cb7b9: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006cb7be: mov word ptr [ecx + 8], ax */ W16((u32)(r_ecx+0x8u), (u16)r_eax);
L_006cb7c2:; BB(0x006cb7c2);
    /* 006cb7c2: ret  */ FN_RET(0x006cb79c); r_esp += 4; return;
}

void f_006cb7c4(void) /* sub_6CB7C4 */
{
    FN_ENTER(0x006cb7c4);
    /* 006cb7c4: call 0x7a61a4 */ r_esp -= 4; W32(r_esp, 0x6cb7c9u); f_007a61a4();
    /* 006cb7c9: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cb7cc: je 0x6cb7e9 */ if (fZ) goto L_006cb7e9;
L_006cb7ce:; BB(0x006cb7ce);
    /* 006cb7ce: call 0x7a61a4 */ r_esp -= 4; W32(r_esp, 0x6cb7d3u); f_007a61a4();
    /* 006cb7d3: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006cb7d6: je 0x6cb7d9 */ if (fZ) goto L_006cb7d9;
L_006cb7d8:; BB(0x006cb7d8);
    /* 006cb7d8: ret  */ FN_RET(0x006cb7c4); r_esp += 4; return;
L_006cb7d9:; BB(0x006cb7d9);
    /* 006cb7d9: call 0x6ce220 */ r_esp -= 4; W32(r_esp, 0x6cb7deu); f_006ce220();
    /* 006cb7de: call 0x6ce208 */ r_esp -= 4; W32(r_esp, 0x6cb7e3u); f_006ce208();
    /* 006cb7e3: call 0x6ce088 */ r_esp -= 4; W32(r_esp, 0x6cb7e8u); f_006ce088();
    /* 006cb7e8: ret  */ FN_RET(0x006cb7c4); r_esp += 4; return;
L_006cb7e9:; BB(0x006cb7e9);
    /* 006cb7e9: call 0x6cc1d4 */ r_esp -= 4; W32(r_esp, 0x6cb7eeu); f_006cc1d4();
    /* 006cb7ee: mov dword ptr [0xa95f24], 0 */ W32((u32)(0xa95f24u), 0x0u);
    /* 006cb7f8: jmp 0x6cb7ce */ goto L_006cb7ce;
}

void f_006cb7fc(void) /* sub_6CB7FC */
{
    FN_ENTER(0x006cb7fc);
    /* 006cb7fc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006cb7fd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006cb7ff: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006cb801: call 0x6cb5e8 */ r_esp -= 4; W32(r_esp, 0x6cb806u); f_006cb5e8();
    /* 006cb806: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006cb80a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006cb80c: jne 0x6cb812 */ if (!fZ) goto L_006cb812;
L_006cb80e:; BB(0x006cb80e);
    /* 006cb80e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006cb80f: ret 4 */ FN_RET(0x006cb7fc); r_esp += 8; return;
L_006cb812:; BB(0x006cb812);
    /* 006cb812: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006cb813: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6cb818u); f_005c2f74();
    /* 006cb818: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006cb819: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006cb81a: ret 4 */ FN_RET(0x006cb7fc); r_esp += 8; return;
}

void f_006cb820(void) /* sub_6CB820 */
{
    FN_ENTER(0x006cb820);
    /* 006cb820: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006cb821: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006cb823: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006cb825: call 0x6cb844 */ r_esp -= 4; W32(r_esp, 0x6cb82au); f_006cb844();
    /* 006cb82a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006cb82e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006cb830: jne 0x6cb836 */ if (!fZ) goto L_006cb836;
L_006cb832:; BB(0x006cb832);
    /* 006cb832: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006cb833: ret 4 */ FN_RET(0x006cb820); r_esp += 8; return;
L_006cb836:; BB(0x006cb836);
    /* 006cb836: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006cb837: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6cb83cu); f_005c2f74();
    /* 006cb83c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006cb83d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006cb83e: ret 4 */ FN_RET(0x006cb820); r_esp += 8; return;
}

void f_006cb844(void) /* sub_6CB844 */
{
    FN_ENTER(0x006cb844);
    /* 006cb844: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006cb845: mov ebp, esp */ r_ebp = r_esp;
    /* 006cb847: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006cb849: push 0x8ed8dc */ { u32 v = 0x8ed8dcu; r_esp -= 4; W32(r_esp, v); }
    /* 006cb84e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006cb854: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cb855: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006cb85c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006cb85f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006cb862: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006cb865: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006cb868: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006cb86b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006cb86e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006cb875: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006cb878: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 006cb87b: mov dword ptr [eax], 0xb3baa0 */ W32((u32)(r_eax), 0xb3baa0u);
    /* 006cb881: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cb883: je 0x6cb894 */ if (fZ) goto L_006cb894;
L_006cb885:; BB(0x006cb885);
    /* 006cb885: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6cb88au); f_007127b0();
    /* 006cb88a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006cb88d: mov dword ptr [eax + 0x1c], 0 */ W32((u32)(r_eax+0x1cu), 0x0u);
L_006cb894:; BB(0x006cb894);
    /* 006cb894: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006cb89b: mov ecx, eax */ r_ecx = r_eax;
    /* 006cb89d: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x6cb8a2u); f_008171e8();
    /* 006cb8a2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006cb8a5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006cb8ac: mov esp, ebp */ r_esp = r_ebp;
    /* 006cb8ae: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006cb8af: ret  */ FN_RET(0x006cb844); r_esp += 4; return;
}

void f_006cb8b0(void) /* sub_6CB8B0 */
{
    FN_ENTER(0x006cb8b0);
    /* 006cb8b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006cb8b1: mov ebp, esp */ r_ebp = r_esp;
    /* 006cb8b3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006cb8b5: push 0x8ed8f8 */ { u32 v = 0x8ed8f8u; r_esp -= 4; W32(r_esp, v); }
    /* 006cb8ba: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006cb8c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cb8c1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006cb8c8: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006cb8cb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006cb8ce: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006cb8d1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006cb8d4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006cb8d7: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006cb8da: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006cb8dd: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x6cb8e2u); f_008193cc();
    /* 006cb8e2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006cb8e9: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006cb8ec: mov dword ptr [edx], 0xb3baa0 */ W32((u32)(r_edx), 0xb3baa0u);
    /* 006cb8f2: mov eax, dword ptr [0x9cecf0] */ r_eax = R32((u32)(0x9cecf0u));
    /* 006cb8f7: mov dword ptr [edx + 0x1c], 0 */ W32((u32)(r_edx+0x1cu), 0x0u);
    /* 006cb8fe: push 0xc0 */ { u32 v = 0xc0u; r_esp -= 4; W32(r_esp, v); }
    /* 006cb903: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 006cb906: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006cb908: add edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006cb90b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006cb90c: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x6cb911u); f_0086b688();
    /* 006cb911: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006cb914: call 0x691f70 */ r_esp -= 4; W32(r_esp, 0x6cb919u); f_00691f70();
    /* 006cb919: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006cb91c: mov dword ptr [0xa95f3c], eax */ W32((u32)(0xa95f3cu), r_eax);
    /* 006cb921: call 0x6cbb64 */ r_esp -= 4; W32(r_esp, 0x6cb926u); f_006cbb64();
    /* 006cb926: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006cb929: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 006cb92c: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006cb92f: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 006cb932: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006cb935: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006cb93c: mov esp, ebp */ r_esp = r_ebp;
    /* 006cb93e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006cb93f: ret 4 */ FN_RET(0x006cb8b0); r_esp += 8; return;
}

void f_006cb944(void) /* sub_6CB944 */
{
    FN_ENTER(0x006cb944);
    /* 006cb944: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006cb945: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006cb948: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006cb94a: call 0x691f70 */ r_esp -= 4; W32(r_esp, 0x6cb94fu); f_00691f70();
    /* 006cb94f: cmp eax, dword ptr [0xa95f3c] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa95f3cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cb955: je 0x6cb963 */ if (fZ) goto L_006cb963;
L_006cb957:; BB(0x006cb957);
    /* 006cb957: mov dword ptr [0xa95f3c], eax */ W32((u32)(0xa95f3cu), r_eax);
    /* 006cb95c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006cb95e: call 0x6cbb64 */ r_esp -= 4; W32(r_esp, 0x6cb963u); f_006cbb64();
L_006cb963:; BB(0x006cb963);
    /* 006cb963: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
    /* 006cb966: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cb968: je 0x6cb9ef */ if (fZ) goto L_006cb9ef;
L_006cb96e:; BB(0x006cb96e);
    /* 006cb96e: push dword ptr [0xa9c4dc] */ { u32 v = R32((u32)(0xa9c4dcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006cb974: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6cb979u); f_0068d5a8();
    /* 006cb979: mov edx, eax */ r_edx = r_eax;
    /* 006cb97b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006cb97e: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 006cb982: mov esi, edx */ r_esi = r_edx;
    /* 006cb984: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 006cb987: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006cb989: mov edi, ebx */ r_edi = r_ebx;
    /* 006cb98b: mov ebx, eax */ r_ebx = r_eax;
L_006cb98d:; BB(0x006cb98d);
    /* 006cb98d: cmp ebx, dword ptr [0xa9c4dc] */ {  u32 a = r_ebx; u32 b = R32((u32)(0xa9c4dcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cb993: je 0x6cb9d5 */ if (fZ) goto L_006cb9d5;
L_006cb995:; BB(0x006cb995);
    /* 006cb995: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006cb996: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6cb99bu); f_0068d5a8();
    /* 006cb99b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006cb99c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cb99e: je 0x6cb9f4 */ if (fZ) goto L_006cb9f4;
L_006cb9a0:; BB(0x006cb9a0);
    /* 006cb9a0: lea ecx, [esi + 0x38] */ r_ecx = (u32)(r_esi+0x38u);
    /* 006cb9a3: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006cb9a6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cb9a7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006cb9a8: call 0x78ea50 */ r_esp -= 4; W32(r_esp, 0x6cb9adu); f_0078ea50();
    /* 006cb9ad: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006cb9b0: fcomp dword ptr [0x96b9f8] */ fx_compare(ST(0), R_F32((u32)(0x96b9f8u))); FPOP();
    /* 006cb9b6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006cb9b8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006cb9b9: ja 0x6cb9c8 */ if ((!fC&&!fZ)) goto L_006cb9c8;
L_006cb9bb:; BB(0x006cb9bb);
    /* 006cb9bb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006cb9bc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006cb9be: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 006cb9c1: call 0x714d7c */ r_esp -= 4; W32(r_esp, 0x6cb9c6u); f_00714d7c();
    /* 006cb9c6: jmp 0x6cb9e0 */ goto L_006cb9e0;
L_006cb9c8:; BB(0x006cb9c8);
    /* 006cb9c8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006cb9c9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006cb9cb: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 006cb9ce: call 0x714d7c */ r_esp -= 4; W32(r_esp, 0x6cb9d3u); f_00714d7c();
    /* 006cb9d3: jmp 0x6cb9e0 */ goto L_006cb9e0;
L_006cb9d5:; BB(0x006cb9d5);
    /* 006cb9d5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006cb9d6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006cb9d8: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 006cb9db: call 0x714d7c */ r_esp -= 4; W32(r_esp, 0x6cb9e0u); f_00714d7c();
L_006cb9e0:; BB(0x006cb9e0);
    /* 006cb9e0: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006cb9e3: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006cb9e6: jl 0x6cb98d */ if ((fS!=fO)) goto L_006cb98d;
L_006cb9e8:; BB(0x006cb9e8);
    /* 006cb9e8: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 006cb9ec: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
L_006cb9ef:; BB(0x006cb9ef);
    /* 006cb9ef: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006cb9f2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006cb9f3: ret  */ FN_RET(0x006cb944); r_esp += 4; return;
L_006cb9f4:; BB(0x006cb9f4);
    /* 006cb9f4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006cb9f5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006cb9f7: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 006cb9fa: call 0x714d7c */ r_esp -= 4; W32(r_esp, 0x6cb9ffu); f_00714d7c();
    /* 006cb9ff: jmp 0x6cb9e0 */ goto L_006cb9e0;
}

void f_006cba04(void) /* sub_6CBA04 */
{
    FN_ENTER(0x006cba04);
    /* 006cba04: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006cba05: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006cba08: mov eax, dword ptr [0xa942c0] */ r_eax = R32((u32)(0xa942c0u));
    /* 006cba0d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cba0f: je 0x6cba1f */ if (fZ) goto L_006cba1f;
L_006cba11:; BB(0x006cba11);
    /* 006cba11: call 0x691f70 */ r_esp -= 4; W32(r_esp, 0x6cba16u); f_00691f70();
    /* 006cba16: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cba19: je 0x6cbacc */ if (fZ) goto L_006cbacc;
L_006cba1f:; BB(0x006cba1f);
    /* 006cba1f: mov eax, dword ptr [0xa49510] */ r_eax = R32((u32)(0xa49510u));
    /* 006cba24: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cba26: je 0x6cba36 */ if (fZ) goto L_006cba36;
L_006cba28:; BB(0x006cba28);
    /* 006cba28: call 0x691f70 */ r_esp -= 4; W32(r_esp, 0x6cba2du); f_00691f70();
    /* 006cba2d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cba30: je 0x6cbacc */ if (fZ) goto L_006cbacc;
L_006cba36:; BB(0x006cba36);
    /* 006cba36: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_006cba38:; BB(0x006cba38);
    /* 006cba38: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006cba39: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6cba3eu); f_0068d5a8();
    /* 006cba3e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006cba3f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cba41: je 0x6cba53 */ if (fZ) goto L_006cba53;
L_006cba43:; BB(0x006cba43);
    /* 006cba43: push dword ptr [eax + 0x3ec] */ { u32 v = R32((u32)(r_eax+0x3ecu)); r_esp -= 4; W32(r_esp, v); }
    /* 006cba49: call 0x807e20 */ r_esp -= 4; W32(r_esp, 0x6cba4eu); f_00807e20();
    /* 006cba4e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006cba4f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cba51: je 0x6cbac5 */ if (fZ) goto L_006cbac5;
L_006cba53:; BB(0x006cba53);
    /* 006cba53: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006cba56: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006cba59: jl 0x6cba38 */ if ((fS!=fO)) goto L_006cba38;
L_006cba5b:; BB(0x006cba5b);
    /* 006cba5b: push dword ptr [0xa9c4dc] */ { u32 v = R32((u32)(0xa9c4dcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006cba61: mov ebx, 1 */ r_ebx = 0x1u;
    /* 006cba66: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6cba6bu); f_0068d5a8();
    /* 006cba6b: mov edx, eax */ r_edx = r_eax;
    /* 006cba6d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006cba70: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 006cba74: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 006cba77: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006cba79: mov esi, eax */ r_esi = r_eax;
    /* 006cba7b: mov edi, edx */ r_edi = r_edx;
L_006cba7d:; BB(0x006cba7d);
    /* 006cba7d: cmp esi, dword ptr [0xa9c4dc] */ {  u32 a = r_esi; u32 b = R32((u32)(0xa9c4dcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cba83: jne 0x6cba9b */ if (!fZ) goto L_006cba9b;
L_006cba85:; BB(0x006cba85);
    /* 006cba85: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006cba88: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006cba8b: jl 0x6cba7d */ if ((fS!=fO)) goto L_006cba7d;
L_006cba8d:; BB(0x006cba8d);
    /* 006cba8d: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 006cba91: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 006cba94: mov eax, ebx */ r_eax = r_ebx;
    /* 006cba96: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006cba99: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006cba9a: ret  */ FN_RET(0x006cba04); r_esp += 4; return;
L_006cba9b:; BB(0x006cba9b);
    /* 006cba9b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006cba9c: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6cbaa1u); f_0068d5a8();
    /* 006cbaa1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006cbaa2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cbaa4: je 0x6cba85 */ if (fZ) goto L_006cba85;
L_006cbaa6:; BB(0x006cbaa6);
    /* 006cbaa6: lea ecx, [edi + 0x38] */ r_ecx = (u32)(r_edi+0x38u);
    /* 006cbaa9: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006cbaac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cbaad: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006cbaae: call 0x78ea50 */ r_esp -= 4; W32(r_esp, 0x6cbab3u); f_0078ea50();
    /* 006cbab3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006cbab6: fcomp dword ptr [0x96b9f4] */ fx_compare(ST(0), R_F32((u32)(0x96b9f4u))); FPOP();
    /* 006cbabc: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006cbabe: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006cbabf: jbe 0x6cba85 */ if ((fC||fZ)) goto L_006cba85;
L_006cbac1:; BB(0x006cbac1);
    /* 006cbac1: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 006cbac3: jmp 0x6cba85 */ goto L_006cba85;
L_006cbac5:; BB(0x006cbac5);
    /* 006cbac5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006cbac7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006cbaca: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006cbacb: ret  */ FN_RET(0x006cba04); r_esp += 4; return;
L_006cbacc:; BB(0x006cbacc);
    /* 006cbacc: mov eax, 2 */ r_eax = 0x2u;
    /* 006cbad1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006cbad4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006cbad5: ret  */ FN_RET(0x006cba04); r_esp += 4; return;
}

void f_006cbad8(void) /* sub_6CBAD8 */
{
    FN_ENTER(0x006cbad8);
    /* 006cbad8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006cbad9: mov eax, dword ptr [0xa9c4f4] */ r_eax = R32((u32)(0xa9c4f4u));
    /* 006cbade: cmp eax, dword ptr [0xa9c4dc] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa9c4dcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cbae4: jne 0x6cbaea */ if (!fZ) goto L_006cbaea;
L_006cbae6:; BB(0x006cbae6);
    /* 006cbae6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006cbae8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006cbae9: ret  */ FN_RET(0x006cbad8); r_esp += 4; return;
L_006cbaea:; BB(0x006cbaea);
    /* 006cbaea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cbaeb: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6cbaf0u); f_0068d5a8();
    /* 006cbaf0: mov esi, eax */ r_esi = r_eax;
    /* 006cbaf2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006cbaf5: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cbaf7: je 0x6cbb38 */ if (fZ) goto L_006cbb38;
L_006cbaf9:; BB(0x006cbaf9);
    /* 006cbaf9: push dword ptr [esi + 0x3ec] */ { u32 v = R32((u32)(r_esi+0x3ecu)); r_esp -= 4; W32(r_esp, v); }
    /* 006cbaff: call 0x807e20 */ r_esp -= 4; W32(r_esp, 0x6cbb04u); f_00807e20();
    /* 006cbb04: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006cbb05: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cbb07: jne 0x6cbb0d */ if (!fZ) goto L_006cbb0d;
L_006cbb09:; BB(0x006cbb09);
    /* 006cbb09: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006cbb0b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006cbb0c: ret  */ FN_RET(0x006cbad8); r_esp += 4; return;
L_006cbb0d:; BB(0x006cbb0d);
    /* 006cbb0d: push dword ptr [0xa9c4dc] */ { u32 v = R32((u32)(0xa9c4dcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006cbb13: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6cbb18u); f_0068d5a8();
    /* 006cbb18: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006cbb19: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cbb1b: je 0x6cbb38 */ if (fZ) goto L_006cbb38;
L_006cbb1d:; BB(0x006cbb1d);
    /* 006cbb1d: add esi, 0x38 */ {  u32 a = r_esi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006cbb20: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006cbb23: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cbb24: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006cbb25: call 0x78ea50 */ r_esp -= 4; W32(r_esp, 0x6cbb2au); f_0078ea50();
    /* 006cbb2a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 006cbb2d: fcomp dword ptr [0x96b9f0] */ fx_compare(ST(0), R_F32((u32)(0x96b9f0u))); FPOP();
    /* 006cbb33: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006cbb35: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006cbb36: jbe 0x6cbb3c */ if ((fC||fZ)) goto L_006cbb3c;
L_006cbb38:; BB(0x006cbb38);
    /* 006cbb38: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006cbb3a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006cbb3b: ret  */ FN_RET(0x006cbad8); r_esp += 4; return;
L_006cbb3c:; BB(0x006cbb3c);
    /* 006cbb3c: mov eax, 1 */ r_eax = 0x1u;
    /* 006cbb41: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006cbb42: ret  */ FN_RET(0x006cbad8); r_esp += 4; return;
}

void f_006cbb44(void) /* sub_6CBB44 */
{
    FN_ENTER(0x006cbb44);
    /* 006cbb44: mov dword ptr [0xa95f30], 0x3f800000 */ W32((u32)(0xa95f30u), 0x3f800000u);
    /* 006cbb4e: mov dword ptr [0xa95f34], 0x41000000 */ W32((u32)(0xa95f34u), 0x41000000u);
    /* 006cbb58: mov dword ptr [0xa95f38], 0x3fc00000 */ W32((u32)(0xa95f38u), 0x3fc00000u);
    /* 006cbb62: ret  */ FN_RET(0x006cbb44); r_esp += 4; return;
}

void f_006cbb64(void) /* sub_6CBB64 */
{
    FN_ENTER(0x006cbb64);
    /* 006cbb64: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006cbb65: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006cbb66: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006cbb69: mov esi, ecx */ r_esi = r_ecx;
    /* 006cbb6b: mov ecx, dword ptr [esi + 0x1c] */ r_ecx = R32((u32)(r_esi+0x1cu));
    /* 006cbb6e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cbb70: je 0x6cbb7e */ if (fZ) goto L_006cbb7e;
L_006cbb72:; BB(0x006cbb72);
    /* 006cbb72: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6cbb77u); f_007127b0();
    /* 006cbb77: mov dword ptr [esi + 0x1c], 0 */ W32((u32)(r_esi+0x1cu), 0x0u);
L_006cbb7e:; BB(0x006cbb7e);
    /* 006cbb7e: push 0xd1 */ { u32 v = 0xd1u; r_esp -= 4; W32(r_esp, v); }
    /* 006cbb83: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x6cbb88u); f_0073ec50();
    /* 006cbb88: push 0x9cece8 */ { u32 v = 0x9cece8u; r_esp -= 4; W32(r_esp, v); }
    /* 006cbb8d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cbb8e: call 0x714ab0 */ r_esp -= 4; W32(r_esp, 0x6cbb93u); f_00714ab0();
    /* 006cbb93: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006cbb96: mov dword ptr [esi + 0x1c], eax */ W32((u32)(r_esi+0x1cu), r_eax);
    /* 006cbb99: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cbb9b: je 0x6cbc2e */ if (fZ) goto L_006cbc2e;
L_006cbba1:; BB(0x006cbba1);
    /* 006cbba1: movzx edx, word ptr [eax + 0x84] */ r_edx = (u32)R16((u32)(r_eax+0x84u));
    /* 006cbba8: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 006cbbac: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 006cbbb0: or edx, 0xffff0040 */ {  u32 a = r_edx; u32 b = 0xffff0040u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 006cbbb6: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 006cbbb9: mov word ptr [eax + 0x84], dx */ W16((u32)(r_eax+0x84u), (u16)r_edx);
    /* 006cbbc0: mov ebx, dword ptr [esi + 0x1c] */ r_ebx = R32((u32)(r_esi+0x1cu));
    /* 006cbbc3: movzx eax, word ptr [ebx + 0x84] */ r_eax = (u32)R16((u32)(r_ebx+0x84u));
    /* 006cbbca: or eax, 0xffff0080 */ {  u32 a = r_eax; u32 b = 0xffff0080u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006cbbcf: mov word ptr [ebx + 0x84], ax */ W16((u32)(r_ebx+0x84u), (u16)r_eax);
    /* 006cbbd6: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006cbbd8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006cbbda: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 006cbbde: lea eax, [esi + 0x20] */ r_eax = (u32)(r_esi+0x20u);
    /* 006cbbe1: mov ebx, esi */ r_ebx = r_esi;
    /* 006cbbe3: mov esi, eax */ r_esi = r_eax;
    /* 006cbbe5: mov edi, edx */ r_edi = r_edx;
L_006cbbe7:; BB(0x006cbbe7);
    /* 006cbbe7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006cbbe8: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6cbbedu); f_0068d5a8();
    /* 006cbbed: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006cbbee: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cbbf0: je 0x6cbc34 */ if (fZ) goto L_006cbc34;
L_006cbbf2:; BB(0x006cbbf2);
    /* 006cbbf2: mov ecx, eax */ r_ecx = r_eax;
    /* 006cbbf4: call 0x6936b4 */ r_esp -= 4; W32(r_esp, 0x6cbbf9u); f_006936b4();
    /* 006cbbf9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cbbfa: lea ebp, [ebx + 0x20] */ r_ebp = (u32)(r_ebx+0x20u);
    /* 006cbbfd: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006cbbfe: call 0x857fed */ r_esp -= 4; W32(r_esp, 0x6cbc03u); f_00857fed();
    /* 006cbc03: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006cbc06: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006cbc07: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006cbc08: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 006cbc0c: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 006cbc0f: call 0x714d34 */ r_esp -= 4; W32(r_esp, 0x6cbc14u); f_00714d34();
L_006cbc14:; BB(0x006cbc14);
    /* 006cbc14: add dword ptr [esp + 0xc], 0x30 */ { u32 ad = (u32)(r_esp+0xcu);  u32 a = R32(ad); u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 006cbc19: add esi, 0x30 */ {  u32 a = r_esi; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006cbc1c: add ebx, 0x30 */ {  u32 a = r_ebx; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006cbc1f: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006cbc22: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006cbc25: jl 0x6cbbe7 */ if ((fS!=fO)) goto L_006cbbe7;
L_006cbc27:; BB(0x006cbc27);
    /* 006cbc27: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 006cbc2b: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
L_006cbc2e:; BB(0x006cbc2e);
    /* 006cbc2e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006cbc31: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006cbc32: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006cbc33: ret  */ FN_RET(0x006cbb64); r_esp += 4; return;
L_006cbc34:; BB(0x006cbc34);
    /* 006cbc34: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006cbc38: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 006cbc3c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006cbc3d: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 006cbc3f: mov word ptr [ecx + eax + 0x20], bp */ W16((u32)(r_ecx+r_eax+0x20u), (u16)r_ebp);
    /* 006cbc44: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006cbc45: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 006cbc48: call 0x714d34 */ r_esp -= 4; W32(r_esp, 0x6cbc4du); f_00714d34();
    /* 006cbc4d: jmp 0x6cbc14 */ goto L_006cbc14;
}

void f_006cbc50(void) /* sub_6CBC50 */
{
    FN_ENTER(0x006cbc50);
    /* 006cbc50: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006cbc51: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006cbc53: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006cbc55: call 0x6cbc74 */ r_esp -= 4; W32(r_esp, 0x6cbc5au); f_006cbc74();
    /* 006cbc5a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006cbc5e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006cbc60: jne 0x6cbc66 */ if (!fZ) goto L_006cbc66;
L_006cbc62:; BB(0x006cbc62);
    /* 006cbc62: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006cbc63: ret 4 */ FN_RET(0x006cbc50); r_esp += 8; return;
L_006cbc66:; BB(0x006cbc66);
    /* 006cbc66: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006cbc67: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6cbc6cu); f_005c2f74();
    /* 006cbc6c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006cbc6d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006cbc6e: ret 4 */ FN_RET(0x006cbc50); r_esp += 8; return;
}

void f_006cbc74(void) /* sub_6CBC74 */
{
    FN_ENTER(0x006cbc74);
    /* 006cbc74: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006cbc75: mov ebp, esp */ r_ebp = r_esp;
    /* 006cbc77: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006cbc79: push 0x8ed914 */ { u32 v = 0x8ed914u; r_esp -= 4; W32(r_esp, v); }
    /* 006cbc7e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006cbc84: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cbc85: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006cbc8c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006cbc8f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006cbc92: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006cbc95: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006cbc98: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006cbc9b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006cbc9e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006cbca5: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006cbca8: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 006cbcab: mov dword ptr [ecx], 0xb3bb78 */ W32((u32)(r_ecx), 0xb3bb78u);
    /* 006cbcb1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cbcb3: je 0x6cbccc */ if (fZ) goto L_006cbccc;
L_006cbcb5:; BB(0x006cbcb5);
    /* 006cbcb5: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006cbcb8: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 006cbcbc: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006cbcc1: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 006cbcc5: mov dword ptr [ecx + 0x30], 0 */ W32((u32)(r_ecx+0x30u), 0x0u);
L_006cbccc:; BB(0x006cbccc);
    /* 006cbccc: call 0x6dc514 */ r_esp -= 4; W32(r_esp, 0x6cbcd1u); f_006dc514();
    /* 006cbcd1: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006cbcd4: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 006cbcd7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cbcd9: je 0x6cbcea */ if (fZ) goto L_006cbcea;
L_006cbcdb:; BB(0x006cbcdb);
    /* 006cbcdb: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6cbce0u); f_007127b0();
    /* 006cbce0: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006cbce3: mov dword ptr [eax + 0x2c], 0 */ W32((u32)(r_eax+0x2cu), 0x0u);
L_006cbcea:; BB(0x006cbcea);
    /* 006cbcea: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 006cbced: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cbcef: je 0x6cbd08 */ if (fZ) goto L_006cbd08;
L_006cbcf1:; BB(0x006cbcf1);
    /* 006cbcf1: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 006cbcf5: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006cbcfa: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 006cbcfe: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006cbd01: mov dword ptr [eax + 0x34], 0 */ W32((u32)(r_eax+0x34u), 0x0u);
L_006cbd08:; BB(0x006cbd08);
    /* 006cbd08: mov ecx, eax */ r_ecx = r_eax;
    /* 006cbd0a: call 0x6dc9fc */ r_esp -= 4; W32(r_esp, 0x6cbd0fu); f_006dc9fc();
    /* 006cbd0f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006cbd11: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006cbd13: mov dword ptr [0xa95f50], edx */ W32((u32)(0xa95f50u), r_edx);
    /* 006cbd19: mov dword ptr [eax*4 + 0xa95f54], edx */ W32((u32)(r_eax*4+0xa95f54u), r_edx);
    /* 006cbd20: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x6cbd25u); f_00791748();
    /* 006cbd25: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006cbd26: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006cbd2d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006cbd30: call 0x6dc3a0 */ r_esp -= 4; W32(r_esp, 0x6cbd35u); f_006dc3a0();
    /* 006cbd35: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006cbd38: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006cbd3f: mov esp, ebp */ r_esp = r_ebp;
    /* 006cbd41: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006cbd42: ret  */ FN_RET(0x006cbc74); r_esp += 4; return;
}

void f_006cbd44(void) /* sub_6CBD44 */
{
    FN_ENTER(0x006cbd44);
    /* 006cbd44: call 0x6cc6ec */ r_esp -= 4; W32(r_esp, 0x6cbd49u); f_006cc6ec();
    /* 006cbd49: ret  */ FN_RET(0x006cbd44); r_esp += 4; return;
}

void f_006cbd4c(void) /* sub_6CBD4C */
{
    FN_ENTER(0x006cbd4c);
    /* 006cbd4c: mov eax, dword ptr [ecx + 0x20] */ r_eax = R32((u32)(r_ecx+0x20u));
    /* 006cbd4f: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006cbd52: ja 0x6cbda1 */ if ((!fC&&!fZ)) goto L_006cbda1;
L_006cbd54:; BB(0x006cbd54);
    /* 006cbd54: mov eax, dword ptr [eax*4 + 0x96b9fc] */ r_eax = R32((u32)(r_eax*4+0x96b9fcu));
    /* 006cbd5b: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_006cbda1:; BB(0x006cbda1);
    /* 006cbda1: ret  */ FN_RET(0x006cbd4c); r_esp += 4; return;
}

void f_006cbd5d(void)
{
    FN_ENTER(0x006cbd5d);
    /* 006cbd5d: call 0x6cc614 */ r_esp -= 4; W32(r_esp, 0x6cbd62u); f_006cc614();
    /* 006cbd62: jmp 0x6cbda1 */ goto L_006cbda1;
L_006cbda1:; BB(0x006cbda1);
    /* 006cbda1: ret  */ FN_RET(0x006cbd5d); r_esp += 4; return;
}

void f_006cbd64(void)
{
    FN_ENTER(0x006cbd64);
    /* 006cbd64: call 0x6cbda4 */ r_esp -= 4; W32(r_esp, 0x6cbd69u); f_006cbda4();
    /* 006cbd69: jmp 0x6cbda1 */ goto L_006cbda1;
L_006cbda1:; BB(0x006cbda1);
    /* 006cbda1: ret  */ FN_RET(0x006cbd64); r_esp += 4; return;
}

void f_006cbd6b(void)
{
    FN_ENTER(0x006cbd6b);
    /* 006cbd6b: call 0x6cbda4 */ r_esp -= 4; W32(r_esp, 0x6cbd70u); f_006cbda4();
    /* 006cbd70: jmp 0x6cbda1 */ goto L_006cbda1;
L_006cbda1:; BB(0x006cbda1);
    /* 006cbda1: ret  */ FN_RET(0x006cbd6b); r_esp += 4; return;
}

void f_006cbd72(void)
{
    FN_ENTER(0x006cbd72);
    /* 006cbd72: call 0x6cbdf4 */ r_esp -= 4; W32(r_esp, 0x6cbd77u); f_006cbdf4();
    /* 006cbd77: jmp 0x6cbda1 */ goto L_006cbda1;
L_006cbda1:; BB(0x006cbda1);
    /* 006cbda1: ret  */ FN_RET(0x006cbd72); r_esp += 4; return;
}

void f_006cbd79(void)
{
    FN_ENTER(0x006cbd79);
    /* 006cbd79: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006cbd7b: call dword ptr [eax + 0x2c] */ { u32 t = R32((u32)(r_eax+0x2cu)); r_esp -= 4; W32(r_esp, 0x6cbd7eu); call_ind(t); }
    /* 006cbd7e: jmp 0x6cbda1 */ goto L_006cbda1;
L_006cbda1:; BB(0x006cbda1);
    /* 006cbda1: ret  */ FN_RET(0x006cbd79); r_esp += 4; return;
}

void f_006cbd80(void)
{
    FN_ENTER(0x006cbd80);
    /* 006cbd80: call 0x6cbebc */ r_esp -= 4; W32(r_esp, 0x6cbd85u); f_006cbebc();
    /* 006cbd85: jmp 0x6cbda1 */ goto L_006cbda1;
L_006cbda1:; BB(0x006cbda1);
    /* 006cbda1: ret  */ FN_RET(0x006cbd80); r_esp += 4; return;
}

void f_006cbd87(void)
{
    FN_ENTER(0x006cbd87);
    /* 006cbd87: call 0x6cc080 */ r_esp -= 4; W32(r_esp, 0x6cbd8cu); f_006cc080();
    /* 006cbd8c: jmp 0x6cbda1 */ goto L_006cbda1;
L_006cbda1:; BB(0x006cbda1);
    /* 006cbda1: ret  */ FN_RET(0x006cbd87); r_esp += 4; return;
}

void f_006cbd8e(void)
{
    FN_ENTER(0x006cbd8e);
    /* 006cbd8e: call 0x6cc100 */ r_esp -= 4; W32(r_esp, 0x6cbd93u); f_006cc100();
    /* 006cbd93: jmp 0x6cbda1 */ goto L_006cbda1;
L_006cbda1:; BB(0x006cbda1);
    /* 006cbda1: ret  */ FN_RET(0x006cbd8e); r_esp += 4; return;
}

void f_006cbd95(void)
{
    FN_ENTER(0x006cbd95);
    /* 006cbd95: call 0x6cc648 */ r_esp -= 4; W32(r_esp, 0x6cbd9au); f_006cc648();
    /* 006cbd9a: jmp 0x6cbda1 */ goto L_006cbda1;
L_006cbda1:; BB(0x006cbda1);
    /* 006cbda1: ret  */ FN_RET(0x006cbd95); r_esp += 4; return;
}

void f_006cbd9c(void)
{
    FN_ENTER(0x006cbd9c);
    /* 006cbd9c: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006cbd9e: call dword ptr [eax + 0x28] */ { u32 t = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, 0x6cbda1u); call_ind(t); }
    /* 006cbda1: ret  */ FN_RET(0x006cbd9c); r_esp += 4; return;
}

void f_006cbda1(void)
{
    FN_ENTER(0x006cbda1);
    /* 006cbda1: ret  */ FN_RET(0x006cbda1); r_esp += 4; return;
}

void f_006cbda4(void) /* sub_6CBDA4 */
{
    FN_ENTER(0x006cbda4);
    /* 006cbda4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006cbda5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006cbda7: mov ecx, dword ptr [ebx + 0x34] */ r_ecx = R32((u32)(r_ebx+0x34u));
    /* 006cbdaa: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cbdac: je 0x6cbdbf */ if (fZ) goto L_006cbdbf;
L_006cbdae:; BB(0x006cbdae);
    /* 006cbdae: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x6cbdb3u); f_008173b4();
    /* 006cbdb3: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006cbdb6: je 0x6cbdca */ if (fZ) goto L_006cbdca;
L_006cbdb8:; BB(0x006cbdb8);
    /* 006cbdb8: mov dword ptr [ebx + 0x34], 0 */ W32((u32)(r_ebx+0x34u), 0x0u);
L_006cbdbf:; BB(0x006cbdbf);
    /* 006cbdbf: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 006cbdc1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006cbdc3: call dword ptr [eax + 0x20] */ { u32 t = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, 0x6cbdc6u); call_ind(t); }
    /* 006cbdc6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006cbdc8: jne 0x6cbdcc */ if (!fZ) goto L_006cbdcc;
L_006cbdca:; BB(0x006cbdca);
    /* 006cbdca: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006cbdcb: ret  */ FN_RET(0x006cbda4); r_esp += 4; return;
L_006cbdcc:; BB(0x006cbdcc);
    /* 006cbdcc: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006cbdce: call 0x6dc988 */ r_esp -= 4; W32(r_esp, 0x6cbdd3u); f_006dc988();
    /* 006cbdd3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006cbdd5: je 0x6cbdca */ if (fZ) goto L_006cbdca;
L_006cbdd7:; BB(0x006cbdd7);
    /* 006cbdd7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006cbdd9: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 006cbddb: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 006cbddd: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006cbddf: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x6cbde2u); call_ind(t); }
    /* 006cbde2: mov dword ptr [ebx + 0x38], 1 */ W32((u32)(r_ebx+0x38u), 0x1u);
    /* 006cbde9: mov dword ptr [ebx + 0x20], 5 */ W32((u32)(r_ebx+0x20u), 0x5u);
    /* 006cbdf0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006cbdf1: ret  */ FN_RET(0x006cbda4); r_esp += 4; return;
}

void f_006cbdf4(void) /* sub_6CBDF4 */
{
    FN_ENTER(0x006cbdf4);
    /* 006cbdf4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006cbdf5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006cbdf7: mov ecx, dword ptr [ebx + 0x2c] */ r_ecx = R32((u32)(r_ebx+0x2cu));
    /* 006cbdfa: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006cbdfc: je 0x6cbeba */ if (fZ) goto L_006cbeba;
L_006cbe02:; BB(0x006cbe02);
    /* 006cbe02: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 006cbe09: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006cbe0b: je 0x6cbe65 */ if (fZ) goto L_006cbe65;
L_006cbe0d:; BB(0x006cbe0d);
    /* 006cbe0d: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x6cbe12u); f_007365f4();
    /* 006cbe12: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cbe14: je 0x6cbe27 */ if (fZ) goto L_006cbe27;
L_006cbe16:; BB(0x006cbe16);
    /* 006cbe16: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cbe19: je 0x6cbe90 */ if (fZ) goto L_006cbe90;
L_006cbe1b:; BB(0x006cbe1b);
    /* 006cbe1b: mov ecx, dword ptr [ebx + 0x2c] */ r_ecx = R32((u32)(r_ebx+0x2cu));
    /* 006cbe1e: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 006cbe25: jmp 0x6cbe65 */ goto L_006cbe65;
L_006cbe27:; BB(0x006cbe27);
    /* 006cbe27: mov ecx, dword ptr [ebx + 0x2c] */ r_ecx = R32((u32)(r_ebx+0x2cu));
    /* 006cbe2a: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6cbe2fu); f_007127b0();
    /* 006cbe2f: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 006cbe31: mov dword ptr [ebx + 0x2c], 0 */ W32((u32)(r_ebx+0x2cu), 0x0u);
    /* 006cbe38: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006cbe3a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006cbe3c: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 006cbe3e: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x6cbe41u); call_ind(t); }
    /* 006cbe41: mov eax, dword ptr [0xa95f6c] */ r_eax = R32((u32)(0xa95f6cu));
    /* 006cbe46: mov dword ptr [ebx + 0x38], 1 */ W32((u32)(r_ebx+0x38u), 0x1u);
    /* 006cbe4d: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006cbe50: je 0x6cbe5c */ if (fZ) goto L_006cbe5c;
L_006cbe52:; BB(0x006cbe52);
    /* 006cbe52: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cbe53: call 0x6bc76c */ r_esp -= 4; W32(r_esp, 0x6cbe58u); f_006bc76c();
    /* 006cbe58: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006cbe59: mov dword ptr [ebx + 0x34], eax */ W32((u32)(r_ebx+0x34u), r_eax);
L_006cbe5c:; BB(0x006cbe5c);
    /* 006cbe5c: mov dword ptr [ebx + 0x20], 5 */ W32((u32)(r_ebx+0x20u), 0x5u);
    /* 006cbe63: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006cbe64: ret  */ FN_RET(0x006cbdf4); r_esp += 4; return;
L_006cbe65:; BB(0x006cbe65);
    /* 006cbe65: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006cbe67: je 0x6cbeba */ if (fZ) goto L_006cbeba;
L_006cbe69:; BB(0x006cbe69);
    /* 006cbe69: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6cbe6eu); f_007127b0();
    /* 006cbe6e: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 006cbe70: mov dword ptr [ebx + 0x2c], 0 */ W32((u32)(r_ebx+0x2cu), 0x0u);
    /* 006cbe77: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006cbe79: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006cbe7b: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 006cbe7d: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x6cbe80u); call_ind(t); }
    /* 006cbe80: mov dword ptr [ebx + 0x38], 0 */ W32((u32)(r_ebx+0x38u), 0x0u);
    /* 006cbe87: mov dword ptr [ebx + 0x20], 5 */ W32((u32)(r_ebx+0x20u), 0x5u);
    /* 006cbe8e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006cbe8f: ret  */ FN_RET(0x006cbdf4); r_esp += 4; return;
L_006cbe90:; BB(0x006cbe90);
    /* 006cbe90: mov ecx, dword ptr [ebx + 0x2c] */ r_ecx = R32((u32)(r_ebx+0x2cu));
    /* 006cbe93: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6cbe98u); f_007127b0();
    /* 006cbe98: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 006cbe9a: mov dword ptr [ebx + 0x2c], 0 */ W32((u32)(r_ebx+0x2cu), 0x0u);
    /* 006cbea1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006cbea3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006cbea5: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 006cbea7: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x6cbeaau); call_ind(t); }
    /* 006cbeaa: mov dword ptr [ebx + 0x38], 0 */ W32((u32)(r_ebx+0x38u), 0x0u);
    /* 006cbeb1: mov dword ptr [ebx + 0x20], 5 */ W32((u32)(r_ebx+0x20u), 0x5u);
    /* 006cbeb8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006cbeb9: ret  */ FN_RET(0x006cbdf4); r_esp += 4; return;
L_006cbeba:; BB(0x006cbeba);
    /* 006cbeba: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006cbebb: ret  */ FN_RET(0x006cbdf4); r_esp += 4; return;
}

void f_006cbebc(void) /* sub_6CBEBC */
{
    FN_ENTER(0x006cbebc);
    /* 006cbebc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006cbebd: mov ebp, esp */ r_ebp = r_esp;
    /* 006cbebf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006cbec1: push 0x8ed972 */ { u32 v = 0x8ed972u; r_esp -= 4; W32(r_esp, v); }
    /* 006cbec6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006cbecc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cbecd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006cbed4: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006cbed7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006cbeda: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 006cbedd: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 006cbee0: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 006cbee3: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006cbee5: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 006cbee8: call dword ptr [eax + 0x20] */ { u32 t = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, 0x6cbeebu); call_ind(t); }
    /* 006cbeeb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006cbeed: jne 0x6cbefd */ if (!fZ) goto L_006cbefd;
L_006cbeef:; BB(0x006cbeef);
    /* 006cbeef: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006cbef2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006cbef9: mov esp, ebp */ r_esp = r_ebp;
    /* 006cbefb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006cbefc: ret  */ FN_RET(0x006cbebc); r_esp += 4; return;
L_006cbefd:; BB(0x006cbefd);
    /* 006cbefd: call 0x78b1c4 */ r_esp -= 4; W32(r_esp, 0x6cbf02u); f_0078b1c4();
    /* 006cbf02: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cbf05: jne 0x6cbf78 */ if (!fZ) goto L_006cbf78;
L_006cbf07:; BB(0x006cbf07);
    /* 006cbf07: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 006cbf0e: push 0x5c */ { u32 v = 0x5cu; r_esp -= 4; W32(r_esp, v); }
    /* 006cbf10: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6cbf15u); f_005caba4();
    /* 006cbf15: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006cbf18: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006cbf1b: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 006cbf1e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cbf20: je 0x6cc064 */ if (fZ) goto L_006cc064;
L_006cbf26:; BB(0x006cbf26);
    /* 006cbf26: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 006cbf2d: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 006cbf34: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006cbf37: push dword ptr [eax + 0x24] */ { u32 v = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 006cbf3a: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006cbf3d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cbf3e: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 006cbf44: call 0x6cf01c */ r_esp -= 4; W32(r_esp, 0x6cbf49u); f_006cf01c();
    /* 006cbf49: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_006cbf50:; BB(0x006cbf50);
    /* 006cbf50: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006cbf53: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006cbf55: je 0x6cc056 */ if (fZ) goto L_006cc056;
L_006cbf5b:; BB(0x006cbf5b);
    /* 006cbf5b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006cbf5e: mov dword ptr [eax + 0x2c], 0x6cc1ec */ W32((u32)(r_eax+0x2cu), 0x6cc1ecu);
    /* 006cbf65: mov dword ptr [eax + 0x28], 0x6cc214 */ W32((u32)(r_eax+0x28u), 0x6cc214u);
    /* 006cbf6c: mov dword ptr [edx + 0x20], 0xa */ W32((u32)(r_edx+0x20u), 0xau);
    /* 006cbf73: jmp 0x6cc056 */ goto L_006cc056;
L_006cbf78:; BB(0x006cbf78);
    /* 006cbf78: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cbf7b: jne 0x6cbfeb */ if (!fZ) goto L_006cbfeb;
L_006cbf7d:; BB(0x006cbf7d);
    /* 006cbf7d: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 006cbf84: push 0x5c */ { u32 v = 0x5cu; r_esp -= 4; W32(r_esp, v); }
    /* 006cbf86: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6cbf8bu); f_005caba4();
    /* 006cbf8b: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006cbf8e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006cbf91: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 006cbf94: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cbf96: je 0x6cc06e */ if (fZ) goto L_006cc06e;
L_006cbf9c:; BB(0x006cbf9c);
    /* 006cbf9c: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 006cbfa3: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 006cbfaa: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006cbfad: push dword ptr [eax + 0x24] */ { u32 v = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 006cbfb0: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006cbfb3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cbfb4: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 006cbfba: call 0x6cf01c */ r_esp -= 4; W32(r_esp, 0x6cbfbfu); f_006cf01c();
    /* 006cbfbf: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_006cbfc6:; BB(0x006cbfc6);
    /* 006cbfc6: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006cbfc9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006cbfcb: je 0x6cc056 */ if (fZ) goto L_006cc056;
L_006cbfd1:; BB(0x006cbfd1);
    /* 006cbfd1: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006cbfd4: mov dword ptr [eax + 0x2c], 0x6cc2f8 */ W32((u32)(r_eax+0x2cu), 0x6cc2f8u);
    /* 006cbfdb: mov dword ptr [eax + 0x28], 0x6cc214 */ W32((u32)(r_eax+0x28u), 0x6cc214u);
    /* 006cbfe2: mov dword ptr [edx + 0x20], 0xa */ W32((u32)(r_edx+0x20u), 0xau);
    /* 006cbfe9: jmp 0x6cc056 */ goto L_006cc056;
L_006cbfeb:; BB(0x006cbfeb);
    /* 006cbfeb: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 006cbff2: push 0x58 */ { u32 v = 0x58u; r_esp -= 4; W32(r_esp, v); }
    /* 006cbff4: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6cbff9u); f_005caba4();
    /* 006cbff9: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006cbffc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006cbfff: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 006cc002: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cc004: je 0x6cc078 */ if (fZ) goto L_006cc078;
L_006cc006:; BB(0x006cc006);
    /* 006cc006: mov dword ptr [ebp - 0x3c], 1 */ W32((u32)(r_ebp+0xffffffc4u), 0x1u);
    /* 006cc00d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006cc014: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006cc017: push dword ptr [eax + 0x24] */ { u32 v = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 006cc01a: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006cc01d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cc01e: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 006cc024: call 0x6cf6c0 */ r_esp -= 4; W32(r_esp, 0x6cc029u); f_006cf6c0();
    /* 006cc029: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_006cc030:; BB(0x006cc030);
    /* 006cc030: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006cc033: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006cc035: je 0x6cc056 */ if (fZ) goto L_006cc056;
L_006cc037:; BB(0x006cc037);
    /* 006cc037: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006cc03a: mov dword ptr [eax + 0x2c], 0x6cc1ec */ W32((u32)(r_eax+0x2cu), 0x6cc1ecu);
    /* 006cc041: mov dword ptr [eax + 0x28], 0x6cc214 */ W32((u32)(r_eax+0x28u), 0x6cc214u);
    /* 006cc048: mov dword ptr [eax + 0x30], 0x6cc23c */ W32((u32)(r_eax+0x30u), 0x6cc23cu);
    /* 006cc04f: mov dword ptr [edx + 0x20], 0xa */ W32((u32)(r_edx+0x20u), 0xau);
L_006cc056:; BB(0x006cc056);
    /* 006cc056: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006cc059: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006cc060: mov esp, ebp */ r_esp = r_ebp;
    /* 006cc062: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006cc063: ret  */ FN_RET(0x006cbebc); r_esp += 4; return;
L_006cc064:; BB(0x006cc064);
    /* 006cc064: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006cc066: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006cc069: jmp 0x6cbf50 */ goto L_006cbf50;
L_006cc06e:; BB(0x006cc06e);
    /* 006cc06e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006cc070: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006cc073: jmp 0x6cbfc6 */ goto L_006cbfc6;
L_006cc078:; BB(0x006cc078);
    /* 006cc078: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006cc07a: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006cc07d: jmp 0x6cc030 */ goto L_006cc030;
}

