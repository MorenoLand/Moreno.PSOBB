#include "protos.h"

void f_0063e050(void) /* sub_63E050 */
{
    FN_ENTER(0x0063e050);
    /* 0063e050: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063e051: mov ebp, esp */ r_ebp = r_esp;
    /* 0063e053: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063e055: push 0x8e4e38 */ { u32 v = 0x8e4e38u; r_esp -= 4; W32(r_esp, v); }
    /* 0063e05a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0063e060: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063e061: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0063e068: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0063e06b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0063e06e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0063e071: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0063e074: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0063e077: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 0063e07c: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0063e083: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x63e088u); f_008581c5();
    /* 0063e088: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063e089: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0063e08c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063e08e: je 0x63e1b7 */ if (fZ) goto L_0063e1b7;
L_0063e094:; BB(0x0063e094);
    /* 0063e094: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0063e09b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0063e0a2: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0063e0a5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0063e0a7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063e0a8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063e0a9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063e0aa: push 0x9c6a40 */ { u32 v = 0x9c6a40u; r_esp -= 4; W32(r_esp, v); }
    /* 0063e0af: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0063e0b1: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x63e0b6u); f_005b7a84();
    /* 0063e0b6: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0063e0b9: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0063e0c0:; BB(0x0063e0c0);
    /* 0063e0c0: mov dword ptr [0xa8f1f8], ecx */ W32((u32)(0xa8f1f8u), r_ecx);
    /* 0063e0c6: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0063e0cd: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063e0cf: je 0x63e0dc */ if (fZ) goto L_0063e0dc;
L_0063e0d1:; BB(0x0063e0d1);
    /* 0063e0d1: call 0x5b90d0 */ r_esp -= 4; W32(r_esp, 0x63e0d6u); f_005b90d0();
    /* 0063e0d6: mov ecx, dword ptr [0xa8f1f8] */ r_ecx = R32((u32)(0xa8f1f8u));
L_0063e0dc:; BB(0x0063e0dc);
    /* 0063e0dc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0063e0de: mov dword ptr [0xa8f210], eax */ W32((u32)(0xa8f210u), r_eax);
    /* 0063e0e3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0063e0e5: mov dword ptr [0xa8f214], eax */ W32((u32)(0xa8f214u), r_eax);
    /* 0063e0ea: mov dword ptr [0xa8f218], eax */ W32((u32)(0xa8f218u), r_eax);
    /* 0063e0ef: mov dword ptr [0xa8f21c], eax */ W32((u32)(0xa8f21cu), r_eax);
    /* 0063e0f4: mov dword ptr [0xa8f220], eax */ W32((u32)(0xa8f220u), r_eax);
    /* 0063e0f9: mov dword ptr [0xa8f1fc], eax */ W32((u32)(0xa8f1fcu), r_eax);
    /* 0063e0fe: mov dword ptr [0xa8f200], eax */ W32((u32)(0xa8f200u), r_eax);
    /* 0063e103: mov dword ptr [0xa8f204], eax */ W32((u32)(0xa8f204u), r_eax);
    /* 0063e108: mov dword ptr [0xa8f208], eax */ W32((u32)(0xa8f208u), r_eax);
    /* 0063e10d: mov dword ptr [0xa8f20c], eax */ W32((u32)(0xa8f20cu), r_eax);
    /* 0063e112: je 0x63e1a6 */ if (fZ) goto L_0063e1a6;
L_0063e118:; BB(0x0063e118);
    /* 0063e118: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0063e11a: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x63e11fu); f_005b8610();
    /* 0063e11f: mov ebx, eax */ r_ebx = r_eax;
    /* 0063e121: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063e123: je 0x63e15c */ if (fZ) goto L_0063e15c;
L_0063e125:; BB(0x0063e125);
    /* 0063e125: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0063e127: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0063e128: call 0x78e9b0 */ r_esp -= 4; W32(r_esp, 0x63e12du); f_0078e9b0();
    /* 0063e12d: mov dword ptr [0xa8f214], eax */ W32((u32)(0xa8f214u), r_eax);
    /* 0063e132: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0063e134: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0063e135: call 0x78e9b0 */ r_esp -= 4; W32(r_esp, 0x63e13au); f_0078e9b0();
    /* 0063e13a: mov dword ptr [0xa8f218], eax */ W32((u32)(0xa8f218u), r_eax);
    /* 0063e13f: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0063e141: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0063e142: call 0x78e9b0 */ r_esp -= 4; W32(r_esp, 0x63e147u); f_0078e9b0();
    /* 0063e147: mov dword ptr [0xa8f21c], eax */ W32((u32)(0xa8f21cu), r_eax);
    /* 0063e14c: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0063e14e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0063e14f: call 0x78e9b0 */ r_esp -= 4; W32(r_esp, 0x63e154u); f_0078e9b0();
    /* 0063e154: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063e157: mov dword ptr [0xa8f220], eax */ W32((u32)(0xa8f220u), r_eax);
L_0063e15c:; BB(0x0063e15c);
    /* 0063e15c: mov ecx, dword ptr [0xa8f1f8] */ r_ecx = R32((u32)(0xa8f1f8u));
    /* 0063e162: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0063e164: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x63e169u); f_005b8610();
    /* 0063e169: mov ebx, eax */ r_ebx = r_eax;
    /* 0063e16b: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0063e16d: je 0x63e1a6 */ if (fZ) goto L_0063e1a6;
L_0063e16f:; BB(0x0063e16f);
    /* 0063e16f: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0063e171: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0063e172: call 0x78e9b0 */ r_esp -= 4; W32(r_esp, 0x63e177u); f_0078e9b0();
    /* 0063e177: mov dword ptr [0xa8f200], eax */ W32((u32)(0xa8f200u), r_eax);
    /* 0063e17c: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0063e17e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0063e17f: call 0x78e9b0 */ r_esp -= 4; W32(r_esp, 0x63e184u); f_0078e9b0();
    /* 0063e184: mov dword ptr [0xa8f204], eax */ W32((u32)(0xa8f204u), r_eax);
    /* 0063e189: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0063e18b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0063e18c: call 0x78e9b0 */ r_esp -= 4; W32(r_esp, 0x63e191u); f_0078e9b0();
    /* 0063e191: mov dword ptr [0xa8f208], eax */ W32((u32)(0xa8f208u), r_eax);
    /* 0063e196: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0063e198: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0063e199: call 0x78e9b0 */ r_esp -= 4; W32(r_esp, 0x63e19eu); f_0078e9b0();
    /* 0063e19e: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0063e1a1: mov dword ptr [0xa8f20c], eax */ W32((u32)(0xa8f20cu), r_eax);
L_0063e1a6:; BB(0x0063e1a6);
    /* 0063e1a6: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0063e1a9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063e1ac: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0063e1b3: mov esp, ebp */ r_esp = r_ebp;
    /* 0063e1b5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063e1b6: ret  */ FN_RET(0x0063e050); r_esp += 4; return;
L_0063e1b7:; BB(0x0063e1b7);
    /* 0063e1b7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0063e1b9: jmp 0x63e0c0 */ goto L_0063e0c0;
}

void f_0063e1c0(void) /* sub_63E1C0 */
{
    FN_ENTER(0x0063e1c0);
    /* 0063e1c0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0063e1c1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0063e1c3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0063e1c5: call 0x63cfcc */ r_esp -= 4; W32(r_esp, 0x63e1cau); f_0063cfcc();
    /* 0063e1ca: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0063e1ce: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0063e1d0: jne 0x63e1d6 */ if (!fZ) goto L_0063e1d6;
L_0063e1d2:; BB(0x0063e1d2);
    /* 0063e1d2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0063e1d3: ret 4 */ FN_RET(0x0063e1c0); r_esp += 8; return;
L_0063e1d6:; BB(0x0063e1d6);
    /* 0063e1d6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0063e1d7: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x63e1dcu); f_005c2f74();
    /* 0063e1dc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063e1dd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0063e1de: ret 4 */ FN_RET(0x0063e1c0); r_esp += 8; return;
}

void f_0063e1e4(void) /* sub_63E1E4 */
{
    FN_ENTER(0x0063e1e4);
    /* 0063e1e4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0063e1e5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0063e1e7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0063e1e9: call 0x63d400 */ r_esp -= 4; W32(r_esp, 0x63e1eeu); f_0063d400();
    /* 0063e1ee: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0063e1f2: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0063e1f4: jne 0x63e1fa */ if (!fZ) goto L_0063e1fa;
L_0063e1f6:; BB(0x0063e1f6);
    /* 0063e1f6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0063e1f7: ret 4 */ FN_RET(0x0063e1e4); r_esp += 8; return;
L_0063e1fa:; BB(0x0063e1fa);
    /* 0063e1fa: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0063e1fb: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x63e200u); f_005c2f74();
    /* 0063e200: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063e201: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0063e202: ret 4 */ FN_RET(0x0063e1e4); r_esp += 8; return;
}

void f_0063e208(void) /* sub_63E208 */
{
    FN_ENTER(0x0063e208);
    /* 0063e208: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0063e209: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0063e20b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0063e20d: call 0x63d8dc */ r_esp -= 4; W32(r_esp, 0x63e212u); f_0063d8dc();
    /* 0063e212: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0063e216: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0063e218: jne 0x63e21e */ if (!fZ) goto L_0063e21e;
L_0063e21a:; BB(0x0063e21a);
    /* 0063e21a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0063e21b: ret 4 */ FN_RET(0x0063e208); r_esp += 8; return;
L_0063e21e:; BB(0x0063e21e);
    /* 0063e21e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0063e21f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x63e224u); f_005c2f74();
    /* 0063e224: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063e225: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0063e226: ret 4 */ FN_RET(0x0063e208); r_esp += 8; return;
}

void f_0063e22c(void) /* sub_63E22C */
{
    FN_ENTER(0x0063e22c);
    /* 0063e22c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0063e22d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0063e22f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0063e231: call 0x63de5c */ r_esp -= 4; W32(r_esp, 0x63e236u); f_0063de5c();
    /* 0063e236: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0063e23a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0063e23c: jne 0x63e242 */ if (!fZ) goto L_0063e242;
L_0063e23e:; BB(0x0063e23e);
    /* 0063e23e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0063e23f: ret 4 */ FN_RET(0x0063e22c); r_esp += 8; return;
L_0063e242:; BB(0x0063e242);
    /* 0063e242: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0063e243: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x63e248u); f_005c2f74();
    /* 0063e248: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063e249: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0063e24a: ret 4 */ FN_RET(0x0063e22c); r_esp += 8; return;
}

void f_0063e250(void) /* sub_63E250 */
{
    FN_ENTER(0x0063e250);
    /* 0063e250: mov dword ptr [0xa8f234], 0x3f800000 */ W32((u32)(0xa8f234u), 0x3f800000u);
    /* 0063e25a: mov dword ptr [0xa8f238], 0x41000000 */ W32((u32)(0xa8f238u), 0x41000000u);
    /* 0063e264: mov dword ptr [0xa8f23c], 0x3fc00000 */ W32((u32)(0xa8f23cu), 0x3fc00000u);
    /* 0063e26e: ret  */ FN_RET(0x0063e250); r_esp += 4; return;
}

void f_0063e270(void) /* sub_63E270 */
{
    FN_ENTER(0x0063e270);
    /* 0063e270: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0063e274: cmp eax, dword ptr [0xa8f24c] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa8f24cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063e27a: je 0x63e282 */ if (fZ) goto L_0063e282;
L_0063e27c:; BB(0x0063e27c);
    /* 0063e27c: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x63e281u); f_0082dab0();
    /* 0063e281: ret  */ FN_RET(0x0063e270); r_esp += 4; return;
L_0063e282:; BB(0x0063e282);
    /* 0063e282: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x63e287u); f_0082dbac();
    /* 0063e287: ret  */ FN_RET(0x0063e270); r_esp += 4; return;
}

void f_0063e288(void) /* sub_63E288 */
{
    FN_ENTER(0x0063e288);
    /* 0063e288: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063e289: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0063e28b: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x63e290u); f_00807ac0();
    /* 0063e290: lea edx, [eax - 0x17] */ r_edx = (u32)(r_eax+0xffffffe9u);
    /* 0063e293: cmp edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0063e296: ja 0x63e31b */ if ((!fC&&!fZ)) goto L_0063e31b;
L_0063e29c:; BB(0x0063e29c);
    /* 0063e29c: mov eax, dword ptr [eax*4 + 0x9343a4] */ r_eax = R32((u32)(r_eax*4+0x9343a4u));
    /* 0063e2a3: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0063e31b:; BB(0x0063e31b);
    /* 0063e31b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063e31c: ret  */ FN_RET(0x0063e288); r_esp += 4; return;
}

void f_0063e2a5(void)
{
    FN_ENTER(0x0063e2a5);
    /* 0063e2a5: lea edx, [ebp + 0x38] */ r_edx = (u32)(r_ebp+0x38u);
    /* 0063e2a8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0063e2aa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063e2ab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063e2ac: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063e2ad: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063e2ae: push 0x523 */ { u32 v = 0x523u; r_esp -= 4; W32(r_esp, v); }
    /* 0063e2b3: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x63e2b8u); f_008144b0();
    /* 0063e2b8: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0063e2bb: mov dword ptr [ebp + 0x360], eax */ W32((u32)(r_ebp+0x360u), r_eax);
    /* 0063e2c1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063e2c2: ret  */ FN_RET(0x0063e2a5); r_esp += 4; return;
}

void f_0063e2c3(void)
{
    FN_ENTER(0x0063e2c3);
    /* 0063e2c3: lea edx, [ebp + 0x38] */ r_edx = (u32)(r_ebp+0x38u);
    /* 0063e2c6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0063e2c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063e2c9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063e2ca: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063e2cb: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063e2cc: push 0x547 */ { u32 v = 0x547u; r_esp -= 4; W32(r_esp, v); }
    /* 0063e2d1: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x63e2d6u); f_008144b0();
    /* 0063e2d6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0063e2d9: mov dword ptr [ebp + 0x360], eax */ W32((u32)(r_ebp+0x360u), r_eax);
    /* 0063e2df: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063e2e0: ret  */ FN_RET(0x0063e2c3); r_esp += 4; return;
}

void f_0063e2e1(void)
{
    FN_ENTER(0x0063e2e1);
    /* 0063e2e1: lea edx, [ebp + 0x38] */ r_edx = (u32)(r_ebp+0x38u);
    /* 0063e2e4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0063e2e6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063e2e7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063e2e8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063e2e9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063e2ea: push 0x4fe */ { u32 v = 0x4feu; r_esp -= 4; W32(r_esp, v); }
    /* 0063e2ef: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x63e2f4u); f_008144b0();
    /* 0063e2f4: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0063e2f7: mov dword ptr [ebp + 0x360], eax */ W32((u32)(r_ebp+0x360u), r_eax);
    /* 0063e2fd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063e2fe: ret  */ FN_RET(0x0063e2e1); r_esp += 4; return;
}

void f_0063e2ff(void)
{
    FN_ENTER(0x0063e2ff);
    /* 0063e2ff: lea edx, [ebp + 0x38] */ r_edx = (u32)(r_ebp+0x38u);
    /* 0063e302: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0063e304: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063e305: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063e306: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063e307: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063e308: push 0x4da */ { u32 v = 0x4dau; r_esp -= 4; W32(r_esp, v); }
    /* 0063e30d: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x63e312u); f_008144b0();
    /* 0063e312: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0063e315: mov dword ptr [ebp + 0x360], eax */ W32((u32)(r_ebp+0x360u), r_eax);
    /* 0063e31b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063e31c: ret  */ FN_RET(0x0063e2ff); r_esp += 4; return;
}

void f_0063e31b(void)
{
    FN_ENTER(0x0063e31b);
    /* 0063e31b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063e31c: ret  */ FN_RET(0x0063e31b); r_esp += 4; return;
}

void f_0063e320(void) /* sub_63E320 */
{
    FN_ENTER(0x0063e320);
    /* 0063e320: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063e321: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0063e323: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x63e328u); f_00807ac0();
    /* 0063e328: lea edx, [eax - 0x17] */ r_edx = (u32)(r_eax+0xffffffe9u);
    /* 0063e32b: cmp edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0063e32e: ja 0x63e3ab */ if ((!fC&&!fZ)) goto L_0063e3ab;
L_0063e330:; BB(0x0063e330);
    /* 0063e330: mov eax, dword ptr [eax*4 + 0x9343d8] */ r_eax = R32((u32)(r_eax*4+0x9343d8u));
    /* 0063e337: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0063e3ab:; BB(0x0063e3ab);
    /* 0063e3ab: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063e3ac: ret  */ FN_RET(0x0063e320); r_esp += 4; return;
}

void f_0063e339(void)
{
    FN_ENTER(0x0063e339);
    /* 0063e339: lea edx, [ebp + 0x38] */ r_edx = (u32)(r_ebp+0x38u);
    /* 0063e33c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0063e33e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063e33f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063e340: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063e341: push 0x51b */ { u32 v = 0x51bu; r_esp -= 4; W32(r_esp, v); }
    /* 0063e346: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x63e34bu); f_00814298();
    /* 0063e34b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0063e34e: mov dword ptr [ebp + 0x360], eax */ W32((u32)(r_ebp+0x360u), r_eax);
    /* 0063e354: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063e355: ret  */ FN_RET(0x0063e339); r_esp += 4; return;
}

void f_0063e356(void)
{
    FN_ENTER(0x0063e356);
    /* 0063e356: lea edx, [ebp + 0x38] */ r_edx = (u32)(r_ebp+0x38u);
    /* 0063e359: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0063e35b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063e35c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063e35d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063e35e: push 0x53f */ { u32 v = 0x53fu; r_esp -= 4; W32(r_esp, v); }
    /* 0063e363: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x63e368u); f_00814298();
    /* 0063e368: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0063e36b: mov dword ptr [ebp + 0x360], eax */ W32((u32)(r_ebp+0x360u), r_eax);
    /* 0063e371: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063e372: ret  */ FN_RET(0x0063e356); r_esp += 4; return;
}

void f_0063e373(void)
{
    FN_ENTER(0x0063e373);
    /* 0063e373: lea edx, [ebp + 0x38] */ r_edx = (u32)(r_ebp+0x38u);
    /* 0063e376: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0063e378: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063e379: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063e37a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063e37b: push 0x4f6 */ { u32 v = 0x4f6u; r_esp -= 4; W32(r_esp, v); }
    /* 0063e380: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x63e385u); f_00814298();
    /* 0063e385: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0063e388: mov dword ptr [ebp + 0x360], eax */ W32((u32)(r_ebp+0x360u), r_eax);
    /* 0063e38e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063e38f: ret  */ FN_RET(0x0063e373); r_esp += 4; return;
}

void f_0063e390(void)
{
    FN_ENTER(0x0063e390);
    /* 0063e390: lea edx, [ebp + 0x38] */ r_edx = (u32)(r_ebp+0x38u);
    /* 0063e393: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0063e395: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063e396: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063e397: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063e398: push 0x4d2 */ { u32 v = 0x4d2u; r_esp -= 4; W32(r_esp, v); }
    /* 0063e39d: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x63e3a2u); f_00814298();
    /* 0063e3a2: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0063e3a5: mov dword ptr [ebp + 0x360], eax */ W32((u32)(r_ebp+0x360u), r_eax);
    /* 0063e3ab: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063e3ac: ret  */ FN_RET(0x0063e390); r_esp += 4; return;
}

void f_0063e3ab(void)
{
    FN_ENTER(0x0063e3ab);
    /* 0063e3ab: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063e3ac: ret  */ FN_RET(0x0063e3ab); r_esp += 4; return;
}

void f_0063e3b0(void) /* sub_63E3B0 */
{
    FN_ENTER(0x0063e3b0);
    /* 0063e3b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063e3b1: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x63e3b6u); f_00770738();
    /* 0063e3b6: mov ebp, eax */ r_ebp = r_eax;
    /* 0063e3b8: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x63e3bdu); f_006dc358();
    /* 0063e3bd: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063e3c0: je 0x63e400 */ if (fZ) goto L_0063e400;
L_0063e3c2:; BB(0x0063e3c2);
    /* 0063e3c2: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0063e3c4: je 0x63e3fe */ if (fZ) goto L_0063e3fe;
L_0063e3c6:; BB(0x0063e3c6);
    /* 0063e3c6: mov edx, dword ptr [0xa9c4f4] */ r_edx = R32((u32)(0xa9c4f4u));
    /* 0063e3cc: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0063e3d0: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0063e3d2: jne 0x63e3fe */ if (!fZ) goto L_0063e3fe;
L_0063e3d4:; BB(0x0063e3d4);
    /* 0063e3d4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063e3d5: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x63e3dau); f_0068d5a8();
    /* 0063e3da: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063e3db: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0063e3dd: je 0x63e3fe */ if (fZ) goto L_0063e3fe;
L_0063e3df:; BB(0x0063e3df);
    /* 0063e3df: mov edx, dword ptr [eax + 0x33c] */ r_edx = R32((u32)(r_eax+0x33cu));
    /* 0063e3e5: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0063e3e8: je 0x63e3f1 */ if (fZ) goto L_0063e3f1;
L_0063e3ea:; BB(0x0063e3ea);
    /* 0063e3ea: mov edx, 1 */ r_edx = 0x1u;
    /* 0063e3ef: jmp 0x63e3f3 */ goto L_0063e3f3;
L_0063e3f1:; BB(0x0063e3f1);
    /* 0063e3f1: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_0063e3f3:; BB(0x0063e3f3);
    /* 0063e3f3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0063e3f5: je 0x63e3fe */ if (fZ) goto L_0063e3fe;
L_0063e3f7:; BB(0x0063e3f7);
    /* 0063e3f7: mov ecx, eax */ r_ecx = r_eax;
    /* 0063e3f9: call 0x685514 */ r_esp -= 4; W32(r_esp, 0x63e3feu); f_00685514();
L_0063e3fe:; BB(0x0063e3fe);
    /* 0063e3fe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063e3ff: ret  */ FN_RET(0x0063e3b0); r_esp += 4; return;
L_0063e400:; BB(0x0063e400);
    /* 0063e400: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0063e402: je 0x63e3fe */ if (fZ) goto L_0063e3fe;
L_0063e404:; BB(0x0063e404);
    /* 0063e404: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0063e408: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063e409: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x63e40eu); f_0068d5a8();
    /* 0063e40e: mov ebp, eax */ r_ebp = r_eax;
    /* 0063e410: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063e413: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0063e415: je 0x63e3fe */ if (fZ) goto L_0063e3fe;
L_0063e417:; BB(0x0063e417);
    /* 0063e417: mov edx, dword ptr [ebp + 0x33c] */ r_edx = R32((u32)(r_ebp+0x33cu));
    /* 0063e41d: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0063e420: je 0x63e429 */ if (fZ) goto L_0063e429;
L_0063e422:; BB(0x0063e422);
    /* 0063e422: mov edx, 1 */ r_edx = 0x1u;
    /* 0063e427: jmp 0x63e42b */ goto L_0063e42b;
L_0063e429:; BB(0x0063e429);
    /* 0063e429: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_0063e42b:; BB(0x0063e42b);
    /* 0063e42b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063e42d: je 0x63e436 */ if (fZ) goto L_0063e436;
L_0063e42f:; BB(0x0063e42f);
    /* 0063e42f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0063e431: call 0x685514 */ r_esp -= 4; W32(r_esp, 0x63e436u); f_00685514();
L_0063e436:; BB(0x0063e436);
    /* 0063e436: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 0063e439: and edx, 0xfffdffff */ {  u32 a = r_edx; u32 b = 0xfffdffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0063e43f: mov dword ptr [ebp + 0x30], edx */ W32((u32)(r_ebp+0x30u), r_edx);
    /* 0063e442: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063e443: ret  */ FN_RET(0x0063e3b0); r_esp += 4; return;
}

void f_0063e444(void) /* sub_63E444 */
{
    FN_ENTER(0x0063e444);
    /* 0063e444: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0063e445: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063e446: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0063e447: mov edi, ecx */ r_edi = r_ecx;
    /* 0063e449: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063e44b: mov ecx, edi */ r_ecx = r_edi;
    /* 0063e44d: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x63e452u); f_007706b0();
    /* 0063e452: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063e454: push dword ptr [edi + 0x33c] */ { u32 v = R32((u32)(r_edi+0x33cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0063e45a: mov ecx, edi */ r_ecx = r_edi;
    /* 0063e45c: call 0x7714cc */ r_esp -= 4; W32(r_esp, 0x63e461u); f_007714cc();
    /* 0063e461: mov word ptr [edi + 0x344], ax */ W16((u32)(r_edi+0x344u), (u16)r_eax);
    /* 0063e468: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 0063e46b: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0063e470: je 0x63e50b */ if (fZ) goto L_0063e50b;
L_0063e476:; BB(0x0063e476);
    /* 0063e476: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063e477: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x63e47cu); f_0068d5a8();
    /* 0063e47c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063e47d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063e47e: mov ecx, edi */ r_ecx = r_edi;
    /* 0063e480: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x63e485u); f_007706b0();
    /* 0063e485: mov ecx, edi */ r_ecx = r_edi;
    /* 0063e487: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x63e48cu); f_00770738();
    /* 0063e48c: mov ebp, eax */ r_ebp = r_eax;
    /* 0063e48e: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0063e490: je 0x63e50b */ if (fZ) goto L_0063e50b;
L_0063e492:; BB(0x0063e492);
    /* 0063e492: lea ebx, [edi + 0x38] */ r_ebx = (u32)(r_edi+0x38u);
    /* 0063e495: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0063e496: lea edx, [ebp + 0x38] */ r_edx = (u32)(r_ebp+0x38u);
    /* 0063e499: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063e49a: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x63e49fu); f_007a9180();
    /* 0063e49f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063e4a2: mov edx, dword ptr [ebp + 0xa4] */ r_edx = R32((u32)(r_ebp+0xa4u));
    /* 0063e4a8: fld dword ptr [edi + 0x340] */ FPUSH(R_F32((u32)(r_edi+0x340u)));
    /* 0063e4ae: fsub dword ptr [edx + 0xc] */ ST(0) = ST(0) - R_F32((u32)(r_edx+0xcu));
    /* 0063e4b1: fst dword ptr [edi + 0x340] */ W_F32((u32)(r_edi+0x340u), ST(0));
    /* 0063e4b7: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0063e4b9: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0063e4bb: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0063e4bd: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0063e4be: jbe 0x63e4f6 */ if ((fC||fZ)) goto L_0063e4f6;
L_0063e4c0:; BB(0x0063e4c0);
    /* 0063e4c0: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x63e4c5u); f_006dc358();
    /* 0063e4c5: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063e4c8: je 0x63e50f */ if (fZ) goto L_0063e50f;
L_0063e4ca:; BB(0x0063e4ca);
    /* 0063e4ca: movzx edx, word ptr [edi + 0x344] */ r_edx = (u32)R16((u32)(r_edi+0x344u));
    /* 0063e4d1: cmp edx, dword ptr [0xa9c4f4] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa9c4f4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063e4d7: jne 0x63e4eb */ if (!fZ) goto L_0063e4eb;
L_0063e4d9:; BB(0x0063e4d9);
    /* 0063e4d9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063e4db: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063e4dd: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0063e4df: push dword ptr [edi + 0x340] */ { u32 v = R32((u32)(r_edi+0x340u)); r_esp -= 4; W32(r_esp, v); }
    /* 0063e4e5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0063e4e6: call 0x6937c8 */ r_esp -= 4; W32(r_esp, 0x63e4ebu); f_006937c8();
L_0063e4eb:; BB(0x0063e4eb);
    /* 0063e4eb: mov ecx, edi */ r_ecx = r_edi;
    /* 0063e4ed: call 0x63e288 */ r_esp -= 4; W32(r_esp, 0x63e4f2u); f_0063e288();
    /* 0063e4f2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0063e4f3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063e4f4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0063e4f5: ret  */ FN_RET(0x0063e444); r_esp += 4; return;
L_0063e4f6:; BB(0x0063e4f6);
    /* 0063e4f6: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 0063e4fb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063e4fd: mov word ptr [edi + 0x344], ax */ W16((u32)(r_edi+0x344u), (u16)r_eax);
    /* 0063e504: mov ecx, edi */ r_ecx = r_edi;
    /* 0063e506: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x63e50bu); f_007706b0();
L_0063e50b:; BB(0x0063e50b);
    /* 0063e50b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0063e50c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063e50d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0063e50e: ret  */ FN_RET(0x0063e444); r_esp += 4; return;
L_0063e50f:; BB(0x0063e50f);
    /* 0063e50f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063e511: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063e513: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0063e515: push dword ptr [edi + 0x340] */ { u32 v = R32((u32)(r_edi+0x340u)); r_esp -= 4; W32(r_esp, v); }
    /* 0063e51b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0063e51c: call 0x6937c8 */ r_esp -= 4; W32(r_esp, 0x63e521u); f_006937c8();
    /* 0063e521: jmp 0x63e4eb */ goto L_0063e4eb;
}

void f_0063e524(void) /* sub_63E524 */
{
    FN_ENTER(0x0063e524);
    /* 0063e524: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0063e525: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0063e526: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0063e527: mov edx, ecx */ r_edx = r_ecx;
    /* 0063e529: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0063e52b: mov ebx, eax */ r_ebx = r_eax;
    /* 0063e52d: mov esi, edx */ r_esi = r_edx;
L_0063e52f:; BB(0x0063e52f);
    /* 0063e52f: mov edi, dword ptr [ebx + 0xaad6e0] */ r_edi = R32((u32)(r_ebx+0xaad6e0u));
    /* 0063e535: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0063e536: call 0x6ea71c */ r_esp -= 4; W32(r_esp, 0x63e53bu); f_006ea71c();
    /* 0063e53b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063e53c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063e53e: je 0x63e57f */ if (fZ) goto L_0063e57f;
L_0063e540:; BB(0x0063e540);
    /* 0063e540: mov eax, dword ptr [edi + 4] */ r_eax = R32((u32)(r_edi+0x4u));
    /* 0063e543: cmp eax, dword ptr [0x9cb9a8] */ {  u32 a = r_eax; u32 b = R32((u32)(0x9cb9a8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063e549: jne 0x63e57f */ if (!fZ) goto L_0063e57f;
L_0063e54b:; BB(0x0063e54b);
    /* 0063e54b: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 0063e54d: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0063e552: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063e553: mov ecx, edi */ r_ecx = r_edi;
    /* 0063e555: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063e556: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063e558: push dword ptr [esi + 0x35c] */ { u32 v = R32((u32)(r_esi+0x35cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0063e55e: push dword ptr [esi + 0x358] */ { u32 v = R32((u32)(r_esi+0x358u)); r_esp -= 4; W32(r_esp, v); }
    /* 0063e564: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0063e565: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x63e568u); call_ind(t); }
    /* 0063e568: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0063e56a: mov eax, dword ptr [esi + 0x358] */ r_eax = R32((u32)(r_esi+0x358u));
    /* 0063e570: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0063e573: jge 0x63e57f */ if ((fS==fO)) goto L_0063e57f;
L_0063e575:; BB(0x0063e575);
    /* 0063e575: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063e577: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0063e578: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0063e57a: mov ecx, edi */ r_ecx = r_edi;
    /* 0063e57c: call dword ptr [eax + 0x68] */ { u32 t = R32((u32)(r_eax+0x68u)); r_esp -= 4; W32(r_esp, 0x63e57fu); call_ind(t); }
L_0063e57f:; BB(0x0063e57f);
    /* 0063e57f: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0063e582: cmp ebx, 0x40 */ {  u32 a = r_ebx; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0063e585: jl 0x63e52f */ if ((fS!=fO)) goto L_0063e52f;
L_0063e587:; BB(0x0063e587);
    /* 0063e587: mov eax, 1 */ r_eax = 0x1u;
    /* 0063e58c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0063e58d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0063e58e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0063e58f: ret 4 */ FN_RET(0x0063e524); r_esp += 8; return;
}

void f_0063e594(void) /* sub_63E594 */
{
    FN_ENTER(0x0063e594);
    /* 0063e594: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0063e595: mov ebx, esp */ r_ebx = r_esp;
    /* 0063e597: and esp, 0xfffffff0 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 0063e59a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063e59b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063e59c: mov ebp, dword ptr [ebx + 4] */ r_ebp = R32((u32)(r_ebx+0x4u));
    /* 0063e59f: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 0063e5a3: mov ebp, esp */ r_ebp = r_esp;
    /* 0063e5a5: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063e5a7: push 0x8e4e62 */ { u32 v = 0x8e4e62u; r_esp -= 4; W32(r_esp, v); }
    /* 0063e5ac: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0063e5b2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063e5b3: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0063e5ba: sub esp, 0xcc */ {  u32 a = r_esp; u32 b = 0xccu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0063e5c0: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0063e5c3: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0063e5c6: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 0063e5c9: mov dword ptr [ebp - 0x24], esi */ W32((u32)(r_ebp+0xffffffdcu), r_esi);
    /* 0063e5cc: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0063e5cf: lea ecx, [ebp - 0x98] */ r_ecx = (u32)(r_ebp+0xffffff68u);
    /* 0063e5d5: push 0x934480 */ { u32 v = 0x934480u; r_esp -= 4; W32(r_esp, v); }
    /* 0063e5da: call 0x644170 */ r_esp -= 4; W32(r_esp, 0x63e5dfu); f_00644170();
    /* 0063e5df: mov eax, dword ptr [0xa8f250] */ r_eax = R32((u32)(0xa8f250u));
    /* 0063e5e4: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 0063e5e7: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0063e5e9: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
L_0063e5ec:; BB(0x0063e5ec);
    /* 0063e5ec: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0063e5ef: lea esi, [esi + esi*4] */ r_esi = (u32)(r_esi+r_esi*4);
    /* 0063e5f2: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 0063e5f5: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0063e5f7: mov eax, dword ptr [ecx + 0x9c6a64] */ r_eax = R32((u32)(r_ecx+0x9c6a64u));
    /* 0063e5fd: push dword ptr [ecx + 0x9c6a60] */ { u32 v = R32((u32)(r_ecx+0x9c6a60u)); r_esp -= 4; W32(r_esp, v); }
    /* 0063e603: mov edx, dword ptr [ecx + 0x9c6a68] */ r_edx = R32((u32)(r_ecx+0x9c6a68u));
    /* 0063e609: mov edi, dword ptr [ecx + 0x9c6a6c] */ r_edi = R32((u32)(r_ecx+0x9c6a6cu));
    /* 0063e60f: mov ecx, dword ptr [0xa8f254] */ r_ecx = R32((u32)(0xa8f254u));
    /* 0063e615: mov dword ptr [ebp - 0x8c], eax */ W32((u32)(r_ebp+0xffffff74u), r_eax);
    /* 0063e61b: mov dword ptr [ebp - 0x88], edx */ W32((u32)(r_ebp+0xffffff78u), r_edx);
    /* 0063e621: mov dword ptr [ebp - 0x84], edi */ W32((u32)(r_ebp+0xffffff7cu), r_edi);
    /* 0063e627: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x63e62cu); f_005b8610();
    /* 0063e62c: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
    /* 0063e633: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 0063e636: mov eax, dword ptr [esi*4 + 0x9c6a70] */ r_eax = R32((u32)(r_esi*4+0x9c6a70u));
    /* 0063e63d: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 0063e640: push 0x24c */ { u32 v = 0x24cu; r_esp -= 4; W32(r_esp, v); }
    /* 0063e645: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x63e64au); f_005caba4();
    /* 0063e64a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063e64b: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0063e64e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063e650: je 0x63e679 */ if (fZ) goto L_0063e679;
L_0063e652:; BB(0x0063e652);
    /* 0063e652: mov dword ptr [ebp - 0x40], 1 */ W32((u32)(r_ebp+0xffffffc0u), 0x1u);
    /* 0063e659: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0063e660: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0063e663: lea edx, [ebp - 0x98] */ r_edx = (u32)(r_ebp+0xffffff68u);
    /* 0063e669: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063e66a: mov ecx, eax */ r_ecx = r_eax;
    /* 0063e66c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0063e66d: call 0x6649bc */ r_esp -= 4; W32(r_esp, 0x63e672u); f_006649bc();
    /* 0063e672: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
L_0063e679:; BB(0x0063e679);
    /* 0063e679: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0063e680: mov eax, dword ptr [ebp - 0x8c] */ r_eax = R32((u32)(r_ebp+0xffffff74u));
    /* 0063e686: mov edx, dword ptr [ebp - 0x84] */ r_edx = R32((u32)(r_ebp+0xffffff7cu));
    /* 0063e68c: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 0063e693: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0063e696: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 0063e699: lea ecx, [ebp - 0xd8] */ r_ecx = (u32)(r_ebp+0xffffff28u);
    /* 0063e69f: call 0x830cd8 */ r_esp -= 4; W32(r_esp, 0x63e6a4u); f_00830cd8();
    /* 0063e6a4: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0063e6a7: lea ecx, [ebp - 0xd8] */ r_ecx = (u32)(r_ebp+0xffffff28u);
    /* 0063e6ad: lea edx, [eax + 0x38] */ r_edx = (u32)(r_eax+0x38u);
    /* 0063e6b0: call 0x8316b4 */ r_esp -= 4; W32(r_esp, 0x63e6b5u); f_008316b4();
    /* 0063e6b5: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0063e6b8: lea ecx, [ebp - 0xd8] */ r_ecx = (u32)(r_ebp+0xffffff28u);
    /* 0063e6be: mov edx, dword ptr [eax + 0x60] */ r_edx = R32((u32)(r_eax+0x60u));
    /* 0063e6c1: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x63e6c6u); f_0082d8bc();
    /* 0063e6c6: lea eax, [ebp - 0x38] */ r_eax = (u32)(r_ebp+0xffffffc8u);
    /* 0063e6c9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063e6ca: lea ecx, [ebp - 0xd8] */ r_ecx = (u32)(r_ebp+0xffffff28u);
    /* 0063e6d0: lea edx, [ebp - 0x38] */ r_edx = (u32)(r_ebp+0xffffffc8u);
    /* 0063e6d3: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x63e6d8u); f_00830aa0();
    /* 0063e6d8: lea eax, [ebp - 0x38] */ r_eax = (u32)(r_ebp+0xffffffc8u);
    /* 0063e6db: push 0x8b */ { u32 v = 0x8bu; r_esp -= 4; W32(r_esp, v); }
    /* 0063e6e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063e6e1: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x63e6e6u); f_0050b510();
    /* 0063e6e6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063e6e9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063e6eb: je 0x63e6fb */ if (fZ) goto L_0063e6fb;
L_0063e6ed:; BB(0x0063e6ed);
    /* 0063e6ed: mov dword ptr [eax + 0x44], 0x3f000000 */ W32((u32)(r_eax+0x44u), 0x3f000000u);
    /* 0063e6f4: mov dword ptr [eax + 0x48], 0x3f000000 */ W32((u32)(r_eax+0x48u), 0x3f000000u);
L_0063e6fb:; BB(0x0063e6fb);
    /* 0063e6fb: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0063e6fe: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0063e701: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0063e704: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0063e707: jl 0x63e5ec */ if ((fS!=fO)) goto L_0063e5ec;
L_0063e70d:; BB(0x0063e70d);
    /* 0063e70d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0063e710: call 0x63e320 */ r_esp -= 4; W32(r_esp, 0x63e715u); f_0063e320();
    /* 0063e715: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 0063e718: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0063e71b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063e71e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0063e725: mov esp, ebp */ r_esp = r_ebp;
    /* 0063e727: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063e728: mov esp, ebx */ r_esp = r_ebx;
    /* 0063e72a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0063e72b: ret  */ FN_RET(0x0063e594); r_esp += 4; return;
}

void f_0063e72c(void) /* sub_63E72C */
{
    FN_ENTER(0x0063e72c);
    /* 0063e72c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0063e72d: mov edi, ecx */ r_edi = r_ecx;
    /* 0063e72f: mov eax, dword ptr [edi + 0x350] */ r_eax = R32((u32)(r_edi+0x350u));
    /* 0063e735: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0063e738: mov dword ptr [edi + 0x350], eax */ W32((u32)(r_edi+0x350u), r_eax);
    /* 0063e73e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0063e740: jge 0x63e790 */ if ((fS==fO)) goto L_0063e790;
L_0063e742:; BB(0x0063e742);
    /* 0063e742: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 0063e747: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063e749: mov eax, dword ptr [edi + 0xa4] */ r_eax = R32((u32)(r_edi+0xa4u));
    /* 0063e74f: mov ecx, edi */ r_ecx = r_edi;
    /* 0063e751: mov dword ptr [eax + 0xc], 0x41700000 */ W32((u32)(r_eax+0xcu), 0x41700000u);
    /* 0063e758: call 0x7b52c4 */ r_esp -= 4; W32(r_esp, 0x63e75du); f_007b52c4();
    /* 0063e75d: call 0x7b51c4 */ r_esp -= 4; W32(r_esp, 0x63e762u); f_007b51c4();
    /* 0063e762: mov ecx, edi */ r_ecx = r_edi;
    /* 0063e764: call 0x7b6894 */ r_esp -= 4; W32(r_esp, 0x63e769u); f_007b6894();
    /* 0063e769: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0063e76e: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0063e770: mov ecx, edi */ r_ecx = r_edi;
    /* 0063e772: call dword ptr [eax + 0x114] */ { u32 t = R32((u32)(r_eax+0x114u)); r_esp -= 4; W32(r_esp, 0x63e778u); call_ind(t); }
    /* 0063e778: mov ecx, edi */ r_ecx = r_edi;
    /* 0063e77a: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x63e77fu); f_00770738();
    /* 0063e77f: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0063e784: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063e785: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 0063e787: mov ecx, edi */ r_ecx = r_edi;
    /* 0063e789: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x63e78cu); call_ind(t); }
    /* 0063e78c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0063e78e: jmp 0x63e797 */ goto L_0063e797;
L_0063e790:; BB(0x0063e790);
    /* 0063e790: mov ecx, edi */ r_ecx = r_edi;
    /* 0063e792: call 0x63e288 */ r_esp -= 4; W32(r_esp, 0x63e797u); f_0063e288();
L_0063e797:; BB(0x0063e797);
    /* 0063e797: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063e799: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0063e79a: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x63e79fu); f_006946a8();
    /* 0063e79f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0063e7a2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0063e7a3: ret  */ FN_RET(0x0063e72c); r_esp += 4; return;
}

void f_0063e7a4(void) /* sub_63E7A4 */
{
    FN_ENTER(0x0063e7a4);
    /* 0063e7a4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0063e7a5: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0063e7a8: mov edi, ecx */ r_edi = r_ecx;
    /* 0063e7aa: fld dword ptr [edi + 0xc0] */ FPUSH(R_F32((u32)(r_edi+0xc0u)));
    /* 0063e7b0: fadd dword ptr [edi + 0xc8] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0xc8u));
    /* 0063e7b6: mov edx, dword ptr [edi + 0xf8] */ r_edx = R32((u32)(r_edi+0xf8u));
    /* 0063e7bc: fst dword ptr [edi + 0xc0] */ W_F32((u32)(r_edi+0xc0u), ST(0));
    /* 0063e7c2: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0063e7c5: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0063e7c8: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0063e7cb: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 0063e7ce: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0063e7d1: fadd dword ptr [eax*4 + 0x9344d0] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x9344d0u));
    /* 0063e7d8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0063e7da: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 0063e7dc: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0063e7de: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0063e7df: ja 0x63e7e8 */ if ((!fC&&!fZ)) goto L_0063e7e8;
L_0063e7e1:; BB(0x0063e7e1);
    /* 0063e7e1: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0063e7e3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0063e7e6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0063e7e7: ret  */ FN_RET(0x0063e7a4); r_esp += 4; return;
L_0063e7e8:; BB(0x0063e7e8);
    /* 0063e7e8: fstp dword ptr [edi + 0xc0] */ W_F32((u32)(r_edi+0xc0u), ST(0)); FPOP();
    /* 0063e7ee: mov eax, 3 */ r_eax = 0x3u;
    /* 0063e7f3: mov word ptr [edi + 0x32e], ax */ W16((u32)(r_edi+0x32eu), (u16)r_eax);
    /* 0063e7fa: mov ecx, edi */ r_ecx = r_edi;
    /* 0063e7fc: call 0x77a1f4 */ r_esp -= 4; W32(r_esp, 0x63e801u); f_0077a1f4();
    /* 0063e801: push 0x8001f04 */ { u32 v = 0x8001f04u; r_esp -= 4; W32(r_esp, v); }
    /* 0063e806: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063e808: mov ecx, edi */ r_ecx = r_edi;
    /* 0063e80a: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x63e80fu); f_007b52ec();
    /* 0063e80f: push 0x8003 */ { u32 v = 0x8003u; r_esp -= 4; W32(r_esp, v); }
    /* 0063e814: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063e816: mov ecx, edi */ r_ecx = r_edi;
    /* 0063e818: call 0x7b52c4 */ r_esp -= 4; W32(r_esp, 0x63e81du); f_007b52c4();
    /* 0063e81d: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0063e820: and eax, 0xfffbffff */ {  u32 a = r_eax; u32 b = 0xfffbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0063e825: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0063e828: mov ecx, edi */ r_ecx = r_edi;
    /* 0063e82a: call 0x63e444 */ r_esp -= 4; W32(r_esp, 0x63e82fu); f_0063e444();
    /* 0063e82f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0063e832: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0063e833: ret  */ FN_RET(0x0063e7a4); r_esp += 4; return;
}

void f_0063e834(void) /* sub_63E834 */
{
    FN_ENTER(0x0063e834);
    /* 0063e834: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0063e835: mov esi, ecx */ r_esi = r_ecx;
    /* 0063e837: mov ecx, dword ptr [0xa8f250] */ r_ecx = R32((u32)(0xa8f250u));
    /* 0063e83d: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x63e842u); f_00829cc8();
    /* 0063e842: mov eax, dword ptr [0xa9c4ec] */ r_eax = R32((u32)(0xa9c4ecu));
    /* 0063e847: cmp eax, dword ptr [0xa8f248] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa8f248u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063e84d: je 0x63e891 */ if (fZ) goto L_0063e891;
L_0063e84f:; BB(0x0063e84f);
    /* 0063e84f: mov edx, dword ptr [0xa8f24c] */ r_edx = R32((u32)(0xa8f24cu));
    /* 0063e855: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063e857: je 0x63e963 */ if (fZ) goto L_0063e963;
L_0063e85d:; BB(0x0063e85d);
    /* 0063e85d: mov edx, dword ptr [0xa8f244] */ r_edx = R32((u32)(0xa8f244u));
    /* 0063e863: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063e866: je 0x63e958 */ if (fZ) goto L_0063e958;
L_0063e86c:; BB(0x0063e86c);
    /* 0063e86c: mov ecx, dword ptr [0xa8f240] */ r_ecx = R32((u32)(0xa8f240u));
    /* 0063e872: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063e874: je 0x63e88a */ if (fZ) goto L_0063e88a;
L_0063e876:; BB(0x0063e876);
    /* 0063e876: push -0x14 */ { u32 v = 0xffffffecu; r_esp -= 4; W32(r_esp, v); }
    /* 0063e878: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063e87a: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0063e87c: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x63e87fu); call_ind(t); }
    /* 0063e87f: mov eax, dword ptr [0xa9c4ec] */ r_eax = R32((u32)(0xa9c4ecu));
    /* 0063e884: mov ecx, dword ptr [0xa8f240] */ r_ecx = R32((u32)(0xa8f240u));
L_0063e88a:; BB(0x0063e88a);
    /* 0063e88a: mov dword ptr [0xa8f248], eax */ W32((u32)(0xa8f248u), r_eax);
    /* 0063e88f: jmp 0x63e897 */ goto L_0063e897;
L_0063e891:; BB(0x0063e891);
    /* 0063e891: mov ecx, dword ptr [0xa8f240] */ r_ecx = R32((u32)(0xa8f240u));
L_0063e897:; BB(0x0063e897);
    /* 0063e897: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063e899: je 0x63e8b3 */ if (fZ) goto L_0063e8b3;
L_0063e89b:; BB(0x0063e89b);
    /* 0063e89b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0063e89d: call 0x835f78 */ r_esp -= 4; W32(r_esp, 0x63e8a2u); f_00835f78();
    /* 0063e8a2: push dword ptr [0xa8f244] */ { u32 v = R32((u32)(0xa8f244u)); r_esp -= 4; W32(r_esp, v); }
    /* 0063e8a8: mov ecx, dword ptr [0xa8f240] */ r_ecx = R32((u32)(0xa8f240u));
    /* 0063e8ae: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0063e8b0: call dword ptr [eax + 0xc] */ { u32 t = R32((u32)(r_eax+0xcu)); r_esp -= 4; W32(r_esp, 0x63e8b3u); call_ind(t); }
L_0063e8b3:; BB(0x0063e8b3);
    /* 0063e8b3: push 0x63e270 */ { u32 v = 0x63e270u; r_esp -= 4; W32(r_esp, v); }
    /* 0063e8b8: call 0x83a308 */ r_esp -= 4; W32(r_esp, 0x63e8bdu); f_0083a308();
    /* 0063e8bd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063e8be: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x63e8c3u); f_0082d7b0();
    /* 0063e8c3: lea ecx, [esi + 0x38] */ r_ecx = (u32)(r_esi+0x38u);
    /* 0063e8c6: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x63e8cbu); f_0082d838();
    /* 0063e8cb: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 0063e8ce: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0063e8d0: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x63e8d5u); f_0082d8bc();
    /* 0063e8d5: call 0x7a9350 */ r_esp -= 4; W32(r_esp, 0x63e8dau); f_007a9350();
    /* 0063e8da: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0063e8dc: call 0x7a94a0 */ r_esp -= 4; W32(r_esp, 0x63e8e1u); f_007a94a0();
    /* 0063e8e1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063e8e2: push dword ptr [esi + 0xc0] */ { u32 v = R32((u32)(r_esi+0xc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0063e8e8: mov ecx, dword ptr [esi + 0x34] */ r_ecx = R32((u32)(r_esi+0x34u));
    /* 0063e8eb: mov edx, dword ptr [esi + 0xf8] */ r_edx = R32((u32)(r_esi+0xf8u));
    /* 0063e8f1: call 0x83bd00 */ r_esp -= 4; W32(r_esp, 0x63e8f6u); f_0083bd00();
    /* 0063e8f6: call 0x7a94b0 */ r_esp -= 4; W32(r_esp, 0x63e8fbu); f_007a94b0();
    /* 0063e8fb: call 0x7a9318 */ r_esp -= 4; W32(r_esp, 0x63e900u); f_007a9318();
    /* 0063e900: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x63e905u); f_0082dbac();
    /* 0063e905: call 0x7a9380 */ r_esp -= 4; W32(r_esp, 0x63e90au); f_007a9380();
    /* 0063e90a: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0063e90c: call 0x7a94a0 */ r_esp -= 4; W32(r_esp, 0x63e911u); f_007a94a0();
    /* 0063e911: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063e912: push dword ptr [esi + 0xc0] */ { u32 v = R32((u32)(r_esi+0xc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0063e918: mov ecx, dword ptr [esi + 0x34] */ r_ecx = R32((u32)(r_esi+0x34u));
    /* 0063e91b: mov edx, dword ptr [esi + 0xf8] */ r_edx = R32((u32)(r_esi+0xf8u));
    /* 0063e921: call 0x83bd00 */ r_esp -= 4; W32(r_esp, 0x63e926u); f_0083bd00();
    /* 0063e926: call 0x7a94b0 */ r_esp -= 4; W32(r_esp, 0x63e92bu); f_007a94b0();
    /* 0063e92b: call 0x7a9318 */ r_esp -= 4; W32(r_esp, 0x63e930u); f_007a9318();
    /* 0063e930: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x63e935u); f_0082dab0();
    /* 0063e935: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x63e93au); f_0082da80();
    /* 0063e93a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063e93c: call 0x83a308 */ r_esp -= 4; W32(r_esp, 0x63e941u); f_0083a308();
    /* 0063e941: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063e942: mov ecx, dword ptr [0xa8f240] */ r_ecx = R32((u32)(0xa8f240u));
    /* 0063e948: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0063e94a: je 0x63e956 */ if (fZ) goto L_0063e956;
L_0063e94c:; BB(0x0063e94c);
    /* 0063e94c: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0063e94e: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x63e951u); call_ind(t); }
    /* 0063e951: call 0x83603c */ r_esp -= 4; W32(r_esp, 0x63e956u); f_0083603c();
L_0063e956:; BB(0x0063e956);
    /* 0063e956: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0063e957: ret  */ FN_RET(0x0063e834); r_esp += 4; return;
L_0063e958:; BB(0x0063e958);
    /* 0063e958: mov ecx, dword ptr [0xa8f240] */ r_ecx = R32((u32)(0xa8f240u));
    /* 0063e95e: jmp 0x63e88a */ goto L_0063e88a;
L_0063e963:; BB(0x0063e963);
    /* 0063e963: mov ecx, dword ptr [0xa8f240] */ r_ecx = R32((u32)(0xa8f240u));
    /* 0063e969: jmp 0x63e88a */ goto L_0063e88a;
}

void f_0063e970(void) /* sub_63E970 */
{
    FN_ENTER(0x0063e970);
    /* 0063e970: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0063e971: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0063e972: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0063e973: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0063e977: mov ebx, eax */ r_ebx = r_eax;
    /* 0063e979: mov esi, ecx */ r_esi = r_ecx;
L_0063e97b:; BB(0x0063e97b);
    /* 0063e97b: mov edi, dword ptr [ebx] */ r_edi = R32((u32)(r_ebx));
    /* 0063e97d: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x63e982u); f_0082d7b0();
    /* 0063e982: test edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063e988: jne 0x63e992 */ if (!fZ) goto L_0063e992;
L_0063e98a:; BB(0x0063e98a);
    /* 0063e98a: lea ecx, [ebx + 8] */ r_ecx = (u32)(r_ebx+0x8u);
    /* 0063e98d: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x63e992u); f_0082d838();
L_0063e992:; BB(0x0063e992);
    /* 0063e992: test edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063e998: jne 0x63e9a7 */ if (!fZ) goto L_0063e9a7;
L_0063e99a:; BB(0x0063e99a);
    /* 0063e99a: lea ecx, [ebx + 0x14] */ r_ecx = (u32)(r_ebx+0x14u);
    /* 0063e99d: mov edx, edi */ r_edx = r_edi;
    /* 0063e99f: and edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0063e9a2: call 0x830df8 */ r_esp -= 4; W32(r_esp, 0x63e9a7u); f_00830df8();
L_0063e9a7:; BB(0x0063e9a7);
    /* 0063e9a7: test edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063e9ad: jne 0x63e9b7 */ if (!fZ) goto L_0063e9b7;
L_0063e9af:; BB(0x0063e9af);
    /* 0063e9af: lea ecx, [ebx + 0x20] */ r_ecx = (u32)(r_ebx+0x20u);
    /* 0063e9b2: call 0x831290 */ r_esp -= 4; W32(r_esp, 0x63e9b7u); f_00831290();
L_0063e9b7:; BB(0x0063e9b7);
    /* 0063e9b7: test edi, 8 */ {  u32 a = r_edi; u32 b = 0x8u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063e9bd: jne 0x63e9d2 */ if (!fZ) goto L_0063e9d2;
L_0063e9bf:; BB(0x0063e9bf);
    /* 0063e9bf: mov edx, dword ptr [esi + 0x354] */ r_edx = R32((u32)(r_esi+0x354u));
    /* 0063e9c5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063e9c7: jne 0x63e9fb */ if (!fZ) goto L_0063e9fb;
L_0063e9c9:; BB(0x0063e9c9);
    /* 0063e9c9: push dword ptr [ebx + 4] */ { u32 v = R32((u32)(r_ebx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0063e9cc: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x63e9d1u); f_008321d8();
    /* 0063e9d1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0063e9d2:; BB(0x0063e9d2);
    /* 0063e9d2: test edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063e9d8: jne 0x63e9e9 */ if (!fZ) goto L_0063e9e9;
L_0063e9da:; BB(0x0063e9da);
    /* 0063e9da: mov edx, dword ptr [ebx + 0x2c] */ r_edx = R32((u32)(r_ebx+0x2cu));
    /* 0063e9dd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063e9df: je 0x63e9e9 */ if (fZ) goto L_0063e9e9;
L_0063e9e1:; BB(0x0063e9e1);
    /* 0063e9e1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063e9e2: mov ecx, esi */ r_ecx = r_esi;
    /* 0063e9e4: call 0x63e970 */ r_esp -= 4; W32(r_esp, 0x63e9e9u); f_0063e970();
L_0063e9e9:; BB(0x0063e9e9);
    /* 0063e9e9: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x63e9eeu); f_0082da80();
    /* 0063e9ee: mov ebx, dword ptr [ebx + 0x30] */ r_ebx = R32((u32)(r_ebx+0x30u));
    /* 0063e9f1: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0063e9f3: jne 0x63e97b */ if (!fZ) goto L_0063e97b;
L_0063e9f5:; BB(0x0063e9f5);
    /* 0063e9f5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0063e9f6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0063e9f7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0063e9f8: ret 4 */ FN_RET(0x0063e970); r_esp += 8; return;
L_0063e9fb:; BB(0x0063e9fb);
    /* 0063e9fb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063e9fd: call 0x501fb8 */ r_esp -= 4; W32(r_esp, 0x63ea02u); f_00501fb8();
    /* 0063ea02: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063ea03: mov ecx, dword ptr [0xa8f250] */ r_ecx = R32((u32)(0xa8f250u));
    /* 0063ea09: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x63ea0eu); f_00829cc8();
    /* 0063ea0e: push 0x38e */ { u32 v = 0x38eu; r_esp -= 4; W32(r_esp, v); }
    /* 0063ea13: call 0x5022dc */ r_esp -= 4; W32(r_esp, 0x63ea18u); f_005022dc();
    /* 0063ea18: push dword ptr [ebx + 4] */ { u32 v = R32((u32)(r_ebx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0063ea1b: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x63ea20u); f_008321d8();
    /* 0063ea20: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063ea23: call 0x5022a0 */ r_esp -= 4; W32(r_esp, 0x63ea28u); f_005022a0();
    /* 0063ea28: jmp 0x63e9d2 */ goto L_0063e9d2;
}

void f_0063ea2c(void) /* sub_63EA2C */
{
    FN_ENTER(0x0063ea2c);
    /* 0063ea2c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0063ea2d: mov esi, ecx */ r_esi = r_ecx;
    /* 0063ea2f: mov eax, dword ptr [esi + 0x354] */ r_eax = R32((u32)(r_esi+0x354u));
    /* 0063ea35: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063ea37: jne 0x63ea8d */ if (!fZ) goto L_0063ea8d;
L_0063ea39:; BB(0x0063ea39);
    /* 0063ea39: call 0x7a9350 */ r_esp -= 4; W32(r_esp, 0x63ea3eu); f_007a9350();
    /* 0063ea3e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0063ea40: call 0x7a94a0 */ r_esp -= 4; W32(r_esp, 0x63ea45u); f_007a94a0();
    /* 0063ea45: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063ea46: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x63ea4bu); f_0082dbac();
    /* 0063ea4b: mov ecx, dword ptr [0xa8f250] */ r_ecx = R32((u32)(0xa8f250u));
    /* 0063ea51: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x63ea56u); f_00829cc8();
    /* 0063ea56: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x63ea5bu); f_0082d7b0();
    /* 0063ea5b: lea ecx, [esi + 0x38] */ r_ecx = (u32)(r_esi+0x38u);
    /* 0063ea5e: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x63ea63u); f_0082d838();
    /* 0063ea63: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 0063ea66: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0063ea68: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x63ea6du); f_0082d8bc();
    /* 0063ea6d: push dword ptr [esi + 0x34] */ { u32 v = R32((u32)(r_esi+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 0063ea70: mov ecx, esi */ r_ecx = r_esi;
    /* 0063ea72: call 0x63e970 */ r_esp -= 4; W32(r_esp, 0x63ea77u); f_0063e970();
    /* 0063ea77: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x63ea7cu); f_0082da80();
    /* 0063ea7c: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x63ea81u); f_0082dab0();
    /* 0063ea81: call 0x7a94b0 */ r_esp -= 4; W32(r_esp, 0x63ea86u); f_007a94b0();
    /* 0063ea86: call 0x7a9318 */ r_esp -= 4; W32(r_esp, 0x63ea8bu); f_007a9318();
    /* 0063ea8b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0063ea8c: ret  */ FN_RET(0x0063ea2c); r_esp += 4; return;
L_0063ea8d:; BB(0x0063ea8d);
    /* 0063ea8d: call 0x482a10 */ r_esp -= 4; W32(r_esp, 0x63ea92u); f_00482a10();
    /* 0063ea92: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0063ea94: jne 0x63ea39 */ if (!fZ) goto L_0063ea39;
L_0063ea96:; BB(0x0063ea96);
    /* 0063ea96: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0063ea97: ret  */ FN_RET(0x0063ea2c); r_esp += 4; return;
}

void f_0063ea98(void) /* sub_63EA98 */
{
    FN_ENTER(0x0063ea98);
    /* 0063ea98: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0063ea99: mov esi, ecx */ r_esi = r_ecx;
    /* 0063ea9b: fld dword ptr [esi + 0x68] */ FPUSH(R_F32((u32)(r_esi+0x68u)));
    /* 0063ea9e: fcom dword ptr [0x93450c] */ fx_compare(ST(0), R_F32((u32)(0x93450cu))); 
    /* 0063eaa4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0063eaa6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0063eaa7: jae 0x63eab3 */ if (!fC) goto L_0063eab3;
L_0063eaa9:; BB(0x0063eaa9);
    /* 0063eaa9: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0063eaab: fld dword ptr [0x934514] */ FPUSH(R_F32((u32)(0x934514u)));
    /* 0063eab1: jmp 0x63eac4 */ goto L_0063eac4;
L_0063eab3:; BB(0x0063eab3);
    /* 0063eab3: fld dword ptr [0x934508] */ FPUSH(R_F32((u32)(0x934508u)));
    /* 0063eab9: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0063eabb: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0063eabd: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0063eabe: ja 0x63eac2 */ if ((!fC&&!fZ)) goto L_0063eac2;
L_0063eac0:; BB(0x0063eac0);
    /* 0063eac0: fst st(1) */ ST(1) = ST(0);
L_0063eac2:; BB(0x0063eac2);
    /* 0063eac2: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0063eac4:; BB(0x0063eac4);
    /* 0063eac4: mov edx, dword ptr [esi + 0x84] */ r_edx = R32((u32)(r_esi+0x84u));
    /* 0063eaca: fst dword ptr [esi + 0x68] */ W_F32((u32)(r_esi+0x68u), ST(0));
    /* 0063eacd: mov eax, 0x3c */ r_eax = 0x3cu;
    /* 0063ead2: cmp edx, 0x3c */ {  u32 a = r_edx; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0063ead5: jl 0x63ead9 */ if ((fS!=fO)) goto L_0063ead9;
L_0063ead7:; BB(0x0063ead7);
    /* 0063ead7: mov edx, eax */ r_edx = r_eax;
L_0063ead9:; BB(0x0063ead9);
    /* 0063ead9: mov eax, 1 */ r_eax = 0x1u;
    /* 0063eade: mov dword ptr [esi + 0x33c], 0x41700000 */ W32((u32)(r_esi+0x33cu), 0x41700000u);
    /* 0063eae8: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0063eaeb: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0063eaf0: jg 0x63eaf4 */ if ((!fZ&&fS==fO)) goto L_0063eaf4;
L_0063eaf2:; BB(0x0063eaf2);
    /* 0063eaf2: mov edx, eax */ r_edx = r_eax;
L_0063eaf4:; BB(0x0063eaf4);
    /* 0063eaf4: mov eax, dword ptr [esi + 0x88] */ r_eax = R32((u32)(r_esi+0x88u));
    /* 0063eafa: mov dword ptr [esi + 0x340], 0x41700000 */ W32((u32)(r_esi+0x340u), 0x41700000u);
    /* 0063eb04: mov dword ptr [esi + 0x84], edx */ W32((u32)(r_esi+0x84u), r_edx);
    /* 0063eb0a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0063eb0d: jl 0x63eb11 */ if ((fS!=fO)) goto L_0063eb11;
L_0063eb0f:; BB(0x0063eb0f);
    /* 0063eb0f: mov eax, ecx */ r_eax = r_ecx;
L_0063eb11:; BB(0x0063eb11);
    /* 0063eb11: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0063eb13: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0063eb15: jg 0x63eb19 */ if ((!fZ&&fS==fO)) goto L_0063eb19;
L_0063eb17:; BB(0x0063eb17);
    /* 0063eb17: mov eax, ecx */ r_eax = r_ecx;
L_0063eb19:; BB(0x0063eb19);
    /* 0063eb19: mov dword ptr [esi + 0x88], eax */ W32((u32)(r_esi+0x88u), r_eax);
    /* 0063eb1f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0063eb21: mov word ptr [esi + 0x32e], cx */ W16((u32)(r_esi+0x32eu), (u16)r_ecx);
    /* 0063eb28: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 0063eb2b: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0063eb2d: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0063eb2f: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0063eb31: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0063eb33: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0063eb35: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0063eb37: mov dword ptr [esi + 0x350], ecx */ W32((u32)(r_esi+0x350u), r_ecx);
    /* 0063eb3d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063eb3f: je 0x63eb4d */ if (fZ) goto L_0063eb4d;
L_0063eb41:; BB(0x0063eb41);
    /* 0063eb41: mov dword ptr [esi + 0x354], 1 */ W32((u32)(r_esi+0x354u), 0x1u);
    /* 0063eb4b: jmp 0x63eb57 */ goto L_0063eb57;
L_0063eb4d:; BB(0x0063eb4d);
    /* 0063eb4d: mov dword ptr [esi + 0x354], 0 */ W32((u32)(r_esi+0x354u), 0x0u);
L_0063eb57:; BB(0x0063eb57);
    /* 0063eb57: fld dword ptr [0x934510] */ FPUSH(R_F32((u32)(0x934510u)));
    /* 0063eb5d: fld dword ptr [esi + 0x6c] */ FPUSH(R_F32((u32)(r_esi+0x6cu)));
    /* 0063eb60: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 0063eb62: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0063eb64: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0063eb66: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0063eb68: fstp dword ptr [esi + 0xc8] */ W_F32((u32)(r_esi+0xc8u), ST(0)); FPOP();
    /* 0063eb6e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0063eb6f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0063eb70: mov ecx, esi */ r_ecx = r_esi;
    /* 0063eb72: ja 0x63eb76 */ if ((!fC&&!fZ)) goto L_0063eb76;
L_0063eb74:; BB(0x0063eb74);
    /* 0063eb74: fst st(1) */ ST(1) = ST(0);
L_0063eb76:; BB(0x0063eb76);
    /* 0063eb76: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0063eb78: fst dword ptr [esi + 0x6c] */ W_F32((u32)(r_esi+0x6cu), ST(0));
    /* 0063eb7b: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0063eb7e: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x63eb84u); call_ind(t); }
    /* 0063eb84: mov edx, dword ptr [esi + 0x8c] */ r_edx = R32((u32)(r_esi+0x8cu));
    /* 0063eb8a: fstp dword ptr [esi + 0x35c] */ W_F32((u32)(r_esi+0x35cu), ST(0)); FPOP();
    /* 0063eb90: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0063eb92: jl 0x63ebb5 */ if ((fS!=fO)) goto L_0063ebb5;
L_0063eb94:; BB(0x0063eb94);
    /* 0063eb94: mov eax, 5 */ r_eax = 0x5u;
    /* 0063eb99: cmp edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0063eb9c: jl 0x63eba0 */ if ((fS!=fO)) goto L_0063eba0;
L_0063eb9e:; BB(0x0063eb9e);
    /* 0063eb9e: mov edx, eax */ r_edx = r_eax;
L_0063eba0:; BB(0x0063eba0);
    /* 0063eba0: mov eax, dword ptr [edx*4 + 0x9344e8] */ r_eax = R32((u32)(r_edx*4+0x9344e8u));
    /* 0063eba7: mov dword ptr [esi + 0x8c], edx */ W32((u32)(r_esi+0x8cu), r_edx);
    /* 0063ebad: mov dword ptr [esi + 0x358], eax */ W32((u32)(r_esi+0x358u), r_eax);
    /* 0063ebb3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0063ebb4: ret  */ FN_RET(0x0063ea98); r_esp += 4; return;
L_0063ebb5:; BB(0x0063ebb5);
    /* 0063ebb5: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0063ebb7: jmp 0x63eba0 */ goto L_0063eba0;
}

void f_0063ebbc(void) /* sub_63EBBC */
{
    FN_ENTER(0x0063ebbc);
    /* 0063ebbc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063ebbd: mov ebp, esp */ r_ebp = r_esp;
    /* 0063ebbf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063ebc1: push 0x8e4e7c */ { u32 v = 0x8e4e7cu; r_esp -= 4; W32(r_esp, v); }
    /* 0063ebc6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0063ebcc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063ebcd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0063ebd4: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0063ebd7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0063ebda: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0063ebdd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0063ebe0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0063ebe3: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0063ebe6: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0063ebed: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0063ebf0: mov dword ptr [eax], 0xb2df80 */ W32((u32)(r_eax), 0xb2df80u);
    /* 0063ebf6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063ebf7: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x63ebfcu); f_007b4e84();
    /* 0063ebfc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063ebfd: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0063ec00: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x63ec05u); f_007b9c8c();
    /* 0063ec05: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0063ec0c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0063ec0f: call 0x63a148 */ r_esp -= 4; W32(r_esp, 0x63ec14u); f_0063a148();
    /* 0063ec14: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063ec17: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0063ec1e: mov esp, ebp */ r_esp = r_ebp;
    /* 0063ec20: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063ec21: ret  */ FN_RET(0x0063ebbc); r_esp += 4; return;
}

void f_0063ec24(void) /* sub_63EC24 */
{
    FN_ENTER(0x0063ec24);
    /* 0063ec24: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063ec25: mov ebp, esp */ r_ebp = r_esp;
    /* 0063ec27: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063ec29: push 0x8e4e98 */ { u32 v = 0x8e4e98u; r_esp -= 4; W32(r_esp, v); }
    /* 0063ec2e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0063ec34: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063ec35: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0063ec3c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0063ec3f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0063ec42: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0063ec45: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0063ec48: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0063ec4b: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0063ec4e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0063ec51: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0063ec54: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0063ec57: call 0x63a198 */ r_esp -= 4; W32(r_esp, 0x63ec5cu); f_0063a198();
    /* 0063ec5c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0063ec63: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0063ec66: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0063ec69: mov dword ptr [ecx], 0xb2df80 */ W32((u32)(r_ecx), 0xb2df80u);
    /* 0063ec6f: mov eax, dword ptr [0x9c6b00] */ r_eax = R32((u32)(0x9c6b00u));
    /* 0063ec74: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063ec75: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0063ec78: call dword ptr [0xb2df94] */ { u32 t = R32((u32)(0xb2df94u)); r_esp -= 4; W32(r_esp, 0x63ec7eu); call_ind(t); }
    /* 0063ec7e: mov ecx, dword ptr [0xa8f254] */ r_ecx = R32((u32)(0xa8f254u));
    /* 0063ec84: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063ec86: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x63ec8bu); f_005b8610();
    /* 0063ec8b: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0063ec8e: mov ecx, dword ptr [0xa8f254] */ r_ecx = R32((u32)(0xa8f254u));
    /* 0063ec94: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063ec96: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 0063ec99: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x63ec9eu); f_005b8638();
    /* 0063ec9e: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0063eca1: mov dword ptr [ecx + 0xc8], 0x3f800000 */ W32((u32)(r_ecx+0xc8u), 0x3f800000u);
    /* 0063ecab: mov dword ptr [ecx + 0xf8], eax */ W32((u32)(r_ecx+0xf8u), r_eax);
    /* 0063ecb1: mov dword ptr [ecx + 0xc0], 0 */ W32((u32)(r_ecx+0xc0u), 0x0u);
    /* 0063ecbb: call 0x63ea98 */ r_esp -= 4; W32(r_esp, 0x63ecc0u); f_0063ea98();
    /* 0063ecc0: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0063ecc3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0063ecc5: push 0x9c6b04 */ { u32 v = 0x9c6b04u; r_esp -= 4; W32(r_esp, v); }
    /* 0063ecca: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x63eccfu); f_007b9a88();
    /* 0063eccf: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0063ecd2: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x63ecd7u); f_007b999c();
    /* 0063ecd7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063ecd8: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0063ecdb: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x63ece0u); f_007b4f54();
    /* 0063ece0: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0063ece3: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 0063ece6: or edx, 0x60040000 */ {  u32 a = r_edx; u32 b = 0x60040000u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0063ecec: mov dword ptr [eax + 0x34c], 0 */ W32((u32)(r_eax+0x34cu), 0x0u);
    /* 0063ecf6: mov dword ptr [eax + 0x30], edx */ W32((u32)(r_eax+0x30u), r_edx);
    /* 0063ecf9: mov dword ptr [eax + 0x360], 0xffffffff */ W32((u32)(r_eax+0x360u), 0xffffffffu);
    /* 0063ed03: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063ed06: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0063ed0d: mov esp, ebp */ r_esp = r_ebp;
    /* 0063ed0f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063ed10: ret 8 */ FN_RET(0x0063ec24); r_esp += 12; return;
}

void f_0063ed14(void) /* sub_63ED14 */
{
    FN_ENTER(0x0063ed14);
    /* 0063ed14: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0063ed15: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0063ed17: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0063ed1b: movsx edx, word ptr [eax] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax));
    /* 0063ed1e: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0063ed21: je 0x63ed27 */ if (fZ) goto L_0063ed27;
L_0063ed23:; BB(0x0063ed23);
    /* 0063ed23: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0063ed24: ret 8 */ FN_RET(0x0063ed14); r_esp += 12; return;
L_0063ed27:; BB(0x0063ed27);
    /* 0063ed27: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0063ed2b: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063ed2e: je 0x63ed6a */ if (fZ) goto L_0063ed6a;
L_0063ed30:; BB(0x0063ed30);
    /* 0063ed30: mov eax, dword ptr [ebx + 0x360] */ r_eax = R32((u32)(r_ebx+0x360u));
    /* 0063ed36: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0063ed38: jl 0x63ed4b */ if ((fS!=fO)) goto L_0063ed4b;
L_0063ed3a:; BB(0x0063ed3a);
    /* 0063ed3a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063ed3b: call 0x8148d4 */ r_esp -= 4; W32(r_esp, 0x63ed40u); f_008148d4();
    /* 0063ed40: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063ed41: mov dword ptr [ebx + 0x360], 0xffffffff */ W32((u32)(r_ebx+0x360u), 0xffffffffu);
L_0063ed4b:; BB(0x0063ed4b);
    /* 0063ed4b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0063ed4d: call 0x63e3b0 */ r_esp -= 4; W32(r_esp, 0x63ed52u); f_0063e3b0();
    /* 0063ed52: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0063ed53: call 0x8113bc */ r_esp -= 4; W32(r_esp, 0x63ed58u); f_008113bc();
    /* 0063ed58: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063ed59: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 0063ed5d: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0063ed62: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 0063ed66: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0063ed67: ret 8 */ FN_RET(0x0063ed14); r_esp += 12; return;
L_0063ed6a:; BB(0x0063ed6a);
    /* 0063ed6a: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0063ed6c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0063ed6e: call dword ptr [eax + 0x15c] */ { u32 t = R32((u32)(r_eax+0x15cu)); r_esp -= 4; W32(r_esp, 0x63ed74u); call_ind(t); }
    /* 0063ed74: jmp 0x63ed30 */ goto L_0063ed30;
}

void f_0063ed78(void) /* sub_63ED78 */
{
    FN_ENTER(0x0063ed78);
    /* 0063ed78: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0063ed79: mov esi, ecx */ r_esi = r_ecx;
    /* 0063ed7b: mov ecx, esi */ r_ecx = r_esi;
    /* 0063ed7d: call 0x63e3b0 */ r_esp -= 4; W32(r_esp, 0x63ed82u); f_0063e3b0();
    /* 0063ed82: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0063ed86: mov ecx, esi */ r_ecx = r_esi;
    /* 0063ed88: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0063ed8c: call 0x639e90 */ r_esp -= 4; W32(r_esp, 0x63ed91u); f_00639e90();
    /* 0063ed91: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0063ed92: ret 8 */ FN_RET(0x0063ed78); r_esp += 12; return;
}

void f_0063ed98(void) /* sub_63ED98 */
{
    FN_ENTER(0x0063ed98);
    /* 0063ed98: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0063ed99: mov edi, ecx */ r_edi = r_ecx;
    /* 0063ed9b: mov eax, dword ptr [0xa16380] */ r_eax = R32((u32)(0xa16380u));
    /* 0063eda0: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0063eda3: je 0x63ee0d */ if (fZ) goto L_0063ee0d;
L_0063eda5:; BB(0x0063eda5);
    /* 0063eda5: mov eax, dword ptr [edi + 0x354] */ r_eax = R32((u32)(r_edi+0x354u));
    /* 0063edab: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063edad: jne 0x63edf9 */ if (!fZ) goto L_0063edf9;
L_0063edaf:; BB(0x0063edaf);
    /* 0063edaf: push 0x42c80000 */ { u32 v = 0x42c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0063edb4: mov ecx, edi */ r_ecx = r_edi;
    /* 0063edb6: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0063edb8: push 0x43c80000 */ { u32 v = 0x43c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0063edbd: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x63edc0u); call_ind(t); }
    /* 0063edc0: mov dword ptr [edi + 0x348], eax */ W32((u32)(r_edi+0x348u), r_eax);
    /* 0063edc6: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0063edc9: je 0x63edcd */ if (fZ) goto L_0063edcd;
L_0063edcb:; BB(0x0063edcb);
    /* 0063edcb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0063edcc: ret  */ FN_RET(0x0063ed98); r_esp += 4; return;
L_0063edcd:; BB(0x0063edcd);
    /* 0063edcd: movsx eax, word ptr [edi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32eu));
    /* 0063edd4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0063edd6: jl 0x63edcb */ if ((fS!=fO)) goto L_0063edcb;
L_0063edd8:; BB(0x0063edd8);
    /* 0063edd8: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0063eddb: jg 0x63ede6 */ if ((!fZ&&fS==fO)) goto L_0063ede6;
L_0063eddd:; BB(0x0063eddd);
    /* 0063eddd: mov ecx, edi */ r_ecx = r_edi;
    /* 0063eddf: call 0x63ea2c */ r_esp -= 4; W32(r_esp, 0x63ede4u); f_0063ea2c();
    /* 0063ede4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0063ede5: ret  */ FN_RET(0x0063ed98); r_esp += 4; return;
L_0063ede6:; BB(0x0063ede6);
    /* 0063ede6: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0063ede9: jl 0x63edcb */ if ((fS!=fO)) goto L_0063edcb;
L_0063edeb:; BB(0x0063edeb);
    /* 0063edeb: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0063edee: jg 0x63edcb */ if ((!fZ&&fS==fO)) goto L_0063edcb;
L_0063edf0:; BB(0x0063edf0);
    /* 0063edf0: mov ecx, edi */ r_ecx = r_edi;
    /* 0063edf2: call 0x63e834 */ r_esp -= 4; W32(r_esp, 0x63edf7u); f_0063e834();
    /* 0063edf7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0063edf8: ret  */ FN_RET(0x0063ed98); r_esp += 4; return;
L_0063edf9:; BB(0x0063edf9);
    /* 0063edf9: call 0x482a10 */ r_esp -= 4; W32(r_esp, 0x63edfeu); f_00482a10();
    /* 0063edfe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063ee00: je 0x63edaf */ if (fZ) goto L_0063edaf;
L_0063ee02:; BB(0x0063ee02);
    /* 0063ee02: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0063ee03: call 0x506798 */ r_esp -= 4; W32(r_esp, 0x63ee08u); f_00506798();
    /* 0063ee08: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063ee09: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0063ee0b: je 0x63edaf */ if (fZ) goto L_0063edaf;
L_0063ee0d:; BB(0x0063ee0d);
    /* 0063ee0d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0063ee0e: ret  */ FN_RET(0x0063ed98); r_esp += 4; return;
}

void f_0063ee10(void)
{
    FN_ENTER(0x0063ee10);
    /* 0063ee10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063ee11: mov ebp, esp */ r_ebp = r_esp;
    /* 0063ee13: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063ee15: push 0x8e4ec0 */ { u32 v = 0x8e4ec0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063ee1a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0063ee20: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063ee21: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0063ee28: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0063ee2b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0063ee2e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0063ee31: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0063ee34: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0063ee37: push 0x364 */ { u32 v = 0x364u; r_esp -= 4; W32(r_esp, v); }
    /* 0063ee3c: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0063ee43: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x63ee48u); f_005caba4();
    /* 0063ee48: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063ee49: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0063ee4c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063ee4e: je 0x63ee87 */ if (fZ) goto L_0063ee87;
L_0063ee50:; BB(0x0063ee50);
    /* 0063ee50: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0063ee57: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0063ee5e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0063ee61: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 0063ee67: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0063ee6a: call 0x63ec24 */ r_esp -= 4; W32(r_esp, 0x63ee6fu); f_0063ec24();
    /* 0063ee6f: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0063ee72: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0063ee79:; BB(0x0063ee79);
    /* 0063ee79: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063ee7c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0063ee83: mov esp, ebp */ r_esp = r_ebp;
    /* 0063ee85: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063ee86: ret  */ FN_RET(0x0063ee10); r_esp += 4; return;
L_0063ee87:; BB(0x0063ee87);
    /* 0063ee87: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0063ee89: jmp 0x63ee79 */ goto L_0063ee79;
}

void f_0063ee8c(void) /* sub_63EE8C */
{
    FN_ENTER(0x0063ee8c);
    /* 0063ee8c: mov ecx, dword ptr [0xa8f240] */ r_ecx = R32((u32)(0xa8f240u));
    /* 0063ee92: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063ee94: je 0x63eea8 */ if (fZ) goto L_0063eea8;
L_0063ee96:; BB(0x0063ee96);
    /* 0063ee96: je 0x63ee9e */ if (fZ) goto L_0063ee9e;
L_0063ee98:; BB(0x0063ee98);
    /* 0063ee98: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0063ee9a: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0063ee9c: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x63ee9eu); call_ind(t); }
L_0063ee9e:; BB(0x0063ee9e);
    /* 0063ee9e: mov dword ptr [0xa8f240], 0 */ W32((u32)(0xa8f240u), 0x0u);
L_0063eea8:; BB(0x0063eea8);
    /* 0063eea8: mov ecx, dword ptr [0xa8f250] */ r_ecx = R32((u32)(0xa8f250u));
    /* 0063eeae: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063eeb0: je 0x63eecd */ if (fZ) goto L_0063eecd;
L_0063eeb2:; BB(0x0063eeb2);
    /* 0063eeb2: call 0x829de0 */ r_esp -= 4; W32(r_esp, 0x63eeb7u); f_00829de0();
    /* 0063eeb7: push dword ptr [0xa8f250] */ { u32 v = R32((u32)(0xa8f250u)); r_esp -= 4; W32(r_esp, v); }
    /* 0063eebd: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x63eec2u); f_0082e960();
    /* 0063eec2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063eec3: mov dword ptr [0xa8f250], 0 */ W32((u32)(0xa8f250u), 0x0u);
L_0063eecd:; BB(0x0063eecd);
    /* 0063eecd: mov ecx, dword ptr [0xa8f254] */ r_ecx = R32((u32)(0xa8f254u));
    /* 0063eed3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0063eed5: je 0x63eeea */ if (fZ) goto L_0063eeea;
L_0063eed7:; BB(0x0063eed7);
    /* 0063eed7: je 0x63eee0 */ if (fZ) goto L_0063eee0;
L_0063eed9:; BB(0x0063eed9);
    /* 0063eed9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0063eedb: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x63eee0u); f_004066a8();
L_0063eee0:; BB(0x0063eee0);
    /* 0063eee0: mov dword ptr [0xa8f254], 0 */ W32((u32)(0xa8f254u), 0x0u);
L_0063eeea:; BB(0x0063eeea);
    /* 0063eeea: ret  */ FN_RET(0x0063ee8c); r_esp += 4; return;
}

void f_0063eeec(void) /* sub_63EEEC */
{
    FN_ENTER(0x0063eeec);
    /* 0063eeec: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063eeed: mov ebp, esp */ r_ebp = r_esp;
    /* 0063eeef: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063eef1: push 0x8e4ee8 */ { u32 v = 0x8e4ee8u; r_esp -= 4; W32(r_esp, v); }
    /* 0063eef6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0063eefc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063eefd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0063ef04: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0063ef07: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0063ef0a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0063ef0d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0063ef10: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0063ef13: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 0063ef18: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0063ef1f: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x63ef24u); f_008581c5();
    /* 0063ef24: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063ef25: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0063ef28: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063ef2a: je 0x63eff1 */ if (fZ) goto L_0063eff1;
L_0063ef30:; BB(0x0063ef30);
    /* 0063ef30: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0063ef37: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0063ef3e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0063ef41: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0063ef43: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063ef44: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063ef45: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063ef46: push 0x9c6af0 */ { u32 v = 0x9c6af0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063ef4b: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0063ef4d: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x63ef52u); f_005b7a84();
    /* 0063ef52: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0063ef55: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0063ef5c:; BB(0x0063ef5c);
    /* 0063ef5c: mov dword ptr [0xa8f254], eax */ W32((u32)(0xa8f254u), r_eax);
    /* 0063ef61: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0063ef68: push 0x9345cc */ { u32 v = 0x9345ccu; r_esp -= 4; W32(r_esp, v); }
    /* 0063ef6d: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x63ef72u); f_008009dc();
    /* 0063ef72: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063ef73: mov ecx, dword ptr [0xa8f254] */ r_ecx = R32((u32)(0xa8f254u));
    /* 0063ef79: mov dword ptr [0xa8f250], eax */ W32((u32)(0xa8f250u), r_eax);
    /* 0063ef7e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063ef80: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x63ef85u); f_005b8610();
    /* 0063ef85: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0063ef87: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063ef88: call 0x78e9b0 */ r_esp -= 4; W32(r_esp, 0x63ef8du); f_0078e9b0();
    /* 0063ef8d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063ef90: mov dword ptr [0xa8f248], 0 */ W32((u32)(0xa8f248u), 0x0u);
    /* 0063ef9a: mov dword ptr [0xa8f24c], eax */ W32((u32)(0xa8f24cu), r_eax);
    /* 0063ef9f: mov eax, dword ptr [0xa8f250] */ r_eax = R32((u32)(0xa8f250u));
    /* 0063efa4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063efa6: je 0x63efe5 */ if (fZ) goto L_0063efe5;
L_0063efa8:; BB(0x0063efa8);
    /* 0063efa8: mov dword ptr [0xa8f244], 0 */ W32((u32)(0xa8f244u), 0x0u);
L_0063efb2:; BB(0x0063efb2);
    /* 0063efb2: push dword ptr [0xa8f244] */ { u32 v = R32((u32)(0xa8f244u)); r_esp -= 4; W32(r_esp, v); }
    /* 0063efb8: push dword ptr [0xa8f24c] */ { u32 v = R32((u32)(0xa8f24cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0063efbe: mov dword ptr [0xa8f240], 0 */ W32((u32)(0xa8f240u), 0x0u);
    /* 0063efc8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0063efca: call 0x66f3d4 */ r_esp -= 4; W32(r_esp, 0x63efcfu); f_0066f3d4();
    /* 0063efcf: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0063efd2: mov dword ptr [0xa8f240], eax */ W32((u32)(0xa8f240u), r_eax);
    /* 0063efd7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063efda: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0063efe1: mov esp, ebp */ r_esp = r_ebp;
    /* 0063efe3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063efe4: ret  */ FN_RET(0x0063eeec); r_esp += 4; return;
L_0063efe5:; BB(0x0063efe5);
    /* 0063efe5: mov dword ptr [0xa8f244], 0xffffffff */ W32((u32)(0xa8f244u), 0xffffffffu);
    /* 0063efef: jmp 0x63efb2 */ goto L_0063efb2;
L_0063eff1:; BB(0x0063eff1);
    /* 0063eff1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0063eff3: jmp 0x63ef5c */ goto L_0063ef5c;
}

void f_0063eff8(void) /* sub_63EFF8 */
{
    FN_ENTER(0x0063eff8);
    /* 0063eff8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0063eff9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0063effb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0063effd: call 0x63ebbc */ r_esp -= 4; W32(r_esp, 0x63f002u); f_0063ebbc();
    /* 0063f002: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0063f006: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0063f008: jne 0x63f00e */ if (!fZ) goto L_0063f00e;
L_0063f00a:; BB(0x0063f00a);
    /* 0063f00a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0063f00b: ret 4 */ FN_RET(0x0063eff8); r_esp += 8; return;
L_0063f00e:; BB(0x0063f00e);
    /* 0063f00e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0063f00f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x63f014u); f_005c2f74();
    /* 0063f014: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063f015: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0063f016: ret 4 */ FN_RET(0x0063eff8); r_esp += 8; return;
}

