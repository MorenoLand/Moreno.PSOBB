#include "protos.h"

void f_00628088(void) /* sub_628088 */
{
    FN_ENTER(0x00628088);
    /* 00628088: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00628089: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0062808b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0062808d: call 0x6280ac */ r_esp -= 4; W32(r_esp, 0x628092u); f_006280ac();
    /* 00628092: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00628096: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00628098: jne 0x62809e */ if (!fZ) goto L_0062809e;
L_0062809a:; BB(0x0062809a);
    /* 0062809a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062809b: ret 4 */ FN_RET(0x00628088); r_esp += 8; return;
L_0062809e:; BB(0x0062809e);
    /* 0062809e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0062809f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6280a4u); f_005c2f74();
    /* 006280a4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006280a5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006280a6: ret 4 */ FN_RET(0x00628088); r_esp += 8; return;
}

void f_006280ac(void) /* sub_6280AC */
{
    FN_ENTER(0x006280ac);
    /* 006280ac: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006280ad: mov ebp, esp */ r_ebp = r_esp;
    /* 006280af: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006280b1: push 0x8e2d28 */ { u32 v = 0x8e2d28u; r_esp -= 4; W32(r_esp, v); }
    /* 006280b6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006280bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006280bd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006280c4: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006280c7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006280ca: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006280cd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006280d0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006280d3: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006280d6: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006280dd: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006280e0: mov dword ptr [eax], 0xb293a0 */ W32((u32)(r_eax), 0xb293a0u);
    /* 006280e6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006280e7: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x6280ecu); f_007b4e84();
    /* 006280ec: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006280ed: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006280f0: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x6280f5u); f_007b9c8c();
    /* 006280f5: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006280fc: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006280ff: call 0x6131f4 */ r_esp -= 4; W32(r_esp, 0x628104u); f_006131f4();
    /* 00628104: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00628107: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0062810e: mov esp, ebp */ r_esp = r_ebp;
    /* 00628110: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00628111: ret  */ FN_RET(0x006280ac); r_esp += 4; return;
}

void f_00628114(void) /* sub_628114 */
{
    FN_ENTER(0x00628114);
    /* 00628114: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00628115: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00628116: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00628118: push dword ptr [ebp + 0xc4] */ { u32 v = R32((u32)(r_ebp+0xc4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0062811e: push dword ptr [ebp + 0xc0] */ { u32 v = R32((u32)(r_ebp+0xc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00628124: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00628127: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00628129: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x62812cu); call_ind(t); }
    /* 0062812c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0062812e: je 0x62829f */ if (fZ) goto L_0062829f;
L_00628134:; BB(0x00628134);
    /* 00628134: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x628139u); f_0082d7b0();
    /* 00628139: lea ecx, [ebp + 0x38] */ r_ecx = (u32)(r_ebp+0x38u);
    /* 0062813c: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x628141u); f_0082d838();
    /* 00628141: mov edx, dword ptr [ebp + 0x60] */ r_edx = R32((u32)(r_ebp+0x60u));
    /* 00628144: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00628146: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x62814bu); f_0082d8bc();
    /* 0062814b: mov ecx, dword ptr [ebp + 0x24] */ r_ecx = R32((u32)(r_ebp+0x24u));
    /* 0062814e: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x628153u); f_00829cc8();
    /* 00628153: mov esi, dword ptr [ebp + 0x34] */ r_esi = R32((u32)(r_ebp+0x34u));
    /* 00628156: lea ecx, [esi + 8] */ r_ecx = (u32)(r_esi+0x8u);
    /* 00628159: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x62815eu); f_0082d838();
    /* 0062815e: push dword ptr [esi + 4] */ { u32 v = R32((u32)(r_esi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00628161: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x628166u); f_008321d8();
    /* 00628166: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00628167: fld dword ptr [0x931fd4] */ FPUSH(R_F32((u32)(0x931fd4u)));
    /* 0062816d: fcomp dword ptr [ebp + 0x6c] */ fx_compare(ST(0), R_F32((u32)(r_ebp+0x6cu))); FPOP();
    /* 00628170: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00628172: mov esi, dword ptr [esi + 0x2c] */ r_esi = R32((u32)(r_esi+0x2cu));
    /* 00628175: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00628176: jae 0x628189 */ if (!fC) goto L_00628189;
L_00628178:; BB(0x00628178);
    /* 00628178: lea ecx, [esi + 8] */ r_ecx = (u32)(r_esi+0x8u);
    /* 0062817b: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x628180u); f_0082d838();
    /* 00628180: push dword ptr [esi + 4] */ { u32 v = R32((u32)(r_esi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00628183: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x628188u); f_008321d8();
    /* 00628188: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00628189:; BB(0x00628189);
    /* 00628189: mov esi, dword ptr [esi + 0x30] */ r_esi = R32((u32)(r_esi+0x30u));
    /* 0062818c: lea ecx, [esi + 8] */ r_ecx = (u32)(r_esi+0x8u);
    /* 0062818f: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x628194u); f_0082d838();
    /* 00628194: push dword ptr [esi + 4] */ { u32 v = R32((u32)(r_esi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00628197: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x62819cu); f_008321d8();
    /* 0062819c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062819d: mov esi, dword ptr [esi + 0x30] */ r_esi = R32((u32)(r_esi+0x30u));
    /* 006281a0: lea ecx, [esi + 8] */ r_ecx = (u32)(r_esi+0x8u);
    /* 006281a3: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x6281a8u); f_0082d838();
    /* 006281a8: push dword ptr [esi + 4] */ { u32 v = R32((u32)(r_esi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006281ab: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x6281b0u); f_008321d8();
    /* 006281b0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006281b1: mov esi, dword ptr [esi + 0x2c] */ r_esi = R32((u32)(r_esi+0x2cu));
    /* 006281b4: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x6281b9u); f_0082d7b0();
    /* 006281b9: lea ecx, [esi + 8] */ r_ecx = (u32)(r_esi+0x8u);
    /* 006281bc: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x6281c1u); f_0082d838();
    /* 006281c1: mov edx, dword ptr [esi + 0x1c] */ r_edx = R32((u32)(r_esi+0x1cu));
    /* 006281c4: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006281c6: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x6281cbu); f_00830c04();
    /* 006281cb: mov edx, dword ptr [esi + 0x14] */ r_edx = R32((u32)(r_esi+0x14u));
    /* 006281ce: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006281d0: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x6281d5u); f_0082e9e4();
    /* 006281d5: mov edx, dword ptr [ebp + 0xc8] */ r_edx = R32((u32)(r_ebp+0xc8u));
    /* 006281db: add edx, dword ptr [esi + 0x18] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esi+0x18u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006281de: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006281e0: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x6281e5u); f_0082d8bc();
    /* 006281e5: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x6281eau); f_0082dbac();
    /* 006281ea: push dword ptr [esi + 4] */ { u32 v = R32((u32)(r_esi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006281ed: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x6281f2u); f_008321d8();
    /* 006281f2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006281f3: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x6281f8u); f_0082dab0();
    /* 006281f8: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x6281fdu); f_0082da80();
    /* 006281fd: mov esi, dword ptr [ebp + 0x34] */ r_esi = R32((u32)(r_ebp+0x34u));
    /* 00628200: mov eax, dword ptr [esi + 0x2c] */ r_eax = R32((u32)(r_esi+0x2cu));
    /* 00628203: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 00628206: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 00628209: mov esi, dword ptr [eax + 0x30] */ r_esi = R32((u32)(r_eax+0x30u));
    /* 0062820c: lea ecx, [esi + 8] */ r_ecx = (u32)(r_esi+0x8u);
    /* 0062820f: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x628214u); f_0082d838();
    /* 00628214: push dword ptr [esi + 4] */ { u32 v = R32((u32)(r_esi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00628217: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x62821cu); f_008321d8();
    /* 0062821c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062821d: mov esi, dword ptr [esi + 0x2c] */ r_esi = R32((u32)(r_esi+0x2cu));
    /* 00628220: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x628225u); f_0082d7b0();
    /* 00628225: lea ecx, [esi + 8] */ r_ecx = (u32)(r_esi+0x8u);
    /* 00628228: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x62822du); f_0082d838();
    /* 0062822d: mov edx, dword ptr [esi + 0x1c] */ r_edx = R32((u32)(r_esi+0x1cu));
    /* 00628230: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00628232: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x628237u); f_00830c04();
    /* 00628237: mov edx, dword ptr [esi + 0x14] */ r_edx = R32((u32)(r_esi+0x14u));
    /* 0062823a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0062823c: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x628241u); f_0082e9e4();
    /* 00628241: mov edx, dword ptr [ebp + 0xc8] */ r_edx = R32((u32)(r_ebp+0xc8u));
    /* 00628247: add edx, dword ptr [esi + 0x18] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esi+0x18u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0062824a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0062824c: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x628251u); f_0082d8bc();
    /* 00628251: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x628256u); f_0082dbac();
    /* 00628256: push dword ptr [esi + 4] */ { u32 v = R32((u32)(r_esi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00628259: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x62825eu); f_008321d8();
    /* 0062825e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062825f: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x628264u); f_0082dab0();
    /* 00628264: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x628269u); f_0082da80();
    /* 00628269: fld dword ptr [0x931fd4] */ FPUSH(R_F32((u32)(0x931fd4u)));
    /* 0062826f: mov edx, dword ptr [ebp + 0x34] */ r_edx = R32((u32)(r_ebp+0x34u));
    /* 00628272: mov esi, dword ptr [edx + 0x2c] */ r_esi = R32((u32)(r_edx+0x2cu));
    /* 00628275: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 00628278: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 0062827b: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 0062827e: mov esi, dword ptr [eax + 0x30] */ r_esi = R32((u32)(r_eax+0x30u));
    /* 00628281: fcomp dword ptr [ebp + 0x68] */ fx_compare(ST(0), R_F32((u32)(r_ebp+0x68u))); FPOP();
    /* 00628284: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00628286: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00628287: jae 0x62829a */ if (!fC) goto L_0062829a;
L_00628289:; BB(0x00628289);
    /* 00628289: lea ecx, [esi + 8] */ r_ecx = (u32)(r_esi+0x8u);
    /* 0062828c: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x628291u); f_0082d838();
    /* 00628291: push dword ptr [esi + 4] */ { u32 v = R32((u32)(r_esi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00628294: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x628299u); f_008321d8();
    /* 00628299: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0062829a:; BB(0x0062829a);
    /* 0062829a: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x62829fu); f_0082da80();
L_0062829f:; BB(0x0062829f);
    /* 0062829f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006282a0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006282a1: ret  */ FN_RET(0x00628114); r_esp += 4; return;
}

void f_006282a4(void) /* sub_6282A4 */
{
    FN_ENTER(0x006282a4);
    /* 006282a4: mov eax, dword ptr [ecx + 0xc8] */ r_eax = R32((u32)(r_ecx+0xc8u));
    /* 006282aa: add eax, 0x888 */ {  u32 a = r_eax; u32 b = 0x888u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006282af: mov dword ptr [ecx + 0xc8], eax */ W32((u32)(r_ecx+0xc8u), r_eax);
    /* 006282b5: ret  */ FN_RET(0x006282a4); r_esp += 4; return;
}

void f_006282b8(void) /* sub_6282B8 */
{
    FN_ENTER(0x006282b8);
    /* 006282b8: mov ecx, dword ptr [0xa8ed94] */ r_ecx = R32((u32)(0xa8ed94u));
    /* 006282be: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006282c0: je 0x6282d5 */ if (fZ) goto L_006282d5;
L_006282c2:; BB(0x006282c2);
    /* 006282c2: je 0x6282cb */ if (fZ) goto L_006282cb;
L_006282c4:; BB(0x006282c4);
    /* 006282c4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006282c6: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x6282cbu); f_004066a8();
L_006282cb:; BB(0x006282cb);
    /* 006282cb: mov dword ptr [0xa8ed94], 0 */ W32((u32)(0xa8ed94u), 0x0u);
L_006282d5:; BB(0x006282d5);
    /* 006282d5: ret  */ FN_RET(0x006282b8); r_esp += 4; return;
}

void f_006282d8(void)
{
    FN_ENTER(0x006282d8);
    /* 006282d8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006282d9: mov ebp, esp */ r_ebp = r_esp;
    /* 006282db: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006282dd: push 0x8e2d50 */ { u32 v = 0x8e2d50u; r_esp -= 4; W32(r_esp, v); }
    /* 006282e2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006282e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006282e9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006282f0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006282f3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006282f6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006282f9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006282fc: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006282ff: push 0xcc */ { u32 v = 0xccu; r_esp -= 4; W32(r_esp, v); }
    /* 00628304: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0062830b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x628310u); f_005caba4();
    /* 00628310: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00628311: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00628314: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00628316: je 0x628349 */ if (fZ) goto L_00628349;
L_00628318:; BB(0x00628318);
    /* 00628318: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0062831f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00628326: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00628329: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062832c: call 0x628350 */ r_esp -= 4; W32(r_esp, 0x628331u); f_00628350();
    /* 00628331: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00628334: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0062833b:; BB(0x0062833b);
    /* 0062833b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062833e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00628345: mov esp, ebp */ r_esp = r_ebp;
    /* 00628347: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00628348: ret  */ FN_RET(0x006282d8); r_esp += 4; return;
L_00628349:; BB(0x00628349);
    /* 00628349: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0062834b: jmp 0x62833b */ goto L_0062833b;
}

void f_00628350(void) /* sub_628350 */
{
    FN_ENTER(0x00628350);
    /* 00628350: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00628351: mov ebp, esp */ r_ebp = r_esp;
    /* 00628353: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00628355: push 0x8e2d6c */ { u32 v = 0x8e2d6cu; r_esp -= 4; W32(r_esp, v); }
    /* 0062835a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00628360: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00628361: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00628368: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062836b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0062836e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00628371: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00628374: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00628377: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0062837a: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 00628380: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00628383: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00628386: call 0x6132e4 */ r_esp -= 4; W32(r_esp, 0x62838bu); f_006132e4();
    /* 0062838b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00628392: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00628395: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00628398: mov dword ptr [ecx], 0xb293a0 */ W32((u32)(r_ecx), 0xb293a0u);
    /* 0062839e: mov eax, dword ptr [0x9c5c5c] */ r_eax = R32((u32)(0x9c5c5cu));
    /* 006283a3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006283a4: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 006283a7: call dword ptr [0xb293b4] */ { u32 t = R32((u32)(0xb293b4u)); r_esp -= 4; W32(r_esp, 0x6283adu); call_ind(t); }
    /* 006283ad: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006283b0: mov ebx, dword ptr [0xa8ed94] */ r_ebx = R32((u32)(0xa8ed94u));
    /* 006283b6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006283b8: mov eax, dword ptr [ebx + 0x42c] */ r_eax = R32((u32)(r_ebx+0x42cu));
    /* 006283be: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 006283c1: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 006283c4: push 0x9c5c60 */ { u32 v = 0x9c5c60u; r_esp -= 4; W32(r_esp, v); }
    /* 006283c9: or eax, 0x40000000 */ {  u32 a = r_eax; u32 b = 0x40000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006283ce: mov dword ptr [ecx + 0x34], edx */ W32((u32)(r_ecx+0x34u), r_edx);
    /* 006283d1: mov esi, dword ptr [ebx + 0x42c] */ r_esi = R32((u32)(r_ebx+0x42cu));
    /* 006283d7: mov edi, dword ptr [esi + 0xc] */ r_edi = R32((u32)(r_esi+0xcu));
    /* 006283da: mov dword ptr [ecx + 0x24], edi */ W32((u32)(r_ecx+0x24u), r_edi);
    /* 006283dd: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 006283e0: mov dword ptr [ecx + 0xc0], 0x43fa0000 */ W32((u32)(r_ecx+0xc0u), 0x43fa0000u);
    /* 006283ea: mov dword ptr [ecx + 0xc4], 0x42480000 */ W32((u32)(r_ecx+0xc4u), 0x42480000u);
    /* 006283f4: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x6283f9u); f_007b9a88();
    /* 006283f9: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006283fc: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x628401u); f_007b999c();
    /* 00628401: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00628402: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00628405: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x62840au); f_007b4f54();
    /* 0062840a: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0062840d: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00628410: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00628413: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00628416: mov dword ptr [eax + 0xc8], 0 */ W32((u32)(r_eax+0xc8u), 0x0u);
    /* 00628420: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00628423: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0062842a: mov esp, ebp */ r_esp = r_ebp;
    /* 0062842c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062842d: ret 4 */ FN_RET(0x00628350); r_esp += 8; return;
}

void f_00628430(void) /* sub_628430 */
{
    FN_ENTER(0x00628430);
    /* 00628430: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00628431: mov ebp, esp */ r_ebp = r_esp;
    /* 00628433: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00628435: push 0x8e2d94 */ { u32 v = 0x8e2d94u; r_esp -= 4; W32(r_esp, v); }
    /* 0062843a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00628440: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00628441: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00628448: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062844b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0062844e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00628451: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00628454: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00628457: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 0062845c: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00628463: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x628468u); f_008581c5();
    /* 00628468: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00628469: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0062846c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062846e: je 0x6284af */ if (fZ) goto L_006284af;
L_00628470:; BB(0x00628470);
    /* 00628470: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00628477: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0062847e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00628481: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00628483: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00628484: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00628485: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00628486: push 0x9c5c4c */ { u32 v = 0x9c5c4cu; r_esp -= 4; W32(r_esp, v); }
    /* 0062848b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0062848d: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x628492u); f_005b7a84();
    /* 00628492: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00628495: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0062849c:; BB(0x0062849c);
    /* 0062849c: mov dword ptr [0xa8ed94], eax */ W32((u32)(0xa8ed94u), r_eax);
    /* 006284a1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006284a4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006284ab: mov esp, ebp */ r_esp = r_ebp;
    /* 006284ad: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006284ae: ret  */ FN_RET(0x00628430); r_esp += 4; return;
L_006284af:; BB(0x006284af);
    /* 006284af: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006284b1: jmp 0x62849c */ goto L_0062849c;
}

void f_006284b4(void) /* sub_6284B4 */
{
    FN_ENTER(0x006284b4);
    /* 006284b4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006284b5: mov ebp, esp */ r_ebp = r_esp;
    /* 006284b7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006284b9: push 0x8e2db0 */ { u32 v = 0x8e2db0u; r_esp -= 4; W32(r_esp, v); }
    /* 006284be: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006284c4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006284c5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006284cc: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006284cf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006284d2: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 006284d5: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 006284d8: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 006284db: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 006284de: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 006284e1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006284e8: mov eax, ecx */ r_eax = r_ecx;
    /* 006284ea: mov dword ptr [eax], 0xb29458 */ W32((u32)(r_eax), 0xb29458u);
    /* 006284f0: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_006284f2:; BB(0x006284f2);
    /* 006284f2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006284f5: mov eax, dword ptr [eax + ebx*4 + 0xec] */ r_eax = R32((u32)(r_eax+r_ebx*4+0xecu));
    /* 006284fc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006284fe: je 0x628507 */ if (fZ) goto L_00628507;
L_00628500:; BB(0x00628500);
    /* 00628500: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00628501: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x628506u); f_005cdcc0();
    /* 00628506: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00628507:; BB(0x00628507);
    /* 00628507: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0062850a: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062850d: jl 0x6284f2 */ if ((fS!=fO)) goto L_006284f2;
L_0062850f:; BB(0x0062850f);
    /* 0062850f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00628512: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00628513: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x628518u); f_007b4e84();
    /* 00628518: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00628519: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0062851c: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x628521u); f_007b9c8c();
    /* 00628521: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00628528: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0062852b: call 0x6131f4 */ r_esp -= 4; W32(r_esp, 0x628530u); f_006131f4();
    /* 00628530: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00628533: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00628535: jne 0x628550 */ if (!fZ) goto L_00628550;
L_00628537:; BB(0x00628537);
    /* 00628537: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062853a: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0062853d: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00628540: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00628543: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0062854a: mov esp, ebp */ r_esp = r_ebp;
    /* 0062854c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062854d: ret 4 */ FN_RET(0x006284b4); r_esp += 8; return;
L_00628550:; BB(0x00628550);
    /* 00628550: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00628553: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00628554: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x628559u); f_005c2f74();
    /* 00628559: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062855a: jmp 0x628537 */ goto L_00628537;
}

void f_0062855c(void) /* sub_62855C */
{
    FN_ENTER(0x0062855c);
    /* 0062855c: add ecx, 0xe0 */ {  u32 a = r_ecx; u32 b = 0xe0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00628562: mov eax, ecx */ r_eax = r_ecx;
    /* 00628564: ret  */ FN_RET(0x0062855c); r_esp += 4; return;
}

void f_00628568(void) /* sub_628568 */
{
    FN_ENTER(0x00628568);
    /* 00628568: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x62856du); f_006dc358();
    /* 0062856d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00628570: je 0x62857f */ if (fZ) goto L_0062857f;
L_00628572:; BB(0x00628572);
    /* 00628572: movzx eax, word ptr [esp + 4] */ r_eax = (u32)R16((u32)(r_esp+0x4u));
    /* 00628577: cmp eax, dword ptr [0xa9c4f4] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa9c4f4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0062857d: jne 0x628587 */ if (!fZ) goto L_00628587;
L_0062857f:; BB(0x0062857f);
    /* 0062857f: mov eax, 1 */ r_eax = 0x1u;
    /* 00628584: ret 4 */ FN_RET(0x00628568); r_esp += 8; return;
L_00628587:; BB(0x00628587);
    /* 00628587: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00628589: ret 4 */ FN_RET(0x00628568); r_esp += 8; return;
}

void f_0062858c(void) /* sub_62858C */
{
    FN_ENTER(0x0062858c);
    /* 0062858c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062858d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0062858e: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00628590: push dword ptr [ebx + 0xc4] */ { u32 v = R32((u32)(r_ebx+0xc4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00628596: push dword ptr [ebx + 0xc0] */ { u32 v = R32((u32)(r_ebx+0xc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0062859c: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0062859e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006285a0: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x6285a3u); call_ind(t); }
    /* 006285a3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006285a5: je 0x628657 */ if (fZ) goto L_00628657;
L_006285ab:; BB(0x006285ab);
    /* 006285ab: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x6285b0u); f_0082d7b0();
    /* 006285b0: lea ecx, [ebx + 0x38] */ r_ecx = (u32)(r_ebx+0x38u);
    /* 006285b3: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x6285b8u); f_0082d838();
    /* 006285b8: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 006285bb: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006285bd: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x6285c2u); f_0082d8bc();
    /* 006285c2: mov ecx, dword ptr [ebx + 0x24] */ r_ecx = R32((u32)(r_ebx+0x24u));
    /* 006285c5: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x6285cau); f_00829cc8();
    /* 006285ca: mov ebp, dword ptr [ebx + 0x34] */ r_ebp = R32((u32)(r_ebx+0x34u));
    /* 006285cd: lea ecx, [ebp + 8] */ r_ecx = (u32)(r_ebp+0x8u);
    /* 006285d0: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x6285d5u); f_0082d838();
    /* 006285d5: push dword ptr [ebp + 4] */ { u32 v = R32((u32)(r_ebp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006285d8: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x6285ddu); f_008321d8();
    /* 006285dd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006285de: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x6285e3u); f_0082d7b0();
    /* 006285e3: mov ebp, dword ptr [ebp + 0x2c] */ r_ebp = R32((u32)(r_ebp+0x2cu));
    /* 006285e6: lea ecx, [ebp + 8] */ r_ecx = (u32)(r_ebp+0x8u);
    /* 006285e9: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x6285eeu); f_0082d838();
    /* 006285ee: mov edx, dword ptr [ebx + 0xcc] */ r_edx = R32((u32)(r_ebx+0xccu));
    /* 006285f4: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006285f6: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x6285fbu); f_0082d8bc();
    /* 006285fb: push dword ptr [ebp + 4] */ { u32 v = R32((u32)(r_ebp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006285fe: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x628603u); f_008321d8();
    /* 00628603: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00628604: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x628609u); f_0082da80();
    /* 00628609: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x62860eu); f_0082d7b0();
    /* 0062860e: mov ebp, dword ptr [ebp + 0x30] */ r_ebp = R32((u32)(r_ebp+0x30u));
    /* 00628611: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00628614: fld dword ptr [ebp + 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xcu)));
    /* 00628617: fsub dword ptr [ebx + 0xd0] */ ST(0) = ST(0) - R_F32((u32)(r_ebx+0xd0u));
    /* 0062861d: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00628620: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00628623: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00628627: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0062862a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0062862c: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00628630: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x628635u); f_00830b74();
    /* 00628635: mov edx, dword ptr [ebx + 0xcc] */ r_edx = R32((u32)(r_ebx+0xccu));
    /* 0062863b: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0062863d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0062863f: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x628644u); f_0082d8bc();
    /* 00628644: push dword ptr [ebp + 4] */ { u32 v = R32((u32)(r_ebp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00628647: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x62864cu); f_008321d8();
    /* 0062864c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062864d: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x628652u); f_0082da80();
    /* 00628652: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x628657u); f_0082da80();
L_00628657:; BB(0x00628657);
    /* 00628657: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00628658: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00628659: ret  */ FN_RET(0x0062858c); r_esp += 4; return;
}

void f_0062859a(void)
{
    FN_ENTER(0x0062859a);
    /* 0062859a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0062859c: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0062859e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006285a0: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x6285a3u); call_ind(t); }
    /* 006285a3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006285a5: je 0x628657 */ if (fZ) goto L_00628657;
L_006285ab:; BB(0x006285ab);
    /* 006285ab: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x6285b0u); f_0082d7b0();
    /* 006285b0: lea ecx, [ebx + 0x38] */ r_ecx = (u32)(r_ebx+0x38u);
    /* 006285b3: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x6285b8u); f_0082d838();
    /* 006285b8: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 006285bb: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006285bd: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x6285c2u); f_0082d8bc();
    /* 006285c2: mov ecx, dword ptr [ebx + 0x24] */ r_ecx = R32((u32)(r_ebx+0x24u));
    /* 006285c5: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x6285cau); f_00829cc8();
    /* 006285ca: mov ebp, dword ptr [ebx + 0x34] */ r_ebp = R32((u32)(r_ebx+0x34u));
    /* 006285cd: lea ecx, [ebp + 8] */ r_ecx = (u32)(r_ebp+0x8u);
    /* 006285d0: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x6285d5u); f_0082d838();
    /* 006285d5: push dword ptr [ebp + 4] */ { u32 v = R32((u32)(r_ebp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006285d8: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x6285ddu); f_008321d8();
    /* 006285dd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006285de: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x6285e3u); f_0082d7b0();
    /* 006285e3: mov ebp, dword ptr [ebp + 0x2c] */ r_ebp = R32((u32)(r_ebp+0x2cu));
    /* 006285e6: lea ecx, [ebp + 8] */ r_ecx = (u32)(r_ebp+0x8u);
    /* 006285e9: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x6285eeu); f_0082d838();
    /* 006285ee: mov edx, dword ptr [ebx + 0xcc] */ r_edx = R32((u32)(r_ebx+0xccu));
    /* 006285f4: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006285f6: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x6285fbu); f_0082d8bc();
    /* 006285fb: push dword ptr [ebp + 4] */ { u32 v = R32((u32)(r_ebp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006285fe: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x628603u); f_008321d8();
    /* 00628603: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00628604: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x628609u); f_0082da80();
    /* 00628609: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x62860eu); f_0082d7b0();
    /* 0062860e: mov ebp, dword ptr [ebp + 0x30] */ r_ebp = R32((u32)(r_ebp+0x30u));
    /* 00628611: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00628614: fld dword ptr [ebp + 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xcu)));
    /* 00628617: fsub dword ptr [ebx + 0xd0] */ ST(0) = ST(0) - R_F32((u32)(r_ebx+0xd0u));
    /* 0062861d: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00628620: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00628623: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00628627: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0062862a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0062862c: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00628630: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x628635u); f_00830b74();
    /* 00628635: mov edx, dword ptr [ebx + 0xcc] */ r_edx = R32((u32)(r_ebx+0xccu));
    /* 0062863b: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0062863d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0062863f: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x628644u); f_0082d8bc();
    /* 00628644: push dword ptr [ebp + 4] */ { u32 v = R32((u32)(r_ebp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00628647: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x62864cu); f_008321d8();
    /* 0062864c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062864d: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x628652u); f_0082da80();
    /* 00628652: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x628657u); f_0082da80();
L_00628657:; BB(0x00628657);
    /* 00628657: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00628658: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00628659: ret  */ FN_RET(0x0062859a); r_esp += 4; return;
}

void f_0062865c(void) /* sub_62865C */
{
    FN_ENTER(0x0062865c);
    /* 0062865c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0062865d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0062865e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0062865f: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00628662: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00628664: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x628669u); f_004f7c84();
    /* 00628669: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062866c: je 0x628865 */ if (fZ) goto L_00628865;
L_00628672:; BB(0x00628672);
    /* 00628672: mov eax, dword ptr [ebx + 0xac] */ r_eax = R32((u32)(r_ebx+0xacu));
    /* 00628678: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062867a: je 0x6286a2 */ if (fZ) goto L_006286a2;
L_0062867c:; BB(0x0062867c);
    /* 0062867c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062867f: jne 0x62868d */ if (!fZ) goto L_0062868d;
L_00628681:; BB(0x00628681);
    /* 00628681: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00628683: call 0x6289c4 */ r_esp -= 4; W32(r_esp, 0x628688u); f_006289c4();
    /* 00628688: jmp 0x628865 */ goto L_00628865;
L_0062868d:; BB(0x0062868d);
    /* 0062868d: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00628690: jne 0x628865 */ if (!fZ) goto L_00628865;
L_00628696:; BB(0x00628696);
    /* 00628696: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00628698: call 0x6288b4 */ r_esp -= 4; W32(r_esp, 0x62869du); f_006288b4();
    /* 0062869d: jmp 0x628865 */ goto L_00628865;
L_006286a2:; BB(0x006286a2);
    /* 006286a2: mov edx, 0xffff */ r_edx = 0xffffu;
    /* 006286a7: mov eax, dword ptr [ebx + 0xcc] */ r_eax = R32((u32)(r_ebx+0xccu));
    /* 006286ad: add eax, 0x147 */ {  u32 a = r_eax; u32 b = 0x147u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006286b2: mov dword ptr [ebx + 0xcc], eax */ W32((u32)(r_ebx+0xccu), r_eax);
    /* 006286b8: mov word ptr [ebx + 0xf4], dx */ W16((u32)(r_ebx+0xf4u), (u16)r_edx);
    /* 006286bf: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 006286c5: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 006286c7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006286c9: jle 0x628865 */ if ((fZ||fS!=fO)) goto L_00628865;
L_006286cf:; BB(0x006286cf);
    /* 006286cf: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 006286d3: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
L_006286d6:; BB(0x006286d6);
    /* 006286d6: mov edi, dword ptr [esi*4 + 0xaad720] */ r_edi = R32((u32)(r_esi*4+0xaad720u));
    /* 006286dd: movzx ebp, word ptr [edi + 0x1c] */ r_ebp = (u32)R16((u32)(r_edi+0x1cu));
    /* 006286e1: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006286e3: je 0x62879a */ if (fZ) goto L_0062879a;
L_006286e9:; BB(0x006286e9);
    /* 006286e9: cmp ebp, 0x1000 */ {  u32 a = r_ebp; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006286ef: jge 0x62879a */ if ((fS==fO)) goto L_0062879a;
L_006286f5:; BB(0x006286f5);
    /* 006286f5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006286f7: mov ecx, edi */ r_ecx = r_edi;
    /* 006286f9: call 0x7b5264 */ r_esp -= 4; W32(r_esp, 0x6286feu); f_007b5264();
    /* 006286fe: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00628702: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00628706: fsubr dword ptr [0x932078] */ ST(0) = R_F32((u32)(0x932078u)) - ST(0);
    /* 0062870c: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 00628710: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00628714: lea ebx, [ebx + 0x38] */ r_ebx = (u32)(r_ebx+0x38u);
    /* 00628717: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 0062871a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0062871b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062871c: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x628721u); f_007a9180();
    /* 00628721: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00628724: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00628728: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0062872a: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0062872c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0062872e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0062872f: ja 0x628739 */ if ((!fC&&!fZ)) goto L_00628739;
L_00628731:; BB(0x00628731);
    /* 00628731: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 00628737: jmp 0x62879a */ goto L_0062879a;
L_00628739:; BB(0x00628739);
    /* 00628739: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0062873d: mov word ptr [edx + 0xf4], bp */ W16((u32)(r_edx+0xf4u), (u16)r_ebp);
    /* 00628744: movsx edx, word ptr [edi + 0x334] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x334u));
    /* 0062874b: cmp dx, word ptr [edi + 0x2bc] */ {  u32 a = (u16)r_edx; u32 b = R16((u32)(r_edi+0x2bcu)); u32 r = (a - b) & 0xffffu;  fS = ((r >> 15) & 1); fO = (((a ^ b) & (a ^ r)) >> 15) & 1; }
    /* 00628752: jl 0x6287ad */ if ((fS!=fO)) goto L_006287ad;
L_00628754:; BB(0x00628754);
    /* 00628754: movsx edx, word ptr [edi + 0x336] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x336u));
    /* 0062875b: cmp dx, word ptr [edi + 0x2be] */ {  u32 a = (u16)r_edx; u32 b = R16((u32)(r_edi+0x2beu)); u32 r = (a - b) & 0xffffu;  fS = ((r >> 15) & 1); fO = (((a ^ b) & (a ^ r)) >> 15) & 1; }
    /* 00628762: jl 0x6288a3 */ if ((fS!=fO)) goto L_006288a3;
L_00628768:; BB(0x00628768);
    /* 00628768: mov ecx, edi */ r_ecx = r_edi;
    /* 0062876a: call 0x68bfe0 */ r_esp -= 4; W32(r_esp, 0x62876fu); f_0068bfe0();
    /* 0062876f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00628771: je 0x628785 */ if (fZ) goto L_00628785;
L_00628773:; BB(0x00628773);
    /* 00628773: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
    /* 00628776: mov esi, ebx */ r_esi = r_ebx;
    /* 00628778: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 0062877c: movzx eax, word ptr [ebx + 0xf4] */ r_eax = (u32)R16((u32)(r_ebx+0xf4u));
    /* 00628783: jmp 0x6287b8 */ goto L_006287b8;
L_00628785:; BB(0x00628785);
    /* 00628785: mov ecx, edi */ r_ecx = r_edi;
    /* 00628787: call 0x695388 */ r_esp -= 4; W32(r_esp, 0x62878cu); f_00695388();
    /* 0062878c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062878e: jne 0x62886c */ if (!fZ) goto L_0062886c;
L_00628794:; BB(0x00628794);
    /* 00628794: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
L_0062879a:; BB(0x0062879a);
    /* 0062879a: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0062879d: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062879f: jl 0x6286d6 */ if ((fS!=fO)) goto L_006286d6;
L_006287a5:; BB(0x006287a5);
    /* 006287a5: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
    /* 006287a8: jmp 0x628865 */ goto L_00628865;
L_006287ad:; BB(0x006287ad);
    /* 006287ad: mov esi, ebx */ r_esi = r_ebx;
    /* 006287af: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 006287b3: mov eax, ebp */ r_eax = r_ebp;
    /* 006287b5: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
L_006287b8:; BB(0x006287b8);
    /* 006287b8: mov dword ptr [ebx + 0xac], 1 */ W32((u32)(r_ebx+0xacu), 0x1u);
    /* 006287c2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006287c3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006287c5: call 0x628568 */ r_esp -= 4; W32(r_esp, 0x6287cau); f_00628568();
    /* 006287ca: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006287cc: je 0x6287fc */ if (fZ) goto L_006287fc;
L_006287ce:; BB(0x006287ce);
    /* 006287ce: add esp, -0x10 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006287d1: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 006287d5: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 006287d9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006287db: mov ecx, edi */ r_ecx = r_edi;
    /* 006287dd: mov dword ptr [esp + 8], 0x3c */ W32((u32)(r_esp+0x8u), 0x3cu);
    /* 006287e5: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 006287e8: mov word ptr [esp + 0xc], ax */ W16((u32)(r_esp+0xcu), (u16)r_eax);
    /* 006287ed: call 0x6937c8 */ r_esp -= 4; W32(r_esp, 0x6287f2u); f_006937c8();
    /* 006287f2: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 006287f4: mov ecx, edi */ r_ecx = r_edi;
    /* 006287f6: call dword ptr [eax + 0xd0] */ { u32 t = R32((u32)(r_eax+0xd0u)); r_esp -= 4; W32(r_esp, 0x6287fcu); call_ind(t); }
L_006287fc:; BB(0x006287fc);
    /* 006287fc: mov ecx, edi */ r_ecx = r_edi;
    /* 006287fe: call 0x695388 */ r_esp -= 4; W32(r_esp, 0x628803u); f_00695388();
    /* 00628803: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00628805: jne 0x628882 */ if (!fZ) goto L_00628882;
L_00628807:; BB(0x00628807);
    /* 00628807: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00628809: push 0x1f6 */ { u32 v = 0x1f6u; r_esp -= 4; W32(r_esp, v); }
    /* 0062880e: add edi, 0x300 */ {  u32 a = r_edi; u32 b = 0x300u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00628814: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00628815: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x62881au); f_0050b7a4();
    /* 0062881a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062881d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062881f: je 0x628830 */ if (fZ) goto L_00628830;
L_00628821:; BB(0x00628821);
    /* 00628821: movzx edx, word ptr [ebx + 0xf4] */ r_edx = (u32)R16((u32)(r_ebx+0xf4u));
    /* 00628828: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00628829: mov ecx, eax */ r_ecx = r_eax;
    /* 0062882b: call 0x508f14 */ r_esp -= 4; W32(r_esp, 0x628830u); f_00508f14();
L_00628830:; BB(0x00628830);
    /* 00628830: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00628832: push 0x1f7 */ { u32 v = 0x1f7u; r_esp -= 4; W32(r_esp, v); }
    /* 00628837: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00628838: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x62883du); f_0050b7a4();
    /* 0062883d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00628840: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00628842: je 0x628853 */ if (fZ) goto L_00628853;
L_00628844:; BB(0x00628844);
    /* 00628844: movzx edx, word ptr [ebx + 0xf4] */ r_edx = (u32)R16((u32)(r_ebx+0xf4u));
    /* 0062884b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062884c: mov ecx, eax */ r_ecx = r_eax;
    /* 0062884e: call 0x508f14 */ r_esp -= 4; W32(r_esp, 0x628853u); f_00508f14();
L_00628853:; BB(0x00628853);
    /* 00628853: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00628855: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00628856: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00628857: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00628858: push 0x95 */ { u32 v = 0x95u; r_esp -= 4; W32(r_esp, v); }
    /* 0062885d: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x628862u); f_00814298();
    /* 00628862: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00628865:; BB(0x00628865);
    /* 00628865: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00628868: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00628869: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062886a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062886b: ret  */ FN_RET(0x0062865c); r_esp += 4; return;
L_0062886c:; BB(0x0062886c);
    /* 0062886c: mov ecx, edi */ r_ecx = r_edi;
    /* 0062886e: call 0x6953f0 */ r_esp -= 4; W32(r_esp, 0x628873u); f_006953f0();
    /* 00628873: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00628875: je 0x62888e */ if (fZ) goto L_0062888e;
L_00628877:; BB(0x00628877);
    /* 00628877: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 0062887d: jmp 0x62879a */ goto L_0062879a;
L_00628882:; BB(0x00628882);
    /* 00628882: mov ecx, edi */ r_ecx = r_edi;
    /* 00628884: call 0x695420 */ r_esp -= 4; W32(r_esp, 0x628889u); f_00695420();
    /* 00628889: jmp 0x628807 */ goto L_00628807;
L_0062888e:; BB(0x0062888e);
    /* 0062888e: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
    /* 00628891: mov esi, ebx */ r_esi = r_ebx;
    /* 00628893: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 00628897: movzx eax, word ptr [ebx + 0xf4] */ r_eax = (u32)R16((u32)(r_ebx+0xf4u));
    /* 0062889e: jmp 0x6287b8 */ goto L_006287b8;
L_006288a3:; BB(0x006288a3);
    /* 006288a3: mov esi, ebx */ r_esi = r_ebx;
    /* 006288a5: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 006288a9: mov eax, ebp */ r_eax = r_ebp;
    /* 006288ab: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
    /* 006288ae: jmp 0x6287b8 */ goto L_006287b8;
}

void f_006288b4(void) /* sub_6288B4 */
{
    FN_ENTER(0x006288b4);
    /* 006288b4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006288b5: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006288b7: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006288b9: call 0x628960 */ r_esp -= 4; W32(r_esp, 0x6288beu); f_00628960();
    /* 006288be: fld dword ptr [0x932068] */ FPUSH(R_F32((u32)(0x932068u)));
    /* 006288c4: fadd dword ptr [ebp + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x3cu));
    /* 006288c7: mov edx, dword ptr [ebp + 0xcc] */ r_edx = R32((u32)(r_ebp+0xccu));
    /* 006288cd: fld dword ptr [ebp + 0xd0] */ FPUSH(R_F32((u32)(r_ebp+0xd0u)));
    /* 006288d3: fsub dword ptr [0xa8eda0] */ ST(0) = ST(0) - R_F32((u32)(0xa8eda0u));
    /* 006288d9: fcom dword ptr [0x932064] */ fx_compare(ST(0), R_F32((u32)(0x932064u))); 
    /* 006288df: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006288e1: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 006288e3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006288e5: fstp dword ptr [ebp + 0xe4] */ W_F32((u32)(r_ebp+0xe4u), ST(0)); FPOP();
    /* 006288eb: add edx, 0x147 */ {  u32 a = r_edx; u32 b = 0x147u; u32 r = (a + b) & 0xffffffffu; r_edx = r; fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 006288f1: mov dword ptr [ebp + 0xcc], edx */ W32((u32)(r_ebp+0xccu), r_edx);
    /* 006288f7: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006288f8: jbe 0x628902 */ if ((fC||fZ)) goto L_00628902;
L_006288fa:; BB(0x006288fa);
    /* 006288fa: fstp dword ptr [ebp + 0xd0] */ W_F32((u32)(r_ebp+0xd0u), ST(0)); FPOP();
    /* 00628900: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00628901: ret  */ FN_RET(0x006288b4); r_esp += 4; return;
L_00628902:; BB(0x00628902);
    /* 00628902: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00628904: movzx edx, word ptr [ebp + 0xf4] */ r_edx = (u32)R16((u32)(r_ebp+0xf4u));
    /* 0062890b: mov dword ptr [ebp + 0xac], 0 */ W32((u32)(r_ebp+0xacu), 0x0u);
    /* 00628915: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00628917: mov dword ptr [ebp + 0xd0], eax */ W32((u32)(r_ebp+0xd0u), r_eax);
    /* 0062891d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062891e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00628920: call 0x628568 */ r_esp -= 4; W32(r_esp, 0x628925u); f_00628568();
    /* 00628925: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00628927: je 0x62895c */ if (fZ) goto L_0062895c;
L_00628929:; BB(0x00628929);
    /* 00628929: movzx eax, word ptr [ebp + 0xf4] */ r_eax = (u32)R16((u32)(r_ebp+0xf4u));
    /* 00628930: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00628931: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x628936u); f_0068d5a8();
    /* 00628936: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00628937: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00628939: je 0x62895c */ if (fZ) goto L_0062895c;
L_0062893b:; BB(0x0062893b);
    /* 0062893b: movsx eax, word ptr [eax + 0x334] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x334u));
    /* 00628942: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00628944: jle 0x62895c */ if ((fZ||fS!=fO)) goto L_0062895c;
L_00628946:; BB(0x00628946);
    /* 00628946: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00628947: movzx edx, word ptr [ebp + 0xf4] */ r_edx = (u32)R16((u32)(r_ebp+0xf4u));
    /* 0062894e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062894f: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00628954: call 0x693348 */ r_esp -= 4; W32(r_esp, 0x628959u); f_00693348();
    /* 00628959: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_0062895c:; BB(0x0062895c);
    /* 0062895c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062895d: ret  */ FN_RET(0x006288b4); r_esp += 4; return;
}

void f_00628960(void) /* sub_628960 */
{
    FN_ENTER(0x00628960);
    /* 00628960: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00628961: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00628962: mov esi, ecx */ r_esi = r_ecx;
    /* 00628964: movzx eax, word ptr [esi + 0xf4] */ r_eax = (u32)R16((u32)(r_esi+0xf4u));
    /* 0062896b: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00628970: je 0x6289c0 */ if (fZ) goto L_006289c0;
L_00628972:; BB(0x00628972);
    /* 00628972: cmp eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00628977: jge 0x6289c0 */ if ((fS==fO)) goto L_006289c0;
L_00628979:; BB(0x00628979);
    /* 00628979: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062897a: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x62897fu); f_0068d5a8();
    /* 0062897f: mov ebx, eax */ r_ebx = r_eax;
    /* 00628981: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00628984: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00628986: je 0x6289c0 */ if (fZ) goto L_006289c0;
L_00628988:; BB(0x00628988);
    /* 00628988: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 0062898b: test edx, 0x800 */ {  u32 a = r_edx; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00628991: jne 0x6289c0 */ if (!fZ) goto L_006289c0;
L_00628993:; BB(0x00628993);
    /* 00628993: lea edx, [ebx + 0x38] */ r_edx = (u32)(r_ebx+0x38u);
    /* 00628996: add esi, 0x38 */ {  u32 a = r_esi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00628999: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0062899a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062899b: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x6289a0u); f_007a9180();
    /* 006289a0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 006289a3: fcomp dword ptr [0x932060] */ fx_compare(ST(0), R_F32((u32)(0x932060u))); FPOP();
    /* 006289a9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006289ab: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006289ac: jae 0x6289c0 */ if (!fC) goto L_006289c0;
L_006289ae:; BB(0x006289ae);
    /* 006289ae: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 006289b0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006289b2: call 0x7773d4 */ r_esp -= 4; W32(r_esp, 0x6289b7u); f_007773d4();
    /* 006289b7: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 006289b9: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006289bb: call 0x777368 */ r_esp -= 4; W32(r_esp, 0x6289c0u); f_00777368();
L_006289c0:; BB(0x006289c0);
    /* 006289c0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006289c1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006289c2: ret  */ FN_RET(0x00628960); r_esp += 4; return;
}

void f_006289c4(void) /* sub_6289C4 */
{
    FN_ENTER(0x006289c4);
    /* 006289c4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006289c5: mov esi, ecx */ r_esi = r_ecx;
    /* 006289c7: mov ecx, esi */ r_ecx = r_esi;
    /* 006289c9: call 0x628960 */ r_esp -= 4; W32(r_esp, 0x6289ceu); f_00628960();
    /* 006289ce: fld dword ptr [0xa8eda0] */ FPUSH(R_F32((u32)(0xa8eda0u)));
    /* 006289d4: fadd dword ptr [esi + 0xd0] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0xd0u));
    /* 006289da: fcom dword ptr [0x93205c] */ fx_compare(ST(0), R_F32((u32)(0x93205cu))); 
    /* 006289e0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006289e2: mov edx, dword ptr [esi + 0xcc] */ r_edx = R32((u32)(r_esi+0xccu));
    /* 006289e8: add edx, 0x147 */ {  u32 a = r_edx; u32 b = 0x147u; u32 r = (a + b) & 0xffffffffu; r_edx = r; fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 006289ee: fld dword ptr [0x932068] */ FPUSH(R_F32((u32)(0x932068u)));
    /* 006289f4: fadd dword ptr [esi + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x3cu));
    /* 006289f7: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 006289f9: fstp dword ptr [esi + 0xe4] */ W_F32((u32)(r_esi+0xe4u), ST(0)); FPOP();
    /* 006289ff: mov dword ptr [esi + 0xcc], edx */ W32((u32)(r_esi+0xccu), r_edx);
    /* 00628a05: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00628a06: jb 0x628a21 */ if (fC) goto L_00628a21;
L_00628a08:; BB(0x00628a08);
    /* 00628a08: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00628a0a: mov dword ptr [esi + 0xac], 2 */ W32((u32)(r_esi+0xacu), 0x2u);
    /* 00628a14: mov eax, 0x41b26666 */ r_eax = 0x41b26666u;
    /* 00628a19: mov dword ptr [esi + 0xd0], eax */ W32((u32)(r_esi+0xd0u), r_eax);
    /* 00628a1f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00628a20: ret  */ FN_RET(0x006289c4); r_esp += 4; return;
L_00628a21:; BB(0x00628a21);
    /* 00628a21: fstp dword ptr [esi + 0xd0] */ W_F32((u32)(r_esi+0xd0u), ST(0)); FPOP();
    /* 00628a27: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00628a28: ret  */ FN_RET(0x006289c4); r_esp += 4; return;
}

void f_00628a2c(void) /* sub_628A2C */
{
    FN_ENTER(0x00628a2c);
    /* 00628a2c: mov ecx, dword ptr [0xa8edb4] */ r_ecx = R32((u32)(0xa8edb4u));
    /* 00628a32: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00628a34: je 0x628a49 */ if (fZ) goto L_00628a49;
L_00628a36:; BB(0x00628a36);
    /* 00628a36: je 0x628a3f */ if (fZ) goto L_00628a3f;
L_00628a38:; BB(0x00628a38);
    /* 00628a38: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00628a3a: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x628a3fu); f_004066a8();
L_00628a3f:; BB(0x00628a3f);
    /* 00628a3f: mov dword ptr [0xa8edb4], 0 */ W32((u32)(0xa8edb4u), 0x0u);
L_00628a49:; BB(0x00628a49);
    /* 00628a49: ret  */ FN_RET(0x00628a2c); r_esp += 4; return;
}

void f_00628a4c(void)
{
    FN_ENTER(0x00628a4c);
    /* 00628a4c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00628a4d: mov ebp, esp */ r_ebp = r_esp;
    /* 00628a4f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00628a51: push 0x8e2de6 */ { u32 v = 0x8e2de6u; r_esp -= 4; W32(r_esp, v); }
    /* 00628a56: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00628a5c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00628a5d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00628a64: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00628a67: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00628a6a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00628a6d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00628a70: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00628a73: push 0xf8 */ { u32 v = 0xf8u; r_esp -= 4; W32(r_esp, v); }
    /* 00628a78: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 00628a7f: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x628a84u); f_005caba4();
    /* 00628a84: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00628a87: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00628a8a: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00628a8d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00628a8f: je 0x628c44 */ if (fZ) goto L_00628c44;
L_00628a95:; BB(0x00628a95);
    /* 00628a95: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 00628a9c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00628aa3: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 00628aa9: mov ecx, eax */ r_ecx = r_eax;
    /* 00628aab: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 00628aae: call 0x6132e4 */ r_esp -= 4; W32(r_esp, 0x628ab3u); f_006132e4();
    /* 00628ab3: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00628aba: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00628abd: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00628ac0: mov dword ptr [ecx], 0xb29458 */ W32((u32)(r_ecx), 0xb29458u);
    /* 00628ac6: mov eax, dword ptr [0x9c5cbc] */ r_eax = R32((u32)(0x9c5cbcu));
    /* 00628acb: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00628ace: call dword ptr [0xb2946c] */ { u32 t = R32((u32)(0xb2946cu)); r_esp -= 4; W32(r_esp, 0x628ad4u); call_ind(t); }
    /* 00628ad4: mov ebx, dword ptr [0xa8edb4] */ r_ebx = R32((u32)(0xa8edb4u));
    /* 00628ada: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00628add: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00628adf: mov eax, dword ptr [ebx + 0x42c] */ r_eax = R32((u32)(r_ebx+0x42cu));
    /* 00628ae5: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 00628ae8: push 0x9c5cc0 */ { u32 v = 0x9c5cc0u; r_esp -= 4; W32(r_esp, v); }
    /* 00628aed: mov dword ptr [ecx + 0x34], edx */ W32((u32)(r_ecx+0x34u), r_edx);
    /* 00628af0: mov esi, dword ptr [ebx + 0x42c] */ r_esi = R32((u32)(r_ebx+0x42cu));
    /* 00628af6: mov edi, dword ptr [esi + 0xc] */ r_edi = R32((u32)(r_esi+0xcu));
    /* 00628af9: mov dword ptr [ecx + 0xc4], 0x42200000 */ W32((u32)(r_ecx+0xc4u), 0x42200000u);
    /* 00628b03: mov dword ptr [ecx + 0x24], edi */ W32((u32)(r_ecx+0x24u), r_edi);
    /* 00628b06: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x628b0bu); f_007b9a88();
    /* 00628b0b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00628b0e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00628b0f: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x628b14u); f_007b999c();
    /* 00628b14: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00628b15: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00628b18: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x628b1du); f_007b4f54();
    /* 00628b1d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00628b20: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00628b22: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00628b24: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x628b29u); f_007b52ec();
    /* 00628b29: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00628b2c: fld dword ptr [0x93206c] */ FPUSH(R_F32((u32)(0x93206cu)));
    /* 00628b32: fld dword ptr [0x932068] */ FPUSH(R_F32((u32)(0x932068u)));
    /* 00628b38: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 00628b3b: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 00628b3e: mov ecx, dword ptr [ebx + 0x40] */ r_ecx = R32((u32)(r_ebx+0x40u));
    /* 00628b41: mov dword ptr [ebx + 0xcc], 0 */ W32((u32)(r_ebx+0xccu), 0x0u);
    /* 00628b4b: push 0x63 */ { u32 v = 0x63u; r_esp -= 4; W32(r_esp, v); }
    /* 00628b4d: mov dword ptr [ebx + 0xd4], eax */ W32((u32)(r_ebx+0xd4u), r_eax);
    /* 00628b53: mov dword ptr [ebx + 0xd0], 0 */ W32((u32)(r_ebx+0xd0u), 0x0u);
    /* 00628b5d: mov dword ptr [ebx + 0xd8], edx */ W32((u32)(r_ebx+0xd8u), r_edx);
    /* 00628b63: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00628b65: fadd dword ptr [ebx + 0xd8] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0xd8u));
    /* 00628b6b: fstp dword ptr [ebx + 0xd8] */ W_F32((u32)(r_ebx+0xd8u), ST(0)); FPOP();
    /* 00628b71: mov dword ptr [ebx + 0xdc], ecx */ W32((u32)(r_ebx+0xdcu), r_ecx);
    /* 00628b77: mov dword ptr [ebx + 0xe0], eax */ W32((u32)(r_ebx+0xe0u), r_eax);
    /* 00628b7d: mov dword ptr [ebx + 0xe4], edx */ W32((u32)(r_ebx+0xe4u), r_edx);
    /* 00628b83: fadd dword ptr [ebx + 0xe4] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0xe4u));
    /* 00628b89: fstp dword ptr [ebx + 0xe4] */ W_F32((u32)(r_ebx+0xe4u), ST(0)); FPOP();
    /* 00628b8f: mov dword ptr [ebx + 0xe8], ecx */ W32((u32)(r_ebx+0xe8u), r_ecx);
    /* 00628b95: lea esi, [ebx + 0xd4] */ r_esi = (u32)(r_ebx+0xd4u);
    /* 00628b9b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00628b9c: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x628ba1u); f_00509590();
    /* 00628ba1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00628ba4: mov edx, ebx */ r_edx = r_ebx;
    /* 00628ba6: mov dword ptr [edx + 0xec], eax */ W32((u32)(r_edx+0xecu), r_eax);
    /* 00628bac: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00628bae: je 0x628bc7 */ if (fZ) goto L_00628bc7;
L_00628bb0:; BB(0x00628bb0);
    /* 00628bb0: mov ecx, eax */ r_ecx = r_eax;
    /* 00628bb2: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x628bb7u); f_008173b4();
    /* 00628bb7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00628bb9: jne 0x628bc7 */ if (!fZ) goto L_00628bc7;
L_00628bbb:; BB(0x00628bbb);
    /* 00628bbb: mov eax, ebx */ r_eax = r_ebx;
    /* 00628bbd: mov dword ptr [eax + 0xec], 0 */ W32((u32)(r_eax+0xecu), 0x0u);
L_00628bc7:; BB(0x00628bc7);
    /* 00628bc7: mov eax, ebx */ r_eax = r_ebx;
    /* 00628bc9: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00628bcb: push 0x63 */ { u32 v = 0x63u; r_esp -= 4; W32(r_esp, v); }
    /* 00628bcd: lea edx, [eax + 0xe0] */ r_edx = (u32)(r_eax+0xe0u);
    /* 00628bd3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00628bd4: call 0x50981c */ r_esp -= 4; W32(r_esp, 0x628bd9u); f_0050981c();
    /* 00628bd9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00628bdc: mov edx, ebx */ r_edx = r_ebx;
    /* 00628bde: lea edx, [edx + 0xf0] */ r_edx = (u32)(r_edx+0xf0u);
    /* 00628be4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00628be6: je 0x628c09 */ if (fZ) goto L_00628c09;
L_00628be8:; BB(0x00628be8);
    /* 00628be8: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00628bea: mov ecx, eax */ r_ecx = r_eax;
    /* 00628bec: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x628bf1u); f_008173b4();
    /* 00628bf1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00628bf3: je 0x628c09 */ if (fZ) goto L_00628c09;
L_00628bf5:; BB(0x00628bf5);
    /* 00628bf5: mov edx, ebx */ r_edx = r_ebx;
    /* 00628bf7: movzx eax, word ptr [edx + 0x1c] */ r_eax = (u32)R16((u32)(r_edx+0x1cu));
    /* 00628bfb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00628bfc: mov ecx, dword ptr [edx + 0xf0] */ r_ecx = R32((u32)(r_edx+0xf0u));
    /* 00628c02: call 0x508f14 */ r_esp -= 4; W32(r_esp, 0x628c07u); f_00508f14();
    /* 00628c07: jmp 0x628c15 */ goto L_00628c15;
L_00628c09:; BB(0x00628c09);
    /* 00628c09: mov eax, ebx */ r_eax = r_ebx;
    /* 00628c0b: mov dword ptr [eax + 0xf0], 0 */ W32((u32)(r_eax+0xf0u), 0x0u);
L_00628c15:; BB(0x00628c15);
    /* 00628c15: mov edx, ebx */ r_edx = r_ebx;
    /* 00628c17: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 00628c1e: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 00628c23: mov word ptr [edx + 0xf4], ax */ W16((u32)(r_edx+0xf4u), (u16)r_eax);
L_00628c2a:; BB(0x00628c2a);
    /* 00628c2a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00628c2d: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00628c30: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00628c33: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00628c36: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00628c39: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00628c40: mov esp, ebp */ r_esp = r_ebp;
    /* 00628c42: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00628c43: ret  */ FN_RET(0x00628a4c); r_esp += 4; return;
L_00628c44:; BB(0x00628c44);
    /* 00628c44: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00628c46: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00628c49: jmp 0x628c2a */ goto L_00628c2a;
}

void f_00628c80(void) /* sub_628C80 */
{
    FN_ENTER(0x00628c80);
    /* 00628c80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00628c81: mov ebp, esp */ r_ebp = r_esp;
    /* 00628c83: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00628c85: push 0x8e2e26 */ { u32 v = 0x8e2e26u; r_esp -= 4; W32(r_esp, v); }
    /* 00628c8a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00628c90: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00628c91: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00628c98: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00628c9b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00628c9e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00628ca1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00628ca4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00628ca7: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x628cacu); f_00807ac0();
    /* 00628cac: lea edx, [eax - 0x17] */ r_edx = (u32)(r_eax+0xffffffe9u);
    /* 00628caf: cmp edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00628cb2: ja 0x628d0d */ if ((!fC&&!fZ)) goto L_00628d0d;
L_00628cb4:; BB(0x00628cb4);
    /* 00628cb4: mov eax, dword ptr [eax*4 + 0x931fb0] */ r_eax = R32((u32)(r_eax*4+0x931fb0u));
    /* 00628cbb: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_00628d0d:; BB(0x00628d0d);
    /* 00628d0d: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 00628d14: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 00628d19: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x628d1eu); f_008581c5();
    /* 00628d1e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00628d1f: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00628d22: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00628d24: je 0x628d69 */ if (fZ) goto L_00628d69;
L_00628d26:; BB(0x00628d26);
    /* 00628d26: mov dword ptr [ebp - 0x20], 1 */ W32((u32)(r_ebp+0xffffffe0u), 0x1u);
    /* 00628d2d: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00628d34: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00628d37: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00628d39: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00628d3a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00628d3b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00628d3c: push 0x9c5c94 */ { u32 v = 0x9c5c94u; r_esp -= 4; W32(r_esp, v); }
    /* 00628d41: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00628d43: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x628d48u); f_005b7a84();
    /* 00628d48: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00628d4b: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_00628d52:; BB(0x00628d52);
    /* 00628d52: mov dword ptr [0xa8edb4], eax */ W32((u32)(0xa8edb4u), r_eax);
    /* 00628d57: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00628d5a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00628d61: mov esp, ebp */ r_esp = r_ebp;
    /* 00628d63: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00628d64: ret  */ FN_RET(0x00628c80); r_esp += 4; return;
L_00628d69:; BB(0x00628d69);
    /* 00628d69: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00628d6b: jmp 0x628d52 */ goto L_00628d52;
}

void f_00628cbd(void)
{
    FN_ENTER(0x00628cbd);
    /* 00628cbd: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 00628cc4: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 00628cc9: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x628cceu); f_008581c5();
    /* 00628cce: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00628ccf: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00628cd2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00628cd4: je 0x628d65 */ if (fZ) goto L_00628d65;
L_00628cda:; BB(0x00628cda);
    /* 00628cda: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 00628ce1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00628ce8: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00628ceb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00628ced: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00628cee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00628cef: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00628cf0: push 0x9c5cac */ { u32 v = 0x9c5cacu; r_esp -= 4; W32(r_esp, v); }
    /* 00628cf5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00628cf7: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x628cfcu); f_005b7a84();
    /* 00628cfc: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00628cff: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_00628d06:; BB(0x00628d06);
    /* 00628d06: mov dword ptr [0xa8edb4], eax */ W32((u32)(0xa8edb4u), r_eax);
    /* 00628d0b: jmp 0x628d57 */ goto L_00628d57;
L_00628d57:; BB(0x00628d57);
    /* 00628d57: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00628d5a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00628d61: mov esp, ebp */ r_esp = r_ebp;
    /* 00628d63: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00628d64: ret  */ FN_RET(0x00628cbd); r_esp += 4; return;
L_00628d65:; BB(0x00628d65);
    /* 00628d65: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00628d67: jmp 0x628d06 */ goto L_00628d06;
}

void f_00628d0d(void)
{
    FN_ENTER(0x00628d0d);
    /* 00628d0d: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 00628d14: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 00628d19: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x628d1eu); f_008581c5();
    /* 00628d1e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00628d1f: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00628d22: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00628d24: je 0x628d69 */ if (fZ) goto L_00628d69;
L_00628d26:; BB(0x00628d26);
    /* 00628d26: mov dword ptr [ebp - 0x20], 1 */ W32((u32)(r_ebp+0xffffffe0u), 0x1u);
    /* 00628d2d: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00628d34: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00628d37: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00628d39: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00628d3a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00628d3b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00628d3c: push 0x9c5c94 */ { u32 v = 0x9c5c94u; r_esp -= 4; W32(r_esp, v); }
    /* 00628d41: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00628d43: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x628d48u); f_005b7a84();
    /* 00628d48: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00628d4b: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_00628d52:; BB(0x00628d52);
    /* 00628d52: mov dword ptr [0xa8edb4], eax */ W32((u32)(0xa8edb4u), r_eax);
    /* 00628d57: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00628d5a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00628d61: mov esp, ebp */ r_esp = r_ebp;
    /* 00628d63: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00628d64: ret  */ FN_RET(0x00628d0d); r_esp += 4; return;
L_00628d69:; BB(0x00628d69);
    /* 00628d69: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00628d6b: jmp 0x628d52 */ goto L_00628d52;
}

void f_00628d70(void) /* sub_628D70 */
{
    FN_ENTER(0x00628d70);
    /* 00628d70: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00628d71: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00628d73: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00628d75: call 0x628d94 */ r_esp -= 4; W32(r_esp, 0x628d7au); f_00628d94();
    /* 00628d7a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00628d7e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00628d80: jne 0x628d86 */ if (!fZ) goto L_00628d86;
L_00628d82:; BB(0x00628d82);
    /* 00628d82: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00628d83: ret 4 */ FN_RET(0x00628d70); r_esp += 8; return;
L_00628d86:; BB(0x00628d86);
    /* 00628d86: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00628d87: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x628d8cu); f_005c2f74();
    /* 00628d8c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00628d8d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00628d8e: ret 4 */ FN_RET(0x00628d70); r_esp += 8; return;
}

void f_00628d94(void) /* sub_628D94 */
{
    FN_ENTER(0x00628d94);
    /* 00628d94: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00628d95: mov ebp, esp */ r_ebp = r_esp;
    /* 00628d97: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00628d99: push 0x8e2e40 */ { u32 v = 0x8e2e40u; r_esp -= 4; W32(r_esp, v); }
    /* 00628d9e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00628da4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00628da5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00628dac: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00628daf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00628db2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00628db5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00628db8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00628dbb: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00628dbe: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00628dc1: mov dword ptr [ecx], 0xb294e0 */ W32((u32)(r_ecx), 0xb294e0u);
    /* 00628dc7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00628dce: call 0x6131f4 */ r_esp -= 4; W32(r_esp, 0x628dd3u); f_006131f4();
    /* 00628dd3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00628dd6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00628ddd: mov esp, ebp */ r_esp = r_ebp;
    /* 00628ddf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00628de0: ret  */ FN_RET(0x00628d94); r_esp += 4; return;
}

void f_00628de4(void) /* sub_628DE4 */
{
    FN_ENTER(0x00628de4);
    /* 00628de4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00628de5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00628de7: mov eax, dword ptr [ebx + 0x84] */ r_eax = R32((u32)(r_ebx+0x84u));
    /* 00628ded: mov dword ptr [ebx + 0xd0], eax */ W32((u32)(r_ebx+0xd0u), r_eax);
    /* 00628df3: cmp eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00628df8: jle 0x628e06 */ if ((fZ||fS!=fO)) goto L_00628e06;
L_00628dfa:; BB(0x00628dfa);
    /* 00628dfa: mov dword ptr [ebx + 0xc8], 0 */ W32((u32)(r_ebx+0xc8u), 0x0u);
    /* 00628e04: jmp 0x628e14 */ goto L_00628e14;
L_00628e06:; BB(0x00628e06);
    /* 00628e06: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00628e08: jl 0x628e36 */ if ((fS!=fO)) goto L_00628e36;
L_00628e0a:; BB(0x00628e0a);
    /* 00628e0a: mov dword ptr [ebx + 0xc8], 2 */ W32((u32)(r_ebx+0xc8u), 0x2u);
L_00628e14:; BB(0x00628e14);
    /* 00628e14: push dword ptr [ebx + 0x88] */ { u32 v = R32((u32)(r_ebx+0x88u)); r_esp -= 4; W32(r_esp, v); }
    /* 00628e1a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00628e1c: call 0x628e44 */ r_esp -= 4; W32(r_esp, 0x628e21u); f_00628e44();
    /* 00628e21: push dword ptr [ebx + 0x8c] */ { u32 v = R32((u32)(r_ebx+0x8cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00628e27: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00628e29: call 0x628e5c */ r_esp -= 4; W32(r_esp, 0x628e2eu); f_00628e5c();
    /* 00628e2e: mov eax, dword ptr [ebx + 0xd0] */ r_eax = R32((u32)(r_ebx+0xd0u));
    /* 00628e34: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00628e35: ret  */ FN_RET(0x00628de4); r_esp += 4; return;
L_00628e36:; BB(0x00628e36);
    /* 00628e36: mov dword ptr [ebx + 0xc8], 1 */ W32((u32)(r_ebx+0xc8u), 0x1u);
    /* 00628e40: jmp 0x628e14 */ goto L_00628e14;
}

void f_00628e44(void) /* sub_628E44 */
{
    FN_ENTER(0x00628e44);
    /* 00628e44: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00628e48: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00628e4a: mov edx, 0 */ r_edx = 0x0u;
    /* 00628e4f: jl 0x628e53 */ if ((fS!=fO)) goto L_00628e53;
L_00628e51:; BB(0x00628e51);
    /* 00628e51: mov edx, eax */ r_edx = r_eax;
L_00628e53:; BB(0x00628e53);
    /* 00628e53: mov dword ptr [ecx + 0xd4], edx */ W32((u32)(r_ecx+0xd4u), r_edx);
    /* 00628e59: ret 4 */ FN_RET(0x00628e44); r_esp += 8; return;
}

void f_00628e5c(void) /* sub_628E5C */
{
    FN_ENTER(0x00628e5c);
    /* 00628e5c: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00628e60: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00628e62: mov edx, 0 */ r_edx = 0x0u;
    /* 00628e67: jl 0x628e6b */ if ((fS!=fO)) goto L_00628e6b;
L_00628e69:; BB(0x00628e69);
    /* 00628e69: mov edx, eax */ r_edx = r_eax;
L_00628e6b:; BB(0x00628e6b);
    /* 00628e6b: mov dword ptr [ecx + 0xd8], edx */ W32((u32)(r_ecx+0xd8u), r_edx);
    /* 00628e71: ret 4 */ FN_RET(0x00628e5c); r_esp += 8; return;
}

void f_00628e74(void) /* sub_628E74 */
{
    FN_ENTER(0x00628e74);
    /* 00628e74: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00628e75: mov esi, ecx */ r_esi = r_ecx;
    /* 00628e77: mov eax, dword ptr [esi + 0xc8] */ r_eax = R32((u32)(r_esi+0xc8u));
    /* 00628e7d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00628e80: jne 0x628eb1 */ if (!fZ) goto L_00628eb1;
L_00628e82:; BB(0x00628e82);
    /* 00628e82: push 0x45992000 */ { u32 v = 0x45992000u; r_esp -= 4; W32(r_esp, v); }
    /* 00628e87: mov ecx, esi */ r_ecx = r_esi;
    /* 00628e89: call 0x6134c8 */ r_esp -= 4; W32(r_esp, 0x628e8eu); f_006134c8();
    /* 00628e8e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00628e90: je 0x628ea3 */ if (fZ) goto L_00628ea3;
L_00628e92:; BB(0x00628e92);
    /* 00628e92: mov dword ptr [esi + 0xcc], 1 */ W32((u32)(r_esi+0xccu), 0x1u);
    /* 00628e9c: mov eax, 1 */ r_eax = 0x1u;
    /* 00628ea1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00628ea2: ret  */ FN_RET(0x00628e74); r_esp += 4; return;
L_00628ea3:; BB(0x00628ea3);
    /* 00628ea3: mov dword ptr [esi + 0xcc], 0 */ W32((u32)(r_esi+0xccu), 0x0u);
    /* 00628ead: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00628eaf: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00628eb0: ret  */ FN_RET(0x00628e74); r_esp += 4; return;
L_00628eb1:; BB(0x00628eb1);
    /* 00628eb1: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00628eb4: je 0x628ebe */ if (fZ) goto L_00628ebe;
L_00628eb6:; BB(0x00628eb6);
    /* 00628eb6: mov eax, dword ptr [esi + 0xcc] */ r_eax = R32((u32)(r_esi+0xccu));
    /* 00628ebc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00628ebd: ret  */ FN_RET(0x00628e74); r_esp += 4; return;
L_00628ebe:; BB(0x00628ebe);
    /* 00628ebe: movzx eax, word ptr [esi + 0xd0] */ r_eax = (u32)R16((u32)(r_esi+0xd0u));
    /* 00628ec5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00628ec6: call 0x816eec */ r_esp -= 4; W32(r_esp, 0x628ecbu); f_00816eec();
    /* 00628ecb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00628ecc: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00628ecf: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00628ed2: je 0x628ee2 */ if (fZ) goto L_00628ee2;
L_00628ed4:; BB(0x00628ed4);
    /* 00628ed4: mov dword ptr [esi + 0xcc], 0 */ W32((u32)(r_esi+0xccu), 0x0u);
    /* 00628ede: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00628ee0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00628ee1: ret  */ FN_RET(0x00628e74); r_esp += 4; return;
L_00628ee2:; BB(0x00628ee2);
    /* 00628ee2: mov dword ptr [esi + 0xcc], 1 */ W32((u32)(r_esi+0xccu), 0x1u);
    /* 00628eec: mov eax, 1 */ r_eax = 0x1u;
    /* 00628ef1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00628ef2: ret  */ FN_RET(0x00628e74); r_esp += 4; return;
}

void f_00628ef4(void) /* sub_628EF4 */
{
    FN_ENTER(0x00628ef4);
    /* 00628ef4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00628ef5: mov edi, ecx */ r_edi = r_ecx;
    /* 00628ef7: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00628efb: mov ecx, edi */ r_ecx = r_edi;
    /* 00628efd: call 0x6132e4 */ r_esp -= 4; W32(r_esp, 0x628f02u); f_006132e4();
    /* 00628f02: mov dword ptr [edi], 0xb294e0 */ W32((u32)(r_edi), 0xb294e0u);
    /* 00628f08: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00628f0a: mov dword ptr [edi + 0xc8], edx */ W32((u32)(r_edi+0xc8u), r_edx);
    /* 00628f10: mov dword ptr [edi + 0xac], edx */ W32((u32)(r_edi+0xacu), r_edx);
    /* 00628f16: mov dword ptr [edi + 0xd0], 0xffffffff */ W32((u32)(r_edi+0xd0u), 0xffffffffu);
    /* 00628f20: mov dword ptr [edi + 0xcc], edx */ W32((u32)(r_edi+0xccu), r_edx);
    /* 00628f26: mov dword ptr [edi + 0xd4], edx */ W32((u32)(r_edi+0xd4u), r_edx);
    /* 00628f2c: mov dword ptr [edi + 0xd8], edx */ W32((u32)(r_edi+0xd8u), r_edx);
    /* 00628f32: mov eax, 1 */ r_eax = 0x1u;
    /* 00628f37: mov dword ptr [edi + 0x98], eax */ W32((u32)(r_edi+0x98u), r_eax);
    /* 00628f3d: mov dword ptr [edi + 0xdc], edx */ W32((u32)(r_edi+0xdcu), r_edx);
    /* 00628f43: mov dword ptr [edi + 0xe0], eax */ W32((u32)(r_edi+0xe0u), r_eax);
    /* 00628f49: mov eax, edi */ r_eax = r_edi;
    /* 00628f4b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00628f4c: ret 4 */ FN_RET(0x00628ef4); r_esp += 8; return;
}

void f_00628f50(void) /* sub_628F50 */
{
    FN_ENTER(0x00628f50);
    /* 00628f50: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00628f54: movsx edx, word ptr [eax] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax));
    /* 00628f57: mov dword ptr [ecx + 0xac], edx */ W32((u32)(r_ecx+0xacu), r_edx);
    /* 00628f5d: ret 8 */ FN_RET(0x00628f50); r_esp += 12; return;
}

void f_00628f60(void) /* sub_628F60 */
{
    FN_ENTER(0x00628f60);
    /* 00628f60: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00628f61: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00628f62: mov edi, ecx */ r_edi = r_ecx;
    /* 00628f64: movzx esi, word ptr [esp + 0xc] */ r_esi = (u32)R16((u32)(r_esp+0xcu));
    /* 00628f69: mov eax, dword ptr [edi + 0xd8] */ r_eax = R32((u32)(r_edi+0xd8u));
    /* 00628f6f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00628f71: jle 0x628fbc */ if ((fZ||fS!=fO)) goto L_00628fbc;
L_00628f73:; BB(0x00628f73);
    /* 00628f73: cmp esi, dword ptr [0xa9c4f4] */ {  u32 a = r_esi; u32 b = R32((u32)(0xa9c4f4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00628f79: je 0x628f8c */ if (fZ) goto L_00628f8c;
L_00628f7b:; BB(0x00628f7b);
    /* 00628f7b: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 00628f80: mov word ptr [edi + 0x94], ax */ W16((u32)(r_edi+0x94u), (u16)r_eax);
    /* 00628f87: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00628f88: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00628f89: ret 4 */ FN_RET(0x00628f60); r_esp += 8; return;
L_00628f8c:; BB(0x00628f8c);
    /* 00628f8c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00628f8d: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x628f92u); f_0068d5a8();
    /* 00628f92: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00628f93: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00628f95: je 0x628fbc */ if (fZ) goto L_00628fbc;
L_00628f97:; BB(0x00628f97);
    /* 00628f97: mov edx, dword ptr [edi + 0xac] */ r_edx = R32((u32)(r_edi+0xacu));
    /* 00628f9d: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00628fa0: jne 0x628fbc */ if (!fZ) goto L_00628fbc;
L_00628fa2:; BB(0x00628fa2);
    /* 00628fa2: mov dword ptr [edi + 0xac], 2 */ W32((u32)(r_edi+0xacu), 0x2u);
    /* 00628fac: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00628fae: mov word ptr [edi + 0x94], si */ W16((u32)(r_edi+0x94u), (u16)r_esi);
    /* 00628fb5: mov ecx, eax */ r_ecx = r_eax;
    /* 00628fb7: call 0x6854a8 */ r_esp -= 4; W32(r_esp, 0x628fbcu); f_006854a8();
L_00628fbc:; BB(0x00628fbc);
    /* 00628fbc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00628fbd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00628fbe: ret 4 */ FN_RET(0x00628f60); r_esp += 8; return;
}

void f_00628fc4(void) /* sub_628FC4 */
{
    FN_ENTER(0x00628fc4);
    /* 00628fc4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00628fc5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00628fc7: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00628fc9: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00628fcb: push dword ptr [ebx + 0xc4] */ { u32 v = R32((u32)(r_ebx+0xc4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00628fd1: push dword ptr [ebx + 0xc0] */ { u32 v = R32((u32)(r_ebx+0xc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00628fd7: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x628fdau); call_ind(t); }
    /* 00628fda: mov dword ptr [ebx + 0xe0], eax */ W32((u32)(r_ebx+0xe0u), r_eax);
    /* 00628fe0: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00628fe3: je 0x628fe7 */ if (fZ) goto L_00628fe7;
L_00628fe5:; BB(0x00628fe5);
    /* 00628fe5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00628fe6: ret  */ FN_RET(0x00628fc4); r_esp += 4; return;
L_00628fe7:; BB(0x00628fe7);
    /* 00628fe7: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x628fecu); f_0082d7b0();
    /* 00628fec: lea ecx, [ebx + 0x38] */ r_ecx = (u32)(r_ebx+0x38u);
    /* 00628fef: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x628ff4u); f_0082d838();
    /* 00628ff4: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 00628ff7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00628ff9: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x628ffeu); f_0082d8bc();
    /* 00628ffe: mov ecx, dword ptr [ebx + 0x24] */ r_ecx = R32((u32)(r_ebx+0x24u));
    /* 00629001: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x629006u); f_00829cc8();
    /* 00629006: mov eax, dword ptr [ebx + 0xcc] */ r_eax = R32((u32)(r_ebx+0xccu));
    /* 0062900c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062900f: jne 0x62902f */ if (!fZ) goto L_0062902f;
L_00629011:; BB(0x00629011);
    /* 00629011: mov eax, dword ptr [ebx + 0xbc] */ r_eax = R32((u32)(r_ebx+0xbcu));
    /* 00629017: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00629019: je 0x629042 */ if (fZ) goto L_00629042;
L_0062901b:; BB(0x0062901b);
    /* 0062901b: push dword ptr [ebx + 0xb0] */ { u32 v = R32((u32)(r_ebx+0xb0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00629021: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00629022: push dword ptr [ebx + 0x34] */ { u32 v = R32((u32)(r_ebx+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 00629025: call 0x83046c */ r_esp -= 4; W32(r_esp, 0x62902au); f_0083046c();
    /* 0062902a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062902d: jmp 0x62903b */ goto L_0062903b;
L_0062902f:; BB(0x0062902f);
    /* 0062902f: mov eax, dword ptr [ebx + 0x34] */ r_eax = R32((u32)(r_ebx+0x34u));
    /* 00629032: push dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00629035: call 0x82e6b0 */ r_esp -= 4; W32(r_esp, 0x62903au); f_0082e6b0();
    /* 0062903a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0062903b:; BB(0x0062903b);
    /* 0062903b: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x629040u); f_0082da80();
    /* 00629040: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00629041: ret  */ FN_RET(0x00628fc4); r_esp += 4; return;
L_00629042:; BB(0x00629042);
    /* 00629042: push dword ptr [ebx + 0x34] */ { u32 v = R32((u32)(r_ebx+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 00629045: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x62904au); f_0082e1e8();
    /* 0062904a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062904b: jmp 0x62903b */ goto L_0062903b;
}

