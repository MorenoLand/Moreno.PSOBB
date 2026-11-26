#include "protos.h"

void f_0085b11e(void) /* __aligned_offset_malloc */
{
    FN_ENTER(0x0085b11e);
    /* 0085b11e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0085b122: lea ecx, [eax - 1] */ r_ecx = (u32)(r_eax+0xffffffffu);
    /* 0085b125: test eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085b127: je 0x85b137 */ if (fZ) goto L_0085b137;
L_0085b129:; BB(0x0085b129);
    /* 0085b129: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x85b12eu); f_00859dd6();
    /* 0085b12e: mov dword ptr [eax], 0x16 */ W32((u32)(r_eax), 0x16u);
    /* 0085b134: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0085b136: ret  */ FN_RET(0x0085b11e); r_esp += 4; return;
L_0085b137:; BB(0x0085b137);
    /* 0085b137: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 0085b13b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0085b13c: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 0085b140: cmp ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0085b142: jb 0x85b157 */ if (fC) goto L_0085b157;
L_0085b144:; BB(0x0085b144);
    /* 0085b144: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085b146: je 0x85b157 */ if (fZ) goto L_0085b157;
L_0085b148:; BB(0x0085b148);
    /* 0085b148: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x85b14du); f_00859dd6();
    /* 0085b14d: mov dword ptr [eax], 0x16 */ W32((u32)(r_eax), 0x16u);
    /* 0085b153: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0085b155: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085b156: ret  */ FN_RET(0x0085b11e); r_esp += 4; return;
L_0085b157:; BB(0x0085b157);
    /* 0085b157: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0085b15a: ja 0x85b15f */ if ((!fC&&!fZ)) goto L_0085b15f;
L_0085b15c:; BB(0x0085b15c);
    /* 0085b15c: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0085b15e: pop eax */ { u32 v = R32(r_esp); r_esp += 4; r_eax = v; }
L_0085b15f:; BB(0x0085b15f);
    /* 0085b15f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085b160: mov esi, ebx */ r_esi = r_ebx;
    /* 0085b162: neg esi */ { u32 x = r_esi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0085b164: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0085b165: lea edi, [eax - 1] */ r_edi = (u32)(r_eax+0xffffffffu);
    /* 0085b168: and esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0085b16b: lea eax, [esi + ecx] */ r_eax = (u32)(r_esi+r_ecx);
    /* 0085b16e: lea eax, [eax + edi + 4] */ r_eax = (u32)(r_eax+r_edi+0x4u);
    /* 0085b172: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085b173: call 0x859c55 */ r_esp -= 4; W32(r_esp, 0x85b178u); f_00859c55();
    /* 0085b178: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085b179: mov ecx, eax */ r_ecx = r_eax;
    /* 0085b17b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0085b17d: je 0x85b195 */ if (fZ) goto L_0085b195;
L_0085b17f:; BB(0x0085b17f);
    /* 0085b17f: lea eax, [ecx + esi] */ r_eax = (u32)(r_ecx+r_esi);
    /* 0085b182: add eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0085b184: lea eax, [eax + ebx + 4] */ r_eax = (u32)(r_eax+r_ebx+0x4u);
    /* 0085b188: not edi */ r_edi = ~r_edi;
    /* 0085b18a: and eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0085b18c: sub eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0085b18e: mov edx, eax */ r_edx = r_eax;
    /* 0085b190: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0085b192: mov dword ptr [edx - 4], ecx */ W32((u32)(r_edx+0xfffffffcu), r_ecx);
L_0085b195:; BB(0x0085b195);
    /* 0085b195: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0085b196: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0085b197: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085b198: ret  */ FN_RET(0x0085b11e); r_esp += 4; return;
}

void f_0085b199(void) /* __aligned_free */
{
    FN_ENTER(0x0085b199);
    /* 0085b199: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0085b19d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0085b19f: je 0x85b1ad */ if (fZ) goto L_0085b1ad;
L_0085b1a1:; BB(0x0085b1a1);
    /* 0085b1a1: and eax, 0xfffffffc */ {  u32 a = r_eax; u32 b = 0xfffffffcu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0085b1a4: push dword ptr [eax - 4] */ { u32 v = R32((u32)(r_eax+0xfffffffcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0085b1a7: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x85b1acu); f_00858882();
    /* 0085b1ac: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0085b1ad:; BB(0x0085b1ad);
    /* 0085b1ad: ret  */ FN_RET(0x0085b199); r_esp += 4; return;
}

void f_0085b1ae(void) /* __aligned_malloc */
{
    FN_ENTER(0x0085b1ae);
    /* 0085b1ae: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0085b1b0: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0085b1b4: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0085b1b8: call 0x85b11e */ r_esp -= 4; W32(r_esp, 0x85b1bdu); f_0085b11e();
    /* 0085b1bd: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0085b1c0: ret  */ FN_RET(0x0085b1ae); r_esp += 4; return;
}

void f_0085b1c1(void) /* __aligned_offset_realloc */
{
    FN_ENTER(0x0085b1c1);
    /* 0085b1c1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0085b1c2: mov ebp, esp */ r_ebp = r_esp;
    /* 0085b1c4: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0085b1c7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0085b1c9: cmp dword ptr [ebp + 8], eax */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085b1cc: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0085b1cf: jne 0x85b1e4 */ if (!fZ) goto L_0085b1e4;
L_0085b1d1:; BB(0x0085b1d1);
    /* 0085b1d1: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085b1d4: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085b1d7: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0085b1da: call 0x85b11e */ r_esp -= 4; W32(r_esp, 0x85b1dfu); f_0085b11e();
    /* 0085b1df: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0085b1e2: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 0085b1e3: ret  */ FN_RET(0x0085b1c1); r_esp += 4; return;
L_0085b1e4:; BB(0x0085b1e4);
    /* 0085b1e4: cmp dword ptr [ebp + 0xc], eax */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085b1e7: jne 0x85b1f6 */ if (!fZ) goto L_0085b1f6;
L_0085b1e9:; BB(0x0085b1e9);
    /* 0085b1e9: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085b1ec: call 0x85b199 */ r_esp -= 4; W32(r_esp, 0x85b1f1u); f_0085b199();
    /* 0085b1f1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085b1f2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0085b1f4: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 0085b1f5: ret  */ FN_RET(0x0085b1c1); r_esp += 4; return;
L_0085b1f6:; BB(0x0085b1f6);
    /* 0085b1f6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085b1f7: mov esi, dword ptr [ebp + 0x14] */ r_esi = R32((u32)(r_ebp+0x14u));
    /* 0085b1fa: cmp esi, dword ptr [ebp + 0xc] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0085b1fd: jb 0x85b215 */ if (fC) goto L_0085b215;
L_0085b1ff:; BB(0x0085b1ff);
    /* 0085b1ff: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085b201: je 0x85b215 */ if (fZ) goto L_0085b215;
L_0085b203:; BB(0x0085b203);
    /* 0085b203: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x85b208u); f_00859dd6();
    /* 0085b208: mov dword ptr [eax], 0x16 */ W32((u32)(r_eax), 0x16u);
    /* 0085b20e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0085b210: jmp 0x85b30f */ goto L_0085b30f;
L_0085b215:; BB(0x0085b215);
    /* 0085b215: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0085b218: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0085b219: and eax, 0xfffffffc */ {  u32 a = r_eax; u32 b = 0xfffffffcu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0085b21c: mov ebx, dword ptr [eax - 4] */ r_ebx = R32((u32)(r_eax+0xfffffffcu));
    /* 0085b21f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0085b220: mov edi, dword ptr [ebp + 0x10] */ r_edi = R32((u32)(r_ebp+0x10u));
    /* 0085b223: lea eax, [edi - 1] */ r_eax = (u32)(r_edi+0xffffffffu);
    /* 0085b226: test edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085b228: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0085b22b: je 0x85b23a */ if (fZ) goto L_0085b23a;
L_0085b22d:; BB(0x0085b22d);
    /* 0085b22d: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x85b232u); f_00859dd6();
    /* 0085b232: mov dword ptr [eax], 0x16 */ W32((u32)(r_eax), 0x16u);
    /* 0085b238: jmp 0x85b2a1 */ goto L_0085b2a1;
L_0085b23a:; BB(0x0085b23a);
    /* 0085b23a: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0085b23d: ja 0x85b242 */ if ((!fC&&!fZ)) goto L_0085b242;
L_0085b23f:; BB(0x0085b23f);
    /* 0085b23f: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0085b241: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
L_0085b242:; BB(0x0085b242);
    /* 0085b242: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0085b245: sub eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0085b247: neg esi */ { u32 x = r_esi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0085b249: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0085b24a: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0085b24b: and esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0085b24e: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0085b251: call 0x861119 */ r_esp -= 4; W32(r_esp, 0x85b256u); f_00861119();
    /* 0085b256: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085b257: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0085b259: sub ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0085b25c: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0085b25e: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0085b261: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0085b263: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0085b266: jbe 0x85b26b */ if ((fC||fZ)) goto L_0085b26b;
L_0085b268:; BB(0x0085b268);
    /* 0085b268: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
L_0085b26b:; BB(0x0085b26b);
    /* 0085b26b: lea eax, [esi + ecx] */ r_eax = (u32)(r_esi+r_ecx);
    /* 0085b26e: lea ecx, [esi + ebx] */ r_ecx = (u32)(r_esi+r_ebx);
    /* 0085b271: lea eax, [eax + edi + 4] */ r_eax = (u32)(r_eax+r_edi+0x4u);
    /* 0085b275: lea ecx, [ecx + edi + 4] */ r_ecx = (u32)(r_ecx+r_edi+0x4u);
    /* 0085b279: cmp ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0085b27c: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0085b27f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085b280: jb 0x85b294 */ if (fC) goto L_0085b294;
L_0085b282:; BB(0x0085b282);
    /* 0085b282: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0085b283: call 0x865448 */ r_esp -= 4; W32(r_esp, 0x85b288u); f_00865448();
    /* 0085b288: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085b28a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085b28b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085b28c: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0085b28f: jne 0x85b2ae */ if (!fZ) goto L_0085b2ae;
L_0085b291:; BB(0x0085b291);
    /* 0085b291: push dword ptr [ebp - 0x18] */ { u32 v = R32((u32)(r_ebp+0xffffffe8u)); r_esp -= 4; W32(r_esp, v); }
L_0085b294:; BB(0x0085b294);
    /* 0085b294: call 0x859c55 */ r_esp -= 4; W32(r_esp, 0x85b299u); f_00859c55();
    /* 0085b299: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085b29b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085b29c: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0085b29f: jne 0x85b2a5 */ if (!fZ) goto L_0085b2a5;
L_0085b2a1:; BB(0x0085b2a1);
    /* 0085b2a1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0085b2a3: jmp 0x85b30d */ goto L_0085b30d;
L_0085b2a5:; BB(0x0085b2a5);
    /* 0085b2a5: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 0085b2ac: jmp 0x85b2b1 */ goto L_0085b2b1;
L_0085b2ae:; BB(0x0085b2ae);
    /* 0085b2ae: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_0085b2b1:; BB(0x0085b2b1);
    /* 0085b2b1: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0085b2b4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0085b2b7: mov edx, eax */ r_edx = r_eax;
    /* 0085b2b9: sub edx, dword ptr [ebp - 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0085b2bc: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085b2be: jne 0x85b2ce */ if (!fZ) goto L_0085b2ce;
L_0085b2c0:; BB(0x0085b2c0);
    /* 0085b2c0: lea edx, [esi + eax] */ r_edx = (u32)(r_esi+r_eax);
    /* 0085b2c3: add edx, dword ptr [ebp + 0x14] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x14u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0085b2c6: mov ebx, edi */ r_ebx = r_edi;
    /* 0085b2c8: not ebx */ r_ebx = ~r_ebx;
    /* 0085b2ca: test ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0085b2cc: je 0x85b30d */ if (fZ) goto L_0085b30d;
L_0085b2ce:; BB(0x0085b2ce);
    /* 0085b2ce: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0085b2d1: push dword ptr [ebp - 0xc] */ { u32 v = R32((u32)(r_ebp+0xfffffff4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085b2d4: add ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0085b2d6: add ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0085b2d8: lea ebx, [ecx + eax + 4] */ r_ebx = (u32)(r_ecx+r_eax+0x4u);
    /* 0085b2dc: not edi */ r_edi = ~r_edi;
    /* 0085b2de: and ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 0085b2e0: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 0085b2e3: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0085b2e5: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0085b2e8: add eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0085b2ea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085b2eb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0085b2ec: call 0x858c80 */ r_esp -= 4; W32(r_esp, 0x85b2f1u); f_00858c80();
    /* 0085b2f1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0085b2f4: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085b2f8: je 0x85b301 */ if (fZ) goto L_0085b301;
L_0085b2fa:; BB(0x0085b2fa);
    /* 0085b2fa: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0085b2fb: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x85b300u); f_00858882();
    /* 0085b300: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0085b301:; BB(0x0085b301);
    /* 0085b301: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0085b304: mov eax, ebx */ r_eax = r_ebx;
    /* 0085b306: sub eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0085b308: mov dword ptr [eax - 4], ecx */ W32((u32)(r_eax+0xfffffffcu), r_ecx);
    /* 0085b30b: mov eax, ebx */ r_eax = r_ebx;
L_0085b30d:; BB(0x0085b30d);
    /* 0085b30d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0085b30e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
L_0085b30f:; BB(0x0085b30f);
    /* 0085b30f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0085b310: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 0085b311: ret  */ FN_RET(0x0085b1c1); r_esp += 4; return;
}

void f_0085b312(void) /* __aligned_realloc */
{
    FN_ENTER(0x0085b312);
    /* 0085b312: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0085b314: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085b318: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085b31c: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085b320: call 0x85b1c1 */ r_esp -= 4; W32(r_esp, 0x85b325u); f_0085b1c1();
    /* 0085b325: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0085b328: ret  */ FN_RET(0x0085b312); r_esp += 4; return;
}

