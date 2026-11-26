#include "protos.h"

void f_0061f014(void) /* sub_61F014 */
{
    FN_ENTER(0x0061f014);
    /* 0061f014: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061f015: mov ebp, esp */ r_ebp = r_esp;
    /* 0061f017: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0061f019: push 0x8e2036 */ { u32 v = 0x8e2036u; r_esp -= 4; W32(r_esp, v); }
    /* 0061f01e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0061f024: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061f025: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0061f02c: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061f02f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0061f032: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0061f035: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0061f038: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0061f03b: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0061f03d: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x61f042u); f_008581c5();
    /* 0061f042: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061f043: mov dword ptr [0xa8ec38], eax */ W32((u32)(0xa8ec38u), r_eax);
    /* 0061f048: mov eax, dword ptr [0x9f9860] */ r_eax = R32((u32)(0x9f9860u));
    /* 0061f04d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061f050: je 0x61f0e6 */ if (fZ) goto L_0061f0e6;
L_0061f056:; BB(0x0061f056);
    /* 0061f056: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 0061f05d: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 0061f062: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x61f067u); f_008581c5();
    /* 0061f067: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061f068: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0061f06b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061f06d: je 0x61f0e2 */ if (fZ) goto L_0061f0e2;
L_0061f06f:; BB(0x0061f06f);
    /* 0061f06f: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 0061f076: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0061f07d: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0061f080: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0061f082: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061f083: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061f084: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061f085: push 0x9c5340 */ { u32 v = 0x9c5340u; r_esp -= 4; W32(r_esp, v); }
    /* 0061f08a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0061f08c: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x61f091u); f_005b7a84();
    /* 0061f091: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0061f094: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_0061f09b:; BB(0x0061f09b);
    /* 0061f09b: mov dword ptr [0xa8ec3c], eax */ W32((u32)(0xa8ec3cu), r_eax);
    /* 0061f0a0: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0061f0a7: push 0x931060 */ { u32 v = 0x931060u; r_esp -= 4; W32(r_esp, v); }
    /* 0061f0ac: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x61f0b1u); f_008009dc();
    /* 0061f0b1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061f0b2: mov edx, dword ptr [0xa8ec38] */ r_edx = R32((u32)(0xa8ec38u));
    /* 0061f0b8: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
L_0061f0ba:; BB(0x0061f0ba);
    /* 0061f0ba: mov eax, dword ptr [0xa8ec3c] */ r_eax = R32((u32)(0xa8ec3cu));
    /* 0061f0bf: mov edi, dword ptr [0xa8ec38] */ r_edi = R32((u32)(0xa8ec38u));
    /* 0061f0c5: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 0061f0cb: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 0061f0ce: mov dword ptr [edi + 4], ecx */ W32((u32)(r_edi+0x4u), r_ecx);
    /* 0061f0d1: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0061f0d4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061f0d7: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0061f0de: mov esp, ebp */ r_esp = r_ebp;
    /* 0061f0e0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061f0e1: ret  */ FN_RET(0x0061f014); r_esp += 4; return;
L_0061f0e2:; BB(0x0061f0e2);
    /* 0061f0e2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0061f0e4: jmp 0x61f09b */ goto L_0061f09b;
L_0061f0e6:; BB(0x0061f0e6);
    /* 0061f0e6: call 0x78b220 */ r_esp -= 4; W32(r_esp, 0x61f0ebu); f_0078b220();
    /* 0061f0eb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061f0ed: je 0x61f056 */ if (fZ) goto L_0061f056;
L_0061f0f3:; BB(0x0061f0f3);
    /* 0061f0f3: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0061f0fa: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 0061f0ff: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x61f104u); f_008581c5();
    /* 0061f104: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061f105: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0061f108: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061f10a: je 0x61f15c */ if (fZ) goto L_0061f15c;
L_0061f10c:; BB(0x0061f10c);
    /* 0061f10c: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0061f113: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0061f11a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061f11d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0061f11f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061f120: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061f121: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061f122: push 0x9c5360 */ { u32 v = 0x9c5360u; r_esp -= 4; W32(r_esp, v); }
    /* 0061f127: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0061f129: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x61f12eu); f_005b7a84();
    /* 0061f12e: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061f131: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0061f138:; BB(0x0061f138);
    /* 0061f138: mov dword ptr [0xa8ec3c], eax */ W32((u32)(0xa8ec3cu), r_eax);
    /* 0061f13d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0061f144: push 0x931048 */ { u32 v = 0x931048u; r_esp -= 4; W32(r_esp, v); }
    /* 0061f149: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x61f14eu); f_008009dc();
    /* 0061f14e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061f14f: mov edx, dword ptr [0xa8ec38] */ r_edx = R32((u32)(0xa8ec38u));
    /* 0061f155: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0061f157: jmp 0x61f0ba */ goto L_0061f0ba;
L_0061f15c:; BB(0x0061f15c);
    /* 0061f15c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0061f15e: jmp 0x61f138 */ goto L_0061f138;
}

void f_0061f160(void) /* sub_61F160 */
{
    FN_ENTER(0x0061f160);
    /* 0061f160: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0061f161: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0061f163: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0061f165: call 0x61f184 */ r_esp -= 4; W32(r_esp, 0x61f16au); f_0061f184();
    /* 0061f16a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0061f16e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0061f170: jne 0x61f176 */ if (!fZ) goto L_0061f176;
L_0061f172:; BB(0x0061f172);
    /* 0061f172: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0061f173: ret 4 */ FN_RET(0x0061f160); r_esp += 8; return;
L_0061f176:; BB(0x0061f176);
    /* 0061f176: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0061f177: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x61f17cu); f_005c2f74();
    /* 0061f17c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061f17d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0061f17e: ret 4 */ FN_RET(0x0061f160); r_esp += 8; return;
}

void f_0061f184(void) /* sub_61F184 */
{
    FN_ENTER(0x0061f184);
    /* 0061f184: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061f185: mov ebp, esp */ r_ebp = r_esp;
    /* 0061f187: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0061f189: push 0x8e2050 */ { u32 v = 0x8e2050u; r_esp -= 4; W32(r_esp, v); }
    /* 0061f18e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0061f194: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061f195: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0061f19c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061f19f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0061f1a2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0061f1a5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0061f1a8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0061f1ab: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0061f1ae: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0061f1b5: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061f1b8: mov dword ptr [eax], 0xb278e0 */ W32((u32)(r_eax), 0xb278e0u);
    /* 0061f1be: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061f1bf: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x61f1c4u); f_007b4e84();
    /* 0061f1c4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061f1c5: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061f1c8: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x61f1cdu); f_007b9c8c();
    /* 0061f1cd: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0061f1d4: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061f1d7: call 0x619b10 */ r_esp -= 4; W32(r_esp, 0x61f1dcu); f_00619b10();
    /* 0061f1dc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061f1df: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0061f1e6: mov esp, ebp */ r_esp = r_ebp;
    /* 0061f1e8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061f1e9: ret  */ FN_RET(0x0061f184); r_esp += 4; return;
}

void f_0061f1ec(void) /* sub_61F1EC */
{
    FN_ENTER(0x0061f1ec);
    /* 0061f1ec: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0061f1ed: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0061f1ef: mov edx, dword ptr [ebx + 0xd0] */ r_edx = R32((u32)(r_ebx+0xd0u));
    /* 0061f1f5: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0061f1f8: jne 0x61f258 */ if (!fZ) goto L_0061f258;
L_0061f1fa:; BB(0x0061f1fa);
    /* 0061f1fa: test edx, 0x10000 */ {  u32 a = r_edx; u32 b = 0x10000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fO = 0; }
    /* 0061f200: je 0x61f22d */ if (fZ) goto L_0061f22d;
L_0061f202:; BB(0x0061f202);
    /* 0061f202: fld dword ptr [0x931094] */ FPUSH(R_F32((u32)(0x931094u)));
    /* 0061f208: fadd dword ptr [ebx + 0xd8] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0xd8u));
    /* 0061f20e: fcom dword ptr [0x931098] */ fx_compare(ST(0), R_F32((u32)(0x931098u))); 
    /* 0061f214: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0061f216: fstp dword ptr [ebx + 0xd8] */ W_F32((u32)(r_ebx+0xd8u), ST(0)); FPOP();
    /* 0061f21c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0061f21d: jb 0x61f256 */ if (fC) goto L_0061f256;
L_0061f21f:; BB(0x0061f21f);
    /* 0061f21f: and edx, 0xfffeffff */ {  u32 a = r_edx; u32 b = 0xfffeffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0061f225: mov dword ptr [ebx + 0xd0], edx */ W32((u32)(r_ebx+0xd0u), r_edx);
    /* 0061f22b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0061f22c: ret  */ FN_RET(0x0061f1ec); r_esp += 4; return;
L_0061f22d:; BB(0x0061f22d);
    /* 0061f22d: fld dword ptr [ebx + 0xd8] */ FPUSH(R_F32((u32)(r_ebx+0xd8u)));
    /* 0061f233: fsub dword ptr [0x931094] */ ST(0) = ST(0) - R_F32((u32)(0x931094u));
    /* 0061f239: fcom dword ptr [0x93109c] */ fx_compare(ST(0), R_F32((u32)(0x93109cu))); 
    /* 0061f23f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0061f241: fstp dword ptr [ebx + 0xd8] */ W_F32((u32)(r_ebx+0xd8u), ST(0)); FPOP();
    /* 0061f247: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0061f248: ja 0x61f256 */ if ((!fC&&!fZ)) goto L_0061f256;
L_0061f24a:; BB(0x0061f24a);
    /* 0061f24a: or edx, 0x10000 */ {  u32 a = r_edx; u32 b = 0x10000u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0061f250: mov dword ptr [ebx + 0xd0], edx */ W32((u32)(r_ebx+0xd0u), r_edx);
L_0061f256:; BB(0x0061f256);
    /* 0061f256: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0061f257: ret  */ FN_RET(0x0061f1ec); r_esp += 4; return;
L_0061f258:; BB(0x0061f258);
    /* 0061f258: push 0x45992000 */ { u32 v = 0x45992000u; r_esp -= 4; W32(r_esp, v); }
    /* 0061f25d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0061f25f: call 0x6134c8 */ r_esp -= 4; W32(r_esp, 0x61f264u); f_006134c8();
    /* 0061f264: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061f267: je 0x61f271 */ if (fZ) goto L_0061f271;
L_0061f269:; BB(0x0061f269);
    /* 0061f269: mov edx, dword ptr [ebx + 0xd0] */ r_edx = R32((u32)(r_ebx+0xd0u));
    /* 0061f26f: jmp 0x61f1fa */ goto L_0061f1fa;
L_0061f271:; BB(0x0061f271);
    /* 0061f271: mov dword ptr [ebx + 0xac], 1 */ W32((u32)(r_ebx+0xacu), 0x1u);
    /* 0061f27b: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0061f27d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0061f27f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061f281: call 0x7b52c4 */ r_esp -= 4; W32(r_esp, 0x61f286u); f_007b52c4();
    /* 0061f286: lea edx, [ebx + 0x38] */ r_edx = (u32)(r_ebx+0x38u);
    /* 0061f289: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0061f28b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061f28c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061f28d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061f28e: push 0x45a */ { u32 v = 0x45au; r_esp -= 4; W32(r_esp, v); }
    /* 0061f293: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x61f298u); f_00814298();
    /* 0061f298: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061f29b: mov edx, dword ptr [ebx + 0xd0] */ r_edx = R32((u32)(r_ebx+0xd0u));
    /* 0061f2a1: jmp 0x61f1fa */ goto L_0061f1fa;
}

void f_0061f2a8(void) /* sub_61F2A8 */
{
    FN_ENTER(0x0061f2a8);
    /* 0061f2a8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061f2a9: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0061f2ab: mov eax, dword ptr [ebp + 0xd0] */ r_eax = R32((u32)(r_ebp+0xd0u));
    /* 0061f2b1: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0061f2b3: jne 0x61f2e1 */ if (!fZ) goto L_0061f2e1;
L_0061f2b5:; BB(0x0061f2b5);
    /* 0061f2b5: mov dword ptr [ebp + 0xac], 3 */ W32((u32)(r_ebp+0xacu), 0x3u);
    /* 0061f2bf: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0061f2c1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0061f2c3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061f2c5: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x61f2cau); f_007b52ec();
    /* 0061f2ca: add ebp, 0x38 */ {  u32 a = r_ebp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0061f2cd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0061f2cf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061f2d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061f2d1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061f2d2: push 0x45a */ { u32 v = 0x45au; r_esp -= 4; W32(r_esp, v); }
    /* 0061f2d7: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x61f2dcu); f_00814298();
    /* 0061f2dc: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_0061f2df:; BB(0x0061f2df);
    /* 0061f2df: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061f2e0: ret  */ FN_RET(0x0061f2a8); r_esp += 4; return;
L_0061f2e1:; BB(0x0061f2e1);
    /* 0061f2e1: push 0x461c4000 */ { u32 v = 0x461c4000u; r_esp -= 4; W32(r_esp, v); }
    /* 0061f2e6: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0061f2e8: call 0x6134c8 */ r_esp -= 4; W32(r_esp, 0x61f2edu); f_006134c8();
    /* 0061f2ed: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0061f2f0: je 0x61f2df */ if (fZ) goto L_0061f2df;
L_0061f2f2:; BB(0x0061f2f2);
    /* 0061f2f2: jmp 0x61f2b5 */ goto L_0061f2b5;
}

void f_0061f2f4(void) /* sub_61F2F4 */
{
    FN_ENTER(0x0061f2f4);
    /* 0061f2f4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0061f2f5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0061f2f6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061f2f7: mov esi, ecx */ r_esi = r_ecx;
    /* 0061f2f9: push dword ptr [esi + 0xc4] */ { u32 v = R32((u32)(r_esi+0xc4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061f2ff: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0061f301: mov ecx, esi */ r_ecx = r_esi;
    /* 0061f303: push dword ptr [esi + 0xc0] */ { u32 v = R32((u32)(r_esi+0xc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061f309: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x61f30cu); call_ind(t); }
    /* 0061f30c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0061f30e: je 0x61f433 */ if (fZ) goto L_0061f433;
L_0061f314:; BB(0x0061f314);
    /* 0061f314: push 0x41f00000 */ { u32 v = 0x41f00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0061f319: mov ecx, esi */ r_ecx = r_esi;
    /* 0061f31b: call 0x613244 */ r_esp -= 4; W32(r_esp, 0x61f320u); f_00613244();
    /* 0061f320: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0061f322: je 0x61f433 */ if (fZ) goto L_0061f433;
L_0061f328:; BB(0x0061f328);
    /* 0061f328: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x61f32du); f_0082d7b0();
    /* 0061f32d: lea ecx, [esi + 0x38] */ r_ecx = (u32)(r_esi+0x38u);
    /* 0061f330: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x61f335u); f_0082d838();
    /* 0061f335: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 0061f338: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0061f33a: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x61f33fu); f_0082d8bc();
    /* 0061f33f: mov eax, dword ptr [esi + 0xd0] */ r_eax = R32((u32)(r_esi+0xd0u));
    /* 0061f345: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0061f347: je 0x61f350 */ if (fZ) goto L_0061f350;
L_0061f349:; BB(0x0061f349);
    /* 0061f349: mov ebp, 1 */ r_ebp = 0x1u;
    /* 0061f34e: jmp 0x61f352 */ goto L_0061f352;
L_0061f350:; BB(0x0061f350);
    /* 0061f350: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
L_0061f352:; BB(0x0061f352);
    /* 0061f352: mov eax, dword ptr [0xa8ec44] */ r_eax = R32((u32)(0xa8ec44u));
    /* 0061f357: mov ecx, dword ptr [eax + ebp*4] */ r_ecx = R32((u32)(r_eax+r_ebp*4));
    /* 0061f35a: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x61f35fu); f_00829cc8();
    /* 0061f35f: mov eax, dword ptr [esi + 0xac] */ r_eax = R32((u32)(r_esi+0xacu));
    /* 0061f365: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061f367: jne 0x61f41a */ if (!fZ) goto L_0061f41a;
L_0061f36d:; BB(0x0061f36d);
    /* 0061f36d: mov edi, dword ptr [esi + 0x34] */ r_edi = R32((u32)(r_esi+0x34u));
    /* 0061f370: mov edi, dword ptr [edi + 0x2c] */ r_edi = R32((u32)(r_edi+0x2cu));
    /* 0061f373: lea ecx, [edi + 8] */ r_ecx = (u32)(r_edi+0x8u);
    /* 0061f376: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x61f37bu); f_0082d838();
    /* 0061f37b: push dword ptr [edi + 4] */ { u32 v = R32((u32)(r_edi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061f37e: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x61f383u); f_008321d8();
    /* 0061f383: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061f384: cmp ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061f387: je 0x61f3a8 */ if (fZ) goto L_0061f3a8;
L_0061f389:; BB(0x0061f389);
    /* 0061f389: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 0061f38e: mov dword ptr [0xaab518], eax */ W32((u32)(0xaab518u), r_eax);
    /* 0061f393: or eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0061f396: lea edx, [esi + 0xd4] */ r_edx = (u32)(r_esi+0xd4u);
    /* 0061f39c: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 0061f3a1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061f3a2: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x61f3a7u); f_0082d710();
    /* 0061f3a7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0061f3a8:; BB(0x0061f3a8);
    /* 0061f3a8: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x61f3adu); f_0082d7b0();
    /* 0061f3ad: mov edi, dword ptr [edi + 0x2c] */ r_edi = R32((u32)(r_edi+0x2cu));
    /* 0061f3b0: lea ecx, [edi + 8] */ r_ecx = (u32)(r_edi+0x8u);
    /* 0061f3b3: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x61f3b8u); f_0082d838();
    /* 0061f3b8: push dword ptr [edi + 4] */ { u32 v = R32((u32)(r_edi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061f3bb: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x61f3c0u); f_008321d8();
    /* 0061f3c0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061f3c1: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x61f3c6u); f_0082da80();
    /* 0061f3c6: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x61f3cbu); f_0082d7b0();
    /* 0061f3cb: mov edi, dword ptr [edi + 0x30] */ r_edi = R32((u32)(r_edi+0x30u));
    /* 0061f3ce: lea ecx, [edi + 8] */ r_ecx = (u32)(r_edi+0x8u);
    /* 0061f3d1: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x61f3d6u); f_0082d838();
    /* 0061f3d6: push dword ptr [edi + 4] */ { u32 v = R32((u32)(r_edi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061f3d9: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x61f3deu); f_008321d8();
    /* 0061f3de: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061f3df: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x61f3e4u); f_0082da80();
    /* 0061f3e4: cmp ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061f3e7: je 0x61f3fe */ if (fZ) goto L_0061f3fe;
L_0061f3e9:; BB(0x0061f3e9);
    /* 0061f3e9: push 0x9ff9b0 */ { u32 v = 0x9ff9b0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061f3ee: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x61f3f3u); f_0082d710();
    /* 0061f3f3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061f3f4: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
    /* 0061f3f9: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
L_0061f3fe:; BB(0x0061f3fe);
    /* 0061f3fe: mov eax, dword ptr [esi + 0x34] */ r_eax = R32((u32)(r_esi+0x34u));
    /* 0061f401: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 0061f404: mov ebp, dword ptr [edx + 0x30] */ r_ebp = R32((u32)(r_edx+0x30u));
    /* 0061f407: lea ecx, [ebp + 8] */ r_ecx = (u32)(r_ebp+0x8u);
    /* 0061f40a: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x61f40fu); f_0082d838();
    /* 0061f40f: push dword ptr [ebp + 4] */ { u32 v = R32((u32)(r_ebp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061f412: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x61f417u); f_008321d8();
    /* 0061f417: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061f418: jmp 0x61f42e */ goto L_0061f42e;
L_0061f41a:; BB(0x0061f41a);
    /* 0061f41a: push dword ptr [esi + 0xb0] */ { u32 v = R32((u32)(r_esi+0xb0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061f420: mov ecx, dword ptr [esi + 0x34] */ r_ecx = R32((u32)(r_esi+0x34u));
    /* 0061f423: mov edx, dword ptr [esi + 0xbc] */ r_edx = R32((u32)(r_esi+0xbcu));
    /* 0061f429: call 0x83bd00 */ r_esp -= 4; W32(r_esp, 0x61f42eu); f_0083bd00();
L_0061f42e:; BB(0x0061f42e);
    /* 0061f42e: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x61f433u); f_0082da80();
L_0061f433:; BB(0x0061f433);
    /* 0061f433: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061f434: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0061f435: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0061f436: ret  */ FN_RET(0x0061f2f4); r_esp += 4; return;
}

void f_0061f438(void) /* sub_61F438 */
{
    FN_ENTER(0x0061f438);
    /* 0061f438: mov eax, dword ptr [0xa8ec44] */ r_eax = R32((u32)(0xa8ec44u));
    /* 0061f43d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061f43f: je 0x61f463 */ if (fZ) goto L_0061f463;
L_0061f441:; BB(0x0061f441);
    /* 0061f441: push dword ptr [eax] */ { u32 v = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, v); }
    /* 0061f443: call 0x800b5c */ r_esp -= 4; W32(r_esp, 0x61f448u); f_00800b5c();
    /* 0061f448: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061f449: mov eax, dword ptr [0xa8ec44] */ r_eax = R32((u32)(0xa8ec44u));
    /* 0061f44e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061f450: je 0x61f463 */ if (fZ) goto L_0061f463;
L_0061f452:; BB(0x0061f452);
    /* 0061f452: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061f453: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x61f458u); f_00857e98();
    /* 0061f458: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061f459: mov dword ptr [0xa8ec44], 0 */ W32((u32)(0xa8ec44u), 0x0u);
L_0061f463:; BB(0x0061f463);
    /* 0061f463: mov ecx, dword ptr [0xa8ec48] */ r_ecx = R32((u32)(0xa8ec48u));
    /* 0061f469: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0061f46b: je 0x61f480 */ if (fZ) goto L_0061f480;
L_0061f46d:; BB(0x0061f46d);
    /* 0061f46d: je 0x61f476 */ if (fZ) goto L_0061f476;
L_0061f46f:; BB(0x0061f46f);
    /* 0061f46f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0061f471: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x61f476u); f_004066a8();
L_0061f476:; BB(0x0061f476);
    /* 0061f476: mov dword ptr [0xa8ec48], 0 */ W32((u32)(0xa8ec48u), 0x0u);
L_0061f480:; BB(0x0061f480);
    /* 0061f480: ret  */ FN_RET(0x0061f438); r_esp += 4; return;
}

void f_0061f484(void)
{
    FN_ENTER(0x0061f484);
    /* 0061f484: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061f485: mov ebp, esp */ r_ebp = r_esp;
    /* 0061f487: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0061f489: push 0x8e2078 */ { u32 v = 0x8e2078u; r_esp -= 4; W32(r_esp, v); }
    /* 0061f48e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0061f494: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061f495: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0061f49c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061f49f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0061f4a2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0061f4a5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0061f4a8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0061f4ab: push 0xe4 */ { u32 v = 0xe4u; r_esp -= 4; W32(r_esp, v); }
    /* 0061f4b0: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0061f4b7: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x61f4bcu); f_005caba4();
    /* 0061f4bc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061f4bd: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0061f4c0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061f4c2: je 0x61f4fb */ if (fZ) goto L_0061f4fb;
L_0061f4c4:; BB(0x0061f4c4);
    /* 0061f4c4: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0061f4cb: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0061f4d2: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061f4d5: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061f4db: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061f4de: call 0x61f500 */ r_esp -= 4; W32(r_esp, 0x61f4e3u); f_0061f500();
    /* 0061f4e3: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061f4e6: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0061f4ed:; BB(0x0061f4ed);
    /* 0061f4ed: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061f4f0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0061f4f7: mov esp, ebp */ r_esp = r_ebp;
    /* 0061f4f9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061f4fa: ret  */ FN_RET(0x0061f484); r_esp += 4; return;
L_0061f4fb:; BB(0x0061f4fb);
    /* 0061f4fb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0061f4fd: jmp 0x61f4ed */ goto L_0061f4ed;
}

void f_0061f4a0(void)
{
    FN_ENTER(0x0061f4a0);
}

void f_0061f500(void) /* sub_61F500 */
{
    FN_ENTER(0x0061f500);
    /* 0061f500: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061f501: mov ebp, esp */ r_ebp = r_esp;
    /* 0061f503: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0061f505: push 0x8e2094 */ { u32 v = 0x8e2094u; r_esp -= 4; W32(r_esp, v); }
    /* 0061f50a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0061f510: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061f511: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0061f518: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061f51b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0061f51e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0061f521: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0061f524: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0061f527: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0061f52a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061f52d: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0061f530: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0061f533: call 0x619df0 */ r_esp -= 4; W32(r_esp, 0x61f538u); f_00619df0();
    /* 0061f538: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0061f53f: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0061f542: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0061f545: mov dword ptr [ecx], 0xb278e0 */ W32((u32)(r_ecx), 0xb278e0u);
    /* 0061f54b: mov eax, dword ptr [0x9c53e0] */ r_eax = R32((u32)(0x9c53e0u));
    /* 0061f550: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061f551: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0061f554: call dword ptr [0xb278f4] */ { u32 t = R32((u32)(0xb278f4u)); r_esp -= 4; W32(r_esp, 0x61f55au); call_ind(t); }
    /* 0061f55a: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0061f55d: mov edi, dword ptr [0xa8ec48] */ r_edi = R32((u32)(0xa8ec48u));
    /* 0061f563: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0061f565: mov eax, dword ptr [edi + 0x42c] */ r_eax = R32((u32)(r_edi+0x42cu));
    /* 0061f56b: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 0061f56e: push 0x9c53e4 */ { u32 v = 0x9c53e4u; r_esp -= 4; W32(r_esp, v); }
    /* 0061f573: mov dword ptr [ecx + 0x34], edx */ W32((u32)(r_ecx+0x34u), r_edx);
    /* 0061f576: mov ebx, dword ptr [edi + 0x42c] */ r_ebx = R32((u32)(r_edi+0x42cu));
    /* 0061f57c: mov esi, dword ptr [ebx + 0xc] */ r_esi = R32((u32)(r_ebx+0xcu));
    /* 0061f57f: mov dword ptr [ecx + 0x24], esi */ W32((u32)(r_ecx+0x24u), r_esi);
    /* 0061f582: mov eax, dword ptr [edi + 0x430] */ r_eax = R32((u32)(r_edi+0x430u));
    /* 0061f588: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 0061f58b: mov dword ptr [ecx + 0xbc], eax */ W32((u32)(r_ecx+0xbcu), r_eax);
    /* 0061f591: fild dword ptr [eax + 4] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x4u)));
    /* 0061f594: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0061f597: mov dword ptr [ecx + 0xb8], 0x3f000000 */ W32((u32)(r_ecx+0xb8u), 0x3f000000u);
    /* 0061f5a1: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0061f5a4: fadd dword ptr [edx*4 + 0x931078] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x931078u));
    /* 0061f5ab: fadd dword ptr [0x931088] */ ST(0) = ST(0) + R_F32((u32)(0x931088u));
    /* 0061f5b1: fstp dword ptr [ecx + 0xb4] */ W_F32((u32)(r_ecx+0xb4u), ST(0)); FPOP();
    /* 0061f5b7: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x61f5bcu); f_007b9a88();
    /* 0061f5bc: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0061f5bf: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x61f5c4u); f_007b999c();
    /* 0061f5c4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061f5c5: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0061f5c8: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x61f5cdu); f_007b4f54();
    /* 0061f5cd: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0061f5d0: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0061f5d2: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x61f5d5u); call_ind(t); }
    /* 0061f5d5: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0061f5d8: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061f5db: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0061f5de: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0061f5e1: mov dword ptr [eax + 0xd4], 0x3f800000 */ W32((u32)(r_eax+0xd4u), 0x3f800000u);
    /* 0061f5eb: mov dword ptr [eax + 0xd8], 0x3f800000 */ W32((u32)(r_eax+0xd8u), 0x3f800000u);
    /* 0061f5f5: mov dword ptr [eax + 0xdc], 0x3f800000 */ W32((u32)(r_eax+0xdcu), 0x3f800000u);
    /* 0061f5ff: mov dword ptr [eax + 0xe0], 0x3f800000 */ W32((u32)(r_eax+0xe0u), 0x3f800000u);
    /* 0061f609: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061f60c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0061f613: mov esp, ebp */ r_esp = r_ebp;
    /* 0061f615: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061f616: ret 8 */ FN_RET(0x0061f500); r_esp += 12; return;
}

void f_0061f61c(void) /* sub_61F61C */
{
    FN_ENTER(0x0061f61c);
    /* 0061f61c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061f61d: mov ebp, esp */ r_ebp = r_esp;
    /* 0061f61f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0061f621: push 0x8e20d6 */ { u32 v = 0x8e20d6u; r_esp -= 4; W32(r_esp, v); }
    /* 0061f626: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0061f62c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061f62d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0061f634: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061f637: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0061f63a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0061f63d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0061f640: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0061f643: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0061f645: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x61f64au); f_008581c5();
    /* 0061f64a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061f64b: mov dword ptr [0xa8ec44], eax */ W32((u32)(0xa8ec44u), r_eax);
    /* 0061f650: mov eax, dword ptr [0x9f9860] */ r_eax = R32((u32)(0x9f9860u));
    /* 0061f655: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061f658: je 0x61f6ee */ if (fZ) goto L_0061f6ee;
L_0061f65e:; BB(0x0061f65e);
    /* 0061f65e: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 0061f665: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 0061f66a: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x61f66fu); f_008581c5();
    /* 0061f66f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061f670: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0061f673: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061f675: je 0x61f6ea */ if (fZ) goto L_0061f6ea;
L_0061f677:; BB(0x0061f677);
    /* 0061f677: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 0061f67e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0061f685: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0061f688: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0061f68a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061f68b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061f68c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061f68d: push 0x9c53b0 */ { u32 v = 0x9c53b0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061f692: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0061f694: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x61f699u); f_005b7a84();
    /* 0061f699: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0061f69c: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_0061f6a3:; BB(0x0061f6a3);
    /* 0061f6a3: mov dword ptr [0xa8ec48], eax */ W32((u32)(0xa8ec48u), r_eax);
    /* 0061f6a8: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0061f6af: push 0x9310f0 */ { u32 v = 0x9310f0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061f6b4: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x61f6b9u); f_008009dc();
    /* 0061f6b9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061f6ba: mov edx, dword ptr [0xa8ec44] */ r_edx = R32((u32)(0xa8ec44u));
    /* 0061f6c0: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
L_0061f6c2:; BB(0x0061f6c2);
    /* 0061f6c2: mov eax, dword ptr [0xa8ec48] */ r_eax = R32((u32)(0xa8ec48u));
    /* 0061f6c7: mov edi, dword ptr [0xa8ec44] */ r_edi = R32((u32)(0xa8ec44u));
    /* 0061f6cd: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 0061f6d3: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 0061f6d6: mov dword ptr [edi + 4], ecx */ W32((u32)(r_edi+0x4u), r_ecx);
    /* 0061f6d9: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0061f6dc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061f6df: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0061f6e6: mov esp, ebp */ r_esp = r_ebp;
    /* 0061f6e8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061f6e9: ret  */ FN_RET(0x0061f61c); r_esp += 4; return;
L_0061f6ea:; BB(0x0061f6ea);
    /* 0061f6ea: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0061f6ec: jmp 0x61f6a3 */ goto L_0061f6a3;
L_0061f6ee:; BB(0x0061f6ee);
    /* 0061f6ee: call 0x78b220 */ r_esp -= 4; W32(r_esp, 0x61f6f3u); f_0078b220();
    /* 0061f6f3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061f6f5: je 0x61f65e */ if (fZ) goto L_0061f65e;
L_0061f6fb:; BB(0x0061f6fb);
    /* 0061f6fb: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0061f702: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 0061f707: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x61f70cu); f_008581c5();
    /* 0061f70c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061f70d: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0061f710: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061f712: je 0x61f764 */ if (fZ) goto L_0061f764;
L_0061f714:; BB(0x0061f714);
    /* 0061f714: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0061f71b: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0061f722: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061f725: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0061f727: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061f728: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061f729: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061f72a: push 0x9c53d0 */ { u32 v = 0x9c53d0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061f72f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0061f731: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x61f736u); f_005b7a84();
    /* 0061f736: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061f739: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0061f740:; BB(0x0061f740);
    /* 0061f740: mov dword ptr [0xa8ec48], eax */ W32((u32)(0xa8ec48u), r_eax);
    /* 0061f745: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0061f74c: push 0x9310d8 */ { u32 v = 0x9310d8u; r_esp -= 4; W32(r_esp, v); }
    /* 0061f751: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x61f756u); f_008009dc();
    /* 0061f756: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061f757: mov edx, dword ptr [0xa8ec44] */ r_edx = R32((u32)(0xa8ec44u));
    /* 0061f75d: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0061f75f: jmp 0x61f6c2 */ goto L_0061f6c2;
L_0061f764:; BB(0x0061f764);
    /* 0061f764: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0061f766: jmp 0x61f740 */ goto L_0061f740;
}

void f_0061f768(void) /* sub_61F768 */
{
    FN_ENTER(0x0061f768);
    /* 0061f768: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0061f769: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0061f76b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0061f76d: call 0x61f78c */ r_esp -= 4; W32(r_esp, 0x61f772u); f_0061f78c();
    /* 0061f772: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0061f776: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0061f778: jne 0x61f77e */ if (!fZ) goto L_0061f77e;
L_0061f77a:; BB(0x0061f77a);
    /* 0061f77a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0061f77b: ret 4 */ FN_RET(0x0061f768); r_esp += 8; return;
L_0061f77e:; BB(0x0061f77e);
    /* 0061f77e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0061f77f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x61f784u); f_005c2f74();
    /* 0061f784: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061f785: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0061f786: ret 4 */ FN_RET(0x0061f768); r_esp += 8; return;
}

void f_0061f78c(void) /* sub_61F78C */
{
    FN_ENTER(0x0061f78c);
    /* 0061f78c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061f78d: mov ebp, esp */ r_ebp = r_esp;
    /* 0061f78f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0061f791: push 0x8e20f0 */ { u32 v = 0x8e20f0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061f796: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0061f79c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061f79d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0061f7a4: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061f7a7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0061f7aa: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0061f7ad: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0061f7b0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0061f7b3: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0061f7b6: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0061f7bd: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061f7c0: mov dword ptr [eax], 0xb27a20 */ W32((u32)(r_eax), 0xb27a20u);
    /* 0061f7c6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061f7c7: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x61f7ccu); f_007b4e84();
    /* 0061f7cc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061f7cd: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061f7d0: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x61f7d5u); f_007b9c8c();
    /* 0061f7d5: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0061f7dc: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061f7df: call 0x619b10 */ r_esp -= 4; W32(r_esp, 0x61f7e4u); f_00619b10();
    /* 0061f7e4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061f7e7: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0061f7ee: mov esp, ebp */ r_esp = r_ebp;
    /* 0061f7f0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061f7f1: ret  */ FN_RET(0x0061f78c); r_esp += 4; return;
}

void f_0061f7f4(void) /* sub_61F7F4 */
{
    FN_ENTER(0x0061f7f4);
    /* 0061f7f4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0061f7f5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0061f7f7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0061f7f9: call 0x61f818 */ r_esp -= 4; W32(r_esp, 0x61f7feu); f_0061f818();
    /* 0061f7fe: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0061f802: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0061f804: jne 0x61f80a */ if (!fZ) goto L_0061f80a;
L_0061f806:; BB(0x0061f806);
    /* 0061f806: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0061f807: ret 4 */ FN_RET(0x0061f7f4); r_esp += 8; return;
L_0061f80a:; BB(0x0061f80a);
    /* 0061f80a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0061f80b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x61f810u); f_005c2f74();
    /* 0061f810: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061f811: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0061f812: ret 4 */ FN_RET(0x0061f7f4); r_esp += 8; return;
}

void f_0061f818(void) /* sub_61F818 */
{
    FN_ENTER(0x0061f818);
    /* 0061f818: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061f819: mov ebp, esp */ r_ebp = r_esp;
    /* 0061f81b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0061f81d: push 0x8e210c */ { u32 v = 0x8e210cu; r_esp -= 4; W32(r_esp, v); }
    /* 0061f822: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0061f828: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061f829: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0061f830: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061f833: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0061f836: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0061f839: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0061f83c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0061f83f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0061f842: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0061f849: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061f84c: mov dword ptr [eax], 0xb27a80 */ W32((u32)(r_eax), 0xb27a80u);
    /* 0061f852: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061f853: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x61f858u); f_007b4e84();
    /* 0061f858: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061f859: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061f85c: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x61f861u); f_007b9c8c();
    /* 0061f861: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0061f868: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061f86b: call 0x619b10 */ r_esp -= 4; W32(r_esp, 0x61f870u); f_00619b10();
    /* 0061f870: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061f873: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0061f87a: mov esp, ebp */ r_esp = r_ebp;
    /* 0061f87c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061f87d: ret  */ FN_RET(0x0061f818); r_esp += 4; return;
}

void f_0061f880(void) /* sub_61F880 */
{
    FN_ENTER(0x0061f880);
    /* 0061f880: mov ecx, dword ptr [0xa8ec50] */ r_ecx = R32((u32)(0xa8ec50u));
    /* 0061f886: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061f888: je 0x61f8a5 */ if (fZ) goto L_0061f8a5;
L_0061f88a:; BB(0x0061f88a);
    /* 0061f88a: call 0x829de0 */ r_esp -= 4; W32(r_esp, 0x61f88fu); f_00829de0();
    /* 0061f88f: push dword ptr [0xa8ec50] */ { u32 v = R32((u32)(0xa8ec50u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061f895: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x61f89au); f_0082e960();
    /* 0061f89a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061f89b: mov dword ptr [0xa8ec50], 0 */ W32((u32)(0xa8ec50u), 0x0u);
L_0061f8a5:; BB(0x0061f8a5);
    /* 0061f8a5: mov ecx, dword ptr [0xa8ec54] */ r_ecx = R32((u32)(0xa8ec54u));
    /* 0061f8ab: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0061f8ad: je 0x61f8c2 */ if (fZ) goto L_0061f8c2;
L_0061f8af:; BB(0x0061f8af);
    /* 0061f8af: je 0x61f8b8 */ if (fZ) goto L_0061f8b8;
L_0061f8b1:; BB(0x0061f8b1);
    /* 0061f8b1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0061f8b3: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x61f8b8u); f_004066a8();
L_0061f8b8:; BB(0x0061f8b8);
    /* 0061f8b8: mov dword ptr [0xa8ec54], 0 */ W32((u32)(0xa8ec54u), 0x0u);
L_0061f8c2:; BB(0x0061f8c2);
    /* 0061f8c2: ret  */ FN_RET(0x0061f880); r_esp += 4; return;
}

void f_0061f8c4(void) /* sub_61F8C4 */
{
    FN_ENTER(0x0061f8c4);
    /* 0061f8c4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061f8c5: mov ebp, esp */ r_ebp = r_esp;
    /* 0061f8c7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0061f8c9: push 0x8e2128 */ { u32 v = 0x8e2128u; r_esp -= 4; W32(r_esp, v); }
    /* 0061f8ce: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0061f8d4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061f8d5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0061f8dc: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061f8df: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0061f8e2: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0061f8e5: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0061f8e8: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0061f8eb: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0061f8ee: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061f8f1: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0061f8f4: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0061f8f7: call 0x619df0 */ r_esp -= 4; W32(r_esp, 0x61f8fcu); f_00619df0();
    /* 0061f8fc: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0061f903: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0061f906: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0061f909: mov dword ptr [ecx], 0xb27a20 */ W32((u32)(r_ecx), 0xb27a20u);
    /* 0061f90f: mov eax, dword ptr [0x9c5450] */ r_eax = R32((u32)(0x9c5450u));
    /* 0061f914: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061f915: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0061f918: call dword ptr [0xb27a34] */ { u32 t = R32((u32)(0xb27a34u)); r_esp -= 4; W32(r_esp, 0x61f91eu); call_ind(t); }
    /* 0061f91e: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0061f921: call 0x61c84c */ r_esp -= 4; W32(r_esp, 0x61f926u); f_0061c84c();
    /* 0061f926: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0061f929: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0061f92b: push 0x9c5458 */ { u32 v = 0x9c5458u; r_esp -= 4; W32(r_esp, v); }
    /* 0061f930: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x61f935u); f_007b9a88();
    /* 0061f935: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0061f938: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x61f93du); f_007b999c();
    /* 0061f93d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061f93e: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0061f941: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x61f946u); f_007b4f54();
    /* 0061f946: mov ecx, dword ptr [0xa8ec54] */ r_ecx = R32((u32)(0xa8ec54u));
    /* 0061f94c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061f94e: je 0x61fa56 */ if (fZ) goto L_0061fa56;
L_0061f954:; BB(0x0061f954);
    /* 0061f954: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061f956: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x61f95bu); f_005b8610();
    /* 0061f95b: mov edx, eax */ r_edx = r_eax;
    /* 0061f95d: mov ecx, dword ptr [0xa8ec54] */ r_ecx = R32((u32)(0xa8ec54u));
L_0061f963:; BB(0x0061f963);
    /* 0061f963: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0061f966: mov dword ptr [eax + 0xd4], edx */ W32((u32)(r_eax+0xd4u), r_edx);
    /* 0061f96c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061f96e: je 0x61fa4f */ if (fZ) goto L_0061fa4f;
L_0061f974:; BB(0x0061f974);
    /* 0061f974: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061f976: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x61f97bu); f_005b8624();
    /* 0061f97b: mov edx, eax */ r_edx = r_eax;
    /* 0061f97d: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0061f980: mov ecx, dword ptr [0xa8ec54] */ r_ecx = R32((u32)(0xa8ec54u));
L_0061f986:; BB(0x0061f986);
    /* 0061f986: mov dword ptr [eax + 0x24], edx */ W32((u32)(r_eax+0x24u), r_edx);
    /* 0061f989: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061f98b: je 0x61fa48 */ if (fZ) goto L_0061fa48;
L_0061f991:; BB(0x0061f991);
    /* 0061f991: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061f993: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x61f998u); f_005b8638();
    /* 0061f998: mov ecx, eax */ r_ecx = r_eax;
    /* 0061f99a: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
L_0061f99d:; BB(0x0061f99d);
    /* 0061f99d: mov dword ptr [eax + 0xbc], ecx */ W32((u32)(r_eax+0xbcu), r_ecx);
    /* 0061f9a3: fild dword ptr [ecx + 4] */ FPUSH((long double)(i32)R32((u32)(r_ecx+0x4u)));
    /* 0061f9a6: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0061f9a9: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0061f9ac: fadd dword ptr [edx*4 + 0x931110] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x931110u));
    /* 0061f9b3: fadd dword ptr [0x931128] */ ST(0) = ST(0) + R_F32((u32)(0x931128u));
    /* 0061f9b9: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0061f9bb: fstp dword ptr [eax + 0xb4] */ W_F32((u32)(r_eax+0xb4u), ST(0)); FPOP();
    /* 0061f9c1: mov dword ptr [eax + 0xb8], 0x3f000000 */ W32((u32)(r_eax+0xb8u), 0x3f000000u);
    /* 0061f9cb: mov dword ptr [ebp - 0x44], 3 */ W32((u32)(r_ebp+0xffffffbcu), 0x3u);
    /* 0061f9d2: mov dword ptr [ebp - 0x40], 4 */ W32((u32)(r_ebp+0xffffffc0u), 0x4u);
    /* 0061f9d9: mov dword ptr [ebp - 0x3c], 6 */ W32((u32)(r_ebp+0xffffffc4u), 0x6u);
    /* 0061f9e0: mov dword ptr [ebp - 0x38], 8 */ W32((u32)(r_ebp+0xffffffc8u), 0x8u);
    /* 0061f9e7: mov dword ptr [ebp - 0x34], 2 */ W32((u32)(r_ebp+0xffffffccu), 0x2u);
    /* 0061f9ee: mov dword ptr [ebp - 0x30], 5 */ W32((u32)(r_ebp+0xffffffd0u), 0x5u);
    /* 0061f9f5: mov dword ptr [ebp - 0x2c], 7 */ W32((u32)(r_ebp+0xffffffd4u), 0x7u);
    /* 0061f9fc: mov dword ptr [ebp - 0x28], 9 */ W32((u32)(r_ebp+0xffffffd8u), 0x9u);
L_0061fa03:; BB(0x0061fa03);
    /* 0061fa03: lea ebx, [esi + esi] */ r_ebx = (u32)(r_esi+r_esi);
    /* 0061fa06: lea edx, [ebx + ebx] */ r_edx = (u32)(r_ebx+r_ebx);
    /* 0061fa09: push dword ptr [ebp + edx - 0x44] */ { u32 v = R32((u32)(r_ebp+r_edx+0xffffffbcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0061fa0d: push dword ptr [eax + 0xd4] */ { u32 v = R32((u32)(r_eax+0xd4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061fa13: call 0x78e9b0 */ r_esp -= 4; W32(r_esp, 0x61fa18u); f_0078e9b0();
    /* 0061fa18: mov edx, eax */ r_edx = r_eax;
    /* 0061fa1a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061fa1d: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0061fa20: mov dword ptr [eax + ebx*2 + 0xd8], edx */ W32((u32)(r_eax+r_ebx*2+0xd8u), r_edx);
    /* 0061fa27: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0061fa2a: cmp esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0061fa2d: jl 0x61fa03 */ if ((fS!=fO)) goto L_0061fa03;
L_0061fa2f:; BB(0x0061fa2f);
    /* 0061fa2f: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061fa32: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0061fa35: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0061fa38: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061fa3b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0061fa42: mov esp, ebp */ r_esp = r_ebp;
    /* 0061fa44: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061fa45: ret 8 */ FN_RET(0x0061f8c4); r_esp += 12; return;
L_0061fa48:; BB(0x0061fa48);
    /* 0061fa48: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0061fa4a: jmp 0x61f99d */ goto L_0061f99d;
L_0061fa4f:; BB(0x0061fa4f);
    /* 0061fa4f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0061fa51: jmp 0x61f986 */ goto L_0061f986;
L_0061fa56:; BB(0x0061fa56);
    /* 0061fa56: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0061fa58: jmp 0x61f963 */ goto L_0061f963;
}

void f_0061fa60(void) /* sub_61FA60 */
{
    FN_ENTER(0x0061fa60);
    /* 0061fa60: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0061fa61: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0061fa62: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061fa63: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0061fa64: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061fa67: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0061fa69: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0061fa6b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0061fa6d: push dword ptr [ebx + 0xc4] */ { u32 v = R32((u32)(r_ebx+0xc4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061fa73: push dword ptr [ebx + 0xc0] */ { u32 v = R32((u32)(r_ebx+0xc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061fa79: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x61fa7cu); call_ind(t); }
    /* 0061fa7c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061fa7f: je 0x61fa89 */ if (fZ) goto L_0061fa89;
L_0061fa81:; BB(0x0061fa81);
    /* 0061fa81: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0061fa84: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0061fa85: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061fa86: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0061fa87: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0061fa88: ret  */ FN_RET(0x0061fa60); r_esp += 4; return;
L_0061fa89:; BB(0x0061fa89);
    /* 0061fa89: push 0x41f00000 */ { u32 v = 0x41f00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0061fa8e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0061fa90: call 0x613244 */ r_esp -= 4; W32(r_esp, 0x61fa95u); f_00613244();
    /* 0061fa95: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061fa98: jne 0x61fa81 */ if (!fZ) goto L_0061fa81;
L_0061fa9a:; BB(0x0061fa9a);
    /* 0061fa9a: mov eax, dword ptr [ebx + 0xac] */ r_eax = R32((u32)(r_ebx+0xacu));
    /* 0061faa0: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061faa3: je 0x61fb53 */ if (fZ) goto L_0061fb53;
L_0061faa9:; BB(0x0061faa9);
    /* 0061faa9: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061faac: je 0x61fb53 */ if (fZ) goto L_0061fb53;
L_0061fab2:; BB(0x0061fab2);
    /* 0061fab2: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061fab5: jne 0x61fafd */ if (!fZ) goto L_0061fafd;
L_0061fab7:; BB(0x0061fab7);
    /* 0061fab7: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x61fabcu); f_0082d7b0();
    /* 0061fabc: mov ecx, dword ptr [0xa8ec50] */ r_ecx = R32((u32)(0xa8ec50u));
    /* 0061fac2: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x61fac7u); f_00829cc8();
    /* 0061fac7: lea ecx, [ebx + 0x38] */ r_ecx = (u32)(r_ebx+0x38u);
    /* 0061faca: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x61facfu); f_0082d838();
    /* 0061facf: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 0061fad2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0061fad4: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x61fad9u); f_0082d8bc();
    /* 0061fad9: push dword ptr [ebx + 0xb4] */ { u32 v = R32((u32)(r_ebx+0xb4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061fadf: mov ecx, dword ptr [ebx + 0xd4] */ r_ecx = R32((u32)(r_ebx+0xd4u));
    /* 0061fae5: mov edx, dword ptr [ebx + 0xbc] */ r_edx = R32((u32)(r_ebx+0xbcu));
    /* 0061faeb: call 0x83bd00 */ r_esp -= 4; W32(r_esp, 0x61faf0u); f_0083bd00();
    /* 0061faf0: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x61faf5u); f_0082da80();
    /* 0061faf5: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0061faf8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0061faf9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061fafa: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0061fafb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0061fafc: ret  */ FN_RET(0x0061fa60); r_esp += 4; return;
L_0061fafd:; BB(0x0061fafd);
    /* 0061fafd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061faff: jne 0x61fa81 */ if (!fZ) goto L_0061fa81;
L_0061fb01:; BB(0x0061fb01);
    /* 0061fb01: mov eax, dword ptr [ebx + 0xcc] */ r_eax = R32((u32)(r_ebx+0xccu));
    /* 0061fb07: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061fb0a: je 0x61fb99 */ if (fZ) goto L_0061fb99;
L_0061fb10:; BB(0x0061fb10);
    /* 0061fb10: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061fb13: je 0x61fb99 */ if (fZ) goto L_0061fb99;
L_0061fb19:; BB(0x0061fb19);
    /* 0061fb19: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x61fb1eu); f_0082d7b0();
    /* 0061fb1e: mov ecx, dword ptr [0xa8ec50] */ r_ecx = R32((u32)(0xa8ec50u));
    /* 0061fb24: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x61fb29u); f_00829cc8();
    /* 0061fb29: lea ecx, [ebx + 0x38] */ r_ecx = (u32)(r_ebx+0x38u);
    /* 0061fb2c: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x61fb31u); f_0082d838();
    /* 0061fb31: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 0061fb34: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0061fb36: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x61fb3bu); f_0082d8bc();
    /* 0061fb3b: mov ecx, dword ptr [ebx + 0xd4] */ r_ecx = R32((u32)(r_ebx+0xd4u));
    /* 0061fb41: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x61fb46u); f_00831758();
    /* 0061fb46: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x61fb4bu); f_0082da80();
    /* 0061fb4b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0061fb4e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0061fb4f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061fb50: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0061fb51: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0061fb52: ret  */ FN_RET(0x0061fa60); r_esp += 4; return;
L_0061fb53:; BB(0x0061fb53);
    /* 0061fb53: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x61fb58u); f_0082d7b0();
    /* 0061fb58: mov ecx, dword ptr [0xa8ec50] */ r_ecx = R32((u32)(0xa8ec50u));
    /* 0061fb5e: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x61fb63u); f_00829cc8();
    /* 0061fb63: lea ecx, [ebx + 0x38] */ r_ecx = (u32)(r_ebx+0x38u);
    /* 0061fb66: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x61fb6bu); f_0082d838();
    /* 0061fb6b: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 0061fb6e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0061fb70: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x61fb75u); f_0082d8bc();
    /* 0061fb75: push dword ptr [ebx + 0xb0] */ { u32 v = R32((u32)(r_ebx+0xb0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061fb7b: mov ecx, dword ptr [ebx + 0xd4] */ r_ecx = R32((u32)(r_ebx+0xd4u));
    /* 0061fb81: mov edx, dword ptr [ebx + 0xbc] */ r_edx = R32((u32)(r_ebx+0xbcu));
    /* 0061fb87: call 0x83bd00 */ r_esp -= 4; W32(r_esp, 0x61fb8cu); f_0083bd00();
    /* 0061fb8c: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x61fb91u); f_0082da80();
    /* 0061fb91: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0061fb94: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0061fb95: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061fb96: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0061fb97: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0061fb98: ret  */ FN_RET(0x0061fa60); r_esp += 4; return;
L_0061fb99:; BB(0x0061fb99);
    /* 0061fb99: mov edx, dword ptr [ebx + 0xd0] */ r_edx = R32((u32)(r_ebx+0xd0u));
    /* 0061fb9f: mov eax, 1 */ r_eax = 0x1u;
    /* 0061fba4: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0061fba7: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0061fbab: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0061fbaf: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0061fbb3: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0061fbb6: jne 0x61fbf4 */ if (!fZ) goto L_0061fbf4;
L_0061fbb8:; BB(0x0061fbb8);
    /* 0061fbb8: mov eax, dword ptr [ebx + 0x88] */ r_eax = R32((u32)(r_ebx+0x88u));
    /* 0061fbbe: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0061fbc0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0061fbc2: jle 0x61fbf4 */ if ((fZ||fS!=fO)) goto L_0061fbf4;
L_0061fbc4:; BB(0x0061fbc4);
    /* 0061fbc4: mov eax, ebp */ r_eax = r_ebp;
    /* 0061fbc6: add eax, dword ptr [ebx + 0xc8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0xc8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061fbcc: movzx edx, ax */ r_edx = (u32)(u16)r_eax;
    /* 0061fbcf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061fbd0: call 0x816eec */ r_esp -= 4; W32(r_esp, 0x61fbd5u); f_00816eec();
    /* 0061fbd5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061fbd6: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0061fbd9: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061fbdc: je 0x61fcc3 */ if (fZ) goto L_0061fcc3;
L_0061fbe2:; BB(0x0061fbe2);
    /* 0061fbe2: mov dword ptr [esp + ebp*4], 0 */ W32((u32)(r_esp+r_ebp*4), 0x0u);
L_0061fbe9:; BB(0x0061fbe9);
    /* 0061fbe9: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0061fbec: cmp ebp, dword ptr [ebx + 0x88] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_ebx+0x88u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061fbf2: jl 0x61fbc4 */ if ((fS!=fO)) goto L_0061fbc4;
L_0061fbf4:; BB(0x0061fbf4);
    /* 0061fbf4: mov edi, dword ptr [ebx + 0xd4] */ r_edi = R32((u32)(r_ebx+0xd4u));
    /* 0061fbfa: lea esi, [ebx + 0xd8] */ r_esi = (u32)(r_ebx+0xd8u);
    /* 0061fc00: lea ebp, [ebx + 0xe8] */ r_ebp = (u32)(r_ebx+0xe8u);
    /* 0061fc06: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x61fc0bu); f_0082d7b0();
    /* 0061fc0b: mov ecx, dword ptr [ebx + 0x24] */ r_ecx = R32((u32)(r_ebx+0x24u));
    /* 0061fc0e: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x61fc13u); f_00829cc8();
    /* 0061fc13: lea ecx, [ebx + 0x38] */ r_ecx = (u32)(r_ebx+0x38u);
    /* 0061fc16: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x61fc1bu); f_0082d838();
    /* 0061fc1b: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 0061fc1e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0061fc20: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x61fc25u); f_0082d8bc();
    /* 0061fc25: push dword ptr [edi + 4] */ { u32 v = R32((u32)(r_edi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061fc28: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x61fc2du); f_008321d8();
    /* 0061fc2d: mov eax, dword ptr [edi + 0x2c] */ r_eax = R32((u32)(r_edi+0x2cu));
    /* 0061fc30: push dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061fc33: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x61fc38u); f_008321d8();
    /* 0061fc38: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061fc3b: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x61fc40u); f_0082dbac();
    /* 0061fc40: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_0061fc42:; BB(0x0061fc42);
    /* 0061fc42: mov eax, dword ptr [esp + edi*4] */ r_eax = R32((u32)(r_esp+r_edi*4));
    /* 0061fc45: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061fc48: je 0x61fccf */ if (fZ) goto L_0061fccf;
L_0061fc4e:; BB(0x0061fc4e);
    /* 0061fc4e: mov ecx, dword ptr [ebx + 0x24] */ r_ecx = R32((u32)(r_ebx+0x24u));
    /* 0061fc51: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x61fc56u); f_00829cc8();
L_0061fc56:; BB(0x0061fc56);
    /* 0061fc56: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0061fc58: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061fc5a: je 0x61fc7b */ if (fZ) goto L_0061fc7b;
L_0061fc5c:; BB(0x0061fc5c);
    /* 0061fc5c: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x61fc61u); f_0082d7b0();
    /* 0061fc61: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 0061fc63: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061fc66: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x61fc6bu); f_0082d838();
    /* 0061fc6b: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0061fc6d: push dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061fc70: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x61fc75u); f_008321d8();
    /* 0061fc75: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061fc76: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x61fc7bu); f_0082da80();
L_0061fc7b:; BB(0x0061fc7b);
    /* 0061fc7b: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0061fc7e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061fc80: je 0x61fca3 */ if (fZ) goto L_0061fca3;
L_0061fc82:; BB(0x0061fc82);
    /* 0061fc82: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x61fc87u); f_0082d7b0();
    /* 0061fc87: mov ecx, dword ptr [ebp] */ r_ecx = R32((u32)(r_ebp));
    /* 0061fc8a: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061fc8d: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x61fc92u); f_0082d838();
    /* 0061fc92: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0061fc95: push dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061fc98: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x61fc9du); f_008321d8();
    /* 0061fc9d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061fc9e: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x61fca3u); f_0082da80();
L_0061fca3:; BB(0x0061fca3);
    /* 0061fca3: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0061fca6: add ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0061fca9: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0061fcac: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061fcaf: jl 0x61fc42 */ if ((fS!=fO)) goto L_0061fc42;
L_0061fcb1:; BB(0x0061fcb1);
    /* 0061fcb1: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x61fcb6u); f_0082dab0();
    /* 0061fcb6: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x61fcbbu); f_0082da80();
    /* 0061fcbb: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0061fcbe: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0061fcbf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061fcc0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0061fcc1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0061fcc2: ret  */ FN_RET(0x0061fa60); r_esp += 4; return;
L_0061fcc3:; BB(0x0061fcc3);
    /* 0061fcc3: mov dword ptr [esp + ebp*4], 1 */ W32((u32)(r_esp+r_ebp*4), 0x1u);
    /* 0061fcca: jmp 0x61fbe9 */ goto L_0061fbe9;
L_0061fccf:; BB(0x0061fccf);
    /* 0061fccf: mov ecx, dword ptr [0xa8ec50] */ r_ecx = R32((u32)(0xa8ec50u));
    /* 0061fcd5: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x61fcdau); f_00829cc8();
    /* 0061fcda: jmp 0x61fc56 */ goto L_0061fc56;
}

void f_0061fce0(void) /* sub_61FCE0 */
{
    FN_ENTER(0x0061fce0);
    /* 0061fce0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0061fce1: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061fce4: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0061fce6: mov eax, dword ptr [ebx + 0xcc] */ r_eax = R32((u32)(r_ebx+0xccu));
    /* 0061fcec: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061fcef: je 0x61fe71 */ if (fZ) goto L_0061fe71;
L_0061fcf5:; BB(0x0061fcf5);
    /* 0061fcf5: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061fcf8: jne 0x61fd82 */ if (!fZ) goto L_0061fd82;
L_0061fcfe:; BB(0x0061fcfe);
    /* 0061fcfe: mov ecx, dword ptr [ebx + 0x88] */ r_ecx = R32((u32)(r_ebx+0x88u));
    /* 0061fd04: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0061fd06: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0061fd08: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0061fd0a: jle 0x61fd67 */ if ((fZ||fS!=fO)) goto L_0061fd67;
L_0061fd0c:; BB(0x0061fd0c);
    /* 0061fd0c: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 0061fd10: mov esi, ebx */ r_esi = r_ebx;
    /* 0061fd12: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 0061fd16: mov ebx, eax */ r_ebx = r_eax;
    /* 0061fd18: mov edi, edx */ r_edi = r_edx;
L_0061fd1a:; BB(0x0061fd1a);
    /* 0061fd1a: mov eax, edi */ r_eax = r_edi;
    /* 0061fd1c: add eax, dword ptr [esi + 0xc8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+0xc8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061fd22: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 0061fd25: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061fd26: call 0x816eec */ r_esp -= 4; W32(r_esp, 0x61fd2bu); f_00816eec();
    /* 0061fd2b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061fd2c: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0061fd2f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061fd31: jne 0x61fd38 */ if (!fZ) goto L_0061fd38;
L_0061fd33:; BB(0x0061fd33);
    /* 0061fd33: mov ebx, 1 */ r_ebx = 0x1u;
L_0061fd38:; BB(0x0061fd38);
    /* 0061fd38: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0061fd3b: cmp edi, dword ptr [esi + 0x88] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esi+0x88u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061fd41: jl 0x61fd1a */ if ((fS!=fO)) goto L_0061fd1a;
L_0061fd43:; BB(0x0061fd43);
    /* 0061fd43: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 0061fd47: mov eax, ebx */ r_eax = r_ebx;
    /* 0061fd49: mov ebx, esi */ r_ebx = r_esi;
    /* 0061fd4b: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 0061fd4f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061fd51: je 0x61fd67 */ if (fZ) goto L_0061fd67;
L_0061fd53:; BB(0x0061fd53);
    /* 0061fd53: mov eax, dword ptr [ebx + 0xd0] */ r_eax = R32((u32)(r_ebx+0xd0u));
    /* 0061fd59: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0061fd5c: mov dword ptr [ebx + 0xd0], eax */ W32((u32)(r_ebx+0xd0u), r_eax);
    /* 0061fd62: jmp 0x61fe87 */ goto L_0061fe87;
L_0061fd67:; BB(0x0061fd67);
    /* 0061fd67: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0061fd69: call 0x619c10 */ r_esp -= 4; W32(r_esp, 0x61fd6eu); f_00619c10();
    /* 0061fd6e: mov eax, dword ptr [ebx + 0xd0] */ r_eax = R32((u32)(r_ebx+0xd0u));
    /* 0061fd74: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0061fd77: mov dword ptr [ebx + 0xd0], eax */ W32((u32)(r_ebx+0xd0u), r_eax);
    /* 0061fd7d: jmp 0x61fe87 */ goto L_0061fe87;
L_0061fd82:; BB(0x0061fd82);
    /* 0061fd82: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061fd85: jne 0x61fe60 */ if (!fZ) goto L_0061fe60;
L_0061fd8b:; BB(0x0061fd8b);
    /* 0061fd8b: mov eax, dword ptr [ebx + 0xd0] */ r_eax = R32((u32)(r_ebx+0xd0u));
    /* 0061fd91: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0061fd93: jne 0x61fe87 */ if (!fZ) goto L_0061fe87;
L_0061fd99:; BB(0x0061fd99);
    /* 0061fd99: mov ecx, dword ptr [ebx + 0x88] */ r_ecx = R32((u32)(r_ebx+0x88u));
    /* 0061fd9f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0061fda1: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0061fda3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0061fda5: jle 0x61fe02 */ if ((fZ||fS!=fO)) goto L_0061fe02;
L_0061fda7:; BB(0x0061fda7);
    /* 0061fda7: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 0061fdab: mov esi, ebx */ r_esi = r_ebx;
    /* 0061fdad: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 0061fdb1: mov ebx, eax */ r_ebx = r_eax;
    /* 0061fdb3: mov edi, edx */ r_edi = r_edx;
L_0061fdb5:; BB(0x0061fdb5);
    /* 0061fdb5: mov eax, edi */ r_eax = r_edi;
    /* 0061fdb7: add eax, dword ptr [esi + 0xc8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+0xc8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061fdbd: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 0061fdc0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061fdc1: call 0x816eec */ r_esp -= 4; W32(r_esp, 0x61fdc6u); f_00816eec();
    /* 0061fdc6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061fdc7: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0061fdca: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061fdcc: jne 0x61fdd3 */ if (!fZ) goto L_0061fdd3;
L_0061fdce:; BB(0x0061fdce);
    /* 0061fdce: mov ebx, 1 */ r_ebx = 0x1u;
L_0061fdd3:; BB(0x0061fdd3);
    /* 0061fdd3: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0061fdd6: cmp edi, dword ptr [esi + 0x88] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esi+0x88u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061fddc: jl 0x61fdb5 */ if ((fS!=fO)) goto L_0061fdb5;
L_0061fdde:; BB(0x0061fdde);
    /* 0061fdde: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 0061fde2: mov eax, ebx */ r_eax = r_ebx;
    /* 0061fde4: mov ebx, esi */ r_ebx = r_esi;
    /* 0061fde6: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 0061fdea: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061fdec: je 0x61fe02 */ if (fZ) goto L_0061fe02;
L_0061fdee:; BB(0x0061fdee);
    /* 0061fdee: mov eax, dword ptr [ebx + 0xd0] */ r_eax = R32((u32)(r_ebx+0xd0u));
    /* 0061fdf4: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0061fdf7: mov dword ptr [ebx + 0xd0], eax */ W32((u32)(r_ebx+0xd0u), r_eax);
    /* 0061fdfd: jmp 0x61fe87 */ goto L_0061fe87;
L_0061fe02:; BB(0x0061fe02);
    /* 0061fe02: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0061fe04: call 0x619c10 */ r_esp -= 4; W32(r_esp, 0x61fe09u); f_00619c10();
    /* 0061fe09: mov eax, dword ptr [ebx + 0xd0] */ r_eax = R32((u32)(r_ebx+0xd0u));
    /* 0061fe0f: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0061fe12: mov dword ptr [ebx + 0xd0], eax */ W32((u32)(r_ebx+0xd0u), r_eax);
    /* 0061fe18: mov eax, dword ptr [ebx + 0x80] */ r_eax = R32((u32)(r_ebx+0x80u));
    /* 0061fe1e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061fe20: je 0x61fe87 */ if (fZ) goto L_0061fe87;
L_0061fe22:; BB(0x0061fe22);
    /* 0061fe22: je 0x61fed4 */ if (fZ) goto L_0061fed4;
L_0061fe28:; BB(0x0061fe28);
    /* 0061fe28: movsx ecx, word ptr [eax + 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x4u));
    /* 0061fe2c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0061fe2e: jl 0x61fe57 */ if ((fS!=fO)) goto L_0061fe57;
L_0061fe30:; BB(0x0061fe30);
    /* 0061fe30: cmp ecx, 0xb9f */ {  u32 a = r_ecx; u32 b = 0xb9fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061fe36: jg 0x61fe57 */ if ((!fZ&&fS==fO)) goto L_0061fe57;
L_0061fe38:; BB(0x0061fe38);
    /* 0061fe38: mov edx, dword ptr [0xab02bc] */ r_edx = R32((u32)(0xab02bcu));
    /* 0061fe3e: movzx eax, word ptr [edx + ecx*4] */ r_eax = (u32)R16((u32)(r_edx+r_ecx*4));
    /* 0061fe42: mov word ptr [esp], ax */ W16((u32)(r_esp), (u16)r_eax);
    /* 0061fe46: movzx eax, word ptr [edx + ecx*4 + 2] */ r_eax = (u32)R16((u32)(r_edx+r_ecx*4+0x2u));
    /* 0061fe4b: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 0061fe50: mov eax, 1 */ r_eax = 0x1u;
    /* 0061fe55: jmp 0x61fe59 */ goto L_0061fe59;
L_0061fe57:; BB(0x0061fe57);
    /* 0061fe57: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0061fe59:; BB(0x0061fe59);
    /* 0061fe59: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061fe5c: jne 0x61fe87 */ if (!fZ) goto L_0061fe87;
L_0061fe5e:; BB(0x0061fe5e);
    /* 0061fe5e: jmp 0x61fe8c */ goto L_0061fe8c;
L_0061fe60:; BB(0x0061fe60);
    /* 0061fe60: mov eax, dword ptr [ebx + 0xd0] */ r_eax = R32((u32)(r_ebx+0xd0u));
    /* 0061fe66: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0061fe69: mov dword ptr [ebx + 0xd0], eax */ W32((u32)(r_ebx+0xd0u), r_eax);
    /* 0061fe6f: jmp 0x61fe87 */ goto L_0061fe87;
L_0061fe71:; BB(0x0061fe71);
    /* 0061fe71: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0061fe73: call 0x619c10 */ r_esp -= 4; W32(r_esp, 0x61fe78u); f_00619c10();
    /* 0061fe78: mov eax, dword ptr [ebx + 0xd0] */ r_eax = R32((u32)(r_ebx+0xd0u));
    /* 0061fe7e: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0061fe81: mov dword ptr [ebx + 0xd0], eax */ W32((u32)(r_ebx+0xd0u), r_eax);
L_0061fe87:; BB(0x0061fe87);
    /* 0061fe87: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0061fe8a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0061fe8b: ret  */ FN_RET(0x0061fce0); r_esp += 4; return;
L_0061fe8c:; BB(0x0061fe8c);
    /* 0061fe8c: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0061fe8f: mov eax, 1 */ r_eax = 0x1u;
    /* 0061fe94: mov word ptr [esp], ax */ W16((u32)(r_esp), (u16)r_eax);
    /* 0061fe98: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061fe99: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0061fe9b: call 0x7b5038 */ r_esp -= 4; W32(r_esp, 0x61fea0u); f_007b5038();
    /* 0061fea0: mov eax, dword ptr [ebx + 0x80] */ r_eax = R32((u32)(r_ebx+0x80u));
    /* 0061fea6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061fea8: je 0x61fe87 */ if (fZ) goto L_0061fe87;
L_0061feaa:; BB(0x0061feaa);
    /* 0061feaa: movsx ebx, word ptr [eax + 4] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_eax+0x4u));
    /* 0061feae: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0061feb0: jl 0x61fe87 */ if ((fS!=fO)) goto L_0061fe87;
L_0061feb2:; BB(0x0061feb2);
    /* 0061feb2: cmp ebx, 0xb9f */ {  u32 a = r_ebx; u32 b = 0xb9fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061feb8: jg 0x61fe87 */ if ((!fZ&&fS==fO)) goto L_0061fe87;
L_0061feba:; BB(0x0061feba);
    /* 0061feba: mov ecx, dword ptr [0xab02bc] */ r_ecx = R32((u32)(0xab02bcu));
    /* 0061fec0: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0061fec4: mov word ptr [ecx + ebx*4], ax */ W16((u32)(r_ecx+r_ebx*4), (u16)r_eax);
    /* 0061fec8: movzx edx, word ptr [esp + 2] */ r_edx = (u32)R16((u32)(r_esp+0x2u));
    /* 0061fecd: mov word ptr [ecx + ebx*4 + 2], dx */ W16((u32)(r_ecx+r_ebx*4+0x2u), (u16)r_edx);
    /* 0061fed2: jmp 0x61fe87 */ goto L_0061fe87;
L_0061fed4:; BB(0x0061fed4);
    /* 0061fed4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0061fed6: jmp 0x61fe59 */ goto L_0061fe59;
}

void f_0061fed8(void) /* sub_61FED8 */
{
    FN_ENTER(0x0061fed8);
    /* 0061fed8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061fed9: mov ebp, esp */ r_ebp = r_esp;
    /* 0061fedb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0061fedd: push 0x8e2144 */ { u32 v = 0x8e2144u; r_esp -= 4; W32(r_esp, v); }
    /* 0061fee2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0061fee8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061fee9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0061fef0: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061fef3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0061fef6: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0061fef9: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0061fefc: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0061feff: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0061ff02: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061ff05: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0061ff08: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0061ff0b: call 0x619df0 */ r_esp -= 4; W32(r_esp, 0x61ff10u); f_00619df0();
    /* 0061ff10: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0061ff17: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0061ff1a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0061ff1d: mov dword ptr [ecx], 0xb27a80 */ W32((u32)(r_ecx), 0xb27a80u);
    /* 0061ff23: mov eax, dword ptr [0x9c5454] */ r_eax = R32((u32)(0x9c5454u));
    /* 0061ff28: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061ff29: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0061ff2c: call dword ptr [0xb27a94] */ { u32 t = R32((u32)(0xb27a94u)); r_esp -= 4; W32(r_esp, 0x61ff32u); call_ind(t); }
    /* 0061ff32: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0061ff35: call 0x620074 */ r_esp -= 4; W32(r_esp, 0x61ff3au); f_00620074();
    /* 0061ff3a: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0061ff3d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0061ff3f: push 0x9c5458 */ { u32 v = 0x9c5458u; r_esp -= 4; W32(r_esp, v); }
    /* 0061ff44: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x61ff49u); f_007b9a88();
    /* 0061ff49: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0061ff4c: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x61ff51u); f_007b999c();
    /* 0061ff51: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061ff52: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0061ff55: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x61ff5au); f_007b4f54();
    /* 0061ff5a: mov ecx, dword ptr [0xa8ec54] */ r_ecx = R32((u32)(0xa8ec54u));
    /* 0061ff60: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061ff62: je 0x62006a */ if (fZ) goto L_0062006a;
L_0061ff68:; BB(0x0061ff68);
    /* 0061ff68: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061ff6a: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x61ff6fu); f_005b8610();
    /* 0061ff6f: mov edx, eax */ r_edx = r_eax;
    /* 0061ff71: mov ecx, dword ptr [0xa8ec54] */ r_ecx = R32((u32)(0xa8ec54u));
L_0061ff77:; BB(0x0061ff77);
    /* 0061ff77: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0061ff7a: mov dword ptr [eax + 0xd4], edx */ W32((u32)(r_eax+0xd4u), r_edx);
    /* 0061ff80: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061ff82: je 0x620063 */ if (fZ) goto L_00620063;
L_0061ff88:; BB(0x0061ff88);
    /* 0061ff88: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061ff8a: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x61ff8fu); f_005b8624();
    /* 0061ff8f: mov edx, eax */ r_edx = r_eax;
    /* 0061ff91: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0061ff94: mov ecx, dword ptr [0xa8ec54] */ r_ecx = R32((u32)(0xa8ec54u));
L_0061ff9a:; BB(0x0061ff9a);
    /* 0061ff9a: mov dword ptr [eax + 0x24], edx */ W32((u32)(r_eax+0x24u), r_edx);
    /* 0061ff9d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061ff9f: je 0x62005c */ if (fZ) goto L_0062005c;
L_0061ffa5:; BB(0x0061ffa5);
    /* 0061ffa5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061ffa7: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x61ffacu); f_005b8638();
    /* 0061ffac: mov ecx, eax */ r_ecx = r_eax;
    /* 0061ffae: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
L_0061ffb1:; BB(0x0061ffb1);
    /* 0061ffb1: mov dword ptr [eax + 0xbc], ecx */ W32((u32)(r_eax+0xbcu), r_ecx);
    /* 0061ffb7: fild dword ptr [ecx + 4] */ FPUSH((long double)(i32)R32((u32)(r_ecx+0x4u)));
    /* 0061ffba: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0061ffbd: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0061ffc0: fadd dword ptr [edx*4 + 0x931108] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x931108u));
    /* 0061ffc7: fadd dword ptr [0x93111c] */ ST(0) = ST(0) + R_F32((u32)(0x93111cu));
    /* 0061ffcd: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0061ffcf: fstp dword ptr [eax + 0xb4] */ W_F32((u32)(r_eax+0xb4u), ST(0)); FPOP();
    /* 0061ffd5: mov dword ptr [eax + 0xb8], 0x3f000000 */ W32((u32)(r_eax+0xb8u), 0x3f000000u);
    /* 0061ffdf: mov dword ptr [ebp - 0x44], 4 */ W32((u32)(r_ebp+0xffffffbcu), 0x4u);
    /* 0061ffe6: mov dword ptr [ebp - 0x40], 6 */ W32((u32)(r_ebp+0xffffffc0u), 0x6u);
    /* 0061ffed: mov dword ptr [ebp - 0x3c], 8 */ W32((u32)(r_ebp+0xffffffc4u), 0x8u);
    /* 0061fff4: mov dword ptr [ebp - 0x38], 0xa */ W32((u32)(r_ebp+0xffffffc8u), 0xau);
    /* 0061fffb: mov dword ptr [ebp - 0x34], 5 */ W32((u32)(r_ebp+0xffffffccu), 0x5u);
    /* 00620002: mov dword ptr [ebp - 0x30], 7 */ W32((u32)(r_ebp+0xffffffd0u), 0x7u);
    /* 00620009: mov dword ptr [ebp - 0x2c], 9 */ W32((u32)(r_ebp+0xffffffd4u), 0x9u);
    /* 00620010: mov dword ptr [ebp - 0x28], 0xb */ W32((u32)(r_ebp+0xffffffd8u), 0xbu);
L_00620017:; BB(0x00620017);
    /* 00620017: lea ebx, [esi + esi] */ r_ebx = (u32)(r_esi+r_esi);
    /* 0062001a: lea edx, [ebx + ebx] */ r_edx = (u32)(r_ebx+r_ebx);
    /* 0062001d: push dword ptr [ebp + edx - 0x44] */ { u32 v = R32((u32)(r_ebp+r_edx+0xffffffbcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00620021: push dword ptr [eax + 0xd4] */ { u32 v = R32((u32)(r_eax+0xd4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00620027: call 0x78e9b0 */ r_esp -= 4; W32(r_esp, 0x62002cu); f_0078e9b0();
    /* 0062002c: mov edx, eax */ r_edx = r_eax;
    /* 0062002e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00620031: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00620034: mov dword ptr [eax + ebx*2 + 0xd8], edx */ W32((u32)(r_eax+r_ebx*2+0xd8u), r_edx);
    /* 0062003b: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0062003e: cmp esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00620041: jl 0x620017 */ if ((fS!=fO)) goto L_00620017;
L_00620043:; BB(0x00620043);
    /* 00620043: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00620046: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00620049: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0062004c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062004f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00620056: mov esp, ebp */ r_esp = r_ebp;
    /* 00620058: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00620059: ret 8 */ FN_RET(0x0061fed8); r_esp += 12; return;
L_0062005c:; BB(0x0062005c);
    /* 0062005c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0062005e: jmp 0x61ffb1 */ goto L_0061ffb1;
L_00620063:; BB(0x00620063);
    /* 00620063: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00620065: jmp 0x61ff9a */ goto L_0061ff9a;
L_0062006a:; BB(0x0062006a);
    /* 0062006a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0062006c: jmp 0x61ff77 */ goto L_0061ff77;
}

void f_0061ffff(void)
{
    FN_ENTER(0x0061ffff);
    /* 0061ffff: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00620001: add bh, al */ {  u32 a = (u8)(r_ebx>>8); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 00620003: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00620004: rol byte ptr [edi], 1 */ { u32 ad = (u32)(r_edi); u32 c = (1u) & 31; u32 a = R8(ad); u32 r = a; if (c) { { u32 k = c % 8; r = k ? (((a << k) | (a >> (8 - k))) & 0xffu) : a; } W8(ad, r);  } }
    /* 00620006: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00620008: add bh, al */ {  u32 a = (u8)(r_ebx>>8); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 0062000a: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0062000b: aam 9 */ UNSUP(0x0062000b, "aam 9");
    /* 0062000d: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0062000f: add bh, al */ {  u32 a = (u8)(r_ebx>>8); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 00620011: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00620012: fmul dword ptr [ebx] */ ST(0) = ST(0) * R_F32((u32)(r_ebx));
    /* 00620014: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00620016: add byte ptr [ebp + 0x148d361c], cl */ { u32 ad = (u32)(r_ebp+0x148d361cu);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r); fC = (r < a); }
L_00620017:; BB(0x00620017);
    /* 00620017: lea ebx, [esi + esi] */ r_ebx = (u32)(r_esi+r_esi);
    /* 0062001a: lea edx, [ebx + ebx] */ r_edx = (u32)(r_ebx+r_ebx);
    /* 0062001c: sbb edi, edi */ { u32 c = fC; u32 a = r_edi; u32 b = r_edi; u32 r = (a - b - c) & 0xffffffffu; r_edi = r; fZ = (r == 0); }
    /* 0062001d: push dword ptr [ebp + edx - 0x44] */ { u32 v = R32((u32)(r_ebp+r_edx+0xffffffbcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0062001e: je 0x620035 */ if (fZ) goto L_00620035;
L_00620020:; BB(0x00620020);
    /* 00620020: mov esp, 0xd4b0ff */ r_esp = 0xd4b0ffu;
    /* 00620021: push dword ptr [eax + 0xd4] */ { u32 v = R32((u32)(r_eax+0xd4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00620025: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00620027: call 0x78e9b0 */ r_esp -= 4; W32(r_esp, 0x62002cu); f_0078e9b0();
    /* 0062002c: mov edx, eax */ r_edx = r_eax;
    /* 0062002e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00620031: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00620034: mov dword ptr [eax + ebx*2 + 0xd8], edx */ W32((u32)(r_eax+r_ebx*2+0xd8u), r_edx);
L_00620035:; BB(0x00620035);
    /* 00620035: xchg esp, eax */ { u32 x = r_esp; u32 y = r_eax; r_esp = y; r_eax = x; }
    /* 00620036: pop eax */ { u32 v = R32(r_esp); r_esp += 4; r_eax = v; }
    /* 00620037: fadd dword ptr [eax] */ ST(0) = ST(0) + R_F32((u32)(r_eax));
    /* 00620039: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0062003b: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0062003e: cmp esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00620041: jl 0x620017 */ if ((fS!=fO)) goto L_00620017;
L_00620043:; BB(0x00620043);
    /* 00620043: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00620046: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00620049: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0062004c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062004f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00620056: mov esp, ebp */ r_esp = r_ebp;
    /* 00620058: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00620059: ret 8 */ FN_RET(0x0061ffff); r_esp += 12; return;
}

