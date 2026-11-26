#include "protos.h"

void f_006a2009(void)
{
    FN_ENTER(0x006a2009);
    /* 006a2009: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a200b: mov ecx, edi */ r_ecx = r_edi;
    /* 006a200d: call 0x6a139c */ r_esp -= 4; W32(r_esp, 0x6a2012u); f_006a139c();
    /* 006a2012: jmp 0x6a2033 */ goto L_006a2033;
L_006a2033:; BB(0x006a2033);
    /* 006a2033: mov ecx, edi */ r_ecx = r_edi;
    /* 006a2035: call 0x6a20a4 */ r_esp -= 4; W32(r_esp, 0x6a203au); f_006a20a4();
    /* 006a203a: movsx ebx, ax */ r_ebx = (u32)(i32)(i16)(u16)r_eax;
    /* 006a203d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a203e: mov ecx, edi */ r_ecx = r_edi;
    /* 006a2040: call 0x6942a4 */ r_esp -= 4; W32(r_esp, 0x6a2045u); f_006942a4();
    /* 006a2045: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a2047: je 0x6a205a */ if (fZ) goto L_006a205a;
L_006a2049:; BB(0x006a2049);
    /* 006a2049: mov eax, dword ptr [edi + 0xb0] */ r_eax = R32((u32)(r_edi+0xb0u));
    /* 006a204f: or eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006a2054: mov dword ptr [edi + 0xb0], eax */ W32((u32)(r_edi+0xb0u), r_eax);
L_006a205a:; BB(0x006a205a);
    /* 006a205a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a205b: lea ecx, [edi + 0x6b8] */ r_ecx = (u32)(r_edi+0x6b8u);
    /* 006a2061: call 0x697878 */ r_esp -= 4; W32(r_esp, 0x6a2066u); f_00697878();
    /* 006a2066: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a2067: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 006a2069: mov ecx, edi */ r_ecx = r_edi;
    /* 006a206b: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a2070u); f_00694390();
    /* 006a2070: movsx edx, word ptr [edi + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0xb8u));
    /* 006a2077: mov eax, dword ptr [edi + 0xd8] */ r_eax = R32((u32)(r_edi+0xd8u));
    /* 006a207d: mov ebx, dword ptr [edi + 0xb0] */ r_ebx = R32((u32)(r_edi+0xb0u));
    /* 006a2083: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a2085: fld dword ptr [eax + edx*8 + 8] */ FPUSH(R_F32((u32)(r_eax+r_edx*8+0x8u)));
    /* 006a2089: fmul dword ptr [edi + 0x6c0] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0x6c0u));
    /* 006a208f: fstp dword ptr [edi + 0xd0] */ W_F32((u32)(r_edi+0xd0u), ST(0)); FPOP();
    /* 006a2095: or ebx, 0x100 */ {  u32 a = r_ebx; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a209b: mov dword ptr [edi + 0xb0], ebx */ W32((u32)(r_edi+0xb0u), r_ebx);
    /* 006a20a1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a20a2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a20a3: ret  */ FN_RET(0x006a2009); r_esp += 4; return;
}

void f_006a2014(void)
{
    FN_ENTER(0x006a2014);
    /* 006a2014: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a2016: mov ecx, edi */ r_ecx = r_edi;
    /* 006a2018: call 0x6a1a60 */ r_esp -= 4; W32(r_esp, 0x6a201du); f_006a1a60();
    /* 006a201d: jmp 0x6a2033 */ goto L_006a2033;
L_006a2033:; BB(0x006a2033);
    /* 006a2033: mov ecx, edi */ r_ecx = r_edi;
    /* 006a2035: call 0x6a20a4 */ r_esp -= 4; W32(r_esp, 0x6a203au); f_006a20a4();
    /* 006a203a: movsx ebx, ax */ r_ebx = (u32)(i32)(i16)(u16)r_eax;
    /* 006a203d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a203e: mov ecx, edi */ r_ecx = r_edi;
    /* 006a2040: call 0x6942a4 */ r_esp -= 4; W32(r_esp, 0x6a2045u); f_006942a4();
    /* 006a2045: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a2047: je 0x6a205a */ if (fZ) goto L_006a205a;
L_006a2049:; BB(0x006a2049);
    /* 006a2049: mov eax, dword ptr [edi + 0xb0] */ r_eax = R32((u32)(r_edi+0xb0u));
    /* 006a204f: or eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006a2054: mov dword ptr [edi + 0xb0], eax */ W32((u32)(r_edi+0xb0u), r_eax);
L_006a205a:; BB(0x006a205a);
    /* 006a205a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a205b: lea ecx, [edi + 0x6b8] */ r_ecx = (u32)(r_edi+0x6b8u);
    /* 006a2061: call 0x697878 */ r_esp -= 4; W32(r_esp, 0x6a2066u); f_00697878();
    /* 006a2066: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a2067: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 006a2069: mov ecx, edi */ r_ecx = r_edi;
    /* 006a206b: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a2070u); f_00694390();
    /* 006a2070: movsx edx, word ptr [edi + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0xb8u));
    /* 006a2077: mov eax, dword ptr [edi + 0xd8] */ r_eax = R32((u32)(r_edi+0xd8u));
    /* 006a207d: mov ebx, dword ptr [edi + 0xb0] */ r_ebx = R32((u32)(r_edi+0xb0u));
    /* 006a2083: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a2085: fld dword ptr [eax + edx*8 + 8] */ FPUSH(R_F32((u32)(r_eax+r_edx*8+0x8u)));
    /* 006a2089: fmul dword ptr [edi + 0x6c0] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0x6c0u));
    /* 006a208f: fstp dword ptr [edi + 0xd0] */ W_F32((u32)(r_edi+0xd0u), ST(0)); FPOP();
    /* 006a2095: or ebx, 0x100 */ {  u32 a = r_ebx; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a209b: mov dword ptr [edi + 0xb0], ebx */ W32((u32)(r_edi+0xb0u), r_ebx);
    /* 006a20a1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a20a2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a20a3: ret  */ FN_RET(0x006a2014); r_esp += 4; return;
}

void f_006a201f(void)
{
    FN_ENTER(0x006a201f);
    /* 006a201f: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a2021: mov ecx, edi */ r_ecx = r_edi;
    /* 006a2023: call 0x69b93c */ r_esp -= 4; W32(r_esp, 0x6a2028u); f_0069b93c();
    /* 006a2028: jmp 0x6a2033 */ goto L_006a2033;
L_006a2033:; BB(0x006a2033);
    /* 006a2033: mov ecx, edi */ r_ecx = r_edi;
    /* 006a2035: call 0x6a20a4 */ r_esp -= 4; W32(r_esp, 0x6a203au); f_006a20a4();
    /* 006a203a: movsx ebx, ax */ r_ebx = (u32)(i32)(i16)(u16)r_eax;
    /* 006a203d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a203e: mov ecx, edi */ r_ecx = r_edi;
    /* 006a2040: call 0x6942a4 */ r_esp -= 4; W32(r_esp, 0x6a2045u); f_006942a4();
    /* 006a2045: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a2047: je 0x6a205a */ if (fZ) goto L_006a205a;
L_006a2049:; BB(0x006a2049);
    /* 006a2049: mov eax, dword ptr [edi + 0xb0] */ r_eax = R32((u32)(r_edi+0xb0u));
    /* 006a204f: or eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006a2054: mov dword ptr [edi + 0xb0], eax */ W32((u32)(r_edi+0xb0u), r_eax);
L_006a205a:; BB(0x006a205a);
    /* 006a205a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a205b: lea ecx, [edi + 0x6b8] */ r_ecx = (u32)(r_edi+0x6b8u);
    /* 006a2061: call 0x697878 */ r_esp -= 4; W32(r_esp, 0x6a2066u); f_00697878();
    /* 006a2066: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a2067: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 006a2069: mov ecx, edi */ r_ecx = r_edi;
    /* 006a206b: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a2070u); f_00694390();
    /* 006a2070: movsx edx, word ptr [edi + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0xb8u));
    /* 006a2077: mov eax, dword ptr [edi + 0xd8] */ r_eax = R32((u32)(r_edi+0xd8u));
    /* 006a207d: mov ebx, dword ptr [edi + 0xb0] */ r_ebx = R32((u32)(r_edi+0xb0u));
    /* 006a2083: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a2085: fld dword ptr [eax + edx*8 + 8] */ FPUSH(R_F32((u32)(r_eax+r_edx*8+0x8u)));
    /* 006a2089: fmul dword ptr [edi + 0x6c0] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0x6c0u));
    /* 006a208f: fstp dword ptr [edi + 0xd0] */ W_F32((u32)(r_edi+0xd0u), ST(0)); FPOP();
    /* 006a2095: or ebx, 0x100 */ {  u32 a = r_ebx; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a209b: mov dword ptr [edi + 0xb0], ebx */ W32((u32)(r_edi+0xb0u), r_ebx);
    /* 006a20a1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a20a2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a20a3: ret  */ FN_RET(0x006a201f); r_esp += 4; return;
}

void f_006a202a(void)
{
    FN_ENTER(0x006a202a);
    /* 006a202a: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a202c: mov ecx, edi */ r_ecx = r_edi;
    /* 006a202e: call 0x6a1ac0 */ r_esp -= 4; W32(r_esp, 0x6a2033u); f_006a1ac0();
    /* 006a2033: mov ecx, edi */ r_ecx = r_edi;
    /* 006a2035: call 0x6a20a4 */ r_esp -= 4; W32(r_esp, 0x6a203au); f_006a20a4();
    /* 006a203a: movsx ebx, ax */ r_ebx = (u32)(i32)(i16)(u16)r_eax;
    /* 006a203d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a203e: mov ecx, edi */ r_ecx = r_edi;
    /* 006a2040: call 0x6942a4 */ r_esp -= 4; W32(r_esp, 0x6a2045u); f_006942a4();
    /* 006a2045: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a2047: je 0x6a205a */ if (fZ) goto L_006a205a;
L_006a2049:; BB(0x006a2049);
    /* 006a2049: mov eax, dword ptr [edi + 0xb0] */ r_eax = R32((u32)(r_edi+0xb0u));
    /* 006a204f: or eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006a2054: mov dword ptr [edi + 0xb0], eax */ W32((u32)(r_edi+0xb0u), r_eax);
L_006a205a:; BB(0x006a205a);
    /* 006a205a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a205b: lea ecx, [edi + 0x6b8] */ r_ecx = (u32)(r_edi+0x6b8u);
    /* 006a2061: call 0x697878 */ r_esp -= 4; W32(r_esp, 0x6a2066u); f_00697878();
    /* 006a2066: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a2067: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 006a2069: mov ecx, edi */ r_ecx = r_edi;
    /* 006a206b: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a2070u); f_00694390();
    /* 006a2070: movsx edx, word ptr [edi + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0xb8u));
    /* 006a2077: mov eax, dword ptr [edi + 0xd8] */ r_eax = R32((u32)(r_edi+0xd8u));
    /* 006a207d: mov ebx, dword ptr [edi + 0xb0] */ r_ebx = R32((u32)(r_edi+0xb0u));
    /* 006a2083: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a2085: fld dword ptr [eax + edx*8 + 8] */ FPUSH(R_F32((u32)(r_eax+r_edx*8+0x8u)));
    /* 006a2089: fmul dword ptr [edi + 0x6c0] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0x6c0u));
    /* 006a208f: fstp dword ptr [edi + 0xd0] */ W_F32((u32)(r_edi+0xd0u), ST(0)); FPOP();
    /* 006a2095: or ebx, 0x100 */ {  u32 a = r_ebx; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a209b: mov dword ptr [edi + 0xb0], ebx */ W32((u32)(r_edi+0xb0u), r_ebx);
    /* 006a20a1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a20a2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a20a3: ret  */ FN_RET(0x006a202a); r_esp += 4; return;
}

void f_006a2033(void)
{
    FN_ENTER(0x006a2033);
    /* 006a2033: mov ecx, edi */ r_ecx = r_edi;
    /* 006a2035: call 0x6a20a4 */ r_esp -= 4; W32(r_esp, 0x6a203au); f_006a20a4();
    /* 006a203a: movsx ebx, ax */ r_ebx = (u32)(i32)(i16)(u16)r_eax;
    /* 006a203d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a203e: mov ecx, edi */ r_ecx = r_edi;
    /* 006a2040: call 0x6942a4 */ r_esp -= 4; W32(r_esp, 0x6a2045u); f_006942a4();
    /* 006a2045: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a2047: je 0x6a205a */ if (fZ) goto L_006a205a;
L_006a2049:; BB(0x006a2049);
    /* 006a2049: mov eax, dword ptr [edi + 0xb0] */ r_eax = R32((u32)(r_edi+0xb0u));
    /* 006a204f: or eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006a2054: mov dword ptr [edi + 0xb0], eax */ W32((u32)(r_edi+0xb0u), r_eax);
L_006a205a:; BB(0x006a205a);
    /* 006a205a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a205b: lea ecx, [edi + 0x6b8] */ r_ecx = (u32)(r_edi+0x6b8u);
    /* 006a2061: call 0x697878 */ r_esp -= 4; W32(r_esp, 0x6a2066u); f_00697878();
    /* 006a2066: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a2067: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 006a2069: mov ecx, edi */ r_ecx = r_edi;
    /* 006a206b: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a2070u); f_00694390();
    /* 006a2070: movsx edx, word ptr [edi + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0xb8u));
    /* 006a2077: mov eax, dword ptr [edi + 0xd8] */ r_eax = R32((u32)(r_edi+0xd8u));
    /* 006a207d: mov ebx, dword ptr [edi + 0xb0] */ r_ebx = R32((u32)(r_edi+0xb0u));
    /* 006a2083: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a2085: fld dword ptr [eax + edx*8 + 8] */ FPUSH(R_F32((u32)(r_eax+r_edx*8+0x8u)));
    /* 006a2089: fmul dword ptr [edi + 0x6c0] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0x6c0u));
    /* 006a208f: fstp dword ptr [edi + 0xd0] */ W_F32((u32)(r_edi+0xd0u), ST(0)); FPOP();
    /* 006a2095: or ebx, 0x100 */ {  u32 a = r_ebx; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a209b: mov dword ptr [edi + 0xb0], ebx */ W32((u32)(r_edi+0xb0u), r_ebx);
    /* 006a20a1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a20a2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a20a3: ret  */ FN_RET(0x006a2033); r_esp += 4; return;
}

void f_006a20a4(void) /* sub_6A20A4 */
{
    FN_ENTER(0x006a20a4);
    /* 006a20a4: mov eax, dword ptr [ecx + 0x6c4] */ r_eax = R32((u32)(r_ecx+0x6c4u));
    /* 006a20aa: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006a20ac: je 0x6a20bd */ if (fZ) goto L_006a20bd;
L_006a20ae:; BB(0x006a20ae);
    /* 006a20ae: mov ecx, dword ptr [ecx + 0x38c] */ r_ecx = R32((u32)(r_ecx+0x38cu));
    /* 006a20b4: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a20b6: call dword ptr [eax + 0x34] */ { u32 t = R32((u32)(r_eax+0x34u)); r_esp -= 4; W32(r_esp, 0x6a20b9u); call_ind(t); }
    /* 006a20b9: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a20bc: ret  */ FN_RET(0x006a20a4); r_esp += 4; return;
L_006a20bd:; BB(0x006a20bd);
    /* 006a20bd: mov ecx, dword ptr [ecx + 0x38c] */ r_ecx = R32((u32)(r_ecx+0x38cu));
    /* 006a20c3: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a20c5: call dword ptr [eax + 0x50] */ { u32 t = R32((u32)(r_eax+0x50u)); r_esp -= 4; W32(r_esp, 0x6a20c8u); call_ind(t); }
    /* 006a20c8: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a20cb: ret  */ FN_RET(0x006a20a4); r_esp += 4; return;
}

void f_006a20cc(void) /* sub_6A20CC */
{
    FN_ENTER(0x006a20cc);
    /* 006a20cc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a20cd: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a20ce: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a20cf: mov esi, ecx */ r_esi = r_ecx;
    /* 006a20d1: mov eax, dword ptr [esi + 0x38c] */ r_eax = R32((u32)(r_esi+0x38cu));
    /* 006a20d7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a20d9: je 0x6a2130 */ if (fZ) goto L_006a2130;
L_006a20db:; BB(0x006a20db);
    /* 006a20db: call 0x70a604 */ r_esp -= 4; W32(r_esp, 0x6a20e0u); f_0070a604();
    /* 006a20e0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a20e2: jne 0x6a20ed */ if (!fZ) goto L_006a20ed;
L_006a20e4:; BB(0x006a20e4);
    /* 006a20e4: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 006a20e9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a20ea: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a20eb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a20ec: ret  */ FN_RET(0x006a20cc); r_esp += 4; return;
L_006a20ed:; BB(0x006a20ed);
    /* 006a20ed: mov eax, dword ptr [esi + 0x33c] */ r_eax = R32((u32)(r_esi+0x33cu));
    /* 006a20f3: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006a20f5: je 0x6a20fe */ if (fZ) goto L_006a20fe;
L_006a20f7:; BB(0x006a20f7);
    /* 006a20f7: mov eax, 1 */ r_eax = 0x1u;
    /* 006a20fc: jmp 0x6a2100 */ goto L_006a2100;
L_006a20fe:; BB(0x006a20fe);
    /* 006a20fe: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_006a2100:; BB(0x006a2100);
    /* 006a2100: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a2102: je 0x6a210d */ if (fZ) goto L_006a210d;
L_006a2104:; BB(0x006a2104);
    /* 006a2104: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 006a2109: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a210a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a210b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a210c: ret  */ FN_RET(0x006a20cc); r_esp += 4; return;
L_006a210d:; BB(0x006a210d);
    /* 006a210d: mov eax, dword ptr [esi + 0x634] */ r_eax = R32((u32)(r_esi+0x634u));
    /* 006a2113: lea ebp, [esi + 0x628] */ r_ebp = (u32)(r_esi+0x628u);
    /* 006a2119: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a211b: je 0x6a2130 */ if (fZ) goto L_006a2130;
L_006a211d:; BB(0x006a211d);
    /* 006a211d: call 0x68be84 */ r_esp -= 4; W32(r_esp, 0x6a2122u); f_0068be84();
    /* 006a2122: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a2124: jne 0x6a2139 */ if (!fZ) goto L_006a2139;
L_006a2126:; BB(0x006a2126);
    /* 006a2126: mov eax, dword ptr [esi + 0xeb8] */ r_eax = R32((u32)(r_esi+0xeb8u));
    /* 006a212c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a212e: jne 0x6a213f */ if (!fZ) goto L_006a213f;
L_006a2130:; BB(0x006a2130);
    /* 006a2130: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 006a2135: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a2136: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a2137: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a2138: ret  */ FN_RET(0x006a20cc); r_esp += 4; return;
L_006a2139:; BB(0x006a2139);
    /* 006a2139: mov eax, dword ptr [esi + 0xeb8] */ r_eax = R32((u32)(r_esi+0xeb8u));
L_006a213f:; BB(0x006a213f);
    /* 006a213f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a2141: je 0x6a215d */ if (fZ) goto L_006a215d;
L_006a2143:; BB(0x006a2143);
    /* 006a2143: call 0x77cec0 */ r_esp -= 4; W32(r_esp, 0x6a2148u); f_0077cec0();
    /* 006a2148: mov ebx, eax */ r_ebx = r_eax;
    /* 006a214a: movsx edx, bx */ r_edx = (u32)(i32)(i16)(u16)r_ebx;
    /* 006a214d: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a2150: je 0x6a215d */ if (fZ) goto L_006a215d;
L_006a2152:; BB(0x006a2152);
    /* 006a2152: call 0x77ce20 */ r_esp -= 4; W32(r_esp, 0x6a2157u); f_0077ce20();
    /* 006a2157: mov eax, ebx */ r_eax = r_ebx;
    /* 006a2159: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a215a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a215b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a215c: ret  */ FN_RET(0x006a20cc); r_esp += 4; return;
L_006a215d:; BB(0x006a215d);
    /* 006a215d: call 0x7c00d0 */ r_esp -= 4; W32(r_esp, 0x6a2162u); f_007c00d0();
    /* 006a2162: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a2164: je 0x6a2172 */ if (fZ) goto L_006a2172;
L_006a2166:; BB(0x006a2166);
    /* 006a2166: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 006a2168: call 0x7bfff8 */ r_esp -= 4; W32(r_esp, 0x6a216du); f_007bfff8();
    /* 006a216d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a216e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a2170: jne 0x6a219f */ if (!fZ) goto L_006a219f;
L_006a2172:; BB(0x006a2172);
    /* 006a2172: mov ecx, esi */ r_ecx = r_esi;
    /* 006a2174: call 0x689410 */ r_esp -= 4; W32(r_esp, 0x6a2179u); f_00689410();
    /* 006a2179: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a217b: jne 0x6a21b4 */ if (!fZ) goto L_006a21b4;
L_006a217d:; BB(0x006a217d);
    /* 006a217d: push dword ptr [0xa0f67c] */ { u32 v = R32((u32)(0xa0f67cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006a2183: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a2185: call 0x6a7c58 */ r_esp -= 4; W32(r_esp, 0x6a218au); f_006a7c58();
    /* 006a218a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a218c: je 0x6a21b4 */ if (fZ) goto L_006a21b4;
L_006a218e:; BB(0x006a218e);
    /* 006a218e: push dword ptr [0xa0f674] */ { u32 v = R32((u32)(0xa0f674u)); r_esp -= 4; W32(r_esp, v); }
    /* 006a2194: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a2196: call 0x6a7c24 */ r_esp -= 4; W32(r_esp, 0x6a219bu); f_006a7c24();
    /* 006a219b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a219d: je 0x6a21b4 */ if (fZ) goto L_006a21b4;
L_006a219f:; BB(0x006a219f);
    /* 006a219f: mov ecx, dword ptr [esi + 0x38c] */ r_ecx = R32((u32)(r_esi+0x38cu));
    /* 006a21a5: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a21a7: call dword ptr [eax + 0x108] */ { u32 t = R32((u32)(r_eax+0x108u)); r_esp -= 4; W32(r_esp, 0x6a21adu); call_ind(t); }
    /* 006a21ad: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a21b0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a21b1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a21b2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a21b3: ret  */ FN_RET(0x006a20cc); r_esp += 4; return;
L_006a21b4:; BB(0x006a21b4);
    /* 006a21b4: call 0x7c00d0 */ r_esp -= 4; W32(r_esp, 0x6a21b9u); f_007c00d0();
    /* 006a21b9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a21bb: je 0x6a21c9 */ if (fZ) goto L_006a21c9;
L_006a21bd:; BB(0x006a21bd);
    /* 006a21bd: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 006a21bf: call 0x7bfff8 */ r_esp -= 4; W32(r_esp, 0x6a21c4u); f_007bfff8();
    /* 006a21c4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a21c5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a21c7: jne 0x6a21f6 */ if (!fZ) goto L_006a21f6;
L_006a21c9:; BB(0x006a21c9);
    /* 006a21c9: mov ecx, esi */ r_ecx = r_esi;
    /* 006a21cb: call 0x689410 */ r_esp -= 4; W32(r_esp, 0x6a21d0u); f_00689410();
    /* 006a21d0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a21d2: jne 0x6a220b */ if (!fZ) goto L_006a220b;
L_006a21d4:; BB(0x006a21d4);
    /* 006a21d4: push dword ptr [0xa0f67c] */ { u32 v = R32((u32)(0xa0f67cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006a21da: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a21dc: call 0x6a7c58 */ r_esp -= 4; W32(r_esp, 0x6a21e1u); f_006a7c58();
    /* 006a21e1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a21e3: je 0x6a220b */ if (fZ) goto L_006a220b;
L_006a21e5:; BB(0x006a21e5);
    /* 006a21e5: push dword ptr [0xa0f678] */ { u32 v = R32((u32)(0xa0f678u)); r_esp -= 4; W32(r_esp, v); }
    /* 006a21eb: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a21ed: call 0x6a7c24 */ r_esp -= 4; W32(r_esp, 0x6a21f2u); f_006a7c24();
    /* 006a21f2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a21f4: je 0x6a220b */ if (fZ) goto L_006a220b;
L_006a21f6:; BB(0x006a21f6);
    /* 006a21f6: mov ecx, dword ptr [esi + 0x38c] */ r_ecx = R32((u32)(r_esi+0x38cu));
    /* 006a21fc: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a21fe: call dword ptr [eax + 0x10c] */ { u32 t = R32((u32)(r_eax+0x10cu)); r_esp -= 4; W32(r_esp, 0x6a2204u); call_ind(t); }
    /* 006a2204: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a2207: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a2208: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a2209: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a220a: ret  */ FN_RET(0x006a20cc); r_esp += 4; return;
L_006a220b:; BB(0x006a220b);
    /* 006a220b: push 0xfff7ffff */ { u32 v = 0xfff7ffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006a2210: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006a2212: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 006a2216: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a2217: call 0x7be17c */ r_esp -= 4; W32(r_esp, 0x6a221cu); f_007be17c();
    /* 006a221c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006a221f: call 0x7c00d0 */ r_esp -= 4; W32(r_esp, 0x6a2224u); f_007c00d0();
    /* 006a2224: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a2226: je 0x6a2822 */ if (fZ) goto L_006a2822;
L_006a222c:; BB(0x006a222c);
    /* 006a222c: call 0x7c00c4 */ r_esp -= 4; W32(r_esp, 0x6a2231u); f_007c00c4();
    /* 006a2231: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a2233: je 0x6a224c */ if (fZ) goto L_006a224c;
L_006a2235:; BB(0x006a2235);
    /* 006a2235: push 0xfff7ffff */ { u32 v = 0xfff7ffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006a223a: push 0x80000 */ { u32 v = 0x80000u; r_esp -= 4; W32(r_esp, v); }
    /* 006a223f: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 006a2243: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a2244: call 0x7be17c */ r_esp -= 4; W32(r_esp, 0x6a2249u); f_007be17c();
    /* 006a2249: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006a224c:; BB(0x006a224c);
    /* 006a224c: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 006a224e: call 0x7bfff8 */ r_esp -= 4; W32(r_esp, 0x6a2253u); f_007bfff8();
    /* 006a2253: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a2254: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a2256: je 0x6a226a */ if (fZ) goto L_006a226a;
L_006a2258:; BB(0x006a2258);
    /* 006a2258: mov ecx, dword ptr [esi + 0x38c] */ r_ecx = R32((u32)(r_esi+0x38cu));
    /* 006a225e: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a2260: call dword ptr [eax + 0x58] */ { u32 t = R32((u32)(r_eax+0x58u)); r_esp -= 4; W32(r_esp, 0x6a2263u); call_ind(t); }
    /* 006a2263: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a2266: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a2267: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a2268: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a2269: ret  */ FN_RET(0x006a20cc); r_esp += 4; return;
L_006a226a:; BB(0x006a226a);
    /* 006a226a: push 0x41 */ { u32 v = 0x41u; r_esp -= 4; W32(r_esp, v); }
    /* 006a226c: call 0x7bfff8 */ r_esp -= 4; W32(r_esp, 0x6a2271u); f_007bfff8();
    /* 006a2271: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a2272: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a2274: je 0x6a2288 */ if (fZ) goto L_006a2288;
L_006a2276:; BB(0x006a2276);
    /* 006a2276: mov ecx, dword ptr [esi + 0x38c] */ r_ecx = R32((u32)(r_esi+0x38cu));
    /* 006a227c: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a227e: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x6a2281u); call_ind(t); }
    /* 006a2281: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a2284: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a2285: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a2286: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a2287: ret  */ FN_RET(0x006a20cc); r_esp += 4; return;
L_006a2288:; BB(0x006a2288);
    /* 006a2288: push 0x42 */ { u32 v = 0x42u; r_esp -= 4; W32(r_esp, v); }
    /* 006a228a: call 0x7bfff8 */ r_esp -= 4; W32(r_esp, 0x6a228fu); f_007bfff8();
    /* 006a228f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a2290: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a2292: je 0x6a22a6 */ if (fZ) goto L_006a22a6;
L_006a2294:; BB(0x006a2294);
    /* 006a2294: mov ecx, dword ptr [esi + 0x38c] */ r_ecx = R32((u32)(r_esi+0x38cu));
    /* 006a229a: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a229c: call dword ptr [eax + 0x68] */ { u32 t = R32((u32)(r_eax+0x68u)); r_esp -= 4; W32(r_esp, 0x6a229fu); call_ind(t); }
    /* 006a229f: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a22a2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a22a3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a22a4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a22a5: ret  */ FN_RET(0x006a20cc); r_esp += 4; return;
L_006a22a6:; BB(0x006a22a6);
    /* 006a22a6: push 0x43 */ { u32 v = 0x43u; r_esp -= 4; W32(r_esp, v); }
    /* 006a22a8: call 0x7bfff8 */ r_esp -= 4; W32(r_esp, 0x6a22adu); f_007bfff8();
    /* 006a22ad: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a22ae: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a22b0: je 0x6a22c4 */ if (fZ) goto L_006a22c4;
L_006a22b2:; BB(0x006a22b2);
    /* 006a22b2: mov ecx, dword ptr [esi + 0x38c] */ r_ecx = R32((u32)(r_esi+0x38cu));
    /* 006a22b8: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a22ba: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x6a22bdu); call_ind(t); }
    /* 006a22bd: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a22c0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a22c1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a22c2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a22c3: ret  */ FN_RET(0x006a20cc); r_esp += 4; return;
L_006a22c4:; BB(0x006a22c4);
    /* 006a22c4: push 0x44 */ { u32 v = 0x44u; r_esp -= 4; W32(r_esp, v); }
    /* 006a22c6: call 0x7bfff8 */ r_esp -= 4; W32(r_esp, 0x6a22cbu); f_007bfff8();
    /* 006a22cb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a22cc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a22ce: je 0x6a22e2 */ if (fZ) goto L_006a22e2;
L_006a22d0:; BB(0x006a22d0);
    /* 006a22d0: mov ecx, dword ptr [esi + 0x38c] */ r_ecx = R32((u32)(r_esi+0x38cu));
    /* 006a22d6: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a22d8: call dword ptr [eax + 0x74] */ { u32 t = R32((u32)(r_eax+0x74u)); r_esp -= 4; W32(r_esp, 0x6a22dbu); call_ind(t); }
    /* 006a22db: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a22de: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a22df: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a22e0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a22e1: ret  */ FN_RET(0x006a20cc); r_esp += 4; return;
L_006a22e2:; BB(0x006a22e2);
    /* 006a22e2: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 006a22e4: call 0x7bfff8 */ r_esp -= 4; W32(r_esp, 0x6a22e9u); f_007bfff8();
    /* 006a22e9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a22ea: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a22ec: je 0x6a2300 */ if (fZ) goto L_006a2300;
L_006a22ee:; BB(0x006a22ee);
    /* 006a22ee: mov ecx, dword ptr [esi + 0x38c] */ r_ecx = R32((u32)(r_esi+0x38cu));
    /* 006a22f4: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a22f6: call dword ptr [eax + 0x78] */ { u32 t = R32((u32)(r_eax+0x78u)); r_esp -= 4; W32(r_esp, 0x6a22f9u); call_ind(t); }
    /* 006a22f9: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a22fc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a22fd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a22fe: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a22ff: ret  */ FN_RET(0x006a20cc); r_esp += 4; return;
L_006a2300:; BB(0x006a2300);
    /* 006a2300: push 0x46 */ { u32 v = 0x46u; r_esp -= 4; W32(r_esp, v); }
    /* 006a2302: call 0x7bfff8 */ r_esp -= 4; W32(r_esp, 0x6a2307u); f_007bfff8();
    /* 006a2307: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a2308: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a230a: je 0x6a231e */ if (fZ) goto L_006a231e;
L_006a230c:; BB(0x006a230c);
    /* 006a230c: mov ecx, dword ptr [esi + 0x38c] */ r_ecx = R32((u32)(r_esi+0x38cu));
    /* 006a2312: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a2314: call dword ptr [eax + 0x7c] */ { u32 t = R32((u32)(r_eax+0x7cu)); r_esp -= 4; W32(r_esp, 0x6a2317u); call_ind(t); }
    /* 006a2317: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a231a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a231b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a231c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a231d: ret  */ FN_RET(0x006a20cc); r_esp += 4; return;
L_006a231e:; BB(0x006a231e);
    /* 006a231e: push 0x47 */ { u32 v = 0x47u; r_esp -= 4; W32(r_esp, v); }
    /* 006a2320: call 0x7bfff8 */ r_esp -= 4; W32(r_esp, 0x6a2325u); f_007bfff8();
    /* 006a2325: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a2326: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a2328: je 0x6a233f */ if (fZ) goto L_006a233f;
L_006a232a:; BB(0x006a232a);
    /* 006a232a: mov ecx, dword ptr [esi + 0x38c] */ r_ecx = R32((u32)(r_esi+0x38cu));
    /* 006a2330: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a2332: call dword ptr [eax + 0x80] */ { u32 t = R32((u32)(r_eax+0x80u)); r_esp -= 4; W32(r_esp, 0x6a2338u); call_ind(t); }
    /* 006a2338: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a233b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a233c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a233d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a233e: ret  */ FN_RET(0x006a20cc); r_esp += 4; return;
L_006a233f:; BB(0x006a233f);
    /* 006a233f: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 006a2341: call 0x7bfff8 */ r_esp -= 4; W32(r_esp, 0x6a2346u); f_007bfff8();
    /* 006a2346: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a2347: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a2349: je 0x6a2360 */ if (fZ) goto L_006a2360;
L_006a234b:; BB(0x006a234b);
    /* 006a234b: mov ecx, dword ptr [esi + 0x38c] */ r_ecx = R32((u32)(r_esi+0x38cu));
    /* 006a2351: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a2353: call dword ptr [eax + 0x84] */ { u32 t = R32((u32)(r_eax+0x84u)); r_esp -= 4; W32(r_esp, 0x6a2359u); call_ind(t); }
    /* 006a2359: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a235c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a235d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a235e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a235f: ret  */ FN_RET(0x006a20cc); r_esp += 4; return;
L_006a2360:; BB(0x006a2360);
    /* 006a2360: push 0x49 */ { u32 v = 0x49u; r_esp -= 4; W32(r_esp, v); }
    /* 006a2362: call 0x7bfff8 */ r_esp -= 4; W32(r_esp, 0x6a2367u); f_007bfff8();
    /* 006a2367: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a2368: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a236a: je 0x6a2381 */ if (fZ) goto L_006a2381;
L_006a236c:; BB(0x006a236c);
    /* 006a236c: mov ecx, dword ptr [esi + 0x38c] */ r_ecx = R32((u32)(r_esi+0x38cu));
    /* 006a2372: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a2374: call dword ptr [eax + 0x88] */ { u32 t = R32((u32)(r_eax+0x88u)); r_esp -= 4; W32(r_esp, 0x6a237au); call_ind(t); }
    /* 006a237a: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a237d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a237e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a237f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a2380: ret  */ FN_RET(0x006a20cc); r_esp += 4; return;
L_006a2381:; BB(0x006a2381);
    /* 006a2381: push 0x4a */ { u32 v = 0x4au; r_esp -= 4; W32(r_esp, v); }
    /* 006a2383: call 0x7bfff8 */ r_esp -= 4; W32(r_esp, 0x6a2388u); f_007bfff8();
    /* 006a2388: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a2389: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a238b: je 0x6a23a2 */ if (fZ) goto L_006a23a2;
L_006a238d:; BB(0x006a238d);
    /* 006a238d: mov ecx, dword ptr [esi + 0x38c] */ r_ecx = R32((u32)(r_esi+0x38cu));
    /* 006a2393: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a2395: call dword ptr [eax + 0x8c] */ { u32 t = R32((u32)(r_eax+0x8cu)); r_esp -= 4; W32(r_esp, 0x6a239bu); call_ind(t); }
    /* 006a239b: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a239e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a239f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a23a0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a23a1: ret  */ FN_RET(0x006a20cc); r_esp += 4; return;
L_006a23a2:; BB(0x006a23a2);
    /* 006a23a2: push 0x4b */ { u32 v = 0x4bu; r_esp -= 4; W32(r_esp, v); }
    /* 006a23a4: call 0x7bfff8 */ r_esp -= 4; W32(r_esp, 0x6a23a9u); f_007bfff8();
    /* 006a23a9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a23aa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a23ac: je 0x6a23c3 */ if (fZ) goto L_006a23c3;
L_006a23ae:; BB(0x006a23ae);
    /* 006a23ae: mov ecx, dword ptr [esi + 0x38c] */ r_ecx = R32((u32)(r_esi+0x38cu));
    /* 006a23b4: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a23b6: call dword ptr [eax + 0x90] */ { u32 t = R32((u32)(r_eax+0x90u)); r_esp -= 4; W32(r_esp, 0x6a23bcu); call_ind(t); }
    /* 006a23bc: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a23bf: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a23c0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a23c1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a23c2: ret  */ FN_RET(0x006a20cc); r_esp += 4; return;
L_006a23c3:; BB(0x006a23c3);
    /* 006a23c3: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 006a23c5: call 0x7bfff8 */ r_esp -= 4; W32(r_esp, 0x6a23cau); f_007bfff8();
    /* 006a23ca: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a23cb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a23cd: je 0x6a23e1 */ if (fZ) goto L_006a23e1;
L_006a23cf:; BB(0x006a23cf);
    /* 006a23cf: mov ecx, dword ptr [esi + 0x38c] */ r_ecx = R32((u32)(r_esi+0x38cu));
    /* 006a23d5: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a23d7: call dword ptr [eax + 0x64] */ { u32 t = R32((u32)(r_eax+0x64u)); r_esp -= 4; W32(r_esp, 0x6a23dau); call_ind(t); }
    /* 006a23da: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a23dd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a23de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a23df: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a23e0: ret  */ FN_RET(0x006a20cc); r_esp += 4; return;
L_006a23e1:; BB(0x006a23e1);
    /* 006a23e1: push 0x2e */ { u32 v = 0x2eu; r_esp -= 4; W32(r_esp, v); }
    /* 006a23e3: call 0x7bfff8 */ r_esp -= 4; W32(r_esp, 0x6a23e8u); f_007bfff8();
    /* 006a23e8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a23e9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a23eb: je 0x6a2402 */ if (fZ) goto L_006a2402;
L_006a23ed:; BB(0x006a23ed);
    /* 006a23ed: mov ecx, dword ptr [esi + 0x38c] */ r_ecx = R32((u32)(r_esi+0x38cu));
    /* 006a23f3: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a23f5: call dword ptr [eax + 0x94] */ { u32 t = R32((u32)(r_eax+0x94u)); r_esp -= 4; W32(r_esp, 0x6a23fbu); call_ind(t); }
    /* 006a23fb: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a23fe: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a23ff: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a2400: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a2401: ret  */ FN_RET(0x006a20cc); r_esp += 4; return;
L_006a2402:; BB(0x006a2402);
    /* 006a2402: push 0x2f */ { u32 v = 0x2fu; r_esp -= 4; W32(r_esp, v); }
    /* 006a2404: call 0x7bfff8 */ r_esp -= 4; W32(r_esp, 0x6a2409u); f_007bfff8();
    /* 006a2409: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a240a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a240c: je 0x6a2423 */ if (fZ) goto L_006a2423;
L_006a240e:; BB(0x006a240e);
    /* 006a240e: mov ecx, dword ptr [esi + 0x38c] */ r_ecx = R32((u32)(r_esi+0x38cu));
    /* 006a2414: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a2416: call dword ptr [eax + 0x98] */ { u32 t = R32((u32)(r_eax+0x98u)); r_esp -= 4; W32(r_esp, 0x6a241cu); call_ind(t); }
    /* 006a241c: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a241f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a2420: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a2421: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a2422: ret  */ FN_RET(0x006a20cc); r_esp += 4; return;
L_006a2423:; BB(0x006a2423);
    /* 006a2423: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 006a2425: call 0x7bfff8 */ r_esp -= 4; W32(r_esp, 0x6a242au); f_007bfff8();
    /* 006a242a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a242b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a242d: je 0x6a2444 */ if (fZ) goto L_006a2444;
L_006a242f:; BB(0x006a242f);
    /* 006a242f: mov ecx, dword ptr [esi + 0x38c] */ r_ecx = R32((u32)(r_esi+0x38cu));
    /* 006a2435: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a2437: call dword ptr [eax + 0x9c] */ { u32 t = R32((u32)(r_eax+0x9cu)); r_esp -= 4; W32(r_esp, 0x6a243du); call_ind(t); }
    /* 006a243d: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a2440: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a2441: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a2442: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a2443: ret  */ FN_RET(0x006a20cc); r_esp += 4; return;
L_006a2444:; BB(0x006a2444);
    /* 006a2444: push 0x31 */ { u32 v = 0x31u; r_esp -= 4; W32(r_esp, v); }
    /* 006a2446: call 0x7bfff8 */ r_esp -= 4; W32(r_esp, 0x6a244bu); f_007bfff8();
    /* 006a244b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a244c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a244e: je 0x6a2465 */ if (fZ) goto L_006a2465;
L_006a2450:; BB(0x006a2450);
    /* 006a2450: mov ecx, dword ptr [esi + 0x38c] */ r_ecx = R32((u32)(r_esi+0x38cu));
    /* 006a2456: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a2458: call dword ptr [eax + 0xa0] */ { u32 t = R32((u32)(r_eax+0xa0u)); r_esp -= 4; W32(r_esp, 0x6a245eu); call_ind(t); }
    /* 006a245e: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a2461: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a2462: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a2463: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a2464: ret  */ FN_RET(0x006a20cc); r_esp += 4; return;
L_006a2465:; BB(0x006a2465);
    /* 006a2465: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 006a2467: call 0x7bfff8 */ r_esp -= 4; W32(r_esp, 0x6a246cu); f_007bfff8();
    /* 006a246c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a246d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a246f: je 0x6a2486 */ if (fZ) goto L_006a2486;
L_006a2471:; BB(0x006a2471);
    /* 006a2471: mov ecx, dword ptr [esi + 0x38c] */ r_ecx = R32((u32)(r_esi+0x38cu));
    /* 006a2477: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a2479: call dword ptr [eax + 0xa4] */ { u32 t = R32((u32)(r_eax+0xa4u)); r_esp -= 4; W32(r_esp, 0x6a247fu); call_ind(t); }
    /* 006a247f: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a2482: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a2483: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a2484: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a2485: ret  */ FN_RET(0x006a20cc); r_esp += 4; return;
L_006a2486:; BB(0x006a2486);
    /* 006a2486: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 006a2488: call 0x7bfff8 */ r_esp -= 4; W32(r_esp, 0x6a248du); f_007bfff8();
    /* 006a248d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a248e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a2490: je 0x6a24a7 */ if (fZ) goto L_006a24a7;
L_006a2492:; BB(0x006a2492);
    /* 006a2492: mov ecx, dword ptr [esi + 0x38c] */ r_ecx = R32((u32)(r_esi+0x38cu));
    /* 006a2498: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a249a: call dword ptr [eax + 0xa8] */ { u32 t = R32((u32)(r_eax+0xa8u)); r_esp -= 4; W32(r_esp, 0x6a24a0u); call_ind(t); }
    /* 006a24a0: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a24a3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a24a4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a24a5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a24a6: ret  */ FN_RET(0x006a20cc); r_esp += 4; return;
L_006a24a7:; BB(0x006a24a7);
    /* 006a24a7: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 006a24a9: call 0x7bfff8 */ r_esp -= 4; W32(r_esp, 0x6a24aeu); f_007bfff8();
    /* 006a24ae: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a24af: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a24b1: je 0x6a24c8 */ if (fZ) goto L_006a24c8;
L_006a24b3:; BB(0x006a24b3);
    /* 006a24b3: mov ecx, dword ptr [esi + 0x38c] */ r_ecx = R32((u32)(r_esi+0x38cu));
    /* 006a24b9: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a24bb: call dword ptr [eax + 0xac] */ { u32 t = R32((u32)(r_eax+0xacu)); r_esp -= 4; W32(r_esp, 0x6a24c1u); call_ind(t); }
    /* 006a24c1: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a24c4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a24c5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a24c6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a24c7: ret  */ FN_RET(0x006a20cc); r_esp += 4; return;
L_006a24c8:; BB(0x006a24c8);
    /* 006a24c8: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 006a24ca: call 0x7bfff8 */ r_esp -= 4; W32(r_esp, 0x6a24cfu); f_007bfff8();
    /* 006a24cf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a24d0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a24d2: je 0x6a24e9 */ if (fZ) goto L_006a24e9;
L_006a24d4:; BB(0x006a24d4);
    /* 006a24d4: mov ecx, dword ptr [esi + 0x38c] */ r_ecx = R32((u32)(r_esi+0x38cu));
    /* 006a24da: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a24dc: call dword ptr [eax + 0xb0] */ { u32 t = R32((u32)(r_eax+0xb0u)); r_esp -= 4; W32(r_esp, 0x6a24e2u); call_ind(t); }
    /* 006a24e2: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a24e5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a24e6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a24e7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a24e8: ret  */ FN_RET(0x006a20cc); r_esp += 4; return;
L_006a24e9:; BB(0x006a24e9);
    /* 006a24e9: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 006a24eb: call 0x7bfff8 */ r_esp -= 4; W32(r_esp, 0x6a24f0u); f_007bfff8();
    /* 006a24f0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a24f1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a24f3: je 0x6a250a */ if (fZ) goto L_006a250a;
L_006a24f5:; BB(0x006a24f5);
    /* 006a24f5: mov ecx, dword ptr [esi + 0x38c] */ r_ecx = R32((u32)(r_esi+0x38cu));
    /* 006a24fb: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a24fd: call dword ptr [eax + 0xb4] */ { u32 t = R32((u32)(r_eax+0xb4u)); r_esp -= 4; W32(r_esp, 0x6a2503u); call_ind(t); }
    /* 006a2503: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a2506: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a2507: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a2508: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a2509: ret  */ FN_RET(0x006a20cc); r_esp += 4; return;
L_006a250a:; BB(0x006a250a);
    /* 006a250a: push 0x1d */ { u32 v = 0x1du; r_esp -= 4; W32(r_esp, v); }
    /* 006a250c: call 0x7bfff8 */ r_esp -= 4; W32(r_esp, 0x6a2511u); f_007bfff8();
    /* 006a2511: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a2512: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a2514: je 0x6a252b */ if (fZ) goto L_006a252b;
L_006a2516:; BB(0x006a2516);
    /* 006a2516: mov ecx, dword ptr [esi + 0x38c] */ r_ecx = R32((u32)(r_esi+0x38cu));
    /* 006a251c: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a251e: call dword ptr [eax + 0xb8] */ { u32 t = R32((u32)(r_eax+0xb8u)); r_esp -= 4; W32(r_esp, 0x6a2524u); call_ind(t); }
    /* 006a2524: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a2527: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a2528: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a2529: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a252a: ret  */ FN_RET(0x006a20cc); r_esp += 4; return;
L_006a252b:; BB(0x006a252b);
    /* 006a252b: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 006a252d: call 0x7bfff8 */ r_esp -= 4; W32(r_esp, 0x6a2532u); f_007bfff8();
    /* 006a2532: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a2533: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a2535: je 0x6a254c */ if (fZ) goto L_006a254c;
L_006a2537:; BB(0x006a2537);
    /* 006a2537: mov ecx, dword ptr [esi + 0x38c] */ r_ecx = R32((u32)(r_esi+0x38cu));
    /* 006a253d: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a253f: call dword ptr [eax + 0xbc] */ { u32 t = R32((u32)(r_eax+0xbcu)); r_esp -= 4; W32(r_esp, 0x6a2545u); call_ind(t); }
    /* 006a2545: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a2548: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a2549: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a254a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a254b: ret  */ FN_RET(0x006a20cc); r_esp += 4; return;
L_006a254c:; BB(0x006a254c);
    /* 006a254c: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 006a254e: call 0x7bfff8 */ r_esp -= 4; W32(r_esp, 0x6a2553u); f_007bfff8();
    /* 006a2553: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a2554: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a2556: je 0x6a256d */ if (fZ) goto L_006a256d;
L_006a2558:; BB(0x006a2558);
    /* 006a2558: mov ecx, dword ptr [esi + 0x38c] */ r_ecx = R32((u32)(r_esi+0x38cu));
    /* 006a255e: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a2560: call dword ptr [eax + 0xc0] */ { u32 t = R32((u32)(r_eax+0xc0u)); r_esp -= 4; W32(r_esp, 0x6a2566u); call_ind(t); }
    /* 006a2566: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a2569: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a256a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a256b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a256c: ret  */ FN_RET(0x006a20cc); r_esp += 4; return;
L_006a256d:; BB(0x006a256d);
    /* 006a256d: push 0x21 */ { u32 v = 0x21u; r_esp -= 4; W32(r_esp, v); }
    /* 006a256f: call 0x7bfff8 */ r_esp -= 4; W32(r_esp, 0x6a2574u); f_007bfff8();
    /* 006a2574: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a2575: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a2577: je 0x6a258e */ if (fZ) goto L_006a258e;
L_006a2579:; BB(0x006a2579);
    /* 006a2579: mov ecx, dword ptr [esi + 0x38c] */ r_ecx = R32((u32)(r_esi+0x38cu));
    /* 006a257f: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a2581: call dword ptr [eax + 0xc4] */ { u32 t = R32((u32)(r_eax+0xc4u)); r_esp -= 4; W32(r_esp, 0x6a2587u); call_ind(t); }
    /* 006a2587: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a258a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a258b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a258c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a258d: ret  */ FN_RET(0x006a20cc); r_esp += 4; return;
L_006a258e:; BB(0x006a258e);
    /* 006a258e: push 0x1a */ { u32 v = 0x1au; r_esp -= 4; W32(r_esp, v); }
    /* 006a2590: call 0x7bfff8 */ r_esp -= 4; W32(r_esp, 0x6a2595u); f_007bfff8();
    /* 006a2595: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a2596: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a2598: je 0x6a25af */ if (fZ) goto L_006a25af;
L_006a259a:; BB(0x006a259a);
    /* 006a259a: mov ecx, dword ptr [esi + 0x38c] */ r_ecx = R32((u32)(r_esi+0x38cu));
    /* 006a25a0: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a25a2: call dword ptr [eax + 0xc8] */ { u32 t = R32((u32)(r_eax+0xc8u)); r_esp -= 4; W32(r_esp, 0x6a25a8u); call_ind(t); }
    /* 006a25a8: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a25ab: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a25ac: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a25ad: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a25ae: ret  */ FN_RET(0x006a20cc); r_esp += 4; return;
L_006a25af:; BB(0x006a25af);
    /* 006a25af: push 0x26 */ { u32 v = 0x26u; r_esp -= 4; W32(r_esp, v); }
    /* 006a25b1: call 0x7bfff8 */ r_esp -= 4; W32(r_esp, 0x6a25b6u); f_007bfff8();
    /* 006a25b6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a25b7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a25b9: je 0x6a25d0 */ if (fZ) goto L_006a25d0;
L_006a25bb:; BB(0x006a25bb);
    /* 006a25bb: mov ecx, dword ptr [esi + 0x38c] */ r_ecx = R32((u32)(r_esi+0x38cu));
    /* 006a25c1: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a25c3: call dword ptr [eax + 0xcc] */ { u32 t = R32((u32)(r_eax+0xccu)); r_esp -= 4; W32(r_esp, 0x6a25c9u); call_ind(t); }
    /* 006a25c9: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a25cc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a25cd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a25ce: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a25cf: ret  */ FN_RET(0x006a20cc); r_esp += 4; return;
L_006a25d0:; BB(0x006a25d0);
    /* 006a25d0: push 0x22 */ { u32 v = 0x22u; r_esp -= 4; W32(r_esp, v); }
    /* 006a25d2: call 0x7bfff8 */ r_esp -= 4; W32(r_esp, 0x6a25d7u); f_007bfff8();
    /* 006a25d7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a25d8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a25da: je 0x6a25f1 */ if (fZ) goto L_006a25f1;
L_006a25dc:; BB(0x006a25dc);
    /* 006a25dc: mov ecx, dword ptr [esi + 0x38c] */ r_ecx = R32((u32)(r_esi+0x38cu));
    /* 006a25e2: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a25e4: call dword ptr [eax + 0xd0] */ { u32 t = R32((u32)(r_eax+0xd0u)); r_esp -= 4; W32(r_esp, 0x6a25eau); call_ind(t); }
    /* 006a25ea: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a25ed: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a25ee: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a25ef: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a25f0: ret  */ FN_RET(0x006a20cc); r_esp += 4; return;
L_006a25f1:; BB(0x006a25f1);
    /* 006a25f1: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 006a25f3: call 0x7bfff8 */ r_esp -= 4; W32(r_esp, 0x6a25f8u); f_007bfff8();
    /* 006a25f8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a25f9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a25fb: je 0x6a2612 */ if (fZ) goto L_006a2612;
L_006a25fd:; BB(0x006a25fd);
    /* 006a25fd: mov ecx, dword ptr [esi + 0x38c] */ r_ecx = R32((u32)(r_esi+0x38cu));
    /* 006a2603: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a2605: call dword ptr [eax + 0xd4] */ { u32 t = R32((u32)(r_eax+0xd4u)); r_esp -= 4; W32(r_esp, 0x6a260bu); call_ind(t); }
    /* 006a260b: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a260e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a260f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a2610: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a2611: ret  */ FN_RET(0x006a20cc); r_esp += 4; return;
L_006a2612:; BB(0x006a2612);
    /* 006a2612: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 006a2614: call 0x7bfff8 */ r_esp -= 4; W32(r_esp, 0x6a2619u); f_007bfff8();
    /* 006a2619: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a261a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a261c: je 0x6a2633 */ if (fZ) goto L_006a2633;
L_006a261e:; BB(0x006a261e);
    /* 006a261e: mov ecx, dword ptr [esi + 0x38c] */ r_ecx = R32((u32)(r_esi+0x38cu));
    /* 006a2624: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a2626: call dword ptr [eax + 0xd8] */ { u32 t = R32((u32)(r_eax+0xd8u)); r_esp -= 4; W32(r_esp, 0x6a262cu); call_ind(t); }
    /* 006a262c: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a262f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a2630: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a2631: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a2632: ret  */ FN_RET(0x006a20cc); r_esp += 4; return;
L_006a2633:; BB(0x006a2633);
    /* 006a2633: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 006a2635: call 0x7bfff8 */ r_esp -= 4; W32(r_esp, 0x6a263au); f_007bfff8();
    /* 006a263a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a263b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a263d: je 0x6a2654 */ if (fZ) goto L_006a2654;
L_006a263f:; BB(0x006a263f);
    /* 006a263f: mov ecx, dword ptr [esi + 0x38c] */ r_ecx = R32((u32)(r_esi+0x38cu));
    /* 006a2645: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a2647: call dword ptr [eax + 0xdc] */ { u32 t = R32((u32)(r_eax+0xdcu)); r_esp -= 4; W32(r_esp, 0x6a264du); call_ind(t); }
    /* 006a264d: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a2650: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a2651: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a2652: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a2653: ret  */ FN_RET(0x006a20cc); r_esp += 4; return;
L_006a2654:; BB(0x006a2654);
    /* 006a2654: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 006a2656: call 0x7bfff8 */ r_esp -= 4; W32(r_esp, 0x6a265bu); f_007bfff8();
    /* 006a265b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a265c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a265e: je 0x6a2675 */ if (fZ) goto L_006a2675;
L_006a2660:; BB(0x006a2660);
    /* 006a2660: mov ecx, dword ptr [esi + 0x38c] */ r_ecx = R32((u32)(r_esi+0x38cu));
    /* 006a2666: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a2668: call dword ptr [eax + 0xe0] */ { u32 t = R32((u32)(r_eax+0xe0u)); r_esp -= 4; W32(r_esp, 0x6a266eu); call_ind(t); }
    /* 006a266e: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a2671: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a2672: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a2673: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a2674: ret  */ FN_RET(0x006a20cc); r_esp += 4; return;
L_006a2675:; BB(0x006a2675);
    /* 006a2675: push 0x16 */ { u32 v = 0x16u; r_esp -= 4; W32(r_esp, v); }
    /* 006a2677: call 0x7bfff8 */ r_esp -= 4; W32(r_esp, 0x6a267cu); f_007bfff8();
    /* 006a267c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a267d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a267f: je 0x6a2696 */ if (fZ) goto L_006a2696;
L_006a2681:; BB(0x006a2681);
    /* 006a2681: mov ecx, dword ptr [esi + 0x38c] */ r_ecx = R32((u32)(r_esi+0x38cu));
    /* 006a2687: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a2689: call dword ptr [eax + 0xe4] */ { u32 t = R32((u32)(r_eax+0xe4u)); r_esp -= 4; W32(r_esp, 0x6a268fu); call_ind(t); }
    /* 006a268f: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a2692: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a2693: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a2694: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a2695: ret  */ FN_RET(0x006a20cc); r_esp += 4; return;
L_006a2696:; BB(0x006a2696);
    /* 006a2696: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 006a2698: call 0x7bfff8 */ r_esp -= 4; W32(r_esp, 0x6a269du); f_007bfff8();
    /* 006a269d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a269e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a26a0: je 0x6a26b7 */ if (fZ) goto L_006a26b7;
L_006a26a2:; BB(0x006a26a2);
    /* 006a26a2: mov ecx, dword ptr [esi + 0x38c] */ r_ecx = R32((u32)(r_esi+0x38cu));
    /* 006a26a8: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a26aa: call dword ptr [eax + 0xe8] */ { u32 t = R32((u32)(r_eax+0xe8u)); r_esp -= 4; W32(r_esp, 0x6a26b0u); call_ind(t); }
    /* 006a26b0: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a26b3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a26b4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a26b5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a26b6: ret  */ FN_RET(0x006a20cc); r_esp += 4; return;
L_006a26b7:; BB(0x006a26b7);
    /* 006a26b7: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 006a26b9: call 0x7bfff8 */ r_esp -= 4; W32(r_esp, 0x6a26beu); f_007bfff8();
    /* 006a26be: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a26bf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a26c1: je 0x6a26d8 */ if (fZ) goto L_006a26d8;
L_006a26c3:; BB(0x006a26c3);
    /* 006a26c3: mov ecx, dword ptr [esi + 0x38c] */ r_ecx = R32((u32)(r_esi+0x38cu));
    /* 006a26c9: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a26cb: call dword ptr [eax + 0xec] */ { u32 t = R32((u32)(r_eax+0xecu)); r_esp -= 4; W32(r_esp, 0x6a26d1u); call_ind(t); }
    /* 006a26d1: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a26d4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a26d5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a26d6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a26d7: ret  */ FN_RET(0x006a20cc); r_esp += 4; return;
L_006a26d8:; BB(0x006a26d8);
    /* 006a26d8: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 006a26da: call 0x7bfff8 */ r_esp -= 4; W32(r_esp, 0x6a26dfu); f_007bfff8();
    /* 006a26df: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a26e0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a26e2: je 0x6a26f9 */ if (fZ) goto L_006a26f9;
L_006a26e4:; BB(0x006a26e4);
    /* 006a26e4: mov ecx, dword ptr [esi + 0x38c] */ r_ecx = R32((u32)(r_esi+0x38cu));
    /* 006a26ea: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a26ec: call dword ptr [eax + 0xf0] */ { u32 t = R32((u32)(r_eax+0xf0u)); r_esp -= 4; W32(r_esp, 0x6a26f2u); call_ind(t); }
    /* 006a26f2: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a26f5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a26f6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a26f7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a26f8: ret  */ FN_RET(0x006a20cc); r_esp += 4; return;
L_006a26f9:; BB(0x006a26f9);
    /* 006a26f9: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 006a26fb: call 0x7bfff8 */ r_esp -= 4; W32(r_esp, 0x6a2700u); f_007bfff8();
    /* 006a2700: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a2701: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a2703: je 0x6a271a */ if (fZ) goto L_006a271a;
L_006a2705:; BB(0x006a2705);
    /* 006a2705: mov ecx, dword ptr [esi + 0x38c] */ r_ecx = R32((u32)(r_esi+0x38cu));
    /* 006a270b: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a270d: call dword ptr [eax + 0xf4] */ { u32 t = R32((u32)(r_eax+0xf4u)); r_esp -= 4; W32(r_esp, 0x6a2713u); call_ind(t); }
    /* 006a2713: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a2716: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a2717: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a2718: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a2719: ret  */ FN_RET(0x006a20cc); r_esp += 4; return;
L_006a271a:; BB(0x006a271a);
    /* 006a271a: push 0x29 */ { u32 v = 0x29u; r_esp -= 4; W32(r_esp, v); }
    /* 006a271c: call 0x7bfff8 */ r_esp -= 4; W32(r_esp, 0x6a2721u); f_007bfff8();
    /* 006a2721: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a2722: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a2724: je 0x6a273b */ if (fZ) goto L_006a273b;
L_006a2726:; BB(0x006a2726);
    /* 006a2726: mov ecx, dword ptr [esi + 0x38c] */ r_ecx = R32((u32)(r_esi+0x38cu));
    /* 006a272c: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a272e: call dword ptr [eax + 0xf8] */ { u32 t = R32((u32)(r_eax+0xf8u)); r_esp -= 4; W32(r_esp, 0x6a2734u); call_ind(t); }
    /* 006a2734: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a2737: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a2738: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a2739: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a273a: ret  */ FN_RET(0x006a20cc); r_esp += 4; return;
L_006a273b:; BB(0x006a273b);
    /* 006a273b: push 0x27 */ { u32 v = 0x27u; r_esp -= 4; W32(r_esp, v); }
    /* 006a273d: call 0x7bfff8 */ r_esp -= 4; W32(r_esp, 0x6a2742u); f_007bfff8();
    /* 006a2742: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a2743: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a2745: je 0x6a275c */ if (fZ) goto L_006a275c;
L_006a2747:; BB(0x006a2747);
    /* 006a2747: mov ecx, dword ptr [esi + 0x38c] */ r_ecx = R32((u32)(r_esi+0x38cu));
    /* 006a274d: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a274f: call dword ptr [eax + 0xfc] */ { u32 t = R32((u32)(r_eax+0xfcu)); r_esp -= 4; W32(r_esp, 0x6a2755u); call_ind(t); }
    /* 006a2755: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a2758: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a2759: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a275a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a275b: ret  */ FN_RET(0x006a20cc); r_esp += 4; return;
L_006a275c:; BB(0x006a275c);
    /* 006a275c: push 0x25 */ { u32 v = 0x25u; r_esp -= 4; W32(r_esp, v); }
    /* 006a275e: call 0x7bfff8 */ r_esp -= 4; W32(r_esp, 0x6a2763u); f_007bfff8();
    /* 006a2763: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a2764: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a2766: je 0x6a277d */ if (fZ) goto L_006a277d;
L_006a2768:; BB(0x006a2768);
    /* 006a2768: mov ecx, dword ptr [esi + 0x38c] */ r_ecx = R32((u32)(r_esi+0x38cu));
    /* 006a276e: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a2770: call dword ptr [eax + 0x100] */ { u32 t = R32((u32)(r_eax+0x100u)); r_esp -= 4; W32(r_esp, 0x6a2776u); call_ind(t); }
    /* 006a2776: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a2779: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a277a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a277b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a277c: ret  */ FN_RET(0x006a20cc); r_esp += 4; return;
L_006a277d:; BB(0x006a277d);
    /* 006a277d: push 0x1b */ { u32 v = 0x1bu; r_esp -= 4; W32(r_esp, v); }
    /* 006a277f: call 0x7bfff8 */ r_esp -= 4; W32(r_esp, 0x6a2784u); f_007bfff8();
    /* 006a2784: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a2785: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a2787: je 0x6a279e */ if (fZ) goto L_006a279e;
L_006a2789:; BB(0x006a2789);
    /* 006a2789: mov ecx, dword ptr [esi + 0x38c] */ r_ecx = R32((u32)(r_esi+0x38cu));
    /* 006a278f: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a2791: call dword ptr [eax + 0x104] */ { u32 t = R32((u32)(r_eax+0x104u)); r_esp -= 4; W32(r_esp, 0x6a2797u); call_ind(t); }
    /* 006a2797: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a279a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a279b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a279c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a279d: ret  */ FN_RET(0x006a20cc); r_esp += 4; return;
L_006a279e:; BB(0x006a279e);
    /* 006a279e: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 006a27a0: call 0x7bfff8 */ r_esp -= 4; W32(r_esp, 0x6a27a5u); f_007bfff8();
    /* 006a27a5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a27a6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a27a8: je 0x6a27bf */ if (fZ) goto L_006a27bf;
L_006a27aa:; BB(0x006a27aa);
    /* 006a27aa: mov ecx, dword ptr [esi + 0x38c] */ r_ecx = R32((u32)(r_esi+0x38cu));
    /* 006a27b0: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a27b2: call dword ptr [eax + 0x110] */ { u32 t = R32((u32)(r_eax+0x110u)); r_esp -= 4; W32(r_esp, 0x6a27b8u); call_ind(t); }
    /* 006a27b8: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a27bb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a27bc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a27bd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a27be: ret  */ FN_RET(0x006a20cc); r_esp += 4; return;
L_006a27bf:; BB(0x006a27bf);
    /* 006a27bf: push 0x2b */ { u32 v = 0x2bu; r_esp -= 4; W32(r_esp, v); }
    /* 006a27c1: call 0x7bfff8 */ r_esp -= 4; W32(r_esp, 0x6a27c6u); f_007bfff8();
    /* 006a27c6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a27c7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a27c9: je 0x6a27e0 */ if (fZ) goto L_006a27e0;
L_006a27cb:; BB(0x006a27cb);
    /* 006a27cb: mov ecx, dword ptr [esi + 0x38c] */ r_ecx = R32((u32)(r_esi+0x38cu));
    /* 006a27d1: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a27d3: call dword ptr [eax + 0x114] */ { u32 t = R32((u32)(r_eax+0x114u)); r_esp -= 4; W32(r_esp, 0x6a27d9u); call_ind(t); }
    /* 006a27d9: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a27dc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a27dd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a27de: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a27df: ret  */ FN_RET(0x006a20cc); r_esp += 4; return;
L_006a27e0:; BB(0x006a27e0);
    /* 006a27e0: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 006a27e2: call 0x7bfff8 */ r_esp -= 4; W32(r_esp, 0x6a27e7u); f_007bfff8();
    /* 006a27e7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a27e8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a27ea: je 0x6a2801 */ if (fZ) goto L_006a2801;
L_006a27ec:; BB(0x006a27ec);
    /* 006a27ec: mov ecx, dword ptr [esi + 0x38c] */ r_ecx = R32((u32)(r_esi+0x38cu));
    /* 006a27f2: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a27f4: call dword ptr [eax + 0x118] */ { u32 t = R32((u32)(r_eax+0x118u)); r_esp -= 4; W32(r_esp, 0x6a27fau); call_ind(t); }
    /* 006a27fa: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a27fd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a27fe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a27ff: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a2800: ret  */ FN_RET(0x006a20cc); r_esp += 4; return;
L_006a2801:; BB(0x006a2801);
    /* 006a2801: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 006a2803: call 0x7bfff8 */ r_esp -= 4; W32(r_esp, 0x6a2808u); f_007bfff8();
    /* 006a2808: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a2809: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a280b: je 0x6a2822 */ if (fZ) goto L_006a2822;
L_006a280d:; BB(0x006a280d);
    /* 006a280d: mov ecx, dword ptr [esi + 0x38c] */ r_ecx = R32((u32)(r_esi+0x38cu));
    /* 006a2813: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a2815: call dword ptr [eax + 0x11c] */ { u32 t = R32((u32)(r_eax+0x11cu)); r_esp -= 4; W32(r_esp, 0x6a281bu); call_ind(t); }
    /* 006a281b: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a281e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a281f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a2820: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a2821: ret  */ FN_RET(0x006a20cc); r_esp += 4; return;
L_006a2822:; BB(0x006a2822);
    /* 006a2822: push dword ptr [esi + 0x38c] */ { u32 v = R32((u32)(r_esi+0x38cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006a2828: call 0x719174 */ r_esp -= 4; W32(r_esp, 0x6a282du); f_00719174();
    /* 006a282d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a282e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a282f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a2830: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a2831: ret  */ FN_RET(0x006a20cc); r_esp += 4; return;
}

void f_006a2834(void) /* sub_6A2834 */
{
    FN_ENTER(0x006a2834);
    /* 006a2834: mov ecx, dword ptr [0xa942b4] */ r_ecx = R32((u32)(0xa942b4u));
    /* 006a283a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a283c: je 0x6a2843 */ if (fZ) goto L_006a2843;
L_006a283e:; BB(0x006a283e);
    /* 006a283e: call 0x6a85ac */ r_esp -= 4; W32(r_esp, 0x6a2843u); f_006a85ac();
L_006a2843:; BB(0x006a2843);
    /* 006a2843: ret  */ FN_RET(0x006a2834); r_esp += 4; return;
}

void f_006a2849(void) /* sub_6A2849 */
{
    FN_ENTER(0x006a2849);
    /* 006a2849: mov ecx, dword ptr [0xa942b4] */ r_ecx = R32((u32)(0xa942b4u));
    /* 006a284f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a2851: je 0x6a2859 */ if (fZ) goto L_006a2859;
L_006a2853:; BB(0x006a2853);
    /* 006a2853: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a2854: call 0x6a8570 */ r_esp -= 4; W32(r_esp, 0x6a2859u); f_006a8570();
L_006a2859:; BB(0x006a2859);
    /* 006a2859: ret  */ FN_RET(0x006a2849); r_esp += 4; return;
}

void f_006a285c(void) /* sub_6A285C */
{
    FN_ENTER(0x006a285c);
    /* 006a285c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a285d: mov esi, ecx */ r_esi = r_ecx;
    /* 006a285f: mov ecx, esi */ r_ecx = r_esi;
    /* 006a2861: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x6a2866u); f_0077774c();
    /* 006a2866: mov eax, dword ptr [esi + 0x33c] */ r_eax = R32((u32)(r_esi+0x33cu));
    /* 006a286c: and eax, 0xe3ffffff */ {  u32 a = r_eax; u32 b = 0xe3ffffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 006a2871: mov dword ptr [esi + 0x33c], eax */ W32((u32)(r_esi+0x33cu), r_eax);
    /* 006a2877: lea ecx, [esi + 0x358] */ r_ecx = (u32)(r_esi+0x358u);
    /* 006a287d: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x6a2882u); f_0061cdb0();
    /* 006a2882: mov ecx, dword ptr [esi + 0x38c] */ r_ecx = R32((u32)(r_esi+0x38cu));
    /* 006a2888: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a288a: call dword ptr [eax + 0x130] */ { u32 t = R32((u32)(r_eax+0x130u)); r_esp -= 4; W32(r_esp, 0x6a2890u); call_ind(t); }
    /* 006a2890: mov dword ptr [esi + 0xdc], eax */ W32((u32)(r_esi+0xdcu), r_eax);
    /* 006a2896: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a2897: ret  */ FN_RET(0x006a285c); r_esp += 4; return;
}

void f_006a2898(void) /* sub_6A2898 */
{
    FN_ENTER(0x006a2898);
    /* 006a2898: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a2899: mov esi, ecx */ r_esi = r_ecx;
    /* 006a289b: mov ecx, esi */ r_ecx = r_esi;
    /* 006a289d: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x6a28a2u); f_0077774c();
    /* 006a28a2: mov eax, dword ptr [esi + 0x33c] */ r_eax = R32((u32)(r_esi+0x33cu));
    /* 006a28a8: mov ecx, dword ptr [esi + 0x38c] */ r_ecx = R32((u32)(r_esi+0x38cu));
    /* 006a28ae: and eax, 0xd7ffffff */ {  u32 a = r_eax; u32 b = 0xd7ffffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 006a28b3: mov dword ptr [esi + 0x33c], eax */ W32((u32)(r_esi+0x33cu), r_eax);
    /* 006a28b9: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006a28bb: call dword ptr [edx + 0x130] */ { u32 t = R32((u32)(r_edx+0x130u)); r_esp -= 4; W32(r_esp, 0x6a28c1u); call_ind(t); }
    /* 006a28c1: push 0xfff7ffff */ { u32 v = 0xfff7ffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006a28c6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006a28c8: mov dword ptr [esi + 0xdc], eax */ W32((u32)(r_esi+0xdcu), r_eax);
    /* 006a28ce: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 006a28d2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a28d3: call 0x7be17c */ r_esp -= 4; W32(r_esp, 0x6a28d8u); f_007be17c();
    /* 006a28d8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006a28db: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a28dc: ret  */ FN_RET(0x006a2898); r_esp += 4; return;
}

void f_006a28e0(void) /* sub_6A28E0 */
{
    FN_ENTER(0x006a28e0);
    /* 006a28e0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a28e1: mov esi, ecx */ r_esi = r_ecx;
    /* 006a28e3: mov eax, dword ptr [esi + 0x33c] */ r_eax = R32((u32)(r_esi+0x33cu));
    /* 006a28e9: and eax, 0xfffdfffa */ {  u32 a = r_eax; u32 b = 0xfffdfffau; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 006a28ee: mov dword ptr [esi + 0x33c], eax */ W32((u32)(r_esi+0x33cu), r_eax);
    /* 006a28f4: mov ecx, esi */ r_ecx = r_esi;
    /* 006a28f6: call 0x693240 */ r_esp -= 4; W32(r_esp, 0x6a28fbu); f_00693240();
    /* 006a28fb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006a28fd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006a28ff: mov ecx, esi */ r_ecx = r_esi;
    /* 006a2901: call 0x7b52c4 */ r_esp -= 4; W32(r_esp, 0x6a2906u); f_007b52c4();
    /* 006a2906: add esi, 0x6e0 */ {  u32 a = r_esi; u32 b = 0x6e0u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006a290c: mov ecx, esi */ r_ecx = r_esi;
    /* 006a290e: call 0x69836c */ r_esp -= 4; W32(r_esp, 0x6a2913u); f_0069836c();
    /* 006a2913: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a2914: ret  */ FN_RET(0x006a28e0); r_esp += 4; return;
}

void f_006a2918(void) /* sub_6A2918 */
{
    FN_ENTER(0x006a2918);
    /* 006a2918: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a2919: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006a291b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a291d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006a291f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006a2921: call 0x7b52c4 */ r_esp -= 4; W32(r_esp, 0x6a2926u); f_007b52c4();
    /* 006a2926: add ebx, 0x6e0 */ {  u32 a = r_ebx; u32 b = 0x6e0u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006a292c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a292e: call 0x6982ec */ r_esp -= 4; W32(r_esp, 0x6a2933u); f_006982ec();
    /* 006a2933: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a2934: ret  */ FN_RET(0x006a2918); r_esp += 4; return;
}

void f_006a2938(void) /* sub_6A2938 */
{
    FN_ENTER(0x006a2938);
    /* 006a2938: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a2939: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006a293b: mov eax, dword ptr [ebp + 0xb0] */ r_eax = R32((u32)(r_ebp+0xb0u));
    /* 006a2941: and eax, 0xffffffbf */ {  u32 a = r_eax; u32 b = 0xffffffbfu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 006a2944: mov dword ptr [ebp + 0xb0], eax */ W32((u32)(r_ebp+0xb0u), r_eax);
    /* 006a294a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a294c: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x6a2951u); f_0077774c();
    /* 006a2951: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 006a2954: movsx edx, word ptr [ebp + 0x330] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x330u));
    /* 006a295b: and eax, 0xffffffdf */ {  u32 a = r_eax; u32 b = 0xffffffdfu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 006a295e: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 006a2961: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006a2964: je 0x6a2968 */ if (fZ) goto L_006a2968;
L_006a2966:; BB(0x006a2966);
    /* 006a2966: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a2967: ret  */ FN_RET(0x006a2938); r_esp += 4; return;
L_006a2968:; BB(0x006a2968);
    /* 006a2968: movsx eax, word ptr [ebp + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 006a296f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006a2972: jne 0x6a2966 */ if (!fZ) goto L_006a2966;
L_006a2974:; BB(0x006a2974);
    /* 006a2974: mov dword ptr [ebp + 0x720], 0 */ W32((u32)(r_ebp+0x720u), 0x0u);
    /* 006a297e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a297f: ret  */ FN_RET(0x006a2938); r_esp += 4; return;
}

void f_006a2980(void) /* sub_6A2980 */
{
    FN_ENTER(0x006a2980);
    /* 006a2980: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 006a2983: and eax, 0xfffeffff */ {  u32 a = r_eax; u32 b = 0xfffeffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 006a2988: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 006a298b: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x6a2990u); f_0077774c();
    /* 006a2990: ret  */ FN_RET(0x006a2980); r_esp += 4; return;
}

void f_006a2994(void) /* sub_6A2994 */
{
    FN_ENTER(0x006a2994);
    /* 006a2994: mov eax, dword ptr [ecx + 0xb0] */ r_eax = R32((u32)(r_ecx+0xb0u));
    /* 006a299a: movzx edx, word ptr [ecx + 0x1c] */ r_edx = (u32)R16((u32)(r_ecx+0x1cu));
    /* 006a299e: and eax, 0xffffffbf */ {  u32 a = r_eax; u32 b = 0xffffffbfu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 006a29a1: mov dword ptr [ecx + 0xb0], eax */ W32((u32)(r_ecx+0xb0u), r_eax);
    /* 006a29a7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006a29a8: call 0x718108 */ r_esp -= 4; W32(r_esp, 0x6a29adu); f_00718108();
    /* 006a29ad: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a29ae: ret  */ FN_RET(0x006a2994); r_esp += 4; return;
}

void f_006a29b0(void) /* sub_6A29B0 */
{
    FN_ENTER(0x006a29b0);
    /* 006a29b0: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 006a29b3: mov edx, dword ptr [ecx + 0xb0] */ r_edx = R32((u32)(r_ecx+0xb0u));
    /* 006a29b9: and eax, 0xfffffdff */ {  u32 a = r_eax; u32 b = 0xfffffdffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 006a29be: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 006a29c1: mov dword ptr [ecx + 0x378], 0 */ W32((u32)(r_ecx+0x378u), 0x0u);
    /* 006a29cb: and edx, 0xffffffbf */ {  u32 a = r_edx; u32 b = 0xffffffbfu; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a29ce: mov dword ptr [ecx + 0xb0], edx */ W32((u32)(r_ecx+0xb0u), r_edx);
    /* 006a29d4: mov dword ptr [ecx + 0x6d4], 0 */ W32((u32)(r_ecx+0x6d4u), 0x0u);
    /* 006a29de: mov dword ptr [ecx + 0x6d8], 0 */ W32((u32)(r_ecx+0x6d8u), 0x0u);
    /* 006a29e8: mov dword ptr [ecx + 0x6dc], 0 */ W32((u32)(r_ecx+0x6dcu), 0x0u);
    /* 006a29f2: ret  */ FN_RET(0x006a29b0); r_esp += 4; return;
}

void f_006a29f4(void) /* sub_6A29F4 */
{
    FN_ENTER(0x006a29f4);
    /* 006a29f4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a29f5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006a29f7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a29f9: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x6a29feu); f_0077774c();
    /* 006a29fe: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 006a2a01: or eax, 0x100000 */ {  u32 a = r_eax; u32 b = 0x100000u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a2a06: mov dword ptr [ebx + 0x30], eax */ W32((u32)(r_ebx+0x30u), r_eax);
    /* 006a2a09: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a2a0a: ret  */ FN_RET(0x006a29f4); r_esp += 4; return;
}

void f_006a2a0c(void) /* sub_6A2A0C */
{
    FN_ENTER(0x006a2a0c);
    /* 006a2a0c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a2a0d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a2a0e: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006a2a10: mov eax, dword ptr [ebx + 0xb0] */ r_eax = R32((u32)(r_ebx+0xb0u));
    /* 006a2a16: mov edx, dword ptr [ebx + 0x33c] */ r_edx = R32((u32)(r_ebx+0x33cu));
    /* 006a2a1c: and eax, 0xffffffbf */ {  u32 a = r_eax; u32 b = 0xffffffbfu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 006a2a1f: mov dword ptr [ebx + 0xb0], eax */ W32((u32)(r_ebx+0xb0u), r_eax);
    /* 006a2a25: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 006a2a28: and edx, 0xffffff7f */ {  u32 a = r_edx; u32 b = 0xffffff7fu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 006a2a2e: mov dword ptr [ebx + 0x33c], edx */ W32((u32)(r_ebx+0x33cu), r_edx);
    /* 006a2a34: mov edx, dword ptr [ebx + 0x45c] */ r_edx = R32((u32)(r_ebx+0x45cu));
    /* 006a2a3a: and eax, 0xffbfffff */ {  u32 a = r_eax; u32 b = 0xffbfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 006a2a3f: mov dword ptr [ebx + 0x30], eax */ W32((u32)(r_ebx+0x30u), r_eax);
    /* 006a2a42: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a2a44: je 0x6a2a52 */ if (fZ) goto L_006a2a52;
L_006a2a46:; BB(0x006a2a46);
    /* 006a2a46: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 006a2a4b: mov word ptr [edx + 0x1098], ax */ W16((u32)(r_edx+0x1098u), (u16)r_eax);
L_006a2a52:; BB(0x006a2a52);
    /* 006a2a52: lea ecx, [ebx + 0x4e4] */ r_ecx = (u32)(r_ebx+0x4e4u);
    /* 006a2a58: call 0x6a7df0 */ r_esp -= 4; W32(r_esp, 0x6a2a5du); f_006a7df0();
    /* 006a2a5d: call 0x694cc8 */ r_esp -= 4; W32(r_esp, 0x6a2a62u); f_00694cc8();
    /* 006a2a62: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a2a64: je 0x6a2a71 */ if (fZ) goto L_006a2a71;
L_006a2a66:; BB(0x006a2a66);
    /* 006a2a66: movzx eax, word ptr [ebx + 0x1c] */ r_eax = (u32)R16((u32)(r_ebx+0x1cu));
    /* 006a2a6a: call 0x6a2849 */ r_esp -= 4; W32(r_esp, 0x6a2a6fu); f_006a2849();
    /* 006a2a6f: jmp 0x6a2a76 */ goto L_006a2a76;
L_006a2a71:; BB(0x006a2a71);
    /* 006a2a71: call 0x6a2834 */ r_esp -= 4; W32(r_esp, 0x6a2a76u); f_006a2834();
L_006a2a76:; BB(0x006a2a76);
    /* 006a2a76: mov eax, dword ptr [ebx + 0x348] */ r_eax = R32((u32)(r_ebx+0x348u));
    /* 006a2a7c: cmp eax, 0x13 */ {  u32 a = r_eax; u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006a2a7f: je 0x6a2a8b */ if (fZ) goto L_006a2a8b;
L_006a2a81:; BB(0x006a2a81);
    /* 006a2a81: mov dword ptr [ebx + 0x720], 0 */ W32((u32)(r_ebx+0x720u), 0x0u);
L_006a2a8b:; BB(0x006a2a8b);
    /* 006a2a8b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a2a8c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a2a8d: ret  */ FN_RET(0x006a2a0c); r_esp += 4; return;
}

void f_006a2a90(void) /* sub_6A2A90 */
{
    FN_ENTER(0x006a2a90);
    /* 006a2a90: mov eax, dword ptr [ecx + 0xb0] */ r_eax = R32((u32)(r_ecx+0xb0u));
    /* 006a2a96: mov edx, dword ptr [ecx + 0x33c] */ r_edx = R32((u32)(r_ecx+0x33cu));
    /* 006a2a9c: and eax, 0xffffffbf */ {  u32 a = r_eax; u32 b = 0xffffffbfu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 006a2a9f: and edx, 0xffffff7f */ {  u32 a = r_edx; u32 b = 0xffffff7fu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 006a2aa5: mov dword ptr [ecx + 0x33c], edx */ W32((u32)(r_ecx+0x33cu), r_edx);
    /* 006a2aab: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 006a2aae: and edx, 0xffbfffff */ {  u32 a = r_edx; u32 b = 0xffbfffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 006a2ab4: mov dword ptr [ecx + 0x30], edx */ W32((u32)(r_ecx+0x30u), r_edx);
    /* 006a2ab7: mov edx, dword ptr [ecx + 0x45c] */ r_edx = R32((u32)(r_ecx+0x45cu));
    /* 006a2abd: mov dword ptr [ecx + 0xb0], eax */ W32((u32)(r_ecx+0xb0u), r_eax);
    /* 006a2ac3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a2ac5: je 0x6a2ad3 */ if (fZ) goto L_006a2ad3;
L_006a2ac7:; BB(0x006a2ac7);
    /* 006a2ac7: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 006a2acc: mov word ptr [edx + 0x1098], ax */ W16((u32)(r_edx+0x1098u), (u16)r_eax);
L_006a2ad3:; BB(0x006a2ad3);
    /* 006a2ad3: ret  */ FN_RET(0x006a2a90); r_esp += 4; return;
}

void f_006a2ad4(void) /* sub_6A2AD4 */
{
    FN_ENTER(0x006a2ad4);
    /* 006a2ad4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a2ad5: mov ebp, esp */ r_ebp = r_esp;
    /* 006a2ad7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006a2ad9: push 0x8eb6fe */ { u32 v = 0x8eb6feu; r_esp -= 4; W32(r_esp, v); }
    /* 006a2ade: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006a2ae4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a2ae5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006a2aec: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006a2aef: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006a2af2: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 006a2af5: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 006a2af8: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 006a2afb: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 006a2afe: lea ecx, [ecx + 0x8a4] */ r_ecx = (u32)(r_ecx+0x8a4u);
    /* 006a2b04: call 0x6a2e8c */ r_esp -= 4; W32(r_esp, 0x6a2b09u); f_006a2e8c();
    /* 006a2b09: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a2b0c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a2b0e: je 0x6a2d1e */ if (fZ) goto L_006a2d1e;
L_006a2b14:; BB(0x006a2b14);
    /* 006a2b14: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a2b17: jne 0x6a2c29 */ if (!fZ) goto L_006a2c29;
L_006a2b1d:; BB(0x006a2b1d);
    /* 006a2b1d: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 006a2b20: push 0xbb */ { u32 v = 0xbbu; r_esp -= 4; W32(r_esp, v); }
    /* 006a2b25: mov edx, dword ptr [ebx + 0x33c] */ r_edx = R32((u32)(r_ebx+0x33cu));
    /* 006a2b2b: mov eax, 1 */ r_eax = 0x1u;
    /* 006a2b30: mov word ptr [ebx + 0x330], ax */ W16((u32)(r_ebx+0x330u), (u16)r_eax);
    /* 006a2b37: or edx, 0x80 */ {  u32 a = r_edx; u32 b = 0x80u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 006a2b3d: mov dword ptr [ebx + 0x33c], edx */ W32((u32)(r_ebx+0x33cu), r_edx);
    /* 006a2b43: lea esi, [ebx + 0x394] */ r_esi = (u32)(r_ebx+0x394u);
    /* 006a2b49: movzx ebx, word ptr [ebx + 0x390] */ r_ebx = (u32)R16((u32)(r_ebx+0x390u));
    /* 006a2b50: mov ecx, esi */ r_ecx = r_esi;
    /* 006a2b52: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a2b53: call 0x6a350c */ r_esp -= 4; W32(r_esp, 0x6a2b58u); f_006a350c();
    /* 006a2b58: push 0x1b7 */ { u32 v = 0x1b7u; r_esp -= 4; W32(r_esp, v); }
    /* 006a2b5d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a2b5e: mov ecx, esi */ r_ecx = r_esi;
    /* 006a2b60: call 0x6a350c */ r_esp -= 4; W32(r_esp, 0x6a2b65u); f_006a350c();
    /* 006a2b65: mov dword ptr [0xaab4f0], 0 */ W32((u32)(0xaab4f0u), 0x0u);
    /* 006a2b6f: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 006a2b71: mov dword ptr [0xaab4f4], 0 */ W32((u32)(0xaab4f4u), 0x0u);
    /* 006a2b7b: mov dword ptr [0xaab4f8], 0x3f800000 */ W32((u32)(0xaab4f8u), 0x3f800000u);
    /* 006a2b85: mov dword ptr [0xaab48c], 0x3f800000 */ W32((u32)(0xaab48cu), 0x3f800000u);
    /* 006a2b8f: mov dword ptr [0xaab490], 0x3f4ccccd */ W32((u32)(0xaab490u), 0x3f4ccccdu);
    /* 006a2b99: mov dword ptr [0xaab494], 0x3f4ccccd */ W32((u32)(0xaab494u), 0x3f4ccccdu);
    /* 006a2ba3: mov dword ptr [0xaab498], 0x3f800000 */ W32((u32)(0xaab498u), 0x3f800000u);
    /* 006a2bad: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006a2bb4: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6a2bb9u); f_005caba4();
    /* 006a2bb9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a2bba: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 006a2bbd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a2bbf: je 0x6a2bf9 */ if (fZ) goto L_006a2bf9;
L_006a2bc1:; BB(0x006a2bc1);
    /* 006a2bc1: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 006a2bc8: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 006a2bcf: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 006a2bd5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006a2bd8: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006a2bdb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a2bdc: push 0x3e4ccccd */ { u32 v = 0x3e4ccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 006a2be1: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 006a2be3: push 0xaab4f0 */ { u32 v = 0xaab4f0u; r_esp -= 4; W32(r_esp, v); }
    /* 006a2be8: push 0xaab48c */ { u32 v = 0xaab48cu; r_esp -= 4; W32(r_esp, v); }
    /* 006a2bed: call 0x6eb52c */ r_esp -= 4; W32(r_esp, 0x6a2bf2u); f_006eb52c();
    /* 006a2bf2: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_006a2bf9:; BB(0x006a2bf9);
    /* 006a2bf9: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006a2c00: push 0x3f000000 */ { u32 v = 0x3f000000u; r_esp -= 4; W32(r_esp, v); }
    /* 006a2c05: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 006a2c0a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006a2c0d: movzx edx, word ptr [eax + 0x1c] */ r_edx = (u32)R16((u32)(r_eax+0x1cu));
    /* 006a2c11: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006a2c12: call 0x794984 */ r_esp -= 4; W32(r_esp, 0x6a2c17u); f_00794984();
    /* 006a2c17: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006a2c1a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006a2c1d: push 0x3f */ { u32 v = 0x3fu; r_esp -= 4; W32(r_esp, v); }
    /* 006a2c1f: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x6a2c24u); f_006904cc();
    /* 006a2c24: jmp 0x6a2d2d */ goto L_006a2d2d;
L_006a2c29:; BB(0x006a2c29);
    /* 006a2c29: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006a2c2c: jne 0x6a2d2d */ if (!fZ) goto L_006a2d2d;
L_006a2c32:; BB(0x006a2c32);
    /* 006a2c32: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 006a2c35: mov edx, dword ptr [ebx + 0x33c] */ r_edx = R32((u32)(r_ebx+0x33cu));
    /* 006a2c3b: mov eax, 1 */ r_eax = 0x1u;
    /* 006a2c40: mov word ptr [ebx + 0x330], ax */ W16((u32)(r_ebx+0x330u), (u16)r_eax);
    /* 006a2c47: or edx, 0x80 */ {  u32 a = r_edx; u32 b = 0x80u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 006a2c4d: mov dword ptr [ebx + 0x33c], edx */ W32((u32)(r_ebx+0x33cu), r_edx);
    /* 006a2c53: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006a2c55: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006a2c56: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006a2c57: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006a2c58: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a2c59: call 0x5ce89c */ r_esp -= 4; W32(r_esp, 0x6a2c5eu); f_005ce89c();
    /* 006a2c5e: mov dword ptr [0xaab4f0], 0 */ W32((u32)(0xaab4f0u), 0x0u);
    /* 006a2c68: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 006a2c6a: mov dword ptr [0xaab4f4], 0 */ W32((u32)(0xaab4f4u), 0x0u);
    /* 006a2c74: mov dword ptr [0xaab4f8], 0x3f800000 */ W32((u32)(0xaab4f8u), 0x3f800000u);
    /* 006a2c7e: mov dword ptr [0xaab48c], 0x3f800000 */ W32((u32)(0xaab48cu), 0x3f800000u);
    /* 006a2c88: mov dword ptr [0xaab490], 0x3f4ccccd */ W32((u32)(0xaab490u), 0x3f4ccccdu);
    /* 006a2c92: mov dword ptr [0xaab494], 0x3f4ccccd */ W32((u32)(0xaab494u), 0x3f4ccccdu);
    /* 006a2c9c: mov dword ptr [0xaab498], 0x3f800000 */ W32((u32)(0xaab498u), 0x3f800000u);
    /* 006a2ca6: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 006a2cad: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6a2cb2u); f_005caba4();
    /* 006a2cb2: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006a2cb5: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 006a2cb8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a2cba: je 0x6a2cf3 */ if (fZ) goto L_006a2cf3;
L_006a2cbc:; BB(0x006a2cbc);
    /* 006a2cbc: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 006a2cc3: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006a2cca: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 006a2cd0: mov eax, ebx */ r_eax = r_ebx;
    /* 006a2cd2: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006a2cd5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a2cd6: push 0x3e4ccccd */ { u32 v = 0x3e4ccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 006a2cdb: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 006a2cdd: push 0xaab4f0 */ { u32 v = 0xaab4f0u; r_esp -= 4; W32(r_esp, v); }
    /* 006a2ce2: push 0xaab48c */ { u32 v = 0xaab48cu; r_esp -= 4; W32(r_esp, v); }
    /* 006a2ce7: call 0x6eb52c */ r_esp -= 4; W32(r_esp, 0x6a2cecu); f_006eb52c();
    /* 006a2cec: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_006a2cf3:; BB(0x006a2cf3);
    /* 006a2cf3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006a2cfa: push 0x3f000000 */ { u32 v = 0x3f000000u; r_esp -= 4; W32(r_esp, v); }
    /* 006a2cff: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 006a2d04: mov eax, ebx */ r_eax = r_ebx;
    /* 006a2d06: movzx edx, word ptr [eax + 0x1c] */ r_edx = (u32)R16((u32)(r_eax+0x1cu));
    /* 006a2d0a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006a2d0b: call 0x794984 */ r_esp -= 4; W32(r_esp, 0x6a2d10u); f_00794984();
    /* 006a2d10: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006a2d13: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a2d15: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 006a2d17: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x6a2d1cu); f_006904cc();
    /* 006a2d1c: jmp 0x6a2d2d */ goto L_006a2d2d;
L_006a2d1e:; BB(0x006a2d1e);
    /* 006a2d1e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006a2d21: mov eax, 3 */ r_eax = 0x3u;
    /* 006a2d26: mov word ptr [edx + 0x330], ax */ W16((u32)(r_edx+0x330u), (u16)r_eax);
L_006a2d2d:; BB(0x006a2d2d);
    /* 006a2d2d: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 006a2d30: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006a2d33: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006a2d36: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006a2d3d: mov esp, ebp */ r_esp = r_ebp;
    /* 006a2d3f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a2d40: ret  */ FN_RET(0x006a2ad4); r_esp += 4; return;
}

void f_006a2d44(void) /* sub_6A2D44 */
{
    FN_ENTER(0x006a2d44);
    /* 006a2d44: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a2d45: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a2d46: mov edi, ecx */ r_edi = r_ecx;
    /* 006a2d48: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006a2d4a: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 006a2d51: lea ebx, [edi + 0x8a4] */ r_ebx = (u32)(r_edi+0x8a4u);
    /* 006a2d57: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a2d59: call 0x6a2e8c */ r_esp -= 4; W32(r_esp, 0x6a2d5eu); f_006a2e8c();
    /* 006a2d5e: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a2d61: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a2d63: jne 0x6a2d91 */ if (!fZ) goto L_006a2d91;
L_006a2d65:; BB(0x006a2d65);
    /* 006a2d65: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a2d67: call 0x6a3250 */ r_esp -= 4; W32(r_esp, 0x6a2d6cu); f_006a3250();
    /* 006a2d6c: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a2d6f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a2d71: jne 0x6a2dc1 */ if (!fZ) goto L_006a2dc1;
L_006a2d73:; BB(0x006a2d73);
    /* 006a2d73: mov eax, dword ptr [edi + 0xb0] */ r_eax = R32((u32)(r_edi+0xb0u));
    /* 006a2d79: mov dword ptr [edi + 0xd4], 0x3f000000 */ W32((u32)(r_edi+0xd4u), 0x3f000000u);
    /* 006a2d83: or eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a2d88: mov dword ptr [edi + 0xb0], eax */ W32((u32)(r_edi+0xb0u), r_eax);
    /* 006a2d8e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a2d8f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a2d90: ret  */ FN_RET(0x006a2d44); r_esp += 4; return;
L_006a2d91:; BB(0x006a2d91);
    /* 006a2d91: jle 0x6a2dc1 */ if ((fZ||fS!=fO)) goto L_006a2dc1;
L_006a2d93:; BB(0x006a2d93);
    /* 006a2d93: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006a2d96: jg 0x6a2dc1 */ if ((!fZ&&fS==fO)) goto L_006a2dc1;
L_006a2d98:; BB(0x006a2d98);
    /* 006a2d98: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a2d9a: call 0x6a3250 */ r_esp -= 4; W32(r_esp, 0x6a2d9fu); f_006a3250();
    /* 006a2d9f: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a2da2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a2da4: jne 0x6a2dc1 */ if (!fZ) goto L_006a2dc1;
L_006a2da6:; BB(0x006a2da6);
    /* 006a2da6: mov eax, dword ptr [edi + 0xb0] */ r_eax = R32((u32)(r_edi+0xb0u));
    /* 006a2dac: mov dword ptr [edi + 0xd4], 0x3e4ccccd */ W32((u32)(r_edi+0xd4u), 0x3e4ccccdu);
    /* 006a2db6: or eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a2dbb: mov dword ptr [edi + 0xb0], eax */ W32((u32)(r_edi+0xb0u), r_eax);
L_006a2dc1:; BB(0x006a2dc1);
    /* 006a2dc1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a2dc2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a2dc3: ret  */ FN_RET(0x006a2d44); r_esp += 4; return;
}

void f_006a2dc4(void) /* sub_6A2DC4 */
{
    FN_ENTER(0x006a2dc4);
    /* 006a2dc4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a2dc5: mov esi, ecx */ r_esi = r_ecx;
    /* 006a2dc7: mov ecx, esi */ r_ecx = r_esi;
    /* 006a2dc9: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x6a2dceu); f_0077774c();
    /* 006a2dce: mov eax, dword ptr [esi + 0xb0] */ r_eax = R32((u32)(r_esi+0xb0u));
    /* 006a2dd4: mov edx, dword ptr [esi + 0x45c] */ r_edx = R32((u32)(r_esi+0x45cu));
    /* 006a2dda: and eax, 0xffffffbf */ {  u32 a = r_eax; u32 b = 0xffffffbfu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 006a2ddd: mov dword ptr [esi + 0xb0], eax */ W32((u32)(r_esi+0xb0u), r_eax);
    /* 006a2de3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a2de5: je 0x6a2df3 */ if (fZ) goto L_006a2df3;
L_006a2de7:; BB(0x006a2de7);
    /* 006a2de7: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 006a2dec: mov word ptr [edx + 0x1098], ax */ W16((u32)(r_edx+0x1098u), (u16)r_eax);
L_006a2df3:; BB(0x006a2df3);
    /* 006a2df3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a2df4: ret  */ FN_RET(0x006a2dc4); r_esp += 4; return;
}

void f_006a2df8(void) /* sub_6A2DF8 */
{
    FN_ENTER(0x006a2df8);
    /* 006a2df8: mov eax, dword ptr [ecx + 0xb0] */ r_eax = R32((u32)(r_ecx+0xb0u));
    /* 006a2dfe: and eax, 0xfffffeff */ {  u32 a = r_eax; u32 b = 0xfffffeffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 006a2e03: mov dword ptr [ecx + 0xb0], eax */ W32((u32)(r_ecx+0xb0u), r_eax);
    /* 006a2e09: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x6a2e0eu); f_0077774c();
    /* 006a2e0e: ret  */ FN_RET(0x006a2df8); r_esp += 4; return;
}

void f_006a2e10(void) /* sub_6A2E10 */
{
    FN_ENTER(0x006a2e10);
    /* 006a2e10: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a2e11: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006a2e13: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a2e15: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x6a2e1au); f_0077774c();
    /* 006a2e1a: mov eax, dword ptr [ebx + 0xb0] */ r_eax = R32((u32)(r_ebx+0xb0u));
    /* 006a2e20: and eax, 0xfffffeff */ {  u32 a = r_eax; u32 b = 0xfffffeffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a2e25: mov dword ptr [ebx + 0xb0], eax */ W32((u32)(r_ebx+0xb0u), r_eax);
    /* 006a2e2b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a2e2c: ret  */ FN_RET(0x006a2e10); r_esp += 4; return;
}

void f_006a2e30(void) /* sub_6A2E30 */
{
    FN_ENTER(0x006a2e30);
    /* 006a2e30: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 006a2e35: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a2e37: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 006a2e39: mov word ptr [ecx + 4], ax */ W16((u32)(r_ecx+0x4u), (u16)r_eax);
    /* 006a2e3d: mov word ptr [ecx + 6], dx */ W16((u32)(r_ecx+0x6u), (u16)r_edx);
    /* 006a2e41: mov word ptr [ecx + 8], ax */ W16((u32)(r_ecx+0x8u), (u16)r_eax);
    /* 006a2e45: mov word ptr [ecx + 0xa], dx */ W16((u32)(r_ecx+0xau), (u16)r_edx);
    /* 006a2e49: mov word ptr [ecx + 0xc], ax */ W16((u32)(r_ecx+0xcu), (u16)r_eax);
    /* 006a2e4d: mov word ptr [ecx + 0xe], dx */ W16((u32)(r_ecx+0xeu), (u16)r_edx);
    /* 006a2e51: mov word ptr [ecx + 0x10], ax */ W16((u32)(r_ecx+0x10u), (u16)r_eax);
    /* 006a2e55: mov word ptr [ecx + 0x12], dx */ W16((u32)(r_ecx+0x12u), (u16)r_edx);
    /* 006a2e59: mov word ptr [ecx + 0x14], ax */ W16((u32)(r_ecx+0x14u), (u16)r_eax);
    /* 006a2e5d: mov word ptr [ecx + 0x16], dx */ W16((u32)(r_ecx+0x16u), (u16)r_edx);
    /* 006a2e61: mov word ptr [ecx + 0x18], ax */ W16((u32)(r_ecx+0x18u), (u16)r_eax);
    /* 006a2e65: mov word ptr [ecx + 0x1a], dx */ W16((u32)(r_ecx+0x1au), (u16)r_edx);
    /* 006a2e69: mov word ptr [ecx + 0x1c], ax */ W16((u32)(r_ecx+0x1cu), (u16)r_eax);
    /* 006a2e6d: mov word ptr [ecx + 0x1e], dx */ W16((u32)(r_ecx+0x1eu), (u16)r_edx);
    /* 006a2e71: mov word ptr [ecx + 0x20], ax */ W16((u32)(r_ecx+0x20u), (u16)r_eax);
    /* 006a2e75: mov word ptr [ecx + 0x22], dx */ W16((u32)(r_ecx+0x22u), (u16)r_edx);
    /* 006a2e79: mov word ptr [ecx + 0x24], ax */ W16((u32)(r_ecx+0x24u), (u16)r_eax);
    /* 006a2e7d: mov word ptr [ecx + 0x26], dx */ W16((u32)(r_ecx+0x26u), (u16)r_edx);
    /* 006a2e81: mov word ptr [ecx + 0x28], ax */ W16((u32)(r_ecx+0x28u), (u16)r_eax);
    /* 006a2e85: mov word ptr [ecx + 0x2a], dx */ W16((u32)(r_ecx+0x2au), (u16)r_edx);
    /* 006a2e89: ret  */ FN_RET(0x006a2e30); r_esp += 4; return;
}

void f_006a2e8c(void) /* sub_6A2E8C */
{
    FN_ENTER(0x006a2e8c);
    /* 006a2e8c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a2e8d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a2e8e: movsx edi, word ptr [ecx] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ecx));
    /* 006a2e91: mov eax, edi */ r_eax = r_edi;
    /* 006a2e93: call 0x6a326d */ r_esp -= 4; W32(r_esp, 0x6a2e98u); f_006a326d();
    /* 006a2e98: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a2e9a: jne 0x6a2e9e */ if (!fZ) goto L_006a2e9e;
L_006a2e9c:; BB(0x006a2e9c);
    /* 006a2e9c: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_006a2e9e:; BB(0x006a2e9e);
    /* 006a2e9e: mov eax, edi */ r_eax = r_edi;
    /* 006a2ea0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a2ea1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a2ea2: ret  */ FN_RET(0x006a2e8c); r_esp += 4; return;
}

void f_006a2ea4(void) /* sub_6A2EA4 */
{
    FN_ENTER(0x006a2ea4);
    /* 006a2ea4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a2ea5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a2ea6: movsx edi, word ptr [ecx + 2] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ecx+0x2u));
    /* 006a2eaa: mov eax, edi */ r_eax = r_edi;
    /* 006a2eac: call 0x6a326d */ r_esp -= 4; W32(r_esp, 0x6a2eb1u); f_006a326d();
    /* 006a2eb1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a2eb3: jne 0x6a2eb7 */ if (!fZ) goto L_006a2eb7;
L_006a2eb5:; BB(0x006a2eb5);
    /* 006a2eb5: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_006a2eb7:; BB(0x006a2eb7);
    /* 006a2eb7: mov eax, edi */ r_eax = r_edi;
    /* 006a2eb9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a2eba: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a2ebb: ret  */ FN_RET(0x006a2ea4); r_esp += 4; return;
}

void f_006a2ebc(void) /* sub_6A2EBC */
{
    FN_ENTER(0x006a2ebc);
    /* 006a2ebc: mov dword ptr [ecx + 4], 0x3f800000 */ W32((u32)(r_ecx+0x4u), 0x3f800000u);
    /* 006a2ec3: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a2ec5: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 006a2eca: mov dword ptr [ecx + 0x1c], 0x41a00000 */ W32((u32)(r_ecx+0x1cu), 0x41a00000u);
    /* 006a2ed1: mov word ptr [ecx + 2], dx */ W16((u32)(r_ecx+0x2u), (u16)r_edx);
    /* 006a2ed5: mov dword ptr [ecx + 0x20], 0x3f800000 */ W32((u32)(r_ecx+0x20u), 0x3f800000u);
    /* 006a2edc: mov word ptr [ecx], dx */ W16((u32)(r_ecx), (u16)r_edx);
    /* 006a2edf: mov word ptr [ecx + 0xe], dx */ W16((u32)(r_ecx+0xeu), (u16)r_edx);
    /* 006a2ee3: mov word ptr [ecx + 0xc], dx */ W16((u32)(r_ecx+0xcu), (u16)r_edx);
    /* 006a2ee7: mov dword ptr [ecx + 0x24], 0x3f800000 */ W32((u32)(r_ecx+0x24u), 0x3f800000u);
    /* 006a2eee: mov dword ptr [ecx + 0x10], edx */ W32((u32)(r_ecx+0x10u), r_edx);
    /* 006a2ef1: mov dword ptr [ecx + 0x14], edx */ W32((u32)(r_ecx+0x14u), r_edx);
    /* 006a2ef4: mov dword ptr [ecx + 0x18], edx */ W32((u32)(r_ecx+0x18u), r_edx);
    /* 006a2ef7: mov dword ptr [ecx + 0x28], 0 */ W32((u32)(r_ecx+0x28u), 0x0u);
    /* 006a2efe: mov dword ptr [ecx + 0x2c], edx */ W32((u32)(r_ecx+0x2cu), r_edx);
    /* 006a2f01: mov word ptr [ecx + 0x30], ax */ W16((u32)(r_ecx+0x30u), (u16)r_eax);
    /* 006a2f05: mov word ptr [ecx + 0x32], dx */ W16((u32)(r_ecx+0x32u), (u16)r_edx);
    /* 006a2f09: mov word ptr [ecx + 0x34], ax */ W16((u32)(r_ecx+0x34u), (u16)r_eax);
    /* 006a2f0d: mov word ptr [ecx + 0x36], dx */ W16((u32)(r_ecx+0x36u), (u16)r_edx);
    /* 006a2f11: mov word ptr [ecx + 0x38], ax */ W16((u32)(r_ecx+0x38u), (u16)r_eax);
    /* 006a2f15: mov word ptr [ecx + 0x3a], dx */ W16((u32)(r_ecx+0x3au), (u16)r_edx);
    /* 006a2f19: mov word ptr [ecx + 0x3c], ax */ W16((u32)(r_ecx+0x3cu), (u16)r_eax);
    /* 006a2f1d: mov word ptr [ecx + 0x3e], dx */ W16((u32)(r_ecx+0x3eu), (u16)r_edx);
    /* 006a2f21: mov word ptr [ecx + 0x40], ax */ W16((u32)(r_ecx+0x40u), (u16)r_eax);
    /* 006a2f25: mov word ptr [ecx + 0x42], dx */ W16((u32)(r_ecx+0x42u), (u16)r_edx);
    /* 006a2f29: mov word ptr [ecx + 0x44], ax */ W16((u32)(r_ecx+0x44u), (u16)r_eax);
    /* 006a2f2d: mov word ptr [ecx + 0x46], dx */ W16((u32)(r_ecx+0x46u), (u16)r_edx);
    /* 006a2f31: mov word ptr [ecx + 0x48], ax */ W16((u32)(r_ecx+0x48u), (u16)r_eax);
    /* 006a2f35: mov word ptr [ecx + 0x4a], dx */ W16((u32)(r_ecx+0x4au), (u16)r_edx);
    /* 006a2f39: mov word ptr [ecx + 0x4c], ax */ W16((u32)(r_ecx+0x4cu), (u16)r_eax);
    /* 006a2f3d: mov word ptr [ecx + 0x4e], dx */ W16((u32)(r_ecx+0x4eu), (u16)r_edx);
    /* 006a2f41: mov word ptr [ecx + 0x50], ax */ W16((u32)(r_ecx+0x50u), (u16)r_eax);
    /* 006a2f45: mov word ptr [ecx + 0x52], dx */ W16((u32)(r_ecx+0x52u), (u16)r_edx);
    /* 006a2f49: mov word ptr [ecx + 0x54], ax */ W16((u32)(r_ecx+0x54u), (u16)r_eax);
    /* 006a2f4d: mov word ptr [ecx + 0x56], dx */ W16((u32)(r_ecx+0x56u), (u16)r_edx);
    /* 006a2f51: ret  */ FN_RET(0x006a2ebc); r_esp += 4; return;
}

void f_006a2f54(void) /* sub_6A2F54 */
{
    FN_ENTER(0x006a2f54);
    /* 006a2f54: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006a2f58: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 006a2f5c: fld dword ptr [0x93db28] */ FPUSH(R_F32((u32)(0x93db28u)));
    /* 006a2f62: mov dword ptr [ecx + 0x18], 6 */ W32((u32)(r_ecx+0x18u), 0x6u);
    /* 006a2f69: mov word ptr [ecx + 0xc], ax */ W16((u32)(r_ecx+0xcu), (u16)r_eax);
    /* 006a2f6d: mov dword ptr [ecx + 0x10], edx */ W32((u32)(r_ecx+0x10u), r_edx);
    /* 006a2f70: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006a2f72: mov dword ptr [ecx + 4], 0x3f800000 */ W32((u32)(r_ecx+0x4u), 0x3f800000u);
    /* 006a2f79: mov word ptr [ecx + 0xe], ax */ W16((u32)(r_ecx+0xeu), (u16)r_eax);
    /* 006a2f7d: mov dword ptr [ecx + 0x14], eax */ W32((u32)(r_ecx+0x14u), r_eax);
    /* 006a2f80: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 006a2f83: and eax, 0xffffffe0 */ {  u32 a = r_eax; u32 b = 0xffffffe0u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 006a2f86: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 006a2f89: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 006a2f8d: mov eax, dword ptr [eax + 0x324] */ r_eax = R32((u32)(r_eax+0x324u));
    /* 006a2f93: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a2f95: je 0x6a2f9d */ if (fZ) goto L_006a2f9d;
L_006a2f97:; BB(0x006a2f97);
    /* 006a2f97: fadd dword ptr [eax + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0xcu));
    /* 006a2f9a: fst dword ptr [ecx + 4] */ W_F32((u32)(r_ecx+0x4u), ST(0));
L_006a2f9d:; BB(0x006a2f9d);
    /* 006a2f9d: movsx eax, word ptr [ecx] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx));
    /* 006a2fa0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a2fa2: je 0x6a2fad */ if (fZ) goto L_006a2fad;
L_006a2fa4:; BB(0x006a2fa4);
    /* 006a2fa4: fmul dword ptr [0x93db24] */ ST(0) = ST(0) * R_F32((u32)(0x93db24u));
    /* 006a2faa: fst dword ptr [ecx + 4] */ W_F32((u32)(r_ecx+0x4u), ST(0));
L_006a2fad:; BB(0x006a2fad);
    /* 006a2fad: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006a2faf: ret 0xc */ FN_RET(0x006a2f54); r_esp += 16; return;
}

void f_006a2fb4(void) /* sub_6A2FB4 */
{
    FN_ENTER(0x006a2fb4);
    /* 006a2fb4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a2fb5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a2fb6: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006a2fb9: mov esi, ecx */ r_esi = r_ecx;
    /* 006a2fbb: mov ebp, dword ptr [esp + 0x18] */ r_ebp = R32((u32)(r_esp+0x18u));
    /* 006a2fbf: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a2fc0: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 006a2fc3: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006a2fc6: mov dword ptr [esi + 8], eax */ W32((u32)(r_esi+0x8u), r_eax);
    /* 006a2fc9: call 0x6ac638 */ r_esp -= 4; W32(r_esp, 0x6a2fceu); f_006ac638();
    /* 006a2fce: fnstcw word ptr [esp + 4] */ W16((u32)(r_esp+0x4u), fcw);
    /* 006a2fd2: movzx eax, word ptr [esp + 4] */ r_eax = (u32)R16((u32)(r_esp+0x4u));
    /* 006a2fd7: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006a2fdc: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 006a2fe0: fldcw word ptr [esp + 0xc] */ fcw = R16((u32)(r_esp+0xcu));
    /* 006a2fe4: fistp dword ptr [esi + 0x18] */ W32((u32)(r_esi+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 006a2fe7: fldcw word ptr [esp + 4] */ fcw = R16((u32)(r_esp+0x4u));
    /* 006a2feb: mov eax, dword ptr [ebp + 0x33c] */ r_eax = R32((u32)(r_ebp+0x33cu));
    /* 006a2ff1: and eax, 0xffffff7f */ {  u32 a = r_eax; u32 b = 0xffffff7fu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 006a2ff6: mov dword ptr [ebp + 0x33c], eax */ W32((u32)(r_ebp+0x33cu), r_eax);
    /* 006a2ffc: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006a2fff: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a3000: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a3001: ret 4 */ FN_RET(0x006a2fb4); r_esp += 8; return;
}

