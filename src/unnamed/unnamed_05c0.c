#include "protos.h"

void f_005c0000(void)
{
    FN_ENTER(0x005c0000);
    /* 005c0000: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 005c0002: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 005c0006: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 005c000a: mov dword ptr [esp + 0x38], ecx */ W32((u32)(r_esp+0x38u), r_ecx);
    /* 005c000e: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 005c0010: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
L_005c0012:; BB(0x005c0012);
    /* 005c0012: mov ecx, dword ptr [esp + 0x28] */ r_ecx = R32((u32)(r_esp+0x28u));
    /* 005c0016: imul ecx, ebp */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_ebp; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005c0019: add ecx, 0xffffc000 */ {  u32 a = r_ecx; u32 b = 0xffffc000u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c001f: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x5c0024u); f_0082dcbc();
    /* 005c0024: fadd dword ptr [0x92b818] */ ST(0) = ST(0) + R_F32((u32)(0x92b818u));
    /* 005c002a: fmul dword ptr [esp + 0x30] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x30u));
    /* 005c002e: fadd dword ptr [esp + 0x34] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x34u));
    /* 005c0032: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 005c0036: fstp dword ptr [esi + edi*4 + 0x138] */ W_F32((u32)(r_esi+r_edi*4+0x138u), ST(0)); FPOP();
    /* 005c003d: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005c0040: add edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005c0043: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c0045: jl 0x5c004e */ if ((fS!=fO)) goto L_005c004e;
L_005c0047:; BB(0x005c0047);
    /* 005c0047: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 005c0049: mov ebx, 1 */ r_ebx = 0x1u;
L_005c004e:; BB(0x005c004e);
    /* 005c004e: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 005c0052: mov edx, dword ptr [esp + 0x38] */ r_edx = R32((u32)(r_esp+0x38u));
L_005c0056:; BB(0x005c0056);
    /* 005c0056: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005c0058: jl 0x5c0170 */ if ((fS!=fO)) goto L_005c0170;
L_005c005e:; BB(0x005c005e);
    /* 005c005e: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c0060: je 0x5c0012 */ if (fZ) goto L_005c0012;
L_005c0062:; BB(0x005c0062);
    /* 005c0062: mov dword ptr [esi + edi*4 + 0x138], edx */ W32((u32)(r_esi+r_edi*4+0x138u), r_edx);
    /* 005c0069: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005c006c: add edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005c006f: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c0071: jl 0x5c0056 */ if ((fS!=fO)) goto L_005c0056;
L_005c0073:; BB(0x005c0073);
    /* 005c0073: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 005c0075: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 005c0077: jmp 0x5c0056 */ goto L_005c0056;
L_005c0170:; BB(0x005c0170);
    /* 005c0170: mov ecx, esi */ r_ecx = r_esi;
    /* 005c0172: call 0x5bf8b0 */ r_esp -= 4; W32(r_esp, 0x5c0177u); f_005bf8b0();
    /* 005c0177: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005c017a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005c017b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c017c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005c017d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005c017e: ret  */ FN_RET(0x005c0000); r_esp += 4; return;
}

void f_005c002e(void)
{
    FN_ENTER(0x005c002e);
    goto L_005c002e;
L_005c0012:; BB(0x005c0012);
    /* 005c0012: mov ecx, dword ptr [esp + 0x28] */ r_ecx = R32((u32)(r_esp+0x28u));
    /* 005c0016: imul ecx, ebp */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_ebp; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005c0019: add ecx, 0xffffc000 */ {  u32 a = r_ecx; u32 b = 0xffffc000u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c001f: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x5c0024u); f_0082dcbc();
    /* 005c0024: fadd dword ptr [0x92b818] */ ST(0) = ST(0) + R_F32((u32)(0x92b818u));
    /* 005c002a: fmul dword ptr [esp + 0x30] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x30u));
L_005c002e:; BB(0x005c002e);
    /* 005c002e: fadd dword ptr [esp + 0x34] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x34u));
    /* 005c0032: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 005c0036: fstp dword ptr [esi + edi*4 + 0x138] */ W_F32((u32)(r_esi+r_edi*4+0x138u), ST(0)); FPOP();
    /* 005c003d: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005c0040: add edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005c0043: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c0045: jl 0x5c004e */ if ((fS!=fO)) goto L_005c004e;
L_005c0047:; BB(0x005c0047);
    /* 005c0047: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 005c0049: mov ebx, 1 */ r_ebx = 0x1u;
L_005c004e:; BB(0x005c004e);
    /* 005c004e: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 005c0052: mov edx, dword ptr [esp + 0x38] */ r_edx = R32((u32)(r_esp+0x38u));
L_005c0056:; BB(0x005c0056);
    /* 005c0056: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005c0058: jl 0x5c0170 */ if ((fS!=fO)) goto L_005c0170;
L_005c005e:; BB(0x005c005e);
    /* 005c005e: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c0060: je 0x5c0012 */ if (fZ) goto L_005c0012;
L_005c0062:; BB(0x005c0062);
    /* 005c0062: mov dword ptr [esi + edi*4 + 0x138], edx */ W32((u32)(r_esi+r_edi*4+0x138u), r_edx);
    /* 005c0069: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005c006c: add edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005c006f: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c0071: jl 0x5c0056 */ if ((fS!=fO)) goto L_005c0056;
L_005c0073:; BB(0x005c0073);
    /* 005c0073: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 005c0075: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 005c0077: jmp 0x5c0056 */ goto L_005c0056;
L_005c0170:; BB(0x005c0170);
    /* 005c0170: mov ecx, esi */ r_ecx = r_esi;
    /* 005c0172: call 0x5bf8b0 */ r_esp -= 4; W32(r_esp, 0x5c0177u); f_005bf8b0();
    /* 005c0177: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005c017a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005c017b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c017c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005c017d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005c017e: ret  */ FN_RET(0x005c002e); r_esp += 4; return;
}

void f_005c005b(void)
{
    FN_ENTER(0x005c005b);
    goto L_005c005b;
L_005c0012:; BB(0x005c0012);
    /* 005c0012: mov ecx, dword ptr [esp + 0x28] */ r_ecx = R32((u32)(r_esp+0x28u));
    /* 005c0016: imul ecx, ebp */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_ebp; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005c0019: add ecx, 0xffffc000 */ {  u32 a = r_ecx; u32 b = 0xffffc000u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c001f: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x5c0024u); f_0082dcbc();
    /* 005c0024: fadd dword ptr [0x92b818] */ ST(0) = ST(0) + R_F32((u32)(0x92b818u));
    /* 005c002a: fmul dword ptr [esp + 0x30] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x30u));
    /* 005c002e: fadd dword ptr [esp + 0x34] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x34u));
    /* 005c0032: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 005c0036: fstp dword ptr [esi + edi*4 + 0x138] */ W_F32((u32)(r_esi+r_edi*4+0x138u), ST(0)); FPOP();
    /* 005c003d: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005c0040: add edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005c0043: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c0045: jl 0x5c004e */ if ((fS!=fO)) goto L_005c004e;
L_005c0047:; BB(0x005c0047);
    /* 005c0047: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 005c0049: mov ebx, 1 */ r_ebx = 0x1u;
L_005c004e:; BB(0x005c004e);
    /* 005c004e: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 005c0052: mov edx, dword ptr [esp + 0x38] */ r_edx = R32((u32)(r_esp+0x38u));
L_005c0056:; BB(0x005c0056);
    /* 005c0056: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005c0058: jl 0x5c0170 */ if ((fS!=fO)) goto L_005c0170;
L_005c005b:; BB(0x005c005b);
    /* 005c005b: add dword ptr [eax], eax */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 005c005d: add byte ptr [ebp - 0x764f8b25], al */ { u32 ad = (u32)(r_ebp+0x89b074dbu);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
L_005c005e:; BB(0x005c005e);
    /* 005c005e: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c0060: je 0x5c0012 */ if (fZ) goto L_005c0012;
L_005c0062:; BB(0x005c0062);
    /* 005c0062: mov dword ptr [esi + edi*4 + 0x138], edx */ W32((u32)(r_esi+r_edi*4+0x138u), r_edx);
    /* 005c0063: xchg esp, eax */ { u32 x = r_esp; u32 y = r_eax; r_esp = y; r_eax = x; }
    /* 005c0064: mov esi, 0x138 */ r_esi = 0x138u;
    /* 005c0069: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005c006c: add edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005c006f: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c0071: jl 0x5c0056 */ if ((fS!=fO)) goto L_005c0056;
L_005c0073:; BB(0x005c0073);
    /* 005c0073: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 005c0075: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 005c0077: jmp 0x5c0056 */ goto L_005c0056;
L_005c0170:; BB(0x005c0170);
    /* 005c0170: mov ecx, esi */ r_ecx = r_esi;
    /* 005c0172: call 0x5bf8b0 */ r_esp -= 4; W32(r_esp, 0x5c0177u); f_005bf8b0();
    /* 005c0177: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005c017a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005c017b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c017c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005c017d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005c017e: ret  */ FN_RET(0x005c005b); r_esp += 4; return;
}

void f_005c0067(void)
{
    FN_ENTER(0x005c0067);
    goto L_005c0067;
L_005c0012:; BB(0x005c0012);
    /* 005c0012: mov ecx, dword ptr [esp + 0x28] */ r_ecx = R32((u32)(r_esp+0x28u));
    /* 005c0016: imul ecx, ebp */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_ebp; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005c0019: add ecx, 0xffffc000 */ {  u32 a = r_ecx; u32 b = 0xffffc000u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c001f: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x5c0024u); f_0082dcbc();
    /* 005c0024: fadd dword ptr [0x92b818] */ ST(0) = ST(0) + R_F32((u32)(0x92b818u));
    /* 005c002a: fmul dword ptr [esp + 0x30] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x30u));
    /* 005c002e: fadd dword ptr [esp + 0x34] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x34u));
    /* 005c0032: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 005c0036: fstp dword ptr [esi + edi*4 + 0x138] */ W_F32((u32)(r_esi+r_edi*4+0x138u), ST(0)); FPOP();
    /* 005c003d: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005c0040: add edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005c0043: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c0045: jl 0x5c004e */ if ((fS!=fO)) goto L_005c004e;
L_005c0047:; BB(0x005c0047);
    /* 005c0047: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 005c0049: mov ebx, 1 */ r_ebx = 0x1u;
L_005c004e:; BB(0x005c004e);
    /* 005c004e: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 005c0052: mov edx, dword ptr [esp + 0x38] */ r_edx = R32((u32)(r_esp+0x38u));
L_005c0056:; BB(0x005c0056);
    /* 005c0056: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005c0058: jl 0x5c0170 */ if ((fS!=fO)) goto L_005c0170;
L_005c005e:; BB(0x005c005e);
    /* 005c005e: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c0060: je 0x5c0012 */ if (fZ) goto L_005c0012;
L_005c0062:; BB(0x005c0062);
    /* 005c0062: mov dword ptr [esi + edi*4 + 0x138], edx */ W32((u32)(r_esi+r_edi*4+0x138u), r_edx);
L_005c0067:; BB(0x005c0067);
    /* 005c0067: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 005c0069: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005c006c: add edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005c006f: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c0071: jl 0x5c0056 */ if ((fS!=fO)) goto L_005c0056;
L_005c0073:; BB(0x005c0073);
    /* 005c0073: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 005c0075: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 005c0077: jmp 0x5c0056 */ goto L_005c0056;
L_005c0170:; BB(0x005c0170);
    /* 005c0170: mov ecx, esi */ r_ecx = r_esi;
    /* 005c0172: call 0x5bf8b0 */ r_esp -= 4; W32(r_esp, 0x5c0177u); f_005bf8b0();
    /* 005c0177: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005c017a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005c017b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c017c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005c017d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005c017e: ret  */ FN_RET(0x005c0067); r_esp += 4; return;
}

void f_005c007c(void)
{
    FN_ENTER(0x005c007c);
    /* 005c007c: add dword ptr [eax], eax */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 005c007e: add byte ptr [ebx], dh */ { u32 ad = (u32)(r_ebx);  u32 a = R8(ad); u32 b = (u8)(r_edx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 005c0080: push dword ptr [ebx] */ { u32 v = R32((u32)(r_ebx)); r_esp -= 4; W32(r_esp, v); }
    /* 005c0082: in eax, dx */ UNSUP(0x005c0082, "in eax, dx");
    /* 005c0083: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 005c0085: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005c0087: lea eax, [esi + 0x538] */ r_eax = (u32)(r_esi+0x538u);
L_005c008d:; BB(0x005c008d);
    /* 005c008d: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 005c008f: mov dword ptr [ecx + 4], ebx */ W32((u32)(r_ecx+0x4u), r_ebx);
    /* 005c0092: mov dword ptr [ecx + 8], ebp */ W32((u32)(r_ecx+0x8u), r_ebp);
    /* 005c0095: mov dword ptr [ecx + 0xc], edi */ W32((u32)(r_ecx+0xcu), r_edi);
    /* 005c0098: add ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c009b: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005c009d: ja 0x5c008d */ if ((!fC&&!fZ)) goto L_005c008d;
L_005c009f:; BB(0x005c009f);
    /* 005c009f: mov eax, dword ptr [esi + 0xcc] */ r_eax = R32((u32)(r_esi+0xccu));
    /* 005c00a5: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005c00a7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 005c00a9: jbe 0x5c0170 */ if ((fC||fZ)) goto L_005c0170;
L_005c00af:; BB(0x005c00af);
    /* 005c00af: mov ecx, esi */ r_ecx = r_esi;
L_005c00b1:; BB(0x005c00b1);
    /* 005c00b1: fld dword ptr [ecx + edx*8 + 0xd8] */ FPUSH(R_F32((u32)(r_ecx+r_edx*8+0xd8u)));
    /* 005c00b8: fmul dword ptr [0x92b81c] */ ST(0) = ST(0) * R_F32((u32)(0x92b81cu));
    /* 005c00be: movzx edi, byte ptr [ecx + edx*2 + 0xf2] */ r_edi = (u32)R8((u32)(r_ecx+r_edx*2+0xf2u));
    /* 005c00c6: movzx eax, byte ptr [ecx + edx*2 + 0xf3] */ r_eax = (u32)R8((u32)(r_ecx+r_edx*2+0xf3u));
    /* 005c00ce: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 005c00d2: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 005c00d6: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 005c00da: fdiv dword ptr [0x92b810] */ ST(0) = ST(0) / R_F32((u32)(0x92b810u));
    /* 005c00e0: fmul dword ptr [0x92b814] */ ST(0) = ST(0) * R_F32((u32)(0x92b814u));
    /* 005c00e6: fdiv dword ptr [0x92b80c] */ ST(0) = ST(0) / R_F32((u32)(0x92b80cu));
    /* 005c00ec: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
    /* 005c00f0: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 005c00f4: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 005c00f9: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005c00fe: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 005c0102: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 005c0106: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 005c010a: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 005c010e: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 005c0112: shl edi, 9 */ { u32 c = (9u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 005c0115: add edi, 0xffffc000 */ {  u32 a = r_edi; u32 b = 0xffffc000u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005c011b: mov dword ptr [esp + 0x3c], ecx */ W32((u32)(r_esp+0x3cu), r_ecx);
    /* 005c011f: lea ebp, [ecx + 0x338] */ r_ebp = (u32)(r_ecx+0x338u);
    /* 005c0125: lea ebx, [ecx + 0x13c] */ r_ebx = (u32)(r_ecx+0x13cu);
L_005c012b:; BB(0x005c012b);
    /* 005c012b: mov ecx, edi */ r_ecx = r_edi;
    /* 005c012d: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x5c0132u); f_0082dcbc();
    /* 005c0132: fadd dword ptr [0x92b818] */ ST(0) = ST(0) + R_F32((u32)(0x92b818u));
    /* 005c0138: fmul dword ptr [esp + 0x34] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x34u));
    /* 005c013c: fadd dword ptr [ebp - 4] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xfffffffcu));
    /* 005c013f: fstp dword ptr [ebp - 4] */ W_F32((u32)(r_ebp+0xfffffffcu), ST(0)); FPOP();
    /* 005c0142: add edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005c0144: add ebp, -4 */ {  u32 a = r_ebp; u32 b = 0xfffffffcu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005c0147: cmp ebx, ebp */ {  u32 a = r_ebx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005c0149: jbe 0x5c012b */ if ((fC||fZ)) goto L_005c012b;
L_005c014b:; BB(0x005c014b);
    /* 005c014b: mov edx, dword ptr [esp + 0x38] */ r_edx = R32((u32)(r_esp+0x38u));
    /* 005c014f: mov ecx, dword ptr [esp + 0x3c] */ r_ecx = R32((u32)(r_esp+0x3cu));
    /* 005c0153: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c0156: cmp edx, dword ptr [ecx + 0xcc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0xccu)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005c015c: jb 0x5c00b1 */ if (fC) goto L_005c00b1;
L_005c0162:; BB(0x005c0162);
    /* 005c0162: mov esi, ecx */ r_esi = r_ecx;
    /* 005c0164: jmp 0x5c0170 */ goto L_005c0170;
L_005c0170:; BB(0x005c0170);
    /* 005c0170: mov ecx, esi */ r_ecx = r_esi;
    /* 005c0172: call 0x5bf8b0 */ r_esp -= 4; W32(r_esp, 0x5c0177u); f_005bf8b0();
    /* 005c0177: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005c017a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005c017b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c017c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005c017d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005c017e: ret  */ FN_RET(0x005c007c); r_esp += 4; return;
}

void f_005c00a4(void)
{
    FN_ENTER(0x005c00a4);
    /* 005c00a4: add byte ptr [ebx], dh */ { u32 ad = (u32)(r_ebx);  u32 a = R8(ad); u32 b = (u8)(r_edx>>8); u32 r = (a + b) & 0xffu; W8(ad, r); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; fC = (r < a); }
    /* 005c00a6: rol byte ptr [ebp - 0x3e79f040], cl */ { u32 ad = (u32)(r_ebp+0xc1860fc0u); u32 c = ((u8)r_ecx) & 31; u32 a = R8(ad); u32 r = a; if (c) { { u32 k = c % 8; r = k ? (((a << k) | (a >> (8 - k))) & 0xffu) : a; } W8(ad, r);  } }
    /* 005c00ac: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 005c00ae: add byte ptr [ebx - 0x2e7b2632], cl */ { u32 ad = (u32)(r_ebx+0xd184d9ceu);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
L_005c00b1:; BB(0x005c00b1);
    /* 005c00b1: fld dword ptr [ecx + edx*8 + 0xd8] */ FPUSH(R_F32((u32)(r_ecx+r_edx*8+0xd8u)));
    /* 005c00b4: fadd dword ptr [eax] */ ST(0) = ST(0) + R_F32((u32)(r_eax));
    /* 005c00b6: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 005c00b8: fmul dword ptr [0x92b81c] */ ST(0) = ST(0) * R_F32((u32)(0x92b81cu));
    /* 005c00be: movzx edi, byte ptr [ecx + edx*2 + 0xf2] */ r_edi = (u32)R8((u32)(r_ecx+r_edx*2+0xf2u));
    /* 005c00c6: movzx eax, byte ptr [ecx + edx*2 + 0xf3] */ r_eax = (u32)R8((u32)(r_ecx+r_edx*2+0xf3u));
    /* 005c00ce: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 005c00d2: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 005c00d6: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 005c00da: fdiv dword ptr [0x92b810] */ ST(0) = ST(0) / R_F32((u32)(0x92b810u));
    /* 005c00e0: fmul dword ptr [0x92b814] */ ST(0) = ST(0) * R_F32((u32)(0x92b814u));
    /* 005c00e6: fdiv dword ptr [0x92b80c] */ ST(0) = ST(0) / R_F32((u32)(0x92b80cu));
    /* 005c00ec: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
    /* 005c00f0: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 005c00f4: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 005c00f9: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005c00fe: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 005c0102: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 005c0106: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 005c010a: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 005c010e: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 005c0112: shl edi, 9 */ { u32 c = (9u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 005c0115: add edi, 0xffffc000 */ {  u32 a = r_edi; u32 b = 0xffffc000u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005c011b: mov dword ptr [esp + 0x3c], ecx */ W32((u32)(r_esp+0x3cu), r_ecx);
    /* 005c011f: lea ebp, [ecx + 0x338] */ r_ebp = (u32)(r_ecx+0x338u);
    /* 005c0125: lea ebx, [ecx + 0x13c] */ r_ebx = (u32)(r_ecx+0x13cu);
L_005c012b:; BB(0x005c012b);
    /* 005c012b: mov ecx, edi */ r_ecx = r_edi;
    /* 005c012d: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x5c0132u); f_0082dcbc();
    /* 005c0132: fadd dword ptr [0x92b818] */ ST(0) = ST(0) + R_F32((u32)(0x92b818u));
    /* 005c0138: fmul dword ptr [esp + 0x34] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x34u));
    /* 005c013c: fadd dword ptr [ebp - 4] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xfffffffcu));
    /* 005c013f: fstp dword ptr [ebp - 4] */ W_F32((u32)(r_ebp+0xfffffffcu), ST(0)); FPOP();
    /* 005c0142: add edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005c0144: add ebp, -4 */ {  u32 a = r_ebp; u32 b = 0xfffffffcu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005c0147: cmp ebx, ebp */ {  u32 a = r_ebx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005c0149: jbe 0x5c012b */ if ((fC||fZ)) goto L_005c012b;
L_005c014b:; BB(0x005c014b);
    /* 005c014b: mov edx, dword ptr [esp + 0x38] */ r_edx = R32((u32)(r_esp+0x38u));
    /* 005c014f: mov ecx, dword ptr [esp + 0x3c] */ r_ecx = R32((u32)(r_esp+0x3cu));
    /* 005c0153: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c0156: cmp edx, dword ptr [ecx + 0xcc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0xccu)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005c015c: jb 0x5c00b1 */ if (fC) goto L_005c00b1;
L_005c0162:; BB(0x005c0162);
    /* 005c0162: mov esi, ecx */ r_esi = r_ecx;
    /* 005c0164: jmp 0x5c0170 */ goto L_005c0170;
L_005c0170:; BB(0x005c0170);
    /* 005c0170: mov ecx, esi */ r_ecx = r_esi;
    /* 005c0172: call 0x5bf8b0 */ r_esp -= 4; W32(r_esp, 0x5c0177u); f_005bf8b0();
    /* 005c0177: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005c017a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005c017b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c017c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005c017d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005c017e: ret  */ FN_RET(0x005c00a4); r_esp += 4; return;
}

void f_005c03f8(void) /* sub_5C03F8 */
{
    FN_ENTER(0x005c03f8);
    /* 005c03f8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005c03f9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005c03fa: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c03fb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005c03fc: sub esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c03ff: mov esi, ecx */ r_esi = r_ecx;
    /* 005c0401: mov eax, dword ptr [esi + 0x53c] */ r_eax = R32((u32)(r_esi+0x53cu));
    /* 005c0407: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c040a: je 0x5c0414 */ if (fZ) goto L_005c0414;
L_005c040c:; BB(0x005c040c);
    /* 005c040c: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005c040f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005c0410: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c0411: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005c0412: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005c0413: ret  */ FN_RET(0x005c03f8); r_esp += 4; return;
L_005c0414:; BB(0x005c0414);
    /* 005c0414: mov ecx, esi */ r_ecx = r_esi;
    /* 005c0416: call 0x5bf818 */ r_esp -= 4; W32(r_esp, 0x5c041bu); f_005bf818();
    /* 005c041b: mov ebp, eax */ r_ebp = r_eax;
    /* 005c041d: mov ecx, esi */ r_ecx = r_esi;
    /* 005c041f: call 0x5c0b00 */ r_esp -= 4; W32(r_esp, 0x5c0424u); f_005c0b00();
    /* 005c0424: mov ebx, eax */ r_ebx = r_eax;
    /* 005c0426: push dword ptr [0xa0f67c] */ { u32 v = R32((u32)(0xa0f67cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005c042c: mov edx, dword ptr [esi + 0x30] */ r_edx = R32((u32)(r_esi+0x30u));
    /* 005c042f: lea edi, [edx + edx*4] */ r_edi = (u32)(r_edx+r_edx*4);
    /* 005c0432: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005c0434: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005c0436: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005c0438: lea ecx, [edi + edi + 0xaae75c] */ r_ecx = (u32)(r_edi+r_edi+0xaae75cu);
    /* 005c043f: call 0x7c1100 */ r_esp -= 4; W32(r_esp, 0x5c0444u); f_007c1100();
    /* 005c0444: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c0446: je 0x5c049c */ if (fZ) goto L_005c049c;
L_005c0448:; BB(0x005c0448);
    /* 005c0448: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005c044a: je 0x5c0546 */ if (fZ) goto L_005c0546;
L_005c0450:; BB(0x005c0450);
    /* 005c0450: jl 0x5c098c */ if ((fS!=fO)) goto L_005c098c;
L_005c0456:; BB(0x005c0456);
    /* 005c0456: jle 0x5c0491 */ if ((fZ||fS!=fO)) goto L_005c0491;
L_005c0458:; BB(0x005c0458);
    /* 005c0458: mov ebp, dword ptr [esi + 0x8c] */ r_ebp = R32((u32)(r_esi+0x8cu));
    /* 005c045e: mov edx, 0x85 */ r_edx = 0x85u;
    /* 005c0463: add ebp, -1 */ {  u32 a = r_ebp; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005c0466: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005c0468: jl 0x5c048f */ if ((fS!=fO)) goto L_005c048f;
L_005c046a:; BB(0x005c046a);
    /* 005c046a: mov ebx, dword ptr [esi + 0x604] */ r_ebx = R32((u32)(r_esi+0x604u));
L_005c0470:; BB(0x005c0470);
    /* 005c0470: movzx eax, byte ptr [ebp + esi + 0xb0] */ r_eax = (u32)R8((u32)(r_ebp+r_esi+0xb0u));
    /* 005c0478: add ebp, -1 */ {  u32 a = r_ebp; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005c047b: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c047d: jg 0x5c0985 */ if ((!fZ&&fS==fO)) goto L_005c0985;
L_005c0483:; BB(0x005c0483);
    /* 005c0483: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005c0485: jge 0x5c0470 */ if ((fS==fO)) goto L_005c0470;
L_005c0487:; BB(0x005c0487);
    /* 005c0487: cmp edx, 0x85 */ {  u32 a = r_edx; u32 b = 0x85u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c048d: jne 0x5c0491 */ if (!fZ) goto L_005c0491;
L_005c048f:; BB(0x005c048f);
    /* 005c048f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_005c0491:; BB(0x005c0491);
    /* 005c0491: mov dword ptr [esi + 0x604], edx */ W32((u32)(r_esi+0x604u), r_edx);
    /* 005c0497: jmp 0x5c0546 */ goto L_005c0546;
L_005c049c:; BB(0x005c049c);
    /* 005c049c: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c049e: jne 0x5c04f8 */ if (!fZ) goto L_005c04f8;
L_005c04a0:; BB(0x005c04a0);
    /* 005c04a0: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c04a2: je 0x5c0546 */ if (fZ) goto L_005c0546;
L_005c04a8:; BB(0x005c04a8);
    /* 005c04a8: neg ebp */ { u32 x = r_ebp; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 005c04aa: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005c04ac: jle 0x5c04d5 */ if ((fZ||fS!=fO)) goto L_005c04d5;
L_005c04ae:; BB(0x005c04ae);
    /* 005c04ae: mov eax, dword ptr [esi + 0x604] */ r_eax = R32((u32)(r_esi+0x604u));
    /* 005c04b4: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c04b7: cmp eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c04bc: jge 0x5c04c9 */ if ((fS==fO)) goto L_005c04c9;
L_005c04be:; BB(0x005c04be);
    /* 005c04be: mov dword ptr [esi + 0x604], eax */ W32((u32)(r_esi+0x604u), r_eax);
    /* 005c04c4: jmp 0x5c0546 */ goto L_005c0546;
L_005c04c9:; BB(0x005c04c9);
    /* 005c04c9: mov dword ptr [esi + 0x604], 0 */ W32((u32)(r_esi+0x604u), 0x0u);
    /* 005c04d3: jmp 0x5c0546 */ goto L_005c0546;
L_005c04d5:; BB(0x005c04d5);
    /* 005c04d5: jge 0x5c0546 */ if ((fS==fO)) goto L_005c0546;
L_005c04d7:; BB(0x005c04d7);
    /* 005c04d7: mov eax, dword ptr [esi + 0x604] */ r_eax = R32((u32)(r_esi+0x604u));
    /* 005c04dd: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c04e0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005c04e2: jl 0x5c04ec */ if ((fS!=fO)) goto L_005c04ec;
L_005c04e4:; BB(0x005c04e4);
    /* 005c04e4: mov dword ptr [esi + 0x604], eax */ W32((u32)(r_esi+0x604u), r_eax);
    /* 005c04ea: jmp 0x5c0546 */ goto L_005c0546;
L_005c04ec:; BB(0x005c04ec);
    /* 005c04ec: mov dword ptr [esi + 0x604], 0x7f */ W32((u32)(r_esi+0x604u), 0x7fu);
    /* 005c04f6: jmp 0x5c0546 */ goto L_005c0546;
L_005c04f8:; BB(0x005c04f8);
    /* 005c04f8: lea eax, [ebx + ebx*4] */ r_eax = (u32)(r_ebx+r_ebx*4);
    /* 005c04fb: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005c04fd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005c04ff: jle 0x5c0525 */ if ((fZ||fS!=fO)) goto L_005c0525;
L_005c0501:; BB(0x005c0501);
    /* 005c0501: mov eax, dword ptr [esi + 0x604] */ r_eax = R32((u32)(r_esi+0x604u));
    /* 005c0507: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c050a: cmp eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c050f: jge 0x5c0519 */ if ((fS==fO)) goto L_005c0519;
L_005c0511:; BB(0x005c0511);
    /* 005c0511: mov dword ptr [esi + 0x604], eax */ W32((u32)(r_esi+0x604u), r_eax);
    /* 005c0517: jmp 0x5c0546 */ goto L_005c0546;
L_005c0519:; BB(0x005c0519);
    /* 005c0519: mov dword ptr [esi + 0x604], 0 */ W32((u32)(r_esi+0x604u), 0x0u);
    /* 005c0523: jmp 0x5c0546 */ goto L_005c0546;
L_005c0525:; BB(0x005c0525);
    /* 005c0525: jge 0x5c0546 */ if ((fS==fO)) goto L_005c0546;
L_005c0527:; BB(0x005c0527);
    /* 005c0527: mov eax, dword ptr [esi + 0x604] */ r_eax = R32((u32)(r_esi+0x604u));
    /* 005c052d: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c0530: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005c0532: jl 0x5c053c */ if ((fS!=fO)) goto L_005c053c;
L_005c0534:; BB(0x005c0534);
    /* 005c0534: mov dword ptr [esi + 0x604], eax */ W32((u32)(r_esi+0x604u), r_eax);
    /* 005c053a: jmp 0x5c0546 */ goto L_005c0546;
L_005c053c:; BB(0x005c053c);
    /* 005c053c: mov dword ptr [esi + 0x604], 0x7f */ W32((u32)(r_esi+0x604u), 0x7fu);
L_005c0546:; BB(0x005c0546);
    /* 005c0546: push dword ptr [0xa0f67c] */ { u32 v = R32((u32)(0xa0f67cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005c054c: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 005c054f: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 005c0552: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c0554: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c0556: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c0558: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 005c055f: call 0x7c1100 */ r_esp -= 4; W32(r_esp, 0x5c0564u); f_007c1100();
    /* 005c0564: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c0566: jne 0x5c08be */ if (!fZ) goto L_005c08be;
L_005c056c:; BB(0x005c056c);
    /* 005c056c: push dword ptr [0xa0f674] */ { u32 v = R32((u32)(0xa0f674u)); r_esp -= 4; W32(r_esp, v); }
    /* 005c0572: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 005c0575: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 005c0578: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c057a: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c057c: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c057e: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 005c0585: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x5c058au); f_007c1160();
    /* 005c058a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c058c: je 0x5c08be */ if (fZ) goto L_005c08be;
L_005c0592:; BB(0x005c0592);
    /* 005c0592: mov ebx, dword ptr [esi + 0x8c] */ r_ebx = R32((u32)(r_esi+0x8cu));
    /* 005c0598: mov ecx, dword ptr [esi + 0x8c] */ r_ecx = R32((u32)(r_esi+0x8cu));
    /* 005c059e: lea ebp, [esi + 0x78] */ r_ebp = (u32)(r_esi+0x78u);
    /* 005c05a1: mov edx, 0x85 */ r_edx = 0x85u;
    /* 005c05a6: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 005c05a8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005c05aa: jle 0x5c05d1 */ if ((fZ||fS!=fO)) goto L_005c05d1;
L_005c05ac:; BB(0x005c05ac);
    /* 005c05ac: mov eax, dword ptr [esi + 0x604] */ r_eax = R32((u32)(r_esi+0x604u));
    /* 005c05b2: mov dword ptr [esp + 0x28], ebp */ W32((u32)(r_esp+0x28u), r_ebp);
L_005c05b6:; BB(0x005c05b6);
    /* 005c05b6: movzx ebp, byte ptr [edi + esi + 0xb0] */ r_ebp = (u32)R8((u32)(r_edi+r_esi+0xb0u));
    /* 005c05be: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c05c0: je 0x5c0af5 */ if (fZ) goto L_005c0af5;
L_005c05c6:; BB(0x005c05c6);
    /* 005c05c6: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005c05c9: cmp edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c05cb: jl 0x5c05b6 */ if ((fS!=fO)) goto L_005c05b6;
L_005c05cd:; BB(0x005c05cd);
    /* 005c05cd: mov ebp, dword ptr [esp + 0x28] */ r_ebp = R32((u32)(r_esp+0x28u));
L_005c05d1:; BB(0x005c05d1);
    /* 005c05d1: cmp edx, 0x85 */ {  u32 a = r_edx; u32 b = 0x85u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c05d7: je 0x5c09d0 */ if (fZ) goto L_005c09d0;
L_005c05dd:; BB(0x005c05dd);
    /* 005c05dd: cmp edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c05df: jge 0x5c06a4 */ if ((fS==fO)) goto L_005c06a4;
L_005c05e5:; BB(0x005c05e5);
    /* 005c05e5: mov eax, ebx */ r_eax = r_ebx;
    /* 005c05e7: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005c05e9: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c05ec: jl 0x5c0680 */ if ((fS!=fO)) goto L_005c0680;
L_005c05f2:; BB(0x005c05f2);
    /* 005c05f2: mov dword ptr [esp + 0x30], ebx */ W32((u32)(r_esp+0x30u), r_ebx);
    /* 005c05f6: mov dword ptr [esp + 0x28], ebp */ W32((u32)(r_esp+0x28u), r_ebp);
    /* 005c05fa: lea eax, [ebx - 5] */ r_eax = (u32)(r_ebx+0xfffffffbu);
L_005c05fd:; BB(0x005c05fd);
    /* 005c05fd: movzx ebx, byte ptr [edx + esi + 0xb1] */ r_ebx = (u32)R8((u32)(r_edx+r_esi+0xb1u));
    /* 005c0605: mov byte ptr [edx + esi + 0xb0], bl */ W8((u32)(r_edx+r_esi+0xb0u), (u8)r_ebx);
    /* 005c060c: mov ebp, dword ptr [esi + edx*4 + 0x94] */ r_ebp = R32((u32)(r_esi+r_edx*4+0x94u));
    /* 005c0613: mov dword ptr [esi + edx*4 + 0x90], ebp */ W32((u32)(r_esi+r_edx*4+0x90u), r_ebp);
    /* 005c061a: movzx ebx, byte ptr [edx + esi + 0xb2] */ r_ebx = (u32)R8((u32)(r_edx+r_esi+0xb2u));
    /* 005c0622: mov byte ptr [edx + esi + 0xb1], bl */ W8((u32)(r_edx+r_esi+0xb1u), (u8)r_ebx);
    /* 005c0629: mov edi, dword ptr [esi + edx*4 + 0x98] */ r_edi = R32((u32)(r_esi+r_edx*4+0x98u));
    /* 005c0630: mov dword ptr [esi + edx*4 + 0x94], edi */ W32((u32)(r_esi+r_edx*4+0x94u), r_edi);
    /* 005c0637: movzx ebx, byte ptr [edx + esi + 0xb3] */ r_ebx = (u32)R8((u32)(r_edx+r_esi+0xb3u));
    /* 005c063f: mov byte ptr [edx + esi + 0xb2], bl */ W8((u32)(r_edx+r_esi+0xb2u), (u8)r_ebx);
    /* 005c0646: mov ebx, dword ptr [esi + edx*4 + 0x9c] */ r_ebx = R32((u32)(r_esi+r_edx*4+0x9cu));
    /* 005c064d: mov dword ptr [esi + edx*4 + 0x98], ebx */ W32((u32)(r_esi+r_edx*4+0x98u), r_ebx);
    /* 005c0654: movzx ebx, byte ptr [edx + esi + 0xb4] */ r_ebx = (u32)R8((u32)(r_edx+r_esi+0xb4u));
    /* 005c065c: mov byte ptr [edx + esi + 0xb3], bl */ W8((u32)(r_edx+r_esi+0xb3u), (u8)r_ebx);
    /* 005c0663: mov ebx, dword ptr [esi + edx*4 + 0xa0] */ r_ebx = R32((u32)(r_esi+r_edx*4+0xa0u));
    /* 005c066a: mov dword ptr [esi + edx*4 + 0x9c], ebx */ W32((u32)(r_esi+r_edx*4+0x9cu), r_ebx);
    /* 005c0671: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c0674: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c0676: jle 0x5c05fd */ if ((fZ||fS!=fO)) goto L_005c05fd;
L_005c0678:; BB(0x005c0678);
    /* 005c0678: mov ebx, dword ptr [esp + 0x30] */ r_ebx = R32((u32)(r_esp+0x30u));
    /* 005c067c: mov ebp, dword ptr [esp + 0x28] */ r_ebp = R32((u32)(r_esp+0x28u));
L_005c0680:; BB(0x005c0680);
    /* 005c0680: movzx eax, byte ptr [edx + esi + 0xb1] */ r_eax = (u32)R8((u32)(r_edx+r_esi+0xb1u));
    /* 005c0688: mov byte ptr [edx + esi + 0xb0], al */ W8((u32)(r_edx+r_esi+0xb0u), (u8)r_eax);
    /* 005c068f: mov edi, dword ptr [esi + edx*4 + 0x94] */ r_edi = R32((u32)(r_esi+r_edx*4+0x94u));
    /* 005c0696: mov dword ptr [esi + edx*4 + 0x90], edi */ W32((u32)(r_esi+r_edx*4+0x90u), r_edi);
    /* 005c069d: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c06a0: cmp edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c06a2: jl 0x5c0680 */ if ((fS!=fO)) goto L_005c0680;
L_005c06a4:; BB(0x005c06a4);
    /* 005c06a4: mov byte ptr [esi + ebx + 0xaf], 0x85 */ W8((u32)(r_esi+r_ebx+0xafu), 0x85u);
    /* 005c06ac: mov dword ptr [esi + ebx*4 + 0x8c], 0 */ W32((u32)(r_esi+r_ebx*4+0x8cu), 0x0u);
    /* 005c06b7: add dword ptr [esi + 0x8c], -1 */ { u32 ad = (u32)(r_esi+0x8cu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_005c06be:; BB(0x005c06be);
    /* 005c06be: mov eax, dword ptr [esi + 0x78] */ r_eax = R32((u32)(r_esi+0x78u));
    /* 005c06c1: lea edx, [esi + 0x138] */ r_edx = (u32)(r_esi+0x138u);
    /* 005c06c7: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005c06c9: jne 0x5c08ad */ if (!fZ) goto L_005c08ad;
L_005c06cf:; BB(0x005c06cf);
    /* 005c06cf: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005c06d1: jne 0x5c07c2 */ if (!fZ) goto L_005c07c2;
L_005c06d7:; BB(0x005c06d7);
    /* 005c06d7: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005c06d9: je 0x5c08b7 */ if (fZ) goto L_005c08b7;
L_005c06df:; BB(0x005c06df);
    /* 005c06df: lea ecx, [esi + 0x138] */ r_ecx = (u32)(r_esi+0x138u);
    /* 005c06e5: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 005c06e7: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 005c06e9: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 005c06eb: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005c06ed: lea eax, [esi + 0x538] */ r_eax = (u32)(r_esi+0x538u);
L_005c06f3:; BB(0x005c06f3);
    /* 005c06f3: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 005c06f5: mov dword ptr [ecx + 4], ebx */ W32((u32)(r_ecx+0x4u), r_ebx);
    /* 005c06f8: mov dword ptr [ecx + 8], ebp */ W32((u32)(r_ecx+0x8u), r_ebp);
    /* 005c06fb: mov dword ptr [ecx + 0xc], edi */ W32((u32)(r_ecx+0xcu), r_edi);
    /* 005c06fe: add ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c0701: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005c0703: ja 0x5c06f3 */ if ((!fC&&!fZ)) goto L_005c06f3;
L_005c0705:; BB(0x005c0705);
    /* 005c0705: mov eax, 0x10000 */ r_eax = 0x10000u;
    /* 005c070a: fld dword ptr [esi + 0xa0] */ FPUSH(R_F32((u32)(r_esi+0xa0u)));
    /* 005c0710: fmul dword ptr [0x92b7fc] */ ST(0) = ST(0) * R_F32((u32)(0x92b7fcu));
    /* 005c0716: fld dword ptr [esi + 0x98] */ FPUSH(R_F32((u32)(r_esi+0x98u)));
    /* 005c071c: mov ecx, dword ptr [esi + 0x98] */ r_ecx = R32((u32)(r_esi+0x98u));
    /* 005c0722: movzx edi, byte ptr [esi + 0xb3] */ r_edi = (u32)R8((u32)(r_esi+0xb3u));
    /* 005c0729: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 005c072d: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 005c0731: mov dword ptr [esp + 0x3c], edi */ W32((u32)(r_esp+0x3cu), r_edi);
    /* 005c0735: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005c0737: idiv edi */ { i32 d = (i32)r_edi; if (!d) UNSUP(0x005c0737, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005c0737, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005c0739: movzx edx, byte ptr [esi + 0xb2] */ r_edx = (u32)R8((u32)(r_esi+0xb2u));
    /* 005c0740: mov ebp, 0x7f */ r_ebp = 0x7fu;
    /* 005c0745: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 005c0749: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 005c074d: mov dword ptr [esp + 0x30], ecx */ W32((u32)(r_esp+0x30u), r_ecx);
    /* 005c0751: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 005c0753: mov dword ptr [esp + 0x44], ebx */ W32((u32)(r_esp+0x44u), r_ebx);
    /* 005c0757: mov edi, ebx */ r_edi = r_ebx;
    /* 005c0759: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_005c075b:; BB(0x005c075b);
    /* 005c075b: mov ecx, dword ptr [esp + 0x28] */ r_ecx = R32((u32)(r_esp+0x28u));
    /* 005c075f: imul ecx, ebx */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_ebx; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005c0762: add ecx, 0xffffc000 */ {  u32 a = r_ecx; u32 b = 0xffffc000u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c0768: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x5c076du); f_0082dcbc();
    /* 005c076d: fadd dword ptr [0x92b7f8] */ ST(0) = ST(0) + R_F32((u32)(0x92b7f8u));
    /* 005c0773: fmul dword ptr [esp + 0x38] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x38u));
    /* 005c0777: fadd dword ptr [esp + 0x34] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x34u));
    /* 005c077b: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 005c077f: fstp dword ptr [esi + ebp*4 + 0x138] */ W_F32((u32)(r_esi+r_ebp*4+0x138u), ST(0)); FPOP();
    /* 005c0786: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005c0789: add ebp, -1 */ {  u32 a = r_ebp; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005c078c: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c078e: jl 0x5c0797 */ if ((fS!=fO)) goto L_005c0797;
L_005c0790:; BB(0x005c0790);
    /* 005c0790: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 005c0792: mov edi, 1 */ r_edi = 0x1u;
L_005c0797:; BB(0x005c0797);
    /* 005c0797: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 005c079b: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
L_005c079f:; BB(0x005c079f);
    /* 005c079f: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005c07a1: jl 0x5c08b7 */ if ((fS!=fO)) goto L_005c08b7;
L_005c07a7:; BB(0x005c07a7);
    /* 005c07a7: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c07a9: je 0x5c075b */ if (fZ) goto L_005c075b;
L_005c07ab:; BB(0x005c07ab);
    /* 005c07ab: mov dword ptr [esi + ebp*4 + 0x138], edx */ W32((u32)(r_esi+r_ebp*4+0x138u), r_edx);
    /* 005c07b2: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005c07b5: add ebp, -1 */ {  u32 a = r_ebp; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005c07b8: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c07ba: jl 0x5c079f */ if ((fS!=fO)) goto L_005c079f;
L_005c07bc:; BB(0x005c07bc);
    /* 005c07bc: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 005c07be: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 005c07c0: jmp 0x5c079f */ goto L_005c079f;
L_005c07c2:; BB(0x005c07c2);
    /* 005c07c2: lea ecx, [esi + 0x138] */ r_ecx = (u32)(r_esi+0x138u);
    /* 005c07c8: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 005c07ca: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 005c07cc: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 005c07ce: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005c07d0: lea eax, [esi + 0x538] */ r_eax = (u32)(r_esi+0x538u);
L_005c07d6:; BB(0x005c07d6);
    /* 005c07d6: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 005c07d8: mov dword ptr [ecx + 4], ebx */ W32((u32)(r_ecx+0x4u), r_ebx);
    /* 005c07db: mov dword ptr [ecx + 8], ebp */ W32((u32)(r_ecx+0x8u), r_ebp);
    /* 005c07de: mov dword ptr [ecx + 0xc], edi */ W32((u32)(r_ecx+0xcu), r_edi);
    /* 005c07e1: add ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c07e4: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005c07e6: ja 0x5c07d6 */ if ((!fC&&!fZ)) goto L_005c07d6;
L_005c07e8:; BB(0x005c07e8);
    /* 005c07e8: mov eax, dword ptr [esi + 0x8c] */ r_eax = R32((u32)(r_esi+0x8cu));
    /* 005c07ee: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005c07f0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 005c07f2: jbe 0x5c08b7 */ if ((fC||fZ)) goto L_005c08b7;
L_005c07f8:; BB(0x005c07f8);
    /* 005c07f8: mov ecx, esi */ r_ecx = r_esi;
L_005c07fa:; BB(0x005c07fa);
    /* 005c07fa: fld dword ptr [ecx + edx*8 + 0x98] */ FPUSH(R_F32((u32)(r_ecx+r_edx*8+0x98u)));
    /* 005c0801: fmul dword ptr [0x92b7fc] */ ST(0) = ST(0) * R_F32((u32)(0x92b7fcu));
    /* 005c0807: movzx edi, byte ptr [ecx + edx*2 + 0xb2] */ r_edi = (u32)R8((u32)(r_ecx+r_edx*2+0xb2u));
    /* 005c080f: movzx eax, byte ptr [ecx + edx*2 + 0xb3] */ r_eax = (u32)R8((u32)(r_ecx+r_edx*2+0xb3u));
    /* 005c0817: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 005c081b: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 005c081e: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 005c0821: fdiv dword ptr [0x92b7f0] */ ST(0) = ST(0) / R_F32((u32)(0x92b7f0u));
    /* 005c0827: fmul dword ptr [0x92b7f4] */ ST(0) = ST(0) * R_F32((u32)(0x92b7f4u));
    /* 005c082d: fdiv dword ptr [0x92b7ec] */ ST(0) = ST(0) / R_F32((u32)(0x92b7ecu));
    /* 005c0833: mov dword ptr [esp + 0x3c], edx */ W32((u32)(r_esp+0x3cu), r_edx);
    /* 005c0837: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 005c083b: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 005c0840: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005c0845: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 005c0849: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 005c084d: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 005c0851: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 005c0855: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 005c0859: shl edi, 9 */ { u32 c = (9u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 005c085c: add edi, 0xffffc000 */ {  u32 a = r_edi; u32 b = 0xffffc000u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005c0862: mov dword ptr [esp + 0x40], ecx */ W32((u32)(r_esp+0x40u), r_ecx);
    /* 005c0866: lea ebp, [ecx + 0x338] */ r_ebp = (u32)(r_ecx+0x338u);
    /* 005c086c: lea ebx, [ecx + 0x13c] */ r_ebx = (u32)(r_ecx+0x13cu);
L_005c0872:; BB(0x005c0872);
    /* 005c0872: mov ecx, edi */ r_ecx = r_edi;
    /* 005c0874: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x5c0879u); f_0082dcbc();
    /* 005c0879: fadd dword ptr [0x92b7f8] */ ST(0) = ST(0) + R_F32((u32)(0x92b7f8u));
    /* 005c087f: fmul dword ptr [esp + 0x38] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x38u));
    /* 005c0883: fadd dword ptr [ebp - 4] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xfffffffcu));
    /* 005c0886: fstp dword ptr [ebp - 4] */ W_F32((u32)(r_ebp+0xfffffffcu), ST(0)); FPOP();
    /* 005c0889: add edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005c088b: add ebp, -4 */ {  u32 a = r_ebp; u32 b = 0xfffffffcu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005c088e: cmp ebx, ebp */ {  u32 a = r_ebx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005c0890: jbe 0x5c0872 */ if ((fC||fZ)) goto L_005c0872;
L_005c0892:; BB(0x005c0892);
    /* 005c0892: mov edx, dword ptr [esp + 0x3c] */ r_edx = R32((u32)(r_esp+0x3cu));
    /* 005c0896: mov ecx, dword ptr [esp + 0x40] */ r_ecx = R32((u32)(r_esp+0x40u));
    /* 005c089a: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c089d: cmp edx, dword ptr [ecx + 0x8c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x8cu)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005c08a3: jb 0x5c07fa */ if (fC) goto L_005c07fa;
L_005c08a9:; BB(0x005c08a9);
    /* 005c08a9: mov esi, ecx */ r_esi = r_ecx;
    /* 005c08ab: jmp 0x5c08b7 */ goto L_005c08b7;
L_005c08ad:; BB(0x005c08ad);
    /* 005c08ad: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c08ae: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c08af: call 0x5bcc88 */ r_esp -= 4; W32(r_esp, 0x5c08b4u); f_005bcc88();
    /* 005c08b4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005c08b7:; BB(0x005c08b7);
    /* 005c08b7: mov ecx, esi */ r_ecx = r_esi;
    /* 005c08b9: call 0x5bf8b0 */ r_esp -= 4; W32(r_esp, 0x5c08beu); f_005bf8b0();
L_005c08be:; BB(0x005c08be);
    /* 005c08be: push dword ptr [0xa0f67c] */ { u32 v = R32((u32)(0xa0f67cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005c08c4: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 005c08c7: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 005c08ca: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c08cc: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c08ce: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c08d0: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 005c08d7: call 0x7c1100 */ r_esp -= 4; W32(r_esp, 0x5c08dcu); f_007c1100();
    /* 005c08dc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c08de: jne 0x5c040c */ if (!fZ) goto L_005c040c;
L_005c08e4:; BB(0x005c08e4);
    /* 005c08e4: mov ecx, esi */ r_ecx = r_esi;
    /* 005c08e6: call 0x5be270 */ r_esp -= 4; W32(r_esp, 0x5c08ebu); f_005be270();
    /* 005c08eb: mov ebx, eax */ r_ebx = r_eax;
    /* 005c08ed: mov ecx, esi */ r_ecx = r_esi;
    /* 005c08ef: call 0x5c0b38 */ r_esp -= 4; W32(r_esp, 0x5c08f4u); f_005c0b38();
    /* 005c08f4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c08f6: jne 0x5c091f */ if (!fZ) goto L_005c091f;
L_005c08f8:; BB(0x005c08f8);
    /* 005c08f8: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c08fa: je 0x5c0940 */ if (fZ) goto L_005c0940;
L_005c08fc:; BB(0x005c08fc);
    /* 005c08fc: mov dword ptr [esp + 0x20], ebx */ W32((u32)(r_esp+0x20u), r_ebx);
    /* 005c0900: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 005c0904: fmul dword ptr [0x92b7e8] */ ST(0) = ST(0) * R_F32((u32)(0x92b7e8u));
    /* 005c090a: fadd dword ptr [esi + 0x608] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x608u));
    /* 005c0910: mov ecx, esi */ r_ecx = r_esi;
    /* 005c0912: fstp dword ptr [esi + 0x608] */ W_F32((u32)(r_esi+0x608u), ST(0)); FPOP();
    /* 005c0918: call 0x5bf8b0 */ r_esp -= 4; W32(r_esp, 0x5c091du); f_005bf8b0();
    /* 005c091d: jmp 0x5c0940 */ goto L_005c0940;
L_005c091f:; BB(0x005c091f);
    /* 005c091f: mov dword ptr [esp + 0x20], ebx */ W32((u32)(r_esp+0x20u), r_ebx);
    /* 005c0923: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 005c0927: fmul dword ptr [0x92b7e4] */ ST(0) = ST(0) * R_F32((u32)(0x92b7e4u));
    /* 005c092d: fadd dword ptr [esi + 0x608] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x608u));
    /* 005c0933: mov ecx, esi */ r_ecx = r_esi;
    /* 005c0935: fstp dword ptr [esi + 0x608] */ W_F32((u32)(r_esi+0x608u), ST(0)); FPOP();
    /* 005c093b: call 0x5bf8b0 */ r_esp -= 4; W32(r_esp, 0x5c0940u); f_005bf8b0();
L_005c0940:; BB(0x005c0940);
    /* 005c0940: fld dword ptr [esi + 0x608] */ FPUSH(R_F32((u32)(r_esi+0x608u)));
    /* 005c0946: fcom dword ptr [0x92b800] */ fx_compare(ST(0), R_F32((u32)(0x92b800u))); 
    /* 005c094c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005c094e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005c094f: jae 0x5c0963 */ if (!fC) goto L_005c0963;
L_005c0951:; BB(0x005c0951);
    /* 005c0951: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005c0953: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005c0955: mov dword ptr [esi + 0x608], eax */ W32((u32)(r_esi+0x608u), r_eax);
    /* 005c095b: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005c095e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005c095f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c0960: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005c0961: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005c0962: ret  */ FN_RET(0x005c03f8); r_esp += 4; return;
L_005c0963:; BB(0x005c0963);
    /* 005c0963: fcomp dword ptr [0x92b7f8] */ fx_compare(ST(0), R_F32((u32)(0x92b7f8u))); FPOP();
    /* 005c0969: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005c096b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005c096c: jbe 0x5c040c */ if ((fC||fZ)) goto L_005c040c;
L_005c0972:; BB(0x005c0972);
    /* 005c0972: mov eax, 0x3f800000 */ r_eax = 0x3f800000u;
    /* 005c0977: mov dword ptr [esi + 0x608], eax */ W32((u32)(r_esi+0x608u), r_eax);
    /* 005c097d: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005c0980: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005c0981: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c0982: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005c0983: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005c0984: ret  */ FN_RET(0x005c03f8); r_esp += 4; return;
L_005c0985:; BB(0x005c0985);
    /* 005c0985: mov edx, eax */ r_edx = r_eax;
    /* 005c0987: jmp 0x5c0487 */ goto L_005c0487;
L_005c098c:; BB(0x005c098c);
    /* 005c098c: mov ebp, dword ptr [esi + 0x8c] */ r_ebp = R32((u32)(r_esi+0x8cu));
    /* 005c0992: mov edx, 0x85 */ r_edx = 0x85u;
    /* 005c0997: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 005c0999: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 005c099b: jbe 0x5c09c2 */ if ((fC||fZ)) goto L_005c09c2;
L_005c099d:; BB(0x005c099d);
    /* 005c099d: mov ebx, dword ptr [esi + 0x604] */ r_ebx = R32((u32)(r_esi+0x604u));
L_005c09a3:; BB(0x005c09a3);
    /* 005c09a3: movzx eax, byte ptr [edi + esi + 0xb0] */ r_eax = (u32)R8((u32)(r_edi+r_esi+0xb0u));
    /* 005c09ab: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005c09ae: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c09b0: jl 0x5c09cc */ if ((fS!=fO)) goto L_005c09cc;
L_005c09b2:; BB(0x005c09b2);
    /* 005c09b2: cmp edi, ebp */ {  u32 a = r_edi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005c09b4: jb 0x5c09a3 */ if (fC) goto L_005c09a3;
L_005c09b6:; BB(0x005c09b6);
    /* 005c09b6: cmp edx, 0x85 */ {  u32 a = r_edx; u32 b = 0x85u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c09bc: jne 0x5c0491 */ if (!fZ) goto L_005c0491;
L_005c09c2:; BB(0x005c09c2);
    /* 005c09c2: mov edx, 0x7f */ r_edx = 0x7fu;
    /* 005c09c7: jmp 0x5c0491 */ goto L_005c0491;
L_005c09cc:; BB(0x005c09cc);
    /* 005c09cc: mov edx, eax */ r_edx = r_eax;
    /* 005c09ce: jmp 0x5c09b6 */ goto L_005c09b6;
L_005c09d0:; BB(0x005c09d0);
    /* 005c09d0: cmp ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c09d3: jge 0x5c06be */ if ((fS==fO)) goto L_005c06be;
L_005c09d9:; BB(0x005c09d9);
    /* 005c09d9: mov edx, ebx */ r_edx = r_ebx;
    /* 005c09db: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 005c09dd: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005c09df: jle 0x5c09fe */ if ((fZ||fS!=fO)) goto L_005c09fe;
L_005c09e1:; BB(0x005c09e1);
    /* 005c09e1: mov eax, dword ptr [esi + 0x604] */ r_eax = R32((u32)(r_esi+0x604u));
L_005c09e7:; BB(0x005c09e7);
    /* 005c09e7: movzx ecx, byte ptr [edi + esi + 0xb0] */ r_ecx = (u32)R8((u32)(r_edi+r_esi+0xb0u));
    /* 005c09ef: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c09f1: jl 0x5c0aee */ if ((fS!=fO)) goto L_005c0aee;
L_005c09f7:; BB(0x005c09f7);
    /* 005c09f7: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005c09fa: cmp edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c09fc: jl 0x5c09e7 */ if ((fS!=fO)) goto L_005c09e7;
L_005c09fe:; BB(0x005c09fe);
    /* 005c09fe: add ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005c0a01: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c0a03: jl 0x5c0ac8 */ if ((fS!=fO)) goto L_005c0ac8;
L_005c0a09:; BB(0x005c0a09);
    /* 005c0a09: mov eax, ebx */ r_eax = r_ebx;
    /* 005c0a0b: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005c0a0d: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c0a10: jl 0x5c0aa4 */ if ((fS!=fO)) goto L_005c0aa4;
L_005c0a16:; BB(0x005c0a16);
    /* 005c0a16: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 005c0a1a: mov dword ptr [esp + 0x28], ebp */ W32((u32)(r_esp+0x28u), r_ebp);
    /* 005c0a1e: lea eax, [edx + 5] */ r_eax = (u32)(r_edx+0x5u);
L_005c0a21:; BB(0x005c0a21);
    /* 005c0a21: movzx edx, byte ptr [ebx + esi + 0xb0] */ r_edx = (u32)R8((u32)(r_ebx+r_esi+0xb0u));
    /* 005c0a29: mov byte ptr [ebx + esi + 0xb1], dl */ W8((u32)(r_ebx+r_esi+0xb1u), (u8)r_edx);
    /* 005c0a30: mov ebp, dword ptr [esi + ebx*4 + 0x90] */ r_ebp = R32((u32)(r_esi+r_ebx*4+0x90u));
    /* 005c0a37: mov dword ptr [esi + ebx*4 + 0x94], ebp */ W32((u32)(r_esi+r_ebx*4+0x94u), r_ebp);
    /* 005c0a3e: movzx edx, byte ptr [ebx + esi + 0xaf] */ r_edx = (u32)R8((u32)(r_ebx+r_esi+0xafu));
    /* 005c0a46: mov byte ptr [ebx + esi + 0xb0], dl */ W8((u32)(r_ebx+r_esi+0xb0u), (u8)r_edx);
    /* 005c0a4d: mov edi, dword ptr [esi + ebx*4 + 0x8c] */ r_edi = R32((u32)(r_esi+r_ebx*4+0x8cu));
    /* 005c0a54: mov dword ptr [esi + ebx*4 + 0x90], edi */ W32((u32)(r_esi+r_ebx*4+0x90u), r_edi);
    /* 005c0a5b: movzx edx, byte ptr [ebx + esi + 0xae] */ r_edx = (u32)R8((u32)(r_ebx+r_esi+0xaeu));
    /* 005c0a63: mov byte ptr [ebx + esi + 0xaf], dl */ W8((u32)(r_ebx+r_esi+0xafu), (u8)r_edx);
    /* 005c0a6a: mov edx, dword ptr [esi + ebx*4 + 0x88] */ r_edx = R32((u32)(r_esi+r_ebx*4+0x88u));
    /* 005c0a71: mov dword ptr [esi + ebx*4 + 0x8c], edx */ W32((u32)(r_esi+r_ebx*4+0x8cu), r_edx);
    /* 005c0a78: movzx edx, byte ptr [ebx + esi + 0xad] */ r_edx = (u32)R8((u32)(r_ebx+r_esi+0xadu));
    /* 005c0a80: mov byte ptr [ebx + esi + 0xae], dl */ W8((u32)(r_ebx+r_esi+0xaeu), (u8)r_edx);
    /* 005c0a87: mov edx, dword ptr [esi + ebx*4 + 0x84] */ r_edx = R32((u32)(r_esi+r_ebx*4+0x84u));
    /* 005c0a8e: mov dword ptr [esi + ebx*4 + 0x88], edx */ W32((u32)(r_esi+r_ebx*4+0x88u), r_edx);
    /* 005c0a95: add ebx, -4 */ {  u32 a = r_ebx; u32 b = 0xfffffffcu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005c0a98: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c0a9a: jge 0x5c0a21 */ if ((fS==fO)) goto L_005c0a21;
L_005c0a9c:; BB(0x005c0a9c);
    /* 005c0a9c: mov edx, dword ptr [esp + 0x2c] */ r_edx = R32((u32)(r_esp+0x2cu));
    /* 005c0aa0: mov ebp, dword ptr [esp + 0x28] */ r_ebp = R32((u32)(r_esp+0x28u));
L_005c0aa4:; BB(0x005c0aa4);
    /* 005c0aa4: movzx eax, byte ptr [ebx + esi + 0xb0] */ r_eax = (u32)R8((u32)(r_ebx+r_esi+0xb0u));
    /* 005c0aac: mov byte ptr [ebx + esi + 0xb1], al */ W8((u32)(r_ebx+r_esi+0xb1u), (u8)r_eax);
    /* 005c0ab3: mov edi, dword ptr [esi + ebx*4 + 0x90] */ r_edi = R32((u32)(r_esi+r_ebx*4+0x90u));
    /* 005c0aba: mov dword ptr [esi + ebx*4 + 0x94], edi */ W32((u32)(r_esi+r_ebx*4+0x94u), r_edi);
    /* 005c0ac1: add ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005c0ac4: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c0ac6: jge 0x5c0aa4 */ if ((fS==fO)) goto L_005c0aa4;
L_005c0ac8:; BB(0x005c0ac8);
    /* 005c0ac8: mov eax, dword ptr [esi + 0x604] */ r_eax = R32((u32)(r_esi+0x604u));
    /* 005c0ace: mov byte ptr [edx + esi + 0xb0], al */ W8((u32)(r_edx+r_esi+0xb0u), (u8)r_eax);
    /* 005c0ad5: mov ebx, dword ptr [esi + 0x608] */ r_ebx = R32((u32)(r_esi+0x608u));
    /* 005c0adb: mov dword ptr [esi + edx*4 + 0x90], ebx */ W32((u32)(r_esi+r_edx*4+0x90u), r_ebx);
    /* 005c0ae2: add dword ptr [esi + 0x8c], 1 */ { u32 ad = (u32)(r_esi+0x8cu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 005c0ae9: jmp 0x5c06be */ goto L_005c06be;
L_005c0aee:; BB(0x005c0aee);
    /* 005c0aee: mov edx, edi */ r_edx = r_edi;
    /* 005c0af0: jmp 0x5c09fe */ goto L_005c09fe;
L_005c0af5:; BB(0x005c0af5);
    /* 005c0af5: mov ebp, dword ptr [esp + 0x28] */ r_ebp = R32((u32)(r_esp+0x28u));
    /* 005c0af9: mov edx, edi */ r_edx = r_edi;
    /* 005c0afb: jmp 0x5c05d1 */ goto L_005c05d1;
}

void f_005c0b00(void) /* sub_5C0B00 */
{
    FN_ENTER(0x005c0b00);
    /* 005c0b00: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005c0b01: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005c0b03: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005c0b05: call 0x5bdea8 */ r_esp -= 4; W32(r_esp, 0x5c0b0au); f_005bdea8();
    /* 005c0b0a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c0b0c: je 0x5c0b32 */ if (fZ) goto L_005c0b32;
L_005c0b0e:; BB(0x005c0b0e);
    /* 005c0b0e: mov eax, dword ptr [ebx + 0x858] */ r_eax = R32((u32)(r_ebx+0x858u));
    /* 005c0b14: cmp eax, 0x12 */ {  u32 a = r_eax; u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005c0b17: jge 0x5c0b2b */ if ((fS==fO)) goto L_005c0b2b;
L_005c0b19:; BB(0x005c0b19);
    /* 005c0b19: mov eax, dword ptr [ebx + 0x854] */ r_eax = R32((u32)(r_ebx+0x854u));
    /* 005c0b1f: cmp eax, 0x12 */ {  u32 a = r_eax; u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005c0b22: jl 0x5c0b32 */ if ((fS!=fO)) goto L_005c0b32;
L_005c0b24:; BB(0x005c0b24);
    /* 005c0b24: mov eax, 1 */ r_eax = 0x1u;
    /* 005c0b29: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005c0b2a: ret  */ FN_RET(0x005c0b00); r_esp += 4; return;
L_005c0b2b:; BB(0x005c0b2b);
    /* 005c0b2b: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 005c0b30: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005c0b31: ret  */ FN_RET(0x005c0b00); r_esp += 4; return;
L_005c0b32:; BB(0x005c0b32);
    /* 005c0b32: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c0b34: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005c0b35: ret  */ FN_RET(0x005c0b00); r_esp += 4; return;
}

void f_005c0b38(void) /* sub_5C0B38 */
{
    FN_ENTER(0x005c0b38);
    /* 005c0b38: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005c0b39: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005c0b3b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005c0b3d: call 0x5bdea8 */ r_esp -= 4; W32(r_esp, 0x5c0b42u); f_005bdea8();
    /* 005c0b42: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c0b44: je 0x5c0b6a */ if (fZ) goto L_005c0b6a;
L_005c0b46:; BB(0x005c0b46);
    /* 005c0b46: mov eax, dword ptr [ebx + 0x84c] */ r_eax = R32((u32)(r_ebx+0x84cu));
    /* 005c0b4c: cmp eax, 0x12 */ {  u32 a = r_eax; u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005c0b4f: jge 0x5c0b63 */ if ((fS==fO)) goto L_005c0b63;
L_005c0b51:; BB(0x005c0b51);
    /* 005c0b51: mov eax, dword ptr [ebx + 0x850] */ r_eax = R32((u32)(r_ebx+0x850u));
    /* 005c0b57: cmp eax, 0x12 */ {  u32 a = r_eax; u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005c0b5a: jl 0x5c0b6a */ if ((fS!=fO)) goto L_005c0b6a;
L_005c0b5c:; BB(0x005c0b5c);
    /* 005c0b5c: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 005c0b61: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005c0b62: ret  */ FN_RET(0x005c0b38); r_esp += 4; return;
L_005c0b63:; BB(0x005c0b63);
    /* 005c0b63: mov eax, 1 */ r_eax = 0x1u;
    /* 005c0b68: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005c0b69: ret  */ FN_RET(0x005c0b38); r_esp += 4; return;
L_005c0b6a:; BB(0x005c0b6a);
    /* 005c0b6a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c0b6c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005c0b6d: ret  */ FN_RET(0x005c0b38); r_esp += 4; return;
}

void f_005c0b70(void) /* sub_5C0B70 */
{
    FN_ENTER(0x005c0b70);
    /* 005c0b70: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005c0b71: mov esi, ecx */ r_esi = r_ecx;
    /* 005c0b73: mov eax, dword ptr [esi + 0x53c] */ r_eax = R32((u32)(r_esi+0x53cu));
    /* 005c0b79: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c0b7b: jne 0x5c0c2a */ if (!fZ) goto L_005c0c2a;
L_005c0b81:; BB(0x005c0b81);
    /* 005c0b81: mov eax, dword ptr [esi + 0x540] */ r_eax = R32((u32)(r_esi+0x540u));
    /* 005c0b87: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c0b89: jne 0x5c0bb9 */ if (!fZ) goto L_005c0bb9;
L_005c0b8b:; BB(0x005c0b8b);
    /* 005c0b8b: push dword ptr [0xa0f674] */ { u32 v = R32((u32)(0xa0f674u)); r_esp -= 4; W32(r_esp, v); }
    /* 005c0b91: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 005c0b94: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 005c0b97: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c0b99: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c0b9b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c0b9d: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 005c0ba4: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x5c0ba9u); f_007c1160();
    /* 005c0ba9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c0bab: je 0x5c0c2a */ if (fZ) goto L_005c0c2a;
L_005c0bad:; BB(0x005c0bad);
    /* 005c0bad: mov dword ptr [esi + 0x540], 1 */ W32((u32)(r_esi+0x540u), 0x1u);
    /* 005c0bb7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005c0bb8: ret  */ FN_RET(0x005c0b70); r_esp += 4; return;
L_005c0bb9:; BB(0x005c0bb9);
    /* 005c0bb9: push dword ptr [0xa0f674] */ { u32 v = R32((u32)(0xa0f674u)); r_esp -= 4; W32(r_esp, v); }
    /* 005c0bbf: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 005c0bc2: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 005c0bc5: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c0bc7: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c0bc9: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c0bcb: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 005c0bd2: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x5c0bd7u); f_007c1160();
    /* 005c0bd7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c0bd9: je 0x5c0bfe */ if (fZ) goto L_005c0bfe;
L_005c0bdb:; BB(0x005c0bdb);
    /* 005c0bdb: mov dword ptr [esi + 0x540], 0 */ W32((u32)(r_esi+0x540u), 0x0u);
    /* 005c0be5: lea eax, [esi + 0x38] */ r_eax = (u32)(r_esi+0x38u);
    /* 005c0be8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c0be9: push dword ptr [esi + 0x544] */ { u32 v = R32((u32)(r_esi+0x544u)); r_esp -= 4; W32(r_esp, v); }
    /* 005c0bef: call 0x5bcbd4 */ r_esp -= 4; W32(r_esp, 0x5c0bf4u); f_005bcbd4();
    /* 005c0bf4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c0bf7: call 0x5bca88 */ r_esp -= 4; W32(r_esp, 0x5c0bfcu); f_005bca88();
    /* 005c0bfc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005c0bfd: ret  */ FN_RET(0x005c0b70); r_esp += 4; return;
L_005c0bfe:; BB(0x005c0bfe);
    /* 005c0bfe: push dword ptr [0xa0f67c] */ { u32 v = R32((u32)(0xa0f67cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005c0c04: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 005c0c07: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 005c0c0a: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c0c0c: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c0c0e: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c0c10: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 005c0c17: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x5c0c1cu); f_007c1160();
    /* 005c0c1c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c0c1e: je 0x5c0c2a */ if (fZ) goto L_005c0c2a;
L_005c0c20:; BB(0x005c0c20);
    /* 005c0c20: mov dword ptr [esi + 0x540], 0 */ W32((u32)(r_esi+0x540u), 0x0u);
L_005c0c2a:; BB(0x005c0c2a);
    /* 005c0c2a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005c0c2b: ret  */ FN_RET(0x005c0b70); r_esp += 4; return;
}

void f_005c0c2c(void) /* sub_5C0C2C */
{
    FN_ENTER(0x005c0c2c);
    /* 005c0c2c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005c0c2d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005c0c2e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c0c2f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005c0c30: sub esp, 0x1f4 */ {  u32 a = r_esp; u32 b = 0x1f4u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c0c36: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005c0c38: push 0x92b888 */ { u32 v = 0x92b888u; r_esp -= 4; W32(r_esp, v); }
    /* 005c0c3d: push 0x30008 */ { u32 v = 0x30008u; r_esp -= 4; W32(r_esp, v); }
    /* 005c0c42: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x5c0c47u); f_0061cdb0();
    /* 005c0c47: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c0c4a: mov eax, dword ptr [ebx + 0x540] */ r_eax = R32((u32)(r_ebx+0x540u));
    /* 005c0c50: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c0c53: je 0x5c1856 */ if (fZ) goto L_005c1856;
L_005c0c59:; BB(0x005c0c59);
    /* 005c0c59: push dword ptr [ebx + 0x544] */ { u32 v = R32((u32)(r_ebx+0x544u)); r_esp -= 4; W32(r_esp, v); }
    /* 005c0c5f: push 0x92b8b4 */ { u32 v = 0x92b8b4u; r_esp -= 4; W32(r_esp, v); }
    /* 005c0c64: push 0x3000c */ { u32 v = 0x3000cu; r_esp -= 4; W32(r_esp, v); }
    /* 005c0c69: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x5c0c6eu); f_0061cdb0();
    /* 005c0c6e: push dword ptr [ebx + 0x548] */ { u32 v = R32((u32)(r_ebx+0x548u)); r_esp -= 4; W32(r_esp, v); }
    /* 005c0c74: push 0x92b8bc */ { u32 v = 0x92b8bcu; r_esp -= 4; W32(r_esp, v); }
    /* 005c0c79: push 0x3000e */ { u32 v = 0x3000eu; r_esp -= 4; W32(r_esp, v); }
    /* 005c0c7e: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x5c0c83u); f_0061cdb0();
    /* 005c0c83: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c0c86: mov eax, dword ptr [ebx + 0x54c] */ r_eax = R32((u32)(r_ebx+0x54cu));
    /* 005c0c8c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c0c8e: je 0x5c0cd2 */ if (fZ) goto L_005c0cd2;
L_005c0c90:; BB(0x005c0c90);
    /* 005c0c90: mov edi, dword ptr [ebx + 0x550] */ r_edi = R32((u32)(r_ebx+0x550u));
    /* 005c0c96: mov byte ptr [esp + 0x59], 0 */ W8((u32)(r_esp+0x59u), 0x0u);
    /* 005c0c9b: mov eax, 0x2d */ r_eax = 0x2du;
    /* 005c0ca0: mov ebp, edi */ r_ebp = r_edi;
    /* 005c0ca2: mov byte ptr [esp + 0x54], al */ W8((u32)(r_esp+0x54u), (u8)r_eax);
    /* 005c0ca6: mov byte ptr [esp + 0x55], al */ W8((u32)(r_esp+0x55u), (u8)r_eax);
    /* 005c0caa: mov byte ptr [esp + 0x56], al */ W8((u32)(r_esp+0x56u), (u8)r_eax);
    /* 005c0cae: mov byte ptr [esp + 0x57], al */ W8((u32)(r_esp+0x57u), (u8)r_eax);
    /* 005c0cb2: sar ebp, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebp = r;  } }
    /* 005c0cb5: mov byte ptr [esp + 0x58], al */ W8((u32)(r_esp+0x58u), (u8)r_eax);
    /* 005c0cb9: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 005c0cbe: imul edi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_edi; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005c0cc0: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 005c0cc2: sub edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005c0cc4: lea esi, [edx + edx] */ r_esi = (u32)(r_edx+r_edx);
    /* 005c0cc7: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005c0cc9: add esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005c0ccb: sub edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 005c0ccd: mov byte ptr [esp + edi + 0x54], 0x2a */ W8((u32)(r_esp+r_edi+0x54u), 0x2au);
L_005c0cd2:; BB(0x005c0cd2);
    /* 005c0cd2: mov eax, dword ptr [ebx + 0x53c] */ r_eax = R32((u32)(r_ebx+0x53cu));
    /* 005c0cd8: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c0cdb: je 0x5c1847 */ if (fZ) goto L_005c1847;
L_005c0ce1:; BB(0x005c0ce1);
    /* 005c0ce1: mov ebp, 0xff808080 */ r_ebp = 0xff808080u;
    /* 005c0ce6: mov edx, 0xff808080 */ r_edx = 0xff808080u;
L_005c0ceb:; BB(0x005c0ceb);
    /* 005c0ceb: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c0cec: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c0ced: mov eax, dword ptr [ebx + 0x558] */ r_eax = R32((u32)(r_ebx+0x558u));
    /* 005c0cf3: lea ecx, [ebx + 0x558] */ r_ecx = (u32)(r_ebx+0x558u);
    /* 005c0cf9: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 005c0cfb: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 005c0cfd: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x5c0d00u); call_ind(t); }
    /* 005c0d00: mov eax, dword ptr [ebx + 0x53c] */ r_eax = R32((u32)(r_ebx+0x53cu));
    /* 005c0d06: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c0d09: je 0x5c1838 */ if (fZ) goto L_005c1838;
L_005c0d0f:; BB(0x005c0d0f);
    /* 005c0d0f: mov ebp, 0xff808080 */ r_ebp = 0xff808080u;
    /* 005c0d14: mov edx, 0xff808080 */ r_edx = 0xff808080u;
L_005c0d19:; BB(0x005c0d19);
    /* 005c0d19: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c0d1a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c0d1b: mov eax, dword ptr [ebx + 0x578] */ r_eax = R32((u32)(r_ebx+0x578u));
    /* 005c0d21: lea ecx, [ebx + 0x578] */ r_ecx = (u32)(r_ebx+0x578u);
    /* 005c0d27: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 005c0d29: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 005c0d2b: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x5c0d2eu); call_ind(t); }
    /* 005c0d2e: mov eax, dword ptr [ebx + 0x53c] */ r_eax = R32((u32)(r_ebx+0x53cu));
    /* 005c0d34: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c0d37: je 0x5c1829 */ if (fZ) goto L_005c1829;
L_005c0d3d:; BB(0x005c0d3d);
    /* 005c0d3d: mov ebp, 0xff808080 */ r_ebp = 0xff808080u;
    /* 005c0d42: mov edx, 0xff808080 */ r_edx = 0xff808080u;
L_005c0d47:; BB(0x005c0d47);
    /* 005c0d47: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c0d48: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c0d49: mov eax, dword ptr [ebx + 0x5a0] */ r_eax = R32((u32)(r_ebx+0x5a0u));
    /* 005c0d4f: lea ecx, [ebx + 0x5a0] */ r_ecx = (u32)(r_ebx+0x5a0u);
    /* 005c0d55: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 005c0d57: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 005c0d59: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x5c0d5cu); call_ind(t); }
    /* 005c0d5c: mov eax, dword ptr [ebx + 0x53c] */ r_eax = R32((u32)(r_ebx+0x53cu));
    /* 005c0d62: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c0d65: je 0x5c181a */ if (fZ) goto L_005c181a;
L_005c0d6b:; BB(0x005c0d6b);
    /* 005c0d6b: mov ebp, 0xff808080 */ r_ebp = 0xff808080u;
    /* 005c0d70: mov edx, 0xff808080 */ r_edx = 0xff808080u;
L_005c0d75:; BB(0x005c0d75);
    /* 005c0d75: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c0d76: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c0d77: mov eax, dword ptr [ebx + 0x5c8] */ r_eax = R32((u32)(r_ebx+0x5c8u));
    /* 005c0d7d: lea ecx, [ebx + 0x5c8] */ r_ecx = (u32)(r_ebx+0x5c8u);
    /* 005c0d83: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 005c0d85: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 005c0d87: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x5c0d8au); call_ind(t); }
    /* 005c0d8a: fld dword ptr [0x92b7dc] */ FPUSH(R_F32((u32)(0x92b7dcu)));
    /* 005c0d90: fld dword ptr [0x92b7d4] */ FPUSH(R_F32((u32)(0x92b7d4u)));
    /* 005c0d96: fld dword ptr [0x92b7d0] */ FPUSH(R_F32((u32)(0x92b7d0u)));
    /* 005c0d9c: mov ecx, 0x3f8e147b */ r_ecx = 0x3f8e147bu;
    /* 005c0da1: mov eax, dword ptr [ebx + 0x5f4] */ r_eax = R32((u32)(r_ebx+0x5f4u));
    /* 005c0da7: mov ebp, dword ptr [ebx + 0x5f8] */ r_ebp = R32((u32)(r_ebx+0x5f8u));
    /* 005c0dad: mov edx, dword ptr [ebx + 0x5fc] */ r_edx = R32((u32)(r_ebx+0x5fcu));
    /* 005c0db3: mov esi, dword ptr [ebx + 0x600] */ r_esi = R32((u32)(r_ebx+0x600u));
    /* 005c0db9: mov dword ptr [esp + 0x5c], eax */ W32((u32)(r_esp+0x5cu), r_eax);
    /* 005c0dbd: mov edi, 0xff303030 */ r_edi = 0xff303030u;
    /* 005c0dc2: mov dword ptr [esp + 0x64], 0x3f8ccccd */ W32((u32)(r_esp+0x64u), 0x3f8ccccdu);
    /* 005c0dca: mov dword ptr [esp + 0x60], edx */ W32((u32)(r_esp+0x60u), r_edx);
    /* 005c0dce: mov dword ptr [esp + 0x68], edi */ W32((u32)(r_esp+0x68u), r_edi);
    /* 005c0dd2: mov dword ptr [esp + 0x74], 0x3f8ccccd */ W32((u32)(r_esp+0x74u), 0x3f8ccccdu);
    /* 005c0dda: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 005c0dde: mov dword ptr [esp + 0x84], 0x3f8ccccd */ W32((u32)(r_esp+0x84u), 0x3f8ccccdu);
    /* 005c0de9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005c0deb: mov dword ptr [esp + 0x94], 0x3f8ccccd */ W32((u32)(r_esp+0x94u), 0x3f8ccccdu);
    /* 005c0df6: mov dword ptr [esp + 0x70], esi */ W32((u32)(r_esp+0x70u), r_esi);
    /* 005c0dfa: mov dword ptr [esp + 0x78], edi */ W32((u32)(r_esp+0x78u), r_edi);
    /* 005c0dfe: mov dword ptr [esp + 0x7c], ebp */ W32((u32)(r_esp+0x7cu), r_ebp);
    /* 005c0e02: mov dword ptr [esp + 0x80], edx */ W32((u32)(r_esp+0x80u), r_edx);
    /* 005c0e09: mov dword ptr [esp + 0x88], edi */ W32((u32)(r_esp+0x88u), r_edi);
    /* 005c0e10: mov dword ptr [esp + 0x8c], ebp */ W32((u32)(r_esp+0x8cu), r_ebp);
    /* 005c0e17: mov dword ptr [esp + 0x90], esi */ W32((u32)(r_esp+0x90u), r_esi);
    /* 005c0e1e: mov dword ptr [esp + 0x98], edi */ W32((u32)(r_esp+0x98u), r_edi);
    /* 005c0e25: mov ebp, 0x3f8e147b */ r_ebp = 0x3f8e147bu;
    /* 005c0e2a: mov edx, 0x3f8e147b */ r_edx = 0x3f8e147bu;
    /* 005c0e2f: mov edi, 0x3f8e147b */ r_edi = 0x3f8e147bu;
    /* 005c0e34: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_005c0e36:; BB(0x005c0e36);
    /* 005c0e36: fld dword ptr [ebx + 0x5f4] */ FPUSH(R_F32((u32)(r_ebx+0x5f4u)));
    /* 005c0e3c: fld dword ptr [ebx + 0x5f8] */ FPUSH(R_F32((u32)(r_ebx+0x5f8u)));
    /* 005c0e42: fld dword ptr [ebx + 0x600] */ FPUSH(R_F32((u32)(r_ebx+0x600u)));
    /* 005c0e48: fld dword ptr [ebx + 0x5fc] */ FPUSH(R_F32((u32)(r_ebx+0x5fcu)));
    /* 005c0e4e: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005c0e50: fsub st(3) */ ST(0) = ST(0) - ST(3);
    /* 005c0e52: fdiv st(6) */ ST(0) = ST(0) / ST(6);
    /* 005c0e54: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005c0e56: fsubr st(2), st(0) */ ST(2) = ST(0) - ST(2);
    /* 005c0e58: mov dword ptr [esp + 0x10], esi */ W32((u32)(r_esp+0x10u), r_esi);
    /* 005c0e5c: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 005c0e60: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 005c0e62: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005c0e64: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 005c0e66: mov edi, 0x3f8e147b */ r_edi = 0x3f8e147bu;
    /* 005c0e6b: fld dword ptr [0x92b7d8] */ FPUSH(R_F32((u32)(0x92b7d8u)));
    /* 005c0e71: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 005c0e73: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005c0e75: fchs  */ ST(0) = -ST(0);
    /* 005c0e77: fmul dword ptr [eax + ebx + 0x334] */ ST(0) = ST(0) * R_F32((u32)(r_eax+r_ebx+0x334u));
    /* 005c0e7e: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005c0e80: fstp dword ptr [esp + 0x9c] */ W_F32((u32)(r_esp+0x9cu), ST(0)); FPOP();
    /* 005c0e87: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005c0e89: fst dword ptr [esp + 0xac] */ W_F32((u32)(r_esp+0xacu), ST(0));
    /* 005c0e90: fst dword ptr [esp + 0xbc] */ W_F32((u32)(r_esp+0xbcu), ST(0));
    /* 005c0e97: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005c0e99: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 005c0e9b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005c0e9d: fst dword ptr [esp + 0xa0] */ W_F32((u32)(r_esp+0xa0u), ST(0));
    /* 005c0ea4: fst dword ptr [esp + 0xd0] */ W_F32((u32)(r_esp+0xd0u), ST(0));
    /* 005c0eab: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 005c0ead: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005c0eaf: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 005c0eb1: fstp dword ptr [esp + 0xcc] */ W_F32((u32)(r_esp+0xccu), ST(0)); FPOP();
    /* 005c0eb8: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 005c0eba: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005c0ebc: fstp dword ptr [esp + 0xb0] */ W_F32((u32)(r_esp+0xb0u), ST(0)); FPOP();
    /* 005c0ec3: fld dword ptr [0x92b7d8] */ FPUSH(R_F32((u32)(0x92b7d8u)));
    /* 005c0ec9: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 005c0ecb: fstp dword ptr [esp + 0xc0] */ W_F32((u32)(r_esp+0xc0u), ST(0)); FPOP();
    /* 005c0ed2: mov dword ptr [esp + 0xa4], edi */ W32((u32)(r_esp+0xa4u), r_edi);
    /* 005c0ed9: mov edi, 0xff8080ff */ r_edi = 0xff8080ffu;
    /* 005c0ede: mov dword ptr [esp + 0xa8], edi */ W32((u32)(r_esp+0xa8u), r_edi);
    /* 005c0ee5: mov dword ptr [esp + 0xb4], edx */ W32((u32)(r_esp+0xb4u), r_edx);
    /* 005c0eec: mov dword ptr [esp + 0xb8], edi */ W32((u32)(r_esp+0xb8u), r_edi);
    /* 005c0ef3: mov dword ptr [esp + 0xc4], ecx */ W32((u32)(r_esp+0xc4u), r_ecx);
    /* 005c0efa: mov dword ptr [esp + 0xc8], edi */ W32((u32)(r_esp+0xc8u), r_edi);
    /* 005c0f01: add eax, -4 */ {  u32 a = r_eax; u32 b = 0xfffffffcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c0f04: mov dword ptr [esp + 0xd4], ebp */ W32((u32)(r_esp+0xd4u), r_ebp);
    /* 005c0f0b: mov dword ptr [esp + 0xd8], edi */ W32((u32)(r_esp+0xd8u), r_edi);
    /* 005c0f12: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005c0f15: cmp esi, 0x80 */ {  u32 a = r_esi; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c0f1b: jl 0x5c0e36 */ if ((fS!=fO)) goto L_005c0e36;
L_005c0f21:; BB(0x005c0f21);
    /* 005c0f21: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005c0f23: mov eax, dword ptr [ebx + 0x554] */ r_eax = R32((u32)(r_ebx+0x554u));
    /* 005c0f29: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c0f2b: jne 0x5c11fd */ if (!fZ) goto L_005c11fd;
L_005c0f31:; BB(0x005c0f31);
    /* 005c0f31: mov eax, dword ptr [ebx + 0x4c] */ r_eax = R32((u32)(r_ebx+0x4cu));
    /* 005c0f34: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 005c0f36: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 005c0f38: jbe 0x5c14e6 */ if ((fC||fZ)) goto L_005c14e6;
L_005c0f3e:; BB(0x005c0f3e);
    /* 005c0f3e: fld dword ptr [0x92b7c0] */ FPUSH(R_F32((u32)(0x92b7c0u)));
    /* 005c0f44: jmp 0x5c0f4e */ goto L_005c0f4e;
L_005c0f46:; BB(0x005c0f46);
    /* 005c0f46: fld dword ptr [0x92b7dc] */ FPUSH(R_F32((u32)(0x92b7dcu)));
    /* 005c0f4c: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
L_005c0f4e:; BB(0x005c0f4e);
    /* 005c0f4e: fld dword ptr [0x92b7cc] */ FPUSH(R_F32((u32)(0x92b7ccu)));
    /* 005c0f54: fld dword ptr [0x92b7c8] */ FPUSH(R_F32((u32)(0x92b7c8u)));
    /* 005c0f5a: movzx ecx, byte ptr [ebp + ebx + 0x70] */ r_ecx = (u32)R8((u32)(r_ebp+r_ebx+0x70u));
    /* 005c0f5f: fld dword ptr [ebx + ebp*4 + 0x50] */ FPUSH(R_F32((u32)(r_ebx+r_ebp*4+0x50u)));
    /* 005c0f63: fld dword ptr [ebx + 0x5f8] */ FPUSH(R_F32((u32)(r_ebx+0x5f8u)));
    /* 005c0f69: fsub dword ptr [ebx + 0x5f4] */ ST(0) = ST(0) - R_F32((u32)(r_ebx+0x5f4u));
    /* 005c0f6f: fld dword ptr [ebx + 0x5fc] */ FPUSH(R_F32((u32)(r_ebx+0x5fcu)));
    /* 005c0f75: fsubr dword ptr [ebx + 0x600] */ ST(0) = R_F32((u32)(r_ebx+0x600u)) - ST(0);
    /* 005c0f7b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005c0f7d: fdiv st(7) */ ST(0) = ST(0) / ST(7);
    /* 005c0f7f: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 005c0f81: fstp dword ptr [esp + 0x50] */ W_F32((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 005c0f85: fchs  */ ST(0) = -ST(0);
    /* 005c0f87: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 005c0f89: fadd dword ptr [ebx + 0x600] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x600u));
    /* 005c0f8f: mov dword ptr [esp + 0x18], ecx */ W32((u32)(r_esp+0x18u), r_ecx);
    /* 005c0f93: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 005c0f97: fmul st(5), st(0) */ ST(5) = ST(5) * ST(0);
    /* 005c0f99: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 005c0f9b: fadd dword ptr [ebx + 0x5f4] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x5f4u));
    /* 005c0fa1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005c0fa3: fst dword ptr [esp + 0xe0] */ W_F32((u32)(r_esp+0xe0u), ST(0));
    /* 005c0faa: fxch st(6) */ { long double t = ST(0); ST(0) = ST(6); ST(6) = t; }
    /* 005c0fac: fst dword ptr [esp + 0xe4] */ W_F32((u32)(r_esp+0xe4u), ST(0));
    /* 005c0fb3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005c0fb5: fst dword ptr [esp + 0xec] */ W_F32((u32)(r_esp+0xecu), ST(0));
    /* 005c0fbc: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005c0fbe: fst dword ptr [esp + 0xf4] */ W_F32((u32)(r_esp+0xf4u), ST(0));
    /* 005c0fc5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005c0fc7: fst dword ptr [esp + 0xfc] */ W_F32((u32)(r_esp+0xfcu), ST(0));
    /* 005c0fce: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005c0fd0: fst dword ptr [esp + 0x104] */ W_F32((u32)(r_esp+0x104u), ST(0));
    /* 005c0fd7: fxch st(6) */ { long double t = ST(0); ST(0) = ST(6); ST(6) = t; }
    /* 005c0fd9: fst dword ptr [esp + 0x110] */ W_F32((u32)(r_esp+0x110u), ST(0));
    /* 005c0fe0: fxch st(6) */ { long double t = ST(0); ST(0) = ST(6); ST(6) = t; }
    /* 005c0fe2: fstp dword ptr [esp + 0x114] */ W_F32((u32)(r_esp+0x114u), ST(0)); FPOP();
    /* 005c0fe9: fadd st(3), st(0) */ ST(3) = ST(3) + ST(0);
    /* 005c0feb: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 005c0fed: fstp dword ptr [esp + 0xdc] */ W_F32((u32)(r_esp+0xdcu), ST(0)); FPOP();
    /* 005c0ff4: fld dword ptr [0x92b7c8] */ FPUSH(R_F32((u32)(0x92b7c8u)));
    /* 005c0ffa: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005c0ffc: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 005c0ffe: fld dword ptr [0x92b7c4] */ FPUSH(R_F32((u32)(0x92b7c4u)));
    /* 005c1004: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 005c1006: fstp dword ptr [esp + 0x10c] */ W_F32((u32)(r_esp+0x10cu), ST(0)); FPOP();
    /* 005c100d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005c100f: fadd st(4) */ ST(0) = ST(0) + ST(4);
    /* 005c1011: fstp dword ptr [esp + 0xf0] */ W_F32((u32)(r_esp+0xf0u), ST(0)); FPOP();
    /* 005c1018: fld dword ptr [0x92b7cc] */ FPUSH(R_F32((u32)(0x92b7ccu)));
    /* 005c101e: faddp st(4) */ ST(4) = ST(4) + ST(0); FPOP();
    /* 005c1020: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 005c1022: fstp dword ptr [esp + 0x100] */ W_F32((u32)(r_esp+0x100u), ST(0)); FPOP();
    /* 005c1029: mov dword ptr [esp + 0x120], 0 */ W32((u32)(r_esp+0x120u), 0x0u);
    /* 005c1034: lea eax, [esp + 0x11c] */ r_eax = (u32)(r_esp+0x11cu);
    /* 005c103b: mov esi, 0xffff00ff */ r_esi = 0xffff00ffu;
    /* 005c1040: mov dword ptr [esp + 0xe8], esi */ W32((u32)(r_esp+0xe8u), r_esi);
    /* 005c1047: mov dword ptr [esp + 0xf8], esi */ W32((u32)(r_esp+0xf8u), r_esi);
    /* 005c104e: mov dword ptr [esp + 0x108], esi */ W32((u32)(r_esp+0x108u), r_esi);
    /* 005c1055: mov dword ptr [esp + 0x118], esi */ W32((u32)(r_esp+0x118u), r_esi);
    /* 005c105c: fld dword ptr [ebx + 0x5f8] */ FPUSH(R_F32((u32)(r_ebx+0x5f8u)));
    /* 005c1062: fsub dword ptr [ebx + 0x5f4] */ ST(0) = ST(0) - R_F32((u32)(r_ebx+0x5f4u));
    /* 005c1068: fdivrp st(4) */ ST(4) = ST(0) / ST(4); FPOP();
    /* 005c106a: fld dword ptr [ebx + 0x5fc] */ FPUSH(R_F32((u32)(r_ebx+0x5fcu)));
    /* 005c1070: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 005c1072: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 005c1074: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 005c1076: fsubr dword ptr [ebx + 0x600] */ ST(0) = R_F32((u32)(r_ebx+0x600u)) - ST(0);
    /* 005c107c: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 005c107e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005c1080: fadd dword ptr [ebx + 0x5f4] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x5f4u));
    /* 005c1086: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 005c1088: fadd dword ptr [ebx + 0x600] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x600u));
    /* 005c108e: fld st(3) */ { long double v = ST(3); FPUSH(v); }
    /* 005c1090: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 005c1092: fsub st(0) */ ST(0) = ST(0) - ST(0);
    /* 005c1094: fld dword ptr [esp + 0x50] */ FPUSH(R_F32((u32)(r_esp+0x50u)));
    /* 005c1098: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005c109a: fstp dword ptr [esp + 0x124] */ W_F32((u32)(r_esp+0x124u), ST(0)); FPOP();
    /* 005c10a1: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 005c10a3: fadd st(0) */ ST(0) = ST(0) + ST(0);
    /* 005c10a5: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 005c10a7: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
    /* 005c10ab: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 005c10ad: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005c10af: fchs  */ ST(0) = -ST(0);
    /* 005c10b1: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 005c10b3: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005c10b5: fadd dword ptr [ebx + 0x600] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x600u));
    /* 005c10bb: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 005c10bd: fsubrp st(2) */ ST(2) = ST(0) - ST(2); FPOP();
    /* 005c10bf: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 005c10c1: fstp dword ptr [esp + 0x11c] */ W_F32((u32)(r_esp+0x11cu), ST(0)); FPOP();
    /* 005c10c8: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 005c10cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c10cd: call 0x7828e4 */ r_esp -= 4; W32(r_esp, 0x5c10d2u); f_007828e4();
    /* 005c10d2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005c10d3: fld dword ptr [0x92b7c0] */ FPUSH(R_F32((u32)(0x92b7c0u)));
    /* 005c10d9: fld dword ptr [esp + 0x124] */ FPUSH(R_F32((u32)(r_esp+0x124u)));
    /* 005c10e0: fld dword ptr [esp + 0x11c] */ FPUSH(R_F32((u32)(r_esp+0x11cu)));
    /* 005c10e7: fld dword ptr [0x92b79c] */ FPUSH(R_F32((u32)(0x92b79cu)));
    /* 005c10ed: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 005c10ef: fmul st(4), st(0) */ ST(4) = ST(4) * ST(0);
    /* 005c10f1: fld dword ptr [esp + 0x11c] */ FPUSH(R_F32((u32)(r_esp+0x11cu)));
    /* 005c10f8: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 005c10fa: fld dword ptr [esp + 0x124] */ FPUSH(R_F32((u32)(r_esp+0x124u)));
    /* 005c1101: fmul st(6) */ ST(0) = ST(0) * ST(6);
    /* 005c1103: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 005c1105: fmul st(5), st(0) */ ST(5) = ST(5) * ST(0);
    /* 005c1107: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005c1109: fsub st(4), st(0) */ ST(4) = ST(4) - ST(0);
    /* 005c110b: fld dword ptr [esp + 0x11c] */ FPUSH(R_F32((u32)(r_esp+0x11cu)));
    /* 005c1112: fmul st(7) */ ST(0) = ST(0) * ST(7);
    /* 005c1114: fadd st(6) */ ST(0) = ST(0) + ST(6);
    /* 005c1116: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005c1118: fchs  */ ST(0) = -ST(0);
    /* 005c111a: fmul st(7) */ ST(0) = ST(0) * ST(7);
    /* 005c111c: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 005c111e: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 005c1122: mov dword ptr [esp + 0x130], 0x3f8e147b */ W32((u32)(r_esp+0x130u), 0x3f8e147bu);
    /* 005c112d: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 005c112f: fchs  */ ST(0) = -ST(0);
    /* 005c1131: fmulp st(7) */ ST(7) = ST(7) * ST(0); FPOP();
    /* 005c1133: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 005c1137: fxch st(7) */ { long double t = ST(0); ST(0) = ST(7); ST(7) = t; }
    /* 005c1139: faddp st(6) */ ST(6) = ST(6) + ST(0); FPOP();
    /* 005c113b: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 005c113d: fadd st(6), st(0) */ ST(6) = ST(6) + ST(0);
    /* 005c113f: fxch st(6) */ { long double t = ST(0); ST(0) = ST(6); ST(6) = t; }
    /* 005c1141: fstp dword ptr [esp + 0x128] */ W_F32((u32)(r_esp+0x128u), ST(0)); FPOP();
    /* 005c1148: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 005c114c: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 005c1150: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 005c1152: fstp dword ptr [esp + 0x12c] */ W_F32((u32)(r_esp+0x12cu), ST(0)); FPOP();
    /* 005c1159: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 005c115d: fadd st(5) */ ST(0) = ST(0) + ST(5);
    /* 005c115f: fstp dword ptr [esp + 0x138] */ W_F32((u32)(r_esp+0x138u), ST(0)); FPOP();
    /* 005c1166: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 005c116a: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 005c116c: fsubr st(5), st(0) */ ST(5) = ST(0) - ST(5);
    /* 005c116e: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 005c1170: fstp dword ptr [esp + 0x148] */ W_F32((u32)(r_esp+0x148u), ST(0)); FPOP();
    /* 005c1177: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 005c1179: fadd st(5) */ ST(0) = ST(0) + ST(5);
    /* 005c117b: fstp dword ptr [esp + 0x13c] */ W_F32((u32)(r_esp+0x13cu), ST(0)); FPOP();
    /* 005c1182: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005c1184: fsubr st(4), st(0) */ ST(4) = ST(0) - ST(4);
    /* 005c1186: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 005c1188: fstp dword ptr [esp + 0x14c] */ W_F32((u32)(r_esp+0x14cu), ST(0)); FPOP();
    /* 005c118f: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 005c1191: fsubp st(2) */ ST(2) = ST(2) - ST(0); FPOP();
    /* 005c1193: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005c1195: fstp dword ptr [esp + 0x158] */ W_F32((u32)(r_esp+0x158u), ST(0)); FPOP();
    /* 005c119c: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 005c119e: fld dword ptr [0x92b7d4] */ FPUSH(R_F32((u32)(0x92b7d4u)));
    /* 005c11a4: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005c11a6: fstp dword ptr [esp + 0x15c] */ W_F32((u32)(r_esp+0x15cu), ST(0)); FPOP();
    /* 005c11ad: mov dword ptr [esp + 0x140], 0x3f8e147b */ W32((u32)(r_esp+0x140u), 0x3f8e147bu);
    /* 005c11b8: mov dword ptr [esp + 0x150], 0x3f8e147b */ W32((u32)(r_esp+0x150u), 0x3f8e147bu);
    /* 005c11c3: mov eax, 0xffff00ff */ r_eax = 0xffff00ffu;
    /* 005c11c8: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005c11cb: mov dword ptr [esp + 0x134], eax */ W32((u32)(r_esp+0x134u), r_eax);
    /* 005c11d2: mov dword ptr [esp + 0x160], 0x3f8e147b */ W32((u32)(r_esp+0x160u), 0x3f8e147bu);
    /* 005c11dd: mov dword ptr [esp + 0x144], eax */ W32((u32)(r_esp+0x144u), r_eax);
    /* 005c11e4: mov dword ptr [esp + 0x154], eax */ W32((u32)(r_esp+0x154u), r_eax);
    /* 005c11eb: mov dword ptr [esp + 0x164], eax */ W32((u32)(r_esp+0x164u), r_eax);
    /* 005c11f2: cmp ebp, dword ptr [ebx + 0x4c] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_ebx+0x4cu)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005c11f5: jb 0x5c0f46 */ if (fC) goto L_005c0f46;
L_005c11fb:; BB(0x005c11fb);
    /* 005c11fb: jmp 0x5c121e */ goto L_005c121e;
L_005c11fd:; BB(0x005c11fd);
    /* 005c11fd: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005c11ff: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005c1201: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c1204: je 0x5c1618 */ if (fZ) goto L_005c1618;
L_005c120a:; BB(0x005c120a);
    /* 005c120a: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c120d: je 0x5c14f1 */ if (fZ) goto L_005c14f1;
L_005c1213:; BB(0x005c1213);
    /* 005c1213: add esp, 0x1f4 */ {  u32 a = r_esp; u32 b = 0x1f4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005c1219: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005c121a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c121b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005c121c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005c121d: ret  */ FN_RET(0x005c0c2c); r_esp += 4; return;
L_005c121e:; BB(0x005c121e);
    /* 005c121e: fld dword ptr [0x92b7dc] */ FPUSH(R_F32((u32)(0x92b7dcu)));
    /* 005c1224: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
L_005c1226:; BB(0x005c1226);
    /* 005c1226: fild dword ptr [ebx + 0x604] */ FPUSH((long double)(i32)R32((u32)(r_ebx+0x604u)));
    /* 005c122c: lea eax, [esp + 0x1a8] */ r_eax = (u32)(r_esp+0x1a8u);
    /* 005c1233: fld dword ptr [ebx + 0x5f4] */ FPUSH(R_F32((u32)(r_ebx+0x5f4u)));
    /* 005c1239: fld dword ptr [ebx + 0x5f8] */ FPUSH(R_F32((u32)(r_ebx+0x5f8u)));
    /* 005c123f: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 005c1241: fdiv st(5) */ ST(0) = ST(0) / ST(5);
    /* 005c1243: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 005c1245: fld dword ptr [0x92b7b8] */ FPUSH(R_F32((u32)(0x92b7b8u)));
    /* 005c124b: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005c124d: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 005c124f: fld dword ptr [ebx + 0x600] */ FPUSH(R_F32((u32)(r_ebx+0x600u)));
    /* 005c1255: fld dword ptr [ebx + 0x5fc] */ FPUSH(R_F32((u32)(r_ebx+0x5fcu)));
    /* 005c125b: fsubr st(1) */ ST(0) = ST(1) - ST(0);
    /* 005c125d: mov edx, 0xffc0c0c0 */ r_edx = 0xffc0c0c0u;
    /* 005c1262: fchs  */ ST(0) = -ST(0);
    /* 005c1264: fmul dword ptr [ebx + 0x608] */ ST(0) = ST(0) * R_F32((u32)(r_ebx+0x608u));
    /* 005c126a: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 005c126c: fst dword ptr [esp + 0x170] */ W_F32((u32)(r_esp+0x170u), ST(0));
    /* 005c1273: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005c1275: fst dword ptr [esp + 0x178] */ W_F32((u32)(r_esp+0x178u), ST(0));
    /* 005c127c: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005c127e: fst dword ptr [esp + 0x180] */ W_F32((u32)(r_esp+0x180u), ST(0));
    /* 005c1285: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005c1287: fst dword ptr [esp + 0x188] */ W_F32((u32)(r_esp+0x188u), ST(0));
    /* 005c128e: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005c1290: fst dword ptr [esp + 0x190] */ W_F32((u32)(r_esp+0x190u), ST(0));
    /* 005c1297: fstp dword ptr [esp + 0x1a0] */ W_F32((u32)(r_esp+0x1a0u), ST(0)); FPOP();
    /* 005c129e: faddp st(4) */ ST(4) = ST(4) + ST(0); FPOP();
    /* 005c12a0: fld dword ptr [0x92b7bc] */ FPUSH(R_F32((u32)(0x92b7bcu)));
    /* 005c12a6: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 005c12a8: fst dword ptr [esp + 0x16c] */ W_F32((u32)(r_esp+0x16cu), ST(0));
    /* 005c12af: fst dword ptr [esp + 0x19c] */ W_F32((u32)(r_esp+0x19cu), ST(0));
    /* 005c12b6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005c12b8: fadd st(4), st(0) */ ST(4) = ST(4) + ST(0);
    /* 005c12ba: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 005c12bc: fstp dword ptr [esp + 0x168] */ W_F32((u32)(r_esp+0x168u), ST(0)); FPOP();
    /* 005c12c3: fld dword ptr [0x92b7b8] */ FPUSH(R_F32((u32)(0x92b7b8u)));
    /* 005c12c9: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005c12cb: faddp st(4) */ ST(4) = ST(4) + ST(0); FPOP();
    /* 005c12cd: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 005c12cf: fstp dword ptr [esp + 0x198] */ W_F32((u32)(r_esp+0x198u), ST(0)); FPOP();
    /* 005c12d6: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 005c12d8: fstp dword ptr [esp + 0x17c] */ W_F32((u32)(r_esp+0x17cu), ST(0)); FPOP();
    /* 005c12df: fld dword ptr [0x92b7bc] */ FPUSH(R_F32((u32)(0x92b7bcu)));
    /* 005c12e5: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 005c12e7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005c12e9: fstp dword ptr [esp + 0x18c] */ W_F32((u32)(r_esp+0x18cu), ST(0)); FPOP();
    /* 005c12f0: mov dword ptr [esp + 0x1ac], 0 */ W32((u32)(r_esp+0x1acu), 0x0u);
    /* 005c12fb: mov dword ptr [esp + 0x174], edx */ W32((u32)(r_esp+0x174u), r_edx);
    /* 005c1302: mov dword ptr [esp + 0x184], edx */ W32((u32)(r_esp+0x184u), r_edx);
    /* 005c1309: mov dword ptr [esp + 0x194], edx */ W32((u32)(r_esp+0x194u), r_edx);
    /* 005c1310: mov dword ptr [esp + 0x1a4], edx */ W32((u32)(r_esp+0x1a4u), r_edx);
    /* 005c1317: fld dword ptr [ebx + 0x5f4] */ FPUSH(R_F32((u32)(r_ebx+0x5f4u)));
    /* 005c131d: fld dword ptr [ebx + 0x5f8] */ FPUSH(R_F32((u32)(r_ebx+0x5f8u)));
    /* 005c1323: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 005c1325: fdivrp st(3) */ ST(3) = ST(0) / ST(3); FPOP();
    /* 005c1327: fild dword ptr [ebx + 0x604] */ FPUSH((long double)(i32)R32((u32)(r_ebx+0x604u)));
    /* 005c132d: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 005c132f: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 005c1331: fld dword ptr [ebx + 0x5fc] */ FPUSH(R_F32((u32)(r_ebx+0x5fcu)));
    /* 005c1337: fld dword ptr [ebx + 0x600] */ FPUSH(R_F32((u32)(r_ebx+0x600u)));
    /* 005c133d: fsubr st(1), st(0) */ ST(1) = ST(0) - ST(1);
    /* 005c133f: fld dword ptr [0x92b7c4] */ FPUSH(R_F32((u32)(0x92b7c4u)));
    /* 005c1345: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 005c1347: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005c1349: fmul dword ptr [0x92b7b4] */ ST(0) = ST(0) * R_F32((u32)(0x92b7b4u));
    /* 005c134f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005c1351: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 005c1353: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 005c1355: fld st(3) */ { long double v = ST(3); FPUSH(v); }
    /* 005c1357: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 005c1359: fsub st(0) */ ST(0) = ST(0) - ST(0);
    /* 005c135b: fstp dword ptr [esp + 0x1b0] */ W_F32((u32)(r_esp+0x1b0u), ST(0)); FPOP();
    /* 005c1362: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 005c1364: fadd st(0) */ ST(0) = ST(0) + ST(0);
    /* 005c1366: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 005c1368: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
    /* 005c136c: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 005c136e: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 005c1370: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 005c1372: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005c1374: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 005c1378: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 005c137a: fstp dword ptr [esp + 0x1a8] */ W_F32((u32)(r_esp+0x1a8u), ST(0)); FPOP();
    /* 005c1381: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c1382: call 0x7828e4 */ r_esp -= 4; W32(r_esp, 0x5c1387u); f_007828e4();
    /* 005c1387: fmul dword ptr [0x92b7c0] */ ST(0) = ST(0) * R_F32((u32)(0x92b7c0u));
    /* 005c138d: fld dword ptr [esp + 0x1b4] */ FPUSH(R_F32((u32)(r_esp+0x1b4u)));
    /* 005c1394: fld dword ptr [esp + 0x1ac] */ FPUSH(R_F32((u32)(r_esp+0x1acu)));
    /* 005c139b: fld dword ptr [0x92b798] */ FPUSH(R_F32((u32)(0x92b798u)));
    /* 005c13a1: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 005c13a5: fld dword ptr [esp + 0x1ac] */ FPUSH(R_F32((u32)(r_esp+0x1acu)));
    /* 005c13ac: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 005c13ae: fld dword ptr [esp + 0x1b4] */ FPUSH(R_F32((u32)(r_esp+0x1b4u)));
    /* 005c13b5: fmul st(6) */ ST(0) = ST(0) * ST(6);
    /* 005c13b7: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 005c13b9: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 005c13bb: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005c13bd: fsub st(3), st(0) */ ST(3) = ST(3) - ST(0);
    /* 005c13bf: fld dword ptr [esp + 0x1ac] */ FPUSH(R_F32((u32)(r_esp+0x1acu)));
    /* 005c13c6: fmul st(7) */ ST(0) = ST(0) * ST(7);
    /* 005c13c8: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 005c13ca: fxch st(6) */ { long double t = ST(0); ST(0) = ST(6); ST(6) = t; }
    /* 005c13cc: fchs  */ ST(0) = -ST(0);
    /* 005c13ce: fmul st(7) */ ST(0) = ST(0) * ST(7);
    /* 005c13d0: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 005c13d2: mov dword ptr [esp + 0x1c0], 0x3f8e147b */ W32((u32)(r_esp+0x1c0u), 0x3f8e147bu);
    /* 005c13dd: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 005c13df: fchs  */ ST(0) = -ST(0);
    /* 005c13e1: fmulp st(6) */ ST(6) = ST(6) * ST(0); FPOP();
    /* 005c13e3: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 005c13e7: fxch st(6) */ { long double t = ST(0); ST(0) = ST(6); ST(6) = t; }
    /* 005c13e9: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 005c13eb: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005c13ed: fadd st(5), st(0) */ ST(5) = ST(5) + ST(0);
    /* 005c13ef: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 005c13f1: fstp dword ptr [esp + 0x1b8] */ W_F32((u32)(r_esp+0x1b8u), ST(0)); FPOP();
    /* 005c13f8: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 005c13fc: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 005c1400: fadd st(5) */ ST(0) = ST(0) + ST(5);
    /* 005c1402: fstp dword ptr [esp + 0x1bc] */ W_F32((u32)(r_esp+0x1bcu), ST(0)); FPOP();
    /* 005c1409: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 005c140d: fadd st(4) */ ST(0) = ST(0) + ST(4);
    /* 005c140f: fstp dword ptr [esp + 0x1c8] */ W_F32((u32)(r_esp+0x1c8u), ST(0)); FPOP();
    /* 005c1416: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 005c141a: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005c141c: fsubr st(4), st(0) */ ST(4) = ST(0) - ST(4);
    /* 005c141e: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 005c1420: fstp dword ptr [esp + 0x1d8] */ W_F32((u32)(r_esp+0x1d8u), ST(0)); FPOP();
    /* 005c1427: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005c1429: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 005c142b: fstp dword ptr [esp + 0x1cc] */ W_F32((u32)(r_esp+0x1ccu), ST(0)); FPOP();
    /* 005c1432: fsubr st(1), st(0) */ ST(1) = ST(0) - ST(1);
    /* 005c1434: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005c1436: fstp dword ptr [esp + 0x1dc] */ W_F32((u32)(r_esp+0x1dcu), ST(0)); FPOP();
    /* 005c143d: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 005c143f: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 005c1441: fstp dword ptr [esp + 0x1e8] */ W_F32((u32)(r_esp+0x1e8u), ST(0)); FPOP();
    /* 005c1448: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 005c144a: fstp dword ptr [esp + 0x1ec] */ W_F32((u32)(r_esp+0x1ecu), ST(0)); FPOP();
    /* 005c1451: mov dword ptr [esp + 0x1d0], 0x3f8e147b */ W32((u32)(r_esp+0x1d0u), 0x3f8e147bu);
    /* 005c145c: mov eax, 0xffc0c0c0 */ r_eax = 0xffc0c0c0u;
    /* 005c1461: mov dword ptr [esp + 0x1c4], eax */ W32((u32)(r_esp+0x1c4u), r_eax);
    /* 005c1468: mov dword ptr [esp + 0x1e0], 0x3f8e147b */ W32((u32)(r_esp+0x1e0u), 0x3f8e147bu);
    /* 005c1473: mov dword ptr [esp + 0x1d4], eax */ W32((u32)(r_esp+0x1d4u), r_eax);
    /* 005c147a: mov dword ptr [esp + 0x1f0], 0x3f8e147b */ W32((u32)(r_esp+0x1f0u), 0x3f8e147bu);
    /* 005c1485: mov dword ptr [esp + 0x1e4], eax */ W32((u32)(r_esp+0x1e4u), r_eax);
    /* 005c148c: mov dword ptr [esp + 0x1f4], eax */ W32((u32)(r_esp+0x1f4u), r_eax);
    /* 005c1493: push dword ptr [ebx + 0x4c] */ { u32 v = R32((u32)(r_ebx+0x4cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005c1496: push 0x92b8d8 */ { u32 v = 0x92b8d8u; r_esp -= 4; W32(r_esp, v); }
    /* 005c149b: push 0x6001b */ { u32 v = 0x6001bu; r_esp -= 4; W32(r_esp, v); }
    /* 005c14a0: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x5c14a5u); f_0061cdb0();
    /* 005c14a5: push dword ptr [ebx + 0x604] */ { u32 v = R32((u32)(r_ebx+0x604u)); r_esp -= 4; W32(r_esp, v); }
    /* 005c14ab: push 0x92b8e0 */ { u32 v = 0x92b8e0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c14b0: push 0x6001c */ { u32 v = 0x6001cu; r_esp -= 4; W32(r_esp, v); }
    /* 005c14b5: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x5c14bau); f_0061cdb0();
    /* 005c14ba: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c14bd: fld dword ptr [ebx + 0x608] */ FPUSH(R_F32((u32)(r_ebx+0x608u)));
    /* 005c14c3: fstp qword ptr [esp + 8] */ W_F64((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 005c14c7: mov dword ptr [esp], 0x6001d */ W32((u32)(r_esp), 0x6001du);
    /* 005c14ce: mov dword ptr [esp + 4], 0x92b8e8 */ W32((u32)(r_esp+0x4u), 0x92b8e8u);
    /* 005c14d6: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x5c14dbu); f_0061cdb0();
    /* 005c14db: add esp, 0x1f4 */ {  u32 a = r_esp; u32 b = 0x1f4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005c14e1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005c14e2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c14e3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005c14e4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005c14e5: ret  */ FN_RET(0x005c0c2c); r_esp += 4; return;
L_005c14e6:; BB(0x005c14e6);
    /* 005c14e6: fld dword ptr [0x92b7c0] */ FPUSH(R_F32((u32)(0x92b7c0u)));
    /* 005c14ec: jmp 0x5c1226 */ goto L_005c1226;
L_005c14f1:; BB(0x005c14f1);
    /* 005c14f1: mov eax, dword ptr [ebx + 0x53c] */ r_eax = R32((u32)(r_ebx+0x53cu));
    /* 005c14f7: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c14fa: je 0x5c1609 */ if (fZ) goto L_005c1609;
L_005c1500:; BB(0x005c1500);
    /* 005c1500: mov esi, 0xff808080 */ r_esi = 0xff808080u;
    /* 005c1505: mov ebp, 0xff808080 */ r_ebp = 0xff808080u;
L_005c150a:; BB(0x005c150a);
    /* 005c150a: mov eax, dword ptr [ebx + 0x788] */ r_eax = R32((u32)(r_ebx+0x788u));
    /* 005c1510: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c1512: jne 0x5c151a */ if (!fZ) goto L_005c151a;
L_005c1514:; BB(0x005c1514);
    /* 005c1514: mov edi, ebp */ r_edi = r_ebp;
    /* 005c1516: mov edx, esi */ r_edx = r_esi;
    /* 005c1518: jmp 0x5c1524 */ goto L_005c1524;
L_005c151a:; BB(0x005c151a);
    /* 005c151a: mov edx, 0xff808080 */ r_edx = 0xff808080u;
    /* 005c151f: mov edi, 0xff808080 */ r_edi = 0xff808080u;
L_005c1524:; BB(0x005c1524);
    /* 005c1524: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c1525: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005c1526: mov eax, dword ptr [ebx + 0x794] */ r_eax = R32((u32)(r_ebx+0x794u));
    /* 005c152c: lea ecx, [ebx + 0x794] */ r_ecx = (u32)(r_ebx+0x794u);
    /* 005c1532: push 0x1b */ { u32 v = 0x1bu; r_esp -= 4; W32(r_esp, v); }
    /* 005c1534: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 005c1536: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x5c1539u); call_ind(t); }
    /* 005c1539: mov eax, dword ptr [ebx + 0x788] */ r_eax = R32((u32)(r_ebx+0x788u));
    /* 005c153f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c1542: je 0x5c1600 */ if (fZ) goto L_005c1600;
L_005c1548:; BB(0x005c1548);
    /* 005c1548: mov edi, 0xff808080 */ r_edi = 0xff808080u;
    /* 005c154d: mov edx, 0xff808080 */ r_edx = 0xff808080u;
L_005c1552:; BB(0x005c1552);
    /* 005c1552: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005c1553: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c1554: mov eax, dword ptr [ebx + 0x7bc] */ r_eax = R32((u32)(r_ebx+0x7bcu));
    /* 005c155a: lea ecx, [ebx + 0x7bc] */ r_ecx = (u32)(r_ebx+0x7bcu);
    /* 005c1560: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 005c1562: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 005c1564: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x5c1567u); call_ind(t); }
    /* 005c1567: mov eax, dword ptr [ebx + 0x788] */ r_eax = R32((u32)(r_ebx+0x788u));
    /* 005c156d: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c1570: je 0x5c15fa */ if (fZ) goto L_005c15fa;
L_005c1576:; BB(0x005c1576);
    /* 005c1576: mov edi, 0xff808080 */ r_edi = 0xff808080u;
    /* 005c157b: mov edx, 0xff808080 */ r_edx = 0xff808080u;
L_005c1580:; BB(0x005c1580);
    /* 005c1580: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005c1581: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c1582: mov eax, dword ptr [ebx + 0x7e4] */ r_eax = R32((u32)(r_ebx+0x7e4u));
    /* 005c1588: lea ecx, [ebx + 0x7e4] */ r_ecx = (u32)(r_ebx+0x7e4u);
    /* 005c158e: push 0x1d */ { u32 v = 0x1du; r_esp -= 4; W32(r_esp, v); }
    /* 005c1590: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 005c1592: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x5c1595u); call_ind(t); }
    /* 005c1595: mov eax, dword ptr [ebx + 0x788] */ r_eax = R32((u32)(r_ebx+0x788u));
    /* 005c159b: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c159e: je 0x5c15f4 */ if (fZ) goto L_005c15f4;
L_005c15a0:; BB(0x005c15a0);
    /* 005c15a0: mov edi, 0xff808080 */ r_edi = 0xff808080u;
    /* 005c15a5: mov edx, 0xff808080 */ r_edx = 0xff808080u;
L_005c15aa:; BB(0x005c15aa);
    /* 005c15aa: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005c15ab: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c15ac: mov eax, dword ptr [ebx + 0x80c] */ r_eax = R32((u32)(r_ebx+0x80cu));
    /* 005c15b2: lea ecx, [ebx + 0x80c] */ r_ecx = (u32)(r_ebx+0x80cu);
    /* 005c15b8: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 005c15ba: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 005c15bc: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x5c15bfu); call_ind(t); }
    /* 005c15bf: mov eax, dword ptr [ebx + 0x788] */ r_eax = R32((u32)(r_ebx+0x788u));
    /* 005c15c5: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c15c8: je 0x5c15d4 */ if (fZ) goto L_005c15d4;
L_005c15ca:; BB(0x005c15ca);
    /* 005c15ca: mov esi, 0xff808080 */ r_esi = 0xff808080u;
    /* 005c15cf: mov ebp, 0xff808080 */ r_ebp = 0xff808080u;
L_005c15d4:; BB(0x005c15d4);
    /* 005c15d4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005c15d5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c15d6: mov eax, dword ptr [ebx + 0x82c] */ r_eax = R32((u32)(r_ebx+0x82cu));
    /* 005c15dc: lea ecx, [ebx + 0x82c] */ r_ecx = (u32)(r_ebx+0x82cu);
    /* 005c15e2: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 005c15e4: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 005c15e6: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x5c15e9u); call_ind(t); }
    /* 005c15e9: add esp, 0x1f4 */ {  u32 a = r_esp; u32 b = 0x1f4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005c15ef: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005c15f0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c15f1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005c15f2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005c15f3: ret  */ FN_RET(0x005c0c2c); r_esp += 4; return;
L_005c15f4:; BB(0x005c15f4);
    /* 005c15f4: mov edx, ebp */ r_edx = r_ebp;
    /* 005c15f6: mov edi, esi */ r_edi = r_esi;
    /* 005c15f8: jmp 0x5c15aa */ goto L_005c15aa;
L_005c15fa:; BB(0x005c15fa);
    /* 005c15fa: mov edx, ebp */ r_edx = r_ebp;
    /* 005c15fc: mov edi, esi */ r_edi = r_esi;
    /* 005c15fe: jmp 0x5c1580 */ goto L_005c1580;
L_005c1600:; BB(0x005c1600);
    /* 005c1600: mov edx, ebp */ r_edx = r_ebp;
    /* 005c1602: mov edi, esi */ r_edi = r_esi;
    /* 005c1604: jmp 0x5c1552 */ goto L_005c1552;
L_005c1609:; BB(0x005c1609);
    /* 005c1609: mov ebp, 0xfff0f0f0 */ r_ebp = 0xfff0f0f0u;
    /* 005c160e: mov esi, 0xff00ffff */ r_esi = 0xff00ffffu;
    /* 005c1613: jmp 0x5c150a */ goto L_005c150a;
L_005c1618:; BB(0x005c1618);
    /* 005c1618: mov eax, dword ptr [ebx + 0x53c] */ r_eax = R32((u32)(r_ebx+0x53cu));
    /* 005c161e: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c1621: je 0x5c1803 */ if (fZ) goto L_005c1803;
L_005c1627:; BB(0x005c1627);
    /* 005c1627: mov eax, 0xff808080 */ r_eax = 0xff808080u;
    /* 005c162c: mov dword ptr [esp + 0x4c], eax */ W32((u32)(r_esp+0x4cu), r_eax);
    /* 005c1630: mov edx, 0xff808080 */ r_edx = 0xff808080u;
    /* 005c1635: mov dword ptr [esp + 0x48], edx */ W32((u32)(r_esp+0x48u), r_edx);
L_005c1639:; BB(0x005c1639);
    /* 005c1639: mov eax, dword ptr [ebx + 0x60c] */ r_eax = R32((u32)(r_ebx+0x60cu));
    /* 005c163f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c1641: jne 0x5c164d */ if (!fZ) goto L_005c164d;
L_005c1643:; BB(0x005c1643);
    /* 005c1643: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 005c1647: mov edx, dword ptr [esp + 0x4c] */ r_edx = R32((u32)(r_esp+0x4cu));
    /* 005c164b: jmp 0x5c1657 */ goto L_005c1657;
L_005c164d:; BB(0x005c164d);
    /* 005c164d: mov edx, 0xff808080 */ r_edx = 0xff808080u;
    /* 005c1652: mov eax, 0xff808080 */ r_eax = 0xff808080u;
L_005c1657:; BB(0x005c1657);
    /* 005c1657: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c1658: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c1659: mov ebp, dword ptr [ebx + 0x610] */ r_ebp = R32((u32)(r_ebx+0x610u));
    /* 005c165f: lea ecx, [ebx + 0x610] */ r_ecx = (u32)(r_ebx+0x610u);
    /* 005c1665: push 0x1b */ { u32 v = 0x1bu; r_esp -= 4; W32(r_esp, v); }
    /* 005c1667: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005c1669: call dword ptr [ebp + 0x10] */ { u32 t = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, 0x5c166cu); call_ind(t); }
    /* 005c166c: mov eax, 0x1d */ r_eax = 0x1du;
    /* 005c1671: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 005c1675: push dword ptr [ebx + 0x4c] */ { u32 v = R32((u32)(r_ebx+0x4cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005c1678: push 0x92b8d8 */ { u32 v = 0x92b8d8u; r_esp -= 4; W32(r_esp, v); }
    /* 005c167d: push 0x6001c */ { u32 v = 0x6001cu; r_esp -= 4; W32(r_esp, v); }
    /* 005c1682: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x5c1687u); f_0061cdb0();
    /* 005c1687: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c168a: mov ecx, dword ptr [ebx + 0x60c] */ r_ecx = R32((u32)(r_ebx+0x60cu));
    /* 005c1690: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c1693: jl 0x5c16af */ if ((fS!=fO)) goto L_005c16af;
L_005c1695:; BB(0x005c1695);
    /* 005c1695: mov eax, 0x55555556 */ r_eax = 0x55555556u;
    /* 005c169a: add ecx, -2 */ {  u32 a = r_ecx; u32 b = 0xfffffffeu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c169d: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005c169f: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005c16a1: sar ebp, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebp = r;  } }
    /* 005c16a4: sub edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005c16a6: lea esi, [edx + edx] */ r_esi = (u32)(r_edx+r_edx);
    /* 005c16a9: add esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005c16ab: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005c16ad: jmp 0x5c16b9 */ goto L_005c16b9;
L_005c16af:; BB(0x005c16af);
    /* 005c16af: mov ecx, 0xffffffff */ r_ecx = 0xffffffffu;
    /* 005c16b4: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
L_005c16b9:; BB(0x005c16b9);
    /* 005c16b9: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 005c16bd: mov dword ptr [esp + 0x28], ecx */ W32((u32)(r_esp+0x28u), r_ecx);
    /* 005c16c1: mov dword ptr [esp + 0x24], ebx */ W32((u32)(r_esp+0x24u), r_ebx);
    /* 005c16c5: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 005c16c7: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 005c16c9: lea eax, [ebx + 0x638] */ r_eax = (u32)(r_ebx+0x638u);
    /* 005c16cf: mov ebx, dword ptr [esp + 0x44] */ r_ebx = R32((u32)(r_esp+0x44u));
    /* 005c16d3: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 005c16d7: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
L_005c16d9:; BB(0x005c16d9);
    /* 005c16d9: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 005c16dd: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c16df: jne 0x5c16f3 */ if (!fZ) goto L_005c16f3;
L_005c16e1:; BB(0x005c16e1);
    /* 005c16e1: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 005c16e5: mov edx, dword ptr [esp + 0x4c] */ r_edx = R32((u32)(r_esp+0x4cu));
    /* 005c16e9: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 005c16ed: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 005c16f1: jmp 0x5c1705 */ goto L_005c1705;
L_005c16f3:; BB(0x005c16f3);
    /* 005c16f3: mov eax, 0xff808080 */ r_eax = 0xff808080u;
    /* 005c16f8: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 005c16fc: mov edx, 0xff808080 */ r_edx = 0xff808080u;
    /* 005c1701: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
L_005c1705:; BB(0x005c1705);
    /* 005c1705: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 005c1709: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c170b: jne 0x5c172e */ if (!fZ) goto L_005c172e;
L_005c170d:; BB(0x005c170d);
    /* 005c170d: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 005c1711: mov eax, dword ptr [esi + edx + 0x638] */ r_eax = R32((u32)(r_esi+r_edx+0x638u));
    /* 005c1718: mov edx, dword ptr [esp + 0x2c] */ r_edx = R32((u32)(r_esp+0x2cu));
    /* 005c171c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c171d: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 005c1721: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c1722: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005c1723: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005c1725: mov ecx, dword ptr [esp + 0x48] */ r_ecx = R32((u32)(r_esp+0x48u));
    /* 005c1729: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x5c172cu); call_ind(t); }
    /* 005c172c: jmp 0x5c177b */ goto L_005c177b;
L_005c172e:; BB(0x005c172e);
    /* 005c172e: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 005c1732: push 0xff808080 */ { u32 v = 0xff808080u; r_esp -= 4; W32(r_esp, v); }
    /* 005c1737: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005c1738: mov edx, dword ptr [esi + eax + 0x638] */ r_edx = R32((u32)(r_esi+r_eax+0x638u));
    /* 005c173f: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005c1741: mov ecx, dword ptr [esp + 0x44] */ r_ecx = R32((u32)(r_esp+0x44u));
    /* 005c1745: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x5c1748u); call_ind(t); }
    /* 005c1748: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 005c174c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c174f: jne 0x5c177b */ if (!fZ) goto L_005c177b;
L_005c1751:; BB(0x005c1751);
    /* 005c1751: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 005c1755: lea eax, [edx + ebp] */ r_eax = (u32)(r_edx+r_ebp);
    /* 005c1758: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 005c175c: mov eax, dword ptr [eax + 0x6bc] */ r_eax = R32((u32)(r_eax+0x6bcu));
    /* 005c1762: lea ecx, [edx + ebp + 0x6bc] */ r_ecx = (u32)(r_edx+r_ebp+0x6bcu);
    /* 005c1769: mov edx, dword ptr [esp + 0x2c] */ r_edx = R32((u32)(r_esp+0x2cu));
    /* 005c176d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c176e: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 005c1772: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c1773: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005c1774: push 0x16 */ { u32 v = 0x16u; r_esp -= 4; W32(r_esp, v); }
    /* 005c1776: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x5c1779u); call_ind(t); }
    /* 005c1779: jmp 0x5c17a7 */ goto L_005c17a7;
L_005c177b:; BB(0x005c177b);
    /* 005c177b: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 005c177f: lea edx, [eax + ebp] */ r_edx = (u32)(r_eax+r_ebp);
    /* 005c1782: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 005c1786: push 0xff808080 */ { u32 v = 0xff808080u; r_esp -= 4; W32(r_esp, v); }
    /* 005c178b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005c178c: push 0x16 */ { u32 v = 0x16u; r_esp -= 4; W32(r_esp, v); }
    /* 005c178e: lea ecx, [eax + ebp + 0x6bc] */ r_ecx = (u32)(r_eax+r_ebp+0x6bcu);
    /* 005c1795: mov eax, dword ptr [edx + 0x6bc] */ r_eax = R32((u32)(r_edx+0x6bcu));
    /* 005c179b: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x5c179eu); call_ind(t); }
    /* 005c179e: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 005c17a2: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c17a5: je 0x5c17e1 */ if (fZ) goto L_005c17e1;
L_005c17a7:; BB(0x005c17a7);
    /* 005c17a7: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 005c17ab: push 0xff808080 */ { u32 v = 0xff808080u; r_esp -= 4; W32(r_esp, v); }
    /* 005c17b0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005c17b1: mov edx, dword ptr [eax + 0x728] */ r_edx = R32((u32)(r_eax+0x728u));
    /* 005c17b7: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 005c17b9: lea ecx, [eax + 0x728] */ r_ecx = (u32)(r_eax+0x728u);
    /* 005c17bf: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x5c17c2u); call_ind(t); }
L_005c17c2:; BB(0x005c17c2);
    /* 005c17c2: add dword ptr [esp + 0x38], 0x28 */ { u32 ad = (u32)(r_esp+0x38u);  u32 a = R32(ad); u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 005c17c7: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005c17ca: add esi, 0x28 */ {  u32 a = r_esi; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005c17cd: add ebp, 0x20 */ {  u32 a = r_ebp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005c17d0: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005c17d3: cmp edi, 3 */ {  u32 a = r_edi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c17d6: jl 0x5c16d9 */ if ((fS!=fO)) goto L_005c16d9;
L_005c17dc:; BB(0x005c17dc);
    /* 005c17dc: jmp 0x5c1213 */ goto L_005c1213;
L_005c17e1:; BB(0x005c17e1);
    /* 005c17e1: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 005c17e5: mov eax, dword ptr [edx + 0x728] */ r_eax = R32((u32)(r_edx+0x728u));
    /* 005c17eb: lea ecx, [edx + 0x728] */ r_ecx = (u32)(r_edx+0x728u);
    /* 005c17f1: mov edx, dword ptr [esp + 0x2c] */ r_edx = R32((u32)(r_esp+0x2cu));
    /* 005c17f5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c17f6: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 005c17fa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c17fb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005c17fc: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 005c17fe: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x5c1801u); call_ind(t); }
    /* 005c1801: jmp 0x5c17c2 */ goto L_005c17c2;
L_005c1803:; BB(0x005c1803);
    /* 005c1803: mov eax, 0xfff0f0f0 */ r_eax = 0xfff0f0f0u;
    /* 005c1808: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 005c180c: mov edx, 0xff00ffff */ r_edx = 0xff00ffffu;
    /* 005c1811: mov dword ptr [esp + 0x4c], edx */ W32((u32)(r_esp+0x4cu), r_edx);
    /* 005c1815: jmp 0x5c1639 */ goto L_005c1639;
L_005c181a:; BB(0x005c181a);
    /* 005c181a: mov edx, 0xfff0f0f0 */ r_edx = 0xfff0f0f0u;
    /* 005c181f: mov ebp, 0xff00ffff */ r_ebp = 0xff00ffffu;
    /* 005c1824: jmp 0x5c0d75 */ goto L_005c0d75;
L_005c1829:; BB(0x005c1829);
    /* 005c1829: mov edx, 0xfff0f0f0 */ r_edx = 0xfff0f0f0u;
    /* 005c182e: mov ebp, 0xff00ffff */ r_ebp = 0xff00ffffu;
    /* 005c1833: jmp 0x5c0d47 */ goto L_005c0d47;
L_005c1838:; BB(0x005c1838);
    /* 005c1838: mov edx, 0xfff0f0f0 */ r_edx = 0xfff0f0f0u;
    /* 005c183d: mov ebp, 0xff00ffff */ r_ebp = 0xff00ffffu;
    /* 005c1842: jmp 0x5c0d19 */ goto L_005c0d19;
L_005c1847:; BB(0x005c1847);
    /* 005c1847: mov edx, 0xfff0f0f0 */ r_edx = 0xfff0f0f0u;
    /* 005c184c: mov ebp, 0xff00ffff */ r_ebp = 0xff00ffffu;
    /* 005c1851: jmp 0x5c0ceb */ goto L_005c0ceb;
L_005c1856:; BB(0x005c1856);
    /* 005c1856: push 0x92b894 */ { u32 v = 0x92b894u; r_esp -= 4; W32(r_esp, v); }
    /* 005c185b: push 0xd000a */ { u32 v = 0xd000au; r_esp -= 4; W32(r_esp, v); }
    /* 005c1860: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x5c1865u); f_0061cdb0();
    /* 005c1865: push 0x92b8a4 */ { u32 v = 0x92b8a4u; r_esp -= 4; W32(r_esp, v); }
    /* 005c186a: push 0xd000b */ { u32 v = 0xd000bu; r_esp -= 4; W32(r_esp, v); }
    /* 005c186f: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x5c1874u); f_0061cdb0();
    /* 005c1874: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c1877: jmp 0x5c0c59 */ goto L_005c0c59;
}

