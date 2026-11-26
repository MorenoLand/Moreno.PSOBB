#include "protos.h"

void f_00650000(void)
{
    FN_ENTER(0x00650000);
    /* 00650000: test dword ptr [esi], ebp */ {  u32 a = R32((u32)(r_esi)); u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;   }
    /* 00650002: add eax, dword ptr [eax] */ {  u32 a = r_eax; u32 b = R32((u32)(r_eax)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00650004: add byte ptr [esi - 0x77], ah */ { u32 ad = (u32)(r_esi+0xffffff89u);  u32 a = R8(ad); u32 b = (u8)(r_eax>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00650007: test dword ptr [eax - 0x7d000000], edi */ {  u32 a = R32((u32)(r_eax+0x83000000u)); u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0065000d: les ebx, ptr [eax] */ UNSUP(0x0065000d, "les ebx, ptr [eax]");
    /* 0065000f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00650010: ret  */ FN_RET(0x00650000); r_esp += 4; return;
}

void f_00650014(void) /* sub_650014 */
{
    FN_ENTER(0x00650014);
    /* 00650014: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00650015: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00650017: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00650019: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0065001b: push 0x41a00000 */ { u32 v = 0x41a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00650020: push 0x43960000 */ { u32 v = 0x43960000u; r_esp -= 4; W32(r_esp, v); }
    /* 00650025: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x650028u); call_ind(t); }
    /* 00650028: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0065002a: je 0x650083 */ if (fZ) goto L_00650083;
L_0065002c:; BB(0x0065002c);
    /* 0065002c: mov ecx, dword ptr [ebx + 0x24] */ r_ecx = R32((u32)(r_ebx+0x24u));
    /* 0065002f: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x650034u); f_00829cc8();
    /* 00650034: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x650039u); f_0082d7b0();
    /* 00650039: lea ecx, [ebx + 0x38] */ r_ecx = (u32)(r_ebx+0x38u);
    /* 0065003c: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x650041u); f_0082d838();
    /* 00650041: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 00650044: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00650046: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x65004bu); f_0082d8bc();
    /* 0065004b: mov eax, dword ptr [ebx + 0x364] */ r_eax = R32((u32)(r_ebx+0x364u));
    /* 00650051: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00650053: je 0x650060 */ if (fZ) goto L_00650060;
L_00650055:; BB(0x00650055);
    /* 00650055: lea ecx, [ebx + 0x368] */ r_ecx = (u32)(r_ebx+0x368u);
    /* 0065005b: call 0x831290 */ r_esp -= 4; W32(r_esp, 0x650060u); f_00831290();
L_00650060:; BB(0x00650060);
    /* 00650060: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x650065u); f_004f7c84();
    /* 00650065: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00650068: je 0x650085 */ if (fZ) goto L_00650085;
L_0065006a:; BB(0x0065006a);
    /* 0065006a: push dword ptr [ebx + 0xc0] */ { u32 v = R32((u32)(r_ebx+0xc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00650070: mov ecx, dword ptr [ebx + 0x34] */ r_ecx = R32((u32)(r_ebx+0x34u));
    /* 00650073: mov edx, dword ptr [ebx + 0xf8] */ r_edx = R32((u32)(r_ebx+0xf8u));
    /* 00650079: call 0x83bd00 */ r_esp -= 4; W32(r_esp, 0x65007eu); f_0083bd00();
L_0065007e:; BB(0x0065007e);
    /* 0065007e: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x650083u); f_0082da80();
L_00650083:; BB(0x00650083);
    /* 00650083: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00650084: ret  */ FN_RET(0x00650014); r_esp += 4; return;
L_00650085:; BB(0x00650085);
    /* 00650085: mov ecx, dword ptr [ebx + 0x34] */ r_ecx = R32((u32)(r_ebx+0x34u));
    /* 00650088: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x65008du); f_00831758();
    /* 0065008d: jmp 0x65007e */ goto L_0065007e;
}

void f_00650020(void)
{
    FN_ENTER(0x00650020);
    /* 00650020: push 0x43960000 */ { u32 v = 0x43960000u; r_esp -= 4; W32(r_esp, v); }
    /* 00650025: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x650028u); call_ind(t); }
    /* 00650028: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0065002a: je 0x650083 */ if (fZ) goto L_00650083;
L_0065002c:; BB(0x0065002c);
    /* 0065002c: mov ecx, dword ptr [ebx + 0x24] */ r_ecx = R32((u32)(r_ebx+0x24u));
    /* 0065002f: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x650034u); f_00829cc8();
    /* 00650034: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x650039u); f_0082d7b0();
    /* 00650039: lea ecx, [ebx + 0x38] */ r_ecx = (u32)(r_ebx+0x38u);
    /* 0065003c: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x650041u); f_0082d838();
    /* 00650041: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 00650044: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00650046: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x65004bu); f_0082d8bc();
    /* 0065004b: mov eax, dword ptr [ebx + 0x364] */ r_eax = R32((u32)(r_ebx+0x364u));
    /* 00650051: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00650053: je 0x650060 */ if (fZ) goto L_00650060;
L_00650055:; BB(0x00650055);
    /* 00650055: lea ecx, [ebx + 0x368] */ r_ecx = (u32)(r_ebx+0x368u);
    /* 0065005b: call 0x831290 */ r_esp -= 4; W32(r_esp, 0x650060u); f_00831290();
L_00650060:; BB(0x00650060);
    /* 00650060: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x650065u); f_004f7c84();
    /* 00650065: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00650068: je 0x650085 */ if (fZ) goto L_00650085;
L_0065006a:; BB(0x0065006a);
    /* 0065006a: push dword ptr [ebx + 0xc0] */ { u32 v = R32((u32)(r_ebx+0xc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00650070: mov ecx, dword ptr [ebx + 0x34] */ r_ecx = R32((u32)(r_ebx+0x34u));
    /* 00650073: mov edx, dword ptr [ebx + 0xf8] */ r_edx = R32((u32)(r_ebx+0xf8u));
    /* 00650079: call 0x83bd00 */ r_esp -= 4; W32(r_esp, 0x65007eu); f_0083bd00();
L_0065007e:; BB(0x0065007e);
    /* 0065007e: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x650083u); f_0082da80();
L_00650083:; BB(0x00650083);
    /* 00650083: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00650084: ret  */ FN_RET(0x00650020); r_esp += 4; return;
L_00650085:; BB(0x00650085);
    /* 00650085: mov ecx, dword ptr [ebx + 0x34] */ r_ecx = R32((u32)(r_ebx+0x34u));
    /* 00650088: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x65008du); f_00831758();
    /* 0065008d: jmp 0x65007e */ goto L_0065007e;
}

void f_00650044(void)
{
    FN_ENTER(0x00650044);
    /* 00650044: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00650046: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x65004bu); f_0082d8bc();
    /* 0065004b: mov eax, dword ptr [ebx + 0x364] */ r_eax = R32((u32)(r_ebx+0x364u));
    /* 00650051: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00650053: je 0x650060 */ if (fZ) goto L_00650060;
L_00650055:; BB(0x00650055);
    /* 00650055: lea ecx, [ebx + 0x368] */ r_ecx = (u32)(r_ebx+0x368u);
    /* 0065005b: call 0x831290 */ r_esp -= 4; W32(r_esp, 0x650060u); f_00831290();
L_00650060:; BB(0x00650060);
    /* 00650060: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x650065u); f_004f7c84();
    /* 00650065: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00650068: je 0x650085 */ if (fZ) goto L_00650085;
L_0065006a:; BB(0x0065006a);
    /* 0065006a: push dword ptr [ebx + 0xc0] */ { u32 v = R32((u32)(r_ebx+0xc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00650070: mov ecx, dword ptr [ebx + 0x34] */ r_ecx = R32((u32)(r_ebx+0x34u));
    /* 00650073: mov edx, dword ptr [ebx + 0xf8] */ r_edx = R32((u32)(r_ebx+0xf8u));
    /* 00650079: call 0x83bd00 */ r_esp -= 4; W32(r_esp, 0x65007eu); f_0083bd00();
L_0065007e:; BB(0x0065007e);
    /* 0065007e: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x650083u); f_0082da80();
    /* 00650083: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00650084: ret  */ FN_RET(0x00650044); r_esp += 4; return;
L_00650085:; BB(0x00650085);
    /* 00650085: mov ecx, dword ptr [ebx + 0x34] */ r_ecx = R32((u32)(r_ebx+0x34u));
    /* 00650088: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x65008du); f_00831758();
    /* 0065008d: jmp 0x65007e */ goto L_0065007e;
}

void f_00650045(void)
{
    FN_ENTER(0x00650045);
    /* 00650045: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 00650046: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x65004bu); f_0082d8bc();
    /* 0065004b: mov eax, dword ptr [ebx + 0x364] */ r_eax = R32((u32)(r_ebx+0x364u));
    /* 00650051: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00650053: je 0x650060 */ if (fZ) goto L_00650060;
L_00650055:; BB(0x00650055);
    /* 00650055: lea ecx, [ebx + 0x368] */ r_ecx = (u32)(r_ebx+0x368u);
    /* 0065005b: call 0x831290 */ r_esp -= 4; W32(r_esp, 0x650060u); f_00831290();
L_00650060:; BB(0x00650060);
    /* 00650060: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x650065u); f_004f7c84();
    /* 00650065: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00650068: je 0x650085 */ if (fZ) goto L_00650085;
L_0065006a:; BB(0x0065006a);
    /* 0065006a: push dword ptr [ebx + 0xc0] */ { u32 v = R32((u32)(r_ebx+0xc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00650070: mov ecx, dword ptr [ebx + 0x34] */ r_ecx = R32((u32)(r_ebx+0x34u));
    /* 00650073: mov edx, dword ptr [ebx + 0xf8] */ r_edx = R32((u32)(r_ebx+0xf8u));
    /* 00650079: call 0x83bd00 */ r_esp -= 4; W32(r_esp, 0x65007eu); f_0083bd00();
L_0065007e:; BB(0x0065007e);
    /* 0065007e: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x650083u); f_0082da80();
    /* 00650083: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00650084: ret  */ FN_RET(0x00650045); r_esp += 4; return;
L_00650085:; BB(0x00650085);
    /* 00650085: mov ecx, dword ptr [ebx + 0x34] */ r_ecx = R32((u32)(r_ebx+0x34u));
    /* 00650088: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x65008du); f_00831758();
    /* 0065008d: jmp 0x65007e */ goto L_0065007e;
}

void f_00650047(void)
{
    FN_ENTER(0x00650047);
    goto L_00650047;
L_00650021:; BB(0x00650021);
    /* 00650021: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00650023: xchg esi, eax */ { u32 x = r_esi; u32 y = r_eax; r_esi = y; r_eax = x; }
    /* 00650024: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00650025: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x650028u); call_ind(t); }
    /* 00650028: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0065002a: je 0x650083 */ if (fZ) goto L_00650083;
L_0065002c:; BB(0x0065002c);
    /* 0065002c: mov ecx, dword ptr [ebx + 0x24] */ r_ecx = R32((u32)(r_ebx+0x24u));
    /* 0065002f: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x650034u); f_00829cc8();
    /* 00650034: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x650039u); f_0082d7b0();
    /* 00650039: lea ecx, [ebx + 0x38] */ r_ecx = (u32)(r_ebx+0x38u);
    /* 0065003c: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x650041u); f_0082d838();
    /* 00650041: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 00650044: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00650046: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x65004bu); f_0082d8bc();
L_00650047:; BB(0x00650047);
    /* 00650047: jno 0x650021 */ if (!fO) goto L_00650021;
L_00650049:; BB(0x00650049);
    /* 00650049: sbb eax, 0x64838b00 */ { u32 c = fC; u32 a = r_eax; u32 b = 0x64838b00u; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 0065004b: mov eax, dword ptr [ebx + 0x364] */ r_eax = R32((u32)(r_ebx+0x364u));
    /* 0065004e: add eax, dword ptr [eax] */ {  u32 a = r_eax; u32 b = R32((u32)(r_eax)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00650050: add byte ptr [ebp - 0x72f48b40], al */ { u32 ad = (u32)(r_ebp+0x8d0b74c0u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00650051: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00650053: je 0x650060 */ if (fZ) goto L_00650060;
L_00650055:; BB(0x00650055);
    /* 00650055: lea ecx, [ebx + 0x368] */ r_ecx = (u32)(r_ebx+0x368u);
    /* 00650056: mov ebp, dword ptr [eax + 3] */ r_ebp = R32((u32)(r_eax+0x3u));
    /* 00650059: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0065005b: call 0x831290 */ r_esp -= 4; W32(r_esp, 0x650060u); f_00831290();
L_00650060:; BB(0x00650060);
    /* 00650060: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x650065u); f_004f7c84();
    /* 00650065: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00650068: je 0x650085 */ if (fZ) goto L_00650085;
L_0065006a:; BB(0x0065006a);
    /* 0065006a: push dword ptr [ebx + 0xc0] */ { u32 v = R32((u32)(r_ebx+0xc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00650070: mov ecx, dword ptr [ebx + 0x34] */ r_ecx = R32((u32)(r_ebx+0x34u));
    /* 00650073: mov edx, dword ptr [ebx + 0xf8] */ r_edx = R32((u32)(r_ebx+0xf8u));
    /* 00650079: call 0x83bd00 */ r_esp -= 4; W32(r_esp, 0x65007eu); f_0083bd00();
L_0065007e:; BB(0x0065007e);
    /* 0065007e: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x650083u); f_0082da80();
L_00650083:; BB(0x00650083);
    /* 00650083: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00650084: ret  */ FN_RET(0x00650047); r_esp += 4; return;
L_00650085:; BB(0x00650085);
    /* 00650085: mov ecx, dword ptr [ebx + 0x34] */ r_ecx = R32((u32)(r_ebx+0x34u));
    /* 00650088: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x65008du); f_00831758();
    /* 0065008d: jmp 0x65007e */ goto L_0065007e;
}

void f_00650048(void)
{
    FN_ENTER(0x00650048);
    /* 00650048: fcomp dword ptr [0x64838b00] */ fx_compare(ST(0), R_F32((u32)(0x64838b00u))); FPOP();
    /* 0065004e: add eax, dword ptr [eax] */ {  u32 a = r_eax; u32 b = R32((u32)(r_eax)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00650050: add byte ptr [ebp - 0x72f48b40], al */ { u32 ad = (u32)(r_ebp+0x8d0b74c0u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00650056: mov ebp, dword ptr [eax + 3] */ r_ebp = R32((u32)(r_eax+0x3u));
    /* 00650059: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0065005b: call 0x831290 */ r_esp -= 4; W32(r_esp, 0x650060u); f_00831290();
    /* 00650060: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x650065u); f_004f7c84();
    /* 00650065: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00650068: je 0x650085 */ if (fZ) goto L_00650085;
L_0065006a:; BB(0x0065006a);
    /* 0065006a: push dword ptr [ebx + 0xc0] */ { u32 v = R32((u32)(r_ebx+0xc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00650070: mov ecx, dword ptr [ebx + 0x34] */ r_ecx = R32((u32)(r_ebx+0x34u));
    /* 00650073: mov edx, dword ptr [ebx + 0xf8] */ r_edx = R32((u32)(r_ebx+0xf8u));
    /* 00650079: call 0x83bd00 */ r_esp -= 4; W32(r_esp, 0x65007eu); f_0083bd00();
L_0065007e:; BB(0x0065007e);
    /* 0065007e: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x650083u); f_0082da80();
    /* 00650083: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00650084: ret  */ FN_RET(0x00650048); r_esp += 4; return;
L_00650085:; BB(0x00650085);
    /* 00650085: mov ecx, dword ptr [ebx + 0x34] */ r_ecx = R32((u32)(r_ebx+0x34u));
    /* 00650088: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x65008du); f_00831758();
    /* 0065008d: jmp 0x65007e */ goto L_0065007e;
}

void f_0065004c(void)
{
    FN_ENTER(0x0065004c);
    /* 0065004c: and dword ptr [ebx + eax], 0 */ { u32 ad = (u32)(r_ebx+r_eax);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00650051: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00650053: je 0x650060 */ if (fZ) goto L_00650060;
L_00650055:; BB(0x00650055);
    /* 00650055: lea ecx, [ebx + 0x368] */ r_ecx = (u32)(r_ebx+0x368u);
    /* 0065005b: call 0x831290 */ r_esp -= 4; W32(r_esp, 0x650060u); f_00831290();
L_00650060:; BB(0x00650060);
    /* 00650060: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x650065u); f_004f7c84();
    /* 00650065: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00650068: je 0x650085 */ if (fZ) goto L_00650085;
L_0065006a:; BB(0x0065006a);
    /* 0065006a: push dword ptr [ebx + 0xc0] */ { u32 v = R32((u32)(r_ebx+0xc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00650070: mov ecx, dword ptr [ebx + 0x34] */ r_ecx = R32((u32)(r_ebx+0x34u));
    /* 00650073: mov edx, dword ptr [ebx + 0xf8] */ r_edx = R32((u32)(r_ebx+0xf8u));
    /* 00650079: call 0x83bd00 */ r_esp -= 4; W32(r_esp, 0x65007eu); f_0083bd00();
L_0065007e:; BB(0x0065007e);
    /* 0065007e: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x650083u); f_0082da80();
    /* 00650083: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00650084: ret  */ FN_RET(0x0065004c); r_esp += 4; return;
L_00650085:; BB(0x00650085);
    /* 00650085: mov ecx, dword ptr [ebx + 0x34] */ r_ecx = R32((u32)(r_ebx+0x34u));
    /* 00650088: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x65008du); f_00831758();
    /* 0065008d: jmp 0x65007e */ goto L_0065007e;
}

void f_00650052(void)
{
    FN_ENTER(0x00650052);
    goto L_00650052;
L_0065004e:; BB(0x0065004e);
    /* 0065004e: add eax, dword ptr [eax] */ {  u32 a = r_eax; u32 b = R32((u32)(r_eax)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00650050: add byte ptr [ebp - 0x72f48b40], al */ { u32 ad = (u32)(r_ebp+0x8d0b74c0u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
L_00650052:; BB(0x00650052);
    /* 00650052: sal byte ptr [ebx + ecx - 0x73], 0x8b */ { u32 ad = (u32)(r_ebx+r_ecx+0xffffff8du); u32 c = (11u) & 31; u32 a = R8(ad); u32 r = a; if (c) { r = (a << c) & 0xffu; W8(ad, r);  } }
    /* 00650056: mov ebp, dword ptr [eax + 3] */ r_ebp = R32((u32)(r_eax+0x3u));
    /* 00650057: push 0xe8000003 */ { u32 v = 0xe8000003u; r_esp -= 4; W32(r_esp, v); }
    /* 00650059: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0065005b: call 0x831290 */ r_esp -= 4; W32(r_esp, 0x650060u); f_00831290();
    /* 0065005c: xor byte ptr [edx], dl */ { u32 ad = (u32)(r_edx);  u32 a = R8(ad); u32 b = (u8)r_edx; u32 r = (a ^ b) & 0xffu; W8(ad, r);  }
    /* 0065005e: push ds */ { u32 v = 0x2bu; r_esp -= 4; W32(r_esp, v); }
    /* 0065005f: add al, ch */ {  u32 a = (u8)r_eax; u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fS = ((r >> 7) & 1); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; }
    /* 00650060: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x650065u); f_004f7c84();
    /* 00650061: pop ds */ UNSUP(0x00650061, "pop ds");
    /* 00650062: jl 0x65004e */ if ((fS!=fO)) goto L_0065004e;
L_00650064:; BB(0x00650064);
    /* 00650064: inc dword ptr [ebx + 0x1b7401f8] */ { u32 ad = (u32)(r_ebx+0x1b7401f8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00650065: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00650068: je 0x650085 */ if (fZ) goto L_00650085;
L_0065006a:; BB(0x0065006a);
    /* 0065006a: push dword ptr [ebx + 0xc0] */ { u32 v = R32((u32)(r_ebx+0xc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00650070: mov ecx, dword ptr [ebx + 0x34] */ r_ecx = R32((u32)(r_ebx+0x34u));
    /* 00650073: mov edx, dword ptr [ebx + 0xf8] */ r_edx = R32((u32)(r_ebx+0xf8u));
    /* 00650079: call 0x83bd00 */ r_esp -= 4; W32(r_esp, 0x65007eu); f_0083bd00();
L_0065007e:; BB(0x0065007e);
    /* 0065007e: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x650083u); f_0082da80();
    /* 00650083: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00650084: ret  */ FN_RET(0x00650052); r_esp += 4; return;
L_00650085:; BB(0x00650085);
    /* 00650085: mov ecx, dword ptr [ebx + 0x34] */ r_ecx = R32((u32)(r_ebx+0x34u));
    /* 00650088: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x65008du); f_00831758();
    /* 0065008d: jmp 0x65007e */ goto L_0065007e;
}

void f_00650053(void)
{
    FN_ENTER(0x00650053);
    /* 00650053: je 0x650060 */ if (fZ) goto L_00650060;
L_00650055:; BB(0x00650055);
    /* 00650055: lea ecx, [ebx + 0x368] */ r_ecx = (u32)(r_ebx+0x368u);
    /* 0065005b: call 0x831290 */ r_esp -= 4; W32(r_esp, 0x650060u); f_00831290();
L_00650060:; BB(0x00650060);
    /* 00650060: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x650065u); f_004f7c84();
    /* 00650065: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00650068: je 0x650085 */ if (fZ) goto L_00650085;
L_0065006a:; BB(0x0065006a);
    /* 0065006a: push dword ptr [ebx + 0xc0] */ { u32 v = R32((u32)(r_ebx+0xc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00650070: mov ecx, dword ptr [ebx + 0x34] */ r_ecx = R32((u32)(r_ebx+0x34u));
    /* 00650073: mov edx, dword ptr [ebx + 0xf8] */ r_edx = R32((u32)(r_ebx+0xf8u));
    /* 00650079: call 0x83bd00 */ r_esp -= 4; W32(r_esp, 0x65007eu); f_0083bd00();
L_0065007e:; BB(0x0065007e);
    /* 0065007e: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x650083u); f_0082da80();
    /* 00650083: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00650084: ret  */ FN_RET(0x00650053); r_esp += 4; return;
L_00650085:; BB(0x00650085);
    /* 00650085: mov ecx, dword ptr [ebx + 0x34] */ r_ecx = R32((u32)(r_ebx+0x34u));
    /* 00650088: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x65008du); f_00831758();
    /* 0065008d: jmp 0x65007e */ goto L_0065007e;
}

void f_00650056(void)
{
    FN_ENTER(0x00650056);
    /* 00650056: mov ebp, dword ptr [eax + 3] */ r_ebp = R32((u32)(r_eax+0x3u));
    /* 00650059: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0065005b: call 0x831290 */ r_esp -= 4; W32(r_esp, 0x650060u); f_00831290();
    /* 00650060: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x650065u); f_004f7c84();
    /* 00650065: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00650068: je 0x650085 */ if (fZ) goto L_00650085;
L_0065006a:; BB(0x0065006a);
    /* 0065006a: push dword ptr [ebx + 0xc0] */ { u32 v = R32((u32)(r_ebx+0xc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00650070: mov ecx, dword ptr [ebx + 0x34] */ r_ecx = R32((u32)(r_ebx+0x34u));
    /* 00650073: mov edx, dword ptr [ebx + 0xf8] */ r_edx = R32((u32)(r_ebx+0xf8u));
    /* 00650079: call 0x83bd00 */ r_esp -= 4; W32(r_esp, 0x65007eu); f_0083bd00();
L_0065007e:; BB(0x0065007e);
    /* 0065007e: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x650083u); f_0082da80();
    /* 00650083: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00650084: ret  */ FN_RET(0x00650056); r_esp += 4; return;
L_00650085:; BB(0x00650085);
    /* 00650085: mov ecx, dword ptr [ebx + 0x34] */ r_ecx = R32((u32)(r_ebx+0x34u));
    /* 00650088: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x65008du); f_00831758();
    /* 0065008d: jmp 0x65007e */ goto L_0065007e;
}

void f_0065005f(void)
{
    FN_ENTER(0x0065005f);
    goto L_0065005f;
L_0065004e:; BB(0x0065004e);
    /* 0065004e: add eax, dword ptr [eax] */ {  u32 a = r_eax; u32 b = R32((u32)(r_eax)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00650050: add byte ptr [ebp - 0x72f48b40], al */ { u32 ad = (u32)(r_ebp+0x8d0b74c0u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00650056: mov ebp, dword ptr [eax + 3] */ r_ebp = R32((u32)(r_eax+0x3u));
    /* 00650059: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0065005b: call 0x831290 */ r_esp -= 4; W32(r_esp, 0x650060u); f_00831290();
L_0065005f:; BB(0x0065005f);
    /* 0065005f: add al, ch */ {  u32 a = (u8)r_eax; u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fS = ((r >> 7) & 1); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; }
    /* 00650060: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x650065u); f_004f7c84();
    /* 00650061: pop ds */ UNSUP(0x00650061, "pop ds");
    /* 00650062: jl 0x65004e */ if ((fS!=fO)) goto L_0065004e;
L_00650064:; BB(0x00650064);
    /* 00650064: inc dword ptr [ebx + 0x1b7401f8] */ { u32 ad = (u32)(r_ebx+0x1b7401f8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00650065: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00650068: je 0x650085 */ if (fZ) goto L_00650085;
L_0065006a:; BB(0x0065006a);
    /* 0065006a: push dword ptr [ebx + 0xc0] */ { u32 v = R32((u32)(r_ebx+0xc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00650070: mov ecx, dword ptr [ebx + 0x34] */ r_ecx = R32((u32)(r_ebx+0x34u));
    /* 00650073: mov edx, dword ptr [ebx + 0xf8] */ r_edx = R32((u32)(r_ebx+0xf8u));
    /* 00650079: call 0x83bd00 */ r_esp -= 4; W32(r_esp, 0x65007eu); f_0083bd00();
L_0065007e:; BB(0x0065007e);
    /* 0065007e: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x650083u); f_0082da80();
    /* 00650083: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00650084: ret  */ FN_RET(0x0065005f); r_esp += 4; return;
L_00650085:; BB(0x00650085);
    /* 00650085: mov ecx, dword ptr [ebx + 0x34] */ r_ecx = R32((u32)(r_ebx+0x34u));
    /* 00650088: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x65008du); f_00831758();
    /* 0065008d: jmp 0x65007e */ goto L_0065007e;
}

void f_00650063(void)
{
    FN_ENTER(0x00650063);
    /* 00650063: ljmp 0x1b74:0x1f883ff */ UNSUP(0x00650063, "ljmp 0x1b74:0x1f883ff");
    /* 0065006a: push dword ptr [ebx + 0xc0] */ { u32 v = R32((u32)(r_ebx+0xc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00650070: mov ecx, dword ptr [ebx + 0x34] */ r_ecx = R32((u32)(r_ebx+0x34u));
    /* 00650073: mov edx, dword ptr [ebx + 0xf8] */ r_edx = R32((u32)(r_ebx+0xf8u));
    /* 00650079: call 0x83bd00 */ r_esp -= 4; W32(r_esp, 0x65007eu); f_0083bd00();
    /* 0065007e: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x650083u); f_0082da80();
    /* 00650083: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00650084: ret  */ FN_RET(0x00650063); r_esp += 4; return;
}

void f_00650064(void)
{
    FN_ENTER(0x00650064);
    /* 00650064: inc dword ptr [ebx + 0x1b7401f8] */ { u32 ad = (u32)(r_ebx+0x1b7401f8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0065006a: push dword ptr [ebx + 0xc0] */ { u32 v = R32((u32)(r_ebx+0xc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00650070: mov ecx, dword ptr [ebx + 0x34] */ r_ecx = R32((u32)(r_ebx+0x34u));
    /* 00650073: mov edx, dword ptr [ebx + 0xf8] */ r_edx = R32((u32)(r_ebx+0xf8u));
    /* 00650079: call 0x83bd00 */ r_esp -= 4; W32(r_esp, 0x65007eu); f_0083bd00();
    /* 0065007e: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x650083u); f_0082da80();
    /* 00650083: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00650084: ret  */ FN_RET(0x00650064); r_esp += 4; return;
}

void f_00650065(void)
{
    FN_ENTER(0x00650065);
    /* 00650065: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00650068: je 0x650085 */ if (fZ) goto L_00650085;
L_0065006a:; BB(0x0065006a);
    /* 0065006a: push dword ptr [ebx + 0xc0] */ { u32 v = R32((u32)(r_ebx+0xc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00650070: mov ecx, dword ptr [ebx + 0x34] */ r_ecx = R32((u32)(r_ebx+0x34u));
    /* 00650073: mov edx, dword ptr [ebx + 0xf8] */ r_edx = R32((u32)(r_ebx+0xf8u));
    /* 00650079: call 0x83bd00 */ r_esp -= 4; W32(r_esp, 0x65007eu); f_0083bd00();
L_0065007e:; BB(0x0065007e);
    /* 0065007e: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x650083u); f_0082da80();
    /* 00650083: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00650084: ret  */ FN_RET(0x00650065); r_esp += 4; return;
L_00650085:; BB(0x00650085);
    /* 00650085: mov ecx, dword ptr [ebx + 0x34] */ r_ecx = R32((u32)(r_ebx+0x34u));
    /* 00650088: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x65008du); f_00831758();
    /* 0065008d: jmp 0x65007e */ goto L_0065007e;
}

void f_00650066(void)
{
    FN_ENTER(0x00650066);
    /* 00650066: clc  */ fC = 0;
    /* 00650067: add dword ptr [ebx + ebx - 1], esi */ { u32 ad = (u32)(r_ebx+r_ebx+0xffffffffu);  u32 a = R32(ad); u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0065006b: mov bl, 0xc0 */ r_ebx = (r_ebx & 0xffffff00u) | ((0xc0u) & 0xffu);
    /* 0065006d: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0065006f: add byte ptr [ebx - 0x6c74cbb5], cl */ { u32 ad = (u32)(r_ebx+0x938b344bu);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00650075: clc  */ fC = 0;
    /* 00650076: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00650078: add al, ch */ {  u32 a = (u8)r_eax; u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0065007a: cmp byte ptr [esi + ebx - 0x26021800], 0x1d */ {  u32 a = R8((u32)(r_esi+r_ebx+0xd9fde800u)); u32 b = 0x1du; u32 r = (a - b) & 0xffu;   }
L_0065007e:; BB(0x0065007e);
    /* 0065007e: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x650083u); f_0082da80();
    /* 00650082: add byte ptr [ebx - 0x3d], bl */ { u32 ad = (u32)(r_ebx+0xffffffc3u);  u32 a = R8(ad); u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00650083: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00650084: ret  */ FN_RET(0x00650066); r_esp += 4; return;
    /* 00650085: mov ecx, dword ptr [ebx + 0x34] */ r_ecx = R32((u32)(r_ebx+0x34u));
    /* 00650088: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x65008du); f_00831758();
    /* 0065008d: jmp 0x65007e */ goto L_0065007e;
}

void f_00650067(void)
{
    FN_ENTER(0x00650067);
    /* 00650067: add dword ptr [ebx + ebx - 1], esi */ { u32 ad = (u32)(r_ebx+r_ebx+0xffffffffu);  u32 a = R32(ad); u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0065006b: mov bl, 0xc0 */ r_ebx = (r_ebx & 0xffffff00u) | ((0xc0u) & 0xffu);
    /* 0065006d: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0065006f: add byte ptr [ebx - 0x6c74cbb5], cl */ { u32 ad = (u32)(r_ebx+0x938b344bu);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00650075: clc  */ fC = 0;
    /* 00650076: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00650078: add al, ch */ {  u32 a = (u8)r_eax; u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0065007a: cmp byte ptr [esi + ebx - 0x26021800], 0x1d */ {  u32 a = R8((u32)(r_esi+r_ebx+0xd9fde800u)); u32 b = 0x1du; u32 r = (a - b) & 0xffu;   }
L_0065007e:; BB(0x0065007e);
    /* 0065007e: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x650083u); f_0082da80();
    /* 00650082: add byte ptr [ebx - 0x3d], bl */ { u32 ad = (u32)(r_ebx+0xffffffc3u);  u32 a = R8(ad); u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00650083: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00650084: ret  */ FN_RET(0x00650067); r_esp += 4; return;
    /* 00650085: mov ecx, dword ptr [ebx + 0x34] */ r_ecx = R32((u32)(r_ebx+0x34u));
    /* 00650088: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x65008du); f_00831758();
    /* 0065008d: jmp 0x65007e */ goto L_0065007e;
}

void f_00650068(void)
{
    FN_ENTER(0x00650068);
    /* 00650068: je 0x650085 */ if (fZ) goto L_00650085;
L_0065006a:; BB(0x0065006a);
    /* 0065006a: push dword ptr [ebx + 0xc0] */ { u32 v = R32((u32)(r_ebx+0xc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00650070: mov ecx, dword ptr [ebx + 0x34] */ r_ecx = R32((u32)(r_ebx+0x34u));
    /* 00650073: mov edx, dword ptr [ebx + 0xf8] */ r_edx = R32((u32)(r_ebx+0xf8u));
    /* 00650079: call 0x83bd00 */ r_esp -= 4; W32(r_esp, 0x65007eu); f_0083bd00();
L_0065007e:; BB(0x0065007e);
    /* 0065007e: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x650083u); f_0082da80();
    /* 00650083: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00650084: ret  */ FN_RET(0x00650068); r_esp += 4; return;
L_00650085:; BB(0x00650085);
    /* 00650085: mov ecx, dword ptr [ebx + 0x34] */ r_ecx = R32((u32)(r_ebx+0x34u));
    /* 00650088: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x65008du); f_00831758();
    /* 0065008d: jmp 0x65007e */ goto L_0065007e;
}

void f_00650069(void)
{
    FN_ENTER(0x00650069);
    /* 00650069: sbb edi, edi */ { u32 c = fC; u32 a = r_edi; u32 b = r_edi; u32 r = (a - b - c) & 0xffffffffu; r_edi = r;  }
    /* 0065006b: mov bl, 0xc0 */ r_ebx = (r_ebx & 0xffffff00u) | ((0xc0u) & 0xffu);
    /* 0065006d: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0065006f: add byte ptr [ebx - 0x6c74cbb5], cl */ { u32 ad = (u32)(r_ebx+0x938b344bu);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00650075: clc  */ fC = 0;
    /* 00650076: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00650078: add al, ch */ {  u32 a = (u8)r_eax; u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0065007a: cmp byte ptr [esi + ebx - 0x26021800], 0x1d */ {  u32 a = R8((u32)(r_esi+r_ebx+0xd9fde800u)); u32 b = 0x1du; u32 r = (a - b) & 0xffu;   }
L_0065007e:; BB(0x0065007e);
    /* 0065007e: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x650083u); f_0082da80();
    /* 00650082: add byte ptr [ebx - 0x3d], bl */ { u32 ad = (u32)(r_ebx+0xffffffc3u);  u32 a = R8(ad); u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00650083: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00650084: ret  */ FN_RET(0x00650069); r_esp += 4; return;
    /* 00650085: mov ecx, dword ptr [ebx + 0x34] */ r_ecx = R32((u32)(r_ebx+0x34u));
    /* 00650088: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x65008du); f_00831758();
    /* 0065008d: jmp 0x65007e */ goto L_0065007e;
}

void f_0065006c(void)
{
    FN_ENTER(0x0065006c);
    /* 0065006c: rol byte ptr [eax], 0 */ { u32 ad = (u32)(r_eax); u32 c = (0u) & 31; u32 a = R8(ad); u32 r = a; if (c) { { u32 k = c % 8; r = k ? (((a << k) | (a >> (8 - k))) & 0xffu) : a; } W8(ad, r);  } }
    /* 0065006f: add byte ptr [ebx - 0x6c74cbb5], cl */ { u32 ad = (u32)(r_ebx+0x938b344bu);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00650075: clc  */ fC = 0;
    /* 00650076: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00650078: add al, ch */ {  u32 a = (u8)r_eax; u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0065007a: cmp byte ptr [esi + ebx - 0x26021800], 0x1d */ {  u32 a = R8((u32)(r_esi+r_ebx+0xd9fde800u)); u32 b = 0x1du; u32 r = (a - b) & 0xffu;   }
L_0065007e:; BB(0x0065007e);
    /* 0065007e: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x650083u); f_0082da80();
    /* 00650082: add byte ptr [ebx - 0x3d], bl */ { u32 ad = (u32)(r_ebx+0xffffffc3u);  u32 a = R8(ad); u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00650083: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00650084: ret  */ FN_RET(0x0065006c); r_esp += 4; return;
    /* 00650085: mov ecx, dword ptr [ebx + 0x34] */ r_ecx = R32((u32)(r_ebx+0x34u));
    /* 00650088: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x65008du); f_00831758();
    /* 0065008d: jmp 0x65007e */ goto L_0065007e;
}

void f_0065006d(void)
{
    FN_ENTER(0x0065006d);
    /* 0065006d: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0065006f: add byte ptr [ebx - 0x6c74cbb5], cl */ { u32 ad = (u32)(r_ebx+0x938b344bu);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00650075: clc  */ fC = 0;
    /* 00650076: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00650078: add al, ch */ {  u32 a = (u8)r_eax; u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0065007a: cmp byte ptr [esi + ebx - 0x26021800], 0x1d */ {  u32 a = R8((u32)(r_esi+r_ebx+0xd9fde800u)); u32 b = 0x1du; u32 r = (a - b) & 0xffu;   }
L_0065007e:; BB(0x0065007e);
    /* 0065007e: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x650083u); f_0082da80();
    /* 00650082: add byte ptr [ebx - 0x3d], bl */ { u32 ad = (u32)(r_ebx+0xffffffc3u);  u32 a = R8(ad); u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00650083: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00650084: ret  */ FN_RET(0x0065006d); r_esp += 4; return;
    /* 00650085: mov ecx, dword ptr [ebx + 0x34] */ r_ecx = R32((u32)(r_ebx+0x34u));
    /* 00650088: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x65008du); f_00831758();
    /* 0065008d: jmp 0x65007e */ goto L_0065007e;
}

void f_0065006e(void)
{
    FN_ENTER(0x0065006e);
    /* 0065006e: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00650070: mov ecx, dword ptr [ebx + 0x34] */ r_ecx = R32((u32)(r_ebx+0x34u));
    /* 00650073: mov edx, dword ptr [ebx + 0xf8] */ r_edx = R32((u32)(r_ebx+0xf8u));
    /* 00650079: call 0x83bd00 */ r_esp -= 4; W32(r_esp, 0x65007eu); f_0083bd00();
    /* 0065007e: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x650083u); f_0082da80();
    /* 00650083: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00650084: ret  */ FN_RET(0x0065006e); r_esp += 4; return;
}

void f_00650072(void)
{
    FN_ENTER(0x00650072);
    /* 00650072: xor al, 0x8b */ {  u32 a = (u8)r_eax; u32 b = 0x8bu; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00650074: xchg ebx, eax */ { u32 x = r_ebx; u32 y = r_eax; r_ebx = y; r_eax = x; }
    /* 00650075: clc  */ fC = 0;
    /* 00650076: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00650078: add al, ch */ {  u32 a = (u8)r_eax; u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0065007a: cmp byte ptr [esi + ebx - 0x26021800], 0x1d */ {  u32 a = R8((u32)(r_esi+r_ebx+0xd9fde800u)); u32 b = 0x1du; u32 r = (a - b) & 0xffu;   }
L_0065007e:; BB(0x0065007e);
    /* 0065007e: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x650083u); f_0082da80();
    /* 00650082: add byte ptr [ebx - 0x3d], bl */ { u32 ad = (u32)(r_ebx+0xffffffc3u);  u32 a = R8(ad); u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00650083: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00650084: ret  */ FN_RET(0x00650072); r_esp += 4; return;
    /* 00650085: mov ecx, dword ptr [ebx + 0x34] */ r_ecx = R32((u32)(r_ebx+0x34u));
    /* 00650088: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x65008du); f_00831758();
    /* 0065008d: jmp 0x65007e */ goto L_0065007e;
}

void f_00650073(void)
{
    FN_ENTER(0x00650073);
    /* 00650073: mov edx, dword ptr [ebx + 0xf8] */ r_edx = R32((u32)(r_ebx+0xf8u));
    /* 00650079: call 0x83bd00 */ r_esp -= 4; W32(r_esp, 0x65007eu); f_0083bd00();
    /* 0065007e: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x650083u); f_0082da80();
    /* 00650083: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00650084: ret  */ FN_RET(0x00650073); r_esp += 4; return;
}

void f_00650074(void)
{
    FN_ENTER(0x00650074);
    /* 00650074: xchg ebx, eax */ { u32 x = r_ebx; u32 y = r_eax; r_ebx = y; r_eax = x; }
    /* 00650075: clc  */ fC = 0;
    /* 00650076: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00650078: add al, ch */ {  u32 a = (u8)r_eax; u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0065007a: cmp byte ptr [esi + ebx - 0x26021800], 0x1d */ {  u32 a = R8((u32)(r_esi+r_ebx+0xd9fde800u)); u32 b = 0x1du; u32 r = (a - b) & 0xffu;   }
L_0065007e:; BB(0x0065007e);
    /* 0065007e: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x650083u); f_0082da80();
    /* 00650082: add byte ptr [ebx - 0x3d], bl */ { u32 ad = (u32)(r_ebx+0xffffffc3u);  u32 a = R8(ad); u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00650083: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00650084: ret  */ FN_RET(0x00650074); r_esp += 4; return;
    /* 00650085: mov ecx, dword ptr [ebx + 0x34] */ r_ecx = R32((u32)(r_ebx+0x34u));
    /* 00650088: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x65008du); f_00831758();
    /* 0065008d: jmp 0x65007e */ goto L_0065007e;
}

void f_00650075(void)
{
    FN_ENTER(0x00650075);
    /* 00650075: clc  */ fC = 0;
    /* 00650076: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00650078: add al, ch */ {  u32 a = (u8)r_eax; u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0065007a: cmp byte ptr [esi + ebx - 0x26021800], 0x1d */ {  u32 a = R8((u32)(r_esi+r_ebx+0xd9fde800u)); u32 b = 0x1du; u32 r = (a - b) & 0xffu;   }
L_0065007e:; BB(0x0065007e);
    /* 0065007e: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x650083u); f_0082da80();
    /* 00650082: add byte ptr [ebx - 0x3d], bl */ { u32 ad = (u32)(r_ebx+0xffffffc3u);  u32 a = R8(ad); u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00650083: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00650084: ret  */ FN_RET(0x00650075); r_esp += 4; return;
    /* 00650085: mov ecx, dword ptr [ebx + 0x34] */ r_ecx = R32((u32)(r_ebx+0x34u));
    /* 00650088: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x65008du); f_00831758();
    /* 0065008d: jmp 0x65007e */ goto L_0065007e;
}

void f_00650076(void)
{
    FN_ENTER(0x00650076);
    /* 00650076: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00650078: add al, ch */ {  u32 a = (u8)r_eax; u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0065007a: cmp byte ptr [esi + ebx - 0x26021800], 0x1d */ {  u32 a = R8((u32)(r_esi+r_ebx+0xd9fde800u)); u32 b = 0x1du; u32 r = (a - b) & 0xffu;   }
L_0065007e:; BB(0x0065007e);
    /* 0065007e: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x650083u); f_0082da80();
    /* 00650082: add byte ptr [ebx - 0x3d], bl */ { u32 ad = (u32)(r_ebx+0xffffffc3u);  u32 a = R8(ad); u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00650083: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00650084: ret  */ FN_RET(0x00650076); r_esp += 4; return;
    /* 00650085: mov ecx, dword ptr [ebx + 0x34] */ r_ecx = R32((u32)(r_ebx+0x34u));
    /* 00650088: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x65008du); f_00831758();
    /* 0065008d: jmp 0x65007e */ goto L_0065007e;
}

void f_00650079(void)
{
    FN_ENTER(0x00650079);
    /* 00650079: call 0x83bd00 */ r_esp -= 4; W32(r_esp, 0x65007eu); f_0083bd00();
    /* 0065007e: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x650083u); f_0082da80();
    /* 00650083: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00650084: ret  */ FN_RET(0x00650079); r_esp += 4; return;
}

void f_0065007a(void)
{
    FN_ENTER(0x0065007a);
    /* 0065007a: cmp byte ptr [esi + ebx - 0x26021800], 0x1d */ {  u32 a = R8((u32)(r_esi+r_ebx+0xd9fde800u)); u32 b = 0x1du; u32 r = (a - b) & 0xffu;   }
L_0065007e:; BB(0x0065007e);
    /* 0065007e: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x650083u); f_0082da80();
    /* 00650082: add byte ptr [ebx - 0x3d], bl */ { u32 ad = (u32)(r_ebx+0xffffffc3u);  u32 a = R8(ad); u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00650083: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00650084: ret  */ FN_RET(0x0065007a); r_esp += 4; return;
    /* 00650085: mov ecx, dword ptr [ebx + 0x34] */ r_ecx = R32((u32)(r_ebx+0x34u));
    /* 00650088: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x65008du); f_00831758();
    /* 0065008d: jmp 0x65007e */ goto L_0065007e;
}

void f_00650090(void) /* sub_650090 */
{
    FN_ENTER(0x00650090);
    /* 00650090: fld dword ptr [0x936c00] */ FPUSH(R_F32((u32)(0x936c00u)));
    /* 00650096: fadd dword ptr [ecx + 0x68] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x68u));
    /* 00650099: mov eax, dword ptr [ecx + 0x8c] */ r_eax = R32((u32)(r_ecx+0x8cu));
    /* 0065009f: mov edx, dword ptr [ecx + 0x38] */ r_edx = R32((u32)(r_ecx+0x38u));
    /* 006500a2: fld dword ptr [0x936bfc] */ FPUSH(R_F32((u32)(0x936bfcu)));
    /* 006500a8: fadd dword ptr [ecx + 0x6c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x6cu));
    /* 006500ab: fld dword ptr [0x936bf8] */ FPUSH(R_F32((u32)(0x936bf8u)));
    /* 006500b1: fadd dword ptr [ecx + 0x70] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x70u));
    /* 006500b4: fld dword ptr [ecx + 0x3c] */ FPUSH(R_F32((u32)(r_ecx+0x3cu)));
    /* 006500b7: fld dword ptr [0x9c786c] */ FPUSH(R_F32((u32)(0x9c786cu)));
    /* 006500bd: fld dword ptr [0x936bf0] */ FPUSH(R_F32((u32)(0x936bf0u)));
    /* 006500c3: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 006500c5: fstp dword ptr [ecx + 0x340] */ W_F32((u32)(r_ecx+0x340u), ST(0)); FPOP();
    /* 006500cb: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 006500cd: fstp dword ptr [ecx + 0x344] */ W_F32((u32)(r_ecx+0x344u), ST(0)); FPOP();
    /* 006500d3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006500d5: fstp dword ptr [ecx + 0x348] */ W_F32((u32)(r_ecx+0x348u), ST(0)); FPOP();
    /* 006500db: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 006500dd: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 006500df: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 006500e1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006500e3: fst dword ptr [ecx + 0x350] */ W_F32((u32)(r_ecx+0x350u), ST(0));
    /* 006500e9: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 006500eb: fstp dword ptr [ecx + 0x35c] */ W_F32((u32)(r_ecx+0x35cu), ST(0)); FPOP();
    /* 006500f1: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006500f4: mov dword ptr [ecx + 0x374], eax */ W32((u32)(r_ecx+0x374u), r_eax);
    /* 006500fa: mov eax, dword ptr [ecx + 0x40] */ r_eax = R32((u32)(r_ecx+0x40u));
    /* 006500fd: mov dword ptr [ecx + 0x364], 0 */ W32((u32)(r_ecx+0x364u), 0x0u);
    /* 00650107: mov dword ptr [ecx + 0x34c], edx */ W32((u32)(r_ecx+0x34cu), r_edx);
    /* 0065010d: mov dword ptr [ecx + 0x354], eax */ W32((u32)(r_ecx+0x354u), r_eax);
    /* 00650113: mov dword ptr [ecx + 0x358], edx */ W32((u32)(r_ecx+0x358u), r_edx);
    /* 00650119: mov dword ptr [ecx + 0x368], 0x3f800000 */ W32((u32)(r_ecx+0x368u), 0x3f800000u);
    /* 00650123: mov dword ptr [ecx + 0x360], eax */ W32((u32)(r_ecx+0x360u), r_eax);
    /* 00650129: mov dword ptr [ecx + 0x36c], 0x3f800000 */ W32((u32)(r_ecx+0x36cu), 0x3f800000u);
    /* 00650133: mov dword ptr [ecx + 0x370], 0x3f800000 */ W32((u32)(r_ecx+0x370u), 0x3f800000u);
    /* 0065013d: ret  */ FN_RET(0x00650090); r_esp += 4; return;
}

void f_00650140(void) /* sub_650140 */
{
    FN_ENTER(0x00650140);
    /* 00650140: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00650141: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00650143: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 00650147: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0065014b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065014d: je 0x650159 */ if (fZ) goto L_00650159;
L_0065014f:; BB(0x0065014f);
    /* 0065014f: movsx eax, word ptr [edx] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx));
    /* 00650152: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00650155: jne 0x65016b */ if (!fZ) goto L_0065016b;
L_00650157:; BB(0x00650157);
    /* 00650157: jmp 0x65016f */ goto L_0065016f;
L_00650159:; BB(0x00650159);
    /* 00650159: movsx eax, word ptr [edx] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx));
    /* 0065015c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0065015f: jne 0x65016b */ if (!fZ) goto L_0065016b;
L_00650161:; BB(0x00650161);
    /* 00650161: mov dword ptr [ebp + 0x364], 1 */ W32((u32)(r_ebp+0x364u), 0x1u);
L_0065016b:; BB(0x0065016b);
    /* 0065016b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065016c: ret 8 */ FN_RET(0x00650140); r_esp += 12; return;
L_0065016f:; BB(0x0065016f);
    /* 0065016f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00650171: call 0x650184 */ r_esp -= 4; W32(r_esp, 0x650176u); f_00650184();
    /* 00650176: mov dword ptr [ebp + 0x364], 1 */ W32((u32)(r_ebp+0x364u), 0x1u);
    /* 00650180: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00650181: ret 8 */ FN_RET(0x00650140); r_esp += 12; return;
}

void f_00650184(void) /* sub_650184 */
{
    FN_ENTER(0x00650184);
    /* 00650184: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00650185: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00650186: mov edi, ecx */ r_edi = r_ecx;
    /* 00650188: mov eax, dword ptr [edi + 0x364] */ r_eax = R32((u32)(r_edi+0x364u));
    /* 0065018e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00650190: jne 0x6501e1 */ if (!fZ) goto L_006501e1;
L_00650192:; BB(0x00650192);
    /* 00650192: mov eax, 1 */ r_eax = 0x1u;
    /* 00650197: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00650198: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065019a: mov dword ptr [edi + 0x364], eax */ W32((u32)(r_edi+0x364u), r_eax);
    /* 006501a0: mov ecx, edi */ r_ecx = r_edi;
    /* 006501a2: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x6501a7u); f_007b52ec();
    /* 006501a7: push dword ptr [0xa8f658] */ { u32 v = R32((u32)(0xa8f658u)); r_esp -= 4; W32(r_esp, v); }
    /* 006501ad: lea esi, [edi + 0x38] */ r_esi = (u32)(r_edi+0x38u);
    /* 006501b0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006501b1: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x6501b6u); f_0050b510();
    /* 006501b6: push dword ptr [0xa8f65c] */ { u32 v = R32((u32)(0xa8f65cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006501bc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006501bd: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x6501c2u); f_0050b510();
    /* 006501c2: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006501c5: call 0x807de4 */ r_esp -= 4; W32(r_esp, 0x6501cau); f_00807de4();
    /* 006501ca: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006501cc: jne 0x6501da */ if (!fZ) goto L_006501da;
L_006501ce:; BB(0x006501ce);
    /* 006501ce: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006501d0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006501d1: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006501d2: call 0x5c9874 */ r_esp -= 4; W32(r_esp, 0x6501d7u); f_005c9874();
    /* 006501d7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006501da:; BB(0x006501da);
    /* 006501da: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006501db: call 0x8113bc */ r_esp -= 4; W32(r_esp, 0x6501e0u); f_008113bc();
    /* 006501e0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_006501e1:; BB(0x006501e1);
    /* 006501e1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006501e2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006501e3: ret  */ FN_RET(0x00650184); r_esp += 4; return;
}

void f_006501e4(void) /* sub_6501E4 */
{
    FN_ENTER(0x006501e4);
    /* 006501e4: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 006501e8: lea edx, [eax + 0x38] */ r_edx = (u32)(r_eax+0x38u);
    /* 006501eb: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006501ee: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006501ef: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006501f0: call 0x78ea2c */ r_esp -= 4; W32(r_esp, 0x6501f5u); f_0078ea2c();
    /* 006501f5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 006501f8: fcomp dword ptr [0x936bec] */ fx_compare(ST(0), R_F32((u32)(0x936becu))); FPOP();
    /* 006501fe: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00650200: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00650201: jae 0x65020b */ if (!fC) goto L_0065020b;
L_00650203:; BB(0x00650203);
    /* 00650203: mov eax, 1 */ r_eax = 0x1u;
    /* 00650208: ret 8 */ FN_RET(0x006501e4); r_esp += 12; return;
L_0065020b:; BB(0x0065020b);
    /* 0065020b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0065020d: ret 8 */ FN_RET(0x006501e4); r_esp += 12; return;
}

void f_00650210(void) /* sub_650210 */
{
    FN_ENTER(0x00650210);
    /* 00650210: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00650214: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00650216: je 0x650231 */ if (fZ) goto L_00650231;
L_00650218:; BB(0x00650218);
    /* 00650218: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065021b: je 0x650231 */ if (fZ) goto L_00650231;
L_0065021d:; BB(0x0065021d);
    /* 0065021d: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00650220: je 0x650231 */ if (fZ) goto L_00650231;
L_00650222:; BB(0x00650222);
    /* 00650222: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00650225: je 0x650231 */ if (fZ) goto L_00650231;
L_00650227:; BB(0x00650227);
    /* 00650227: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065022a: je 0x650231 */ if (fZ) goto L_00650231;
L_0065022c:; BB(0x0065022c);
    /* 0065022c: cmp eax, 0x13 */ {  u32 a = r_eax; u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0065022f: jne 0x65023f */ if (!fZ) goto L_0065023f;
L_00650231:; BB(0x00650231);
    /* 00650231: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00650236: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00650238: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0065023a: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x65023du); call_ind(t); }
    /* 0065023d: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0065023f:; BB(0x0065023f);
    /* 0065023f: fld dword ptr [0x936be4] */ FPUSH(R_F32((u32)(0x936be4u)));
    /* 00650245: ret 0x18 */ FN_RET(0x00650210); r_esp += 28; return;
}

void f_00650248(void) /* sub_650248 */
{
    FN_ENTER(0x00650248);
    /* 00650248: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00650249: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0065024c: mov esi, ecx */ r_esi = r_ecx;
    /* 0065024e: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 00650252: cmp eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00650257: jge 0x650266 */ if ((fS==fO)) goto L_00650266;
L_00650259:; BB(0x00650259);
    /* 00650259: fld dword ptr [0x936be0] */ FPUSH(R_F32((u32)(0x936be0u)));
    /* 0065025f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00650262: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00650263: ret 8 */ FN_RET(0x00650248); r_esp += 12; return;
L_00650266:; BB(0x00650266);
    /* 00650266: mov ecx, esi */ r_ecx = r_esi;
    /* 00650268: call 0x651190 */ r_esp -= 4; W32(r_esp, 0x65026du); f_00651190();
    /* 0065026d: mov eax, dword ptr [esi + 0x80] */ r_eax = R32((u32)(r_esi+0x80u));
    /* 00650273: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00650275: je 0x650259 */ if (fZ) goto L_00650259;
L_00650277:; BB(0x00650277);
    /* 00650277: je 0x6502fe */ if (fZ) goto L_006502fe;
L_0065027d:; BB(0x0065027d);
    /* 0065027d: movsx edx, word ptr [eax + 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x4u));
    /* 00650281: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00650283: jl 0x6502b4 */ if ((fS!=fO)) goto L_006502b4;
L_00650285:; BB(0x00650285);
    /* 00650285: cmp edx, 0xb9f */ {  u32 a = r_edx; u32 b = 0xb9fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0065028b: jg 0x6502b4 */ if ((!fZ&&fS==fO)) goto L_006502b4;
L_0065028d:; BB(0x0065028d);
    /* 0065028d: mov ecx, dword ptr [0xab02bc] */ r_ecx = R32((u32)(0xab02bcu));
    /* 00650293: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00650297: movzx eax, word ptr [ecx + edx*4] */ r_eax = (u32)R16((u32)(r_ecx+r_edx*4));
    /* 0065029b: mov word ptr [esp], ax */ W16((u32)(r_esp), (u16)r_eax);
    /* 0065029f: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 006502a3: movzx edx, word ptr [ecx + edx*4 + 2] */ r_edx = (u32)R16((u32)(r_ecx+r_edx*4+0x2u));
    /* 006502a8: mov word ptr [esp + 2], dx */ W16((u32)(r_esp+0x2u), (u16)r_edx);
    /* 006502ad: mov edx, 1 */ r_edx = 0x1u;
    /* 006502b2: jmp 0x6502b6 */ goto L_006502b6;
L_006502b4:; BB(0x006502b4);
    /* 006502b4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_006502b6:; BB(0x006502b6);
    /* 006502b6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006502b8: je 0x650259 */ if (fZ) goto L_00650259;
L_006502ba:; BB(0x006502ba);
    /* 006502ba: mov edx, 1 */ r_edx = 0x1u;
    /* 006502bf: mov word ptr [esp], dx */ W16((u32)(r_esp), (u16)r_edx);
    /* 006502c3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006502c5: je 0x6502ee */ if (fZ) goto L_006502ee;
L_006502c7:; BB(0x006502c7);
    /* 006502c7: movsx edx, word ptr [eax + 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x4u));
    /* 006502cb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006502cd: jl 0x6502ee */ if ((fS!=fO)) goto L_006502ee;
L_006502cf:; BB(0x006502cf);
    /* 006502cf: cmp edx, 0xb9f */ {  u32 a = r_edx; u32 b = 0xb9fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006502d5: jg 0x6502ee */ if ((!fZ&&fS==fO)) goto L_006502ee;
L_006502d7:; BB(0x006502d7);
    /* 006502d7: mov eax, dword ptr [0xab02bc] */ r_eax = R32((u32)(0xab02bcu));
    /* 006502dc: movzx ecx, word ptr [esp] */ r_ecx = (u32)R16((u32)(r_esp));
    /* 006502e0: mov word ptr [eax + edx*4], cx */ W16((u32)(r_eax+r_edx*4), (u16)r_ecx);
    /* 006502e4: movzx ecx, word ptr [esp + 2] */ r_ecx = (u32)R16((u32)(r_esp+0x2u));
    /* 006502e9: mov word ptr [eax + edx*4 + 2], cx */ W16((u32)(r_eax+r_edx*4+0x2u), (u16)r_ecx);
L_006502ee:; BB(0x006502ee);
    /* 006502ee: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 006502f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006502f2: mov ecx, esi */ r_ecx = r_esi;
    /* 006502f4: call 0x7b5038 */ r_esp -= 4; W32(r_esp, 0x6502f9u); f_007b5038();
    /* 006502f9: jmp 0x650259 */ goto L_00650259;
L_006502fe:; BB(0x006502fe);
    /* 006502fe: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00650300: jmp 0x6502b6 */ goto L_006502b6;
}

void f_00650304(void) /* sub_650304 */
{
    FN_ENTER(0x00650304);
    /* 00650304: mov ecx, dword ptr [0xa8f660] */ r_ecx = R32((u32)(0xa8f660u));
    /* 0065030a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0065030c: je 0x650321 */ if (fZ) goto L_00650321;
L_0065030e:; BB(0x0065030e);
    /* 0065030e: je 0x650317 */ if (fZ) goto L_00650317;
L_00650310:; BB(0x00650310);
    /* 00650310: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00650312: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x650317u); f_004066a8();
L_00650317:; BB(0x00650317);
    /* 00650317: mov dword ptr [0xa8f660], 0 */ W32((u32)(0xa8f660u), 0x0u);
L_00650321:; BB(0x00650321);
    /* 00650321: ret  */ FN_RET(0x00650304); r_esp += 4; return;
}

void f_00650324(void)
{
    FN_ENTER(0x00650324);
    /* 00650324: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00650325: mov ebp, esp */ r_ebp = r_esp;
    /* 00650327: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00650329: push 0x8e67a8 */ { u32 v = 0x8e67a8u; r_esp -= 4; W32(r_esp, v); }
    /* 0065032e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00650334: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00650335: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0065033c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0065033f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00650342: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00650345: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00650348: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0065034b: push 0x378 */ { u32 v = 0x378u; r_esp -= 4; W32(r_esp, v); }
    /* 00650350: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00650357: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x65035cu); f_005caba4();
    /* 0065035c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0065035d: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00650360: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00650362: je 0x65039b */ if (fZ) goto L_0065039b;
L_00650364:; BB(0x00650364);
    /* 00650364: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0065036b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00650372: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00650375: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 0065037b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065037e: call 0x6503a0 */ r_esp -= 4; W32(r_esp, 0x650383u); f_006503a0();
    /* 00650383: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00650386: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0065038d:; BB(0x0065038d);
    /* 0065038d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00650390: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00650397: mov esp, ebp */ r_esp = r_ebp;
    /* 00650399: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065039a: ret  */ FN_RET(0x00650324); r_esp += 4; return;
L_0065039b:; BB(0x0065039b);
    /* 0065039b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0065039d: jmp 0x65038d */ goto L_0065038d;
}

void f_006503a0(void) /* sub_6503A0 */
{
    FN_ENTER(0x006503a0);
    /* 006503a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006503a1: mov ebp, esp */ r_ebp = r_esp;
    /* 006503a3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006503a5: push 0x8e67c4 */ { u32 v = 0x8e67c4u; r_esp -= 4; W32(r_esp, v); }
    /* 006503aa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006503b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006503b1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006503b8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006503bb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006503be: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 006503c1: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 006503c4: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 006503c7: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 006503ca: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006503cd: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 006503d0: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006503d3: call 0x770748 */ r_esp -= 4; W32(r_esp, 0x6503d8u); f_00770748();
    /* 006503d8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006503df: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006503e2: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006503e5: mov dword ptr [ecx], 0xb31100 */ W32((u32)(r_ecx), 0xb31100u);
    /* 006503eb: mov eax, dword ptr [0x9c7830] */ r_eax = R32((u32)(0x9c7830u));
    /* 006503f0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006503f1: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 006503f4: call dword ptr [0xb31114] */ { u32 t = R32((u32)(0xb31114u)); r_esp -= 4; W32(r_esp, 0x6503fau); call_ind(t); }
    /* 006503fa: mov ecx, dword ptr [0xa8f660] */ r_ecx = R32((u32)(0xa8f660u));
    /* 00650400: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00650402: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x650407u); f_005b8610();
    /* 00650407: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0065040a: mov ecx, dword ptr [0xa8f660] */ r_ecx = R32((u32)(0xa8f660u));
    /* 00650410: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00650412: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 00650415: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x65041au); f_005b8624();
    /* 0065041a: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0065041d: mov dword ptr [ecx + 0xd8], 0x9c7838 */ W32((u32)(r_ecx+0xd8u), 0x9c7838u);
    /* 00650427: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 0065042a: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0065042c: mov eax, dword ptr [0xa8f660] */ r_eax = R32((u32)(0xa8f660u));
    /* 00650431: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00650432: mov edx, dword ptr [eax + 0x430] */ r_edx = R32((u32)(r_eax+0x430u));
    /* 00650438: mov dword ptr [ecx + 0xdc], edx */ W32((u32)(r_ecx+0xdcu), r_edx);
    /* 0065043e: mov word ptr [ecx + 0xb8], bx */ W16((u32)(r_ecx+0xb8u), (u16)r_ebx);
    /* 00650445: call 0x7aa4c8 */ r_esp -= 4; W32(r_esp, 0x65044au); f_007aa4c8();
    /* 0065044a: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0065044d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065044f: movzx eax, word ptr [ecx + 0xb8] */ r_eax = (u32)R16((u32)(r_ecx+0xb8u));
    /* 00650456: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 00650459: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 00650460: push 0x9c7868 */ { u32 v = 0x9c7868u; r_esp -= 4; W32(r_esp, v); }
    /* 00650465: or edx, 0x60000000 */ {  u32 a = r_edx; u32 b = 0x60000000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0065046b: mov dword ptr [ecx + 0x30], edx */ W32((u32)(r_ecx+0x30u), r_edx);
    /* 0065046e: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x650473u); f_007b9a88();
    /* 00650473: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00650476: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x65047bu); f_007b4f54();
    /* 0065047b: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0065047e: fld dword ptr [0x9c786c] */ FPUSH(R_F32((u32)(0x9c786cu)));
    /* 00650484: fdiv dword ptr [0x936bdc] */ ST(0) = ST(0) / R_F32((u32)(0x936bdcu));
    /* 0065048a: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 0065048d: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 00650490: mov ebx, dword ptr [esi + 0x40] */ r_ebx = R32((u32)(r_esi+0x40u));
    /* 00650493: mov dword ptr [esi + 0x74], eax */ W32((u32)(r_esi+0x74u), r_eax);
    /* 00650496: mov dword ptr [esi + 0x78], edx */ W32((u32)(r_esi+0x78u), r_edx);
    /* 00650499: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0065049c: mov dword ptr [esi + 0x7c], ebx */ W32((u32)(r_esi+0x7cu), r_ebx);
    /* 0065049f: fadd dword ptr [edx + 0x78] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x78u));
    /* 006504a2: mov edi, dword ptr [edx + 0x74] */ r_edi = R32((u32)(r_edx+0x74u));
    /* 006504a5: mov ecx, dword ptr [edx + 0x7c] */ r_ecx = R32((u32)(r_edx+0x7cu));
    /* 006504a8: fst dword ptr [edx + 0x78] */ W_F32((u32)(r_edx+0x78u), ST(0));
    /* 006504ab: fstp dword ptr [edx + 0x304] */ W_F32((u32)(r_edx+0x304u), ST(0)); FPOP();
    /* 006504b1: mov dword ptr [edx + 0x300], edi */ W32((u32)(r_edx+0x300u), r_edi);
    /* 006504b7: mov dword ptr [edx + 0x308], ecx */ W32((u32)(r_edx+0x308u), r_ecx);
    /* 006504bd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006504bf: mov word ptr [edx + 0x32e], ax */ W16((u32)(r_edx+0x32eu), (u16)r_eax);
    /* 006504c6: mov ecx, edx */ r_ecx = r_edx;
    /* 006504c8: call 0x650090 */ r_esp -= 4; W32(r_esp, 0x6504cdu); f_00650090();
    /* 006504cd: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 006504d0: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006504d3: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 006504d6: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006504d9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006504dc: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006504e3: mov esp, ebp */ r_esp = r_ebp;
    /* 006504e5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006504e6: ret 8 */ FN_RET(0x006503a0); r_esp += 12; return;
}

void f_006504ec(void) /* sub_6504EC */
{
    FN_ENTER(0x006504ec);
    /* 006504ec: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006504ed: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006504f0: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006504f2: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x6504f7u); f_004f7c84();
    /* 006504f7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006504f9: jne 0x65071d */ if (!fZ) goto L_0065071d;
L_006504ff:; BB(0x006504ff);
    /* 006504ff: mov eax, dword ptr [ebx + 0x368] */ r_eax = R32((u32)(r_ebx+0x368u));
    /* 00650505: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00650507: jne 0x6506d0 */ if (!fZ) goto L_006506d0;
L_0065050d:; BB(0x0065050d);
    /* 0065050d: movsx eax, word ptr [ebx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32eu));
    /* 00650514: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00650516: je 0x65060d */ if (fZ) goto L_0065060d;
L_0065051c:; BB(0x0065051c);
    /* 0065051c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065051f: jne 0x650533 */ if (!fZ) goto L_00650533;
L_00650521:; BB(0x00650521);
    /* 00650521: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00650523: call 0x650a40 */ r_esp -= 4; W32(r_esp, 0x650528u); f_00650a40();
    /* 00650528: fld dword ptr [ebx + 0x2b8] */ FPUSH(R_F32((u32)(r_ebx+0x2b8u)));
    /* 0065052e: jmp 0x6506ad */ goto L_006506ad;
L_00650533:; BB(0x00650533);
    /* 00650533: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00650536: jne 0x65054a */ if (!fZ) goto L_0065054a;
L_00650538:; BB(0x00650538);
    /* 00650538: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0065053a: call 0x650790 */ r_esp -= 4; W32(r_esp, 0x65053fu); f_00650790();
    /* 0065053f: fld dword ptr [ebx + 0x2b8] */ FPUSH(R_F32((u32)(r_ebx+0x2b8u)));
    /* 00650545: jmp 0x6506ad */ goto L_006506ad;
L_0065054a:; BB(0x0065054a);
    /* 0065054a: mov dword ptr [ebx + 0x2b8], 0xbf800000 */ W32((u32)(r_ebx+0x2b8u), 0xbf800000u);
    /* 00650554: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00650556: mov word ptr [ebx + 0x32e], ax */ W16((u32)(r_ebx+0x32eu), (u16)r_eax);
    /* 0065055d: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 00650564: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00650566: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x65056bu); f_007aa094();
    /* 0065056b: fld dword ptr [ebx + 0x2b8] */ FPUSH(R_F32((u32)(r_ebx+0x2b8u)));
    /* 00650571: fcom dword ptr [ebx + 0x344] */ fx_compare(ST(0), R_F32((u32)(r_ebx+0x344u))); 
    /* 00650577: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00650579: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0065057b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0065057c: jb 0x650582 */ if (fC) goto L_00650582;
L_0065057e:; BB(0x0065057e);
    /* 0065057e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00650580: jmp 0x6505ef */ goto L_006505ef;
L_00650582:; BB(0x00650582);
    /* 00650582: mov ecx, dword ptr [0xaae168] */ r_ecx = R32((u32)(0xaae168u));
    /* 00650588: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0065058a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0065058c: jle 0x6506ad */ if ((fZ||fS!=fO)) goto L_006506ad;
L_00650592:; BB(0x00650592);
    /* 00650592: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00650594: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 00650598: mov esi, ebx */ r_esi = r_ebx;
    /* 0065059a: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 0065059d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0065059f: mov edi, eax */ r_edi = r_eax;
    /* 006505a1: mov ebx, edx */ r_ebx = r_edx;
L_006505a3:; BB(0x006505a3);
    /* 006505a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006505a4: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6505a9u); f_0068d5a8();
    /* 006505a9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006505aa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006505ac: je 0x6505ce */ if (fZ) goto L_006505ce;
L_006505ae:; BB(0x006505ae);
    /* 006505ae: lea ecx, [esi + 0x38] */ r_ecx = (u32)(r_esi+0x38u);
    /* 006505b1: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006505b4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006505b5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006505b6: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x6505bbu); f_007a9180();
    /* 006505bb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006505be: fcomp dword ptr [0x936c48] */ fx_compare(ST(0), R_F32((u32)(0x936c48u))); FPOP();
    /* 006505c4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006505c6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006505c7: jae 0x6505ce */ if (!fC) goto L_006505ce;
L_006505c9:; BB(0x006505c9);
    /* 006505c9: mov ebx, 1 */ r_ebx = 0x1u;
L_006505ce:; BB(0x006505ce);
    /* 006505ce: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006505d1: movzx ecx, di */ r_ecx = (u32)(u16)r_edi;
    /* 006505d4: cmp ecx, dword ptr [0xaae168] */ {  u32 a = r_ecx; u32 b = R32((u32)(0xaae168u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006505da: jl 0x6505a3 */ if ((fS!=fO)) goto L_006505a3;
L_006505dc:; BB(0x006505dc);
    /* 006505dc: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 006505df: mov edx, ebx */ r_edx = r_ebx;
    /* 006505e1: mov ebx, esi */ r_ebx = r_esi;
    /* 006505e3: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 006505e7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006505e9: je 0x650753 */ if (fZ) goto L_00650753;
L_006505ef:; BB(0x006505ef);
    /* 006505ef: fld dword ptr [0x936bcc] */ FPUSH(R_F32((u32)(0x936bccu)));
    /* 006505f5: mov eax, 1 */ r_eax = 0x1u;
    /* 006505fa: mov word ptr [ebx + 0x32e], ax */ W16((u32)(r_ebx+0x32eu), (u16)r_eax);
    /* 00650601: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 00650608: jmp 0x6506ad */ goto L_006506ad;
L_0065060d:; BB(0x0065060d);
    /* 0065060d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0065060f: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x650614u); f_007aa094();
    /* 00650614: fld dword ptr [ebx + 0x2b8] */ FPUSH(R_F32((u32)(r_ebx+0x2b8u)));
    /* 0065061a: fcom dword ptr [ebx + 0x344] */ fx_compare(ST(0), R_F32((u32)(r_ebx+0x344u))); 
    /* 00650620: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00650622: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00650624: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00650625: jb 0x65062b */ if (fC) goto L_0065062b;
L_00650627:; BB(0x00650627);
    /* 00650627: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00650629: jmp 0x650694 */ goto L_00650694;
L_0065062b:; BB(0x0065062b);
    /* 0065062b: mov ecx, dword ptr [0xaae168] */ r_ecx = R32((u32)(0xaae168u));
    /* 00650631: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00650633: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00650635: jle 0x6506ad */ if ((fZ||fS!=fO)) goto L_006506ad;
L_00650637:; BB(0x00650637);
    /* 00650637: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00650639: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 0065063d: mov esi, ebx */ r_esi = r_ebx;
    /* 0065063f: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 00650642: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00650644: mov edi, eax */ r_edi = r_eax;
    /* 00650646: mov ebx, edx */ r_ebx = r_edx;
L_00650648:; BB(0x00650648);
    /* 00650648: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00650649: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x65064eu); f_0068d5a8();
    /* 0065064e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0065064f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00650651: je 0x650673 */ if (fZ) goto L_00650673;
L_00650653:; BB(0x00650653);
    /* 00650653: lea ecx, [esi + 0x38] */ r_ecx = (u32)(r_esi+0x38u);
    /* 00650656: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00650659: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065065a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065065b: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x650660u); f_007a9180();
    /* 00650660: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00650663: fcomp dword ptr [0x936c48] */ fx_compare(ST(0), R_F32((u32)(0x936c48u))); FPOP();
    /* 00650669: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0065066b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0065066c: jae 0x650673 */ if (!fC) goto L_00650673;
L_0065066e:; BB(0x0065066e);
    /* 0065066e: mov ebx, 1 */ r_ebx = 0x1u;
L_00650673:; BB(0x00650673);
    /* 00650673: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00650676: movzx ecx, di */ r_ecx = (u32)(u16)r_edi;
    /* 00650679: cmp ecx, dword ptr [0xaae168] */ {  u32 a = r_ecx; u32 b = R32((u32)(0xaae168u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0065067f: jl 0x650648 */ if ((fS!=fO)) goto L_00650648;
L_00650681:; BB(0x00650681);
    /* 00650681: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 00650684: mov edx, ebx */ r_edx = r_ebx;
    /* 00650686: mov ebx, esi */ r_ebx = r_esi;
    /* 00650688: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 0065068c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065068e: je 0x65075e */ if (fZ) goto L_0065075e;
L_00650694:; BB(0x00650694);
    /* 00650694: fld dword ptr [0x936bcc] */ FPUSH(R_F32((u32)(0x936bccu)));
    /* 0065069a: mov eax, 1 */ r_eax = 0x1u;
    /* 0065069f: mov word ptr [ebx + 0x32e], ax */ W16((u32)(r_ebx+0x32eu), (u16)r_eax);
    /* 006506a6: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
L_006506ad:; BB(0x006506ad);
    /* 006506ad: fadd dword ptr [0x936bc8] */ ST(0) = ST(0) + R_F32((u32)(0x936bc8u));
    /* 006506b3: mov eax, dword ptr [0xaafdb8] */ r_eax = R32((u32)(0xaafdb8u));
    /* 006506b8: fstp dword ptr [ebx + 0x2b8] */ W_F32((u32)(r_ebx+0x2b8u), ST(0)); FPOP();
    /* 006506be: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006506c1: je 0x65071d */ if (fZ) goto L_0065071d;
L_006506c3:; BB(0x006506c3);
    /* 006506c3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006506c5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006506c6: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x6506cbu); f_006946a8();
    /* 006506cb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006506ce: jmp 0x65071d */ goto L_0065071d;
L_006506d0:; BB(0x006506d0);
    /* 006506d0: fld dword ptr [ebx + 0x370] */ FPUSH(R_F32((u32)(r_ebx+0x370u)));
    /* 006506d6: fcom dword ptr [0x936c34] */ fx_compare(ST(0), R_F32((u32)(0x936c34u))); 
    /* 006506dc: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006506de: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006506df: ja 0x65070f */ if ((!fC&&!fZ)) goto L_0065070f;
L_006506e1:; BB(0x006506e1);
    /* 006506e1: fld dword ptr [0x936bd0] */ FPUSH(R_F32((u32)(0x936bd0u)));
    /* 006506e7: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 006506e9: fld dword ptr [ebx + 0x3c] */ FPUSH(R_F32((u32)(r_ebx+0x3cu)));
    /* 006506ec: fsub dword ptr [0x936c2c] */ ST(0) = ST(0) - R_F32((u32)(0x936c2cu));
    /* 006506f2: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 006506f4: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006506f6: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006506f8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006506fa: fstp dword ptr [ebx + 0x3c] */ W_F32((u32)(r_ebx+0x3cu), ST(0)); FPOP();
    /* 006506fd: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006506fe: ja 0x65071d */ if ((!fC&&!fZ)) goto L_0065071d;
L_00650700:; BB(0x00650700);
    /* 00650700: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 00650704: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00650709: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 0065070d: jmp 0x65071d */ goto L_0065071d;
L_0065070f:; BB(0x0065070f);
    /* 0065070f: fld dword ptr [0x936c30] */ FPUSH(R_F32((u32)(0x936c30u)));
    /* 00650715: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00650717: fstp dword ptr [ebx + 0x370] */ W_F32((u32)(r_ebx+0x370u), ST(0)); FPOP();
L_0065071d:; BB(0x0065071d);
    /* 0065071d: mov ecx, dword ptr [0xa8f654] */ r_ecx = R32((u32)(0xa8f654u));
    /* 00650723: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00650725: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x65072au); f_005b8638();
    /* 0065072a: cmp eax, dword ptr [ebx + 0xf8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0xf8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00650730: je 0x65077b */ if (fZ) goto L_0065077b;
L_00650732:; BB(0x00650732);
    /* 00650732: mov ecx, dword ptr [0xa8f654] */ r_ecx = R32((u32)(0xa8f654u));
    /* 00650738: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065073a: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x65073fu); f_005b8638();
    /* 0065073f: cmp eax, dword ptr [ebx + 0xf8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0xf8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00650745: je 0x650769 */ if (fZ) goto L_00650769;
L_00650747:; BB(0x00650747);
    /* 00650747: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00650749: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x65074eu); f_0061cdb0();
    /* 0065074e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00650751: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00650752: ret  */ FN_RET(0x006504ec); r_esp += 4; return;
L_00650753:; BB(0x00650753);
    /* 00650753: fld dword ptr [ebx + 0x2b8] */ FPUSH(R_F32((u32)(r_ebx+0x2b8u)));
    /* 00650759: jmp 0x6506ad */ goto L_006506ad;
L_0065075e:; BB(0x0065075e);
    /* 0065075e: fld dword ptr [ebx + 0x2b8] */ FPUSH(R_F32((u32)(r_ebx+0x2b8u)));
    /* 00650764: jmp 0x6506ad */ goto L_006506ad;
L_00650769:; BB(0x00650769);
    /* 00650769: mov ecx, dword ptr [0xa8f654] */ r_ecx = R32((u32)(0xa8f654u));
    /* 0065076f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00650771: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x650776u); f_005b8610();
    /* 00650776: mov dword ptr [ebx + 0x34], eax */ W32((u32)(r_ebx+0x34u), r_eax);
    /* 00650779: jmp 0x650747 */ goto L_00650747;
L_0065077b:; BB(0x0065077b);
    /* 0065077b: mov ecx, dword ptr [0xa8f654] */ r_ecx = R32((u32)(0xa8f654u));
    /* 00650781: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00650783: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x650788u); f_005b8610();
    /* 00650788: mov dword ptr [ebx + 0x34], eax */ W32((u32)(r_ebx+0x34u), r_eax);
    /* 0065078b: jmp 0x650732 */ goto L_00650732;
}

void f_00650790(void) /* sub_650790 */
{
    FN_ENTER(0x00650790);
    /* 00650790: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00650791: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00650792: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00650795: mov esi, ecx */ r_esi = r_ecx;
    /* 00650797: mov ecx, esi */ r_ecx = r_esi;
    /* 00650799: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x65079eu); f_007aa094();
    /* 0065079e: fld dword ptr [0x936c18] */ FPUSH(R_F32((u32)(0x936c18u)));
    /* 006507a4: fld dword ptr [esi + 0x2b8] */ FPUSH(R_F32((u32)(r_esi+0x2b8u)));
    /* 006507aa: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 006507ac: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006507ae: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006507af: je 0x650983 */ if (fZ) goto L_00650983;
L_006507b5:; BB(0x006507b5);
    /* 006507b5: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 006507b7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006507b9: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006507bb: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006507bd: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006507be: je 0x650965 */ if (fZ) goto L_00650965;
L_006507c4:; BB(0x006507c4);
    /* 006507c4: fcom dword ptr [0x936bc4] */ fx_compare(ST(0), R_F32((u32)(0x936bc4u))); 
    /* 006507ca: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006507cc: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006507cd: je 0x650965 */ if (fZ) goto L_00650965;
L_006507d3:; BB(0x006507d3);
    /* 006507d3: fcom dword ptr [0x936bc0] */ fx_compare(ST(0), R_F32((u32)(0x936bc0u))); 
    /* 006507d9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006507db: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006507dc: je 0x650965 */ if (fZ) goto L_00650965;
L_006507e2:; BB(0x006507e2);
    /* 006507e2: fcom dword ptr [0x936bbc] */ fx_compare(ST(0), R_F32((u32)(0x936bbcu))); 
    /* 006507e8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006507ea: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006507eb: je 0x650947 */ if (fZ) goto L_00650947;
L_006507f1:; BB(0x006507f1);
    /* 006507f1: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 006507f3: mov ebx, dword ptr [esi + 0x378] */ r_ebx = R32((u32)(r_esi+0x378u));
    /* 006507f9: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006507fb: mov eax, 0x1e */ r_eax = 0x1eu;
    /* 00650800: div ebx */ { u32 d = r_ebx; if (!d) UNSUP(0x00650800, "divide by zero"); { u64 n = ((u64)r_edx << 32) | r_eax; u64 q = n / d; if (q >> 32) UNSUP(0x00650800, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00650802: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00650804: mov ecx, eax */ r_ecx = r_eax;
    /* 00650806: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 0065080a: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 0065080f: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00650814: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00650818: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0065081c: fistp qword ptr [esp + 0x18] */ W64((u32)(r_esp+0x18u), (u64)fx_int64(ST(0))); FPOP();
    /* 00650820: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00650824: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 00650828: div ecx */ { u32 d = r_ecx; if (!d) UNSUP(0x00650828, "divide by zero"); { u64 n = ((u64)r_edx << 32) | r_eax; u64 q = n / d; if (q >> 32) UNSUP(0x00650828, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0065082a: fcom dword ptr [0x936bc0] */ fx_compare(ST(0), R_F32((u32)(0x936bc0u))); 
    /* 00650830: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00650832: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00650833: mov ebx, edx */ r_ebx = r_edx;
    /* 00650835: jbe 0x65086d */ if ((fC||fZ)) goto L_0065086d;
L_00650837:; BB(0x00650837);
    /* 00650837: fld dword ptr [0x936c14] */ FPUSH(R_F32((u32)(0x936c14u)));
    /* 0065083d: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0065083f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00650841: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00650842: jbe 0x650873 */ if ((fC||fZ)) goto L_00650873;
L_00650844:; BB(0x00650844);
    /* 00650844: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00650846: jne 0x650873 */ if (!fZ) goto L_00650873;
L_00650848:; BB(0x00650848);
    /* 00650848: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0065084a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0065084c: push 0x7e */ { u32 v = 0x7eu; r_esp -= 4; W32(r_esp, v); }
    /* 0065084e: lea eax, [esi + 0x35c] */ r_eax = (u32)(r_esi+0x35cu);
    /* 00650854: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00650855: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x65085au); f_0050b510();
    /* 0065085a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065085d: fld dword ptr [0x936c14] */ FPUSH(R_F32((u32)(0x936c14u)));
    /* 00650863: fld dword ptr [esi + 0x2b8] */ FPUSH(R_F32((u32)(r_esi+0x2b8u)));
    /* 00650869: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0065086b: jmp 0x650873 */ goto L_00650873;
L_0065086d:; BB(0x0065086d);
    /* 0065086d: fld dword ptr [0x936c14] */ FPUSH(R_F32((u32)(0x936c14u)));
L_00650873:; BB(0x00650873);
    /* 00650873: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00650875: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00650877: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00650878: jae 0x65088f */ if (!fC) goto L_0065088f;
L_0065087a:; BB(0x0065087a);
    /* 0065087a: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065087c: jne 0x65088f */ if (!fZ) goto L_0065088f;
L_0065087e:; BB(0x0065087e);
    /* 0065087e: push 0x7e */ { u32 v = 0x7eu; r_esp -= 4; W32(r_esp, v); }
    /* 00650880: lea eax, [esi + 0x350] */ r_eax = (u32)(r_esi+0x350u);
    /* 00650886: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00650887: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x65088cu); f_0050b510();
    /* 0065088c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0065088f:; BB(0x0065088f);
    /* 0065088f: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00650894: fld dword ptr [esi + 0x34c] */ FPUSH(R_F32((u32)(r_esi+0x34cu)));
    /* 0065089a: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0065089c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0065089e: jle 0x650a38 */ if ((fZ||fS!=fO)) goto L_00650a38;
L_006508a4:; BB(0x006508a4);
    /* 006508a4: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 006508a8: mov dword ptr [esp + 0x20], edi */ W32((u32)(r_esp+0x20u), r_edi);
    /* 006508ac: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_006508ae:; BB(0x006508ae);
    /* 006508ae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006508af: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6508b4u); f_0068d5a8();
    /* 006508b4: mov edi, eax */ r_edi = r_eax;
    /* 006508b6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006508b9: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006508bb: je 0x650915 */ if (fZ) goto L_00650915;
L_006508bd:; BB(0x006508bd);
    /* 006508bd: mov edx, dword ptr [edi + 0x3f0] */ r_edx = R32((u32)(r_edi+0x3f0u));
    /* 006508c3: cmp edx, dword ptr [0xaafca0] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaafca0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006508c9: jne 0x650915 */ if (!fZ) goto L_00650915;
L_006508cb:; BB(0x006508cb);
    /* 006508cb: mov edx, dword ptr [edi + 0x30] */ r_edx = R32((u32)(r_edi+0x30u));
    /* 006508ce: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006508d1: jne 0x650915 */ if (!fZ) goto L_00650915;
L_006508d3:; BB(0x006508d3);
    /* 006508d3: lea eax, [esi + 0x38] */ r_eax = (u32)(r_esi+0x38u);
    /* 006508d6: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 006508d9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006508da: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006508db: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x6508e0u); f_007a9180();
    /* 006508e0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006508e3: fcomp dword ptr [esp + 0x24] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x24u))); FPOP();
    /* 006508e7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006508e9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006508ea: jae 0x650915 */ if (!fC) goto L_00650915;
L_006508ec:; BB(0x006508ec);
    /* 006508ec: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 006508ee: mov dword ptr [esp], 0xf */ W32((u32)(r_esp), 0xfu);
    /* 006508f5: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 006508fa: mov ecx, edi */ r_ecx = r_edi;
    /* 006508fc: mov dword ptr [esp + 4], 0x42c80000 */ W32((u32)(r_esp+0x4u), 0x42c80000u);
    /* 00650904: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00650905: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00650906: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00650908: push 0x42c80000 */ { u32 v = 0x42c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0065090d: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0065090f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00650910: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x650913u); call_ind(t); }
    /* 00650913: fstp st(0) */ ST(0) = ST(0); FPOP();
L_00650915:; BB(0x00650915);
    /* 00650915: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00650918: movzx eax, bx */ r_eax = (u32)(u16)r_ebx;
    /* 0065091b: cmp eax, dword ptr [0xaae168] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaae168u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00650921: jl 0x6508ae */ if ((fS!=fO)) goto L_006508ae;
L_00650923:; BB(0x00650923);
    /* 00650923: mov edi, dword ptr [esp + 0x20] */ r_edi = R32((u32)(r_esp+0x20u));
L_00650927:; BB(0x00650927);
    /* 00650927: fld dword ptr [esi + 0x348] */ FPUSH(R_F32((u32)(r_esi+0x348u)));
    /* 0065092d: fcomp dword ptr [esi + 0x2b8] */ fx_compare(ST(0), R_F32((u32)(r_esi+0x2b8u))); FPOP();
    /* 00650933: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00650935: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00650936: jbe 0x65093e */ if ((fC||fZ)) goto L_0065093e;
L_00650938:; BB(0x00650938);
    /* 00650938: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0065093b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0065093c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0065093d: ret  */ FN_RET(0x00650790); r_esp += 4; return;
L_0065093e:; BB(0x0065093e);
    /* 0065093e: mov ecx, esi */ r_ecx = r_esi;
    /* 00650940: call 0x651190 */ r_esp -= 4; W32(r_esp, 0x650945u); f_00651190();
    /* 00650945: jmp 0x650938 */ goto L_00650938;
L_00650947:; BB(0x00650947);
    /* 00650947: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00650949: push 0x7e */ { u32 v = 0x7eu; r_esp -= 4; W32(r_esp, v); }
    /* 0065094b: lea eax, [esi + 0x350] */ r_eax = (u32)(r_esi+0x350u);
    /* 00650951: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00650952: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x650957u); f_0050b510();
    /* 00650957: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065095a: fld dword ptr [esi + 0x2b8] */ FPUSH(R_F32((u32)(r_esi+0x2b8u)));
    /* 00650960: jmp 0x6507f1 */ goto L_006507f1;
L_00650965:; BB(0x00650965);
    /* 00650965: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00650967: push 0x7d */ { u32 v = 0x7du; r_esp -= 4; W32(r_esp, v); }
    /* 00650969: lea eax, [esi + 0x35c] */ r_eax = (u32)(r_esi+0x35cu);
    /* 0065096f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00650970: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x650975u); f_0050b510();
    /* 00650975: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00650978: fld dword ptr [esi + 0x2b8] */ FPUSH(R_F32((u32)(r_esi+0x2b8u)));
    /* 0065097e: jmp 0x6507e2 */ goto L_006507e2;
L_00650983:; BB(0x00650983);
    /* 00650983: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00650985: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00650987: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x65098cu); f_00807ac0();
    /* 0065098c: cmp eax, 0x17 */ {  u32 a = r_eax; u32 b = 0x17u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0065098f: jl 0x6509ec */ if ((fS!=fO)) goto L_006509ec;
L_00650991:; BB(0x00650991);
    /* 00650991: cmp eax, 0x1b */ {  u32 a = r_eax; u32 b = 0x1bu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00650994: jle 0x650a12 */ if ((fZ||fS!=fO)) goto L_00650a12;
L_00650996:; BB(0x00650996);
    /* 00650996: cmp eax, 0x22 */ {  u32 a = r_eax; u32 b = 0x22u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00650999: jne 0x6509c1 */ if (!fZ) goto L_006509c1;
L_0065099b:; BB(0x0065099b);
    /* 0065099b: lea edx, [esi + 0x38] */ r_edx = (u32)(r_esi+0x38u);
    /* 0065099e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006509a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006509a1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006509a2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006509a3: push 0x545 */ { u32 v = 0x545u; r_esp -= 4; W32(r_esp, v); }
    /* 006509a8: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6509adu); f_00814298();
    /* 006509ad: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006509b0: fld dword ptr [0x936c18] */ FPUSH(R_F32((u32)(0x936c18u)));
    /* 006509b6: fld dword ptr [esi + 0x2b8] */ FPUSH(R_F32((u32)(r_esi+0x2b8u)));
    /* 006509bc: jmp 0x6507b5 */ goto L_006507b5;
L_006509c1:; BB(0x006509c1);
    /* 006509c1: cmp eax, 0x23 */ {  u32 a = r_eax; u32 b = 0x23u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006509c4: jne 0x6509ec */ if (!fZ) goto L_006509ec;
L_006509c6:; BB(0x006509c6);
    /* 006509c6: lea edx, [esi + 0x38] */ r_edx = (u32)(r_esi+0x38u);
    /* 006509c9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006509cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006509cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006509cd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006509ce: push 0x521 */ { u32 v = 0x521u; r_esp -= 4; W32(r_esp, v); }
    /* 006509d3: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6509d8u); f_00814298();
    /* 006509d8: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006509db: fld dword ptr [0x936c18] */ FPUSH(R_F32((u32)(0x936c18u)));
    /* 006509e1: fld dword ptr [esi + 0x2b8] */ FPUSH(R_F32((u32)(r_esi+0x2b8u)));
    /* 006509e7: jmp 0x6507b5 */ goto L_006507b5;
L_006509ec:; BB(0x006509ec);
    /* 006509ec: lea edx, [esi + 0x38] */ r_edx = (u32)(r_esi+0x38u);
    /* 006509ef: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006509f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006509f2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006509f3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006509f4: push 0x487 */ { u32 v = 0x487u; r_esp -= 4; W32(r_esp, v); }
    /* 006509f9: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6509feu); f_00814298();
    /* 006509fe: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00650a01: fld dword ptr [0x936c18] */ FPUSH(R_F32((u32)(0x936c18u)));
    /* 00650a07: fld dword ptr [esi + 0x2b8] */ FPUSH(R_F32((u32)(r_esi+0x2b8u)));
    /* 00650a0d: jmp 0x6507b5 */ goto L_006507b5;
L_00650a12:; BB(0x00650a12);
    /* 00650a12: lea edx, [esi + 0x38] */ r_edx = (u32)(r_esi+0x38u);
    /* 00650a15: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00650a17: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00650a18: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00650a19: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00650a1a: push 0x4d8 */ { u32 v = 0x4d8u; r_esp -= 4; W32(r_esp, v); }
    /* 00650a1f: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x650a24u); f_00814298();
    /* 00650a24: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00650a27: fld dword ptr [0x936c18] */ FPUSH(R_F32((u32)(0x936c18u)));
    /* 00650a2d: fld dword ptr [esi + 0x2b8] */ FPUSH(R_F32((u32)(r_esi+0x2b8u)));
    /* 00650a33: jmp 0x6507b5 */ goto L_006507b5;
L_00650a38:; BB(0x00650a38);
    /* 00650a38: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00650a3a: jmp 0x650927 */ goto L_00650927;
}

void f_00650a40(void) /* sub_650A40 */
{
    FN_ENTER(0x00650a40);
    /* 00650a40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00650a41: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00650a44: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00650a46: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00650a48: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x650a4du); f_007aa094();
    /* 00650a4d: fld dword ptr [ebp + 0x2b8] */ FPUSH(R_F32((u32)(r_ebp+0x2b8u)));
    /* 00650a53: fld dword ptr [ebp + 0x2b8] */ FPUSH(R_F32((u32)(r_ebp+0x2b8u)));
    /* 00650a59: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00650a5c: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00650a60: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00650a65: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00650a69: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00650a6d: fistp qword ptr [esp + 0x10] */ W64((u32)(r_esp+0x10u), (u64)fx_int64(ST(0))); FPOP();
    /* 00650a71: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00650a74: mov eax, 0x88888889 */ r_eax = 0x88888889u;
    /* 00650a79: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 00650a7d: mul ecx */ { u64 t = (u64)r_eax * r_ecx; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 00650a7f: shr edx, 3 */ { u32 c = (3u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00650a82: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 00650a85: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00650a87: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00650a89: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00650a8b: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00650a8d: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00650a8f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00650a91: jne 0x650aac */ if (!fZ) goto L_00650aac;
L_00650a93:; BB(0x00650a93);
    /* 00650a93: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00650a95: push 0x7d */ { u32 v = 0x7du; r_esp -= 4; W32(r_esp, v); }
    /* 00650a97: lea eax, [ebp + 0x350] */ r_eax = (u32)(r_ebp+0x350u);
    /* 00650a9d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00650a9e: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x650aa3u); f_0050b510();
    /* 00650aa3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00650aa6: fld dword ptr [ebp + 0x2b8] */ FPUSH(R_F32((u32)(r_ebp+0x2b8u)));
L_00650aac:; BB(0x00650aac);
    /* 00650aac: fcomp dword ptr [0x936c0c] */ fx_compare(ST(0), R_F32((u32)(0x936c0cu))); FPOP();
    /* 00650ab2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00650ab4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00650ab5: jb 0x650ad4 */ if (fC) goto L_00650ad4;
L_00650ab7:; BB(0x00650ab7);
    /* 00650ab7: mov dword ptr [ebp + 0x2b8], 0xbf800000 */ W32((u32)(r_ebp+0x2b8u), 0xbf800000u);
    /* 00650ac1: mov eax, 2 */ r_eax = 0x2u;
    /* 00650ac6: mov word ptr [ebp + 0x32e], ax */ W16((u32)(r_ebp+0x32eu), (u16)r_eax);
    /* 00650acd: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
L_00650ad4:; BB(0x00650ad4);
    /* 00650ad4: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00650ad7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00650ad8: ret  */ FN_RET(0x00650a40); r_esp += 4; return;
}

void f_00650adc(void) /* sub_650ADC */
{
    FN_ENTER(0x00650adc);
    /* 00650adc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00650add: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00650adf: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00650ae1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00650ae3: push 0x41a00000 */ { u32 v = 0x41a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00650ae8: push 0x43960000 */ { u32 v = 0x43960000u; r_esp -= 4; W32(r_esp, v); }
    /* 00650aed: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x650af0u); call_ind(t); }
    /* 00650af0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00650af2: je 0x650b4b */ if (fZ) goto L_00650b4b;
L_00650af4:; BB(0x00650af4);
    /* 00650af4: mov ecx, dword ptr [ebx + 0x24] */ r_ecx = R32((u32)(r_ebx+0x24u));
    /* 00650af7: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x650afcu); f_00829cc8();
    /* 00650afc: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x650b01u); f_0082d7b0();
    /* 00650b01: lea ecx, [ebx + 0x38] */ r_ecx = (u32)(r_ebx+0x38u);
    /* 00650b04: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x650b09u); f_0082d838();
    /* 00650b09: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 00650b0c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00650b0e: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x650b13u); f_0082d8bc();
    /* 00650b13: mov eax, dword ptr [ebx + 0x368] */ r_eax = R32((u32)(r_ebx+0x368u));
    /* 00650b19: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00650b1b: je 0x650b28 */ if (fZ) goto L_00650b28;
L_00650b1d:; BB(0x00650b1d);
    /* 00650b1d: lea ecx, [ebx + 0x36c] */ r_ecx = (u32)(r_ebx+0x36cu);
    /* 00650b23: call 0x831290 */ r_esp -= 4; W32(r_esp, 0x650b28u); f_00831290();
L_00650b28:; BB(0x00650b28);
    /* 00650b28: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x650b2du); f_004f7c84();
    /* 00650b2d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00650b30: je 0x650b4d */ if (fZ) goto L_00650b4d;
L_00650b32:; BB(0x00650b32);
    /* 00650b32: push dword ptr [ebx + 0xc0] */ { u32 v = R32((u32)(r_ebx+0xc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00650b38: mov ecx, dword ptr [ebx + 0x34] */ r_ecx = R32((u32)(r_ebx+0x34u));
    /* 00650b3b: mov edx, dword ptr [ebx + 0xf8] */ r_edx = R32((u32)(r_ebx+0xf8u));
    /* 00650b41: call 0x83bd00 */ r_esp -= 4; W32(r_esp, 0x650b46u); f_0083bd00();
L_00650b46:; BB(0x00650b46);
    /* 00650b46: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x650b4bu); f_0082da80();
L_00650b4b:; BB(0x00650b4b);
    /* 00650b4b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00650b4c: ret  */ FN_RET(0x00650adc); r_esp += 4; return;
L_00650b4d:; BB(0x00650b4d);
    /* 00650b4d: mov ecx, dword ptr [ebx + 0x34] */ r_ecx = R32((u32)(r_ebx+0x34u));
    /* 00650b50: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x650b55u); f_00831758();
    /* 00650b55: jmp 0x650b46 */ goto L_00650b46;
}

void f_00650b58(void) /* sub_650B58 */
{
    FN_ENTER(0x00650b58);
    /* 00650b58: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00650b59: mov eax, dword ptr [ecx + 0x8c] */ r_eax = R32((u32)(r_ecx+0x8cu));
    /* 00650b5f: mov edx, dword ptr [ecx + 0x38] */ r_edx = R32((u32)(r_ecx+0x38u));
    /* 00650b62: fld dword ptr [0x936ba8] */ FPUSH(R_F32((u32)(0x936ba8u)));
    /* 00650b68: fadd dword ptr [ecx + 0x68] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x68u));
    /* 00650b6b: fld dword ptr [0x936ba4] */ FPUSH(R_F32((u32)(0x936ba4u)));
    /* 00650b71: fadd dword ptr [ecx + 0x6c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x6cu));
    /* 00650b74: fld dword ptr [ecx + 0x3c] */ FPUSH(R_F32((u32)(r_ecx+0x3cu)));
    /* 00650b77: fld dword ptr [0x936ba0] */ FPUSH(R_F32((u32)(0x936ba0u)));
    /* 00650b7d: fadd dword ptr [ecx + 0x70] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x70u));
    /* 00650b80: fld dword ptr [0x9c786c] */ FPUSH(R_F32((u32)(0x9c786cu)));
    /* 00650b86: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00650b88: fstp dword ptr [ecx + 0x344] */ W_F32((u32)(r_ecx+0x344u), ST(0)); FPOP();
    /* 00650b8e: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00650b90: fstp dword ptr [ecx + 0x348] */ W_F32((u32)(r_ecx+0x348u), ST(0)); FPOP();
    /* 00650b96: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00650b98: fstp dword ptr [ecx + 0x34c] */ W_F32((u32)(r_ecx+0x34cu), ST(0)); FPOP();
    /* 00650b9e: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00650ba0: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00650ba2: fmul dword ptr [0x936bf0] */ ST(0) = ST(0) * R_F32((u32)(0x936bf0u));
    /* 00650ba8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00650baa: fst dword ptr [ecx + 0x354] */ W_F32((u32)(r_ecx+0x354u), ST(0));
    /* 00650bb0: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00650bb2: fstp dword ptr [ecx + 0x360] */ W_F32((u32)(r_ecx+0x360u), ST(0)); FPOP();
    /* 00650bb8: mov dword ptr [ecx + 0x36c], 0x3f800000 */ W32((u32)(r_ecx+0x36cu), 0x3f800000u);
    /* 00650bc2: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00650bc5: mov dword ptr [ecx + 0x370], 0x3f800000 */ W32((u32)(r_ecx+0x370u), 0x3f800000u);
    /* 00650bcf: mov dword ptr [ecx + 0x378], eax */ W32((u32)(r_ecx+0x378u), r_eax);
    /* 00650bd5: mov eax, dword ptr [ecx + 0x40] */ r_eax = R32((u32)(r_ecx+0x40u));
    /* 00650bd8: mov dword ptr [ecx + 0x350], edx */ W32((u32)(r_ecx+0x350u), r_edx);
    /* 00650bde: mov dword ptr [ecx + 0x374], 0x3f800000 */ W32((u32)(r_ecx+0x374u), 0x3f800000u);
    /* 00650be8: mov dword ptr [ecx + 0x358], eax */ W32((u32)(r_ecx+0x358u), r_eax);
    /* 00650bee: mov dword ptr [ecx + 0x35c], edx */ W32((u32)(r_ecx+0x35cu), r_edx);
    /* 00650bf4: movsx edx, word ptr [ecx + 0x64] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x64u));
    /* 00650bf8: mov dword ptr [ecx + 0x364], eax */ W32((u32)(r_ecx+0x364u), r_eax);
    /* 00650bfe: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00650c00: mov dword ptr [ecx + 0x368], edi */ W32((u32)(r_ecx+0x368u), r_edi);
    /* 00650c06: mov eax, 1 */ r_eax = 0x1u;
    /* 00650c0b: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00650c0e: jg 0x650c12 */ if ((!fZ&&fS==fO)) goto L_00650c12;
L_00650c10:; BB(0x00650c10);
    /* 00650c10: mov edx, eax */ r_edx = r_eax;
L_00650c12:; BB(0x00650c12);
    /* 00650c12: mov word ptr [ecx + 0x334], dx */ W16((u32)(r_ecx+0x334u), (u16)r_edx);
    /* 00650c19: mov word ptr [ecx + 0x340], di */ W16((u32)(r_ecx+0x340u), (u16)r_edi);
    /* 00650c20: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00650c21: ret  */ FN_RET(0x00650b58); r_esp += 4; return;
}

void f_00650c24(void) /* sub_650C24 */
{
    FN_ENTER(0x00650c24);
    /* 00650c24: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00650c25: mov edi, ecx */ r_edi = r_ecx;
    /* 00650c27: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00650c2b: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 00650c2f: movsx eax, word ptr [eax] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax));
    /* 00650c32: mov word ptr [edi + 0x340], ax */ W16((u32)(r_edi+0x340u), (u16)r_eax);
    /* 00650c39: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00650c3b: je 0x650c4c */ if (fZ) goto L_00650c4c;
L_00650c3d:; BB(0x00650c3d);
    /* 00650c3d: movsx edx, word ptr [edi + 0x334] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x334u));
    /* 00650c44: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00650c46: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00650c48: jg 0x650c63 */ if ((!fZ&&fS==fO)) goto L_00650c63;
L_00650c4a:; BB(0x00650c4a);
    /* 00650c4a: jmp 0x650c67 */ goto L_00650c67;
L_00650c4c:; BB(0x00650c4c);
    /* 00650c4c: movsx edx, word ptr [edi + 0x334] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x334u));
    /* 00650c53: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00650c55: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00650c57: jg 0x650c63 */ if ((!fZ&&fS==fO)) goto L_00650c63;
L_00650c59:; BB(0x00650c59);
    /* 00650c59: mov dword ptr [edi + 0x368], 1 */ W32((u32)(r_edi+0x368u), 0x1u);
L_00650c63:; BB(0x00650c63);
    /* 00650c63: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00650c64: ret 8 */ FN_RET(0x00650c24); r_esp += 12; return;
L_00650c67:; BB(0x00650c67);
    /* 00650c67: mov ecx, edi */ r_ecx = r_edi;
    /* 00650c69: call 0x651190 */ r_esp -= 4; W32(r_esp, 0x650c6eu); f_00651190();
    /* 00650c6e: mov ecx, edi */ r_ecx = r_edi;
    /* 00650c70: call 0x650c84 */ r_esp -= 4; W32(r_esp, 0x650c75u); f_00650c84();
    /* 00650c75: mov dword ptr [edi + 0x368], 1 */ W32((u32)(r_edi+0x368u), 0x1u);
    /* 00650c7f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00650c80: ret 8 */ FN_RET(0x00650c24); r_esp += 12; return;
}

void f_00650c84(void) /* sub_650C84 */
{
    FN_ENTER(0x00650c84);
    /* 00650c84: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00650c85: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00650c86: mov edi, ecx */ r_edi = r_ecx;
    /* 00650c88: mov eax, dword ptr [edi + 0x368] */ r_eax = R32((u32)(r_edi+0x368u));
    /* 00650c8e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00650c90: jne 0x650ce1 */ if (!fZ) goto L_00650ce1;
L_00650c92:; BB(0x00650c92);
    /* 00650c92: mov eax, 1 */ r_eax = 0x1u;
    /* 00650c97: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00650c98: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00650c9a: mov dword ptr [edi + 0x368], eax */ W32((u32)(r_edi+0x368u), r_eax);
    /* 00650ca0: mov ecx, edi */ r_ecx = r_edi;
    /* 00650ca2: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x650ca7u); f_007b52ec();
    /* 00650ca7: push dword ptr [0xa8f64c] */ { u32 v = R32((u32)(0xa8f64cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00650cad: lea esi, [edi + 0x38] */ r_esi = (u32)(r_edi+0x38u);
    /* 00650cb0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00650cb1: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x650cb6u); f_0050b510();
    /* 00650cb6: push dword ptr [0xa8f650] */ { u32 v = R32((u32)(0xa8f650u)); r_esp -= 4; W32(r_esp, v); }
    /* 00650cbc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00650cbd: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x650cc2u); f_0050b510();
    /* 00650cc2: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00650cc5: call 0x807de4 */ r_esp -= 4; W32(r_esp, 0x650ccau); f_00807de4();
    /* 00650cca: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00650ccc: jne 0x650cda */ if (!fZ) goto L_00650cda;
L_00650cce:; BB(0x00650cce);
    /* 00650cce: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00650cd0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00650cd1: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00650cd2: call 0x5c9874 */ r_esp -= 4; W32(r_esp, 0x650cd7u); f_005c9874();
    /* 00650cd7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00650cda:; BB(0x00650cda);
    /* 00650cda: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00650cdb: call 0x8113bc */ r_esp -= 4; W32(r_esp, 0x650ce0u); f_008113bc();
    /* 00650ce0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00650ce1:; BB(0x00650ce1);
    /* 00650ce1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00650ce2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00650ce3: ret  */ FN_RET(0x00650c84); r_esp += 4; return;
}

void f_00650ce4(void) /* sub_650CE4 */
{
    FN_ENTER(0x00650ce4);
    /* 00650ce4: mov eax, 1 */ r_eax = 0x1u;
    /* 00650ce9: ret 0x10 */ FN_RET(0x00650ce4); r_esp += 20; return;
}

void f_00650cec(void) /* sub_650CEC */
{
    FN_ENTER(0x00650cec);
    /* 00650cec: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00650cf0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00650cf2: je 0x650d0d */ if (fZ) goto L_00650d0d;
L_00650cf4:; BB(0x00650cf4);
    /* 00650cf4: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00650cf7: je 0x650d0d */ if (fZ) goto L_00650d0d;
L_00650cf9:; BB(0x00650cf9);
    /* 00650cf9: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00650cfc: je 0x650d0d */ if (fZ) goto L_00650d0d;
L_00650cfe:; BB(0x00650cfe);
    /* 00650cfe: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00650d01: je 0x650d0d */ if (fZ) goto L_00650d0d;
L_00650d03:; BB(0x00650d03);
    /* 00650d03: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00650d06: je 0x650d0d */ if (fZ) goto L_00650d0d;
L_00650d08:; BB(0x00650d08);
    /* 00650d08: cmp eax, 0x13 */ {  u32 a = r_eax; u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00650d0b: jne 0x650d1b */ if (!fZ) goto L_00650d1b;
L_00650d0d:; BB(0x00650d0d);
    /* 00650d0d: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00650d12: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00650d14: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00650d16: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x650d19u); call_ind(t); }
    /* 00650d19: fstp st(0) */ ST(0) = ST(0); FPOP();
L_00650d1b:; BB(0x00650d1b);
    /* 00650d1b: fld dword ptr [0x936b94] */ FPUSH(R_F32((u32)(0x936b94u)));
    /* 00650d21: ret 0x18 */ FN_RET(0x00650cec); r_esp += 28; return;
}

void f_00650d24(void) /* sub_650D24 */
{
    FN_ENTER(0x00650d24);
    /* 00650d24: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00650d25: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00650d26: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00650d29: movzx eax, word ptr [ecx + 0x1c] */ r_eax = (u32)R16((u32)(r_ecx+0x1cu));
    /* 00650d2d: cmp eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00650d32: jl 0x650dcf */ if ((fS!=fO)) goto L_00650dcf;
L_00650d38:; BB(0x00650d38);
    /* 00650d38: movsx edx, word ptr [ecx + 0x340] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x340u));
    /* 00650d3f: mov ebp, dword ptr [ecx + 0x80] */ r_ebp = R32((u32)(r_ecx+0x80u));
    /* 00650d45: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00650d48: mov word ptr [ecx + 0x340], dx */ W16((u32)(r_ecx+0x340u), (u16)r_edx);
    /* 00650d4f: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00650d51: je 0x650dcf */ if (fZ) goto L_00650dcf;
L_00650d53:; BB(0x00650d53);
    /* 00650d53: je 0x650ddd */ if (fZ) goto L_00650ddd;
L_00650d59:; BB(0x00650d59);
    /* 00650d59: movsx eax, word ptr [ebp + 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x4u));
    /* 00650d5d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00650d5f: jl 0x650d8f */ if ((fS!=fO)) goto L_00650d8f;
L_00650d61:; BB(0x00650d61);
    /* 00650d61: cmp eax, 0xb9f */ {  u32 a = r_eax; u32 b = 0xb9fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00650d66: jg 0x650d8f */ if ((!fZ&&fS==fO)) goto L_00650d8f;
L_00650d68:; BB(0x00650d68);
    /* 00650d68: mov edi, dword ptr [0xab02bc] */ r_edi = R32((u32)(0xab02bcu));
    /* 00650d6e: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 00650d72: movzx ebp, word ptr [edi + eax*4] */ r_ebp = (u32)R16((u32)(r_edi+r_eax*4));
    /* 00650d76: mov word ptr [esp], bp */ W16((u32)(r_esp), (u16)r_ebp);
    /* 00650d7a: mov ebp, dword ptr [esp + 4] */ r_ebp = R32((u32)(r_esp+0x4u));
    /* 00650d7e: movzx eax, word ptr [edi + eax*4 + 2] */ r_eax = (u32)R16((u32)(r_edi+r_eax*4+0x2u));
    /* 00650d83: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 00650d88: mov eax, 1 */ r_eax = 0x1u;
    /* 00650d8d: jmp 0x650d91 */ goto L_00650d91;
L_00650d8f:; BB(0x00650d8f);
    /* 00650d8f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00650d91:; BB(0x00650d91);
    /* 00650d91: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00650d93: je 0x650dcf */ if (fZ) goto L_00650dcf;
L_00650d95:; BB(0x00650d95);
    /* 00650d95: mov word ptr [esp], dx */ W16((u32)(r_esp), (u16)r_edx);
    /* 00650d99: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00650d9b: je 0x650dc6 */ if (fZ) goto L_00650dc6;
L_00650d9d:; BB(0x00650d9d);
    /* 00650d9d: movsx edi, word ptr [ebp + 4] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ebp+0x4u));
    /* 00650da1: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00650da3: jl 0x650dc6 */ if ((fS!=fO)) goto L_00650dc6;
L_00650da5:; BB(0x00650da5);
    /* 00650da5: cmp edi, 0xb9f */ {  u32 a = r_edi; u32 b = 0xb9fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00650dab: jg 0x650dc6 */ if ((!fZ&&fS==fO)) goto L_00650dc6;
L_00650dad:; BB(0x00650dad);
    /* 00650dad: mov ebp, dword ptr [0xab02bc] */ r_ebp = R32((u32)(0xab02bcu));
    /* 00650db3: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00650db7: mov word ptr [ebp + edi*4], ax */ W16((u32)(r_ebp+r_edi*4), (u16)r_eax);
    /* 00650dbc: movzx edx, word ptr [esp + 2] */ r_edx = (u32)R16((u32)(r_esp+0x2u));
    /* 00650dc1: mov word ptr [ebp + edi*4 + 2], dx */ W16((u32)(r_ebp+r_edi*4+0x2u), (u16)r_edx);
L_00650dc6:; BB(0x00650dc6);
    /* 00650dc6: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00650dc9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00650dca: call 0x7b5038 */ r_esp -= 4; W32(r_esp, 0x650dcfu); f_007b5038();
L_00650dcf:; BB(0x00650dcf);
    /* 00650dcf: fld dword ptr [0x936b90] */ FPUSH(R_F32((u32)(0x936b90u)));
    /* 00650dd5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00650dd8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00650dd9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00650dda: ret 8 */ FN_RET(0x00650d24); r_esp += 12; return;
L_00650ddd:; BB(0x00650ddd);
    /* 00650ddd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00650ddf: jmp 0x650d91 */ goto L_00650d91;
}

void f_00650de4(void) /* sub_650DE4 */
{
    FN_ENTER(0x00650de4);
    /* 00650de4: mov dword ptr [0xa8f654], 0 */ W32((u32)(0xa8f654u), 0x0u);
    /* 00650dee: ret  */ FN_RET(0x00650de4); r_esp += 4; return;
}

void f_00650df0(void)
{
    FN_ENTER(0x00650df0);
    /* 00650df0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00650df1: mov ebp, esp */ r_ebp = r_esp;
    /* 00650df3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00650df5: push 0x8e67ec */ { u32 v = 0x8e67ecu; r_esp -= 4; W32(r_esp, v); }
    /* 00650dfa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00650e00: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00650e01: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00650e08: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00650e0b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00650e0e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00650e11: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00650e14: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00650e17: push 0x37c */ { u32 v = 0x37cu; r_esp -= 4; W32(r_esp, v); }
    /* 00650e1c: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00650e23: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x650e28u); f_005caba4();
    /* 00650e28: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00650e29: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00650e2c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00650e2e: je 0x650e67 */ if (fZ) goto L_00650e67;
L_00650e30:; BB(0x00650e30);
    /* 00650e30: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00650e37: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00650e3e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00650e41: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 00650e47: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00650e4a: call 0x650e6c */ r_esp -= 4; W32(r_esp, 0x650e4fu); f_00650e6c();
    /* 00650e4f: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00650e52: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00650e59:; BB(0x00650e59);
    /* 00650e59: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00650e5c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00650e63: mov esp, ebp */ r_esp = r_ebp;
    /* 00650e65: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00650e66: ret  */ FN_RET(0x00650df0); r_esp += 4; return;
L_00650e67:; BB(0x00650e67);
    /* 00650e67: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00650e69: jmp 0x650e59 */ goto L_00650e59;
}

void f_00650e6c(void) /* sub_650E6C */
{
    FN_ENTER(0x00650e6c);
    /* 00650e6c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00650e6d: mov ebp, esp */ r_ebp = r_esp;
    /* 00650e6f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00650e71: push 0x8e6808 */ { u32 v = 0x8e6808u; r_esp -= 4; W32(r_esp, v); }
    /* 00650e76: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00650e7c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00650e7d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00650e84: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00650e87: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00650e8a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00650e8d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00650e90: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00650e93: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00650e96: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00650e99: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00650e9c: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00650e9f: call 0x770748 */ r_esp -= 4; W32(r_esp, 0x650ea4u); f_00770748();
    /* 00650ea4: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00650eab: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00650eae: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00650eb1: mov dword ptr [ecx], 0xb31260 */ W32((u32)(r_ecx), 0xb31260u);
    /* 00650eb7: mov eax, dword ptr [0x9c7834] */ r_eax = R32((u32)(0x9c7834u));
    /* 00650ebc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00650ebd: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00650ec0: call dword ptr [0xb31274] */ { u32 t = R32((u32)(0xb31274u)); r_esp -= 4; W32(r_esp, 0x650ec6u); call_ind(t); }
    /* 00650ec6: mov ecx, dword ptr [0xa8f654] */ r_ecx = R32((u32)(0xa8f654u));
    /* 00650ecc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00650ece: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x650ed3u); f_005b8610();
    /* 00650ed3: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00650ed6: mov ecx, dword ptr [0xa8f654] */ r_ecx = R32((u32)(0xa8f654u));
    /* 00650edc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00650ede: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 00650ee1: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x650ee6u); f_005b8624();
    /* 00650ee6: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00650ee9: mov dword ptr [ecx + 0xd8], 0x9c7838 */ W32((u32)(r_ecx+0xd8u), 0x9c7838u);
    /* 00650ef3: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 00650ef6: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00650ef8: mov eax, dword ptr [0xa8f654] */ r_eax = R32((u32)(0xa8f654u));
    /* 00650efd: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00650efe: mov edx, dword ptr [eax + 0x430] */ r_edx = R32((u32)(r_eax+0x430u));
    /* 00650f04: mov dword ptr [ecx + 0xdc], edx */ W32((u32)(r_ecx+0xdcu), r_edx);
    /* 00650f0a: mov word ptr [ecx + 0xb8], bx */ W16((u32)(r_ecx+0xb8u), (u16)r_ebx);
    /* 00650f11: call 0x7aa4c8 */ r_esp -= 4; W32(r_esp, 0x650f16u); f_007aa4c8();
    /* 00650f16: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00650f19: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00650f1b: movzx eax, word ptr [ecx + 0xb8] */ r_eax = (u32)R16((u32)(r_ecx+0xb8u));
    /* 00650f22: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 00650f25: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 00650f2c: push 0x9c7868 */ { u32 v = 0x9c7868u; r_esp -= 4; W32(r_esp, v); }
    /* 00650f31: or edx, 0x60000000 */ {  u32 a = r_edx; u32 b = 0x60000000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00650f37: mov dword ptr [ecx + 0x30], edx */ W32((u32)(r_ecx+0x30u), r_edx);
    /* 00650f3a: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x650f3fu); f_007b9a88();
    /* 00650f3f: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00650f42: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x650f47u); f_007b4f54();
    /* 00650f47: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00650f4a: fld dword ptr [0x9c786c] */ FPUSH(R_F32((u32)(0x9c786cu)));
    /* 00650f50: fdiv dword ptr [0x936b8c] */ ST(0) = ST(0) / R_F32((u32)(0x936b8cu));
    /* 00650f56: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 00650f59: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 00650f5c: mov ebx, dword ptr [esi + 0x40] */ r_ebx = R32((u32)(r_esi+0x40u));
    /* 00650f5f: mov dword ptr [esi + 0x74], eax */ W32((u32)(r_esi+0x74u), r_eax);
    /* 00650f62: mov dword ptr [esi + 0x78], edx */ W32((u32)(r_esi+0x78u), r_edx);
    /* 00650f65: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00650f68: mov dword ptr [esi + 0x7c], ebx */ W32((u32)(r_esi+0x7cu), r_ebx);
    /* 00650f6b: fadd dword ptr [edx + 0x78] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x78u));
    /* 00650f6e: mov edi, dword ptr [edx + 0x74] */ r_edi = R32((u32)(r_edx+0x74u));
    /* 00650f71: mov ecx, dword ptr [edx + 0x7c] */ r_ecx = R32((u32)(r_edx+0x7cu));
    /* 00650f74: fst dword ptr [edx + 0x78] */ W_F32((u32)(r_edx+0x78u), ST(0));
    /* 00650f77: fstp dword ptr [edx + 0x304] */ W_F32((u32)(r_edx+0x304u), ST(0)); FPOP();
    /* 00650f7d: mov dword ptr [edx + 0x300], edi */ W32((u32)(r_edx+0x300u), r_edi);
    /* 00650f83: mov dword ptr [edx + 0x308], ecx */ W32((u32)(r_edx+0x308u), r_ecx);
    /* 00650f89: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00650f8b: mov word ptr [edx + 0x32e], ax */ W16((u32)(r_edx+0x32eu), (u16)r_eax);
    /* 00650f92: mov ecx, edx */ r_ecx = r_edx;
    /* 00650f94: call 0x650b58 */ r_esp -= 4; W32(r_esp, 0x650f99u); f_00650b58();
    /* 00650f99: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00650f9c: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00650f9f: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00650fa2: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00650fa5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00650fa8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00650faf: mov esp, ebp */ r_esp = r_ebp;
    /* 00650fb1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00650fb2: ret 8 */ FN_RET(0x00650e6c); r_esp += 12; return;
}

void f_00650fb8(void) /* sub_650FB8 */
{
    FN_ENTER(0x00650fb8);
    /* 00650fb8: mov dword ptr [0xa8f640], 0x3f800000 */ W32((u32)(0xa8f640u), 0x3f800000u);
    /* 00650fc2: mov dword ptr [0xa8f644], 0x41000000 */ W32((u32)(0xa8f644u), 0x41000000u);
    /* 00650fcc: mov dword ptr [0xa8f648], 0x3fc00000 */ W32((u32)(0xa8f648u), 0x3fc00000u);
    /* 00650fd6: ret  */ FN_RET(0x00650fb8); r_esp += 4; return;
}

void f_00650fc6(void)
{
    FN_ENTER(0x00650fc6);
    /* 00650fc6: test al, 0 */ {  u32 a = (u8)r_eax; u32 b = 0x0u; u32 r = (a & b) & 0xffu;   }
    /* 00650fc8: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00650fca: add byte ptr [ecx - 0x39], al */ { u32 ad = (u32)(r_ecx+0xffffffc7u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00650fcd: add eax, 0xa8f648 */ {  u32 a = r_eax; u32 b = 0xa8f648u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00650fd2: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r); fA = (((a ^ b ^ r) & 0x10u) != 0); }
    /* 00650fd4: sar byte ptr [edi], 0xc3 */ { u32 ad = (u32)(r_edi); u32 c = (3u) & 31; u32 a = R8(ad); u32 r = a; if (c) { r = (u32)((i8)a >> (c > 7 ? 7 : c)) & 0xffu; W8(ad, r); fC = ((i8)a >> ((c > 7 ? 7 : c - 1))) & 1; fO = 0; fZ = (r == 0); fS = (r >> 7) & 1; fP = !__builtin_parity(r & 0xffu); } }
    /* 00650fd7: nop  */ ;
    /* 00650fd8: mov eax, dword ptr [0xa8f660] */ r_eax = R32((u32)(0xa8f660u));
    /* 00650fdd: mov edx, dword ptr [0xa8f658] */ r_edx = R32((u32)(0xa8f658u));
    /* 00650fe3: mov ecx, dword ptr [0xa8f65c] */ r_ecx = R32((u32)(0xa8f65cu));
    /* 00650fe9: mov dword ptr [0xa8f654], eax */ W32((u32)(0xa8f654u), r_eax);
    /* 00650fee: mov dword ptr [0xa8f64c], edx */ W32((u32)(0xa8f64cu), r_edx);
    /* 00650ff4: mov dword ptr [0xa8f650], ecx */ W32((u32)(0xa8f650u), r_ecx);
    /* 00650ffa: ret  */ FN_RET(0x00650fc6); r_esp += 4; return;
}

void f_00650fd8(void) /* sub_650FD8 */
{
    FN_ENTER(0x00650fd8);
    /* 00650fd8: mov eax, dword ptr [0xa8f660] */ r_eax = R32((u32)(0xa8f660u));
    /* 00650fdd: mov edx, dword ptr [0xa8f658] */ r_edx = R32((u32)(0xa8f658u));
    /* 00650fe3: mov ecx, dword ptr [0xa8f65c] */ r_ecx = R32((u32)(0xa8f65cu));
    /* 00650fe9: mov dword ptr [0xa8f654], eax */ W32((u32)(0xa8f654u), r_eax);
    /* 00650fee: mov dword ptr [0xa8f64c], edx */ W32((u32)(0xa8f64cu), r_edx);
    /* 00650ff4: mov dword ptr [0xa8f650], ecx */ W32((u32)(0xa8f650u), r_ecx);
    /* 00650ffa: ret  */ FN_RET(0x00650fd8); r_esp += 4; return;
}

void f_00650ffc(void) /* sub_650FFC */
{
    FN_ENTER(0x00650ffc);
    /* 00650ffc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00650ffd: mov ebp, esp */ r_ebp = r_esp;
    /* 00650fff: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00651001: push 0x8e684a */ { u32 v = 0x8e684au; r_esp -= 4; W32(r_esp, v); }
    /* 00651006: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0065100c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065100d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00651014: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00651017: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0065101a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0065101d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00651020: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00651023: mov dword ptr [0xa8f660], 0 */ W32((u32)(0xa8f660u), 0x0u);
    /* 0065102d: call 0x807de4 */ r_esp -= 4; W32(r_esp, 0x651032u); f_00807de4();
    /* 00651032: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00651034: je 0x6510a2 */ if (fZ) goto L_006510a2;
L_00651036:; BB(0x00651036);
    /* 00651036: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 0065103d: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 00651042: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x651047u); f_008581c5();
    /* 00651047: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00651048: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0065104b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065104d: je 0x651182 */ if (fZ) goto L_00651182;
L_00651053:; BB(0x00651053);
    /* 00651053: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 0065105a: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00651061: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00651064: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00651066: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00651067: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00651068: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00651069: push 0x9c7820 */ { u32 v = 0x9c7820u; r_esp -= 4; W32(r_esp, v); }
    /* 0065106e: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00651070: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x651075u); f_005b7a84();
    /* 00651075: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00651078: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_0065107f:; BB(0x0065107f);
    /* 0065107f: mov dword ptr [0xa8f660], ecx */ W32((u32)(0xa8f660u), r_ecx);
    /* 00651085: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0065108c: mov dword ptr [0xa8f658], 0x230 */ W32((u32)(0xa8f658u), 0x230u);
    /* 00651096: mov dword ptr [0xa8f65c], 0x231 */ W32((u32)(0xa8f65cu), 0x231u);
    /* 006510a0: jmp 0x65110c */ goto L_0065110c;
L_006510a2:; BB(0x006510a2);
    /* 006510a2: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 006510a9: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 006510ae: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6510b3u); f_008581c5();
    /* 006510b3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006510b4: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 006510b7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006510b9: je 0x651189 */ if (fZ) goto L_00651189;
L_006510bf:; BB(0x006510bf);
    /* 006510bf: mov dword ptr [ebp - 0x3c], 1 */ W32((u32)(r_ebp+0xffffffc4u), 0x1u);
    /* 006510c6: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006510cd: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 006510d0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006510d2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006510d3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006510d4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006510d5: push 0x9c77f8 */ { u32 v = 0x9c77f8u; r_esp -= 4; W32(r_esp, v); }
    /* 006510da: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 006510dc: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x6510e1u); f_005b7a84();
    /* 006510e1: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 006510e4: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_006510eb:; BB(0x006510eb);
    /* 006510eb: mov dword ptr [0xa8f660], ecx */ W32((u32)(0xa8f660u), r_ecx);
    /* 006510f1: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006510f8: mov dword ptr [0xa8f658], 0x45 */ W32((u32)(0xa8f658u), 0x45u);
    /* 00651102: mov dword ptr [0xa8f65c], 0x46 */ W32((u32)(0xa8f65cu), 0x46u);
L_0065110c:; BB(0x0065110c);
    /* 0065110c: mov eax, dword ptr [0x936b64] */ r_eax = R32((u32)(0x936b64u));
    /* 00651111: movzx edx, word ptr [0x936b68] */ r_edx = (u32)R16((u32)(0x936b68u));
    /* 00651118: movzx ebx, word ptr [0x936b6a] */ r_ebx = (u32)R16((u32)(0x936b6au));
    /* 0065111f: movzx esi, word ptr [0x936b6c] */ r_esi = (u32)R16((u32)(0x936b6cu));
    /* 00651126: mov edi, dword ptr [ecx + 0x430] */ r_edi = R32((u32)(r_ecx+0x430u));
    /* 0065112c: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0065112f: mov word ptr [ebp - 0x24], dx */ W16((u32)(r_ebp+0xffffffdcu), (u16)r_edx);
    /* 00651133: mov word ptr [ebp - 0x22], bx */ W16((u32)(r_ebp+0xffffffdeu), (u16)r_ebx);
    /* 00651137: mov word ptr [ebp - 0x20], si */ W16((u32)(r_ebp+0xffffffe0u), (u16)r_esi);
    /* 0065113b: mov dword ptr [ebp - 0x2c], edi */ W32((u32)(r_ebp+0xffffffd4u), r_edi);
    /* 0065113e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00651140: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x651145u); f_005b8610();
    /* 00651145: mov ebx, eax */ r_ebx = r_eax;
    /* 00651147: mov ecx, dword ptr [0xa8f660] */ r_ecx = R32((u32)(0xa8f660u));
    /* 0065114d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065114f: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x651154u); f_005b8624();
    /* 00651154: lea edx, [ebp - 0x2c] */ r_edx = (u32)(r_ebp+0xffffffd4u);
    /* 00651157: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00651158: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065115a: push 0x41200000 */ { u32 v = 0x41200000u; r_esp -= 4; W32(r_esp, v); }
    /* 0065115f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00651160: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00651161: push 0x3b */ { u32 v = 0x3bu; r_esp -= 4; W32(r_esp, v); }
    /* 00651163: call 0x60895c */ r_esp -= 4; W32(r_esp, 0x651168u); f_0060895c();
    /* 00651168: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0065116b: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0065116e: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 00651171: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00651174: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00651177: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0065117e: mov esp, ebp */ r_esp = r_ebp;
    /* 00651180: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00651181: ret  */ FN_RET(0x00650ffc); r_esp += 4; return;
L_00651182:; BB(0x00651182);
    /* 00651182: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00651184: jmp 0x65107f */ goto L_0065107f;
L_00651189:; BB(0x00651189);
    /* 00651189: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0065118b: jmp 0x6510eb */ goto L_006510eb;
}

