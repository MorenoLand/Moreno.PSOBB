#include "protos.h"

void f_0074c018(void) /* sub_74C018 */
{
    FN_ENTER(0x0074c018);
    /* 0074c018: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0074c019: mov ebp, esp */ r_ebp = r_esp;
    /* 0074c01b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0074c01d: push 0x8f2888 */ { u32 v = 0x8f2888u; r_esp -= 4; W32(r_esp, v); }
    /* 0074c022: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0074c028: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074c029: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0074c030: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0074c033: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0074c036: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0074c039: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0074c03c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0074c03f: mov eax, dword ptr [ecx + 0x1c] */ r_eax = R32((u32)(r_ecx+0x1cu));
    /* 0074c042: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0074c045: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074c047: jb 0x74c125 */ if (fC) goto L_0074c125;
L_0074c04d:; BB(0x0074c04d);
    /* 0074c04d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0074c050: ja 0x74c125 */ if ((!fC&&!fZ)) goto L_0074c125;
L_0074c056:; BB(0x0074c056);
    /* 0074c056: mov eax, ecx */ r_eax = r_ecx;
    /* 0074c058: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 0074c05b: call 0x73d114 */ r_esp -= 4; W32(r_esp, 0x74c060u); f_0073d114();
    /* 0074c060: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074c062: je 0x74c07d */ if (fZ) goto L_0074c07d;
L_0074c064:; BB(0x0074c064);
    /* 0074c064: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0074c067: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 0074c06a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0074c06c: call dword ptr [edx + 0x1c] */ { u32 t = R32((u32)(r_edx+0x1cu)); r_esp -= 4; W32(r_esp, 0x74c06fu); call_ind(t); }
    /* 0074c06f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0074c072: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0074c079: mov esp, ebp */ r_esp = r_ebp;
    /* 0074c07b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074c07c: ret  */ FN_RET(0x0074c018); r_esp += 4; return;
L_0074c07d:; BB(0x0074c07d);
    /* 0074c07d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0074c080: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 0074c083: call 0x73ce50 */ r_esp -= 4; W32(r_esp, 0x74c088u); f_0073ce50();
    /* 0074c088: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074c08a: je 0x74c125 */ if (fZ) goto L_0074c125;
L_0074c090:; BB(0x0074c090);
    /* 0074c090: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0074c093: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 0074c096: call 0x73d134 */ r_esp -= 4; W32(r_esp, 0x74c09bu); f_0073d134();
    /* 0074c09b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074c09d: jne 0x74c115 */ if (!fZ) goto L_0074c115;
L_0074c09f:; BB(0x0074c09f);
    /* 0074c09f: mov eax, dword ptr [0xa9ab38] */ r_eax = R32((u32)(0xa9ab38u));
    /* 0074c0a4: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0074c0a7: je 0x74c109 */ if (fZ) goto L_0074c109;
L_0074c0a9:; BB(0x0074c0a9);
    /* 0074c0a9: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0074c0b0: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 0074c0b2: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x74c0b7u); f_005caba4();
    /* 0074c0b7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0074c0b8: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0074c0bb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074c0bd: je 0x74c0e7 */ if (fZ) goto L_0074c0e7;
L_0074c0bf:; BB(0x0074c0bf);
    /* 0074c0bf: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0074c0c6: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0074c0cd: push 0x74c134 */ { u32 v = 0x74c134u; r_esp -= 4; W32(r_esp, v); }
    /* 0074c0d2: push dword ptr [0xaca384] */ { u32 v = R32((u32)(0xaca384u)); r_esp -= 4; W32(r_esp, v); }
    /* 0074c0d8: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0074c0db: call 0x788938 */ r_esp -= 4; W32(r_esp, 0x74c0e0u); f_00788938();
    /* 0074c0e0: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0074c0e7:; BB(0x0074c0e7);
    /* 0074c0e7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0074c0ee: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0074c0f1: push dword ptr [eax + 0x20] */ { u32 v = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0074c0f4: call 0x718168 */ r_esp -= 4; W32(r_esp, 0x74c0f9u); f_00718168();
    /* 0074c0f9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0074c0fa: call 0x79f1d8 */ r_esp -= 4; W32(r_esp, 0x74c0ffu); f_0079f1d8();
    /* 0074c0ff: mov dword ptr [0xa9ab38], 1 */ W32((u32)(0xa9ab38u), 0x1u);
L_0074c109:; BB(0x0074c109);
    /* 0074c109: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0074c10c: mov dword ptr [eax + 0x1c], 2 */ W32((u32)(r_eax+0x1cu), 0x2u);
    /* 0074c113: jmp 0x74c125 */ goto L_0074c125;
L_0074c115:; BB(0x0074c115);
    /* 0074c115: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0074c118: jne 0x74c125 */ if (!fZ) goto L_0074c125;
L_0074c11a:; BB(0x0074c11a);
    /* 0074c11a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0074c11d: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 0074c120: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0074c122: call dword ptr [edx + 0x1c] */ { u32 t = R32((u32)(r_edx+0x1cu)); r_esp -= 4; W32(r_esp, 0x74c125u); call_ind(t); }
L_0074c125:; BB(0x0074c125);
    /* 0074c125: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0074c128: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0074c12f: mov esp, ebp */ r_esp = r_ebp;
    /* 0074c131: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074c132: ret  */ FN_RET(0x0074c018); r_esp += 4; return;
}

void f_0074c134(void) /* sub_74C134 */
{
    FN_ENTER(0x0074c134);
    /* 0074c134: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0074c136: call 0x7a60dc */ r_esp -= 4; W32(r_esp, 0x74c13bu); f_007a60dc();
    /* 0074c13b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0074c13c: ret  */ FN_RET(0x0074c134); r_esp += 4; return;
}

void f_0074c140(void) /* sub_74C140 */
{
    FN_ENTER(0x0074c140);
    /* 0074c140: mov dword ptr [0xa9ab2c], 0x3f800000 */ W32((u32)(0xa9ab2cu), 0x3f800000u);
    /* 0074c14a: mov dword ptr [0xa9ab30], 0x41000000 */ W32((u32)(0xa9ab30u), 0x41000000u);
    /* 0074c154: mov dword ptr [0xa9ab34], 0x3fc00000 */ W32((u32)(0xa9ab34u), 0x3fc00000u);
    /* 0074c15e: ret  */ FN_RET(0x0074c140); r_esp += 4; return;
}

void f_0074c160(void) /* sub_74C160 */
{
    FN_ENTER(0x0074c160);
    /* 0074c160: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0074c161: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0074c163: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0074c165: call 0x74c184 */ r_esp -= 4; W32(r_esp, 0x74c16au); f_0074c184();
    /* 0074c16a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0074c16e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074c170: jne 0x74c176 */ if (!fZ) goto L_0074c176;
L_0074c172:; BB(0x0074c172);
    /* 0074c172: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074c173: ret 4 */ FN_RET(0x0074c160); r_esp += 8; return;
L_0074c176:; BB(0x0074c176);
    /* 0074c176: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0074c177: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x74c17cu); f_005c2f74();
    /* 0074c17c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0074c17d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074c17e: ret 4 */ FN_RET(0x0074c160); r_esp += 8; return;
}

void f_0074c184(void) /* sub_74C184 */
{
    FN_ENTER(0x0074c184);
    /* 0074c184: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0074c185: mov ebp, esp */ r_ebp = r_esp;
    /* 0074c187: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0074c189: push 0x8f28a4 */ { u32 v = 0x8f28a4u; r_esp -= 4; W32(r_esp, v); }
    /* 0074c18e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0074c194: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074c195: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0074c19c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0074c19f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0074c1a2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0074c1a5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0074c1a8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0074c1ab: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0074c1ae: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0074c1b5: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0074c1b8: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 0074c1bb: mov dword ptr [eax], 0xb41e08 */ W32((u32)(r_eax), 0xb41e08u);
    /* 0074c1c1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074c1c3: je 0x74c1d4 */ if (fZ) goto L_0074c1d4;
L_0074c1c5:; BB(0x0074c1c5);
    /* 0074c1c5: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x74c1cau); f_007127b0();
    /* 0074c1ca: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0074c1cd: mov dword ptr [eax + 0x38], 0 */ W32((u32)(r_eax+0x38u), 0x0u);
L_0074c1d4:; BB(0x0074c1d4);
    /* 0074c1d4: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 0074c1d7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074c1d9: je 0x74c1ea */ if (fZ) goto L_0074c1ea;
L_0074c1db:; BB(0x0074c1db);
    /* 0074c1db: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x74c1e0u); f_007127b0();
    /* 0074c1e0: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0074c1e3: mov dword ptr [eax + 0x30], 0 */ W32((u32)(r_eax+0x30u), 0x0u);
L_0074c1ea:; BB(0x0074c1ea);
    /* 0074c1ea: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 0074c1ed: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074c1ef: je 0x74c200 */ if (fZ) goto L_0074c200;
L_0074c1f1:; BB(0x0074c1f1);
    /* 0074c1f1: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x74c1f6u); f_007127b0();
    /* 0074c1f6: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0074c1f9: mov dword ptr [eax + 0x34], 0 */ W32((u32)(r_eax+0x34u), 0x0u);
L_0074c200:; BB(0x0074c200);
    /* 0074c200: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 0074c203: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074c205: je 0x74c216 */ if (fZ) goto L_0074c216;
L_0074c207:; BB(0x0074c207);
    /* 0074c207: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x74c20cu); f_007127b0();
    /* 0074c20c: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0074c20f: mov dword ptr [eax + 0x2c], 0 */ W32((u32)(r_eax+0x2cu), 0x0u);
L_0074c216:; BB(0x0074c216);
    /* 0074c216: mov dword ptr [0xa9ab40], 0 */ W32((u32)(0xa9ab40u), 0x0u);
    /* 0074c220: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0074c227: mov ecx, eax */ r_ecx = r_eax;
    /* 0074c229: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x74c22eu); f_008171e8();
    /* 0074c22e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0074c231: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0074c238: mov esp, ebp */ r_esp = r_ebp;
    /* 0074c23a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074c23b: ret  */ FN_RET(0x0074c184); r_esp += 4; return;
}

void f_0074c23c(void) /* sub_74C23C */
{
    FN_ENTER(0x0074c23c);
    /* 0074c23c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0074c23d: mov ebp, esp */ r_ebp = r_esp;
    /* 0074c23f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0074c241: push 0x8f28c0 */ { u32 v = 0x8f28c0u; r_esp -= 4; W32(r_esp, v); }
    /* 0074c246: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0074c24c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074c24d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0074c254: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0074c257: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0074c25a: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 0074c25d: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 0074c260: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 0074c263: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0074c266: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0074c269: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 0074c26c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0074c26d: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0074c270: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0074c273: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x74c278u); f_008193cc();
    /* 0074c278: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0074c27f: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0074c282: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0074c285: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0074c288: mov dword ptr [ecx + 0x28], edx */ W32((u32)(r_ecx+0x28u), r_edx);
    /* 0074c28b: mov dword ptr [ecx + 0x20], ebx */ W32((u32)(r_ecx+0x20u), r_ebx);
    /* 0074c28e: mov dword ptr [ecx], 0xb41e08 */ W32((u32)(r_ecx), 0xb41e08u);
    /* 0074c294: mov eax, dword ptr [0x9f4070] */ r_eax = R32((u32)(0x9f4070u));
    /* 0074c299: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0074c29c: call 0x74c2d4 */ r_esp -= 4; W32(r_esp, 0x74c2a1u); f_0074c2d4();
    /* 0074c2a1: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0074c2a4: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0074c2a7: mov dword ptr [ecx + 0x2c], eax */ W32((u32)(r_ecx+0x2cu), r_eax);
    /* 0074c2aa: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074c2ac: mov dword ptr [0xa9ab40], ecx */ W32((u32)(0xa9ab40u), r_ecx);
    /* 0074c2b2: mov dword ptr [ecx + 0x34], edx */ W32((u32)(r_ecx+0x34u), r_edx);
    /* 0074c2b5: mov dword ptr [ecx + 0x30], edx */ W32((u32)(r_ecx+0x30u), r_edx);
    /* 0074c2b8: mov dword ptr [ecx + 0x38], edx */ W32((u32)(r_ecx+0x38u), r_edx);
    /* 0074c2bb: mov dword ptr [ecx + 0x24], edx */ W32((u32)(r_ecx+0x24u), r_edx);
    /* 0074c2be: mov byte ptr [ecx + 0x1c], dl */ W8((u32)(r_ecx+0x1cu), (u8)r_edx);
    /* 0074c2c1: mov eax, ecx */ r_eax = r_ecx;
    /* 0074c2c3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0074c2c6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0074c2cd: mov esp, ebp */ r_esp = r_ebp;
    /* 0074c2cf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074c2d0: ret 8 */ FN_RET(0x0074c23c); r_esp += 12; return;
}

void f_0074c2d4(void) /* sub_74C2D4 */
{
    FN_ENTER(0x0074c2d4);
    /* 0074c2d4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0074c2d5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0074c2d6: mov edi, ecx */ r_edi = r_ecx;
    /* 0074c2d8: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0074c2da: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x74c2dfu); f_0073ec50();
    /* 0074c2df: push dword ptr [edi + 0x20] */ { u32 v = R32((u32)(r_edi+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0074c2e2: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0074c2e4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074c2e5: call 0x7354fc */ r_esp -= 4; W32(r_esp, 0x74c2eau); f_007354fc();
    /* 0074c2ea: mov ebx, eax */ r_ebx = r_eax;
    /* 0074c2ec: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0074c2ef: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074c2f1: je 0x74c35d */ if (fZ) goto L_0074c35d;
L_0074c2f3:; BB(0x0074c2f3);
    /* 0074c2f3: push 0x170 */ { u32 v = 0x170u; r_esp -= 4; W32(r_esp, v); }
    /* 0074c2f8: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x74c2fdu); f_0079317c();
    /* 0074c2fd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0074c2fe: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0074c300: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0074c302: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0074c304: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074c305: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x74c30au); f_00735c90();
    /* 0074c30a: push 0x171 */ { u32 v = 0x171u; r_esp -= 4; W32(r_esp, v); }
    /* 0074c30f: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x74c314u); f_0079317c();
    /* 0074c314: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0074c315: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0074c317: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0074c319: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0074c31b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074c31c: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x74c321u); f_00735c90();
    /* 0074c321: push 0x43430000 */ { u32 v = 0x43430000u; r_esp -= 4; W32(r_esp, v); }
    /* 0074c326: movzx edx, word ptr [ebx + 0x84] */ r_edx = (u32)R16((u32)(r_ebx+0x84u));
    /* 0074c32d: or edx, 0xffff0010 */ {  u32 a = r_edx; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0074c333: mov word ptr [ebx + 0x84], dx */ W16((u32)(r_ebx+0x84u), (u16)r_edx);
    /* 0074c33a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0074c33c: call 0x736138 */ r_esp -= 4; W32(r_esp, 0x74c341u); f_00736138();
    /* 0074c341: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0074c343: call 0x736458 */ r_esp -= 4; W32(r_esp, 0x74c348u); f_00736458();
    /* 0074c348: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0074c34a: mov ecx, dword ptr [edi + 0x28] */ r_ecx = R32((u32)(r_edi+0x28u));
    /* 0074c34d: call 0x7336fc */ r_esp -= 4; W32(r_esp, 0x74c352u); f_007336fc();
    /* 0074c352: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0074c353: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0074c356: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0074c358: call 0x712624 */ r_esp -= 4; W32(r_esp, 0x74c35du); f_00712624();
L_0074c35d:; BB(0x0074c35d);
    /* 0074c35d: mov eax, ebx */ r_eax = r_ebx;
    /* 0074c35f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074c360: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0074c361: ret  */ FN_RET(0x0074c2d4); r_esp += 4; return;
}

void f_0074c364(void) /* sub_74C364 */
{
    FN_ENTER(0x0074c364);
    /* 0074c364: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0074c365: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0074c366: mov edi, ecx */ r_edi = r_ecx;
    /* 0074c368: push dword ptr [edi + 0x20] */ { u32 v = R32((u32)(r_edi+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0074c36b: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x74c370u); f_0068d5a8();
    /* 0074c370: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0074c371: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074c373: je 0x74c553 */ if (fZ) goto L_0074c553;
L_0074c379:; BB(0x0074c379);
    /* 0074c379: mov eax, dword ptr [edi + 0x2c] */ r_eax = R32((u32)(r_edi+0x2cu));
    /* 0074c37c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074c37e: je 0x74c553 */ if (fZ) goto L_0074c553;
L_0074c384:; BB(0x0074c384);
    /* 0074c384: push dword ptr [edi + 0x20] */ { u32 v = R32((u32)(r_edi+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0074c387: call 0x719140 */ r_esp -= 4; W32(r_esp, 0x74c38cu); f_00719140();
    /* 0074c38c: mov esi, eax */ r_esi = r_eax;
    /* 0074c38e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0074c391: movzx edx, byte ptr [edi + 0x1c] */ r_edx = (u32)R8((u32)(r_edi+0x1cu));
    /* 0074c395: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074c397: je 0x74c4dc */ if (fZ) goto L_0074c4dc;
L_0074c39d:; BB(0x0074c39d);
    /* 0074c39d: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074c3a0: je 0x74c482 */ if (fZ) goto L_0074c482;
L_0074c3a6:; BB(0x0074c3a6);
    /* 0074c3a6: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074c3a9: je 0x74c446 */ if (fZ) goto L_0074c446;
L_0074c3af:; BB(0x0074c3af);
    /* 0074c3af: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074c3b2: je 0x74c41d */ if (fZ) goto L_0074c41d;
L_0074c3b4:; BB(0x0074c3b4);
    /* 0074c3b4: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074c3b7: jne 0x74c3d6 */ if (!fZ) goto L_0074c3d6;
L_0074c3b9:; BB(0x0074c3b9);
    /* 0074c3b9: mov ecx, dword ptr [edi + 0x30] */ r_ecx = R32((u32)(r_edi+0x30u));
    /* 0074c3bc: mov dword ptr [edi + 0x24], 0 */ W32((u32)(r_edi+0x24u), 0x0u);
    /* 0074c3c3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074c3c5: je 0x74c43c */ if (fZ) goto L_0074c43c;
L_0074c3c7:; BB(0x0074c3c7);
    /* 0074c3c7: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x74c3ccu); f_007127b0();
    /* 0074c3cc: mov dword ptr [edi + 0x30], 0 */ W32((u32)(r_edi+0x30u), 0x0u);
    /* 0074c3d3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0074c3d4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0074c3d5: ret  */ FN_RET(0x0074c364); r_esp += 4; return;
L_0074c3d6:; BB(0x0074c3d6);
    /* 0074c3d6: cmp edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0074c3d9: jne 0x74c43c */ if (!fZ) goto L_0074c43c;
L_0074c3db:; BB(0x0074c3db);
    /* 0074c3db: mov eax, dword ptr [edi + 0x24] */ r_eax = R32((u32)(r_edi+0x24u));
    /* 0074c3de: mov edx, dword ptr [edi + 0x34] */ r_edx = R32((u32)(r_edi+0x34u));
    /* 0074c3e1: movsx edx, word ptr [edx + 0x8c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edx+0x8cu));
    /* 0074c3e8: mov dword ptr [edi + 0x24], edx */ W32((u32)(r_edi+0x24u), r_edx);
    /* 0074c3eb: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074c3ed: je 0x74c3f7 */ if (fZ) goto L_0074c3f7;
L_0074c3ef:; BB(0x0074c3ef);
    /* 0074c3ef: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0074c3f0: mov ecx, edi */ r_ecx = r_edi;
    /* 0074c3f2: call 0x74c564 */ r_esp -= 4; W32(r_esp, 0x74c3f7u); f_0074c564();
L_0074c3f7:; BB(0x0074c3f7);
    /* 0074c3f7: push dword ptr [0xa0f678] */ { u32 v = R32((u32)(0xa0f678u)); r_esp -= 4; W32(r_esp, v); }
    /* 0074c3fd: lea eax, [esi + esi*4] */ r_eax = (u32)(r_esi+r_esi*4);
    /* 0074c400: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0074c402: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0074c404: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0074c406: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 0074c40d: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x74c412u); f_007c1160();
    /* 0074c412: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074c414: je 0x74c43c */ if (fZ) goto L_0074c43c;
L_0074c416:; BB(0x0074c416);
    /* 0074c416: mov byte ptr [edi + 0x1c], 0 */ W8((u32)(r_edi+0x1cu), 0x0u);
    /* 0074c41a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0074c41b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0074c41c: ret  */ FN_RET(0x0074c364); r_esp += 4; return;
L_0074c41d:; BB(0x0074c41d);
    /* 0074c41d: push dword ptr [0xa0f678] */ { u32 v = R32((u32)(0xa0f678u)); r_esp -= 4; W32(r_esp, v); }
    /* 0074c423: lea eax, [esi + esi*4] */ r_eax = (u32)(r_esi+r_esi*4);
    /* 0074c426: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0074c428: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0074c42a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0074c42c: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 0074c433: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x74c438u); f_007c1160();
    /* 0074c438: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074c43a: jne 0x74c43f */ if (!fZ) goto L_0074c43f;
L_0074c43c:; BB(0x0074c43c);
    /* 0074c43c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0074c43d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0074c43e: ret  */ FN_RET(0x0074c364); r_esp += 4; return;
L_0074c43f:; BB(0x0074c43f);
    /* 0074c43f: mov byte ptr [edi + 0x1c], 0 */ W8((u32)(r_edi+0x1cu), 0x0u);
    /* 0074c443: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0074c444: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0074c445: ret  */ FN_RET(0x0074c364); r_esp += 4; return;
L_0074c446:; BB(0x0074c446);
    /* 0074c446: mov ecx, dword ptr [edi + 0x34] */ r_ecx = R32((u32)(r_edi+0x34u));
    /* 0074c449: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074c44b: je 0x74c459 */ if (fZ) goto L_0074c459;
L_0074c44d:; BB(0x0074c44d);
    /* 0074c44d: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x74c452u); f_007127b0();
    /* 0074c452: mov dword ptr [edi + 0x34], 0 */ W32((u32)(r_edi+0x34u), 0x0u);
L_0074c459:; BB(0x0074c459);
    /* 0074c459: mov ecx, dword ptr [edi + 0x38] */ r_ecx = R32((u32)(r_edi+0x38u));
    /* 0074c45c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074c45e: je 0x74c46c */ if (fZ) goto L_0074c46c;
L_0074c460:; BB(0x0074c460);
    /* 0074c460: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x74c465u); f_007127b0();
    /* 0074c465: mov dword ptr [edi + 0x38], 0 */ W32((u32)(r_edi+0x38u), 0x0u);
L_0074c46c:; BB(0x0074c46c);
    /* 0074c46c: mov ecx, dword ptr [edi + 0x30] */ r_ecx = R32((u32)(r_edi+0x30u));
    /* 0074c46f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074c471: je 0x74c43c */ if (fZ) goto L_0074c43c;
L_0074c473:; BB(0x0074c473);
    /* 0074c473: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x74c478u); f_007127b0();
    /* 0074c478: mov dword ptr [edi + 0x30], 0 */ W32((u32)(r_edi+0x30u), 0x0u);
    /* 0074c47f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0074c480: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0074c481: ret  */ FN_RET(0x0074c364); r_esp += 4; return;
L_0074c482:; BB(0x0074c482);
    /* 0074c482: mov ecx, dword ptr [edi + 0x2c] */ r_ecx = R32((u32)(r_edi+0x2cu));
    /* 0074c485: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 0074c48c: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0074c48e: je 0x74c49f */ if (fZ) goto L_0074c49f;
L_0074c490:; BB(0x0074c490);
    /* 0074c490: mov ecx, dword ptr [edi + 0x28] */ r_ecx = R32((u32)(r_edi+0x28u));
    /* 0074c493: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0074c495: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x74c498u); call_ind(t); }
    /* 0074c498: mov byte ptr [edi + 0x1c], 6 */ W8((u32)(r_edi+0x1cu), 0x6u);
    /* 0074c49c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0074c49d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0074c49e: ret  */ FN_RET(0x0074c364); r_esp += 4; return;
L_0074c49f:; BB(0x0074c49f);
    /* 0074c49f: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074c4a1: je 0x74c43c */ if (fZ) goto L_0074c43c;
L_0074c4a3:; BB(0x0074c4a3);
    /* 0074c4a3: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x74c4a8u); f_007365f4();
    /* 0074c4a8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074c4aa: jne 0x74c4bd */ if (!fZ) goto L_0074c4bd;
L_0074c4ac:; BB(0x0074c4ac);
    /* 0074c4ac: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 0074c4b2: call 0x7f67e0 */ r_esp -= 4; W32(r_esp, 0x74c4b7u); f_007f67e0();
    /* 0074c4b7: mov byte ptr [edi + 0x1c], 2 */ W8((u32)(r_edi+0x1cu), 0x2u);
    /* 0074c4bb: jmp 0x74c4d1 */ goto L_0074c4d1;
L_0074c4bd:; BB(0x0074c4bd);
    /* 0074c4bd: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074c4c0: jne 0x74c4d1 */ if (!fZ) goto L_0074c4d1;
L_0074c4c2:; BB(0x0074c4c2);
    /* 0074c4c2: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 0074c4c8: call 0x7f6810 */ r_esp -= 4; W32(r_esp, 0x74c4cdu); f_007f6810();
    /* 0074c4cd: mov byte ptr [edi + 0x1c], 4 */ W8((u32)(r_edi+0x1cu), 0x4u);
L_0074c4d1:; BB(0x0074c4d1);
    /* 0074c4d1: mov ecx, dword ptr [edi + 0x2c] */ r_ecx = R32((u32)(r_edi+0x2cu));
    /* 0074c4d4: call 0x73600c */ r_esp -= 4; W32(r_esp, 0x74c4d9u); f_0073600c();
    /* 0074c4d9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0074c4da: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0074c4db: ret  */ FN_RET(0x0074c364); r_esp += 4; return;
L_0074c4dc:; BB(0x0074c4dc);
    /* 0074c4dc: mov edx, dword ptr [edi + 0x2c] */ r_edx = R32((u32)(r_edi+0x2cu));
    /* 0074c4df: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074c4e1: je 0x74c50c */ if (fZ) goto L_0074c50c;
L_0074c4e3:; BB(0x0074c4e3);
    /* 0074c4e3: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 0074c4ea: and eax, 0xfffd */ {  u32 a = r_eax; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0074c4ef: mov ecx, dword ptr [edx + 0x60] */ r_ecx = R32((u32)(r_edx+0x60u));
    /* 0074c4f2: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 0074c4f9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074c4fb: je 0x74c504 */ if (fZ) goto L_0074c504;
L_0074c4fd:; BB(0x0074c4fd);
    /* 0074c4fd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0074c4ff: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x74c504u); f_00760acc();
L_0074c504:; BB(0x0074c504);
    /* 0074c504: mov ecx, dword ptr [edi + 0x2c] */ r_ecx = R32((u32)(r_edi+0x2cu));
    /* 0074c507: call 0x73605c */ r_esp -= 4; W32(r_esp, 0x74c50cu); f_0073605c();
L_0074c50c:; BB(0x0074c50c);
    /* 0074c50c: mov ecx, dword ptr [edi + 0x34] */ r_ecx = R32((u32)(r_edi+0x34u));
    /* 0074c50f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074c511: je 0x74c51f */ if (fZ) goto L_0074c51f;
L_0074c513:; BB(0x0074c513);
    /* 0074c513: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x74c518u); f_007127b0();
    /* 0074c518: mov dword ptr [edi + 0x34], 0 */ W32((u32)(r_edi+0x34u), 0x0u);
L_0074c51f:; BB(0x0074c51f);
    /* 0074c51f: mov ecx, dword ptr [edi + 0x38] */ r_ecx = R32((u32)(r_edi+0x38u));
    /* 0074c522: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074c524: je 0x74c532 */ if (fZ) goto L_0074c532;
L_0074c526:; BB(0x0074c526);
    /* 0074c526: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x74c52bu); f_007127b0();
    /* 0074c52b: mov dword ptr [edi + 0x38], 0 */ W32((u32)(r_edi+0x38u), 0x0u);
L_0074c532:; BB(0x0074c532);
    /* 0074c532: mov ecx, dword ptr [edi + 0x30] */ r_ecx = R32((u32)(r_edi+0x30u));
    /* 0074c535: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074c537: je 0x74c545 */ if (fZ) goto L_0074c545;
L_0074c539:; BB(0x0074c539);
    /* 0074c539: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x74c53eu); f_007127b0();
    /* 0074c53e: mov dword ptr [edi + 0x30], 0 */ W32((u32)(r_edi+0x30u), 0x0u);
L_0074c545:; BB(0x0074c545);
    /* 0074c545: mov dword ptr [edi + 0x3c], 0 */ W32((u32)(r_edi+0x3cu), 0x0u);
    /* 0074c54c: mov byte ptr [edi + 0x1c], 1 */ W8((u32)(r_edi+0x1cu), 0x1u);
    /* 0074c550: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0074c551: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0074c552: ret  */ FN_RET(0x0074c364); r_esp += 4; return;
L_0074c553:; BB(0x0074c553);
    /* 0074c553: mov ecx, dword ptr [edi + 0x28] */ r_ecx = R32((u32)(r_edi+0x28u));
    /* 0074c556: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0074c558: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x74c55bu); call_ind(t); }
    /* 0074c55b: mov byte ptr [edi + 0x1c], 6 */ W8((u32)(r_edi+0x1cu), 0x6u);
    /* 0074c55f: jmp 0x74c384 */ goto L_0074c384;
}

void f_0074c564(void) /* sub_74C564 */
{
    FN_ENTER(0x0074c564);
    /* 0074c564: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0074c565: mov eax, ecx */ r_eax = r_ecx;
    /* 0074c567: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 0074c56a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074c56c: je 0x74c5aa */ if (fZ) goto L_0074c5aa;
L_0074c56e:; BB(0x0074c56e);
    /* 0074c56e: mov eax, dword ptr [eax + 0x3c] */ r_eax = R32((u32)(r_eax+0x3cu));
    /* 0074c571: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074c573: je 0x74c5aa */ if (fZ) goto L_0074c5aa;
L_0074c575:; BB(0x0074c575);
    /* 0074c575: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 0074c578: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074c57a: jne 0x74c580 */ if (!fZ) goto L_0074c580;
L_0074c57c:; BB(0x0074c57c);
    /* 0074c57c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0074c57d: ret 4 */ FN_RET(0x0074c564); r_esp += 8; return;
L_0074c580:; BB(0x0074c580);
    /* 0074c580: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 0074c584: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0074c586: lea esi, [edx + edx] */ r_esi = (u32)(r_edx+r_edx);
    /* 0074c589: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0074c58b: sub esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0074c58d: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0074c58f: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0074c591: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0074c593: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0074c595: add esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0074c597: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0074c599: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0074c59b: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0074c59d: lea eax, [eax + esi + 0x8c] */ r_eax = (u32)(r_eax+r_esi+0x8cu);
    /* 0074c5a4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074c5a5: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x74c5aau); f_0073ae38();
L_0074c5aa:; BB(0x0074c5aa);
    /* 0074c5aa: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0074c5ab: ret 4 */ FN_RET(0x0074c564); r_esp += 8; return;
}

void f_0074c5b0(void) /* sub_74C5B0 */
{
    FN_ENTER(0x0074c5b0);
    /* 0074c5b0: mov ecx, dword ptr [0xa9ab40] */ r_ecx = R32((u32)(0xa9ab40u));
    /* 0074c5b6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074c5b8: je 0x74c5c3 */ if (fZ) goto L_0074c5c3;
L_0074c5ba:; BB(0x0074c5ba);
    /* 0074c5ba: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0074c5be: call 0x74c5c4 */ r_esp -= 4; W32(r_esp, 0x74c5c3u); f_0074c5c4();
L_0074c5c3:; BB(0x0074c5c3);
    /* 0074c5c3: ret  */ FN_RET(0x0074c5b0); r_esp += 4; return;
}

void f_0074c5c4(void) /* sub_74C5C4 */
{
    FN_ENTER(0x0074c5c4);
    /* 0074c5c4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0074c5c5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0074c5c7: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0074c5cb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0074c5cd: call 0x74c5e0 */ r_esp -= 4; W32(r_esp, 0x74c5d2u); f_0074c5e0();
    /* 0074c5d2: mov byte ptr [ebx + 0x1c], 3 */ W8((u32)(r_ebx+0x1cu), 0x3u);
    /* 0074c5d6: mov dword ptr [ebx + 0x30], eax */ W32((u32)(r_ebx+0x30u), r_eax);
    /* 0074c5d9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074c5da: ret 4 */ FN_RET(0x0074c5c4); r_esp += 8; return;
}

void f_0074c5e0(void) /* sub_74C5E0 */
{
    FN_ENTER(0x0074c5e0);
    /* 0074c5e0: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0074c5e4: push dword ptr [ecx + 0x20] */ { u32 v = R32((u32)(r_ecx+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0074c5e7: call 0x74fa2c */ r_esp -= 4; W32(r_esp, 0x74c5ecu); f_0074fa2c();
    /* 0074c5ec: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0074c5ef: ret 4 */ FN_RET(0x0074c5e0); r_esp += 8; return;
}

void f_0074c5f4(void) /* sub_74C5F4 */
{
    FN_ENTER(0x0074c5f4);
    /* 0074c5f4: mov ecx, dword ptr [0xa9ab40] */ r_ecx = R32((u32)(0xa9ab40u));
    /* 0074c5fa: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074c5fc: je 0x74c607 */ if (fZ) goto L_0074c607;
L_0074c5fe:; BB(0x0074c5fe);
    /* 0074c5fe: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0074c602: call 0x74c608 */ r_esp -= 4; W32(r_esp, 0x74c607u); f_0074c608();
L_0074c607:; BB(0x0074c607);
    /* 0074c607: ret  */ FN_RET(0x0074c5f4); r_esp += 4; return;
}

void f_0074c608(void) /* sub_74C608 */
{
    FN_ENTER(0x0074c608);
    /* 0074c608: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0074c609: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0074c60a: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0074c60d: mov edi, ecx */ r_edi = r_ecx;
    /* 0074c60f: mov eax, dword ptr [edi + 0x34] */ r_eax = R32((u32)(r_edi+0x34u));
    /* 0074c612: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074c614: je 0x74c63f */ if (fZ) goto L_0074c63f;
L_0074c616:; BB(0x0074c616);
    /* 0074c616: mov eax, dword ptr [edi + 0x38] */ r_eax = R32((u32)(r_edi+0x38u));
    /* 0074c619: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074c61b: je 0x74c633 */ if (fZ) goto L_0074c633;
L_0074c61d:; BB(0x0074c61d);
    /* 0074c61d: push dword ptr [edi + 0x24] */ { u32 v = R32((u32)(r_edi+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 0074c620: mov ecx, edi */ r_ecx = r_edi;
    /* 0074c622: call 0x74c564 */ r_esp -= 4; W32(r_esp, 0x74c627u); f_0074c564();
    /* 0074c627: mov byte ptr [edi + 0x1c], 5 */ W8((u32)(r_edi+0x1cu), 0x5u);
    /* 0074c62b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0074c62e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0074c62f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0074c630: ret 4 */ FN_RET(0x0074c608); r_esp += 8; return;
L_0074c633:; BB(0x0074c633);
    /* 0074c633: mov ecx, edi */ r_ecx = r_edi;
    /* 0074c635: call 0x74c748 */ r_esp -= 4; W32(r_esp, 0x74c63au); f_0074c748();
    /* 0074c63a: mov dword ptr [edi + 0x38], eax */ W32((u32)(r_edi+0x38u), r_eax);
    /* 0074c63d: jmp 0x74c61d */ goto L_0074c61d;
L_0074c63f:; BB(0x0074c63f);
    /* 0074c63f: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0074c643: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074c645: je 0x74c743 */ if (fZ) goto L_0074c743;
L_0074c64b:; BB(0x0074c64b);
    /* 0074c64b: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0074c64f: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 0074c653: mov dword ptr [edi + 0x3c], eax */ W32((u32)(r_edi+0x3cu), r_eax);
    /* 0074c656: mov esi, dword ptr [edx + 8] */ r_esi = R32((u32)(r_edx+0x8u));
    /* 0074c659: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074c65b: jne 0x74c662 */ if (!fZ) goto L_0074c662;
L_0074c65d:; BB(0x0074c65d);
    /* 0074c65d: mov esi, 1 */ r_esi = 0x1u;
L_0074c662:; BB(0x0074c662);
    /* 0074c662: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0074c664: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x74c669u); f_0073ec50();
    /* 0074c669: fld dword ptr [0x9739c0] */ FPUSH(R_F32((u32)(0x9739c0u)));
    /* 0074c66f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0074c671: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0074c675: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 0074c678: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0074c67c: fadd dword ptr [esp + 8] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x8u));
    /* 0074c680: lea eax, [esp + 4] */ r_eax = (u32)(r_esp+0x4u);
    /* 0074c684: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0074c688: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0074c689: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074c68a: call 0x735708 */ r_esp -= 4; W32(r_esp, 0x74c68fu); f_00735708();
    /* 0074c68f: mov esi, eax */ r_esi = r_eax;
    /* 0074c691: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0074c694: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074c696: je 0x74c73b */ if (fZ) goto L_0074c73b;
L_0074c69c:; BB(0x0074c69c);
    /* 0074c69c: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 0074c6a0: mov edx, dword ptr [edx + 8] */ r_edx = R32((u32)(r_edx+0x8u));
    /* 0074c6a3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0074c6a5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 0074c6a7: jbe 0x74c6fb */ if ((fC||fZ)) goto L_0074c6fb;
L_0074c6a9:; BB(0x0074c6a9);
    /* 0074c6a9: mov ecx, dword ptr [esp + 0x1c] */ r_ecx = R32((u32)(r_esp+0x1cu));
    /* 0074c6ad: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 0074c6b1: mov dword ptr [esp + 0xc], ebp */ W32((u32)(r_esp+0xcu), r_ebp);
    /* 0074c6b5: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0074c6b8: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0074c6ba: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0074c6bc: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0074c6be: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0074c6c0: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0074c6c2: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0074c6c4: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0074c6c6: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0074c6c8: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0074c6ca: lea edx, [edx + edx + 0xc] */ r_edx = (u32)(r_edx+r_edx+0xcu);
    /* 0074c6ce: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0074c6d0: mov ebp, eax */ r_ebp = r_eax;
    /* 0074c6d2: mov ebx, edx */ r_ebx = r_edx;
L_0074c6d4:; BB(0x0074c6d4);
    /* 0074c6d4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0074c6d5: push 0x5d */ { u32 v = 0x5du; r_esp -= 4; W32(r_esp, v); }
    /* 0074c6d7: mov ecx, esi */ r_ecx = r_esi;
    /* 0074c6d9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0074c6da: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x74c6dfu); f_00735c90();
    /* 0074c6df: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0074c6e3: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 0074c6e6: add ebx, 0x188 */ {  u32 a = r_ebx; u32 b = 0x188u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0074c6ec: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0074c6ef: cmp ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0074c6f1: jb 0x74c6d4 */ if (fC) goto L_0074c6d4;
L_0074c6f3:; BB(0x0074c6f3);
    /* 0074c6f3: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 0074c6f7: mov ebp, dword ptr [esp + 0xc] */ r_ebp = R32((u32)(r_esp+0xcu));
L_0074c6fb:; BB(0x0074c6fb);
    /* 0074c6fb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074c6fd: jne 0x74c716 */ if (!fZ) goto L_0074c716;
L_0074c6ff:; BB(0x0074c6ff);
    /* 0074c6ff: push 0xee */ { u32 v = 0xeeu; r_esp -= 4; W32(r_esp, v); }
    /* 0074c704: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x74c709u); f_0079317c();
    /* 0074c709: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0074c70a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0074c70c: push 0x5d */ { u32 v = 0x5du; r_esp -= 4; W32(r_esp, v); }
    /* 0074c70e: mov ecx, esi */ r_ecx = r_esi;
    /* 0074c710: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074c711: call 0x735ee0 */ r_esp -= 4; W32(r_esp, 0x74c716u); f_00735ee0();
L_0074c716:; BB(0x0074c716);
    /* 0074c716: push 0x430c0000 */ { u32 v = 0x430c0000u; r_esp -= 4; W32(r_esp, v); }
    /* 0074c71b: mov ecx, esi */ r_ecx = r_esi;
    /* 0074c71d: movzx edx, word ptr [esi + 0x84] */ r_edx = (u32)R16((u32)(r_esi+0x84u));
    /* 0074c724: or edx, 0xffff0010 */ {  u32 a = r_edx; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0074c72a: mov word ptr [esi + 0x84], dx */ W16((u32)(r_esi+0x84u), (u16)r_edx);
    /* 0074c731: push 0x43c80000 */ { u32 v = 0x43c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0074c736: call 0x7361d0 */ r_esp -= 4; W32(r_esp, 0x74c73bu); f_007361d0();
L_0074c73b:; BB(0x0074c73b);
    /* 0074c73b: mov dword ptr [edi + 0x34], esi */ W32((u32)(r_edi+0x34u), r_esi);
    /* 0074c73e: jmp 0x74c616 */ goto L_0074c616;
L_0074c743:; BB(0x0074c743);
    /* 0074c743: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0074c745: jmp 0x74c73b */ goto L_0074c73b;
}

void f_0074c748(void) /* sub_74C748 */
{
    FN_ENTER(0x0074c748);
    /* 0074c748: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0074c74b: mov dword ptr [esp], 0x434e0000 */ W32((u32)(r_esp), 0x434e0000u);
    /* 0074c752: mov dword ptr [esp + 4], 0x43340000 */ W32((u32)(r_esp+0x4u), 0x43340000u);
    /* 0074c75a: push 0x8a */ { u32 v = 0x8au; r_esp -= 4; W32(r_esp, v); }
    /* 0074c75f: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x74c764u); f_0073ec50();
    /* 0074c764: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 0074c768: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0074c769: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074c76a: call 0x73a888 */ r_esp -= 4; W32(r_esp, 0x74c76fu); f_0073a888();
    /* 0074c76f: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0074c772: ret  */ FN_RET(0x0074c748); r_esp += 4; return;
}

void f_0074c774(void) /* sub_74C774 */
{
    FN_ENTER(0x0074c774);
    /* 0074c774: mov dword ptr [0xa9ab44], 0x3f800000 */ W32((u32)(0xa9ab44u), 0x3f800000u);
    /* 0074c77e: mov dword ptr [0xa9ab48], 0x41000000 */ W32((u32)(0xa9ab48u), 0x41000000u);
    /* 0074c788: mov dword ptr [0xa9ab4c], 0x3fc00000 */ W32((u32)(0xa9ab4cu), 0x3fc00000u);
    /* 0074c792: ret  */ FN_RET(0x0074c774); r_esp += 4; return;
}

void f_0074c794(void) /* sub_74C794 */
{
    FN_ENTER(0x0074c794);
    /* 0074c794: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0074c795: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0074c797: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0074c799: call 0x74c7b8 */ r_esp -= 4; W32(r_esp, 0x74c79eu); f_0074c7b8();
    /* 0074c79e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0074c7a2: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074c7a4: jne 0x74c7aa */ if (!fZ) goto L_0074c7aa;
L_0074c7a6:; BB(0x0074c7a6);
    /* 0074c7a6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074c7a7: ret 4 */ FN_RET(0x0074c794); r_esp += 8; return;
L_0074c7aa:; BB(0x0074c7aa);
    /* 0074c7aa: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0074c7ab: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x74c7b0u); f_005c2f74();
    /* 0074c7b0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0074c7b1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074c7b2: ret 4 */ FN_RET(0x0074c794); r_esp += 8; return;
}

void f_0074c7b8(void) /* sub_74C7B8 */
{
    FN_ENTER(0x0074c7b8);
    /* 0074c7b8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0074c7b9: mov ebp, esp */ r_ebp = r_esp;
    /* 0074c7bb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0074c7bd: push 0x8f28dc */ { u32 v = 0x8f28dcu; r_esp -= 4; W32(r_esp, v); }
    /* 0074c7c2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0074c7c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074c7c9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0074c7d0: sub esp, 0x70 */ {  u32 a = r_esp; u32 b = 0x70u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0074c7d3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0074c7d6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0074c7d9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0074c7dc: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0074c7df: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0074c7e2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0074c7e9: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0074c7ec: movzx eax, word ptr [edx + 0x28] */ r_eax = (u32)R16((u32)(r_edx+0x28u));
    /* 0074c7f0: mov dword ptr [edx], 0xb41e68 */ W32((u32)(r_edx), 0xb41e68u);
    /* 0074c7f6: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074c7fb: je 0x74c818 */ if (fZ) goto L_0074c818;
L_0074c7fd:; BB(0x0074c7fd);
    /* 0074c7fd: mov byte ptr [ebp - 0x7c], 0xc1 */ W8((u32)(r_ebp+0xffffff84u), 0xc1u);
    /* 0074c801: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074c802: mov byte ptr [ebp - 0x7b], 0x17 */ W8((u32)(r_ebp+0xffffff85u), 0x17u);
    /* 0074c806: lea ecx, [ebp - 0x7c] */ r_ecx = (u32)(r_ebp+0xffffff84u);
    /* 0074c809: mov dword ptr [ebp - 0x74], 1 */ W32((u32)(r_ebp+0xffffff8cu), 0x1u);
    /* 0074c810: call 0x800464 */ r_esp -= 4; W32(r_esp, 0x74c815u); f_00800464();
    /* 0074c815: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
L_0074c818:; BB(0x0074c818);
    /* 0074c818: mov ecx, dword ptr [edx + 0x38] */ r_ecx = R32((u32)(r_edx+0x38u));
    /* 0074c81b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074c81d: je 0x74c82e */ if (fZ) goto L_0074c82e;
L_0074c81f:; BB(0x0074c81f);
    /* 0074c81f: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x74c824u); f_007127b0();
    /* 0074c824: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0074c827: mov dword ptr [edx + 0x38], 0 */ W32((u32)(r_edx+0x38u), 0x0u);
L_0074c82e:; BB(0x0074c82e);
    /* 0074c82e: mov ecx, dword ptr [edx + 0x34] */ r_ecx = R32((u32)(r_edx+0x34u));
    /* 0074c831: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074c833: je 0x74c844 */ if (fZ) goto L_0074c844;
L_0074c835:; BB(0x0074c835);
    /* 0074c835: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x74c83au); f_007127b0();
    /* 0074c83a: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0074c83d: mov dword ptr [edx + 0x34], 0 */ W32((u32)(r_edx+0x34u), 0x0u);
L_0074c844:; BB(0x0074c844);
    /* 0074c844: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0074c84b: mov ecx, edx */ r_ecx = r_edx;
    /* 0074c84d: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x74c852u); f_008171e8();
    /* 0074c852: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0074c855: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0074c85c: mov esp, ebp */ r_esp = r_ebp;
    /* 0074c85e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074c85f: ret  */ FN_RET(0x0074c7b8); r_esp += 4; return;
}

void f_0074c860(void) /* sub_74C860 */
{
    FN_ENTER(0x0074c860);
    /* 0074c860: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0074c861: mov ebp, esp */ r_ebp = r_esp;
    /* 0074c863: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0074c865: push 0x8f28f8 */ { u32 v = 0x8f28f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0074c86a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0074c870: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074c871: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0074c878: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0074c87b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0074c87e: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 0074c881: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 0074c884: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 0074c887: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0074c88a: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0074c88d: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 0074c890: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0074c891: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0074c894: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0074c897: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x74c89cu); f_008193cc();
    /* 0074c89c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0074c8a3: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 0074c8a6: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0074c8a9: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0074c8ac: mov ebx, 0xffff */ r_ebx = 0xffffu;
    /* 0074c8b1: mov dword ptr [edi + 0x30], edx */ W32((u32)(r_edi+0x30u), r_edx);
    /* 0074c8b4: mov dword ptr [edi], 0xb41e68 */ W32((u32)(r_edi), 0xb41e68u);
    /* 0074c8ba: mov eax, dword ptr [0x9f4074] */ r_eax = R32((u32)(0x9f4074u));
    /* 0074c8bf: mov dword ptr [edi + 4], eax */ W32((u32)(r_edi+0x4u), r_eax);
    /* 0074c8c2: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0074c8c4: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 0074c8c6: mov dword ptr [edi + 0x34], esi */ W32((u32)(r_edi+0x34u), r_esi);
    /* 0074c8c9: mov dword ptr [edi + 0x20], ecx */ W32((u32)(r_edi+0x20u), r_ecx);
    /* 0074c8cc: mov dword ptr [edi + 0x24], esi */ W32((u32)(r_edi+0x24u), r_esi);
    /* 0074c8cf: mov word ptr [edi + 0x28], bx */ W16((u32)(r_edi+0x28u), (u16)r_ebx);
    /* 0074c8d3: mov dword ptr [edi + 0x2c], esi */ W32((u32)(r_edi+0x2cu), r_esi);
    /* 0074c8d6: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x74c8dbu); f_0073ec50();
    /* 0074c8db: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0074c8de: push dword ptr [edx + 0x20] */ { u32 v = R32((u32)(r_edx+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0074c8e1: push 0x973a4c */ { u32 v = 0x973a4cu; r_esp -= 4; W32(r_esp, v); }
    /* 0074c8e6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074c8e7: call 0x74d248 */ r_esp -= 4; W32(r_esp, 0x74c8ecu); f_0074d248();
    /* 0074c8ec: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0074c8ef: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0074c8f2: mov dword ptr [ecx + 0x38], eax */ W32((u32)(r_ecx+0x38u), r_eax);
    /* 0074c8f5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074c8f7: je 0x74c92f */ if (fZ) goto L_0074c92f;
L_0074c8f9:; BB(0x0074c8f9);
    /* 0074c8f9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0074c8fb: mov ecx, dword ptr [ecx + 0x30] */ r_ecx = R32((u32)(r_ecx+0x30u));
    /* 0074c8fe: call 0x7336fc */ r_esp -= 4; W32(r_esp, 0x74c903u); f_007336fc();
    /* 0074c903: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0074c906: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 0074c909: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0074c90a: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0074c90d: call 0x712624 */ r_esp -= 4; W32(r_esp, 0x74c912u); f_00712624();
    /* 0074c912: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0074c915: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 0074c918: movzx edx, word ptr [ecx + 0x84] */ r_edx = (u32)R16((u32)(r_ecx+0x84u));
    /* 0074c91f: or edx, 0xffff0010 */ {  u32 a = r_edx; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0074c925: mov word ptr [ecx + 0x84], dx */ W16((u32)(r_ecx+0x84u), (u16)r_edx);
    /* 0074c92c: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
L_0074c92f:; BB(0x0074c92f);
    /* 0074c92f: movzx edx, word ptr [0xa98474] */ r_edx = (u32)R16((u32)(0xa98474u));
    /* 0074c936: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0074c939: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0074c93c: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0074c93f: and edx, 0xffdf */ {  u32 a = r_edx; u32 b = 0xffdfu; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074c945: mov eax, ecx */ r_eax = r_ecx;
    /* 0074c947: mov byte ptr [ecx + 0x1c], 0 */ W8((u32)(r_ecx+0x1cu), 0x0u);
    /* 0074c94b: mov word ptr [0xa98474], dx */ W16((u32)(0xa98474u), (u16)r_edx);
    /* 0074c952: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0074c955: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0074c95c: mov esp, ebp */ r_esp = r_ebp;
    /* 0074c95e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074c95f: ret 8 */ FN_RET(0x0074c860); r_esp += 12; return;
}

void f_0074c964(void) /* sub_74C964 */
{
    FN_ENTER(0x0074c964);
    /* 0074c964: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0074c965: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0074c966: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0074c967: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0074c968: sub esp, 0x368 */ {  u32 a = r_esp; u32 b = 0x368u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0074c96e: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0074c970: mov byte ptr [esp + 8], 0xc2 */ W8((u32)(r_esp+0x8u), 0xc2u);
    /* 0074c975: mov byte ptr [esp + 9], 0x17 */ W8((u32)(r_esp+0x9u), 0x17u);
    /* 0074c97a: push dword ptr [ebp + 0x20] */ { u32 v = R32((u32)(r_ebp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0074c97d: call 0x719140 */ r_esp -= 4; W32(r_esp, 0x74c982u); f_00719140();
    /* 0074c982: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0074c983: movzx eax, byte ptr [ebp + 0x1c] */ r_eax = (u32)R8((u32)(r_ebp+0x1cu));
    /* 0074c987: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0074c98a: ja 0x74cffd */ if ((!fC&&!fZ)) goto L_0074cffd;
L_0074c990:; BB(0x0074c990);
    /* 0074c990: mov eax, dword ptr [eax*4 + 0x973a00] */ r_eax = R32((u32)(r_eax*4+0x973a00u));
    /* 0074c997: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0074cffd:; BB(0x0074cffd);
    /* 0074cffd: add esp, 0x368 */ {  u32 a = r_esp; u32 b = 0x368u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0074d003: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074d004: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074d005: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0074d006: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0074d007: ret  */ FN_RET(0x0074c964); r_esp += 4; return;
}

void f_0074c999(void)
{
    FN_ENTER(0x0074c999);
    /* 0074c999: call 0x694c6c */ r_esp -= 4; W32(r_esp, 0x74c99eu); f_00694c6c();
    /* 0074c99e: mov edx, dword ptr [0xa0f674] */ r_edx = R32((u32)(0xa0f674u));
    /* 0074c9a4: or edx, dword ptr [0xa0f698] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa0f698u)); u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0074c9aa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0074c9ab: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 0074c9ae: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0074c9b0: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0074c9b2: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0074c9b4: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 0074c9bb: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x74c9c0u); f_007c1160();
    /* 0074c9c0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074c9c2: je 0x74cffd */ if (fZ) goto L_0074cffd;
L_0074c9c8:; BB(0x0074c9c8);
    /* 0074c9c8: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 0074c9cd: mov ecx, dword ptr [ebp + 0x30] */ r_ecx = R32((u32)(r_ebp+0x30u));
    /* 0074c9d0: mov word ptr [ebp + 0x28], ax */ W16((u32)(r_ebp+0x28u), (u16)r_eax);
    /* 0074c9d4: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0074c9d6: call dword ptr [edx + 0x1c] */ { u32 t = R32((u32)(r_edx+0x1cu)); r_esp -= 4; W32(r_esp, 0x74c9d9u); call_ind(t); }
    /* 0074c9d9: mov byte ptr [ebp + 0x1c], 0xb */ W8((u32)(r_ebp+0x1cu), 0xbu);
    /* 0074c9dd: add esp, 0x368 */ {  u32 a = r_esp; u32 b = 0x368u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0074c9e3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074c9e4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074c9e5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0074c9e6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0074c9e7: ret  */ FN_RET(0x0074c999); r_esp += 4; return;
L_0074cffd:; BB(0x0074cffd);
    /* 0074cffd: add esp, 0x368 */ {  u32 a = r_esp; u32 b = 0x368u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0074d003: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074d004: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074d005: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0074d006: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0074d007: ret  */ FN_RET(0x0074c999); r_esp += 4; return;
}

void f_0074c9e8(void)
{
    FN_ENTER(0x0074c9e8);
    /* 0074c9e8: mov eax, dword ptr [ebp + 0x34] */ r_eax = R32((u32)(r_ebp+0x34u));
    /* 0074c9eb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074c9ed: je 0x74d008 */ if (fZ) goto L_0074d008;
L_0074c9f3:; BB(0x0074c9f3);
    /* 0074c9f3: push 0x152 */ { u32 v = 0x152u; r_esp -= 4; W32(r_esp, v); }
    /* 0074c9f8: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x74c9fdu); f_0079317c();
    /* 0074c9fd: mov ebx, eax */ r_ebx = r_eax;
    /* 0074c9ff: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0074ca02: call 0x78bf60 */ r_esp -= 4; W32(r_esp, 0x74ca07u); f_0078bf60();
    /* 0074ca07: lea edx, [esp + 0x6c] */ r_edx = (u32)(r_esp+0x6cu);
    /* 0074ca0b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074ca0c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0074ca0d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0074ca0e: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x74ca13u); f_00857e29();
    /* 0074ca13: push 0x153 */ { u32 v = 0x153u; r_esp -= 4; W32(r_esp, v); }
    /* 0074ca18: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x74ca1du); f_0079317c();
    /* 0074ca1d: lea edx, [esp + 0x7c] */ r_edx = (u32)(r_esp+0x7cu);
    /* 0074ca21: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 0074ca26: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074ca27: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0074ca28: call 0x858b0f */ r_esp -= 4; W32(r_esp, 0x74ca2du); f_00858b0f();
    /* 0074ca2d: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0074ca30: lea eax, [esp + 0x6c] */ r_eax = (u32)(r_esp+0x6cu);
    /* 0074ca34: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0074ca36: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074ca37: mov ecx, dword ptr [ebp + 0x34] */ r_ecx = R32((u32)(r_ebp+0x34u));
    /* 0074ca3a: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x74ca3fu); f_0073ae38();
    /* 0074ca3f: push dword ptr [ebp + 0x20] */ { u32 v = R32((u32)(r_ebp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0074ca42: call 0x718138 */ r_esp -= 4; W32(r_esp, 0x74ca47u); f_00718138();
    /* 0074ca47: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0074ca48: mov byte ptr [ebp + 0x1c], 0xa */ W8((u32)(r_ebp+0x1cu), 0xau);
    /* 0074ca4c: add esp, 0x368 */ {  u32 a = r_esp; u32 b = 0x368u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0074ca52: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074ca53: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074ca54: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0074ca55: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0074ca56: ret  */ FN_RET(0x0074c9e8); r_esp += 4; return;
L_0074d008:; BB(0x0074d008);
    /* 0074d008: mov dword ptr [esp + 0x64], 0x434e0000 */ W32((u32)(r_esp+0x64u), 0x434e0000u);
    /* 0074d010: mov dword ptr [esp + 0x68], 0x43340000 */ W32((u32)(r_esp+0x68u), 0x43340000u);
    /* 0074d018: push 0x8a */ { u32 v = 0x8au; r_esp -= 4; W32(r_esp, v); }
    /* 0074d01d: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x74d022u); f_0073ec50();
    /* 0074d022: lea edx, [esp + 0x68] */ r_edx = (u32)(r_esp+0x68u);
    /* 0074d026: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0074d027: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074d028: call 0x73a888 */ r_esp -= 4; W32(r_esp, 0x74d02du); f_0073a888();
    /* 0074d02d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0074d030: mov dword ptr [ebp + 0x34], eax */ W32((u32)(r_ebp+0x34u), r_eax);
    /* 0074d033: jmp 0x74c9f3 */ goto L_0074c9f3;
}

void f_0074ca57(void)
{
    FN_ENTER(0x0074ca57);
    /* 0074ca57: mov eax, dword ptr [ebp + 0x34] */ r_eax = R32((u32)(r_ebp+0x34u));
    /* 0074ca5a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074ca5c: je 0x74d038 */ if (fZ) goto L_0074d038;
L_0074ca62:; BB(0x0074ca62);
    /* 0074ca62: push 0x153 */ { u32 v = 0x153u; r_esp -= 4; W32(r_esp, v); }
    /* 0074ca67: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x74ca6cu); f_0079317c();
    /* 0074ca6c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0074ca6d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0074ca6f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074ca70: mov ecx, dword ptr [ebp + 0x34] */ r_ecx = R32((u32)(r_ebp+0x34u));
    /* 0074ca73: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x74ca78u); f_0073ae38();
    /* 0074ca78: mov eax, 0xa9c8c0 */ r_eax = 0xa9c8c0u;
    /* 0074ca7d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0074ca7f: mov ebx, dword ptr [eax + 4] */ r_ebx = R32((u32)(r_eax+0x4u));
    /* 0074ca82: mov esi, dword ptr [eax + 8] */ r_esi = R32((u32)(r_eax+0x8u));
    /* 0074ca85: mov edi, dword ptr [eax + 0xc] */ r_edi = R32((u32)(r_eax+0xcu));
    /* 0074ca88: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 0074ca8c: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 0074ca8f: mov dword ptr [esp + 0x10], ebx */ W32((u32)(r_esp+0x10u), r_ebx);
    /* 0074ca93: mov dword ptr [esp + 0x14], esi */ W32((u32)(r_esp+0x14u), r_esi);
    /* 0074ca97: mov dword ptr [esp + 0x18], edi */ W32((u32)(r_esp+0x18u), r_edi);
    /* 0074ca9b: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 0074ca9f: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 0074caa2: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 0074caa6: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 0074caa9: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 0074caad: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 0074cab0: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 0074cab4: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 0074cab7: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 0074cabb: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 0074cabe: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 0074cac2: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 0074cac5: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 0074cac9: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 0074cacc: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
    /* 0074cad0: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 0074cad3: mov dword ptr [esp + 0x3c], edx */ W32((u32)(r_esp+0x3cu), r_edx);
    /* 0074cad7: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 0074cada: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
    /* 0074cade: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 0074cae1: mov dword ptr [esp + 0x44], edx */ W32((u32)(r_esp+0x44u), r_edx);
    /* 0074cae5: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 0074cae8: mov dword ptr [esp + 0x48], edx */ W32((u32)(r_esp+0x48u), r_edx);
    /* 0074caec: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 0074caef: mov dword ptr [esp + 0x4c], edx */ W32((u32)(r_esp+0x4cu), r_edx);
    /* 0074caf3: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0074caf6: mov dword ptr [esp + 0x50], edx */ W32((u32)(r_esp+0x50u), r_edx);
    /* 0074cafa: mov edx, dword ptr [eax + 0x48] */ r_edx = R32((u32)(r_eax+0x48u));
    /* 0074cafd: mov dword ptr [esp + 0x54], edx */ W32((u32)(r_esp+0x54u), r_edx);
    /* 0074cb01: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 0074cb04: mov dword ptr [esp + 0x58], edx */ W32((u32)(r_esp+0x58u), r_edx);
    /* 0074cb08: mov edx, dword ptr [eax + 0x50] */ r_edx = R32((u32)(r_eax+0x50u));
    /* 0074cb0b: mov eax, dword ptr [eax + 0x54] */ r_eax = R32((u32)(r_eax+0x54u));
    /* 0074cb0e: mov dword ptr [esp + 0x5c], edx */ W32((u32)(r_esp+0x5cu), r_edx);
    /* 0074cb12: mov dword ptr [esp + 0x60], eax */ W32((u32)(r_esp+0x60u), r_eax);
    /* 0074cb16: movzx eax, word ptr [ebp + 0x28] */ r_eax = (u32)R16((u32)(r_ebp+0x28u));
    /* 0074cb1a: mov dword ptr [esp + 0x10], 4 */ W32((u32)(r_esp+0x10u), 0x4u);
    /* 0074cb22: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074cb23: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 0074cb27: call 0x800464 */ r_esp -= 4; W32(r_esp, 0x74cb2cu); f_00800464();
    /* 0074cb2c: push dword ptr [ebp + 0x20] */ { u32 v = R32((u32)(r_ebp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0074cb2f: call 0x718138 */ r_esp -= 4; W32(r_esp, 0x74cb34u); f_00718138();
    /* 0074cb34: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0074cb35: mov byte ptr [ebp + 0x1c], 0xa */ W8((u32)(r_ebp+0x1cu), 0xau);
    /* 0074cb39: add esp, 0x368 */ {  u32 a = r_esp; u32 b = 0x368u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0074cb3f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074cb40: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074cb41: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0074cb42: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0074cb43: ret  */ FN_RET(0x0074ca57); r_esp += 4; return;
L_0074d038:; BB(0x0074d038);
    /* 0074d038: mov dword ptr [esp + 0x16c], 0x434e0000 */ W32((u32)(r_esp+0x16cu), 0x434e0000u);
    /* 0074d043: mov dword ptr [esp + 0x170], 0x43340000 */ W32((u32)(r_esp+0x170u), 0x43340000u);
    /* 0074d04e: push 0x8a */ { u32 v = 0x8au; r_esp -= 4; W32(r_esp, v); }
    /* 0074d053: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x74d058u); f_0073ec50();
    /* 0074d058: lea edx, [esp + 0x170] */ r_edx = (u32)(r_esp+0x170u);
    /* 0074d05f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0074d060: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074d061: call 0x73a888 */ r_esp -= 4; W32(r_esp, 0x74d066u); f_0073a888();
    /* 0074d066: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0074d069: mov dword ptr [ebp + 0x34], eax */ W32((u32)(r_ebp+0x34u), r_eax);
    /* 0074d06c: jmp 0x74ca62 */ goto L_0074ca62;
}

void f_0074cb00(void)
{
    FN_ENTER(0x0074cb00);
    /* 0074cb00: push esp */ { u32 v = r_esp; r_esp -= 4; W32(r_esp, v); }
    /* 0074cb01: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 0074cb04: mov dword ptr [esp + 0x58], edx */ W32((u32)(r_esp+0x58u), r_edx);
    /* 0074cb08: mov edx, dword ptr [eax + 0x50] */ r_edx = R32((u32)(r_eax+0x50u));
    /* 0074cb0b: mov eax, dword ptr [eax + 0x54] */ r_eax = R32((u32)(r_eax+0x54u));
    /* 0074cb0e: mov dword ptr [esp + 0x5c], edx */ W32((u32)(r_esp+0x5cu), r_edx);
    /* 0074cb12: mov dword ptr [esp + 0x60], eax */ W32((u32)(r_esp+0x60u), r_eax);
    /* 0074cb16: movzx eax, word ptr [ebp + 0x28] */ r_eax = (u32)R16((u32)(r_ebp+0x28u));
    /* 0074cb1a: mov dword ptr [esp + 0x10], 4 */ W32((u32)(r_esp+0x10u), 0x4u);
    /* 0074cb22: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074cb23: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 0074cb27: call 0x800464 */ r_esp -= 4; W32(r_esp, 0x74cb2cu); f_00800464();
    /* 0074cb2c: push dword ptr [ebp + 0x20] */ { u32 v = R32((u32)(r_ebp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0074cb2f: call 0x718138 */ r_esp -= 4; W32(r_esp, 0x74cb34u); f_00718138();
    /* 0074cb34: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0074cb35: mov byte ptr [ebp + 0x1c], 0xa */ W8((u32)(r_ebp+0x1cu), 0xau);
    /* 0074cb39: add esp, 0x368 */ {  u32 a = r_esp; u32 b = 0x368u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0074cb3f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074cb40: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074cb41: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0074cb42: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0074cb43: ret  */ FN_RET(0x0074cb00); r_esp += 4; return;
}

void f_0074cb44(void)
{
    FN_ENTER(0x0074cb44);
    /* 0074cb44: mov eax, dword ptr [ebp + 0x34] */ r_eax = R32((u32)(r_ebp+0x34u));
    /* 0074cb47: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074cb49: je 0x74d071 */ if (fZ) goto L_0074d071;
L_0074cb4f:; BB(0x0074cb4f);
    /* 0074cb4f: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x74cb54u); f_006dc358();
    /* 0074cb54: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074cb57: jne 0x74cbbd */ if (!fZ) goto L_0074cbbd;
L_0074cb59:; BB(0x0074cb59);
    /* 0074cb59: push 0x182 */ { u32 v = 0x182u; r_esp -= 4; W32(r_esp, v); }
    /* 0074cb5e: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x74cb63u); f_0079317c();
    /* 0074cb63: mov ebx, eax */ r_ebx = r_eax;
    /* 0074cb65: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0074cb68: call 0x78bf68 */ r_esp -= 4; W32(r_esp, 0x74cb6du); f_0078bf68();
    /* 0074cb6d: lea edx, [esp + 0x6c] */ r_edx = (u32)(r_esp+0x6cu);
    /* 0074cb71: push 0xa9ab78 */ { u32 v = 0xa9ab78u; r_esp -= 4; W32(r_esp, v); }
    /* 0074cb76: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074cb77: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0074cb78: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0074cb79: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x74cb7eu); f_00857e29();
    /* 0074cb7e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0074cb81: lea eax, [esp + 0x6c] */ r_eax = (u32)(r_esp+0x6cu);
    /* 0074cb85: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0074cb87: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074cb88: mov ecx, dword ptr [ebp + 0x34] */ r_ecx = R32((u32)(r_ebp+0x34u));
    /* 0074cb8b: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x74cb90u); f_0073ae38();
    /* 0074cb90: push 0x183 */ { u32 v = 0x183u; r_esp -= 4; W32(r_esp, v); }
    /* 0074cb95: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x74cb9au); f_0079317c();
    /* 0074cb9a: mov ebx, eax */ r_ebx = r_eax;
    /* 0074cb9c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0074cb9f: call 0x78bf68 */ r_esp -= 4; W32(r_esp, 0x74cba4u); f_0078bf68();
    /* 0074cba4: lea edx, [esp + 0x6c] */ r_edx = (u32)(r_esp+0x6cu);
    /* 0074cba8: push 0xa9ab78 */ { u32 v = 0xa9ab78u; r_esp -= 4; W32(r_esp, v); }
    /* 0074cbad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074cbae: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0074cbaf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0074cbb0: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x74cbb5u); f_00857e29();
    /* 0074cbb5: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0074cbb8: jmp 0x74cc4e */ goto L_0074cc4e;
L_0074cbbd:; BB(0x0074cbbd);
    /* 0074cbbd: push 0x150 */ { u32 v = 0x150u; r_esp -= 4; W32(r_esp, v); }
    /* 0074cbc2: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x74cbc7u); f_0079317c();
    /* 0074cbc7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0074cbc8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0074cbca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074cbcb: mov ecx, dword ptr [ebp + 0x34] */ r_ecx = R32((u32)(r_ebp+0x34u));
    /* 0074cbce: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x74cbd3u); f_0073ae38();
    /* 0074cbd3: push 0x14d */ { u32 v = 0x14du; r_esp -= 4; W32(r_esp, v); }
    /* 0074cbd8: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x74cbddu); f_0079317c();
    /* 0074cbdd: mov ebx, eax */ r_ebx = r_eax;
    /* 0074cbdf: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0074cbe2: call 0x78bf68 */ r_esp -= 4; W32(r_esp, 0x74cbe7u); f_0078bf68();
    /* 0074cbe7: lea edx, [esp + 0x17c] */ r_edx = (u32)(r_esp+0x17cu);
    /* 0074cbee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074cbef: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0074cbf0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0074cbf1: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x74cbf6u); f_00857e29();
    /* 0074cbf6: push 0x14e */ { u32 v = 0x14eu; r_esp -= 4; W32(r_esp, v); }
    /* 0074cbfb: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x74cc00u); f_0079317c();
    /* 0074cc00: lea edx, [esp + 0x18c] */ r_edx = (u32)(r_esp+0x18cu);
    /* 0074cc07: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 0074cc0c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074cc0d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0074cc0e: call 0x858b0f */ r_esp -= 4; W32(r_esp, 0x74cc13u); f_00858b0f();
    /* 0074cc13: push 0x151 */ { u32 v = 0x151u; r_esp -= 4; W32(r_esp, v); }
    /* 0074cc18: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x74cc1du); f_0079317c();
    /* 0074cc1d: lea edx, [esp + 0x19c] */ r_edx = (u32)(r_esp+0x19cu);
    /* 0074cc24: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 0074cc29: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074cc2a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0074cc2b: call 0x858b0f */ r_esp -= 4; W32(r_esp, 0x74cc30u); f_00858b0f();
    /* 0074cc30: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0074cc33: call 0x78bf60 */ r_esp -= 4; W32(r_esp, 0x74cc38u); f_0078bf60();
    /* 0074cc38: lea ebx, [esp + 0x6c] */ r_ebx = (u32)(r_esp+0x6cu);
    /* 0074cc3c: lea edx, [esp + 0x17c] */ r_edx = (u32)(r_esp+0x17cu);
    /* 0074cc43: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074cc44: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0074cc45: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0074cc46: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x74cc4bu); f_00857e29();
    /* 0074cc4b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0074cc4e:; BB(0x0074cc4e);
    /* 0074cc4e: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 0074cc54: lea eax, [esp + 0x6c] */ r_eax = (u32)(r_esp+0x6cu);
    /* 0074cc58: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0074cc5a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074cc5b: call 0x7f32ac */ r_esp -= 4; W32(r_esp, 0x74cc60u); f_007f32ac();
    /* 0074cc60: push dword ptr [ebp + 0x20] */ { u32 v = R32((u32)(r_ebp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0074cc63: call 0x718138 */ r_esp -= 4; W32(r_esp, 0x74cc68u); f_00718138();
    /* 0074cc68: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0074cc69: mov byte ptr [ebp + 0x1c], 0xa */ W8((u32)(r_ebp+0x1cu), 0xau);
    /* 0074cc6d: add esp, 0x368 */ {  u32 a = r_esp; u32 b = 0x368u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0074cc73: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074cc74: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074cc75: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0074cc76: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0074cc77: ret  */ FN_RET(0x0074cb44); r_esp += 4; return;
L_0074d071:; BB(0x0074d071);
    /* 0074d071: mov dword ptr [esp + 0x174], 0x434e0000 */ W32((u32)(r_esp+0x174u), 0x434e0000u);
    /* 0074d07c: mov dword ptr [esp + 0x178], 0x43340000 */ W32((u32)(r_esp+0x178u), 0x43340000u);
    /* 0074d087: push 0x8a */ { u32 v = 0x8au; r_esp -= 4; W32(r_esp, v); }
    /* 0074d08c: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x74d091u); f_0073ec50();
    /* 0074d091: lea edx, [esp + 0x178] */ r_edx = (u32)(r_esp+0x178u);
    /* 0074d098: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0074d099: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074d09a: call 0x73a888 */ r_esp -= 4; W32(r_esp, 0x74d09fu); f_0073a888();
    /* 0074d09f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0074d0a2: mov dword ptr [ebp + 0x34], eax */ W32((u32)(r_ebp+0x34u), r_eax);
    /* 0074d0a5: jmp 0x74cb4f */ goto L_0074cb4f;
}

void f_0074cc78(void)
{
    FN_ENTER(0x0074cc78);
    /* 0074cc78: call 0x78bf80 */ r_esp -= 4; W32(r_esp, 0x74cc7du); f_0078bf80();
    /* 0074cc7d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074cc7f: je 0x74cffd */ if (fZ) goto L_0074cffd;
L_0074cc85:; BB(0x0074cc85);
    /* 0074cc85: call 0x78bf88 */ r_esp -= 4; W32(r_esp, 0x74cc8au); f_0078bf88();
    /* 0074cc8a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074cc8c: jne 0x74cc94 */ if (!fZ) goto L_0074cc94;
L_0074cc8e:; BB(0x0074cc8e);
    /* 0074cc8e: mov byte ptr [ebp + 0x1c], 7 */ W8((u32)(r_ebp+0x1cu), 0x7u);
    /* 0074cc92: jmp 0x74cca3 */ goto L_0074cca3;
L_0074cc94:; BB(0x0074cc94);
    /* 0074cc94: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074cc97: jne 0x74cc9f */ if (!fZ) goto L_0074cc9f;
L_0074cc99:; BB(0x0074cc99);
    /* 0074cc99: mov byte ptr [ebp + 0x1c], 9 */ W8((u32)(r_ebp+0x1cu), 0x9u);
    /* 0074cc9d: jmp 0x74cca3 */ goto L_0074cca3;
L_0074cc9f:; BB(0x0074cc9f);
    /* 0074cc9f: mov byte ptr [ebp + 0x1c], 8 */ W8((u32)(r_ebp+0x1cu), 0x8u);
L_0074cca3:; BB(0x0074cca3);
    /* 0074cca3: call 0x78bf90 */ r_esp -= 4; W32(r_esp, 0x74cca8u); f_0078bf90();
    /* 0074cca8: add esp, 0x368 */ {  u32 a = r_esp; u32 b = 0x368u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0074ccae: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074ccaf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074ccb0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0074ccb1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0074ccb2: ret  */ FN_RET(0x0074cc78); r_esp += 4; return;
L_0074cffd:; BB(0x0074cffd);
    /* 0074cffd: add esp, 0x368 */ {  u32 a = r_esp; u32 b = 0x368u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0074d003: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074d004: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074d005: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0074d006: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0074d007: ret  */ FN_RET(0x0074cc78); r_esp += 4; return;
}

void f_0074ccb3(void)
{
    FN_ENTER(0x0074ccb3);
    /* 0074ccb3: mov eax, dword ptr [ebp + 0x34] */ r_eax = R32((u32)(r_ebp+0x34u));
    /* 0074ccb6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074ccb8: je 0x74d0aa */ if (fZ) goto L_0074d0aa;
L_0074ccbe:; BB(0x0074ccbe);
    /* 0074ccbe: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x74ccc3u); f_006dc358();
    /* 0074ccc3: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074ccc6: jne 0x74ccf2 */ if (!fZ) goto L_0074ccf2;
L_0074ccc8:; BB(0x0074ccc8);
    /* 0074ccc8: push 0x185 */ { u32 v = 0x185u; r_esp -= 4; W32(r_esp, v); }
    /* 0074cccd: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x74ccd2u); f_0079317c();
    /* 0074ccd2: mov ebx, eax */ r_ebx = r_eax;
    /* 0074ccd4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0074ccd7: call 0x78bf68 */ r_esp -= 4; W32(r_esp, 0x74ccdcu); f_0078bf68();
    /* 0074ccdc: lea edx, [esp + 0x6c] */ r_edx = (u32)(r_esp+0x6cu);
    /* 0074cce0: push 0xa9ab78 */ { u32 v = 0xa9ab78u; r_esp -= 4; W32(r_esp, v); }
    /* 0074cce5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074cce6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0074cce7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0074cce8: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x74ccedu); f_00857e29();
    /* 0074cced: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0074ccf0: jmp 0x74cd2f */ goto L_0074cd2f;
L_0074ccf2:; BB(0x0074ccf2);
    /* 0074ccf2: push 0x14d */ { u32 v = 0x14du; r_esp -= 4; W32(r_esp, v); }
    /* 0074ccf7: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x74ccfcu); f_0079317c();
    /* 0074ccfc: mov ebx, eax */ r_ebx = r_eax;
    /* 0074ccfe: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0074cd01: call 0x78bf68 */ r_esp -= 4; W32(r_esp, 0x74cd06u); f_0078bf68();
    /* 0074cd06: lea edx, [esp + 0x6c] */ r_edx = (u32)(r_esp+0x6cu);
    /* 0074cd0a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074cd0b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0074cd0c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0074cd0d: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x74cd12u); f_00857e29();
    /* 0074cd12: push 0x14f */ { u32 v = 0x14fu; r_esp -= 4; W32(r_esp, v); }
    /* 0074cd17: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x74cd1cu); f_0079317c();
    /* 0074cd1c: lea edx, [esp + 0x7c] */ r_edx = (u32)(r_esp+0x7cu);
    /* 0074cd20: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 0074cd25: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074cd26: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0074cd27: call 0x858b0f */ r_esp -= 4; W32(r_esp, 0x74cd2cu); f_00858b0f();
    /* 0074cd2c: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0074cd2f:; BB(0x0074cd2f);
    /* 0074cd2f: lea eax, [esp + 0x6c] */ r_eax = (u32)(r_esp+0x6cu);
    /* 0074cd33: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0074cd35: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074cd36: mov ecx, dword ptr [ebp + 0x34] */ r_ecx = R32((u32)(r_ebp+0x34u));
    /* 0074cd39: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x74cd3eu); f_0073ae38();
    /* 0074cd3e: push dword ptr [ebp + 0x20] */ { u32 v = R32((u32)(r_ebp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0074cd41: call 0x718138 */ r_esp -= 4; W32(r_esp, 0x74cd46u); f_00718138();
    /* 0074cd46: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0074cd47: movzx eax, word ptr [0xa98474] */ r_eax = (u32)R16((u32)(0xa98474u));
    /* 0074cd4e: mov byte ptr [ebp + 0x1c], 0xa */ W8((u32)(r_ebp+0x1cu), 0xau);
    /* 0074cd52: and eax, 0xffdf */ {  u32 a = r_eax; u32 b = 0xffdfu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0074cd57: mov word ptr [0xa98474], ax */ W16((u32)(0xa98474u), (u16)r_eax);
    /* 0074cd5d: add esp, 0x368 */ {  u32 a = r_esp; u32 b = 0x368u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0074cd63: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074cd64: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074cd65: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0074cd66: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0074cd67: ret  */ FN_RET(0x0074ccb3); r_esp += 4; return;
L_0074d0aa:; BB(0x0074d0aa);
    /* 0074d0aa: mov dword ptr [esp + 0x1fc], 0x434e0000 */ W32((u32)(r_esp+0x1fcu), 0x434e0000u);
    /* 0074d0b5: mov dword ptr [esp + 0x200], 0x43340000 */ W32((u32)(r_esp+0x200u), 0x43340000u);
    /* 0074d0c0: push 0x8a */ { u32 v = 0x8au; r_esp -= 4; W32(r_esp, v); }
    /* 0074d0c5: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x74d0cau); f_0073ec50();
    /* 0074d0ca: lea edx, [esp + 0x200] */ r_edx = (u32)(r_esp+0x200u);
    /* 0074d0d1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0074d0d2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074d0d3: call 0x73a888 */ r_esp -= 4; W32(r_esp, 0x74d0d8u); f_0073a888();
    /* 0074d0d8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0074d0db: mov dword ptr [ebp + 0x34], eax */ W32((u32)(r_ebp+0x34u), r_eax);
    /* 0074d0de: jmp 0x74ccbe */ goto L_0074ccbe;
}

void f_0074cd1c(void)
{
    FN_ENTER(0x0074cd1c);
    /* 0074cd1c: lea edx, [esp + 0x7c] */ r_edx = (u32)(r_esp+0x7cu);
    /* 0074cd20: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 0074cd25: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074cd26: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0074cd27: call 0x858b0f */ r_esp -= 4; W32(r_esp, 0x74cd2cu); f_00858b0f();
    /* 0074cd2c: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0074cd2f: lea eax, [esp + 0x6c] */ r_eax = (u32)(r_esp+0x6cu);
    /* 0074cd33: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0074cd35: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074cd36: mov ecx, dword ptr [ebp + 0x34] */ r_ecx = R32((u32)(r_ebp+0x34u));
    /* 0074cd39: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x74cd3eu); f_0073ae38();
    /* 0074cd3e: push dword ptr [ebp + 0x20] */ { u32 v = R32((u32)(r_ebp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0074cd41: call 0x718138 */ r_esp -= 4; W32(r_esp, 0x74cd46u); f_00718138();
    /* 0074cd46: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0074cd47: movzx eax, word ptr [0xa98474] */ r_eax = (u32)R16((u32)(0xa98474u));
    /* 0074cd4e: mov byte ptr [ebp + 0x1c], 0xa */ W8((u32)(r_ebp+0x1cu), 0xau);
    /* 0074cd52: and eax, 0xffdf */ {  u32 a = r_eax; u32 b = 0xffdfu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0074cd57: mov word ptr [0xa98474], ax */ W16((u32)(0xa98474u), (u16)r_eax);
    /* 0074cd5d: add esp, 0x368 */ {  u32 a = r_esp; u32 b = 0x368u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0074cd63: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074cd64: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074cd65: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0074cd66: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0074cd67: ret  */ FN_RET(0x0074cd1c); r_esp += 4; return;
}

void f_0074cd68(void)
{
    FN_ENTER(0x0074cd68);
    /* 0074cd68: movzx eax, word ptr [ebp + 0x28] */ r_eax = (u32)R16((u32)(r_ebp+0x28u));
    /* 0074cd6c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074cd6d: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x74cd72u); f_0068d5a8();
    /* 0074cd72: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0074cd73: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074cd75: je 0x74d190 */ if (fZ) goto L_0074d190;
L_0074cd7b:; BB(0x0074cd7b);
    /* 0074cd7b: movzx eax, word ptr [0xa98474] */ r_eax = (u32)R16((u32)(0xa98474u));
    /* 0074cd82: test al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0074cd84: je 0x74cffd */ if (fZ) goto L_0074cffd;
L_0074cd8a:; BB(0x0074cd8a);
    /* 0074cd8a: call 0x78bf70 */ r_esp -= 4; W32(r_esp, 0x74cd8fu); f_0078bf70();
    /* 0074cd8f: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074cd92: jne 0x74cdb3 */ if (!fZ) goto L_0074cdb3;
L_0074cd94:; BB(0x0074cd94);
    /* 0074cd94: call 0x78bf90 */ r_esp -= 4; W32(r_esp, 0x74cd99u); f_0078bf90();
    /* 0074cd99: call 0x78bf78 */ r_esp -= 4; W32(r_esp, 0x74cd9eu); f_0078bf78();
    /* 0074cd9e: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 0074cda4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074cda5: mov dword ptr [ebp + 0x24], eax */ W32((u32)(r_ebp+0x24u), r_eax);
    /* 0074cda8: call 0x7f323c */ r_esp -= 4; W32(r_esp, 0x74cdadu); f_007f323c();
    /* 0074cdad: mov byte ptr [ebp + 0x1c], 6 */ W8((u32)(r_ebp+0x1cu), 0x6u);
    /* 0074cdb1: jmp 0x74cdc2 */ goto L_0074cdc2;
L_0074cdb3:; BB(0x0074cdb3);
    /* 0074cdb3: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074cdb6: jne 0x74cdbe */ if (!fZ) goto L_0074cdbe;
L_0074cdb8:; BB(0x0074cdb8);
    /* 0074cdb8: mov byte ptr [ebp + 0x1c], 5 */ W8((u32)(r_ebp+0x1cu), 0x5u);
    /* 0074cdbc: jmp 0x74cdc2 */ goto L_0074cdc2;
L_0074cdbe:; BB(0x0074cdbe);
    /* 0074cdbe: mov byte ptr [ebp + 0x1c], 8 */ W8((u32)(r_ebp+0x1cu), 0x8u);
L_0074cdc2:; BB(0x0074cdc2);
    /* 0074cdc2: movzx eax, word ptr [0xa98474] */ r_eax = (u32)R16((u32)(0xa98474u));
    /* 0074cdc9: and eax, 0xffdf */ {  u32 a = r_eax; u32 b = 0xffdfu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0074cdce: mov word ptr [0xa98474], ax */ W16((u32)(0xa98474u), (u16)r_eax);
    /* 0074cdd4: add esp, 0x368 */ {  u32 a = r_esp; u32 b = 0x368u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0074cdda: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074cddb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074cddc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0074cddd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0074cdde: ret  */ FN_RET(0x0074cd68); r_esp += 4; return;
L_0074cffd:; BB(0x0074cffd);
    /* 0074cffd: add esp, 0x368 */ {  u32 a = r_esp; u32 b = 0x368u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0074d003: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074d004: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074d005: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0074d006: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0074d007: ret  */ FN_RET(0x0074cd68); r_esp += 4; return;
L_0074d190:; BB(0x0074d190);
    /* 0074d190: mov byte ptr [ebp + 0x1c], 8 */ W8((u32)(r_ebp+0x1cu), 0x8u);
    /* 0074d194: add esp, 0x368 */ {  u32 a = r_esp; u32 b = 0x368u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0074d19a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074d19b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074d19c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0074d19d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0074d19e: ret  */ FN_RET(0x0074cd68); r_esp += 4; return;
}

void f_0074cddf(void)
{
    FN_ENTER(0x0074cddf);
    /* 0074cddf: mov ecx, dword ptr [ebp + 0x38] */ r_ecx = R32((u32)(r_ebp+0x38u));
    /* 0074cde2: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 0074cde9: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0074cdeb: je 0x74ce04 */ if (fZ) goto L_0074ce04;
L_0074cded:; BB(0x0074cded);
    /* 0074cded: mov ecx, dword ptr [ebp + 0x30] */ r_ecx = R32((u32)(r_ebp+0x30u));
    /* 0074cdf0: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0074cdf2: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x74cdf5u); call_ind(t); }
    /* 0074cdf5: mov byte ptr [ebp + 0x1c], 0xb */ W8((u32)(r_ebp+0x1cu), 0xbu);
    /* 0074cdf9: add esp, 0x368 */ {  u32 a = r_esp; u32 b = 0x368u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0074cdff: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074ce00: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074ce01: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0074ce02: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0074ce03: ret  */ FN_RET(0x0074cddf); r_esp += 4; return;
L_0074ce04:; BB(0x0074ce04);
    /* 0074ce04: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0074ce06: je 0x74cffd */ if (fZ) goto L_0074cffd;
L_0074ce0c:; BB(0x0074ce0c);
    /* 0074ce0c: call 0x737d90 */ r_esp -= 4; W32(r_esp, 0x74ce11u); f_00737d90();
    /* 0074ce11: push dword ptr [ebp + 0x20] */ { u32 v = R32((u32)(r_ebp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0074ce14: mov dword ptr [ebp + 0x24], eax */ W32((u32)(r_ebp+0x24u), r_eax);
    /* 0074ce17: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x74ce1cu); f_0068d5a8();
    /* 0074ce1c: mov esi, eax */ r_esi = r_eax;
    /* 0074ce1e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0074ce21: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074ce23: je 0x74cffd */ if (fZ) goto L_0074cffd;
L_0074ce29:; BB(0x0074ce29);
    /* 0074ce29: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_0074ce2b:; BB(0x0074ce2b);
    /* 0074ce2b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0074ce2c: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x74ce31u); f_0068d5a8();
    /* 0074ce31: mov ebx, eax */ r_ebx = r_eax;
    /* 0074ce33: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0074ce36: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074ce38: je 0x74ce49 */ if (fZ) goto L_0074ce49;
L_0074ce3a:; BB(0x0074ce3a);
    /* 0074ce3a: mov edx, dword ptr [ebp + 0x24] */ r_edx = R32((u32)(r_ebp+0x24u));
    /* 0074ce3d: cmp edx, dword ptr [ebx + 0xeb4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebx+0xeb4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074ce43: je 0x74d0e3 */ if (fZ) goto L_0074d0e3;
L_0074ce49:; BB(0x0074ce49);
    /* 0074ce49: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0074ce4c: cmp edi, 0xc */ {  u32 a = r_edi; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0074ce4f: jl 0x74ce2b */ if ((fS!=fO)) goto L_0074ce2b;
L_0074ce51:; BB(0x0074ce51);
    /* 0074ce51: je 0x74d181 */ if (fZ) goto L_0074d181;
L_0074ce57:; BB(0x0074ce57);
    /* 0074ce57: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074ce59: je 0x74d172 */ if (fZ) goto L_0074d172;
L_0074ce5f:; BB(0x0074ce5f);
    /* 0074ce5f: mov dword ptr [esp + 0x260], 0x434e0000 */ W32((u32)(r_esp+0x260u), 0x434e0000u);
    /* 0074ce6a: mov dword ptr [esp + 0x264], 0x43340000 */ W32((u32)(r_esp+0x264u), 0x43340000u);
    /* 0074ce75: push 0x8a */ { u32 v = 0x8au; r_esp -= 4; W32(r_esp, v); }
    /* 0074ce7a: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x74ce7fu); f_0073ec50();
    /* 0074ce7f: lea edx, [esp + 0x264] */ r_edx = (u32)(r_esp+0x264u);
    /* 0074ce86: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0074ce87: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074ce88: call 0x73a888 */ r_esp -= 4; W32(r_esp, 0x74ce8du); f_0073a888();
    /* 0074ce8d: push 0x14c */ { u32 v = 0x14cu; r_esp -= 4; W32(r_esp, v); }
    /* 0074ce92: mov dword ptr [ebp + 0x34], eax */ W32((u32)(r_ebp+0x34u), r_eax);
    /* 0074ce95: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x74ce9au); f_0079317c();
    /* 0074ce9a: mov esi, eax */ r_esi = r_eax;
    /* 0074ce9c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0074ce9f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0074cea1: call 0x6936b4 */ r_esp -= 4; W32(r_esp, 0x74cea6u); f_006936b4();
    /* 0074cea6: lea edx, [esp + 0x268] */ r_edx = (u32)(r_esp+0x268u);
    /* 0074cead: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074ceae: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0074ceaf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0074ceb0: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x74ceb5u); f_00857e29();
    /* 0074ceb5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0074ceb8: lea eax, [esp + 0x268] */ r_eax = (u32)(r_esp+0x268u);
    /* 0074cebf: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0074cec1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074cec2: mov ecx, dword ptr [ebp + 0x34] */ r_ecx = R32((u32)(r_ebp+0x34u));
    /* 0074cec5: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x74cecau); f_0073ae38();
    /* 0074ceca: push dword ptr [ebp + 0x20] */ { u32 v = R32((u32)(r_ebp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0074cecd: call 0x718168 */ r_esp -= 4; W32(r_esp, 0x74ced2u); f_00718168();
    /* 0074ced2: mov byte ptr [ebp + 0x1c], 4 */ W8((u32)(r_ebp+0x1cu), 0x4u);
    /* 0074ced6: add esp, 0x36c */ {  u32 a = r_esp; u32 b = 0x36cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0074cedc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074cedd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074cede: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0074cedf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0074cee0: ret  */ FN_RET(0x0074cddf); r_esp += 4; return;
L_0074cffd:; BB(0x0074cffd);
    /* 0074cffd: add esp, 0x368 */ {  u32 a = r_esp; u32 b = 0x368u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0074d003: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074d004: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074d005: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0074d006: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0074d007: ret  */ FN_RET(0x0074cddf); r_esp += 4; return;
L_0074d0e3:; BB(0x0074d0e3);
    /* 0074d0e3: mov byte ptr [esp + 0x204], 0xc1 */ W8((u32)(r_esp+0x204u), 0xc1u);
    /* 0074d0eb: lea edx, [esp + 0x240] */ r_edx = (u32)(r_esp+0x240u);
    /* 0074d0f2: mov word ptr [ebp + 0x28], di */ W16((u32)(r_ebp+0x28u), (u16)r_edi);
    /* 0074d0f6: mov byte ptr [esp + 0x205], 0x17 */ W8((u32)(r_esp+0x205u), 0x17u);
    /* 0074d0fe: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0074d100: push 0xa9ab78 */ { u32 v = 0xa9ab78u; r_esp -= 4; W32(r_esp, v); }
    /* 0074d105: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0074d106: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x74d10bu); f_00857dec();
    /* 0074d10b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0074d10e: mov ecx, esi */ r_ecx = r_esi;
    /* 0074d110: call 0x6936b4 */ r_esp -= 4; W32(r_esp, 0x74d115u); f_006936b4();
    /* 0074d115: lea edx, [esp + 0x210] */ r_edx = (u32)(r_esp+0x210u);
    /* 0074d11c: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 0074d11e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074d11f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0074d120: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x74d125u); f_00857dec();
    /* 0074d125: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0074d128: mov edx, dword ptr [ebp + 0x20] */ r_edx = R32((u32)(r_ebp+0x20u));
    /* 0074d12b: mov dword ptr [esp + 0x20c], 0 */ W32((u32)(r_esp+0x20cu), 0x0u);
    /* 0074d136: mov dword ptr [esp + 0x208], edx */ W32((u32)(r_esp+0x208u), r_edx);
    /* 0074d13d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0074d13e: lea ecx, [esp + 0x208] */ r_ecx = (u32)(r_esp+0x208u);
    /* 0074d145: call 0x800464 */ r_esp -= 4; W32(r_esp, 0x74d14au); f_00800464();
    /* 0074d14a: jmp 0x74ce5f */ goto L_0074ce5f;
L_0074d172:; BB(0x0074d172);
    /* 0074d172: mov byte ptr [ebp + 0x1c], 8 */ W8((u32)(r_ebp+0x1cu), 0x8u);
    /* 0074d176: add esp, 0x368 */ {  u32 a = r_esp; u32 b = 0x368u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0074d17c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074d17d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074d17e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0074d17f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0074d180: ret  */ FN_RET(0x0074cddf); r_esp += 4; return;
L_0074d181:; BB(0x0074d181);
    /* 0074d181: mov byte ptr [ebp + 0x1c], 8 */ W8((u32)(r_ebp+0x1cu), 0x8u);
    /* 0074d185: add esp, 0x368 */ {  u32 a = r_esp; u32 b = 0x368u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0074d18b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074d18c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074d18d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0074d18e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0074d18f: ret  */ FN_RET(0x0074cddf); r_esp += 4; return;
}

void f_0074cee1(void)
{
    FN_ENTER(0x0074cee1);
    /* 0074cee1: mov ebx, dword ptr [ebp + 0x38] */ r_ebx = R32((u32)(r_ebp+0x38u));
    /* 0074cee4: movzx edx, word ptr [ebx + 0x84] */ r_edx = (u32)R16((u32)(r_ebx+0x84u));
    /* 0074ceeb: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0074ceee: je 0x74cf07 */ if (fZ) goto L_0074cf07;
L_0074cef0:; BB(0x0074cef0);
    /* 0074cef0: mov ecx, dword ptr [ebp + 0x30] */ r_ecx = R32((u32)(r_ebp+0x30u));
    /* 0074cef3: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0074cef5: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x74cef8u); call_ind(t); }
    /* 0074cef8: mov byte ptr [ebp + 0x1c], 0xb */ W8((u32)(r_ebp+0x1cu), 0xbu);
    /* 0074cefc: add esp, 0x368 */ {  u32 a = r_esp; u32 b = 0x368u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0074cf02: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074cf03: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074cf04: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0074cf05: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0074cf06: ret  */ FN_RET(0x0074cee1); r_esp += 4; return;
L_0074cf07:; BB(0x0074cf07);
    /* 0074cf07: movzx eax, byte ptr [ebx + 0x94] */ r_eax = (u32)R8((u32)(r_ebx+0x94u));
    /* 0074cf0e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0074cf10: je 0x74cf32 */ if (fZ) goto L_0074cf32;
L_0074cf12:; BB(0x0074cf12);
    /* 0074cf12: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0074cf14: je 0x74cf32 */ if (fZ) goto L_0074cf32;
L_0074cf16:; BB(0x0074cf16);
    /* 0074cf16: and edx, 0xfdff */ {  u32 a = r_edx; u32 b = 0xfdffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0074cf1c: mov word ptr [ebx + 0x84], dx */ W16((u32)(r_ebx+0x84u), (u16)r_edx);
    /* 0074cf23: mov byte ptr [ebp + 0x1c], 3 */ W8((u32)(r_ebp+0x1cu), 0x3u);
    /* 0074cf27: add esp, 0x368 */ {  u32 a = r_esp; u32 b = 0x368u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0074cf2d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074cf2e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074cf2f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0074cf30: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0074cf31: ret  */ FN_RET(0x0074cee1); r_esp += 4; return;
L_0074cf32:; BB(0x0074cf32);
    /* 0074cf32: mov ebx, dword ptr [ebp + 0x2c] */ r_ebx = R32((u32)(r_ebp+0x2cu));
    /* 0074cf35: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0074cf38: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 0074cf3b: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 0074cf3e: mov edx, ebx */ r_edx = r_ebx;
    /* 0074cf40: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0074cf43: fadd dword ptr [edx*4 + 0x973a30] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x973a30u));
    /* 0074cf4a: fcomp dword ptr [0x973a48] */ fx_compare(ST(0), R_F32((u32)(0x973a48u))); FPOP();
    /* 0074cf50: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0074cf52: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0074cf53: ja 0x74cf63 */ if ((!fC&&!fZ)) goto L_0074cf63;
L_0074cf55:; BB(0x0074cf55);
    /* 0074cf55: mov dword ptr [ebp + 0x2c], ebx */ W32((u32)(r_ebp+0x2cu), r_ebx);
    /* 0074cf58: add esp, 0x368 */ {  u32 a = r_esp; u32 b = 0x368u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0074cf5e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074cf5f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074cf60: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0074cf61: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0074cf62: ret  */ FN_RET(0x0074cee1); r_esp += 4; return;
L_0074cf63:; BB(0x0074cf63);
    /* 0074cf63: mov dword ptr [ebp + 0x2c], 0 */ W32((u32)(r_ebp+0x2cu), 0x0u);
    /* 0074cf6a: mov byte ptr [ebp + 0x1c], 8 */ W8((u32)(r_ebp+0x1cu), 0x8u);
    /* 0074cf6e: add esp, 0x368 */ {  u32 a = r_esp; u32 b = 0x368u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0074cf74: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074cf75: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074cf76: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0074cf77: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0074cf78: ret  */ FN_RET(0x0074cee1); r_esp += 4; return;
}

void f_0074cf79(void)
{
    FN_ENTER(0x0074cf79);
    /* 0074cf79: mov eax, dword ptr [ebp + 0x38] */ r_eax = R32((u32)(r_ebp+0x38u));
    /* 0074cf7c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074cf7e: je 0x74d14f */ if (fZ) goto L_0074d14f;
L_0074cf84:; BB(0x0074cf84);
    /* 0074cf84: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0074cf86: mov ecx, dword ptr [ebp + 0x30] */ r_ecx = R32((u32)(r_ebp+0x30u));
    /* 0074cf89: call 0x7336fc */ r_esp -= 4; W32(r_esp, 0x74cf8eu); f_007336fc();
    /* 0074cf8e: mov ecx, dword ptr [ebp + 0x38] */ r_ecx = R32((u32)(r_ebp+0x38u));
    /* 0074cf91: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0074cf92: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0074cf95: call 0x712624 */ r_esp -= 4; W32(r_esp, 0x74cf9au); f_00712624();
    /* 0074cf9a: mov edx, dword ptr [ebp + 0x38] */ r_edx = R32((u32)(r_ebp+0x38u));
    /* 0074cf9d: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 0074cfa4: or eax, 0xffff0010 */ {  u32 a = r_eax; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0074cfa9: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 0074cfb0: mov ecx, dword ptr [ebp + 0x38] */ r_ecx = R32((u32)(r_ebp+0x38u));
    /* 0074cfb3: call 0x74d4fc */ r_esp -= 4; W32(r_esp, 0x74cfb8u); f_0074d4fc();
    /* 0074cfb8: mov edx, dword ptr [ebp + 0x38] */ r_edx = R32((u32)(r_ebp+0x38u));
    /* 0074cfbb: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 0074cfc2: and eax, 0xfffd */ {  u32 a = r_eax; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0074cfc7: mov ecx, dword ptr [edx + 0x60] */ r_ecx = R32((u32)(r_edx+0x60u));
    /* 0074cfca: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 0074cfd1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074cfd3: je 0x74cfdc */ if (fZ) goto L_0074cfdc;
L_0074cfd5:; BB(0x0074cfd5);
    /* 0074cfd5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0074cfd7: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x74cfdcu); f_00760acc();
L_0074cfdc:; BB(0x0074cfdc);
    /* 0074cfdc: mov edx, dword ptr [ebp + 0x38] */ r_edx = R32((u32)(r_ebp+0x38u));
    /* 0074cfdf: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 0074cfe6: or eax, 0xffff0200 */ {  u32 a = r_eax; u32 b = 0xffff0200u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0074cfeb: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 0074cff2: mov dword ptr [ebp + 0x2c], 0 */ W32((u32)(r_ebp+0x2cu), 0x0u);
    /* 0074cff9: mov byte ptr [ebp + 0x1c], 2 */ W8((u32)(r_ebp+0x1cu), 0x2u);
    /* 0074cffd: add esp, 0x368 */ {  u32 a = r_esp; u32 b = 0x368u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0074d003: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074d004: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074d005: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0074d006: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0074d007: ret  */ FN_RET(0x0074cf79); r_esp += 4; return;
L_0074d14f:; BB(0x0074d14f);
    /* 0074d14f: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 0074d151: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x74d156u); f_0073ec50();
    /* 0074d156: push dword ptr [ebp + 0x20] */ { u32 v = R32((u32)(r_ebp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0074d159: push 0x973a4c */ { u32 v = 0x973a4cu; r_esp -= 4; W32(r_esp, v); }
    /* 0074d15e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074d15f: call 0x74d248 */ r_esp -= 4; W32(r_esp, 0x74d164u); f_0074d248();
    /* 0074d164: mov dword ptr [ebp + 0x38], eax */ W32((u32)(r_ebp+0x38u), r_eax);
    /* 0074d167: add esp, 0x378 */ {  u32 a = r_esp; u32 b = 0x378u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0074d16d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074d16e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074d16f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0074d170: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0074d171: ret  */ FN_RET(0x0074cf79); r_esp += 4; return;
}

