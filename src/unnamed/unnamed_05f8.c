#include "protos.h"

void f_005f800c(void) /* sub_5F800C */
{
    FN_ENTER(0x005f800c);
    /* 005f800c: mov dword ptr [0xa8e0c0], 0x3f800000 */ W32((u32)(0xa8e0c0u), 0x3f800000u);
    /* 005f8016: mov dword ptr [0xa8e0c4], 0x41000000 */ W32((u32)(0xa8e0c4u), 0x41000000u);
    /* 005f8020: mov dword ptr [0xa8e0c8], 0x3fc00000 */ W32((u32)(0xa8e0c8u), 0x3fc00000u);
    /* 005f802a: ret  */ FN_RET(0x005f800c); r_esp += 4; return;
}

void f_005f802c(void) /* sub_5F802C */
{
    FN_ENTER(0x005f802c);
    /* 005f802c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f802d: mov ebp, esp */ r_ebp = r_esp;
    /* 005f802f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f8031: push 0x8dda04 */ { u32 v = 0x8dda04u; r_esp -= 4; W32(r_esp, v); }
    /* 005f8036: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f803c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f803d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005f8044: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f8047: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005f804a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005f804d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005f8050: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005f8053: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005f8056: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005f8059: mov eax, ecx */ r_eax = r_ecx;
    /* 005f805b: mov dword ptr [eax], 0xb18720 */ W32((u32)(r_eax), 0xb18720u);
    /* 005f8061: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005f8068: call 0x5f8fe8 */ r_esp -= 4; W32(r_esp, 0x5f806du); f_005f8fe8();
    /* 005f806d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f8070: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f8072: jne 0x5f8084 */ if (!fZ) goto L_005f8084;
L_005f8074:; BB(0x005f8074);
    /* 005f8074: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f8077: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f807e: mov esp, ebp */ r_esp = r_ebp;
    /* 005f8080: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f8081: ret 4 */ FN_RET(0x005f802c); r_esp += 8; return;
L_005f8084:; BB(0x005f8084);
    /* 005f8084: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005f8087: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f8088: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5f808du); f_005c2f74();
    /* 005f808d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f808e: jmp 0x5f8074 */ goto L_005f8074;
}

void f_005f8090(void) /* sub_5F8090 */
{
    FN_ENTER(0x005f8090);
    /* 005f8090: mov dword ptr [ecx + 0x248], 1 */ W32((u32)(r_ecx+0x248u), 0x1u);
    /* 005f809a: ret  */ FN_RET(0x005f8090); r_esp += 4; return;
}

void f_005f809c(void) /* sub_5F809C */
{
    FN_ENTER(0x005f809c);
    /* 005f809c: mov eax, dword ptr [0xa8d84c] */ r_eax = R32((u32)(0xa8d84cu));
    /* 005f80a1: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005f80a4: je 0x5f80a7 */ if (fZ) goto L_005f80a7;
L_005f80a6:; BB(0x005f80a6);
    /* 005f80a6: ret  */ FN_RET(0x005f809c); r_esp += 4; return;
L_005f80a7:; BB(0x005f80a7);
    /* 005f80a7: fld dword ptr [ecx + 0x244] */ FPUSH(R_F32((u32)(r_ecx+0x244u)));
    /* 005f80ad: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005f80b0: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 005f80b7: fchs  */ ST(0) = -ST(0);
    /* 005f80b9: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 005f80bd: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 005f80c5: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005f80c7: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x5f80ccu); f_00830b74();
    /* 005f80cc: ret  */ FN_RET(0x005f809c); r_esp += 4; return;
}

void f_005f80d0(void) /* sub_5F80D0 */
{
    FN_ENTER(0x005f80d0);
    /* 005f80d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f80d1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f80d2: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f80d5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005f80d7: mov eax, dword ptr [ebx + 0x248] */ r_eax = R32((u32)(r_ebx+0x248u));
    /* 005f80dd: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f80e0: je 0x5f8124 */ if (fZ) goto L_005f8124;
L_005f80e2:; BB(0x005f80e2);
    /* 005f80e2: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f80e5: je 0x5f80ed */ if (fZ) goto L_005f80ed;
L_005f80e7:; BB(0x005f80e7);
    /* 005f80e7: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005f80ea: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f80eb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f80ec: ret  */ FN_RET(0x005f80d0); r_esp += 4; return;
L_005f80ed:; BB(0x005f80ed);
    /* 005f80ed: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f80ef: push 0x3e4ccccd */ { u32 v = 0x3e4ccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 005f80f4: lea eax, [ebx + 0x244] */ r_eax = (u32)(r_ebx+0x244u);
    /* 005f80fa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f80fb: call 0x5dd728 */ r_esp -= 4; W32(r_esp, 0x5f8100u); f_005dd728();
    /* 005f8100: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005f8103: fld dword ptr [ebx + 0x244] */ FPUSH(R_F32((u32)(r_ebx+0x244u)));
    /* 005f8109: fcomp dword ptr [0x92dcd8] */ fx_compare(ST(0), R_F32((u32)(0x92dcd8u))); FPOP();
    /* 005f810f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005f8111: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005f8112: jne 0x5f80e7 */ if (!fZ) goto L_005f80e7;
L_005f8114:; BB(0x005f8114);
    /* 005f8114: mov dword ptr [ebx + 0x248], 0 */ W32((u32)(r_ebx+0x248u), 0x0u);
    /* 005f811e: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005f8121: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f8122: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f8123: ret  */ FN_RET(0x005f80d0); r_esp += 4; return;
L_005f8124:; BB(0x005f8124);
    /* 005f8124: push 0xc0000000 */ { u32 v = 0xc0000000u; r_esp -= 4; W32(r_esp, v); }
    /* 005f8129: push 0xbf000000 */ { u32 v = 0xbf000000u; r_esp -= 4; W32(r_esp, v); }
    /* 005f812e: lea eax, [ebx + 0x244] */ r_eax = (u32)(r_ebx+0x244u);
    /* 005f8134: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f8135: call 0x5dd728 */ r_esp -= 4; W32(r_esp, 0x5f813au); f_005dd728();
    /* 005f813a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005f813d: fld dword ptr [ebx + 0x244] */ FPUSH(R_F32((u32)(r_ebx+0x244u)));
    /* 005f8143: fcomp dword ptr [0x92dcd0] */ fx_compare(ST(0), R_F32((u32)(0x92dcd0u))); FPOP();
    /* 005f8149: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005f814b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005f814c: jne 0x5f80e7 */ if (!fZ) goto L_005f80e7;
L_005f814e:; BB(0x005f814e);
    /* 005f814e: mov eax, dword ptr [ebx + 0xf8] */ r_eax = R32((u32)(r_ebx+0xf8u));
    /* 005f8154: mov dword ptr [ebx + 0x248], 2 */ W32((u32)(r_ebx+0x248u), 0x2u);
    /* 005f815e: mov ebp, dword ptr [eax + 0x60] */ r_ebp = R32((u32)(r_eax+0x60u));
    /* 005f8161: add ebp, 0x4000 */ {  u32 a = r_ebp; u32 b = 0x4000u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005f8167: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005f8169: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x5f816eu); f_0082dcbc();
    /* 005f816e: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005f8171: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 005f8179: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005f817b: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x5f8180u); f_0082ddd8();
    /* 005f8180: mov eax, dword ptr [ebx + 0xf8] */ r_eax = R32((u32)(r_ebx+0xf8u));
    /* 005f8186: mov edx, dword ptr [eax + 0x60] */ r_edx = R32((u32)(r_eax+0x60u));
    /* 005f8189: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 005f818d: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 005f8191: mov dword ptr [esp + 0xc], 0x4000 */ W32((u32)(r_esp+0xcu), 0x4000u);
    /* 005f8199: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 005f81a1: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005f81a4: lea ebp, [esp + 0xc] */ r_ebp = (u32)(r_esp+0xcu);
    /* 005f81a8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f81a9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f81aa: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005f81ac: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f81ad: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f81b3: call 0x5fec70 */ r_esp -= 4; W32(r_esp, 0x5f81b8u); f_005fec70();
    /* 005f81b8: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005f81bb: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005f81be: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f81bf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f81c0: ret  */ FN_RET(0x005f80d0); r_esp += 4; return;
}

void f_005f8180(void)
{
    FN_ENTER(0x005f8180);
    /* 005f8180: mov eax, dword ptr [ebx + 0xf8] */ r_eax = R32((u32)(r_ebx+0xf8u));
    /* 005f8186: mov edx, dword ptr [eax + 0x60] */ r_edx = R32((u32)(r_eax+0x60u));
    /* 005f8189: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 005f818d: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 005f8191: mov dword ptr [esp + 0xc], 0x4000 */ W32((u32)(r_esp+0xcu), 0x4000u);
    /* 005f8199: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 005f81a1: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005f81a4: lea ebp, [esp + 0xc] */ r_ebp = (u32)(r_esp+0xcu);
    /* 005f81a8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f81a9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f81aa: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005f81ac: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f81ad: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f81b3: call 0x5fec70 */ r_esp -= 4; W32(r_esp, 0x5f81b8u); f_005fec70();
    /* 005f81b8: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005f81bb: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005f81be: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f81bf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f81c0: ret  */ FN_RET(0x005f8180); r_esp += 4; return;
}

void f_005f81c4(void) /* sub_5F81C4 */
{
    FN_ENTER(0x005f81c4);
    /* 005f81c4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f81c5: mov ebp, esp */ r_ebp = r_esp;
    /* 005f81c7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f81c9: push 0x8dda2c */ { u32 v = 0x8dda2cu; r_esp -= 4; W32(r_esp, v); }
    /* 005f81ce: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f81d4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f81d5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005f81dc: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f81df: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005f81e2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005f81e5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005f81e8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005f81eb: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f81ee: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f81f0: je 0x5f8247 */ if (fZ) goto L_005f8247;
L_005f81f2:; BB(0x005f81f2);
    /* 005f81f2: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005f81f9: push 0x24c */ { u32 v = 0x24cu; r_esp -= 4; W32(r_esp, v); }
    /* 005f81fe: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5f8203u); f_005caba4();
    /* 005f8203: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f8204: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005f8207: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f8209: je 0x5f8243 */ if (fZ) goto L_005f8243;
L_005f820b:; BB(0x005f820b);
    /* 005f820b: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005f8212: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005f8219: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f821c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f821f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f8220: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f8226: call 0x5f8258 */ r_esp -= 4; W32(r_esp, 0x5f822bu); f_005f8258();
    /* 005f822b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f822e: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005f8235:; BB(0x005f8235);
    /* 005f8235: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f8238: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f823f: mov esp, ebp */ r_esp = r_ebp;
    /* 005f8241: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f8242: ret  */ FN_RET(0x005f81c4); r_esp += 4; return;
L_005f8243:; BB(0x005f8243);
    /* 005f8243: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f8245: jmp 0x5f8235 */ goto L_005f8235;
L_005f8247:; BB(0x005f8247);
    /* 005f8247: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f8249: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f824c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f8253: mov esp, ebp */ r_esp = r_ebp;
    /* 005f8255: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f8256: ret  */ FN_RET(0x005f81c4); r_esp += 4; return;
}

void f_005f8258(void) /* sub_5F8258 */
{
    FN_ENTER(0x005f8258);
    /* 005f8258: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f8259: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005f825b: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f825f: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f8263: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005f8265: call 0x5f9384 */ r_esp -= 4; W32(r_esp, 0x5f826au); f_005f9384();
    /* 005f826a: mov dword ptr [ebp], 0xb18720 */ W32((u32)(r_ebp), 0xb18720u);
    /* 005f8271: mov eax, ebp */ r_eax = r_ebp;
    /* 005f8273: mov dword ptr [ebp + 0x244], 0 */ W32((u32)(r_ebp+0x244u), 0x0u);
    /* 005f827d: mov dword ptr [ebp + 0x234], 0x5cdd04 */ W32((u32)(r_ebp+0x234u), 0x5cdd04u);
    /* 005f8287: mov dword ptr [ebp + 0x248], 0 */ W32((u32)(r_ebp+0x248u), 0x0u);
    /* 005f8291: mov dword ptr [ebp + 0x23c], 0x5d15ec */ W32((u32)(r_ebp+0x23cu), 0x5d15ecu);
    /* 005f829b: mov dword ptr [ebp + 0x238], 0x5e42b8 */ W32((u32)(r_ebp+0x238u), 0x5e42b8u);
    /* 005f82a5: mov dword ptr [ebp + 0x208], 0x41700000 */ W32((u32)(r_ebp+0x208u), 0x41700000u);
    /* 005f82af: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f82b0: ret 8 */ FN_RET(0x005f8258); r_esp += 12; return;
}

void f_005f82b4(void) /* sub_5F82B4 */
{
    FN_ENTER(0x005f82b4);
    /* 005f82b4: mov dword ptr [0xa8e0cc], 0x3f800000 */ W32((u32)(0xa8e0ccu), 0x3f800000u);
    /* 005f82be: mov dword ptr [0xa8e0d0], 0x41000000 */ W32((u32)(0xa8e0d0u), 0x41000000u);
    /* 005f82c8: mov dword ptr [0xa8e0d4], 0x3fc00000 */ W32((u32)(0xa8e0d4u), 0x3fc00000u);
    /* 005f82d2: ret  */ FN_RET(0x005f82b4); r_esp += 4; return;
}

void f_005f82d4(void) /* sub_5F82D4 */
{
    FN_ENTER(0x005f82d4);
    /* 005f82d4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f82d5: mov ebp, esp */ r_ebp = r_esp;
    /* 005f82d7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f82d9: push 0x8dda48 */ { u32 v = 0x8dda48u; r_esp -= 4; W32(r_esp, v); }
    /* 005f82de: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f82e4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f82e5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005f82ec: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f82ef: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005f82f2: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005f82f5: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005f82f8: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005f82fb: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005f82fe: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005f8301: mov eax, ecx */ r_eax = r_ecx;
    /* 005f8303: mov dword ptr [eax], 0xb18880 */ W32((u32)(r_eax), 0xb18880u);
    /* 005f8309: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005f8310: call 0x5f8fe8 */ r_esp -= 4; W32(r_esp, 0x5f8315u); f_005f8fe8();
    /* 005f8315: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f8318: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f831a: jne 0x5f832c */ if (!fZ) goto L_005f832c;
L_005f831c:; BB(0x005f831c);
    /* 005f831c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f831f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f8326: mov esp, ebp */ r_esp = r_ebp;
    /* 005f8328: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f8329: ret 4 */ FN_RET(0x005f82d4); r_esp += 8; return;
L_005f832c:; BB(0x005f832c);
    /* 005f832c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005f832f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f8330: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5f8335u); f_005c2f74();
    /* 005f8335: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f8336: jmp 0x5f831c */ goto L_005f831c;
}

void f_005f8338(void) /* sub_5F8338 */
{
    FN_ENTER(0x005f8338);
    /* 005f8338: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f8339: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f833c: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005f833e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005f8340: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005f8343: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f8344: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005f8346: call 0x5e83c8 */ r_esp -= 4; W32(r_esp, 0x5f834bu); f_005e83c8();
    /* 005f834b: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 005f834e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005f8350: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 005f8353: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005f8355: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f8356: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f8357: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f8358: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005f835a: call dword ptr [eax + 0xc8] */ { u32 t = R32((u32)(r_eax+0xc8u)); r_esp -= 4; W32(r_esp, 0x5f8360u); call_ind(t); }
    /* 005f8360: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005f8363: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f8364: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005f8366: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005f8368: call 0x5e83c8 */ r_esp -= 4; W32(r_esp, 0x5f836du); f_005e83c8();
    /* 005f836d: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 005f8370: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 005f8373: mov edx, 1 */ r_edx = 0x1u;
    /* 005f8378: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f8379: push 0x888 */ { u32 v = 0x888u; r_esp -= 4; W32(r_esp, v); }
    /* 005f837e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f837f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f8380: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005f8382: call dword ptr [eax + 0xc8] */ { u32 t = R32((u32)(r_eax+0xc8u)); r_esp -= 4; W32(r_esp, 0x5f8388u); call_ind(t); }
    /* 005f8388: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005f838b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f838c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005f838e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005f8390: call 0x5e83c8 */ r_esp -= 4; W32(r_esp, 0x5f8395u); f_005e83c8();
    /* 005f8395: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005f8398: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005f839a: push 0xfffff778 */ { u32 v = 0xfffff778u; r_esp -= 4; W32(r_esp, v); }
    /* 005f839f: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 005f83a2: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005f83a4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f83a5: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005f83a7: call dword ptr [edx + 0xc8] */ { u32 t = R32((u32)(r_edx+0xc8u)); r_esp -= 4; W32(r_esp, 0x5f83adu); call_ind(t); }
    /* 005f83ad: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005f83b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f83b1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005f83b3: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005f83b5: call 0x5e83c8 */ r_esp -= 4; W32(r_esp, 0x5f83bau); f_005e83c8();
    /* 005f83ba: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005f83bd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005f83bf: push 0x11c7 */ { u32 v = 0x11c7u; r_esp -= 4; W32(r_esp, v); }
    /* 005f83c4: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 005f83c7: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005f83c9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f83ca: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005f83cc: call dword ptr [edx + 0xc8] */ { u32 t = R32((u32)(r_edx+0xc8u)); r_esp -= 4; W32(r_esp, 0x5f83d2u); call_ind(t); }
    /* 005f83d2: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005f83d5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f83d6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005f83d8: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005f83da: call 0x5e83c8 */ r_esp -= 4; W32(r_esp, 0x5f83dfu); f_005e83c8();
    /* 005f83df: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005f83e2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005f83e4: push 0xffffee39 */ { u32 v = 0xffffee39u; r_esp -= 4; W32(r_esp, v); }
    /* 005f83e9: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 005f83ec: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005f83ee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f83ef: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005f83f1: call dword ptr [edx + 0xc8] */ { u32 t = R32((u32)(r_edx+0xc8u)); r_esp -= 4; W32(r_esp, 0x5f83f7u); call_ind(t); }
    /* 005f83f7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005f83fa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f83fb: ret  */ FN_RET(0x005f8338); r_esp += 4; return;
}

void f_005f83fc(void) /* sub_5F83FC */
{
    FN_ENTER(0x005f83fc);
    /* 005f83fc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f83fd: mov ebp, esp */ r_ebp = r_esp;
    /* 005f83ff: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f8401: push 0x8dda70 */ { u32 v = 0x8dda70u; r_esp -= 4; W32(r_esp, v); }
    /* 005f8406: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f840c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f840d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005f8414: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f8417: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005f841a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005f841d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005f8420: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005f8423: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f8426: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f8428: je 0x5f847f */ if (fZ) goto L_005f847f;
L_005f842a:; BB(0x005f842a);
    /* 005f842a: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005f8431: push 0x244 */ { u32 v = 0x244u; r_esp -= 4; W32(r_esp, v); }
    /* 005f8436: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5f843bu); f_005caba4();
    /* 005f843b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f843c: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005f843f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f8441: je 0x5f847b */ if (fZ) goto L_005f847b;
L_005f8443:; BB(0x005f8443);
    /* 005f8443: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005f844a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005f8451: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f8454: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f8457: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f8458: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f845e: call 0x5f8490 */ r_esp -= 4; W32(r_esp, 0x5f8463u); f_005f8490();
    /* 005f8463: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f8466: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005f846d:; BB(0x005f846d);
    /* 005f846d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f8470: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f8477: mov esp, ebp */ r_esp = r_ebp;
    /* 005f8479: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f847a: ret  */ FN_RET(0x005f83fc); r_esp += 4; return;
L_005f847b:; BB(0x005f847b);
    /* 005f847b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f847d: jmp 0x5f846d */ goto L_005f846d;
L_005f847f:; BB(0x005f847f);
    /* 005f847f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f8481: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f8484: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f848b: mov esp, ebp */ r_esp = r_ebp;
    /* 005f848d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f848e: ret  */ FN_RET(0x005f83fc); r_esp += 4; return;
}

void f_005f8490(void) /* sub_5F8490 */
{
    FN_ENTER(0x005f8490);
    /* 005f8490: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f8491: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005f8493: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f8497: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f849b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005f849d: call 0x5f9384 */ r_esp -= 4; W32(r_esp, 0x5f84a2u); f_005f9384();
    /* 005f84a2: mov edx, dword ptr [ebx + 0x1dc] */ r_edx = R32((u32)(r_ebx+0x1dcu));
    /* 005f84a8: mov dword ptr [ebx], 0xb18880 */ W32((u32)(r_ebx), 0xb18880u);
    /* 005f84ae: or edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f84b1: mov dword ptr [ebx + 0x1dc], edx */ W32((u32)(r_ebx+0x1dcu), r_edx);
    /* 005f84b7: mov dword ptr [ebx + 0x23c], 0x5cf840 */ W32((u32)(r_ebx+0x23cu), 0x5cf840u);
    /* 005f84c1: mov eax, ebx */ r_eax = r_ebx;
    /* 005f84c3: mov dword ptr [ebx + 0x234], 0x5cfca8 */ W32((u32)(r_ebx+0x234u), 0x5cfca8u);
    /* 005f84cd: mov dword ptr [ebx + 0x238], 0x5e4350 */ W32((u32)(r_ebx+0x238u), 0x5e4350u);
    /* 005f84d7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f84d8: ret 8 */ FN_RET(0x005f8490); r_esp += 12; return;
}

void f_005f84dc(void) /* sub_5F84DC */
{
    FN_ENTER(0x005f84dc);
    /* 005f84dc: mov dword ptr [0xa8e0d8], 0x3f800000 */ W32((u32)(0xa8e0d8u), 0x3f800000u);
    /* 005f84e6: mov dword ptr [0xa8e0dc], 0x41000000 */ W32((u32)(0xa8e0dcu), 0x41000000u);
    /* 005f84f0: mov dword ptr [0xa8e0e0], 0x3fc00000 */ W32((u32)(0xa8e0e0u), 0x3fc00000u);
    /* 005f84fa: ret  */ FN_RET(0x005f84dc); r_esp += 4; return;
}

void f_005f84fc(void) /* sub_5F84FC */
{
    FN_ENTER(0x005f84fc);
    /* 005f84fc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f84fd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005f84ff: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005f8501: call 0x5f8520 */ r_esp -= 4; W32(r_esp, 0x5f8506u); f_005f8520();
    /* 005f8506: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005f850a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f850c: jne 0x5f8512 */ if (!fZ) goto L_005f8512;
L_005f850e:; BB(0x005f850e);
    /* 005f850e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f850f: ret 4 */ FN_RET(0x005f84fc); r_esp += 8; return;
L_005f8512:; BB(0x005f8512);
    /* 005f8512: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f8513: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5f8518u); f_005c2f74();
    /* 005f8518: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f8519: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f851a: ret 4 */ FN_RET(0x005f84fc); r_esp += 8; return;
}

void f_005f8520(void) /* sub_5F8520 */
{
    FN_ENTER(0x005f8520);
    /* 005f8520: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f8521: mov ebp, esp */ r_ebp = r_esp;
    /* 005f8523: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f8525: push 0x8dda8c */ { u32 v = 0x8dda8cu; r_esp -= 4; W32(r_esp, v); }
    /* 005f852a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f8530: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f8531: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005f8538: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f853b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005f853e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005f8541: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005f8544: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005f8547: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005f854a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f854d: mov dword ptr [ecx], 0xb189e0 */ W32((u32)(r_ecx), 0xb189e0u);
    /* 005f8553: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005f855a: call 0x5f8fe8 */ r_esp -= 4; W32(r_esp, 0x5f855fu); f_005f8fe8();
    /* 005f855f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f8562: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f8569: mov esp, ebp */ r_esp = r_ebp;
    /* 005f856b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f856c: ret  */ FN_RET(0x005f8520); r_esp += 4; return;
}

void f_005f8570(void) /* sub_5F8570 */
{
    FN_ENTER(0x005f8570);
    /* 005f8570: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f8571: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005f8573: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 005f8576: lea ecx, [ebp + 0x244] */ r_ecx = (u32)(r_ebp+0x244u);
    /* 005f857c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005f857e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005f8580: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f8581: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f8582: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f8583: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005f8585: call dword ptr [eax + 0xc8] */ { u32 t = R32((u32)(r_eax+0xc8u)); r_esp -= 4; W32(r_esp, 0x5f858bu); call_ind(t); }
    /* 005f858b: lea edx, [ebp + 0x250] */ r_edx = (u32)(r_ebp+0x250u);
    /* 005f8591: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f8593: je 0x5f85a8 */ if (fZ) goto L_005f85a8;
L_005f8595:; BB(0x005f8595);
    /* 005f8595: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 005f8598: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005f859a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f859b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f859c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f859d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f859e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005f85a0: call dword ptr [eax + 0xc8] */ { u32 t = R32((u32)(r_eax+0xc8u)); r_esp -= 4; W32(r_esp, 0x5f85a6u); call_ind(t); }
    /* 005f85a6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f85a7: ret  */ FN_RET(0x005f8570); r_esp += 4; return;
L_005f85a8:; BB(0x005f85a8);
    /* 005f85a8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005f85aa: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 005f85ad: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005f85af: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f85b0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f85b1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f85b2: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005f85b4: call dword ptr [eax + 0xc8] */ { u32 t = R32((u32)(r_eax+0xc8u)); r_esp -= 4; W32(r_esp, 0x5f85bau); call_ind(t); }
    /* 005f85ba: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f85bb: ret  */ FN_RET(0x005f8570); r_esp += 4; return;
}

void f_005f85a0(void)
{
    FN_ENTER(0x005f85a0);
    /* 005f85a0: call dword ptr [eax + 0xc8] */ { u32 t = R32((u32)(r_eax+0xc8u)); r_esp -= 4; W32(r_esp, 0x5f85a6u); call_ind(t); }
    /* 005f85a6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f85a7: ret  */ FN_RET(0x005f85a0); r_esp += 4; return;
}

void f_005f85bc(void) /* sub_5F85BC */
{
    FN_ENTER(0x005f85bc);
    /* 005f85bc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f85bd: mov ebp, esp */ r_ebp = r_esp;
    /* 005f85bf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f85c1: push 0x8ddab4 */ { u32 v = 0x8ddab4u; r_esp -= 4; W32(r_esp, v); }
    /* 005f85c6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f85cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f85cd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005f85d4: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f85d7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005f85da: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005f85dd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005f85e0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005f85e3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f85e6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f85e8: je 0x5f863f */ if (fZ) goto L_005f863f;
L_005f85ea:; BB(0x005f85ea);
    /* 005f85ea: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005f85f1: push 0x25c */ { u32 v = 0x25cu; r_esp -= 4; W32(r_esp, v); }
    /* 005f85f6: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5f85fbu); f_005caba4();
    /* 005f85fb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f85fc: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005f85ff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f8601: je 0x5f863b */ if (fZ) goto L_005f863b;
L_005f8603:; BB(0x005f8603);
    /* 005f8603: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005f860a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005f8611: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f8614: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f8617: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f8618: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f861e: call 0x5f8650 */ r_esp -= 4; W32(r_esp, 0x5f8623u); f_005f8650();
    /* 005f8623: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f8626: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005f862d:; BB(0x005f862d);
    /* 005f862d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f8630: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f8637: mov esp, ebp */ r_esp = r_ebp;
    /* 005f8639: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f863a: ret  */ FN_RET(0x005f85bc); r_esp += 4; return;
L_005f863b:; BB(0x005f863b);
    /* 005f863b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f863d: jmp 0x5f862d */ goto L_005f862d;
L_005f863f:; BB(0x005f863f);
    /* 005f863f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f8641: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f8644: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f864b: mov esp, ebp */ r_esp = r_ebp;
    /* 005f864d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f864e: ret  */ FN_RET(0x005f85bc); r_esp += 4; return;
}

void f_005f8650(void) /* sub_5F8650 */
{
    FN_ENTER(0x005f8650);
    /* 005f8650: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f8651: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005f8653: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f8657: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f865b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005f865d: call 0x5f9384 */ r_esp -= 4; W32(r_esp, 0x5f8662u); f_005f9384();
    /* 005f8662: mov edx, dword ptr [ebx + 0x1dc] */ r_edx = R32((u32)(r_ebx+0x1dcu));
    /* 005f8668: mov dword ptr [ebx], 0xb189e0 */ W32((u32)(r_ebx), 0xb189e0u);
    /* 005f866e: or edx, 0x223 */ {  u32 a = r_edx; u32 b = 0x223u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f8674: mov dword ptr [ebx + 0x1dc], edx */ W32((u32)(r_ebx+0x1dcu), r_edx);
    /* 005f867a: mov dword ptr [ebx + 0x238], 0x5e4678 */ W32((u32)(r_ebx+0x238u), 0x5e4678u);
    /* 005f8684: mov eax, ebx */ r_eax = r_ebx;
    /* 005f8686: mov byte ptr [ebx + 0x1f4], 3 */ W8((u32)(r_ebx+0x1f4u), 0x3u);
    /* 005f868d: mov dword ptr [ebx + 0x234], 0x5cf288 */ W32((u32)(r_ebx+0x234u), 0x5cf288u);
    /* 005f8697: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f8698: ret 8 */ FN_RET(0x005f8650); r_esp += 12; return;
}

void f_005f869c(void) /* sub_5F869C */
{
    FN_ENTER(0x005f869c);
    /* 005f869c: mov dword ptr [0xa8e0e4], 0x3f800000 */ W32((u32)(0xa8e0e4u), 0x3f800000u);
    /* 005f86a6: mov dword ptr [0xa8e0e8], 0x41000000 */ W32((u32)(0xa8e0e8u), 0x41000000u);
    /* 005f86b0: mov dword ptr [0xa8e0ec], 0x3fc00000 */ W32((u32)(0xa8e0ecu), 0x3fc00000u);
    /* 005f86ba: ret  */ FN_RET(0x005f869c); r_esp += 4; return;
}

void f_005f86bc(void) /* sub_5F86BC */
{
    FN_ENTER(0x005f86bc);
    /* 005f86bc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f86bd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005f86bf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005f86c1: call 0x5f86e0 */ r_esp -= 4; W32(r_esp, 0x5f86c6u); f_005f86e0();
    /* 005f86c6: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005f86ca: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f86cc: jne 0x5f86d2 */ if (!fZ) goto L_005f86d2;
L_005f86ce:; BB(0x005f86ce);
    /* 005f86ce: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f86cf: ret 4 */ FN_RET(0x005f86bc); r_esp += 8; return;
L_005f86d2:; BB(0x005f86d2);
    /* 005f86d2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f86d3: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5f86d8u); f_005c2f74();
    /* 005f86d8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f86d9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f86da: ret 4 */ FN_RET(0x005f86bc); r_esp += 8; return;
}

void f_005f86e0(void) /* sub_5F86E0 */
{
    FN_ENTER(0x005f86e0);
    /* 005f86e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f86e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005f86e3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f86e5: push 0x8ddad0 */ { u32 v = 0x8ddad0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f86ea: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f86f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f86f1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005f86f8: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f86fb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005f86fe: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005f8701: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005f8704: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005f8707: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005f870a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f870d: mov dword ptr [ecx], 0xb18b40 */ W32((u32)(r_ecx), 0xb18b40u);
    /* 005f8713: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005f871a: call 0x5f8fe8 */ r_esp -= 4; W32(r_esp, 0x5f871fu); f_005f8fe8();
    /* 005f871f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f8722: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f8729: mov esp, ebp */ r_esp = r_ebp;
    /* 005f872b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f872c: ret  */ FN_RET(0x005f86e0); r_esp += 4; return;
}

void f_005f8730(void) /* sub_5F8730 */
{
    FN_ENTER(0x005f8730);
    /* 005f8730: mov edx, ecx */ r_edx = r_ecx;
    /* 005f8732: mov eax, dword ptr [0xa8d84c] */ r_eax = R32((u32)(0xa8d84cu));
    /* 005f8737: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005f873a: je 0x5f873d */ if (fZ) goto L_005f873d;
L_005f873c:; BB(0x005f873c);
    /* 005f873c: ret  */ FN_RET(0x005f8730); r_esp += 4; return;
L_005f873d:; BB(0x005f873d);
    /* 005f873d: mov edx, dword ptr [edx + 0x244] */ r_edx = R32((u32)(r_edx+0x244u));
    /* 005f8743: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005f8745: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x5f874au); f_0082e9e4();
    /* 005f874a: ret  */ FN_RET(0x005f8730); r_esp += 4; return;
}

void f_005f874c(void) /* sub_5F874C */
{
    FN_ENTER(0x005f874c);
    /* 005f874c: push dword ptr [ecx + 0x248] */ { u32 v = R32((u32)(r_ecx+0x248u)); r_esp -= 4; W32(r_esp, v); }
    /* 005f8752: lea eax, [ecx + 0x244] */ r_eax = (u32)(r_ecx+0x244u);
    /* 005f8758: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f8759: call 0x5dd6d0 */ r_esp -= 4; W32(r_esp, 0x5f875eu); f_005dd6d0();
    /* 005f875e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005f8761: ret  */ FN_RET(0x005f874c); r_esp += 4; return;
}

void f_005f8764(void) /* sub_5F8764 */
{
    FN_ENTER(0x005f8764);
    /* 005f8764: mov eax, dword ptr [ecx + 0x24c] */ r_eax = R32((u32)(r_ecx+0x24cu));
    /* 005f876a: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005f876d: mov dword ptr [ecx + 0x24c], eax */ W32((u32)(r_ecx+0x24cu), r_eax);
    /* 005f8773: test al, 3 */ {  u32 a = (u8)r_eax; u32 b = 0x3u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f8775: jne 0x5f878f */ if (!fZ) goto L_005f878f;
L_005f8777:; BB(0x005f8777);
    /* 005f8777: mov eax, dword ptr [ecx + 0x248] */ r_eax = R32((u32)(r_ecx+0x248u));
    /* 005f877d: cmp eax, 0x3333 */ {  u32 a = r_eax; u32 b = 0x3333u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005f8782: jge 0x5f878f */ if ((fS==fO)) goto L_005f878f;
L_005f8784:; BB(0x005f8784);
    /* 005f8784: add eax, 0xb6 */ {  u32 a = r_eax; u32 b = 0xb6u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005f8789: mov dword ptr [ecx + 0x248], eax */ W32((u32)(r_ecx+0x248u), r_eax);
L_005f878f:; BB(0x005f878f);
    /* 005f878f: ret  */ FN_RET(0x005f8764); r_esp += 4; return;
}

void f_005f8790(void) /* sub_5F8790 */
{
    FN_ENTER(0x005f8790);
    /* 005f8790: mov eax, dword ptr [ecx + 0x248] */ r_eax = R32((u32)(r_ecx+0x248u));
    /* 005f8796: cmp eax, 0xccc */ {  u32 a = r_eax; u32 b = 0xcccu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005f879b: jle 0x5f87a8 */ if ((fZ||fS!=fO)) goto L_005f87a8;
L_005f879d:; BB(0x005f879d);
    /* 005f879d: add eax, 0xffffff4a */ {  u32 a = r_eax; u32 b = 0xffffff4au; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005f87a2: mov dword ptr [ecx + 0x248], eax */ W32((u32)(r_ecx+0x248u), r_eax);
L_005f87a8:; BB(0x005f87a8);
    /* 005f87a8: ret  */ FN_RET(0x005f8790); r_esp += 4; return;
}

void f_005f87ac(void) /* sub_5F87AC */
{
    FN_ENTER(0x005f87ac);
    /* 005f87ac: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005f87ad: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f87ae: mov esi, ecx */ r_esi = r_ecx;
    /* 005f87b0: mov eax, dword ptr [esi + 0xf8] */ r_eax = R32((u32)(r_esi+0xf8u));
    /* 005f87b6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f87b8: je 0x5f87f5 */ if (fZ) goto L_005f87f5;
L_005f87ba:; BB(0x005f87ba);
    /* 005f87ba: mov ebp, dword ptr [esi + 0xfc] */ r_ebp = R32((u32)(r_esi+0xfcu));
    /* 005f87c0: mov eax, dword ptr [ebp + 0x2c] */ r_eax = R32((u32)(r_ebp+0x2cu));
    /* 005f87c3: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 005f87c6: mov ebp, dword ptr [edx + 0x30] */ r_ebp = R32((u32)(r_edx+0x30u));
    /* 005f87c9: mov eax, dword ptr [esi + 0x250] */ r_eax = R32((u32)(r_esi+0x250u));
    /* 005f87cf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f87d1: jne 0x5f87d7 */ if (!fZ) goto L_005f87d7;
L_005f87d3:; BB(0x005f87d3);
    /* 005f87d3: or dword ptr [ebp], 0x10 */ { u32 ad = (u32)(r_ebp);  u32 a = R32(ad); u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_005f87d7:; BB(0x005f87d7);
    /* 005f87d7: mov ecx, esi */ r_ecx = r_esi;
    /* 005f87d9: call 0x5e84a8 */ r_esp -= 4; W32(r_esp, 0x5f87deu); f_005e84a8();
    /* 005f87de: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f87e0: mov ecx, esi */ r_ecx = r_esi;
    /* 005f87e2: call 0x5e6254 */ r_esp -= 4; W32(r_esp, 0x5f87e7u); f_005e6254();
    /* 005f87e7: mov eax, dword ptr [esi + 0x250] */ r_eax = R32((u32)(r_esi+0x250u));
    /* 005f87ed: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f87ef: jne 0x5f87f5 */ if (!fZ) goto L_005f87f5;
L_005f87f1:; BB(0x005f87f1);
    /* 005f87f1: and dword ptr [ebp], 0xffffffef */ { u32 ad = (u32)(r_ebp);  u32 a = R32(ad); u32 b = 0xffffffefu; u32 r = (a & b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_005f87f5:; BB(0x005f87f5);
    /* 005f87f5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f87f6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005f87f7: ret  */ FN_RET(0x005f87ac); r_esp += 4; return;
}

void f_005f87ee(void)
{
    FN_ENTER(0x005f87ee);
    /* 005f87ee: sal byte ptr [ebp + 4], 0x83 */ { u32 ad = (u32)(r_ebp+0x4u); u32 c = (3u) & 31; u32 a = R8(ad); u32 r = a; if (c) { r = (a << c) & 0xffu; W8(ad, r);  } }
    /* 005f87f2: add bh, ch */ {  u32 a = (u8)(r_ebx>>8); u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffff00ffu) | (((r) & 0xffu) << 8); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; fC = (r < a); }
    /* 005f87f5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f87f6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005f87f7: ret  */ FN_RET(0x005f87ee); r_esp += 4; return;
}

void f_005f87f8(void) /* sub_5F87F8 */
{
    FN_ENTER(0x005f87f8);
    /* 005f87f8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f87f9: mov ebp, esp */ r_ebp = r_esp;
    /* 005f87fb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f87fd: push 0x8ddaf8 */ { u32 v = 0x8ddaf8u; r_esp -= 4; W32(r_esp, v); }
    /* 005f8802: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f8808: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f8809: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005f8810: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f8813: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005f8816: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005f8819: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005f881c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005f881f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f8822: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f8824: je 0x5f887b */ if (fZ) goto L_005f887b;
L_005f8826:; BB(0x005f8826);
    /* 005f8826: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005f882d: push 0x260 */ { u32 v = 0x260u; r_esp -= 4; W32(r_esp, v); }
    /* 005f8832: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5f8837u); f_005caba4();
    /* 005f8837: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f8838: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005f883b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f883d: je 0x5f8877 */ if (fZ) goto L_005f8877;
L_005f883f:; BB(0x005f883f);
    /* 005f883f: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005f8846: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005f884d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f8850: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f8853: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f8854: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f885a: call 0x5f888c */ r_esp -= 4; W32(r_esp, 0x5f885fu); f_005f888c();
    /* 005f885f: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f8862: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005f8869:; BB(0x005f8869);
    /* 005f8869: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f886c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f8873: mov esp, ebp */ r_esp = r_ebp;
    /* 005f8875: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f8876: ret  */ FN_RET(0x005f87f8); r_esp += 4; return;
L_005f8877:; BB(0x005f8877);
    /* 005f8877: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f8879: jmp 0x5f8869 */ goto L_005f8869;
L_005f887b:; BB(0x005f887b);
    /* 005f887b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f887d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f8880: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f8887: mov esp, ebp */ r_esp = r_ebp;
    /* 005f8889: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f888a: ret  */ FN_RET(0x005f87f8); r_esp += 4; return;
}

void f_005f888c(void) /* sub_5F888C */
{
    FN_ENTER(0x005f888c);
    /* 005f888c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005f888d: mov edi, ecx */ r_edi = r_ecx;
    /* 005f888f: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f8893: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f8897: mov ecx, edi */ r_ecx = r_edi;
    /* 005f8899: call 0x5f9384 */ r_esp -= 4; W32(r_esp, 0x5f889eu); f_005f9384();
    /* 005f889e: mov edx, dword ptr [edi + 0x1dc] */ r_edx = R32((u32)(r_edi+0x1dcu));
    /* 005f88a4: mov dword ptr [edi], 0xb18b40 */ W32((u32)(r_edi), 0xb18b40u);
    /* 005f88aa: or edx, 0x23 */ {  u32 a = r_edx; u32 b = 0x23u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 005f88ad: mov dword ptr [edi + 0x1dc], edx */ W32((u32)(r_edi+0x1dcu), r_edx);
    /* 005f88b3: mov dword ptr [edi + 0x248], 0xccc */ W32((u32)(r_edi+0x248u), 0xcccu);
    /* 005f88bd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f88bf: mov dword ptr [edi + 0x244], eax */ W32((u32)(r_edi+0x244u), r_eax);
    /* 005f88c5: mov dword ptr [edi + 0x24c], eax */ W32((u32)(r_edi+0x24cu), r_eax);
    /* 005f88cb: mov dword ptr [edi + 0x250], 1 */ W32((u32)(r_edi+0x250u), 0x1u);
    /* 005f88d5: mov eax, edi */ r_eax = r_edi;
    /* 005f88d7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005f88d8: ret 8 */ FN_RET(0x005f888c); r_esp += 12; return;
}

void f_005f88dc(void) /* sub_5F88DC */
{
    FN_ENTER(0x005f88dc);
    /* 005f88dc: mov dword ptr [0xa8e0f0], 0x3f800000 */ W32((u32)(0xa8e0f0u), 0x3f800000u);
    /* 005f88e6: mov dword ptr [0xa8e0f4], 0x41000000 */ W32((u32)(0xa8e0f4u), 0x41000000u);
    /* 005f88f0: mov dword ptr [0xa8e0f8], 0x3fc00000 */ W32((u32)(0xa8e0f8u), 0x3fc00000u);
    /* 005f88fa: ret  */ FN_RET(0x005f88dc); r_esp += 4; return;
}

void f_005f88fc(void) /* sub_5F88FC */
{
    FN_ENTER(0x005f88fc);
    /* 005f88fc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f88fd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005f88ff: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005f8901: call 0x5f8920 */ r_esp -= 4; W32(r_esp, 0x5f8906u); f_005f8920();
    /* 005f8906: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005f890a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f890c: jne 0x5f8912 */ if (!fZ) goto L_005f8912;
L_005f890e:; BB(0x005f890e);
    /* 005f890e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f890f: ret 4 */ FN_RET(0x005f88fc); r_esp += 8; return;
L_005f8912:; BB(0x005f8912);
    /* 005f8912: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f8913: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5f8918u); f_005c2f74();
    /* 005f8918: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f8919: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f891a: ret 4 */ FN_RET(0x005f88fc); r_esp += 8; return;
}

void f_005f8920(void) /* sub_5F8920 */
{
    FN_ENTER(0x005f8920);
    /* 005f8920: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f8921: mov ebp, esp */ r_ebp = r_esp;
    /* 005f8923: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f8925: push 0x8ddb14 */ { u32 v = 0x8ddb14u; r_esp -= 4; W32(r_esp, v); }
    /* 005f892a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f8930: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f8931: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005f8938: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f893b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005f893e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005f8941: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005f8944: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005f8947: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005f894a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f894d: mov dword ptr [ecx], 0xb18ce0 */ W32((u32)(r_ecx), 0xb18ce0u);
    /* 005f8953: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005f895a: call 0x5e61c8 */ r_esp -= 4; W32(r_esp, 0x5f895fu); f_005e61c8();
    /* 005f895f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f8962: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f8969: mov esp, ebp */ r_esp = r_ebp;
    /* 005f896b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f896c: ret  */ FN_RET(0x005f8920); r_esp += 4; return;
}

void f_005f8970(void) /* sub_5F8970 */
{
    FN_ENTER(0x005f8970);
    /* 005f8970: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f8971: mov ebp, esp */ r_ebp = r_esp;
    /* 005f8973: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f8975: push 0x8ddb72 */ { u32 v = 0x8ddb72u; r_esp -= 4; W32(r_esp, v); }
    /* 005f897a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f8980: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f8981: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005f8988: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f898b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005f898e: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 005f8991: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 005f8994: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 005f8997: mov eax, dword ptr [ecx + 0xf8] */ r_eax = R32((u32)(r_ecx+0xf8u));
    /* 005f899d: movzx edx, word ptr [eax + 0x336] */ r_edx = (u32)R16((u32)(r_eax+0x336u));
    /* 005f89a4: mov eax, dword ptr [ecx + 0x18c] */ r_eax = R32((u32)(r_ecx+0x18cu));
    /* 005f89aa: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005f89ad: mov word ptr [ecx + 0x244], dx */ W16((u32)(r_ecx+0x244u), (u16)r_edx);
    /* 005f89b4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f89b6: mov dword ptr [ecx + 0x240], 0 */ W32((u32)(r_ecx+0x240u), 0x0u);
    /* 005f89c0: je 0x5f8aeb */ if (fZ) goto L_005f8aeb;
L_005f89c6:; BB(0x005f89c6);
    /* 005f89c6: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 005f89cd: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 005f89cf: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5f89d4u); f_005caba4();
    /* 005f89d4: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005f89d7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005f89da: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 005f89dd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f89df: je 0x5f8a23 */ if (fZ) goto L_005f8a23;
L_005f89e1:; BB(0x005f89e1);
    /* 005f89e1: mov dword ptr [ebp - 0x3c], 1 */ W32((u32)(r_ebp+0xffffffc4u), 0x1u);
    /* 005f89e8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005f89ef: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005f89f2: mov ecx, eax */ r_ecx = r_eax;
    /* 005f89f4: push 0x2328 */ { u32 v = 0x2328u; r_esp -= 4; W32(r_esp, v); }
    /* 005f89f9: movzx eax, word ptr [edx + 0xe4] */ r_eax = (u32)R16((u32)(r_edx+0xe4u));
    /* 005f8a00: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f8a01: push dword ptr [edx + 0x18c] */ { u32 v = R32((u32)(r_edx+0x18cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f8a07: call 0x5e5cac */ r_esp -= 4; W32(r_esp, 0x5f8a0cu); f_005e5cac();
    /* 005f8a0c: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005f8a0f: mov dword ptr [eax], 0xb0f808 */ W32((u32)(r_eax), 0xb0f808u);
    /* 005f8a15: mov dword ptr [eax + 0x2c], 0x3f000000 */ W32((u32)(r_eax+0x2cu), 0x3f000000u);
    /* 005f8a1c: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_005f8a23:; BB(0x005f8a23);
    /* 005f8a23: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005f8a2a: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 005f8a31: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 005f8a33: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5f8a38u); f_005caba4();
    /* 005f8a38: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005f8a3b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005f8a3e: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 005f8a41: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f8a43: je 0x5f8a87 */ if (fZ) goto L_005f8a87;
L_005f8a45:; BB(0x005f8a45);
    /* 005f8a45: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 005f8a4c: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005f8a53: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005f8a56: mov ecx, eax */ r_ecx = r_eax;
    /* 005f8a58: push 0x2328 */ { u32 v = 0x2328u; r_esp -= 4; W32(r_esp, v); }
    /* 005f8a5d: movzx eax, word ptr [edx + 0xe4] */ r_eax = (u32)R16((u32)(r_edx+0xe4u));
    /* 005f8a64: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f8a65: push dword ptr [edx + 0x18c] */ { u32 v = R32((u32)(r_edx+0x18cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f8a6b: call 0x5e5cac */ r_esp -= 4; W32(r_esp, 0x5f8a70u); f_005e5cac();
    /* 005f8a70: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005f8a73: mov dword ptr [eax], 0xb0f838 */ W32((u32)(r_eax), 0xb0f838u);
    /* 005f8a79: mov dword ptr [eax + 0x2c], 0x3f000000 */ W32((u32)(r_eax+0x2cu), 0x3f000000u);
    /* 005f8a80: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_005f8a87:; BB(0x005f8a87);
    /* 005f8a87: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005f8a8e: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 005f8a95: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 005f8a97: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5f8a9cu); f_005caba4();
    /* 005f8a9c: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005f8a9f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005f8aa2: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005f8aa5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f8aa7: je 0x5f8aeb */ if (fZ) goto L_005f8aeb;
L_005f8aa9:; BB(0x005f8aa9);
    /* 005f8aa9: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 005f8ab0: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 005f8ab7: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005f8aba: mov ecx, eax */ r_ecx = r_eax;
    /* 005f8abc: push 0x2328 */ { u32 v = 0x2328u; r_esp -= 4; W32(r_esp, v); }
    /* 005f8ac1: movzx eax, word ptr [edx + 0xe4] */ r_eax = (u32)R16((u32)(r_edx+0xe4u));
    /* 005f8ac8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f8ac9: push dword ptr [edx + 0x18c] */ { u32 v = R32((u32)(r_edx+0x18cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f8acf: call 0x5e5cac */ r_esp -= 4; W32(r_esp, 0x5f8ad4u); f_005e5cac();
    /* 005f8ad4: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005f8ad7: mov dword ptr [eax], 0xb0f850 */ W32((u32)(r_eax), 0xb0f850u);
    /* 005f8add: mov dword ptr [eax + 0x2c], 0x3f000000 */ W32((u32)(r_eax+0x2cu), 0x3f000000u);
    /* 005f8ae4: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_005f8aeb:; BB(0x005f8aeb);
    /* 005f8aeb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f8aee: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f8af5: mov esp, ebp */ r_esp = r_ebp;
    /* 005f8af7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f8af8: ret  */ FN_RET(0x005f8970); r_esp += 4; return;
}

void f_005f8afc(void) /* sub_5F8AFC */
{
    FN_ENTER(0x005f8afc);
    /* 005f8afc: mov dword ptr [ecx + 0x240], 0 */ W32((u32)(r_ecx+0x240u), 0x0u);
    /* 005f8b06: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 005f8b0b: mov word ptr [ecx + 0x244], ax */ W16((u32)(r_ecx+0x244u), (u16)r_eax);
    /* 005f8b12: ret  */ FN_RET(0x005f8afc); r_esp += 4; return;
}

void f_005f8b14(void) /* sub_5F8B14 */
{
    FN_ENTER(0x005f8b14);
    /* 005f8b14: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f8b15: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f8b16: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005f8b18: call 0x807d60 */ r_esp -= 4; W32(r_esp, 0x5f8b1du); f_00807d60();
    /* 005f8b1d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f8b1f: je 0x5f8b66 */ if (fZ) goto L_005f8b66;
L_005f8b21:; BB(0x005f8b21);
    /* 005f8b21: mov ecx, dword ptr [ebx + 0xf8] */ r_ecx = R32((u32)(r_ebx+0xf8u));
    /* 005f8b27: movsx edx, word ptr [ecx + 0x336] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x336u));
    /* 005f8b2e: movzx eax, word ptr [ebx + 0x244] */ r_eax = (u32)R16((u32)(r_ebx+0x244u));
    /* 005f8b35: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005f8b37: movsx ebp, ax */ r_ebp = (u32)(i32)(i16)(u16)r_eax;
    /* 005f8b3a: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005f8b3c: je 0x5f8b45 */ if (fZ) goto L_005f8b45;
L_005f8b3e:; BB(0x005f8b3e);
    /* 005f8b3e: mov word ptr [ebx + 0x244], dx */ W16((u32)(r_ebx+0x244u), (u16)r_edx);
L_005f8b45:; BB(0x005f8b45);
    /* 005f8b45: jle 0x5f8b66 */ if ((fZ||fS!=fO)) goto L_005f8b66;
L_005f8b47:; BB(0x005f8b47);
    /* 005f8b47: lea eax, [ebp] */ r_eax = (u32)(r_ebp);
    /* 005f8b4a: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 005f8b4d: add ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005f8b4f: sar ebp, 1 */ { u32 c = (1u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebp = r;  } }
    /* 005f8b51: movsx ebp, bp */ r_ebp = (u32)(i32)(i16)(u16)r_ebp;
    /* 005f8b54: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f8b55: call 0x777414 */ r_esp -= 4; W32(r_esp, 0x5f8b5au); f_00777414();
    /* 005f8b5a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f8b5b: mov ecx, dword ptr [ebx + 0xf8] */ r_ecx = R32((u32)(r_ebx+0xf8u));
    /* 005f8b61: call 0x777368 */ r_esp -= 4; W32(r_esp, 0x5f8b66u); f_00777368();
L_005f8b66:; BB(0x005f8b66);
    /* 005f8b66: add dword ptr [ebx + 0x240], 1 */ { u32 ad = (u32)(r_ebx+0x240u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005f8b6d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f8b6e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f8b6f: ret  */ FN_RET(0x005f8b14); r_esp += 4; return;
}

void f_005f8b70(void) /* sub_5F8B70 */
{
    FN_ENTER(0x005f8b70);
    /* 005f8b70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f8b71: mov ebp, esp */ r_ebp = r_esp;
    /* 005f8b73: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f8b75: push 0x8ddb98 */ { u32 v = 0x8ddb98u; r_esp -= 4; W32(r_esp, v); }
    /* 005f8b7a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f8b80: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f8b81: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005f8b88: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f8b8b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005f8b8e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005f8b91: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005f8b94: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005f8b97: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f8b9a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f8b9c: je 0x5f8bf3 */ if (fZ) goto L_005f8bf3;
L_005f8b9e:; BB(0x005f8b9e);
    /* 005f8b9e: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005f8ba5: push 0x248 */ { u32 v = 0x248u; r_esp -= 4; W32(r_esp, v); }
    /* 005f8baa: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5f8bafu); f_005caba4();
    /* 005f8baf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f8bb0: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005f8bb3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f8bb5: je 0x5f8bef */ if (fZ) goto L_005f8bef;
L_005f8bb7:; BB(0x005f8bb7);
    /* 005f8bb7: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005f8bbe: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005f8bc5: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f8bc8: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f8bcb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f8bcc: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f8bd2: call 0x5f8c04 */ r_esp -= 4; W32(r_esp, 0x5f8bd7u); f_005f8c04();
    /* 005f8bd7: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f8bda: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005f8be1:; BB(0x005f8be1);
    /* 005f8be1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f8be4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f8beb: mov esp, ebp */ r_esp = r_ebp;
    /* 005f8bed: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f8bee: ret  */ FN_RET(0x005f8b70); r_esp += 4; return;
L_005f8bef:; BB(0x005f8bef);
    /* 005f8bef: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f8bf1: jmp 0x5f8be1 */ goto L_005f8be1;
L_005f8bf3:; BB(0x005f8bf3);
    /* 005f8bf3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f8bf5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f8bf8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f8bff: mov esp, ebp */ r_esp = r_ebp;
    /* 005f8c01: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f8c02: ret  */ FN_RET(0x005f8b70); r_esp += 4; return;
}

void f_005f8c04(void) /* sub_5F8C04 */
{
    FN_ENTER(0x005f8c04);
    /* 005f8c04: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f8c05: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005f8c07: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f8c0b: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f8c0f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005f8c11: call 0x5e959c */ r_esp -= 4; W32(r_esp, 0x5f8c16u); f_005e959c();
    /* 005f8c16: mov dword ptr [ebx], 0xb18ce0 */ W32((u32)(r_ebx), 0xb18ce0u);
    /* 005f8c1c: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 005f8c21: mov word ptr [ebx + 0x244], dx */ W16((u32)(r_ebx+0x244u), (u16)r_edx);
    /* 005f8c28: mov eax, ebx */ r_eax = r_ebx;
    /* 005f8c2a: mov dword ptr [ebx + 0x240], 0 */ W32((u32)(r_ebx+0x240u), 0x0u);
    /* 005f8c34: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f8c35: ret 8 */ FN_RET(0x005f8c04); r_esp += 12; return;
}

void f_005f8c38(void) /* sub_5F8C38 */
{
    FN_ENTER(0x005f8c38);
    /* 005f8c38: mov dword ptr [0xa8e0fc], 0x3f800000 */ W32((u32)(0xa8e0fcu), 0x3f800000u);
    /* 005f8c42: mov dword ptr [0xa8e100], 0x41000000 */ W32((u32)(0xa8e100u), 0x41000000u);
    /* 005f8c4c: mov dword ptr [0xa8e104], 0x3fc00000 */ W32((u32)(0xa8e104u), 0x3fc00000u);
    /* 005f8c56: ret  */ FN_RET(0x005f8c38); r_esp += 4; return;
}

void f_005f8c58(void) /* sub_5F8C58 */
{
    FN_ENTER(0x005f8c58);
    /* 005f8c58: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f8c59: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005f8c5b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005f8c5d: call 0x5f8c7c */ r_esp -= 4; W32(r_esp, 0x5f8c62u); f_005f8c7c();
    /* 005f8c62: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005f8c66: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f8c68: jne 0x5f8c6e */ if (!fZ) goto L_005f8c6e;
L_005f8c6a:; BB(0x005f8c6a);
    /* 005f8c6a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f8c6b: ret 4 */ FN_RET(0x005f8c58); r_esp += 8; return;
L_005f8c6e:; BB(0x005f8c6e);
    /* 005f8c6e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f8c6f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5f8c74u); f_005c2f74();
    /* 005f8c74: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f8c75: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f8c76: ret 4 */ FN_RET(0x005f8c58); r_esp += 8; return;
}

void f_005f8c7c(void) /* sub_5F8C7C */
{
    FN_ENTER(0x005f8c7c);
    /* 005f8c7c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f8c7d: mov ebp, esp */ r_ebp = r_esp;
    /* 005f8c7f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f8c81: push 0x8ddbb4 */ { u32 v = 0x8ddbb4u; r_esp -= 4; W32(r_esp, v); }
    /* 005f8c86: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f8c8c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f8c8d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005f8c94: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f8c97: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005f8c9a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005f8c9d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005f8ca0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005f8ca3: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005f8ca6: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f8ca9: mov dword ptr [ecx], 0xb18e40 */ W32((u32)(r_ecx), 0xb18e40u);
    /* 005f8caf: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005f8cb6: call 0x5e61c8 */ r_esp -= 4; W32(r_esp, 0x5f8cbbu); f_005e61c8();
    /* 005f8cbb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f8cbe: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f8cc5: mov esp, ebp */ r_esp = r_ebp;
    /* 005f8cc7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f8cc8: ret  */ FN_RET(0x005f8c7c); r_esp += 4; return;
}

void f_005f8ccc(void) /* sub_5F8CCC */
{
    FN_ENTER(0x005f8ccc);
    /* 005f8ccc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f8cce: add ecx, 0x240 */ {  u32 a = r_ecx; u32 b = 0x240u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f8cd4: push 0xfffff1c8 */ { u32 v = 0xfffff1c8u; r_esp -= 4; W32(r_esp, v); }
    /* 005f8cd9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f8cda: call 0x5dd6f8 */ r_esp -= 4; W32(r_esp, 0x5f8cdfu); f_005dd6f8();
    /* 005f8cdf: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005f8ce2: ret  */ FN_RET(0x005f8ccc); r_esp += 4; return;
}

void f_005f8ce4(void) /* sub_5F8CE4 */
{
    FN_ENTER(0x005f8ce4);
    /* 005f8ce4: push 0x2000 */ { u32 v = 0x2000u; r_esp -= 4; W32(r_esp, v); }
    /* 005f8ce9: add ecx, 0x240 */ {  u32 a = r_ecx; u32 b = 0x240u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f8cef: push 0x71c */ { u32 v = 0x71cu; r_esp -= 4; W32(r_esp, v); }
    /* 005f8cf4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f8cf5: call 0x5dd6f8 */ r_esp -= 4; W32(r_esp, 0x5f8cfau); f_005dd6f8();
    /* 005f8cfa: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005f8cfd: ret  */ FN_RET(0x005f8ce4); r_esp += 4; return;
}

void f_005f8d00(void) /* sub_5F8D00 */
{
    FN_ENTER(0x005f8d00);
    /* 005f8d00: mov edx, ecx */ r_edx = r_ecx;
    /* 005f8d02: mov eax, dword ptr [0xa8d84c] */ r_eax = R32((u32)(0xa8d84cu));
    /* 005f8d07: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f8d0a: je 0x5f8d3e */ if (fZ) goto L_005f8d3e;
L_005f8d0c:; BB(0x005f8d0c);
    /* 005f8d0c: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f8d0f: je 0x5f8d3e */ if (fZ) goto L_005f8d3e;
L_005f8d11:; BB(0x005f8d11);
    /* 005f8d11: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f8d14: je 0x5f8d3e */ if (fZ) goto L_005f8d3e;
L_005f8d16:; BB(0x005f8d16);
    /* 005f8d16: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f8d19: jne 0x5f8d29 */ if (!fZ) goto L_005f8d29;
L_005f8d1b:; BB(0x005f8d1b);
    /* 005f8d1b: mov edx, dword ptr [edx + 0x240] */ r_edx = R32((u32)(r_edx+0x240u));
    /* 005f8d21: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005f8d23: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x5f8d28u); f_00830c04();
    /* 005f8d28: ret  */ FN_RET(0x005f8d00); r_esp += 4; return;
L_005f8d29:; BB(0x005f8d29);
    /* 005f8d29: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005f8d2c: jne 0x5f8d43 */ if (!fZ) goto L_005f8d43;
L_005f8d2e:; BB(0x005f8d2e);
    /* 005f8d2e: mov edx, dword ptr [edx + 0x240] */ r_edx = R32((u32)(r_edx+0x240u));
    /* 005f8d34: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005f8d36: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005f8d38: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x5f8d3du); f_00830c04();
    /* 005f8d3d: ret  */ FN_RET(0x005f8d00); r_esp += 4; return;
L_005f8d3e:; BB(0x005f8d3e);
    /* 005f8d3e: call 0x5c34a0 */ r_esp -= 4; W32(r_esp, 0x5f8d43u); f_005c34a0();
L_005f8d43:; BB(0x005f8d43);
    /* 005f8d43: ret  */ FN_RET(0x005f8d00); r_esp += 4; return;
}

void f_005f8d44(void) /* sub_5F8D44 */
{
    FN_ENTER(0x005f8d44);
    /* 005f8d44: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f8d45: sub esp, 0x74 */ {  u32 a = r_esp; u32 b = 0x74u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f8d48: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005f8d4a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005f8d4c: call 0x5e90b0 */ r_esp -= 4; W32(r_esp, 0x5f8d51u); f_005e90b0();
    /* 005f8d51: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f8d53: je 0x5f8def */ if (fZ) goto L_005f8def;
L_005f8d59:; BB(0x005f8d59);
    /* 005f8d59: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005f8d5b: call 0x5e8fa4 */ r_esp -= 4; W32(r_esp, 0x5f8d60u); f_005e8fa4();
    /* 005f8d60: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 005f8d64: call 0x5d0114 */ r_esp -= 4; W32(r_esp, 0x5f8d69u); f_005d0114();
    /* 005f8d69: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 005f8d6d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f8d6e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005f8d70: call 0x5e8f04 */ r_esp -= 4; W32(r_esp, 0x5f8d75u); f_005e8f04();
    /* 005f8d75: lea eax, [esp + 0x38] */ r_eax = (u32)(r_esp+0x38u);
    /* 005f8d79: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f8d7a: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005f8d7c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005f8d7e: call 0x5e83c8 */ r_esp -= 4; W32(r_esp, 0x5f8d83u); f_005e83c8();
    /* 005f8d83: lea eax, [esp + 0x44] */ r_eax = (u32)(r_esp+0x44u);
    /* 005f8d87: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f8d88: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005f8d8a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005f8d8c: call 0x5e83c8 */ r_esp -= 4; W32(r_esp, 0x5f8d91u); f_005e83c8();
    /* 005f8d91: lea eax, [esp + 0x50] */ r_eax = (u32)(r_esp+0x50u);
    /* 005f8d95: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f8d96: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 005f8d98: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005f8d9a: call 0x5e83c8 */ r_esp -= 4; W32(r_esp, 0x5f8d9fu); f_005e83c8();
    /* 005f8d9f: lea eax, [esp + 0x5c] */ r_eax = (u32)(r_esp+0x5cu);
    /* 005f8da3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f8da4: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 005f8da6: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005f8da8: call 0x5e83c8 */ r_esp -= 4; W32(r_esp, 0x5f8dadu); f_005e83c8();
    /* 005f8dad: lea eax, [esp + 0x68] */ r_eax = (u32)(r_esp+0x68u);
    /* 005f8db1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f8db2: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005f8db4: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005f8db6: call 0x5e83c8 */ r_esp -= 4; W32(r_esp, 0x5f8dbbu); f_005e83c8();
    /* 005f8dbb: mov eax, dword ptr [ebp + 0xf8] */ r_eax = R32((u32)(r_ebp+0xf8u));
    /* 005f8dc1: mov edx, dword ptr [eax + 0x60] */ r_edx = R32((u32)(r_eax+0x60u));
    /* 005f8dc4: mov dword ptr [esp + 0x1c], 0xa */ W32((u32)(r_esp+0x1cu), 0xau);
    /* 005f8dcc: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 005f8dd0: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 005f8dd4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f8dd5: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f8ddb: call 0x5d012c */ r_esp -= 4; W32(r_esp, 0x5f8de0u); f_005d012c();
    /* 005f8de0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005f8de3: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005f8de5: call 0x5e9058 */ r_esp -= 4; W32(r_esp, 0x5f8deau); f_005e9058();
    /* 005f8dea: add esp, 0x74 */ {  u32 a = r_esp; u32 b = 0x74u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005f8ded: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f8dee: ret  */ FN_RET(0x005f8d44); r_esp += 4; return;
L_005f8def:; BB(0x005f8def);
    /* 005f8def: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005f8df2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f8df3: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 005f8df5: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005f8df7: call 0x5e83c8 */ r_esp -= 4; W32(r_esp, 0x5f8dfcu); f_005e83c8();
    /* 005f8dfc: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 005f8dff: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005f8e01: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 005f8e04: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005f8e06: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f8e07: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f8e08: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f8e09: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005f8e0b: call dword ptr [eax + 0xc8] */ { u32 t = R32((u32)(r_eax+0xc8u)); r_esp -= 4; W32(r_esp, 0x5f8e11u); call_ind(t); }
    /* 005f8e11: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005f8e14: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f8e15: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 005f8e17: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005f8e19: call 0x5e83c8 */ r_esp -= 4; W32(r_esp, 0x5f8e1eu); f_005e83c8();
    /* 005f8e1e: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 005f8e21: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 005f8e24: mov edx, 1 */ r_edx = 0x1u;
    /* 005f8e29: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f8e2a: push 0x11c7 */ { u32 v = 0x11c7u; r_esp -= 4; W32(r_esp, v); }
    /* 005f8e2f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f8e30: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f8e31: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005f8e33: call dword ptr [eax + 0xc8] */ { u32 t = R32((u32)(r_eax+0xc8u)); r_esp -= 4; W32(r_esp, 0x5f8e39u); call_ind(t); }
    /* 005f8e39: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005f8e3c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f8e3d: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005f8e3f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005f8e41: call 0x5e83c8 */ r_esp -= 4; W32(r_esp, 0x5f8e46u); f_005e83c8();
    /* 005f8e46: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005f8e49: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005f8e4b: push 0xffffee39 */ { u32 v = 0xffffee39u; r_esp -= 4; W32(r_esp, v); }
    /* 005f8e50: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 005f8e53: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005f8e55: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f8e56: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005f8e58: call dword ptr [edx + 0xc8] */ { u32 t = R32((u32)(r_edx+0xc8u)); r_esp -= 4; W32(r_esp, 0x5f8e5eu); call_ind(t); }
    /* 005f8e5e: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005f8e61: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f8e62: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005f8e64: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005f8e66: call 0x5e83c8 */ r_esp -= 4; W32(r_esp, 0x5f8e6bu); f_005e83c8();
    /* 005f8e6b: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005f8e6e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005f8e70: push 0x2000 */ { u32 v = 0x2000u; r_esp -= 4; W32(r_esp, v); }
    /* 005f8e75: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 005f8e78: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005f8e7a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f8e7b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005f8e7d: call dword ptr [edx + 0xc8] */ { u32 t = R32((u32)(r_edx+0xc8u)); r_esp -= 4; W32(r_esp, 0x5f8e83u); call_ind(t); }
    /* 005f8e83: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005f8e86: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f8e87: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005f8e89: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005f8e8b: call 0x5e83c8 */ r_esp -= 4; W32(r_esp, 0x5f8e90u); f_005e83c8();
    /* 005f8e90: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005f8e93: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005f8e95: push 0xffffe000 */ { u32 v = 0xffffe000u; r_esp -= 4; W32(r_esp, v); }
    /* 005f8e9a: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 005f8e9d: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005f8e9f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f8ea0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005f8ea2: call dword ptr [edx + 0xc8] */ { u32 t = R32((u32)(r_edx+0xc8u)); r_esp -= 4; W32(r_esp, 0x5f8ea8u); call_ind(t); }
    /* 005f8ea8: add esp, 0x74 */ {  u32 a = r_esp; u32 b = 0x74u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005f8eab: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f8eac: ret  */ FN_RET(0x005f8d44); r_esp += 4; return;
}

void f_005f8eb0(void) /* sub_5F8EB0 */
{
    FN_ENTER(0x005f8eb0);
    /* 005f8eb0: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 005f8eb4: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 005f8eb7: or eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f8ebc: mov dword ptr [edx + 0x40], eax */ W32((u32)(r_edx+0x40u), r_eax);
    /* 005f8ebf: mov dword ptr [edx + 0x78], 0x12 */ W32((u32)(r_edx+0x78u), 0x12u);
    /* 005f8ec6: ret 4 */ FN_RET(0x005f8eb0); r_esp += 8; return;
}

void f_005f8ecc(void) /* sub_5F8ECC */
{
    FN_ENTER(0x005f8ecc);
    /* 005f8ecc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f8ecd: mov ebp, esp */ r_ebp = r_esp;
    /* 005f8ecf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f8ed1: push 0x8ddbdc */ { u32 v = 0x8ddbdcu; r_esp -= 4; W32(r_esp, v); }
    /* 005f8ed6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f8edc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f8edd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005f8ee4: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f8ee7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005f8eea: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005f8eed: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005f8ef0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005f8ef3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f8ef6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f8ef8: je 0x5f8f4f */ if (fZ) goto L_005f8f4f;
L_005f8efa:; BB(0x005f8efa);
    /* 005f8efa: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005f8f01: push 0x244 */ { u32 v = 0x244u; r_esp -= 4; W32(r_esp, v); }
    /* 005f8f06: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5f8f0bu); f_005caba4();
    /* 005f8f0b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f8f0c: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005f8f0f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f8f11: je 0x5f8f4b */ if (fZ) goto L_005f8f4b;
L_005f8f13:; BB(0x005f8f13);
    /* 005f8f13: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005f8f1a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005f8f21: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f8f24: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f8f27: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f8f28: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f8f2e: call 0x5f8f60 */ r_esp -= 4; W32(r_esp, 0x5f8f33u); f_005f8f60();
    /* 005f8f33: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f8f36: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005f8f3d:; BB(0x005f8f3d);
    /* 005f8f3d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f8f40: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f8f47: mov esp, ebp */ r_esp = r_ebp;
    /* 005f8f49: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f8f4a: ret  */ FN_RET(0x005f8ecc); r_esp += 4; return;
L_005f8f4b:; BB(0x005f8f4b);
    /* 005f8f4b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f8f4d: jmp 0x5f8f3d */ goto L_005f8f3d;
L_005f8f4f:; BB(0x005f8f4f);
    /* 005f8f4f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f8f51: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f8f54: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f8f5b: mov esp, ebp */ r_esp = r_ebp;
    /* 005f8f5d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f8f5e: ret  */ FN_RET(0x005f8ecc); r_esp += 4; return;
}

void f_005f8f60(void) /* sub_5F8F60 */
{
    FN_ENTER(0x005f8f60);
    /* 005f8f60: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f8f61: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005f8f63: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f8f67: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f8f6b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005f8f6d: call 0x5e959c */ r_esp -= 4; W32(r_esp, 0x5f8f72u); f_005e959c();
    /* 005f8f72: mov edx, dword ptr [ebx + 0x1dc] */ r_edx = R32((u32)(r_ebx+0x1dcu));
    /* 005f8f78: mov dword ptr [ebx], 0xb18e40 */ W32((u32)(r_ebx), 0xb18e40u);
    /* 005f8f7e: or edx, 0x22 */ {  u32 a = r_edx; u32 b = 0x22u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f8f81: mov dword ptr [ebx + 0x1dc], edx */ W32((u32)(r_ebx+0x1dcu), r_edx);
    /* 005f8f87: mov dword ptr [ebx + 0x240], 0 */ W32((u32)(r_ebx+0x240u), 0x0u);
    /* 005f8f91: mov eax, ebx */ r_eax = r_ebx;
    /* 005f8f93: mov dword ptr [ebx + 0x238], 0x5e4518 */ W32((u32)(r_ebx+0x238u), 0x5e4518u);
    /* 005f8f9d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f8f9e: ret 8 */ FN_RET(0x005f8f60); r_esp += 12; return;
}

void f_005f8fa4(void) /* sub_5F8FA4 */
{
    FN_ENTER(0x005f8fa4);
    /* 005f8fa4: mov dword ptr [0xa8e108], 0x3f800000 */ W32((u32)(0xa8e108u), 0x3f800000u);
    /* 005f8fae: mov dword ptr [0xa8e10c], 0x41000000 */ W32((u32)(0xa8e10cu), 0x41000000u);
    /* 005f8fb8: mov dword ptr [0xa8e110], 0x3fc00000 */ W32((u32)(0xa8e110u), 0x3fc00000u);
    /* 005f8fc2: ret  */ FN_RET(0x005f8fa4); r_esp += 4; return;
}

void f_005f8fc4(void) /* sub_5F8FC4 */
{
    FN_ENTER(0x005f8fc4);
    /* 005f8fc4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f8fc5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005f8fc7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005f8fc9: call 0x5f8fe8 */ r_esp -= 4; W32(r_esp, 0x5f8fceu); f_005f8fe8();
    /* 005f8fce: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005f8fd2: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f8fd4: jne 0x5f8fda */ if (!fZ) goto L_005f8fda;
L_005f8fd6:; BB(0x005f8fd6);
    /* 005f8fd6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f8fd7: ret 4 */ FN_RET(0x005f8fc4); r_esp += 8; return;
L_005f8fda:; BB(0x005f8fda);
    /* 005f8fda: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f8fdb: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5f8fe0u); f_005c2f74();
    /* 005f8fe0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f8fe1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f8fe2: ret 4 */ FN_RET(0x005f8fc4); r_esp += 8; return;
}

void f_005f8fe8(void) /* sub_5F8FE8 */
{
    FN_ENTER(0x005f8fe8);
    /* 005f8fe8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f8fe9: mov ebp, esp */ r_ebp = r_esp;
    /* 005f8feb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f8fed: push 0x8ddbf8 */ { u32 v = 0x8ddbf8u; r_esp -= 4; W32(r_esp, v); }
    /* 005f8ff2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f8ff8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f8ff9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005f9000: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f9003: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005f9006: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005f9009: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005f900c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005f900f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005f9012: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f9015: mov dword ptr [ecx], 0xb19000 */ W32((u32)(r_ecx), 0xb19000u);
    /* 005f901b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005f9022: call 0x5e61c8 */ r_esp -= 4; W32(r_esp, 0x5f9027u); f_005e61c8();
    /* 005f9027: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f902a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f9031: mov esp, ebp */ r_esp = r_ebp;
    /* 005f9033: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f9034: ret  */ FN_RET(0x005f8fe8); r_esp += 4; return;
}

