#include "protos.h"

void f_005b9008(void) /* sub_5B9008 */
{
    FN_ENTER(0x005b9008);
    /* 005b9008: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 005b900c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005b900d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005b900e: mov ecx, eax */ r_ecx = r_eax;
    /* 005b9010: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005b9012: je 0x5b904f */ if (fZ) goto L_005b904f;
L_005b9014:; BB(0x005b9014);
    /* 005b9014: mov edx, dword ptr [0xa74a58] */ r_edx = R32((u32)(0xa74a58u));
    /* 005b901a: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b901d: je 0x5b9080 */ if (fZ) goto L_005b9080;
L_005b901f:; BB(0x005b901f);
    /* 005b901f: mov edi, 0xa74a38 */ r_edi = 0xa74a38u;
    /* 005b9024: mov esi, ecx */ r_esi = r_ecx;
L_005b9026:; BB(0x005b9026);
    /* 005b9026: mov dl, byte ptr [edi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 005b9028: cmp dl, byte ptr [esi] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 005b902a: jne 0x5b9046 */ if (!fZ) goto L_005b9046;
L_005b902c:; BB(0x005b902c);
    /* 005b902c: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 005b902e: je 0x5b9042 */ if (fZ) goto L_005b9042;
L_005b9030:; BB(0x005b9030);
    /* 005b9030: mov dl, byte ptr [edi + 1] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi+0x1u))) & 0xffu);
    /* 005b9033: cmp dl, byte ptr [esi + 1] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi+0x1u)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 005b9036: jne 0x5b9046 */ if (!fZ) goto L_005b9046;
L_005b9038:; BB(0x005b9038);
    /* 005b9038: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005b903b: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005b903e: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 005b9040: jne 0x5b9026 */ if (!fZ) goto L_005b9026;
L_005b9042:; BB(0x005b9042);
    /* 005b9042: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005b9044: jmp 0x5b904b */ goto L_005b904b;
L_005b9046:; BB(0x005b9046);
    /* 005b9046: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 005b9048: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_005b904b:; BB(0x005b904b);
    /* 005b904b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005b904d: jne 0x5b9068 */ if (!fZ) goto L_005b9068;
L_005b904f:; BB(0x005b904f);
    /* 005b904f: mov dword ptr [0xa74a58], 1 */ W32((u32)(0xa74a58u), 0x1u);
    /* 005b9059: mov eax, 1 */ r_eax = 0x1u;
    /* 005b905e: mov byte ptr [0xa74a38], 0 */ W8((u32)(0xa74a38u), 0x0u);
    /* 005b9065: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b9066: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005b9067: ret  */ FN_RET(0x005b9008); r_esp += 4; return;
L_005b9068:; BB(0x005b9068);
    /* 005b9068: push 0xa74a38 */ { u32 v = 0xa74a38u; r_esp -= 4; W32(r_esp, v); }
    /* 005b906d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b906e: push 0x92b56c */ { u32 v = 0x92b56cu; r_esp -= 4; W32(r_esp, v); }
    /* 005b9073: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x5b9078u); f_0061cdb0();
    /* 005b9078: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005b907a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b907d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b907e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005b907f: ret  */ FN_RET(0x005b9008); r_esp += 4; return;
L_005b9080:; BB(0x005b9080);
    /* 005b9080: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b9081: push 0x92b54c */ { u32 v = 0x92b54cu; r_esp -= 4; W32(r_esp, v); }
    /* 005b9086: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x5b908bu); f_0061cdb0();
    /* 005b908b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005b908d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b9090: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b9091: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005b9092: ret  */ FN_RET(0x005b9008); r_esp += 4; return;
}

void f_005b900c(void) /* sub_5B900C */
{
    FN_ENTER(0x005b900c);
    /* 005b900c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005b900d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005b900e: mov ecx, eax */ r_ecx = r_eax;
    /* 005b9010: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005b9012: je 0x5b904f */ if (fZ) goto L_005b904f;
L_005b9014:; BB(0x005b9014);
    /* 005b9014: mov edx, dword ptr [0xa74a58] */ r_edx = R32((u32)(0xa74a58u));
    /* 005b901a: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b901d: je 0x5b9080 */ if (fZ) goto L_005b9080;
L_005b901f:; BB(0x005b901f);
    /* 005b901f: mov edi, 0xa74a38 */ r_edi = 0xa74a38u;
    /* 005b9024: mov esi, ecx */ r_esi = r_ecx;
L_005b9026:; BB(0x005b9026);
    /* 005b9026: mov dl, byte ptr [edi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 005b9028: cmp dl, byte ptr [esi] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 005b902a: jne 0x5b9046 */ if (!fZ) goto L_005b9046;
L_005b902c:; BB(0x005b902c);
    /* 005b902c: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 005b902e: je 0x5b9042 */ if (fZ) goto L_005b9042;
L_005b9030:; BB(0x005b9030);
    /* 005b9030: mov dl, byte ptr [edi + 1] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi+0x1u))) & 0xffu);
    /* 005b9033: cmp dl, byte ptr [esi + 1] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi+0x1u)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 005b9036: jne 0x5b9046 */ if (!fZ) goto L_005b9046;
L_005b9038:; BB(0x005b9038);
    /* 005b9038: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005b903b: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005b903e: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 005b9040: jne 0x5b9026 */ if (!fZ) goto L_005b9026;
L_005b9042:; BB(0x005b9042);
    /* 005b9042: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005b9044: jmp 0x5b904b */ goto L_005b904b;
L_005b9046:; BB(0x005b9046);
    /* 005b9046: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 005b9048: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_005b904b:; BB(0x005b904b);
    /* 005b904b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005b904d: jne 0x5b9068 */ if (!fZ) goto L_005b9068;
L_005b904f:; BB(0x005b904f);
    /* 005b904f: mov dword ptr [0xa74a58], 1 */ W32((u32)(0xa74a58u), 0x1u);
    /* 005b9059: mov eax, 1 */ r_eax = 0x1u;
    /* 005b905e: mov byte ptr [0xa74a38], 0 */ W8((u32)(0xa74a38u), 0x0u);
    /* 005b9065: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b9066: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005b9067: ret  */ FN_RET(0x005b900c); r_esp += 4; return;
L_005b9068:; BB(0x005b9068);
    /* 005b9068: push 0xa74a38 */ { u32 v = 0xa74a38u; r_esp -= 4; W32(r_esp, v); }
    /* 005b906d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b906e: push 0x92b56c */ { u32 v = 0x92b56cu; r_esp -= 4; W32(r_esp, v); }
    /* 005b9073: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x5b9078u); f_0061cdb0();
    /* 005b9078: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005b907a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b907d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b907e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005b907f: ret  */ FN_RET(0x005b900c); r_esp += 4; return;
L_005b9080:; BB(0x005b9080);
    /* 005b9080: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b9081: push 0x92b54c */ { u32 v = 0x92b54cu; r_esp -= 4; W32(r_esp, v); }
    /* 005b9086: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x5b908bu); f_0061cdb0();
    /* 005b908b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005b908d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b9090: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b9091: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005b9092: ret  */ FN_RET(0x005b900c); r_esp += 4; return;
}

void f_005b9094(void) /* sub_5B9094 */
{
    FN_ENTER(0x005b9094);
    /* 005b9094: mov eax, dword ptr [0xa74a58] */ r_eax = R32((u32)(0xa74a58u));
    /* 005b9099: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b909b: je 0x5b90b6 */ if (fZ) goto L_005b90b6;
L_005b909d:; BB(0x005b909d);
    /* 005b909d: mov eax, dword ptr [0xa74a5c] */ r_eax = R32((u32)(0xa74a5cu));
    /* 005b90a2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005b90a4: je 0x5b90b6 */ if (fZ) goto L_005b90b6;
L_005b90a6:; BB(0x005b90a6);
    /* 005b90a6: mov eax, dword ptr [0xa74a60] */ r_eax = R32((u32)(0xa74a60u));
    /* 005b90ab: mov dword ptr [0xa74a5c], 0 */ W32((u32)(0xa74a5cu), 0x0u);
    /* 005b90b5: ret  */ FN_RET(0x005b9094); r_esp += 4; return;
L_005b90b6:; BB(0x005b90b6);
    /* 005b90b6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005b90b8: ret  */ FN_RET(0x005b9094); r_esp += 4; return;
}

void f_005b90bc(void) /* sub_5B90BC */
{
    FN_ENTER(0x005b90bc);
    /* 005b90bc: mov eax, dword ptr [0xa74a5c] */ r_eax = R32((u32)(0xa74a5cu));
    /* 005b90c1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005b90c3: jne 0x5b90cf */ if (!fZ) goto L_005b90cf;
L_005b90c5:; BB(0x005b90c5);
    /* 005b90c5: mov dword ptr [0xa74a5c], 1 */ W32((u32)(0xa74a5cu), 0x1u);
L_005b90cf:; BB(0x005b90cf);
    /* 005b90cf: ret  */ FN_RET(0x005b90bc); r_esp += 4; return;
}

void f_005b90d0(void) /* sub_5B90D0 */
{
    FN_ENTER(0x005b90d0);
    /* 005b90d0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005b90d1: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b90d4: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005b90d6: mov ecx, dword ptr [ebx] */ r_ecx = R32((u32)(r_ebx));
    /* 005b90d8: test ecx, 0x1000 */ {  u32 a = r_ecx; u32 b = 0x1000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b90de: jne 0x5b912e */ if (!fZ) goto L_005b912e;
L_005b90e0:; BB(0x005b90e0);
    /* 005b90e0: mov edx, dword ptr [ebx + 0x434] */ r_edx = R32((u32)(r_ebx+0x434u));
    /* 005b90e6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005b90e8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b90ea: je 0x5b9126 */ if (fZ) goto L_005b9126;
L_005b90ec:; BB(0x005b90ec);
    /* 005b90ec: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 005b90f0: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 005b90f3: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 005b90f6: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b90f8: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b90fa: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b90fc: mov edi, eax */ r_edi = r_eax;
    /* 005b90fe: mov esi, edx */ r_esi = r_edx;
L_005b9100:; BB(0x005b9100);
    /* 005b9100: mov ecx, dword ptr [ebx + 0x42c] */ r_ecx = R32((u32)(r_ebx+0x42cu));
    /* 005b9106: mov ecx, dword ptr [esi + ecx + 8] */ r_ecx = R32((u32)(r_esi+r_ecx+0x8u));
    /* 005b910a: call 0x834c58 */ r_esp -= 4; W32(r_esp, 0x5b910fu); f_00834c58();
    /* 005b910f: add esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005b9112: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005b9115: cmp edi, dword ptr [ebx + 0x434] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebx+0x434u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005b911b: jb 0x5b9100 */ if (fC) goto L_005b9100;
L_005b911d:; BB(0x005b911d);
    /* 005b911d: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 005b9121: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 005b9124: mov ecx, dword ptr [ebx] */ r_ecx = R32((u32)(r_ebx));
L_005b9126:; BB(0x005b9126);
    /* 005b9126: or ecx, 0x1000 */ {  u32 a = r_ecx; u32 b = 0x1000u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 005b912c: mov dword ptr [ebx], ecx */ W32((u32)(r_ebx), r_ecx);
L_005b912e:; BB(0x005b912e);
    /* 005b912e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b9131: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005b9132: ret  */ FN_RET(0x005b90d0); r_esp += 4; return;
}

void f_005b9134(void) /* sub_5B9134 */
{
    FN_ENTER(0x005b9134);
    /* 005b9134: push 0x4000 */ { u32 v = 0x4000u; r_esp -= 4; W32(r_esp, v); }
    /* 005b9139: call 0x82e940 */ r_esp -= 4; W32(r_esp, 0x5b913eu); f_0082e940();
    /* 005b913e: push 0x90000 */ { u32 v = 0x90000u; r_esp -= 4; W32(r_esp, v); }
    /* 005b9143: mov dword ptr [0xa74a30], eax */ W32((u32)(0xa74a30u), r_eax);
    /* 005b9148: call 0x82e940 */ r_esp -= 4; W32(r_esp, 0x5b914du); f_0082e940();
    /* 005b914d: mov byte ptr [0xa74a38], 0 */ W8((u32)(0xa74a38u), 0x0u);
    /* 005b9154: mov dword ptr [0xa74a60], eax */ W32((u32)(0xa74a60u), r_eax);
    /* 005b9159: mov eax, 1 */ r_eax = 0x1u;
    /* 005b915e: mov dword ptr [0xa74a58], eax */ W32((u32)(0xa74a58u), r_eax);
    /* 005b9163: mov dword ptr [0xa74a5c], eax */ W32((u32)(0xa74a5cu), r_eax);
    /* 005b9168: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b916b: ret  */ FN_RET(0x005b9134); r_esp += 4; return;
}

void f_005b916c(void) /* sub_5B916C */
{
    FN_ENTER(0x005b916c);
    /* 005b916c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005b916e: mov dword ptr [0xa74a6c], eax */ W32((u32)(0xa74a6cu), r_eax);
    /* 005b9173: mov dword ptr [ecx + 0x42c], eax */ W32((u32)(r_ecx+0x42cu), r_eax);
    /* 005b9179: mov dword ptr [ecx + 0x430], eax */ W32((u32)(r_ecx+0x430u), r_eax);
    /* 005b917f: mov dword ptr [ecx + 0x434], eax */ W32((u32)(r_ecx+0x434u), r_eax);
    /* 005b9185: mov dword ptr [ecx + 0x438], eax */ W32((u32)(r_ecx+0x438u), r_eax);
    /* 005b918b: mov dword ptr [ecx + 0x43c], eax */ W32((u32)(r_ecx+0x43cu), r_eax);
    /* 005b9191: mov dword ptr [ecx + 0xc], eax */ W32((u32)(r_ecx+0xcu), r_eax);
    /* 005b9194: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 005b9197: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 005b919a: mov dword ptr [ecx + 0x418], eax */ W32((u32)(r_ecx+0x418u), r_eax);
    /* 005b91a0: mov dword ptr [ecx + 0x428], eax */ W32((u32)(r_ecx+0x428u), r_eax);
    /* 005b91a6: ret  */ FN_RET(0x005b916c); r_esp += 4; return;
}

void f_005b91a8(void) /* sub_5B91A8 */
{
    FN_ENTER(0x005b91a8);
    /* 005b91a8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b91a9: mov ebp, esp */ r_ebp = r_esp;
    /* 005b91ab: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005b91ad: push 0x8d9228 */ { u32 v = 0x8d9228u; r_esp -= 4; W32(r_esp, v); }
    /* 005b91b2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005b91b8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b91b9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005b91c0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b91c3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005b91c6: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005b91c9: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005b91cc: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005b91cf: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005b91d2: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005b91d5: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005b91dc: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x5b91e1u); f_008171e8();
    /* 005b91e1: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b91e4: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005b91e6: jne 0x5b91f8 */ if (!fZ) goto L_005b91f8;
L_005b91e8:; BB(0x005b91e8);
    /* 005b91e8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b91eb: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005b91f2: mov esp, ebp */ r_esp = r_ebp;
    /* 005b91f4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b91f5: ret 4 */ FN_RET(0x005b91a8); r_esp += 8; return;
L_005b91f8:; BB(0x005b91f8);
    /* 005b91f8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005b91fb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b91fc: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5b9201u); f_005c2f74();
    /* 005b9201: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005b9202: jmp 0x5b91e8 */ goto L_005b91e8;
}

void f_005b9204(void) /* sub_5B9204 */
{
    FN_ENTER(0x005b9204);
    /* 005b9204: call 0x83adbc */ r_esp -= 4; W32(r_esp, 0x5b9209u); f_0083adbc();
    /* 005b9209: mov ecx, dword ptr [0xaca388] */ r_ecx = R32((u32)(0xaca388u));
    /* 005b920f: mov byte ptr [0xa74a88], 1 */ W8((u32)(0xa74a88u), 0x1u);
    /* 005b9216: call 0x817574 */ r_esp -= 4; W32(r_esp, 0x5b921bu); f_00817574();
    /* 005b921b: mov ecx, dword ptr [0xaca380] */ r_ecx = R32((u32)(0xaca380u));
    /* 005b9221: call 0x817574 */ r_esp -= 4; W32(r_esp, 0x5b9226u); f_00817574();
    /* 005b9226: mov ecx, dword ptr [0xaca344] */ r_ecx = R32((u32)(0xaca344u));
    /* 005b922c: call 0x817574 */ r_esp -= 4; W32(r_esp, 0x5b9231u); f_00817574();
    /* 005b9231: mov ecx, dword ptr [0xaca334] */ r_ecx = R32((u32)(0xaca334u));
    /* 005b9237: call 0x817574 */ r_esp -= 4; W32(r_esp, 0x5b923cu); f_00817574();
    /* 005b923c: mov ecx, dword ptr [0xa43694] */ r_ecx = R32((u32)(0xa43694u));
    /* 005b9242: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b9244: je 0x5b925a */ if (fZ) goto L_005b925a;
L_005b9246:; BB(0x005b9246);
    /* 005b9246: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x5b924bu); f_008173b4();
    /* 005b924b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b924d: je 0x5b925a */ if (fZ) goto L_005b925a;
L_005b924f:; BB(0x005b924f);
    /* 005b924f: mov ecx, dword ptr [0xaca324] */ r_ecx = R32((u32)(0xaca324u));
    /* 005b9255: call 0x817574 */ r_esp -= 4; W32(r_esp, 0x5b925au); f_00817574();
L_005b925a:; BB(0x005b925a);
    /* 005b925a: call 0x7a9380 */ r_esp -= 4; W32(r_esp, 0x5b925fu); f_007a9380();
    /* 005b925f: mov ecx, dword ptr [0xaca388] */ r_ecx = R32((u32)(0xaca388u));
    /* 005b9265: call 0x818f50 */ r_esp -= 4; W32(r_esp, 0x5b926au); f_00818f50();
    /* 005b926a: call 0x82f500 */ r_esp -= 4; W32(r_esp, 0x5b926fu); f_0082f500();
    /* 005b926f: mov ecx, dword ptr [0xaca344] */ r_ecx = R32((u32)(0xaca344u));
    /* 005b9275: call 0x818f50 */ r_esp -= 4; W32(r_esp, 0x5b927au); f_00818f50();
    /* 005b927a: mov ecx, dword ptr [0xaca334] */ r_ecx = R32((u32)(0xaca334u));
    /* 005b9280: call 0x818f50 */ r_esp -= 4; W32(r_esp, 0x5b9285u); f_00818f50();
    /* 005b9285: call 0x82f4d8 */ r_esp -= 4; W32(r_esp, 0x5b928au); f_0082f4d8();
    /* 005b928a: mov ecx, dword ptr [0xa43694] */ r_ecx = R32((u32)(0xa43694u));
    /* 005b9290: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b9292: je 0x5b92a8 */ if (fZ) goto L_005b92a8;
L_005b9294:; BB(0x005b9294);
    /* 005b9294: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x5b9299u); f_008173b4();
    /* 005b9299: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b929b: je 0x5b92a8 */ if (fZ) goto L_005b92a8;
L_005b929d:; BB(0x005b929d);
    /* 005b929d: mov ecx, dword ptr [0xaca324] */ r_ecx = R32((u32)(0xaca324u));
    /* 005b92a3: call 0x818f50 */ r_esp -= 4; W32(r_esp, 0x5b92a8u); f_00818f50();
L_005b92a8:; BB(0x005b92a8);
    /* 005b92a8: mov ecx, dword ptr [0xaca388] */ r_ecx = R32((u32)(0xaca388u));
    /* 005b92ae: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x5b92b3u); f_0061cdb0();
    /* 005b92b3: mov ecx, dword ptr [0xaca388] */ r_ecx = R32((u32)(0xaca388u));
    /* 005b92b9: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x5b92beu); f_0061cdb0();
    /* 005b92be: call 0x7a9318 */ r_esp -= 4; W32(r_esp, 0x5b92c3u); f_007a9318();
    /* 005b92c3: call 0x7bfedc */ r_esp -= 4; W32(r_esp, 0x5b92c8u); f_007bfedc();
    /* 005b92c8: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 005b92cb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b92cd: je 0x5b92d4 */ if (fZ) goto L_005b92d4;
L_005b92cf:; BB(0x005b92cf);
    /* 005b92cf: call 0x5b92e0 */ r_esp -= 4; W32(r_esp, 0x5b92d4u); f_005b92e0();
L_005b92d4:; BB(0x005b92d4);
    /* 005b92d4: call 0x78ddb8 */ r_esp -= 4; W32(r_esp, 0x5b92d9u); f_0078ddb8();
    /* 005b92d9: call 0x80030c */ r_esp -= 4; W32(r_esp, 0x5b92deu); f_0080030c();
    /* 005b92de: ret  */ FN_RET(0x005b9204); r_esp += 4; return;
}

void f_005b92e0(void) /* sub_5B92E0 */
{
    FN_ENTER(0x005b92e0);
    /* 005b92e0: mov eax, dword ptr [0xa74a8c] */ r_eax = R32((u32)(0xa74a8cu));
    /* 005b92e5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005b92e7: je 0x5b92f0 */ if (fZ) goto L_005b92f0;
L_005b92e9:; BB(0x005b92e9);
    /* 005b92e9: mov byte ptr [0xa74a90], 1 */ W8((u32)(0xa74a90u), 0x1u);
L_005b92f0:; BB(0x005b92f0);
    /* 005b92f0: ret  */ FN_RET(0x005b92e0); r_esp += 4; return;
}

void f_005b92f4(void) /* sub_5B92F4 */
{
    FN_ENTER(0x005b92f4);
    /* 005b92f4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b92f5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005b92f6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b92f8: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b92fc: call 0x708238 */ r_esp -= 4; W32(r_esp, 0x5b9301u); f_00708238();
    /* 005b9301: mov ebx, eax */ r_ebx = r_eax;
    /* 005b9303: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b9306: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005b9308: je 0x5b9320 */ if (fZ) goto L_005b9320;
L_005b930a:; BB(0x005b930a);
    /* 005b930a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005b930b: call 0x86dc7c */ r_esp -= 4; W32(r_esp, 0x5b9310u); f_0086dc7c();
    /* 005b9310: mov ebp, eax */ r_ebp = r_eax;
    /* 005b9312: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005b9313: call 0x86db40 */ r_esp -= 4; W32(r_esp, 0x5b9318u); f_0086db40();
    /* 005b9318: mov eax, ebp */ r_eax = r_ebp;
    /* 005b931a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b931d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005b931e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b931f: ret  */ FN_RET(0x005b92f4); r_esp += 4; return;
L_005b9320:; BB(0x005b9320);
    /* 005b9320: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 005b9325: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005b9326: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b9327: ret  */ FN_RET(0x005b92f4); r_esp += 4; return;
}

void f_005b9328(void) /* sub_5B9328 */
{
    FN_ENTER(0x005b9328);
    /* 005b9328: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b932c: call 0x5bbe24 */ r_esp -= 4; W32(r_esp, 0x5b9331u); f_005bbe24();
    /* 005b9331: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005b9332: ret  */ FN_RET(0x005b9328); r_esp += 4; return;
}

void f_005b9334(void) /* sub_5B9334 */
{
    FN_ENTER(0x005b9334);
    /* 005b9334: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 005b9338: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 005b933c: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 005b9340: mov dword ptr [0xa74a94], eax */ W32((u32)(0xa74a94u), r_eax);
    /* 005b9345: mov dword ptr [0xa74a98], edx */ W32((u32)(0xa74a98u), r_edx);
    /* 005b934b: mov dword ptr [0xa74a9c], ecx */ W32((u32)(0xa74a9cu), r_ecx);
    /* 005b9351: ret  */ FN_RET(0x005b9334); r_esp += 4; return;
}

void f_005b9354(void) /* sub_5B9354 */
{
    FN_ENTER(0x005b9354);
    /* 005b9354: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005b9356: mov dword ptr [0xa74a94], eax */ W32((u32)(0xa74a94u), r_eax);
    /* 005b935b: mov dword ptr [0xa74a98], eax */ W32((u32)(0xa74a98u), r_eax);
    /* 005b9360: mov dword ptr [0xa74a9c], eax */ W32((u32)(0xa74a9cu), r_eax);
    /* 005b9365: ret  */ FN_RET(0x005b9354); r_esp += 4; return;
}

void f_005b9368(void) /* sub_5B9368 */
{
    FN_ENTER(0x005b9368);
    /* 005b9368: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 005b936c: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b9370: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b9371: mov dword ptr [0xa74b04], eax */ W32((u32)(0xa74b04u), r_eax);
    /* 005b9376: call 0x5bb53c */ r_esp -= 4; W32(r_esp, 0x5b937bu); f_005bb53c();
    /* 005b937b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b937e: ret  */ FN_RET(0x005b9368); r_esp += 4; return;
}

void f_005b9380(void) /* sub_5B9380 */
{
    FN_ENTER(0x005b9380);
    /* 005b9380: mov ecx, 0xa74b08 */ r_ecx = 0xa74b08u;
    /* 005b9385: call 0x817284 */ r_esp -= 4; W32(r_esp, 0x5b938au); f_00817284();
    /* 005b938a: ret  */ FN_RET(0x005b9380); r_esp += 4; return;
}

void f_005b938c(void) /* sub_5B938C */
{
    FN_ENTER(0x005b938c);
    /* 005b938c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b938d: mov ebp, esp */ r_ebp = r_esp;
    /* 005b938f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005b9391: push 0x8d9250 */ { u32 v = 0x8d9250u; r_esp -= 4; W32(r_esp, v); }
    /* 005b9396: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005b939c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b939d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005b93a4: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b93a7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005b93aa: mov dword ptr [ebp - 0x2c], edi */ W32((u32)(r_ebp+0xffffffd4u), r_edi);
    /* 005b93ad: mov dword ptr [ebp - 0x28], esi */ W32((u32)(r_ebp+0xffffffd8u), r_esi);
    /* 005b93b0: mov dword ptr [ebp - 0x24], ebx */ W32((u32)(r_ebp+0xffffffdcu), r_ebx);
    /* 005b93b3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b93b6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b93b7: call 0x5bbe24 */ r_esp -= 4; W32(r_esp, 0x5b93bcu); f_005bbe24();
    /* 005b93bc: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005b93bf: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b93c2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005b93c4: jle 0x5b94ce */ if ((fZ||fS!=fO)) goto L_005b94ce;
L_005b93ca:; BB(0x005b93ca);
    /* 005b93ca: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 005b93d1: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 005b93d3: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5b93d8u); f_005caba4();
    /* 005b93d8: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005b93db: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b93de: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 005b93e1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b93e3: je 0x5b952e */ if (fZ) goto L_005b952e;
L_005b93e9:; BB(0x005b93e9);
    /* 005b93e9: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 005b93f0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005b93f7: push 0xa74b08 */ { u32 v = 0xa74b08u; r_esp -= 4; W32(r_esp, v); }
    /* 005b93fc: mov ecx, eax */ r_ecx = r_eax;
    /* 005b93fe: call 0x5b9538 */ r_esp -= 4; W32(r_esp, 0x5b9403u); f_005b9538();
    /* 005b9403: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_005b940a:; BB(0x005b940a);
    /* 005b940a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005b9411: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 005b9414: lea ebx, [ebx + 0x28] */ r_ebx = (u32)(r_ebx+0x28u);
    /* 005b9417: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005b9419: mov dword ptr [ebx], eax */ W32((u32)(r_ebx), r_eax);
    /* 005b941b: mov dword ptr [ebx + 4], eax */ W32((u32)(r_ebx+0x4u), r_eax);
    /* 005b941e: mov dword ptr [ebx + 8], eax */ W32((u32)(r_ebx+0x8u), r_eax);
    /* 005b9421: mov dword ptr [ebx + 0xc], eax */ W32((u32)(r_ebx+0xcu), r_eax);
    /* 005b9424: mov byte ptr [ebx + 0x10], al */ W8((u32)(r_ebx+0x10u), (u8)r_eax);
    /* 005b9427: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b942a: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 005b942c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b942d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005b942e: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x5b9433u); f_00858900();
    /* 005b9433: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b9436: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005b9439: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b943c: mov dword ptr [edx + 4], ebx */ W32((u32)(r_edx+0x4u), r_ebx);
    /* 005b943f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005b9440: call 0x5b9558 */ r_esp -= 4; W32(r_esp, 0x5b9445u); f_005b9558();
    /* 005b9445: mov ecx, eax */ r_ecx = r_eax;
    /* 005b9447: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b944a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005b944d: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 005b9450: mov dword ptr [edx + 0x1c], ecx */ W32((u32)(r_edx+0x1cu), r_ecx);
    /* 005b9453: mov dword ptr [edx + 0x20], esi */ W32((u32)(r_edx+0x20u), r_esi);
    /* 005b9456: add esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005b9458: mov edx, dword ptr [esi - 0x20] */ r_edx = R32((u32)(r_esi+0xffffffe0u));
    /* 005b945b: mov edi, dword ptr [esi - 0x1c] */ r_edi = R32((u32)(r_esi+0xffffffe4u));
    /* 005b945e: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005b9461: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005b9463: mov dword ptr [ebp - 0x18], edi */ W32((u32)(r_ebp+0xffffffe8u), r_edi);
    /* 005b9466: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b9468: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005b946a: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 005b946c: jbe 0x5b9509 */ if ((fC||fZ)) goto L_005b9509;
L_005b9472:; BB(0x005b9472);
    /* 005b9472: mov esi, edi */ r_esi = r_edi;
    /* 005b9474: cmp esi, 5 */ {  u32 a = r_esi; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005b9477: jb 0x5b94e3 */ if (fC) goto L_005b94e3;
L_005b9479:; BB(0x005b9479);
    /* 005b9479: lea edi, [esi - 5] */ r_edi = (u32)(r_esi+0xfffffffbu);
    /* 005b947c: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
L_005b947f:; BB(0x005b947f);
    /* 005b947f: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 005b9482: movzx edi, word ptr [edx] */ r_edi = (u32)R16((u32)(r_edx));
    /* 005b9485: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005b9487: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005b9489: add edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005b948b: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b948e: add dword ptr [edi], ecx */ { u32 ad = (u32)(r_edi);  u32 a = R32(ad); u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 005b9490: movzx ebx, word ptr [edx + 2] */ r_ebx = (u32)R16((u32)(r_edx+0x2u));
    /* 005b9494: mov ecx, dword ptr [esi + 0x1c] */ r_ecx = R32((u32)(r_esi+0x1cu));
    /* 005b9497: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005b9499: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005b949b: add ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005b949d: add dword ptr [ebx], ecx */ { u32 ad = (u32)(r_ebx);  u32 a = R32(ad); u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 005b949f: movzx ecx, word ptr [edx + 4] */ r_ecx = (u32)R16((u32)(r_edx+0x4u));
    /* 005b94a3: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005b94a5: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005b94a7: add ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005b94a9: mov ebx, dword ptr [esi + 0x1c] */ r_ebx = R32((u32)(r_esi+0x1cu));
    /* 005b94ac: add dword ptr [ecx], ebx */ { u32 ad = (u32)(r_ecx);  u32 a = R32(ad); u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 005b94ae: movzx ebx, word ptr [edx + 6] */ r_ebx = (u32)R16((u32)(r_edx+0x6u));
    /* 005b94b2: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005b94b4: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005b94b6: add ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005b94b8: mov ecx, dword ptr [esi + 0x1c] */ r_ecx = R32((u32)(r_esi+0x1cu));
    /* 005b94bb: add dword ptr [ebx], ecx */ { u32 ad = (u32)(r_ebx);  u32 a = R32(ad); u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 005b94bd: add edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b94c0: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005b94c3: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005b94c5: ja 0x5b94de */ if ((!fC&&!fZ)) goto L_005b94de;
L_005b94c7:; BB(0x005b94c7);
    /* 005b94c7: mov ecx, esi */ r_ecx = r_esi;
    /* 005b94c9: mov ecx, dword ptr [ecx + 0x1c] */ r_ecx = R32((u32)(r_ecx+0x1cu));
    /* 005b94cc: jmp 0x5b947f */ goto L_005b947f;
L_005b94ce:; BB(0x005b94ce);
    /* 005b94ce: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005b94d0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b94d3: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005b94da: mov esp, ebp */ r_esp = r_ebp;
    /* 005b94dc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b94dd: ret  */ FN_RET(0x005b938c); r_esp += 4; return;
L_005b94de:; BB(0x005b94de);
    /* 005b94de: mov ecx, esi */ r_ecx = r_esi;
    /* 005b94e0: mov ecx, dword ptr [ecx + 0x1c] */ r_ecx = R32((u32)(r_ecx+0x1cu));
L_005b94e3:; BB(0x005b94e3);
    /* 005b94e3: movzx esi, word ptr [edx] */ r_esi = (u32)R16((u32)(r_edx));
    /* 005b94e6: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005b94e8: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005b94ea: add ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005b94ec: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b94ef: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b94f2: add dword ptr [ebx], ecx */ { u32 ad = (u32)(r_ebx);  u32 a = R32(ad); u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 005b94f4: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005b94f7: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005b94f9: jae 0x5b9503 */ if (!fC) goto L_005b9503;
L_005b94fb:; BB(0x005b94fb);
    /* 005b94fb: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005b94fe: mov ecx, dword ptr [ecx + 0x1c] */ r_ecx = R32((u32)(r_ecx+0x1cu));
    /* 005b9501: jmp 0x5b94e3 */ goto L_005b94e3;
L_005b9503:; BB(0x005b9503);
    /* 005b9503: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005b9506: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
L_005b9509:; BB(0x005b9509);
    /* 005b9509: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005b950c: add ecx, dword ptr [edx - 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b950f: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 005b9512: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 005b9515: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005b9518: mov dword ptr [edi + 0x24], ecx */ W32((u32)(r_edi+0x24u), r_ecx);
    /* 005b951b: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 005b951e: mov eax, ecx */ r_eax = r_ecx;
    /* 005b9520: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b9523: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005b952a: mov esp, ebp */ r_esp = r_ebp;
    /* 005b952c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b952d: ret  */ FN_RET(0x005b938c); r_esp += 4; return;
L_005b952e:; BB(0x005b952e);
    /* 005b952e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005b9530: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005b9533: jmp 0x5b940a */ goto L_005b940a;
}

void f_005b9538(void) /* sub_5B9538 */
{
    FN_ENTER(0x005b9538);
    /* 005b9538: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b9539: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005b953b: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b953f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b9541: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x5b9546u); f_008193cc();
    /* 005b9546: mov dword ptr [ebp], 0xb0b988 */ W32((u32)(r_ebp), 0xb0b988u);
    /* 005b954d: mov eax, ebp */ r_eax = r_ebp;
    /* 005b954f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b9550: ret 4 */ FN_RET(0x005b9538); r_esp += 8; return;
}

void f_005b9554(void) /* sub_5B9554 */
{
    FN_ENTER(0x005b9554);
    /* 005b9554: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 005b9558: mov dword ptr [0xa74b04], eax */ W32((u32)(0xa74b04u), r_eax);
    /* 005b955d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b955e: call 0x5bbb4c */ r_esp -= 4; W32(r_esp, 0x5b9563u); f_005bbb4c();
    /* 005b9563: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005b9564: ret  */ FN_RET(0x005b9554); r_esp += 4; return;
}

void f_005b9558(void) /* sub_5B9558 */
{
    FN_ENTER(0x005b9558);
    /* 005b9558: mov dword ptr [0xa74b04], eax */ W32((u32)(0xa74b04u), r_eax);
    /* 005b955d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b955e: call 0x5bbb4c */ r_esp -= 4; W32(r_esp, 0x5b9563u); f_005bbb4c();
    /* 005b9563: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005b9564: ret  */ FN_RET(0x005b9558); r_esp += 4; return;
}

void f_005b9568(void) /* sub_5B9568 */
{
    FN_ENTER(0x005b9568);
    /* 005b9568: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005b9569: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005b956a: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 005b956e: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005b9571: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b9572: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005b9573: call 0x5b9780 */ r_esp -= 4; W32(r_esp, 0x5b9578u); f_005b9780();
    /* 005b9578: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b957c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b957d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005b957e: call 0x5b9588 */ r_esp -= 4; W32(r_esp, 0x5b9583u); f_005b9588();
    /* 005b9583: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b9586: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005b9587: ret  */ FN_RET(0x005b9568); r_esp += 4; return;
}

void f_005b9588(void) /* sub_5B9588 */
{
    FN_ENTER(0x005b9588);
    /* 005b9588: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b9589: mov ebp, esp */ r_ebp = r_esp;
    /* 005b958b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005b958d: push 0x8d9278 */ { u32 v = 0x8d9278u; r_esp -= 4; W32(r_esp, v); }
    /* 005b9592: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005b9598: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b9599: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005b95a0: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b95a3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005b95a6: mov dword ptr [ebp - 0x30], edi */ W32((u32)(r_ebp+0xffffffd0u), r_edi);
    /* 005b95a9: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
    /* 005b95ac: mov dword ptr [ebp - 0x28], ebx */ W32((u32)(r_ebp+0xffffffd8u), r_ebx);
    /* 005b95af: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005b95b2: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 005b95b9: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005b95bc: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 005b95be: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5b95c3u); f_005caba4();
    /* 005b95c3: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005b95c6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b95c9: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 005b95cc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b95ce: je 0x5b9709 */ if (fZ) goto L_005b9709;
L_005b95d4:; BB(0x005b95d4);
    /* 005b95d4: mov dword ptr [ebp - 0x38], 1 */ W32((u32)(r_ebp+0xffffffc8u), 0x1u);
    /* 005b95db: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005b95e2: push 0xa74b08 */ { u32 v = 0xa74b08u; r_esp -= 4; W32(r_esp, v); }
    /* 005b95e7: mov ecx, eax */ r_ecx = r_eax;
    /* 005b95e9: call 0x5b9538 */ r_esp -= 4; W32(r_esp, 0x5b95eeu); f_005b9538();
    /* 005b95ee: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_005b95f5:; BB(0x005b95f5);
    /* 005b95f5: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005b95fc: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 005b95ff: lea ebx, [esi + 0x28] */ r_ebx = (u32)(r_esi+0x28u);
    /* 005b9602: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005b9604: mov dword ptr [ebx], eax */ W32((u32)(r_ebx), r_eax);
    /* 005b9606: mov dword ptr [ebx + 4], eax */ W32((u32)(r_ebx+0x4u), r_eax);
    /* 005b9609: mov dword ptr [ebx + 8], eax */ W32((u32)(r_ebx+0x8u), r_eax);
    /* 005b960c: mov dword ptr [ebx + 0xc], eax */ W32((u32)(r_ebx+0xcu), r_eax);
    /* 005b960f: mov byte ptr [ebx + 0x10], al */ W8((u32)(r_ebx+0x10u), (u8)r_eax);
    /* 005b9612: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 005b9614: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b9617: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005b9618: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x5b961du); f_00858900();
    /* 005b961d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b9620: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005b9623: mov dword ptr [esi + 4], ebx */ W32((u32)(r_esi+0x4u), r_ebx);
    /* 005b9626: mov ebx, dword ptr [ebp + 0x10] */ r_ebx = R32((u32)(r_ebp+0x10u));
    /* 005b9629: mov dword ptr [esi + 0x1c], edx */ W32((u32)(r_esi+0x1cu), r_edx);
    /* 005b962c: mov dword ptr [esi + 0x20], ebx */ W32((u32)(r_esi+0x20u), r_ebx);
    /* 005b962f: lea eax, [ebx + edx] */ r_eax = (u32)(r_ebx+r_edx);
    /* 005b9632: mov esi, dword ptr [eax - 0x20] */ r_esi = R32((u32)(r_eax+0xffffffe0u));
    /* 005b9635: mov ecx, dword ptr [eax - 0x1c] */ r_ecx = R32((u32)(r_eax+0xffffffe4u));
    /* 005b9638: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005b963b: add esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005b963d: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 005b9640: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 005b9642: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 005b9644: jbe 0x5b96e3 */ if ((fC||fZ)) goto L_005b96e3;
L_005b964a:; BB(0x005b964a);
    /* 005b964a: mov eax, ecx */ r_eax = r_ecx;
    /* 005b964c: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005b964f: jb 0x5b96b4 */ if (fC) goto L_005b96b4;
L_005b9651:; BB(0x005b9651);
    /* 005b9651: lea ecx, [eax - 5] */ r_ecx = (u32)(r_eax+0xfffffffbu);
    /* 005b9654: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
L_005b9657:; BB(0x005b9657);
    /* 005b9657: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 005b965a: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005b965d: movzx eax, word ptr [esi] */ r_eax = (u32)R16((u32)(r_esi));
    /* 005b9660: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b9662: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b9664: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b9666: add dword ptr [eax], edi */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 005b9668: movzx edx, word ptr [esi + 2] */ r_edx = (u32)R16((u32)(r_esi+0x2u));
    /* 005b966c: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b966e: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b9670: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b9672: mov eax, dword ptr [ecx + 0x1c] */ r_eax = R32((u32)(r_ecx+0x1cu));
    /* 005b9675: add dword ptr [edx], eax */ { u32 ad = (u32)(r_edx);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 005b9677: movzx eax, word ptr [esi + 4] */ r_eax = (u32)R16((u32)(r_esi+0x4u));
    /* 005b967b: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b967d: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b967f: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b9681: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 005b9684: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005b9687: add dword ptr [eax], edx */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 005b9689: movzx edx, word ptr [esi + 6] */ r_edx = (u32)R16((u32)(r_esi+0x6u));
    /* 005b968d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b968f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b9691: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b9693: mov eax, dword ptr [ecx + 0x1c] */ r_eax = R32((u32)(r_ecx+0x1cu));
    /* 005b9696: add dword ptr [edx], eax */ { u32 ad = (u32)(r_edx);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 005b9698: add esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005b969b: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005b969e: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005b96a0: ja 0x5b96ac */ if ((!fC&&!fZ)) goto L_005b96ac;
L_005b96a2:; BB(0x005b96a2);
    /* 005b96a2: mov eax, ecx */ r_eax = r_ecx;
    /* 005b96a4: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 005b96a7: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005b96aa: jmp 0x5b9657 */ goto L_005b9657;
L_005b96ac:; BB(0x005b96ac);
    /* 005b96ac: mov eax, ecx */ r_eax = r_ecx;
    /* 005b96ae: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 005b96b1: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
L_005b96b4:; BB(0x005b96b4);
    /* 005b96b4: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005b96b7: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 005b96ba: movzx eax, word ptr [esi] */ r_eax = (u32)R16((u32)(r_esi));
    /* 005b96bd: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b96bf: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b96c1: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b96c3: add dword ptr [edx], ecx */ { u32 ad = (u32)(r_edx);  u32 a = R32(ad); u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 005b96c5: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005b96c8: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005b96cb: cmp ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005b96cd: jae 0x5b96da */ if (!fC) goto L_005b96da;
L_005b96cf:; BB(0x005b96cf);
    /* 005b96cf: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005b96d2: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 005b96d5: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005b96d8: jmp 0x5b96b4 */ goto L_005b96b4;
L_005b96da:; BB(0x005b96da);
    /* 005b96da: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005b96dd: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 005b96e0: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
L_005b96e3:; BB(0x005b96e3);
    /* 005b96e3: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005b96e6: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005b96e9: add eax, dword ptr [edx - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b96ec: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005b96ef: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 005b96f2: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 005b96f5: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005b96f8: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 005b96fb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b96fe: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005b9705: mov esp, ebp */ r_esp = r_ebp;
    /* 005b9707: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b9708: ret  */ FN_RET(0x005b9588); r_esp += 4; return;
L_005b9709:; BB(0x005b9709);
    /* 005b9709: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005b970b: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005b970e: jmp 0x5b95f5 */ goto L_005b95f5;
}

void f_005b9714(void) /* sub_5B9714 */
{
    FN_ENTER(0x005b9714);
    /* 005b9714: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005b9715: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005b9716: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b9717: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b971a: mov edi, dword ptr [esp + 0x54] */ r_edi = R32((u32)(r_esp+0x54u));
    /* 005b971e: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005b9721: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005b9722: push 0x92b668 */ { u32 v = 0x92b668u; r_esp -= 4; W32(r_esp, v); }
    /* 005b9727: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b9728: call 0x858bf5 */ r_esp -= 4; W32(r_esp, 0x5b972du); f_00858bf5();
    /* 005b972d: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 005b9731: lea eax, [esp + 0x4c] */ r_eax = (u32)(r_esp+0x4cu);
    /* 005b9735: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b9736: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b9737: call 0x5b9780 */ r_esp -= 4; W32(r_esp, 0x5b973cu); f_005b9780();
    /* 005b973c: mov esi, eax */ r_esi = r_eax;
    /* 005b973e: lea edx, [esp + 0x14] */ r_edx = (u32)(r_esp+0x14u);
    /* 005b9742: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005b9743: push 0x92b670 */ { u32 v = 0x92b670u; r_esp -= 4; W32(r_esp, v); }
    /* 005b9748: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b9749: call 0x858bf5 */ r_esp -= 4; W32(r_esp, 0x5b974eu); f_00858bf5();
    /* 005b974e: lea ecx, [esp + 0x20] */ r_ecx = (u32)(r_esp+0x20u);
    /* 005b9752: lea edx, [esp + 0x60] */ r_edx = (u32)(r_esp+0x60u);
    /* 005b9756: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b9757: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b9758: call 0x5b9780 */ r_esp -= 4; W32(r_esp, 0x5b975du); f_005b9780();
    /* 005b975d: mov ebp, eax */ r_ebp = r_eax;
    /* 005b975f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b9760: push dword ptr [esp + 0x6c] */ { u32 v = R32((u32)(r_esp+0x6cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005b9764: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005b9765: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005b9766: call 0x5b99b4 */ r_esp -= 4; W32(r_esp, 0x5b976bu); f_005b99b4();
    /* 005b976b: mov esi, eax */ r_esi = r_eax;
    /* 005b976d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b976e: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x5b9773u); f_0082e960();
    /* 005b9773: mov eax, esi */ r_eax = r_esi;
    /* 005b9775: add esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b977b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b977c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b977d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005b977e: ret  */ FN_RET(0x005b9714); r_esp += 4; return;
}

void f_005b9780(void) /* sub_5B9780 */
{
    FN_ENTER(0x005b9780);
    /* 005b9780: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b9781: mov ebp, esp */ r_ebp = r_esp;
    /* 005b9783: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005b9785: push 0x8d9296 */ { u32 v = 0x8d9296u; r_esp -= 4; W32(r_esp, v); }
    /* 005b978a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005b9790: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b9791: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005b9798: sub esp, 0x130 */ {  u32 a = r_esp; u32 b = 0x130u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b979e: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005b97a1: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 005b97a4: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 005b97a7: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 005b97aa: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b97ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b97ae: call 0x5bbe24 */ r_esp -= 4; W32(r_esp, 0x5b97b3u); f_005bbe24();
    /* 005b97b3: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005b97b6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b97b9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005b97bb: jle 0x5b98fd */ if ((fZ||fS!=fO)) goto L_005b98fd;
L_005b97c1:; BB(0x005b97c1);
    /* 005b97c1: cmp eax, 0x90000 */ {  u32 a = r_eax; u32 b = 0x90000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b97c6: jle 0x5b98ac */ if ((fZ||fS!=fO)) goto L_005b98ac;
L_005b97cc:; BB(0x005b97cc);
    /* 005b97cc: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b97cf: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b97d1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b97d2: lea ecx, [ebp - 0x13c] */ r_ecx = (u32)(r_ebp+0xfffffec4u);
    /* 005b97d8: call 0x5bb224 */ r_esp -= 4; W32(r_esp, 0x5b97ddu); f_005bb224();
    /* 005b97dd: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005b97e4: push 0x800 */ { u32 v = 0x800u; r_esp -= 4; W32(r_esp, v); }
    /* 005b97e9: call 0x82e940 */ r_esp -= 4; W32(r_esp, 0x5b97eeu); f_0082e940();
    /* 005b97ee: mov esi, eax */ r_esi = r_eax;
    /* 005b97f0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b97f3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005b97f4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b97f6: lea ecx, [ebp - 0x13c] */ r_ecx = (u32)(r_ebp+0xfffffec4u);
    /* 005b97fc: call 0x5bbdbc */ r_esp -= 4; W32(r_esp, 0x5b9801u); f_005bbdbc();
    /* 005b9801: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005b9802: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 005b9804: mov dword ptr [ebp - 0x110], edx */ W32((u32)(r_ebp+0xfffffef0u), r_edx);
    /* 005b980a: mov ebx, dword ptr [esi + 4] */ r_ebx = R32((u32)(r_esi+0x4u));
    /* 005b980d: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x5b9812u); f_0082e960();
    /* 005b9812: push dword ptr [ebp - 0x110] */ { u32 v = R32((u32)(r_ebp+0xfffffef0u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b9818: call 0x82e940 */ r_esp -= 4; W32(r_esp, 0x5b981du); f_0082e940();
    /* 005b981d: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005b9820: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b9823: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b9826: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005b9827: call 0x5b9558 */ r_esp -= 4; W32(r_esp, 0x5b982cu); f_005b9558();
    /* 005b982c: mov esi, eax */ r_esi = r_eax;
    /* 005b982e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b9831: lea ecx, [ebp - 0x10c] */ r_ecx = (u32)(r_ebp+0xfffffef4u);
    /* 005b9837: call 0x763030 */ r_esp -= 4; W32(r_esp, 0x5b983cu); f_00763030();
    /* 005b983c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005b983d: lea ecx, [ebp - 0x10c] */ r_ecx = (u32)(r_ebp+0xfffffef4u);
    /* 005b9843: call 0x84c390 */ r_esp -= 4; W32(r_esp, 0x5b9848u); f_0084c390();
    /* 005b9848: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005b984b: lea ecx, [ebp - 0x10c] */ r_ecx = (u32)(r_ebp+0xfffffef4u);
    /* 005b9851: lea ebx, [esi + 8] */ r_ebx = (u32)(r_esi+0x8u);
    /* 005b9854: add edx, -8 */ {  u32 a = r_edx; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b9857: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b9858: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005b9859: call 0x763054 */ r_esp -= 4; W32(r_esp, 0x5b985eu); f_00763054();
    /* 005b985e: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005b9861: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b9862: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005b9863: call 0x788154 */ r_esp -= 4; W32(r_esp, 0x5b9868u); f_00788154();
    /* 005b9868: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005b9869: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x5b986eu); f_0082e960();
    /* 005b986e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b9871: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005b9878: lea ecx, [ebp - 0x13c] */ r_ecx = (u32)(r_ebp+0xfffffec4u);
    /* 005b987e: call 0x5bb854 */ r_esp -= 4; W32(r_esp, 0x5b9883u); f_005bb854();
L_005b9883:; BB(0x005b9883);
    /* 005b9883: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005b9886: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005b9888: je 0x5b9895 */ if (fZ) goto L_005b9895;
L_005b988a:; BB(0x005b988a);
    /* 005b988a: mov eax, dword ptr [ebp - 0x110] */ r_eax = R32((u32)(r_ebp+0xfffffef0u));
    /* 005b9890: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005b9893: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
L_005b9895:; BB(0x005b9895);
    /* 005b9895: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005b9898: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 005b989b: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005b989e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b98a1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005b98a8: mov esp, ebp */ r_esp = r_ebp;
    /* 005b98aa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b98ab: ret  */ FN_RET(0x005b9780); r_esp += 4; return;
L_005b98ac:; BB(0x005b98ac);
    /* 005b98ac: call 0x5b7a28 */ r_esp -= 4; W32(r_esp, 0x5b98b1u); f_005b7a28();
    /* 005b98b1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b98b3: je 0x5b97cc */ if (fZ) goto L_005b97cc;
L_005b98b9:; BB(0x005b98b9);
    /* 005b98b9: push 0x9c1e84 */ { u32 v = 0x9c1e84u; r_esp -= 4; W32(r_esp, v); }
    /* 005b98be: call 0x5b7a44 */ r_esp -= 4; W32(r_esp, 0x5b98c3u); f_005b7a44();
    /* 005b98c3: mov ebx, eax */ r_ebx = r_eax;
    /* 005b98c5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b98c8: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b98cb: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b98ce: mov edx, ebx */ r_edx = r_ebx;
    /* 005b98d0: call 0x5b9918 */ r_esp -= 4; W32(r_esp, 0x5b98d5u); f_005b9918();
    /* 005b98d5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b98d8: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005b98db: lea ecx, [ebp - 0x110] */ r_ecx = (u32)(r_ebp+0xfffffef0u);
    /* 005b98e1: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b98e4: mov eax, ebx */ r_eax = r_ebx;
    /* 005b98e6: call 0x5b9934 */ r_esp -= 4; W32(r_esp, 0x5b98ebu); f_005b9934();
    /* 005b98eb: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005b98ee: push 0x9c1e84 */ { u32 v = 0x9c1e84u; r_esp -= 4; W32(r_esp, v); }
    /* 005b98f3: call 0x5b9008 */ r_esp -= 4; W32(r_esp, 0x5b98f8u); f_005b9008();
    /* 005b98f8: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b98fb: jmp 0x5b9883 */ goto L_005b9883;
L_005b98fd:; BB(0x005b98fd);
    /* 005b98fd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005b98ff: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b9902: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005b9909: mov esp, ebp */ r_esp = r_ebp;
    /* 005b990b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b990c: ret  */ FN_RET(0x005b9780); r_esp += 4; return;
}

void f_005b97a0(void)
{
    FN_ENTER(0x005b97a0);
}

void f_005b9910(void) /* sub_5B9910 */
{
    FN_ENTER(0x005b9910);
    /* 005b9910: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 005b9914: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 005b9918: mov dword ptr [0xa74b04], eax */ W32((u32)(0xa74b04u), r_eax);
    /* 005b991d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b991e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b991f: call 0x5bb880 */ r_esp -= 4; W32(r_esp, 0x5b9924u); f_005bb880();
    /* 005b9924: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b9927: ret  */ FN_RET(0x005b9910); r_esp += 4; return;
}

void f_005b9918(void) /* sub_5B9918 */
{
    FN_ENTER(0x005b9918);
    /* 005b9918: mov dword ptr [0xa74b04], eax */ W32((u32)(0xa74b04u), r_eax);
    /* 005b991d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b991e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b991f: call 0x5bb880 */ r_esp -= 4; W32(r_esp, 0x5b9924u); f_005bb880();
    /* 005b9924: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b9927: ret  */ FN_RET(0x005b9918); r_esp += 4; return;
}

void f_005b9934(void) /* sub_5B9934 */
{
    FN_ENTER(0x005b9934);
    /* 005b9934: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005b9935: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005b9936: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b9937: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005b9938: sub esp, 0xf0 */ {  u32 a = r_esp; u32 b = 0xf0u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b993e: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 005b9942: mov edi, edx */ r_edi = r_edx;
    /* 005b9944: mov ebp, eax */ r_ebp = r_eax;
    /* 005b9946: mov esi, dword ptr [ebp] */ r_esi = R32((u32)(r_ebp));
    /* 005b9949: mov ecx, dword ptr [ebp + 4] */ r_ecx = R32((u32)(r_ebp+0x4u));
    /* 005b994c: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 005b994f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005b9950: call 0x82e940 */ r_esp -= 4; W32(r_esp, 0x5b9955u); f_0082e940();
    /* 005b9955: mov ebx, eax */ r_ebx = r_eax;
    /* 005b9957: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b995a: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b995c: jne 0x5b996b */ if (!fZ) goto L_005b996b;
L_005b995e:; BB(0x005b995e);
    /* 005b995e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005b9960: add esp, 0xf0 */ {  u32 a = r_esp; u32 b = 0xf0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b9966: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005b9967: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b9968: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b9969: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005b996a: ret  */ FN_RET(0x005b9934); r_esp += 4; return;
L_005b996b:; BB(0x005b996b);
    /* 005b996b: lea ecx, [esp + 8] */ r_ecx = (u32)(r_esp+0x8u);
    /* 005b996f: call 0x763030 */ r_esp -= 4; W32(r_esp, 0x5b9974u); f_00763030();
    /* 005b9974: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 005b9977: lea ecx, [esp + 8] */ r_ecx = (u32)(r_esp+0x8u);
    /* 005b997b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b997c: call 0x84c390 */ r_esp -= 4; W32(r_esp, 0x5b9981u); f_0084c390();
    /* 005b9981: lea ecx, [esp + 8] */ r_ecx = (u32)(r_esp+0x8u);
    /* 005b9985: add ebp, 8 */ {  u32 a = r_ebp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005b9988: add edi, -8 */ {  u32 a = r_edi; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005b998b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005b998c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b998d: call 0x763054 */ r_esp -= 4; W32(r_esp, 0x5b9992u); f_00763054();
    /* 005b9992: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005b9993: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b9994: call 0x788154 */ r_esp -= 4; W32(r_esp, 0x5b9999u); f_00788154();
    /* 005b9999: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b999c: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 005b99a0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b99a2: je 0x5b99a6 */ if (fZ) goto L_005b99a6;
L_005b99a4:; BB(0x005b99a4);
    /* 005b99a4: mov dword ptr [edx], esi */ W32((u32)(r_edx), r_esi);
L_005b99a6:; BB(0x005b99a6);
    /* 005b99a6: mov eax, ebx */ r_eax = r_ebx;
    /* 005b99a8: add esp, 0xf0 */ {  u32 a = r_esp; u32 b = 0xf0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b99ae: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005b99af: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b99b0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b99b1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005b99b2: ret  */ FN_RET(0x005b9934); r_esp += 4; return;
}

void f_005b99b4(void) /* sub_5B99B4 */
{
    FN_ENTER(0x005b99b4);
    /* 005b99b4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b99b5: mov ebp, esp */ r_ebp = r_esp;
    /* 005b99b7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005b99b9: push 0x8d92bc */ { u32 v = 0x8d92bcu; r_esp -= 4; W32(r_esp, v); }
    /* 005b99be: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005b99c4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b99c5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005b99cc: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b99cf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005b99d2: mov dword ptr [ebp - 0x2c], edi */ W32((u32)(r_ebp+0xffffffd4u), r_edi);
    /* 005b99d5: mov dword ptr [ebp - 0x28], esi */ W32((u32)(r_ebp+0xffffffd8u), r_esi);
    /* 005b99d8: mov dword ptr [ebp - 0x24], ebx */ W32((u32)(r_ebp+0xffffffdcu), r_ebx);
    /* 005b99db: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005b99de: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 005b99e5: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005b99e8: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 005b99ea: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5b99efu); f_005caba4();
    /* 005b99ef: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005b99f2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b99f5: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 005b99f8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b99fa: je 0x5b9b32 */ if (fZ) goto L_005b9b32;
L_005b9a00:; BB(0x005b9a00);
    /* 005b9a00: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 005b9a07: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005b9a0e: push 0xa74b08 */ { u32 v = 0xa74b08u; r_esp -= 4; W32(r_esp, v); }
    /* 005b9a13: mov ecx, eax */ r_ecx = r_eax;
    /* 005b9a15: call 0x5b9538 */ r_esp -= 4; W32(r_esp, 0x5b9a1au); f_005b9538();
    /* 005b9a1a: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_005b9a21:; BB(0x005b9a21);
    /* 005b9a21: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005b9a28: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 005b9a2b: lea ebx, [esi + 0x28] */ r_ebx = (u32)(r_esi+0x28u);
    /* 005b9a2e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005b9a30: mov dword ptr [ebx], eax */ W32((u32)(r_ebx), r_eax);
    /* 005b9a32: mov dword ptr [ebx + 4], eax */ W32((u32)(r_ebx+0x4u), r_eax);
    /* 005b9a35: mov dword ptr [ebx + 8], eax */ W32((u32)(r_ebx+0x8u), r_eax);
    /* 005b9a38: mov dword ptr [ebx + 0xc], eax */ W32((u32)(r_ebx+0xcu), r_eax);
    /* 005b9a3b: mov byte ptr [ebx + 0x10], al */ W8((u32)(r_ebx+0x10u), (u8)r_eax);
    /* 005b9a3e: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 005b9a40: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b9a43: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005b9a44: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x5b9a49u); f_00858900();
    /* 005b9a49: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b9a4c: mov eax, esi */ r_eax = r_esi;
    /* 005b9a4e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005b9a51: mov esi, dword ptr [ebp + 0x10] */ r_esi = R32((u32)(r_ebp+0x10u));
    /* 005b9a54: mov dword ptr [eax + 4], ebx */ W32((u32)(r_eax+0x4u), r_ebx);
    /* 005b9a57: mov ebx, dword ptr [ebp + 0x14] */ r_ebx = R32((u32)(r_ebp+0x14u));
    /* 005b9a5a: mov dword ptr [eax + 0x1c], edx */ W32((u32)(r_eax+0x1cu), r_edx);
    /* 005b9a5d: mov dword ptr [eax + 0x20], esi */ W32((u32)(r_eax+0x20u), r_esi);
    /* 005b9a60: mov ecx, dword ptr [ebx + 4] */ r_ecx = R32((u32)(r_ebx+0x4u));
    /* 005b9a63: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 005b9a66: lea esi, [ebx + 0x20] */ r_esi = (u32)(r_ebx+0x20u);
    /* 005b9a69: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 005b9a6b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 005b9a6d: jbe 0x5b9b0c */ if ((fC||fZ)) goto L_005b9b0c;
L_005b9a73:; BB(0x005b9a73);
    /* 005b9a73: mov eax, ecx */ r_eax = r_ecx;
    /* 005b9a75: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005b9a78: jb 0x5b9add */ if (fC) goto L_005b9add;
L_005b9a7a:; BB(0x005b9a7a);
    /* 005b9a7a: lea ecx, [eax - 5] */ r_ecx = (u32)(r_eax+0xfffffffbu);
    /* 005b9a7d: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
L_005b9a80:; BB(0x005b9a80);
    /* 005b9a80: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 005b9a83: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005b9a86: movzx eax, word ptr [esi] */ r_eax = (u32)R16((u32)(r_esi));
    /* 005b9a89: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b9a8b: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b9a8d: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b9a8f: add dword ptr [eax], edi */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 005b9a91: movzx edx, word ptr [esi + 2] */ r_edx = (u32)R16((u32)(r_esi+0x2u));
    /* 005b9a95: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b9a97: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b9a99: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b9a9b: mov eax, dword ptr [ecx + 0x1c] */ r_eax = R32((u32)(r_ecx+0x1cu));
    /* 005b9a9e: add dword ptr [edx], eax */ { u32 ad = (u32)(r_edx);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 005b9aa0: movzx eax, word ptr [esi + 4] */ r_eax = (u32)R16((u32)(r_esi+0x4u));
    /* 005b9aa4: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b9aa6: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b9aa8: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b9aaa: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 005b9aad: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005b9ab0: add dword ptr [eax], edx */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 005b9ab2: movzx edx, word ptr [esi + 6] */ r_edx = (u32)R16((u32)(r_esi+0x6u));
    /* 005b9ab6: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b9ab8: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b9aba: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b9abc: mov eax, dword ptr [ecx + 0x1c] */ r_eax = R32((u32)(r_ecx+0x1cu));
    /* 005b9abf: add dword ptr [edx], eax */ { u32 ad = (u32)(r_edx);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 005b9ac1: add esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005b9ac4: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005b9ac7: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005b9ac9: ja 0x5b9ad5 */ if ((!fC&&!fZ)) goto L_005b9ad5;
L_005b9acb:; BB(0x005b9acb);
    /* 005b9acb: mov eax, ecx */ r_eax = r_ecx;
    /* 005b9acd: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 005b9ad0: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005b9ad3: jmp 0x5b9a80 */ goto L_005b9a80;
L_005b9ad5:; BB(0x005b9ad5);
    /* 005b9ad5: mov eax, ecx */ r_eax = r_ecx;
    /* 005b9ad7: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 005b9ada: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
L_005b9add:; BB(0x005b9add);
    /* 005b9add: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005b9ae0: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 005b9ae3: movzx eax, word ptr [esi] */ r_eax = (u32)R16((u32)(r_esi));
    /* 005b9ae6: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b9ae8: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b9aea: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b9aec: add dword ptr [edx], ecx */ { u32 ad = (u32)(r_edx);  u32 a = R32(ad); u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 005b9aee: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005b9af1: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005b9af4: cmp ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005b9af6: jae 0x5b9b03 */ if (!fC) goto L_005b9b03;
L_005b9af8:; BB(0x005b9af8);
    /* 005b9af8: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005b9afb: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 005b9afe: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005b9b01: jmp 0x5b9add */ goto L_005b9add;
L_005b9b03:; BB(0x005b9b03);
    /* 005b9b03: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005b9b06: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 005b9b09: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
L_005b9b0c:; BB(0x005b9b0c);
    /* 005b9b0c: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 005b9b0f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005b9b12: add eax, dword ptr [edx + 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x10u)); u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b9b15: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005b9b18: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 005b9b1b: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 005b9b1e: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005b9b21: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 005b9b24: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b9b27: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005b9b2e: mov esp, ebp */ r_esp = r_ebp;
    /* 005b9b30: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b9b31: ret  */ FN_RET(0x005b99b4); r_esp += 4; return;
L_005b9b32:; BB(0x005b9b32);
    /* 005b9b32: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005b9b34: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005b9b37: jmp 0x5b9a21 */ goto L_005b9a21;
}

void f_005b9b3c(void) /* sub_5B9B3C */
{
    FN_ENTER(0x005b9b3c);
    /* 005b9b3c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005b9b3d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005b9b3e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005b9b3f: sub esp, 0xe8 */ {  u32 a = r_esp; u32 b = 0xe8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b9b45: mov edi, dword ptr [esp + 0xf8] */ r_edi = R32((u32)(r_esp+0xf8u));
    /* 005b9b4c: mov esi, dword ptr [edi] */ r_esi = R32((u32)(r_edi));
    /* 005b9b4e: cmp esi, dword ptr [esp + 0x104] */ {  u32 a = r_esi; u32 b = R32((u32)(r_esp+0x104u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005b9b55: mov ebx, dword ptr [edi + 4] */ r_ebx = R32((u32)(r_edi+0x4u));
    /* 005b9b58: jbe 0x5b9b66 */ if ((fC||fZ)) goto L_005b9b66;
L_005b9b5a:; BB(0x005b9b5a);
    /* 005b9b5a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005b9b5c: add esp, 0xe8 */ {  u32 a = r_esp; u32 b = 0xe8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b9b62: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005b9b63: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b9b64: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005b9b65: ret  */ FN_RET(0x005b9b3c); r_esp += 4; return;
L_005b9b66:; BB(0x005b9b66);
    /* 005b9b66: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 005b9b69: call 0x763030 */ r_esp -= 4; W32(r_esp, 0x5b9b6eu); f_00763030();
    /* 005b9b6e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005b9b6f: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 005b9b73: call 0x84c390 */ r_esp -= 4; W32(r_esp, 0x5b9b78u); f_0084c390();
    /* 005b9b78: mov eax, dword ptr [esp + 0xfc] */ r_eax = R32((u32)(r_esp+0xfcu));
    /* 005b9b7f: lea ebx, [edi + 8] */ r_ebx = (u32)(r_edi+0x8u);
    /* 005b9b82: lea edx, [eax - 8] */ r_edx = (u32)(r_eax+0xfffffff8u);
    /* 005b9b85: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b9b86: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005b9b87: lea ecx, [esp + 8] */ r_ecx = (u32)(r_esp+0x8u);
    /* 005b9b8b: call 0x763054 */ r_esp -= 4; W32(r_esp, 0x5b9b90u); f_00763054();
    /* 005b9b90: push dword ptr [esp + 0x100] */ { u32 v = R32((u32)(r_esp+0x100u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b9b97: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005b9b98: call 0x788154 */ r_esp -= 4; W32(r_esp, 0x5b9b9du); f_00788154();
    /* 005b9b9d: mov eax, esi */ r_eax = r_esi;
    /* 005b9b9f: add esp, 0xf0 */ {  u32 a = r_esp; u32 b = 0xf0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b9ba5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005b9ba6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b9ba7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005b9ba8: ret  */ FN_RET(0x005b9b3c); r_esp += 4; return;
}

void f_005b9bac(void) /* sub_5B9BAC */
{
    FN_ENTER(0x005b9bac);
    /* 005b9bac: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005b9bad: mov ecx, dword ptr [0xa74b20] */ r_ecx = R32((u32)(0xa74b20u));
    /* 005b9bb3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005b9bb5: je 0x5b9be4 */ if (fZ) goto L_005b9be4;
L_005b9bb7:; BB(0x005b9bb7);
    /* 005b9bb7: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 005b9bba: mov ebx, ecx */ r_ebx = r_ecx;
L_005b9bbc:; BB(0x005b9bbc);
    /* 005b9bbc: mov eax, dword ptr [ebx + 0x24] */ r_eax = R32((u32)(r_ebx+0x24u));
    /* 005b9bbf: cmp eax, dword ptr [esp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b9bc3: jne 0x5b9bda */ if (!fZ) goto L_005b9bda;
L_005b9bc5:; BB(0x005b9bc5);
    /* 005b9bc5: push dword ptr [ebx + 0x1c] */ { u32 v = R32((u32)(r_ebx+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005b9bc8: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x5b9bcdu); f_0082e960();
    /* 005b9bcd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005b9bce: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b9bd0: je 0x5b9bda */ if (fZ) goto L_005b9bda;
L_005b9bd2:; BB(0x005b9bd2);
    /* 005b9bd2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b9bd4: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 005b9bd6: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005b9bd8: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x5b9bdau); call_ind(t); }
L_005b9bda:; BB(0x005b9bda);
    /* 005b9bda: mov ebx, dword ptr [ebx + 0x10] */ r_ebx = R32((u32)(r_ebx+0x10u));
    /* 005b9bdd: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005b9bdf: jne 0x5b9bbc */ if (!fZ) goto L_005b9bbc;
L_005b9be1:; BB(0x005b9be1);
    /* 005b9be1: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
L_005b9be4:; BB(0x005b9be4);
    /* 005b9be4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005b9be5: ret  */ FN_RET(0x005b9bac); r_esp += 4; return;
}

void f_005b9be8(void) /* sub_5B9BE8 */
{
    FN_ENTER(0x005b9be8);
    /* 005b9be8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005b9be9: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005b9bed: call 0x5b9558 */ r_esp -= 4; W32(r_esp, 0x5b9bf2u); f_005b9558();
    /* 005b9bf2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005b9bf3: ret  */ FN_RET(0x005b9be8); r_esp += 4; return;
}

void f_005b9bf4(void) /* sub_5B9BF4 */
{
    FN_ENTER(0x005b9bf4);
    /* 005b9bf4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b9bf5: mov ebp, esp */ r_ebp = r_esp;
    /* 005b9bf7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005b9bf9: push 0x8d92f6 */ { u32 v = 0x8d92f6u; r_esp -= 4; W32(r_esp, v); }
    /* 005b9bfe: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005b9c04: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b9c05: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005b9c0c: sub esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b9c0f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005b9c12: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 005b9c15: mov dword ptr [ebp - 0x24], esi */ W32((u32)(r_ebp+0xffffffdcu), r_esi);
    /* 005b9c18: mov dword ptr [ebp - 0x20], ebx */ W32((u32)(r_ebp+0xffffffe0u), r_ebx);
    /* 005b9c1b: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005b9c1e: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005b9c21: lea ecx, [ebp - 0x64] */ r_ecx = (u32)(r_ebp+0xffffff9cu);
    /* 005b9c24: call 0x5b9d58 */ r_esp -= 4; W32(r_esp, 0x5b9c29u); f_005b9d58();
    /* 005b9c29: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005b9c30: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b9c33: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005b9c36: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b9c39: call 0x5b9918 */ r_esp -= 4; W32(r_esp, 0x5b9c3eu); f_005b9918();
    /* 005b9c3e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b9c41: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005b9c43: jle 0x5b9cc8 */ if ((fZ||fS!=fO)) goto L_005b9cc8;
L_005b9c49:; BB(0x005b9c49);
    /* 005b9c49: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 005b9c4c: mov dword ptr [ebp - 0x48], esi */ W32((u32)(r_ebp+0xffffffb8u), r_esi);
    /* 005b9c4f: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 005b9c52: add eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b9c54: mov ecx, dword ptr [eax - 0x20] */ r_ecx = R32((u32)(r_eax+0xffffffe0u));
    /* 005b9c57: mov ebx, dword ptr [eax - 0x1c] */ r_ebx = R32((u32)(r_eax+0xffffffe4u));
    /* 005b9c5a: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005b9c5d: add ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005b9c5f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005b9c61: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 005b9c63: jbe 0x5b9d1c */ if ((fC||fZ)) goto L_005b9d1c;
L_005b9c69:; BB(0x005b9c69);
    /* 005b9c69: cmp ebx, 5 */ {  u32 a = r_ebx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005b9c6c: jb 0x5b9cf3 */ if (fC) goto L_005b9cf3;
L_005b9c72:; BB(0x005b9c72);
    /* 005b9c72: lea edi, [ebx - 5] */ r_edi = (u32)(r_ebx+0xfffffffbu);
    /* 005b9c75: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
L_005b9c78:; BB(0x005b9c78);
    /* 005b9c78: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 005b9c7b: movzx edi, word ptr [ecx] */ r_edi = (u32)R16((u32)(r_ecx));
    /* 005b9c7e: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005b9c80: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005b9c82: add edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005b9c84: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b9c87: add dword ptr [edi], ebx */ { u32 ad = (u32)(r_edi);  u32 a = R32(ad); u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 005b9c89: mov ebx, dword ptr [ebp - 0x48] */ r_ebx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005b9c8c: movzx esi, word ptr [ecx + 2] */ r_esi = (u32)R16((u32)(r_ecx+0x2u));
    /* 005b9c90: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005b9c92: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005b9c94: add esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005b9c96: add dword ptr [esi], ebx */ { u32 ad = (u32)(r_esi);  u32 a = R32(ad); u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 005b9c98: movzx ebx, word ptr [ecx + 4] */ r_ebx = (u32)R16((u32)(r_ecx+0x4u));
    /* 005b9c9c: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005b9c9e: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005b9ca0: add ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005b9ca2: mov esi, dword ptr [ebp - 0x48] */ r_esi = R32((u32)(r_ebp+0xffffffb8u));
    /* 005b9ca5: add dword ptr [ebx], esi */ { u32 ad = (u32)(r_ebx);  u32 a = R32(ad); u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 005b9ca7: movzx esi, word ptr [ecx + 6] */ r_esi = (u32)R16((u32)(r_ecx+0x6u));
    /* 005b9cab: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005b9cad: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005b9caf: add esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005b9cb1: mov ebx, dword ptr [ebp - 0x48] */ r_ebx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005b9cb4: add dword ptr [esi], ebx */ { u32 ad = (u32)(r_esi);  u32 a = R32(ad); u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 005b9cb6: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005b9cb9: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005b9cbc: cmp edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005b9cbe: ja 0x5b9ced */ if ((!fC&&!fZ)) goto L_005b9ced;
L_005b9cc0:; BB(0x005b9cc0);
    /* 005b9cc0: mov ebx, dword ptr [ebp - 0x48] */ r_ebx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005b9cc3: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005b9cc6: jmp 0x5b9c78 */ goto L_005b9c78;
L_005b9cc8:; BB(0x005b9cc8);
    /* 005b9cc8: lea eax, [ebp - 0x64] */ r_eax = (u32)(r_ebp+0xffffff9cu);
    /* 005b9ccb: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 005b9cce: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005b9cd5: lea ecx, [ebp - 0x64] */ r_ecx = (u32)(r_ebp+0xffffff9cu);
    /* 005b9cd8: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x5b9cddu); f_008171e8();
    /* 005b9cdd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005b9cdf: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b9ce2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005b9ce9: mov esp, ebp */ r_esp = r_ebp;
    /* 005b9ceb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b9cec: ret  */ FN_RET(0x005b9bf4); r_esp += 4; return;
L_005b9ced:; BB(0x005b9ced);
    /* 005b9ced: mov ebx, dword ptr [ebp - 0x48] */ r_ebx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005b9cf0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
L_005b9cf3:; BB(0x005b9cf3);
    /* 005b9cf3: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 005b9cf6: movzx ebx, word ptr [ecx] */ r_ebx = (u32)R16((u32)(r_ecx));
    /* 005b9cf9: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005b9cfb: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005b9cfd: add esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005b9cff: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005b9d02: add dword ptr [esi], edi */ { u32 ad = (u32)(r_esi);  u32 a = R32(ad); u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 005b9d04: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b9d07: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005b9d0a: cmp edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005b9d0c: jae 0x5b9d16 */ if (!fC) goto L_005b9d16;
L_005b9d0e:; BB(0x005b9d0e);
    /* 005b9d0e: mov ebx, dword ptr [ebp - 0x48] */ r_ebx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005b9d11: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005b9d14: jmp 0x5b9cf3 */ goto L_005b9cf3;
L_005b9d16:; BB(0x005b9d16);
    /* 005b9d16: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005b9d19: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
L_005b9d1c:; BB(0x005b9d1c);
    /* 005b9d1c: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005b9d1f: add edx, dword ptr [eax - 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b9d22: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 005b9d25: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 005b9d28: lea eax, [ebp - 0x64] */ r_eax = (u32)(r_ebp+0xffffff9cu);
    /* 005b9d2b: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 005b9d2e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005b9d35: lea ecx, [ebp - 0x64] */ r_ecx = (u32)(r_ebp+0xffffff9cu);
    /* 005b9d38: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x5b9d3du); f_008171e8();
    /* 005b9d3d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005b9d40: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 005b9d43: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 005b9d46: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005b9d49: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b9d4c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005b9d53: mov esp, ebp */ r_esp = r_ebp;
    /* 005b9d55: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b9d56: ret  */ FN_RET(0x005b9bf4); r_esp += 4; return;
}

void f_005b9d58(void) /* sub_5B9D58 */
{
    FN_ENTER(0x005b9d58);
    /* 005b9d58: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b9d59: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005b9d5b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b9d5d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b9d5f: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x5b9d64u); f_008193cc();
    /* 005b9d64: mov dword ptr [ebp], 0xb0b988 */ W32((u32)(r_ebp), 0xb0b988u);
    /* 005b9d6b: mov eax, ebp */ r_eax = r_ebp;
    /* 005b9d6d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b9d6e: ret  */ FN_RET(0x005b9d58); r_esp += 4; return;
}

void f_005b9d70(void) /* sub_5B9D70 */
{
    FN_ENTER(0x005b9d70);
    /* 005b9d70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b9d71: mov ebp, esp */ r_ebp = r_esp;
    /* 005b9d73: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005b9d75: push 0x8d932e */ { u32 v = 0x8d932eu; r_esp -= 4; W32(r_esp, v); }
    /* 005b9d7a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005b9d80: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b9d81: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005b9d88: sub esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b9d8b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005b9d8e: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 005b9d91: mov dword ptr [ebp - 0x24], esi */ W32((u32)(r_ebp+0xffffffdcu), r_esi);
    /* 005b9d94: mov dword ptr [ebp - 0x20], ebx */ W32((u32)(r_ebp+0xffffffe0u), r_ebx);
    /* 005b9d97: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b9d9a: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005b9d9d: lea ecx, [ebp - 0x64] */ r_ecx = (u32)(r_ebp+0xffffff9cu);
    /* 005b9da0: call 0x5b9d58 */ r_esp -= 4; W32(r_esp, 0x5b9da5u); f_005b9d58();
    /* 005b9da5: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005b9da8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005b9daa: jle 0x5b9e33 */ if ((fZ||fS!=fO)) goto L_005b9e33;
L_005b9db0:; BB(0x005b9db0);
    /* 005b9db0: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 005b9db3: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005b9db6: mov dword ptr [ebp - 0x48], esi */ W32((u32)(r_ebp+0xffffffb8u), r_esi);
    /* 005b9db9: mov dword ptr [ebp - 0x44], ecx */ W32((u32)(r_ebp+0xffffffbcu), r_ecx);
    /* 005b9dbc: lea eax, [ecx + esi] */ r_eax = (u32)(r_ecx+r_esi);
    /* 005b9dbf: mov ecx, dword ptr [eax - 0x20] */ r_ecx = R32((u32)(r_eax+0xffffffe0u));
    /* 005b9dc2: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005b9dc5: mov eax, dword ptr [eax - 0x1c] */ r_eax = R32((u32)(r_eax+0xffffffe4u));
    /* 005b9dc8: add ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005b9dca: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005b9dcc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 005b9dce: jbe 0x5b9e84 */ if ((fC||fZ)) goto L_005b9e84;
L_005b9dd4:; BB(0x005b9dd4);
    /* 005b9dd4: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005b9dd7: jb 0x5b9e5e */ if (fC) goto L_005b9e5e;
L_005b9ddd:; BB(0x005b9ddd);
    /* 005b9ddd: lea ebx, [eax - 5] */ r_ebx = (u32)(r_eax+0xfffffffbu);
    /* 005b9de0: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
L_005b9de3:; BB(0x005b9de3);
    /* 005b9de3: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 005b9de6: movzx edi, word ptr [ecx] */ r_edi = (u32)R16((u32)(r_ecx));
    /* 005b9de9: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005b9deb: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005b9ded: add edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005b9def: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b9df2: add dword ptr [edi], ebx */ { u32 ad = (u32)(r_edi);  u32 a = R32(ad); u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 005b9df4: mov ebx, dword ptr [ebp - 0x48] */ r_ebx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005b9df7: movzx esi, word ptr [ecx + 2] */ r_esi = (u32)R16((u32)(r_ecx+0x2u));
    /* 005b9dfb: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005b9dfd: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005b9dff: add esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005b9e01: add dword ptr [esi], ebx */ { u32 ad = (u32)(r_esi);  u32 a = R32(ad); u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 005b9e03: movzx ebx, word ptr [ecx + 4] */ r_ebx = (u32)R16((u32)(r_ecx+0x4u));
    /* 005b9e07: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005b9e09: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005b9e0b: add ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005b9e0d: mov esi, dword ptr [ebp - 0x48] */ r_esi = R32((u32)(r_ebp+0xffffffb8u));
    /* 005b9e10: add dword ptr [ebx], esi */ { u32 ad = (u32)(r_ebx);  u32 a = R32(ad); u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 005b9e12: movzx esi, word ptr [ecx + 6] */ r_esi = (u32)R16((u32)(r_ecx+0x6u));
    /* 005b9e16: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005b9e18: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005b9e1a: add esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005b9e1c: mov ebx, dword ptr [ebp - 0x48] */ r_ebx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005b9e1f: add dword ptr [esi], ebx */ { u32 ad = (u32)(r_esi);  u32 a = R32(ad); u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 005b9e21: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005b9e24: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005b9e27: cmp edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005b9e29: ja 0x5b9e58 */ if ((!fC&&!fZ)) goto L_005b9e58;
L_005b9e2b:; BB(0x005b9e2b);
    /* 005b9e2b: mov ebx, dword ptr [ebp - 0x48] */ r_ebx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005b9e2e: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005b9e31: jmp 0x5b9de3 */ goto L_005b9de3;
L_005b9e33:; BB(0x005b9e33);
    /* 005b9e33: lea eax, [ebp - 0x64] */ r_eax = (u32)(r_ebp+0xffffff9cu);
    /* 005b9e36: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 005b9e39: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005b9e40: lea ecx, [ebp - 0x64] */ r_ecx = (u32)(r_ebp+0xffffff9cu);
    /* 005b9e43: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x5b9e48u); f_008171e8();
    /* 005b9e48: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005b9e4a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b9e4d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005b9e54: mov esp, ebp */ r_esp = r_ebp;
    /* 005b9e56: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b9e57: ret  */ FN_RET(0x005b9d70); r_esp += 4; return;
L_005b9e58:; BB(0x005b9e58);
    /* 005b9e58: mov ebx, dword ptr [ebp - 0x48] */ r_ebx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005b9e5b: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
L_005b9e5e:; BB(0x005b9e5e);
    /* 005b9e5e: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 005b9e61: movzx ebx, word ptr [ecx] */ r_ebx = (u32)R16((u32)(r_ecx));
    /* 005b9e64: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005b9e66: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005b9e68: add esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005b9e6a: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b9e6d: add dword ptr [esi], edi */ { u32 ad = (u32)(r_esi);  u32 a = R32(ad); u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 005b9e6f: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005b9e72: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005b9e74: jae 0x5b9e7e */ if (!fC) goto L_005b9e7e;
L_005b9e76:; BB(0x005b9e76);
    /* 005b9e76: mov ebx, dword ptr [ebp - 0x48] */ r_ebx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005b9e79: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005b9e7c: jmp 0x5b9e5e */ goto L_005b9e5e;
L_005b9e7e:; BB(0x005b9e7e);
    /* 005b9e7e: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 005b9e81: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_005b9e84:; BB(0x005b9e84);
    /* 005b9e84: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005b9e87: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005b9e8a: add edx, dword ptr [eax - 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b9e8d: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 005b9e90: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 005b9e93: lea ecx, [ebp - 0x64] */ r_ecx = (u32)(r_ebp+0xffffff9cu);
    /* 005b9e96: mov dword ptr [ebp - 0x70], ecx */ W32((u32)(r_ebp+0xffffff90u), r_ecx);
    /* 005b9e99: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005b9ea0: lea ecx, [ebp - 0x64] */ r_ecx = (u32)(r_ebp+0xffffff9cu);
    /* 005b9ea3: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x5b9ea8u); f_008171e8();
    /* 005b9ea8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005b9eab: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 005b9eae: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 005b9eb1: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005b9eb4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b9eb7: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005b9ebe: mov esp, ebp */ r_esp = r_ebp;
    /* 005b9ec0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b9ec1: ret  */ FN_RET(0x005b9d70); r_esp += 4; return;
}

void f_005b9ec4(void) /* sub_5B9EC4 */
{
    FN_ENTER(0x005b9ec4);
    /* 005b9ec4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005b9ec5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005b9ec6: sub esp, 0x124 */ {  u32 a = r_esp; u32 b = 0x124u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b9ecc: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005b9ecf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b9ed0: push 0x92b678 */ { u32 v = 0x92b678u; r_esp -= 4; W32(r_esp, v); }
    /* 005b9ed5: call 0x82d3c0 */ r_esp -= 4; W32(r_esp, 0x5b9edau); f_0082d3c0();
    /* 005b9eda: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b9edd: mov edx, dword ptr [esp + 0x130] */ r_edx = R32((u32)(r_esp+0x130u));
    /* 005b9ee4: lea edi, [esp] */ r_edi = (u32)(r_esp);
    /* 005b9ee7: mov ecx, 0xffffffff */ r_ecx = 0xffffffffu;
    /* 005b9eec: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005b9eee: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (fZ) break; }
    /* 005b9ef0: add edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
L_005b9ef3:; BB(0x005b9ef3);
    /* 005b9ef3: mov al, byte ptr [edx] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx))) & 0xffu);
    /* 005b9ef5: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b9ef8: mov byte ptr [edi], al */ W8((u32)(r_edi), (u8)r_eax);
    /* 005b9efa: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005b9efd: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005b9eff: jne 0x5b9ef3 */ if (!fZ) goto L_005b9ef3;
L_005b9f01:; BB(0x005b9f01);
    /* 005b9f01: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 005b9f04: lea eax, [esp + 0x100] */ r_eax = (u32)(r_esp+0x100u);
    /* 005b9f0b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b9f0c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b9f0d: call 0x8591d9 */ r_esp -= 4; W32(r_esp, 0x5b9f12u); f_008591d9();
    /* 005b9f12: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b9f15: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b9f17: jne 0x5b9f5a */ if (!fZ) goto L_005b9f5a;
L_005b9f19:; BB(0x005b9f19);
    /* 005b9f19: mov edi, dword ptr [esp + 0x114] */ r_edi = R32((u32)(r_esp+0x114u));
    /* 005b9f20: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005b9f23: push 0x92b680 */ { u32 v = 0x92b680u; r_esp -= 4; W32(r_esp, v); }
    /* 005b9f28: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b9f29: call 0x85957c */ r_esp -= 4; W32(r_esp, 0x5b9f2eu); f_0085957c();
    /* 005b9f2e: mov esi, eax */ r_esi = r_eax;
    /* 005b9f30: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b9f33: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b9f35: je 0x5b9f5a */ if (fZ) goto L_005b9f5a;
L_005b9f37:; BB(0x005b9f37);
    /* 005b9f37: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005b9f38: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005b9f39: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b9f3b: push dword ptr [esp + 0x140] */ { u32 v = R32((u32)(r_esp+0x140u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b9f42: call 0x859678 */ r_esp -= 4; W32(r_esp, 0x5b9f47u); f_00859678();
    /* 005b9f47: mov edi, eax */ r_edi = r_eax;
    /* 005b9f49: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005b9f4a: call 0x859710 */ r_esp -= 4; W32(r_esp, 0x5b9f4fu); f_00859710();
    /* 005b9f4f: mov eax, edi */ r_eax = r_edi;
    /* 005b9f51: add esp, 0x138 */ {  u32 a = r_esp; u32 b = 0x138u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b9f57: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b9f58: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005b9f59: ret  */ FN_RET(0x005b9ec4); r_esp += 4; return;
L_005b9f5a:; BB(0x005b9f5a);
    /* 005b9f5a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005b9f5c: add esp, 0x124 */ {  u32 a = r_esp; u32 b = 0x124u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b9f62: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b9f63: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005b9f64: ret  */ FN_RET(0x005b9ec4); r_esp += 4; return;
}

void f_005b9f68(void) /* sub_5B9F68 */
{
    FN_ENTER(0x005b9f68);
    /* 005b9f68: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005b9f69: sub esp, 0x100 */ {  u32 a = r_esp; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b9f6f: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005b9f72: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b9f73: push 0x92b678 */ { u32 v = 0x92b678u; r_esp -= 4; W32(r_esp, v); }
    /* 005b9f78: call 0x82d3c0 */ r_esp -= 4; W32(r_esp, 0x5b9f7du); f_0082d3c0();
    /* 005b9f7d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b9f80: mov edx, dword ptr [esp + 0x108] */ r_edx = R32((u32)(r_esp+0x108u));
    /* 005b9f87: lea edi, [esp] */ r_edi = (u32)(r_esp);
    /* 005b9f8a: mov ecx, 0xffffffff */ r_ecx = 0xffffffffu;
    /* 005b9f8f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005b9f91: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (fZ) break; }
    /* 005b9f93: add edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
L_005b9f96:; BB(0x005b9f96);
    /* 005b9f96: mov al, byte ptr [edx] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx))) & 0xffu);
    /* 005b9f98: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b9f9b: mov byte ptr [edi], al */ W8((u32)(r_edi), (u8)r_eax);
    /* 005b9f9d: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005b9fa0: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005b9fa2: jne 0x5b9f96 */ if (!fZ) goto L_005b9f96;
L_005b9fa4:; BB(0x005b9fa4);
    /* 005b9fa4: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005b9fa7: push 0x92b684 */ { u32 v = 0x92b684u; r_esp -= 4; W32(r_esp, v); }
    /* 005b9fac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b9fad: call 0x85957c */ r_esp -= 4; W32(r_esp, 0x5b9fb2u); f_0085957c();
    /* 005b9fb2: mov edi, eax */ r_edi = r_eax;
    /* 005b9fb4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b9fb7: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b9fb9: je 0x5b9fda */ if (fZ) goto L_005b9fda;
L_005b9fbb:; BB(0x005b9fbb);
    /* 005b9fbb: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005b9fbc: push dword ptr [esp + 0x114] */ { u32 v = R32((u32)(r_esp+0x114u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b9fc3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b9fc5: push dword ptr [esp + 0x118] */ { u32 v = R32((u32)(r_esp+0x118u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b9fcc: call 0x859868 */ r_esp -= 4; W32(r_esp, 0x5b9fd1u); f_00859868();
    /* 005b9fd1: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005b9fd2: call 0x859710 */ r_esp -= 4; W32(r_esp, 0x5b9fd7u); f_00859710();
    /* 005b9fd7: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005b9fda:; BB(0x005b9fda);
    /* 005b9fda: add esp, 0x100 */ {  u32 a = r_esp; u32 b = 0x100u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b9fe0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005b9fe1: ret  */ FN_RET(0x005b9f68); r_esp += 4; return;
}

void f_005b9fe4(void) /* sub_5B9FE4 */
{
    FN_ENTER(0x005b9fe4);
    /* 005b9fe4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005b9fe5: sub esp, 0x124 */ {  u32 a = r_esp; u32 b = 0x124u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b9feb: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005b9fee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b9fef: push 0x92b678 */ { u32 v = 0x92b678u; r_esp -= 4; W32(r_esp, v); }
    /* 005b9ff4: call 0x82d3c0 */ r_esp -= 4; W32(r_esp, 0x5b9ff9u); f_0082d3c0();
    /* 005b9ff9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b9ffc: mov edx, dword ptr [esp + 0x12c] */ r_edx = R32((u32)(r_esp+0x12cu));
    /* 005ba003: lea edi, [esp] */ r_edi = (u32)(r_esp);
    /* 005ba006: mov ecx, 0xffffffff */ r_ecx = 0xffffffffu;
    /* 005ba00b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ba00d: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (fZ) break; }
    /* 005ba00f: add edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
L_005ba012:; BB(0x005ba012);
    /* 005ba012: mov al, byte ptr [edx] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx))) & 0xffu);
    /* 005ba014: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005ba017: mov byte ptr [edi], al */ W8((u32)(r_edi), (u8)r_eax);
    /* 005ba019: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005ba01c: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005ba01e: jne 0x5ba012 */ if (!fZ) goto L_005ba012;
L_005ba020:; BB(0x005ba020);
    /* 005ba020: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 005ba023: lea eax, [esp + 0x100] */ r_eax = (u32)(r_esp+0x100u);
    /* 005ba02a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ba02b: mov edi, 0xffffffff */ r_edi = 0xffffffffu;
    /* 005ba030: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ba031: call 0x8591d9 */ r_esp -= 4; W32(r_esp, 0x5ba036u); f_008591d9();
    /* 005ba036: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ba039: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ba03b: jne 0x5ba044 */ if (!fZ) goto L_005ba044;
L_005ba03d:; BB(0x005ba03d);
    /* 005ba03d: mov edi, dword ptr [esp + 0x114] */ r_edi = R32((u32)(r_esp+0x114u));
L_005ba044:; BB(0x005ba044);
    /* 005ba044: mov eax, edi */ r_eax = r_edi;
    /* 005ba046: add esp, 0x124 */ {  u32 a = r_esp; u32 b = 0x124u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005ba04c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005ba04d: ret  */ FN_RET(0x005b9fe4); r_esp += 4; return;
}

