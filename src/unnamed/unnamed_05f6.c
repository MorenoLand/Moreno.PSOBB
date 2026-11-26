#include "protos.h"

void f_005f606c(void) /* sub_5F606C */
{
    FN_ENTER(0x005f606c);
    /* 005f606c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f606d: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005f606f: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f6073: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f6077: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005f6079: call 0x5e959c */ r_esp -= 4; W32(r_esp, 0x5f607eu); f_005e959c();
    /* 005f607e: mov dword ptr [ebp], 0xb171c0 */ W32((u32)(r_ebp), 0xb171c0u);
    /* 005f6085: mov eax, ebp */ r_eax = r_ebp;
    /* 005f6087: mov dword ptr [ebp + 0x248], 0x3f800000 */ W32((u32)(r_ebp+0x248u), 0x3f800000u);
    /* 005f6091: mov dword ptr [ebp + 0x244], 0x3f800000 */ W32((u32)(r_ebp+0x244u), 0x3f800000u);
    /* 005f609b: mov dword ptr [ebp + 0x240], 0x3f800000 */ W32((u32)(r_ebp+0x240u), 0x3f800000u);
    /* 005f60a5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f60a6: ret 8 */ FN_RET(0x005f606c); r_esp += 12; return;
}

void f_005f60ac(void) /* sub_5F60AC */
{
    FN_ENTER(0x005f60ac);
    /* 005f60ac: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f60ad: mov ebp, esp */ r_ebp = r_esp;
    /* 005f60af: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f60b1: push 0x8dd5a0 */ { u32 v = 0x8dd5a0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f60b6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f60bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f60bd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005f60c4: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f60c7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005f60ca: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005f60cd: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005f60d0: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005f60d3: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005f60d6: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005f60d9: mov eax, ecx */ r_eax = r_ecx;
    /* 005f60db: mov dword ptr [eax], 0xb17320 */ W32((u32)(r_eax), 0xb17320u);
    /* 005f60e1: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005f60e8: call 0x5f8fe8 */ r_esp -= 4; W32(r_esp, 0x5f60edu); f_005f8fe8();
    /* 005f60ed: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f60f0: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f60f2: jne 0x5f6104 */ if (!fZ) goto L_005f6104;
L_005f60f4:; BB(0x005f60f4);
    /* 005f60f4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f60f7: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f60fe: mov esp, ebp */ r_esp = r_ebp;
    /* 005f6100: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f6101: ret 4 */ FN_RET(0x005f60ac); r_esp += 8; return;
L_005f6104:; BB(0x005f6104);
    /* 005f6104: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005f6107: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f6108: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5f610du); f_005c2f74();
    /* 005f610d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f610e: jmp 0x5f60f4 */ goto L_005f60f4;
}

void f_005f6110(void) /* sub_5F6110 */
{
    FN_ENTER(0x005f6110);
    /* 005f6110: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f6111: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f6114: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005f6116: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005f6118: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005f611b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f611c: call 0x5e7534 */ r_esp -= 4; W32(r_esp, 0x5f6121u); f_005e7534();
    /* 005f6121: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005f6124: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 005f6126: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f6127: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5f612cu); f_0050b510();
    /* 005f612c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005f612f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005f6131: call 0x5e69c8 */ r_esp -= 4; W32(r_esp, 0x5f6136u); f_005e69c8();
    /* 005f6136: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 005f6139: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005f613b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f613c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005f613e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f613f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f6140: call 0x5e6df8 */ r_esp -= 4; W32(r_esp, 0x5f6145u); f_005e6df8();
    /* 005f6145: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005f6148: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f6149: ret  */ FN_RET(0x005f6110); r_esp += 4; return;
}

void f_005f614c(void) /* sub_5F614C */
{
    FN_ENTER(0x005f614c);
    /* 005f614c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005f614d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f614e: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f6151: mov esi, ecx */ r_esi = r_ecx;
    /* 005f6153: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
    /* 005f6157: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 005f615a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f615b: mov eax, dword ptr [ebx + 0x40] */ r_eax = R32((u32)(r_ebx+0x40u));
    /* 005f615e: or eax, 0x39c */ {  u32 a = r_eax; u32 b = 0x39cu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005f6163: mov dword ptr [ebx + 0x40], eax */ W32((u32)(r_ebx+0x40u), r_eax);
    /* 005f6166: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 005f6168: mov ecx, esi */ r_ecx = r_esi;
    /* 005f616a: call dword ptr [eax + 0xec] */ { u32 t = R32((u32)(r_eax+0xecu)); r_esp -= 4; W32(r_esp, 0x5f6170u); call_ind(t); }
    /* 005f6170: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 005f6173: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 005f6177: mov dword ptr [ebx + 0x60], eax */ W32((u32)(r_ebx+0x60u), r_eax);
    /* 005f617a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005f617e: mov dword ptr [ebx + 0x64], edx */ W32((u32)(r_ebx+0x64u), r_edx);
    /* 005f6181: mov dword ptr [ebx + 0x68], eax */ W32((u32)(r_ebx+0x68u), r_eax);
    /* 005f6184: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 005f6188: mov dword ptr [ebx + 0x6c], eax */ W32((u32)(r_ebx+0x6cu), r_eax);
    /* 005f618b: mov ecx, dword ptr [esi + 0x1ac] */ r_ecx = R32((u32)(r_esi+0x1acu));
    /* 005f6191: mov dword ptr [ebx + 0x44], ecx */ W32((u32)(r_ebx+0x44u), r_ecx);
    /* 005f6194: mov dword ptr [ebx + 0x10], 4 */ W32((u32)(r_ebx+0x10u), 0x4u);
    /* 005f619b: mov dword ptr [ebx + 0x4c], 0x40000000 */ W32((u32)(r_ebx+0x4cu), 0x40000000u);
    /* 005f61a2: mov dword ptr [ebx + 0x70], 0x5cf2ec */ W32((u32)(r_ebx+0x70u), 0x5cf2ecu);
    /* 005f61a9: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005f61ac: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f61ad: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005f61ae: ret 4 */ FN_RET(0x005f614c); r_esp += 8; return;
}

void f_005f61b4(void) /* sub_5F61B4 */
{
    FN_ENTER(0x005f61b4);
    /* 005f61b4: mov eax, dword ptr [0xa8d84c] */ r_eax = R32((u32)(0xa8d84cu));
    /* 005f61b9: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005f61bc: je 0x5f61bf */ if (fZ) goto L_005f61bf;
L_005f61be:; BB(0x005f61be);
    /* 005f61be: ret  */ FN_RET(0x005f61b4); r_esp += 4; return;
L_005f61bf:; BB(0x005f61bf);
    /* 005f61bf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f61c1: push dword ptr [ecx + 0x244] */ { u32 v = R32((u32)(r_ecx+0x244u)); r_esp -= 4; W32(r_esp, v); }
    /* 005f61c7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005f61c9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f61cb: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x5f61d0u); f_00830b74();
    /* 005f61d0: ret  */ FN_RET(0x005f61b4); r_esp += 4; return;
}

void f_005f61d4(void) /* sub_5F61D4 */
{
    FN_ENTER(0x005f61d4);
    /* 005f61d4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f61d6: add ecx, 0x244 */ {  u32 a = r_ecx; u32 b = 0x244u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f61dc: push 0xbf800000 */ { u32 v = 0xbf800000u; r_esp -= 4; W32(r_esp, v); }
    /* 005f61e1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f61e2: call 0x5dd728 */ r_esp -= 4; W32(r_esp, 0x5f61e7u); f_005dd728();
    /* 005f61e7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005f61ea: ret  */ FN_RET(0x005f61d4); r_esp += 4; return;
}

void f_005f61ec(void) /* sub_5F61EC */
{
    FN_ENTER(0x005f61ec);
    /* 005f61ec: push 0x40800000 */ { u32 v = 0x40800000u; r_esp -= 4; W32(r_esp, v); }
    /* 005f61f1: add ecx, 0x244 */ {  u32 a = r_ecx; u32 b = 0x244u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f61f7: push 0x3f000000 */ { u32 v = 0x3f000000u; r_esp -= 4; W32(r_esp, v); }
    /* 005f61fc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f61fd: call 0x5dd728 */ r_esp -= 4; W32(r_esp, 0x5f6202u); f_005dd728();
    /* 005f6202: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005f6205: ret  */ FN_RET(0x005f61ec); r_esp += 4; return;
}

void f_005f6208(void) /* sub_5F6208 */
{
    FN_ENTER(0x005f6208);
    /* 005f6208: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f6209: mov ebp, esp */ r_ebp = r_esp;
    /* 005f620b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f620d: push 0x8dd5c8 */ { u32 v = 0x8dd5c8u; r_esp -= 4; W32(r_esp, v); }
    /* 005f6212: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f6218: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f6219: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005f6220: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f6223: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005f6226: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005f6229: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005f622c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005f622f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f6232: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f6234: je 0x5f628b */ if (fZ) goto L_005f628b;
L_005f6236:; BB(0x005f6236);
    /* 005f6236: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005f623d: push 0x248 */ { u32 v = 0x248u; r_esp -= 4; W32(r_esp, v); }
    /* 005f6242: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5f6247u); f_005caba4();
    /* 005f6247: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f6248: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005f624b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f624d: je 0x5f6287 */ if (fZ) goto L_005f6287;
L_005f624f:; BB(0x005f624f);
    /* 005f624f: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005f6256: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005f625d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f6260: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f6263: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f6264: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f626a: call 0x5f629c */ r_esp -= 4; W32(r_esp, 0x5f626fu); f_005f629c();
    /* 005f626f: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f6272: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005f6279:; BB(0x005f6279);
    /* 005f6279: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f627c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f6283: mov esp, ebp */ r_esp = r_ebp;
    /* 005f6285: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f6286: ret  */ FN_RET(0x005f6208); r_esp += 4; return;
L_005f6287:; BB(0x005f6287);
    /* 005f6287: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f6289: jmp 0x5f6279 */ goto L_005f6279;
L_005f628b:; BB(0x005f628b);
    /* 005f628b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f628d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f6290: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f6297: mov esp, ebp */ r_esp = r_ebp;
    /* 005f6299: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f629a: ret  */ FN_RET(0x005f6208); r_esp += 4; return;
}

void f_005f629c(void) /* sub_5F629C */
{
    FN_ENTER(0x005f629c);
    /* 005f629c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f629d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005f629f: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f62a3: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f62a7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005f62a9: call 0x5f9384 */ r_esp -= 4; W32(r_esp, 0x5f62aeu); f_005f9384();
    /* 005f62ae: mov edx, dword ptr [ebx + 0x1dc] */ r_edx = R32((u32)(r_ebx+0x1dcu));
    /* 005f62b4: mov dword ptr [ebx], 0xb17320 */ W32((u32)(r_ebx), 0xb17320u);
    /* 005f62ba: or edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f62bd: mov dword ptr [ebx + 0x1dc], edx */ W32((u32)(r_ebx+0x1dcu), r_edx);
    /* 005f62c3: mov dword ptr [ebx + 0x244], 0 */ W32((u32)(r_ebx+0x244u), 0x0u);
    /* 005f62cd: mov eax, ebx */ r_eax = r_ebx;
    /* 005f62cf: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f62d0: ret 8 */ FN_RET(0x005f629c); r_esp += 12; return;
}

void f_005f62d4(void) /* sub_5F62D4 */
{
    FN_ENTER(0x005f62d4);
    /* 005f62d4: mov dword ptr [0xa8e03c], 0x3f800000 */ W32((u32)(0xa8e03cu), 0x3f800000u);
    /* 005f62de: mov dword ptr [0xa8e040], 0x41000000 */ W32((u32)(0xa8e040u), 0x41000000u);
    /* 005f62e8: mov dword ptr [0xa8e044], 0x3fc00000 */ W32((u32)(0xa8e044u), 0x3fc00000u);
    /* 005f62f2: ret  */ FN_RET(0x005f62d4); r_esp += 4; return;
}

void f_005f62f4(void) /* sub_5F62F4 */
{
    FN_ENTER(0x005f62f4);
    /* 005f62f4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f62f5: mov ebp, esp */ r_ebp = r_esp;
    /* 005f62f7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f62f9: push 0x8dd5e4 */ { u32 v = 0x8dd5e4u; r_esp -= 4; W32(r_esp, v); }
    /* 005f62fe: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f6304: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f6305: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005f630c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f630f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005f6312: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005f6315: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005f6318: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005f631b: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005f631e: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005f6321: mov eax, ecx */ r_eax = r_ecx;
    /* 005f6323: mov dword ptr [eax], 0xb17480 */ W32((u32)(r_eax), 0xb17480u);
    /* 005f6329: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005f6330: call 0x5f8fe8 */ r_esp -= 4; W32(r_esp, 0x5f6335u); f_005f8fe8();
    /* 005f6335: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f6338: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f633a: jne 0x5f634c */ if (!fZ) goto L_005f634c;
L_005f633c:; BB(0x005f633c);
    /* 005f633c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f633f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f6346: mov esp, ebp */ r_esp = r_ebp;
    /* 005f6348: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f6349: ret 4 */ FN_RET(0x005f62f4); r_esp += 8; return;
L_005f634c:; BB(0x005f634c);
    /* 005f634c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005f634f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f6350: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5f6355u); f_005c2f74();
    /* 005f6355: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f6356: jmp 0x5f633c */ goto L_005f633c;
}

void f_005f6358(void) /* sub_5F6358 */
{
    FN_ENTER(0x005f6358);
    /* 005f6358: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f6359: mov ebp, esp */ r_ebp = r_esp;
    /* 005f635b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f635d: push 0x8dd60c */ { u32 v = 0x8dd60cu; r_esp -= 4; W32(r_esp, v); }
    /* 005f6362: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f6368: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f6369: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005f6370: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f6373: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005f6376: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005f6379: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005f637c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005f637f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f6382: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f6384: je 0x5f63db */ if (fZ) goto L_005f63db;
L_005f6386:; BB(0x005f6386);
    /* 005f6386: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005f638d: push 0x244 */ { u32 v = 0x244u; r_esp -= 4; W32(r_esp, v); }
    /* 005f6392: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5f6397u); f_005caba4();
    /* 005f6397: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f6398: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005f639b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f639d: je 0x5f63d7 */ if (fZ) goto L_005f63d7;
L_005f639f:; BB(0x005f639f);
    /* 005f639f: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005f63a6: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005f63ad: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f63b0: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f63b3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f63b4: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f63ba: call 0x5f63ec */ r_esp -= 4; W32(r_esp, 0x5f63bfu); f_005f63ec();
    /* 005f63bf: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f63c2: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005f63c9:; BB(0x005f63c9);
    /* 005f63c9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f63cc: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f63d3: mov esp, ebp */ r_esp = r_ebp;
    /* 005f63d5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f63d6: ret  */ FN_RET(0x005f6358); r_esp += 4; return;
L_005f63d7:; BB(0x005f63d7);
    /* 005f63d7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f63d9: jmp 0x5f63c9 */ goto L_005f63c9;
L_005f63db:; BB(0x005f63db);
    /* 005f63db: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f63dd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f63e0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f63e7: mov esp, ebp */ r_esp = r_ebp;
    /* 005f63e9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f63ea: ret  */ FN_RET(0x005f6358); r_esp += 4; return;
}

void f_005f63ec(void) /* sub_5F63EC */
{
    FN_ENTER(0x005f63ec);
    /* 005f63ec: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f63ed: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005f63ef: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f63f3: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f63f7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005f63f9: call 0x5f9384 */ r_esp -= 4; W32(r_esp, 0x5f63feu); f_005f9384();
    /* 005f63fe: mov edx, dword ptr [ebx + 0x1dc] */ r_edx = R32((u32)(r_ebx+0x1dcu));
    /* 005f6404: mov dword ptr [ebx], 0xb17480 */ W32((u32)(r_ebx), 0xb17480u);
    /* 005f640a: or edx, 0x600 */ {  u32 a = r_edx; u32 b = 0x600u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f6410: mov dword ptr [ebx + 0x1dc], edx */ W32((u32)(r_ebx+0x1dcu), r_edx);
    /* 005f6416: mov eax, ebx */ r_eax = r_ebx;
    /* 005f6418: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f6419: ret 8 */ FN_RET(0x005f63ec); r_esp += 12; return;
}

void f_005f641c(void) /* sub_5F641C */
{
    FN_ENTER(0x005f641c);
    /* 005f641c: mov dword ptr [0xa8e048], 0x3f800000 */ W32((u32)(0xa8e048u), 0x3f800000u);
    /* 005f6426: mov dword ptr [0xa8e04c], 0x41000000 */ W32((u32)(0xa8e04cu), 0x41000000u);
    /* 005f6430: mov dword ptr [0xa8e050], 0x3fc00000 */ W32((u32)(0xa8e050u), 0x3fc00000u);
    /* 005f643a: ret  */ FN_RET(0x005f641c); r_esp += 4; return;
}

void f_005f643c(void) /* sub_5F643C */
{
    FN_ENTER(0x005f643c);
    /* 005f643c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f643d: mov ebp, esp */ r_ebp = r_esp;
    /* 005f643f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f6441: push 0x8dd628 */ { u32 v = 0x8dd628u; r_esp -= 4; W32(r_esp, v); }
    /* 005f6446: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f644c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f644d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005f6454: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f6457: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005f645a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005f645d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005f6460: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005f6463: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005f6466: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005f6469: mov eax, ecx */ r_eax = r_ecx;
    /* 005f646b: mov dword ptr [eax], 0xb175e0 */ W32((u32)(r_eax), 0xb175e0u);
    /* 005f6471: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005f6478: call 0x5f8fe8 */ r_esp -= 4; W32(r_esp, 0x5f647du); f_005f8fe8();
    /* 005f647d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f6480: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f6482: jne 0x5f6494 */ if (!fZ) goto L_005f6494;
L_005f6484:; BB(0x005f6484);
    /* 005f6484: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f6487: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f648e: mov esp, ebp */ r_esp = r_ebp;
    /* 005f6490: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f6491: ret 4 */ FN_RET(0x005f643c); r_esp += 8; return;
L_005f6494:; BB(0x005f6494);
    /* 005f6494: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005f6497: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f6498: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5f649du); f_005c2f74();
    /* 005f649d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f649e: jmp 0x5f6484 */ goto L_005f6484;
}

void f_005f64a0(void) /* sub_5F64A0 */
{
    FN_ENTER(0x005f64a0);
    /* 005f64a0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f64a1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005f64a3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005f64a5: call 0x5e7f6c */ r_esp -= 4; W32(r_esp, 0x5f64aau); f_005e7f6c();
    /* 005f64aa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f64ac: jne 0x5f64c1 */ if (!fZ) goto L_005f64c1;
L_005f64ae:; BB(0x005f64ae);
    /* 005f64ae: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005f64b0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005f64b2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f64b3: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f64b9: call 0x5cc3b0 */ r_esp -= 4; W32(r_esp, 0x5f64beu); f_005cc3b0();
    /* 005f64be: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_005f64c1:; BB(0x005f64c1);
    /* 005f64c1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f64c2: ret  */ FN_RET(0x005f64a0); r_esp += 4; return;
}

void f_005f64c4(void) /* sub_5F64C4 */
{
    FN_ENTER(0x005f64c4);
    /* 005f64c4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f64c5: mov ebp, esp */ r_ebp = r_esp;
    /* 005f64c7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f64c9: push 0x8dd650 */ { u32 v = 0x8dd650u; r_esp -= 4; W32(r_esp, v); }
    /* 005f64ce: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f64d4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f64d5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005f64dc: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f64df: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005f64e2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005f64e5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005f64e8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005f64eb: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f64ee: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f64f0: je 0x5f6547 */ if (fZ) goto L_005f6547;
L_005f64f2:; BB(0x005f64f2);
    /* 005f64f2: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005f64f9: push 0x244 */ { u32 v = 0x244u; r_esp -= 4; W32(r_esp, v); }
    /* 005f64fe: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5f6503u); f_005caba4();
    /* 005f6503: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f6504: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005f6507: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f6509: je 0x5f6543 */ if (fZ) goto L_005f6543;
L_005f650b:; BB(0x005f650b);
    /* 005f650b: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005f6512: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005f6519: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f651c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f651f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f6520: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f6526: call 0x5f6558 */ r_esp -= 4; W32(r_esp, 0x5f652bu); f_005f6558();
    /* 005f652b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f652e: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005f6535:; BB(0x005f6535);
    /* 005f6535: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f6538: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f653f: mov esp, ebp */ r_esp = r_ebp;
    /* 005f6541: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f6542: ret  */ FN_RET(0x005f64c4); r_esp += 4; return;
L_005f6543:; BB(0x005f6543);
    /* 005f6543: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f6545: jmp 0x5f6535 */ goto L_005f6535;
L_005f6547:; BB(0x005f6547);
    /* 005f6547: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f6549: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f654c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f6553: mov esp, ebp */ r_esp = r_ebp;
    /* 005f6555: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f6556: ret  */ FN_RET(0x005f64c4); r_esp += 4; return;
}

void f_005f6558(void) /* sub_5F6558 */
{
    FN_ENTER(0x005f6558);
    /* 005f6558: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f6559: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005f655b: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f655f: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f6563: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005f6565: call 0x5f9384 */ r_esp -= 4; W32(r_esp, 0x5f656au); f_005f9384();
    /* 005f656a: mov dword ptr [ebp], 0xb175e0 */ W32((u32)(r_ebp), 0xb175e0u);
    /* 005f6571: mov eax, ebp */ r_eax = r_ebp;
    /* 005f6573: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f6574: ret 8 */ FN_RET(0x005f6558); r_esp += 12; return;
}

void f_005f6578(void) /* sub_5F6578 */
{
    FN_ENTER(0x005f6578);
    /* 005f6578: mov dword ptr [0xa8e054], 0x3f800000 */ W32((u32)(0xa8e054u), 0x3f800000u);
    /* 005f6582: mov dword ptr [0xa8e058], 0x41000000 */ W32((u32)(0xa8e058u), 0x41000000u);
    /* 005f658c: mov dword ptr [0xa8e05c], 0x3fc00000 */ W32((u32)(0xa8e05cu), 0x3fc00000u);
    /* 005f6596: ret  */ FN_RET(0x005f6578); r_esp += 4; return;
}

void f_005f6598(void) /* sub_5F6598 */
{
    FN_ENTER(0x005f6598);
    /* 005f6598: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f6599: mov ebp, esp */ r_ebp = r_esp;
    /* 005f659b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f659d: push 0x8dd66c */ { u32 v = 0x8dd66cu; r_esp -= 4; W32(r_esp, v); }
    /* 005f65a2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f65a8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f65a9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005f65b0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f65b3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005f65b6: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005f65b9: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005f65bc: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005f65bf: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005f65c2: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005f65c5: mov eax, ecx */ r_eax = r_ecx;
    /* 005f65c7: mov dword ptr [eax], 0xb17740 */ W32((u32)(r_eax), 0xb17740u);
    /* 005f65cd: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005f65d4: call 0x5f8fe8 */ r_esp -= 4; W32(r_esp, 0x5f65d9u); f_005f8fe8();
    /* 005f65d9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f65dc: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f65de: jne 0x5f65f0 */ if (!fZ) goto L_005f65f0;
L_005f65e0:; BB(0x005f65e0);
    /* 005f65e0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f65e3: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f65ea: mov esp, ebp */ r_esp = r_ebp;
    /* 005f65ec: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f65ed: ret 4 */ FN_RET(0x005f6598); r_esp += 8; return;
L_005f65f0:; BB(0x005f65f0);
    /* 005f65f0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005f65f3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f65f4: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5f65f9u); f_005c2f74();
    /* 005f65f9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f65fa: jmp 0x5f65e0 */ goto L_005f65e0;
}

void f_005f65fc(void) /* sub_5F65FC */
{
    FN_ENTER(0x005f65fc);
    /* 005f65fc: mov eax, dword ptr [ecx + 0x1dc] */ r_eax = R32((u32)(r_ecx+0x1dcu));
    /* 005f6602: test eax, 0x20000000 */ {  u32 a = r_eax; u32 b = 0x20000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f6607: jne 0x5f660e */ if (!fZ) goto L_005f660e;
L_005f6609:; BB(0x005f6609);
    /* 005f6609: call 0x5e84a8 */ r_esp -= 4; W32(r_esp, 0x5f660eu); f_005e84a8();
L_005f660e:; BB(0x005f660e);
    /* 005f660e: ret  */ FN_RET(0x005f65fc); r_esp += 4; return;
}

void f_005f6610(void) /* sub_5F6610 */
{
    FN_ENTER(0x005f6610);
    /* 005f6610: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f6611: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005f6613: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005f6615: call 0x5e7f6c */ r_esp -= 4; W32(r_esp, 0x5f661au); f_005e7f6c();
    /* 005f661a: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f661d: je 0x5f6630 */ if (fZ) goto L_005f6630;
L_005f661f:; BB(0x005f661f);
    /* 005f661f: mov eax, dword ptr [ebx + 0x244] */ r_eax = R32((u32)(r_ebx+0x244u));
    /* 005f6625: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f6628: mov dword ptr [ebx + 0x244], eax */ W32((u32)(r_ebx+0x244u), r_eax);
    /* 005f662e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f662f: ret  */ FN_RET(0x005f6610); r_esp += 4; return;
L_005f6630:; BB(0x005f6630);
    /* 005f6630: mov eax, dword ptr [ebx + 0x244] */ r_eax = R32((u32)(r_ebx+0x244u));
    /* 005f6636: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f6639: mov dword ptr [ebx + 0x244], eax */ W32((u32)(r_ebx+0x244u), r_eax);
    /* 005f663f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f6640: ret  */ FN_RET(0x005f6610); r_esp += 4; return;
}

void f_005f6644(void) /* sub_5F6644 */
{
    FN_ENTER(0x005f6644);
    /* 005f6644: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f6645: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f6648: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005f664a: mov ecx, dword ptr [ebp + 0xf8] */ r_ecx = R32((u32)(r_ebp+0xf8u));
    /* 005f6650: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005f6652: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 005f6655: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f6656: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 005f6658: call dword ptr [eax + 0x10c] */ { u32 t = R32((u32)(r_eax+0x10cu)); r_esp -= 4; W32(r_esp, 0x5f665eu); call_ind(t); }
    /* 005f665e: mov ecx, dword ptr [ebp + 0xf8] */ r_ecx = R32((u32)(r_ebp+0xf8u));
    /* 005f6664: add ecx, 0x8a4 */ {  u32 a = r_ecx; u32 b = 0x8a4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f666a: call 0x6a3250 */ r_esp -= 4; W32(r_esp, 0x5f666fu); f_006a3250();
    /* 005f666f: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 005f6672: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f6675: je 0x5f669a */ if (fZ) goto L_005f669a;
L_005f6677:; BB(0x005f6677);
    /* 005f6677: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005f667a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f667c: push dword ptr [ebp + 0xfc] */ { u32 v = R32((u32)(r_ebp+0xfcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f6682: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005f6684: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f6685: call 0x5e6df8 */ r_esp -= 4; W32(r_esp, 0x5f668au); f_005e6df8();
L_005f668a:; BB(0x005f668a);
    /* 005f668a: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005f668d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f668e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005f6690: call 0x5f66dc */ r_esp -= 4; W32(r_esp, 0x5f6695u); f_005f66dc();
    /* 005f6695: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005f6698: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f6699: ret  */ FN_RET(0x005f6644); r_esp += 4; return;
L_005f669a:; BB(0x005f669a);
    /* 005f669a: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005f669d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f669f: push dword ptr [ebp + 0xfc] */ { u32 v = R32((u32)(r_ebp+0xfcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f66a5: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005f66a7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f66a8: call 0x5e6df8 */ r_esp -= 4; W32(r_esp, 0x5f66adu); f_005e6df8();
    /* 005f66ad: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005f66b0: push 0x1555 */ { u32 v = 0x1555u; r_esp -= 4; W32(r_esp, v); }
    /* 005f66b5: push dword ptr [ebp + 0xfc] */ { u32 v = R32((u32)(r_ebp+0xfcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f66bb: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005f66bd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f66be: call 0x5e6df8 */ r_esp -= 4; W32(r_esp, 0x5f66c3u); f_005e6df8();
    /* 005f66c3: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005f66c6: push 0xffffeaab */ { u32 v = 0xffffeaabu; r_esp -= 4; W32(r_esp, v); }
    /* 005f66cb: push dword ptr [ebp + 0xfc] */ { u32 v = R32((u32)(r_ebp+0xfcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f66d1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005f66d3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f66d4: call 0x5e6df8 */ r_esp -= 4; W32(r_esp, 0x5f66d9u); f_005e6df8();
    /* 005f66d9: jmp 0x5f668a */ goto L_005f668a;
}

void f_005f66dc(void) /* sub_5F66DC */
{
    FN_ENTER(0x005f66dc);
    /* 005f66dc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f66dd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005f66df: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005f66e1: call 0x5e7f6c */ r_esp -= 4; W32(r_esp, 0x5f66e6u); f_005e7f6c();
    /* 005f66e6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f66e8: jne 0x5f6700 */ if (!fZ) goto L_005f6700;
L_005f66ea:; BB(0x005f66ea);
    /* 005f66ea: push 0x1bd */ { u32 v = 0x1bdu; r_esp -= 4; W32(r_esp, v); }
    /* 005f66ef: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f66f1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f66f2: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f66f8: call 0x5cc64c */ r_esp -= 4; W32(r_esp, 0x5f66fdu); f_005cc64c();
    /* 005f66fd: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_005f6700:; BB(0x005f6700);
    /* 005f6700: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f6701: ret 4 */ FN_RET(0x005f66dc); r_esp += 8; return;
}

void f_005f6704(void) /* sub_5F6704 */
{
    FN_ENTER(0x005f6704);
    /* 005f6704: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005f6705: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f6708: mov esi, ecx */ r_esi = r_ecx;
    /* 005f670a: mov eax, dword ptr [0xa8d84c] */ r_eax = R32((u32)(0xa8d84cu));
    /* 005f670f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f6711: jne 0x5f6782 */ if (!fZ) goto L_005f6782;
L_005f6713:; BB(0x005f6713);
    /* 005f6713: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 005f671a: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 005f671d: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 005f6725: mov dword ptr [esp + 8], 0x3f000000 */ W32((u32)(r_esp+0x8u), 0x3f000000u);
    /* 005f672d: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x5f6732u); f_0082d838();
    /* 005f6732: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005f6734: mov edx, 0x18e3 */ r_edx = 0x18e3u;
    /* 005f6739: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x5f673eu); f_0082e9e4();
    /* 005f673e: mov eax, dword ptr [esi + 0x244] */ r_eax = R32((u32)(r_esi+0x244u));
    /* 005f6744: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005f6746: je 0x5f6782 */ if (fZ) goto L_005f6782;
L_005f6748:; BB(0x005f6748);
    /* 005f6748: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x5f674du); f_0082d7b0();
    /* 005f674d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005f674f: mov edx, 0x2aaa */ r_edx = 0x2aaau;
    /* 005f6754: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x5f6759u); f_0082e9e4();
    /* 005f6759: mov ecx, esi */ r_ecx = r_esi;
    /* 005f675b: call 0x5c3384 */ r_esp -= 4; W32(r_esp, 0x5f6760u); f_005c3384();
    /* 005f6760: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5f6765u); f_0082da80();
    /* 005f6765: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x5f676au); f_0082d7b0();
    /* 005f676a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005f676c: mov edx, 0xffffd556 */ r_edx = 0xffffd556u;
    /* 005f6771: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x5f6776u); f_0082e9e4();
    /* 005f6776: mov ecx, esi */ r_ecx = r_esi;
    /* 005f6778: call 0x5c3384 */ r_esp -= 4; W32(r_esp, 0x5f677du); f_005c3384();
    /* 005f677d: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5f6782u); f_0082da80();
L_005f6782:; BB(0x005f6782);
    /* 005f6782: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005f6785: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005f6786: ret  */ FN_RET(0x005f6704); r_esp += 4; return;
}

void f_005f6788(void) /* sub_5F6788 */
{
    FN_ENTER(0x005f6788);
    /* 005f6788: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005f6789: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f678c: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 005f6790: mov edx, dword ptr [esi + 0x40] */ r_edx = R32((u32)(r_esi+0x40u));
    /* 005f6793: mov dword ptr [esi + 0x4c], 0x40a00000 */ W32((u32)(r_esi+0x4cu), 0x40a00000u);
    /* 005f679a: or edx, 0x282 */ {  u32 a = r_edx; u32 b = 0x282u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 005f67a0: mov dword ptr [esi + 0x40], edx */ W32((u32)(r_esi+0x40u), r_edx);
    /* 005f67a3: mov dword ptr [esi + 0x58], 0xc000 */ W32((u32)(r_esi+0x58u), 0xc000u);
    /* 005f67aa: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 005f67ad: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005f67af: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f67b0: call dword ptr [eax + 0xec] */ { u32 t = R32((u32)(r_eax+0xecu)); r_esp -= 4; W32(r_esp, 0x5f67b6u); call_ind(t); }
    /* 005f67b6: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 005f67b9: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 005f67bd: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 005f67c1: mov dword ptr [esi + 0x60], eax */ W32((u32)(r_esi+0x60u), r_eax);
    /* 005f67c4: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 005f67c8: mov dword ptr [esi + 0x74], 0x5cca98 */ W32((u32)(r_esi+0x74u), 0x5cca98u);
    /* 005f67cf: mov dword ptr [esi + 0x64], edx */ W32((u32)(r_esi+0x64u), r_edx);
    /* 005f67d2: mov dword ptr [esi + 0x68], ecx */ W32((u32)(r_esi+0x68u), r_ecx);
    /* 005f67d5: mov dword ptr [esi + 0x6c], eax */ W32((u32)(r_esi+0x6cu), r_eax);
    /* 005f67d8: mov dword ptr [esi + 0x70], 0x5ccbe0 */ W32((u32)(r_esi+0x70u), 0x5ccbe0u);
    /* 005f67df: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005f67e2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005f67e3: ret 4 */ FN_RET(0x005f6788); r_esp += 8; return;
}

void f_005f67e8(void) /* sub_5F67E8 */
{
    FN_ENTER(0x005f67e8);
    /* 005f67e8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f67e9: mov ebp, esp */ r_ebp = r_esp;
    /* 005f67eb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f67ed: push 0x8dd694 */ { u32 v = 0x8dd694u; r_esp -= 4; W32(r_esp, v); }
    /* 005f67f2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f67f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f67f9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005f6800: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f6803: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005f6806: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005f6809: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005f680c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005f680f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f6812: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f6814: je 0x5f686b */ if (fZ) goto L_005f686b;
L_005f6816:; BB(0x005f6816);
    /* 005f6816: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005f681d: push 0x248 */ { u32 v = 0x248u; r_esp -= 4; W32(r_esp, v); }
    /* 005f6822: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5f6827u); f_005caba4();
    /* 005f6827: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f6828: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005f682b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f682d: je 0x5f6867 */ if (fZ) goto L_005f6867;
L_005f682f:; BB(0x005f682f);
    /* 005f682f: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005f6836: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005f683d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f6840: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f6843: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f6844: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f684a: call 0x5f687c */ r_esp -= 4; W32(r_esp, 0x5f684fu); f_005f687c();
    /* 005f684f: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f6852: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005f6859:; BB(0x005f6859);
    /* 005f6859: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f685c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f6863: mov esp, ebp */ r_esp = r_ebp;
    /* 005f6865: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f6866: ret  */ FN_RET(0x005f67e8); r_esp += 4; return;
L_005f6867:; BB(0x005f6867);
    /* 005f6867: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f6869: jmp 0x5f6859 */ goto L_005f6859;
L_005f686b:; BB(0x005f686b);
    /* 005f686b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f686d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f6870: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f6877: mov esp, ebp */ r_esp = r_ebp;
    /* 005f6879: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f687a: ret  */ FN_RET(0x005f67e8); r_esp += 4; return;
}

void f_005f6876(void)
{
    FN_ENTER(0x005f6876);
    /* 005f6876: add byte ptr [ebx - 0x6f3ca21b], cl */ { u32 ad = (u32)(r_ebx+0x90c35de5u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 005f687c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f687d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005f687f: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f6883: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f6887: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005f6889: call 0x5f9384 */ r_esp -= 4; W32(r_esp, 0x5f688eu); f_005f9384();
    /* 005f688e: mov edx, dword ptr [ebx + 0x1dc] */ r_edx = R32((u32)(r_ebx+0x1dcu));
    /* 005f6894: mov dword ptr [ebx], 0xb17740 */ W32((u32)(r_ebx), 0xb17740u);
    /* 005f689a: or edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f689d: mov dword ptr [ebx + 0x1dc], edx */ W32((u32)(r_ebx+0x1dcu), r_edx);
    /* 005f68a3: mov dword ptr [ebx + 0x244], 0 */ W32((u32)(r_ebx+0x244u), 0x0u);
    /* 005f68ad: mov eax, ebx */ r_eax = r_ebx;
    /* 005f68af: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f68b0: ret 8 */ FN_RET(0x005f6876); r_esp += 12; return;
}

void f_005f687c(void) /* sub_5F687C */
{
    FN_ENTER(0x005f687c);
    /* 005f687c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f687d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005f687f: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f6883: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f6887: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005f6889: call 0x5f9384 */ r_esp -= 4; W32(r_esp, 0x5f688eu); f_005f9384();
    /* 005f688e: mov edx, dword ptr [ebx + 0x1dc] */ r_edx = R32((u32)(r_ebx+0x1dcu));
    /* 005f6894: mov dword ptr [ebx], 0xb17740 */ W32((u32)(r_ebx), 0xb17740u);
    /* 005f689a: or edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f689d: mov dword ptr [ebx + 0x1dc], edx */ W32((u32)(r_ebx+0x1dcu), r_edx);
    /* 005f68a3: mov dword ptr [ebx + 0x244], 0 */ W32((u32)(r_ebx+0x244u), 0x0u);
    /* 005f68ad: mov eax, ebx */ r_eax = r_ebx;
    /* 005f68af: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f68b0: ret 8 */ FN_RET(0x005f687c); r_esp += 12; return;
}

void f_005f68b4(void) /* sub_5F68B4 */
{
    FN_ENTER(0x005f68b4);
    /* 005f68b4: mov dword ptr [0xa8e060], 0x3f800000 */ W32((u32)(0xa8e060u), 0x3f800000u);
    /* 005f68be: mov dword ptr [0xa8e064], 0x41000000 */ W32((u32)(0xa8e064u), 0x41000000u);
    /* 005f68c8: mov dword ptr [0xa8e068], 0x3fc00000 */ W32((u32)(0xa8e068u), 0x3fc00000u);
    /* 005f68d2: ret  */ FN_RET(0x005f68b4); r_esp += 4; return;
}

void f_005f68d4(void) /* sub_5F68D4 */
{
    FN_ENTER(0x005f68d4);
    /* 005f68d4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f68d5: mov ebp, esp */ r_ebp = r_esp;
    /* 005f68d7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f68d9: push 0x8dd6b0 */ { u32 v = 0x8dd6b0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f68de: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f68e4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f68e5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005f68ec: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f68ef: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005f68f2: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005f68f5: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005f68f8: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005f68fb: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005f68fe: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005f6901: mov eax, ecx */ r_eax = r_ecx;
    /* 005f6903: mov dword ptr [eax], 0xb178a0 */ W32((u32)(r_eax), 0xb178a0u);
    /* 005f6909: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005f6910: call 0x5f8fe8 */ r_esp -= 4; W32(r_esp, 0x5f6915u); f_005f8fe8();
    /* 005f6915: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f6918: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f691a: jne 0x5f692c */ if (!fZ) goto L_005f692c;
L_005f691c:; BB(0x005f691c);
    /* 005f691c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f691f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f6926: mov esp, ebp */ r_esp = r_ebp;
    /* 005f6928: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f6929: ret 4 */ FN_RET(0x005f68d4); r_esp += 8; return;
L_005f692c:; BB(0x005f692c);
    /* 005f692c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005f692f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f6930: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5f6935u); f_005c2f74();
    /* 005f6935: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f6936: jmp 0x5f691c */ goto L_005f691c;
}

void f_005f6938(void) /* sub_5F6938 */
{
    FN_ENTER(0x005f6938);
    /* 005f6938: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f6939: mov ebp, esp */ r_ebp = r_esp;
    /* 005f693b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f693d: push 0x8dd6d8 */ { u32 v = 0x8dd6d8u; r_esp -= 4; W32(r_esp, v); }
    /* 005f6942: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f6948: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f6949: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005f6950: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f6953: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005f6956: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005f6959: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005f695c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005f695f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f6962: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f6964: je 0x5f69bb */ if (fZ) goto L_005f69bb;
L_005f6966:; BB(0x005f6966);
    /* 005f6966: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005f696d: push 0x244 */ { u32 v = 0x244u; r_esp -= 4; W32(r_esp, v); }
    /* 005f6972: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5f6977u); f_005caba4();
    /* 005f6977: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f6978: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005f697b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f697d: je 0x5f69b7 */ if (fZ) goto L_005f69b7;
L_005f697f:; BB(0x005f697f);
    /* 005f697f: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005f6986: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005f698d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f6990: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f6993: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f6994: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f699a: call 0x5f69cc */ r_esp -= 4; W32(r_esp, 0x5f699fu); f_005f69cc();
    /* 005f699f: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f69a2: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005f69a9:; BB(0x005f69a9);
    /* 005f69a9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f69ac: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f69b3: mov esp, ebp */ r_esp = r_ebp;
    /* 005f69b5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f69b6: ret  */ FN_RET(0x005f6938); r_esp += 4; return;
L_005f69b7:; BB(0x005f69b7);
    /* 005f69b7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f69b9: jmp 0x5f69a9 */ goto L_005f69a9;
L_005f69bb:; BB(0x005f69bb);
    /* 005f69bb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f69bd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f69c0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f69c7: mov esp, ebp */ r_esp = r_ebp;
    /* 005f69c9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f69ca: ret  */ FN_RET(0x005f6938); r_esp += 4; return;
}

void f_005f69cc(void) /* sub_5F69CC */
{
    FN_ENTER(0x005f69cc);
    /* 005f69cc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f69cd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005f69cf: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f69d3: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f69d7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005f69d9: call 0x5f9384 */ r_esp -= 4; W32(r_esp, 0x5f69deu); f_005f9384();
    /* 005f69de: mov edx, dword ptr [ebx + 0x1dc] */ r_edx = R32((u32)(r_ebx+0x1dcu));
    /* 005f69e4: mov dword ptr [ebx], 0xb178a0 */ W32((u32)(r_ebx), 0xb178a0u);
    /* 005f69ea: or edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f69ed: mov dword ptr [ebx + 0x1dc], edx */ W32((u32)(r_ebx+0x1dcu), r_edx);
    /* 005f69f3: mov eax, ebx */ r_eax = r_ebx;
    /* 005f69f5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f69f6: ret 8 */ FN_RET(0x005f69cc); r_esp += 12; return;
}

void f_005f69fc(void) /* sub_5F69FC */
{
    FN_ENTER(0x005f69fc);
    /* 005f69fc: mov dword ptr [0xa8e06c], 0x3f800000 */ W32((u32)(0xa8e06cu), 0x3f800000u);
    /* 005f6a06: mov dword ptr [0xa8e070], 0x41000000 */ W32((u32)(0xa8e070u), 0x41000000u);
    /* 005f6a10: mov dword ptr [0xa8e074], 0x3fc00000 */ W32((u32)(0xa8e074u), 0x3fc00000u);
    /* 005f6a1a: ret  */ FN_RET(0x005f69fc); r_esp += 4; return;
}

void f_005f6a1c(void) /* sub_5F6A1C */
{
    FN_ENTER(0x005f6a1c);
    /* 005f6a1c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f6a1d: mov ebp, esp */ r_ebp = r_esp;
    /* 005f6a1f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f6a21: push 0x8dd6f4 */ { u32 v = 0x8dd6f4u; r_esp -= 4; W32(r_esp, v); }
    /* 005f6a26: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f6a2c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f6a2d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005f6a34: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f6a37: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005f6a3a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005f6a3d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005f6a40: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005f6a43: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005f6a46: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005f6a49: mov eax, ecx */ r_eax = r_ecx;
    /* 005f6a4b: mov dword ptr [eax], 0xb17a00 */ W32((u32)(r_eax), 0xb17a00u);
    /* 005f6a51: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005f6a58: call 0x5f8fe8 */ r_esp -= 4; W32(r_esp, 0x5f6a5du); f_005f8fe8();
    /* 005f6a5d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f6a60: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f6a62: jne 0x5f6a74 */ if (!fZ) goto L_005f6a74;
L_005f6a64:; BB(0x005f6a64);
    /* 005f6a64: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f6a67: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f6a6e: mov esp, ebp */ r_esp = r_ebp;
    /* 005f6a70: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f6a71: ret 4 */ FN_RET(0x005f6a1c); r_esp += 8; return;
L_005f6a74:; BB(0x005f6a74);
    /* 005f6a74: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005f6a77: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f6a78: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5f6a7du); f_005c2f74();
    /* 005f6a7d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f6a7e: jmp 0x5f6a64 */ goto L_005f6a64;
}

void f_005f6a80(void) /* sub_5F6A80 */
{
    FN_ENTER(0x005f6a80);
    /* 005f6a80: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005f6a81: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f6a82: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f6a85: mov edi, ecx */ r_edi = r_ecx;
    /* 005f6a87: mov ecx, dword ptr [edi + 0xf8] */ r_ecx = R32((u32)(r_edi+0xf8u));
    /* 005f6a8d: call 0x687660 */ r_esp -= 4; W32(r_esp, 0x5f6a92u); f_00687660();
    /* 005f6a92: mov ebx, eax */ r_ebx = r_eax;
    /* 005f6a94: mov ecx, dword ptr [edi + 0xf8] */ r_ecx = R32((u32)(r_edi+0xf8u));
    /* 005f6a9a: add ecx, 0x8a4 */ {  u32 a = r_ecx; u32 b = 0x8a4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f6aa0: call 0x6a3250 */ r_esp -= 4; W32(r_esp, 0x5f6aa5u); f_006a3250();
    /* 005f6aa5: mov ecx, dword ptr [edi + 0xf8] */ r_ecx = R32((u32)(r_edi+0xf8u));
    /* 005f6aab: mov edi, dword ptr [ecx] */ r_edi = R32((u32)(r_ecx));
    /* 005f6aad: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005f6aaf: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005f6ab1: lea edx, [ebx + ebx] */ r_edx = (u32)(r_ebx+r_ebx);
    /* 005f6ab4: add edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005f6ab6: movsx ebx, ax */ r_ebx = (u32)(i32)(i16)(u16)r_eax;
    /* 005f6ab9: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005f6abc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f6abd: push dword ptr [edx + ebx*4 + 0x9c2880] */ { u32 v = R32((u32)(r_edx+r_ebx*4+0x9c2880u)); r_esp -= 4; W32(r_esp, v); }
    /* 005f6ac4: call dword ptr [edi + 0x10c] */ { u32 t = R32((u32)(r_edi+0x10cu)); r_esp -= 4; W32(r_esp, 0x5f6acau); call_ind(t); }
    /* 005f6aca: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005f6acd: push 0x1d0 */ { u32 v = 0x1d0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f6ad2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f6ad3: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5f6ad8u); f_0050b510();
    /* 005f6ad8: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005f6adb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f6adc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005f6add: ret  */ FN_RET(0x005f6a80); r_esp += 4; return;
}

void f_005f6ae0(void) /* sub_5F6AE0 */
{
    FN_ENTER(0x005f6ae0);
    /* 005f6ae0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f6ae1: mov ebp, esp */ r_ebp = r_esp;
    /* 005f6ae3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f6ae5: push 0x8dd71c */ { u32 v = 0x8dd71cu; r_esp -= 4; W32(r_esp, v); }
    /* 005f6aea: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f6af0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f6af1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005f6af8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f6afb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005f6afe: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005f6b01: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005f6b04: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005f6b07: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f6b0a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f6b0c: je 0x5f6b63 */ if (fZ) goto L_005f6b63;
L_005f6b0e:; BB(0x005f6b0e);
    /* 005f6b0e: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005f6b15: push 0x244 */ { u32 v = 0x244u; r_esp -= 4; W32(r_esp, v); }
    /* 005f6b1a: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5f6b1fu); f_005caba4();
    /* 005f6b1f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f6b20: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005f6b23: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f6b25: je 0x5f6b5f */ if (fZ) goto L_005f6b5f;
L_005f6b27:; BB(0x005f6b27);
    /* 005f6b27: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005f6b2e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005f6b35: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f6b38: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f6b3b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f6b3c: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f6b42: call 0x5f6b74 */ r_esp -= 4; W32(r_esp, 0x5f6b47u); f_005f6b74();
    /* 005f6b47: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f6b4a: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005f6b51:; BB(0x005f6b51);
    /* 005f6b51: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f6b54: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f6b5b: mov esp, ebp */ r_esp = r_ebp;
    /* 005f6b5d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f6b5e: ret  */ FN_RET(0x005f6ae0); r_esp += 4; return;
L_005f6b5f:; BB(0x005f6b5f);
    /* 005f6b5f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f6b61: jmp 0x5f6b51 */ goto L_005f6b51;
L_005f6b63:; BB(0x005f6b63);
    /* 005f6b63: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f6b65: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f6b68: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f6b6f: mov esp, ebp */ r_esp = r_ebp;
    /* 005f6b71: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f6b72: ret  */ FN_RET(0x005f6ae0); r_esp += 4; return;
}

void f_005f6b74(void) /* sub_5F6B74 */
{
    FN_ENTER(0x005f6b74);
    /* 005f6b74: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f6b75: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005f6b77: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f6b7b: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f6b7f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005f6b81: call 0x5f9384 */ r_esp -= 4; W32(r_esp, 0x5f6b86u); f_005f9384();
    /* 005f6b86: mov dword ptr [ebp], 0xb17a00 */ W32((u32)(r_ebp), 0xb17a00u);
    /* 005f6b8d: mov eax, ebp */ r_eax = r_ebp;
    /* 005f6b8f: mov dword ptr [ebp + 0x1a0], 0x3e4ccccd */ W32((u32)(r_ebp+0x1a0u), 0x3e4ccccdu);
    /* 005f6b99: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f6b9a: ret 8 */ FN_RET(0x005f6b74); r_esp += 12; return;
}

void f_005f6ba0(void) /* sub_5F6BA0 */
{
    FN_ENTER(0x005f6ba0);
    /* 005f6ba0: mov dword ptr [0xa8e078], 0x3f800000 */ W32((u32)(0xa8e078u), 0x3f800000u);
    /* 005f6baa: mov dword ptr [0xa8e07c], 0x41000000 */ W32((u32)(0xa8e07cu), 0x41000000u);
    /* 005f6bb4: mov dword ptr [0xa8e080], 0x3fc00000 */ W32((u32)(0xa8e080u), 0x3fc00000u);
    /* 005f6bbe: ret  */ FN_RET(0x005f6ba0); r_esp += 4; return;
}

void f_005f6bc0(void) /* sub_5F6BC0 */
{
    FN_ENTER(0x005f6bc0);
    /* 005f6bc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f6bc1: mov ebp, esp */ r_ebp = r_esp;
    /* 005f6bc3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f6bc5: push 0x8dd738 */ { u32 v = 0x8dd738u; r_esp -= 4; W32(r_esp, v); }
    /* 005f6bca: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f6bd0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f6bd1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005f6bd8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f6bdb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005f6bde: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005f6be1: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005f6be4: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005f6be7: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005f6bea: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005f6bed: mov eax, ecx */ r_eax = r_ecx;
    /* 005f6bef: mov dword ptr [eax], 0xb17b60 */ W32((u32)(r_eax), 0xb17b60u);
    /* 005f6bf5: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005f6bfc: call 0x5f8fe8 */ r_esp -= 4; W32(r_esp, 0x5f6c01u); f_005f8fe8();
    /* 005f6c01: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f6c04: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f6c06: jne 0x5f6c18 */ if (!fZ) goto L_005f6c18;
L_005f6c08:; BB(0x005f6c08);
    /* 005f6c08: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f6c0b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f6c12: mov esp, ebp */ r_esp = r_ebp;
    /* 005f6c14: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f6c15: ret 4 */ FN_RET(0x005f6bc0); r_esp += 8; return;
L_005f6c18:; BB(0x005f6c18);
    /* 005f6c18: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005f6c1b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f6c1c: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5f6c21u); f_005c2f74();
    /* 005f6c21: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f6c22: jmp 0x5f6c08 */ goto L_005f6c08;
}

void f_005f6c24(void) /* sub_5F6C24 */
{
    FN_ENTER(0x005f6c24);
    /* 005f6c24: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f6c25: mov ebp, esp */ r_ebp = r_esp;
    /* 005f6c27: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f6c29: push 0x8dd760 */ { u32 v = 0x8dd760u; r_esp -= 4; W32(r_esp, v); }
    /* 005f6c2e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f6c34: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f6c35: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005f6c3c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f6c3f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005f6c42: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005f6c45: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005f6c48: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005f6c4b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f6c4e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f6c50: je 0x5f6ca7 */ if (fZ) goto L_005f6ca7;
L_005f6c52:; BB(0x005f6c52);
    /* 005f6c52: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005f6c59: push 0x244 */ { u32 v = 0x244u; r_esp -= 4; W32(r_esp, v); }
    /* 005f6c5e: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5f6c63u); f_005caba4();
    /* 005f6c63: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f6c64: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005f6c67: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f6c69: je 0x5f6ca3 */ if (fZ) goto L_005f6ca3;
L_005f6c6b:; BB(0x005f6c6b);
    /* 005f6c6b: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005f6c72: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005f6c79: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f6c7c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f6c7f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f6c80: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f6c86: call 0x5f6cb8 */ r_esp -= 4; W32(r_esp, 0x5f6c8bu); f_005f6cb8();
    /* 005f6c8b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f6c8e: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005f6c95:; BB(0x005f6c95);
    /* 005f6c95: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f6c98: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f6c9f: mov esp, ebp */ r_esp = r_ebp;
    /* 005f6ca1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f6ca2: ret  */ FN_RET(0x005f6c24); r_esp += 4; return;
L_005f6ca3:; BB(0x005f6ca3);
    /* 005f6ca3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f6ca5: jmp 0x5f6c95 */ goto L_005f6c95;
L_005f6ca7:; BB(0x005f6ca7);
    /* 005f6ca7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f6ca9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f6cac: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f6cb3: mov esp, ebp */ r_esp = r_ebp;
    /* 005f6cb5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f6cb6: ret  */ FN_RET(0x005f6c24); r_esp += 4; return;
}

void f_005f6cb8(void) /* sub_5F6CB8 */
{
    FN_ENTER(0x005f6cb8);
    /* 005f6cb8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f6cb9: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005f6cbb: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f6cbf: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f6cc3: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005f6cc5: call 0x5f9384 */ r_esp -= 4; W32(r_esp, 0x5f6ccau); f_005f9384();
    /* 005f6cca: mov dword ptr [ebp], 0xb17b60 */ W32((u32)(r_ebp), 0xb17b60u);
    /* 005f6cd1: mov eax, ebp */ r_eax = r_ebp;
    /* 005f6cd3: mov dword ptr [ebp + 0x234], 0x5cf288 */ W32((u32)(r_ebp+0x234u), 0x5cf288u);
    /* 005f6cdd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f6cde: ret 8 */ FN_RET(0x005f6cb8); r_esp += 12; return;
}

void f_005f6ce4(void) /* sub_5F6CE4 */
{
    FN_ENTER(0x005f6ce4);
    /* 005f6ce4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f6ce5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005f6ce7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005f6ce9: call 0x5f6d08 */ r_esp -= 4; W32(r_esp, 0x5f6ceeu); f_005f6d08();
    /* 005f6cee: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005f6cf2: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f6cf4: jne 0x5f6cfa */ if (!fZ) goto L_005f6cfa;
L_005f6cf6:; BB(0x005f6cf6);
    /* 005f6cf6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f6cf7: ret 4 */ FN_RET(0x005f6ce4); r_esp += 8; return;
L_005f6cfa:; BB(0x005f6cfa);
    /* 005f6cfa: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f6cfb: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5f6d00u); f_005c2f74();
    /* 005f6d00: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f6d01: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f6d02: ret 4 */ FN_RET(0x005f6ce4); r_esp += 8; return;
}

void f_005f6d08(void) /* sub_5F6D08 */
{
    FN_ENTER(0x005f6d08);
    /* 005f6d08: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f6d09: mov ebp, esp */ r_ebp = r_esp;
    /* 005f6d0b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f6d0d: push 0x8dd77c */ { u32 v = 0x8dd77cu; r_esp -= 4; W32(r_esp, v); }
    /* 005f6d12: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f6d18: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f6d19: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005f6d20: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f6d23: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005f6d26: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005f6d29: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005f6d2c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005f6d2f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005f6d32: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f6d35: mov dword ptr [ecx], 0xb17cc0 */ W32((u32)(r_ecx), 0xb17cc0u);
    /* 005f6d3b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005f6d42: call 0x5f8fe8 */ r_esp -= 4; W32(r_esp, 0x5f6d47u); f_005f8fe8();
    /* 005f6d47: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f6d4a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f6d51: mov esp, ebp */ r_esp = r_ebp;
    /* 005f6d53: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f6d54: ret  */ FN_RET(0x005f6d08); r_esp += 4; return;
}

void f_005f6d58(void) /* sub_5F6D58 */
{
    FN_ENTER(0x005f6d58);
    /* 005f6d58: mov eax, dword ptr [0xa8d84c] */ r_eax = R32((u32)(0xa8d84cu));
    /* 005f6d5d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005f6d60: je 0x5f6d63 */ if (fZ) goto L_005f6d63;
L_005f6d62:; BB(0x005f6d62);
    /* 005f6d62: ret  */ FN_RET(0x005f6d58); r_esp += 4; return;
L_005f6d63:; BB(0x005f6d63);
    /* 005f6d63: add ecx, 0x244 */ {  u32 a = r_ecx; u32 b = 0x244u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f6d69: call 0x831290 */ r_esp -= 4; W32(r_esp, 0x5f6d6eu); f_00831290();
    /* 005f6d6e: ret  */ FN_RET(0x005f6d58); r_esp += 4; return;
}

void f_005f6d70(void) /* sub_5F6D70 */
{
    FN_ENTER(0x005f6d70);
    /* 005f6d70: mov dword ptr [ecx + 0x248], 0x3dcccccd */ W32((u32)(r_ecx+0x248u), 0x3dcccccdu);
    /* 005f6d7a: ret  */ FN_RET(0x005f6d70); r_esp += 4; return;
}

void f_005f6d7c(void) /* sub_5F6D7C */
{
    FN_ENTER(0x005f6d7c);
    /* 005f6d7c: fld dword ptr [0x92dc1c] */ FPUSH(R_F32((u32)(0x92dc1cu)));
    /* 005f6d82: fld dword ptr [ecx + 0x248] */ FPUSH(R_F32((u32)(r_ecx+0x248u)));
    /* 005f6d88: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 005f6d8a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005f6d8c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005f6d8d: jae 0x5f6db5 */ if (!fC) goto L_005f6db5;
L_005f6d8f:; BB(0x005f6d8f);
    /* 005f6d8f: fld dword ptr [0x92dc18] */ FPUSH(R_F32((u32)(0x92dc18u)));
    /* 005f6d95: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 005f6d97: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005f6d99: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 005f6d9b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005f6d9d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005f6d9e: ja 0x5f6dae */ if ((!fC&&!fZ)) goto L_005f6dae;
L_005f6da0:; BB(0x005f6da0);
    /* 005f6da0: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005f6da2: mov eax, 0x3f800000 */ r_eax = 0x3f800000u;
    /* 005f6da7: mov dword ptr [ecx + 0x248], eax */ W32((u32)(r_ecx+0x248u), r_eax);
    /* 005f6dad: ret  */ FN_RET(0x005f6d7c); r_esp += 4; return;
L_005f6dae:; BB(0x005f6dae);
    /* 005f6dae: fstp dword ptr [ecx + 0x248] */ W_F32((u32)(r_ecx+0x248u), ST(0)); FPOP();
    /* 005f6db4: ret  */ FN_RET(0x005f6d7c); r_esp += 4; return;
L_005f6db5:; BB(0x005f6db5);
    /* 005f6db5: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 005f6db7: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005f6db9: ret  */ FN_RET(0x005f6d7c); r_esp += 4; return;
}

void f_005f6dbc(void) /* sub_5F6DBC */
{
    FN_ENTER(0x005f6dbc);
    /* 005f6dbc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f6dbd: mov ebp, esp */ r_ebp = r_esp;
    /* 005f6dbf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f6dc1: push 0x8dd7a4 */ { u32 v = 0x8dd7a4u; r_esp -= 4; W32(r_esp, v); }
    /* 005f6dc6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f6dcc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f6dcd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005f6dd4: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f6dd7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005f6dda: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005f6ddd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005f6de0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005f6de3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f6de6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f6de8: je 0x5f6e3f */ if (fZ) goto L_005f6e3f;
L_005f6dea:; BB(0x005f6dea);
    /* 005f6dea: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005f6df1: push 0x250 */ { u32 v = 0x250u; r_esp -= 4; W32(r_esp, v); }
    /* 005f6df6: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5f6dfbu); f_005caba4();
    /* 005f6dfb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f6dfc: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005f6dff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f6e01: je 0x5f6e3b */ if (fZ) goto L_005f6e3b;
L_005f6e03:; BB(0x005f6e03);
    /* 005f6e03: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005f6e0a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005f6e11: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f6e14: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f6e17: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f6e18: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f6e1e: call 0x5f6e50 */ r_esp -= 4; W32(r_esp, 0x5f6e23u); f_005f6e50();
    /* 005f6e23: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f6e26: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005f6e2d:; BB(0x005f6e2d);
    /* 005f6e2d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f6e30: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f6e37: mov esp, ebp */ r_esp = r_ebp;
    /* 005f6e39: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f6e3a: ret  */ FN_RET(0x005f6dbc); r_esp += 4; return;
L_005f6e3b:; BB(0x005f6e3b);
    /* 005f6e3b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f6e3d: jmp 0x5f6e2d */ goto L_005f6e2d;
L_005f6e3f:; BB(0x005f6e3f);
    /* 005f6e3f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f6e41: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f6e44: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f6e4b: mov esp, ebp */ r_esp = r_ebp;
    /* 005f6e4d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f6e4e: ret  */ FN_RET(0x005f6dbc); r_esp += 4; return;
}

void f_005f6e50(void) /* sub_5F6E50 */
{
    FN_ENTER(0x005f6e50);
    /* 005f6e50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f6e51: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005f6e53: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f6e57: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f6e5b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005f6e5d: call 0x5f9384 */ r_esp -= 4; W32(r_esp, 0x5f6e62u); f_005f9384();
    /* 005f6e62: mov dword ptr [ebp], 0xb17cc0 */ W32((u32)(r_ebp), 0xb17cc0u);
    /* 005f6e69: mov eax, ebp */ r_eax = r_ebp;
    /* 005f6e6b: mov dword ptr [ebp + 0x24c], 0x3f800000 */ W32((u32)(r_ebp+0x24cu), 0x3f800000u);
    /* 005f6e75: mov dword ptr [ebp + 0x248], 0x3f800000 */ W32((u32)(r_ebp+0x248u), 0x3f800000u);
    /* 005f6e7f: mov dword ptr [ebp + 0x244], 0x3f800000 */ W32((u32)(r_ebp+0x244u), 0x3f800000u);
    /* 005f6e89: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f6e8a: ret 8 */ FN_RET(0x005f6e50); r_esp += 12; return;
}

void f_005f6e90(void) /* sub_5F6E90 */
{
    FN_ENTER(0x005f6e90);
    /* 005f6e90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f6e91: mov ebp, esp */ r_ebp = r_esp;
    /* 005f6e93: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f6e95: push 0x8dd7c0 */ { u32 v = 0x8dd7c0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f6e9a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f6ea0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f6ea1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005f6ea8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f6eab: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005f6eae: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005f6eb1: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005f6eb4: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005f6eb7: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005f6eba: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005f6ebd: mov eax, ecx */ r_eax = r_ecx;
    /* 005f6ebf: mov dword ptr [eax], 0xb17e20 */ W32((u32)(r_eax), 0xb17e20u);
    /* 005f6ec5: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005f6ecc: call 0x5f8fe8 */ r_esp -= 4; W32(r_esp, 0x5f6ed1u); f_005f8fe8();
    /* 005f6ed1: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f6ed4: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f6ed6: jne 0x5f6ee8 */ if (!fZ) goto L_005f6ee8;
L_005f6ed8:; BB(0x005f6ed8);
    /* 005f6ed8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f6edb: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f6ee2: mov esp, ebp */ r_esp = r_ebp;
    /* 005f6ee4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f6ee5: ret 4 */ FN_RET(0x005f6e90); r_esp += 8; return;
L_005f6ee8:; BB(0x005f6ee8);
    /* 005f6ee8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005f6eeb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f6eec: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5f6ef1u); f_005c2f74();
    /* 005f6ef1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f6ef2: jmp 0x5f6ed8 */ goto L_005f6ed8;
}

void f_005f6ef4(void) /* sub_5F6EF4 */
{
    FN_ENTER(0x005f6ef4);
    /* 005f6ef4: lea edx, [ecx + 0x244] */ r_edx = (u32)(r_ecx+0x244u);
    /* 005f6efa: lea eax, [ecx + 0x250] */ r_eax = (u32)(r_ecx+0x250u);
    /* 005f6f00: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f6f01: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f6f02: call 0x5e74ec */ r_esp -= 4; W32(r_esp, 0x5f6f07u); f_005e74ec();
    /* 005f6f07: ret  */ FN_RET(0x005f6ef4); r_esp += 4; return;
}

void f_005f6f08(void) /* sub_5F6F08 */
{
    FN_ENTER(0x005f6f08);
    /* 005f6f08: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f6f09: mov ebp, esp */ r_ebp = r_esp;
    /* 005f6f0b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f6f0d: push 0x8dd7e8 */ { u32 v = 0x8dd7e8u; r_esp -= 4; W32(r_esp, v); }
    /* 005f6f12: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f6f18: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f6f19: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005f6f20: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f6f23: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005f6f26: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005f6f29: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005f6f2c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005f6f2f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f6f32: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f6f34: je 0x5f6f8b */ if (fZ) goto L_005f6f8b;
L_005f6f36:; BB(0x005f6f36);
    /* 005f6f36: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005f6f3d: push 0x25c */ { u32 v = 0x25cu; r_esp -= 4; W32(r_esp, v); }
    /* 005f6f42: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5f6f47u); f_005caba4();
    /* 005f6f47: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f6f48: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005f6f4b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f6f4d: je 0x5f6f87 */ if (fZ) goto L_005f6f87;
L_005f6f4f:; BB(0x005f6f4f);
    /* 005f6f4f: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005f6f56: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005f6f5d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f6f60: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f6f63: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f6f64: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f6f6a: call 0x5f6f9c */ r_esp -= 4; W32(r_esp, 0x5f6f6fu); f_005f6f9c();
    /* 005f6f6f: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f6f72: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005f6f79:; BB(0x005f6f79);
    /* 005f6f79: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f6f7c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f6f83: mov esp, ebp */ r_esp = r_ebp;
    /* 005f6f85: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f6f86: ret  */ FN_RET(0x005f6f08); r_esp += 4; return;
L_005f6f87:; BB(0x005f6f87);
    /* 005f6f87: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f6f89: jmp 0x5f6f79 */ goto L_005f6f79;
L_005f6f8b:; BB(0x005f6f8b);
    /* 005f6f8b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f6f8d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f6f90: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f6f97: mov esp, ebp */ r_esp = r_ebp;
    /* 005f6f99: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f6f9a: ret  */ FN_RET(0x005f6f08); r_esp += 4; return;
}

void f_005f6f9c(void) /* sub_5F6F9C */
{
    FN_ENTER(0x005f6f9c);
    /* 005f6f9c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f6f9d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005f6f9f: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f6fa3: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f6fa7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005f6fa9: call 0x5f9384 */ r_esp -= 4; W32(r_esp, 0x5f6faeu); f_005f9384();
    /* 005f6fae: mov edx, dword ptr [ebx + 0x1dc] */ r_edx = R32((u32)(r_ebx+0x1dcu));
    /* 005f6fb4: mov dword ptr [ebx], 0xb17e20 */ W32((u32)(r_ebx), 0xb17e20u);
    /* 005f6fba: or edx, 0x203 */ {  u32 a = r_edx; u32 b = 0x203u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f6fc0: mov dword ptr [ebx + 0x1dc], edx */ W32((u32)(r_ebx+0x1dcu), r_edx);
    /* 005f6fc6: mov byte ptr [ebx + 0x1f4], 3 */ W8((u32)(r_ebx+0x1f4u), 0x3u);
    /* 005f6fcd: mov eax, ebx */ r_eax = r_ebx;
    /* 005f6fcf: mov dword ptr [ebx + 0x234], 0x5cf288 */ W32((u32)(r_ebx+0x234u), 0x5cf288u);
    /* 005f6fd9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f6fda: ret 8 */ FN_RET(0x005f6f9c); r_esp += 12; return;
}

void f_005f6fe0(void) /* sub_5F6FE0 */
{
    FN_ENTER(0x005f6fe0);
    /* 005f6fe0: mov dword ptr [0xa8e084], 0x3f800000 */ W32((u32)(0xa8e084u), 0x3f800000u);
    /* 005f6fea: mov dword ptr [0xa8e088], 0x41000000 */ W32((u32)(0xa8e088u), 0x41000000u);
    /* 005f6ff4: mov dword ptr [0xa8e08c], 0x3fc00000 */ W32((u32)(0xa8e08cu), 0x3fc00000u);
    /* 005f6ffe: ret  */ FN_RET(0x005f6fe0); r_esp += 4; return;
}

