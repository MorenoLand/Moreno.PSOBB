#include "protos.h"

void f_00863a51(void) /* __free_osfhnd */
{
    FN_ENTER(0x00863a51);
    /* 00863a51: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 00863a55: cmp ecx, dword ptr [0xaf0a60] */ {  u32 a = r_ecx; u32 b = R32((u32)(0xaf0a60u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00863a5b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00863a5c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00863a5d: jae 0x863ab7 */ if (!fC) goto L_00863ab7;
L_00863a5f:; BB(0x00863a5f);
    /* 00863a5f: mov eax, ecx */ r_eax = r_ecx;
    /* 00863a61: sar eax, 5 */ { u32 c = (5u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00863a64: lea edi, [eax*4 + 0xaf0a80] */ r_edi = (u32)(r_eax*4+0xaf0a80u);
    /* 00863a6b: mov eax, ecx */ r_eax = r_ecx;
    /* 00863a6d: and eax, 0x1f */ {  u32 a = r_eax; u32 b = 0x1fu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00863a70: lea esi, [eax + eax*8] */ r_esi = (u32)(r_eax+r_eax*8);
    /* 00863a73: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00863a75: shl esi, 2 */ { u32 c = (2u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 00863a78: add eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00863a7a: test byte ptr [eax + 4], 1 */ {  u32 a = R8((u32)(r_eax+0x4u)); u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00863a7e: je 0x863ab7 */ if (fZ) goto L_00863ab7;
L_00863a80:; BB(0x00863a80);
    /* 00863a80: cmp dword ptr [eax], -1 */ {  u32 a = R32((u32)(r_eax)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00863a83: je 0x863ab7 */ if (fZ) goto L_00863ab7;
L_00863a85:; BB(0x00863a85);
    /* 00863a85: cmp dword ptr [0xa239dc], 1 */ {  u32 a = R32((u32)(0xa239dcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00863a8c: jne 0x863aad */ if (!fZ) goto L_00863aad;
L_00863a8e:; BB(0x00863a8e);
    /* 00863a8e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00863a90: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00863a92: je 0x863aa4 */ if (fZ) goto L_00863aa4;
L_00863a94:; BB(0x00863a94);
    /* 00863a94: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00863a95: je 0x863a9f */ if (fZ) goto L_00863a9f;
L_00863a97:; BB(0x00863a97);
    /* 00863a97: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00863a98: jne 0x863aad */ if (!fZ) goto L_00863aad;
L_00863a9a:; BB(0x00863a9a);
    /* 00863a9a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00863a9b: push -0xc */ { u32 v = 0xfffffff4u; r_esp -= 4; W32(r_esp, v); }
    /* 00863a9d: jmp 0x863aa7 */ goto L_00863aa7;
L_00863a9f:; BB(0x00863a9f);
    /* 00863a9f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00863aa0: push -0xb */ { u32 v = 0xfffffff5u; r_esp -= 4; W32(r_esp, v); }
    /* 00863aa2: jmp 0x863aa7 */ goto L_00863aa7;
L_00863aa4:; BB(0x00863aa4);
    /* 00863aa4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00863aa5: push -0xa */ { u32 v = 0xfffffff6u; r_esp -= 4; W32(r_esp, v); }
L_00863aa7:; BB(0x00863aa7);
    /* 00863aa7: call dword ptr [0x8f825c] */ { u32 t = R32((u32)(0x8f825cu)); r_esp -= 4; W32(r_esp, 0x863aadu); call_ind(t); }
L_00863aad:; BB(0x00863aad);
    /* 00863aad: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00863aaf: or dword ptr [esi + eax], 0xffffffff */ { u32 ad = (u32)(r_esi+r_eax);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 00863ab3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00863ab5: jmp 0x863acd */ goto L_00863acd;
L_00863ab7:; BB(0x00863ab7);
    /* 00863ab7: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x863abcu); f_00859dd6();
    /* 00863abc: mov dword ptr [eax], 9 */ W32((u32)(r_eax), 0x9u);
    /* 00863ac2: call 0x859ddf */ r_esp -= 4; W32(r_esp, 0x863ac7u); f_00859ddf();
    /* 00863ac7: and dword ptr [eax], 0 */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00863aca: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_00863acd:; BB(0x00863acd);
    /* 00863acd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00863ace: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00863acf: ret  */ FN_RET(0x00863a51); r_esp += 4; return;
}

void f_008673ac(void) /* __free_lc_time */
{
    FN_ENTER(0x008673ac);
    /* 008673ac: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008673ad: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 008673b1: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008673b3: je 0x86753a */ if (fZ) goto L_0086753a;
L_008673b9:; BB(0x008673b9);
    /* 008673b9: push dword ptr [esi + 4] */ { u32 v = R32((u32)(r_esi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 008673bc: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x8673c1u); f_00858882();
    /* 008673c1: push dword ptr [esi + 8] */ { u32 v = R32((u32)(r_esi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008673c4: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x8673c9u); f_00858882();
    /* 008673c9: push dword ptr [esi + 0xc] */ { u32 v = R32((u32)(r_esi+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 008673cc: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x8673d1u); f_00858882();
    /* 008673d1: push dword ptr [esi + 0x10] */ { u32 v = R32((u32)(r_esi+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 008673d4: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x8673d9u); f_00858882();
    /* 008673d9: push dword ptr [esi + 0x14] */ { u32 v = R32((u32)(r_esi+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 008673dc: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x8673e1u); f_00858882();
    /* 008673e1: push dword ptr [esi + 0x18] */ { u32 v = R32((u32)(r_esi+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 008673e4: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x8673e9u); f_00858882();
    /* 008673e9: push dword ptr [esi] */ { u32 v = R32((u32)(r_esi)); r_esp -= 4; W32(r_esp, v); }
    /* 008673eb: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x8673f0u); f_00858882();
    /* 008673f0: push dword ptr [esi + 0x20] */ { u32 v = R32((u32)(r_esi+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 008673f3: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x8673f8u); f_00858882();
    /* 008673f8: push dword ptr [esi + 0x24] */ { u32 v = R32((u32)(r_esi+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 008673fb: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x867400u); f_00858882();
    /* 00867400: push dword ptr [esi + 0x28] */ { u32 v = R32((u32)(r_esi+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 00867403: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x867408u); f_00858882();
    /* 00867408: push dword ptr [esi + 0x2c] */ { u32 v = R32((u32)(r_esi+0x2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0086740b: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x867410u); f_00858882();
    /* 00867410: push dword ptr [esi + 0x30] */ { u32 v = R32((u32)(r_esi+0x30u)); r_esp -= 4; W32(r_esp, v); }
    /* 00867413: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x867418u); f_00858882();
    /* 00867418: push dword ptr [esi + 0x34] */ { u32 v = R32((u32)(r_esi+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086741b: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x867420u); f_00858882();
    /* 00867420: push dword ptr [esi + 0x1c] */ { u32 v = R32((u32)(r_esi+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00867423: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x867428u); f_00858882();
    /* 00867428: push dword ptr [esi + 0x38] */ { u32 v = R32((u32)(r_esi+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086742b: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x867430u); f_00858882();
    /* 00867430: push dword ptr [esi + 0x3c] */ { u32 v = R32((u32)(r_esi+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00867433: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x867438u); f_00858882();
    /* 00867438: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0086743b: push dword ptr [esi + 0x40] */ { u32 v = R32((u32)(r_esi+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086743e: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x867443u); f_00858882();
    /* 00867443: push dword ptr [esi + 0x44] */ { u32 v = R32((u32)(r_esi+0x44u)); r_esp -= 4; W32(r_esp, v); }
    /* 00867446: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x86744bu); f_00858882();
    /* 0086744b: push dword ptr [esi + 0x48] */ { u32 v = R32((u32)(r_esi+0x48u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086744e: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x867453u); f_00858882();
    /* 00867453: push dword ptr [esi + 0x4c] */ { u32 v = R32((u32)(r_esi+0x4cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00867456: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x86745bu); f_00858882();
    /* 0086745b: push dword ptr [esi + 0x50] */ { u32 v = R32((u32)(r_esi+0x50u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086745e: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x867463u); f_00858882();
    /* 00867463: push dword ptr [esi + 0x54] */ { u32 v = R32((u32)(r_esi+0x54u)); r_esp -= 4; W32(r_esp, v); }
    /* 00867466: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x86746bu); f_00858882();
    /* 0086746b: push dword ptr [esi + 0x58] */ { u32 v = R32((u32)(r_esi+0x58u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086746e: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x867473u); f_00858882();
    /* 00867473: push dword ptr [esi + 0x5c] */ { u32 v = R32((u32)(r_esi+0x5cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00867476: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x86747bu); f_00858882();
    /* 0086747b: push dword ptr [esi + 0x60] */ { u32 v = R32((u32)(r_esi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086747e: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x867483u); f_00858882();
    /* 00867483: push dword ptr [esi + 0x64] */ { u32 v = R32((u32)(r_esi+0x64u)); r_esp -= 4; W32(r_esp, v); }
    /* 00867486: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x86748bu); f_00858882();
    /* 0086748b: push dword ptr [esi + 0x68] */ { u32 v = R32((u32)(r_esi+0x68u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086748e: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x867493u); f_00858882();
    /* 00867493: push dword ptr [esi + 0x6c] */ { u32 v = R32((u32)(r_esi+0x6cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00867496: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x86749bu); f_00858882();
    /* 0086749b: push dword ptr [esi + 0x70] */ { u32 v = R32((u32)(r_esi+0x70u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086749e: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x8674a3u); f_00858882();
    /* 008674a3: push dword ptr [esi + 0x74] */ { u32 v = R32((u32)(r_esi+0x74u)); r_esp -= 4; W32(r_esp, v); }
    /* 008674a6: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x8674abu); f_00858882();
    /* 008674ab: push dword ptr [esi + 0x78] */ { u32 v = R32((u32)(r_esi+0x78u)); r_esp -= 4; W32(r_esp, v); }
    /* 008674ae: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x8674b3u); f_00858882();
    /* 008674b3: push dword ptr [esi + 0x7c] */ { u32 v = R32((u32)(r_esi+0x7cu)); r_esp -= 4; W32(r_esp, v); }
    /* 008674b6: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x8674bbu); f_00858882();
    /* 008674bb: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008674be: push dword ptr [esi + 0x80] */ { u32 v = R32((u32)(r_esi+0x80u)); r_esp -= 4; W32(r_esp, v); }
    /* 008674c4: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x8674c9u); f_00858882();
    /* 008674c9: push dword ptr [esi + 0x84] */ { u32 v = R32((u32)(r_esi+0x84u)); r_esp -= 4; W32(r_esp, v); }
    /* 008674cf: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x8674d4u); f_00858882();
    /* 008674d4: push dword ptr [esi + 0x88] */ { u32 v = R32((u32)(r_esi+0x88u)); r_esp -= 4; W32(r_esp, v); }
    /* 008674da: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x8674dfu); f_00858882();
    /* 008674df: push dword ptr [esi + 0x8c] */ { u32 v = R32((u32)(r_esi+0x8cu)); r_esp -= 4; W32(r_esp, v); }
    /* 008674e5: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x8674eau); f_00858882();
    /* 008674ea: push dword ptr [esi + 0x90] */ { u32 v = R32((u32)(r_esi+0x90u)); r_esp -= 4; W32(r_esp, v); }
    /* 008674f0: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x8674f5u); f_00858882();
    /* 008674f5: push dword ptr [esi + 0x94] */ { u32 v = R32((u32)(r_esi+0x94u)); r_esp -= 4; W32(r_esp, v); }
    /* 008674fb: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x867500u); f_00858882();
    /* 00867500: push dword ptr [esi + 0x98] */ { u32 v = R32((u32)(r_esi+0x98u)); r_esp -= 4; W32(r_esp, v); }
    /* 00867506: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x86750bu); f_00858882();
    /* 0086750b: push dword ptr [esi + 0x9c] */ { u32 v = R32((u32)(r_esi+0x9cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00867511: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x867516u); f_00858882();
    /* 00867516: push dword ptr [esi + 0xa0] */ { u32 v = R32((u32)(r_esi+0xa0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086751c: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x867521u); f_00858882();
    /* 00867521: push dword ptr [esi + 0xa4] */ { u32 v = R32((u32)(r_esi+0xa4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00867527: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x86752cu); f_00858882();
    /* 0086752c: push dword ptr [esi + 0xa8] */ { u32 v = R32((u32)(r_esi+0xa8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00867532: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x867537u); f_00858882();
    /* 00867537: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_0086753a:; BB(0x0086753a);
    /* 0086753a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0086753b: ret  */ FN_RET(0x008673ac); r_esp += 4; return;
}

void f_0086759b(void) /* ___free_lconv_num */
{
    FN_ENTER(0x0086759b);
    /* 0086759b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086759c: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 008675a0: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008675a2: je 0x8675f8 */ if (fZ) goto L_008675f8;
L_008675a4:; BB(0x008675a4);
    /* 008675a4: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008675a6: mov ecx, dword ptr [0xa244f4] */ r_ecx = R32((u32)(0xa244f4u));
    /* 008675ac: cmp eax, dword ptr [ecx] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008675ae: je 0x8675bf */ if (fZ) goto L_008675bf;
L_008675b0:; BB(0x008675b0);
    /* 008675b0: cmp eax, dword ptr [0xa244c4] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa244c4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008675b6: je 0x8675bf */ if (fZ) goto L_008675bf;
L_008675b8:; BB(0x008675b8);
    /* 008675b8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008675b9: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x8675beu); f_00858882();
    /* 008675be: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008675bf:; BB(0x008675bf);
    /* 008675bf: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 008675c2: mov ecx, dword ptr [0xa244f4] */ r_ecx = R32((u32)(0xa244f4u));
    /* 008675c8: cmp eax, dword ptr [ecx + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008675cb: je 0x8675dc */ if (fZ) goto L_008675dc;
L_008675cd:; BB(0x008675cd);
    /* 008675cd: cmp eax, dword ptr [0xa244c8] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa244c8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008675d3: je 0x8675dc */ if (fZ) goto L_008675dc;
L_008675d5:; BB(0x008675d5);
    /* 008675d5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008675d6: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x8675dbu); f_00858882();
    /* 008675db: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008675dc:; BB(0x008675dc);
    /* 008675dc: mov esi, dword ptr [esi + 8] */ r_esi = R32((u32)(r_esi+0x8u));
    /* 008675df: mov eax, dword ptr [0xa244f4] */ r_eax = R32((u32)(0xa244f4u));
    /* 008675e4: cmp esi, dword ptr [eax + 8] */ {  u32 a = r_esi; u32 b = R32((u32)(r_eax+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008675e7: je 0x8675f8 */ if (fZ) goto L_008675f8;
L_008675e9:; BB(0x008675e9);
    /* 008675e9: cmp esi, dword ptr [0xa244cc] */ {  u32 a = r_esi; u32 b = R32((u32)(0xa244ccu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008675ef: je 0x8675f8 */ if (fZ) goto L_008675f8;
L_008675f1:; BB(0x008675f1);
    /* 008675f1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008675f2: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x8675f7u); f_00858882();
    /* 008675f7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008675f8:; BB(0x008675f8);
    /* 008675f8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008675f9: ret  */ FN_RET(0x0086759b); r_esp += 4; return;
}

void f_008677c7(void) /* ___free_lconv_mon */
{
    FN_ENTER(0x008677c7);
    /* 008677c7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008677c8: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 008677cc: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008677ce: je 0x86789e */ if (fZ) goto L_0086789e;
L_008677d4:; BB(0x008677d4);
    /* 008677d4: mov eax, dword ptr [esi + 0xc] */ r_eax = R32((u32)(r_esi+0xcu));
    /* 008677d7: mov ecx, dword ptr [0xa244f4] */ r_ecx = R32((u32)(0xa244f4u));
    /* 008677dd: cmp eax, dword ptr [ecx + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008677e0: je 0x8677f1 */ if (fZ) goto L_008677f1;
L_008677e2:; BB(0x008677e2);
    /* 008677e2: cmp eax, dword ptr [0xa244d0] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa244d0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008677e8: je 0x8677f1 */ if (fZ) goto L_008677f1;
L_008677ea:; BB(0x008677ea);
    /* 008677ea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008677eb: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x8677f0u); f_00858882();
    /* 008677f0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008677f1:; BB(0x008677f1);
    /* 008677f1: mov eax, dword ptr [esi + 0x10] */ r_eax = R32((u32)(r_esi+0x10u));
    /* 008677f4: mov ecx, dword ptr [0xa244f4] */ r_ecx = R32((u32)(0xa244f4u));
    /* 008677fa: cmp eax, dword ptr [ecx + 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x10u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008677fd: je 0x86780e */ if (fZ) goto L_0086780e;
L_008677ff:; BB(0x008677ff);
    /* 008677ff: cmp eax, dword ptr [0xa244d4] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa244d4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00867805: je 0x86780e */ if (fZ) goto L_0086780e;
L_00867807:; BB(0x00867807);
    /* 00867807: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00867808: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x86780du); f_00858882();
    /* 0086780d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0086780e:; BB(0x0086780e);
    /* 0086780e: mov eax, dword ptr [esi + 0x14] */ r_eax = R32((u32)(r_esi+0x14u));
    /* 00867811: mov ecx, dword ptr [0xa244f4] */ r_ecx = R32((u32)(0xa244f4u));
    /* 00867817: cmp eax, dword ptr [ecx + 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x14u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086781a: je 0x86782b */ if (fZ) goto L_0086782b;
L_0086781c:; BB(0x0086781c);
    /* 0086781c: cmp eax, dword ptr [0xa244d8] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa244d8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00867822: je 0x86782b */ if (fZ) goto L_0086782b;
L_00867824:; BB(0x00867824);
    /* 00867824: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00867825: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x86782au); f_00858882();
    /* 0086782a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0086782b:; BB(0x0086782b);
    /* 0086782b: mov eax, dword ptr [esi + 0x18] */ r_eax = R32((u32)(r_esi+0x18u));
    /* 0086782e: mov ecx, dword ptr [0xa244f4] */ r_ecx = R32((u32)(0xa244f4u));
    /* 00867834: cmp eax, dword ptr [ecx + 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x18u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00867837: je 0x867848 */ if (fZ) goto L_00867848;
L_00867839:; BB(0x00867839);
    /* 00867839: cmp eax, dword ptr [0xa244dc] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa244dcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086783f: je 0x867848 */ if (fZ) goto L_00867848;
L_00867841:; BB(0x00867841);
    /* 00867841: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00867842: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x867847u); f_00858882();
    /* 00867847: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00867848:; BB(0x00867848);
    /* 00867848: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 0086784b: mov ecx, dword ptr [0xa244f4] */ r_ecx = R32((u32)(0xa244f4u));
    /* 00867851: cmp eax, dword ptr [ecx + 0x1c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x1cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00867854: je 0x867865 */ if (fZ) goto L_00867865;
L_00867856:; BB(0x00867856);
    /* 00867856: cmp eax, dword ptr [0xa244e0] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa244e0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086785c: je 0x867865 */ if (fZ) goto L_00867865;
L_0086785e:; BB(0x0086785e);
    /* 0086785e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086785f: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x867864u); f_00858882();
    /* 00867864: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00867865:; BB(0x00867865);
    /* 00867865: mov eax, dword ptr [esi + 0x20] */ r_eax = R32((u32)(r_esi+0x20u));
    /* 00867868: mov ecx, dword ptr [0xa244f4] */ r_ecx = R32((u32)(0xa244f4u));
    /* 0086786e: cmp eax, dword ptr [ecx + 0x20] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x20u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00867871: je 0x867882 */ if (fZ) goto L_00867882;
L_00867873:; BB(0x00867873);
    /* 00867873: cmp eax, dword ptr [0xa244e4] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa244e4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00867879: je 0x867882 */ if (fZ) goto L_00867882;
L_0086787b:; BB(0x0086787b);
    /* 0086787b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086787c: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x867881u); f_00858882();
    /* 00867881: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00867882:; BB(0x00867882);
    /* 00867882: mov esi, dword ptr [esi + 0x24] */ r_esi = R32((u32)(r_esi+0x24u));
    /* 00867885: mov eax, dword ptr [0xa244f4] */ r_eax = R32((u32)(0xa244f4u));
    /* 0086788a: cmp esi, dword ptr [eax + 0x24] */ {  u32 a = r_esi; u32 b = R32((u32)(r_eax+0x24u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0086788d: je 0x86789e */ if (fZ) goto L_0086789e;
L_0086788f:; BB(0x0086788f);
    /* 0086788f: cmp esi, dword ptr [0xa244e8] */ {  u32 a = r_esi; u32 b = R32((u32)(0xa244e8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00867895: je 0x86789e */ if (fZ) goto L_0086789e;
L_00867897:; BB(0x00867897);
    /* 00867897: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00867898: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x86789du); f_00858882();
    /* 0086789d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0086789e:; BB(0x0086789e);
    /* 0086789e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0086789f: ret  */ FN_RET(0x008677c7); r_esp += 4; return;
}

