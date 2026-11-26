#include "protos.h"

void f_0086e078(void) /* sub_86E078 */
{
    FN_ENTER(0x0086e078);
    /* 0086e078: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0086e07c: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0086e080: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0086e082: je 0x86e099 */ if (fZ) goto L_0086e099;
L_0086e084:; BB(0x0086e084);
    /* 0086e084: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 0086e086: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0086e088: je 0x86e099 */ if (fZ) goto L_0086e099;
L_0086e08a:; BB(0x0086e08a);
    /* 0086e08a: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0086e08d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0086e08f: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0086e091: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0086e093: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0086e094: call 0x86eb44 */ r_esp -= 4; W32(r_esp, 0x86e099u); f_0086eb44();
L_0086e099:; BB(0x0086e099);
    /* 0086e099: ret 8 */ FN_RET(0x0086e078); r_esp += 12; return;
}

void f_0086e09c(void) /* sub_86E09C */
{
    FN_ENTER(0x0086e09c);
    /* 0086e09c: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0086e0a0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0086e0a2: je 0x86e0bb */ if (fZ) goto L_0086e0bb;
L_0086e0a4:; BB(0x0086e0a4);
    /* 0086e0a4: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0086e0a6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0086e0a8: je 0x86e0bb */ if (fZ) goto L_0086e0bb;
L_0086e0aa:; BB(0x0086e0aa);
    /* 0086e0aa: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0086e0ae: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086e0b1: je 0x86e0be */ if (fZ) goto L_0086e0be;
L_0086e0b3:; BB(0x0086e0b3);
    /* 0086e0b3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0086e0b5:; BB(0x0086e0b5);
    /* 0086e0b5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086e0b6: call 0x86ed04 */ r_esp -= 4; W32(r_esp, 0x86e0bbu); f_0086ed04();
L_0086e0bb:; BB(0x0086e0bb);
    /* 0086e0bb: ret 8 */ FN_RET(0x0086e09c); r_esp += 12; return;
L_0086e0be:; BB(0x0086e0be);
    /* 0086e0be: mov eax, 1 */ r_eax = 0x1u;
    /* 0086e0c3: jmp 0x86e0b5 */ goto L_0086e0b5;
}

void f_0086e0c8(void) /* sub_86E0C8 */
{
    FN_ENTER(0x0086e0c8);
    /* 0086e0c8: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0086e0cc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0086e0ce: je 0x86e0db */ if (fZ) goto L_0086e0db;
L_0086e0d0:; BB(0x0086e0d0);
    /* 0086e0d0: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0086e0d2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0086e0d4: je 0x86e0db */ if (fZ) goto L_0086e0db;
L_0086e0d6:; BB(0x0086e0d6);
    /* 0086e0d6: call 0x86ebe4 */ r_esp -= 4; W32(r_esp, 0x86e0dbu); f_0086ebe4();
L_0086e0db:; BB(0x0086e0db);
    /* 0086e0db: ret 4 */ FN_RET(0x0086e0c8); r_esp += 8; return;
}

void f_0086e0e0(void) /* sub_86E0E0 */
{
    FN_ENTER(0x0086e0e0);
    /* 0086e0e0: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0086e0e4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0086e0e6: je 0x86e0f3 */ if (fZ) goto L_0086e0f3;
L_0086e0e8:; BB(0x0086e0e8);
    /* 0086e0e8: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0086e0ea: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0086e0ec: je 0x86e0f3 */ if (fZ) goto L_0086e0f3;
L_0086e0ee:; BB(0x0086e0ee);
    /* 0086e0ee: call 0x86ecb4 */ r_esp -= 4; W32(r_esp, 0x86e0f3u); f_0086ecb4();
L_0086e0f3:; BB(0x0086e0f3);
    /* 0086e0f3: ret 4 */ FN_RET(0x0086e0e0); r_esp += 8; return;
}

void f_0086e0f8(void) /* sub_86E0F8 */
{
    FN_ENTER(0x0086e0f8);
    /* 0086e0f8: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0086e0fc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086e0fe: je 0x86e10e */ if (fZ) goto L_0086e10e;
L_0086e100:; BB(0x0086e100);
    /* 0086e100: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0086e102: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086e104: je 0x86e10e */ if (fZ) goto L_0086e10e;
L_0086e106:; BB(0x0086e106);
    /* 0086e106: call 0x86ea9c */ r_esp -= 4; W32(r_esp, 0x86e10bu); f_0086ea9c();
    /* 0086e10b: ret 4 */ FN_RET(0x0086e0f8); r_esp += 8; return;
L_0086e10e:; BB(0x0086e10e);
    /* 0086e10e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0086e110: ret 4 */ FN_RET(0x0086e0f8); r_esp += 8; return;
}

void f_0086e114(void) /* sub_86E114 */
{
    FN_ENTER(0x0086e114);
    /* 0086e114: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0086e118: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0086e11a: je 0x86e12b */ if (fZ) goto L_0086e12b;
L_0086e11c:; BB(0x0086e11c);
    /* 0086e11c: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0086e11e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0086e120: je 0x86e12b */ if (fZ) goto L_0086e12b;
L_0086e122:; BB(0x0086e122);
    /* 0086e122: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086e126: call 0x86eb80 */ r_esp -= 4; W32(r_esp, 0x86e12bu); f_0086eb80();
L_0086e12b:; BB(0x0086e12b);
    /* 0086e12b: ret 8 */ FN_RET(0x0086e114); r_esp += 12; return;
}

void f_0086e130(void) /* sub_86E130 */
{
    FN_ENTER(0x0086e130);
    /* 0086e130: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0086e134: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0086e136: je 0x86e143 */ if (fZ) goto L_0086e143;
L_0086e138:; BB(0x0086e138);
    /* 0086e138: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0086e13a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0086e13c: je 0x86e143 */ if (fZ) goto L_0086e143;
L_0086e13e:; BB(0x0086e13e);
    /* 0086e13e: call 0x86fb08 */ r_esp -= 4; W32(r_esp, 0x86e143u); f_0086fb08();
L_0086e143:; BB(0x0086e143);
    /* 0086e143: ret 4 */ FN_RET(0x0086e130); r_esp += 8; return;
}

void f_0086e148(void) /* sub_86E148 */
{
    FN_ENTER(0x0086e148);
L_0086e148:; BB(0x0086e148);
    /* 0086e148: test dword ptr [0xae7f00], 0xffffff80 */ {  u32 a = R32((u32)(0xae7f00u)); u32 b = 0xffffff80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086e152: jne 0x86e170 */ if (!fZ) goto L_0086e170;
L_0086e158:; BB(0x0086e158);
    /* 0086e158: test dword ptr [0xae7f00], 0xffffffff */ {  u32 a = R32((u32)(0xae7f00u)); u32 b = 0xffffffffu; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086e162: jne 0x86e1dc */ if (!fZ) goto L_0086e1dc;
L_0086e168:; BB(0x0086e168);
    /* 0086e168: call 0x86b8a0 */ r_esp -= 4; W32(r_esp, 0x86e16du); f_0086b8a0();
    /* 0086e16d: jmp 0x86e148 */ goto L_0086e148;
L_0086e170:; BB(0x0086e170);
    /* 0086e170: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0086e171: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
    /* 0086e175: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0086e177: jne 0x86e17d */ if (!fZ) goto L_0086e17d;
L_0086e179:; BB(0x0086e179);
    /* 0086e179: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0086e17a: ret 4 */ FN_RET(0x0086e148); r_esp += 8; return;
L_0086e17d:; BB(0x0086e17d);
    /* 0086e17d: call 0x86fa5c */ r_esp -= 4; W32(r_esp, 0x86e182u); f_0086fa5c();
    /* 0086e182: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0086e185: cmp dword ptr [ebp + 4], 0 */ {  u32 a = R32((u32)(r_ebp+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086e189: mov dword ptr [0xae96c8], eax */ W32((u32)(0xae96c8u), r_eax);
    /* 0086e18e: je 0x86e199 */ if (fZ) goto L_0086e199;
L_0086e190:; BB(0x0086e190);
    /* 0086e190: mov byte ptr [0xae96c4], 1 */ W8((u32)(0xae96c4u), 0x1u);
    /* 0086e197: jmp 0x86e1a0 */ goto L_0086e1a0;
L_0086e199:; BB(0x0086e199);
    /* 0086e199: mov byte ptr [0xae96c4], 0 */ W8((u32)(0xae96c4u), 0x0u);
L_0086e1a0:; BB(0x0086e1a0);
    /* 0086e1a0: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0086e1a4: je 0x86e1af */ if (fZ) goto L_0086e1af;
L_0086e1a6:; BB(0x0086e1a6);
    /* 0086e1a6: mov byte ptr [0xae96c0], 1 */ W8((u32)(0xae96c0u), 0x1u);
    /* 0086e1ad: jmp 0x86e1b6 */ goto L_0086e1b6;
L_0086e1af:; BB(0x0086e1af);
    /* 0086e1af: mov byte ptr [0xae96c0], 0 */ W8((u32)(0xae96c0u), 0x0u);
L_0086e1b6:; BB(0x0086e1b6);
    /* 0086e1b6: pxor mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.q = a.q ^ b.q; fpr[0] = (long double)(i64)(r.q); }
    /* 0086e1b9: movq qword ptr [0xae96a0], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(0xae96a0u), r.q); }
    /* 0086e1c0: movq qword ptr [0xae96a8], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(0xae96a8u), r.q); }
    /* 0086e1c7: movq qword ptr [0xae96b0], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(0xae96b0u), r.q); }
    /* 0086e1ce: movq qword ptr [0xae96b8], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(0xae96b8u), r.q); }
    /* 0086e1d5: emms  */ ; /* the MMX tag state is not modelled */
    /* 0086e1d7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0086e1d8: ret 4 */ FN_RET(0x0086e148); r_esp += 8; return;
L_0086e1dc:; BB(0x0086e1dc);
    /* 0086e1dc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0086e1dd: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 0086e1e1: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0086e1e3: jne 0x86e1e9 */ if (!fZ) goto L_0086e1e9;
L_0086e1e5:; BB(0x0086e1e5);
    /* 0086e1e5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0086e1e6: ret 4 */ FN_RET(0x0086e148); r_esp += 8; return;
L_0086e1e9:; BB(0x0086e1e9);
    /* 0086e1e9: call 0x86fa5c */ r_esp -= 4; W32(r_esp, 0x86e1eeu); f_0086fa5c();
    /* 0086e1ee: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0086e1f0: mov dword ptr [0xae96c8], eax */ W32((u32)(0xae96c8u), r_eax);
    /* 0086e1f5: cmp dword ptr [edi + 4], 0 */ {  u32 a = R32((u32)(r_edi+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086e1f9: je 0x86e202 */ if (fZ) goto L_0086e202;
L_0086e1fb:; BB(0x0086e1fb);
    /* 0086e1fb: mov eax, 1 */ r_eax = 0x1u;
    /* 0086e200: jmp 0x86e204 */ goto L_0086e204;
L_0086e202:; BB(0x0086e202);
    /* 0086e202: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0086e204:; BB(0x0086e204);
    /* 0086e204: mov byte ptr [0xae96c4], al */ W8((u32)(0xae96c4u), (u8)r_eax);
    /* 0086e209: cmp dword ptr [edi + 8], 0 */ {  u32 a = R32((u32)(r_edi+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086e20d: je 0x86e216 */ if (fZ) goto L_0086e216;
L_0086e20f:; BB(0x0086e20f);
    /* 0086e20f: mov eax, 1 */ r_eax = 0x1u;
    /* 0086e214: jmp 0x86e218 */ goto L_0086e218;
L_0086e216:; BB(0x0086e216);
    /* 0086e216: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0086e218:; BB(0x0086e218);
    /* 0086e218: mov byte ptr [0xae96c0], al */ W8((u32)(0xae96c0u), (u8)r_eax);
    /* 0086e21d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0086e21f: mov dword ptr [0xae96a0], eax */ W32((u32)(0xae96a0u), r_eax);
    /* 0086e224: mov dword ptr [0xae96a4], eax */ W32((u32)(0xae96a4u), r_eax);
    /* 0086e229: mov dword ptr [0xae96a8], eax */ W32((u32)(0xae96a8u), r_eax);
    /* 0086e22e: mov dword ptr [0xae96ac], eax */ W32((u32)(0xae96acu), r_eax);
    /* 0086e233: mov dword ptr [0xae96b0], eax */ W32((u32)(0xae96b0u), r_eax);
    /* 0086e238: mov dword ptr [0xae96b4], eax */ W32((u32)(0xae96b4u), r_eax);
    /* 0086e23d: mov dword ptr [0xae96b8], eax */ W32((u32)(0xae96b8u), r_eax);
    /* 0086e242: mov dword ptr [0xae96bc], eax */ W32((u32)(0xae96bcu), r_eax);
    /* 0086e247: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0086e248: ret 4 */ FN_RET(0x0086e148); r_esp += 8; return;
}

void f_0086e24c(void)
{
    FN_ENTER(0x0086e24c);
    /* 0086e24c: mov dword ptr [ecx], 0xb488a8 */ W32((u32)(r_ecx), 0xb488a8u);
    /* 0086e252: test dword ptr [esp + 4], 1 */ {  u32 a = R32((u32)(r_esp+0x4u)); u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0086e25a: jne 0x86e25f */ if (!fZ) goto L_0086e25f;
L_0086e25c:; BB(0x0086e25c);
    /* 0086e25c: ret 4 */ FN_RET(0x0086e24c); r_esp += 8; return;
L_0086e25f:; BB(0x0086e25f);
    /* 0086e25f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0086e260: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x86e265u); f_00857e98();
    /* 0086e265: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0086e266: ret 4 */ FN_RET(0x0086e24c); r_esp += 8; return;
}

void f_0086e26c(void) /* sub_86E26C */
{
    FN_ENTER(0x0086e26c);
L_0086e26c:; BB(0x0086e26c);
    /* 0086e26c: test dword ptr [0xae7f00], 0xffffff80 */ {  u32 a = R32((u32)(0xae7f00u)); u32 b = 0xffffff80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086e276: jne 0x86e294 */ if (!fZ) goto L_0086e294;
L_0086e27c:; BB(0x0086e27c);
    /* 0086e27c: test dword ptr [0xae7f00], 0xffffffff */ {  u32 a = R32((u32)(0xae7f00u)); u32 b = 0xffffffffu; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086e286: jne 0x86e554 */ if (!fZ) goto L_0086e554;
L_0086e28c:; BB(0x0086e28c);
    /* 0086e28c: call 0x86b8a0 */ r_esp -= 4; W32(r_esp, 0x86e291u); f_0086b8a0();
    /* 0086e291: jmp 0x86e26c */ goto L_0086e26c;
L_0086e294:; BB(0x0086e294);
    /* 0086e294: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0086e295: mov ebp, esp */ r_ebp = r_esp;
    /* 0086e297: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0086e299: push 0x8f7a98 */ { u32 v = 0x8f7a98u; r_esp -= 4; W32(r_esp, v); }
    /* 0086e29e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0086e2a4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086e2a5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0086e2ac: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0086e2af: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0086e2b2: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0086e2b5: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0086e2b8: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0086e2bb: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0086e2be: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0086e2c1: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0086e2c4: call 0x86fb30 */ r_esp -= 4; W32(r_esp, 0x86e2c9u); f_0086fb30();
    /* 0086e2c9: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0086e2cc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0086e2ce: mov dword ptr [edx + 0x6f0], eax */ W32((u32)(r_edx+0x6f0u), r_eax);
    /* 0086e2d4: mov dword ptr [edx + 0x6f4], eax */ W32((u32)(r_edx+0x6f4u), r_eax);
    /* 0086e2da: mov dword ptr [edx + 0x6f8], eax */ W32((u32)(r_edx+0x6f8u), r_eax);
    /* 0086e2e0: mov dword ptr [edx + 0x6fc], eax */ W32((u32)(r_edx+0x6fcu), r_eax);
    /* 0086e2e6: mov byte ptr [edx + 0x700], al */ W8((u32)(r_edx+0x700u), (u8)r_eax);
    /* 0086e2ec: mov dword ptr [edx + 0x704], 0xb488a8 */ W32((u32)(r_edx+0x704u), 0xb488a8u);
    /* 0086e2f6: mov dword ptr [edx + 0xb08], eax */ W32((u32)(r_edx+0xb08u), r_eax);
    /* 0086e2fc: mov dword ptr [edx + 0xb0c], eax */ W32((u32)(r_edx+0xb0cu), r_eax);
    /* 0086e302: mov dword ptr [edx + 0xb10], eax */ W32((u32)(r_edx+0xb10u), r_eax);
    /* 0086e308: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0086e30f: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0086e312: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0086e314: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0086e317: mov dword ptr [eax + 0xb14], ecx */ W32((u32)(r_eax+0xb14u), r_ecx);
    /* 0086e31d: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0086e31f: mov dword ptr [eax + 0xb18], ecx */ W32((u32)(r_eax+0xb18u), r_ecx);
    /* 0086e325: mov dword ptr [eax + 0xb1c], ecx */ W32((u32)(r_eax+0xb1cu), r_ecx);
    /* 0086e32b: mov dword ptr [eax + 0xb20], ecx */ W32((u32)(r_eax+0xb20u), r_ecx);
    /* 0086e331: mov dword ptr [eax + 0xb24], ecx */ W32((u32)(r_eax+0xb24u), r_ecx);
    /* 0086e337: mov dword ptr [eax + 0xb28], ecx */ W32((u32)(r_eax+0xb28u), r_ecx);
    /* 0086e33d: mov dword ptr [eax + 0xb2c], 0xffffd8f1 */ W32((u32)(r_eax+0xb2cu), 0xffffd8f1u);
    /* 0086e347: mov byte ptr [eax + 0xb42], 1 */ W8((u32)(r_eax+0xb42u), 0x1u);
    /* 0086e34e: mov dword ptr [eax + 0xb44], edx */ W32((u32)(r_eax+0xb44u), r_edx);
    /* 0086e354: mov dword ptr [eax + 0xb48], ecx */ W32((u32)(r_eax+0xb48u), r_ecx);
    /* 0086e35a: lea edx, [eax + 0xb6c] */ r_edx = (u32)(r_eax+0xb6cu);
    /* 0086e360: and edx, 7 */ {  u32 a = r_edx; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 0086e363: mov dword ptr [eax + 0xb4c], ecx */ W32((u32)(r_eax+0xb4cu), r_ecx);
    /* 0086e369: mov dword ptr [eax + 0xb50], ecx */ W32((u32)(r_eax+0xb50u), r_ecx);
    /* 0086e36f: mov ecx, 9 */ r_ecx = 0x9u;
    /* 0086e374: je 0x86e38f */ if (fZ) goto L_0086e38f;
L_0086e376:; BB(0x0086e376);
    /* 0086e376: test dl, 3 */ {  u32 a = (u8)r_edx; u32 b = 0x3u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0086e379: jne 0x86e3b7 */ if (!fZ) goto L_0086e3b7;
L_0086e37b:; BB(0x0086e37b);
    /* 0086e37b: mov ecx, 8 */ r_ecx = 0x8u;
    /* 0086e380: mov ebx, 1 */ r_ebx = 0x1u;
    /* 0086e385: mov dword ptr [eax + 0xb6c], 0 */ W32((u32)(r_eax+0xb6cu), 0x0u);
L_0086e38f:; BB(0x0086e38f);
    /* 0086e38f: and ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0086e392: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0086e394: add ecx, 9 */ {  u32 a = r_ecx; u32 b = 0x9u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0086e397: pxor mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.q = a.q ^ b.q; fpr[0] = (long double)(i64)(r.q); }
L_0086e39a:; BB(0x0086e39a);
    /* 0086e39a: movq qword ptr [eax + ebx*4 + 0xb6c], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_eax+r_ebx*4+0xb6cu), r.q); }
    /* 0086e3a2: add ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0086e3a5: cmp ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0086e3a7: jb 0x86e39a */ if (fC) goto L_0086e39a;
L_0086e3a9:; BB(0x0086e3a9);
    /* 0086e3a9: emms  */ ; /* the MMX tag state is not modelled */
    /* 0086e3ab: cmp ebx, 9 */ {  u32 a = r_ebx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0086e3ae: jae 0x86e54b */ if (!fC) goto L_0086e54b;
L_0086e3b4:; BB(0x0086e3b4);
    /* 0086e3b4: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
L_0086e3b7:; BB(0x0086e3b7);
    /* 0086e3b7: mov dword ptr [eax + ebx*4 + 0xb6c], 0 */ W32((u32)(r_eax+r_ebx*4+0xb6cu), 0x0u);
    /* 0086e3c2: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0086e3c3: cmp ebx, 9 */ {  u32 a = r_ebx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0086e3c6: jb 0x86e3b7 */ if (fC) goto L_0086e3b7;
L_0086e3c8:; BB(0x0086e3c8);
    /* 0086e3c8: mov byte ptr [eax + 0xb90], 1 */ W8((u32)(r_eax+0xb90u), 0x1u);
    /* 0086e3cf: add eax, 0xb30 */ {  u32 a = r_eax; u32 b = 0xb30u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0086e3d4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0086e3d6: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 0086e3d8: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 0086e3db: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 0086e3de: mov dword ptr [eax + 0xc], edx */ W32((u32)(r_eax+0xcu), r_edx);
    /* 0086e3e1: mov word ptr [eax + 0x10], dx */ W16((u32)(r_eax+0x10u), (u16)r_edx);
    /* 0086e3e5: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0086e3e8: add eax, 0xb54 */ {  u32 a = r_eax; u32 b = 0xb54u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0086e3ed: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086e3ee: call dword ptr [0x8f81bc] */ { u32 t = R32((u32)(0x8f81bcu)); r_esp -= 4; W32(r_esp, 0x86e3f4u); call_ind(t); }
    /* 0086e3f4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0086e3f6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086e3f7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086e3f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086e3f9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086e3fa: call dword ptr [0x8f8124] */ { u32 t = R32((u32)(0x8f8124u)); r_esp -= 4; W32(r_esp, 0x86e400u); call_ind(t); }
    /* 0086e400: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0086e403: mov dword ptr [edx + 0xb70], eax */ W32((u32)(r_edx+0xb70u), r_eax);
    /* 0086e409: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0086e40b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086e40c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086e40d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086e40e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086e40f: call dword ptr [0x8f8124] */ { u32 t = R32((u32)(0x8f8124u)); r_esp -= 4; W32(r_esp, 0x86e415u); call_ind(t); }
    /* 0086e415: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0086e418: mov dword ptr [edx + 0xb74], eax */ W32((u32)(r_edx+0xb74u), r_eax);
    /* 0086e41e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0086e420: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086e421: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086e422: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086e423: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086e424: call dword ptr [0x8f8124] */ { u32 t = R32((u32)(0x8f8124u)); r_esp -= 4; W32(r_esp, 0x86e42au); call_ind(t); }
    /* 0086e42a: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0086e42d: mov dword ptr [edx + 0xb78], eax */ W32((u32)(r_edx+0xb78u), r_eax);
    /* 0086e433: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0086e435: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086e436: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086e437: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086e438: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086e439: call dword ptr [0x8f8124] */ { u32 t = R32((u32)(0x8f8124u)); r_esp -= 4; W32(r_esp, 0x86e43fu); call_ind(t); }
    /* 0086e43f: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0086e442: mov dword ptr [edx + 0xb7c], eax */ W32((u32)(r_edx+0xb7cu), r_eax);
    /* 0086e448: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0086e44a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086e44b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086e44c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086e44d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086e44e: call dword ptr [0x8f8124] */ { u32 t = R32((u32)(0x8f8124u)); r_esp -= 4; W32(r_esp, 0x86e454u); call_ind(t); }
    /* 0086e454: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0086e457: mov dword ptr [edx + 0xb80], eax */ W32((u32)(r_edx+0xb80u), r_eax);
    /* 0086e45d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0086e45f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086e460: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086e461: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086e462: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086e463: call dword ptr [0x8f8124] */ { u32 t = R32((u32)(0x8f8124u)); r_esp -= 4; W32(r_esp, 0x86e469u); call_ind(t); }
    /* 0086e469: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0086e46c: cmp dword ptr [edx + 0xb70], 0 */ {  u32 a = R32((u32)(r_edx+0xb70u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0086e473: mov dword ptr [edx + 0xb84], eax */ W32((u32)(r_edx+0xb84u), r_eax);
    /* 0086e479: je 0x86e4a3 */ if (fZ) goto L_0086e4a3;
L_0086e47b:; BB(0x0086e47b);
    /* 0086e47b: cmp dword ptr [edx + 0xb74], 0 */ {  u32 a = R32((u32)(r_edx+0xb74u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0086e482: je 0x86e4a3 */ if (fZ) goto L_0086e4a3;
L_0086e484:; BB(0x0086e484);
    /* 0086e484: cmp dword ptr [edx + 0xb78], 0 */ {  u32 a = R32((u32)(r_edx+0xb78u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0086e48b: je 0x86e4a3 */ if (fZ) goto L_0086e4a3;
L_0086e48d:; BB(0x0086e48d);
    /* 0086e48d: cmp dword ptr [edx + 0xb7c], 0 */ {  u32 a = R32((u32)(r_edx+0xb7cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0086e494: je 0x86e4a3 */ if (fZ) goto L_0086e4a3;
L_0086e496:; BB(0x0086e496);
    /* 0086e496: cmp dword ptr [edx + 0xb80], 0 */ {  u32 a = R32((u32)(r_edx+0xb80u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0086e49d: je 0x86e4a3 */ if (fZ) goto L_0086e4a3;
L_0086e49f:; BB(0x0086e49f);
    /* 0086e49f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0086e4a1: jne 0x86e4be */ if (!fZ) goto L_0086e4be;
L_0086e4a3:; BB(0x0086e4a3);
    /* 0086e4a3: mov eax, edx */ r_eax = r_edx;
    /* 0086e4a5: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0086e4a8: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0086e4ab: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0086e4ae: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0086e4b1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0086e4b8: mov esp, ebp */ r_esp = r_ebp;
    /* 0086e4ba: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0086e4bb: ret 4 */ FN_RET(0x0086e26c); r_esp += 8; return;
L_0086e4be:; BB(0x0086e4be);
    /* 0086e4be: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0086e4c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086e4c1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086e4c2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086e4c3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086e4c4: call dword ptr [0x8f8124] */ { u32 t = R32((u32)(0x8f8124u)); r_esp -= 4; W32(r_esp, 0x86e4cau); call_ind(t); }
    /* 0086e4ca: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0086e4cd: mov dword ptr [edx + 0xb88], eax */ W32((u32)(r_edx+0xb88u), r_eax);
    /* 0086e4d3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0086e4d5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086e4d6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086e4d7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086e4d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086e4d9: call dword ptr [0x8f8124] */ { u32 t = R32((u32)(0x8f8124u)); r_esp -= 4; W32(r_esp, 0x86e4dfu); call_ind(t); }
    /* 0086e4df: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0086e4e2: cmp dword ptr [ecx + 0xb88], 0 */ {  u32 a = R32((u32)(r_ecx+0xb88u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0086e4e9: mov dword ptr [ecx + 0xb8c], eax */ W32((u32)(r_ecx+0xb8cu), r_eax);
    /* 0086e4ef: je 0x86e4f5 */ if (fZ) goto L_0086e4f5;
L_0086e4f1:; BB(0x0086e4f1);
    /* 0086e4f1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0086e4f3: jne 0x86e510 */ if (!fZ) goto L_0086e510;
L_0086e4f5:; BB(0x0086e4f5);
    /* 0086e4f5: mov eax, ecx */ r_eax = r_ecx;
    /* 0086e4f7: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0086e4fa: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0086e4fd: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0086e500: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0086e503: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0086e50a: mov esp, ebp */ r_esp = r_ebp;
    /* 0086e50c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0086e50d: ret 4 */ FN_RET(0x0086e26c); r_esp += 8; return;
L_0086e510:; BB(0x0086e510);
    /* 0086e510: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0086e512: lea edx, [ebp - 0x28] */ r_edx = (u32)(r_ebp+0xffffffd8u);
    /* 0086e515: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0086e516: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0086e517: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0086e518: push 0x86ee78 */ { u32 v = 0x86ee78u; r_esp -= 4; W32(r_esp, v); }
    /* 0086e51d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0086e51e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0086e51f: call 0x85af50 */ r_esp -= 4; W32(r_esp, 0x86e524u); f_0085af50();
    /* 0086e524: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0086e527: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0086e52a: mov dword ptr [edx + 0xb6c], eax */ W32((u32)(r_edx+0xb6cu), r_eax);
    /* 0086e530: mov eax, edx */ r_eax = r_edx;
    /* 0086e532: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0086e535: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0086e538: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0086e53b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0086e53e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0086e545: mov esp, ebp */ r_esp = r_ebp;
    /* 0086e547: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0086e548: ret 4 */ FN_RET(0x0086e26c); r_esp += 8; return;
L_0086e54b:; BB(0x0086e54b);
    /* 0086e54b: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0086e54e: jmp 0x86e3c8 */ goto L_0086e3c8;
L_0086e554:; BB(0x0086e554);
    /* 0086e554: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0086e555: mov ebp, esp */ r_ebp = r_esp;
    /* 0086e557: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0086e559: push 0x8f7ac8 */ { u32 v = 0x8f7ac8u; r_esp -= 4; W32(r_esp, v); }
    /* 0086e55e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0086e564: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086e565: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0086e56c: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0086e56f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0086e572: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0086e575: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0086e578: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0086e57b: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0086e57e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0086e581: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0086e584: call 0x86fb30 */ r_esp -= 4; W32(r_esp, 0x86e589u); f_0086fb30();
    /* 0086e589: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0086e58c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0086e58e: mov dword ptr [edx + 0x6f0], eax */ W32((u32)(r_edx+0x6f0u), r_eax);
    /* 0086e594: mov dword ptr [edx + 0x6f4], eax */ W32((u32)(r_edx+0x6f4u), r_eax);
    /* 0086e59a: mov dword ptr [edx + 0x6f8], eax */ W32((u32)(r_edx+0x6f8u), r_eax);
    /* 0086e5a0: mov dword ptr [edx + 0x6fc], eax */ W32((u32)(r_edx+0x6fcu), r_eax);
    /* 0086e5a6: mov byte ptr [edx + 0x700], al */ W8((u32)(r_edx+0x700u), (u8)r_eax);
    /* 0086e5ac: mov dword ptr [edx + 0x704], 0xb488a8 */ W32((u32)(r_edx+0x704u), 0xb488a8u);
    /* 0086e5b6: mov dword ptr [edx + 0xb08], eax */ W32((u32)(r_edx+0xb08u), r_eax);
    /* 0086e5bc: mov dword ptr [edx + 0xb0c], eax */ W32((u32)(r_edx+0xb0cu), r_eax);
    /* 0086e5c2: mov dword ptr [edx + 0xb10], eax */ W32((u32)(r_edx+0xb10u), r_eax);
    /* 0086e5c8: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0086e5cf: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0086e5d2: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0086e5d4: mov dword ptr [ecx + 0xb14], edi */ W32((u32)(r_ecx+0xb14u), r_edi);
    /* 0086e5da: mov dword ptr [ecx + 0xb18], edi */ W32((u32)(r_ecx+0xb18u), r_edi);
    /* 0086e5e0: mov dword ptr [ecx + 0xb1c], edi */ W32((u32)(r_ecx+0xb1cu), r_edi);
    /* 0086e5e6: mov dword ptr [ecx + 0xb20], edi */ W32((u32)(r_ecx+0xb20u), r_edi);
    /* 0086e5ec: mov dword ptr [ecx + 0xb24], edi */ W32((u32)(r_ecx+0xb24u), r_edi);
    /* 0086e5f2: mov dword ptr [ecx + 0xb28], edi */ W32((u32)(r_ecx+0xb28u), r_edi);
    /* 0086e5f8: mov dword ptr [ecx + 0xb2c], 0xffffd8f1 */ W32((u32)(r_ecx+0xb2cu), 0xffffd8f1u);
    /* 0086e602: mov eax, 1 */ r_eax = 0x1u;
    /* 0086e607: mov byte ptr [ecx + 0xb42], al */ W8((u32)(r_ecx+0xb42u), (u8)r_eax);
    /* 0086e60d: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 0086e610: mov dword ptr [ecx + 0xb44], esi */ W32((u32)(r_ecx+0xb44u), r_esi);
    /* 0086e616: mov dword ptr [ecx + 0xb48], edi */ W32((u32)(r_ecx+0xb48u), r_edi);
    /* 0086e61c: mov dword ptr [ecx + 0xb4c], edi */ W32((u32)(r_ecx+0xb4cu), r_edi);
    /* 0086e622: mov dword ptr [ecx + 0xb50], edi */ W32((u32)(r_ecx+0xb50u), r_edi);
    /* 0086e628: mov dword ptr [ecx + 0xb6c], edi */ W32((u32)(r_ecx+0xb6cu), r_edi);
    /* 0086e62e: mov dword ptr [ecx + 0xb70], edi */ W32((u32)(r_ecx+0xb70u), r_edi);
    /* 0086e634: mov dword ptr [ecx + 0xb74], edi */ W32((u32)(r_ecx+0xb74u), r_edi);
    /* 0086e63a: mov dword ptr [ecx + 0xb78], edi */ W32((u32)(r_ecx+0xb78u), r_edi);
    /* 0086e640: mov dword ptr [ecx + 0xb7c], edi */ W32((u32)(r_ecx+0xb7cu), r_edi);
    /* 0086e646: mov dword ptr [ecx + 0xb80], edi */ W32((u32)(r_ecx+0xb80u), r_edi);
    /* 0086e64c: mov dword ptr [ecx + 0xb84], edi */ W32((u32)(r_ecx+0xb84u), r_edi);
    /* 0086e652: mov dword ptr [ecx + 0xb88], edi */ W32((u32)(r_ecx+0xb88u), r_edi);
    /* 0086e658: mov dword ptr [ecx + 0xb8c], edi */ W32((u32)(r_ecx+0xb8cu), r_edi);
    /* 0086e65e: mov byte ptr [ecx + 0xb90], al */ W8((u32)(r_ecx+0xb90u), (u8)r_eax);
    /* 0086e664: add ecx, 0xb30 */ {  u32 a = r_ecx; u32 b = 0xb30u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0086e66a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0086e66c: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 0086e66e: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 0086e671: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 0086e674: mov dword ptr [ecx + 0xc], edx */ W32((u32)(r_ecx+0xcu), r_edx);
    /* 0086e677: mov word ptr [ecx + 0x10], dx */ W16((u32)(r_ecx+0x10u), (u16)r_edx);
    /* 0086e67b: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0086e67e: add eax, 0xb54 */ {  u32 a = r_eax; u32 b = 0xb54u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0086e683: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086e684: call dword ptr [0x8f81bc] */ { u32 t = R32((u32)(0x8f81bcu)); r_esp -= 4; W32(r_esp, 0x86e68au); call_ind(t); }
    /* 0086e68a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0086e68c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086e68d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086e68e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086e68f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086e690: call dword ptr [0x8f8124] */ { u32 t = R32((u32)(0x8f8124u)); r_esp -= 4; W32(r_esp, 0x86e696u); call_ind(t); }
    /* 0086e696: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0086e699: mov dword ptr [edx + 0xb70], eax */ W32((u32)(r_edx+0xb70u), r_eax);
    /* 0086e69f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0086e6a1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086e6a2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086e6a3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086e6a4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086e6a5: call dword ptr [0x8f8124] */ { u32 t = R32((u32)(0x8f8124u)); r_esp -= 4; W32(r_esp, 0x86e6abu); call_ind(t); }
    /* 0086e6ab: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0086e6ae: mov dword ptr [edx + 0xb74], eax */ W32((u32)(r_edx+0xb74u), r_eax);
    /* 0086e6b4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0086e6b6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086e6b7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086e6b8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086e6b9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086e6ba: call dword ptr [0x8f8124] */ { u32 t = R32((u32)(0x8f8124u)); r_esp -= 4; W32(r_esp, 0x86e6c0u); call_ind(t); }
    /* 0086e6c0: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0086e6c3: mov dword ptr [edx + 0xb78], eax */ W32((u32)(r_edx+0xb78u), r_eax);
    /* 0086e6c9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0086e6cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086e6cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086e6cd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086e6ce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086e6cf: call dword ptr [0x8f8124] */ { u32 t = R32((u32)(0x8f8124u)); r_esp -= 4; W32(r_esp, 0x86e6d5u); call_ind(t); }
    /* 0086e6d5: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0086e6d8: mov dword ptr [edx + 0xb7c], eax */ W32((u32)(r_edx+0xb7cu), r_eax);
    /* 0086e6de: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0086e6e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086e6e1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086e6e2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086e6e3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086e6e4: call dword ptr [0x8f8124] */ { u32 t = R32((u32)(0x8f8124u)); r_esp -= 4; W32(r_esp, 0x86e6eau); call_ind(t); }
    /* 0086e6ea: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0086e6ed: mov dword ptr [edx + 0xb80], eax */ W32((u32)(r_edx+0xb80u), r_eax);
    /* 0086e6f3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0086e6f5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086e6f6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086e6f7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086e6f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086e6f9: call dword ptr [0x8f8124] */ { u32 t = R32((u32)(0x8f8124u)); r_esp -= 4; W32(r_esp, 0x86e6ffu); call_ind(t); }
    /* 0086e6ff: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0086e702: mov dword ptr [edx + 0xb84], eax */ W32((u32)(r_edx+0xb84u), r_eax);
    /* 0086e708: cmp dword ptr [edx + 0xb70], 0 */ {  u32 a = R32((u32)(r_edx+0xb70u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0086e70f: je 0x86e739 */ if (fZ) goto L_0086e739;
L_0086e711:; BB(0x0086e711);
    /* 0086e711: cmp dword ptr [edx + 0xb74], 0 */ {  u32 a = R32((u32)(r_edx+0xb74u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0086e718: je 0x86e739 */ if (fZ) goto L_0086e739;
L_0086e71a:; BB(0x0086e71a);
    /* 0086e71a: cmp dword ptr [edx + 0xb78], 0 */ {  u32 a = R32((u32)(r_edx+0xb78u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0086e721: je 0x86e739 */ if (fZ) goto L_0086e739;
L_0086e723:; BB(0x0086e723);
    /* 0086e723: cmp dword ptr [edx + 0xb7c], 0 */ {  u32 a = R32((u32)(r_edx+0xb7cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0086e72a: je 0x86e739 */ if (fZ) goto L_0086e739;
L_0086e72c:; BB(0x0086e72c);
    /* 0086e72c: cmp dword ptr [edx + 0xb80], 0 */ {  u32 a = R32((u32)(r_edx+0xb80u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0086e733: je 0x86e739 */ if (fZ) goto L_0086e739;
L_0086e735:; BB(0x0086e735);
    /* 0086e735: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0086e737: jne 0x86e751 */ if (!fZ) goto L_0086e751;
L_0086e739:; BB(0x0086e739);
    /* 0086e739: mov eax, edx */ r_eax = r_edx;
    /* 0086e73b: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0086e73e: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0086e741: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0086e744: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0086e74b: mov esp, ebp */ r_esp = r_ebp;
    /* 0086e74d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0086e74e: ret 4 */ FN_RET(0x0086e26c); r_esp += 8; return;
L_0086e751:; BB(0x0086e751);
    /* 0086e751: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0086e753: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086e754: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086e755: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086e756: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086e757: call dword ptr [0x8f8124] */ { u32 t = R32((u32)(0x8f8124u)); r_esp -= 4; W32(r_esp, 0x86e75du); call_ind(t); }
    /* 0086e75d: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0086e760: mov dword ptr [edx + 0xb88], eax */ W32((u32)(r_edx+0xb88u), r_eax);
    /* 0086e766: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0086e768: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086e769: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086e76a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086e76b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086e76c: call dword ptr [0x8f8124] */ { u32 t = R32((u32)(0x8f8124u)); r_esp -= 4; W32(r_esp, 0x86e772u); call_ind(t); }
    /* 0086e772: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0086e775: mov dword ptr [ecx + 0xb8c], eax */ W32((u32)(r_ecx+0xb8cu), r_eax);
    /* 0086e77b: cmp dword ptr [ecx + 0xb88], 0 */ {  u32 a = R32((u32)(r_ecx+0xb88u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0086e782: je 0x86e788 */ if (fZ) goto L_0086e788;
L_0086e784:; BB(0x0086e784);
    /* 0086e784: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0086e786: jne 0x86e7a0 */ if (!fZ) goto L_0086e7a0;
L_0086e788:; BB(0x0086e788);
    /* 0086e788: mov eax, ecx */ r_eax = r_ecx;
    /* 0086e78a: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0086e78d: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0086e790: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0086e793: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0086e79a: mov esp, ebp */ r_esp = r_ebp;
    /* 0086e79c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0086e79d: ret 4 */ FN_RET(0x0086e26c); r_esp += 8; return;
L_0086e7a0:; BB(0x0086e7a0);
    /* 0086e7a0: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0086e7a2: lea edx, [ebp - 0x28] */ r_edx = (u32)(r_ebp+0xffffffd8u);
    /* 0086e7a5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0086e7a6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0086e7a7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0086e7a8: push 0x86ee78 */ { u32 v = 0x86ee78u; r_esp -= 4; W32(r_esp, v); }
    /* 0086e7ad: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0086e7ae: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0086e7af: call 0x85af50 */ r_esp -= 4; W32(r_esp, 0x86e7b4u); f_0085af50();
    /* 0086e7b4: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0086e7b7: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0086e7ba: mov dword ptr [edx + 0xb6c], eax */ W32((u32)(r_edx+0xb6cu), r_eax);
    /* 0086e7c0: mov eax, edx */ r_eax = r_edx;
    /* 0086e7c2: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0086e7c5: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0086e7c8: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0086e7cb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0086e7ce: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0086e7d5: mov esp, ebp */ r_esp = r_ebp;
    /* 0086e7d7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0086e7d8: ret 4 */ FN_RET(0x0086e26c); r_esp += 8; return;
}

void f_0086e7dc(void) /* sub_86E7DC */
{
    FN_ENTER(0x0086e7dc);
    /* 0086e7dc: mov dword ptr [ecx], 0xb488a8 */ W32((u32)(r_ecx), 0xb488a8u);
    /* 0086e7e2: ret  */ FN_RET(0x0086e7dc); r_esp += 4; return;
}

void f_0086e7e4(void) /* sub_86E7E4 */
{
    FN_ENTER(0x0086e7e4);
    /* 0086e7e4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0086e7e5: mov ebp, esp */ r_ebp = r_esp;
    /* 0086e7e7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0086e7e9: push 0x8f7b08 */ { u32 v = 0x8f7b08u; r_esp -= 4; W32(r_esp, v); }
    /* 0086e7ee: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0086e7f4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086e7f5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0086e7fc: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0086e7ff: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0086e802: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0086e805: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0086e808: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0086e80b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0086e80e: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0086e815: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0086e818: push dword ptr [eax + 0xb78] */ { u32 v = R32((u32)(r_eax+0xb78u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086e81e: call dword ptr [0x8f82e4] */ { u32 t = R32((u32)(0x8f82e4u)); r_esp -= 4; W32(r_esp, 0x86e824u); call_ind(t); }
    /* 0086e824: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0086e827: mov edx, dword ptr [eax + 0xb8c] */ r_edx = R32((u32)(r_eax+0xb8cu));
    /* 0086e82d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086e82f: je 0x86e88d */ if (fZ) goto L_0086e88d;
L_0086e831:; BB(0x0086e831);
    /* 0086e831: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0086e832: call dword ptr [0x8f82e4] */ { u32 t = R32((u32)(0x8f82e4u)); r_esp -= 4; W32(r_esp, 0x86e838u); call_ind(t); }
    /* 0086e838: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0086e83a: call dword ptr [0x8f8174] */ { u32 t = R32((u32)(0x8f8174u)); r_esp -= 4; W32(r_esp, 0x86e840u); call_ind(t); }
    /* 0086e840: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0086e843: mov edx, dword ptr [eax + 0xb6c] */ r_edx = R32((u32)(r_eax+0xb6cu));
    /* 0086e849: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086e84b: je 0x86e887 */ if (fZ) goto L_0086e887;
L_0086e84d:; BB(0x0086e84d);
    /* 0086e84d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0086e84f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0086e850: call dword ptr [0x8f8128] */ { u32 t = R32((u32)(0x8f8128u)); r_esp -= 4; W32(r_esp, 0x86e856u); call_ind(t); }
    /* 0086e856: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0086e859: mov edx, dword ptr [eax + 0xb6c] */ r_edx = R32((u32)(r_eax+0xb6cu));
    /* 0086e85f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086e861: je 0x86e87f */ if (fZ) goto L_0086e87f;
L_0086e863:; BB(0x0086e863);
    /* 0086e863: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0086e864: call dword ptr [0x8f8140] */ { u32 t = R32((u32)(0x8f8140u)); r_esp -= 4; W32(r_esp, 0x86e86au); call_ind(t); }
    /* 0086e86a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0086e86d: mov edx, dword ptr [eax + 0xb8c] */ r_edx = R32((u32)(r_eax+0xb8cu));
    /* 0086e873: mov dword ptr [eax + 0xb6c], 0 */ W32((u32)(r_eax+0xb6cu), 0x0u);
    /* 0086e87d: jmp 0x86e88d */ goto L_0086e88d;
L_0086e87f:; BB(0x0086e87f);
    /* 0086e87f: mov edx, dword ptr [eax + 0xb8c] */ r_edx = R32((u32)(r_eax+0xb8cu));
    /* 0086e885: jmp 0x86e88d */ goto L_0086e88d;
L_0086e887:; BB(0x0086e887);
    /* 0086e887: mov edx, dword ptr [eax + 0xb8c] */ r_edx = R32((u32)(r_eax+0xb8cu));
L_0086e88d:; BB(0x0086e88d);
    /* 0086e88d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086e88f: je 0x86e8a5 */ if (fZ) goto L_0086e8a5;
L_0086e891:; BB(0x0086e891);
    /* 0086e891: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0086e892: call dword ptr [0x8f8140] */ { u32 t = R32((u32)(0x8f8140u)); r_esp -= 4; W32(r_esp, 0x86e898u); call_ind(t); }
    /* 0086e898: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0086e89b: mov dword ptr [eax + 0xb8c], 0 */ W32((u32)(r_eax+0xb8cu), 0x0u);
L_0086e8a5:; BB(0x0086e8a5);
    /* 0086e8a5: mov edx, dword ptr [eax + 0xb88] */ r_edx = R32((u32)(r_eax+0xb88u));
    /* 0086e8ab: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086e8ad: je 0x86e8c3 */ if (fZ) goto L_0086e8c3;
L_0086e8af:; BB(0x0086e8af);
    /* 0086e8af: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0086e8b0: call dword ptr [0x8f8140] */ { u32 t = R32((u32)(0x8f8140u)); r_esp -= 4; W32(r_esp, 0x86e8b6u); call_ind(t); }
    /* 0086e8b6: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0086e8b9: mov dword ptr [eax + 0xb88], 0 */ W32((u32)(r_eax+0xb88u), 0x0u);
L_0086e8c3:; BB(0x0086e8c3);
    /* 0086e8c3: mov edx, dword ptr [eax + 0xb84] */ r_edx = R32((u32)(r_eax+0xb84u));
    /* 0086e8c9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086e8cb: je 0x86e8e1 */ if (fZ) goto L_0086e8e1;
L_0086e8cd:; BB(0x0086e8cd);
    /* 0086e8cd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0086e8ce: call dword ptr [0x8f8140] */ { u32 t = R32((u32)(0x8f8140u)); r_esp -= 4; W32(r_esp, 0x86e8d4u); call_ind(t); }
    /* 0086e8d4: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0086e8d7: mov dword ptr [eax + 0xb84], 0 */ W32((u32)(r_eax+0xb84u), 0x0u);
L_0086e8e1:; BB(0x0086e8e1);
    /* 0086e8e1: mov edx, dword ptr [eax + 0xb80] */ r_edx = R32((u32)(r_eax+0xb80u));
    /* 0086e8e7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086e8e9: je 0x86e8ff */ if (fZ) goto L_0086e8ff;
L_0086e8eb:; BB(0x0086e8eb);
    /* 0086e8eb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0086e8ec: call dword ptr [0x8f8140] */ { u32 t = R32((u32)(0x8f8140u)); r_esp -= 4; W32(r_esp, 0x86e8f2u); call_ind(t); }
    /* 0086e8f2: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0086e8f5: mov dword ptr [eax + 0xb80], 0 */ W32((u32)(r_eax+0xb80u), 0x0u);
L_0086e8ff:; BB(0x0086e8ff);
    /* 0086e8ff: mov edx, dword ptr [eax + 0xb7c] */ r_edx = R32((u32)(r_eax+0xb7cu));
    /* 0086e905: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086e907: je 0x86e91d */ if (fZ) goto L_0086e91d;
L_0086e909:; BB(0x0086e909);
    /* 0086e909: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0086e90a: call dword ptr [0x8f8140] */ { u32 t = R32((u32)(0x8f8140u)); r_esp -= 4; W32(r_esp, 0x86e910u); call_ind(t); }
    /* 0086e910: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0086e913: mov dword ptr [eax + 0xb7c], 0 */ W32((u32)(r_eax+0xb7cu), 0x0u);
L_0086e91d:; BB(0x0086e91d);
    /* 0086e91d: mov edx, dword ptr [eax + 0xb78] */ r_edx = R32((u32)(r_eax+0xb78u));
    /* 0086e923: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086e925: je 0x86e93b */ if (fZ) goto L_0086e93b;
L_0086e927:; BB(0x0086e927);
    /* 0086e927: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0086e928: call dword ptr [0x8f8140] */ { u32 t = R32((u32)(0x8f8140u)); r_esp -= 4; W32(r_esp, 0x86e92eu); call_ind(t); }
    /* 0086e92e: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0086e931: mov dword ptr [eax + 0xb78], 0 */ W32((u32)(r_eax+0xb78u), 0x0u);
L_0086e93b:; BB(0x0086e93b);
    /* 0086e93b: mov edx, dword ptr [eax + 0xb74] */ r_edx = R32((u32)(r_eax+0xb74u));
    /* 0086e941: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086e943: je 0x86e959 */ if (fZ) goto L_0086e959;
L_0086e945:; BB(0x0086e945);
    /* 0086e945: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0086e946: call dword ptr [0x8f8140] */ { u32 t = R32((u32)(0x8f8140u)); r_esp -= 4; W32(r_esp, 0x86e94cu); call_ind(t); }
    /* 0086e94c: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0086e94f: mov dword ptr [eax + 0xb74], 0 */ W32((u32)(r_eax+0xb74u), 0x0u);
L_0086e959:; BB(0x0086e959);
    /* 0086e959: mov edx, dword ptr [eax + 0xb70] */ r_edx = R32((u32)(r_eax+0xb70u));
    /* 0086e95f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086e961: je 0x86e977 */ if (fZ) goto L_0086e977;
L_0086e963:; BB(0x0086e963);
    /* 0086e963: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0086e964: call dword ptr [0x8f8140] */ { u32 t = R32((u32)(0x8f8140u)); r_esp -= 4; W32(r_esp, 0x86e96au); call_ind(t); }
    /* 0086e96a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0086e96d: mov dword ptr [eax + 0xb70], 0 */ W32((u32)(r_eax+0xb70u), 0x0u);
L_0086e977:; BB(0x0086e977);
    /* 0086e977: add eax, 0xb54 */ {  u32 a = r_eax; u32 b = 0xb54u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0086e97c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086e97d: call dword ptr [0x8f81b0] */ { u32 t = R32((u32)(0x8f81b0u)); r_esp -= 4; W32(r_esp, 0x86e983u); call_ind(t); }
    /* 0086e983: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0086e986: mov dword ptr [ecx + 0x704], 0xb488a8 */ W32((u32)(r_ecx+0x704u), 0xb488a8u);
    /* 0086e990: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0086e997: call 0x86fb5c */ r_esp -= 4; W32(r_esp, 0x86e99cu); f_0086fb5c();
    /* 0086e99c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0086e99f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0086e9a6: mov esp, ebp */ r_esp = r_ebp;
    /* 0086e9a8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0086e9a9: ret  */ FN_RET(0x0086e7e4); r_esp += 4; return;
}

void f_0086e9ac(void) /* sub_86E9AC */
{
    FN_ENTER(0x0086e9ac);
    /* 0086e9ac: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086e9ad: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0086e9ae: mov esi, ecx */ r_esi = r_ecx;
    /* 0086e9b0: lea ebp, [esi + 0xb54] */ r_ebp = (u32)(r_esi+0xb54u);
    /* 0086e9b6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0086e9b7: call dword ptr [0x8f81b4] */ { u32 t = R32((u32)(0x8f81b4u)); r_esp -= 4; W32(r_esp, 0x86e9bdu); call_ind(t); }
    /* 0086e9bd: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0086e9c1: mov ecx, esi */ r_ecx = r_esi;
    /* 0086e9c3: call 0x86f768 */ r_esp -= 4; W32(r_esp, 0x86e9c8u); f_0086f768();
    /* 0086e9c8: mov esi, eax */ r_esi = r_eax;
    /* 0086e9ca: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0086e9cb: call dword ptr [0x8f81b8] */ { u32 t = R32((u32)(0x8f81b8u)); r_esp -= 4; W32(r_esp, 0x86e9d1u); call_ind(t); }
    /* 0086e9d1: mov eax, esi */ r_eax = r_esi;
    /* 0086e9d3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0086e9d4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0086e9d5: ret 4 */ FN_RET(0x0086e9ac); r_esp += 8; return;
}

void f_0086e9d8(void) /* sub_86E9D8 */
{
    FN_ENTER(0x0086e9d8);
    /* 0086e9d8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0086e9d9: mov edi, ecx */ r_edi = r_ecx;
    /* 0086e9db: mov eax, dword ptr [edi + 0xb50] */ r_eax = R32((u32)(r_edi+0xb50u));
    /* 0086e9e1: mov dword ptr [edi + 0x6fc], 0 */ W32((u32)(r_edi+0x6fcu), 0x0u);
    /* 0086e9eb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086e9ed: je 0x86ea00 */ if (fZ) goto L_0086ea00;
L_0086e9ef:; BB(0x0086e9ef);
    /* 0086e9ef: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086e9f0: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x86e9f5u); f_00857e98();
    /* 0086e9f5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0086e9f6: mov dword ptr [edi + 0xb50], 0 */ W32((u32)(r_edi+0xb50u), 0x0u);
L_0086ea00:; BB(0x0086ea00);
    /* 0086ea00: mov eax, dword ptr [edi + 0xb4c] */ r_eax = R32((u32)(r_edi+0xb4cu));
    /* 0086ea06: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086ea08: je 0x86ea1a */ if (fZ) goto L_0086ea1a;
L_0086ea0a:; BB(0x0086ea0a);
    /* 0086ea0a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0086ea0c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086ea0d: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x86ea10u); call_ind(t); }
    /* 0086ea10: mov dword ptr [edi + 0xb4c], 0 */ W32((u32)(r_edi+0xb4cu), 0x0u);
L_0086ea1a:; BB(0x0086ea1a);
    /* 0086ea1a: mov eax, dword ptr [edi + 0xb48] */ r_eax = R32((u32)(r_edi+0xb48u));
    /* 0086ea20: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086ea22: je 0x86ea34 */ if (fZ) goto L_0086ea34;
L_0086ea24:; BB(0x0086ea24);
    /* 0086ea24: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0086ea26: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086ea27: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x86ea2au); call_ind(t); }
    /* 0086ea2a: mov dword ptr [edi + 0xb48], 0 */ W32((u32)(r_edi+0xb48u), 0x0u);
L_0086ea34:; BB(0x0086ea34);
    /* 0086ea34: mov ecx, edi */ r_ecx = r_edi;
    /* 0086ea36: call 0x86fb64 */ r_esp -= 4; W32(r_esp, 0x86ea3bu); f_0086fb64();
    /* 0086ea3b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0086ea3d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0086ea3f: mov dword ptr [edi + 0xb08], eax */ W32((u32)(r_edi+0xb08u), r_eax);
    /* 0086ea45: mov dword ptr [edi + 0xb10], eax */ W32((u32)(r_edi+0xb10u), r_eax);
    /* 0086ea4b: mov dword ptr [edi + 0xb0c], eax */ W32((u32)(r_edi+0xb0cu), r_eax);
    /* 0086ea51: mov dword ptr [edi + 0x6f0], eax */ W32((u32)(r_edi+0x6f0u), r_eax);
    /* 0086ea57: mov dword ptr [edi + 0x6f4], eax */ W32((u32)(r_edi+0x6f4u), r_eax);
    /* 0086ea5d: mov dword ptr [edi + 0xb14], eax */ W32((u32)(r_edi+0xb14u), r_eax);
    /* 0086ea63: mov dword ptr [edi + 0xb28], eax */ W32((u32)(r_edi+0xb28u), r_eax);
    /* 0086ea69: mov dword ptr [edi + 0xb18], eax */ W32((u32)(r_edi+0xb18u), r_eax);
    /* 0086ea6f: mov dword ptr [edi + 0xb1c], eax */ W32((u32)(r_edi+0xb1cu), r_eax);
    /* 0086ea75: mov dword ptr [edi + 0xb20], eax */ W32((u32)(r_edi+0xb20u), r_eax);
    /* 0086ea7b: add edi, 0xb30 */ {  u32 a = r_edi; u32 b = 0xb30u; u32 r = (a + b) & 0xffffffffu; r_edi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0086ea81: mov dword ptr [edi], edx */ W32((u32)(r_edi), r_edx);
    /* 0086ea83: mov dword ptr [edi + 4], edx */ W32((u32)(r_edi+0x4u), r_edx);
    /* 0086ea86: mov dword ptr [edi + 8], edx */ W32((u32)(r_edi+0x8u), r_edx);
    /* 0086ea89: mov dword ptr [edi + 0xc], edx */ W32((u32)(r_edi+0xcu), r_edx);
    /* 0086ea8c: mov word ptr [edi + 0x10], dx */ W16((u32)(r_edi+0x10u), (u16)r_edx);
    /* 0086ea90: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0086ea91: ret  */ FN_RET(0x0086e9d8); r_esp += 4; return;
}

void f_0086ea94(void) /* sub_86EA94 */
{
    FN_ENTER(0x0086ea94);
    /* 0086ea94: mov eax, dword ptr [ecx + 0x6fc] */ r_eax = R32((u32)(r_ecx+0x6fcu));
    /* 0086ea9a: ret  */ FN_RET(0x0086ea94); r_esp += 4; return;
}

void f_0086ea9c(void) /* sub_86EA9C */
{
    FN_ENTER(0x0086ea9c);
    /* 0086ea9c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0086ea9d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0086ea9e: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0086eaa0: lea ebp, [ebx + 0xb54] */ r_ebp = (u32)(r_ebx+0xb54u);
    /* 0086eaa6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0086eaa7: call dword ptr [0x8f81b4] */ { u32 t = R32((u32)(0x8f81b4u)); r_esp -= 4; W32(r_esp, 0x86eaadu); call_ind(t); }
    /* 0086eaad: mov ebx, dword ptr [ebx + 0xb08] */ r_ebx = R32((u32)(r_ebx+0xb08u));
    /* 0086eab3: dec ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0086eab4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0086eab5: call dword ptr [0x8f81b8] */ { u32 t = R32((u32)(0x8f81b8u)); r_esp -= 4; W32(r_esp, 0x86eabbu); call_ind(t); }
    /* 0086eabb: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0086eabd: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0086eabf: jge 0x86eac3 */ if ((fS==fO)) goto L_0086eac3;
L_0086eac1:; BB(0x0086eac1);
    /* 0086eac1: mov ebx, edx */ r_ebx = r_edx;
L_0086eac3:; BB(0x0086eac3);
    /* 0086eac3: mov eax, ebx */ r_eax = r_ebx;
    /* 0086eac5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0086eac6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0086eac7: ret  */ FN_RET(0x0086ea9c); r_esp += 4; return;
}

void f_0086eac8(void) /* sub_86EAC8 */
{
    FN_ENTER(0x0086eac8);
    /* 0086eac8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086eac9: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 0086ead0: cmp dword ptr [ecx + 0x6fc], 0 */ {  u32 a = R32((u32)(r_ecx+0x6fcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0086ead7: je 0x86eaed */ if (fZ) goto L_0086eaed;
L_0086ead9:; BB(0x0086ead9);
    /* 0086ead9: mov edx, dword ptr [ecx + 0xb48] */ r_edx = R32((u32)(r_ecx+0xb48u));
    /* 0086eadf: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0086eae1: je 0x86eaed */ if (fZ) goto L_0086eaed;
L_0086eae3:; BB(0x0086eae3);
    /* 0086eae3: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 0086eae5: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0086eae8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086eae9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0086eaea: call dword ptr [ecx + 0x18] */ { u32 t = R32((u32)(r_ecx+0x18u)); r_esp -= 4; W32(r_esp, 0x86eaedu); call_ind(t); }
L_0086eaed:; BB(0x0086eaed);
    /* 0086eaed: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 0086eaf0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0086eaf1: ret  */ FN_RET(0x0086eac8); r_esp += 4; return;
}

void f_0086eaf4(void) /* sub_86EAF4 */
{
    FN_ENTER(0x0086eaf4);
    /* 0086eaf4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0086eaf5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0086eaf6: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0086eaf8: lea ebp, [ebx + 0xb54] */ r_ebp = (u32)(r_ebx+0xb54u);
    /* 0086eafe: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0086eaff: call dword ptr [0x8f81b4] */ { u32 t = R32((u32)(0x8f81b4u)); r_esp -= 4; W32(r_esp, 0x86eb05u); call_ind(t); }
    /* 0086eb05: movzx eax, byte ptr [esp + 0xc] */ r_eax = (u32)R8((u32)(r_esp+0xcu));
    /* 0086eb0a: mov byte ptr [ebx + 0xb42], al */ W8((u32)(r_ebx+0xb42u), (u8)r_eax);
    /* 0086eb10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0086eb11: call dword ptr [0x8f81b8] */ { u32 t = R32((u32)(0x8f81b8u)); r_esp -= 4; W32(r_esp, 0x86eb17u); call_ind(t); }
    /* 0086eb17: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0086eb18: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0086eb19: ret 4 */ FN_RET(0x0086eaf4); r_esp += 8; return;
}

void f_0086eb1c(void) /* sub_86EB1C */
{
    FN_ENTER(0x0086eb1c);
    /* 0086eb1c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0086eb1d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0086eb1e: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0086eb20: lea ebp, [ebx + 0xb54] */ r_ebp = (u32)(r_ebx+0xb54u);
    /* 0086eb26: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0086eb27: call dword ptr [0x8f81b4] */ { u32 t = R32((u32)(0x8f81b4u)); r_esp -= 4; W32(r_esp, 0x86eb2du); call_ind(t); }
    /* 0086eb2d: movzx eax, byte ptr [esp + 0xc] */ r_eax = (u32)R8((u32)(r_esp+0xcu));
    /* 0086eb32: mov byte ptr [ebx + 0xb90], al */ W8((u32)(r_ebx+0xb90u), (u8)r_eax);
    /* 0086eb38: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0086eb39: call dword ptr [0x8f81b8] */ { u32 t = R32((u32)(0x8f81b8u)); r_esp -= 4; W32(r_esp, 0x86eb3fu); call_ind(t); }
    /* 0086eb3f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0086eb40: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0086eb41: ret 4 */ FN_RET(0x0086eb1c); r_esp += 8; return;
}

void f_0086eb44(void) /* sub_86EB44 */
{
    FN_ENTER(0x0086eb44);
    /* 0086eb44: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086eb45: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0086eb46: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0086eb47: mov esi, ecx */ r_esi = r_ecx;
    /* 0086eb49: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 0086eb4d: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0086eb4f: cmp dword ptr [esi + 0x6fc], 0 */ {  u32 a = R32((u32)(r_esi+0x6fcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0086eb56: je 0x86eb72 */ if (fZ) goto L_0086eb72;
L_0086eb58:; BB(0x0086eb58);
    /* 0086eb58: mov eax, dword ptr [esi + 0xb48] */ r_eax = R32((u32)(r_esi+0xb48u));
    /* 0086eb5e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0086eb60: je 0x86eb72 */ if (fZ) goto L_0086eb72;
L_0086eb62:; BB(0x0086eb62);
    /* 0086eb62: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0086eb64: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0086eb65: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086eb66: call dword ptr [edx + 0x3c] */ { u32 t = R32((u32)(r_edx+0x3cu)); r_esp -= 4; W32(r_esp, 0x86eb69u); call_ind(t); }
    /* 0086eb69: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0086eb6b: jl 0x86eb72 */ if ((fS!=fO)) goto L_0086eb72;
L_0086eb6d:; BB(0x0086eb6d);
    /* 0086eb6d: mov ebx, 1 */ r_ebx = 0x1u;
L_0086eb72:; BB(0x0086eb72);
    /* 0086eb72: mov dword ptr [esi + 0xb2c], ebp */ W32((u32)(r_esi+0xb2cu), r_ebp);
    /* 0086eb78: mov eax, ebx */ r_eax = r_ebx;
    /* 0086eb7a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0086eb7b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0086eb7c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0086eb7d: ret 4 */ FN_RET(0x0086eb44); r_esp += 8; return;
}

void f_0086eb80(void) /* sub_86EB80 */
{
    FN_ENTER(0x0086eb80);
    /* 0086eb80: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0086eb81: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0086eb82: mov edi, ecx */ r_edi = r_ecx;
    /* 0086eb84: lea ebx, [edi + 0xb54] */ r_ebx = (u32)(r_edi+0xb54u);
    /* 0086eb8a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0086eb8b: call dword ptr [0x8f81b4] */ { u32 t = R32((u32)(0x8f81b4u)); r_esp -= 4; W32(r_esp, 0x86eb91u); call_ind(t); }
    /* 0086eb91: mov eax, dword ptr [edi + 0xb08] */ r_eax = R32((u32)(r_edi+0xb08u));
    /* 0086eb97: cmp eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0086eb9c: jae 0x86ebd2 */ if (!fC) goto L_0086ebd2;
L_0086eb9e:; BB(0x0086eb9e);
    /* 0086eb9e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086eba0: je 0x86ebb4 */ if (fZ) goto L_0086ebb4;
L_0086eba2:; BB(0x0086eba2);
    /* 0086eba2: mov eax, dword ptr [edi + 0xb10] */ r_eax = R32((u32)(r_edi+0xb10u));
    /* 0086eba8: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0086eba9: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0086ebac: mov dword ptr [edi + 0xb10], eax */ W32((u32)(r_edi+0xb10u), r_eax);
    /* 0086ebb2: jmp 0x86ebba */ goto L_0086ebba;
L_0086ebb4:; BB(0x0086ebb4);
    /* 0086ebb4: mov eax, dword ptr [edi + 0xb10] */ r_eax = R32((u32)(r_edi+0xb10u));
L_0086ebba:; BB(0x0086ebba);
    /* 0086ebba: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0086ebbe: mov dword ptr [edi + eax*4 + 0x708], edx */ W32((u32)(r_edi+r_eax*4+0x708u), r_edx);
    /* 0086ebc5: inc dword ptr [edi + 0xb08] */ { u32 ad = (u32)(r_edi+0xb08u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0086ebcb: mov edi, 1 */ r_edi = 0x1u;
    /* 0086ebd0: jmp 0x86ebd4 */ goto L_0086ebd4;
L_0086ebd2:; BB(0x0086ebd2);
    /* 0086ebd2: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_0086ebd4:; BB(0x0086ebd4);
    /* 0086ebd4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0086ebd5: call dword ptr [0x8f81b8] */ { u32 t = R32((u32)(0x8f81b8u)); r_esp -= 4; W32(r_esp, 0x86ebdbu); call_ind(t); }
    /* 0086ebdb: mov eax, edi */ r_eax = r_edi;
    /* 0086ebdd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0086ebde: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0086ebdf: ret 4 */ FN_RET(0x0086eb80); r_esp += 8; return;
}

void f_0086ebe4(void) /* sub_86EBE4 */
{
    FN_ENTER(0x0086ebe4);
    /* 0086ebe4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0086ebe5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0086ebe6: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0086ebe8: lea ebp, [ebx + 0xb54] */ r_ebp = (u32)(r_ebx+0xb54u);
    /* 0086ebee: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0086ebef: call dword ptr [0x8f81b4] */ { u32 t = R32((u32)(0x8f81b4u)); r_esp -= 4; W32(r_esp, 0x86ebf5u); call_ind(t); }
    /* 0086ebf5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0086ebf7: mov dword ptr [ebx + 0xb08], eax */ W32((u32)(r_ebx+0xb08u), r_eax);
    /* 0086ebfd: mov dword ptr [ebx + 0xb10], eax */ W32((u32)(r_ebx+0xb10u), r_eax);
    /* 0086ec03: mov dword ptr [ebx + 0xb0c], eax */ W32((u32)(r_ebx+0xb0cu), r_eax);
    /* 0086ec09: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0086ec0a: call dword ptr [0x8f81b8] */ { u32 t = R32((u32)(0x8f81b8u)); r_esp -= 4; W32(r_esp, 0x86ec10u); call_ind(t); }
    /* 0086ec10: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0086ec11: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0086ec12: ret  */ FN_RET(0x0086ebe4); r_esp += 4; return;
}

void f_0086ec14(void) /* sub_86EC14 */
{
    FN_ENTER(0x0086ec14);
    /* 0086ec14: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0086ec15: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0086ec17: lea eax, [ebx + 0x2f0] */ r_eax = (u32)(r_ebx+0x2f0u);
    /* 0086ec1d: push 0x400 */ { u32 v = 0x400u; r_esp -= 4; W32(r_esp, v); }
    /* 0086ec22: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0086ec26: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086ec27: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x86ec2cu); f_00858900();
    /* 0086ec2c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0086ec2f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0086ec31: mov dword ptr [ebx + 0x6f8], eax */ W32((u32)(r_ebx+0x6f8u), r_eax);
    /* 0086ec37: mov byte ptr [ebx + 0x700], al */ W8((u32)(r_ebx+0x700u), (u8)r_eax);
    /* 0086ec3d: push dword ptr [ebx + 0xb70] */ { u32 v = R32((u32)(r_ebx+0xb70u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086ec43: call dword ptr [0x8f82e4] */ { u32 t = R32((u32)(0x8f82e4u)); r_esp -= 4; W32(r_esp, 0x86ec49u); call_ind(t); }
    /* 0086ec49: push dword ptr [ebx + 0xb7c] */ { u32 v = R32((u32)(r_ebx+0xb7cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0086ec4f: call dword ptr [0x8f82e4] */ { u32 t = R32((u32)(0x8f82e4u)); r_esp -= 4; W32(r_esp, 0x86ec55u); call_ind(t); }
    /* 0086ec55: mov eax, 1 */ r_eax = 0x1u;
    /* 0086ec5a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0086ec5b: ret 4 */ FN_RET(0x0086ec14); r_esp += 8; return;
}

void f_0086ec60(void) /* sub_86EC60 */
{
    FN_ENTER(0x0086ec60);
    /* 0086ec60: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086ec61: mov esi, ecx */ r_esi = r_ecx;
    /* 0086ec63: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0086ec67: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086ec69: je 0x86ecad */ if (fZ) goto L_0086ecad;
L_0086ec6b:; BB(0x0086ec6b);
    /* 0086ec6b: mov dword ptr [esi + 0x6f0], eax */ W32((u32)(r_esi+0x6f0u), r_eax);
    /* 0086ec71: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0086ec75: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0086ec79: mov dword ptr [esi + 0x6f4], eax */ W32((u32)(r_esi+0x6f4u), r_eax);
    /* 0086ec7f: mov dword ptr [esi + 0x6f8], edx */ W32((u32)(r_esi+0x6f8u), r_edx);
    /* 0086ec85: mov byte ptr [esi + 0x700], 0 */ W8((u32)(r_esi+0x700u), 0x0u);
    /* 0086ec8c: push dword ptr [esi + 0xb74] */ { u32 v = R32((u32)(r_esi+0xb74u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086ec92: call dword ptr [0x8f82e4] */ { u32 t = R32((u32)(0x8f82e4u)); r_esp -= 4; W32(r_esp, 0x86ec98u); call_ind(t); }
    /* 0086ec98: push dword ptr [esi + 0xb7c] */ { u32 v = R32((u32)(r_esi+0xb7cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0086ec9e: call dword ptr [0x8f82e4] */ { u32 t = R32((u32)(0x8f82e4u)); r_esp -= 4; W32(r_esp, 0x86eca4u); call_ind(t); }
    /* 0086eca4: mov eax, 1 */ r_eax = 0x1u;
    /* 0086eca9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0086ecaa: ret 0xc */ FN_RET(0x0086ec60); r_esp += 16; return;
L_0086ecad:; BB(0x0086ecad);
    /* 0086ecad: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0086ecaf: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0086ecb0: ret 0xc */ FN_RET(0x0086ec60); r_esp += 16; return;
}

void f_0086ecb4(void) /* sub_86ECB4 */
{
    FN_ENTER(0x0086ecb4);
    /* 0086ecb4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086ecb5: mov esi, ecx */ r_esi = r_ecx;
    /* 0086ecb7: mov ecx, esi */ r_ecx = r_esi;
    /* 0086ecb9: call 0x86ece4 */ r_esp -= 4; W32(r_esp, 0x86ecbeu); f_0086ece4();
    /* 0086ecbe: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0086ecc1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086ecc3: je 0x86ecdf */ if (fZ) goto L_0086ecdf;
L_0086ecc5:; BB(0x0086ecc5);
    /* 0086ecc5: mov byte ptr [esi + 0x700], 0 */ W8((u32)(r_esi+0x700u), 0x0u);
    /* 0086eccc: push dword ptr [esi + 0xb7c] */ { u32 v = R32((u32)(r_esi+0xb7cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0086ecd2: call dword ptr [0x8f82e4] */ { u32 t = R32((u32)(0x8f82e4u)); r_esp -= 4; W32(r_esp, 0x86ecd8u); call_ind(t); }
    /* 0086ecd8: mov eax, 1 */ r_eax = 0x1u;
    /* 0086ecdd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0086ecde: ret  */ FN_RET(0x0086ecb4); r_esp += 4; return;
L_0086ecdf:; BB(0x0086ecdf);
    /* 0086ecdf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0086ece1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0086ece2: ret  */ FN_RET(0x0086ecb4); r_esp += 4; return;
}

void f_0086ece4(void) /* sub_86ECE4 */
{
    FN_ENTER(0x0086ece4);
    /* 0086ece4: cmp dword ptr [ecx + 0xb6c], 0 */ {  u32 a = R32((u32)(r_ecx+0xb6cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086eceb: je 0x86ecff */ if (fZ) goto L_0086ecff;
L_0086eced:; BB(0x0086eced);
    /* 0086eced: cmp dword ptr [ecx + 0x6fc], 0 */ {  u32 a = R32((u32)(r_ecx+0x6fcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0086ecf4: je 0x86ecfc */ if (fZ) goto L_0086ecfc;
L_0086ecf6:; BB(0x0086ecf6);
    /* 0086ecf6: mov eax, 1 */ r_eax = 0x1u;
    /* 0086ecfb: ret  */ FN_RET(0x0086ece4); r_esp += 4; return;
L_0086ecfc:; BB(0x0086ecfc);
    /* 0086ecfc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0086ecfe: ret  */ FN_RET(0x0086ece4); r_esp += 4; return;
L_0086ecff:; BB(0x0086ecff);
    /* 0086ecff: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0086ed01: ret  */ FN_RET(0x0086ece4); r_esp += 4; return;
}

void f_0086ed04(void) /* sub_86ED04 */
{
    FN_ENTER(0x0086ed04);
    /* 0086ed04: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086ed05: mov esi, ecx */ r_esi = r_ecx;
    /* 0086ed07: mov ecx, esi */ r_ecx = r_esi;
    /* 0086ed09: call 0x86ece4 */ r_esp -= 4; W32(r_esp, 0x86ed0eu); f_0086ece4();
    /* 0086ed0e: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0086ed11: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086ed13: je 0x86ed60 */ if (fZ) goto L_0086ed60;
L_0086ed15:; BB(0x0086ed15);
    /* 0086ed15: movzx eax, byte ptr [esp + 8] */ r_eax = (u32)R8((u32)(r_esp+0x8u));
    /* 0086ed1a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086ed1c: je 0x86ed37 */ if (fZ) goto L_0086ed37;
L_0086ed1e:; BB(0x0086ed1e);
    /* 0086ed1e: mov eax, dword ptr [esi + 0x6fc] */ r_eax = R32((u32)(r_esi+0x6fcu));
    /* 0086ed24: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0086ed27: je 0x86ed57 */ if (fZ) goto L_0086ed57;
L_0086ed29:; BB(0x0086ed29);
    /* 0086ed29: push dword ptr [esi + 0xb80] */ { u32 v = R32((u32)(r_esi+0xb80u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086ed2f: call dword ptr [0x8f82e4] */ { u32 t = R32((u32)(0x8f82e4u)); r_esp -= 4; W32(r_esp, 0x86ed35u); call_ind(t); }
    /* 0086ed35: jmp 0x86ed57 */ goto L_0086ed57;
L_0086ed37:; BB(0x0086ed37);
    /* 0086ed37: mov eax, dword ptr [esi + 0x6fc] */ r_eax = R32((u32)(r_esi+0x6fcu));
    /* 0086ed3d: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0086ed40: je 0x86ed57 */ if (fZ) goto L_0086ed57;
L_0086ed42:; BB(0x0086ed42);
    /* 0086ed42: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0086ed45: je 0x86ed57 */ if (fZ) goto L_0086ed57;
L_0086ed47:; BB(0x0086ed47);
    /* 0086ed47: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0086ed49: je 0x86ed57 */ if (fZ) goto L_0086ed57;
L_0086ed4b:; BB(0x0086ed4b);
    /* 0086ed4b: push dword ptr [esi + 0xb7c] */ { u32 v = R32((u32)(r_esi+0xb7cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0086ed51: call dword ptr [0x8f82e4] */ { u32 t = R32((u32)(0x8f82e4u)); r_esp -= 4; W32(r_esp, 0x86ed57u); call_ind(t); }
L_0086ed57:; BB(0x0086ed57);
    /* 0086ed57: mov eax, 1 */ r_eax = 0x1u;
    /* 0086ed5c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0086ed5d: ret 4 */ FN_RET(0x0086ed04); r_esp += 8; return;
L_0086ed60:; BB(0x0086ed60);
    /* 0086ed60: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0086ed62: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0086ed63: ret 4 */ FN_RET(0x0086ed04); r_esp += 8; return;
}

void f_0086ed68(void) /* sub_86ED68 */
{
    FN_ENTER(0x0086ed68);
    /* 0086ed68: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0086ed6a: movzx edx, byte ptr [0xae96e0] */ r_edx = (u32)R8((u32)(0xae96e0u));
    /* 0086ed71: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0086ed73: je 0x86ede8 */ if (fZ) goto L_0086ede8;
L_0086ed75:; BB(0x0086ed75);
    /* 0086ed75: mov eax, 1 */ r_eax = 0x1u;
    /* 0086ed7a: movzx edx, byte ptr [0xae96e8] */ r_edx = (u32)R8((u32)(0xae96e8u));
    /* 0086ed81: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0086ed83: je 0x86ede8 */ if (fZ) goto L_0086ede8;
L_0086ed85:; BB(0x0086ed85);
    /* 0086ed85: mov eax, 2 */ r_eax = 0x2u;
    /* 0086ed8a: movzx edx, byte ptr [0xae96f0] */ r_edx = (u32)R8((u32)(0xae96f0u));
    /* 0086ed91: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0086ed93: je 0x86ede8 */ if (fZ) goto L_0086ede8;
L_0086ed95:; BB(0x0086ed95);
    /* 0086ed95: mov eax, 3 */ r_eax = 0x3u;
    /* 0086ed9a: movzx edx, byte ptr [0xae96f8] */ r_edx = (u32)R8((u32)(0xae96f8u));
    /* 0086eda1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0086eda3: je 0x86ede8 */ if (fZ) goto L_0086ede8;
L_0086eda5:; BB(0x0086eda5);
    /* 0086eda5: mov eax, 4 */ r_eax = 0x4u;
    /* 0086edaa: movzx edx, byte ptr [0xae9700] */ r_edx = (u32)R8((u32)(0xae9700u));
    /* 0086edb1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0086edb3: je 0x86ede8 */ if (fZ) goto L_0086ede8;
L_0086edb5:; BB(0x0086edb5);
    /* 0086edb5: mov eax, 5 */ r_eax = 0x5u;
    /* 0086edba: movzx edx, byte ptr [0xae9708] */ r_edx = (u32)R8((u32)(0xae9708u));
    /* 0086edc1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0086edc3: je 0x86ede8 */ if (fZ) goto L_0086ede8;
L_0086edc5:; BB(0x0086edc5);
    /* 0086edc5: mov eax, 6 */ r_eax = 0x6u;
    /* 0086edca: movzx edx, byte ptr [0xae9710] */ r_edx = (u32)R8((u32)(0xae9710u));
    /* 0086edd1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0086edd3: je 0x86ede8 */ if (fZ) goto L_0086ede8;
L_0086edd5:; BB(0x0086edd5);
    /* 0086edd5: mov eax, 7 */ r_eax = 0x7u;
    /* 0086edda: movzx edx, byte ptr [0xae9718] */ r_edx = (u32)R8((u32)(0xae9718u));
    /* 0086ede1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0086ede3: je 0x86ede8 */ if (fZ) goto L_0086ede8;
L_0086ede5:; BB(0x0086ede5);
    /* 0086ede5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0086ede7: ret  */ FN_RET(0x0086ed68); r_esp += 4; return;
L_0086ede8:; BB(0x0086ede8);
    /* 0086ede8: mov byte ptr [eax*8 + 0xae96e0], 1 */ W8((u32)(r_eax*8+0xae96e0u), 0x1u);
    /* 0086edf0: mov eax, dword ptr [eax*8 + 0xae96e4] */ r_eax = R32((u32)(r_eax*8+0xae96e4u));
    /* 0086edf7: ret  */ FN_RET(0x0086ed68); r_esp += 4; return;
}

void f_0086edf8(void) /* sub_86EDF8 */
{
    FN_ENTER(0x0086edf8);
    /* 0086edf8: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0086edfc: cmp eax, dword ptr [0xae96e4] */ {  u32 a = r_eax; u32 b = R32((u32)(0xae96e4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086ee02: jne 0x86ee0b */ if (!fZ) goto L_0086ee0b;
L_0086ee04:; BB(0x0086ee04);
    /* 0086ee04: mov byte ptr [0xae96e0], 0 */ W8((u32)(0xae96e0u), 0x0u);
L_0086ee0b:; BB(0x0086ee0b);
    /* 0086ee0b: cmp eax, dword ptr [0xae96ec] */ {  u32 a = r_eax; u32 b = R32((u32)(0xae96ecu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086ee11: jne 0x86ee1a */ if (!fZ) goto L_0086ee1a;
L_0086ee13:; BB(0x0086ee13);
    /* 0086ee13: mov byte ptr [0xae96e8], 0 */ W8((u32)(0xae96e8u), 0x0u);
L_0086ee1a:; BB(0x0086ee1a);
    /* 0086ee1a: cmp eax, dword ptr [0xae96f4] */ {  u32 a = r_eax; u32 b = R32((u32)(0xae96f4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086ee20: jne 0x86ee29 */ if (!fZ) goto L_0086ee29;
L_0086ee22:; BB(0x0086ee22);
    /* 0086ee22: mov byte ptr [0xae96f0], 0 */ W8((u32)(0xae96f0u), 0x0u);
L_0086ee29:; BB(0x0086ee29);
    /* 0086ee29: cmp eax, dword ptr [0xae96fc] */ {  u32 a = r_eax; u32 b = R32((u32)(0xae96fcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086ee2f: jne 0x86ee38 */ if (!fZ) goto L_0086ee38;
L_0086ee31:; BB(0x0086ee31);
    /* 0086ee31: mov byte ptr [0xae96f8], 0 */ W8((u32)(0xae96f8u), 0x0u);
L_0086ee38:; BB(0x0086ee38);
    /* 0086ee38: cmp eax, dword ptr [0xae9704] */ {  u32 a = r_eax; u32 b = R32((u32)(0xae9704u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086ee3e: jne 0x86ee47 */ if (!fZ) goto L_0086ee47;
L_0086ee40:; BB(0x0086ee40);
    /* 0086ee40: mov byte ptr [0xae9700], 0 */ W8((u32)(0xae9700u), 0x0u);
L_0086ee47:; BB(0x0086ee47);
    /* 0086ee47: cmp eax, dword ptr [0xae970c] */ {  u32 a = r_eax; u32 b = R32((u32)(0xae970cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086ee4d: jne 0x86ee56 */ if (!fZ) goto L_0086ee56;
L_0086ee4f:; BB(0x0086ee4f);
    /* 0086ee4f: mov byte ptr [0xae9708], 0 */ W8((u32)(0xae9708u), 0x0u);
L_0086ee56:; BB(0x0086ee56);
    /* 0086ee56: cmp eax, dword ptr [0xae9714] */ {  u32 a = r_eax; u32 b = R32((u32)(0xae9714u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086ee5c: jne 0x86ee65 */ if (!fZ) goto L_0086ee65;
L_0086ee5e:; BB(0x0086ee5e);
    /* 0086ee5e: mov byte ptr [0xae9710], 0 */ W8((u32)(0xae9710u), 0x0u);
L_0086ee65:; BB(0x0086ee65);
    /* 0086ee65: cmp eax, dword ptr [0xae971c] */ {  u32 a = r_eax; u32 b = R32((u32)(0xae971cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0086ee6b: jne 0x86ee74 */ if (!fZ) goto L_0086ee74;
L_0086ee6d:; BB(0x0086ee6d);
    /* 0086ee6d: mov byte ptr [0xae9718], 0 */ W8((u32)(0xae9718u), 0x0u);
L_0086ee74:; BB(0x0086ee74);
    /* 0086ee74: ret  */ FN_RET(0x0086edf8); r_esp += 4; return;
}

void f_0086ee78(void)
{
    FN_ENTER(0x0086ee78);
    /* 0086ee78: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 0086ee7c: call 0x86ee8c */ r_esp -= 4; W32(r_esp, 0x86ee81u); f_0086ee8c();
    /* 0086ee81: mov eax, 1 */ r_eax = 0x1u;
    /* 0086ee86: ret 4 */ FN_RET(0x0086ee78); r_esp += 8; return;
}

void f_0086ee8c(void) /* sub_86EE8C */
{
    FN_ENTER(0x0086ee8c);
    /* 0086ee8c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0086ee8d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086ee8e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0086ee8f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0086ee90: sub esp, 0x78 */ {  u32 a = r_esp; u32 b = 0x78u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0086ee93: mov eax, dword ptr [ecx + 0xb70] */ r_eax = R32((u32)(r_ecx+0xb70u));
    /* 0086ee99: mov edx, dword ptr [ecx + 0xb74] */ r_edx = R32((u32)(r_ecx+0xb74u));
    /* 0086ee9f: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0086eea1: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0086eea4: mov eax, dword ptr [ecx + 0xb78] */ r_eax = R32((u32)(r_ecx+0xb78u));
    /* 0086eeaa: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0086eeae: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0086eeb2: mov eax, dword ptr [ecx + 0xb84] */ r_eax = R32((u32)(r_ecx+0xb84u));
    /* 0086eeb8: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0086eebc: mov eax, dword ptr [ecx + 0xb7c] */ r_eax = R32((u32)(r_ecx+0xb7cu));
    /* 0086eec2: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0086eec6: mov eax, dword ptr [ecx + 0xb80] */ r_eax = R32((u32)(r_ecx+0xb80u));
    /* 0086eecc: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0086eed0: mov eax, dword ptr [ecx + 0xb88] */ r_eax = R32((u32)(r_ecx+0xb88u));
    /* 0086eed6: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0086eeda: mov eax, dword ptr [ecx + 0xb8c] */ r_eax = R32((u32)(r_ecx+0xb8cu));
    /* 0086eee0: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 0086eee4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0086eee6: mov ebx, eax */ r_ebx = r_eax;
L_0086eee8:; BB(0x0086eee8);
    /* 0086eee8: cmp dword ptr [ebp + 0x6fc], 0 */ {  u32 a = R32((u32)(r_ebp+0x6fcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086eeef: jne 0x86ef03 */ if (!fZ) goto L_0086ef03;
L_0086eef1:; BB(0x0086eef1);
    /* 0086eef1: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0086eef4: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0086eef6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0086eef8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0086eef9: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0086eefb: call dword ptr [0x8f82e8] */ { u32 t = R32((u32)(0x8f82e8u)); r_esp -= 4; W32(r_esp, 0x86ef01u); call_ind(t); }
    /* 0086ef01: jmp 0x86ef13 */ goto L_0086ef13;
L_0086ef03:; BB(0x0086ef03);
    /* 0086ef03: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0086ef06: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0086ef08: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0086ef0a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0086ef0b: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0086ef0d: call dword ptr [0x8f82e8] */ { u32 t = R32((u32)(0x8f82e8u)); r_esp -= 4; W32(r_esp, 0x86ef13u); call_ind(t); }
L_0086ef13:; BB(0x0086ef13);
    /* 0086ef13: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086ef15: je 0x86f51d */ if (fZ) goto L_0086f51d;
L_0086ef1b:; BB(0x0086ef1b);
    /* 0086ef1b: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086ef1e: je 0x86f25f */ if (fZ) goto L_0086f25f;
L_0086ef24:; BB(0x0086ef24);
    /* 0086ef24: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086ef27: je 0x86f1a5 */ if (fZ) goto L_0086f1a5;
L_0086ef2d:; BB(0x0086ef2d);
    /* 0086ef2d: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086ef30: je 0x86f12d */ if (fZ) goto L_0086f12d;
L_0086ef36:; BB(0x0086ef36);
    /* 0086ef36: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086ef39: je 0x86f0fb */ if (fZ) goto L_0086f0fb;
L_0086ef3f:; BB(0x0086ef3f);
    /* 0086ef3f: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086ef42: je 0x86f098 */ if (fZ) goto L_0086f098;
L_0086ef48:; BB(0x0086ef48);
    /* 0086ef48: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086ef4b: je 0x86efe6 */ if (fZ) goto L_0086efe6;
L_0086ef51:; BB(0x0086ef51);
    /* 0086ef51: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086ef54: je 0x86efc4 */ if (fZ) goto L_0086efc4;
L_0086ef56:; BB(0x0086ef56);
    /* 0086ef56: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086ef59: je 0x86efc4 */ if (fZ) goto L_0086efc4;
L_0086ef5b:; BB(0x0086ef5b);
    /* 0086ef5b: cmp eax, 0x102 */ {  u32 a = r_eax; u32 b = 0x102u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086ef60: jne 0x86efc9 */ if (!fZ) goto L_0086efc9;
L_0086ef62:; BB(0x0086ef62);
    /* 0086ef62: mov edx, dword ptr [ebp + 0x6fc] */ r_edx = R32((u32)(r_ebp+0x6fcu));
    /* 0086ef68: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086ef6a: je 0x86efc9 */ if (fZ) goto L_0086efc9;
L_0086ef6c:; BB(0x0086ef6c);
    /* 0086ef6c: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086ef6f: je 0x86efc9 */ if (fZ) goto L_0086efc9;
L_0086ef71:; BB(0x0086ef71);
    /* 0086ef71: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086ef74: jne 0x86efc9 */ if (!fZ) goto L_0086efc9;
L_0086ef76:; BB(0x0086ef76);
    /* 0086ef76: cmp dword ptr [ebp + 0xb48], 0 */ {  u32 a = R32((u32)(r_ebp+0xb48u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086ef7d: je 0x86efc9 */ if (fZ) goto L_0086efc9;
L_0086ef7f:; BB(0x0086ef7f);
    /* 0086ef7f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0086ef81: call 0x86f530 */ r_esp -= 4; W32(r_esp, 0x86ef86u); f_0086f530();
    /* 0086ef86: mov esi, dword ptr [ebp + 0xb48] */ r_esi = R32((u32)(r_ebp+0xb48u));
    /* 0086ef8c: mov edi, dword ptr [esi] */ r_edi = R32((u32)(r_esi));
    /* 0086ef8e: lea edx, [esp + 0x20] */ r_edx = (u32)(r_esp+0x20u);
    /* 0086ef92: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0086ef93: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086ef94: call dword ptr [edi + 0x24] */ { u32 t = R32((u32)(r_edi+0x24u)); r_esp -= 4; W32(r_esp, 0x86ef97u); call_ind(t); }
    /* 0086ef97: test dword ptr [esp + 0x20], 1 */ {  u32 a = R32((u32)(r_esp+0x20u)); u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086ef9f: jne 0x86efc9 */ if (!fZ) goto L_0086efc9;
L_0086efa1:; BB(0x0086efa1);
    /* 0086efa1: mov edx, dword ptr [ebp + 0xb18] */ r_edx = R32((u32)(r_ebp+0xb18u));
    /* 0086efa7: dec edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0086efa8: cmp edx, dword ptr [ebp + 0xb20] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xb20u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0086efae: jbe 0x86efc9 */ if ((fC||fZ)) goto L_0086efc9;
L_0086efb0:; BB(0x0086efb0);
    /* 0086efb0: mov esi, dword ptr [ebp + 0xb48] */ r_esi = R32((u32)(r_ebp+0xb48u));
    /* 0086efb6: mov edi, dword ptr [esi] */ r_edi = R32((u32)(r_esi));
    /* 0086efb8: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0086efba: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0086efbc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0086efbd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0086efbe: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086efbf: call dword ptr [edi + 0x30] */ { u32 t = R32((u32)(r_edi+0x30u)); r_esp -= 4; W32(r_esp, 0x86efc2u); call_ind(t); }
    /* 0086efc2: jmp 0x86efc9 */ goto L_0086efc9;
L_0086efc4:; BB(0x0086efc4);
    /* 0086efc4: mov ebx, 1 */ r_ebx = 0x1u;
L_0086efc9:; BB(0x0086efc9);
    /* 0086efc9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0086efcb: call dword ptr [0x8f8174] */ { u32 t = R32((u32)(0x8f8174u)); r_esp -= 4; W32(r_esp, 0x86efd1u); call_ind(t); }
    /* 0086efd1: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086efd3: je 0x86eee8 */ if (fZ) goto L_0086eee8;
L_0086efd9:; BB(0x0086efd9);
    /* 0086efd9: mov eax, 1 */ r_eax = 0x1u;
    /* 0086efde: add esp, 0x78 */ {  u32 a = r_esp; u32 b = 0x78u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0086efe1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0086efe2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0086efe3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0086efe4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0086efe5: ret  */ FN_RET(0x0086ee8c); r_esp += 4; return;
L_0086efe6:; BB(0x0086efe6);
    /* 0086efe6: mov edi, dword ptr [ebp + 0xb48] */ r_edi = R32((u32)(r_ebp+0xb48u));
    /* 0086efec: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086efee: je 0x86efc9 */ if (fZ) goto L_0086efc9;
L_0086eff0:; BB(0x0086eff0);
    /* 0086eff0: mov esi, dword ptr [ebp + 0xb18] */ r_esi = R32((u32)(r_ebp+0xb18u));
    /* 0086eff6: mov eax, dword ptr [ebp + 0xb24] */ r_eax = R32((u32)(r_ebp+0xb24u));
    /* 0086effc: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0086effd: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0086efff: div esi */ { u32 d = r_esi; if (!d) UNSUP(0x0086efff, "divide by zero"); { u64 n = ((u64)r_edx << 32) | r_eax; u64 q = n / d; if (q >> 32) UNSUP(0x0086efff, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0086f001: dec esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0086f002: mov dword ptr [ebp + 0xb24], edx */ W32((u32)(r_ebp+0xb24u), r_edx);
    /* 0086f008: mov edx, dword ptr [ebp + 0xb20] */ r_edx = R32((u32)(r_ebp+0xb20u));
    /* 0086f00e: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0086f00f: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0086f011: jb 0x86f08d */ if (fC) goto L_0086f08d;
L_0086f017:; BB(0x0086f017);
    /* 0086f017: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086f019: je 0x86f082 */ if (fZ) goto L_0086f082;
L_0086f01b:; BB(0x0086f01b);
    /* 0086f01b: mov dword ptr [ebp + 0xb20], edx */ W32((u32)(r_ebp+0xb20u), r_edx);
    /* 0086f021: mov esi, dword ptr [edi] */ r_esi = R32((u32)(r_edi));
    /* 0086f023: lea edx, [esp + 0x24] */ r_edx = (u32)(r_esp+0x24u);
    /* 0086f027: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0086f028: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0086f029: call dword ptr [esi + 0x24] */ { u32 t = R32((u32)(r_esi+0x24u)); r_esp -= 4; W32(r_esp, 0x86f02cu); call_ind(t); }
    /* 0086f02c: test dword ptr [esp + 0x24], 1 */ {  u32 a = R32((u32)(r_esp+0x24u)); u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086f034: jne 0x86f03f */ if (!fZ) goto L_0086f03f;
L_0086f036:; BB(0x0086f036);
    /* 0086f036: mov esi, dword ptr [ebp + 0xb18] */ r_esi = R32((u32)(r_ebp+0xb18u));
    /* 0086f03c: dec esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0086f03d: jmp 0x86f082 */ goto L_0086f082;
L_0086f03f:; BB(0x0086f03f);
    /* 0086f03f: mov edx, dword ptr [ebp + 0xb48] */ r_edx = R32((u32)(r_ebp+0xb48u));
    /* 0086f045: mov esi, dword ptr [edx] */ r_esi = R32((u32)(r_edx));
    /* 0086f047: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0086f048: call dword ptr [esi + 0x48] */ { u32 t = R32((u32)(r_esi+0x48u)); r_esp -= 4; W32(r_esp, 0x86f04bu); call_ind(t); }
    /* 0086f04b: cmp dword ptr [ebp + 0xb08], 0 */ {  u32 a = R32((u32)(r_ebp+0xb08u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086f052: jne 0x86f07b */ if (!fZ) goto L_0086f07b;
L_0086f054:; BB(0x0086f054);
    /* 0086f054: movzx edx, byte ptr [ebp + 0x700] */ r_edx = (u32)R8((u32)(r_ebp+0x700u));
    /* 0086f05b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086f05d: je 0x86f068 */ if (fZ) goto L_0086f068;
L_0086f05f:; BB(0x0086f05f);
    /* 0086f05f: mov esi, dword ptr [ebp + 0xb18] */ r_esi = R32((u32)(r_ebp+0xb18u));
    /* 0086f065: dec esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0086f066: jmp 0x86f082 */ goto L_0086f082;
L_0086f068:; BB(0x0086f068);
    /* 0086f068: mov dword ptr [ebp + 0x6fc], 3 */ W32((u32)(r_ebp+0x6fcu), 0x3u);
    /* 0086f072: mov esi, dword ptr [ebp + 0xb18] */ r_esi = R32((u32)(r_ebp+0xb18u));
    /* 0086f078: dec esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0086f079: jmp 0x86f082 */ goto L_0086f082;
L_0086f07b:; BB(0x0086f07b);
    /* 0086f07b: mov esi, dword ptr [ebp + 0xb18] */ r_esi = R32((u32)(r_ebp+0xb18u));
    /* 0086f081: dec esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
L_0086f082:; BB(0x0086f082);
    /* 0086f082: mov dword ptr [ebp + 0xb20], esi */ W32((u32)(r_ebp+0xb20u), r_esi);
    /* 0086f088: jmp 0x86efc9 */ goto L_0086efc9;
L_0086f08d:; BB(0x0086f08d);
    /* 0086f08d: mov dword ptr [ebp + 0xb20], edx */ W32((u32)(r_ebp+0xb20u), r_edx);
    /* 0086f093: jmp 0x86efc9 */ goto L_0086efc9;
L_0086f098:; BB(0x0086f098);
    /* 0086f098: mov edx, dword ptr [ebp + 0x6fc] */ r_edx = R32((u32)(r_ebp+0x6fcu));
    /* 0086f09e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086f0a0: je 0x86efc9 */ if (fZ) goto L_0086efc9;
L_0086f0a6:; BB(0x0086f0a6);
    /* 0086f0a6: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086f0a9: je 0x86efc9 */ if (fZ) goto L_0086efc9;
L_0086f0af:; BB(0x0086f0af);
    /* 0086f0af: mov edx, dword ptr [ebp + 0xb48] */ r_edx = R32((u32)(r_ebp+0xb48u));
    /* 0086f0b5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086f0b7: je 0x86efc9 */ if (fZ) goto L_0086efc9;
L_0086f0bd:; BB(0x0086f0bd);
    /* 0086f0bd: mov esi, dword ptr [edx] */ r_esi = R32((u32)(r_edx));
    /* 0086f0bf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0086f0c0: call dword ptr [esi + 0x48] */ { u32 t = R32((u32)(r_esi+0x48u)); r_esp -= 4; W32(r_esp, 0x86f0c3u); call_ind(t); }
    /* 0086f0c3: mov edx, dword ptr [ebp + 0xb48] */ r_edx = R32((u32)(r_ebp+0xb48u));
    /* 0086f0c9: mov esi, dword ptr [edx] */ r_esi = R32((u32)(r_edx));
    /* 0086f0cb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0086f0cd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0086f0ce: call dword ptr [esi + 0x34] */ { u32 t = R32((u32)(r_esi+0x34u)); r_esp -= 4; W32(r_esp, 0x86f0d1u); call_ind(t); }
    /* 0086f0d1: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0086f0d3: mov esi, dword ptr [ebp + 0xb18] */ r_esi = R32((u32)(r_ebp+0xb18u));
    /* 0086f0d9: dec esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0086f0da: mov dword ptr [ebp + 0xb24], edx */ W32((u32)(r_ebp+0xb24u), r_edx);
    /* 0086f0e0: mov dword ptr [ebp + 0xb28], edx */ W32((u32)(r_ebp+0xb28u), r_edx);
    /* 0086f0e6: mov dword ptr [ebp + 0xb20], esi */ W32((u32)(r_ebp+0xb20u), r_esi);
    /* 0086f0ec: mov dword ptr [ebp + 0x6fc], 1 */ W32((u32)(r_ebp+0x6fcu), 0x1u);
    /* 0086f0f6: jmp 0x86efc9 */ goto L_0086efc9;
L_0086f0fb:; BB(0x0086f0fb);
    /* 0086f0fb: mov edx, dword ptr [ebp + 0x6fc] */ r_edx = R32((u32)(r_ebp+0x6fcu));
    /* 0086f101: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086f104: jne 0x86efc9 */ if (!fZ) goto L_0086efc9;
L_0086f10a:; BB(0x0086f10a);
    /* 0086f10a: mov edx, dword ptr [ebp + 0xb48] */ r_edx = R32((u32)(r_ebp+0xb48u));
    /* 0086f110: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086f112: je 0x86efc9 */ if (fZ) goto L_0086efc9;
L_0086f118:; BB(0x0086f118);
    /* 0086f118: mov esi, dword ptr [edx] */ r_esi = R32((u32)(r_edx));
    /* 0086f11a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0086f11b: call dword ptr [esi + 0x48] */ { u32 t = R32((u32)(r_esi+0x48u)); r_esp -= 4; W32(r_esp, 0x86f11eu); call_ind(t); }
    /* 0086f11e: mov dword ptr [ebp + 0x6fc], 4 */ W32((u32)(r_ebp+0x6fcu), 0x4u);
    /* 0086f128: jmp 0x86efc9 */ goto L_0086efc9;
L_0086f12d:; BB(0x0086f12d);
    /* 0086f12d: mov edx, dword ptr [ebp + 0x6fc] */ r_edx = R32((u32)(r_ebp+0x6fcu));
    /* 0086f133: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086f136: je 0x86f196 */ if (fZ) goto L_0086f196;
L_0086f138:; BB(0x0086f138);
    /* 0086f138: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086f13a: je 0x86f196 */ if (fZ) goto L_0086f196;
L_0086f13c:; BB(0x0086f13c);
    /* 0086f13c: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086f13f: je 0x86f196 */ if (fZ) goto L_0086f196;
L_0086f141:; BB(0x0086f141);
    /* 0086f141: mov edx, dword ptr [ebp + 0xb08] */ r_edx = R32((u32)(r_ebp+0xb08u));
    /* 0086f147: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086f149: jne 0x86f182 */ if (!fZ) goto L_0086f182;
L_0086f14b:; BB(0x0086f14b);
    /* 0086f14b: mov esi, dword ptr [ebp + 0x6f8] */ r_esi = R32((u32)(r_ebp+0x6f8u));
    /* 0086f151: cmp edx, 0x100 */ {  u32 a = r_edx; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0086f157: jae 0x86f182 */ if (!fC) goto L_0086f182;
L_0086f159:; BB(0x0086f159);
    /* 0086f159: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086f15b: je 0x86f16f */ if (fZ) goto L_0086f16f;
L_0086f15d:; BB(0x0086f15d);
    /* 0086f15d: mov edx, dword ptr [ebp + 0xb10] */ r_edx = R32((u32)(r_ebp+0xb10u));
    /* 0086f163: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0086f164: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 0086f167: mov dword ptr [ebp + 0xb10], edx */ W32((u32)(r_ebp+0xb10u), r_edx);
    /* 0086f16d: jmp 0x86f175 */ goto L_0086f175;
L_0086f16f:; BB(0x0086f16f);
    /* 0086f16f: mov edx, dword ptr [ebp + 0xb10] */ r_edx = R32((u32)(r_ebp+0xb10u));
L_0086f175:; BB(0x0086f175);
    /* 0086f175: mov dword ptr [ebp + edx*4 + 0x708], esi */ W32((u32)(r_ebp+r_edx*4+0x708u), r_esi);
    /* 0086f17c: inc dword ptr [ebp + 0xb08] */ { u32 ad = (u32)(r_ebp+0xb08u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_0086f182:; BB(0x0086f182);
    /* 0086f182: mov edx, dword ptr [ebp + 0xb0c] */ r_edx = R32((u32)(r_ebp+0xb0cu));
    /* 0086f188: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0086f18a: push dword ptr [ebp + edx*4 + 0x708] */ { u32 v = R32((u32)(r_ebp+r_edx*4+0x708u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086f191: call 0x86fe60 */ r_esp -= 4; W32(r_esp, 0x86f196u); f_0086fe60();
L_0086f196:; BB(0x0086f196);
    /* 0086f196: mov dword ptr [ebp + 0x6fc], 2 */ W32((u32)(r_ebp+0x6fcu), 0x2u);
    /* 0086f1a0: jmp 0x86efc9 */ goto L_0086efc9;
L_0086f1a5:; BB(0x0086f1a5);
    /* 0086f1a5: mov dword ptr [ebp + 0x6fc], 0 */ W32((u32)(r_ebp+0x6fcu), 0x0u);
    /* 0086f1af: mov edx, dword ptr [ebp + 0xb50] */ r_edx = R32((u32)(r_ebp+0xb50u));
    /* 0086f1b5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086f1b7: je 0x86f1ca */ if (fZ) goto L_0086f1ca;
L_0086f1b9:; BB(0x0086f1b9);
    /* 0086f1b9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0086f1ba: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x86f1bfu); f_00857e98();
    /* 0086f1bf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0086f1c0: mov dword ptr [ebp + 0xb50], 0 */ W32((u32)(r_ebp+0xb50u), 0x0u);
L_0086f1ca:; BB(0x0086f1ca);
    /* 0086f1ca: mov edx, dword ptr [ebp + 0xb4c] */ r_edx = R32((u32)(r_ebp+0xb4cu));
    /* 0086f1d0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086f1d2: je 0x86f1e4 */ if (fZ) goto L_0086f1e4;
L_0086f1d4:; BB(0x0086f1d4);
    /* 0086f1d4: mov esi, dword ptr [edx] */ r_esi = R32((u32)(r_edx));
    /* 0086f1d6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0086f1d7: call dword ptr [esi + 8] */ { u32 t = R32((u32)(r_esi+0x8u)); r_esp -= 4; W32(r_esp, 0x86f1dau); call_ind(t); }
    /* 0086f1da: mov dword ptr [ebp + 0xb4c], 0 */ W32((u32)(r_ebp+0xb4cu), 0x0u);
L_0086f1e4:; BB(0x0086f1e4);
    /* 0086f1e4: mov edx, dword ptr [ebp + 0xb48] */ r_edx = R32((u32)(r_ebp+0xb48u));
    /* 0086f1ea: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086f1ec: je 0x86f1fe */ if (fZ) goto L_0086f1fe;
L_0086f1ee:; BB(0x0086f1ee);
    /* 0086f1ee: mov esi, dword ptr [edx] */ r_esi = R32((u32)(r_edx));
    /* 0086f1f0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0086f1f1: call dword ptr [esi + 8] */ { u32 t = R32((u32)(r_esi+0x8u)); r_esp -= 4; W32(r_esp, 0x86f1f4u); call_ind(t); }
    /* 0086f1f4: mov dword ptr [ebp + 0xb48], 0 */ W32((u32)(r_ebp+0xb48u), 0x0u);
L_0086f1fe:; BB(0x0086f1fe);
    /* 0086f1fe: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0086f200: call 0x86fb64 */ r_esp -= 4; W32(r_esp, 0x86f205u); f_0086fb64();
    /* 0086f205: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0086f207: lea edi, [ebp + 0xb30] */ r_edi = (u32)(r_ebp+0xb30u);
    /* 0086f20d: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0086f20f: mov dword ptr [ebp + 0xb08], edx */ W32((u32)(r_ebp+0xb08u), r_edx);
    /* 0086f215: mov dword ptr [ebp + 0xb10], edx */ W32((u32)(r_ebp+0xb10u), r_edx);
    /* 0086f21b: mov dword ptr [ebp + 0xb0c], edx */ W32((u32)(r_ebp+0xb0cu), r_edx);
    /* 0086f221: mov dword ptr [ebp + 0x6f0], edx */ W32((u32)(r_ebp+0x6f0u), r_edx);
    /* 0086f227: mov dword ptr [ebp + 0x6f4], edx */ W32((u32)(r_ebp+0x6f4u), r_edx);
    /* 0086f22d: mov dword ptr [ebp + 0xb14], edx */ W32((u32)(r_ebp+0xb14u), r_edx);
    /* 0086f233: mov dword ptr [ebp + 0xb28], edx */ W32((u32)(r_ebp+0xb28u), r_edx);
    /* 0086f239: mov dword ptr [ebp + 0xb18], edx */ W32((u32)(r_ebp+0xb18u), r_edx);
    /* 0086f23f: mov dword ptr [ebp + 0xb1c], edx */ W32((u32)(r_ebp+0xb1cu), r_edx);
    /* 0086f245: mov dword ptr [ebp + 0xb20], edx */ W32((u32)(r_ebp+0xb20u), r_edx);
    /* 0086f24b: mov dword ptr [edi], esi */ W32((u32)(r_edi), r_esi);
    /* 0086f24d: mov dword ptr [edi + 4], esi */ W32((u32)(r_edi+0x4u), r_esi);
    /* 0086f250: mov dword ptr [edi + 8], esi */ W32((u32)(r_edi+0x8u), r_esi);
    /* 0086f253: mov dword ptr [edi + 0xc], esi */ W32((u32)(r_edi+0xcu), r_esi);
    /* 0086f256: mov word ptr [edi + 0x10], si */ W16((u32)(r_edi+0x10u), (u16)r_esi);
    /* 0086f25a: jmp 0x86efc9 */ goto L_0086efc9;
L_0086f25f:; BB(0x0086f25f);
    /* 0086f25f: mov edi, dword ptr [ebp + 0x6f0] */ r_edi = R32((u32)(r_ebp+0x6f0u));
    /* 0086f265: mov esi, dword ptr [ebp + 0x6f4] */ r_esi = R32((u32)(r_ebp+0x6f4u));
    /* 0086f26b: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086f26d: je 0x86efc9 */ if (fZ) goto L_0086efc9;
L_0086f273:; BB(0x0086f273);
    /* 0086f273: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0086f275: call 0x86e9d8 */ r_esp -= 4; W32(r_esp, 0x86f27au); f_0086e9d8();
    /* 0086f27a: mov dword ptr [ebp + 0x6f0], edi */ W32((u32)(r_ebp+0x6f0u), r_edi);
    /* 0086f280: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0086f282: mov dword ptr [ebp + 0x6f4], esi */ W32((u32)(r_ebp+0x6f4u), r_esi);
    /* 0086f288: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086f289: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0086f28a: call 0x86fc5c */ r_esp -= 4; W32(r_esp, 0x86f28fu); f_0086fc5c();
    /* 0086f28f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086f291: jne 0x86f4d3 */ if (!fZ) goto L_0086f4d3;
L_0086f297:; BB(0x0086f297);
    /* 0086f297: lea edx, [esp + 0x28] */ r_edx = (u32)(r_esp+0x28u);
    /* 0086f29b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0086f29d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0086f29e: call 0x86fcfc */ r_esp -= 4; W32(r_esp, 0x86f2a3u); f_0086fcfc();
    /* 0086f2a3: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0086f2a5: mov esi, dword ptr [esp + 0x30] */ r_esi = R32((u32)(r_esp+0x30u));
    /* 0086f2a9: shr esi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 0086f2ac: mov word ptr [esp + 0x38], dx */ W16((u32)(r_esp+0x38u), (u16)r_edx);
    /* 0086f2b1: fild dword ptr [esp + 0x30] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x30u)));
    /* 0086f2b5: fadd dword ptr [esi*4 + 0x99a4f8] */ ST(0) = ST(0) + R_F32((u32)(r_esi*4+0x99a4f8u));
    /* 0086f2bc: fadd st(0) */ ST(0) = ST(0) + ST(0);
    /* 0086f2be: fnstcw word ptr [esp + 0x60] */ W16((u32)(r_esp+0x60u), fcw);
    /* 0086f2c2: movzx eax, word ptr [esp + 0x60] */ r_eax = (u32)R16((u32)(r_esp+0x60u));
    /* 0086f2c7: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0086f2cc: mov dword ptr [esp + 0x68], eax */ W32((u32)(r_esp+0x68u), r_eax);
    /* 0086f2d0: fldcw word ptr [esp + 0x68] */ fcw = R16((u32)(r_esp+0x68u));
    /* 0086f2d4: fistp qword ptr [esp + 0x70] */ W64((u32)(r_esp+0x70u), (u64)fx_int64(ST(0))); FPOP();
    /* 0086f2d8: fldcw word ptr [esp + 0x60] */ fcw = R16((u32)(r_esp+0x60u));
    /* 0086f2dc: mov esi, dword ptr [esp + 0x70] */ r_esi = R32((u32)(r_esp+0x70u));
    /* 0086f2e0: cmp dword ptr [ebp + 0xb44], 0 */ {  u32 a = R32((u32)(r_ebp+0xb44u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086f2e7: je 0x86f4be */ if (fZ) goto L_0086f4be;
L_0086f2ed:; BB(0x0086f2ed);
    /* 0086f2ed: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086f2ef: je 0x86f4be */ if (fZ) goto L_0086f4be;
L_0086f2f5:; BB(0x0086f2f5);
    /* 0086f2f5: lea eax, [ebp + 0xb30] */ r_eax = (u32)(r_ebp+0xb30u);
    /* 0086f2fb: mov edx, dword ptr [esp + 0x28] */ r_edx = R32((u32)(r_esp+0x28u));
    /* 0086f2ff: mov edi, dword ptr [esp + 0x2c] */ r_edi = R32((u32)(r_esp+0x2cu));
    /* 0086f303: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 0086f305: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 0086f309: mov dword ptr [eax + 4], edi */ W32((u32)(r_eax+0x4u), r_edi);
    /* 0086f30c: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 0086f30f: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 0086f313: mov dword ptr [eax + 0xc], edx */ W32((u32)(r_eax+0xcu), r_edx);
    /* 0086f316: movzx edx, word ptr [esp + 0x38] */ r_edx = (u32)R16((u32)(r_esp+0x38u));
    /* 0086f31b: mov word ptr [eax + 0x10], dx */ W16((u32)(r_eax+0x10u), (u16)r_edx);
    /* 0086f31f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0086f321: mov dword ptr [esp + 0x3c], edx */ W32((u32)(r_esp+0x3cu), r_edx);
    /* 0086f325: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
    /* 0086f329: mov dword ptr [esp + 0x44], edx */ W32((u32)(r_esp+0x44u), r_edx);
    /* 0086f32d: mov dword ptr [esp + 0x48], edx */ W32((u32)(r_esp+0x48u), r_edx);
    /* 0086f331: mov dword ptr [esp + 0x4c], edx */ W32((u32)(r_esp+0x4cu), r_edx);
    /* 0086f335: mov dword ptr [esp + 0x50], edx */ W32((u32)(r_esp+0x50u), r_edx);
    /* 0086f339: mov dword ptr [esp + 0x54], edx */ W32((u32)(r_esp+0x54u), r_edx);
    /* 0086f33d: mov dword ptr [esp + 0x58], edx */ W32((u32)(r_esp+0x58u), r_edx);
    /* 0086f341: mov dword ptr [esp + 0x5c], edx */ W32((u32)(r_esp+0x5cu), r_edx);
    /* 0086f345: mov dword ptr [esp + 0x3c], 0x24 */ W32((u32)(r_esp+0x3cu), 0x24u);
    /* 0086f34d: movzx edx, byte ptr [ebp + 0xb90] */ r_edx = (u32)R8((u32)(r_ebp+0xb90u));
    /* 0086f354: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086f356: je 0x86f362 */ if (fZ) goto L_0086f362;
L_0086f358:; BB(0x0086f358);
    /* 0086f358: mov dword ptr [esp + 0x40], 0x18180 */ W32((u32)(r_esp+0x40u), 0x18180u);
    /* 0086f360: jmp 0x86f36a */ goto L_0086f36a;
L_0086f362:; BB(0x0086f362);
    /* 0086f362: mov dword ptr [esp + 0x40], 0x10180 */ W32((u32)(r_esp+0x40u), 0x10180u);
L_0086f36a:; BB(0x0086f36a);
    /* 0086f36a: mov dword ptr [esp + 0x44], esi */ W32((u32)(r_esp+0x44u), r_esi);
    /* 0086f36e: mov edx, dword ptr [0x99f95c] */ r_edx = R32((u32)(0x99f95cu));
    /* 0086f374: mov edi, dword ptr [0x99f960] */ r_edi = R32((u32)(0x99f960u));
    /* 0086f37a: mov dword ptr [esp + 0x4c], eax */ W32((u32)(r_esp+0x4cu), r_eax);
    /* 0086f37e: mov dword ptr [esp + 0x50], edx */ W32((u32)(r_esp+0x50u), r_edx);
    /* 0086f382: mov dword ptr [esp + 0x54], edi */ W32((u32)(r_esp+0x54u), r_edi);
    /* 0086f386: mov edx, dword ptr [0x99f964] */ r_edx = R32((u32)(0x99f964u));
    /* 0086f38c: mov dword ptr [esp + 0x58], edx */ W32((u32)(r_esp+0x58u), r_edx);
    /* 0086f390: mov edx, dword ptr [0x99f968] */ r_edx = R32((u32)(0x99f968u));
    /* 0086f396: mov dword ptr [esp + 0x5c], edx */ W32((u32)(r_esp+0x5cu), r_edx);
    /* 0086f39a: movzx edx, byte ptr [ebp + 0xb42] */ r_edx = (u32)R8((u32)(r_ebp+0xb42u));
    /* 0086f3a1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086f3a3: je 0x86f3b0 */ if (fZ) goto L_0086f3b0;
L_0086f3a5:; BB(0x0086f3a5);
    /* 0086f3a5: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 0086f3a9: or edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0086f3ac: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
L_0086f3b0:; BB(0x0086f3b0);
    /* 0086f3b0: mov eax, dword ptr [ebp + 0xb44] */ r_eax = R32((u32)(r_ebp+0xb44u));
    /* 0086f3b6: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0086f3b8: lea edi, [esp + 0x3c] */ r_edi = (u32)(r_esp+0x3cu);
    /* 0086f3bc: lea edx, [ebp + 0xb48] */ r_edx = (u32)(r_ebp+0xb48u);
    /* 0086f3c2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0086f3c4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0086f3c5: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0086f3c6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086f3c7: call dword ptr [ecx + 0xc] */ { u32 t = R32((u32)(r_ecx+0xcu)); r_esp -= 4; W32(r_esp, 0x86f3cau); call_ind(t); }
    /* 0086f3ca: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0086f3cc: jl 0x86f507 */ if ((fS!=fO)) goto L_0086f507;
L_0086f3d2:; BB(0x0086f3d2);
    /* 0086f3d2: mov dword ptr [ebp + 0xb14], esi */ W32((u32)(r_ebp+0xb14u), r_esi);
    /* 0086f3d8: shr esi, 3 */ { u32 c = (3u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 0086f3db: lea edx, [ebp + 0xb4c] */ r_edx = (u32)(r_ebp+0xb4cu);
    /* 0086f3e1: mov dword ptr [ebp + 0xb18], 8 */ W32((u32)(r_ebp+0xb18u), 0x8u);
    /* 0086f3eb: mov dword ptr [ebp + 0xb1c], esi */ W32((u32)(r_ebp+0xb1cu), r_esi);
    /* 0086f3f1: mov dword ptr [ebp + 0xb20], 7 */ W32((u32)(r_ebp+0xb20u), 0x7u);
    /* 0086f3fb: mov esi, dword ptr [ebp + 0xb48] */ r_esi = R32((u32)(r_ebp+0xb48u));
    /* 0086f401: mov edi, dword ptr [esi] */ r_edi = R32((u32)(r_esi));
    /* 0086f403: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0086f404: push 0x99f83c */ { u32 v = 0x99f83cu; r_esp -= 4; W32(r_esp, v); }
    /* 0086f409: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086f40a: call dword ptr [edi] */ { u32 t = R32((u32)(r_edi)); r_esp -= 4; W32(r_esp, 0x86f40cu); call_ind(t); }
    /* 0086f40c: cmp dword ptr [ebp + 0xb4c], 0 */ {  u32 a = R32((u32)(r_ebp+0xb4cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086f413: je 0x86f4fc */ if (fZ) goto L_0086f4fc;
L_0086f419:; BB(0x0086f419);
    /* 0086f419: mov edx, dword ptr [ebp + 0xb18] */ r_edx = R32((u32)(r_ebp+0xb18u));
    /* 0086f41f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0086f421: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0086f423: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0086f425: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0086f426: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x86f42bu); f_008581c5();
    /* 0086f42b: mov esi, eax */ r_esi = r_eax;
    /* 0086f42d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0086f430: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086f432: je 0x86f4f1 */ if (fZ) goto L_0086f4f1;
L_0086f438:; BB(0x0086f438);
    /* 0086f438: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0086f43a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0086f43c: mov eax, dword ptr [ebp + 0xb18] */ r_eax = R32((u32)(r_ebp+0xb18u));
    /* 0086f442: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 0086f444: jbe 0x86f467 */ if ((fC||fZ)) goto L_0086f467;
L_0086f446:; BB(0x0086f446);
    /* 0086f446: add edi, dword ptr [ebp + 0xb1c] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebp+0xb1cu)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0086f44c: lea eax, [edi - 1] */ r_eax = (u32)(r_edi+0xffffffffu);
    /* 0086f44f: mov dword ptr [esi + edx*8], eax */ W32((u32)(r_esi+r_edx*8), r_eax);
    /* 0086f452: mov eax, dword ptr [ebp + 0xb88] */ r_eax = R32((u32)(r_ebp+0xb88u));
    /* 0086f458: mov dword ptr [esi + edx*8 + 4], eax */ W32((u32)(r_esi+r_edx*8+0x4u), r_eax);
    /* 0086f45c: mov eax, dword ptr [ebp + 0xb18] */ r_eax = R32((u32)(r_ebp+0xb18u));
    /* 0086f462: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0086f463: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0086f465: jb 0x86f446 */ if (fC) goto L_0086f446;
L_0086f467:; BB(0x0086f467);
    /* 0086f467: mov edx, dword ptr [ebp + 0xb4c] */ r_edx = R32((u32)(r_ebp+0xb4cu));
    /* 0086f46d: mov edi, dword ptr [edx] */ r_edi = R32((u32)(r_edx));
    /* 0086f46f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086f470: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086f471: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0086f472: call dword ptr [edi + 0xc] */ { u32 t = R32((u32)(r_edi+0xcu)); r_esp -= 4; W32(r_esp, 0x86f475u); call_ind(t); }
    /* 0086f475: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0086f477: jl 0x86f4df */ if ((fS!=fO)) goto L_0086f4df;
L_0086f479:; BB(0x0086f479);
    /* 0086f479: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086f47a: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x86f47fu); f_00857e98();
    /* 0086f47f: push dword ptr [ebp + 0xb1c] */ { u32 v = R32((u32)(r_ebp+0xb1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0086f485: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x86f48au); f_008581c5();
    /* 0086f48a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0086f48d: mov dword ptr [ebp + 0xb50], eax */ W32((u32)(r_ebp+0xb50u), r_eax);
    /* 0086f493: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086f495: je 0x86f512 */ if (fZ) goto L_0086f512;
L_0086f49b:; BB(0x0086f49b);
    /* 0086f49b: mov edx, dword ptr [ebp + 0xb48] */ r_edx = R32((u32)(r_ebp+0xb48u));
    /* 0086f4a1: mov esi, dword ptr [edx] */ r_esi = R32((u32)(r_edx));
    /* 0086f4a3: push dword ptr [ebp + 0xb2c] */ { u32 v = R32((u32)(r_ebp+0xb2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0086f4a9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0086f4aa: call dword ptr [esi + 0x3c] */ { u32 t = R32((u32)(r_esi+0x3cu)); r_esp -= 4; W32(r_esp, 0x86f4adu); call_ind(t); }
    /* 0086f4ad: mov dword ptr [ebp + 0x6fc], 1 */ W32((u32)(r_ebp+0x6fcu), 0x1u);
    /* 0086f4b7: mov edx, 1 */ r_edx = 0x1u;
    /* 0086f4bc: jmp 0x86f4c0 */ goto L_0086f4c0;
L_0086f4be:; BB(0x0086f4be);
    /* 0086f4be: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_0086f4c0:; BB(0x0086f4c0);
    /* 0086f4c0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086f4c2: je 0x86f4d3 */ if (fZ) goto L_0086f4d3;
L_0086f4c4:; BB(0x0086f4c4);
    /* 0086f4c4: mov dword ptr [ebp + 0x6fc], 1 */ W32((u32)(r_ebp+0x6fcu), 0x1u);
    /* 0086f4ce: jmp 0x86efc9 */ goto L_0086efc9;
L_0086f4d3:; BB(0x0086f4d3);
    /* 0086f4d3: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0086f4d5: call 0x86e9d8 */ r_esp -= 4; W32(r_esp, 0x86f4dau); f_0086e9d8();
    /* 0086f4da: jmp 0x86efc9 */ goto L_0086efc9;
L_0086f4df:; BB(0x0086f4df);
    /* 0086f4df: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086f4e0: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x86f4e5u); f_00857e98();
    /* 0086f4e5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0086f4e6: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0086f4e8: call 0x86e9d8 */ r_esp -= 4; W32(r_esp, 0x86f4edu); f_0086e9d8();
    /* 0086f4ed: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0086f4ef: jmp 0x86f4c0 */ goto L_0086f4c0;
L_0086f4f1:; BB(0x0086f4f1);
    /* 0086f4f1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0086f4f3: call 0x86e9d8 */ r_esp -= 4; W32(r_esp, 0x86f4f8u); f_0086e9d8();
    /* 0086f4f8: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0086f4fa: jmp 0x86f4c0 */ goto L_0086f4c0;
L_0086f4fc:; BB(0x0086f4fc);
    /* 0086f4fc: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0086f4fe: call 0x86e9d8 */ r_esp -= 4; W32(r_esp, 0x86f503u); f_0086e9d8();
    /* 0086f503: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0086f505: jmp 0x86f4c0 */ goto L_0086f4c0;
L_0086f507:; BB(0x0086f507);
    /* 0086f507: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0086f509: call 0x86e9d8 */ r_esp -= 4; W32(r_esp, 0x86f50eu); f_0086e9d8();
    /* 0086f50e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0086f510: jmp 0x86f4c0 */ goto L_0086f4c0;
L_0086f512:; BB(0x0086f512);
    /* 0086f512: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0086f514: call 0x86e9d8 */ r_esp -= 4; W32(r_esp, 0x86f519u); f_0086e9d8();
    /* 0086f519: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0086f51b: jmp 0x86f4c0 */ goto L_0086f4c0;
L_0086f51d:; BB(0x0086f51d);
    /* 0086f51d: lea edx, [ebp + 0x2f0] */ r_edx = (u32)(r_ebp+0x2f0u);
    /* 0086f523: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0086f525: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0086f526: call 0x86f768 */ r_esp -= 4; W32(r_esp, 0x86f52bu); f_0086f768();
    /* 0086f52b: jmp 0x86efc9 */ goto L_0086efc9;
}

