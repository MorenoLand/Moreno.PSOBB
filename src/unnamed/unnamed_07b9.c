#include "protos.h"

void f_007b976c(void) /* sub_7B976C */
{
    FN_ENTER(0x007b976c);
    /* 007b976c: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007b976f: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 007b9773: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 007b9779: mov ecx, dword ptr [0xaae164] */ r_ecx = R32((u32)(0xaae164u));
    /* 007b977f: call 0x7b8d90 */ r_esp -= 4; W32(r_esp, 0x7b9784u); f_007b8d90();
    /* 007b9784: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007b9787: ret  */ FN_RET(0x007b976c); r_esp += 4; return;
}

void f_007b9788(void) /* sub_7B9788 */
{
    FN_ENTER(0x007b9788);
    /* 007b9788: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007b978b: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 007b978f: mov ecx, dword ptr [0xaae168] */ r_ecx = R32((u32)(0xaae168u));
    /* 007b9795: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007b9797: call 0x7b8d90 */ r_esp -= 4; W32(r_esp, 0x7b979cu); f_007b8d90();
    /* 007b979c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007b979f: ret  */ FN_RET(0x007b9788); r_esp += 4; return;
}

void f_007b97a0(void) /* sub_7B97A0 */
{
    FN_ENTER(0x007b97a0);
    /* 007b97a0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007b97a1: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
    /* 007b97a5: mov edx, dword ptr [esi + 0x1c] */ r_edx = R32((u32)(r_esi+0x1cu));
    /* 007b97a8: mov eax, dword ptr [esi + 0x24] */ r_eax = R32((u32)(r_esi+0x24u));
    /* 007b97ab: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 007b97af: mov esi, dword ptr [esi + 0xc] */ r_esi = R32((u32)(r_esi+0xcu));
    /* 007b97b2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007b97b4: je 0x7b97cc */ if (fZ) goto L_007b97cc;
L_007b97b6:; BB(0x007b97b6);
    /* 007b97b6: mov dword ptr [ecx + 4], 0 */ W32((u32)(r_ecx+0x4u), 0x0u);
    /* 007b97bd: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 007b97bf: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 007b97c2: mov dword ptr [ecx + 0xc], esi */ W32((u32)(r_ecx+0xcu), r_esi);
    /* 007b97c5: mov eax, 1 */ r_eax = 0x1u;
    /* 007b97ca: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007b97cb: ret  */ FN_RET(0x007b97a0); r_esp += 4; return;
L_007b97cc:; BB(0x007b97cc);
    /* 007b97cc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007b97ce: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007b97cf: ret  */ FN_RET(0x007b97a0); r_esp += 4; return;
}

void f_007b97d0(void) /* sub_7B97D0 */
{
    FN_ENTER(0x007b97d0);
    /* 007b97d0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007b97d1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007b97d2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007b97d3: sub esp, 0x6c */ {  u32 a = r_esp; u32 b = 0x6cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007b97d6: mov eax, dword ptr [esp + 0x8c] */ r_eax = R32((u32)(r_esp+0x8cu));
    /* 007b97dd: mov ebp, dword ptr [esp + 0x90] */ r_ebp = R32((u32)(r_esp+0x90u));
    /* 007b97e4: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 007b97e7: fld dword ptr [eax + 0x10] */ FPUSH(R_F32((u32)(r_eax+0x10u)));
    /* 007b97ea: fld dword ptr [eax + 0xc] */ FPUSH(R_F32((u32)(r_eax+0xcu)));
    /* 007b97ed: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 007b97f0: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 007b97f3: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 007b97f7: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 007b97fa: mov eax, dword ptr [eax + 0xc] */ r_eax = R32((u32)(r_eax+0xcu));
    /* 007b97fd: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 007b9805: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007b9807: fchs  */ ST(0) = -ST(0);
    /* 007b9809: fst dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0));
    /* 007b980d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007b980f: fchs  */ ST(0) = -ST(0);
    /* 007b9811: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 007b9815: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 007b981a: mov dword ptr [esp + 0x10], 0x42480000 */ W32((u32)(r_esp+0x10u), 0x42480000u);
    /* 007b9822: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007b9824: fst dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0));
    /* 007b9828: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007b982a: fst dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0));
    /* 007b982e: fst dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0));
    /* 007b9832: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007b9834: fst dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0));
    /* 007b9838: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 007b983c: fst dword ptr [esp + 0x50] */ W_F32((u32)(r_esp+0x50u), ST(0));
    /* 007b9840: fstp dword ptr [esp + 0x5c] */ W_F32((u32)(r_esp+0x5cu), ST(0)); FPOP();
    /* 007b9844: mov dword ptr [esp + 0x1c], 0x42480000 */ W32((u32)(r_esp+0x1cu), 0x42480000u);
    /* 007b984c: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 007b9850: mov dword ptr [esp + 0x28], 0x42480000 */ W32((u32)(r_esp+0x28u), 0x42480000u);
    /* 007b9858: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 007b985c: mov dword ptr [esp + 0x34], 0x42480000 */ W32((u32)(r_esp+0x34u), 0x42480000u);
    /* 007b9864: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 007b9868: mov dword ptr [esp + 0x40], 0xc2480000 */ W32((u32)(r_esp+0x40u), 0xc2480000u);
    /* 007b9870: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 007b9874: mov dword ptr [esp + 0x4c], 0xc2480000 */ W32((u32)(r_esp+0x4cu), 0xc2480000u);
    /* 007b987c: mov dword ptr [esp + 0x54], edx */ W32((u32)(r_esp+0x54u), r_edx);
    /* 007b9880: mov dword ptr [esp + 0x58], 0xc2480000 */ W32((u32)(r_esp+0x58u), 0xc2480000u);
    /* 007b9888: mov dword ptr [esp + 0x60], edx */ W32((u32)(r_esp+0x60u), r_edx);
    /* 007b988c: mov dword ptr [esp + 0x64], 0xc2480000 */ W32((u32)(r_esp+0x64u), 0xc2480000u);
    /* 007b9894: mov dword ptr [esp + 0x68], eax */ W32((u32)(r_esp+0x68u), r_eax);
    /* 007b9898: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x7b989du); f_0082d990();
    /* 007b989d: mov edx, dword ptr [esp + 0x88] */ r_edx = R32((u32)(r_esp+0x88u));
    /* 007b98a4: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007b98a6: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x7b98abu); f_0082d8bc();
    /* 007b98ab: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007b98ad: mov esi, eax */ r_esi = r_eax;
L_007b98af:; BB(0x007b98af);
    /* 007b98af: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 007b98b3: lea edi, [edx + esi] */ r_edi = (u32)(r_edx+r_esi);
    /* 007b98b6: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007b98b7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007b98b8: call 0x83a610 */ r_esp -= 4; W32(r_esp, 0x7b98bdu); f_0083a610();
    /* 007b98bd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007b98c0: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 007b98c3: mov ecx, edi */ r_ecx = r_edi;
    /* 007b98c5: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x7b98cau); f_0082ebac();
    /* 007b98ca: add esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007b98cd: cmp esi, 0x60 */ {  u32 a = r_esi; u32 b = 0x60u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007b98d0: jl 0x7b98af */ if ((fS!=fO)) goto L_007b98af;
L_007b98d2:; BB(0x007b98d2);
    /* 007b98d2: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x7b98d7u); f_0082da80();
    /* 007b98d7: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b98d9: je 0x7b9993 */ if (fZ) goto L_007b9993;
L_007b98df:; BB(0x007b98df);
    /* 007b98df: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 007b98e3: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 007b98e7: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 007b98eb: mov dword ptr [ebp], eax */ W32((u32)(r_ebp), r_eax);
    /* 007b98ee: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 007b98f2: mov dword ptr [ebp + 4], edx */ W32((u32)(r_ebp+0x4u), r_edx);
    /* 007b98f5: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
    /* 007b98f8: mov dword ptr [ebp + 0xc], eax */ W32((u32)(r_ebp+0xcu), r_eax);
    /* 007b98fb: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 007b98ff: mov dword ptr [ebp + 0x10], eax */ W32((u32)(r_ebp+0x10u), r_eax);
    /* 007b9902: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 007b9906: mov dword ptr [ebp + 0x14], eax */ W32((u32)(r_ebp+0x14u), r_eax);
    /* 007b9909: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 007b990d: mov dword ptr [ebp + 0x18], eax */ W32((u32)(r_ebp+0x18u), r_eax);
    /* 007b9910: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 007b9914: mov dword ptr [ebp + 0x1c], eax */ W32((u32)(r_ebp+0x1cu), r_eax);
    /* 007b9917: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 007b991b: mov dword ptr [ebp + 0x20], eax */ W32((u32)(r_ebp+0x20u), r_eax);
    /* 007b991e: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 007b9922: mov dword ptr [ebp + 0x24], eax */ W32((u32)(r_ebp+0x24u), r_eax);
    /* 007b9925: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 007b9929: mov dword ptr [ebp + 0x28], eax */ W32((u32)(r_ebp+0x28u), r_eax);
    /* 007b992c: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 007b9930: mov dword ptr [ebp + 0x2c], eax */ W32((u32)(r_ebp+0x2cu), r_eax);
    /* 007b9933: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 007b9937: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 007b993a: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 007b993e: mov dword ptr [ebp + 0x34], eax */ W32((u32)(r_ebp+0x34u), r_eax);
    /* 007b9941: mov eax, dword ptr [esp + 0x44] */ r_eax = R32((u32)(r_esp+0x44u));
    /* 007b9945: mov dword ptr [ebp + 0x38], eax */ W32((u32)(r_ebp+0x38u), r_eax);
    /* 007b9948: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 007b994c: mov dword ptr [ebp + 0x3c], eax */ W32((u32)(r_ebp+0x3cu), r_eax);
    /* 007b994f: mov eax, dword ptr [esp + 0x4c] */ r_eax = R32((u32)(r_esp+0x4cu));
    /* 007b9953: mov dword ptr [ebp + 0x40], eax */ W32((u32)(r_ebp+0x40u), r_eax);
    /* 007b9956: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 007b995a: mov dword ptr [ebp + 0x44], eax */ W32((u32)(r_ebp+0x44u), r_eax);
    /* 007b995d: mov eax, dword ptr [esp + 0x54] */ r_eax = R32((u32)(r_esp+0x54u));
    /* 007b9961: mov dword ptr [ebp + 0x48], eax */ W32((u32)(r_ebp+0x48u), r_eax);
    /* 007b9964: mov eax, dword ptr [esp + 0x58] */ r_eax = R32((u32)(r_esp+0x58u));
    /* 007b9968: mov dword ptr [ebp + 0x4c], eax */ W32((u32)(r_ebp+0x4cu), r_eax);
    /* 007b996b: mov eax, dword ptr [esp + 0x5c] */ r_eax = R32((u32)(r_esp+0x5cu));
    /* 007b996f: mov dword ptr [ebp + 0x50], eax */ W32((u32)(r_ebp+0x50u), r_eax);
    /* 007b9972: mov eax, dword ptr [esp + 0x60] */ r_eax = R32((u32)(r_esp+0x60u));
    /* 007b9976: mov dword ptr [ebp + 0x54], eax */ W32((u32)(r_ebp+0x54u), r_eax);
    /* 007b9979: mov eax, dword ptr [esp + 0x64] */ r_eax = R32((u32)(r_esp+0x64u));
    /* 007b997d: mov dword ptr [ebp + 0x58], eax */ W32((u32)(r_ebp+0x58u), r_eax);
    /* 007b9980: mov eax, dword ptr [esp + 0x68] */ r_eax = R32((u32)(r_esp+0x68u));
    /* 007b9984: mov dword ptr [ebp + 0x5c], eax */ W32((u32)(r_ebp+0x5cu), r_eax);
    /* 007b9987: mov eax, 1 */ r_eax = 0x1u;
    /* 007b998c: add esp, 0x6c */ {  u32 a = r_esp; u32 b = 0x6cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007b998f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007b9990: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007b9991: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007b9992: ret  */ FN_RET(0x007b97d0); r_esp += 4; return;
L_007b9993:; BB(0x007b9993);
    /* 007b9993: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007b9995: add esp, 0x6c */ {  u32 a = r_esp; u32 b = 0x6cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007b9998: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007b9999: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007b999a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007b999b: ret  */ FN_RET(0x007b97d0); r_esp += 4; return;
}

void f_007b999c(void) /* sub_7B999C */
{
    FN_ENTER(0x007b999c);
    /* 007b999c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007b999d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007b999e: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007b99a1: mov esi, dword ptr [esp + 0x24] */ r_esi = R32((u32)(r_esp+0x24u));
    /* 007b99a5: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b99a7: je 0x7b9a82 */ if (fZ) goto L_007b9a82;
L_007b99ad:; BB(0x007b99ad);
    /* 007b99ad: mov eax, dword ptr [esi + 0xa4] */ r_eax = R32((u32)(r_esi+0xa4u));
    /* 007b99b3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b99b5: je 0x7b9a82 */ if (fZ) goto L_007b9a82;
L_007b99bb:; BB(0x007b99bb);
    /* 007b99bb: mov ecx, esi */ r_ecx = r_esi;
    /* 007b99bd: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x7b99c2u); f_008173b4();
    /* 007b99c2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b99c4: je 0x7b9a82 */ if (fZ) goto L_007b9a82;
L_007b99ca:; BB(0x007b99ca);
    /* 007b99ca: mov ebx, dword ptr [esi + 0xa8] */ r_ebx = R32((u32)(r_esi+0xa8u));
    /* 007b99d0: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 007b99d5: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x7b99dau); f_0082d990();
    /* 007b99da: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 007b99dd: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007b99df: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x7b99e4u); f_0082d8bc();
    /* 007b99e4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007b99e6: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 007b99e8: jle 0x7b9a7d */ if ((fZ||fS!=fO)) goto L_007b9a7d;
L_007b99ee:; BB(0x007b99ee);
    /* 007b99ee: mov dword ptr [esp + 0x10], edi */ W32((u32)(r_esp+0x10u), r_edi);
    /* 007b99f2: mov edi, esi */ r_edi = r_esi;
    /* 007b99f4: mov dword ptr [esp + 0xc], ebp */ W32((u32)(r_esp+0xcu), r_ebp);
    /* 007b99f8: lea ecx, [esi + 0x38] */ r_ecx = (u32)(r_esi+0x38u);
    /* 007b99fb: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 007b99ff: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 007b9a02: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007b9a04: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007b9a06: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007b9a08: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007b9a0a: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007b9a0c: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007b9a0e: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007b9a10: mov ebp, ebx */ r_ebp = r_ebx;
    /* 007b9a12: mov ebx, eax */ r_ebx = r_eax;
    /* 007b9a14: mov esi, edx */ r_esi = r_edx;
L_007b9a16:; BB(0x007b9a16);
    /* 007b9a16: mov edx, dword ptr [edi + 0xa4] */ r_edx = R32((u32)(r_edi+0xa4u));
    /* 007b9a1c: mov eax, dword ptr [ebx + edx] */ r_eax = R32((u32)(r_ebx+r_edx));
    /* 007b9a1f: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 007b9a22: mov eax, dword ptr [ebx + edx + 4] */ r_eax = R32((u32)(r_ebx+r_edx+0x4u));
    /* 007b9a26: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 007b9a2a: mov eax, dword ptr [ebx + edx + 8] */ r_eax = R32((u32)(r_ebx+r_edx+0x8u));
    /* 007b9a2e: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 007b9a32: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 007b9a35: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 007b9a38: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007b9a39: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007b9a3a: call 0x83a610 */ r_esp -= 4; W32(r_esp, 0x7b9a3fu); f_0083a610();
    /* 007b9a3f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007b9a42: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 007b9a46: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 007b9a49: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x7b9a4eu); f_0082ebac();
    /* 007b9a4e: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 007b9a51: mov eax, dword ptr [edi + 0xa4] */ r_eax = R32((u32)(r_edi+0xa4u));
    /* 007b9a57: mov dword ptr [ebx + eax + 0x1c], edx */ W32((u32)(r_ebx+r_eax+0x1cu), r_edx);
    /* 007b9a5b: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007b9a5e: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 007b9a62: mov dword ptr [ebx + eax + 0x20], edx */ W32((u32)(r_ebx+r_eax+0x20u), r_edx);
    /* 007b9a66: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 007b9a6a: mov dword ptr [ebx + eax + 0x24], edx */ W32((u32)(r_ebx+r_eax+0x24u), r_edx);
    /* 007b9a6e: add ebx, 0x2c */ {  u32 a = r_ebx; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007b9a71: cmp esi, ebp */ {  u32 a = r_esi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007b9a73: jl 0x7b9a16 */ if ((fS!=fO)) goto L_007b9a16;
L_007b9a75:; BB(0x007b9a75);
    /* 007b9a75: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 007b9a79: mov ebp, dword ptr [esp + 0xc] */ r_ebp = R32((u32)(r_esp+0xcu));
L_007b9a7d:; BB(0x007b9a7d);
    /* 007b9a7d: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x7b9a82u); f_0082da80();
L_007b9a82:; BB(0x007b9a82);
    /* 007b9a82: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007b9a85: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007b9a86: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007b9a87: ret  */ FN_RET(0x007b999c); r_esp += 4; return;
}

void f_007b9a88(void) /* sub_7B9A88 */
{
    FN_ENTER(0x007b9a88);
    /* 007b9a88: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007b9a89: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007b9a8a: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007b9a8d: mov ebp, ecx */ r_ebp = r_ecx;
    /* 007b9a8f: mov esi, dword ptr [esp + 0x24] */ r_esi = R32((u32)(r_esp+0x24u));
    /* 007b9a93: mov eax, dword ptr [ebp + 0xa4] */ r_eax = R32((u32)(r_ebp+0xa4u));
    /* 007b9a99: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b9a9b: je 0x7b9aeb */ if (fZ) goto L_007b9aeb;
L_007b9a9d:; BB(0x007b9a9d);
    /* 007b9a9d: mov eax, dword ptr [ebp + 0x9c] */ r_eax = R32((u32)(r_ebp+0x9cu));
    /* 007b9aa3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b9aa5: je 0x7b9ab5 */ if (fZ) goto L_007b9ab5;
L_007b9aa7:; BB(0x007b9aa7);
    /* 007b9aa7: mov eax, dword ptr [ebp + 0xa4] */ r_eax = R32((u32)(r_ebp+0xa4u));
    /* 007b9aad: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007b9ab0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007b9ab1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007b9ab2: ret 8 */ FN_RET(0x007b9a88); r_esp += 12; return;
L_007b9ab5:; BB(0x007b9ab5);
    /* 007b9ab5: mov esi, dword ptr [ebp + 0xa8] */ r_esi = R32((u32)(r_ebp+0xa8u));
    /* 007b9abb: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
    /* 007b9abe: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007b9ac0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007b9ac1: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x7b9ac6u); f_008581c5();
    /* 007b9ac6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007b9ac7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b9ac9: je 0x7b9ae7 */ if (fZ) goto L_007b9ae7;
L_007b9acb:; BB(0x007b9acb);
    /* 007b9acb: mov edx, eax */ r_edx = r_eax;
    /* 007b9acd: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b9acf: je 0x7b9adf */ if (fZ) goto L_007b9adf;
L_007b9ad1:; BB(0x007b9ad1);
    /* 007b9ad1: mov dword ptr [edx], 0 */ W32((u32)(r_edx), 0x0u);
    /* 007b9ad7: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007b9ada: add esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_esi = r; fZ = (r == 0); }
    /* 007b9add: jne 0x7b9ad1 */ if (!fZ) goto L_007b9ad1;
L_007b9adf:; BB(0x007b9adf);
    /* 007b9adf: mov dword ptr [ebp + 0x9c], eax */ W32((u32)(r_ebp+0x9cu), r_eax);
    /* 007b9ae5: jmp 0x7b9aa7 */ goto L_007b9aa7;
L_007b9ae7:; BB(0x007b9ae7);
    /* 007b9ae7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007b9ae9: jmp 0x7b9adf */ goto L_007b9adf;
L_007b9aeb:; BB(0x007b9aeb);
    /* 007b9aeb: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 007b9aef: mov edx, dword ptr [esp + 0x28] */ r_edx = R32((u32)(r_esp+0x28u));
    /* 007b9af3: mov dword ptr [ebp + 0xa8], eax */ W32((u32)(r_ebp+0xa8u), r_eax);
    /* 007b9af9: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 007b9afd: lea edx, [edx + edx] */ r_edx = (u32)(r_edx+r_edx);
    /* 007b9b00: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007b9b02: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007b9b04: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 007b9b08: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007b9b0a: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007b9b0c: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007b9b0e: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007b9b10: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007b9b12: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007b9b13: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x7b9b18u); f_008581c5();
    /* 007b9b18: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007b9b19: mov edx, dword ptr [ebp + 0xa8] */ r_edx = R32((u32)(r_ebp+0xa8u));
    /* 007b9b1f: mov dword ptr [ebp + 0xa4], eax */ W32((u32)(r_ebp+0xa4u), r_eax);
    /* 007b9b25: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007b9b27: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 007b9b29: jle 0x7b9bac */ if ((fZ||fS!=fO)) goto L_007b9bac;
L_007b9b2f:; BB(0x007b9b2f);
    /* 007b9b2f: mov dword ptr [esp + 0xc], ebx */ W32((u32)(r_esp+0xcu), r_ebx);
    /* 007b9b33: lea edx, [ecx + ecx] */ r_edx = (u32)(r_ecx+r_ecx);
    /* 007b9b36: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007b9b38: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007b9b3a: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007b9b3c: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007b9b3e: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007b9b40: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007b9b42: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007b9b44: jmp 0x7b9b4c */ goto L_007b9b4c;
L_007b9b46:; BB(0x007b9b46);
    /* 007b9b46: mov eax, dword ptr [ebp + 0xa4] */ r_eax = R32((u32)(r_ebp+0xa4u));
L_007b9b4c:; BB(0x007b9b4c);
    /* 007b9b4c: mov ebx, dword ptr [esi] */ r_ebx = R32((u32)(r_esi));
    /* 007b9b4e: mov dword ptr [edx + eax], ebx */ W32((u32)(r_edx+r_eax), r_ebx);
    /* 007b9b51: mov ebx, dword ptr [esi + 4] */ r_ebx = R32((u32)(r_esi+0x4u));
    /* 007b9b54: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007b9b57: mov dword ptr [edx + eax + 4], ebx */ W32((u32)(r_edx+r_eax+0x4u), r_ebx);
    /* 007b9b5b: mov ebx, dword ptr [esi + 8] */ r_ebx = R32((u32)(r_esi+0x8u));
    /* 007b9b5e: mov dword ptr [edx + eax + 8], ebx */ W32((u32)(r_edx+r_eax+0x8u), r_ebx);
    /* 007b9b62: mov ebx, dword ptr [esi + 0xc] */ r_ebx = R32((u32)(r_esi+0xcu));
    /* 007b9b65: mov dword ptr [edx + eax + 0xc], ebx */ W32((u32)(r_edx+r_eax+0xcu), r_ebx);
    /* 007b9b69: mov ebx, dword ptr [esi + 0x10] */ r_ebx = R32((u32)(r_esi+0x10u));
    /* 007b9b6c: mov dword ptr [edx + eax + 0x10], ebx */ W32((u32)(r_edx+r_eax+0x10u), r_ebx);
    /* 007b9b70: mov ebx, dword ptr [esi + 0x14] */ r_ebx = R32((u32)(r_esi+0x14u));
    /* 007b9b73: mov dword ptr [edx + eax + 0x14], ebx */ W32((u32)(r_edx+r_eax+0x14u), r_ebx);
    /* 007b9b77: mov ebx, dword ptr [esi + 0x18] */ r_ebx = R32((u32)(r_esi+0x18u));
    /* 007b9b7a: mov dword ptr [edx + eax + 0x18], ebx */ W32((u32)(r_edx+r_eax+0x18u), r_ebx);
    /* 007b9b7e: mov ebx, dword ptr [esi + 0x1c] */ r_ebx = R32((u32)(r_esi+0x1cu));
    /* 007b9b81: mov dword ptr [edx + eax + 0x1c], ebx */ W32((u32)(r_edx+r_eax+0x1cu), r_ebx);
    /* 007b9b85: mov ebx, dword ptr [esi + 0x20] */ r_ebx = R32((u32)(r_esi+0x20u));
    /* 007b9b88: mov dword ptr [edx + eax + 0x20], ebx */ W32((u32)(r_edx+r_eax+0x20u), r_ebx);
    /* 007b9b8c: mov ebx, dword ptr [esi + 0x24] */ r_ebx = R32((u32)(r_esi+0x24u));
    /* 007b9b8f: mov dword ptr [edx + eax + 0x24], ebx */ W32((u32)(r_edx+r_eax+0x24u), r_ebx);
    /* 007b9b93: mov ebx, dword ptr [esi + 0x28] */ r_ebx = R32((u32)(r_esi+0x28u));
    /* 007b9b96: mov dword ptr [edx + eax + 0x28], ebx */ W32((u32)(r_edx+r_eax+0x28u), r_ebx);
    /* 007b9b9a: add esi, 0x2c */ {  u32 a = r_esi; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007b9b9d: add edx, 0x2c */ {  u32 a = r_edx; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007b9ba0: cmp ecx, dword ptr [ebp + 0xa8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xa8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007b9ba6: jl 0x7b9b46 */ if ((fS!=fO)) goto L_007b9b46;
L_007b9ba8:; BB(0x007b9ba8);
    /* 007b9ba8: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
L_007b9bac:; BB(0x007b9bac);
    /* 007b9bac: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b9bae: je 0x7b9a9d */ if (fZ) goto L_007b9a9d;
L_007b9bb4:; BB(0x007b9bb4);
    /* 007b9bb4: mov eax, dword ptr [ebp + 0xa4] */ r_eax = R32((u32)(r_ebp+0xa4u));
    /* 007b9bba: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b9bbc: je 0x7b9a9d */ if (fZ) goto L_007b9a9d;
L_007b9bc2:; BB(0x007b9bc2);
    /* 007b9bc2: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007b9bc4: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x7b9bc9u); f_008173b4();
    /* 007b9bc9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b9bcb: je 0x7b9a9d */ if (fZ) goto L_007b9a9d;
L_007b9bd1:; BB(0x007b9bd1);
    /* 007b9bd1: mov esi, dword ptr [ebp + 0xa8] */ r_esi = R32((u32)(r_ebp+0xa8u));
    /* 007b9bd7: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 007b9bdc: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x7b9be1u); f_0082d990();
    /* 007b9be1: mov edx, dword ptr [ebp + 0x60] */ r_edx = R32((u32)(r_ebp+0x60u));
    /* 007b9be4: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007b9be6: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x7b9bebu); f_0082d8bc();
    /* 007b9beb: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007b9bed: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 007b9bef: jle 0x7b9c82 */ if ((fZ||fS!=fO)) goto L_007b9c82;
L_007b9bf5:; BB(0x007b9bf5);
    /* 007b9bf5: mov dword ptr [esp + 0xc], ebx */ W32((u32)(r_esp+0xcu), r_ebx);
    /* 007b9bf9: mov ebx, edx */ r_ebx = r_edx;
    /* 007b9bfb: mov dword ptr [esp + 0x10], edi */ W32((u32)(r_esp+0x10u), r_edi);
    /* 007b9bff: lea ecx, [ebp + 0x38] */ r_ecx = (u32)(r_ebp+0x38u);
    /* 007b9c02: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 007b9c06: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 007b9c09: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007b9c0b: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007b9c0d: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007b9c0f: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007b9c11: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007b9c13: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007b9c15: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007b9c17: mov edi, esi */ r_edi = r_esi;
    /* 007b9c19: mov esi, eax */ r_esi = r_eax;
L_007b9c1b:; BB(0x007b9c1b);
    /* 007b9c1b: mov edx, dword ptr [ebp + 0xa4] */ r_edx = R32((u32)(r_ebp+0xa4u));
    /* 007b9c21: mov eax, dword ptr [esi + edx] */ r_eax = R32((u32)(r_esi+r_edx));
    /* 007b9c24: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 007b9c27: mov eax, dword ptr [esi + edx + 4] */ r_eax = R32((u32)(r_esi+r_edx+0x4u));
    /* 007b9c2b: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 007b9c2f: mov eax, dword ptr [esi + edx + 8] */ r_eax = R32((u32)(r_esi+r_edx+0x8u));
    /* 007b9c33: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 007b9c37: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 007b9c3a: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 007b9c3d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007b9c3e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007b9c3f: call 0x83a610 */ r_esp -= 4; W32(r_esp, 0x7b9c44u); f_0083a610();
    /* 007b9c44: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007b9c47: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 007b9c4b: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 007b9c4e: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x7b9c53u); f_0082ebac();
    /* 007b9c53: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 007b9c56: mov eax, dword ptr [ebp + 0xa4] */ r_eax = R32((u32)(r_ebp+0xa4u));
    /* 007b9c5c: mov dword ptr [esi + eax + 0x1c], edx */ W32((u32)(r_esi+r_eax+0x1cu), r_edx);
    /* 007b9c60: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007b9c63: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 007b9c67: mov dword ptr [esi + eax + 0x20], edx */ W32((u32)(r_esi+r_eax+0x20u), r_edx);
    /* 007b9c6b: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 007b9c6f: mov dword ptr [esi + eax + 0x24], edx */ W32((u32)(r_esi+r_eax+0x24u), r_edx);
    /* 007b9c73: add esi, 0x2c */ {  u32 a = r_esi; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007b9c76: cmp ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007b9c78: jl 0x7b9c1b */ if ((fS!=fO)) goto L_007b9c1b;
L_007b9c7a:; BB(0x007b9c7a);
    /* 007b9c7a: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 007b9c7e: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
L_007b9c82:; BB(0x007b9c82);
    /* 007b9c82: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x7b9c87u); f_0082da80();
    /* 007b9c87: jmp 0x7b9a9d */ goto L_007b9a9d;
}

void f_007b9c8c(void) /* sub_7B9C8C */
{
    FN_ENTER(0x007b9c8c);
    /* 007b9c8c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007b9c8d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 007b9c8f: mov eax, dword ptr [ebx + 0x9c] */ r_eax = R32((u32)(r_ebx+0x9cu));
    /* 007b9c95: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b9c97: je 0x7b9cac */ if (fZ) goto L_007b9cac;
L_007b9c99:; BB(0x007b9c99);
    /* 007b9c99: je 0x7b9ca2 */ if (fZ) goto L_007b9ca2;
L_007b9c9b:; BB(0x007b9c9b);
    /* 007b9c9b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007b9c9c: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x7b9ca1u); f_00857e98();
    /* 007b9ca1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_007b9ca2:; BB(0x007b9ca2);
    /* 007b9ca2: mov dword ptr [ebx + 0x9c], 0 */ W32((u32)(r_ebx+0x9cu), 0x0u);
L_007b9cac:; BB(0x007b9cac);
    /* 007b9cac: mov eax, dword ptr [ebx + 0xa4] */ r_eax = R32((u32)(r_ebx+0xa4u));
    /* 007b9cb2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007b9cb4: je 0x7b9cc7 */ if (fZ) goto L_007b9cc7;
L_007b9cb6:; BB(0x007b9cb6);
    /* 007b9cb6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007b9cb7: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x7b9cbcu); f_00857e98();
    /* 007b9cbc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007b9cbd: mov dword ptr [ebx + 0xa4], 0 */ W32((u32)(r_ebx+0xa4u), 0x0u);
L_007b9cc7:; BB(0x007b9cc7);
    /* 007b9cc7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007b9cc8: ret  */ FN_RET(0x007b9c8c); r_esp += 4; return;
}

void f_007b9ccc(void) /* sub_7B9CCC */
{
    FN_ENTER(0x007b9ccc);
    /* 007b9ccc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007b9ccd: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007b9cce: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007b9cd1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 007b9cd3: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 007b9cd7: mov dword ptr [ebx + 0xa8], 1 */ W32((u32)(r_ebx+0xa8u), 0x1u);
    /* 007b9ce1: mov dword ptr [ebx + 0xa4], edx */ W32((u32)(r_ebx+0xa4u), r_edx);
    /* 007b9ce7: lea eax, [ebx + 0xa0] */ r_eax = (u32)(r_ebx+0xa0u);
    /* 007b9ced: mov dword ptr [ebx + 0x9c], eax */ W32((u32)(r_ebx+0x9cu), r_eax);
    /* 007b9cf3: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b9cf5: je 0x7b9dd5 */ if (fZ) goto L_007b9dd5;
L_007b9cfb:; BB(0x007b9cfb);
    /* 007b9cfb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b9cfd: je 0x7b9dd5 */ if (fZ) goto L_007b9dd5;
L_007b9d03:; BB(0x007b9d03);
    /* 007b9d03: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007b9d05: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x7b9d0au); f_008173b4();
    /* 007b9d0a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b9d0c: jne 0x7b9d19 */ if (!fZ) goto L_007b9d19;
L_007b9d0e:; BB(0x007b9d0e);
    /* 007b9d0e: mov edx, dword ptr [ebx + 0xa4] */ r_edx = R32((u32)(r_ebx+0xa4u));
    /* 007b9d14: jmp 0x7b9dd5 */ goto L_007b9dd5;
L_007b9d19:; BB(0x007b9d19);
    /* 007b9d19: mov esi, dword ptr [ebx + 0xa8] */ r_esi = R32((u32)(r_ebx+0xa8u));
    /* 007b9d1f: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 007b9d24: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x7b9d29u); f_0082d990();
    /* 007b9d29: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 007b9d2c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007b9d2e: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x7b9d33u); f_0082d8bc();
    /* 007b9d33: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007b9d35: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 007b9d37: jle 0x7b9dca */ if ((fZ||fS!=fO)) goto L_007b9dca;
L_007b9d3d:; BB(0x007b9d3d);
    /* 007b9d3d: mov dword ptr [esp + 0x10], edi */ W32((u32)(r_esp+0x10u), r_edi);
    /* 007b9d41: mov edi, esi */ r_edi = r_esi;
    /* 007b9d43: mov dword ptr [esp + 0xc], ebp */ W32((u32)(r_esp+0xcu), r_ebp);
    /* 007b9d47: lea ecx, [ebx + 0x38] */ r_ecx = (u32)(r_ebx+0x38u);
    /* 007b9d4a: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 007b9d4e: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 007b9d51: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007b9d53: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007b9d55: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007b9d57: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007b9d59: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007b9d5b: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007b9d5d: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007b9d5f: mov esi, eax */ r_esi = r_eax;
    /* 007b9d61: mov ebp, edx */ r_ebp = r_edx;
L_007b9d63:; BB(0x007b9d63);
    /* 007b9d63: mov edx, dword ptr [ebx + 0xa4] */ r_edx = R32((u32)(r_ebx+0xa4u));
    /* 007b9d69: mov eax, dword ptr [esi + edx] */ r_eax = R32((u32)(r_esi+r_edx));
    /* 007b9d6c: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 007b9d6f: mov eax, dword ptr [esi + edx + 4] */ r_eax = R32((u32)(r_esi+r_edx+0x4u));
    /* 007b9d73: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 007b9d77: mov eax, dword ptr [esi + edx + 8] */ r_eax = R32((u32)(r_esi+r_edx+0x8u));
    /* 007b9d7b: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 007b9d7f: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 007b9d82: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 007b9d85: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007b9d86: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007b9d87: call 0x83a610 */ r_esp -= 4; W32(r_esp, 0x7b9d8cu); f_0083a610();
    /* 007b9d8c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007b9d8f: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 007b9d93: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 007b9d96: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x7b9d9bu); f_0082ebac();
    /* 007b9d9b: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 007b9d9e: mov eax, dword ptr [ebx + 0xa4] */ r_eax = R32((u32)(r_ebx+0xa4u));
    /* 007b9da4: mov dword ptr [esi + eax + 0x1c], edx */ W32((u32)(r_esi+r_eax+0x1cu), r_edx);
    /* 007b9da8: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007b9dab: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 007b9daf: mov dword ptr [esi + eax + 0x20], edx */ W32((u32)(r_esi+r_eax+0x20u), r_edx);
    /* 007b9db3: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 007b9db7: mov dword ptr [esi + eax + 0x24], edx */ W32((u32)(r_esi+r_eax+0x24u), r_edx);
    /* 007b9dbb: add esi, 0x2c */ {  u32 a = r_esi; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007b9dbe: cmp ebp, edi */ {  u32 a = r_ebp; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007b9dc0: jl 0x7b9d63 */ if ((fS!=fO)) goto L_007b9d63;
L_007b9dc2:; BB(0x007b9dc2);
    /* 007b9dc2: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 007b9dc6: mov ebp, dword ptr [esp + 0xc] */ r_ebp = R32((u32)(r_esp+0xcu));
L_007b9dca:; BB(0x007b9dca);
    /* 007b9dca: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x7b9dcfu); f_0082da80();
    /* 007b9dcf: mov edx, dword ptr [ebx + 0xa4] */ r_edx = R32((u32)(r_ebx+0xa4u));
L_007b9dd5:; BB(0x007b9dd5);
    /* 007b9dd5: mov eax, edx */ r_eax = r_edx;
    /* 007b9dd7: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007b9dda: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007b9ddb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007b9ddc: ret 4 */ FN_RET(0x007b9ccc); r_esp += 8; return;
}

void f_007b9de0(void) /* sub_7B9DE0 */
{
    FN_ENTER(0x007b9de0);
    /* 007b9de0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007b9de2: mov dword ptr [ecx + 0x9c], eax */ W32((u32)(r_ecx+0x9cu), r_eax);
    /* 007b9de8: mov dword ptr [ecx + 0xa4], eax */ W32((u32)(r_ecx+0xa4u), r_eax);
    /* 007b9dee: ret  */ FN_RET(0x007b9de0); r_esp += 4; return;
}

void f_007b9df0(void) /* sub_7B9DF0 */
{
    FN_ENTER(0x007b9df0);
    /* 007b9df0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007b9df1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007b9df2: movzx eax, word ptr [esp + 0xc] */ r_eax = (u32)R16((u32)(r_esp+0xcu));
    /* 007b9df7: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b9dfc: je 0x7b9ec3 */ if (fZ) goto L_007b9ec3;
L_007b9e02:; BB(0x007b9e02);
    /* 007b9e02: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007b9e05: jl 0x7b9e59 */ if ((fS!=fO)) goto L_007b9e59;
L_007b9e07:; BB(0x007b9e07);
    /* 007b9e07: mov ecx, dword ptr [0xaae16c] */ r_ecx = R32((u32)(0xaae16cu));
    /* 007b9e0d: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 007b9e0f: add ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007b9e12: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 007b9e14: jle 0x7b9e42 */ if ((fZ||fS!=fO)) goto L_007b9e42;
L_007b9e16:; BB(0x007b9e16);
    /* 007b9e16: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
L_007b9e19:; BB(0x007b9e19);
    /* 007b9e19: lea edx, [ebx + ecx] */ r_edx = (u32)(r_ebx+r_ecx);
    /* 007b9e1c: mov esi, edx */ r_esi = r_edx;
    /* 007b9e1e: shr esi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 007b9e21: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007b9e23: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 007b9e25: mov esi, dword ptr [edx*4 + 0xaad720] */ r_esi = R32((u32)(r_edx*4+0xaad720u));
    /* 007b9e2c: movzx esi, word ptr [esi + 0x1c] */ r_esi = (u32)R16((u32)(r_esi+0x1cu));
    /* 007b9e30: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007b9e32: jge 0x7b9e39 */ if ((fS==fO)) goto L_007b9e39;
L_007b9e34:; BB(0x007b9e34);
    /* 007b9e34: lea ebx, [edx + 1] */ r_ebx = (u32)(r_edx+0x1u);
    /* 007b9e37: jmp 0x7b9e3b */ goto L_007b9e3b;
L_007b9e39:; BB(0x007b9e39);
    /* 007b9e39: mov ecx, edx */ r_ecx = r_edx;
L_007b9e3b:; BB(0x007b9e3b);
    /* 007b9e3b: cmp ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007b9e3d: jl 0x7b9e19 */ if ((fS!=fO)) goto L_007b9e19;
L_007b9e3f:; BB(0x007b9e3f);
    /* 007b9e3f: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
L_007b9e42:; BB(0x007b9e42);
    /* 007b9e42: mov ebx, dword ptr [ebx*4 + 0xaad720] */ r_ebx = R32((u32)(r_ebx*4+0xaad720u));
    /* 007b9e49: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b9e4b: je 0x7b9e55 */ if (fZ) goto L_007b9e55;
L_007b9e4d:; BB(0x007b9e4d);
    /* 007b9e4d: movzx edx, word ptr [ebx + 0x1c] */ r_edx = (u32)R16((u32)(r_ebx+0x1cu));
    /* 007b9e51: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b9e53: je 0x7b9e64 */ if (fZ) goto L_007b9e64;
L_007b9e55:; BB(0x007b9e55);
    /* 007b9e55: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 007b9e57: jmp 0x7b9e64 */ goto L_007b9e64;
L_007b9e59:; BB(0x007b9e59);
    /* 007b9e59: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007b9e5a: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x7b9e5fu); f_0068d5a8();
    /* 007b9e5f: mov ebx, eax */ r_ebx = r_eax;
    /* 007b9e61: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_007b9e64:; BB(0x007b9e64);
    /* 007b9e64: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b9e66: je 0x7b9e7e */ if (fZ) goto L_007b9e7e;
L_007b9e68:; BB(0x007b9e68);
    /* 007b9e68: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007b9e6a: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x7b9e6fu); f_008173b4();
    /* 007b9e6f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b9e71: je 0x7b9e7e */ if (fZ) goto L_007b9e7e;
L_007b9e73:; BB(0x007b9e73);
    /* 007b9e73: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 007b9e76: test edx, 0x4040800 */ {  u32 a = r_edx; u32 b = 0x4040800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b9e7c: je 0x7b9e83 */ if (fZ) goto L_007b9e83;
L_007b9e7e:; BB(0x007b9e7e);
    /* 007b9e7e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007b9e80: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007b9e81: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007b9e82: ret  */ FN_RET(0x007b9df0); r_esp += 4; return;
L_007b9e83:; BB(0x007b9e83);
    /* 007b9e83: mov edx, dword ptr [ebx + 0xa4] */ r_edx = R32((u32)(r_ebx+0xa4u));
    /* 007b9e89: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b9e8b: je 0x7b9e7e */ if (fZ) goto L_007b9e7e;
L_007b9e8d:; BB(0x007b9e8d);
    /* 007b9e8d: movsx eax, word ptr [esp + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x10u));
    /* 007b9e92: movsx ecx, word ptr [esp + 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esp+0x10u));
    /* 007b9e97: lea eax, [eax + eax] */ r_eax = (u32)(r_eax+r_eax);
    /* 007b9e9a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007b9e9c: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007b9e9e: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007b9ea0: movsx ecx, word ptr [esp + 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esp+0x10u));
    /* 007b9ea5: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007b9ea7: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007b9ea9: mov edx, dword ptr [edx + eax*4 + 0x18] */ r_edx = R32((u32)(r_edx+r_eax*4+0x18u));
    /* 007b9ead: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007b9eb0: je 0x7b9e7e */ if (fZ) goto L_007b9e7e;
L_007b9eb2:; BB(0x007b9eb2);
    /* 007b9eb2: movzx edx, word ptr [ebx + 0x96] */ r_edx = (u32)R16((u32)(r_ebx+0x96u));
    /* 007b9eb9: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007b9ebc: jne 0x7b9e7e */ if (!fZ) goto L_007b9e7e;
L_007b9ebe:; BB(0x007b9ebe);
    /* 007b9ebe: mov eax, ebx */ r_eax = r_ebx;
    /* 007b9ec0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007b9ec1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007b9ec2: ret  */ FN_RET(0x007b9df0); r_esp += 4; return;
L_007b9ec3:; BB(0x007b9ec3);
    /* 007b9ec3: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 007b9ec5: jmp 0x7b9e64 */ goto L_007b9e64;
}

void f_007b9ec8(void) /* sub_7B9EC8 */
{
    FN_ENTER(0x007b9ec8);
    /* 007b9ec8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007b9ec9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007b9eca: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007b9ecb: mov esi, ecx */ r_esi = r_ecx;
    /* 007b9ecd: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 007b9ed1: movzx ebx, word ptr [esp + 0x14] */ r_ebx = (u32)R16((u32)(r_esp+0x14u));
    /* 007b9ed6: mov ecx, esi */ r_ecx = r_esi;
    /* 007b9ed8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007b9ed9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007b9eda: call 0x7b9f04 */ r_esp -= 4; W32(r_esp, 0x7b9edfu); f_007b9f04();
    /* 007b9edf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007b9ee1: jne 0x7b9ee9 */ if (!fZ) goto L_007b9ee9;
L_007b9ee3:; BB(0x007b9ee3);
    /* 007b9ee3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007b9ee4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007b9ee5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007b9ee6: ret 8 */ FN_RET(0x007b9ec8); r_esp += 12; return;
L_007b9ee9:; BB(0x007b9ee9);
    /* 007b9ee9: mov edx, dword ptr [esi + 0x9c] */ r_edx = R32((u32)(r_esi+0x9cu));
    /* 007b9eef: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007b9ef1: mov eax, 1 */ r_eax = 0x1u;
    /* 007b9ef6: shl eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 007b9ef8: or dword ptr [edx + ebp*4], eax */ { u32 ad = (u32)(r_edx+r_ebp*4);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007b9efb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007b9efc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007b9efd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007b9efe: ret 8 */ FN_RET(0x007b9ec8); r_esp += 12; return;
}

void f_007b9ece(void)
{
    FN_ENTER(0x007b9ece);
    /* 007b9ece: insb byte ptr es:[edi], dx */ UNSUP(0x007b9ece, "insb byte ptr es:[edi], dx");
    /* 007b9ecf: and al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 007b9ed1: movzx ebx, word ptr [esp + 0x14] */ r_ebx = (u32)R16((u32)(r_esp+0x14u));
    /* 007b9ed6: mov ecx, esi */ r_ecx = r_esi;
    /* 007b9ed8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007b9ed9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007b9eda: call 0x7b9f04 */ r_esp -= 4; W32(r_esp, 0x7b9edfu); f_007b9f04();
    /* 007b9edf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007b9ee1: jne 0x7b9ee9 */ if (!fZ) goto L_007b9ee9;
L_007b9ee3:; BB(0x007b9ee3);
    /* 007b9ee3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007b9ee4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007b9ee5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007b9ee6: ret 8 */ FN_RET(0x007b9ece); r_esp += 12; return;
L_007b9ee9:; BB(0x007b9ee9);
    /* 007b9ee9: mov edx, dword ptr [esi + 0x9c] */ r_edx = R32((u32)(r_esi+0x9cu));
    /* 007b9eef: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007b9ef1: mov eax, 1 */ r_eax = 0x1u;
    /* 007b9ef6: shl eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 007b9ef8: or dword ptr [edx + ebp*4], eax */ { u32 ad = (u32)(r_edx+r_ebp*4);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007b9efb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007b9efc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007b9efd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007b9efe: ret 8 */ FN_RET(0x007b9ece); r_esp += 12; return;
}

void f_007b9f04(void) /* sub_7B9F04 */
{
    FN_ENTER(0x007b9f04);
    /* 007b9f04: mov eax, dword ptr [ecx + 0x9c] */ r_eax = R32((u32)(r_ecx+0x9cu));
    /* 007b9f0a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b9f0c: je 0x7b9f24 */ if (fZ) goto L_007b9f24;
L_007b9f0e:; BB(0x007b9f0e);
    /* 007b9f0e: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 007b9f13: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007b9f16: jge 0x7b9f24 */ if ((fS==fO)) goto L_007b9f24;
L_007b9f18:; BB(0x007b9f18);
    /* 007b9f18: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 007b9f1c: cmp eax, dword ptr [ecx + 0xa8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0xa8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007b9f22: jl 0x7b9f29 */ if ((fS!=fO)) goto L_007b9f29;
L_007b9f24:; BB(0x007b9f24);
    /* 007b9f24: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007b9f26: ret 8 */ FN_RET(0x007b9f04); r_esp += 12; return;
L_007b9f29:; BB(0x007b9f29);
    /* 007b9f29: mov eax, 1 */ r_eax = 0x1u;
    /* 007b9f2e: ret 8 */ FN_RET(0x007b9f04); r_esp += 12; return;
}

void f_007b9f34(void) /* sub_7B9F34 */
{
    FN_ENTER(0x007b9f34);
    /* 007b9f34: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007b9f35: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007b9f36: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007b9f37: mov esi, ecx */ r_esi = r_ecx;
    /* 007b9f39: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 007b9f3d: movzx ebx, word ptr [esp + 0x14] */ r_ebx = (u32)R16((u32)(r_esp+0x14u));
    /* 007b9f42: mov ecx, esi */ r_ecx = r_esi;
    /* 007b9f44: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007b9f45: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007b9f46: call 0x7b9f04 */ r_esp -= 4; W32(r_esp, 0x7b9f4bu); f_007b9f04();
    /* 007b9f4b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007b9f4d: jne 0x7b9f55 */ if (!fZ) goto L_007b9f55;
L_007b9f4f:; BB(0x007b9f4f);
    /* 007b9f4f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007b9f50: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007b9f51: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007b9f52: ret 8 */ FN_RET(0x007b9f34); r_esp += 12; return;
L_007b9f55:; BB(0x007b9f55);
    /* 007b9f55: mov edx, dword ptr [esi + 0x9c] */ r_edx = R32((u32)(r_esi+0x9cu));
    /* 007b9f5b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007b9f5d: mov eax, 1 */ r_eax = 0x1u;
    /* 007b9f62: shl eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 007b9f64: not eax */ r_eax = ~r_eax;
    /* 007b9f66: and dword ptr [edx + ebp*4], eax */ { u32 ad = (u32)(r_edx+r_ebp*4);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007b9f69: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007b9f6a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007b9f6b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007b9f6c: ret 8 */ FN_RET(0x007b9f34); r_esp += 12; return;
}

void f_007b9f70(void) /* sub_7B9F70 */
{
    FN_ENTER(0x007b9f70);
    /* 007b9f70: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007b9f71: mov esi, ecx */ r_esi = r_ecx;
    /* 007b9f73: mov ecx, esi */ r_ecx = r_esi;
    /* 007b9f75: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 007b9f79: movzx eax, word ptr [esp + 0xc] */ r_eax = (u32)R16((u32)(r_esp+0xcu));
    /* 007b9f7e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007b9f7f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007b9f80: call 0x7b9f04 */ r_esp -= 4; W32(r_esp, 0x7b9f85u); f_007b9f04();
    /* 007b9f85: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 007b9f87: jne 0x7b9f8f */ if (!fZ) goto L_007b9f8f;
L_007b9f89:; BB(0x007b9f89);
    /* 007b9f89: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007b9f8b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007b9f8c: ret 8 */ FN_RET(0x007b9f70); r_esp += 12; return;
L_007b9f8f:; BB(0x007b9f8f);
    /* 007b9f8f: movzx ecx, word ptr [esp + 0xc] */ r_ecx = (u32)R16((u32)(r_esp+0xcu));
    /* 007b9f94: mov eax, dword ptr [esi + 0x9c] */ r_eax = R32((u32)(r_esi+0x9cu));
    /* 007b9f9a: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 007b9f9e: mov edx, 1 */ r_edx = 0x1u;
    /* 007b9fa3: shl edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 007b9fa5: test dword ptr [eax + esi*4], edx */ {  u32 a = R32((u32)(r_eax+r_esi*4)); u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007b9fa8: je 0x7b9fb3 */ if (fZ) goto L_007b9fb3;
L_007b9faa:; BB(0x007b9faa);
    /* 007b9faa: mov eax, 1 */ r_eax = 0x1u;
    /* 007b9faf: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007b9fb0: ret 8 */ FN_RET(0x007b9f70); r_esp += 12; return;
L_007b9fb3:; BB(0x007b9fb3);
    /* 007b9fb3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007b9fb5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007b9fb6: ret 8 */ FN_RET(0x007b9f70); r_esp += 12; return;
}

void f_007b9fbc(void) /* sub_7B9FBC */
{
    FN_ENTER(0x007b9fbc);
    /* 007b9fbc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007b9fbd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007b9fbe: mov ebx, dword ptr [ecx + 0xa4] */ r_ebx = R32((u32)(r_ecx+0xa4u));
    /* 007b9fc4: mov ecx, dword ptr [ecx + 0xa8] */ r_ecx = R32((u32)(r_ecx+0xa8u));
    /* 007b9fca: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007b9fcc: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007b9fce: jle 0x7ba037 */ if ((fZ||fS!=fO)) goto L_007ba037;
L_007b9fd0:; BB(0x007b9fd0);
    /* 007b9fd0: cmp ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007b9fd3: jl 0x7ba024 */ if ((fS!=fO)) goto L_007ba024;
L_007b9fd5:; BB(0x007b9fd5);
    /* 007b9fd5: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 007b9fd8: lea eax, [ecx - 6] */ r_eax = (u32)(r_ecx+0xfffffffau);
L_007b9fdb:; BB(0x007b9fdb);
    /* 007b9fdb: mov ebp, dword ptr [ebx + 0x18] */ r_ebp = R32((u32)(r_ebx+0x18u));
    /* 007b9fde: or ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
    /* 007b9fe1: mov dword ptr [ebx + 0x18], ebp */ W32((u32)(r_ebx+0x18u), r_ebp);
    /* 007b9fe4: mov ebp, dword ptr [ebx + 0x44] */ r_ebp = R32((u32)(r_ebx+0x44u));
    /* 007b9fe7: or ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
    /* 007b9fea: mov dword ptr [ebx + 0x44], ebp */ W32((u32)(r_ebx+0x44u), r_ebp);
    /* 007b9fed: mov ebp, dword ptr [ebx + 0x70] */ r_ebp = R32((u32)(r_ebx+0x70u));
    /* 007b9ff0: or ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
    /* 007b9ff3: mov dword ptr [ebx + 0x70], ebp */ W32((u32)(r_ebx+0x70u), r_ebp);
    /* 007b9ff6: mov ebp, dword ptr [ebx + 0x9c] */ r_ebp = R32((u32)(r_ebx+0x9cu));
    /* 007b9ffc: or ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
    /* 007b9fff: mov dword ptr [ebx + 0x9c], ebp */ W32((u32)(r_ebx+0x9cu), r_ebp);
    /* 007ba005: mov ebp, dword ptr [ebx + 0xc8] */ r_ebp = R32((u32)(r_ebx+0xc8u));
    /* 007ba00b: or ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
    /* 007ba00e: mov dword ptr [ebx + 0xc8], ebp */ W32((u32)(r_ebx+0xc8u), r_ebp);
    /* 007ba014: add ebx, 0xdc */ {  u32 a = r_ebx; u32 b = 0xdcu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007ba01a: add edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007ba01d: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007ba01f: jle 0x7b9fdb */ if ((fZ||fS!=fO)) goto L_007b9fdb;
L_007ba021:; BB(0x007ba021);
    /* 007ba021: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
L_007ba024:; BB(0x007ba024);
    /* 007ba024: mov eax, dword ptr [ebx + 0x18] */ r_eax = R32((u32)(r_ebx+0x18u));
    /* 007ba027: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007ba02a: mov dword ptr [ebx + 0x18], eax */ W32((u32)(r_ebx+0x18u), r_eax);
    /* 007ba02d: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007ba030: add ebx, 0x2c */ {  u32 a = r_ebx; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007ba033: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007ba035: jl 0x7ba024 */ if ((fS!=fO)) goto L_007ba024;
L_007ba037:; BB(0x007ba037);
    /* 007ba037: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007ba038: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007ba039: ret  */ FN_RET(0x007b9fbc); r_esp += 4; return;
}

