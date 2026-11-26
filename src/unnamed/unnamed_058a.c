#include "protos.h"

void f_0058a018(void) /* sub_58A018 */
{
    FN_ENTER(0x0058a018);
    /* 0058a018: mov eax, dword ptr [0xa743fc] */ r_eax = R32((u32)(0xa743fcu));
    /* 0058a01d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058a01f: jne 0x58a045 */ if (!fZ) goto L_0058a045;
L_0058a021:; BB(0x0058a021);
    /* 0058a021: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x58a026u); f_0082d7b0();
    /* 0058a026: call 0x520c54 */ r_esp -= 4; W32(r_esp, 0x58a02bu); f_00520c54();
    /* 0058a02b: mov edx, dword ptr [0xa743f8] */ r_edx = R32((u32)(0xa743f8u));
    /* 0058a031: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0058a032: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0058a034: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x58a039u); f_00830aa0();
    /* 0058a039: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x58a03eu); f_0082da80();
    /* 0058a03e: mov eax, dword ptr [0xa743fc] */ r_eax = R32((u32)(0xa743fcu));
    /* 0058a043: jmp 0x58a054 */ goto L_0058a054;
L_0058a045:; BB(0x0058a045);
    /* 0058a045: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058a048: jne 0x58a054 */ if (!fZ) goto L_0058a054;
L_0058a04a:; BB(0x0058a04a);
    /* 0058a04a: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x58a04fu); f_0082dbac();
    /* 0058a04f: mov eax, dword ptr [0xa743fc] */ r_eax = R32((u32)(0xa743fcu));
L_0058a054:; BB(0x0058a054);
    /* 0058a054: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0058a057: mov dword ptr [0xa743fc], eax */ W32((u32)(0xa743fcu), r_eax);
    /* 0058a05c: ret  */ FN_RET(0x0058a018); r_esp += 4; return;
}

void f_0058a060(void) /* sub_58A060 */
{
    FN_ENTER(0x0058a060);
    /* 0058a060: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0058a061: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0058a063: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0058a065: call 0x5213d8 */ r_esp -= 4; W32(r_esp, 0x58a06au); f_005213d8();
    /* 0058a06a: fld dword ptr [ebx + 0x3a0] */ FPUSH(R_F32((u32)(r_ebx+0x3a0u)));
    /* 0058a070: fadd dword ptr [ebx + 0x46c] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x46cu));
    /* 0058a076: fstp dword ptr [ebx + 0x3a0] */ W_F32((u32)(r_ebx+0x3a0u), ST(0)); FPOP();
    /* 0058a07c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0058a07d: ret  */ FN_RET(0x0058a060); r_esp += 4; return;
}

void f_0058a080(void) /* sub_58A080 */
{
    FN_ENTER(0x0058a080);
    /* 0058a080: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0058a081: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0058a083: mov edx, dword ptr [ebp + 0x358] */ r_edx = R32((u32)(r_ebp+0x358u));
    /* 0058a089: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0058a08b: mov eax, dword ptr [0xa743e4] */ r_eax = R32((u32)(0xa743e4u));
    /* 0058a090: push dword ptr [eax] */ { u32 v = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, v); }
    /* 0058a092: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0058a095: call 0x5215ec */ r_esp -= 4; W32(r_esp, 0x58a09au); f_005215ec();
    /* 0058a09a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058a09c: je 0x58a0af */ if (fZ) goto L_0058a0af;
L_0058a09e:; BB(0x0058a09e);
    /* 0058a09e: mov eax, dword ptr [ebp + 0x44c] */ r_eax = R32((u32)(r_ebp+0x44cu));
    /* 0058a0a4: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0058a0a7: mov dword ptr [ebp + 0x44c], eax */ W32((u32)(r_ebp+0x44cu), r_eax);
    /* 0058a0ad: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058a0ae: ret  */ FN_RET(0x0058a080); r_esp += 4; return;
L_0058a0af:; BB(0x0058a0af);
    /* 0058a0af: mov eax, dword ptr [ebp + 0x44c] */ r_eax = R32((u32)(r_ebp+0x44cu));
    /* 0058a0b5: and eax, 0xfffffffd */ {  u32 a = r_eax; u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0058a0b8: mov dword ptr [ebp + 0x44c], eax */ W32((u32)(r_ebp+0x44cu), r_eax);
    /* 0058a0be: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058a0bf: ret  */ FN_RET(0x0058a080); r_esp += 4; return;
}

void f_0058a0c0(void) /* sub_58A0C0 */
{
    FN_ENTER(0x0058a0c0);
    /* 0058a0c0: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0058a0c3: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 0058a0c7: fst dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0));
    /* 0058a0cb: fsub dword ptr [esp + 0xc] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0xcu));
    /* 0058a0cf: fst dword ptr [esp] */ W_F32((u32)(r_esp), ST(0));
    /* 0058a0d2: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0058a0d3: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0058a0d6: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x58a0dbu); f_0082e900();
    /* 0058a0db: fcomp dword ptr [0x928a00] */ fx_compare(ST(0), R_F32((u32)(0x928a00u))); FPOP();
    /* 0058a0e1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0058a0e3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0058a0e4: jb 0x58a133 */ if (fC) goto L_0058a133;
L_0058a0e6:; BB(0x0058a0e6);
    /* 0058a0e6: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0058a0e9: fmul dword ptr [0x9289f8] */ ST(0) = ST(0) * R_F32((u32)(0x9289f8u));
    /* 0058a0ef: fld dword ptr [0x9289f4] */ FPUSH(R_F32((u32)(0x9289f4u)));
    /* 0058a0f5: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0058a0f7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0058a0f9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0058a0fb: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0058a0fe: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0058a0ff: jae 0x58a10f */ if (!fC) goto L_0058a10f;
L_0058a101:; BB(0x0058a101);
    /* 0058a101: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0058a103: fld dword ptr [0x9289fc] */ FPUSH(R_F32((u32)(0x9289fcu)));
    /* 0058a109: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0058a10d: jmp 0x58a127 */ goto L_0058a127;
L_0058a10f:; BB(0x0058a10f);
    /* 0058a10f: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0058a112: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0058a114: fchs  */ ST(0) = -ST(0);
    /* 0058a116: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0058a118: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0058a11a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0058a11b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0058a11d: ja 0x58a121 */ if ((!fC&&!fZ)) goto L_0058a121;
L_0058a11f:; BB(0x0058a11f);
    /* 0058a11f: fst st(1) */ ST(1) = ST(0);
L_0058a121:; BB(0x0058a121);
    /* 0058a121: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0058a123: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
L_0058a127:; BB(0x0058a127);
    /* 0058a127: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0058a12b: fadd dword ptr [esp + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0xcu));
    /* 0058a12f: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
L_0058a133:; BB(0x0058a133);
    /* 0058a133: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0058a137: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0058a13a: ret 8 */ FN_RET(0x0058a0c0); r_esp += 12; return;
}

void f_0058a140(void) /* sub_58A140 */
{
    FN_ENTER(0x0058a140);
    /* 0058a140: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0058a141: mov esi, ecx */ r_esi = r_ecx;
    /* 0058a143: push 0x25c */ { u32 v = 0x25cu; r_esp -= 4; W32(r_esp, v); }
    /* 0058a148: call 0x589c9c */ r_esp -= 4; W32(r_esp, 0x58a14du); f_00589c9c();
    /* 0058a14d: mov ecx, eax */ r_ecx = r_eax;
    /* 0058a14f: lea eax, [esi + 0x38] */ r_eax = (u32)(r_esi+0x38u);
    /* 0058a152: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0058a154: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0058a155: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0058a156: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058a157: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0058a158: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0058a159: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x58a15eu); f_008144b0();
    /* 0058a15e: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0058a161: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0058a162: ret  */ FN_RET(0x0058a140); r_esp += 4; return;
}

void f_0058a164(void) /* sub_58A164 */
{
    FN_ENTER(0x0058a164);
    /* 0058a164: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0058a165: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0058a166: mov edi, ecx */ r_edi = r_ecx;
    /* 0058a168: mov edx, dword ptr [0xa743ec] */ r_edx = R32((u32)(0xa743ecu));
    /* 0058a16e: fld dword ptr [0x9289f0] */ FPUSH(R_F32((u32)(0x9289f0u)));
    /* 0058a174: fadd dword ptr [edx + 8] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x8u));
    /* 0058a177: fcomp dword ptr [edi + 0x3b4] */ fx_compare(ST(0), R_F32((u32)(r_edi+0x3b4u))); FPOP();
    /* 0058a17d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0058a17f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0058a180: jbe 0x58a1d6 */ if ((fC||fZ)) goto L_0058a1d6;
L_0058a182:; BB(0x0058a182);
    /* 0058a182: fld dword ptr [edi + 0x450] */ FPUSH(R_F32((u32)(r_edi+0x450u)));
    /* 0058a188: fsub dword ptr [edi + 0x3a0] */ ST(0) = ST(0) - R_F32((u32)(r_edi+0x3a0u));
    /* 0058a18e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0058a18f: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0058a192: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x58a197u); f_0082e900();
    /* 0058a197: fcomp dword ptr [0x9289ec] */ fx_compare(ST(0), R_F32((u32)(0x9289ecu))); FPOP();
    /* 0058a19d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0058a19f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0058a1a0: jae 0x58a1d6 */ if (!fC) goto L_0058a1d6;
L_0058a1a2:; BB(0x0058a1a2);
    /* 0058a1a2: lea ecx, [edi + 0x454] */ r_ecx = (u32)(r_edi+0x454u);
    /* 0058a1a8: lea edx, [edi + 0x3a8] */ r_edx = (u32)(r_edi+0x3a8u);
    /* 0058a1ae: call 0x82f9e0 */ r_esp -= 4; W32(r_esp, 0x58a1b3u); f_0082f9e0();
    /* 0058a1b3: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0058a1b6: mov eax, dword ptr [edi + 0x31c] */ r_eax = R32((u32)(r_edi+0x31cu));
    /* 0058a1bc: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 0058a1bf: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x58a1c4u); f_0082ddd8();
    /* 0058a1c4: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0058a1c7: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0058a1c9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0058a1cb: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0058a1cc: jb 0x58a1d6 */ if (fC) goto L_0058a1d6;
L_0058a1ce:; BB(0x0058a1ce);
    /* 0058a1ce: mov eax, 1 */ r_eax = 0x1u;
    /* 0058a1d3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0058a1d4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0058a1d5: ret  */ FN_RET(0x0058a164); r_esp += 4; return;
L_0058a1d6:; BB(0x0058a1d6);
    /* 0058a1d6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0058a1d8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0058a1d9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0058a1da: ret  */ FN_RET(0x0058a164); r_esp += 4; return;
}

void f_0058a1dc(void) /* sub_58A1DC */
{
    FN_ENTER(0x0058a1dc);
    /* 0058a1dc: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x58a1e1u); f_0061cdb0();
    /* 0058a1e1: mov ecx, dword ptr [0xa743f4] */ r_ecx = R32((u32)(0xa743f4u));
    /* 0058a1e7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0058a1e9: je 0x58a1fd */ if (fZ) goto L_0058a1fd;
L_0058a1eb:; BB(0x0058a1eb);
    /* 0058a1eb: je 0x58a1f3 */ if (fZ) goto L_0058a1f3;
L_0058a1ed:; BB(0x0058a1ed);
    /* 0058a1ed: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0058a1ef: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0058a1f1: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x58a1f3u); call_ind(t); }
L_0058a1f3:; BB(0x0058a1f3);
    /* 0058a1f3: mov dword ptr [0xa743f4], 0 */ W32((u32)(0xa743f4u), 0x0u);
L_0058a1fd:; BB(0x0058a1fd);
    /* 0058a1fd: ret  */ FN_RET(0x0058a1dc); r_esp += 4; return;
}

void f_0058a200(void) /* sub_58A200 */
{
    FN_ENTER(0x0058a200);
    /* 0058a200: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0058a201: mov ebp, esp */ r_ebp = r_esp;
    /* 0058a203: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0058a205: push 0x8d7f84 */ { u32 v = 0x8d7f84u; r_esp -= 4; W32(r_esp, v); }
    /* 0058a20a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0058a210: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058a211: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0058a218: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0058a21b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0058a21e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0058a221: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0058a224: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0058a227: push 0x4ec */ { u32 v = 0x4ecu; r_esp -= 4; W32(r_esp, v); }
    /* 0058a22c: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0058a233: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x58a238u); f_005caba4();
    /* 0058a238: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0058a239: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0058a23c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058a23e: je 0x58a285 */ if (fZ) goto L_0058a285;
L_0058a240:; BB(0x0058a240);
    /* 0058a240: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0058a247: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0058a24e: push dword ptr [ebp + 0x18] */ { u32 v = R32((u32)(r_ebp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 0058a251: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 0058a254: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0058a257: movzx eax, word ptr [ebp + 0xc] */ r_eax = (u32)R16((u32)(r_ebp+0xcu));
    /* 0058a25b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0058a25e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058a25f: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0058a262: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 0058a268: call 0x58a28c */ r_esp -= 4; W32(r_esp, 0x58a26du); f_0058a28c();
    /* 0058a26d: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0058a270: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0058a277:; BB(0x0058a277);
    /* 0058a277: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0058a27a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0058a281: mov esp, ebp */ r_esp = r_ebp;
    /* 0058a283: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058a284: ret  */ FN_RET(0x0058a200); r_esp += 4; return;
L_0058a285:; BB(0x0058a285);
    /* 0058a285: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0058a287: jmp 0x58a277 */ goto L_0058a277;
}

void f_0058a28c(void) /* sub_58A28C */
{
    FN_ENTER(0x0058a28c);
    /* 0058a28c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0058a28d: mov ebp, esp */ r_ebp = r_esp;
    /* 0058a28f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0058a291: push 0x8d7fb4 */ { u32 v = 0x8d7fb4u; r_esp -= 4; W32(r_esp, v); }
    /* 0058a296: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0058a29c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058a29d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0058a2a4: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0058a2a7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0058a2aa: mov dword ptr [ebp - 0x30], edi */ W32((u32)(r_ebp+0xffffffd0u), r_edi);
    /* 0058a2ad: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
    /* 0058a2b0: mov dword ptr [ebp - 0x28], ebx */ W32((u32)(r_ebp+0xffffffd8u), r_ebx);
    /* 0058a2b3: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0058a2b6: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0058a2b9: movzx edx, word ptr [ebp + 0x10] */ r_edx = (u32)R16((u32)(r_ebp+0x10u));
    /* 0058a2bd: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 0058a2c0: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0058a2c3: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0058a2c6: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 0058a2c9: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0058a2cc: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 0058a2cf: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0058a2d2: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 0058a2d5: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0058a2d8: call 0x5216f4 */ r_esp -= 4; W32(r_esp, 0x58a2ddu); f_005216f4();
    /* 0058a2dd: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0058a2e4: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0058a2e7: mov dword ptr [ecx], 0xb08100 */ W32((u32)(r_ecx), 0xb08100u);
    /* 0058a2ed: add ecx, 0x488 */ {  u32 a = r_ecx; u32 b = 0x488u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0058a2f3: call 0x576a48 */ r_esp -= 4; W32(r_esp, 0x58a2f8u); f_00576a48();
    /* 0058a2f8: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0058a2ff: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0058a302: mov eax, dword ptr [0x9bf820] */ r_eax = R32((u32)(0x9bf820u));
    /* 0058a307: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0058a30a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0058a30b: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0058a30e: movzx edx, word ptr [ebx + 0x1c] */ r_edx = (u32)R16((u32)(r_ebx+0x1cu));
    /* 0058a312: mov word ptr [ecx + 0x43c], dx */ W16((u32)(r_ecx+0x43cu), (u16)r_edx);
    /* 0058a319: call 0x51f760 */ r_esp -= 4; W32(r_esp, 0x58a31eu); f_0051f760();
    /* 0058a31e: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0058a321: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0058a324: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0058a327: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0058a32a: mov word ptr [ecx + 0x1c], ax */ W16((u32)(r_ecx+0x1cu), (u16)r_eax);
    /* 0058a32e: mov word ptr [ecx + 0x2c], dx */ W16((u32)(r_ecx+0x2cu), (u16)r_edx);
    /* 0058a332: mov edx, ebx */ r_edx = r_ebx;
    /* 0058a334: mov ebx, dword ptr [edi] */ r_ebx = R32((u32)(r_edi));
    /* 0058a336: mov dword ptr [ecx + 0x38], ebx */ W32((u32)(r_ecx+0x38u), r_ebx);
    /* 0058a339: mov esi, dword ptr [edi + 4] */ r_esi = R32((u32)(r_edi+0x4u));
    /* 0058a33c: mov dword ptr [ecx + 0x3c], esi */ W32((u32)(r_ecx+0x3cu), r_esi);
    /* 0058a33f: mov eax, dword ptr [edi + 8] */ r_eax = R32((u32)(r_edi+0x8u));
    /* 0058a342: mov dword ptr [ecx + 0x40], eax */ W32((u32)(r_ecx+0x40u), r_eax);
    /* 0058a345: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 0058a348: mov dword ptr [ecx + 0x440], eax */ W32((u32)(r_ecx+0x440u), r_eax);
    /* 0058a34e: mov eax, dword ptr [edx + 0x3c] */ r_eax = R32((u32)(r_edx+0x3cu));
    /* 0058a351: mov dword ptr [ecx + 0x444], eax */ W32((u32)(r_ecx+0x444u), r_eax);
    /* 0058a357: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 0058a35a: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0058a35d: mov dword ptr [ecx + 0x448], eax */ W32((u32)(r_ecx+0x448u), r_eax);
    /* 0058a363: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0058a365: mov dword ptr [ecx + 0x430], eax */ W32((u32)(r_ecx+0x430u), r_eax);
    /* 0058a36b: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0058a36e: mov dword ptr [ecx + 0x434], eax */ W32((u32)(r_ecx+0x434u), r_eax);
    /* 0058a374: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0058a377: mov dword ptr [ecx + 0x438], eax */ W32((u32)(r_ecx+0x438u), r_eax);
    /* 0058a37d: call 0x58c250 */ r_esp -= 4; W32(r_esp, 0x58a382u); f_0058c250();
    /* 0058a382: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0058a385: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0058a388: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 0058a38b: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 0058a38e: fld dword ptr [eax + 0x468] */ FPUSH(R_F32((u32)(r_eax+0x468u)));
    /* 0058a394: fadd dword ptr [edx + 0x4d8] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x4d8u));
    /* 0058a39a: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0058a39d: fld dword ptr [eax + 0x470] */ FPUSH(R_F32((u32)(r_eax+0x470u)));
    /* 0058a3a3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0058a3a5: fstp dword ptr [eax + 0x468] */ W_F32((u32)(r_eax+0x468u), ST(0)); FPOP();
    /* 0058a3ab: fadd dword ptr [edx + 0x4dc] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x4dcu));
    /* 0058a3b1: fstp dword ptr [eax + 0x470] */ W_F32((u32)(r_eax+0x470u), ST(0)); FPOP();
    /* 0058a3b7: mov dword ptr [eax + 0x80], 0 */ W32((u32)(r_eax+0x80u), 0x0u);
    /* 0058a3c1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0058a3c4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0058a3cb: mov esp, ebp */ r_esp = r_ebp;
    /* 0058a3cd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058a3ce: ret 0x18 */ FN_RET(0x0058a28c); r_esp += 28; return;
}

void f_0058a3d4(void) /* sub_58A3D4 */
{
    FN_ENTER(0x0058a3d4);
    /* 0058a3d4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0058a3d5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0058a3d6: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0058a3d9: mov edi, ecx */ r_edi = r_ecx;
    /* 0058a3db: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x58a3e0u); f_004f7c84();
    /* 0058a3e0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058a3e2: je 0x58a3f4 */ if (fZ) goto L_0058a3f4;
L_0058a3e4:; BB(0x0058a3e4);
    /* 0058a3e4: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0058a3e6: mov ecx, edi */ r_ecx = r_edi;
    /* 0058a3e8: call dword ptr [eax + 0x1ac] */ { u32 t = R32((u32)(r_eax+0x1acu)); r_esp -= 4; W32(r_esp, 0x58a3eeu); call_ind(t); }
    /* 0058a3ee: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0058a3f1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0058a3f2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0058a3f3: ret  */ FN_RET(0x0058a3d4); r_esp += 4; return;
L_0058a3f4:; BB(0x0058a3f4);
    /* 0058a3f4: movzx eax, word ptr [edi + 0x43c] */ r_eax = (u32)R16((u32)(r_edi+0x43cu));
    /* 0058a3fb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058a3fc: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x58a401u); f_007b4d18();
    /* 0058a401: mov esi, eax */ r_esi = r_eax;
    /* 0058a403: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058a406: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058a408: je 0x58a55d */ if (fZ) goto L_0058a55d;
L_0058a40e:; BB(0x0058a40e);
    /* 0058a40e: mov ecx, esi */ r_ecx = r_esi;
    /* 0058a410: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x58a415u); f_008173b4();
    /* 0058a415: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058a417: je 0x58a55d */ if (fZ) goto L_0058a55d;
L_0058a41d:; BB(0x0058a41d);
    /* 0058a41d: movsx edx, word ptr [edi + 0x32e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x32eu));
    /* 0058a424: cmp edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058a427: je 0x58a43e */ if (fZ) goto L_0058a43e;
L_0058a429:; BB(0x0058a429);
    /* 0058a429: cmp edx, 7 */ {  u32 a = r_edx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058a42c: je 0x58a43e */ if (fZ) goto L_0058a43e;
L_0058a42e:; BB(0x0058a42e);
    /* 0058a42e: mov ecx, esi */ r_ecx = r_esi;
    /* 0058a430: call 0x589b5c */ r_esp -= 4; W32(r_esp, 0x58a435u); f_00589b5c();
    /* 0058a435: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058a438: je 0x58a570 */ if (fZ) goto L_0058a570;
L_0058a43e:; BB(0x0058a43e);
    /* 0058a43e: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0058a440: mov ecx, edi */ r_ecx = r_edi;
    /* 0058a442: call dword ptr [eax + 0x154] */ { u32 t = R32((u32)(r_eax+0x154u)); r_esp -= 4; W32(r_esp, 0x58a448u); call_ind(t); }
    /* 0058a448: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058a44b: je 0x58a529 */ if (fZ) goto L_0058a529;
L_0058a451:; BB(0x0058a451);
    /* 0058a451: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0058a453: mov ecx, edi */ r_ecx = r_edi;
    /* 0058a455: call dword ptr [eax + 0x15c] */ { u32 t = R32((u32)(r_eax+0x15cu)); r_esp -= 4; W32(r_esp, 0x58a45bu); call_ind(t); }
    /* 0058a45b: mov ecx, dword ptr [edi + 0x480] */ r_ecx = R32((u32)(r_edi+0x480u));
    /* 0058a461: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058a463: je 0x58a5ab */ if (fZ) goto L_0058a5ab;
L_0058a469:; BB(0x0058a469);
    /* 0058a469: movsx eax, word ptr [edi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32eu));
    /* 0058a470: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058a473: je 0x58a5a4 */ if (fZ) goto L_0058a5a4;
L_0058a479:; BB(0x0058a479);
    /* 0058a479: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058a47c: je 0x58a5a4 */ if (fZ) goto L_0058a5a4;
L_0058a482:; BB(0x0058a482);
    /* 0058a482: mov eax, dword ptr [edi + 0x484] */ r_eax = R32((u32)(r_edi+0x484u));
    /* 0058a488: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058a48a: jne 0x58a4a1 */ if (!fZ) goto L_0058a4a1;
L_0058a48c:; BB(0x0058a48c);
    /* 0058a48c: fld dword ptr [0x9289e4] */ FPUSH(R_F32((u32)(0x9289e4u)));
    /* 0058a492: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0058a495: mov dword ptr [edi + 0x484], 1 */ W32((u32)(r_edi+0x484u), 0x1u);
    /* 0058a49f: jmp 0x58a4b4 */ goto L_0058a4b4;
L_0058a4a1:; BB(0x0058a4a1);
    /* 0058a4a1: fld dword ptr [0x9289e8] */ FPUSH(R_F32((u32)(0x9289e8u)));
    /* 0058a4a7: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0058a4aa: mov dword ptr [edi + 0x484], 0 */ W32((u32)(r_edi+0x484u), 0x0u);
L_0058a4b4:; BB(0x0058a4b4);
    /* 0058a4b4: call 0x520e6c */ r_esp -= 4; W32(r_esp, 0x58a4b9u); f_00520e6c();
    /* 0058a4b9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058a4bb: je 0x58a4c9 */ if (fZ) goto L_0058a4c9;
L_0058a4bd:; BB(0x0058a4bd);
    /* 0058a4bd: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0058a4c0: fmul dword ptr [0x9289e4] */ ST(0) = ST(0) * R_F32((u32)(0x9289e4u));
    /* 0058a4c6: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
L_0058a4c9:; BB(0x0058a4c9);
    /* 0058a4c9: mov ecx, dword ptr [edi + 0x60] */ r_ecx = R32((u32)(r_edi+0x60u));
    /* 0058a4cc: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x58a4d1u); f_0082ddd8();
    /* 0058a4d1: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0058a4d5: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0058a4d9: fmul dword ptr [esp] */ ST(0) = ST(0) * R_F32((u32)(r_esp));
    /* 0058a4dc: mov ecx, dword ptr [edi + 0x60] */ r_ecx = R32((u32)(r_edi+0x60u));
    /* 0058a4df: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0058a4e3: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x58a4e8u); f_0082dcbc();
    /* 0058a4e8: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0058a4ec: fadd dword ptr [edi + 0x300] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x300u));
    /* 0058a4f2: fld dword ptr [0x9289e0] */ FPUSH(R_F32((u32)(0x9289e0u)));
    /* 0058a4f8: fadd dword ptr [edi + 0x304] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x304u));
    /* 0058a4fe: mov ecx, dword ptr [edi + 0x480] */ r_ecx = R32((u32)(r_edi+0x480u));
    /* 0058a504: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0058a506: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0058a50a: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0058a50e: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 0058a512: fchs  */ ST(0) = -ST(0);
    /* 0058a514: fmul dword ptr [esp] */ ST(0) = ST(0) * R_F32((u32)(r_esp));
    /* 0058a517: fadd dword ptr [edi + 0x308] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x308u));
    /* 0058a51d: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 0058a521: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058a522: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x58a527u); f_00508db8();
    /* 0058a527: jmp 0x58a538 */ goto L_0058a538;
L_0058a529:; BB(0x0058a529);
    /* 0058a529: mov ecx, dword ptr [edi + 0x480] */ r_ecx = R32((u32)(r_edi+0x480u));
    /* 0058a52f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058a531: je 0x58a538 */ if (fZ) goto L_0058a538;
L_0058a533:; BB(0x0058a533);
    /* 0058a533: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x58a538u); f_00508f48();
L_0058a538:; BB(0x0058a538);
    /* 0058a538: mov ecx, edi */ r_ecx = r_edi;
    /* 0058a53a: call 0x58a5dc */ r_esp -= 4; W32(r_esp, 0x58a53fu); f_0058a5dc();
    /* 0058a53f: mov ecx, edi */ r_ecx = r_edi;
    /* 0058a541: call 0x6401f0 */ r_esp -= 4; W32(r_esp, 0x58a546u); f_006401f0();
    /* 0058a546: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0058a548: mov ecx, edi */ r_ecx = r_edi;
    /* 0058a54a: call dword ptr [eax + 0x198] */ { u32 t = R32((u32)(r_eax+0x198u)); r_esp -= 4; W32(r_esp, 0x58a550u); call_ind(t); }
    /* 0058a550: mov ecx, edi */ r_ecx = r_edi;
    /* 0058a552: call 0x58a600 */ r_esp -= 4; W32(r_esp, 0x58a557u); f_0058a600();
    /* 0058a557: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0058a55a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0058a55b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0058a55c: ret  */ FN_RET(0x0058a3d4); r_esp += 4; return;
L_0058a55d:; BB(0x0058a55d);
    /* 0058a55d: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 0058a561: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0058a566: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 0058a56a: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0058a56d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0058a56e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0058a56f: ret  */ FN_RET(0x0058a3d4); r_esp += 4; return;
L_0058a570:; BB(0x0058a570);
    /* 0058a570: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0058a572: mov eax, dword ptr [edi + 0x2e0] */ r_eax = R32((u32)(r_edi+0x2e0u));
    /* 0058a578: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0058a57b: mov dword ptr [edi + 0x2e0], eax */ W32((u32)(r_edi+0x2e0u), r_eax);
    /* 0058a581: mov ecx, edi */ r_ecx = r_edi;
    /* 0058a583: call 0x770b58 */ r_esp -= 4; W32(r_esp, 0x58a588u); f_00770b58();
    /* 0058a588: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0058a58a: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0058a58d: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 0058a58f: or eax, 0xa00 */ {  u32 a = r_eax; u32 b = 0xa00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0058a594: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0058a597: mov ecx, edi */ r_ecx = r_edi;
    /* 0058a599: call dword ptr [edx + 0x130] */ { u32 t = R32((u32)(r_edx+0x130u)); r_esp -= 4; W32(r_esp, 0x58a59fu); call_ind(t); }
    /* 0058a59f: jmp 0x58a43e */ goto L_0058a43e;
L_0058a5a4:; BB(0x0058a5a4);
    /* 0058a5a4: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x58a5a9u); f_00508f48();
    /* 0058a5a9: jmp 0x58a538 */ goto L_0058a538;
L_0058a5ab:; BB(0x0058a5ab);
    /* 0058a5ab: push 0x217 */ { u32 v = 0x217u; r_esp -= 4; W32(r_esp, v); }
    /* 0058a5b0: lea eax, [edi + 0x300] */ r_eax = (u32)(r_edi+0x300u);
    /* 0058a5b6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058a5b7: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x58a5bcu); f_00509590();
    /* 0058a5bc: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058a5bf: mov dword ptr [edi + 0x480], eax */ W32((u32)(r_edi+0x480u), r_eax);
    /* 0058a5c5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058a5c7: je 0x58a538 */ if (fZ) goto L_0058a538;
L_0058a5cd:; BB(0x0058a5cd);
    /* 0058a5cd: mov ecx, eax */ r_ecx = r_eax;
    /* 0058a5cf: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x58a5d4u); f_00508f48();
    /* 0058a5d4: jmp 0x58a538 */ goto L_0058a538;
}

void f_0058a5dc(void) /* sub_58A5DC */
{
    FN_ENTER(0x0058a5dc);
    /* 0058a5dc: mov edx, dword ptr [ecx + 0x38] */ r_edx = R32((u32)(r_ecx+0x38u));
    /* 0058a5df: mov eax, dword ptr [ecx + 0x40] */ r_eax = R32((u32)(r_ecx+0x40u));
    /* 0058a5e2: mov dword ptr [ecx + 0x300], edx */ W32((u32)(r_ecx+0x300u), r_edx);
    /* 0058a5e8: mov dword ptr [ecx + 0x308], eax */ W32((u32)(r_ecx+0x308u), r_eax);
    /* 0058a5ee: mov dword ptr [ecx + 0x74], edx */ W32((u32)(r_ecx+0x74u), r_edx);
    /* 0058a5f1: mov edx, dword ptr [ecx + 0x304] */ r_edx = R32((u32)(r_ecx+0x304u));
    /* 0058a5f7: mov dword ptr [ecx + 0x78], edx */ W32((u32)(r_ecx+0x78u), r_edx);
    /* 0058a5fa: mov dword ptr [ecx + 0x7c], eax */ W32((u32)(r_ecx+0x7cu), r_eax);
    /* 0058a5fd: ret  */ FN_RET(0x0058a5dc); r_esp += 4; return;
}

void f_0058a600(void) /* sub_58A600 */
{
    FN_ENTER(0x0058a600);
    /* 0058a600: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0058a601: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0058a604: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0058a606: mov ecx, dword ptr [0xa9c4ec] */ r_ecx = R32((u32)(0xa9c4ecu));
    /* 0058a60c: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 0058a611: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0058a613: mov eax, ecx */ r_eax = r_ecx;
    /* 0058a615: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0058a618: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0058a61a: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0058a61c: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 0058a61f: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0058a621: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0058a623: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0058a625: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058a627: je 0x58a631 */ if (fZ) goto L_0058a631;
L_0058a629:; BB(0x0058a629);
    /* 0058a629: mov edx, dword ptr [ebx + 0x420] */ r_edx = R32((u32)(r_ebx+0x420u));
    /* 0058a62f: jmp 0x58a698 */ goto L_0058a698;
L_0058a631:; BB(0x0058a631);
    /* 0058a631: fld dword ptr [0x9289dc] */ FPUSH(R_F32((u32)(0x9289dcu)));
    /* 0058a637: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 0058a63a: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 0058a63d: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0058a640: mov eax, dword ptr [ebx + 0x40] */ r_eax = R32((u32)(r_ebx+0x40u));
    /* 0058a643: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0058a647: fadd dword ptr [esp + 4] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x4u));
    /* 0058a64b: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0058a64f: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0058a653: lea eax, [ebx + 0x128] */ r_eax = (u32)(r_ebx+0x128u);
    /* 0058a659: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0058a65c: push 0x4000 */ { u32 v = 0x4000u; r_esp -= 4; W32(r_esp, v); }
    /* 0058a661: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058a662: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0058a663: call 0x7806dc */ r_esp -= 4; W32(r_esp, 0x58a668u); f_007806dc();
    /* 0058a668: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058a66b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058a66d: je 0x58a6ac */ if (fZ) goto L_0058a6ac;
L_0058a66f:; BB(0x0058a66f);
    /* 0058a66f: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0058a672: mov edx, dword ptr [edx + 0x18] */ r_edx = R32((u32)(r_edx+0x18u));
    /* 0058a675: mov dword ptr [ebx + 0x420], edx */ W32((u32)(r_ebx+0x420u), r_edx);
    /* 0058a67b: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 0058a67e: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0058a680: mov dword ptr [ebx + 0x424], ecx */ W32((u32)(r_ebx+0x424u), r_ecx);
    /* 0058a686: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0058a689: mov dword ptr [ebx + 0x428], ecx */ W32((u32)(r_ebx+0x428u), r_ecx);
    /* 0058a68f: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 0058a692: mov dword ptr [ebx + 0x42c], eax */ W32((u32)(r_ebx+0x42cu), r_eax);
L_0058a698:; BB(0x0058a698);
    /* 0058a698: test edx, 0x4000 */ {  u32 a = r_edx; u32 b = 0x4000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058a69e: je 0x58a6a7 */ if (fZ) goto L_0058a6a7;
L_0058a6a0:; BB(0x0058a6a0);
    /* 0058a6a0: mov byte ptr [0xa72b88], 1 */ W8((u32)(0xa72b88u), 0x1u);
L_0058a6a7:; BB(0x0058a6a7);
    /* 0058a6a7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0058a6aa: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0058a6ab: ret  */ FN_RET(0x0058a600); r_esp += 4; return;
L_0058a6ac:; BB(0x0058a6ac);
    /* 0058a6ac: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 0058a6af: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 0058a6b2: mov dword ptr [ebx + 0x424], eax */ W32((u32)(r_ebx+0x424u), r_eax);
    /* 0058a6b8: mov eax, dword ptr [ebx + 0x40] */ r_eax = R32((u32)(r_ebx+0x40u));
    /* 0058a6bb: mov dword ptr [ebx + 0x428], edx */ W32((u32)(r_ebx+0x428u), r_edx);
    /* 0058a6c1: mov edx, dword ptr [ebx + 0x420] */ r_edx = R32((u32)(r_ebx+0x420u));
    /* 0058a6c7: mov dword ptr [ebx + 0x42c], eax */ W32((u32)(r_ebx+0x42cu), r_eax);
    /* 0058a6cd: jmp 0x58a698 */ goto L_0058a698;
}

void f_0058a6d0(void) /* sub_58A6D0 */
{
    FN_ENTER(0x0058a6d0);
    /* 0058a6d0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0058a6d1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0058a6d2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0058a6d3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0058a6d6: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0058a6d8: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x58a6ddu); f_004f7c84();
    /* 0058a6dd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058a6df: jne 0x58a8b7 */ if (!fZ) goto L_0058a8b7;
L_0058a6e5:; BB(0x0058a6e5);
    /* 0058a6e5: mov eax, dword ptr [ebp + 0x44c] */ r_eax = R32((u32)(r_ebp+0x44cu));
    /* 0058a6eb: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0058a6ed: jne 0x58a8c2 */ if (!fZ) goto L_0058a8c2;
L_0058a6f3:; BB(0x0058a6f3);
    /* 0058a6f3: call 0x694cc8 */ r_esp -= 4; W32(r_esp, 0x58a6f8u); f_00694cc8();
    /* 0058a6f8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058a6fa: je 0x58a721 */ if (fZ) goto L_0058a721;
L_0058a6fc:; BB(0x0058a6fc);
    /* 0058a6fc: push 0x41700000 */ { u32 v = 0x41700000u; r_esp -= 4; W32(r_esp, v); }
    /* 0058a701: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0058a703: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0058a706: push dword ptr [0x921684] */ { u32 v = R32((u32)(0x921684u)); r_esp -= 4; W32(r_esp, v); }
    /* 0058a70c: push dword ptr [0xa72eb0] */ { u32 v = R32((u32)(0xa72eb0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0058a712: call dword ptr [eax + 0x20] */ { u32 t = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, 0x58a715u); call_ind(t); }
    /* 0058a715: mov edi, eax */ r_edi = r_eax;
    /* 0058a717: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058a719: je 0x58a8c2 */ if (fZ) goto L_0058a8c2;
L_0058a71f:; BB(0x0058a71f);
    /* 0058a71f: jmp 0x58a740 */ goto L_0058a740;
L_0058a721:; BB(0x0058a721);
    /* 0058a721: push 0x41700000 */ { u32 v = 0x41700000u; r_esp -= 4; W32(r_esp, v); }
    /* 0058a726: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0058a728: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0058a72b: push 0x43c80000 */ { u32 v = 0x43c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0058a730: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x58a733u); call_ind(t); }
    /* 0058a733: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058a735: je 0x58a8c2 */ if (fZ) goto L_0058a8c2;
L_0058a73b:; BB(0x0058a73b);
    /* 0058a73b: mov edi, 1 */ r_edi = 0x1u;
L_0058a740:; BB(0x0058a740);
    /* 0058a740: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0058a742: call 0x58a930 */ r_esp -= 4; W32(r_esp, 0x58a747u); f_0058a930();
    /* 0058a747: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058a749: jne 0x58a8c2 */ if (!fZ) goto L_0058a8c2;
L_0058a74f:; BB(0x0058a74f);
    /* 0058a74f: mov edx, dword ptr [0xaf034c] */ r_edx = R32((u32)(0xaf034cu));
    /* 0058a755: mov esi, dword ptr [0xaf0360] */ r_esi = R32((u32)(0xaf0360u));
    /* 0058a75b: mov dword ptr [0xaab518], edx */ W32((u32)(0xaab518u), r_edx);
    /* 0058a761: mov edx, dword ptr [0xaf0364] */ r_edx = R32((u32)(0xaf0364u));
    /* 0058a767: mov dword ptr [0xaab504], esi */ W32((u32)(0xaab504u), r_esi);
    /* 0058a76d: mov dword ptr [0xaab500], edx */ W32((u32)(0xaab500u), r_edx);
    /* 0058a773: movsx edx, word ptr [ebp + 0x32e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x32eu));
    /* 0058a77a: cmp edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058a77d: je 0x58a8f7 */ if (fZ) goto L_0058a8f7;
L_0058a783:; BB(0x0058a783);
    /* 0058a783: mov edx, dword ptr [ebp + 0x44c] */ r_edx = R32((u32)(r_ebp+0x44cu));
    /* 0058a789: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0058a78c: je 0x58a7c0 */ if (fZ) goto L_0058a7c0;
L_0058a78e:; BB(0x0058a78e);
    /* 0058a78e: mov edx, dword ptr [ebp + 0x420] */ r_edx = R32((u32)(r_ebp+0x420u));
    /* 0058a794: test edx, 0x4000 */ {  u32 a = r_edx; u32 b = 0x4000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058a79a: jne 0x58a7c0 */ if (!fZ) goto L_0058a7c0;
L_0058a79c:; BB(0x0058a79c);
    /* 0058a79c: mov dword ptr [esp], 0x3f4ccccd */ W32((u32)(r_esp), 0x3f4ccccdu);
    /* 0058a7a3: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0058a7a6: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0058a7a8: mov dword ptr [esp + 4], 0x3f800000 */ W32((u32)(r_esp+0x4u), 0x3f800000u);
    /* 0058a7b0: mov dword ptr [esp + 8], 0x3f4ccccd */ W32((u32)(r_esp+0x8u), 0x3f4ccccdu);
    /* 0058a7b8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0058a7ba: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0058a7bb: call 0x520cf8 */ r_esp -= 4; W32(r_esp, 0x58a7c0u); f_00520cf8();
L_0058a7c0:; BB(0x0058a7c0);
    /* 0058a7c0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0058a7c2: call 0x520608 */ r_esp -= 4; W32(r_esp, 0x58a7c7u); f_00520608();
    /* 0058a7c7: mov ecx, dword ptr [ebp + 0x24] */ r_ecx = R32((u32)(r_ebp+0x24u));
    /* 0058a7ca: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x58a7cfu); f_00829cc8();
    /* 0058a7cf: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x58a7d4u); f_0082d7b0();
    /* 0058a7d4: push dword ptr [ebp + 0x40] */ { u32 v = R32((u32)(r_ebp+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 0058a7d7: push dword ptr [ebp + 0x450] */ { u32 v = R32((u32)(r_ebp+0x450u)); r_esp -= 4; W32(r_esp, v); }
    /* 0058a7dd: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0058a7df: push dword ptr [ebp + 0x38] */ { u32 v = R32((u32)(r_ebp+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 0058a7e2: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x58a7e7u); f_00830b74();
    /* 0058a7e7: mov edx, dword ptr [ebp + 0x60] */ r_edx = R32((u32)(r_ebp+0x60u));
    /* 0058a7ea: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0058a7ec: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x58a7f1u); f_0082d8bc();
    /* 0058a7f1: call 0x520d08 */ r_esp -= 4; W32(r_esp, 0x58a7f6u); f_00520d08();
    /* 0058a7f6: mov dword ptr [0xa743fc], 0 */ W32((u32)(0xa743fcu), 0x0u);
    /* 0058a800: lea edx, [ebp + 0x414] */ r_edx = (u32)(r_ebp+0x414u);
    /* 0058a806: mov ecx, 0x58a018 */ r_ecx = 0x58a018u;
    /* 0058a80b: mov dword ptr [0xa743f8], edx */ W32((u32)(0xa743f8u), r_edx);
    /* 0058a811: mov dword ptr [ebp + 0x414], 0 */ W32((u32)(r_ebp+0x414u), 0x0u);
    /* 0058a81b: mov dword ptr [ebp + 0x418], 0 */ W32((u32)(r_ebp+0x418u), 0x0u);
    /* 0058a825: mov dword ptr [ebp + 0x41c], 0 */ W32((u32)(r_ebp+0x41cu), 0x0u);
    /* 0058a82f: call 0x82fac4 */ r_esp -= 4; W32(r_esp, 0x58a834u); f_0082fac4();
    /* 0058a834: call 0x578b38 */ r_esp -= 4; W32(r_esp, 0x58a839u); f_00578b38();
    /* 0058a839: mov edx, dword ptr [0xaf034c] */ r_edx = R32((u32)(0xaf034cu));
    /* 0058a83f: or edx, 0x1000000 */ {  u32 a = r_edx; u32 b = 0x1000000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0058a845: mov dword ptr [0xaf034c], edx */ W32((u32)(0xaf034cu), r_edx);
    /* 0058a84b: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058a84e: je 0x58a8eb */ if (fZ) goto L_0058a8eb;
L_0058a854:; BB(0x0058a854);
    /* 0058a854: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0058a856: call 0x7aa7b8 */ r_esp -= 4; W32(r_esp, 0x58a85bu); f_007aa7b8();
L_0058a85b:; BB(0x0058a85b);
    /* 0058a85b: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 0058a860: and eax, 0xfeffffff */ {  u32 a = r_eax; u32 b = 0xfeffffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0058a865: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 0058a86a: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x58a86fu); f_0082dab0();
    /* 0058a86f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0058a871: call 0x82fac4 */ r_esp -= 4; W32(r_esp, 0x58a876u); f_0082fac4();
    /* 0058a876: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x58a87bu); f_0082da80();
    /* 0058a87b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0058a87d: call 0x520610 */ r_esp -= 4; W32(r_esp, 0x58a882u); f_00520610();
L_0058a882:; BB(0x0058a882);
    /* 0058a882: movsx eax, word ptr [ebp + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32eu));
    /* 0058a889: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058a88c: je 0x58a8c9 */ if (fZ) goto L_0058a8c9;
L_0058a88e:; BB(0x0058a88e);
    /* 0058a88e: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
    /* 0058a893: mov edx, dword ptr [0xaab504] */ r_edx = R32((u32)(0xaab504u));
    /* 0058a899: mov ecx, dword ptr [0xaab500] */ r_ecx = R32((u32)(0xaab500u));
    /* 0058a89f: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 0058a8a4: mov dword ptr [0xaf0360], edx */ W32((u32)(0xaf0360u), r_edx);
    /* 0058a8aa: mov dword ptr [0xaf0364], ecx */ W32((u32)(0xaf0364u), r_ecx);
    /* 0058a8b0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0058a8b3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058a8b4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0058a8b5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0058a8b6: ret  */ FN_RET(0x0058a6d0); r_esp += 4; return;
L_0058a8b7:; BB(0x0058a8b7);
    /* 0058a8b7: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0058a8ba: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0058a8bc: call dword ptr [eax + 0x1b0] */ { u32 t = R32((u32)(r_eax+0x1b0u)); r_esp -= 4; W32(r_esp, 0x58a8c2u); call_ind(t); }
L_0058a8c2:; BB(0x0058a8c2);
    /* 0058a8c2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0058a8c5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058a8c6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0058a8c7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0058a8c8: ret  */ FN_RET(0x0058a6d0); r_esp += 4; return;
L_0058a8c9:; BB(0x0058a8c9);
    /* 0058a8c9: mov eax, dword ptr [ebp + 0x488] */ r_eax = R32((u32)(r_ebp+0x488u));
    /* 0058a8cf: lea esi, [ebp + 0x488] */ r_esi = (u32)(r_ebp+0x488u);
    /* 0058a8d5: mov ecx, esi */ r_ecx = r_esi;
    /* 0058a8d7: call dword ptr [eax + 0x20] */ { u32 t = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, 0x58a8dau); call_ind(t); }
    /* 0058a8da: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058a8dc: je 0x58a88e */ if (fZ) goto L_0058a88e;
L_0058a8de:; BB(0x0058a8de);
    /* 0058a8de: mov eax, dword ptr [ebp + 0x488] */ r_eax = R32((u32)(r_ebp+0x488u));
    /* 0058a8e4: mov ecx, esi */ r_ecx = r_esi;
    /* 0058a8e6: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x58a8e9u); call_ind(t); }
    /* 0058a8e9: jmp 0x58a88e */ goto L_0058a88e;
L_0058a8eb:; BB(0x0058a8eb);
    /* 0058a8eb: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0058a8ed: call 0x7aa668 */ r_esp -= 4; W32(r_esp, 0x58a8f2u); f_007aa668();
    /* 0058a8f2: jmp 0x58a85b */ goto L_0058a85b;
L_0058a8f7:; BB(0x0058a8f7);
    /* 0058a8f7: mov edx, dword ptr [ebp + 0x488] */ r_edx = R32((u32)(r_ebp+0x488u));
    /* 0058a8fd: lea esi, [ebp + 0x488] */ r_esi = (u32)(r_ebp+0x488u);
    /* 0058a903: mov ecx, esi */ r_ecx = r_esi;
    /* 0058a905: call dword ptr [edx + 0x20] */ { u32 t = R32((u32)(r_edx+0x20u)); r_esp -= 4; W32(r_esp, 0x58a908u); call_ind(t); }
    /* 0058a908: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058a90a: je 0x58a783 */ if (fZ) goto L_0058a783;
L_0058a910:; BB(0x0058a910);
    /* 0058a910: mov edx, dword ptr [ebp + 0x488] */ r_edx = R32((u32)(r_ebp+0x488u));
    /* 0058a916: mov ecx, esi */ r_ecx = r_esi;
    /* 0058a918: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x58a91bu); call_ind(t); }
    /* 0058a91b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0058a91d: call 0x8173d0 */ r_esp -= 4; W32(r_esp, 0x58a922u); f_008173d0();
    /* 0058a922: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058a924: jne 0x58a882 */ if (!fZ) goto L_0058a882;
L_0058a92a:; BB(0x0058a92a);
    /* 0058a92a: jmp 0x58a783 */ goto L_0058a783;
}

void f_0058a930(void) /* sub_58A930 */
{
    FN_ENTER(0x0058a930);
    /* 0058a930: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0058a931: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0058a933: mov eax, dword ptr [0xaca300] */ r_eax = R32((u32)(0xaca300u));
    /* 0058a938: test al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0058a93a: je 0x58a992 */ if (fZ) goto L_0058a992;
L_0058a93c:; BB(0x0058a93c);
    /* 0058a93c: lea eax, [ebp + 0x424] */ r_eax = (u32)(r_ebp+0x424u);
    /* 0058a942: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058a943: call 0x505a3c */ r_esp -= 4; W32(r_esp, 0x58a948u); f_00505a3c();
    /* 0058a948: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0058a949: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0058a94b: je 0x58a98b */ if (fZ) goto L_0058a98b;
L_0058a94d:; BB(0x0058a94d);
    /* 0058a94d: mov ecx, dword ptr [ebp + 0x24] */ r_ecx = R32((u32)(r_ebp+0x24u));
    /* 0058a950: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x58a955u); f_00829cc8();
    /* 0058a955: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x58a95au); f_0082d7b0();
    /* 0058a95a: push dword ptr [ebp + 0x40] */ { u32 v = R32((u32)(r_ebp+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 0058a95d: push dword ptr [ebp + 0x450] */ { u32 v = R32((u32)(r_ebp+0x450u)); r_esp -= 4; W32(r_esp, v); }
    /* 0058a963: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0058a965: push dword ptr [ebp + 0x38] */ { u32 v = R32((u32)(r_ebp+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 0058a968: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x58a96du); f_00830b74();
    /* 0058a96d: mov edx, dword ptr [ebp + 0x60] */ r_edx = R32((u32)(r_ebp+0x60u));
    /* 0058a970: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0058a972: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x58a977u); f_0082d8bc();
    /* 0058a977: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0058a979: call 0x7aa668 */ r_esp -= 4; W32(r_esp, 0x58a97eu); f_007aa668();
    /* 0058a97e: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x58a983u); f_0082da80();
    /* 0058a983: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0058a985: call 0x505bf8 */ r_esp -= 4; W32(r_esp, 0x58a98au); f_00505bf8();
    /* 0058a98a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0058a98b:; BB(0x0058a98b);
    /* 0058a98b: mov eax, 1 */ r_eax = 0x1u;
    /* 0058a990: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058a991: ret  */ FN_RET(0x0058a930); r_esp += 4; return;
L_0058a992:; BB(0x0058a992);
    /* 0058a992: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0058a994: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058a995: ret  */ FN_RET(0x0058a930); r_esp += 4; return;
}

void f_0058a998(void) /* sub_58A998 */
{
    FN_ENTER(0x0058a998);
    /* 0058a998: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0058a999: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0058a99a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0058a99b: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0058a99d: mov ecx, dword ptr [0xa743e0] */ r_ecx = R32((u32)(0xa743e0u));
    /* 0058a9a3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0058a9a5: je 0x58aa0d */ if (fZ) goto L_0058aa0d;
L_0058a9a7:; BB(0x0058a9a7);
    /* 0058a9a7: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0058a9a9: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x58a9aeu); f_005b8610();
    /* 0058a9ae: mov edi, eax */ r_edi = r_eax;
    /* 0058a9b0: mov ecx, dword ptr [0xa743e0] */ r_ecx = R32((u32)(0xa743e0u));
    /* 0058a9b6: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0058a9b8: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x58a9bdu); f_005b8624();
    /* 0058a9bd: mov ebp, eax */ r_ebp = r_eax;
    /* 0058a9bf: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x58a9c4u); f_0082d7b0();
    /* 0058a9c4: push dword ptr [ebx + 0x40] */ { u32 v = R32((u32)(r_ebx+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 0058a9c7: push dword ptr [ebx + 0x3c] */ { u32 v = R32((u32)(r_ebx+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0058a9ca: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0058a9cc: push dword ptr [ebx + 0x38] */ { u32 v = R32((u32)(r_ebx+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 0058a9cf: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x58a9d4u); f_00830b74();
    /* 0058a9d4: push dword ptr [ebx + 0x64] */ { u32 v = R32((u32)(r_ebx+0x64u)); r_esp -= 4; W32(r_esp, v); }
    /* 0058a9d7: push dword ptr [ebx + 0x60] */ { u32 v = R32((u32)(r_ebx+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 0058a9da: mov edx, dword ptr [ebx + 0x5c] */ r_edx = R32((u32)(r_ebx+0x5cu));
    /* 0058a9dd: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0058a9df: call 0x82df5c */ r_esp -= 4; W32(r_esp, 0x58a9e4u); f_0082df5c();
    /* 0058a9e4: push 0x3fc00000 */ { u32 v = 0x3fc00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0058a9e9: push 0x3fc00000 */ { u32 v = 0x3fc00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0058a9ee: push 0x3fc00000 */ { u32 v = 0x3fc00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0058a9f3: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0058a9f5: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x58a9fau); f_0082fa0c();
    /* 0058a9fa: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0058a9fc: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x58aa01u); f_00829cc8();
    /* 0058aa01: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0058aa02: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x58aa07u); f_0082e1e8();
    /* 0058aa07: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0058aa08: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x58aa0du); f_0082da80();
L_0058aa0d:; BB(0x0058aa0d);
    /* 0058aa0d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0058aa0e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058aa0f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0058aa10: ret  */ FN_RET(0x0058a998); r_esp += 4; return;
}

void f_0058aa14(void) /* sub_58AA14 */
{
    FN_ENTER(0x0058aa14);
    /* 0058aa14: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0058aa15: mov edi, ecx */ r_edi = r_ecx;
    /* 0058aa17: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0058aa19: mov ecx, edi */ r_ecx = r_edi;
    /* 0058aa1b: push 0x41700000 */ { u32 v = 0x41700000u; r_esp -= 4; W32(r_esp, v); }
    /* 0058aa20: push 0x43c80000 */ { u32 v = 0x43c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0058aa25: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x58aa28u); call_ind(t); }
    /* 0058aa28: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0058aa2a: je 0x58aa73 */ if (fZ) goto L_0058aa73;
L_0058aa2c:; BB(0x0058aa2c);
    /* 0058aa2c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0058aa2e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058aa2f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058aa30: mov ecx, edi */ r_ecx = r_edi;
    /* 0058aa32: call 0x520cf8 */ r_esp -= 4; W32(r_esp, 0x58aa37u); f_00520cf8();
    /* 0058aa37: mov ecx, dword ptr [edi + 0x24] */ r_ecx = R32((u32)(r_edi+0x24u));
    /* 0058aa3a: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x58aa3fu); f_00829cc8();
    /* 0058aa3f: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x58aa44u); f_0082d7b0();
    /* 0058aa44: lea ecx, [edi + 0x38] */ r_ecx = (u32)(r_edi+0x38u);
    /* 0058aa47: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x58aa4cu); f_0082d838();
    /* 0058aa4c: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 0058aa4f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0058aa51: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x58aa56u); f_0082d8bc();
    /* 0058aa56: call 0x520d08 */ r_esp -= 4; W32(r_esp, 0x58aa5bu); f_00520d08();
    /* 0058aa5b: call 0x578b38 */ r_esp -= 4; W32(r_esp, 0x58aa60u); f_00578b38();
    /* 0058aa60: push dword ptr [edi + 0x34] */ { u32 v = R32((u32)(r_edi+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 0058aa63: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x58aa68u); f_0082e1e8();
    /* 0058aa68: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0058aa69: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x58aa6eu); f_0082dab0();
    /* 0058aa6e: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x58aa73u); f_0082da80();
L_0058aa73:; BB(0x0058aa73);
    /* 0058aa73: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0058aa74: ret  */ FN_RET(0x0058aa14); r_esp += 4; return;
}

void f_0058aa78(void) /* sub_58AA78 */
{
    FN_ENTER(0x0058aa78);
    /* 0058aa78: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0058aa7c: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0058aa7f: ja 0x58aaf4 */ if ((!fC&&!fZ)) goto L_0058aaf4;
L_0058aa81:; BB(0x0058aa81);
    /* 0058aa81: mov eax, dword ptr [eax*4 + 0x92889c] */ r_eax = R32((u32)(r_eax*4+0x92889cu));
    /* 0058aa88: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0058aaf4:; BB(0x0058aaf4);
    /* 0058aaf4: ret 8 */ FN_RET(0x0058aa78); r_esp += 12; return;
}

void f_0058aa8a(void)
{
    FN_ENTER(0x0058aa8a);
    /* 0058aa8a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0058aa8e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058aa8f: call 0x58aaf8 */ r_esp -= 4; W32(r_esp, 0x58aa94u); f_0058aaf8();
    /* 0058aa94: jmp 0x58aaf4 */ goto L_0058aaf4;
L_0058aaf4:; BB(0x0058aaf4);
    /* 0058aaf4: ret 8 */ FN_RET(0x0058aa8a); r_esp += 12; return;
}

void f_0058aa96(void)
{
    FN_ENTER(0x0058aa96);
    /* 0058aa96: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0058aa9a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058aa9b: call 0x58ab4c */ r_esp -= 4; W32(r_esp, 0x58aaa0u); f_0058ab4c();
    /* 0058aaa0: jmp 0x58aaf4 */ goto L_0058aaf4;
L_0058aaf4:; BB(0x0058aaf4);
    /* 0058aaf4: ret 8 */ FN_RET(0x0058aa96); r_esp += 12; return;
}

void f_0058aaa2(void)
{
    FN_ENTER(0x0058aaa2);
    /* 0058aaa2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0058aaa6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058aaa7: call 0x58ae7c */ r_esp -= 4; W32(r_esp, 0x58aaacu); f_0058ae7c();
    /* 0058aaac: jmp 0x58aaf4 */ goto L_0058aaf4;
L_0058aaf4:; BB(0x0058aaf4);
    /* 0058aaf4: ret 8 */ FN_RET(0x0058aaa2); r_esp += 12; return;
}

void f_0058aaae(void)
{
    FN_ENTER(0x0058aaae);
    /* 0058aaae: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0058aab2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058aab3: call 0x58b0cc */ r_esp -= 4; W32(r_esp, 0x58aab8u); f_0058b0cc();
    /* 0058aab8: jmp 0x58aaf4 */ goto L_0058aaf4;
L_0058aaf4:; BB(0x0058aaf4);
    /* 0058aaf4: ret 8 */ FN_RET(0x0058aaae); r_esp += 12; return;
}

void f_0058aaba(void)
{
    FN_ENTER(0x0058aaba);
    /* 0058aaba: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0058aabe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058aabf: call 0x58b21c */ r_esp -= 4; W32(r_esp, 0x58aac4u); f_0058b21c();
    /* 0058aac4: jmp 0x58aaf4 */ goto L_0058aaf4;
L_0058aaf4:; BB(0x0058aaf4);
    /* 0058aaf4: ret 8 */ FN_RET(0x0058aaba); r_esp += 12; return;
}

void f_0058aac6(void)
{
    FN_ENTER(0x0058aac6);
    /* 0058aac6: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0058aaca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058aacb: call 0x58b81c */ r_esp -= 4; W32(r_esp, 0x58aad0u); f_0058b81c();
    /* 0058aad0: jmp 0x58aaf4 */ goto L_0058aaf4;
L_0058aaf4:; BB(0x0058aaf4);
    /* 0058aaf4: ret 8 */ FN_RET(0x0058aac6); r_esp += 12; return;
}

void f_0058aad2(void)
{
    FN_ENTER(0x0058aad2);
    /* 0058aad2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0058aad6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058aad7: call 0x58ba48 */ r_esp -= 4; W32(r_esp, 0x58aadcu); f_0058ba48();
    /* 0058aadc: jmp 0x58aaf4 */ goto L_0058aaf4;
L_0058aaf4:; BB(0x0058aaf4);
    /* 0058aaf4: ret 8 */ FN_RET(0x0058aad2); r_esp += 12; return;
}

void f_0058aade(void)
{
    FN_ENTER(0x0058aade);
    /* 0058aade: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0058aae2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058aae3: call 0x58bde0 */ r_esp -= 4; W32(r_esp, 0x58aae8u); f_0058bde0();
    /* 0058aae8: jmp 0x58aaf4 */ goto L_0058aaf4;
L_0058aaf4:; BB(0x0058aaf4);
    /* 0058aaf4: ret 8 */ FN_RET(0x0058aade); r_esp += 12; return;
}

void f_0058aaea(void)
{
    FN_ENTER(0x0058aaea);
    /* 0058aaea: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0058aaee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058aaef: call 0x58bed4 */ r_esp -= 4; W32(r_esp, 0x58aaf4u); f_0058bed4();
    /* 0058aaf4: ret 8 */ FN_RET(0x0058aaea); r_esp += 12; return;
}

void f_0058aaf8(void) /* sub_58AAF8 */
{
    FN_ENTER(0x0058aaf8);
    /* 0058aaf8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0058aaf9: mov esi, ecx */ r_esi = r_ecx;
    /* 0058aafb: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0058aaff: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058ab02: je 0x58ab1a */ if (fZ) goto L_0058ab1a;
L_0058ab04:; BB(0x0058ab04);
    /* 0058ab04: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0058ab07: jne 0x58ab16 */ if (!fZ) goto L_0058ab16;
L_0058ab09:; BB(0x0058ab09);
    /* 0058ab09: movzx eax, word ptr [esi + 8] */ r_eax = (u32)R16((u32)(r_esi+0x8u));
    /* 0058ab0d: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0058ab12: mov word ptr [esi + 8], ax */ W16((u32)(r_esi+0x8u), (u16)r_eax);
L_0058ab16:; BB(0x0058ab16);
    /* 0058ab16: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0058ab17: ret 4 */ FN_RET(0x0058aaf8); r_esp += 8; return;
L_0058ab1a:; BB(0x0058ab1a);
    /* 0058ab1a: mov eax, dword ptr [esi + 0x44c] */ r_eax = R32((u32)(r_esi+0x44cu));
    /* 0058ab20: movzx edx, word ptr [esi + 0x43c] */ r_edx = (u32)R16((u32)(r_esi+0x43cu));
    /* 0058ab27: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0058ab28: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0058ab2b: and eax, 0xfffffffd */ {  u32 a = r_eax; u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0058ab2e: mov dword ptr [esi + 0x44c], eax */ W32((u32)(r_esi+0x44cu), r_eax);
    /* 0058ab34: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x58ab39u); f_007b4d18();
    /* 0058ab39: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0058ab3a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0058ab3c: je 0x58ab16 */ if (fZ) goto L_0058ab16;
L_0058ab3e:; BB(0x0058ab3e);
    /* 0058ab3e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0058ab3f: mov ecx, eax */ r_ecx = r_eax;
    /* 0058ab41: call 0x589b70 */ r_esp -= 4; W32(r_esp, 0x58ab46u); f_00589b70();
    /* 0058ab46: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0058ab47: ret 4 */ FN_RET(0x0058aaf8); r_esp += 8; return;
}

void f_0058ab4c(void) /* sub_58AB4C */
{
    FN_ENTER(0x0058ab4c);
    /* 0058ab4c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0058ab4d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0058ab4e: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0058ab51: mov edi, ecx */ r_edi = r_ecx;
    /* 0058ab53: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0058ab57: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058ab5a: je 0x58ad8d */ if (fZ) goto L_0058ad8d;
L_0058ab60:; BB(0x0058ab60);
    /* 0058ab60: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058ab63: je 0x58ad71 */ if (fZ) goto L_0058ad71;
L_0058ab69:; BB(0x0058ab69);
    /* 0058ab69: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058ab6b: jne 0x58ad85 */ if (!fZ) goto L_0058ad85;
L_0058ab71:; BB(0x0058ab71);
    /* 0058ab71: mov ecx, edi */ r_ecx = r_edi;
    /* 0058ab73: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x58ab78u); f_007aa094();
    /* 0058ab78: mov eax, dword ptr [edi + 0x3c8] */ r_eax = R32((u32)(r_edi+0x3c8u));
    /* 0058ab7e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0058ab80: jl 0x58ad85 */ if ((fS!=fO)) goto L_0058ad85;
L_0058ab86:; BB(0x0058ab86);
    /* 0058ab86: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0058ab89: jle 0x58ac01 */ if ((fZ||fS!=fO)) goto L_0058ac01;
L_0058ab8b:; BB(0x0058ab8b);
    /* 0058ab8b: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058ab8e: jne 0x58ad85 */ if (!fZ) goto L_0058ad85;
L_0058ab94:; BB(0x0058ab94);
    /* 0058ab94: mov eax, dword ptr [edi + 0x44c] */ r_eax = R32((u32)(r_edi+0x44cu));
    /* 0058ab9a: mov dword ptr [edi + 0x3c8], 3 */ W32((u32)(r_edi+0x3c8u), 0x3u);
    /* 0058aba4: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0058aba7: mov dword ptr [edi + 0x44c], eax */ W32((u32)(r_edi+0x44cu), r_eax);
    /* 0058abad: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 0058abaf: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 0058abb1: lea esi, [edi + 0x38] */ r_esi = (u32)(r_edi+0x38u);
    /* 0058abb4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0058abb5: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x58abbau); f_0050b7a4();
    /* 0058abba: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 0058abbc: push 0x46 */ { u32 v = 0x46u; r_esp -= 4; W32(r_esp, v); }
    /* 0058abbe: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0058abbf: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x58abc4u); f_0050b7a4();
    /* 0058abc4: push 0x262 */ { u32 v = 0x262u; r_esp -= 4; W32(r_esp, v); }
    /* 0058abc9: call 0x589c9c */ r_esp -= 4; W32(r_esp, 0x58abceu); f_00589c9c();
    /* 0058abce: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0058abd0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0058abd1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0058abd2: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0058abd3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058abd4: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x58abd9u); f_00814298();
    /* 0058abd9: push dword ptr [edi + 0x60] */ { u32 v = R32((u32)(r_edi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 0058abdc: lea eax, [edi + 0x300] */ r_eax = (u32)(r_edi+0x300u);
    /* 0058abe2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058abe3: push dword ptr [edi + 0x24] */ { u32 v = R32((u32)(r_edi+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 0058abe6: push 0x928990 */ { u32 v = 0x928990u; r_esp -= 4; W32(r_esp, v); }
    /* 0058abeb: push dword ptr [0xa743f4] */ { u32 v = R32((u32)(0xa743f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0058abf1: call 0x578aa0 */ r_esp -= 4; W32(r_esp, 0x58abf6u); f_00578aa0();
    /* 0058abf6: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058abf9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0058abfc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0058abfd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0058abfe: ret 4 */ FN_RET(0x0058ab4c); r_esp += 8; return;
L_0058ac01:; BB(0x0058ac01);
    /* 0058ac01: push dword ptr [edi + 0x3ec] */ { u32 v = R32((u32)(r_edi+0x3ecu)); r_esp -= 4; W32(r_esp, v); }
    /* 0058ac07: push dword ptr [edi + 0x45c] */ { u32 v = R32((u32)(r_edi+0x45cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0058ac0d: mov ecx, edi */ r_ecx = r_edi;
    /* 0058ac0f: push dword ptr [edi + 0x454] */ { u32 v = R32((u32)(r_edi+0x454u)); r_esp -= 4; W32(r_esp, v); }
    /* 0058ac15: call 0x58ae3c */ r_esp -= 4; W32(r_esp, 0x58ac1au); f_0058ae3c();
    /* 0058ac1a: mov eax, dword ptr [edi + 0x38] */ r_eax = R32((u32)(r_edi+0x38u));
    /* 0058ac1d: fld dword ptr [edi + 0x3c] */ FPUSH(R_F32((u32)(r_edi+0x3cu)));
    /* 0058ac20: fadd dword ptr [edi + 0x450] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x450u));
    /* 0058ac26: mov edx, dword ptr [edi + 0x40] */ r_edx = R32((u32)(r_edi+0x40u));
    /* 0058ac29: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0058ac2d: mov ecx, edi */ r_ecx = r_edi;
    /* 0058ac2f: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0058ac32: lea esi, [edi + 0x250] */ r_esi = (u32)(r_edi+0x250u);
    /* 0058ac38: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0058ac3c: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0058ac3f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0058ac40: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058ac41: call 0x7b4c58 */ r_esp -= 4; W32(r_esp, 0x58ac46u); f_007b4c58();
    /* 0058ac46: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058ac48: je 0x58ac51 */ if (fZ) goto L_0058ac51;
L_0058ac4a:; BB(0x0058ac4a);
    /* 0058ac4a: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0058ac4e: mov dword ptr [edi + 0x3c], eax */ W32((u32)(r_edi+0x3cu), r_eax);
L_0058ac51:; BB(0x0058ac51);
    /* 0058ac51: fld dword ptr [0x9289c0] */ FPUSH(R_F32((u32)(0x9289c0u)));
    /* 0058ac57: fadd dword ptr [edi + 0x3e8] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x3e8u));
    /* 0058ac5d: fld dword ptr [edi + 0x450] */ FPUSH(R_F32((u32)(r_edi+0x450u)));
    /* 0058ac63: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0058ac65: fst dword ptr [edi + 0x3e8] */ W_F32((u32)(r_edi+0x3e8u), ST(0));
    /* 0058ac6b: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0058ac6d: fld dword ptr [0x928a0c] */ FPUSH(R_F32((u32)(0x928a0cu)));
    /* 0058ac73: fadd dword ptr [edi + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x3cu));
    /* 0058ac76: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0058ac78: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0058ac7a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0058ac7b: jbe 0x58ad42 */ if ((fC||fZ)) goto L_0058ad42;
L_0058ac81:; BB(0x0058ac81);
    /* 0058ac81: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0058ac83: mov eax, dword ptr [edi + 0x3c8] */ r_eax = R32((u32)(r_edi+0x3c8u));
    /* 0058ac89: fstp dword ptr [edi + 0x450] */ W_F32((u32)(r_edi+0x450u), ST(0)); FPOP();
    /* 0058ac8f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058ac91: jne 0x58ad2a */ if (!fZ) goto L_0058ad2a;
L_0058ac97:; BB(0x0058ac97);
    /* 0058ac97: fld dword ptr [0x9289b8] */ FPUSH(R_F32((u32)(0x9289b8u)));
    /* 0058ac9d: fld dword ptr [edi + 0x3ec] */ FPUSH(R_F32((u32)(r_edi+0x3ecu)));
    /* 0058aca3: fld dword ptr [edi + 0x454] */ FPUSH(R_F32((u32)(r_edi+0x454u)));
    /* 0058aca9: fld dword ptr [edi + 0x45c] */ FPUSH(R_F32((u32)(r_edi+0x45cu)));
    /* 0058acaf: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0058acb1: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0058acb3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0058acb5: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0058acb7: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0058acb9: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0058acbb: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0058acbd: fst dword ptr [edi + 0x3ec] */ W_F32((u32)(r_edi+0x3ecu), ST(0));
    /* 0058acc3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0058acc5: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0058acc7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0058acc9: fcomp dword ptr [0x9289b4] */ fx_compare(ST(0), R_F32((u32)(0x9289b4u))); FPOP();
    /* 0058accf: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0058acd1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0058acd2: mov dword ptr [edi + 0x3c8], 1 */ W32((u32)(r_edi+0x3c8u), 0x1u);
    /* 0058acdc: mov dword ptr [edi + 0x3e8], 0x3f800000 */ W32((u32)(r_edi+0x3e8u), 0x3f800000u);
    /* 0058ace6: ja 0x58ad5a */ if ((!fC&&!fZ)) goto L_0058ad5a;
L_0058ace8:; BB(0x0058ace8);
    /* 0058ace8: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0058acea: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0058acec: mov ecx, dword ptr [edi + 0x60] */ r_ecx = R32((u32)(r_edi+0x60u));
    /* 0058acef: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x58acf4u); f_0082dcbc();
    /* 0058acf4: fld dword ptr [0x9289b0] */ FPUSH(R_F32((u32)(0x9289b0u)));
    /* 0058acfa: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0058acfc: mov ecx, dword ptr [edi + 0x60] */ r_ecx = R32((u32)(r_edi+0x60u));
    /* 0058acff: fstp dword ptr [edi + 0x454] */ W_F32((u32)(r_edi+0x454u), ST(0)); FPOP();
    /* 0058ad05: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x58ad0au); f_0082ddd8();
    /* 0058ad0a: fld dword ptr [0x9289b0] */ FPUSH(R_F32((u32)(0x9289b0u)));
    /* 0058ad10: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0058ad12: fld dword ptr [0x9289b8] */ FPUSH(R_F32((u32)(0x9289b8u)));
    /* 0058ad18: fld dword ptr [edi + 0x3ec] */ FPUSH(R_F32((u32)(r_edi+0x3ecu)));
    /* 0058ad1e: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0058ad20: fstp dword ptr [edi + 0x45c] */ W_F32((u32)(r_edi+0x45cu), ST(0)); FPOP();
    /* 0058ad26: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0058ad28: jmp 0x58ad5a */ goto L_0058ad5a;
L_0058ad2a:; BB(0x0058ad2a);
    /* 0058ad2a: fld dword ptr [0x9289b8] */ FPUSH(R_F32((u32)(0x9289b8u)));
    /* 0058ad30: fld dword ptr [edi + 0x3ec] */ FPUSH(R_F32((u32)(r_edi+0x3ecu)));
    /* 0058ad36: mov dword ptr [edi + 0x3c8], 2 */ W32((u32)(r_edi+0x3c8u), 0x2u);
    /* 0058ad40: jmp 0x58ad5a */ goto L_0058ad5a;
L_0058ad42:; BB(0x0058ad42);
    /* 0058ad42: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0058ad44: fld dword ptr [0x9289b8] */ FPUSH(R_F32((u32)(0x9289b8u)));
    /* 0058ad4a: fld dword ptr [edi + 0x3ec] */ FPUSH(R_F32((u32)(r_edi+0x3ecu)));
    /* 0058ad50: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0058ad52: fstp dword ptr [edi + 0x450] */ W_F32((u32)(r_edi+0x450u), ST(0)); FPOP();
    /* 0058ad58: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
L_0058ad5a:; BB(0x0058ad5a);
    /* 0058ad5a: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0058ad5c: fstp dword ptr [edi + 0x3ec] */ W_F32((u32)(r_edi+0x3ecu), ST(0)); FPOP();
    /* 0058ad62: mov ecx, edi */ r_ecx = r_edi;
    /* 0058ad64: call 0x589fdc */ r_esp -= 4; W32(r_esp, 0x58ad69u); f_00589fdc();
    /* 0058ad69: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0058ad6c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0058ad6d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0058ad6e: ret 4 */ FN_RET(0x0058ab4c); r_esp += 8; return;
L_0058ad71:; BB(0x0058ad71);
    /* 0058ad71: mov eax, dword ptr [edi + 0x3c8] */ r_eax = R32((u32)(r_edi+0x3c8u));
    /* 0058ad77: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058ad7a: jne 0x58ad85 */ if (!fZ) goto L_0058ad85;
L_0058ad7c:; BB(0x0058ad7c);
    /* 0058ad7c: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0058ad7e: mov ecx, edi */ r_ecx = r_edi;
    /* 0058ad80: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x58ad85u); f_0051f62c();
L_0058ad85:; BB(0x0058ad85);
    /* 0058ad85: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0058ad88: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0058ad89: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0058ad8a: ret 4 */ FN_RET(0x0058ab4c); r_esp += 8; return;
L_0058ad8d:; BB(0x0058ad8d);
    /* 0058ad8d: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 0058ad8f: mov eax, 5 */ r_eax = 0x5u;
    /* 0058ad94: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 0058ad9b: mov ecx, edi */ r_ecx = r_edi;
    /* 0058ad9d: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x58ada3u); call_ind(t); }
    /* 0058ada3: mov eax, dword ptr [edi + 0x44c] */ r_eax = R32((u32)(r_edi+0x44cu));
    /* 0058ada9: mov dword ptr [edi + 0x80], 0 */ W32((u32)(r_edi+0x80u), 0x0u);
    /* 0058adb3: and eax, 0xfffffffc */ {  u32 a = r_eax; u32 b = 0xfffffffcu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0058adb6: mov dword ptr [edi + 0x44c], eax */ W32((u32)(r_edi+0x44cu), r_eax);
    /* 0058adbc: mov ecx, edi */ r_ecx = r_edi;
    /* 0058adbe: call 0x787534 */ r_esp -= 4; W32(r_esp, 0x58adc3u); f_00787534();
    /* 0058adc3: mov ecx, edi */ r_ecx = r_edi;
    /* 0058adc5: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x58adcau); f_0061cdb0();
    /* 0058adca: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0058adcf: push 0xf1 */ { u32 v = 0xf1u; r_esp -= 4; W32(r_esp, v); }
    /* 0058add4: mov ecx, edi */ r_ecx = r_edi;
    /* 0058add6: call 0x618a44 */ r_esp -= 4; W32(r_esp, 0x58addbu); f_00618a44();
    /* 0058addb: mov eax, dword ptr [edi + 0x30c] */ r_eax = R32((u32)(r_edi+0x30cu));
    /* 0058ade1: mov edx, dword ptr [edi + 0x314] */ r_edx = R32((u32)(r_edi+0x314u));
    /* 0058ade7: mov dword ptr [edi + 0x3c8], 0 */ W32((u32)(r_edi+0x3c8u), 0x0u);
    /* 0058adf1: mov dword ptr [edi + 0x454], eax */ W32((u32)(r_edi+0x454u), r_eax);
    /* 0058adf7: mov dword ptr [edi + 0x3e8], 0 */ W32((u32)(r_edi+0x3e8u), 0x0u);
    /* 0058ae01: mov dword ptr [edi + 0x45c], edx */ W32((u32)(r_edi+0x45cu), r_edx);
    /* 0058ae07: lea esi, [edi + 0x454] */ r_esi = (u32)(r_edi+0x454u);
    /* 0058ae0d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0058ae0e: call 0x7828e4 */ r_esp -= 4; W32(r_esp, 0x58ae13u); f_007828e4();
    /* 0058ae13: fstp dword ptr [edi + 0x3ec] */ W_F32((u32)(r_edi+0x3ecu), ST(0)); FPOP();
    /* 0058ae19: push 0x261 */ { u32 v = 0x261u; r_esp -= 4; W32(r_esp, v); }
    /* 0058ae1e: call 0x589c9c */ r_esp -= 4; W32(r_esp, 0x58ae23u); f_00589c9c();
    /* 0058ae23: add edi, 0x38 */ {  u32 a = r_edi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0058ae26: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0058ae28: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0058ae29: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0058ae2a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0058ae2b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058ae2c: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x58ae31u); f_00814298();
    /* 0058ae31: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058ae34: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0058ae37: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0058ae38: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0058ae39: ret 4 */ FN_RET(0x0058ab4c); r_esp += 8; return;
}

void f_0058ae3c(void) /* sub_58AE3C */
{
    FN_ENTER(0x0058ae3c);
    /* 0058ae3c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0058ae3d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0058ae3f: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0058ae43: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0058ae47: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0058ae4b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0058ae4d: call 0x520adc */ r_esp -= 4; W32(r_esp, 0x58ae52u); f_00520adc();
    /* 0058ae52: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058ae54: je 0x58ae69 */ if (fZ) goto L_0058ae69;
L_0058ae56:; BB(0x0058ae56);
    /* 0058ae56: mov eax, dword ptr [ebx + 0x44c] */ r_eax = R32((u32)(r_ebx+0x44cu));
    /* 0058ae5c: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0058ae5f: mov dword ptr [ebx + 0x44c], eax */ W32((u32)(r_ebx+0x44cu), r_eax);
    /* 0058ae65: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0058ae66: ret 0xc */ FN_RET(0x0058ae3c); r_esp += 16; return;
L_0058ae69:; BB(0x0058ae69);
    /* 0058ae69: mov eax, dword ptr [ebx + 0x44c] */ r_eax = R32((u32)(r_ebx+0x44cu));
    /* 0058ae6f: and eax, 0xfffffffd */ {  u32 a = r_eax; u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0058ae72: mov dword ptr [ebx + 0x44c], eax */ W32((u32)(r_ebx+0x44cu), r_eax);
    /* 0058ae78: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0058ae79: ret 0xc */ FN_RET(0x0058ae3c); r_esp += 16; return;
}

void f_0058ae7c(void) /* sub_58AE7C */
{
    FN_ENTER(0x0058ae7c);
    /* 0058ae7c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0058ae7d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0058ae7e: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0058ae81: mov edi, ecx */ r_edi = r_ecx;
    /* 0058ae83: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 0058ae87: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058ae8a: je 0x58b062 */ if (fZ) goto L_0058b062;
L_0058ae90:; BB(0x0058ae90);
    /* 0058ae90: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058ae93: je 0x58af38 */ if (fZ) goto L_0058af38;
L_0058ae99:; BB(0x0058ae99);
    /* 0058ae99: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058ae9b: jne 0x58af2a */ if (!fZ) goto L_0058af2a;
L_0058aea1:; BB(0x0058aea1);
    /* 0058aea1: mov ecx, edi */ r_ecx = r_edi;
    /* 0058aea3: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x58aea8u); f_007aa094();
    /* 0058aea8: mov eax, dword ptr [edi + 0x30c] */ r_eax = R32((u32)(r_edi+0x30cu));
    /* 0058aeae: mov edx, dword ptr [edi + 0x314] */ r_edx = R32((u32)(r_edi+0x314u));
    /* 0058aeb4: add dword ptr [edi + 0x3c8], 1 */ { u32 ad = (u32)(r_edi+0x3c8u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0058aebb: mov dword ptr [edi + 0x454], eax */ W32((u32)(r_edi+0x454u), r_eax);
    /* 0058aec1: mov dword ptr [edi + 0x45c], edx */ W32((u32)(r_edi+0x45cu), r_edx);
    /* 0058aec7: lea esi, [edi + 0x454] */ r_esi = (u32)(r_edi+0x454u);
    /* 0058aecd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0058aece: call 0x7828e4 */ r_esp -= 4; W32(r_esp, 0x58aed3u); f_007828e4();
    /* 0058aed3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0058aed4: mov eax, dword ptr [edi + 0x454] */ r_eax = R32((u32)(r_edi+0x454u));
    /* 0058aeda: mov edx, dword ptr [edi + 0x45c] */ r_edx = R32((u32)(r_edi+0x45cu));
    /* 0058aee0: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058aee3: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0058aee7: mov ecx, edi */ r_ecx = r_edi;
    /* 0058aee9: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0058aeec: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0058aef0: call 0x58ae3c */ r_esp -= 4; W32(r_esp, 0x58aef5u); f_0058ae3c();
    /* 0058aef5: mov ecx, edi */ r_ecx = r_edi;
    /* 0058aef7: call 0x589fdc */ r_esp -= 4; W32(r_esp, 0x58aefcu); f_00589fdc();
    /* 0058aefc: fld dword ptr [0x92898c] */ FPUSH(R_F32((u32)(0x92898cu)));
    /* 0058af02: fld dword ptr [edi + 0x30c] */ FPUSH(R_F32((u32)(r_edi+0x30cu)));
    /* 0058af08: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0058af0a: fld dword ptr [edi + 0x314] */ FPUSH(R_F32((u32)(r_edi+0x314u)));
    /* 0058af10: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0058af12: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0058af14: fstp dword ptr [edi + 0x30c] */ W_F32((u32)(r_edi+0x30cu), ST(0)); FPOP();
    /* 0058af1a: fstp dword ptr [edi + 0x314] */ W_F32((u32)(r_edi+0x314u), ST(0)); FPOP();
    /* 0058af20: mov ecx, edi */ r_ecx = r_edi;
    /* 0058af22: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x58af28u); call_ind(t); }
    /* 0058af28: jmp 0x58af72 */ goto L_0058af72;
L_0058af2a:; BB(0x0058af2a);
    /* 0058af2a: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058af2d: jne 0x58af72 */ if (!fZ) goto L_0058af72;
L_0058af2f:; BB(0x0058af2f);
    /* 0058af2f: mov ecx, edi */ r_ecx = r_edi;
    /* 0058af31: call 0x51f81c */ r_esp -= 4; W32(r_esp, 0x58af36u); f_0051f81c();
    /* 0058af36: jmp 0x58af72 */ goto L_0058af72;
L_0058af38:; BB(0x0058af38);
    /* 0058af38: mov eax, dword ptr [edi + 0xb0] */ r_eax = R32((u32)(r_edi+0xb0u));
    /* 0058af3e: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0058af40: je 0x58af72 */ if (fZ) goto L_0058af72;
L_0058af42:; BB(0x0058af42);
    /* 0058af42: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0058af44: mov ecx, edi */ r_ecx = r_edi;
    /* 0058af46: call dword ptr [eax + 0x194] */ { u32 t = R32((u32)(r_eax+0x194u)); r_esp -= 4; W32(r_esp, 0x58af4cu); call_ind(t); }
    /* 0058af4c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058af4e: je 0x58af5f */ if (fZ) goto L_0058af5f;
L_0058af50:; BB(0x0058af50);
    /* 0058af50: push 0x43480000 */ { u32 v = 0x43480000u; r_esp -= 4; W32(r_esp, v); }
    /* 0058af55: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0058af57: mov ecx, edi */ r_ecx = r_edi;
    /* 0058af59: call dword ptr [eax + 0x1a8] */ { u32 t = R32((u32)(r_eax+0x1a8u)); r_esp -= 4; W32(r_esp, 0x58af5fu); call_ind(t); }
L_0058af5f:; BB(0x0058af5f);
    /* 0058af5f: mov eax, dword ptr [edi + 0x380] */ r_eax = R32((u32)(r_edi+0x380u));
    /* 0058af65: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058af68: je 0x58af7a */ if (fZ) goto L_0058af7a;
L_0058af6a:; BB(0x0058af6a);
    /* 0058af6a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058af6b: mov ecx, edi */ r_ecx = r_edi;
    /* 0058af6d: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x58af72u); f_0051f62c();
L_0058af72:; BB(0x0058af72);
    /* 0058af72: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0058af75: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0058af76: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0058af77: ret 4 */ FN_RET(0x0058ae7c); r_esp += 8; return;
L_0058af7a:; BB(0x0058af7a);
    /* 0058af7a: movzx eax, word ptr [edi + 0x43c] */ r_eax = (u32)R16((u32)(r_edi+0x43cu));
    /* 0058af81: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058af82: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x58af87u); f_007b4d18();
    /* 0058af87: mov esi, eax */ r_esi = r_eax;
    /* 0058af89: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058af8c: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058af8e: je 0x58b050 */ if (fZ) goto L_0058b050;
L_0058af94:; BB(0x0058af94);
    /* 0058af94: movzx edx, word ptr [edi + 0x394] */ r_edx = (u32)R16((u32)(r_edi+0x394u));
    /* 0058af9b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0058af9c: mov ecx, esi */ r_ecx = r_esi;
    /* 0058af9e: call 0x589acc */ r_esp -= 4; W32(r_esp, 0x58afa3u); f_00589acc();
    /* 0058afa3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058afa5: je 0x58afbc */ if (fZ) goto L_0058afbc;
L_0058afa7:; BB(0x0058afa7);
    /* 0058afa7: mov dword ptr [edi + 0x474], 0 */ W32((u32)(r_edi+0x474u), 0x0u);
    /* 0058afb1: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0058afb3: mov ecx, edi */ r_ecx = r_edi;
    /* 0058afb5: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x58afbau); f_0051f62c();
    /* 0058afba: jmp 0x58af72 */ goto L_0058af72;
L_0058afbc:; BB(0x0058afbc);
    /* 0058afbc: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 0058afc0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0058afc1: mov ecx, edi */ r_ecx = r_edi;
    /* 0058afc3: push dword ptr [0xa743d0] */ { u32 v = R32((u32)(0xa743d0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0058afc9: call 0x51f918 */ r_esp -= 4; W32(r_esp, 0x58afceu); f_0051f918();
    /* 0058afce: mov edx, eax */ r_edx = r_eax;
    /* 0058afd0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0058afd2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0058afd4: jle 0x58b011 */ if ((fZ||fS!=fO)) goto L_0058b011;
L_0058afd6:; BB(0x0058afd6);
    /* 0058afd6: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 0058afda: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 0058afde: mov ebx, eax */ r_ebx = r_eax;
    /* 0058afe0: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 0058afe3: mov ebp, edx */ r_ebp = r_edx;
L_0058afe5:; BB(0x0058afe5);
    /* 0058afe5: movzx esi, word ptr [esp + ebx*8 + 0xc] */ r_esi = (u32)R16((u32)(r_esp+r_ebx*8+0xcu));
    /* 0058afea: movzx eax, word ptr [edi + 0x394] */ r_eax = (u32)R16((u32)(r_edi+0x394u));
    /* 0058aff1: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0058aff4: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058aff6: je 0x58b006 */ if (fZ) goto L_0058b006;
L_0058aff8:; BB(0x0058aff8);
    /* 0058aff8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0058aff9: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0058affd: call 0x589acc */ r_esp -= 4; W32(r_esp, 0x58b002u); f_00589acc();
    /* 0058b002: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058b004: jne 0x58b029 */ if (!fZ) goto L_0058b029;
L_0058b006:; BB(0x0058b006);
    /* 0058b006: cmp ebx, ebp */ {  u32 a = r_ebx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0058b008: jl 0x58afe5 */ if ((fS!=fO)) goto L_0058afe5;
L_0058b00a:; BB(0x0058b00a);
    /* 0058b00a: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 0058b00e: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
L_0058b011:; BB(0x0058b011);
    /* 0058b011: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0058b013: mov ecx, edi */ r_ecx = r_edi;
    /* 0058b015: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x58b01au); f_0051f62c();
    /* 0058b01a: mov dword ptr [edi + 0x47c], 0 */ W32((u32)(r_edi+0x47cu), 0x0u);
    /* 0058b024: jmp 0x58af72 */ goto L_0058af72;
L_0058b029:; BB(0x0058b029);
    /* 0058b029: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 0058b02d: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
    /* 0058b030: mov dword ptr [edi + 0x474], 0 */ W32((u32)(r_edi+0x474u), 0x0u);
    /* 0058b03a: mov ecx, edi */ r_ecx = r_edi;
    /* 0058b03c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0058b03d: call 0x520fcc */ r_esp -= 4; W32(r_esp, 0x58b042u); f_00520fcc();
    /* 0058b042: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0058b044: mov ecx, edi */ r_ecx = r_edi;
    /* 0058b046: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x58b04bu); f_0051f62c();
    /* 0058b04b: jmp 0x58af72 */ goto L_0058af72;
L_0058b050:; BB(0x0058b050);
    /* 0058b050: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 0058b054: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0058b059: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 0058b05d: jmp 0x58af72 */ goto L_0058af72;
L_0058b062:; BB(0x0058b062);
    /* 0058b062: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 0058b064: mov eax, 4 */ r_eax = 0x4u;
    /* 0058b069: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 0058b070: mov ecx, edi */ r_ecx = r_edi;
    /* 0058b072: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x58b078u); call_ind(t); }
    /* 0058b078: mov eax, dword ptr [edi + 0x44c] */ r_eax = R32((u32)(r_edi+0x44cu));
    /* 0058b07e: movsx edx, word ptr [edi + 0x32e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x32eu));
    /* 0058b085: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0058b086: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0058b089: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0058b08c: mov dword ptr [edi + 0x44c], eax */ W32((u32)(r_edi+0x44cu), r_eax);
    /* 0058b092: mov ecx, edi */ r_ecx = r_edi;
    /* 0058b094: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x58b099u); f_0051f664();
    /* 0058b099: mov ecx, edi */ r_ecx = r_edi;
    /* 0058b09b: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x58b0a0u); f_0061cdb0();
    /* 0058b0a0: push 0xde */ { u32 v = 0xdeu; r_esp -= 4; W32(r_esp, v); }
    /* 0058b0a5: call 0x589c9c */ r_esp -= 4; W32(r_esp, 0x58b0aau); f_00589c9c();
    /* 0058b0aa: lea esi, [edi + 0x38] */ r_esi = (u32)(r_edi+0x38u);
    /* 0058b0ad: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0058b0af: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0058b0b0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0058b0b1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0058b0b2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058b0b3: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x58b0b8u); f_00814298();
    /* 0058b0b8: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058b0bb: mov dword ptr [edi + 0x3c8], 0 */ W32((u32)(r_edi+0x3c8u), 0x0u);
    /* 0058b0c5: jmp 0x58af72 */ goto L_0058af72;
}

