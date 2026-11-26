#include "protos.h"

void f_004e640c(void) /* sub_4E640C */
{
    FN_ENTER(0x004e640c);
    /* 004e640c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004e640d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004e640f: call 0x4e9398 */ r_esp -= 4; W32(r_esp, 0x4e6414u); f_004e9398();
    /* 004e6414: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004e6416: je 0x4e641f */ if (fZ) goto L_004e641f;
L_004e6418:; BB(0x004e6418);
    /* 004e6418: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004e641a: call 0x4e6424 */ r_esp -= 4; W32(r_esp, 0x4e641fu); f_004e6424();
L_004e641f:; BB(0x004e641f);
    /* 004e641f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004e6420: ret  */ FN_RET(0x004e640c); r_esp += 4; return;
}

void f_004e6424(void) /* sub_4E6424 */
{
    FN_ENTER(0x004e6424);
    /* 004e6424: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004e6425: mov ebp, esp */ r_ebp = r_esp;
    /* 004e6427: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004e6429: push 0x8d2784 */ { u32 v = 0x8d2784u; r_esp -= 4; W32(r_esp, v); }
    /* 004e642e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004e6434: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004e6435: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004e643c: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004e643f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004e6442: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 004e6445: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 004e6448: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 004e644b: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 004e644e: mov eax, dword ptr [0xa72574] */ r_eax = R32((u32)(0xa72574u));
    /* 004e6453: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e6456: jne 0x4e64f0 */ if (!fZ) goto L_004e64f0;
L_004e645c:; BB(0x004e645c);
    /* 004e645c: call 0x4e6534 */ r_esp -= 4; W32(r_esp, 0x4e6461u); f_004e6534();
    /* 004e6461: mov edx, dword ptr [0xa4d7fc] */ r_edx = R32((u32)(0xa4d7fcu));
    /* 004e6467: mov eax, 2 */ r_eax = 0x2u;
    /* 004e646c: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004e646f: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e6472: jne 0x4e647c */ if (!fZ) goto L_004e647c;
L_004e6474:; BB(0x004e6474);
    /* 004e6474: mov eax, 3 */ r_eax = 0x3u;
    /* 004e6479: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_004e647c:; BB(0x004e647c);
    /* 004e647c: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 004e6483: push 0x19d44 */ { u32 v = 0x19d44u; r_esp -= 4; W32(r_esp, v); }
    /* 004e6488: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4e648du); f_005caba4();
    /* 004e648d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004e648e: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 004e6491: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e6493: je 0x4e64c0 */ if (fZ) goto L_004e64c0;
L_004e6495:; BB(0x004e6495);
    /* 004e6495: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 004e649c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004e64a3: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004e64a6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004e64a7: mov ecx, eax */ r_ecx = r_eax;
    /* 004e64a9: push 0xa46b80 */ { u32 v = 0xa46b80u; r_esp -= 4; W32(r_esp, v); }
    /* 004e64ae: push dword ptr [0xaca374] */ { u32 v = R32((u32)(0xaca374u)); r_esp -= 4; W32(r_esp, v); }
    /* 004e64b4: call 0x481ff0 */ r_esp -= 4; W32(r_esp, 0x4e64b9u); f_00481ff0();
    /* 004e64b9: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_004e64c0:; BB(0x004e64c0);
    /* 004e64c0: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004e64c7: call 0x4eb39c */ r_esp -= 4; W32(r_esp, 0x4e64ccu); f_004eb39c();
    /* 004e64cc: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004e64cf: movzx edx, word ptr [ecx + 8] */ r_edx = (u32)R16((u32)(r_ecx+0x8u));
    /* 004e64d3: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004e64d9: mov word ptr [ecx + 8], dx */ W16((u32)(r_ecx+0x8u), (u16)r_edx);
    /* 004e64dd: mov eax, 1 */ r_eax = 0x1u;
    /* 004e64e2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004e64e5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004e64ec: mov esp, ebp */ r_esp = r_ebp;
    /* 004e64ee: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004e64ef: ret  */ FN_RET(0x004e6424); r_esp += 4; return;
L_004e64f0:; BB(0x004e64f0);
    /* 004e64f0: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e64f3: jne 0x4e6523 */ if (!fZ) goto L_004e6523;
L_004e64f5:; BB(0x004e64f5);
    /* 004e64f5: push dword ptr [0xaca374] */ { u32 v = R32((u32)(0xaca374u)); r_esp -= 4; W32(r_esp, v); }
    /* 004e64fb: mov edx, ecx */ r_edx = r_ecx;
    /* 004e64fd: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004e6501: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004e6506: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004e650a: call 0x4eb918 */ r_esp -= 4; W32(r_esp, 0x4e650fu); f_004eb918();
    /* 004e650f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004e6510: mov eax, 1 */ r_eax = 0x1u;
    /* 004e6515: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004e6518: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004e651f: mov esp, ebp */ r_esp = r_ebp;
    /* 004e6521: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004e6522: ret  */ FN_RET(0x004e6424); r_esp += 4; return;
L_004e6523:; BB(0x004e6523);
    /* 004e6523: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004e6525: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004e6528: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004e652f: mov esp, ebp */ r_esp = r_ebp;
    /* 004e6531: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004e6532: ret  */ FN_RET(0x004e6424); r_esp += 4; return;
}

void f_004e6534(void) /* sub_4E6534 */
{
    FN_ENTER(0x004e6534);
    /* 004e6534: mov edx, dword ptr [0xa4d84c] */ r_edx = R32((u32)(0xa4d84cu));
    /* 004e653a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e653c: je 0x4e6555 */ if (fZ) goto L_004e6555;
L_004e653e:; BB(0x004e653e);
    /* 004e653e: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004e6542: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004e6547: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004e654b: mov dword ptr [0xa4d84c], 0 */ W32((u32)(0xa4d84cu), 0x0u);
L_004e6555:; BB(0x004e6555);
    /* 004e6555: mov edx, dword ptr [0xa4d850] */ r_edx = R32((u32)(0xa4d850u));
    /* 004e655b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004e655d: je 0x4e6576 */ if (fZ) goto L_004e6576;
L_004e655f:; BB(0x004e655f);
    /* 004e655f: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004e6563: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004e6568: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004e656c: mov dword ptr [0xa4d850], 0 */ W32((u32)(0xa4d850u), 0x0u);
L_004e6576:; BB(0x004e6576);
    /* 004e6576: ret  */ FN_RET(0x004e6534); r_esp += 4; return;
}

void f_004e6578(void) /* sub_4E6578 */
{
    FN_ENTER(0x004e6578);
    /* 004e6578: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004e6579: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004e657a: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x4e657fu); f_006dc358();
    /* 004e657f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004e6581: je 0x4e6586 */ if (fZ) goto L_004e6586;
L_004e6583:; BB(0x004e6583);
    /* 004e6583: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004e6584: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004e6585: ret  */ FN_RET(0x004e6578); r_esp += 4; return;
L_004e6586:; BB(0x004e6586);
    /* 004e6586: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004e6588: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004e658a: mov ebx, eax */ r_ebx = r_eax;
    /* 004e658c: mov esi, edx */ r_esi = r_edx;
L_004e658e:; BB(0x004e658e);
    /* 004e658e: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x4e6593u); f_006dc358();
    /* 004e6593: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004e6595: jne 0x4e6606 */ if (!fZ) goto L_004e6606;
L_004e6597:; BB(0x004e6597);
    /* 004e6597: push dword ptr [ebx + 0x909ec0] */ { u32 v = R32((u32)(r_ebx+0x909ec0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004e659d: push dword ptr [ebx + 0x9b1140] */ { u32 v = R32((u32)(r_ebx+0x9b1140u)); r_esp -= 4; W32(r_esp, v); }
    /* 004e65a3: push dword ptr [esi + 0x9b59e8] */ { u32 v = R32((u32)(r_esi+0x9b59e8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004e65a9: push dword ptr [esi + 0x9b59e0] */ { u32 v = R32((u32)(r_esi+0x9b59e0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004e65af: call 0x7081b4 */ r_esp -= 4; W32(r_esp, 0x4e65b4u); f_007081b4();
    /* 004e65b4: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004e65b7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e65b9: jne 0x4e65fa */ if (!fZ) goto L_004e65fa;
L_004e65bb:; BB(0x004e65bb);
    /* 004e65bb: add esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004e65be: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004e65c1: cmp ebx, 0x5c */ {  u32 a = r_ebx; u32 b = 0x5cu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004e65c4: jl 0x4e658e */ if ((fS!=fO)) goto L_004e658e;
L_004e65c6:; BB(0x004e65c6);
    /* 004e65c6: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x4e65cbu); f_006dc358();
    /* 004e65cb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004e65cd: je 0x4e65d2 */ if (fZ) goto L_004e65d2;
L_004e65cf:; BB(0x004e65cf);
    /* 004e65cf: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004e65d0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004e65d1: ret  */ FN_RET(0x004e6578); r_esp += 4; return;
L_004e65d2:; BB(0x004e65d2);
    /* 004e65d2: push 0x1b2 */ { u32 v = 0x1b2u; r_esp -= 4; W32(r_esp, v); }
    /* 004e65d7: push 0xa499c0 */ { u32 v = 0xa499c0u; r_esp -= 4; W32(r_esp, v); }
    /* 004e65dc: push 0x90a418 */ { u32 v = 0x90a418u; r_esp -= 4; W32(r_esp, v); }
    /* 004e65e1: push 0xdf */ { u32 v = 0xdfu; r_esp -= 4; W32(r_esp, v); }
    /* 004e65e6: call 0x7081b4 */ r_esp -= 4; W32(r_esp, 0x4e65ebu); f_007081b4();
    /* 004e65eb: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004e65ee: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004e65f0: je 0x4e65f7 */ if (fZ) goto L_004e65f7;
L_004e65f2:; BB(0x004e65f2);
    /* 004e65f2: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x4e65f7u); f_006dc358();
L_004e65f7:; BB(0x004e65f7);
    /* 004e65f7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004e65f8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004e65f9: ret  */ FN_RET(0x004e6578); r_esp += 4; return;
L_004e65fa:; BB(0x004e65fa);
    /* 004e65fa: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x4e65ffu); f_006dc358();
    /* 004e65ff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004e6601: jne 0x4e65f7 */ if (!fZ) goto L_004e65f7;
L_004e6603:; BB(0x004e6603);
    /* 004e6603: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004e6604: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004e6605: ret  */ FN_RET(0x004e6578); r_esp += 4; return;
L_004e6606:; BB(0x004e6606);
    /* 004e6606: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004e6607: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004e6608: ret  */ FN_RET(0x004e6578); r_esp += 4; return;
}

void f_004e660c(void) /* sub_4E660C */
{
    FN_ENTER(0x004e660c);
    /* 004e660c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004e660d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004e660e: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004e6611: mov ebp, dword ptr [esp + 0x1c] */ r_ebp = R32((u32)(r_esp+0x1cu));
    /* 004e6615: lea ebx, [ebp + 0x930] */ r_ebx = (u32)(r_ebp+0x930u);
    /* 004e661b: mov eax, ebx */ r_eax = r_ebx;
    /* 004e661d: call 0x4e665c */ r_esp -= 4; W32(r_esp, 0x4e6622u); f_004e665c();
    /* 004e6622: mov eax, ebx */ r_eax = r_ebx;
    /* 004e6624: call 0x4e68d0 */ r_esp -= 4; W32(r_esp, 0x4e6629u); f_004e68d0();
    /* 004e6629: fstp dword ptr [ebp + 0xe3c] */ W_F32((u32)(r_ebp+0xe3cu), ST(0)); FPOP();
    /* 004e662f: mov dword ptr [esp + 0xc], ebx */ W32((u32)(r_esp+0xcu), r_ebx);
    /* 004e6633: lea eax, [ebp + 0x9ac] */ r_eax = (u32)(r_ebp+0x9acu);
    /* 004e6639: lea edx, [ebp + 0xb18] */ r_edx = (u32)(r_ebp+0xb18u);
    /* 004e663f: lea ecx, [ebp + 0xc84] */ r_ecx = (u32)(r_ebp+0xc84u);
    /* 004e6645: call 0x4e6920 */ r_esp -= 4; W32(r_esp, 0x4e664au); f_004e6920();
    /* 004e664a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004e664b: call 0x4ee7f8 */ r_esp -= 4; W32(r_esp, 0x4e6650u); f_004ee7f8();
    /* 004e6650: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004e6653: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004e6654: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004e6655: ret  */ FN_RET(0x004e660c); r_esp += 4; return;
}

void f_004e6658(void) /* sub_4E6658 */
{
    FN_ENTER(0x004e6658);
    /* 004e6658: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 004e665c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004e665d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004e665e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004e665f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004e6660: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004e6661: mov esi, eax */ r_esi = r_eax;
    /* 004e6663: movzx edx, word ptr [esi + 0x50] */ r_edx = (u32)R16((u32)(r_esi+0x50u));
    /* 004e6667: mov ebp, 1 */ r_ebp = 0x1u;
    /* 004e666c: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004e666e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e6670: je 0x4e6690 */ if (fZ) goto L_004e6690;
L_004e6672:; BB(0x004e6672);
    /* 004e6672: lea eax, [esi + 0x50] */ r_eax = (u32)(r_esi+0x50u);
    /* 004e6675: mov ecx, eax */ r_ecx = r_eax;
    /* 004e6677: lea edx, [esi + 0x6a] */ r_edx = (u32)(r_esi+0x6au);
    /* 004e667a: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 004e667c: jae 0x4e6690 */ if (!fC) goto L_004e6690;
L_004e667e:; BB(0x004e667e);
    /* 004e667e: movzx edi, word ptr [ecx] */ r_edi = (u32)R16((u32)(r_ecx));
    /* 004e6681: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e6683: je 0x4e6844 */ if (fZ) goto L_004e6844;
L_004e6689:; BB(0x004e6689);
    /* 004e6689: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004e668c: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 004e668e: jb 0x4e667e */ if (fC) goto L_004e667e;
L_004e6690:; BB(0x004e6690);
    /* 004e6690: mov edx, 0x2d */ r_edx = 0x2du;
    /* 004e6695: mov word ptr [esi + 0x54], dx */ W16((u32)(r_esi+0x54u), (u16)r_edx);
    /* 004e6699: mov word ptr [esi + 0x52], dx */ W16((u32)(r_esi+0x52u), (u16)r_edx);
    /* 004e669d: mov word ptr [esi + 0x50], dx */ W16((u32)(r_esi+0x50u), (u16)r_edx);
    /* 004e66a1: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004e66a3: mov word ptr [esi + 0x56], cx */ W16((u32)(r_esi+0x56u), (u16)r_ecx);
    /* 004e66a7: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
L_004e66a9:; BB(0x004e66a9);
    /* 004e66a9: mov edx, dword ptr [esi + 0x18] */ r_edx = R32((u32)(r_esi+0x18u));
    /* 004e66ac: and edx, 0xff000000 */ {  u32 a = r_edx; u32 b = 0xff000000u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 004e66b2: cmp edx, 0xff000000 */ {  u32 a = r_edx; u32 b = 0xff000000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e66b8: je 0x4e66c1 */ if (fZ) goto L_004e66c1;
L_004e66ba:; BB(0x004e66ba);
    /* 004e66ba: mov dword ptr [esi + 0x18], 0xffffffff */ W32((u32)(r_esi+0x18u), 0xffffffffu);
L_004e66c1:; BB(0x004e66c1);
    /* 004e66c1: movsx ecx, byte ptr [esi + 0x30] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_esi+0x30u));
    /* 004e66c5: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e66c8: jne 0x4e66d0 */ if (!fZ) goto L_004e66d0;
L_004e66ca:; BB(0x004e66ca);
    /* 004e66ca: mov byte ptr [esi + 0x30], 0 */ W8((u32)(r_esi+0x30u), 0x0u);
    /* 004e66ce: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_004e66d0:; BB(0x004e66d0);
    /* 004e66d0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004e66d2: jl 0x4e66d9 */ if ((fS!=fO)) goto L_004e66d9;
L_004e66d4:; BB(0x004e66d4);
    /* 004e66d4: cmp ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004e66d7: jl 0x4e66ff */ if ((fS!=fO)) goto L_004e66ff;
L_004e66d9:; BB(0x004e66d9);
    /* 004e66d9: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 004e66de: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004e66e0: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004e66e2: sar ebx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 004e66e5: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 004e66e8: sub edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004e66ea: lea ebp, [edx + edx] */ r_ebp = (u32)(r_edx+r_edx);
    /* 004e66ed: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004e66ef: add ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004e66f1: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004e66f3: sub ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004e66f5: mov byte ptr [esi + 0x30], cl */ W8((u32)(r_esi+0x30u), (u8)r_ecx);
    /* 004e66f8: mov ebx, 1 */ r_ebx = 0x1u;
    /* 004e66fd: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
L_004e66ff:; BB(0x004e66ff);
    /* 004e66ff: movsx ecx, byte ptr [esi + 0x31] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_esi+0x31u));
    /* 004e6703: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004e6705: jl 0x4e670c */ if ((fS!=fO)) goto L_004e670c;
L_004e6707:; BB(0x004e6707);
    /* 004e6707: cmp ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004e670a: jl 0x4e6717 */ if ((fS!=fO)) goto L_004e6717;
L_004e670c:; BB(0x004e670c);
    /* 004e670c: mov byte ptr [esi + 0x31], 0 */ W8((u32)(r_esi+0x31u), 0x0u);
    /* 004e6710: or ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 004e6713: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 004e6715: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_004e6717:; BB(0x004e6717);
    /* 004e6717: mov edx, dword ptr [ecx*4 + 0x9b119c] */ r_edx = R32((u32)(r_ecx*4+0x9b119cu));
    /* 004e671e: cmp edx, dword ptr [esi + 0x34] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esi+0x34u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e6721: je 0x4e672b */ if (fZ) goto L_004e672b;
L_004e6723:; BB(0x004e6723);
    /* 004e6723: mov dword ptr [esi + 0x34], edx */ W32((u32)(r_esi+0x34u), r_edx);
    /* 004e6726: or ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 004e6729: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
L_004e672b:; BB(0x004e672b);
    /* 004e672b: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 004e672e: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004e6730: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004e6732: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004e6734: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004e6736: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004e6738: movsx ecx, word ptr [esi + 0x38] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esi+0x38u));
    /* 004e673c: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 004e673f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004e6741: movsx edx, word ptr [edx + 0x9b5b60] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edx+0x9b5b60u));
    /* 004e6748: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004e674a: jl 0x4e675c */ if ((fS!=fO)) goto L_004e675c;
L_004e674c:; BB(0x004e674c);
    /* 004e674c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004e674e: jne 0x4e6756 */ if (!fZ) goto L_004e6756;
L_004e6750:; BB(0x004e6750);
    /* 004e6750: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e6752: jne 0x4e675c */ if (!fZ) goto L_004e675c;
L_004e6754:; BB(0x004e6754);
    /* 004e6754: jmp 0x4e6764 */ goto L_004e6764;
L_004e6756:; BB(0x004e6756);
    /* 004e6756: jle 0x4e6764 */ if ((fZ||fS!=fO)) goto L_004e6764;
L_004e6758:; BB(0x004e6758);
    /* 004e6758: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004e675a: jl 0x4e6764 */ if ((fS!=fO)) goto L_004e6764;
L_004e675c:; BB(0x004e675c);
    /* 004e675c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004e675e: mov word ptr [esi + 0x38], dx */ W16((u32)(r_esi+0x38u), (u16)r_edx);
    /* 004e6762: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
L_004e6764:; BB(0x004e6764);
    /* 004e6764: movsx ecx, word ptr [eax*4 + 0x9b5b62] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax*4+0x9b5b62u));
    /* 004e676c: movsx edx, word ptr [esi + 0x3a] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x3au));
    /* 004e6770: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004e6772: jl 0x4e6784 */ if ((fS!=fO)) goto L_004e6784;
L_004e6774:; BB(0x004e6774);
    /* 004e6774: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004e6776: jne 0x4e677e */ if (!fZ) goto L_004e677e;
L_004e6778:; BB(0x004e6778);
    /* 004e6778: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e677a: jne 0x4e6784 */ if (!fZ) goto L_004e6784;
L_004e677c:; BB(0x004e677c);
    /* 004e677c: jmp 0x4e678c */ goto L_004e678c;
L_004e677e:; BB(0x004e677e);
    /* 004e677e: jle 0x4e678c */ if ((fZ||fS!=fO)) goto L_004e678c;
L_004e6780:; BB(0x004e6780);
    /* 004e6780: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004e6782: jl 0x4e678c */ if ((fS!=fO)) goto L_004e678c;
L_004e6784:; BB(0x004e6784);
    /* 004e6784: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004e6786: mov word ptr [esi + 0x3a], dx */ W16((u32)(r_esi+0x3au), (u16)r_edx);
    /* 004e678a: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
L_004e678c:; BB(0x004e678c);
    /* 004e678c: movsx ecx, word ptr [eax*4 + 0x9b5b64] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax*4+0x9b5b64u));
    /* 004e6794: movsx edx, word ptr [esi + 0x3c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x3cu));
    /* 004e6798: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004e679a: jl 0x4e67ac */ if ((fS!=fO)) goto L_004e67ac;
L_004e679c:; BB(0x004e679c);
    /* 004e679c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004e679e: jne 0x4e67a6 */ if (!fZ) goto L_004e67a6;
L_004e67a0:; BB(0x004e67a0);
    /* 004e67a0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e67a2: jne 0x4e67ac */ if (!fZ) goto L_004e67ac;
L_004e67a4:; BB(0x004e67a4);
    /* 004e67a4: jmp 0x4e67b4 */ goto L_004e67b4;
L_004e67a6:; BB(0x004e67a6);
    /* 004e67a6: jle 0x4e67b4 */ if ((fZ||fS!=fO)) goto L_004e67b4;
L_004e67a8:; BB(0x004e67a8);
    /* 004e67a8: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004e67aa: jl 0x4e67b4 */ if ((fS!=fO)) goto L_004e67b4;
L_004e67ac:; BB(0x004e67ac);
    /* 004e67ac: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004e67ae: mov word ptr [esi + 0x3c], dx */ W16((u32)(r_esi+0x3cu), (u16)r_edx);
    /* 004e67b2: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
L_004e67b4:; BB(0x004e67b4);
    /* 004e67b4: movsx ecx, word ptr [eax*4 + 0x9b5b66] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax*4+0x9b5b66u));
    /* 004e67bc: movsx edx, word ptr [esi + 0x3e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x3eu));
    /* 004e67c0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004e67c2: jl 0x4e67d4 */ if ((fS!=fO)) goto L_004e67d4;
L_004e67c4:; BB(0x004e67c4);
    /* 004e67c4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004e67c6: jne 0x4e67ce */ if (!fZ) goto L_004e67ce;
L_004e67c8:; BB(0x004e67c8);
    /* 004e67c8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e67ca: jne 0x4e67d4 */ if (!fZ) goto L_004e67d4;
L_004e67cc:; BB(0x004e67cc);
    /* 004e67cc: jmp 0x4e67dc */ goto L_004e67dc;
L_004e67ce:; BB(0x004e67ce);
    /* 004e67ce: jle 0x4e67dc */ if ((fZ||fS!=fO)) goto L_004e67dc;
L_004e67d0:; BB(0x004e67d0);
    /* 004e67d0: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004e67d2: jl 0x4e67dc */ if ((fS!=fO)) goto L_004e67dc;
L_004e67d4:; BB(0x004e67d4);
    /* 004e67d4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004e67d6: mov word ptr [esi + 0x3e], dx */ W16((u32)(r_esi+0x3eu), (u16)r_edx);
    /* 004e67da: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
L_004e67dc:; BB(0x004e67dc);
    /* 004e67dc: movsx ecx, word ptr [eax*4 + 0x9b5b68] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax*4+0x9b5b68u));
    /* 004e67e4: movsx edx, word ptr [esi + 0x40] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x40u));
    /* 004e67e8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004e67ea: jl 0x4e67fc */ if ((fS!=fO)) goto L_004e67fc;
L_004e67ec:; BB(0x004e67ec);
    /* 004e67ec: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004e67ee: jne 0x4e67f6 */ if (!fZ) goto L_004e67f6;
L_004e67f0:; BB(0x004e67f0);
    /* 004e67f0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e67f2: jne 0x4e67fc */ if (!fZ) goto L_004e67fc;
L_004e67f4:; BB(0x004e67f4);
    /* 004e67f4: jmp 0x4e6804 */ goto L_004e6804;
L_004e67f6:; BB(0x004e67f6);
    /* 004e67f6: jle 0x4e6804 */ if ((fZ||fS!=fO)) goto L_004e6804;
L_004e67f8:; BB(0x004e67f8);
    /* 004e67f8: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004e67fa: jl 0x4e6804 */ if ((fS!=fO)) goto L_004e6804;
L_004e67fc:; BB(0x004e67fc);
    /* 004e67fc: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004e67fe: mov word ptr [esi + 0x40], dx */ W16((u32)(r_esi+0x40u), (u16)r_edx);
    /* 004e6802: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
L_004e6804:; BB(0x004e6804);
    /* 004e6804: lea edx, [esi + 0x42] */ r_edx = (u32)(r_esi+0x42u);
    /* 004e6807: lea eax, [esi + 0x48] */ r_eax = (u32)(r_esi+0x48u);
L_004e680a:; BB(0x004e680a);
    /* 004e680a: movsx ecx, word ptr [edx] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx));
    /* 004e680d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004e680f: jl 0x4e6819 */ if ((fS!=fO)) goto L_004e6819;
L_004e6811:; BB(0x004e6811);
    /* 004e6811: cmp ecx, 0xff */ {  u32 a = r_ecx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004e6817: jle 0x4e6820 */ if ((fZ||fS!=fO)) goto L_004e6820;
L_004e6819:; BB(0x004e6819);
    /* 004e6819: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004e681b: mov word ptr [edx], cx */ W16((u32)(r_edx), (u16)r_ecx);
    /* 004e681e: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
L_004e6820:; BB(0x004e6820);
    /* 004e6820: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004e6823: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004e6825: ja 0x4e680a */ if ((!fC&&!fZ)) goto L_004e680a;
L_004e6827:; BB(0x004e6827);
    /* 004e6827: lea eax, [esi + 0x48] */ r_eax = (u32)(r_esi+0x48u);
    /* 004e682a: call 0x4e6870 */ r_esp -= 4; W32(r_esp, 0x4e682fu); f_004e6870();
    /* 004e682f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e6831: je 0x4e6835 */ if (fZ) goto L_004e6835;
L_004e6833:; BB(0x004e6833);
    /* 004e6833: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
L_004e6835:; BB(0x004e6835);
    /* 004e6835: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004e6837: je 0x4e683c */ if (fZ) goto L_004e683c;
L_004e6839:; BB(0x004e6839);
    /* 004e6839: or byte ptr [esi + 0x32], bl */ { u32 ad = (u32)(r_esi+0x32u);  u32 a = R8(ad); u32 b = (u8)r_ebx; u32 r = (a | b) & 0xffu; W8(ad, r); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_004e683c:; BB(0x004e683c);
    /* 004e683c: mov eax, ebp */ r_eax = r_ebp;
    /* 004e683e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004e683f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004e6840: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004e6841: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004e6842: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004e6843: ret  */ FN_RET(0x004e6658); r_esp += 4; return;
L_004e6844:; BB(0x004e6844);
    /* 004e6844: movzx edx, word ptr [eax] */ r_edx = (u32)R16((u32)(r_eax));
    /* 004e6847: cmp edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e684a: jne 0x4e6865 */ if (!fZ) goto L_004e6865;
L_004e684c:; BB(0x004e684c);
    /* 004e684c: movzx edx, word ptr [eax + 2] */ r_edx = (u32)R16((u32)(r_eax+0x2u));
    /* 004e6850: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004e6853: cmp edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e6856: je 0x4e684c */ if (fZ) goto L_004e684c;
L_004e6858:; BB(0x004e6858);
    /* 004e6858: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e685a: je 0x4e6690 */ if (fZ) goto L_004e6690;
L_004e6860:; BB(0x004e6860);
    /* 004e6860: jmp 0x4e66a9 */ goto L_004e66a9;
L_004e6865:; BB(0x004e6865);
    /* 004e6865: movzx edx, word ptr [eax] */ r_edx = (u32)R16((u32)(r_eax));
    /* 004e6868: jmp 0x4e6858 */ goto L_004e6858;
}

void f_004e665c(void) /* sub_4E665C */
{
    FN_ENTER(0x004e665c);
    /* 004e665c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004e665d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004e665e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004e665f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004e6660: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004e6661: mov esi, eax */ r_esi = r_eax;
    /* 004e6663: movzx edx, word ptr [esi + 0x50] */ r_edx = (u32)R16((u32)(r_esi+0x50u));
    /* 004e6667: mov ebp, 1 */ r_ebp = 0x1u;
    /* 004e666c: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004e666e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e6670: je 0x4e6690 */ if (fZ) goto L_004e6690;
L_004e6672:; BB(0x004e6672);
    /* 004e6672: lea eax, [esi + 0x50] */ r_eax = (u32)(r_esi+0x50u);
    /* 004e6675: mov ecx, eax */ r_ecx = r_eax;
    /* 004e6677: lea edx, [esi + 0x6a] */ r_edx = (u32)(r_esi+0x6au);
    /* 004e667a: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 004e667c: jae 0x4e6690 */ if (!fC) goto L_004e6690;
L_004e667e:; BB(0x004e667e);
    /* 004e667e: movzx edi, word ptr [ecx] */ r_edi = (u32)R16((u32)(r_ecx));
    /* 004e6681: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e6683: je 0x4e6844 */ if (fZ) goto L_004e6844;
L_004e6689:; BB(0x004e6689);
    /* 004e6689: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004e668c: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 004e668e: jb 0x4e667e */ if (fC) goto L_004e667e;
L_004e6690:; BB(0x004e6690);
    /* 004e6690: mov edx, 0x2d */ r_edx = 0x2du;
    /* 004e6695: mov word ptr [esi + 0x54], dx */ W16((u32)(r_esi+0x54u), (u16)r_edx);
    /* 004e6699: mov word ptr [esi + 0x52], dx */ W16((u32)(r_esi+0x52u), (u16)r_edx);
    /* 004e669d: mov word ptr [esi + 0x50], dx */ W16((u32)(r_esi+0x50u), (u16)r_edx);
    /* 004e66a1: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004e66a3: mov word ptr [esi + 0x56], cx */ W16((u32)(r_esi+0x56u), (u16)r_ecx);
    /* 004e66a7: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
L_004e66a9:; BB(0x004e66a9);
    /* 004e66a9: mov edx, dword ptr [esi + 0x18] */ r_edx = R32((u32)(r_esi+0x18u));
    /* 004e66ac: and edx, 0xff000000 */ {  u32 a = r_edx; u32 b = 0xff000000u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 004e66b2: cmp edx, 0xff000000 */ {  u32 a = r_edx; u32 b = 0xff000000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e66b8: je 0x4e66c1 */ if (fZ) goto L_004e66c1;
L_004e66ba:; BB(0x004e66ba);
    /* 004e66ba: mov dword ptr [esi + 0x18], 0xffffffff */ W32((u32)(r_esi+0x18u), 0xffffffffu);
L_004e66c1:; BB(0x004e66c1);
    /* 004e66c1: movsx ecx, byte ptr [esi + 0x30] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_esi+0x30u));
    /* 004e66c5: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e66c8: jne 0x4e66d0 */ if (!fZ) goto L_004e66d0;
L_004e66ca:; BB(0x004e66ca);
    /* 004e66ca: mov byte ptr [esi + 0x30], 0 */ W8((u32)(r_esi+0x30u), 0x0u);
    /* 004e66ce: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_004e66d0:; BB(0x004e66d0);
    /* 004e66d0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004e66d2: jl 0x4e66d9 */ if ((fS!=fO)) goto L_004e66d9;
L_004e66d4:; BB(0x004e66d4);
    /* 004e66d4: cmp ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004e66d7: jl 0x4e66ff */ if ((fS!=fO)) goto L_004e66ff;
L_004e66d9:; BB(0x004e66d9);
    /* 004e66d9: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 004e66de: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004e66e0: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004e66e2: sar ebx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 004e66e5: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 004e66e8: sub edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004e66ea: lea ebp, [edx + edx] */ r_ebp = (u32)(r_edx+r_edx);
    /* 004e66ed: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004e66ef: add ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004e66f1: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004e66f3: sub ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004e66f5: mov byte ptr [esi + 0x30], cl */ W8((u32)(r_esi+0x30u), (u8)r_ecx);
    /* 004e66f8: mov ebx, 1 */ r_ebx = 0x1u;
    /* 004e66fd: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
L_004e66ff:; BB(0x004e66ff);
    /* 004e66ff: movsx ecx, byte ptr [esi + 0x31] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_esi+0x31u));
    /* 004e6703: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004e6705: jl 0x4e670c */ if ((fS!=fO)) goto L_004e670c;
L_004e6707:; BB(0x004e6707);
    /* 004e6707: cmp ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004e670a: jl 0x4e6717 */ if ((fS!=fO)) goto L_004e6717;
L_004e670c:; BB(0x004e670c);
    /* 004e670c: mov byte ptr [esi + 0x31], 0 */ W8((u32)(r_esi+0x31u), 0x0u);
    /* 004e6710: or ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 004e6713: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 004e6715: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_004e6717:; BB(0x004e6717);
    /* 004e6717: mov edx, dword ptr [ecx*4 + 0x9b119c] */ r_edx = R32((u32)(r_ecx*4+0x9b119cu));
    /* 004e671e: cmp edx, dword ptr [esi + 0x34] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esi+0x34u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e6721: je 0x4e672b */ if (fZ) goto L_004e672b;
L_004e6723:; BB(0x004e6723);
    /* 004e6723: mov dword ptr [esi + 0x34], edx */ W32((u32)(r_esi+0x34u), r_edx);
    /* 004e6726: or ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 004e6729: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
L_004e672b:; BB(0x004e672b);
    /* 004e672b: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 004e672e: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004e6730: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004e6732: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004e6734: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004e6736: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004e6738: movsx ecx, word ptr [esi + 0x38] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esi+0x38u));
    /* 004e673c: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 004e673f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004e6741: movsx edx, word ptr [edx + 0x9b5b60] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edx+0x9b5b60u));
    /* 004e6748: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004e674a: jl 0x4e675c */ if ((fS!=fO)) goto L_004e675c;
L_004e674c:; BB(0x004e674c);
    /* 004e674c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004e674e: jne 0x4e6756 */ if (!fZ) goto L_004e6756;
L_004e6750:; BB(0x004e6750);
    /* 004e6750: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e6752: jne 0x4e675c */ if (!fZ) goto L_004e675c;
L_004e6754:; BB(0x004e6754);
    /* 004e6754: jmp 0x4e6764 */ goto L_004e6764;
L_004e6756:; BB(0x004e6756);
    /* 004e6756: jle 0x4e6764 */ if ((fZ||fS!=fO)) goto L_004e6764;
L_004e6758:; BB(0x004e6758);
    /* 004e6758: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004e675a: jl 0x4e6764 */ if ((fS!=fO)) goto L_004e6764;
L_004e675c:; BB(0x004e675c);
    /* 004e675c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004e675e: mov word ptr [esi + 0x38], dx */ W16((u32)(r_esi+0x38u), (u16)r_edx);
    /* 004e6762: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
L_004e6764:; BB(0x004e6764);
    /* 004e6764: movsx ecx, word ptr [eax*4 + 0x9b5b62] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax*4+0x9b5b62u));
    /* 004e676c: movsx edx, word ptr [esi + 0x3a] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x3au));
    /* 004e6770: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004e6772: jl 0x4e6784 */ if ((fS!=fO)) goto L_004e6784;
L_004e6774:; BB(0x004e6774);
    /* 004e6774: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004e6776: jne 0x4e677e */ if (!fZ) goto L_004e677e;
L_004e6778:; BB(0x004e6778);
    /* 004e6778: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e677a: jne 0x4e6784 */ if (!fZ) goto L_004e6784;
L_004e677c:; BB(0x004e677c);
    /* 004e677c: jmp 0x4e678c */ goto L_004e678c;
L_004e677e:; BB(0x004e677e);
    /* 004e677e: jle 0x4e678c */ if ((fZ||fS!=fO)) goto L_004e678c;
L_004e6780:; BB(0x004e6780);
    /* 004e6780: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004e6782: jl 0x4e678c */ if ((fS!=fO)) goto L_004e678c;
L_004e6784:; BB(0x004e6784);
    /* 004e6784: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004e6786: mov word ptr [esi + 0x3a], dx */ W16((u32)(r_esi+0x3au), (u16)r_edx);
    /* 004e678a: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
L_004e678c:; BB(0x004e678c);
    /* 004e678c: movsx ecx, word ptr [eax*4 + 0x9b5b64] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax*4+0x9b5b64u));
    /* 004e6794: movsx edx, word ptr [esi + 0x3c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x3cu));
    /* 004e6798: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004e679a: jl 0x4e67ac */ if ((fS!=fO)) goto L_004e67ac;
L_004e679c:; BB(0x004e679c);
    /* 004e679c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004e679e: jne 0x4e67a6 */ if (!fZ) goto L_004e67a6;
L_004e67a0:; BB(0x004e67a0);
    /* 004e67a0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e67a2: jne 0x4e67ac */ if (!fZ) goto L_004e67ac;
L_004e67a4:; BB(0x004e67a4);
    /* 004e67a4: jmp 0x4e67b4 */ goto L_004e67b4;
L_004e67a6:; BB(0x004e67a6);
    /* 004e67a6: jle 0x4e67b4 */ if ((fZ||fS!=fO)) goto L_004e67b4;
L_004e67a8:; BB(0x004e67a8);
    /* 004e67a8: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004e67aa: jl 0x4e67b4 */ if ((fS!=fO)) goto L_004e67b4;
L_004e67ac:; BB(0x004e67ac);
    /* 004e67ac: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004e67ae: mov word ptr [esi + 0x3c], dx */ W16((u32)(r_esi+0x3cu), (u16)r_edx);
    /* 004e67b2: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
L_004e67b4:; BB(0x004e67b4);
    /* 004e67b4: movsx ecx, word ptr [eax*4 + 0x9b5b66] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax*4+0x9b5b66u));
    /* 004e67bc: movsx edx, word ptr [esi + 0x3e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x3eu));
    /* 004e67c0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004e67c2: jl 0x4e67d4 */ if ((fS!=fO)) goto L_004e67d4;
L_004e67c4:; BB(0x004e67c4);
    /* 004e67c4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004e67c6: jne 0x4e67ce */ if (!fZ) goto L_004e67ce;
L_004e67c8:; BB(0x004e67c8);
    /* 004e67c8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e67ca: jne 0x4e67d4 */ if (!fZ) goto L_004e67d4;
L_004e67cc:; BB(0x004e67cc);
    /* 004e67cc: jmp 0x4e67dc */ goto L_004e67dc;
L_004e67ce:; BB(0x004e67ce);
    /* 004e67ce: jle 0x4e67dc */ if ((fZ||fS!=fO)) goto L_004e67dc;
L_004e67d0:; BB(0x004e67d0);
    /* 004e67d0: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004e67d2: jl 0x4e67dc */ if ((fS!=fO)) goto L_004e67dc;
L_004e67d4:; BB(0x004e67d4);
    /* 004e67d4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004e67d6: mov word ptr [esi + 0x3e], dx */ W16((u32)(r_esi+0x3eu), (u16)r_edx);
    /* 004e67da: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
L_004e67dc:; BB(0x004e67dc);
    /* 004e67dc: movsx ecx, word ptr [eax*4 + 0x9b5b68] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax*4+0x9b5b68u));
    /* 004e67e4: movsx edx, word ptr [esi + 0x40] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x40u));
    /* 004e67e8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004e67ea: jl 0x4e67fc */ if ((fS!=fO)) goto L_004e67fc;
L_004e67ec:; BB(0x004e67ec);
    /* 004e67ec: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004e67ee: jne 0x4e67f6 */ if (!fZ) goto L_004e67f6;
L_004e67f0:; BB(0x004e67f0);
    /* 004e67f0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e67f2: jne 0x4e67fc */ if (!fZ) goto L_004e67fc;
L_004e67f4:; BB(0x004e67f4);
    /* 004e67f4: jmp 0x4e6804 */ goto L_004e6804;
L_004e67f6:; BB(0x004e67f6);
    /* 004e67f6: jle 0x4e6804 */ if ((fZ||fS!=fO)) goto L_004e6804;
L_004e67f8:; BB(0x004e67f8);
    /* 004e67f8: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004e67fa: jl 0x4e6804 */ if ((fS!=fO)) goto L_004e6804;
L_004e67fc:; BB(0x004e67fc);
    /* 004e67fc: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004e67fe: mov word ptr [esi + 0x40], dx */ W16((u32)(r_esi+0x40u), (u16)r_edx);
    /* 004e6802: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
L_004e6804:; BB(0x004e6804);
    /* 004e6804: lea edx, [esi + 0x42] */ r_edx = (u32)(r_esi+0x42u);
    /* 004e6807: lea eax, [esi + 0x48] */ r_eax = (u32)(r_esi+0x48u);
L_004e680a:; BB(0x004e680a);
    /* 004e680a: movsx ecx, word ptr [edx] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx));
    /* 004e680d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004e680f: jl 0x4e6819 */ if ((fS!=fO)) goto L_004e6819;
L_004e6811:; BB(0x004e6811);
    /* 004e6811: cmp ecx, 0xff */ {  u32 a = r_ecx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004e6817: jle 0x4e6820 */ if ((fZ||fS!=fO)) goto L_004e6820;
L_004e6819:; BB(0x004e6819);
    /* 004e6819: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004e681b: mov word ptr [edx], cx */ W16((u32)(r_edx), (u16)r_ecx);
    /* 004e681e: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
L_004e6820:; BB(0x004e6820);
    /* 004e6820: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004e6823: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004e6825: ja 0x4e680a */ if ((!fC&&!fZ)) goto L_004e680a;
L_004e6827:; BB(0x004e6827);
    /* 004e6827: lea eax, [esi + 0x48] */ r_eax = (u32)(r_esi+0x48u);
    /* 004e682a: call 0x4e6870 */ r_esp -= 4; W32(r_esp, 0x4e682fu); f_004e6870();
    /* 004e682f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e6831: je 0x4e6835 */ if (fZ) goto L_004e6835;
L_004e6833:; BB(0x004e6833);
    /* 004e6833: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
L_004e6835:; BB(0x004e6835);
    /* 004e6835: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004e6837: je 0x4e683c */ if (fZ) goto L_004e683c;
L_004e6839:; BB(0x004e6839);
    /* 004e6839: or byte ptr [esi + 0x32], bl */ { u32 ad = (u32)(r_esi+0x32u);  u32 a = R8(ad); u32 b = (u8)r_ebx; u32 r = (a | b) & 0xffu; W8(ad, r); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_004e683c:; BB(0x004e683c);
    /* 004e683c: mov eax, ebp */ r_eax = r_ebp;
    /* 004e683e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004e683f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004e6840: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004e6841: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004e6842: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004e6843: ret  */ FN_RET(0x004e665c); r_esp += 4; return;
L_004e6844:; BB(0x004e6844);
    /* 004e6844: movzx edx, word ptr [eax] */ r_edx = (u32)R16((u32)(r_eax));
    /* 004e6847: cmp edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e684a: jne 0x4e6865 */ if (!fZ) goto L_004e6865;
L_004e684c:; BB(0x004e684c);
    /* 004e684c: movzx edx, word ptr [eax + 2] */ r_edx = (u32)R16((u32)(r_eax+0x2u));
    /* 004e6850: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004e6853: cmp edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e6856: je 0x4e684c */ if (fZ) goto L_004e684c;
L_004e6858:; BB(0x004e6858);
    /* 004e6858: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e685a: je 0x4e6690 */ if (fZ) goto L_004e6690;
L_004e6860:; BB(0x004e6860);
    /* 004e6860: jmp 0x4e66a9 */ goto L_004e66a9;
L_004e6865:; BB(0x004e6865);
    /* 004e6865: movzx edx, word ptr [eax] */ r_edx = (u32)R16((u32)(r_eax));
    /* 004e6868: jmp 0x4e6858 */ goto L_004e6858;
}

void f_004e686c(void) /* sub_4E686C */
{
    FN_ENTER(0x004e686c);
    /* 004e686c: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 004e6870: mov edx, eax */ r_edx = r_eax;
    /* 004e6872: fld dword ptr [0x909f48] */ FPUSH(R_F32((u32)(0x909f48u)));
    /* 004e6878: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 004e687a: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004e687c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004e687e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004e687f: jae 0x4e6887 */ if (!fC) goto L_004e6887;
L_004e6881:; BB(0x004e6881);
    /* 004e6881: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004e6883: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004e6885: jmp 0x4e68b7 */ goto L_004e68b7;
L_004e6887:; BB(0x004e6887);
    /* 004e6887: fld dword ptr [0x909f44] */ FPUSH(R_F32((u32)(0x909f44u)));
    /* 004e688d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004e688f: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 004e6891: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004e6893: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004e6894: jb 0x4e689c */ if (fC) goto L_004e689c;
L_004e6896:; BB(0x004e6896);
    /* 004e6896: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004e6898: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004e689a: jmp 0x4e68b7 */ goto L_004e68b7;
L_004e689c:; BB(0x004e689c);
    /* 004e689c: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 004e689f: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 004e68a1: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004e68a3: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004e68a5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004e68a7: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004e68a8: jae 0x4e68b0 */ if (!fC) goto L_004e68b0;
L_004e68aa:; BB(0x004e68aa);
    /* 004e68aa: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004e68ac: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004e68ae: jmp 0x4e68b7 */ goto L_004e68b7;
L_004e68b0:; BB(0x004e68b0);
    /* 004e68b0: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 004e68b2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004e68b4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004e68b5: ja 0x4e68c6 */ if ((!fC&&!fZ)) goto L_004e68c6;
L_004e68b7:; BB(0x004e68b7);
    /* 004e68b7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004e68b9: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 004e68bb: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004e68bd: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 004e68c0: mov eax, 1 */ r_eax = 0x1u;
    /* 004e68c5: ret  */ FN_RET(0x004e686c); r_esp += 4; return;
L_004e68c6:; BB(0x004e68c6);
    /* 004e68c6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004e68c8: ret  */ FN_RET(0x004e686c); r_esp += 4; return;
}

void f_004e6870(void) /* sub_4E6870 */
{
    FN_ENTER(0x004e6870);
    /* 004e6870: mov edx, eax */ r_edx = r_eax;
    /* 004e6872: fld dword ptr [0x909f48] */ FPUSH(R_F32((u32)(0x909f48u)));
    /* 004e6878: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 004e687a: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004e687c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004e687e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004e687f: jae 0x4e6887 */ if (!fC) goto L_004e6887;
L_004e6881:; BB(0x004e6881);
    /* 004e6881: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004e6883: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004e6885: jmp 0x4e68b7 */ goto L_004e68b7;
L_004e6887:; BB(0x004e6887);
    /* 004e6887: fld dword ptr [0x909f44] */ FPUSH(R_F32((u32)(0x909f44u)));
    /* 004e688d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004e688f: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 004e6891: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004e6893: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004e6894: jb 0x4e689c */ if (fC) goto L_004e689c;
L_004e6896:; BB(0x004e6896);
    /* 004e6896: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004e6898: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004e689a: jmp 0x4e68b7 */ goto L_004e68b7;
L_004e689c:; BB(0x004e689c);
    /* 004e689c: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 004e689f: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 004e68a1: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004e68a3: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004e68a5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004e68a7: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004e68a8: jae 0x4e68b0 */ if (!fC) goto L_004e68b0;
L_004e68aa:; BB(0x004e68aa);
    /* 004e68aa: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004e68ac: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004e68ae: jmp 0x4e68b7 */ goto L_004e68b7;
L_004e68b0:; BB(0x004e68b0);
    /* 004e68b0: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 004e68b2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004e68b4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004e68b5: ja 0x4e68c6 */ if ((!fC&&!fZ)) goto L_004e68c6;
L_004e68b7:; BB(0x004e68b7);
    /* 004e68b7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004e68b9: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 004e68bb: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004e68bd: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 004e68c0: mov eax, 1 */ r_eax = 0x1u;
    /* 004e68c5: ret  */ FN_RET(0x004e6870); r_esp += 4; return;
L_004e68c6:; BB(0x004e68c6);
    /* 004e68c6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004e68c8: ret  */ FN_RET(0x004e6870); r_esp += 4; return;
}

void f_004e68cc(void) /* sub_4E68CC */
{
    FN_ENTER(0x004e68cc);
    /* 004e68cc: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 004e68d0: movzx edx, byte ptr [eax + 0x31] */ r_edx = (u32)R8((u32)(r_eax+0x31u));
    /* 004e68d4: fld dword ptr [edx*8 + 0x9b11e0] */ FPUSH(R_F32((u32)(r_edx*8+0x9b11e0u)));
    /* 004e68db: fld dword ptr [eax + 0x4c] */ FPUSH(R_F32((u32)(r_eax+0x4cu)));
    /* 004e68de: fcom dword ptr [0x909f40] */ fx_compare(ST(0), R_F32((u32)(0x909f40u))); 
    /* 004e68e4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004e68e6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004e68e7: fld dword ptr [edx*8 + 0x9b11e4] */ FPUSH(R_F32((u32)(r_edx*8+0x9b11e4u)));
    /* 004e68ee: jb 0x4e68ff */ if (fC) goto L_004e68ff;
L_004e68f0:; BB(0x004e68f0);
    /* 004e68f0: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004e68f2: fcom dword ptr [0x909f3c] */ fx_compare(ST(0), R_F32((u32)(0x909f3cu))); 
    /* 004e68f8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004e68fa: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004e68fb: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004e68fd: jbe 0x4e6909 */ if ((fC||fZ)) goto L_004e6909;
L_004e68ff:; BB(0x004e68ff);
    /* 004e68ff: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004e6901: fld dword ptr [0x909f40] */ FPUSH(R_F32((u32)(0x909f40u)));
    /* 004e6907: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
L_004e6909:; BB(0x004e6909);
    /* 004e6909: fsub st(2), st(0) */ ST(2) = ST(2) - ST(0);
    /* 004e690b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004e690d: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 004e690f: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004e6911: ret  */ FN_RET(0x004e68cc); r_esp += 4; return;
}

void f_004e68d0(void) /* sub_4E68D0 */
{
    FN_ENTER(0x004e68d0);
    /* 004e68d0: movzx edx, byte ptr [eax + 0x31] */ r_edx = (u32)R8((u32)(r_eax+0x31u));
    /* 004e68d4: fld dword ptr [edx*8 + 0x9b11e0] */ FPUSH(R_F32((u32)(r_edx*8+0x9b11e0u)));
    /* 004e68db: fld dword ptr [eax + 0x4c] */ FPUSH(R_F32((u32)(r_eax+0x4cu)));
    /* 004e68de: fcom dword ptr [0x909f40] */ fx_compare(ST(0), R_F32((u32)(0x909f40u))); 
    /* 004e68e4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004e68e6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004e68e7: fld dword ptr [edx*8 + 0x9b11e4] */ FPUSH(R_F32((u32)(r_edx*8+0x9b11e4u)));
    /* 004e68ee: jb 0x4e68ff */ if (fC) goto L_004e68ff;
L_004e68f0:; BB(0x004e68f0);
    /* 004e68f0: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004e68f2: fcom dword ptr [0x909f3c] */ fx_compare(ST(0), R_F32((u32)(0x909f3cu))); 
    /* 004e68f8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004e68fa: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004e68fb: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004e68fd: jbe 0x4e6909 */ if ((fC||fZ)) goto L_004e6909;
L_004e68ff:; BB(0x004e68ff);
    /* 004e68ff: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004e6901: fld dword ptr [0x909f40] */ FPUSH(R_F32((u32)(0x909f40u)));
    /* 004e6907: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
L_004e6909:; BB(0x004e6909);
    /* 004e6909: fsub st(2), st(0) */ ST(2) = ST(2) - ST(0);
    /* 004e690b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004e690d: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 004e690f: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004e6911: ret  */ FN_RET(0x004e68d0); r_esp += 4; return;
}

void f_004e6914(void) /* sub_4E6914 */
{
    FN_ENTER(0x004e6914);
    /* 004e6914: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 004e6918: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 004e691c: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 004e6920: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004e6921: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004e6922: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004e6923: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004e6924: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004e6927: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004e6929: mov ebp, edx */ r_ebp = r_edx;
    /* 004e692b: mov esi, eax */ r_esi = r_eax;
    /* 004e692d: mov eax, dword ptr [esp + 0x44] */ r_eax = R32((u32)(r_esp+0x44u));
    /* 004e6931: call 0x4e6f28 */ r_esp -= 4; W32(r_esp, 0x4e6936u); f_004e6f28();
    /* 004e6936: mov dword ptr [esi], 0 */ W32((u32)(r_esi), 0x0u);
    /* 004e693c: lea edi, [eax + eax] */ r_edi = (u32)(r_eax+r_eax);
    /* 004e693f: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004e6941: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 004e6943: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004e6945: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004e6947: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 004e6949: mov dword ptr [esp + 0x10], edi */ W32((u32)(r_esp+0x10u), r_edi);
    /* 004e694d: lea edi, [edi + edi] */ r_edi = (u32)(r_edi+r_edi);
    /* 004e6950: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004e6952: mov eax, dword ptr [edi + 0x9b5b80] */ r_eax = R32((u32)(r_edi+0x9b5b80u));
    /* 004e6958: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e695a: je 0x4e6af8 */ if (fZ) goto L_004e6af8;
L_004e6960:; BB(0x004e6960);
    /* 004e6960: mov edi, dword ptr [esp + 0x44] */ r_edi = R32((u32)(r_esp+0x44u));
    /* 004e6964: movsx edi, word ptr [edi + 0x40] */ r_edi = (u32)(i32)(i16)R16((u32)(r_edi+0x40u));
    /* 004e6968: mov edi, dword ptr [eax + edi*4] */ r_edi = R32((u32)(r_eax+r_edi*4));
    /* 004e696b: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e696d: je 0x4e6af8 */ if (fZ) goto L_004e6af8;
L_004e6973:; BB(0x004e6973);
    /* 004e6973: mov eax, dword ptr [edi + 4] */ r_eax = R32((u32)(r_edi+0x4u));
    /* 004e6976: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004e6979: jg 0x4e6af2 */ if ((!fZ&&fS==fO)) goto L_004e6af2;
L_004e697f:; BB(0x004e697f);
    /* 004e697f: mov dword ptr [esp + 0xc], edi */ W32((u32)(r_esp+0xcu), r_edi);
    /* 004e6983: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
    /* 004e6987: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 004e698b: lea ecx, [esi + 0x104] */ r_ecx = (u32)(r_esi+0x104u);
    /* 004e6991: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 004e6995: mov dword ptr [esi + 0x164], ecx */ W32((u32)(r_esi+0x164u), r_ecx);
    /* 004e699b: mov eax, dword ptr [edi + 4] */ r_eax = R32((u32)(r_edi+0x4u));
    /* 004e699e: mov dword ptr [esi + 0x168], eax */ W32((u32)(r_esi+0x168u), r_eax);
    /* 004e69a4: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 004e69a6: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 004e69aa: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004e69ac: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
L_004e69b0:; BB(0x004e69b0);
    /* 004e69b0: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 004e69b4: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 004e69b8: cmp edx, dword ptr [ecx + 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004e69bb: jge 0x4e6aea */ if ((fS==fO)) goto L_004e6aea;
L_004e69c1:; BB(0x004e69c1);
    /* 004e69c1: mov ebx, edx */ r_ebx = r_edx;
    /* 004e69c3: lea ebx, [ebx + ebx] */ r_ebx = (u32)(r_ebx+r_ebx);
    /* 004e69c6: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004e69c8: lea edx, [ebx + ebx] */ r_edx = (u32)(r_ebx+r_ebx);
    /* 004e69cb: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004e69cd: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004e69cf: lea ebp, [esi + edx + 4] */ r_ebp = (u32)(r_esi+r_edx+0x4u);
    /* 004e69d3: mov dword ptr [esp + 0x18], ebp */ W32((u32)(r_esp+0x18u), r_ebp);
    /* 004e69d7: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 004e69d9: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 004e69dd: push dword ptr [ecx] */ { u32 v = R32((u32)(r_ecx)); r_esp -= 4; W32(r_esp, v); }
    /* 004e69df: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004e69e0: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x4e69e5u); f_00858900();
    /* 004e69e5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004e69e8: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 004e69ec: mov byte ptr [esi + ebx*8 + 0x23], 0 */ W8((u32)(r_esi+r_ebx*8+0x23u), 0x0u);
    /* 004e69f1: movsx ecx, word ptr [edx*4 + 0x9b5b60] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx*4+0x9b5b60u));
    /* 004e69f9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004e69fb: jle 0x4e6e76 */ if ((fZ||fS!=fO)) goto L_004e6e76;
L_004e6a01:; BB(0x004e6a01);
    /* 004e6a01: movsx edx, byte ptr [esi + ebx*8 + 0xa] */ r_edx = (u32)(i32)(i8)R8((u32)(r_esi+r_ebx*8+0xau));
    /* 004e6a06: cmp edx, 0x30 */ {  u32 a = r_edx; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e6a09: je 0x4e6e5e */ if (fZ) goto L_004e6e5e;
L_004e6a0f:; BB(0x004e6a0f);
    /* 004e6a0f: movsx ebp, byte ptr [esi + ebx*8 + 8] */ r_ebp = (u32)(i32)(i8)R8((u32)(r_esi+r_ebx*8+0x8u));
    /* 004e6a14: cmp ebp, 0x62 */ {  u32 a = r_ebp; u32 b = 0x62u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e6a17: je 0x4e6a1e */ if (fZ) goto L_004e6a1e;
L_004e6a19:; BB(0x004e6a19);
    /* 004e6a19: cmp ebp, 0x74 */ {  u32 a = r_ebp; u32 b = 0x74u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e6a1c: jne 0x4e6a53 */ if (!fZ) goto L_004e6a53;
L_004e6a1e:; BB(0x004e6a1e);
    /* 004e6a1e: mov edi, dword ptr [esp + 0x44] */ r_edi = R32((u32)(r_esp+0x44u));
    /* 004e6a22: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 004e6a27: movsx ecx, word ptr [edi + 0x38] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edi+0x38u));
    /* 004e6a2b: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004e6a2e: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004e6a30: mov edi, ecx */ r_edi = r_ecx;
    /* 004e6a32: sar edi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 004e6a35: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 004e6a38: sub edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004e6a3a: lea edi, [edx + edx] */ r_edi = (u32)(r_edx+r_edx);
    /* 004e6a3d: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004e6a3f: add edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004e6a41: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004e6a43: sub ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004e6a45: add edx, 0x30 */ {  u32 a = r_edx; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004e6a48: mov byte ptr [esi + ebx*8 + 0xa], dl */ W8((u32)(r_esi+r_ebx*8+0xau), (u8)r_edx);
    /* 004e6a4c: add ecx, 0x30 */ {  u32 a = r_ecx; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004e6a4f: mov byte ptr [esi + ebx*8 + 0xb], cl */ W8((u32)(r_esi+r_ebx*8+0xbu), (u8)r_ecx);
L_004e6a53:; BB(0x004e6a53);
    /* 004e6a53: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 004e6a57: movsx ecx, word ptr [edx*4 + 0x9b5b62] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx*4+0x9b5b62u));
    /* 004e6a5f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004e6a61: jle 0x4e6a8b */ if ((fZ||fS!=fO)) goto L_004e6a8b;
L_004e6a63:; BB(0x004e6a63);
    /* 004e6a63: movsx edx, byte ptr [esi + ebx*8 + 0xc] */ r_edx = (u32)(i32)(i8)R8((u32)(r_esi+r_ebx*8+0xcu));
    /* 004e6a68: cmp edx, 0x7a */ {  u32 a = r_edx; u32 b = 0x7au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e6a6b: je 0x4e6a8b */ if (fZ) goto L_004e6a8b;
L_004e6a6d:; BB(0x004e6a6d);
    /* 004e6a6d: cmp ebp, 0x62 */ {  u32 a = r_ebp; u32 b = 0x62u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e6a70: je 0x4e6a7c */ if (fZ) goto L_004e6a7c;
L_004e6a72:; BB(0x004e6a72);
    /* 004e6a72: cmp ebp, 0x66 */ {  u32 a = r_ebp; u32 b = 0x66u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e6a75: je 0x4e6a7c */ if (fZ) goto L_004e6a7c;
L_004e6a77:; BB(0x004e6a77);
    /* 004e6a77: cmp ebp, 0x74 */ {  u32 a = r_ebp; u32 b = 0x74u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e6a7a: jne 0x4e6a8b */ if (!fZ) goto L_004e6a8b;
L_004e6a7c:; BB(0x004e6a7c);
    /* 004e6a7c: mov edi, dword ptr [esp + 0x44] */ r_edi = R32((u32)(r_esp+0x44u));
    /* 004e6a80: movzx edx, word ptr [edi + 0x3a] */ r_edx = (u32)R16((u32)(r_edi+0x3au));
    /* 004e6a84: add edx, 0x61 */ {  u32 a = r_edx; u32 b = 0x61u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004e6a87: mov byte ptr [esi + ebx*8 + 0xc], dl */ W8((u32)(r_esi+r_ebx*8+0xcu), (u8)r_edx);
L_004e6a8b:; BB(0x004e6a8b);
    /* 004e6a8b: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 004e6a8f: movsx ecx, word ptr [edx*4 + 0x9b5b64] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx*4+0x9b5b64u));
    /* 004e6a97: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004e6a99: jle 0x4e6ab9 */ if ((fZ||fS!=fO)) goto L_004e6ab9;
L_004e6a9b:; BB(0x004e6a9b);
    /* 004e6a9b: movsx edx, byte ptr [esi + ebx*8 + 0xb] */ r_edx = (u32)(i32)(i8)R8((u32)(r_esi+r_ebx*8+0xbu));
    /* 004e6aa0: cmp edx, 0x30 */ {  u32 a = r_edx; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e6aa3: je 0x4e6ab9 */ if (fZ) goto L_004e6ab9;
L_004e6aa5:; BB(0x004e6aa5);
    /* 004e6aa5: cmp ebp, 0x66 */ {  u32 a = r_ebp; u32 b = 0x66u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e6aa8: jne 0x4e6ab9 */ if (!fZ) goto L_004e6ab9;
L_004e6aaa:; BB(0x004e6aaa);
    /* 004e6aaa: mov edi, dword ptr [esp + 0x44] */ r_edi = R32((u32)(r_esp+0x44u));
    /* 004e6aae: movzx edx, word ptr [edi + 0x3c] */ r_edx = (u32)R16((u32)(r_edi+0x3cu));
    /* 004e6ab2: add edx, 0x31 */ {  u32 a = r_edx; u32 b = 0x31u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004e6ab5: mov byte ptr [esi + ebx*8 + 0xb], dl */ W8((u32)(r_esi+r_ebx*8+0xbu), (u8)r_edx);
L_004e6ab9:; BB(0x004e6ab9);
    /* 004e6ab9: cmp ebp, 0x63 */ {  u32 a = r_ebp; u32 b = 0x63u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e6abc: je 0x4e6e2e */ if (fZ) goto L_004e6e2e;
L_004e6ac2:; BB(0x004e6ac2);
    /* 004e6ac2: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
    /* 004e6ac6: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 004e6aca: add dword ptr [esp + 0x20], 1 */ { u32 ad = (u32)(r_esp+0x20u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 004e6acf: mov dword ptr [ebx], edx */ W32((u32)(r_ebx), r_edx);
    /* 004e6ad1: add dword ptr [esp + 0x1c], 4 */ { u32 ad = (u32)(r_esp+0x1cu);  u32 a = R32(ad); u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 004e6ad6: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004e6ad8: mov dword ptr [ebx + 8], ecx */ W32((u32)(r_ebx+0x8u), r_ecx);
    /* 004e6adb: mov dword ptr [ebx + 4], ecx */ W32((u32)(r_ebx+0x4u), r_ecx);
    /* 004e6ade: add ebx, 0xc */ {  u32 a = r_ebx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004e6ae1: mov dword ptr [esp + 0x14], ebx */ W32((u32)(r_esp+0x14u), r_ebx);
    /* 004e6ae5: jmp 0x4e69b0 */ goto L_004e69b0;
L_004e6aea:; BB(0x004e6aea);
    /* 004e6aea: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
    /* 004e6aee: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
L_004e6af2:; BB(0x004e6af2);
    /* 004e6af2: mov dword ptr [esi], 1 */ W32((u32)(r_esi), 0x1u);
L_004e6af8:; BB(0x004e6af8);
    /* 004e6af8: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 004e6afc: mov dword ptr [ebp], 0 */ W32((u32)(r_ebp), 0x0u);
    /* 004e6b03: mov esi, dword ptr [eax*4 + 0x9b5b84] */ r_esi = R32((u32)(r_eax*4+0x9b5b84u));
    /* 004e6b0a: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e6b0c: je 0x4e6ca3 */ if (fZ) goto L_004e6ca3;
L_004e6b12:; BB(0x004e6b12);
    /* 004e6b12: mov eax, dword ptr [esp + 0x44] */ r_eax = R32((u32)(r_esp+0x44u));
    /* 004e6b16: movsx edi, word ptr [eax + 0x3e] */ r_edi = (u32)(i32)(i16)R16((u32)(r_eax+0x3eu));
    /* 004e6b1a: mov eax, dword ptr [esi + edi*4] */ r_eax = R32((u32)(r_esi+r_edi*4));
    /* 004e6b1d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e6b1f: je 0x4e6ca3 */ if (fZ) goto L_004e6ca3;
L_004e6b25:; BB(0x004e6b25);
    /* 004e6b25: mov esi, dword ptr [eax + 4] */ r_esi = R32((u32)(r_eax+0x4u));
    /* 004e6b28: cmp esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004e6b2b: jg 0x4e6c9c */ if ((!fZ&&fS==fO)) goto L_004e6c9c;
L_004e6b31:; BB(0x004e6b31);
    /* 004e6b31: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004e6b35: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 004e6b39: lea edi, [ebp + 0x104] */ r_edi = (u32)(r_ebp+0x104u);
    /* 004e6b3f: mov dword ptr [ebp + 0x164], edi */ W32((u32)(r_ebp+0x164u), r_edi);
    /* 004e6b45: mov esi, dword ptr [eax + 4] */ r_esi = R32((u32)(r_eax+0x4u));
    /* 004e6b48: mov dword ptr [esp + 0x1c], edi */ W32((u32)(r_esp+0x1cu), r_edi);
    /* 004e6b4c: mov dword ptr [ebp + 0x168], esi */ W32((u32)(r_ebp+0x168u), r_esi);
    /* 004e6b52: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004e6b54: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 004e6b56: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 004e6b5a: mov dword ptr [esp + 0xc], esi */ W32((u32)(r_esp+0xcu), r_esi);
L_004e6b5e:; BB(0x004e6b5e);
    /* 004e6b5e: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 004e6b62: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 004e6b66: cmp eax, dword ptr [ecx + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004e6b69: jge 0x4e6c98 */ if ((fS==fO)) goto L_004e6c98;
L_004e6b6f:; BB(0x004e6b6f);
    /* 004e6b6f: mov ebx, eax */ r_ebx = r_eax;
    /* 004e6b71: lea ebx, [ebx + ebx] */ r_ebx = (u32)(r_ebx+r_ebx);
    /* 004e6b74: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004e6b76: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 004e6b79: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004e6b7b: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004e6b7d: lea esi, [ebp + eax + 4] */ r_esi = (u32)(r_ebp+r_eax+0x4u);
    /* 004e6b81: mov dword ptr [esp + 0x18], esi */ W32((u32)(r_esp+0x18u), r_esi);
    /* 004e6b85: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 004e6b87: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 004e6b8b: push dword ptr [ecx] */ { u32 v = R32((u32)(r_ecx)); r_esp -= 4; W32(r_esp, v); }
    /* 004e6b8d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004e6b8e: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x4e6b93u); f_00858900();
    /* 004e6b93: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004e6b96: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 004e6b9a: mov byte ptr [ebp + ebx*8 + 0x23], 0 */ W8((u32)(r_ebp+r_ebx*8+0x23u), 0x0u);
    /* 004e6b9f: movsx ecx, word ptr [eax*4 + 0x9b5b60] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax*4+0x9b5b60u));
    /* 004e6ba7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004e6ba9: jle 0x4e6ec8 */ if ((fZ||fS!=fO)) goto L_004e6ec8;
L_004e6baf:; BB(0x004e6baf);
    /* 004e6baf: movsx eax, byte ptr [ebp + ebx*8 + 0xa] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+r_ebx*8+0xau));
    /* 004e6bb4: cmp eax, 0x30 */ {  u32 a = r_eax; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e6bb7: je 0x4e6eb0 */ if (fZ) goto L_004e6eb0;
L_004e6bbd:; BB(0x004e6bbd);
    /* 004e6bbd: movsx esi, byte ptr [ebp + ebx*8 + 8] */ r_esi = (u32)(i32)(i8)R8((u32)(r_ebp+r_ebx*8+0x8u));
    /* 004e6bc2: cmp esi, 0x62 */ {  u32 a = r_esi; u32 b = 0x62u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e6bc5: je 0x4e6bcc */ if (fZ) goto L_004e6bcc;
L_004e6bc7:; BB(0x004e6bc7);
    /* 004e6bc7: cmp esi, 0x74 */ {  u32 a = r_esi; u32 b = 0x74u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e6bca: jne 0x4e6c01 */ if (!fZ) goto L_004e6c01;
L_004e6bcc:; BB(0x004e6bcc);
    /* 004e6bcc: mov edi, dword ptr [esp + 0x44] */ r_edi = R32((u32)(r_esp+0x44u));
    /* 004e6bd0: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 004e6bd5: movsx ecx, word ptr [edi + 0x38] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edi+0x38u));
    /* 004e6bd9: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004e6bdc: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004e6bde: mov eax, ecx */ r_eax = r_ecx;
    /* 004e6be0: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004e6be3: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 004e6be6: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004e6be8: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 004e6beb: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004e6bed: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004e6bef: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004e6bf1: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004e6bf3: add edx, 0x30 */ {  u32 a = r_edx; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004e6bf6: mov byte ptr [ebp + ebx*8 + 0xa], dl */ W8((u32)(r_ebp+r_ebx*8+0xau), (u8)r_edx);
    /* 004e6bfa: add ecx, 0x30 */ {  u32 a = r_ecx; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004e6bfd: mov byte ptr [ebp + ebx*8 + 0xb], cl */ W8((u32)(r_ebp+r_ebx*8+0xbu), (u8)r_ecx);
L_004e6c01:; BB(0x004e6c01);
    /* 004e6c01: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 004e6c05: movsx ecx, word ptr [eax*4 + 0x9b5b62] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax*4+0x9b5b62u));
    /* 004e6c0d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004e6c0f: jle 0x4e6c39 */ if ((fZ||fS!=fO)) goto L_004e6c39;
L_004e6c11:; BB(0x004e6c11);
    /* 004e6c11: movsx eax, byte ptr [ebp + ebx*8 + 0xc] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+r_ebx*8+0xcu));
    /* 004e6c16: cmp eax, 0x7a */ {  u32 a = r_eax; u32 b = 0x7au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e6c19: je 0x4e6c39 */ if (fZ) goto L_004e6c39;
L_004e6c1b:; BB(0x004e6c1b);
    /* 004e6c1b: cmp esi, 0x62 */ {  u32 a = r_esi; u32 b = 0x62u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e6c1e: je 0x4e6c2a */ if (fZ) goto L_004e6c2a;
L_004e6c20:; BB(0x004e6c20);
    /* 004e6c20: cmp esi, 0x66 */ {  u32 a = r_esi; u32 b = 0x66u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e6c23: je 0x4e6c2a */ if (fZ) goto L_004e6c2a;
L_004e6c25:; BB(0x004e6c25);
    /* 004e6c25: cmp esi, 0x74 */ {  u32 a = r_esi; u32 b = 0x74u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e6c28: jne 0x4e6c39 */ if (!fZ) goto L_004e6c39;
L_004e6c2a:; BB(0x004e6c2a);
    /* 004e6c2a: mov edi, dword ptr [esp + 0x44] */ r_edi = R32((u32)(r_esp+0x44u));
    /* 004e6c2e: movzx eax, word ptr [edi + 0x3a] */ r_eax = (u32)R16((u32)(r_edi+0x3au));
    /* 004e6c32: add eax, 0x61 */ {  u32 a = r_eax; u32 b = 0x61u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004e6c35: mov byte ptr [ebp + ebx*8 + 0xc], al */ W8((u32)(r_ebp+r_ebx*8+0xcu), (u8)r_eax);
L_004e6c39:; BB(0x004e6c39);
    /* 004e6c39: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 004e6c3d: movsx ecx, word ptr [eax*4 + 0x9b5b64] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax*4+0x9b5b64u));
    /* 004e6c45: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004e6c47: jle 0x4e6c67 */ if ((fZ||fS!=fO)) goto L_004e6c67;
L_004e6c49:; BB(0x004e6c49);
    /* 004e6c49: movsx eax, byte ptr [ebp + ebx*8 + 0xb] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+r_ebx*8+0xbu));
    /* 004e6c4e: cmp eax, 0x30 */ {  u32 a = r_eax; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e6c51: je 0x4e6c67 */ if (fZ) goto L_004e6c67;
L_004e6c53:; BB(0x004e6c53);
    /* 004e6c53: cmp esi, 0x66 */ {  u32 a = r_esi; u32 b = 0x66u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e6c56: jne 0x4e6c67 */ if (!fZ) goto L_004e6c67;
L_004e6c58:; BB(0x004e6c58);
    /* 004e6c58: mov edi, dword ptr [esp + 0x44] */ r_edi = R32((u32)(r_esp+0x44u));
    /* 004e6c5c: movzx eax, word ptr [edi + 0x3c] */ r_eax = (u32)R16((u32)(r_edi+0x3cu));
    /* 004e6c60: add eax, 0x31 */ {  u32 a = r_eax; u32 b = 0x31u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004e6c63: mov byte ptr [ebp + ebx*8 + 0xb], al */ W8((u32)(r_ebp+r_ebx*8+0xbu), (u8)r_eax);
L_004e6c67:; BB(0x004e6c67);
    /* 004e6c67: cmp esi, 0x63 */ {  u32 a = r_esi; u32 b = 0x63u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e6c6a: je 0x4e6e80 */ if (fZ) goto L_004e6e80;
L_004e6c70:; BB(0x004e6c70);
    /* 004e6c70: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
    /* 004e6c74: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 004e6c78: add dword ptr [esp + 0xc], 1 */ { u32 ad = (u32)(r_esp+0xcu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 004e6c7d: mov dword ptr [ebx], eax */ W32((u32)(r_ebx), r_eax);
    /* 004e6c7f: add dword ptr [esp + 0x14], 4 */ { u32 ad = (u32)(r_esp+0x14u);  u32 a = R32(ad); u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 004e6c84: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004e6c86: mov dword ptr [ebx + 8], ecx */ W32((u32)(r_ebx+0x8u), r_ecx);
    /* 004e6c89: mov dword ptr [ebx + 4], ecx */ W32((u32)(r_ebx+0x4u), r_ecx);
    /* 004e6c8c: add ebx, 0xc */ {  u32 a = r_ebx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004e6c8f: mov dword ptr [esp + 0x1c], ebx */ W32((u32)(r_esp+0x1cu), r_ebx);
    /* 004e6c93: jmp 0x4e6b5e */ goto L_004e6b5e;
L_004e6c98:; BB(0x004e6c98);
    /* 004e6c98: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
L_004e6c9c:; BB(0x004e6c9c);
    /* 004e6c9c: mov dword ptr [ebp], 1 */ W32((u32)(r_ebp), 0x1u);
L_004e6ca3:; BB(0x004e6ca3);
    /* 004e6ca3: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 004e6ca7: mov ebp, dword ptr [eax*4 + 0x9b5b88] */ r_ebp = R32((u32)(r_eax*4+0x9b5b88u));
    /* 004e6cae: mov edx, dword ptr [ebp + 4] */ r_edx = R32((u32)(r_ebp+0x4u));
    /* 004e6cb1: cmp edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004e6cb4: jg 0x4e6e20 */ if ((!fZ&&fS==fO)) goto L_004e6e20;
L_004e6cba:; BB(0x004e6cba);
    /* 004e6cba: mov dword ptr [esp + 0x20], ebp */ W32((u32)(r_esp+0x20u), r_ebp);
    /* 004e6cbe: lea edx, [ebx + 0x104] */ r_edx = (u32)(r_ebx+0x104u);
    /* 004e6cc4: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 004e6cc8: mov dword ptr [ebx + 0x164], edx */ W32((u32)(r_ebx+0x164u), r_edx);
    /* 004e6cce: mov eax, dword ptr [ebp + 4] */ r_eax = R32((u32)(r_ebp+0x4u));
    /* 004e6cd1: mov dword ptr [ebx + 0x168], eax */ W32((u32)(r_ebx+0x168u), r_eax);
    /* 004e6cd7: mov esi, dword ptr [ebp] */ r_esi = R32((u32)(r_ebp));
    /* 004e6cda: mov dword ptr [esp + 0x14], esi */ W32((u32)(r_esp+0x14u), r_esi);
    /* 004e6cde: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004e6ce0: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
L_004e6ce4:; BB(0x004e6ce4);
    /* 004e6ce4: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 004e6ce8: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 004e6cec: cmp eax, dword ptr [edx + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004e6cef: jge 0x4e6e20 */ if ((fS==fO)) goto L_004e6e20;
L_004e6cf5:; BB(0x004e6cf5);
    /* 004e6cf5: mov ebp, eax */ r_ebp = r_eax;
    /* 004e6cf7: lea ebp, [ebp + ebp] */ r_ebp = (u32)(r_ebp+r_ebp);
    /* 004e6cfb: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004e6cfd: lea eax, [ebp + ebp] */ r_eax = (u32)(r_ebp+r_ebp);
    /* 004e6d01: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004e6d03: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004e6d05: lea ecx, [ebx + eax + 4] */ r_ecx = (u32)(r_ebx+r_eax+0x4u);
    /* 004e6d09: mov dword ptr [esp + 0x18], ecx */ W32((u32)(r_esp+0x18u), r_ecx);
    /* 004e6d0d: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 004e6d0f: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 004e6d13: push dword ptr [edx] */ { u32 v = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, v); }
    /* 004e6d15: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004e6d16: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x4e6d1bu); f_00858900();
    /* 004e6d1b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004e6d1e: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 004e6d22: mov byte ptr [ebx + ebp*8 + 0x23], 0 */ W8((u32)(r_ebx+r_ebp*8+0x23u), 0x0u);
    /* 004e6d27: movsx edx, word ptr [eax*4 + 0x9b5b60] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax*4+0x9b5b60u));
    /* 004e6d2f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004e6d31: jle 0x4e6f1a */ if ((fZ||fS!=fO)) goto L_004e6f1a;
L_004e6d37:; BB(0x004e6d37);
    /* 004e6d37: movsx eax, byte ptr [ebx + ebp*8 + 0xa] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebx+r_ebp*8+0xau));
    /* 004e6d3c: cmp eax, 0x30 */ {  u32 a = r_eax; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e6d3f: je 0x4e6f02 */ if (fZ) goto L_004e6f02;
L_004e6d45:; BB(0x004e6d45);
    /* 004e6d45: movsx esi, byte ptr [ebx + ebp*8 + 8] */ r_esi = (u32)(i32)(i8)R8((u32)(r_ebx+r_ebp*8+0x8u));
    /* 004e6d4a: cmp esi, 0x62 */ {  u32 a = r_esi; u32 b = 0x62u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e6d4d: je 0x4e6d54 */ if (fZ) goto L_004e6d54;
L_004e6d4f:; BB(0x004e6d4f);
    /* 004e6d4f: cmp esi, 0x74 */ {  u32 a = r_esi; u32 b = 0x74u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e6d52: jne 0x4e6d89 */ if (!fZ) goto L_004e6d89;
L_004e6d54:; BB(0x004e6d54);
    /* 004e6d54: mov edi, dword ptr [esp + 0x44] */ r_edi = R32((u32)(r_esp+0x44u));
    /* 004e6d58: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 004e6d5d: movsx ecx, word ptr [edi + 0x38] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edi+0x38u));
    /* 004e6d61: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004e6d64: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004e6d66: mov eax, ecx */ r_eax = r_ecx;
    /* 004e6d68: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004e6d6b: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 004e6d6e: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004e6d70: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 004e6d73: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004e6d75: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004e6d77: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004e6d79: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004e6d7b: add edx, 0x30 */ {  u32 a = r_edx; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004e6d7e: mov byte ptr [ebx + ebp*8 + 0xa], dl */ W8((u32)(r_ebx+r_ebp*8+0xau), (u8)r_edx);
    /* 004e6d82: add ecx, 0x30 */ {  u32 a = r_ecx; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004e6d85: mov byte ptr [ebx + ebp*8 + 0xb], cl */ W8((u32)(r_ebx+r_ebp*8+0xbu), (u8)r_ecx);
L_004e6d89:; BB(0x004e6d89);
    /* 004e6d89: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 004e6d8d: movsx edx, word ptr [eax*4 + 0x9b5b62] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax*4+0x9b5b62u));
    /* 004e6d95: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004e6d97: jle 0x4e6dc1 */ if ((fZ||fS!=fO)) goto L_004e6dc1;
L_004e6d99:; BB(0x004e6d99);
    /* 004e6d99: movsx eax, byte ptr [ebx + ebp*8 + 0xc] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebx+r_ebp*8+0xcu));
    /* 004e6d9e: cmp eax, 0x7a */ {  u32 a = r_eax; u32 b = 0x7au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e6da1: je 0x4e6dc1 */ if (fZ) goto L_004e6dc1;
L_004e6da3:; BB(0x004e6da3);
    /* 004e6da3: cmp esi, 0x62 */ {  u32 a = r_esi; u32 b = 0x62u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e6da6: je 0x4e6db2 */ if (fZ) goto L_004e6db2;
L_004e6da8:; BB(0x004e6da8);
    /* 004e6da8: cmp esi, 0x66 */ {  u32 a = r_esi; u32 b = 0x66u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e6dab: je 0x4e6db2 */ if (fZ) goto L_004e6db2;
L_004e6dad:; BB(0x004e6dad);
    /* 004e6dad: cmp esi, 0x74 */ {  u32 a = r_esi; u32 b = 0x74u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e6db0: jne 0x4e6dc1 */ if (!fZ) goto L_004e6dc1;
L_004e6db2:; BB(0x004e6db2);
    /* 004e6db2: mov edi, dword ptr [esp + 0x44] */ r_edi = R32((u32)(r_esp+0x44u));
    /* 004e6db6: movzx eax, word ptr [edi + 0x3a] */ r_eax = (u32)R16((u32)(r_edi+0x3au));
    /* 004e6dba: add eax, 0x61 */ {  u32 a = r_eax; u32 b = 0x61u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004e6dbd: mov byte ptr [ebx + ebp*8 + 0xc], al */ W8((u32)(r_ebx+r_ebp*8+0xcu), (u8)r_eax);
L_004e6dc1:; BB(0x004e6dc1);
    /* 004e6dc1: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 004e6dc5: movsx edx, word ptr [eax*4 + 0x9b5b64] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax*4+0x9b5b64u));
    /* 004e6dcd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004e6dcf: jle 0x4e6def */ if ((fZ||fS!=fO)) goto L_004e6def;
L_004e6dd1:; BB(0x004e6dd1);
    /* 004e6dd1: movsx eax, byte ptr [ebx + ebp*8 + 0xb] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebx+r_ebp*8+0xbu));
    /* 004e6dd6: cmp eax, 0x30 */ {  u32 a = r_eax; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e6dd9: je 0x4e6def */ if (fZ) goto L_004e6def;
L_004e6ddb:; BB(0x004e6ddb);
    /* 004e6ddb: cmp esi, 0x66 */ {  u32 a = r_esi; u32 b = 0x66u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e6dde: jne 0x4e6def */ if (!fZ) goto L_004e6def;
L_004e6de0:; BB(0x004e6de0);
    /* 004e6de0: mov edi, dword ptr [esp + 0x44] */ r_edi = R32((u32)(r_esp+0x44u));
    /* 004e6de4: movzx eax, word ptr [edi + 0x3c] */ r_eax = (u32)R16((u32)(r_edi+0x3cu));
    /* 004e6de8: add eax, 0x31 */ {  u32 a = r_eax; u32 b = 0x31u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004e6deb: mov byte ptr [ebx + ebp*8 + 0xb], al */ W8((u32)(r_ebx+r_ebp*8+0xbu), (u8)r_eax);
L_004e6def:; BB(0x004e6def);
    /* 004e6def: cmp esi, 0x63 */ {  u32 a = r_esi; u32 b = 0x63u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e6df2: je 0x4e6ed2 */ if (fZ) goto L_004e6ed2;
L_004e6df8:; BB(0x004e6df8);
    /* 004e6df8: mov ecx, dword ptr [esp + 0x1c] */ r_ecx = R32((u32)(r_esp+0x1cu));
    /* 004e6dfc: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 004e6e00: add dword ptr [esp + 0xc], 1 */ { u32 ad = (u32)(r_esp+0xcu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 004e6e05: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 004e6e07: add dword ptr [esp + 0x14], 4 */ { u32 ad = (u32)(r_esp+0x14u);  u32 a = R32(ad); u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 004e6e0c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004e6e0e: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 004e6e11: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 004e6e14: add ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004e6e17: mov dword ptr [esp + 0x1c], ecx */ W32((u32)(r_esp+0x1cu), r_ecx);
    /* 004e6e1b: jmp 0x4e6ce4 */ goto L_004e6ce4;
L_004e6e20:; BB(0x004e6e20);
    /* 004e6e20: mov dword ptr [ebx], 1 */ W32((u32)(r_ebx), 0x1u);
    /* 004e6e26: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004e6e29: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004e6e2a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004e6e2b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004e6e2c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004e6e2d: ret  */ FN_RET(0x004e6914); r_esp += 4; return;
L_004e6e2e:; BB(0x004e6e2e);
    /* 004e6e2e: mov edx, dword ptr [esp + 0x44] */ r_edx = R32((u32)(r_esp+0x44u));
    /* 004e6e32: movzx ecx, byte ptr [edx + 0x32] */ r_ecx = (u32)R8((u32)(r_edx+0x32u));
    /* 004e6e36: test cl, 1 */ {  u32 a = (u8)r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004e6e39: je 0x4e6e45 */ if (fZ) goto L_004e6e45;
L_004e6e3b:; BB(0x004e6e3b);
    /* 004e6e3b: mov byte ptr [esi + ebx*8 + 0xc], 0x7a */ W8((u32)(r_esi+r_ebx*8+0xcu), 0x7au);
    /* 004e6e40: jmp 0x4e6ac2 */ goto L_004e6ac2;
L_004e6e45:; BB(0x004e6e45);
    /* 004e6e45: mov edx, dword ptr [esp + 0x44] */ r_edx = R32((u32)(r_esp+0x44u));
    /* 004e6e49: movsx edx, byte ptr [edx + 0x30] */ r_edx = (u32)(i32)(i8)R8((u32)(r_edx+0x30u));
    /* 004e6e4d: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e6e50: je 0x4e6e3b */ if (fZ) goto L_004e6e3b;
L_004e6e52:; BB(0x004e6e52);
    /* 004e6e52: add edx, 0x61 */ {  u32 a = r_edx; u32 b = 0x61u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004e6e55: mov byte ptr [esi + ebx*8 + 0xc], dl */ W8((u32)(r_esi+r_ebx*8+0xcu), (u8)r_edx);
    /* 004e6e59: jmp 0x4e6ac2 */ goto L_004e6ac2;
L_004e6e5e:; BB(0x004e6e5e);
    /* 004e6e5e: movsx edx, byte ptr [esi + ebx*8 + 0xb] */ r_edx = (u32)(i32)(i8)R8((u32)(r_esi+r_ebx*8+0xbu));
    /* 004e6e63: cmp edx, 0x30 */ {  u32 a = r_edx; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e6e66: jne 0x4e6a0f */ if (!fZ) goto L_004e6a0f;
L_004e6e6c:; BB(0x004e6e6c);
    /* 004e6e6c: movsx ebp, byte ptr [esi + ebx*8 + 8] */ r_ebp = (u32)(i32)(i8)R8((u32)(r_esi+r_ebx*8+0x8u));
    /* 004e6e71: jmp 0x4e6a53 */ goto L_004e6a53;
L_004e6e76:; BB(0x004e6e76);
    /* 004e6e76: movsx ebp, byte ptr [esi + ebx*8 + 8] */ r_ebp = (u32)(i32)(i8)R8((u32)(r_esi+r_ebx*8+0x8u));
    /* 004e6e7b: jmp 0x4e6a53 */ goto L_004e6a53;
L_004e6e80:; BB(0x004e6e80);
    /* 004e6e80: mov eax, dword ptr [esp + 0x44] */ r_eax = R32((u32)(r_esp+0x44u));
    /* 004e6e84: movzx ecx, byte ptr [eax + 0x32] */ r_ecx = (u32)R8((u32)(r_eax+0x32u));
    /* 004e6e88: test cl, 1 */ {  u32 a = (u8)r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004e6e8b: je 0x4e6e97 */ if (fZ) goto L_004e6e97;
L_004e6e8d:; BB(0x004e6e8d);
    /* 004e6e8d: mov byte ptr [ebp + ebx*8 + 0xc], 0x7a */ W8((u32)(r_ebp+r_ebx*8+0xcu), 0x7au);
    /* 004e6e92: jmp 0x4e6c70 */ goto L_004e6c70;
L_004e6e97:; BB(0x004e6e97);
    /* 004e6e97: mov eax, dword ptr [esp + 0x44] */ r_eax = R32((u32)(r_esp+0x44u));
    /* 004e6e9b: movsx eax, byte ptr [eax + 0x30] */ r_eax = (u32)(i32)(i8)R8((u32)(r_eax+0x30u));
    /* 004e6e9f: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e6ea2: je 0x4e6e8d */ if (fZ) goto L_004e6e8d;
L_004e6ea4:; BB(0x004e6ea4);
    /* 004e6ea4: add eax, 0x61 */ {  u32 a = r_eax; u32 b = 0x61u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004e6ea7: mov byte ptr [ebp + ebx*8 + 0xc], al */ W8((u32)(r_ebp+r_ebx*8+0xcu), (u8)r_eax);
    /* 004e6eab: jmp 0x4e6c70 */ goto L_004e6c70;
L_004e6eb0:; BB(0x004e6eb0);
    /* 004e6eb0: movsx eax, byte ptr [ebp + ebx*8 + 0xb] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+r_ebx*8+0xbu));
    /* 004e6eb5: cmp eax, 0x30 */ {  u32 a = r_eax; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e6eb8: jne 0x4e6bbd */ if (!fZ) goto L_004e6bbd;
L_004e6ebe:; BB(0x004e6ebe);
    /* 004e6ebe: movsx esi, byte ptr [ebp + ebx*8 + 8] */ r_esi = (u32)(i32)(i8)R8((u32)(r_ebp+r_ebx*8+0x8u));
    /* 004e6ec3: jmp 0x4e6c01 */ goto L_004e6c01;
L_004e6ec8:; BB(0x004e6ec8);
    /* 004e6ec8: movsx esi, byte ptr [ebp + ebx*8 + 8] */ r_esi = (u32)(i32)(i8)R8((u32)(r_ebp+r_ebx*8+0x8u));
    /* 004e6ecd: jmp 0x4e6c01 */ goto L_004e6c01;
L_004e6ed2:; BB(0x004e6ed2);
    /* 004e6ed2: mov eax, dword ptr [esp + 0x44] */ r_eax = R32((u32)(r_esp+0x44u));
    /* 004e6ed6: movzx edx, byte ptr [eax + 0x32] */ r_edx = (u32)R8((u32)(r_eax+0x32u));
    /* 004e6eda: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004e6edd: je 0x4e6ee9 */ if (fZ) goto L_004e6ee9;
L_004e6edf:; BB(0x004e6edf);
    /* 004e6edf: mov byte ptr [ebx + ebp*8 + 0xc], 0x7a */ W8((u32)(r_ebx+r_ebp*8+0xcu), 0x7au);
    /* 004e6ee4: jmp 0x4e6df8 */ goto L_004e6df8;
L_004e6ee9:; BB(0x004e6ee9);
    /* 004e6ee9: mov eax, dword ptr [esp + 0x44] */ r_eax = R32((u32)(r_esp+0x44u));
    /* 004e6eed: movsx eax, byte ptr [eax + 0x30] */ r_eax = (u32)(i32)(i8)R8((u32)(r_eax+0x30u));
    /* 004e6ef1: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e6ef4: je 0x4e6edf */ if (fZ) goto L_004e6edf;
L_004e6ef6:; BB(0x004e6ef6);
    /* 004e6ef6: add eax, 0x61 */ {  u32 a = r_eax; u32 b = 0x61u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004e6ef9: mov byte ptr [ebx + ebp*8 + 0xc], al */ W8((u32)(r_ebx+r_ebp*8+0xcu), (u8)r_eax);
    /* 004e6efd: jmp 0x4e6df8 */ goto L_004e6df8;
L_004e6f02:; BB(0x004e6f02);
    /* 004e6f02: movsx eax, byte ptr [ebx + ebp*8 + 0xb] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebx+r_ebp*8+0xbu));
    /* 004e6f07: cmp eax, 0x30 */ {  u32 a = r_eax; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e6f0a: jne 0x4e6d45 */ if (!fZ) goto L_004e6d45;
L_004e6f10:; BB(0x004e6f10);
    /* 004e6f10: movsx esi, byte ptr [ebx + ebp*8 + 8] */ r_esi = (u32)(i32)(i8)R8((u32)(r_ebx+r_ebp*8+0x8u));
    /* 004e6f15: jmp 0x4e6d89 */ goto L_004e6d89;
L_004e6f1a:; BB(0x004e6f1a);
    /* 004e6f1a: movsx esi, byte ptr [ebx + ebp*8 + 8] */ r_esi = (u32)(i32)(i8)R8((u32)(r_ebx+r_ebp*8+0x8u));
    /* 004e6f1f: jmp 0x4e6d89 */ goto L_004e6d89;
}

void f_004e6920(void) /* sub_4E6920 */
{
    FN_ENTER(0x004e6920);
    /* 004e6920: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004e6921: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004e6922: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004e6923: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004e6924: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004e6927: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004e6929: mov ebp, edx */ r_ebp = r_edx;
    /* 004e692b: mov esi, eax */ r_esi = r_eax;
    /* 004e692d: mov eax, dword ptr [esp + 0x44] */ r_eax = R32((u32)(r_esp+0x44u));
    /* 004e6931: call 0x4e6f28 */ r_esp -= 4; W32(r_esp, 0x4e6936u); f_004e6f28();
    /* 004e6936: mov dword ptr [esi], 0 */ W32((u32)(r_esi), 0x0u);
    /* 004e693c: lea edi, [eax + eax] */ r_edi = (u32)(r_eax+r_eax);
    /* 004e693f: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004e6941: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 004e6943: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004e6945: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004e6947: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 004e6949: mov dword ptr [esp + 0x10], edi */ W32((u32)(r_esp+0x10u), r_edi);
    /* 004e694d: lea edi, [edi + edi] */ r_edi = (u32)(r_edi+r_edi);
    /* 004e6950: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004e6952: mov eax, dword ptr [edi + 0x9b5b80] */ r_eax = R32((u32)(r_edi+0x9b5b80u));
    /* 004e6958: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e695a: je 0x4e6af8 */ if (fZ) goto L_004e6af8;
L_004e6960:; BB(0x004e6960);
    /* 004e6960: mov edi, dword ptr [esp + 0x44] */ r_edi = R32((u32)(r_esp+0x44u));
    /* 004e6964: movsx edi, word ptr [edi + 0x40] */ r_edi = (u32)(i32)(i16)R16((u32)(r_edi+0x40u));
    /* 004e6968: mov edi, dword ptr [eax + edi*4] */ r_edi = R32((u32)(r_eax+r_edi*4));
    /* 004e696b: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e696d: je 0x4e6af8 */ if (fZ) goto L_004e6af8;
L_004e6973:; BB(0x004e6973);
    /* 004e6973: mov eax, dword ptr [edi + 4] */ r_eax = R32((u32)(r_edi+0x4u));
    /* 004e6976: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004e6979: jg 0x4e6af2 */ if ((!fZ&&fS==fO)) goto L_004e6af2;
L_004e697f:; BB(0x004e697f);
    /* 004e697f: mov dword ptr [esp + 0xc], edi */ W32((u32)(r_esp+0xcu), r_edi);
    /* 004e6983: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
    /* 004e6987: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 004e698b: lea ecx, [esi + 0x104] */ r_ecx = (u32)(r_esi+0x104u);
    /* 004e6991: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 004e6995: mov dword ptr [esi + 0x164], ecx */ W32((u32)(r_esi+0x164u), r_ecx);
    /* 004e699b: mov eax, dword ptr [edi + 4] */ r_eax = R32((u32)(r_edi+0x4u));
    /* 004e699e: mov dword ptr [esi + 0x168], eax */ W32((u32)(r_esi+0x168u), r_eax);
    /* 004e69a4: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 004e69a6: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 004e69aa: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004e69ac: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
L_004e69b0:; BB(0x004e69b0);
    /* 004e69b0: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 004e69b4: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 004e69b8: cmp edx, dword ptr [ecx + 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004e69bb: jge 0x4e6aea */ if ((fS==fO)) goto L_004e6aea;
L_004e69c1:; BB(0x004e69c1);
    /* 004e69c1: mov ebx, edx */ r_ebx = r_edx;
    /* 004e69c3: lea ebx, [ebx + ebx] */ r_ebx = (u32)(r_ebx+r_ebx);
    /* 004e69c6: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004e69c8: lea edx, [ebx + ebx] */ r_edx = (u32)(r_ebx+r_ebx);
    /* 004e69cb: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004e69cd: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004e69cf: lea ebp, [esi + edx + 4] */ r_ebp = (u32)(r_esi+r_edx+0x4u);
    /* 004e69d3: mov dword ptr [esp + 0x18], ebp */ W32((u32)(r_esp+0x18u), r_ebp);
    /* 004e69d7: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 004e69d9: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 004e69dd: push dword ptr [ecx] */ { u32 v = R32((u32)(r_ecx)); r_esp -= 4; W32(r_esp, v); }
    /* 004e69df: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004e69e0: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x4e69e5u); f_00858900();
    /* 004e69e5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004e69e8: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 004e69ec: mov byte ptr [esi + ebx*8 + 0x23], 0 */ W8((u32)(r_esi+r_ebx*8+0x23u), 0x0u);
    /* 004e69f1: movsx ecx, word ptr [edx*4 + 0x9b5b60] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx*4+0x9b5b60u));
    /* 004e69f9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004e69fb: jle 0x4e6e76 */ if ((fZ||fS!=fO)) goto L_004e6e76;
L_004e6a01:; BB(0x004e6a01);
    /* 004e6a01: movsx edx, byte ptr [esi + ebx*8 + 0xa] */ r_edx = (u32)(i32)(i8)R8((u32)(r_esi+r_ebx*8+0xau));
    /* 004e6a06: cmp edx, 0x30 */ {  u32 a = r_edx; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e6a09: je 0x4e6e5e */ if (fZ) goto L_004e6e5e;
L_004e6a0f:; BB(0x004e6a0f);
    /* 004e6a0f: movsx ebp, byte ptr [esi + ebx*8 + 8] */ r_ebp = (u32)(i32)(i8)R8((u32)(r_esi+r_ebx*8+0x8u));
    /* 004e6a14: cmp ebp, 0x62 */ {  u32 a = r_ebp; u32 b = 0x62u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e6a17: je 0x4e6a1e */ if (fZ) goto L_004e6a1e;
L_004e6a19:; BB(0x004e6a19);
    /* 004e6a19: cmp ebp, 0x74 */ {  u32 a = r_ebp; u32 b = 0x74u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e6a1c: jne 0x4e6a53 */ if (!fZ) goto L_004e6a53;
L_004e6a1e:; BB(0x004e6a1e);
    /* 004e6a1e: mov edi, dword ptr [esp + 0x44] */ r_edi = R32((u32)(r_esp+0x44u));
    /* 004e6a22: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 004e6a27: movsx ecx, word ptr [edi + 0x38] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edi+0x38u));
    /* 004e6a2b: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004e6a2e: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004e6a30: mov edi, ecx */ r_edi = r_ecx;
    /* 004e6a32: sar edi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 004e6a35: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 004e6a38: sub edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004e6a3a: lea edi, [edx + edx] */ r_edi = (u32)(r_edx+r_edx);
    /* 004e6a3d: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004e6a3f: add edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004e6a41: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004e6a43: sub ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004e6a45: add edx, 0x30 */ {  u32 a = r_edx; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004e6a48: mov byte ptr [esi + ebx*8 + 0xa], dl */ W8((u32)(r_esi+r_ebx*8+0xau), (u8)r_edx);
    /* 004e6a4c: add ecx, 0x30 */ {  u32 a = r_ecx; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004e6a4f: mov byte ptr [esi + ebx*8 + 0xb], cl */ W8((u32)(r_esi+r_ebx*8+0xbu), (u8)r_ecx);
L_004e6a53:; BB(0x004e6a53);
    /* 004e6a53: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 004e6a57: movsx ecx, word ptr [edx*4 + 0x9b5b62] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx*4+0x9b5b62u));
    /* 004e6a5f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004e6a61: jle 0x4e6a8b */ if ((fZ||fS!=fO)) goto L_004e6a8b;
L_004e6a63:; BB(0x004e6a63);
    /* 004e6a63: movsx edx, byte ptr [esi + ebx*8 + 0xc] */ r_edx = (u32)(i32)(i8)R8((u32)(r_esi+r_ebx*8+0xcu));
    /* 004e6a68: cmp edx, 0x7a */ {  u32 a = r_edx; u32 b = 0x7au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e6a6b: je 0x4e6a8b */ if (fZ) goto L_004e6a8b;
L_004e6a6d:; BB(0x004e6a6d);
    /* 004e6a6d: cmp ebp, 0x62 */ {  u32 a = r_ebp; u32 b = 0x62u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e6a70: je 0x4e6a7c */ if (fZ) goto L_004e6a7c;
L_004e6a72:; BB(0x004e6a72);
    /* 004e6a72: cmp ebp, 0x66 */ {  u32 a = r_ebp; u32 b = 0x66u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e6a75: je 0x4e6a7c */ if (fZ) goto L_004e6a7c;
L_004e6a77:; BB(0x004e6a77);
    /* 004e6a77: cmp ebp, 0x74 */ {  u32 a = r_ebp; u32 b = 0x74u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e6a7a: jne 0x4e6a8b */ if (!fZ) goto L_004e6a8b;
L_004e6a7c:; BB(0x004e6a7c);
    /* 004e6a7c: mov edi, dword ptr [esp + 0x44] */ r_edi = R32((u32)(r_esp+0x44u));
    /* 004e6a80: movzx edx, word ptr [edi + 0x3a] */ r_edx = (u32)R16((u32)(r_edi+0x3au));
    /* 004e6a84: add edx, 0x61 */ {  u32 a = r_edx; u32 b = 0x61u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004e6a87: mov byte ptr [esi + ebx*8 + 0xc], dl */ W8((u32)(r_esi+r_ebx*8+0xcu), (u8)r_edx);
L_004e6a8b:; BB(0x004e6a8b);
    /* 004e6a8b: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 004e6a8f: movsx ecx, word ptr [edx*4 + 0x9b5b64] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx*4+0x9b5b64u));
    /* 004e6a97: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004e6a99: jle 0x4e6ab9 */ if ((fZ||fS!=fO)) goto L_004e6ab9;
L_004e6a9b:; BB(0x004e6a9b);
    /* 004e6a9b: movsx edx, byte ptr [esi + ebx*8 + 0xb] */ r_edx = (u32)(i32)(i8)R8((u32)(r_esi+r_ebx*8+0xbu));
    /* 004e6aa0: cmp edx, 0x30 */ {  u32 a = r_edx; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e6aa3: je 0x4e6ab9 */ if (fZ) goto L_004e6ab9;
L_004e6aa5:; BB(0x004e6aa5);
    /* 004e6aa5: cmp ebp, 0x66 */ {  u32 a = r_ebp; u32 b = 0x66u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e6aa8: jne 0x4e6ab9 */ if (!fZ) goto L_004e6ab9;
L_004e6aaa:; BB(0x004e6aaa);
    /* 004e6aaa: mov edi, dword ptr [esp + 0x44] */ r_edi = R32((u32)(r_esp+0x44u));
    /* 004e6aae: movzx edx, word ptr [edi + 0x3c] */ r_edx = (u32)R16((u32)(r_edi+0x3cu));
    /* 004e6ab2: add edx, 0x31 */ {  u32 a = r_edx; u32 b = 0x31u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004e6ab5: mov byte ptr [esi + ebx*8 + 0xb], dl */ W8((u32)(r_esi+r_ebx*8+0xbu), (u8)r_edx);
L_004e6ab9:; BB(0x004e6ab9);
    /* 004e6ab9: cmp ebp, 0x63 */ {  u32 a = r_ebp; u32 b = 0x63u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e6abc: je 0x4e6e2e */ if (fZ) goto L_004e6e2e;
L_004e6ac2:; BB(0x004e6ac2);
    /* 004e6ac2: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
    /* 004e6ac6: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 004e6aca: add dword ptr [esp + 0x20], 1 */ { u32 ad = (u32)(r_esp+0x20u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 004e6acf: mov dword ptr [ebx], edx */ W32((u32)(r_ebx), r_edx);
    /* 004e6ad1: add dword ptr [esp + 0x1c], 4 */ { u32 ad = (u32)(r_esp+0x1cu);  u32 a = R32(ad); u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 004e6ad6: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004e6ad8: mov dword ptr [ebx + 8], ecx */ W32((u32)(r_ebx+0x8u), r_ecx);
    /* 004e6adb: mov dword ptr [ebx + 4], ecx */ W32((u32)(r_ebx+0x4u), r_ecx);
    /* 004e6ade: add ebx, 0xc */ {  u32 a = r_ebx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004e6ae1: mov dword ptr [esp + 0x14], ebx */ W32((u32)(r_esp+0x14u), r_ebx);
    /* 004e6ae5: jmp 0x4e69b0 */ goto L_004e69b0;
L_004e6aea:; BB(0x004e6aea);
    /* 004e6aea: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
    /* 004e6aee: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
L_004e6af2:; BB(0x004e6af2);
    /* 004e6af2: mov dword ptr [esi], 1 */ W32((u32)(r_esi), 0x1u);
L_004e6af8:; BB(0x004e6af8);
    /* 004e6af8: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 004e6afc: mov dword ptr [ebp], 0 */ W32((u32)(r_ebp), 0x0u);
    /* 004e6b03: mov esi, dword ptr [eax*4 + 0x9b5b84] */ r_esi = R32((u32)(r_eax*4+0x9b5b84u));
    /* 004e6b0a: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e6b0c: je 0x4e6ca3 */ if (fZ) goto L_004e6ca3;
L_004e6b12:; BB(0x004e6b12);
    /* 004e6b12: mov eax, dword ptr [esp + 0x44] */ r_eax = R32((u32)(r_esp+0x44u));
    /* 004e6b16: movsx edi, word ptr [eax + 0x3e] */ r_edi = (u32)(i32)(i16)R16((u32)(r_eax+0x3eu));
    /* 004e6b1a: mov eax, dword ptr [esi + edi*4] */ r_eax = R32((u32)(r_esi+r_edi*4));
    /* 004e6b1d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e6b1f: je 0x4e6ca3 */ if (fZ) goto L_004e6ca3;
L_004e6b25:; BB(0x004e6b25);
    /* 004e6b25: mov esi, dword ptr [eax + 4] */ r_esi = R32((u32)(r_eax+0x4u));
    /* 004e6b28: cmp esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004e6b2b: jg 0x4e6c9c */ if ((!fZ&&fS==fO)) goto L_004e6c9c;
L_004e6b31:; BB(0x004e6b31);
    /* 004e6b31: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004e6b35: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 004e6b39: lea edi, [ebp + 0x104] */ r_edi = (u32)(r_ebp+0x104u);
    /* 004e6b3f: mov dword ptr [ebp + 0x164], edi */ W32((u32)(r_ebp+0x164u), r_edi);
    /* 004e6b45: mov esi, dword ptr [eax + 4] */ r_esi = R32((u32)(r_eax+0x4u));
    /* 004e6b48: mov dword ptr [esp + 0x1c], edi */ W32((u32)(r_esp+0x1cu), r_edi);
    /* 004e6b4c: mov dword ptr [ebp + 0x168], esi */ W32((u32)(r_ebp+0x168u), r_esi);
    /* 004e6b52: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004e6b54: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 004e6b56: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 004e6b5a: mov dword ptr [esp + 0xc], esi */ W32((u32)(r_esp+0xcu), r_esi);
L_004e6b5e:; BB(0x004e6b5e);
    /* 004e6b5e: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 004e6b62: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 004e6b66: cmp eax, dword ptr [ecx + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004e6b69: jge 0x4e6c98 */ if ((fS==fO)) goto L_004e6c98;
L_004e6b6f:; BB(0x004e6b6f);
    /* 004e6b6f: mov ebx, eax */ r_ebx = r_eax;
    /* 004e6b71: lea ebx, [ebx + ebx] */ r_ebx = (u32)(r_ebx+r_ebx);
    /* 004e6b74: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004e6b76: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 004e6b79: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004e6b7b: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004e6b7d: lea esi, [ebp + eax + 4] */ r_esi = (u32)(r_ebp+r_eax+0x4u);
    /* 004e6b81: mov dword ptr [esp + 0x18], esi */ W32((u32)(r_esp+0x18u), r_esi);
    /* 004e6b85: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 004e6b87: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 004e6b8b: push dword ptr [ecx] */ { u32 v = R32((u32)(r_ecx)); r_esp -= 4; W32(r_esp, v); }
    /* 004e6b8d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004e6b8e: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x4e6b93u); f_00858900();
    /* 004e6b93: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004e6b96: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 004e6b9a: mov byte ptr [ebp + ebx*8 + 0x23], 0 */ W8((u32)(r_ebp+r_ebx*8+0x23u), 0x0u);
    /* 004e6b9f: movsx ecx, word ptr [eax*4 + 0x9b5b60] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax*4+0x9b5b60u));
    /* 004e6ba7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004e6ba9: jle 0x4e6ec8 */ if ((fZ||fS!=fO)) goto L_004e6ec8;
L_004e6baf:; BB(0x004e6baf);
    /* 004e6baf: movsx eax, byte ptr [ebp + ebx*8 + 0xa] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+r_ebx*8+0xau));
    /* 004e6bb4: cmp eax, 0x30 */ {  u32 a = r_eax; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e6bb7: je 0x4e6eb0 */ if (fZ) goto L_004e6eb0;
L_004e6bbd:; BB(0x004e6bbd);
    /* 004e6bbd: movsx esi, byte ptr [ebp + ebx*8 + 8] */ r_esi = (u32)(i32)(i8)R8((u32)(r_ebp+r_ebx*8+0x8u));
    /* 004e6bc2: cmp esi, 0x62 */ {  u32 a = r_esi; u32 b = 0x62u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e6bc5: je 0x4e6bcc */ if (fZ) goto L_004e6bcc;
L_004e6bc7:; BB(0x004e6bc7);
    /* 004e6bc7: cmp esi, 0x74 */ {  u32 a = r_esi; u32 b = 0x74u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e6bca: jne 0x4e6c01 */ if (!fZ) goto L_004e6c01;
L_004e6bcc:; BB(0x004e6bcc);
    /* 004e6bcc: mov edi, dword ptr [esp + 0x44] */ r_edi = R32((u32)(r_esp+0x44u));
    /* 004e6bd0: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 004e6bd5: movsx ecx, word ptr [edi + 0x38] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edi+0x38u));
    /* 004e6bd9: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004e6bdc: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004e6bde: mov eax, ecx */ r_eax = r_ecx;
    /* 004e6be0: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004e6be3: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 004e6be6: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004e6be8: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 004e6beb: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004e6bed: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004e6bef: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004e6bf1: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004e6bf3: add edx, 0x30 */ {  u32 a = r_edx; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004e6bf6: mov byte ptr [ebp + ebx*8 + 0xa], dl */ W8((u32)(r_ebp+r_ebx*8+0xau), (u8)r_edx);
    /* 004e6bfa: add ecx, 0x30 */ {  u32 a = r_ecx; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004e6bfd: mov byte ptr [ebp + ebx*8 + 0xb], cl */ W8((u32)(r_ebp+r_ebx*8+0xbu), (u8)r_ecx);
L_004e6c01:; BB(0x004e6c01);
    /* 004e6c01: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 004e6c05: movsx ecx, word ptr [eax*4 + 0x9b5b62] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax*4+0x9b5b62u));
    /* 004e6c0d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004e6c0f: jle 0x4e6c39 */ if ((fZ||fS!=fO)) goto L_004e6c39;
L_004e6c11:; BB(0x004e6c11);
    /* 004e6c11: movsx eax, byte ptr [ebp + ebx*8 + 0xc] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+r_ebx*8+0xcu));
    /* 004e6c16: cmp eax, 0x7a */ {  u32 a = r_eax; u32 b = 0x7au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e6c19: je 0x4e6c39 */ if (fZ) goto L_004e6c39;
L_004e6c1b:; BB(0x004e6c1b);
    /* 004e6c1b: cmp esi, 0x62 */ {  u32 a = r_esi; u32 b = 0x62u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e6c1e: je 0x4e6c2a */ if (fZ) goto L_004e6c2a;
L_004e6c20:; BB(0x004e6c20);
    /* 004e6c20: cmp esi, 0x66 */ {  u32 a = r_esi; u32 b = 0x66u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e6c23: je 0x4e6c2a */ if (fZ) goto L_004e6c2a;
L_004e6c25:; BB(0x004e6c25);
    /* 004e6c25: cmp esi, 0x74 */ {  u32 a = r_esi; u32 b = 0x74u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e6c28: jne 0x4e6c39 */ if (!fZ) goto L_004e6c39;
L_004e6c2a:; BB(0x004e6c2a);
    /* 004e6c2a: mov edi, dword ptr [esp + 0x44] */ r_edi = R32((u32)(r_esp+0x44u));
    /* 004e6c2e: movzx eax, word ptr [edi + 0x3a] */ r_eax = (u32)R16((u32)(r_edi+0x3au));
    /* 004e6c32: add eax, 0x61 */ {  u32 a = r_eax; u32 b = 0x61u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004e6c35: mov byte ptr [ebp + ebx*8 + 0xc], al */ W8((u32)(r_ebp+r_ebx*8+0xcu), (u8)r_eax);
L_004e6c39:; BB(0x004e6c39);
    /* 004e6c39: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 004e6c3d: movsx ecx, word ptr [eax*4 + 0x9b5b64] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax*4+0x9b5b64u));
    /* 004e6c45: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004e6c47: jle 0x4e6c67 */ if ((fZ||fS!=fO)) goto L_004e6c67;
L_004e6c49:; BB(0x004e6c49);
    /* 004e6c49: movsx eax, byte ptr [ebp + ebx*8 + 0xb] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+r_ebx*8+0xbu));
    /* 004e6c4e: cmp eax, 0x30 */ {  u32 a = r_eax; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e6c51: je 0x4e6c67 */ if (fZ) goto L_004e6c67;
L_004e6c53:; BB(0x004e6c53);
    /* 004e6c53: cmp esi, 0x66 */ {  u32 a = r_esi; u32 b = 0x66u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e6c56: jne 0x4e6c67 */ if (!fZ) goto L_004e6c67;
L_004e6c58:; BB(0x004e6c58);
    /* 004e6c58: mov edi, dword ptr [esp + 0x44] */ r_edi = R32((u32)(r_esp+0x44u));
    /* 004e6c5c: movzx eax, word ptr [edi + 0x3c] */ r_eax = (u32)R16((u32)(r_edi+0x3cu));
    /* 004e6c60: add eax, 0x31 */ {  u32 a = r_eax; u32 b = 0x31u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004e6c63: mov byte ptr [ebp + ebx*8 + 0xb], al */ W8((u32)(r_ebp+r_ebx*8+0xbu), (u8)r_eax);
L_004e6c67:; BB(0x004e6c67);
    /* 004e6c67: cmp esi, 0x63 */ {  u32 a = r_esi; u32 b = 0x63u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e6c6a: je 0x4e6e80 */ if (fZ) goto L_004e6e80;
L_004e6c70:; BB(0x004e6c70);
    /* 004e6c70: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
    /* 004e6c74: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 004e6c78: add dword ptr [esp + 0xc], 1 */ { u32 ad = (u32)(r_esp+0xcu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 004e6c7d: mov dword ptr [ebx], eax */ W32((u32)(r_ebx), r_eax);
    /* 004e6c7f: add dword ptr [esp + 0x14], 4 */ { u32 ad = (u32)(r_esp+0x14u);  u32 a = R32(ad); u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 004e6c84: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004e6c86: mov dword ptr [ebx + 8], ecx */ W32((u32)(r_ebx+0x8u), r_ecx);
    /* 004e6c89: mov dword ptr [ebx + 4], ecx */ W32((u32)(r_ebx+0x4u), r_ecx);
    /* 004e6c8c: add ebx, 0xc */ {  u32 a = r_ebx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004e6c8f: mov dword ptr [esp + 0x1c], ebx */ W32((u32)(r_esp+0x1cu), r_ebx);
    /* 004e6c93: jmp 0x4e6b5e */ goto L_004e6b5e;
L_004e6c98:; BB(0x004e6c98);
    /* 004e6c98: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
L_004e6c9c:; BB(0x004e6c9c);
    /* 004e6c9c: mov dword ptr [ebp], 1 */ W32((u32)(r_ebp), 0x1u);
L_004e6ca3:; BB(0x004e6ca3);
    /* 004e6ca3: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 004e6ca7: mov ebp, dword ptr [eax*4 + 0x9b5b88] */ r_ebp = R32((u32)(r_eax*4+0x9b5b88u));
    /* 004e6cae: mov edx, dword ptr [ebp + 4] */ r_edx = R32((u32)(r_ebp+0x4u));
    /* 004e6cb1: cmp edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004e6cb4: jg 0x4e6e20 */ if ((!fZ&&fS==fO)) goto L_004e6e20;
L_004e6cba:; BB(0x004e6cba);
    /* 004e6cba: mov dword ptr [esp + 0x20], ebp */ W32((u32)(r_esp+0x20u), r_ebp);
    /* 004e6cbe: lea edx, [ebx + 0x104] */ r_edx = (u32)(r_ebx+0x104u);
    /* 004e6cc4: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 004e6cc8: mov dword ptr [ebx + 0x164], edx */ W32((u32)(r_ebx+0x164u), r_edx);
    /* 004e6cce: mov eax, dword ptr [ebp + 4] */ r_eax = R32((u32)(r_ebp+0x4u));
    /* 004e6cd1: mov dword ptr [ebx + 0x168], eax */ W32((u32)(r_ebx+0x168u), r_eax);
    /* 004e6cd7: mov esi, dword ptr [ebp] */ r_esi = R32((u32)(r_ebp));
    /* 004e6cda: mov dword ptr [esp + 0x14], esi */ W32((u32)(r_esp+0x14u), r_esi);
    /* 004e6cde: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004e6ce0: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
L_004e6ce4:; BB(0x004e6ce4);
    /* 004e6ce4: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 004e6ce8: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 004e6cec: cmp eax, dword ptr [edx + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004e6cef: jge 0x4e6e20 */ if ((fS==fO)) goto L_004e6e20;
L_004e6cf5:; BB(0x004e6cf5);
    /* 004e6cf5: mov ebp, eax */ r_ebp = r_eax;
    /* 004e6cf7: lea ebp, [ebp + ebp] */ r_ebp = (u32)(r_ebp+r_ebp);
    /* 004e6cfb: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004e6cfd: lea eax, [ebp + ebp] */ r_eax = (u32)(r_ebp+r_ebp);
    /* 004e6d01: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004e6d03: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004e6d05: lea ecx, [ebx + eax + 4] */ r_ecx = (u32)(r_ebx+r_eax+0x4u);
    /* 004e6d09: mov dword ptr [esp + 0x18], ecx */ W32((u32)(r_esp+0x18u), r_ecx);
    /* 004e6d0d: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 004e6d0f: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 004e6d13: push dword ptr [edx] */ { u32 v = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, v); }
    /* 004e6d15: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004e6d16: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x4e6d1bu); f_00858900();
    /* 004e6d1b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004e6d1e: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 004e6d22: mov byte ptr [ebx + ebp*8 + 0x23], 0 */ W8((u32)(r_ebx+r_ebp*8+0x23u), 0x0u);
    /* 004e6d27: movsx edx, word ptr [eax*4 + 0x9b5b60] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax*4+0x9b5b60u));
    /* 004e6d2f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004e6d31: jle 0x4e6f1a */ if ((fZ||fS!=fO)) goto L_004e6f1a;
L_004e6d37:; BB(0x004e6d37);
    /* 004e6d37: movsx eax, byte ptr [ebx + ebp*8 + 0xa] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebx+r_ebp*8+0xau));
    /* 004e6d3c: cmp eax, 0x30 */ {  u32 a = r_eax; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e6d3f: je 0x4e6f02 */ if (fZ) goto L_004e6f02;
L_004e6d45:; BB(0x004e6d45);
    /* 004e6d45: movsx esi, byte ptr [ebx + ebp*8 + 8] */ r_esi = (u32)(i32)(i8)R8((u32)(r_ebx+r_ebp*8+0x8u));
    /* 004e6d4a: cmp esi, 0x62 */ {  u32 a = r_esi; u32 b = 0x62u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e6d4d: je 0x4e6d54 */ if (fZ) goto L_004e6d54;
L_004e6d4f:; BB(0x004e6d4f);
    /* 004e6d4f: cmp esi, 0x74 */ {  u32 a = r_esi; u32 b = 0x74u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e6d52: jne 0x4e6d89 */ if (!fZ) goto L_004e6d89;
L_004e6d54:; BB(0x004e6d54);
    /* 004e6d54: mov edi, dword ptr [esp + 0x44] */ r_edi = R32((u32)(r_esp+0x44u));
    /* 004e6d58: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 004e6d5d: movsx ecx, word ptr [edi + 0x38] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edi+0x38u));
    /* 004e6d61: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004e6d64: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004e6d66: mov eax, ecx */ r_eax = r_ecx;
    /* 004e6d68: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004e6d6b: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 004e6d6e: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004e6d70: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 004e6d73: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004e6d75: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004e6d77: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004e6d79: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004e6d7b: add edx, 0x30 */ {  u32 a = r_edx; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004e6d7e: mov byte ptr [ebx + ebp*8 + 0xa], dl */ W8((u32)(r_ebx+r_ebp*8+0xau), (u8)r_edx);
    /* 004e6d82: add ecx, 0x30 */ {  u32 a = r_ecx; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004e6d85: mov byte ptr [ebx + ebp*8 + 0xb], cl */ W8((u32)(r_ebx+r_ebp*8+0xbu), (u8)r_ecx);
L_004e6d89:; BB(0x004e6d89);
    /* 004e6d89: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 004e6d8d: movsx edx, word ptr [eax*4 + 0x9b5b62] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax*4+0x9b5b62u));
    /* 004e6d95: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004e6d97: jle 0x4e6dc1 */ if ((fZ||fS!=fO)) goto L_004e6dc1;
L_004e6d99:; BB(0x004e6d99);
    /* 004e6d99: movsx eax, byte ptr [ebx + ebp*8 + 0xc] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebx+r_ebp*8+0xcu));
    /* 004e6d9e: cmp eax, 0x7a */ {  u32 a = r_eax; u32 b = 0x7au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e6da1: je 0x4e6dc1 */ if (fZ) goto L_004e6dc1;
L_004e6da3:; BB(0x004e6da3);
    /* 004e6da3: cmp esi, 0x62 */ {  u32 a = r_esi; u32 b = 0x62u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e6da6: je 0x4e6db2 */ if (fZ) goto L_004e6db2;
L_004e6da8:; BB(0x004e6da8);
    /* 004e6da8: cmp esi, 0x66 */ {  u32 a = r_esi; u32 b = 0x66u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e6dab: je 0x4e6db2 */ if (fZ) goto L_004e6db2;
L_004e6dad:; BB(0x004e6dad);
    /* 004e6dad: cmp esi, 0x74 */ {  u32 a = r_esi; u32 b = 0x74u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e6db0: jne 0x4e6dc1 */ if (!fZ) goto L_004e6dc1;
L_004e6db2:; BB(0x004e6db2);
    /* 004e6db2: mov edi, dword ptr [esp + 0x44] */ r_edi = R32((u32)(r_esp+0x44u));
    /* 004e6db6: movzx eax, word ptr [edi + 0x3a] */ r_eax = (u32)R16((u32)(r_edi+0x3au));
    /* 004e6dba: add eax, 0x61 */ {  u32 a = r_eax; u32 b = 0x61u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004e6dbd: mov byte ptr [ebx + ebp*8 + 0xc], al */ W8((u32)(r_ebx+r_ebp*8+0xcu), (u8)r_eax);
L_004e6dc1:; BB(0x004e6dc1);
    /* 004e6dc1: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 004e6dc5: movsx edx, word ptr [eax*4 + 0x9b5b64] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax*4+0x9b5b64u));
    /* 004e6dcd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004e6dcf: jle 0x4e6def */ if ((fZ||fS!=fO)) goto L_004e6def;
L_004e6dd1:; BB(0x004e6dd1);
    /* 004e6dd1: movsx eax, byte ptr [ebx + ebp*8 + 0xb] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebx+r_ebp*8+0xbu));
    /* 004e6dd6: cmp eax, 0x30 */ {  u32 a = r_eax; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e6dd9: je 0x4e6def */ if (fZ) goto L_004e6def;
L_004e6ddb:; BB(0x004e6ddb);
    /* 004e6ddb: cmp esi, 0x66 */ {  u32 a = r_esi; u32 b = 0x66u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e6dde: jne 0x4e6def */ if (!fZ) goto L_004e6def;
L_004e6de0:; BB(0x004e6de0);
    /* 004e6de0: mov edi, dword ptr [esp + 0x44] */ r_edi = R32((u32)(r_esp+0x44u));
    /* 004e6de4: movzx eax, word ptr [edi + 0x3c] */ r_eax = (u32)R16((u32)(r_edi+0x3cu));
    /* 004e6de8: add eax, 0x31 */ {  u32 a = r_eax; u32 b = 0x31u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004e6deb: mov byte ptr [ebx + ebp*8 + 0xb], al */ W8((u32)(r_ebx+r_ebp*8+0xbu), (u8)r_eax);
L_004e6def:; BB(0x004e6def);
    /* 004e6def: cmp esi, 0x63 */ {  u32 a = r_esi; u32 b = 0x63u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e6df2: je 0x4e6ed2 */ if (fZ) goto L_004e6ed2;
L_004e6df8:; BB(0x004e6df8);
    /* 004e6df8: mov ecx, dword ptr [esp + 0x1c] */ r_ecx = R32((u32)(r_esp+0x1cu));
    /* 004e6dfc: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 004e6e00: add dword ptr [esp + 0xc], 1 */ { u32 ad = (u32)(r_esp+0xcu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 004e6e05: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 004e6e07: add dword ptr [esp + 0x14], 4 */ { u32 ad = (u32)(r_esp+0x14u);  u32 a = R32(ad); u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 004e6e0c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004e6e0e: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 004e6e11: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 004e6e14: add ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004e6e17: mov dword ptr [esp + 0x1c], ecx */ W32((u32)(r_esp+0x1cu), r_ecx);
    /* 004e6e1b: jmp 0x4e6ce4 */ goto L_004e6ce4;
L_004e6e20:; BB(0x004e6e20);
    /* 004e6e20: mov dword ptr [ebx], 1 */ W32((u32)(r_ebx), 0x1u);
    /* 004e6e26: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004e6e29: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004e6e2a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004e6e2b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004e6e2c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004e6e2d: ret  */ FN_RET(0x004e6920); r_esp += 4; return;
L_004e6e2e:; BB(0x004e6e2e);
    /* 004e6e2e: mov edx, dword ptr [esp + 0x44] */ r_edx = R32((u32)(r_esp+0x44u));
    /* 004e6e32: movzx ecx, byte ptr [edx + 0x32] */ r_ecx = (u32)R8((u32)(r_edx+0x32u));
    /* 004e6e36: test cl, 1 */ {  u32 a = (u8)r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004e6e39: je 0x4e6e45 */ if (fZ) goto L_004e6e45;
L_004e6e3b:; BB(0x004e6e3b);
    /* 004e6e3b: mov byte ptr [esi + ebx*8 + 0xc], 0x7a */ W8((u32)(r_esi+r_ebx*8+0xcu), 0x7au);
    /* 004e6e40: jmp 0x4e6ac2 */ goto L_004e6ac2;
L_004e6e45:; BB(0x004e6e45);
    /* 004e6e45: mov edx, dword ptr [esp + 0x44] */ r_edx = R32((u32)(r_esp+0x44u));
    /* 004e6e49: movsx edx, byte ptr [edx + 0x30] */ r_edx = (u32)(i32)(i8)R8((u32)(r_edx+0x30u));
    /* 004e6e4d: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e6e50: je 0x4e6e3b */ if (fZ) goto L_004e6e3b;
L_004e6e52:; BB(0x004e6e52);
    /* 004e6e52: add edx, 0x61 */ {  u32 a = r_edx; u32 b = 0x61u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004e6e55: mov byte ptr [esi + ebx*8 + 0xc], dl */ W8((u32)(r_esi+r_ebx*8+0xcu), (u8)r_edx);
    /* 004e6e59: jmp 0x4e6ac2 */ goto L_004e6ac2;
L_004e6e5e:; BB(0x004e6e5e);
    /* 004e6e5e: movsx edx, byte ptr [esi + ebx*8 + 0xb] */ r_edx = (u32)(i32)(i8)R8((u32)(r_esi+r_ebx*8+0xbu));
    /* 004e6e63: cmp edx, 0x30 */ {  u32 a = r_edx; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e6e66: jne 0x4e6a0f */ if (!fZ) goto L_004e6a0f;
L_004e6e6c:; BB(0x004e6e6c);
    /* 004e6e6c: movsx ebp, byte ptr [esi + ebx*8 + 8] */ r_ebp = (u32)(i32)(i8)R8((u32)(r_esi+r_ebx*8+0x8u));
    /* 004e6e71: jmp 0x4e6a53 */ goto L_004e6a53;
L_004e6e76:; BB(0x004e6e76);
    /* 004e6e76: movsx ebp, byte ptr [esi + ebx*8 + 8] */ r_ebp = (u32)(i32)(i8)R8((u32)(r_esi+r_ebx*8+0x8u));
    /* 004e6e7b: jmp 0x4e6a53 */ goto L_004e6a53;
L_004e6e80:; BB(0x004e6e80);
    /* 004e6e80: mov eax, dword ptr [esp + 0x44] */ r_eax = R32((u32)(r_esp+0x44u));
    /* 004e6e84: movzx ecx, byte ptr [eax + 0x32] */ r_ecx = (u32)R8((u32)(r_eax+0x32u));
    /* 004e6e88: test cl, 1 */ {  u32 a = (u8)r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004e6e8b: je 0x4e6e97 */ if (fZ) goto L_004e6e97;
L_004e6e8d:; BB(0x004e6e8d);
    /* 004e6e8d: mov byte ptr [ebp + ebx*8 + 0xc], 0x7a */ W8((u32)(r_ebp+r_ebx*8+0xcu), 0x7au);
    /* 004e6e92: jmp 0x4e6c70 */ goto L_004e6c70;
L_004e6e97:; BB(0x004e6e97);
    /* 004e6e97: mov eax, dword ptr [esp + 0x44] */ r_eax = R32((u32)(r_esp+0x44u));
    /* 004e6e9b: movsx eax, byte ptr [eax + 0x30] */ r_eax = (u32)(i32)(i8)R8((u32)(r_eax+0x30u));
    /* 004e6e9f: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e6ea2: je 0x4e6e8d */ if (fZ) goto L_004e6e8d;
L_004e6ea4:; BB(0x004e6ea4);
    /* 004e6ea4: add eax, 0x61 */ {  u32 a = r_eax; u32 b = 0x61u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004e6ea7: mov byte ptr [ebp + ebx*8 + 0xc], al */ W8((u32)(r_ebp+r_ebx*8+0xcu), (u8)r_eax);
    /* 004e6eab: jmp 0x4e6c70 */ goto L_004e6c70;
L_004e6eb0:; BB(0x004e6eb0);
    /* 004e6eb0: movsx eax, byte ptr [ebp + ebx*8 + 0xb] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+r_ebx*8+0xbu));
    /* 004e6eb5: cmp eax, 0x30 */ {  u32 a = r_eax; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e6eb8: jne 0x4e6bbd */ if (!fZ) goto L_004e6bbd;
L_004e6ebe:; BB(0x004e6ebe);
    /* 004e6ebe: movsx esi, byte ptr [ebp + ebx*8 + 8] */ r_esi = (u32)(i32)(i8)R8((u32)(r_ebp+r_ebx*8+0x8u));
    /* 004e6ec3: jmp 0x4e6c01 */ goto L_004e6c01;
L_004e6ec8:; BB(0x004e6ec8);
    /* 004e6ec8: movsx esi, byte ptr [ebp + ebx*8 + 8] */ r_esi = (u32)(i32)(i8)R8((u32)(r_ebp+r_ebx*8+0x8u));
    /* 004e6ecd: jmp 0x4e6c01 */ goto L_004e6c01;
L_004e6ed2:; BB(0x004e6ed2);
    /* 004e6ed2: mov eax, dword ptr [esp + 0x44] */ r_eax = R32((u32)(r_esp+0x44u));
    /* 004e6ed6: movzx edx, byte ptr [eax + 0x32] */ r_edx = (u32)R8((u32)(r_eax+0x32u));
    /* 004e6eda: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004e6edd: je 0x4e6ee9 */ if (fZ) goto L_004e6ee9;
L_004e6edf:; BB(0x004e6edf);
    /* 004e6edf: mov byte ptr [ebx + ebp*8 + 0xc], 0x7a */ W8((u32)(r_ebx+r_ebp*8+0xcu), 0x7au);
    /* 004e6ee4: jmp 0x4e6df8 */ goto L_004e6df8;
L_004e6ee9:; BB(0x004e6ee9);
    /* 004e6ee9: mov eax, dword ptr [esp + 0x44] */ r_eax = R32((u32)(r_esp+0x44u));
    /* 004e6eed: movsx eax, byte ptr [eax + 0x30] */ r_eax = (u32)(i32)(i8)R8((u32)(r_eax+0x30u));
    /* 004e6ef1: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e6ef4: je 0x4e6edf */ if (fZ) goto L_004e6edf;
L_004e6ef6:; BB(0x004e6ef6);
    /* 004e6ef6: add eax, 0x61 */ {  u32 a = r_eax; u32 b = 0x61u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004e6ef9: mov byte ptr [ebx + ebp*8 + 0xc], al */ W8((u32)(r_ebx+r_ebp*8+0xcu), (u8)r_eax);
    /* 004e6efd: jmp 0x4e6df8 */ goto L_004e6df8;
L_004e6f02:; BB(0x004e6f02);
    /* 004e6f02: movsx eax, byte ptr [ebx + ebp*8 + 0xb] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebx+r_ebp*8+0xbu));
    /* 004e6f07: cmp eax, 0x30 */ {  u32 a = r_eax; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e6f0a: jne 0x4e6d45 */ if (!fZ) goto L_004e6d45;
L_004e6f10:; BB(0x004e6f10);
    /* 004e6f10: movsx esi, byte ptr [ebx + ebp*8 + 8] */ r_esi = (u32)(i32)(i8)R8((u32)(r_ebx+r_ebp*8+0x8u));
    /* 004e6f15: jmp 0x4e6d89 */ goto L_004e6d89;
L_004e6f1a:; BB(0x004e6f1a);
    /* 004e6f1a: movsx esi, byte ptr [ebx + ebp*8 + 8] */ r_esi = (u32)(i32)(i8)R8((u32)(r_ebx+r_ebp*8+0x8u));
    /* 004e6f1f: jmp 0x4e6d89 */ goto L_004e6d89;
}

void f_004e6ca0(void)
{
    FN_ENTER(0x004e6ca0);
    /* 004e6ca0: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 004e6ca2: add byte ptr [ebx - 0x74efdbbc], cl */ { u32 ad = (u32)(r_ebx+0x8b102444u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 004e6ca8: sub al, 0x85 */ {  u32 a = (u8)r_eax; u32 b = 0x85u; u32 r = (a - b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 004e6caa: mov byte ptr [ebx - 0x65], bl */ W8((u32)(r_ebx+0xffffff9bu), (u8)r_ebx);
    /* 004e6cad: add byte ptr [ebx - 0x57cfbab], cl */ { u32 ad = (u32)(r_ebx+0xfa830455u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 004e6cb3: or byte ptr [edi], cl */ { u32 ad = (u32)(r_edi);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a | b) & 0xffu; W8(ad, r);  }
    UNSUP(0x004e6cb5, "falls out of decoded code");
}

void f_004e6f24(void) /* sub_4E6F24 */
{
    FN_ENTER(0x004e6f24);
    /* 004e6f24: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 004e6f28: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004e6f29: mov esi, eax */ r_esi = r_eax;
    /* 004e6f2b: movzx edx, byte ptr [esi + 0x32] */ r_edx = (u32)R8((u32)(r_esi+0x32u));
    /* 004e6f2f: test dl, 0xa */ {  u32 a = (u8)r_edx; u32 b = 0xau; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004e6f32: je 0x4e6f69 */ if (fZ) goto L_004e6f69;
L_004e6f34:; BB(0x004e6f34);
    /* 004e6f34: movsx edx, byte ptr [esi + 0x33] */ r_edx = (u32)(i32)(i8)R8((u32)(r_esi+0x33u));
    /* 004e6f38: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004e6f3a: jle 0x4e6f49 */ if ((fZ||fS!=fO)) goto L_004e6f49;
L_004e6f3c:; BB(0x004e6f3c);
    /* 004e6f3c: movsx edx, byte ptr [esi + 0x1c] */ r_edx = (u32)(i32)(i8)R8((u32)(r_esi+0x1cu));
    /* 004e6f40: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004e6f42: jl 0x4e6f49 */ if ((fS!=fO)) goto L_004e6f49;
L_004e6f44:; BB(0x004e6f44);
    /* 004e6f44: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004e6f47: jl 0x4e6f4f */ if ((fS!=fO)) goto L_004e6f4f;
L_004e6f49:; BB(0x004e6f49);
    /* 004e6f49: movsx eax, byte ptr [esi + 0x31] */ r_eax = (u32)(i32)(i8)R8((u32)(r_esi+0x31u));
    /* 004e6f4d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004e6f4e: ret  */ FN_RET(0x004e6f24); r_esp += 4; return;
L_004e6f4f:; BB(0x004e6f4f);
    /* 004e6f4f: call 0x4e6f70 */ r_esp -= 4; W32(r_esp, 0x4e6f54u); f_004e6f70();
    /* 004e6f54: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004e6f56: jne 0x4e6f5e */ if (!fZ) goto L_004e6f5e;
L_004e6f58:; BB(0x004e6f58);
    /* 004e6f58: movsx eax, byte ptr [esi + 0x31] */ r_eax = (u32)(i32)(i8)R8((u32)(r_esi+0x31u));
    /* 004e6f5c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004e6f5d: ret  */ FN_RET(0x004e6f24); r_esp += 4; return;
L_004e6f5e:; BB(0x004e6f5e);
    /* 004e6f5e: movsx eax, byte ptr [esi + 0x1c] */ r_eax = (u32)(i32)(i8)R8((u32)(r_esi+0x1cu));
    /* 004e6f62: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004e6f64: add eax, 0x16 */ {  u32 a = r_eax; u32 b = 0x16u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004e6f67: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004e6f68: ret  */ FN_RET(0x004e6f24); r_esp += 4; return;
L_004e6f69:; BB(0x004e6f69);
    /* 004e6f69: movsx eax, byte ptr [esi + 0x31] */ r_eax = (u32)(i32)(i8)R8((u32)(r_esi+0x31u));
    /* 004e6f6d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004e6f6e: ret  */ FN_RET(0x004e6f24); r_esp += 4; return;
}

void f_004e6f28(void) /* sub_4E6F28 */
{
    FN_ENTER(0x004e6f28);
    /* 004e6f28: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004e6f29: mov esi, eax */ r_esi = r_eax;
    /* 004e6f2b: movzx edx, byte ptr [esi + 0x32] */ r_edx = (u32)R8((u32)(r_esi+0x32u));
    /* 004e6f2f: test dl, 0xa */ {  u32 a = (u8)r_edx; u32 b = 0xau; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004e6f32: je 0x4e6f69 */ if (fZ) goto L_004e6f69;
L_004e6f34:; BB(0x004e6f34);
    /* 004e6f34: movsx edx, byte ptr [esi + 0x33] */ r_edx = (u32)(i32)(i8)R8((u32)(r_esi+0x33u));
    /* 004e6f38: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004e6f3a: jle 0x4e6f49 */ if ((fZ||fS!=fO)) goto L_004e6f49;
L_004e6f3c:; BB(0x004e6f3c);
    /* 004e6f3c: movsx edx, byte ptr [esi + 0x1c] */ r_edx = (u32)(i32)(i8)R8((u32)(r_esi+0x1cu));
    /* 004e6f40: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004e6f42: jl 0x4e6f49 */ if ((fS!=fO)) goto L_004e6f49;
L_004e6f44:; BB(0x004e6f44);
    /* 004e6f44: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004e6f47: jl 0x4e6f4f */ if ((fS!=fO)) goto L_004e6f4f;
L_004e6f49:; BB(0x004e6f49);
    /* 004e6f49: movsx eax, byte ptr [esi + 0x31] */ r_eax = (u32)(i32)(i8)R8((u32)(r_esi+0x31u));
    /* 004e6f4d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004e6f4e: ret  */ FN_RET(0x004e6f28); r_esp += 4; return;
L_004e6f4f:; BB(0x004e6f4f);
    /* 004e6f4f: call 0x4e6f70 */ r_esp -= 4; W32(r_esp, 0x4e6f54u); f_004e6f70();
    /* 004e6f54: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004e6f56: jne 0x4e6f5e */ if (!fZ) goto L_004e6f5e;
L_004e6f58:; BB(0x004e6f58);
    /* 004e6f58: movsx eax, byte ptr [esi + 0x31] */ r_eax = (u32)(i32)(i8)R8((u32)(r_esi+0x31u));
    /* 004e6f5c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004e6f5d: ret  */ FN_RET(0x004e6f28); r_esp += 4; return;
L_004e6f5e:; BB(0x004e6f5e);
    /* 004e6f5e: movsx eax, byte ptr [esi + 0x1c] */ r_eax = (u32)(i32)(i8)R8((u32)(r_esi+0x1cu));
    /* 004e6f62: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004e6f64: add eax, 0x16 */ {  u32 a = r_eax; u32 b = 0x16u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004e6f67: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004e6f68: ret  */ FN_RET(0x004e6f28); r_esp += 4; return;
L_004e6f69:; BB(0x004e6f69);
    /* 004e6f69: movsx eax, byte ptr [esi + 0x31] */ r_eax = (u32)(i32)(i8)R8((u32)(r_esi+0x31u));
    /* 004e6f6d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004e6f6e: ret  */ FN_RET(0x004e6f28); r_esp += 4; return;
}

void f_004e6f70(void) /* sub_4E6F70 */
{
    FN_ENTER(0x004e6f70);
    /* 004e6f70: call 0x7a61a4 */ r_esp -= 4; W32(r_esp, 0x4e6f75u); f_007a61a4();
    /* 004e6f75: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004e6f78: je 0x4e6f83 */ if (fZ) goto L_004e6f83;
L_004e6f7a:; BB(0x004e6f7a);
    /* 004e6f7a: mov eax, dword ptr [0xa95624] */ r_eax = R32((u32)(0xa95624u));
    /* 004e6f7f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004e6f81: je 0x4e6f89 */ if (fZ) goto L_004e6f89;
L_004e6f83:; BB(0x004e6f83);
    /* 004e6f83: mov eax, 1 */ r_eax = 0x1u;
    /* 004e6f88: ret  */ FN_RET(0x004e6f70); r_esp += 4; return;
L_004e6f89:; BB(0x004e6f89);
    /* 004e6f89: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004e6f8b: ret  */ FN_RET(0x004e6f70); r_esp += 4; return;
}

void f_004e6f8c(void) /* sub_4E6F8C */
{
    FN_ENTER(0x004e6f8c);
    /* 004e6f8c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004e6f8d: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 004e6f91: mov eax, dword ptr [ebx + 0x9ac] */ r_eax = R32((u32)(r_ebx+0x9acu));
    /* 004e6f97: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e6f99: je 0x4e6fba */ if (fZ) goto L_004e6fba;
L_004e6f9b:; BB(0x004e6f9b);
    /* 004e6f9b: mov eax, dword ptr [ebx + 0xdf0] */ r_eax = R32((u32)(r_ebx+0xdf0u));
    /* 004e6fa1: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004e6fa3: jne 0x4e6fb0 */ if (!fZ) goto L_004e6fb0;
L_004e6fa5:; BB(0x004e6fa5);
    /* 004e6fa5: lea ecx, [ebx + 0xb10] */ r_ecx = (u32)(r_ebx+0xb10u);
    /* 004e6fab: call 0x829de0 */ r_esp -= 4; W32(r_esp, 0x4e6fb0u); f_00829de0();
L_004e6fb0:; BB(0x004e6fb0);
    /* 004e6fb0: mov dword ptr [ebx + 0x9ac], 0 */ W32((u32)(r_ebx+0x9acu), 0x0u);
L_004e6fba:; BB(0x004e6fba);
    /* 004e6fba: mov eax, dword ptr [ebx + 0xb18] */ r_eax = R32((u32)(r_ebx+0xb18u));
    /* 004e6fc0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e6fc2: je 0x4e6fe3 */ if (fZ) goto L_004e6fe3;
L_004e6fc4:; BB(0x004e6fc4);
    /* 004e6fc4: mov eax, dword ptr [ebx + 0xdf0] */ r_eax = R32((u32)(r_ebx+0xdf0u));
    /* 004e6fca: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004e6fcc: jne 0x4e6fd9 */ if (!fZ) goto L_004e6fd9;
L_004e6fce:; BB(0x004e6fce);
    /* 004e6fce: lea ecx, [ebx + 0xc7c] */ r_ecx = (u32)(r_ebx+0xc7cu);
    /* 004e6fd4: call 0x829de0 */ r_esp -= 4; W32(r_esp, 0x4e6fd9u); f_00829de0();
L_004e6fd9:; BB(0x004e6fd9);
    /* 004e6fd9: mov dword ptr [ebx + 0xb18], 0 */ W32((u32)(r_ebx+0xb18u), 0x0u);
L_004e6fe3:; BB(0x004e6fe3);
    /* 004e6fe3: mov eax, dword ptr [ebx + 0xc84] */ r_eax = R32((u32)(r_ebx+0xc84u));
    /* 004e6fe9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004e6feb: je 0x4e700c */ if (fZ) goto L_004e700c;
L_004e6fed:; BB(0x004e6fed);
    /* 004e6fed: mov eax, dword ptr [ebx + 0xdf0] */ r_eax = R32((u32)(r_ebx+0xdf0u));
    /* 004e6ff3: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004e6ff5: jne 0x4e7002 */ if (!fZ) goto L_004e7002;
L_004e6ff7:; BB(0x004e6ff7);
    /* 004e6ff7: lea ecx, [ebx + 0xde8] */ r_ecx = (u32)(r_ebx+0xde8u);
    /* 004e6ffd: call 0x829de0 */ r_esp -= 4; W32(r_esp, 0x4e7002u); f_00829de0();
L_004e7002:; BB(0x004e7002);
    /* 004e7002: mov dword ptr [ebx + 0xc84], 0 */ W32((u32)(r_ebx+0xc84u), 0x0u);
L_004e700c:; BB(0x004e700c);
    /* 004e700c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004e700d: ret  */ FN_RET(0x004e6f8c); r_esp += 4; return;
}

