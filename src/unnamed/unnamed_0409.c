#include "protos.h"

void f_0040906c(void) /* sub_40906C */
{
    FN_ENTER(0x0040906c);
    /* 0040906c: mov dword ptr [0xa3ad24], 0x3f800000 */ W32((u32)(0xa3ad24u), 0x3f800000u);
    /* 00409076: mov dword ptr [0xa3ad28], 0x41000000 */ W32((u32)(0xa3ad28u), 0x41000000u);
    /* 00409080: mov dword ptr [0xa3ad2c], 0x3fc00000 */ W32((u32)(0xa3ad2cu), 0x3fc00000u);
    /* 0040908a: ret  */ FN_RET(0x0040906c); r_esp += 4; return;
}

void f_0040908c(void) /* sub_40908C */
{
    FN_ENTER(0x0040908c);
    /* 0040908c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0040908d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0040908f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00409091: call 0x4090b0 */ r_esp -= 4; W32(r_esp, 0x409096u); f_004090b0();
    /* 00409096: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0040909a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040909c: jne 0x4090a2 */ if (!fZ) goto L_004090a2;
L_0040909e:; BB(0x0040909e);
    /* 0040909e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0040909f: ret 4 */ FN_RET(0x0040908c); r_esp += 8; return;
L_004090a2:; BB(0x004090a2);
    /* 004090a2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004090a3: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4090a8u); f_005c2f74();
    /* 004090a8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004090a9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004090aa: ret 4 */ FN_RET(0x0040908c); r_esp += 8; return;
}

void f_004090b0(void) /* sub_4090B0 */
{
    FN_ENTER(0x004090b0);
    /* 004090b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004090b1: mov ebp, esp */ r_ebp = r_esp;
    /* 004090b3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004090b5: push 0x8cc46c */ { u32 v = 0x8cc46cu; r_esp -= 4; W32(r_esp, v); }
    /* 004090ba: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004090c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004090c1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004090c8: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004090cb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004090ce: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004090d1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004090d4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004090d7: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004090da: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004090dd: mov dword ptr [ecx], 0xaf25e8 */ W32((u32)(r_ecx), 0xaf25e8u);
    /* 004090e3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004090ea: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x4090efu); f_008171e8();
    /* 004090ef: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004090f2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004090f9: mov esp, ebp */ r_esp = r_ebp;
    /* 004090fb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004090fc: ret  */ FN_RET(0x004090b0); r_esp += 4; return;
}

void f_00409100(void) /* sub_409100 */
{
    FN_ENTER(0x00409100);
    /* 00409100: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00409101: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00409103: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00409107: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00409109: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x40910eu); f_008193cc();
    /* 0040910e: fld dword ptr [0x8f99f0] */ FPUSH(R_F32((u32)(0x8f99f0u)));
    /* 00409114: mov dword ptr [ebx], 0xaf25e8 */ W32((u32)(r_ebx), 0xaf25e8u);
    /* 0040911a: mov edx, dword ptr [0x9a3078] */ r_edx = R32((u32)(0x9a3078u));
    /* 00409120: mov dword ptr [ebx + 0x24], 0 */ W32((u32)(r_ebx+0x24u), 0x0u);
    /* 00409127: mov dword ptr [ebx + 4], edx */ W32((u32)(r_ebx+0x4u), r_edx);
    /* 0040912a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0040912c: mov dword ptr [ebx + 0x1c], eax */ W32((u32)(r_ebx+0x1cu), r_eax);
    /* 0040912f: mov dword ptr [ebx + 0x1970], 0 */ W32((u32)(r_ebx+0x1970u), 0x0u);
    /* 00409139: mov dword ptr [0xa3ad44], eax */ W32((u32)(0xa3ad44u), r_eax);
    /* 0040913e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00409140: mov dword ptr [ebx + 0x192c], 0 */ W32((u32)(r_ebx+0x192cu), 0x0u);
    /* 0040914a: mov dword ptr [ebx + 0x1928], eax */ W32((u32)(r_ebx+0x1928u), r_eax);
    /* 00409150: mov dword ptr [ebx + 0x1930], 0 */ W32((u32)(r_ebx+0x1930u), 0x0u);
    /* 0040915a: mov dword ptr [ebx + 0x1934], 0 */ W32((u32)(r_ebx+0x1934u), 0x0u);
    /* 00409164: mov dword ptr [ebx + 0x1938], 0 */ W32((u32)(r_ebx+0x1938u), 0x0u);
    /* 0040916e: mov dword ptr [ebx + 0x193c], 0 */ W32((u32)(r_ebx+0x193cu), 0x0u);
    /* 00409178: mov dword ptr [ebx + 0x1940], 0 */ W32((u32)(r_ebx+0x1940u), 0x0u);
    /* 00409182: mov dword ptr [ebx + 0x1944], 0x3f800000 */ W32((u32)(r_ebx+0x1944u), 0x3f800000u);
    /* 0040918c: mov dword ptr [ebx + 0x1948], 0x3f800000 */ W32((u32)(r_ebx+0x1948u), 0x3f800000u);
    /* 00409196: mov dword ptr [ebx + 0x194c], 0 */ W32((u32)(r_ebx+0x194cu), 0x0u);
    /* 004091a0: mov dword ptr [ebx + 0x1950], 0 */ W32((u32)(r_ebx+0x1950u), 0x0u);
    /* 004091aa: mov dword ptr [ebx + 0x1954], 0 */ W32((u32)(r_ebx+0x1954u), 0x0u);
    /* 004091b4: mov dword ptr [ebx + 0x1958], 0 */ W32((u32)(r_ebx+0x1958u), 0x0u);
    /* 004091be: mov dword ptr [ebx + 0x195c], 0 */ W32((u32)(r_ebx+0x195cu), 0x0u);
    /* 004091c8: mov dword ptr [ebx + 0x1960], 0 */ W32((u32)(r_ebx+0x1960u), 0x0u);
    /* 004091d2: mov dword ptr [ebx + 0x1964], 0x3f800000 */ W32((u32)(r_ebx+0x1964u), 0x3f800000u);
    /* 004091dc: mov dword ptr [ebx + 0x1968], 0x3f800000 */ W32((u32)(r_ebx+0x1968u), 0x3f800000u);
    /* 004091e6: mov eax, dword ptr [0xa3ad40] */ r_eax = R32((u32)(0xa3ad40u));
L_004091eb:; BB(0x004091eb);
    /* 004091eb: mov ecx, dword ptr [eax + edx*4] */ r_ecx = R32((u32)(r_eax+r_edx*4));
    /* 004091ee: movsx ecx, byte ptr [ecx] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_ecx));
    /* 004091f1: cmp ecx, 0x2a */ {  u32 a = r_ecx; u32 b = 0x2au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004091f4: je 0x40924a */ if (fZ) goto L_0040924a;
L_004091f6:; BB(0x004091f6);
    /* 004091f6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004091f8: je 0x409233 */ if (fZ) goto L_00409233;
L_004091fa:; BB(0x004091fa);
    /* 004091fa: cmp ecx, 0x23 */ {  u32 a = r_ecx; u32 b = 0x23u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004091fd: je 0x409233 */ if (fZ) goto L_00409233;
L_004091ff:; BB(0x004091ff);
    /* 004091ff: cmp ecx, 0x21 */ {  u32 a = r_ecx; u32 b = 0x21u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409202: jne 0x409212 */ if (!fZ) goto L_00409212;
L_00409204:; BB(0x00409204);
    /* 00409204: fadd dword ptr [0x8f99d8] */ ST(0) = ST(0) + R_F32((u32)(0x8f99d8u));
    /* 0040920a: fst dword ptr [ebx + 0x1970] */ W_F32((u32)(r_ebx+0x1970u), ST(0));
    /* 00409210: jmp 0x40923f */ goto L_0040923f;
L_00409212:; BB(0x00409212);
    /* 00409212: cmp ecx, 0x40 */ {  u32 a = r_ecx; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409215: jne 0x409225 */ if (!fZ) goto L_00409225;
L_00409217:; BB(0x00409217);
    /* 00409217: fadd dword ptr [0x8f99dc] */ ST(0) = ST(0) + R_F32((u32)(0x8f99dcu));
    /* 0040921d: fst dword ptr [ebx + 0x1970] */ W_F32((u32)(r_ebx+0x1970u), ST(0));
    /* 00409223: jmp 0x40923f */ goto L_0040923f;
L_00409225:; BB(0x00409225);
    /* 00409225: fadd dword ptr [0x8f99e0] */ ST(0) = ST(0) + R_F32((u32)(0x8f99e0u));
    /* 0040922b: fst dword ptr [ebx + 0x1970] */ W_F32((u32)(r_ebx+0x1970u), ST(0));
    /* 00409231: jmp 0x40923f */ goto L_0040923f;
L_00409233:; BB(0x00409233);
    /* 00409233: fadd dword ptr [0x8f99d4] */ ST(0) = ST(0) + R_F32((u32)(0x8f99d4u));
    /* 00409239: fst dword ptr [ebx + 0x1970] */ W_F32((u32)(r_ebx+0x1970u), ST(0));
L_0040923f:; BB(0x0040923f);
    /* 0040923f: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00409242: mov dword ptr [ebx + 0x1928], edx */ W32((u32)(r_ebx+0x1928u), r_edx);
    /* 00409248: jmp 0x4091eb */ goto L_004091eb;
L_0040924a:; BB(0x0040924a);
    /* 0040924a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0040924c: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x409251u); f_006dc358();
    /* 00409251: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409253: jne 0x40925d */ if (!fZ) goto L_0040925d;
L_00409255:; BB(0x00409255);
    /* 00409255: fld dword ptr [0x8f99ec] */ FPUSH(R_F32((u32)(0x8f99ecu)));
    /* 0040925b: jmp 0x409263 */ goto L_00409263;
L_0040925d:; BB(0x0040925d);
    /* 0040925d: fld dword ptr [0x8f99e8] */ FPUSH(R_F32((u32)(0x8f99e8u)));
L_00409263:; BB(0x00409263);
    /* 00409263: fld dword ptr [0x8f99e4] */ FPUSH(R_F32((u32)(0x8f99e4u)));
    /* 00409269: mov eax, dword ptr [0xa72ce4] */ r_eax = R32((u32)(0xa72ce4u));
    /* 0040926e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00409270: fst dword ptr [ebx + 0x1978] */ W_F32((u32)(r_ebx+0x1978u), ST(0));
    /* 00409276: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00409278: fstp dword ptr [ebx + 0x196c] */ W_F32((u32)(r_ebx+0x196cu), ST(0)); FPOP();
    /* 0040927e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00409280: je 0x409289 */ if (fZ) goto L_00409289;
L_00409282:; BB(0x00409282);
    /* 00409282: mov eax, 1 */ r_eax = 0x1u;
    /* 00409287: jmp 0x40928b */ goto L_0040928b;
L_00409289:; BB(0x00409289);
    /* 00409289: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_0040928b:; BB(0x0040928b);
    /* 0040928b: mov dword ptr [ebx + 0x1974], eax */ W32((u32)(r_ebx+0x1974u), r_eax);
    /* 00409291: mov eax, ebx */ r_eax = r_ebx;
    /* 00409293: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00409294: ret 4 */ FN_RET(0x00409100); r_esp += 8; return;
}

void f_00409298(void) /* sub_409298 */
{
    FN_ENTER(0x00409298);
    /* 00409298: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00409299: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0040929a: mov eax, dword ptr [0xa3ad44] */ r_eax = R32((u32)(0xa3ad44u));
    /* 0040929f: mov edx, dword ptr [ecx + 0x1928] */ r_edx = R32((u32)(r_ecx+0x1928u));
    /* 004092a5: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004092a8: jne 0x4092ad */ if (!fZ) goto L_004092ad;
L_004092aa:; BB(0x004092aa);
    /* 004092aa: add edx, -9 */ {  u32 a = r_edx; u32 b = 0xfffffff7u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
L_004092ad:; BB(0x004092ad);
    /* 004092ad: fld dword ptr [ecx + 0x1970] */ FPUSH(R_F32((u32)(r_ecx+0x1970u)));
    /* 004092b3: fdiv dword ptr [0x8f99b4] */ ST(0) = ST(0) / R_F32((u32)(0x8f99b4u));
    /* 004092b9: mov eax, dword ptr [ecx + 0x1974] */ r_eax = R32((u32)(r_ecx+0x1974u));
    /* 004092bf: fld dword ptr [ecx + 0x24] */ FPUSH(R_F32((u32)(r_ecx+0x24u)));
    /* 004092c2: fdiv dword ptr [0x8f99c4] */ ST(0) = ST(0) / R_F32((u32)(0x8f99c4u));
    /* 004092c8: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004092ca: fld dword ptr [eax*4 + 0x8f99ac] */ FPUSH(R_F32((u32)(r_eax*4+0x8f99acu)));
    /* 004092d1: fdiv dword ptr [0x8f99cc] */ ST(0) = ST(0) / R_F32((u32)(0x8f99ccu));
    /* 004092d7: fdivr dword ptr [0x8f99d0] */ ST(0) = R_F32((u32)(0x8f99d0u)) / ST(0);
    /* 004092dd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004092df: fchs  */ ST(0) = -ST(0);
    /* 004092e1: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004092e3: fadd dword ptr [0x8f99c8] */ ST(0) = ST(0) + R_F32((u32)(0x8f99c8u));
    /* 004092e9: fstp dword ptr [ecx + 0x2c] */ W_F32((u32)(r_ecx+0x2cu), ST(0)); FPOP();
L_004092ec:; BB(0x004092ec);
    /* 004092ec: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004092ee: jae 0x4093d4 */ if (!fC) goto L_004093d4;
L_004092f4:; BB(0x004092f4);
    /* 004092f4: mov ebx, dword ptr [0xa3ad40] */ r_ebx = R32((u32)(0xa3ad40u));
    /* 004092fa: mov esi, dword ptr [ebx + eax*4] */ r_esi = R32((u32)(r_ebx+r_eax*4));
    /* 004092fd: movsx ebx, byte ptr [esi] */ r_ebx = (u32)(i32)(i8)R8((u32)(r_esi));
    /* 00409300: cmp ebx, 0x23 */ {  u32 a = r_ebx; u32 b = 0x23u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409303: je 0x4093b6 */ if (fZ) goto L_004093b6;
L_00409309:; BB(0x00409309);
    /* 00409309: cmp ebx, 0x21 */ {  u32 a = r_ebx; u32 b = 0x21u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040930c: jne 0x409352 */ if (!fZ) goto L_00409352;
L_0040930e:; BB(0x0040930e);
    /* 0040930e: fld dword ptr [0x8f99d8] */ FPUSH(R_F32((u32)(0x8f99d8u)));
    /* 00409314: fld dword ptr [ecx + eax*8 + 0x2c] */ FPUSH(R_F32((u32)(r_ecx+r_eax*8+0x2cu)));
    /* 00409318: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0040931a: fstp dword ptr [ecx + eax*8 + 0x34] */ W_F32((u32)(r_ecx+r_eax*8+0x34u), ST(0)); FPOP();
    /* 0040931e: mov dword ptr [ecx + eax*8 + 0x28], 0x42340000 */ W32((u32)(r_ecx+r_eax*8+0x28u), 0x42340000u);
    /* 00409326: mov dword ptr [ecx + 0x192c], 0x42340000 */ W32((u32)(r_ecx+0x192cu), 0x42340000u);
    /* 00409330: fld dword ptr [ecx + eax*8 + 0x2c] */ FPUSH(R_F32((u32)(r_ecx+r_eax*8+0x2cu)));
    /* 00409334: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00409336: mov ebx, dword ptr [ecx + eax*8 + 0x2c] */ r_ebx = R32((u32)(r_ecx+r_eax*8+0x2cu));
    /* 0040933a: fstp dword ptr [ecx + 0x1938] */ W_F32((u32)(r_ecx+0x1938u), ST(0)); FPOP();
    /* 00409340: mov dword ptr [ecx + 0x1930], ebx */ W32((u32)(r_ecx+0x1930u), r_ebx);
    /* 00409346: mov dword ptr [ecx + 0x1934], 0x43968000 */ W32((u32)(r_ecx+0x1934u), 0x43968000u);
    /* 00409350: jmp 0x4093cc */ goto L_004093cc;
L_00409352:; BB(0x00409352);
    /* 00409352: lea esi, [eax + eax] */ r_esi = (u32)(r_eax+r_eax);
    /* 00409355: cmp ebx, 0x40 */ {  u32 a = r_ebx; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409358: jne 0x40939e */ if (!fZ) goto L_0040939e;
L_0040935a:; BB(0x0040935a);
    /* 0040935a: fld dword ptr [0x8f99dc] */ FPUSH(R_F32((u32)(0x8f99dcu)));
    /* 00409360: fld dword ptr [ecx + esi*4 + 0x2c] */ FPUSH(R_F32((u32)(r_ecx+r_esi*4+0x2cu)));
    /* 00409364: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00409366: fstp dword ptr [ecx + esi*4 + 0x34] */ W_F32((u32)(r_ecx+r_esi*4+0x34u), ST(0)); FPOP();
    /* 0040936a: mov dword ptr [ecx + esi*4 + 0x28], 0x42340000 */ W32((u32)(r_ecx+r_esi*4+0x28u), 0x42340000u);
    /* 00409372: mov dword ptr [ecx + 0x194c], 0x42340000 */ W32((u32)(r_ecx+0x194cu), 0x42340000u);
    /* 0040937c: fld dword ptr [ecx + esi*4 + 0x2c] */ FPUSH(R_F32((u32)(r_ecx+r_esi*4+0x2cu)));
    /* 00409380: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00409382: mov ebx, dword ptr [ecx + esi*4 + 0x2c] */ r_ebx = R32((u32)(r_ecx+r_esi*4+0x2cu));
    /* 00409386: fstp dword ptr [ecx + 0x1958] */ W_F32((u32)(r_ecx+0x1958u), ST(0)); FPOP();
    /* 0040938c: mov dword ptr [ecx + 0x1950], ebx */ W32((u32)(r_ecx+0x1950u), r_ebx);
    /* 00409392: mov dword ptr [ecx + 0x1954], 0x43968000 */ W32((u32)(r_ecx+0x1954u), 0x43968000u);
    /* 0040939c: jmp 0x4093cc */ goto L_004093cc;
L_0040939e:; BB(0x0040939e);
    /* 0040939e: fld dword ptr [0x8f99e0] */ FPUSH(R_F32((u32)(0x8f99e0u)));
    /* 004093a4: fadd dword ptr [ecx + esi*4 + 0x2c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+r_esi*4+0x2cu));
    /* 004093a8: fstp dword ptr [ecx + esi*4 + 0x34] */ W_F32((u32)(r_ecx+r_esi*4+0x34u), ST(0)); FPOP();
    /* 004093ac: mov dword ptr [ecx + esi*4 + 0x28], 0x42480000 */ W32((u32)(r_ecx+r_esi*4+0x28u), 0x42480000u);
    /* 004093b4: jmp 0x4093cc */ goto L_004093cc;
L_004093b6:; BB(0x004093b6);
    /* 004093b6: fld dword ptr [0x8f99d4] */ FPUSH(R_F32((u32)(0x8f99d4u)));
    /* 004093bc: fadd dword ptr [ecx + eax*8 + 0x2c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+r_eax*8+0x2cu));
    /* 004093c0: fstp dword ptr [ecx + eax*8 + 0x34] */ W_F32((u32)(r_ecx+r_eax*8+0x34u), ST(0)); FPOP();
    /* 004093c4: mov dword ptr [ecx + eax*8 + 0x28], 0x42480000 */ W32((u32)(r_ecx+r_eax*8+0x28u), 0x42480000u);
L_004093cc:; BB(0x004093cc);
    /* 004093cc: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004093cf: jmp 0x4092ec */ goto L_004092ec;
L_004093d4:; BB(0x004093d4);
    /* 004093d4: fld dword ptr [ecx + 0x24] */ FPUSH(R_F32((u32)(r_ecx+0x24u)));
    /* 004093d7: fadd dword ptr [ecx + 0x196c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x196cu));
    /* 004093dd: mov edx, dword ptr [ecx + 0x1928] */ r_edx = R32((u32)(r_ecx+0x1928u));
    /* 004093e3: fstp dword ptr [ecx + 0x24] */ W_F32((u32)(r_ecx+0x24u), ST(0)); FPOP();
    /* 004093e6: fld dword ptr [ecx + edx*8 + 0x2c] */ FPUSH(R_F32((u32)(r_ecx+r_edx*8+0x2cu)));
    /* 004093ea: fcomp dword ptr [0x8f99b8] */ fx_compare(ST(0), R_F32((u32)(0x8f99b8u))); FPOP();
    /* 004093f0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004093f2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004093f3: jae 0x4093ff */ if (!fC) goto L_004093ff;
L_004093f5:; BB(0x004093f5);
    /* 004093f5: mov dword ptr [0xa3ad44], 1 */ W32((u32)(0xa3ad44u), 0x1u);
L_004093ff:; BB(0x004093ff);
    /* 004093ff: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00409400: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00409401: ret  */ FN_RET(0x00409298); r_esp += 4; return;
}

void f_00409404(void) /* sub_409404 */
{
    FN_ENTER(0x00409404);
    /* 00409404: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00409405: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00409406: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00409407: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00409408: sub esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040940b: mov edi, ecx */ r_edi = r_ecx;
    /* 0040940d: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x409412u); f_0082dbac();
    /* 00409412: mov edx, dword ptr [edi + 0x1928] */ r_edx = R32((u32)(r_edi+0x1928u));
    /* 00409418: mov dword ptr [esp + 0x40], edi */ W32((u32)(r_esp+0x40u), r_edi);
    /* 0040941c: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0040941e: lea eax, [edi + 0x194c] */ r_eax = (u32)(r_edi+0x194cu);
    /* 00409424: lea ecx, [edi + 0x192c] */ r_ecx = (u32)(r_edi+0x192cu);
    /* 0040942a: mov dword ptr [esp + 0x4c], ecx */ W32((u32)(r_esp+0x4cu), r_ecx);
    /* 0040942e: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
L_00409432:; BB(0x00409432);
    /* 00409432: cmp ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00409434: jae 0x409922 */ if (!fC) goto L_00409922;
L_0040943a:; BB(0x0040943a);
    /* 0040943a: mov ecx, dword ptr [esp + 0x40] */ r_ecx = R32((u32)(r_esp+0x40u));
    /* 0040943e: fld dword ptr [0x8f99a4] */ FPUSH(R_F32((u32)(0x8f99a4u)));
    /* 00409444: fld dword ptr [ecx + ebp*8 + 0x2c] */ FPUSH(R_F32((u32)(r_ecx+r_ebp*8+0x2cu)));
    /* 00409448: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0040944a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0040944c: fstp dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 00409450: mov edi, 0xffffffff */ r_edi = 0xffffffffu;
    /* 00409455: lea ebx, [ebp + ebp] */ r_ebx = (u32)(r_ebp+r_ebp);
    /* 00409459: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0040945a: jbe 0x40946b */ if ((fC||fZ)) goto L_0040946b;
L_0040945c:; BB(0x0040945c);
    /* 0040945c: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 00409460: fcomp dword ptr [0x8f99a0] */ fx_compare(ST(0), R_F32((u32)(0x8f99a0u))); FPOP();
    /* 00409466: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00409468: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00409469: jb 0x409470 */ if (fC) goto L_00409470;
L_0040946b:; BB(0x0040946b);
    /* 0040946b: mov edi, 0xffffff */ r_edi = 0xffffffu;
L_00409470:; BB(0x00409470);
    /* 00409470: fcom dword ptr [esp + 0x58] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x58u))); 
    /* 00409474: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00409476: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00409477: jae 0x4094c5 */ if (!fC) goto L_004094c5;
L_00409479:; BB(0x00409479);
    /* 00409479: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 0040947d: fcomp dword ptr [0x8f999c] */ fx_compare(ST(0), R_F32((u32)(0x8f999cu))); FPOP();
    /* 00409483: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00409485: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00409486: jae 0x4094c5 */ if (!fC) goto L_004094c5;
L_00409488:; BB(0x00409488);
    /* 00409488: fld dword ptr [0x8f9994] */ FPUSH(R_F32((u32)(0x8f9994u)));
    /* 0040948e: fadd dword ptr [esp + 0x58] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x58u));
    /* 00409492: fmul dword ptr [0x8f9998] */ ST(0) = ST(0) * R_F32((u32)(0x8f9998u));
    /* 00409498: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 0040949a: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 0040949e: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 004094a3: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004094a8: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 004094ac: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 004094b0: fistp qword ptr [esp + 0x30] */ W64((u32)(r_esp+0x30u), (u64)fx_int64(ST(0))); FPOP();
    /* 004094b4: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 004094b8: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 004094bc: shl edi, 0x18 */ { u32 c = (24u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 004094bf: or edi, 0xffffff */ {  u32 a = r_edi; u32 b = 0xffffffu; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
L_004094c5:; BB(0x004094c5);
    /* 004094c5: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 004094c9: fcomp dword ptr [0x8f9990] */ fx_compare(ST(0), R_F32((u32)(0x8f9990u))); FPOP();
    /* 004094cf: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004094d1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004094d2: jbe 0x409520 */ if ((fC||fZ)) goto L_00409520;
L_004094d4:; BB(0x004094d4);
    /* 004094d4: fld dword ptr [0x8f99a0] */ FPUSH(R_F32((u32)(0x8f99a0u)));
    /* 004094da: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 004094de: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 004094e0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004094e2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004094e3: jae 0x40992f */ if (!fC) goto L_0040992f;
L_004094e9:; BB(0x004094e9);
    /* 004094e9: fsub dword ptr [esp + 0x58] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x58u));
    /* 004094ed: fmul dword ptr [0x8f9998] */ ST(0) = ST(0) * R_F32((u32)(0x8f9998u));
    /* 004094f3: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 004094f5: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 004094f9: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 004094fe: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00409503: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 00409507: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 0040950b: fistp qword ptr [esp + 0x30] */ W64((u32)(r_esp+0x30u), (u64)fx_int64(ST(0))); FPOP();
    /* 0040950f: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 00409513: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 00409517: shl edi, 0x18 */ { u32 c = (24u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 0040951a: or edi, 0xffffff */ {  u32 a = r_edi; u32 b = 0xffffffu; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
L_00409520:; BB(0x00409520);
    /* 00409520: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00409522: mov eax, dword ptr [0xa3ad40] */ r_eax = R32((u32)(0xa3ad40u));
    /* 00409527: mov esi, dword ptr [eax + ebp*4] */ r_esi = R32((u32)(r_eax+r_ebp*4));
    /* 0040952a: movsx eax, byte ptr [esi] */ r_eax = (u32)(i32)(i8)R8((u32)(r_esi));
    /* 0040952d: cmp eax, 0x23 */ {  u32 a = r_eax; u32 b = 0x23u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409530: je 0x4095fe */ if (fZ) goto L_004095fe;
L_00409536:; BB(0x00409536);
    /* 00409536: cmp eax, 0x21 */ {  u32 a = r_eax; u32 b = 0x21u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409539: jne 0x409581 */ if (!fZ) goto L_00409581;
L_0040953b:; BB(0x0040953b);
    /* 0040953b: mov ecx, dword ptr [0xa3ad48] */ r_ecx = R32((u32)(0xa3ad48u));
    /* 00409541: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x409546u); f_00829cc8();
    /* 00409546: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0040954b: call 0x82bb30 */ r_esp -= 4; W32(r_esp, 0x409550u); f_0082bb30();
    /* 00409550: mov ecx, 3 */ r_ecx = 0x3u;
    /* 00409555: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0040955a: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x40955fu); f_0082bb60();
    /* 0040955f: push 0x3f7fff58 */ { u32 v = 0x3f7fff58u; r_esp -= 4; W32(r_esp, v); }
    /* 00409564: mov ecx, dword ptr [esp + 0x50] */ r_ecx = R32((u32)(r_esp+0x50u));
    /* 00409568: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x40956du); f_0082b440();
    /* 0040956d: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x409572u); f_004ac444();
    /* 00409572: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 00409576: mov edx, dword ptr [eax + 0x1928] */ r_edx = R32((u32)(r_eax+0x1928u));
    /* 0040957c: jmp 0x409606 */ goto L_00409606;
L_00409581:; BB(0x00409581);
    /* 00409581: cmp eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409584: jne 0x4095c9 */ if (!fZ) goto L_004095c9;
L_00409586:; BB(0x00409586);
    /* 00409586: mov ecx, dword ptr [0xa3ad48] */ r_ecx = R32((u32)(0xa3ad48u));
    /* 0040958c: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x409591u); f_00829cc8();
    /* 00409591: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00409596: call 0x82bb30 */ r_esp -= 4; W32(r_esp, 0x40959bu); f_0082bb30();
    /* 0040959b: mov ecx, 4 */ r_ecx = 0x4u;
    /* 004095a0: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 004095a5: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x4095aau); f_0082bb60();
    /* 004095aa: push 0x3f7fff58 */ { u32 v = 0x3f7fff58u; r_esp -= 4; W32(r_esp, v); }
    /* 004095af: mov ecx, dword ptr [esp + 0x4c] */ r_ecx = R32((u32)(r_esp+0x4cu));
    /* 004095b3: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x4095b8u); f_0082b440();
    /* 004095b8: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x4095bdu); f_004ac444();
    /* 004095bd: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 004095c1: mov edx, dword ptr [eax + 0x1928] */ r_edx = R32((u32)(r_eax+0x1928u));
    /* 004095c7: jmp 0x409606 */ goto L_00409606;
L_004095c9:; BB(0x004095c9);
    /* 004095c9: cmp edi, 0xffffff */ {  u32 a = r_edi; u32 b = 0xffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004095cf: je 0x409606 */ if (fZ) goto L_00409606;
L_004095d1:; BB(0x004095d1);
    /* 004095d1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004095d2: call 0x7087dc */ r_esp -= 4; W32(r_esp, 0x4095d7u); f_007087dc();
    /* 004095d7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004095d8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004095d9: push 0x3f7fff58 */ { u32 v = 0x3f7fff58u; r_esp -= 4; W32(r_esp, v); }
    /* 004095de: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 004095e2: push dword ptr [eax + ebx*4 + 0x2c] */ { u32 v = R32((u32)(r_eax+r_ebx*4+0x2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004095e6: push dword ptr [eax + ebp*8 + 0x28] */ { u32 v = R32((u32)(r_eax+r_ebp*8+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 004095ea: call 0x789248 */ r_esp -= 4; W32(r_esp, 0x4095efu); f_00789248();
    /* 004095ef: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004095f2: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 004095f6: mov edx, dword ptr [eax + 0x1928] */ r_edx = R32((u32)(r_eax+0x1928u));
    /* 004095fc: jmp 0x409606 */ goto L_00409606;
L_004095fe:; BB(0x004095fe);
    /* 004095fe: cmp edi, 0xffffff */ {  u32 a = r_edi; u32 b = 0xffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409604: jne 0x40960e */ if (!fZ) goto L_0040960e;
L_00409606:; BB(0x00409606);
    /* 00409606: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00409609: jmp 0x409432 */ goto L_00409432;
L_0040960e:; BB(0x0040960e);
    /* 0040960e: mov eax, ecx */ r_eax = r_ecx;
    /* 00409610: fld dword ptr [eax + ebp*8 + 0x28] */ FPUSH(R_F32((u32)(r_eax+r_ebp*8+0x28u)));
    /* 00409614: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 00409618: mov ebx, 0xfe */ r_ebx = 0xfeu;
    /* 0040961d: call 0x7a9044 */ r_esp -= 4; W32(r_esp, 0x409622u); f_007a9044();
    /* 00409622: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00409627: call 0x82bb30 */ r_esp -= 4; W32(r_esp, 0x40962cu); f_0082bb30();
    /* 0040962c: push dword ptr [0xa3ad48] */ { u32 v = R32((u32)(0xa3ad48u)); r_esp -= 4; W32(r_esp, v); }
    /* 00409632: call 0x81a9b8 */ r_esp -= 4; W32(r_esp, 0x409637u); f_0081a9b8();
    /* 00409637: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00409638: mov dword ptr [esp + 0x50], edi */ W32((u32)(r_esp+0x50u), r_edi);
    /* 0040963c: mov dword ptr [esp + 0x44], ebp */ W32((u32)(r_esp+0x44u), r_ebp);
L_00409640:; BB(0x00409640);
    /* 00409640: movsx ebp, byte ptr [esi] */ r_ebp = (u32)(i32)(i8)R8((u32)(r_esi));
    /* 00409643: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409645: je 0x40990a */ if (fZ) goto L_0040990a;
L_0040964b:; BB(0x0040964b);
    /* 0040964b: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 00409651: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00409654: cmp ebp, 0x23 */ {  u32 a = r_ebp; u32 b = 0x23u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409657: je 0x409640 */ if (fZ) goto L_00409640;
L_00409659:; BB(0x00409659);
    /* 00409659: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 0040965d: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00409660: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00409661: call 0x85824c */ r_esp -= 4; W32(r_esp, 0x409666u); f_0085824c();
    /* 00409666: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00409667: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409669: je 0x409677 */ if (fZ) goto L_00409677;
L_0040966b:; BB(0x0040966b);
    /* 0040966b: fld dword ptr [0x8f9980] */ FPUSH(R_F32((u32)(0x8f9980u)));
    /* 00409671: fadd dword ptr [esp + 0x58] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x58u));
    /* 00409675: jmp 0x40967b */ goto L_0040967b;
L_00409677:; BB(0x00409677);
    /* 00409677: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
L_0040967b:; BB(0x0040967b);
    /* 0040967b: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0040967f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00409680: call 0x858339 */ r_esp -= 4; W32(r_esp, 0x409685u); f_00858339();
    /* 00409685: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00409686: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409688: jne 0x409710 */ if (!fZ) goto L_00409710;
L_0040968e:; BB(0x0040968e);
    /* 0040968e: add ebp, -0x26 */ {  u32 a = r_ebp; u32 b = 0xffffffdau; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00409691: cmp ebp, 0x58 */ {  u32 a = r_ebp; u32 b = 0x58u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00409694: ja 0x409709 */ if ((!fC&&!fZ)) goto L_00409709;
L_0040969a:; BB(0x0040969a);
    /* 0040969a: mov eax, dword ptr [ebp*4 + 0x8f94c0] */ r_eax = R32((u32)(r_ebp*4+0x8f94c0u));
    /* 004096a1: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_00409709:; BB(0x00409709);
    /* 00409709: mov ebp, 0x52 */ r_ebp = 0x52u;
    /* 0040970e: jmp 0x409750 */ goto L_00409750;
L_00409710:; BB(0x00409710);
    /* 00409710: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00409711: call 0x858212 */ r_esp -= 4; W32(r_esp, 0x409716u); f_00858212();
    /* 00409716: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00409717: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409719: je 0x409726 */ if (fZ) goto L_00409726;
L_0040971b:; BB(0x0040971b);
    /* 0040971b: add ebp, -0x41 */ {  u32 a = r_ebp; u32 b = 0xffffffbfu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0040971e: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 00409724: jmp 0x409750 */ goto L_00409750;
L_00409726:; BB(0x00409726);
    /* 00409726: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00409727: call 0x85824c */ r_esp -= 4; W32(r_esp, 0x40972cu); f_0085824c();
    /* 0040972c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0040972d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040972f: je 0x40973c */ if (fZ) goto L_0040973c;
L_00409731:; BB(0x00409731);
    /* 00409731: add ebp, -0x3d */ {  u32 a = r_ebp; u32 b = 0xffffffc3u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00409734: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 0040973a: jmp 0x409750 */ goto L_00409750;
L_0040973c:; BB(0x0040973c);
    /* 0040973c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040973d: call 0x858286 */ r_esp -= 4; W32(r_esp, 0x409742u); f_00858286();
    /* 00409742: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00409743: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409745: je 0x409750 */ if (fZ) goto L_00409750;
L_00409747:; BB(0x00409747);
    /* 00409747: add ebp, 0xe */ {  u32 a = r_ebp; u32 b = 0xeu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0040974a: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
L_00409750:; BB(0x00409750);
    /* 00409750: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00409753: cmp ebp, 0x52 */ {  u32 a = r_ebp; u32 b = 0x52u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409756: je 0x4098ac */ if (fZ) goto L_004098ac;
L_0040975c:; BB(0x0040975c);
    /* 0040975c: fld dword ptr [0x8f9988] */ FPUSH(R_F32((u32)(0x8f9988u)));
    /* 00409762: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00409766: fld dword ptr [0x8f99d4] */ FPUSH(R_F32((u32)(0x8f99d4u)));
    /* 0040976c: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 0040976e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00409770: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00409774: mov eax, 0x38e38e39 */ r_eax = 0x38e38e39u;
    /* 00409779: imul ebp */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebp; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040977b: mov eax, ebp */ r_eax = r_ebp;
    /* 0040977d: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00409780: mov ecx, edx */ r_ecx = r_edx;
    /* 00409782: sar ecx, 3 */ { u32 c = (3u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00409785: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00409787: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 0040978a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0040978c: lea edi, [eax + eax*8] */ r_edi = (u32)(r_eax+r_eax*8);
    /* 0040978f: imul eax, ecx, -0x24 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xffffffdcu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00409792: neg edi */ { u32 x = r_edi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00409794: add edi, ebp */ {  u32 a = r_edi; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00409796: add ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00409798: mov eax, 0x2aaaaaab */ r_eax = 0x2aaaaaabu;
    /* 0040979d: imul ebp */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebp; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040979f: mov eax, ebp */ r_eax = r_ebp;
    /* 004097a1: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004097a4: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004097a6: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 004097a9: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004097ab: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004097ad: sub ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 004097af: mov dword ptr [esp + 0x38], ebp */ W32((u32)(r_esp+0x38u), r_ebp);
    /* 004097b3: fild dword ptr [esp + 0x38] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x38u)));
    /* 004097b7: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 004097b9: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 004097bd: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 004097c2: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004097c7: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 004097cb: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 004097cf: fistp qword ptr [esp + 0x30] */ W64((u32)(r_esp+0x30u), (u64)fx_int64(ST(0))); FPOP();
    /* 004097d3: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 004097d7: mov eax, 0x2aaaaaab */ r_eax = 0x2aaaaaabu;
    /* 004097dc: imul edi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_edi; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004097de: mov eax, edi */ r_eax = r_edi;
    /* 004097e0: movzx ebp, byte ptr [esp + 0x30] */ r_ebp = (u32)R8((u32)(r_esp+0x30u));
    /* 004097e5: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004097e8: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004097ea: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
    /* 004097ee: fild dword ptr [esp + 0x38] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x38u)));
    /* 004097f2: mov dword ptr [esp + 0x38], ebp */ W32((u32)(r_esp+0x38u), r_ebp);
    /* 004097f6: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 004097f8: fild dword ptr [esp + 0x38] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x38u)));
    /* 004097fc: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004097fe: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 00409802: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 00409807: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0040980c: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 00409810: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 00409814: fistp qword ptr [esp + 0x30] */ W64((u32)(r_esp+0x30u), (u64)fx_int64(ST(0))); FPOP();
    /* 00409818: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 0040981c: lea eax, [ecx + ecx*8] */ r_eax = (u32)(r_ecx+r_ecx*8);
    /* 0040981f: fld dword ptr [0x8f997c] */ FPUSH(R_F32((u32)(0x8f997cu)));
    /* 00409825: fld dword ptr [0x8f997c] */ FPUSH(R_F32((u32)(0x8f997cu)));
    /* 0040982b: fdivr st(3) */ ST(0) = ST(3) / ST(0);
    /* 0040982d: movzx edx, byte ptr [esp + 0x30] */ r_edx = (u32)R8((u32)(r_esp+0x30u));
    /* 00409832: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00409836: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409838: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
    /* 0040983c: fild dword ptr [esp + 0x38] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x38u)));
    /* 00409840: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409842: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409844: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409846: fld dword ptr [eax + edi*4 + 0x8f97c0] */ FPUSH(R_F32((u32)(r_eax+r_edi*4+0x8f97c0u)));
    /* 0040984d: fadd st(5), st(0) */ ST(5) = ST(5) + ST(0);
    /* 0040984f: fadd st(4), st(0) */ ST(4) = ST(4) + ST(0);
    /* 00409851: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00409853: fdiv st(4), st(0) */ ST(4) = ST(4) / ST(0);
    /* 00409855: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 00409857: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0040985b: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0040985d: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 00409861: fld dword ptr [0x8f997c] */ FPUSH(R_F32((u32)(0x8f997cu)));
    /* 00409867: fdivr st(3) */ ST(0) = ST(3) / ST(0);
    /* 00409869: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 0040986d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0040986f: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00409871: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00409873: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 00409875: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 00409879: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0040987b: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 0040987f: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00409881: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
L_00409885:; BB(0x00409885);
    /* 00409885: movzx ebp, cl */ r_ebp = (u32)(u8)r_ecx;
    /* 00409888: cmp ebp, ebx */ {  u32 a = r_ebp; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040988a: je 0x409899 */ if (fZ) goto L_00409899;
L_0040988c:; BB(0x0040988c);
    /* 0040988c: mov edx, dword ptr [esp + 0x50] */ r_edx = R32((u32)(r_esp+0x50u));
    /* 00409890: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00409892: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x409897u); f_0082bb60();
    /* 00409897: mov ebx, ebp */ r_ebx = r_ebp;
L_00409899:; BB(0x00409899);
    /* 00409899: push 0x3f7fff58 */ { u32 v = 0x3f7fff58u; r_esp -= 4; W32(r_esp, v); }
    /* 0040989e: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 004098a2: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x4098a7u); f_0082b440();
    /* 004098a7: jmp 0x409640 */ goto L_00409640;
L_004098ac:; BB(0x004098ac);
    /* 004098ac: fld dword ptr [0x8f9978] */ FPUSH(R_F32((u32)(0x8f9978u)));
    /* 004098b2: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 004098b6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004098b8: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 004098ba: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004098bc: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004098c0: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 004098c4: fadd dword ptr [0x8f99d4] */ ST(0) = ST(0) + R_F32((u32)(0x8f99d4u));
    /* 004098ca: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 004098ce: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004098d0: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 004098d4: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 004098dc: mov eax, 0x38e38e39 */ r_eax = 0x38e38e39u;
    /* 004098e1: imul ebp */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebp; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004098e3: sar ebp, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebp = r;  } }
    /* 004098e6: mov ecx, edx */ r_ecx = r_edx;
    /* 004098e8: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 004098f0: sar ecx, 3 */ { u32 c = (3u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 004098f3: sub ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004098f5: mov dword ptr [esp + 0x18], 0 */ W32((u32)(r_esp+0x18u), 0x0u);
    /* 004098fd: mov dword ptr [esp + 0x1c], 0 */ W32((u32)(r_esp+0x1cu), 0x0u);
    /* 00409905: jmp 0x409885 */ goto L_00409885;
L_0040990a:; BB(0x0040990a);
    /* 0040990a: mov ebp, dword ptr [esp + 0x44] */ r_ebp = R32((u32)(r_esp+0x44u));
    /* 0040990e: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x409913u); f_004ac444();
    /* 00409913: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 00409917: mov edx, dword ptr [eax + 0x1928] */ r_edx = R32((u32)(r_eax+0x1928u));
    /* 0040991d: jmp 0x409606 */ goto L_00409606;
L_00409922:; BB(0x00409922);
    /* 00409922: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x409927u); f_0082dab0();
    /* 00409927: add esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0040992a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0040992b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040992c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0040992d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0040992e: ret  */ FN_RET(0x00409404); r_esp += 4; return;
L_0040992f:; BB(0x0040992f);
    /* 0040992f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00409931: jmp 0x409520 */ goto L_00409520;
}

void f_004096a3(void)
{
    FN_ENTER(0x004096a3);
    goto L_004096a3;
L_00409432:; BB(0x00409432);
    /* 00409432: cmp ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00409434: jae 0x409922 */ if (!fC) goto L_00409922;
L_0040943a:; BB(0x0040943a);
    /* 0040943a: mov ecx, dword ptr [esp + 0x40] */ r_ecx = R32((u32)(r_esp+0x40u));
    /* 0040943e: fld dword ptr [0x8f99a4] */ FPUSH(R_F32((u32)(0x8f99a4u)));
    /* 00409444: fld dword ptr [ecx + ebp*8 + 0x2c] */ FPUSH(R_F32((u32)(r_ecx+r_ebp*8+0x2cu)));
    /* 00409448: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0040944a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0040944c: fstp dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 00409450: mov edi, 0xffffffff */ r_edi = 0xffffffffu;
    /* 00409455: lea ebx, [ebp + ebp] */ r_ebx = (u32)(r_ebp+r_ebp);
    /* 00409459: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0040945a: jbe 0x40946b */ if ((fC||fZ)) goto L_0040946b;
L_0040945c:; BB(0x0040945c);
    /* 0040945c: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 00409460: fcomp dword ptr [0x8f99a0] */ fx_compare(ST(0), R_F32((u32)(0x8f99a0u))); FPOP();
    /* 00409466: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00409468: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00409469: jb 0x409470 */ if (fC) goto L_00409470;
L_0040946b:; BB(0x0040946b);
    /* 0040946b: mov edi, 0xffffff */ r_edi = 0xffffffu;
L_00409470:; BB(0x00409470);
    /* 00409470: fcom dword ptr [esp + 0x58] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x58u))); 
    /* 00409474: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00409476: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00409477: jae 0x4094c5 */ if (!fC) goto L_004094c5;
L_00409479:; BB(0x00409479);
    /* 00409479: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 0040947d: fcomp dword ptr [0x8f999c] */ fx_compare(ST(0), R_F32((u32)(0x8f999cu))); FPOP();
    /* 00409483: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00409485: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00409486: jae 0x4094c5 */ if (!fC) goto L_004094c5;
L_00409488:; BB(0x00409488);
    /* 00409488: fld dword ptr [0x8f9994] */ FPUSH(R_F32((u32)(0x8f9994u)));
    /* 0040948e: fadd dword ptr [esp + 0x58] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x58u));
    /* 00409492: fmul dword ptr [0x8f9998] */ ST(0) = ST(0) * R_F32((u32)(0x8f9998u));
    /* 00409498: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 0040949a: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 0040949e: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 004094a3: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004094a8: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 004094ac: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 004094b0: fistp qword ptr [esp + 0x30] */ W64((u32)(r_esp+0x30u), (u64)fx_int64(ST(0))); FPOP();
    /* 004094b4: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 004094b8: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 004094bc: shl edi, 0x18 */ { u32 c = (24u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 004094bf: or edi, 0xffffff */ {  u32 a = r_edi; u32 b = 0xffffffu; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
L_004094c5:; BB(0x004094c5);
    /* 004094c5: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 004094c9: fcomp dword ptr [0x8f9990] */ fx_compare(ST(0), R_F32((u32)(0x8f9990u))); FPOP();
    /* 004094cf: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004094d1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004094d2: jbe 0x409520 */ if ((fC||fZ)) goto L_00409520;
L_004094d4:; BB(0x004094d4);
    /* 004094d4: fld dword ptr [0x8f99a0] */ FPUSH(R_F32((u32)(0x8f99a0u)));
    /* 004094da: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 004094de: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 004094e0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004094e2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004094e3: jae 0x40992f */ if (!fC) goto L_0040992f;
L_004094e9:; BB(0x004094e9);
    /* 004094e9: fsub dword ptr [esp + 0x58] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x58u));
    /* 004094ed: fmul dword ptr [0x8f9998] */ ST(0) = ST(0) * R_F32((u32)(0x8f9998u));
    /* 004094f3: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 004094f5: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 004094f9: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 004094fe: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00409503: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 00409507: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 0040950b: fistp qword ptr [esp + 0x30] */ W64((u32)(r_esp+0x30u), (u64)fx_int64(ST(0))); FPOP();
    /* 0040950f: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 00409513: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 00409517: shl edi, 0x18 */ { u32 c = (24u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 0040951a: or edi, 0xffffff */ {  u32 a = r_edi; u32 b = 0xffffffu; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
L_00409520:; BB(0x00409520);
    /* 00409520: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00409522: mov eax, dword ptr [0xa3ad40] */ r_eax = R32((u32)(0xa3ad40u));
    /* 00409527: mov esi, dword ptr [eax + ebp*4] */ r_esi = R32((u32)(r_eax+r_ebp*4));
    /* 0040952a: movsx eax, byte ptr [esi] */ r_eax = (u32)(i32)(i8)R8((u32)(r_esi));
    /* 0040952d: cmp eax, 0x23 */ {  u32 a = r_eax; u32 b = 0x23u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409530: je 0x4095fe */ if (fZ) goto L_004095fe;
L_00409536:; BB(0x00409536);
    /* 00409536: cmp eax, 0x21 */ {  u32 a = r_eax; u32 b = 0x21u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409539: jne 0x409581 */ if (!fZ) goto L_00409581;
L_0040953b:; BB(0x0040953b);
    /* 0040953b: mov ecx, dword ptr [0xa3ad48] */ r_ecx = R32((u32)(0xa3ad48u));
    /* 00409541: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x409546u); f_00829cc8();
    /* 00409546: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0040954b: call 0x82bb30 */ r_esp -= 4; W32(r_esp, 0x409550u); f_0082bb30();
    /* 00409550: mov ecx, 3 */ r_ecx = 0x3u;
    /* 00409555: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0040955a: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x40955fu); f_0082bb60();
    /* 0040955f: push 0x3f7fff58 */ { u32 v = 0x3f7fff58u; r_esp -= 4; W32(r_esp, v); }
    /* 00409564: mov ecx, dword ptr [esp + 0x50] */ r_ecx = R32((u32)(r_esp+0x50u));
    /* 00409568: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x40956du); f_0082b440();
    /* 0040956d: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x409572u); f_004ac444();
    /* 00409572: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 00409576: mov edx, dword ptr [eax + 0x1928] */ r_edx = R32((u32)(r_eax+0x1928u));
    /* 0040957c: jmp 0x409606 */ goto L_00409606;
L_00409581:; BB(0x00409581);
    /* 00409581: cmp eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409584: jne 0x4095c9 */ if (!fZ) goto L_004095c9;
L_00409586:; BB(0x00409586);
    /* 00409586: mov ecx, dword ptr [0xa3ad48] */ r_ecx = R32((u32)(0xa3ad48u));
    /* 0040958c: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x409591u); f_00829cc8();
    /* 00409591: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00409596: call 0x82bb30 */ r_esp -= 4; W32(r_esp, 0x40959bu); f_0082bb30();
    /* 0040959b: mov ecx, 4 */ r_ecx = 0x4u;
    /* 004095a0: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 004095a5: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x4095aau); f_0082bb60();
    /* 004095aa: push 0x3f7fff58 */ { u32 v = 0x3f7fff58u; r_esp -= 4; W32(r_esp, v); }
    /* 004095af: mov ecx, dword ptr [esp + 0x4c] */ r_ecx = R32((u32)(r_esp+0x4cu));
    /* 004095b3: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x4095b8u); f_0082b440();
    /* 004095b8: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x4095bdu); f_004ac444();
    /* 004095bd: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 004095c1: mov edx, dword ptr [eax + 0x1928] */ r_edx = R32((u32)(r_eax+0x1928u));
    /* 004095c7: jmp 0x409606 */ goto L_00409606;
L_004095c9:; BB(0x004095c9);
    /* 004095c9: cmp edi, 0xffffff */ {  u32 a = r_edi; u32 b = 0xffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004095cf: je 0x409606 */ if (fZ) goto L_00409606;
L_004095d1:; BB(0x004095d1);
    /* 004095d1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004095d2: call 0x7087dc */ r_esp -= 4; W32(r_esp, 0x4095d7u); f_007087dc();
    /* 004095d7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004095d8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004095d9: push 0x3f7fff58 */ { u32 v = 0x3f7fff58u; r_esp -= 4; W32(r_esp, v); }
    /* 004095de: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 004095e2: push dword ptr [eax + ebx*4 + 0x2c] */ { u32 v = R32((u32)(r_eax+r_ebx*4+0x2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004095e6: push dword ptr [eax + ebp*8 + 0x28] */ { u32 v = R32((u32)(r_eax+r_ebp*8+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 004095ea: call 0x789248 */ r_esp -= 4; W32(r_esp, 0x4095efu); f_00789248();
    /* 004095ef: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004095f2: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 004095f6: mov edx, dword ptr [eax + 0x1928] */ r_edx = R32((u32)(r_eax+0x1928u));
    /* 004095fc: jmp 0x409606 */ goto L_00409606;
L_004095fe:; BB(0x004095fe);
    /* 004095fe: cmp edi, 0xffffff */ {  u32 a = r_edi; u32 b = 0xffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409604: jne 0x40960e */ if (!fZ) goto L_0040960e;
L_00409606:; BB(0x00409606);
    /* 00409606: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00409609: jmp 0x409432 */ goto L_00409432;
L_0040960e:; BB(0x0040960e);
    /* 0040960e: mov eax, ecx */ r_eax = r_ecx;
    /* 00409610: fld dword ptr [eax + ebp*8 + 0x28] */ FPUSH(R_F32((u32)(r_eax+r_ebp*8+0x28u)));
    /* 00409614: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 00409618: mov ebx, 0xfe */ r_ebx = 0xfeu;
    /* 0040961d: call 0x7a9044 */ r_esp -= 4; W32(r_esp, 0x409622u); f_007a9044();
    /* 00409622: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00409627: call 0x82bb30 */ r_esp -= 4; W32(r_esp, 0x40962cu); f_0082bb30();
    /* 0040962c: push dword ptr [0xa3ad48] */ { u32 v = R32((u32)(0xa3ad48u)); r_esp -= 4; W32(r_esp, v); }
    /* 00409632: call 0x81a9b8 */ r_esp -= 4; W32(r_esp, 0x409637u); f_0081a9b8();
    /* 00409637: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00409638: mov dword ptr [esp + 0x50], edi */ W32((u32)(r_esp+0x50u), r_edi);
    /* 0040963c: mov dword ptr [esp + 0x44], ebp */ W32((u32)(r_esp+0x44u), r_ebp);
L_00409640:; BB(0x00409640);
    /* 00409640: movsx ebp, byte ptr [esi] */ r_ebp = (u32)(i32)(i8)R8((u32)(r_esi));
    /* 00409643: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409645: je 0x40990a */ if (fZ) goto L_0040990a;
L_0040964b:; BB(0x0040964b);
    /* 0040964b: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 00409651: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00409654: cmp ebp, 0x23 */ {  u32 a = r_ebp; u32 b = 0x23u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409657: je 0x409640 */ if (fZ) goto L_00409640;
L_00409659:; BB(0x00409659);
    /* 00409659: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 0040965d: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00409660: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00409661: call 0x85824c */ r_esp -= 4; W32(r_esp, 0x409666u); f_0085824c();
    /* 00409666: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00409667: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409669: je 0x409677 */ if (fZ) goto L_00409677;
L_0040966b:; BB(0x0040966b);
    /* 0040966b: fld dword ptr [0x8f9980] */ FPUSH(R_F32((u32)(0x8f9980u)));
    /* 00409671: fadd dword ptr [esp + 0x58] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x58u));
    /* 00409675: jmp 0x40967b */ goto L_0040967b;
L_00409677:; BB(0x00409677);
    /* 00409677: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
L_0040967b:; BB(0x0040967b);
    /* 0040967b: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0040967f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00409680: call 0x858339 */ r_esp -= 4; W32(r_esp, 0x409685u); f_00858339();
    /* 00409685: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00409686: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409688: jne 0x409710 */ if (!fZ) goto L_00409710;
L_0040968e:; BB(0x0040968e);
    /* 0040968e: add ebp, -0x26 */ {  u32 a = r_ebp; u32 b = 0xffffffdau; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00409691: cmp ebp, 0x58 */ {  u32 a = r_ebp; u32 b = 0x58u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00409694: ja 0x409709 */ if ((!fC&&!fZ)) goto L_00409709;
L_0040969a:; BB(0x0040969a);
    /* 0040969a: mov eax, dword ptr [ebp*4 + 0x8f94c0] */ r_eax = R32((u32)(r_ebp*4+0x8f94c0u));
    /* 004096a1: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_004096a3:; BB(0x004096a3);
    /* 004096a3: mov ebp, 0x20 */ r_ebp = 0x20u;
    /* 004096a8: jmp 0x409750 */ goto L_00409750;
L_00409709:; BB(0x00409709);
    /* 00409709: mov ebp, 0x52 */ r_ebp = 0x52u;
    /* 0040970e: jmp 0x409750 */ goto L_00409750;
L_00409710:; BB(0x00409710);
    /* 00409710: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00409711: call 0x858212 */ r_esp -= 4; W32(r_esp, 0x409716u); f_00858212();
    /* 00409716: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00409717: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409719: je 0x409726 */ if (fZ) goto L_00409726;
L_0040971b:; BB(0x0040971b);
    /* 0040971b: add ebp, -0x41 */ {  u32 a = r_ebp; u32 b = 0xffffffbfu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0040971e: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 00409724: jmp 0x409750 */ goto L_00409750;
L_00409726:; BB(0x00409726);
    /* 00409726: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00409727: call 0x85824c */ r_esp -= 4; W32(r_esp, 0x40972cu); f_0085824c();
    /* 0040972c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0040972d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040972f: je 0x40973c */ if (fZ) goto L_0040973c;
L_00409731:; BB(0x00409731);
    /* 00409731: add ebp, -0x3d */ {  u32 a = r_ebp; u32 b = 0xffffffc3u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00409734: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 0040973a: jmp 0x409750 */ goto L_00409750;
L_0040973c:; BB(0x0040973c);
    /* 0040973c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040973d: call 0x858286 */ r_esp -= 4; W32(r_esp, 0x409742u); f_00858286();
    /* 00409742: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00409743: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409745: je 0x409750 */ if (fZ) goto L_00409750;
L_00409747:; BB(0x00409747);
    /* 00409747: add ebp, 0xe */ {  u32 a = r_ebp; u32 b = 0xeu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0040974a: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
L_00409750:; BB(0x00409750);
    /* 00409750: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00409753: cmp ebp, 0x52 */ {  u32 a = r_ebp; u32 b = 0x52u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409756: je 0x4098ac */ if (fZ) goto L_004098ac;
L_0040975c:; BB(0x0040975c);
    /* 0040975c: fld dword ptr [0x8f9988] */ FPUSH(R_F32((u32)(0x8f9988u)));
    /* 00409762: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00409766: fld dword ptr [0x8f99d4] */ FPUSH(R_F32((u32)(0x8f99d4u)));
    /* 0040976c: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 0040976e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00409770: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00409774: mov eax, 0x38e38e39 */ r_eax = 0x38e38e39u;
    /* 00409779: imul ebp */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebp; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040977b: mov eax, ebp */ r_eax = r_ebp;
    /* 0040977d: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00409780: mov ecx, edx */ r_ecx = r_edx;
    /* 00409782: sar ecx, 3 */ { u32 c = (3u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00409785: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00409787: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 0040978a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0040978c: lea edi, [eax + eax*8] */ r_edi = (u32)(r_eax+r_eax*8);
    /* 0040978f: imul eax, ecx, -0x24 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xffffffdcu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00409792: neg edi */ { u32 x = r_edi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00409794: add edi, ebp */ {  u32 a = r_edi; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00409796: add ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00409798: mov eax, 0x2aaaaaab */ r_eax = 0x2aaaaaabu;
    /* 0040979d: imul ebp */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebp; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040979f: mov eax, ebp */ r_eax = r_ebp;
    /* 004097a1: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004097a4: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004097a6: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 004097a9: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004097ab: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004097ad: sub ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 004097af: mov dword ptr [esp + 0x38], ebp */ W32((u32)(r_esp+0x38u), r_ebp);
    /* 004097b3: fild dword ptr [esp + 0x38] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x38u)));
    /* 004097b7: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 004097b9: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 004097bd: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 004097c2: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004097c7: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 004097cb: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 004097cf: fistp qword ptr [esp + 0x30] */ W64((u32)(r_esp+0x30u), (u64)fx_int64(ST(0))); FPOP();
    /* 004097d3: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 004097d7: mov eax, 0x2aaaaaab */ r_eax = 0x2aaaaaabu;
    /* 004097dc: imul edi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_edi; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004097de: mov eax, edi */ r_eax = r_edi;
    /* 004097e0: movzx ebp, byte ptr [esp + 0x30] */ r_ebp = (u32)R8((u32)(r_esp+0x30u));
    /* 004097e5: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004097e8: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004097ea: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
    /* 004097ee: fild dword ptr [esp + 0x38] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x38u)));
    /* 004097f2: mov dword ptr [esp + 0x38], ebp */ W32((u32)(r_esp+0x38u), r_ebp);
    /* 004097f6: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 004097f8: fild dword ptr [esp + 0x38] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x38u)));
    /* 004097fc: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004097fe: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 00409802: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 00409807: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0040980c: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 00409810: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 00409814: fistp qword ptr [esp + 0x30] */ W64((u32)(r_esp+0x30u), (u64)fx_int64(ST(0))); FPOP();
    /* 00409818: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 0040981c: lea eax, [ecx + ecx*8] */ r_eax = (u32)(r_ecx+r_ecx*8);
    /* 0040981f: fld dword ptr [0x8f997c] */ FPUSH(R_F32((u32)(0x8f997cu)));
    /* 00409825: fld dword ptr [0x8f997c] */ FPUSH(R_F32((u32)(0x8f997cu)));
    /* 0040982b: fdivr st(3) */ ST(0) = ST(3) / ST(0);
    /* 0040982d: movzx edx, byte ptr [esp + 0x30] */ r_edx = (u32)R8((u32)(r_esp+0x30u));
    /* 00409832: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00409836: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409838: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
    /* 0040983c: fild dword ptr [esp + 0x38] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x38u)));
    /* 00409840: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409842: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409844: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409846: fld dword ptr [eax + edi*4 + 0x8f97c0] */ FPUSH(R_F32((u32)(r_eax+r_edi*4+0x8f97c0u)));
    /* 0040984d: fadd st(5), st(0) */ ST(5) = ST(5) + ST(0);
    /* 0040984f: fadd st(4), st(0) */ ST(4) = ST(4) + ST(0);
    /* 00409851: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00409853: fdiv st(4), st(0) */ ST(4) = ST(4) / ST(0);
    /* 00409855: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 00409857: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0040985b: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0040985d: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 00409861: fld dword ptr [0x8f997c] */ FPUSH(R_F32((u32)(0x8f997cu)));
    /* 00409867: fdivr st(3) */ ST(0) = ST(3) / ST(0);
    /* 00409869: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 0040986d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0040986f: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00409871: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00409873: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 00409875: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 00409879: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0040987b: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 0040987f: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00409881: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
L_00409885:; BB(0x00409885);
    /* 00409885: movzx ebp, cl */ r_ebp = (u32)(u8)r_ecx;
    /* 00409888: cmp ebp, ebx */ {  u32 a = r_ebp; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040988a: je 0x409899 */ if (fZ) goto L_00409899;
L_0040988c:; BB(0x0040988c);
    /* 0040988c: mov edx, dword ptr [esp + 0x50] */ r_edx = R32((u32)(r_esp+0x50u));
    /* 00409890: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00409892: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x409897u); f_0082bb60();
    /* 00409897: mov ebx, ebp */ r_ebx = r_ebp;
L_00409899:; BB(0x00409899);
    /* 00409899: push 0x3f7fff58 */ { u32 v = 0x3f7fff58u; r_esp -= 4; W32(r_esp, v); }
    /* 0040989e: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 004098a2: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x4098a7u); f_0082b440();
    /* 004098a7: jmp 0x409640 */ goto L_00409640;
L_004098ac:; BB(0x004098ac);
    /* 004098ac: fld dword ptr [0x8f9978] */ FPUSH(R_F32((u32)(0x8f9978u)));
    /* 004098b2: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 004098b6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004098b8: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 004098ba: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004098bc: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004098c0: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 004098c4: fadd dword ptr [0x8f99d4] */ ST(0) = ST(0) + R_F32((u32)(0x8f99d4u));
    /* 004098ca: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 004098ce: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004098d0: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 004098d4: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 004098dc: mov eax, 0x38e38e39 */ r_eax = 0x38e38e39u;
    /* 004098e1: imul ebp */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebp; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004098e3: sar ebp, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebp = r;  } }
    /* 004098e6: mov ecx, edx */ r_ecx = r_edx;
    /* 004098e8: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 004098f0: sar ecx, 3 */ { u32 c = (3u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 004098f3: sub ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004098f5: mov dword ptr [esp + 0x18], 0 */ W32((u32)(r_esp+0x18u), 0x0u);
    /* 004098fd: mov dword ptr [esp + 0x1c], 0 */ W32((u32)(r_esp+0x1cu), 0x0u);
    /* 00409905: jmp 0x409885 */ goto L_00409885;
L_0040990a:; BB(0x0040990a);
    /* 0040990a: mov ebp, dword ptr [esp + 0x44] */ r_ebp = R32((u32)(r_esp+0x44u));
    /* 0040990e: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x409913u); f_004ac444();
    /* 00409913: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 00409917: mov edx, dword ptr [eax + 0x1928] */ r_edx = R32((u32)(r_eax+0x1928u));
    /* 0040991d: jmp 0x409606 */ goto L_00409606;
L_00409922:; BB(0x00409922);
    /* 00409922: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x409927u); f_0082dab0();
    /* 00409927: add esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0040992a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0040992b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040992c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0040992d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0040992e: ret  */ FN_RET(0x004096a3); r_esp += 4; return;
L_0040992f:; BB(0x0040992f);
    /* 0040992f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00409931: jmp 0x409520 */ goto L_00409520;
}

void f_004096ad(void)
{
    FN_ENTER(0x004096ad);
    goto L_004096ad;
L_00409432:; BB(0x00409432);
    /* 00409432: cmp ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00409434: jae 0x409922 */ if (!fC) goto L_00409922;
L_0040943a:; BB(0x0040943a);
    /* 0040943a: mov ecx, dword ptr [esp + 0x40] */ r_ecx = R32((u32)(r_esp+0x40u));
    /* 0040943e: fld dword ptr [0x8f99a4] */ FPUSH(R_F32((u32)(0x8f99a4u)));
    /* 00409444: fld dword ptr [ecx + ebp*8 + 0x2c] */ FPUSH(R_F32((u32)(r_ecx+r_ebp*8+0x2cu)));
    /* 00409448: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0040944a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0040944c: fstp dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 00409450: mov edi, 0xffffffff */ r_edi = 0xffffffffu;
    /* 00409455: lea ebx, [ebp + ebp] */ r_ebx = (u32)(r_ebp+r_ebp);
    /* 00409459: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0040945a: jbe 0x40946b */ if ((fC||fZ)) goto L_0040946b;
L_0040945c:; BB(0x0040945c);
    /* 0040945c: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 00409460: fcomp dword ptr [0x8f99a0] */ fx_compare(ST(0), R_F32((u32)(0x8f99a0u))); FPOP();
    /* 00409466: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00409468: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00409469: jb 0x409470 */ if (fC) goto L_00409470;
L_0040946b:; BB(0x0040946b);
    /* 0040946b: mov edi, 0xffffff */ r_edi = 0xffffffu;
L_00409470:; BB(0x00409470);
    /* 00409470: fcom dword ptr [esp + 0x58] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x58u))); 
    /* 00409474: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00409476: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00409477: jae 0x4094c5 */ if (!fC) goto L_004094c5;
L_00409479:; BB(0x00409479);
    /* 00409479: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 0040947d: fcomp dword ptr [0x8f999c] */ fx_compare(ST(0), R_F32((u32)(0x8f999cu))); FPOP();
    /* 00409483: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00409485: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00409486: jae 0x4094c5 */ if (!fC) goto L_004094c5;
L_00409488:; BB(0x00409488);
    /* 00409488: fld dword ptr [0x8f9994] */ FPUSH(R_F32((u32)(0x8f9994u)));
    /* 0040948e: fadd dword ptr [esp + 0x58] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x58u));
    /* 00409492: fmul dword ptr [0x8f9998] */ ST(0) = ST(0) * R_F32((u32)(0x8f9998u));
    /* 00409498: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 0040949a: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 0040949e: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 004094a3: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004094a8: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 004094ac: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 004094b0: fistp qword ptr [esp + 0x30] */ W64((u32)(r_esp+0x30u), (u64)fx_int64(ST(0))); FPOP();
    /* 004094b4: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 004094b8: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 004094bc: shl edi, 0x18 */ { u32 c = (24u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 004094bf: or edi, 0xffffff */ {  u32 a = r_edi; u32 b = 0xffffffu; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
L_004094c5:; BB(0x004094c5);
    /* 004094c5: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 004094c9: fcomp dword ptr [0x8f9990] */ fx_compare(ST(0), R_F32((u32)(0x8f9990u))); FPOP();
    /* 004094cf: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004094d1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004094d2: jbe 0x409520 */ if ((fC||fZ)) goto L_00409520;
L_004094d4:; BB(0x004094d4);
    /* 004094d4: fld dword ptr [0x8f99a0] */ FPUSH(R_F32((u32)(0x8f99a0u)));
    /* 004094da: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 004094de: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 004094e0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004094e2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004094e3: jae 0x40992f */ if (!fC) goto L_0040992f;
L_004094e9:; BB(0x004094e9);
    /* 004094e9: fsub dword ptr [esp + 0x58] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x58u));
    /* 004094ed: fmul dword ptr [0x8f9998] */ ST(0) = ST(0) * R_F32((u32)(0x8f9998u));
    /* 004094f3: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 004094f5: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 004094f9: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 004094fe: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00409503: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 00409507: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 0040950b: fistp qword ptr [esp + 0x30] */ W64((u32)(r_esp+0x30u), (u64)fx_int64(ST(0))); FPOP();
    /* 0040950f: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 00409513: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 00409517: shl edi, 0x18 */ { u32 c = (24u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 0040951a: or edi, 0xffffff */ {  u32 a = r_edi; u32 b = 0xffffffu; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
L_00409520:; BB(0x00409520);
    /* 00409520: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00409522: mov eax, dword ptr [0xa3ad40] */ r_eax = R32((u32)(0xa3ad40u));
    /* 00409527: mov esi, dword ptr [eax + ebp*4] */ r_esi = R32((u32)(r_eax+r_ebp*4));
    /* 0040952a: movsx eax, byte ptr [esi] */ r_eax = (u32)(i32)(i8)R8((u32)(r_esi));
    /* 0040952d: cmp eax, 0x23 */ {  u32 a = r_eax; u32 b = 0x23u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409530: je 0x4095fe */ if (fZ) goto L_004095fe;
L_00409536:; BB(0x00409536);
    /* 00409536: cmp eax, 0x21 */ {  u32 a = r_eax; u32 b = 0x21u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409539: jne 0x409581 */ if (!fZ) goto L_00409581;
L_0040953b:; BB(0x0040953b);
    /* 0040953b: mov ecx, dword ptr [0xa3ad48] */ r_ecx = R32((u32)(0xa3ad48u));
    /* 00409541: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x409546u); f_00829cc8();
    /* 00409546: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0040954b: call 0x82bb30 */ r_esp -= 4; W32(r_esp, 0x409550u); f_0082bb30();
    /* 00409550: mov ecx, 3 */ r_ecx = 0x3u;
    /* 00409555: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0040955a: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x40955fu); f_0082bb60();
    /* 0040955f: push 0x3f7fff58 */ { u32 v = 0x3f7fff58u; r_esp -= 4; W32(r_esp, v); }
    /* 00409564: mov ecx, dword ptr [esp + 0x50] */ r_ecx = R32((u32)(r_esp+0x50u));
    /* 00409568: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x40956du); f_0082b440();
    /* 0040956d: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x409572u); f_004ac444();
    /* 00409572: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 00409576: mov edx, dword ptr [eax + 0x1928] */ r_edx = R32((u32)(r_eax+0x1928u));
    /* 0040957c: jmp 0x409606 */ goto L_00409606;
L_00409581:; BB(0x00409581);
    /* 00409581: cmp eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409584: jne 0x4095c9 */ if (!fZ) goto L_004095c9;
L_00409586:; BB(0x00409586);
    /* 00409586: mov ecx, dword ptr [0xa3ad48] */ r_ecx = R32((u32)(0xa3ad48u));
    /* 0040958c: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x409591u); f_00829cc8();
    /* 00409591: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00409596: call 0x82bb30 */ r_esp -= 4; W32(r_esp, 0x40959bu); f_0082bb30();
    /* 0040959b: mov ecx, 4 */ r_ecx = 0x4u;
    /* 004095a0: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 004095a5: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x4095aau); f_0082bb60();
    /* 004095aa: push 0x3f7fff58 */ { u32 v = 0x3f7fff58u; r_esp -= 4; W32(r_esp, v); }
    /* 004095af: mov ecx, dword ptr [esp + 0x4c] */ r_ecx = R32((u32)(r_esp+0x4cu));
    /* 004095b3: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x4095b8u); f_0082b440();
    /* 004095b8: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x4095bdu); f_004ac444();
    /* 004095bd: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 004095c1: mov edx, dword ptr [eax + 0x1928] */ r_edx = R32((u32)(r_eax+0x1928u));
    /* 004095c7: jmp 0x409606 */ goto L_00409606;
L_004095c9:; BB(0x004095c9);
    /* 004095c9: cmp edi, 0xffffff */ {  u32 a = r_edi; u32 b = 0xffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004095cf: je 0x409606 */ if (fZ) goto L_00409606;
L_004095d1:; BB(0x004095d1);
    /* 004095d1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004095d2: call 0x7087dc */ r_esp -= 4; W32(r_esp, 0x4095d7u); f_007087dc();
    /* 004095d7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004095d8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004095d9: push 0x3f7fff58 */ { u32 v = 0x3f7fff58u; r_esp -= 4; W32(r_esp, v); }
    /* 004095de: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 004095e2: push dword ptr [eax + ebx*4 + 0x2c] */ { u32 v = R32((u32)(r_eax+r_ebx*4+0x2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004095e6: push dword ptr [eax + ebp*8 + 0x28] */ { u32 v = R32((u32)(r_eax+r_ebp*8+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 004095ea: call 0x789248 */ r_esp -= 4; W32(r_esp, 0x4095efu); f_00789248();
    /* 004095ef: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004095f2: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 004095f6: mov edx, dword ptr [eax + 0x1928] */ r_edx = R32((u32)(r_eax+0x1928u));
    /* 004095fc: jmp 0x409606 */ goto L_00409606;
L_004095fe:; BB(0x004095fe);
    /* 004095fe: cmp edi, 0xffffff */ {  u32 a = r_edi; u32 b = 0xffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409604: jne 0x40960e */ if (!fZ) goto L_0040960e;
L_00409606:; BB(0x00409606);
    /* 00409606: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00409609: jmp 0x409432 */ goto L_00409432;
L_0040960e:; BB(0x0040960e);
    /* 0040960e: mov eax, ecx */ r_eax = r_ecx;
    /* 00409610: fld dword ptr [eax + ebp*8 + 0x28] */ FPUSH(R_F32((u32)(r_eax+r_ebp*8+0x28u)));
    /* 00409614: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 00409618: mov ebx, 0xfe */ r_ebx = 0xfeu;
    /* 0040961d: call 0x7a9044 */ r_esp -= 4; W32(r_esp, 0x409622u); f_007a9044();
    /* 00409622: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00409627: call 0x82bb30 */ r_esp -= 4; W32(r_esp, 0x40962cu); f_0082bb30();
    /* 0040962c: push dword ptr [0xa3ad48] */ { u32 v = R32((u32)(0xa3ad48u)); r_esp -= 4; W32(r_esp, v); }
    /* 00409632: call 0x81a9b8 */ r_esp -= 4; W32(r_esp, 0x409637u); f_0081a9b8();
    /* 00409637: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00409638: mov dword ptr [esp + 0x50], edi */ W32((u32)(r_esp+0x50u), r_edi);
    /* 0040963c: mov dword ptr [esp + 0x44], ebp */ W32((u32)(r_esp+0x44u), r_ebp);
L_00409640:; BB(0x00409640);
    /* 00409640: movsx ebp, byte ptr [esi] */ r_ebp = (u32)(i32)(i8)R8((u32)(r_esi));
    /* 00409643: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409645: je 0x40990a */ if (fZ) goto L_0040990a;
L_0040964b:; BB(0x0040964b);
    /* 0040964b: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 00409651: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00409654: cmp ebp, 0x23 */ {  u32 a = r_ebp; u32 b = 0x23u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409657: je 0x409640 */ if (fZ) goto L_00409640;
L_00409659:; BB(0x00409659);
    /* 00409659: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 0040965d: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00409660: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00409661: call 0x85824c */ r_esp -= 4; W32(r_esp, 0x409666u); f_0085824c();
    /* 00409666: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00409667: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409669: je 0x409677 */ if (fZ) goto L_00409677;
L_0040966b:; BB(0x0040966b);
    /* 0040966b: fld dword ptr [0x8f9980] */ FPUSH(R_F32((u32)(0x8f9980u)));
    /* 00409671: fadd dword ptr [esp + 0x58] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x58u));
    /* 00409675: jmp 0x40967b */ goto L_0040967b;
L_00409677:; BB(0x00409677);
    /* 00409677: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
L_0040967b:; BB(0x0040967b);
    /* 0040967b: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0040967f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00409680: call 0x858339 */ r_esp -= 4; W32(r_esp, 0x409685u); f_00858339();
    /* 00409685: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00409686: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409688: jne 0x409710 */ if (!fZ) goto L_00409710;
L_0040968e:; BB(0x0040968e);
    /* 0040968e: add ebp, -0x26 */ {  u32 a = r_ebp; u32 b = 0xffffffdau; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00409691: cmp ebp, 0x58 */ {  u32 a = r_ebp; u32 b = 0x58u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00409694: ja 0x409709 */ if ((!fC&&!fZ)) goto L_00409709;
L_0040969a:; BB(0x0040969a);
    /* 0040969a: mov eax, dword ptr [ebp*4 + 0x8f94c0] */ r_eax = R32((u32)(r_ebp*4+0x8f94c0u));
    /* 004096a1: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_004096ad:; BB(0x004096ad);
    /* 004096ad: mov ebp, 0x21 */ r_ebp = 0x21u;
    /* 004096b2: jmp 0x409750 */ goto L_00409750;
L_00409709:; BB(0x00409709);
    /* 00409709: mov ebp, 0x52 */ r_ebp = 0x52u;
    /* 0040970e: jmp 0x409750 */ goto L_00409750;
L_00409710:; BB(0x00409710);
    /* 00409710: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00409711: call 0x858212 */ r_esp -= 4; W32(r_esp, 0x409716u); f_00858212();
    /* 00409716: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00409717: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409719: je 0x409726 */ if (fZ) goto L_00409726;
L_0040971b:; BB(0x0040971b);
    /* 0040971b: add ebp, -0x41 */ {  u32 a = r_ebp; u32 b = 0xffffffbfu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0040971e: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 00409724: jmp 0x409750 */ goto L_00409750;
L_00409726:; BB(0x00409726);
    /* 00409726: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00409727: call 0x85824c */ r_esp -= 4; W32(r_esp, 0x40972cu); f_0085824c();
    /* 0040972c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0040972d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040972f: je 0x40973c */ if (fZ) goto L_0040973c;
L_00409731:; BB(0x00409731);
    /* 00409731: add ebp, -0x3d */ {  u32 a = r_ebp; u32 b = 0xffffffc3u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00409734: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 0040973a: jmp 0x409750 */ goto L_00409750;
L_0040973c:; BB(0x0040973c);
    /* 0040973c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040973d: call 0x858286 */ r_esp -= 4; W32(r_esp, 0x409742u); f_00858286();
    /* 00409742: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00409743: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409745: je 0x409750 */ if (fZ) goto L_00409750;
L_00409747:; BB(0x00409747);
    /* 00409747: add ebp, 0xe */ {  u32 a = r_ebp; u32 b = 0xeu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0040974a: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
L_00409750:; BB(0x00409750);
    /* 00409750: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00409753: cmp ebp, 0x52 */ {  u32 a = r_ebp; u32 b = 0x52u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409756: je 0x4098ac */ if (fZ) goto L_004098ac;
L_0040975c:; BB(0x0040975c);
    /* 0040975c: fld dword ptr [0x8f9988] */ FPUSH(R_F32((u32)(0x8f9988u)));
    /* 00409762: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00409766: fld dword ptr [0x8f99d4] */ FPUSH(R_F32((u32)(0x8f99d4u)));
    /* 0040976c: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 0040976e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00409770: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00409774: mov eax, 0x38e38e39 */ r_eax = 0x38e38e39u;
    /* 00409779: imul ebp */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebp; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040977b: mov eax, ebp */ r_eax = r_ebp;
    /* 0040977d: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00409780: mov ecx, edx */ r_ecx = r_edx;
    /* 00409782: sar ecx, 3 */ { u32 c = (3u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00409785: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00409787: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 0040978a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0040978c: lea edi, [eax + eax*8] */ r_edi = (u32)(r_eax+r_eax*8);
    /* 0040978f: imul eax, ecx, -0x24 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xffffffdcu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00409792: neg edi */ { u32 x = r_edi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00409794: add edi, ebp */ {  u32 a = r_edi; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00409796: add ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00409798: mov eax, 0x2aaaaaab */ r_eax = 0x2aaaaaabu;
    /* 0040979d: imul ebp */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebp; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040979f: mov eax, ebp */ r_eax = r_ebp;
    /* 004097a1: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004097a4: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004097a6: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 004097a9: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004097ab: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004097ad: sub ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 004097af: mov dword ptr [esp + 0x38], ebp */ W32((u32)(r_esp+0x38u), r_ebp);
    /* 004097b3: fild dword ptr [esp + 0x38] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x38u)));
    /* 004097b7: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 004097b9: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 004097bd: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 004097c2: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004097c7: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 004097cb: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 004097cf: fistp qword ptr [esp + 0x30] */ W64((u32)(r_esp+0x30u), (u64)fx_int64(ST(0))); FPOP();
    /* 004097d3: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 004097d7: mov eax, 0x2aaaaaab */ r_eax = 0x2aaaaaabu;
    /* 004097dc: imul edi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_edi; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004097de: mov eax, edi */ r_eax = r_edi;
    /* 004097e0: movzx ebp, byte ptr [esp + 0x30] */ r_ebp = (u32)R8((u32)(r_esp+0x30u));
    /* 004097e5: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004097e8: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004097ea: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
    /* 004097ee: fild dword ptr [esp + 0x38] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x38u)));
    /* 004097f2: mov dword ptr [esp + 0x38], ebp */ W32((u32)(r_esp+0x38u), r_ebp);
    /* 004097f6: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 004097f8: fild dword ptr [esp + 0x38] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x38u)));
    /* 004097fc: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004097fe: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 00409802: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 00409807: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0040980c: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 00409810: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 00409814: fistp qword ptr [esp + 0x30] */ W64((u32)(r_esp+0x30u), (u64)fx_int64(ST(0))); FPOP();
    /* 00409818: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 0040981c: lea eax, [ecx + ecx*8] */ r_eax = (u32)(r_ecx+r_ecx*8);
    /* 0040981f: fld dword ptr [0x8f997c] */ FPUSH(R_F32((u32)(0x8f997cu)));
    /* 00409825: fld dword ptr [0x8f997c] */ FPUSH(R_F32((u32)(0x8f997cu)));
    /* 0040982b: fdivr st(3) */ ST(0) = ST(3) / ST(0);
    /* 0040982d: movzx edx, byte ptr [esp + 0x30] */ r_edx = (u32)R8((u32)(r_esp+0x30u));
    /* 00409832: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00409836: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409838: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
    /* 0040983c: fild dword ptr [esp + 0x38] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x38u)));
    /* 00409840: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409842: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409844: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409846: fld dword ptr [eax + edi*4 + 0x8f97c0] */ FPUSH(R_F32((u32)(r_eax+r_edi*4+0x8f97c0u)));
    /* 0040984d: fadd st(5), st(0) */ ST(5) = ST(5) + ST(0);
    /* 0040984f: fadd st(4), st(0) */ ST(4) = ST(4) + ST(0);
    /* 00409851: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00409853: fdiv st(4), st(0) */ ST(4) = ST(4) / ST(0);
    /* 00409855: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 00409857: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0040985b: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0040985d: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 00409861: fld dword ptr [0x8f997c] */ FPUSH(R_F32((u32)(0x8f997cu)));
    /* 00409867: fdivr st(3) */ ST(0) = ST(3) / ST(0);
    /* 00409869: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 0040986d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0040986f: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00409871: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00409873: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 00409875: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 00409879: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0040987b: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 0040987f: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00409881: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
L_00409885:; BB(0x00409885);
    /* 00409885: movzx ebp, cl */ r_ebp = (u32)(u8)r_ecx;
    /* 00409888: cmp ebp, ebx */ {  u32 a = r_ebp; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040988a: je 0x409899 */ if (fZ) goto L_00409899;
L_0040988c:; BB(0x0040988c);
    /* 0040988c: mov edx, dword ptr [esp + 0x50] */ r_edx = R32((u32)(r_esp+0x50u));
    /* 00409890: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00409892: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x409897u); f_0082bb60();
    /* 00409897: mov ebx, ebp */ r_ebx = r_ebp;
L_00409899:; BB(0x00409899);
    /* 00409899: push 0x3f7fff58 */ { u32 v = 0x3f7fff58u; r_esp -= 4; W32(r_esp, v); }
    /* 0040989e: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 004098a2: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x4098a7u); f_0082b440();
    /* 004098a7: jmp 0x409640 */ goto L_00409640;
L_004098ac:; BB(0x004098ac);
    /* 004098ac: fld dword ptr [0x8f9978] */ FPUSH(R_F32((u32)(0x8f9978u)));
    /* 004098b2: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 004098b6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004098b8: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 004098ba: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004098bc: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004098c0: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 004098c4: fadd dword ptr [0x8f99d4] */ ST(0) = ST(0) + R_F32((u32)(0x8f99d4u));
    /* 004098ca: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 004098ce: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004098d0: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 004098d4: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 004098dc: mov eax, 0x38e38e39 */ r_eax = 0x38e38e39u;
    /* 004098e1: imul ebp */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebp; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004098e3: sar ebp, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebp = r;  } }
    /* 004098e6: mov ecx, edx */ r_ecx = r_edx;
    /* 004098e8: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 004098f0: sar ecx, 3 */ { u32 c = (3u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 004098f3: sub ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004098f5: mov dword ptr [esp + 0x18], 0 */ W32((u32)(r_esp+0x18u), 0x0u);
    /* 004098fd: mov dword ptr [esp + 0x1c], 0 */ W32((u32)(r_esp+0x1cu), 0x0u);
    /* 00409905: jmp 0x409885 */ goto L_00409885;
L_0040990a:; BB(0x0040990a);
    /* 0040990a: mov ebp, dword ptr [esp + 0x44] */ r_ebp = R32((u32)(r_esp+0x44u));
    /* 0040990e: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x409913u); f_004ac444();
    /* 00409913: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 00409917: mov edx, dword ptr [eax + 0x1928] */ r_edx = R32((u32)(r_eax+0x1928u));
    /* 0040991d: jmp 0x409606 */ goto L_00409606;
L_00409922:; BB(0x00409922);
    /* 00409922: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x409927u); f_0082dab0();
    /* 00409927: add esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0040992a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0040992b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040992c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0040992d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0040992e: ret  */ FN_RET(0x004096ad); r_esp += 4; return;
L_0040992f:; BB(0x0040992f);
    /* 0040992f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00409931: jmp 0x409520 */ goto L_00409520;
}

void f_004096b7(void)
{
    FN_ENTER(0x004096b7);
    goto L_004096b7;
L_00409432:; BB(0x00409432);
    /* 00409432: cmp ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00409434: jae 0x409922 */ if (!fC) goto L_00409922;
L_0040943a:; BB(0x0040943a);
    /* 0040943a: mov ecx, dword ptr [esp + 0x40] */ r_ecx = R32((u32)(r_esp+0x40u));
    /* 0040943e: fld dword ptr [0x8f99a4] */ FPUSH(R_F32((u32)(0x8f99a4u)));
    /* 00409444: fld dword ptr [ecx + ebp*8 + 0x2c] */ FPUSH(R_F32((u32)(r_ecx+r_ebp*8+0x2cu)));
    /* 00409448: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0040944a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0040944c: fstp dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 00409450: mov edi, 0xffffffff */ r_edi = 0xffffffffu;
    /* 00409455: lea ebx, [ebp + ebp] */ r_ebx = (u32)(r_ebp+r_ebp);
    /* 00409459: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0040945a: jbe 0x40946b */ if ((fC||fZ)) goto L_0040946b;
L_0040945c:; BB(0x0040945c);
    /* 0040945c: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 00409460: fcomp dword ptr [0x8f99a0] */ fx_compare(ST(0), R_F32((u32)(0x8f99a0u))); FPOP();
    /* 00409466: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00409468: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00409469: jb 0x409470 */ if (fC) goto L_00409470;
L_0040946b:; BB(0x0040946b);
    /* 0040946b: mov edi, 0xffffff */ r_edi = 0xffffffu;
L_00409470:; BB(0x00409470);
    /* 00409470: fcom dword ptr [esp + 0x58] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x58u))); 
    /* 00409474: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00409476: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00409477: jae 0x4094c5 */ if (!fC) goto L_004094c5;
L_00409479:; BB(0x00409479);
    /* 00409479: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 0040947d: fcomp dword ptr [0x8f999c] */ fx_compare(ST(0), R_F32((u32)(0x8f999cu))); FPOP();
    /* 00409483: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00409485: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00409486: jae 0x4094c5 */ if (!fC) goto L_004094c5;
L_00409488:; BB(0x00409488);
    /* 00409488: fld dword ptr [0x8f9994] */ FPUSH(R_F32((u32)(0x8f9994u)));
    /* 0040948e: fadd dword ptr [esp + 0x58] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x58u));
    /* 00409492: fmul dword ptr [0x8f9998] */ ST(0) = ST(0) * R_F32((u32)(0x8f9998u));
    /* 00409498: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 0040949a: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 0040949e: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 004094a3: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004094a8: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 004094ac: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 004094b0: fistp qword ptr [esp + 0x30] */ W64((u32)(r_esp+0x30u), (u64)fx_int64(ST(0))); FPOP();
    /* 004094b4: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 004094b8: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 004094bc: shl edi, 0x18 */ { u32 c = (24u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 004094bf: or edi, 0xffffff */ {  u32 a = r_edi; u32 b = 0xffffffu; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
L_004094c5:; BB(0x004094c5);
    /* 004094c5: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 004094c9: fcomp dword ptr [0x8f9990] */ fx_compare(ST(0), R_F32((u32)(0x8f9990u))); FPOP();
    /* 004094cf: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004094d1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004094d2: jbe 0x409520 */ if ((fC||fZ)) goto L_00409520;
L_004094d4:; BB(0x004094d4);
    /* 004094d4: fld dword ptr [0x8f99a0] */ FPUSH(R_F32((u32)(0x8f99a0u)));
    /* 004094da: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 004094de: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 004094e0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004094e2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004094e3: jae 0x40992f */ if (!fC) goto L_0040992f;
L_004094e9:; BB(0x004094e9);
    /* 004094e9: fsub dword ptr [esp + 0x58] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x58u));
    /* 004094ed: fmul dword ptr [0x8f9998] */ ST(0) = ST(0) * R_F32((u32)(0x8f9998u));
    /* 004094f3: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 004094f5: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 004094f9: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 004094fe: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00409503: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 00409507: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 0040950b: fistp qword ptr [esp + 0x30] */ W64((u32)(r_esp+0x30u), (u64)fx_int64(ST(0))); FPOP();
    /* 0040950f: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 00409513: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 00409517: shl edi, 0x18 */ { u32 c = (24u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 0040951a: or edi, 0xffffff */ {  u32 a = r_edi; u32 b = 0xffffffu; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
L_00409520:; BB(0x00409520);
    /* 00409520: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00409522: mov eax, dword ptr [0xa3ad40] */ r_eax = R32((u32)(0xa3ad40u));
    /* 00409527: mov esi, dword ptr [eax + ebp*4] */ r_esi = R32((u32)(r_eax+r_ebp*4));
    /* 0040952a: movsx eax, byte ptr [esi] */ r_eax = (u32)(i32)(i8)R8((u32)(r_esi));
    /* 0040952d: cmp eax, 0x23 */ {  u32 a = r_eax; u32 b = 0x23u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409530: je 0x4095fe */ if (fZ) goto L_004095fe;
L_00409536:; BB(0x00409536);
    /* 00409536: cmp eax, 0x21 */ {  u32 a = r_eax; u32 b = 0x21u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409539: jne 0x409581 */ if (!fZ) goto L_00409581;
L_0040953b:; BB(0x0040953b);
    /* 0040953b: mov ecx, dword ptr [0xa3ad48] */ r_ecx = R32((u32)(0xa3ad48u));
    /* 00409541: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x409546u); f_00829cc8();
    /* 00409546: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0040954b: call 0x82bb30 */ r_esp -= 4; W32(r_esp, 0x409550u); f_0082bb30();
    /* 00409550: mov ecx, 3 */ r_ecx = 0x3u;
    /* 00409555: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0040955a: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x40955fu); f_0082bb60();
    /* 0040955f: push 0x3f7fff58 */ { u32 v = 0x3f7fff58u; r_esp -= 4; W32(r_esp, v); }
    /* 00409564: mov ecx, dword ptr [esp + 0x50] */ r_ecx = R32((u32)(r_esp+0x50u));
    /* 00409568: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x40956du); f_0082b440();
    /* 0040956d: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x409572u); f_004ac444();
    /* 00409572: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 00409576: mov edx, dword ptr [eax + 0x1928] */ r_edx = R32((u32)(r_eax+0x1928u));
    /* 0040957c: jmp 0x409606 */ goto L_00409606;
L_00409581:; BB(0x00409581);
    /* 00409581: cmp eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409584: jne 0x4095c9 */ if (!fZ) goto L_004095c9;
L_00409586:; BB(0x00409586);
    /* 00409586: mov ecx, dword ptr [0xa3ad48] */ r_ecx = R32((u32)(0xa3ad48u));
    /* 0040958c: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x409591u); f_00829cc8();
    /* 00409591: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00409596: call 0x82bb30 */ r_esp -= 4; W32(r_esp, 0x40959bu); f_0082bb30();
    /* 0040959b: mov ecx, 4 */ r_ecx = 0x4u;
    /* 004095a0: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 004095a5: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x4095aau); f_0082bb60();
    /* 004095aa: push 0x3f7fff58 */ { u32 v = 0x3f7fff58u; r_esp -= 4; W32(r_esp, v); }
    /* 004095af: mov ecx, dword ptr [esp + 0x4c] */ r_ecx = R32((u32)(r_esp+0x4cu));
    /* 004095b3: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x4095b8u); f_0082b440();
    /* 004095b8: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x4095bdu); f_004ac444();
    /* 004095bd: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 004095c1: mov edx, dword ptr [eax + 0x1928] */ r_edx = R32((u32)(r_eax+0x1928u));
    /* 004095c7: jmp 0x409606 */ goto L_00409606;
L_004095c9:; BB(0x004095c9);
    /* 004095c9: cmp edi, 0xffffff */ {  u32 a = r_edi; u32 b = 0xffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004095cf: je 0x409606 */ if (fZ) goto L_00409606;
L_004095d1:; BB(0x004095d1);
    /* 004095d1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004095d2: call 0x7087dc */ r_esp -= 4; W32(r_esp, 0x4095d7u); f_007087dc();
    /* 004095d7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004095d8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004095d9: push 0x3f7fff58 */ { u32 v = 0x3f7fff58u; r_esp -= 4; W32(r_esp, v); }
    /* 004095de: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 004095e2: push dword ptr [eax + ebx*4 + 0x2c] */ { u32 v = R32((u32)(r_eax+r_ebx*4+0x2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004095e6: push dword ptr [eax + ebp*8 + 0x28] */ { u32 v = R32((u32)(r_eax+r_ebp*8+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 004095ea: call 0x789248 */ r_esp -= 4; W32(r_esp, 0x4095efu); f_00789248();
    /* 004095ef: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004095f2: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 004095f6: mov edx, dword ptr [eax + 0x1928] */ r_edx = R32((u32)(r_eax+0x1928u));
    /* 004095fc: jmp 0x409606 */ goto L_00409606;
L_004095fe:; BB(0x004095fe);
    /* 004095fe: cmp edi, 0xffffff */ {  u32 a = r_edi; u32 b = 0xffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409604: jne 0x40960e */ if (!fZ) goto L_0040960e;
L_00409606:; BB(0x00409606);
    /* 00409606: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00409609: jmp 0x409432 */ goto L_00409432;
L_0040960e:; BB(0x0040960e);
    /* 0040960e: mov eax, ecx */ r_eax = r_ecx;
    /* 00409610: fld dword ptr [eax + ebp*8 + 0x28] */ FPUSH(R_F32((u32)(r_eax+r_ebp*8+0x28u)));
    /* 00409614: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 00409618: mov ebx, 0xfe */ r_ebx = 0xfeu;
    /* 0040961d: call 0x7a9044 */ r_esp -= 4; W32(r_esp, 0x409622u); f_007a9044();
    /* 00409622: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00409627: call 0x82bb30 */ r_esp -= 4; W32(r_esp, 0x40962cu); f_0082bb30();
    /* 0040962c: push dword ptr [0xa3ad48] */ { u32 v = R32((u32)(0xa3ad48u)); r_esp -= 4; W32(r_esp, v); }
    /* 00409632: call 0x81a9b8 */ r_esp -= 4; W32(r_esp, 0x409637u); f_0081a9b8();
    /* 00409637: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00409638: mov dword ptr [esp + 0x50], edi */ W32((u32)(r_esp+0x50u), r_edi);
    /* 0040963c: mov dword ptr [esp + 0x44], ebp */ W32((u32)(r_esp+0x44u), r_ebp);
L_00409640:; BB(0x00409640);
    /* 00409640: movsx ebp, byte ptr [esi] */ r_ebp = (u32)(i32)(i8)R8((u32)(r_esi));
    /* 00409643: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409645: je 0x40990a */ if (fZ) goto L_0040990a;
L_0040964b:; BB(0x0040964b);
    /* 0040964b: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 00409651: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00409654: cmp ebp, 0x23 */ {  u32 a = r_ebp; u32 b = 0x23u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409657: je 0x409640 */ if (fZ) goto L_00409640;
L_00409659:; BB(0x00409659);
    /* 00409659: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 0040965d: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00409660: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00409661: call 0x85824c */ r_esp -= 4; W32(r_esp, 0x409666u); f_0085824c();
    /* 00409666: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00409667: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409669: je 0x409677 */ if (fZ) goto L_00409677;
L_0040966b:; BB(0x0040966b);
    /* 0040966b: fld dword ptr [0x8f9980] */ FPUSH(R_F32((u32)(0x8f9980u)));
    /* 00409671: fadd dword ptr [esp + 0x58] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x58u));
    /* 00409675: jmp 0x40967b */ goto L_0040967b;
L_00409677:; BB(0x00409677);
    /* 00409677: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
L_0040967b:; BB(0x0040967b);
    /* 0040967b: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0040967f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00409680: call 0x858339 */ r_esp -= 4; W32(r_esp, 0x409685u); f_00858339();
    /* 00409685: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00409686: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409688: jne 0x409710 */ if (!fZ) goto L_00409710;
L_0040968e:; BB(0x0040968e);
    /* 0040968e: add ebp, -0x26 */ {  u32 a = r_ebp; u32 b = 0xffffffdau; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00409691: cmp ebp, 0x58 */ {  u32 a = r_ebp; u32 b = 0x58u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00409694: ja 0x409709 */ if ((!fC&&!fZ)) goto L_00409709;
L_0040969a:; BB(0x0040969a);
    /* 0040969a: mov eax, dword ptr [ebp*4 + 0x8f94c0] */ r_eax = R32((u32)(r_ebp*4+0x8f94c0u));
    /* 004096a1: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_004096b7:; BB(0x004096b7);
    /* 004096b7: mov ebp, 0x49 */ r_ebp = 0x49u;
    /* 004096bc: jmp 0x409750 */ goto L_00409750;
L_00409709:; BB(0x00409709);
    /* 00409709: mov ebp, 0x52 */ r_ebp = 0x52u;
    /* 0040970e: jmp 0x409750 */ goto L_00409750;
L_00409710:; BB(0x00409710);
    /* 00409710: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00409711: call 0x858212 */ r_esp -= 4; W32(r_esp, 0x409716u); f_00858212();
    /* 00409716: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00409717: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409719: je 0x409726 */ if (fZ) goto L_00409726;
L_0040971b:; BB(0x0040971b);
    /* 0040971b: add ebp, -0x41 */ {  u32 a = r_ebp; u32 b = 0xffffffbfu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0040971e: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 00409724: jmp 0x409750 */ goto L_00409750;
L_00409726:; BB(0x00409726);
    /* 00409726: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00409727: call 0x85824c */ r_esp -= 4; W32(r_esp, 0x40972cu); f_0085824c();
    /* 0040972c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0040972d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040972f: je 0x40973c */ if (fZ) goto L_0040973c;
L_00409731:; BB(0x00409731);
    /* 00409731: add ebp, -0x3d */ {  u32 a = r_ebp; u32 b = 0xffffffc3u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00409734: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 0040973a: jmp 0x409750 */ goto L_00409750;
L_0040973c:; BB(0x0040973c);
    /* 0040973c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040973d: call 0x858286 */ r_esp -= 4; W32(r_esp, 0x409742u); f_00858286();
    /* 00409742: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00409743: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409745: je 0x409750 */ if (fZ) goto L_00409750;
L_00409747:; BB(0x00409747);
    /* 00409747: add ebp, 0xe */ {  u32 a = r_ebp; u32 b = 0xeu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0040974a: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
L_00409750:; BB(0x00409750);
    /* 00409750: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00409753: cmp ebp, 0x52 */ {  u32 a = r_ebp; u32 b = 0x52u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409756: je 0x4098ac */ if (fZ) goto L_004098ac;
L_0040975c:; BB(0x0040975c);
    /* 0040975c: fld dword ptr [0x8f9988] */ FPUSH(R_F32((u32)(0x8f9988u)));
    /* 00409762: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00409766: fld dword ptr [0x8f99d4] */ FPUSH(R_F32((u32)(0x8f99d4u)));
    /* 0040976c: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 0040976e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00409770: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00409774: mov eax, 0x38e38e39 */ r_eax = 0x38e38e39u;
    /* 00409779: imul ebp */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebp; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040977b: mov eax, ebp */ r_eax = r_ebp;
    /* 0040977d: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00409780: mov ecx, edx */ r_ecx = r_edx;
    /* 00409782: sar ecx, 3 */ { u32 c = (3u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00409785: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00409787: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 0040978a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0040978c: lea edi, [eax + eax*8] */ r_edi = (u32)(r_eax+r_eax*8);
    /* 0040978f: imul eax, ecx, -0x24 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xffffffdcu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00409792: neg edi */ { u32 x = r_edi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00409794: add edi, ebp */ {  u32 a = r_edi; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00409796: add ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00409798: mov eax, 0x2aaaaaab */ r_eax = 0x2aaaaaabu;
    /* 0040979d: imul ebp */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebp; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040979f: mov eax, ebp */ r_eax = r_ebp;
    /* 004097a1: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004097a4: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004097a6: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 004097a9: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004097ab: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004097ad: sub ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 004097af: mov dword ptr [esp + 0x38], ebp */ W32((u32)(r_esp+0x38u), r_ebp);
    /* 004097b3: fild dword ptr [esp + 0x38] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x38u)));
    /* 004097b7: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 004097b9: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 004097bd: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 004097c2: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004097c7: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 004097cb: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 004097cf: fistp qword ptr [esp + 0x30] */ W64((u32)(r_esp+0x30u), (u64)fx_int64(ST(0))); FPOP();
    /* 004097d3: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 004097d7: mov eax, 0x2aaaaaab */ r_eax = 0x2aaaaaabu;
    /* 004097dc: imul edi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_edi; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004097de: mov eax, edi */ r_eax = r_edi;
    /* 004097e0: movzx ebp, byte ptr [esp + 0x30] */ r_ebp = (u32)R8((u32)(r_esp+0x30u));
    /* 004097e5: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004097e8: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004097ea: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
    /* 004097ee: fild dword ptr [esp + 0x38] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x38u)));
    /* 004097f2: mov dword ptr [esp + 0x38], ebp */ W32((u32)(r_esp+0x38u), r_ebp);
    /* 004097f6: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 004097f8: fild dword ptr [esp + 0x38] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x38u)));
    /* 004097fc: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004097fe: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 00409802: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 00409807: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0040980c: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 00409810: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 00409814: fistp qword ptr [esp + 0x30] */ W64((u32)(r_esp+0x30u), (u64)fx_int64(ST(0))); FPOP();
    /* 00409818: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 0040981c: lea eax, [ecx + ecx*8] */ r_eax = (u32)(r_ecx+r_ecx*8);
    /* 0040981f: fld dword ptr [0x8f997c] */ FPUSH(R_F32((u32)(0x8f997cu)));
    /* 00409825: fld dword ptr [0x8f997c] */ FPUSH(R_F32((u32)(0x8f997cu)));
    /* 0040982b: fdivr st(3) */ ST(0) = ST(3) / ST(0);
    /* 0040982d: movzx edx, byte ptr [esp + 0x30] */ r_edx = (u32)R8((u32)(r_esp+0x30u));
    /* 00409832: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00409836: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409838: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
    /* 0040983c: fild dword ptr [esp + 0x38] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x38u)));
    /* 00409840: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409842: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409844: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409846: fld dword ptr [eax + edi*4 + 0x8f97c0] */ FPUSH(R_F32((u32)(r_eax+r_edi*4+0x8f97c0u)));
    /* 0040984d: fadd st(5), st(0) */ ST(5) = ST(5) + ST(0);
    /* 0040984f: fadd st(4), st(0) */ ST(4) = ST(4) + ST(0);
    /* 00409851: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00409853: fdiv st(4), st(0) */ ST(4) = ST(4) / ST(0);
    /* 00409855: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 00409857: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0040985b: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0040985d: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 00409861: fld dword ptr [0x8f997c] */ FPUSH(R_F32((u32)(0x8f997cu)));
    /* 00409867: fdivr st(3) */ ST(0) = ST(3) / ST(0);
    /* 00409869: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 0040986d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0040986f: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00409871: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00409873: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 00409875: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 00409879: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0040987b: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 0040987f: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00409881: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
L_00409885:; BB(0x00409885);
    /* 00409885: movzx ebp, cl */ r_ebp = (u32)(u8)r_ecx;
    /* 00409888: cmp ebp, ebx */ {  u32 a = r_ebp; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040988a: je 0x409899 */ if (fZ) goto L_00409899;
L_0040988c:; BB(0x0040988c);
    /* 0040988c: mov edx, dword ptr [esp + 0x50] */ r_edx = R32((u32)(r_esp+0x50u));
    /* 00409890: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00409892: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x409897u); f_0082bb60();
    /* 00409897: mov ebx, ebp */ r_ebx = r_ebp;
L_00409899:; BB(0x00409899);
    /* 00409899: push 0x3f7fff58 */ { u32 v = 0x3f7fff58u; r_esp -= 4; W32(r_esp, v); }
    /* 0040989e: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 004098a2: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x4098a7u); f_0082b440();
    /* 004098a7: jmp 0x409640 */ goto L_00409640;
L_004098ac:; BB(0x004098ac);
    /* 004098ac: fld dword ptr [0x8f9978] */ FPUSH(R_F32((u32)(0x8f9978u)));
    /* 004098b2: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 004098b6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004098b8: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 004098ba: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004098bc: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004098c0: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 004098c4: fadd dword ptr [0x8f99d4] */ ST(0) = ST(0) + R_F32((u32)(0x8f99d4u));
    /* 004098ca: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 004098ce: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004098d0: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 004098d4: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 004098dc: mov eax, 0x38e38e39 */ r_eax = 0x38e38e39u;
    /* 004098e1: imul ebp */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebp; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004098e3: sar ebp, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebp = r;  } }
    /* 004098e6: mov ecx, edx */ r_ecx = r_edx;
    /* 004098e8: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 004098f0: sar ecx, 3 */ { u32 c = (3u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 004098f3: sub ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004098f5: mov dword ptr [esp + 0x18], 0 */ W32((u32)(r_esp+0x18u), 0x0u);
    /* 004098fd: mov dword ptr [esp + 0x1c], 0 */ W32((u32)(r_esp+0x1cu), 0x0u);
    /* 00409905: jmp 0x409885 */ goto L_00409885;
L_0040990a:; BB(0x0040990a);
    /* 0040990a: mov ebp, dword ptr [esp + 0x44] */ r_ebp = R32((u32)(r_esp+0x44u));
    /* 0040990e: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x409913u); f_004ac444();
    /* 00409913: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 00409917: mov edx, dword ptr [eax + 0x1928] */ r_edx = R32((u32)(r_eax+0x1928u));
    /* 0040991d: jmp 0x409606 */ goto L_00409606;
L_00409922:; BB(0x00409922);
    /* 00409922: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x409927u); f_0082dab0();
    /* 00409927: add esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0040992a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0040992b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040992c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0040992d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0040992e: ret  */ FN_RET(0x004096b7); r_esp += 4; return;
L_0040992f:; BB(0x0040992f);
    /* 0040992f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00409931: jmp 0x409520 */ goto L_00409520;
}

void f_004096c1(void)
{
    FN_ENTER(0x004096c1);
    goto L_004096c1;
L_00409432:; BB(0x00409432);
    /* 00409432: cmp ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00409434: jae 0x409922 */ if (!fC) goto L_00409922;
L_0040943a:; BB(0x0040943a);
    /* 0040943a: mov ecx, dword ptr [esp + 0x40] */ r_ecx = R32((u32)(r_esp+0x40u));
    /* 0040943e: fld dword ptr [0x8f99a4] */ FPUSH(R_F32((u32)(0x8f99a4u)));
    /* 00409444: fld dword ptr [ecx + ebp*8 + 0x2c] */ FPUSH(R_F32((u32)(r_ecx+r_ebp*8+0x2cu)));
    /* 00409448: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0040944a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0040944c: fstp dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 00409450: mov edi, 0xffffffff */ r_edi = 0xffffffffu;
    /* 00409455: lea ebx, [ebp + ebp] */ r_ebx = (u32)(r_ebp+r_ebp);
    /* 00409459: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0040945a: jbe 0x40946b */ if ((fC||fZ)) goto L_0040946b;
L_0040945c:; BB(0x0040945c);
    /* 0040945c: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 00409460: fcomp dword ptr [0x8f99a0] */ fx_compare(ST(0), R_F32((u32)(0x8f99a0u))); FPOP();
    /* 00409466: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00409468: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00409469: jb 0x409470 */ if (fC) goto L_00409470;
L_0040946b:; BB(0x0040946b);
    /* 0040946b: mov edi, 0xffffff */ r_edi = 0xffffffu;
L_00409470:; BB(0x00409470);
    /* 00409470: fcom dword ptr [esp + 0x58] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x58u))); 
    /* 00409474: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00409476: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00409477: jae 0x4094c5 */ if (!fC) goto L_004094c5;
L_00409479:; BB(0x00409479);
    /* 00409479: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 0040947d: fcomp dword ptr [0x8f999c] */ fx_compare(ST(0), R_F32((u32)(0x8f999cu))); FPOP();
    /* 00409483: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00409485: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00409486: jae 0x4094c5 */ if (!fC) goto L_004094c5;
L_00409488:; BB(0x00409488);
    /* 00409488: fld dword ptr [0x8f9994] */ FPUSH(R_F32((u32)(0x8f9994u)));
    /* 0040948e: fadd dword ptr [esp + 0x58] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x58u));
    /* 00409492: fmul dword ptr [0x8f9998] */ ST(0) = ST(0) * R_F32((u32)(0x8f9998u));
    /* 00409498: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 0040949a: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 0040949e: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 004094a3: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004094a8: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 004094ac: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 004094b0: fistp qword ptr [esp + 0x30] */ W64((u32)(r_esp+0x30u), (u64)fx_int64(ST(0))); FPOP();
    /* 004094b4: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 004094b8: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 004094bc: shl edi, 0x18 */ { u32 c = (24u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 004094bf: or edi, 0xffffff */ {  u32 a = r_edi; u32 b = 0xffffffu; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
L_004094c5:; BB(0x004094c5);
    /* 004094c5: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 004094c9: fcomp dword ptr [0x8f9990] */ fx_compare(ST(0), R_F32((u32)(0x8f9990u))); FPOP();
    /* 004094cf: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004094d1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004094d2: jbe 0x409520 */ if ((fC||fZ)) goto L_00409520;
L_004094d4:; BB(0x004094d4);
    /* 004094d4: fld dword ptr [0x8f99a0] */ FPUSH(R_F32((u32)(0x8f99a0u)));
    /* 004094da: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 004094de: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 004094e0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004094e2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004094e3: jae 0x40992f */ if (!fC) goto L_0040992f;
L_004094e9:; BB(0x004094e9);
    /* 004094e9: fsub dword ptr [esp + 0x58] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x58u));
    /* 004094ed: fmul dword ptr [0x8f9998] */ ST(0) = ST(0) * R_F32((u32)(0x8f9998u));
    /* 004094f3: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 004094f5: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 004094f9: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 004094fe: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00409503: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 00409507: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 0040950b: fistp qword ptr [esp + 0x30] */ W64((u32)(r_esp+0x30u), (u64)fx_int64(ST(0))); FPOP();
    /* 0040950f: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 00409513: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 00409517: shl edi, 0x18 */ { u32 c = (24u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 0040951a: or edi, 0xffffff */ {  u32 a = r_edi; u32 b = 0xffffffu; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
L_00409520:; BB(0x00409520);
    /* 00409520: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00409522: mov eax, dword ptr [0xa3ad40] */ r_eax = R32((u32)(0xa3ad40u));
    /* 00409527: mov esi, dword ptr [eax + ebp*4] */ r_esi = R32((u32)(r_eax+r_ebp*4));
    /* 0040952a: movsx eax, byte ptr [esi] */ r_eax = (u32)(i32)(i8)R8((u32)(r_esi));
    /* 0040952d: cmp eax, 0x23 */ {  u32 a = r_eax; u32 b = 0x23u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409530: je 0x4095fe */ if (fZ) goto L_004095fe;
L_00409536:; BB(0x00409536);
    /* 00409536: cmp eax, 0x21 */ {  u32 a = r_eax; u32 b = 0x21u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409539: jne 0x409581 */ if (!fZ) goto L_00409581;
L_0040953b:; BB(0x0040953b);
    /* 0040953b: mov ecx, dword ptr [0xa3ad48] */ r_ecx = R32((u32)(0xa3ad48u));
    /* 00409541: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x409546u); f_00829cc8();
    /* 00409546: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0040954b: call 0x82bb30 */ r_esp -= 4; W32(r_esp, 0x409550u); f_0082bb30();
    /* 00409550: mov ecx, 3 */ r_ecx = 0x3u;
    /* 00409555: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0040955a: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x40955fu); f_0082bb60();
    /* 0040955f: push 0x3f7fff58 */ { u32 v = 0x3f7fff58u; r_esp -= 4; W32(r_esp, v); }
    /* 00409564: mov ecx, dword ptr [esp + 0x50] */ r_ecx = R32((u32)(r_esp+0x50u));
    /* 00409568: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x40956du); f_0082b440();
    /* 0040956d: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x409572u); f_004ac444();
    /* 00409572: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 00409576: mov edx, dword ptr [eax + 0x1928] */ r_edx = R32((u32)(r_eax+0x1928u));
    /* 0040957c: jmp 0x409606 */ goto L_00409606;
L_00409581:; BB(0x00409581);
    /* 00409581: cmp eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409584: jne 0x4095c9 */ if (!fZ) goto L_004095c9;
L_00409586:; BB(0x00409586);
    /* 00409586: mov ecx, dword ptr [0xa3ad48] */ r_ecx = R32((u32)(0xa3ad48u));
    /* 0040958c: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x409591u); f_00829cc8();
    /* 00409591: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00409596: call 0x82bb30 */ r_esp -= 4; W32(r_esp, 0x40959bu); f_0082bb30();
    /* 0040959b: mov ecx, 4 */ r_ecx = 0x4u;
    /* 004095a0: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 004095a5: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x4095aau); f_0082bb60();
    /* 004095aa: push 0x3f7fff58 */ { u32 v = 0x3f7fff58u; r_esp -= 4; W32(r_esp, v); }
    /* 004095af: mov ecx, dword ptr [esp + 0x4c] */ r_ecx = R32((u32)(r_esp+0x4cu));
    /* 004095b3: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x4095b8u); f_0082b440();
    /* 004095b8: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x4095bdu); f_004ac444();
    /* 004095bd: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 004095c1: mov edx, dword ptr [eax + 0x1928] */ r_edx = R32((u32)(r_eax+0x1928u));
    /* 004095c7: jmp 0x409606 */ goto L_00409606;
L_004095c9:; BB(0x004095c9);
    /* 004095c9: cmp edi, 0xffffff */ {  u32 a = r_edi; u32 b = 0xffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004095cf: je 0x409606 */ if (fZ) goto L_00409606;
L_004095d1:; BB(0x004095d1);
    /* 004095d1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004095d2: call 0x7087dc */ r_esp -= 4; W32(r_esp, 0x4095d7u); f_007087dc();
    /* 004095d7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004095d8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004095d9: push 0x3f7fff58 */ { u32 v = 0x3f7fff58u; r_esp -= 4; W32(r_esp, v); }
    /* 004095de: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 004095e2: push dword ptr [eax + ebx*4 + 0x2c] */ { u32 v = R32((u32)(r_eax+r_ebx*4+0x2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004095e6: push dword ptr [eax + ebp*8 + 0x28] */ { u32 v = R32((u32)(r_eax+r_ebp*8+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 004095ea: call 0x789248 */ r_esp -= 4; W32(r_esp, 0x4095efu); f_00789248();
    /* 004095ef: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004095f2: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 004095f6: mov edx, dword ptr [eax + 0x1928] */ r_edx = R32((u32)(r_eax+0x1928u));
    /* 004095fc: jmp 0x409606 */ goto L_00409606;
L_004095fe:; BB(0x004095fe);
    /* 004095fe: cmp edi, 0xffffff */ {  u32 a = r_edi; u32 b = 0xffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409604: jne 0x40960e */ if (!fZ) goto L_0040960e;
L_00409606:; BB(0x00409606);
    /* 00409606: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00409609: jmp 0x409432 */ goto L_00409432;
L_0040960e:; BB(0x0040960e);
    /* 0040960e: mov eax, ecx */ r_eax = r_ecx;
    /* 00409610: fld dword ptr [eax + ebp*8 + 0x28] */ FPUSH(R_F32((u32)(r_eax+r_ebp*8+0x28u)));
    /* 00409614: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 00409618: mov ebx, 0xfe */ r_ebx = 0xfeu;
    /* 0040961d: call 0x7a9044 */ r_esp -= 4; W32(r_esp, 0x409622u); f_007a9044();
    /* 00409622: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00409627: call 0x82bb30 */ r_esp -= 4; W32(r_esp, 0x40962cu); f_0082bb30();
    /* 0040962c: push dword ptr [0xa3ad48] */ { u32 v = R32((u32)(0xa3ad48u)); r_esp -= 4; W32(r_esp, v); }
    /* 00409632: call 0x81a9b8 */ r_esp -= 4; W32(r_esp, 0x409637u); f_0081a9b8();
    /* 00409637: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00409638: mov dword ptr [esp + 0x50], edi */ W32((u32)(r_esp+0x50u), r_edi);
    /* 0040963c: mov dword ptr [esp + 0x44], ebp */ W32((u32)(r_esp+0x44u), r_ebp);
L_00409640:; BB(0x00409640);
    /* 00409640: movsx ebp, byte ptr [esi] */ r_ebp = (u32)(i32)(i8)R8((u32)(r_esi));
    /* 00409643: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409645: je 0x40990a */ if (fZ) goto L_0040990a;
L_0040964b:; BB(0x0040964b);
    /* 0040964b: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 00409651: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00409654: cmp ebp, 0x23 */ {  u32 a = r_ebp; u32 b = 0x23u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409657: je 0x409640 */ if (fZ) goto L_00409640;
L_00409659:; BB(0x00409659);
    /* 00409659: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 0040965d: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00409660: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00409661: call 0x85824c */ r_esp -= 4; W32(r_esp, 0x409666u); f_0085824c();
    /* 00409666: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00409667: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409669: je 0x409677 */ if (fZ) goto L_00409677;
L_0040966b:; BB(0x0040966b);
    /* 0040966b: fld dword ptr [0x8f9980] */ FPUSH(R_F32((u32)(0x8f9980u)));
    /* 00409671: fadd dword ptr [esp + 0x58] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x58u));
    /* 00409675: jmp 0x40967b */ goto L_0040967b;
L_00409677:; BB(0x00409677);
    /* 00409677: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
L_0040967b:; BB(0x0040967b);
    /* 0040967b: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0040967f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00409680: call 0x858339 */ r_esp -= 4; W32(r_esp, 0x409685u); f_00858339();
    /* 00409685: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00409686: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409688: jne 0x409710 */ if (!fZ) goto L_00409710;
L_0040968e:; BB(0x0040968e);
    /* 0040968e: add ebp, -0x26 */ {  u32 a = r_ebp; u32 b = 0xffffffdau; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00409691: cmp ebp, 0x58 */ {  u32 a = r_ebp; u32 b = 0x58u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00409694: ja 0x409709 */ if ((!fC&&!fZ)) goto L_00409709;
L_0040969a:; BB(0x0040969a);
    /* 0040969a: mov eax, dword ptr [ebp*4 + 0x8f94c0] */ r_eax = R32((u32)(r_ebp*4+0x8f94c0u));
    /* 004096a1: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_004096c1:; BB(0x004096c1);
    /* 004096c1: mov ebp, 0x48 */ r_ebp = 0x48u;
    /* 004096c6: jmp 0x409750 */ goto L_00409750;
L_00409709:; BB(0x00409709);
    /* 00409709: mov ebp, 0x52 */ r_ebp = 0x52u;
    /* 0040970e: jmp 0x409750 */ goto L_00409750;
L_00409710:; BB(0x00409710);
    /* 00409710: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00409711: call 0x858212 */ r_esp -= 4; W32(r_esp, 0x409716u); f_00858212();
    /* 00409716: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00409717: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409719: je 0x409726 */ if (fZ) goto L_00409726;
L_0040971b:; BB(0x0040971b);
    /* 0040971b: add ebp, -0x41 */ {  u32 a = r_ebp; u32 b = 0xffffffbfu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0040971e: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 00409724: jmp 0x409750 */ goto L_00409750;
L_00409726:; BB(0x00409726);
    /* 00409726: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00409727: call 0x85824c */ r_esp -= 4; W32(r_esp, 0x40972cu); f_0085824c();
    /* 0040972c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0040972d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040972f: je 0x40973c */ if (fZ) goto L_0040973c;
L_00409731:; BB(0x00409731);
    /* 00409731: add ebp, -0x3d */ {  u32 a = r_ebp; u32 b = 0xffffffc3u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00409734: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 0040973a: jmp 0x409750 */ goto L_00409750;
L_0040973c:; BB(0x0040973c);
    /* 0040973c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040973d: call 0x858286 */ r_esp -= 4; W32(r_esp, 0x409742u); f_00858286();
    /* 00409742: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00409743: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409745: je 0x409750 */ if (fZ) goto L_00409750;
L_00409747:; BB(0x00409747);
    /* 00409747: add ebp, 0xe */ {  u32 a = r_ebp; u32 b = 0xeu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0040974a: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
L_00409750:; BB(0x00409750);
    /* 00409750: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00409753: cmp ebp, 0x52 */ {  u32 a = r_ebp; u32 b = 0x52u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409756: je 0x4098ac */ if (fZ) goto L_004098ac;
L_0040975c:; BB(0x0040975c);
    /* 0040975c: fld dword ptr [0x8f9988] */ FPUSH(R_F32((u32)(0x8f9988u)));
    /* 00409762: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00409766: fld dword ptr [0x8f99d4] */ FPUSH(R_F32((u32)(0x8f99d4u)));
    /* 0040976c: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 0040976e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00409770: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00409774: mov eax, 0x38e38e39 */ r_eax = 0x38e38e39u;
    /* 00409779: imul ebp */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebp; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040977b: mov eax, ebp */ r_eax = r_ebp;
    /* 0040977d: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00409780: mov ecx, edx */ r_ecx = r_edx;
    /* 00409782: sar ecx, 3 */ { u32 c = (3u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00409785: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00409787: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 0040978a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0040978c: lea edi, [eax + eax*8] */ r_edi = (u32)(r_eax+r_eax*8);
    /* 0040978f: imul eax, ecx, -0x24 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xffffffdcu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00409792: neg edi */ { u32 x = r_edi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00409794: add edi, ebp */ {  u32 a = r_edi; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00409796: add ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00409798: mov eax, 0x2aaaaaab */ r_eax = 0x2aaaaaabu;
    /* 0040979d: imul ebp */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebp; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040979f: mov eax, ebp */ r_eax = r_ebp;
    /* 004097a1: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004097a4: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004097a6: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 004097a9: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004097ab: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004097ad: sub ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 004097af: mov dword ptr [esp + 0x38], ebp */ W32((u32)(r_esp+0x38u), r_ebp);
    /* 004097b3: fild dword ptr [esp + 0x38] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x38u)));
    /* 004097b7: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 004097b9: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 004097bd: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 004097c2: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004097c7: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 004097cb: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 004097cf: fistp qword ptr [esp + 0x30] */ W64((u32)(r_esp+0x30u), (u64)fx_int64(ST(0))); FPOP();
    /* 004097d3: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 004097d7: mov eax, 0x2aaaaaab */ r_eax = 0x2aaaaaabu;
    /* 004097dc: imul edi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_edi; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004097de: mov eax, edi */ r_eax = r_edi;
    /* 004097e0: movzx ebp, byte ptr [esp + 0x30] */ r_ebp = (u32)R8((u32)(r_esp+0x30u));
    /* 004097e5: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004097e8: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004097ea: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
    /* 004097ee: fild dword ptr [esp + 0x38] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x38u)));
    /* 004097f2: mov dword ptr [esp + 0x38], ebp */ W32((u32)(r_esp+0x38u), r_ebp);
    /* 004097f6: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 004097f8: fild dword ptr [esp + 0x38] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x38u)));
    /* 004097fc: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004097fe: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 00409802: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 00409807: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0040980c: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 00409810: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 00409814: fistp qword ptr [esp + 0x30] */ W64((u32)(r_esp+0x30u), (u64)fx_int64(ST(0))); FPOP();
    /* 00409818: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 0040981c: lea eax, [ecx + ecx*8] */ r_eax = (u32)(r_ecx+r_ecx*8);
    /* 0040981f: fld dword ptr [0x8f997c] */ FPUSH(R_F32((u32)(0x8f997cu)));
    /* 00409825: fld dword ptr [0x8f997c] */ FPUSH(R_F32((u32)(0x8f997cu)));
    /* 0040982b: fdivr st(3) */ ST(0) = ST(3) / ST(0);
    /* 0040982d: movzx edx, byte ptr [esp + 0x30] */ r_edx = (u32)R8((u32)(r_esp+0x30u));
    /* 00409832: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00409836: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409838: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
    /* 0040983c: fild dword ptr [esp + 0x38] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x38u)));
    /* 00409840: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409842: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409844: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409846: fld dword ptr [eax + edi*4 + 0x8f97c0] */ FPUSH(R_F32((u32)(r_eax+r_edi*4+0x8f97c0u)));
    /* 0040984d: fadd st(5), st(0) */ ST(5) = ST(5) + ST(0);
    /* 0040984f: fadd st(4), st(0) */ ST(4) = ST(4) + ST(0);
    /* 00409851: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00409853: fdiv st(4), st(0) */ ST(4) = ST(4) / ST(0);
    /* 00409855: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 00409857: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0040985b: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0040985d: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 00409861: fld dword ptr [0x8f997c] */ FPUSH(R_F32((u32)(0x8f997cu)));
    /* 00409867: fdivr st(3) */ ST(0) = ST(3) / ST(0);
    /* 00409869: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 0040986d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0040986f: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00409871: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00409873: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 00409875: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 00409879: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0040987b: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 0040987f: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00409881: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
L_00409885:; BB(0x00409885);
    /* 00409885: movzx ebp, cl */ r_ebp = (u32)(u8)r_ecx;
    /* 00409888: cmp ebp, ebx */ {  u32 a = r_ebp; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040988a: je 0x409899 */ if (fZ) goto L_00409899;
L_0040988c:; BB(0x0040988c);
    /* 0040988c: mov edx, dword ptr [esp + 0x50] */ r_edx = R32((u32)(r_esp+0x50u));
    /* 00409890: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00409892: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x409897u); f_0082bb60();
    /* 00409897: mov ebx, ebp */ r_ebx = r_ebp;
L_00409899:; BB(0x00409899);
    /* 00409899: push 0x3f7fff58 */ { u32 v = 0x3f7fff58u; r_esp -= 4; W32(r_esp, v); }
    /* 0040989e: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 004098a2: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x4098a7u); f_0082b440();
    /* 004098a7: jmp 0x409640 */ goto L_00409640;
L_004098ac:; BB(0x004098ac);
    /* 004098ac: fld dword ptr [0x8f9978] */ FPUSH(R_F32((u32)(0x8f9978u)));
    /* 004098b2: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 004098b6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004098b8: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 004098ba: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004098bc: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004098c0: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 004098c4: fadd dword ptr [0x8f99d4] */ ST(0) = ST(0) + R_F32((u32)(0x8f99d4u));
    /* 004098ca: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 004098ce: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004098d0: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 004098d4: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 004098dc: mov eax, 0x38e38e39 */ r_eax = 0x38e38e39u;
    /* 004098e1: imul ebp */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebp; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004098e3: sar ebp, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebp = r;  } }
    /* 004098e6: mov ecx, edx */ r_ecx = r_edx;
    /* 004098e8: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 004098f0: sar ecx, 3 */ { u32 c = (3u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 004098f3: sub ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004098f5: mov dword ptr [esp + 0x18], 0 */ W32((u32)(r_esp+0x18u), 0x0u);
    /* 004098fd: mov dword ptr [esp + 0x1c], 0 */ W32((u32)(r_esp+0x1cu), 0x0u);
    /* 00409905: jmp 0x409885 */ goto L_00409885;
L_0040990a:; BB(0x0040990a);
    /* 0040990a: mov ebp, dword ptr [esp + 0x44] */ r_ebp = R32((u32)(r_esp+0x44u));
    /* 0040990e: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x409913u); f_004ac444();
    /* 00409913: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 00409917: mov edx, dword ptr [eax + 0x1928] */ r_edx = R32((u32)(r_eax+0x1928u));
    /* 0040991d: jmp 0x409606 */ goto L_00409606;
L_00409922:; BB(0x00409922);
    /* 00409922: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x409927u); f_0082dab0();
    /* 00409927: add esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0040992a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0040992b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040992c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0040992d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0040992e: ret  */ FN_RET(0x004096c1); r_esp += 4; return;
L_0040992f:; BB(0x0040992f);
    /* 0040992f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00409931: jmp 0x409520 */ goto L_00409520;
}

void f_004096cb(void)
{
    FN_ENTER(0x004096cb);
    goto L_004096cb;
L_00409432:; BB(0x00409432);
    /* 00409432: cmp ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00409434: jae 0x409922 */ if (!fC) goto L_00409922;
L_0040943a:; BB(0x0040943a);
    /* 0040943a: mov ecx, dword ptr [esp + 0x40] */ r_ecx = R32((u32)(r_esp+0x40u));
    /* 0040943e: fld dword ptr [0x8f99a4] */ FPUSH(R_F32((u32)(0x8f99a4u)));
    /* 00409444: fld dword ptr [ecx + ebp*8 + 0x2c] */ FPUSH(R_F32((u32)(r_ecx+r_ebp*8+0x2cu)));
    /* 00409448: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0040944a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0040944c: fstp dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 00409450: mov edi, 0xffffffff */ r_edi = 0xffffffffu;
    /* 00409455: lea ebx, [ebp + ebp] */ r_ebx = (u32)(r_ebp+r_ebp);
    /* 00409459: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0040945a: jbe 0x40946b */ if ((fC||fZ)) goto L_0040946b;
L_0040945c:; BB(0x0040945c);
    /* 0040945c: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 00409460: fcomp dword ptr [0x8f99a0] */ fx_compare(ST(0), R_F32((u32)(0x8f99a0u))); FPOP();
    /* 00409466: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00409468: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00409469: jb 0x409470 */ if (fC) goto L_00409470;
L_0040946b:; BB(0x0040946b);
    /* 0040946b: mov edi, 0xffffff */ r_edi = 0xffffffu;
L_00409470:; BB(0x00409470);
    /* 00409470: fcom dword ptr [esp + 0x58] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x58u))); 
    /* 00409474: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00409476: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00409477: jae 0x4094c5 */ if (!fC) goto L_004094c5;
L_00409479:; BB(0x00409479);
    /* 00409479: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 0040947d: fcomp dword ptr [0x8f999c] */ fx_compare(ST(0), R_F32((u32)(0x8f999cu))); FPOP();
    /* 00409483: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00409485: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00409486: jae 0x4094c5 */ if (!fC) goto L_004094c5;
L_00409488:; BB(0x00409488);
    /* 00409488: fld dword ptr [0x8f9994] */ FPUSH(R_F32((u32)(0x8f9994u)));
    /* 0040948e: fadd dword ptr [esp + 0x58] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x58u));
    /* 00409492: fmul dword ptr [0x8f9998] */ ST(0) = ST(0) * R_F32((u32)(0x8f9998u));
    /* 00409498: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 0040949a: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 0040949e: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 004094a3: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004094a8: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 004094ac: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 004094b0: fistp qword ptr [esp + 0x30] */ W64((u32)(r_esp+0x30u), (u64)fx_int64(ST(0))); FPOP();
    /* 004094b4: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 004094b8: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 004094bc: shl edi, 0x18 */ { u32 c = (24u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 004094bf: or edi, 0xffffff */ {  u32 a = r_edi; u32 b = 0xffffffu; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
L_004094c5:; BB(0x004094c5);
    /* 004094c5: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 004094c9: fcomp dword ptr [0x8f9990] */ fx_compare(ST(0), R_F32((u32)(0x8f9990u))); FPOP();
    /* 004094cf: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004094d1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004094d2: jbe 0x409520 */ if ((fC||fZ)) goto L_00409520;
L_004094d4:; BB(0x004094d4);
    /* 004094d4: fld dword ptr [0x8f99a0] */ FPUSH(R_F32((u32)(0x8f99a0u)));
    /* 004094da: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 004094de: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 004094e0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004094e2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004094e3: jae 0x40992f */ if (!fC) goto L_0040992f;
L_004094e9:; BB(0x004094e9);
    /* 004094e9: fsub dword ptr [esp + 0x58] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x58u));
    /* 004094ed: fmul dword ptr [0x8f9998] */ ST(0) = ST(0) * R_F32((u32)(0x8f9998u));
    /* 004094f3: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 004094f5: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 004094f9: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 004094fe: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00409503: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 00409507: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 0040950b: fistp qword ptr [esp + 0x30] */ W64((u32)(r_esp+0x30u), (u64)fx_int64(ST(0))); FPOP();
    /* 0040950f: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 00409513: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 00409517: shl edi, 0x18 */ { u32 c = (24u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 0040951a: or edi, 0xffffff */ {  u32 a = r_edi; u32 b = 0xffffffu; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
L_00409520:; BB(0x00409520);
    /* 00409520: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00409522: mov eax, dword ptr [0xa3ad40] */ r_eax = R32((u32)(0xa3ad40u));
    /* 00409527: mov esi, dword ptr [eax + ebp*4] */ r_esi = R32((u32)(r_eax+r_ebp*4));
    /* 0040952a: movsx eax, byte ptr [esi] */ r_eax = (u32)(i32)(i8)R8((u32)(r_esi));
    /* 0040952d: cmp eax, 0x23 */ {  u32 a = r_eax; u32 b = 0x23u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409530: je 0x4095fe */ if (fZ) goto L_004095fe;
L_00409536:; BB(0x00409536);
    /* 00409536: cmp eax, 0x21 */ {  u32 a = r_eax; u32 b = 0x21u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409539: jne 0x409581 */ if (!fZ) goto L_00409581;
L_0040953b:; BB(0x0040953b);
    /* 0040953b: mov ecx, dword ptr [0xa3ad48] */ r_ecx = R32((u32)(0xa3ad48u));
    /* 00409541: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x409546u); f_00829cc8();
    /* 00409546: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0040954b: call 0x82bb30 */ r_esp -= 4; W32(r_esp, 0x409550u); f_0082bb30();
    /* 00409550: mov ecx, 3 */ r_ecx = 0x3u;
    /* 00409555: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0040955a: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x40955fu); f_0082bb60();
    /* 0040955f: push 0x3f7fff58 */ { u32 v = 0x3f7fff58u; r_esp -= 4; W32(r_esp, v); }
    /* 00409564: mov ecx, dword ptr [esp + 0x50] */ r_ecx = R32((u32)(r_esp+0x50u));
    /* 00409568: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x40956du); f_0082b440();
    /* 0040956d: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x409572u); f_004ac444();
    /* 00409572: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 00409576: mov edx, dword ptr [eax + 0x1928] */ r_edx = R32((u32)(r_eax+0x1928u));
    /* 0040957c: jmp 0x409606 */ goto L_00409606;
L_00409581:; BB(0x00409581);
    /* 00409581: cmp eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409584: jne 0x4095c9 */ if (!fZ) goto L_004095c9;
L_00409586:; BB(0x00409586);
    /* 00409586: mov ecx, dword ptr [0xa3ad48] */ r_ecx = R32((u32)(0xa3ad48u));
    /* 0040958c: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x409591u); f_00829cc8();
    /* 00409591: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00409596: call 0x82bb30 */ r_esp -= 4; W32(r_esp, 0x40959bu); f_0082bb30();
    /* 0040959b: mov ecx, 4 */ r_ecx = 0x4u;
    /* 004095a0: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 004095a5: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x4095aau); f_0082bb60();
    /* 004095aa: push 0x3f7fff58 */ { u32 v = 0x3f7fff58u; r_esp -= 4; W32(r_esp, v); }
    /* 004095af: mov ecx, dword ptr [esp + 0x4c] */ r_ecx = R32((u32)(r_esp+0x4cu));
    /* 004095b3: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x4095b8u); f_0082b440();
    /* 004095b8: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x4095bdu); f_004ac444();
    /* 004095bd: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 004095c1: mov edx, dword ptr [eax + 0x1928] */ r_edx = R32((u32)(r_eax+0x1928u));
    /* 004095c7: jmp 0x409606 */ goto L_00409606;
L_004095c9:; BB(0x004095c9);
    /* 004095c9: cmp edi, 0xffffff */ {  u32 a = r_edi; u32 b = 0xffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004095cf: je 0x409606 */ if (fZ) goto L_00409606;
L_004095d1:; BB(0x004095d1);
    /* 004095d1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004095d2: call 0x7087dc */ r_esp -= 4; W32(r_esp, 0x4095d7u); f_007087dc();
    /* 004095d7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004095d8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004095d9: push 0x3f7fff58 */ { u32 v = 0x3f7fff58u; r_esp -= 4; W32(r_esp, v); }
    /* 004095de: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 004095e2: push dword ptr [eax + ebx*4 + 0x2c] */ { u32 v = R32((u32)(r_eax+r_ebx*4+0x2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004095e6: push dword ptr [eax + ebp*8 + 0x28] */ { u32 v = R32((u32)(r_eax+r_ebp*8+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 004095ea: call 0x789248 */ r_esp -= 4; W32(r_esp, 0x4095efu); f_00789248();
    /* 004095ef: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004095f2: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 004095f6: mov edx, dword ptr [eax + 0x1928] */ r_edx = R32((u32)(r_eax+0x1928u));
    /* 004095fc: jmp 0x409606 */ goto L_00409606;
L_004095fe:; BB(0x004095fe);
    /* 004095fe: cmp edi, 0xffffff */ {  u32 a = r_edi; u32 b = 0xffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409604: jne 0x40960e */ if (!fZ) goto L_0040960e;
L_00409606:; BB(0x00409606);
    /* 00409606: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00409609: jmp 0x409432 */ goto L_00409432;
L_0040960e:; BB(0x0040960e);
    /* 0040960e: mov eax, ecx */ r_eax = r_ecx;
    /* 00409610: fld dword ptr [eax + ebp*8 + 0x28] */ FPUSH(R_F32((u32)(r_eax+r_ebp*8+0x28u)));
    /* 00409614: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 00409618: mov ebx, 0xfe */ r_ebx = 0xfeu;
    /* 0040961d: call 0x7a9044 */ r_esp -= 4; W32(r_esp, 0x409622u); f_007a9044();
    /* 00409622: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00409627: call 0x82bb30 */ r_esp -= 4; W32(r_esp, 0x40962cu); f_0082bb30();
    /* 0040962c: push dword ptr [0xa3ad48] */ { u32 v = R32((u32)(0xa3ad48u)); r_esp -= 4; W32(r_esp, v); }
    /* 00409632: call 0x81a9b8 */ r_esp -= 4; W32(r_esp, 0x409637u); f_0081a9b8();
    /* 00409637: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00409638: mov dword ptr [esp + 0x50], edi */ W32((u32)(r_esp+0x50u), r_edi);
    /* 0040963c: mov dword ptr [esp + 0x44], ebp */ W32((u32)(r_esp+0x44u), r_ebp);
L_00409640:; BB(0x00409640);
    /* 00409640: movsx ebp, byte ptr [esi] */ r_ebp = (u32)(i32)(i8)R8((u32)(r_esi));
    /* 00409643: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409645: je 0x40990a */ if (fZ) goto L_0040990a;
L_0040964b:; BB(0x0040964b);
    /* 0040964b: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 00409651: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00409654: cmp ebp, 0x23 */ {  u32 a = r_ebp; u32 b = 0x23u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409657: je 0x409640 */ if (fZ) goto L_00409640;
L_00409659:; BB(0x00409659);
    /* 00409659: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 0040965d: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00409660: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00409661: call 0x85824c */ r_esp -= 4; W32(r_esp, 0x409666u); f_0085824c();
    /* 00409666: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00409667: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409669: je 0x409677 */ if (fZ) goto L_00409677;
L_0040966b:; BB(0x0040966b);
    /* 0040966b: fld dword ptr [0x8f9980] */ FPUSH(R_F32((u32)(0x8f9980u)));
    /* 00409671: fadd dword ptr [esp + 0x58] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x58u));
    /* 00409675: jmp 0x40967b */ goto L_0040967b;
L_00409677:; BB(0x00409677);
    /* 00409677: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
L_0040967b:; BB(0x0040967b);
    /* 0040967b: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0040967f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00409680: call 0x858339 */ r_esp -= 4; W32(r_esp, 0x409685u); f_00858339();
    /* 00409685: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00409686: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409688: jne 0x409710 */ if (!fZ) goto L_00409710;
L_0040968e:; BB(0x0040968e);
    /* 0040968e: add ebp, -0x26 */ {  u32 a = r_ebp; u32 b = 0xffffffdau; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00409691: cmp ebp, 0x58 */ {  u32 a = r_ebp; u32 b = 0x58u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00409694: ja 0x409709 */ if ((!fC&&!fZ)) goto L_00409709;
L_0040969a:; BB(0x0040969a);
    /* 0040969a: mov eax, dword ptr [ebp*4 + 0x8f94c0] */ r_eax = R32((u32)(r_ebp*4+0x8f94c0u));
    /* 004096a1: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_004096cb:; BB(0x004096cb);
    /* 004096cb: mov ebp, 0x1e */ r_ebp = 0x1eu;
    /* 004096d0: jmp 0x409750 */ goto L_00409750;
L_00409709:; BB(0x00409709);
    /* 00409709: mov ebp, 0x52 */ r_ebp = 0x52u;
    /* 0040970e: jmp 0x409750 */ goto L_00409750;
L_00409710:; BB(0x00409710);
    /* 00409710: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00409711: call 0x858212 */ r_esp -= 4; W32(r_esp, 0x409716u); f_00858212();
    /* 00409716: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00409717: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409719: je 0x409726 */ if (fZ) goto L_00409726;
L_0040971b:; BB(0x0040971b);
    /* 0040971b: add ebp, -0x41 */ {  u32 a = r_ebp; u32 b = 0xffffffbfu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0040971e: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 00409724: jmp 0x409750 */ goto L_00409750;
L_00409726:; BB(0x00409726);
    /* 00409726: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00409727: call 0x85824c */ r_esp -= 4; W32(r_esp, 0x40972cu); f_0085824c();
    /* 0040972c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0040972d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040972f: je 0x40973c */ if (fZ) goto L_0040973c;
L_00409731:; BB(0x00409731);
    /* 00409731: add ebp, -0x3d */ {  u32 a = r_ebp; u32 b = 0xffffffc3u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00409734: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 0040973a: jmp 0x409750 */ goto L_00409750;
L_0040973c:; BB(0x0040973c);
    /* 0040973c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040973d: call 0x858286 */ r_esp -= 4; W32(r_esp, 0x409742u); f_00858286();
    /* 00409742: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00409743: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409745: je 0x409750 */ if (fZ) goto L_00409750;
L_00409747:; BB(0x00409747);
    /* 00409747: add ebp, 0xe */ {  u32 a = r_ebp; u32 b = 0xeu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0040974a: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
L_00409750:; BB(0x00409750);
    /* 00409750: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00409753: cmp ebp, 0x52 */ {  u32 a = r_ebp; u32 b = 0x52u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409756: je 0x4098ac */ if (fZ) goto L_004098ac;
L_0040975c:; BB(0x0040975c);
    /* 0040975c: fld dword ptr [0x8f9988] */ FPUSH(R_F32((u32)(0x8f9988u)));
    /* 00409762: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00409766: fld dword ptr [0x8f99d4] */ FPUSH(R_F32((u32)(0x8f99d4u)));
    /* 0040976c: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 0040976e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00409770: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00409774: mov eax, 0x38e38e39 */ r_eax = 0x38e38e39u;
    /* 00409779: imul ebp */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebp; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040977b: mov eax, ebp */ r_eax = r_ebp;
    /* 0040977d: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00409780: mov ecx, edx */ r_ecx = r_edx;
    /* 00409782: sar ecx, 3 */ { u32 c = (3u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00409785: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00409787: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 0040978a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0040978c: lea edi, [eax + eax*8] */ r_edi = (u32)(r_eax+r_eax*8);
    /* 0040978f: imul eax, ecx, -0x24 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xffffffdcu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00409792: neg edi */ { u32 x = r_edi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00409794: add edi, ebp */ {  u32 a = r_edi; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00409796: add ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00409798: mov eax, 0x2aaaaaab */ r_eax = 0x2aaaaaabu;
    /* 0040979d: imul ebp */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebp; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040979f: mov eax, ebp */ r_eax = r_ebp;
    /* 004097a1: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004097a4: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004097a6: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 004097a9: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004097ab: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004097ad: sub ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 004097af: mov dword ptr [esp + 0x38], ebp */ W32((u32)(r_esp+0x38u), r_ebp);
    /* 004097b3: fild dword ptr [esp + 0x38] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x38u)));
    /* 004097b7: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 004097b9: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 004097bd: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 004097c2: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004097c7: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 004097cb: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 004097cf: fistp qword ptr [esp + 0x30] */ W64((u32)(r_esp+0x30u), (u64)fx_int64(ST(0))); FPOP();
    /* 004097d3: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 004097d7: mov eax, 0x2aaaaaab */ r_eax = 0x2aaaaaabu;
    /* 004097dc: imul edi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_edi; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004097de: mov eax, edi */ r_eax = r_edi;
    /* 004097e0: movzx ebp, byte ptr [esp + 0x30] */ r_ebp = (u32)R8((u32)(r_esp+0x30u));
    /* 004097e5: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004097e8: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004097ea: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
    /* 004097ee: fild dword ptr [esp + 0x38] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x38u)));
    /* 004097f2: mov dword ptr [esp + 0x38], ebp */ W32((u32)(r_esp+0x38u), r_ebp);
    /* 004097f6: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 004097f8: fild dword ptr [esp + 0x38] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x38u)));
    /* 004097fc: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004097fe: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 00409802: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 00409807: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0040980c: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 00409810: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 00409814: fistp qword ptr [esp + 0x30] */ W64((u32)(r_esp+0x30u), (u64)fx_int64(ST(0))); FPOP();
    /* 00409818: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 0040981c: lea eax, [ecx + ecx*8] */ r_eax = (u32)(r_ecx+r_ecx*8);
    /* 0040981f: fld dword ptr [0x8f997c] */ FPUSH(R_F32((u32)(0x8f997cu)));
    /* 00409825: fld dword ptr [0x8f997c] */ FPUSH(R_F32((u32)(0x8f997cu)));
    /* 0040982b: fdivr st(3) */ ST(0) = ST(3) / ST(0);
    /* 0040982d: movzx edx, byte ptr [esp + 0x30] */ r_edx = (u32)R8((u32)(r_esp+0x30u));
    /* 00409832: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00409836: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409838: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
    /* 0040983c: fild dword ptr [esp + 0x38] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x38u)));
    /* 00409840: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409842: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409844: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409846: fld dword ptr [eax + edi*4 + 0x8f97c0] */ FPUSH(R_F32((u32)(r_eax+r_edi*4+0x8f97c0u)));
    /* 0040984d: fadd st(5), st(0) */ ST(5) = ST(5) + ST(0);
    /* 0040984f: fadd st(4), st(0) */ ST(4) = ST(4) + ST(0);
    /* 00409851: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00409853: fdiv st(4), st(0) */ ST(4) = ST(4) / ST(0);
    /* 00409855: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 00409857: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0040985b: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0040985d: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 00409861: fld dword ptr [0x8f997c] */ FPUSH(R_F32((u32)(0x8f997cu)));
    /* 00409867: fdivr st(3) */ ST(0) = ST(3) / ST(0);
    /* 00409869: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 0040986d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0040986f: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00409871: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00409873: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 00409875: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 00409879: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0040987b: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 0040987f: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00409881: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
L_00409885:; BB(0x00409885);
    /* 00409885: movzx ebp, cl */ r_ebp = (u32)(u8)r_ecx;
    /* 00409888: cmp ebp, ebx */ {  u32 a = r_ebp; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040988a: je 0x409899 */ if (fZ) goto L_00409899;
L_0040988c:; BB(0x0040988c);
    /* 0040988c: mov edx, dword ptr [esp + 0x50] */ r_edx = R32((u32)(r_esp+0x50u));
    /* 00409890: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00409892: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x409897u); f_0082bb60();
    /* 00409897: mov ebx, ebp */ r_ebx = r_ebp;
L_00409899:; BB(0x00409899);
    /* 00409899: push 0x3f7fff58 */ { u32 v = 0x3f7fff58u; r_esp -= 4; W32(r_esp, v); }
    /* 0040989e: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 004098a2: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x4098a7u); f_0082b440();
    /* 004098a7: jmp 0x409640 */ goto L_00409640;
L_004098ac:; BB(0x004098ac);
    /* 004098ac: fld dword ptr [0x8f9978] */ FPUSH(R_F32((u32)(0x8f9978u)));
    /* 004098b2: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 004098b6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004098b8: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 004098ba: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004098bc: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004098c0: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 004098c4: fadd dword ptr [0x8f99d4] */ ST(0) = ST(0) + R_F32((u32)(0x8f99d4u));
    /* 004098ca: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 004098ce: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004098d0: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 004098d4: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 004098dc: mov eax, 0x38e38e39 */ r_eax = 0x38e38e39u;
    /* 004098e1: imul ebp */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebp; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004098e3: sar ebp, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebp = r;  } }
    /* 004098e6: mov ecx, edx */ r_ecx = r_edx;
    /* 004098e8: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 004098f0: sar ecx, 3 */ { u32 c = (3u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 004098f3: sub ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004098f5: mov dword ptr [esp + 0x18], 0 */ W32((u32)(r_esp+0x18u), 0x0u);
    /* 004098fd: mov dword ptr [esp + 0x1c], 0 */ W32((u32)(r_esp+0x1cu), 0x0u);
    /* 00409905: jmp 0x409885 */ goto L_00409885;
L_0040990a:; BB(0x0040990a);
    /* 0040990a: mov ebp, dword ptr [esp + 0x44] */ r_ebp = R32((u32)(r_esp+0x44u));
    /* 0040990e: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x409913u); f_004ac444();
    /* 00409913: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 00409917: mov edx, dword ptr [eax + 0x1928] */ r_edx = R32((u32)(r_eax+0x1928u));
    /* 0040991d: jmp 0x409606 */ goto L_00409606;
L_00409922:; BB(0x00409922);
    /* 00409922: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x409927u); f_0082dab0();
    /* 00409927: add esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0040992a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0040992b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040992c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0040992d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0040992e: ret  */ FN_RET(0x004096cb); r_esp += 4; return;
L_0040992f:; BB(0x0040992f);
    /* 0040992f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00409931: jmp 0x409520 */ goto L_00409520;
}

void f_004096d5(void)
{
    FN_ENTER(0x004096d5);
    goto L_004096d5;
L_00409432:; BB(0x00409432);
    /* 00409432: cmp ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00409434: jae 0x409922 */ if (!fC) goto L_00409922;
L_0040943a:; BB(0x0040943a);
    /* 0040943a: mov ecx, dword ptr [esp + 0x40] */ r_ecx = R32((u32)(r_esp+0x40u));
    /* 0040943e: fld dword ptr [0x8f99a4] */ FPUSH(R_F32((u32)(0x8f99a4u)));
    /* 00409444: fld dword ptr [ecx + ebp*8 + 0x2c] */ FPUSH(R_F32((u32)(r_ecx+r_ebp*8+0x2cu)));
    /* 00409448: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0040944a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0040944c: fstp dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 00409450: mov edi, 0xffffffff */ r_edi = 0xffffffffu;
    /* 00409455: lea ebx, [ebp + ebp] */ r_ebx = (u32)(r_ebp+r_ebp);
    /* 00409459: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0040945a: jbe 0x40946b */ if ((fC||fZ)) goto L_0040946b;
L_0040945c:; BB(0x0040945c);
    /* 0040945c: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 00409460: fcomp dword ptr [0x8f99a0] */ fx_compare(ST(0), R_F32((u32)(0x8f99a0u))); FPOP();
    /* 00409466: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00409468: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00409469: jb 0x409470 */ if (fC) goto L_00409470;
L_0040946b:; BB(0x0040946b);
    /* 0040946b: mov edi, 0xffffff */ r_edi = 0xffffffu;
L_00409470:; BB(0x00409470);
    /* 00409470: fcom dword ptr [esp + 0x58] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x58u))); 
    /* 00409474: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00409476: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00409477: jae 0x4094c5 */ if (!fC) goto L_004094c5;
L_00409479:; BB(0x00409479);
    /* 00409479: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 0040947d: fcomp dword ptr [0x8f999c] */ fx_compare(ST(0), R_F32((u32)(0x8f999cu))); FPOP();
    /* 00409483: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00409485: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00409486: jae 0x4094c5 */ if (!fC) goto L_004094c5;
L_00409488:; BB(0x00409488);
    /* 00409488: fld dword ptr [0x8f9994] */ FPUSH(R_F32((u32)(0x8f9994u)));
    /* 0040948e: fadd dword ptr [esp + 0x58] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x58u));
    /* 00409492: fmul dword ptr [0x8f9998] */ ST(0) = ST(0) * R_F32((u32)(0x8f9998u));
    /* 00409498: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 0040949a: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 0040949e: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 004094a3: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004094a8: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 004094ac: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 004094b0: fistp qword ptr [esp + 0x30] */ W64((u32)(r_esp+0x30u), (u64)fx_int64(ST(0))); FPOP();
    /* 004094b4: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 004094b8: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 004094bc: shl edi, 0x18 */ { u32 c = (24u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 004094bf: or edi, 0xffffff */ {  u32 a = r_edi; u32 b = 0xffffffu; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
L_004094c5:; BB(0x004094c5);
    /* 004094c5: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 004094c9: fcomp dword ptr [0x8f9990] */ fx_compare(ST(0), R_F32((u32)(0x8f9990u))); FPOP();
    /* 004094cf: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004094d1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004094d2: jbe 0x409520 */ if ((fC||fZ)) goto L_00409520;
L_004094d4:; BB(0x004094d4);
    /* 004094d4: fld dword ptr [0x8f99a0] */ FPUSH(R_F32((u32)(0x8f99a0u)));
    /* 004094da: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 004094de: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 004094e0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004094e2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004094e3: jae 0x40992f */ if (!fC) goto L_0040992f;
L_004094e9:; BB(0x004094e9);
    /* 004094e9: fsub dword ptr [esp + 0x58] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x58u));
    /* 004094ed: fmul dword ptr [0x8f9998] */ ST(0) = ST(0) * R_F32((u32)(0x8f9998u));
    /* 004094f3: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 004094f5: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 004094f9: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 004094fe: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00409503: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 00409507: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 0040950b: fistp qword ptr [esp + 0x30] */ W64((u32)(r_esp+0x30u), (u64)fx_int64(ST(0))); FPOP();
    /* 0040950f: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 00409513: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 00409517: shl edi, 0x18 */ { u32 c = (24u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 0040951a: or edi, 0xffffff */ {  u32 a = r_edi; u32 b = 0xffffffu; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
L_00409520:; BB(0x00409520);
    /* 00409520: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00409522: mov eax, dword ptr [0xa3ad40] */ r_eax = R32((u32)(0xa3ad40u));
    /* 00409527: mov esi, dword ptr [eax + ebp*4] */ r_esi = R32((u32)(r_eax+r_ebp*4));
    /* 0040952a: movsx eax, byte ptr [esi] */ r_eax = (u32)(i32)(i8)R8((u32)(r_esi));
    /* 0040952d: cmp eax, 0x23 */ {  u32 a = r_eax; u32 b = 0x23u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409530: je 0x4095fe */ if (fZ) goto L_004095fe;
L_00409536:; BB(0x00409536);
    /* 00409536: cmp eax, 0x21 */ {  u32 a = r_eax; u32 b = 0x21u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409539: jne 0x409581 */ if (!fZ) goto L_00409581;
L_0040953b:; BB(0x0040953b);
    /* 0040953b: mov ecx, dword ptr [0xa3ad48] */ r_ecx = R32((u32)(0xa3ad48u));
    /* 00409541: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x409546u); f_00829cc8();
    /* 00409546: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0040954b: call 0x82bb30 */ r_esp -= 4; W32(r_esp, 0x409550u); f_0082bb30();
    /* 00409550: mov ecx, 3 */ r_ecx = 0x3u;
    /* 00409555: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0040955a: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x40955fu); f_0082bb60();
    /* 0040955f: push 0x3f7fff58 */ { u32 v = 0x3f7fff58u; r_esp -= 4; W32(r_esp, v); }
    /* 00409564: mov ecx, dword ptr [esp + 0x50] */ r_ecx = R32((u32)(r_esp+0x50u));
    /* 00409568: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x40956du); f_0082b440();
    /* 0040956d: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x409572u); f_004ac444();
    /* 00409572: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 00409576: mov edx, dword ptr [eax + 0x1928] */ r_edx = R32((u32)(r_eax+0x1928u));
    /* 0040957c: jmp 0x409606 */ goto L_00409606;
L_00409581:; BB(0x00409581);
    /* 00409581: cmp eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409584: jne 0x4095c9 */ if (!fZ) goto L_004095c9;
L_00409586:; BB(0x00409586);
    /* 00409586: mov ecx, dword ptr [0xa3ad48] */ r_ecx = R32((u32)(0xa3ad48u));
    /* 0040958c: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x409591u); f_00829cc8();
    /* 00409591: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00409596: call 0x82bb30 */ r_esp -= 4; W32(r_esp, 0x40959bu); f_0082bb30();
    /* 0040959b: mov ecx, 4 */ r_ecx = 0x4u;
    /* 004095a0: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 004095a5: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x4095aau); f_0082bb60();
    /* 004095aa: push 0x3f7fff58 */ { u32 v = 0x3f7fff58u; r_esp -= 4; W32(r_esp, v); }
    /* 004095af: mov ecx, dword ptr [esp + 0x4c] */ r_ecx = R32((u32)(r_esp+0x4cu));
    /* 004095b3: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x4095b8u); f_0082b440();
    /* 004095b8: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x4095bdu); f_004ac444();
    /* 004095bd: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 004095c1: mov edx, dword ptr [eax + 0x1928] */ r_edx = R32((u32)(r_eax+0x1928u));
    /* 004095c7: jmp 0x409606 */ goto L_00409606;
L_004095c9:; BB(0x004095c9);
    /* 004095c9: cmp edi, 0xffffff */ {  u32 a = r_edi; u32 b = 0xffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004095cf: je 0x409606 */ if (fZ) goto L_00409606;
L_004095d1:; BB(0x004095d1);
    /* 004095d1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004095d2: call 0x7087dc */ r_esp -= 4; W32(r_esp, 0x4095d7u); f_007087dc();
    /* 004095d7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004095d8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004095d9: push 0x3f7fff58 */ { u32 v = 0x3f7fff58u; r_esp -= 4; W32(r_esp, v); }
    /* 004095de: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 004095e2: push dword ptr [eax + ebx*4 + 0x2c] */ { u32 v = R32((u32)(r_eax+r_ebx*4+0x2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004095e6: push dword ptr [eax + ebp*8 + 0x28] */ { u32 v = R32((u32)(r_eax+r_ebp*8+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 004095ea: call 0x789248 */ r_esp -= 4; W32(r_esp, 0x4095efu); f_00789248();
    /* 004095ef: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004095f2: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 004095f6: mov edx, dword ptr [eax + 0x1928] */ r_edx = R32((u32)(r_eax+0x1928u));
    /* 004095fc: jmp 0x409606 */ goto L_00409606;
L_004095fe:; BB(0x004095fe);
    /* 004095fe: cmp edi, 0xffffff */ {  u32 a = r_edi; u32 b = 0xffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409604: jne 0x40960e */ if (!fZ) goto L_0040960e;
L_00409606:; BB(0x00409606);
    /* 00409606: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00409609: jmp 0x409432 */ goto L_00409432;
L_0040960e:; BB(0x0040960e);
    /* 0040960e: mov eax, ecx */ r_eax = r_ecx;
    /* 00409610: fld dword ptr [eax + ebp*8 + 0x28] */ FPUSH(R_F32((u32)(r_eax+r_ebp*8+0x28u)));
    /* 00409614: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 00409618: mov ebx, 0xfe */ r_ebx = 0xfeu;
    /* 0040961d: call 0x7a9044 */ r_esp -= 4; W32(r_esp, 0x409622u); f_007a9044();
    /* 00409622: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00409627: call 0x82bb30 */ r_esp -= 4; W32(r_esp, 0x40962cu); f_0082bb30();
    /* 0040962c: push dword ptr [0xa3ad48] */ { u32 v = R32((u32)(0xa3ad48u)); r_esp -= 4; W32(r_esp, v); }
    /* 00409632: call 0x81a9b8 */ r_esp -= 4; W32(r_esp, 0x409637u); f_0081a9b8();
    /* 00409637: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00409638: mov dword ptr [esp + 0x50], edi */ W32((u32)(r_esp+0x50u), r_edi);
    /* 0040963c: mov dword ptr [esp + 0x44], ebp */ W32((u32)(r_esp+0x44u), r_ebp);
L_00409640:; BB(0x00409640);
    /* 00409640: movsx ebp, byte ptr [esi] */ r_ebp = (u32)(i32)(i8)R8((u32)(r_esi));
    /* 00409643: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409645: je 0x40990a */ if (fZ) goto L_0040990a;
L_0040964b:; BB(0x0040964b);
    /* 0040964b: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 00409651: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00409654: cmp ebp, 0x23 */ {  u32 a = r_ebp; u32 b = 0x23u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409657: je 0x409640 */ if (fZ) goto L_00409640;
L_00409659:; BB(0x00409659);
    /* 00409659: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 0040965d: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00409660: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00409661: call 0x85824c */ r_esp -= 4; W32(r_esp, 0x409666u); f_0085824c();
    /* 00409666: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00409667: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409669: je 0x409677 */ if (fZ) goto L_00409677;
L_0040966b:; BB(0x0040966b);
    /* 0040966b: fld dword ptr [0x8f9980] */ FPUSH(R_F32((u32)(0x8f9980u)));
    /* 00409671: fadd dword ptr [esp + 0x58] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x58u));
    /* 00409675: jmp 0x40967b */ goto L_0040967b;
L_00409677:; BB(0x00409677);
    /* 00409677: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
L_0040967b:; BB(0x0040967b);
    /* 0040967b: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0040967f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00409680: call 0x858339 */ r_esp -= 4; W32(r_esp, 0x409685u); f_00858339();
    /* 00409685: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00409686: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409688: jne 0x409710 */ if (!fZ) goto L_00409710;
L_0040968e:; BB(0x0040968e);
    /* 0040968e: add ebp, -0x26 */ {  u32 a = r_ebp; u32 b = 0xffffffdau; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00409691: cmp ebp, 0x58 */ {  u32 a = r_ebp; u32 b = 0x58u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00409694: ja 0x409709 */ if ((!fC&&!fZ)) goto L_00409709;
L_0040969a:; BB(0x0040969a);
    /* 0040969a: mov eax, dword ptr [ebp*4 + 0x8f94c0] */ r_eax = R32((u32)(r_ebp*4+0x8f94c0u));
    /* 004096a1: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_004096d5:; BB(0x004096d5);
    /* 004096d5: mov ebp, 0x1c */ r_ebp = 0x1cu;
    /* 004096da: jmp 0x409750 */ goto L_00409750;
L_00409709:; BB(0x00409709);
    /* 00409709: mov ebp, 0x52 */ r_ebp = 0x52u;
    /* 0040970e: jmp 0x409750 */ goto L_00409750;
L_00409710:; BB(0x00409710);
    /* 00409710: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00409711: call 0x858212 */ r_esp -= 4; W32(r_esp, 0x409716u); f_00858212();
    /* 00409716: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00409717: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409719: je 0x409726 */ if (fZ) goto L_00409726;
L_0040971b:; BB(0x0040971b);
    /* 0040971b: add ebp, -0x41 */ {  u32 a = r_ebp; u32 b = 0xffffffbfu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0040971e: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 00409724: jmp 0x409750 */ goto L_00409750;
L_00409726:; BB(0x00409726);
    /* 00409726: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00409727: call 0x85824c */ r_esp -= 4; W32(r_esp, 0x40972cu); f_0085824c();
    /* 0040972c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0040972d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040972f: je 0x40973c */ if (fZ) goto L_0040973c;
L_00409731:; BB(0x00409731);
    /* 00409731: add ebp, -0x3d */ {  u32 a = r_ebp; u32 b = 0xffffffc3u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00409734: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 0040973a: jmp 0x409750 */ goto L_00409750;
L_0040973c:; BB(0x0040973c);
    /* 0040973c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040973d: call 0x858286 */ r_esp -= 4; W32(r_esp, 0x409742u); f_00858286();
    /* 00409742: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00409743: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409745: je 0x409750 */ if (fZ) goto L_00409750;
L_00409747:; BB(0x00409747);
    /* 00409747: add ebp, 0xe */ {  u32 a = r_ebp; u32 b = 0xeu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0040974a: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
L_00409750:; BB(0x00409750);
    /* 00409750: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00409753: cmp ebp, 0x52 */ {  u32 a = r_ebp; u32 b = 0x52u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409756: je 0x4098ac */ if (fZ) goto L_004098ac;
L_0040975c:; BB(0x0040975c);
    /* 0040975c: fld dword ptr [0x8f9988] */ FPUSH(R_F32((u32)(0x8f9988u)));
    /* 00409762: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00409766: fld dword ptr [0x8f99d4] */ FPUSH(R_F32((u32)(0x8f99d4u)));
    /* 0040976c: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 0040976e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00409770: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00409774: mov eax, 0x38e38e39 */ r_eax = 0x38e38e39u;
    /* 00409779: imul ebp */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebp; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040977b: mov eax, ebp */ r_eax = r_ebp;
    /* 0040977d: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00409780: mov ecx, edx */ r_ecx = r_edx;
    /* 00409782: sar ecx, 3 */ { u32 c = (3u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00409785: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00409787: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 0040978a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0040978c: lea edi, [eax + eax*8] */ r_edi = (u32)(r_eax+r_eax*8);
    /* 0040978f: imul eax, ecx, -0x24 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xffffffdcu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00409792: neg edi */ { u32 x = r_edi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00409794: add edi, ebp */ {  u32 a = r_edi; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00409796: add ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00409798: mov eax, 0x2aaaaaab */ r_eax = 0x2aaaaaabu;
    /* 0040979d: imul ebp */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebp; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040979f: mov eax, ebp */ r_eax = r_ebp;
    /* 004097a1: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004097a4: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004097a6: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 004097a9: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004097ab: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004097ad: sub ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 004097af: mov dword ptr [esp + 0x38], ebp */ W32((u32)(r_esp+0x38u), r_ebp);
    /* 004097b3: fild dword ptr [esp + 0x38] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x38u)));
    /* 004097b7: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 004097b9: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 004097bd: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 004097c2: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004097c7: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 004097cb: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 004097cf: fistp qword ptr [esp + 0x30] */ W64((u32)(r_esp+0x30u), (u64)fx_int64(ST(0))); FPOP();
    /* 004097d3: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 004097d7: mov eax, 0x2aaaaaab */ r_eax = 0x2aaaaaabu;
    /* 004097dc: imul edi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_edi; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004097de: mov eax, edi */ r_eax = r_edi;
    /* 004097e0: movzx ebp, byte ptr [esp + 0x30] */ r_ebp = (u32)R8((u32)(r_esp+0x30u));
    /* 004097e5: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004097e8: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004097ea: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
    /* 004097ee: fild dword ptr [esp + 0x38] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x38u)));
    /* 004097f2: mov dword ptr [esp + 0x38], ebp */ W32((u32)(r_esp+0x38u), r_ebp);
    /* 004097f6: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 004097f8: fild dword ptr [esp + 0x38] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x38u)));
    /* 004097fc: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004097fe: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 00409802: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 00409807: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0040980c: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 00409810: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 00409814: fistp qword ptr [esp + 0x30] */ W64((u32)(r_esp+0x30u), (u64)fx_int64(ST(0))); FPOP();
    /* 00409818: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 0040981c: lea eax, [ecx + ecx*8] */ r_eax = (u32)(r_ecx+r_ecx*8);
    /* 0040981f: fld dword ptr [0x8f997c] */ FPUSH(R_F32((u32)(0x8f997cu)));
    /* 00409825: fld dword ptr [0x8f997c] */ FPUSH(R_F32((u32)(0x8f997cu)));
    /* 0040982b: fdivr st(3) */ ST(0) = ST(3) / ST(0);
    /* 0040982d: movzx edx, byte ptr [esp + 0x30] */ r_edx = (u32)R8((u32)(r_esp+0x30u));
    /* 00409832: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00409836: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409838: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
    /* 0040983c: fild dword ptr [esp + 0x38] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x38u)));
    /* 00409840: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409842: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409844: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409846: fld dword ptr [eax + edi*4 + 0x8f97c0] */ FPUSH(R_F32((u32)(r_eax+r_edi*4+0x8f97c0u)));
    /* 0040984d: fadd st(5), st(0) */ ST(5) = ST(5) + ST(0);
    /* 0040984f: fadd st(4), st(0) */ ST(4) = ST(4) + ST(0);
    /* 00409851: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00409853: fdiv st(4), st(0) */ ST(4) = ST(4) / ST(0);
    /* 00409855: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 00409857: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0040985b: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0040985d: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 00409861: fld dword ptr [0x8f997c] */ FPUSH(R_F32((u32)(0x8f997cu)));
    /* 00409867: fdivr st(3) */ ST(0) = ST(3) / ST(0);
    /* 00409869: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 0040986d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0040986f: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00409871: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00409873: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 00409875: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 00409879: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0040987b: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 0040987f: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00409881: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
L_00409885:; BB(0x00409885);
    /* 00409885: movzx ebp, cl */ r_ebp = (u32)(u8)r_ecx;
    /* 00409888: cmp ebp, ebx */ {  u32 a = r_ebp; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040988a: je 0x409899 */ if (fZ) goto L_00409899;
L_0040988c:; BB(0x0040988c);
    /* 0040988c: mov edx, dword ptr [esp + 0x50] */ r_edx = R32((u32)(r_esp+0x50u));
    /* 00409890: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00409892: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x409897u); f_0082bb60();
    /* 00409897: mov ebx, ebp */ r_ebx = r_ebp;
L_00409899:; BB(0x00409899);
    /* 00409899: push 0x3f7fff58 */ { u32 v = 0x3f7fff58u; r_esp -= 4; W32(r_esp, v); }
    /* 0040989e: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 004098a2: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x4098a7u); f_0082b440();
    /* 004098a7: jmp 0x409640 */ goto L_00409640;
L_004098ac:; BB(0x004098ac);
    /* 004098ac: fld dword ptr [0x8f9978] */ FPUSH(R_F32((u32)(0x8f9978u)));
    /* 004098b2: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 004098b6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004098b8: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 004098ba: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004098bc: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004098c0: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 004098c4: fadd dword ptr [0x8f99d4] */ ST(0) = ST(0) + R_F32((u32)(0x8f99d4u));
    /* 004098ca: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 004098ce: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004098d0: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 004098d4: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 004098dc: mov eax, 0x38e38e39 */ r_eax = 0x38e38e39u;
    /* 004098e1: imul ebp */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebp; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004098e3: sar ebp, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebp = r;  } }
    /* 004098e6: mov ecx, edx */ r_ecx = r_edx;
    /* 004098e8: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 004098f0: sar ecx, 3 */ { u32 c = (3u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 004098f3: sub ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004098f5: mov dword ptr [esp + 0x18], 0 */ W32((u32)(r_esp+0x18u), 0x0u);
    /* 004098fd: mov dword ptr [esp + 0x1c], 0 */ W32((u32)(r_esp+0x1cu), 0x0u);
    /* 00409905: jmp 0x409885 */ goto L_00409885;
L_0040990a:; BB(0x0040990a);
    /* 0040990a: mov ebp, dword ptr [esp + 0x44] */ r_ebp = R32((u32)(r_esp+0x44u));
    /* 0040990e: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x409913u); f_004ac444();
    /* 00409913: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 00409917: mov edx, dword ptr [eax + 0x1928] */ r_edx = R32((u32)(r_eax+0x1928u));
    /* 0040991d: jmp 0x409606 */ goto L_00409606;
L_00409922:; BB(0x00409922);
    /* 00409922: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x409927u); f_0082dab0();
    /* 00409927: add esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0040992a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0040992b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040992c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0040992d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0040992e: ret  */ FN_RET(0x004096d5); r_esp += 4; return;
L_0040992f:; BB(0x0040992f);
    /* 0040992f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00409931: jmp 0x409520 */ goto L_00409520;
}

void f_004096df(void)
{
    FN_ENTER(0x004096df);
    goto L_004096df;
L_00409432:; BB(0x00409432);
    /* 00409432: cmp ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00409434: jae 0x409922 */ if (!fC) goto L_00409922;
L_0040943a:; BB(0x0040943a);
    /* 0040943a: mov ecx, dword ptr [esp + 0x40] */ r_ecx = R32((u32)(r_esp+0x40u));
    /* 0040943e: fld dword ptr [0x8f99a4] */ FPUSH(R_F32((u32)(0x8f99a4u)));
    /* 00409444: fld dword ptr [ecx + ebp*8 + 0x2c] */ FPUSH(R_F32((u32)(r_ecx+r_ebp*8+0x2cu)));
    /* 00409448: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0040944a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0040944c: fstp dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 00409450: mov edi, 0xffffffff */ r_edi = 0xffffffffu;
    /* 00409455: lea ebx, [ebp + ebp] */ r_ebx = (u32)(r_ebp+r_ebp);
    /* 00409459: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0040945a: jbe 0x40946b */ if ((fC||fZ)) goto L_0040946b;
L_0040945c:; BB(0x0040945c);
    /* 0040945c: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 00409460: fcomp dword ptr [0x8f99a0] */ fx_compare(ST(0), R_F32((u32)(0x8f99a0u))); FPOP();
    /* 00409466: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00409468: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00409469: jb 0x409470 */ if (fC) goto L_00409470;
L_0040946b:; BB(0x0040946b);
    /* 0040946b: mov edi, 0xffffff */ r_edi = 0xffffffu;
L_00409470:; BB(0x00409470);
    /* 00409470: fcom dword ptr [esp + 0x58] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x58u))); 
    /* 00409474: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00409476: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00409477: jae 0x4094c5 */ if (!fC) goto L_004094c5;
L_00409479:; BB(0x00409479);
    /* 00409479: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 0040947d: fcomp dword ptr [0x8f999c] */ fx_compare(ST(0), R_F32((u32)(0x8f999cu))); FPOP();
    /* 00409483: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00409485: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00409486: jae 0x4094c5 */ if (!fC) goto L_004094c5;
L_00409488:; BB(0x00409488);
    /* 00409488: fld dword ptr [0x8f9994] */ FPUSH(R_F32((u32)(0x8f9994u)));
    /* 0040948e: fadd dword ptr [esp + 0x58] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x58u));
    /* 00409492: fmul dword ptr [0x8f9998] */ ST(0) = ST(0) * R_F32((u32)(0x8f9998u));
    /* 00409498: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 0040949a: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 0040949e: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 004094a3: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004094a8: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 004094ac: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 004094b0: fistp qword ptr [esp + 0x30] */ W64((u32)(r_esp+0x30u), (u64)fx_int64(ST(0))); FPOP();
    /* 004094b4: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 004094b8: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 004094bc: shl edi, 0x18 */ { u32 c = (24u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 004094bf: or edi, 0xffffff */ {  u32 a = r_edi; u32 b = 0xffffffu; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
L_004094c5:; BB(0x004094c5);
    /* 004094c5: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 004094c9: fcomp dword ptr [0x8f9990] */ fx_compare(ST(0), R_F32((u32)(0x8f9990u))); FPOP();
    /* 004094cf: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004094d1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004094d2: jbe 0x409520 */ if ((fC||fZ)) goto L_00409520;
L_004094d4:; BB(0x004094d4);
    /* 004094d4: fld dword ptr [0x8f99a0] */ FPUSH(R_F32((u32)(0x8f99a0u)));
    /* 004094da: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 004094de: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 004094e0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004094e2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004094e3: jae 0x40992f */ if (!fC) goto L_0040992f;
L_004094e9:; BB(0x004094e9);
    /* 004094e9: fsub dword ptr [esp + 0x58] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x58u));
    /* 004094ed: fmul dword ptr [0x8f9998] */ ST(0) = ST(0) * R_F32((u32)(0x8f9998u));
    /* 004094f3: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 004094f5: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 004094f9: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 004094fe: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00409503: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 00409507: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 0040950b: fistp qword ptr [esp + 0x30] */ W64((u32)(r_esp+0x30u), (u64)fx_int64(ST(0))); FPOP();
    /* 0040950f: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 00409513: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 00409517: shl edi, 0x18 */ { u32 c = (24u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 0040951a: or edi, 0xffffff */ {  u32 a = r_edi; u32 b = 0xffffffu; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
L_00409520:; BB(0x00409520);
    /* 00409520: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00409522: mov eax, dword ptr [0xa3ad40] */ r_eax = R32((u32)(0xa3ad40u));
    /* 00409527: mov esi, dword ptr [eax + ebp*4] */ r_esi = R32((u32)(r_eax+r_ebp*4));
    /* 0040952a: movsx eax, byte ptr [esi] */ r_eax = (u32)(i32)(i8)R8((u32)(r_esi));
    /* 0040952d: cmp eax, 0x23 */ {  u32 a = r_eax; u32 b = 0x23u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409530: je 0x4095fe */ if (fZ) goto L_004095fe;
L_00409536:; BB(0x00409536);
    /* 00409536: cmp eax, 0x21 */ {  u32 a = r_eax; u32 b = 0x21u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409539: jne 0x409581 */ if (!fZ) goto L_00409581;
L_0040953b:; BB(0x0040953b);
    /* 0040953b: mov ecx, dword ptr [0xa3ad48] */ r_ecx = R32((u32)(0xa3ad48u));
    /* 00409541: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x409546u); f_00829cc8();
    /* 00409546: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0040954b: call 0x82bb30 */ r_esp -= 4; W32(r_esp, 0x409550u); f_0082bb30();
    /* 00409550: mov ecx, 3 */ r_ecx = 0x3u;
    /* 00409555: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0040955a: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x40955fu); f_0082bb60();
    /* 0040955f: push 0x3f7fff58 */ { u32 v = 0x3f7fff58u; r_esp -= 4; W32(r_esp, v); }
    /* 00409564: mov ecx, dword ptr [esp + 0x50] */ r_ecx = R32((u32)(r_esp+0x50u));
    /* 00409568: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x40956du); f_0082b440();
    /* 0040956d: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x409572u); f_004ac444();
    /* 00409572: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 00409576: mov edx, dword ptr [eax + 0x1928] */ r_edx = R32((u32)(r_eax+0x1928u));
    /* 0040957c: jmp 0x409606 */ goto L_00409606;
L_00409581:; BB(0x00409581);
    /* 00409581: cmp eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409584: jne 0x4095c9 */ if (!fZ) goto L_004095c9;
L_00409586:; BB(0x00409586);
    /* 00409586: mov ecx, dword ptr [0xa3ad48] */ r_ecx = R32((u32)(0xa3ad48u));
    /* 0040958c: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x409591u); f_00829cc8();
    /* 00409591: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00409596: call 0x82bb30 */ r_esp -= 4; W32(r_esp, 0x40959bu); f_0082bb30();
    /* 0040959b: mov ecx, 4 */ r_ecx = 0x4u;
    /* 004095a0: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 004095a5: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x4095aau); f_0082bb60();
    /* 004095aa: push 0x3f7fff58 */ { u32 v = 0x3f7fff58u; r_esp -= 4; W32(r_esp, v); }
    /* 004095af: mov ecx, dword ptr [esp + 0x4c] */ r_ecx = R32((u32)(r_esp+0x4cu));
    /* 004095b3: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x4095b8u); f_0082b440();
    /* 004095b8: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x4095bdu); f_004ac444();
    /* 004095bd: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 004095c1: mov edx, dword ptr [eax + 0x1928] */ r_edx = R32((u32)(r_eax+0x1928u));
    /* 004095c7: jmp 0x409606 */ goto L_00409606;
L_004095c9:; BB(0x004095c9);
    /* 004095c9: cmp edi, 0xffffff */ {  u32 a = r_edi; u32 b = 0xffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004095cf: je 0x409606 */ if (fZ) goto L_00409606;
L_004095d1:; BB(0x004095d1);
    /* 004095d1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004095d2: call 0x7087dc */ r_esp -= 4; W32(r_esp, 0x4095d7u); f_007087dc();
    /* 004095d7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004095d8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004095d9: push 0x3f7fff58 */ { u32 v = 0x3f7fff58u; r_esp -= 4; W32(r_esp, v); }
    /* 004095de: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 004095e2: push dword ptr [eax + ebx*4 + 0x2c] */ { u32 v = R32((u32)(r_eax+r_ebx*4+0x2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004095e6: push dword ptr [eax + ebp*8 + 0x28] */ { u32 v = R32((u32)(r_eax+r_ebp*8+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 004095ea: call 0x789248 */ r_esp -= 4; W32(r_esp, 0x4095efu); f_00789248();
    /* 004095ef: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004095f2: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 004095f6: mov edx, dword ptr [eax + 0x1928] */ r_edx = R32((u32)(r_eax+0x1928u));
    /* 004095fc: jmp 0x409606 */ goto L_00409606;
L_004095fe:; BB(0x004095fe);
    /* 004095fe: cmp edi, 0xffffff */ {  u32 a = r_edi; u32 b = 0xffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409604: jne 0x40960e */ if (!fZ) goto L_0040960e;
L_00409606:; BB(0x00409606);
    /* 00409606: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00409609: jmp 0x409432 */ goto L_00409432;
L_0040960e:; BB(0x0040960e);
    /* 0040960e: mov eax, ecx */ r_eax = r_ecx;
    /* 00409610: fld dword ptr [eax + ebp*8 + 0x28] */ FPUSH(R_F32((u32)(r_eax+r_ebp*8+0x28u)));
    /* 00409614: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 00409618: mov ebx, 0xfe */ r_ebx = 0xfeu;
    /* 0040961d: call 0x7a9044 */ r_esp -= 4; W32(r_esp, 0x409622u); f_007a9044();
    /* 00409622: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00409627: call 0x82bb30 */ r_esp -= 4; W32(r_esp, 0x40962cu); f_0082bb30();
    /* 0040962c: push dword ptr [0xa3ad48] */ { u32 v = R32((u32)(0xa3ad48u)); r_esp -= 4; W32(r_esp, v); }
    /* 00409632: call 0x81a9b8 */ r_esp -= 4; W32(r_esp, 0x409637u); f_0081a9b8();
    /* 00409637: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00409638: mov dword ptr [esp + 0x50], edi */ W32((u32)(r_esp+0x50u), r_edi);
    /* 0040963c: mov dword ptr [esp + 0x44], ebp */ W32((u32)(r_esp+0x44u), r_ebp);
L_00409640:; BB(0x00409640);
    /* 00409640: movsx ebp, byte ptr [esi] */ r_ebp = (u32)(i32)(i8)R8((u32)(r_esi));
    /* 00409643: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409645: je 0x40990a */ if (fZ) goto L_0040990a;
L_0040964b:; BB(0x0040964b);
    /* 0040964b: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 00409651: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00409654: cmp ebp, 0x23 */ {  u32 a = r_ebp; u32 b = 0x23u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409657: je 0x409640 */ if (fZ) goto L_00409640;
L_00409659:; BB(0x00409659);
    /* 00409659: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 0040965d: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00409660: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00409661: call 0x85824c */ r_esp -= 4; W32(r_esp, 0x409666u); f_0085824c();
    /* 00409666: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00409667: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409669: je 0x409677 */ if (fZ) goto L_00409677;
L_0040966b:; BB(0x0040966b);
    /* 0040966b: fld dword ptr [0x8f9980] */ FPUSH(R_F32((u32)(0x8f9980u)));
    /* 00409671: fadd dword ptr [esp + 0x58] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x58u));
    /* 00409675: jmp 0x40967b */ goto L_0040967b;
L_00409677:; BB(0x00409677);
    /* 00409677: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
L_0040967b:; BB(0x0040967b);
    /* 0040967b: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0040967f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00409680: call 0x858339 */ r_esp -= 4; W32(r_esp, 0x409685u); f_00858339();
    /* 00409685: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00409686: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409688: jne 0x409710 */ if (!fZ) goto L_00409710;
L_0040968e:; BB(0x0040968e);
    /* 0040968e: add ebp, -0x26 */ {  u32 a = r_ebp; u32 b = 0xffffffdau; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00409691: cmp ebp, 0x58 */ {  u32 a = r_ebp; u32 b = 0x58u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00409694: ja 0x409709 */ if ((!fC&&!fZ)) goto L_00409709;
L_0040969a:; BB(0x0040969a);
    /* 0040969a: mov eax, dword ptr [ebp*4 + 0x8f94c0] */ r_eax = R32((u32)(r_ebp*4+0x8f94c0u));
    /* 004096a1: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_004096df:; BB(0x004096df);
    /* 004096df: mov ebp, 0x1d */ r_ebp = 0x1du;
    /* 004096e4: jmp 0x409750 */ goto L_00409750;
L_00409709:; BB(0x00409709);
    /* 00409709: mov ebp, 0x52 */ r_ebp = 0x52u;
    /* 0040970e: jmp 0x409750 */ goto L_00409750;
L_00409710:; BB(0x00409710);
    /* 00409710: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00409711: call 0x858212 */ r_esp -= 4; W32(r_esp, 0x409716u); f_00858212();
    /* 00409716: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00409717: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409719: je 0x409726 */ if (fZ) goto L_00409726;
L_0040971b:; BB(0x0040971b);
    /* 0040971b: add ebp, -0x41 */ {  u32 a = r_ebp; u32 b = 0xffffffbfu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0040971e: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 00409724: jmp 0x409750 */ goto L_00409750;
L_00409726:; BB(0x00409726);
    /* 00409726: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00409727: call 0x85824c */ r_esp -= 4; W32(r_esp, 0x40972cu); f_0085824c();
    /* 0040972c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0040972d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040972f: je 0x40973c */ if (fZ) goto L_0040973c;
L_00409731:; BB(0x00409731);
    /* 00409731: add ebp, -0x3d */ {  u32 a = r_ebp; u32 b = 0xffffffc3u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00409734: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 0040973a: jmp 0x409750 */ goto L_00409750;
L_0040973c:; BB(0x0040973c);
    /* 0040973c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040973d: call 0x858286 */ r_esp -= 4; W32(r_esp, 0x409742u); f_00858286();
    /* 00409742: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00409743: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409745: je 0x409750 */ if (fZ) goto L_00409750;
L_00409747:; BB(0x00409747);
    /* 00409747: add ebp, 0xe */ {  u32 a = r_ebp; u32 b = 0xeu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0040974a: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
L_00409750:; BB(0x00409750);
    /* 00409750: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00409753: cmp ebp, 0x52 */ {  u32 a = r_ebp; u32 b = 0x52u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409756: je 0x4098ac */ if (fZ) goto L_004098ac;
L_0040975c:; BB(0x0040975c);
    /* 0040975c: fld dword ptr [0x8f9988] */ FPUSH(R_F32((u32)(0x8f9988u)));
    /* 00409762: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00409766: fld dword ptr [0x8f99d4] */ FPUSH(R_F32((u32)(0x8f99d4u)));
    /* 0040976c: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 0040976e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00409770: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00409774: mov eax, 0x38e38e39 */ r_eax = 0x38e38e39u;
    /* 00409779: imul ebp */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebp; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040977b: mov eax, ebp */ r_eax = r_ebp;
    /* 0040977d: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00409780: mov ecx, edx */ r_ecx = r_edx;
    /* 00409782: sar ecx, 3 */ { u32 c = (3u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00409785: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00409787: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 0040978a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0040978c: lea edi, [eax + eax*8] */ r_edi = (u32)(r_eax+r_eax*8);
    /* 0040978f: imul eax, ecx, -0x24 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xffffffdcu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00409792: neg edi */ { u32 x = r_edi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00409794: add edi, ebp */ {  u32 a = r_edi; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00409796: add ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00409798: mov eax, 0x2aaaaaab */ r_eax = 0x2aaaaaabu;
    /* 0040979d: imul ebp */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebp; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040979f: mov eax, ebp */ r_eax = r_ebp;
    /* 004097a1: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004097a4: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004097a6: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 004097a9: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004097ab: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004097ad: sub ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 004097af: mov dword ptr [esp + 0x38], ebp */ W32((u32)(r_esp+0x38u), r_ebp);
    /* 004097b3: fild dword ptr [esp + 0x38] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x38u)));
    /* 004097b7: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 004097b9: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 004097bd: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 004097c2: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004097c7: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 004097cb: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 004097cf: fistp qword ptr [esp + 0x30] */ W64((u32)(r_esp+0x30u), (u64)fx_int64(ST(0))); FPOP();
    /* 004097d3: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 004097d7: mov eax, 0x2aaaaaab */ r_eax = 0x2aaaaaabu;
    /* 004097dc: imul edi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_edi; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004097de: mov eax, edi */ r_eax = r_edi;
    /* 004097e0: movzx ebp, byte ptr [esp + 0x30] */ r_ebp = (u32)R8((u32)(r_esp+0x30u));
    /* 004097e5: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004097e8: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004097ea: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
    /* 004097ee: fild dword ptr [esp + 0x38] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x38u)));
    /* 004097f2: mov dword ptr [esp + 0x38], ebp */ W32((u32)(r_esp+0x38u), r_ebp);
    /* 004097f6: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 004097f8: fild dword ptr [esp + 0x38] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x38u)));
    /* 004097fc: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004097fe: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 00409802: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 00409807: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0040980c: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 00409810: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 00409814: fistp qword ptr [esp + 0x30] */ W64((u32)(r_esp+0x30u), (u64)fx_int64(ST(0))); FPOP();
    /* 00409818: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 0040981c: lea eax, [ecx + ecx*8] */ r_eax = (u32)(r_ecx+r_ecx*8);
    /* 0040981f: fld dword ptr [0x8f997c] */ FPUSH(R_F32((u32)(0x8f997cu)));
    /* 00409825: fld dword ptr [0x8f997c] */ FPUSH(R_F32((u32)(0x8f997cu)));
    /* 0040982b: fdivr st(3) */ ST(0) = ST(3) / ST(0);
    /* 0040982d: movzx edx, byte ptr [esp + 0x30] */ r_edx = (u32)R8((u32)(r_esp+0x30u));
    /* 00409832: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00409836: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409838: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
    /* 0040983c: fild dword ptr [esp + 0x38] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x38u)));
    /* 00409840: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409842: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409844: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409846: fld dword ptr [eax + edi*4 + 0x8f97c0] */ FPUSH(R_F32((u32)(r_eax+r_edi*4+0x8f97c0u)));
    /* 0040984d: fadd st(5), st(0) */ ST(5) = ST(5) + ST(0);
    /* 0040984f: fadd st(4), st(0) */ ST(4) = ST(4) + ST(0);
    /* 00409851: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00409853: fdiv st(4), st(0) */ ST(4) = ST(4) / ST(0);
    /* 00409855: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 00409857: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0040985b: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0040985d: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 00409861: fld dword ptr [0x8f997c] */ FPUSH(R_F32((u32)(0x8f997cu)));
    /* 00409867: fdivr st(3) */ ST(0) = ST(3) / ST(0);
    /* 00409869: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 0040986d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0040986f: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00409871: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00409873: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 00409875: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 00409879: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0040987b: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 0040987f: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00409881: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
L_00409885:; BB(0x00409885);
    /* 00409885: movzx ebp, cl */ r_ebp = (u32)(u8)r_ecx;
    /* 00409888: cmp ebp, ebx */ {  u32 a = r_ebp; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040988a: je 0x409899 */ if (fZ) goto L_00409899;
L_0040988c:; BB(0x0040988c);
    /* 0040988c: mov edx, dword ptr [esp + 0x50] */ r_edx = R32((u32)(r_esp+0x50u));
    /* 00409890: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00409892: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x409897u); f_0082bb60();
    /* 00409897: mov ebx, ebp */ r_ebx = r_ebp;
L_00409899:; BB(0x00409899);
    /* 00409899: push 0x3f7fff58 */ { u32 v = 0x3f7fff58u; r_esp -= 4; W32(r_esp, v); }
    /* 0040989e: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 004098a2: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x4098a7u); f_0082b440();
    /* 004098a7: jmp 0x409640 */ goto L_00409640;
L_004098ac:; BB(0x004098ac);
    /* 004098ac: fld dword ptr [0x8f9978] */ FPUSH(R_F32((u32)(0x8f9978u)));
    /* 004098b2: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 004098b6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004098b8: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 004098ba: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004098bc: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004098c0: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 004098c4: fadd dword ptr [0x8f99d4] */ ST(0) = ST(0) + R_F32((u32)(0x8f99d4u));
    /* 004098ca: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 004098ce: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004098d0: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 004098d4: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 004098dc: mov eax, 0x38e38e39 */ r_eax = 0x38e38e39u;
    /* 004098e1: imul ebp */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebp; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004098e3: sar ebp, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebp = r;  } }
    /* 004098e6: mov ecx, edx */ r_ecx = r_edx;
    /* 004098e8: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 004098f0: sar ecx, 3 */ { u32 c = (3u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 004098f3: sub ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004098f5: mov dword ptr [esp + 0x18], 0 */ W32((u32)(r_esp+0x18u), 0x0u);
    /* 004098fd: mov dword ptr [esp + 0x1c], 0 */ W32((u32)(r_esp+0x1cu), 0x0u);
    /* 00409905: jmp 0x409885 */ goto L_00409885;
L_0040990a:; BB(0x0040990a);
    /* 0040990a: mov ebp, dword ptr [esp + 0x44] */ r_ebp = R32((u32)(r_esp+0x44u));
    /* 0040990e: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x409913u); f_004ac444();
    /* 00409913: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 00409917: mov edx, dword ptr [eax + 0x1928] */ r_edx = R32((u32)(r_eax+0x1928u));
    /* 0040991d: jmp 0x409606 */ goto L_00409606;
L_00409922:; BB(0x00409922);
    /* 00409922: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x409927u); f_0082dab0();
    /* 00409927: add esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0040992a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0040992b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040992c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0040992d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0040992e: ret  */ FN_RET(0x004096df); r_esp += 4; return;
L_0040992f:; BB(0x0040992f);
    /* 0040992f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00409931: jmp 0x409520 */ goto L_00409520;
}

void f_004096e6(void)
{
    FN_ENTER(0x004096e6);
    goto L_004096e6;
L_00409432:; BB(0x00409432);
    /* 00409432: cmp ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00409434: jae 0x409922 */ if (!fC) goto L_00409922;
L_0040943a:; BB(0x0040943a);
    /* 0040943a: mov ecx, dword ptr [esp + 0x40] */ r_ecx = R32((u32)(r_esp+0x40u));
    /* 0040943e: fld dword ptr [0x8f99a4] */ FPUSH(R_F32((u32)(0x8f99a4u)));
    /* 00409444: fld dword ptr [ecx + ebp*8 + 0x2c] */ FPUSH(R_F32((u32)(r_ecx+r_ebp*8+0x2cu)));
    /* 00409448: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0040944a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0040944c: fstp dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 00409450: mov edi, 0xffffffff */ r_edi = 0xffffffffu;
    /* 00409455: lea ebx, [ebp + ebp] */ r_ebx = (u32)(r_ebp+r_ebp);
    /* 00409459: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0040945a: jbe 0x40946b */ if ((fC||fZ)) goto L_0040946b;
L_0040945c:; BB(0x0040945c);
    /* 0040945c: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 00409460: fcomp dword ptr [0x8f99a0] */ fx_compare(ST(0), R_F32((u32)(0x8f99a0u))); FPOP();
    /* 00409466: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00409468: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00409469: jb 0x409470 */ if (fC) goto L_00409470;
L_0040946b:; BB(0x0040946b);
    /* 0040946b: mov edi, 0xffffff */ r_edi = 0xffffffu;
L_00409470:; BB(0x00409470);
    /* 00409470: fcom dword ptr [esp + 0x58] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x58u))); 
    /* 00409474: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00409476: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00409477: jae 0x4094c5 */ if (!fC) goto L_004094c5;
L_00409479:; BB(0x00409479);
    /* 00409479: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 0040947d: fcomp dword ptr [0x8f999c] */ fx_compare(ST(0), R_F32((u32)(0x8f999cu))); FPOP();
    /* 00409483: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00409485: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00409486: jae 0x4094c5 */ if (!fC) goto L_004094c5;
L_00409488:; BB(0x00409488);
    /* 00409488: fld dword ptr [0x8f9994] */ FPUSH(R_F32((u32)(0x8f9994u)));
    /* 0040948e: fadd dword ptr [esp + 0x58] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x58u));
    /* 00409492: fmul dword ptr [0x8f9998] */ ST(0) = ST(0) * R_F32((u32)(0x8f9998u));
    /* 00409498: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 0040949a: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 0040949e: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 004094a3: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004094a8: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 004094ac: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 004094b0: fistp qword ptr [esp + 0x30] */ W64((u32)(r_esp+0x30u), (u64)fx_int64(ST(0))); FPOP();
    /* 004094b4: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 004094b8: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 004094bc: shl edi, 0x18 */ { u32 c = (24u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 004094bf: or edi, 0xffffff */ {  u32 a = r_edi; u32 b = 0xffffffu; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
L_004094c5:; BB(0x004094c5);
    /* 004094c5: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 004094c9: fcomp dword ptr [0x8f9990] */ fx_compare(ST(0), R_F32((u32)(0x8f9990u))); FPOP();
    /* 004094cf: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004094d1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004094d2: jbe 0x409520 */ if ((fC||fZ)) goto L_00409520;
L_004094d4:; BB(0x004094d4);
    /* 004094d4: fld dword ptr [0x8f99a0] */ FPUSH(R_F32((u32)(0x8f99a0u)));
    /* 004094da: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 004094de: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 004094e0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004094e2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004094e3: jae 0x40992f */ if (!fC) goto L_0040992f;
L_004094e9:; BB(0x004094e9);
    /* 004094e9: fsub dword ptr [esp + 0x58] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x58u));
    /* 004094ed: fmul dword ptr [0x8f9998] */ ST(0) = ST(0) * R_F32((u32)(0x8f9998u));
    /* 004094f3: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 004094f5: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 004094f9: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 004094fe: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00409503: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 00409507: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 0040950b: fistp qword ptr [esp + 0x30] */ W64((u32)(r_esp+0x30u), (u64)fx_int64(ST(0))); FPOP();
    /* 0040950f: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 00409513: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 00409517: shl edi, 0x18 */ { u32 c = (24u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 0040951a: or edi, 0xffffff */ {  u32 a = r_edi; u32 b = 0xffffffu; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
L_00409520:; BB(0x00409520);
    /* 00409520: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00409522: mov eax, dword ptr [0xa3ad40] */ r_eax = R32((u32)(0xa3ad40u));
    /* 00409527: mov esi, dword ptr [eax + ebp*4] */ r_esi = R32((u32)(r_eax+r_ebp*4));
    /* 0040952a: movsx eax, byte ptr [esi] */ r_eax = (u32)(i32)(i8)R8((u32)(r_esi));
    /* 0040952d: cmp eax, 0x23 */ {  u32 a = r_eax; u32 b = 0x23u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409530: je 0x4095fe */ if (fZ) goto L_004095fe;
L_00409536:; BB(0x00409536);
    /* 00409536: cmp eax, 0x21 */ {  u32 a = r_eax; u32 b = 0x21u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409539: jne 0x409581 */ if (!fZ) goto L_00409581;
L_0040953b:; BB(0x0040953b);
    /* 0040953b: mov ecx, dword ptr [0xa3ad48] */ r_ecx = R32((u32)(0xa3ad48u));
    /* 00409541: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x409546u); f_00829cc8();
    /* 00409546: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0040954b: call 0x82bb30 */ r_esp -= 4; W32(r_esp, 0x409550u); f_0082bb30();
    /* 00409550: mov ecx, 3 */ r_ecx = 0x3u;
    /* 00409555: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0040955a: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x40955fu); f_0082bb60();
    /* 0040955f: push 0x3f7fff58 */ { u32 v = 0x3f7fff58u; r_esp -= 4; W32(r_esp, v); }
    /* 00409564: mov ecx, dword ptr [esp + 0x50] */ r_ecx = R32((u32)(r_esp+0x50u));
    /* 00409568: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x40956du); f_0082b440();
    /* 0040956d: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x409572u); f_004ac444();
    /* 00409572: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 00409576: mov edx, dword ptr [eax + 0x1928] */ r_edx = R32((u32)(r_eax+0x1928u));
    /* 0040957c: jmp 0x409606 */ goto L_00409606;
L_00409581:; BB(0x00409581);
    /* 00409581: cmp eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409584: jne 0x4095c9 */ if (!fZ) goto L_004095c9;
L_00409586:; BB(0x00409586);
    /* 00409586: mov ecx, dword ptr [0xa3ad48] */ r_ecx = R32((u32)(0xa3ad48u));
    /* 0040958c: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x409591u); f_00829cc8();
    /* 00409591: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00409596: call 0x82bb30 */ r_esp -= 4; W32(r_esp, 0x40959bu); f_0082bb30();
    /* 0040959b: mov ecx, 4 */ r_ecx = 0x4u;
    /* 004095a0: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 004095a5: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x4095aau); f_0082bb60();
    /* 004095aa: push 0x3f7fff58 */ { u32 v = 0x3f7fff58u; r_esp -= 4; W32(r_esp, v); }
    /* 004095af: mov ecx, dword ptr [esp + 0x4c] */ r_ecx = R32((u32)(r_esp+0x4cu));
    /* 004095b3: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x4095b8u); f_0082b440();
    /* 004095b8: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x4095bdu); f_004ac444();
    /* 004095bd: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 004095c1: mov edx, dword ptr [eax + 0x1928] */ r_edx = R32((u32)(r_eax+0x1928u));
    /* 004095c7: jmp 0x409606 */ goto L_00409606;
L_004095c9:; BB(0x004095c9);
    /* 004095c9: cmp edi, 0xffffff */ {  u32 a = r_edi; u32 b = 0xffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004095cf: je 0x409606 */ if (fZ) goto L_00409606;
L_004095d1:; BB(0x004095d1);
    /* 004095d1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004095d2: call 0x7087dc */ r_esp -= 4; W32(r_esp, 0x4095d7u); f_007087dc();
    /* 004095d7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004095d8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004095d9: push 0x3f7fff58 */ { u32 v = 0x3f7fff58u; r_esp -= 4; W32(r_esp, v); }
    /* 004095de: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 004095e2: push dword ptr [eax + ebx*4 + 0x2c] */ { u32 v = R32((u32)(r_eax+r_ebx*4+0x2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004095e6: push dword ptr [eax + ebp*8 + 0x28] */ { u32 v = R32((u32)(r_eax+r_ebp*8+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 004095ea: call 0x789248 */ r_esp -= 4; W32(r_esp, 0x4095efu); f_00789248();
    /* 004095ef: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004095f2: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 004095f6: mov edx, dword ptr [eax + 0x1928] */ r_edx = R32((u32)(r_eax+0x1928u));
    /* 004095fc: jmp 0x409606 */ goto L_00409606;
L_004095fe:; BB(0x004095fe);
    /* 004095fe: cmp edi, 0xffffff */ {  u32 a = r_edi; u32 b = 0xffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409604: jne 0x40960e */ if (!fZ) goto L_0040960e;
L_00409606:; BB(0x00409606);
    /* 00409606: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00409609: jmp 0x409432 */ goto L_00409432;
L_0040960e:; BB(0x0040960e);
    /* 0040960e: mov eax, ecx */ r_eax = r_ecx;
    /* 00409610: fld dword ptr [eax + ebp*8 + 0x28] */ FPUSH(R_F32((u32)(r_eax+r_ebp*8+0x28u)));
    /* 00409614: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 00409618: mov ebx, 0xfe */ r_ebx = 0xfeu;
    /* 0040961d: call 0x7a9044 */ r_esp -= 4; W32(r_esp, 0x409622u); f_007a9044();
    /* 00409622: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00409627: call 0x82bb30 */ r_esp -= 4; W32(r_esp, 0x40962cu); f_0082bb30();
    /* 0040962c: push dword ptr [0xa3ad48] */ { u32 v = R32((u32)(0xa3ad48u)); r_esp -= 4; W32(r_esp, v); }
    /* 00409632: call 0x81a9b8 */ r_esp -= 4; W32(r_esp, 0x409637u); f_0081a9b8();
    /* 00409637: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00409638: mov dword ptr [esp + 0x50], edi */ W32((u32)(r_esp+0x50u), r_edi);
    /* 0040963c: mov dword ptr [esp + 0x44], ebp */ W32((u32)(r_esp+0x44u), r_ebp);
L_00409640:; BB(0x00409640);
    /* 00409640: movsx ebp, byte ptr [esi] */ r_ebp = (u32)(i32)(i8)R8((u32)(r_esi));
    /* 00409643: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409645: je 0x40990a */ if (fZ) goto L_0040990a;
L_0040964b:; BB(0x0040964b);
    /* 0040964b: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 00409651: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00409654: cmp ebp, 0x23 */ {  u32 a = r_ebp; u32 b = 0x23u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409657: je 0x409640 */ if (fZ) goto L_00409640;
L_00409659:; BB(0x00409659);
    /* 00409659: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 0040965d: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00409660: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00409661: call 0x85824c */ r_esp -= 4; W32(r_esp, 0x409666u); f_0085824c();
    /* 00409666: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00409667: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409669: je 0x409677 */ if (fZ) goto L_00409677;
L_0040966b:; BB(0x0040966b);
    /* 0040966b: fld dword ptr [0x8f9980] */ FPUSH(R_F32((u32)(0x8f9980u)));
    /* 00409671: fadd dword ptr [esp + 0x58] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x58u));
    /* 00409675: jmp 0x40967b */ goto L_0040967b;
L_00409677:; BB(0x00409677);
    /* 00409677: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
L_0040967b:; BB(0x0040967b);
    /* 0040967b: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0040967f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00409680: call 0x858339 */ r_esp -= 4; W32(r_esp, 0x409685u); f_00858339();
    /* 00409685: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00409686: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409688: jne 0x409710 */ if (!fZ) goto L_00409710;
L_0040968e:; BB(0x0040968e);
    /* 0040968e: add ebp, -0x26 */ {  u32 a = r_ebp; u32 b = 0xffffffdau; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00409691: cmp ebp, 0x58 */ {  u32 a = r_ebp; u32 b = 0x58u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00409694: ja 0x409709 */ if ((!fC&&!fZ)) goto L_00409709;
L_0040969a:; BB(0x0040969a);
    /* 0040969a: mov eax, dword ptr [ebp*4 + 0x8f94c0] */ r_eax = R32((u32)(r_ebp*4+0x8f94c0u));
    /* 004096a1: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_004096e6:; BB(0x004096e6);
    /* 004096e6: mov ebp, 0x22 */ r_ebp = 0x22u;
    /* 004096eb: jmp 0x409750 */ goto L_00409750;
L_00409709:; BB(0x00409709);
    /* 00409709: mov ebp, 0x52 */ r_ebp = 0x52u;
    /* 0040970e: jmp 0x409750 */ goto L_00409750;
L_00409710:; BB(0x00409710);
    /* 00409710: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00409711: call 0x858212 */ r_esp -= 4; W32(r_esp, 0x409716u); f_00858212();
    /* 00409716: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00409717: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409719: je 0x409726 */ if (fZ) goto L_00409726;
L_0040971b:; BB(0x0040971b);
    /* 0040971b: add ebp, -0x41 */ {  u32 a = r_ebp; u32 b = 0xffffffbfu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0040971e: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 00409724: jmp 0x409750 */ goto L_00409750;
L_00409726:; BB(0x00409726);
    /* 00409726: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00409727: call 0x85824c */ r_esp -= 4; W32(r_esp, 0x40972cu); f_0085824c();
    /* 0040972c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0040972d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040972f: je 0x40973c */ if (fZ) goto L_0040973c;
L_00409731:; BB(0x00409731);
    /* 00409731: add ebp, -0x3d */ {  u32 a = r_ebp; u32 b = 0xffffffc3u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00409734: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 0040973a: jmp 0x409750 */ goto L_00409750;
L_0040973c:; BB(0x0040973c);
    /* 0040973c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040973d: call 0x858286 */ r_esp -= 4; W32(r_esp, 0x409742u); f_00858286();
    /* 00409742: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00409743: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409745: je 0x409750 */ if (fZ) goto L_00409750;
L_00409747:; BB(0x00409747);
    /* 00409747: add ebp, 0xe */ {  u32 a = r_ebp; u32 b = 0xeu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0040974a: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
L_00409750:; BB(0x00409750);
    /* 00409750: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00409753: cmp ebp, 0x52 */ {  u32 a = r_ebp; u32 b = 0x52u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409756: je 0x4098ac */ if (fZ) goto L_004098ac;
L_0040975c:; BB(0x0040975c);
    /* 0040975c: fld dword ptr [0x8f9988] */ FPUSH(R_F32((u32)(0x8f9988u)));
    /* 00409762: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00409766: fld dword ptr [0x8f99d4] */ FPUSH(R_F32((u32)(0x8f99d4u)));
    /* 0040976c: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 0040976e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00409770: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00409774: mov eax, 0x38e38e39 */ r_eax = 0x38e38e39u;
    /* 00409779: imul ebp */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebp; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040977b: mov eax, ebp */ r_eax = r_ebp;
    /* 0040977d: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00409780: mov ecx, edx */ r_ecx = r_edx;
    /* 00409782: sar ecx, 3 */ { u32 c = (3u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00409785: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00409787: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 0040978a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0040978c: lea edi, [eax + eax*8] */ r_edi = (u32)(r_eax+r_eax*8);
    /* 0040978f: imul eax, ecx, -0x24 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xffffffdcu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00409792: neg edi */ { u32 x = r_edi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00409794: add edi, ebp */ {  u32 a = r_edi; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00409796: add ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00409798: mov eax, 0x2aaaaaab */ r_eax = 0x2aaaaaabu;
    /* 0040979d: imul ebp */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebp; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040979f: mov eax, ebp */ r_eax = r_ebp;
    /* 004097a1: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004097a4: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004097a6: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 004097a9: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004097ab: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004097ad: sub ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 004097af: mov dword ptr [esp + 0x38], ebp */ W32((u32)(r_esp+0x38u), r_ebp);
    /* 004097b3: fild dword ptr [esp + 0x38] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x38u)));
    /* 004097b7: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 004097b9: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 004097bd: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 004097c2: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004097c7: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 004097cb: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 004097cf: fistp qword ptr [esp + 0x30] */ W64((u32)(r_esp+0x30u), (u64)fx_int64(ST(0))); FPOP();
    /* 004097d3: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 004097d7: mov eax, 0x2aaaaaab */ r_eax = 0x2aaaaaabu;
    /* 004097dc: imul edi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_edi; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004097de: mov eax, edi */ r_eax = r_edi;
    /* 004097e0: movzx ebp, byte ptr [esp + 0x30] */ r_ebp = (u32)R8((u32)(r_esp+0x30u));
    /* 004097e5: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004097e8: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004097ea: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
    /* 004097ee: fild dword ptr [esp + 0x38] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x38u)));
    /* 004097f2: mov dword ptr [esp + 0x38], ebp */ W32((u32)(r_esp+0x38u), r_ebp);
    /* 004097f6: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 004097f8: fild dword ptr [esp + 0x38] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x38u)));
    /* 004097fc: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004097fe: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 00409802: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 00409807: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0040980c: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 00409810: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 00409814: fistp qword ptr [esp + 0x30] */ W64((u32)(r_esp+0x30u), (u64)fx_int64(ST(0))); FPOP();
    /* 00409818: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 0040981c: lea eax, [ecx + ecx*8] */ r_eax = (u32)(r_ecx+r_ecx*8);
    /* 0040981f: fld dword ptr [0x8f997c] */ FPUSH(R_F32((u32)(0x8f997cu)));
    /* 00409825: fld dword ptr [0x8f997c] */ FPUSH(R_F32((u32)(0x8f997cu)));
    /* 0040982b: fdivr st(3) */ ST(0) = ST(3) / ST(0);
    /* 0040982d: movzx edx, byte ptr [esp + 0x30] */ r_edx = (u32)R8((u32)(r_esp+0x30u));
    /* 00409832: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00409836: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409838: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
    /* 0040983c: fild dword ptr [esp + 0x38] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x38u)));
    /* 00409840: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409842: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409844: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409846: fld dword ptr [eax + edi*4 + 0x8f97c0] */ FPUSH(R_F32((u32)(r_eax+r_edi*4+0x8f97c0u)));
    /* 0040984d: fadd st(5), st(0) */ ST(5) = ST(5) + ST(0);
    /* 0040984f: fadd st(4), st(0) */ ST(4) = ST(4) + ST(0);
    /* 00409851: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00409853: fdiv st(4), st(0) */ ST(4) = ST(4) / ST(0);
    /* 00409855: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 00409857: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0040985b: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0040985d: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 00409861: fld dword ptr [0x8f997c] */ FPUSH(R_F32((u32)(0x8f997cu)));
    /* 00409867: fdivr st(3) */ ST(0) = ST(3) / ST(0);
    /* 00409869: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 0040986d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0040986f: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00409871: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00409873: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 00409875: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 00409879: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0040987b: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 0040987f: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00409881: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
L_00409885:; BB(0x00409885);
    /* 00409885: movzx ebp, cl */ r_ebp = (u32)(u8)r_ecx;
    /* 00409888: cmp ebp, ebx */ {  u32 a = r_ebp; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040988a: je 0x409899 */ if (fZ) goto L_00409899;
L_0040988c:; BB(0x0040988c);
    /* 0040988c: mov edx, dword ptr [esp + 0x50] */ r_edx = R32((u32)(r_esp+0x50u));
    /* 00409890: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00409892: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x409897u); f_0082bb60();
    /* 00409897: mov ebx, ebp */ r_ebx = r_ebp;
L_00409899:; BB(0x00409899);
    /* 00409899: push 0x3f7fff58 */ { u32 v = 0x3f7fff58u; r_esp -= 4; W32(r_esp, v); }
    /* 0040989e: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 004098a2: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x4098a7u); f_0082b440();
    /* 004098a7: jmp 0x409640 */ goto L_00409640;
L_004098ac:; BB(0x004098ac);
    /* 004098ac: fld dword ptr [0x8f9978] */ FPUSH(R_F32((u32)(0x8f9978u)));
    /* 004098b2: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 004098b6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004098b8: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 004098ba: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004098bc: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004098c0: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 004098c4: fadd dword ptr [0x8f99d4] */ ST(0) = ST(0) + R_F32((u32)(0x8f99d4u));
    /* 004098ca: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 004098ce: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004098d0: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 004098d4: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 004098dc: mov eax, 0x38e38e39 */ r_eax = 0x38e38e39u;
    /* 004098e1: imul ebp */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebp; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004098e3: sar ebp, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebp = r;  } }
    /* 004098e6: mov ecx, edx */ r_ecx = r_edx;
    /* 004098e8: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 004098f0: sar ecx, 3 */ { u32 c = (3u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 004098f3: sub ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004098f5: mov dword ptr [esp + 0x18], 0 */ W32((u32)(r_esp+0x18u), 0x0u);
    /* 004098fd: mov dword ptr [esp + 0x1c], 0 */ W32((u32)(r_esp+0x1cu), 0x0u);
    /* 00409905: jmp 0x409885 */ goto L_00409885;
L_0040990a:; BB(0x0040990a);
    /* 0040990a: mov ebp, dword ptr [esp + 0x44] */ r_ebp = R32((u32)(r_esp+0x44u));
    /* 0040990e: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x409913u); f_004ac444();
    /* 00409913: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 00409917: mov edx, dword ptr [eax + 0x1928] */ r_edx = R32((u32)(r_eax+0x1928u));
    /* 0040991d: jmp 0x409606 */ goto L_00409606;
L_00409922:; BB(0x00409922);
    /* 00409922: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x409927u); f_0082dab0();
    /* 00409927: add esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0040992a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0040992b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040992c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0040992d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0040992e: ret  */ FN_RET(0x004096e6); r_esp += 4; return;
L_0040992f:; BB(0x0040992f);
    /* 0040992f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00409931: jmp 0x409520 */ goto L_00409520;
}

void f_004096ed(void)
{
    FN_ENTER(0x004096ed);
    goto L_004096ed;
L_00409432:; BB(0x00409432);
    /* 00409432: cmp ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00409434: jae 0x409922 */ if (!fC) goto L_00409922;
L_0040943a:; BB(0x0040943a);
    /* 0040943a: mov ecx, dword ptr [esp + 0x40] */ r_ecx = R32((u32)(r_esp+0x40u));
    /* 0040943e: fld dword ptr [0x8f99a4] */ FPUSH(R_F32((u32)(0x8f99a4u)));
    /* 00409444: fld dword ptr [ecx + ebp*8 + 0x2c] */ FPUSH(R_F32((u32)(r_ecx+r_ebp*8+0x2cu)));
    /* 00409448: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0040944a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0040944c: fstp dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 00409450: mov edi, 0xffffffff */ r_edi = 0xffffffffu;
    /* 00409455: lea ebx, [ebp + ebp] */ r_ebx = (u32)(r_ebp+r_ebp);
    /* 00409459: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0040945a: jbe 0x40946b */ if ((fC||fZ)) goto L_0040946b;
L_0040945c:; BB(0x0040945c);
    /* 0040945c: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 00409460: fcomp dword ptr [0x8f99a0] */ fx_compare(ST(0), R_F32((u32)(0x8f99a0u))); FPOP();
    /* 00409466: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00409468: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00409469: jb 0x409470 */ if (fC) goto L_00409470;
L_0040946b:; BB(0x0040946b);
    /* 0040946b: mov edi, 0xffffff */ r_edi = 0xffffffu;
L_00409470:; BB(0x00409470);
    /* 00409470: fcom dword ptr [esp + 0x58] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x58u))); 
    /* 00409474: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00409476: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00409477: jae 0x4094c5 */ if (!fC) goto L_004094c5;
L_00409479:; BB(0x00409479);
    /* 00409479: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 0040947d: fcomp dword ptr [0x8f999c] */ fx_compare(ST(0), R_F32((u32)(0x8f999cu))); FPOP();
    /* 00409483: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00409485: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00409486: jae 0x4094c5 */ if (!fC) goto L_004094c5;
L_00409488:; BB(0x00409488);
    /* 00409488: fld dword ptr [0x8f9994] */ FPUSH(R_F32((u32)(0x8f9994u)));
    /* 0040948e: fadd dword ptr [esp + 0x58] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x58u));
    /* 00409492: fmul dword ptr [0x8f9998] */ ST(0) = ST(0) * R_F32((u32)(0x8f9998u));
    /* 00409498: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 0040949a: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 0040949e: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 004094a3: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004094a8: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 004094ac: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 004094b0: fistp qword ptr [esp + 0x30] */ W64((u32)(r_esp+0x30u), (u64)fx_int64(ST(0))); FPOP();
    /* 004094b4: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 004094b8: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 004094bc: shl edi, 0x18 */ { u32 c = (24u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 004094bf: or edi, 0xffffff */ {  u32 a = r_edi; u32 b = 0xffffffu; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
L_004094c5:; BB(0x004094c5);
    /* 004094c5: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 004094c9: fcomp dword ptr [0x8f9990] */ fx_compare(ST(0), R_F32((u32)(0x8f9990u))); FPOP();
    /* 004094cf: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004094d1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004094d2: jbe 0x409520 */ if ((fC||fZ)) goto L_00409520;
L_004094d4:; BB(0x004094d4);
    /* 004094d4: fld dword ptr [0x8f99a0] */ FPUSH(R_F32((u32)(0x8f99a0u)));
    /* 004094da: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 004094de: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 004094e0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004094e2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004094e3: jae 0x40992f */ if (!fC) goto L_0040992f;
L_004094e9:; BB(0x004094e9);
    /* 004094e9: fsub dword ptr [esp + 0x58] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x58u));
    /* 004094ed: fmul dword ptr [0x8f9998] */ ST(0) = ST(0) * R_F32((u32)(0x8f9998u));
    /* 004094f3: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 004094f5: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 004094f9: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 004094fe: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00409503: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 00409507: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 0040950b: fistp qword ptr [esp + 0x30] */ W64((u32)(r_esp+0x30u), (u64)fx_int64(ST(0))); FPOP();
    /* 0040950f: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 00409513: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 00409517: shl edi, 0x18 */ { u32 c = (24u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 0040951a: or edi, 0xffffff */ {  u32 a = r_edi; u32 b = 0xffffffu; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
L_00409520:; BB(0x00409520);
    /* 00409520: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00409522: mov eax, dword ptr [0xa3ad40] */ r_eax = R32((u32)(0xa3ad40u));
    /* 00409527: mov esi, dword ptr [eax + ebp*4] */ r_esi = R32((u32)(r_eax+r_ebp*4));
    /* 0040952a: movsx eax, byte ptr [esi] */ r_eax = (u32)(i32)(i8)R8((u32)(r_esi));
    /* 0040952d: cmp eax, 0x23 */ {  u32 a = r_eax; u32 b = 0x23u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409530: je 0x4095fe */ if (fZ) goto L_004095fe;
L_00409536:; BB(0x00409536);
    /* 00409536: cmp eax, 0x21 */ {  u32 a = r_eax; u32 b = 0x21u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409539: jne 0x409581 */ if (!fZ) goto L_00409581;
L_0040953b:; BB(0x0040953b);
    /* 0040953b: mov ecx, dword ptr [0xa3ad48] */ r_ecx = R32((u32)(0xa3ad48u));
    /* 00409541: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x409546u); f_00829cc8();
    /* 00409546: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0040954b: call 0x82bb30 */ r_esp -= 4; W32(r_esp, 0x409550u); f_0082bb30();
    /* 00409550: mov ecx, 3 */ r_ecx = 0x3u;
    /* 00409555: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0040955a: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x40955fu); f_0082bb60();
    /* 0040955f: push 0x3f7fff58 */ { u32 v = 0x3f7fff58u; r_esp -= 4; W32(r_esp, v); }
    /* 00409564: mov ecx, dword ptr [esp + 0x50] */ r_ecx = R32((u32)(r_esp+0x50u));
    /* 00409568: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x40956du); f_0082b440();
    /* 0040956d: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x409572u); f_004ac444();
    /* 00409572: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 00409576: mov edx, dword ptr [eax + 0x1928] */ r_edx = R32((u32)(r_eax+0x1928u));
    /* 0040957c: jmp 0x409606 */ goto L_00409606;
L_00409581:; BB(0x00409581);
    /* 00409581: cmp eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409584: jne 0x4095c9 */ if (!fZ) goto L_004095c9;
L_00409586:; BB(0x00409586);
    /* 00409586: mov ecx, dword ptr [0xa3ad48] */ r_ecx = R32((u32)(0xa3ad48u));
    /* 0040958c: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x409591u); f_00829cc8();
    /* 00409591: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00409596: call 0x82bb30 */ r_esp -= 4; W32(r_esp, 0x40959bu); f_0082bb30();
    /* 0040959b: mov ecx, 4 */ r_ecx = 0x4u;
    /* 004095a0: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 004095a5: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x4095aau); f_0082bb60();
    /* 004095aa: push 0x3f7fff58 */ { u32 v = 0x3f7fff58u; r_esp -= 4; W32(r_esp, v); }
    /* 004095af: mov ecx, dword ptr [esp + 0x4c] */ r_ecx = R32((u32)(r_esp+0x4cu));
    /* 004095b3: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x4095b8u); f_0082b440();
    /* 004095b8: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x4095bdu); f_004ac444();
    /* 004095bd: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 004095c1: mov edx, dword ptr [eax + 0x1928] */ r_edx = R32((u32)(r_eax+0x1928u));
    /* 004095c7: jmp 0x409606 */ goto L_00409606;
L_004095c9:; BB(0x004095c9);
    /* 004095c9: cmp edi, 0xffffff */ {  u32 a = r_edi; u32 b = 0xffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004095cf: je 0x409606 */ if (fZ) goto L_00409606;
L_004095d1:; BB(0x004095d1);
    /* 004095d1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004095d2: call 0x7087dc */ r_esp -= 4; W32(r_esp, 0x4095d7u); f_007087dc();
    /* 004095d7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004095d8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004095d9: push 0x3f7fff58 */ { u32 v = 0x3f7fff58u; r_esp -= 4; W32(r_esp, v); }
    /* 004095de: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 004095e2: push dword ptr [eax + ebx*4 + 0x2c] */ { u32 v = R32((u32)(r_eax+r_ebx*4+0x2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004095e6: push dword ptr [eax + ebp*8 + 0x28] */ { u32 v = R32((u32)(r_eax+r_ebp*8+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 004095ea: call 0x789248 */ r_esp -= 4; W32(r_esp, 0x4095efu); f_00789248();
    /* 004095ef: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004095f2: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 004095f6: mov edx, dword ptr [eax + 0x1928] */ r_edx = R32((u32)(r_eax+0x1928u));
    /* 004095fc: jmp 0x409606 */ goto L_00409606;
L_004095fe:; BB(0x004095fe);
    /* 004095fe: cmp edi, 0xffffff */ {  u32 a = r_edi; u32 b = 0xffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409604: jne 0x40960e */ if (!fZ) goto L_0040960e;
L_00409606:; BB(0x00409606);
    /* 00409606: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00409609: jmp 0x409432 */ goto L_00409432;
L_0040960e:; BB(0x0040960e);
    /* 0040960e: mov eax, ecx */ r_eax = r_ecx;
    /* 00409610: fld dword ptr [eax + ebp*8 + 0x28] */ FPUSH(R_F32((u32)(r_eax+r_ebp*8+0x28u)));
    /* 00409614: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 00409618: mov ebx, 0xfe */ r_ebx = 0xfeu;
    /* 0040961d: call 0x7a9044 */ r_esp -= 4; W32(r_esp, 0x409622u); f_007a9044();
    /* 00409622: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00409627: call 0x82bb30 */ r_esp -= 4; W32(r_esp, 0x40962cu); f_0082bb30();
    /* 0040962c: push dword ptr [0xa3ad48] */ { u32 v = R32((u32)(0xa3ad48u)); r_esp -= 4; W32(r_esp, v); }
    /* 00409632: call 0x81a9b8 */ r_esp -= 4; W32(r_esp, 0x409637u); f_0081a9b8();
    /* 00409637: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00409638: mov dword ptr [esp + 0x50], edi */ W32((u32)(r_esp+0x50u), r_edi);
    /* 0040963c: mov dword ptr [esp + 0x44], ebp */ W32((u32)(r_esp+0x44u), r_ebp);
L_00409640:; BB(0x00409640);
    /* 00409640: movsx ebp, byte ptr [esi] */ r_ebp = (u32)(i32)(i8)R8((u32)(r_esi));
    /* 00409643: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409645: je 0x40990a */ if (fZ) goto L_0040990a;
L_0040964b:; BB(0x0040964b);
    /* 0040964b: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 00409651: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00409654: cmp ebp, 0x23 */ {  u32 a = r_ebp; u32 b = 0x23u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409657: je 0x409640 */ if (fZ) goto L_00409640;
L_00409659:; BB(0x00409659);
    /* 00409659: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 0040965d: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00409660: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00409661: call 0x85824c */ r_esp -= 4; W32(r_esp, 0x409666u); f_0085824c();
    /* 00409666: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00409667: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409669: je 0x409677 */ if (fZ) goto L_00409677;
L_0040966b:; BB(0x0040966b);
    /* 0040966b: fld dword ptr [0x8f9980] */ FPUSH(R_F32((u32)(0x8f9980u)));
    /* 00409671: fadd dword ptr [esp + 0x58] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x58u));
    /* 00409675: jmp 0x40967b */ goto L_0040967b;
L_00409677:; BB(0x00409677);
    /* 00409677: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
L_0040967b:; BB(0x0040967b);
    /* 0040967b: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0040967f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00409680: call 0x858339 */ r_esp -= 4; W32(r_esp, 0x409685u); f_00858339();
    /* 00409685: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00409686: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409688: jne 0x409710 */ if (!fZ) goto L_00409710;
L_0040968e:; BB(0x0040968e);
    /* 0040968e: add ebp, -0x26 */ {  u32 a = r_ebp; u32 b = 0xffffffdau; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00409691: cmp ebp, 0x58 */ {  u32 a = r_ebp; u32 b = 0x58u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00409694: ja 0x409709 */ if ((!fC&&!fZ)) goto L_00409709;
L_0040969a:; BB(0x0040969a);
    /* 0040969a: mov eax, dword ptr [ebp*4 + 0x8f94c0] */ r_eax = R32((u32)(r_ebp*4+0x8f94c0u));
    /* 004096a1: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_004096ed:; BB(0x004096ed);
    /* 004096ed: mov ebp, 0x23 */ r_ebp = 0x23u;
    /* 004096f2: jmp 0x409750 */ goto L_00409750;
L_00409709:; BB(0x00409709);
    /* 00409709: mov ebp, 0x52 */ r_ebp = 0x52u;
    /* 0040970e: jmp 0x409750 */ goto L_00409750;
L_00409710:; BB(0x00409710);
    /* 00409710: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00409711: call 0x858212 */ r_esp -= 4; W32(r_esp, 0x409716u); f_00858212();
    /* 00409716: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00409717: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409719: je 0x409726 */ if (fZ) goto L_00409726;
L_0040971b:; BB(0x0040971b);
    /* 0040971b: add ebp, -0x41 */ {  u32 a = r_ebp; u32 b = 0xffffffbfu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0040971e: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 00409724: jmp 0x409750 */ goto L_00409750;
L_00409726:; BB(0x00409726);
    /* 00409726: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00409727: call 0x85824c */ r_esp -= 4; W32(r_esp, 0x40972cu); f_0085824c();
    /* 0040972c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0040972d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040972f: je 0x40973c */ if (fZ) goto L_0040973c;
L_00409731:; BB(0x00409731);
    /* 00409731: add ebp, -0x3d */ {  u32 a = r_ebp; u32 b = 0xffffffc3u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00409734: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 0040973a: jmp 0x409750 */ goto L_00409750;
L_0040973c:; BB(0x0040973c);
    /* 0040973c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040973d: call 0x858286 */ r_esp -= 4; W32(r_esp, 0x409742u); f_00858286();
    /* 00409742: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00409743: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409745: je 0x409750 */ if (fZ) goto L_00409750;
L_00409747:; BB(0x00409747);
    /* 00409747: add ebp, 0xe */ {  u32 a = r_ebp; u32 b = 0xeu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0040974a: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
L_00409750:; BB(0x00409750);
    /* 00409750: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00409753: cmp ebp, 0x52 */ {  u32 a = r_ebp; u32 b = 0x52u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409756: je 0x4098ac */ if (fZ) goto L_004098ac;
L_0040975c:; BB(0x0040975c);
    /* 0040975c: fld dword ptr [0x8f9988] */ FPUSH(R_F32((u32)(0x8f9988u)));
    /* 00409762: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00409766: fld dword ptr [0x8f99d4] */ FPUSH(R_F32((u32)(0x8f99d4u)));
    /* 0040976c: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 0040976e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00409770: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00409774: mov eax, 0x38e38e39 */ r_eax = 0x38e38e39u;
    /* 00409779: imul ebp */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebp; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040977b: mov eax, ebp */ r_eax = r_ebp;
    /* 0040977d: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00409780: mov ecx, edx */ r_ecx = r_edx;
    /* 00409782: sar ecx, 3 */ { u32 c = (3u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00409785: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00409787: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 0040978a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0040978c: lea edi, [eax + eax*8] */ r_edi = (u32)(r_eax+r_eax*8);
    /* 0040978f: imul eax, ecx, -0x24 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xffffffdcu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00409792: neg edi */ { u32 x = r_edi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00409794: add edi, ebp */ {  u32 a = r_edi; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00409796: add ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00409798: mov eax, 0x2aaaaaab */ r_eax = 0x2aaaaaabu;
    /* 0040979d: imul ebp */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebp; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040979f: mov eax, ebp */ r_eax = r_ebp;
    /* 004097a1: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004097a4: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004097a6: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 004097a9: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004097ab: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004097ad: sub ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 004097af: mov dword ptr [esp + 0x38], ebp */ W32((u32)(r_esp+0x38u), r_ebp);
    /* 004097b3: fild dword ptr [esp + 0x38] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x38u)));
    /* 004097b7: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 004097b9: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 004097bd: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 004097c2: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004097c7: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 004097cb: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 004097cf: fistp qword ptr [esp + 0x30] */ W64((u32)(r_esp+0x30u), (u64)fx_int64(ST(0))); FPOP();
    /* 004097d3: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 004097d7: mov eax, 0x2aaaaaab */ r_eax = 0x2aaaaaabu;
    /* 004097dc: imul edi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_edi; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004097de: mov eax, edi */ r_eax = r_edi;
    /* 004097e0: movzx ebp, byte ptr [esp + 0x30] */ r_ebp = (u32)R8((u32)(r_esp+0x30u));
    /* 004097e5: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004097e8: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004097ea: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
    /* 004097ee: fild dword ptr [esp + 0x38] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x38u)));
    /* 004097f2: mov dword ptr [esp + 0x38], ebp */ W32((u32)(r_esp+0x38u), r_ebp);
    /* 004097f6: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 004097f8: fild dword ptr [esp + 0x38] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x38u)));
    /* 004097fc: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004097fe: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 00409802: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 00409807: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0040980c: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 00409810: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 00409814: fistp qword ptr [esp + 0x30] */ W64((u32)(r_esp+0x30u), (u64)fx_int64(ST(0))); FPOP();
    /* 00409818: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 0040981c: lea eax, [ecx + ecx*8] */ r_eax = (u32)(r_ecx+r_ecx*8);
    /* 0040981f: fld dword ptr [0x8f997c] */ FPUSH(R_F32((u32)(0x8f997cu)));
    /* 00409825: fld dword ptr [0x8f997c] */ FPUSH(R_F32((u32)(0x8f997cu)));
    /* 0040982b: fdivr st(3) */ ST(0) = ST(3) / ST(0);
    /* 0040982d: movzx edx, byte ptr [esp + 0x30] */ r_edx = (u32)R8((u32)(r_esp+0x30u));
    /* 00409832: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00409836: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409838: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
    /* 0040983c: fild dword ptr [esp + 0x38] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x38u)));
    /* 00409840: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409842: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409844: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409846: fld dword ptr [eax + edi*4 + 0x8f97c0] */ FPUSH(R_F32((u32)(r_eax+r_edi*4+0x8f97c0u)));
    /* 0040984d: fadd st(5), st(0) */ ST(5) = ST(5) + ST(0);
    /* 0040984f: fadd st(4), st(0) */ ST(4) = ST(4) + ST(0);
    /* 00409851: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00409853: fdiv st(4), st(0) */ ST(4) = ST(4) / ST(0);
    /* 00409855: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 00409857: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0040985b: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0040985d: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 00409861: fld dword ptr [0x8f997c] */ FPUSH(R_F32((u32)(0x8f997cu)));
    /* 00409867: fdivr st(3) */ ST(0) = ST(3) / ST(0);
    /* 00409869: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 0040986d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0040986f: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00409871: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00409873: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 00409875: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 00409879: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0040987b: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 0040987f: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00409881: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
L_00409885:; BB(0x00409885);
    /* 00409885: movzx ebp, cl */ r_ebp = (u32)(u8)r_ecx;
    /* 00409888: cmp ebp, ebx */ {  u32 a = r_ebp; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040988a: je 0x409899 */ if (fZ) goto L_00409899;
L_0040988c:; BB(0x0040988c);
    /* 0040988c: mov edx, dword ptr [esp + 0x50] */ r_edx = R32((u32)(r_esp+0x50u));
    /* 00409890: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00409892: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x409897u); f_0082bb60();
    /* 00409897: mov ebx, ebp */ r_ebx = r_ebp;
L_00409899:; BB(0x00409899);
    /* 00409899: push 0x3f7fff58 */ { u32 v = 0x3f7fff58u; r_esp -= 4; W32(r_esp, v); }
    /* 0040989e: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 004098a2: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x4098a7u); f_0082b440();
    /* 004098a7: jmp 0x409640 */ goto L_00409640;
L_004098ac:; BB(0x004098ac);
    /* 004098ac: fld dword ptr [0x8f9978] */ FPUSH(R_F32((u32)(0x8f9978u)));
    /* 004098b2: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 004098b6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004098b8: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 004098ba: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004098bc: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004098c0: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 004098c4: fadd dword ptr [0x8f99d4] */ ST(0) = ST(0) + R_F32((u32)(0x8f99d4u));
    /* 004098ca: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 004098ce: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004098d0: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 004098d4: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 004098dc: mov eax, 0x38e38e39 */ r_eax = 0x38e38e39u;
    /* 004098e1: imul ebp */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebp; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004098e3: sar ebp, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebp = r;  } }
    /* 004098e6: mov ecx, edx */ r_ecx = r_edx;
    /* 004098e8: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 004098f0: sar ecx, 3 */ { u32 c = (3u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 004098f3: sub ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004098f5: mov dword ptr [esp + 0x18], 0 */ W32((u32)(r_esp+0x18u), 0x0u);
    /* 004098fd: mov dword ptr [esp + 0x1c], 0 */ W32((u32)(r_esp+0x1cu), 0x0u);
    /* 00409905: jmp 0x409885 */ goto L_00409885;
L_0040990a:; BB(0x0040990a);
    /* 0040990a: mov ebp, dword ptr [esp + 0x44] */ r_ebp = R32((u32)(r_esp+0x44u));
    /* 0040990e: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x409913u); f_004ac444();
    /* 00409913: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 00409917: mov edx, dword ptr [eax + 0x1928] */ r_edx = R32((u32)(r_eax+0x1928u));
    /* 0040991d: jmp 0x409606 */ goto L_00409606;
L_00409922:; BB(0x00409922);
    /* 00409922: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x409927u); f_0082dab0();
    /* 00409927: add esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0040992a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0040992b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040992c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0040992d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0040992e: ret  */ FN_RET(0x004096ed); r_esp += 4; return;
L_0040992f:; BB(0x0040992f);
    /* 0040992f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00409931: jmp 0x409520 */ goto L_00409520;
}

void f_004096f4(void)
{
    FN_ENTER(0x004096f4);
    goto L_004096f4;
L_00409432:; BB(0x00409432);
    /* 00409432: cmp ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00409434: jae 0x409922 */ if (!fC) goto L_00409922;
L_0040943a:; BB(0x0040943a);
    /* 0040943a: mov ecx, dword ptr [esp + 0x40] */ r_ecx = R32((u32)(r_esp+0x40u));
    /* 0040943e: fld dword ptr [0x8f99a4] */ FPUSH(R_F32((u32)(0x8f99a4u)));
    /* 00409444: fld dword ptr [ecx + ebp*8 + 0x2c] */ FPUSH(R_F32((u32)(r_ecx+r_ebp*8+0x2cu)));
    /* 00409448: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0040944a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0040944c: fstp dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 00409450: mov edi, 0xffffffff */ r_edi = 0xffffffffu;
    /* 00409455: lea ebx, [ebp + ebp] */ r_ebx = (u32)(r_ebp+r_ebp);
    /* 00409459: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0040945a: jbe 0x40946b */ if ((fC||fZ)) goto L_0040946b;
L_0040945c:; BB(0x0040945c);
    /* 0040945c: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 00409460: fcomp dword ptr [0x8f99a0] */ fx_compare(ST(0), R_F32((u32)(0x8f99a0u))); FPOP();
    /* 00409466: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00409468: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00409469: jb 0x409470 */ if (fC) goto L_00409470;
L_0040946b:; BB(0x0040946b);
    /* 0040946b: mov edi, 0xffffff */ r_edi = 0xffffffu;
L_00409470:; BB(0x00409470);
    /* 00409470: fcom dword ptr [esp + 0x58] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x58u))); 
    /* 00409474: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00409476: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00409477: jae 0x4094c5 */ if (!fC) goto L_004094c5;
L_00409479:; BB(0x00409479);
    /* 00409479: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 0040947d: fcomp dword ptr [0x8f999c] */ fx_compare(ST(0), R_F32((u32)(0x8f999cu))); FPOP();
    /* 00409483: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00409485: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00409486: jae 0x4094c5 */ if (!fC) goto L_004094c5;
L_00409488:; BB(0x00409488);
    /* 00409488: fld dword ptr [0x8f9994] */ FPUSH(R_F32((u32)(0x8f9994u)));
    /* 0040948e: fadd dword ptr [esp + 0x58] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x58u));
    /* 00409492: fmul dword ptr [0x8f9998] */ ST(0) = ST(0) * R_F32((u32)(0x8f9998u));
    /* 00409498: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 0040949a: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 0040949e: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 004094a3: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004094a8: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 004094ac: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 004094b0: fistp qword ptr [esp + 0x30] */ W64((u32)(r_esp+0x30u), (u64)fx_int64(ST(0))); FPOP();
    /* 004094b4: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 004094b8: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 004094bc: shl edi, 0x18 */ { u32 c = (24u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 004094bf: or edi, 0xffffff */ {  u32 a = r_edi; u32 b = 0xffffffu; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
L_004094c5:; BB(0x004094c5);
    /* 004094c5: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 004094c9: fcomp dword ptr [0x8f9990] */ fx_compare(ST(0), R_F32((u32)(0x8f9990u))); FPOP();
    /* 004094cf: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004094d1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004094d2: jbe 0x409520 */ if ((fC||fZ)) goto L_00409520;
L_004094d4:; BB(0x004094d4);
    /* 004094d4: fld dword ptr [0x8f99a0] */ FPUSH(R_F32((u32)(0x8f99a0u)));
    /* 004094da: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 004094de: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 004094e0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004094e2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004094e3: jae 0x40992f */ if (!fC) goto L_0040992f;
L_004094e9:; BB(0x004094e9);
    /* 004094e9: fsub dword ptr [esp + 0x58] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x58u));
    /* 004094ed: fmul dword ptr [0x8f9998] */ ST(0) = ST(0) * R_F32((u32)(0x8f9998u));
    /* 004094f3: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 004094f5: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 004094f9: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 004094fe: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00409503: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 00409507: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 0040950b: fistp qword ptr [esp + 0x30] */ W64((u32)(r_esp+0x30u), (u64)fx_int64(ST(0))); FPOP();
    /* 0040950f: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 00409513: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 00409517: shl edi, 0x18 */ { u32 c = (24u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 0040951a: or edi, 0xffffff */ {  u32 a = r_edi; u32 b = 0xffffffu; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
L_00409520:; BB(0x00409520);
    /* 00409520: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00409522: mov eax, dword ptr [0xa3ad40] */ r_eax = R32((u32)(0xa3ad40u));
    /* 00409527: mov esi, dword ptr [eax + ebp*4] */ r_esi = R32((u32)(r_eax+r_ebp*4));
    /* 0040952a: movsx eax, byte ptr [esi] */ r_eax = (u32)(i32)(i8)R8((u32)(r_esi));
    /* 0040952d: cmp eax, 0x23 */ {  u32 a = r_eax; u32 b = 0x23u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409530: je 0x4095fe */ if (fZ) goto L_004095fe;
L_00409536:; BB(0x00409536);
    /* 00409536: cmp eax, 0x21 */ {  u32 a = r_eax; u32 b = 0x21u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409539: jne 0x409581 */ if (!fZ) goto L_00409581;
L_0040953b:; BB(0x0040953b);
    /* 0040953b: mov ecx, dword ptr [0xa3ad48] */ r_ecx = R32((u32)(0xa3ad48u));
    /* 00409541: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x409546u); f_00829cc8();
    /* 00409546: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0040954b: call 0x82bb30 */ r_esp -= 4; W32(r_esp, 0x409550u); f_0082bb30();
    /* 00409550: mov ecx, 3 */ r_ecx = 0x3u;
    /* 00409555: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0040955a: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x40955fu); f_0082bb60();
    /* 0040955f: push 0x3f7fff58 */ { u32 v = 0x3f7fff58u; r_esp -= 4; W32(r_esp, v); }
    /* 00409564: mov ecx, dword ptr [esp + 0x50] */ r_ecx = R32((u32)(r_esp+0x50u));
    /* 00409568: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x40956du); f_0082b440();
    /* 0040956d: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x409572u); f_004ac444();
    /* 00409572: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 00409576: mov edx, dword ptr [eax + 0x1928] */ r_edx = R32((u32)(r_eax+0x1928u));
    /* 0040957c: jmp 0x409606 */ goto L_00409606;
L_00409581:; BB(0x00409581);
    /* 00409581: cmp eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409584: jne 0x4095c9 */ if (!fZ) goto L_004095c9;
L_00409586:; BB(0x00409586);
    /* 00409586: mov ecx, dword ptr [0xa3ad48] */ r_ecx = R32((u32)(0xa3ad48u));
    /* 0040958c: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x409591u); f_00829cc8();
    /* 00409591: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00409596: call 0x82bb30 */ r_esp -= 4; W32(r_esp, 0x40959bu); f_0082bb30();
    /* 0040959b: mov ecx, 4 */ r_ecx = 0x4u;
    /* 004095a0: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 004095a5: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x4095aau); f_0082bb60();
    /* 004095aa: push 0x3f7fff58 */ { u32 v = 0x3f7fff58u; r_esp -= 4; W32(r_esp, v); }
    /* 004095af: mov ecx, dword ptr [esp + 0x4c] */ r_ecx = R32((u32)(r_esp+0x4cu));
    /* 004095b3: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x4095b8u); f_0082b440();
    /* 004095b8: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x4095bdu); f_004ac444();
    /* 004095bd: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 004095c1: mov edx, dword ptr [eax + 0x1928] */ r_edx = R32((u32)(r_eax+0x1928u));
    /* 004095c7: jmp 0x409606 */ goto L_00409606;
L_004095c9:; BB(0x004095c9);
    /* 004095c9: cmp edi, 0xffffff */ {  u32 a = r_edi; u32 b = 0xffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004095cf: je 0x409606 */ if (fZ) goto L_00409606;
L_004095d1:; BB(0x004095d1);
    /* 004095d1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004095d2: call 0x7087dc */ r_esp -= 4; W32(r_esp, 0x4095d7u); f_007087dc();
    /* 004095d7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004095d8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004095d9: push 0x3f7fff58 */ { u32 v = 0x3f7fff58u; r_esp -= 4; W32(r_esp, v); }
    /* 004095de: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 004095e2: push dword ptr [eax + ebx*4 + 0x2c] */ { u32 v = R32((u32)(r_eax+r_ebx*4+0x2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004095e6: push dword ptr [eax + ebp*8 + 0x28] */ { u32 v = R32((u32)(r_eax+r_ebp*8+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 004095ea: call 0x789248 */ r_esp -= 4; W32(r_esp, 0x4095efu); f_00789248();
    /* 004095ef: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004095f2: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 004095f6: mov edx, dword ptr [eax + 0x1928] */ r_edx = R32((u32)(r_eax+0x1928u));
    /* 004095fc: jmp 0x409606 */ goto L_00409606;
L_004095fe:; BB(0x004095fe);
    /* 004095fe: cmp edi, 0xffffff */ {  u32 a = r_edi; u32 b = 0xffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409604: jne 0x40960e */ if (!fZ) goto L_0040960e;
L_00409606:; BB(0x00409606);
    /* 00409606: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00409609: jmp 0x409432 */ goto L_00409432;
L_0040960e:; BB(0x0040960e);
    /* 0040960e: mov eax, ecx */ r_eax = r_ecx;
    /* 00409610: fld dword ptr [eax + ebp*8 + 0x28] */ FPUSH(R_F32((u32)(r_eax+r_ebp*8+0x28u)));
    /* 00409614: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 00409618: mov ebx, 0xfe */ r_ebx = 0xfeu;
    /* 0040961d: call 0x7a9044 */ r_esp -= 4; W32(r_esp, 0x409622u); f_007a9044();
    /* 00409622: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00409627: call 0x82bb30 */ r_esp -= 4; W32(r_esp, 0x40962cu); f_0082bb30();
    /* 0040962c: push dword ptr [0xa3ad48] */ { u32 v = R32((u32)(0xa3ad48u)); r_esp -= 4; W32(r_esp, v); }
    /* 00409632: call 0x81a9b8 */ r_esp -= 4; W32(r_esp, 0x409637u); f_0081a9b8();
    /* 00409637: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00409638: mov dword ptr [esp + 0x50], edi */ W32((u32)(r_esp+0x50u), r_edi);
    /* 0040963c: mov dword ptr [esp + 0x44], ebp */ W32((u32)(r_esp+0x44u), r_ebp);
L_00409640:; BB(0x00409640);
    /* 00409640: movsx ebp, byte ptr [esi] */ r_ebp = (u32)(i32)(i8)R8((u32)(r_esi));
    /* 00409643: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409645: je 0x40990a */ if (fZ) goto L_0040990a;
L_0040964b:; BB(0x0040964b);
    /* 0040964b: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 00409651: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00409654: cmp ebp, 0x23 */ {  u32 a = r_ebp; u32 b = 0x23u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409657: je 0x409640 */ if (fZ) goto L_00409640;
L_00409659:; BB(0x00409659);
    /* 00409659: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 0040965d: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00409660: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00409661: call 0x85824c */ r_esp -= 4; W32(r_esp, 0x409666u); f_0085824c();
    /* 00409666: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00409667: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409669: je 0x409677 */ if (fZ) goto L_00409677;
L_0040966b:; BB(0x0040966b);
    /* 0040966b: fld dword ptr [0x8f9980] */ FPUSH(R_F32((u32)(0x8f9980u)));
    /* 00409671: fadd dword ptr [esp + 0x58] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x58u));
    /* 00409675: jmp 0x40967b */ goto L_0040967b;
L_00409677:; BB(0x00409677);
    /* 00409677: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
L_0040967b:; BB(0x0040967b);
    /* 0040967b: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0040967f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00409680: call 0x858339 */ r_esp -= 4; W32(r_esp, 0x409685u); f_00858339();
    /* 00409685: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00409686: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409688: jne 0x409710 */ if (!fZ) goto L_00409710;
L_0040968e:; BB(0x0040968e);
    /* 0040968e: add ebp, -0x26 */ {  u32 a = r_ebp; u32 b = 0xffffffdau; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00409691: cmp ebp, 0x58 */ {  u32 a = r_ebp; u32 b = 0x58u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00409694: ja 0x409709 */ if ((!fC&&!fZ)) goto L_00409709;
L_0040969a:; BB(0x0040969a);
    /* 0040969a: mov eax, dword ptr [ebp*4 + 0x8f94c0] */ r_eax = R32((u32)(r_ebp*4+0x8f94c0u));
    /* 004096a1: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_004096f4:; BB(0x004096f4);
    /* 004096f4: mov ebp, 0x1b */ r_ebp = 0x1bu;
    /* 004096f9: jmp 0x409750 */ goto L_00409750;
L_00409709:; BB(0x00409709);
    /* 00409709: mov ebp, 0x52 */ r_ebp = 0x52u;
    /* 0040970e: jmp 0x409750 */ goto L_00409750;
L_00409710:; BB(0x00409710);
    /* 00409710: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00409711: call 0x858212 */ r_esp -= 4; W32(r_esp, 0x409716u); f_00858212();
    /* 00409716: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00409717: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409719: je 0x409726 */ if (fZ) goto L_00409726;
L_0040971b:; BB(0x0040971b);
    /* 0040971b: add ebp, -0x41 */ {  u32 a = r_ebp; u32 b = 0xffffffbfu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0040971e: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 00409724: jmp 0x409750 */ goto L_00409750;
L_00409726:; BB(0x00409726);
    /* 00409726: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00409727: call 0x85824c */ r_esp -= 4; W32(r_esp, 0x40972cu); f_0085824c();
    /* 0040972c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0040972d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040972f: je 0x40973c */ if (fZ) goto L_0040973c;
L_00409731:; BB(0x00409731);
    /* 00409731: add ebp, -0x3d */ {  u32 a = r_ebp; u32 b = 0xffffffc3u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00409734: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 0040973a: jmp 0x409750 */ goto L_00409750;
L_0040973c:; BB(0x0040973c);
    /* 0040973c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040973d: call 0x858286 */ r_esp -= 4; W32(r_esp, 0x409742u); f_00858286();
    /* 00409742: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00409743: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409745: je 0x409750 */ if (fZ) goto L_00409750;
L_00409747:; BB(0x00409747);
    /* 00409747: add ebp, 0xe */ {  u32 a = r_ebp; u32 b = 0xeu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0040974a: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
L_00409750:; BB(0x00409750);
    /* 00409750: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00409753: cmp ebp, 0x52 */ {  u32 a = r_ebp; u32 b = 0x52u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409756: je 0x4098ac */ if (fZ) goto L_004098ac;
L_0040975c:; BB(0x0040975c);
    /* 0040975c: fld dword ptr [0x8f9988] */ FPUSH(R_F32((u32)(0x8f9988u)));
    /* 00409762: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00409766: fld dword ptr [0x8f99d4] */ FPUSH(R_F32((u32)(0x8f99d4u)));
    /* 0040976c: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 0040976e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00409770: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00409774: mov eax, 0x38e38e39 */ r_eax = 0x38e38e39u;
    /* 00409779: imul ebp */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebp; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040977b: mov eax, ebp */ r_eax = r_ebp;
    /* 0040977d: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00409780: mov ecx, edx */ r_ecx = r_edx;
    /* 00409782: sar ecx, 3 */ { u32 c = (3u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00409785: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00409787: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 0040978a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0040978c: lea edi, [eax + eax*8] */ r_edi = (u32)(r_eax+r_eax*8);
    /* 0040978f: imul eax, ecx, -0x24 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xffffffdcu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00409792: neg edi */ { u32 x = r_edi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00409794: add edi, ebp */ {  u32 a = r_edi; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00409796: add ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00409798: mov eax, 0x2aaaaaab */ r_eax = 0x2aaaaaabu;
    /* 0040979d: imul ebp */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebp; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040979f: mov eax, ebp */ r_eax = r_ebp;
    /* 004097a1: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004097a4: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004097a6: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 004097a9: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004097ab: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004097ad: sub ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 004097af: mov dword ptr [esp + 0x38], ebp */ W32((u32)(r_esp+0x38u), r_ebp);
    /* 004097b3: fild dword ptr [esp + 0x38] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x38u)));
    /* 004097b7: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 004097b9: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 004097bd: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 004097c2: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004097c7: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 004097cb: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 004097cf: fistp qword ptr [esp + 0x30] */ W64((u32)(r_esp+0x30u), (u64)fx_int64(ST(0))); FPOP();
    /* 004097d3: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 004097d7: mov eax, 0x2aaaaaab */ r_eax = 0x2aaaaaabu;
    /* 004097dc: imul edi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_edi; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004097de: mov eax, edi */ r_eax = r_edi;
    /* 004097e0: movzx ebp, byte ptr [esp + 0x30] */ r_ebp = (u32)R8((u32)(r_esp+0x30u));
    /* 004097e5: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004097e8: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004097ea: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
    /* 004097ee: fild dword ptr [esp + 0x38] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x38u)));
    /* 004097f2: mov dword ptr [esp + 0x38], ebp */ W32((u32)(r_esp+0x38u), r_ebp);
    /* 004097f6: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 004097f8: fild dword ptr [esp + 0x38] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x38u)));
    /* 004097fc: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004097fe: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 00409802: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 00409807: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0040980c: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 00409810: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 00409814: fistp qword ptr [esp + 0x30] */ W64((u32)(r_esp+0x30u), (u64)fx_int64(ST(0))); FPOP();
    /* 00409818: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 0040981c: lea eax, [ecx + ecx*8] */ r_eax = (u32)(r_ecx+r_ecx*8);
    /* 0040981f: fld dword ptr [0x8f997c] */ FPUSH(R_F32((u32)(0x8f997cu)));
    /* 00409825: fld dword ptr [0x8f997c] */ FPUSH(R_F32((u32)(0x8f997cu)));
    /* 0040982b: fdivr st(3) */ ST(0) = ST(3) / ST(0);
    /* 0040982d: movzx edx, byte ptr [esp + 0x30] */ r_edx = (u32)R8((u32)(r_esp+0x30u));
    /* 00409832: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00409836: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409838: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
    /* 0040983c: fild dword ptr [esp + 0x38] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x38u)));
    /* 00409840: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409842: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409844: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409846: fld dword ptr [eax + edi*4 + 0x8f97c0] */ FPUSH(R_F32((u32)(r_eax+r_edi*4+0x8f97c0u)));
    /* 0040984d: fadd st(5), st(0) */ ST(5) = ST(5) + ST(0);
    /* 0040984f: fadd st(4), st(0) */ ST(4) = ST(4) + ST(0);
    /* 00409851: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00409853: fdiv st(4), st(0) */ ST(4) = ST(4) / ST(0);
    /* 00409855: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 00409857: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0040985b: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0040985d: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 00409861: fld dword ptr [0x8f997c] */ FPUSH(R_F32((u32)(0x8f997cu)));
    /* 00409867: fdivr st(3) */ ST(0) = ST(3) / ST(0);
    /* 00409869: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 0040986d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0040986f: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00409871: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00409873: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 00409875: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 00409879: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0040987b: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 0040987f: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00409881: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
L_00409885:; BB(0x00409885);
    /* 00409885: movzx ebp, cl */ r_ebp = (u32)(u8)r_ecx;
    /* 00409888: cmp ebp, ebx */ {  u32 a = r_ebp; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040988a: je 0x409899 */ if (fZ) goto L_00409899;
L_0040988c:; BB(0x0040988c);
    /* 0040988c: mov edx, dword ptr [esp + 0x50] */ r_edx = R32((u32)(r_esp+0x50u));
    /* 00409890: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00409892: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x409897u); f_0082bb60();
    /* 00409897: mov ebx, ebp */ r_ebx = r_ebp;
L_00409899:; BB(0x00409899);
    /* 00409899: push 0x3f7fff58 */ { u32 v = 0x3f7fff58u; r_esp -= 4; W32(r_esp, v); }
    /* 0040989e: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 004098a2: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x4098a7u); f_0082b440();
    /* 004098a7: jmp 0x409640 */ goto L_00409640;
L_004098ac:; BB(0x004098ac);
    /* 004098ac: fld dword ptr [0x8f9978] */ FPUSH(R_F32((u32)(0x8f9978u)));
    /* 004098b2: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 004098b6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004098b8: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 004098ba: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004098bc: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004098c0: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 004098c4: fadd dword ptr [0x8f99d4] */ ST(0) = ST(0) + R_F32((u32)(0x8f99d4u));
    /* 004098ca: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 004098ce: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004098d0: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 004098d4: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 004098dc: mov eax, 0x38e38e39 */ r_eax = 0x38e38e39u;
    /* 004098e1: imul ebp */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebp; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004098e3: sar ebp, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebp = r;  } }
    /* 004098e6: mov ecx, edx */ r_ecx = r_edx;
    /* 004098e8: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 004098f0: sar ecx, 3 */ { u32 c = (3u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 004098f3: sub ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004098f5: mov dword ptr [esp + 0x18], 0 */ W32((u32)(r_esp+0x18u), 0x0u);
    /* 004098fd: mov dword ptr [esp + 0x1c], 0 */ W32((u32)(r_esp+0x1cu), 0x0u);
    /* 00409905: jmp 0x409885 */ goto L_00409885;
L_0040990a:; BB(0x0040990a);
    /* 0040990a: mov ebp, dword ptr [esp + 0x44] */ r_ebp = R32((u32)(r_esp+0x44u));
    /* 0040990e: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x409913u); f_004ac444();
    /* 00409913: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 00409917: mov edx, dword ptr [eax + 0x1928] */ r_edx = R32((u32)(r_eax+0x1928u));
    /* 0040991d: jmp 0x409606 */ goto L_00409606;
L_00409922:; BB(0x00409922);
    /* 00409922: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x409927u); f_0082dab0();
    /* 00409927: add esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0040992a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0040992b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040992c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0040992d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0040992e: ret  */ FN_RET(0x004096f4); r_esp += 4; return;
L_0040992f:; BB(0x0040992f);
    /* 0040992f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00409931: jmp 0x409520 */ goto L_00409520;
}

void f_004096fb(void)
{
    FN_ENTER(0x004096fb);
    goto L_004096fb;
L_00409432:; BB(0x00409432);
    /* 00409432: cmp ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00409434: jae 0x409922 */ if (!fC) goto L_00409922;
L_0040943a:; BB(0x0040943a);
    /* 0040943a: mov ecx, dword ptr [esp + 0x40] */ r_ecx = R32((u32)(r_esp+0x40u));
    /* 0040943e: fld dword ptr [0x8f99a4] */ FPUSH(R_F32((u32)(0x8f99a4u)));
    /* 00409444: fld dword ptr [ecx + ebp*8 + 0x2c] */ FPUSH(R_F32((u32)(r_ecx+r_ebp*8+0x2cu)));
    /* 00409448: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0040944a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0040944c: fstp dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 00409450: mov edi, 0xffffffff */ r_edi = 0xffffffffu;
    /* 00409455: lea ebx, [ebp + ebp] */ r_ebx = (u32)(r_ebp+r_ebp);
    /* 00409459: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0040945a: jbe 0x40946b */ if ((fC||fZ)) goto L_0040946b;
L_0040945c:; BB(0x0040945c);
    /* 0040945c: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 00409460: fcomp dword ptr [0x8f99a0] */ fx_compare(ST(0), R_F32((u32)(0x8f99a0u))); FPOP();
    /* 00409466: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00409468: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00409469: jb 0x409470 */ if (fC) goto L_00409470;
L_0040946b:; BB(0x0040946b);
    /* 0040946b: mov edi, 0xffffff */ r_edi = 0xffffffu;
L_00409470:; BB(0x00409470);
    /* 00409470: fcom dword ptr [esp + 0x58] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x58u))); 
    /* 00409474: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00409476: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00409477: jae 0x4094c5 */ if (!fC) goto L_004094c5;
L_00409479:; BB(0x00409479);
    /* 00409479: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 0040947d: fcomp dword ptr [0x8f999c] */ fx_compare(ST(0), R_F32((u32)(0x8f999cu))); FPOP();
    /* 00409483: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00409485: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00409486: jae 0x4094c5 */ if (!fC) goto L_004094c5;
L_00409488:; BB(0x00409488);
    /* 00409488: fld dword ptr [0x8f9994] */ FPUSH(R_F32((u32)(0x8f9994u)));
    /* 0040948e: fadd dword ptr [esp + 0x58] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x58u));
    /* 00409492: fmul dword ptr [0x8f9998] */ ST(0) = ST(0) * R_F32((u32)(0x8f9998u));
    /* 00409498: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 0040949a: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 0040949e: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 004094a3: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004094a8: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 004094ac: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 004094b0: fistp qword ptr [esp + 0x30] */ W64((u32)(r_esp+0x30u), (u64)fx_int64(ST(0))); FPOP();
    /* 004094b4: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 004094b8: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 004094bc: shl edi, 0x18 */ { u32 c = (24u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 004094bf: or edi, 0xffffff */ {  u32 a = r_edi; u32 b = 0xffffffu; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
L_004094c5:; BB(0x004094c5);
    /* 004094c5: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 004094c9: fcomp dword ptr [0x8f9990] */ fx_compare(ST(0), R_F32((u32)(0x8f9990u))); FPOP();
    /* 004094cf: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004094d1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004094d2: jbe 0x409520 */ if ((fC||fZ)) goto L_00409520;
L_004094d4:; BB(0x004094d4);
    /* 004094d4: fld dword ptr [0x8f99a0] */ FPUSH(R_F32((u32)(0x8f99a0u)));
    /* 004094da: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 004094de: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 004094e0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004094e2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004094e3: jae 0x40992f */ if (!fC) goto L_0040992f;
L_004094e9:; BB(0x004094e9);
    /* 004094e9: fsub dword ptr [esp + 0x58] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x58u));
    /* 004094ed: fmul dword ptr [0x8f9998] */ ST(0) = ST(0) * R_F32((u32)(0x8f9998u));
    /* 004094f3: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 004094f5: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 004094f9: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 004094fe: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00409503: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 00409507: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 0040950b: fistp qword ptr [esp + 0x30] */ W64((u32)(r_esp+0x30u), (u64)fx_int64(ST(0))); FPOP();
    /* 0040950f: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 00409513: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 00409517: shl edi, 0x18 */ { u32 c = (24u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 0040951a: or edi, 0xffffff */ {  u32 a = r_edi; u32 b = 0xffffffu; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
L_00409520:; BB(0x00409520);
    /* 00409520: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00409522: mov eax, dword ptr [0xa3ad40] */ r_eax = R32((u32)(0xa3ad40u));
    /* 00409527: mov esi, dword ptr [eax + ebp*4] */ r_esi = R32((u32)(r_eax+r_ebp*4));
    /* 0040952a: movsx eax, byte ptr [esi] */ r_eax = (u32)(i32)(i8)R8((u32)(r_esi));
    /* 0040952d: cmp eax, 0x23 */ {  u32 a = r_eax; u32 b = 0x23u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409530: je 0x4095fe */ if (fZ) goto L_004095fe;
L_00409536:; BB(0x00409536);
    /* 00409536: cmp eax, 0x21 */ {  u32 a = r_eax; u32 b = 0x21u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409539: jne 0x409581 */ if (!fZ) goto L_00409581;
L_0040953b:; BB(0x0040953b);
    /* 0040953b: mov ecx, dword ptr [0xa3ad48] */ r_ecx = R32((u32)(0xa3ad48u));
    /* 00409541: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x409546u); f_00829cc8();
    /* 00409546: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0040954b: call 0x82bb30 */ r_esp -= 4; W32(r_esp, 0x409550u); f_0082bb30();
    /* 00409550: mov ecx, 3 */ r_ecx = 0x3u;
    /* 00409555: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0040955a: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x40955fu); f_0082bb60();
    /* 0040955f: push 0x3f7fff58 */ { u32 v = 0x3f7fff58u; r_esp -= 4; W32(r_esp, v); }
    /* 00409564: mov ecx, dword ptr [esp + 0x50] */ r_ecx = R32((u32)(r_esp+0x50u));
    /* 00409568: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x40956du); f_0082b440();
    /* 0040956d: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x409572u); f_004ac444();
    /* 00409572: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 00409576: mov edx, dword ptr [eax + 0x1928] */ r_edx = R32((u32)(r_eax+0x1928u));
    /* 0040957c: jmp 0x409606 */ goto L_00409606;
L_00409581:; BB(0x00409581);
    /* 00409581: cmp eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409584: jne 0x4095c9 */ if (!fZ) goto L_004095c9;
L_00409586:; BB(0x00409586);
    /* 00409586: mov ecx, dword ptr [0xa3ad48] */ r_ecx = R32((u32)(0xa3ad48u));
    /* 0040958c: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x409591u); f_00829cc8();
    /* 00409591: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00409596: call 0x82bb30 */ r_esp -= 4; W32(r_esp, 0x40959bu); f_0082bb30();
    /* 0040959b: mov ecx, 4 */ r_ecx = 0x4u;
    /* 004095a0: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 004095a5: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x4095aau); f_0082bb60();
    /* 004095aa: push 0x3f7fff58 */ { u32 v = 0x3f7fff58u; r_esp -= 4; W32(r_esp, v); }
    /* 004095af: mov ecx, dword ptr [esp + 0x4c] */ r_ecx = R32((u32)(r_esp+0x4cu));
    /* 004095b3: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x4095b8u); f_0082b440();
    /* 004095b8: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x4095bdu); f_004ac444();
    /* 004095bd: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 004095c1: mov edx, dword ptr [eax + 0x1928] */ r_edx = R32((u32)(r_eax+0x1928u));
    /* 004095c7: jmp 0x409606 */ goto L_00409606;
L_004095c9:; BB(0x004095c9);
    /* 004095c9: cmp edi, 0xffffff */ {  u32 a = r_edi; u32 b = 0xffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004095cf: je 0x409606 */ if (fZ) goto L_00409606;
L_004095d1:; BB(0x004095d1);
    /* 004095d1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004095d2: call 0x7087dc */ r_esp -= 4; W32(r_esp, 0x4095d7u); f_007087dc();
    /* 004095d7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004095d8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004095d9: push 0x3f7fff58 */ { u32 v = 0x3f7fff58u; r_esp -= 4; W32(r_esp, v); }
    /* 004095de: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 004095e2: push dword ptr [eax + ebx*4 + 0x2c] */ { u32 v = R32((u32)(r_eax+r_ebx*4+0x2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004095e6: push dword ptr [eax + ebp*8 + 0x28] */ { u32 v = R32((u32)(r_eax+r_ebp*8+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 004095ea: call 0x789248 */ r_esp -= 4; W32(r_esp, 0x4095efu); f_00789248();
    /* 004095ef: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004095f2: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 004095f6: mov edx, dword ptr [eax + 0x1928] */ r_edx = R32((u32)(r_eax+0x1928u));
    /* 004095fc: jmp 0x409606 */ goto L_00409606;
L_004095fe:; BB(0x004095fe);
    /* 004095fe: cmp edi, 0xffffff */ {  u32 a = r_edi; u32 b = 0xffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409604: jne 0x40960e */ if (!fZ) goto L_0040960e;
L_00409606:; BB(0x00409606);
    /* 00409606: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00409609: jmp 0x409432 */ goto L_00409432;
L_0040960e:; BB(0x0040960e);
    /* 0040960e: mov eax, ecx */ r_eax = r_ecx;
    /* 00409610: fld dword ptr [eax + ebp*8 + 0x28] */ FPUSH(R_F32((u32)(r_eax+r_ebp*8+0x28u)));
    /* 00409614: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 00409618: mov ebx, 0xfe */ r_ebx = 0xfeu;
    /* 0040961d: call 0x7a9044 */ r_esp -= 4; W32(r_esp, 0x409622u); f_007a9044();
    /* 00409622: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00409627: call 0x82bb30 */ r_esp -= 4; W32(r_esp, 0x40962cu); f_0082bb30();
    /* 0040962c: push dword ptr [0xa3ad48] */ { u32 v = R32((u32)(0xa3ad48u)); r_esp -= 4; W32(r_esp, v); }
    /* 00409632: call 0x81a9b8 */ r_esp -= 4; W32(r_esp, 0x409637u); f_0081a9b8();
    /* 00409637: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00409638: mov dword ptr [esp + 0x50], edi */ W32((u32)(r_esp+0x50u), r_edi);
    /* 0040963c: mov dword ptr [esp + 0x44], ebp */ W32((u32)(r_esp+0x44u), r_ebp);
L_00409640:; BB(0x00409640);
    /* 00409640: movsx ebp, byte ptr [esi] */ r_ebp = (u32)(i32)(i8)R8((u32)(r_esi));
    /* 00409643: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409645: je 0x40990a */ if (fZ) goto L_0040990a;
L_0040964b:; BB(0x0040964b);
    /* 0040964b: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 00409651: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00409654: cmp ebp, 0x23 */ {  u32 a = r_ebp; u32 b = 0x23u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409657: je 0x409640 */ if (fZ) goto L_00409640;
L_00409659:; BB(0x00409659);
    /* 00409659: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 0040965d: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00409660: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00409661: call 0x85824c */ r_esp -= 4; W32(r_esp, 0x409666u); f_0085824c();
    /* 00409666: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00409667: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409669: je 0x409677 */ if (fZ) goto L_00409677;
L_0040966b:; BB(0x0040966b);
    /* 0040966b: fld dword ptr [0x8f9980] */ FPUSH(R_F32((u32)(0x8f9980u)));
    /* 00409671: fadd dword ptr [esp + 0x58] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x58u));
    /* 00409675: jmp 0x40967b */ goto L_0040967b;
L_00409677:; BB(0x00409677);
    /* 00409677: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
L_0040967b:; BB(0x0040967b);
    /* 0040967b: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0040967f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00409680: call 0x858339 */ r_esp -= 4; W32(r_esp, 0x409685u); f_00858339();
    /* 00409685: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00409686: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409688: jne 0x409710 */ if (!fZ) goto L_00409710;
L_0040968e:; BB(0x0040968e);
    /* 0040968e: add ebp, -0x26 */ {  u32 a = r_ebp; u32 b = 0xffffffdau; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00409691: cmp ebp, 0x58 */ {  u32 a = r_ebp; u32 b = 0x58u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00409694: ja 0x409709 */ if ((!fC&&!fZ)) goto L_00409709;
L_0040969a:; BB(0x0040969a);
    /* 0040969a: mov eax, dword ptr [ebp*4 + 0x8f94c0] */ r_eax = R32((u32)(r_ebp*4+0x8f94c0u));
    /* 004096a1: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_004096fb:; BB(0x004096fb);
    /* 004096fb: mov ebp, 0x1a */ r_ebp = 0x1au;
    /* 00409700: jmp 0x409750 */ goto L_00409750;
L_00409709:; BB(0x00409709);
    /* 00409709: mov ebp, 0x52 */ r_ebp = 0x52u;
    /* 0040970e: jmp 0x409750 */ goto L_00409750;
L_00409710:; BB(0x00409710);
    /* 00409710: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00409711: call 0x858212 */ r_esp -= 4; W32(r_esp, 0x409716u); f_00858212();
    /* 00409716: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00409717: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409719: je 0x409726 */ if (fZ) goto L_00409726;
L_0040971b:; BB(0x0040971b);
    /* 0040971b: add ebp, -0x41 */ {  u32 a = r_ebp; u32 b = 0xffffffbfu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0040971e: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 00409724: jmp 0x409750 */ goto L_00409750;
L_00409726:; BB(0x00409726);
    /* 00409726: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00409727: call 0x85824c */ r_esp -= 4; W32(r_esp, 0x40972cu); f_0085824c();
    /* 0040972c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0040972d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040972f: je 0x40973c */ if (fZ) goto L_0040973c;
L_00409731:; BB(0x00409731);
    /* 00409731: add ebp, -0x3d */ {  u32 a = r_ebp; u32 b = 0xffffffc3u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00409734: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 0040973a: jmp 0x409750 */ goto L_00409750;
L_0040973c:; BB(0x0040973c);
    /* 0040973c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040973d: call 0x858286 */ r_esp -= 4; W32(r_esp, 0x409742u); f_00858286();
    /* 00409742: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00409743: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409745: je 0x409750 */ if (fZ) goto L_00409750;
L_00409747:; BB(0x00409747);
    /* 00409747: add ebp, 0xe */ {  u32 a = r_ebp; u32 b = 0xeu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0040974a: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
L_00409750:; BB(0x00409750);
    /* 00409750: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00409753: cmp ebp, 0x52 */ {  u32 a = r_ebp; u32 b = 0x52u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409756: je 0x4098ac */ if (fZ) goto L_004098ac;
L_0040975c:; BB(0x0040975c);
    /* 0040975c: fld dword ptr [0x8f9988] */ FPUSH(R_F32((u32)(0x8f9988u)));
    /* 00409762: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00409766: fld dword ptr [0x8f99d4] */ FPUSH(R_F32((u32)(0x8f99d4u)));
    /* 0040976c: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 0040976e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00409770: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00409774: mov eax, 0x38e38e39 */ r_eax = 0x38e38e39u;
    /* 00409779: imul ebp */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebp; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040977b: mov eax, ebp */ r_eax = r_ebp;
    /* 0040977d: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00409780: mov ecx, edx */ r_ecx = r_edx;
    /* 00409782: sar ecx, 3 */ { u32 c = (3u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00409785: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00409787: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 0040978a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0040978c: lea edi, [eax + eax*8] */ r_edi = (u32)(r_eax+r_eax*8);
    /* 0040978f: imul eax, ecx, -0x24 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xffffffdcu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00409792: neg edi */ { u32 x = r_edi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00409794: add edi, ebp */ {  u32 a = r_edi; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00409796: add ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00409798: mov eax, 0x2aaaaaab */ r_eax = 0x2aaaaaabu;
    /* 0040979d: imul ebp */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebp; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040979f: mov eax, ebp */ r_eax = r_ebp;
    /* 004097a1: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004097a4: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004097a6: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 004097a9: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004097ab: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004097ad: sub ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 004097af: mov dword ptr [esp + 0x38], ebp */ W32((u32)(r_esp+0x38u), r_ebp);
    /* 004097b3: fild dword ptr [esp + 0x38] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x38u)));
    /* 004097b7: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 004097b9: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 004097bd: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 004097c2: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004097c7: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 004097cb: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 004097cf: fistp qword ptr [esp + 0x30] */ W64((u32)(r_esp+0x30u), (u64)fx_int64(ST(0))); FPOP();
    /* 004097d3: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 004097d7: mov eax, 0x2aaaaaab */ r_eax = 0x2aaaaaabu;
    /* 004097dc: imul edi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_edi; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004097de: mov eax, edi */ r_eax = r_edi;
    /* 004097e0: movzx ebp, byte ptr [esp + 0x30] */ r_ebp = (u32)R8((u32)(r_esp+0x30u));
    /* 004097e5: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004097e8: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004097ea: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
    /* 004097ee: fild dword ptr [esp + 0x38] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x38u)));
    /* 004097f2: mov dword ptr [esp + 0x38], ebp */ W32((u32)(r_esp+0x38u), r_ebp);
    /* 004097f6: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 004097f8: fild dword ptr [esp + 0x38] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x38u)));
    /* 004097fc: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004097fe: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 00409802: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 00409807: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0040980c: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 00409810: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 00409814: fistp qword ptr [esp + 0x30] */ W64((u32)(r_esp+0x30u), (u64)fx_int64(ST(0))); FPOP();
    /* 00409818: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 0040981c: lea eax, [ecx + ecx*8] */ r_eax = (u32)(r_ecx+r_ecx*8);
    /* 0040981f: fld dword ptr [0x8f997c] */ FPUSH(R_F32((u32)(0x8f997cu)));
    /* 00409825: fld dword ptr [0x8f997c] */ FPUSH(R_F32((u32)(0x8f997cu)));
    /* 0040982b: fdivr st(3) */ ST(0) = ST(3) / ST(0);
    /* 0040982d: movzx edx, byte ptr [esp + 0x30] */ r_edx = (u32)R8((u32)(r_esp+0x30u));
    /* 00409832: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00409836: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409838: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
    /* 0040983c: fild dword ptr [esp + 0x38] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x38u)));
    /* 00409840: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409842: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409844: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409846: fld dword ptr [eax + edi*4 + 0x8f97c0] */ FPUSH(R_F32((u32)(r_eax+r_edi*4+0x8f97c0u)));
    /* 0040984d: fadd st(5), st(0) */ ST(5) = ST(5) + ST(0);
    /* 0040984f: fadd st(4), st(0) */ ST(4) = ST(4) + ST(0);
    /* 00409851: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00409853: fdiv st(4), st(0) */ ST(4) = ST(4) / ST(0);
    /* 00409855: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 00409857: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0040985b: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0040985d: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 00409861: fld dword ptr [0x8f997c] */ FPUSH(R_F32((u32)(0x8f997cu)));
    /* 00409867: fdivr st(3) */ ST(0) = ST(3) / ST(0);
    /* 00409869: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 0040986d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0040986f: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00409871: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00409873: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 00409875: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 00409879: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0040987b: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 0040987f: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00409881: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
L_00409885:; BB(0x00409885);
    /* 00409885: movzx ebp, cl */ r_ebp = (u32)(u8)r_ecx;
    /* 00409888: cmp ebp, ebx */ {  u32 a = r_ebp; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040988a: je 0x409899 */ if (fZ) goto L_00409899;
L_0040988c:; BB(0x0040988c);
    /* 0040988c: mov edx, dword ptr [esp + 0x50] */ r_edx = R32((u32)(r_esp+0x50u));
    /* 00409890: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00409892: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x409897u); f_0082bb60();
    /* 00409897: mov ebx, ebp */ r_ebx = r_ebp;
L_00409899:; BB(0x00409899);
    /* 00409899: push 0x3f7fff58 */ { u32 v = 0x3f7fff58u; r_esp -= 4; W32(r_esp, v); }
    /* 0040989e: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 004098a2: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x4098a7u); f_0082b440();
    /* 004098a7: jmp 0x409640 */ goto L_00409640;
L_004098ac:; BB(0x004098ac);
    /* 004098ac: fld dword ptr [0x8f9978] */ FPUSH(R_F32((u32)(0x8f9978u)));
    /* 004098b2: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 004098b6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004098b8: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 004098ba: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004098bc: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004098c0: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 004098c4: fadd dword ptr [0x8f99d4] */ ST(0) = ST(0) + R_F32((u32)(0x8f99d4u));
    /* 004098ca: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 004098ce: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004098d0: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 004098d4: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 004098dc: mov eax, 0x38e38e39 */ r_eax = 0x38e38e39u;
    /* 004098e1: imul ebp */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebp; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004098e3: sar ebp, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebp = r;  } }
    /* 004098e6: mov ecx, edx */ r_ecx = r_edx;
    /* 004098e8: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 004098f0: sar ecx, 3 */ { u32 c = (3u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 004098f3: sub ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004098f5: mov dword ptr [esp + 0x18], 0 */ W32((u32)(r_esp+0x18u), 0x0u);
    /* 004098fd: mov dword ptr [esp + 0x1c], 0 */ W32((u32)(r_esp+0x1cu), 0x0u);
    /* 00409905: jmp 0x409885 */ goto L_00409885;
L_0040990a:; BB(0x0040990a);
    /* 0040990a: mov ebp, dword ptr [esp + 0x44] */ r_ebp = R32((u32)(r_esp+0x44u));
    /* 0040990e: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x409913u); f_004ac444();
    /* 00409913: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 00409917: mov edx, dword ptr [eax + 0x1928] */ r_edx = R32((u32)(r_eax+0x1928u));
    /* 0040991d: jmp 0x409606 */ goto L_00409606;
L_00409922:; BB(0x00409922);
    /* 00409922: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x409927u); f_0082dab0();
    /* 00409927: add esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0040992a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0040992b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040992c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0040992d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0040992e: ret  */ FN_RET(0x004096fb); r_esp += 4; return;
L_0040992f:; BB(0x0040992f);
    /* 0040992f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00409931: jmp 0x409520 */ goto L_00409520;
}

void f_00409702(void)
{
    FN_ENTER(0x00409702);
    goto L_00409702;
L_00409432:; BB(0x00409432);
    /* 00409432: cmp ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00409434: jae 0x409922 */ if (!fC) goto L_00409922;
L_0040943a:; BB(0x0040943a);
    /* 0040943a: mov ecx, dword ptr [esp + 0x40] */ r_ecx = R32((u32)(r_esp+0x40u));
    /* 0040943e: fld dword ptr [0x8f99a4] */ FPUSH(R_F32((u32)(0x8f99a4u)));
    /* 00409444: fld dword ptr [ecx + ebp*8 + 0x2c] */ FPUSH(R_F32((u32)(r_ecx+r_ebp*8+0x2cu)));
    /* 00409448: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0040944a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0040944c: fstp dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 00409450: mov edi, 0xffffffff */ r_edi = 0xffffffffu;
    /* 00409455: lea ebx, [ebp + ebp] */ r_ebx = (u32)(r_ebp+r_ebp);
    /* 00409459: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0040945a: jbe 0x40946b */ if ((fC||fZ)) goto L_0040946b;
L_0040945c:; BB(0x0040945c);
    /* 0040945c: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 00409460: fcomp dword ptr [0x8f99a0] */ fx_compare(ST(0), R_F32((u32)(0x8f99a0u))); FPOP();
    /* 00409466: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00409468: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00409469: jb 0x409470 */ if (fC) goto L_00409470;
L_0040946b:; BB(0x0040946b);
    /* 0040946b: mov edi, 0xffffff */ r_edi = 0xffffffu;
L_00409470:; BB(0x00409470);
    /* 00409470: fcom dword ptr [esp + 0x58] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x58u))); 
    /* 00409474: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00409476: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00409477: jae 0x4094c5 */ if (!fC) goto L_004094c5;
L_00409479:; BB(0x00409479);
    /* 00409479: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 0040947d: fcomp dword ptr [0x8f999c] */ fx_compare(ST(0), R_F32((u32)(0x8f999cu))); FPOP();
    /* 00409483: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00409485: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00409486: jae 0x4094c5 */ if (!fC) goto L_004094c5;
L_00409488:; BB(0x00409488);
    /* 00409488: fld dword ptr [0x8f9994] */ FPUSH(R_F32((u32)(0x8f9994u)));
    /* 0040948e: fadd dword ptr [esp + 0x58] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x58u));
    /* 00409492: fmul dword ptr [0x8f9998] */ ST(0) = ST(0) * R_F32((u32)(0x8f9998u));
    /* 00409498: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 0040949a: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 0040949e: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 004094a3: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004094a8: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 004094ac: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 004094b0: fistp qword ptr [esp + 0x30] */ W64((u32)(r_esp+0x30u), (u64)fx_int64(ST(0))); FPOP();
    /* 004094b4: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 004094b8: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 004094bc: shl edi, 0x18 */ { u32 c = (24u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 004094bf: or edi, 0xffffff */ {  u32 a = r_edi; u32 b = 0xffffffu; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
L_004094c5:; BB(0x004094c5);
    /* 004094c5: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 004094c9: fcomp dword ptr [0x8f9990] */ fx_compare(ST(0), R_F32((u32)(0x8f9990u))); FPOP();
    /* 004094cf: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004094d1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004094d2: jbe 0x409520 */ if ((fC||fZ)) goto L_00409520;
L_004094d4:; BB(0x004094d4);
    /* 004094d4: fld dword ptr [0x8f99a0] */ FPUSH(R_F32((u32)(0x8f99a0u)));
    /* 004094da: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 004094de: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 004094e0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004094e2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004094e3: jae 0x40992f */ if (!fC) goto L_0040992f;
L_004094e9:; BB(0x004094e9);
    /* 004094e9: fsub dword ptr [esp + 0x58] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x58u));
    /* 004094ed: fmul dword ptr [0x8f9998] */ ST(0) = ST(0) * R_F32((u32)(0x8f9998u));
    /* 004094f3: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 004094f5: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 004094f9: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 004094fe: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00409503: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 00409507: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 0040950b: fistp qword ptr [esp + 0x30] */ W64((u32)(r_esp+0x30u), (u64)fx_int64(ST(0))); FPOP();
    /* 0040950f: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 00409513: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 00409517: shl edi, 0x18 */ { u32 c = (24u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 0040951a: or edi, 0xffffff */ {  u32 a = r_edi; u32 b = 0xffffffu; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
L_00409520:; BB(0x00409520);
    /* 00409520: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00409522: mov eax, dword ptr [0xa3ad40] */ r_eax = R32((u32)(0xa3ad40u));
    /* 00409527: mov esi, dword ptr [eax + ebp*4] */ r_esi = R32((u32)(r_eax+r_ebp*4));
    /* 0040952a: movsx eax, byte ptr [esi] */ r_eax = (u32)(i32)(i8)R8((u32)(r_esi));
    /* 0040952d: cmp eax, 0x23 */ {  u32 a = r_eax; u32 b = 0x23u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409530: je 0x4095fe */ if (fZ) goto L_004095fe;
L_00409536:; BB(0x00409536);
    /* 00409536: cmp eax, 0x21 */ {  u32 a = r_eax; u32 b = 0x21u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409539: jne 0x409581 */ if (!fZ) goto L_00409581;
L_0040953b:; BB(0x0040953b);
    /* 0040953b: mov ecx, dword ptr [0xa3ad48] */ r_ecx = R32((u32)(0xa3ad48u));
    /* 00409541: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x409546u); f_00829cc8();
    /* 00409546: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0040954b: call 0x82bb30 */ r_esp -= 4; W32(r_esp, 0x409550u); f_0082bb30();
    /* 00409550: mov ecx, 3 */ r_ecx = 0x3u;
    /* 00409555: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0040955a: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x40955fu); f_0082bb60();
    /* 0040955f: push 0x3f7fff58 */ { u32 v = 0x3f7fff58u; r_esp -= 4; W32(r_esp, v); }
    /* 00409564: mov ecx, dword ptr [esp + 0x50] */ r_ecx = R32((u32)(r_esp+0x50u));
    /* 00409568: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x40956du); f_0082b440();
    /* 0040956d: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x409572u); f_004ac444();
    /* 00409572: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 00409576: mov edx, dword ptr [eax + 0x1928] */ r_edx = R32((u32)(r_eax+0x1928u));
    /* 0040957c: jmp 0x409606 */ goto L_00409606;
L_00409581:; BB(0x00409581);
    /* 00409581: cmp eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409584: jne 0x4095c9 */ if (!fZ) goto L_004095c9;
L_00409586:; BB(0x00409586);
    /* 00409586: mov ecx, dword ptr [0xa3ad48] */ r_ecx = R32((u32)(0xa3ad48u));
    /* 0040958c: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x409591u); f_00829cc8();
    /* 00409591: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00409596: call 0x82bb30 */ r_esp -= 4; W32(r_esp, 0x40959bu); f_0082bb30();
    /* 0040959b: mov ecx, 4 */ r_ecx = 0x4u;
    /* 004095a0: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 004095a5: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x4095aau); f_0082bb60();
    /* 004095aa: push 0x3f7fff58 */ { u32 v = 0x3f7fff58u; r_esp -= 4; W32(r_esp, v); }
    /* 004095af: mov ecx, dword ptr [esp + 0x4c] */ r_ecx = R32((u32)(r_esp+0x4cu));
    /* 004095b3: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x4095b8u); f_0082b440();
    /* 004095b8: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x4095bdu); f_004ac444();
    /* 004095bd: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 004095c1: mov edx, dword ptr [eax + 0x1928] */ r_edx = R32((u32)(r_eax+0x1928u));
    /* 004095c7: jmp 0x409606 */ goto L_00409606;
L_004095c9:; BB(0x004095c9);
    /* 004095c9: cmp edi, 0xffffff */ {  u32 a = r_edi; u32 b = 0xffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004095cf: je 0x409606 */ if (fZ) goto L_00409606;
L_004095d1:; BB(0x004095d1);
    /* 004095d1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004095d2: call 0x7087dc */ r_esp -= 4; W32(r_esp, 0x4095d7u); f_007087dc();
    /* 004095d7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004095d8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004095d9: push 0x3f7fff58 */ { u32 v = 0x3f7fff58u; r_esp -= 4; W32(r_esp, v); }
    /* 004095de: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 004095e2: push dword ptr [eax + ebx*4 + 0x2c] */ { u32 v = R32((u32)(r_eax+r_ebx*4+0x2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004095e6: push dword ptr [eax + ebp*8 + 0x28] */ { u32 v = R32((u32)(r_eax+r_ebp*8+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 004095ea: call 0x789248 */ r_esp -= 4; W32(r_esp, 0x4095efu); f_00789248();
    /* 004095ef: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004095f2: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 004095f6: mov edx, dword ptr [eax + 0x1928] */ r_edx = R32((u32)(r_eax+0x1928u));
    /* 004095fc: jmp 0x409606 */ goto L_00409606;
L_004095fe:; BB(0x004095fe);
    /* 004095fe: cmp edi, 0xffffff */ {  u32 a = r_edi; u32 b = 0xffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409604: jne 0x40960e */ if (!fZ) goto L_0040960e;
L_00409606:; BB(0x00409606);
    /* 00409606: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00409609: jmp 0x409432 */ goto L_00409432;
L_0040960e:; BB(0x0040960e);
    /* 0040960e: mov eax, ecx */ r_eax = r_ecx;
    /* 00409610: fld dword ptr [eax + ebp*8 + 0x28] */ FPUSH(R_F32((u32)(r_eax+r_ebp*8+0x28u)));
    /* 00409614: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 00409618: mov ebx, 0xfe */ r_ebx = 0xfeu;
    /* 0040961d: call 0x7a9044 */ r_esp -= 4; W32(r_esp, 0x409622u); f_007a9044();
    /* 00409622: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00409627: call 0x82bb30 */ r_esp -= 4; W32(r_esp, 0x40962cu); f_0082bb30();
    /* 0040962c: push dword ptr [0xa3ad48] */ { u32 v = R32((u32)(0xa3ad48u)); r_esp -= 4; W32(r_esp, v); }
    /* 00409632: call 0x81a9b8 */ r_esp -= 4; W32(r_esp, 0x409637u); f_0081a9b8();
    /* 00409637: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00409638: mov dword ptr [esp + 0x50], edi */ W32((u32)(r_esp+0x50u), r_edi);
    /* 0040963c: mov dword ptr [esp + 0x44], ebp */ W32((u32)(r_esp+0x44u), r_ebp);
L_00409640:; BB(0x00409640);
    /* 00409640: movsx ebp, byte ptr [esi] */ r_ebp = (u32)(i32)(i8)R8((u32)(r_esi));
    /* 00409643: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409645: je 0x40990a */ if (fZ) goto L_0040990a;
L_0040964b:; BB(0x0040964b);
    /* 0040964b: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 00409651: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00409654: cmp ebp, 0x23 */ {  u32 a = r_ebp; u32 b = 0x23u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409657: je 0x409640 */ if (fZ) goto L_00409640;
L_00409659:; BB(0x00409659);
    /* 00409659: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 0040965d: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00409660: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00409661: call 0x85824c */ r_esp -= 4; W32(r_esp, 0x409666u); f_0085824c();
    /* 00409666: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00409667: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409669: je 0x409677 */ if (fZ) goto L_00409677;
L_0040966b:; BB(0x0040966b);
    /* 0040966b: fld dword ptr [0x8f9980] */ FPUSH(R_F32((u32)(0x8f9980u)));
    /* 00409671: fadd dword ptr [esp + 0x58] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x58u));
    /* 00409675: jmp 0x40967b */ goto L_0040967b;
L_00409677:; BB(0x00409677);
    /* 00409677: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
L_0040967b:; BB(0x0040967b);
    /* 0040967b: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0040967f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00409680: call 0x858339 */ r_esp -= 4; W32(r_esp, 0x409685u); f_00858339();
    /* 00409685: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00409686: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409688: jne 0x409710 */ if (!fZ) goto L_00409710;
L_0040968e:; BB(0x0040968e);
    /* 0040968e: add ebp, -0x26 */ {  u32 a = r_ebp; u32 b = 0xffffffdau; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00409691: cmp ebp, 0x58 */ {  u32 a = r_ebp; u32 b = 0x58u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00409694: ja 0x409709 */ if ((!fC&&!fZ)) goto L_00409709;
L_0040969a:; BB(0x0040969a);
    /* 0040969a: mov eax, dword ptr [ebp*4 + 0x8f94c0] */ r_eax = R32((u32)(r_ebp*4+0x8f94c0u));
    /* 004096a1: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_00409702:; BB(0x00409702);
    /* 00409702: mov ebp, 0x1f */ r_ebp = 0x1fu;
    /* 00409707: jmp 0x409750 */ goto L_00409750;
L_00409709:; BB(0x00409709);
    /* 00409709: mov ebp, 0x52 */ r_ebp = 0x52u;
    /* 0040970e: jmp 0x409750 */ goto L_00409750;
L_00409710:; BB(0x00409710);
    /* 00409710: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00409711: call 0x858212 */ r_esp -= 4; W32(r_esp, 0x409716u); f_00858212();
    /* 00409716: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00409717: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409719: je 0x409726 */ if (fZ) goto L_00409726;
L_0040971b:; BB(0x0040971b);
    /* 0040971b: add ebp, -0x41 */ {  u32 a = r_ebp; u32 b = 0xffffffbfu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0040971e: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 00409724: jmp 0x409750 */ goto L_00409750;
L_00409726:; BB(0x00409726);
    /* 00409726: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00409727: call 0x85824c */ r_esp -= 4; W32(r_esp, 0x40972cu); f_0085824c();
    /* 0040972c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0040972d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040972f: je 0x40973c */ if (fZ) goto L_0040973c;
L_00409731:; BB(0x00409731);
    /* 00409731: add ebp, -0x3d */ {  u32 a = r_ebp; u32 b = 0xffffffc3u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00409734: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 0040973a: jmp 0x409750 */ goto L_00409750;
L_0040973c:; BB(0x0040973c);
    /* 0040973c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040973d: call 0x858286 */ r_esp -= 4; W32(r_esp, 0x409742u); f_00858286();
    /* 00409742: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00409743: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409745: je 0x409750 */ if (fZ) goto L_00409750;
L_00409747:; BB(0x00409747);
    /* 00409747: add ebp, 0xe */ {  u32 a = r_ebp; u32 b = 0xeu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0040974a: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
L_00409750:; BB(0x00409750);
    /* 00409750: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00409753: cmp ebp, 0x52 */ {  u32 a = r_ebp; u32 b = 0x52u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409756: je 0x4098ac */ if (fZ) goto L_004098ac;
L_0040975c:; BB(0x0040975c);
    /* 0040975c: fld dword ptr [0x8f9988] */ FPUSH(R_F32((u32)(0x8f9988u)));
    /* 00409762: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00409766: fld dword ptr [0x8f99d4] */ FPUSH(R_F32((u32)(0x8f99d4u)));
    /* 0040976c: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 0040976e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00409770: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00409774: mov eax, 0x38e38e39 */ r_eax = 0x38e38e39u;
    /* 00409779: imul ebp */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebp; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040977b: mov eax, ebp */ r_eax = r_ebp;
    /* 0040977d: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00409780: mov ecx, edx */ r_ecx = r_edx;
    /* 00409782: sar ecx, 3 */ { u32 c = (3u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00409785: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00409787: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 0040978a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0040978c: lea edi, [eax + eax*8] */ r_edi = (u32)(r_eax+r_eax*8);
    /* 0040978f: imul eax, ecx, -0x24 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xffffffdcu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00409792: neg edi */ { u32 x = r_edi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00409794: add edi, ebp */ {  u32 a = r_edi; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00409796: add ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00409798: mov eax, 0x2aaaaaab */ r_eax = 0x2aaaaaabu;
    /* 0040979d: imul ebp */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebp; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040979f: mov eax, ebp */ r_eax = r_ebp;
    /* 004097a1: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004097a4: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004097a6: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 004097a9: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004097ab: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004097ad: sub ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 004097af: mov dword ptr [esp + 0x38], ebp */ W32((u32)(r_esp+0x38u), r_ebp);
    /* 004097b3: fild dword ptr [esp + 0x38] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x38u)));
    /* 004097b7: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 004097b9: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 004097bd: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 004097c2: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004097c7: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 004097cb: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 004097cf: fistp qword ptr [esp + 0x30] */ W64((u32)(r_esp+0x30u), (u64)fx_int64(ST(0))); FPOP();
    /* 004097d3: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 004097d7: mov eax, 0x2aaaaaab */ r_eax = 0x2aaaaaabu;
    /* 004097dc: imul edi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_edi; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004097de: mov eax, edi */ r_eax = r_edi;
    /* 004097e0: movzx ebp, byte ptr [esp + 0x30] */ r_ebp = (u32)R8((u32)(r_esp+0x30u));
    /* 004097e5: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004097e8: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004097ea: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
    /* 004097ee: fild dword ptr [esp + 0x38] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x38u)));
    /* 004097f2: mov dword ptr [esp + 0x38], ebp */ W32((u32)(r_esp+0x38u), r_ebp);
    /* 004097f6: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 004097f8: fild dword ptr [esp + 0x38] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x38u)));
    /* 004097fc: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004097fe: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 00409802: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 00409807: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0040980c: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 00409810: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 00409814: fistp qword ptr [esp + 0x30] */ W64((u32)(r_esp+0x30u), (u64)fx_int64(ST(0))); FPOP();
    /* 00409818: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 0040981c: lea eax, [ecx + ecx*8] */ r_eax = (u32)(r_ecx+r_ecx*8);
    /* 0040981f: fld dword ptr [0x8f997c] */ FPUSH(R_F32((u32)(0x8f997cu)));
    /* 00409825: fld dword ptr [0x8f997c] */ FPUSH(R_F32((u32)(0x8f997cu)));
    /* 0040982b: fdivr st(3) */ ST(0) = ST(3) / ST(0);
    /* 0040982d: movzx edx, byte ptr [esp + 0x30] */ r_edx = (u32)R8((u32)(r_esp+0x30u));
    /* 00409832: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00409836: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409838: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
    /* 0040983c: fild dword ptr [esp + 0x38] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x38u)));
    /* 00409840: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409842: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409844: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409846: fld dword ptr [eax + edi*4 + 0x8f97c0] */ FPUSH(R_F32((u32)(r_eax+r_edi*4+0x8f97c0u)));
    /* 0040984d: fadd st(5), st(0) */ ST(5) = ST(5) + ST(0);
    /* 0040984f: fadd st(4), st(0) */ ST(4) = ST(4) + ST(0);
    /* 00409851: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00409853: fdiv st(4), st(0) */ ST(4) = ST(4) / ST(0);
    /* 00409855: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 00409857: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0040985b: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0040985d: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 00409861: fld dword ptr [0x8f997c] */ FPUSH(R_F32((u32)(0x8f997cu)));
    /* 00409867: fdivr st(3) */ ST(0) = ST(3) / ST(0);
    /* 00409869: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 0040986d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0040986f: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00409871: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00409873: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 00409875: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 00409879: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0040987b: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 0040987f: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00409881: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
L_00409885:; BB(0x00409885);
    /* 00409885: movzx ebp, cl */ r_ebp = (u32)(u8)r_ecx;
    /* 00409888: cmp ebp, ebx */ {  u32 a = r_ebp; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040988a: je 0x409899 */ if (fZ) goto L_00409899;
L_0040988c:; BB(0x0040988c);
    /* 0040988c: mov edx, dword ptr [esp + 0x50] */ r_edx = R32((u32)(r_esp+0x50u));
    /* 00409890: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00409892: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x409897u); f_0082bb60();
    /* 00409897: mov ebx, ebp */ r_ebx = r_ebp;
L_00409899:; BB(0x00409899);
    /* 00409899: push 0x3f7fff58 */ { u32 v = 0x3f7fff58u; r_esp -= 4; W32(r_esp, v); }
    /* 0040989e: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 004098a2: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x4098a7u); f_0082b440();
    /* 004098a7: jmp 0x409640 */ goto L_00409640;
L_004098ac:; BB(0x004098ac);
    /* 004098ac: fld dword ptr [0x8f9978] */ FPUSH(R_F32((u32)(0x8f9978u)));
    /* 004098b2: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 004098b6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004098b8: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 004098ba: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004098bc: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004098c0: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 004098c4: fadd dword ptr [0x8f99d4] */ ST(0) = ST(0) + R_F32((u32)(0x8f99d4u));
    /* 004098ca: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 004098ce: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004098d0: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 004098d4: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 004098dc: mov eax, 0x38e38e39 */ r_eax = 0x38e38e39u;
    /* 004098e1: imul ebp */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebp; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004098e3: sar ebp, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebp = r;  } }
    /* 004098e6: mov ecx, edx */ r_ecx = r_edx;
    /* 004098e8: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 004098f0: sar ecx, 3 */ { u32 c = (3u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 004098f3: sub ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004098f5: mov dword ptr [esp + 0x18], 0 */ W32((u32)(r_esp+0x18u), 0x0u);
    /* 004098fd: mov dword ptr [esp + 0x1c], 0 */ W32((u32)(r_esp+0x1cu), 0x0u);
    /* 00409905: jmp 0x409885 */ goto L_00409885;
L_0040990a:; BB(0x0040990a);
    /* 0040990a: mov ebp, dword ptr [esp + 0x44] */ r_ebp = R32((u32)(r_esp+0x44u));
    /* 0040990e: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x409913u); f_004ac444();
    /* 00409913: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 00409917: mov edx, dword ptr [eax + 0x1928] */ r_edx = R32((u32)(r_eax+0x1928u));
    /* 0040991d: jmp 0x409606 */ goto L_00409606;
L_00409922:; BB(0x00409922);
    /* 00409922: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x409927u); f_0082dab0();
    /* 00409927: add esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0040992a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0040992b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040992c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0040992d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0040992e: ret  */ FN_RET(0x00409702); r_esp += 4; return;
L_0040992f:; BB(0x0040992f);
    /* 0040992f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00409931: jmp 0x409520 */ goto L_00409520;
}

void f_00409709(void)
{
    FN_ENTER(0x00409709);
    goto L_00409709;
L_00409432:; BB(0x00409432);
    /* 00409432: cmp ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00409434: jae 0x409922 */ if (!fC) goto L_00409922;
L_0040943a:; BB(0x0040943a);
    /* 0040943a: mov ecx, dword ptr [esp + 0x40] */ r_ecx = R32((u32)(r_esp+0x40u));
    /* 0040943e: fld dword ptr [0x8f99a4] */ FPUSH(R_F32((u32)(0x8f99a4u)));
    /* 00409444: fld dword ptr [ecx + ebp*8 + 0x2c] */ FPUSH(R_F32((u32)(r_ecx+r_ebp*8+0x2cu)));
    /* 00409448: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0040944a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0040944c: fstp dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 00409450: mov edi, 0xffffffff */ r_edi = 0xffffffffu;
    /* 00409455: lea ebx, [ebp + ebp] */ r_ebx = (u32)(r_ebp+r_ebp);
    /* 00409459: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0040945a: jbe 0x40946b */ if ((fC||fZ)) goto L_0040946b;
L_0040945c:; BB(0x0040945c);
    /* 0040945c: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 00409460: fcomp dword ptr [0x8f99a0] */ fx_compare(ST(0), R_F32((u32)(0x8f99a0u))); FPOP();
    /* 00409466: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00409468: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00409469: jb 0x409470 */ if (fC) goto L_00409470;
L_0040946b:; BB(0x0040946b);
    /* 0040946b: mov edi, 0xffffff */ r_edi = 0xffffffu;
L_00409470:; BB(0x00409470);
    /* 00409470: fcom dword ptr [esp + 0x58] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x58u))); 
    /* 00409474: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00409476: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00409477: jae 0x4094c5 */ if (!fC) goto L_004094c5;
L_00409479:; BB(0x00409479);
    /* 00409479: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 0040947d: fcomp dword ptr [0x8f999c] */ fx_compare(ST(0), R_F32((u32)(0x8f999cu))); FPOP();
    /* 00409483: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00409485: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00409486: jae 0x4094c5 */ if (!fC) goto L_004094c5;
L_00409488:; BB(0x00409488);
    /* 00409488: fld dword ptr [0x8f9994] */ FPUSH(R_F32((u32)(0x8f9994u)));
    /* 0040948e: fadd dword ptr [esp + 0x58] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x58u));
    /* 00409492: fmul dword ptr [0x8f9998] */ ST(0) = ST(0) * R_F32((u32)(0x8f9998u));
    /* 00409498: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 0040949a: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 0040949e: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 004094a3: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004094a8: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 004094ac: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 004094b0: fistp qword ptr [esp + 0x30] */ W64((u32)(r_esp+0x30u), (u64)fx_int64(ST(0))); FPOP();
    /* 004094b4: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 004094b8: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 004094bc: shl edi, 0x18 */ { u32 c = (24u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 004094bf: or edi, 0xffffff */ {  u32 a = r_edi; u32 b = 0xffffffu; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
L_004094c5:; BB(0x004094c5);
    /* 004094c5: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 004094c9: fcomp dword ptr [0x8f9990] */ fx_compare(ST(0), R_F32((u32)(0x8f9990u))); FPOP();
    /* 004094cf: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004094d1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004094d2: jbe 0x409520 */ if ((fC||fZ)) goto L_00409520;
L_004094d4:; BB(0x004094d4);
    /* 004094d4: fld dword ptr [0x8f99a0] */ FPUSH(R_F32((u32)(0x8f99a0u)));
    /* 004094da: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 004094de: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 004094e0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004094e2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004094e3: jae 0x40992f */ if (!fC) goto L_0040992f;
L_004094e9:; BB(0x004094e9);
    /* 004094e9: fsub dword ptr [esp + 0x58] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x58u));
    /* 004094ed: fmul dword ptr [0x8f9998] */ ST(0) = ST(0) * R_F32((u32)(0x8f9998u));
    /* 004094f3: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 004094f5: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 004094f9: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 004094fe: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00409503: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 00409507: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 0040950b: fistp qword ptr [esp + 0x30] */ W64((u32)(r_esp+0x30u), (u64)fx_int64(ST(0))); FPOP();
    /* 0040950f: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 00409513: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 00409517: shl edi, 0x18 */ { u32 c = (24u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 0040951a: or edi, 0xffffff */ {  u32 a = r_edi; u32 b = 0xffffffu; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
L_00409520:; BB(0x00409520);
    /* 00409520: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00409522: mov eax, dword ptr [0xa3ad40] */ r_eax = R32((u32)(0xa3ad40u));
    /* 00409527: mov esi, dword ptr [eax + ebp*4] */ r_esi = R32((u32)(r_eax+r_ebp*4));
    /* 0040952a: movsx eax, byte ptr [esi] */ r_eax = (u32)(i32)(i8)R8((u32)(r_esi));
    /* 0040952d: cmp eax, 0x23 */ {  u32 a = r_eax; u32 b = 0x23u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409530: je 0x4095fe */ if (fZ) goto L_004095fe;
L_00409536:; BB(0x00409536);
    /* 00409536: cmp eax, 0x21 */ {  u32 a = r_eax; u32 b = 0x21u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409539: jne 0x409581 */ if (!fZ) goto L_00409581;
L_0040953b:; BB(0x0040953b);
    /* 0040953b: mov ecx, dword ptr [0xa3ad48] */ r_ecx = R32((u32)(0xa3ad48u));
    /* 00409541: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x409546u); f_00829cc8();
    /* 00409546: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0040954b: call 0x82bb30 */ r_esp -= 4; W32(r_esp, 0x409550u); f_0082bb30();
    /* 00409550: mov ecx, 3 */ r_ecx = 0x3u;
    /* 00409555: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0040955a: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x40955fu); f_0082bb60();
    /* 0040955f: push 0x3f7fff58 */ { u32 v = 0x3f7fff58u; r_esp -= 4; W32(r_esp, v); }
    /* 00409564: mov ecx, dword ptr [esp + 0x50] */ r_ecx = R32((u32)(r_esp+0x50u));
    /* 00409568: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x40956du); f_0082b440();
    /* 0040956d: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x409572u); f_004ac444();
    /* 00409572: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 00409576: mov edx, dword ptr [eax + 0x1928] */ r_edx = R32((u32)(r_eax+0x1928u));
    /* 0040957c: jmp 0x409606 */ goto L_00409606;
L_00409581:; BB(0x00409581);
    /* 00409581: cmp eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409584: jne 0x4095c9 */ if (!fZ) goto L_004095c9;
L_00409586:; BB(0x00409586);
    /* 00409586: mov ecx, dword ptr [0xa3ad48] */ r_ecx = R32((u32)(0xa3ad48u));
    /* 0040958c: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x409591u); f_00829cc8();
    /* 00409591: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00409596: call 0x82bb30 */ r_esp -= 4; W32(r_esp, 0x40959bu); f_0082bb30();
    /* 0040959b: mov ecx, 4 */ r_ecx = 0x4u;
    /* 004095a0: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 004095a5: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x4095aau); f_0082bb60();
    /* 004095aa: push 0x3f7fff58 */ { u32 v = 0x3f7fff58u; r_esp -= 4; W32(r_esp, v); }
    /* 004095af: mov ecx, dword ptr [esp + 0x4c] */ r_ecx = R32((u32)(r_esp+0x4cu));
    /* 004095b3: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x4095b8u); f_0082b440();
    /* 004095b8: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x4095bdu); f_004ac444();
    /* 004095bd: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 004095c1: mov edx, dword ptr [eax + 0x1928] */ r_edx = R32((u32)(r_eax+0x1928u));
    /* 004095c7: jmp 0x409606 */ goto L_00409606;
L_004095c9:; BB(0x004095c9);
    /* 004095c9: cmp edi, 0xffffff */ {  u32 a = r_edi; u32 b = 0xffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004095cf: je 0x409606 */ if (fZ) goto L_00409606;
L_004095d1:; BB(0x004095d1);
    /* 004095d1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004095d2: call 0x7087dc */ r_esp -= 4; W32(r_esp, 0x4095d7u); f_007087dc();
    /* 004095d7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004095d8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004095d9: push 0x3f7fff58 */ { u32 v = 0x3f7fff58u; r_esp -= 4; W32(r_esp, v); }
    /* 004095de: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 004095e2: push dword ptr [eax + ebx*4 + 0x2c] */ { u32 v = R32((u32)(r_eax+r_ebx*4+0x2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004095e6: push dword ptr [eax + ebp*8 + 0x28] */ { u32 v = R32((u32)(r_eax+r_ebp*8+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 004095ea: call 0x789248 */ r_esp -= 4; W32(r_esp, 0x4095efu); f_00789248();
    /* 004095ef: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004095f2: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 004095f6: mov edx, dword ptr [eax + 0x1928] */ r_edx = R32((u32)(r_eax+0x1928u));
    /* 004095fc: jmp 0x409606 */ goto L_00409606;
L_004095fe:; BB(0x004095fe);
    /* 004095fe: cmp edi, 0xffffff */ {  u32 a = r_edi; u32 b = 0xffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409604: jne 0x40960e */ if (!fZ) goto L_0040960e;
L_00409606:; BB(0x00409606);
    /* 00409606: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00409609: jmp 0x409432 */ goto L_00409432;
L_0040960e:; BB(0x0040960e);
    /* 0040960e: mov eax, ecx */ r_eax = r_ecx;
    /* 00409610: fld dword ptr [eax + ebp*8 + 0x28] */ FPUSH(R_F32((u32)(r_eax+r_ebp*8+0x28u)));
    /* 00409614: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 00409618: mov ebx, 0xfe */ r_ebx = 0xfeu;
    /* 0040961d: call 0x7a9044 */ r_esp -= 4; W32(r_esp, 0x409622u); f_007a9044();
    /* 00409622: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00409627: call 0x82bb30 */ r_esp -= 4; W32(r_esp, 0x40962cu); f_0082bb30();
    /* 0040962c: push dword ptr [0xa3ad48] */ { u32 v = R32((u32)(0xa3ad48u)); r_esp -= 4; W32(r_esp, v); }
    /* 00409632: call 0x81a9b8 */ r_esp -= 4; W32(r_esp, 0x409637u); f_0081a9b8();
    /* 00409637: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00409638: mov dword ptr [esp + 0x50], edi */ W32((u32)(r_esp+0x50u), r_edi);
    /* 0040963c: mov dword ptr [esp + 0x44], ebp */ W32((u32)(r_esp+0x44u), r_ebp);
L_00409640:; BB(0x00409640);
    /* 00409640: movsx ebp, byte ptr [esi] */ r_ebp = (u32)(i32)(i8)R8((u32)(r_esi));
    /* 00409643: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409645: je 0x40990a */ if (fZ) goto L_0040990a;
L_0040964b:; BB(0x0040964b);
    /* 0040964b: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 00409651: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00409654: cmp ebp, 0x23 */ {  u32 a = r_ebp; u32 b = 0x23u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409657: je 0x409640 */ if (fZ) goto L_00409640;
L_00409659:; BB(0x00409659);
    /* 00409659: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 0040965d: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00409660: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00409661: call 0x85824c */ r_esp -= 4; W32(r_esp, 0x409666u); f_0085824c();
    /* 00409666: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00409667: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409669: je 0x409677 */ if (fZ) goto L_00409677;
L_0040966b:; BB(0x0040966b);
    /* 0040966b: fld dword ptr [0x8f9980] */ FPUSH(R_F32((u32)(0x8f9980u)));
    /* 00409671: fadd dword ptr [esp + 0x58] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x58u));
    /* 00409675: jmp 0x40967b */ goto L_0040967b;
L_00409677:; BB(0x00409677);
    /* 00409677: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
L_0040967b:; BB(0x0040967b);
    /* 0040967b: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0040967f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00409680: call 0x858339 */ r_esp -= 4; W32(r_esp, 0x409685u); f_00858339();
    /* 00409685: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00409686: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409688: jne 0x409710 */ if (!fZ) goto L_00409710;
L_0040968e:; BB(0x0040968e);
    /* 0040968e: add ebp, -0x26 */ {  u32 a = r_ebp; u32 b = 0xffffffdau; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00409691: cmp ebp, 0x58 */ {  u32 a = r_ebp; u32 b = 0x58u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00409694: ja 0x409709 */ if ((!fC&&!fZ)) goto L_00409709;
L_0040969a:; BB(0x0040969a);
    /* 0040969a: mov eax, dword ptr [ebp*4 + 0x8f94c0] */ r_eax = R32((u32)(r_ebp*4+0x8f94c0u));
    /* 004096a1: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_00409709:; BB(0x00409709);
    /* 00409709: mov ebp, 0x52 */ r_ebp = 0x52u;
    /* 0040970e: jmp 0x409750 */ goto L_00409750;
L_00409710:; BB(0x00409710);
    /* 00409710: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00409711: call 0x858212 */ r_esp -= 4; W32(r_esp, 0x409716u); f_00858212();
    /* 00409716: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00409717: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409719: je 0x409726 */ if (fZ) goto L_00409726;
L_0040971b:; BB(0x0040971b);
    /* 0040971b: add ebp, -0x41 */ {  u32 a = r_ebp; u32 b = 0xffffffbfu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0040971e: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 00409724: jmp 0x409750 */ goto L_00409750;
L_00409726:; BB(0x00409726);
    /* 00409726: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00409727: call 0x85824c */ r_esp -= 4; W32(r_esp, 0x40972cu); f_0085824c();
    /* 0040972c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0040972d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040972f: je 0x40973c */ if (fZ) goto L_0040973c;
L_00409731:; BB(0x00409731);
    /* 00409731: add ebp, -0x3d */ {  u32 a = r_ebp; u32 b = 0xffffffc3u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00409734: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 0040973a: jmp 0x409750 */ goto L_00409750;
L_0040973c:; BB(0x0040973c);
    /* 0040973c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040973d: call 0x858286 */ r_esp -= 4; W32(r_esp, 0x409742u); f_00858286();
    /* 00409742: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00409743: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409745: je 0x409750 */ if (fZ) goto L_00409750;
L_00409747:; BB(0x00409747);
    /* 00409747: add ebp, 0xe */ {  u32 a = r_ebp; u32 b = 0xeu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0040974a: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
L_00409750:; BB(0x00409750);
    /* 00409750: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00409753: cmp ebp, 0x52 */ {  u32 a = r_ebp; u32 b = 0x52u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409756: je 0x4098ac */ if (fZ) goto L_004098ac;
L_0040975c:; BB(0x0040975c);
    /* 0040975c: fld dword ptr [0x8f9988] */ FPUSH(R_F32((u32)(0x8f9988u)));
    /* 00409762: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00409766: fld dword ptr [0x8f99d4] */ FPUSH(R_F32((u32)(0x8f99d4u)));
    /* 0040976c: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 0040976e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00409770: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00409774: mov eax, 0x38e38e39 */ r_eax = 0x38e38e39u;
    /* 00409779: imul ebp */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebp; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040977b: mov eax, ebp */ r_eax = r_ebp;
    /* 0040977d: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00409780: mov ecx, edx */ r_ecx = r_edx;
    /* 00409782: sar ecx, 3 */ { u32 c = (3u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00409785: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00409787: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 0040978a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0040978c: lea edi, [eax + eax*8] */ r_edi = (u32)(r_eax+r_eax*8);
    /* 0040978f: imul eax, ecx, -0x24 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xffffffdcu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00409792: neg edi */ { u32 x = r_edi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00409794: add edi, ebp */ {  u32 a = r_edi; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00409796: add ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00409798: mov eax, 0x2aaaaaab */ r_eax = 0x2aaaaaabu;
    /* 0040979d: imul ebp */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebp; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040979f: mov eax, ebp */ r_eax = r_ebp;
    /* 004097a1: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004097a4: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004097a6: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 004097a9: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004097ab: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004097ad: sub ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 004097af: mov dword ptr [esp + 0x38], ebp */ W32((u32)(r_esp+0x38u), r_ebp);
    /* 004097b3: fild dword ptr [esp + 0x38] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x38u)));
    /* 004097b7: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 004097b9: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 004097bd: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 004097c2: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004097c7: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 004097cb: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 004097cf: fistp qword ptr [esp + 0x30] */ W64((u32)(r_esp+0x30u), (u64)fx_int64(ST(0))); FPOP();
    /* 004097d3: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 004097d7: mov eax, 0x2aaaaaab */ r_eax = 0x2aaaaaabu;
    /* 004097dc: imul edi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_edi; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004097de: mov eax, edi */ r_eax = r_edi;
    /* 004097e0: movzx ebp, byte ptr [esp + 0x30] */ r_ebp = (u32)R8((u32)(r_esp+0x30u));
    /* 004097e5: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004097e8: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004097ea: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
    /* 004097ee: fild dword ptr [esp + 0x38] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x38u)));
    /* 004097f2: mov dword ptr [esp + 0x38], ebp */ W32((u32)(r_esp+0x38u), r_ebp);
    /* 004097f6: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 004097f8: fild dword ptr [esp + 0x38] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x38u)));
    /* 004097fc: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004097fe: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 00409802: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 00409807: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0040980c: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 00409810: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 00409814: fistp qword ptr [esp + 0x30] */ W64((u32)(r_esp+0x30u), (u64)fx_int64(ST(0))); FPOP();
    /* 00409818: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 0040981c: lea eax, [ecx + ecx*8] */ r_eax = (u32)(r_ecx+r_ecx*8);
    /* 0040981f: fld dword ptr [0x8f997c] */ FPUSH(R_F32((u32)(0x8f997cu)));
    /* 00409825: fld dword ptr [0x8f997c] */ FPUSH(R_F32((u32)(0x8f997cu)));
    /* 0040982b: fdivr st(3) */ ST(0) = ST(3) / ST(0);
    /* 0040982d: movzx edx, byte ptr [esp + 0x30] */ r_edx = (u32)R8((u32)(r_esp+0x30u));
    /* 00409832: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00409836: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409838: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
    /* 0040983c: fild dword ptr [esp + 0x38] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x38u)));
    /* 00409840: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409842: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409844: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409846: fld dword ptr [eax + edi*4 + 0x8f97c0] */ FPUSH(R_F32((u32)(r_eax+r_edi*4+0x8f97c0u)));
    /* 0040984d: fadd st(5), st(0) */ ST(5) = ST(5) + ST(0);
    /* 0040984f: fadd st(4), st(0) */ ST(4) = ST(4) + ST(0);
    /* 00409851: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00409853: fdiv st(4), st(0) */ ST(4) = ST(4) / ST(0);
    /* 00409855: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 00409857: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0040985b: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0040985d: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 00409861: fld dword ptr [0x8f997c] */ FPUSH(R_F32((u32)(0x8f997cu)));
    /* 00409867: fdivr st(3) */ ST(0) = ST(3) / ST(0);
    /* 00409869: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 0040986d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0040986f: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00409871: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00409873: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 00409875: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 00409879: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0040987b: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 0040987f: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00409881: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
L_00409885:; BB(0x00409885);
    /* 00409885: movzx ebp, cl */ r_ebp = (u32)(u8)r_ecx;
    /* 00409888: cmp ebp, ebx */ {  u32 a = r_ebp; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040988a: je 0x409899 */ if (fZ) goto L_00409899;
L_0040988c:; BB(0x0040988c);
    /* 0040988c: mov edx, dword ptr [esp + 0x50] */ r_edx = R32((u32)(r_esp+0x50u));
    /* 00409890: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00409892: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x409897u); f_0082bb60();
    /* 00409897: mov ebx, ebp */ r_ebx = r_ebp;
L_00409899:; BB(0x00409899);
    /* 00409899: push 0x3f7fff58 */ { u32 v = 0x3f7fff58u; r_esp -= 4; W32(r_esp, v); }
    /* 0040989e: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 004098a2: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x4098a7u); f_0082b440();
    /* 004098a7: jmp 0x409640 */ goto L_00409640;
L_004098ac:; BB(0x004098ac);
    /* 004098ac: fld dword ptr [0x8f9978] */ FPUSH(R_F32((u32)(0x8f9978u)));
    /* 004098b2: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 004098b6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004098b8: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 004098ba: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004098bc: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004098c0: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 004098c4: fadd dword ptr [0x8f99d4] */ ST(0) = ST(0) + R_F32((u32)(0x8f99d4u));
    /* 004098ca: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 004098ce: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004098d0: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 004098d4: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 004098dc: mov eax, 0x38e38e39 */ r_eax = 0x38e38e39u;
    /* 004098e1: imul ebp */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebp; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004098e3: sar ebp, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebp = r;  } }
    /* 004098e6: mov ecx, edx */ r_ecx = r_edx;
    /* 004098e8: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 004098f0: sar ecx, 3 */ { u32 c = (3u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 004098f3: sub ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004098f5: mov dword ptr [esp + 0x18], 0 */ W32((u32)(r_esp+0x18u), 0x0u);
    /* 004098fd: mov dword ptr [esp + 0x1c], 0 */ W32((u32)(r_esp+0x1cu), 0x0u);
    /* 00409905: jmp 0x409885 */ goto L_00409885;
L_0040990a:; BB(0x0040990a);
    /* 0040990a: mov ebp, dword ptr [esp + 0x44] */ r_ebp = R32((u32)(r_esp+0x44u));
    /* 0040990e: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x409913u); f_004ac444();
    /* 00409913: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 00409917: mov edx, dword ptr [eax + 0x1928] */ r_edx = R32((u32)(r_eax+0x1928u));
    /* 0040991d: jmp 0x409606 */ goto L_00409606;
L_00409922:; BB(0x00409922);
    /* 00409922: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x409927u); f_0082dab0();
    /* 00409927: add esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0040992a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0040992b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040992c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0040992d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0040992e: ret  */ FN_RET(0x00409709); r_esp += 4; return;
L_0040992f:; BB(0x0040992f);
    /* 0040992f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00409931: jmp 0x409520 */ goto L_00409520;
}

void f_00409938(void) /* sub_409938 */
{
    FN_ENTER(0x00409938);
    /* 00409938: mov ecx, dword ptr [0xa3ad48] */ r_ecx = R32((u32)(0xa3ad48u));
    /* 0040993e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409940: je 0x409951 */ if (fZ) goto L_00409951;
L_00409942:; BB(0x00409942);
    /* 00409942: call 0x829de0 */ r_esp -= 4; W32(r_esp, 0x409947u); f_00829de0();
    /* 00409947: mov dword ptr [0xa3ad48], 0 */ W32((u32)(0xa3ad48u), 0x0u);
L_00409951:; BB(0x00409951);
    /* 00409951: mov eax, dword ptr [0xa3ad40] */ r_eax = R32((u32)(0xa3ad40u));
    /* 00409956: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00409958: je 0x40996b */ if (fZ) goto L_0040996b;
L_0040995a:; BB(0x0040995a);
    /* 0040995a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040995b: call 0x5b9bac */ r_esp -= 4; W32(r_esp, 0x409960u); f_005b9bac();
    /* 00409960: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00409961: mov dword ptr [0xa3ad40], 0 */ W32((u32)(0xa3ad40u), 0x0u);
L_0040996b:; BB(0x0040996b);
    /* 0040996b: ret  */ FN_RET(0x00409938); r_esp += 4; return;
}

void f_0040996c(void) /* sub_40996C */
{
    FN_ENTER(0x0040996c);
    /* 0040996c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0040996d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0040996e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040996f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00409970: sub esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00409973: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 00409977: mov esi, dword ptr [esp + 0x70] */ r_esi = R32((u32)(r_esp+0x70u));
    /* 0040997b: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 0040997f: mov ebx, 0xfe */ r_ebx = 0xfeu;
    /* 00409984: call 0x7a9044 */ r_esp -= 4; W32(r_esp, 0x409989u); f_007a9044();
    /* 00409989: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0040998e: call 0x82bb30 */ r_esp -= 4; W32(r_esp, 0x409993u); f_0082bb30();
    /* 00409993: push dword ptr [0xa3ad48] */ { u32 v = R32((u32)(0xa3ad48u)); r_esp -= 4; W32(r_esp, v); }
    /* 00409999: call 0x81a9b8 */ r_esp -= 4; W32(r_esp, 0x40999eu); f_0081a9b8();
    /* 0040999e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0040999f:; BB(0x0040999f);
    /* 0040999f: movsx ebp, byte ptr [esi] */ r_ebp = (u32)(i32)(i8)R8((u32)(r_esi));
    /* 004099a2: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004099a4: je 0x409c68 */ if (fZ) goto L_00409c68;
L_004099aa:; BB(0x004099aa);
    /* 004099aa: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 004099b0: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004099b3: cmp ebp, 0x23 */ {  u32 a = r_ebp; u32 b = 0x23u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004099b6: je 0x40999f */ if (fZ) goto L_0040999f;
L_004099b8:; BB(0x004099b8);
    /* 004099b8: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 004099bc: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004099bf: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004099c0: call 0x85824c */ r_esp -= 4; W32(r_esp, 0x4099c5u); f_0085824c();
    /* 004099c5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004099c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004099c8: je 0x4099d6 */ if (fZ) goto L_004099d6;
L_004099ca:; BB(0x004099ca);
    /* 004099ca: fld dword ptr [0x8f9980] */ FPUSH(R_F32((u32)(0x8f9980u)));
    /* 004099d0: fadd dword ptr [esp + 0x64] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x64u));
    /* 004099d4: jmp 0x4099da */ goto L_004099da;
L_004099d6:; BB(0x004099d6);
    /* 004099d6: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
L_004099da:; BB(0x004099da);
    /* 004099da: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 004099de: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004099df: call 0x858339 */ r_esp -= 4; W32(r_esp, 0x4099e4u); f_00858339();
    /* 004099e4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004099e5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004099e7: jne 0x409a6f */ if (!fZ) goto L_00409a6f;
L_004099ed:; BB(0x004099ed);
    /* 004099ed: add ebp, -0x26 */ {  u32 a = r_ebp; u32 b = 0xffffffdau; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004099f0: cmp ebp, 0x58 */ {  u32 a = r_ebp; u32 b = 0x58u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004099f3: ja 0x409a68 */ if ((!fC&&!fZ)) goto L_00409a68;
L_004099f9:; BB(0x004099f9);
    /* 004099f9: mov eax, dword ptr [ebp*4 + 0x8f9640] */ r_eax = R32((u32)(r_ebp*4+0x8f9640u));
    /* 00409a00: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_00409a68:; BB(0x00409a68);
    /* 00409a68: mov ebp, 0x52 */ r_ebp = 0x52u;
    /* 00409a6d: jmp 0x409aaf */ goto L_00409aaf;
L_00409a6f:; BB(0x00409a6f);
    /* 00409a6f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00409a70: call 0x858212 */ r_esp -= 4; W32(r_esp, 0x409a75u); f_00858212();
    /* 00409a75: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00409a76: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409a78: je 0x409a85 */ if (fZ) goto L_00409a85;
L_00409a7a:; BB(0x00409a7a);
    /* 00409a7a: add ebp, -0x41 */ {  u32 a = r_ebp; u32 b = 0xffffffbfu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00409a7d: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 00409a83: jmp 0x409aaf */ goto L_00409aaf;
L_00409a85:; BB(0x00409a85);
    /* 00409a85: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00409a86: call 0x85824c */ r_esp -= 4; W32(r_esp, 0x409a8bu); f_0085824c();
    /* 00409a8b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00409a8c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409a8e: je 0x409a9b */ if (fZ) goto L_00409a9b;
L_00409a90:; BB(0x00409a90);
    /* 00409a90: add ebp, -0x3d */ {  u32 a = r_ebp; u32 b = 0xffffffc3u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00409a93: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 00409a99: jmp 0x409aaf */ goto L_00409aaf;
L_00409a9b:; BB(0x00409a9b);
    /* 00409a9b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00409a9c: call 0x858286 */ r_esp -= 4; W32(r_esp, 0x409aa1u); f_00858286();
    /* 00409aa1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00409aa2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409aa4: je 0x409aaf */ if (fZ) goto L_00409aaf;
L_00409aa6:; BB(0x00409aa6);
    /* 00409aa6: add ebp, 0xe */ {  u32 a = r_ebp; u32 b = 0xeu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00409aa9: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
L_00409aaf:; BB(0x00409aaf);
    /* 00409aaf: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00409ab2: cmp ebp, 0x52 */ {  u32 a = r_ebp; u32 b = 0x52u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409ab5: je 0x409c0a */ if (fZ) goto L_00409c0a;
L_00409abb:; BB(0x00409abb);
    /* 00409abb: fld dword ptr [0x8f9974] */ FPUSH(R_F32((u32)(0x8f9974u)));
    /* 00409ac1: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00409ac5: fld dword ptr [0x8f99d4] */ FPUSH(R_F32((u32)(0x8f99d4u)));
    /* 00409acb: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 00409acd: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00409acf: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00409ad3: mov eax, 0x38e38e39 */ r_eax = 0x38e38e39u;
    /* 00409ad8: imul ebp */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebp; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00409ada: mov eax, ebp */ r_eax = r_ebp;
    /* 00409adc: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00409adf: mov ecx, edx */ r_ecx = r_edx;
    /* 00409ae1: sar ecx, 3 */ { u32 c = (3u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00409ae4: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00409ae6: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 00409ae9: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409aeb: lea edi, [eax + eax*8] */ r_edi = (u32)(r_eax+r_eax*8);
    /* 00409aee: imul eax, ecx, -0x24 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xffffffdcu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00409af1: neg edi */ { u32 x = r_edi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00409af3: add edi, ebp */ {  u32 a = r_edi; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00409af5: add ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00409af7: mov eax, 0x2aaaaaab */ r_eax = 0x2aaaaaabu;
    /* 00409afc: imul ebp */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebp; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00409afe: mov eax, ebp */ r_eax = r_ebp;
    /* 00409b00: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00409b03: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00409b05: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 00409b08: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409b0a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409b0c: sub ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00409b0e: mov dword ptr [esp + 0x20], ebp */ W32((u32)(r_esp+0x20u), r_ebp);
    /* 00409b12: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 00409b16: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00409b18: fnstcw word ptr [esp + 0x28] */ W16((u32)(r_esp+0x28u), fcw);
    /* 00409b1c: movzx eax, word ptr [esp + 0x28] */ r_eax = (u32)R16((u32)(r_esp+0x28u));
    /* 00409b21: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00409b26: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 00409b2a: fldcw word ptr [esp + 0x30] */ fcw = R16((u32)(r_esp+0x30u));
    /* 00409b2e: fistp qword ptr [esp + 0x38] */ W64((u32)(r_esp+0x38u), (u64)fx_int64(ST(0))); FPOP();
    /* 00409b32: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 00409b36: mov eax, 0x2aaaaaab */ r_eax = 0x2aaaaaabu;
    /* 00409b3b: imul edi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_edi; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00409b3d: mov eax, edi */ r_eax = r_edi;
    /* 00409b3f: movzx ebp, byte ptr [esp + 0x38] */ r_ebp = (u32)R8((u32)(r_esp+0x38u));
    /* 00409b44: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00409b47: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00409b49: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
    /* 00409b4d: fild dword ptr [esp + 0x40] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x40u)));
    /* 00409b51: mov dword ptr [esp + 0x40], ebp */ W32((u32)(r_esp+0x40u), r_ebp);
    /* 00409b55: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00409b57: fild dword ptr [esp + 0x40] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x40u)));
    /* 00409b5b: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00409b5d: fnstcw word ptr [esp + 0x28] */ W16((u32)(r_esp+0x28u), fcw);
    /* 00409b61: movzx eax, word ptr [esp + 0x28] */ r_eax = (u32)R16((u32)(r_esp+0x28u));
    /* 00409b66: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00409b6b: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 00409b6f: fldcw word ptr [esp + 0x30] */ fcw = R16((u32)(r_esp+0x30u));
    /* 00409b73: fistp qword ptr [esp + 0x38] */ W64((u32)(r_esp+0x38u), (u64)fx_int64(ST(0))); FPOP();
    /* 00409b77: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 00409b7b: lea eax, [ecx + ecx*8] */ r_eax = (u32)(r_ecx+r_ecx*8);
    /* 00409b7e: fld dword ptr [0x8f997c] */ FPUSH(R_F32((u32)(0x8f997cu)));
    /* 00409b84: fld dword ptr [0x8f997c] */ FPUSH(R_F32((u32)(0x8f997cu)));
    /* 00409b8a: fdivr st(3) */ ST(0) = ST(3) / ST(0);
    /* 00409b8c: movzx edx, byte ptr [esp + 0x38] */ r_edx = (u32)R8((u32)(r_esp+0x38u));
    /* 00409b91: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00409b95: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409b97: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
    /* 00409b9b: fild dword ptr [esp + 0x40] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x40u)));
    /* 00409b9f: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409ba1: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409ba3: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409ba5: fld dword ptr [eax + edi*4 + 0x8f97c0] */ FPUSH(R_F32((u32)(r_eax+r_edi*4+0x8f97c0u)));
    /* 00409bac: fadd st(5), st(0) */ ST(5) = ST(5) + ST(0);
    /* 00409bae: fadd st(4), st(0) */ ST(4) = ST(4) + ST(0);
    /* 00409bb0: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00409bb2: fdiv st(4), st(0) */ ST(4) = ST(4) / ST(0);
    /* 00409bb4: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 00409bb6: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00409bba: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00409bbc: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 00409bc0: fld dword ptr [0x8f997c] */ FPUSH(R_F32((u32)(0x8f997cu)));
    /* 00409bc6: fdivr st(3) */ ST(0) = ST(3) / ST(0);
    /* 00409bc8: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 00409bcc: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00409bce: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00409bd0: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00409bd2: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 00409bd4: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 00409bd8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00409bda: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 00409bde: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00409be0: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
L_00409be4:; BB(0x00409be4);
    /* 00409be4: movzx ebp, cl */ r_ebp = (u32)(u8)r_ecx;
    /* 00409be7: cmp ebp, ebx */ {  u32 a = r_ebp; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409be9: je 0x409bf8 */ if (fZ) goto L_00409bf8;
L_00409beb:; BB(0x00409beb);
    /* 00409beb: mov edx, dword ptr [esp + 0x6c] */ r_edx = R32((u32)(r_esp+0x6cu));
    /* 00409bef: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00409bf1: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x409bf6u); f_0082bb60();
    /* 00409bf6: mov ebx, ebp */ r_ebx = r_ebp;
L_00409bf8:; BB(0x00409bf8);
    /* 00409bf8: push dword ptr [esp + 0x68] */ { u32 v = R32((u32)(r_esp+0x68u)); r_esp -= 4; W32(r_esp, v); }
    /* 00409bfc: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 00409c00: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x409c05u); f_0082b440();
    /* 00409c05: jmp 0x40999f */ goto L_0040999f;
L_00409c0a:; BB(0x00409c0a);
    /* 00409c0a: fld dword ptr [0x8f9978] */ FPUSH(R_F32((u32)(0x8f9978u)));
    /* 00409c10: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 00409c14: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00409c16: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 00409c18: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00409c1a: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00409c1e: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00409c22: fadd dword ptr [0x8f99d4] */ ST(0) = ST(0) + R_F32((u32)(0x8f99d4u));
    /* 00409c28: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00409c2c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00409c2e: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 00409c32: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 00409c3a: mov eax, 0x38e38e39 */ r_eax = 0x38e38e39u;
    /* 00409c3f: imul ebp */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebp; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00409c41: sar ebp, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebp = r;  } }
    /* 00409c44: mov ecx, edx */ r_ecx = r_edx;
    /* 00409c46: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 00409c4e: sar ecx, 3 */ { u32 c = (3u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00409c51: sub ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00409c53: mov dword ptr [esp + 0x18], 0 */ W32((u32)(r_esp+0x18u), 0x0u);
    /* 00409c5b: mov dword ptr [esp + 0x1c], 0 */ W32((u32)(r_esp+0x1cu), 0x0u);
    /* 00409c63: jmp 0x409be4 */ goto L_00409be4;
L_00409c68:; BB(0x00409c68);
    /* 00409c68: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x409c6du); f_004ac444();
    /* 00409c6d: add esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00409c70: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00409c71: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00409c72: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00409c73: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00409c74: ret  */ FN_RET(0x0040996c); r_esp += 4; return;
}

void f_00409a02(void)
{
    FN_ENTER(0x00409a02);
    goto L_00409a02;
L_0040999f:; BB(0x0040999f);
    /* 0040999f: movsx ebp, byte ptr [esi] */ r_ebp = (u32)(i32)(i8)R8((u32)(r_esi));
    /* 004099a2: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004099a4: je 0x409c68 */ if (fZ) goto L_00409c68;
L_004099aa:; BB(0x004099aa);
    /* 004099aa: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 004099b0: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004099b3: cmp ebp, 0x23 */ {  u32 a = r_ebp; u32 b = 0x23u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004099b6: je 0x40999f */ if (fZ) goto L_0040999f;
L_004099b8:; BB(0x004099b8);
    /* 004099b8: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 004099bc: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004099bf: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004099c0: call 0x85824c */ r_esp -= 4; W32(r_esp, 0x4099c5u); f_0085824c();
    /* 004099c5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004099c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004099c8: je 0x4099d6 */ if (fZ) goto L_004099d6;
L_004099ca:; BB(0x004099ca);
    /* 004099ca: fld dword ptr [0x8f9980] */ FPUSH(R_F32((u32)(0x8f9980u)));
    /* 004099d0: fadd dword ptr [esp + 0x64] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x64u));
    /* 004099d4: jmp 0x4099da */ goto L_004099da;
L_004099d6:; BB(0x004099d6);
    /* 004099d6: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
L_004099da:; BB(0x004099da);
    /* 004099da: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 004099de: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004099df: call 0x858339 */ r_esp -= 4; W32(r_esp, 0x4099e4u); f_00858339();
    /* 004099e4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004099e5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004099e7: jne 0x409a6f */ if (!fZ) goto L_00409a6f;
L_004099ed:; BB(0x004099ed);
    /* 004099ed: add ebp, -0x26 */ {  u32 a = r_ebp; u32 b = 0xffffffdau; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004099f0: cmp ebp, 0x58 */ {  u32 a = r_ebp; u32 b = 0x58u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004099f3: ja 0x409a68 */ if ((!fC&&!fZ)) goto L_00409a68;
L_004099f9:; BB(0x004099f9);
    /* 004099f9: mov eax, dword ptr [ebp*4 + 0x8f9640] */ r_eax = R32((u32)(r_ebp*4+0x8f9640u));
    /* 00409a00: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_00409a02:; BB(0x00409a02);
    /* 00409a02: mov ebp, 0x20 */ r_ebp = 0x20u;
    /* 00409a07: jmp 0x409aaf */ goto L_00409aaf;
L_00409a68:; BB(0x00409a68);
    /* 00409a68: mov ebp, 0x52 */ r_ebp = 0x52u;
    /* 00409a6d: jmp 0x409aaf */ goto L_00409aaf;
L_00409a6f:; BB(0x00409a6f);
    /* 00409a6f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00409a70: call 0x858212 */ r_esp -= 4; W32(r_esp, 0x409a75u); f_00858212();
    /* 00409a75: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00409a76: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409a78: je 0x409a85 */ if (fZ) goto L_00409a85;
L_00409a7a:; BB(0x00409a7a);
    /* 00409a7a: add ebp, -0x41 */ {  u32 a = r_ebp; u32 b = 0xffffffbfu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00409a7d: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 00409a83: jmp 0x409aaf */ goto L_00409aaf;
L_00409a85:; BB(0x00409a85);
    /* 00409a85: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00409a86: call 0x85824c */ r_esp -= 4; W32(r_esp, 0x409a8bu); f_0085824c();
    /* 00409a8b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00409a8c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409a8e: je 0x409a9b */ if (fZ) goto L_00409a9b;
L_00409a90:; BB(0x00409a90);
    /* 00409a90: add ebp, -0x3d */ {  u32 a = r_ebp; u32 b = 0xffffffc3u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00409a93: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 00409a99: jmp 0x409aaf */ goto L_00409aaf;
L_00409a9b:; BB(0x00409a9b);
    /* 00409a9b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00409a9c: call 0x858286 */ r_esp -= 4; W32(r_esp, 0x409aa1u); f_00858286();
    /* 00409aa1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00409aa2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409aa4: je 0x409aaf */ if (fZ) goto L_00409aaf;
L_00409aa6:; BB(0x00409aa6);
    /* 00409aa6: add ebp, 0xe */ {  u32 a = r_ebp; u32 b = 0xeu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00409aa9: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
L_00409aaf:; BB(0x00409aaf);
    /* 00409aaf: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00409ab2: cmp ebp, 0x52 */ {  u32 a = r_ebp; u32 b = 0x52u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409ab5: je 0x409c0a */ if (fZ) goto L_00409c0a;
L_00409abb:; BB(0x00409abb);
    /* 00409abb: fld dword ptr [0x8f9974] */ FPUSH(R_F32((u32)(0x8f9974u)));
    /* 00409ac1: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00409ac5: fld dword ptr [0x8f99d4] */ FPUSH(R_F32((u32)(0x8f99d4u)));
    /* 00409acb: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 00409acd: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00409acf: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00409ad3: mov eax, 0x38e38e39 */ r_eax = 0x38e38e39u;
    /* 00409ad8: imul ebp */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebp; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00409ada: mov eax, ebp */ r_eax = r_ebp;
    /* 00409adc: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00409adf: mov ecx, edx */ r_ecx = r_edx;
    /* 00409ae1: sar ecx, 3 */ { u32 c = (3u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00409ae4: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00409ae6: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 00409ae9: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409aeb: lea edi, [eax + eax*8] */ r_edi = (u32)(r_eax+r_eax*8);
    /* 00409aee: imul eax, ecx, -0x24 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xffffffdcu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00409af1: neg edi */ { u32 x = r_edi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00409af3: add edi, ebp */ {  u32 a = r_edi; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00409af5: add ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00409af7: mov eax, 0x2aaaaaab */ r_eax = 0x2aaaaaabu;
    /* 00409afc: imul ebp */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebp; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00409afe: mov eax, ebp */ r_eax = r_ebp;
    /* 00409b00: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00409b03: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00409b05: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 00409b08: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409b0a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409b0c: sub ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00409b0e: mov dword ptr [esp + 0x20], ebp */ W32((u32)(r_esp+0x20u), r_ebp);
    /* 00409b12: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 00409b16: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00409b18: fnstcw word ptr [esp + 0x28] */ W16((u32)(r_esp+0x28u), fcw);
    /* 00409b1c: movzx eax, word ptr [esp + 0x28] */ r_eax = (u32)R16((u32)(r_esp+0x28u));
    /* 00409b21: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00409b26: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 00409b2a: fldcw word ptr [esp + 0x30] */ fcw = R16((u32)(r_esp+0x30u));
    /* 00409b2e: fistp qword ptr [esp + 0x38] */ W64((u32)(r_esp+0x38u), (u64)fx_int64(ST(0))); FPOP();
    /* 00409b32: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 00409b36: mov eax, 0x2aaaaaab */ r_eax = 0x2aaaaaabu;
    /* 00409b3b: imul edi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_edi; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00409b3d: mov eax, edi */ r_eax = r_edi;
    /* 00409b3f: movzx ebp, byte ptr [esp + 0x38] */ r_ebp = (u32)R8((u32)(r_esp+0x38u));
    /* 00409b44: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00409b47: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00409b49: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
    /* 00409b4d: fild dword ptr [esp + 0x40] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x40u)));
    /* 00409b51: mov dword ptr [esp + 0x40], ebp */ W32((u32)(r_esp+0x40u), r_ebp);
    /* 00409b55: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00409b57: fild dword ptr [esp + 0x40] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x40u)));
    /* 00409b5b: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00409b5d: fnstcw word ptr [esp + 0x28] */ W16((u32)(r_esp+0x28u), fcw);
    /* 00409b61: movzx eax, word ptr [esp + 0x28] */ r_eax = (u32)R16((u32)(r_esp+0x28u));
    /* 00409b66: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00409b6b: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 00409b6f: fldcw word ptr [esp + 0x30] */ fcw = R16((u32)(r_esp+0x30u));
    /* 00409b73: fistp qword ptr [esp + 0x38] */ W64((u32)(r_esp+0x38u), (u64)fx_int64(ST(0))); FPOP();
    /* 00409b77: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 00409b7b: lea eax, [ecx + ecx*8] */ r_eax = (u32)(r_ecx+r_ecx*8);
    /* 00409b7e: fld dword ptr [0x8f997c] */ FPUSH(R_F32((u32)(0x8f997cu)));
    /* 00409b84: fld dword ptr [0x8f997c] */ FPUSH(R_F32((u32)(0x8f997cu)));
    /* 00409b8a: fdivr st(3) */ ST(0) = ST(3) / ST(0);
    /* 00409b8c: movzx edx, byte ptr [esp + 0x38] */ r_edx = (u32)R8((u32)(r_esp+0x38u));
    /* 00409b91: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00409b95: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409b97: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
    /* 00409b9b: fild dword ptr [esp + 0x40] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x40u)));
    /* 00409b9f: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409ba1: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409ba3: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409ba5: fld dword ptr [eax + edi*4 + 0x8f97c0] */ FPUSH(R_F32((u32)(r_eax+r_edi*4+0x8f97c0u)));
    /* 00409bac: fadd st(5), st(0) */ ST(5) = ST(5) + ST(0);
    /* 00409bae: fadd st(4), st(0) */ ST(4) = ST(4) + ST(0);
    /* 00409bb0: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00409bb2: fdiv st(4), st(0) */ ST(4) = ST(4) / ST(0);
    /* 00409bb4: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 00409bb6: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00409bba: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00409bbc: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 00409bc0: fld dword ptr [0x8f997c] */ FPUSH(R_F32((u32)(0x8f997cu)));
    /* 00409bc6: fdivr st(3) */ ST(0) = ST(3) / ST(0);
    /* 00409bc8: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 00409bcc: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00409bce: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00409bd0: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00409bd2: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 00409bd4: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 00409bd8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00409bda: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 00409bde: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00409be0: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
L_00409be4:; BB(0x00409be4);
    /* 00409be4: movzx ebp, cl */ r_ebp = (u32)(u8)r_ecx;
    /* 00409be7: cmp ebp, ebx */ {  u32 a = r_ebp; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409be9: je 0x409bf8 */ if (fZ) goto L_00409bf8;
L_00409beb:; BB(0x00409beb);
    /* 00409beb: mov edx, dword ptr [esp + 0x6c] */ r_edx = R32((u32)(r_esp+0x6cu));
    /* 00409bef: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00409bf1: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x409bf6u); f_0082bb60();
    /* 00409bf6: mov ebx, ebp */ r_ebx = r_ebp;
L_00409bf8:; BB(0x00409bf8);
    /* 00409bf8: push dword ptr [esp + 0x68] */ { u32 v = R32((u32)(r_esp+0x68u)); r_esp -= 4; W32(r_esp, v); }
    /* 00409bfc: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 00409c00: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x409c05u); f_0082b440();
    /* 00409c05: jmp 0x40999f */ goto L_0040999f;
L_00409c0a:; BB(0x00409c0a);
    /* 00409c0a: fld dword ptr [0x8f9978] */ FPUSH(R_F32((u32)(0x8f9978u)));
    /* 00409c10: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 00409c14: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00409c16: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 00409c18: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00409c1a: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00409c1e: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00409c22: fadd dword ptr [0x8f99d4] */ ST(0) = ST(0) + R_F32((u32)(0x8f99d4u));
    /* 00409c28: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00409c2c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00409c2e: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 00409c32: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 00409c3a: mov eax, 0x38e38e39 */ r_eax = 0x38e38e39u;
    /* 00409c3f: imul ebp */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebp; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00409c41: sar ebp, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebp = r;  } }
    /* 00409c44: mov ecx, edx */ r_ecx = r_edx;
    /* 00409c46: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 00409c4e: sar ecx, 3 */ { u32 c = (3u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00409c51: sub ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00409c53: mov dword ptr [esp + 0x18], 0 */ W32((u32)(r_esp+0x18u), 0x0u);
    /* 00409c5b: mov dword ptr [esp + 0x1c], 0 */ W32((u32)(r_esp+0x1cu), 0x0u);
    /* 00409c63: jmp 0x409be4 */ goto L_00409be4;
L_00409c68:; BB(0x00409c68);
    /* 00409c68: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x409c6du); f_004ac444();
    /* 00409c6d: add esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00409c70: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00409c71: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00409c72: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00409c73: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00409c74: ret  */ FN_RET(0x00409a02); r_esp += 4; return;
}

void f_00409a0c(void)
{
    FN_ENTER(0x00409a0c);
    goto L_00409a0c;
L_0040999f:; BB(0x0040999f);
    /* 0040999f: movsx ebp, byte ptr [esi] */ r_ebp = (u32)(i32)(i8)R8((u32)(r_esi));
    /* 004099a2: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004099a4: je 0x409c68 */ if (fZ) goto L_00409c68;
L_004099aa:; BB(0x004099aa);
    /* 004099aa: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 004099b0: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004099b3: cmp ebp, 0x23 */ {  u32 a = r_ebp; u32 b = 0x23u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004099b6: je 0x40999f */ if (fZ) goto L_0040999f;
L_004099b8:; BB(0x004099b8);
    /* 004099b8: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 004099bc: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004099bf: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004099c0: call 0x85824c */ r_esp -= 4; W32(r_esp, 0x4099c5u); f_0085824c();
    /* 004099c5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004099c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004099c8: je 0x4099d6 */ if (fZ) goto L_004099d6;
L_004099ca:; BB(0x004099ca);
    /* 004099ca: fld dword ptr [0x8f9980] */ FPUSH(R_F32((u32)(0x8f9980u)));
    /* 004099d0: fadd dword ptr [esp + 0x64] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x64u));
    /* 004099d4: jmp 0x4099da */ goto L_004099da;
L_004099d6:; BB(0x004099d6);
    /* 004099d6: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
L_004099da:; BB(0x004099da);
    /* 004099da: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 004099de: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004099df: call 0x858339 */ r_esp -= 4; W32(r_esp, 0x4099e4u); f_00858339();
    /* 004099e4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004099e5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004099e7: jne 0x409a6f */ if (!fZ) goto L_00409a6f;
L_004099ed:; BB(0x004099ed);
    /* 004099ed: add ebp, -0x26 */ {  u32 a = r_ebp; u32 b = 0xffffffdau; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004099f0: cmp ebp, 0x58 */ {  u32 a = r_ebp; u32 b = 0x58u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004099f3: ja 0x409a68 */ if ((!fC&&!fZ)) goto L_00409a68;
L_004099f9:; BB(0x004099f9);
    /* 004099f9: mov eax, dword ptr [ebp*4 + 0x8f9640] */ r_eax = R32((u32)(r_ebp*4+0x8f9640u));
    /* 00409a00: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_00409a0c:; BB(0x00409a0c);
    /* 00409a0c: mov ebp, 0x21 */ r_ebp = 0x21u;
    /* 00409a11: jmp 0x409aaf */ goto L_00409aaf;
L_00409a68:; BB(0x00409a68);
    /* 00409a68: mov ebp, 0x52 */ r_ebp = 0x52u;
    /* 00409a6d: jmp 0x409aaf */ goto L_00409aaf;
L_00409a6f:; BB(0x00409a6f);
    /* 00409a6f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00409a70: call 0x858212 */ r_esp -= 4; W32(r_esp, 0x409a75u); f_00858212();
    /* 00409a75: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00409a76: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409a78: je 0x409a85 */ if (fZ) goto L_00409a85;
L_00409a7a:; BB(0x00409a7a);
    /* 00409a7a: add ebp, -0x41 */ {  u32 a = r_ebp; u32 b = 0xffffffbfu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00409a7d: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 00409a83: jmp 0x409aaf */ goto L_00409aaf;
L_00409a85:; BB(0x00409a85);
    /* 00409a85: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00409a86: call 0x85824c */ r_esp -= 4; W32(r_esp, 0x409a8bu); f_0085824c();
    /* 00409a8b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00409a8c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409a8e: je 0x409a9b */ if (fZ) goto L_00409a9b;
L_00409a90:; BB(0x00409a90);
    /* 00409a90: add ebp, -0x3d */ {  u32 a = r_ebp; u32 b = 0xffffffc3u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00409a93: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 00409a99: jmp 0x409aaf */ goto L_00409aaf;
L_00409a9b:; BB(0x00409a9b);
    /* 00409a9b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00409a9c: call 0x858286 */ r_esp -= 4; W32(r_esp, 0x409aa1u); f_00858286();
    /* 00409aa1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00409aa2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409aa4: je 0x409aaf */ if (fZ) goto L_00409aaf;
L_00409aa6:; BB(0x00409aa6);
    /* 00409aa6: add ebp, 0xe */ {  u32 a = r_ebp; u32 b = 0xeu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00409aa9: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
L_00409aaf:; BB(0x00409aaf);
    /* 00409aaf: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00409ab2: cmp ebp, 0x52 */ {  u32 a = r_ebp; u32 b = 0x52u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409ab5: je 0x409c0a */ if (fZ) goto L_00409c0a;
L_00409abb:; BB(0x00409abb);
    /* 00409abb: fld dword ptr [0x8f9974] */ FPUSH(R_F32((u32)(0x8f9974u)));
    /* 00409ac1: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00409ac5: fld dword ptr [0x8f99d4] */ FPUSH(R_F32((u32)(0x8f99d4u)));
    /* 00409acb: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 00409acd: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00409acf: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00409ad3: mov eax, 0x38e38e39 */ r_eax = 0x38e38e39u;
    /* 00409ad8: imul ebp */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebp; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00409ada: mov eax, ebp */ r_eax = r_ebp;
    /* 00409adc: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00409adf: mov ecx, edx */ r_ecx = r_edx;
    /* 00409ae1: sar ecx, 3 */ { u32 c = (3u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00409ae4: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00409ae6: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 00409ae9: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409aeb: lea edi, [eax + eax*8] */ r_edi = (u32)(r_eax+r_eax*8);
    /* 00409aee: imul eax, ecx, -0x24 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xffffffdcu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00409af1: neg edi */ { u32 x = r_edi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00409af3: add edi, ebp */ {  u32 a = r_edi; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00409af5: add ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00409af7: mov eax, 0x2aaaaaab */ r_eax = 0x2aaaaaabu;
    /* 00409afc: imul ebp */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebp; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00409afe: mov eax, ebp */ r_eax = r_ebp;
    /* 00409b00: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00409b03: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00409b05: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 00409b08: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409b0a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409b0c: sub ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00409b0e: mov dword ptr [esp + 0x20], ebp */ W32((u32)(r_esp+0x20u), r_ebp);
    /* 00409b12: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 00409b16: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00409b18: fnstcw word ptr [esp + 0x28] */ W16((u32)(r_esp+0x28u), fcw);
    /* 00409b1c: movzx eax, word ptr [esp + 0x28] */ r_eax = (u32)R16((u32)(r_esp+0x28u));
    /* 00409b21: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00409b26: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 00409b2a: fldcw word ptr [esp + 0x30] */ fcw = R16((u32)(r_esp+0x30u));
    /* 00409b2e: fistp qword ptr [esp + 0x38] */ W64((u32)(r_esp+0x38u), (u64)fx_int64(ST(0))); FPOP();
    /* 00409b32: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 00409b36: mov eax, 0x2aaaaaab */ r_eax = 0x2aaaaaabu;
    /* 00409b3b: imul edi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_edi; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00409b3d: mov eax, edi */ r_eax = r_edi;
    /* 00409b3f: movzx ebp, byte ptr [esp + 0x38] */ r_ebp = (u32)R8((u32)(r_esp+0x38u));
    /* 00409b44: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00409b47: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00409b49: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
    /* 00409b4d: fild dword ptr [esp + 0x40] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x40u)));
    /* 00409b51: mov dword ptr [esp + 0x40], ebp */ W32((u32)(r_esp+0x40u), r_ebp);
    /* 00409b55: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00409b57: fild dword ptr [esp + 0x40] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x40u)));
    /* 00409b5b: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00409b5d: fnstcw word ptr [esp + 0x28] */ W16((u32)(r_esp+0x28u), fcw);
    /* 00409b61: movzx eax, word ptr [esp + 0x28] */ r_eax = (u32)R16((u32)(r_esp+0x28u));
    /* 00409b66: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00409b6b: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 00409b6f: fldcw word ptr [esp + 0x30] */ fcw = R16((u32)(r_esp+0x30u));
    /* 00409b73: fistp qword ptr [esp + 0x38] */ W64((u32)(r_esp+0x38u), (u64)fx_int64(ST(0))); FPOP();
    /* 00409b77: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 00409b7b: lea eax, [ecx + ecx*8] */ r_eax = (u32)(r_ecx+r_ecx*8);
    /* 00409b7e: fld dword ptr [0x8f997c] */ FPUSH(R_F32((u32)(0x8f997cu)));
    /* 00409b84: fld dword ptr [0x8f997c] */ FPUSH(R_F32((u32)(0x8f997cu)));
    /* 00409b8a: fdivr st(3) */ ST(0) = ST(3) / ST(0);
    /* 00409b8c: movzx edx, byte ptr [esp + 0x38] */ r_edx = (u32)R8((u32)(r_esp+0x38u));
    /* 00409b91: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00409b95: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409b97: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
    /* 00409b9b: fild dword ptr [esp + 0x40] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x40u)));
    /* 00409b9f: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409ba1: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409ba3: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409ba5: fld dword ptr [eax + edi*4 + 0x8f97c0] */ FPUSH(R_F32((u32)(r_eax+r_edi*4+0x8f97c0u)));
    /* 00409bac: fadd st(5), st(0) */ ST(5) = ST(5) + ST(0);
    /* 00409bae: fadd st(4), st(0) */ ST(4) = ST(4) + ST(0);
    /* 00409bb0: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00409bb2: fdiv st(4), st(0) */ ST(4) = ST(4) / ST(0);
    /* 00409bb4: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 00409bb6: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00409bba: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00409bbc: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 00409bc0: fld dword ptr [0x8f997c] */ FPUSH(R_F32((u32)(0x8f997cu)));
    /* 00409bc6: fdivr st(3) */ ST(0) = ST(3) / ST(0);
    /* 00409bc8: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 00409bcc: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00409bce: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00409bd0: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00409bd2: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 00409bd4: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 00409bd8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00409bda: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 00409bde: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00409be0: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
L_00409be4:; BB(0x00409be4);
    /* 00409be4: movzx ebp, cl */ r_ebp = (u32)(u8)r_ecx;
    /* 00409be7: cmp ebp, ebx */ {  u32 a = r_ebp; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409be9: je 0x409bf8 */ if (fZ) goto L_00409bf8;
L_00409beb:; BB(0x00409beb);
    /* 00409beb: mov edx, dword ptr [esp + 0x6c] */ r_edx = R32((u32)(r_esp+0x6cu));
    /* 00409bef: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00409bf1: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x409bf6u); f_0082bb60();
    /* 00409bf6: mov ebx, ebp */ r_ebx = r_ebp;
L_00409bf8:; BB(0x00409bf8);
    /* 00409bf8: push dword ptr [esp + 0x68] */ { u32 v = R32((u32)(r_esp+0x68u)); r_esp -= 4; W32(r_esp, v); }
    /* 00409bfc: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 00409c00: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x409c05u); f_0082b440();
    /* 00409c05: jmp 0x40999f */ goto L_0040999f;
L_00409c0a:; BB(0x00409c0a);
    /* 00409c0a: fld dword ptr [0x8f9978] */ FPUSH(R_F32((u32)(0x8f9978u)));
    /* 00409c10: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 00409c14: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00409c16: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 00409c18: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00409c1a: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00409c1e: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00409c22: fadd dword ptr [0x8f99d4] */ ST(0) = ST(0) + R_F32((u32)(0x8f99d4u));
    /* 00409c28: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00409c2c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00409c2e: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 00409c32: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 00409c3a: mov eax, 0x38e38e39 */ r_eax = 0x38e38e39u;
    /* 00409c3f: imul ebp */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebp; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00409c41: sar ebp, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebp = r;  } }
    /* 00409c44: mov ecx, edx */ r_ecx = r_edx;
    /* 00409c46: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 00409c4e: sar ecx, 3 */ { u32 c = (3u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00409c51: sub ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00409c53: mov dword ptr [esp + 0x18], 0 */ W32((u32)(r_esp+0x18u), 0x0u);
    /* 00409c5b: mov dword ptr [esp + 0x1c], 0 */ W32((u32)(r_esp+0x1cu), 0x0u);
    /* 00409c63: jmp 0x409be4 */ goto L_00409be4;
L_00409c68:; BB(0x00409c68);
    /* 00409c68: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x409c6du); f_004ac444();
    /* 00409c6d: add esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00409c70: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00409c71: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00409c72: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00409c73: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00409c74: ret  */ FN_RET(0x00409a0c); r_esp += 4; return;
}

void f_00409a16(void)
{
    FN_ENTER(0x00409a16);
    goto L_00409a16;
L_0040999f:; BB(0x0040999f);
    /* 0040999f: movsx ebp, byte ptr [esi] */ r_ebp = (u32)(i32)(i8)R8((u32)(r_esi));
    /* 004099a2: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004099a4: je 0x409c68 */ if (fZ) goto L_00409c68;
L_004099aa:; BB(0x004099aa);
    /* 004099aa: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 004099b0: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004099b3: cmp ebp, 0x23 */ {  u32 a = r_ebp; u32 b = 0x23u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004099b6: je 0x40999f */ if (fZ) goto L_0040999f;
L_004099b8:; BB(0x004099b8);
    /* 004099b8: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 004099bc: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004099bf: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004099c0: call 0x85824c */ r_esp -= 4; W32(r_esp, 0x4099c5u); f_0085824c();
    /* 004099c5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004099c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004099c8: je 0x4099d6 */ if (fZ) goto L_004099d6;
L_004099ca:; BB(0x004099ca);
    /* 004099ca: fld dword ptr [0x8f9980] */ FPUSH(R_F32((u32)(0x8f9980u)));
    /* 004099d0: fadd dword ptr [esp + 0x64] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x64u));
    /* 004099d4: jmp 0x4099da */ goto L_004099da;
L_004099d6:; BB(0x004099d6);
    /* 004099d6: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
L_004099da:; BB(0x004099da);
    /* 004099da: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 004099de: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004099df: call 0x858339 */ r_esp -= 4; W32(r_esp, 0x4099e4u); f_00858339();
    /* 004099e4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004099e5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004099e7: jne 0x409a6f */ if (!fZ) goto L_00409a6f;
L_004099ed:; BB(0x004099ed);
    /* 004099ed: add ebp, -0x26 */ {  u32 a = r_ebp; u32 b = 0xffffffdau; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004099f0: cmp ebp, 0x58 */ {  u32 a = r_ebp; u32 b = 0x58u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004099f3: ja 0x409a68 */ if ((!fC&&!fZ)) goto L_00409a68;
L_004099f9:; BB(0x004099f9);
    /* 004099f9: mov eax, dword ptr [ebp*4 + 0x8f9640] */ r_eax = R32((u32)(r_ebp*4+0x8f9640u));
    /* 00409a00: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_00409a16:; BB(0x00409a16);
    /* 00409a16: mov ebp, 0x49 */ r_ebp = 0x49u;
    /* 00409a1b: jmp 0x409aaf */ goto L_00409aaf;
L_00409a68:; BB(0x00409a68);
    /* 00409a68: mov ebp, 0x52 */ r_ebp = 0x52u;
    /* 00409a6d: jmp 0x409aaf */ goto L_00409aaf;
L_00409a6f:; BB(0x00409a6f);
    /* 00409a6f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00409a70: call 0x858212 */ r_esp -= 4; W32(r_esp, 0x409a75u); f_00858212();
    /* 00409a75: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00409a76: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409a78: je 0x409a85 */ if (fZ) goto L_00409a85;
L_00409a7a:; BB(0x00409a7a);
    /* 00409a7a: add ebp, -0x41 */ {  u32 a = r_ebp; u32 b = 0xffffffbfu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00409a7d: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 00409a83: jmp 0x409aaf */ goto L_00409aaf;
L_00409a85:; BB(0x00409a85);
    /* 00409a85: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00409a86: call 0x85824c */ r_esp -= 4; W32(r_esp, 0x409a8bu); f_0085824c();
    /* 00409a8b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00409a8c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409a8e: je 0x409a9b */ if (fZ) goto L_00409a9b;
L_00409a90:; BB(0x00409a90);
    /* 00409a90: add ebp, -0x3d */ {  u32 a = r_ebp; u32 b = 0xffffffc3u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00409a93: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 00409a99: jmp 0x409aaf */ goto L_00409aaf;
L_00409a9b:; BB(0x00409a9b);
    /* 00409a9b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00409a9c: call 0x858286 */ r_esp -= 4; W32(r_esp, 0x409aa1u); f_00858286();
    /* 00409aa1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00409aa2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409aa4: je 0x409aaf */ if (fZ) goto L_00409aaf;
L_00409aa6:; BB(0x00409aa6);
    /* 00409aa6: add ebp, 0xe */ {  u32 a = r_ebp; u32 b = 0xeu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00409aa9: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
L_00409aaf:; BB(0x00409aaf);
    /* 00409aaf: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00409ab2: cmp ebp, 0x52 */ {  u32 a = r_ebp; u32 b = 0x52u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409ab5: je 0x409c0a */ if (fZ) goto L_00409c0a;
L_00409abb:; BB(0x00409abb);
    /* 00409abb: fld dword ptr [0x8f9974] */ FPUSH(R_F32((u32)(0x8f9974u)));
    /* 00409ac1: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00409ac5: fld dword ptr [0x8f99d4] */ FPUSH(R_F32((u32)(0x8f99d4u)));
    /* 00409acb: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 00409acd: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00409acf: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00409ad3: mov eax, 0x38e38e39 */ r_eax = 0x38e38e39u;
    /* 00409ad8: imul ebp */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebp; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00409ada: mov eax, ebp */ r_eax = r_ebp;
    /* 00409adc: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00409adf: mov ecx, edx */ r_ecx = r_edx;
    /* 00409ae1: sar ecx, 3 */ { u32 c = (3u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00409ae4: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00409ae6: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 00409ae9: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409aeb: lea edi, [eax + eax*8] */ r_edi = (u32)(r_eax+r_eax*8);
    /* 00409aee: imul eax, ecx, -0x24 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xffffffdcu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00409af1: neg edi */ { u32 x = r_edi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00409af3: add edi, ebp */ {  u32 a = r_edi; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00409af5: add ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00409af7: mov eax, 0x2aaaaaab */ r_eax = 0x2aaaaaabu;
    /* 00409afc: imul ebp */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebp; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00409afe: mov eax, ebp */ r_eax = r_ebp;
    /* 00409b00: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00409b03: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00409b05: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 00409b08: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409b0a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409b0c: sub ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00409b0e: mov dword ptr [esp + 0x20], ebp */ W32((u32)(r_esp+0x20u), r_ebp);
    /* 00409b12: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 00409b16: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00409b18: fnstcw word ptr [esp + 0x28] */ W16((u32)(r_esp+0x28u), fcw);
    /* 00409b1c: movzx eax, word ptr [esp + 0x28] */ r_eax = (u32)R16((u32)(r_esp+0x28u));
    /* 00409b21: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00409b26: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 00409b2a: fldcw word ptr [esp + 0x30] */ fcw = R16((u32)(r_esp+0x30u));
    /* 00409b2e: fistp qword ptr [esp + 0x38] */ W64((u32)(r_esp+0x38u), (u64)fx_int64(ST(0))); FPOP();
    /* 00409b32: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 00409b36: mov eax, 0x2aaaaaab */ r_eax = 0x2aaaaaabu;
    /* 00409b3b: imul edi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_edi; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00409b3d: mov eax, edi */ r_eax = r_edi;
    /* 00409b3f: movzx ebp, byte ptr [esp + 0x38] */ r_ebp = (u32)R8((u32)(r_esp+0x38u));
    /* 00409b44: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00409b47: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00409b49: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
    /* 00409b4d: fild dword ptr [esp + 0x40] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x40u)));
    /* 00409b51: mov dword ptr [esp + 0x40], ebp */ W32((u32)(r_esp+0x40u), r_ebp);
    /* 00409b55: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00409b57: fild dword ptr [esp + 0x40] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x40u)));
    /* 00409b5b: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00409b5d: fnstcw word ptr [esp + 0x28] */ W16((u32)(r_esp+0x28u), fcw);
    /* 00409b61: movzx eax, word ptr [esp + 0x28] */ r_eax = (u32)R16((u32)(r_esp+0x28u));
    /* 00409b66: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00409b6b: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 00409b6f: fldcw word ptr [esp + 0x30] */ fcw = R16((u32)(r_esp+0x30u));
    /* 00409b73: fistp qword ptr [esp + 0x38] */ W64((u32)(r_esp+0x38u), (u64)fx_int64(ST(0))); FPOP();
    /* 00409b77: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 00409b7b: lea eax, [ecx + ecx*8] */ r_eax = (u32)(r_ecx+r_ecx*8);
    /* 00409b7e: fld dword ptr [0x8f997c] */ FPUSH(R_F32((u32)(0x8f997cu)));
    /* 00409b84: fld dword ptr [0x8f997c] */ FPUSH(R_F32((u32)(0x8f997cu)));
    /* 00409b8a: fdivr st(3) */ ST(0) = ST(3) / ST(0);
    /* 00409b8c: movzx edx, byte ptr [esp + 0x38] */ r_edx = (u32)R8((u32)(r_esp+0x38u));
    /* 00409b91: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00409b95: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409b97: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
    /* 00409b9b: fild dword ptr [esp + 0x40] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x40u)));
    /* 00409b9f: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409ba1: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409ba3: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409ba5: fld dword ptr [eax + edi*4 + 0x8f97c0] */ FPUSH(R_F32((u32)(r_eax+r_edi*4+0x8f97c0u)));
    /* 00409bac: fadd st(5), st(0) */ ST(5) = ST(5) + ST(0);
    /* 00409bae: fadd st(4), st(0) */ ST(4) = ST(4) + ST(0);
    /* 00409bb0: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00409bb2: fdiv st(4), st(0) */ ST(4) = ST(4) / ST(0);
    /* 00409bb4: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 00409bb6: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00409bba: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00409bbc: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 00409bc0: fld dword ptr [0x8f997c] */ FPUSH(R_F32((u32)(0x8f997cu)));
    /* 00409bc6: fdivr st(3) */ ST(0) = ST(3) / ST(0);
    /* 00409bc8: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 00409bcc: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00409bce: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00409bd0: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00409bd2: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 00409bd4: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 00409bd8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00409bda: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 00409bde: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00409be0: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
L_00409be4:; BB(0x00409be4);
    /* 00409be4: movzx ebp, cl */ r_ebp = (u32)(u8)r_ecx;
    /* 00409be7: cmp ebp, ebx */ {  u32 a = r_ebp; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409be9: je 0x409bf8 */ if (fZ) goto L_00409bf8;
L_00409beb:; BB(0x00409beb);
    /* 00409beb: mov edx, dword ptr [esp + 0x6c] */ r_edx = R32((u32)(r_esp+0x6cu));
    /* 00409bef: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00409bf1: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x409bf6u); f_0082bb60();
    /* 00409bf6: mov ebx, ebp */ r_ebx = r_ebp;
L_00409bf8:; BB(0x00409bf8);
    /* 00409bf8: push dword ptr [esp + 0x68] */ { u32 v = R32((u32)(r_esp+0x68u)); r_esp -= 4; W32(r_esp, v); }
    /* 00409bfc: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 00409c00: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x409c05u); f_0082b440();
    /* 00409c05: jmp 0x40999f */ goto L_0040999f;
L_00409c0a:; BB(0x00409c0a);
    /* 00409c0a: fld dword ptr [0x8f9978] */ FPUSH(R_F32((u32)(0x8f9978u)));
    /* 00409c10: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 00409c14: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00409c16: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 00409c18: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00409c1a: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00409c1e: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00409c22: fadd dword ptr [0x8f99d4] */ ST(0) = ST(0) + R_F32((u32)(0x8f99d4u));
    /* 00409c28: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00409c2c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00409c2e: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 00409c32: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 00409c3a: mov eax, 0x38e38e39 */ r_eax = 0x38e38e39u;
    /* 00409c3f: imul ebp */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebp; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00409c41: sar ebp, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebp = r;  } }
    /* 00409c44: mov ecx, edx */ r_ecx = r_edx;
    /* 00409c46: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 00409c4e: sar ecx, 3 */ { u32 c = (3u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00409c51: sub ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00409c53: mov dword ptr [esp + 0x18], 0 */ W32((u32)(r_esp+0x18u), 0x0u);
    /* 00409c5b: mov dword ptr [esp + 0x1c], 0 */ W32((u32)(r_esp+0x1cu), 0x0u);
    /* 00409c63: jmp 0x409be4 */ goto L_00409be4;
L_00409c68:; BB(0x00409c68);
    /* 00409c68: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x409c6du); f_004ac444();
    /* 00409c6d: add esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00409c70: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00409c71: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00409c72: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00409c73: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00409c74: ret  */ FN_RET(0x00409a16); r_esp += 4; return;
}

void f_00409a20(void)
{
    FN_ENTER(0x00409a20);
    goto L_00409a20;
L_0040999f:; BB(0x0040999f);
    /* 0040999f: movsx ebp, byte ptr [esi] */ r_ebp = (u32)(i32)(i8)R8((u32)(r_esi));
    /* 004099a2: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004099a4: je 0x409c68 */ if (fZ) goto L_00409c68;
L_004099aa:; BB(0x004099aa);
    /* 004099aa: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 004099b0: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004099b3: cmp ebp, 0x23 */ {  u32 a = r_ebp; u32 b = 0x23u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004099b6: je 0x40999f */ if (fZ) goto L_0040999f;
L_004099b8:; BB(0x004099b8);
    /* 004099b8: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 004099bc: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004099bf: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004099c0: call 0x85824c */ r_esp -= 4; W32(r_esp, 0x4099c5u); f_0085824c();
    /* 004099c5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004099c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004099c8: je 0x4099d6 */ if (fZ) goto L_004099d6;
L_004099ca:; BB(0x004099ca);
    /* 004099ca: fld dword ptr [0x8f9980] */ FPUSH(R_F32((u32)(0x8f9980u)));
    /* 004099d0: fadd dword ptr [esp + 0x64] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x64u));
    /* 004099d4: jmp 0x4099da */ goto L_004099da;
L_004099d6:; BB(0x004099d6);
    /* 004099d6: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
L_004099da:; BB(0x004099da);
    /* 004099da: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 004099de: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004099df: call 0x858339 */ r_esp -= 4; W32(r_esp, 0x4099e4u); f_00858339();
    /* 004099e4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004099e5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004099e7: jne 0x409a6f */ if (!fZ) goto L_00409a6f;
L_004099ed:; BB(0x004099ed);
    /* 004099ed: add ebp, -0x26 */ {  u32 a = r_ebp; u32 b = 0xffffffdau; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004099f0: cmp ebp, 0x58 */ {  u32 a = r_ebp; u32 b = 0x58u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004099f3: ja 0x409a68 */ if ((!fC&&!fZ)) goto L_00409a68;
L_004099f9:; BB(0x004099f9);
    /* 004099f9: mov eax, dword ptr [ebp*4 + 0x8f9640] */ r_eax = R32((u32)(r_ebp*4+0x8f9640u));
    /* 00409a00: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_00409a20:; BB(0x00409a20);
    /* 00409a20: mov ebp, 0x48 */ r_ebp = 0x48u;
    /* 00409a25: jmp 0x409aaf */ goto L_00409aaf;
L_00409a68:; BB(0x00409a68);
    /* 00409a68: mov ebp, 0x52 */ r_ebp = 0x52u;
    /* 00409a6d: jmp 0x409aaf */ goto L_00409aaf;
L_00409a6f:; BB(0x00409a6f);
    /* 00409a6f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00409a70: call 0x858212 */ r_esp -= 4; W32(r_esp, 0x409a75u); f_00858212();
    /* 00409a75: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00409a76: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409a78: je 0x409a85 */ if (fZ) goto L_00409a85;
L_00409a7a:; BB(0x00409a7a);
    /* 00409a7a: add ebp, -0x41 */ {  u32 a = r_ebp; u32 b = 0xffffffbfu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00409a7d: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 00409a83: jmp 0x409aaf */ goto L_00409aaf;
L_00409a85:; BB(0x00409a85);
    /* 00409a85: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00409a86: call 0x85824c */ r_esp -= 4; W32(r_esp, 0x409a8bu); f_0085824c();
    /* 00409a8b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00409a8c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409a8e: je 0x409a9b */ if (fZ) goto L_00409a9b;
L_00409a90:; BB(0x00409a90);
    /* 00409a90: add ebp, -0x3d */ {  u32 a = r_ebp; u32 b = 0xffffffc3u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00409a93: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 00409a99: jmp 0x409aaf */ goto L_00409aaf;
L_00409a9b:; BB(0x00409a9b);
    /* 00409a9b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00409a9c: call 0x858286 */ r_esp -= 4; W32(r_esp, 0x409aa1u); f_00858286();
    /* 00409aa1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00409aa2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409aa4: je 0x409aaf */ if (fZ) goto L_00409aaf;
L_00409aa6:; BB(0x00409aa6);
    /* 00409aa6: add ebp, 0xe */ {  u32 a = r_ebp; u32 b = 0xeu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00409aa9: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
L_00409aaf:; BB(0x00409aaf);
    /* 00409aaf: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00409ab2: cmp ebp, 0x52 */ {  u32 a = r_ebp; u32 b = 0x52u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409ab5: je 0x409c0a */ if (fZ) goto L_00409c0a;
L_00409abb:; BB(0x00409abb);
    /* 00409abb: fld dword ptr [0x8f9974] */ FPUSH(R_F32((u32)(0x8f9974u)));
    /* 00409ac1: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00409ac5: fld dword ptr [0x8f99d4] */ FPUSH(R_F32((u32)(0x8f99d4u)));
    /* 00409acb: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 00409acd: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00409acf: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00409ad3: mov eax, 0x38e38e39 */ r_eax = 0x38e38e39u;
    /* 00409ad8: imul ebp */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebp; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00409ada: mov eax, ebp */ r_eax = r_ebp;
    /* 00409adc: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00409adf: mov ecx, edx */ r_ecx = r_edx;
    /* 00409ae1: sar ecx, 3 */ { u32 c = (3u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00409ae4: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00409ae6: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 00409ae9: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409aeb: lea edi, [eax + eax*8] */ r_edi = (u32)(r_eax+r_eax*8);
    /* 00409aee: imul eax, ecx, -0x24 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xffffffdcu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00409af1: neg edi */ { u32 x = r_edi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00409af3: add edi, ebp */ {  u32 a = r_edi; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00409af5: add ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00409af7: mov eax, 0x2aaaaaab */ r_eax = 0x2aaaaaabu;
    /* 00409afc: imul ebp */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebp; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00409afe: mov eax, ebp */ r_eax = r_ebp;
    /* 00409b00: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00409b03: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00409b05: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 00409b08: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409b0a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409b0c: sub ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00409b0e: mov dword ptr [esp + 0x20], ebp */ W32((u32)(r_esp+0x20u), r_ebp);
    /* 00409b12: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 00409b16: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00409b18: fnstcw word ptr [esp + 0x28] */ W16((u32)(r_esp+0x28u), fcw);
    /* 00409b1c: movzx eax, word ptr [esp + 0x28] */ r_eax = (u32)R16((u32)(r_esp+0x28u));
    /* 00409b21: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00409b26: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 00409b2a: fldcw word ptr [esp + 0x30] */ fcw = R16((u32)(r_esp+0x30u));
    /* 00409b2e: fistp qword ptr [esp + 0x38] */ W64((u32)(r_esp+0x38u), (u64)fx_int64(ST(0))); FPOP();
    /* 00409b32: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 00409b36: mov eax, 0x2aaaaaab */ r_eax = 0x2aaaaaabu;
    /* 00409b3b: imul edi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_edi; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00409b3d: mov eax, edi */ r_eax = r_edi;
    /* 00409b3f: movzx ebp, byte ptr [esp + 0x38] */ r_ebp = (u32)R8((u32)(r_esp+0x38u));
    /* 00409b44: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00409b47: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00409b49: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
    /* 00409b4d: fild dword ptr [esp + 0x40] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x40u)));
    /* 00409b51: mov dword ptr [esp + 0x40], ebp */ W32((u32)(r_esp+0x40u), r_ebp);
    /* 00409b55: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00409b57: fild dword ptr [esp + 0x40] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x40u)));
    /* 00409b5b: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00409b5d: fnstcw word ptr [esp + 0x28] */ W16((u32)(r_esp+0x28u), fcw);
    /* 00409b61: movzx eax, word ptr [esp + 0x28] */ r_eax = (u32)R16((u32)(r_esp+0x28u));
    /* 00409b66: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00409b6b: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 00409b6f: fldcw word ptr [esp + 0x30] */ fcw = R16((u32)(r_esp+0x30u));
    /* 00409b73: fistp qword ptr [esp + 0x38] */ W64((u32)(r_esp+0x38u), (u64)fx_int64(ST(0))); FPOP();
    /* 00409b77: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 00409b7b: lea eax, [ecx + ecx*8] */ r_eax = (u32)(r_ecx+r_ecx*8);
    /* 00409b7e: fld dword ptr [0x8f997c] */ FPUSH(R_F32((u32)(0x8f997cu)));
    /* 00409b84: fld dword ptr [0x8f997c] */ FPUSH(R_F32((u32)(0x8f997cu)));
    /* 00409b8a: fdivr st(3) */ ST(0) = ST(3) / ST(0);
    /* 00409b8c: movzx edx, byte ptr [esp + 0x38] */ r_edx = (u32)R8((u32)(r_esp+0x38u));
    /* 00409b91: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00409b95: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409b97: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
    /* 00409b9b: fild dword ptr [esp + 0x40] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x40u)));
    /* 00409b9f: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409ba1: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409ba3: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409ba5: fld dword ptr [eax + edi*4 + 0x8f97c0] */ FPUSH(R_F32((u32)(r_eax+r_edi*4+0x8f97c0u)));
    /* 00409bac: fadd st(5), st(0) */ ST(5) = ST(5) + ST(0);
    /* 00409bae: fadd st(4), st(0) */ ST(4) = ST(4) + ST(0);
    /* 00409bb0: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00409bb2: fdiv st(4), st(0) */ ST(4) = ST(4) / ST(0);
    /* 00409bb4: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 00409bb6: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00409bba: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00409bbc: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 00409bc0: fld dword ptr [0x8f997c] */ FPUSH(R_F32((u32)(0x8f997cu)));
    /* 00409bc6: fdivr st(3) */ ST(0) = ST(3) / ST(0);
    /* 00409bc8: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 00409bcc: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00409bce: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00409bd0: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00409bd2: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 00409bd4: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 00409bd8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00409bda: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 00409bde: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00409be0: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
L_00409be4:; BB(0x00409be4);
    /* 00409be4: movzx ebp, cl */ r_ebp = (u32)(u8)r_ecx;
    /* 00409be7: cmp ebp, ebx */ {  u32 a = r_ebp; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409be9: je 0x409bf8 */ if (fZ) goto L_00409bf8;
L_00409beb:; BB(0x00409beb);
    /* 00409beb: mov edx, dword ptr [esp + 0x6c] */ r_edx = R32((u32)(r_esp+0x6cu));
    /* 00409bef: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00409bf1: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x409bf6u); f_0082bb60();
    /* 00409bf6: mov ebx, ebp */ r_ebx = r_ebp;
L_00409bf8:; BB(0x00409bf8);
    /* 00409bf8: push dword ptr [esp + 0x68] */ { u32 v = R32((u32)(r_esp+0x68u)); r_esp -= 4; W32(r_esp, v); }
    /* 00409bfc: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 00409c00: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x409c05u); f_0082b440();
    /* 00409c05: jmp 0x40999f */ goto L_0040999f;
L_00409c0a:; BB(0x00409c0a);
    /* 00409c0a: fld dword ptr [0x8f9978] */ FPUSH(R_F32((u32)(0x8f9978u)));
    /* 00409c10: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 00409c14: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00409c16: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 00409c18: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00409c1a: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00409c1e: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00409c22: fadd dword ptr [0x8f99d4] */ ST(0) = ST(0) + R_F32((u32)(0x8f99d4u));
    /* 00409c28: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00409c2c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00409c2e: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 00409c32: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 00409c3a: mov eax, 0x38e38e39 */ r_eax = 0x38e38e39u;
    /* 00409c3f: imul ebp */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebp; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00409c41: sar ebp, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebp = r;  } }
    /* 00409c44: mov ecx, edx */ r_ecx = r_edx;
    /* 00409c46: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 00409c4e: sar ecx, 3 */ { u32 c = (3u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00409c51: sub ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00409c53: mov dword ptr [esp + 0x18], 0 */ W32((u32)(r_esp+0x18u), 0x0u);
    /* 00409c5b: mov dword ptr [esp + 0x1c], 0 */ W32((u32)(r_esp+0x1cu), 0x0u);
    /* 00409c63: jmp 0x409be4 */ goto L_00409be4;
L_00409c68:; BB(0x00409c68);
    /* 00409c68: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x409c6du); f_004ac444();
    /* 00409c6d: add esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00409c70: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00409c71: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00409c72: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00409c73: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00409c74: ret  */ FN_RET(0x00409a20); r_esp += 4; return;
}

void f_00409a2a(void)
{
    FN_ENTER(0x00409a2a);
    goto L_00409a2a;
L_0040999f:; BB(0x0040999f);
    /* 0040999f: movsx ebp, byte ptr [esi] */ r_ebp = (u32)(i32)(i8)R8((u32)(r_esi));
    /* 004099a2: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004099a4: je 0x409c68 */ if (fZ) goto L_00409c68;
L_004099aa:; BB(0x004099aa);
    /* 004099aa: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 004099b0: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004099b3: cmp ebp, 0x23 */ {  u32 a = r_ebp; u32 b = 0x23u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004099b6: je 0x40999f */ if (fZ) goto L_0040999f;
L_004099b8:; BB(0x004099b8);
    /* 004099b8: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 004099bc: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004099bf: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004099c0: call 0x85824c */ r_esp -= 4; W32(r_esp, 0x4099c5u); f_0085824c();
    /* 004099c5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004099c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004099c8: je 0x4099d6 */ if (fZ) goto L_004099d6;
L_004099ca:; BB(0x004099ca);
    /* 004099ca: fld dword ptr [0x8f9980] */ FPUSH(R_F32((u32)(0x8f9980u)));
    /* 004099d0: fadd dword ptr [esp + 0x64] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x64u));
    /* 004099d4: jmp 0x4099da */ goto L_004099da;
L_004099d6:; BB(0x004099d6);
    /* 004099d6: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
L_004099da:; BB(0x004099da);
    /* 004099da: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 004099de: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004099df: call 0x858339 */ r_esp -= 4; W32(r_esp, 0x4099e4u); f_00858339();
    /* 004099e4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004099e5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004099e7: jne 0x409a6f */ if (!fZ) goto L_00409a6f;
L_004099ed:; BB(0x004099ed);
    /* 004099ed: add ebp, -0x26 */ {  u32 a = r_ebp; u32 b = 0xffffffdau; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004099f0: cmp ebp, 0x58 */ {  u32 a = r_ebp; u32 b = 0x58u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004099f3: ja 0x409a68 */ if ((!fC&&!fZ)) goto L_00409a68;
L_004099f9:; BB(0x004099f9);
    /* 004099f9: mov eax, dword ptr [ebp*4 + 0x8f9640] */ r_eax = R32((u32)(r_ebp*4+0x8f9640u));
    /* 00409a00: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_00409a2a:; BB(0x00409a2a);
    /* 00409a2a: mov ebp, 0x1e */ r_ebp = 0x1eu;
    /* 00409a2f: jmp 0x409aaf */ goto L_00409aaf;
L_00409a68:; BB(0x00409a68);
    /* 00409a68: mov ebp, 0x52 */ r_ebp = 0x52u;
    /* 00409a6d: jmp 0x409aaf */ goto L_00409aaf;
L_00409a6f:; BB(0x00409a6f);
    /* 00409a6f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00409a70: call 0x858212 */ r_esp -= 4; W32(r_esp, 0x409a75u); f_00858212();
    /* 00409a75: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00409a76: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409a78: je 0x409a85 */ if (fZ) goto L_00409a85;
L_00409a7a:; BB(0x00409a7a);
    /* 00409a7a: add ebp, -0x41 */ {  u32 a = r_ebp; u32 b = 0xffffffbfu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00409a7d: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 00409a83: jmp 0x409aaf */ goto L_00409aaf;
L_00409a85:; BB(0x00409a85);
    /* 00409a85: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00409a86: call 0x85824c */ r_esp -= 4; W32(r_esp, 0x409a8bu); f_0085824c();
    /* 00409a8b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00409a8c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409a8e: je 0x409a9b */ if (fZ) goto L_00409a9b;
L_00409a90:; BB(0x00409a90);
    /* 00409a90: add ebp, -0x3d */ {  u32 a = r_ebp; u32 b = 0xffffffc3u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00409a93: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 00409a99: jmp 0x409aaf */ goto L_00409aaf;
L_00409a9b:; BB(0x00409a9b);
    /* 00409a9b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00409a9c: call 0x858286 */ r_esp -= 4; W32(r_esp, 0x409aa1u); f_00858286();
    /* 00409aa1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00409aa2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409aa4: je 0x409aaf */ if (fZ) goto L_00409aaf;
L_00409aa6:; BB(0x00409aa6);
    /* 00409aa6: add ebp, 0xe */ {  u32 a = r_ebp; u32 b = 0xeu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00409aa9: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
L_00409aaf:; BB(0x00409aaf);
    /* 00409aaf: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00409ab2: cmp ebp, 0x52 */ {  u32 a = r_ebp; u32 b = 0x52u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409ab5: je 0x409c0a */ if (fZ) goto L_00409c0a;
L_00409abb:; BB(0x00409abb);
    /* 00409abb: fld dword ptr [0x8f9974] */ FPUSH(R_F32((u32)(0x8f9974u)));
    /* 00409ac1: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00409ac5: fld dword ptr [0x8f99d4] */ FPUSH(R_F32((u32)(0x8f99d4u)));
    /* 00409acb: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 00409acd: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00409acf: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00409ad3: mov eax, 0x38e38e39 */ r_eax = 0x38e38e39u;
    /* 00409ad8: imul ebp */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebp; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00409ada: mov eax, ebp */ r_eax = r_ebp;
    /* 00409adc: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00409adf: mov ecx, edx */ r_ecx = r_edx;
    /* 00409ae1: sar ecx, 3 */ { u32 c = (3u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00409ae4: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00409ae6: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 00409ae9: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409aeb: lea edi, [eax + eax*8] */ r_edi = (u32)(r_eax+r_eax*8);
    /* 00409aee: imul eax, ecx, -0x24 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xffffffdcu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00409af1: neg edi */ { u32 x = r_edi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00409af3: add edi, ebp */ {  u32 a = r_edi; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00409af5: add ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00409af7: mov eax, 0x2aaaaaab */ r_eax = 0x2aaaaaabu;
    /* 00409afc: imul ebp */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebp; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00409afe: mov eax, ebp */ r_eax = r_ebp;
    /* 00409b00: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00409b03: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00409b05: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 00409b08: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409b0a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409b0c: sub ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00409b0e: mov dword ptr [esp + 0x20], ebp */ W32((u32)(r_esp+0x20u), r_ebp);
    /* 00409b12: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 00409b16: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00409b18: fnstcw word ptr [esp + 0x28] */ W16((u32)(r_esp+0x28u), fcw);
    /* 00409b1c: movzx eax, word ptr [esp + 0x28] */ r_eax = (u32)R16((u32)(r_esp+0x28u));
    /* 00409b21: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00409b26: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 00409b2a: fldcw word ptr [esp + 0x30] */ fcw = R16((u32)(r_esp+0x30u));
    /* 00409b2e: fistp qword ptr [esp + 0x38] */ W64((u32)(r_esp+0x38u), (u64)fx_int64(ST(0))); FPOP();
    /* 00409b32: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 00409b36: mov eax, 0x2aaaaaab */ r_eax = 0x2aaaaaabu;
    /* 00409b3b: imul edi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_edi; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00409b3d: mov eax, edi */ r_eax = r_edi;
    /* 00409b3f: movzx ebp, byte ptr [esp + 0x38] */ r_ebp = (u32)R8((u32)(r_esp+0x38u));
    /* 00409b44: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00409b47: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00409b49: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
    /* 00409b4d: fild dword ptr [esp + 0x40] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x40u)));
    /* 00409b51: mov dword ptr [esp + 0x40], ebp */ W32((u32)(r_esp+0x40u), r_ebp);
    /* 00409b55: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00409b57: fild dword ptr [esp + 0x40] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x40u)));
    /* 00409b5b: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00409b5d: fnstcw word ptr [esp + 0x28] */ W16((u32)(r_esp+0x28u), fcw);
    /* 00409b61: movzx eax, word ptr [esp + 0x28] */ r_eax = (u32)R16((u32)(r_esp+0x28u));
    /* 00409b66: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00409b6b: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 00409b6f: fldcw word ptr [esp + 0x30] */ fcw = R16((u32)(r_esp+0x30u));
    /* 00409b73: fistp qword ptr [esp + 0x38] */ W64((u32)(r_esp+0x38u), (u64)fx_int64(ST(0))); FPOP();
    /* 00409b77: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 00409b7b: lea eax, [ecx + ecx*8] */ r_eax = (u32)(r_ecx+r_ecx*8);
    /* 00409b7e: fld dword ptr [0x8f997c] */ FPUSH(R_F32((u32)(0x8f997cu)));
    /* 00409b84: fld dword ptr [0x8f997c] */ FPUSH(R_F32((u32)(0x8f997cu)));
    /* 00409b8a: fdivr st(3) */ ST(0) = ST(3) / ST(0);
    /* 00409b8c: movzx edx, byte ptr [esp + 0x38] */ r_edx = (u32)R8((u32)(r_esp+0x38u));
    /* 00409b91: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00409b95: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409b97: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
    /* 00409b9b: fild dword ptr [esp + 0x40] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x40u)));
    /* 00409b9f: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409ba1: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409ba3: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409ba5: fld dword ptr [eax + edi*4 + 0x8f97c0] */ FPUSH(R_F32((u32)(r_eax+r_edi*4+0x8f97c0u)));
    /* 00409bac: fadd st(5), st(0) */ ST(5) = ST(5) + ST(0);
    /* 00409bae: fadd st(4), st(0) */ ST(4) = ST(4) + ST(0);
    /* 00409bb0: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00409bb2: fdiv st(4), st(0) */ ST(4) = ST(4) / ST(0);
    /* 00409bb4: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 00409bb6: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00409bba: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00409bbc: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 00409bc0: fld dword ptr [0x8f997c] */ FPUSH(R_F32((u32)(0x8f997cu)));
    /* 00409bc6: fdivr st(3) */ ST(0) = ST(3) / ST(0);
    /* 00409bc8: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 00409bcc: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00409bce: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00409bd0: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00409bd2: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 00409bd4: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 00409bd8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00409bda: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 00409bde: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00409be0: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
L_00409be4:; BB(0x00409be4);
    /* 00409be4: movzx ebp, cl */ r_ebp = (u32)(u8)r_ecx;
    /* 00409be7: cmp ebp, ebx */ {  u32 a = r_ebp; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409be9: je 0x409bf8 */ if (fZ) goto L_00409bf8;
L_00409beb:; BB(0x00409beb);
    /* 00409beb: mov edx, dword ptr [esp + 0x6c] */ r_edx = R32((u32)(r_esp+0x6cu));
    /* 00409bef: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00409bf1: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x409bf6u); f_0082bb60();
    /* 00409bf6: mov ebx, ebp */ r_ebx = r_ebp;
L_00409bf8:; BB(0x00409bf8);
    /* 00409bf8: push dword ptr [esp + 0x68] */ { u32 v = R32((u32)(r_esp+0x68u)); r_esp -= 4; W32(r_esp, v); }
    /* 00409bfc: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 00409c00: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x409c05u); f_0082b440();
    /* 00409c05: jmp 0x40999f */ goto L_0040999f;
L_00409c0a:; BB(0x00409c0a);
    /* 00409c0a: fld dword ptr [0x8f9978] */ FPUSH(R_F32((u32)(0x8f9978u)));
    /* 00409c10: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 00409c14: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00409c16: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 00409c18: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00409c1a: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00409c1e: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00409c22: fadd dword ptr [0x8f99d4] */ ST(0) = ST(0) + R_F32((u32)(0x8f99d4u));
    /* 00409c28: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00409c2c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00409c2e: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 00409c32: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 00409c3a: mov eax, 0x38e38e39 */ r_eax = 0x38e38e39u;
    /* 00409c3f: imul ebp */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebp; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00409c41: sar ebp, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebp = r;  } }
    /* 00409c44: mov ecx, edx */ r_ecx = r_edx;
    /* 00409c46: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 00409c4e: sar ecx, 3 */ { u32 c = (3u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00409c51: sub ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00409c53: mov dword ptr [esp + 0x18], 0 */ W32((u32)(r_esp+0x18u), 0x0u);
    /* 00409c5b: mov dword ptr [esp + 0x1c], 0 */ W32((u32)(r_esp+0x1cu), 0x0u);
    /* 00409c63: jmp 0x409be4 */ goto L_00409be4;
L_00409c68:; BB(0x00409c68);
    /* 00409c68: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x409c6du); f_004ac444();
    /* 00409c6d: add esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00409c70: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00409c71: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00409c72: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00409c73: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00409c74: ret  */ FN_RET(0x00409a2a); r_esp += 4; return;
}

void f_00409a34(void)
{
    FN_ENTER(0x00409a34);
    goto L_00409a34;
L_0040999f:; BB(0x0040999f);
    /* 0040999f: movsx ebp, byte ptr [esi] */ r_ebp = (u32)(i32)(i8)R8((u32)(r_esi));
    /* 004099a2: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004099a4: je 0x409c68 */ if (fZ) goto L_00409c68;
L_004099aa:; BB(0x004099aa);
    /* 004099aa: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 004099b0: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004099b3: cmp ebp, 0x23 */ {  u32 a = r_ebp; u32 b = 0x23u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004099b6: je 0x40999f */ if (fZ) goto L_0040999f;
L_004099b8:; BB(0x004099b8);
    /* 004099b8: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 004099bc: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004099bf: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004099c0: call 0x85824c */ r_esp -= 4; W32(r_esp, 0x4099c5u); f_0085824c();
    /* 004099c5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004099c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004099c8: je 0x4099d6 */ if (fZ) goto L_004099d6;
L_004099ca:; BB(0x004099ca);
    /* 004099ca: fld dword ptr [0x8f9980] */ FPUSH(R_F32((u32)(0x8f9980u)));
    /* 004099d0: fadd dword ptr [esp + 0x64] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x64u));
    /* 004099d4: jmp 0x4099da */ goto L_004099da;
L_004099d6:; BB(0x004099d6);
    /* 004099d6: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
L_004099da:; BB(0x004099da);
    /* 004099da: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 004099de: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004099df: call 0x858339 */ r_esp -= 4; W32(r_esp, 0x4099e4u); f_00858339();
    /* 004099e4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004099e5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004099e7: jne 0x409a6f */ if (!fZ) goto L_00409a6f;
L_004099ed:; BB(0x004099ed);
    /* 004099ed: add ebp, -0x26 */ {  u32 a = r_ebp; u32 b = 0xffffffdau; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004099f0: cmp ebp, 0x58 */ {  u32 a = r_ebp; u32 b = 0x58u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004099f3: ja 0x409a68 */ if ((!fC&&!fZ)) goto L_00409a68;
L_004099f9:; BB(0x004099f9);
    /* 004099f9: mov eax, dword ptr [ebp*4 + 0x8f9640] */ r_eax = R32((u32)(r_ebp*4+0x8f9640u));
    /* 00409a00: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_00409a34:; BB(0x00409a34);
    /* 00409a34: mov ebp, 0x1c */ r_ebp = 0x1cu;
    /* 00409a39: jmp 0x409aaf */ goto L_00409aaf;
L_00409a68:; BB(0x00409a68);
    /* 00409a68: mov ebp, 0x52 */ r_ebp = 0x52u;
    /* 00409a6d: jmp 0x409aaf */ goto L_00409aaf;
L_00409a6f:; BB(0x00409a6f);
    /* 00409a6f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00409a70: call 0x858212 */ r_esp -= 4; W32(r_esp, 0x409a75u); f_00858212();
    /* 00409a75: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00409a76: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409a78: je 0x409a85 */ if (fZ) goto L_00409a85;
L_00409a7a:; BB(0x00409a7a);
    /* 00409a7a: add ebp, -0x41 */ {  u32 a = r_ebp; u32 b = 0xffffffbfu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00409a7d: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 00409a83: jmp 0x409aaf */ goto L_00409aaf;
L_00409a85:; BB(0x00409a85);
    /* 00409a85: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00409a86: call 0x85824c */ r_esp -= 4; W32(r_esp, 0x409a8bu); f_0085824c();
    /* 00409a8b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00409a8c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409a8e: je 0x409a9b */ if (fZ) goto L_00409a9b;
L_00409a90:; BB(0x00409a90);
    /* 00409a90: add ebp, -0x3d */ {  u32 a = r_ebp; u32 b = 0xffffffc3u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00409a93: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 00409a99: jmp 0x409aaf */ goto L_00409aaf;
L_00409a9b:; BB(0x00409a9b);
    /* 00409a9b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00409a9c: call 0x858286 */ r_esp -= 4; W32(r_esp, 0x409aa1u); f_00858286();
    /* 00409aa1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00409aa2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409aa4: je 0x409aaf */ if (fZ) goto L_00409aaf;
L_00409aa6:; BB(0x00409aa6);
    /* 00409aa6: add ebp, 0xe */ {  u32 a = r_ebp; u32 b = 0xeu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00409aa9: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
L_00409aaf:; BB(0x00409aaf);
    /* 00409aaf: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00409ab2: cmp ebp, 0x52 */ {  u32 a = r_ebp; u32 b = 0x52u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409ab5: je 0x409c0a */ if (fZ) goto L_00409c0a;
L_00409abb:; BB(0x00409abb);
    /* 00409abb: fld dword ptr [0x8f9974] */ FPUSH(R_F32((u32)(0x8f9974u)));
    /* 00409ac1: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00409ac5: fld dword ptr [0x8f99d4] */ FPUSH(R_F32((u32)(0x8f99d4u)));
    /* 00409acb: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 00409acd: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00409acf: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00409ad3: mov eax, 0x38e38e39 */ r_eax = 0x38e38e39u;
    /* 00409ad8: imul ebp */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebp; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00409ada: mov eax, ebp */ r_eax = r_ebp;
    /* 00409adc: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00409adf: mov ecx, edx */ r_ecx = r_edx;
    /* 00409ae1: sar ecx, 3 */ { u32 c = (3u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00409ae4: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00409ae6: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 00409ae9: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409aeb: lea edi, [eax + eax*8] */ r_edi = (u32)(r_eax+r_eax*8);
    /* 00409aee: imul eax, ecx, -0x24 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xffffffdcu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00409af1: neg edi */ { u32 x = r_edi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00409af3: add edi, ebp */ {  u32 a = r_edi; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00409af5: add ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00409af7: mov eax, 0x2aaaaaab */ r_eax = 0x2aaaaaabu;
    /* 00409afc: imul ebp */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebp; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00409afe: mov eax, ebp */ r_eax = r_ebp;
    /* 00409b00: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00409b03: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00409b05: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 00409b08: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409b0a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409b0c: sub ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00409b0e: mov dword ptr [esp + 0x20], ebp */ W32((u32)(r_esp+0x20u), r_ebp);
    /* 00409b12: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 00409b16: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00409b18: fnstcw word ptr [esp + 0x28] */ W16((u32)(r_esp+0x28u), fcw);
    /* 00409b1c: movzx eax, word ptr [esp + 0x28] */ r_eax = (u32)R16((u32)(r_esp+0x28u));
    /* 00409b21: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00409b26: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 00409b2a: fldcw word ptr [esp + 0x30] */ fcw = R16((u32)(r_esp+0x30u));
    /* 00409b2e: fistp qword ptr [esp + 0x38] */ W64((u32)(r_esp+0x38u), (u64)fx_int64(ST(0))); FPOP();
    /* 00409b32: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 00409b36: mov eax, 0x2aaaaaab */ r_eax = 0x2aaaaaabu;
    /* 00409b3b: imul edi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_edi; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00409b3d: mov eax, edi */ r_eax = r_edi;
    /* 00409b3f: movzx ebp, byte ptr [esp + 0x38] */ r_ebp = (u32)R8((u32)(r_esp+0x38u));
    /* 00409b44: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00409b47: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00409b49: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
    /* 00409b4d: fild dword ptr [esp + 0x40] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x40u)));
    /* 00409b51: mov dword ptr [esp + 0x40], ebp */ W32((u32)(r_esp+0x40u), r_ebp);
    /* 00409b55: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00409b57: fild dword ptr [esp + 0x40] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x40u)));
    /* 00409b5b: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00409b5d: fnstcw word ptr [esp + 0x28] */ W16((u32)(r_esp+0x28u), fcw);
    /* 00409b61: movzx eax, word ptr [esp + 0x28] */ r_eax = (u32)R16((u32)(r_esp+0x28u));
    /* 00409b66: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00409b6b: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 00409b6f: fldcw word ptr [esp + 0x30] */ fcw = R16((u32)(r_esp+0x30u));
    /* 00409b73: fistp qword ptr [esp + 0x38] */ W64((u32)(r_esp+0x38u), (u64)fx_int64(ST(0))); FPOP();
    /* 00409b77: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 00409b7b: lea eax, [ecx + ecx*8] */ r_eax = (u32)(r_ecx+r_ecx*8);
    /* 00409b7e: fld dword ptr [0x8f997c] */ FPUSH(R_F32((u32)(0x8f997cu)));
    /* 00409b84: fld dword ptr [0x8f997c] */ FPUSH(R_F32((u32)(0x8f997cu)));
    /* 00409b8a: fdivr st(3) */ ST(0) = ST(3) / ST(0);
    /* 00409b8c: movzx edx, byte ptr [esp + 0x38] */ r_edx = (u32)R8((u32)(r_esp+0x38u));
    /* 00409b91: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00409b95: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409b97: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
    /* 00409b9b: fild dword ptr [esp + 0x40] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x40u)));
    /* 00409b9f: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409ba1: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409ba3: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409ba5: fld dword ptr [eax + edi*4 + 0x8f97c0] */ FPUSH(R_F32((u32)(r_eax+r_edi*4+0x8f97c0u)));
    /* 00409bac: fadd st(5), st(0) */ ST(5) = ST(5) + ST(0);
    /* 00409bae: fadd st(4), st(0) */ ST(4) = ST(4) + ST(0);
    /* 00409bb0: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00409bb2: fdiv st(4), st(0) */ ST(4) = ST(4) / ST(0);
    /* 00409bb4: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 00409bb6: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00409bba: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00409bbc: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 00409bc0: fld dword ptr [0x8f997c] */ FPUSH(R_F32((u32)(0x8f997cu)));
    /* 00409bc6: fdivr st(3) */ ST(0) = ST(3) / ST(0);
    /* 00409bc8: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 00409bcc: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00409bce: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00409bd0: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00409bd2: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 00409bd4: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 00409bd8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00409bda: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 00409bde: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00409be0: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
L_00409be4:; BB(0x00409be4);
    /* 00409be4: movzx ebp, cl */ r_ebp = (u32)(u8)r_ecx;
    /* 00409be7: cmp ebp, ebx */ {  u32 a = r_ebp; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409be9: je 0x409bf8 */ if (fZ) goto L_00409bf8;
L_00409beb:; BB(0x00409beb);
    /* 00409beb: mov edx, dword ptr [esp + 0x6c] */ r_edx = R32((u32)(r_esp+0x6cu));
    /* 00409bef: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00409bf1: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x409bf6u); f_0082bb60();
    /* 00409bf6: mov ebx, ebp */ r_ebx = r_ebp;
L_00409bf8:; BB(0x00409bf8);
    /* 00409bf8: push dword ptr [esp + 0x68] */ { u32 v = R32((u32)(r_esp+0x68u)); r_esp -= 4; W32(r_esp, v); }
    /* 00409bfc: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 00409c00: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x409c05u); f_0082b440();
    /* 00409c05: jmp 0x40999f */ goto L_0040999f;
L_00409c0a:; BB(0x00409c0a);
    /* 00409c0a: fld dword ptr [0x8f9978] */ FPUSH(R_F32((u32)(0x8f9978u)));
    /* 00409c10: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 00409c14: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00409c16: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 00409c18: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00409c1a: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00409c1e: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00409c22: fadd dword ptr [0x8f99d4] */ ST(0) = ST(0) + R_F32((u32)(0x8f99d4u));
    /* 00409c28: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00409c2c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00409c2e: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 00409c32: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 00409c3a: mov eax, 0x38e38e39 */ r_eax = 0x38e38e39u;
    /* 00409c3f: imul ebp */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebp; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00409c41: sar ebp, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebp = r;  } }
    /* 00409c44: mov ecx, edx */ r_ecx = r_edx;
    /* 00409c46: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 00409c4e: sar ecx, 3 */ { u32 c = (3u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00409c51: sub ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00409c53: mov dword ptr [esp + 0x18], 0 */ W32((u32)(r_esp+0x18u), 0x0u);
    /* 00409c5b: mov dword ptr [esp + 0x1c], 0 */ W32((u32)(r_esp+0x1cu), 0x0u);
    /* 00409c63: jmp 0x409be4 */ goto L_00409be4;
L_00409c68:; BB(0x00409c68);
    /* 00409c68: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x409c6du); f_004ac444();
    /* 00409c6d: add esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00409c70: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00409c71: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00409c72: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00409c73: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00409c74: ret  */ FN_RET(0x00409a34); r_esp += 4; return;
}

void f_00409a3e(void)
{
    FN_ENTER(0x00409a3e);
    goto L_00409a3e;
L_0040999f:; BB(0x0040999f);
    /* 0040999f: movsx ebp, byte ptr [esi] */ r_ebp = (u32)(i32)(i8)R8((u32)(r_esi));
    /* 004099a2: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004099a4: je 0x409c68 */ if (fZ) goto L_00409c68;
L_004099aa:; BB(0x004099aa);
    /* 004099aa: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 004099b0: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004099b3: cmp ebp, 0x23 */ {  u32 a = r_ebp; u32 b = 0x23u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004099b6: je 0x40999f */ if (fZ) goto L_0040999f;
L_004099b8:; BB(0x004099b8);
    /* 004099b8: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 004099bc: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004099bf: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004099c0: call 0x85824c */ r_esp -= 4; W32(r_esp, 0x4099c5u); f_0085824c();
    /* 004099c5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004099c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004099c8: je 0x4099d6 */ if (fZ) goto L_004099d6;
L_004099ca:; BB(0x004099ca);
    /* 004099ca: fld dword ptr [0x8f9980] */ FPUSH(R_F32((u32)(0x8f9980u)));
    /* 004099d0: fadd dword ptr [esp + 0x64] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x64u));
    /* 004099d4: jmp 0x4099da */ goto L_004099da;
L_004099d6:; BB(0x004099d6);
    /* 004099d6: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
L_004099da:; BB(0x004099da);
    /* 004099da: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 004099de: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004099df: call 0x858339 */ r_esp -= 4; W32(r_esp, 0x4099e4u); f_00858339();
    /* 004099e4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004099e5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004099e7: jne 0x409a6f */ if (!fZ) goto L_00409a6f;
L_004099ed:; BB(0x004099ed);
    /* 004099ed: add ebp, -0x26 */ {  u32 a = r_ebp; u32 b = 0xffffffdau; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004099f0: cmp ebp, 0x58 */ {  u32 a = r_ebp; u32 b = 0x58u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004099f3: ja 0x409a68 */ if ((!fC&&!fZ)) goto L_00409a68;
L_004099f9:; BB(0x004099f9);
    /* 004099f9: mov eax, dword ptr [ebp*4 + 0x8f9640] */ r_eax = R32((u32)(r_ebp*4+0x8f9640u));
    /* 00409a00: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_00409a3e:; BB(0x00409a3e);
    /* 00409a3e: mov ebp, 0x1d */ r_ebp = 0x1du;
    /* 00409a43: jmp 0x409aaf */ goto L_00409aaf;
L_00409a68:; BB(0x00409a68);
    /* 00409a68: mov ebp, 0x52 */ r_ebp = 0x52u;
    /* 00409a6d: jmp 0x409aaf */ goto L_00409aaf;
L_00409a6f:; BB(0x00409a6f);
    /* 00409a6f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00409a70: call 0x858212 */ r_esp -= 4; W32(r_esp, 0x409a75u); f_00858212();
    /* 00409a75: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00409a76: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409a78: je 0x409a85 */ if (fZ) goto L_00409a85;
L_00409a7a:; BB(0x00409a7a);
    /* 00409a7a: add ebp, -0x41 */ {  u32 a = r_ebp; u32 b = 0xffffffbfu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00409a7d: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 00409a83: jmp 0x409aaf */ goto L_00409aaf;
L_00409a85:; BB(0x00409a85);
    /* 00409a85: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00409a86: call 0x85824c */ r_esp -= 4; W32(r_esp, 0x409a8bu); f_0085824c();
    /* 00409a8b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00409a8c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409a8e: je 0x409a9b */ if (fZ) goto L_00409a9b;
L_00409a90:; BB(0x00409a90);
    /* 00409a90: add ebp, -0x3d */ {  u32 a = r_ebp; u32 b = 0xffffffc3u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00409a93: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 00409a99: jmp 0x409aaf */ goto L_00409aaf;
L_00409a9b:; BB(0x00409a9b);
    /* 00409a9b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00409a9c: call 0x858286 */ r_esp -= 4; W32(r_esp, 0x409aa1u); f_00858286();
    /* 00409aa1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00409aa2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409aa4: je 0x409aaf */ if (fZ) goto L_00409aaf;
L_00409aa6:; BB(0x00409aa6);
    /* 00409aa6: add ebp, 0xe */ {  u32 a = r_ebp; u32 b = 0xeu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00409aa9: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
L_00409aaf:; BB(0x00409aaf);
    /* 00409aaf: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00409ab2: cmp ebp, 0x52 */ {  u32 a = r_ebp; u32 b = 0x52u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409ab5: je 0x409c0a */ if (fZ) goto L_00409c0a;
L_00409abb:; BB(0x00409abb);
    /* 00409abb: fld dword ptr [0x8f9974] */ FPUSH(R_F32((u32)(0x8f9974u)));
    /* 00409ac1: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00409ac5: fld dword ptr [0x8f99d4] */ FPUSH(R_F32((u32)(0x8f99d4u)));
    /* 00409acb: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 00409acd: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00409acf: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00409ad3: mov eax, 0x38e38e39 */ r_eax = 0x38e38e39u;
    /* 00409ad8: imul ebp */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebp; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00409ada: mov eax, ebp */ r_eax = r_ebp;
    /* 00409adc: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00409adf: mov ecx, edx */ r_ecx = r_edx;
    /* 00409ae1: sar ecx, 3 */ { u32 c = (3u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00409ae4: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00409ae6: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 00409ae9: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409aeb: lea edi, [eax + eax*8] */ r_edi = (u32)(r_eax+r_eax*8);
    /* 00409aee: imul eax, ecx, -0x24 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xffffffdcu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00409af1: neg edi */ { u32 x = r_edi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00409af3: add edi, ebp */ {  u32 a = r_edi; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00409af5: add ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00409af7: mov eax, 0x2aaaaaab */ r_eax = 0x2aaaaaabu;
    /* 00409afc: imul ebp */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebp; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00409afe: mov eax, ebp */ r_eax = r_ebp;
    /* 00409b00: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00409b03: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00409b05: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 00409b08: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409b0a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409b0c: sub ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00409b0e: mov dword ptr [esp + 0x20], ebp */ W32((u32)(r_esp+0x20u), r_ebp);
    /* 00409b12: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 00409b16: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00409b18: fnstcw word ptr [esp + 0x28] */ W16((u32)(r_esp+0x28u), fcw);
    /* 00409b1c: movzx eax, word ptr [esp + 0x28] */ r_eax = (u32)R16((u32)(r_esp+0x28u));
    /* 00409b21: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00409b26: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 00409b2a: fldcw word ptr [esp + 0x30] */ fcw = R16((u32)(r_esp+0x30u));
    /* 00409b2e: fistp qword ptr [esp + 0x38] */ W64((u32)(r_esp+0x38u), (u64)fx_int64(ST(0))); FPOP();
    /* 00409b32: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 00409b36: mov eax, 0x2aaaaaab */ r_eax = 0x2aaaaaabu;
    /* 00409b3b: imul edi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_edi; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00409b3d: mov eax, edi */ r_eax = r_edi;
    /* 00409b3f: movzx ebp, byte ptr [esp + 0x38] */ r_ebp = (u32)R8((u32)(r_esp+0x38u));
    /* 00409b44: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00409b47: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00409b49: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
    /* 00409b4d: fild dword ptr [esp + 0x40] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x40u)));
    /* 00409b51: mov dword ptr [esp + 0x40], ebp */ W32((u32)(r_esp+0x40u), r_ebp);
    /* 00409b55: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00409b57: fild dword ptr [esp + 0x40] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x40u)));
    /* 00409b5b: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00409b5d: fnstcw word ptr [esp + 0x28] */ W16((u32)(r_esp+0x28u), fcw);
    /* 00409b61: movzx eax, word ptr [esp + 0x28] */ r_eax = (u32)R16((u32)(r_esp+0x28u));
    /* 00409b66: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00409b6b: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 00409b6f: fldcw word ptr [esp + 0x30] */ fcw = R16((u32)(r_esp+0x30u));
    /* 00409b73: fistp qword ptr [esp + 0x38] */ W64((u32)(r_esp+0x38u), (u64)fx_int64(ST(0))); FPOP();
    /* 00409b77: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 00409b7b: lea eax, [ecx + ecx*8] */ r_eax = (u32)(r_ecx+r_ecx*8);
    /* 00409b7e: fld dword ptr [0x8f997c] */ FPUSH(R_F32((u32)(0x8f997cu)));
    /* 00409b84: fld dword ptr [0x8f997c] */ FPUSH(R_F32((u32)(0x8f997cu)));
    /* 00409b8a: fdivr st(3) */ ST(0) = ST(3) / ST(0);
    /* 00409b8c: movzx edx, byte ptr [esp + 0x38] */ r_edx = (u32)R8((u32)(r_esp+0x38u));
    /* 00409b91: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00409b95: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409b97: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
    /* 00409b9b: fild dword ptr [esp + 0x40] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x40u)));
    /* 00409b9f: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409ba1: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409ba3: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409ba5: fld dword ptr [eax + edi*4 + 0x8f97c0] */ FPUSH(R_F32((u32)(r_eax+r_edi*4+0x8f97c0u)));
    /* 00409bac: fadd st(5), st(0) */ ST(5) = ST(5) + ST(0);
    /* 00409bae: fadd st(4), st(0) */ ST(4) = ST(4) + ST(0);
    /* 00409bb0: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00409bb2: fdiv st(4), st(0) */ ST(4) = ST(4) / ST(0);
    /* 00409bb4: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 00409bb6: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00409bba: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00409bbc: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 00409bc0: fld dword ptr [0x8f997c] */ FPUSH(R_F32((u32)(0x8f997cu)));
    /* 00409bc6: fdivr st(3) */ ST(0) = ST(3) / ST(0);
    /* 00409bc8: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 00409bcc: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00409bce: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00409bd0: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00409bd2: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 00409bd4: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 00409bd8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00409bda: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 00409bde: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00409be0: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
L_00409be4:; BB(0x00409be4);
    /* 00409be4: movzx ebp, cl */ r_ebp = (u32)(u8)r_ecx;
    /* 00409be7: cmp ebp, ebx */ {  u32 a = r_ebp; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409be9: je 0x409bf8 */ if (fZ) goto L_00409bf8;
L_00409beb:; BB(0x00409beb);
    /* 00409beb: mov edx, dword ptr [esp + 0x6c] */ r_edx = R32((u32)(r_esp+0x6cu));
    /* 00409bef: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00409bf1: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x409bf6u); f_0082bb60();
    /* 00409bf6: mov ebx, ebp */ r_ebx = r_ebp;
L_00409bf8:; BB(0x00409bf8);
    /* 00409bf8: push dword ptr [esp + 0x68] */ { u32 v = R32((u32)(r_esp+0x68u)); r_esp -= 4; W32(r_esp, v); }
    /* 00409bfc: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 00409c00: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x409c05u); f_0082b440();
    /* 00409c05: jmp 0x40999f */ goto L_0040999f;
L_00409c0a:; BB(0x00409c0a);
    /* 00409c0a: fld dword ptr [0x8f9978] */ FPUSH(R_F32((u32)(0x8f9978u)));
    /* 00409c10: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 00409c14: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00409c16: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 00409c18: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00409c1a: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00409c1e: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00409c22: fadd dword ptr [0x8f99d4] */ ST(0) = ST(0) + R_F32((u32)(0x8f99d4u));
    /* 00409c28: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00409c2c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00409c2e: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 00409c32: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 00409c3a: mov eax, 0x38e38e39 */ r_eax = 0x38e38e39u;
    /* 00409c3f: imul ebp */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebp; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00409c41: sar ebp, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebp = r;  } }
    /* 00409c44: mov ecx, edx */ r_ecx = r_edx;
    /* 00409c46: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 00409c4e: sar ecx, 3 */ { u32 c = (3u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00409c51: sub ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00409c53: mov dword ptr [esp + 0x18], 0 */ W32((u32)(r_esp+0x18u), 0x0u);
    /* 00409c5b: mov dword ptr [esp + 0x1c], 0 */ W32((u32)(r_esp+0x1cu), 0x0u);
    /* 00409c63: jmp 0x409be4 */ goto L_00409be4;
L_00409c68:; BB(0x00409c68);
    /* 00409c68: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x409c6du); f_004ac444();
    /* 00409c6d: add esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00409c70: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00409c71: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00409c72: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00409c73: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00409c74: ret  */ FN_RET(0x00409a3e); r_esp += 4; return;
}

void f_00409a45(void)
{
    FN_ENTER(0x00409a45);
    goto L_00409a45;
L_0040999f:; BB(0x0040999f);
    /* 0040999f: movsx ebp, byte ptr [esi] */ r_ebp = (u32)(i32)(i8)R8((u32)(r_esi));
    /* 004099a2: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004099a4: je 0x409c68 */ if (fZ) goto L_00409c68;
L_004099aa:; BB(0x004099aa);
    /* 004099aa: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 004099b0: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004099b3: cmp ebp, 0x23 */ {  u32 a = r_ebp; u32 b = 0x23u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004099b6: je 0x40999f */ if (fZ) goto L_0040999f;
L_004099b8:; BB(0x004099b8);
    /* 004099b8: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 004099bc: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004099bf: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004099c0: call 0x85824c */ r_esp -= 4; W32(r_esp, 0x4099c5u); f_0085824c();
    /* 004099c5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004099c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004099c8: je 0x4099d6 */ if (fZ) goto L_004099d6;
L_004099ca:; BB(0x004099ca);
    /* 004099ca: fld dword ptr [0x8f9980] */ FPUSH(R_F32((u32)(0x8f9980u)));
    /* 004099d0: fadd dword ptr [esp + 0x64] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x64u));
    /* 004099d4: jmp 0x4099da */ goto L_004099da;
L_004099d6:; BB(0x004099d6);
    /* 004099d6: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
L_004099da:; BB(0x004099da);
    /* 004099da: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 004099de: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004099df: call 0x858339 */ r_esp -= 4; W32(r_esp, 0x4099e4u); f_00858339();
    /* 004099e4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004099e5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004099e7: jne 0x409a6f */ if (!fZ) goto L_00409a6f;
L_004099ed:; BB(0x004099ed);
    /* 004099ed: add ebp, -0x26 */ {  u32 a = r_ebp; u32 b = 0xffffffdau; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004099f0: cmp ebp, 0x58 */ {  u32 a = r_ebp; u32 b = 0x58u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004099f3: ja 0x409a68 */ if ((!fC&&!fZ)) goto L_00409a68;
L_004099f9:; BB(0x004099f9);
    /* 004099f9: mov eax, dword ptr [ebp*4 + 0x8f9640] */ r_eax = R32((u32)(r_ebp*4+0x8f9640u));
    /* 00409a00: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_00409a45:; BB(0x00409a45);
    /* 00409a45: mov ebp, 0x22 */ r_ebp = 0x22u;
    /* 00409a4a: jmp 0x409aaf */ goto L_00409aaf;
L_00409a68:; BB(0x00409a68);
    /* 00409a68: mov ebp, 0x52 */ r_ebp = 0x52u;
    /* 00409a6d: jmp 0x409aaf */ goto L_00409aaf;
L_00409a6f:; BB(0x00409a6f);
    /* 00409a6f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00409a70: call 0x858212 */ r_esp -= 4; W32(r_esp, 0x409a75u); f_00858212();
    /* 00409a75: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00409a76: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409a78: je 0x409a85 */ if (fZ) goto L_00409a85;
L_00409a7a:; BB(0x00409a7a);
    /* 00409a7a: add ebp, -0x41 */ {  u32 a = r_ebp; u32 b = 0xffffffbfu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00409a7d: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 00409a83: jmp 0x409aaf */ goto L_00409aaf;
L_00409a85:; BB(0x00409a85);
    /* 00409a85: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00409a86: call 0x85824c */ r_esp -= 4; W32(r_esp, 0x409a8bu); f_0085824c();
    /* 00409a8b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00409a8c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409a8e: je 0x409a9b */ if (fZ) goto L_00409a9b;
L_00409a90:; BB(0x00409a90);
    /* 00409a90: add ebp, -0x3d */ {  u32 a = r_ebp; u32 b = 0xffffffc3u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00409a93: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 00409a99: jmp 0x409aaf */ goto L_00409aaf;
L_00409a9b:; BB(0x00409a9b);
    /* 00409a9b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00409a9c: call 0x858286 */ r_esp -= 4; W32(r_esp, 0x409aa1u); f_00858286();
    /* 00409aa1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00409aa2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409aa4: je 0x409aaf */ if (fZ) goto L_00409aaf;
L_00409aa6:; BB(0x00409aa6);
    /* 00409aa6: add ebp, 0xe */ {  u32 a = r_ebp; u32 b = 0xeu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00409aa9: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
L_00409aaf:; BB(0x00409aaf);
    /* 00409aaf: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00409ab2: cmp ebp, 0x52 */ {  u32 a = r_ebp; u32 b = 0x52u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409ab5: je 0x409c0a */ if (fZ) goto L_00409c0a;
L_00409abb:; BB(0x00409abb);
    /* 00409abb: fld dword ptr [0x8f9974] */ FPUSH(R_F32((u32)(0x8f9974u)));
    /* 00409ac1: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00409ac5: fld dword ptr [0x8f99d4] */ FPUSH(R_F32((u32)(0x8f99d4u)));
    /* 00409acb: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 00409acd: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00409acf: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00409ad3: mov eax, 0x38e38e39 */ r_eax = 0x38e38e39u;
    /* 00409ad8: imul ebp */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebp; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00409ada: mov eax, ebp */ r_eax = r_ebp;
    /* 00409adc: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00409adf: mov ecx, edx */ r_ecx = r_edx;
    /* 00409ae1: sar ecx, 3 */ { u32 c = (3u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00409ae4: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00409ae6: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 00409ae9: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409aeb: lea edi, [eax + eax*8] */ r_edi = (u32)(r_eax+r_eax*8);
    /* 00409aee: imul eax, ecx, -0x24 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xffffffdcu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00409af1: neg edi */ { u32 x = r_edi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00409af3: add edi, ebp */ {  u32 a = r_edi; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00409af5: add ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00409af7: mov eax, 0x2aaaaaab */ r_eax = 0x2aaaaaabu;
    /* 00409afc: imul ebp */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebp; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00409afe: mov eax, ebp */ r_eax = r_ebp;
    /* 00409b00: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00409b03: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00409b05: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 00409b08: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409b0a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409b0c: sub ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00409b0e: mov dword ptr [esp + 0x20], ebp */ W32((u32)(r_esp+0x20u), r_ebp);
    /* 00409b12: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 00409b16: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00409b18: fnstcw word ptr [esp + 0x28] */ W16((u32)(r_esp+0x28u), fcw);
    /* 00409b1c: movzx eax, word ptr [esp + 0x28] */ r_eax = (u32)R16((u32)(r_esp+0x28u));
    /* 00409b21: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00409b26: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 00409b2a: fldcw word ptr [esp + 0x30] */ fcw = R16((u32)(r_esp+0x30u));
    /* 00409b2e: fistp qword ptr [esp + 0x38] */ W64((u32)(r_esp+0x38u), (u64)fx_int64(ST(0))); FPOP();
    /* 00409b32: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 00409b36: mov eax, 0x2aaaaaab */ r_eax = 0x2aaaaaabu;
    /* 00409b3b: imul edi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_edi; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00409b3d: mov eax, edi */ r_eax = r_edi;
    /* 00409b3f: movzx ebp, byte ptr [esp + 0x38] */ r_ebp = (u32)R8((u32)(r_esp+0x38u));
    /* 00409b44: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00409b47: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00409b49: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
    /* 00409b4d: fild dword ptr [esp + 0x40] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x40u)));
    /* 00409b51: mov dword ptr [esp + 0x40], ebp */ W32((u32)(r_esp+0x40u), r_ebp);
    /* 00409b55: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00409b57: fild dword ptr [esp + 0x40] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x40u)));
    /* 00409b5b: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00409b5d: fnstcw word ptr [esp + 0x28] */ W16((u32)(r_esp+0x28u), fcw);
    /* 00409b61: movzx eax, word ptr [esp + 0x28] */ r_eax = (u32)R16((u32)(r_esp+0x28u));
    /* 00409b66: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00409b6b: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 00409b6f: fldcw word ptr [esp + 0x30] */ fcw = R16((u32)(r_esp+0x30u));
    /* 00409b73: fistp qword ptr [esp + 0x38] */ W64((u32)(r_esp+0x38u), (u64)fx_int64(ST(0))); FPOP();
    /* 00409b77: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 00409b7b: lea eax, [ecx + ecx*8] */ r_eax = (u32)(r_ecx+r_ecx*8);
    /* 00409b7e: fld dword ptr [0x8f997c] */ FPUSH(R_F32((u32)(0x8f997cu)));
    /* 00409b84: fld dword ptr [0x8f997c] */ FPUSH(R_F32((u32)(0x8f997cu)));
    /* 00409b8a: fdivr st(3) */ ST(0) = ST(3) / ST(0);
    /* 00409b8c: movzx edx, byte ptr [esp + 0x38] */ r_edx = (u32)R8((u32)(r_esp+0x38u));
    /* 00409b91: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00409b95: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409b97: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
    /* 00409b9b: fild dword ptr [esp + 0x40] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x40u)));
    /* 00409b9f: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409ba1: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409ba3: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409ba5: fld dword ptr [eax + edi*4 + 0x8f97c0] */ FPUSH(R_F32((u32)(r_eax+r_edi*4+0x8f97c0u)));
    /* 00409bac: fadd st(5), st(0) */ ST(5) = ST(5) + ST(0);
    /* 00409bae: fadd st(4), st(0) */ ST(4) = ST(4) + ST(0);
    /* 00409bb0: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00409bb2: fdiv st(4), st(0) */ ST(4) = ST(4) / ST(0);
    /* 00409bb4: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 00409bb6: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00409bba: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00409bbc: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 00409bc0: fld dword ptr [0x8f997c] */ FPUSH(R_F32((u32)(0x8f997cu)));
    /* 00409bc6: fdivr st(3) */ ST(0) = ST(3) / ST(0);
    /* 00409bc8: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 00409bcc: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00409bce: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00409bd0: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00409bd2: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 00409bd4: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 00409bd8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00409bda: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 00409bde: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00409be0: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
L_00409be4:; BB(0x00409be4);
    /* 00409be4: movzx ebp, cl */ r_ebp = (u32)(u8)r_ecx;
    /* 00409be7: cmp ebp, ebx */ {  u32 a = r_ebp; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409be9: je 0x409bf8 */ if (fZ) goto L_00409bf8;
L_00409beb:; BB(0x00409beb);
    /* 00409beb: mov edx, dword ptr [esp + 0x6c] */ r_edx = R32((u32)(r_esp+0x6cu));
    /* 00409bef: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00409bf1: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x409bf6u); f_0082bb60();
    /* 00409bf6: mov ebx, ebp */ r_ebx = r_ebp;
L_00409bf8:; BB(0x00409bf8);
    /* 00409bf8: push dword ptr [esp + 0x68] */ { u32 v = R32((u32)(r_esp+0x68u)); r_esp -= 4; W32(r_esp, v); }
    /* 00409bfc: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 00409c00: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x409c05u); f_0082b440();
    /* 00409c05: jmp 0x40999f */ goto L_0040999f;
L_00409c0a:; BB(0x00409c0a);
    /* 00409c0a: fld dword ptr [0x8f9978] */ FPUSH(R_F32((u32)(0x8f9978u)));
    /* 00409c10: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 00409c14: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00409c16: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 00409c18: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00409c1a: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00409c1e: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00409c22: fadd dword ptr [0x8f99d4] */ ST(0) = ST(0) + R_F32((u32)(0x8f99d4u));
    /* 00409c28: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00409c2c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00409c2e: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 00409c32: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 00409c3a: mov eax, 0x38e38e39 */ r_eax = 0x38e38e39u;
    /* 00409c3f: imul ebp */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebp; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00409c41: sar ebp, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebp = r;  } }
    /* 00409c44: mov ecx, edx */ r_ecx = r_edx;
    /* 00409c46: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 00409c4e: sar ecx, 3 */ { u32 c = (3u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00409c51: sub ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00409c53: mov dword ptr [esp + 0x18], 0 */ W32((u32)(r_esp+0x18u), 0x0u);
    /* 00409c5b: mov dword ptr [esp + 0x1c], 0 */ W32((u32)(r_esp+0x1cu), 0x0u);
    /* 00409c63: jmp 0x409be4 */ goto L_00409be4;
L_00409c68:; BB(0x00409c68);
    /* 00409c68: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x409c6du); f_004ac444();
    /* 00409c6d: add esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00409c70: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00409c71: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00409c72: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00409c73: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00409c74: ret  */ FN_RET(0x00409a45); r_esp += 4; return;
}

void f_00409a4c(void)
{
    FN_ENTER(0x00409a4c);
    goto L_00409a4c;
L_0040999f:; BB(0x0040999f);
    /* 0040999f: movsx ebp, byte ptr [esi] */ r_ebp = (u32)(i32)(i8)R8((u32)(r_esi));
    /* 004099a2: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004099a4: je 0x409c68 */ if (fZ) goto L_00409c68;
L_004099aa:; BB(0x004099aa);
    /* 004099aa: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 004099b0: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004099b3: cmp ebp, 0x23 */ {  u32 a = r_ebp; u32 b = 0x23u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004099b6: je 0x40999f */ if (fZ) goto L_0040999f;
L_004099b8:; BB(0x004099b8);
    /* 004099b8: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 004099bc: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004099bf: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004099c0: call 0x85824c */ r_esp -= 4; W32(r_esp, 0x4099c5u); f_0085824c();
    /* 004099c5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004099c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004099c8: je 0x4099d6 */ if (fZ) goto L_004099d6;
L_004099ca:; BB(0x004099ca);
    /* 004099ca: fld dword ptr [0x8f9980] */ FPUSH(R_F32((u32)(0x8f9980u)));
    /* 004099d0: fadd dword ptr [esp + 0x64] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x64u));
    /* 004099d4: jmp 0x4099da */ goto L_004099da;
L_004099d6:; BB(0x004099d6);
    /* 004099d6: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
L_004099da:; BB(0x004099da);
    /* 004099da: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 004099de: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004099df: call 0x858339 */ r_esp -= 4; W32(r_esp, 0x4099e4u); f_00858339();
    /* 004099e4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004099e5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004099e7: jne 0x409a6f */ if (!fZ) goto L_00409a6f;
L_004099ed:; BB(0x004099ed);
    /* 004099ed: add ebp, -0x26 */ {  u32 a = r_ebp; u32 b = 0xffffffdau; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004099f0: cmp ebp, 0x58 */ {  u32 a = r_ebp; u32 b = 0x58u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004099f3: ja 0x409a68 */ if ((!fC&&!fZ)) goto L_00409a68;
L_004099f9:; BB(0x004099f9);
    /* 004099f9: mov eax, dword ptr [ebp*4 + 0x8f9640] */ r_eax = R32((u32)(r_ebp*4+0x8f9640u));
    /* 00409a00: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_00409a4c:; BB(0x00409a4c);
    /* 00409a4c: mov ebp, 0x23 */ r_ebp = 0x23u;
    /* 00409a51: jmp 0x409aaf */ goto L_00409aaf;
L_00409a68:; BB(0x00409a68);
    /* 00409a68: mov ebp, 0x52 */ r_ebp = 0x52u;
    /* 00409a6d: jmp 0x409aaf */ goto L_00409aaf;
L_00409a6f:; BB(0x00409a6f);
    /* 00409a6f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00409a70: call 0x858212 */ r_esp -= 4; W32(r_esp, 0x409a75u); f_00858212();
    /* 00409a75: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00409a76: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409a78: je 0x409a85 */ if (fZ) goto L_00409a85;
L_00409a7a:; BB(0x00409a7a);
    /* 00409a7a: add ebp, -0x41 */ {  u32 a = r_ebp; u32 b = 0xffffffbfu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00409a7d: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 00409a83: jmp 0x409aaf */ goto L_00409aaf;
L_00409a85:; BB(0x00409a85);
    /* 00409a85: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00409a86: call 0x85824c */ r_esp -= 4; W32(r_esp, 0x409a8bu); f_0085824c();
    /* 00409a8b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00409a8c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409a8e: je 0x409a9b */ if (fZ) goto L_00409a9b;
L_00409a90:; BB(0x00409a90);
    /* 00409a90: add ebp, -0x3d */ {  u32 a = r_ebp; u32 b = 0xffffffc3u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00409a93: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 00409a99: jmp 0x409aaf */ goto L_00409aaf;
L_00409a9b:; BB(0x00409a9b);
    /* 00409a9b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00409a9c: call 0x858286 */ r_esp -= 4; W32(r_esp, 0x409aa1u); f_00858286();
    /* 00409aa1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00409aa2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409aa4: je 0x409aaf */ if (fZ) goto L_00409aaf;
L_00409aa6:; BB(0x00409aa6);
    /* 00409aa6: add ebp, 0xe */ {  u32 a = r_ebp; u32 b = 0xeu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00409aa9: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
L_00409aaf:; BB(0x00409aaf);
    /* 00409aaf: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00409ab2: cmp ebp, 0x52 */ {  u32 a = r_ebp; u32 b = 0x52u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409ab5: je 0x409c0a */ if (fZ) goto L_00409c0a;
L_00409abb:; BB(0x00409abb);
    /* 00409abb: fld dword ptr [0x8f9974] */ FPUSH(R_F32((u32)(0x8f9974u)));
    /* 00409ac1: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00409ac5: fld dword ptr [0x8f99d4] */ FPUSH(R_F32((u32)(0x8f99d4u)));
    /* 00409acb: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 00409acd: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00409acf: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00409ad3: mov eax, 0x38e38e39 */ r_eax = 0x38e38e39u;
    /* 00409ad8: imul ebp */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebp; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00409ada: mov eax, ebp */ r_eax = r_ebp;
    /* 00409adc: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00409adf: mov ecx, edx */ r_ecx = r_edx;
    /* 00409ae1: sar ecx, 3 */ { u32 c = (3u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00409ae4: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00409ae6: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 00409ae9: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409aeb: lea edi, [eax + eax*8] */ r_edi = (u32)(r_eax+r_eax*8);
    /* 00409aee: imul eax, ecx, -0x24 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xffffffdcu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00409af1: neg edi */ { u32 x = r_edi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00409af3: add edi, ebp */ {  u32 a = r_edi; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00409af5: add ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00409af7: mov eax, 0x2aaaaaab */ r_eax = 0x2aaaaaabu;
    /* 00409afc: imul ebp */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebp; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00409afe: mov eax, ebp */ r_eax = r_ebp;
    /* 00409b00: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00409b03: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00409b05: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 00409b08: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409b0a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409b0c: sub ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00409b0e: mov dword ptr [esp + 0x20], ebp */ W32((u32)(r_esp+0x20u), r_ebp);
    /* 00409b12: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 00409b16: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00409b18: fnstcw word ptr [esp + 0x28] */ W16((u32)(r_esp+0x28u), fcw);
    /* 00409b1c: movzx eax, word ptr [esp + 0x28] */ r_eax = (u32)R16((u32)(r_esp+0x28u));
    /* 00409b21: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00409b26: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 00409b2a: fldcw word ptr [esp + 0x30] */ fcw = R16((u32)(r_esp+0x30u));
    /* 00409b2e: fistp qword ptr [esp + 0x38] */ W64((u32)(r_esp+0x38u), (u64)fx_int64(ST(0))); FPOP();
    /* 00409b32: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 00409b36: mov eax, 0x2aaaaaab */ r_eax = 0x2aaaaaabu;
    /* 00409b3b: imul edi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_edi; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00409b3d: mov eax, edi */ r_eax = r_edi;
    /* 00409b3f: movzx ebp, byte ptr [esp + 0x38] */ r_ebp = (u32)R8((u32)(r_esp+0x38u));
    /* 00409b44: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00409b47: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00409b49: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
    /* 00409b4d: fild dword ptr [esp + 0x40] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x40u)));
    /* 00409b51: mov dword ptr [esp + 0x40], ebp */ W32((u32)(r_esp+0x40u), r_ebp);
    /* 00409b55: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00409b57: fild dword ptr [esp + 0x40] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x40u)));
    /* 00409b5b: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00409b5d: fnstcw word ptr [esp + 0x28] */ W16((u32)(r_esp+0x28u), fcw);
    /* 00409b61: movzx eax, word ptr [esp + 0x28] */ r_eax = (u32)R16((u32)(r_esp+0x28u));
    /* 00409b66: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00409b6b: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 00409b6f: fldcw word ptr [esp + 0x30] */ fcw = R16((u32)(r_esp+0x30u));
    /* 00409b73: fistp qword ptr [esp + 0x38] */ W64((u32)(r_esp+0x38u), (u64)fx_int64(ST(0))); FPOP();
    /* 00409b77: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 00409b7b: lea eax, [ecx + ecx*8] */ r_eax = (u32)(r_ecx+r_ecx*8);
    /* 00409b7e: fld dword ptr [0x8f997c] */ FPUSH(R_F32((u32)(0x8f997cu)));
    /* 00409b84: fld dword ptr [0x8f997c] */ FPUSH(R_F32((u32)(0x8f997cu)));
    /* 00409b8a: fdivr st(3) */ ST(0) = ST(3) / ST(0);
    /* 00409b8c: movzx edx, byte ptr [esp + 0x38] */ r_edx = (u32)R8((u32)(r_esp+0x38u));
    /* 00409b91: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00409b95: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409b97: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
    /* 00409b9b: fild dword ptr [esp + 0x40] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x40u)));
    /* 00409b9f: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409ba1: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409ba3: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409ba5: fld dword ptr [eax + edi*4 + 0x8f97c0] */ FPUSH(R_F32((u32)(r_eax+r_edi*4+0x8f97c0u)));
    /* 00409bac: fadd st(5), st(0) */ ST(5) = ST(5) + ST(0);
    /* 00409bae: fadd st(4), st(0) */ ST(4) = ST(4) + ST(0);
    /* 00409bb0: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00409bb2: fdiv st(4), st(0) */ ST(4) = ST(4) / ST(0);
    /* 00409bb4: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 00409bb6: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00409bba: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00409bbc: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 00409bc0: fld dword ptr [0x8f997c] */ FPUSH(R_F32((u32)(0x8f997cu)));
    /* 00409bc6: fdivr st(3) */ ST(0) = ST(3) / ST(0);
    /* 00409bc8: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 00409bcc: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00409bce: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00409bd0: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00409bd2: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 00409bd4: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 00409bd8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00409bda: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 00409bde: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00409be0: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
L_00409be4:; BB(0x00409be4);
    /* 00409be4: movzx ebp, cl */ r_ebp = (u32)(u8)r_ecx;
    /* 00409be7: cmp ebp, ebx */ {  u32 a = r_ebp; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409be9: je 0x409bf8 */ if (fZ) goto L_00409bf8;
L_00409beb:; BB(0x00409beb);
    /* 00409beb: mov edx, dword ptr [esp + 0x6c] */ r_edx = R32((u32)(r_esp+0x6cu));
    /* 00409bef: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00409bf1: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x409bf6u); f_0082bb60();
    /* 00409bf6: mov ebx, ebp */ r_ebx = r_ebp;
L_00409bf8:; BB(0x00409bf8);
    /* 00409bf8: push dword ptr [esp + 0x68] */ { u32 v = R32((u32)(r_esp+0x68u)); r_esp -= 4; W32(r_esp, v); }
    /* 00409bfc: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 00409c00: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x409c05u); f_0082b440();
    /* 00409c05: jmp 0x40999f */ goto L_0040999f;
L_00409c0a:; BB(0x00409c0a);
    /* 00409c0a: fld dword ptr [0x8f9978] */ FPUSH(R_F32((u32)(0x8f9978u)));
    /* 00409c10: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 00409c14: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00409c16: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 00409c18: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00409c1a: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00409c1e: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00409c22: fadd dword ptr [0x8f99d4] */ ST(0) = ST(0) + R_F32((u32)(0x8f99d4u));
    /* 00409c28: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00409c2c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00409c2e: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 00409c32: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 00409c3a: mov eax, 0x38e38e39 */ r_eax = 0x38e38e39u;
    /* 00409c3f: imul ebp */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebp; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00409c41: sar ebp, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebp = r;  } }
    /* 00409c44: mov ecx, edx */ r_ecx = r_edx;
    /* 00409c46: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 00409c4e: sar ecx, 3 */ { u32 c = (3u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00409c51: sub ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00409c53: mov dword ptr [esp + 0x18], 0 */ W32((u32)(r_esp+0x18u), 0x0u);
    /* 00409c5b: mov dword ptr [esp + 0x1c], 0 */ W32((u32)(r_esp+0x1cu), 0x0u);
    /* 00409c63: jmp 0x409be4 */ goto L_00409be4;
L_00409c68:; BB(0x00409c68);
    /* 00409c68: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x409c6du); f_004ac444();
    /* 00409c6d: add esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00409c70: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00409c71: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00409c72: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00409c73: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00409c74: ret  */ FN_RET(0x00409a4c); r_esp += 4; return;
}

void f_00409a53(void)
{
    FN_ENTER(0x00409a53);
    goto L_00409a53;
L_0040999f:; BB(0x0040999f);
    /* 0040999f: movsx ebp, byte ptr [esi] */ r_ebp = (u32)(i32)(i8)R8((u32)(r_esi));
    /* 004099a2: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004099a4: je 0x409c68 */ if (fZ) goto L_00409c68;
L_004099aa:; BB(0x004099aa);
    /* 004099aa: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 004099b0: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004099b3: cmp ebp, 0x23 */ {  u32 a = r_ebp; u32 b = 0x23u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004099b6: je 0x40999f */ if (fZ) goto L_0040999f;
L_004099b8:; BB(0x004099b8);
    /* 004099b8: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 004099bc: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004099bf: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004099c0: call 0x85824c */ r_esp -= 4; W32(r_esp, 0x4099c5u); f_0085824c();
    /* 004099c5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004099c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004099c8: je 0x4099d6 */ if (fZ) goto L_004099d6;
L_004099ca:; BB(0x004099ca);
    /* 004099ca: fld dword ptr [0x8f9980] */ FPUSH(R_F32((u32)(0x8f9980u)));
    /* 004099d0: fadd dword ptr [esp + 0x64] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x64u));
    /* 004099d4: jmp 0x4099da */ goto L_004099da;
L_004099d6:; BB(0x004099d6);
    /* 004099d6: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
L_004099da:; BB(0x004099da);
    /* 004099da: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 004099de: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004099df: call 0x858339 */ r_esp -= 4; W32(r_esp, 0x4099e4u); f_00858339();
    /* 004099e4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004099e5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004099e7: jne 0x409a6f */ if (!fZ) goto L_00409a6f;
L_004099ed:; BB(0x004099ed);
    /* 004099ed: add ebp, -0x26 */ {  u32 a = r_ebp; u32 b = 0xffffffdau; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004099f0: cmp ebp, 0x58 */ {  u32 a = r_ebp; u32 b = 0x58u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004099f3: ja 0x409a68 */ if ((!fC&&!fZ)) goto L_00409a68;
L_004099f9:; BB(0x004099f9);
    /* 004099f9: mov eax, dword ptr [ebp*4 + 0x8f9640] */ r_eax = R32((u32)(r_ebp*4+0x8f9640u));
    /* 00409a00: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_00409a53:; BB(0x00409a53);
    /* 00409a53: mov ebp, 0x1b */ r_ebp = 0x1bu;
    /* 00409a58: jmp 0x409aaf */ goto L_00409aaf;
L_00409a68:; BB(0x00409a68);
    /* 00409a68: mov ebp, 0x52 */ r_ebp = 0x52u;
    /* 00409a6d: jmp 0x409aaf */ goto L_00409aaf;
L_00409a6f:; BB(0x00409a6f);
    /* 00409a6f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00409a70: call 0x858212 */ r_esp -= 4; W32(r_esp, 0x409a75u); f_00858212();
    /* 00409a75: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00409a76: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409a78: je 0x409a85 */ if (fZ) goto L_00409a85;
L_00409a7a:; BB(0x00409a7a);
    /* 00409a7a: add ebp, -0x41 */ {  u32 a = r_ebp; u32 b = 0xffffffbfu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00409a7d: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 00409a83: jmp 0x409aaf */ goto L_00409aaf;
L_00409a85:; BB(0x00409a85);
    /* 00409a85: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00409a86: call 0x85824c */ r_esp -= 4; W32(r_esp, 0x409a8bu); f_0085824c();
    /* 00409a8b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00409a8c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409a8e: je 0x409a9b */ if (fZ) goto L_00409a9b;
L_00409a90:; BB(0x00409a90);
    /* 00409a90: add ebp, -0x3d */ {  u32 a = r_ebp; u32 b = 0xffffffc3u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00409a93: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 00409a99: jmp 0x409aaf */ goto L_00409aaf;
L_00409a9b:; BB(0x00409a9b);
    /* 00409a9b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00409a9c: call 0x858286 */ r_esp -= 4; W32(r_esp, 0x409aa1u); f_00858286();
    /* 00409aa1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00409aa2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409aa4: je 0x409aaf */ if (fZ) goto L_00409aaf;
L_00409aa6:; BB(0x00409aa6);
    /* 00409aa6: add ebp, 0xe */ {  u32 a = r_ebp; u32 b = 0xeu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00409aa9: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
L_00409aaf:; BB(0x00409aaf);
    /* 00409aaf: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00409ab2: cmp ebp, 0x52 */ {  u32 a = r_ebp; u32 b = 0x52u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409ab5: je 0x409c0a */ if (fZ) goto L_00409c0a;
L_00409abb:; BB(0x00409abb);
    /* 00409abb: fld dword ptr [0x8f9974] */ FPUSH(R_F32((u32)(0x8f9974u)));
    /* 00409ac1: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00409ac5: fld dword ptr [0x8f99d4] */ FPUSH(R_F32((u32)(0x8f99d4u)));
    /* 00409acb: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 00409acd: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00409acf: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00409ad3: mov eax, 0x38e38e39 */ r_eax = 0x38e38e39u;
    /* 00409ad8: imul ebp */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebp; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00409ada: mov eax, ebp */ r_eax = r_ebp;
    /* 00409adc: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00409adf: mov ecx, edx */ r_ecx = r_edx;
    /* 00409ae1: sar ecx, 3 */ { u32 c = (3u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00409ae4: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00409ae6: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 00409ae9: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409aeb: lea edi, [eax + eax*8] */ r_edi = (u32)(r_eax+r_eax*8);
    /* 00409aee: imul eax, ecx, -0x24 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xffffffdcu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00409af1: neg edi */ { u32 x = r_edi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00409af3: add edi, ebp */ {  u32 a = r_edi; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00409af5: add ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00409af7: mov eax, 0x2aaaaaab */ r_eax = 0x2aaaaaabu;
    /* 00409afc: imul ebp */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebp; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00409afe: mov eax, ebp */ r_eax = r_ebp;
    /* 00409b00: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00409b03: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00409b05: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 00409b08: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409b0a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409b0c: sub ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00409b0e: mov dword ptr [esp + 0x20], ebp */ W32((u32)(r_esp+0x20u), r_ebp);
    /* 00409b12: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 00409b16: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00409b18: fnstcw word ptr [esp + 0x28] */ W16((u32)(r_esp+0x28u), fcw);
    /* 00409b1c: movzx eax, word ptr [esp + 0x28] */ r_eax = (u32)R16((u32)(r_esp+0x28u));
    /* 00409b21: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00409b26: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 00409b2a: fldcw word ptr [esp + 0x30] */ fcw = R16((u32)(r_esp+0x30u));
    /* 00409b2e: fistp qword ptr [esp + 0x38] */ W64((u32)(r_esp+0x38u), (u64)fx_int64(ST(0))); FPOP();
    /* 00409b32: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 00409b36: mov eax, 0x2aaaaaab */ r_eax = 0x2aaaaaabu;
    /* 00409b3b: imul edi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_edi; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00409b3d: mov eax, edi */ r_eax = r_edi;
    /* 00409b3f: movzx ebp, byte ptr [esp + 0x38] */ r_ebp = (u32)R8((u32)(r_esp+0x38u));
    /* 00409b44: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00409b47: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00409b49: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
    /* 00409b4d: fild dword ptr [esp + 0x40] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x40u)));
    /* 00409b51: mov dword ptr [esp + 0x40], ebp */ W32((u32)(r_esp+0x40u), r_ebp);
    /* 00409b55: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00409b57: fild dword ptr [esp + 0x40] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x40u)));
    /* 00409b5b: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00409b5d: fnstcw word ptr [esp + 0x28] */ W16((u32)(r_esp+0x28u), fcw);
    /* 00409b61: movzx eax, word ptr [esp + 0x28] */ r_eax = (u32)R16((u32)(r_esp+0x28u));
    /* 00409b66: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00409b6b: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 00409b6f: fldcw word ptr [esp + 0x30] */ fcw = R16((u32)(r_esp+0x30u));
    /* 00409b73: fistp qword ptr [esp + 0x38] */ W64((u32)(r_esp+0x38u), (u64)fx_int64(ST(0))); FPOP();
    /* 00409b77: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 00409b7b: lea eax, [ecx + ecx*8] */ r_eax = (u32)(r_ecx+r_ecx*8);
    /* 00409b7e: fld dword ptr [0x8f997c] */ FPUSH(R_F32((u32)(0x8f997cu)));
    /* 00409b84: fld dword ptr [0x8f997c] */ FPUSH(R_F32((u32)(0x8f997cu)));
    /* 00409b8a: fdivr st(3) */ ST(0) = ST(3) / ST(0);
    /* 00409b8c: movzx edx, byte ptr [esp + 0x38] */ r_edx = (u32)R8((u32)(r_esp+0x38u));
    /* 00409b91: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00409b95: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409b97: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
    /* 00409b9b: fild dword ptr [esp + 0x40] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x40u)));
    /* 00409b9f: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409ba1: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409ba3: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409ba5: fld dword ptr [eax + edi*4 + 0x8f97c0] */ FPUSH(R_F32((u32)(r_eax+r_edi*4+0x8f97c0u)));
    /* 00409bac: fadd st(5), st(0) */ ST(5) = ST(5) + ST(0);
    /* 00409bae: fadd st(4), st(0) */ ST(4) = ST(4) + ST(0);
    /* 00409bb0: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00409bb2: fdiv st(4), st(0) */ ST(4) = ST(4) / ST(0);
    /* 00409bb4: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 00409bb6: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00409bba: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00409bbc: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 00409bc0: fld dword ptr [0x8f997c] */ FPUSH(R_F32((u32)(0x8f997cu)));
    /* 00409bc6: fdivr st(3) */ ST(0) = ST(3) / ST(0);
    /* 00409bc8: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 00409bcc: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00409bce: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00409bd0: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00409bd2: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 00409bd4: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 00409bd8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00409bda: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 00409bde: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00409be0: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
L_00409be4:; BB(0x00409be4);
    /* 00409be4: movzx ebp, cl */ r_ebp = (u32)(u8)r_ecx;
    /* 00409be7: cmp ebp, ebx */ {  u32 a = r_ebp; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409be9: je 0x409bf8 */ if (fZ) goto L_00409bf8;
L_00409beb:; BB(0x00409beb);
    /* 00409beb: mov edx, dword ptr [esp + 0x6c] */ r_edx = R32((u32)(r_esp+0x6cu));
    /* 00409bef: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00409bf1: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x409bf6u); f_0082bb60();
    /* 00409bf6: mov ebx, ebp */ r_ebx = r_ebp;
L_00409bf8:; BB(0x00409bf8);
    /* 00409bf8: push dword ptr [esp + 0x68] */ { u32 v = R32((u32)(r_esp+0x68u)); r_esp -= 4; W32(r_esp, v); }
    /* 00409bfc: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 00409c00: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x409c05u); f_0082b440();
    /* 00409c05: jmp 0x40999f */ goto L_0040999f;
L_00409c0a:; BB(0x00409c0a);
    /* 00409c0a: fld dword ptr [0x8f9978] */ FPUSH(R_F32((u32)(0x8f9978u)));
    /* 00409c10: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 00409c14: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00409c16: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 00409c18: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00409c1a: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00409c1e: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00409c22: fadd dword ptr [0x8f99d4] */ ST(0) = ST(0) + R_F32((u32)(0x8f99d4u));
    /* 00409c28: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00409c2c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00409c2e: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 00409c32: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 00409c3a: mov eax, 0x38e38e39 */ r_eax = 0x38e38e39u;
    /* 00409c3f: imul ebp */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebp; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00409c41: sar ebp, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebp = r;  } }
    /* 00409c44: mov ecx, edx */ r_ecx = r_edx;
    /* 00409c46: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 00409c4e: sar ecx, 3 */ { u32 c = (3u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00409c51: sub ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00409c53: mov dword ptr [esp + 0x18], 0 */ W32((u32)(r_esp+0x18u), 0x0u);
    /* 00409c5b: mov dword ptr [esp + 0x1c], 0 */ W32((u32)(r_esp+0x1cu), 0x0u);
    /* 00409c63: jmp 0x409be4 */ goto L_00409be4;
L_00409c68:; BB(0x00409c68);
    /* 00409c68: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x409c6du); f_004ac444();
    /* 00409c6d: add esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00409c70: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00409c71: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00409c72: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00409c73: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00409c74: ret  */ FN_RET(0x00409a53); r_esp += 4; return;
}

void f_00409a5a(void)
{
    FN_ENTER(0x00409a5a);
    goto L_00409a5a;
L_0040999f:; BB(0x0040999f);
    /* 0040999f: movsx ebp, byte ptr [esi] */ r_ebp = (u32)(i32)(i8)R8((u32)(r_esi));
    /* 004099a2: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004099a4: je 0x409c68 */ if (fZ) goto L_00409c68;
L_004099aa:; BB(0x004099aa);
    /* 004099aa: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 004099b0: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004099b3: cmp ebp, 0x23 */ {  u32 a = r_ebp; u32 b = 0x23u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004099b6: je 0x40999f */ if (fZ) goto L_0040999f;
L_004099b8:; BB(0x004099b8);
    /* 004099b8: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 004099bc: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004099bf: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004099c0: call 0x85824c */ r_esp -= 4; W32(r_esp, 0x4099c5u); f_0085824c();
    /* 004099c5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004099c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004099c8: je 0x4099d6 */ if (fZ) goto L_004099d6;
L_004099ca:; BB(0x004099ca);
    /* 004099ca: fld dword ptr [0x8f9980] */ FPUSH(R_F32((u32)(0x8f9980u)));
    /* 004099d0: fadd dword ptr [esp + 0x64] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x64u));
    /* 004099d4: jmp 0x4099da */ goto L_004099da;
L_004099d6:; BB(0x004099d6);
    /* 004099d6: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
L_004099da:; BB(0x004099da);
    /* 004099da: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 004099de: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004099df: call 0x858339 */ r_esp -= 4; W32(r_esp, 0x4099e4u); f_00858339();
    /* 004099e4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004099e5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004099e7: jne 0x409a6f */ if (!fZ) goto L_00409a6f;
L_004099ed:; BB(0x004099ed);
    /* 004099ed: add ebp, -0x26 */ {  u32 a = r_ebp; u32 b = 0xffffffdau; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004099f0: cmp ebp, 0x58 */ {  u32 a = r_ebp; u32 b = 0x58u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004099f3: ja 0x409a68 */ if ((!fC&&!fZ)) goto L_00409a68;
L_004099f9:; BB(0x004099f9);
    /* 004099f9: mov eax, dword ptr [ebp*4 + 0x8f9640] */ r_eax = R32((u32)(r_ebp*4+0x8f9640u));
    /* 00409a00: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_00409a5a:; BB(0x00409a5a);
    /* 00409a5a: mov ebp, 0x1a */ r_ebp = 0x1au;
    /* 00409a5f: jmp 0x409aaf */ goto L_00409aaf;
L_00409a68:; BB(0x00409a68);
    /* 00409a68: mov ebp, 0x52 */ r_ebp = 0x52u;
    /* 00409a6d: jmp 0x409aaf */ goto L_00409aaf;
L_00409a6f:; BB(0x00409a6f);
    /* 00409a6f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00409a70: call 0x858212 */ r_esp -= 4; W32(r_esp, 0x409a75u); f_00858212();
    /* 00409a75: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00409a76: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409a78: je 0x409a85 */ if (fZ) goto L_00409a85;
L_00409a7a:; BB(0x00409a7a);
    /* 00409a7a: add ebp, -0x41 */ {  u32 a = r_ebp; u32 b = 0xffffffbfu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00409a7d: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 00409a83: jmp 0x409aaf */ goto L_00409aaf;
L_00409a85:; BB(0x00409a85);
    /* 00409a85: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00409a86: call 0x85824c */ r_esp -= 4; W32(r_esp, 0x409a8bu); f_0085824c();
    /* 00409a8b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00409a8c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409a8e: je 0x409a9b */ if (fZ) goto L_00409a9b;
L_00409a90:; BB(0x00409a90);
    /* 00409a90: add ebp, -0x3d */ {  u32 a = r_ebp; u32 b = 0xffffffc3u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00409a93: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 00409a99: jmp 0x409aaf */ goto L_00409aaf;
L_00409a9b:; BB(0x00409a9b);
    /* 00409a9b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00409a9c: call 0x858286 */ r_esp -= 4; W32(r_esp, 0x409aa1u); f_00858286();
    /* 00409aa1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00409aa2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409aa4: je 0x409aaf */ if (fZ) goto L_00409aaf;
L_00409aa6:; BB(0x00409aa6);
    /* 00409aa6: add ebp, 0xe */ {  u32 a = r_ebp; u32 b = 0xeu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00409aa9: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
L_00409aaf:; BB(0x00409aaf);
    /* 00409aaf: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00409ab2: cmp ebp, 0x52 */ {  u32 a = r_ebp; u32 b = 0x52u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409ab5: je 0x409c0a */ if (fZ) goto L_00409c0a;
L_00409abb:; BB(0x00409abb);
    /* 00409abb: fld dword ptr [0x8f9974] */ FPUSH(R_F32((u32)(0x8f9974u)));
    /* 00409ac1: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00409ac5: fld dword ptr [0x8f99d4] */ FPUSH(R_F32((u32)(0x8f99d4u)));
    /* 00409acb: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 00409acd: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00409acf: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00409ad3: mov eax, 0x38e38e39 */ r_eax = 0x38e38e39u;
    /* 00409ad8: imul ebp */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebp; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00409ada: mov eax, ebp */ r_eax = r_ebp;
    /* 00409adc: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00409adf: mov ecx, edx */ r_ecx = r_edx;
    /* 00409ae1: sar ecx, 3 */ { u32 c = (3u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00409ae4: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00409ae6: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 00409ae9: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409aeb: lea edi, [eax + eax*8] */ r_edi = (u32)(r_eax+r_eax*8);
    /* 00409aee: imul eax, ecx, -0x24 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xffffffdcu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00409af1: neg edi */ { u32 x = r_edi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00409af3: add edi, ebp */ {  u32 a = r_edi; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00409af5: add ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00409af7: mov eax, 0x2aaaaaab */ r_eax = 0x2aaaaaabu;
    /* 00409afc: imul ebp */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebp; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00409afe: mov eax, ebp */ r_eax = r_ebp;
    /* 00409b00: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00409b03: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00409b05: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 00409b08: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409b0a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409b0c: sub ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00409b0e: mov dword ptr [esp + 0x20], ebp */ W32((u32)(r_esp+0x20u), r_ebp);
    /* 00409b12: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 00409b16: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00409b18: fnstcw word ptr [esp + 0x28] */ W16((u32)(r_esp+0x28u), fcw);
    /* 00409b1c: movzx eax, word ptr [esp + 0x28] */ r_eax = (u32)R16((u32)(r_esp+0x28u));
    /* 00409b21: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00409b26: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 00409b2a: fldcw word ptr [esp + 0x30] */ fcw = R16((u32)(r_esp+0x30u));
    /* 00409b2e: fistp qword ptr [esp + 0x38] */ W64((u32)(r_esp+0x38u), (u64)fx_int64(ST(0))); FPOP();
    /* 00409b32: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 00409b36: mov eax, 0x2aaaaaab */ r_eax = 0x2aaaaaabu;
    /* 00409b3b: imul edi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_edi; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00409b3d: mov eax, edi */ r_eax = r_edi;
    /* 00409b3f: movzx ebp, byte ptr [esp + 0x38] */ r_ebp = (u32)R8((u32)(r_esp+0x38u));
    /* 00409b44: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00409b47: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00409b49: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
    /* 00409b4d: fild dword ptr [esp + 0x40] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x40u)));
    /* 00409b51: mov dword ptr [esp + 0x40], ebp */ W32((u32)(r_esp+0x40u), r_ebp);
    /* 00409b55: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00409b57: fild dword ptr [esp + 0x40] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x40u)));
    /* 00409b5b: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00409b5d: fnstcw word ptr [esp + 0x28] */ W16((u32)(r_esp+0x28u), fcw);
    /* 00409b61: movzx eax, word ptr [esp + 0x28] */ r_eax = (u32)R16((u32)(r_esp+0x28u));
    /* 00409b66: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00409b6b: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 00409b6f: fldcw word ptr [esp + 0x30] */ fcw = R16((u32)(r_esp+0x30u));
    /* 00409b73: fistp qword ptr [esp + 0x38] */ W64((u32)(r_esp+0x38u), (u64)fx_int64(ST(0))); FPOP();
    /* 00409b77: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 00409b7b: lea eax, [ecx + ecx*8] */ r_eax = (u32)(r_ecx+r_ecx*8);
    /* 00409b7e: fld dword ptr [0x8f997c] */ FPUSH(R_F32((u32)(0x8f997cu)));
    /* 00409b84: fld dword ptr [0x8f997c] */ FPUSH(R_F32((u32)(0x8f997cu)));
    /* 00409b8a: fdivr st(3) */ ST(0) = ST(3) / ST(0);
    /* 00409b8c: movzx edx, byte ptr [esp + 0x38] */ r_edx = (u32)R8((u32)(r_esp+0x38u));
    /* 00409b91: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00409b95: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409b97: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
    /* 00409b9b: fild dword ptr [esp + 0x40] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x40u)));
    /* 00409b9f: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409ba1: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409ba3: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409ba5: fld dword ptr [eax + edi*4 + 0x8f97c0] */ FPUSH(R_F32((u32)(r_eax+r_edi*4+0x8f97c0u)));
    /* 00409bac: fadd st(5), st(0) */ ST(5) = ST(5) + ST(0);
    /* 00409bae: fadd st(4), st(0) */ ST(4) = ST(4) + ST(0);
    /* 00409bb0: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00409bb2: fdiv st(4), st(0) */ ST(4) = ST(4) / ST(0);
    /* 00409bb4: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 00409bb6: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00409bba: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00409bbc: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 00409bc0: fld dword ptr [0x8f997c] */ FPUSH(R_F32((u32)(0x8f997cu)));
    /* 00409bc6: fdivr st(3) */ ST(0) = ST(3) / ST(0);
    /* 00409bc8: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 00409bcc: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00409bce: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00409bd0: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00409bd2: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 00409bd4: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 00409bd8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00409bda: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 00409bde: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00409be0: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
L_00409be4:; BB(0x00409be4);
    /* 00409be4: movzx ebp, cl */ r_ebp = (u32)(u8)r_ecx;
    /* 00409be7: cmp ebp, ebx */ {  u32 a = r_ebp; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409be9: je 0x409bf8 */ if (fZ) goto L_00409bf8;
L_00409beb:; BB(0x00409beb);
    /* 00409beb: mov edx, dword ptr [esp + 0x6c] */ r_edx = R32((u32)(r_esp+0x6cu));
    /* 00409bef: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00409bf1: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x409bf6u); f_0082bb60();
    /* 00409bf6: mov ebx, ebp */ r_ebx = r_ebp;
L_00409bf8:; BB(0x00409bf8);
    /* 00409bf8: push dword ptr [esp + 0x68] */ { u32 v = R32((u32)(r_esp+0x68u)); r_esp -= 4; W32(r_esp, v); }
    /* 00409bfc: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 00409c00: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x409c05u); f_0082b440();
    /* 00409c05: jmp 0x40999f */ goto L_0040999f;
L_00409c0a:; BB(0x00409c0a);
    /* 00409c0a: fld dword ptr [0x8f9978] */ FPUSH(R_F32((u32)(0x8f9978u)));
    /* 00409c10: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 00409c14: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00409c16: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 00409c18: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00409c1a: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00409c1e: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00409c22: fadd dword ptr [0x8f99d4] */ ST(0) = ST(0) + R_F32((u32)(0x8f99d4u));
    /* 00409c28: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00409c2c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00409c2e: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 00409c32: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 00409c3a: mov eax, 0x38e38e39 */ r_eax = 0x38e38e39u;
    /* 00409c3f: imul ebp */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebp; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00409c41: sar ebp, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebp = r;  } }
    /* 00409c44: mov ecx, edx */ r_ecx = r_edx;
    /* 00409c46: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 00409c4e: sar ecx, 3 */ { u32 c = (3u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00409c51: sub ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00409c53: mov dword ptr [esp + 0x18], 0 */ W32((u32)(r_esp+0x18u), 0x0u);
    /* 00409c5b: mov dword ptr [esp + 0x1c], 0 */ W32((u32)(r_esp+0x1cu), 0x0u);
    /* 00409c63: jmp 0x409be4 */ goto L_00409be4;
L_00409c68:; BB(0x00409c68);
    /* 00409c68: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x409c6du); f_004ac444();
    /* 00409c6d: add esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00409c70: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00409c71: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00409c72: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00409c73: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00409c74: ret  */ FN_RET(0x00409a5a); r_esp += 4; return;
}

void f_00409a61(void)
{
    FN_ENTER(0x00409a61);
    goto L_00409a61;
L_0040999f:; BB(0x0040999f);
    /* 0040999f: movsx ebp, byte ptr [esi] */ r_ebp = (u32)(i32)(i8)R8((u32)(r_esi));
    /* 004099a2: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004099a4: je 0x409c68 */ if (fZ) goto L_00409c68;
L_004099aa:; BB(0x004099aa);
    /* 004099aa: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 004099b0: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004099b3: cmp ebp, 0x23 */ {  u32 a = r_ebp; u32 b = 0x23u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004099b6: je 0x40999f */ if (fZ) goto L_0040999f;
L_004099b8:; BB(0x004099b8);
    /* 004099b8: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 004099bc: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004099bf: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004099c0: call 0x85824c */ r_esp -= 4; W32(r_esp, 0x4099c5u); f_0085824c();
    /* 004099c5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004099c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004099c8: je 0x4099d6 */ if (fZ) goto L_004099d6;
L_004099ca:; BB(0x004099ca);
    /* 004099ca: fld dword ptr [0x8f9980] */ FPUSH(R_F32((u32)(0x8f9980u)));
    /* 004099d0: fadd dword ptr [esp + 0x64] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x64u));
    /* 004099d4: jmp 0x4099da */ goto L_004099da;
L_004099d6:; BB(0x004099d6);
    /* 004099d6: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
L_004099da:; BB(0x004099da);
    /* 004099da: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 004099de: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004099df: call 0x858339 */ r_esp -= 4; W32(r_esp, 0x4099e4u); f_00858339();
    /* 004099e4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004099e5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004099e7: jne 0x409a6f */ if (!fZ) goto L_00409a6f;
L_004099ed:; BB(0x004099ed);
    /* 004099ed: add ebp, -0x26 */ {  u32 a = r_ebp; u32 b = 0xffffffdau; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004099f0: cmp ebp, 0x58 */ {  u32 a = r_ebp; u32 b = 0x58u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004099f3: ja 0x409a68 */ if ((!fC&&!fZ)) goto L_00409a68;
L_004099f9:; BB(0x004099f9);
    /* 004099f9: mov eax, dword ptr [ebp*4 + 0x8f9640] */ r_eax = R32((u32)(r_ebp*4+0x8f9640u));
    /* 00409a00: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_00409a61:; BB(0x00409a61);
    /* 00409a61: mov ebp, 0x1f */ r_ebp = 0x1fu;
    /* 00409a66: jmp 0x409aaf */ goto L_00409aaf;
L_00409a68:; BB(0x00409a68);
    /* 00409a68: mov ebp, 0x52 */ r_ebp = 0x52u;
    /* 00409a6d: jmp 0x409aaf */ goto L_00409aaf;
L_00409a6f:; BB(0x00409a6f);
    /* 00409a6f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00409a70: call 0x858212 */ r_esp -= 4; W32(r_esp, 0x409a75u); f_00858212();
    /* 00409a75: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00409a76: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409a78: je 0x409a85 */ if (fZ) goto L_00409a85;
L_00409a7a:; BB(0x00409a7a);
    /* 00409a7a: add ebp, -0x41 */ {  u32 a = r_ebp; u32 b = 0xffffffbfu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00409a7d: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 00409a83: jmp 0x409aaf */ goto L_00409aaf;
L_00409a85:; BB(0x00409a85);
    /* 00409a85: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00409a86: call 0x85824c */ r_esp -= 4; W32(r_esp, 0x409a8bu); f_0085824c();
    /* 00409a8b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00409a8c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409a8e: je 0x409a9b */ if (fZ) goto L_00409a9b;
L_00409a90:; BB(0x00409a90);
    /* 00409a90: add ebp, -0x3d */ {  u32 a = r_ebp; u32 b = 0xffffffc3u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00409a93: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 00409a99: jmp 0x409aaf */ goto L_00409aaf;
L_00409a9b:; BB(0x00409a9b);
    /* 00409a9b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00409a9c: call 0x858286 */ r_esp -= 4; W32(r_esp, 0x409aa1u); f_00858286();
    /* 00409aa1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00409aa2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409aa4: je 0x409aaf */ if (fZ) goto L_00409aaf;
L_00409aa6:; BB(0x00409aa6);
    /* 00409aa6: add ebp, 0xe */ {  u32 a = r_ebp; u32 b = 0xeu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00409aa9: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
L_00409aaf:; BB(0x00409aaf);
    /* 00409aaf: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00409ab2: cmp ebp, 0x52 */ {  u32 a = r_ebp; u32 b = 0x52u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409ab5: je 0x409c0a */ if (fZ) goto L_00409c0a;
L_00409abb:; BB(0x00409abb);
    /* 00409abb: fld dword ptr [0x8f9974] */ FPUSH(R_F32((u32)(0x8f9974u)));
    /* 00409ac1: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00409ac5: fld dword ptr [0x8f99d4] */ FPUSH(R_F32((u32)(0x8f99d4u)));
    /* 00409acb: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 00409acd: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00409acf: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00409ad3: mov eax, 0x38e38e39 */ r_eax = 0x38e38e39u;
    /* 00409ad8: imul ebp */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebp; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00409ada: mov eax, ebp */ r_eax = r_ebp;
    /* 00409adc: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00409adf: mov ecx, edx */ r_ecx = r_edx;
    /* 00409ae1: sar ecx, 3 */ { u32 c = (3u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00409ae4: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00409ae6: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 00409ae9: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409aeb: lea edi, [eax + eax*8] */ r_edi = (u32)(r_eax+r_eax*8);
    /* 00409aee: imul eax, ecx, -0x24 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xffffffdcu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00409af1: neg edi */ { u32 x = r_edi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00409af3: add edi, ebp */ {  u32 a = r_edi; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00409af5: add ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00409af7: mov eax, 0x2aaaaaab */ r_eax = 0x2aaaaaabu;
    /* 00409afc: imul ebp */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebp; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00409afe: mov eax, ebp */ r_eax = r_ebp;
    /* 00409b00: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00409b03: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00409b05: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 00409b08: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409b0a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409b0c: sub ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00409b0e: mov dword ptr [esp + 0x20], ebp */ W32((u32)(r_esp+0x20u), r_ebp);
    /* 00409b12: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 00409b16: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00409b18: fnstcw word ptr [esp + 0x28] */ W16((u32)(r_esp+0x28u), fcw);
    /* 00409b1c: movzx eax, word ptr [esp + 0x28] */ r_eax = (u32)R16((u32)(r_esp+0x28u));
    /* 00409b21: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00409b26: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 00409b2a: fldcw word ptr [esp + 0x30] */ fcw = R16((u32)(r_esp+0x30u));
    /* 00409b2e: fistp qword ptr [esp + 0x38] */ W64((u32)(r_esp+0x38u), (u64)fx_int64(ST(0))); FPOP();
    /* 00409b32: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 00409b36: mov eax, 0x2aaaaaab */ r_eax = 0x2aaaaaabu;
    /* 00409b3b: imul edi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_edi; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00409b3d: mov eax, edi */ r_eax = r_edi;
    /* 00409b3f: movzx ebp, byte ptr [esp + 0x38] */ r_ebp = (u32)R8((u32)(r_esp+0x38u));
    /* 00409b44: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00409b47: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00409b49: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
    /* 00409b4d: fild dword ptr [esp + 0x40] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x40u)));
    /* 00409b51: mov dword ptr [esp + 0x40], ebp */ W32((u32)(r_esp+0x40u), r_ebp);
    /* 00409b55: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00409b57: fild dword ptr [esp + 0x40] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x40u)));
    /* 00409b5b: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00409b5d: fnstcw word ptr [esp + 0x28] */ W16((u32)(r_esp+0x28u), fcw);
    /* 00409b61: movzx eax, word ptr [esp + 0x28] */ r_eax = (u32)R16((u32)(r_esp+0x28u));
    /* 00409b66: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00409b6b: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 00409b6f: fldcw word ptr [esp + 0x30] */ fcw = R16((u32)(r_esp+0x30u));
    /* 00409b73: fistp qword ptr [esp + 0x38] */ W64((u32)(r_esp+0x38u), (u64)fx_int64(ST(0))); FPOP();
    /* 00409b77: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 00409b7b: lea eax, [ecx + ecx*8] */ r_eax = (u32)(r_ecx+r_ecx*8);
    /* 00409b7e: fld dword ptr [0x8f997c] */ FPUSH(R_F32((u32)(0x8f997cu)));
    /* 00409b84: fld dword ptr [0x8f997c] */ FPUSH(R_F32((u32)(0x8f997cu)));
    /* 00409b8a: fdivr st(3) */ ST(0) = ST(3) / ST(0);
    /* 00409b8c: movzx edx, byte ptr [esp + 0x38] */ r_edx = (u32)R8((u32)(r_esp+0x38u));
    /* 00409b91: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00409b95: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409b97: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
    /* 00409b9b: fild dword ptr [esp + 0x40] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x40u)));
    /* 00409b9f: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409ba1: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409ba3: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409ba5: fld dword ptr [eax + edi*4 + 0x8f97c0] */ FPUSH(R_F32((u32)(r_eax+r_edi*4+0x8f97c0u)));
    /* 00409bac: fadd st(5), st(0) */ ST(5) = ST(5) + ST(0);
    /* 00409bae: fadd st(4), st(0) */ ST(4) = ST(4) + ST(0);
    /* 00409bb0: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00409bb2: fdiv st(4), st(0) */ ST(4) = ST(4) / ST(0);
    /* 00409bb4: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 00409bb6: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00409bba: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00409bbc: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 00409bc0: fld dword ptr [0x8f997c] */ FPUSH(R_F32((u32)(0x8f997cu)));
    /* 00409bc6: fdivr st(3) */ ST(0) = ST(3) / ST(0);
    /* 00409bc8: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 00409bcc: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00409bce: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00409bd0: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00409bd2: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 00409bd4: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 00409bd8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00409bda: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 00409bde: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00409be0: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
L_00409be4:; BB(0x00409be4);
    /* 00409be4: movzx ebp, cl */ r_ebp = (u32)(u8)r_ecx;
    /* 00409be7: cmp ebp, ebx */ {  u32 a = r_ebp; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409be9: je 0x409bf8 */ if (fZ) goto L_00409bf8;
L_00409beb:; BB(0x00409beb);
    /* 00409beb: mov edx, dword ptr [esp + 0x6c] */ r_edx = R32((u32)(r_esp+0x6cu));
    /* 00409bef: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00409bf1: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x409bf6u); f_0082bb60();
    /* 00409bf6: mov ebx, ebp */ r_ebx = r_ebp;
L_00409bf8:; BB(0x00409bf8);
    /* 00409bf8: push dword ptr [esp + 0x68] */ { u32 v = R32((u32)(r_esp+0x68u)); r_esp -= 4; W32(r_esp, v); }
    /* 00409bfc: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 00409c00: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x409c05u); f_0082b440();
    /* 00409c05: jmp 0x40999f */ goto L_0040999f;
L_00409c0a:; BB(0x00409c0a);
    /* 00409c0a: fld dword ptr [0x8f9978] */ FPUSH(R_F32((u32)(0x8f9978u)));
    /* 00409c10: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 00409c14: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00409c16: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 00409c18: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00409c1a: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00409c1e: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00409c22: fadd dword ptr [0x8f99d4] */ ST(0) = ST(0) + R_F32((u32)(0x8f99d4u));
    /* 00409c28: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00409c2c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00409c2e: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 00409c32: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 00409c3a: mov eax, 0x38e38e39 */ r_eax = 0x38e38e39u;
    /* 00409c3f: imul ebp */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebp; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00409c41: sar ebp, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebp = r;  } }
    /* 00409c44: mov ecx, edx */ r_ecx = r_edx;
    /* 00409c46: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 00409c4e: sar ecx, 3 */ { u32 c = (3u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00409c51: sub ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00409c53: mov dword ptr [esp + 0x18], 0 */ W32((u32)(r_esp+0x18u), 0x0u);
    /* 00409c5b: mov dword ptr [esp + 0x1c], 0 */ W32((u32)(r_esp+0x1cu), 0x0u);
    /* 00409c63: jmp 0x409be4 */ goto L_00409be4;
L_00409c68:; BB(0x00409c68);
    /* 00409c68: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x409c6du); f_004ac444();
    /* 00409c6d: add esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00409c70: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00409c71: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00409c72: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00409c73: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00409c74: ret  */ FN_RET(0x00409a61); r_esp += 4; return;
}

void f_00409a68(void)
{
    FN_ENTER(0x00409a68);
    goto L_00409a68;
L_0040999f:; BB(0x0040999f);
    /* 0040999f: movsx ebp, byte ptr [esi] */ r_ebp = (u32)(i32)(i8)R8((u32)(r_esi));
    /* 004099a2: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004099a4: je 0x409c68 */ if (fZ) goto L_00409c68;
L_004099aa:; BB(0x004099aa);
    /* 004099aa: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 004099b0: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004099b3: cmp ebp, 0x23 */ {  u32 a = r_ebp; u32 b = 0x23u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004099b6: je 0x40999f */ if (fZ) goto L_0040999f;
L_004099b8:; BB(0x004099b8);
    /* 004099b8: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 004099bc: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004099bf: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004099c0: call 0x85824c */ r_esp -= 4; W32(r_esp, 0x4099c5u); f_0085824c();
    /* 004099c5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004099c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004099c8: je 0x4099d6 */ if (fZ) goto L_004099d6;
L_004099ca:; BB(0x004099ca);
    /* 004099ca: fld dword ptr [0x8f9980] */ FPUSH(R_F32((u32)(0x8f9980u)));
    /* 004099d0: fadd dword ptr [esp + 0x64] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x64u));
    /* 004099d4: jmp 0x4099da */ goto L_004099da;
L_004099d6:; BB(0x004099d6);
    /* 004099d6: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
L_004099da:; BB(0x004099da);
    /* 004099da: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 004099de: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004099df: call 0x858339 */ r_esp -= 4; W32(r_esp, 0x4099e4u); f_00858339();
    /* 004099e4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004099e5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004099e7: jne 0x409a6f */ if (!fZ) goto L_00409a6f;
L_004099ed:; BB(0x004099ed);
    /* 004099ed: add ebp, -0x26 */ {  u32 a = r_ebp; u32 b = 0xffffffdau; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004099f0: cmp ebp, 0x58 */ {  u32 a = r_ebp; u32 b = 0x58u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004099f3: ja 0x409a68 */ if ((!fC&&!fZ)) goto L_00409a68;
L_004099f9:; BB(0x004099f9);
    /* 004099f9: mov eax, dword ptr [ebp*4 + 0x8f9640] */ r_eax = R32((u32)(r_ebp*4+0x8f9640u));
    /* 00409a00: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_00409a68:; BB(0x00409a68);
    /* 00409a68: mov ebp, 0x52 */ r_ebp = 0x52u;
    /* 00409a6d: jmp 0x409aaf */ goto L_00409aaf;
L_00409a6f:; BB(0x00409a6f);
    /* 00409a6f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00409a70: call 0x858212 */ r_esp -= 4; W32(r_esp, 0x409a75u); f_00858212();
    /* 00409a75: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00409a76: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409a78: je 0x409a85 */ if (fZ) goto L_00409a85;
L_00409a7a:; BB(0x00409a7a);
    /* 00409a7a: add ebp, -0x41 */ {  u32 a = r_ebp; u32 b = 0xffffffbfu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00409a7d: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 00409a83: jmp 0x409aaf */ goto L_00409aaf;
L_00409a85:; BB(0x00409a85);
    /* 00409a85: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00409a86: call 0x85824c */ r_esp -= 4; W32(r_esp, 0x409a8bu); f_0085824c();
    /* 00409a8b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00409a8c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409a8e: je 0x409a9b */ if (fZ) goto L_00409a9b;
L_00409a90:; BB(0x00409a90);
    /* 00409a90: add ebp, -0x3d */ {  u32 a = r_ebp; u32 b = 0xffffffc3u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00409a93: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 00409a99: jmp 0x409aaf */ goto L_00409aaf;
L_00409a9b:; BB(0x00409a9b);
    /* 00409a9b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00409a9c: call 0x858286 */ r_esp -= 4; W32(r_esp, 0x409aa1u); f_00858286();
    /* 00409aa1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00409aa2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409aa4: je 0x409aaf */ if (fZ) goto L_00409aaf;
L_00409aa6:; BB(0x00409aa6);
    /* 00409aa6: add ebp, 0xe */ {  u32 a = r_ebp; u32 b = 0xeu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00409aa9: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
L_00409aaf:; BB(0x00409aaf);
    /* 00409aaf: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00409ab2: cmp ebp, 0x52 */ {  u32 a = r_ebp; u32 b = 0x52u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409ab5: je 0x409c0a */ if (fZ) goto L_00409c0a;
L_00409abb:; BB(0x00409abb);
    /* 00409abb: fld dword ptr [0x8f9974] */ FPUSH(R_F32((u32)(0x8f9974u)));
    /* 00409ac1: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00409ac5: fld dword ptr [0x8f99d4] */ FPUSH(R_F32((u32)(0x8f99d4u)));
    /* 00409acb: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 00409acd: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00409acf: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00409ad3: mov eax, 0x38e38e39 */ r_eax = 0x38e38e39u;
    /* 00409ad8: imul ebp */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebp; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00409ada: mov eax, ebp */ r_eax = r_ebp;
    /* 00409adc: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00409adf: mov ecx, edx */ r_ecx = r_edx;
    /* 00409ae1: sar ecx, 3 */ { u32 c = (3u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00409ae4: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00409ae6: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 00409ae9: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409aeb: lea edi, [eax + eax*8] */ r_edi = (u32)(r_eax+r_eax*8);
    /* 00409aee: imul eax, ecx, -0x24 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xffffffdcu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00409af1: neg edi */ { u32 x = r_edi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00409af3: add edi, ebp */ {  u32 a = r_edi; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00409af5: add ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00409af7: mov eax, 0x2aaaaaab */ r_eax = 0x2aaaaaabu;
    /* 00409afc: imul ebp */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebp; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00409afe: mov eax, ebp */ r_eax = r_ebp;
    /* 00409b00: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00409b03: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00409b05: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 00409b08: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409b0a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409b0c: sub ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00409b0e: mov dword ptr [esp + 0x20], ebp */ W32((u32)(r_esp+0x20u), r_ebp);
    /* 00409b12: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 00409b16: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00409b18: fnstcw word ptr [esp + 0x28] */ W16((u32)(r_esp+0x28u), fcw);
    /* 00409b1c: movzx eax, word ptr [esp + 0x28] */ r_eax = (u32)R16((u32)(r_esp+0x28u));
    /* 00409b21: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00409b26: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 00409b2a: fldcw word ptr [esp + 0x30] */ fcw = R16((u32)(r_esp+0x30u));
    /* 00409b2e: fistp qword ptr [esp + 0x38] */ W64((u32)(r_esp+0x38u), (u64)fx_int64(ST(0))); FPOP();
    /* 00409b32: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 00409b36: mov eax, 0x2aaaaaab */ r_eax = 0x2aaaaaabu;
    /* 00409b3b: imul edi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_edi; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00409b3d: mov eax, edi */ r_eax = r_edi;
    /* 00409b3f: movzx ebp, byte ptr [esp + 0x38] */ r_ebp = (u32)R8((u32)(r_esp+0x38u));
    /* 00409b44: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00409b47: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00409b49: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
    /* 00409b4d: fild dword ptr [esp + 0x40] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x40u)));
    /* 00409b51: mov dword ptr [esp + 0x40], ebp */ W32((u32)(r_esp+0x40u), r_ebp);
    /* 00409b55: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00409b57: fild dword ptr [esp + 0x40] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x40u)));
    /* 00409b5b: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00409b5d: fnstcw word ptr [esp + 0x28] */ W16((u32)(r_esp+0x28u), fcw);
    /* 00409b61: movzx eax, word ptr [esp + 0x28] */ r_eax = (u32)R16((u32)(r_esp+0x28u));
    /* 00409b66: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00409b6b: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 00409b6f: fldcw word ptr [esp + 0x30] */ fcw = R16((u32)(r_esp+0x30u));
    /* 00409b73: fistp qword ptr [esp + 0x38] */ W64((u32)(r_esp+0x38u), (u64)fx_int64(ST(0))); FPOP();
    /* 00409b77: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 00409b7b: lea eax, [ecx + ecx*8] */ r_eax = (u32)(r_ecx+r_ecx*8);
    /* 00409b7e: fld dword ptr [0x8f997c] */ FPUSH(R_F32((u32)(0x8f997cu)));
    /* 00409b84: fld dword ptr [0x8f997c] */ FPUSH(R_F32((u32)(0x8f997cu)));
    /* 00409b8a: fdivr st(3) */ ST(0) = ST(3) / ST(0);
    /* 00409b8c: movzx edx, byte ptr [esp + 0x38] */ r_edx = (u32)R8((u32)(r_esp+0x38u));
    /* 00409b91: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00409b95: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409b97: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
    /* 00409b9b: fild dword ptr [esp + 0x40] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x40u)));
    /* 00409b9f: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409ba1: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409ba3: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409ba5: fld dword ptr [eax + edi*4 + 0x8f97c0] */ FPUSH(R_F32((u32)(r_eax+r_edi*4+0x8f97c0u)));
    /* 00409bac: fadd st(5), st(0) */ ST(5) = ST(5) + ST(0);
    /* 00409bae: fadd st(4), st(0) */ ST(4) = ST(4) + ST(0);
    /* 00409bb0: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00409bb2: fdiv st(4), st(0) */ ST(4) = ST(4) / ST(0);
    /* 00409bb4: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 00409bb6: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00409bba: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00409bbc: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 00409bc0: fld dword ptr [0x8f997c] */ FPUSH(R_F32((u32)(0x8f997cu)));
    /* 00409bc6: fdivr st(3) */ ST(0) = ST(3) / ST(0);
    /* 00409bc8: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 00409bcc: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00409bce: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00409bd0: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00409bd2: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 00409bd4: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 00409bd8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00409bda: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 00409bde: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00409be0: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
L_00409be4:; BB(0x00409be4);
    /* 00409be4: movzx ebp, cl */ r_ebp = (u32)(u8)r_ecx;
    /* 00409be7: cmp ebp, ebx */ {  u32 a = r_ebp; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409be9: je 0x409bf8 */ if (fZ) goto L_00409bf8;
L_00409beb:; BB(0x00409beb);
    /* 00409beb: mov edx, dword ptr [esp + 0x6c] */ r_edx = R32((u32)(r_esp+0x6cu));
    /* 00409bef: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00409bf1: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x409bf6u); f_0082bb60();
    /* 00409bf6: mov ebx, ebp */ r_ebx = r_ebp;
L_00409bf8:; BB(0x00409bf8);
    /* 00409bf8: push dword ptr [esp + 0x68] */ { u32 v = R32((u32)(r_esp+0x68u)); r_esp -= 4; W32(r_esp, v); }
    /* 00409bfc: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 00409c00: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x409c05u); f_0082b440();
    /* 00409c05: jmp 0x40999f */ goto L_0040999f;
L_00409c0a:; BB(0x00409c0a);
    /* 00409c0a: fld dword ptr [0x8f9978] */ FPUSH(R_F32((u32)(0x8f9978u)));
    /* 00409c10: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 00409c14: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00409c16: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 00409c18: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00409c1a: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00409c1e: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00409c22: fadd dword ptr [0x8f99d4] */ ST(0) = ST(0) + R_F32((u32)(0x8f99d4u));
    /* 00409c28: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00409c2c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00409c2e: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 00409c32: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 00409c3a: mov eax, 0x38e38e39 */ r_eax = 0x38e38e39u;
    /* 00409c3f: imul ebp */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebp; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00409c41: sar ebp, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebp = r;  } }
    /* 00409c44: mov ecx, edx */ r_ecx = r_edx;
    /* 00409c46: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 00409c4e: sar ecx, 3 */ { u32 c = (3u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00409c51: sub ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00409c53: mov dword ptr [esp + 0x18], 0 */ W32((u32)(r_esp+0x18u), 0x0u);
    /* 00409c5b: mov dword ptr [esp + 0x1c], 0 */ W32((u32)(r_esp+0x1cu), 0x0u);
    /* 00409c63: jmp 0x409be4 */ goto L_00409be4;
L_00409c68:; BB(0x00409c68);
    /* 00409c68: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x409c6du); f_004ac444();
    /* 00409c6d: add esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00409c70: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00409c71: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00409c72: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00409c73: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00409c74: ret  */ FN_RET(0x00409a68); r_esp += 4; return;
}

void f_00409c78(void) /* sub_409C78 */
{
    FN_ENTER(0x00409c78);
    /* 00409c78: mov eax, dword ptr [0xa3ad44] */ r_eax = R32((u32)(0xa3ad44u));
    /* 00409c7d: ret  */ FN_RET(0x00409c78); r_esp += 4; return;
}

void f_00409c80(void) /* sub_409C80 */
{
    FN_ENTER(0x00409c80);
    /* 00409c80: mov eax, 0x9a3070 */ r_eax = 0x9a3070u;
    /* 00409c85: mov dword ptr [0xa3ad48], eax */ W32((u32)(0xa3ad48u), r_eax);
    /* 00409c8a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00409c8b: push 0x8f9a48 */ { u32 v = 0x8f9a48u; r_esp -= 4; W32(r_esp, v); }
    /* 00409c90: call 0x81a7d8 */ r_esp -= 4; W32(r_esp, 0x409c95u); f_0081a7d8();
    /* 00409c95: push 0x8f9a58 */ { u32 v = 0x8f9a58u; r_esp -= 4; W32(r_esp, v); }
    /* 00409c9a: call 0x5b938c */ r_esp -= 4; W32(r_esp, 0x409c9fu); f_005b938c();
    /* 00409c9f: mov dword ptr [0xa3ad44], 0 */ W32((u32)(0xa3ad44u), 0x0u);
    /* 00409ca9: mov dword ptr [0xa3ad40], eax */ W32((u32)(0xa3ad40u), r_eax);
    /* 00409cae: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00409cb1: ret  */ FN_RET(0x00409c80); r_esp += 4; return;
}

void f_00409cb4(void) /* sub_409CB4 */
{
    FN_ENTER(0x00409cb4);
    /* 00409cb4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00409cb5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00409cb7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00409cb9: call 0x409cd8 */ r_esp -= 4; W32(r_esp, 0x409cbeu); f_00409cd8();
    /* 00409cbe: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00409cc2: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00409cc4: jne 0x409cca */ if (!fZ) goto L_00409cca;
L_00409cc6:; BB(0x00409cc6);
    /* 00409cc6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00409cc7: ret 4 */ FN_RET(0x00409cb4); r_esp += 8; return;
L_00409cca:; BB(0x00409cca);
    /* 00409cca: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00409ccb: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x409cd0u); f_005c2f74();
    /* 00409cd0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00409cd1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00409cd2: ret 4 */ FN_RET(0x00409cb4); r_esp += 8; return;
}

void f_00409cd8(void) /* sub_409CD8 */
{
    FN_ENTER(0x00409cd8);
    /* 00409cd8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00409cd9: mov ebp, esp */ r_ebp = r_esp;
    /* 00409cdb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00409cdd: push 0x8cc488 */ { u32 v = 0x8cc488u; r_esp -= 4; W32(r_esp, v); }
    /* 00409ce2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00409ce8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00409ce9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00409cf0: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00409cf3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00409cf6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00409cf9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00409cfc: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00409cff: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00409d02: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00409d05: mov dword ptr [ecx], 0xaf2620 */ W32((u32)(r_ecx), 0xaf2620u);
    /* 00409d0b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00409d12: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x409d17u); f_008171e8();
    /* 00409d17: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00409d1a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00409d21: mov esp, ebp */ r_esp = r_ebp;
    /* 00409d23: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00409d24: ret  */ FN_RET(0x00409cd8); r_esp += 4; return;
}

void f_00409d28(void) /* sub_409D28 */
{
    FN_ENTER(0x00409d28);
    /* 00409d28: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00409d29: mov edi, ecx */ r_edi = r_ecx;
    /* 00409d2b: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00409d2f: mov ecx, edi */ r_ecx = r_edi;
    /* 00409d31: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x409d36u); f_008193cc();
    /* 00409d36: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 00409d3a: mov dword ptr [edi], 0xaf2620 */ W32((u32)(r_edi), 0xaf2620u);
    /* 00409d40: mov eax, dword ptr [0x9a307c] */ r_eax = R32((u32)(0x9a307cu));
    /* 00409d45: mov dword ptr [edi + 0x1c], 0xffffffff */ W32((u32)(r_edi+0x1cu), 0xffffffffu);
    /* 00409d4c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00409d4d: mov dword ptr [edi + 4], eax */ W32((u32)(r_edi+0x4u), r_eax);
    /* 00409d50: mov dword ptr [edi + 0x20], 0 */ W32((u32)(r_edi+0x20u), 0x0u);
    /* 00409d57: mov dword ptr [edi + 0x28], edx */ W32((u32)(r_edi+0x28u), r_edx);
    /* 00409d5a: mov ecx, edi */ r_ecx = r_edi;
    /* 00409d5c: call 0x40a080 */ r_esp -= 4; W32(r_esp, 0x409d61u); f_0040a080();
    /* 00409d61: mov eax, edi */ r_eax = r_edi;
    /* 00409d63: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00409d64: ret 8 */ FN_RET(0x00409d28); r_esp += 12; return;
}

void f_00409d68(void) /* sub_409D68 */
{
    FN_ENTER(0x00409d68);
    /* 00409d68: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00409d69: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00409d6c: mov edi, ecx */ r_edi = r_ecx;
    /* 00409d6e: mov ecx, edi */ r_ecx = r_edi;
    /* 00409d70: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x409d75u); f_008173b4();
    /* 00409d75: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409d77: je 0x409e83 */ if (fZ) goto L_00409e83;
L_00409d7d:; BB(0x00409d7d);
    /* 00409d7d: mov eax, dword ptr [edi + 0x28] */ r_eax = R32((u32)(r_edi+0x28u));
    /* 00409d80: add dword ptr [edi + 0x1c], 1 */ { u32 ad = (u32)(r_edi+0x1cu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00409d84: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409d86: je 0x409e66 */ if (fZ) goto L_00409e66;
L_00409d8c:; BB(0x00409d8c);
    /* 00409d8c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409d8f: jne 0x409dfb */ if (!fZ) goto L_00409dfb;
L_00409d91:; BB(0x00409d91);
    /* 00409d91: fld dword ptr [edi + 0x2c] */ FPUSH(R_F32((u32)(r_edi+0x2cu)));
    /* 00409d94: fadd dword ptr [edi + 0x34] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x34u));
    /* 00409d97: fcom dword ptr [0x8f9aa8] */ fx_compare(ST(0), R_F32((u32)(0x8f9aa8u))); 
    /* 00409d9d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00409d9f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00409da0: ja 0x409dde */ if ((!fC&&!fZ)) goto L_00409dde;
L_00409da2:; BB(0x00409da2);
    /* 00409da2: fld dword ptr [0x8f9aac] */ FPUSH(R_F32((u32)(0x8f9aacu)));
    /* 00409da8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00409daa: fst dword ptr [edi + 0x2c] */ W_F32((u32)(r_edi+0x2cu), ST(0));
    /* 00409dad: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00409daf: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00409db2: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00409db6: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00409dbb: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00409dbf: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00409dc3: fistp qword ptr [esp + 0x10] */ W64((u32)(r_esp+0x10u), (u64)fx_int64(ST(0))); FPOP();
    /* 00409dc7: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00409dca: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00409dce: shl eax, 0x18 */ { u32 c = (24u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00409dd1: or eax, 0xffffff */ {  u32 a = r_eax; u32 b = 0xffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00409dd6: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 00409dd9: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00409ddc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00409ddd: ret  */ FN_RET(0x00409d68); r_esp += 4; return;
L_00409dde:; BB(0x00409dde);
    /* 00409dde: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00409de0: mov eax, 0x3f800000 */ r_eax = 0x3f800000u;
    /* 00409de5: movzx edx, word ptr [edi + 8] */ r_edx = (u32)R16((u32)(r_edi+0x8u));
    /* 00409de9: mov dword ptr [edi + 0x2c], eax */ W32((u32)(r_edi+0x2cu), r_eax);
    /* 00409dec: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00409df2: mov word ptr [edi + 8], dx */ W16((u32)(r_edi+0x8u), (u16)r_edx);
    /* 00409df6: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00409df9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00409dfa: ret  */ FN_RET(0x00409d68); r_esp += 4; return;
L_00409dfb:; BB(0x00409dfb);
    /* 00409dfb: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409dfe: jne 0x409e83 */ if (!fZ) goto L_00409e83;
L_00409e04:; BB(0x00409e04);
    /* 00409e04: fld dword ptr [edi + 0x2c] */ FPUSH(R_F32((u32)(r_edi+0x2cu)));
    /* 00409e07: fadd dword ptr [edi + 0x34] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x34u));
    /* 00409e0a: fcom dword ptr [0x8f9ab0] */ fx_compare(ST(0), R_F32((u32)(0x8f9ab0u))); 
    /* 00409e10: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00409e12: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00409e13: jb 0x409e4c */ if (fC) goto L_00409e4c;
L_00409e15:; BB(0x00409e15);
    /* 00409e15: fld dword ptr [0x8f9aac] */ FPUSH(R_F32((u32)(0x8f9aacu)));
    /* 00409e1b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00409e1d: fst dword ptr [edi + 0x2c] */ W_F32((u32)(r_edi+0x2cu), ST(0));
    /* 00409e20: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00409e22: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00409e25: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00409e29: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00409e2e: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00409e32: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00409e36: fistp qword ptr [esp + 0x10] */ W64((u32)(r_esp+0x10u), (u64)fx_int64(ST(0))); FPOP();
    /* 00409e3a: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00409e3d: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00409e41: shl eax, 0x18 */ { u32 c = (24u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00409e44: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 00409e47: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00409e4a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00409e4b: ret  */ FN_RET(0x00409d68); r_esp += 4; return;
L_00409e4c:; BB(0x00409e4c);
    /* 00409e4c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00409e4e: movzx edx, word ptr [edi + 8] */ r_edx = (u32)R16((u32)(r_edi+0x8u));
    /* 00409e52: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00409e54: mov dword ptr [edi + 0x2c], eax */ W32((u32)(r_edi+0x2cu), r_eax);
    /* 00409e57: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00409e5d: mov word ptr [edi + 8], dx */ W16((u32)(r_edi+0x8u), (u16)r_edx);
    /* 00409e61: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00409e64: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00409e65: ret  */ FN_RET(0x00409d68); r_esp += 4; return;
L_00409e66:; BB(0x00409e66);
    /* 00409e66: fld dword ptr [0x8f9aa0] */ FPUSH(R_F32((u32)(0x8f9aa0u)));
    /* 00409e6c: fadd dword ptr [edi + 0x20] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x20u));
    /* 00409e6f: fld dword ptr [0x8f9aa4] */ FPUSH(R_F32((u32)(0x8f9aa4u)));
    /* 00409e75: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00409e77: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00409e79: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00409e7a: ja 0x409e7e */ if ((!fC&&!fZ)) goto L_00409e7e;
L_00409e7c:; BB(0x00409e7c);
    /* 00409e7c: fst st(1) */ ST(1) = ST(0);
L_00409e7e:; BB(0x00409e7e);
    /* 00409e7e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00409e80: fstp dword ptr [edi + 0x20] */ W_F32((u32)(r_edi+0x20u), ST(0)); FPOP();
L_00409e83:; BB(0x00409e83);
    /* 00409e83: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00409e86: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00409e87: ret  */ FN_RET(0x00409d68); r_esp += 4; return;
}

void f_00409e88(void) /* sub_409E88 */
{
    FN_ENTER(0x00409e88);
    /* 00409e88: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00409e89: sub esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00409e8c: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00409e8e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00409e90: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x409e95u); f_008173b4();
    /* 00409e95: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409e97: jne 0x409e9e */ if (!fZ) goto L_00409e9e;
L_00409e99:; BB(0x00409e99);
    /* 00409e99: add esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00409e9c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00409e9d: ret  */ FN_RET(0x00409e88); r_esp += 4; return;
L_00409e9e:; BB(0x00409e9e);
    /* 00409e9e: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 00409ea1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00409ea3: jne 0x409fbd */ if (!fZ) goto L_00409fbd;
L_00409ea9:; BB(0x00409ea9);
    /* 00409ea9: mov dword ptr [esp + 0x3c], 4 */ W32((u32)(r_esp+0x3cu), 0x4u);
    /* 00409eb1: lea eax, [esp + 0x20] */ r_eax = (u32)(r_esp+0x20u);
    /* 00409eb5: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00409eb7: mov dword ptr [esp + 0x38], ecx */ W32((u32)(r_esp+0x38u), r_ecx);
    /* 00409ebb: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 00409ebf: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 00409ec2: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 00409ec6: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 00409ec8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00409ec9: call 0x82acfc */ r_esp -= 4; W32(r_esp, 0x409eceu); f_0082acfc();
    /* 00409ece: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00409ed0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00409ed2: call 0x82acfc */ r_esp -= 4; W32(r_esp, 0x409ed7u); f_0082acfc();
    /* 00409ed7: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00409eda: mov dword ptr [esp + 0x48], esi */ W32((u32)(r_esp+0x48u), r_esi);
    /* 00409ede: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00409ee0: mov esi, ebx */ r_esi = r_ebx;
    /* 00409ee2: mov ebx, eax */ r_ebx = r_eax;
L_00409ee4:; BB(0x00409ee4);
    /* 00409ee4: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 00409ee8: fld dword ptr [0x8f9a88] */ FPUSH(R_F32((u32)(0x8f9a88u)));
    /* 00409eee: fld dword ptr [0x8f9a94] */ FPUSH(R_F32((u32)(0x8f9a94u)));
    /* 00409ef4: mov dword ptr [esp + 0x40], ebx */ W32((u32)(r_esp+0x40u), r_ebx);
    /* 00409ef8: fild dword ptr [esp + 0x40] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x40u)));
    /* 00409efc: mov dword ptr [edx], 0 */ W32((u32)(r_edx), 0x0u);
    /* 00409f02: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00409f04: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 00409f08: shr ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00409f0b: fadd dword ptr [ecx*4 + 0x8f9a68] */ ST(0) = ST(0) + R_F32((u32)(r_ecx*4+0x8f9a68u));
    /* 00409f12: fmul dword ptr [0x8f9a8c] */ ST(0) = ST(0) * R_F32((u32)(0x8f9a8cu));
    /* 00409f18: fst dword ptr [edx + 4] */ W_F32((u32)(r_edx+0x4u), ST(0));
    /* 00409f1b: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 00409f20: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 00409f24: mov dword ptr [edx], 0xfffffff */ W32((u32)(r_edx), 0xfffffffu);
    /* 00409f2a: mov edx, dword ptr [esi + 0x20] */ r_edx = R32((u32)(r_esi+0x20u));
    /* 00409f2d: mov ecx, dword ptr [esp + 0x30] */ r_ecx = R32((u32)(r_esp+0x30u));
    /* 00409f31: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 00409f34: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 00409f38: fst dword ptr [edx + 0xc] */ W_F32((u32)(r_edx+0xcu), ST(0));
    /* 00409f3b: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00409f3d: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 00409f41: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00409f44: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 00409f48: mov dword ptr [edx + 0x10], 0x44200000 */ W32((u32)(r_edx+0x10u), 0x44200000u);
    /* 00409f4f: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 00409f53: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00409f55: fst dword ptr [edx + 0x14] */ W_F32((u32)(r_edx+0x14u), ST(0));
    /* 00409f58: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 00409f5c: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 00409f5f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00409f61: fsub dword ptr [esi + 0x20] */ ST(0) = ST(0) - R_F32((u32)(r_esi+0x20u));
    /* 00409f64: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 00409f68: fstp dword ptr [edx + 0x18] */ W_F32((u32)(r_edx+0x18u), ST(0)); FPOP();
    /* 00409f6b: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 00409f6f: fstp dword ptr [edx + 0x1c] */ W_F32((u32)(r_edx+0x1cu), ST(0)); FPOP();
    /* 00409f72: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 00409f76: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 00409f79: lea edx, [esp + 0x30] */ r_edx = (u32)(r_esp+0x30u);
    /* 00409f7d: push 0x60 */ { u32 v = 0x60u; r_esp -= 4; W32(r_esp, v); }
    /* 00409f7f: push dword ptr [0x9a3080] */ { u32 v = R32((u32)(0x9a3080u)); r_esp -= 4; W32(r_esp, v); }
    /* 00409f85: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00409f87: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00409f88: call 0x82b558 */ r_esp -= 4; W32(r_esp, 0x409f8du); f_0082b558();
    /* 00409f8d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00409f90: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00409f93: cmp ebx, 0xa0 */ {  u32 a = r_ebx; u32 b = 0xa0u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00409f99: jb 0x409ee4 */ if (fC) goto L_00409ee4;
L_00409f9f:; BB(0x00409f9f);
    /* 00409f9f: mov esi, dword ptr [esp + 0x48] */ r_esi = R32((u32)(r_esp+0x48u));
    /* 00409fa3: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00409fa5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00409fa7: call 0x82acfc */ r_esp -= 4; W32(r_esp, 0x409facu); f_0082acfc();
    /* 00409fac: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00409fae: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00409fb0: call 0x82acfc */ r_esp -= 4; W32(r_esp, 0x409fb5u); f_0082acfc();
    /* 00409fb5: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00409fb8: jmp 0x40a079 */ goto L_0040a079;
L_00409fbd:; BB(0x00409fbd);
    /* 00409fbd: jle 0x40a079 */ if ((fZ||fS!=fO)) goto L_0040a079;
L_00409fc3:; BB(0x00409fc3);
    /* 00409fc3: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00409fc6: jg 0x40a079 */ if ((!fZ&&fS==fO)) goto L_0040a079;
L_00409fcc:; BB(0x00409fcc);
    /* 00409fcc: mov dword ptr [esp + 0x38], 0 */ W32((u32)(r_esp+0x38u), 0x0u);
    /* 00409fd4: lea edx, [esp + 0x20] */ r_edx = (u32)(r_esp+0x20u);
    /* 00409fd8: mov eax, 4 */ r_eax = 0x4u;
    /* 00409fdd: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
    /* 00409fe1: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 00409fe8: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 00409fec: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 00409fef: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 00409ff3: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 00409ffb: mov ecx, dword ptr [esp + 0x34] */ r_ecx = R32((u32)(r_esp+0x34u));
    /* 00409fff: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 0040a002: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 0040a004: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 0040a008: mov dword ptr [edx + 8], 0 */ W32((u32)(r_edx+0x8u), 0x0u);
    /* 0040a00f: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 0040a013: mov dword ptr [edx + 0xc], 0x43f00000 */ W32((u32)(r_edx+0xcu), 0x43f00000u);
    /* 0040a01a: mov ecx, dword ptr [esp + 0x34] */ r_ecx = R32((u32)(r_esp+0x34u));
    /* 0040a01e: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 0040a021: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 0040a024: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 0040a028: mov dword ptr [edx + 0x10], 0x44200000 */ W32((u32)(r_edx+0x10u), 0x44200000u);
    /* 0040a02f: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 0040a033: mov dword ptr [edx + 0x14], 0x43f00000 */ W32((u32)(r_edx+0x14u), 0x43f00000u);
    /* 0040a03a: mov ecx, dword ptr [esp + 0x34] */ r_ecx = R32((u32)(r_esp+0x34u));
    /* 0040a03e: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 0040a041: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 0040a044: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 0040a048: mov dword ptr [edx + 0x18], 0x44200000 */ W32((u32)(r_edx+0x18u), 0x44200000u);
    /* 0040a04f: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 0040a053: mov dword ptr [edx + 0x1c], 0 */ W32((u32)(r_edx+0x1cu), 0x0u);
    /* 0040a05a: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 0040a05e: mov ebx, dword ptr [ebx + 0x30] */ r_ebx = R32((u32)(r_ebx+0x30u));
    /* 0040a061: mov dword ptr [edx + 0xc], ebx */ W32((u32)(r_edx+0xcu), r_ebx);
    /* 0040a064: lea edx, [esp + 0x30] */ r_edx = (u32)(r_esp+0x30u);
    /* 0040a068: push 0x60 */ { u32 v = 0x60u; r_esp -= 4; W32(r_esp, v); }
    /* 0040a06a: push 0xbf800000 */ { u32 v = 0xbf800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0040a06f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040a070: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040a071: call 0x82b5d8 */ r_esp -= 4; W32(r_esp, 0x40a076u); f_0082b5d8();
    /* 0040a076: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0040a079:; BB(0x0040a079);
    /* 0040a079: add esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0040a07c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0040a07d: ret  */ FN_RET(0x00409e88); r_esp += 4; return;
}

