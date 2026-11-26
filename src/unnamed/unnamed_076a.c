#include "protos.h"

void f_0076a0a4(void) /* sub_76A0A4 */
{
    FN_ENTER(0x0076a0a4);
    /* 0076a0a4: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0076a0a8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0076a0aa: jne 0x76a0b5 */ if (!fZ) goto L_0076a0b5;
L_0076a0ac:; BB(0x0076a0ac);
    /* 0076a0ac: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0076a0b0: call 0x76a0b8 */ r_esp -= 4; W32(r_esp, 0x76a0b5u); f_0076a0b8();
L_0076a0b5:; BB(0x0076a0b5);
    /* 0076a0b5: ret 8 */ FN_RET(0x0076a0a4); r_esp += 12; return;
}

void f_0076a0b8(void) /* sub_76A0B8 */
{
    FN_ENTER(0x0076a0b8);
    /* 0076a0b8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0076a0b9: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0076a0bc: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0076a0be: fld dword ptr [ebp + 0xf88] */ FPUSH(R_F32((u32)(r_ebp+0xf88u)));
    /* 0076a0c4: fcomp dword ptr [0x9773a0] */ fx_compare(ST(0), R_F32((u32)(0x9773a0u))); FPOP();
    /* 0076a0ca: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0076a0cc: mov edx, dword ptr [ebp + 0xf88] */ r_edx = R32((u32)(r_ebp+0xf88u));
    /* 0076a0d2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0076a0d3: je 0x76a0e9 */ if (fZ) goto L_0076a0e9;
L_0076a0d5:; BB(0x0076a0d5);
    /* 0076a0d5: push dword ptr [ebp + 0x60] */ { u32 v = R32((u32)(r_ebp+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 0076a0d8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0076a0d9: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0076a0dc: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0076a0de: call dword ptr [eax + 0x48] */ { u32 t = R32((u32)(r_eax+0x48u)); r_esp -= 4; W32(r_esp, 0x76a0e1u); call_ind(t); }
    /* 0076a0e1: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0076a0e4: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0076a0e6: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x76a0e9u); call_ind(t); }
L_0076a0e9:; BB(0x0076a0e9);
    /* 0076a0e9: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0076a0eb: call 0x76a174 */ r_esp -= 4; W32(r_esp, 0x76a0f0u); f_0076a174();
    /* 0076a0f0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0076a0f2: call 0x76a234 */ r_esp -= 4; W32(r_esp, 0x76a0f7u); f_0076a234();
    /* 0076a0f7: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0076a0f9: call 0x76a5a8 */ r_esp -= 4; W32(r_esp, 0x76a0feu); f_0076a5a8();
    /* 0076a0fe: mov eax, dword ptr [0xa9b074] */ r_eax = R32((u32)(0xa9b074u));
    /* 0076a103: add dword ptr [ebp + 0xf9c], 1 */ { u32 ad = (u32)(r_ebp+0xf9cu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0076a10a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076a10c: je 0x76a11f */ if (fZ) goto L_0076a11f;
L_0076a10e:; BB(0x0076a10e);
    /* 0076a10e: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0076a111: jl 0x76a118 */ if ((fS!=fO)) goto L_0076a118;
L_0076a113:; BB(0x0076a113);
    /* 0076a113: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0076a116: jle 0x76a11f */ if ((fZ||fS!=fO)) goto L_0076a11f;
L_0076a118:; BB(0x0076a118);
    /* 0076a118: add dword ptr [ebp + 0xf98], 1 */ { u32 ad = (u32)(r_ebp+0xf98u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_0076a11f:; BB(0x0076a11f);
    /* 0076a11f: mov eax, dword ptr [ebp + 0xfa8] */ r_eax = R32((u32)(r_ebp+0xfa8u));
    /* 0076a125: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076a127: je 0x76a16b */ if (fZ) goto L_0076a16b;
L_0076a129:; BB(0x0076a129);
    /* 0076a129: mov eax, dword ptr [ebp + 0xf98] */ r_eax = R32((u32)(r_ebp+0xf98u));
    /* 0076a12f: cmp eax, 0x8ca0 */ {  u32 a = r_eax; u32 b = 0x8ca0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0076a134: jle 0x76a16b */ if ((fZ||fS!=fO)) goto L_0076a16b;
L_0076a136:; BB(0x0076a136);
    /* 0076a136: mov byte ptr [esp], 0xdc */ W8((u32)(r_esp), 0xdcu);
    /* 0076a13a: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 0076a13f: mov edx, 1 */ r_edx = 0x1u;
    /* 0076a144: mov byte ptr [esp + 1], 2 */ W8((u32)(r_esp+0x1u), 0x2u);
    /* 0076a149: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 0076a14e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0076a150: mov word ptr [esp + 4], dx */ W16((u32)(r_esp+0x4u), (u16)r_edx);
    /* 0076a155: mov word ptr [esp + 6], cx */ W16((u32)(r_esp+0x6u), (u16)r_ecx);
    /* 0076a15a: call 0x52cf54 */ r_esp -= 4; W32(r_esp, 0x76a15fu); f_0052cf54();
    /* 0076a15f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076a161: je 0x76a16b */ if (fZ) goto L_0076a16b;
L_0076a163:; BB(0x0076a163);
    /* 0076a163: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0076a166: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x76a16bu); f_008003e0();
L_0076a16b:; BB(0x0076a16b);
    /* 0076a16b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0076a16e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0076a16f: ret 4 */ FN_RET(0x0076a0b8); r_esp += 8; return;
}

void f_0076a174(void) /* sub_76A174 */
{
    FN_ENTER(0x0076a174);
    /* 0076a174: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0076a175: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0076a176: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0076a177: sub esp, 0x208 */ {  u32 a = r_esp; u32 b = 0x208u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0076a17d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0076a17f: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 0076a182: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0076a184: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0076a186: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0076a188: mov ebp, eax */ r_ebp = r_eax;
    /* 0076a18a: mov esi, edx */ r_esi = r_edx;
    /* 0076a18c: mov edi, ecx */ r_edi = r_ecx;
L_0076a18e:; BB(0x0076a18e);
    /* 0076a18e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0076a18f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0076a191: call 0x768964 */ r_esp -= 4; W32(r_esp, 0x76a196u); f_00768964();
    /* 0076a196: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076a198: je 0x76a1bb */ if (fZ) goto L_0076a1bb;
L_0076a19a:; BB(0x0076a19a);
    /* 0076a19a: mov eax, dword ptr [ebp + ebx + 0x444] */ r_eax = R32((u32)(r_ebp+r_ebx+0x444u));
    /* 0076a1a1: mov dword ptr [esp + esi + 4], eax */ W32((u32)(r_esp+r_esi+0x4u), r_eax);
    /* 0076a1a5: mov eax, dword ptr [ebp + ebx + 0x448] */ r_eax = R32((u32)(r_ebp+r_ebx+0x448u));
    /* 0076a1ac: mov dword ptr [esp + esi + 8], eax */ W32((u32)(r_esp+r_esi+0x8u), r_eax);
    /* 0076a1b0: mov eax, dword ptr [ebp + ebx + 0x44c] */ r_eax = R32((u32)(r_ebp+r_ebx+0x44cu));
    /* 0076a1b7: mov dword ptr [esp + esi + 0xc], eax */ W32((u32)(r_esp+r_esi+0xcu), r_eax);
L_0076a1bb:; BB(0x0076a1bb);
    /* 0076a1bb: add esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0076a1be: add ebp, 0x40 */ {  u32 a = r_ebp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0076a1c1: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0076a1c4: cmp edi, 0x2b */ {  u32 a = r_edi; u32 b = 0x2bu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0076a1c7: jl 0x76a18e */ if ((fS!=fO)) goto L_0076a18e;
L_0076a1c9:; BB(0x0076a1c9);
    /* 0076a1c9: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
    /* 0076a1cc: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0076a1ce: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0076a1d0: mov esi, eax */ r_esi = r_eax;
    /* 0076a1d2: mov edi, edx */ r_edi = r_edx;
L_0076a1d4:; BB(0x0076a1d4);
    /* 0076a1d4: mov eax, dword ptr [ebx + 0xfb0] */ r_eax = R32((u32)(r_ebx+0xfb0u));
    /* 0076a1da: mov ecx, dword ptr [eax + edi*4] */ r_ecx = R32((u32)(r_eax+r_edi*4));
    /* 0076a1dd: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076a1df: je 0x76a1fc */ if (fZ) goto L_0076a1fc;
L_0076a1e1:; BB(0x0076a1e1);
    /* 0076a1e1: mov edx, dword ptr [esi + 0x9f71a0] */ r_edx = R32((u32)(r_esi+0x9f71a0u));
    /* 0076a1e7: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0076a1e9: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0076a1eb: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 0076a1ee: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0076a1f0: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 0076a1f4: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0076a1f6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076a1f7: call 0x764d04 */ r_esp -= 4; W32(r_esp, 0x76a1fcu); f_00764d04();
L_0076a1fc:; BB(0x0076a1fc);
    /* 0076a1fc: add esi, 0x30 */ {  u32 a = r_esi; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0076a1ff: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0076a202: cmp edi, 0x13 */ {  u32 a = r_edi; u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0076a205: jl 0x76a1d4 */ if ((fS!=fO)) goto L_0076a1d4;
L_0076a207:; BB(0x0076a207);
    /* 0076a207: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0076a209: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x76a20eu); f_0078730c();
    /* 0076a20e: mov eax, dword ptr [ebx + 0x300] */ r_eax = R32((u32)(r_ebx+0x300u));
    /* 0076a214: mov edx, dword ptr [ebx + 0x304] */ r_edx = R32((u32)(r_ebx+0x304u));
    /* 0076a21a: mov dword ptr [ebx + 0x74], eax */ W32((u32)(r_ebx+0x74u), r_eax);
    /* 0076a21d: mov eax, dword ptr [ebx + 0x308] */ r_eax = R32((u32)(r_ebx+0x308u));
    /* 0076a223: mov dword ptr [ebx + 0x78], edx */ W32((u32)(r_ebx+0x78u), r_edx);
    /* 0076a226: mov dword ptr [ebx + 0x7c], eax */ W32((u32)(r_ebx+0x7cu), r_eax);
    /* 0076a229: add esp, 0x208 */ {  u32 a = r_esp; u32 b = 0x208u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0076a22f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0076a230: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0076a231: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0076a232: ret  */ FN_RET(0x0076a174); r_esp += 4; return;
}

void f_0076a200(void)
{
    FN_ENTER(0x0076a200);
    /* 0076a200: mov dword ptr [ecx], 0x7c13ff83 */ W32((u32)(r_ecx), 0x7c13ff83u);
    /* 0076a206: int 0x8b */ UNSUP(0x0076a206, "int 0x8b");
    /* 0076a208: retf  */ { u32 t = R32(r_esp); r_esp += 4; r_eax = r_edx = 0; call_ind(t); }
    /* 0076a209: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x76a20eu); f_0078730c();
    /* 0076a20e: mov eax, dword ptr [ebx + 0x300] */ r_eax = R32((u32)(r_ebx+0x300u));
    /* 0076a214: mov edx, dword ptr [ebx + 0x304] */ r_edx = R32((u32)(r_ebx+0x304u));
    /* 0076a21a: mov dword ptr [ebx + 0x74], eax */ W32((u32)(r_ebx+0x74u), r_eax);
    /* 0076a21d: mov eax, dword ptr [ebx + 0x308] */ r_eax = R32((u32)(r_ebx+0x308u));
    /* 0076a223: mov dword ptr [ebx + 0x78], edx */ W32((u32)(r_ebx+0x78u), r_edx);
    /* 0076a226: mov dword ptr [ebx + 0x7c], eax */ W32((u32)(r_ebx+0x7cu), r_eax);
    /* 0076a229: add esp, 0x208 */ {  u32 a = r_esp; u32 b = 0x208u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0076a22f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0076a230: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0076a231: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0076a232: ret  */ FN_RET(0x0076a200); r_esp += 4; return;
}

void f_0076a234(void) /* sub_76A234 */
{
    FN_ENTER(0x0076a234);
    /* 0076a234: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0076a235: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0076a236: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0076a237: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0076a23a: mov edi, ecx */ r_edi = r_ecx;
    /* 0076a23c: movsx eax, word ptr [edi + 0xb8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0xb8u));
    /* 0076a243: cmp ax, word ptr [edi + 0xba] */ {  u32 a = (u16)r_eax; u32 b = R16((u32)(r_edi+0xbau)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0076a24a: je 0x76a253 */ if (fZ) goto L_0076a253;
L_0076a24c:; BB(0x0076a24c);
    /* 0076a24c: mov esi, 1 */ r_esi = 0x1u;
    /* 0076a251: jmp 0x76a255 */ goto L_0076a255;
L_0076a253:; BB(0x0076a253);
    /* 0076a253: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_0076a255:; BB(0x0076a255);
    /* 0076a255: mov eax, dword ptr [edi + 0xf74] */ r_eax = R32((u32)(r_edi+0xf74u));
    /* 0076a25b: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0076a25d: je 0x76a266 */ if (fZ) goto L_0076a266;
L_0076a25f:; BB(0x0076a25f);
    /* 0076a25f: mov eax, 1 */ r_eax = 0x1u;
    /* 0076a264: jmp 0x76a268 */ goto L_0076a268;
L_0076a266:; BB(0x0076a266);
    /* 0076a266: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0076a268:; BB(0x0076a268);
    /* 0076a268: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076a26a: je 0x76a273 */ if (fZ) goto L_0076a273;
L_0076a26c:; BB(0x0076a26c);
    /* 0076a26c: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0076a26f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0076a270: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0076a271: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0076a272: ret  */ FN_RET(0x0076a234); r_esp += 4; return;
L_0076a273:; BB(0x0076a273);
    /* 0076a273: mov ecx, dword ptr [edi + 0xed8] */ r_ecx = R32((u32)(r_edi+0xed8u));
    /* 0076a279: lea ebp, [edi + 0xed4] */ r_ebp = (u32)(r_edi+0xed4u);
    /* 0076a27f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076a281: je 0x76a3b3 */ if (fZ) goto L_0076a3b3;
L_0076a287:; BB(0x0076a287);
    /* 0076a287: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x76a28cu); f_008173b4();
    /* 0076a28c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076a28e: je 0x76a3b3 */ if (fZ) goto L_0076a3b3;
L_0076a294:; BB(0x0076a294);
    /* 0076a294: mov edx, dword ptr [edi + 0xed8] */ r_edx = R32((u32)(r_edi+0xed8u));
    /* 0076a29a: movsx eax, word ptr [edx + 0xb8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0xb8u));
    /* 0076a2a1: cmp ax, word ptr [edx + 0xba] */ {  u32 a = (u16)r_eax; u32 b = R16((u32)(r_edx+0xbau)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0076a2a8: je 0x76a2ba */ if (fZ) goto L_0076a2ba;
L_0076a2aa:; BB(0x0076a2aa);
    /* 0076a2aa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076a2ab: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0076a2ad: call 0x767764 */ r_esp -= 4; W32(r_esp, 0x76a2b2u); f_00767764();
    /* 0076a2b2: fld dword ptr [0x97739c] */ FPUSH(R_F32((u32)(0x97739cu)));
    /* 0076a2b8: jmp 0x76a2c0 */ goto L_0076a2c0;
L_0076a2ba:; BB(0x0076a2ba);
    /* 0076a2ba: fld dword ptr [edx + 0xc0] */ FPUSH(R_F32((u32)(r_edx+0xc0u)));
L_0076a2c0:; BB(0x0076a2c0);
    /* 0076a2c0: mov edx, dword ptr [edi + 0xee0] */ r_edx = R32((u32)(r_edi+0xee0u));
    /* 0076a2c6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076a2c8: je 0x76a547 */ if (fZ) goto L_0076a547;
L_0076a2ce:; BB(0x0076a2ce);
    /* 0076a2ce: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
L_0076a2d2:; BB(0x0076a2d2);
    /* 0076a2d2: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0076a2d5: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076a2d8: je 0x76a480 */ if (fZ) goto L_0076a480;
L_0076a2de:; BB(0x0076a2de);
    /* 0076a2de: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0076a2e0:; BB(0x0076a2e0);
    /* 0076a2e0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076a2e2: jne 0x76a3bd */ if (!fZ) goto L_0076a3bd;
L_0076a2e8:; BB(0x0076a2e8);
    /* 0076a2e8: fild dword ptr [edx] */ FPUSH((long double)(i32)R32((u32)(r_edx)));
    /* 0076a2ea: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 0076a2ee: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0076a2f0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0076a2f2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0076a2f3: jb 0x76a3bd */ if (fC) goto L_0076a3bd;
L_0076a2f9:; BB(0x0076a2f9);
    /* 0076a2f9: mov eax, dword ptr [edi + 0xed8] */ r_eax = R32((u32)(r_edi+0xed8u));
    /* 0076a2ff: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 0076a302: mov dword ptr [edi + 0xf30], ecx */ W32((u32)(r_edi+0xf30u), r_ecx);
    /* 0076a308: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 0076a30b: mov dword ptr [edi + 0xf34], ecx */ W32((u32)(r_edi+0xf34u), r_ecx);
    /* 0076a311: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 0076a314: mov dword ptr [edi + 0xf38], eax */ W32((u32)(r_edi+0xf38u), r_eax);
    /* 0076a31a: mov eax, dword ptr [edi + 0xf2c] */ r_eax = R32((u32)(r_edi+0xf2cu));
    /* 0076a320: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076a322: je 0x76a32e */ if (fZ) goto L_0076a32e;
L_0076a324:; BB(0x0076a324);
    /* 0076a324: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0076a325: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x76a327u); call_ind(t); }
    /* 0076a327: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0076a328: mov edx, dword ptr [edi + 0xee0] */ r_edx = R32((u32)(r_edi+0xee0u));
L_0076a32e:; BB(0x0076a32e);
    /* 0076a32e: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0076a331: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076a333: je 0x76a43e */ if (fZ) goto L_0076a43e;
L_0076a339:; BB(0x0076a339);
    /* 0076a339: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076a33c: je 0x76a366 */ if (fZ) goto L_0076a366;
L_0076a33e:; BB(0x0076a33e);
    /* 0076a33e: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076a341: jne 0x76a352 */ if (!fZ) goto L_0076a352;
L_0076a343:; BB(0x0076a343);
    /* 0076a343: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0076a345: call 0x76c140 */ r_esp -= 4; W32(r_esp, 0x76a34au); f_0076c140();
    /* 0076a34a: mov edx, dword ptr [edi + 0xee0] */ r_edx = R32((u32)(r_edi+0xee0u));
    /* 0076a350: jmp 0x76a3a5 */ goto L_0076a3a5;
L_0076a352:; BB(0x0076a352);
    /* 0076a352: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076a355: jne 0x76a3a5 */ if (!fZ) goto L_0076a3a5;
L_0076a357:; BB(0x0076a357);
    /* 0076a357: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0076a359: call 0x76c0f4 */ r_esp -= 4; W32(r_esp, 0x76a35eu); f_0076c0f4();
    /* 0076a35e: mov edx, dword ptr [edi + 0xee0] */ r_edx = R32((u32)(r_edi+0xee0u));
    /* 0076a364: jmp 0x76a3a5 */ goto L_0076a3a5;
L_0076a366:; BB(0x0076a366);
    /* 0076a366: mov eax, dword ptr [edi + 0xf28] */ r_eax = R32((u32)(r_edi+0xf28u));
    /* 0076a36c: cmp eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0076a36f: jge 0x76a3a5 */ if ((fS==fO)) goto L_0076a3a5;
L_0076a371:; BB(0x0076a371);
    /* 0076a371: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0076a373: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076a374: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076a375: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076a376: push dword ptr [edi + 0xed8] */ { u32 v = R32((u32)(r_edi+0xed8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0076a37c: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0076a37f: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x76a384u); f_008144b0();
    /* 0076a384: mov ecx, eax */ r_ecx = r_eax;
    /* 0076a386: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0076a389: mov eax, dword ptr [edi + 0xf28] */ r_eax = R32((u32)(r_edi+0xf28u));
    /* 0076a38f: lea edx, [eax + 1] */ r_edx = (u32)(r_eax+0x1u);
    /* 0076a392: mov dword ptr [edi + 0xf28], edx */ W32((u32)(r_edi+0xf28u), r_edx);
    /* 0076a398: mov dword ptr [edi + eax*4 + 0xee8], ecx */ W32((u32)(r_edi+r_eax*4+0xee8u), r_ecx);
    /* 0076a39f: mov edx, dword ptr [edi + 0xee0] */ r_edx = R32((u32)(r_edi+0xee0u));
L_0076a3a5:; BB(0x0076a3a5);
    /* 0076a3a5: add edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0076a3a8: mov dword ptr [edi + 0xee0], edx */ W32((u32)(r_edi+0xee0u), r_edx);
    /* 0076a3ae: jmp 0x76a2d2 */ goto L_0076a2d2;
L_0076a3b3:; BB(0x0076a3b3);
    /* 0076a3b3: mov dword ptr [edi + 0xed8], 0 */ W32((u32)(r_edi+0xed8u), 0x0u);
L_0076a3bd:; BB(0x0076a3bd);
    /* 0076a3bd: mov ecx, edi */ r_ecx = r_edi;
    /* 0076a3bf: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x76a3c4u); f_007aa094();
    /* 0076a3c4: movsx eax, word ptr [edi + 0xb8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0xb8u));
    /* 0076a3cb: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076a3ce: je 0x76a524 */ if (fZ) goto L_0076a524;
L_0076a3d4:; BB(0x0076a3d4);
    /* 0076a3d4: movsx eax, word ptr [edi + 0xfa4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0xfa4u));
    /* 0076a3db: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076a3de: je 0x76a48a */ if (fZ) goto L_0076a48a;
L_0076a3e4:; BB(0x0076a3e4);
    /* 0076a3e4: fld dword ptr [edi + 0xf8c] */ FPUSH(R_F32((u32)(r_edi+0xf8cu)));
    /* 0076a3ea: fcom dword ptr [0x97739c] */ fx_compare(ST(0), R_F32((u32)(0x97739cu))); 
    /* 0076a3f0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0076a3f2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0076a3f3: jbe 0x76a403 */ if ((fC||fZ)) goto L_0076a403;
L_0076a3f5:; BB(0x0076a3f5);
    /* 0076a3f5: fld dword ptr [0x977398] */ FPUSH(R_F32((u32)(0x977398u)));
    /* 0076a3fb: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0076a3fd: fst dword ptr [edi + 0xf8c] */ W_F32((u32)(r_edi+0xf8cu), ST(0));
L_0076a403:; BB(0x0076a403);
    /* 0076a403: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0076a405: mov ecx, edi */ r_ecx = r_edi;
    /* 0076a407: call 0x76a550 */ r_esp -= 4; W32(r_esp, 0x76a40cu); f_0076a550();
    /* 0076a40c: mov edx, dword ptr [edi + 0xf74] */ r_edx = R32((u32)(r_edi+0xf74u));
    /* 0076a412: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0076a415: je 0x76a41e */ if (fZ) goto L_0076a41e;
L_0076a417:; BB(0x0076a417);
    /* 0076a417: mov eax, 1 */ r_eax = 0x1u;
    /* 0076a41c: jmp 0x76a420 */ goto L_0076a420;
L_0076a41e:; BB(0x0076a41e);
    /* 0076a41e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0076a420:; BB(0x0076a420);
    /* 0076a420: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076a422: je 0x76a437 */ if (fZ) goto L_0076a437;
L_0076a424:; BB(0x0076a424);
    /* 0076a424: mov eax, dword ptr [edi + 0xb0] */ r_eax = R32((u32)(r_edi+0xb0u));
    /* 0076a42a: test al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0076a42c: je 0x76a437 */ if (fZ) goto L_0076a437;
L_0076a42e:; BB(0x0076a42e);
    /* 0076a42e: or edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0076a431: mov dword ptr [edi + 0xf74], edx */ W32((u32)(r_edi+0xf74u), r_edx);
L_0076a437:; BB(0x0076a437);
    /* 0076a437: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0076a43a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0076a43b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0076a43c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0076a43d: ret  */ FN_RET(0x0076a234); r_esp += 4; return;
L_0076a43e:; BB(0x0076a43e);
    /* 0076a43e: mov eax, dword ptr [edi + 0xf28] */ r_eax = R32((u32)(r_edi+0xf28u));
    /* 0076a444: cmp eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0076a447: jge 0x76a3a5 */ if ((fS==fO)) goto L_0076a3a5;
L_0076a44d:; BB(0x0076a44d);
    /* 0076a44d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0076a44f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076a450: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076a451: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076a452: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0076a455: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x76a45au); f_00814298();
    /* 0076a45a: mov ecx, eax */ r_ecx = r_eax;
    /* 0076a45c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0076a45f: mov eax, dword ptr [edi + 0xf28] */ r_eax = R32((u32)(r_edi+0xf28u));
    /* 0076a465: lea edx, [eax + 1] */ r_edx = (u32)(r_eax+0x1u);
    /* 0076a468: mov dword ptr [edi + 0xf28], edx */ W32((u32)(r_edi+0xf28u), r_edx);
    /* 0076a46e: mov dword ptr [edi + eax*4 + 0xee8], ecx */ W32((u32)(r_edi+r_eax*4+0xee8u), r_ecx);
    /* 0076a475: mov edx, dword ptr [edi + 0xee0] */ r_edx = R32((u32)(r_edi+0xee0u));
    /* 0076a47b: jmp 0x76a3a5 */ goto L_0076a3a5;
L_0076a480:; BB(0x0076a480);
    /* 0076a480: mov eax, 1 */ r_eax = 0x1u;
    /* 0076a485: jmp 0x76a2e0 */ goto L_0076a2e0;
L_0076a48a:; BB(0x0076a48a);
    /* 0076a48a: mov eax, dword ptr [edi + 0x44] */ r_eax = R32((u32)(r_edi+0x44u));
    /* 0076a48d: mov edx, dword ptr [edi + 0x48] */ r_edx = R32((u32)(r_edi+0x48u));
    /* 0076a490: mov ebp, dword ptr [edi + 0x4c] */ r_ebp = R32((u32)(r_edi+0x4cu));
    /* 0076a493: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0076a496: mov ecx, edi */ r_ecx = r_edi;
    /* 0076a498: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0076a49c: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
    /* 0076a4a0: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 0076a4a2: lea ebp, [edi + 0x38] */ r_ebp = (u32)(r_edi+0x38u);
    /* 0076a4a5: call 0x768964 */ r_esp -= 4; W32(r_esp, 0x76a4aau); f_00768964();
    /* 0076a4aa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076a4ac: je 0x76a4c9 */ if (fZ) goto L_0076a4c9;
L_0076a4ae:; BB(0x0076a4ae);
    /* 0076a4ae: mov eax, dword ptr [edi + 0x784] */ r_eax = R32((u32)(r_edi+0x784u));
    /* 0076a4b4: mov esi, dword ptr [edi + 0x788] */ r_esi = R32((u32)(r_edi+0x788u));
    /* 0076a4ba: mov dword ptr [edi + 0x38], eax */ W32((u32)(r_edi+0x38u), r_eax);
    /* 0076a4bd: mov eax, dword ptr [edi + 0x78c] */ r_eax = R32((u32)(r_edi+0x78cu));
    /* 0076a4c3: mov dword ptr [edi + 0x3c], esi */ W32((u32)(r_edi+0x3cu), r_esi);
    /* 0076a4c6: mov dword ptr [edi + 0x40], eax */ W32((u32)(r_edi+0x40u), r_eax);
L_0076a4c9:; BB(0x0076a4c9);
    /* 0076a4c9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0076a4cb: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0076a4cc: mov ecx, edi */ r_ecx = r_edi;
    /* 0076a4ce: call 0x7b4c58 */ r_esp -= 4; W32(r_esp, 0x76a4d3u); f_007b4c58();
    /* 0076a4d3: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0076a4d6: mov edx, ebp */ r_edx = r_ebp;
    /* 0076a4d8: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x76a4ddu); f_0082f9c4();
    /* 0076a4dd: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0076a4e0: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 0076a4e4: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0076a4e6: fmul qword ptr [0x977038] */ ST(0) = ST(0) * R_F64((u32)(0x977038u));
    /* 0076a4ec: fdiv qword ptr [0x977030] */ ST(0) = ST(0) / R_F64((u32)(0x977030u));
    /* 0076a4f2: fnstcw word ptr [esp + 0xc] */ W16((u32)(r_esp+0xcu), fcw);
    /* 0076a4f6: movzx eax, word ptr [esp + 0xc] */ r_eax = (u32)R16((u32)(r_esp+0xcu));
    /* 0076a4fb: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0076a500: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0076a504: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 0076a508: fistp dword ptr [esp + 0x1c] */ W32((u32)(r_esp+0x1cu), (u32)fx_int32(ST(0))); FPOP();
    /* 0076a50c: fldcw word ptr [esp + 0xc] */ fcw = R16((u32)(r_esp+0xcu));
    /* 0076a510: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0076a514: add eax, 0x4000 */ {  u32 a = r_eax; u32 b = 0x4000u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0076a519: movzx edx, ax */ r_edx = (u32)(u16)r_eax;
    /* 0076a51c: mov dword ptr [edi + 0x60], edx */ W32((u32)(r_edi+0x60u), r_edx);
    /* 0076a51f: jmp 0x76a3e4 */ goto L_0076a3e4;
L_0076a524:; BB(0x0076a524);
    /* 0076a524: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076a526: jne 0x76a530 */ if (!fZ) goto L_0076a530;
L_0076a528:; BB(0x0076a528);
    /* 0076a528: mov eax, dword ptr [edi + 0xc0] */ r_eax = R32((u32)(r_edi+0xc0u));
    /* 0076a52e: jmp 0x76a53c */ goto L_0076a53c;
L_0076a530:; BB(0x0076a530);
    /* 0076a530: mov eax, dword ptr [edi + 0xfac] */ r_eax = R32((u32)(r_edi+0xfacu));
    /* 0076a536: mov dword ptr [edi + 0xc0], eax */ W32((u32)(r_edi+0xc0u), r_eax);
L_0076a53c:; BB(0x0076a53c);
    /* 0076a53c: mov dword ptr [edi + 0xfac], eax */ W32((u32)(r_edi+0xfacu), r_eax);
    /* 0076a542: jmp 0x76a3d4 */ goto L_0076a3d4;
L_0076a547:; BB(0x0076a547);
    /* 0076a547: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0076a549: jmp 0x76a3bd */ goto L_0076a3bd;
}

void f_0076a550(void) /* sub_76A550 */
{
    FN_ENTER(0x0076a550);
    /* 0076a550: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0076a551: mov esi, ecx */ r_esi = r_ecx;
    /* 0076a553: mov eax, dword ptr [esi + 0xf74] */ r_eax = R32((u32)(r_esi+0xf74u));
    /* 0076a559: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0076a55b: je 0x76a564 */ if (fZ) goto L_0076a564;
L_0076a55d:; BB(0x0076a55d);
    /* 0076a55d: mov eax, 1 */ r_eax = 0x1u;
    /* 0076a562: jmp 0x76a566 */ goto L_0076a566;
L_0076a564:; BB(0x0076a564);
    /* 0076a564: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0076a566:; BB(0x0076a566);
    /* 0076a566: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0076a568: jne 0x76a56c */ if (!fZ) goto L_0076a56c;
L_0076a56a:; BB(0x0076a56a);
    /* 0076a56a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0076a56b: ret  */ FN_RET(0x0076a550); r_esp += 4; return;
L_0076a56c:; BB(0x0076a56c);
    /* 0076a56c: lea ecx, [esi + 0xf3c] */ r_ecx = (u32)(r_esi+0xf3cu);
    /* 0076a572: call 0x7ab06c */ r_esp -= 4; W32(r_esp, 0x76a577u); f_007ab06c();
    /* 0076a577: mov eax, dword ptr [esi + 0xf54] */ r_eax = R32((u32)(r_esi+0xf54u));
    /* 0076a57d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0076a580: jne 0x76a589 */ if (!fZ) goto L_0076a589;
L_0076a582:; BB(0x0076a582);
    /* 0076a582: mov ecx, esi */ r_ecx = r_esi;
    /* 0076a584: call 0x76a58c */ r_esp -= 4; W32(r_esp, 0x76a589u); f_0076a58c();
L_0076a589:; BB(0x0076a589);
    /* 0076a589: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0076a58a: ret  */ FN_RET(0x0076a550); r_esp += 4; return;
}

void f_0076a58c(void) /* sub_76A58C */
{
    FN_ENTER(0x0076a58c);
    /* 0076a58c: mov edx, dword ptr [ecx + 0xf74] */ r_edx = R32((u32)(r_ecx+0xf74u));
    /* 0076a592: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0076a597: mov word ptr [ecx + 0xfa4], ax */ W16((u32)(r_ecx+0xfa4u), (u16)r_eax);
    /* 0076a59e: and edx, 0xffffffbf */ {  u32 a = r_edx; u32 b = 0xffffffbfu; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0076a5a1: mov dword ptr [ecx + 0xf74], edx */ W32((u32)(r_ecx+0xf74u), r_edx);
    /* 0076a5a7: ret  */ FN_RET(0x0076a58c); r_esp += 4; return;
}

void f_0076a5a8(void) /* sub_76A5A8 */
{
    FN_ENTER(0x0076a5a8);
    /* 0076a5a8: mov eax, dword ptr [ecx + 0xf74] */ r_eax = R32((u32)(r_ecx+0xf74u));
    /* 0076a5ae: test al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0076a5b0: je 0x76a5b9 */ if (fZ) goto L_0076a5b9;
L_0076a5b2:; BB(0x0076a5b2);
    /* 0076a5b2: mov eax, 1 */ r_eax = 0x1u;
    /* 0076a5b7: jmp 0x76a5bb */ goto L_0076a5bb;
L_0076a5b9:; BB(0x0076a5b9);
    /* 0076a5b9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0076a5bb:; BB(0x0076a5bb);
    /* 0076a5bb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076a5bd: je 0x76a5c5 */ if (fZ) goto L_0076a5c5;
L_0076a5bf:; BB(0x0076a5bf);
    /* 0076a5bf: call 0x76a658 */ r_esp -= 4; W32(r_esp, 0x76a5c4u); f_0076a658();
    /* 0076a5c4: ret  */ FN_RET(0x0076a5a8); r_esp += 4; return;
L_0076a5c5:; BB(0x0076a5c5);
    /* 0076a5c5: call 0x76a5cc */ r_esp -= 4; W32(r_esp, 0x76a5cau); f_0076a5cc();
    /* 0076a5ca: ret  */ FN_RET(0x0076a5a8); r_esp += 4; return;
}

void f_0076a5cc(void) /* sub_76A5CC */
{
    FN_ENTER(0x0076a5cc);
    /* 0076a5cc: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0076a5cf: mov eax, dword ptr [ecx + 0xf78] */ r_eax = R32((u32)(r_ecx+0xf78u));
    /* 0076a5d5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0076a5d7: jl 0x76a5fd */ if ((fS!=fO)) goto L_0076a5fd;
L_0076a5d9:; BB(0x0076a5d9);
    /* 0076a5d9: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 0076a5dd: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0076a5e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076a5e1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0076a5e2: call 0x76a604 */ r_esp -= 4; W32(r_esp, 0x76a5e7u); f_0076a604();
    /* 0076a5e7: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 0076a5eb: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0076a5ee: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0076a5f3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076a5f4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0076a5f5: call 0x4d85bc */ r_esp -= 4; W32(r_esp, 0x76a5fau); f_004d85bc();
    /* 0076a5fa: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0076a5fd:; BB(0x0076a5fd);
    /* 0076a5fd: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0076a600: ret  */ FN_RET(0x0076a5cc); r_esp += 4; return;
}

void f_0076a604(void) /* sub_76A604 */
{
    FN_ENTER(0x0076a604);
    /* 0076a604: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0076a608: mov eax, dword ptr [ecx + 0xf78] */ r_eax = R32((u32)(r_ecx+0xf78u));
    /* 0076a60e: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 0076a611: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0076a613: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0076a615: mov eax, dword ptr [ecx*8 + 0x9f7140] */ r_eax = R32((u32)(r_ecx*8+0x9f7140u));
    /* 0076a61c: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0076a61e: mov eax, dword ptr [ecx*8 + 0x9f7144] */ r_eax = R32((u32)(r_ecx*8+0x9f7144u));
    /* 0076a625: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0076a628: mov eax, dword ptr [ecx*8 + 0x9f7148] */ r_eax = R32((u32)(r_ecx*8+0x9f7148u));
    /* 0076a62f: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 0076a632: mov edx, dword ptr [ecx*8 + 0x9f714c] */ r_edx = R32((u32)(r_ecx*8+0x9f714cu));
    /* 0076a639: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0076a63d: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 0076a63f: mov edx, dword ptr [ecx*8 + 0x9f7150] */ r_edx = R32((u32)(r_ecx*8+0x9f7150u));
    /* 0076a646: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 0076a649: mov edx, dword ptr [ecx*8 + 0x9f7154] */ r_edx = R32((u32)(r_ecx*8+0x9f7154u));
    /* 0076a650: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 0076a653: ret 8 */ FN_RET(0x0076a604); r_esp += 12; return;
}

void f_0076a658(void) /* sub_76A658 */
{
    FN_ENTER(0x0076a658);
    /* 0076a658: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0076a659: mov esi, ecx */ r_esi = r_ecx;
    /* 0076a65b: call 0x4d6864 */ r_esp -= 4; W32(r_esp, 0x76a660u); f_004d6864();
    /* 0076a660: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076a662: je 0x76a66c */ if (fZ) goto L_0076a66c;
L_0076a664:; BB(0x0076a664);
    /* 0076a664: movzx eax, word ptr [eax + 2] */ r_eax = (u32)R16((u32)(r_eax+0x2u));
    /* 0076a668: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0076a66a: je 0x76a6d9 */ if (fZ) goto L_0076a6d9;
L_0076a66c:; BB(0x0076a66c);
    /* 0076a66c: mov edx, dword ptr [esi + 0xf74] */ r_edx = R32((u32)(r_esi+0xf74u));
    /* 0076a672: test edx, 0x2000 */ {  u32 a = r_edx; u32 b = 0x2000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076a678: je 0x76a681 */ if (fZ) goto L_0076a681;
L_0076a67a:; BB(0x0076a67a);
    /* 0076a67a: mov eax, 1 */ r_eax = 0x1u;
    /* 0076a67f: jmp 0x76a683 */ goto L_0076a683;
L_0076a681:; BB(0x0076a681);
    /* 0076a681: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0076a683:; BB(0x0076a683);
    /* 0076a683: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076a685: je 0x76a6ac */ if (fZ) goto L_0076a6ac;
L_0076a687:; BB(0x0076a687);
    /* 0076a687: mov eax, dword ptr [esi + 0xfac] */ r_eax = R32((u32)(r_esi+0xfacu));
    /* 0076a68d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0076a68f: jl 0x76a69a */ if ((fS!=fO)) goto L_0076a69a;
L_0076a691:; BB(0x0076a691);
    /* 0076a691: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0076a694: mov dword ptr [esi + 0xfac], eax */ W32((u32)(r_esi+0xfacu), r_eax);
L_0076a69a:; BB(0x0076a69a);
    /* 0076a69a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0076a69c: je 0x76a6a2 */ if (fZ) goto L_0076a6a2;
L_0076a69e:; BB(0x0076a69e);
    /* 0076a69e: jge 0x76a6e3 */ if ((fS==fO)) goto L_0076a6e3;
L_0076a6a0:; BB(0x0076a6a0);
    /* 0076a6a0: jmp 0x76a6e5 */ goto L_0076a6e5;
L_0076a6a2:; BB(0x0076a6a2);
    /* 0076a6a2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0076a6a4: call 0x788f64 */ r_esp -= 4; W32(r_esp, 0x76a6a9u); f_00788f64();
    /* 0076a6a9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0076a6aa: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0076a6ab: ret  */ FN_RET(0x0076a658); r_esp += 4; return;
L_0076a6ac:; BB(0x0076a6ac);
    /* 0076a6ac: movsx eax, word ptr [esi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x32eu));
    /* 0076a6b3: cmp eax, 0x1b */ {  u32 a = r_eax; u32 b = 0x1bu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076a6b6: jne 0x76a6d0 */ if (!fZ) goto L_0076a6d0;
L_0076a6b8:; BB(0x0076a6b8);
    /* 0076a6b8: mov dword ptr [esi + 0xfac], 0x3c */ W32((u32)(r_esi+0xfacu), 0x3cu);
    /* 0076a6c2: or edx, 0x2000 */ {  u32 a = r_edx; u32 b = 0x2000u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0076a6c8: mov dword ptr [esi + 0xf74], edx */ W32((u32)(r_esi+0xf74u), r_edx);
    /* 0076a6ce: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0076a6cf: ret  */ FN_RET(0x0076a658); r_esp += 4; return;
L_0076a6d0:; BB(0x0076a6d0);
    /* 0076a6d0: mov ecx, esi */ r_ecx = r_esi;
    /* 0076a6d2: call 0x76a708 */ r_esp -= 4; W32(r_esp, 0x76a6d7u); f_0076a708();
    /* 0076a6d7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0076a6d8: ret  */ FN_RET(0x0076a658); r_esp += 4; return;
L_0076a6d9:; BB(0x0076a6d9);
    /* 0076a6d9: mov dword ptr [esi + 0xfac], 0 */ W32((u32)(r_esi+0xfacu), 0x0u);
L_0076a6e3:; BB(0x0076a6e3);
    /* 0076a6e3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0076a6e4: ret  */ FN_RET(0x0076a658); r_esp += 4; return;
L_0076a6e5:; BB(0x0076a6e5);
    /* 0076a6e5: call 0x788f90 */ r_esp -= 4; W32(r_esp, 0x76a6eau); f_00788f90();
    /* 0076a6ea: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0076a6ec: jne 0x76a6e3 */ if (!fZ) goto L_0076a6e3;
L_0076a6ee:; BB(0x0076a6ee);
    /* 0076a6ee: mov ecx, esi */ r_ecx = r_esi;
    /* 0076a6f0: call 0x76a708 */ r_esp -= 4; W32(r_esp, 0x76a6f5u); f_0076a708();
    /* 0076a6f5: mov eax, dword ptr [esi + 0xf74] */ r_eax = R32((u32)(r_esi+0xf74u));
    /* 0076a6fb: and eax, 0xffffdfff */ {  u32 a = r_eax; u32 b = 0xffffdfffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0076a700: mov dword ptr [esi + 0xf74], eax */ W32((u32)(r_esi+0xf74u), r_eax);
    /* 0076a706: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0076a707: ret  */ FN_RET(0x0076a658); r_esp += 4; return;
}

void f_0076a708(void) /* sub_76A708 */
{
    FN_ENTER(0x0076a708);
    /* 0076a708: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0076a709: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0076a70b: call 0x4d3250 */ r_esp -= 4; W32(r_esp, 0x76a710u); f_004d3250();
    /* 0076a710: mov eax, dword ptr [ebp + 0xf74] */ r_eax = R32((u32)(r_ebp+0xf74u));
    /* 0076a716: and eax, 0xffffffdf */ {  u32 a = r_eax; u32 b = 0xffffffdfu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0076a719: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0076a71c: mov dword ptr [ebp + 0xf74], eax */ W32((u32)(r_ebp+0xf74u), r_eax);
    /* 0076a722: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0076a723: ret  */ FN_RET(0x0076a708); r_esp += 4; return;
}

void f_0076a724(void) /* sub_76A724 */
{
    FN_ENTER(0x0076a724);
    /* 0076a724: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0076a725: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0076a726: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0076a729: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0076a72b: mov esi, dword ptr [esp + 0x20] */ r_esi = R32((u32)(r_esp+0x20u));
    /* 0076a72f: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0076a732: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 0076a736: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076a737: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0076a739: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0076a73a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0076a73b: call 0x768990 */ r_esp -= 4; W32(r_esp, 0x76a740u); f_00768990();
    /* 0076a740: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 0076a744: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0076a748: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076a74a: jne 0x76a769 */ if (!fZ) goto L_0076a769;
L_0076a74c:; BB(0x0076a74c);
    /* 0076a74c: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 0076a750: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0076a753: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076a754: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0076a756: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0076a757: mov esi, dword ptr [esp + 0x2c] */ r_esi = R32((u32)(r_esp+0x2cu));
    /* 0076a75b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0076a75c: call 0x51fdf8 */ r_esp -= 4; W32(r_esp, 0x76a761u); f_0051fdf8();
    /* 0076a761: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0076a764: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0076a765: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0076a766: ret 0x10 */ FN_RET(0x0076a724); r_esp += 20; return;
L_0076a769:; BB(0x0076a769);
    /* 0076a769: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 0076a76d: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0076a770: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076a771: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0076a773: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0076a774: mov esi, dword ptr [esp + 0x2c] */ r_esi = R32((u32)(r_esp+0x2cu));
    /* 0076a778: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0076a779: call 0x51fc9c */ r_esp -= 4; W32(r_esp, 0x76a77eu); f_0051fc9c();
    /* 0076a77e: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0076a781: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0076a782: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0076a783: ret 0x10 */ FN_RET(0x0076a724); r_esp += 20; return;
}

void f_0076a788(void) /* sub_76A788 */
{
    FN_ENTER(0x0076a788);
    /* 0076a788: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0076a789: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0076a78c: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0076a78e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0076a790: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0076a793: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 0076a797: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076a798: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0076a799: push dword ptr [esp + 0x28] */ { u32 v = R32((u32)(r_esp+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 0076a79d: call 0x768990 */ r_esp -= 4; W32(r_esp, 0x76a7a2u); f_00768990();
    /* 0076a7a2: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 0076a7a6: mov edx, dword ptr [esp + 0x2c] */ r_edx = R32((u32)(r_esp+0x2cu));
    /* 0076a7aa: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0076a7ae: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0076a7b0: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0076a7b4: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0076a7b7: push dword ptr [esp + 0x30] */ { u32 v = R32((u32)(r_esp+0x30u)); r_esp -= 4; W32(r_esp, v); }
    /* 0076a7bb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076a7bc: push dword ptr [esp + 0x2c] */ { u32 v = R32((u32)(r_esp+0x2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0076a7c0: call 0x51fd44 */ r_esp -= 4; W32(r_esp, 0x76a7c5u); f_0051fd44();
    /* 0076a7c5: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0076a7c8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0076a7c9: ret 0x14 */ FN_RET(0x0076a788); r_esp += 24; return;
}

void f_0076a7cc(void) /* sub_76A7CC */
{
    FN_ENTER(0x0076a7cc);
    /* 0076a7cc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0076a7cd: call 0x67ab60 */ r_esp -= 4; W32(r_esp, 0x76a7d2u); f_0067ab60();
    /* 0076a7d2: call 0x76f310 */ r_esp -= 4; W32(r_esp, 0x76a7d7u); f_0076f310();
    /* 0076a7d7: call 0x76c7ac */ r_esp -= 4; W32(r_esp, 0x76a7dcu); f_0076c7ac();
    /* 0076a7dc: call 0x766eec */ r_esp -= 4; W32(r_esp, 0x76a7e1u); f_00766eec();
    /* 0076a7e1: call 0x76ce98 */ r_esp -= 4; W32(r_esp, 0x76a7e6u); f_0076ce98();
    /* 0076a7e6: call 0x765fbc */ r_esp -= 4; W32(r_esp, 0x76a7ebu); f_00765fbc();
    /* 0076a7eb: call 0x766928 */ r_esp -= 4; W32(r_esp, 0x76a7f0u); f_00766928();
    /* 0076a7f0: call 0x767440 */ r_esp -= 4; W32(r_esp, 0x76a7f5u); f_00767440();
    /* 0076a7f5: mov ecx, dword ptr [0xa9b068] */ r_ecx = R32((u32)(0xa9b068u));
    /* 0076a7fb: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076a7fd: je 0x76a811 */ if (fZ) goto L_0076a811;
L_0076a7ff:; BB(0x0076a7ff);
    /* 0076a7ff: je 0x76a807 */ if (fZ) goto L_0076a807;
L_0076a801:; BB(0x0076a801);
    /* 0076a801: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0076a803: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0076a805: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x76a807u); call_ind(t); }
L_0076a807:; BB(0x0076a807);
    /* 0076a807: mov dword ptr [0xa9b068], 0 */ W32((u32)(0xa9b068u), 0x0u);
L_0076a811:; BB(0x0076a811);
    /* 0076a811: mov ecx, dword ptr [0xa9b06c] */ r_ecx = R32((u32)(0xa9b06cu));
    /* 0076a817: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076a819: je 0x76a82e */ if (fZ) goto L_0076a82e;
L_0076a81b:; BB(0x0076a81b);
    /* 0076a81b: je 0x76a824 */ if (fZ) goto L_0076a824;
L_0076a81d:; BB(0x0076a81d);
    /* 0076a81d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0076a81f: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x76a824u); f_004066a8();
L_0076a824:; BB(0x0076a824);
    /* 0076a824: mov dword ptr [0xa9b06c], 0 */ W32((u32)(0xa9b06cu), 0x0u);
L_0076a82e:; BB(0x0076a82e);
    /* 0076a82e: push dword ptr [0xa9b064] */ { u32 v = R32((u32)(0xa9b064u)); r_esp -= 4; W32(r_esp, v); }
    /* 0076a834: call 0x8148a8 */ r_esp -= 4; W32(r_esp, 0x76a839u); f_008148a8();
    /* 0076a839: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0076a83b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0076a83e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0076a840: mov ebx, eax */ r_ebx = r_eax;
L_0076a842:; BB(0x0076a842);
    /* 0076a842: mov ecx, dword ptr [ebx + 0xa9b080] */ r_ecx = R32((u32)(r_ebx+0xa9b080u));
    /* 0076a848: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0076a84b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076a84d: je 0x76a862 */ if (fZ) goto L_0076a862;
L_0076a84f:; BB(0x0076a84f);
    /* 0076a84f: je 0x76a858 */ if (fZ) goto L_0076a858;
L_0076a851:; BB(0x0076a851);
    /* 0076a851: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0076a853: call 0x45a950 */ r_esp -= 4; W32(r_esp, 0x76a858u); f_0045a950();
L_0076a858:; BB(0x0076a858);
    /* 0076a858: mov dword ptr [ebx + 0xa9b07c], 0 */ W32((u32)(r_ebx+0xa9b07cu), 0x0u);
L_0076a862:; BB(0x0076a862);
    /* 0076a862: cmp ebx, 0xc */ {  u32 a = r_ebx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0076a865: jb 0x76a842 */ if (fC) goto L_0076a842;
L_0076a867:; BB(0x0076a867);
    /* 0076a867: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0076a868: ret  */ FN_RET(0x0076a7cc); r_esp += 4; return;
}

void f_0076a86c(void)
{
    FN_ENTER(0x0076a86c);
    /* 0076a86c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0076a86d: mov ebp, esp */ r_ebp = r_esp;
    /* 0076a86f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0076a871: push 0x8f3b64 */ { u32 v = 0x8f3b64u; r_esp -= 4; W32(r_esp, v); }
    /* 0076a876: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0076a87c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076a87d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0076a884: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0076a887: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0076a88a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0076a88d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0076a890: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0076a893: push 0xfb8 */ { u32 v = 0xfb8u; r_esp -= 4; W32(r_esp, v); }
    /* 0076a898: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0076a89f: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x76a8a4u); f_005caba4();
    /* 0076a8a4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0076a8a5: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0076a8a8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076a8aa: je 0x76a8e3 */ if (fZ) goto L_0076a8e3;
L_0076a8ac:; BB(0x0076a8ac);
    /* 0076a8ac: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0076a8b3: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0076a8ba: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0076a8bd: push dword ptr [0xaca364] */ { u32 v = R32((u32)(0xaca364u)); r_esp -= 4; W32(r_esp, v); }
    /* 0076a8c3: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0076a8c6: call 0x76a8e8 */ r_esp -= 4; W32(r_esp, 0x76a8cbu); f_0076a8e8();
    /* 0076a8cb: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0076a8ce: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0076a8d5:; BB(0x0076a8d5);
    /* 0076a8d5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0076a8d8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0076a8df: mov esp, ebp */ r_esp = r_ebp;
    /* 0076a8e1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0076a8e2: ret  */ FN_RET(0x0076a86c); r_esp += 4; return;
L_0076a8e3:; BB(0x0076a8e3);
    /* 0076a8e3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0076a8e5: jmp 0x76a8d5 */ goto L_0076a8d5;
}

void f_0076a8e8(void) /* sub_76A8E8 */
{
    FN_ENTER(0x0076a8e8);
    /* 0076a8e8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0076a8e9: mov ebp, esp */ r_ebp = r_esp;
    /* 0076a8eb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0076a8ed: push 0x8f3c12 */ { u32 v = 0x8f3c12u; r_esp -= 4; W32(r_esp, v); }
    /* 0076a8f2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0076a8f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076a8f9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0076a900: sub esp, 0x78 */ {  u32 a = r_esp; u32 b = 0x78u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0076a903: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0076a906: mov dword ptr [ebp - 0x2c], edi */ W32((u32)(r_ebp+0xffffffd4u), r_edi);
    /* 0076a909: mov dword ptr [ebp - 0x28], esi */ W32((u32)(r_ebp+0xffffffd8u), r_esi);
    /* 0076a90c: mov dword ptr [ebp - 0x24], ebx */ W32((u32)(r_ebp+0xffffffdcu), r_ebx);
    /* 0076a90f: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0076a912: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0076a915: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 0076a918: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0076a91b: call 0x5216f4 */ r_esp -= 4; W32(r_esp, 0x76a920u); f_005216f4();
    /* 0076a920: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0076a927: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0076a92a: mov dword ptr [eax], 0xb43880 */ W32((u32)(r_eax), 0xb43880u);
    /* 0076a930: lea ecx, [eax + 0xed4] */ r_ecx = (u32)(r_eax+0xed4u);
    /* 0076a936: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0076a938: mov dword ptr [eax + 0xed4], 0xb43878 */ W32((u32)(r_eax+0xed4u), 0xb43878u);
    /* 0076a942: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0076a943: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0076a944: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0076a945: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0076a946: call 0x76c098 */ r_esp -= 4; W32(r_esp, 0x76a94bu); f_0076c098();
    /* 0076a94b: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0076a94e: mov dword ptr [edx + 0xf3c], 0xb3a268 */ W32((u32)(r_edx+0xf3cu), 0xb3a268u);
    /* 0076a958: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0076a95a: mov dword ptr [edx + 0xf40], eax */ W32((u32)(r_edx+0xf40u), r_eax);
    /* 0076a960: mov dword ptr [edx + 0xf48], 0 */ W32((u32)(r_edx+0xf48u), 0x0u);
    /* 0076a96a: mov dword ptr [edx + 0xf44], eax */ W32((u32)(r_edx+0xf44u), r_eax);
    /* 0076a970: mov dword ptr [edx + 0xf54], eax */ W32((u32)(r_edx+0xf54u), r_eax);
    /* 0076a976: mov dword ptr [edx + 0xf4c], 0 */ W32((u32)(r_edx+0xf4cu), 0x0u);
    /* 0076a980: mov dword ptr [edx + 0xf50], 0 */ W32((u32)(r_edx+0xf50u), 0x0u);
    /* 0076a98a: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0076a991: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0076a994: add ecx, 0xf58 */ {  u32 a = r_ecx; u32 b = 0xf58u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0076a99a: call 0x57713c */ r_esp -= 4; W32(r_esp, 0x76a99fu); f_0057713c();
    /* 0076a99f: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 0076a9a6: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0076a9a9: add eax, 0xfac */ {  u32 a = r_eax; u32 b = 0xfacu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0076a9ae: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
    /* 0076a9b4: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0076a9b7: mov edx, dword ptr [0x9f75c0] */ r_edx = R32((u32)(0x9f75c0u));
    /* 0076a9bd: mov ecx, dword ptr [0xa9b06c] */ r_ecx = R32((u32)(0xa9b06cu));
    /* 0076a9c3: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 0076a9c6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076a9c8: je 0x76af45 */ if (fZ) goto L_0076af45;
L_0076a9ce:; BB(0x0076a9ce);
    /* 0076a9ce: mov edx, dword ptr [0xa9b068] */ r_edx = R32((u32)(0xa9b068u));
    /* 0076a9d4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076a9d6: je 0x76af45 */ if (fZ) goto L_0076af45;
L_0076a9dc:; BB(0x0076a9dc);
    /* 0076a9dc: movsx edx, word ptr [eax + 0x2c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x2cu));
    /* 0076a9e0: mov dword ptr [0xa9b07c], eax */ W32((u32)(0xa9b07cu), r_eax);
    /* 0076a9e5: mov dword ptr [eax + 0xf74], 0 */ W32((u32)(r_eax+0xf74u), 0x0u);
    /* 0076a9ef: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0076a9f1: jl 0x76aa25 */ if ((fS!=fO)) goto L_0076aa25;
L_0076a9f3:; BB(0x0076a9f3);
    /* 0076a9f3: cmp edx, 0xb4f */ {  u32 a = r_edx; u32 b = 0xb4fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0076a9f9: jg 0x76aa25 */ if ((!fZ&&fS==fO)) goto L_0076aa25;
L_0076a9fb:; BB(0x0076a9fb);
    /* 0076a9fb: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0076a9fd: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0076a9ff: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 0076aa02: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0076aa04: mov edx, dword ptr [0xab02b8] */ r_edx = R32((u32)(0xab02b8u));
    /* 0076aa0a: mov ebx, dword ptr [ecx + edx] */ r_ebx = R32((u32)(r_ecx+r_edx));
    /* 0076aa0d: and ebx, 0x12008 */ {  u32 a = r_ebx; u32 b = 0x12008u; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 0076aa13: cmp ebx, 0x12008 */ {  u32 a = r_ebx; u32 b = 0x12008u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076aa19: jne 0x76aa25 */ if (!fZ) goto L_0076aa25;
L_0076aa1b:; BB(0x0076aa1b);
    /* 0076aa1b: mov dword ptr [eax + 0xf74], 0x4000 */ W32((u32)(r_eax+0xf74u), 0x4000u);
L_0076aa25:; BB(0x0076aa25);
    /* 0076aa25: mov ecx, eax */ r_ecx = r_eax;
    /* 0076aa27: call 0x76bff0 */ r_esp -= 4; W32(r_esp, 0x76aa2cu); f_0076bff0();
    /* 0076aa2c: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0076aa2f: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0076aa32: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076aa33: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0076aa35: call dword ptr [edx + 0x14c] */ { u32 t = R32((u32)(r_edx+0x14cu)); r_esp -= 4; W32(r_esp, 0x76aa3bu); call_ind(t); }
    /* 0076aa3b: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0076aa3e: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0076aa40: call dword ptr [eax + 0x150] */ { u32 t = R32((u32)(r_eax+0x150u)); r_esp -= 4; W32(r_esp, 0x76aa46u); call_ind(t); }
    /* 0076aa46: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0076aa49: mov ebx, dword ptr [eax + 0x370] */ r_ebx = R32((u32)(r_eax+0x370u));
    /* 0076aa4f: movsx edx, word ptr [eax + 0x2c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x2cu));
    /* 0076aa53: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0076aa54: and ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 0076aa57: call 0x813038 */ r_esp -= 4; W32(r_esp, 0x76aa5cu); f_00813038();
    /* 0076aa5c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0076aa5d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076aa5f: je 0x76aa66 */ if (fZ) goto L_0076aa66;
L_0076aa61:; BB(0x0076aa61);
    /* 0076aa61: mov ebx, 2 */ r_ebx = 0x2u;
L_0076aa66:; BB(0x0076aa66);
    /* 0076aa66: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0076aa69: mov dword ptr [0xa9b078], ebx */ W32((u32)(0xa9b078u), r_ebx);
    /* 0076aa6f: call 0x76af74 */ r_esp -= 4; W32(r_esp, 0x76aa74u); f_0076af74();
    /* 0076aa74: mov dword ptr [ebp - 0x84], 0 */ W32((u32)(r_ebp+0xffffff7cu), 0x0u);
    /* 0076aa7e: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 0076aa80: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x76aa85u); f_005caba4();
    /* 0076aa85: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0076aa86: mov dword ptr [ebp - 0x80], eax */ W32((u32)(r_ebp+0xffffff80u), r_eax);
    /* 0076aa89: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076aa8b: je 0x76af3e */ if (fZ) goto L_0076af3e;
L_0076aa91:; BB(0x0076aa91);
    /* 0076aa91: mov dword ptr [ebp - 0x84], 1 */ W32((u32)(r_ebp+0xffffff7cu), 0x1u);
    /* 0076aa9b: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 0076aaa2: push dword ptr [0xaca34c] */ { u32 v = R32((u32)(0xaca34cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0076aaa8: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 0076aaab: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x76aab0u); f_008193cc();
    /* 0076aab0: mov edx, dword ptr [ebp - 0x80] */ r_edx = R32((u32)(r_ebp+0xffffff80u));
    /* 0076aab3: mov dword ptr [ebp - 0x84], 0 */ W32((u32)(r_ebp+0xffffff7cu), 0x0u);
L_0076aabd:; BB(0x0076aabd);
    /* 0076aabd: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0076aac0: mov dword ptr [eax + 0x3c8], edx */ W32((u32)(r_eax+0x3c8u), r_edx);
    /* 0076aac6: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 0076aacd: mov dword ptr [ebp - 0x7c], 0 */ W32((u32)(r_ebp+0xffffff84u), 0x0u);
    /* 0076aad4: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 0076aad6: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x76aadbu); f_005caba4();
    /* 0076aadb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0076aadc: mov dword ptr [ebp - 0x80], eax */ W32((u32)(r_ebp+0xffffff80u), r_eax);
    /* 0076aadf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076aae1: je 0x76af37 */ if (fZ) goto L_0076af37;
L_0076aae7:; BB(0x0076aae7);
    /* 0076aae7: mov dword ptr [ebp - 0x7c], 1 */ W32((u32)(r_ebp+0xffffff84u), 0x1u);
    /* 0076aaee: mov dword ptr [ebp - 4], 5 */ W32((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 0076aaf5: push dword ptr [ebp - 0x30] */ { u32 v = R32((u32)(r_ebp+0xffffffd0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0076aaf8: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 0076aafb: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x76ab00u); f_008193cc();
    /* 0076ab00: mov edx, dword ptr [ebp - 0x80] */ r_edx = R32((u32)(r_ebp+0xffffff80u));
    /* 0076ab03: mov dword ptr [ebp - 0x7c], 0 */ W32((u32)(r_ebp+0xffffff84u), 0x0u);
L_0076ab0a:; BB(0x0076ab0a);
    /* 0076ab0a: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0076ab0d: mov dword ptr [eax + 0x3cc], edx */ W32((u32)(r_eax+0x3ccu), r_edx);
    /* 0076ab13: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 0076ab1a: push 0x4c */ { u32 v = 0x4cu; r_esp -= 4; W32(r_esp, v); }
    /* 0076ab1c: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x76ab21u); f_008581c5();
    /* 0076ab21: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0076ab22: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0076ab25: mov dword ptr [edx + 0xfb0], eax */ W32((u32)(r_edx+0xfb0u), r_eax);
    /* 0076ab2b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0076ab2d: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
L_0076ab30:; BB(0x0076ab30);
    /* 0076ab30: mov dword ptr [ebp - 0x78], 0 */ W32((u32)(r_ebp+0xffffff88u), 0x0u);
    /* 0076ab37: push 0xe8 */ { u32 v = 0xe8u; r_esp -= 4; W32(r_esp, v); }
    /* 0076ab3c: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x76ab41u); f_005caba4();
    /* 0076ab41: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0076ab44: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0076ab47: mov dword ptr [ebp - 0x74], eax */ W32((u32)(r_ebp+0xffffff8cu), r_eax);
    /* 0076ab4a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076ab4c: je 0x76af2d */ if (fZ) goto L_0076af2d;
L_0076ab52:; BB(0x0076ab52);
    /* 0076ab52: mov dword ptr [ebp - 0x78], 1 */ W32((u32)(r_ebp+0xffffff88u), 0x1u);
    /* 0076ab59: mov dword ptr [ebp - 4], 6 */ W32((u32)(r_ebp+0xfffffffcu), 0x6u);
    /* 0076ab60: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0076ab63: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0076ab66: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0076ab69: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0076ab6b: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0076ab6d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0076ab6f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0076ab71: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0076ab73: lea ebx, [edx + edx + 0x9f71a4] */ r_ebx = (u32)(r_edx+r_edx+0x9f71a4u);
    /* 0076ab7a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0076ab7b: push dword ptr [ebp - 0x30] */ { u32 v = R32((u32)(r_ebp+0xffffffd0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0076ab7e: call 0x764bc8 */ r_esp -= 4; W32(r_esp, 0x76ab83u); f_00764bc8();
    /* 0076ab83: mov dword ptr [ebp - 0x78], 0 */ W32((u32)(r_ebp+0xffffff88u), 0x0u);
L_0076ab8a:; BB(0x0076ab8a);
    /* 0076ab8a: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0076ab8d: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0076ab90: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0076ab93: mov ecx, dword ptr [eax + 0xfb0] */ r_ecx = R32((u32)(r_eax+0xfb0u));
    /* 0076ab99: mov dword ptr [ecx + ebx*4], edx */ W32((u32)(r_ecx+r_ebx*4), r_edx);
    /* 0076ab9c: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 0076aba3: mov eax, ebx */ r_eax = r_ebx;
    /* 0076aba5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0076aba8: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0076abab: cmp eax, 0x13 */ {  u32 a = r_eax; u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0076abae: jl 0x76ab30 */ if ((fS!=fO)) goto L_0076ab30;
L_0076abb0:; BB(0x0076abb0);
    /* 0076abb0: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0076abb3: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0076abb5: movzx edi, word ptr [eax + 0x1c] */ r_edi = (u32)R16((u32)(r_eax+0x1cu));
    /* 0076abb9: movsx esi, word ptr [eax + 0x2c] */ r_esi = (u32)(i32)(i16)R16((u32)(r_eax+0x2cu));
    /* 0076abbd: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x76abc2u); f_008581c5();
    /* 0076abc2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0076abc3: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0076abc6: mov dword ptr [0xa9afe0], 4 */ W32((u32)(0xa9afe0u), 0x4u);
    /* 0076abd0: mov dword ptr [ecx + 0xfb4], eax */ W32((u32)(r_ecx+0xfb4u), r_eax);
    /* 0076abd6: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_0076abd8:; BB(0x0076abd8);
    /* 0076abd8: mov dword ptr [ebp - 0x14], edi */ W32((u32)(r_ebp+0xffffffecu), r_edi);
    /* 0076abdb: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0076abde: lea eax, [ebx + 5] */ r_eax = (u32)(r_ebx+0x5u);
    /* 0076abe1: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0076abe4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076abe5: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0076abe8: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0076abeb: call 0x768964 */ r_esp -= 4; W32(r_esp, 0x76abf0u); f_00768964();
    /* 0076abf0: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0076abf3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076abf5: jne 0x76abfb */ if (!fZ) goto L_0076abfb;
L_0076abf7:; BB(0x0076abf7);
    /* 0076abf7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0076abf9: jmp 0x76ac11 */ goto L_0076ac11;
L_0076abfb:; BB(0x0076abfb);
    /* 0076abfb: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0076abfe: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0076ac00: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0076ac02: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0076ac04: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0076ac06: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0076ac08: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0076ac0a: lea eax, [edx + eax + 0x414] */ r_eax = (u32)(r_edx+r_eax+0x414u);
L_0076ac11:; BB(0x0076ac11);
    /* 0076ac11: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076ac12: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0076ac15: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0076ac16: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0076ac19: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076ac1a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0076ac1b: call 0x765310 */ r_esp -= 4; W32(r_esp, 0x76ac20u); f_00765310();
    /* 0076ac20: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0076ac23: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0076ac26: mov ecx, dword ptr [edx + 0xfb4] */ r_ecx = R32((u32)(r_edx+0xfb4u));
    /* 0076ac2c: mov dword ptr [ecx + ebx*4], eax */ W32((u32)(r_ecx+r_ebx*4), r_eax);
    /* 0076ac2f: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0076ac32: mov eax, dword ptr [edx + 0xfb4] */ r_eax = R32((u32)(r_edx+0xfb4u));
    /* 0076ac38: mov ecx, dword ptr [eax + ebx*4] */ r_ecx = R32((u32)(r_eax+r_ebx*4));
    /* 0076ac3b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076ac3d: je 0x76ac4b */ if (fZ) goto L_0076ac4b;
L_0076ac3f:; BB(0x0076ac3f);
    /* 0076ac3f: mov eax, dword ptr [edx + 0x2e8] */ r_eax = R32((u32)(r_edx+0x2e8u));
    /* 0076ac45: or dword ptr [ecx + 0x2e8], eax */ { u32 ad = (u32)(r_ecx+0x2e8u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_0076ac4b:; BB(0x0076ac4b);
    /* 0076ac4b: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0076ac4e: cmp ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0076ac51: jge 0x76ac58 */ if ((fS==fO)) goto L_0076ac58;
L_0076ac53:; BB(0x0076ac53);
    /* 0076ac53: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0076ac56: jmp 0x76abd8 */ goto L_0076abd8;
L_0076ac58:; BB(0x0076ac58);
    /* 0076ac58: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0076ac5b: movzx edx, word ptr [eax + 4] */ r_edx = (u32)R16((u32)(r_eax+0x4u));
    /* 0076ac5f: movzx ecx, word ptr [eax + 8] */ r_ecx = (u32)R16((u32)(r_eax+0x8u));
    /* 0076ac63: movzx ebx, word ptr [eax + 0xa] */ r_ebx = (u32)R16((u32)(r_eax+0xau));
    /* 0076ac67: mov word ptr [ebp - 0x6c], dx */ W16((u32)(r_ebp+0xffffff94u), (u16)r_edx);
    /* 0076ac6b: movzx edx, word ptr [eax + 0xc] */ r_edx = (u32)R16((u32)(r_eax+0xcu));
    /* 0076ac6f: mov word ptr [ebp - 0x68], cx */ W16((u32)(r_ebp+0xffffff98u), (u16)r_ecx);
    /* 0076ac73: mov word ptr [ebp - 0x66], bx */ W16((u32)(r_ebp+0xffffff9au), (u16)r_ebx);
    /* 0076ac77: mov word ptr [ebp - 0x64], dx */ W16((u32)(r_ebp+0xffffff9cu), (u16)r_edx);
    /* 0076ac7b: movzx edx, word ptr [eax + 0xe] */ r_edx = (u32)R16((u32)(r_eax+0xeu));
    /* 0076ac7f: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0076ac81: mov word ptr [ebp - 0x62], dx */ W16((u32)(r_ebp+0xffffff9eu), (u16)r_edx);
    /* 0076ac85: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 0076ac88: mov dword ptr [ebp - 0x60], edx */ W32((u32)(r_ebp+0xffffffa0u), r_edx);
    /* 0076ac8b: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 0076ac8e: mov dword ptr [ebp - 0x5c], edx */ W32((u32)(r_ebp+0xffffffa4u), r_edx);
    /* 0076ac91: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 0076ac94: mov dword ptr [ebp - 0x58], edx */ W32((u32)(r_ebp+0xffffffa8u), r_edx);
    /* 0076ac97: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 0076ac9a: mov dword ptr [ebp - 0x54], edx */ W32((u32)(r_ebp+0xffffffacu), r_edx);
    /* 0076ac9d: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 0076aca0: mov dword ptr [ebp - 0x50], edx */ W32((u32)(r_ebp+0xffffffb0u), r_edx);
    /* 0076aca3: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 0076aca6: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
    /* 0076aca9: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 0076acac: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
    /* 0076acaf: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 0076acb2: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 0076acb5: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 0076acb8: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 0076acbb: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 0076acbe: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 0076acc1: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 0076acc4: movzx eax, word ptr [eax + 0x3e] */ r_eax = (u32)R16((u32)(r_eax+0x3eu));
    /* 0076acc8: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 0076accb: mov word ptr [ebp - 0x32], ax */ W16((u32)(r_ebp+0xffffffceu), (u16)r_eax);
    /* 0076accf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0076acd1: mov word ptr [ebp - 0x6e], ax */ W16((u32)(r_ebp+0xffffff92u), (u16)r_eax);
    /* 0076acd5: mov eax, dword ptr [0xa9b078] */ r_eax = R32((u32)(0xa9b078u));
    /* 0076acda: mov word ptr [ebp - 0x34], ax */ W16((u32)(r_ebp+0xffffffccu), (u16)r_eax);
L_0076acde:; BB(0x0076acde);
    /* 0076acde: mov word ptr [ebp - 0x6a], di */ W16((u32)(r_ebp+0xffffff96u), (u16)r_edi);
    /* 0076ace2: mov word ptr [ebp - 0x70], si */ W16((u32)(r_ebp+0xffffff90u), (u16)r_esi);
    /* 0076ace6: lea eax, [ebp - 0x70] */ r_eax = (u32)(r_ebp+0xffffff90u);
    /* 0076ace9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076acea: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0076aced: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0076acf0: call 0x76f34c */ r_esp -= 4; W32(r_esp, 0x76acf5u); f_0076f34c();
    /* 0076acf5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0076acf6: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0076acf9: cmp ebx, 0x10 */ {  u32 a = r_ebx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0076acfc: jl 0x76acde */ if ((fS!=fO)) goto L_0076acde;
L_0076acfe:; BB(0x0076acfe);
    /* 0076acfe: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0076ad01: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0076ad03: lea eax, [ecx + 0x38] */ r_eax = (u32)(r_ecx+0x38u);
    /* 0076ad06: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076ad07: call 0x7b4c58 */ r_esp -= 4; W32(r_esp, 0x76ad0cu); f_007b4c58();
    /* 0076ad0c: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0076ad0f: call 0x76a174 */ r_esp -= 4; W32(r_esp, 0x76ad14u); f_0076a174();
    /* 0076ad14: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0076ad17: mov eax, dword ptr [0xa9b06c] */ r_eax = R32((u32)(0xa9b06cu));
    /* 0076ad1c: movsx ebx, word ptr [ecx + 0xb8] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_ecx+0xb8u));
    /* 0076ad23: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0076ad24: mov dword ptr [ecx + 0xd8], 0x9f6a20 */ W32((u32)(r_ecx+0xd8u), 0x9f6a20u);
    /* 0076ad2e: mov edx, dword ptr [eax + 0x430] */ r_edx = R32((u32)(r_eax+0x430u));
    /* 0076ad34: mov dword ptr [ecx + 0xdc], edx */ W32((u32)(r_ecx+0xdcu), r_edx);
    /* 0076ad3a: call 0x7aa4c8 */ r_esp -= 4; W32(r_esp, 0x76ad3fu); f_007aa4c8();
    /* 0076ad3f: push 0x767c50 */ { u32 v = 0x767c50u; r_esp -= 4; W32(r_esp, v); }
    /* 0076ad44: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0076ad47: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0076ad4d: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0076ad50: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 0076ad52: push 0x9f6be0 */ { u32 v = 0x9f6be0u; r_esp -= 4; W32(r_esp, v); }
    /* 0076ad57: mov dword ptr [edx + 0xb0], eax */ W32((u32)(r_edx+0xb0u), r_eax);
    /* 0076ad5d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0076ad5e: lea ecx, [edx + 0xed4] */ r_ecx = (u32)(r_edx+0xed4u);
    /* 0076ad64: call 0x76c098 */ r_esp -= 4; W32(r_esp, 0x76ad69u); f_0076c098();
    /* 0076ad69: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0076ad6c: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0076ad6f: mov dword ptr [edx + 0xf48], 0 */ W32((u32)(r_edx+0xf48u), 0x0u);
    /* 0076ad79: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0076ad7b: mov dword ptr [edx + 0xf4c], 0 */ W32((u32)(r_edx+0xf4cu), 0x0u);
    /* 0076ad85: mov dword ptr [edx + 0xf44], eax */ W32((u32)(r_edx+0xf44u), r_eax);
    /* 0076ad8b: mov dword ptr [edx + 0xf54], eax */ W32((u32)(r_edx+0xf54u), r_eax);
    /* 0076ad91: add ecx, 0xf58 */ {  u32 a = r_ecx; u32 b = 0xf58u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0076ad97: mov dword ptr [edx + 0xf50], 0 */ W32((u32)(r_edx+0xf50u), 0x0u);
    /* 0076ada1: call 0x57739c */ r_esp -= 4; W32(r_esp, 0x76ada6u); f_0057739c();
    /* 0076ada6: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0076ada9: mov dword ptr [ecx + 0xf88], 0 */ W32((u32)(r_ecx+0xf88u), 0x0u);
    /* 0076adb3: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0076adb8: mov dword ptr [ecx + 0xf78], edx */ W32((u32)(r_ecx+0xf78u), r_edx);
    /* 0076adbe: mov dword ptr [ecx + 0xf8c], 0 */ W32((u32)(r_ecx+0xf8cu), 0x0u);
    /* 0076adc8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0076adc9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0076adcb: mov dword ptr [ecx + 0xf7c], eax */ W32((u32)(r_ecx+0xf7cu), r_eax);
    /* 0076add1: mov dword ptr [ecx + 0xf80], eax */ W32((u32)(r_ecx+0xf80u), r_eax);
    /* 0076add7: mov dword ptr [ecx + 0xf84], eax */ W32((u32)(r_ecx+0xf84u), r_eax);
    /* 0076addd: mov dword ptr [ecx + 0xf90], eax */ W32((u32)(r_ecx+0xf90u), r_eax);
    /* 0076ade3: mov dword ptr [ecx + 0xf98], eax */ W32((u32)(r_ecx+0xf98u), r_eax);
    /* 0076ade9: mov dword ptr [ecx + 0xf9c], eax */ W32((u32)(r_ecx+0xf9cu), r_eax);
    /* 0076adef: mov dword ptr [ecx + 0xf94], edx */ W32((u32)(r_ecx+0xf94u), r_edx);
    /* 0076adf5: call 0x76bf88 */ r_esp -= 4; W32(r_esp, 0x76adfau); f_0076bf88();
    /* 0076adfa: mov ebx, dword ptr [ebp - 0x30] */ r_ebx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0076adfd: mov eax, dword ptr [0x9f766c] */ r_eax = R32((u32)(0x9f766cu));
    /* 0076ae02: mov ecx, dword ptr [ebx + 0xf74] */ r_ecx = R32((u32)(r_ebx+0xf74u));
    /* 0076ae08: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0076ae0d: mov word ptr [ebx + 0xfa4], dx */ W16((u32)(r_ebx+0xfa4u), (u16)r_edx);
    /* 0076ae14: mov dword ptr [ebx + 0xfa8], eax */ W32((u32)(r_ebx+0xfa8u), r_eax);
    /* 0076ae1a: mov dword ptr [ebx + 0x37c], edx */ W32((u32)(r_ebx+0x37cu), r_edx);
    /* 0076ae20: mov word ptr [ebx + 0x32e], dx */ W16((u32)(r_ebx+0x32eu), (u16)r_edx);
    /* 0076ae27: test ecx, 0x4000 */ {  u32 a = r_ecx; u32 b = 0x4000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076ae2d: je 0x76ae36 */ if (fZ) goto L_0076ae36;
L_0076ae2f:; BB(0x0076ae2f);
    /* 0076ae2f: mov eax, 1 */ r_eax = 0x1u;
    /* 0076ae34: jmp 0x76ae38 */ goto L_0076ae38;
L_0076ae36:; BB(0x0076ae36);
    /* 0076ae36: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0076ae38:; BB(0x0076ae38);
    /* 0076ae38: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076ae3a: jne 0x76aeab */ if (!fZ) goto L_0076aeab;
L_0076ae3c:; BB(0x0076ae3c);
    /* 0076ae3c: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0076ae3e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0076ae40: call 0x76bf88 */ r_esp -= 4; W32(r_esp, 0x76ae45u); f_0076bf88();
    /* 0076ae45: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0076ae48: movsx edx, word ptr [eax + 0x32e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x32eu));
    /* 0076ae4f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0076ae51: je 0x76af14 */ if (fZ) goto L_0076af14;
L_0076ae57:; BB(0x0076ae57);
    /* 0076ae57: mov edx, dword ptr [eax + 0xf74] */ r_edx = R32((u32)(r_eax+0xf74u));
    /* 0076ae5d: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0076ae60: je 0x76ae69 */ if (fZ) goto L_0076ae69;
L_0076ae62:; BB(0x0076ae62);
    /* 0076ae62: mov edx, 1 */ r_edx = 0x1u;
    /* 0076ae67: jmp 0x76ae6b */ goto L_0076ae6b;
L_0076ae69:; BB(0x0076ae69);
    /* 0076ae69: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_0076ae6b:; BB(0x0076ae6b);
    /* 0076ae6b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0076ae6d: jne 0x76af14 */ if (!fZ) goto L_0076af14;
L_0076ae73:; BB(0x0076ae73);
    /* 0076ae73: mov ecx, eax */ r_ecx = r_eax;
    /* 0076ae75: call 0x76af64 */ r_esp -= 4; W32(r_esp, 0x76ae7au); f_0076af64();
    /* 0076ae7a: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0076ae7d: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0076ae7f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0076ae81: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 0076ae88: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076ae89: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x76ae8fu); call_ind(t); }
    /* 0076ae8f: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0076ae92: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0076ae94: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0076ae96: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0076ae98: mov word ptr [ecx + 0x32e], ax */ W16((u32)(r_ecx+0x32eu), (u16)r_eax);
    /* 0076ae9f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076aea0: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x76aea6u); call_ind(t); }
    /* 0076aea6: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0076aea9: jmp 0x76af14 */ goto L_0076af14;
L_0076aeab:; BB(0x0076aeab);
    /* 0076aeab: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0076aead: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0076aeaf: call 0x76bf88 */ r_esp -= 4; W32(r_esp, 0x76aeb4u); f_0076bf88();
    /* 0076aeb4: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0076aeb7: movsx edx, word ptr [eax + 0x32e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x32eu));
    /* 0076aebe: cmp edx, 0x1e */ {  u32 a = r_edx; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0076aec1: je 0x76af14 */ if (fZ) goto L_0076af14;
L_0076aec3:; BB(0x0076aec3);
    /* 0076aec3: mov edx, dword ptr [eax + 0xf74] */ r_edx = R32((u32)(r_eax+0xf74u));
    /* 0076aec9: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0076aecc: je 0x76aed5 */ if (fZ) goto L_0076aed5;
L_0076aece:; BB(0x0076aece);
    /* 0076aece: mov edx, 1 */ r_edx = 0x1u;
    /* 0076aed3: jmp 0x76aed7 */ goto L_0076aed7;
L_0076aed5:; BB(0x0076aed5);
    /* 0076aed5: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_0076aed7:; BB(0x0076aed7);
    /* 0076aed7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0076aed9: jne 0x76af14 */ if (!fZ) goto L_0076af14;
L_0076aedb:; BB(0x0076aedb);
    /* 0076aedb: mov ecx, eax */ r_ecx = r_eax;
    /* 0076aedd: call 0x76af64 */ r_esp -= 4; W32(r_esp, 0x76aee2u); f_0076af64();
    /* 0076aee2: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0076aee5: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0076aee7: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0076aee9: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 0076aef0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076aef1: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x76aef7u); call_ind(t); }
    /* 0076aef7: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0076aefa: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0076aefc: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0076aefe: mov eax, 0x1e */ r_eax = 0x1eu;
    /* 0076af03: mov word ptr [ecx + 0x32e], ax */ W16((u32)(r_ecx+0x32eu), (u16)r_eax);
    /* 0076af0a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076af0b: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x76af11u); call_ind(t); }
    /* 0076af11: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
L_0076af14:; BB(0x0076af14);
    /* 0076af14: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 0076af17: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 0076af1a: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0076af1d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0076af20: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0076af27: mov esp, ebp */ r_esp = r_ebp;
    /* 0076af29: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0076af2a: ret 8 */ FN_RET(0x0076a8e8); r_esp += 12; return;
L_0076af2d:; BB(0x0076af2d);
    /* 0076af2d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0076af2f: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0076af32: jmp 0x76ab8a */ goto L_0076ab8a;
L_0076af37:; BB(0x0076af37);
    /* 0076af37: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0076af39: jmp 0x76ab0a */ goto L_0076ab0a;
L_0076af3e:; BB(0x0076af3e);
    /* 0076af3e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0076af40: jmp 0x76aabd */ goto L_0076aabd;
L_0076af45:; BB(0x0076af45);
    /* 0076af45: movzx edx, word ptr [eax + 8] */ r_edx = (u32)R16((u32)(r_eax+0x8u));
    /* 0076af49: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0076af4f: mov word ptr [eax + 8], dx */ W16((u32)(r_eax+0x8u), (u16)r_edx);
    /* 0076af53: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0076af56: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0076af5d: mov esp, ebp */ r_esp = r_ebp;
    /* 0076af5f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0076af60: ret 8 */ FN_RET(0x0076a8e8); r_esp += 12; return;
}

void f_0076af64(void) /* sub_76AF64 */
{
    FN_ENTER(0x0076af64);
    /* 0076af64: mov ecx, dword ptr [ecx + 0x3c8] */ r_ecx = R32((u32)(r_ecx+0x3c8u));
    /* 0076af6a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0076af6c: je 0x76af73 */ if (fZ) goto L_0076af73;
L_0076af6e:; BB(0x0076af6e);
    /* 0076af6e: call 0x8172ac */ r_esp -= 4; W32(r_esp, 0x76af73u); f_008172ac();
L_0076af73:; BB(0x0076af73);
    /* 0076af73: ret  */ FN_RET(0x0076af64); r_esp += 4; return;
}

void f_0076af74(void) /* sub_76AF74 */
{
    FN_ENTER(0x0076af74);
    /* 0076af74: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0076af75: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0076af76: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0076af77: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0076af78: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0076af7a: mov eax, dword ptr [ebx + 0x2e8] */ r_eax = R32((u32)(r_ebx+0x2e8u));
    /* 0076af80: or eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0076af83: mov ebp, dword ptr [0xa9b078] */ r_ebp = R32((u32)(0xa9b078u));
    /* 0076af89: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0076af8b: lea edx, [ebp + ebp] */ r_edx = (u32)(r_ebp+r_ebp);
    /* 0076af8f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0076af91: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0076af93: mov dword ptr [ebx + 0x2e8], eax */ W32((u32)(r_ebx+0x2e8u), r_eax);
    /* 0076af99: push dword ptr [edx + 0x9f75c4] */ { u32 v = R32((u32)(r_edx+0x9f75c4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0076af9f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0076afa1: call 0x787550 */ r_esp -= 4; W32(r_esp, 0x76afa6u); f_00787550();
    /* 0076afa6: push dword ptr [ebp*8 + 0x9f75c8] */ { u32 v = R32((u32)(r_ebp*8+0x9f75c8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0076afad: mov ecx, dword ptr [0xa9b06c] */ r_ecx = R32((u32)(0xa9b06cu));
    /* 0076afb3: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x76afb8u); f_005b8610();
    /* 0076afb8: mov ecx, dword ptr [0xa9b06c] */ r_ecx = R32((u32)(0xa9b06cu));
    /* 0076afbe: mov dword ptr [ebx + 0x34], eax */ W32((u32)(r_ebx+0x34u), r_eax);
    /* 0076afc1: push dword ptr [ebp*8 + 0x9f75c8] */ { u32 v = R32((u32)(r_ebp*8+0x9f75c8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0076afc8: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x76afcdu); f_005b8624();
    /* 0076afcd: mov edi, dword ptr [0xa9b078] */ r_edi = R32((u32)(0xa9b078u));
    /* 0076afd3: mov dword ptr [ebx + 0x24], eax */ W32((u32)(r_ebx+0x24u), r_eax);
    /* 0076afd6: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0076afd8: lea eax, [edi + edi] */ r_eax = (u32)(r_edi+r_edi);
    /* 0076afdb: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0076afdd: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0076afdf: push dword ptr [eax + 0x9f75cc] */ { u32 v = R32((u32)(r_eax+0x9f75ccu)); r_esp -= 4; W32(r_esp, v); }
    /* 0076afe5: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x76afeau); f_0077a684();
    /* 0076afea: mov esi, eax */ r_esi = r_eax;
    /* 0076afec: push dword ptr [edi*8 + 0x9f75cc] */ { u32 v = R32((u32)(r_edi*8+0x9f75ccu)); r_esp -= 4; W32(r_esp, v); }
    /* 0076aff3: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x76aff8u); f_0077a698();
    /* 0076aff8: mov ebp, eax */ r_ebp = r_eax;
    /* 0076affa: push dword ptr [edi*8 + 0x9f75cc] */ { u32 v = R32((u32)(r_edi*8+0x9f75ccu)); r_esp -= 4; W32(r_esp, v); }
    /* 0076b001: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x76b006u); f_0077a6b4();
    /* 0076b006: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0076b009: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076b00a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0076b00b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0076b00d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0076b00e: call 0x7868f8 */ r_esp -= 4; W32(r_esp, 0x76b013u); f_007868f8();
    /* 0076b013: push dword ptr [edi*8 + 0x9f75cc] */ { u32 v = R32((u32)(r_edi*8+0x9f75ccu)); r_esp -= 4; W32(r_esp, v); }
    /* 0076b01a: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x76b01fu); f_0077a6cc();
    /* 0076b01f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0076b020: mov dword ptr [ebx + 0x3d0], eax */ W32((u32)(r_ebx+0x3d0u), r_eax);
    /* 0076b026: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0076b028: call 0x76c038 */ r_esp -= 4; W32(r_esp, 0x76b02du); f_0076c038();
    /* 0076b02d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0076b02e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0076b02f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0076b030: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0076b031: ret  */ FN_RET(0x0076af74); r_esp += 4; return;
}

