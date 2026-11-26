#include "protos.h"

void f_0048b014(void) /* sub_48B014 */
{
    FN_ENTER(0x0048b014);
    /* 0048b014: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0048b015: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0048b017: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x48b01cu); f_0082d7b0();
    /* 0048b01c: lea ecx, [ebx + 0x38] */ r_ecx = (u32)(r_ebx+0x38u);
    /* 0048b01f: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x48b024u); f_0082d838();
    /* 0048b024: mov edx, dword ptr [ebx + 0x3b4] */ r_edx = R32((u32)(r_ebx+0x3b4u));
    /* 0048b02a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0048b02c: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x48b031u); f_0082d8bc();
    /* 0048b031: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0048b033: call 0x48b040 */ r_esp -= 4; W32(r_esp, 0x48b038u); f_0048b040();
    /* 0048b038: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x48b03du); f_0082da80();
    /* 0048b03d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0048b03e: ret  */ FN_RET(0x0048b014); r_esp += 4; return;
}

void f_0048b040(void) /* sub_48B040 */
{
    FN_ENTER(0x0048b040);
    /* 0048b040: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0048b041: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0048b042: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048b043: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0048b044: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0048b046: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x48b04bu); f_0082fa9c();
    /* 0048b04b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0048b04d: mov ecx, dword ptr [ebp + 0x37c] */ r_ecx = R32((u32)(r_ebp+0x37cu));
    /* 0048b053: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x48b058u); f_005b8624();
    /* 0048b058: mov ebx, eax */ r_ebx = r_eax;
    /* 0048b05a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0048b05c: mov ecx, dword ptr [ebp + 0x37c] */ r_ecx = R32((u32)(r_ebp+0x37cu));
    /* 0048b062: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x48b067u); f_005b8610();
    /* 0048b067: mov edi, eax */ r_edi = r_eax;
    /* 0048b069: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048b06b: mov ecx, dword ptr [ebp + 0x37c] */ r_ecx = R32((u32)(r_ebp+0x37cu));
    /* 0048b071: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x48b076u); f_005b8638();
    /* 0048b076: mov esi, eax */ r_esi = r_eax;
    /* 0048b078: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0048b07a: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x48b07fu); f_00829cc8();
    /* 0048b07f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048b081: push dword ptr [ebp + 0x3b0] */ { u32 v = R32((u32)(r_ebp+0x3b0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0048b087: call 0x48e148 */ r_esp -= 4; W32(r_esp, 0x48b08cu); f_0048e148();
    /* 0048b08c: push dword ptr [ebp + 0x3a0] */ { u32 v = R32((u32)(r_ebp+0x3a0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0048b092: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0048b093: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0048b094: call 0x83046c */ r_esp -= 4; W32(r_esp, 0x48b099u); f_0083046c();
    /* 0048b099: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048b09c: call 0x48e364 */ r_esp -= 4; W32(r_esp, 0x48b0a1u); f_0048e364();
    /* 0048b0a1: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x48b0a6u); f_0082faac();
    /* 0048b0a6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0048b0a7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048b0a8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0048b0a9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0048b0aa: ret  */ FN_RET(0x0048b040); r_esp += 4; return;
}

void f_0048b0ac(void) /* sub_48B0AC */
{
    FN_ENTER(0x0048b0ac);
    /* 0048b0ac: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048b0ad: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0048b0af: movzx eax, byte ptr [0xa46de0] */ r_eax = (u32)R8((u32)(0xa46de0u));
    /* 0048b0b6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0048b0b8: jne 0x48b0ce */ if (!fZ) goto L_0048b0ce;
L_0048b0ba:; BB(0x0048b0ba);
    /* 0048b0ba: mov dword ptr [0xa46de4], 0xc1a00000 */ W32((u32)(0xa46de4u), 0xc1a00000u);
    /* 0048b0c4: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0048b0c9: mov byte ptr [0xa46de0], al */ W8((u32)(0xa46de0u), (u8)r_eax);
L_0048b0ce:; BB(0x0048b0ce);
    /* 0048b0ce: fld dword ptr [0x901378] */ FPUSH(R_F32((u32)(0x901378u)));
    /* 0048b0d4: fadd dword ptr [ebp + 0x384] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x384u));
    /* 0048b0da: fld dword ptr [0xa46de4] */ FPUSH(R_F32((u32)(0xa46de4u)));
    /* 0048b0e0: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0048b0e2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0048b0e4: lea ecx, [ebp + 0x38] */ r_ecx = (u32)(r_ebp+0x38u);
    /* 0048b0e7: lea edx, [ebp + 0x380] */ r_edx = (u32)(r_ebp+0x380u);
    /* 0048b0ed: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0048b0ee: jb 0x48b0f2 */ if (fC) goto L_0048b0f2;
L_0048b0f0:; BB(0x0048b0f0);
    /* 0048b0f0: fst st(1) */ ST(1) = ST(0);
L_0048b0f2:; BB(0x0048b0f2);
    /* 0048b0f2: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0048b0f4: fstp dword ptr [ebp + 0x384] */ W_F32((u32)(r_ebp+0x384u), ST(0)); FPOP();
    /* 0048b0fa: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x48b0ffu); f_0082ebac();
    /* 0048b0ff: fld dword ptr [ebp + 0x3c] */ FPUSH(R_F32((u32)(r_ebp+0x3cu)));
    /* 0048b102: fcomp dword ptr [0x901380] */ fx_compare(ST(0), R_F32((u32)(0x901380u))); FPOP();
    /* 0048b108: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0048b10a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0048b10b: jae 0x48b12b */ if (!fC) goto L_0048b12b;
L_0048b10d:; BB(0x0048b10d);
    /* 0048b10d: mov eax, dword ptr [ebp + 0x38c] */ r_eax = R32((u32)(r_ebp+0x38cu));
    /* 0048b113: mov edx, dword ptr [ebp + 0x394] */ r_edx = R32((u32)(r_ebp+0x394u));
    /* 0048b119: mov dword ptr [ebp + 0x398], 1 */ W32((u32)(r_ebp+0x398u), 0x1u);
    /* 0048b123: mov dword ptr [ebp + 0x38], eax */ W32((u32)(r_ebp+0x38u), r_eax);
    /* 0048b126: mov dword ptr [ebp + 0x40], edx */ W32((u32)(r_ebp+0x40u), r_edx);
    /* 0048b129: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048b12a: ret  */ FN_RET(0x0048b0ac); r_esp += 4; return;
L_0048b12b:; BB(0x0048b12b);
    /* 0048b12b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048b12c: ret  */ FN_RET(0x0048b0ac); r_esp += 4; return;
}

void f_0048b130(void) /* sub_48B130 */
{
    FN_ENTER(0x0048b130);
    /* 0048b130: movzx eax, byte ptr [0xa46de8] */ r_eax = (u32)R8((u32)(0xa46de8u));
    /* 0048b137: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fO = 0; }
    /* 0048b139: jne 0x48b14f */ if (!fZ) goto L_0048b14f;
L_0048b13b:; BB(0x0048b13b);
    /* 0048b13b: mov dword ptr [0xa46dec], 0x3f800000 */ W32((u32)(0xa46decu), 0x3f800000u);
    /* 0048b145: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fO = 0; }
    /* 0048b14a: mov byte ptr [0xa46de8], al */ W8((u32)(0xa46de8u), (u8)r_eax);
L_0048b14f:; BB(0x0048b14f);
    /* 0048b14f: fld dword ptr [0xa46dec] */ FPUSH(R_F32((u32)(0xa46decu)));
    /* 0048b155: fadd dword ptr [ecx + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x3cu));
    /* 0048b158: mov edx, dword ptr [ecx + 0x38c] */ r_edx = R32((u32)(r_ecx+0x38cu));
    /* 0048b15e: mov eax, dword ptr [ecx + 0x394] */ r_eax = R32((u32)(r_ecx+0x394u));
    /* 0048b164: mov dword ptr [ecx + 0x38], edx */ W32((u32)(r_ecx+0x38u), r_edx);
    /* 0048b167: mov dword ptr [ecx + 0x40], eax */ W32((u32)(r_ecx+0x40u), r_eax);
    /* 0048b16a: fcom dword ptr [0x901384] */ fx_compare(ST(0), R_F32((u32)(0x901384u))); 
    /* 0048b170: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0048b172: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0048b173: jb 0x48b194 */ if (fC) goto L_0048b194;
L_0048b175:; BB(0x0048b175);
    /* 0048b175: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0048b177: mov dword ptr [ecx + 0x39c], 0 */ W32((u32)(r_ecx+0x39cu), 0x0u);
    /* 0048b181: mov eax, 0x41200000 */ r_eax = 0x41200000u;
    /* 0048b186: mov dword ptr [ecx + 0x3c], eax */ W32((u32)(r_ecx+0x3cu), r_eax);
    /* 0048b189: mov dword ptr [ecx + 0x398], 2 */ W32((u32)(r_ecx+0x398u), 0x2u);
    /* 0048b193: ret  */ FN_RET(0x0048b130); r_esp += 4; return;
L_0048b194:; BB(0x0048b194);
    /* 0048b194: fstp dword ptr [ecx + 0x3c] */ W_F32((u32)(r_ecx+0x3cu), ST(0)); FPOP();
    /* 0048b197: ret  */ FN_RET(0x0048b130); r_esp += 4; return;
}

void f_0048b198(void) /* sub_48B198 */
{
    FN_ENTER(0x0048b198);
    /* 0048b198: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0048b199: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0048b19a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048b19b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0048b19c: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048b19f: mov edx, ecx */ r_edx = r_ecx;
    /* 0048b1a1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0048b1a3: mov ecx, dword ptr [0xaae168] */ r_ecx = R32((u32)(0xaae168u));
    /* 0048b1a9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0048b1ab: jle 0x48b274 */ if ((fZ||fS!=fO)) goto L_0048b274;
L_0048b1b1:; BB(0x0048b1b1);
    /* 0048b1b1: mov ebp, eax */ r_ebp = r_eax;
    /* 0048b1b3: mov ebx, edx */ r_ebx = r_edx;
    /* 0048b1b5: mov esi, ecx */ r_esi = r_ecx;
L_0048b1b7:; BB(0x0048b1b7);
    /* 0048b1b7: mov edi, dword ptr [ebp*4 + 0xaad720] */ r_edi = R32((u32)(r_ebp*4+0xaad720u));
    /* 0048b1be: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0048b1bf: call 0x48e100 */ r_esp -= 4; W32(r_esp, 0x48b1c4u); f_0048e100();
    /* 0048b1c4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0048b1c5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048b1c7: je 0x48b206 */ if (fZ) goto L_0048b206;
L_0048b1c9:; BB(0x0048b1c9);
    /* 0048b1c9: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0048b1cc: mov eax, dword ptr [edi + 0x38] */ r_eax = R32((u32)(r_edi+0x38u));
    /* 0048b1cf: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0048b1d2: mov eax, dword ptr [edi + 0x3c] */ r_eax = R32((u32)(r_edi+0x3cu));
    /* 0048b1d5: mov edi, dword ptr [edi + 0x40] */ r_edi = R32((u32)(r_edi+0x40u));
    /* 0048b1d8: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0048b1dc: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 0048b1e0: lea edx, [ebx + 0x38c] */ r_edx = (u32)(r_ebx+0x38cu);
    /* 0048b1e6: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x48b1ebu); f_0082f9c4();
    /* 0048b1eb: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 0048b1f3: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0048b1f6: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x48b1fbu); f_0083173c();
    /* 0048b1fb: fcomp dword ptr [0x9013e8] */ fx_compare(ST(0), R_F32((u32)(0x9013e8u))); FPOP();
    /* 0048b201: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0048b203: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0048b204: jbe 0x48b26b */ if ((fC||fZ)) goto L_0048b26b;
L_0048b206:; BB(0x0048b206);
    /* 0048b206: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0048b209: cmp ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048b20b: jl 0x48b1b7 */ if ((fS!=fO)) goto L_0048b1b7;
L_0048b20d:; BB(0x0048b20d);
    /* 0048b20d: mov edx, ebx */ r_edx = r_ebx;
    /* 0048b20f: mov ecx, dword ptr [edx + 0x39c] */ r_ecx = R32((u32)(r_edx+0x39cu));
L_0048b215:; BB(0x0048b215);
    /* 0048b215: fld dword ptr [0xa46df0] */ FPUSH(R_F32((u32)(0xa46df0u)));
    /* 0048b21b: fadd dword ptr [edx + 0x3a0] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x3a0u));
    /* 0048b221: fld dword ptr [0x9013e4] */ FPUSH(R_F32((u32)(0x9013e4u)));
    /* 0048b227: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0048b229: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0048b22b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0048b22c: ja 0x48b238 */ if ((!fC&&!fZ)) goto L_0048b238;
L_0048b22e:; BB(0x0048b22e);
    /* 0048b22e: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0048b230: fstp dword ptr [edx + 0x3a0] */ W_F32((u32)(r_edx+0x3a0u), ST(0)); FPOP();
    /* 0048b236: jmp 0x48b240 */ goto L_0048b240;
L_0048b238:; BB(0x0048b238);
    /* 0048b238: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0048b23a: fstp dword ptr [edx + 0x3a0] */ W_F32((u32)(r_edx+0x3a0u), ST(0)); FPOP();
L_0048b240:; BB(0x0048b240);
    /* 0048b240: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048b243: mov dword ptr [edx + 0x39c], ecx */ W32((u32)(r_edx+0x39cu), r_ecx);
    /* 0048b249: cmp ecx, 0x96 */ {  u32 a = r_ecx; u32 b = 0x96u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048b24f: jl 0x48b263 */ if ((fS!=fO)) goto L_0048b263;
L_0048b251:; BB(0x0048b251);
    /* 0048b251: mov dword ptr [edx + 0x398], 3 */ W32((u32)(r_edx+0x398u), 0x3u);
    /* 0048b25b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0048b25e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0048b25f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048b260: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0048b261: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0048b262: ret  */ FN_RET(0x0048b198); r_esp += 4; return;
L_0048b263:; BB(0x0048b263);
    /* 0048b263: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0048b266: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0048b267: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048b268: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0048b269: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0048b26a: ret  */ FN_RET(0x0048b198); r_esp += 4; return;
L_0048b26b:; BB(0x0048b26b);
    /* 0048b26b: mov edx, ebx */ r_edx = r_ebx;
    /* 0048b26d: mov ecx, 0x96 */ r_ecx = 0x96u;
    /* 0048b272: jmp 0x48b215 */ goto L_0048b215;
L_0048b274:; BB(0x0048b274);
    /* 0048b274: mov ecx, dword ptr [edx + 0x39c] */ r_ecx = R32((u32)(r_edx+0x39cu));
    /* 0048b27a: jmp 0x48b215 */ goto L_0048b215;
}

void f_0048b27c(void) /* sub_48B27C */
{
    FN_ENTER(0x0048b27c);
    /* 0048b27c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0048b27d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0048b27e: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048b281: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0048b283: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 0048b288: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0048b28a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0048b28c: jle 0x48b3cf */ if ((fZ||fS!=fO)) goto L_0048b3cf;
L_0048b292:; BB(0x0048b292);
    /* 0048b292: mov dword ptr [esp + 0x20], edi */ W32((u32)(r_esp+0x20u), r_edi);
    /* 0048b296: mov dword ptr [esp + 0x1c], ebp */ W32((u32)(r_esp+0x1cu), r_ebp);
    /* 0048b29a: mov ebp, eax */ r_ebp = r_eax;
L_0048b29c:; BB(0x0048b29c);
    /* 0048b29c: mov edi, dword ptr [esi*4 + 0xaad720] */ r_edi = R32((u32)(r_esi*4+0xaad720u));
    /* 0048b2a3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0048b2a4: call 0x48e100 */ r_esp -= 4; W32(r_esp, 0x48b2a9u); f_0048e100();
    /* 0048b2a9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0048b2aa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048b2ac: je 0x48b3bc */ if (fZ) goto L_0048b3bc;
L_0048b2b2:; BB(0x0048b2b2);
    /* 0048b2b2: movsx edx, word ptr [edi + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0048b2b9: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048b2bc: jne 0x48b3bc */ if (!fZ) goto L_0048b3bc;
L_0048b2c2:; BB(0x0048b2c2);
    /* 0048b2c2: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0048b2c5: mov edx, dword ptr [ebx + 0x38] */ r_edx = R32((u32)(r_ebx+0x38u));
    /* 0048b2c8: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0048b2cb: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 0048b2ce: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0048b2d2: mov edx, dword ptr [ebx + 0x40] */ r_edx = R32((u32)(r_ebx+0x40u));
    /* 0048b2d5: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0048b2d9: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 0048b2dc: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x48b2e1u); f_0082f9c4();
    /* 0048b2e1: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 0048b2e9: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0048b2ec: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x48b2f1u); f_0083173c();
    /* 0048b2f1: fcomp dword ptr [0x9013dc] */ fx_compare(ST(0), R_F32((u32)(0x9013dcu))); FPOP();
    /* 0048b2f7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0048b2f9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0048b2fa: ja 0x48b3bc */ if ((!fC&&!fZ)) goto L_0048b3bc;
L_0048b300:; BB(0x0048b300);
    /* 0048b300: mov edx, dword ptr [ebx + 0x3ac] */ r_edx = R32((u32)(r_ebx+0x3acu));
    /* 0048b306: cmp edx, dword ptr [ebx + 0x3a8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebx+0x3a8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048b30c: mov eax, 0 */ r_eax = 0x0u;
    /* 0048b311: jge 0x48b347 */ if ((fS==fO)) goto L_0048b347;
L_0048b313:; BB(0x0048b313);
    /* 0048b313: mov edx, dword ptr [0xa46f9c] */ r_edx = R32((u32)(0xa46f9cu));
    /* 0048b319: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0048b31b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048b31d: je 0x48b347 */ if (fZ) goto L_0048b347;
L_0048b31f:; BB(0x0048b31f);
    /* 0048b31f: mov edx, dword ptr [0xa46f94] */ r_edx = R32((u32)(0xa46f94u));
    /* 0048b325: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048b327: je 0x48b347 */ if (fZ) goto L_0048b347;
L_0048b329:; BB(0x0048b329);
    /* 0048b329: mov edx, dword ptr [edx + 0x444] */ r_edx = R32((u32)(r_edx+0x444u));
    /* 0048b32f: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048b332: jl 0x48b347 */ if ((fS!=fO)) goto L_0048b347;
L_0048b334:; BB(0x0048b334);
    /* 0048b334: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048b337: jg 0x48b33d */ if ((!fZ&&fS==fO)) goto L_0048b33d;
L_0048b339:; BB(0x0048b339);
    /* 0048b339: mov eax, edx */ r_eax = r_edx;
    /* 0048b33b: jmp 0x48b347 */ goto L_0048b347;
L_0048b33d:; BB(0x0048b33d);
    /* 0048b33d: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048b340: jne 0x48b347 */ if (!fZ) goto L_0048b347;
L_0048b342:; BB(0x0048b342);
    /* 0048b342: mov eax, 0x12 */ r_eax = 0x12u;
L_0048b347:; BB(0x0048b347);
    /* 0048b347: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048b34a: je 0x48b3b0 */ if (fZ) goto L_0048b3b0;
L_0048b34c:; BB(0x0048b34c);
    /* 0048b34c: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048b34f: jne 0x48b35d */ if (!fZ) goto L_0048b35d;
L_0048b351:; BB(0x0048b351);
    /* 0048b351: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 0048b353: mov ecx, edi */ r_ecx = r_edi;
    /* 0048b355: call dword ptr [edx + 0xcc] */ { u32 t = R32((u32)(r_edx+0xccu)); r_esp -= 4; W32(r_esp, 0x48b35bu); call_ind(t); }
    /* 0048b35b: jmp 0x48b3bc */ goto L_0048b3bc;
L_0048b35d:; BB(0x0048b35d);
    /* 0048b35d: cmp eax, 0x12 */ {  u32 a = r_eax; u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048b360: jne 0x48b36e */ if (!fZ) goto L_0048b36e;
L_0048b362:; BB(0x0048b362);
    /* 0048b362: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 0048b364: mov ecx, edi */ r_ecx = r_edi;
    /* 0048b366: call dword ptr [edx + 0xc4] */ { u32 t = R32((u32)(r_edx+0xc4u)); r_esp -= 4; W32(r_esp, 0x48b36cu); call_ind(t); }
    /* 0048b36c: jmp 0x48b3bc */ goto L_0048b3bc;
L_0048b36e:; BB(0x0048b36e);
    /* 0048b36e: push 0x3dcccccd */ { u32 v = 0x3dcccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 0048b373: push dword ptr [ebx + 0x3a4] */ { u32 v = R32((u32)(r_ebx+0x3a4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0048b379: call 0x48e9d4 */ r_esp -= 4; W32(r_esp, 0x48b37eu); f_0048e9d4();
    /* 0048b37e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048b381: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0048b385: fild dword ptr [esp + 0x14] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x14u)));
    /* 0048b389: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0048b38b: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 0048b38f: mov dword ptr [esp + 0xc], 1 */ W32((u32)(r_esp+0xcu), 0x1u);
    /* 0048b397: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0048b39c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048b39d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048b39e: mov ecx, edi */ r_ecx = r_edi;
    /* 0048b3a0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048b3a2: push dword ptr [esp + 0x1c] */ { u32 v = R32((u32)(r_esp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0048b3a6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0048b3a8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0048b3a9: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x48b3acu); call_ind(t); }
    /* 0048b3ac: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0048b3ae: jmp 0x48b3bc */ goto L_0048b3bc;
L_0048b3b0:; BB(0x0048b3b0);
    /* 0048b3b0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048b3b2: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 0048b3b4: mov ecx, edi */ r_ecx = r_edi;
    /* 0048b3b6: call dword ptr [edx + 0xc8] */ { u32 t = R32((u32)(r_edx+0xc8u)); r_esp -= 4; W32(r_esp, 0x48b3bcu); call_ind(t); }
L_0048b3bc:; BB(0x0048b3bc);
    /* 0048b3bc: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0048b3bf: cmp esi, ebp */ {  u32 a = r_esi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048b3c1: jl 0x48b29c */ if ((fS!=fO)) goto L_0048b29c;
L_0048b3c7:; BB(0x0048b3c7);
    /* 0048b3c7: mov edi, dword ptr [esp + 0x20] */ r_edi = R32((u32)(r_esp+0x20u));
    /* 0048b3cb: mov ebp, dword ptr [esp + 0x1c] */ r_ebp = R32((u32)(r_esp+0x1cu));
L_0048b3cf:; BB(0x0048b3cf);
    /* 0048b3cf: lea esi, [ebx + 0x38] */ r_esi = (u32)(r_ebx+0x38u);
    /* 0048b3d2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0048b3d4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048b3d5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048b3d6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0048b3d7: push 0x3d2 */ { u32 v = 0x3d2u; r_esp -= 4; W32(r_esp, v); }
    /* 0048b3dc: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x48b3e1u); f_00814298();
    /* 0048b3e1: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 0048b3e3: push 0xfb */ { u32 v = 0xfbu; r_esp -= 4; W32(r_esp, v); }
    /* 0048b3e8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0048b3e9: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x48b3eeu); f_0050b7a4();
    /* 0048b3ee: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 0048b3f0: push 0xfc */ { u32 v = 0xfcu; r_esp -= 4; W32(r_esp, v); }
    /* 0048b3f5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0048b3f6: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x48b3fbu); f_0050b7a4();
    /* 0048b3fb: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0048b3fd: push 0xc0 */ { u32 v = 0xc0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048b402: push 0x42c80000 */ { u32 v = 0x42c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0048b407: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0048b408: call 0x48e41c */ r_esp -= 4; W32(r_esp, 0x48b40du); f_0048e41c();
    /* 0048b40d: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 0048b411: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0048b416: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 0048b41a: add esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0048b41d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0048b41e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0048b41f: ret  */ FN_RET(0x0048b27c); r_esp += 4; return;
}

void f_0048b420(void) /* sub_48B420 */
{
    FN_ENTER(0x0048b420);
    /* 0048b420: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0048b421: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0048b423: lea eax, [ebx + 0x38] */ r_eax = (u32)(r_ebx+0x38u);
    /* 0048b426: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 0048b428: push 0xfc */ { u32 v = 0xfcu; r_esp -= 4; W32(r_esp, v); }
    /* 0048b42d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048b42e: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x48b433u); f_0050b7a4();
    /* 0048b433: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 0048b437: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0048b43c: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 0048b440: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0048b443: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0048b444: ret  */ FN_RET(0x0048b420); r_esp += 4; return;
}

void f_0048b448(void) /* sub_48B448 */
{
    FN_ENTER(0x0048b448);
    /* 0048b448: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 0048b44b: and eax, 0xfffffdff */ {  u32 a = r_eax; u32 b = 0xfffffdffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0048b450: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 0048b453: mov dword ptr [ecx + 0x3b0], 0x3f800000 */ W32((u32)(r_ecx+0x3b0u), 0x3f800000u);
    /* 0048b45d: ret  */ FN_RET(0x0048b448); r_esp += 4; return;
}

void f_0048b460(void) /* sub_48B460 */
{
    FN_ENTER(0x0048b460);
    /* 0048b460: mov eax, dword ptr [ecx + 0x398] */ r_eax = R32((u32)(r_ecx+0x398u));
    /* 0048b466: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0048b469: je 0x48b476 */ if (fZ) goto L_0048b476;
L_0048b46b:; BB(0x0048b46b);
    /* 0048b46b: mov dword ptr [ecx + 0x398], 4 */ W32((u32)(r_ecx+0x398u), 0x4u);
    /* 0048b475: ret  */ FN_RET(0x0048b460); r_esp += 4; return;
L_0048b476:; BB(0x0048b476);
    /* 0048b476: ret  */ FN_RET(0x0048b460); r_esp += 4; return;
}

void f_0048b478(void) /* sub_48B478 */
{
    FN_ENTER(0x0048b478);
    /* 0048b478: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048b479: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0048b47a: sub esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048b47d: mov ecx, dword ptr [0xa46f9c] */ r_ecx = R32((u32)(0xa46f9cu));
    /* 0048b483: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048b485: je 0x48b492 */ if (fZ) goto L_0048b492;
L_0048b487:; BB(0x0048b487);
    /* 0048b487: mov eax, dword ptr [ecx + 0x380] */ r_eax = R32((u32)(r_ecx+0x380u));
    /* 0048b48d: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048b490: je 0x48b498 */ if (fZ) goto L_0048b498;
L_0048b492:; BB(0x0048b492);
    /* 0048b492: add esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0048b495: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0048b496: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048b497: ret  */ FN_RET(0x0048b478); r_esp += 4; return;
L_0048b498:; BB(0x0048b498);
    /* 0048b498: movzx ebp, word ptr [ecx + 0x390] */ r_ebp = (u32)R16((u32)(r_ecx+0x390u));
    /* 0048b49f: mov word ptr [esp], bp */ W16((u32)(r_esp), (u16)r_ebp);
    /* 0048b4a3: mov ebp, dword ptr [esp + 0x68] */ r_ebp = R32((u32)(r_esp+0x68u));
    /* 0048b4a7: movzx eax, word ptr [ecx + 0x392] */ r_eax = (u32)R16((u32)(r_ecx+0x392u));
    /* 0048b4ae: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 0048b4b3: movzx eax, word ptr [ecx + 0x394] */ r_eax = (u32)R16((u32)(r_ecx+0x394u));
    /* 0048b4ba: mov word ptr [esp + 4], ax */ W16((u32)(r_esp+0x4u), (u16)r_eax);
    /* 0048b4bf: movzx eax, word ptr [ecx + 0x396] */ r_eax = (u32)R16((u32)(r_ecx+0x396u));
    /* 0048b4c6: mov word ptr [esp + 6], ax */ W16((u32)(r_esp+0x6u), (u16)r_eax);
    /* 0048b4cb: movzx eax, word ptr [ecx + 0x398] */ r_eax = (u32)R16((u32)(r_ecx+0x398u));
    /* 0048b4d2: mov word ptr [esp + 8], ax */ W16((u32)(r_esp+0x8u), (u16)r_eax);
    /* 0048b4d7: movzx eax, word ptr [ecx + 0x39a] */ r_eax = (u32)R16((u32)(r_ecx+0x39au));
    /* 0048b4de: mov word ptr [esp + 0xa], ax */ W16((u32)(r_esp+0xau), (u16)r_eax);
    /* 0048b4e3: movzx eax, word ptr [ecx + 0x39c] */ r_eax = (u32)R16((u32)(r_ecx+0x39cu));
    /* 0048b4ea: mov word ptr [esp + 0xc], ax */ W16((u32)(r_esp+0xcu), (u16)r_eax);
    /* 0048b4ef: movzx eax, word ptr [ecx + 0x39e] */ r_eax = (u32)R16((u32)(r_ecx+0x39eu));
    /* 0048b4f6: mov word ptr [esp + 0xe], ax */ W16((u32)(r_esp+0xeu), (u16)r_eax);
    /* 0048b4fb: mov eax, dword ptr [ecx + 0x3a0] */ r_eax = R32((u32)(r_ecx+0x3a0u));
    /* 0048b501: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0048b505: mov eax, dword ptr [ecx + 0x3a4] */ r_eax = R32((u32)(r_ecx+0x3a4u));
    /* 0048b50b: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0048b50f: mov eax, dword ptr [ecx + 0x3a8] */ r_eax = R32((u32)(r_ecx+0x3a8u));
    /* 0048b515: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0048b519: mov eax, dword ptr [ecx + 0x3ac] */ r_eax = R32((u32)(r_ecx+0x3acu));
    /* 0048b51f: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 0048b523: mov eax, dword ptr [ecx + 0x3b0] */ r_eax = R32((u32)(r_ecx+0x3b0u));
    /* 0048b529: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0048b52d: mov eax, dword ptr [ecx + 0x3b4] */ r_eax = R32((u32)(r_ecx+0x3b4u));
    /* 0048b533: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 0048b537: mov eax, dword ptr [ecx + 0x3b8] */ r_eax = R32((u32)(r_ecx+0x3b8u));
    /* 0048b53d: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 0048b541: mov eax, dword ptr [ecx + 0x3bc] */ r_eax = R32((u32)(r_ecx+0x3bcu));
    /* 0048b547: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 0048b54b: mov eax, dword ptr [ecx + 0x3c0] */ r_eax = R32((u32)(r_ecx+0x3c0u));
    /* 0048b551: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 0048b555: mov eax, dword ptr [ecx + 0x3c4] */ r_eax = R32((u32)(r_ecx+0x3c4u));
    /* 0048b55b: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 0048b55f: mov eax, dword ptr [ecx + 0x3c8] */ r_eax = R32((u32)(r_ecx+0x3c8u));
    /* 0048b565: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 0048b569: movzx eax, word ptr [ecx + 0x3cc] */ r_eax = (u32)R16((u32)(r_ecx+0x3ccu));
    /* 0048b570: mov word ptr [esp + 0x3c], ax */ W16((u32)(r_esp+0x3cu), (u16)r_eax);
    /* 0048b575: movzx eax, word ptr [ecx + 0x3ce] */ r_eax = (u32)R16((u32)(r_ecx+0x3ceu));
    /* 0048b57c: mov word ptr [esp + 0x3e], ax */ W16((u32)(r_esp+0x3eu), (u16)r_eax);
    /* 0048b581: mov eax, dword ptr [esp + 0x64] */ r_eax = R32((u32)(r_esp+0x64u));
    /* 0048b585: mov ebx, dword ptr [eax] */ r_ebx = R32((u32)(r_eax));
    /* 0048b587: mov eax, dword ptr [esp + 0x64] */ r_eax = R32((u32)(r_esp+0x64u));
    /* 0048b58b: mov dword ptr [esp + 0x40], ebx */ W32((u32)(r_esp+0x40u), r_ebx);
    /* 0048b58f: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0048b592: mov eax, dword ptr [esp + 0x64] */ r_eax = R32((u32)(r_esp+0x64u));
    /* 0048b596: mov dword ptr [esp + 0x44], edx */ W32((u32)(r_esp+0x44u), r_edx);
    /* 0048b59a: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 0048b59d: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 0048b5a1: mov ebp, dword ptr [ebp] */ r_ebp = R32((u32)(r_ebp));
    /* 0048b5a4: mov dword ptr [esp + 0x4c], ebp */ W32((u32)(r_esp+0x4cu), r_ebp);
    /* 0048b5a8: mov ebp, dword ptr [esp + 0x68] */ r_ebp = R32((u32)(r_esp+0x68u));
    /* 0048b5ac: mov ebp, dword ptr [ebp + 4] */ r_ebp = R32((u32)(r_ebp+0x4u));
    /* 0048b5af: mov dword ptr [esp + 0x50], ebp */ W32((u32)(r_esp+0x50u), r_ebp);
    /* 0048b5b3: mov ebp, dword ptr [esp + 0x68] */ r_ebp = R32((u32)(r_esp+0x68u));
    /* 0048b5b7: mov ebp, dword ptr [ebp + 8] */ r_ebp = R32((u32)(r_ebp+0x8u));
    /* 0048b5ba: mov dword ptr [esp + 0x54], ebp */ W32((u32)(r_esp+0x54u), r_ebp);
    /* 0048b5be: mov dword ptr [esp + 0x10], ebx */ W32((u32)(r_esp+0x10u), r_ebx);
    /* 0048b5c2: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 0048b5c6: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0048b5ca: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0048b5cd: mov ebp, 1 */ r_ebp = 0x1u;
    /* 0048b5d2: mov word ptr [esp + 8], bp */ W16((u32)(r_esp+0x8u), (u16)r_ebp);
    /* 0048b5d7: lea eax, [esp + 6] */ r_eax = (u32)(r_esp+0x6u);
    /* 0048b5db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048b5dc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048b5dd: call 0x48d67c */ r_esp -= 4; W32(r_esp, 0x48b5e2u); f_0048d67c();
    /* 0048b5e2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048b5e4: jne 0x48b5ec */ if (!fZ) goto L_0048b5ec;
L_0048b5e6:; BB(0x0048b5e6);
    /* 0048b5e6: add esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0048b5e9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0048b5ea: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048b5eb: ret  */ FN_RET(0x0048b478); r_esp += 4; return;
L_0048b5ec:; BB(0x0048b5ec);
    /* 0048b5ec: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0048b5ef: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048b5f0: call 0x48b5fc */ r_esp -= 4; W32(r_esp, 0x48b5f5u); f_0048b5fc();
    /* 0048b5f5: add esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0048b5f8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0048b5f9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048b5fa: ret  */ FN_RET(0x0048b478); r_esp += 4; return;
}

void f_0048b5fc(void) /* sub_48B5FC */
{
    FN_ENTER(0x0048b5fc);
    /* 0048b5fc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048b5fd: mov ebp, esp */ r_ebp = r_esp;
    /* 0048b5ff: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0048b601: push 0x8cfe62 */ { u32 v = 0x8cfe62u; r_esp -= 4; W32(r_esp, v); }
    /* 0048b606: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0048b60c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048b60d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0048b614: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048b617: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0048b61a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0048b61d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0048b620: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0048b623: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0048b625: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0048b628: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0048b62b: push 0x3bc */ { u32 v = 0x3bcu; r_esp -= 4; W32(r_esp, v); }
    /* 0048b630: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x48b635u); f_005caba4();
    /* 0048b635: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0048b636: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0048b639: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048b63b: je 0x48b6a8 */ if (fZ) goto L_0048b6a8;
L_0048b63d:; BB(0x0048b63d);
    /* 0048b63d: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0048b644: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0048b64b: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0048b64d: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x48b652u); f_005caba4();
    /* 0048b652: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0048b653: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0048b656: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048b658: je 0x48b6a4 */ if (fZ) goto L_0048b6a4;
L_0048b65a:; BB(0x0048b65a);
    /* 0048b65a: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 0048b661: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0048b668: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 0048b66e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0048b671: call 0x787a4c */ r_esp -= 4; W32(r_esp, 0x48b676u); f_00787a4c();
    /* 0048b676: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0048b679: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_0048b680:; BB(0x0048b680);
    /* 0048b680: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0048b683: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0048b686: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048b687: call 0x48b6ac */ r_esp -= 4; W32(r_esp, 0x48b68cu); f_0048b6ac();
    /* 0048b68c: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0048b68f: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0048b696:; BB(0x0048b696);
    /* 0048b696: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048b699: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0048b6a0: mov esp, ebp */ r_esp = r_ebp;
    /* 0048b6a2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048b6a3: ret  */ FN_RET(0x0048b5fc); r_esp += 4; return;
L_0048b6a4:; BB(0x0048b6a4);
    /* 0048b6a4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0048b6a6: jmp 0x48b680 */ goto L_0048b680;
L_0048b6a8:; BB(0x0048b6a8);
    /* 0048b6a8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0048b6aa: jmp 0x48b696 */ goto L_0048b696;
}

void f_0048b6ac(void) /* sub_48B6AC */
{
    FN_ENTER(0x0048b6ac);
    /* 0048b6ac: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048b6ad: mov ebp, esp */ r_ebp = r_esp;
    /* 0048b6af: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0048b6b1: push 0x8cfe7c */ { u32 v = 0x8cfe7cu; r_esp -= 4; W32(r_esp, v); }
    /* 0048b6b6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0048b6bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048b6bd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0048b6c4: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048b6c7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0048b6ca: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0048b6cd: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0048b6d0: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0048b6d3: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0048b6d6: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0048b6d9: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 0048b6dc: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0048b6df: call 0x7865e8 */ r_esp -= 4; W32(r_esp, 0x48b6e4u); f_007865e8();
    /* 0048b6e4: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0048b6eb: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0048b6ee: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0048b6f1: mov dword ptr [ecx], 0xaf8e20 */ W32((u32)(r_ecx), 0xaf8e20u);
    /* 0048b6f7: mov edx, dword ptr [0x9a6a40] */ r_edx = R32((u32)(0x9a6a40u));
    /* 0048b6fd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048b6fe: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 0048b701: mov ebx, dword ptr [eax + 0x40] */ r_ebx = R32((u32)(r_eax+0x40u));
    /* 0048b704: mov dword ptr [ecx + 0x38], ebx */ W32((u32)(r_ecx+0x38u), r_ebx);
    /* 0048b707: mov esi, dword ptr [eax + 0x44] */ r_esi = R32((u32)(r_eax+0x44u));
    /* 0048b70a: mov dword ptr [ecx + 0x3c], esi */ W32((u32)(r_ecx+0x3cu), r_esi);
    /* 0048b70d: mov edi, dword ptr [eax + 0x48] */ r_edi = R32((u32)(r_eax+0x48u));
    /* 0048b710: mov dword ptr [ecx + 0x40], edi */ W32((u32)(r_ecx+0x40u), r_edi);
    /* 0048b713: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 0048b716: mov dword ptr [ecx + 0x38c], edx */ W32((u32)(r_ecx+0x38cu), r_edx);
    /* 0048b71c: mov edx, dword ptr [eax + 0x50] */ r_edx = R32((u32)(r_eax+0x50u));
    /* 0048b71f: mov dword ptr [ecx + 0x390], edx */ W32((u32)(r_ecx+0x390u), r_edx);
    /* 0048b725: mov edx, dword ptr [eax + 0x54] */ r_edx = R32((u32)(r_eax+0x54u));
    /* 0048b728: mov dword ptr [ecx + 0x394], edx */ W32((u32)(r_ecx+0x394u), r_edx);
    /* 0048b72e: mov edx, dword ptr [ecx + 0x2e8] */ r_edx = R32((u32)(r_ecx+0x2e8u));
    /* 0048b734: or edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0048b737: mov dword ptr [ecx + 0x2e8], edx */ W32((u32)(r_ecx+0x2e8u), r_edx);
    /* 0048b73d: call dword ptr [0xaf8f6c] */ { u32 t = R32((u32)(0xaf8f6cu)); r_esp -= 4; W32(r_esp, 0x48b743u); call_ind(t); }
    /* 0048b743: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0048b746: movsx ebx, word ptr [eax + 0x2c] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_eax+0x2cu));
    /* 0048b74a: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0048b74c: jl 0x48b78d */ if ((fS!=fO)) goto L_0048b78d;
L_0048b74e:; BB(0x0048b74e);
    /* 0048b74e: cmp ebx, 0xb4f */ {  u32 a = r_ebx; u32 b = 0xb4fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048b754: jg 0x48b78d */ if ((!fZ&&fS==fO)) goto L_0048b78d;
L_0048b756:; BB(0x0048b756);
    /* 0048b756: mov ecx, dword ptr [0xab02b8] */ r_ecx = R32((u32)(0xab02b8u));
    /* 0048b75c: lea esi, [ebx + ebx] */ r_esi = (u32)(r_ebx+r_ebx);
    /* 0048b75f: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0048b761: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 0048b764: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0048b766: mov edi, dword ptr [edx + ecx + 8] */ r_edi = R32((u32)(r_edx+r_ecx+0x8u));
    /* 0048b76a: movzx esi, word ptr [edx + ecx + 4] */ r_esi = (u32)R16((u32)(r_edx+r_ecx+0x4u));
    /* 0048b76f: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0048b771: jl 0x48b78d */ if ((fS!=fO)) goto L_0048b78d;
L_0048b773:; BB(0x0048b773);
    /* 0048b773: cmp ebx, 0xb4f */ {  u32 a = r_ebx; u32 b = 0xb4fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048b779: jg 0x48b78d */ if ((!fZ&&fS==fO)) goto L_0048b78d;
L_0048b77b:; BB(0x0048b77b);
    /* 0048b77b: mov dword ptr [edx + ecx], 0 */ W32((u32)(r_edx+r_ecx), 0x0u);
    /* 0048b782: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0048b785: mov dword ptr [edx + ecx + 4], esi */ W32((u32)(r_edx+r_ecx+0x4u), r_esi);
    /* 0048b789: mov dword ptr [edx + ecx + 8], edi */ W32((u32)(r_edx+r_ecx+0x8u), r_edi);
L_0048b78d:; BB(0x0048b78d);
    /* 0048b78d: mov edx, dword ptr [0xa46fa0] */ r_edx = R32((u32)(0xa46fa0u));
    /* 0048b793: mov esi, dword ptr [eax + 0x38] */ r_esi = R32((u32)(r_eax+0x38u));
    /* 0048b796: mov edi, dword ptr [eax + 0x3c] */ r_edi = R32((u32)(r_eax+0x3cu));
    /* 0048b799: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 0048b79c: mov dword ptr [eax + 0x37c], edx */ W32((u32)(r_eax+0x37cu), r_edx);
    /* 0048b7a2: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0048b7a5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0048b7a7: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0048b7a9: mov dword ptr [eax + 0x24], ebx */ W32((u32)(r_eax+0x24u), r_ebx);
    /* 0048b7ac: mov dword ptr [eax + 0x34], ebx */ W32((u32)(r_eax+0x34u), r_ebx);
    /* 0048b7af: push 0x9a6a44 */ { u32 v = 0x9a6a44u; r_esp -= 4; W32(r_esp, v); }
    /* 0048b7b4: mov dword ptr [eax + 0x74], esi */ W32((u32)(r_eax+0x74u), r_esi);
    /* 0048b7b7: mov dword ptr [eax + 0x78], edi */ W32((u32)(r_eax+0x78u), r_edi);
    /* 0048b7ba: mov dword ptr [eax + 0x7c], ecx */ W32((u32)(r_eax+0x7cu), r_ecx);
    /* 0048b7bd: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0048b7c0: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0048b7c3: mov dword ptr [edx + 0x50], eax */ W32((u32)(r_edx+0x50u), r_eax);
    /* 0048b7c6: mov eax, dword ptr [edx + 0x78] */ r_eax = R32((u32)(r_edx+0x78u));
    /* 0048b7c9: mov dword ptr [edx + 0x54], eax */ W32((u32)(r_edx+0x54u), r_eax);
    /* 0048b7cc: mov eax, dword ptr [edx + 0x7c] */ r_eax = R32((u32)(r_edx+0x7cu));
    /* 0048b7cf: mov dword ptr [edx + 0x58], eax */ W32((u32)(r_edx+0x58u), r_eax);
    /* 0048b7d2: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0048b7d5: mov eax, dword ptr [edx + 0x50] */ r_eax = R32((u32)(r_edx+0x50u));
    /* 0048b7d8: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 0048b7db: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 0048b7de: mov dword ptr [edx + 0x48], eax */ W32((u32)(r_edx+0x48u), r_eax);
    /* 0048b7e1: mov eax, dword ptr [edx + 0x58] */ r_eax = R32((u32)(r_edx+0x58u));
    /* 0048b7e4: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
    /* 0048b7e7: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x48b7ecu); f_007b9a88();
    /* 0048b7ec: mov ebx, dword ptr [ebp - 0x3c] */ r_ebx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0048b7ef: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 0048b7f2: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 0048b7f5: mov ecx, dword ptr [ebx + 0x40] */ r_ecx = R32((u32)(r_ebx+0x40u));
    /* 0048b7f8: mov dword ptr [ebx + 0x300], eax */ W32((u32)(r_ebx+0x300u), r_eax);
    /* 0048b7fe: mov dword ptr [ebx + 0x304], edx */ W32((u32)(r_ebx+0x304u), r_edx);
    /* 0048b804: mov dword ptr [ebx + 0x314], 0 */ W32((u32)(r_ebx+0x314u), 0x0u);
    /* 0048b80e: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 0048b810: mov dword ptr [ebx + 0x308], ecx */ W32((u32)(r_ebx+0x308u), r_ecx);
    /* 0048b816: mov dword ptr [ebx + 0x310], 0 */ W32((u32)(r_ebx+0x310u), 0x0u);
    /* 0048b820: mov dword ptr [ebx + 0x30c], 0 */ W32((u32)(r_ebx+0x30cu), 0x0u);
    /* 0048b82a: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x48b82fu); f_0077a684();
    /* 0048b82f: mov esi, eax */ r_esi = r_eax;
    /* 0048b831: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 0048b833: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x48b838u); f_0077a698();
    /* 0048b838: mov ebx, eax */ r_ebx = r_eax;
    /* 0048b83a: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 0048b83c: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x48b841u); f_0077a6b4();
    /* 0048b841: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048b844: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0048b847: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048b848: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0048b849: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0048b84a: call 0x7868f8 */ r_esp -= 4; W32(r_esp, 0x48b84fu); f_007868f8();
    /* 0048b84f: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0048b852: movzx eax, word ptr [ecx + 0x334] */ r_eax = (u32)R16((u32)(r_ecx+0x334u));
    /* 0048b859: mov word ptr [ecx + 0x346], ax */ W16((u32)(r_ecx+0x346u), (u16)r_eax);
    /* 0048b860: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x48b865u); f_007b4f54();
    /* 0048b865: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0048b868: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048b86a: call 0x787550 */ r_esp -= 4; W32(r_esp, 0x48b86fu); f_00787550();
    /* 0048b86f: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 0048b871: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x48b876u); f_0077a6cc();
    /* 0048b876: mov ebx, eax */ r_ebx = r_eax;
    /* 0048b878: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048b87b: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0048b87e: fld dword ptr [0x9013b4] */ FPUSH(R_F32((u32)(0x9013b4u)));
    /* 0048b884: fld dword ptr [ebx + 4] */ FPUSH(R_F32((u32)(r_ebx+0x4u)));
    /* 0048b887: fnstcw word ptr [ebp - 0x38] */ W16((u32)(r_ebp+0xffffffc8u), fcw);
    /* 0048b88a: movzx eax, word ptr [ebp - 0x38] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc8u));
    /* 0048b88e: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0048b893: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0048b896: fldcw word ptr [ebp - 0x30] */ fcw = R16((u32)(r_ebp+0xffffffd0u));
    /* 0048b899: fistp dword ptr [ebp - 0x28] */ W32((u32)(r_ebp+0xffffffd8u), (u32)fx_int32(ST(0))); FPOP();
    /* 0048b89c: fldcw word ptr [ebp - 0x38] */ fcw = R16((u32)(r_ebp+0xffffffc8u));
    /* 0048b89f: fild dword ptr [ebp - 0x28] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd8u)));
    /* 0048b8a2: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 0048b8a4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0048b8a6: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0048b8a8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0048b8a9: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0048b8ac: ja 0x48b8ba */ if ((!fC&&!fZ)) goto L_0048b8ba;
L_0048b8ae:; BB(0x0048b8ae);
    /* 0048b8ae: mov dword ptr [ecx + 0x3a4], 0x14 */ W32((u32)(r_ecx+0x3a4u), 0x14u);
    /* 0048b8b8: jmp 0x48b8c0 */ goto L_0048b8c0;
L_0048b8ba:; BB(0x0048b8ba);
    /* 0048b8ba: mov dword ptr [ecx + 0x3a4], edx */ W32((u32)(r_ecx+0x3a4u), r_edx);
L_0048b8c0:; BB(0x0048b8c0);
    /* 0048b8c0: fld dword ptr [ebx + 8] */ FPUSH(R_F32((u32)(r_ebx+0x8u)));
    /* 0048b8c3: fnstcw word ptr [ebp - 0x38] */ W16((u32)(r_ebp+0xffffffc8u), fcw);
    /* 0048b8c6: movzx eax, word ptr [ebp - 0x38] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc8u));
    /* 0048b8ca: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0048b8cf: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0048b8d2: fldcw word ptr [ebp - 0x30] */ fcw = R16((u32)(r_ebp+0xffffffd0u));
    /* 0048b8d5: fistp dword ptr [ebp - 0x28] */ W32((u32)(r_ebp+0xffffffd8u), (u32)fx_int32(ST(0))); FPOP();
    /* 0048b8d8: fldcw word ptr [ebp - 0x38] */ fcw = R16((u32)(r_ebp+0xffffffc8u));
    /* 0048b8db: fild dword ptr [ebp - 0x28] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd8u)));
    /* 0048b8de: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0048b8e0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0048b8e2: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0048b8e5: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0048b8e6: jb 0x48b8ed */ if (fC) goto L_0048b8ed;
L_0048b8e8:; BB(0x0048b8e8);
    /* 0048b8e8: cmp edx, 0x64 */ {  u32 a = r_edx; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048b8eb: jle 0x48b8f9 */ if ((fZ||fS!=fO)) goto L_0048b8f9;
L_0048b8ed:; BB(0x0048b8ed);
    /* 0048b8ed: mov dword ptr [ecx + 0x3a8], 0 */ W32((u32)(r_ecx+0x3a8u), 0x0u);
    /* 0048b8f7: jmp 0x48b8ff */ goto L_0048b8ff;
L_0048b8f9:; BB(0x0048b8f9);
    /* 0048b8f9: mov dword ptr [ecx + 0x3a8], edx */ W32((u32)(r_ecx+0x3a8u), r_edx);
L_0048b8ff:; BB(0x0048b8ff);
    /* 0048b8ff: fld dword ptr [ecx + 0x38] */ FPUSH(R_F32((u32)(r_ecx+0x38u)));
    /* 0048b902: fadd dword ptr [ecx + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x40u));
    /* 0048b905: fmul dword ptr [0x9013b0] */ ST(0) = ST(0) * R_F32((u32)(0x9013b0u));
    /* 0048b90b: movzx edi, word ptr [ecx + 0x1c] */ r_edi = (u32)R16((u32)(r_ecx+0x1cu));
    /* 0048b90f: fnstcw word ptr [ebp - 0x38] */ W16((u32)(r_ebp+0xffffffc8u), fcw);
    /* 0048b912: movzx eax, word ptr [ebp - 0x38] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc8u));
    /* 0048b916: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0048b91b: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0048b91e: fldcw word ptr [ebp - 0x30] */ fcw = R16((u32)(r_ebp+0xffffffd0u));
    /* 0048b921: fistp dword ptr [ebp - 0x28] */ W32((u32)(r_ebp+0xffffffd8u), (u32)fx_int32(ST(0))); FPOP();
    /* 0048b924: fldcw word ptr [ebp - 0x38] */ fcw = R16((u32)(r_ebp+0xffffffc8u));
    /* 0048b927: add edi, dword ptr [ebp - 0x28] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebp+0xffffffd8u)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0048b92a: mov dword ptr [ecx + 0x3a0], 0x3f800000 */ W32((u32)(r_ecx+0x3a0u), 0x3f800000u);
    /* 0048b934: movzx ebx, di */ r_ebx = (u32)(u16)r_edi;
    /* 0048b937: mov dword ptr [ecx + 0x3b0], esi */ W32((u32)(r_ecx+0x3b0u), r_esi);
    /* 0048b93d: mov eax, 0x51eb851f */ r_eax = 0x51eb851fu;
    /* 0048b942: imul ebx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0048b944: mov eax, ebx */ r_eax = r_ebx;
    /* 0048b946: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0048b949: sar edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0048b94c: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0048b94e: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 0048b951: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0048b953: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0048b955: lea eax, [edx + eax*8] */ r_eax = (u32)(r_edx+r_eax*8);
    /* 0048b958: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0048b95b: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0048b95d: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0048b95f: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0048b961: mov eax, dword ptr [ecx + 0x38c] */ r_eax = R32((u32)(r_ecx+0x38cu));
    /* 0048b967: mov dword ptr [ecx + 0x3ac], ebx */ W32((u32)(r_ecx+0x3acu), r_ebx);
    /* 0048b96d: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0048b96f: mov dword ptr [ecx + 0x39c], esi */ W32((u32)(r_ecx+0x39cu), r_esi);
    /* 0048b975: mov dword ptr [ecx + 0x398], esi */ W32((u32)(r_ecx+0x398u), r_esi);
    /* 0048b97b: mov dword ptr [ecx + 0x380], eax */ W32((u32)(r_ecx+0x380u), r_eax);
    /* 0048b981: mov eax, dword ptr [ecx + 0x390] */ r_eax = R32((u32)(r_ecx+0x390u));
    /* 0048b987: mov dword ptr [ecx + 0x384], eax */ W32((u32)(r_ecx+0x384u), r_eax);
    /* 0048b98d: mov eax, dword ptr [ecx + 0x394] */ r_eax = R32((u32)(r_ecx+0x394u));
    /* 0048b993: mov dword ptr [ecx + 0x388], eax */ W32((u32)(r_ecx+0x388u), r_eax);
    /* 0048b999: lea ecx, [edx + 0x380] */ r_ecx = (u32)(r_edx+0x380u);
    /* 0048b99f: add edx, 0x38 */ {  u32 a = r_edx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0048b9a2: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x48b9a7u); f_0082f9c4();
    /* 0048b9a7: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0048b9aa: mov dword ptr [ecx + 0x384], 0 */ W32((u32)(r_ecx+0x384u), 0x0u);
    /* 0048b9b4: add ecx, 0x380 */ {  u32 a = r_ecx; u32 b = 0x380u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048b9ba: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x48b9bfu); f_0083173c();
    /* 0048b9bf: fcomp dword ptr [0x9013ac] */ fx_compare(ST(0), R_F32((u32)(0x9013acu))); FPOP();
    /* 0048b9c5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0048b9c7: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0048b9c8: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0048b9cb: ja 0x48b9d7 */ if ((!fC&&!fZ)) goto L_0048b9d7;
L_0048b9cd:; BB(0x0048b9cd);
    /* 0048b9cd: mov dword ptr [ecx + 0x380], 0x3f800000 */ W32((u32)(r_ecx+0x380u), 0x3f800000u);
L_0048b9d7:; BB(0x0048b9d7);
    /* 0048b9d7: add ecx, 0x380 */ {  u32 a = r_ecx; u32 b = 0x380u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048b9dd: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x48b9e2u); f_0082df08();
    /* 0048b9e2: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0048b9e4: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0048b9e7: fld dword ptr [0x90137c] */ FPUSH(R_F32((u32)(0x90137cu)));
    /* 0048b9ed: push 0x146 */ { u32 v = 0x146u; r_esp -= 4; W32(r_esp, v); }
    /* 0048b9f2: fld dword ptr [eax + 0x380] */ FPUSH(R_F32((u32)(r_eax+0x380u)));
    /* 0048b9f8: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0048b9fa: fld dword ptr [eax + 0x388] */ FPUSH(R_F32((u32)(r_eax+0x388u)));
    /* 0048ba00: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0048ba02: fstp dword ptr [eax + 0x380] */ W_F32((u32)(r_eax+0x380u), ST(0)); FPOP();
    /* 0048ba08: fstp dword ptr [eax + 0x388] */ W_F32((u32)(r_eax+0x388u), ST(0)); FPOP();
    /* 0048ba0e: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0048ba11: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048ba12: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x48ba17u); f_00509590();
    /* 0048ba17: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048ba1a: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0048ba1d: mov dword ptr [edx + 0x3b8], eax */ W32((u32)(r_edx+0x3b8u), r_eax);
    /* 0048ba23: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0048ba25: je 0x48ba33 */ if (fZ) goto L_0048ba33;
L_0048ba27:; BB(0x0048ba27);
    /* 0048ba27: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 0048ba29: mov ecx, eax */ r_ecx = r_eax;
    /* 0048ba2b: call 0x508efc */ r_esp -= 4; W32(r_esp, 0x48ba30u); f_00508efc();
    /* 0048ba30: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
L_0048ba33:; BB(0x0048ba33);
    /* 0048ba33: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0048ba36: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0048ba39: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0048ba3c: mov eax, edx */ r_eax = r_edx;
    /* 0048ba3e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048ba41: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0048ba48: mov esp, ebp */ r_esp = r_ebp;
    /* 0048ba4a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048ba4b: ret 8 */ FN_RET(0x0048b6ac); r_esp += 12; return;
}

void f_0048b837(void)
{
    FN_ENTER(0x0048b837);
    goto L_0048b837;
L_0048b82d:; BB(0x0048b82d);
    /* 0048b82d: add byte ptr cs:[ebx - 0x17d29510], cl */ { u32 ad = (u32)(r_ebx+0xe82d6af0u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0048b834: pushal  */ { u32 sp = r_esp; r_esp -= 32; W32(r_esp, r_edi); W32(r_esp + 4, r_esi); W32(r_esp + 8, r_ebp); W32(r_esp + 12, sp); W32(r_esp + 16, r_ebx); W32(r_esp + 20, r_edx); W32(r_esp + 24, r_ecx); W32(r_esp + 28, r_eax); }
    /* 0048b835: out dx, al */ UNSUP(0x0048b835, "out dx, al");
    /* 0048b836: add byte ptr cs:[ebx - 0x17d29528], cl */ { u32 ad = (u32)(r_ebx+0xe82d6ad8u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r); fC = (r < a); }
L_0048b837:; BB(0x0048b837);
    /* 0048b837: add byte ptr [ebx - 0x17d29528], cl */ { u32 ad = (u32)(r_ebx+0xe82d6ad8u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r); fC = (r < a); }
    /* 0048b83d: jae 0x48b82d */ if (!fC) goto L_0048b82d;
L_0048b83f:; BB(0x0048b83f);
    /* 0048b83f: add byte ptr cs:[ebx + 0x4d8b0cc4], al */ { u32 ad = (u32)(r_ebx+0x4d8b0cc4u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0048b846: les edx, ptr [eax + 0x53] */ UNSUP(0x0048b846, "les edx, ptr [eax + 0x53]");
    /* 0048b849: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0048b84a: call 0x7868f8 */ r_esp -= 4; W32(r_esp, 0x48b84fu); f_007868f8();
    /* 0048b84f: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0048b852: movzx eax, word ptr [ecx + 0x334] */ r_eax = (u32)R16((u32)(r_ecx+0x334u));
    /* 0048b859: mov word ptr [ecx + 0x346], ax */ W16((u32)(r_ecx+0x346u), (u16)r_eax);
    /* 0048b860: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x48b865u); f_007b4f54();
    /* 0048b865: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0048b868: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048b86a: call 0x787550 */ r_esp -= 4; W32(r_esp, 0x48b86fu); f_00787550();
    /* 0048b86f: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 0048b871: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x48b876u); f_0077a6cc();
    /* 0048b876: mov ebx, eax */ r_ebx = r_eax;
    /* 0048b878: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048b87b: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0048b87e: fld dword ptr [0x9013b4] */ FPUSH(R_F32((u32)(0x9013b4u)));
    /* 0048b884: fld dword ptr [ebx + 4] */ FPUSH(R_F32((u32)(r_ebx+0x4u)));
    /* 0048b887: fnstcw word ptr [ebp - 0x38] */ W16((u32)(r_ebp+0xffffffc8u), fcw);
    /* 0048b88a: movzx eax, word ptr [ebp - 0x38] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc8u));
    /* 0048b88e: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0048b893: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0048b896: fldcw word ptr [ebp - 0x30] */ fcw = R16((u32)(r_ebp+0xffffffd0u));
    /* 0048b899: fistp dword ptr [ebp - 0x28] */ W32((u32)(r_ebp+0xffffffd8u), (u32)fx_int32(ST(0))); FPOP();
    /* 0048b89c: fldcw word ptr [ebp - 0x38] */ fcw = R16((u32)(r_ebp+0xffffffc8u));
    /* 0048b89f: fild dword ptr [ebp - 0x28] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd8u)));
    /* 0048b8a2: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 0048b8a4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0048b8a6: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0048b8a8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0048b8a9: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0048b8ac: ja 0x48b8ba */ if ((!fC&&!fZ)) goto L_0048b8ba;
L_0048b8ae:; BB(0x0048b8ae);
    /* 0048b8ae: mov dword ptr [ecx + 0x3a4], 0x14 */ W32((u32)(r_ecx+0x3a4u), 0x14u);
    /* 0048b8b8: jmp 0x48b8c0 */ goto L_0048b8c0;
L_0048b8ba:; BB(0x0048b8ba);
    /* 0048b8ba: mov dword ptr [ecx + 0x3a4], edx */ W32((u32)(r_ecx+0x3a4u), r_edx);
L_0048b8c0:; BB(0x0048b8c0);
    /* 0048b8c0: fld dword ptr [ebx + 8] */ FPUSH(R_F32((u32)(r_ebx+0x8u)));
    /* 0048b8c3: fnstcw word ptr [ebp - 0x38] */ W16((u32)(r_ebp+0xffffffc8u), fcw);
    /* 0048b8c6: movzx eax, word ptr [ebp - 0x38] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc8u));
    /* 0048b8ca: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0048b8cf: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0048b8d2: fldcw word ptr [ebp - 0x30] */ fcw = R16((u32)(r_ebp+0xffffffd0u));
    /* 0048b8d5: fistp dword ptr [ebp - 0x28] */ W32((u32)(r_ebp+0xffffffd8u), (u32)fx_int32(ST(0))); FPOP();
    /* 0048b8d8: fldcw word ptr [ebp - 0x38] */ fcw = R16((u32)(r_ebp+0xffffffc8u));
    /* 0048b8db: fild dword ptr [ebp - 0x28] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd8u)));
    /* 0048b8de: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0048b8e0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0048b8e2: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0048b8e5: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0048b8e6: jb 0x48b8ed */ if (fC) goto L_0048b8ed;
L_0048b8e8:; BB(0x0048b8e8);
    /* 0048b8e8: cmp edx, 0x64 */ {  u32 a = r_edx; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048b8eb: jle 0x48b8f9 */ if ((fZ||fS!=fO)) goto L_0048b8f9;
L_0048b8ed:; BB(0x0048b8ed);
    /* 0048b8ed: mov dword ptr [ecx + 0x3a8], 0 */ W32((u32)(r_ecx+0x3a8u), 0x0u);
    /* 0048b8f7: jmp 0x48b8ff */ goto L_0048b8ff;
L_0048b8f9:; BB(0x0048b8f9);
    /* 0048b8f9: mov dword ptr [ecx + 0x3a8], edx */ W32((u32)(r_ecx+0x3a8u), r_edx);
L_0048b8ff:; BB(0x0048b8ff);
    /* 0048b8ff: fld dword ptr [ecx + 0x38] */ FPUSH(R_F32((u32)(r_ecx+0x38u)));
    /* 0048b902: fadd dword ptr [ecx + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x40u));
    /* 0048b905: fmul dword ptr [0x9013b0] */ ST(0) = ST(0) * R_F32((u32)(0x9013b0u));
    /* 0048b90b: movzx edi, word ptr [ecx + 0x1c] */ r_edi = (u32)R16((u32)(r_ecx+0x1cu));
    /* 0048b90f: fnstcw word ptr [ebp - 0x38] */ W16((u32)(r_ebp+0xffffffc8u), fcw);
    /* 0048b912: movzx eax, word ptr [ebp - 0x38] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc8u));
    /* 0048b916: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0048b91b: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0048b91e: fldcw word ptr [ebp - 0x30] */ fcw = R16((u32)(r_ebp+0xffffffd0u));
    /* 0048b921: fistp dword ptr [ebp - 0x28] */ W32((u32)(r_ebp+0xffffffd8u), (u32)fx_int32(ST(0))); FPOP();
    /* 0048b924: fldcw word ptr [ebp - 0x38] */ fcw = R16((u32)(r_ebp+0xffffffc8u));
    /* 0048b927: add edi, dword ptr [ebp - 0x28] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebp+0xffffffd8u)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0048b92a: mov dword ptr [ecx + 0x3a0], 0x3f800000 */ W32((u32)(r_ecx+0x3a0u), 0x3f800000u);
    /* 0048b934: movzx ebx, di */ r_ebx = (u32)(u16)r_edi;
    /* 0048b937: mov dword ptr [ecx + 0x3b0], esi */ W32((u32)(r_ecx+0x3b0u), r_esi);
    /* 0048b93d: mov eax, 0x51eb851f */ r_eax = 0x51eb851fu;
    /* 0048b942: imul ebx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0048b944: mov eax, ebx */ r_eax = r_ebx;
    /* 0048b946: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0048b949: sar edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0048b94c: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0048b94e: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 0048b951: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0048b953: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0048b955: lea eax, [edx + eax*8] */ r_eax = (u32)(r_edx+r_eax*8);
    /* 0048b958: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0048b95b: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0048b95d: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0048b95f: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0048b961: mov eax, dword ptr [ecx + 0x38c] */ r_eax = R32((u32)(r_ecx+0x38cu));
    /* 0048b967: mov dword ptr [ecx + 0x3ac], ebx */ W32((u32)(r_ecx+0x3acu), r_ebx);
    /* 0048b96d: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0048b96f: mov dword ptr [ecx + 0x39c], esi */ W32((u32)(r_ecx+0x39cu), r_esi);
    /* 0048b975: mov dword ptr [ecx + 0x398], esi */ W32((u32)(r_ecx+0x398u), r_esi);
    /* 0048b97b: mov dword ptr [ecx + 0x380], eax */ W32((u32)(r_ecx+0x380u), r_eax);
    /* 0048b981: mov eax, dword ptr [ecx + 0x390] */ r_eax = R32((u32)(r_ecx+0x390u));
    /* 0048b987: mov dword ptr [ecx + 0x384], eax */ W32((u32)(r_ecx+0x384u), r_eax);
    /* 0048b98d: mov eax, dword ptr [ecx + 0x394] */ r_eax = R32((u32)(r_ecx+0x394u));
    /* 0048b993: mov dword ptr [ecx + 0x388], eax */ W32((u32)(r_ecx+0x388u), r_eax);
    /* 0048b999: lea ecx, [edx + 0x380] */ r_ecx = (u32)(r_edx+0x380u);
    /* 0048b99f: add edx, 0x38 */ {  u32 a = r_edx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0048b9a2: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x48b9a7u); f_0082f9c4();
    /* 0048b9a7: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0048b9aa: mov dword ptr [ecx + 0x384], 0 */ W32((u32)(r_ecx+0x384u), 0x0u);
    /* 0048b9b4: add ecx, 0x380 */ {  u32 a = r_ecx; u32 b = 0x380u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048b9ba: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x48b9bfu); f_0083173c();
    /* 0048b9bf: fcomp dword ptr [0x9013ac] */ fx_compare(ST(0), R_F32((u32)(0x9013acu))); FPOP();
    /* 0048b9c5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0048b9c7: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0048b9c8: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0048b9cb: ja 0x48b9d7 */ if ((!fC&&!fZ)) goto L_0048b9d7;
L_0048b9cd:; BB(0x0048b9cd);
    /* 0048b9cd: mov dword ptr [ecx + 0x380], 0x3f800000 */ W32((u32)(r_ecx+0x380u), 0x3f800000u);
L_0048b9d7:; BB(0x0048b9d7);
    /* 0048b9d7: add ecx, 0x380 */ {  u32 a = r_ecx; u32 b = 0x380u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048b9dd: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x48b9e2u); f_0082df08();
    /* 0048b9e2: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0048b9e4: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0048b9e7: fld dword ptr [0x90137c] */ FPUSH(R_F32((u32)(0x90137cu)));
    /* 0048b9ed: push 0x146 */ { u32 v = 0x146u; r_esp -= 4; W32(r_esp, v); }
    /* 0048b9f2: fld dword ptr [eax + 0x380] */ FPUSH(R_F32((u32)(r_eax+0x380u)));
    /* 0048b9f8: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0048b9fa: fld dword ptr [eax + 0x388] */ FPUSH(R_F32((u32)(r_eax+0x388u)));
    /* 0048ba00: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0048ba02: fstp dword ptr [eax + 0x380] */ W_F32((u32)(r_eax+0x380u), ST(0)); FPOP();
    /* 0048ba08: fstp dword ptr [eax + 0x388] */ W_F32((u32)(r_eax+0x388u), ST(0)); FPOP();
    /* 0048ba0e: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0048ba11: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048ba12: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x48ba17u); f_00509590();
    /* 0048ba17: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048ba1a: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0048ba1d: mov dword ptr [edx + 0x3b8], eax */ W32((u32)(r_edx+0x3b8u), r_eax);
    /* 0048ba23: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0048ba25: je 0x48ba33 */ if (fZ) goto L_0048ba33;
L_0048ba27:; BB(0x0048ba27);
    /* 0048ba27: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 0048ba29: mov ecx, eax */ r_ecx = r_eax;
    /* 0048ba2b: call 0x508efc */ r_esp -= 4; W32(r_esp, 0x48ba30u); f_00508efc();
    /* 0048ba30: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
L_0048ba33:; BB(0x0048ba33);
    /* 0048ba33: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0048ba36: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0048ba39: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0048ba3c: mov eax, edx */ r_eax = r_edx;
    /* 0048ba3e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048ba41: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0048ba48: mov esp, ebp */ r_esp = r_ebp;
    /* 0048ba4a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048ba4b: ret 8 */ FN_RET(0x0048b837); r_esp += 12; return;
}

void f_0048ba84(void) /* sub_48BA84 */
{
    FN_ENTER(0x0048ba84);
    /* 0048ba84: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0048ba85: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0048ba87: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0048ba89: call 0x48baa8 */ r_esp -= 4; W32(r_esp, 0x48ba8eu); f_0048baa8();
    /* 0048ba8e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0048ba92: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0048ba94: jne 0x48ba9a */ if (!fZ) goto L_0048ba9a;
L_0048ba96:; BB(0x0048ba96);
    /* 0048ba96: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0048ba97: ret 4 */ FN_RET(0x0048ba84); r_esp += 8; return;
L_0048ba9a:; BB(0x0048ba9a);
    /* 0048ba9a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0048ba9b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x48baa0u); f_005c2f74();
    /* 0048baa0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0048baa1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0048baa2: ret 4 */ FN_RET(0x0048ba84); r_esp += 8; return;
}

void f_0048baa8(void) /* sub_48BAA8 */
{
    FN_ENTER(0x0048baa8);
    /* 0048baa8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048baa9: mov ebp, esp */ r_ebp = r_esp;
    /* 0048baab: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0048baad: push 0x8cfe98 */ { u32 v = 0x8cfe98u; r_esp -= 4; W32(r_esp, v); }
    /* 0048bab2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0048bab8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048bab9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0048bac0: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048bac3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0048bac6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0048bac9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0048bacc: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0048bacf: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0048bad2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0048bad9: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0048badc: mov eax, dword ptr [ecx + 0x3d4] */ r_eax = R32((u32)(r_ecx+0x3d4u));
    /* 0048bae2: mov dword ptr [ecx], 0xaf9000 */ W32((u32)(r_ecx), 0xaf9000u);
    /* 0048bae8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048baea: je 0x48bb00 */ if (fZ) goto L_0048bb00;
L_0048baec:; BB(0x0048baec);
    /* 0048baec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048baed: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x48baf2u); f_005cdcc0();
    /* 0048baf2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0048baf3: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0048baf6: mov dword ptr [ecx + 0x3d4], 0 */ W32((u32)(r_ecx+0x3d4u), 0x0u);
L_0048bb00:; BB(0x0048bb00);
    /* 0048bb00: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x48bb05u); f_007b9c8c();
    /* 0048bb05: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0048bb08: mov ecx, dword ptr [eax + 0x380] */ r_ecx = R32((u32)(r_eax+0x380u));
    /* 0048bb0e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048bb10: je 0x48bb1a */ if (fZ) goto L_0048bb1a;
L_0048bb12:; BB(0x0048bb12);
    /* 0048bb12: call 0x497e30 */ r_esp -= 4; W32(r_esp, 0x48bb17u); f_00497e30();
    /* 0048bb17: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_0048bb1a:; BB(0x0048bb1a);
    /* 0048bb1a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0048bb21: mov ecx, eax */ r_ecx = r_eax;
    /* 0048bb23: call 0x78638c */ r_esp -= 4; W32(r_esp, 0x48bb28u); f_0078638c();
    /* 0048bb28: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048bb2b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0048bb32: mov esp, ebp */ r_esp = r_ebp;
    /* 0048bb34: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048bb35: ret  */ FN_RET(0x0048baa8); r_esp += 4; return;
}

void f_0048bb38(void) /* sub_48BB38 */
{
    FN_ENTER(0x0048bb38);
    /* 0048bb38: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0048bb39: mov ebx, esp */ r_ebx = r_esp;
    /* 0048bb3b: and esp, 0xffffffc0 */ {  u32 a = r_esp; u32 b = 0xffffffc0u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 0048bb3e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0048bb3f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0048bb40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048bb41: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048bb44: mov esi, ecx */ r_esi = r_ecx;
    /* 0048bb46: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x48bb4bu); f_004f7c84();
    /* 0048bb4b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048bb4d: je 0x48bb59 */ if (fZ) goto L_0048bb59;
L_0048bb4f:; BB(0x0048bb4f);
    /* 0048bb4f: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0048bb52: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048bb53: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0048bb54: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0048bb55: mov esp, ebx */ r_esp = r_ebx;
    /* 0048bb57: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0048bb58: ret  */ FN_RET(0x0048bb38); r_esp += 4; return;
L_0048bb59:; BB(0x0048bb59);
    /* 0048bb59: call 0x48e5a0 */ r_esp -= 4; W32(r_esp, 0x48bb5eu); f_0048e5a0();
    /* 0048bb5e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048bb60: jne 0x48bb83 */ if (!fZ) goto L_0048bb83;
L_0048bb62:; BB(0x0048bb62);
    /* 0048bb62: movzx eax, word ptr [esi + 8] */ r_eax = (u32)R16((u32)(r_esi+0x8u));
    /* 0048bb66: mov dword ptr [esi + 0x380], 0 */ W32((u32)(r_esi+0x380u), 0x0u);
    /* 0048bb70: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0048bb75: mov word ptr [esi + 8], ax */ W16((u32)(r_esi+0x8u), (u16)r_eax);
    /* 0048bb79: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0048bb7c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048bb7d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0048bb7e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0048bb7f: mov esp, ebx */ r_esp = r_ebx;
    /* 0048bb81: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0048bb82: ret  */ FN_RET(0x0048bb38); r_esp += 4; return;
L_0048bb83:; BB(0x0048bb83);
    /* 0048bb83: call 0x520db8 */ r_esp -= 4; W32(r_esp, 0x48bb88u); f_00520db8();
    /* 0048bb88: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048bb8a: jne 0x48bb4f */ if (!fZ) goto L_0048bb4f;
L_0048bb8c:; BB(0x0048bb8c);
    /* 0048bb8c: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 0048bb8f: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 0048bb92: mov ebp, dword ptr [esi + 0x40] */ r_ebp = R32((u32)(r_esi+0x40u));
    /* 0048bb95: mov edi, dword ptr [esi + 0x388] */ r_edi = R32((u32)(r_esi+0x388u));
    /* 0048bb9b: mov dword ptr [esi + 0x44], eax */ W32((u32)(r_esi+0x44u), r_eax);
    /* 0048bb9e: mov eax, dword ptr [edi*4 + 0x901404] */ r_eax = R32((u32)(r_edi*4+0x901404u));
    /* 0048bba5: mov dword ptr [esi + 0x48], edx */ W32((u32)(r_esi+0x48u), r_edx);
    /* 0048bba8: mov dword ptr [esi + 0x4c], ebp */ W32((u32)(r_esi+0x4cu), r_ebp);
    /* 0048bbab: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048bbad: je 0x48bbb3 */ if (fZ) goto L_0048bbb3;
L_0048bbaf:; BB(0x0048bbaf);
    /* 0048bbaf: mov ecx, esi */ r_ecx = r_esi;
    /* 0048bbb1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x48bbb3u); call_ind(t); }
L_0048bbb3:; BB(0x0048bbb3);
    /* 0048bbb3: mov ecx, esi */ r_ecx = r_esi;
    /* 0048bbb5: call 0x4890e0 */ r_esp -= 4; W32(r_esp, 0x48bbbau); f_004890e0();
    /* 0048bbba: mov eax, dword ptr [esi + 0x388] */ r_eax = R32((u32)(r_esi+0x388u));
    /* 0048bbc0: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048bbc3: je 0x48bdda */ if (fZ) goto L_0048bdda;
L_0048bbc9:; BB(0x0048bbc9);
    /* 0048bbc9: mov edx, 0xff7f5126 */ r_edx = 0xff7f5126u;
    /* 0048bbce: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048bbd1: jne 0x48bbd8 */ if (!fZ) goto L_0048bbd8;
L_0048bbd3:; BB(0x0048bbd3);
    /* 0048bbd3: mov edx, 0xffffa24c */ r_edx = 0xffffa24cu;
L_0048bbd8:; BB(0x0048bbd8);
    /* 0048bbd8: lea ebp, [esi + 0x38] */ r_ebp = (u32)(r_esi+0x38u);
    /* 0048bbdb: mov eax, 1 */ r_eax = 0x1u;
    /* 0048bbe0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048bbe1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048bbe2: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0048bbe7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048bbe8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048bbe9: call 0x80575c */ r_esp -= 4; W32(r_esp, 0x48bbeeu); f_0080575c();
    /* 0048bbee: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048bbf1: mov eax, dword ptr [esi + 0x388] */ r_eax = R32((u32)(r_esi+0x388u));
    /* 0048bbf7: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048bbfa: jl 0x48bd70 */ if ((fS!=fO)) goto L_0048bd70;
L_0048bc00:; BB(0x0048bc00);
    /* 0048bc00: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048bc03: jg 0x48bd70 */ if ((!fZ&&fS==fO)) goto L_0048bd70;
L_0048bc09:; BB(0x0048bc09);
    /* 0048bc09: lea ecx, [esp + 0x28] */ r_ecx = (u32)(r_esp+0x28u);
    /* 0048bc0d: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 0048bc10: mov edi, dword ptr [esi + 0x3c] */ r_edi = R32((u32)(r_esi+0x3cu));
    /* 0048bc13: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 0048bc17: mov eax, dword ptr [esi + 0x40] */ r_eax = R32((u32)(r_esi+0x40u));
    /* 0048bc1a: mov dword ptr [esp + 0x2c], edi */ W32((u32)(r_esp+0x2cu), r_edi);
    /* 0048bc1e: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 0048bc22: lea edx, [esi + 0x44] */ r_edx = (u32)(r_esi+0x44u);
    /* 0048bc25: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x48bc2au); f_0082f9c4();
    /* 0048bc2a: lea ecx, [esp + 0x28] */ r_ecx = (u32)(r_esp+0x28u);
    /* 0048bc2e: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x48bc33u); f_0083173c();
    /* 0048bc33: fcomp dword ptr [0x9014e0] */ fx_compare(ST(0), R_F32((u32)(0x9014e0u))); FPOP();
    /* 0048bc39: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0048bc3b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0048bc3c: jbe 0x48bdc9 */ if ((fC||fZ)) goto L_0048bdc9;
L_0048bc42:; BB(0x0048bc42);
    /* 0048bc42: lea ecx, [esp + 0x28] */ r_ecx = (u32)(r_esp+0x28u);
    /* 0048bc46: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x48bc4bu); f_0082df08();
    /* 0048bc4b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0048bc4d: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 0048bc51: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 0048bc55: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0048bc57: fchs  */ ST(0) = -ST(0);
    /* 0048bc59: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0048bc5b: fchs  */ ST(0) = -ST(0);
    /* 0048bc5d: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0048bc5f: fmul qword ptr [0x901448] */ ST(0) = ST(0) * R_F64((u32)(0x901448u));
    /* 0048bc65: fdiv qword ptr [0x901440] */ ST(0) = ST(0) / R_F64((u32)(0x901440u));
    /* 0048bc6b: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 0048bc6f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0048bc71: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 0048bc75: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 0048bc7a: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0048bc7f: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0048bc83: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0048bc87: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 0048bc8b: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0048bc8f: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0048bc93: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 0048bc96: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0048bc9a: call 0x84d184 */ r_esp -= 4; W32(r_esp, 0x48bc9fu); f_0084d184();
    /* 0048bc9f: fmul qword ptr [0x901448] */ ST(0) = ST(0) * R_F64((u32)(0x901448u));
    /* 0048bca5: fdiv qword ptr [0x901440] */ ST(0) = ST(0) / R_F64((u32)(0x901440u));
    /* 0048bcab: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 0048bcaf: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 0048bcb4: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0048bcb9: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0048bcbd: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0048bcc1: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 0048bcc5: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0048bcc9: mov eax, 0x2000 */ r_eax = 0x2000u;
    /* 0048bcce: mov edx, 0xffffe000 */ r_edx = 0xffffe000u;
    /* 0048bcd3: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 0048bcd7: cmp edi, 0x2000 */ {  u32 a = r_edi; u32 b = 0x2000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048bcdd: jle 0x48bce1 */ if ((fZ||fS!=fO)) goto L_0048bce1;
L_0048bcdf:; BB(0x0048bcdf);
    /* 0048bcdf: mov edi, eax */ r_edi = r_eax;
L_0048bce1:; BB(0x0048bce1);
    /* 0048bce1: cmp edi, 0xffffe000 */ {  u32 a = r_edi; u32 b = 0xffffe000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048bce7: jg 0x48bceb */ if ((!fZ&&fS==fO)) goto L_0048bceb;
L_0048bce9:; BB(0x0048bce9);
    /* 0048bce9: mov edi, edx */ r_edi = r_edx;
L_0048bceb:; BB(0x0048bceb);
    /* 0048bceb: mov dword ptr [esp + 0x24], edi */ W32((u32)(r_esp+0x24u), r_edi);
L_0048bcef:; BB(0x0048bcef);
    /* 0048bcef: movzx eax, byte ptr [0xa46e40] */ r_eax = (u32)R8((u32)(0xa46e40u));
    /* 0048bcf6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0048bcf8: jne 0x48bd0c */ if (!fZ) goto L_0048bd0c;
L_0048bcfa:; BB(0x0048bcfa);
    /* 0048bcfa: mov dword ptr [0xa46e44], 0x1111 */ W32((u32)(0xa46e44u), 0x1111u);
    /* 0048bd04: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0048bd07: mov byte ptr [0xa46e40], al */ W8((u32)(0xa46e40u), (u8)r_eax);
L_0048bd0c:; BB(0x0048bd0c);
    /* 0048bd0c: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0048bd0e: jne 0x48bd24 */ if (!fZ) goto L_0048bd24;
L_0048bd10:; BB(0x0048bd10);
    /* 0048bd10: mov dword ptr [0xa46e48], 0x444 */ W32((u32)(0xa46e48u), 0x444u);
    /* 0048bd1a: or eax, 0xffffff02 */ {  u32 a = r_eax; u32 b = 0xffffff02u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0048bd1f: mov byte ptr [0xa46e40], al */ W8((u32)(0xa46e40u), (u8)r_eax);
L_0048bd24:; BB(0x0048bd24);
    /* 0048bd24: push dword ptr [0xa46e44] */ { u32 v = R32((u32)(0xa46e44u)); r_esp -= 4; W32(r_esp, v); }
    /* 0048bd2a: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 0048bd2e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048bd2f: push dword ptr [esi + 0x398] */ { u32 v = R32((u32)(r_esi+0x398u)); r_esp -= 4; W32(r_esp, v); }
    /* 0048bd35: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x48bd3au); f_007a8c74();
    /* 0048bd3a: push dword ptr [0xa46e48] */ { u32 v = R32((u32)(0xa46e48u)); r_esp -= 4; W32(r_esp, v); }
    /* 0048bd40: mov dword ptr [esi + 0x398], eax */ W32((u32)(r_esi+0x398u), r_eax);
    /* 0048bd46: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 0048bd4a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048bd4b: push dword ptr [esi + 0x39c] */ { u32 v = R32((u32)(r_esi+0x39cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0048bd51: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x48bd56u); f_007a8c74();
    /* 0048bd56: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048bd59: mov dword ptr [esi + 0x39c], eax */ W32((u32)(r_esi+0x39cu), r_eax);
    /* 0048bd5f: mov eax, dword ptr [esi + 0x3a0] */ r_eax = R32((u32)(r_esi+0x3a0u));
    /* 0048bd65: add eax, 0x888 */ {  u32 a = r_eax; u32 b = 0x888u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0048bd6a: mov dword ptr [esi + 0x3a0], eax */ W32((u32)(r_esi+0x3a0u), r_eax);
L_0048bd70:; BB(0x0048bd70);
    /* 0048bd70: fld dword ptr [0x901400] */ FPUSH(R_F32((u32)(0x901400u)));
    /* 0048bd76: fadd dword ptr [esi + 0x3d0] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x3d0u));
    /* 0048bd7c: fld dword ptr [0x9014dc] */ FPUSH(R_F32((u32)(0x9014dcu)));
    /* 0048bd82: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0048bd84: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0048bd86: mov ecx, dword ptr [esi + 0x3d4] */ r_ecx = R32((u32)(r_esi+0x3d4u));
    /* 0048bd8c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0048bd8d: jb 0x48bd91 */ if (fC) goto L_0048bd91;
L_0048bd8f:; BB(0x0048bd8f);
    /* 0048bd8f: fst st(1) */ ST(1) = ST(0);
L_0048bd91:; BB(0x0048bd91);
    /* 0048bd91: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0048bd93: fstp dword ptr [esi + 0x3d0] */ W_F32((u32)(r_esi+0x3d0u), ST(0)); FPOP();
    /* 0048bd99: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048bd9b: je 0x48bda3 */ if (fZ) goto L_0048bda3;
L_0048bd9d:; BB(0x0048bd9d);
    /* 0048bd9d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048bd9e: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x48bda3u); f_00508db8();
L_0048bda3:; BB(0x0048bda3);
    /* 0048bda3: mov ecx, esi */ r_ecx = r_esi;
    /* 0048bda5: call 0x48bdf8 */ r_esp -= 4; W32(r_esp, 0x48bdaau); f_0048bdf8();
    /* 0048bdaa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048bdac: je 0x48bb4f */ if (fZ) goto L_0048bb4f;
L_0048bdb2:; BB(0x0048bdb2);
    /* 0048bdb2: movzx eax, word ptr [esi + 8] */ r_eax = (u32)R16((u32)(r_esi+0x8u));
    /* 0048bdb6: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0048bdbb: mov word ptr [esi + 8], ax */ W16((u32)(r_esi+0x8u), (u16)r_eax);
    /* 0048bdbf: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0048bdc2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048bdc3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0048bdc4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0048bdc5: mov esp, ebx */ r_esp = r_ebx;
    /* 0048bdc7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0048bdc8: ret  */ FN_RET(0x0048bb38); r_esp += 4; return;
L_0048bdc9:; BB(0x0048bdc9);
    /* 0048bdc9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0048bdcb: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0048bdcf: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0048bdd1: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 0048bdd5: jmp 0x48bcef */ goto L_0048bcef;
L_0048bdda:; BB(0x0048bdda);
    /* 0048bdda: mov ecx, esi */ r_ecx = r_esi;
    /* 0048bddc: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x48bde1u); f_007b6880();
    /* 0048bde1: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0048bde3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0048bde4: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x48bde9u); f_006946a8();
    /* 0048bde9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048bdec: mov eax, dword ptr [esi + 0x388] */ r_eax = R32((u32)(r_esi+0x388u));
    /* 0048bdf2: jmp 0x48bbc9 */ goto L_0048bbc9;
}

void f_0048bdf8(void) /* sub_48BDF8 */
{
    FN_ENTER(0x0048bdf8);
    /* 0048bdf8: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048bdfb: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x48be00u); f_0083173c();
    /* 0048be00: fcomp dword ptr [0x901424] */ fx_compare(ST(0), R_F32((u32)(0x901424u))); FPOP();
    /* 0048be06: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0048be08: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0048be09: jbe 0x48be11 */ if ((fC||fZ)) goto L_0048be11;
L_0048be0b:; BB(0x0048be0b);
    /* 0048be0b: mov eax, 1 */ r_eax = 0x1u;
    /* 0048be10: ret  */ FN_RET(0x0048bdf8); r_esp += 4; return;
L_0048be11:; BB(0x0048be11);
    /* 0048be11: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0048be13: ret  */ FN_RET(0x0048bdf8); r_esp += 4; return;
}

void f_0048be14(void) /* sub_48BE14 */
{
    FN_ENTER(0x0048be14);
    /* 0048be14: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0048be15: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048be18: mov edi, ecx */ r_edi = r_ecx;
    /* 0048be1a: fld dword ptr [edi + 0x3b4] */ FPUSH(R_F32((u32)(r_edi+0x3b4u)));
    /* 0048be20: fdiv dword ptr [0x9014d8] */ ST(0) = ST(0) / R_F32((u32)(0x9014d8u));
    /* 0048be26: movzx eax, byte ptr [0xa46e08] */ r_eax = (u32)R8((u32)(0xa46e08u));
    /* 0048be2d: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0048be31: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0048be33: jne 0x48be49 */ if (!fZ) goto L_0048be49;
L_0048be35:; BB(0x0048be35);
    /* 0048be35: mov dword ptr [0xa46e0c], 0xf */ W32((u32)(0xa46e0cu), 0xfu);
    /* 0048be3f: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0048be44: mov byte ptr [0xa46e08], al */ W8((u32)(0xa46e08u), (u8)r_eax);
L_0048be49:; BB(0x0048be49);
    /* 0048be49: mov eax, dword ptr [edi + 0x394] */ r_eax = R32((u32)(r_edi+0x394u));
    /* 0048be4f: cmp eax, dword ptr [0xa46e0c] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa46e0cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048be55: jle 0x48be7e */ if ((fZ||fS!=fO)) goto L_0048be7e;
L_0048be57:; BB(0x0048be57);
    /* 0048be57: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0048be59: add eax, 0x1e */ {  u32 a = r_eax; u32 b = 0x1eu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0048be5c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0048be5e: jle 0x48be7e */ if ((fZ||fS!=fO)) goto L_0048be7e;
L_0048be60:; BB(0x0048be60);
    /* 0048be60: fld dword ptr [0x9014d4] */ FPUSH(R_F32((u32)(0x9014d4u)));
    /* 0048be66: fld dword ptr [edi + 0x3bc] */ FPUSH(R_F32((u32)(r_edi+0x3bcu)));
    /* 0048be6c: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 0048be6e: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0048be71: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 0048be74: fdivp st(2) */ ST(2) = ST(2) / ST(0); FPOP();
    /* 0048be76: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0048be78: fstp dword ptr [edi + 0x3bc] */ W_F32((u32)(r_edi+0x3bcu), ST(0)); FPOP();
L_0048be7e:; BB(0x0048be7e);
    /* 0048be7e: mov ecx, dword ptr [edi + 0x384] */ r_ecx = R32((u32)(r_edi+0x384u));
    /* 0048be84: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x48be89u); f_0082dcbc();
    /* 0048be89: fmul dword ptr [esp + 8] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x8u));
    /* 0048be8d: fadd dword ptr [edi + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x38u));
    /* 0048be90: mov ecx, dword ptr [edi + 0x384] */ r_ecx = R32((u32)(r_edi+0x384u));
    /* 0048be96: fstp dword ptr [edi + 0x38] */ W_F32((u32)(r_edi+0x38u), ST(0)); FPOP();
    /* 0048be99: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x48be9eu); f_0082ddd8();
    /* 0048be9e: fmul dword ptr [esp + 8] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x8u));
    /* 0048bea2: fadd dword ptr [edi + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x40u));
    /* 0048bea5: mov ecx, dword ptr [edi + 0x394] */ r_ecx = R32((u32)(r_edi+0x394u));
    /* 0048beab: fstp dword ptr [edi + 0x40] */ W_F32((u32)(r_edi+0x40u), ST(0)); FPOP();
    /* 0048beae: shl ecx, 0xf */ { u32 c = (15u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0048beb1: mov eax, 0x88888889 */ r_eax = 0x88888889u;
    /* 0048beb6: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0048beb8: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0048beba: sar edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0048bebd: sar ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0048bec0: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0048bec2: mov ecx, edx */ r_ecx = r_edx;
    /* 0048bec4: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x48bec9u); f_0082dcbc();
    /* 0048bec9: fld dword ptr [0x901428] */ FPUSH(R_F32((u32)(0x901428u)));
    /* 0048becf: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0048bed1: fadd dword ptr [edi + 0x3bc] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x3bcu));
    /* 0048bed7: mov eax, dword ptr [edi + 0x394] */ r_eax = R32((u32)(r_edi+0x394u));
    /* 0048bedd: fstp dword ptr [edi + 0x3c] */ W_F32((u32)(r_edi+0x3cu), ST(0)); FPOP();
    /* 0048bee0: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0048bee3: cmp eax, 0x1e */ {  u32 a = r_eax; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048bee6: jle 0x48bf01 */ if ((fZ||fS!=fO)) goto L_0048bf01;
L_0048bee8:; BB(0x0048bee8);
    /* 0048bee8: mov dword ptr [edi + 0x394], 0 */ W32((u32)(r_edi+0x394u), 0x0u);
    /* 0048bef2: mov dword ptr [edi + 0x388], 1 */ W32((u32)(r_edi+0x388u), 0x1u);
    /* 0048befc: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0048beff: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0048bf00: ret  */ FN_RET(0x0048be14); r_esp += 4; return;
L_0048bf01:; BB(0x0048bf01);
    /* 0048bf01: mov dword ptr [edi + 0x394], eax */ W32((u32)(r_edi+0x394u), r_eax);
    /* 0048bf07: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0048bf0a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0048bf0b: ret  */ FN_RET(0x0048be14); r_esp += 4; return;
}

void f_0048bf0c(void) /* sub_48BF0C */
{
    FN_ENTER(0x0048bf0c);
    /* 0048bf0c: mov eax, dword ptr [ecx + 0x394] */ r_eax = R32((u32)(r_ecx+0x394u));
    /* 0048bf12: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0048bf15: cmp eax, dword ptr [ecx + 0x3a8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x3a8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0048bf1b: jle 0x48bf32 */ if ((fZ||fS!=fO)) goto L_0048bf32;
L_0048bf1d:; BB(0x0048bf1d);
    /* 0048bf1d: mov dword ptr [ecx + 0x394], 0 */ W32((u32)(r_ecx+0x394u), 0x0u);
    /* 0048bf27: mov dword ptr [ecx + 0x388], 2 */ W32((u32)(r_ecx+0x388u), 0x2u);
    /* 0048bf31: ret  */ FN_RET(0x0048bf0c); r_esp += 4; return;
L_0048bf32:; BB(0x0048bf32);
    /* 0048bf32: mov dword ptr [ecx + 0x394], eax */ W32((u32)(r_ecx+0x394u), r_eax);
    /* 0048bf38: ret  */ FN_RET(0x0048bf0c); r_esp += 4; return;
}

void f_0048bf3c(void) /* sub_48BF3C */
{
    FN_ENTER(0x0048bf3c);
    /* 0048bf3c: movzx eax, byte ptr [0xa46e10] */ r_eax = (u32)R8((u32)(0xa46e10u));
    /* 0048bf43: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0048bf45: jne 0x48bf5b */ if (!fZ) goto L_0048bf5b;
L_0048bf47:; BB(0x0048bf47);
    /* 0048bf47: mov dword ptr [0xa46e14], 0x3f31c71c */ W32((u32)(0xa46e14u), 0x3f31c71cu);
    /* 0048bf51: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0048bf56: mov byte ptr [0xa46e10], al */ W8((u32)(0xa46e10u), (u8)r_eax);
L_0048bf5b:; BB(0x0048bf5b);
    /* 0048bf5b: fld dword ptr [0xa46e4c] */ FPUSH(R_F32((u32)(0xa46e4cu)));
    /* 0048bf61: fadd dword ptr [ecx + 0x3a4] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x3a4u));
    /* 0048bf67: fld dword ptr [0x9014cc] */ FPUSH(R_F32((u32)(0x9014ccu)));
    /* 0048bf6d: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0048bf6f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0048bf71: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0048bf72: ja 0x48bf7e */ if ((!fC&&!fZ)) goto L_0048bf7e;
L_0048bf74:; BB(0x0048bf74);
    /* 0048bf74: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0048bf76: fstp dword ptr [ecx + 0x3a4] */ W_F32((u32)(r_ecx+0x3a4u), ST(0)); FPOP();
    /* 0048bf7c: jmp 0x48bf86 */ goto L_0048bf86;
L_0048bf7e:; BB(0x0048bf7e);
    /* 0048bf7e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0048bf80: fstp dword ptr [ecx + 0x3a4] */ W_F32((u32)(r_ecx+0x3a4u), ST(0)); FPOP();
L_0048bf86:; BB(0x0048bf86);
    /* 0048bf86: fld dword ptr [0xa46e14] */ FPUSH(R_F32((u32)(0xa46e14u)));
    /* 0048bf8c: fadd dword ptr [ecx + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x3cu));
    /* 0048bf8f: fcom dword ptr [0x9014c8] */ fx_compare(ST(0), R_F32((u32)(0x9014c8u))); 
    /* 0048bf95: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0048bf97: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0048bf98: jb 0x48bfba */ if (fC) goto L_0048bfba;
L_0048bf9a:; BB(0x0048bf9a);
    /* 0048bf9a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0048bf9c: mov dword ptr [ecx + 0x394], 0 */ W32((u32)(r_ecx+0x394u), 0x0u);
    /* 0048bfa6: mov eax, 0x42960000 */ r_eax = 0x42960000u;
    /* 0048bfab: mov dword ptr [ecx + 0x3c], eax */ W32((u32)(r_ecx+0x3cu), r_eax);
    /* 0048bfae: mov dword ptr [ecx + 0x388], 3 */ W32((u32)(r_ecx+0x388u), 0x3u);
    /* 0048bfb8: jmp 0x48bfbd */ goto L_0048bfbd;
L_0048bfba:; BB(0x0048bfba);
    /* 0048bfba: fstp dword ptr [ecx + 0x3c] */ W_F32((u32)(r_ecx+0x3cu), ST(0)); FPOP();
L_0048bfbd:; BB(0x0048bfbd);
    /* 0048bfbd: lea edx, [ecx + 0x38] */ r_edx = (u32)(r_ecx+0x38u);
    /* 0048bfc0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0048bfc2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048bfc3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048bfc4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048bfc5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048bfc6: push 0x3d0 */ { u32 v = 0x3d0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048bfcb: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x48bfd0u); f_008144b0();
    /* 0048bfd0: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0048bfd3: ret  */ FN_RET(0x0048bf3c); r_esp += 4; return;
}

void f_0048bfd4(void) /* sub_48BFD4 */
{
    FN_ENTER(0x0048bfd4);
    /* 0048bfd4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048bfd5: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048bfd8: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0048bfda: movzx eax, byte ptr [0xa46e18] */ r_eax = (u32)R8((u32)(0xa46e18u));
    /* 0048bfe1: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0048bfe3: jne 0x48bff9 */ if (!fZ) goto L_0048bff9;
L_0048bfe5:; BB(0x0048bfe5);
    /* 0048bfe5: mov dword ptr [0xa46e1c], 0x42f00000 */ W32((u32)(0xa46e1cu), 0x42f00000u);
    /* 0048bfef: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0048bff4: mov byte ptr [0xa46e18], al */ W8((u32)(0xa46e18u), (u8)r_eax);
L_0048bff9:; BB(0x0048bff9);
    /* 0048bff9: mov eax, dword ptr [ebp + 0x3ac] */ r_eax = R32((u32)(r_ebp+0x3acu));
    /* 0048bfff: sub eax, dword ptr [ebp + 0x394] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x394u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0048c005: mov edx, dword ptr [ebp + 0x38] */ r_edx = R32((u32)(r_ebp+0x38u));
    /* 0048c008: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0048c00b: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0048c00f: fild dword ptr [esp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xcu)));
    /* 0048c013: mov eax, dword ptr [ebp + 0x40] */ r_eax = R32((u32)(r_ebp+0x40u));
    /* 0048c016: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 0048c01a: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 0048c022: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0048c025: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0048c029: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0048c02c: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x48c031u); f_0083173c();
    /* 0048c031: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 0048c035: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 0048c039: fcomp dword ptr [0x9014c0] */ fx_compare(ST(0), R_F32((u32)(0x9014c0u))); FPOP();
    /* 0048c03f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0048c041: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0048c042: jbe 0x48c04e */ if ((fC||fZ)) goto L_0048c04e;
L_0048c044:; BB(0x0048c044);
    /* 0048c044: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0048c047: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x48c04cu); f_0082df08();
    /* 0048c04c: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0048c04e:; BB(0x0048c04e);
    /* 0048c04e: fld dword ptr [0xa46e1c] */ FPUSH(R_F32((u32)(0xa46e1cu)));
    /* 0048c054: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 0048c058: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 0048c05a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0048c05c: fdiv dword ptr [esp + 0x14] */ ST(0) = ST(0) / R_F32((u32)(r_esp+0x14u));
    /* 0048c060: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0048c062: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0048c065: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0048c067: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0048c069: fmul dword ptr [esp + 8] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x8u));
    /* 0048c06d: fld dword ptr [0x9014bc] */ FPUSH(R_F32((u32)(0x9014bcu)));
    /* 0048c073: fmul dword ptr [0xa46e4c] */ ST(0) = ST(0) * R_F32((u32)(0xa46e4cu));
    /* 0048c079: fadd dword ptr [ebp + 0x3a4] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x3a4u));
    /* 0048c07f: fld dword ptr [0xa46e50] */ FPUSH(R_F32((u32)(0xa46e50u)));
    /* 0048c085: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0048c087: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0048c089: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0048c08b: fstp dword ptr [ebp + 0x38] */ W_F32((u32)(r_ebp+0x38u), ST(0)); FPOP();
    /* 0048c08e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0048c090: fstp dword ptr [ebp + 0x40] */ W_F32((u32)(r_ebp+0x40u), ST(0)); FPOP();
    /* 0048c093: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0048c094: mov eax, dword ptr [ebp + 0x394] */ r_eax = R32((u32)(r_ebp+0x394u));
    /* 0048c09a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0048c09c: ja 0x48c0a0 */ if ((!fC&&!fZ)) goto L_0048c0a0;
L_0048c09e:; BB(0x0048c09e);
    /* 0048c09e: fst st(1) */ ST(1) = ST(0);
L_0048c0a0:; BB(0x0048c0a0);
    /* 0048c0a0: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0048c0a2: fstp dword ptr [ebp + 0x3a4] */ W_F32((u32)(r_ebp+0x3a4u), ST(0)); FPOP();
    /* 0048c0a8: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0048c0ab: cmp eax, dword ptr [ebp + 0x3ac] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x3acu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048c0b1: jle 0x48c0cc */ if ((fZ||fS!=fO)) goto L_0048c0cc;
L_0048c0b3:; BB(0x0048c0b3);
    /* 0048c0b3: mov dword ptr [ebp + 0x394], 0 */ W32((u32)(r_ebp+0x394u), 0x0u);
    /* 0048c0bd: mov dword ptr [ebp + 0x388], 4 */ W32((u32)(r_ebp+0x388u), 0x4u);
    /* 0048c0c7: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0048c0ca: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048c0cb: ret  */ FN_RET(0x0048bfd4); r_esp += 4; return;
L_0048c0cc:; BB(0x0048c0cc);
    /* 0048c0cc: mov dword ptr [ebp + 0x394], eax */ W32((u32)(r_ebp+0x394u), r_eax);
    /* 0048c0d2: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0048c0d5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048c0d6: ret  */ FN_RET(0x0048bfd4); r_esp += 4; return;
}

