#include "protos.h"

void f_0079e0a0(void) /* sub_79E0A0 */
{
    FN_ENTER(0x0079e0a0);
    /* 0079e0a0: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0079e0a4: mov eax, dword ptr [0xaab218] */ r_eax = R32((u32)(0xaab218u));
    /* 0079e0a9: cmp eax, 0x21 */ {  u32 a = r_eax; u32 b = 0x21u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079e0ac: je 0x79e0fe */ if (fZ) goto L_0079e0fe;
L_0079e0ae:; BB(0x0079e0ae);
    /* 0079e0ae: cmp eax, 0x25 */ {  u32 a = r_eax; u32 b = 0x25u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079e0b1: jne 0x79e0d6 */ if (!fZ) goto L_0079e0d6;
L_0079e0b3:; BB(0x0079e0b3);
    /* 0079e0b3: cmp edx, 7 */ {  u32 a = r_edx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0079e0b6: ja 0x79e11f */ if ((!fC&&!fZ)) goto L_0079e11f;
L_0079e0b8:; BB(0x0079e0b8);
    /* 0079e0b8: mov eax, dword ptr [edx*4 + 0x97cd00] */ r_eax = R32((u32)(r_edx*4+0x97cd00u));
    /* 0079e0bf: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0079e0d6:; BB(0x0079e0d6);
    /* 0079e0d6: cmp eax, 0x26 */ {  u32 a = r_eax; u32 b = 0x26u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079e0d9: jne 0x79e0f8 */ if (!fZ) goto L_0079e0f8;
L_0079e0db:; BB(0x0079e0db);
    /* 0079e0db: cmp edx, 7 */ {  u32 a = r_edx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0079e0de: ja 0x79e11f */ if ((!fC&&!fZ)) goto L_0079e11f;
L_0079e0e0:; BB(0x0079e0e0);
    /* 0079e0e0: mov eax, dword ptr [edx*4 + 0x97cd20] */ r_eax = R32((u32)(r_edx*4+0x97cd20u));
    /* 0079e0e7: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0079e0f8:; BB(0x0079e0f8);
    /* 0079e0f8: call 0x79a050 */ r_esp -= 4; W32(r_esp, 0x79e0fdu); f_0079a050();
    /* 0079e0fd: ret  */ FN_RET(0x0079e0a0); r_esp += 4; return;
L_0079e0fe:; BB(0x0079e0fe);
    /* 0079e0fe: cmp edx, 7 */ {  u32 a = r_edx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0079e101: ja 0x79e11f */ if ((!fC&&!fZ)) goto L_0079e11f;
L_0079e103:; BB(0x0079e103);
    /* 0079e103: mov eax, dword ptr [edx*4 + 0x97cce0] */ r_eax = R32((u32)(r_edx*4+0x97cce0u));
    /* 0079e10a: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0079e11f:; BB(0x0079e11f);
    /* 0079e11f: ret  */ FN_RET(0x0079e0a0); r_esp += 4; return;
}

void f_0079e0c1(void)
{
    FN_ENTER(0x0079e0c1);
    /* 0079e0c1: call 0x79e358 */ r_esp -= 4; W32(r_esp, 0x79e0c6u); f_0079e358();
    /* 0079e0c6: jmp 0x79e11f */ goto L_0079e11f;
L_0079e11f:; BB(0x0079e11f);
    /* 0079e11f: ret  */ FN_RET(0x0079e0c1); r_esp += 4; return;
}

void f_0079e0c8(void)
{
    FN_ENTER(0x0079e0c8);
    /* 0079e0c8: call 0x7a081c */ r_esp -= 4; W32(r_esp, 0x79e0cdu); f_007a081c();
    /* 0079e0cd: jmp 0x79e11f */ goto L_0079e11f;
L_0079e11f:; BB(0x0079e11f);
    /* 0079e11f: ret  */ FN_RET(0x0079e0c8); r_esp += 4; return;
}

void f_0079e0cf(void)
{
    FN_ENTER(0x0079e0cf);
    /* 0079e0cf: call 0x79e248 */ r_esp -= 4; W32(r_esp, 0x79e0d4u); f_0079e248();
    /* 0079e0d4: jmp 0x79e11f */ goto L_0079e11f;
L_0079e11f:; BB(0x0079e11f);
    /* 0079e11f: ret  */ FN_RET(0x0079e0cf); r_esp += 4; return;
}

void f_0079e0e9(void)
{
    FN_ENTER(0x0079e0e9);
    /* 0079e0e9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0079e0ea: call 0x7a0910 */ r_esp -= 4; W32(r_esp, 0x79e0efu); f_007a0910();
    /* 0079e0ef: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079e0f0: ret  */ FN_RET(0x0079e0e9); r_esp += 4; return;
}

void f_0079e0f1(void)
{
    FN_ENTER(0x0079e0f1);
    /* 0079e0f1: call 0x79e120 */ r_esp -= 4; W32(r_esp, 0x79e0f6u); f_0079e120();
    /* 0079e0f6: jmp 0x79e11f */ goto L_0079e11f;
L_0079e11f:; BB(0x0079e11f);
    /* 0079e11f: ret  */ FN_RET(0x0079e0f1); r_esp += 4; return;
}

void f_0079e10c(void)
{
    FN_ENTER(0x0079e10c);
    /* 0079e10c: call 0x79e358 */ r_esp -= 4; W32(r_esp, 0x79e111u); f_0079e358();
    /* 0079e111: jmp 0x79e11f */ goto L_0079e11f;
L_0079e11f:; BB(0x0079e11f);
    /* 0079e11f: ret  */ FN_RET(0x0079e10c); r_esp += 4; return;
}

void f_0079e113(void)
{
    FN_ENTER(0x0079e113);
    /* 0079e113: call 0x7a081c */ r_esp -= 4; W32(r_esp, 0x79e118u); f_007a081c();
    /* 0079e118: jmp 0x79e11f */ goto L_0079e11f;
L_0079e11f:; BB(0x0079e11f);
    /* 0079e11f: ret  */ FN_RET(0x0079e113); r_esp += 4; return;
}

void f_0079e11a(void)
{
    FN_ENTER(0x0079e11a);
    /* 0079e11a: call 0x79e474 */ r_esp -= 4; W32(r_esp, 0x79e11fu); f_0079e474();
    /* 0079e11f: ret  */ FN_RET(0x0079e11a); r_esp += 4; return;
}

void f_0079e120(void) /* sub_79E120 */
{
    FN_ENTER(0x0079e120);
    /* 0079e120: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0079e121: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0079e122: sub esp, 0x200 */ {  u32 a = r_esp; u32 b = 0x200u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0079e128: mov eax, dword ptr [0xaab270] */ r_eax = R32((u32)(0xaab270u));
    /* 0079e12d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079e12f: je 0x79e21b */ if (fZ) goto L_0079e21b;
L_0079e135:; BB(0x0079e135);
    /* 0079e135: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079e137: je 0x79e177 */ if (fZ) goto L_0079e177;
L_0079e139:; BB(0x0079e139);
    /* 0079e139: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0079e13c: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 0079e141: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0079e143: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079e144: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x79e149u); f_0086b688();
    /* 0079e149: push 0x98 */ { u32 v = 0x98u; r_esp -= 4; W32(r_esp, v); }
    /* 0079e14e: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x79e153u); f_00793168();
    /* 0079e153: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 0079e157: push 0xa9f960 */ { u32 v = 0xa9f960u; r_esp -= 4; W32(r_esp, v); }
    /* 0079e15c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079e15d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0079e15e: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x79e163u); f_00857e29();
    /* 0079e163: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079e166: mov ecx, dword ptr [0xaab270] */ r_ecx = R32((u32)(0xaab270u));
    /* 0079e16c: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0079e16f: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0079e171: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079e172: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x79e177u); f_0073ae38();
L_0079e177:; BB(0x0079e177);
    /* 0079e177: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0079e17d: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x79e182u); f_0068d5a8();
    /* 0079e182: mov edi, eax */ r_edi = r_eax;
    /* 0079e184: lea edx, [esp + 0x104] */ r_edx = (u32)(r_esp+0x104u);
    /* 0079e18b: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 0079e190: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0079e192: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0079e193: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x79e198u); f_0086b688();
    /* 0079e198: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079e19b: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079e19d: je 0x79e1f4 */ if (fZ) goto L_0079e1f4;
L_0079e19f:; BB(0x0079e19f);
    /* 0079e19f: push 0x99 */ { u32 v = 0x99u; r_esp -= 4; W32(r_esp, v); }
    /* 0079e1a4: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x79e1a9u); f_00793168();
    /* 0079e1a9: mov ebp, eax */ r_ebp = r_eax;
    /* 0079e1ab: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079e1ae: mov ecx, edi */ r_ecx = r_edi;
    /* 0079e1b0: call 0x6936b4 */ r_esp -= 4; W32(r_esp, 0x79e1b5u); f_006936b4();
    /* 0079e1b5: lea edx, [esp + 0x100] */ r_edx = (u32)(r_esp+0x100u);
    /* 0079e1bc: push 0xa9f960 */ { u32 v = 0xa9f960u; r_esp -= 4; W32(r_esp, v); }
    /* 0079e1c1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079e1c2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0079e1c3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0079e1c4: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x79e1c9u); f_00857e29();
    /* 0079e1c9: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0079e1cc:; BB(0x0079e1cc);
    /* 0079e1cc: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 0079e1d2: lea eax, [esp + 0x100] */ r_eax = (u32)(r_esp+0x100u);
    /* 0079e1d9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0079e1db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079e1dc: call 0x7f32ac */ r_esp -= 4; W32(r_esp, 0x79e1e1u); f_007f32ac();
    /* 0079e1e1: mov dword ptr [0xaab218], 0x54 */ W32((u32)(0xaab218u), 0x54u);
    /* 0079e1eb: add esp, 0x200 */ {  u32 a = r_esp; u32 b = 0x200u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0079e1f1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0079e1f2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0079e1f3: ret  */ FN_RET(0x0079e120); r_esp += 4; return;
L_0079e1f4:; BB(0x0079e1f4);
    /* 0079e1f4: push 0x99 */ { u32 v = 0x99u; r_esp -= 4; W32(r_esp, v); }
    /* 0079e1f9: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x79e1feu); f_00793168();
    /* 0079e1fe: lea edx, [esp + 0x104] */ r_edx = (u32)(r_esp+0x104u);
    /* 0079e205: push 0xa9f960 */ { u32 v = 0xa9f960u; r_esp -= 4; W32(r_esp, v); }
    /* 0079e20a: push 0x8f8818 */ { u32 v = 0x8f8818u; r_esp -= 4; W32(r_esp, v); }
    /* 0079e20f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079e210: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0079e211: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x79e216u); f_00857e29();
    /* 0079e216: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079e219: jmp 0x79e1cc */ goto L_0079e1cc;
L_0079e21b:; BB(0x0079e21b);
    /* 0079e21b: push 0xeb */ { u32 v = 0xebu; r_esp -= 4; W32(r_esp, v); }
    /* 0079e220: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x79e225u); f_0073ec50();
    /* 0079e225: mov ebp, eax */ r_ebp = r_eax;
    /* 0079e227: push 0xec */ { u32 v = 0xecu; r_esp -= 4; W32(r_esp, v); }
    /* 0079e22c: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x79e231u); f_0073ec50();
    /* 0079e231: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079e232: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0079e233: call 0x73a888 */ r_esp -= 4; W32(r_esp, 0x79e238u); f_0073a888();
    /* 0079e238: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079e23b: mov dword ptr [0xaab270], eax */ W32((u32)(0xaab270u), r_eax);
    /* 0079e240: jmp 0x79e135 */ goto L_0079e135;
}

void f_0079e248(void) /* sub_79E248 */
{
    FN_ENTER(0x0079e248);
    /* 0079e248: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0079e249: sub esp, 0x300 */ {  u32 a = r_esp; u32 b = 0x300u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0079e24f: mov ecx, dword ptr [0xaab23c] */ r_ecx = R32((u32)(0xaab23cu));
    /* 0079e255: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079e257: je 0x79e268 */ if (fZ) goto L_0079e268;
L_0079e259:; BB(0x0079e259);
    /* 0079e259: call 0x73d160 */ r_esp -= 4; W32(r_esp, 0x79e25eu); f_0073d160();
    /* 0079e25e: mov dword ptr [0xaab23c], 0 */ W32((u32)(0xaab23cu), 0x0u);
L_0079e268:; BB(0x0079e268);
    /* 0079e268: mov eax, dword ptr [0xaab270] */ r_eax = R32((u32)(0xaab270u));
    /* 0079e26d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079e26f: je 0x79e33a */ if (fZ) goto L_0079e33a;
L_0079e275:; BB(0x0079e275);
    /* 0079e275: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079e277: je 0x79e2b2 */ if (fZ) goto L_0079e2b2;
L_0079e279:; BB(0x0079e279);
    /* 0079e279: push 0x94 */ { u32 v = 0x94u; r_esp -= 4; W32(r_esp, v); }
    /* 0079e27e: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x79e283u); f_00793168();
    /* 0079e283: mov edi, eax */ r_edi = r_eax;
    /* 0079e285: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079e288: mov ecx, dword ptr [0xaab240] */ r_ecx = R32((u32)(0xaab240u));
    /* 0079e28e: call 0x723eb8 */ r_esp -= 4; W32(r_esp, 0x79e293u); f_00723eb8();
    /* 0079e293: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0079e296: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079e297: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0079e298: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0079e299: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x79e29eu); f_00857e29();
    /* 0079e29e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079e2a1: mov ecx, dword ptr [0xaab270] */ r_ecx = R32((u32)(0xaab270u));
    /* 0079e2a7: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0079e2aa: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0079e2ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079e2ad: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x79e2b2u); f_0073ae38();
L_0079e2b2:; BB(0x0079e2b2);
    /* 0079e2b2: lea eax, [esp + 0x200] */ r_eax = (u32)(r_esp+0x200u);
    /* 0079e2b9: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 0079e2be: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0079e2c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079e2c1: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x79e2c6u); f_0086b688();
    /* 0079e2c6: push 0x9a */ { u32 v = 0x9au; r_esp -= 4; W32(r_esp, v); }
    /* 0079e2cb: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x79e2d0u); f_00793168();
    /* 0079e2d0: mov edi, eax */ r_edi = r_eax;
    /* 0079e2d2: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079e2d5: mov ecx, dword ptr [0xaab240] */ r_ecx = R32((u32)(0xaab240u));
    /* 0079e2db: call 0x723eb8 */ r_esp -= 4; W32(r_esp, 0x79e2e0u); f_00723eb8();
    /* 0079e2e0: lea edx, [esp + 0x200] */ r_edx = (u32)(r_esp+0x200u);
    /* 0079e2e7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079e2e8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0079e2e9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0079e2ea: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x79e2efu); f_00857e29();
    /* 0079e2ef: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079e2f2: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 0079e2f8: lea eax, [esp + 0x200] */ r_eax = (u32)(r_esp+0x200u);
    /* 0079e2ff: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0079e301: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079e302: call 0x7f32ac */ r_esp -= 4; W32(r_esp, 0x79e307u); f_007f32ac();
    /* 0079e307: mov edx, dword ptr [0xaab240] */ r_edx = R32((u32)(0xaab240u));
    /* 0079e30d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079e30f: je 0x79e328 */ if (fZ) goto L_0079e328;
L_0079e311:; BB(0x0079e311);
    /* 0079e311: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0079e315: mov dword ptr [0xaab240], 0 */ W32((u32)(0xaab240u), 0x0u);
    /* 0079e31f: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0079e324: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_0079e328:; BB(0x0079e328);
    /* 0079e328: mov dword ptr [0xaab218], 0x22 */ W32((u32)(0xaab218u), 0x22u);
    /* 0079e332: add esp, 0x300 */ {  u32 a = r_esp; u32 b = 0x300u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0079e338: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0079e339: ret  */ FN_RET(0x0079e248); r_esp += 4; return;
L_0079e33a:; BB(0x0079e33a);
    /* 0079e33a: push 0x9ff514 */ { u32 v = 0x9ff514u; r_esp -= 4; W32(r_esp, v); }
    /* 0079e33f: push 0x9ff50c */ { u32 v = 0x9ff50cu; r_esp -= 4; W32(r_esp, v); }
    /* 0079e344: call 0x73a888 */ r_esp -= 4; W32(r_esp, 0x79e349u); f_0073a888();
    /* 0079e349: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079e34c: mov dword ptr [0xaab270], eax */ W32((u32)(0xaab270u), r_eax);
    /* 0079e351: jmp 0x79e275 */ goto L_0079e275;
}

void f_0079e358(void) /* sub_79E358 */
{
    FN_ENTER(0x0079e358);
    /* 0079e358: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0079e359: sub esp, 0x200 */ {  u32 a = r_esp; u32 b = 0x200u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0079e35f: mov ecx, dword ptr [0xaab23c] */ r_ecx = R32((u32)(0xaab23cu));
    /* 0079e365: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079e367: je 0x79e378 */ if (fZ) goto L_0079e378;
L_0079e369:; BB(0x0079e369);
    /* 0079e369: call 0x73d160 */ r_esp -= 4; W32(r_esp, 0x79e36eu); f_0073d160();
    /* 0079e36e: mov dword ptr [0xaab23c], 0 */ W32((u32)(0xaab23cu), 0x0u);
L_0079e378:; BB(0x0079e378);
    /* 0079e378: mov ecx, dword ptr [0xaab270] */ r_ecx = R32((u32)(0xaab270u));
    /* 0079e37e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079e380: je 0x79e453 */ if (fZ) goto L_0079e453;
L_0079e386:; BB(0x0079e386);
    /* 0079e386: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079e388: je 0x79e3ff */ if (fZ) goto L_0079e3ff;
L_0079e38a:; BB(0x0079e38a);
    /* 0079e38a: mov eax, dword ptr [0xaab244] */ r_eax = R32((u32)(0xaab244u));
    /* 0079e38f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079e391: je 0x79e3c0 */ if (fZ) goto L_0079e3c0;
L_0079e393:; BB(0x0079e393);
    /* 0079e393: push 0x6b */ { u32 v = 0x6bu; r_esp -= 4; W32(r_esp, v); }
    /* 0079e395: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x79e39au); f_00793168();
    /* 0079e39a: mov ebx, eax */ r_ebx = r_eax;
    /* 0079e39c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079e39f: mov ecx, dword ptr [0xaab244] */ r_ecx = R32((u32)(0xaab244u));
    /* 0079e3a5: call 0x723eb8 */ r_esp -= 4; W32(r_esp, 0x79e3aau); f_00723eb8();
    /* 0079e3aa: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0079e3ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079e3ae: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0079e3af: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0079e3b0: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x79e3b5u); f_00857e29();
    /* 0079e3b5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079e3b8: mov ecx, dword ptr [0xaab270] */ r_ecx = R32((u32)(0xaab270u));
    /* 0079e3be: jmp 0x79e3f4 */ goto L_0079e3f4;
L_0079e3c0:; BB(0x0079e3c0);
    /* 0079e3c0: mov eax, dword ptr [0xaab240] */ r_eax = R32((u32)(0xaab240u));
    /* 0079e3c5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079e3c7: je 0x79e3f4 */ if (fZ) goto L_0079e3f4;
L_0079e3c9:; BB(0x0079e3c9);
    /* 0079e3c9: push 0x6b */ { u32 v = 0x6bu; r_esp -= 4; W32(r_esp, v); }
    /* 0079e3cb: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x79e3d0u); f_00793168();
    /* 0079e3d0: mov ebx, eax */ r_ebx = r_eax;
    /* 0079e3d2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079e3d5: mov ecx, dword ptr [0xaab240] */ r_ecx = R32((u32)(0xaab240u));
    /* 0079e3db: call 0x723eb8 */ r_esp -= 4; W32(r_esp, 0x79e3e0u); f_00723eb8();
    /* 0079e3e0: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0079e3e3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079e3e4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0079e3e5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0079e3e6: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x79e3ebu); f_00857e29();
    /* 0079e3eb: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079e3ee: mov ecx, dword ptr [0xaab270] */ r_ecx = R32((u32)(0xaab270u));
L_0079e3f4:; BB(0x0079e3f4);
    /* 0079e3f4: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0079e3f7: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0079e3f9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079e3fa: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x79e3ffu); f_0073ae38();
L_0079e3ff:; BB(0x0079e3ff);
    /* 0079e3ff: mov edx, dword ptr [0xaab244] */ r_edx = R32((u32)(0xaab244u));
    /* 0079e405: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079e407: je 0x79e420 */ if (fZ) goto L_0079e420;
L_0079e409:; BB(0x0079e409);
    /* 0079e409: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0079e40d: mov dword ptr [0xaab244], 0 */ W32((u32)(0xaab244u), 0x0u);
    /* 0079e417: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0079e41c: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_0079e420:; BB(0x0079e420);
    /* 0079e420: mov edx, dword ptr [0xaab240] */ r_edx = R32((u32)(0xaab240u));
    /* 0079e426: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079e428: je 0x79e441 */ if (fZ) goto L_0079e441;
L_0079e42a:; BB(0x0079e42a);
    /* 0079e42a: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0079e42e: mov dword ptr [0xaab240], 0 */ W32((u32)(0xaab240u), 0x0u);
    /* 0079e438: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0079e43d: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_0079e441:; BB(0x0079e441);
    /* 0079e441: mov dword ptr [0xaab218], 0x29 */ W32((u32)(0xaab218u), 0x29u);
    /* 0079e44b: add esp, 0x200 */ {  u32 a = r_esp; u32 b = 0x200u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0079e451: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0079e452: ret  */ FN_RET(0x0079e358); r_esp += 4; return;
L_0079e453:; BB(0x0079e453);
    /* 0079e453: push 0x9ff514 */ { u32 v = 0x9ff514u; r_esp -= 4; W32(r_esp, v); }
    /* 0079e458: push 0x9ff50c */ { u32 v = 0x9ff50cu; r_esp -= 4; W32(r_esp, v); }
    /* 0079e45d: call 0x73a888 */ r_esp -= 4; W32(r_esp, 0x79e462u); f_0073a888();
    /* 0079e462: mov ecx, eax */ r_ecx = r_eax;
    /* 0079e464: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079e467: mov dword ptr [0xaab270], ecx */ W32((u32)(0xaab270u), r_ecx);
    /* 0079e46d: jmp 0x79e386 */ goto L_0079e386;
}

void f_0079e474(void) /* sub_79E474 */
{
    FN_ENTER(0x0079e474);
    /* 0079e474: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0079e475: sub esp, 0x200 */ {  u32 a = r_esp; u32 b = 0x200u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0079e47b: mov ecx, dword ptr [0xaab23c] */ r_ecx = R32((u32)(0xaab23cu));
    /* 0079e481: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079e483: je 0x79e494 */ if (fZ) goto L_0079e494;
L_0079e485:; BB(0x0079e485);
    /* 0079e485: call 0x73d160 */ r_esp -= 4; W32(r_esp, 0x79e48au); f_0073d160();
    /* 0079e48a: mov dword ptr [0xaab23c], 0 */ W32((u32)(0xaab23cu), 0x0u);
L_0079e494:; BB(0x0079e494);
    /* 0079e494: mov eax, dword ptr [0xaab270] */ r_eax = R32((u32)(0xaab270u));
    /* 0079e499: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079e49b: je 0x79e50a */ if (fZ) goto L_0079e50a;
L_0079e49d:; BB(0x0079e49d);
    /* 0079e49d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079e49f: je 0x79e4d7 */ if (fZ) goto L_0079e4d7;
L_0079e4a1:; BB(0x0079e4a1);
    /* 0079e4a1: push 0x6a */ { u32 v = 0x6au; r_esp -= 4; W32(r_esp, v); }
    /* 0079e4a3: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x79e4a8u); f_00793168();
    /* 0079e4a8: mov esi, eax */ r_esi = r_eax;
    /* 0079e4aa: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079e4ad: mov ecx, dword ptr [0xaab244] */ r_ecx = R32((u32)(0xaab244u));
    /* 0079e4b3: call 0x723eb8 */ r_esp -= 4; W32(r_esp, 0x79e4b8u); f_00723eb8();
    /* 0079e4b8: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0079e4bb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079e4bc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0079e4bd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0079e4be: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x79e4c3u); f_00857e29();
    /* 0079e4c3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079e4c6: mov ecx, dword ptr [0xaab270] */ r_ecx = R32((u32)(0xaab270u));
    /* 0079e4cc: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0079e4cf: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0079e4d1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079e4d2: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x79e4d7u); f_0073ae38();
L_0079e4d7:; BB(0x0079e4d7);
    /* 0079e4d7: mov edx, dword ptr [0xaab244] */ r_edx = R32((u32)(0xaab244u));
    /* 0079e4dd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079e4df: je 0x79e4f8 */ if (fZ) goto L_0079e4f8;
L_0079e4e1:; BB(0x0079e4e1);
    /* 0079e4e1: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0079e4e5: mov dword ptr [0xaab244], 0 */ W32((u32)(0xaab244u), 0x0u);
    /* 0079e4ef: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0079e4f4: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_0079e4f8:; BB(0x0079e4f8);
    /* 0079e4f8: mov dword ptr [0xaab218], 0x22 */ W32((u32)(0xaab218u), 0x22u);
    /* 0079e502: add esp, 0x200 */ {  u32 a = r_esp; u32 b = 0x200u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0079e508: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0079e509: ret  */ FN_RET(0x0079e474); r_esp += 4; return;
L_0079e50a:; BB(0x0079e50a);
    /* 0079e50a: push 0x9ff514 */ { u32 v = 0x9ff514u; r_esp -= 4; W32(r_esp, v); }
    /* 0079e50f: push 0x9ff50c */ { u32 v = 0x9ff50cu; r_esp -= 4; W32(r_esp, v); }
    /* 0079e514: call 0x73a888 */ r_esp -= 4; W32(r_esp, 0x79e519u); f_0073a888();
    /* 0079e519: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079e51c: mov dword ptr [0xaab270], eax */ W32((u32)(0xaab270u), r_eax);
    /* 0079e521: jmp 0x79e49d */ goto L_0079e49d;
}

void f_0079e528(void) /* sub_79E528 */
{
    FN_ENTER(0x0079e528);
    /* 0079e528: mov eax, dword ptr [0xaab218] */ r_eax = R32((u32)(0xaab218u));
    /* 0079e52d: cmp eax, 0x30 */ {  u32 a = r_eax; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079e530: je 0x79e55e */ if (fZ) goto L_0079e55e;
L_0079e532:; BB(0x0079e532);
    /* 0079e532: cmp eax, 0x37 */ {  u32 a = r_eax; u32 b = 0x37u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079e535: je 0x79e558 */ if (fZ) goto L_0079e558;
L_0079e537:; BB(0x0079e537);
    /* 0079e537: cmp eax, 0x3e */ {  u32 a = r_eax; u32 b = 0x3eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079e53a: je 0x79e552 */ if (fZ) goto L_0079e552;
L_0079e53c:; BB(0x0079e53c);
    /* 0079e53c: cmp eax, 0x45 */ {  u32 a = r_eax; u32 b = 0x45u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079e53f: jne 0x79e547 */ if (!fZ) goto L_0079e547;
L_0079e541:; BB(0x0079e541);
    /* 0079e541: call 0x79e5e8 */ r_esp -= 4; W32(r_esp, 0x79e546u); f_0079e5e8();
    /* 0079e546: ret  */ FN_RET(0x0079e528); r_esp += 4; return;
L_0079e547:; BB(0x0079e547);
    /* 0079e547: cmp eax, 0x4a */ {  u32 a = r_eax; u32 b = 0x4au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0079e54a: jne 0x79e557 */ if (!fZ) goto L_0079e557;
L_0079e54c:; BB(0x0079e54c);
    /* 0079e54c: call 0x79e564 */ r_esp -= 4; W32(r_esp, 0x79e551u); f_0079e564();
    /* 0079e551: ret  */ FN_RET(0x0079e528); r_esp += 4; return;
L_0079e552:; BB(0x0079e552);
    /* 0079e552: call 0x79e720 */ r_esp -= 4; W32(r_esp, 0x79e557u); f_0079e720();
L_0079e557:; BB(0x0079e557);
    /* 0079e557: ret  */ FN_RET(0x0079e528); r_esp += 4; return;
L_0079e558:; BB(0x0079e558);
    /* 0079e558: call 0x79e7f8 */ r_esp -= 4; W32(r_esp, 0x79e55du); f_0079e7f8();
    /* 0079e55d: ret  */ FN_RET(0x0079e528); r_esp += 4; return;
L_0079e55e:; BB(0x0079e55e);
    /* 0079e55e: call 0x79e8a8 */ r_esp -= 4; W32(r_esp, 0x79e563u); f_0079e8a8();
    /* 0079e563: ret  */ FN_RET(0x0079e528); r_esp += 4; return;
}

void f_0079e564(void) /* sub_79E564 */
{
    FN_ENTER(0x0079e564);
    /* 0079e564: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0079e565: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0079e568: push 0x82 */ { u32 v = 0x82u; r_esp -= 4; W32(r_esp, v); }
    /* 0079e56d: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x79e572u); f_00793168();
    /* 0079e572: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 0079e576: push 0xaab1a0 */ { u32 v = 0xaab1a0u; r_esp -= 4; W32(r_esp, v); }
    /* 0079e57b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079e57c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0079e57d: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x79e582u); f_00857e29();
    /* 0079e582: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079e585: mov ecx, dword ptr [0xaab270] */ r_ecx = R32((u32)(0xaab270u));
    /* 0079e58b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079e58d: je 0x79e5be */ if (fZ) goto L_0079e5be;
L_0079e58f:; BB(0x0079e58f);
    /* 0079e58f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079e591: je 0x79e59e */ if (fZ) goto L_0079e59e;
L_0079e593:; BB(0x0079e593);
    /* 0079e593: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0079e596: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0079e598: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079e599: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x79e59eu); f_0073ae38();
L_0079e59e:; BB(0x0079e59e);
    /* 0079e59e: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 0079e5a4: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0079e5a7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0079e5a9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079e5aa: call 0x7f32ac */ r_esp -= 4; W32(r_esp, 0x79e5afu); f_007f32ac();
    /* 0079e5af: mov dword ptr [0xaab218], 0x4b */ W32((u32)(0xaab218u), 0x4bu);
    /* 0079e5b9: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0079e5bc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0079e5bd: ret  */ FN_RET(0x0079e564); r_esp += 4; return;
L_0079e5be:; BB(0x0079e5be);
    /* 0079e5be: push 0xeb */ { u32 v = 0xebu; r_esp -= 4; W32(r_esp, v); }
    /* 0079e5c3: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x79e5c8u); f_0073ec50();
    /* 0079e5c8: mov ebp, eax */ r_ebp = r_eax;
    /* 0079e5ca: push 0xec */ { u32 v = 0xecu; r_esp -= 4; W32(r_esp, v); }
    /* 0079e5cf: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x79e5d4u); f_0073ec50();
    /* 0079e5d4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079e5d5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0079e5d6: call 0x73a888 */ r_esp -= 4; W32(r_esp, 0x79e5dbu); f_0073a888();
    /* 0079e5db: mov ecx, eax */ r_ecx = r_eax;
    /* 0079e5dd: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079e5e0: mov dword ptr [0xaab270], ecx */ W32((u32)(0xaab270u), r_ecx);
    /* 0079e5e6: jmp 0x79e58f */ goto L_0079e58f;
}

void f_0079e5e8(void) /* sub_79E5E8 */
{
    FN_ENTER(0x0079e5e8);
    /* 0079e5e8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0079e5e9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0079e5ea: sub esp, 0x100 */ {  u32 a = r_esp; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0079e5f0: mov eax, dword ptr [0xaab250] */ r_eax = R32((u32)(0xaab250u));
    /* 0079e5f5: push 0x7e */ { u32 v = 0x7eu; r_esp -= 4; W32(r_esp, v); }
    /* 0079e5f7: movsx ecx, word ptr [eax + 0x8c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x8cu));
    /* 0079e5fe: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 0079e601: mov ebp, dword ptr [edx + ecx*4] */ r_ebp = R32((u32)(r_edx+r_ecx*4));
    /* 0079e604: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x79e609u); f_00793168();
    /* 0079e609: mov esi, eax */ r_esi = r_eax;
    /* 0079e60b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079e60e: mov ebp, dword ptr [ebp + 0x20] */ r_ebp = R32((u32)(r_ebp+0x20u));
    /* 0079e611: call 0x78c0a0 */ r_esp -= 4; W32(r_esp, 0x79e616u); f_0078c0a0();
    /* 0079e616: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0079e619: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079e61a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0079e61b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0079e61c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0079e61d: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x79e622u); f_00857e29();
    /* 0079e622: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079e625: mov ecx, dword ptr [0xaab270] */ r_ecx = R32((u32)(0xaab270u));
    /* 0079e62b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079e62d: je 0x79e6f1 */ if (fZ) goto L_0079e6f1;
L_0079e633:; BB(0x0079e633);
    /* 0079e633: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079e635: je 0x79e642 */ if (fZ) goto L_0079e642;
L_0079e637:; BB(0x0079e637);
    /* 0079e637: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0079e63a: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0079e63c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079e63d: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x79e642u); f_0073ae38();
L_0079e642:; BB(0x0079e642);
    /* 0079e642: mov ecx, dword ptr [0xaab250] */ r_ecx = R32((u32)(0xaab250u));
    /* 0079e648: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079e64a: je 0x79e65b */ if (fZ) goto L_0079e65b;
L_0079e64c:; BB(0x0079e64c);
    /* 0079e64c: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x79e651u); f_007127b0();
    /* 0079e651: mov dword ptr [0xaab250], 0 */ W32((u32)(0xaab250u), 0x0u);
L_0079e65b:; BB(0x0079e65b);
    /* 0079e65b: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 0079e661: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0079e664: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0079e666: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079e667: call 0x7f32ac */ r_esp -= 4; W32(r_esp, 0x79e66cu); f_007f32ac();
    /* 0079e66c: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0079e672: movzx eax, word ptr [0xa98474] */ r_eax = (u32)R16((u32)(0xa98474u));
    /* 0079e679: and eax, 0xff7f */ {  u32 a = r_eax; u32 b = 0xff7fu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0079e67e: mov word ptr [0xa98474], ax */ W16((u32)(0xa98474u), (u16)r_eax);
    /* 0079e684: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x79e689u); f_0068d5a8();
    /* 0079e689: mov ebp, eax */ r_ebp = r_eax;
    /* 0079e68b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079e68e: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079e690: je 0x79e6bd */ if (fZ) goto L_0079e6bd;
L_0079e692:; BB(0x0079e692);
    /* 0079e692: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0079e694: lea ecx, [ebp + 0xdf8] */ r_ecx = (u32)(r_ebp+0xdf8u);
    /* 0079e69a: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x79e69fu); f_0069792c();
    /* 0079e69f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079e6a1: je 0x79e6bd */ if (fZ) goto L_0079e6bd;
L_0079e6a3:; BB(0x0079e6a3);
    /* 0079e6a3: movzx edx, byte ptr [eax + 0xf2] */ r_edx = (u32)R8((u32)(r_eax+0xf2u));
    /* 0079e6aa: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079e6ac: jne 0x79e6bd */ if (!fZ) goto L_0079e6bd;
L_0079e6ae:; BB(0x0079e6ae);
    /* 0079e6ae: movzx edx, byte ptr [eax + 0xf3] */ r_edx = (u32)R8((u32)(r_eax+0xf3u));
    /* 0079e6b5: cmp edx, 0xb2 */ {  u32 a = r_edx; u32 b = 0xb2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079e6bb: je 0x79e6d0 */ if (fZ) goto L_0079e6d0;
L_0079e6bd:; BB(0x0079e6bd);
    /* 0079e6bd: mov dword ptr [0xaab218], 0x46 */ W32((u32)(0xaab218u), 0x46u);
    /* 0079e6c7: add esp, 0x100 */ {  u32 a = r_esp; u32 b = 0x100u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0079e6cd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0079e6ce: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0079e6cf: ret  */ FN_RET(0x0079e5e8); r_esp += 4; return;
L_0079e6d0:; BB(0x0079e6d0);
    /* 0079e6d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079e6d1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0079e6d2: call 0x68e8a8 */ r_esp -= 4; W32(r_esp, 0x79e6d7u); f_0068e8a8();
    /* 0079e6d7: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0079e6dc: call 0x6c1bcc */ r_esp -= 4; W32(r_esp, 0x79e6e1u); f_006c1bcc();
    /* 0079e6e1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079e6e4: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0079e6e7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079e6e8: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0079e6ea: call 0x68fa2c */ r_esp -= 4; W32(r_esp, 0x79e6efu); f_0068fa2c();
    /* 0079e6ef: jmp 0x79e6bd */ goto L_0079e6bd;
L_0079e6f1:; BB(0x0079e6f1);
    /* 0079e6f1: push 0xeb */ { u32 v = 0xebu; r_esp -= 4; W32(r_esp, v); }
    /* 0079e6f6: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x79e6fbu); f_0073ec50();
    /* 0079e6fb: mov ebp, eax */ r_ebp = r_eax;
    /* 0079e6fd: push 0xec */ { u32 v = 0xecu; r_esp -= 4; W32(r_esp, v); }
    /* 0079e702: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x79e707u); f_0073ec50();
    /* 0079e707: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079e708: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0079e709: call 0x73a888 */ r_esp -= 4; W32(r_esp, 0x79e70eu); f_0073a888();
    /* 0079e70e: mov ecx, eax */ r_ecx = r_eax;
    /* 0079e710: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079e713: mov dword ptr [0xaab270], ecx */ W32((u32)(0xaab270u), r_ecx);
    /* 0079e719: jmp 0x79e633 */ goto L_0079e633;
}

void f_0079e720(void) /* sub_79E720 */
{
    FN_ENTER(0x0079e720);
    /* 0079e720: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0079e721: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0079e722: sub esp, 0x100 */ {  u32 a = r_esp; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0079e728: mov ebp, dword ptr [0xa95df0] */ r_ebp = R32((u32)(0xa95df0u));
    /* 0079e72e: mov eax, dword ptr [0xaab250] */ r_eax = R32((u32)(0xaab250u));
    /* 0079e733: push 0x79 */ { u32 v = 0x79u; r_esp -= 4; W32(r_esp, v); }
    /* 0079e735: movsx ecx, word ptr [eax + 0x8c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x8cu));
    /* 0079e73c: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 0079e73f: mov ebx, dword ptr [edx + ecx*4] */ r_ebx = R32((u32)(r_edx+r_ecx*4));
    /* 0079e742: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x79e747u); f_00793168();
    /* 0079e747: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 0079e74b: add ebp, 0x2cc */ {  u32 a = r_ebp; u32 b = 0x2ccu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0079e751: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0079e752: push dword ptr [ebx + 0x20] */ { u32 v = R32((u32)(r_ebx+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0079e755: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079e756: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0079e757: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x79e75cu); f_00857e29();
    /* 0079e75c: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079e75f: mov ecx, dword ptr [0xaab23c] */ r_ecx = R32((u32)(0xaab23cu));
    /* 0079e765: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079e767: je 0x79e778 */ if (fZ) goto L_0079e778;
L_0079e769:; BB(0x0079e769);
    /* 0079e769: call 0x73d160 */ r_esp -= 4; W32(r_esp, 0x79e76eu); f_0073d160();
    /* 0079e76e: mov dword ptr [0xaab23c], 0 */ W32((u32)(0xaab23cu), 0x0u);
L_0079e778:; BB(0x0079e778);
    /* 0079e778: mov ecx, dword ptr [0xaab270] */ r_ecx = R32((u32)(0xaab270u));
    /* 0079e77e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079e780: je 0x79e7ce */ if (fZ) goto L_0079e7ce;
L_0079e782:; BB(0x0079e782);
    /* 0079e782: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079e784: je 0x79e791 */ if (fZ) goto L_0079e791;
L_0079e786:; BB(0x0079e786);
    /* 0079e786: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0079e789: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0079e78b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079e78c: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x79e791u); f_0073ae38();
L_0079e791:; BB(0x0079e791);
    /* 0079e791: mov ecx, dword ptr [0xaab250] */ r_ecx = R32((u32)(0xaab250u));
    /* 0079e797: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079e799: je 0x79e7aa */ if (fZ) goto L_0079e7aa;
L_0079e79b:; BB(0x0079e79b);
    /* 0079e79b: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x79e7a0u); f_007127b0();
    /* 0079e7a0: mov dword ptr [0xaab250], 0 */ W32((u32)(0xaab250u), 0x0u);
L_0079e7aa:; BB(0x0079e7aa);
    /* 0079e7aa: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 0079e7b0: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0079e7b3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0079e7b5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079e7b6: call 0x7f32ac */ r_esp -= 4; W32(r_esp, 0x79e7bbu); f_007f32ac();
    /* 0079e7bb: mov dword ptr [0xaab218], 0x3f */ W32((u32)(0xaab218u), 0x3fu);
    /* 0079e7c5: add esp, 0x100 */ {  u32 a = r_esp; u32 b = 0x100u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0079e7cb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0079e7cc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0079e7cd: ret  */ FN_RET(0x0079e720); r_esp += 4; return;
L_0079e7ce:; BB(0x0079e7ce);
    /* 0079e7ce: push 0xeb */ { u32 v = 0xebu; r_esp -= 4; W32(r_esp, v); }
    /* 0079e7d3: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x79e7d8u); f_0073ec50();
    /* 0079e7d8: mov ebx, eax */ r_ebx = r_eax;
    /* 0079e7da: push 0xec */ { u32 v = 0xecu; r_esp -= 4; W32(r_esp, v); }
    /* 0079e7df: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x79e7e4u); f_0073ec50();
    /* 0079e7e4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079e7e5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0079e7e6: call 0x73a888 */ r_esp -= 4; W32(r_esp, 0x79e7ebu); f_0073a888();
    /* 0079e7eb: mov ecx, eax */ r_ecx = r_eax;
    /* 0079e7ed: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079e7f0: mov dword ptr [0xaab270], ecx */ W32((u32)(0xaab270u), r_ecx);
    /* 0079e7f6: jmp 0x79e782 */ goto L_0079e782;
}

void f_0079e7f8(void) /* sub_79E7F8 */
{
    FN_ENTER(0x0079e7f8);
    /* 0079e7f8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0079e7f9: sub esp, 0x100 */ {  u32 a = r_esp; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0079e7ff: mov eax, dword ptr [0xaab250] */ r_eax = R32((u32)(0xaab250u));
    /* 0079e804: movsx ecx, word ptr [eax + 0x8c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x8cu));
    /* 0079e80b: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 0079e80e: push 0x74 */ { u32 v = 0x74u; r_esp -= 4; W32(r_esp, v); }
    /* 0079e810: mov esi, dword ptr [edx + ecx*4] */ r_esi = R32((u32)(r_edx+r_ecx*4));
    /* 0079e813: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x79e818u); f_00793168();
    /* 0079e818: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 0079e81c: push dword ptr [esi + 0x20] */ { u32 v = R32((u32)(r_esi+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0079e81f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079e820: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0079e821: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x79e826u); f_00857e29();
    /* 0079e826: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079e829: mov ecx, dword ptr [0xaab270] */ r_ecx = R32((u32)(0xaab270u));
    /* 0079e82f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079e831: je 0x79e87e */ if (fZ) goto L_0079e87e;
L_0079e833:; BB(0x0079e833);
    /* 0079e833: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079e835: je 0x79e842 */ if (fZ) goto L_0079e842;
L_0079e837:; BB(0x0079e837);
    /* 0079e837: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0079e83a: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0079e83c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079e83d: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x79e842u); f_0073ae38();
L_0079e842:; BB(0x0079e842);
    /* 0079e842: mov ecx, dword ptr [0xaab250] */ r_ecx = R32((u32)(0xaab250u));
    /* 0079e848: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079e84a: je 0x79e85b */ if (fZ) goto L_0079e85b;
L_0079e84c:; BB(0x0079e84c);
    /* 0079e84c: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x79e851u); f_007127b0();
    /* 0079e851: mov dword ptr [0xaab250], 0 */ W32((u32)(0xaab250u), 0x0u);
L_0079e85b:; BB(0x0079e85b);
    /* 0079e85b: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 0079e861: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0079e864: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0079e866: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079e867: call 0x7f32ac */ r_esp -= 4; W32(r_esp, 0x79e86cu); f_007f32ac();
    /* 0079e86c: mov dword ptr [0xaab218], 0x38 */ W32((u32)(0xaab218u), 0x38u);
    /* 0079e876: add esp, 0x100 */ {  u32 a = r_esp; u32 b = 0x100u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0079e87c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0079e87d: ret  */ FN_RET(0x0079e7f8); r_esp += 4; return;
L_0079e87e:; BB(0x0079e87e);
    /* 0079e87e: push 0xeb */ { u32 v = 0xebu; r_esp -= 4; W32(r_esp, v); }
    /* 0079e883: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x79e888u); f_0073ec50();
    /* 0079e888: mov esi, eax */ r_esi = r_eax;
    /* 0079e88a: push 0xec */ { u32 v = 0xecu; r_esp -= 4; W32(r_esp, v); }
    /* 0079e88f: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x79e894u); f_0073ec50();
    /* 0079e894: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079e895: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0079e896: call 0x73a888 */ r_esp -= 4; W32(r_esp, 0x79e89bu); f_0073a888();
    /* 0079e89b: mov ecx, eax */ r_ecx = r_eax;
    /* 0079e89d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079e8a0: mov dword ptr [0xaab270], ecx */ W32((u32)(0xaab270u), r_ecx);
    /* 0079e8a6: jmp 0x79e833 */ goto L_0079e833;
}

void f_0079e8a8(void) /* sub_79E8A8 */
{
    FN_ENTER(0x0079e8a8);
    /* 0079e8a8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0079e8a9: sub esp, 0x100 */ {  u32 a = r_esp; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0079e8af: mov eax, dword ptr [0xaab250] */ r_eax = R32((u32)(0xaab250u));
    /* 0079e8b4: movsx ecx, word ptr [eax + 0x8c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x8cu));
    /* 0079e8bb: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 0079e8be: push 0x6f */ { u32 v = 0x6fu; r_esp -= 4; W32(r_esp, v); }
    /* 0079e8c0: mov esi, dword ptr [edx + ecx*4] */ r_esi = R32((u32)(r_edx+r_ecx*4));
    /* 0079e8c3: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x79e8c8u); f_00793168();
    /* 0079e8c8: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 0079e8cc: push dword ptr [esi + 0x20] */ { u32 v = R32((u32)(r_esi+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0079e8cf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079e8d0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0079e8d1: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x79e8d6u); f_00857e29();
    /* 0079e8d6: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079e8d9: mov ecx, dword ptr [0xaab270] */ r_ecx = R32((u32)(0xaab270u));
    /* 0079e8df: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079e8e1: je 0x79e92e */ if (fZ) goto L_0079e92e;
L_0079e8e3:; BB(0x0079e8e3);
    /* 0079e8e3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079e8e5: je 0x79e8f2 */ if (fZ) goto L_0079e8f2;
L_0079e8e7:; BB(0x0079e8e7);
    /* 0079e8e7: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0079e8ea: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0079e8ec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079e8ed: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x79e8f2u); f_0073ae38();
L_0079e8f2:; BB(0x0079e8f2);
    /* 0079e8f2: mov ecx, dword ptr [0xaab250] */ r_ecx = R32((u32)(0xaab250u));
    /* 0079e8f8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079e8fa: je 0x79e90b */ if (fZ) goto L_0079e90b;
L_0079e8fc:; BB(0x0079e8fc);
    /* 0079e8fc: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x79e901u); f_007127b0();
    /* 0079e901: mov dword ptr [0xaab250], 0 */ W32((u32)(0xaab250u), 0x0u);
L_0079e90b:; BB(0x0079e90b);
    /* 0079e90b: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 0079e911: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0079e914: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0079e916: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079e917: call 0x7f32ac */ r_esp -= 4; W32(r_esp, 0x79e91cu); f_007f32ac();
    /* 0079e91c: mov dword ptr [0xaab218], 0x31 */ W32((u32)(0xaab218u), 0x31u);
    /* 0079e926: add esp, 0x100 */ {  u32 a = r_esp; u32 b = 0x100u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0079e92c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0079e92d: ret  */ FN_RET(0x0079e8a8); r_esp += 4; return;
L_0079e92e:; BB(0x0079e92e);
    /* 0079e92e: push 0xeb */ { u32 v = 0xebu; r_esp -= 4; W32(r_esp, v); }
    /* 0079e933: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x79e938u); f_0073ec50();
    /* 0079e938: mov esi, eax */ r_esi = r_eax;
    /* 0079e93a: push 0xec */ { u32 v = 0xecu; r_esp -= 4; W32(r_esp, v); }
    /* 0079e93f: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x79e944u); f_0073ec50();
    /* 0079e944: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079e945: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0079e946: call 0x73a888 */ r_esp -= 4; W32(r_esp, 0x79e94bu); f_0073a888();
    /* 0079e94b: mov ecx, eax */ r_ecx = r_eax;
    /* 0079e94d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079e950: mov dword ptr [0xaab270], ecx */ W32((u32)(0xaab270u), r_ecx);
    /* 0079e956: jmp 0x79e8e3 */ goto L_0079e8e3;
}

void f_0079e958(void) /* sub_79E958 */
{
    FN_ENTER(0x0079e958);
    /* 0079e958: mov eax, dword ptr [0xaab218] */ r_eax = R32((u32)(0xaab218u));
    /* 0079e95d: cmp eax, 0x30 */ {  u32 a = r_eax; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079e960: je 0x79e978 */ if (fZ) goto L_0079e978;
L_0079e962:; BB(0x0079e962);
    /* 0079e962: cmp eax, 0x37 */ {  u32 a = r_eax; u32 b = 0x37u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079e965: jne 0x79e96d */ if (!fZ) goto L_0079e96d;
L_0079e967:; BB(0x0079e967);
    /* 0079e967: call 0x79e980 */ r_esp -= 4; W32(r_esp, 0x79e96cu); f_0079e980();
    /* 0079e96c: ret  */ FN_RET(0x0079e958); r_esp += 4; return;
L_0079e96d:; BB(0x0079e96d);
    /* 0079e96d: cmp eax, 0x3e */ {  u32 a = r_eax; u32 b = 0x3eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0079e970: jne 0x79e97d */ if (!fZ) goto L_0079e97d;
L_0079e972:; BB(0x0079e972);
    /* 0079e972: call 0x7a06cc */ r_esp -= 4; W32(r_esp, 0x79e977u); f_007a06cc();
    /* 0079e977: ret  */ FN_RET(0x0079e958); r_esp += 4; return;
L_0079e978:; BB(0x0079e978);
    /* 0079e978: call 0x79e9f0 */ r_esp -= 4; W32(r_esp, 0x79e97du); f_0079e9f0();
L_0079e97d:; BB(0x0079e97d);
    /* 0079e97d: ret  */ FN_RET(0x0079e958); r_esp += 4; return;
}

void f_0079e980(void) /* sub_79E980 */
{
    FN_ENTER(0x0079e980);
    /* 0079e980: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0079e981: mov eax, dword ptr [0xaab270] */ r_eax = R32((u32)(0xaab270u));
    /* 0079e986: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079e988: je 0x79e9c9 */ if (fZ) goto L_0079e9c9;
L_0079e98a:; BB(0x0079e98a);
    /* 0079e98a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079e98c: je 0x79e9a4 */ if (fZ) goto L_0079e9a4;
L_0079e98e:; BB(0x0079e98e);
    /* 0079e98e: push 0x75 */ { u32 v = 0x75u; r_esp -= 4; W32(r_esp, v); }
    /* 0079e990: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x79e995u); f_00793168();
    /* 0079e995: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079e996: mov ecx, dword ptr [0xaab270] */ r_ecx = R32((u32)(0xaab270u));
    /* 0079e99c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0079e99e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079e99f: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x79e9a4u); f_0073ae38();
L_0079e9a4:; BB(0x0079e9a4);
    /* 0079e9a4: mov ecx, dword ptr [0xaab250] */ r_ecx = R32((u32)(0xaab250u));
    /* 0079e9aa: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0079e9ac: je 0x79e9bd */ if (fZ) goto L_0079e9bd;
L_0079e9ae:; BB(0x0079e9ae);
    /* 0079e9ae: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x79e9b3u); f_007127b0();
    /* 0079e9b3: mov dword ptr [0xaab250], 0 */ W32((u32)(0xaab250u), 0x0u);
L_0079e9bd:; BB(0x0079e9bd);
    /* 0079e9bd: mov dword ptr [0xaab218], 0x39 */ W32((u32)(0xaab218u), 0x39u);
    /* 0079e9c7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0079e9c8: ret  */ FN_RET(0x0079e980); r_esp += 4; return;
L_0079e9c9:; BB(0x0079e9c9);
    /* 0079e9c9: push 0xeb */ { u32 v = 0xebu; r_esp -= 4; W32(r_esp, v); }
    /* 0079e9ce: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x79e9d3u); f_0073ec50();
    /* 0079e9d3: mov esi, eax */ r_esi = r_eax;
    /* 0079e9d5: push 0xec */ { u32 v = 0xecu; r_esp -= 4; W32(r_esp, v); }
    /* 0079e9da: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x79e9dfu); f_0073ec50();
    /* 0079e9df: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079e9e0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0079e9e1: call 0x73a888 */ r_esp -= 4; W32(r_esp, 0x79e9e6u); f_0073a888();
    /* 0079e9e6: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079e9e9: mov dword ptr [0xaab270], eax */ W32((u32)(0xaab270u), r_eax);
    /* 0079e9ee: jmp 0x79e98a */ goto L_0079e98a;
}

void f_0079e9f0(void) /* sub_79E9F0 */
{
    FN_ENTER(0x0079e9f0);
    /* 0079e9f0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0079e9f1: mov eax, dword ptr [0xaab270] */ r_eax = R32((u32)(0xaab270u));
    /* 0079e9f6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079e9f8: je 0x79ea39 */ if (fZ) goto L_0079ea39;
L_0079e9fa:; BB(0x0079e9fa);
    /* 0079e9fa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079e9fc: je 0x79ea14 */ if (fZ) goto L_0079ea14;
L_0079e9fe:; BB(0x0079e9fe);
    /* 0079e9fe: push 0x70 */ { u32 v = 0x70u; r_esp -= 4; W32(r_esp, v); }
    /* 0079ea00: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x79ea05u); f_00793168();
    /* 0079ea05: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079ea06: mov ecx, dword ptr [0xaab270] */ r_ecx = R32((u32)(0xaab270u));
    /* 0079ea0c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0079ea0e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079ea0f: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x79ea14u); f_0073ae38();
L_0079ea14:; BB(0x0079ea14);
    /* 0079ea14: mov ecx, dword ptr [0xaab250] */ r_ecx = R32((u32)(0xaab250u));
    /* 0079ea1a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0079ea1c: je 0x79ea2d */ if (fZ) goto L_0079ea2d;
L_0079ea1e:; BB(0x0079ea1e);
    /* 0079ea1e: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x79ea23u); f_007127b0();
    /* 0079ea23: mov dword ptr [0xaab250], 0 */ W32((u32)(0xaab250u), 0x0u);
L_0079ea2d:; BB(0x0079ea2d);
    /* 0079ea2d: mov dword ptr [0xaab218], 0x32 */ W32((u32)(0xaab218u), 0x32u);
    /* 0079ea37: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0079ea38: ret  */ FN_RET(0x0079e9f0); r_esp += 4; return;
L_0079ea39:; BB(0x0079ea39);
    /* 0079ea39: push 0xeb */ { u32 v = 0xebu; r_esp -= 4; W32(r_esp, v); }
    /* 0079ea3e: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x79ea43u); f_0073ec50();
    /* 0079ea43: mov esi, eax */ r_esi = r_eax;
    /* 0079ea45: push 0xec */ { u32 v = 0xecu; r_esp -= 4; W32(r_esp, v); }
    /* 0079ea4a: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x79ea4fu); f_0073ec50();
    /* 0079ea4f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079ea50: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0079ea51: call 0x73a888 */ r_esp -= 4; W32(r_esp, 0x79ea56u); f_0073a888();
    /* 0079ea56: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079ea59: mov dword ptr [0xaab270], eax */ W32((u32)(0xaab270u), r_eax);
    /* 0079ea5e: jmp 0x79e9fa */ goto L_0079e9fa;
}

void f_0079ea60(void) /* sub_79EA60 */
{
    FN_ENTER(0x0079ea60);
    /* 0079ea60: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0079ea64: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0079ea65: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0079ea66: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0079ea67: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0079ea68: sub esp, 0x204 */ {  u32 a = r_esp; u32 b = 0x204u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0079ea6e: mov esi, eax */ r_esi = r_eax;
    /* 0079ea70: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0079ea73: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0079ea74: call 0x859d2d */ r_esp -= 4; W32(r_esp, 0x79ea79u); f_00859d2d();
    /* 0079ea79: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 0079ea7d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0079ea7e: call 0x85a27d */ r_esp -= 4; W32(r_esp, 0x79ea83u); f_0085a27d();
    /* 0079ea83: lea ebx, [esp + 0xc] */ r_ebx = (u32)(r_esp+0xcu);
    /* 0079ea87: mov ebp, eax */ r_ebp = r_eax;
    /* 0079ea89: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0079ea8c: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 0079ea8f: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0079ea92: add ecx, 0x76c */ {  u32 a = r_ecx; u32 b = 0x76cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0079ea98: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079ea9b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0079ea9c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0079ea9d: push 0x96fea0 */ { u32 v = 0x96fea0u; r_esp -= 4; W32(r_esp, v); }
    /* 0079eaa2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0079eaa3: call 0x858bf5 */ r_esp -= 4; W32(r_esp, 0x79eaa8u); f_00858bf5();
    /* 0079eaa8: lea edx, [esp + 0x20] */ r_edx = (u32)(r_esp+0x20u);
    /* 0079eaac: push 0x92b680 */ { u32 v = 0x92b680u; r_esp -= 4; W32(r_esp, v); }
    /* 0079eab1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0079eab2: mov ebx, 1 */ r_ebx = 0x1u;
    /* 0079eab7: call 0x85957c */ r_esp -= 4; W32(r_esp, 0x79eabcu); f_0085957c();
    /* 0079eabc: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079eabf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079eac1: je 0x79eacc */ if (fZ) goto L_0079eacc;
L_0079eac3:; BB(0x0079eac3);
    /* 0079eac3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079eac4: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0079eac6: call 0x859710 */ r_esp -= 4; W32(r_esp, 0x79eacbu); f_00859710();
    /* 0079eacb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0079eacc:; BB(0x0079eacc);
    /* 0079eacc: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 0079ead0: push 0x96f144 */ { u32 v = 0x96f144u; r_esp -= 4; W32(r_esp, v); }
    /* 0079ead5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0079ead6: call 0x85957c */ r_esp -= 4; W32(r_esp, 0x79eadbu); f_0085957c();
    /* 0079eadb: mov edi, eax */ r_edi = r_eax;
    /* 0079eadd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079eae0: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079eae2: je 0x79eb07 */ if (fZ) goto L_0079eb07;
L_0079eae4:; BB(0x0079eae4);
    /* 0079eae4: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079eae7: je 0x79eb12 */ if (fZ) goto L_0079eb12;
L_0079eae9:; BB(0x0079eae9);
    /* 0079eae9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0079eaea: push dword ptr [ebp] */ { u32 v = R32((u32)(r_ebp)); r_esp -= 4; W32(r_esp, v); }
    /* 0079eaed: push dword ptr [ebp + 4] */ { u32 v = R32((u32)(r_ebp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0079eaf0: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0079eaf3: push 0x97cebc */ { u32 v = 0x97cebcu; r_esp -= 4; W32(r_esp, v); }
    /* 0079eaf8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0079eaf9: call 0x85a3fd */ r_esp -= 4; W32(r_esp, 0x79eafeu); f_0085a3fd();
    /* 0079eafe: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0079eaff: call 0x859710 */ r_esp -= 4; W32(r_esp, 0x79eb04u); f_00859710();
    /* 0079eb04: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0079eb07:; BB(0x0079eb07);
    /* 0079eb07: add esp, 0x204 */ {  u32 a = r_esp; u32 b = 0x204u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0079eb0d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0079eb0e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0079eb0f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0079eb10: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0079eb11: ret  */ FN_RET(0x0079ea60); r_esp += 4; return;
L_0079eb12:; BB(0x0079eb12);
    /* 0079eb12: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0079eb13: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 0079eb18: call 0x85a45b */ r_esp -= 4; W32(r_esp, 0x79eb1du); f_0085a45b();
    /* 0079eb1d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0079eb1e: push 0xfe */ { u32 v = 0xfeu; r_esp -= 4; W32(r_esp, v); }
    /* 0079eb23: call 0x85a45b */ r_esp -= 4; W32(r_esp, 0x79eb28u); f_0085a45b();
    /* 0079eb28: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079eb2b: jmp 0x79eae9 */ goto L_0079eae9;
}

void f_0079ea64(void) /* sub_79EA64 */
{
    FN_ENTER(0x0079ea64);
    /* 0079ea64: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0079ea65: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0079ea66: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0079ea67: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0079ea68: sub esp, 0x204 */ {  u32 a = r_esp; u32 b = 0x204u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0079ea6e: mov esi, eax */ r_esi = r_eax;
    /* 0079ea70: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0079ea73: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0079ea74: call 0x859d2d */ r_esp -= 4; W32(r_esp, 0x79ea79u); f_00859d2d();
    /* 0079ea79: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 0079ea7d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0079ea7e: call 0x85a27d */ r_esp -= 4; W32(r_esp, 0x79ea83u); f_0085a27d();
    /* 0079ea83: lea ebx, [esp + 0xc] */ r_ebx = (u32)(r_esp+0xcu);
    /* 0079ea87: mov ebp, eax */ r_ebp = r_eax;
    /* 0079ea89: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0079ea8c: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 0079ea8f: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0079ea92: add ecx, 0x76c */ {  u32 a = r_ecx; u32 b = 0x76cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0079ea98: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079ea9b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0079ea9c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0079ea9d: push 0x96fea0 */ { u32 v = 0x96fea0u; r_esp -= 4; W32(r_esp, v); }
    /* 0079eaa2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0079eaa3: call 0x858bf5 */ r_esp -= 4; W32(r_esp, 0x79eaa8u); f_00858bf5();
    /* 0079eaa8: lea edx, [esp + 0x20] */ r_edx = (u32)(r_esp+0x20u);
    /* 0079eaac: push 0x92b680 */ { u32 v = 0x92b680u; r_esp -= 4; W32(r_esp, v); }
    /* 0079eab1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0079eab2: mov ebx, 1 */ r_ebx = 0x1u;
    /* 0079eab7: call 0x85957c */ r_esp -= 4; W32(r_esp, 0x79eabcu); f_0085957c();
    /* 0079eabc: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079eabf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079eac1: je 0x79eacc */ if (fZ) goto L_0079eacc;
L_0079eac3:; BB(0x0079eac3);
    /* 0079eac3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079eac4: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0079eac6: call 0x859710 */ r_esp -= 4; W32(r_esp, 0x79eacbu); f_00859710();
    /* 0079eacb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0079eacc:; BB(0x0079eacc);
    /* 0079eacc: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 0079ead0: push 0x96f144 */ { u32 v = 0x96f144u; r_esp -= 4; W32(r_esp, v); }
    /* 0079ead5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0079ead6: call 0x85957c */ r_esp -= 4; W32(r_esp, 0x79eadbu); f_0085957c();
    /* 0079eadb: mov edi, eax */ r_edi = r_eax;
    /* 0079eadd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079eae0: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079eae2: je 0x79eb07 */ if (fZ) goto L_0079eb07;
L_0079eae4:; BB(0x0079eae4);
    /* 0079eae4: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079eae7: je 0x79eb12 */ if (fZ) goto L_0079eb12;
L_0079eae9:; BB(0x0079eae9);
    /* 0079eae9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0079eaea: push dword ptr [ebp] */ { u32 v = R32((u32)(r_ebp)); r_esp -= 4; W32(r_esp, v); }
    /* 0079eaed: push dword ptr [ebp + 4] */ { u32 v = R32((u32)(r_ebp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0079eaf0: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0079eaf3: push 0x97cebc */ { u32 v = 0x97cebcu; r_esp -= 4; W32(r_esp, v); }
    /* 0079eaf8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0079eaf9: call 0x85a3fd */ r_esp -= 4; W32(r_esp, 0x79eafeu); f_0085a3fd();
    /* 0079eafe: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0079eaff: call 0x859710 */ r_esp -= 4; W32(r_esp, 0x79eb04u); f_00859710();
    /* 0079eb04: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0079eb07:; BB(0x0079eb07);
    /* 0079eb07: add esp, 0x204 */ {  u32 a = r_esp; u32 b = 0x204u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0079eb0d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0079eb0e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0079eb0f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0079eb10: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0079eb11: ret  */ FN_RET(0x0079ea64); r_esp += 4; return;
L_0079eb12:; BB(0x0079eb12);
    /* 0079eb12: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0079eb13: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 0079eb18: call 0x85a45b */ r_esp -= 4; W32(r_esp, 0x79eb1du); f_0085a45b();
    /* 0079eb1d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0079eb1e: push 0xfe */ { u32 v = 0xfeu; r_esp -= 4; W32(r_esp, v); }
    /* 0079eb23: call 0x85a45b */ r_esp -= 4; W32(r_esp, 0x79eb28u); f_0085a45b();
    /* 0079eb28: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079eb2b: jmp 0x79eae9 */ goto L_0079eae9;
}

void f_0079eb30(void) /* sub_79EB30 */
{
    FN_ENTER(0x0079eb30);
    /* 0079eb30: call 0x7be2f4 */ r_esp -= 4; W32(r_esp, 0x79eb35u); f_007be2f4();
    /* 0079eb35: mov eax, dword ptr [0xaab284] */ r_eax = R32((u32)(0xaab284u));
    /* 0079eb3a: mov ecx, dword ptr [0xaab218] */ r_ecx = R32((u32)(0xaab218u));
    /* 0079eb40: mov edx, 1 */ r_edx = 0x1u;
    /* 0079eb45: mov dword ptr [eax + 0x1213c], edx */ W32((u32)(r_eax+0x1213cu), r_edx);
    /* 0079eb4b: cmp ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0079eb4e: mov dword ptr [0xaab2a0], edx */ W32((u32)(0xaab2a0u), r_edx);
    /* 0079eb54: jne 0x79eb6a */ if (!fZ) goto L_0079eb6a;
L_0079eb56:; BB(0x0079eb56);
    /* 0079eb56: mov dword ptr [0xaab220], 5 */ W32((u32)(0xaab220u), 0x5u);
    /* 0079eb60: mov dword ptr [0xaab218], 0x17 */ W32((u32)(0xaab218u), 0x17u);
L_0079eb6a:; BB(0x0079eb6a);
    /* 0079eb6a: mov dword ptr [0xaab264], 0 */ W32((u32)(0xaab264u), 0x0u);
    /* 0079eb74: ret  */ FN_RET(0x0079eb30); r_esp += 4; return;
}

void f_0079eb78(void) /* sub_79EB78 */
{
    FN_ENTER(0x0079eb78);
    /* 0079eb78: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0079eb79: mov ebp, esp */ r_ebp = r_esp;
    /* 0079eb7b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0079eb7d: push 0x8f57e8 */ { u32 v = 0x8f57e8u; r_esp -= 4; W32(r_esp, v); }
    /* 0079eb82: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0079eb88: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079eb89: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0079eb90: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0079eb93: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0079eb96: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 0079eb99: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 0079eb9c: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 0079eb9f: mov eax, dword ptr [0xaab220] */ r_eax = R32((u32)(0xaab220u));
    /* 0079eba4: mov dword ptr [0xaab2a0], 0 */ W32((u32)(0xaab2a0u), 0x0u);
    /* 0079ebae: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0079ebb0: jg 0x79ebbd */ if ((!fZ&&fS==fO)) goto L_0079ebbd;
L_0079ebb2:; BB(0x0079ebb2);
    /* 0079ebb2: mov edx, dword ptr [0xaab284] */ r_edx = R32((u32)(0xaab284u));
    /* 0079ebb8: jmp 0x79ed57 */ goto L_0079ed57;
L_0079ebbd:; BB(0x0079ebbd);
    /* 0079ebbd: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0079ebc0: jle 0x79ed94 */ if ((fZ||fS!=fO)) goto L_0079ed94;
L_0079ebc6:; BB(0x0079ebc6);
    /* 0079ebc6: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0079ebc9: jl 0x79ed51 */ if ((fS!=fO)) goto L_0079ed51;
L_0079ebcf:; BB(0x0079ebcf);
    /* 0079ebcf: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0079ebd2: jle 0x79ef7e */ if ((fZ||fS!=fO)) goto L_0079ef7e;
L_0079ebd8:; BB(0x0079ebd8);
    /* 0079ebd8: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079ebdb: jne 0x79ed49 */ if (!fZ) goto L_0079ed49;
L_0079ebe1:; BB(0x0079ebe1);
    /* 0079ebe1: mov eax, dword ptr [0xaab180] */ r_eax = R32((u32)(0xaab180u));
    /* 0079ebe6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079ebe8: je 0x79ef73 */ if (fZ) goto L_0079ef73;
L_0079ebee:; BB(0x0079ebee);
    /* 0079ebee: mov eax, dword ptr [0xaab2a0] */ r_eax = R32((u32)(0xaab2a0u));
    /* 0079ebf3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079ebf5: jne 0x79ed23 */ if (!fZ) goto L_0079ed23;
L_0079ebfb:; BB(0x0079ebfb);
    /* 0079ebfb: mov eax, dword ptr [0xaab218] */ r_eax = R32((u32)(0xaab218u));
    /* 0079ec00: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079ec03: jne 0x79ec10 */ if (!fZ) goto L_0079ec10;
L_0079ec05:; BB(0x0079ec05);
    /* 0079ec05: mov edx, dword ptr [0xaab284] */ r_edx = R32((u32)(0xaab284u));
    /* 0079ec0b: jmp 0x79ed3d */ goto L_0079ed3d;
L_0079ec10:; BB(0x0079ec10);
    /* 0079ec10: call 0x708734 */ r_esp -= 4; W32(r_esp, 0x79ec15u); f_00708734();
    /* 0079ec15: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079ec18: je 0x79ef52 */ if (fZ) goto L_0079ef52;
L_0079ec1e:; BB(0x0079ec1e);
    /* 0079ec1e: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079ec21: je 0x79ef31 */ if (fZ) goto L_0079ef31;
L_0079ec27:; BB(0x0079ec27);
    /* 0079ec27: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079ec2a: je 0x79ec8e */ if (fZ) goto L_0079ec8e;
L_0079ec2c:; BB(0x0079ec2c);
    /* 0079ec2c: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079ec2f: jne 0x79ec4f */ if (!fZ) goto L_0079ec4f;
L_0079ec31:; BB(0x0079ec31);
    /* 0079ec31: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 0079ec33: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 0079ec35: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x79ec3au); f_00792fe8();
    /* 0079ec3a: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 0079ec3f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079ec40: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 0079ec45: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x79ec4au); f_00857e29();
    /* 0079ec4a: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079ec4d: jmp 0x79ecaa */ goto L_0079ecaa;
L_0079ec4f:; BB(0x0079ec4f);
    /* 0079ec4f: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079ec52: jne 0x79ec72 */ if (!fZ) goto L_0079ec72;
L_0079ec54:; BB(0x0079ec54);
    /* 0079ec54: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 0079ec56: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 0079ec58: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x79ec5du); f_00792fe8();
    /* 0079ec5d: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 0079ec62: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079ec63: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 0079ec68: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x79ec6du); f_00857e29();
    /* 0079ec6d: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079ec70: jmp 0x79ecaa */ goto L_0079ecaa;
L_0079ec72:; BB(0x0079ec72);
    /* 0079ec72: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0079ec74: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x79ec79u); f_00793168();
    /* 0079ec79: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 0079ec7e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079ec7f: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 0079ec84: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x79ec89u); f_00857e29();
    /* 0079ec89: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079ec8c: jmp 0x79ecaa */ goto L_0079ecaa;
L_0079ec8e:; BB(0x0079ec8e);
    /* 0079ec8e: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 0079ec90: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 0079ec92: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x79ec97u); f_00792fe8();
    /* 0079ec97: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 0079ec9c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079ec9d: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 0079eca2: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x79eca7u); f_00857e29();
    /* 0079eca7: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0079ecaa:; BB(0x0079ecaa);
    /* 0079ecaa: mov eax, dword ptr [0xa9ab38] */ r_eax = R32((u32)(0xa9ab38u));
    /* 0079ecaf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079ecb1: jne 0x79ecca */ if (!fZ) goto L_0079ecca;
L_0079ecb3:; BB(0x0079ecb3);
    /* 0079ecb3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0079ecb4: mov eax, 0xaaaac0 */ r_eax = 0xaaaac0u;
    /* 0079ecb9: call 0x79a8c4 */ r_esp -= 4; W32(r_esp, 0x79ecbeu); f_0079a8c4();
    /* 0079ecbe: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079ecbf: mov ecx, dword ptr [0xaab264] */ r_ecx = R32((u32)(0xaab264u));
    /* 0079ecc5: call 0x712c00 */ r_esp -= 4; W32(r_esp, 0x79eccau); f_00712c00();
L_0079ecca:; BB(0x0079ecca);
    /* 0079ecca: call 0x798468 */ r_esp -= 4; W32(r_esp, 0x79eccfu); f_00798468();
    /* 0079eccf: mov edx, dword ptr [0xaab284] */ r_edx = R32((u32)(0xaab284u));
    /* 0079ecd5: mov dword ptr [0xaab200], 0 */ W32((u32)(0xaab200u), 0x0u);
    /* 0079ecdf: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079ece1: mov dword ptr [0xaab218], 0xc */ W32((u32)(0xaab218u), 0xcu);
    /* 0079eceb: je 0x79ecff */ if (fZ) goto L_0079ecff;
L_0079eced:; BB(0x0079eced);
    /* 0079eced: movzx eax, byte ptr [edx + 0x10074] */ r_eax = (u32)R8((u32)(r_edx+0x10074u));
    /* 0079ecf4: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0079ecf9: mov byte ptr [edx + 0x10074], al */ W8((u32)(r_edx+0x10074u), (u8)r_eax);
L_0079ecff:; BB(0x0079ecff);
    /* 0079ecff: mov eax, dword ptr [0xaaecf8] */ r_eax = R32((u32)(0xaaecf8u));
    /* 0079ed04: mov ebx, dword ptr [eax + 0x18] */ r_ebx = R32((u32)(r_eax+0x18u));
    /* 0079ed07: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079ed09: je 0x79ed3d */ if (fZ) goto L_0079ed3d;
L_0079ed0b:; BB(0x0079ed0b);
    /* 0079ed0b: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079ed0d: je 0x79ed17 */ if (fZ) goto L_0079ed17;
L_0079ed0f:; BB(0x0079ed0f);
    /* 0079ed0f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0079ed11: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0079ed13: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0079ed15: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x79ed17u); call_ind(t); }
L_0079ed17:; BB(0x0079ed17);
    /* 0079ed17: mov ebx, dword ptr [ebx + 0x10] */ r_ebx = R32((u32)(r_ebx+0x10u));
    /* 0079ed1a: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079ed1c: jne 0x79ed0b */ if (!fZ) goto L_0079ed0b;
L_0079ed1e:; BB(0x0079ed1e);
    /* 0079ed1e: jmp 0x79ef8e */ goto L_0079ef8e;
L_0079ed23:; BB(0x0079ed23);
    /* 0079ed23: mov edx, dword ptr [0xaab284] */ r_edx = R32((u32)(0xaab284u));
    /* 0079ed29: mov dword ptr [0xaab220], 5 */ W32((u32)(0xaab220u), 0x5u);
    /* 0079ed33: mov dword ptr [0xaab218], 0x17 */ W32((u32)(0xaab218u), 0x17u);
L_0079ed3d:; BB(0x0079ed3d);
    /* 0079ed3d: mov dword ptr [0xaab1f4], 1 */ W32((u32)(0xaab1f4u), 0x1u);
    /* 0079ed47: jmp 0x79ed57 */ goto L_0079ed57;
L_0079ed49:; BB(0x0079ed49);
    /* 0079ed49: mov edx, dword ptr [0xaab284] */ r_edx = R32((u32)(0xaab284u));
    /* 0079ed4f: jmp 0x79ed57 */ goto L_0079ed57;
L_0079ed51:; BB(0x0079ed51);
    /* 0079ed51: mov edx, dword ptr [0xaab284] */ r_edx = R32((u32)(0xaab284u));
L_0079ed57:; BB(0x0079ed57);
    /* 0079ed57: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079ed59: je 0x79ed6a */ if (fZ) goto L_0079ed6a;
L_0079ed5b:; BB(0x0079ed5b);
    /* 0079ed5b: mov dword ptr [edx + 0x1213c], 0 */ W32((u32)(r_edx+0x1213cu), 0x0u);
    /* 0079ed65: call 0x7be364 */ r_esp -= 4; W32(r_esp, 0x79ed6au); f_007be364();
L_0079ed6a:; BB(0x0079ed6a);
    /* 0079ed6a: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0079ed6d: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0079ed70: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0079ed73: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0079ed75: mov dword ptr [0xaab220], eax */ W32((u32)(0xaab220u), r_eax);
    /* 0079ed7a: mov word ptr [0xaab224], ax */ W16((u32)(0xaab224u), (u16)r_eax);
    /* 0079ed80: mov word ptr [0xaab228], ax */ W16((u32)(0xaab228u), (u16)r_eax);
    /* 0079ed86: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0079ed89: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0079ed90: mov esp, ebp */ r_esp = r_ebp;
    /* 0079ed92: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0079ed93: ret  */ FN_RET(0x0079eb78); r_esp += 4; return;
L_0079ed94:; BB(0x0079ed94);
    /* 0079ed94: movsx eax, word ptr [0xaab224] */ r_eax = (u32)(i32)(i16)R16((u32)(0xaab224u));
    /* 0079ed9b: movsx ebx, word ptr [0xaab228] */ r_ebx = (u32)(i32)(i16)R16((u32)(0xaab228u));
    /* 0079eda2: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0079eda5: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0079eda7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0079eda9: jle 0x79eddd */ if ((fZ||fS!=fO)) goto L_0079eddd;
L_0079edab:; BB(0x0079edab);
    /* 0079edab: lea esi, [edi + edi*4] */ r_esi = (u32)(r_edi+r_edi*4);
    /* 0079edae: lea esi, [edi + esi*8] */ r_esi = (u32)(r_edi+r_esi*8);
    /* 0079edb1: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0079edb3: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0079edb5: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
    /* 0079edb8: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0079edba: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0079edbc: cmp ebx, dword ptr [eax + 0xaa6d5c] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_eax+0xaa6d5cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079edc2: jne 0x79edd3 */ if (!fZ) goto L_0079edd3;
L_0079edc4:; BB(0x0079edc4);
    /* 0079edc4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0079edc5: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x79edcau); f_0068d5a8();
    /* 0079edca: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079edcb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079edcd: je 0x79ef99 */ if (fZ) goto L_0079ef99;
L_0079edd3:; BB(0x0079edd3);
    /* 0079edd3: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0079edd6: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0079edd9: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0079eddb: jl 0x79edab */ if ((fS!=fO)) goto L_0079edab;
L_0079eddd:; BB(0x0079eddd);
    /* 0079eddd: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0079eddf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0079ede1: jle 0x79ee1b */ if ((fZ||fS!=fO)) goto L_0079ee1b;
L_0079ede3:; BB(0x0079ede3);
    /* 0079ede3: lea esi, [edi + edi*4] */ r_esi = (u32)(r_edi+r_edi*4);
    /* 0079ede6: lea esi, [edi + esi*8] */ r_esi = (u32)(r_edi+r_esi*8);
    /* 0079ede9: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0079edeb: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0079eded: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
    /* 0079edf0: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0079edf2: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0079edf5: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0079edf8: mov eax, dword ptr [edx + 0xaa6d5c] */ r_eax = R32((u32)(r_edx+0xaa6d5cu));
    /* 0079edfe: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079ee00: je 0x79ee11 */ if (fZ) goto L_0079ee11;
L_0079ee02:; BB(0x0079ee02);
    /* 0079ee02: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079ee03: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x79ee08u); f_0068d5a8();
    /* 0079ee08: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079ee09: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079ee0b: je 0x79eee6 */ if (fZ) goto L_0079eee6;
L_0079ee11:; BB(0x0079ee11);
    /* 0079ee11: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0079ee14: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0079ee17: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0079ee19: jl 0x79ede3 */ if ((fS!=fO)) goto L_0079ede3;
L_0079ee1b:; BB(0x0079ee1b);
    /* 0079ee1b: mov eax, dword ptr [0xaab284] */ r_eax = R32((u32)(0xaab284u));
    /* 0079ee20: mov edx, dword ptr [0xaab26c] */ r_edx = R32((u32)(0xaab26cu));
    /* 0079ee26: mov dword ptr [eax + 0x1e094], 0x718948 */ W32((u32)(r_eax+0x1e094u), 0x718948u);
    /* 0079ee30: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079ee32: mov dword ptr [eax + 0x1e138], 0x718f18 */ W32((u32)(r_eax+0x1e138u), 0x718f18u);
    /* 0079ee3c: je 0x79ee55 */ if (fZ) goto L_0079ee55;
L_0079ee3e:; BB(0x0079ee3e);
    /* 0079ee3e: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0079ee42: mov dword ptr [0xaab26c], 0 */ W32((u32)(0xaab26cu), 0x0u);
    /* 0079ee4c: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0079ee51: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_0079ee55:; BB(0x0079ee55);
    /* 0079ee55: mov eax, dword ptr [0xaab204] */ r_eax = R32((u32)(0xaab204u));
    /* 0079ee5a: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0079ee5d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079ee5e: push dword ptr [0xaab208] */ { u32 v = R32((u32)(0xaab208u)); r_esp -= 4; W32(r_esp, v); }
    /* 0079ee64: push 0xaab2ec */ { u32 v = 0xaab2ecu; r_esp -= 4; W32(r_esp, v); }
    /* 0079ee69: push 0x97cef0 */ { u32 v = 0x97cef0u; r_esp -= 4; W32(r_esp, v); }
    /* 0079ee6e: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 0079ee73: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x79ee78u); f_00857e29();
    /* 0079ee78: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 0079ee7f: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 0079ee81: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x79ee86u); f_005caba4();
    /* 0079ee86: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0079ee89: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079ee8c: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0079ee8f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079ee91: je 0x79eedf */ if (fZ) goto L_0079eedf;
L_0079ee93:; BB(0x0079ee93);
    /* 0079ee93: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 0079ee9a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0079eea1: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 0079eea6: mov ecx, eax */ r_ecx = r_eax;
    /* 0079eea8: call 0x73f510 */ r_esp -= 4; W32(r_esp, 0x79eeadu); f_0073f510();
    /* 0079eead: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_0079eeb4:; BB(0x0079eeb4);
    /* 0079eeb4: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0079eeb7: mov dword ptr [0xaab26c], eax */ W32((u32)(0xaab26cu), r_eax);
    /* 0079eebc: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0079eec3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0079eec4: mov eax, 0xaa6d00 */ r_eax = 0xaa6d00u;
    /* 0079eec9: call 0x79ea64 */ r_esp -= 4; W32(r_esp, 0x79eeceu); f_0079ea64();
    /* 0079eece: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079eecf: call 0x79a050 */ r_esp -= 4; W32(r_esp, 0x79eed4u); f_0079a050();
    /* 0079eed4: mov edx, dword ptr [0xaab284] */ r_edx = R32((u32)(0xaab284u));
    /* 0079eeda: jmp 0x79ed57 */ goto L_0079ed57;
L_0079eedf:; BB(0x0079eedf);
    /* 0079eedf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0079eee1: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0079eee4: jmp 0x79eeb4 */ goto L_0079eeb4;
L_0079eee6:; BB(0x0079eee6);
    /* 0079eee6: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0079eee9: lea edx, [eax + eax + 0xaa6d84] */ r_edx = (u32)(r_eax+r_eax+0xaa6d84u);
    /* 0079eef0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0079eef1: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0079eef3: push dword ptr [edx - 0x28] */ { u32 v = R32((u32)(r_edx+0xffffffd8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0079eef6: call 0x686258 */ r_esp -= 4; W32(r_esp, 0x79eefbu); f_00686258();
    /* 0079eefb: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079eefe: mov edx, dword ptr [esi*8 + 0xaa6d40] */ r_edx = R32((u32)(r_esi*8+0xaa6d40u));
    /* 0079ef05: mov dword ptr [eax + 0xeb0], edx */ W32((u32)(r_eax+0xeb0u), r_edx);
    /* 0079ef0b: mov edx, dword ptr [esi*8 + 0xaa6d44] */ r_edx = R32((u32)(r_esi*8+0xaa6d44u));
    /* 0079ef12: mov dword ptr [eax + 0xeb4], edx */ W32((u32)(r_eax+0xeb4u), r_edx);
    /* 0079ef18: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0079ef1a: mov ecx, eax */ r_ecx = r_eax;
    /* 0079ef1c: mov esi, dword ptr [esi*8 + 0xaa6d80] */ r_esi = R32((u32)(r_esi*8+0xaa6d80u));
    /* 0079ef23: mov dword ptr [eax + 0xeb8], esi */ W32((u32)(r_eax+0xeb8u), r_esi);
    /* 0079ef29: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x79ef2cu); call_ind(t); }
    /* 0079ef2c: jmp 0x79ee11 */ goto L_0079ee11;
L_0079ef31:; BB(0x0079ef31);
    /* 0079ef31: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0079ef33: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 0079ef35: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x79ef3au); f_00792fe8();
    /* 0079ef3a: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 0079ef3f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079ef40: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 0079ef45: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x79ef4au); f_00857e29();
    /* 0079ef4a: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079ef4d: jmp 0x79ecaa */ goto L_0079ecaa;
L_0079ef52:; BB(0x0079ef52);
    /* 0079ef52: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0079ef54: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 0079ef56: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x79ef5bu); f_00792fe8();
    /* 0079ef5b: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 0079ef60: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079ef61: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 0079ef66: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x79ef6bu); f_00857e29();
    /* 0079ef6b: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079ef6e: jmp 0x79ecaa */ goto L_0079ecaa;
L_0079ef73:; BB(0x0079ef73);
    /* 0079ef73: mov edx, dword ptr [0xaab284] */ r_edx = R32((u32)(0xaab284u));
    /* 0079ef79: jmp 0x79ed57 */ goto L_0079ed57;
L_0079ef7e:; BB(0x0079ef7e);
    /* 0079ef7e: call 0x79efe4 */ r_esp -= 4; W32(r_esp, 0x79ef83u); f_0079efe4();
    /* 0079ef83: mov edx, dword ptr [0xaab284] */ r_edx = R32((u32)(0xaab284u));
    /* 0079ef89: jmp 0x79ed57 */ goto L_0079ed57;
L_0079ef8e:; BB(0x0079ef8e);
    /* 0079ef8e: mov edx, dword ptr [0xaab284] */ r_edx = R32((u32)(0xaab284u));
    /* 0079ef94: jmp 0x79ed3d */ goto L_0079ed3d;
L_0079ef99:; BB(0x0079ef99);
    /* 0079ef99: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0079ef9e: call 0x6c1bcc */ r_esp -= 4; W32(r_esp, 0x79efa3u); f_006c1bcc();
    /* 0079efa3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079efa4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0079efa6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0079efa7: call 0x686258 */ r_esp -= 4; W32(r_esp, 0x79efacu); f_00686258();
    /* 0079efac: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079efaf: mov edx, dword ptr [esi*8 + 0xaa6d40] */ r_edx = R32((u32)(r_esi*8+0xaa6d40u));
    /* 0079efb6: mov dword ptr [eax + 0xeb0], edx */ W32((u32)(r_eax+0xeb0u), r_edx);
    /* 0079efbc: mov edx, dword ptr [esi*8 + 0xaa6d44] */ r_edx = R32((u32)(r_esi*8+0xaa6d44u));
    /* 0079efc3: mov dword ptr [eax + 0xeb4], edx */ W32((u32)(r_eax+0xeb4u), r_edx);
    /* 0079efc9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0079efcb: mov ecx, eax */ r_ecx = r_eax;
    /* 0079efcd: mov esi, dword ptr [esi*8 + 0xaa6d80] */ r_esi = R32((u32)(r_esi*8+0xaa6d80u));
    /* 0079efd4: mov dword ptr [eax + 0xeb8], esi */ W32((u32)(r_eax+0xeb8u), r_esi);
    /* 0079efda: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x79efddu); call_ind(t); }
    /* 0079efdd: jmp 0x79edd3 */ goto L_0079edd3;
}

void f_0079efe4(void) /* sub_79EFE4 */
{
    FN_ENTER(0x0079efe4);
    /* 0079efe4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0079efe5: sub esp, 0x4bc */ {  u32 a = r_esp; u32 b = 0x4bcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0079efeb: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x79eff0u); f_006dc358();
    /* 0079eff0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079eff2: jne 0x79f0a7 */ if (!fZ) goto L_0079f0a7;
L_0079eff8:; BB(0x0079eff8);
    /* 0079eff8: mov eax, dword ptr [0xa9c4f4] */ r_eax = R32((u32)(0xa9c4f4u));
    /* 0079effd: cmp eax, dword ptr [0xa9c4dc] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa9c4dcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079f003: jne 0x79f1c6 */ if (!fZ) goto L_0079f1c6;
L_0079f009:; BB(0x0079f009);
    /* 0079f009: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0079f00e: call 0x6c1bcc */ r_esp -= 4; W32(r_esp, 0x79f013u); f_006c1bcc();
    /* 0079f013: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079f014: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0079f016: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0079f01c: call 0x686258 */ r_esp -= 4; W32(r_esp, 0x79f021u); f_00686258();
    /* 0079f021: mov ebp, eax */ r_ebp = r_eax;
    /* 0079f023: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079f026: mov eax, dword ptr [0xaab284] */ r_eax = R32((u32)(0xaab284u));
    /* 0079f02b: mov edx, dword ptr [eax + 0x12120] */ r_edx = R32((u32)(r_eax+0x12120u));
    /* 0079f031: mov dword ptr [ebp + 0xeb0], edx */ W32((u32)(r_ebp+0xeb0u), r_edx);
    /* 0079f037: mov edx, dword ptr [eax + 0x12124] */ r_edx = R32((u32)(r_eax+0x12124u));
    /* 0079f03d: mov dword ptr [ebp + 0xeb4], edx */ W32((u32)(r_ebp+0xeb4u), r_edx);
    /* 0079f043: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0079f045: mov edx, dword ptr [0xa9c4f4] */ r_edx = R32((u32)(0xa9c4f4u));
    /* 0079f04b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079f04d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079f04f: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 0079f052: mov edx, dword ptr [edx + eax*8 + 0xaaad00] */ r_edx = R32((u32)(r_edx+r_eax*8+0xaaad00u));
    /* 0079f059: mov dword ptr [ebp + 0xeb8], edx */ W32((u32)(r_ebp+0xeb8u), r_edx);
    /* 0079f05f: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0079f062: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x79f065u); call_ind(t); }
    /* 0079f065: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0079f067: call 0x6936b4 */ r_esp -= 4; W32(r_esp, 0x79f06cu); f_006936b4();
    /* 0079f06c: mov edx, dword ptr [0xa9c4f4] */ r_edx = R32((u32)(0xa9c4f4u));
    /* 0079f072: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0079f074: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079f075: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079f077: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079f079: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079f07b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079f07d: lea ecx, [edx + edx + 0xaab000] */ r_ecx = (u32)(r_edx+r_edx+0xaab000u);
    /* 0079f084: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0079f085: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x79f08au); f_00857dec();
    /* 0079f08a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079f08d: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 0079f093: call 0x7d41c4 */ r_esp -= 4; W32(r_esp, 0x79f098u); f_007d41c4();
    /* 0079f098: mov dword ptr [0xaab218], 0xf */ W32((u32)(0xaab218u), 0xfu);
    /* 0079f0a2: jmp 0x79f1c6 */ goto L_0079f1c6;
L_0079f0a7:; BB(0x0079f0a7);
    /* 0079f0a7: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0079f0ac: call 0x6c1bcc */ r_esp -= 4; W32(r_esp, 0x79f0b1u); f_006c1bcc();
    /* 0079f0b1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079f0b2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0079f0b4: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0079f0ba: call 0x686258 */ r_esp -= 4; W32(r_esp, 0x79f0bfu); f_00686258();
    /* 0079f0bf: mov ebp, eax */ r_ebp = r_eax;
    /* 0079f0c1: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079f0c4: mov eax, dword ptr [0xaab284] */ r_eax = R32((u32)(0xaab284u));
    /* 0079f0c9: mov edx, dword ptr [eax + 0x12120] */ r_edx = R32((u32)(r_eax+0x12120u));
    /* 0079f0cf: mov dword ptr [ebp + 0xeb0], edx */ W32((u32)(r_ebp+0xeb0u), r_edx);
    /* 0079f0d5: mov edx, dword ptr [eax + 0x12124] */ r_edx = R32((u32)(r_eax+0x12124u));
    /* 0079f0db: mov dword ptr [ebp + 0xeb4], edx */ W32((u32)(r_ebp+0xeb4u), r_edx);
    /* 0079f0e1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0079f0e3: mov edx, dword ptr [0xa9c4f4] */ r_edx = R32((u32)(0xa9c4f4u));
    /* 0079f0e9: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079f0eb: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079f0ed: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 0079f0f0: mov edx, dword ptr [edx + eax*8 + 0xaaad00] */ r_edx = R32((u32)(r_edx+r_eax*8+0xaaad00u));
    /* 0079f0f7: mov dword ptr [ebp + 0xeb8], edx */ W32((u32)(r_ebp+0xeb8u), r_edx);
    /* 0079f0fd: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0079f100: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x79f103u); call_ind(t); }
    /* 0079f103: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0079f105: call 0x6936b4 */ r_esp -= 4; W32(r_esp, 0x79f10au); f_006936b4();
    /* 0079f10a: mov edx, dword ptr [0xa9c4f4] */ r_edx = R32((u32)(0xa9c4f4u));
    /* 0079f110: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0079f112: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079f113: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079f115: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079f117: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079f119: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079f11b: lea ecx, [edx + edx + 0xaab000] */ r_ecx = (u32)(r_edx+r_edx+0xaab000u);
    /* 0079f122: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0079f123: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x79f128u); f_00857dec();
    /* 0079f128: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079f12b: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 0079f131: call 0x7d41c4 */ r_esp -= 4; W32(r_esp, 0x79f136u); f_007d41c4();
    /* 0079f136: mov dword ptr [0xaab218], 0xf */ W32((u32)(0xaab218u), 0xfu);
    /* 0079f140: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0079f142: call 0x6c1bcc */ r_esp -= 4; W32(r_esp, 0x79f147u); f_006c1bcc();
    /* 0079f147: mov edx, dword ptr [0xa9c4f4] */ r_edx = R32((u32)(0xa9c4f4u));
    /* 0079f14d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079f14e: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0079f150: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0079f152: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079f155: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0079f156: call 0x686258 */ r_esp -= 4; W32(r_esp, 0x79f15bu); f_00686258();
    /* 0079f15b: mov ebp, eax */ r_ebp = r_eax;
    /* 0079f15d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079f160: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079f162: je 0x79f1c6 */ if (fZ) goto L_0079f1c6;
L_0079f164:; BB(0x0079f164);
    /* 0079f164: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 0079f168: call 0x6857f0 */ r_esp -= 4; W32(r_esp, 0x79f16du); f_006857f0();
    /* 0079f16d: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 0079f171: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0079f172: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0079f174: call 0x68cee8 */ r_esp -= 4; W32(r_esp, 0x79f179u); f_0068cee8();
    /* 0079f179: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 0079f17c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0079f17e: mov edi, eax */ r_edi = r_eax;
L_0079f180:; BB(0x0079f180);
    /* 0079f180: lea ecx, [esp + edi + 0x16c] */ r_ecx = (u32)(r_esp+r_edi+0x16cu);
    /* 0079f187: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x79f18cu); f_0061cdb0();
    /* 0079f18c: add edi, 0x1c */ {  u32 a = r_edi; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0079f18f: cmp edi, 0x348 */ {  u32 a = r_edi; u32 b = 0x348u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0079f195: jl 0x79f180 */ if ((fS!=fO)) goto L_0079f180;
L_0079f197:; BB(0x0079f197);
    /* 0079f197: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 0079f19a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0079f19c: mov dword ptr [esp + 0xb0], edx */ W32((u32)(r_esp+0xb0u), r_edx);
    /* 0079f1a3: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079f1a5: mov dword ptr [esp + 0x4ac], edx */ W32((u32)(r_esp+0x4acu), r_edx);
    /* 0079f1ac: je 0x79f1b7 */ if (fZ) goto L_0079f1b7;
L_0079f1ae:; BB(0x0079f1ae);
    /* 0079f1ae: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0079f1b0: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0079f1b3: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0079f1b5: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x79f1b7u); call_ind(t); }
L_0079f1b7:; BB(0x0079f1b7);
    /* 0079f1b7: lea eax, [esp + 4] */ r_eax = (u32)(r_esp+0x4u);
    /* 0079f1bb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079f1bc: call 0x686a18 */ r_esp -= 4; W32(r_esp, 0x79f1c1u); f_00686a18();
    /* 0079f1c1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079f1c2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079f1c4: jne 0x79f1ce */ if (!fZ) goto L_0079f1ce;
L_0079f1c6:; BB(0x0079f1c6);
    /* 0079f1c6: add esp, 0x4bc */ {  u32 a = r_esp; u32 b = 0x4bcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0079f1cc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0079f1cd: ret  */ FN_RET(0x0079efe4); r_esp += 4; return;
L_0079f1ce:; BB(0x0079f1ce);
    /* 0079f1ce: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0079f1d0: mov ecx, eax */ r_ecx = r_eax;
    /* 0079f1d2: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x79f1d5u); call_ind(t); }
    /* 0079f1d5: jmp 0x79f1c6 */ goto L_0079f1c6;
}

