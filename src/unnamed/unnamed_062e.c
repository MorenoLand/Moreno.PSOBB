#include "protos.h"

void f_0062e014(void) /* sub_62E014 */
{
    FN_ENTER(0x0062e014);
    /* 0062e014: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0062e015: mov edi, ecx */ r_edi = r_ecx;
    /* 0062e017: movsx eax, word ptr [edi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32eu));
    /* 0062e01e: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0062e021: je 0x62e025 */ if (fZ) goto L_0062e025;
L_0062e023:; BB(0x0062e023);
    /* 0062e023: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062e024: ret  */ FN_RET(0x0062e014); r_esp += 4; return;
L_0062e025:; BB(0x0062e025);
    /* 0062e025: push 0x41a00000 */ { u32 v = 0x41a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0062e02a: mov ecx, edi */ r_ecx = r_edi;
    /* 0062e02c: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0062e02e: push 0x43c80000 */ { u32 v = 0x43c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0062e033: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x62e036u); call_ind(t); }
    /* 0062e036: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0062e038: je 0x62e023 */ if (fZ) goto L_0062e023;
L_0062e03a:; BB(0x0062e03a);
    /* 0062e03a: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x62e03fu); f_0082d7b0();
    /* 0062e03f: lea ecx, [edi + 0x38] */ r_ecx = (u32)(r_edi+0x38u);
    /* 0062e042: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x62e047u); f_0082d838();
    /* 0062e047: mov edx, dword ptr [edi + 0x378] */ r_edx = R32((u32)(r_edi+0x378u));
    /* 0062e04d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0062e04f: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x62e054u); f_0082d8bc();
    /* 0062e054: mov ecx, edi */ r_ecx = r_edi;
    /* 0062e056: call 0x62e0a8 */ r_esp -= 4; W32(r_esp, 0x62e05bu); f_0062e0a8();
    /* 0062e05b: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x62e060u); f_0082dbac();
    /* 0062e060: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 0062e065: mov dword ptr [0xaab518], eax */ W32((u32)(0xaab518u), r_eax);
    /* 0062e06a: or eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0062e06d: lea edx, [edi + 0x368] */ r_edx = (u32)(r_edi+0x368u);
    /* 0062e073: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 0062e078: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062e079: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x62e07eu); f_0082d710();
    /* 0062e07e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062e07f: mov ecx, edi */ r_ecx = r_edi;
    /* 0062e081: call 0x62e0c0 */ r_esp -= 4; W32(r_esp, 0x62e086u); f_0062e0c0();
    /* 0062e086: push 0x9ff9b0 */ { u32 v = 0x9ff9b0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062e08b: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x62e090u); f_0082d710();
    /* 0062e090: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062e091: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
    /* 0062e096: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 0062e09b: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x62e0a0u); f_0082dab0();
    /* 0062e0a0: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x62e0a5u); f_0082da80();
    /* 0062e0a5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062e0a6: ret  */ FN_RET(0x0062e014); r_esp += 4; return;
}

void f_0062e0a8(void) /* sub_62E0A8 */
{
    FN_ENTER(0x0062e0a8);
    /* 0062e0a8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062e0a9: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0062e0ab: mov ecx, dword ptr [ebp + 0x24] */ r_ecx = R32((u32)(r_ebp+0x24u));
    /* 0062e0ae: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x62e0b3u); f_00829cc8();
    /* 0062e0b3: mov ecx, dword ptr [ebp + 0x34] */ r_ecx = R32((u32)(r_ebp+0x34u));
    /* 0062e0b6: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x62e0bbu); f_00831758();
    /* 0062e0bb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062e0bc: ret  */ FN_RET(0x0062e0a8); r_esp += 4; return;
}

void f_0062e0c0(void) /* sub_62E0C0 */
{
    FN_ENTER(0x0062e0c0);
    /* 0062e0c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062e0c1: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0062e0c3: mov ecx, dword ptr [ebp + 0x380] */ r_ecx = R32((u32)(r_ebp+0x380u));
    /* 0062e0c9: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x62e0ceu); f_00829cc8();
    /* 0062e0ce: mov ecx, dword ptr [ebp + 0x37c] */ r_ecx = R32((u32)(r_ebp+0x37cu));
    /* 0062e0d4: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x62e0d9u); f_00831758();
    /* 0062e0d9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062e0da: ret  */ FN_RET(0x0062e0c0); r_esp += 4; return;
}

void f_0062e0dc(void) /* sub_62E0DC */
{
    FN_ENTER(0x0062e0dc);
    /* 0062e0dc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0062e0dd: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062e0e0: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0062e0e2: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x62e0e7u); f_004f7c84();
    /* 0062e0e7: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062e0ea: je 0x62e34d */ if (fZ) goto L_0062e34d;
L_0062e0f0:; BB(0x0062e0f0);
    /* 0062e0f0: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0062e0f2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0062e0f4: call dword ptr [eax + 0x144] */ { u32 t = R32((u32)(r_eax+0x144u)); r_esp -= 4; W32(r_esp, 0x62e0fau); call_ind(t); }
    /* 0062e0fa: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0062e0fc: call 0x62e404 */ r_esp -= 4; W32(r_esp, 0x62e101u); f_0062e404();
    /* 0062e101: movsx eax, word ptr [ebx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32eu));
    /* 0062e108: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062e10a: je 0x62e307 */ if (fZ) goto L_0062e307;
L_0062e110:; BB(0x0062e110);
    /* 0062e110: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062e113: je 0x62e307 */ if (fZ) goto L_0062e307;
L_0062e119:; BB(0x0062e119);
    /* 0062e119: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062e11c: jne 0x62e238 */ if (!fZ) goto L_0062e238;
L_0062e122:; BB(0x0062e122);
    /* 0062e122: mov edx, dword ptr [ebx + 0x8c] */ r_edx = R32((u32)(r_ebx+0x8cu));
    /* 0062e128: lea eax, [edx - 1] */ r_eax = (u32)(r_edx+0xffffffffu);
    /* 0062e12b: mov dword ptr [ebx + 0x8c], eax */ W32((u32)(r_ebx+0x8cu), r_eax);
    /* 0062e131: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0062e133: jge 0x62e141 */ if ((fS==fO)) goto L_0062e141;
L_0062e135:; BB(0x0062e135);
    /* 0062e135: mov eax, 4 */ r_eax = 0x4u;
    /* 0062e13a: mov word ptr [ebx + 0x32e], ax */ W16((u32)(r_ebx+0x32eu), (u16)r_eax);
L_0062e141:; BB(0x0062e141);
    /* 0062e141: mov eax, dword ptr [ebx + 0x34c] */ r_eax = R32((u32)(r_ebx+0x34cu));
    /* 0062e147: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062e14a: jne 0x62e213 */ if (!fZ) goto L_0062e213;
L_0062e150:; BB(0x0062e150);
    /* 0062e150: movsx eax, word ptr [ebx + 0x330] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x330u));
    /* 0062e157: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062e159: jne 0x62e20a */ if (!fZ) goto L_0062e20a;
L_0062e15f:; BB(0x0062e15f);
    /* 0062e15f: mov edx, dword ptr [0xaae164] */ r_edx = R32((u32)(0xaae164u));
    /* 0062e165: mov eax, 1 */ r_eax = 0x1u;
    /* 0062e16a: mov word ptr [ebx + 0x330], ax */ W16((u32)(r_ebx+0x330u), (u16)r_eax);
    /* 0062e171: mov eax, dword ptr [0xaae16c] */ r_eax = R32((u32)(0xaae16cu));
    /* 0062e176: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062e178: jge 0x62e20a */ if ((fS==fO)) goto L_0062e20a;
L_0062e17e:; BB(0x0062e17e);
    /* 0062e17e: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 0062e182: mov esi, edx */ r_esi = r_edx;
    /* 0062e184: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
L_0062e187:; BB(0x0062e187);
    /* 0062e187: mov ecx, dword ptr [esi*4 + 0xaad720] */ r_ecx = R32((u32)(r_esi*4+0xaad720u));
    /* 0062e18e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062e190: je 0x62e1fc */ if (fZ) goto L_0062e1fc;
L_0062e192:; BB(0x0062e192);
    /* 0062e192: cmp ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062e194: je 0x62e1fc */ if (fZ) goto L_0062e1fc;
L_0062e196:; BB(0x0062e196);
    /* 0062e196: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0062e199: cmp edx, dword ptr [0x9c6098] */ {  u32 a = r_edx; u32 b = R32((u32)(0x9c6098u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062e19f: jne 0x62e1a8 */ if (!fZ) goto L_0062e1a8;
L_0062e1a1:; BB(0x0062e1a1);
    /* 0062e1a1: mov edi, 1 */ r_edi = 0x1u;
    /* 0062e1a6: jmp 0x62e1aa */ goto L_0062e1aa;
L_0062e1a8:; BB(0x0062e1a8);
    /* 0062e1a8: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_0062e1aa:; BB(0x0062e1aa);
    /* 0062e1aa: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062e1ac: jne 0x62e1ed */ if (!fZ) goto L_0062e1ed;
L_0062e1ae:; BB(0x0062e1ae);
    /* 0062e1ae: cmp edx, dword ptr [0x9c609c] */ {  u32 a = r_edx; u32 b = R32((u32)(0x9c609cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062e1b4: jne 0x62e1bd */ if (!fZ) goto L_0062e1bd;
L_0062e1b6:; BB(0x0062e1b6);
    /* 0062e1b6: mov edi, 1 */ r_edi = 0x1u;
    /* 0062e1bb: jmp 0x62e1bf */ goto L_0062e1bf;
L_0062e1bd:; BB(0x0062e1bd);
    /* 0062e1bd: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_0062e1bf:; BB(0x0062e1bf);
    /* 0062e1bf: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062e1c1: jne 0x62e1ed */ if (!fZ) goto L_0062e1ed;
L_0062e1c3:; BB(0x0062e1c3);
    /* 0062e1c3: cmp edx, dword ptr [0x9c60a0] */ {  u32 a = r_edx; u32 b = R32((u32)(0x9c60a0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062e1c9: jne 0x62e1d2 */ if (!fZ) goto L_0062e1d2;
L_0062e1cb:; BB(0x0062e1cb);
    /* 0062e1cb: mov edi, 1 */ r_edi = 0x1u;
    /* 0062e1d0: jmp 0x62e1d4 */ goto L_0062e1d4;
L_0062e1d2:; BB(0x0062e1d2);
    /* 0062e1d2: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_0062e1d4:; BB(0x0062e1d4);
    /* 0062e1d4: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062e1d6: jne 0x62e1ed */ if (!fZ) goto L_0062e1ed;
L_0062e1d8:; BB(0x0062e1d8);
    /* 0062e1d8: cmp edx, dword ptr [0x9c60a4] */ {  u32 a = r_edx; u32 b = R32((u32)(0x9c60a4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062e1de: jne 0x62e1e7 */ if (!fZ) goto L_0062e1e7;
L_0062e1e0:; BB(0x0062e1e0);
    /* 0062e1e0: mov edi, 1 */ r_edi = 0x1u;
    /* 0062e1e5: jmp 0x62e1e9 */ goto L_0062e1e9;
L_0062e1e7:; BB(0x0062e1e7);
    /* 0062e1e7: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_0062e1e9:; BB(0x0062e1e9);
    /* 0062e1e9: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062e1eb: je 0x62e1fc */ if (fZ) goto L_0062e1fc;
L_0062e1ed:; BB(0x0062e1ed);
    /* 0062e1ed: mov edi, dword ptr [ecx + 0x34c] */ r_edi = R32((u32)(r_ecx+0x34cu));
    /* 0062e1f3: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062e1f6: je 0x62e352 */ if (fZ) goto L_0062e352;
L_0062e1fc:; BB(0x0062e1fc);
    /* 0062e1fc: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0062e1ff: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062e201: jl 0x62e187 */ if ((fS!=fO)) goto L_0062e187;
L_0062e203:; BB(0x0062e203);
    /* 0062e203: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 0062e207: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
L_0062e20a:; BB(0x0062e20a);
    /* 0062e20a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0062e20c: call 0x62e3e0 */ r_esp -= 4; W32(r_esp, 0x62e211u); f_0062e3e0();
    /* 0062e211: jmp 0x62e228 */ goto L_0062e228;
L_0062e213:; BB(0x0062e213);
    /* 0062e213: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062e216: jne 0x62e221 */ if (!fZ) goto L_0062e221;
L_0062e218:; BB(0x0062e218);
    /* 0062e218: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0062e21a: call 0x62e478 */ r_esp -= 4; W32(r_esp, 0x62e21fu); f_0062e478();
    /* 0062e21f: jmp 0x62e228 */ goto L_0062e228;
L_0062e221:; BB(0x0062e221);
    /* 0062e221: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0062e223: call 0x62e3e0 */ r_esp -= 4; W32(r_esp, 0x62e228u); f_0062e3e0();
L_0062e228:; BB(0x0062e228);
    /* 0062e228: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0062e22a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0062e22b: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x62e230u); f_006946a8();
    /* 0062e230: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062e233: jmp 0x62e34d */ goto L_0062e34d;
L_0062e238:; BB(0x0062e238);
    /* 0062e238: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062e23b: jne 0x62e34d */ if (!fZ) goto L_0062e34d;
L_0062e241:; BB(0x0062e241);
    /* 0062e241: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0062e243: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062e245: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0062e247: call 0x7b52c4 */ r_esp -= 4; W32(r_esp, 0x62e24cu); f_007b52c4();
    /* 0062e24c: mov edx, dword ptr [ebx + 0xa4] */ r_edx = R32((u32)(r_ebx+0xa4u));
    /* 0062e252: mov eax, dword ptr [ebx + 0x358] */ r_eax = R32((u32)(r_ebx+0x358u));
    /* 0062e258: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 0062e25b: call 0x7b51c4 */ r_esp -= 4; W32(r_esp, 0x62e260u); f_007b51c4();
    /* 0062e260: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0062e262: call 0x7b6894 */ r_esp -= 4; W32(r_esp, 0x62e267u); f_007b6894();
    /* 0062e267: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0062e269: call 0x7b798c */ r_esp -= 4; W32(r_esp, 0x62e26eu); f_007b798c();
    /* 0062e26e: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 0062e272: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 0062e275: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062e277: mov esi, eax */ r_esi = r_eax;
L_0062e279:; BB(0x0062e279);
    /* 0062e279: mov edi, dword ptr [esi + 0xaad6e0] */ r_edi = R32((u32)(r_esi+0xaad6e0u));
    /* 0062e27f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0062e280: call 0x6ea71c */ r_esp -= 4; W32(r_esp, 0x62e285u); f_006ea71c();
    /* 0062e285: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062e286: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062e288: je 0x62e2cf */ if (fZ) goto L_0062e2cf;
L_0062e28a:; BB(0x0062e28a);
    /* 0062e28a: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0062e28c: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0062e291: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062e292: mov ecx, edi */ r_ecx = r_edi;
    /* 0062e294: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062e295: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062e297: push dword ptr [ebx + 0x360] */ { u32 v = R32((u32)(r_ebx+0x360u)); r_esp -= 4; W32(r_esp, v); }
    /* 0062e29d: push dword ptr [ebx + 0x35c] */ { u32 v = R32((u32)(r_ebx+0x35cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0062e2a3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0062e2a4: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x62e2a7u); call_ind(t); }
    /* 0062e2a7: mov edx, dword ptr [ebx + 0x35c] */ r_edx = R32((u32)(r_ebx+0x35cu));
    /* 0062e2ad: cmp edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062e2b0: jl 0x62e2b6 */ if ((fS!=fO)) goto L_0062e2b6;
L_0062e2b2:; BB(0x0062e2b2);
    /* 0062e2b2: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0062e2b4: jmp 0x62e2cf */ goto L_0062e2cf;
L_0062e2b6:; BB(0x0062e2b6);
    /* 0062e2b6: fld dword ptr [0x932bf4] */ FPUSH(R_F32((u32)(0x932bf4u)));
    /* 0062e2bc: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0062e2be: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 0062e2c0: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062e2c3: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0062e2c7: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 0062e2ca: mov ecx, edi */ r_ecx = r_edi;
    /* 0062e2cc: call dword ptr [edx + 0x68] */ { u32 t = R32((u32)(r_edx+0x68u)); r_esp -= 4; W32(r_esp, 0x62e2cfu); call_ind(t); }
L_0062e2cf:; BB(0x0062e2cf);
    /* 0062e2cf: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0062e2d2: cmp esi, 0x40 */ {  u32 a = r_esi; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062e2d5: jl 0x62e279 */ if ((fS!=fO)) goto L_0062e279;
L_0062e2d7:; BB(0x0062e2d7);
    /* 0062e2d7: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 0062e2db: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 0062e2de: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0062e2e0: mov eax, 6 */ r_eax = 0x6u;
    /* 0062e2e5: mov word ptr [ebx + 0x32e], ax */ W16((u32)(r_ebx+0x32eu), (u16)r_eax);
    /* 0062e2ec: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062e2ee: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0062e2f0: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x62e2f5u); f_007b52ec();
    /* 0062e2f5: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0062e2fa: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062e2fc: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0062e2fe: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0062e300: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x62e303u); call_ind(t); }
    /* 0062e303: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0062e305: jmp 0x62e34d */ goto L_0062e34d;
L_0062e307:; BB(0x0062e307);
    /* 0062e307: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0062e309: call 0x62e590 */ r_esp -= 4; W32(r_esp, 0x62e30eu); f_0062e590();
    /* 0062e30e: mov edx, dword ptr [ebx + 0x33c] */ r_edx = R32((u32)(r_ebx+0x33cu));
    /* 0062e314: mov eax, dword ptr [ebx + 0x340] */ r_eax = R32((u32)(r_ebx+0x340u));
    /* 0062e31a: mov dword ptr [ebx + 0x300], edx */ W32((u32)(r_ebx+0x300u), r_edx);
    /* 0062e320: mov dword ptr [ebx + 0x304], eax */ W32((u32)(r_ebx+0x304u), r_eax);
    /* 0062e326: mov eax, dword ptr [ebx + 0x344] */ r_eax = R32((u32)(r_ebx+0x344u));
    /* 0062e32c: mov dword ptr [ebx + 0x308], eax */ W32((u32)(r_ebx+0x308u), r_eax);
    /* 0062e332: mov eax, dword ptr [ebx + 0xa4] */ r_eax = R32((u32)(r_ebx+0xa4u));
    /* 0062e338: mov dword ptr [eax + 0x1c], edx */ W32((u32)(r_eax+0x1cu), r_edx);
    /* 0062e33b: mov edx, dword ptr [ebx + 0x340] */ r_edx = R32((u32)(r_ebx+0x340u));
    /* 0062e341: mov dword ptr [eax + 0x20], edx */ W32((u32)(r_eax+0x20u), r_edx);
    /* 0062e344: mov ecx, dword ptr [ebx + 0x344] */ r_ecx = R32((u32)(r_ebx+0x344u));
    /* 0062e34a: mov dword ptr [eax + 0x24], ecx */ W32((u32)(r_eax+0x24u), r_ecx);
L_0062e34d:; BB(0x0062e34d);
    /* 0062e34d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0062e350: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062e351: ret  */ FN_RET(0x0062e0dc); r_esp += 4; return;
L_0062e352:; BB(0x0062e352);
    /* 0062e352: mov edi, dword ptr [ecx + 0x350] */ r_edi = R32((u32)(r_ecx+0x350u));
    /* 0062e358: cmp edi, dword ptr [ebx + 0x350] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebx+0x350u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062e35e: jne 0x62e1fc */ if (!fZ) goto L_0062e1fc;
L_0062e364:; BB(0x0062e364);
    /* 0062e364: movzx edi, word ptr [ecx + 0x1c] */ r_edi = (u32)R16((u32)(r_ecx+0x1cu));
    /* 0062e368: cmp edi, 0x4000 */ {  u32 a = r_edi; u32 b = 0x4000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062e36e: jl 0x62e1fc */ if ((fS!=fO)) goto L_0062e1fc;
L_0062e374:; BB(0x0062e374);
    /* 0062e374: mov edi, dword ptr [ecx + 0x80] */ r_edi = R32((u32)(r_ecx+0x80u));
    /* 0062e37a: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062e37c: je 0x62e1fc */ if (fZ) goto L_0062e1fc;
L_0062e382:; BB(0x0062e382);
    /* 0062e382: je 0x62e1fc */ if (fZ) goto L_0062e1fc;
L_0062e388:; BB(0x0062e388);
    /* 0062e388: movsx edx, word ptr [edi + 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x4u));
    /* 0062e38c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0062e38e: jl 0x62e1fc */ if ((fS!=fO)) goto L_0062e1fc;
L_0062e394:; BB(0x0062e394);
    /* 0062e394: cmp edx, 0xb9f */ {  u32 a = r_edx; u32 b = 0xb9fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062e39a: jg 0x62e1fc */ if ((!fZ&&fS==fO)) goto L_0062e1fc;
L_0062e3a0:; BB(0x0062e3a0);
    /* 0062e3a0: mov edi, dword ptr [0xab02bc] */ r_edi = R32((u32)(0xab02bcu));
    /* 0062e3a6: movzx eax, word ptr [edi + edx*4] */ r_eax = (u32)R16((u32)(r_edi+r_edx*4));
    /* 0062e3aa: mov word ptr [esp + 8], ax */ W16((u32)(r_esp+0x8u), (u16)r_eax);
    /* 0062e3af: movzx eax, word ptr [edi + edx*4 + 2] */ r_eax = (u32)R16((u32)(r_edi+r_edx*4+0x2u));
    /* 0062e3b4: mov word ptr [esp + 0xa], ax */ W16((u32)(r_esp+0xau), (u16)r_eax);
    /* 0062e3b9: mov eax, 3 */ r_eax = 0x3u;
    /* 0062e3be: mov word ptr [esp + 8], ax */ W16((u32)(r_esp+0x8u), (u16)r_eax);
    /* 0062e3c3: mov word ptr [ecx + 0x32e], ax */ W16((u32)(r_ecx+0x32eu), (u16)r_eax);
    /* 0062e3ca: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 0062e3ce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062e3cf: call 0x7b5038 */ r_esp -= 4; W32(r_esp, 0x62e3d4u); f_007b5038();
    /* 0062e3d4: mov eax, dword ptr [0xaae16c] */ r_eax = R32((u32)(0xaae16cu));
    /* 0062e3d9: jmp 0x62e1fc */ goto L_0062e1fc;
}

void f_0062e3e0(void) /* sub_62E3E0 */
{
    FN_ENTER(0x0062e3e0);
    /* 0062e3e0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062e3e1: mov eax, dword ptr [ecx + 0x33c] */ r_eax = R32((u32)(r_ecx+0x33cu));
    /* 0062e3e7: mov edx, dword ptr [ecx + 0x340] */ r_edx = R32((u32)(r_ecx+0x340u));
    /* 0062e3ed: mov dword ptr [ecx + 0x38], eax */ W32((u32)(r_ecx+0x38u), r_eax);
    /* 0062e3f0: mov eax, dword ptr [ecx + 0x344] */ r_eax = R32((u32)(r_ecx+0x344u));
    /* 0062e3f6: mov dword ptr [ecx + 0x3c], edx */ W32((u32)(r_ecx+0x3cu), r_edx);
    /* 0062e3f9: mov dword ptr [ecx + 0x40], eax */ W32((u32)(r_ecx+0x40u), r_eax);
    /* 0062e3fc: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x62e401u); f_007b999c();
    /* 0062e401: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062e402: ret  */ FN_RET(0x0062e3e0); r_esp += 4; return;
}

void f_0062e404(void) /* sub_62E404 */
{
    FN_ENTER(0x0062e404);
    /* 0062e404: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0062e405: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0062e407: mov edx, dword ptr [ebx + 0x348] */ r_edx = R32((u32)(r_ebx+0x348u));
    /* 0062e40d: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fO = 0; }
    /* 0062e410: jne 0x62e457 */ if (!fZ) goto L_0062e457;
L_0062e412:; BB(0x0062e412);
    /* 0062e412: fld dword ptr [0x932be4] */ FPUSH(R_F32((u32)(0x932be4u)));
    /* 0062e418: fadd dword ptr [ebx + 0x54] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x54u));
    /* 0062e41b: fld dword ptr [0x932bec] */ FPUSH(R_F32((u32)(0x932becu)));
    /* 0062e421: fld dword ptr [ebx + 0x340] */ FPUSH(R_F32((u32)(r_ebx+0x340u)));
    /* 0062e427: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 0062e429: fsubr st(2) */ ST(0) = ST(2) - ST(0);
    /* 0062e42b: fmul dword ptr [0x932be8] */ ST(0) = ST(0) * R_F32((u32)(0x932be8u));
    /* 0062e431: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0062e433: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0062e435: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0062e437: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0062e438: jb 0x62e44d */ if (fC) goto L_0062e44d;
L_0062e43a:; BB(0x0062e43a);
    /* 0062e43a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0062e43c: fstp dword ptr [ebx + 0x340] */ W_F32((u32)(r_ebx+0x340u), ST(0)); FPOP();
    /* 0062e442: or edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0062e445: mov dword ptr [ebx + 0x348], edx */ W32((u32)(r_ebx+0x348u), r_edx);
    /* 0062e44b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062e44c: ret  */ FN_RET(0x0062e404); r_esp += 4; return;
L_0062e44d:; BB(0x0062e44d);
    /* 0062e44d: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0062e44f: fstp dword ptr [ebx + 0x340] */ W_F32((u32)(r_ebx+0x340u), ST(0)); FPOP();
    /* 0062e455: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062e456: ret  */ FN_RET(0x0062e404); r_esp += 4; return;
L_0062e457:; BB(0x0062e457);
    /* 0062e457: mov ecx, dword ptr [ebx + 0x5c] */ r_ecx = R32((u32)(r_ebx+0x5cu));
    /* 0062e45a: add ecx, 0x800 */ {  u32 a = r_ecx; u32 b = 0x800u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0062e460: mov dword ptr [ebx + 0x5c], ecx */ W32((u32)(r_ebx+0x5cu), r_ecx);
    /* 0062e463: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x62e468u); f_0082dcbc();
    /* 0062e468: fld dword ptr [ebx + 0x340] */ FPUSH(R_F32((u32)(r_ebx+0x340u)));
    /* 0062e46e: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0062e470: fstp dword ptr [ebx + 0x340] */ W_F32((u32)(r_ebx+0x340u), ST(0)); FPOP();
    /* 0062e476: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062e477: ret  */ FN_RET(0x0062e404); r_esp += 4; return;
}

void f_0062e478(void) /* sub_62E478 */
{
    FN_ENTER(0x0062e478);
    /* 0062e478: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0062e479: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062e47a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0062e47b: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062e47e: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0062e480: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0062e482: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x62e487u); f_00770738();
    /* 0062e487: mov ebx, eax */ r_ebx = r_eax;
    /* 0062e489: movzx edx, word ptr [ebp + 0x364] */ r_edx = (u32)R16((u32)(r_ebp+0x364u));
    /* 0062e490: cmp edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062e496: je 0x62e57b */ if (fZ) goto L_0062e57b;
L_0062e49c:; BB(0x0062e49c);
    /* 0062e49c: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062e49e: je 0x62e57b */ if (fZ) goto L_0062e57b;
L_0062e4a4:; BB(0x0062e4a4);
    /* 0062e4a4: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0062e4a7: mov edi, dword ptr [ebp + 0x38] */ r_edi = R32((u32)(r_ebp+0x38u));
    /* 0062e4aa: mov edx, dword ptr [ebp + 0x40] */ r_edx = R32((u32)(r_ebp+0x40u));
    /* 0062e4ad: mov dword ptr [ebp + 0x44], edi */ W32((u32)(r_ebp+0x44u), r_edi);
    /* 0062e4b0: mov edi, dword ptr [ebp + 0x3c] */ r_edi = R32((u32)(r_ebp+0x3cu));
    /* 0062e4b3: mov dword ptr [ebp + 0x48], edi */ W32((u32)(r_ebp+0x48u), r_edi);
    /* 0062e4b6: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 0062e4ba: mov dword ptr [ebp + 0x4c], edx */ W32((u32)(r_ebp+0x4cu), r_edx);
    /* 0062e4bd: mov edx, dword ptr [ebx + 0x38] */ r_edx = R32((u32)(r_ebx+0x38u));
    /* 0062e4c0: lea edi, [ebp + 0x38] */ r_edi = (u32)(r_ebp+0x38u);
    /* 0062e4c3: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0062e4c6: mov edx, dword ptr [ebx + 0x40] */ r_edx = R32((u32)(r_ebx+0x40u));
    /* 0062e4c9: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0062e4cd: mov edx, edi */ r_edx = r_edi;
    /* 0062e4cf: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x62e4d4u); f_0082f9c4();
    /* 0062e4d4: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0062e4d7: call 0x82def4 */ r_esp -= 4; W32(r_esp, 0x62e4dcu); f_0082def4();
    /* 0062e4dc: fcomp dword ptr [0xa8ef7c] */ fx_compare(ST(0), R_F32((u32)(0xa8ef7cu))); FPOP();
    /* 0062e4e2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0062e4e4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0062e4e5: jbe 0x62e509 */ if ((fC||fZ)) goto L_0062e509;
L_0062e4e7:; BB(0x0062e4e7);
    /* 0062e4e7: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0062e4ea: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x62e4efu); f_0082df08();
    /* 0062e4ef: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0062e4f1: fld dword ptr [0xa8ef7c] */ FPUSH(R_F32((u32)(0xa8ef7cu)));
    /* 0062e4f7: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0062e4fa: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0062e4fc: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 0062e500: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0062e502: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0062e505: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
L_0062e509:; BB(0x0062e509);
    /* 0062e509: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0062e50c: mov ecx, edi */ r_ecx = r_edi;
    /* 0062e50e: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x62e513u); f_0082ebac();
    /* 0062e513: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0062e515: call 0x7b7e9c */ r_esp -= 4; W32(r_esp, 0x62e51au); f_007b7e9c();
    /* 0062e51a: fld dword ptr [0x932be4] */ FPUSH(R_F32((u32)(0x932be4u)));
    /* 0062e520: fadd dword ptr [ebx + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x3cu));
    /* 0062e523: fld dword ptr [ebp + 0x48] */ FPUSH(R_F32((u32)(r_ebp+0x48u)));
    /* 0062e526: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 0062e528: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0062e52a: fmul dword ptr [0x932be0] */ ST(0) = ST(0) * R_F32((u32)(0x932be0u));
    /* 0062e530: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0062e532: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0062e534: fstp dword ptr [ebp + 0x3c] */ W_F32((u32)(r_ebp+0x3cu), ST(0)); FPOP();
    /* 0062e537: call 0x77a1f4 */ r_esp -= 4; W32(r_esp, 0x62e53cu); f_0077a1f4();
    /* 0062e53c: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0062e53f: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 0062e543: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0062e545: fmul qword ptr [0x932b50] */ ST(0) = ST(0) * R_F64((u32)(0x932b50u));
    /* 0062e54b: fdiv qword ptr [0x932b48] */ ST(0) = ST(0) / R_F64((u32)(0x932b48u));
    /* 0062e551: fnstcw word ptr [esp + 0xc] */ W16((u32)(r_esp+0xcu), fcw);
    /* 0062e555: movzx eax, word ptr [esp + 0xc] */ r_eax = (u32)R16((u32)(r_esp+0xcu));
    /* 0062e55a: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0062e55f: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0062e563: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 0062e567: fistp dword ptr [ebp + 0x60] */ W32((u32)(r_ebp+0x60u), (u32)fx_int32(ST(0))); FPOP();
    /* 0062e56a: fldcw word ptr [esp + 0xc] */ fcw = R16((u32)(r_esp+0xcu));
    /* 0062e56e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062e56f: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x62e574u); f_007b999c();
    /* 0062e574: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0062e577: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062e578: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062e579: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062e57a: ret  */ FN_RET(0x0062e478); r_esp += 4; return;
L_0062e57b:; BB(0x0062e57b);
    /* 0062e57b: mov eax, 2 */ r_eax = 0x2u;
    /* 0062e580: mov word ptr [ebp + 0x32e], ax */ W16((u32)(r_ebp+0x32eu), (u16)r_eax);
    /* 0062e587: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0062e58a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062e58b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062e58c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062e58d: ret  */ FN_RET(0x0062e478); r_esp += 4; return;
}

void f_0062e590(void) /* sub_62E590 */
{
    FN_ENTER(0x0062e590);
    /* 0062e590: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062e591: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0062e593: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0062e595: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062e597: push dword ptr [ebp + 0x354] */ { u32 v = R32((u32)(r_ebp+0x354u)); r_esp -= 4; W32(r_esp, v); }
    /* 0062e59d: call 0x7714cc */ r_esp -= 4; W32(r_esp, 0x62e5a2u); f_007714cc();
    /* 0062e5a2: mov word ptr [ebp + 0x364], ax */ W16((u32)(r_ebp+0x364u), (u16)r_eax);
    /* 0062e5a9: movzx edx, ax */ r_edx = (u32)(u16)r_eax;
    /* 0062e5ac: cmp edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0062e5b2: je 0x62e5d1 */ if (fZ) goto L_0062e5d1;
L_0062e5b4:; BB(0x0062e5b4);
    /* 0062e5b4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062e5b5: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x62e5bau); f_0068d5a8();
    /* 0062e5ba: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062e5bb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062e5bc: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0062e5be: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x62e5c3u); f_007706b0();
    /* 0062e5c3: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0062e5c5: call 0x62e5d4 */ r_esp -= 4; W32(r_esp, 0x62e5cau); f_0062e5d4();
    /* 0062e5ca: movzx eax, word ptr [ebp + 0x364] */ r_eax = (u32)R16((u32)(r_ebp+0x364u));
L_0062e5d1:; BB(0x0062e5d1);
    /* 0062e5d1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062e5d2: ret  */ FN_RET(0x0062e590); r_esp += 4; return;
}

void f_0062e5d4(void) /* sub_62E5D4 */
{
    FN_ENTER(0x0062e5d4);
    /* 0062e5d4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062e5d5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0062e5d6: movzx eax, word ptr [ecx + 0x1c] */ r_eax = (u32)R16((u32)(r_ecx+0x1cu));
    /* 0062e5da: cmp eax, 0x4000 */ {  u32 a = r_eax; u32 b = 0x4000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0062e5df: jl 0x62e62e */ if ((fS!=fO)) goto L_0062e62e;
L_0062e5e1:; BB(0x0062e5e1);
    /* 0062e5e1: mov eax, dword ptr [ecx + 0x80] */ r_eax = R32((u32)(r_ecx+0x80u));
    /* 0062e5e7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0062e5e9: je 0x62e62e */ if (fZ) goto L_0062e62e;
L_0062e5eb:; BB(0x0062e5eb);
    /* 0062e5eb: je 0x62e62e */ if (fZ) goto L_0062e62e;
L_0062e5ed:; BB(0x0062e5ed);
    /* 0062e5ed: movsx ebp, word ptr [eax + 4] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_eax+0x4u));
    /* 0062e5f1: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0062e5f3: jl 0x62e62e */ if ((fS!=fO)) goto L_0062e62e;
L_0062e5f5:; BB(0x0062e5f5);
    /* 0062e5f5: cmp ebp, 0xb9f */ {  u32 a = r_ebp; u32 b = 0xb9fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0062e5fb: jg 0x62e62e */ if ((!fZ&&fS==fO)) goto L_0062e62e;
L_0062e5fd:; BB(0x0062e5fd);
    /* 0062e5fd: mov edx, dword ptr [0xab02bc] */ r_edx = R32((u32)(0xab02bcu));
    /* 0062e603: movzx eax, word ptr [edx + ebp*4] */ r_eax = (u32)R16((u32)(r_edx+r_ebp*4));
    /* 0062e607: mov word ptr [esp], ax */ W16((u32)(r_esp), (u16)r_eax);
    /* 0062e60b: movzx ebp, word ptr [edx + ebp*4 + 2] */ r_ebp = (u32)R16((u32)(r_edx+r_ebp*4+0x2u));
    /* 0062e610: mov eax, 3 */ r_eax = 0x3u;
    /* 0062e615: mov word ptr [esp + 2], bp */ W16((u32)(r_esp+0x2u), (u16)r_ebp);
    /* 0062e61a: mov word ptr [esp], ax */ W16((u32)(r_esp), (u16)r_eax);
    /* 0062e61e: mov word ptr [ecx + 0x32e], ax */ W16((u32)(r_ecx+0x32eu), (u16)r_eax);
    /* 0062e625: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0062e628: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062e629: call 0x7b5038 */ r_esp -= 4; W32(r_esp, 0x62e62eu); f_007b5038();
L_0062e62e:; BB(0x0062e62e);
    /* 0062e62e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062e62f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062e630: ret  */ FN_RET(0x0062e5d4); r_esp += 4; return;
}

void f_0062e634(void) /* sub_62E634 */
{
    FN_ENTER(0x0062e634);
    /* 0062e634: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0062e635: mov esi, ecx */ r_esi = r_ecx;
    /* 0062e637: mov eax, 2 */ r_eax = 0x2u;
    /* 0062e63c: mov word ptr [esi + 0x32e], ax */ W16((u32)(r_esi+0x32eu), (u16)r_eax);
    /* 0062e643: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0062e645: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062e647: mov ecx, esi */ r_ecx = r_esi;
    /* 0062e649: call 0x7b52c4 */ r_esp -= 4; W32(r_esp, 0x62e64eu); f_007b52c4();
    /* 0062e64e: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 0062e651: and eax, 0xfffbffff */ {  u32 a = r_eax; u32 b = 0xfffbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0062e656: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 0062e659: mov ecx, esi */ r_ecx = r_esi;
    /* 0062e65b: call 0x77a1f4 */ r_esp -= 4; W32(r_esp, 0x62e660u); f_0077a1f4();
    /* 0062e660: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0062e661: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x62e666u); f_007b999c();
    /* 0062e666: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062e667: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0062e669: mov ecx, esi */ r_ecx = r_esi;
    /* 0062e66b: call dword ptr [eax + 0x14c] */ { u32 t = R32((u32)(r_eax+0x14cu)); r_esp -= 4; W32(r_esp, 0x62e671u); call_ind(t); }
    /* 0062e671: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062e672: ret  */ FN_RET(0x0062e634); r_esp += 4; return;
}

void f_0062e674(void) /* sub_62E674 */
{
    FN_ENTER(0x0062e674);
    /* 0062e674: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0062e675: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0062e676: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062e677: mov edi, ecx */ r_edi = r_ecx;
    /* 0062e679: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 0062e67d: mov ecx, edi */ r_ecx = r_edi;
    /* 0062e67f: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x62e684u); f_00770738();
    /* 0062e684: mov ecx, eax */ r_ecx = r_eax;
    /* 0062e686: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062e688: je 0x62e6bf */ if (fZ) goto L_0062e6bf;
L_0062e68a:; BB(0x0062e68a);
    /* 0062e68a: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 0062e68e: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062e691: jge 0x62e6bf */ if ((fS==fO)) goto L_0062e6bf;
L_0062e693:; BB(0x0062e693);
    /* 0062e693: mov edx, dword ptr [edi + 0x18] */ r_edx = R32((u32)(r_edi+0x18u));
    /* 0062e696: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062e698: je 0x62e6bf */ if (fZ) goto L_0062e6bf;
L_0062e69a:; BB(0x0062e69a);
    /* 0062e69a: movzx ebp, word ptr [edx + 0xa8] */ r_ebp = (u32)R16((u32)(r_edx+0xa8u));
    /* 0062e6a1: cmp eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062e6a3: jne 0x62e6b8 */ if (!fZ) goto L_0062e6b8;
L_0062e6a5:; BB(0x0062e6a5);
    /* 0062e6a5: mov ebp, dword ptr [edx + 0xa4] */ r_ebp = R32((u32)(r_edx+0xa4u));
    /* 0062e6ab: cmp ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062e6ae: je 0x62e6b8 */ if (fZ) goto L_0062e6b8;
L_0062e6b0:; BB(0x0062e6b0);
    /* 0062e6b0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0062e6b2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062e6b3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062e6b4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062e6b5: ret 8 */ FN_RET(0x0062e674); r_esp += 12; return;
L_0062e6b8:; BB(0x0062e6b8);
    /* 0062e6b8: mov edx, dword ptr [edx + 0x10] */ r_edx = R32((u32)(r_edx+0x10u));
    /* 0062e6bb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062e6bd: jne 0x62e69a */ if (!fZ) goto L_0062e69a;
L_0062e6bf:; BB(0x0062e6bf);
    /* 0062e6bf: mov edx, dword ptr [edi + 0x34c] */ r_edx = R32((u32)(r_edi+0x34cu));
    /* 0062e6c5: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062e6c8: jne 0x62e6ce */ if (!fZ) goto L_0062e6ce;
L_0062e6ca:; BB(0x0062e6ca);
    /* 0062e6ca: cmp esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062e6cc: je 0x62e6e5 */ if (fZ) goto L_0062e6e5;
L_0062e6ce:; BB(0x0062e6ce);
    /* 0062e6ce: movsx eax, word ptr [esi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x32cu));
    /* 0062e6d5: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0062e6d8: jne 0x62e6e5 */ if (!fZ) goto L_0062e6e5;
L_0062e6da:; BB(0x0062e6da);
    /* 0062e6da: mov eax, 1 */ r_eax = 0x1u;
    /* 0062e6df: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062e6e0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062e6e1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062e6e2: ret 8 */ FN_RET(0x0062e674); r_esp += 12; return;
L_0062e6e5:; BB(0x0062e6e5);
    /* 0062e6e5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0062e6e7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062e6e8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062e6e9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062e6ea: ret 8 */ FN_RET(0x0062e674); r_esp += 12; return;
}

void f_0062e6f0(void) /* sub_62E6F0 */
{
    FN_ENTER(0x0062e6f0);
    /* 0062e6f0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0062e6f1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062e6f2: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 0062e6f6: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0062e6f8: je 0x62e770 */ if (fZ) goto L_0062e770;
L_0062e6fa:; BB(0x0062e6fa);
    /* 0062e6fa: movzx edx, word ptr [edi + 0x1c] */ r_edx = (u32)R16((u32)(r_edi+0x1cu));
    /* 0062e6fe: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062e701: jge 0x62e732 */ if ((fS==fO)) goto L_0062e732;
L_0062e703:; BB(0x0062e703);
    /* 0062e703: mov eax, dword ptr [ecx + 0x18] */ r_eax = R32((u32)(r_ecx+0x18u));
    /* 0062e706: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062e708: je 0x62e732 */ if (fZ) goto L_0062e732;
L_0062e70a:; BB(0x0062e70a);
    /* 0062e70a: movzx ebp, word ptr [eax + 0xa8] */ r_ebp = (u32)R16((u32)(r_eax+0xa8u));
    /* 0062e711: cmp edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062e713: jne 0x62e72b */ if (!fZ) goto L_0062e72b;
L_0062e715:; BB(0x0062e715);
    /* 0062e715: mov ebp, dword ptr [eax + 0xa4] */ r_ebp = R32((u32)(r_eax+0xa4u));
    /* 0062e71b: cmp ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0062e71e: je 0x62e72b */ if (fZ) goto L_0062e72b;
L_0062e720:; BB(0x0062e720);
    /* 0062e720: fld dword ptr [0x932bdc] */ FPUSH(R_F32((u32)(0x932bdcu)));
    /* 0062e726: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062e727: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062e728: ret 0x18 */ FN_RET(0x0062e6f0); r_esp += 28; return;
L_0062e72b:; BB(0x0062e72b);
    /* 0062e72b: mov eax, dword ptr [eax + 0x10] */ r_eax = R32((u32)(r_eax+0x10u));
    /* 0062e72e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062e730: jne 0x62e70a */ if (!fZ) goto L_0062e70a;
L_0062e732:; BB(0x0062e732);
    /* 0062e732: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0062e735: jge 0x62e743 */ if ((fS==fO)) goto L_0062e743;
L_0062e737:; BB(0x0062e737);
    /* 0062e737: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0062e73e: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0062e741: je 0x62e74e */ if (fZ) goto L_0062e74e;
L_0062e743:; BB(0x0062e743);
    /* 0062e743: fld dword ptr [0x932bdc] */ FPUSH(R_F32((u32)(0x932bdcu)));
    /* 0062e749: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062e74a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062e74b: ret 0x18 */ FN_RET(0x0062e6f0); r_esp += 28; return;
L_0062e74e:; BB(0x0062e74e);
    /* 0062e74e: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0062e752: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0062e754: jl 0x62e75b */ if ((fS!=fO)) goto L_0062e75b;
L_0062e756:; BB(0x0062e756);
    /* 0062e756: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062e759: jle 0x62e760 */ if ((fZ||fS!=fO)) goto L_0062e760;
L_0062e75b:; BB(0x0062e75b);
    /* 0062e75b: cmp eax, 0x13 */ {  u32 a = r_eax; u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0062e75e: jne 0x62e743 */ if (!fZ) goto L_0062e743;
L_0062e760:; BB(0x0062e760);
    /* 0062e760: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0062e765: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062e767: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0062e769: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x62e76cu); call_ind(t); }
    /* 0062e76c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0062e76e: jmp 0x62e743 */ goto L_0062e743;
L_0062e770:; BB(0x0062e770);
    /* 0062e770: fld dword ptr [0x932bdc] */ FPUSH(R_F32((u32)(0x932bdcu)));
    /* 0062e776: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062e777: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062e778: ret 0x18 */ FN_RET(0x0062e6f0); r_esp += 28; return;
}

void f_0062e77c(void) /* sub_62E77C */
{
    FN_ENTER(0x0062e77c);
    /* 0062e77c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0062e77d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062e77e: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 0062e782: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062e784: je 0x62e7be */ if (fZ) goto L_0062e7be;
L_0062e786:; BB(0x0062e786);
    /* 0062e786: movzx edx, word ptr [edi + 0x1c] */ r_edx = (u32)R16((u32)(r_edi+0x1cu));
    /* 0062e78a: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062e78d: jge 0x62e7be */ if ((fS==fO)) goto L_0062e7be;
L_0062e78f:; BB(0x0062e78f);
    /* 0062e78f: mov eax, dword ptr [ecx + 0x18] */ r_eax = R32((u32)(r_ecx+0x18u));
    /* 0062e792: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062e794: je 0x62e7be */ if (fZ) goto L_0062e7be;
L_0062e796:; BB(0x0062e796);
    /* 0062e796: movzx ebp, word ptr [eax + 0xa8] */ r_ebp = (u32)R16((u32)(r_eax+0xa8u));
    /* 0062e79d: cmp edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062e79f: jne 0x62e7b7 */ if (!fZ) goto L_0062e7b7;
L_0062e7a1:; BB(0x0062e7a1);
    /* 0062e7a1: mov ebp, dword ptr [eax + 0xa4] */ r_ebp = R32((u32)(r_eax+0xa4u));
    /* 0062e7a7: cmp ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0062e7aa: je 0x62e7b7 */ if (fZ) goto L_0062e7b7;
L_0062e7ac:; BB(0x0062e7ac);
    /* 0062e7ac: fld dword ptr [0x932bd4] */ FPUSH(R_F32((u32)(0x932bd4u)));
    /* 0062e7b2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062e7b3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062e7b4: ret 8 */ FN_RET(0x0062e77c); r_esp += 12; return;
L_0062e7b7:; BB(0x0062e7b7);
    /* 0062e7b7: mov eax, dword ptr [eax + 0x10] */ r_eax = R32((u32)(r_eax+0x10u));
    /* 0062e7ba: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062e7bc: jne 0x62e796 */ if (!fZ) goto L_0062e796;
L_0062e7be:; BB(0x0062e7be);
    /* 0062e7be: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0062e7c5: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0062e7c8: jne 0x62e7e3 */ if (!fZ) goto L_0062e7e3;
L_0062e7ca:; BB(0x0062e7ca);
    /* 0062e7ca: movsx eax, word ptr [edi + 0x116] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x116u));
    /* 0062e7d1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0062e7d3: je 0x62e7e3 */ if (fZ) goto L_0062e7e3;
L_0062e7d5:; BB(0x0062e7d5);
    /* 0062e7d5: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0062e7da: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062e7dc: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0062e7de: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x62e7e1u); call_ind(t); }
    /* 0062e7e1: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0062e7e3:; BB(0x0062e7e3);
    /* 0062e7e3: fld dword ptr [0x932bd4] */ FPUSH(R_F32((u32)(0x932bd4u)));
    /* 0062e7e9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062e7ea: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062e7eb: ret 8 */ FN_RET(0x0062e77c); r_esp += 12; return;
}

void f_0062e7f0(void) /* sub_62E7F0 */
{
    FN_ENTER(0x0062e7f0);
    /* 0062e7f0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0062e7f1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0062e7f2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062e7f3: mov edi, ecx */ r_edi = r_ecx;
    /* 0062e7f5: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 0062e7f9: mov ecx, edi */ r_ecx = r_edi;
    /* 0062e7fb: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x62e800u); f_00770738();
    /* 0062e800: mov ecx, eax */ r_ecx = r_eax;
    /* 0062e802: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062e804: je 0x62e83b */ if (fZ) goto L_0062e83b;
L_0062e806:; BB(0x0062e806);
    /* 0062e806: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 0062e80a: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062e80d: jge 0x62e83b */ if ((fS==fO)) goto L_0062e83b;
L_0062e80f:; BB(0x0062e80f);
    /* 0062e80f: mov edx, dword ptr [edi + 0x18] */ r_edx = R32((u32)(r_edi+0x18u));
    /* 0062e812: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062e814: je 0x62e83b */ if (fZ) goto L_0062e83b;
L_0062e816:; BB(0x0062e816);
    /* 0062e816: movzx ebp, word ptr [edx + 0xa8] */ r_ebp = (u32)R16((u32)(r_edx+0xa8u));
    /* 0062e81d: cmp eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062e81f: jne 0x62e834 */ if (!fZ) goto L_0062e834;
L_0062e821:; BB(0x0062e821);
    /* 0062e821: mov ebp, dword ptr [edx + 0xa4] */ r_ebp = R32((u32)(r_edx+0xa4u));
    /* 0062e827: cmp ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062e82a: je 0x62e834 */ if (fZ) goto L_0062e834;
L_0062e82c:; BB(0x0062e82c);
    /* 0062e82c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0062e82e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062e82f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062e830: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062e831: ret 0x10 */ FN_RET(0x0062e7f0); r_esp += 20; return;
L_0062e834:; BB(0x0062e834);
    /* 0062e834: mov edx, dword ptr [edx + 0x10] */ r_edx = R32((u32)(r_edx+0x10u));
    /* 0062e837: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062e839: jne 0x62e816 */ if (!fZ) goto L_0062e816;
L_0062e83b:; BB(0x0062e83b);
    /* 0062e83b: mov edx, dword ptr [edi + 0x34c] */ r_edx = R32((u32)(r_edi+0x34cu));
    /* 0062e841: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062e844: jne 0x62e84a */ if (!fZ) goto L_0062e84a;
L_0062e846:; BB(0x0062e846);
    /* 0062e846: cmp esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062e848: je 0x62e861 */ if (fZ) goto L_0062e861;
L_0062e84a:; BB(0x0062e84a);
    /* 0062e84a: movsx eax, word ptr [esi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x32cu));
    /* 0062e851: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0062e854: jne 0x62e861 */ if (!fZ) goto L_0062e861;
L_0062e856:; BB(0x0062e856);
    /* 0062e856: mov eax, 1 */ r_eax = 0x1u;
    /* 0062e85b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062e85c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062e85d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062e85e: ret 0x10 */ FN_RET(0x0062e7f0); r_esp += 20; return;
L_0062e861:; BB(0x0062e861);
    /* 0062e861: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0062e863: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062e864: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062e865: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062e866: ret 0x10 */ FN_RET(0x0062e7f0); r_esp += 20; return;
}

void f_0062e86c(void) /* sub_62E86C */
{
    FN_ENTER(0x0062e86c);
    /* 0062e86c: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062e86f: movzx eax, word ptr [ecx + 0x1c] */ r_eax = (u32)R16((u32)(r_ecx+0x1cu));
    /* 0062e873: cmp eax, 0x4000 */ {  u32 a = r_eax; u32 b = 0x4000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062e878: jl 0x62e8db */ if ((fS!=fO)) goto L_0062e8db;
L_0062e87a:; BB(0x0062e87a);
    /* 0062e87a: mov eax, dword ptr [ecx + 0x80] */ r_eax = R32((u32)(r_ecx+0x80u));
    /* 0062e880: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062e882: je 0x62e8db */ if (fZ) goto L_0062e8db;
L_0062e884:; BB(0x0062e884);
    /* 0062e884: je 0x62e8e7 */ if (fZ) goto L_0062e8e7;
L_0062e886:; BB(0x0062e886);
    /* 0062e886: movsx eax, word ptr [eax + 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x4u));
    /* 0062e88a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0062e88c: jl 0x62e8bc */ if ((fS!=fO)) goto L_0062e8bc;
L_0062e88e:; BB(0x0062e88e);
    /* 0062e88e: cmp eax, 0xb9f */ {  u32 a = r_eax; u32 b = 0xb9fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062e893: jg 0x62e8bc */ if ((!fZ&&fS==fO)) goto L_0062e8bc;
L_0062e895:; BB(0x0062e895);
    /* 0062e895: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 0062e899: mov ecx, dword ptr [0xab02bc] */ r_ecx = R32((u32)(0xab02bcu));
    /* 0062e89f: movzx edx, word ptr [ecx + eax*4] */ r_edx = (u32)R16((u32)(r_ecx+r_eax*4));
    /* 0062e8a3: mov word ptr [esp], dx */ W16((u32)(r_esp), (u16)r_edx);
    /* 0062e8a7: movzx eax, word ptr [ecx + eax*4 + 2] */ r_eax = (u32)R16((u32)(r_ecx+r_eax*4+0x2u));
    /* 0062e8ac: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 0062e8b0: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 0062e8b5: mov eax, 1 */ r_eax = 0x1u;
    /* 0062e8ba: jmp 0x62e8be */ goto L_0062e8be;
L_0062e8bc:; BB(0x0062e8bc);
    /* 0062e8bc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0062e8be:; BB(0x0062e8be);
    /* 0062e8be: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062e8c0: je 0x62e8db */ if (fZ) goto L_0062e8db;
L_0062e8c2:; BB(0x0062e8c2);
    /* 0062e8c2: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0062e8c5: mov eax, 5 */ r_eax = 0x5u;
    /* 0062e8ca: mov word ptr [esp], ax */ W16((u32)(r_esp), (u16)r_eax);
    /* 0062e8ce: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062e8cf: mov word ptr [ecx + 0x32e], ax */ W16((u32)(r_ecx+0x32eu), (u16)r_eax);
    /* 0062e8d6: call 0x7b5038 */ r_esp -= 4; W32(r_esp, 0x62e8dbu); f_007b5038();
L_0062e8db:; BB(0x0062e8db);
    /* 0062e8db: fld dword ptr [0x932bcc] */ FPUSH(R_F32((u32)(0x932bccu)));
    /* 0062e8e1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0062e8e4: ret 8 */ FN_RET(0x0062e86c); r_esp += 12; return;
L_0062e8e7:; BB(0x0062e8e7);
    /* 0062e8e7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062e8e9: jmp 0x62e8be */ goto L_0062e8be;
}

void f_0062e8ec(void) /* sub_62E8EC */
{
    FN_ENTER(0x0062e8ec);
    /* 0062e8ec: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062e8ed: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0062e8ee: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0062e8f0: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 0062e8f4: movsx eax, word ptr [ebx] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 0062e8f7: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062e8fa: je 0x62e977 */ if (fZ) goto L_0062e977;
L_0062e8fc:; BB(0x0062e8fc);
    /* 0062e8fc: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0062e8ff: je 0x62e906 */ if (fZ) goto L_0062e906;
L_0062e901:; BB(0x0062e901);
    /* 0062e901: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062e902: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062e903: ret 8 */ FN_RET(0x0062e8ec); r_esp += 12; return;
L_0062e906:; BB(0x0062e906);
    /* 0062e906: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0062e908: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062e90a: mov word ptr [ebp + 0x32e], ax */ W16((u32)(r_ebp+0x32eu), (u16)r_eax);
    /* 0062e911: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0062e913: call 0x7b52c4 */ r_esp -= 4; W32(r_esp, 0x62e918u); f_007b52c4();
    /* 0062e918: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 0062e91b: and eax, 0xfffbffff */ {  u32 a = r_eax; u32 b = 0xfffbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0062e920: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 0062e923: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0062e925: call 0x77a1f4 */ r_esp -= 4; W32(r_esp, 0x62e92au); f_0077a1f4();
    /* 0062e92a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062e92b: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x62e930u); f_007b999c();
    /* 0062e930: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062e931: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0062e934: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0062e936: call dword ptr [eax + 0x14c] */ { u32 t = R32((u32)(r_eax+0x14cu)); r_esp -= 4; W32(r_esp, 0x62e93cu); call_ind(t); }
    /* 0062e93c: mov eax, dword ptr [ebp + 0x80] */ r_eax = R32((u32)(r_ebp+0x80u));
    /* 0062e942: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062e944: je 0x62e96b */ if (fZ) goto L_0062e96b;
L_0062e946:; BB(0x0062e946);
    /* 0062e946: movsx edx, word ptr [eax + 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x4u));
    /* 0062e94a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0062e94c: jl 0x62e96b */ if ((fS!=fO)) goto L_0062e96b;
L_0062e94e:; BB(0x0062e94e);
    /* 0062e94e: cmp edx, 0xb9f */ {  u32 a = r_edx; u32 b = 0xb9fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062e954: jg 0x62e96b */ if ((!fZ&&fS==fO)) goto L_0062e96b;
L_0062e956:; BB(0x0062e956);
    /* 0062e956: mov eax, dword ptr [0xab02bc] */ r_eax = R32((u32)(0xab02bcu));
    /* 0062e95b: movzx ecx, word ptr [ebx] */ r_ecx = (u32)R16((u32)(r_ebx));
    /* 0062e95e: mov word ptr [eax + edx*4], cx */ W16((u32)(r_eax+r_edx*4), (u16)r_ecx);
    /* 0062e962: movzx ebx, word ptr [ebx + 2] */ r_ebx = (u32)R16((u32)(r_ebx+0x2u));
    /* 0062e966: mov word ptr [eax + edx*4 + 2], bx */ W16((u32)(r_eax+r_edx*4+0x2u), (u16)r_ebx);
L_0062e96b:; BB(0x0062e96b);
    /* 0062e96b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0062e96d: call 0x8172ac */ r_esp -= 4; W32(r_esp, 0x62e972u); f_008172ac();
    /* 0062e972: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062e973: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062e974: ret 8 */ FN_RET(0x0062e8ec); r_esp += 12; return;
L_0062e977:; BB(0x0062e977);
    /* 0062e977: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0062e97b: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062e97e: je 0x62e9d5 */ if (fZ) goto L_0062e9d5;
L_0062e980:; BB(0x0062e980);
    /* 0062e980: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062e981: call 0x8113bc */ r_esp -= 4; W32(r_esp, 0x62e986u); f_008113bc();
    /* 0062e986: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062e987: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 0062e98b: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0062e990: mov word ptr [ebp + 8], ax */ W16((u32)(r_ebp+0x8u), (u16)r_eax);
    /* 0062e994: mov eax, dword ptr [ebp + 0x80] */ r_eax = R32((u32)(r_ebp+0x80u));
    /* 0062e99a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0062e99c: je 0x62e901 */ if (fZ) goto L_0062e901;
L_0062e9a2:; BB(0x0062e9a2);
    /* 0062e9a2: movsx ecx, word ptr [eax + 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x4u));
    /* 0062e9a6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0062e9a8: jl 0x62e901 */ if ((fS!=fO)) goto L_0062e901;
L_0062e9ae:; BB(0x0062e9ae);
    /* 0062e9ae: cmp ecx, 0xb9f */ {  u32 a = r_ecx; u32 b = 0xb9fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0062e9b4: jg 0x62e901 */ if ((!fZ&&fS==fO)) goto L_0062e901;
L_0062e9ba:; BB(0x0062e9ba);
    /* 0062e9ba: mov edx, dword ptr [0xab02bc] */ r_edx = R32((u32)(0xab02bcu));
    /* 0062e9c0: movzx eax, word ptr [ebx] */ r_eax = (u32)R16((u32)(r_ebx));
    /* 0062e9c3: mov word ptr [edx + ecx*4], ax */ W16((u32)(r_edx+r_ecx*4), (u16)r_eax);
    /* 0062e9c7: movzx ebx, word ptr [ebx + 2] */ r_ebx = (u32)R16((u32)(r_ebx+0x2u));
    /* 0062e9cb: mov word ptr [edx + ecx*4 + 2], bx */ W16((u32)(r_edx+r_ecx*4+0x2u), (u16)r_ebx);
    /* 0062e9d0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062e9d1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062e9d2: ret 8 */ FN_RET(0x0062e8ec); r_esp += 12; return;
L_0062e9d5:; BB(0x0062e9d5);
    /* 0062e9d5: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0062e9d7: call 0x62e9e0 */ r_esp -= 4; W32(r_esp, 0x62e9dcu); f_0062e9e0();
    /* 0062e9dc: jmp 0x62e980 */ goto L_0062e980;
}

void f_0062e9e0(void) /* sub_62E9E0 */
{
    FN_ENTER(0x0062e9e0);
    /* 0062e9e0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0062e9e1: mov edi, ecx */ r_edi = r_ecx;
    /* 0062e9e3: lea eax, [edi + 0x300] */ r_eax = (u32)(r_edi+0x300u);
    /* 0062e9e9: push 0x47 */ { u32 v = 0x47u; r_esp -= 4; W32(r_esp, v); }
    /* 0062e9eb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062e9ec: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x62e9f1u); f_0050b510();
    /* 0062e9f1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062e9f4: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0062e9f6: mov ecx, edi */ r_ecx = r_edi;
    /* 0062e9f8: call dword ptr [eax + 0x150] */ { u32 t = R32((u32)(r_eax+0x150u)); r_esp -= 4; W32(r_esp, 0x62e9feu); call_ind(t); }
    /* 0062e9fe: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0062ea00: mov ecx, edi */ r_ecx = r_edi;
    /* 0062ea02: call dword ptr [eax + 0x148] */ { u32 t = R32((u32)(r_eax+0x148u)); r_esp -= 4; W32(r_esp, 0x62ea08u); call_ind(t); }
    /* 0062ea08: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062ea09: ret  */ FN_RET(0x0062e9e0); r_esp += 4; return;
}

void f_0062ea0c(void) /* sub_62EA0C */
{
    FN_ENTER(0x0062ea0c);
    /* 0062ea0c: mov ecx, dword ptr [0xa8ef98] */ r_ecx = R32((u32)(0xa8ef98u));
    /* 0062ea12: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0062ea14: je 0x62ea29 */ if (fZ) goto L_0062ea29;
L_0062ea16:; BB(0x0062ea16);
    /* 0062ea16: je 0x62ea1f */ if (fZ) goto L_0062ea1f;
L_0062ea18:; BB(0x0062ea18);
    /* 0062ea18: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0062ea1a: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x62ea1fu); f_004066a8();
L_0062ea1f:; BB(0x0062ea1f);
    /* 0062ea1f: mov dword ptr [0xa8ef98], 0 */ W32((u32)(0xa8ef98u), 0x0u);
L_0062ea29:; BB(0x0062ea29);
    /* 0062ea29: ret  */ FN_RET(0x0062ea0c); r_esp += 4; return;
}

void f_0062ea2c(void) /* sub_62EA2C */
{
    FN_ENTER(0x0062ea2c);
    /* 0062ea2c: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0062ea2e: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 0062ea30: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x62ea35u); f_00792fe8();
    /* 0062ea35: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0062ea38: ret  */ FN_RET(0x0062ea2c); r_esp += 4; return;
}

void f_0062ea3c(void) /* sub_62EA3C */
{
    FN_ENTER(0x0062ea3c);
    /* 0062ea3c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062ea3d: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0062ea3f: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0062ea43: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0062ea45: call 0x7ba33c */ r_esp -= 4; W32(r_esp, 0x62ea4au); f_007ba33c();
    /* 0062ea4a: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0062ea4d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0062ea4f: call dword ptr [eax + 0x154] */ { u32 t = R32((u32)(r_eax+0x154u)); r_esp -= 4; W32(r_esp, 0x62ea55u); call_ind(t); }
    /* 0062ea55: mov eax, dword ptr [ebp + 0x38] */ r_eax = R32((u32)(r_ebp+0x38u));
    /* 0062ea58: mov edx, dword ptr [ebp + 0x3c] */ r_edx = R32((u32)(r_ebp+0x3cu));
    /* 0062ea5b: mov dword ptr [ebp + 0x33c], eax */ W32((u32)(r_ebp+0x33cu), r_eax);
    /* 0062ea61: mov eax, dword ptr [ebp + 0x40] */ r_eax = R32((u32)(r_ebp+0x40u));
    /* 0062ea64: mov dword ptr [ebp + 0x340], edx */ W32((u32)(r_ebp+0x340u), r_edx);
    /* 0062ea6a: mov dword ptr [ebp + 0x344], eax */ W32((u32)(r_ebp+0x344u), r_eax);
    /* 0062ea70: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062ea71: ret 4 */ FN_RET(0x0062ea3c); r_esp += 8; return;
}

void f_0062ea74(void) /* sub_62EA74 */
{
    FN_ENTER(0x0062ea74);
    /* 0062ea74: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0062ea75: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062ea76: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0062ea78: mov edi, dword ptr [ebp + 0x14] */ r_edi = R32((u32)(r_ebp+0x14u));
    /* 0062ea7b: mov eax, dword ptr [ebp + 0xa4] */ r_eax = R32((u32)(r_ebp+0xa4u));
    /* 0062ea81: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062ea83: je 0x62eabc */ if (fZ) goto L_0062eabc;
L_0062ea85:; BB(0x0062ea85);
    /* 0062ea85: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0062ea88: je 0x62ea8d */ if (fZ) goto L_0062ea8d;
L_0062ea8a:; BB(0x0062ea8a);
    /* 0062ea8a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062ea8b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062ea8c: ret  */ FN_RET(0x0062ea74); r_esp += 4; return;
L_0062ea8d:; BB(0x0062ea8d);
    /* 0062ea8d: movzx eax, word ptr [ebp + 0xa8] */ r_eax = (u32)R16((u32)(r_ebp+0xa8u));
    /* 0062ea94: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062ea95: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0062ea96: call 0x6945fc */ r_esp -= 4; W32(r_esp, 0x62ea9bu); f_006945fc();
    /* 0062ea9b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0062ea9e: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0062eaa4: mov dword ptr [ebp + 0x38], eax */ W32((u32)(r_ebp+0x38u), r_eax);
    /* 0062eaa7: mov edx, dword ptr [edi + 0x340] */ r_edx = R32((u32)(r_edi+0x340u));
    /* 0062eaad: mov dword ptr [ebp + 0x3c], edx */ W32((u32)(r_ebp+0x3cu), r_edx);
    /* 0062eab0: mov edi, dword ptr [edi + 0x344] */ r_edi = R32((u32)(r_edi+0x344u));
    /* 0062eab6: mov dword ptr [ebp + 0x40], edi */ W32((u32)(r_ebp+0x40u), r_edi);
    /* 0062eab9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062eaba: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062eabb: ret  */ FN_RET(0x0062ea74); r_esp += 4; return;
L_0062eabc:; BB(0x0062eabc);
    /* 0062eabc: movzx eax, word ptr [ebp + 0xa8] */ r_eax = (u32)R16((u32)(r_ebp+0xa8u));
    /* 0062eac3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062eac4: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x62eac9u); f_0068d5a8();
    /* 0062eac9: mov edi, eax */ r_edi = r_eax;
    /* 0062eacb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062eace: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0062ead0: je 0x62ea8a */ if (fZ) goto L_0062ea8a;
L_0062ead2:; BB(0x0062ead2);
    /* 0062ead2: movsx edx, word ptr [edi + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0062ead9: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0062eadc: jne 0x62ea8a */ if (!fZ) goto L_0062ea8a;
L_0062eade:; BB(0x0062eade);
    /* 0062eade: mov edx, dword ptr [edi + 0x33c] */ r_edx = R32((u32)(r_edi+0x33cu));
    /* 0062eae4: test edx, 0x10000 */ {  u32 a = r_edx; u32 b = 0x10000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062eaea: je 0x62eaf3 */ if (fZ) goto L_0062eaf3;
L_0062eaec:; BB(0x0062eaec);
    /* 0062eaec: mov edx, 1 */ r_edx = 0x1u;
    /* 0062eaf1: jmp 0x62eaf5 */ goto L_0062eaf5;
L_0062eaf3:; BB(0x0062eaf3);
    /* 0062eaf3: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_0062eaf5:; BB(0x0062eaf5);
    /* 0062eaf5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0062eaf7: je 0x62ea8a */ if (fZ) goto L_0062ea8a;
L_0062eaf9:; BB(0x0062eaf9);
    /* 0062eaf9: lea eax, [ebp + 0x38] */ r_eax = (u32)(r_ebp+0x38u);
    /* 0062eafc: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 0062eaff: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062eb00: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062eb01: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x62eb06u); f_007a9180();
    /* 0062eb06: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 0062eb09: fcomp dword ptr [0x932bc0] */ fx_compare(ST(0), R_F32((u32)(0x932bc0u))); FPOP();
    /* 0062eb0f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0062eb11: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0062eb12: jbe 0x62eb32 */ if ((fC||fZ)) goto L_0062eb32;
L_0062eb14:; BB(0x0062eb14);
    /* 0062eb14: mov ecx, edi */ r_ecx = r_edi;
    /* 0062eb16: call 0x7ba980 */ r_esp -= 4; W32(r_esp, 0x62eb1bu); f_007ba980();
    /* 0062eb1b: mov edi, eax */ r_edi = r_eax;
    /* 0062eb1d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0062eb1f: call 0x7ba980 */ r_esp -= 4; W32(r_esp, 0x62eb24u); f_007ba980();
    /* 0062eb24: movsx edx, di */ r_edx = (u32)(i32)(i16)(u16)r_edi;
    /* 0062eb27: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0062eb2a: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0062eb2c: jne 0x62ea8a */ if (!fZ) goto L_0062ea8a;
L_0062eb32:; BB(0x0062eb32);
    /* 0062eb32: mov dword ptr [ebp + 0xa4], 2 */ W32((u32)(r_ebp+0xa4u), 0x2u);
    /* 0062eb3c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062eb3d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062eb3e: ret  */ FN_RET(0x0062ea74); r_esp += 4; return;
}

void f_0062eb40(void) /* sub_62EB40 */
{
    FN_ENTER(0x0062eb40);
    /* 0062eb40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062eb41: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0062eb42: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0062eb44: movsx eax, word ptr [0xa48a38] */ r_eax = (u32)(i32)(i16)R16((u32)(0xa48a38u));
    /* 0062eb4b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062eb4c: call 0x4d30cc */ r_esp -= 4; W32(r_esp, 0x62eb51u); f_004d30cc();
    /* 0062eb51: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062eb52: movzx edx, word ptr [ebp + 0xa8] */ r_edx = (u32)R16((u32)(r_ebp+0xa8u));
    /* 0062eb59: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 0062eb5c: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0062eb5e: jne 0x62eb6b */ if (!fZ) goto L_0062eb6b;
L_0062eb60:; BB(0x0062eb60);
    /* 0062eb60: mov eax, dword ptr [ebp + 0xa4] */ r_eax = R32((u32)(r_ebp+0xa4u));
    /* 0062eb66: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0062eb69: je 0x62eb6e */ if (fZ) goto L_0062eb6e;
L_0062eb6b:; BB(0x0062eb6b);
    /* 0062eb6b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062eb6c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062eb6d: ret  */ FN_RET(0x0062eb40); r_esp += 4; return;
L_0062eb6e:; BB(0x0062eb6e);
    /* 0062eb6e: push 0x41a00000 */ { u32 v = 0x41a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0062eb73: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0062eb75: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0062eb78: push 0x43c80000 */ { u32 v = 0x43c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0062eb7d: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x62eb80u); call_ind(t); }
    /* 0062eb80: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0062eb82: je 0x62eb6b */ if (fZ) goto L_0062eb6b;
L_0062eb84:; BB(0x0062eb84);
    /* 0062eb84: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x62eb89u); f_0082d7b0();
    /* 0062eb89: mov ebx, dword ptr [ebp + 0x14] */ r_ebx = R32((u32)(r_ebp+0x14u));
    /* 0062eb8c: lea ecx, [ebp + 0x38] */ r_ecx = (u32)(r_ebp+0x38u);
    /* 0062eb8f: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x62eb94u); f_0082d838();
    /* 0062eb94: mov edx, dword ptr [ebp + 0x60] */ r_edx = R32((u32)(r_ebp+0x60u));
    /* 0062eb97: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0062eb99: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x62eb9eu); f_0082d8bc();
    /* 0062eb9e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0062eba0: call 0x62e0a8 */ r_esp -= 4; W32(r_esp, 0x62eba5u); f_0062e0a8();
    /* 0062eba5: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x62ebaau); f_0082dbac();
    /* 0062ebaa: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 0062ebaf: mov dword ptr [0xaab518], eax */ W32((u32)(0xaab518u), r_eax);
    /* 0062ebb4: or eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0062ebb7: add ebp, 0x94 */ {  u32 a = r_ebp; u32 b = 0x94u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0062ebbd: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 0062ebc2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062ebc3: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x62ebc8u); f_0082d710();
    /* 0062ebc8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062ebc9: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0062ebcb: call 0x62e0c0 */ r_esp -= 4; W32(r_esp, 0x62ebd0u); f_0062e0c0();
    /* 0062ebd0: push 0x9ff9b0 */ { u32 v = 0x9ff9b0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062ebd5: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x62ebdau); f_0082d710();
    /* 0062ebda: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062ebdb: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
    /* 0062ebe0: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 0062ebe5: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x62ebeau); f_0082dab0();
    /* 0062ebea: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x62ebefu); f_0082da80();
    /* 0062ebef: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062ebf0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062ebf1: ret  */ FN_RET(0x0062eb40); r_esp += 4; return;
}

void f_0062ed74(void) /* sub_62ED74 */
{
    FN_ENTER(0x0062ed74);
    /* 0062ed74: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0062ed75: mov esi, ecx */ r_esi = r_ecx;
    /* 0062ed77: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0062ed7b: mov ecx, esi */ r_ecx = r_esi;
    /* 0062ed7d: call 0x770748 */ r_esp -= 4; W32(r_esp, 0x62ed82u); f_00770748();
    /* 0062ed82: mov dword ptr [esi], 0xb2a440 */ W32((u32)(r_esi), 0xb2a440u);
    /* 0062ed88: mov edx, dword ptr [0x9c6058] */ r_edx = R32((u32)(0x9c6058u));
    /* 0062ed8e: mov dword ptr [esi + 4], edx */ W32((u32)(r_esi+0x4u), r_edx);
    /* 0062ed91: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0062ed93: mov dword ptr [esi + 0x358], 0 */ W32((u32)(r_esi+0x358u), 0x0u);
    /* 0062ed9d: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 0062eda2: mov word ptr [esi + 0x330], dx */ W16((u32)(r_esi+0x330u), (u16)r_edx);
    /* 0062eda9: mov dword ptr [esi + 0x354], 0 */ W32((u32)(r_esi+0x354u), 0x0u);
    /* 0062edb3: mov dword ptr [esi + 0x35c], edx */ W32((u32)(r_esi+0x35cu), r_edx);
    /* 0062edb9: mov word ptr [esi + 0x364], ax */ W16((u32)(r_esi+0x364u), (u16)r_eax);
    /* 0062edc0: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 0062edc3: mov dword ptr [esi + 0x360], 0 */ W32((u32)(r_esi+0x360u), 0x0u);
    /* 0062edcd: or eax, 0x60000000 */ {  u32 a = r_eax; u32 b = 0x60000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0062edd2: mov dword ptr [esi + 0x348], edx */ W32((u32)(r_esi+0x348u), r_edx);
    /* 0062edd8: mov dword ptr [esi + 0x368], 0 */ W32((u32)(r_esi+0x368u), 0x0u);
    /* 0062ede2: mov dword ptr [esi + 0x378], edx */ W32((u32)(r_esi+0x378u), r_edx);
    /* 0062ede8: and eax, 0xfffbffff */ {  u32 a = r_eax; u32 b = 0xfffbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0062eded: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 0062edf0: mov dword ptr [esi + 0x36c], 0 */ W32((u32)(r_esi+0x36cu), 0x0u);
    /* 0062edfa: mov eax, esi */ r_eax = r_esi;
    /* 0062edfc: mov dword ptr [esi + 0x370], 0 */ W32((u32)(r_esi+0x370u), 0x0u);
    /* 0062ee06: mov dword ptr [esi + 0x374], 0 */ W32((u32)(r_esi+0x374u), 0x0u);
    /* 0062ee10: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062ee11: ret 4 */ FN_RET(0x0062ed74); r_esp += 8; return;
}

void f_0062ee14(void) /* sub_62EE14 */
{
    FN_ENTER(0x0062ee14);
    /* 0062ee14: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0062ee15: mov edi, ecx */ r_edi = r_ecx;
    /* 0062ee17: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0062ee1b: mov ecx, edi */ r_ecx = r_edi;
    /* 0062ee1d: call 0x7ba278 */ r_esp -= 4; W32(r_esp, 0x62ee22u); f_007ba278();
    /* 0062ee22: movzx eax, word ptr [esp + 0xc] */ r_eax = (u32)R16((u32)(r_esp+0xcu));
    /* 0062ee27: mov dword ptr [edi], 0xb2a740 */ W32((u32)(r_edi), 0xb2a740u);
    /* 0062ee2d: mov edx, dword ptr [0x9c6060] */ r_edx = R32((u32)(0x9c6060u));
    /* 0062ee33: mov dword ptr [edi + 0x94], 0 */ W32((u32)(r_edi+0x94u), 0x0u);
    /* 0062ee3d: mov dword ptr [edi + 4], edx */ W32((u32)(r_edi+0x4u), r_edx);
    /* 0062ee40: mov word ptr [edi + 0xa8], ax */ W16((u32)(r_edi+0xa8u), (u16)r_eax);
    /* 0062ee47: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0062ee49: mov dword ptr [edi + 0x98], 0 */ W32((u32)(r_edi+0x98u), 0x0u);
    /* 0062ee53: mov dword ptr [edi + 0xa4], eax */ W32((u32)(r_edi+0xa4u), r_eax);
    /* 0062ee59: mov dword ptr [edi + 0x90], eax */ W32((u32)(r_edi+0x90u), r_eax);
    /* 0062ee5f: mov eax, edi */ r_eax = r_edi;
    /* 0062ee61: mov dword ptr [edi + 0x9c], 0 */ W32((u32)(r_edi+0x9cu), 0x0u);
    /* 0062ee6b: mov dword ptr [edi + 0xa0], 0 */ W32((u32)(r_edi+0xa0u), 0x0u);
    /* 0062ee75: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062ee76: ret 8 */ FN_RET(0x0062ee14); r_esp += 12; return;
}

void f_0062ee7c(void) /* sub_62EE7C */
{
    FN_ENTER(0x0062ee7c);
    /* 0062ee7c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062ee7d: mov ebp, esp */ r_ebp = r_esp;
    /* 0062ee7f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0062ee81: push 0x8e35e0 */ { u32 v = 0x8e35e0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062ee86: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0062ee8c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062ee8d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0062ee94: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062ee97: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0062ee9a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0062ee9d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0062eea0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0062eea3: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0062eea6: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062eea9: mov dword ptr [ecx], 0xb2a440 */ W32((u32)(r_ecx), 0xb2a440u);
    /* 0062eeaf: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0062eeb6: call 0x770660 */ r_esp -= 4; W32(r_esp, 0x62eebbu); f_00770660();
    /* 0062eebb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062eebe: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0062eec5: mov esp, ebp */ r_esp = r_ebp;
    /* 0062eec7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062eec8: ret  */ FN_RET(0x0062ee7c); r_esp += 4; return;
}

void f_0062eecc(void) /* sub_62EECC */
{
    FN_ENTER(0x0062eecc);
    /* 0062eecc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062eecd: mov ebp, esp */ r_ebp = r_esp;
    /* 0062eecf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0062eed1: push 0x8e35fc */ { u32 v = 0x8e35fcu; r_esp -= 4; W32(r_esp, v); }
    /* 0062eed6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0062eedc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062eedd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0062eee4: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062eee7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0062eeea: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0062eeed: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0062eef0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0062eef3: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0062eef6: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062eef9: mov dword ptr [ecx], 0xb2a740 */ W32((u32)(r_ecx), 0xb2a740u);
    /* 0062eeff: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0062ef06: call 0x7ba1f0 */ r_esp -= 4; W32(r_esp, 0x62ef0bu); f_007ba1f0();
    /* 0062ef0b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062ef0e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0062ef15: mov esp, ebp */ r_esp = r_ebp;
    /* 0062ef17: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062ef18: ret  */ FN_RET(0x0062eecc); r_esp += 4; return;
}

void f_0062ef1c(void) /* sub_62EF1C */
{
    FN_ENTER(0x0062ef1c);
    /* 0062ef1c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0062ef1d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0062ef1e: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062ef21: mov esi, ecx */ r_esi = r_ecx;
    /* 0062ef23: mov edi, dword ptr [esi + 0x14] */ r_edi = R32((u32)(r_esi+0x14u));
    /* 0062ef26: mov eax, dword ptr [esi + 0xa4] */ r_eax = R32((u32)(r_esi+0xa4u));
    /* 0062ef2c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062ef2e: je 0x62ef69 */ if (fZ) goto L_0062ef69;
L_0062ef30:; BB(0x0062ef30);
    /* 0062ef30: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062ef33: je 0x62ef3b */ if (fZ) goto L_0062ef3b;
L_0062ef35:; BB(0x0062ef35);
    /* 0062ef35: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0062ef38: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062ef39: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062ef3a: ret  */ FN_RET(0x0062ef1c); r_esp += 4; return;
L_0062ef3b:; BB(0x0062ef3b);
    /* 0062ef3b: movzx eax, word ptr [esi + 0xa8] */ r_eax = (u32)R16((u32)(r_esi+0xa8u));
    /* 0062ef42: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062ef43: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0062ef44: call 0x6945fc */ r_esp -= 4; W32(r_esp, 0x62ef49u); f_006945fc();
    /* 0062ef49: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062ef4c: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0062ef52: mov dword ptr [esi + 0x38], eax */ W32((u32)(r_esi+0x38u), r_eax);
    /* 0062ef55: mov edx, dword ptr [edi + 0x340] */ r_edx = R32((u32)(r_edi+0x340u));
    /* 0062ef5b: mov dword ptr [esi + 0x3c], edx */ W32((u32)(r_esi+0x3cu), r_edx);
    /* 0062ef5e: mov edi, dword ptr [edi + 0x344] */ r_edi = R32((u32)(r_edi+0x344u));
    /* 0062ef64: mov dword ptr [esi + 0x40], edi */ W32((u32)(r_esi+0x40u), r_edi);
    /* 0062ef67: jmp 0x62ef35 */ goto L_0062ef35;
L_0062ef69:; BB(0x0062ef69);
    /* 0062ef69: mov eax, dword ptr [0x9c6094] */ r_eax = R32((u32)(0x9c6094u));
    /* 0062ef6e: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0062ef70: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062ef73: jne 0x62ef35 */ if (!fZ) goto L_0062ef35;
L_0062ef75:; BB(0x0062ef75);
    /* 0062ef75: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 0062ef79: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 0062ef7c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062ef7e: mov ebx, eax */ r_ebx = r_eax;
L_0062ef80:; BB(0x0062ef80);
    /* 0062ef80: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0062ef81: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x62ef86u); f_0068d5a8();
    /* 0062ef86: mov ebp, eax */ r_ebp = r_eax;
    /* 0062ef88: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062ef8b: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062ef8d: je 0x62f025 */ if (fZ) goto L_0062f025;
L_0062ef93:; BB(0x0062ef93);
    /* 0062ef93: movsx edx, word ptr [ebp + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 0062ef9a: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062ef9d: jne 0x62f025 */ if (!fZ) goto L_0062f025;
L_0062efa3:; BB(0x0062efa3);
    /* 0062efa3: mov edx, dword ptr [ebp + 0x33c] */ r_edx = R32((u32)(r_ebp+0x33cu));
    /* 0062efa9: test edx, 0x10000 */ {  u32 a = r_edx; u32 b = 0x10000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062efaf: je 0x62efb8 */ if (fZ) goto L_0062efb8;
L_0062efb1:; BB(0x0062efb1);
    /* 0062efb1: mov edx, 1 */ r_edx = 0x1u;
    /* 0062efb6: jmp 0x62efba */ goto L_0062efba;
L_0062efb8:; BB(0x0062efb8);
    /* 0062efb8: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_0062efba:; BB(0x0062efba);
    /* 0062efba: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062efbc: jne 0x62efd6 */ if (!fZ) goto L_0062efd6;
L_0062efbe:; BB(0x0062efbe);
    /* 0062efbe: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x62efc3u); f_00687c48();
    /* 0062efc3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062efc5: je 0x62f025 */ if (fZ) goto L_0062f025;
L_0062efc7:; BB(0x0062efc7);
    /* 0062efc7: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0062efcb: movzx eax, word ptr [esi + 0xac] */ r_eax = (u32)R16((u32)(r_esi+0xacu));
    /* 0062efd2: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062efd4: jne 0x62f025 */ if (!fZ) goto L_0062f025;
L_0062efd6:; BB(0x0062efd6);
    /* 0062efd6: lea eax, [esi + 0x38] */ r_eax = (u32)(r_esi+0x38u);
    /* 0062efd9: lea edx, [ebp + 0x38] */ r_edx = (u32)(r_ebp+0x38u);
    /* 0062efdc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062efdd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062efde: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x62efe3u); f_007a9180();
    /* 0062efe3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062efe6: fcomp dword ptr [0x932bc0] */ fx_compare(ST(0), R_F32((u32)(0x932bc0u))); FPOP();
    /* 0062efec: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0062efee: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0062efef: jbe 0x62f011 */ if ((fC||fZ)) goto L_0062f011;
L_0062eff1:; BB(0x0062eff1);
    /* 0062eff1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0062eff3: call 0x7ba980 */ r_esp -= 4; W32(r_esp, 0x62eff8u); f_007ba980();
    /* 0062eff8: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0062effc: mov ecx, esi */ r_ecx = r_esi;
    /* 0062effe: call 0x7ba980 */ r_esp -= 4; W32(r_esp, 0x62f003u); f_007ba980();
    /* 0062f003: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 0062f007: movsx edx, dx */ r_edx = (u32)(i32)(i16)(u16)r_edx;
    /* 0062f00a: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0062f00d: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062f00f: jne 0x62f025 */ if (!fZ) goto L_0062f025;
L_0062f011:; BB(0x0062f011);
    /* 0062f011: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0062f015: movzx ebp, word ptr [esi + 0xa8] */ r_ebp = (u32)R16((u32)(r_esi+0xa8u));
    /* 0062f01c: cmp edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062f01e: jne 0x62f025 */ if (!fZ) goto L_0062f025;
L_0062f020:; BB(0x0062f020);
    /* 0062f020: mov edi, 1 */ r_edi = 0x1u;
L_0062f025:; BB(0x0062f025);
    /* 0062f025: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0062f028: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062f02b: jl 0x62ef80 */ if ((fS!=fO)) goto L_0062ef80;
L_0062f031:; BB(0x0062f031);
    /* 0062f031: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 0062f035: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
    /* 0062f038: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062f03a: je 0x62ef35 */ if (fZ) goto L_0062ef35;
L_0062f040:; BB(0x0062f040);
    /* 0062f040: mov dword ptr [esi + 0xa4], 2 */ W32((u32)(r_esi+0xa4u), 0x2u);
    /* 0062f04a: jmp 0x62ef35 */ goto L_0062ef35;
}

