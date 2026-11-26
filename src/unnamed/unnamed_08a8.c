#include "protos.h"

void f_008a81c0(void) /* sub_8A81C0 */
{
    FN_ENTER(0x008a81c0);
    /* 008a81c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008a81c1: mov ebp, esp */ r_ebp = r_esp;
    /* 008a81c3: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008a81c6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008a81c7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a81c8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008a81c9: mov esi, 0x99dd30 */ r_esi = 0x99dd30u;
    /* 008a81ce: lea edi, [ebp - 0x18] */ r_edi = (u32)(r_ebp+0xffffffe8u);
    /* 008a81d1: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 008a81d2: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 008a81d3: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 008a81d4: movsb byte ptr es:[edi], byte ptr [esi] */ W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1;
    /* 008a81d5: mov esi, 0x99dd20 */ r_esi = 0x99dd20u;
    /* 008a81da: lea edi, [ebp - 0x28] */ r_edi = (u32)(r_ebp+0xffffffd8u);
    /* 008a81dd: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 008a81de: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 008a81df: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 008a81e0: movsb byte ptr es:[edi], byte ptr [esi] */ W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1;
    /* 008a81e1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008a81e3: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 008a81e5: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008a81e7: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008a81e9: cpuid  */ { u32 a, b, c, d; rt_cpuid(r_eax, r_ecx, &a, &b, &c, &d); r_eax = a; r_ebx = b; r_ecx = c; r_edx = d; }
    /* 008a81eb: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 008a81f2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008a81f4: cpuid  */ { u32 a, b, c, d; rt_cpuid(r_eax, r_ecx, &a, &b, &c, &d); r_eax = a; r_ebx = b; r_ecx = c; r_edx = d; }
    /* 008a81f6: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 008a81f9: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 008a81fc: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 008a81ff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a8201: je 0x8a828d */ if (fZ) goto L_008a828d;
L_008a8207:; BB(0x008a8207);
    /* 008a8207: or dword ptr [ebp - 4], 2 */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 008a820b: mov eax, 1 */ r_eax = 0x1u;
    /* 008a8210: cpuid  */ { u32 a, b, c, d; rt_cpuid(r_eax, r_ecx, &a, &b, &c, &d); r_eax = a; r_ebx = b; r_ecx = c; r_edx = d; }
    /* 008a8212: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 008a8215: mov ecx, 0x800000 */ r_ecx = 0x800000u;
    /* 008a821a: and ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008a821c: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); fC = (b != 0); }
    /* 008a821e: sbb ecx, ecx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r;  }
    /* 008a8220: and ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008a8223: or dword ptr [ebp - 4], ecx */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 008a8226: mov eax, 0x80000000 */ r_eax = 0x80000000u;
    /* 008a822b: cpuid  */ { u32 a, b, c, d; rt_cpuid(r_eax, r_ecx, &a, &b, &c, &d); r_eax = a; r_ebx = b; r_ecx = c; r_edx = d; }
    /* 008a822d: cmp eax, 0x80000000 */ {  u32 a = r_eax; u32 b = 0x80000000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008a8232: jbe 0x8a828d */ if ((fC||fZ)) goto L_008a828d;
L_008a8234:; BB(0x008a8234);
    /* 008a8234: or dword ptr [ebp - 4], 4 */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 008a8238: mov eax, 0x80000001 */ r_eax = 0x80000001u;
    /* 008a823d: cpuid  */ { u32 a, b, c, d; rt_cpuid(r_eax, r_ecx, &a, &b, &c, &d); r_eax = a; r_ebx = b; r_ecx = c; r_edx = d; }
    /* 008a823f: mov ecx, 0x80000000 */ r_ecx = 0x80000000u;
    /* 008a8244: and ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008a8246: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); fC = (b != 0); }
    /* 008a8248: sbb ecx, ecx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r;  }
    /* 008a824a: and ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008a8250: or dword ptr [ebp - 4], ecx */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a8253: lea esi, [ebp - 0x28] */ r_esi = (u32)(r_ebp+0xffffffd8u);
    /* 008a8256: lea edi, [ebp - 0x18] */ r_edi = (u32)(r_ebp+0xffffffe8u);
    /* 008a8259: mov ecx, 0xc */ r_ecx = 0xcu;
    /* 008a825e: cld  */ rt_df = 0;
    /* 008a825f: repe cmpsb byte ptr [esi], byte ptr es:[edi] */ while (r_ecx) { { u32 a = R8(r_esi); u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (!fZ) break; }
    /* 008a8261: jne 0x8a828d */ if (!fZ) goto L_008a828d;
L_008a8263:; BB(0x008a8263);
    /* 008a8263: mov ecx, 0x40000000 */ r_ecx = 0x40000000u;
    /* 008a8268: and ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008a826a: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); fC = (b != 0); }
    /* 008a826c: sbb ecx, ecx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r;  }
    /* 008a826e: and ecx, 0x100 */ {  u32 a = r_ecx; u32 b = 0x100u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008a8274: or dword ptr [ebp - 4], ecx */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 008a8277: mov ecx, 0x400000 */ r_ecx = 0x400000u;
    /* 008a827c: and ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008a827e: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); fC = (b != 0); }
    /* 008a8280: sbb ecx, ecx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r;  }
    /* 008a8282: and ecx, 0x200 */ {  u32 a = r_ecx; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008a8288: or dword ptr [ebp - 4], ecx */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a828b: jmp 0x8a828d */ goto L_008a828d;
L_008a828d:; BB(0x008a828d);
    /* 008a828d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 008a8290: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008a8291: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008a8292: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008a8293: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008a8294: ret  */ FN_RET(0x008a81c0); r_esp += 4; return;
}

void f_008a8295(void) /* sub_8A8295 */
{
    FN_ENTER(0x008a8295);
    /* 008a8295: call 0x8a81c0 */ r_esp -= 4; W32(r_esp, 0x8a829au); f_008a81c0();
    /* 008a829a: test al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a829c: je 0x8a84ba */ if (fZ) goto L_008a84ba;
L_008a82a2:; BB(0x008a82a2);
    /* 008a82a2: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a82a4: jns 0x8a84ba */ if (!fS) goto L_008a84ba;
L_008a82aa:; BB(0x008a82aa);
    /* 008a82aa: test ah, 1 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a82ad: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 008a82b1: mov dword ptr [ecx], 0x8b3e08 */ W32((u32)(r_ecx), 0x8b3e08u);
    /* 008a82b7: mov dword ptr [ecx + 4], 0x8b334a */ W32((u32)(r_ecx+0x4u), 0x8b334au);
    /* 008a82be: mov dword ptr [ecx + 8], 0x8b40c9 */ W32((u32)(r_ecx+0x8u), 0x8b40c9u);
    /* 008a82c5: mov dword ptr [ecx + 0xc], 0x8af59a */ W32((u32)(r_ecx+0xcu), 0x8af59au);
    /* 008a82cc: mov dword ptr [ecx + 0x14], 0x8b3e5d */ W32((u32)(r_ecx+0x14u), 0x8b3e5du);
    /* 008a82d3: mov dword ptr [ecx + 0x18], 0x8b33bb */ W32((u32)(r_ecx+0x18u), 0x8b33bbu);
    /* 008a82da: mov dword ptr [ecx + 0x1c], 0x8b3422 */ W32((u32)(r_ecx+0x1cu), 0x8b3422u);
    /* 008a82e1: mov dword ptr [ecx + 0x20], 0x8b414b */ W32((u32)(r_ecx+0x20u), 0x8b414bu);
    /* 008a82e8: mov dword ptr [ecx + 0x24], 0x8b3e96 */ W32((u32)(r_ecx+0x24u), 0x8b3e96u);
    /* 008a82ef: mov dword ptr [ecx + 0x28], 0x8b3902 */ W32((u32)(r_ecx+0x28u), 0x8b3902u);
    /* 008a82f6: mov dword ptr [ecx + 0x2c], 0x8af7cc */ W32((u32)(r_ecx+0x2cu), 0x8af7ccu);
    /* 008a82fd: mov dword ptr [ecx + 0x30], 0x8b44f3 */ W32((u32)(r_ecx+0x30u), 0x8b44f3u);
    /* 008a8304: mov dword ptr [ecx + 0x34], 0x8b4536 */ W32((u32)(r_ecx+0x34u), 0x8b4536u);
    /* 008a830b: mov dword ptr [ecx + 0x38], 0x8b3907 */ W32((u32)(r_ecx+0x38u), 0x8b3907u);
    /* 008a8312: mov dword ptr [ecx + 0x3c], 0x8b3a8f */ W32((u32)(r_ecx+0x3cu), 0x8b3a8fu);
    /* 008a8319: mov dword ptr [ecx + 0x40], 0x8b41aa */ W32((u32)(r_ecx+0x40u), 0x8b41aau);
    /* 008a8320: mov dword ptr [ecx + 0x44], 0x8b3efa */ W32((u32)(r_ecx+0x44u), 0x8b3efau);
    /* 008a8327: mov dword ptr [ecx + 0x48], 0x8b332e */ W32((u32)(r_ecx+0x48u), 0x8b332eu);
    /* 008a832e: mov dword ptr [ecx + 0x4c], 0x8ae030 */ W32((u32)(r_ecx+0x4cu), 0x8ae030u);
    /* 008a8335: mov dword ptr [ecx + 0x50], 0x8ae0c9 */ W32((u32)(r_ecx+0x50u), 0x8ae0c9u);
    /* 008a833c: mov dword ptr [ecx + 0x54], 0x8b46d8 */ W32((u32)(r_ecx+0x54u), 0x8b46d8u);
    /* 008a8343: mov dword ptr [ecx + 0x58], 0x8b461a */ W32((u32)(r_ecx+0x58u), 0x8b461au);
    /* 008a834a: mov dword ptr [ecx + 0x5c], 0x8ae126 */ W32((u32)(r_ecx+0x5cu), 0x8ae126u);
    /* 008a8351: mov dword ptr [ecx + 0x60], 0x8ae1d9 */ W32((u32)(r_ecx+0x60u), 0x8ae1d9u);
    /* 008a8358: mov dword ptr [ecx + 0x64], 0x8ae60a */ W32((u32)(r_ecx+0x64u), 0x8ae60au);
    /* 008a835f: mov dword ptr [ecx + 0x68], 0x8af89b */ W32((u32)(r_ecx+0x68u), 0x8af89bu);
    /* 008a8366: mov dword ptr [ecx + 0x6c], 0x8af8eb */ W32((u32)(r_ecx+0x6cu), 0x8af8ebu);
    /* 008a836d: mov dword ptr [ecx + 0x70], 0x8af9d6 */ W32((u32)(r_ecx+0x70u), 0x8af9d6u);
    /* 008a8374: mov dword ptr [ecx + 0x74], 0x8ae6cf */ W32((u32)(r_ecx+0x74u), 0x8ae6cfu);
    /* 008a837b: mov dword ptr [ecx + 0x78], 0x8afab2 */ W32((u32)(r_ecx+0x78u), 0x8afab2u);
    /* 008a8382: mov dword ptr [ecx + 0x7c], 0x8afb15 */ W32((u32)(r_ecx+0x7cu), 0x8afb15u);
    /* 008a8389: mov dword ptr [ecx + 0x80], 0x8afb73 */ W32((u32)(r_ecx+0x80u), 0x8afb73u);
    /* 008a8393: mov dword ptr [ecx + 0x84], 0x8afbcc */ W32((u32)(r_ecx+0x84u), 0x8afbccu);
    /* 008a839d: mov dword ptr [ecx + 0x88], 0x8b473c */ W32((u32)(r_ecx+0x88u), 0x8b473cu);
    /* 008a83a7: mov dword ptr [ecx + 0x8c], 0x8ae73b */ W32((u32)(r_ecx+0x8cu), 0x8ae73bu);
    /* 008a83b1: mov dword ptr [ecx + 0x90], 0x8ae872 */ W32((u32)(r_ecx+0x90u), 0x8ae872u);
    /* 008a83bb: mov dword ptr [ecx + 0x94], 0x8afc13 */ W32((u32)(r_ecx+0x94u), 0x8afc13u);
    /* 008a83c5: mov dword ptr [ecx + 0x98], 0x8afcbb */ W32((u32)(r_ecx+0x98u), 0x8afcbbu);
    /* 008a83cf: mov dword ptr [ecx + 0x9c], 0x8afe42 */ W32((u32)(r_ecx+0x9cu), 0x8afe42u);
    /* 008a83d9: mov dword ptr [ecx + 0xa0], 0x8b0fda */ W32((u32)(r_ecx+0xa0u), 0x8b0fdau);
    /* 008a83e3: mov dword ptr [ecx + 0xa4], 0x8b117f */ W32((u32)(r_ecx+0xa4u), 0x8b117fu);
    /* 008a83ed: mov dword ptr [ecx + 0xa8], 0x8b16b3 */ W32((u32)(r_ecx+0xa8u), 0x8b16b3u);
    /* 008a83f7: mov dword ptr [ecx + 0xac], 0x8ae8ff */ W32((u32)(r_ecx+0xacu), 0x8ae8ffu);
    /* 008a8401: mov dword ptr [ecx + 0xb0], 0x8ae991 */ W32((u32)(r_ecx+0xb0u), 0x8ae991u);
    /* 008a840b: mov dword ptr [ecx + 0xd8], 0x8b42dc */ W32((u32)(r_ecx+0xd8u), 0x8b42dcu);
    /* 008a8415: mov dword ptr [ecx + 0xcc], 0x8b3481 */ W32((u32)(r_ecx+0xccu), 0x8b3481u);
    /* 008a841f: mov dword ptr [ecx + 0xc0], 0x8b3f92 */ W32((u32)(r_ecx+0xc0u), 0x8b3f92u);
    /* 008a8429: mov dword ptr [ecx + 0xb8], 0x8b3fdb */ W32((u32)(r_ecx+0xb8u), 0x8b3fdbu);
    /* 008a8433: mov dword ptr [ecx + 0xd0], 0x8b434d */ W32((u32)(r_ecx+0xd0u), 0x8b434du);
    /* 008a843d: mov dword ptr [ecx + 0xc4], 0x8b34f2 */ W32((u32)(r_ecx+0xc4u), 0x8b34f2u);
    /* 008a8447: mov dword ptr [ecx + 0xdc], 0x8ae9f5 */ W32((u32)(r_ecx+0xdcu), 0x8ae9f5u);
    /* 008a8451: mov dword ptr [ecx + 0xe0], 0x8aea9c */ W32((u32)(r_ecx+0xe0u), 0x8aea9cu);
    /* 008a845b: mov dword ptr [ecx + 0xd4], 0x8b4415 */ W32((u32)(r_ecx+0xd4u), 0x8b4415u);
    /* 008a8465: mov dword ptr [ecx + 0xbc], 0x8b401e */ W32((u32)(r_ecx+0xbcu), 0x8b401eu);
    /* 008a846f: mov dword ptr [ecx + 0xc8], 0x8b35c6 */ W32((u32)(r_ecx+0xc8u), 0x8b35c6u);
    /* 008a8479: mov dword ptr [ecx + 0x10], 0x8b2c02 */ W32((u32)(r_ecx+0x10u), 0x8b2c02u);
    /* 008a8480: mov dword ptr [ecx + 0xb4], 0x8aeb41 */ W32((u32)(r_ecx+0xb4u), 0x8aeb41u);
    /* 008a848a: je 0x8a84ba */ if (fZ) goto L_008a84ba;
L_008a848c:; BB(0x008a848c);
    /* 008a848c: test ah, 2 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a848f: je 0x8a84ba */ if (fZ) goto L_008a84ba;
L_008a8491:; BB(0x008a8491);
    /* 008a8491: mov dword ptr [ecx + 0x3c], 0x8b3cb5 */ W32((u32)(r_ecx+0x3cu), 0x8b3cb5u);
    /* 008a8498: mov dword ptr [ecx + 0x48], 0x8b2920 */ W32((u32)(r_ecx+0x48u), 0x8b2920u);
    /* 008a849f: mov dword ptr [ecx + 0x98], 0x8afd8d */ W32((u32)(r_ecx+0x98u), 0x8afd8du);
    /* 008a84a9: mov dword ptr [ecx + 0x9c], 0x8b17cc */ W32((u32)(r_ecx+0x9cu), 0x8b17ccu);
    /* 008a84b3: mov dword ptr [ecx + 0x60], 0x8ae3f5 */ W32((u32)(r_ecx+0x60u), 0x8ae3f5u);
L_008a84ba:; BB(0x008a84ba);
    /* 008a84ba: ret  */ FN_RET(0x008a8295); r_esp += 4; return;
}

void f_008a84bb(void) /* sub_8A84BB */
{
    FN_ENTER(0x008a84bb);
    /* 008a84bb: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 008a84bf: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 008a84c3: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 008a84c7: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 008a84c9: fmul dword ptr [edx] */ ST(0) = ST(0) * R_F32((u32)(r_edx));
    /* 008a84cb: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 008a84cd: fmul dword ptr [edx + 8] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x8u));
    /* 008a84d0: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 008a84d2: fmul dword ptr [edx + 4] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x4u));
    /* 008a84d5: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 008a84d7: fmul dword ptr [edx + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0xcu));
    /* 008a84da: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 008a84dc: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 008a84df: fmul dword ptr [edx + 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x10u));
    /* 008a84e2: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 008a84e5: fmul dword ptr [edx + 0x18] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x18u));
    /* 008a84e8: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 008a84eb: fmul dword ptr [edx + 0x14] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x14u));
    /* 008a84ee: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 008a84f1: fmul dword ptr [edx + 0x1c] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x1cu));
    /* 008a84f4: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 008a84f6: faddp st(4) */ ST(4) = ST(4) + ST(0); FPOP();
    /* 008a84f8: faddp st(4) */ ST(4) = ST(4) + ST(0); FPOP();
    /* 008a84fa: faddp st(4) */ ST(4) = ST(4) + ST(0); FPOP();
    /* 008a84fc: faddp st(4) */ ST(4) = ST(4) + ST(0); FPOP();
    /* 008a84fe: fld dword ptr [edx + 0x30] */ FPUSH(R_F32((u32)(r_edx+0x30u)));
    /* 008a8501: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008a8503: fld dword ptr [edx + 0x34] */ FPUSH(R_F32((u32)(r_edx+0x34u)));
    /* 008a8506: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 008a8508: fld dword ptr [edx + 0x38] */ FPUSH(R_F32((u32)(r_edx+0x38u)));
    /* 008a850b: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 008a850d: fld dword ptr [edx + 0x3c] */ FPUSH(R_F32((u32)(r_edx+0x3cu)));
    /* 008a8510: faddp st(4) */ ST(4) = ST(4) + ST(0); FPOP();
    /* 008a8512: fstp dword ptr [ecx] */ W_F32((u32)(r_ecx), ST(0)); FPOP();
    /* 008a8514: fstp dword ptr [ecx + 4] */ W_F32((u32)(r_ecx+0x4u), ST(0)); FPOP();
    /* 008a8517: fstp dword ptr [ecx + 8] */ W_F32((u32)(r_ecx+0x8u), ST(0)); FPOP();
    /* 008a851a: fstp dword ptr [ecx + 0xc] */ W_F32((u32)(r_ecx+0xcu), ST(0)); FPOP();
    /* 008a851d: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 008a8521: ret 0xc */ FN_RET(0x008a84bb); r_esp += 16; return;
}

void f_008a8524(void) /* sub_8A8524 */
{
    FN_ENTER(0x008a8524);
    /* 008a8524: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 008a8528: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 008a852c: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 008a8530: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 008a8532: fmul dword ptr [edx] */ ST(0) = ST(0) * R_F32((u32)(r_edx));
    /* 008a8534: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 008a8536: fmul dword ptr [edx + 4] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x4u));
    /* 008a8539: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 008a853b: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 008a853e: fmul dword ptr [edx + 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x10u));
    /* 008a8541: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 008a8544: fmul dword ptr [edx + 0x14] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x14u));
    /* 008a8547: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 008a8549: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 008a854b: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 008a854d: fstp dword ptr [ecx] */ W_F32((u32)(r_ecx), ST(0)); FPOP();
    /* 008a854f: fstp dword ptr [ecx + 4] */ W_F32((u32)(r_ecx+0x4u), ST(0)); FPOP();
    /* 008a8552: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 008a8556: ret 0xc */ FN_RET(0x008a8524); r_esp += 16; return;
}

void f_008a8559(void)
{
    FN_ENTER(0x008a8559);
    /* 008a8559: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 008a855d: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 008a8561: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 008a8565: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 008a8567: fmul dword ptr [edx] */ ST(0) = ST(0) * R_F32((u32)(r_edx));
    /* 008a8569: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 008a856b: fmul dword ptr [edx + 8] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x8u));
    /* 008a856e: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 008a8570: fmul dword ptr [edx + 4] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x4u));
    /* 008a8573: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 008a8575: fmul dword ptr [edx + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0xcu));
    /* 008a8578: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 008a857a: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 008a857d: fmul dword ptr [edx + 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x10u));
    /* 008a8580: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 008a8583: fmul dword ptr [edx + 0x18] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x18u));
    /* 008a8586: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 008a8589: fmul dword ptr [edx + 0x14] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x14u));
    /* 008a858c: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 008a858f: fmul dword ptr [edx + 0x1c] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x1cu));
    /* 008a8592: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 008a8594: faddp st(4) */ ST(4) = ST(4) + ST(0); FPOP();
    /* 008a8596: faddp st(4) */ ST(4) = ST(4) + ST(0); FPOP();
    /* 008a8598: faddp st(4) */ ST(4) = ST(4) + ST(0); FPOP();
    /* 008a859a: faddp st(4) */ ST(4) = ST(4) + ST(0); FPOP();
    /* 008a859c: fld dword ptr [eax + 8] */ FPUSH(R_F32((u32)(r_eax+0x8u)));
    /* 008a859f: fmul dword ptr [edx + 0x20] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x20u));
    /* 008a85a2: fld dword ptr [eax + 8] */ FPUSH(R_F32((u32)(r_eax+0x8u)));
    /* 008a85a5: fmul dword ptr [edx + 0x28] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x28u));
    /* 008a85a8: fld dword ptr [eax + 8] */ FPUSH(R_F32((u32)(r_eax+0x8u)));
    /* 008a85ab: fmul dword ptr [edx + 0x24] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x24u));
    /* 008a85ae: fld dword ptr [eax + 8] */ FPUSH(R_F32((u32)(r_eax+0x8u)));
    /* 008a85b1: fmul dword ptr [edx + 0x2c] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x2cu));
    /* 008a85b4: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 008a85b6: faddp st(4) */ ST(4) = ST(4) + ST(0); FPOP();
    /* 008a85b8: faddp st(4) */ ST(4) = ST(4) + ST(0); FPOP();
    /* 008a85ba: faddp st(4) */ ST(4) = ST(4) + ST(0); FPOP();
    /* 008a85bc: faddp st(4) */ ST(4) = ST(4) + ST(0); FPOP();
    /* 008a85be: fld dword ptr [edx + 0x30] */ FPUSH(R_F32((u32)(r_edx+0x30u)));
    /* 008a85c1: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008a85c3: fld dword ptr [edx + 0x34] */ FPUSH(R_F32((u32)(r_edx+0x34u)));
    /* 008a85c6: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 008a85c8: fld dword ptr [edx + 0x38] */ FPUSH(R_F32((u32)(r_edx+0x38u)));
    /* 008a85cb: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 008a85cd: fld dword ptr [edx + 0x3c] */ FPUSH(R_F32((u32)(r_edx+0x3cu)));
    /* 008a85d0: faddp st(4) */ ST(4) = ST(4) + ST(0); FPOP();
    /* 008a85d2: fstp dword ptr [ecx] */ W_F32((u32)(r_ecx), ST(0)); FPOP();
    /* 008a85d4: fstp dword ptr [ecx + 4] */ W_F32((u32)(r_ecx+0x4u), ST(0)); FPOP();
    /* 008a85d7: fstp dword ptr [ecx + 8] */ W_F32((u32)(r_ecx+0x8u), ST(0)); FPOP();
    /* 008a85da: fstp dword ptr [ecx + 0xc] */ W_F32((u32)(r_ecx+0xcu), ST(0)); FPOP();
    /* 008a85dd: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 008a85e1: ret 0xc */ FN_RET(0x008a8559); r_esp += 16; return;
}

void f_008a85e4(void)
{
    FN_ENTER(0x008a85e4);
    /* 008a85e4: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 008a85e8: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 008a85ec: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 008a85f0: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 008a85f2: fmul dword ptr [edx] */ ST(0) = ST(0) * R_F32((u32)(r_edx));
    /* 008a85f4: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 008a85f6: fmul dword ptr [edx + 4] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x4u));
    /* 008a85f9: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 008a85fb: fmul dword ptr [edx + 8] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x8u));
    /* 008a85fe: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 008a8600: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 008a8603: fmul dword ptr [edx + 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x10u));
    /* 008a8606: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 008a8609: fmul dword ptr [edx + 0x14] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x14u));
    /* 008a860c: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 008a860f: fmul dword ptr [edx + 0x18] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x18u));
    /* 008a8612: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 008a8614: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 008a8616: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 008a8618: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 008a861a: fld dword ptr [eax + 8] */ FPUSH(R_F32((u32)(r_eax+0x8u)));
    /* 008a861d: fmul dword ptr [edx + 0x20] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x20u));
    /* 008a8620: fld dword ptr [eax + 8] */ FPUSH(R_F32((u32)(r_eax+0x8u)));
    /* 008a8623: fmul dword ptr [edx + 0x24] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x24u));
    /* 008a8626: fld dword ptr [eax + 8] */ FPUSH(R_F32((u32)(r_eax+0x8u)));
    /* 008a8629: fmul dword ptr [edx + 0x28] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x28u));
    /* 008a862c: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 008a862e: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 008a8630: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 008a8632: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 008a8634: fstp dword ptr [ecx] */ W_F32((u32)(r_ecx), ST(0)); FPOP();
    /* 008a8636: fstp dword ptr [ecx + 4] */ W_F32((u32)(r_ecx+0x4u), ST(0)); FPOP();
    /* 008a8639: fstp dword ptr [ecx + 8] */ W_F32((u32)(r_ecx+0x8u), ST(0)); FPOP();
    /* 008a863c: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 008a8640: ret 0xc */ FN_RET(0x008a85e4); r_esp += 16; return;
}

void f_008a8643(void)
{
    FN_ENTER(0x008a8643);
    /* 008a8643: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 008a8647: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 008a864b: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 008a864f: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 008a8651: fmul dword ptr [edx] */ ST(0) = ST(0) * R_F32((u32)(r_edx));
    /* 008a8653: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 008a8655: fmul dword ptr [edx + 8] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x8u));
    /* 008a8658: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 008a865a: fmul dword ptr [edx + 4] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x4u));
    /* 008a865d: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 008a865f: fmul dword ptr [edx + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0xcu));
    /* 008a8662: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 008a8664: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 008a8667: fmul dword ptr [edx + 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x10u));
    /* 008a866a: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 008a866d: fmul dword ptr [edx + 0x18] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x18u));
    /* 008a8670: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 008a8673: fmul dword ptr [edx + 0x14] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x14u));
    /* 008a8676: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 008a8679: fmul dword ptr [edx + 0x1c] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x1cu));
    /* 008a867c: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 008a867e: faddp st(4) */ ST(4) = ST(4) + ST(0); FPOP();
    /* 008a8680: faddp st(4) */ ST(4) = ST(4) + ST(0); FPOP();
    /* 008a8682: faddp st(4) */ ST(4) = ST(4) + ST(0); FPOP();
    /* 008a8684: faddp st(4) */ ST(4) = ST(4) + ST(0); FPOP();
    /* 008a8686: fld dword ptr [eax + 8] */ FPUSH(R_F32((u32)(r_eax+0x8u)));
    /* 008a8689: fmul dword ptr [edx + 0x20] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x20u));
    /* 008a868c: fld dword ptr [eax + 8] */ FPUSH(R_F32((u32)(r_eax+0x8u)));
    /* 008a868f: fmul dword ptr [edx + 0x28] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x28u));
    /* 008a8692: fld dword ptr [eax + 8] */ FPUSH(R_F32((u32)(r_eax+0x8u)));
    /* 008a8695: fmul dword ptr [edx + 0x24] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x24u));
    /* 008a8698: fld dword ptr [eax + 8] */ FPUSH(R_F32((u32)(r_eax+0x8u)));
    /* 008a869b: fmul dword ptr [edx + 0x2c] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x2cu));
    /* 008a869e: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 008a86a0: faddp st(4) */ ST(4) = ST(4) + ST(0); FPOP();
    /* 008a86a2: faddp st(4) */ ST(4) = ST(4) + ST(0); FPOP();
    /* 008a86a4: faddp st(4) */ ST(4) = ST(4) + ST(0); FPOP();
    /* 008a86a6: faddp st(4) */ ST(4) = ST(4) + ST(0); FPOP();
    /* 008a86a8: fld dword ptr [eax + 0xc] */ FPUSH(R_F32((u32)(r_eax+0xcu)));
    /* 008a86ab: fmul dword ptr [edx + 0x30] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x30u));
    /* 008a86ae: fld dword ptr [eax + 0xc] */ FPUSH(R_F32((u32)(r_eax+0xcu)));
    /* 008a86b1: fmul dword ptr [edx + 0x38] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x38u));
    /* 008a86b4: fld dword ptr [eax + 0xc] */ FPUSH(R_F32((u32)(r_eax+0xcu)));
    /* 008a86b7: fmul dword ptr [edx + 0x34] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x34u));
    /* 008a86ba: fld dword ptr [eax + 0xc] */ FPUSH(R_F32((u32)(r_eax+0xcu)));
    /* 008a86bd: fmul dword ptr [edx + 0x3c] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x3cu));
    /* 008a86c0: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 008a86c2: faddp st(4) */ ST(4) = ST(4) + ST(0); FPOP();
    /* 008a86c4: faddp st(4) */ ST(4) = ST(4) + ST(0); FPOP();
    /* 008a86c6: faddp st(4) */ ST(4) = ST(4) + ST(0); FPOP();
    /* 008a86c8: faddp st(4) */ ST(4) = ST(4) + ST(0); FPOP();
    /* 008a86ca: fstp dword ptr [ecx] */ W_F32((u32)(r_ecx), ST(0)); FPOP();
    /* 008a86cc: fstp dword ptr [ecx + 4] */ W_F32((u32)(r_ecx+0x4u), ST(0)); FPOP();
    /* 008a86cf: fstp dword ptr [ecx + 8] */ W_F32((u32)(r_ecx+0x8u), ST(0)); FPOP();
    /* 008a86d2: fstp dword ptr [ecx + 0xc] */ W_F32((u32)(r_ecx+0xcu), ST(0)); FPOP();
    /* 008a86d5: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 008a86d9: ret 0xc */ FN_RET(0x008a8643); r_esp += 16; return;
}

void f_008a86dc(void) /* sub_8A86DC */
{
    FN_ENTER(0x008a86dc);
    /* 008a86dc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008a86dd: mov ebp, esp */ r_ebp = r_esp;
    /* 008a86df: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008a86e0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008a86e1: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008a86e2: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 008a86e5: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 008a86e8: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 008a86ea: fmul dword ptr [edx] */ ST(0) = ST(0) * R_F32((u32)(r_edx));
    /* 008a86ec: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 008a86ef: fmul dword ptr [edx + 4] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x4u));
    /* 008a86f2: fld dword ptr [edx + 8] */ FPUSH(R_F32((u32)(r_edx+0x8u)));
    /* 008a86f5: fmul dword ptr [edx + 8] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x8u));
    /* 008a86f8: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 008a86fa: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008a86fc: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008a86fe: fst dword ptr [ebp - 8] */ W_F32((u32)(r_ebp+0xfffffff8u), ST(0));
    /* 008a8701: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 008a8704: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a8706: jne 0x8a8717 */ if (!fZ) goto L_008a8717;
L_008a8708:; BB(0x008a8708);
    /* 008a8708: ffree st(0) */ ;
    /* 008a870a: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 008a870c: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 008a870f: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 008a8712: jmp 0x8a879e */ goto L_008a879e;
L_008a8717:; BB(0x008a8717);
    /* 008a8717: fld1  */ FPUSH(1.0);
    /* 008a8719: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 008a871b: fstp dword ptr [ebp - 4] */ W_F32((u32)(r_ebp+0xfffffffcu), ST(0)); FPOP();
    /* 008a871e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 008a8721: and eax, 0x7fffffff */ {  u32 a = r_eax; u32 b = 0x7fffffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008a8726: cmp eax, 0x3727c5ac */ {  u32 a = r_eax; u32 b = 0x3727c5acu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008a872b: jg 0x8a8743 */ if ((!fZ&&fS==fO)) goto L_008a8743;
L_008a872d:; BB(0x008a872d);
    /* 008a872d: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008a872f: je 0x8a879e */ if (fZ) goto L_008a879e;
L_008a8731:; BB(0x008a8731);
    /* 008a8731: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 008a8733: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 008a8735: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 008a8738: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 008a873b: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 008a873e: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 008a8741: jmp 0x8a879e */ goto L_008a879e;
L_008a8743:; BB(0x008a8743);
    /* 008a8743: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 008a8746: mov edi, eax */ r_edi = r_eax;
    /* 008a8748: shr edi, 0xc */ { u32 c = (12u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 008a874b: and eax, 0xffffff */ {  u32 a = r_eax; u32 b = 0xffffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008a8750: and edi, 0xff8 */ {  u32 a = r_edi; u32 b = 0xff8u; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 008a8756: or eax, 0x3f000000 */ {  u32 a = r_eax; u32 b = 0x3f000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 008a875b: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 008a875e: fld dword ptr [ebp - 4] */ FPUSH(R_F32((u32)(r_ebp+0xfffffffcu)));
    /* 008a8761: fmul dword ptr [edi + 0xa34fc0] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0xa34fc0u));
    /* 008a8767: mov eax, 0xbeffffff */ r_eax = 0xbeffffffu;
    /* 008a876c: sub eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008a876f: fadd dword ptr [edi + 0xa34fc4] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0xa34fc4u));
    /* 008a8775: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 008a8777: and eax, 0xff800000 */ {  u32 a = r_eax; u32 b = 0xff800000u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a877c: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 008a877f: fmul dword ptr [ebp - 4] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xfffffffcu));
    /* 008a8782: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 008a8784: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008a8786: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 008a8789: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 008a878b: fld dword ptr [edx + 8] */ FPUSH(R_F32((u32)(r_edx+0x8u)));
    /* 008a878e: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 008a8790: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 008a8792: fstp dword ptr [ecx] */ W_F32((u32)(r_ecx), ST(0)); FPOP();
    /* 008a8794: fstp dword ptr [ecx + 4] */ W_F32((u32)(r_ecx+0x4u), ST(0)); FPOP();
    /* 008a8797: fstp dword ptr [ecx + 8] */ W_F32((u32)(r_ecx+0x8u), ST(0)); FPOP();
    /* 008a879a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008a879c: jmp 0x8a879e */ goto L_008a879e;
L_008a879e:; BB(0x008a879e);
    /* 008a879e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008a87a1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008a87a2: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008a87a3: ret 8 */ FN_RET(0x008a86dc); r_esp += 12; return;
}

void f_008a87a6(void) /* sub_8A87A6 */
{
    FN_ENTER(0x008a87a6);
    /* 008a87a6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008a87a7: mov ebp, esp */ r_ebp = r_esp;
    /* 008a87a9: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008a87ac: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008a87af: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008a87b0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a87b1: mov esi, dword ptr [ebp + 0x10] */ r_esi = R32((u32)(r_ebp+0x10u));
    /* 008a87b4: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008a87b6: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008a87b7: jne 0x8a882a */ if (!fZ) goto L_008a882a;
L_008a87b9:; BB(0x008a87b9);
    /* 008a87b9: cmp dword ptr [ebp + 0xc], eax */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008a87bc: je 0x8a881c */ if (fZ) goto L_008a881c;
L_008a87be:; BB(0x008a87be);
    /* 008a87be: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 008a87c1: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 008a87c4: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 008a87c7: mov edi, 0xfffffffc */ r_edi = 0xfffffffcu;
L_008a87cc:; BB(0x008a87cc);
    /* 008a87cc: mov esi, 0xfffffff0 */ r_esi = 0xfffffff0u;
    /* 008a87d1: fld dword ptr [edx + edi*4 + 0x10] */ FPUSH(R_F32((u32)(r_edx+r_edi*4+0x10u)));
    /* 008a87d5: fld dword ptr [edx + edi*4 + 0x20] */ FPUSH(R_F32((u32)(r_edx+r_edi*4+0x20u)));
    /* 008a87d9: fld dword ptr [edx + edi*4 + 0x30] */ FPUSH(R_F32((u32)(r_edx+r_edi*4+0x30u)));
    /* 008a87dd: fld dword ptr [edx + edi*4 + 0x40] */ FPUSH(R_F32((u32)(r_edx+r_edi*4+0x40u)));
L_008a87e1:; BB(0x008a87e1);
    /* 008a87e1: fld st(3) */ { long double v = ST(3); FPUSH(v); }
    /* 008a87e3: fmul dword ptr [ecx + esi*4 + 0x40] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+r_esi*4+0x40u));
    /* 008a87e7: fld st(3) */ { long double v = ST(3); FPUSH(v); }
    /* 008a87e9: fmul dword ptr [ecx + esi*4 + 0x44] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+r_esi*4+0x44u));
    /* 008a87ed: fld st(3) */ { long double v = ST(3); FPUSH(v); }
    /* 008a87ef: fmul dword ptr [ecx + esi*4 + 0x48] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+r_esi*4+0x48u));
    /* 008a87f3: fld st(3) */ { long double v = ST(3); FPUSH(v); }
    /* 008a87f5: fmul dword ptr [ecx + esi*4 + 0x4c] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+r_esi*4+0x4cu));
    /* 008a87f9: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 008a87fb: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008a87fd: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 008a87ff: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008a8801: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008a8803: fstp dword ptr [ebx + esi*4 + 0x40] */ W_F32((u32)(r_ebx+r_esi*4+0x40u), ST(0)); FPOP();
    /* 008a8807: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r; fZ = (r == 0); fC = (r < a); }
    /* 008a880a: jne 0x8a87e1 */ if (!fZ) goto L_008a87e1;
L_008a880c:; BB(0x008a880c);
    /* 008a880c: ffree st(3) */ ;
    /* 008a880e: ffree st(2) */ ;
    /* 008a8810: ffree st(1) */ ;
    /* 008a8812: ffree st(0) */ ;
    /* 008a8814: lea ebx, [ebx + 4] */ r_ebx = (u32)(r_ebx+0x4u);
    /* 008a8817: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 008a8818: jne 0x8a87cc */ if (!fZ) goto L_008a87cc;
L_008a881a:; BB(0x008a881a);
    /* 008a881a: jmp 0x8a8882 */ goto L_008a8882;
L_008a881c:; BB(0x008a881c);
    /* 008a881c: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 008a881e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a881f: lea edi, [ebp - 0x40] */ r_edi = (u32)(r_ebp+0xffffffc0u);
    /* 008a8822: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 008a8824: lea ecx, [ebp - 0x40] */ r_ecx = (u32)(r_ebp+0xffffffc0u);
    /* 008a8827: mov dword ptr [ebp + 0x10], ecx */ W32((u32)(r_ebp+0x10u), r_ecx);
L_008a882a:; BB(0x008a882a);
    /* 008a882a: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 008a882d: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 008a8830: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 008a8833: mov edi, 0xfffffffc */ r_edi = 0xfffffffcu;
L_008a8838:; BB(0x008a8838);
    /* 008a8838: mov esi, 0xfffffffc */ r_esi = 0xfffffffcu;
    /* 008a883d: fld dword ptr [ecx] */ FPUSH(R_F32((u32)(r_ecx)));
    /* 008a883f: fld dword ptr [ecx + 4] */ FPUSH(R_F32((u32)(r_ecx+0x4u)));
    /* 008a8842: fld dword ptr [ecx + 8] */ FPUSH(R_F32((u32)(r_ecx+0x8u)));
    /* 008a8845: fld dword ptr [ecx + 0xc] */ FPUSH(R_F32((u32)(r_ecx+0xcu)));
L_008a8848:; BB(0x008a8848);
    /* 008a8848: fld st(3) */ { long double v = ST(3); FPUSH(v); }
    /* 008a884a: fmul dword ptr [edx + esi*4 + 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_edx+r_esi*4+0x10u));
    /* 008a884e: fld st(3) */ { long double v = ST(3); FPUSH(v); }
    /* 008a8850: fmul dword ptr [edx + esi*4 + 0x20] */ ST(0) = ST(0) * R_F32((u32)(r_edx+r_esi*4+0x20u));
    /* 008a8854: fld st(3) */ { long double v = ST(3); FPUSH(v); }
    /* 008a8856: fmul dword ptr [edx + esi*4 + 0x30] */ ST(0) = ST(0) * R_F32((u32)(r_edx+r_esi*4+0x30u));
    /* 008a885a: fld st(3) */ { long double v = ST(3); FPUSH(v); }
    /* 008a885c: fmul dword ptr [edx + esi*4 + 0x40] */ ST(0) = ST(0) * R_F32((u32)(r_edx+r_esi*4+0x40u));
    /* 008a8860: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 008a8862: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008a8864: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 008a8866: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008a8868: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008a886a: fstp dword ptr [ebx + esi*4 + 0x10] */ W_F32((u32)(r_ebx+r_esi*4+0x10u), ST(0)); FPOP();
    /* 008a886e: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r; fZ = (r == 0); }
    /* 008a886f: jne 0x8a8848 */ if (!fZ) goto L_008a8848;
L_008a8871:; BB(0x008a8871);
    /* 008a8871: ffree st(3) */ ;
    /* 008a8873: ffree st(2) */ ;
    /* 008a8875: ffree st(1) */ ;
    /* 008a8877: ffree st(0) */ ;
    /* 008a8879: lea ecx, [ecx + 0x10] */ r_ecx = (u32)(r_ecx+0x10u);
    /* 008a887c: lea ebx, [ebx + 0x10] */ r_ebx = (u32)(r_ebx+0x10u);
    /* 008a887f: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 008a8880: jne 0x8a8838 */ if (!fZ) goto L_008a8838;
L_008a8882:; BB(0x008a8882);
    /* 008a8882: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008a8883: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008a8884: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008a8885: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008a8886: ret 0xc */ FN_RET(0x008a87a6); r_esp += 16; return;
}

void f_008a8889(void) /* sub_8A8889 */
{
    FN_ENTER(0x008a8889);
    /* 008a8889: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008a888a: mov ebp, esp */ r_ebp = r_esp;
    /* 008a888c: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008a888f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008a8892: cmp eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a8895: je 0x8a889c */ if (fZ) goto L_008a889c;
L_008a8897:; BB(0x008a8897);
    /* 008a8897: cmp eax, dword ptr [ebp + 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a889a: jne 0x8a889f */ if (!fZ) goto L_008a889f;
L_008a889c:; BB(0x008a889c);
    /* 008a889c: lea eax, [ebp - 0x44] */ r_eax = (u32)(r_ebp+0xffffffbcu);
L_008a889f:; BB(0x008a889f);
    /* 008a889f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008a88a0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a88a1: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 008a88a4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008a88a5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 008a88a8: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 008a88ab: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 008a88ae: mov edi, 0xfffffffc */ r_edi = 0xfffffffcu;
L_008a88b3:; BB(0x008a88b3);
    /* 008a88b3: mov esi, 0xfffffffc */ r_esi = 0xfffffffcu;
    /* 008a88b8: lea ebx, [eax + edi*4 + 0x10] */ r_ebx = (u32)(r_eax+r_edi*4+0x10u);
    /* 008a88bc: fld dword ptr [ecx] */ FPUSH(R_F32((u32)(r_ecx)));
    /* 008a88be: fld dword ptr [ecx + 4] */ FPUSH(R_F32((u32)(r_ecx+0x4u)));
    /* 008a88c1: fld dword ptr [ecx + 8] */ FPUSH(R_F32((u32)(r_ecx+0x8u)));
    /* 008a88c4: fld dword ptr [ecx + 0xc] */ FPUSH(R_F32((u32)(r_ecx+0xcu)));
L_008a88c7:; BB(0x008a88c7);
    /* 008a88c7: fld st(3) */ { long double v = ST(3); FPUSH(v); }
    /* 008a88c9: fmul dword ptr [edx + esi*4 + 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_edx+r_esi*4+0x10u));
    /* 008a88cd: fld st(3) */ { long double v = ST(3); FPUSH(v); }
    /* 008a88cf: fmul dword ptr [edx + esi*4 + 0x20] */ ST(0) = ST(0) * R_F32((u32)(r_edx+r_esi*4+0x20u));
    /* 008a88d3: fld st(3) */ { long double v = ST(3); FPUSH(v); }
    /* 008a88d5: fmul dword ptr [edx + esi*4 + 0x30] */ ST(0) = ST(0) * R_F32((u32)(r_edx+r_esi*4+0x30u));
    /* 008a88d9: fld st(3) */ { long double v = ST(3); FPUSH(v); }
    /* 008a88db: fmul dword ptr [edx + esi*4 + 0x40] */ ST(0) = ST(0) * R_F32((u32)(r_edx+r_esi*4+0x40u));
    /* 008a88df: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 008a88e1: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008a88e3: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 008a88e5: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008a88e7: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008a88e9: fstp dword ptr [ebx] */ W_F32((u32)(r_ebx), ST(0)); FPOP();
    /* 008a88eb: lea ebx, [ebx + 0x10] */ r_ebx = (u32)(r_ebx+0x10u);
    /* 008a88ee: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r; fZ = (r == 0); }
    /* 008a88ef: jne 0x8a88c7 */ if (!fZ) goto L_008a88c7;
L_008a88f1:; BB(0x008a88f1);
    /* 008a88f1: ffree st(3) */ ;
    /* 008a88f3: ffree st(2) */ ;
    /* 008a88f5: ffree st(1) */ ;
    /* 008a88f7: ffree st(0) */ ;
    /* 008a88f9: lea ecx, [ecx + 0x10] */ r_ecx = (u32)(r_ecx+0x10u);
    /* 008a88fc: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r; fZ = (r == 0); }
    /* 008a88fd: jne 0x8a88b3 */ if (!fZ) goto L_008a88b3;
L_008a88ff:; BB(0x008a88ff);
    /* 008a88ff: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 008a8902: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008a8905: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008a8907: je 0x8a8910 */ if (fZ) goto L_008a8910;
L_008a8909:; BB(0x008a8909);
    /* 008a8909: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 008a890b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a890c: mov edi, eax */ r_edi = r_eax;
    /* 008a890e: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
L_008a8910:; BB(0x008a8910);
    /* 008a8910: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008a8911: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008a8912: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008a8913: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008a8914: ret 0xc */ FN_RET(0x008a8889); r_esp += 16; return;
}

void f_008a8961(void) /* sub_8A8961 */
{
    FN_ENTER(0x008a8961);
    /* 008a8961: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008a8962: mov ebx, ecx */ r_ebx = r_ecx;
    /* 008a8964: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 008a8967: cmp dword ptr [ebx + 4], eax */ {  u32 a = R32((u32)(r_ebx+0x4u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a896a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008a896b: jne 0x8a89b9 */ if (!fZ) goto L_008a89b9;
L_008a896d:; BB(0x008a896d);
    /* 008a896d: lea eax, [eax*4 + 0x40] */ r_eax = (u32)(r_eax*4+0x40u);
    /* 008a8974: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a8975: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x8a897au); f_008581c5();
    /* 008a897a: mov ebp, eax */ r_ebp = r_eax;
    /* 008a897c: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a897e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a897f: jne 0x8a898b */ if (!fZ) goto L_008a898b;
L_008a8981:; BB(0x008a8981);
    /* 008a8981: mov eax, 0x8007000e */ r_eax = 0x8007000eu;
    /* 008a8986: mov dword ptr [ebx + 0xc], eax */ W32((u32)(r_ebx+0xcu), r_eax);
    /* 008a8989: jmp 0x8a89ca */ goto L_008a89ca;
L_008a898b:; BB(0x008a898b);
    /* 008a898b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a898c: mov esi, dword ptr [ebx] */ r_esi = R32((u32)(r_ebx));
    /* 008a898e: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a8990: je 0x8a89b2 */ if (fZ) goto L_008a89b2;
L_008a8992:; BB(0x008a8992);
    /* 008a8992: mov ecx, dword ptr [ebx + 4] */ r_ecx = R32((u32)(r_ebx+0x4u));
    /* 008a8995: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 008a8998: mov eax, ecx */ r_eax = r_ecx;
    /* 008a899a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008a899b: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 008a899e: mov edi, ebp */ r_edi = r_ebp;
    /* 008a89a0: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 008a89a2: mov ecx, eax */ r_ecx = r_eax;
    /* 008a89a4: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008a89a7: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 008a89a9: push dword ptr [ebx] */ { u32 v = R32((u32)(r_ebx)); r_esp -= 4; W32(r_esp, v); }
    /* 008a89ab: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x8a89b0u); f_00857e98();
    /* 008a89b0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a89b1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
L_008a89b2:; BB(0x008a89b2);
    /* 008a89b2: add dword ptr [ebx + 8], 0x10 */ { u32 ad = (u32)(r_ebx+0x8u);  u32 a = R32(ad); u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008a89b6: mov dword ptr [ebx], ebp */ W32((u32)(r_ebx), r_ebp);
    /* 008a89b8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
L_008a89b9:; BB(0x008a89b9);
    /* 008a89b9: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 008a89bc: mov ecx, dword ptr [ebx] */ r_ecx = R32((u32)(r_ebx));
    /* 008a89be: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 008a89c2: mov dword ptr [ecx + eax*4], edx */ W32((u32)(r_ecx+r_eax*4), r_edx);
    /* 008a89c5: inc dword ptr [ebx + 4] */ { u32 ad = (u32)(r_ebx+0x4u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008a89c8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_008a89ca:; BB(0x008a89ca);
    /* 008a89ca: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008a89cb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008a89cc: ret 4 */ FN_RET(0x008a8961); r_esp += 8; return;
}

void f_008a89d7(void) /* sub_8A89D7 */
{
    FN_ENTER(0x008a89d7);
    /* 008a89d7: mov eax, ecx */ r_eax = r_ecx;
    /* 008a89d9: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a89db: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 008a89dd: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 008a89e0: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 008a89e3: mov dword ptr [eax + 0xc], ecx */ W32((u32)(r_eax+0xcu), r_ecx);
    /* 008a89e6: mov dword ptr [eax + 0x10], ecx */ W32((u32)(r_eax+0x10u), r_ecx);
    /* 008a89e9: ret  */ FN_RET(0x008a89d7); r_esp += 4; return;
}

void f_008a89ea(void) /* sub_8A89EA */
{
    FN_ENTER(0x008a89ea);
    /* 008a89ea: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a89eb: mov esi, ecx */ r_esi = r_ecx;
    /* 008a89ed: cmp dword ptr [esi], 0 */ {  u32 a = R32((u32)(r_esi)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008a89f0: je 0x8a8a19 */ if (fZ) goto L_008a8a19;
L_008a89f2:; BB(0x008a89f2);
    /* 008a89f2: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008a89f3: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 008a89f5: cmp dword ptr [esi + 4], edi */ {  u32 a = R32((u32)(r_esi+0x4u)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008a89f8: jbe 0x8a8a10 */ if ((fC||fZ)) goto L_008a8a10;
L_008a89fa:; BB(0x008a89fa);
    /* 008a89fa: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008a89fc: mov eax, dword ptr [eax + edi*4] */ r_eax = R32((u32)(r_eax+r_edi*4));
    /* 008a89ff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a8a01: je 0x8a8a0a */ if (fZ) goto L_008a8a0a;
L_008a8a03:; BB(0x008a8a03);
    /* 008a8a03: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a8a04: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x8a8a09u); f_00857e98();
    /* 008a8a09: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008a8a0a:; BB(0x008a8a0a);
    /* 008a8a0a: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008a8a0b: cmp edi, dword ptr [esi + 4] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esi+0x4u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008a8a0e: jb 0x8a89fa */ if (fC) goto L_008a89fa;
L_008a8a10:; BB(0x008a8a10);
    /* 008a8a10: push dword ptr [esi] */ { u32 v = R32((u32)(r_esi)); r_esp -= 4; W32(r_esp, v); }
    /* 008a8a12: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x8a8a17u); f_00857e98();
    /* 008a8a17: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a8a18: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
L_008a8a19:; BB(0x008a8a19);
    /* 008a8a19: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008a8a1a: ret  */ FN_RET(0x008a89ea); r_esp += 4; return;
}

void f_008a8a1b(void) /* sub_8A8A1B */
{
    FN_ENTER(0x008a8a1b);
    /* 008a8a1b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008a8a1c: mov ebx, ecx */ r_ebx = r_ecx;
    /* 008a8a1e: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 008a8a21: cmp dword ptr [ebx + 4], eax */ {  u32 a = R32((u32)(r_ebx+0x4u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a8a24: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008a8a25: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a8a26: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008a8a27: jne 0x8a8a67 */ if (!fZ) goto L_008a8a67;
L_008a8a29:; BB(0x008a8a29);
    /* 008a8a29: lea eax, [eax*4 + 0x40] */ r_eax = (u32)(r_eax*4+0x40u);
    /* 008a8a30: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a8a31: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x8a8a36u); f_008581c5();
    /* 008a8a36: mov ebp, eax */ r_ebp = r_eax;
    /* 008a8a38: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a8a3a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a8a3b: je 0x8a8a8c */ if (fZ) goto L_008a8a8c;
L_008a8a3d:; BB(0x008a8a3d);
    /* 008a8a3d: mov esi, dword ptr [ebx] */ r_esi = R32((u32)(r_ebx));
    /* 008a8a3f: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a8a41: je 0x8a8a61 */ if (fZ) goto L_008a8a61;
L_008a8a43:; BB(0x008a8a43);
    /* 008a8a43: mov ecx, dword ptr [ebx + 4] */ r_ecx = R32((u32)(r_ebx+0x4u));
    /* 008a8a46: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 008a8a49: mov eax, ecx */ r_eax = r_ecx;
    /* 008a8a4b: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 008a8a4e: mov edi, ebp */ r_edi = r_ebp;
    /* 008a8a50: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 008a8a52: mov ecx, eax */ r_ecx = r_eax;
    /* 008a8a54: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008a8a57: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 008a8a59: push dword ptr [ebx] */ { u32 v = R32((u32)(r_ebx)); r_esp -= 4; W32(r_esp, v); }
    /* 008a8a5b: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x8a8a60u); f_00857e98();
    /* 008a8a60: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008a8a61:; BB(0x008a8a61);
    /* 008a8a61: add dword ptr [ebx + 8], 0x10 */ { u32 ad = (u32)(r_ebx+0x8u);  u32 a = R32(ad); u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008a8a65: mov dword ptr [ebx], ebp */ W32((u32)(r_ebx), r_ebp);
L_008a8a67:; BB(0x008a8a67);
    /* 008a8a67: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
    /* 008a8a6b: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a8a6d: je 0x8a8ab9 */ if (fZ) goto L_008a8ab9;
L_008a8a6f:; BB(0x008a8a6f);
    /* 008a8a6f: mov ebp, esi */ r_ebp = r_esi;
    /* 008a8a71: lea eax, [ebp + 1] */ r_eax = (u32)(r_ebp+0x1u);
L_008a8a74:; BB(0x008a8a74);
    /* 008a8a74: mov cl, byte ptr [ebp] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp))) & 0xffu);
    /* 008a8a77: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008a8a78: test cl, cl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_ecx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a8a7a: jne 0x8a8a74 */ if (!fZ) goto L_008a8a74;
L_008a8a7c:; BB(0x008a8a7c);
    /* 008a8a7c: sub ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 008a8a7e: lea eax, [ebp + 1] */ r_eax = (u32)(r_ebp+0x1u);
    /* 008a8a81: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a8a82: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x8a8a87u); f_008581c5();
    /* 008a8a87: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a8a89: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a8a8a: jne 0x8a8a96 */ if (!fZ) goto L_008a8a96;
L_008a8a8c:; BB(0x008a8a8c);
    /* 008a8a8c: mov eax, 0x8007000e */ r_eax = 0x8007000eu;
    /* 008a8a91: mov dword ptr [ebx + 0xc], eax */ W32((u32)(r_ebx+0xcu), r_eax);
    /* 008a8a94: jmp 0x8a8ac7 */ goto L_008a8ac7;
L_008a8a96:; BB(0x008a8a96);
    /* 008a8a96: mov ecx, ebp */ r_ecx = r_ebp;
    /* 008a8a98: mov edx, ecx */ r_edx = r_ecx;
    /* 008a8a9a: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 008a8a9d: mov edi, eax */ r_edi = r_eax;
    /* 008a8a9f: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 008a8aa1: mov ecx, edx */ r_ecx = r_edx;
    /* 008a8aa3: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008a8aa6: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 008a8aa8: and byte ptr [eax + ebp], 0 */ { u32 ad = (u32)(r_eax+r_ebp);  u32 a = R8(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffu; W8(ad, r);  }
    /* 008a8aac: mov ecx, dword ptr [ebx + 4] */ r_ecx = R32((u32)(r_ebx+0x4u));
    /* 008a8aaf: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 008a8ab1: add dword ptr [ebx + 0x10], ebp */ { u32 ad = (u32)(r_ebx+0x10u);  u32 a = R32(ad); u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008a8ab4: mov dword ptr [edx + ecx*4], eax */ W32((u32)(r_edx+r_ecx*4), r_eax);
    /* 008a8ab7: jmp 0x8a8ac2 */ goto L_008a8ac2;
L_008a8ab9:; BB(0x008a8ab9);
    /* 008a8ab9: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 008a8abc: mov ecx, dword ptr [ebx] */ r_ecx = R32((u32)(r_ebx));
    /* 008a8abe: and dword ptr [ecx + eax*4], 0 */ { u32 ad = (u32)(r_ecx+r_eax*4);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
L_008a8ac2:; BB(0x008a8ac2);
    /* 008a8ac2: inc dword ptr [ebx + 4] */ { u32 ad = (u32)(r_ebx+0x4u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008a8ac5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_008a8ac7:; BB(0x008a8ac7);
    /* 008a8ac7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008a8ac8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008a8ac9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008a8aca: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008a8acb: ret 4 */ FN_RET(0x008a8a1b); r_esp += 8; return;
}

void f_008a8ace(void) /* sub_8A8ACE */
{
    FN_ENTER(0x008a8ace);
    /* 008a8ace: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 008a8ad1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a8ad3: jne 0x8a8aea */ if (!fZ) goto L_008a8aea;
L_008a8ad5:; BB(0x008a8ad5);
    /* 008a8ad5: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 008a8ad9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a8adb: je 0x8a8ae0 */ if (fZ) goto L_008a8ae0;
L_008a8add:; BB(0x008a8add);
    /* 008a8add: and dword ptr [eax], 0 */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_008a8ae0:; BB(0x008a8ae0);
    /* 008a8ae0: mov eax, 0x80004005 */ r_eax = 0x80004005u;
    /* 008a8ae5: mov dword ptr [ecx + 0xc], eax */ W32((u32)(r_ecx+0xcu), r_eax);
    /* 008a8ae8: jmp 0x8a8aff */ goto L_008a8aff;
L_008a8aea:; BB(0x008a8aea);
    /* 008a8aea: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 008a8aee: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008a8aef: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a8af1: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 008a8af4: je 0x8a8afd */ if (fZ) goto L_008a8afd;
L_008a8af6:; BB(0x008a8af6);
    /* 008a8af6: mov ecx, dword ptr [ecx] */ r_ecx = R32((u32)(r_ecx));
    /* 008a8af8: mov eax, dword ptr [ecx + eax*4] */ r_eax = R32((u32)(r_ecx+r_eax*4));
    /* 008a8afb: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
L_008a8afd:; BB(0x008a8afd);
    /* 008a8afd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_008a8aff:; BB(0x008a8aff);
    /* 008a8aff: ret 4 */ FN_RET(0x008a8ace); r_esp += 8; return;
}

void f_008a8bff(void) /* sub_8A8BFF */
{
    FN_ENTER(0x008a8bff);
    /* 008a8bff: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 008a8c03: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a8c04: mov esi, ecx */ r_esi = r_ecx;
    /* 008a8c06: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a8c07: mov dword ptr [esi + 8], eax */ W32((u32)(r_esi+0x8u), r_eax);
    /* 008a8c0a: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x8a8c0fu); f_008581c5();
    /* 008a8c0f: mov dword ptr [esi + 0xc], eax */ W32((u32)(r_esi+0xcu), r_eax);
    /* 008a8c12: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 008a8c14: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 008a8c16: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a8c17: and eax, 0x7ff8fff2 */ {  u32 a = r_eax; u32 b = 0x7ff8fff2u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008a8c1c: add eax, 0x8007000e */ {  u32 a = r_eax; u32 b = 0x8007000eu; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008a8c21: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008a8c22: ret 4 */ FN_RET(0x008a8bff); r_esp += 8; return;
}

void f_008a8c32(void) /* sub_8A8C32 */
{
    FN_ENTER(0x008a8c32);
    /* 008a8c32: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 008a8c36: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 008a8c39: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008a8c3c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a8c3d: lea esi, [eax - 1] */ r_esi = (u32)(r_eax+0xffffffffu);
    /* 008a8c40: mov dword ptr [ecx + 4], esi */ W32((u32)(r_ecx+0x4u), r_esi);
    /* 008a8c43: jne 0x8a8c4c */ if (!fZ) goto L_008a8c4c;
L_008a8c45:; BB(0x008a8c45);
    /* 008a8c45: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 008a8c47: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008a8c49: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x8a8c4cu); call_ind(t); }
L_008a8c4c:; BB(0x008a8c4c);
    /* 008a8c4c: mov eax, esi */ r_eax = r_esi;
    /* 008a8c4e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008a8c4f: ret 4 */ FN_RET(0x008a8c32); r_esp += 8; return;
}

void f_008a8c5c(void) /* sub_8A8C5C */
{
    FN_ENTER(0x008a8c5c);
    /* 008a8c5c: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 008a8c60: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 008a8c63: ret 4 */ FN_RET(0x008a8c5c); r_esp += 8; return;
}

void f_008a8c82(void) /* sub_8A8C82 */
{
    FN_ENTER(0x008a8c82);
    /* 008a8c82: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008a8c83: mov ebp, esp */ r_ebp = r_esp;
    /* 008a8c85: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 008a8c88: and dword ptr [eax], 0 */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008a8c8b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a8c8c: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 008a8c8f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008a8c90: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 008a8c92: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a8c93: mov edi, 0x99f96c */ r_edi = 0x99f96cu;
    /* 008a8c98: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a8c9a: repe cmpsd dword ptr [esi], dword ptr es:[edi] */ while (r_ecx) { { u32 a = R32(r_esi); u32 b = R32(r_edi); u32 r = (a - b) & 0xffffffffu; r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); } r_ecx--; if (!fZ) break; }
    /* 008a8c9c: je 0x8a8caf */ if (fZ) goto L_008a8caf;
L_008a8c9e:; BB(0x008a8c9e);
    /* 008a8c9e: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 008a8ca1: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 008a8ca3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a8ca4: mov edi, 0x99da9c */ r_edi = 0x99da9cu;
    /* 008a8ca9: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a8cab: repe cmpsd dword ptr [esi], dword ptr es:[edi] */ while (r_ecx) { { u32 a = R32(r_esi); u32 b = R32(r_edi); u32 r = (a - b) & 0xffffffffu; r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); } r_ecx--; if (!fZ) break; }
    /* 008a8cad: jne 0x8a8cbe */ if (!fZ) goto L_008a8cbe;
L_008a8caf:; BB(0x008a8caf);
    /* 008a8caf: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 008a8cb2: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 008a8cb4: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 008a8cb6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008a8cb7: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x8a8cbau); call_ind(t); }
    /* 008a8cba: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a8cbc: jmp 0x8a8cc3 */ goto L_008a8cc3;
L_008a8cbe:; BB(0x008a8cbe);
    /* 008a8cbe: mov eax, 0x80004002 */ r_eax = 0x80004002u;
L_008a8cc3:; BB(0x008a8cc3);
    /* 008a8cc3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008a8cc4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008a8cc5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008a8cc6: ret 0xc */ FN_RET(0x008a8c82); r_esp += 16; return;
}

void f_008a8ce1(void) /* sub_8A8CE1 */
{
    FN_ENTER(0x008a8ce1);
    /* 008a8ce1: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 008a8ce5: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 008a8ce9: lea eax, [eax + ecx - 1] */ r_eax = (u32)(r_eax+r_ecx+0xffffffffu);
    /* 008a8ced: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008a8cee: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x008a8cee, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x008a8cee, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 008a8cf0: ret  */ FN_RET(0x008a8ce1); r_esp += 4; return;
}

void f_008a8cf1(void) /* sub_8A8CF1 */
{
    FN_ENTER(0x008a8cf1);
    /* 008a8cf1: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 008a8cf5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a8cf6: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 008a8cfa: lea ecx, [eax + esi - 1] */ r_ecx = (u32)(r_eax+r_esi+0xffffffffu);
    /* 008a8cfe: mov eax, ecx */ r_eax = r_ecx;
    /* 008a8d00: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008a8d01: idiv esi */ { i32 d = (i32)r_esi; if (!d) UNSUP(0x008a8d01, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x008a8d01, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 008a8d03: mov eax, ecx */ r_eax = r_ecx;
    /* 008a8d05: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008a8d06: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008a8d08: ret  */ FN_RET(0x008a8cf1); r_esp += 4; return;
}

void f_008a8d09(void) /* sub_8A8D09 */
{
    FN_ENTER(0x008a8d09);
    /* 008a8d09: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008a8d0a: mov ebp, esp */ r_ebp = r_esp;
    /* 008a8d0c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 008a8d0f: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 008a8d12: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 008a8d15: lea eax, [ecx + eax*4] */ r_eax = (u32)(r_ecx+r_eax*4);
    /* 008a8d18: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 008a8d1b: lea edx, [edx + ecx*4] */ r_edx = (u32)(r_edx+r_ecx*4);
    /* 008a8d1e: mov ecx, dword ptr [ebp + 0x18] */ r_ecx = R32((u32)(r_ebp+0x18u));
    /* 008a8d21: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a8d23: jle 0x8a8d4e */ if ((fZ||fS!=fO)) goto L_008a8d4e;
L_008a8d25:; BB(0x008a8d25);
    /* 008a8d25: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008a8d26: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a8d27: mov dword ptr [ebp + 0xc], ecx */ W32((u32)(r_ebp+0xcu), r_ecx);
    /* 008a8d2a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
L_008a8d2b:; BB(0x008a8d2b);
    /* 008a8d2b: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 008a8d2e: mov esi, dword ptr [eax] */ r_esi = R32((u32)(r_eax));
    /* 008a8d30: mov edi, dword ptr [edx] */ r_edi = R32((u32)(r_edx));
    /* 008a8d32: mov ebx, ecx */ r_ebx = r_ecx;
    /* 008a8d34: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 008a8d37: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 008a8d39: mov ecx, ebx */ r_ecx = r_ebx;
    /* 008a8d3b: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008a8d3e: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008a8d41: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r; fC = (r < a); }
    /* 008a8d44: dec dword ptr [ebp + 0xc] */ { u32 ad = (u32)(r_ebp+0xcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008a8d47: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 008a8d49: jne 0x8a8d2b */ if (!fZ) goto L_008a8d2b;
L_008a8d4b:; BB(0x008a8d4b);
    /* 008a8d4b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008a8d4c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008a8d4d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
L_008a8d4e:; BB(0x008a8d4e);
    /* 008a8d4e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008a8d4f: ret  */ FN_RET(0x008a8d09); r_esp += 4; return;
}

void f_008a8d50(void) /* sub_8A8D50 */
{
    FN_ENTER(0x008a8d50);
    /* 008a8d50: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 008a8d54: shl ecx, 7 */ { u32 c = (7u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 008a8d57: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a8d58: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 008a8d5c: mov eax, ecx */ r_eax = r_ecx;
    /* 008a8d5e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008a8d5f: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 008a8d63: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 008a8d66: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 008a8d68: mov ecx, eax */ r_ecx = r_eax;
    /* 008a8d6a: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a8d6d: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 008a8d6f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008a8d70: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008a8d71: ret  */ FN_RET(0x008a8d50); r_esp += 4; return;
}

void f_008a8d72(void) /* sub_8A8D72 */
{
    FN_ENTER(0x008a8d72);
    /* 008a8d72: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 008a8d76: mov edx, ecx */ r_edx = r_ecx;
    /* 008a8d78: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008a8d79: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 008a8d7d: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 008a8d80: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008a8d82: rep stosd dword ptr es:[edi], eax */ while (r_ecx) { W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 008a8d84: mov ecx, edx */ r_ecx = r_edx;
    /* 008a8d86: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a8d89: rep stosb byte ptr es:[edi], al */ while (r_ecx) { W8(r_edi, (u8)r_eax); r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 008a8d8b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008a8d8c: ret  */ FN_RET(0x008a8d72); r_esp += 4; return;
}

void f_008a8d8d(void) /* sub_8A8D8D */
{
    FN_ENTER(0x008a8d8d);
    /* 008a8d8d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008a8d8e: mov ebp, esp */ r_ebp = r_esp;
    /* 008a8d90: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008a8d91: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008a8d92: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008a8d93: pushfd  */ { u32 v = 0x202u | rt_eflags_extra | (u32)fC | ((u32)fP << 2) | ((u32)fA << 4) | ((u32)fZ << 6) | ((u32)fS << 7) | ((u32)fO << 11); r_esp -= 4; W32(r_esp, v); }
    /* 008a8d94: pop edx */ { u32 v = R32(r_esp); r_esp += 4; r_edx = v; }
    /* 008a8d95: mov eax, edx */ r_eax = r_edx;
    /* 008a8d97: xor edx, 0x200000 */ {  u32 a = r_edx; u32 b = 0x200000u; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a8d9d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008a8d9e: popfd  */ { u32 v = R32(r_esp); r_esp += 4; fC = v & 1; fP = (v >> 2) & 1; fA = (v >> 4) & 1; fZ = (v >> 6) & 1; fS = (v >> 7) & 1; fO = (v >> 11) & 1; rt_eflags_extra = v & 0x240000u; }
    /* 008a8d9f: pushfd  */ { u32 v = 0x202u | rt_eflags_extra | (u32)fC | ((u32)fP << 2) | ((u32)fA << 4) | ((u32)fZ << 6) | ((u32)fS << 7) | ((u32)fO << 11); r_esp -= 4; W32(r_esp, v); }
    /* 008a8da0: pop edx */ { u32 v = R32(r_esp); r_esp += 4; r_edx = v; }
    /* 008a8da1: xor edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a8da3: je 0x8a8db5 */ if (fZ) goto L_008a8db5;
L_008a8da5:; BB(0x008a8da5);
    /* 008a8da5: mov eax, 1 */ r_eax = 0x1u;
    /* 008a8daa: cpuid  */ { u32 a, b, c, d; rt_cpuid(r_eax, r_ecx, &a, &b, &c, &d); r_eax = a; r_ebx = b; r_ecx = c; r_edx = d; }
    /* 008a8dac: and edx, 0x800000 */ {  u32 a = r_edx; u32 b = 0x800000u; u32 r = (a & b) & 0xffffffffu; r_edx = r; fA = (((a ^ b ^ r) & 0x10u) != 0); }
    /* 008a8db2: shr edx, 0x17 */ { u32 c = (23u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r; fC = (c <= 32) ? ((a >> (c - 1)) & 1) : 0; fO = (a >> 31) & 1; fZ = (r == 0); fS = (r >> 31) & 1; fP = !__builtin_parity(r & 0xffu); } }
L_008a8db5:; BB(0x008a8db5);
    /* 008a8db5: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 008a8db8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008a8db9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 008a8dbc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008a8dbd: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008a8dbe: ret  */ FN_RET(0x008a8d8d); r_esp += 4; return;
}

void f_008a8f7a(void) /* sub_8A8F7A */
{
    FN_ENTER(0x008a8f7a);
    /* 008a8f7a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008a8f7b: mov ebp, esp */ r_ebp = r_esp;
    /* 008a8f7d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008a8f7e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008a8f7f: mov eax, dword ptr [esi + 0x120] */ r_eax = R32((u32)(r_esi+0x120u));
    /* 008a8f85: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008a8f86: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008a8f87: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 008a8f89: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008a8f8a: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a8f8c: jne 0x8a8fdd */ if (!fZ) goto L_008a8fdd;
L_008a8f8e:; BB(0x008a8f8e);
    /* 008a8f8e: mov ecx, dword ptr [esi + 0x124] */ r_ecx = R32((u32)(r_esi+0x124u));
    /* 008a8f94: mov eax, dword ptr [ecx + 0x1c] */ r_eax = R32((u32)(r_ecx+0x1cu));
    /* 008a8f97: mov dword ptr [esi + 0x134], eax */ W32((u32)(r_esi+0x134u), r_eax);
    /* 008a8f9d: mov eax, dword ptr [ecx + 0x20] */ r_eax = R32((u32)(r_ecx+0x20u));
    /* 008a8fa0: mov dword ptr [esi + 0x138], eax */ W32((u32)(r_esi+0x138u), r_eax);
    /* 008a8fa6: mov eax, dword ptr [ecx + 0x24] */ r_eax = R32((u32)(r_ecx+0x24u));
    /* 008a8fa9: mov ebx, dword ptr [ecx + 0xc] */ r_ebx = R32((u32)(r_ecx+0xcu));
    /* 008a8fac: mov dword ptr [ecx + 0x40], eax */ W32((u32)(r_ecx+0x40u), r_eax);
    /* 008a8faf: mov eax, dword ptr [ecx + 0x20] */ r_eax = R32((u32)(r_ecx+0x20u));
    /* 008a8fb2: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008a8fb4: div ebx */ { u32 d = r_ebx; if (!d) UNSUP(0x008a8fb4, "divide by zero"); { u64 n = ((u64)r_edx << 32) | r_eax; u64 q = n / d; if (q >> 32) UNSUP(0x008a8fb4, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 008a8fb6: mov dword ptr [ecx + 0x34], edi */ W32((u32)(r_ecx+0x34u), r_edi);
    /* 008a8fb9: mov dword ptr [ecx + 0x38], edi */ W32((u32)(r_ecx+0x38u), r_edi);
    /* 008a8fbc: mov dword ptr [ecx + 0x3c], edi */ W32((u32)(r_ecx+0x3cu), r_edi);
    /* 008a8fbf: mov dword ptr [ecx + 0x44], edi */ W32((u32)(r_ecx+0x44u), r_edi);
    /* 008a8fc2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a8fc4: jne 0x8a8fc8 */ if (!fZ) goto L_008a8fc8;
L_008a8fc6:; BB(0x008a8fc6);
    /* 008a8fc6: mov edx, ebx */ r_edx = r_ebx;
L_008a8fc8:; BB(0x008a8fc8);
    /* 008a8fc8: mov dword ptr [ecx + 0x48], edx */ W32((u32)(r_ecx+0x48u), r_edx);
    /* 008a8fcb: and dword ptr [esi + 0x140], 0 */ { u32 ad = (u32)(r_esi+0x140u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a8fd2: mov dword ptr [esi + 0x13c], edi */ W32((u32)(r_esi+0x13cu), r_edi);
    /* 008a8fd8: jmp 0x8a90ec */ goto L_008a90ec;
L_008a8fdd:; BB(0x008a8fdd);
    /* 008a8fdd: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 008a8fdf: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008a8fe1: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 008a8fe3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a8fe4: jle 0x8a8fea */ if ((fZ||fS!=fO)) goto L_008a8fea;
L_008a8fe6:; BB(0x008a8fe6);
    /* 008a8fe6: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008a8fe8: jle 0x8a9009 */ if ((fZ||fS!=fO)) goto L_008a9009;
L_008a8fea:; BB(0x008a8fea);
    /* 008a8fea: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008a8fec: mov dword ptr [eax + 0x14], 0x18 */ W32((u32)(r_eax+0x14u), 0x18u);
    /* 008a8ff3: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008a8ff5: mov edx, dword ptr [esi + 0x120] */ r_edx = R32((u32)(r_esi+0x120u));
    /* 008a8ffb: mov dword ptr [eax + 0x18], edx */ W32((u32)(r_eax+0x18u), r_edx);
    /* 008a8ffe: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008a9000: mov dword ptr [eax + 0x1c], ecx */ W32((u32)(r_eax+0x1cu), r_ecx);
    /* 008a9003: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008a9005: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a9006: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x8a9008u); call_ind(t); }
    /* 008a9008: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008a9009:; BB(0x008a9009);
    /* 008a9009: mov eax, dword ptr [esi + 0x10c] */ r_eax = R32((u32)(r_esi+0x10cu));
    /* 008a900f: shl eax, 3 */ { u32 c = (3u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 008a9012: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a9013: push dword ptr [esi + 0x18] */ { u32 v = R32((u32)(r_esi+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 008a9016: call 0x8a8ce1 */ r_esp -= 4; W32(r_esp, 0x8a901bu); f_008a8ce1();
    /* 008a901b: mov dword ptr [esi + 0x134], eax */ W32((u32)(r_esi+0x134u), r_eax);
    /* 008a9021: mov eax, dword ptr [esi + 0x110] */ r_eax = R32((u32)(r_esi+0x110u));
    /* 008a9027: shl eax, 3 */ { u32 c = (3u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 008a902a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a902b: push dword ptr [esi + 0x1c] */ { u32 v = R32((u32)(r_esi+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 008a902e: call 0x8a8ce1 */ r_esp -= 4; W32(r_esp, 0x8a9033u); f_008a8ce1();
    /* 008a9033: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008a9036: cmp dword ptr [esi + 0x120], edi */ {  u32 a = R32((u32)(r_esi+0x120u)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008a903c: mov dword ptr [esi + 0x138], eax */ W32((u32)(r_esi+0x138u), r_eax);
    /* 008a9042: mov dword ptr [esi + 0x13c], edi */ W32((u32)(r_esi+0x13cu), r_edi);
    /* 008a9048: mov dword ptr [ebp - 4], edi */ W32((u32)(r_ebp+0xfffffffcu), r_edi);
    /* 008a904b: jle 0x8a90ec */ if ((fZ||fS!=fO)) goto L_008a90ec;
L_008a9051:; BB(0x008a9051);
    /* 008a9051: lea eax, [esi + 0x124] */ r_eax = (u32)(r_esi+0x124u);
    /* 008a9057: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_008a905a:; BB(0x008a905a);
    /* 008a905a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 008a905d: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 008a905f: mov ebx, dword ptr [ecx + 8] */ r_ebx = R32((u32)(r_ecx+0x8u));
    /* 008a9062: mov eax, dword ptr [ecx + 0x24] */ r_eax = R32((u32)(r_ecx+0x24u));
    /* 008a9065: imul eax, ebx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebx; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008a9068: mov edi, dword ptr [ecx + 0xc] */ r_edi = R32((u32)(r_ecx+0xcu));
    /* 008a906b: mov dword ptr [ecx + 0x40], eax */ W32((u32)(r_ecx+0x40u), r_eax);
    /* 008a906e: mov eax, dword ptr [ecx + 0x1c] */ r_eax = R32((u32)(r_ecx+0x1cu));
    /* 008a9071: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008a9073: div ebx */ { u32 d = r_ebx; if (!d) UNSUP(0x008a9073, "divide by zero"); { u64 n = ((u64)r_edx << 32) | r_eax; u64 q = n / d; if (q >> 32) UNSUP(0x008a9073, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 008a9075: mov dword ptr [ecx + 0x38], edi */ W32((u32)(r_ecx+0x38u), r_edi);
    /* 008a9078: imul edi, ebx */ { i64 t = (i64)(i32)r_edi * (i64)(i32)r_ebx; r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008a907b: mov dword ptr [ecx + 0x34], ebx */ W32((u32)(r_ecx+0x34u), r_ebx);
    /* 008a907e: mov dword ptr [ecx + 0x3c], edi */ W32((u32)(r_ecx+0x3cu), r_edi);
    /* 008a9081: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a9083: jne 0x8a9087 */ if (!fZ) goto L_008a9087;
L_008a9085:; BB(0x008a9085);
    /* 008a9085: mov edx, ebx */ r_edx = r_ebx;
L_008a9087:; BB(0x008a9087);
    /* 008a9087: mov eax, dword ptr [ecx + 0x20] */ r_eax = R32((u32)(r_ecx+0x20u));
    /* 008a908a: mov ebx, dword ptr [ecx + 0xc] */ r_ebx = R32((u32)(r_ecx+0xcu));
    /* 008a908d: mov dword ptr [ecx + 0x44], edx */ W32((u32)(r_ecx+0x44u), r_edx);
    /* 008a9090: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008a9092: div ebx */ { u32 d = r_ebx; if (!d) UNSUP(0x008a9092, "divide by zero"); { u64 n = ((u64)r_edx << 32) | r_eax; u64 q = n / d; if (q >> 32) UNSUP(0x008a9092, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 008a9094: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a9096: jne 0x8a909a */ if (!fZ) goto L_008a909a;
L_008a9098:; BB(0x008a9098);
    /* 008a9098: mov edx, ebx */ r_edx = r_ebx;
L_008a909a:; BB(0x008a909a);
    /* 008a909a: mov dword ptr [ecx + 0x48], edx */ W32((u32)(r_ecx+0x48u), r_edx);
    /* 008a909d: mov eax, dword ptr [esi + 0x13c] */ r_eax = R32((u32)(r_esi+0x13cu));
    /* 008a90a3: add eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008a90a5: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008a90a8: jle 0x8a90b9 */ if ((fZ||fS!=fO)) goto L_008a90b9;
L_008a90aa:; BB(0x008a90aa);
    /* 008a90aa: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008a90ac: mov dword ptr [eax + 0x14], 0xb */ W32((u32)(r_eax+0x14u), 0xbu);
    /* 008a90b3: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008a90b5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a90b6: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x8a90b8u); call_ind(t); }
    /* 008a90b8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008a90b9:; BB(0x008a90b9);
    /* 008a90b9: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008a90bb: jle 0x8a90d6 */ if ((fZ||fS!=fO)) goto L_008a90d6;
L_008a90bd:; BB(0x008a90bd);
    /* 008a90bd: mov eax, dword ptr [esi + 0x13c] */ r_eax = R32((u32)(r_esi+0x13cu));
    /* 008a90c3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 008a90c6: mov dword ptr [esi + eax*4 + 0x140], ecx */ W32((u32)(r_esi+r_eax*4+0x140u), r_ecx);
    /* 008a90cd: inc dword ptr [esi + 0x13c] */ { u32 ad = (u32)(r_esi+0x13cu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008a90d3: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r; fZ = (r == 0); }
    /* 008a90d4: jne 0x8a90bd */ if (!fZ) goto L_008a90bd;
L_008a90d6:; BB(0x008a90d6);
    /* 008a90d6: inc dword ptr [ebp - 4] */ { u32 ad = (u32)(r_ebp+0xfffffffcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008a90d9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 008a90dc: add dword ptr [ebp - 8], 4 */ { u32 ad = (u32)(r_ebp+0xfffffff8u);  u32 a = R32(ad); u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008a90e0: cmp eax, dword ptr [esi + 0x120] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+0x120u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008a90e6: jl 0x8a905a */ if ((fS!=fO)) goto L_008a905a;
L_008a90ec:; BB(0x008a90ec);
    /* 008a90ec: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008a90ed: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008a90ee: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008a90ef: ret  */ FN_RET(0x008a8f7a); r_esp += 4; return;
}

