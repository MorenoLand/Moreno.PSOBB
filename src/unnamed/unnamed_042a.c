#include "protos.h"

void f_0042a034(void) /* sub_42A034 */
{
    FN_ENTER(0x0042a034);
    /* 0042a034: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0042a035: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0042a036: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0042a037: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0042a038: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0042a03b: mov edi, ecx */ r_edi = r_ecx;
    /* 0042a03d: lea ebx, [edi + 0x20] */ r_ebx = (u32)(r_edi+0x20u);
    /* 0042a040: mov eax, dword ptr [0xa43d28] */ r_eax = R32((u32)(0xa43d28u));
    /* 0042a045: mov eax, dword ptr [eax + 0x42c] */ r_eax = R32((u32)(r_eax+0x42cu));
    /* 0042a04b: mov edx, dword ptr [eax + 0x58] */ r_edx = R32((u32)(r_eax+0x58u));
    /* 0042a04e: mov esi, dword ptr [edx + 0x2c] */ r_esi = R32((u32)(r_edx+0x2cu));
    /* 0042a051: mov dword ptr [esp], 0x3f800000 */ W32((u32)(r_esp), 0x3f800000u);
    /* 0042a058: mov dword ptr [esp + 4], 0x3f800000 */ W32((u32)(r_esp+0x4u), 0x3f800000u);
    /* 0042a060: mov dword ptr [esp + 8], 0x3f800000 */ W32((u32)(r_esp+0x8u), 0x3f800000u);
    /* 0042a068: mov dword ptr [esp + 0xc], 0x3f800000 */ W32((u32)(r_esp+0xcu), 0x3f800000u);
    /* 0042a070: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 0042a073: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x42a078u); f_00829cc8();
    /* 0042a078: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x42a07du); f_0082d7b0();
    /* 0042a07d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0042a07f: mov ebp, ebx */ r_ebp = r_ebx;
    /* 0042a081: mov ebx, eax */ r_ebx = r_eax;
L_0042a083:; BB(0x0042a083);
    /* 0042a083: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x42a088u); f_0082d7b0();
    /* 0042a088: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0042a08a: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x42a08fu); f_0082d838();
    /* 0042a08f: mov edx, dword ptr [ebp + 0x20] */ r_edx = R32((u32)(r_ebp+0x20u));
    /* 0042a092: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0042a094: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x42a099u); f_00830c04();
    /* 0042a099: mov edx, dword ptr [ebp + 0x18] */ r_edx = R32((u32)(r_ebp+0x18u));
    /* 0042a09c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0042a09e: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x42a0a3u); f_0082e9e4();
    /* 0042a0a3: fld dword ptr [edi + 0x4f4] */ FPUSH(R_F32((u32)(r_edi+0x4f4u)));
    /* 0042a0a9: fld dword ptr [edi + 0x4f8] */ FPUSH(R_F32((u32)(r_edi+0x4f8u)));
    /* 0042a0af: fld dword ptr [edi + 0x4fc] */ FPUSH(R_F32((u32)(r_edi+0x4fcu)));
    /* 0042a0b5: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042a0b8: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0042a0ba: fchs  */ ST(0) = -ST(0);
    /* 0042a0bc: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0042a0bf: fchs  */ ST(0) = -ST(0);
    /* 0042a0c1: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0042a0c5: fchs  */ ST(0) = -ST(0);
    /* 0042a0c7: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0042a0cb: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0042a0cd: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x42a0d2u); f_00830b74();
    /* 0042a0d2: mov edx, dword ptr [edi + 0x4f0] */ r_edx = R32((u32)(r_edi+0x4f0u));
    /* 0042a0d8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0042a0da: call 0x831308 */ r_esp -= 4; W32(r_esp, 0x42a0dfu); f_00831308();
    /* 0042a0df: mov edx, dword ptr [ebp + 0x28] */ r_edx = R32((u32)(r_ebp+0x28u));
    /* 0042a0e2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0042a0e4: jl 0x42a161 */ if ((fS!=fO)) goto L_0042a161;
L_0042a0e6:; BB(0x0042a0e6);
    /* 0042a0e6: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042a0e9: jle 0x42a158 */ if ((fZ||fS!=fO)) goto L_0042a158;
L_0042a0eb:; BB(0x0042a0eb);
    /* 0042a0eb: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042a0ee: jne 0x42a161 */ if (!fZ) goto L_0042a161;
L_0042a0f0:; BB(0x0042a0f0);
    /* 0042a0f0: mov edx, dword ptr [0xaf034c] */ r_edx = R32((u32)(0xaf034cu));
    /* 0042a0f6: mov dword ptr [0xaab518], edx */ W32((u32)(0xaab518u), r_edx);
    /* 0042a0fc: or edx, 0x8810 */ {  u32 a = r_edx; u32 b = 0x8810u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0042a102: mov dword ptr [0xaf034c], edx */ W32((u32)(0xaf034cu), r_edx);
    /* 0042a108: mov edx, dword ptr [ebp + 0x24] */ r_edx = R32((u32)(r_ebp+0x24u));
    /* 0042a10b: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0042a10e: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0042a111: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0042a112: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x42a117u); f_0082d710();
    /* 0042a117: push 0x800 */ { u32 v = 0x800u; r_esp -= 4; W32(r_esp, v); }
    /* 0042a11c: push 0xff00 */ { u32 v = 0xff00u; r_esp -= 4; W32(r_esp, v); }
    /* 0042a121: call 0x82d6fc */ r_esp -= 4; W32(r_esp, 0x42a126u); f_0082d6fc();
    /* 0042a126: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042a129: mov ecx, 0x2500 */ r_ecx = 0x2500u;
    /* 0042a12e: call 0x82e1c4 */ r_esp -= 4; W32(r_esp, 0x42a133u); f_0082e1c4();
    /* 0042a133: push dword ptr [esi + 4] */ { u32 v = R32((u32)(r_esi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0042a136: call 0x82e6b0 */ r_esp -= 4; W32(r_esp, 0x42a13bu); f_0082e6b0();
    /* 0042a13b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042a13d: push 0xff00 */ { u32 v = 0xff00u; r_esp -= 4; W32(r_esp, v); }
    /* 0042a142: call 0x82d6fc */ r_esp -= 4; W32(r_esp, 0x42a147u); f_0082d6fc();
    /* 0042a147: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042a14a: mov edx, dword ptr [0xaab518] */ r_edx = R32((u32)(0xaab518u));
    /* 0042a150: mov dword ptr [0xaf034c], edx */ W32((u32)(0xaf034cu), r_edx);
    /* 0042a156: jmp 0x42a161 */ goto L_0042a161;
L_0042a158:; BB(0x0042a158);
    /* 0042a158: push dword ptr [esi + 4] */ { u32 v = R32((u32)(r_esi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0042a15b: call 0x82e6b0 */ r_esp -= 4; W32(r_esp, 0x42a160u); f_0082e6b0();
    /* 0042a160: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0042a161:; BB(0x0042a161);
    /* 0042a161: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x42a166u); f_0082da80();
    /* 0042a166: mov esi, dword ptr [esi + 0x30] */ r_esi = R32((u32)(r_esi+0x30u));
    /* 0042a169: add ebp, 0x2c */ {  u32 a = r_ebp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0042a16c: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0042a16f: cmp ebx, 0x1c */ {  u32 a = r_ebx; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042a172: jl 0x42a083 */ if ((fS!=fO)) goto L_0042a083;
L_0042a178:; BB(0x0042a178);
    /* 0042a178: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x42a17du); f_0082da80();
    /* 0042a17d: mov ecx, dword ptr [0xa9d4d0] */ r_ecx = R32((u32)(0xa9d4d0u));
    /* 0042a183: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x42a188u); f_0061cdb0();
    /* 0042a188: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042a18b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042a18c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042a18d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0042a18e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0042a18f: ret  */ FN_RET(0x0042a034); r_esp += 4; return;
}

void f_0042a190(void) /* sub_42A190 */
{
    FN_ENTER(0x0042a190);
    /* 0042a190: mov eax, dword ptr [0x8fcc10] */ r_eax = R32((u32)(0x8fcc10u));
    /* 0042a195: mov dword ptr [0xa4391c], eax */ W32((u32)(0xa4391cu), r_eax);
    /* 0042a19a: ret  */ FN_RET(0x0042a190); r_esp += 4; return;
}

void f_0042a19c(void) /* sub_42A19C */
{
    FN_ENTER(0x0042a19c);
    /* 0042a19c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0042a19d: mov ebp, esp */ r_ebp = r_esp;
    /* 0042a19f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0042a1a1: push 0x8cdbf8 */ { u32 v = 0x8cdbf8u; r_esp -= 4; W32(r_esp, v); }
    /* 0042a1a6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0042a1ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042a1ad: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0042a1b4: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0042a1b7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0042a1ba: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0042a1bd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0042a1c0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0042a1c3: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0042a1c5: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0042a1cc: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x42a1d1u); f_008581c5();
    /* 0042a1d1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0042a1d2: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0042a1d5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042a1d7: je 0x42a231 */ if (fZ) goto L_0042a231;
L_0042a1d9:; BB(0x0042a1d9);
    /* 0042a1d9: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0042a1e0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0042a1e7: mov eax, dword ptr [0xa43d28] */ r_eax = R32((u32)(0xa43d28u));
    /* 0042a1ec: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0042a1ef: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 0042a1f5: push dword ptr [edx + 0x58] */ { u32 v = R32((u32)(r_edx+0x58u)); r_esp -= 4; W32(r_esp, v); }
    /* 0042a1f8: call 0x511b74 */ r_esp -= 4; W32(r_esp, 0x42a1fdu); f_00511b74();
    /* 0042a1fd: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0042a200: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0042a207:; BB(0x0042a207);
    /* 0042a207: mov dword ptr [0xa43920], eax */ W32((u32)(0xa43920u), r_eax);
    /* 0042a20c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0042a213: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 0042a215: push dword ptr [0xa43920] */ { u32 v = R32((u32)(0xa43920u)); r_esp -= 4; W32(r_esp, v); }
    /* 0042a21b: call 0x42a2dc */ r_esp -= 4; W32(r_esp, 0x42a220u); f_0042a2dc();
    /* 0042a220: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042a223: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042a226: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0042a22d: mov esp, ebp */ r_esp = r_ebp;
    /* 0042a22f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042a230: ret  */ FN_RET(0x0042a19c); r_esp += 4; return;
L_0042a231:; BB(0x0042a231);
    /* 0042a231: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0042a233: jmp 0x42a207 */ goto L_0042a207;
}

void f_0042a238(void) /* sub_42A238 */
{
    FN_ENTER(0x0042a238);
    /* 0042a238: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0042a239: mov ebp, esp */ r_ebp = r_esp;
    /* 0042a23b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0042a23d: push 0x8cdc20 */ { u32 v = 0x8cdc20u; r_esp -= 4; W32(r_esp, v); }
    /* 0042a242: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0042a248: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042a249: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0042a250: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0042a253: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0042a256: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0042a259: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0042a25c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0042a25f: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0042a261: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0042a268: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x42a26du); f_008581c5();
    /* 0042a26d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0042a26e: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0042a271: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042a273: je 0x42a2d5 */ if (fZ) goto L_0042a2d5;
L_0042a275:; BB(0x0042a275);
    /* 0042a275: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0042a27c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0042a283: mov eax, dword ptr [0xa43d28] */ r_eax = R32((u32)(0xa43d28u));
    /* 0042a288: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0042a28b: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 0042a291: push dword ptr [edx + 0x68] */ { u32 v = R32((u32)(r_edx+0x68u)); r_esp -= 4; W32(r_esp, v); }
    /* 0042a294: call 0x511b74 */ r_esp -= 4; W32(r_esp, 0x42a299u); f_00511b74();
    /* 0042a299: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0042a29c: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0042a2a3:; BB(0x0042a2a3);
    /* 0042a2a3: mov dword ptr [0xa43924], eax */ W32((u32)(0xa43924u), r_eax);
    /* 0042a2a8: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0042a2af: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 0042a2b1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042a2b2: call 0x42a364 */ r_esp -= 4; W32(r_esp, 0x42a2b7u); f_0042a364();
    /* 0042a2b7: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 0042a2b9: push dword ptr [0xa43924] */ { u32 v = R32((u32)(0xa43924u)); r_esp -= 4; W32(r_esp, v); }
    /* 0042a2bf: call 0x42a2dc */ r_esp -= 4; W32(r_esp, 0x42a2c4u); f_0042a2dc();
    /* 0042a2c4: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042a2c7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042a2ca: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0042a2d1: mov esp, ebp */ r_esp = r_ebp;
    /* 0042a2d3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042a2d4: ret  */ FN_RET(0x0042a238); r_esp += 4; return;
L_0042a2d5:; BB(0x0042a2d5);
    /* 0042a2d5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0042a2d7: jmp 0x42a2a3 */ goto L_0042a2a3;
}

void f_0042a2dc(void) /* sub_42A2DC */
{
    FN_ENTER(0x0042a2dc);
    /* 0042a2dc: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0042a2df: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x42a2e4u); f_0082d7b0();
    /* 0042a2e4: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0042a2e6: call 0x830cd8 */ r_esp -= 4; W32(r_esp, 0x42a2ebu); f_00830cd8();
    /* 0042a2eb: push 0x3f8ccccd */ { u32 v = 0x3f8ccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 0042a2f0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042a2f2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0042a2f4: push 0x3f8ccccd */ { u32 v = 0x3f8ccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 0042a2f9: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x42a2feu); f_0082fa0c();
    /* 0042a2fe: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 0042a302: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0042a304: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0042a306: jle 0x42a359 */ if ((fZ||fS!=fO)) goto L_0042a359;
L_0042a308:; BB(0x0042a308);
    /* 0042a308: mov dword ptr [esp + 0xc], ebx */ W32((u32)(r_esp+0xcu), r_ebx);
    /* 0042a30c: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 0042a310: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 0042a314: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 0042a318: mov edi, dword ptr [esp + 0x14] */ r_edi = R32((u32)(r_esp+0x14u));
    /* 0042a31c: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 0042a31f: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 0042a322: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0042a324: lea edx, [ecx + ecx] */ r_edx = (u32)(r_ecx+r_ecx);
    /* 0042a327: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0042a329: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0042a32b: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0042a32d: mov ebp, eax */ r_ebp = r_eax;
    /* 0042a32f: mov ebx, edx */ r_ebx = r_edx;
L_0042a331:; BB(0x0042a331);
    /* 0042a331: mov ecx, dword ptr [edi + 8] */ r_ecx = R32((u32)(r_edi+0x8u));
    /* 0042a334: lea edx, [ecx + ebx + 0x10] */ r_edx = (u32)(r_ecx+r_ebx+0x10u);
    /* 0042a338: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0042a339: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0042a33b: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x42a340u); f_0082eab8();
    /* 0042a340: add ebx, 0x1c */ {  u32 a = r_ebx; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0042a343: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0042a346: cmp ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042a348: jl 0x42a331 */ if ((fS!=fO)) goto L_0042a331;
L_0042a34a:; BB(0x0042a34a);
    /* 0042a34a: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 0042a34e: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 0042a352: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 0042a356: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
L_0042a359:; BB(0x0042a359);
    /* 0042a359: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x42a35eu); f_0082da80();
    /* 0042a35e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042a361: ret  */ FN_RET(0x0042a2dc); r_esp += 4; return;
}

void f_0042a364(void) /* sub_42A364 */
{
    FN_ENTER(0x0042a364);
    /* 0042a364: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0042a367: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x42a36cu); f_0082d7b0();
    /* 0042a36c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0042a36e: call 0x830cd8 */ r_esp -= 4; W32(r_esp, 0x42a373u); f_00830cd8();
    /* 0042a373: mov eax, dword ptr [0x8fcc14] */ r_eax = R32((u32)(0x8fcc14u));
    /* 0042a378: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042a379: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042a37a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0042a37c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042a37d: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x42a382u); f_0082fa0c();
    /* 0042a382: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 0042a386: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0042a388: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0042a38a: jle 0x42a3dd */ if ((fZ||fS!=fO)) goto L_0042a3dd;
L_0042a38c:; BB(0x0042a38c);
    /* 0042a38c: mov dword ptr [esp + 0xc], ebx */ W32((u32)(r_esp+0xcu), r_ebx);
    /* 0042a390: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 0042a394: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 0042a398: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 0042a39c: mov edi, dword ptr [esp + 0x14] */ r_edi = R32((u32)(r_esp+0x14u));
    /* 0042a3a0: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 0042a3a3: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 0042a3a6: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0042a3a8: lea edx, [ecx + ecx] */ r_edx = (u32)(r_ecx+r_ecx);
    /* 0042a3ab: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0042a3ad: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0042a3af: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0042a3b1: mov ebp, eax */ r_ebp = r_eax;
    /* 0042a3b3: mov ebx, edx */ r_ebx = r_edx;
L_0042a3b5:; BB(0x0042a3b5);
    /* 0042a3b5: mov ecx, dword ptr [edi + 8] */ r_ecx = R32((u32)(r_edi+0x8u));
    /* 0042a3b8: lea edx, [ecx + ebx + 4] */ r_edx = (u32)(r_ecx+r_ebx+0x4u);
    /* 0042a3bc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0042a3bd: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0042a3bf: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x42a3c4u); f_0082eab8();
    /* 0042a3c4: add ebx, 0x1c */ {  u32 a = r_ebx; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0042a3c7: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0042a3ca: cmp ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042a3cc: jl 0x42a3b5 */ if ((fS!=fO)) goto L_0042a3b5;
L_0042a3ce:; BB(0x0042a3ce);
    /* 0042a3ce: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 0042a3d2: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 0042a3d6: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 0042a3da: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
L_0042a3dd:; BB(0x0042a3dd);
    /* 0042a3dd: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x42a3e2u); f_0082da80();
    /* 0042a3e2: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042a3e5: ret  */ FN_RET(0x0042a364); r_esp += 4; return;
}

void f_0042a3e8(void) /* sub_42A3E8 */
{
    FN_ENTER(0x0042a3e8);
    /* 0042a3e8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0042a3e9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0042a3eb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042a3ed: call 0x42a40c */ r_esp -= 4; W32(r_esp, 0x42a3f2u); f_0042a40c();
    /* 0042a3f2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0042a3f6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0042a3f8: jne 0x42a3fe */ if (!fZ) goto L_0042a3fe;
L_0042a3fa:; BB(0x0042a3fa);
    /* 0042a3fa: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042a3fb: ret 4 */ FN_RET(0x0042a3e8); r_esp += 8; return;
L_0042a3fe:; BB(0x0042a3fe);
    /* 0042a3fe: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0042a3ff: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x42a404u); f_005c2f74();
    /* 0042a404: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0042a405: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042a406: ret 4 */ FN_RET(0x0042a3e8); r_esp += 8; return;
}

void f_0042a40c(void) /* sub_42A40C */
{
    FN_ENTER(0x0042a40c);
    /* 0042a40c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0042a40d: mov ebp, esp */ r_ebp = r_esp;
    /* 0042a40f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0042a411: push 0x8cdc62 */ { u32 v = 0x8cdc62u; r_esp -= 4; W32(r_esp, v); }
    /* 0042a416: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0042a41c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042a41d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0042a424: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0042a427: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0042a42a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0042a42d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0042a430: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0042a433: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0042a436: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 0042a43d: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0042a440: mov edx, dword ptr [eax + 0x744] */ r_edx = R32((u32)(r_eax+0x744u));
    /* 0042a446: mov dword ptr [eax], 0xaf4440 */ W32((u32)(r_eax), 0xaf4440u);
    /* 0042a44c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042a44e: je 0x42a46a */ if (fZ) goto L_0042a46a;
L_0042a450:; BB(0x0042a450);
    /* 0042a450: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0042a454: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0042a459: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0042a45d: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0042a460: mov dword ptr [eax + 0x744], 0 */ W32((u32)(r_eax+0x744u), 0x0u);
L_0042a46a:; BB(0x0042a46a);
    /* 0042a46a: mov edx, dword ptr [eax + 0x748] */ r_edx = R32((u32)(r_eax+0x748u));
    /* 0042a470: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042a472: je 0x42a48e */ if (fZ) goto L_0042a48e;
L_0042a474:; BB(0x0042a474);
    /* 0042a474: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0042a478: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0042a47d: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0042a481: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0042a484: mov dword ptr [eax + 0x748], 0 */ W32((u32)(r_eax+0x748u), 0x0u);
L_0042a48e:; BB(0x0042a48e);
    /* 0042a48e: mov edx, dword ptr [eax + 0x74c] */ r_edx = R32((u32)(r_eax+0x74cu));
    /* 0042a494: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042a496: je 0x42a4b2 */ if (fZ) goto L_0042a4b2;
L_0042a498:; BB(0x0042a498);
    /* 0042a498: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0042a49c: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0042a4a1: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0042a4a5: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0042a4a8: mov dword ptr [eax + 0x74c], 0 */ W32((u32)(r_eax+0x74cu), 0x0u);
L_0042a4b2:; BB(0x0042a4b2);
    /* 0042a4b2: mov edx, dword ptr [eax + 0x750] */ r_edx = R32((u32)(r_eax+0x750u));
    /* 0042a4b8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042a4ba: je 0x42a4d6 */ if (fZ) goto L_0042a4d6;
L_0042a4bc:; BB(0x0042a4bc);
    /* 0042a4bc: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0042a4c0: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0042a4c5: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0042a4c9: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0042a4cc: mov dword ptr [eax + 0x750], 0 */ W32((u32)(r_eax+0x750u), 0x0u);
L_0042a4d6:; BB(0x0042a4d6);
    /* 0042a4d6: mov edx, dword ptr [eax + 0x754] */ r_edx = R32((u32)(r_eax+0x754u));
    /* 0042a4dc: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042a4de: je 0x42a4fa */ if (fZ) goto L_0042a4fa;
L_0042a4e0:; BB(0x0042a4e0);
    /* 0042a4e0: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0042a4e4: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0042a4e9: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0042a4ed: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0042a4f0: mov dword ptr [eax + 0x754], 0 */ W32((u32)(r_eax+0x754u), 0x0u);
L_0042a4fa:; BB(0x0042a4fa);
    /* 0042a4fa: mov edx, dword ptr [eax + 0x758] */ r_edx = R32((u32)(r_eax+0x758u));
    /* 0042a500: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042a502: je 0x42a51e */ if (fZ) goto L_0042a51e;
L_0042a504:; BB(0x0042a504);
    /* 0042a504: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0042a508: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0042a50d: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0042a511: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0042a514: mov dword ptr [eax + 0x758], 0 */ W32((u32)(r_eax+0x758u), 0x0u);
L_0042a51e:; BB(0x0042a51e);
    /* 0042a51e: mov edx, dword ptr [eax + 0x75c] */ r_edx = R32((u32)(r_eax+0x75cu));
    /* 0042a524: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042a526: je 0x42a542 */ if (fZ) goto L_0042a542;
L_0042a528:; BB(0x0042a528);
    /* 0042a528: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0042a52c: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0042a531: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0042a535: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0042a538: mov dword ptr [eax + 0x75c], 0 */ W32((u32)(r_eax+0x75cu), 0x0u);
L_0042a542:; BB(0x0042a542);
    /* 0042a542: push dword ptr [eax + 0x620] */ { u32 v = R32((u32)(r_eax+0x620u)); r_esp -= 4; W32(r_esp, v); }
    /* 0042a548: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x42a54du); f_00857e98();
    /* 0042a54d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0042a54e: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0042a551: mov edx, dword ptr [eax + 0x6d4] */ r_edx = R32((u32)(r_eax+0x6d4u));
    /* 0042a557: mov dword ptr [eax + 0x620], 0 */ W32((u32)(r_eax+0x620u), 0x0u);
    /* 0042a561: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042a563: je 0x42a57f */ if (fZ) goto L_0042a57f;
L_0042a565:; BB(0x0042a565);
    /* 0042a565: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0042a569: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0042a56e: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0042a572: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0042a575: mov dword ptr [eax + 0x6d4], 0 */ W32((u32)(r_eax+0x6d4u), 0x0u);
L_0042a57f:; BB(0x0042a57f);
    /* 0042a57f: mov edx, dword ptr [eax + 0x6d8] */ r_edx = R32((u32)(r_eax+0x6d8u));
    /* 0042a585: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042a587: je 0x42a5a3 */ if (fZ) goto L_0042a5a3;
L_0042a589:; BB(0x0042a589);
    /* 0042a589: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0042a58d: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0042a592: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0042a596: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0042a599: mov dword ptr [eax + 0x6d8], 0 */ W32((u32)(r_eax+0x6d8u), 0x0u);
L_0042a5a3:; BB(0x0042a5a3);
    /* 0042a5a3: mov ecx, dword ptr [eax + 0x6d0] */ r_ecx = R32((u32)(r_eax+0x6d0u));
    /* 0042a5a9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042a5ab: je 0x42a5c3 */ if (fZ) goto L_0042a5c3;
L_0042a5ad:; BB(0x0042a5ad);
    /* 0042a5ad: je 0x42a5b9 */ if (fZ) goto L_0042a5b9;
L_0042a5af:; BB(0x0042a5af);
    /* 0042a5af: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0042a5b1: call 0x418aa8 */ r_esp -= 4; W32(r_esp, 0x42a5b6u); f_00418aa8();
    /* 0042a5b6: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_0042a5b9:; BB(0x0042a5b9);
    /* 0042a5b9: mov dword ptr [eax + 0x6d0], 0 */ W32((u32)(r_eax+0x6d0u), 0x0u);
L_0042a5c3:; BB(0x0042a5c3);
    /* 0042a5c3: mov edx, dword ptr [eax + 0x6c0] */ r_edx = R32((u32)(r_eax+0x6c0u));
    /* 0042a5c9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042a5cb: je 0x42a5e7 */ if (fZ) goto L_0042a5e7;
L_0042a5cd:; BB(0x0042a5cd);
    /* 0042a5cd: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0042a5d1: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0042a5d6: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0042a5da: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0042a5dd: mov dword ptr [eax + 0x6c0], 0 */ W32((u32)(r_eax+0x6c0u), 0x0u);
L_0042a5e7:; BB(0x0042a5e7);
    /* 0042a5e7: mov edx, dword ptr [eax + 0x658] */ r_edx = R32((u32)(r_eax+0x658u));
    /* 0042a5ed: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042a5ef: je 0x42a60b */ if (fZ) goto L_0042a60b;
L_0042a5f1:; BB(0x0042a5f1);
    /* 0042a5f1: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0042a5f5: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0042a5fa: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0042a5fe: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0042a601: mov dword ptr [eax + 0x658], 0 */ W32((u32)(r_eax+0x658u), 0x0u);
L_0042a60b:; BB(0x0042a60b);
    /* 0042a60b: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0042a60e: mov ecx, dword ptr [eax + 0x654] */ r_ecx = R32((u32)(r_eax+0x654u));
    /* 0042a614: movzx edx, word ptr [ecx + 8] */ r_edx = (u32)R16((u32)(r_ecx+0x8u));
    /* 0042a618: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0042a61e: mov word ptr [ecx + 8], dx */ W16((u32)(r_ecx+0x8u), (u16)r_edx);
    /* 0042a622: mov edi, dword ptr [ebx + 0x650] */ r_edi = R32((u32)(r_ebx+0x650u));
    /* 0042a628: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0042a62b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0042a62d: mov dword ptr [ebx + 0x654], eax */ W32((u32)(r_ebx+0x654u), r_eax);
    /* 0042a633: movzx esi, word ptr [edi + 8] */ r_esi = (u32)R16((u32)(r_edi+0x8u));
    /* 0042a637: or esi, 0xffff0001 */ {  u32 a = r_esi; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 0042a63d: mov word ptr [edi + 8], si */ W16((u32)(r_edi+0x8u), (u16)r_esi);
    /* 0042a641: mov ecx, dword ptr [edx + 0x64c] */ r_ecx = R32((u32)(r_edx+0x64cu));
    /* 0042a647: mov dword ptr [edx + 0x650], eax */ W32((u32)(r_edx+0x650u), r_eax);
    /* 0042a64d: movzx edx, word ptr [ecx + 8] */ r_edx = (u32)R16((u32)(r_ecx+0x8u));
    /* 0042a651: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0042a657: mov word ptr [ecx + 8], dx */ W16((u32)(r_ecx+0x8u), (u16)r_edx);
    /* 0042a65b: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0042a65e: mov ecx, dword ptr [edx + 0x648] */ r_ecx = R32((u32)(r_edx+0x648u));
    /* 0042a664: mov dword ptr [edx + 0x64c], eax */ W32((u32)(r_edx+0x64cu), r_eax);
    /* 0042a66a: movzx edx, word ptr [ecx + 8] */ r_edx = (u32)R16((u32)(r_ecx+0x8u));
    /* 0042a66e: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0042a674: mov word ptr [ecx + 8], dx */ W16((u32)(r_ecx+0x8u), (u16)r_edx);
    /* 0042a678: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0042a67b: mov ecx, dword ptr [edx + 0x644] */ r_ecx = R32((u32)(r_edx+0x644u));
    /* 0042a681: mov dword ptr [edx + 0x648], eax */ W32((u32)(r_edx+0x648u), r_eax);
    /* 0042a687: movzx edx, word ptr [ecx + 8] */ r_edx = (u32)R16((u32)(r_ecx+0x8u));
    /* 0042a68b: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0042a691: mov word ptr [ecx + 8], dx */ W16((u32)(r_ecx+0x8u), (u16)r_edx);
    /* 0042a695: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0042a698: mov ecx, dword ptr [edx + 0x640] */ r_ecx = R32((u32)(r_edx+0x640u));
    /* 0042a69e: mov dword ptr [edx + 0x644], eax */ W32((u32)(r_edx+0x644u), r_eax);
    /* 0042a6a4: movzx edx, word ptr [ecx + 8] */ r_edx = (u32)R16((u32)(r_ecx+0x8u));
    /* 0042a6a8: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0042a6ae: mov word ptr [ecx + 8], dx */ W16((u32)(r_ecx+0x8u), (u16)r_edx);
    /* 0042a6b2: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0042a6b5: mov ecx, dword ptr [edx + 0x63c] */ r_ecx = R32((u32)(r_edx+0x63cu));
    /* 0042a6bb: mov dword ptr [edx + 0x640], eax */ W32((u32)(r_edx+0x640u), r_eax);
    /* 0042a6c1: movzx edx, word ptr [ecx + 8] */ r_edx = (u32)R16((u32)(r_ecx+0x8u));
    /* 0042a6c5: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0042a6cb: mov word ptr [ecx + 8], dx */ W16((u32)(r_ecx+0x8u), (u16)r_edx);
    /* 0042a6cf: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0042a6d2: mov ecx, dword ptr [edx + 0x638] */ r_ecx = R32((u32)(r_edx+0x638u));
    /* 0042a6d8: mov dword ptr [edx + 0x63c], eax */ W32((u32)(r_edx+0x63cu), r_eax);
    /* 0042a6de: movzx edx, word ptr [ecx + 8] */ r_edx = (u32)R16((u32)(r_ecx+0x8u));
    /* 0042a6e2: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0042a6e8: mov word ptr [ecx + 8], dx */ W16((u32)(r_ecx+0x8u), (u16)r_edx);
    /* 0042a6ec: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0042a6ef: mov ecx, dword ptr [edx + 0x60c] */ r_ecx = R32((u32)(r_edx+0x60cu));
    /* 0042a6f5: mov dword ptr [edx + 0x638], eax */ W32((u32)(r_edx+0x638u), r_eax);
    /* 0042a6fb: movzx edx, word ptr [ecx + 8] */ r_edx = (u32)R16((u32)(r_ecx+0x8u));
    /* 0042a6ff: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0042a705: mov word ptr [ecx + 8], dx */ W16((u32)(r_ecx+0x8u), (u16)r_edx);
    /* 0042a709: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0042a70c: mov ecx, dword ptr [edx + 0x608] */ r_ecx = R32((u32)(r_edx+0x608u));
    /* 0042a712: mov dword ptr [edx + 0x60c], eax */ W32((u32)(r_edx+0x60cu), r_eax);
    /* 0042a718: movzx edx, word ptr [ecx + 8] */ r_edx = (u32)R16((u32)(r_ecx+0x8u));
    /* 0042a71c: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0042a722: mov word ptr [ecx + 8], dx */ W16((u32)(r_ecx+0x8u), (u16)r_edx);
    /* 0042a726: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0042a729: mov ecx, dword ptr [edx + 0x604] */ r_ecx = R32((u32)(r_edx+0x604u));
    /* 0042a72f: mov dword ptr [edx + 0x608], eax */ W32((u32)(r_edx+0x608u), r_eax);
    /* 0042a735: movzx edx, word ptr [ecx + 8] */ r_edx = (u32)R16((u32)(r_ecx+0x8u));
    /* 0042a739: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0042a73f: mov word ptr [ecx + 8], dx */ W16((u32)(r_ecx+0x8u), (u16)r_edx);
    /* 0042a743: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0042a746: mov ecx, dword ptr [edx + 0x600] */ r_ecx = R32((u32)(r_edx+0x600u));
    /* 0042a74c: mov dword ptr [edx + 0x604], eax */ W32((u32)(r_edx+0x604u), r_eax);
    /* 0042a752: movzx edx, word ptr [ecx + 8] */ r_edx = (u32)R16((u32)(r_ecx+0x8u));
    /* 0042a756: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0042a75c: mov word ptr [ecx + 8], dx */ W16((u32)(r_ecx+0x8u), (u16)r_edx);
    /* 0042a760: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0042a763: mov ecx, dword ptr [edx + 0x5fc] */ r_ecx = R32((u32)(r_edx+0x5fcu));
    /* 0042a769: mov dword ptr [edx + 0x600], eax */ W32((u32)(r_edx+0x600u), r_eax);
    /* 0042a76f: movzx edx, word ptr [ecx + 8] */ r_edx = (u32)R16((u32)(r_ecx+0x8u));
    /* 0042a773: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0042a779: mov word ptr [ecx + 8], dx */ W16((u32)(r_ecx+0x8u), (u16)r_edx);
    /* 0042a77d: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0042a780: mov ecx, dword ptr [edx + 0x5f8] */ r_ecx = R32((u32)(r_edx+0x5f8u));
    /* 0042a786: mov dword ptr [edx + 0x5fc], eax */ W32((u32)(r_edx+0x5fcu), r_eax);
    /* 0042a78c: movzx edx, word ptr [ecx + 8] */ r_edx = (u32)R16((u32)(r_ecx+0x8u));
    /* 0042a790: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0042a796: mov word ptr [ecx + 8], dx */ W16((u32)(r_ecx+0x8u), (u16)r_edx);
    /* 0042a79a: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0042a79d: mov ecx, dword ptr [edx + 0x5f4] */ r_ecx = R32((u32)(r_edx+0x5f4u));
    /* 0042a7a3: mov dword ptr [edx + 0x5f8], eax */ W32((u32)(r_edx+0x5f8u), r_eax);
    /* 0042a7a9: movzx edx, word ptr [ecx + 8] */ r_edx = (u32)R16((u32)(r_ecx+0x8u));
    /* 0042a7ad: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0042a7b3: mov word ptr [ecx + 8], dx */ W16((u32)(r_ecx+0x8u), (u16)r_edx);
    /* 0042a7b7: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0042a7ba: mov ecx, dword ptr [edx + 0x5f0] */ r_ecx = R32((u32)(r_edx+0x5f0u));
    /* 0042a7c0: mov dword ptr [edx + 0x5f4], eax */ W32((u32)(r_edx+0x5f4u), r_eax);
    /* 0042a7c6: movzx edx, word ptr [ecx + 8] */ r_edx = (u32)R16((u32)(r_ecx+0x8u));
    /* 0042a7ca: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0042a7d0: mov word ptr [ecx + 8], dx */ W16((u32)(r_ecx+0x8u), (u16)r_edx);
    /* 0042a7d4: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0042a7d7: mov ecx, dword ptr [edx + 0x5ec] */ r_ecx = R32((u32)(r_edx+0x5ecu));
    /* 0042a7dd: mov dword ptr [edx + 0x5f0], eax */ W32((u32)(r_edx+0x5f0u), r_eax);
    /* 0042a7e3: movzx edx, word ptr [ecx + 8] */ r_edx = (u32)R16((u32)(r_ecx+0x8u));
    /* 0042a7e7: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0042a7ed: mov word ptr [ecx + 8], dx */ W16((u32)(r_ecx+0x8u), (u16)r_edx);
    /* 0042a7f1: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0042a7f4: mov ecx, dword ptr [edx + 0x5e8] */ r_ecx = R32((u32)(r_edx+0x5e8u));
    /* 0042a7fa: mov dword ptr [edx + 0x5ec], eax */ W32((u32)(r_edx+0x5ecu), r_eax);
    /* 0042a800: movzx edx, word ptr [ecx + 8] */ r_edx = (u32)R16((u32)(r_ecx+0x8u));
    /* 0042a804: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0042a80a: mov word ptr [ecx + 8], dx */ W16((u32)(r_ecx+0x8u), (u16)r_edx);
    /* 0042a80e: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0042a811: mov ecx, dword ptr [edx + 0x634] */ r_ecx = R32((u32)(r_edx+0x634u));
    /* 0042a817: mov dword ptr [edx + 0x5e8], eax */ W32((u32)(r_edx+0x5e8u), r_eax);
    /* 0042a81d: movzx edx, word ptr [ecx + 8] */ r_edx = (u32)R16((u32)(r_ecx+0x8u));
    /* 0042a821: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0042a827: mov word ptr [ecx + 8], dx */ W16((u32)(r_ecx+0x8u), (u16)r_edx);
    /* 0042a82b: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0042a82e: mov ecx, dword ptr [edx + 0x630] */ r_ecx = R32((u32)(r_edx+0x630u));
    /* 0042a834: mov dword ptr [edx + 0x634], eax */ W32((u32)(r_edx+0x634u), r_eax);
    /* 0042a83a: movzx edx, word ptr [ecx + 8] */ r_edx = (u32)R16((u32)(r_ecx+0x8u));
    /* 0042a83e: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0042a844: mov word ptr [ecx + 8], dx */ W16((u32)(r_ecx+0x8u), (u16)r_edx);
    /* 0042a848: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0042a84b: mov ecx, dword ptr [edx + 0x62c] */ r_ecx = R32((u32)(r_edx+0x62cu));
    /* 0042a851: mov dword ptr [edx + 0x630], eax */ W32((u32)(r_edx+0x630u), r_eax);
    /* 0042a857: movzx edx, word ptr [ecx + 8] */ r_edx = (u32)R16((u32)(r_ecx+0x8u));
    /* 0042a85b: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0042a861: mov word ptr [ecx + 8], dx */ W16((u32)(r_ecx+0x8u), (u16)r_edx);
    /* 0042a865: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0042a868: mov ecx, dword ptr [edx + 0x628] */ r_ecx = R32((u32)(r_edx+0x628u));
    /* 0042a86e: mov dword ptr [edx + 0x62c], eax */ W32((u32)(r_edx+0x62cu), r_eax);
    /* 0042a874: movzx edx, word ptr [ecx + 8] */ r_edx = (u32)R16((u32)(r_ecx+0x8u));
    /* 0042a878: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0042a87e: mov word ptr [ecx + 8], dx */ W16((u32)(r_ecx+0x8u), (u16)r_edx);
    /* 0042a882: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0042a885: push dword ptr [edx + 0x624] */ { u32 v = R32((u32)(r_edx+0x624u)); r_esp -= 4; W32(r_esp, v); }
    /* 0042a88b: mov dword ptr [edx + 0x628], eax */ W32((u32)(r_edx+0x628u), r_eax);
    /* 0042a891: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x42a896u); f_00857e98();
    /* 0042a896: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0042a897: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0042a89a: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x42a89fu); f_007b9c8c();
    /* 0042a89f: mov eax, dword ptr [0xa43ce0] */ r_eax = R32((u32)(0xa43ce0u));
    /* 0042a8a4: cmp eax, dword ptr [ebp - 0x20] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042a8a7: jne 0x42a8b7 */ if (!fZ) goto L_0042a8b7;
L_0042a8ad:; BB(0x0042a8ad);
    /* 0042a8ad: mov dword ptr [0xa43ce0], 0 */ W32((u32)(0xa43ce0u), 0x0u);
L_0042a8b7:; BB(0x0042a8b7);
    /* 0042a8b7: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 0042a8be: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0042a8c1: add ecx, 0x3e0 */ {  u32 a = r_ecx; u32 b = 0x3e0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0042a8c7: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x42a8ccu); f_008171e8();
    /* 0042a8cc: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0042a8d3: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0042a8d6: call 0x51f4fc */ r_esp -= 4; W32(r_esp, 0x42a8dbu); f_0051f4fc();
    /* 0042a8db: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0042a8de: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0042a8e1: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0042a8e4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042a8e7: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0042a8ee: mov esp, ebp */ r_esp = r_ebp;
    /* 0042a8f0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042a8f1: ret  */ FN_RET(0x0042a40c); r_esp += 4; return;
}

void f_0042a8f4(void) /* sub_42A8F4 */
{
    FN_ENTER(0x0042a8f4);
    /* 0042a8f4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0042a8f5: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0042a8f7: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0042a8f9: call 0x42ee78 */ r_esp -= 4; W32(r_esp, 0x42a8feu); f_0042ee78();
    /* 0042a8fe: mov eax, ebp */ r_eax = r_ebp;
    /* 0042a900: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042a901: ret  */ FN_RET(0x0042a8f4); r_esp += 4; return;
}

void f_0042a904(void) /* sub_42A904 */
{
    FN_ENTER(0x0042a904);
    /* 0042a904: mov edx, dword ptr [0xa43d20] */ r_edx = R32((u32)(0xa43d20u));
    /* 0042a90a: mov eax, dword ptr [0xa43d1c] */ r_eax = R32((u32)(0xa43d1cu));
    /* 0042a90f: cmp edx, dword ptr [eax*4 + 0x8fcba0] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax*4+0x8fcba0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042a916: jne 0x42a945 */ if (!fZ) goto L_0042a945;
L_0042a918:; BB(0x0042a918);
    /* 0042a918: push dword ptr [0xa43cf8] */ { u32 v = R32((u32)(0xa43cf8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0042a91e: push 0xa43cfc */ { u32 v = 0xa43cfcu; r_esp -= 4; W32(r_esp, v); }
    /* 0042a923: call 0x520c5c */ r_esp -= 4; W32(r_esp, 0x42a928u); f_00520c5c();
    /* 0042a928: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042a92b: mov eax, dword ptr [0xa43cf8] */ r_eax = R32((u32)(0xa43cf8u));
    /* 0042a930: mov edx, dword ptr [0xa43d20] */ r_edx = R32((u32)(0xa43d20u));
    /* 0042a936: add dword ptr [0xa43d1c], 1 */ { u32 ad = (u32)(0xa43d1cu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0042a93d: add eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0042a940: mov dword ptr [0xa43cf8], eax */ W32((u32)(0xa43cf8u), r_eax);
L_0042a945:; BB(0x0042a945);
    /* 0042a945: cmp edx, 0x33 */ {  u32 a = r_edx; u32 b = 0x33u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042a948: je 0x42a9d4 */ if (fZ) goto L_0042a9d4;
L_0042a94e:; BB(0x0042a94e);
    /* 0042a94e: mov eax, dword ptr [0xa43d18] */ r_eax = R32((u32)(0xa43d18u));
    /* 0042a953: test eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042a958: je 0x42a991 */ if (fZ) goto L_0042a991;
L_0042a95a:; BB(0x0042a95a);
    /* 0042a95a: cmp edx, 0x4d */ {  u32 a = r_edx; u32 b = 0x4du; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042a95d: jl 0x42a991 */ if ((fS!=fO)) goto L_0042a991;
L_0042a95f:; BB(0x0042a95f);
    /* 0042a95f: cmp edx, 0x58 */ {  u32 a = r_edx; u32 b = 0x58u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042a962: jg 0x42a991 */ if ((!fZ&&fS==fO)) goto L_0042a991;
L_0042a964:; BB(0x0042a964);
    /* 0042a964: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x42a969u); f_0082d7b0();
    /* 0042a969: call 0x520c54 */ r_esp -= 4; W32(r_esp, 0x42a96eu); f_00520c54();
    /* 0042a96e: mov ecx, dword ptr [0xa43cec] */ r_ecx = R32((u32)(0xa43cecu));
    /* 0042a974: call 0x831650 */ r_esp -= 4; W32(r_esp, 0x42a979u); f_00831650();
    /* 0042a979: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x42a97eu); f_0082da80();
    /* 0042a97e: mov eax, dword ptr [0xa43cec] */ r_eax = R32((u32)(0xa43cecu));
    /* 0042a983: mov edx, dword ptr [0xa43d20] */ r_edx = R32((u32)(0xa43d20u));
    /* 0042a989: add eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0042a98c: mov dword ptr [0xa43cec], eax */ W32((u32)(0xa43cecu), r_eax);
L_0042a991:; BB(0x0042a991);
    /* 0042a991: cmp edx, 0x1d */ {  u32 a = r_edx; u32 b = 0x1du; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042a994: jl 0x42a99b */ if ((fS!=fO)) goto L_0042a99b;
L_0042a996:; BB(0x0042a996);
    /* 0042a996: cmp edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042a999: jle 0x42a9a5 */ if ((fZ||fS!=fO)) goto L_0042a9a5;
L_0042a99b:; BB(0x0042a99b);
    /* 0042a99b: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042a99e: mov dword ptr [0xa43d20], edx */ W32((u32)(0xa43d20u), r_edx);
    /* 0042a9a4: ret  */ FN_RET(0x0042a904); r_esp += 4; return;
L_0042a9a5:; BB(0x0042a9a5);
    /* 0042a9a5: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x42a9aau); f_0082d7b0();
    /* 0042a9aa: call 0x520c54 */ r_esp -= 4; W32(r_esp, 0x42a9afu); f_00520c54();
    /* 0042a9af: mov ecx, dword ptr [0xa43cf0] */ r_ecx = R32((u32)(0xa43cf0u));
    /* 0042a9b5: call 0x831650 */ r_esp -= 4; W32(r_esp, 0x42a9bau); f_00831650();
    /* 0042a9ba: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x42a9bfu); f_0082da80();
    /* 0042a9bf: mov eax, dword ptr [0xa43cf0] */ r_eax = R32((u32)(0xa43cf0u));
    /* 0042a9c4: mov edx, dword ptr [0xa43d20] */ r_edx = R32((u32)(0xa43d20u));
    /* 0042a9ca: add eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0042a9cd: mov dword ptr [0xa43cf0], eax */ W32((u32)(0xa43cf0u), r_eax);
    /* 0042a9d2: jmp 0x42a99b */ goto L_0042a99b;
L_0042a9d4:; BB(0x0042a9d4);
    /* 0042a9d4: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x42a9d9u); f_0082d7b0();
    /* 0042a9d9: call 0x520c54 */ r_esp -= 4; W32(r_esp, 0x42a9deu); f_00520c54();
    /* 0042a9de: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0042a9e0: push dword ptr [0xa43cf4] */ { u32 v = R32((u32)(0xa43cf4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0042a9e6: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0042a9e8: mov edx, 0x9a4778 */ r_edx = 0x9a4778u;
    /* 0042a9ed: call 0x82f940 */ r_esp -= 4; W32(r_esp, 0x42a9f2u); f_0082f940();
    /* 0042a9f2: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x42a9f7u); f_0082da80();
    /* 0042a9f7: mov edx, dword ptr [0xa43cf4] */ r_edx = R32((u32)(0xa43cf4u));
    /* 0042a9fd: lea ecx, [edx + 0xc] */ r_ecx = (u32)(r_edx+0xcu);
    /* 0042aa00: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x42aa05u); f_0082f9c4();
    /* 0042aa05: mov edx, dword ptr [0xa43d20] */ r_edx = R32((u32)(0xa43d20u));
    /* 0042aa0b: jmp 0x42a94e */ goto L_0042a94e;
}

void f_0042aa10(void) /* sub_42AA10 */
{
    FN_ENTER(0x0042aa10);
    /* 0042aa10: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0042aa13: mov eax, dword ptr [ecx + 0x448] */ r_eax = R32((u32)(r_ecx+0x448u));
    /* 0042aa19: mov edx, dword ptr [ecx + 0x44c] */ r_edx = R32((u32)(r_ecx+0x44cu));
    /* 0042aa1f: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0042aa22: mov eax, dword ptr [ecx + 0x450] */ r_eax = R32((u32)(r_ecx+0x450u));
    /* 0042aa28: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0042aa2c: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0042aa30: mov eax, dword ptr [ecx + 0x508] */ r_eax = R32((u32)(r_ecx+0x508u));
    /* 0042aa36: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0042aa3a: mov eax, dword ptr [ecx + 0x50c] */ r_eax = R32((u32)(r_ecx+0x50cu));
    /* 0042aa40: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0042aa44: mov eax, dword ptr [ecx + 0x510] */ r_eax = R32((u32)(r_ecx+0x510u));
    /* 0042aa4a: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0042aa4e: mov eax, dword ptr [ecx + 0x514] */ r_eax = R32((u32)(r_ecx+0x514u));
    /* 0042aa54: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0042aa58: mov eax, dword ptr [ecx + 0x518] */ r_eax = R32((u32)(r_ecx+0x518u));
    /* 0042aa5e: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 0042aa62: mov eax, dword ptr [ecx + 0x51c] */ r_eax = R32((u32)(r_ecx+0x51cu));
    /* 0042aa68: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0042aa6c: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0042aa6f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042aa70: call 0x520158 */ r_esp -= 4; W32(r_esp, 0x42aa75u); f_00520158();
    /* 0042aa75: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042aa78: ret  */ FN_RET(0x0042aa10); r_esp += 4; return;
}

void f_0042aa7c(void) /* sub_42AA7C */
{
    FN_ENTER(0x0042aa7c);
    /* 0042aa7c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0042aa7d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0042aa7f: mov eax, dword ptr [ebx + 0x3dc] */ r_eax = R32((u32)(r_ebx+0x3dcu));
    /* 0042aa85: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0042aa88: mov dword ptr [ebx + 0x3dc], eax */ W32((u32)(r_ebx+0x3dcu), r_eax);
    /* 0042aa8e: call 0x520e6c */ r_esp -= 4; W32(r_esp, 0x42aa93u); f_00520e6c();
    /* 0042aa93: mov edx, dword ptr [ebx + 0x3dc] */ r_edx = R32((u32)(r_ebx+0x3dcu));
    /* 0042aa99: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042aa9b: je 0x42aaa6 */ if (fZ) goto L_0042aaa6;
L_0042aa9d:; BB(0x0042aa9d);
    /* 0042aa9d: mov eax, dword ptr [edx*4 + 0x9a4440] */ r_eax = R32((u32)(r_edx*4+0x9a4440u));
    /* 0042aaa4: jmp 0x42aaad */ goto L_0042aaad;
L_0042aaa6:; BB(0x0042aaa6);
    /* 0042aaa6: mov eax, dword ptr [edx*4 + 0x9a4380] */ r_eax = R32((u32)(r_edx*4+0x9a4380u));
L_0042aaad:; BB(0x0042aaad);
    /* 0042aaad: lea edx, [eax - 0x21] */ r_edx = (u32)(r_eax+0xffffffdfu);
    /* 0042aab0: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0042aab3: ja 0x42abed */ if ((!fC&&!fZ)) goto L_0042abed;
L_0042aab9:; BB(0x0042aab9);
    /* 0042aab9: mov edx, dword ptr [edx*4 + 0x8fc760] */ r_edx = R32((u32)(r_edx*4+0x8fc760u));
    /* 0042aac0: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
L_0042abed:; BB(0x0042abed);
    /* 0042abed: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042abee: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042abf0: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x42abf5u); f_0042abf8();
    /* 0042abf5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042abf6: ret  */ FN_RET(0x0042aa7c); r_esp += 4; return;
}

void f_0042aac2(void)
{
    FN_ENTER(0x0042aac2);
    goto L_0042aac2;
L_0042aa85:; BB(0x0042aa85);
    /* 0042aa85: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0042aa88: mov dword ptr [ebx + 0x3dc], eax */ W32((u32)(r_ebx+0x3dcu), r_eax);
    /* 0042aa8e: call 0x520e6c */ r_esp -= 4; W32(r_esp, 0x42aa93u); f_00520e6c();
    /* 0042aa93: mov edx, dword ptr [ebx + 0x3dc] */ r_edx = R32((u32)(r_ebx+0x3dcu));
    /* 0042aa99: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042aa9b: je 0x42aaa6 */ if (fZ) goto L_0042aaa6;
L_0042aa9d:; BB(0x0042aa9d);
    /* 0042aa9d: mov eax, dword ptr [edx*4 + 0x9a4440] */ r_eax = R32((u32)(r_edx*4+0x9a4440u));
    /* 0042aaa4: jmp 0x42aaad */ goto L_0042aaad;
L_0042aaa6:; BB(0x0042aaa6);
    /* 0042aaa6: mov eax, dword ptr [edx*4 + 0x9a4380] */ r_eax = R32((u32)(r_edx*4+0x9a4380u));
L_0042aaad:; BB(0x0042aaad);
    /* 0042aaad: lea edx, [eax - 0x21] */ r_edx = (u32)(r_eax+0xffffffdfu);
    /* 0042aab0: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0042aab3: ja 0x42abed */ if ((!fC&&!fZ)) goto L_0042abed;
L_0042aab9:; BB(0x0042aab9);
    /* 0042aab9: mov edx, dword ptr [edx*4 + 0x8fc760] */ r_edx = R32((u32)(r_edx*4+0x8fc760u));
    /* 0042aac0: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
L_0042aac2:; BB(0x0042aac2);
    /* 0042aac2: mov eax, 5 */ r_eax = 0x5u;
    /* 0042aac7: jmp 0x42aa85 */ goto L_0042aa85;
L_0042abed:; BB(0x0042abed);
    /* 0042abed: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042abee: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042abf0: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x42abf5u); f_0042abf8();
    /* 0042abf5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042abf6: ret  */ FN_RET(0x0042aac2); r_esp += 4; return;
}

void f_0042aac9(void)
{
    FN_ENTER(0x0042aac9);
    /* 0042aac9: mov eax, dword ptr [ebx + 0x660] */ r_eax = R32((u32)(r_ebx+0x660u));
    /* 0042aacf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042aad1: jne 0x42aadd */ if (!fZ) goto L_0042aadd;
L_0042aad3:; BB(0x0042aad3);
    /* 0042aad3: mov eax, 0x16 */ r_eax = 0x16u;
    /* 0042aad8: jmp 0x42abed */ goto L_0042abed;
L_0042aadd:; BB(0x0042aadd);
    /* 0042aadd: mov eax, 0x17 */ r_eax = 0x17u;
    /* 0042aae2: jmp 0x42abed */ goto L_0042abed;
L_0042abed:; BB(0x0042abed);
    /* 0042abed: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042abee: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042abf0: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x42abf5u); f_0042abf8();
    /* 0042abf5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042abf6: ret  */ FN_RET(0x0042aac9); r_esp += 4; return;
}

void f_0042aae7(void)
{
    FN_ENTER(0x0042aae7);
    /* 0042aae7: mov eax, dword ptr [ebx + 0x660] */ r_eax = R32((u32)(r_ebx+0x660u));
    /* 0042aaed: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042aaef: jne 0x42aafb */ if (!fZ) goto L_0042aafb;
L_0042aaf1:; BB(0x0042aaf1);
    /* 0042aaf1: mov eax, 0x14 */ r_eax = 0x14u;
    /* 0042aaf6: jmp 0x42abed */ goto L_0042abed;
L_0042aafb:; BB(0x0042aafb);
    /* 0042aafb: mov eax, 0x15 */ r_eax = 0x15u;
    /* 0042ab00: jmp 0x42abed */ goto L_0042abed;
L_0042abed:; BB(0x0042abed);
    /* 0042abed: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042abee: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042abf0: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x42abf5u); f_0042abf8();
    /* 0042abf5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042abf6: ret  */ FN_RET(0x0042aae7); r_esp += 4; return;
}

void f_0042ab05(void)
{
    FN_ENTER(0x0042ab05);
    /* 0042ab05: mov eax, dword ptr [ebx + 0x660] */ r_eax = R32((u32)(r_ebx+0x660u));
    /* 0042ab0b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042ab0d: jne 0x42ab19 */ if (!fZ) goto L_0042ab19;
L_0042ab0f:; BB(0x0042ab0f);
    /* 0042ab0f: mov eax, 0x12 */ r_eax = 0x12u;
    /* 0042ab14: jmp 0x42abed */ goto L_0042abed;
L_0042ab19:; BB(0x0042ab19);
    /* 0042ab19: mov eax, 0x13 */ r_eax = 0x13u;
    /* 0042ab1e: jmp 0x42abed */ goto L_0042abed;
L_0042abed:; BB(0x0042abed);
    /* 0042abed: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042abee: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042abf0: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x42abf5u); f_0042abf8();
    /* 0042abf5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042abf6: ret  */ FN_RET(0x0042ab05); r_esp += 4; return;
}

void f_0042ab23(void)
{
    FN_ENTER(0x0042ab23);
    /* 0042ab23: mov eax, dword ptr [ebx + 0x660] */ r_eax = R32((u32)(r_ebx+0x660u));
    /* 0042ab29: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042ab2b: jne 0x42ab37 */ if (!fZ) goto L_0042ab37;
L_0042ab2d:; BB(0x0042ab2d);
    /* 0042ab2d: mov eax, 0x10 */ r_eax = 0x10u;
    /* 0042ab32: jmp 0x42abed */ goto L_0042abed;
L_0042ab37:; BB(0x0042ab37);
    /* 0042ab37: mov eax, 0x11 */ r_eax = 0x11u;
    /* 0042ab3c: jmp 0x42abed */ goto L_0042abed;
L_0042abed:; BB(0x0042abed);
    /* 0042abed: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042abee: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042abf0: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x42abf5u); f_0042abf8();
    /* 0042abf5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042abf6: ret  */ FN_RET(0x0042ab23); r_esp += 4; return;
}

void f_0042ab41(void)
{
    FN_ENTER(0x0042ab41);
    /* 0042ab41: mov eax, dword ptr [ebx + 0x660] */ r_eax = R32((u32)(r_ebx+0x660u));
    /* 0042ab47: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042ab49: jne 0x42ab55 */ if (!fZ) goto L_0042ab55;
L_0042ab4b:; BB(0x0042ab4b);
    /* 0042ab4b: mov eax, 4 */ r_eax = 0x4u;
    /* 0042ab50: jmp 0x42abed */ goto L_0042abed;
L_0042ab55:; BB(0x0042ab55);
    /* 0042ab55: mov eax, 0xa */ r_eax = 0xau;
    /* 0042ab5a: jmp 0x42abed */ goto L_0042abed;
L_0042abed:; BB(0x0042abed);
    /* 0042abed: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042abee: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042abf0: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x42abf5u); f_0042abf8();
    /* 0042abf5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042abf6: ret  */ FN_RET(0x0042ab41); r_esp += 4; return;
}

void f_0042ab5f(void)
{
    FN_ENTER(0x0042ab5f);
    /* 0042ab5f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042ab61: call 0x520bf4 */ r_esp -= 4; W32(r_esp, 0x42ab66u); f_00520bf4();
    /* 0042ab66: fcomp dword ptr [0x8fd16c] */ fx_compare(ST(0), R_F32((u32)(0x8fd16cu))); FPOP();
    /* 0042ab6c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0042ab6e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0042ab6f: jbe 0x42ab78 */ if ((fC||fZ)) goto L_0042ab78;
L_0042ab71:; BB(0x0042ab71);
    /* 0042ab71: mov eax, 0x18 */ r_eax = 0x18u;
    /* 0042ab76: jmp 0x42abed */ goto L_0042abed;
L_0042ab78:; BB(0x0042ab78);
    /* 0042ab78: mov eax, 0x19 */ r_eax = 0x19u;
    /* 0042ab7d: jmp 0x42abed */ goto L_0042abed;
L_0042abed:; BB(0x0042abed);
    /* 0042abed: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042abee: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042abf0: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x42abf5u); f_0042abf8();
    /* 0042abf5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042abf6: ret  */ FN_RET(0x0042ab5f); r_esp += 4; return;
}

void f_0042ab7f(void)
{
    FN_ENTER(0x0042ab7f);
    /* 0042ab7f: mov eax, dword ptr [ebx + 0x660] */ r_eax = R32((u32)(r_ebx+0x660u));
    /* 0042ab85: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042ab87: jne 0x42ab90 */ if (!fZ) goto L_0042ab90;
L_0042ab89:; BB(0x0042ab89);
    /* 0042ab89: mov eax, 3 */ r_eax = 0x3u;
    /* 0042ab8e: jmp 0x42abed */ goto L_0042abed;
L_0042ab90:; BB(0x0042ab90);
    /* 0042ab90: mov eax, 0xb */ r_eax = 0xbu;
    /* 0042ab95: jmp 0x42abed */ goto L_0042abed;
L_0042abed:; BB(0x0042abed);
    /* 0042abed: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042abee: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042abf0: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x42abf5u); f_0042abf8();
    /* 0042abf5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042abf6: ret  */ FN_RET(0x0042ab7f); r_esp += 4; return;
}

void f_0042ab97(void)
{
    FN_ENTER(0x0042ab97);
    /* 0042ab97: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042ab99: call 0x520bf4 */ r_esp -= 4; W32(r_esp, 0x42ab9eu); f_00520bf4();
    /* 0042ab9e: fcomp dword ptr [0x8fd16c] */ fx_compare(ST(0), R_F32((u32)(0x8fd16cu))); FPOP();
    /* 0042aba4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0042aba6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0042aba7: jbe 0x42abb0 */ if ((fC||fZ)) goto L_0042abb0;
L_0042aba9:; BB(0x0042aba9);
    /* 0042aba9: mov eax, 0xc */ r_eax = 0xcu;
    /* 0042abae: jmp 0x42abed */ goto L_0042abed;
L_0042abb0:; BB(0x0042abb0);
    /* 0042abb0: mov eax, 0xe */ r_eax = 0xeu;
    /* 0042abb5: jmp 0x42abed */ goto L_0042abed;
L_0042abed:; BB(0x0042abed);
    /* 0042abed: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042abee: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042abf0: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x42abf5u); f_0042abf8();
    /* 0042abf5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042abf6: ret  */ FN_RET(0x0042ab97); r_esp += 4; return;
}

void f_0042abb7(void)
{
    FN_ENTER(0x0042abb7);
    /* 0042abb7: mov eax, dword ptr [ebx + 0x660] */ r_eax = R32((u32)(r_ebx+0x660u));
    /* 0042abbd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042abbf: jne 0x42abc8 */ if (!fZ) goto L_0042abc8;
L_0042abc1:; BB(0x0042abc1);
    /* 0042abc1: mov eax, 5 */ r_eax = 0x5u;
    /* 0042abc6: jmp 0x42abed */ goto L_0042abed;
L_0042abc8:; BB(0x0042abc8);
    /* 0042abc8: mov eax, 9 */ r_eax = 0x9u;
    /* 0042abcd: jmp 0x42abed */ goto L_0042abed;
L_0042abed:; BB(0x0042abed);
    /* 0042abed: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042abee: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042abf0: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x42abf5u); f_0042abf8();
    /* 0042abf5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042abf6: ret  */ FN_RET(0x0042abb7); r_esp += 4; return;
}

void f_0042abcf(void)
{
    FN_ENTER(0x0042abcf);
    /* 0042abcf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042abd1: call 0x520bf4 */ r_esp -= 4; W32(r_esp, 0x42abd6u); f_00520bf4();
    /* 0042abd6: fcomp dword ptr [0x8fd16c] */ fx_compare(ST(0), R_F32((u32)(0x8fd16cu))); FPOP();
    /* 0042abdc: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0042abde: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0042abdf: jbe 0x42abe8 */ if ((fC||fZ)) goto L_0042abe8;
L_0042abe1:; BB(0x0042abe1);
    /* 0042abe1: mov eax, 8 */ r_eax = 0x8u;
    /* 0042abe6: jmp 0x42abed */ goto L_0042abed;
L_0042abe8:; BB(0x0042abe8);
    /* 0042abe8: mov eax, 6 */ r_eax = 0x6u;
L_0042abed:; BB(0x0042abed);
    /* 0042abed: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042abee: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042abf0: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x42abf5u); f_0042abf8();
    /* 0042abf5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042abf6: ret  */ FN_RET(0x0042abcf); r_esp += 4; return;
}

void f_0042abed(void)
{
    FN_ENTER(0x0042abed);
    /* 0042abed: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042abee: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042abf0: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x42abf5u); f_0042abf8();
    /* 0042abf5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042abf6: ret  */ FN_RET(0x0042abed); r_esp += 4; return;
}

void f_0042abf8(void) /* sub_42ABF8 */
{
    FN_ENTER(0x0042abf8);
    /* 0042abf8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0042abf9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0042abfa: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0042abfd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0042abff: mov ebp, dword ptr [esp + 0x20] */ r_ebp = R32((u32)(r_esp+0x20u));
    /* 0042ac03: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0042ac05: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0042ac06: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0042ac08: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042ac0a: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x42ac10u); call_ind(t); }
    /* 0042ac10: cmp ebp, 0x19 */ {  u32 a = r_ebp; u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042ac13: je 0x42ac56 */ if (fZ) goto L_0042ac56;
L_0042ac15:; BB(0x0042ac15);
    /* 0042ac15: cmp ebp, 0x14 */ {  u32 a = r_ebp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042ac18: je 0x42ac56 */ if (fZ) goto L_0042ac56;
L_0042ac1a:; BB(0x0042ac1a);
    /* 0042ac1a: cmp ebp, 0x15 */ {  u32 a = r_ebp; u32 b = 0x15u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042ac1d: je 0x42ac56 */ if (fZ) goto L_0042ac56;
L_0042ac1f:; BB(0x0042ac1f);
    /* 0042ac1f: cmp ebp, 0x1b */ {  u32 a = r_ebp; u32 b = 0x1bu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042ac22: je 0x42ac56 */ if (fZ) goto L_0042ac56;
L_0042ac24:; BB(0x0042ac24);
    /* 0042ac24: movzx eax, word ptr [ebx + 0x1c] */ r_eax = (u32)R16((u32)(r_ebx+0x1cu));
    /* 0042ac28: mov edx, dword ptr [ebx + 0x3dc] */ r_edx = R32((u32)(r_ebx+0x3dcu));
    /* 0042ac2e: mov byte ptr [esp], 0x13 */ W8((u32)(r_esp), 0x13u);
    /* 0042ac32: mov byte ptr [esp + 1], 2 */ W8((u32)(r_esp+0x1u), 0x2u);
    /* 0042ac37: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 0042ac3c: mov word ptr [esp + 4], bp */ W16((u32)(r_esp+0x4u), (u16)r_ebp);
    /* 0042ac41: mov word ptr [esp + 6], dx */ W16((u32)(r_esp+0x6u), (u16)r_edx);
    /* 0042ac46: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0042ac49: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x42ac4eu); f_008003e0();
    /* 0042ac4e: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042ac51: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042ac52: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042ac53: ret 4 */ FN_RET(0x0042abf8); r_esp += 8; return;
L_0042ac56:; BB(0x0042ac56);
    /* 0042ac56: movzx eax, word ptr [ebx + 0x1c] */ r_eax = (u32)R16((u32)(r_ebx+0x1cu));
    /* 0042ac5a: mov edx, dword ptr [ebx + 0x3dc] */ r_edx = R32((u32)(r_ebx+0x3dcu));
    /* 0042ac60: movzx ebx, word ptr [ebx + 0x394] */ r_ebx = (u32)R16((u32)(r_ebx+0x394u));
    /* 0042ac67: mov word ptr [esp + 0xa], ax */ W16((u32)(r_esp+0xau), (u16)r_eax);
    /* 0042ac6c: mov word ptr [esp + 0xc], bp */ W16((u32)(r_esp+0xcu), (u16)r_ebp);
    /* 0042ac71: mov byte ptr [esp + 8], 0x14 */ W8((u32)(r_esp+0x8u), 0x14u);
    /* 0042ac76: mov byte ptr [esp + 9], 3 */ W8((u32)(r_esp+0x9u), 0x3u);
    /* 0042ac7b: mov word ptr [esp + 0xe], dx */ W16((u32)(r_esp+0xeu), (u16)r_edx);
    /* 0042ac80: mov dword ptr [esp + 0x10], ebx */ W32((u32)(r_esp+0x10u), r_ebx);
    /* 0042ac84: lea ecx, [esp + 8] */ r_ecx = (u32)(r_esp+0x8u);
    /* 0042ac88: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x42ac8du); f_008003e0();
    /* 0042ac8d: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042ac90: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042ac91: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042ac92: ret 4 */ FN_RET(0x0042abf8); r_esp += 8; return;
}

void f_0042ac98(void) /* sub_42AC98 */
{
    FN_ENTER(0x0042ac98);
    /* 0042ac98: call 0x429ce4 */ r_esp -= 4; W32(r_esp, 0x42ac9du); f_00429ce4();
    /* 0042ac9d: call 0x429818 */ r_esp -= 4; W32(r_esp, 0x42aca2u); f_00429818();
    /* 0042aca2: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x42aca7u); f_0061cdb0();
    /* 0042aca7: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x42acacu); f_0061cdb0();
    /* 0042acac: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x42acb1u); f_0061cdb0();
    /* 0042acb1: mov ecx, dword ptr [0xa43d28] */ r_ecx = R32((u32)(0xa43d28u));
    /* 0042acb7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0042acb9: je 0x42acce */ if (fZ) goto L_0042acce;
L_0042acbb:; BB(0x0042acbb);
    /* 0042acbb: je 0x42acc4 */ if (fZ) goto L_0042acc4;
L_0042acbd:; BB(0x0042acbd);
    /* 0042acbd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0042acbf: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x42acc4u); f_004066a8();
L_0042acc4:; BB(0x0042acc4);
    /* 0042acc4: mov dword ptr [0xa43d28], 0 */ W32((u32)(0xa43d28u), 0x0u);
L_0042acce:; BB(0x0042acce);
    /* 0042acce: ret  */ FN_RET(0x0042ac98); r_esp += 4; return;
}

void f_0042acd0(void)
{
    FN_ENTER(0x0042acd0);
    /* 0042acd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0042acd1: mov ebp, esp */ r_ebp = r_esp;
    /* 0042acd3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0042acd5: push 0x8cdc88 */ { u32 v = 0x8cdc88u; r_esp -= 4; W32(r_esp, v); }
    /* 0042acda: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0042ace0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042ace1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0042ace8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0042aceb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0042acee: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0042acf1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0042acf4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0042acf7: push 0x764 */ { u32 v = 0x764u; r_esp -= 4; W32(r_esp, v); }
    /* 0042acfc: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0042ad03: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x42ad08u); f_005caba4();
    /* 0042ad08: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0042ad09: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0042ad0c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042ad0e: je 0x42ad47 */ if (fZ) goto L_0042ad47;
L_0042ad10:; BB(0x0042ad10);
    /* 0042ad10: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0042ad17: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0042ad1e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0042ad21: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 0042ad27: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0042ad2a: call 0x42ad4c */ r_esp -= 4; W32(r_esp, 0x42ad2fu); f_0042ad4c();
    /* 0042ad2f: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0042ad32: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0042ad39:; BB(0x0042ad39);
    /* 0042ad39: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042ad3c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0042ad43: mov esp, ebp */ r_esp = r_ebp;
    /* 0042ad45: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042ad46: ret  */ FN_RET(0x0042acd0); r_esp += 4; return;
L_0042ad47:; BB(0x0042ad47);
    /* 0042ad47: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0042ad49: jmp 0x42ad39 */ goto L_0042ad39;
}

void f_0042ad4c(void) /* sub_42AD4C */
{
    FN_ENTER(0x0042ad4c);
    /* 0042ad4c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0042ad4d: mov ebp, esp */ r_ebp = r_esp;
    /* 0042ad4f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0042ad51: push 0x8cdd78 */ { u32 v = 0x8cdd78u; r_esp -= 4; W32(r_esp, v); }
    /* 0042ad56: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0042ad5c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042ad5d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0042ad64: sub esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0042ad67: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0042ad6a: mov dword ptr [ebp - 0x34], edi */ W32((u32)(r_ebp+0xffffffccu), r_edi);
    /* 0042ad6d: mov dword ptr [ebp - 0x30], esi */ W32((u32)(r_ebp+0xffffffd0u), r_esi);
    /* 0042ad70: mov dword ptr [ebp - 0x2c], ebx */ W32((u32)(r_ebp+0xffffffd4u), r_ebx);
    /* 0042ad73: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0042ad76: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0042ad79: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 0042ad7c: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0042ad7f: call 0x5216f4 */ r_esp -= 4; W32(r_esp, 0x42ad84u); f_005216f4();
    /* 0042ad84: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0042ad8b: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0042ad8e: mov dword ptr [ecx], 0xaf4440 */ W32((u32)(r_ecx), 0xaf4440u);
    /* 0042ad94: add ecx, 0x3e0 */ {  u32 a = r_ecx; u32 b = 0x3e0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0042ad9a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042ad9c: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x42ada1u); f_008193cc();
    /* 0042ada1: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0042ada8: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0042adab: add ecx, 0x66c */ {  u32 a = r_ecx; u32 b = 0x66cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0042adb1: call 0x42ee78 */ r_esp -= 4; W32(r_esp, 0x42adb6u); f_0042ee78();
    /* 0042adb6: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0042adbd: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0042adc0: add ecx, 0x68c */ {  u32 a = r_ecx; u32 b = 0x68cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0042adc6: call 0x42ee78 */ r_esp -= 4; W32(r_esp, 0x42adcbu); f_0042ee78();
    /* 0042adcb: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 0042add2: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0042add5: mov eax, dword ptr [0x9a4700] */ r_eax = R32((u32)(0x9a4700u));
    /* 0042adda: mov edx, dword ptr [0xa43ce0] */ r_edx = R32((u32)(0xa43ce0u));
    /* 0042ade0: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0042ade3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042ade5: jne 0x42aded */ if (!fZ) goto L_0042aded;
L_0042ade7:; BB(0x0042ade7);
    /* 0042ade7: mov dword ptr [0xa43ce0], ecx */ W32((u32)(0xa43ce0u), r_ecx);
L_0042aded:; BB(0x0042aded);
    /* 0042aded: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0042adf0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042adf1: call 0x51f750 */ r_esp -= 4; W32(r_esp, 0x42adf6u); f_0051f750();
    /* 0042adf6: mov ebx, dword ptr [ebp - 0x38] */ r_ebx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0042adf9: movsx eax, word ptr [ebx + 0x2c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x2cu));
    /* 0042adfd: mov dword ptr [ebx + 0x3c8], 0 */ W32((u32)(r_ebx+0x3c8u), 0x0u);
    /* 0042ae07: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0042ae09: jl 0x42ae3b */ if ((fS!=fO)) goto L_0042ae3b;
L_0042ae0b:; BB(0x0042ae0b);
    /* 0042ae0b: cmp eax, 0xb4f */ {  u32 a = r_eax; u32 b = 0xb4fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042ae10: jg 0x42ae3b */ if ((!fZ&&fS==fO)) goto L_0042ae3b;
L_0042ae12:; BB(0x0042ae12);
    /* 0042ae12: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0042ae14: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0042ae16: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0042ae19: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0042ae1b: mov eax, dword ptr [0xab02b8] */ r_eax = R32((u32)(0xab02b8u));
    /* 0042ae20: mov ecx, dword ptr [edx + eax] */ r_ecx = R32((u32)(r_edx+r_eax));
    /* 0042ae23: and ecx, 0x12008 */ {  u32 a = r_ecx; u32 b = 0x12008u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0042ae29: cmp ecx, 0x12008 */ {  u32 a = r_ecx; u32 b = 0x12008u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042ae2f: jne 0x42ae3b */ if (!fZ) goto L_0042ae3b;
L_0042ae31:; BB(0x0042ae31);
    /* 0042ae31: mov dword ptr [ebx + 0x3c8], 0x8000 */ W32((u32)(r_ebx+0x3c8u), 0x8000u);
L_0042ae3b:; BB(0x0042ae3b);
    /* 0042ae3b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042ae3d: call 0x521840 */ r_esp -= 4; W32(r_esp, 0x42ae42u); f_00521840();
    /* 0042ae42: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0042ae45: mov ebx, dword ptr [0xa43d28] */ r_ebx = R32((u32)(0xa43d28u));
    /* 0042ae4b: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0042ae4d: mov eax, dword ptr [ebx + 0x42c] */ r_eax = R32((u32)(r_ebx+0x42cu));
    /* 0042ae53: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 0042ae56: push 0x9a4520 */ { u32 v = 0x9a4520u; r_esp -= 4; W32(r_esp, v); }
    /* 0042ae5b: mov dword ptr [ecx + 0x34], edx */ W32((u32)(r_ecx+0x34u), r_edx);
    /* 0042ae5e: mov esi, dword ptr [ebx + 0x42c] */ r_esi = R32((u32)(r_ebx+0x42cu));
    /* 0042ae64: mov edi, dword ptr [esi + 0x2c] */ r_edi = R32((u32)(r_esi+0x2cu));
    /* 0042ae67: mov dword ptr [ecx + 0x24], edi */ W32((u32)(r_ecx+0x24u), r_edi);
    /* 0042ae6a: call 0x51ff3c */ r_esp -= 4; W32(r_esp, 0x42ae6fu); f_0051ff3c();
    /* 0042ae6f: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0042ae72: mov eax, dword ptr [0xa43d28] */ r_eax = R32((u32)(0xa43d28u));
    /* 0042ae77: mov dword ptr [ecx + 0xd8], 0x9a45c0 */ W32((u32)(r_ecx+0xd8u), 0x9a45c0u);
    /* 0042ae81: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0042ae83: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0042ae84: mov dword ptr [ecx + 0xb0], ebx */ W32((u32)(r_ecx+0xb0u), r_ebx);
    /* 0042ae8a: mov edx, dword ptr [eax + 0x430] */ r_edx = R32((u32)(r_eax+0x430u));
    /* 0042ae90: mov dword ptr [ecx + 0xdc], edx */ W32((u32)(r_ecx+0xdcu), r_edx);
    /* 0042ae96: mov word ptr [ecx + 0xb8], bx */ W16((u32)(r_ecx+0xb8u), (u16)r_ebx);
    /* 0042ae9d: call 0x7aa4c8 */ r_esp -= 4; W32(r_esp, 0x42aea2u); f_007aa4c8();
    /* 0042aea2: push dword ptr [0xa43ccc] */ { u32 v = R32((u32)(0xa43cccu)); r_esp -= 4; W32(r_esp, v); }
    /* 0042aea8: push dword ptr [0xa43cd0] */ { u32 v = R32((u32)(0xa43cd0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0042aeae: push dword ptr [0xa43cdc] */ { u32 v = R32((u32)(0xa43cdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0042aeb4: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0042aeb7: movzx eax, word ptr [ecx + 0xb8] */ r_eax = (u32)R16((u32)(r_ecx+0xb8u));
    /* 0042aebe: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 0042aec5: call 0x520c70 */ r_esp -= 4; W32(r_esp, 0x42aecau); f_00520c70();
    /* 0042aeca: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0042aecd: call 0x520360 */ r_esp -= 4; W32(r_esp, 0x42aed2u); f_00520360();
    /* 0042aed2: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0042aed5: mov dword ptr [ecx + 0x358], 0x9a4704 */ W32((u32)(r_ecx+0x358u), 0x9a4704u);
    /* 0042aedf: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 0042aee1: call 0x520390 */ r_esp -= 4; W32(r_esp, 0x42aee6u); f_00520390();
    /* 0042aee6: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0042aee9: mov dword ptr [ecx + 0x384], 0x41a00000 */ W32((u32)(r_ecx+0x384u), 0x41a00000u);
    /* 0042aef3: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 0042aef5: call 0x521820 */ r_esp -= 4; W32(r_esp, 0x42aefau); f_00521820();
    /* 0042aefa: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0042aefd: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 0042aeff: call 0x5217fc */ r_esp -= 4; W32(r_esp, 0x42af04u); f_005217fc();
    /* 0042af04: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0042af07: mov dword ptr [edx + 0x400], 0 */ W32((u32)(r_edx+0x400u), 0x0u);
    /* 0042af11: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0042af13: mov dword ptr [edx + 0x3cc], eax */ W32((u32)(r_edx+0x3ccu), r_eax);
    /* 0042af19: mov dword ptr [edx + 0x404], 0 */ W32((u32)(r_edx+0x404u), 0x0u);
    /* 0042af23: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 0042af28: mov dword ptr [edx + 0x3d8], eax */ W32((u32)(r_edx+0x3d8u), r_eax);
    /* 0042af2e: mov dword ptr [edx + 0x408], 0 */ W32((u32)(r_edx+0x408u), 0x0u);
    /* 0042af38: mov dword ptr [edx + 0x3dc], eax */ W32((u32)(r_edx+0x3dcu), r_eax);
    /* 0042af3e: mov dword ptr [edx + 0x40c], 0 */ W32((u32)(r_edx+0x40cu), 0x0u);
    /* 0042af48: mov dword ptr [edx + 0x410], 0 */ W32((u32)(r_edx+0x410u), 0x0u);
    /* 0042af52: mov dword ptr [edx + 0x414], 0 */ W32((u32)(r_edx+0x414u), 0x0u);
    /* 0042af5c: mov dword ptr [edx + 0x418], 0 */ W32((u32)(r_edx+0x418u), 0x0u);
    /* 0042af66: mov dword ptr [edx + 0x41c], 0 */ W32((u32)(r_edx+0x41cu), 0x0u);
    /* 0042af70: mov dword ptr [edx + 0x420], 0 */ W32((u32)(r_edx+0x420u), 0x0u);
    /* 0042af7a: mov dword ptr [edx + 0x424], 0 */ W32((u32)(r_edx+0x424u), 0x0u);
    /* 0042af84: mov dword ptr [edx + 0x428], 0 */ W32((u32)(r_edx+0x428u), 0x0u);
    /* 0042af8e: mov dword ptr [edx + 0x42c], 0 */ W32((u32)(r_edx+0x42cu), 0x0u);
    /* 0042af98: mov dword ptr [edx + 0x430], 0 */ W32((u32)(r_edx+0x430u), 0x0u);
    /* 0042afa2: mov dword ptr [edx + 0x434], 0 */ W32((u32)(r_edx+0x434u), 0x0u);
    /* 0042afac: mov dword ptr [edx + 0x438], 0 */ W32((u32)(r_edx+0x438u), 0x0u);
    /* 0042afb6: mov dword ptr [edx + 0x43c], 0 */ W32((u32)(r_edx+0x43cu), 0x0u);
    /* 0042afc0: mov dword ptr [edx + 0x440], 0 */ W32((u32)(r_edx+0x440u), 0x0u);
    /* 0042afca: mov dword ptr [edx + 0x444], 0 */ W32((u32)(r_edx+0x444u), 0x0u);
    /* 0042afd4: mov dword ptr [edx + 0x448], 0 */ W32((u32)(r_edx+0x448u), 0x0u);
    /* 0042afde: mov dword ptr [edx + 0x44c], 0 */ W32((u32)(r_edx+0x44cu), 0x0u);
    /* 0042afe8: mov dword ptr [edx + 0x450], 0 */ W32((u32)(r_edx+0x450u), 0x0u);
    /* 0042aff2: mov dword ptr [edx + 0x454], 0 */ W32((u32)(r_edx+0x454u), 0x0u);
    /* 0042affc: mov dword ptr [edx + 0x458], 0 */ W32((u32)(r_edx+0x458u), 0x0u);
    /* 0042b006: mov dword ptr [edx + 0x45c], 0 */ W32((u32)(r_edx+0x45cu), 0x0u);
    /* 0042b010: mov dword ptr [edx + 0x460], 0 */ W32((u32)(r_edx+0x460u), 0x0u);
    /* 0042b01a: mov dword ptr [edx + 0x464], 0 */ W32((u32)(r_edx+0x464u), 0x0u);
    /* 0042b024: mov dword ptr [edx + 0x468], 0 */ W32((u32)(r_edx+0x468u), 0x0u);
    /* 0042b02e: mov dword ptr [edx + 0x46c], 0 */ W32((u32)(r_edx+0x46cu), 0x0u);
    /* 0042b038: mov dword ptr [edx + 0x470], 0 */ W32((u32)(r_edx+0x470u), 0x0u);
    /* 0042b042: mov dword ptr [edx + 0x474], 0 */ W32((u32)(r_edx+0x474u), 0x0u);
    /* 0042b04c: mov dword ptr [edx + 0x478], 0 */ W32((u32)(r_edx+0x478u), 0x0u);
    /* 0042b056: mov dword ptr [edx + 0x47c], 0 */ W32((u32)(r_edx+0x47cu), 0x0u);
    /* 0042b060: mov dword ptr [edx + 0x480], 0 */ W32((u32)(r_edx+0x480u), 0x0u);
    /* 0042b06a: mov dword ptr [edx + 0x484], 0 */ W32((u32)(r_edx+0x484u), 0x0u);
    /* 0042b074: mov dword ptr [edx + 0x488], 0 */ W32((u32)(r_edx+0x488u), 0x0u);
    /* 0042b07e: mov dword ptr [edx + 0x48c], 0 */ W32((u32)(r_edx+0x48cu), 0x0u);
    /* 0042b088: mov dword ptr [edx + 0x490], 0 */ W32((u32)(r_edx+0x490u), 0x0u);
    /* 0042b092: mov dword ptr [edx + 0x494], 0 */ W32((u32)(r_edx+0x494u), 0x0u);
    /* 0042b09c: mov dword ptr [edx + 0x498], 0 */ W32((u32)(r_edx+0x498u), 0x0u);
    /* 0042b0a6: mov dword ptr [edx + 0x49c], 0 */ W32((u32)(r_edx+0x49cu), 0x0u);
    /* 0042b0b0: mov dword ptr [edx + 0x4a0], 0 */ W32((u32)(r_edx+0x4a0u), 0x0u);
    /* 0042b0ba: mov dword ptr [edx + 0x4a4], 0 */ W32((u32)(r_edx+0x4a4u), 0x0u);
    /* 0042b0c4: mov dword ptr [edx + 0x4a8], 0 */ W32((u32)(r_edx+0x4a8u), 0x0u);
    /* 0042b0ce: mov dword ptr [edx + 0x4ac], 0 */ W32((u32)(r_edx+0x4acu), 0x0u);
    /* 0042b0d8: mov dword ptr [edx + 0x4b0], 0 */ W32((u32)(r_edx+0x4b0u), 0x0u);
    /* 0042b0e2: mov dword ptr [edx + 0x4b4], 0 */ W32((u32)(r_edx+0x4b4u), 0x0u);
    /* 0042b0ec: mov dword ptr [edx + 0x4b8], 0 */ W32((u32)(r_edx+0x4b8u), 0x0u);
    /* 0042b0f6: mov dword ptr [edx + 0x4bc], 0 */ W32((u32)(r_edx+0x4bcu), 0x0u);
    /* 0042b100: mov dword ptr [edx + 0x4c0], 0 */ W32((u32)(r_edx+0x4c0u), 0x0u);
    /* 0042b10a: mov dword ptr [edx + 0x4c4], 0 */ W32((u32)(r_edx+0x4c4u), 0x0u);
    /* 0042b114: mov dword ptr [edx + 0x4c8], 0 */ W32((u32)(r_edx+0x4c8u), 0x0u);
    /* 0042b11e: mov dword ptr [edx + 0x4cc], 0 */ W32((u32)(r_edx+0x4ccu), 0x0u);
    /* 0042b128: mov dword ptr [edx + 0x4d0], 0 */ W32((u32)(r_edx+0x4d0u), 0x0u);
    /* 0042b132: mov dword ptr [edx + 0x4d4], 0 */ W32((u32)(r_edx+0x4d4u), 0x0u);
    /* 0042b13c: mov dword ptr [edx + 0x4d8], 0 */ W32((u32)(r_edx+0x4d8u), 0x0u);
    /* 0042b146: mov dword ptr [edx + 0x4dc], 0 */ W32((u32)(r_edx+0x4dcu), 0x0u);
    /* 0042b150: mov dword ptr [edx + 0x4e0], 0 */ W32((u32)(r_edx+0x4e0u), 0x0u);
    /* 0042b15a: mov dword ptr [edx + 0x4e4], 0 */ W32((u32)(r_edx+0x4e4u), 0x0u);
    /* 0042b164: mov dword ptr [edx + 0x4e8], 0 */ W32((u32)(r_edx+0x4e8u), 0x0u);
    /* 0042b16e: mov dword ptr [edx + 0x4ec], 0 */ W32((u32)(r_edx+0x4ecu), 0x0u);
    /* 0042b178: mov dword ptr [edx + 0x4f0], 0 */ W32((u32)(r_edx+0x4f0u), 0x0u);
    /* 0042b182: mov dword ptr [edx + 0x4f4], 0 */ W32((u32)(r_edx+0x4f4u), 0x0u);
    /* 0042b18c: mov dword ptr [edx + 0x4f8], 0 */ W32((u32)(r_edx+0x4f8u), 0x0u);
    /* 0042b196: mov dword ptr [edx + 0x4fc], 0 */ W32((u32)(r_edx+0x4fcu), 0x0u);
    /* 0042b1a0: mov dword ptr [edx + 0x500], 0 */ W32((u32)(r_edx+0x500u), 0x0u);
    /* 0042b1aa: mov dword ptr [edx + 0x504], 0 */ W32((u32)(r_edx+0x504u), 0x0u);
    /* 0042b1b4: mov dword ptr [edx + 0x508], 0 */ W32((u32)(r_edx+0x508u), 0x0u);
    /* 0042b1be: mov dword ptr [edx + 0x50c], 0 */ W32((u32)(r_edx+0x50cu), 0x0u);
    /* 0042b1c8: mov dword ptr [edx + 0x510], 0 */ W32((u32)(r_edx+0x510u), 0x0u);
    /* 0042b1d2: mov dword ptr [edx + 0x514], 0 */ W32((u32)(r_edx+0x514u), 0x0u);
    /* 0042b1dc: mov dword ptr [edx + 0x518], 0 */ W32((u32)(r_edx+0x518u), 0x0u);
    /* 0042b1e6: mov dword ptr [edx + 0x51c], 0 */ W32((u32)(r_edx+0x51cu), 0x0u);
    /* 0042b1f0: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x42b1f5u); f_008581c5();
    /* 0042b1f5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0042b1f6: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0042b1f9: mov dword ptr [edx + 0x624], eax */ W32((u32)(r_edx+0x624u), r_eax);
    /* 0042b1ff: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0042b201: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
L_0042b204:; BB(0x0042b204);
    /* 0042b204: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0042b207: lea ebx, [edx + edx] */ r_ebx = (u32)(r_edx+r_edx);
    /* 0042b20a: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0042b20c: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0042b20e: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0042b210: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0042b212: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0042b214: mov dword ptr [ebp - 0x24], ebx */ W32((u32)(r_ebp+0xffffffdcu), r_ebx);
    /* 0042b217: add eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0042b219: mov ecx, eax */ r_ecx = r_eax;
    /* 0042b21b: call 0x830cd8 */ r_esp -= 4; W32(r_esp, 0x42b220u); f_00830cd8();
    /* 0042b220: mov dword ptr [ebp - 0x70], 0 */ W32((u32)(r_ebp+0xffffff90u), 0x0u);
    /* 0042b227: push 0x158 */ { u32 v = 0x158u; r_esp -= 4; W32(r_esp, v); }
    /* 0042b22c: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x42b231u); f_005caba4();
    /* 0042b231: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0042b234: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042b237: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 0042b23a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042b23c: je 0x42b942 */ if (fZ) goto L_0042b942;
L_0042b242:; BB(0x0042b242);
    /* 0042b242: mov dword ptr [ebp - 0x70], 1 */ W32((u32)(r_ebp+0xffffff90u), 0x1u);
    /* 0042b249: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 0042b250: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0042b253: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0042b256: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0042b259: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0042b25a: mov ebx, dword ptr [eax + 0x624] */ r_ebx = R32((u32)(r_eax+0x624u));
    /* 0042b260: add ebx, dword ptr [ebp - 0x24] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+0xffffffdcu)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0042b263: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0042b264: lea esi, [eax + 0x3e0] */ r_esi = (u32)(r_eax+0x3e0u);
    /* 0042b26a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0042b26b: call 0x437ba4 */ r_esp -= 4; W32(r_esp, 0x42b270u); f_00437ba4();
    /* 0042b270: mov dword ptr [ebp - 0x70], 0 */ W32((u32)(r_ebp+0xffffff90u), 0x0u);
L_0042b277:; BB(0x0042b277);
    /* 0042b277: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0042b27a: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0042b27d: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0042b280: mov dword ptr [eax + ecx*4 + 0x628], edx */ W32((u32)(r_eax+r_ecx*4+0x628u), r_edx);
    /* 0042b287: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 0042b28e: mov edx, ecx */ r_edx = r_ecx;
    /* 0042b290: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0042b293: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0042b296: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042b299: jge 0x42b2a6 */ if ((fS==fO)) goto L_0042b2a6;
L_0042b29b:; BB(0x0042b29b);
    /* 0042b29b: mov eax, dword ptr [eax + 0x624] */ r_eax = R32((u32)(r_eax+0x624u));
    /* 0042b2a1: jmp 0x42b204 */ goto L_0042b204;
L_0042b2a6:; BB(0x0042b2a6);
    /* 0042b2a6: movzx edx, word ptr [eax + 0x1c] */ r_edx = (u32)R16((u32)(r_eax+0x1cu));
    /* 0042b2aa: movsx ebx, word ptr [eax + 0x2c] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_eax+0x2cu));
    /* 0042b2ae: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0042b2b1: movzx ecx, dx */ r_ecx = (u32)(u16)r_edx;
    /* 0042b2b4: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0042b2b7: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0042b2b9: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0042b2bc: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 0042b2bf: mov dword ptr [ebp - 0x14], esi */ W32((u32)(r_ebp+0xffffffecu), r_esi);
L_0042b2c2:; BB(0x0042b2c2);
    /* 0042b2c2: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 0042b2c5: mov dword ptr [ebp - 0x68], 0 */ W32((u32)(r_ebp+0xffffff98u), 0x0u);
    /* 0042b2cc: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 0042b2cf: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0042b2d1: push 0x3c4 */ { u32 v = 0x3c4u; r_esp -= 4; W32(r_esp, v); }
    /* 0042b2d6: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 0042b2d9: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0042b2db: lea ebx, [esi + esi] */ r_ebx = (u32)(r_esi+r_esi);
    /* 0042b2de: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 0042b2e1: mov dword ptr [ecx + eax + 0x548], 0x461c4000 */ W32((u32)(r_ecx+r_eax+0x548u), 0x461c4000u);
    /* 0042b2ec: mov dword ptr [ecx + eax + 0x54c], 0x461c4000 */ W32((u32)(r_ecx+r_eax+0x54cu), 0x461c4000u);
    /* 0042b2f7: mov dword ptr [ebp - 0x24], ebx */ W32((u32)(r_ebp+0xffffffdcu), r_ebx);
    /* 0042b2fa: mov dword ptr [ecx + eax + 0x550], 0x461c4000 */ W32((u32)(r_ecx+r_eax+0x550u), 0x461c4000u);
    /* 0042b305: mov dword ptr [eax + esi*4 + 0x5c0], 0xffffffff */ W32((u32)(r_eax+r_esi*4+0x5c0u), 0xffffffffu);
    /* 0042b310: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x42b315u); f_005caba4();
    /* 0042b315: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0042b318: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042b31b: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
    /* 0042b31e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042b320: je 0x42b938 */ if (fZ) goto L_0042b938;
L_0042b326:; BB(0x0042b326);
    /* 0042b326: mov dword ptr [ebp - 0x68], 1 */ W32((u32)(r_ebp+0xffffff98u), 0x1u);
    /* 0042b32d: mov dword ptr [ebp - 4], 5 */ W32((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 0042b334: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0042b337: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0042b33a: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0042b33d: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0042b340: mov edi, ebx */ r_edi = r_ebx;
    /* 0042b342: mov esi, edx */ r_esi = r_edx;
    /* 0042b344: lea eax, [ecx + eax + 0x548] */ r_eax = (u32)(r_ecx+r_eax+0x548u);
    /* 0042b34b: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0042b34e: mov dword ptr [ebp - 0x20], ebx */ W32((u32)(r_ebp+0xffffffe0u), r_ebx);
    /* 0042b351: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0042b354: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 0042b357: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0042b35a: push dword ptr [edx*4 + 0xa43be4] */ { u32 v = R32((u32)(r_edx*4+0xa43be4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0042b361: push dword ptr [edx*4 + 0xa43c0c] */ { u32 v = R32((u32)(r_edx*4+0xa43c0cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0042b368: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042b369: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0042b36a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0042b36b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042b36c: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0042b36f: call 0x4351c4 */ r_esp -= 4; W32(r_esp, 0x42b374u); f_004351c4();
    /* 0042b374: mov dword ptr [ebp - 0x68], 0 */ W32((u32)(r_ebp+0xffffff98u), 0x0u);
L_0042b37b:; BB(0x0042b37b);
    /* 0042b37b: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0042b37e: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0042b381: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0042b384: mov dword ptr [eax + ecx*2 + 0x5e8], edx */ W32((u32)(r_eax+r_ecx*2+0x5e8u), r_edx);
    /* 0042b38b: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 0042b392: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0042b395: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0042b398: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0042b39b: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042b39e: jl 0x42b2c2 */ if ((fS!=fO)) goto L_0042b2c2;
L_0042b3a4:; BB(0x0042b3a4);
    /* 0042b3a4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0042b3a6: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
L_0042b3a9:; BB(0x0042b3a9);
    /* 0042b3a9: mov dword ptr [ebp - 0x60], 0 */ W32((u32)(r_ebp+0xffffffa0u), 0x0u);
    /* 0042b3b0: push 0x3fc */ { u32 v = 0x3fcu; r_esp -= 4; W32(r_esp, v); }
    /* 0042b3b5: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x42b3bau); f_005caba4();
    /* 0042b3ba: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0042b3bd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042b3c0: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 0042b3c3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042b3c5: je 0x42b92e */ if (fZ) goto L_0042b92e;
L_0042b3cb:; BB(0x0042b3cb);
    /* 0042b3cb: mov dword ptr [ebp - 0x60], 1 */ W32((u32)(r_ebp+0xffffffa0u), 0x1u);
    /* 0042b3d2: mov dword ptr [ebp - 4], 6 */ W32((u32)(r_ebp+0xfffffffcu), 0x6u);
    /* 0042b3d9: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0042b3dc: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0042b3df: mov edi, dword ptr [ebp - 0x38] */ r_edi = R32((u32)(r_ebp+0xffffffc8u));
    /* 0042b3e2: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0042b3e5: mov esi, eax */ r_esi = r_eax;
    /* 0042b3e7: mov ebx, edx */ r_ebx = r_edx;
    /* 0042b3e9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0042b3ea: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0042b3eb: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0042b3ee: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0042b3f1: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0042b3f4: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 0042b3f7: add edi, 0x3e0 */ {  u32 a = r_edi; u32 b = 0x3e0u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0042b3fd: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0042b3fe: call 0x4369bc */ r_esp -= 4; W32(r_esp, 0x42b403u); f_004369bc();
    /* 0042b403: mov dword ptr [ebp - 0x60], 0 */ W32((u32)(r_ebp+0xffffffa0u), 0x0u);
L_0042b40a:; BB(0x0042b40a);
    /* 0042b40a: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0042b40d: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0042b410: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0042b413: mov dword ptr [edx + ecx*4 + 0x638], eax */ W32((u32)(r_edx+r_ecx*4+0x638u), r_eax);
    /* 0042b41a: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 0042b421: mov eax, ecx */ r_eax = r_ecx;
    /* 0042b423: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0042b426: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0042b429: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042b42c: jl 0x42b3a9 */ if ((fS!=fO)) goto L_0042b3a9;
L_0042b432:; BB(0x0042b432);
    /* 0042b432: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0042b434: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
L_0042b437:; BB(0x0042b437);
    /* 0042b437: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
    /* 0042b43e: push 0x41c */ { u32 v = 0x41cu; r_esp -= 4; W32(r_esp, v); }
    /* 0042b443: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x42b448u); f_005caba4();
    /* 0042b448: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0042b44b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042b44e: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 0042b451: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042b453: je 0x42b924 */ if (fZ) goto L_0042b924;
L_0042b459:; BB(0x0042b459);
    /* 0042b459: mov dword ptr [ebp - 0x58], 1 */ W32((u32)(r_ebp+0xffffffa8u), 0x1u);
    /* 0042b460: mov dword ptr [ebp - 4], 7 */ W32((u32)(r_ebp+0xfffffffcu), 0x7u);
    /* 0042b467: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0042b46a: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0042b46d: mov edi, dword ptr [ebp - 0x38] */ r_edi = R32((u32)(r_ebp+0xffffffc8u));
    /* 0042b470: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0042b473: mov esi, eax */ r_esi = r_eax;
    /* 0042b475: mov ebx, edx */ r_ebx = r_edx;
    /* 0042b477: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0042b478: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0042b479: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0042b47c: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0042b47f: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0042b482: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 0042b485: add edi, 0x3e0 */ {  u32 a = r_edi; u32 b = 0x3e0u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0042b48b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0042b48c: call 0x4370b4 */ r_esp -= 4; W32(r_esp, 0x42b491u); f_004370b4();
    /* 0042b491: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
L_0042b498:; BB(0x0042b498);
    /* 0042b498: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0042b49b: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0042b49e: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0042b4a1: mov dword ptr [edx + ecx*4 + 0x64c], eax */ W32((u32)(r_edx+r_ecx*4+0x64cu), r_eax);
    /* 0042b4a8: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 0042b4af: mov eax, ecx */ r_eax = r_ecx;
    /* 0042b4b1: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0042b4b4: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0042b4b7: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042b4ba: jl 0x42b437 */ if ((fS!=fO)) goto L_0042b437;
L_0042b4c0:; BB(0x0042b4c0);
    /* 0042b4c0: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
    /* 0042b4c7: push 0x88 */ { u32 v = 0x88u; r_esp -= 4; W32(r_esp, v); }
    /* 0042b4cc: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x42b4d1u); f_005caba4();
    /* 0042b4d1: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0042b4d4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042b4d7: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 0042b4da: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042b4dc: je 0x42b91a */ if (fZ) goto L_0042b91a;
L_0042b4e2:; BB(0x0042b4e2);
    /* 0042b4e2: mov dword ptr [ebp - 0x50], 1 */ W32((u32)(r_ebp+0xffffffb0u), 0x1u);
    /* 0042b4e9: mov dword ptr [ebp - 4], 8 */ W32((u32)(r_ebp+0xfffffffcu), 0x8u);
    /* 0042b4f0: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0042b4f3: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0042b4f6: lea ebx, [eax + 0x3e0] */ r_ebx = (u32)(r_eax+0x3e0u);
    /* 0042b4fc: lea edx, [eax + 0x40c] */ r_edx = (u32)(r_eax+0x40cu);
    /* 0042b502: add eax, 0x478 */ {  u32 a = r_eax; u32 b = 0x478u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0042b507: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042b508: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0042b509: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0042b50a: call 0x434ba4 */ r_esp -= 4; W32(r_esp, 0x42b50fu); f_00434ba4();
    /* 0042b50f: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
L_0042b516:; BB(0x0042b516);
    /* 0042b516: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0042b519: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0042b51c: mov dword ptr [ecx + 0x658], eax */ W32((u32)(r_ecx+0x658u), r_eax);
    /* 0042b522: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 0042b529: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0042b52b: mov dword ptr [ecx + 0x65c], eax */ W32((u32)(r_ecx+0x65cu), r_eax);
    /* 0042b531: mov dword ptr [ecx + 0x660], eax */ W32((u32)(r_ecx+0x660u), r_eax);
    /* 0042b537: mov dword ptr [ecx + 0x664], eax */ W32((u32)(r_ecx+0x664u), r_eax);
    /* 0042b53d: mov dword ptr [ecx + 0x668], eax */ W32((u32)(r_ecx+0x668u), r_eax);
    /* 0042b543: add ecx, 0x66c */ {  u32 a = r_ecx; u32 b = 0x66cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0042b549: call 0x42ee78 */ r_esp -= 4; W32(r_esp, 0x42b54eu); f_0042ee78();
    /* 0042b54e: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0042b551: add ecx, 0x68c */ {  u32 a = r_ecx; u32 b = 0x68cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0042b557: call 0x42ee78 */ r_esp -= 4; W32(r_esp, 0x42b55cu); f_0042ee78();
    /* 0042b55c: mov esi, dword ptr [ebp - 0x38] */ r_esi = R32((u32)(r_ebp+0xffffffc8u));
    /* 0042b55f: mov edx, dword ptr [0xa43cc8] */ r_edx = R32((u32)(0xa43cc8u));
    /* 0042b565: mov dword ptr [esi + 0x6ac], 0 */ W32((u32)(r_esi+0x6acu), 0x0u);
    /* 0042b56f: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 0042b572: push 0x44 */ { u32 v = 0x44u; r_esp -= 4; W32(r_esp, v); }
    /* 0042b574: mov dword ptr [esi + 0x6b4], eax */ W32((u32)(r_esi+0x6b4u), r_eax);
    /* 0042b57a: mov dword ptr [esi + 0x6b0], eax */ W32((u32)(r_esi+0x6b0u), r_eax);
    /* 0042b580: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 0042b583: mov dword ptr [esi + 0x6b8], ecx */ W32((u32)(r_esi+0x6b8u), r_ecx);
    /* 0042b589: mov ebx, 0x4e20 */ r_ebx = 0x4e20u;
    /* 0042b58e: mov word ptr [esi + 0x334], bx */ W16((u32)(r_esi+0x334u), (u16)r_ebx);
    /* 0042b595: mov word ptr [esi + 0x2bc], bx */ W16((u32)(r_esi+0x2bcu), (u16)r_ebx);
    /* 0042b59c: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0042b59e: mov dword ptr [esi + 0x6bc], edi */ W32((u32)(r_esi+0x6bcu), r_edi);
    /* 0042b5a4: mov dword ptr [ebp - 0x48], edi */ W32((u32)(r_ebp+0xffffffb8u), r_edi);
    /* 0042b5a7: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x42b5acu); f_005caba4();
    /* 0042b5ac: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0042b5af: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042b5b2: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 0042b5b5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042b5b7: je 0x42b910 */ if (fZ) goto L_0042b910;
L_0042b5bd:; BB(0x0042b5bd);
    /* 0042b5bd: mov dword ptr [ebp - 0x48], 1 */ W32((u32)(r_ebp+0xffffffb8u), 0x1u);
    /* 0042b5c4: mov dword ptr [ebp - 4], 9 */ W32((u32)(r_ebp+0xfffffffcu), 0x9u);
    /* 0042b5cb: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0042b5ce: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0042b5d1: lea edx, [eax + 0x3e0] */ r_edx = (u32)(r_eax+0x3e0u);
    /* 0042b5d7: add eax, 0x6c4 */ {  u32 a = r_eax; u32 b = 0x6c4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0042b5dc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042b5dd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0042b5de: call 0x43580c */ r_esp -= 4; W32(r_esp, 0x42b5e3u); f_0043580c();
    /* 0042b5e3: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
L_0042b5ea:; BB(0x0042b5ea);
    /* 0042b5ea: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0042b5ed: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0042b5f0: mov dword ptr [edx + 0x6c0], eax */ W32((u32)(r_edx+0x6c0u), r_eax);
    /* 0042b5f6: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 0042b5fd: mov dword ptr [edx + 0x6c4], 0 */ W32((u32)(r_edx+0x6c4u), 0x0u);
    /* 0042b607: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0042b609: mov dword ptr [edx + 0x6c8], 0 */ W32((u32)(r_edx+0x6c8u), 0x0u);
    /* 0042b613: mov dword ptr [edx + 0x6cc], 0 */ W32((u32)(r_edx+0x6ccu), 0x0u);
    /* 0042b61d: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
    /* 0042b624: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x42b629u); f_008581c5();
    /* 0042b629: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0042b62c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042b62f: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0042b632: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042b634: je 0x42b906 */ if (fZ) goto L_0042b906;
L_0042b63a:; BB(0x0042b63a);
    /* 0042b63a: mov dword ptr [ebp - 0x40], 1 */ W32((u32)(r_ebp+0xffffffc0u), 0x1u);
    /* 0042b641: mov dword ptr [ebp - 4], 0xa */ W32((u32)(r_ebp+0xfffffffcu), 0xau);
    /* 0042b648: mov ecx, eax */ r_ecx = r_eax;
    /* 0042b64a: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0042b64c: call 0x521a4c */ r_esp -= 4; W32(r_esp, 0x42b651u); f_00521a4c();
    /* 0042b651: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
L_0042b658:; BB(0x0042b658);
    /* 0042b658: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0042b65b: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0042b65e: mov dword ptr [edx + 0x6d0], eax */ W32((u32)(r_edx+0x6d0u), r_eax);
    /* 0042b664: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 0042b66b: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 0042b66e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0042b670: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0042b672: jle 0x42b687 */ if ((fZ||fS!=fO)) goto L_0042b687;
L_0042b674:; BB(0x0042b674);
    /* 0042b674: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0042b677: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0042b679: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 0042b67c: mov dword ptr [edx + ecx*4], eax */ W32((u32)(r_edx+r_ecx*4), r_eax);
    /* 0042b67f: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0042b682: cmp ecx, dword ptr [ebx + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebx+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042b685: jl 0x42b674 */ if ((fS!=fO)) goto L_0042b674;
L_0042b687:; BB(0x0042b687);
    /* 0042b687: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0042b68a: mov edi, dword ptr [ebp - 0x38] */ r_edi = R32((u32)(r_ebp+0xffffffc8u));
    /* 0042b68d: push 0x300 */ { u32 v = 0x300u; r_esp -= 4; W32(r_esp, v); }
    /* 0042b692: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0042b694: mov dword ptr [eax + 8], esi */ W32((u32)(r_eax+0x8u), r_esi);
    /* 0042b697: mov edx, dword ptr [edi + 0x38] */ r_edx = R32((u32)(r_edi+0x38u));
    /* 0042b69a: mov ecx, dword ptr [edi + 0x3c] */ r_ecx = R32((u32)(r_edi+0x3cu));
    /* 0042b69d: mov ebx, dword ptr [edi + 0x40] */ r_ebx = R32((u32)(r_edi+0x40u));
    /* 0042b6a0: mov dword ptr [edi + 0x6d4], esi */ W32((u32)(r_edi+0x6d4u), r_esi);
    /* 0042b6a6: mov dword ptr [edi + 0x6d8], esi */ W32((u32)(r_edi+0x6d8u), r_esi);
    /* 0042b6ac: mov dword ptr [edi + 0x520], edx */ W32((u32)(r_edi+0x520u), r_edx);
    /* 0042b6b2: mov dword ptr [edi + 0x6dc], 0x3f800000 */ W32((u32)(r_edi+0x6dcu), 0x3f800000u);
    /* 0042b6bc: mov dword ptr [edi + 0x524], ecx */ W32((u32)(r_edi+0x524u), r_ecx);
    /* 0042b6c2: mov dword ptr [edi + 0x528], ebx */ W32((u32)(r_edi+0x528u), r_ebx);
    /* 0042b6c8: mov dword ptr [edi + 0x52c], edx */ W32((u32)(r_edi+0x52cu), r_edx);
    /* 0042b6ce: mov dword ptr [edi + 0x6e0], 0x3dcccccd */ W32((u32)(r_edi+0x6e0u), 0x3dcccccdu);
    /* 0042b6d8: mov dword ptr [edi + 0x530], ecx */ W32((u32)(r_edi+0x530u), r_ecx);
    /* 0042b6de: mov dword ptr [edi + 0x534], ebx */ W32((u32)(r_edi+0x534u), r_ebx);
    /* 0042b6e4: mov dword ptr [edi + 0x538], edx */ W32((u32)(r_edi+0x538u), r_edx);
    /* 0042b6ea: mov dword ptr [edi + 0x610], 0x3f800000 */ W32((u32)(r_edi+0x610u), 0x3f800000u);
    /* 0042b6f4: mov dword ptr [edi + 0x53c], ecx */ W32((u32)(r_edi+0x53cu), r_ecx);
    /* 0042b6fa: mov dword ptr [edi + 0x540], ebx */ W32((u32)(r_edi+0x540u), r_ebx);
    /* 0042b700: mov dword ptr [edi + 0x544], esi */ W32((u32)(r_edi+0x544u), r_esi);
    /* 0042b706: mov dword ptr [edi + 0x614], 0x3f800000 */ W32((u32)(r_edi+0x614u), 0x3f800000u);
    /* 0042b710: mov dword ptr [edi + 0x618], 0x3f800000 */ W32((u32)(r_edi+0x618u), 0x3f800000u);
    /* 0042b71a: mov dword ptr [edi + 0x61c], 0x3f800000 */ W32((u32)(r_edi+0x61cu), 0x3f800000u);
    /* 0042b724: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x42b729u); f_008581c5();
    /* 0042b729: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0042b72a: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0042b72d: mov dword ptr [edx + 0x620], eax */ W32((u32)(r_edx+0x620u), r_eax);
    /* 0042b733: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_0042b735:; BB(0x0042b735);
    /* 0042b735: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 0042b738: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0042b73a: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0042b73c: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0042b73e: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0042b740: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0042b742: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0042b744: call 0x830cd8 */ r_esp -= 4; W32(r_esp, 0x42b749u); f_00830cd8();
    /* 0042b749: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0042b74c: cmp ebx, 0xc */ {  u32 a = r_ebx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042b74f: jge 0x42b75c */ if ((fS==fO)) goto L_0042b75c;
L_0042b751:; BB(0x0042b751);
    /* 0042b751: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0042b754: mov eax, dword ptr [eax + 0x620] */ r_eax = R32((u32)(r_eax+0x620u));
    /* 0042b75a: jmp 0x42b735 */ goto L_0042b735;
L_0042b75c:; BB(0x0042b75c);
    /* 0042b75c: mov esi, dword ptr [ebp - 0x38] */ r_esi = R32((u32)(r_ebp+0xffffffc8u));
    /* 0042b75f: mov dword ptr [esi + 0x704], 0 */ W32((u32)(r_esi+0x704u), 0x0u);
    /* 0042b769: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0042b76b: mov dword ptr [esi + 0x748], eax */ W32((u32)(r_esi+0x748u), r_eax);
    /* 0042b771: mov dword ptr [esi + 0x708], 0 */ W32((u32)(r_esi+0x708u), 0x0u);
    /* 0042b77b: mov dword ptr [esi + 0x74c], eax */ W32((u32)(r_esi+0x74cu), r_eax);
    /* 0042b781: mov dword ptr [esi + 0x750], eax */ W32((u32)(r_esi+0x750u), r_eax);
    /* 0042b787: mov dword ptr [esi + 0x754], eax */ W32((u32)(r_esi+0x754u), r_eax);
    /* 0042b78d: mov dword ptr [esi + 0x70c], 0 */ W32((u32)(r_esi+0x70cu), 0x0u);
    /* 0042b797: mov dword ptr [esi + 0x758], eax */ W32((u32)(r_esi+0x758u), r_eax);
    /* 0042b79d: mov dword ptr [esi + 0x75c], eax */ W32((u32)(r_esi+0x75cu), r_eax);
    /* 0042b7a3: mov edx, dword ptr [0xaae970] */ r_edx = R32((u32)(0xaae970u));
    /* 0042b7a9: mov dword ptr [esi + 0x710], 0 */ W32((u32)(r_esi+0x710u), 0x0u);
    /* 0042b7b3: mov dword ptr [esi + 0x760], eax */ W32((u32)(r_esi+0x760u), r_eax);
    /* 0042b7b9: mov dword ptr [esi + 0x6e4], eax */ W32((u32)(r_esi+0x6e4u), r_eax);
    /* 0042b7bf: mov dword ptr [esi + 0x714], 0 */ W32((u32)(r_esi+0x714u), 0x0u);
    /* 0042b7c9: mov dword ptr [esi + 0x6e8], eax */ W32((u32)(r_esi+0x6e8u), r_eax);
    /* 0042b7cf: mov dword ptr [esi + 0x6ec], eax */ W32((u32)(r_esi+0x6ecu), r_eax);
    /* 0042b7d5: mov dword ptr [esi + 0x6f0], eax */ W32((u32)(r_esi+0x6f0u), r_eax);
    /* 0042b7db: mov dword ptr [esi + 0x718], 0 */ W32((u32)(r_esi+0x718u), 0x0u);
    /* 0042b7e5: mov dword ptr [esi + 0x6f4], eax */ W32((u32)(r_esi+0x6f4u), r_eax);
    /* 0042b7eb: mov dword ptr [esi + 0x6f8], eax */ W32((u32)(r_esi+0x6f8u), r_eax);
    /* 0042b7f1: mov dword ptr [esi + 0x6fc], eax */ W32((u32)(r_esi+0x6fcu), r_eax);
    /* 0042b7f7: mov dword ptr [esi + 0x71c], 0 */ W32((u32)(r_esi+0x71cu), 0x0u);
    /* 0042b801: mov dword ptr [esi + 0x700], eax */ W32((u32)(r_esi+0x700u), r_eax);
    /* 0042b807: mov dword ptr [esi + 0x744], eax */ W32((u32)(r_esi+0x744u), r_eax);
    /* 0042b80d: mov dword ptr [esi + 0x3d0], eax */ W32((u32)(r_esi+0x3d0u), r_eax);
    /* 0042b813: mov dword ptr [esi + 0x720], 0 */ W32((u32)(r_esi+0x720u), 0x0u);
    /* 0042b81d: lea ecx, [edx + edx*4] */ r_ecx = (u32)(r_edx+r_edx*4);
    /* 0042b820: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0042b822: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0042b824: mov dword ptr [esi + 0x724], 0 */ W32((u32)(r_esi+0x724u), 0x0u);
    /* 0042b82e: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0042b830: lea ebx, [ecx + ecx + 0xaae75c] */ r_ebx = (u32)(r_ecx+r_ecx+0xaae75cu);
    /* 0042b837: mov dword ptr [esi + 0x728], 0 */ W32((u32)(r_esi+0x728u), 0x0u);
    /* 0042b841: mov dword ptr [esi + 0x3d4], ebx */ W32((u32)(r_esi+0x3d4u), r_ebx);
    /* 0042b847: mov dword ptr [esi + 0x72c], 0 */ W32((u32)(r_esi+0x72cu), 0x0u);
    /* 0042b851: mov dword ptr [esi + 0x730], 0 */ W32((u32)(r_esi+0x730u), 0x0u);
    /* 0042b85b: mov dword ptr [esi + 0x734], 0 */ W32((u32)(r_esi+0x734u), 0x0u);
    /* 0042b865: mov dword ptr [esi + 0x738], 0 */ W32((u32)(r_esi+0x738u), 0x0u);
    /* 0042b86f: mov dword ptr [esi + 0x73c], 0 */ W32((u32)(r_esi+0x73cu), 0x0u);
    /* 0042b879: mov dword ptr [esi + 0x740], 0 */ W32((u32)(r_esi+0x740u), 0x0u);
    /* 0042b883: call 0x694cc8 */ r_esp -= 4; W32(r_esp, 0x42b888u); f_00694cc8();
    /* 0042b888: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042b88a: jne 0x42b89b */ if (!fZ) goto L_0042b89b;
L_0042b88c:; BB(0x0042b88c);
    /* 0042b88c: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0042b88f: mov dword ptr [ecx + 0x3fc], 0 */ W32((u32)(r_ecx+0x3fcu), 0x0u);
    /* 0042b899: jmp 0x42b8c0 */ goto L_0042b8c0;
L_0042b89b:; BB(0x0042b89b);
    /* 0042b89b: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0042b89e: call 0x520db0 */ r_esp -= 4; W32(r_esp, 0x42b8a3u); f_00520db0();
    /* 0042b8a3: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0042b8a6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042b8a8: je 0x42b8b6 */ if (fZ) goto L_0042b8b6;
L_0042b8aa:; BB(0x0042b8aa);
    /* 0042b8aa: mov dword ptr [ecx + 0x3fc], 0 */ W32((u32)(r_ecx+0x3fcu), 0x0u);
    /* 0042b8b4: jmp 0x42b8c0 */ goto L_0042b8c0;
L_0042b8b6:; BB(0x0042b8b6);
    /* 0042b8b6: mov dword ptr [ecx + 0x3fc], 1 */ W32((u32)(r_ecx+0x3fcu), 0x1u);
L_0042b8c0:; BB(0x0042b8c0);
    /* 0042b8c0: call 0x434a2c */ r_esp -= 4; W32(r_esp, 0x42b8c5u); f_00434a2c();
    /* 0042b8c5: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0042b8c8: mov eax, dword ptr [ecx + 0x3c8] */ r_eax = R32((u32)(r_ecx+0x3c8u));
    /* 0042b8ce: test eax, 0x8000 */ {  u32 a = r_eax; u32 b = 0x8000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0042b8d3: jne 0x42b8eb */ if (!fZ) goto L_0042b8eb;
L_0042b8d5:; BB(0x0042b8d5);
    /* 0042b8d5: mov eax, 1 */ r_eax = 0x1u;
    /* 0042b8da: mov word ptr [ecx + 0x32e], ax */ W16((u32)(r_ecx+0x32eu), (u16)r_eax);
    /* 0042b8e1: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0042b8e3: call 0x4321cc */ r_esp -= 4; W32(r_esp, 0x42b8e8u); f_004321cc();
    /* 0042b8e8: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
L_0042b8eb:; BB(0x0042b8eb);
    /* 0042b8eb: mov edi, dword ptr [ebp - 0x34] */ r_edi = R32((u32)(r_ebp+0xffffffccu));
    /* 0042b8ee: mov esi, dword ptr [ebp - 0x30] */ r_esi = R32((u32)(r_ebp+0xffffffd0u));
    /* 0042b8f1: mov ebx, dword ptr [ebp - 0x2c] */ r_ebx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0042b8f4: mov eax, ecx */ r_eax = r_ecx;
    /* 0042b8f6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042b8f9: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0042b900: mov esp, ebp */ r_esp = r_ebp;
    /* 0042b902: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042b903: ret 8 */ FN_RET(0x0042ad4c); r_esp += 12; return;
L_0042b906:; BB(0x0042b906);
    /* 0042b906: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0042b908: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0042b90b: jmp 0x42b658 */ goto L_0042b658;
L_0042b910:; BB(0x0042b910);
    /* 0042b910: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0042b912: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0042b915: jmp 0x42b5ea */ goto L_0042b5ea;
L_0042b91a:; BB(0x0042b91a);
    /* 0042b91a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0042b91c: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0042b91f: jmp 0x42b516 */ goto L_0042b516;
L_0042b924:; BB(0x0042b924);
    /* 0042b924: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0042b926: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0042b929: jmp 0x42b498 */ goto L_0042b498;
L_0042b92e:; BB(0x0042b92e);
    /* 0042b92e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0042b930: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0042b933: jmp 0x42b40a */ goto L_0042b40a;
L_0042b938:; BB(0x0042b938);
    /* 0042b938: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0042b93a: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0042b93d: jmp 0x42b37b */ goto L_0042b37b;
L_0042b942:; BB(0x0042b942);
    /* 0042b942: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0042b944: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0042b947: jmp 0x42b277 */ goto L_0042b277;
}

