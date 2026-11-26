#include "protos.h"

void f_00508070(void)
{
    FN_ENTER(0x00508070);
    /* 00508070: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00508071: mov ebp, esp */ r_ebp = r_esp;
    /* 00508073: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00508075: push 0x8d3aa4 */ { u32 v = 0x8d3aa4u; r_esp -= 4; W32(r_esp, v); }
    /* 0050807a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00508080: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00508081: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00508088: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0050808b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0050808e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00508091: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00508094: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00508097: push 0xac */ { u32 v = 0xacu; r_esp -= 4; W32(r_esp, v); }
    /* 0050809c: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005080a3: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5080a8u); f_005caba4();
    /* 005080a8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005080a9: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005080ac: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005080ae: je 0x5080e7 */ if (fZ) goto L_005080e7;
L_005080b0:; BB(0x005080b0);
    /* 005080b0: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005080b7: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005080be: push dword ptr [0xaca334] */ { u32 v = R32((u32)(0xaca334u)); r_esp -= 4; W32(r_esp, v); }
    /* 005080c4: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005080c7: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005080ca: call 0x5080ec */ r_esp -= 4; W32(r_esp, 0x5080cfu); f_005080ec();
    /* 005080cf: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005080d2: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005080d9:; BB(0x005080d9);
    /* 005080d9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005080dc: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005080e3: mov esp, ebp */ r_esp = r_ebp;
    /* 005080e5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005080e6: ret  */ FN_RET(0x00508070); r_esp += 4; return;
L_005080e7:; BB(0x005080e7);
    /* 005080e7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005080e9: jmp 0x5080d9 */ goto L_005080d9;
}

void f_005080dc(void)
{
    FN_ENTER(0x005080dc);
    /* 005080dc: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005080e3: mov esp, ebp */ r_esp = r_ebp;
    /* 005080e5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005080e6: ret  */ FN_RET(0x005080dc); r_esp += 4; return;
}

void f_005080ec(void) /* sub_5080EC */
{
    FN_ENTER(0x005080ec);
    /* 005080ec: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005080ed: mov ebp, esp */ r_ebp = r_esp;
    /* 005080ef: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005080f1: push 0x8d3ac0 */ { u32 v = 0x8d3ac0u; r_esp -= 4; W32(r_esp, v); }
    /* 005080f6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005080fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005080fd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00508104: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00508107: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0050810a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0050810d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00508110: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00508113: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00508116: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00508119: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0050811c: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0050811f: call 0x7ba278 */ r_esp -= 4; W32(r_esp, 0x508124u); f_007ba278();
    /* 00508124: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0050812b: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0050812e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00508131: mov dword ptr [ecx], 0xafef30 */ W32((u32)(r_ecx), 0xafef30u);
    /* 00508137: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00508138: call dword ptr [0xafef44] */ { u32 t = R32((u32)(0xafef44u)); r_esp -= 4; W32(r_esp, 0x50813eu); call_ind(t); }
    /* 0050813e: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00508141: mov eax, dword ptr [0xaafdb8] */ r_eax = R32((u32)(0xaafdb8u));
    /* 00508146: mov dword ptr [edx + 0xa4], 0x43610000 */ W32((u32)(r_edx+0xa4u), 0x43610000u);
    /* 00508150: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00508153: jne 0x508161 */ if (!fZ) goto L_00508161;
L_00508155:; BB(0x00508155);
    /* 00508155: mov dword ptr [0x9ba8f0], 0 */ W32((u32)(0x9ba8f0u), 0x0u);
    /* 0050815f: jmp 0x50816b */ goto L_0050816b;
L_00508161:; BB(0x00508161);
    /* 00508161: mov dword ptr [0x9ba8f0], 1 */ W32((u32)(0x9ba8f0u), 0x1u);
L_0050816b:; BB(0x0050816b);
    /* 0050816b: mov eax, edx */ r_eax = r_edx;
    /* 0050816d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00508170: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00508177: mov esp, ebp */ r_esp = r_ebp;
    /* 00508179: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050817a: ret 8 */ FN_RET(0x005080ec); r_esp += 12; return;
}

void f_00508180(void) /* sub_508180 */
{
    FN_ENTER(0x00508180);
    /* 00508180: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00508181: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00508184: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00508186: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x50818bu); f_004f7c84();
    /* 0050818b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050818d: je 0x5081c3 */ if (fZ) goto L_005081c3;
L_0050818f:; BB(0x0050818f);
    /* 0050818f: mov dword ptr [esp], 0x3f000000 */ W32((u32)(r_esp), 0x3f000000u);
    /* 00508196: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00508199: add ebx, 0x38 */ {  u32 a = r_ebx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0050819c: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 005081a4: mov dword ptr [esp + 8], 0x3f800000 */ W32((u32)(r_esp+0x8u), 0x3f800000u);
    /* 005081ac: mov dword ptr [esp + 0xc], 0x3f800000 */ W32((u32)(r_esp+0xcu), 0x3f800000u);
    /* 005081b4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005081b5: push 0x42200000 */ { u32 v = 0x42200000u; r_esp -= 4; W32(r_esp, v); }
    /* 005081ba: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005081bb: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x5081c0u); f_0061cdb0();
    /* 005081c0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005081c3:; BB(0x005081c3);
    /* 005081c3: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005081c6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005081c7: ret  */ FN_RET(0x00508180); r_esp += 4; return;
}

void f_005081c8(void) /* sub_5081C8 */
{
    FN_ENTER(0x005081c8);
    /* 005081c8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005081c9: mov edi, ecx */ r_edi = r_ecx;
    /* 005081cb: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005081d1: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x5081d6u); f_0068d5a8();
    /* 005081d6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005081d7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005081d9: je 0x50821a */ if (fZ) goto L_0050821a;
L_005081db:; BB(0x005081db);
    /* 005081db: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005081de: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 005081e1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005081e2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005081e3: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x5081e8u); f_007a9180();
    /* 005081e8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 005081eb: fcomp dword ptr [0x91ffd4] */ fx_compare(ST(0), R_F32((u32)(0x91ffd4u))); FPOP();
    /* 005081f1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005081f3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005081f4: jae 0x50821a */ if (!fC) goto L_0050821a;
L_005081f6:; BB(0x005081f6);
    /* 005081f6: fld dword ptr [edi + 0x68] */ FPUSH(R_F32((u32)(r_edi+0x68u)));
    /* 005081f9: fcomp dword ptr [0x91ffd0] */ fx_compare(ST(0), R_F32((u32)(0x91ffd0u))); FPOP();
    /* 005081ff: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00508201: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00508202: jbe 0x508210 */ if ((fC||fZ)) goto L_00508210;
L_00508204:; BB(0x00508204);
    /* 00508204: mov dword ptr [0x9ba8f0], 1 */ W32((u32)(0x9ba8f0u), 0x1u);
    /* 0050820e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0050820f: ret  */ FN_RET(0x005081c8); r_esp += 4; return;
L_00508210:; BB(0x00508210);
    /* 00508210: mov dword ptr [0x9ba8f0], 0 */ W32((u32)(0x9ba8f0u), 0x0u);
L_0050821a:; BB(0x0050821a);
    /* 0050821a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0050821b: ret  */ FN_RET(0x005081c8); r_esp += 4; return;
}

void f_0050821c(void)
{
    FN_ENTER(0x0050821c);
    /* 0050821c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050821d: mov ebp, esp */ r_ebp = r_esp;
    /* 0050821f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00508221: push 0x8d3ae8 */ { u32 v = 0x8d3ae8u; r_esp -= 4; W32(r_esp, v); }
    /* 00508226: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0050822c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050822d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00508234: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00508237: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0050823a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0050823d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00508240: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00508243: push 0x90 */ { u32 v = 0x90u; r_esp -= 4; W32(r_esp, v); }
    /* 00508248: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0050824f: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x508254u); f_005caba4();
    /* 00508254: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00508255: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00508258: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050825a: je 0x508293 */ if (fZ) goto L_00508293;
L_0050825c:; BB(0x0050825c);
    /* 0050825c: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00508263: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0050826a: push dword ptr [0xaca334] */ { u32 v = R32((u32)(0xaca334u)); r_esp -= 4; W32(r_esp, v); }
    /* 00508270: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00508273: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00508276: call 0x508298 */ r_esp -= 4; W32(r_esp, 0x50827bu); f_00508298();
    /* 0050827b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0050827e: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00508285:; BB(0x00508285);
    /* 00508285: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00508288: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0050828f: mov esp, ebp */ r_esp = r_ebp;
    /* 00508291: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00508292: ret  */ FN_RET(0x0050821c); r_esp += 4; return;
L_00508293:; BB(0x00508293);
    /* 00508293: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00508295: jmp 0x508285 */ goto L_00508285;
}

void f_00508298(void) /* sub_508298 */
{
    FN_ENTER(0x00508298);
    /* 00508298: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00508299: mov ebp, esp */ r_ebp = r_esp;
    /* 0050829b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0050829d: push 0x8d3b04 */ { u32 v = 0x8d3b04u; r_esp -= 4; W32(r_esp, v); }
    /* 005082a2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005082a8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005082a9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005082b0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005082b3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005082b6: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005082b9: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005082bc: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005082bf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005082c2: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005082c5: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005082c8: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005082cb: call 0x7ba278 */ r_esp -= 4; W32(r_esp, 0x5082d0u); f_007ba278();
    /* 005082d0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005082d7: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005082da: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005082dd: mov dword ptr [ecx], 0xafef5c */ W32((u32)(r_ecx), 0xafef5cu);
    /* 005082e3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005082e4: call dword ptr [0xafef70] */ { u32 t = R32((u32)(0xafef70u)); r_esp -= 4; W32(r_esp, 0x5082eau); call_ind(t); }
    /* 005082ea: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005082ed: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005082f0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005082f7: mov esp, ebp */ r_esp = r_ebp;
    /* 005082f9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005082fa: ret 8 */ FN_RET(0x00508298); r_esp += 12; return;
}

void f_00508300(void) /* sub_508300 */
{
    FN_ENTER(0x00508300);
    /* 00508300: mov dword ptr [0xa72bfc], 0x3f800000 */ W32((u32)(0xa72bfcu), 0x3f800000u);
    /* 0050830a: mov dword ptr [0xa72c00], 0x41000000 */ W32((u32)(0xa72c00u), 0x41000000u);
    /* 00508314: mov dword ptr [0xa72c04], 0x3fc00000 */ W32((u32)(0xa72c04u), 0x3fc00000u);
    /* 0050831e: ret  */ FN_RET(0x00508300); r_esp += 4; return;
}

void f_00508320(void) /* sub_508320 */
{
    FN_ENTER(0x00508320);
    /* 00508320: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00508321: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00508323: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00508325: call 0x7a8a2c */ r_esp -= 4; W32(r_esp, 0x50832au); f_007a8a2c();
    /* 0050832a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0050832e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00508330: jne 0x508336 */ if (!fZ) goto L_00508336;
L_00508332:; BB(0x00508332);
    /* 00508332: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00508333: ret 4 */ FN_RET(0x00508320); r_esp += 8; return;
L_00508336:; BB(0x00508336);
    /* 00508336: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00508337: call 0x7a8b74 */ r_esp -= 4; W32(r_esp, 0x50833cu); f_007a8b74();
    /* 0050833c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0050833d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0050833e: ret 4 */ FN_RET(0x00508320); r_esp += 8; return;
}

void f_00508344(void)
{
    FN_ENTER(0x00508344);
    /* 00508344: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00508345: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00508346: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00508348: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0050834a: call 0x508368 */ r_esp -= 4; W32(r_esp, 0x50834fu); f_00508368();
    /* 0050834f: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 00508353: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00508355: jne 0x50835c */ if (!fZ) goto L_0050835c;
L_00508357:; BB(0x00508357);
    /* 00508357: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00508358: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00508359: ret 4 */ FN_RET(0x00508344); r_esp += 8; return;
L_0050835c:; BB(0x0050835c);
    /* 0050835c: mov eax, ebp */ r_eax = r_ebp;
    /* 0050835e: call 0x5083c0 */ r_esp -= 4; W32(r_esp, 0x508363u); f_005083c0();
    /* 00508363: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00508364: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00508365: ret 4 */ FN_RET(0x00508344); r_esp += 8; return;
}

void f_00508368(void) /* sub_508368 */
{
    FN_ENTER(0x00508368);
    /* 00508368: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00508369: mov ebp, esp */ r_ebp = r_esp;
    /* 0050836b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0050836d: push 0x8d3b20 */ { u32 v = 0x8d3b20u; r_esp -= 4; W32(r_esp, v); }
    /* 00508372: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00508378: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00508379: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00508380: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00508383: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00508386: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00508389: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0050838c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0050838f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00508392: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00508395: mov dword ptr [ecx], 0xaff000 */ W32((u32)(r_ecx), 0xaff000u);
    /* 0050839b: mov dword ptr [ecx + 0x20], 0 */ W32((u32)(r_ecx+0x20u), 0x0u);
    /* 005083a2: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005083a9: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x5083aeu); f_008171e8();
    /* 005083ae: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005083b1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005083b8: mov esp, ebp */ r_esp = r_ebp;
    /* 005083ba: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005083bb: ret  */ FN_RET(0x00508368); r_esp += 4; return;
}

void f_005083bc(void) /* sub_5083BC */
{
    FN_ENTER(0x005083bc);
    /* 005083bc: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 005083c0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005083c2: je 0x5083e8 */ if (fZ) goto L_005083e8;
L_005083c4:; BB(0x005083c4);
    /* 005083c4: movzx edx, byte ptr [eax + 0x100] */ r_edx = (u32)R8((u32)(r_eax+0x100u));
    /* 005083cb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005083cd: je 0x5083dc */ if (fZ) goto L_005083dc;
L_005083cf:; BB(0x005083cf);
    /* 005083cf: mov ecx, dword ptr [0xa72c08] */ r_ecx = R32((u32)(0xa72c08u));
    /* 005083d5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005083d6: call 0x7a8b04 */ r_esp -= 4; W32(r_esp, 0x5083dbu); f_007a8b04();
    /* 005083db: ret  */ FN_RET(0x005083bc); r_esp += 4; return;
L_005083dc:; BB(0x005083dc);
    /* 005083dc: mov ecx, dword ptr [0xaab400] */ r_ecx = R32((u32)(0xaab400u));
    /* 005083e2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005083e3: call 0x7a8b04 */ r_esp -= 4; W32(r_esp, 0x5083e8u); f_007a8b04();
L_005083e8:; BB(0x005083e8);
    /* 005083e8: ret  */ FN_RET(0x005083bc); r_esp += 4; return;
}

void f_005083c0(void) /* sub_5083C0 */
{
    FN_ENTER(0x005083c0);
    /* 005083c0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005083c2: je 0x5083e8 */ if (fZ) goto L_005083e8;
L_005083c4:; BB(0x005083c4);
    /* 005083c4: movzx edx, byte ptr [eax + 0x100] */ r_edx = (u32)R8((u32)(r_eax+0x100u));
    /* 005083cb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005083cd: je 0x5083dc */ if (fZ) goto L_005083dc;
L_005083cf:; BB(0x005083cf);
    /* 005083cf: mov ecx, dword ptr [0xa72c08] */ r_ecx = R32((u32)(0xa72c08u));
    /* 005083d5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005083d6: call 0x7a8b04 */ r_esp -= 4; W32(r_esp, 0x5083dbu); f_007a8b04();
    /* 005083db: ret  */ FN_RET(0x005083c0); r_esp += 4; return;
L_005083dc:; BB(0x005083dc);
    /* 005083dc: mov ecx, dword ptr [0xaab400] */ r_ecx = R32((u32)(0xaab400u));
    /* 005083e2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005083e3: call 0x7a8b04 */ r_esp -= 4; W32(r_esp, 0x5083e8u); f_007a8b04();
L_005083e8:; BB(0x005083e8);
    /* 005083e8: ret  */ FN_RET(0x005083c0); r_esp += 4; return;
}

void f_005083ec(void) /* sub_5083EC */
{
    FN_ENTER(0x005083ec);
    /* 005083ec: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005083ef: mov eax, dword ptr [0x92002c] */ r_eax = R32((u32)(0x92002cu));
    /* 005083f4: mov edx, dword ptr [0x920030] */ r_edx = R32((u32)(0x920030u));
    /* 005083fa: mov ecx, dword ptr [0x920034] */ r_ecx = R32((u32)(0x920034u));
    /* 00508400: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00508403: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00508407: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 0050840b: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0050840e: push dword ptr [esp + 0x18] */ { u32 v = R32((u32)(r_esp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 00508412: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00508413: push dword ptr [esp + 0x1c] */ { u32 v = R32((u32)(r_esp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00508417: push dword ptr [esp + 0x1c] */ { u32 v = R32((u32)(r_esp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0050841b: call 0x5101b8 */ r_esp -= 4; W32(r_esp, 0x508420u); f_005101b8();
    /* 00508420: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00508423: ret  */ FN_RET(0x005083ec); r_esp += 4; return;
}

void f_00508424(void) /* sub_508424 */
{
    FN_ENTER(0x00508424);
    /* 00508424: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00508425: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
    /* 00508429: mov ecx, dword ptr [0xaab400] */ r_ecx = R32((u32)(0xaab400u));
    /* 0050842f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00508430: call 0x7a8a38 */ r_esp -= 4; W32(r_esp, 0x508435u); f_007a8a38();
    /* 00508435: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00508437: je 0x508442 */ if (fZ) goto L_00508442;
L_00508439:; BB(0x00508439);
    /* 00508439: mov byte ptr [eax + 0x100], 0 */ W8((u32)(r_eax+0x100u), 0x0u);
L_00508440:; BB(0x00508440);
    /* 00508440: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00508441: ret  */ FN_RET(0x00508424); r_esp += 4; return;
L_00508442:; BB(0x00508442);
    /* 00508442: mov ecx, dword ptr [0xa72c08] */ r_ecx = R32((u32)(0xa72c08u));
    /* 00508448: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0050844a: je 0x508440 */ if (fZ) goto L_00508440;
L_0050844c:; BB(0x0050844c);
    /* 0050844c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050844d: call 0x7a8a38 */ r_esp -= 4; W32(r_esp, 0x508452u); f_007a8a38();
    /* 00508452: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00508454: je 0x508440 */ if (fZ) goto L_00508440;
L_00508456:; BB(0x00508456);
    /* 00508456: mov byte ptr [eax + 0x100], 1 */ W8((u32)(r_eax+0x100u), 0x1u);
    /* 0050845d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050845e: ret  */ FN_RET(0x00508424); r_esp += 4; return;
}

void f_00508460(void) /* sub_508460 */
{
    FN_ENTER(0x00508460);
    /* 00508460: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00508461: mov ebp, esp */ r_ebp = r_esp;
    /* 00508463: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00508465: push 0x8d3b3c */ { u32 v = 0x8d3b3cu; r_esp -= 4; W32(r_esp, v); }
    /* 0050846a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00508470: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00508471: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00508478: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0050847b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0050847e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00508481: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00508484: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00508487: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0050848a: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0050848d: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00508490: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00508493: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x508498u); f_008193cc();
    /* 00508498: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0050849f: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005084a2: fld dword ptr [0x920058] */ FPUSH(R_F32((u32)(0x920058u)));
    /* 005084a8: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005084ab: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005084ad: mov dword ptr [ebx + 0x104], edx */ W32((u32)(r_ebx+0x104u), r_edx);
    /* 005084b3: mov dword ptr [ebx + 0x108], edx */ W32((u32)(r_ebx+0x108u), r_edx);
    /* 005084b9: mov dword ptr [ebx], 0xaff000 */ W32((u32)(r_ebx), 0xaff000u);
    /* 005084bf: mov dword ptr [ebx + 0x10c], edx */ W32((u32)(r_ebx+0x10cu), r_edx);
    /* 005084c5: mov dword ptr [ebx + 0x9c], edx */ W32((u32)(r_ebx+0x9cu), r_edx);
    /* 005084cb: mov dword ptr [ebx + 0xa0], edx */ W32((u32)(r_ebx+0xa0u), r_edx);
    /* 005084d1: mov dword ptr [ebx + 0x110], 0 */ W32((u32)(r_ebx+0x110u), 0x0u);
    /* 005084db: mov dword ptr [ebx + 0xa4], edx */ W32((u32)(r_ebx+0xa4u), r_edx);
    /* 005084e1: mov dword ptr [ebx + 0x20], ecx */ W32((u32)(r_ebx+0x20u), r_ecx);
    /* 005084e4: mov dword ptr [ebx + 0x4c], 0 */ W32((u32)(r_ebx+0x4cu), 0x0u);
    /* 005084eb: mov dword ptr [ebx + 0x50], 0 */ W32((u32)(r_ebx+0x50u), 0x0u);
    /* 005084f2: mov dword ptr [ebx + 0x54], 0 */ W32((u32)(r_ebx+0x54u), 0x0u);
    /* 005084f9: mov dword ptr [ebx + 0x58], 0 */ W32((u32)(r_ebx+0x58u), 0x0u);
    /* 00508500: mov dword ptr [ebx + 0xa8], 0x3f800000 */ W32((u32)(r_ebx+0xa8u), 0x3f800000u);
    /* 0050850a: mov dword ptr [ebx + 0xac], 0x3f800000 */ W32((u32)(r_ebx+0xacu), 0x3f800000u);
    /* 00508514: fld dword ptr [ecx + 0x58] */ FPUSH(R_F32((u32)(r_ecx+0x58u)));
    /* 00508517: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00508519: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0050851b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0050851c: jbe 0x508528 */ if ((fC||fZ)) goto L_00508528;
L_0050851e:; BB(0x0050851e);
    /* 0050851e: fld dword ptr [0x920054] */ FPUSH(R_F32((u32)(0x920054u)));
    /* 00508524: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 00508526: jmp 0x508530 */ goto L_00508530;
L_00508528:; BB(0x00508528);
    /* 00508528: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0050852a: fld dword ptr [0x920058] */ FPUSH(R_F32((u32)(0x920058u)));
L_00508530:; BB(0x00508530);
    /* 00508530: mov edx, ecx */ r_edx = r_ecx;
    /* 00508532: fstp dword ptr [ebx + 0x64] */ W_F32((u32)(r_ebx+0x64u), ST(0)); FPOP();
    /* 00508535: fld dword ptr [edx + 0x5c] */ FPUSH(R_F32((u32)(r_edx+0x5cu)));
    /* 00508538: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0050853a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0050853c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0050853d: jbe 0x50854b */ if ((fC||fZ)) goto L_0050854b;
L_0050853f:; BB(0x0050853f);
    /* 0050853f: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00508541: fld dword ptr [0x920054] */ FPUSH(R_F32((u32)(0x920054u)));
    /* 00508547: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 00508549: jmp 0x50854d */ goto L_0050854d;
L_0050854b:; BB(0x0050854b);
    /* 0050854b: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0050854d:; BB(0x0050854d);
    /* 0050854d: mov eax, edx */ r_eax = r_edx;
    /* 0050854f: fstp dword ptr [ebx + 0x68] */ W_F32((u32)(r_ebx+0x68u), ST(0)); FPOP();
    /* 00508552: push dword ptr [eax + 0x14] */ { u32 v = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 00508555: call 0x501804 */ r_esp -= 4; W32(r_esp, 0x50855au); f_00501804();
    /* 0050855a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0050855b: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0050855e: mov ecx, 0xffff */ r_ecx = 0xffffu;
    /* 00508563: mov word ptr [ebx + 0x1c], ax */ W16((u32)(r_ebx+0x1cu), (u16)r_eax);
    /* 00508567: mov dword ptr [ebx + 0x2c], 0x3f800000 */ W32((u32)(r_ebx+0x2cu), 0x3f800000u);
    /* 0050856e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00508570: mov dword ptr [ebx + 0x94], edx */ W32((u32)(r_ebx+0x94u), r_edx);
    /* 00508576: mov byte ptr [ebx + 0x98], dl */ W8((u32)(r_ebx+0x98u), (u8)r_edx);
    /* 0050857c: mov dword ptr [ebx + 0x30], 0x3f800000 */ W32((u32)(r_ebx+0x30u), 0x3f800000u);
    /* 00508583: mov byte ptr [ebx + 0x99], dl */ W8((u32)(r_ebx+0x99u), (u8)r_edx);
    /* 00508589: mov word ptr [ebx + 0x9a], dx */ W16((u32)(r_ebx+0x9au), (u16)r_edx);
    /* 00508590: mov dword ptr [ebx + 0x70], edx */ W32((u32)(r_ebx+0x70u), r_edx);
    /* 00508593: mov dword ptr [ebx + 0x40], 0 */ W32((u32)(r_ebx+0x40u), 0x0u);
    /* 0050859a: mov word ptr [ebx + 0x24], dx */ W16((u32)(r_ebx+0x24u), (u16)r_edx);
    /* 0050859e: mov word ptr [ebx + 0x26], dx */ W16((u32)(r_ebx+0x26u), (u16)r_edx);
    /* 005085a2: mov word ptr [ebx + 0x28], cx */ W16((u32)(r_ebx+0x28u), (u16)r_ecx);
    /* 005085a6: mov dword ptr [ebx + 0x44], 0 */ W32((u32)(r_ebx+0x44u), 0x0u);
    /* 005085ad: mov eax, ebx */ r_eax = r_ebx;
    /* 005085af: mov dword ptr [ebx + 0x48], 0 */ W32((u32)(r_ebx+0x48u), 0x0u);
    /* 005085b6: mov dword ptr [ebx + 0x5c], 0 */ W32((u32)(r_ebx+0x5cu), 0x0u);
    /* 005085bd: mov dword ptr [ebx + 0x60], 0 */ W32((u32)(r_ebx+0x60u), 0x0u);
    /* 005085c4: mov dword ptr [ebx + 0x74], 0 */ W32((u32)(r_ebx+0x74u), 0x0u);
    /* 005085cb: mov dword ptr [ebx + 0x78], 0 */ W32((u32)(r_ebx+0x78u), 0x0u);
    /* 005085d2: mov dword ptr [ebx + 0x7c], 0 */ W32((u32)(r_ebx+0x7cu), 0x0u);
    /* 005085d9: mov dword ptr [ebx + 0x80], 0 */ W32((u32)(r_ebx+0x80u), 0x0u);
    /* 005085e3: mov dword ptr [ebx + 0x84], 0 */ W32((u32)(r_ebx+0x84u), 0x0u);
    /* 005085ed: mov dword ptr [ebx + 0x88], 0 */ W32((u32)(r_ebx+0x88u), 0x0u);
    /* 005085f7: mov dword ptr [ebx + 0x8c], 0 */ W32((u32)(r_ebx+0x8cu), 0x0u);
    /* 00508601: mov dword ptr [ebx + 0x90], 0 */ W32((u32)(r_ebx+0x90u), 0x0u);
    /* 0050860b: mov dword ptr [ebx + 0xb0], 0x3f800000 */ W32((u32)(r_ebx+0xb0u), 0x3f800000u);
    /* 00508615: mov dword ptr [ebx + 0xb4], 0x3f800000 */ W32((u32)(r_ebx+0xb4u), 0x3f800000u);
    /* 0050861f: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00508622: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00508625: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0050862c: mov esp, ebp */ r_esp = r_ebp;
    /* 0050862e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050862f: ret 8 */ FN_RET(0x00508460); r_esp += 12; return;
}

void f_00508634(void) /* sub_508634 */
{
    FN_ENTER(0x00508634);
    /* 00508634: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 00508636: movzx eax, word ptr [ecx + 0x24] */ r_eax = (u32)R16((u32)(r_ecx+0x24u));
    /* 0050863a: or eax, 0xffff2000 */ {  u32 a = r_eax; u32 b = 0xffff2000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0050863f: mov word ptr [ecx + 0x24], ax */ W16((u32)(r_ecx+0x24u), (u16)r_eax);
    /* 00508643: call 0x505918 */ r_esp -= 4; W32(r_esp, 0x508648u); f_00505918();
    /* 00508648: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00508649: ret  */ FN_RET(0x00508634); r_esp += 4; return;
}

void f_0050864c(void) /* sub_50864C */
{
    FN_ENTER(0x0050864c);
    /* 0050864c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0050864d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0050864e: sub esp, 0x78 */ {  u32 a = r_esp; u32 b = 0x78u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00508651: mov edi, ecx */ r_edi = r_ecx;
    /* 00508653: mov eax, dword ptr [esp + 0x84] */ r_eax = R32((u32)(r_esp+0x84u));
    /* 0050865a: lea ebx, [eax + eax*4] */ r_ebx = (u32)(r_eax+r_eax*4);
    /* 0050865d: lea edx, [ebx + ebx] */ r_edx = (u32)(r_ebx+r_ebx);
    /* 00508660: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00508662: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00508664: mov eax, dword ptr [edx + 0xa101c0] */ r_eax = R32((u32)(r_edx+0xa101c0u));
    /* 0050866a: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0050866c: je 0x508680 */ if (fZ) goto L_00508680;
L_0050866e:; BB(0x0050866e);
    /* 0050866e: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00508670: je 0x508679 */ if (fZ) goto L_00508679;
L_00508672:; BB(0x00508672);
    /* 00508672: call 0x7a9074 */ r_esp -= 4; W32(r_esp, 0x508677u); f_007a9074();
    /* 00508677: jmp 0x508690 */ goto L_00508690;
L_00508679:; BB(0x00508679);
    /* 00508679: call 0x7a9044 */ r_esp -= 4; W32(r_esp, 0x50867eu); f_007a9044();
    /* 0050867e: jmp 0x508690 */ goto L_00508690;
L_00508680:; BB(0x00508680);
    /* 00508680: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00508682: je 0x50868b */ if (fZ) goto L_0050868b;
L_00508684:; BB(0x00508684);
    /* 00508684: call 0x7a905c */ r_esp -= 4; W32(r_esp, 0x508689u); f_007a905c();
    /* 00508689: jmp 0x508690 */ goto L_00508690;
L_0050868b:; BB(0x0050868b);
    /* 0050868b: call 0x7a902c */ r_esp -= 4; W32(r_esp, 0x508690u); f_007a902c();
L_00508690:; BB(0x00508690);
    /* 00508690: fld dword ptr [0xaf02d8] */ FPUSH(R_F32((u32)(0xaf02d8u)));
    /* 00508696: fld dword ptr [0x920050] */ FPUSH(R_F32((u32)(0x920050u)));
    /* 0050869c: fld dword ptr [0xaf02dc] */ FPUSH(R_F32((u32)(0xaf02dcu)));
    /* 005086a2: fld dword ptr [0xaf02c8] */ FPUSH(R_F32((u32)(0xaf02c8u)));
    /* 005086a8: fld dword ptr [0xaf02cc] */ FPUSH(R_F32((u32)(0xaf02ccu)));
    /* 005086ae: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005086b0: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 005086b2: fdivp st(3) */ ST(3) = ST(3) / ST(0); FPOP();
    /* 005086b4: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005086b6: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 005086b8: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 005086ba: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 005086be: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005086c0: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005086c3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005086c5: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 005086c9: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 005086cd: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x5086d2u); f_0082dbac();
    /* 005086d2: mov ecx, 1 */ r_ecx = 0x1u;
    /* 005086d7: call 0x82bb30 */ r_esp -= 4; W32(r_esp, 0x5086dcu); f_0082bb30();
    /* 005086dc: mov ecx, dword ptr [ebx*8 + 0xa101c4] */ r_ecx = R32((u32)(r_ebx*8+0xa101c4u));
    /* 005086e3: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x5086e8u); f_00829cc8();
    /* 005086e8: mov ecx, dword ptr [ebx*8 + 0xa101c8] */ r_ecx = R32((u32)(r_ebx*8+0xa101c8u));
    /* 005086ef: mov edx, dword ptr [ebx*8 + 0xa101dc] */ r_edx = R32((u32)(r_ebx*8+0xa101dcu));
    /* 005086f6: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x5086fbu); f_0082bb60();
    /* 005086fb: mov eax, dword ptr [ebx*8 + 0xa101d0] */ r_eax = R32((u32)(r_ebx*8+0xa101d0u));
    /* 00508702: movsx edx, byte ptr [edi + 0x98] */ r_edx = (u32)(i32)(i8)R8((u32)(r_edi+0x98u));
    /* 00508709: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0050870b: mov ecx, dword ptr [eax + edx*8] */ r_ecx = R32((u32)(r_eax+r_edx*8));
    /* 0050870e: mov dword ptr [esp + 0x40], ecx */ W32((u32)(r_esp+0x40u), r_ecx);
    /* 00508712: mov ecx, dword ptr [eax + edx*8 + 4] */ r_ecx = R32((u32)(r_eax+r_edx*8+0x4u));
    /* 00508716: mov dword ptr [esp + 0x44], ecx */ W32((u32)(r_esp+0x44u), r_ecx);
    /* 0050871a: fld dword ptr [eax + edx*8 + 8] */ FPUSH(R_F32((u32)(r_eax+r_edx*8+0x8u)));
    /* 0050871e: fsub dword ptr [eax + edx*8] */ ST(0) = ST(0) - R_F32((u32)(r_eax+r_edx*8));
    /* 00508721: mov dword ptr [esp + 0x4c], 0 */ W32((u32)(r_esp+0x4cu), 0x0u);
    /* 00508729: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 0050872d: mov dword ptr [esp + 0x50], 0 */ W32((u32)(r_esp+0x50u), 0x0u);
    /* 00508735: fld dword ptr [eax + edx*8 + 0xc] */ FPUSH(R_F32((u32)(r_eax+r_edx*8+0xcu)));
    /* 00508739: fsub dword ptr [eax + edx*8 + 4] */ ST(0) = ST(0) - R_F32((u32)(r_eax+r_edx*8+0x4u));
    /* 0050873d: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 00508741: fld dword ptr [edi + 0x74] */ FPUSH(R_F32((u32)(r_edi+0x74u)));
    /* 00508744: fadd dword ptr [edi + 0x80] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x80u));
    /* 0050874a: fld dword ptr [edi + 0x7c] */ FPUSH(R_F32((u32)(r_edi+0x7cu)));
    /* 0050874d: fadd dword ptr [edi + 0x88] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x88u));
    /* 00508753: movsx eax, byte ptr [edi + 0x99] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edi+0x99u));
    /* 0050875a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0050875c: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 00508760: fld dword ptr [edi + 0x78] */ FPUSH(R_F32((u32)(r_edi+0x78u)));
    /* 00508763: fadd dword ptr [edi + 0x84] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x84u));
    /* 00508769: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0050876b: fstp dword ptr [esp + 0x68] */ W_F32((u32)(r_esp+0x68u), ST(0)); FPOP();
    /* 0050876f: fstp dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0)); FPOP();
    /* 00508773: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00508776: je 0x508798 */ if (fZ) goto L_00508798;
L_00508778:; BB(0x00508778);
    /* 00508778: lea eax, [esp + 0x6c] */ r_eax = (u32)(r_esp+0x6cu);
    /* 0050877c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050877d: lea edx, [esp + 0x64] */ r_edx = (u32)(r_esp+0x64u);
    /* 00508781: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00508783: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x508788u); f_00830aa0();
    /* 00508788: fld dword ptr [esp + 0x70] */ FPUSH(R_F32((u32)(r_esp+0x70u)));
    /* 0050878c: fchs  */ ST(0) = -ST(0);
    /* 0050878e: fstp dword ptr [esp + 0x70] */ W_F32((u32)(r_esp+0x70u), ST(0)); FPOP();
    /* 00508792: fld dword ptr [esp + 0x74] */ FPUSH(R_F32((u32)(r_esp+0x74u)));
    /* 00508796: jmp 0x5087b4 */ goto L_005087b4;
L_00508798:; BB(0x00508798);
    /* 00508798: mov eax, dword ptr [esp + 0x60] */ r_eax = R32((u32)(r_esp+0x60u));
    /* 0050879c: mov edx, dword ptr [esp + 0x64] */ r_edx = R32((u32)(r_esp+0x64u));
    /* 005087a0: fld dword ptr [esp + 0x68] */ FPUSH(R_F32((u32)(r_esp+0x68u)));
    /* 005087a4: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 005087a8: mov eax, dword ptr [esp + 0x68] */ r_eax = R32((u32)(r_esp+0x68u));
    /* 005087ac: mov dword ptr [esp + 0x70], edx */ W32((u32)(r_esp+0x70u), r_edx);
    /* 005087b0: mov dword ptr [esp + 0x74], eax */ W32((u32)(r_esp+0x74u), r_eax);
L_005087b4:; BB(0x005087b4);
    /* 005087b4: fcomp dword ptr [0x920048] */ fx_compare(ST(0), R_F32((u32)(0x920048u))); FPOP();
    /* 005087ba: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005087bc: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005087bd: ja 0x508921 */ if ((!fC&&!fZ)) goto L_00508921;
L_005087c3:; BB(0x005087c3);
    /* 005087c3: mov ecx, dword ptr [edi + 0x94] */ r_ecx = R32((u32)(r_edi+0x94u));
    /* 005087c9: call 0x82b438 */ r_esp -= 4; W32(r_esp, 0x5087ceu); f_0082b438();
    /* 005087ce: fld dword ptr [esp + 0x74] */ FPUSH(R_F32((u32)(r_esp+0x74u)));
    /* 005087d2: fld dword ptr [0x920044] */ FPUSH(R_F32((u32)(0x920044u)));
    /* 005087d8: fld dword ptr [esp + 0x6c] */ FPUSH(R_F32((u32)(r_esp+0x6cu)));
    /* 005087dc: fld dword ptr [esp + 0x70] */ FPUSH(R_F32((u32)(r_esp+0x70u)));
    /* 005087e0: movsx eax, byte ptr [edi + 0x99] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edi+0x99u));
    /* 005087e7: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 005087e9: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 005087ed: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005087ef: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 005087f3: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 005087f7: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 005087fb: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005087fe: je 0x508948 */ if (fZ) goto L_00508948;
L_00508804:; BB(0x00508804);
    /* 00508804: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 00508808: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 0050880c: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00508810: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 00508814: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00508816: fchs  */ ST(0) = -ST(0);
    /* 00508818: fdivr dword ptr [esp + 0x18] */ ST(0) = R_F32((u32)(r_esp+0x18u)) / ST(0);
    /* 0050881c: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 00508820: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00508822: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 00508824: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 00508826: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00508828: fmul st(4), st(0) */ ST(4) = ST(4) * ST(0);
    /* 0050882a: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0050882c: fadd dword ptr [esp] */ ST(0) = ST(0) + R_F32((u32)(r_esp));
    /* 0050882f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00508831: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00508833: fadd dword ptr [esp + 4] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x4u));
    /* 00508837: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00508839: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 0050883d: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0050883f: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 00508843: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 00508847: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00508849: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 0050884d: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
L_00508851:; BB(0x00508851);
    /* 00508851: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 00508855: fmul dword ptr [ebx*8 + 0xa101d4] */ ST(0) = ST(0) * R_F32((u32)(r_ebx*8+0xa101d4u));
    /* 0050885c: fmul dword ptr [edi + 0x8c] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0x8cu));
    /* 00508862: movsx ecx, word ptr [edi + 0x9a] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edi+0x9au));
    /* 00508869: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 0050886d: fmul dword ptr [ebx*8 + 0xa101d8] */ ST(0) = ST(0) * R_F32((u32)(r_ebx*8+0xa101d8u));
    /* 00508874: fmul dword ptr [edi + 0x90] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0x90u));
    /* 0050887a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0050887c: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 00508880: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 00508884: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x508889u); f_0082ddd8();
    /* 00508889: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0050888c: movsx ecx, word ptr [edi + 0x9a] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edi+0x9au));
    /* 00508893: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x508898u); f_0082dcbc();
    /* 00508898: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 0050889c: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 005088a0: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 005088a4: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005088a6: fadd st(0) */ ST(0) = ST(0) + ST(0);
    /* 005088a8: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 005088aa: fchs  */ ST(0) = -ST(0);
    /* 005088ac: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005088ae: fchs  */ ST(0) = -ST(0);
    /* 005088b0: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 005088b2: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 005088b5: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 005088b7: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 005088bb: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 005088bf: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 005088c1: faddp st(4) */ ST(4) = ST(4) + ST(0); FPOP();
    /* 005088c3: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 005088c7: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 005088c9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005088cb: fadd st(0) */ ST(0) = ST(0) + ST(0);
    /* 005088cd: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 005088cf: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 005088d1: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 005088d5: fsubrp st(4) */ ST(4) = ST(0) - ST(4); FPOP();
    /* 005088d7: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 005088db: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 005088dd: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 005088e1: fsubp st(3) */ ST(3) = ST(3) - ST(0); FPOP();
    /* 005088e3: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005088e5: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 005088e9: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 005088ed: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 005088f1: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 005088f4: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 005088f6: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 005088fa: lea ecx, [esp + 0x20] */ r_ecx = (u32)(r_esp+0x20u);
    /* 005088fe: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00508900: fchs  */ ST(0) = -ST(0);
    /* 00508902: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00508904: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00508906: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00508908: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0050890a: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 0050890c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0050890e: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 00508912: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 00508916: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 0050891a: call 0x82bb74 */ r_esp -= 4; W32(r_esp, 0x50891fu); f_0082bb74();
    /* 0050891f: jmp 0x508931 */ goto L_00508931;
L_00508921:; BB(0x00508921);
    /* 00508921: movsx eax, byte ptr [edi + 0x99] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edi+0x99u));
    /* 00508928: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050892b: je 0x5087c3 */ if (fZ) goto L_005087c3;
L_00508931:; BB(0x00508931);
    /* 00508931: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x508936u); f_004ac444();
    /* 00508936: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x50893bu); f_0082dab0();
    /* 0050893b: call 0x7a9044 */ r_esp -= 4; W32(r_esp, 0x508940u); f_007a9044();
    /* 00508940: add esp, 0x78 */ {  u32 a = r_esp; u32 b = 0x78u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00508943: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00508944: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00508945: ret 4 */ FN_RET(0x0050864c); r_esp += 8; return;
L_00508948:; BB(0x00508948);
    /* 00508948: fld dword ptr [0x920044] */ FPUSH(R_F32((u32)(0x920044u)));
    /* 0050894e: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 00508952: jmp 0x508851 */ goto L_00508851;
}

void f_0050884c(void)
{
    FN_ENTER(0x0050884c);
    /* 0050884c: adc cl, bl */ { u32 c = fC; u32 a = (u8)r_ecx; u32 b = (u8)r_ebx; u32 r = (a + b + c) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0050884e: pop esp */ { u32 v = R32(r_esp); r_esp += 4; r_esp = v; }
    /* 0050884f: and al, 0xc */ {  u32 a = (u8)r_eax; u32 b = 0xcu; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00508851: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 00508855: fmul dword ptr [ebx*8 + 0xa101d4] */ ST(0) = ST(0) * R_F32((u32)(r_ebx*8+0xa101d4u));
    /* 0050885c: fmul dword ptr [edi + 0x8c] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0x8cu));
    /* 00508862: movsx ecx, word ptr [edi + 0x9a] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edi+0x9au));
    /* 00508869: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 0050886d: fmul dword ptr [ebx*8 + 0xa101d8] */ ST(0) = ST(0) * R_F32((u32)(r_ebx*8+0xa101d8u));
    /* 00508874: fmul dword ptr [edi + 0x90] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0x90u));
    /* 0050887a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0050887c: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 00508880: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 00508884: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x508889u); f_0082ddd8();
    /* 00508889: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0050888c: movsx ecx, word ptr [edi + 0x9a] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edi+0x9au));
    /* 00508893: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x508898u); f_0082dcbc();
    /* 00508898: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 0050889c: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 005088a0: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 005088a4: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005088a6: fadd st(0) */ ST(0) = ST(0) + ST(0);
    /* 005088a8: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 005088aa: fchs  */ ST(0) = -ST(0);
    /* 005088ac: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005088ae: fchs  */ ST(0) = -ST(0);
    /* 005088b0: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 005088b2: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 005088b5: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 005088b7: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 005088bb: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 005088bf: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 005088c1: faddp st(4) */ ST(4) = ST(4) + ST(0); FPOP();
    /* 005088c3: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 005088c7: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 005088c9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005088cb: fadd st(0) */ ST(0) = ST(0) + ST(0);
    /* 005088cd: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 005088cf: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 005088d1: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 005088d5: fsubrp st(4) */ ST(4) = ST(0) - ST(4); FPOP();
    /* 005088d7: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 005088db: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 005088dd: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 005088e1: fsubp st(3) */ ST(3) = ST(3) - ST(0); FPOP();
    /* 005088e3: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005088e5: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 005088e9: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 005088ed: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 005088f1: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 005088f4: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 005088f6: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 005088fa: lea ecx, [esp + 0x20] */ r_ecx = (u32)(r_esp+0x20u);
    /* 005088fe: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00508900: fchs  */ ST(0) = -ST(0);
    /* 00508902: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00508904: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00508906: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00508908: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0050890a: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 0050890c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0050890e: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 00508912: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 00508916: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 0050891a: call 0x82bb74 */ r_esp -= 4; W32(r_esp, 0x50891fu); f_0082bb74();
    /* 0050891f: jmp 0x508931 */ goto L_00508931;
L_00508931:; BB(0x00508931);
    /* 00508931: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x508936u); f_004ac444();
    /* 00508936: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x50893bu); f_0082dab0();
    /* 0050893b: call 0x7a9044 */ r_esp -= 4; W32(r_esp, 0x508940u); f_007a9044();
    /* 00508940: add esp, 0x78 */ {  u32 a = r_esp; u32 b = 0x78u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00508943: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00508944: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00508945: ret 4 */ FN_RET(0x0050884c); r_esp += 8; return;
}

void f_00508958(void) /* sub_508958 */
{
    FN_ENTER(0x00508958);
    /* 00508958: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00508959: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0050895c: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0050895e: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 00508962: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00508964: je 0x5089d7 */ if (fZ) goto L_005089d7;
L_00508966:; BB(0x00508966);
    /* 00508966: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00508968: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0050896a: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0050896f: mov edx, 4 */ r_edx = 0x4u;
    /* 00508974: call 0x836248 */ r_esp -= 4; W32(r_esp, 0x508979u); f_00836248();
    /* 00508979: fld dword ptr [0x920040] */ FPUSH(R_F32((u32)(0x920040u)));
    /* 0050897f: fld dword ptr [0x92003c] */ FPUSH(R_F32((u32)(0x92003cu)));
    /* 00508985: mov eax, dword ptr [ebx + 0x94] */ r_eax = R32((u32)(r_ebx+0x94u));
    /* 0050898b: mov edx, eax */ r_edx = r_eax;
    /* 0050898d: shr edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00508990: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 00508993: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 0050899a: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 0050899e: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 005089a2: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 005089a4: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 005089a6: mov ecx, eax */ r_ecx = r_eax;
    /* 005089a8: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 005089ac: shr ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 005089af: movzx ecx, cl */ r_ecx = (u32)(u8)r_ecx;
    /* 005089b2: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005089b5: mov dword ptr [esp + 0x18], ecx */ W32((u32)(r_esp+0x18u), r_ecx);
    /* 005089b9: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 005089bd: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 005089bf: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 005089c1: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 005089c5: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 005089c9: fdivrp st(2) */ ST(2) = ST(0) / ST(2); FPOP();
    /* 005089cb: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 005089cf: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 005089d1: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 005089d5: jmp 0x508a20 */ goto L_00508a20;
L_005089d7:; BB(0x005089d7);
    /* 005089d7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005089d9: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005089db: mov ecx, 1 */ r_ecx = 0x1u;
    /* 005089e0: mov edx, 4 */ r_edx = 0x4u;
    /* 005089e5: call 0x836248 */ r_esp -= 4; W32(r_esp, 0x5089eau); f_00836248();
    /* 005089ea: movzx eax, byte ptr [ebx + 0x97] */ r_eax = (u32)R8((u32)(r_ebx+0x97u));
    /* 005089f1: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 005089f9: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 005089fd: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 00508a01: fdiv dword ptr [0x92003c] */ ST(0) = ST(0) / R_F32((u32)(0x92003cu));
    /* 00508a07: fadd dword ptr [0x920040] */ ST(0) = ST(0) + R_F32((u32)(0x920040u));
    /* 00508a0d: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 00508a15: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00508a18: mov dword ptr [esp + 0xc], 0 */ W32((u32)(r_esp+0xcu), 0x0u);
L_00508a20:; BB(0x00508a20);
    /* 00508a20: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00508a23: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00508a24: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x508a29u); f_0082d710();
    /* 00508a29: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00508a2c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00508a2d: ret 4 */ FN_RET(0x00508958); r_esp += 8; return;
}

void f_00508a30(void) /* sub_508A30 */
{
    FN_ENTER(0x00508a30);
    /* 00508a30: movzx eax, word ptr [ecx + 0x1c] */ r_eax = (u32)R16((u32)(r_ecx+0x1cu));
    /* 00508a34: mov edx, dword ptr [eax*4 + 0xaaee20] */ r_edx = R32((u32)(r_eax*4+0xaaee20u));
    /* 00508a3b: mov eax, dword ptr [edx + 0x28] */ r_eax = R32((u32)(r_edx+0x28u));
    /* 00508a3e: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00508a40: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00508a42: je 0x508a4a */ if (fZ) goto L_00508a4a;
L_00508a44:; BB(0x00508a44);
    /* 00508a44: mov eax, 1 */ r_eax = 0x1u;
    /* 00508a49: ret  */ FN_RET(0x00508a30); r_esp += 4; return;
L_00508a4a:; BB(0x00508a4a);
    /* 00508a4a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00508a4c: ret  */ FN_RET(0x00508a30); r_esp += 4; return;
}

void f_00508a50(void) /* sub_508A50 */
{
    FN_ENTER(0x00508a50);
    /* 00508a50: mov ecx, dword ptr [0xa72c08] */ r_ecx = R32((u32)(0xa72c08u));
    /* 00508a56: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00508a58: je 0x508a6d */ if (fZ) goto L_00508a6d;
L_00508a5a:; BB(0x00508a5a);
    /* 00508a5a: je 0x508a63 */ if (fZ) goto L_00508a63;
L_00508a5c:; BB(0x00508a5c);
    /* 00508a5c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00508a5e: call 0x508320 */ r_esp -= 4; W32(r_esp, 0x508a63u); f_00508320();
L_00508a63:; BB(0x00508a63);
    /* 00508a63: mov dword ptr [0xa72c08], 0 */ W32((u32)(0xa72c08u), 0x0u);
L_00508a6d:; BB(0x00508a6d);
    /* 00508a6d: ret  */ FN_RET(0x00508a50); r_esp += 4; return;
}

void f_00508a70(void) /* sub_508A70 */
{
    FN_ENTER(0x00508a70);
    /* 00508a70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00508a71: mov ebp, esp */ r_ebp = r_esp;
    /* 00508a73: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00508a75: push 0x8d3b64 */ { u32 v = 0x8d3b64u; r_esp -= 4; W32(r_esp, v); }
    /* 00508a7a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00508a80: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00508a81: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00508a88: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00508a8b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00508a8e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00508a91: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00508a94: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00508a97: mov eax, dword ptr [0xa72c08] */ r_eax = R32((u32)(0xa72c08u));
    /* 00508a9c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00508a9e: je 0x508aae */ if (fZ) goto L_00508aae;
L_00508aa0:; BB(0x00508aa0);
    /* 00508aa0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00508aa3: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00508aaa: mov esp, ebp */ r_esp = r_ebp;
    /* 00508aac: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00508aad: ret  */ FN_RET(0x00508a70); r_esp += 4; return;
L_00508aae:; BB(0x00508aae);
    /* 00508aae: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00508ab5: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00508ab7: call 0x7a8b68 */ r_esp -= 4; W32(r_esp, 0x508abcu); f_007a8b68();
    /* 00508abc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00508abd: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00508ac0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00508ac2: je 0x508af0 */ if (fZ) goto L_00508af0;
L_00508ac4:; BB(0x00508ac4);
    /* 00508ac4: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00508acb: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00508ad2: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00508ad5: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00508ad7: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00508ada: call 0x7a89dc */ r_esp -= 4; W32(r_esp, 0x508adfu); f_007a89dc();
    /* 00508adf: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00508ae2: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00508ae9:; BB(0x00508ae9);
    /* 00508ae9: mov dword ptr [0xa72c08], eax */ W32((u32)(0xa72c08u), r_eax);
    /* 00508aee: jmp 0x508aa0 */ goto L_00508aa0;
L_00508af0:; BB(0x00508af0);
    /* 00508af0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00508af2: jmp 0x508ae9 */ goto L_00508ae9;
}

void f_00508af4(void) /* sub_508AF4 */
{
    FN_ENTER(0x00508af4);
    /* 00508af4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00508af5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00508af7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00508af9: call 0x508b18 */ r_esp -= 4; W32(r_esp, 0x508afeu); f_00508b18();
    /* 00508afe: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00508b02: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00508b04: jne 0x508b0a */ if (!fZ) goto L_00508b0a;
L_00508b06:; BB(0x00508b06);
    /* 00508b06: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00508b07: ret 4 */ FN_RET(0x00508af4); r_esp += 8; return;
L_00508b0a:; BB(0x00508b0a);
    /* 00508b0a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00508b0b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x508b10u); f_005c2f74();
    /* 00508b10: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00508b11: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00508b12: ret 4 */ FN_RET(0x00508af4); r_esp += 8; return;
}

void f_00508b18(void) /* sub_508B18 */
{
    FN_ENTER(0x00508b18);
    /* 00508b18: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00508b19: mov ebp, esp */ r_ebp = r_esp;
    /* 00508b1b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00508b1d: push 0x8d3b80 */ { u32 v = 0x8d3b80u; r_esp -= 4; W32(r_esp, v); }
    /* 00508b22: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00508b28: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00508b29: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00508b30: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00508b33: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00508b36: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00508b39: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00508b3c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00508b3f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00508b42: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00508b45: mov dword ptr [ecx], 0xaff308 */ W32((u32)(r_ecx), 0xaff308u);
    /* 00508b4b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00508b52: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x508b57u); f_008171e8();
    /* 00508b57: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00508b5a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00508b61: mov esp, ebp */ r_esp = r_ebp;
    /* 00508b63: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00508b64: ret  */ FN_RET(0x00508b18); r_esp += 4; return;
}

void f_00508b68(void) /* sub_508B68 */
{
    FN_ENTER(0x00508b68);
    /* 00508b68: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00508b69: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00508b6a: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00508b6c: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 00508b70: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 00508b76: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00508b78: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x508b7du); f_008193cc();
    /* 00508b7d: mov dword ptr [ebp], 0xaff308 */ W32((u32)(r_ebp), 0xaff308u);
    /* 00508b84: mov edx, dword ptr [0x9ba90c] */ r_edx = R32((u32)(0x9ba90cu));
    /* 00508b8a: mov dword ptr [ebp + 4], edx */ W32((u32)(r_ebp+0x4u), r_edx);
    /* 00508b8d: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 00508b91: mov dword ptr [ebp + 0x44], 0x3f800000 */ W32((u32)(r_ebp+0x44u), 0x3f800000u);
    /* 00508b98: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00508b9a: mov dword ptr [ebp + 0x50], eax */ W32((u32)(r_ebp+0x50u), r_eax);
    /* 00508b9d: mov dword ptr [ebp + 0x48], 0x3f800000 */ W32((u32)(r_ebp+0x48u), 0x3f800000u);
    /* 00508ba4: mov dword ptr [ebp + 0x54], eax */ W32((u32)(r_ebp+0x54u), r_eax);
    /* 00508ba7: mov dword ptr [ebp + 0x58], eax */ W32((u32)(r_ebp+0x58u), r_eax);
    /* 00508baa: mov dword ptr [ebp + 0x4c], eax */ W32((u32)(r_ebp+0x4cu), r_eax);
    /* 00508bad: mov dword ptr [ebp + 0x1c], 0 */ W32((u32)(r_ebp+0x1cu), 0x0u);
    /* 00508bb4: mov dword ptr [ebp + 0x20], eax */ W32((u32)(r_ebp+0x20u), r_eax);
    /* 00508bb7: mov dword ptr [ebp + 0x28], edx */ W32((u32)(r_ebp+0x28u), r_edx);
    /* 00508bba: mov dword ptr [ebp + 0x24], 0x3f800000 */ W32((u32)(r_ebp+0x24u), 0x3f800000u);
    /* 00508bc1: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00508bc3: mov dword ptr [ebp + 0x6c], edx */ W32((u32)(r_ebp+0x6cu), r_edx);
    /* 00508bc6: mov edx, dword ptr [ebx + 4] */ r_edx = R32((u32)(r_ebx+0x4u));
    /* 00508bc9: mov dword ptr [ebp + 0x70], edx */ W32((u32)(r_ebp+0x70u), r_edx);
    /* 00508bcc: mov edx, 0xffff */ r_edx = 0xffffu;
    /* 00508bd1: mov ebx, dword ptr [ebx + 8] */ r_ebx = R32((u32)(r_ebx+0x8u));
    /* 00508bd4: mov dword ptr [ebp + 0x74], ebx */ W32((u32)(r_ebp+0x74u), r_ebx);
    /* 00508bd7: mov word ptr [ebp + 0x2c], ax */ W16((u32)(r_ebp+0x2cu), (u16)r_eax);
    /* 00508bdb: mov word ptr [ebp + 0x2e], ax */ W16((u32)(r_ebp+0x2eu), (u16)r_eax);
    /* 00508bdf: mov word ptr [ebp + 0x30], dx */ W16((u32)(r_ebp+0x30u), (u16)r_edx);
    /* 00508be3: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 00508be7: mov dword ptr [ebp + 0x78], eax */ W32((u32)(r_ebp+0x78u), r_eax);
    /* 00508bea: mov dword ptr [ebp + 0x7c], eax */ W32((u32)(r_ebp+0x7cu), r_eax);
    /* 00508bed: mov dword ptr [ebp + 0x80], eax */ W32((u32)(r_ebp+0x80u), r_eax);
    /* 00508bf3: mov dword ptr [ebp + 0x34], edx */ W32((u32)(r_ebp+0x34u), r_edx);
    /* 00508bf6: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 00508bfa: mov dword ptr [ebp + 0x38], edx */ W32((u32)(r_ebp+0x38u), r_edx);
    /* 00508bfd: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 00508c01: mov dword ptr [ebp + 0x3c], edx */ W32((u32)(r_ebp+0x3cu), r_edx);
    /* 00508c04: mov dword ptr [ebp + 0x40], eax */ W32((u32)(r_ebp+0x40u), r_eax);
    /* 00508c07: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 00508c0b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00508c0d: je 0x508c14 */ if (fZ) goto L_00508c14;
L_00508c0f:; BB(0x00508c0f);
    /* 00508c0f: mov dword ptr [ebp + 0x5c], ebp */ W32((u32)(r_ebp+0x5cu), r_ebp);
    /* 00508c12: jmp 0x508c1c */ goto L_00508c1c;
L_00508c14:; BB(0x00508c14);
    /* 00508c14: mov eax, dword ptr [0xaca344] */ r_eax = R32((u32)(0xaca344u));
    /* 00508c19: mov dword ptr [ebp + 0x5c], eax */ W32((u32)(r_ebp+0x5cu), r_eax);
L_00508c1c:; BB(0x00508c1c);
    /* 00508c1c: mov edx, 0x3f800000 */ r_edx = 0x3f800000u;
    /* 00508c21: mov eax, 0x3f800000 */ r_eax = 0x3f800000u;
    /* 00508c26: mov dword ptr [ebp + 0x64], edx */ W32((u32)(r_ebp+0x64u), r_edx);
    /* 00508c29: mov dword ptr [ebp + 0x68], eax */ W32((u32)(r_ebp+0x68u), r_eax);
    /* 00508c2c: mov eax, ebp */ r_eax = r_ebp;
    /* 00508c2e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00508c2f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00508c30: ret 0x18 */ FN_RET(0x00508b68); r_esp += 28; return;
}

void f_00508c34(void) /* sub_508C34 */
{
    FN_ENTER(0x00508c34);
    /* 00508c34: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00508c35: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00508c36: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00508c37: mov esi, ecx */ r_esi = r_ecx;
    /* 00508c39: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 00508c3d: movzx ebp, word ptr [esp + 0x28] */ r_ebp = (u32)R16((u32)(r_esp+0x28u));
    /* 00508c42: mov ecx, esi */ r_ecx = r_esi;
    /* 00508c44: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 00508c4a: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x508c4fu); f_008193cc();
    /* 00508c4f: mov dword ptr [esi], 0xaff308 */ W32((u32)(r_esi), 0xaff308u);
    /* 00508c55: mov edx, dword ptr [0x9ba90c] */ r_edx = R32((u32)(0x9ba90cu));
    /* 00508c5b: mov dword ptr [esi + 4], edx */ W32((u32)(r_esi+0x4u), r_edx);
    /* 00508c5e: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 00508c62: mov dword ptr [esi + 0x44], 0x3f800000 */ W32((u32)(r_esi+0x44u), 0x3f800000u);
    /* 00508c69: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00508c6b: mov dword ptr [esi + 0x50], eax */ W32((u32)(r_esi+0x50u), r_eax);
    /* 00508c6e: mov dword ptr [esi + 0x48], 0x3f800000 */ W32((u32)(r_esi+0x48u), 0x3f800000u);
    /* 00508c75: mov dword ptr [esi + 0x54], eax */ W32((u32)(r_esi+0x54u), r_eax);
    /* 00508c78: mov dword ptr [esi + 0x58], eax */ W32((u32)(r_esi+0x58u), r_eax);
    /* 00508c7b: mov dword ptr [esi + 0x4c], eax */ W32((u32)(r_esi+0x4cu), r_eax);
    /* 00508c7e: mov dword ptr [esi + 0x1c], 0 */ W32((u32)(r_esi+0x1cu), 0x0u);
    /* 00508c85: mov dword ptr [esi + 0x20], eax */ W32((u32)(r_esi+0x20u), r_eax);
    /* 00508c88: mov dword ptr [esi + 0x28], edx */ W32((u32)(r_esi+0x28u), r_edx);
    /* 00508c8b: mov dword ptr [esi + 0x24], 0x3f800000 */ W32((u32)(r_esi+0x24u), 0x3f800000u);
    /* 00508c92: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00508c94: mov dword ptr [esi + 0x6c], edx */ W32((u32)(r_esi+0x6cu), r_edx);
    /* 00508c97: mov edx, dword ptr [ebx + 4] */ r_edx = R32((u32)(r_ebx+0x4u));
    /* 00508c9a: mov dword ptr [esi + 0x70], edx */ W32((u32)(r_esi+0x70u), r_edx);
    /* 00508c9d: mov edx, 0xffff */ r_edx = 0xffffu;
    /* 00508ca2: mov ebx, dword ptr [ebx + 8] */ r_ebx = R32((u32)(r_ebx+0x8u));
    /* 00508ca5: mov dword ptr [esi + 0x74], ebx */ W32((u32)(r_esi+0x74u), r_ebx);
    /* 00508ca8: mov word ptr [esi + 0x2c], bp */ W16((u32)(r_esi+0x2cu), (u16)r_ebp);
    /* 00508cac: mov word ptr [esi + 0x2e], ax */ W16((u32)(r_esi+0x2eu), (u16)r_eax);
    /* 00508cb0: mov word ptr [esi + 0x30], dx */ W16((u32)(r_esi+0x30u), (u16)r_edx);
    /* 00508cb4: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 00508cb8: mov dword ptr [esi + 0x78], eax */ W32((u32)(r_esi+0x78u), r_eax);
    /* 00508cbb: mov dword ptr [esi + 0x7c], eax */ W32((u32)(r_esi+0x7cu), r_eax);
    /* 00508cbe: mov dword ptr [esi + 0x80], eax */ W32((u32)(r_esi+0x80u), r_eax);
    /* 00508cc4: mov dword ptr [esi + 0x34], edx */ W32((u32)(r_esi+0x34u), r_edx);
    /* 00508cc7: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 00508ccb: mov dword ptr [esi + 0x38], edx */ W32((u32)(r_esi+0x38u), r_edx);
    /* 00508cce: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 00508cd2: mov dword ptr [esi + 0x3c], edx */ W32((u32)(r_esi+0x3cu), r_edx);
    /* 00508cd5: mov dword ptr [esi + 0x40], eax */ W32((u32)(r_esi+0x40u), r_eax);
    /* 00508cd8: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 00508cdc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00508cde: je 0x508ce5 */ if (fZ) goto L_00508ce5;
L_00508ce0:; BB(0x00508ce0);
    /* 00508ce0: mov dword ptr [esi + 0x5c], esi */ W32((u32)(r_esi+0x5cu), r_esi);
    /* 00508ce3: jmp 0x508d11 */ goto L_00508d11;
L_00508ce5:; BB(0x00508ce5);
    /* 00508ce5: test ebp, 0x800 */ {  u32 a = r_ebp; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00508ceb: je 0x508d09 */ if (fZ) goto L_00508d09;
L_00508ced:; BB(0x00508ced);
    /* 00508ced: test ebp, 0x4000 */ {  u32 a = r_ebp; u32 b = 0x4000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00508cf3: je 0x508cff */ if (fZ) goto L_00508cff;
L_00508cf5:; BB(0x00508cf5);
    /* 00508cf5: mov eax, dword ptr [0xaca328] */ r_eax = R32((u32)(0xaca328u));
    /* 00508cfa: mov dword ptr [esi + 0x5c], eax */ W32((u32)(r_esi+0x5cu), r_eax);
    /* 00508cfd: jmp 0x508d11 */ goto L_00508d11;
L_00508cff:; BB(0x00508cff);
    /* 00508cff: mov eax, dword ptr [0xaca344] */ r_eax = R32((u32)(0xaca344u));
    /* 00508d04: mov dword ptr [esi + 0x5c], eax */ W32((u32)(r_esi+0x5cu), r_eax);
    /* 00508d07: jmp 0x508d11 */ goto L_00508d11;
L_00508d09:; BB(0x00508d09);
    /* 00508d09: mov eax, dword ptr [0xaca344] */ r_eax = R32((u32)(0xaca344u));
    /* 00508d0e: mov dword ptr [esi + 0x5c], eax */ W32((u32)(r_esi+0x5cu), r_eax);
L_00508d11:; BB(0x00508d11);
    /* 00508d11: mov edx, 0x3f800000 */ r_edx = 0x3f800000u;
    /* 00508d16: mov eax, 0x3f800000 */ r_eax = 0x3f800000u;
    /* 00508d1b: mov dword ptr [esi + 0x64], edx */ W32((u32)(r_esi+0x64u), r_edx);
    /* 00508d1e: mov dword ptr [esi + 0x68], eax */ W32((u32)(r_esi+0x68u), r_eax);
    /* 00508d21: mov eax, esi */ r_eax = r_esi;
    /* 00508d23: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00508d24: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00508d25: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00508d26: ret 0x1c */ FN_RET(0x00508c34); r_esp += 32; return;
}

void f_00508d2c(void) /* sub_508D2C */
{
    FN_ENTER(0x00508d2c);
    /* 00508d2c: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00508d30: mov dword ptr [ecx + 0x28], eax */ W32((u32)(r_ecx+0x28u), r_eax);
    /* 00508d33: mov dword ptr [ecx + 0x1c], 0 */ W32((u32)(r_ecx+0x1cu), 0x0u);
    /* 00508d3a: mov dword ptr [ecx + 0x20], 0 */ W32((u32)(r_ecx+0x20u), 0x0u);
    /* 00508d41: mov dword ptr [ecx + 0x24], 0x3f800000 */ W32((u32)(r_ecx+0x24u), 0x3f800000u);
    /* 00508d48: ret 4 */ FN_RET(0x00508d2c); r_esp += 8; return;
}

void f_00508d4c(void) /* sub_508D4C */
{
    FN_ENTER(0x00508d4c);
    /* 00508d4c: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00508d50: cmp eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00508d55: mov dword ptr [ecx + 0x1c], 0 */ W32((u32)(r_ecx+0x1cu), 0x0u);
    /* 00508d5c: mov dword ptr [ecx + 0x20], 0 */ W32((u32)(r_ecx+0x20u), 0x0u);
    /* 00508d63: mov dword ptr [ecx + 0x24], 0x3f800000 */ W32((u32)(r_ecx+0x24u), 0x3f800000u);
    /* 00508d6a: jl 0x508d91 */ if ((fS!=fO)) goto L_00508d91;
L_00508d6c:; BB(0x00508d6c);
    /* 00508d6c: lea edx, [eax - 0x200] */ r_edx = (u32)(r_eax+0xfffffe00u);
    /* 00508d72: lea eax, [eax + eax*4 - 0xa00] */ r_eax = (u32)(r_eax+r_eax*4+0xfffff600u);
    /* 00508d79: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00508d7b: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00508d7d: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00508d7f: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00508d81: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00508d83: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00508d85: add eax, dword ptr [0xa72ccc] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa72cccu)); u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00508d8b: mov dword ptr [ecx + 0x28], eax */ W32((u32)(r_ecx+0x28u), r_eax);
    /* 00508d8e: ret 4 */ FN_RET(0x00508d4c); r_esp += 8; return;
L_00508d91:; BB(0x00508d91);
    /* 00508d91: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 00508d94: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00508d96: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00508d98: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00508d9a: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00508d9c: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00508d9e: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00508da0: add edx, dword ptr [0xa72cd0] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa72cd0u)); u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00508da6: mov dword ptr [ecx + 0x28], edx */ W32((u32)(r_ecx+0x28u), r_edx);
    /* 00508da9: ret 4 */ FN_RET(0x00508d4c); r_esp += 8; return;
}

void f_00508db8(void) /* sub_508DB8 */
{
    FN_ENTER(0x00508db8);
    /* 00508db8: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00508dbc: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00508dbe: mov dword ptr [ecx + 0x6c], edx */ W32((u32)(r_ecx+0x6cu), r_edx);
    /* 00508dc1: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00508dc4: mov dword ptr [ecx + 0x70], edx */ W32((u32)(r_ecx+0x70u), r_edx);
    /* 00508dc7: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 00508dca: mov dword ptr [ecx + 0x74], eax */ W32((u32)(r_ecx+0x74u), r_eax);
    /* 00508dcd: ret 4 */ FN_RET(0x00508db8); r_esp += 8; return;
}

void f_00508dd0(void) /* sub_508DD0 */
{
    FN_ENTER(0x00508dd0);
    /* 00508dd0: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00508dd4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00508dd6: mov dword ptr [ecx + 0x78], edx */ W32((u32)(r_ecx+0x78u), r_edx);
    /* 00508dd9: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00508ddc: mov dword ptr [ecx + 0x7c], edx */ W32((u32)(r_ecx+0x7cu), r_edx);
    /* 00508ddf: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 00508de2: mov dword ptr [ecx + 0x80], eax */ W32((u32)(r_ecx+0x80u), r_eax);
    /* 00508de8: ret 4 */ FN_RET(0x00508dd0); r_esp += 8; return;
}

void f_00508dec(void) /* sub_508DEC */
{
    FN_ENTER(0x00508dec);
    /* 00508dec: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00508ded: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00508def: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00508df3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00508df5: je 0x508ed4 */ if (fZ) goto L_00508ed4;
L_00508dfb:; BB(0x00508dfb);
    /* 00508dfb: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00508dfd: mov dword ptr [ebx + 0x90], edx */ W32((u32)(r_ebx+0x90u), r_edx);
    /* 00508e03: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00508e06: mov dword ptr [ebx + 0x94], edx */ W32((u32)(r_ebx+0x94u), r_edx);
    /* 00508e0c: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 00508e0f: mov dword ptr [ebx + 0x98], edx */ W32((u32)(r_ebx+0x98u), r_edx);
    /* 00508e15: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 00508e18: mov dword ptr [ebx + 0x9c], edx */ W32((u32)(r_ebx+0x9cu), r_edx);
    /* 00508e1e: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 00508e21: mov dword ptr [ebx + 0xa0], edx */ W32((u32)(r_ebx+0xa0u), r_edx);
    /* 00508e27: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 00508e2a: mov dword ptr [ebx + 0xa4], edx */ W32((u32)(r_ebx+0xa4u), r_edx);
    /* 00508e30: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 00508e33: mov dword ptr [ebx + 0xa8], edx */ W32((u32)(r_ebx+0xa8u), r_edx);
    /* 00508e39: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 00508e3c: mov dword ptr [ebx + 0xac], edx */ W32((u32)(r_ebx+0xacu), r_edx);
    /* 00508e42: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 00508e45: mov dword ptr [ebx + 0xb0], edx */ W32((u32)(r_ebx+0xb0u), r_edx);
    /* 00508e4b: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 00508e4e: mov dword ptr [ebx + 0xb4], edx */ W32((u32)(r_ebx+0xb4u), r_edx);
    /* 00508e54: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 00508e57: mov dword ptr [ebx + 0xb8], edx */ W32((u32)(r_ebx+0xb8u), r_edx);
    /* 00508e5d: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 00508e60: mov dword ptr [ebx + 0xbc], edx */ W32((u32)(r_ebx+0xbcu), r_edx);
    /* 00508e66: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 00508e69: mov dword ptr [ebx + 0xc0], edx */ W32((u32)(r_ebx+0xc0u), r_edx);
    /* 00508e6f: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 00508e72: mov dword ptr [ebx + 0xc4], edx */ W32((u32)(r_ebx+0xc4u), r_edx);
    /* 00508e78: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 00508e7b: mov dword ptr [ebx + 0xc8], edx */ W32((u32)(r_ebx+0xc8u), r_edx);
    /* 00508e81: mov eax, dword ptr [eax + 0x3c] */ r_eax = R32((u32)(r_eax+0x3cu));
    /* 00508e84: mov dword ptr [ebx + 0xcc], eax */ W32((u32)(r_ebx+0xccu), r_eax);
L_00508e8a:; BB(0x00508e8a);
    /* 00508e8a: mov eax, dword ptr [ebx + 0xc0] */ r_eax = R32((u32)(r_ebx+0xc0u));
    /* 00508e90: mov edx, dword ptr [ebx + 0xc4] */ r_edx = R32((u32)(r_ebx+0xc4u));
    /* 00508e96: mov dword ptr [ebx + 0xc0], 0 */ W32((u32)(r_ebx+0xc0u), 0x0u);
    /* 00508ea0: mov dword ptr [ebx + 0x6c], eax */ W32((u32)(r_ebx+0x6cu), r_eax);
    /* 00508ea3: mov eax, dword ptr [ebx + 0xc8] */ r_eax = R32((u32)(r_ebx+0xc8u));
    /* 00508ea9: mov dword ptr [ebx + 0xc4], 0 */ W32((u32)(r_ebx+0xc4u), 0x0u);
    /* 00508eb3: mov dword ptr [ebx + 0x70], edx */ W32((u32)(r_ebx+0x70u), r_edx);
    /* 00508eb6: mov dword ptr [ebx + 0x74], eax */ W32((u32)(r_ebx+0x74u), r_eax);
    /* 00508eb9: movzx eax, word ptr [ebx + 0x2e] */ r_eax = (u32)R16((u32)(r_ebx+0x2eu));
    /* 00508ebd: mov dword ptr [ebx + 0xc8], 0 */ W32((u32)(r_ebx+0xc8u), 0x0u);
    /* 00508ec7: or eax, 0xffff0020 */ {  u32 a = r_eax; u32 b = 0xffff0020u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00508ecc: mov word ptr [ebx + 0x2e], ax */ W16((u32)(r_ebx+0x2eu), (u16)r_eax);
    /* 00508ed0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00508ed1: ret 4 */ FN_RET(0x00508dec); r_esp += 8; return;
L_00508ed4:; BB(0x00508ed4);
    /* 00508ed4: lea ecx, [ebx + 0x90] */ r_ecx = (u32)(r_ebx+0x90u);
    /* 00508eda: call 0x831650 */ r_esp -= 4; W32(r_esp, 0x508edfu); f_00831650();
    /* 00508edf: jmp 0x508e8a */ goto L_00508e8a;
}

void f_00508ee4(void) /* sub_508EE4 */
{
    FN_ENTER(0x00508ee4);
    /* 00508ee4: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 00508ee8: movzx eax, word ptr [ecx + 0x2c] */ r_eax = (u32)R16((u32)(r_ecx+0x2cu));
    /* 00508eec: or eax, 0xffff0100 */ {  u32 a = r_eax; u32 b = 0xffff0100u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00508ef1: mov word ptr [ecx + 0x2c], ax */ W16((u32)(r_ecx+0x2cu), (u16)r_eax);
    /* 00508ef5: mov dword ptr [ecx + 0x4c], edx */ W32((u32)(r_ecx+0x4cu), r_edx);
    /* 00508ef8: ret 4 */ FN_RET(0x00508ee4); r_esp += 8; return;
}

void f_00508efc(void) /* sub_508EFC */
{
    FN_ENTER(0x00508efc);
    /* 00508efc: movzx eax, word ptr [esp + 4] */ r_eax = (u32)R16((u32)(r_esp+0x4u));
    /* 00508f01: or word ptr [ecx + 0x2c], ax */ { u32 ad = (u32)(r_ecx+0x2cu);  u32 a = R16(ad); u32 b = (u16)r_eax; u32 r = (a | b) & 0xffffu; W16(ad, r); fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00508f05: ret 4 */ FN_RET(0x00508efc); r_esp += 8; return;
}

void f_00508f08(void) /* sub_508F08 */
{
    FN_ENTER(0x00508f08);
    /* 00508f08: movzx eax, word ptr [esp + 4] */ r_eax = (u32)R16((u32)(r_esp+0x4u));
    /* 00508f0d: or word ptr [ecx + 0x2e], ax */ { u32 ad = (u32)(r_ecx+0x2eu);  u32 a = R16(ad); u32 b = (u16)r_eax; u32 r = (a | b) & 0xffffu; W16(ad, r); fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00508f11: ret 4 */ FN_RET(0x00508f08); r_esp += 8; return;
}

void f_00508f14(void) /* sub_508F14 */
{
    FN_ENTER(0x00508f14);
    /* 00508f14: movzx eax, word ptr [esp + 4] */ r_eax = (u32)R16((u32)(r_esp+0x4u));
    /* 00508f19: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00508f1e: je 0x508f24 */ if (fZ) goto L_00508f24;
L_00508f20:; BB(0x00508f20);
    /* 00508f20: mov word ptr [ecx + 0x30], ax */ W16((u32)(r_ecx+0x30u), (u16)r_eax);
L_00508f24:; BB(0x00508f24);
    /* 00508f24: ret 4 */ FN_RET(0x00508f14); r_esp += 8; return;
}

void f_00508f28(void) /* sub_508F28 */
{
    FN_ENTER(0x00508f28);
    /* 00508f28: movzx eax, word ptr [esp + 4] */ r_eax = (u32)R16((u32)(r_esp+0x4u));
    /* 00508f2d: not eax */ r_eax = ~r_eax;
    /* 00508f2f: and word ptr [ecx + 0x2c], ax */ { u32 ad = (u32)(r_ecx+0x2cu);  u32 a = R16(ad); u32 b = (u16)r_eax; u32 r = (a & b) & 0xffffu; W16(ad, r); fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00508f33: ret 4 */ FN_RET(0x00508f28); r_esp += 8; return;
}

void f_00508f38(void) /* sub_508F38 */
{
    FN_ENTER(0x00508f38);
    /* 00508f38: movzx eax, word ptr [esp + 4] */ r_eax = (u32)R16((u32)(r_esp+0x4u));
    /* 00508f3d: not eax */ r_eax = ~r_eax;
    /* 00508f3f: and word ptr [ecx + 0x2e], ax */ { u32 ad = (u32)(r_ecx+0x2eu);  u32 a = R16(ad); u32 b = (u16)r_eax; u32 r = (a & b) & 0xffffu; W16(ad, r); fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00508f43: ret 4 */ FN_RET(0x00508f38); r_esp += 8; return;
}

void f_00508f48(void) /* sub_508F48 */
{
    FN_ENTER(0x00508f48);
    /* 00508f48: movzx eax, word ptr [ecx + 0x2c] */ r_eax = (u32)R16((u32)(r_ecx+0x2cu));
    /* 00508f4c: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00508f51: mov word ptr [ecx + 0x2c], ax */ W16((u32)(r_ecx+0x2cu), (u16)r_eax);
    /* 00508f55: ret  */ FN_RET(0x00508f48); r_esp += 4; return;
}

void f_00508f58(void) /* sub_508F58 */
{
    FN_ENTER(0x00508f58);
    /* 00508f58: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00508f59: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00508f5c: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00508f5e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00508f60: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x508f65u); f_008173b4();
    /* 00508f65: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00508f67: je 0x509395 */ if (fZ) goto L_00509395;
L_00508f6d:; BB(0x00508f6d);
    /* 00508f6d: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 00508f70: lea edx, [eax - 1] */ r_edx = (u32)(r_eax+0xffffffffu);
    /* 00508f73: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00508f75: jg 0x50939a */ if ((!fZ&&fS==fO)) goto L_0050939a;
L_00508f7b:; BB(0x00508f7b);
    /* 00508f7b: movzx eax, word ptr [ebx + 0x2c] */ r_eax = (u32)R16((u32)(r_ebx+0x2cu));
    /* 00508f7f: mov dword ptr [ebx + 0x38], 0 */ W32((u32)(r_ebx+0x38u), 0x0u);
    /* 00508f86: add dword ptr [ebx + 0x40], 1 */ { u32 ad = (u32)(r_ebx+0x40u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00508f8a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00508f8c: jne 0x509569 */ if (!fZ) goto L_00509569;
L_00508f92:; BB(0x00508f92);
    /* 00508f92: test eax, 0x2200 */ {  u32 a = r_eax; u32 b = 0x2200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00508f97: je 0x508fac */ if (fZ) goto L_00508fac;
L_00508f99:; BB(0x00508f99);
    /* 00508f99: mov eax, dword ptr [ebx + 0x5c] */ r_eax = R32((u32)(r_ebx+0x5cu));
    /* 00508f9c: cmp eax, dword ptr [0xaca344] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaca344u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00508fa2: jne 0x508fac */ if (!fZ) goto L_00508fac;
L_00508fa4:; BB(0x00508fa4);
    /* 00508fa4: mov eax, dword ptr [0xaca330] */ r_eax = R32((u32)(0xaca330u));
    /* 00508fa9: mov dword ptr [ebx + 0x5c], eax */ W32((u32)(r_ebx+0x5cu), r_eax);
L_00508fac:; BB(0x00508fac);
    /* 00508fac: mov edx, dword ptr [ebx + 0x28] */ r_edx = R32((u32)(r_ebx+0x28u));
    /* 00508faf: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00508fb1: je 0x509395 */ if (fZ) goto L_00509395;
L_00508fb7:; BB(0x00508fb7);
    /* 00508fb7: fld dword ptr [edx + 0x40] */ FPUSH(R_F32((u32)(r_edx+0x40u)));
    /* 00508fba: fcom dword ptr [0x920120] */ fx_compare(ST(0), R_F32((u32)(0x920120u))); 
    /* 00508fc0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00508fc2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00508fc3: jne 0x508fd2 */ if (!fZ) goto L_00508fd2;
L_00508fc5:; BB(0x00508fc5);
    /* 00508fc5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00508fc7: fld dword ptr [edx + 0x44] */ FPUSH(R_F32((u32)(r_edx+0x44u)));
    /* 00508fca: fmul dword ptr [ebx + 0x24] */ ST(0) = ST(0) * R_F32((u32)(r_ebx+0x24u));
    /* 00508fcd: fadd dword ptr [ebx + 0x1c] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x1cu));
    /* 00508fd0: jmp 0x509024 */ goto L_00509024;
L_00508fd2:; BB(0x00508fd2);
    /* 00508fd2: fld dword ptr [0x92011c] */ FPUSH(R_F32((u32)(0x92011cu)));
    /* 00508fd8: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00508fda: fdiv dword ptr [0x920118] */ ST(0) = ST(0) / R_F32((u32)(0x920118u));
    /* 00508fe0: fnstcw word ptr [esp + 0xc] */ W16((u32)(r_esp+0xcu), fcw);
    /* 00508fe4: movzx eax, word ptr [esp + 0xc] */ r_eax = (u32)R16((u32)(r_esp+0xcu));
    /* 00508fe9: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00508fee: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00508ff2: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 00508ff6: fistp dword ptr [esp + 0x1c] */ W32((u32)(r_esp+0x1cu), (u32)fx_int32(ST(0))); FPOP();
    /* 00508ffa: fldcw word ptr [esp + 0xc] */ fcw = R16((u32)(r_esp+0xcu));
    /* 00508ffe: mov ecx, dword ptr [esp + 0x1c] */ r_ecx = R32((u32)(r_esp+0x1cu));
    /* 00509002: add ecx, dword ptr [ebx + 0x20] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebx+0x20u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00509005: mov dword ptr [ebx + 0x20], ecx */ W32((u32)(r_ebx+0x20u), r_ecx);
    /* 00509008: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x50900du); f_0082dcbc();
    /* 0050900d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0050900e: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00509011: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x509016u); f_0082e900();
    /* 00509016: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 00509019: fld dword ptr [eax + 0x44] */ FPUSH(R_F32((u32)(r_eax+0x44u)));
    /* 0050901c: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0050901e: fmul dword ptr [ebx + 0x24] */ ST(0) = ST(0) * R_F32((u32)(r_ebx+0x24u));
    /* 00509021: fadd dword ptr [ebx + 0x1c] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x1cu));
L_00509024:; BB(0x00509024);
    /* 00509024: mov eax, dword ptr [ebx + 0x34] */ r_eax = R32((u32)(r_ebx+0x34u));
    /* 00509027: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050902a: je 0x509550 */ if (fZ) goto L_00509550;
L_00509030:; BB(0x00509030);
    /* 00509030: fst dword ptr [ebx + 0x1c] */ W_F32((u32)(r_ebx+0x1cu), ST(0));
L_00509033:; BB(0x00509033);
    /* 00509033: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 00509038: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050903a: je 0x509088 */ if (fZ) goto L_00509088;
L_0050903c:; BB(0x0050903c);
    /* 0050903c: movzx eax, word ptr [ebx + 0x2c] */ r_eax = (u32)R16((u32)(r_ebx+0x2cu));
    /* 00509040: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00509042: jne 0x509088 */ if (!fZ) goto L_00509088;
L_00509044:; BB(0x00509044);
    /* 00509044: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00509046: call 0x417ca4 */ r_esp -= 4; W32(r_esp, 0x50904bu); f_00417ca4();
    /* 0050904b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050904d: je 0x509054 */ if (fZ) goto L_00509054;
L_0050904f:; BB(0x0050904f);
    /* 0050904f: fld dword ptr [ebx + 0x1c] */ FPUSH(R_F32((u32)(r_ebx+0x1cu)));
    /* 00509052: jmp 0x509088 */ goto L_00509088;
L_00509054:; BB(0x00509054);
    /* 00509054: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 00509059: lea edx, [ebx + 0x6c] */ r_edx = (u32)(r_ebx+0x6cu);
    /* 0050905c: add eax, 0x178 */ {  u32 a = r_eax; u32 b = 0x178u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00509061: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00509062: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00509063: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x509068u); f_007a9180();
    /* 00509068: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050906b: fcomp dword ptr [0x920110] */ fx_compare(ST(0), R_F32((u32)(0x920110u))); FPOP();
    /* 00509071: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00509073: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00509074: jb 0x509085 */ if (fC) goto L_00509085;
L_00509076:; BB(0x00509076);
    /* 00509076: fld dword ptr [0x920120] */ FPUSH(R_F32((u32)(0x920120u)));
    /* 0050907c: mov dword ptr [ebx + 0x1c], 0 */ W32((u32)(r_ebx+0x1cu), 0x0u);
    /* 00509083: jmp 0x509088 */ goto L_00509088;
L_00509085:; BB(0x00509085);
    /* 00509085: fld dword ptr [ebx + 0x1c] */ FPUSH(R_F32((u32)(r_ebx+0x1cu)));
L_00509088:; BB(0x00509088);
    /* 00509088: fld dword ptr [0x920114] */ FPUSH(R_F32((u32)(0x920114u)));
    /* 0050908e: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00509090: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00509092: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00509093: ja 0x509575 */ if ((!fC&&!fZ)) goto L_00509575;
L_00509099:; BB(0x00509099);
    /* 00509099: mov dword ptr [esp + 0x30], esi */ W32((u32)(r_esp+0x30u), r_esi);
    /* 0050909d: mov dword ptr [esp + 0x2c], edi */ W32((u32)(r_esp+0x2cu), r_edi);
    /* 005090a1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
L_005090a3:; BB(0x005090a3);
    /* 005090a3: fadd dword ptr [0x92010c] */ ST(0) = ST(0) + R_F32((u32)(0x92010cu));
    /* 005090a9: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 005090ac: fst dword ptr [ebx + 0x1c] */ W_F32((u32)(r_ebx+0x1cu), ST(0));
    /* 005090af: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005090b2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005090b4: je 0x509324 */ if (fZ) goto L_00509324;
L_005090ba:; BB(0x005090ba);
    /* 005090ba: movzx edx, word ptr [ebx + 0x2c] */ r_edx = (u32)R16((u32)(r_ebx+0x2cu));
    /* 005090be: test dl, 0x10 */ {  u32 a = (u8)r_edx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005090c1: je 0x5090da */ if (fZ) goto L_005090da;
L_005090c3:; BB(0x005090c3);
    /* 005090c3: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005090c6: je 0x5093c1 */ if (fZ) goto L_005093c1;
L_005090cc:; BB(0x005090cc);
    /* 005090cc: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005090cf: je 0x5093a2 */ if (fZ) goto L_005093a2;
L_005090d5:; BB(0x005090d5);
    /* 005090d5: jmp 0x509359 */ goto L_00509359;
L_005090da:; BB(0x005090da);
    /* 005090da: test edx, 0x80 */ {  u32 a = r_edx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005090e0: je 0x509127 */ if (fZ) goto L_00509127;
L_005090e2:; BB(0x005090e2);
    /* 005090e2: fild dword ptr [0xaf0350] */ FPUSH((long double)(i32)R32((u32)(0xaf0350u)));
    /* 005090e8: fdiv dword ptr [0x920108] */ ST(0) = ST(0) / R_F32((u32)(0x920108u));
    /* 005090ee: fmul dword ptr [ebx + 0x6c] */ ST(0) = ST(0) * R_F32((u32)(r_ebx+0x6cu));
    /* 005090f1: fild dword ptr [0xaf0354] */ FPUSH((long double)(i32)R32((u32)(0xaf0354u)));
    /* 005090f7: fdiv dword ptr [0x920104] */ ST(0) = ST(0) / R_F32((u32)(0x920104u));
    /* 005090fd: fmul dword ptr [ebx + 0x70] */ ST(0) = ST(0) * R_F32((u32)(r_ebx+0x70u));
    /* 00509100: mov edx, dword ptr [ebx + 0x74] */ r_edx = R32((u32)(r_ebx+0x74u));
    /* 00509103: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00509105: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00509108: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0050910c: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00509110: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00509113: je 0x50940c */ if (fZ) goto L_0050940c;
L_00509119:; BB(0x00509119);
    /* 00509119: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050911c: je 0x5093e7 */ if (fZ) goto L_005093e7;
L_00509122:; BB(0x00509122);
    /* 00509122: jmp 0x509359 */ goto L_00509359;
L_00509127:; BB(0x00509127);
    /* 00509127: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050912a: jge 0x509359 */ if ((fS==fO)) goto L_00509359;
L_00509130:; BB(0x00509130);
    /* 00509130: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00509132: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00509134: push dword ptr [ebx + 0x5c] */ { u32 v = R32((u32)(r_ebx+0x5cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00509137: lea edx, [ebx + 0x6c] */ r_edx = (u32)(r_ebx+0x6cu);
    /* 0050913a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050913b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050913c: call dword ptr [ecx*8 + 0x9ba8f8] */ { u32 t = R32((u32)(r_ecx*8+0x9ba8f8u)); r_esp -= 4; W32(r_esp, 0x509143u); call_ind(t); }
    /* 00509143: mov esi, eax */ r_esi = r_eax;
    /* 00509145: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00509148: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050914a: je 0x509319 */ if (fZ) goto L_00509319;
L_00509150:; BB(0x00509150);
    /* 00509150: mov edx, dword ptr [ebx + 0x78] */ r_edx = R32((u32)(r_ebx+0x78u));
    /* 00509153: mov dword ptr [esi + 0x9c], edx */ W32((u32)(r_esi+0x9cu), r_edx);
    /* 00509159: mov edi, dword ptr [ebx + 0x7c] */ r_edi = R32((u32)(r_ebx+0x7cu));
    /* 0050915c: mov dword ptr [esi + 0xa0], edi */ W32((u32)(r_esi+0xa0u), r_edi);
    /* 00509162: mov edx, dword ptr [ebx + 0x80] */ r_edx = R32((u32)(r_ebx+0x80u));
    /* 00509168: mov dword ptr [esi + 0xa4], edx */ W32((u32)(r_esi+0xa4u), r_edx);
    /* 0050916e: movzx edx, word ptr [ebx + 0x2c] */ r_edx = (u32)R16((u32)(r_ebx+0x2cu));
    /* 00509172: test edx, 0x2000 */ {  u32 a = r_edx; u32 b = 0x2000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00509178: jne 0x509525 */ if (!fZ) goto L_00509525;
L_0050917e:; BB(0x0050917e);
    /* 0050917e: test edx, 0x80 */ {  u32 a = r_edx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00509184: je 0x5091b4 */ if (fZ) goto L_005091b4;
L_00509186:; BB(0x00509186);
    /* 00509186: fild dword ptr [0xaf0350] */ FPUSH((long double)(i32)R32((u32)(0xaf0350u)));
    /* 0050918c: fdiv dword ptr [0x920108] */ ST(0) = ST(0) / R_F32((u32)(0x920108u));
    /* 00509192: fmul dword ptr [ebx + 0x44] */ ST(0) = ST(0) * R_F32((u32)(r_ebx+0x44u));
    /* 00509195: fild dword ptr [0xaf0354] */ FPUSH((long double)(i32)R32((u32)(0xaf0354u)));
    /* 0050919b: fdiv dword ptr [0x920104] */ ST(0) = ST(0) / R_F32((u32)(0x920104u));
    /* 005091a1: fmul dword ptr [ebx + 0x48] */ ST(0) = ST(0) * R_F32((u32)(r_ebx+0x48u));
    /* 005091a4: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005091a6: fstp dword ptr [esi + 0xa8] */ W_F32((u32)(r_esi+0xa8u), ST(0)); FPOP();
    /* 005091ac: fstp dword ptr [esi + 0xac] */ W_F32((u32)(r_esi+0xacu), ST(0)); FPOP();
    /* 005091b2: jmp 0x5091c6 */ goto L_005091c6;
L_005091b4:; BB(0x005091b4);
    /* 005091b4: mov edx, dword ptr [ebx + 0x44] */ r_edx = R32((u32)(r_ebx+0x44u));
    /* 005091b7: mov edi, dword ptr [ebx + 0x48] */ r_edi = R32((u32)(r_ebx+0x48u));
    /* 005091ba: mov dword ptr [esi + 0xa8], edx */ W32((u32)(r_esi+0xa8u), r_edx);
    /* 005091c0: mov dword ptr [esi + 0xac], edi */ W32((u32)(r_esi+0xacu), r_edi);
L_005091c6:; BB(0x005091c6);
    /* 005091c6: movzx edx, word ptr [ebx + 0x2c] */ r_edx = (u32)R16((u32)(r_ebx+0x2cu));
    /* 005091ca: test edx, 0x100 */ {  u32 a = r_edx; u32 b = 0x100u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005091d0: je 0x50923f */ if (fZ) goto L_0050923f;
L_005091d2:; BB(0x005091d2);
    /* 005091d2: fld dword ptr [0x920100] */ FPUSH(R_F32((u32)(0x920100u)));
    /* 005091d8: mov edx, dword ptr [ebx + 0x4c] */ r_edx = R32((u32)(r_ebx+0x4cu));
    /* 005091db: mov edi, edx */ r_edi = r_edx;
    /* 005091dd: shr edi, 0x18 */ { u32 c = (24u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 005091e0: mov dword ptr [esp + 0x24], edi */ W32((u32)(r_esp+0x24u), r_edi);
    /* 005091e4: fild dword ptr [esp + 0x24] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x24u)));
    /* 005091e8: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 005091ea: mov edi, edx */ r_edi = r_edx;
    /* 005091ec: fstp dword ptr [esi + 0x4c] */ W_F32((u32)(r_esi+0x4cu), ST(0)); FPOP();
    /* 005091ef: shr edi, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 005091f2: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 005091f8: mov dword ptr [esp + 0x24], edi */ W32((u32)(r_esp+0x24u), r_edi);
    /* 005091fc: fild dword ptr [esp + 0x24] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x24u)));
    /* 00509200: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 00509202: mov edi, edx */ r_edi = r_edx;
    /* 00509204: fstp dword ptr [esi + 0x50] */ W_F32((u32)(r_esi+0x50u), ST(0)); FPOP();
    /* 00509207: shr edi, 8 */ { u32 c = (8u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 0050920a: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 00509210: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 00509213: mov dword ptr [esp + 0x24], edi */ W32((u32)(r_esp+0x24u), r_edi);
    /* 00509217: fild dword ptr [esp + 0x24] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x24u)));
    /* 0050921b: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 0050921d: fstp dword ptr [esi + 0x54] */ W_F32((u32)(r_esi+0x54u), ST(0)); FPOP();
    /* 00509220: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 00509224: fild dword ptr [esp + 0x24] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x24u)));
    /* 00509228: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 0050922a: movzx edx, word ptr [esi + 0x24] */ r_edx = (u32)R16((u32)(r_esi+0x24u));
    /* 0050922e: fstp dword ptr [esi + 0x58] */ W_F32((u32)(r_esi+0x58u), ST(0)); FPOP();
    /* 00509231: or edx, 0xffff0100 */ {  u32 a = r_edx; u32 b = 0xffff0100u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00509237: mov word ptr [esi + 0x24], dx */ W16((u32)(r_esi+0x24u), (u16)r_edx);
    /* 0050923b: movzx edx, word ptr [ebx + 0x2c] */ r_edx = (u32)R16((u32)(r_ebx+0x2cu));
L_0050923f:; BB(0x0050923f);
    /* 0050923f: test edx, 0x200 */ {  u32 a = r_edx; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00509245: je 0x5092b5 */ if (fZ) goto L_005092b5;
L_00509247:; BB(0x00509247);
    /* 00509247: test edx, 0x400 */ {  u32 a = r_edx; u32 b = 0x400u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050924d: je 0x509283 */ if (fZ) goto L_00509283;
L_0050924f:; BB(0x0050924f);
    /* 0050924f: mov edx, dword ptr [ebx + 0x50] */ r_edx = R32((u32)(r_ebx+0x50u));
    /* 00509252: mov edi, dword ptr [ebx + 0x54] */ r_edi = R32((u32)(r_ebx+0x54u));
    /* 00509255: mov eax, dword ptr [ebx + 0x58] */ r_eax = R32((u32)(r_ebx+0x58u));
    /* 00509258: mov ecx, dword ptr [ebx + 0x60] */ r_ecx = R32((u32)(r_ebx+0x60u));
    /* 0050925b: mov dword ptr [esi + 0x104], edx */ W32((u32)(r_esi+0x104u), r_edx);
    /* 00509261: movzx edx, word ptr [esi + 0x24] */ r_edx = (u32)R16((u32)(r_esi+0x24u));
    /* 00509265: mov dword ptr [esi + 0x108], edi */ W32((u32)(r_esi+0x108u), r_edi);
    /* 0050926b: mov dword ptr [esi + 0x10c], eax */ W32((u32)(r_esi+0x10cu), r_eax);
    /* 00509271: mov dword ptr [esi + 0x114], ecx */ W32((u32)(r_esi+0x114u), r_ecx);
    /* 00509277: or edx, 0xffff0600 */ {  u32 a = r_edx; u32 b = 0xffff0600u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0050927d: mov word ptr [esi + 0x24], dx */ W16((u32)(r_esi+0x24u), (u16)r_edx);
    /* 00509281: jmp 0x5092b5 */ goto L_005092b5;
L_00509283:; BB(0x00509283);
    /* 00509283: mov edx, dword ptr [ebx + 0x50] */ r_edx = R32((u32)(r_ebx+0x50u));
    /* 00509286: mov edi, dword ptr [ebx + 0x54] */ r_edi = R32((u32)(r_ebx+0x54u));
    /* 00509289: mov eax, dword ptr [ebx + 0x58] */ r_eax = R32((u32)(r_ebx+0x58u));
    /* 0050928c: mov ecx, dword ptr [ebx + 0x60] */ r_ecx = R32((u32)(r_ebx+0x60u));
    /* 0050928f: mov dword ptr [esi + 0x104], edx */ W32((u32)(r_esi+0x104u), r_edx);
    /* 00509295: movzx edx, word ptr [esi + 0x24] */ r_edx = (u32)R16((u32)(r_esi+0x24u));
    /* 00509299: mov dword ptr [esi + 0x108], edi */ W32((u32)(r_esi+0x108u), r_edi);
    /* 0050929f: mov dword ptr [esi + 0x10c], eax */ W32((u32)(r_esi+0x10cu), r_eax);
    /* 005092a5: mov dword ptr [esi + 0x114], ecx */ W32((u32)(r_esi+0x114u), r_ecx);
    /* 005092ab: or edx, 0xffff0200 */ {  u32 a = r_edx; u32 b = 0xffff0200u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 005092b1: mov word ptr [esi + 0x24], dx */ W16((u32)(r_esi+0x24u), (u16)r_edx);
L_005092b5:; BB(0x005092b5);
    /* 005092b5: fld dword ptr [0x920114] */ FPUSH(R_F32((u32)(0x920114u)));
    /* 005092bb: movzx edx, word ptr [ebx + 0x2e] */ r_edx = (u32)R16((u32)(r_ebx+0x2eu));
    /* 005092bf: movzx edi, word ptr [esi + 0x26] */ r_edi = (u32)R16((u32)(r_esi+0x26u));
    /* 005092c3: or edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 005092c5: movzx edx, di */ r_edx = (u32)(u16)r_edi;
    /* 005092c8: mov word ptr [esi + 0x26], dx */ W16((u32)(r_esi+0x26u), (u16)r_edx);
    /* 005092cc: fcom dword ptr [ebx + 0x64] */ fx_compare(ST(0), R_F32((u32)(r_ebx+0x64u))); 
    /* 005092cf: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005092d1: mov edi, dword ptr [ebx + 0x64] */ r_edi = R32((u32)(r_ebx+0x64u));
    /* 005092d4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005092d5: je 0x509516 */ if (fZ) goto L_00509516;
L_005092db:; BB(0x005092db);
    /* 005092db: mov dword ptr [esi + 0xb0], edi */ W32((u32)(r_esi+0xb0u), r_edi);
    /* 005092e1: or edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 005092e4: mov word ptr [esi + 0x26], dx */ W16((u32)(r_esi+0x26u), (u16)r_edx);
L_005092e8:; BB(0x005092e8);
    /* 005092e8: fcom dword ptr [ebx + 0x68] */ fx_compare(ST(0), R_F32((u32)(r_ebx+0x68u))); 
    /* 005092eb: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005092ed: mov edi, dword ptr [ebx + 0x68] */ r_edi = R32((u32)(r_ebx+0x68u));
    /* 005092f0: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005092f1: je 0x509507 */ if (fZ) goto L_00509507;
L_005092f7:; BB(0x005092f7);
    /* 005092f7: mov dword ptr [esi + 0xb4], edi */ W32((u32)(r_esi+0xb4u), r_edi);
    /* 005092fd: or edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00509300: mov word ptr [esi + 0x26], dx */ W16((u32)(r_esi+0x26u), (u16)r_edx);
L_00509304:; BB(0x00509304);
    /* 00509304: movzx edi, word ptr [ebx + 0x2e] */ r_edi = (u32)R16((u32)(r_ebx+0x2eu));
    /* 00509308: test edi, 0x20 */ {  u32 a = r_edi; u32 b = 0x20u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050930e: jne 0x509435 */ if (!fZ) goto L_00509435;
L_00509314:; BB(0x00509314);
    /* 00509314: fld dword ptr [ebx + 0x1c] */ FPUSH(R_F32((u32)(r_ebx+0x1cu)));
    /* 00509317: jmp 0x509359 */ goto L_00509359;
L_00509319:; BB(0x00509319);
    /* 00509319: fld dword ptr [0x920114] */ FPUSH(R_F32((u32)(0x920114u)));
    /* 0050931f: fld dword ptr [ebx + 0x1c] */ FPUSH(R_F32((u32)(r_ebx+0x1cu)));
    /* 00509322: jmp 0x509359 */ goto L_00509359;
L_00509324:; BB(0x00509324);
    /* 00509324: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00509326: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00509328: movzx ecx, word ptr [ebx + 0x2c] */ r_ecx = (u32)R16((u32)(r_ebx+0x2cu));
    /* 0050932c: movzx edx, word ptr [ebx + 0x30] */ r_edx = (u32)R16((u32)(r_ebx+0x30u));
    /* 00509330: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00509331: lea edi, [ebx + 0x6c] */ r_edi = (u32)(r_ebx+0x6cu);
    /* 00509334: lea esi, [ebx + 0x78] */ r_esi = (u32)(r_ebx+0x78u);
    /* 00509337: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00509338: push dword ptr [ebx + 0x5c] */ { u32 v = R32((u32)(r_ebx+0x5cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0050933b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0050933c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0050933d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050933e: call 0x50ef80 */ r_esp -= 4; W32(r_esp, 0x509343u); f_0050ef80();
    /* 00509343: mov esi, eax */ r_esi = r_eax;
    /* 00509345: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00509348:; BB(0x00509348);
    /* 00509348: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050934a: jne 0x509547 */ if (!fZ) goto L_00509547;
L_00509350:; BB(0x00509350);
    /* 00509350: fld dword ptr [0x920114] */ FPUSH(R_F32((u32)(0x920114u)));
    /* 00509356: fld dword ptr [ebx + 0x1c] */ FPUSH(R_F32((u32)(r_ebx+0x1cu)));
L_00509359:; BB(0x00509359);
    /* 00509359: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0050935b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0050935d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0050935e: jae 0x5090a3 */ if (!fC) goto L_005090a3;
L_00509364:; BB(0x00509364);
    /* 00509364: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00509366: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00509368: mov esi, dword ptr [esp + 0x30] */ r_esi = R32((u32)(r_esp+0x30u));
    /* 0050936c: mov edi, dword ptr [esp + 0x2c] */ r_edi = R32((u32)(r_esp+0x2cu));
L_00509370:; BB(0x00509370);
    /* 00509370: mov eax, dword ptr [ebx + 0x34] */ r_eax = R32((u32)(r_ebx+0x34u));
    /* 00509373: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00509376: je 0x509535 */ if (fZ) goto L_00509535;
L_0050937c:; BB(0x0050937c);
    /* 0050937c: mov eax, dword ptr [ebx + 0x3c] */ r_eax = R32((u32)(r_ebx+0x3cu));
    /* 0050937f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00509381: je 0x509395 */ if (fZ) goto L_00509395;
L_00509383:; BB(0x00509383);
    /* 00509383: cmp eax, dword ptr [ebx + 0x40] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0x40u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00509386: jg 0x509395 */ if ((!fZ&&fS==fO)) goto L_00509395;
L_00509388:; BB(0x00509388);
    /* 00509388: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 0050938c: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00509391: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
L_00509395:; BB(0x00509395);
    /* 00509395: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00509398: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00509399: ret  */ FN_RET(0x00508f58); r_esp += 4; return;
L_0050939a:; BB(0x0050939a);
    /* 0050939a: mov dword ptr [ebx + 0x38], edx */ W32((u32)(r_ebx+0x38u), r_edx);
    /* 0050939d: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005093a0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005093a1: ret  */ FN_RET(0x00508f58); r_esp += 4; return;
L_005093a2:; BB(0x005093a2);
    /* 005093a2: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 005093a4: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005093a6: movzx edx, word ptr [ebx + 0x30] */ r_edx = (u32)R16((u32)(r_ebx+0x30u));
    /* 005093aa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005093ab: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 005093ad: lea ecx, [ebx + 0x6c] */ r_ecx = (u32)(r_ebx+0x6cu);
    /* 005093b0: push dword ptr [ebx + 0x5c] */ { u32 v = R32((u32)(r_ebx+0x5cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005093b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005093b4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005093b5: call 0x51163c */ r_esp -= 4; W32(r_esp, 0x5093bau); f_0051163c();
    /* 005093ba: mov esi, eax */ r_esi = r_eax;
    /* 005093bc: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005093bf: jmp 0x509348 */ goto L_00509348;
L_005093c1:; BB(0x005093c1);
    /* 005093c1: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 005093c3: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005093c5: movzx edx, word ptr [ebx + 0x30] */ r_edx = (u32)R16((u32)(r_ebx+0x30u));
    /* 005093c9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005093ca: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 005093cc: lea esi, [ebx + 0x6c] */ r_esi = (u32)(r_ebx+0x6cu);
    /* 005093cf: push dword ptr [ebx + 0x5c] */ { u32 v = R32((u32)(r_ebx+0x5cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005093d2: lea ecx, [ebx + 0x78] */ r_ecx = (u32)(r_ebx+0x78u);
    /* 005093d5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005093d6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005093d7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005093d8: call 0x510534 */ r_esp -= 4; W32(r_esp, 0x5093ddu); f_00510534();
    /* 005093dd: mov esi, eax */ r_esi = r_eax;
    /* 005093df: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005093e2: jmp 0x509348 */ goto L_00509348;
L_005093e7:; BB(0x005093e7);
    /* 005093e7: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 005093e9: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005093eb: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 005093ee: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005093f3: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 005093f8: push dword ptr [ebx + 0x5c] */ { u32 v = R32((u32)(r_ebx+0x5cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005093fb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005093fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005093fd: call 0x51163c */ r_esp -= 4; W32(r_esp, 0x509402u); f_0051163c();
    /* 00509402: mov esi, eax */ r_esi = r_eax;
    /* 00509404: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00509407: jmp 0x509348 */ goto L_00509348;
L_0050940c:; BB(0x0050940c);
    /* 0050940c: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0050940e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00509410: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00509413: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00509418: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 0050941d: push dword ptr [ebx + 0x5c] */ { u32 v = R32((u32)(r_ebx+0x5cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00509420: lea edx, [ebx + 0x78] */ r_edx = (u32)(r_ebx+0x78u);
    /* 00509423: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00509424: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00509425: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00509426: call 0x510534 */ r_esp -= 4; W32(r_esp, 0x50942bu); f_00510534();
    /* 0050942b: mov esi, eax */ r_esi = r_eax;
    /* 0050942d: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00509430: jmp 0x509348 */ goto L_00509348;
L_00509435:; BB(0x00509435);
    /* 00509435: mov edi, dword ptr [ebx + 0x90] */ r_edi = R32((u32)(r_ebx+0x90u));
    /* 0050943b: mov dword ptr [esi + 0xc0], edi */ W32((u32)(r_esi+0xc0u), r_edi);
    /* 00509441: mov edi, dword ptr [ebx + 0x94] */ r_edi = R32((u32)(r_ebx+0x94u));
    /* 00509447: mov dword ptr [esi + 0xc4], edi */ W32((u32)(r_esi+0xc4u), r_edi);
    /* 0050944d: mov edi, dword ptr [ebx + 0x98] */ r_edi = R32((u32)(r_ebx+0x98u));
    /* 00509453: mov dword ptr [esi + 0xc8], edi */ W32((u32)(r_esi+0xc8u), r_edi);
    /* 00509459: mov edi, dword ptr [ebx + 0x9c] */ r_edi = R32((u32)(r_ebx+0x9cu));
    /* 0050945f: mov dword ptr [esi + 0xcc], edi */ W32((u32)(r_esi+0xccu), r_edi);
    /* 00509465: mov edi, dword ptr [ebx + 0xa0] */ r_edi = R32((u32)(r_ebx+0xa0u));
    /* 0050946b: mov dword ptr [esi + 0xd0], edi */ W32((u32)(r_esi+0xd0u), r_edi);
    /* 00509471: mov edi, dword ptr [ebx + 0xa4] */ r_edi = R32((u32)(r_ebx+0xa4u));
    /* 00509477: mov dword ptr [esi + 0xd4], edi */ W32((u32)(r_esi+0xd4u), r_edi);
    /* 0050947d: mov edi, dword ptr [ebx + 0xa8] */ r_edi = R32((u32)(r_ebx+0xa8u));
    /* 00509483: mov dword ptr [esi + 0xd8], edi */ W32((u32)(r_esi+0xd8u), r_edi);
    /* 00509489: mov edi, dword ptr [ebx + 0xac] */ r_edi = R32((u32)(r_ebx+0xacu));
    /* 0050948f: mov dword ptr [esi + 0xdc], edi */ W32((u32)(r_esi+0xdcu), r_edi);
    /* 00509495: mov edi, dword ptr [ebx + 0xb0] */ r_edi = R32((u32)(r_ebx+0xb0u));
    /* 0050949b: mov dword ptr [esi + 0xe0], edi */ W32((u32)(r_esi+0xe0u), r_edi);
    /* 005094a1: mov edi, dword ptr [ebx + 0xb4] */ r_edi = R32((u32)(r_ebx+0xb4u));
    /* 005094a7: mov dword ptr [esi + 0xe4], edi */ W32((u32)(r_esi+0xe4u), r_edi);
    /* 005094ad: mov edi, dword ptr [ebx + 0xb8] */ r_edi = R32((u32)(r_ebx+0xb8u));
    /* 005094b3: mov dword ptr [esi + 0xe8], edi */ W32((u32)(r_esi+0xe8u), r_edi);
    /* 005094b9: mov edi, dword ptr [ebx + 0xbc] */ r_edi = R32((u32)(r_ebx+0xbcu));
    /* 005094bf: mov dword ptr [esi + 0xec], edi */ W32((u32)(r_esi+0xecu), r_edi);
    /* 005094c5: mov edi, dword ptr [ebx + 0xc0] */ r_edi = R32((u32)(r_ebx+0xc0u));
    /* 005094cb: mov dword ptr [esi + 0xf0], edi */ W32((u32)(r_esi+0xf0u), r_edi);
    /* 005094d1: mov edi, dword ptr [ebx + 0xc4] */ r_edi = R32((u32)(r_ebx+0xc4u));
    /* 005094d7: mov dword ptr [esi + 0xf4], edi */ W32((u32)(r_esi+0xf4u), r_edi);
    /* 005094dd: mov edi, dword ptr [ebx + 0xc8] */ r_edi = R32((u32)(r_ebx+0xc8u));
    /* 005094e3: mov dword ptr [esi + 0xf8], edi */ W32((u32)(r_esi+0xf8u), r_edi);
    /* 005094e9: mov edi, dword ptr [ebx + 0xcc] */ r_edi = R32((u32)(r_ebx+0xccu));
    /* 005094ef: mov dword ptr [esi + 0xfc], edi */ W32((u32)(r_esi+0xfcu), r_edi);
    /* 005094f5: or edx, 0xffff0020 */ {  u32 a = r_edx; u32 b = 0xffff0020u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 005094fb: mov word ptr [esi + 0x26], dx */ W16((u32)(r_esi+0x26u), (u16)r_edx);
    /* 005094ff: fld dword ptr [ebx + 0x1c] */ FPUSH(R_F32((u32)(r_ebx+0x1cu)));
    /* 00509502: jmp 0x509359 */ goto L_00509359;
L_00509507:; BB(0x00509507);
    /* 00509507: and edx, 0xffef */ {  u32 a = r_edx; u32 b = 0xffefu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0050950d: mov word ptr [esi + 0x26], dx */ W16((u32)(r_esi+0x26u), (u16)r_edx);
    /* 00509511: jmp 0x509304 */ goto L_00509304;
L_00509516:; BB(0x00509516);
    /* 00509516: and edx, 0xfff7 */ {  u32 a = r_edx; u32 b = 0xfff7u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0050951c: mov word ptr [esi + 0x26], dx */ W16((u32)(r_esi+0x26u), (u16)r_edx);
    /* 00509520: jmp 0x5092e8 */ goto L_005092e8;
L_00509525:; BB(0x00509525);
    /* 00509525: mov ecx, esi */ r_ecx = r_esi;
    /* 00509527: call 0x508634 */ r_esp -= 4; W32(r_esp, 0x50952cu); f_00508634();
    /* 0050952c: movzx edx, word ptr [ebx + 0x2c] */ r_edx = (u32)R16((u32)(r_ebx+0x2cu));
    /* 00509530: jmp 0x50917e */ goto L_0050917e;
L_00509535:; BB(0x00509535);
    /* 00509535: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 00509539: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0050953e: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 00509542: jmp 0x50937c */ goto L_0050937c;
L_00509547:; BB(0x00509547);
    /* 00509547: movzx edx, word ptr [ebx + 0x2c] */ r_edx = (u32)R16((u32)(r_ebx+0x2cu));
    /* 0050954b: jmp 0x50917e */ goto L_0050917e;
L_00509550:; BB(0x00509550);
    /* 00509550: fld dword ptr [0x920114] */ FPUSH(R_F32((u32)(0x920114u)));
    /* 00509556: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00509558: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0050955a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0050955b: jb 0x50955f */ if (fC) goto L_0050955f;
L_0050955d:; BB(0x0050955d);
    /* 0050955d: fst st(1) */ ST(1) = ST(0);
L_0050955f:; BB(0x0050955f);
    /* 0050955f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00509561: fst dword ptr [ebx + 0x1c] */ W_F32((u32)(r_ebx+0x1cu), ST(0));
    /* 00509564: jmp 0x509033 */ goto L_00509033;
L_00509569:; BB(0x00509569);
    /* 00509569: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0050956b: call 0x509580 */ r_esp -= 4; W32(r_esp, 0x509570u); f_00509580();
    /* 00509570: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00509573: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00509574: ret  */ FN_RET(0x00508f58); r_esp += 4; return;
L_00509575:; BB(0x00509575);
    /* 00509575: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00509577: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00509579: jmp 0x509370 */ goto L_00509370;
}

