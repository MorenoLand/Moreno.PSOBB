#include "protos.h"

void f_005bc004(void) /* sub_5BC004 */
{
    FN_ENTER(0x005bc004);
    /* 005bc004: mov dword ptr [0xa8d488], 0 */ W32((u32)(0xa8d488u), 0x0u);
    /* 005bc00e: call 0x5bb500 */ r_esp -= 4; W32(r_esp, 0x5bc013u); f_005bb500();
    /* 005bc013: ret  */ FN_RET(0x005bc004); r_esp += 4; return;
}

void f_005bc014(void) /* sub_5BC014 */
{
    FN_ENTER(0x005bc014);
    /* 005bc014: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005bc015: mov edi, ecx */ r_edi = r_ecx;
    /* 005bc017: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005bc019: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bc01b: je 0x5bc02a */ if (fZ) goto L_005bc02a;
L_005bc01d:; BB(0x005bc01d);
    /* 005bc01d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bc01e: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x5bc023u); f_00857e98();
    /* 005bc023: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005bc024: mov dword ptr [edi], 0 */ W32((u32)(r_edi), 0x0u);
L_005bc02a:; BB(0x005bc02a);
    /* 005bc02a: mov eax, dword ptr [edi + 8] */ r_eax = R32((u32)(r_edi+0x8u));
    /* 005bc02d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bc02f: je 0x5bc03f */ if (fZ) goto L_005bc03f;
L_005bc031:; BB(0x005bc031);
    /* 005bc031: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bc032: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x5bc037u); f_00857e98();
    /* 005bc037: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005bc038: mov dword ptr [edi + 8], 0 */ W32((u32)(r_edi+0x8u), 0x0u);
L_005bc03f:; BB(0x005bc03f);
    /* 005bc03f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005bc041: mov dword ptr [edi + 4], eax */ W32((u32)(r_edi+0x4u), r_eax);
    /* 005bc044: mov dword ptr [edi + 0xc], eax */ W32((u32)(r_edi+0xcu), r_eax);
    /* 005bc047: mov dword ptr [edi + 0x10], eax */ W32((u32)(r_edi+0x10u), r_eax);
    /* 005bc04a: mov dword ptr [edi + 0x14], eax */ W32((u32)(r_edi+0x14u), r_eax);
    /* 005bc04d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005bc04e: ret  */ FN_RET(0x005bc014); r_esp += 4; return;
}

void f_005bc050(void) /* sub_5BC050 */
{
    FN_ENTER(0x005bc050);
    /* 005bc050: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005bc051: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005bc052: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bc053: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005bc054: mov eax, ecx */ r_eax = r_ecx;
    /* 005bc056: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 005bc05a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bc05c: je 0x5bc096 */ if (fZ) goto L_005bc096;
L_005bc05e:; BB(0x005bc05e);
    /* 005bc05e: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005bc061: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 005bc063: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bc065: je 0x5bc096 */ if (fZ) goto L_005bc096;
L_005bc067:; BB(0x005bc067);
    /* 005bc067: mov esi, eax */ r_esi = r_eax;
    /* 005bc069: mov edi, edx */ r_edi = r_edx;
L_005bc06b:; BB(0x005bc06b);
    /* 005bc06b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005bc06c: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 005bc06e: lea ebp, [ebx + ebx*4] */ r_ebp = (u32)(r_ebx+r_ebx*4);
    /* 005bc071: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005bc073: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005bc075: sub ebp, ebx */ {  u32 a = r_ebp; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 005bc077: lea edx, [ebp + ebp] */ r_edx = (u32)(r_ebp+r_ebp);
    /* 005bc07b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005bc07d: lea eax, [eax + edx + 0xc] */ r_eax = (u32)(r_eax+r_edx+0xcu);
    /* 005bc081: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bc082: call 0x8599e3 */ r_esp -= 4; W32(r_esp, 0x5bc087u); f_008599e3();
    /* 005bc087: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bc08a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005bc08c: je 0x5bc09f */ if (fZ) goto L_005bc09f;
L_005bc08e:; BB(0x005bc08e);
    /* 005bc08e: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005bc091: cmp ebx, dword ptr [esi + 4] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esi+0x4u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005bc094: jb 0x5bc06b */ if (fC) goto L_005bc06b;
L_005bc096:; BB(0x005bc096);
    /* 005bc096: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005bc098: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005bc099: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bc09a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005bc09b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005bc09c: ret 4 */ FN_RET(0x005bc050); r_esp += 8; return;
L_005bc09f:; BB(0x005bc09f);
    /* 005bc09f: mov edx, ebp */ r_edx = r_ebp;
    /* 005bc0a1: mov eax, esi */ r_eax = r_esi;
    /* 005bc0a3: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005bc0a5: mov eax, dword ptr [ecx + edx*4] */ r_eax = R32((u32)(r_ecx+r_edx*4));
    /* 005bc0a8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005bc0a9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bc0aa: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005bc0ab: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005bc0ac: ret 4 */ FN_RET(0x005bc050); r_esp += 8; return;
}

void f_005bc0b0(void) /* sub_5BC0B0 */
{
    FN_ENTER(0x005bc0b0);
    /* 005bc0b0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005bc0b1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005bc0b2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bc0b3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005bc0b4: mov eax, ecx */ r_eax = r_ecx;
    /* 005bc0b6: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 005bc0ba: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bc0bc: je 0x5bc0f6 */ if (fZ) goto L_005bc0f6;
L_005bc0be:; BB(0x005bc0be);
    /* 005bc0be: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005bc0c1: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 005bc0c3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bc0c5: je 0x5bc0f6 */ if (fZ) goto L_005bc0f6;
L_005bc0c7:; BB(0x005bc0c7);
    /* 005bc0c7: mov esi, eax */ r_esi = r_eax;
    /* 005bc0c9: mov edi, edx */ r_edi = r_edx;
L_005bc0cb:; BB(0x005bc0cb);
    /* 005bc0cb: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005bc0cc: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 005bc0ce: lea ebp, [ebx + ebx*4] */ r_ebp = (u32)(r_ebx+r_ebx*4);
    /* 005bc0d1: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005bc0d3: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005bc0d5: sub ebp, ebx */ {  u32 a = r_ebp; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 005bc0d7: lea edx, [ebp + ebp] */ r_edx = (u32)(r_ebp+r_ebp);
    /* 005bc0db: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005bc0dd: lea eax, [eax + edx + 0xc] */ r_eax = (u32)(r_eax+r_edx+0xcu);
    /* 005bc0e1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bc0e2: call 0x8599e3 */ r_esp -= 4; W32(r_esp, 0x5bc0e7u); f_008599e3();
    /* 005bc0e7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bc0ea: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bc0ec: je 0x5bc0ff */ if (fZ) goto L_005bc0ff;
L_005bc0ee:; BB(0x005bc0ee);
    /* 005bc0ee: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005bc0f1: cmp ebx, dword ptr [esi + 4] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esi+0x4u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005bc0f4: jb 0x5bc0cb */ if (fC) goto L_005bc0cb;
L_005bc0f6:; BB(0x005bc0f6);
    /* 005bc0f6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005bc0f8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005bc0f9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bc0fa: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005bc0fb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005bc0fc: ret 4 */ FN_RET(0x005bc0b0); r_esp += 8; return;
L_005bc0ff:; BB(0x005bc0ff);
    /* 005bc0ff: mov edx, ebp */ r_edx = r_ebp;
    /* 005bc101: mov eax, esi */ r_eax = r_esi;
    /* 005bc103: mov ebx, dword ptr [eax] */ r_ebx = R32((u32)(r_eax));
    /* 005bc105: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 005bc108: add eax, dword ptr [ebx + edx*4 + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+r_edx*4+0x8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005bc10c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005bc10d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bc10e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005bc10f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005bc110: ret 4 */ FN_RET(0x005bc0b0); r_esp += 8; return;
}

void f_005bc114(void) /* sub_5BC114 */
{
    FN_ENTER(0x005bc114);
    /* 005bc114: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005bc115: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005bc116: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bc117: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005bc118: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005bc119: mov esi, ecx */ r_esi = r_ecx;
    /* 005bc11b: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 005bc11d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bc11f: mov ebp, dword ptr [esp + 0x18] */ r_ebp = R32((u32)(r_esp+0x18u));
    /* 005bc123: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
    /* 005bc127: je 0x5bc136 */ if (fZ) goto L_005bc136;
L_005bc129:; BB(0x005bc129);
    /* 005bc129: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bc12a: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x5bc12fu); f_00857e98();
    /* 005bc12f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005bc130: mov dword ptr [esi], 0 */ W32((u32)(r_esi), 0x0u);
L_005bc136:; BB(0x005bc136);
    /* 005bc136: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 005bc139: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bc13b: je 0x5bc14b */ if (fZ) goto L_005bc14b;
L_005bc13d:; BB(0x005bc13d);
    /* 005bc13d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bc13e: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x5bc143u); f_00857e98();
    /* 005bc143: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005bc144: mov dword ptr [esi + 8], 0 */ W32((u32)(r_esi+0x8u), 0x0u);
L_005bc14b:; BB(0x005bc14b);
    /* 005bc14b: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005bc14d: je 0x5bc25c */ if (fZ) goto L_005bc25c;
L_005bc153:; BB(0x005bc153);
    /* 005bc153: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005bc155: je 0x5bc25c */ if (fZ) goto L_005bc25c;
L_005bc15b:; BB(0x005bc15b);
    /* 005bc15b: lea edi, [ebx + ebx*4] */ r_edi = (u32)(r_ebx+r_ebx*4);
    /* 005bc15e: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005bc160: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005bc162: sub edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 005bc164: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005bc166: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005bc168: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005bc169: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5bc16eu); f_008581c5();
    /* 005bc16e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005bc16f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bc170: mov dword ptr [esi], eax */ W32((u32)(r_esi), r_eax);
    /* 005bc172: mov dword ptr [esi + 4], ebx */ W32((u32)(r_esi+0x4u), r_ebx);
    /* 005bc175: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bc176: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x5bc17bu); f_0086b6b8();
    /* 005bc17b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bc17e: mov dword ptr [esi + 0xc], 0 */ W32((u32)(r_esi+0xcu), 0x0u);
    /* 005bc185: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005bc187: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005bc189: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bc18b: je 0x5bc20d */ if (fZ) goto L_005bc20d;
L_005bc191:; BB(0x005bc191);
    /* 005bc191: cmp ebx, 6 */ {  u32 a = r_ebx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005bc194: jb 0x5bc1f0 */ if (fC) goto L_005bc1f0;
L_005bc196:; BB(0x005bc196);
    /* 005bc196: lea edi, [ebx - 6] */ r_edi = (u32)(r_ebx+0xfffffffau);
    /* 005bc199: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 005bc19c: lea edx, [ecx + ecx*4] */ r_edx = (u32)(r_ecx+r_ecx*4);
    /* 005bc19f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005bc1a1: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005bc1a3: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005bc1a5: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005bc1a7: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
L_005bc1a9:; BB(0x005bc1a9);
    /* 005bc1a9: add eax, dword ptr [edx + ebp] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+r_ebp)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005bc1ac: mov dword ptr [esi + 0xc], eax */ W32((u32)(r_esi+0xcu), r_eax);
    /* 005bc1af: mov ebx, dword ptr [edx + ebp + 0x4c] */ r_ebx = R32((u32)(r_edx+r_ebp+0x4cu));
    /* 005bc1b3: add ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005bc1b5: mov dword ptr [esi + 0xc], ebx */ W32((u32)(r_esi+0xcu), r_ebx);
    /* 005bc1b8: mov eax, dword ptr [edx + ebp + 0x98] */ r_eax = R32((u32)(r_edx+r_ebp+0x98u));
    /* 005bc1bf: add eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005bc1c1: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 005bc1c4: mov dword ptr [esi + 0xc], eax */ W32((u32)(r_esi+0xcu), r_eax);
    /* 005bc1c7: mov edi, dword ptr [edx + ebp + 0xe4] */ r_edi = R32((u32)(r_edx+r_ebp+0xe4u));
    /* 005bc1ce: add edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005bc1d0: mov dword ptr [esi + 0xc], edi */ W32((u32)(r_esi+0xcu), r_edi);
    /* 005bc1d3: mov eax, dword ptr [edx + ebp + 0x130] */ r_eax = R32((u32)(r_edx+r_ebp+0x130u));
    /* 005bc1da: add eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005bc1dc: mov dword ptr [esi + 0xc], eax */ W32((u32)(r_esi+0xcu), r_eax);
    /* 005bc1df: add edx, 0x17c */ {  u32 a = r_edx; u32 b = 0x17cu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005bc1e5: add ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005bc1e8: cmp ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005bc1ea: jbe 0x5bc1a9 */ if ((fC||fZ)) goto L_005bc1a9;
L_005bc1ec:; BB(0x005bc1ec);
    /* 005bc1ec: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
L_005bc1f0:; BB(0x005bc1f0);
    /* 005bc1f0: lea edx, [ecx + ecx*4] */ r_edx = (u32)(r_ecx+r_ecx*4);
    /* 005bc1f3: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005bc1f5: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005bc1f7: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005bc1f9: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005bc1fb: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
L_005bc1fd:; BB(0x005bc1fd);
    /* 005bc1fd: add eax, dword ptr [edx + ebp] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+r_ebp)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005bc200: mov dword ptr [esi + 0xc], eax */ W32((u32)(r_esi+0xcu), r_eax);
    /* 005bc203: add edx, 0x4c */ {  u32 a = r_edx; u32 b = 0x4cu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005bc206: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005bc209: cmp ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005bc20b: jb 0x5bc1fd */ if (fC) goto L_005bc1fd;
L_005bc20d:; BB(0x005bc20d);
    /* 005bc20d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bc20e: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5bc213u); f_008581c5();
    /* 005bc213: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005bc214: mov ecx, dword ptr [esi + 0xc] */ r_ecx = R32((u32)(r_esi+0xcu));
    /* 005bc217: mov dword ptr [esi + 8], eax */ W32((u32)(r_esi+0x8u), r_eax);
    /* 005bc21a: mov eax, 0x4ec4ec4f */ r_eax = 0x4ec4ec4fu;
    /* 005bc21f: lea ebx, [ecx + 0x67ff] */ r_ebx = (u32)(r_ecx+0x67ffu);
    /* 005bc225: mul ebx */ { u64 t = (u64)r_eax * r_ebx; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 005bc227: mov eax, 0x4ec4ec4f */ r_eax = 0x4ec4ec4fu;
    /* 005bc22c: shr edx, 0xd */ { u32 c = (13u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 005bc22f: mov dword ptr [esi + 0x10], edx */ W32((u32)(r_esi+0x10u), r_edx);
    /* 005bc232: mul ecx */ { u64 t = (u64)r_eax * r_ecx; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 005bc234: shr edx, 0xd */ { u32 c = (13u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 005bc237: lea ebp, [edx + edx] */ r_ebp = (u32)(r_edx+r_edx);
    /* 005bc23a: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005bc23c: sub ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 005bc23e: lea edi, [edx + ebp*4] */ r_edi = (u32)(r_edx+r_ebp*4);
    /* 005bc241: shl edi, 0xb */ { u32 c = (11u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 005bc244: sub ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005bc246: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005bc248: je 0x5bc255 */ if (fZ) goto L_005bc255;
L_005bc24a:; BB(0x005bc24a);
    /* 005bc24a: mov dword ptr [esi + 0x14], ecx */ W32((u32)(r_esi+0x14u), r_ecx);
    /* 005bc24d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005bc24e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005bc24f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bc250: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005bc251: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005bc252: ret 8 */ FN_RET(0x005bc114); r_esp += 12; return;
L_005bc255:; BB(0x005bc255);
    /* 005bc255: mov dword ptr [esi + 0x14], 0x6800 */ W32((u32)(r_esi+0x14u), 0x6800u);
L_005bc25c:; BB(0x005bc25c);
    /* 005bc25c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005bc25d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005bc25e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bc25f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005bc260: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005bc261: ret 8 */ FN_RET(0x005bc114); r_esp += 12; return;
}

void f_005bc264(void) /* sub_5BC264 */
{
    FN_ENTER(0x005bc264);
    /* 005bc264: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bc265: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005bc266: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005bc268: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 005bc26c: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 005bc270: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bc272: je 0x5bc2ba */ if (fZ) goto L_005bc2ba;
L_005bc274:; BB(0x005bc274);
    /* 005bc274: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 005bc277: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bc279: je 0x5bc2ba */ if (fZ) goto L_005bc2ba;
L_005bc27b:; BB(0x005bc27b);
    /* 005bc27b: lea ebp, [edx + edx] */ r_ebp = (u32)(r_edx+r_edx);
    /* 005bc27e: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005bc280: sub ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 005bc282: lea ebp, [edx + ebp*4] */ r_ebp = (u32)(r_edx+r_ebp*4);
    /* 005bc285: shl ebp, 0xb */ { u32 c = (11u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebp = r;  } }
    /* 005bc288: add eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005bc28a: mov ebp, dword ptr [ebx + 0x10] */ r_ebp = R32((u32)(r_ebx+0x10u));
    /* 005bc28d: add ebp, -1 */ {  u32 a = r_ebp; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005bc290: cmp edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bc292: jne 0x5bc2ab */ if (!fZ) goto L_005bc2ab;
L_005bc294:; BB(0x005bc294);
    /* 005bc294: push dword ptr [ebx + 0x14] */ { u32 v = R32((u32)(r_ebx+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 005bc297: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bc298: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bc299: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x5bc29eu); f_0086b6b8();
    /* 005bc29e: mov eax, 1 */ r_eax = 0x1u;
    /* 005bc2a3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005bc2a6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005bc2a7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bc2a8: ret 8 */ FN_RET(0x005bc264); r_esp += 12; return;
L_005bc2ab:; BB(0x005bc2ab);
    /* 005bc2ab: push 0x6800 */ { u32 v = 0x6800u; r_esp -= 4; W32(r_esp, v); }
    /* 005bc2b0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bc2b1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bc2b2: call 0x86b324 */ r_esp -= 4; W32(r_esp, 0x5bc2b7u); f_0086b324();
    /* 005bc2b7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005bc2ba:; BB(0x005bc2ba);
    /* 005bc2ba: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005bc2bc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005bc2bd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bc2be: ret 8 */ FN_RET(0x005bc264); r_esp += 12; return;
}

void f_005bc2c4(void)
{
    FN_ENTER(0x005bc2c4);
    /* 005bc2c4: mov ecx, 0xa8d4e0 */ r_ecx = 0xa8d4e0u;
    /* 005bc2c9: call 0x5bc2dc */ r_esp -= 4; W32(r_esp, 0x5bc2ceu); f_005bc2dc();
    /* 005bc2ce: push 0x5bc2f4 */ { u32 v = 0x5bc2f4u; r_esp -= 4; W32(r_esp, v); }
    /* 005bc2d3: call 0x85909d */ r_esp -= 4; W32(r_esp, 0x5bc2d8u); f_0085909d();
    /* 005bc2d8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005bc2d9: ret  */ FN_RET(0x005bc2c4); r_esp += 4; return;
}

void f_005bc2dc(void) /* sub_5BC2DC */
{
    FN_ENTER(0x005bc2dc);
    /* 005bc2dc: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005bc2de: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 005bc2e0: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 005bc2e3: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 005bc2e6: mov dword ptr [ecx + 0xc], edx */ W32((u32)(r_ecx+0xcu), r_edx);
    /* 005bc2e9: mov dword ptr [ecx + 0x10], edx */ W32((u32)(r_ecx+0x10u), r_edx);
    /* 005bc2ec: mov dword ptr [ecx + 0x14], edx */ W32((u32)(r_ecx+0x14u), r_edx);
    /* 005bc2ef: mov eax, ecx */ r_eax = r_ecx;
    /* 005bc2f1: ret  */ FN_RET(0x005bc2dc); r_esp += 4; return;
}

void f_005bc300(void) /* sub_5BC300 */
{
    FN_ENTER(0x005bc300);
    /* 005bc300: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005bc301: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005bc303: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005bc305: call 0x5bc324 */ r_esp -= 4; W32(r_esp, 0x5bc30au); f_005bc324();
    /* 005bc30a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005bc30e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005bc310: jne 0x5bc316 */ if (!fZ) goto L_005bc316;
L_005bc312:; BB(0x005bc312);
    /* 005bc312: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005bc313: ret 4 */ FN_RET(0x005bc300); r_esp += 8; return;
L_005bc316:; BB(0x005bc316);
    /* 005bc316: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005bc317: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5bc31cu); f_005c2f74();
    /* 005bc31c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005bc31d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005bc31e: ret 4 */ FN_RET(0x005bc300); r_esp += 8; return;
}

void f_005bc324(void) /* sub_5BC324 */
{
    FN_ENTER(0x005bc324);
    /* 005bc324: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bc325: mov ebp, esp */ r_ebp = r_esp;
    /* 005bc327: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005bc329: push 0x8d93e0 */ { u32 v = 0x8d93e0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bc32e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005bc334: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bc335: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005bc33c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005bc33f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005bc342: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005bc345: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005bc348: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005bc34b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005bc34e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005bc351: mov dword ptr [ecx], 0xb0baf0 */ W32((u32)(r_ecx), 0xb0baf0u);
    /* 005bc357: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005bc35e: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x5bc363u); f_008171e8();
    /* 005bc363: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005bc366: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005bc36d: mov esp, ebp */ r_esp = r_ebp;
    /* 005bc36f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bc370: ret  */ FN_RET(0x005bc324); r_esp += 4; return;
}

void f_005bc374(void) /* sub_5BC374 */
{
    FN_ENTER(0x005bc374);
    /* 005bc374: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005bc375: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005bc377: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005bc379: call 0x5bc398 */ r_esp -= 4; W32(r_esp, 0x5bc37eu); f_005bc398();
    /* 005bc37e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005bc382: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005bc384: jne 0x5bc38a */ if (!fZ) goto L_005bc38a;
L_005bc386:; BB(0x005bc386);
    /* 005bc386: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005bc387: ret 4 */ FN_RET(0x005bc374); r_esp += 8; return;
L_005bc38a:; BB(0x005bc38a);
    /* 005bc38a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005bc38b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5bc390u); f_005c2f74();
    /* 005bc390: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005bc391: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005bc392: ret 4 */ FN_RET(0x005bc374); r_esp += 8; return;
}

void f_005bc398(void) /* sub_5BC398 */
{
    FN_ENTER(0x005bc398);
    /* 005bc398: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bc399: mov ebp, esp */ r_ebp = r_esp;
    /* 005bc39b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005bc39d: push 0x8d93fc */ { u32 v = 0x8d93fcu; r_esp -= 4; W32(r_esp, v); }
    /* 005bc3a2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005bc3a8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bc3a9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005bc3b0: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005bc3b3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005bc3b6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005bc3b9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005bc3bc: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005bc3bf: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005bc3c2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005bc3c9: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005bc3cc: mov dword ptr [eax], 0xb0bae0 */ W32((u32)(r_eax), 0xb0bae0u);
    /* 005bc3d2: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x5bc3d7u); f_0061cdb0();
    /* 005bc3d7: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x5bc3dcu); f_0082dab0();
    /* 005bc3dc: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005bc3df: mov eax, dword ptr [ecx + 0x1c4] */ r_eax = R32((u32)(r_ecx+0x1c4u));
    /* 005bc3e5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005bc3e7: jl 0x5bc3f9 */ if ((fS!=fO)) goto L_005bc3f9;
L_005bc3e9:; BB(0x005bc3e9);
    /* 005bc3e9: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005bc3ec: jge 0x5bc3f9 */ if ((fS==fO)) goto L_005bc3f9;
L_005bc3ee:; BB(0x005bc3ee);
    /* 005bc3ee: mov dword ptr [eax*4 + 0xa8d774], 0 */ W32((u32)(r_eax*4+0xa8d774u), 0x0u);
L_005bc3f9:; BB(0x005bc3f9);
    /* 005bc3f9: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005bc400: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x5bc405u); f_008171e8();
    /* 005bc405: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005bc408: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005bc40f: mov esp, ebp */ r_esp = r_ebp;
    /* 005bc411: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bc412: ret  */ FN_RET(0x005bc398); r_esp += 4; return;
}

void f_005bc414(void) /* sub_5BC414 */
{
    FN_ENTER(0x005bc414);
    /* 005bc414: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005bc415: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005bc417: mov ebx, eax */ r_ebx = r_eax;
L_005bc419:; BB(0x005bc419);
    /* 005bc419: mov ecx, dword ptr [ebx + 0xa8d774] */ r_ecx = R32((u32)(r_ebx+0xa8d774u));
    /* 005bc41f: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005bc422: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bc424: je 0x5bc439 */ if (fZ) goto L_005bc439;
L_005bc426:; BB(0x005bc426);
    /* 005bc426: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 005bc429: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005bc42c: je 0x5bc439 */ if (fZ) goto L_005bc439;
L_005bc42e:; BB(0x005bc42e);
    /* 005bc42e: and edx, 0xfffffffe */ {  u32 a = r_edx; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005bc431: mov dword ptr [ecx + 0x1c], edx */ W32((u32)(r_ecx+0x1cu), r_edx);
    /* 005bc434: call 0x5bc440 */ r_esp -= 4; W32(r_esp, 0x5bc439u); f_005bc440();
L_005bc439:; BB(0x005bc439);
    /* 005bc439: cmp ebx, 0x10 */ {  u32 a = r_ebx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005bc43c: jl 0x5bc419 */ if ((fS!=fO)) goto L_005bc419;
L_005bc43e:; BB(0x005bc43e);
    /* 005bc43e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005bc43f: ret  */ FN_RET(0x005bc414); r_esp += 4; return;
}

void f_005bc440(void) /* sub_5BC440 */
{
    FN_ENTER(0x005bc440);
    /* 005bc440: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005bc441: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005bc443: mov ecx, 1 */ r_ecx = 0x1u;
    /* 005bc448: call 0x82db44 */ r_esp -= 4; W32(r_esp, 0x5bc44du); f_0082db44();
    /* 005bc44d: mov ecx, dword ptr [ebx + 0x188] */ r_ecx = R32((u32)(r_ebx+0x188u));
    /* 005bc453: call 0x82dacc */ r_esp -= 4; W32(r_esp, 0x5bc458u); f_0082dacc();
    /* 005bc458: fld dword ptr [ebx + 0x190] */ FPUSH(R_F32((u32)(r_ebx+0x190u)));
    /* 005bc45e: fld dword ptr [ebx + 0x18c] */ FPUSH(R_F32((u32)(r_ebx+0x18cu)));
    /* 005bc464: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bc467: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005bc469: fchs  */ ST(0) = -ST(0);
    /* 005bc46b: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005bc46e: fchs  */ ST(0) = -ST(0);
    /* 005bc470: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 005bc474: call 0x82dae0 */ r_esp -= 4; W32(r_esp, 0x5bc479u); f_0082dae0();
    /* 005bc479: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x5bc47eu); f_0082dab0();
    /* 005bc47e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005bc47f: ret  */ FN_RET(0x005bc440); r_esp += 4; return;
}

void f_005bc480(void) /* sub_5BC480 */
{
    FN_ENTER(0x005bc480);
    /* 005bc480: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x5bc485u); f_0061cdb0();
    /* 005bc485: call 0x5bc4c8 */ r_esp -= 4; W32(r_esp, 0x5bc48au); f_005bc4c8();
    /* 005bc48a: mov eax, dword ptr [0xa8d770] */ r_eax = R32((u32)(0xa8d770u));
    /* 005bc48f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bc491: je 0x5bc49a */ if (fZ) goto L_005bc49a;
L_005bc493:; BB(0x005bc493);
    /* 005bc493: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bc494: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x5bc499u); f_00857e98();
    /* 005bc499: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_005bc49a:; BB(0x005bc49a);
    /* 005bc49a: mov dword ptr [0xa8d770], 0 */ W32((u32)(0xa8d770u), 0x0u);
    /* 005bc4a4: mov ecx, 0xffffffff */ r_ecx = 0xffffffffu;
    /* 005bc4a9: call 0x82dacc */ r_esp -= 4; W32(r_esp, 0x5bc4aeu); f_0082dacc();
    /* 005bc4ae: push 0x461c4000 */ { u32 v = 0x461c4000u; r_esp -= 4; W32(r_esp, v); }
    /* 005bc4b3: push 0x447a0000 */ { u32 v = 0x447a0000u; r_esp -= 4; W32(r_esp, v); }
    /* 005bc4b8: call 0x82dae0 */ r_esp -= 4; W32(r_esp, 0x5bc4bdu); f_0082dae0();
    /* 005bc4bd: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x5bc4c2u); f_0061cdb0();
    /* 005bc4c2: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x5bc4c7u); f_0082dbac();
    /* 005bc4c7: ret  */ FN_RET(0x005bc480); r_esp += 4; return;
}

void f_005bc4c8(void) /* sub_5BC4C8 */
{
    FN_ENTER(0x005bc4c8);
    /* 005bc4c8: mov edx, dword ptr [0xa8d784] */ r_edx = R32((u32)(0xa8d784u));
    /* 005bc4ce: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005bc4d0: je 0x5bc4df */ if (fZ) goto L_005bc4df;
L_005bc4d2:; BB(0x005bc4d2);
    /* 005bc4d2: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 005bc4d6: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005bc4db: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_005bc4df:; BB(0x005bc4df);
    /* 005bc4df: mov dword ptr [0xa8d784], 0 */ W32((u32)(0xa8d784u), 0x0u);
    /* 005bc4e9: ret  */ FN_RET(0x005bc4c8); r_esp += 4; return;
}

void f_005bc4ec(void) /* sub_5BC4EC */
{
    FN_ENTER(0x005bc4ec);
    /* 005bc4ec: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bc4ed: mov ebp, esp */ r_ebp = r_esp;
    /* 005bc4ef: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005bc4f1: push 0x8d9424 */ { u32 v = 0x8d9424u; r_esp -= 4; W32(r_esp, v); }
    /* 005bc4f6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005bc4fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bc4fd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005bc504: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005bc507: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005bc50a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005bc50d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005bc510: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005bc513: push 0x1c8 */ { u32 v = 0x1c8u; r_esp -= 4; W32(r_esp, v); }
    /* 005bc518: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
    /* 005bc51f: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5bc524u); f_005caba4();
    /* 005bc524: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005bc527: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bc52a: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 005bc52d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bc52f: je 0x5bca4e */ if (fZ) goto L_005bca4e;
L_005bc535:; BB(0x005bc535);
    /* 005bc535: mov dword ptr [ebp - 0x50], 1 */ W32((u32)(r_ebp+0xffffffb0u), 0x1u);
    /* 005bc53c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005bc543: push dword ptr [0xaca378] */ { u32 v = R32((u32)(0xaca378u)); r_esp -= 4; W32(r_esp, v); }
    /* 005bc549: mov ecx, eax */ r_ecx = r_eax;
    /* 005bc54b: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x5bc550u); f_008193cc();
    /* 005bc550: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005bc553: fld dword ptr [0x92b784] */ FPUSH(R_F32((u32)(0x92b784u)));
    /* 005bc559: mov dword ptr [eax], 0xb0bae0 */ W32((u32)(r_eax), 0xb0bae0u);
    /* 005bc55f: mov ebx, dword ptr [0x9c1f7c] */ r_ebx = R32((u32)(0x9c1f7cu));
    /* 005bc565: mov dword ptr [eax + 0x1b8], 0 */ W32((u32)(r_eax+0x1b8u), 0x0u);
    /* 005bc56f: mov dword ptr [eax + 4], ebx */ W32((u32)(r_eax+0x4u), r_ebx);
    /* 005bc572: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 005bc574: mov dword ptr [eax + 0x1bc], 0 */ W32((u32)(r_eax+0x1bcu), 0x0u);
    /* 005bc57e: mov dword ptr [0xa8d774], eax */ W32((u32)(0xa8d774u), r_eax);
    /* 005bc583: mov dword ptr [eax + 0x1c4], edi */ W32((u32)(r_eax+0x1c4u), r_edi);
    /* 005bc589: mov dword ptr [eax + 0x20], edi */ W32((u32)(r_eax+0x20u), r_edi);
    /* 005bc58c: mov dword ptr [eax + 0x64], edi */ W32((u32)(r_eax+0x64u), r_edi);
    /* 005bc58f: mov edx, dword ptr [0xa8d720] */ r_edx = R32((u32)(0xa8d720u));
    /* 005bc595: lea ebx, [eax + 0x24] */ r_ebx = (u32)(r_eax+0x24u);
    /* 005bc598: mov dword ptr [eax + 0x24], edx */ W32((u32)(r_eax+0x24u), r_edx);
    /* 005bc59b: mov edx, dword ptr [0xa8d724] */ r_edx = R32((u32)(0xa8d724u));
    /* 005bc5a1: mov dword ptr [eax + 0x28], edx */ W32((u32)(r_eax+0x28u), r_edx);
    /* 005bc5a4: mov edx, dword ptr [0xa8d728] */ r_edx = R32((u32)(0xa8d728u));
    /* 005bc5aa: mov dword ptr [eax + 0x2c], edx */ W32((u32)(r_eax+0x2cu), r_edx);
    /* 005bc5ad: mov edx, dword ptr [0xa8d72c] */ r_edx = R32((u32)(0xa8d72cu));
    /* 005bc5b3: mov dword ptr [eax + 0x30], edx */ W32((u32)(r_eax+0x30u), r_edx);
    /* 005bc5b6: mov edx, dword ptr [0xa8d730] */ r_edx = R32((u32)(0xa8d730u));
    /* 005bc5bc: mov dword ptr [eax + 0x34], edx */ W32((u32)(r_eax+0x34u), r_edx);
    /* 005bc5bf: mov edx, dword ptr [0xa8d734] */ r_edx = R32((u32)(0xa8d734u));
    /* 005bc5c5: mov dword ptr [eax + 0x38], edx */ W32((u32)(r_eax+0x38u), r_edx);
    /* 005bc5c8: mov edx, dword ptr [0xa8d738] */ r_edx = R32((u32)(0xa8d738u));
    /* 005bc5ce: mov dword ptr [eax + 0x3c], edx */ W32((u32)(r_eax+0x3cu), r_edx);
    /* 005bc5d1: mov edx, dword ptr [0xa8d73c] */ r_edx = R32((u32)(0xa8d73cu));
    /* 005bc5d7: mov dword ptr [eax + 0x40], edx */ W32((u32)(r_eax+0x40u), r_edx);
    /* 005bc5da: mov edx, dword ptr [0xa8d740] */ r_edx = R32((u32)(0xa8d740u));
    /* 005bc5e0: mov dword ptr [eax + 0x44], edx */ W32((u32)(r_eax+0x44u), r_edx);
    /* 005bc5e3: mov edx, dword ptr [0xa8d744] */ r_edx = R32((u32)(0xa8d744u));
    /* 005bc5e9: mov dword ptr [eax + 0x48], edx */ W32((u32)(r_eax+0x48u), r_edx);
    /* 005bc5ec: mov edx, dword ptr [0xa8d748] */ r_edx = R32((u32)(0xa8d748u));
    /* 005bc5f2: mov dword ptr [eax + 0x4c], edx */ W32((u32)(r_eax+0x4cu), r_edx);
    /* 005bc5f5: mov edx, dword ptr [0xa8d74c] */ r_edx = R32((u32)(0xa8d74cu));
    /* 005bc5fb: mov dword ptr [eax + 0x50], edx */ W32((u32)(r_eax+0x50u), r_edx);
    /* 005bc5fe: mov edx, dword ptr [0xa8d750] */ r_edx = R32((u32)(0xa8d750u));
    /* 005bc604: mov dword ptr [eax + 0x54], edx */ W32((u32)(r_eax+0x54u), r_edx);
    /* 005bc607: mov edx, dword ptr [0xa8d754] */ r_edx = R32((u32)(0xa8d754u));
    /* 005bc60d: mov dword ptr [eax + 0x58], edx */ W32((u32)(r_eax+0x58u), r_edx);
    /* 005bc610: mov edx, dword ptr [0xa8d758] */ r_edx = R32((u32)(0xa8d758u));
    /* 005bc616: mov dword ptr [eax + 0x5c], edx */ W32((u32)(r_eax+0x5cu), r_edx);
    /* 005bc619: mov edx, dword ptr [0xa8d75c] */ r_edx = R32((u32)(0xa8d75cu));
    /* 005bc61f: mov dword ptr [eax + 0x60], edx */ W32((u32)(r_eax+0x60u), r_edx);
    /* 005bc622: mov dword ptr [eax + 0x174], ebx */ W32((u32)(r_eax+0x174u), r_ebx);
    /* 005bc628: mov dword ptr [eax + 0x68], 0 */ W32((u32)(r_eax+0x68u), 0x0u);
    /* 005bc62f: mov dword ptr [eax + 0xb8], edi */ W32((u32)(r_eax+0xb8u), r_edi);
    /* 005bc635: mov edx, dword ptr [0xa8d720] */ r_edx = R32((u32)(0xa8d720u));
    /* 005bc63b: lea esi, [eax + 0x78] */ r_esi = (u32)(r_eax+0x78u);
    /* 005bc63e: mov dword ptr [eax + 0x78], edx */ W32((u32)(r_eax+0x78u), r_edx);
    /* 005bc641: mov edx, dword ptr [0xa8d724] */ r_edx = R32((u32)(0xa8d724u));
    /* 005bc647: mov dword ptr [eax + 0x7c], edx */ W32((u32)(r_eax+0x7cu), r_edx);
    /* 005bc64a: mov edx, dword ptr [0xa8d728] */ r_edx = R32((u32)(0xa8d728u));
    /* 005bc650: mov dword ptr [eax + 0x80], edx */ W32((u32)(r_eax+0x80u), r_edx);
    /* 005bc656: mov edx, dword ptr [0xa8d72c] */ r_edx = R32((u32)(0xa8d72cu));
    /* 005bc65c: mov dword ptr [eax + 0x84], edx */ W32((u32)(r_eax+0x84u), r_edx);
    /* 005bc662: mov edx, dword ptr [0xa8d730] */ r_edx = R32((u32)(0xa8d730u));
    /* 005bc668: mov dword ptr [eax + 0x88], edx */ W32((u32)(r_eax+0x88u), r_edx);
    /* 005bc66e: mov edx, dword ptr [0xa8d734] */ r_edx = R32((u32)(0xa8d734u));
    /* 005bc674: mov dword ptr [eax + 0x8c], edx */ W32((u32)(r_eax+0x8cu), r_edx);
    /* 005bc67a: mov edx, dword ptr [0xa8d738] */ r_edx = R32((u32)(0xa8d738u));
    /* 005bc680: mov dword ptr [eax + 0x90], edx */ W32((u32)(r_eax+0x90u), r_edx);
    /* 005bc686: mov edx, dword ptr [0xa8d73c] */ r_edx = R32((u32)(0xa8d73cu));
    /* 005bc68c: mov dword ptr [eax + 0x94], edx */ W32((u32)(r_eax+0x94u), r_edx);
    /* 005bc692: mov edx, dword ptr [0xa8d740] */ r_edx = R32((u32)(0xa8d740u));
    /* 005bc698: mov dword ptr [eax + 0x98], edx */ W32((u32)(r_eax+0x98u), r_edx);
    /* 005bc69e: mov edx, dword ptr [0xa8d744] */ r_edx = R32((u32)(0xa8d744u));
    /* 005bc6a4: mov dword ptr [eax + 0x9c], edx */ W32((u32)(r_eax+0x9cu), r_edx);
    /* 005bc6aa: mov edx, dword ptr [0xa8d748] */ r_edx = R32((u32)(0xa8d748u));
    /* 005bc6b0: mov dword ptr [eax + 0xa0], edx */ W32((u32)(r_eax+0xa0u), r_edx);
    /* 005bc6b6: mov edx, dword ptr [0xa8d74c] */ r_edx = R32((u32)(0xa8d74cu));
    /* 005bc6bc: mov dword ptr [eax + 0xa4], edx */ W32((u32)(r_eax+0xa4u), r_edx);
    /* 005bc6c2: mov edx, dword ptr [0xa8d750] */ r_edx = R32((u32)(0xa8d750u));
    /* 005bc6c8: mov dword ptr [eax + 0xa8], edx */ W32((u32)(r_eax+0xa8u), r_edx);
    /* 005bc6ce: mov edx, dword ptr [0xa8d754] */ r_edx = R32((u32)(0xa8d754u));
    /* 005bc6d4: mov dword ptr [eax + 0xac], edx */ W32((u32)(r_eax+0xacu), r_edx);
    /* 005bc6da: mov edx, dword ptr [0xa8d758] */ r_edx = R32((u32)(0xa8d758u));
    /* 005bc6e0: mov dword ptr [eax + 0xb0], edx */ W32((u32)(r_eax+0xb0u), r_edx);
    /* 005bc6e6: mov edx, dword ptr [0xa8d75c] */ r_edx = R32((u32)(0xa8d75cu));
    /* 005bc6ec: mov dword ptr [eax + 0xbc], 0 */ W32((u32)(r_eax+0xbcu), 0x0u);
    /* 005bc6f6: mov dword ptr [eax + 0xb4], edx */ W32((u32)(r_eax+0xb4u), r_edx);
    /* 005bc6fc: mov dword ptr [eax + 0x178], esi */ W32((u32)(r_eax+0x178u), r_esi);
    /* 005bc702: mov dword ptr [eax + 0x10c], edi */ W32((u32)(r_eax+0x10cu), r_edi);
    /* 005bc708: mov edx, dword ptr [0xa8d720] */ r_edx = R32((u32)(0xa8d720u));
    /* 005bc70e: lea ecx, [eax + 0xcc] */ r_ecx = (u32)(r_eax+0xccu);
    /* 005bc714: mov dword ptr [eax + 0xcc], edx */ W32((u32)(r_eax+0xccu), r_edx);
    /* 005bc71a: mov edx, dword ptr [0xa8d724] */ r_edx = R32((u32)(0xa8d724u));
    /* 005bc720: mov dword ptr [eax + 0xd0], edx */ W32((u32)(r_eax+0xd0u), r_edx);
    /* 005bc726: mov edx, dword ptr [0xa8d728] */ r_edx = R32((u32)(0xa8d728u));
    /* 005bc72c: mov dword ptr [eax + 0xd4], edx */ W32((u32)(r_eax+0xd4u), r_edx);
    /* 005bc732: mov edx, dword ptr [0xa8d72c] */ r_edx = R32((u32)(0xa8d72cu));
    /* 005bc738: mov dword ptr [eax + 0xd8], edx */ W32((u32)(r_eax+0xd8u), r_edx);
    /* 005bc73e: mov edx, dword ptr [0xa8d730] */ r_edx = R32((u32)(0xa8d730u));
    /* 005bc744: mov dword ptr [eax + 0xdc], edx */ W32((u32)(r_eax+0xdcu), r_edx);
    /* 005bc74a: mov edx, dword ptr [0xa8d734] */ r_edx = R32((u32)(0xa8d734u));
    /* 005bc750: mov dword ptr [eax + 0xe0], edx */ W32((u32)(r_eax+0xe0u), r_edx);
    /* 005bc756: mov edx, dword ptr [0xa8d738] */ r_edx = R32((u32)(0xa8d738u));
    /* 005bc75c: mov dword ptr [eax + 0xe4], edx */ W32((u32)(r_eax+0xe4u), r_edx);
    /* 005bc762: mov edx, dword ptr [0xa8d73c] */ r_edx = R32((u32)(0xa8d73cu));
    /* 005bc768: mov dword ptr [eax + 0xe8], edx */ W32((u32)(r_eax+0xe8u), r_edx);
    /* 005bc76e: mov edx, dword ptr [0xa8d740] */ r_edx = R32((u32)(0xa8d740u));
    /* 005bc774: mov dword ptr [eax + 0xec], edx */ W32((u32)(r_eax+0xecu), r_edx);
    /* 005bc77a: mov edx, dword ptr [0xa8d744] */ r_edx = R32((u32)(0xa8d744u));
    /* 005bc780: mov dword ptr [eax + 0xf0], edx */ W32((u32)(r_eax+0xf0u), r_edx);
    /* 005bc786: mov edx, dword ptr [0xa8d748] */ r_edx = R32((u32)(0xa8d748u));
    /* 005bc78c: mov dword ptr [eax + 0xf4], edx */ W32((u32)(r_eax+0xf4u), r_edx);
    /* 005bc792: mov edx, dword ptr [0xa8d74c] */ r_edx = R32((u32)(0xa8d74cu));
    /* 005bc798: mov dword ptr [eax + 0xf8], edx */ W32((u32)(r_eax+0xf8u), r_edx);
    /* 005bc79e: mov edx, dword ptr [0xa8d750] */ r_edx = R32((u32)(0xa8d750u));
    /* 005bc7a4: mov dword ptr [eax + 0xfc], edx */ W32((u32)(r_eax+0xfcu), r_edx);
    /* 005bc7aa: mov edx, dword ptr [0xa8d754] */ r_edx = R32((u32)(0xa8d754u));
    /* 005bc7b0: mov dword ptr [eax + 0x100], edx */ W32((u32)(r_eax+0x100u), r_edx);
    /* 005bc7b6: mov edx, dword ptr [0xa8d758] */ r_edx = R32((u32)(0xa8d758u));
    /* 005bc7bc: mov dword ptr [eax + 0x104], edx */ W32((u32)(r_eax+0x104u), r_edx);
    /* 005bc7c2: mov edx, dword ptr [0xa8d75c] */ r_edx = R32((u32)(0xa8d75cu));
    /* 005bc7c8: mov dword ptr [eax + 0x108], edx */ W32((u32)(r_eax+0x108u), r_edx);
    /* 005bc7ce: mov dword ptr [eax + 0x17c], ecx */ W32((u32)(r_eax+0x17cu), r_ecx);
    /* 005bc7d4: mov dword ptr [eax + 0x160], edi */ W32((u32)(r_eax+0x160u), r_edi);
    /* 005bc7da: mov dword ptr [eax + 0x110], 0 */ W32((u32)(r_eax+0x110u), 0x0u);
    /* 005bc7e4: mov ecx, dword ptr [0xa8d720] */ r_ecx = R32((u32)(0xa8d720u));
    /* 005bc7ea: lea edx, [eax + 0x120] */ r_edx = (u32)(r_eax+0x120u);
    /* 005bc7f0: mov dword ptr [eax + 0x120], ecx */ W32((u32)(r_eax+0x120u), r_ecx);
    /* 005bc7f6: mov ecx, dword ptr [0xa8d724] */ r_ecx = R32((u32)(0xa8d724u));
    /* 005bc7fc: mov dword ptr [eax + 0x124], ecx */ W32((u32)(r_eax+0x124u), r_ecx);
    /* 005bc802: mov ecx, dword ptr [0xa8d728] */ r_ecx = R32((u32)(0xa8d728u));
    /* 005bc808: mov dword ptr [eax + 0x128], ecx */ W32((u32)(r_eax+0x128u), r_ecx);
    /* 005bc80e: mov ecx, dword ptr [0xa8d72c] */ r_ecx = R32((u32)(0xa8d72cu));
    /* 005bc814: mov dword ptr [eax + 0x12c], ecx */ W32((u32)(r_eax+0x12cu), r_ecx);
    /* 005bc81a: mov ecx, dword ptr [0xa8d730] */ r_ecx = R32((u32)(0xa8d730u));
    /* 005bc820: mov dword ptr [eax + 0x130], ecx */ W32((u32)(r_eax+0x130u), r_ecx);
    /* 005bc826: mov ecx, dword ptr [0xa8d734] */ r_ecx = R32((u32)(0xa8d734u));
    /* 005bc82c: mov dword ptr [eax + 0x134], ecx */ W32((u32)(r_eax+0x134u), r_ecx);
    /* 005bc832: mov ecx, dword ptr [0xa8d738] */ r_ecx = R32((u32)(0xa8d738u));
    /* 005bc838: mov dword ptr [eax + 0x138], ecx */ W32((u32)(r_eax+0x138u), r_ecx);
    /* 005bc83e: mov ecx, dword ptr [0xa8d73c] */ r_ecx = R32((u32)(0xa8d73cu));
    /* 005bc844: mov dword ptr [eax + 0x13c], ecx */ W32((u32)(r_eax+0x13cu), r_ecx);
    /* 005bc84a: mov ecx, dword ptr [0xa8d740] */ r_ecx = R32((u32)(0xa8d740u));
    /* 005bc850: mov dword ptr [eax + 0x140], ecx */ W32((u32)(r_eax+0x140u), r_ecx);
    /* 005bc856: mov ecx, dword ptr [0xa8d744] */ r_ecx = R32((u32)(0xa8d744u));
    /* 005bc85c: mov dword ptr [eax + 0x144], ecx */ W32((u32)(r_eax+0x144u), r_ecx);
    /* 005bc862: mov ecx, dword ptr [0xa8d748] */ r_ecx = R32((u32)(0xa8d748u));
    /* 005bc868: mov dword ptr [eax + 0x148], ecx */ W32((u32)(r_eax+0x148u), r_ecx);
    /* 005bc86e: mov ecx, dword ptr [0xa8d74c] */ r_ecx = R32((u32)(0xa8d74cu));
    /* 005bc874: mov dword ptr [eax + 0x14c], ecx */ W32((u32)(r_eax+0x14cu), r_ecx);
    /* 005bc87a: mov ecx, dword ptr [0xa8d750] */ r_ecx = R32((u32)(0xa8d750u));
    /* 005bc880: mov dword ptr [eax + 0x150], ecx */ W32((u32)(r_eax+0x150u), r_ecx);
    /* 005bc886: mov ecx, dword ptr [0xa8d754] */ r_ecx = R32((u32)(0xa8d754u));
    /* 005bc88c: mov dword ptr [eax + 0x154], ecx */ W32((u32)(r_eax+0x154u), r_ecx);
    /* 005bc892: mov ecx, dword ptr [0xa8d758] */ r_ecx = R32((u32)(0xa8d758u));
    /* 005bc898: mov dword ptr [eax + 0x158], ecx */ W32((u32)(r_eax+0x158u), r_ecx);
    /* 005bc89e: mov ecx, dword ptr [0xa8d75c] */ r_ecx = R32((u32)(0xa8d75cu));
    /* 005bc8a4: mov dword ptr [eax + 0x15c], ecx */ W32((u32)(r_eax+0x15cu), r_ecx);
    /* 005bc8aa: mov dword ptr [eax + 0x180], edx */ W32((u32)(r_eax+0x180u), r_edx);
    /* 005bc8b0: mov dword ptr [eax + 0x164], 0 */ W32((u32)(r_eax+0x164u), 0x0u);
    /* 005bc8ba: mov dword ptr [eax + 0x184], edi */ W32((u32)(r_eax+0x184u), r_edi);
    /* 005bc8c0: mov dword ptr [eax + 0x19c], edi */ W32((u32)(r_eax+0x19cu), r_edi);
    /* 005bc8c6: mov dword ptr [eax + 0x1a0], edi */ W32((u32)(r_eax+0x1a0u), r_edi);
    /* 005bc8cc: mov dword ptr [eax + 0x1a4], edi */ W32((u32)(r_eax+0x1a4u), r_edi);
    /* 005bc8d2: mov dword ptr [eax + 0x1a8], edi */ W32((u32)(r_eax+0x1a8u), r_edi);
    /* 005bc8d8: mov dword ptr [eax + 0x1ac], edi */ W32((u32)(r_eax+0x1acu), r_edi);
    /* 005bc8de: mov dword ptr [eax + 0x1b0], edi */ W32((u32)(r_eax+0x1b0u), r_edi);
    /* 005bc8e4: mov dword ptr [eax + 0x1b4], edi */ W32((u32)(r_eax+0x1b4u), r_edi);
    /* 005bc8ea: mov dword ptr [eax + 0x1c0], edi */ W32((u32)(r_eax+0x1c0u), r_edi);
    /* 005bc8f0: mov dword ptr [eax + 0x1c], edi */ W32((u32)(r_eax+0x1cu), r_edi);
    /* 005bc8f3: mov edx, dword ptr [ebx + 4] */ r_edx = R32((u32)(r_ebx+0x4u));
    /* 005bc8f6: mov dword ptr [eax + 0x188], edx */ W32((u32)(r_eax+0x188u), r_edx);
    /* 005bc8fc: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 005bc8ff: mov dword ptr [eax + 0x18c], edx */ W32((u32)(r_eax+0x18cu), r_edx);
    /* 005bc905: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 005bc908: mov dword ptr [eax + 0x194], 0x44200000 */ W32((u32)(r_eax+0x194u), 0x44200000u);
    /* 005bc912: mov dword ptr [eax + 0x190], edx */ W32((u32)(r_eax+0x190u), r_edx);
    /* 005bc918: fcom dword ptr [ebx + 0x20] */ fx_compare(ST(0), R_F32((u32)(r_ebx+0x20u))); 
    /* 005bc91b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005bc91d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005bc91e: je 0x5bc97f */ if (fZ) goto L_005bc97f;
L_005bc920:; BB(0x005bc920);
    /* 005bc920: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005bc922: fild dword ptr [0xa9c4ec] */ FPUSH((long double)(i32)R32((u32)(0xa9c4ecu)));
    /* 005bc928: fmul dword ptr [ebx + 0x18] */ ST(0) = ST(0) * R_F32((u32)(r_ebx+0x18u));
    /* 005bc92b: movzx edx, byte ptr [ebx + 0x3a] */ r_edx = (u32)R8((u32)(r_ebx+0x3au));
    /* 005bc92f: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
    /* 005bc932: fild dword ptr [ebp - 0x48] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffb8u)));
    /* 005bc935: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 005bc937: fmul dword ptr [0x92b77c] */ ST(0) = ST(0) * R_F32((u32)(0x92b77cu));
    /* 005bc93d: fdiv dword ptr [0x92b778] */ ST(0) = ST(0) / R_F32((u32)(0x92b778u));
    /* 005bc943: fnstcw word ptr [ebp - 0x40] */ W16((u32)(r_ebp+0xffffffc0u), fcw);
    /* 005bc946: movzx eax, word ptr [ebp - 0x40] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc0u));
    /* 005bc94a: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005bc94f: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 005bc952: fldcw word ptr [ebp - 0x38] */ fcw = R16((u32)(r_ebp+0xffffffc8u));
    /* 005bc955: fistp dword ptr [ebp - 0x30] */ W32((u32)(r_ebp+0xffffffd0u), (u32)fx_int32(ST(0))); FPOP();
    /* 005bc958: fldcw word ptr [ebp - 0x40] */ fcw = R16((u32)(r_ebp+0xffffffc0u));
    /* 005bc95b: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005bc95e: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x5bc963u); f_0082dcbc();
    /* 005bc963: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005bc966: fld dword ptr [ebx + 0x20] */ FPUSH(R_F32((u32)(r_ebx+0x20u)));
    /* 005bc969: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 005bc96b: fadd dword ptr [eax + 0x18c] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x18cu));
    /* 005bc971: fld dword ptr [0x92b784] */ FPUSH(R_F32((u32)(0x92b784u)));
    /* 005bc977: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005bc979: fstp dword ptr [eax + 0x18c] */ W_F32((u32)(r_eax+0x18cu), ST(0)); FPOP();
L_005bc97f:; BB(0x005bc97f);
    /* 005bc97f: fcom dword ptr [ebx + 0x28] */ fx_compare(ST(0), R_F32((u32)(r_ebx+0x28u))); 
    /* 005bc982: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005bc984: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005bc985: je 0x5bc9e6 */ if (fZ) goto L_005bc9e6;
L_005bc987:; BB(0x005bc987);
    /* 005bc987: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005bc989: fild dword ptr [0xa9c4ec] */ FPUSH((long double)(i32)R32((u32)(0xa9c4ecu)));
    /* 005bc98f: fmul dword ptr [ebx + 0x18] */ ST(0) = ST(0) * R_F32((u32)(r_ebx+0x18u));
    /* 005bc992: movzx edx, byte ptr [ebx + 0x3c] */ r_edx = (u32)R8((u32)(r_ebx+0x3cu));
    /* 005bc996: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 005bc999: fild dword ptr [ebp - 0x28] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd8u)));
    /* 005bc99c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 005bc99e: fmul dword ptr [0x92b77c] */ ST(0) = ST(0) * R_F32((u32)(0x92b77cu));
    /* 005bc9a4: fdiv dword ptr [0x92b778] */ ST(0) = ST(0) / R_F32((u32)(0x92b778u));
    /* 005bc9aa: fnstcw word ptr [ebp - 0x40] */ W16((u32)(r_ebp+0xffffffc0u), fcw);
    /* 005bc9ad: movzx eax, word ptr [ebp - 0x40] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc0u));
    /* 005bc9b1: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005bc9b6: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 005bc9b9: fldcw word ptr [ebp - 0x38] */ fcw = R16((u32)(r_ebp+0xffffffc8u));
    /* 005bc9bc: fistp dword ptr [ebp - 0x30] */ W32((u32)(r_ebp+0xffffffd0u), (u32)fx_int32(ST(0))); FPOP();
    /* 005bc9bf: fldcw word ptr [ebp - 0x40] */ fcw = R16((u32)(r_ebp+0xffffffc0u));
    /* 005bc9c2: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005bc9c5: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x5bc9cau); f_0082dcbc();
    /* 005bc9ca: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005bc9cd: fld dword ptr [ebx + 0x28] */ FPUSH(R_F32((u32)(r_ebx+0x28u)));
    /* 005bc9d0: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 005bc9d2: fadd dword ptr [eax + 0x190] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x190u));
    /* 005bc9d8: fld dword ptr [0x92b784] */ FPUSH(R_F32((u32)(0x92b784u)));
    /* 005bc9de: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005bc9e0: fstp dword ptr [eax + 0x190] */ W_F32((u32)(r_eax+0x190u), ST(0)); FPOP();
L_005bc9e6:; BB(0x005bc9e6);
    /* 005bc9e6: fcomp dword ptr [ebx + 0x30] */ fx_compare(ST(0), R_F32((u32)(r_ebx+0x30u))); FPOP();
    /* 005bc9e9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005bc9eb: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005bc9ec: je 0x5bca3b */ if (fZ) goto L_005bca3b;
L_005bc9ee:; BB(0x005bc9ee);
    /* 005bc9ee: fild dword ptr [0xa9c4ec] */ FPUSH((long double)(i32)R32((u32)(0xa9c4ecu)));
    /* 005bc9f4: fmul dword ptr [ebx + 0x18] */ ST(0) = ST(0) * R_F32((u32)(r_ebx+0x18u));
    /* 005bc9f7: fmul dword ptr [0x92b77c] */ ST(0) = ST(0) * R_F32((u32)(0x92b77cu));
    /* 005bc9fd: fdiv dword ptr [0x92b778] */ ST(0) = ST(0) / R_F32((u32)(0x92b778u));
    /* 005bca03: fnstcw word ptr [ebp - 0x40] */ W16((u32)(r_ebp+0xffffffc0u), fcw);
    /* 005bca06: movzx eax, word ptr [ebp - 0x40] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc0u));
    /* 005bca0a: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005bca0f: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 005bca12: fldcw word ptr [ebp - 0x38] */ fcw = R16((u32)(r_ebp+0xffffffc8u));
    /* 005bca15: fistp dword ptr [ebp - 0x30] */ W32((u32)(r_ebp+0xffffffd0u), (u32)fx_int32(ST(0))); FPOP();
    /* 005bca18: fldcw word ptr [ebp - 0x40] */ fcw = R16((u32)(r_ebp+0xffffffc0u));
    /* 005bca1b: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005bca1e: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x5bca23u); f_0082dcbc();
    /* 005bca23: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005bca26: movzx eax, byte ptr [ebx + 0x3e] */ r_eax = (u32)R8((u32)(r_ebx+0x3eu));
    /* 005bca2a: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005bca2d: fild dword ptr [ebp - 0x28] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd8u)));
    /* 005bca30: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 005bca32: fadd dword ptr [ebx + 0x30] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x30u));
    /* 005bca35: fstp dword ptr [edx + 0x194] */ W_F32((u32)(r_edx+0x194u), ST(0)); FPOP();
L_005bca3b:; BB(0x005bca3b);
    /* 005bca3b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005bca3e: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 005bca41: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
    /* 005bca48: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005bca4b: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
L_005bca4e:; BB(0x005bca4e);
    /* 005bca4e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005bca55: call 0x5c2c30 */ r_esp -= 4; W32(r_esp, 0x5bca5au); f_005c2c30();
    /* 005bca5a: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x5bca5fu); f_00807ac0();
    /* 005bca5f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005bca61: push dword ptr [eax*4 + 0x9c1ec0] */ { u32 v = R32((u32)(r_eax*4+0x9c1ec0u)); r_esp -= 4; W32(r_esp, v); }
    /* 005bca68: call 0x5bd918 */ r_esp -= 4; W32(r_esp, 0x5bca6du); f_005bd918();
    /* 005bca6d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005bca70: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 005bca73: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 005bca76: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005bca79: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005bca7c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005bca83: mov esp, ebp */ r_esp = r_ebp;
    /* 005bca85: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bca86: ret  */ FN_RET(0x005bc4ec); r_esp += 4; return;
}

void f_005bca88(void) /* sub_5BCA88 */
{
    FN_ENTER(0x005bca88);
    /* 005bca88: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005bca89: mov esi, 0x92b768 */ r_esi = 0x92b768u;
    /* 005bca8e: call 0x78b220 */ r_esp -= 4; W32(r_esp, 0x5bca93u); f_0078b220();
    /* 005bca93: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bca95: je 0x5bca9c */ if (fZ) goto L_005bca9c;
L_005bca97:; BB(0x005bca97);
    /* 005bca97: mov esi, 0x92b758 */ r_esi = 0x92b758u;
L_005bca9c:; BB(0x005bca9c);
    /* 005bca9c: push 0x4000 */ { u32 v = 0x4000u; r_esp -= 4; W32(r_esp, v); }
    /* 005bcaa1: push dword ptr [0xa8d770] */ { u32 v = R32((u32)(0xa8d770u)); r_esp -= 4; W32(r_esp, v); }
    /* 005bcaa7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005bcaa8: call 0x5b9f68 */ r_esp -= 4; W32(r_esp, 0x5bcaadu); f_005b9f68();
    /* 005bcaad: mov eax, 1 */ r_eax = 0x1u;
    /* 005bcab2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005bcab5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005bcab6: ret  */ FN_RET(0x005bca88); r_esp += 4; return;
}

void f_005bcab8(void) /* sub_5BCAB8 */
{
    FN_ENTER(0x005bcab8);
    /* 005bcab8: mov ecx, dword ptr [0xa8d774] */ r_ecx = R32((u32)(0xa8d774u));
    /* 005bcabe: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bcac0: je 0x5bcad0 */ if (fZ) goto L_005bcad0;
L_005bcac2:; BB(0x005bcac2);
    /* 005bcac2: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005bcac6: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005bcaca: call 0x5bcad4 */ r_esp -= 4; W32(r_esp, 0x5bcacfu); f_005bcad4();
    /* 005bcacf: ret  */ FN_RET(0x005bcab8); r_esp += 4; return;
L_005bcad0:; BB(0x005bcad0);
    /* 005bcad0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005bcad2: ret  */ FN_RET(0x005bcab8); r_esp += 4; return;
}

void f_005bcad4(void) /* sub_5BCAD4 */
{
    FN_ENTER(0x005bcad4);
    /* 005bcad4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bcad5: mov eax, dword ptr [ecx + 0x1c0] */ r_eax = R32((u32)(r_ecx+0x1c0u));
    /* 005bcadb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bcadd: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 005bcae1: je 0x5bcae9 */ if (fZ) goto L_005bcae9;
L_005bcae3:; BB(0x005bcae3);
    /* 005bcae3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005bcae5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bcae6: ret 8 */ FN_RET(0x005bcad4); r_esp += 12; return;
L_005bcae9:; BB(0x005bcae9);
    /* 005bcae9: mov eax, dword ptr [ecx + 0x17c] */ r_eax = R32((u32)(r_ecx+0x17cu));
    /* 005bcaef: mov dword ptr [eax + 0x40], 0xffffffff */ W32((u32)(r_eax+0x40u), 0xffffffffu);
    /* 005bcaf6: mov ebp, dword ptr [edx] */ r_ebp = R32((u32)(r_edx));
    /* 005bcaf8: mov dword ptr [eax], ebp */ W32((u32)(r_eax), r_ebp);
    /* 005bcafa: mov ebp, dword ptr [edx + 4] */ r_ebp = R32((u32)(r_edx+0x4u));
    /* 005bcafd: mov dword ptr [eax + 4], ebp */ W32((u32)(r_eax+0x4u), r_ebp);
    /* 005bcb00: mov ebp, dword ptr [edx + 8] */ r_ebp = R32((u32)(r_edx+0x8u));
    /* 005bcb03: mov dword ptr [eax + 8], ebp */ W32((u32)(r_eax+0x8u), r_ebp);
    /* 005bcb06: mov ebp, dword ptr [edx + 0xc] */ r_ebp = R32((u32)(r_edx+0xcu));
    /* 005bcb09: mov dword ptr [eax + 0xc], ebp */ W32((u32)(r_eax+0xcu), r_ebp);
    /* 005bcb0c: mov ebp, dword ptr [edx + 0x10] */ r_ebp = R32((u32)(r_edx+0x10u));
    /* 005bcb0f: mov dword ptr [eax + 0x10], ebp */ W32((u32)(r_eax+0x10u), r_ebp);
    /* 005bcb12: mov ebp, dword ptr [edx + 0x14] */ r_ebp = R32((u32)(r_edx+0x14u));
    /* 005bcb15: mov dword ptr [eax + 0x14], ebp */ W32((u32)(r_eax+0x14u), r_ebp);
    /* 005bcb18: mov ebp, dword ptr [edx + 0x18] */ r_ebp = R32((u32)(r_edx+0x18u));
    /* 005bcb1b: mov dword ptr [eax + 0x18], ebp */ W32((u32)(r_eax+0x18u), r_ebp);
    /* 005bcb1e: mov ebp, dword ptr [edx + 0x1c] */ r_ebp = R32((u32)(r_edx+0x1cu));
    /* 005bcb21: mov dword ptr [eax + 0x1c], ebp */ W32((u32)(r_eax+0x1cu), r_ebp);
    /* 005bcb24: mov ebp, dword ptr [edx + 0x20] */ r_ebp = R32((u32)(r_edx+0x20u));
    /* 005bcb27: mov dword ptr [eax + 0x20], ebp */ W32((u32)(r_eax+0x20u), r_ebp);
    /* 005bcb2a: mov ebp, dword ptr [edx + 0x24] */ r_ebp = R32((u32)(r_edx+0x24u));
    /* 005bcb2d: mov dword ptr [eax + 0x24], ebp */ W32((u32)(r_eax+0x24u), r_ebp);
    /* 005bcb30: mov ebp, dword ptr [edx + 0x28] */ r_ebp = R32((u32)(r_edx+0x28u));
    /* 005bcb33: mov dword ptr [eax + 0x28], ebp */ W32((u32)(r_eax+0x28u), r_ebp);
    /* 005bcb36: mov ebp, dword ptr [edx + 0x2c] */ r_ebp = R32((u32)(r_edx+0x2cu));
    /* 005bcb39: mov dword ptr [eax + 0x2c], ebp */ W32((u32)(r_eax+0x2cu), r_ebp);
    /* 005bcb3c: mov ebp, dword ptr [edx + 0x30] */ r_ebp = R32((u32)(r_edx+0x30u));
    /* 005bcb3f: mov dword ptr [eax + 0x30], ebp */ W32((u32)(r_eax+0x30u), r_ebp);
    /* 005bcb42: mov ebp, dword ptr [edx + 0x34] */ r_ebp = R32((u32)(r_edx+0x34u));
    /* 005bcb45: mov dword ptr [eax + 0x34], ebp */ W32((u32)(r_eax+0x34u), r_ebp);
    /* 005bcb48: mov ebp, dword ptr [edx + 0x38] */ r_ebp = R32((u32)(r_edx+0x38u));
    /* 005bcb4b: mov dword ptr [eax + 0x38], ebp */ W32((u32)(r_eax+0x38u), r_ebp);
    /* 005bcb4e: mov edx, dword ptr [edx + 0x3c] */ r_edx = R32((u32)(r_edx+0x3cu));
    /* 005bcb51: mov dword ptr [eax + 0x3c], edx */ W32((u32)(r_eax+0x3cu), r_edx);
    /* 005bcb54: mov dword ptr [eax + 0x44], 0 */ W32((u32)(r_eax+0x44u), 0x0u);
    /* 005bcb5b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005bcb5d: mov dword ptr [eax + 0x48], edx */ W32((u32)(r_eax+0x48u), r_edx);
    /* 005bcb60: mov dword ptr [eax + 0x4c], edx */ W32((u32)(r_eax+0x4cu), r_edx);
    /* 005bcb63: mov dword ptr [eax + 0x50], edx */ W32((u32)(r_eax+0x50u), r_edx);
    /* 005bcb66: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 005bcb6a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005bcb6c: je 0x5bcb77 */ if (fZ) goto L_005bcb77;
L_005bcb6e:; BB(0x005bcb6e);
    /* 005bcb6e: mov dword ptr [ecx + 0x20], 1 */ W32((u32)(r_ecx+0x20u), 0x1u);
    /* 005bcb75: jmp 0x5bcb7e */ goto L_005bcb7e;
L_005bcb77:; BB(0x005bcb77);
    /* 005bcb77: mov dword ptr [ecx + 0x20], 2 */ W32((u32)(r_ecx+0x20u), 0x2u);
L_005bcb7e:; BB(0x005bcb7e);
    /* 005bcb7e: mov edx, dword ptr [ecx + 0x184] */ r_edx = R32((u32)(r_ecx+0x184u));
    /* 005bcb84: mov dword ptr [ecx + 0x1a0], 2 */ W32((u32)(r_ecx+0x1a0u), 0x2u);
    /* 005bcb8e: mov dword ptr [ecx + 0x19c], edx */ W32((u32)(r_ecx+0x19cu), r_edx);
    /* 005bcb94: mov eax, 1 */ r_eax = 0x1u;
    /* 005bcb99: mov dword ptr [ecx + 0x1a4], 1 */ W32((u32)(r_ecx+0x1a4u), 0x1u);
    /* 005bcba3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bcba4: ret 8 */ FN_RET(0x005bcad4); r_esp += 12; return;
}

void f_005bcba8(void) /* sub_5BCBA8 */
{
    FN_ENTER(0x005bcba8);
    /* 005bcba8: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 005bcbac: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 005bcbb0: mov eax, dword ptr [0xa8d774] */ r_eax = R32((u32)(0xa8d774u));
L_005bcbb5:; BB(0x005bcbb5);
    /* 005bcbb5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bcbb7: jne 0x5bcbb5 */ if (!fZ) goto L_005bcbb5;
L_005bcbb9:; BB(0x005bcbb9);
    /* 005bcbb9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005bcbbb: ret  */ FN_RET(0x005bcba8); r_esp += 4; return;
}

void f_005bcbbc(void) /* sub_5BCBBC */
{
    FN_ENTER(0x005bcbbc);
    /* 005bcbbc: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 005bcbc0: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 005bcbc3: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005bcbc5: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005bcbc7: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005bcbc9: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005bcbcb: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005bcbcd: add eax, dword ptr [0xa8d770] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa8d770u)); u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005bcbd3: ret  */ FN_RET(0x005bcbbc); r_esp += 4; return;
}

void f_005bcbd4(void) /* sub_5BCBD4 */
{
    FN_ENTER(0x005bcbd4);
    /* 005bcbd4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005bcbd5: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005bcbd9: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 005bcbdc: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005bcbde: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 005bcbe2: mov eax, dword ptr [0xa8d770] */ r_eax = R32((u32)(0xa8d770u));
    /* 005bcbe7: mov edi, dword ptr [ecx] */ r_edi = R32((u32)(r_ecx));
    /* 005bcbe9: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005bcbeb: mov dword ptr [eax + edx*8], edi */ W32((u32)(r_eax+r_edx*8), r_edi);
    /* 005bcbee: mov edi, dword ptr [ecx + 4] */ r_edi = R32((u32)(r_ecx+0x4u));
    /* 005bcbf1: mov dword ptr [eax + edx*8 + 4], edi */ W32((u32)(r_eax+r_edx*8+0x4u), r_edi);
    /* 005bcbf5: mov edi, dword ptr [ecx + 8] */ r_edi = R32((u32)(r_ecx+0x8u));
    /* 005bcbf8: mov dword ptr [eax + edx*8 + 8], edi */ W32((u32)(r_eax+r_edx*8+0x8u), r_edi);
    /* 005bcbfc: mov edi, dword ptr [ecx + 0xc] */ r_edi = R32((u32)(r_ecx+0xcu));
    /* 005bcbff: mov dword ptr [eax + edx*8 + 0xc], edi */ W32((u32)(r_eax+r_edx*8+0xcu), r_edi);
    /* 005bcc03: mov edi, dword ptr [ecx + 0x10] */ r_edi = R32((u32)(r_ecx+0x10u));
    /* 005bcc06: mov dword ptr [eax + edx*8 + 0x10], edi */ W32((u32)(r_eax+r_edx*8+0x10u), r_edi);
    /* 005bcc0a: mov edi, dword ptr [ecx + 0x14] */ r_edi = R32((u32)(r_ecx+0x14u));
    /* 005bcc0d: mov dword ptr [eax + edx*8 + 0x14], edi */ W32((u32)(r_eax+r_edx*8+0x14u), r_edi);
    /* 005bcc11: mov edi, dword ptr [ecx + 0x18] */ r_edi = R32((u32)(r_ecx+0x18u));
    /* 005bcc14: mov dword ptr [eax + edx*8 + 0x18], edi */ W32((u32)(r_eax+r_edx*8+0x18u), r_edi);
    /* 005bcc18: mov edi, dword ptr [ecx + 0x1c] */ r_edi = R32((u32)(r_ecx+0x1cu));
    /* 005bcc1b: mov dword ptr [eax + edx*8 + 0x1c], edi */ W32((u32)(r_eax+r_edx*8+0x1cu), r_edi);
    /* 005bcc1f: mov edi, dword ptr [ecx + 0x20] */ r_edi = R32((u32)(r_ecx+0x20u));
    /* 005bcc22: mov dword ptr [eax + edx*8 + 0x20], edi */ W32((u32)(r_eax+r_edx*8+0x20u), r_edi);
    /* 005bcc26: mov edi, dword ptr [ecx + 0x24] */ r_edi = R32((u32)(r_ecx+0x24u));
    /* 005bcc29: mov dword ptr [eax + edx*8 + 0x24], edi */ W32((u32)(r_eax+r_edx*8+0x24u), r_edi);
    /* 005bcc2d: mov edi, dword ptr [ecx + 0x28] */ r_edi = R32((u32)(r_ecx+0x28u));
    /* 005bcc30: mov dword ptr [eax + edx*8 + 0x28], edi */ W32((u32)(r_eax+r_edx*8+0x28u), r_edi);
    /* 005bcc34: mov edi, dword ptr [ecx + 0x2c] */ r_edi = R32((u32)(r_ecx+0x2cu));
    /* 005bcc37: mov dword ptr [eax + edx*8 + 0x2c], edi */ W32((u32)(r_eax+r_edx*8+0x2cu), r_edi);
    /* 005bcc3b: mov edi, dword ptr [ecx + 0x30] */ r_edi = R32((u32)(r_ecx+0x30u));
    /* 005bcc3e: mov dword ptr [eax + edx*8 + 0x30], edi */ W32((u32)(r_eax+r_edx*8+0x30u), r_edi);
    /* 005bcc42: mov edi, dword ptr [ecx + 0x34] */ r_edi = R32((u32)(r_ecx+0x34u));
    /* 005bcc45: mov dword ptr [eax + edx*8 + 0x34], edi */ W32((u32)(r_eax+r_edx*8+0x34u), r_edi);
    /* 005bcc49: mov edi, dword ptr [ecx + 0x38] */ r_edi = R32((u32)(r_ecx+0x38u));
    /* 005bcc4c: mov dword ptr [eax + edx*8 + 0x38], edi */ W32((u32)(r_eax+r_edx*8+0x38u), r_edi);
    /* 005bcc50: mov ecx, dword ptr [ecx + 0x3c] */ r_ecx = R32((u32)(r_ecx+0x3cu));
    /* 005bcc53: mov dword ptr [eax + edx*8 + 0x3c], ecx */ W32((u32)(r_eax+r_edx*8+0x3cu), r_ecx);
    /* 005bcc57: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005bcc58: ret  */ FN_RET(0x005bcbd4); r_esp += 4; return;
}

void f_005bcc5c(void) /* sub_5BCC5C */
{
    FN_ENTER(0x005bcc5c);
    /* 005bcc5c: mov ecx, dword ptr [0xa8d774] */ r_ecx = R32((u32)(0xa8d774u));
    /* 005bcc62: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bcc64: je 0x5bcc6c */ if (fZ) goto L_005bcc6c;
L_005bcc66:; BB(0x005bcc66);
    /* 005bcc66: call 0x5bcc70 */ r_esp -= 4; W32(r_esp, 0x5bcc6bu); f_005bcc70();
    /* 005bcc6b: ret  */ FN_RET(0x005bcc5c); r_esp += 4; return;
L_005bcc6c:; BB(0x005bcc6c);
    /* 005bcc6c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005bcc6e: ret  */ FN_RET(0x005bcc5c); r_esp += 4; return;
}

void f_005bcc70(void) /* sub_5BCC70 */
{
    FN_ENTER(0x005bcc70);
    /* 005bcc70: mov eax, dword ptr [ecx + 0x20] */ r_eax = R32((u32)(r_ecx+0x20u));
    /* 005bcc73: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005bcc76: je 0x5bcc80 */ if (fZ) goto L_005bcc80;
L_005bcc78:; BB(0x005bcc78);
    /* 005bcc78: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005bcc7b: je 0x5bcc80 */ if (fZ) goto L_005bcc80;
L_005bcc7d:; BB(0x005bcc7d);
    /* 005bcc7d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005bcc7f: ret  */ FN_RET(0x005bcc70); r_esp += 4; return;
L_005bcc80:; BB(0x005bcc80);
    /* 005bcc80: mov eax, 1 */ r_eax = 0x1u;
    /* 005bcc85: ret  */ FN_RET(0x005bcc70); r_esp += 4; return;
}

void f_005bcc88(void) /* sub_5BCC88 */
{
    FN_ENTER(0x005bcc88);
    /* 005bcc88: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005bcc89: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005bcc8a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bcc8b: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005bcc8e: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 005bcc92: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 005bcc96: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 005bcc98: test cl, 1 */ {  u32 a = (u8)r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005bcc9b: je 0x5bcde0 */ if (fZ) goto L_005bcde0;
L_005bcca1:; BB(0x005bcca1);
    /* 005bcca1: fld dword ptr [0x92b750] */ FPUSH(R_F32((u32)(0x92b750u)));
    /* 005bcca7: fld dword ptr [0x92b750] */ FPUSH(R_F32((u32)(0x92b750u)));
    /* 005bccad: mov ebp, dword ptr [edx + 0x14] */ r_ebp = R32((u32)(r_edx+0x14u));
    /* 005bccb0: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 005bccb2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005bccb4: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 005bccb6: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 005bccb8: jbe 0x5bce37 */ if ((fC||fZ)) goto L_005bce37;
L_005bccbe:; BB(0x005bccbe);
    /* 005bccbe: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 005bccc0: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
L_005bccc4:; BB(0x005bccc4);
    /* 005bccc4: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 005bccc6: fld dword ptr [edx + esi*4 + 0x18] */ FPUSH(R_F32((u32)(r_edx+r_esi*4+0x18u)));
    /* 005bccca: fsubr st(1), st(0) */ ST(1) = ST(0) - ST(1);
    /* 005bcccc: movzx ebx, byte ptr [esi + edx + 0x38] */ r_ebx = (u32)R8((u32)(r_esi+r_edx+0x38u));
    /* 005bccd1: neg edi */ { u32 x = r_edi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 005bccd3: add edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005bccd5: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 005bccd8: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 005bccdb: fdivp st(2) */ ST(2) = ST(2) / ST(0); FPOP();
    /* 005bccdd: cmp ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005bccdf: jge 0x5bce3e */ if ((fS==fO)) goto L_005bce3e;
L_005bcce5:; BB(0x005bcce5);
    /* 005bcce5: mov ebp, ebx */ r_ebp = r_ebx;
    /* 005bcce7: sub ebp, ecx */ {  u32 a = r_ebp; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 005bcce9: cmp ebp, 6 */ {  u32 a = r_ebp; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005bccec: jl 0x5bcd33 */ if ((fS!=fO)) goto L_005bcd33;
L_005bccee:; BB(0x005bccee);
    /* 005bccee: lea edi, [ebx - 6] */ r_edi = (u32)(r_ebx+0xfffffffau);
    /* 005bccf1: lea ebp, [ecx + ecx] */ r_ebp = (u32)(r_ecx+r_ecx);
    /* 005bccf4: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005bccf6: neg ebp */ { u32 x = r_ebp; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
L_005bccf8:; BB(0x005bccf8);
    /* 005bccf8: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005bccfa: fst dword ptr [ebp + eax + 0x1fc] */ W_F32((u32)(r_ebp+r_eax+0x1fcu), ST(0));
    /* 005bcd01: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 005bcd03: fst dword ptr [ebp + eax + 0x1f8] */ W_F32((u32)(r_ebp+r_eax+0x1f8u), ST(0));
    /* 005bcd0a: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 005bcd0c: fst dword ptr [ebp + eax + 0x1f4] */ W_F32((u32)(r_ebp+r_eax+0x1f4u), ST(0));
    /* 005bcd13: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 005bcd15: fst dword ptr [ebp + eax + 0x1f0] */ W_F32((u32)(r_ebp+r_eax+0x1f0u), ST(0));
    /* 005bcd1c: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 005bcd1e: fst dword ptr [ebp + eax + 0x1ec] */ W_F32((u32)(r_ebp+r_eax+0x1ecu), ST(0));
    /* 005bcd25: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 005bcd27: add ebp, -0x14 */ {  u32 a = r_ebp; u32 b = 0xffffffecu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005bcd2a: add ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005bcd2d: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005bcd2f: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005bcd31: jle 0x5bccf8 */ if ((fZ||fS!=fO)) goto L_005bccf8;
L_005bcd33:; BB(0x005bcd33);
    /* 005bcd33: lea ebp, [ecx + ecx] */ r_ebp = (u32)(r_ecx+r_ecx);
    /* 005bcd36: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005bcd38: neg ebp */ { u32 x = r_ebp; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
L_005bcd3a:; BB(0x005bcd3a);
    /* 005bcd3a: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005bcd3c: fst dword ptr [ebp + eax + 0x1fc] */ W_F32((u32)(r_ebp+r_eax+0x1fcu), ST(0));
    /* 005bcd43: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 005bcd45: add ebp, -4 */ {  u32 a = r_ebp; u32 b = 0xfffffffcu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005bcd48: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005bcd4b: cmp ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005bcd4d: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005bcd4f: jl 0x5bcd3a */ if ((fS!=fO)) goto L_005bcd3a;
L_005bcd51:; BB(0x005bcd51);
    /* 005bcd51: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 005bcd53: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005bcd55: mov ebp, dword ptr [edx + 0x14] */ r_ebp = R32((u32)(r_edx+0x14u));
L_005bcd58:; BB(0x005bcd58);
    /* 005bcd58: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 005bcd5a: mov edi, ebx */ r_edi = r_ebx;
    /* 005bcd5c: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005bcd5f: cmp esi, ebp */ {  u32 a = r_esi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005bcd61: jae 0x5bcd6a */ if (!fC) goto L_005bcd6a;
L_005bcd63:; BB(0x005bcd63);
    /* 005bcd63: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 005bcd65: jmp 0x5bccc4 */ goto L_005bccc4;
L_005bcd6a:; BB(0x005bcd6a);
    /* 005bcd6a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005bcd6c: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
L_005bcd70:; BB(0x005bcd70);
    /* 005bcd70: cmp ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005bcd76: jge 0x5bce47 */ if ((fS==fO)) goto L_005bce47;
L_005bcd7c:; BB(0x005bcd7c);
    /* 005bcd7c: mov edx, ecx */ r_edx = r_ecx;
    /* 005bcd7e: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005bcd80: add edx, 0x80 */ {  u32 a = r_edx; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005bcd86: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005bcd89: jl 0x5bcdc0 */ if ((fS!=fO)) goto L_005bcdc0;
L_005bcd8b:; BB(0x005bcd8b);
    /* 005bcd8b: lea edx, [ecx + ecx] */ r_edx = (u32)(r_ecx+r_ecx);
    /* 005bcd8e: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005bcd90: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
L_005bcd92:; BB(0x005bcd92);
    /* 005bcd92: fst dword ptr [edx + eax + 0x1fc] */ W_F32((u32)(r_edx+r_eax+0x1fcu), ST(0));
    /* 005bcd99: fst dword ptr [edx + eax + 0x1f8] */ W_F32((u32)(r_edx+r_eax+0x1f8u), ST(0));
    /* 005bcda0: fst dword ptr [edx + eax + 0x1f4] */ W_F32((u32)(r_edx+r_eax+0x1f4u), ST(0));
    /* 005bcda7: fst dword ptr [edx + eax + 0x1f0] */ W_F32((u32)(r_edx+r_eax+0x1f0u), ST(0));
    /* 005bcdae: fst dword ptr [edx + eax + 0x1ec] */ W_F32((u32)(r_edx+r_eax+0x1ecu), ST(0));
    /* 005bcdb5: add edx, -0x14 */ {  u32 a = r_edx; u32 b = 0xffffffecu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005bcdb8: add ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005bcdbb: cmp ecx, 0x7a */ {  u32 a = r_ecx; u32 b = 0x7au; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005bcdbe: jl 0x5bcd92 */ if ((fS!=fO)) goto L_005bcd92;
L_005bcdc0:; BB(0x005bcdc0);
    /* 005bcdc0: lea edx, [ecx + ecx] */ r_edx = (u32)(r_ecx+r_ecx);
    /* 005bcdc3: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005bcdc5: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
L_005bcdc7:; BB(0x005bcdc7);
    /* 005bcdc7: fst dword ptr [edx + eax + 0x1fc] */ W_F32((u32)(r_edx+r_eax+0x1fcu), ST(0));
    /* 005bcdce: add edx, -4 */ {  u32 a = r_edx; u32 b = 0xfffffffcu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005bcdd1: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005bcdd4: cmp ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005bcdda: jl 0x5bcdc7 */ if ((fS!=fO)) goto L_005bcdc7;
L_005bcddc:; BB(0x005bcddc);
    /* 005bcddc: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005bcdde: jmp 0x5bce30 */ goto L_005bce30;
L_005bcde0:; BB(0x005bcde0);
    /* 005bcde0: test cl, 2 */ {  u32 a = (u8)r_ecx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005bcde3: jne 0x5bce10 */ if (!fZ) goto L_005bce10;
L_005bcde5:; BB(0x005bcde5);
    /* 005bcde5: test cl, 4 */ {  u32 a = (u8)r_ecx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005bcde8: je 0x5bce30 */ if (fZ) goto L_005bce30;
L_005bcdea:; BB(0x005bcdea);
    /* 005bcdea: lea ecx, [eax + 0x400] */ r_ecx = (u32)(r_eax+0x400u);
L_005bcdf0:; BB(0x005bcdf0);
    /* 005bcdf0: mov ebp, dword ptr [edx + 0x20] */ r_ebp = R32((u32)(r_edx+0x20u));
    /* 005bcdf3: mov dword ptr [eax], ebp */ W32((u32)(r_eax), r_ebp);
    /* 005bcdf5: mov esi, dword ptr [edx + 0x20] */ r_esi = R32((u32)(r_edx+0x20u));
    /* 005bcdf8: mov dword ptr [eax + 4], esi */ W32((u32)(r_eax+0x4u), r_esi);
    /* 005bcdfb: mov edi, dword ptr [edx + 0x20] */ r_edi = R32((u32)(r_edx+0x20u));
    /* 005bcdfe: mov dword ptr [eax + 8], edi */ W32((u32)(r_eax+0x8u), r_edi);
    /* 005bce01: mov ebp, dword ptr [edx + 0x20] */ r_ebp = R32((u32)(r_edx+0x20u));
    /* 005bce04: mov dword ptr [eax + 0xc], ebp */ W32((u32)(r_eax+0xcu), r_ebp);
    /* 005bce07: add eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005bce0a: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005bce0c: ja 0x5bcdf0 */ if ((!fC&&!fZ)) goto L_005bcdf0;
L_005bce0e:; BB(0x005bce0e);
    /* 005bce0e: jmp 0x5bce30 */ goto L_005bce30;
L_005bce10:; BB(0x005bce10);
    /* 005bce10: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 005bce12: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 005bce14: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 005bce16: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005bce18: lea edx, [eax + 0x400] */ r_edx = (u32)(r_eax+0x400u);
L_005bce1e:; BB(0x005bce1e);
    /* 005bce1e: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 005bce20: mov dword ptr [eax + 4], ebp */ W32((u32)(r_eax+0x4u), r_ebp);
    /* 005bce23: mov dword ptr [eax + 8], esi */ W32((u32)(r_eax+0x8u), r_esi);
    /* 005bce26: mov dword ptr [eax + 0xc], edi */ W32((u32)(r_eax+0xcu), r_edi);
    /* 005bce29: add eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005bce2c: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005bce2e: ja 0x5bce1e */ if ((!fC&&!fZ)) goto L_005bce1e;
L_005bce30:; BB(0x005bce30);
    /* 005bce30: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005bce33: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bce34: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005bce35: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005bce36: ret  */ FN_RET(0x005bcc88); r_esp += 4; return;
L_005bce37:; BB(0x005bce37);
    /* 005bce37: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005bce39: jmp 0x5bcd70 */ goto L_005bcd70;
L_005bce3e:; BB(0x005bce3e);
    /* 005bce3e: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 005bce40: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005bce42: jmp 0x5bcd58 */ goto L_005bcd58;
L_005bce47:; BB(0x005bce47);
    /* 005bce47: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005bce49: jmp 0x5bce30 */ goto L_005bce30;
}

void f_005bce4c(void) /* sub_5BCE4C */
{
    FN_ENTER(0x005bce4c);
    /* 005bce4c: mov ecx, dword ptr [0xa8d774] */ r_ecx = R32((u32)(0xa8d774u));
    /* 005bce52: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bce54: je 0x5bce60 */ if (fZ) goto L_005bce60;
L_005bce56:; BB(0x005bce56);
    /* 005bce56: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005bce5a: call 0x5bce64 */ r_esp -= 4; W32(r_esp, 0x5bce5fu); f_005bce64();
    /* 005bce5f: ret  */ FN_RET(0x005bce4c); r_esp += 4; return;
L_005bce60:; BB(0x005bce60);
    /* 005bce60: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005bce62: ret  */ FN_RET(0x005bce4c); r_esp += 4; return;
}

void f_005bce64(void) /* sub_5BCE64 */
{
    FN_ENTER(0x005bce64);
    /* 005bce64: mov eax, dword ptr [ecx + 0x1c0] */ r_eax = R32((u32)(r_ecx+0x1c0u));
    /* 005bce6a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bce6c: jne 0x5bceb2 */ if (!fZ) goto L_005bceb2;
L_005bce6e:; BB(0x005bce6e);
    /* 005bce6e: mov eax, dword ptr [ecx + 0x184] */ r_eax = R32((u32)(r_ecx+0x184u));
    /* 005bce74: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005bce76: je 0x5bcec1 */ if (fZ) goto L_005bcec1;
L_005bce78:; BB(0x005bce78);
    /* 005bce78: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bce7b: je 0x5bceb7 */ if (fZ) goto L_005bceb7;
L_005bce7d:; BB(0x005bce7d);
    /* 005bce7d: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 005bce81: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005bce84: je 0x5bce8f */ if (fZ) goto L_005bce8f;
L_005bce86:; BB(0x005bce86);
    /* 005bce86: mov dword ptr [ecx + 0x20], 1 */ W32((u32)(r_ecx+0x20u), 0x1u);
    /* 005bce8d: jmp 0x5bce96 */ goto L_005bce96;
L_005bce8f:; BB(0x005bce8f);
    /* 005bce8f: mov dword ptr [ecx + 0x20], 2 */ W32((u32)(r_ecx+0x20u), 0x2u);
L_005bce96:; BB(0x005bce96);
    /* 005bce96: mov dword ptr [ecx + 0x19c], eax */ W32((u32)(r_ecx+0x19cu), r_eax);
    /* 005bce9c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005bce9e: mov dword ptr [ecx + 0x1a0], edx */ W32((u32)(r_ecx+0x1a0u), r_edx);
    /* 005bcea4: mov dword ptr [ecx + 0x1a4], edx */ W32((u32)(r_ecx+0x1a4u), r_edx);
    /* 005bceaa: mov eax, 1 */ r_eax = 0x1u;
    /* 005bceaf: ret 4 */ FN_RET(0x005bce64); r_esp += 8; return;
L_005bceb2:; BB(0x005bceb2);
    /* 005bceb2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005bceb4: ret 4 */ FN_RET(0x005bce64); r_esp += 8; return;
L_005bceb7:; BB(0x005bceb7);
    /* 005bceb7: mov edx, dword ptr [ecx + 0x1b4] */ r_edx = R32((u32)(r_ecx+0x1b4u));
    /* 005bcebd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005bcebf: jne 0x5bce7d */ if (!fZ) goto L_005bce7d;
L_005bcec1:; BB(0x005bcec1);
    /* 005bcec1: mov eax, 1 */ r_eax = 0x1u;
    /* 005bcec6: ret 4 */ FN_RET(0x005bce64); r_esp += 8; return;
}

void f_005bcecc(void) /* sub_5BCECC */
{
    FN_ENTER(0x005bcecc);
    /* 005bcecc: mov ecx, dword ptr [0xa8d774] */ r_ecx = R32((u32)(0xa8d774u));
    /* 005bced2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bced4: je 0x5bcee0 */ if (fZ) goto L_005bcee0;
L_005bced6:; BB(0x005bced6);
    /* 005bced6: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005bceda: call 0x5bce64 */ r_esp -= 4; W32(r_esp, 0x5bcedfu); f_005bce64();
    /* 005bcedf: ret  */ FN_RET(0x005bcecc); r_esp += 4; return;
L_005bcee0:; BB(0x005bcee0);
    /* 005bcee0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005bcee2: ret  */ FN_RET(0x005bcecc); r_esp += 4; return;
}

void f_005bcee4(void) /* sub_5BCEE4 */
{
    FN_ENTER(0x005bcee4);
    /* 005bcee4: mov ecx, dword ptr [0xa8d774] */ r_ecx = R32((u32)(0xa8d774u));
    /* 005bceea: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bceec: je 0x5bcefc */ if (fZ) goto L_005bcefc;
L_005bceee:; BB(0x005bceee);
    /* 005bceee: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005bcef2: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005bcef6: call 0x5bcf00 */ r_esp -= 4; W32(r_esp, 0x5bcefbu); f_005bcf00();
    /* 005bcefb: ret  */ FN_RET(0x005bcee4); r_esp += 4; return;
L_005bcefc:; BB(0x005bcefc);
    /* 005bcefc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005bcefe: ret  */ FN_RET(0x005bcee4); r_esp += 4; return;
}

void f_005bcf00(void) /* sub_5BCF00 */
{
    FN_ENTER(0x005bcf00);
    /* 005bcf00: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005bcf01: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005bcf02: mov esi, ecx */ r_esi = r_ecx;
    /* 005bcf04: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 005bcf08: mov edx, dword ptr [esi + 0x1c0] */ r_edx = R32((u32)(r_esi+0x1c0u));
    /* 005bcf0e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bcf10: jne 0x5bd009 */ if (!fZ) goto L_005bd009;
L_005bcf16:; BB(0x005bcf16);
    /* 005bcf16: mov edx, dword ptr [esi + 0x184] */ r_edx = R32((u32)(r_esi+0x184u));
    /* 005bcf1c: mov edi, dword ptr [esi + edx*4 + 0x174] */ r_edi = R32((u32)(r_esi+r_edx*4+0x174u));
    /* 005bcf23: cmp eax, dword ptr [edi + 0x40] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edi+0x40u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005bcf26: jne 0x5bcf32 */ if (!fZ) goto L_005bcf32;
L_005bcf28:; BB(0x005bcf28);
    /* 005bcf28: mov eax, 1 */ r_eax = 0x1u;
    /* 005bcf2d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005bcf2e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005bcf2f: ret 8 */ FN_RET(0x005bcf00); r_esp += 12; return;
L_005bcf32:; BB(0x005bcf32);
    /* 005bcf32: mov ecx, dword ptr [esi + 0x17c] */ r_ecx = R32((u32)(r_esi+0x17cu));
    /* 005bcf38: mov dword ptr [ecx + 0x40], eax */ W32((u32)(r_ecx+0x40u), r_eax);
    /* 005bcf3b: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 005bcf3e: mov eax, dword ptr [0xa8d770] */ r_eax = R32((u32)(0xa8d770u));
    /* 005bcf43: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005bcf45: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005bcf47: mov edi, dword ptr [eax + edx*8] */ r_edi = R32((u32)(r_eax+r_edx*8));
    /* 005bcf4a: mov dword ptr [ecx], edi */ W32((u32)(r_ecx), r_edi);
    /* 005bcf4c: mov edi, dword ptr [eax + edx*8 + 4] */ r_edi = R32((u32)(r_eax+r_edx*8+0x4u));
    /* 005bcf50: mov dword ptr [ecx + 4], edi */ W32((u32)(r_ecx+0x4u), r_edi);
    /* 005bcf53: mov edi, dword ptr [eax + edx*8 + 8] */ r_edi = R32((u32)(r_eax+r_edx*8+0x8u));
    /* 005bcf57: mov dword ptr [ecx + 8], edi */ W32((u32)(r_ecx+0x8u), r_edi);
    /* 005bcf5a: mov edi, dword ptr [eax + edx*8 + 0xc] */ r_edi = R32((u32)(r_eax+r_edx*8+0xcu));
    /* 005bcf5e: mov dword ptr [ecx + 0xc], edi */ W32((u32)(r_ecx+0xcu), r_edi);
    /* 005bcf61: mov edi, dword ptr [eax + edx*8 + 0x10] */ r_edi = R32((u32)(r_eax+r_edx*8+0x10u));
    /* 005bcf65: mov dword ptr [ecx + 0x10], edi */ W32((u32)(r_ecx+0x10u), r_edi);
    /* 005bcf68: mov edi, dword ptr [eax + edx*8 + 0x14] */ r_edi = R32((u32)(r_eax+r_edx*8+0x14u));
    /* 005bcf6c: mov dword ptr [ecx + 0x14], edi */ W32((u32)(r_ecx+0x14u), r_edi);
    /* 005bcf6f: mov edi, dword ptr [eax + edx*8 + 0x18] */ r_edi = R32((u32)(r_eax+r_edx*8+0x18u));
    /* 005bcf73: mov dword ptr [ecx + 0x18], edi */ W32((u32)(r_ecx+0x18u), r_edi);
    /* 005bcf76: mov edi, dword ptr [eax + edx*8 + 0x1c] */ r_edi = R32((u32)(r_eax+r_edx*8+0x1cu));
    /* 005bcf7a: mov dword ptr [ecx + 0x1c], edi */ W32((u32)(r_ecx+0x1cu), r_edi);
    /* 005bcf7d: mov edi, dword ptr [eax + edx*8 + 0x20] */ r_edi = R32((u32)(r_eax+r_edx*8+0x20u));
    /* 005bcf81: mov dword ptr [ecx + 0x20], edi */ W32((u32)(r_ecx+0x20u), r_edi);
    /* 005bcf84: mov edi, dword ptr [eax + edx*8 + 0x24] */ r_edi = R32((u32)(r_eax+r_edx*8+0x24u));
    /* 005bcf88: mov dword ptr [ecx + 0x24], edi */ W32((u32)(r_ecx+0x24u), r_edi);
    /* 005bcf8b: mov edi, dword ptr [eax + edx*8 + 0x28] */ r_edi = R32((u32)(r_eax+r_edx*8+0x28u));
    /* 005bcf8f: mov dword ptr [ecx + 0x28], edi */ W32((u32)(r_ecx+0x28u), r_edi);
    /* 005bcf92: mov edi, dword ptr [eax + edx*8 + 0x2c] */ r_edi = R32((u32)(r_eax+r_edx*8+0x2cu));
    /* 005bcf96: mov dword ptr [ecx + 0x2c], edi */ W32((u32)(r_ecx+0x2cu), r_edi);
    /* 005bcf99: mov edi, dword ptr [eax + edx*8 + 0x30] */ r_edi = R32((u32)(r_eax+r_edx*8+0x30u));
    /* 005bcf9d: mov dword ptr [ecx + 0x30], edi */ W32((u32)(r_ecx+0x30u), r_edi);
    /* 005bcfa0: mov edi, dword ptr [eax + edx*8 + 0x34] */ r_edi = R32((u32)(r_eax+r_edx*8+0x34u));
    /* 005bcfa4: mov dword ptr [ecx + 0x34], edi */ W32((u32)(r_ecx+0x34u), r_edi);
    /* 005bcfa7: mov edi, dword ptr [eax + edx*8 + 0x38] */ r_edi = R32((u32)(r_eax+r_edx*8+0x38u));
    /* 005bcfab: mov dword ptr [ecx + 0x38], edi */ W32((u32)(r_ecx+0x38u), r_edi);
    /* 005bcfae: mov eax, dword ptr [eax + edx*8 + 0x3c] */ r_eax = R32((u32)(r_eax+r_edx*8+0x3cu));
    /* 005bcfb2: mov dword ptr [ecx + 0x44], 0 */ W32((u32)(r_ecx+0x44u), 0x0u);
    /* 005bcfb9: mov dword ptr [ecx + 0x3c], eax */ W32((u32)(r_ecx+0x3cu), r_eax);
    /* 005bcfbc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005bcfbe: mov dword ptr [ecx + 0x48], eax */ W32((u32)(r_ecx+0x48u), r_eax);
    /* 005bcfc1: mov dword ptr [ecx + 0x4c], eax */ W32((u32)(r_ecx+0x4cu), r_eax);
    /* 005bcfc4: mov dword ptr [ecx + 0x50], eax */ W32((u32)(r_ecx+0x50u), r_eax);
    /* 005bcfc7: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 005bcfcb: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005bcfcd: je 0x5bcfd8 */ if (fZ) goto L_005bcfd8;
L_005bcfcf:; BB(0x005bcfcf);
    /* 005bcfcf: mov dword ptr [esi + 0x20], 1 */ W32((u32)(r_esi+0x20u), 0x1u);
    /* 005bcfd6: jmp 0x5bcfdf */ goto L_005bcfdf;
L_005bcfd8:; BB(0x005bcfd8);
    /* 005bcfd8: mov dword ptr [esi + 0x20], 2 */ W32((u32)(r_esi+0x20u), 0x2u);
L_005bcfdf:; BB(0x005bcfdf);
    /* 005bcfdf: mov edx, dword ptr [esi + 0x184] */ r_edx = R32((u32)(r_esi+0x184u));
    /* 005bcfe5: mov dword ptr [esi + 0x1a0], 2 */ W32((u32)(r_esi+0x1a0u), 0x2u);
    /* 005bcfef: mov dword ptr [esi + 0x19c], edx */ W32((u32)(r_esi+0x19cu), r_edx);
    /* 005bcff5: mov eax, 1 */ r_eax = 0x1u;
    /* 005bcffa: mov dword ptr [esi + 0x1a4], 1 */ W32((u32)(r_esi+0x1a4u), 0x1u);
    /* 005bd004: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005bd005: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005bd006: ret 8 */ FN_RET(0x005bcf00); r_esp += 12; return;
L_005bd009:; BB(0x005bd009);
    /* 005bd009: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005bd00b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005bd00c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005bd00d: ret 8 */ FN_RET(0x005bcf00); r_esp += 12; return;
}

