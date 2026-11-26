#include "protos.h"

void f_0071a168(void) /* sub_71A168 */
{
    FN_ENTER(0x0071a168);
    /* 0071a168: call 0x719a48 */ r_esp -= 4; W32(r_esp, 0x71a16du); f_00719a48();
    /* 0071a16d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071a16f: jne 0x71a172 */ if (!fZ) goto L_0071a172;
L_0071a171:; BB(0x0071a171);
    /* 0071a171: ret  */ FN_RET(0x0071a168); r_esp += 4; return;
L_0071a172:; BB(0x0071a172);
    /* 0071a172: call 0x7a9044 */ r_esp -= 4; W32(r_esp, 0x71a177u); f_007a9044();
    /* 0071a177: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x71a17cu); f_0082dbac();
    /* 0071a17c: call 0x4d28a4 */ r_esp -= 4; W32(r_esp, 0x71a181u); f_004d28a4();
    /* 0071a181: mov ecx, dword ptr [0xa984f0] */ r_ecx = R32((u32)(0xa984f0u));
    /* 0071a187: call 0x818f50 */ r_esp -= 4; W32(r_esp, 0x71a18cu); f_00818f50();
    /* 0071a18c: call 0x4d2968 */ r_esp -= 4; W32(r_esp, 0x71a191u); f_004d2968();
    /* 0071a191: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x71a196u); f_0082dab0();
    /* 0071a196: ret  */ FN_RET(0x0071a168); r_esp += 4; return;
}

void f_0071a198(void) /* sub_71A198 */
{
    FN_ENTER(0x0071a198);
    /* 0071a198: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0071a199: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0071a19d: call 0x712d14 */ r_esp -= 4; W32(r_esp, 0x71a1a2u); f_00712d14();
    /* 0071a1a2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071a1a3: call 0x71bd7c */ r_esp -= 4; W32(r_esp, 0x71a1a8u); f_0071bd7c();
    /* 0071a1a8: call 0x71b818 */ r_esp -= 4; W32(r_esp, 0x71a1adu); f_0071b818();
    /* 0071a1ad: mov dword ptr [0xa98528], 0xbfcccccc */ W32((u32)(0xa98528u), 0xbfccccccu);
    /* 0071a1b7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0071a1b9: mov dword ptr [0xa98540], eax */ W32((u32)(0xa98540u), r_eax);
    /* 0071a1be: mov dword ptr [0xa98538], eax */ W32((u32)(0xa98538u), r_eax);
    /* 0071a1c3: mov dword ptr [0xa98534], eax */ W32((u32)(0xa98534u), r_eax);
    /* 0071a1c8: mov dword ptr [0xa98530], eax */ W32((u32)(0xa98530u), r_eax);
    /* 0071a1cd: mov dword ptr [0xa9852c], eax */ W32((u32)(0xa9852cu), r_eax);
    /* 0071a1d2: mov dword ptr [0xa9853c], eax */ W32((u32)(0xa9853cu), r_eax);
    /* 0071a1d7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0071a1d9: mov ebx, eax */ r_ebx = r_eax;
L_0071a1db:; BB(0x0071a1db);
    /* 0071a1db: lea ecx, [ebx + 0xa98480] */ r_ecx = (u32)(r_ebx+0xa98480u);
    /* 0071a1e1: call 0x71a200 */ r_esp -= 4; W32(r_esp, 0x71a1e6u); f_0071a200();
    /* 0071a1e6: add ebx, 0x1c */ {  u32 a = r_ebx; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0071a1e9: cmp ebx, 0xa8 */ {  u32 a = r_ebx; u32 b = 0xa8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0071a1ef: jl 0x71a1db */ if ((fS!=fO)) goto L_0071a1db;
L_0071a1f1:; BB(0x0071a1f1);
    /* 0071a1f1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0071a1f2: ret  */ FN_RET(0x0071a198); r_esp += 4; return;
}

void f_0071a1d2(void)
{
    FN_ENTER(0x0071a1d2);
    /* 0071a1d2: mov dword ptr [0xa9853c], eax */ W32((u32)(0xa9853cu), r_eax);
    /* 0071a1d7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0071a1d9: mov ebx, eax */ r_ebx = r_eax;
L_0071a1db:; BB(0x0071a1db);
    /* 0071a1db: lea ecx, [ebx + 0xa98480] */ r_ecx = (u32)(r_ebx+0xa98480u);
    /* 0071a1e1: call 0x71a200 */ r_esp -= 4; W32(r_esp, 0x71a1e6u); f_0071a200();
    /* 0071a1e6: add ebx, 0x1c */ {  u32 a = r_ebx; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0071a1e9: cmp ebx, 0xa8 */ {  u32 a = r_ebx; u32 b = 0xa8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0071a1ef: jl 0x71a1db */ if ((fS!=fO)) goto L_0071a1db;
L_0071a1f1:; BB(0x0071a1f1);
    /* 0071a1f1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0071a1f2: ret  */ FN_RET(0x0071a1d2); r_esp += 4; return;
}

void f_0071a1f4(void) /* sub_71A1F4 */
{
    FN_ENTER(0x0071a1f4);
    /* 0071a1f4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0071a1f6: call 0x71a198 */ r_esp -= 4; W32(r_esp, 0x71a1fbu); f_0071a198();
    /* 0071a1fb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071a1fc: ret  */ FN_RET(0x0071a1f4); r_esp += 4; return;
}

void f_0071a200(void) /* sub_71A200 */
{
    FN_ENTER(0x0071a200);
    /* 0071a200: mov dword ptr [ecx + 8], 0 */ W32((u32)(r_ecx+0x8u), 0x0u);
    /* 0071a207: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071a209: mov dword ptr [ecx + 0xc], 0 */ W32((u32)(r_ecx+0xcu), 0x0u);
    /* 0071a210: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 0071a212: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0071a215: mov dword ptr [ecx + 0x10], 0 */ W32((u32)(r_ecx+0x10u), 0x0u);
    /* 0071a21c: mov dword ptr [ecx + 0x14], 0x44200000 */ W32((u32)(r_ecx+0x14u), 0x44200000u);
    /* 0071a223: mov dword ptr [ecx + 0x18], 0x43f00000 */ W32((u32)(r_ecx+0x18u), 0x43f00000u);
    /* 0071a22a: ret  */ FN_RET(0x0071a200); r_esp += 4; return;
}

void f_0071a22c(void) /* sub_71A22C */
{
    FN_ENTER(0x0071a22c);
    /* 0071a22c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0071a22d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0071a22f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0071a231: call 0x71a250 */ r_esp -= 4; W32(r_esp, 0x71a236u); f_0071a250();
    /* 0071a236: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0071a23a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071a23c: jne 0x71a242 */ if (!fZ) goto L_0071a242;
L_0071a23e:; BB(0x0071a23e);
    /* 0071a23e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0071a23f: ret 4 */ FN_RET(0x0071a22c); r_esp += 8; return;
L_0071a242:; BB(0x0071a242);
    /* 0071a242: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0071a243: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x71a248u); f_005c2f74();
    /* 0071a248: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071a249: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0071a24a: ret 4 */ FN_RET(0x0071a22c); r_esp += 8; return;
}

void f_0071a250(void) /* sub_71A250 */
{
    FN_ENTER(0x0071a250);
    /* 0071a250: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0071a251: mov ebp, esp */ r_ebp = r_esp;
    /* 0071a253: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0071a255: push 0x8f0b20 */ { u32 v = 0x8f0b20u; r_esp -= 4; W32(r_esp, v); }
    /* 0071a25a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0071a260: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071a261: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0071a268: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0071a26b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0071a26e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0071a271: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0071a274: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0071a277: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0071a27a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0071a281: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0071a284: mov eax, dword ptr [ecx + 0x4c] */ r_eax = R32((u32)(r_ecx+0x4cu));
    /* 0071a287: mov dword ptr [ecx], 0xb3fa90 */ W32((u32)(r_ecx), 0xb3fa90u);
    /* 0071a28d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071a28f: je 0x71a2ca */ if (fZ) goto L_0071a2ca;
L_0071a291:; BB(0x0071a291);
    /* 0071a291: mov ecx, eax */ r_ecx = r_eax;
    /* 0071a293: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x71a298u); f_007127b0();
    /* 0071a298: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0071a29b: mov dword ptr [eax + 0x4c], 0 */ W32((u32)(r_eax+0x4cu), 0x0u);
    /* 0071a2a2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0071a2a4: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x71a2a9u); f_00791748();
    /* 0071a2a9: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0071a2af: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x71a2b4u); f_0068d5a8();
    /* 0071a2b4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0071a2b7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071a2b9: je 0x71a2c7 */ if (fZ) goto L_0071a2c7;
L_0071a2bb:; BB(0x0071a2bb);
    /* 0071a2bb: mov ecx, eax */ r_ecx = r_eax;
    /* 0071a2bd: call 0x693728 */ r_esp -= 4; W32(r_esp, 0x71a2c2u); f_00693728();
    /* 0071a2c2: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0071a2c5: jmp 0x71a2ca */ goto L_0071a2ca;
L_0071a2c7:; BB(0x0071a2c7);
    /* 0071a2c7: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
L_0071a2ca:; BB(0x0071a2ca);
    /* 0071a2ca: mov eax, dword ptr [ecx + 0x48] */ r_eax = R32((u32)(r_ecx+0x48u));
    /* 0071a2cd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071a2cf: je 0x71a301 */ if (fZ) goto L_0071a301;
L_0071a2d1:; BB(0x0071a2d1);
    /* 0071a2d1: mov ecx, eax */ r_ecx = r_eax;
    /* 0071a2d3: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x71a2d8u); f_007127b0();
    /* 0071a2d8: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0071a2de: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0071a2e1: mov dword ptr [eax + 0x48], 0 */ W32((u32)(r_eax+0x48u), 0x0u);
    /* 0071a2e8: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x71a2edu); f_0068d5a8();
    /* 0071a2ed: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071a2ee: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071a2f0: je 0x71a2fe */ if (fZ) goto L_0071a2fe;
L_0071a2f2:; BB(0x0071a2f2);
    /* 0071a2f2: mov ecx, eax */ r_ecx = r_eax;
    /* 0071a2f4: call 0x693728 */ r_esp -= 4; W32(r_esp, 0x71a2f9u); f_00693728();
    /* 0071a2f9: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0071a2fc: jmp 0x71a301 */ goto L_0071a301;
L_0071a2fe:; BB(0x0071a2fe);
    /* 0071a2fe: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
L_0071a301:; BB(0x0071a301);
    /* 0071a301: mov edx, dword ptr [ecx + 0x44] */ r_edx = R32((u32)(r_ecx+0x44u));
    /* 0071a304: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071a306: je 0x71a31f */ if (fZ) goto L_0071a31f;
L_0071a308:; BB(0x0071a308);
    /* 0071a308: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0071a30b: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0071a30f: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0071a314: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0071a318: mov dword ptr [ecx + 0x44], 0 */ W32((u32)(r_ecx+0x44u), 0x0u);
L_0071a31f:; BB(0x0071a31f);
    /* 0071a31f: mov eax, dword ptr [ecx + 0x40] */ r_eax = R32((u32)(r_ecx+0x40u));
    /* 0071a322: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071a324: je 0x71a337 */ if (fZ) goto L_0071a337;
L_0071a326:; BB(0x0071a326);
    /* 0071a326: mov ecx, eax */ r_ecx = r_eax;
    /* 0071a328: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x71a32du); f_007127b0();
    /* 0071a32d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0071a330: mov dword ptr [ecx + 0x40], 0 */ W32((u32)(r_ecx+0x40u), 0x0u);
L_0071a337:; BB(0x0071a337);
    /* 0071a337: mov eax, dword ptr [ecx + 0x38] */ r_eax = R32((u32)(r_ecx+0x38u));
    /* 0071a33a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071a33c: je 0x71a34f */ if (fZ) goto L_0071a34f;
L_0071a33e:; BB(0x0071a33e);
    /* 0071a33e: mov ecx, eax */ r_ecx = r_eax;
    /* 0071a340: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x71a345u); f_007127b0();
    /* 0071a345: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0071a348: mov dword ptr [ecx + 0x38], 0 */ W32((u32)(r_ecx+0x38u), 0x0u);
L_0071a34f:; BB(0x0071a34f);
    /* 0071a34f: mov eax, dword ptr [ecx + 0x3c] */ r_eax = R32((u32)(r_ecx+0x3cu));
    /* 0071a352: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071a354: je 0x71a367 */ if (fZ) goto L_0071a367;
L_0071a356:; BB(0x0071a356);
    /* 0071a356: mov ecx, eax */ r_ecx = r_eax;
    /* 0071a358: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x71a35du); f_007127b0();
    /* 0071a35d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0071a360: mov dword ptr [ecx + 0x3c], 0 */ W32((u32)(r_ecx+0x3cu), 0x0u);
L_0071a367:; BB(0x0071a367);
    /* 0071a367: mov eax, dword ptr [ecx + 0x34] */ r_eax = R32((u32)(r_ecx+0x34u));
    /* 0071a36a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071a36c: je 0x71a37f */ if (fZ) goto L_0071a37f;
L_0071a36e:; BB(0x0071a36e);
    /* 0071a36e: mov ecx, eax */ r_ecx = r_eax;
    /* 0071a370: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x71a375u); f_007127b0();
    /* 0071a375: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0071a378: mov dword ptr [ecx + 0x34], 0 */ W32((u32)(r_ecx+0x34u), 0x0u);
L_0071a37f:; BB(0x0071a37f);
    /* 0071a37f: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 0071a382: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071a384: je 0x71a397 */ if (fZ) goto L_0071a397;
L_0071a386:; BB(0x0071a386);
    /* 0071a386: mov ecx, eax */ r_ecx = r_eax;
    /* 0071a388: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x71a38du); f_007127b0();
    /* 0071a38d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0071a390: mov dword ptr [ecx + 0x30], 0 */ W32((u32)(r_ecx+0x30u), 0x0u);
L_0071a397:; BB(0x0071a397);
    /* 0071a397: mov edx, dword ptr [ecx + 0x2c] */ r_edx = R32((u32)(r_ecx+0x2cu));
    /* 0071a39a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071a39c: je 0x71a3b5 */ if (fZ) goto L_0071a3b5;
L_0071a39e:; BB(0x0071a39e);
    /* 0071a39e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0071a3a1: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0071a3a5: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0071a3aa: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0071a3ae: mov dword ptr [ecx + 0x2c], 0 */ W32((u32)(r_ecx+0x2cu), 0x0u);
L_0071a3b5:; BB(0x0071a3b5);
    /* 0071a3b5: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0071a3bc: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x71a3c1u); f_008171e8();
    /* 0071a3c1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0071a3c4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0071a3cb: mov esp, ebp */ r_esp = r_ebp;
    /* 0071a3cd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0071a3ce: ret  */ FN_RET(0x0071a250); r_esp += 4; return;
}

void f_0071a3d0(void) /* sub_71A3D0 */
{
    FN_ENTER(0x0071a3d0);
    /* 0071a3d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0071a3d1: mov ebp, esp */ r_ebp = r_esp;
    /* 0071a3d3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0071a3d5: push 0x8f0b8c */ { u32 v = 0x8f0b8cu; r_esp -= 4; W32(r_esp, v); }
    /* 0071a3da: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0071a3e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071a3e1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0071a3e8: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0071a3eb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0071a3ee: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0071a3f1: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0071a3f4: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0071a3f7: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0071a3fa: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0071a3fd: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0071a400: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0071a403: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x71a408u); f_008193cc();
    /* 0071a408: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0071a40f: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0071a412: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0071a415: mov dword ptr [ecx], 0xb3fa90 */ W32((u32)(r_ecx), 0xb3fa90u);
    /* 0071a41b: mov eax, dword ptr [0x9f2008] */ r_eax = R32((u32)(0x9f2008u));
    /* 0071a420: push 0xac */ { u32 v = 0xacu; r_esp -= 4; W32(r_esp, v); }
    /* 0071a425: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0071a428: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0071a42a: mov word ptr [ecx + 0x1c], bx */ W16((u32)(r_ecx+0x1cu), (u16)r_ebx);
    /* 0071a42e: mov dword ptr [ebp - 0x3c], ebx */ W32((u32)(r_ebp+0xffffffc4u), r_ebx);
    /* 0071a431: mov word ptr [ecx + 0x1e], bx */ W16((u32)(r_ecx+0x1eu), (u16)r_ebx);
    /* 0071a435: mov word ptr [ecx + 0x20], bx */ W16((u32)(r_ecx+0x20u), (u16)r_ebx);
    /* 0071a439: mov dword ptr [ecx + 0x24], edx */ W32((u32)(r_ecx+0x24u), r_edx);
    /* 0071a43c: mov dword ptr [ecx + 0x28], ebx */ W32((u32)(r_ecx+0x28u), r_ebx);
    /* 0071a43f: mov dword ptr [ecx + 0x2c], ebx */ W32((u32)(r_ecx+0x2cu), r_ebx);
    /* 0071a442: mov dword ptr [ecx + 0x30], ebx */ W32((u32)(r_ecx+0x30u), r_ebx);
    /* 0071a445: mov dword ptr [ecx + 0x34], ebx */ W32((u32)(r_ecx+0x34u), r_ebx);
    /* 0071a448: mov dword ptr [ecx + 0x38], ebx */ W32((u32)(r_ecx+0x38u), r_ebx);
    /* 0071a44b: mov dword ptr [ecx + 0x3c], ebx */ W32((u32)(r_ecx+0x3cu), r_ebx);
    /* 0071a44e: mov dword ptr [ecx + 0x40], ebx */ W32((u32)(r_ecx+0x40u), r_ebx);
    /* 0071a451: mov dword ptr [ecx + 0x44], ebx */ W32((u32)(r_ecx+0x44u), r_ebx);
    /* 0071a454: mov dword ptr [ecx + 0x48], ebx */ W32((u32)(r_ecx+0x48u), r_ebx);
    /* 0071a457: mov dword ptr [ecx + 0x4c], ebx */ W32((u32)(r_ecx+0x4cu), r_ebx);
    /* 0071a45a: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x71a45fu); f_005caba4();
    /* 0071a45f: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0071a462: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0071a465: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0071a468: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071a46a: je 0x71a5c6 */ if (fZ) goto L_0071a5c6;
L_0071a470:; BB(0x0071a470);
    /* 0071a470: mov dword ptr [ebp - 0x3c], 1 */ W32((u32)(r_ebp+0xffffffc4u), 0x1u);
    /* 0071a477: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0071a47e: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0071a481: push dword ptr [eax + 0x24] */ { u32 v = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 0071a484: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0071a487: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071a488: call 0x7338ac */ r_esp -= 4; W32(r_esp, 0x71a48du); f_007338ac();
    /* 0071a48d: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_0071a494:; BB(0x0071a494);
    /* 0071a494: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0071a497: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0071a49a: mov dword ptr [edx + 0x2c], eax */ W32((u32)(r_edx+0x2cu), r_eax);
    /* 0071a49d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0071a4a4: push 0x22 */ { u32 v = 0x22u; r_esp -= 4; W32(r_esp, v); }
    /* 0071a4a6: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x71a4abu); f_0073ec50();
    /* 0071a4ab: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0071a4ae: push dword ptr [edx + 0x24] */ { u32 v = R32((u32)(r_edx+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 0071a4b1: push 0x96ffd8 */ { u32 v = 0x96ffd8u; r_esp -= 4; W32(r_esp, v); }
    /* 0071a4b6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071a4b7: call 0x73b3a0 */ r_esp -= 4; W32(r_esp, 0x71a4bcu); f_0073b3a0();
    /* 0071a4bc: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0071a4bf: push dword ptr [edx + 0x24] */ { u32 v = R32((u32)(r_edx+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 0071a4c2: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 0071a4c5: call 0x7438f0 */ r_esp -= 4; W32(r_esp, 0x71a4cau); f_007438f0();
    /* 0071a4ca: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0071a4cd: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 0071a4d4: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 0071a4d7: movzx ecx, word ptr [eax + 8] */ r_ecx = (u32)R16((u32)(r_eax+0x8u));
    /* 0071a4db: push 0x7c */ { u32 v = 0x7cu; r_esp -= 4; W32(r_esp, v); }
    /* 0071a4dd: or ecx, 0xffff0004 */ {  u32 a = r_ecx; u32 b = 0xffff0004u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0071a4e3: mov word ptr [eax + 8], cx */ W16((u32)(r_eax+0x8u), (u16)r_ecx);
    /* 0071a4e7: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x71a4ecu); f_005caba4();
    /* 0071a4ec: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0071a4ef: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0071a4f2: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0071a4f5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071a4f7: je 0x71a5bc */ if (fZ) goto L_0071a5bc;
L_0071a4fd:; BB(0x0071a4fd);
    /* 0071a4fd: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 0071a504: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 0071a50b: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0071a50e: push dword ptr [eax + 0x24] */ { u32 v = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 0071a511: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0071a514: call 0x70f6bc */ r_esp -= 4; W32(r_esp, 0x71a519u); f_0070f6bc();
    /* 0071a519: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_0071a520:; BB(0x0071a520);
    /* 0071a520: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0071a523: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0071a526: mov dword ptr [edx + 0x38], eax */ W32((u32)(r_edx+0x38u), r_eax);
    /* 0071a529: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0071a530: mov edx, eax */ r_edx = r_eax;
    /* 0071a532: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0071a536: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 0071a53d: or eax, 0xffff0004 */ {  u32 a = r_eax; u32 b = 0xffff0004u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0071a542: push 0x68 */ { u32 v = 0x68u; r_esp -= 4; W32(r_esp, v); }
    /* 0071a544: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0071a548: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x71a54du); f_005caba4();
    /* 0071a54d: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0071a550: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0071a553: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0071a556: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071a558: je 0x71a5b5 */ if (fZ) goto L_0071a5b5;
L_0071a55a:; BB(0x0071a55a);
    /* 0071a55a: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 0071a561: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 0071a568: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0071a56b: push dword ptr [eax + 0x24] */ { u32 v = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 0071a56e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0071a571: call 0x7104bc */ r_esp -= 4; W32(r_esp, 0x71a576u); f_007104bc();
    /* 0071a576: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_0071a57d:; BB(0x0071a57d);
    /* 0071a57d: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0071a580: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0071a583: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0071a586: mov dword ptr [edx + 0x3c], eax */ W32((u32)(r_edx+0x3cu), r_eax);
    /* 0071a589: movzx ecx, word ptr [eax + 8] */ r_ecx = (u32)R16((u32)(r_eax+0x8u));
    /* 0071a58d: or ecx, 0xffff0004 */ {  u32 a = r_ecx; u32 b = 0xffff0004u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0071a593: mov word ptr [eax + 8], cx */ W16((u32)(r_eax+0x8u), (u16)r_ecx);
    /* 0071a597: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0071a59a: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071a59c: mov dword ptr [eax + 0x50], edi */ W32((u32)(r_eax+0x50u), r_edi);
    /* 0071a59f: mov dword ptr [eax + 0x54], edi */ W32((u32)(r_eax+0x54u), r_edi);
    /* 0071a5a2: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0071a5a5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0071a5a8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0071a5af: mov esp, ebp */ r_esp = r_ebp;
    /* 0071a5b1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0071a5b2: ret 8 */ FN_RET(0x0071a3d0); r_esp += 12; return;
L_0071a5b5:; BB(0x0071a5b5);
    /* 0071a5b5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0071a5b7: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0071a5ba: jmp 0x71a57d */ goto L_0071a57d;
L_0071a5bc:; BB(0x0071a5bc);
    /* 0071a5bc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0071a5be: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0071a5c1: jmp 0x71a520 */ goto L_0071a520;
L_0071a5c6:; BB(0x0071a5c6);
    /* 0071a5c6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0071a5c8: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0071a5cb: jmp 0x71a494 */ goto L_0071a494;
}

void f_0071a5d0(void) /* sub_71A5D0 */
{
    FN_ENTER(0x0071a5d0);
    /* 0071a5d0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0071a5d1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0071a5d3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0071a5d5: call 0x71a5e4 */ r_esp -= 4; W32(r_esp, 0x71a5dau); f_0071a5e4();
    /* 0071a5da: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0071a5dc: call 0x71a7e0 */ r_esp -= 4; W32(r_esp, 0x71a5e1u); f_0071a7e0();
    /* 0071a5e1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0071a5e2: ret  */ FN_RET(0x0071a5d0); r_esp += 4; return;
}

void f_0071a5e4(void) /* sub_71A5E4 */
{
    FN_ENTER(0x0071a5e4);
    /* 0071a5e4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0071a5e5: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0071a5e7: movsx eax, word ptr [ebp + 0x1e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x1eu));
    /* 0071a5eb: cmp eax, 0x12 */ {  u32 a = r_eax; u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071a5ee: je 0x71a65b */ if (fZ) goto L_0071a65b;
L_0071a5f0:; BB(0x0071a5f0);
    /* 0071a5f0: cmp eax, 0x26 */ {  u32 a = r_eax; u32 b = 0x26u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071a5f3: jne 0x71a638 */ if (!fZ) goto L_0071a638;
L_0071a5f5:; BB(0x0071a5f5);
    /* 0071a5f5: call 0x807d60 */ r_esp -= 4; W32(r_esp, 0x71a5fau); f_00807d60();
    /* 0071a5fa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071a5fc: je 0x71a632 */ if (fZ) goto L_0071a632;
L_0071a5fe:; BB(0x0071a5fe);
    /* 0071a5fe: mov edx, dword ptr [ebp + 0x38] */ r_edx = R32((u32)(r_ebp+0x38u));
    /* 0071a601: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071a603: je 0x71a612 */ if (fZ) goto L_0071a612;
L_0071a605:; BB(0x0071a605);
    /* 0071a605: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0071a609: and eax, 0xfffb */ {  u32 a = r_eax; u32 b = 0xfffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0071a60e: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_0071a612:; BB(0x0071a612);
    /* 0071a612: mov edx, dword ptr [ebp + 0x3c] */ r_edx = R32((u32)(r_ebp+0x3cu));
    /* 0071a615: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071a617: je 0x71a62c */ if (fZ) goto L_0071a62c;
L_0071a619:; BB(0x0071a619);
    /* 0071a619: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0071a61d: and eax, 0xfffb */ {  u32 a = r_eax; u32 b = 0xfffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0071a622: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0071a626: movsx eax, word ptr [ebp + 0x1e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x1eu));
    /* 0071a62a: jmp 0x71a673 */ goto L_0071a673;
L_0071a62c:; BB(0x0071a62c);
    /* 0071a62c: movsx eax, word ptr [ebp + 0x1e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x1eu));
    /* 0071a630: jmp 0x71a673 */ goto L_0071a673;
L_0071a632:; BB(0x0071a632);
    /* 0071a632: movsx eax, word ptr [ebp + 0x1e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x1eu));
    /* 0071a636: jmp 0x71a673 */ goto L_0071a673;
L_0071a638:; BB(0x0071a638);
    /* 0071a638: cmp eax, 0x1c */ {  u32 a = r_eax; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071a63b: jne 0x71a673 */ if (!fZ) goto L_0071a673;
L_0071a63d:; BB(0x0071a63d);
    /* 0071a63d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0071a63f: call 0x71a6d0 */ r_esp -= 4; W32(r_esp, 0x71a644u); f_0071a6d0();
    /* 0071a644: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071a646: je 0x71a655 */ if (fZ) goto L_0071a655;
L_0071a648:; BB(0x0071a648);
    /* 0071a648: mov eax, dword ptr [ebp + 0x4c] */ r_eax = R32((u32)(r_ebp+0x4cu));
    /* 0071a64b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071a64d: je 0x71a68b */ if (fZ) goto L_0071a68b;
L_0071a64f:; BB(0x0071a64f);
    /* 0071a64f: movsx eax, word ptr [ebp + 0x1e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x1eu));
    /* 0071a653: jmp 0x71a673 */ goto L_0071a673;
L_0071a655:; BB(0x0071a655);
    /* 0071a655: movsx eax, word ptr [ebp + 0x1e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x1eu));
    /* 0071a659: jmp 0x71a673 */ goto L_0071a673;
L_0071a65b:; BB(0x0071a65b);
    /* 0071a65b: mov edx, dword ptr [ebp + 0x34] */ r_edx = R32((u32)(r_ebp+0x34u));
    /* 0071a65e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071a660: je 0x71a673 */ if (fZ) goto L_0071a673;
L_0071a662:; BB(0x0071a662);
    /* 0071a662: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0071a666: and eax, 0xfffb */ {  u32 a = r_eax; u32 b = 0xfffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0071a66b: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0071a66f: movsx eax, word ptr [ebp + 0x1e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x1eu));
L_0071a673:; BB(0x0071a673);
    /* 0071a673: cmp eax, 0x7530 */ {  u32 a = r_eax; u32 b = 0x7530u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0071a678: jle 0x71a682 */ if ((fZ||fS!=fO)) goto L_0071a682;
L_0071a67a:; BB(0x0071a67a);
    /* 0071a67a: add eax, 0xffffd8f0 */ {  u32 a = r_eax; u32 b = 0xffffd8f0u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0071a67f: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
L_0071a682:; BB(0x0071a682);
    /* 0071a682: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0071a685: mov word ptr [ebp + 0x1e], ax */ W16((u32)(r_ebp+0x1eu), (u16)r_eax);
    /* 0071a689: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0071a68a: ret  */ FN_RET(0x0071a5e4); r_esp += 4; return;
L_0071a68b:; BB(0x0071a68b);
    /* 0071a68b: call 0x80a640 */ r_esp -= 4; W32(r_esp, 0x71a690u); f_0080a640();
    /* 0071a690: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071a692: je 0x71a6aa */ if (fZ) goto L_0071a6aa;
L_0071a694:; BB(0x0071a694);
    /* 0071a694: push dword ptr [ebp + 0x24] */ { u32 v = R32((u32)(r_ebp+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 0071a697: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0071a699: call 0x73d2f4 */ r_esp -= 4; W32(r_esp, 0x71a69eu); f_0073d2f4();
    /* 0071a69e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0071a6a1: mov dword ptr [ebp + 0x4c], eax */ W32((u32)(r_ebp+0x4cu), r_eax);
    /* 0071a6a4: movsx eax, word ptr [ebp + 0x1e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x1eu));
    /* 0071a6a8: jmp 0x71a673 */ goto L_0071a673;
L_0071a6aa:; BB(0x0071a6aa);
    /* 0071a6aa: call 0x807e10 */ r_esp -= 4; W32(r_esp, 0x71a6afu); f_00807e10();
    /* 0071a6af: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071a6b1: jne 0x71a6b9 */ if (!fZ) goto L_0071a6b9;
L_0071a6b3:; BB(0x0071a6b3);
    /* 0071a6b3: movsx eax, word ptr [ebp + 0x1e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x1eu));
    /* 0071a6b7: jmp 0x71a673 */ goto L_0071a673;
L_0071a6b9:; BB(0x0071a6b9);
    /* 0071a6b9: push dword ptr [ebp + 0x24] */ { u32 v = R32((u32)(r_ebp+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 0071a6bc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0071a6be: call 0x73d2f4 */ r_esp -= 4; W32(r_esp, 0x71a6c3u); f_0073d2f4();
    /* 0071a6c3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0071a6c6: mov dword ptr [ebp + 0x4c], eax */ W32((u32)(r_ebp+0x4cu), r_eax);
    /* 0071a6c9: movsx eax, word ptr [ebp + 0x1e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x1eu));
    /* 0071a6cd: jmp 0x71a673 */ goto L_0071a673;
}

void f_0071a6d0(void) /* sub_71A6D0 */
{
    FN_ENTER(0x0071a6d0);
    /* 0071a6d0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0071a6d1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0071a6d2: mov edi, ecx */ r_edi = r_ecx;
    /* 0071a6d4: call 0x80a640 */ r_esp -= 4; W32(r_esp, 0x71a6d9u); f_0080a640();
    /* 0071a6d9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071a6db: je 0x71a6e6 */ if (fZ) goto L_0071a6e6;
L_0071a6dd:; BB(0x0071a6dd);
    /* 0071a6dd: mov eax, dword ptr [0xaab280] */ r_eax = R32((u32)(0xaab280u));
    /* 0071a6e2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071a6e4: jne 0x71a6f4 */ if (!fZ) goto L_0071a6f4;
L_0071a6e6:; BB(0x0071a6e6);
    /* 0071a6e6: call 0x807e10 */ r_esp -= 4; W32(r_esp, 0x71a6ebu); f_00807e10();
    /* 0071a6eb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071a6ed: jne 0x71a6f4 */ if (!fZ) goto L_0071a6f4;
L_0071a6ef:; BB(0x0071a6ef);
    /* 0071a6ef: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071a6f1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0071a6f2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0071a6f3: ret  */ FN_RET(0x0071a6d0); r_esp += 4; return;
L_0071a6f4:; BB(0x0071a6f4);
    /* 0071a6f4: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0071a6fa: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x71a6ffu); f_0068d5a8();
    /* 0071a6ff: mov ebp, eax */ r_ebp = r_eax;
    /* 0071a701: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0071a704: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071a706: je 0x71a763 */ if (fZ) goto L_0071a763;
L_0071a708:; BB(0x0071a708);
    /* 0071a708: call 0x80a640 */ r_esp -= 4; W32(r_esp, 0x71a70du); f_0080a640();
    /* 0071a70d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071a70f: je 0x71a73f */ if (fZ) goto L_0071a73f;
L_0071a711:; BB(0x0071a711);
    /* 0071a711: mov edx, dword ptr [0xaab284] */ r_edx = R32((u32)(0xaab284u));
    /* 0071a717: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071a719: je 0x71a72c */ if (fZ) goto L_0071a72c;
L_0071a71b:; BB(0x0071a71b);
    /* 0071a71b: mov eax, dword ptr [edi + 0x50] */ r_eax = R32((u32)(r_edi+0x50u));
    /* 0071a71e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071a720: jne 0x71a731 */ if (!fZ) goto L_0071a731;
L_0071a722:; BB(0x0071a722);
    /* 0071a722: mov eax, dword ptr [edx + 0x1215c] */ r_eax = R32((u32)(r_edx+0x1215cu));
    /* 0071a728: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071a72a: je 0x71a731 */ if (fZ) goto L_0071a731;
L_0071a72c:; BB(0x0071a72c);
    /* 0071a72c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071a72e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0071a72f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0071a730: ret  */ FN_RET(0x0071a6d0); r_esp += 4; return;
L_0071a731:; BB(0x0071a731);
    /* 0071a731: mov eax, 1 */ r_eax = 0x1u;
    /* 0071a736: mov dword ptr [edi + 0x50], eax */ W32((u32)(r_edi+0x50u), r_eax);
    /* 0071a739: mov dword ptr [edx + 0x1215c], eax */ W32((u32)(r_edx+0x1215cu), r_eax);
L_0071a73f:; BB(0x0071a73f);
    /* 0071a73f: call 0x807e10 */ r_esp -= 4; W32(r_esp, 0x71a744u); f_00807e10();
    /* 0071a744: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071a746: je 0x71a776 */ if (fZ) goto L_0071a776;
L_0071a748:; BB(0x0071a748);
    /* 0071a748: mov edx, dword ptr [0xaab284] */ r_edx = R32((u32)(0xaab284u));
    /* 0071a74e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071a750: je 0x71a763 */ if (fZ) goto L_0071a763;
L_0071a752:; BB(0x0071a752);
    /* 0071a752: mov eax, dword ptr [edi + 0x54] */ r_eax = R32((u32)(r_edi+0x54u));
    /* 0071a755: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071a757: jne 0x71a768 */ if (!fZ) goto L_0071a768;
L_0071a759:; BB(0x0071a759);
    /* 0071a759: mov eax, dword ptr [edx + 0x12160] */ r_eax = R32((u32)(r_edx+0x12160u));
    /* 0071a75f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071a761: je 0x71a768 */ if (fZ) goto L_0071a768;
L_0071a763:; BB(0x0071a763);
    /* 0071a763: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071a765: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0071a766: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0071a767: ret  */ FN_RET(0x0071a6d0); r_esp += 4; return;
L_0071a768:; BB(0x0071a768);
    /* 0071a768: mov eax, 1 */ r_eax = 0x1u;
    /* 0071a76d: mov dword ptr [edi + 0x54], eax */ W32((u32)(r_edi+0x54u), r_eax);
    /* 0071a770: mov dword ptr [edx + 0x12160], eax */ W32((u32)(r_edx+0x12160u), r_eax);
L_0071a776:; BB(0x0071a776);
    /* 0071a776: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x71a77bu); f_006dc358();
    /* 0071a77b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0071a77d: jl 0x71a763 */ if ((fS!=fO)) goto L_0071a763;
L_0071a77f:; BB(0x0071a77f);
    /* 0071a77f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0071a782: jg 0x71a797 */ if ((!fZ&&fS==fO)) goto L_0071a797;
L_0071a784:; BB(0x0071a784);
    /* 0071a784: mov edx, dword ptr [ebp + 0xeb8] */ r_edx = R32((u32)(r_ebp+0xeb8u));
    /* 0071a78a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071a78c: mov eax, 0 */ r_eax = 0x0u;
    /* 0071a791: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0071a794: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0071a795: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0071a796: ret  */ FN_RET(0x0071a6d0); r_esp += 4; return;
L_0071a797:; BB(0x0071a797);
    /* 0071a797: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071a79a: jne 0x71a763 */ if (!fZ) goto L_0071a763;
L_0071a79c:; BB(0x0071a79c);
    /* 0071a79c: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0071a7a1: call 0x6c1bd4 */ r_esp -= 4; W32(r_esp, 0x71a7a6u); f_006c1bd4();
    /* 0071a7a6: mov ebp, eax */ r_ebp = r_eax;
    /* 0071a7a8: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0071a7ad: call 0x6c1bcc */ r_esp -= 4; W32(r_esp, 0x71a7b2u); f_006c1bcc();
    /* 0071a7b2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0071a7b5: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071a7b7: je 0x71a7db */ if (fZ) goto L_0071a7db;
L_0071a7b9:; BB(0x0071a7b9);
    /* 0071a7b9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071a7bb: je 0x71a7db */ if (fZ) goto L_0071a7db;
L_0071a7bd:; BB(0x0071a7bd);
    /* 0071a7bd: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0071a7c0: cmp edx, 0xd2f0 */ {  u32 a = r_edx; u32 b = 0xd2f0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0071a7c6: ja 0x71a7db */ if ((!fC&&!fZ)) goto L_0071a7db;
L_0071a7c8:; BB(0x0071a7c8);
    /* 0071a7c8: mov eax, dword ptr [eax + 0x364] */ r_eax = R32((u32)(r_eax+0x364u));
    /* 0071a7ce: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0071a7d1: jge 0x71a7db */ if ((fS==fO)) goto L_0071a7db;
L_0071a7d3:; BB(0x0071a7d3);
    /* 0071a7d3: mov eax, 1 */ r_eax = 0x1u;
    /* 0071a7d8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0071a7d9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0071a7da: ret  */ FN_RET(0x0071a6d0); r_esp += 4; return;
L_0071a7db:; BB(0x0071a7db);
    /* 0071a7db: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071a7dd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0071a7de: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0071a7df: ret  */ FN_RET(0x0071a6d0); r_esp += 4; return;
}

void f_0071a7e0(void) /* sub_71A7E0 */
{
    FN_ENTER(0x0071a7e0);
    /* 0071a7e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0071a7e1: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0071a7e3: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0071a7e5: call 0x71a838 */ r_esp -= 4; W32(r_esp, 0x71a7eau); f_0071a838();
    /* 0071a7ea: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0071a7ec: call 0x71a87c */ r_esp -= 4; W32(r_esp, 0x71a7f1u); f_0071a87c();
    /* 0071a7f1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0071a7f3: call 0x71a90c */ r_esp -= 4; W32(r_esp, 0x71a7f8u); f_0071a90c();
    /* 0071a7f8: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0071a7fa: call 0x71a99c */ r_esp -= 4; W32(r_esp, 0x71a7ffu); f_0071a99c();
    /* 0071a7ff: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0071a801: call 0x71aa6c */ r_esp -= 4; W32(r_esp, 0x71a806u); f_0071aa6c();
    /* 0071a806: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0071a808: call 0x71ae70 */ r_esp -= 4; W32(r_esp, 0x71a80du); f_0071ae70();
    /* 0071a80d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0071a80f: call 0x71aec0 */ r_esp -= 4; W32(r_esp, 0x71a814u); f_0071aec0();
    /* 0071a814: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0071a816: call 0x71b5c4 */ r_esp -= 4; W32(r_esp, 0x71a81bu); f_0071b5c4();
    /* 0071a81b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0071a81d: call 0x71a6d0 */ r_esp -= 4; W32(r_esp, 0x71a822u); f_0071a6d0();
    /* 0071a822: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071a824: je 0x71a82f */ if (fZ) goto L_0071a82f;
L_0071a826:; BB(0x0071a826);
    /* 0071a826: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0071a828: call 0x71b370 */ r_esp -= 4; W32(r_esp, 0x71a82du); f_0071b370();
    /* 0071a82d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0071a82e: ret  */ FN_RET(0x0071a7e0); r_esp += 4; return;
L_0071a82f:; BB(0x0071a82f);
    /* 0071a82f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0071a831: call 0x71b0d0 */ r_esp -= 4; W32(r_esp, 0x71a836u); f_0071b0d0();
    /* 0071a836: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0071a837: ret  */ FN_RET(0x0071a7e0); r_esp += 4; return;
}

void f_0071a838(void) /* sub_71A838 */
{
    FN_ENTER(0x0071a838);
    /* 0071a838: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0071a839: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0071a83b: mov eax, dword ptr [ebp + 0x34] */ r_eax = R32((u32)(r_ebp+0x34u));
    /* 0071a83e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071a840: je 0x71a877 */ if (fZ) goto L_0071a877;
L_0071a842:; BB(0x0071a842);
    /* 0071a842: movzx eax, word ptr [eax + 8] */ r_eax = (u32)R16((u32)(r_eax+0x8u));
    /* 0071a846: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071a848: je 0x71a84c */ if (fZ) goto L_0071a84c;
L_0071a84a:; BB(0x0071a84a);
    /* 0071a84a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0071a84b: ret  */ FN_RET(0x0071a838); r_esp += 4; return;
L_0071a84c:; BB(0x0071a84c);
    /* 0071a84c: push dword ptr [ebp + 0x24] */ { u32 v = R32((u32)(r_ebp+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 0071a84f: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x71a854u); f_0068d5a8();
    /* 0071a854: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071a855: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071a857: je 0x71a86f */ if (fZ) goto L_0071a86f;
L_0071a859:; BB(0x0071a859);
    /* 0071a859: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0071a85d: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0071a85f: jne 0x71a86f */ if (!fZ) goto L_0071a86f;
L_0071a861:; BB(0x0071a861);
    /* 0071a861: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0071a863: jne 0x71a86f */ if (!fZ) goto L_0071a86f;
L_0071a865:; BB(0x0071a865);
    /* 0071a865: mov ecx, dword ptr [ebp + 0x34] */ r_ecx = R32((u32)(r_ebp+0x34u));
    /* 0071a868: call 0x712714 */ r_esp -= 4; W32(r_esp, 0x71a86du); f_00712714();
    /* 0071a86d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0071a86e: ret  */ FN_RET(0x0071a838); r_esp += 4; return;
L_0071a86f:; BB(0x0071a86f);
    /* 0071a86f: mov ecx, dword ptr [ebp + 0x34] */ r_ecx = R32((u32)(r_ebp+0x34u));
    /* 0071a872: call 0x7127c8 */ r_esp -= 4; W32(r_esp, 0x71a877u); f_007127c8();
L_0071a877:; BB(0x0071a877);
    /* 0071a877: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0071a878: ret  */ FN_RET(0x0071a838); r_esp += 4; return;
}

void f_0071a87c(void) /* sub_71A87C */
{
    FN_ENTER(0x0071a87c);
    /* 0071a87c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0071a87d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0071a87e: mov edi, ecx */ r_edi = r_ecx;
    /* 0071a880: mov eax, dword ptr [edi + 0x38] */ r_eax = R32((u32)(r_edi+0x38u));
    /* 0071a883: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071a885: je 0x71a909 */ if (fZ) goto L_0071a909;
L_0071a88b:; BB(0x0071a88b);
    /* 0071a88b: movzx eax, word ptr [eax + 8] */ r_eax = (u32)R16((u32)(r_eax+0x8u));
    /* 0071a88f: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071a891: je 0x71a896 */ if (fZ) goto L_0071a896;
L_0071a893:; BB(0x0071a893);
    /* 0071a893: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0071a894: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0071a895: ret  */ FN_RET(0x0071a87c); r_esp += 4; return;
L_0071a896:; BB(0x0071a896);
    /* 0071a896: push dword ptr [edi + 0x24] */ { u32 v = R32((u32)(r_edi+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 0071a899: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x71a89eu); f_0068d5a8();
    /* 0071a89e: mov ebx, eax */ r_ebx = r_eax;
    /* 0071a8a0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0071a8a3: mov ecx, edi */ r_ecx = r_edi;
    /* 0071a8a5: call 0x71b354 */ r_esp -= 4; W32(r_esp, 0x71a8aau); f_0071b354();
    /* 0071a8aa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071a8ac: jne 0x71a8c4 */ if (!fZ) goto L_0071a8c4;
L_0071a8ae:; BB(0x0071a8ae);
    /* 0071a8ae: movzx edx, word ptr [edi + 0x1c] */ r_edx = (u32)R16((u32)(r_edi+0x1cu));
    /* 0071a8b2: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0071a8b5: jne 0x71a8c4 */ if (!fZ) goto L_0071a8c4;
L_0071a8b7:; BB(0x0071a8b7);
    /* 0071a8b7: test dl, 8 */ {  u32 a = (u8)r_edx; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0071a8ba: jne 0x71a8c4 */ if (!fZ) goto L_0071a8c4;
L_0071a8bc:; BB(0x0071a8bc);
    /* 0071a8bc: test edx, 0x200 */ {  u32 a = r_edx; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071a8c2: je 0x71a8ce */ if (fZ) goto L_0071a8ce;
L_0071a8c4:; BB(0x0071a8c4);
    /* 0071a8c4: mov ecx, dword ptr [edi + 0x38] */ r_ecx = R32((u32)(r_edi+0x38u));
    /* 0071a8c7: call 0x7127c8 */ r_esp -= 4; W32(r_esp, 0x71a8ccu); f_007127c8();
    /* 0071a8cc: jmp 0x71a8da */ goto L_0071a8da;
L_0071a8ce:; BB(0x0071a8ce);
    /* 0071a8ce: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071a8d0: je 0x71a8c4 */ if (fZ) goto L_0071a8c4;
L_0071a8d2:; BB(0x0071a8d2);
    /* 0071a8d2: mov ecx, dword ptr [edi + 0x38] */ r_ecx = R32((u32)(r_edi+0x38u));
    /* 0071a8d5: call 0x712714 */ r_esp -= 4; W32(r_esp, 0x71a8dau); f_00712714();
L_0071a8da:; BB(0x0071a8da);
    /* 0071a8da: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 0071a8de: test eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071a8e3: je 0x71a8ff */ if (fZ) goto L_0071a8ff;
L_0071a8e5:; BB(0x0071a8e5);
    /* 0071a8e5: push dword ptr [edi + 0x24] */ { u32 v = R32((u32)(r_edi+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 0071a8e8: call 0x718e88 */ r_esp -= 4; W32(r_esp, 0x71a8edu); f_00718e88();
    /* 0071a8ed: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071a8ee: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071a8f0: je 0x71a8ff */ if (fZ) goto L_0071a8ff;
L_0071a8f2:; BB(0x0071a8f2);
    /* 0071a8f2: mov eax, dword ptr [edi + 0x38] */ r_eax = R32((u32)(r_edi+0x38u));
    /* 0071a8f5: mov dword ptr [eax + 0x34], 0x43860000 */ W32((u32)(r_eax+0x34u), 0x43860000u);
    /* 0071a8fc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0071a8fd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0071a8fe: ret  */ FN_RET(0x0071a87c); r_esp += 4; return;
L_0071a8ff:; BB(0x0071a8ff);
    /* 0071a8ff: mov eax, dword ptr [edi + 0x38] */ r_eax = R32((u32)(r_edi+0x38u));
    /* 0071a902: mov dword ptr [eax + 0x34], 0x43b80000 */ W32((u32)(r_eax+0x34u), 0x43b80000u);
L_0071a909:; BB(0x0071a909);
    /* 0071a909: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0071a90a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0071a90b: ret  */ FN_RET(0x0071a87c); r_esp += 4; return;
}

void f_0071a90c(void) /* sub_71A90C */
{
    FN_ENTER(0x0071a90c);
    /* 0071a90c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0071a90d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0071a90e: mov edi, ecx */ r_edi = r_ecx;
    /* 0071a910: mov eax, dword ptr [edi + 0x3c] */ r_eax = R32((u32)(r_edi+0x3cu));
    /* 0071a913: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071a915: je 0x71a999 */ if (fZ) goto L_0071a999;
L_0071a91b:; BB(0x0071a91b);
    /* 0071a91b: movzx eax, word ptr [eax + 8] */ r_eax = (u32)R16((u32)(r_eax+0x8u));
    /* 0071a91f: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071a921: je 0x71a926 */ if (fZ) goto L_0071a926;
L_0071a923:; BB(0x0071a923);
    /* 0071a923: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0071a924: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0071a925: ret  */ FN_RET(0x0071a90c); r_esp += 4; return;
L_0071a926:; BB(0x0071a926);
    /* 0071a926: push dword ptr [edi + 0x24] */ { u32 v = R32((u32)(r_edi+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 0071a929: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x71a92eu); f_0068d5a8();
    /* 0071a92e: mov ebx, eax */ r_ebx = r_eax;
    /* 0071a930: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0071a933: mov ecx, edi */ r_ecx = r_edi;
    /* 0071a935: call 0x71b354 */ r_esp -= 4; W32(r_esp, 0x71a93au); f_0071b354();
    /* 0071a93a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071a93c: jne 0x71a954 */ if (!fZ) goto L_0071a954;
L_0071a93e:; BB(0x0071a93e);
    /* 0071a93e: movzx edx, word ptr [edi + 0x1c] */ r_edx = (u32)R16((u32)(r_edi+0x1cu));
    /* 0071a942: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0071a945: jne 0x71a954 */ if (!fZ) goto L_0071a954;
L_0071a947:; BB(0x0071a947);
    /* 0071a947: test dl, 8 */ {  u32 a = (u8)r_edx; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0071a94a: jne 0x71a954 */ if (!fZ) goto L_0071a954;
L_0071a94c:; BB(0x0071a94c);
    /* 0071a94c: test edx, 0x200 */ {  u32 a = r_edx; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071a952: je 0x71a95e */ if (fZ) goto L_0071a95e;
L_0071a954:; BB(0x0071a954);
    /* 0071a954: mov ecx, dword ptr [edi + 0x3c] */ r_ecx = R32((u32)(r_edi+0x3cu));
    /* 0071a957: call 0x7127c8 */ r_esp -= 4; W32(r_esp, 0x71a95cu); f_007127c8();
    /* 0071a95c: jmp 0x71a96a */ goto L_0071a96a;
L_0071a95e:; BB(0x0071a95e);
    /* 0071a95e: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071a960: je 0x71a954 */ if (fZ) goto L_0071a954;
L_0071a962:; BB(0x0071a962);
    /* 0071a962: mov ecx, dword ptr [edi + 0x3c] */ r_ecx = R32((u32)(r_edi+0x3cu));
    /* 0071a965: call 0x712714 */ r_esp -= 4; W32(r_esp, 0x71a96au); f_00712714();
L_0071a96a:; BB(0x0071a96a);
    /* 0071a96a: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 0071a96e: test eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071a973: je 0x71a98f */ if (fZ) goto L_0071a98f;
L_0071a975:; BB(0x0071a975);
    /* 0071a975: push dword ptr [edi + 0x24] */ { u32 v = R32((u32)(r_edi+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 0071a978: call 0x718e88 */ r_esp -= 4; W32(r_esp, 0x71a97du); f_00718e88();
    /* 0071a97d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071a97e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071a980: je 0x71a98f */ if (fZ) goto L_0071a98f;
L_0071a982:; BB(0x0071a982);
    /* 0071a982: mov eax, dword ptr [edi + 0x3c] */ r_eax = R32((u32)(r_edi+0x3cu));
    /* 0071a985: mov dword ptr [eax + 0x34], 0x43ab0000 */ W32((u32)(r_eax+0x34u), 0x43ab0000u);
    /* 0071a98c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0071a98d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0071a98e: ret  */ FN_RET(0x0071a90c); r_esp += 4; return;
L_0071a98f:; BB(0x0071a98f);
    /* 0071a98f: mov eax, dword ptr [edi + 0x3c] */ r_eax = R32((u32)(r_edi+0x3cu));
    /* 0071a992: mov dword ptr [eax + 0x34], 0x43dd0000 */ W32((u32)(r_eax+0x34u), 0x43dd0000u);
L_0071a999:; BB(0x0071a999);
    /* 0071a999: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0071a99a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0071a99b: ret  */ FN_RET(0x0071a90c); r_esp += 4; return;
}

void f_0071a99c(void) /* sub_71A99C */
{
    FN_ENTER(0x0071a99c);
    /* 0071a99c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0071a99d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0071a99e: mov edi, ecx */ r_edi = r_ecx;
    /* 0071a9a0: mov ecx, dword ptr [edi + 0x40] */ r_ecx = R32((u32)(r_edi+0x40u));
    /* 0071a9a3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071a9a5: je 0x71a9c3 */ if (fZ) goto L_0071a9c3;
L_0071a9a7:; BB(0x0071a9a7);
    /* 0071a9a7: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x71a9acu); f_008173b4();
    /* 0071a9ac: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071a9ae: je 0x71a9bc */ if (fZ) goto L_0071a9bc;
L_0071a9b0:; BB(0x0071a9b0);
    /* 0071a9b0: mov ecx, dword ptr [edi + 0x40] */ r_ecx = R32((u32)(r_edi+0x40u));
    /* 0071a9b3: call 0x712480 */ r_esp -= 4; W32(r_esp, 0x71a9b8u); f_00712480();
    /* 0071a9b8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071a9ba: jne 0x71a9c3 */ if (!fZ) goto L_0071a9c3;
L_0071a9bc:; BB(0x0071a9bc);
    /* 0071a9bc: mov dword ptr [edi + 0x40], 0 */ W32((u32)(r_edi+0x40u), 0x0u);
L_0071a9c3:; BB(0x0071a9c3);
    /* 0071a9c3: movzx ebp, word ptr [edi + 0x1c] */ r_ebp = (u32)R16((u32)(r_edi+0x1cu));
    /* 0071a9c7: test ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071a9cd: jne 0x71a9e9 */ if (!fZ) goto L_0071a9e9;
L_0071a9cf:; BB(0x0071a9cf);
    /* 0071a9cf: mov ecx, edi */ r_ecx = r_edi;
    /* 0071a9d1: call 0x71b354 */ r_esp -= 4; W32(r_esp, 0x71a9d6u); f_0071b354();
    /* 0071a9d6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071a9d8: jne 0x71a9e9 */ if (!fZ) goto L_0071a9e9;
L_0071a9da:; BB(0x0071a9da);
    /* 0071a9da: test ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071a9e0: jne 0x71a9e9 */ if (!fZ) goto L_0071a9e9;
L_0071a9e2:; BB(0x0071a9e2);
    /* 0071a9e2: mov eax, dword ptr [edi + 0x44] */ r_eax = R32((u32)(r_edi+0x44u));
    /* 0071a9e5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071a9e7: je 0x71a9ff */ if (fZ) goto L_0071a9ff;
L_0071a9e9:; BB(0x0071a9e9);
    /* 0071a9e9: mov ecx, dword ptr [edi + 0x40] */ r_ecx = R32((u32)(r_edi+0x40u));
    /* 0071a9ec: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071a9ee: je 0x71a9fc */ if (fZ) goto L_0071a9fc;
L_0071a9f0:; BB(0x0071a9f0);
    /* 0071a9f0: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x71a9f5u); f_007127b0();
    /* 0071a9f5: mov dword ptr [edi + 0x40], 0 */ W32((u32)(r_edi+0x40u), 0x0u);
L_0071a9fc:; BB(0x0071a9fc);
    /* 0071a9fc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0071a9fd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0071a9fe: ret  */ FN_RET(0x0071a99c); r_esp += 4; return;
L_0071a9ff:; BB(0x0071a9ff);
    /* 0071a9ff: call 0x7183fc */ r_esp -= 4; W32(r_esp, 0x71aa04u); f_007183fc();
    /* 0071aa04: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071aa06: jne 0x71a9e9 */ if (!fZ) goto L_0071a9e9;
L_0071aa08:; BB(0x0071aa08);
    /* 0071aa08: movzx eax, word ptr [edi + 0x24] */ r_eax = (u32)R16((u32)(r_edi+0x24u));
    /* 0071aa0c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071aa0d: call 0x694754 */ r_esp -= 4; W32(r_esp, 0x71aa12u); f_00694754();
    /* 0071aa12: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071aa13: movzx edx, ax */ r_edx = (u32)(u16)r_eax;
    /* 0071aa16: cmp edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071aa1c: je 0x71aa66 */ if (fZ) goto L_0071aa66;
L_0071aa1e:; BB(0x0071aa1e);
    /* 0071aa1e: mov ecx, dword ptr [edi + 0x40] */ r_ecx = R32((u32)(r_edi+0x40u));
    /* 0071aa21: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071aa23: je 0x71aa55 */ if (fZ) goto L_0071aa55;
L_0071aa25:; BB(0x0071aa25);
    /* 0071aa25: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071aa26: call 0x731d68 */ r_esp -= 4; W32(r_esp, 0x71aa2bu); f_00731d68();
    /* 0071aa2b: mov eax, dword ptr [edi + 0x40] */ r_eax = R32((u32)(r_edi+0x40u));
L_0071aa2e:; BB(0x0071aa2e);
    /* 0071aa2e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071aa30: je 0x71aa52 */ if (fZ) goto L_0071aa52;
L_0071aa32:; BB(0x0071aa32);
    /* 0071aa32: push dword ptr [edi + 0x24] */ { u32 v = R32((u32)(r_edi+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 0071aa35: call 0x718e88 */ r_esp -= 4; W32(r_esp, 0x71aa3au); f_00718e88();
    /* 0071aa3a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071aa3b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071aa3d: je 0x71aa4a */ if (fZ) goto L_0071aa4a;
L_0071aa3f:; BB(0x0071aa3f);
    /* 0071aa3f: mov ecx, dword ptr [edi + 0x40] */ r_ecx = R32((u32)(r_edi+0x40u));
    /* 0071aa42: call 0x731a68 */ r_esp -= 4; W32(r_esp, 0x71aa47u); f_00731a68();
    /* 0071aa47: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0071aa48: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0071aa49: ret  */ FN_RET(0x0071a99c); r_esp += 4; return;
L_0071aa4a:; BB(0x0071aa4a);
    /* 0071aa4a: mov ecx, dword ptr [edi + 0x40] */ r_ecx = R32((u32)(r_edi+0x40u));
    /* 0071aa4d: call 0x731b50 */ r_esp -= 4; W32(r_esp, 0x71aa52u); f_00731b50();
L_0071aa52:; BB(0x0071aa52);
    /* 0071aa52: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0071aa53: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0071aa54: ret  */ FN_RET(0x0071a99c); r_esp += 4; return;
L_0071aa55:; BB(0x0071aa55);
    /* 0071aa55: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071aa56: push dword ptr [edi + 0x24] */ { u32 v = R32((u32)(r_edi+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 0071aa59: call 0x731bec */ r_esp -= 4; W32(r_esp, 0x71aa5eu); f_00731bec();
    /* 0071aa5e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0071aa61: mov dword ptr [edi + 0x40], eax */ W32((u32)(r_edi+0x40u), r_eax);
    /* 0071aa64: jmp 0x71aa2e */ goto L_0071aa2e;
L_0071aa66:; BB(0x0071aa66);
    /* 0071aa66: mov eax, dword ptr [edi + 0x40] */ r_eax = R32((u32)(r_edi+0x40u));
    /* 0071aa69: jmp 0x71aa2e */ goto L_0071aa2e;
}

void f_0071aa6c(void) /* sub_71AA6C */
{
    FN_ENTER(0x0071aa6c);
    /* 0071aa6c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0071aa6d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0071aa6e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0071aa6f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0071aa70: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0071aa72: mov eax, dword ptr [ebx + 0x2c] */ r_eax = R32((u32)(r_ebx+0x2cu));
    /* 0071aa75: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071aa77: je 0x71ab40 */ if (fZ) goto L_0071ab40;
L_0071aa7d:; BB(0x0071aa7d);
    /* 0071aa7d: push dword ptr [ebx + 0x24] */ { u32 v = R32((u32)(r_ebx+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 0071aa80: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x71aa85u); f_0068d5a8();
    /* 0071aa85: mov edi, eax */ r_edi = r_eax;
    /* 0071aa87: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0071aa8a: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071aa8c: je 0x71ab40 */ if (fZ) goto L_0071ab40;
L_0071aa92:; BB(0x0071aa92);
    /* 0071aa92: mov edx, dword ptr [edi + 0xdf0] */ r_edx = R32((u32)(r_edi+0xdf0u));
    /* 0071aa98: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071aa9a: jne 0x71ab40 */ if (!fZ) goto L_0071ab40;
L_0071aaa0:; BB(0x0071aaa0);
    /* 0071aaa0: movzx edx, word ptr [ebx + 0x1c] */ r_edx = (u32)R16((u32)(r_ebx+0x1cu));
    /* 0071aaa4: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0071aaa7: jne 0x71aaae */ if (!fZ) goto L_0071aaae;
L_0071aaa9:; BB(0x0071aaa9);
    /* 0071aaa9: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0071aaac: je 0x71aabb */ if (fZ) goto L_0071aabb;
L_0071aaae:; BB(0x0071aaae);
    /* 0071aaae: mov ecx, dword ptr [ebx + 0x2c] */ r_ecx = R32((u32)(r_ebx+0x2cu));
    /* 0071aab1: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0071aab3: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x71aab6u); call_ind(t); }
    /* 0071aab6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0071aab7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0071aab8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0071aab9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0071aaba: ret  */ FN_RET(0x0071aa6c); r_esp += 4; return;
L_0071aabb:; BB(0x0071aabb);
    /* 0071aabb: push dword ptr [ebx + 0x24] */ { u32 v = R32((u32)(r_ebx+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 0071aabe: call 0x719140 */ r_esp -= 4; W32(r_esp, 0x71aac3u); f_00719140();
    /* 0071aac3: mov ebp, eax */ r_ebp = r_eax;
    /* 0071aac5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0071aac8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0071aaca: call 0x71ac24 */ r_esp -= 4; W32(r_esp, 0x71aacfu); f_0071ac24();
    /* 0071aacf: mov esi, eax */ r_esi = r_eax;
    /* 0071aad1: mov edx, dword ptr [0xa0f698] */ r_edx = R32((u32)(0xa0f698u));
    /* 0071aad7: or edx, dword ptr [0xa0f68c] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa0f68cu)); u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0071aadd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0071aade: lea ebp, [ebp + ebp*4] */ r_ebp = (u32)(r_ebp+r_ebp*4);
    /* 0071aae2: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0071aae4: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0071aae6: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0071aae8: lea ebp, [ebp + ebp + 0xaae75c] */ r_ebp = (u32)(r_ebp+r_ebp+0xaae75cu);
    /* 0071aaef: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0071aaf1: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x71aaf6u); f_007c1160();
    /* 0071aaf6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071aaf8: jne 0x71ab02 */ if (!fZ) goto L_0071ab02;
L_0071aafa:; BB(0x0071aafa);
    /* 0071aafa: movsx edx, si */ r_edx = (u32)(i32)(i16)(u16)r_esi;
    /* 0071aafd: cmp edx, 0x30 */ {  u32 a = r_edx; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0071ab00: je 0x71ab40 */ if (fZ) goto L_0071ab40;
L_0071ab02:; BB(0x0071ab02);
    /* 0071ab02: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0071ab04: call 0x71b354 */ r_esp -= 4; W32(r_esp, 0x71ab09u); f_0071b354();
    /* 0071ab09: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071ab0b: jne 0x71ab45 */ if (!fZ) goto L_0071ab45;
L_0071ab0d:; BB(0x0071ab0d);
    /* 0071ab0d: mov edx, dword ptr [ebx + 0x44] */ r_edx = R32((u32)(r_ebx+0x44u));
    /* 0071ab10: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071ab12: je 0x71abbf */ if (fZ) goto L_0071abbf;
L_0071ab18:; BB(0x0071ab18);
    /* 0071ab18: push dword ptr [0xa0f68c] */ { u32 v = R32((u32)(0xa0f68cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0071ab1e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0071ab20: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x71ab25u); f_007c1160();
    /* 0071ab25: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071ab27: je 0x71ab40 */ if (fZ) goto L_0071ab40;
L_0071ab29:; BB(0x0071ab29);
    /* 0071ab29: mov edx, dword ptr [ebx + 0x44] */ r_edx = R32((u32)(r_ebx+0x44u));
    /* 0071ab2c: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0071ab30: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071ab35: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0071ab39: mov dword ptr [ebx + 0x44], 0 */ W32((u32)(r_ebx+0x44u), 0x0u);
L_0071ab40:; BB(0x0071ab40);
    /* 0071ab40: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0071ab41: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0071ab42: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0071ab43: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0071ab44: ret  */ FN_RET(0x0071aa6c); r_esp += 4; return;
L_0071ab45:; BB(0x0071ab45);
    /* 0071ab45: movzx eax, word ptr [ebx + 0x1c] */ r_eax = (u32)R16((u32)(r_ebx+0x1cu));
    /* 0071ab49: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071ab4b: jne 0x71abba */ if (!fZ) goto L_0071abba;
L_0071ab4d:; BB(0x0071ab4d);
    /* 0071ab4d: push 0x2000000 */ { u32 v = 0x2000000u; r_esp -= 4; W32(r_esp, v); }
    /* 0071ab52: push dword ptr [ebx + 0x24] */ { u32 v = R32((u32)(r_ebx+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 0071ab55: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0071ab57: call 0x7be19c */ r_esp -= 4; W32(r_esp, 0x71ab5cu); f_007be19c();
    /* 0071ab5c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0071ab5f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071ab61: je 0x71ab82 */ if (fZ) goto L_0071ab82;
L_0071ab63:; BB(0x0071ab63);
    /* 0071ab63: call 0x7c00c4 */ r_esp -= 4; W32(r_esp, 0x71ab68u); f_007c00c4();
    /* 0071ab68: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071ab6a: je 0x71ab96 */ if (fZ) goto L_0071ab96;
L_0071ab6c:; BB(0x0071ab6c);
    /* 0071ab6c: movzx eax, byte ptr [ebx + 0x28] */ r_eax = (u32)R8((u32)(r_ebx+0x28u));
    /* 0071ab70: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071ab71: call 0x7bfff8 */ r_esp -= 4; W32(r_esp, 0x71ab76u); f_007bfff8();
    /* 0071ab76: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071ab77: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071ab79: je 0x71ab96 */ if (fZ) goto L_0071ab96;
L_0071ab7b:; BB(0x0071ab7b);
    /* 0071ab7b: mov esi, 1 */ r_esi = 0x1u;
    /* 0071ab80: jmp 0x71ab96 */ goto L_0071ab96;
L_0071ab82:; BB(0x0071ab82);
    /* 0071ab82: movzx eax, byte ptr [ebx + 0x28] */ r_eax = (u32)R8((u32)(r_ebx+0x28u));
    /* 0071ab86: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071ab87: call 0x7bfe60 */ r_esp -= 4; W32(r_esp, 0x71ab8cu); f_007bfe60();
    /* 0071ab8c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071ab8d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071ab8f: je 0x71ab96 */ if (fZ) goto L_0071ab96;
L_0071ab91:; BB(0x0071ab91);
    /* 0071ab91: mov esi, 1 */ r_esi = 0x1u;
L_0071ab96:; BB(0x0071ab96);
    /* 0071ab96: push dword ptr [0xa0f68c] */ { u32 v = R32((u32)(0xa0f68cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0071ab9c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0071ab9e: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x71aba3u); f_007c1160();
    /* 0071aba3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071aba5: jne 0x71abab */ if (!fZ) goto L_0071abab;
L_0071aba7:; BB(0x0071aba7);
    /* 0071aba7: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071aba9: je 0x71abba */ if (fZ) goto L_0071abba;
L_0071abab:; BB(0x0071abab);
    /* 0071abab: mov ecx, dword ptr [ebx + 0x2c] */ r_ecx = R32((u32)(r_ebx+0x2cu));
    /* 0071abae: mov dword ptr [ebx + 0x28], 0 */ W32((u32)(r_ebx+0x28u), 0x0u);
    /* 0071abb5: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0071abb7: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x71abbau); call_ind(t); }
L_0071abba:; BB(0x0071abba);
    /* 0071abba: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0071abbb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0071abbc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0071abbd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0071abbe: ret  */ FN_RET(0x0071aa6c); r_esp += 4; return;
L_0071abbf:; BB(0x0071abbf);
    /* 0071abbf: call 0x718418 */ r_esp -= 4; W32(r_esp, 0x71abc4u); f_00718418();
    /* 0071abc4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071abc6: je 0x71abe7 */ if (fZ) goto L_0071abe7;
L_0071abc8:; BB(0x0071abc8);
    /* 0071abc8: push dword ptr [0xa0f68c] */ { u32 v = R32((u32)(0xa0f68cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0071abce: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0071abd0: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x71abd5u); f_007c1160();
    /* 0071abd5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071abd7: je 0x71ab40 */ if (fZ) goto L_0071ab40;
L_0071abdd:; BB(0x0071abdd);
    /* 0071abdd: call 0x718460 */ r_esp -= 4; W32(r_esp, 0x71abe2u); f_00718460();
    /* 0071abe2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0071abe3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0071abe4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0071abe5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0071abe6: ret  */ FN_RET(0x0071aa6c); r_esp += 4; return;
L_0071abe7:; BB(0x0071abe7);
    /* 0071abe7: mov edx, dword ptr [edi + 0x33c] */ r_edx = R32((u32)(r_edi+0x33cu));
    /* 0071abed: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071abf0: jne 0x71ab40 */ if (!fZ) goto L_0071ab40;
L_0071abf6:; BB(0x0071abf6);
    /* 0071abf6: movsx edx, si */ r_edx = (u32)(i32)(i16)(u16)r_esi;
    /* 0071abf9: cmp edx, 0x30 */ {  u32 a = r_edx; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071abfc: je 0x71ac14 */ if (fZ) goto L_0071ac14;
L_0071abfe:; BB(0x0071abfe);
    /* 0071abfe: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0071abff: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0071ac01: call 0x71ad88 */ r_esp -= 4; W32(r_esp, 0x71ac06u); f_0071ad88();
    /* 0071ac06: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0071ac07: mov ecx, dword ptr [ebx + 0x2c] */ r_ecx = R32((u32)(r_ebx+0x2cu));
    /* 0071ac0a: call 0x733714 */ r_esp -= 4; W32(r_esp, 0x71ac0fu); f_00733714();
    /* 0071ac0f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0071ac10: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0071ac11: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0071ac12: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0071ac13: ret  */ FN_RET(0x0071aa6c); r_esp += 4; return;
L_0071ac14:; BB(0x0071ac14);
    /* 0071ac14: mov ecx, dword ptr [ebx + 0x2c] */ r_ecx = R32((u32)(r_ebx+0x2cu));
    /* 0071ac17: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0071ac19: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x71ac1cu); call_ind(t); }
    /* 0071ac1c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0071ac1d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0071ac1e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0071ac1f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0071ac20: ret  */ FN_RET(0x0071aa6c); r_esp += 4; return;
}

void f_0071ac24(void) /* sub_71AC24 */
{
    FN_ENTER(0x0071ac24);
    /* 0071ac24: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0071ac25: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0071ac26: mov edi, ecx */ r_edi = r_ecx;
    /* 0071ac28: call 0x791b48 */ r_esp -= 4; W32(r_esp, 0x71ac2du); f_00791b48();
    /* 0071ac2d: mov esi, eax */ r_esi = r_eax;
    /* 0071ac2f: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071ac31: je 0x71ace7 */ if (fZ) goto L_0071ace7;
L_0071ac37:; BB(0x0071ac37);
    /* 0071ac37: call 0x7c00dc */ r_esp -= 4; W32(r_esp, 0x71ac3cu); f_007c00dc();
    /* 0071ac3c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071ac3e: je 0x71ac48 */ if (fZ) goto L_0071ac48;
L_0071ac40:; BB(0x0071ac40);
    /* 0071ac40: mov eax, 0x30 */ r_eax = 0x30u;
    /* 0071ac45: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0071ac46: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0071ac47: ret  */ FN_RET(0x0071ac24); r_esp += 4; return;
L_0071ac48:; BB(0x0071ac48);
    /* 0071ac48: call 0x7c00d0 */ r_esp -= 4; W32(r_esp, 0x71ac4du); f_007c00d0();
    /* 0071ac4d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071ac4f: je 0x71ac59 */ if (fZ) goto L_0071ac59;
L_0071ac51:; BB(0x0071ac51);
    /* 0071ac51: mov eax, 0x30 */ r_eax = 0x30u;
    /* 0071ac56: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0071ac57: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0071ac58: ret  */ FN_RET(0x0071ac24); r_esp += 4; return;
L_0071ac59:; BB(0x0071ac59);
    /* 0071ac59: push 0x2000000 */ { u32 v = 0x2000000u; r_esp -= 4; W32(r_esp, v); }
    /* 0071ac5e: push dword ptr [edi + 0x24] */ { u32 v = R32((u32)(r_edi+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 0071ac61: call 0x7be19c */ r_esp -= 4; W32(r_esp, 0x71ac66u); f_007be19c();
    /* 0071ac66: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0071ac69: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071ac6b: jne 0x71ac7e */ if (!fZ) goto L_0071ac7e;
L_0071ac6d:; BB(0x0071ac6d);
    /* 0071ac6d: call 0x7c00c4 */ r_esp -= 4; W32(r_esp, 0x71ac72u); f_007c00c4();
    /* 0071ac72: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071ac74: je 0x71ac8f */ if (fZ) goto L_0071ac8f;
L_0071ac76:; BB(0x0071ac76);
    /* 0071ac76: mov eax, 0x30 */ r_eax = 0x30u;
    /* 0071ac7b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0071ac7c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0071ac7d: ret  */ FN_RET(0x0071ac24); r_esp += 4; return;
L_0071ac7e:; BB(0x0071ac7e);
    /* 0071ac7e: call 0x7c00c4 */ r_esp -= 4; W32(r_esp, 0x71ac83u); f_007c00c4();
    /* 0071ac83: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071ac85: jne 0x71ac8f */ if (!fZ) goto L_0071ac8f;
L_0071ac87:; BB(0x0071ac87);
    /* 0071ac87: mov eax, 0x30 */ r_eax = 0x30u;
    /* 0071ac8c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0071ac8d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0071ac8e: ret  */ FN_RET(0x0071ac24); r_esp += 4; return;
L_0071ac8f:; BB(0x0071ac8f);
    /* 0071ac8f: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0071ac91: mov ecx, esi */ r_ecx = r_esi;
    /* 0071ac93: call 0x78fd68 */ r_esp -= 4; W32(r_esp, 0x71ac98u); f_0078fd68();
    /* 0071ac98: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071ac9a: je 0x71acef */ if (fZ) goto L_0071acef;
L_0071ac9c:; BB(0x0071ac9c);
    /* 0071ac9c: mov ecx, edi */ r_ecx = r_edi;
    /* 0071ac9e: call 0x71a6d0 */ r_esp -= 4; W32(r_esp, 0x71aca3u); f_0071a6d0();
    /* 0071aca3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071aca5: je 0x71acc8 */ if (fZ) goto L_0071acc8;
L_0071aca7:; BB(0x0071aca7);
    /* 0071aca7: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 0071acab: test eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071acb0: je 0x71acbd */ if (fZ) goto L_0071acbd;
L_0071acb2:; BB(0x0071acb2);
    /* 0071acb2: and eax, 0xfbff */ {  u32 a = r_eax; u32 b = 0xfbffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071acb7: mov word ptr [edi + 0x1c], ax */ W16((u32)(r_edi+0x1cu), (u16)r_eax);
    /* 0071acbb: jmp 0x71ace7 */ goto L_0071ace7;
L_0071acbd:; BB(0x0071acbd);
    /* 0071acbd: or eax, 0xffff0400 */ {  u32 a = r_eax; u32 b = 0xffff0400u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071acc2: mov word ptr [edi + 0x1c], ax */ W16((u32)(r_edi+0x1cu), (u16)r_eax);
    /* 0071acc6: jmp 0x71ace7 */ goto L_0071ace7;
L_0071acc8:; BB(0x0071acc8);
    /* 0071acc8: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 0071accc: test eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071acd1: je 0x71acde */ if (fZ) goto L_0071acde;
L_0071acd3:; BB(0x0071acd3);
    /* 0071acd3: and eax, 0xfdff */ {  u32 a = r_eax; u32 b = 0xfdffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071acd8: mov word ptr [edi + 0x1c], ax */ W16((u32)(r_edi+0x1cu), (u16)r_eax);
    /* 0071acdc: jmp 0x71ace7 */ goto L_0071ace7;
L_0071acde:; BB(0x0071acde);
    /* 0071acde: or eax, 0xffff0200 */ {  u32 a = r_eax; u32 b = 0xffff0200u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071ace3: mov word ptr [edi + 0x1c], ax */ W16((u32)(r_edi+0x1cu), (u16)r_eax);
L_0071ace7:; BB(0x0071ace7);
    /* 0071ace7: mov eax, 0x30 */ r_eax = 0x30u;
    /* 0071acec: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0071aced: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0071acee: ret  */ FN_RET(0x0071ac24); r_esp += 4; return;
L_0071acef:; BB(0x0071acef);
    /* 0071acef: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 0071acf1: mov ecx, esi */ r_ecx = r_esi;
    /* 0071acf3: call 0x78fd68 */ r_esp -= 4; W32(r_esp, 0x71acf8u); f_0078fd68();
    /* 0071acf8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071acfa: je 0x71ad04 */ if (fZ) goto L_0071ad04;
L_0071acfc:; BB(0x0071acfc);
    /* 0071acfc: mov eax, 9 */ r_eax = 0x9u;
    /* 0071ad01: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0071ad02: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0071ad03: ret  */ FN_RET(0x0071ac24); r_esp += 4; return;
L_0071ad04:; BB(0x0071ad04);
    /* 0071ad04: push 0x16 */ { u32 v = 0x16u; r_esp -= 4; W32(r_esp, v); }
    /* 0071ad06: mov ecx, esi */ r_ecx = r_esi;
    /* 0071ad08: call 0x78fd68 */ r_esp -= 4; W32(r_esp, 0x71ad0du); f_0078fd68();
    /* 0071ad0d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071ad0f: je 0x71ad19 */ if (fZ) goto L_0071ad19;
L_0071ad11:; BB(0x0071ad11);
    /* 0071ad11: mov eax, 3 */ r_eax = 0x3u;
    /* 0071ad16: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0071ad17: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0071ad18: ret  */ FN_RET(0x0071ac24); r_esp += 4; return;
L_0071ad19:; BB(0x0071ad19);
    /* 0071ad19: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 0071ad1b: mov ecx, esi */ r_ecx = r_esi;
    /* 0071ad1d: call 0x78fd68 */ r_esp -= 4; W32(r_esp, 0x71ad22u); f_0078fd68();
    /* 0071ad22: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071ad24: je 0x71ad2e */ if (fZ) goto L_0071ad2e;
L_0071ad26:; BB(0x0071ad26);
    /* 0071ad26: mov eax, 0x17 */ r_eax = 0x17u;
    /* 0071ad2b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0071ad2c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0071ad2d: ret  */ FN_RET(0x0071ac24); r_esp += 4; return;
L_0071ad2e:; BB(0x0071ad2e);
    /* 0071ad2e: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 0071ad30: mov ecx, esi */ r_ecx = r_esi;
    /* 0071ad32: call 0x78fd68 */ r_esp -= 4; W32(r_esp, 0x71ad37u); f_0078fd68();
    /* 0071ad37: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071ad39: je 0x71ad43 */ if (fZ) goto L_0071ad43;
L_0071ad3b:; BB(0x0071ad3b);
    /* 0071ad3b: mov eax, 0xe */ r_eax = 0xeu;
    /* 0071ad40: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0071ad41: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0071ad42: ret  */ FN_RET(0x0071ac24); r_esp += 4; return;
L_0071ad43:; BB(0x0071ad43);
    /* 0071ad43: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 0071ad45: mov ecx, esi */ r_ecx = r_esi;
    /* 0071ad47: call 0x78fd68 */ r_esp -= 4; W32(r_esp, 0x71ad4cu); f_0078fd68();
    /* 0071ad4c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071ad4e: je 0x71ad58 */ if (fZ) goto L_0071ad58;
L_0071ad50:; BB(0x0071ad50);
    /* 0071ad50: mov eax, 0x13 */ r_eax = 0x13u;
    /* 0071ad55: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0071ad56: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0071ad57: ret  */ FN_RET(0x0071ac24); r_esp += 4; return;
L_0071ad58:; BB(0x0071ad58);
    /* 0071ad58: push 0x1a */ { u32 v = 0x1au; r_esp -= 4; W32(r_esp, v); }
    /* 0071ad5a: mov ecx, esi */ r_ecx = r_esi;
    /* 0071ad5c: call 0x78fd68 */ r_esp -= 4; W32(r_esp, 0x71ad61u); f_0078fd68();
    /* 0071ad61: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071ad63: je 0x71ad6d */ if (fZ) goto L_0071ad6d;
L_0071ad65:; BB(0x0071ad65);
    /* 0071ad65: mov eax, 0x12 */ r_eax = 0x12u;
    /* 0071ad6a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0071ad6b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0071ad6c: ret  */ FN_RET(0x0071ac24); r_esp += 4; return;
L_0071ad6d:; BB(0x0071ad6d);
    /* 0071ad6d: push 0x1b */ { u32 v = 0x1bu; r_esp -= 4; W32(r_esp, v); }
    /* 0071ad6f: mov ecx, esi */ r_ecx = r_esi;
    /* 0071ad71: call 0x78fd68 */ r_esp -= 4; W32(r_esp, 0x71ad76u); f_0078fd68();
    /* 0071ad76: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071ad78: je 0x71ace7 */ if (fZ) goto L_0071ace7;
L_0071ad7e:; BB(0x0071ad7e);
    /* 0071ad7e: mov eax, 0x25 */ r_eax = 0x25u;
    /* 0071ad83: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0071ad84: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0071ad85: ret  */ FN_RET(0x0071ac24); r_esp += 4; return;
}

void f_0071ad88(void) /* sub_71AD88 */
{
    FN_ENTER(0x0071ad88);
    /* 0071ad88: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0071ad89: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0071ad8a: mov edi, ecx */ r_edi = r_ecx;
    /* 0071ad8c: movsx ebp, word ptr [esp + 0xc] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_esp+0xcu));
    /* 0071ad91: call 0x791b48 */ r_esp -= 4; W32(r_esp, 0x71ad96u); f_00791b48();
    /* 0071ad96: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071ad98: je 0x71adfc */ if (fZ) goto L_0071adfc;
L_0071ad9a:; BB(0x0071ad9a);
    /* 0071ad9a: cmp ebp, 9 */ {  u32 a = r_ebp; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071ad9d: je 0x71ae55 */ if (fZ) goto L_0071ae55;
L_0071ada3:; BB(0x0071ada3);
    /* 0071ada3: cmp ebp, 3 */ {  u32 a = r_ebp; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071ada6: je 0x71ae3d */ if (fZ) goto L_0071ae3d;
L_0071adac:; BB(0x0071adac);
    /* 0071adac: cmp ebp, 0x17 */ {  u32 a = r_ebp; u32 b = 0x17u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071adaf: je 0x71ae25 */ if (fZ) goto L_0071ae25;
L_0071adb1:; BB(0x0071adb1);
    /* 0071adb1: cmp ebp, 0xe */ {  u32 a = r_ebp; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071adb4: je 0x71ae0d */ if (fZ) goto L_0071ae0d;
L_0071adb6:; BB(0x0071adb6);
    /* 0071adb6: cmp ebp, 0x13 */ {  u32 a = r_ebp; u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071adb9: je 0x71aded */ if (fZ) goto L_0071aded;
L_0071adbb:; BB(0x0071adbb);
    /* 0071adbb: cmp ebp, 0x12 */ {  u32 a = r_ebp; u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071adbe: jne 0x71add4 */ if (!fZ) goto L_0071add4;
L_0071adc0:; BB(0x0071adc0);
    /* 0071adc0: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0071adc2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071adc4: je 0x71ae01 */ if (fZ) goto L_0071ae01;
L_0071adc6:; BB(0x0071adc6);
    /* 0071adc6: mov eax, dword ptr [eax + 0xd4] */ r_eax = R32((u32)(r_eax+0xd4u));
L_0071adcc:; BB(0x0071adcc);
    /* 0071adcc: mov dword ptr [edi + 0x28], eax */ W32((u32)(r_edi+0x28u), r_eax);
    /* 0071adcf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0071add0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0071add1: ret 4 */ FN_RET(0x0071ad88); r_esp += 8; return;
L_0071add4:; BB(0x0071add4);
    /* 0071add4: cmp ebp, 0x25 */ {  u32 a = r_ebp; u32 b = 0x25u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0071add7: jne 0x71adfc */ if (!fZ) goto L_0071adfc;
L_0071add9:; BB(0x0071add9);
    /* 0071add9: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0071addb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071addd: je 0x71ae05 */ if (fZ) goto L_0071ae05;
L_0071addf:; BB(0x0071addf);
    /* 0071addf: mov eax, dword ptr [eax + 0xdc] */ r_eax = R32((u32)(r_eax+0xdcu));
L_0071ade5:; BB(0x0071ade5);
    /* 0071ade5: mov dword ptr [edi + 0x28], eax */ W32((u32)(r_edi+0x28u), r_eax);
    /* 0071ade8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0071ade9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0071adea: ret 4 */ FN_RET(0x0071ad88); r_esp += 8; return;
L_0071aded:; BB(0x0071aded);
    /* 0071aded: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0071adef: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071adf1: je 0x71ae09 */ if (fZ) goto L_0071ae09;
L_0071adf3:; BB(0x0071adf3);
    /* 0071adf3: mov eax, dword ptr [eax + 0xcc] */ r_eax = R32((u32)(r_eax+0xccu));
L_0071adf9:; BB(0x0071adf9);
    /* 0071adf9: mov dword ptr [edi + 0x28], eax */ W32((u32)(r_edi+0x28u), r_eax);
L_0071adfc:; BB(0x0071adfc);
    /* 0071adfc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0071adfd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0071adfe: ret 4 */ FN_RET(0x0071ad88); r_esp += 8; return;
L_0071ae01:; BB(0x0071ae01);
    /* 0071ae01: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071ae03: jmp 0x71adcc */ goto L_0071adcc;
L_0071ae05:; BB(0x0071ae05);
    /* 0071ae05: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071ae07: jmp 0x71ade5 */ goto L_0071ade5;
L_0071ae09:; BB(0x0071ae09);
    /* 0071ae09: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071ae0b: jmp 0x71adf9 */ goto L_0071adf9;
L_0071ae0d:; BB(0x0071ae0d);
    /* 0071ae0d: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0071ae0f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071ae11: je 0x71ae21 */ if (fZ) goto L_0071ae21;
L_0071ae13:; BB(0x0071ae13);
    /* 0071ae13: mov eax, dword ptr [eax + 0xc4] */ r_eax = R32((u32)(r_eax+0xc4u));
L_0071ae19:; BB(0x0071ae19);
    /* 0071ae19: mov dword ptr [edi + 0x28], eax */ W32((u32)(r_edi+0x28u), r_eax);
    /* 0071ae1c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0071ae1d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0071ae1e: ret 4 */ FN_RET(0x0071ad88); r_esp += 8; return;
L_0071ae21:; BB(0x0071ae21);
    /* 0071ae21: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071ae23: jmp 0x71ae19 */ goto L_0071ae19;
L_0071ae25:; BB(0x0071ae25);
    /* 0071ae25: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0071ae27: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071ae29: je 0x71ae39 */ if (fZ) goto L_0071ae39;
L_0071ae2b:; BB(0x0071ae2b);
    /* 0071ae2b: mov eax, dword ptr [eax + 0xbc] */ r_eax = R32((u32)(r_eax+0xbcu));
L_0071ae31:; BB(0x0071ae31);
    /* 0071ae31: mov dword ptr [edi + 0x28], eax */ W32((u32)(r_edi+0x28u), r_eax);
    /* 0071ae34: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0071ae35: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0071ae36: ret 4 */ FN_RET(0x0071ad88); r_esp += 8; return;
L_0071ae39:; BB(0x0071ae39);
    /* 0071ae39: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071ae3b: jmp 0x71ae31 */ goto L_0071ae31;
L_0071ae3d:; BB(0x0071ae3d);
    /* 0071ae3d: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0071ae3f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071ae41: je 0x71ae51 */ if (fZ) goto L_0071ae51;
L_0071ae43:; BB(0x0071ae43);
    /* 0071ae43: mov eax, dword ptr [eax + 0xb4] */ r_eax = R32((u32)(r_eax+0xb4u));
L_0071ae49:; BB(0x0071ae49);
    /* 0071ae49: mov dword ptr [edi + 0x28], eax */ W32((u32)(r_edi+0x28u), r_eax);
    /* 0071ae4c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0071ae4d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0071ae4e: ret 4 */ FN_RET(0x0071ad88); r_esp += 8; return;
L_0071ae51:; BB(0x0071ae51);
    /* 0071ae51: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071ae53: jmp 0x71ae49 */ goto L_0071ae49;
L_0071ae55:; BB(0x0071ae55);
    /* 0071ae55: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0071ae57: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071ae59: je 0x71ae69 */ if (fZ) goto L_0071ae69;
L_0071ae5b:; BB(0x0071ae5b);
    /* 0071ae5b: mov eax, dword ptr [eax + 0xac] */ r_eax = R32((u32)(r_eax+0xacu));
L_0071ae61:; BB(0x0071ae61);
    /* 0071ae61: mov dword ptr [edi + 0x28], eax */ W32((u32)(r_edi+0x28u), r_eax);
    /* 0071ae64: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0071ae65: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0071ae66: ret 4 */ FN_RET(0x0071ad88); r_esp += 8; return;
L_0071ae69:; BB(0x0071ae69);
    /* 0071ae69: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071ae6b: jmp 0x71ae61 */ goto L_0071ae61;
}

void f_0071ae70(void) /* sub_71AE70 */
{
    FN_ENTER(0x0071ae70);
    /* 0071ae70: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0071ae71: mov edi, ecx */ r_edi = r_ecx;
    /* 0071ae73: mov ecx, dword ptr [edi + 0x30] */ r_ecx = R32((u32)(r_edi+0x30u));
    /* 0071ae76: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071ae78: je 0x71aebd */ if (fZ) goto L_0071aebd;
L_0071ae7a:; BB(0x0071ae7a);
    /* 0071ae7a: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 0071ae7e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0071ae80: je 0x71ae89 */ if (fZ) goto L_0071ae89;
L_0071ae82:; BB(0x0071ae82);
    /* 0071ae82: call 0x7127c8 */ r_esp -= 4; W32(r_esp, 0x71ae87u); f_007127c8();
    /* 0071ae87: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0071ae88: ret  */ FN_RET(0x0071ae70); r_esp += 4; return;
L_0071ae89:; BB(0x0071ae89);
    /* 0071ae89: call 0x712714 */ r_esp -= 4; W32(r_esp, 0x71ae8eu); f_00712714();
    /* 0071ae8e: mov ecx, edi */ r_ecx = r_edi;
    /* 0071ae90: call 0x71b354 */ r_esp -= 4; W32(r_esp, 0x71ae95u); f_0071b354();
    /* 0071ae95: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071ae97: je 0x71aeac */ if (fZ) goto L_0071aeac;
L_0071ae99:; BB(0x0071ae99);
    /* 0071ae99: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 0071ae9b: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x71aea0u); f_0073ec50();
    /* 0071aea0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071aea1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071aea2: mov ecx, dword ptr [edi + 0x30] */ r_ecx = R32((u32)(r_edi+0x30u));
    /* 0071aea5: call 0x73b488 */ r_esp -= 4; W32(r_esp, 0x71aeaau); f_0073b488();
    /* 0071aeaa: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0071aeab: ret  */ FN_RET(0x0071ae70); r_esp += 4; return;
L_0071aeac:; BB(0x0071aeac);
    /* 0071aeac: push 0x22 */ { u32 v = 0x22u; r_esp -= 4; W32(r_esp, v); }
    /* 0071aeae: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x71aeb3u); f_0073ec50();
    /* 0071aeb3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071aeb4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071aeb5: mov ecx, dword ptr [edi + 0x30] */ r_ecx = R32((u32)(r_edi+0x30u));
    /* 0071aeb8: call 0x73b488 */ r_esp -= 4; W32(r_esp, 0x71aebdu); f_0073b488();
L_0071aebd:; BB(0x0071aebd);
    /* 0071aebd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0071aebe: ret  */ FN_RET(0x0071ae70); r_esp += 4; return;
}

void f_0071aec0(void) /* sub_71AEC0 */
{
    FN_ENTER(0x0071aec0);
    /* 0071aec0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0071aec1: mov ebp, esp */ r_ebp = r_esp;
    /* 0071aec3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0071aec5: push 0x8f0bb4 */ { u32 v = 0x8f0bb4u; r_esp -= 4; W32(r_esp, v); }
    /* 0071aeca: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0071aed0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071aed1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0071aed8: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0071aedb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0071aede: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 0071aee1: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 0071aee4: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 0071aee7: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0071aeea: mov ecx, dword ptr [ecx + 0x44] */ r_ecx = R32((u32)(r_ecx+0x44u));
    /* 0071aeed: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071aeef: je 0x71af04 */ if (fZ) goto L_0071af04;
L_0071aef1:; BB(0x0071aef1);
    /* 0071aef1: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x71aef6u); f_008173b4();
    /* 0071aef6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071aef8: jne 0x71af04 */ if (!fZ) goto L_0071af04;
L_0071aefa:; BB(0x0071aefa);
    /* 0071aefa: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0071aefd: mov dword ptr [eax + 0x44], 0 */ W32((u32)(r_eax+0x44u), 0x0u);
L_0071af04:; BB(0x0071af04);
    /* 0071af04: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0071af07: mov eax, dword ptr [eax + 0x38] */ r_eax = R32((u32)(r_eax+0x38u));
    /* 0071af0a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071af0c: je 0x71afec */ if (fZ) goto L_0071afec;
L_0071af12:; BB(0x0071af12);
    /* 0071af12: movzx eax, word ptr [eax + 8] */ r_eax = (u32)R16((u32)(r_eax+0x8u));
    /* 0071af16: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0071af18: je 0x71af31 */ if (fZ) goto L_0071af31;
L_0071af1a:; BB(0x0071af1a);
    /* 0071af1a: call 0x80a640 */ r_esp -= 4; W32(r_esp, 0x71af1fu); f_0080a640();
    /* 0071af1f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071af21: jne 0x71af31 */ if (!fZ) goto L_0071af31;
L_0071af23:; BB(0x0071af23);
    /* 0071af23: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0071af26: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0071af2d: mov esp, ebp */ r_esp = r_ebp;
    /* 0071af2f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0071af30: ret  */ FN_RET(0x0071aec0); r_esp += 4; return;
L_0071af31:; BB(0x0071af31);
    /* 0071af31: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0071af34: push dword ptr [eax + 0x24] */ { u32 v = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 0071af37: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x71af3cu); f_0068d5a8();
    /* 0071af3c: mov edi, eax */ r_edi = r_eax;
    /* 0071af3e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0071af41: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071af43: je 0x71b003 */ if (fZ) goto L_0071b003;
L_0071af49:; BB(0x0071af49);
    /* 0071af49: mov edx, dword ptr [edi + 0xdf0] */ r_edx = R32((u32)(r_edi+0xdf0u));
    /* 0071af4f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071af51: jne 0x71b003 */ if (!fZ) goto L_0071b003;
L_0071af57:; BB(0x0071af57);
    /* 0071af57: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0071af5a: push dword ptr [edx + 0x24] */ { u32 v = R32((u32)(r_edx+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 0071af5d: call 0x719140 */ r_esp -= 4; W32(r_esp, 0x71af62u); f_00719140();
    /* 0071af62: mov esi, eax */ r_esi = r_eax;
    /* 0071af64: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0071af67: call 0x69b6a8 */ r_esp -= 4; W32(r_esp, 0x71af6cu); f_0069b6a8();
    /* 0071af6c: mov ebx, eax */ r_ebx = r_eax;
    /* 0071af6e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0071af71: call 0x71b354 */ r_esp -= 4; W32(r_esp, 0x71af76u); f_0071b354();
    /* 0071af76: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071af78: jne 0x71afbf */ if (!fZ) goto L_0071afbf;
L_0071af7a:; BB(0x0071af7a);
    /* 0071af7a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0071af7d: movzx edx, word ptr [edx + 0x1c] */ r_edx = (u32)R16((u32)(r_edx+0x1cu));
    /* 0071af81: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0071af84: jne 0x71afbf */ if (!fZ) goto L_0071afbf;
L_0071af86:; BB(0x0071af86);
    /* 0071af86: movzx ebx, bx */ r_ebx = (u32)(u16)r_ebx;
    /* 0071af89: cmp ebx, 0xffff */ {  u32 a = r_ebx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071af8f: je 0x71af99 */ if (fZ) goto L_0071af99;
L_0071af91:; BB(0x0071af91);
    /* 0071af91: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0071af94: cmp ebx, dword ptr [eax + 0x24] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_eax+0x24u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071af97: jne 0x71afbf */ if (!fZ) goto L_0071afbf;
L_0071af99:; BB(0x0071af99);
    /* 0071af99: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0071af9c: jne 0x71afbf */ if (!fZ) goto L_0071afbf;
L_0071af9e:; BB(0x0071af9e);
    /* 0071af9e: mov ebx, dword ptr [edi + 0x33c] */ r_ebx = R32((u32)(r_edi+0x33cu));
    /* 0071afa4: test ebx, 0x4000000 */ {  u32 a = r_ebx; u32 b = 0x4000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071afaa: jne 0x71afbf */ if (!fZ) goto L_0071afbf;
L_0071afac:; BB(0x0071afac);
    /* 0071afac: mov ebx, dword ptr [0xa98478] */ r_ebx = R32((u32)(0xa98478u));
    /* 0071afb2: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071afb4: je 0x71afe2 */ if (fZ) goto L_0071afe2;
L_0071afb6:; BB(0x0071afb6);
    /* 0071afb6: movzx ebx, word ptr [ebx + 0x1c] */ r_ebx = (u32)R16((u32)(r_ebx+0x1cu));
    /* 0071afba: test bl, 2 */ {  u32 a = (u8)r_ebx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0071afbd: je 0x71afe2 */ if (fZ) goto L_0071afe2;
L_0071afbf:; BB(0x0071afbf);
    /* 0071afbf: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0071afc2: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0071afc5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071afc7: je 0x71afec */ if (fZ) goto L_0071afec;
L_0071afc9:; BB(0x0071afc9);
    /* 0071afc9: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0071afcd: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071afd2: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0071afd6: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0071afd9: mov dword ptr [edx + 0x44], 0 */ W32((u32)(r_edx+0x44u), 0x0u);
    /* 0071afe0: jmp 0x71afec */ goto L_0071afec;
L_0071afe2:; BB(0x0071afe2);
    /* 0071afe2: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0071afe5: mov ebx, dword ptr [ebx + 0x44] */ r_ebx = R32((u32)(r_ebx+0x44u));
    /* 0071afe8: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071afea: je 0x71b035 */ if (fZ) goto L_0071b035;
L_0071afec:; BB(0x0071afec);
    /* 0071afec: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0071afef: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0071aff2: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0071aff5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0071aff8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0071afff: mov esp, ebp */ r_esp = r_ebp;
    /* 0071b001: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0071b002: ret  */ FN_RET(0x0071aec0); r_esp += 4; return;
L_0071b003:; BB(0x0071b003);
    /* 0071b003: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0071b006: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0071b009: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071b00b: je 0x71b024 */ if (fZ) goto L_0071b024;
L_0071b00d:; BB(0x0071b00d);
    /* 0071b00d: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0071b011: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071b016: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0071b01a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0071b01d: mov dword ptr [edx + 0x44], 0 */ W32((u32)(r_edx+0x44u), 0x0u);
L_0071b024:; BB(0x0071b024);
    /* 0071b024: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0071b027: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0071b02a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0071b031: mov esp, ebp */ r_esp = r_ebp;
    /* 0071b033: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0071b034: ret  */ FN_RET(0x0071aec0); r_esp += 4; return;
L_0071b035:; BB(0x0071b035);
    /* 0071b035: test dl, 8 */ {  u32 a = (u8)r_edx; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071b038: jne 0x71afec */ if (!fZ) goto L_0071afec;
L_0071b03a:; BB(0x0071b03a);
    /* 0071b03a: mov ecx, edi */ r_ecx = r_edi;
    /* 0071b03c: call 0x68ce14 */ r_esp -= 4; W32(r_esp, 0x71b041u); f_0068ce14();
    /* 0071b041: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071b043: jne 0x71afec */ if (!fZ) goto L_0071afec;
L_0071b045:; BB(0x0071b045);
    /* 0071b045: push dword ptr [0xa0f680] */ { u32 v = R32((u32)(0xa0f680u)); r_esp -= 4; W32(r_esp, v); }
    /* 0071b04b: lea eax, [esi + esi*4] */ r_eax = (u32)(r_esi+r_esi*4);
    /* 0071b04e: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0071b050: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0071b052: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0071b054: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 0071b05b: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x71b060u); f_007c1160();
    /* 0071b060: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071b062: jne 0x71b07a */ if (!fZ) goto L_0071b07a;
L_0071b064:; BB(0x0071b064);
    /* 0071b064: call 0x791b48 */ r_esp -= 4; W32(r_esp, 0x71b069u); f_00791b48();
    /* 0071b069: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0071b06b: mov ecx, eax */ r_ecx = r_eax;
    /* 0071b06d: call 0x78fd68 */ r_esp -= 4; W32(r_esp, 0x71b072u); f_0078fd68();
    /* 0071b072: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071b074: je 0x71afec */ if (fZ) goto L_0071afec;
L_0071b07a:; BB(0x0071b07a);
    /* 0071b07a: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 0071b081: push 0x4c */ { u32 v = 0x4cu; r_esp -= 4; W32(r_esp, v); }
    /* 0071b083: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x71b088u); f_005caba4();
    /* 0071b088: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0071b08b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0071b08e: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0071b091: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071b093: je 0x71b0c7 */ if (fZ) goto L_0071b0c7;
L_0071b095:; BB(0x0071b095);
    /* 0071b095: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 0071b09c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0071b0a3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0071b0a6: push dword ptr [eax + 0x24] */ { u32 v = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 0071b0a9: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0071b0ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071b0ad: call 0x740a68 */ r_esp -= 4; W32(r_esp, 0x71b0b2u); f_00740a68();
    /* 0071b0b2: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_0071b0b9:; BB(0x0071b0b9);
    /* 0071b0b9: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0071b0bc: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0071b0bf: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 0071b0c2: jmp 0x71afec */ goto L_0071afec;
L_0071b0c7:; BB(0x0071b0c7);
    /* 0071b0c7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071b0c9: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0071b0cc: jmp 0x71b0b9 */ goto L_0071b0b9;
}

