#include "protos.h"

void f_007b62a0(void) /* sub_7B62A0 */
{
    FN_ENTER(0x007b62a0);
    /* 007b62a0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007b62a1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007b62a2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007b62a3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007b62a4: sub esp, 0x68 */ {  u32 a = r_esp; u32 b = 0x68u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007b62a7: mov esi, dword ptr [esp + 0x7c] */ r_esi = R32((u32)(r_esp+0x7cu));
    /* 007b62ab: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b62ad: mov ebx, dword ptr [esp + 0x80] */ r_ebx = R32((u32)(r_esp+0x80u));
    /* 007b62b4: je 0x7b646f */ if (fZ) goto L_007b646f;
L_007b62ba:; BB(0x007b62ba);
    /* 007b62ba: mov ecx, dword ptr [esi + 0xa4] */ r_ecx = R32((u32)(r_esi+0xa4u));
    /* 007b62c0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b62c2: je 0x7b646f */ if (fZ) goto L_007b646f;
L_007b62c8:; BB(0x007b62c8);
    /* 007b62c8: mov ebp, dword ptr [0xaae168] */ r_ebp = R32((u32)(0xaae168u));
    /* 007b62ce: mov eax, dword ptr [esi + 0xa8] */ r_eax = R32((u32)(r_esi+0xa8u));
    /* 007b62d4: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 007b62d6: mov edi, dword ptr [ebx + 8] */ r_edi = R32((u32)(r_ebx+0x8u));
    /* 007b62d9: mov dword ptr [esp + 0x60], eax */ W32((u32)(r_esp+0x60u), r_eax);
    /* 007b62dd: mov eax, dword ptr [0xaae16c] */ r_eax = R32((u32)(0xaae16cu));
    /* 007b62e2: mov dword ptr [esp + 0x64], edx */ W32((u32)(r_esp+0x64u), r_edx);
    /* 007b62e6: mov edx, dword ptr [ebx + 4] */ r_edx = R32((u32)(r_ebx+0x4u));
    /* 007b62e9: mov ebx, dword ptr [esi + 0x60] */ r_ebx = R32((u32)(r_esi+0x60u));
    /* 007b62ec: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007b62ee: jge 0x7b646f */ if ((fS==fO)) goto L_007b646f;
L_007b62f4:; BB(0x007b62f4);
    /* 007b62f4: mov dword ptr [esp + 0x44], ebx */ W32((u32)(r_esp+0x44u), r_ebx);
    /* 007b62f8: mov ebx, dword ptr [esp + 0x60] */ r_ebx = R32((u32)(r_esp+0x60u));
    /* 007b62fc: mov dword ptr [esp + 0x40], edi */ W32((u32)(r_esp+0x40u), r_edi);
    /* 007b6300: mov dword ptr [esp + 0x3c], edx */ W32((u32)(r_esp+0x3cu), r_edx);
    /* 007b6304: mov edx, dword ptr [esp + 0x64] */ r_edx = R32((u32)(r_esp+0x64u));
    /* 007b6308: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
    /* 007b630c: mov dword ptr [esp + 0x34], ebx */ W32((u32)(r_esp+0x34u), r_ebx);
    /* 007b6310: mov dword ptr [esp + 0x30], ecx */ W32((u32)(r_esp+0x30u), r_ecx);
L_007b6314:; BB(0x007b6314);
    /* 007b6314: mov ebx, dword ptr [ebp*4 + 0xaad720] */ r_ebx = R32((u32)(r_ebp*4+0xaad720u));
    /* 007b631b: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b631d: je 0x7b6464 */ if (fZ) goto L_007b6464;
L_007b6323:; BB(0x007b6323);
    /* 007b6323: cmp ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b6325: je 0x7b6464 */ if (fZ) goto L_007b6464;
L_007b632b:; BB(0x007b632b);
    /* 007b632b: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 007b632e: test edx, 0x80000800 */ {  u32 a = r_edx; u32 b = 0x80000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b6334: jne 0x7b6464 */ if (!fZ) goto L_007b6464;
L_007b633a:; BB(0x007b633a);
    /* 007b633a: mov edx, dword ptr [ebx + 0xa4] */ r_edx = R32((u32)(r_ebx+0xa4u));
    /* 007b6340: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b6342: je 0x7b6464 */ if (fZ) goto L_007b6464;
L_007b6348:; BB(0x007b6348);
    /* 007b6348: lea edx, [esi + 0x38] */ r_edx = (u32)(r_esi+0x38u);
    /* 007b634b: lea eax, [ebx + 0x38] */ r_eax = (u32)(r_ebx+0x38u);
    /* 007b634e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007b634f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007b6350: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x7b6355u); f_007a9180();
    /* 007b6355: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007b6358: fcomp dword ptr [0x97e3bc] */ fx_compare(ST(0), R_F32((u32)(0x97e3bcu))); FPOP();
    /* 007b635e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007b6360: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007b6361: jb 0x7b636d */ if (fC) goto L_007b636d;
L_007b6363:; BB(0x007b6363);
    /* 007b6363: mov eax, dword ptr [0xaae16c] */ r_eax = R32((u32)(0xaae16cu));
    /* 007b6368: jmp 0x7b6464 */ goto L_007b6464;
L_007b636d:; BB(0x007b636d);
    /* 007b636d: mov edx, dword ptr [ebx + 0xa4] */ r_edx = R32((u32)(r_ebx+0xa4u));
    /* 007b6373: mov ecx, dword ptr [ebx + 0xa8] */ r_ecx = R32((u32)(r_ebx+0xa8u));
    /* 007b6379: mov edi, dword ptr [ebx + 0x38] */ r_edi = R32((u32)(r_ebx+0x38u));
    /* 007b637c: mov dword ptr [esp + 0x48], edx */ W32((u32)(r_esp+0x48u), r_edx);
    /* 007b6380: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 007b6383: mov dword ptr [esp + 0x4c], ecx */ W32((u32)(r_esp+0x4cu), r_ecx);
    /* 007b6387: mov eax, esp */ r_eax = r_esp;
    /* 007b6389: mov dword ptr [esp + 0x50], edi */ W32((u32)(r_esp+0x50u), r_edi);
    /* 007b638d: mov dword ptr [esp + 0x54], edx */ W32((u32)(r_esp+0x54u), r_edx);
    /* 007b6391: mov edx, dword ptr [ebx + 0x40] */ r_edx = R32((u32)(r_ebx+0x40u));
    /* 007b6394: mov dword ptr [esp + 0x58], edx */ W32((u32)(r_esp+0x58u), r_edx);
    /* 007b6398: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 007b639b: mov dword ptr [esp + 0x5c], edx */ W32((u32)(r_esp+0x5cu), r_edx);
    /* 007b639f: lea ebx, [esp + 0x18] */ r_ebx = (u32)(r_esp+0x18u);
    /* 007b63a3: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 007b63a7: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 007b63a9: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 007b63ad: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 007b63b0: mov edx, dword ptr [esp + 0x38] */ r_edx = R32((u32)(r_esp+0x38u));
    /* 007b63b4: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 007b63b7: mov edx, dword ptr [esp + 0x3c] */ r_edx = R32((u32)(r_esp+0x3cu));
    /* 007b63bb: mov dword ptr [eax + 0xc], edx */ W32((u32)(r_eax+0xcu), r_edx);
    /* 007b63be: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 007b63c2: mov dword ptr [eax + 0x10], edx */ W32((u32)(r_eax+0x10u), r_edx);
    /* 007b63c5: mov edx, dword ptr [esp + 0x44] */ r_edx = R32((u32)(r_esp+0x44u));
    /* 007b63c9: mov dword ptr [eax + 0x14], edx */ W32((u32)(r_eax+0x14u), r_edx);
    /* 007b63cc: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 007b63d0: mov dword ptr [ebx], eax */ W32((u32)(r_ebx), r_eax);
    /* 007b63d2: mov eax, dword ptr [esp + 0x4c] */ r_eax = R32((u32)(r_esp+0x4cu));
    /* 007b63d6: mov dword ptr [ebx + 4], eax */ W32((u32)(r_ebx+0x4u), r_eax);
    /* 007b63d9: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 007b63dd: mov dword ptr [ebx + 8], eax */ W32((u32)(r_ebx+0x8u), r_eax);
    /* 007b63e0: mov eax, dword ptr [esp + 0x54] */ r_eax = R32((u32)(r_esp+0x54u));
    /* 007b63e4: mov dword ptr [ebx + 0xc], eax */ W32((u32)(r_ebx+0xcu), r_eax);
    /* 007b63e7: mov eax, dword ptr [esp + 0x58] */ r_eax = R32((u32)(r_esp+0x58u));
    /* 007b63eb: mov dword ptr [ebx + 0x10], eax */ W32((u32)(r_ebx+0x10u), r_eax);
    /* 007b63ee: mov eax, dword ptr [esp + 0x5c] */ r_eax = R32((u32)(r_esp+0x5cu));
    /* 007b63f2: mov dword ptr [ebx + 0x14], eax */ W32((u32)(r_ebx+0x14u), r_eax);
    /* 007b63f5: call 0x7b5318 */ r_esp -= 4; W32(r_esp, 0x7b63fau); f_007b5318();
    /* 007b63fa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b63fc: je 0x7b645f */ if (fZ) goto L_007b645f;
L_007b63fe:; BB(0x007b63fe);
    /* 007b63fe: mov edx, dword ptr [esp + 0x84] */ r_edx = R32((u32)(r_esp+0x84u));
    /* 007b6405: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b6407: je 0x7b6450 */ if (fZ) goto L_007b6450;
L_007b6409:; BB(0x007b6409);
    /* 007b6409: mov edx, dword ptr [esp + 0x84] */ r_edx = R32((u32)(r_esp+0x84u));
    /* 007b6410: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 007b6412: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 007b6414: mov ebx, dword ptr [eax + 4] */ r_ebx = R32((u32)(r_eax+0x4u));
    /* 007b6417: mov dword ptr [edx + 4], ebx */ W32((u32)(r_edx+0x4u), r_ebx);
    /* 007b641a: mov ebp, dword ptr [eax + 8] */ r_ebp = R32((u32)(r_eax+0x8u));
    /* 007b641d: mov dword ptr [edx + 8], ebp */ W32((u32)(r_edx+0x8u), r_ebp);
    /* 007b6420: mov esi, dword ptr [eax + 0xc] */ r_esi = R32((u32)(r_eax+0xcu));
    /* 007b6423: mov dword ptr [edx + 0xc], esi */ W32((u32)(r_edx+0xcu), r_esi);
    /* 007b6426: mov edi, dword ptr [eax + 0x10] */ r_edi = R32((u32)(r_eax+0x10u));
    /* 007b6429: mov dword ptr [edx + 0x10], edi */ W32((u32)(r_edx+0x10u), r_edi);
    /* 007b642c: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 007b642f: mov dword ptr [edx + 0x14], ecx */ W32((u32)(r_edx+0x14u), r_ecx);
    /* 007b6432: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 007b6435: mov dword ptr [edx + 0x18], ecx */ W32((u32)(r_edx+0x18u), r_ecx);
    /* 007b6438: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 007b643b: mov dword ptr [edx + 0x1c], ecx */ W32((u32)(r_edx+0x1cu), r_ecx);
    /* 007b643e: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 007b6441: mov dword ptr [edx + 0x20], ecx */ W32((u32)(r_edx+0x20u), r_ecx);
    /* 007b6444: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 007b6447: mov dword ptr [edx + 0x24], ecx */ W32((u32)(r_edx+0x24u), r_ecx);
    /* 007b644a: mov eax, dword ptr [eax + 0x28] */ r_eax = R32((u32)(r_eax+0x28u));
    /* 007b644d: mov dword ptr [edx + 0x28], eax */ W32((u32)(r_edx+0x28u), r_eax);
L_007b6450:; BB(0x007b6450);
    /* 007b6450: mov eax, 1 */ r_eax = 0x1u;
    /* 007b6455: add esp, 0x68 */ {  u32 a = r_esp; u32 b = 0x68u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007b6458: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007b6459: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007b645a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007b645b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007b645c: ret 0xc */ FN_RET(0x007b62a0); r_esp += 16; return;
L_007b645f:; BB(0x007b645f);
    /* 007b645f: mov eax, dword ptr [0xaae16c] */ r_eax = R32((u32)(0xaae16cu));
L_007b6464:; BB(0x007b6464);
    /* 007b6464: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007b6467: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007b6469: jl 0x7b6314 */ if ((fS!=fO)) goto L_007b6314;
L_007b646f:; BB(0x007b646f);
    /* 007b646f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007b6471: add esp, 0x68 */ {  u32 a = r_esp; u32 b = 0x68u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007b6474: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007b6475: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007b6476: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007b6477: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007b6478: ret 0xc */ FN_RET(0x007b62a0); r_esp += 16; return;
}

void f_007b647c(void) /* sub_7B647C */
{
    FN_ENTER(0x007b647c);
    /* 007b647c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007b647d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007b647e: sub esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007b6481: mov ebx, ecx */ r_ebx = r_ecx;
    /* 007b6483: mov ebp, dword ptr [esp + 0x74] */ r_ebp = R32((u32)(r_esp+0x74u));
    /* 007b6487: fld dword ptr [esp + 0x78] */ FPUSH(R_F32((u32)(r_esp+0x78u)));
    /* 007b648b: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 007b648d: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 007b6491: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b6493: je 0x7b64ab */ if (fZ) goto L_007b64ab;
L_007b6495:; BB(0x007b6495);
    /* 007b6495: mov eax, dword ptr [ebx + 0xa4] */ r_eax = R32((u32)(r_ebx+0xa4u));
    /* 007b649b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b649d: je 0x7b64ab */ if (fZ) goto L_007b64ab;
L_007b649f:; BB(0x007b649f);
    /* 007b649f: mov eax, dword ptr [esp + 0x70] */ r_eax = R32((u32)(r_esp+0x70u));
    /* 007b64a3: cmp eax, dword ptr [ebx + 0xa8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0xa8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007b64a9: jl 0x7b64b5 */ if ((fS!=fO)) goto L_007b64b5;
L_007b64ab:; BB(0x007b64ab);
    /* 007b64ab: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007b64ad: add esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007b64b0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007b64b1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007b64b2: ret 0xc */ FN_RET(0x007b647c); r_esp += 16; return;
L_007b64b5:; BB(0x007b64b5);
    /* 007b64b5: lea edx, [ebx + 0x38] */ r_edx = (u32)(r_ebx+0x38u);
    /* 007b64b8: lea eax, [ebp + 0x38] */ r_eax = (u32)(r_ebp+0x38u);
    /* 007b64bb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007b64bc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007b64bd: call 0x78ea6c */ r_esp -= 4; W32(r_esp, 0x7b64c2u); f_0078ea6c();
    /* 007b64c2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007b64c5: fcomp dword ptr [esp + 0x60] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x60u))); FPOP();
    /* 007b64c9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007b64cb: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007b64cc: jae 0x7b64ab */ if (!fC) goto L_007b64ab;
L_007b64ce:; BB(0x007b64ce);
    /* 007b64ce: mov edx, dword ptr [esp + 0x70] */ r_edx = R32((u32)(r_esp+0x70u));
    /* 007b64d2: mov dword ptr [esp + 0x34], 1 */ W32((u32)(r_esp+0x34u), 0x1u);
    /* 007b64da: mov eax, esp */ r_eax = r_esp;
    /* 007b64dc: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 007b64df: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007b64e1: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 007b64e3: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007b64e5: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007b64e7: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 007b64e9: mov edx, dword ptr [ebx + 0x38] */ r_edx = R32((u32)(r_ebx+0x38u));
    /* 007b64ec: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
    /* 007b64f0: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 007b64f3: mov dword ptr [esp + 0x3c], edx */ W32((u32)(r_esp+0x3cu), r_edx);
    /* 007b64f7: mov edx, dword ptr [ebx + 0x40] */ r_edx = R32((u32)(r_ebx+0x40u));
    /* 007b64fa: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
    /* 007b64fe: mov edx, dword ptr [ebp + 0xa4] */ r_edx = R32((u32)(r_ebp+0xa4u));
    /* 007b6504: mov dword ptr [esp + 0x48], edx */ W32((u32)(r_esp+0x48u), r_edx);
    /* 007b6508: mov edx, dword ptr [ebp + 0xa8] */ r_edx = R32((u32)(r_ebp+0xa8u));
    /* 007b650e: mov dword ptr [esp + 0x4c], edx */ W32((u32)(r_esp+0x4cu), r_edx);
    /* 007b6512: mov edx, dword ptr [ebp + 0x38] */ r_edx = R32((u32)(r_ebp+0x38u));
    /* 007b6515: mov dword ptr [esp + 0x50], edx */ W32((u32)(r_esp+0x50u), r_edx);
    /* 007b6519: mov edx, dword ptr [ebp + 0x3c] */ r_edx = R32((u32)(r_ebp+0x3cu));
    /* 007b651c: mov dword ptr [esp + 0x54], edx */ W32((u32)(r_esp+0x54u), r_edx);
    /* 007b6520: mov edx, dword ptr [ebp + 0x40] */ r_edx = R32((u32)(r_ebp+0x40u));
    /* 007b6523: mov dword ptr [esp + 0x58], edx */ W32((u32)(r_esp+0x58u), r_edx);
    /* 007b6527: mov edx, dword ptr [ebp + 0x60] */ r_edx = R32((u32)(r_ebp+0x60u));
    /* 007b652a: mov dword ptr [esp + 0x5c], edx */ W32((u32)(r_esp+0x5cu), r_edx);
    /* 007b652e: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007b6530: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007b6532: add ecx, dword ptr [ebx + 0xa4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebx+0xa4u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007b6538: mov ebx, dword ptr [ebx + 0x60] */ r_ebx = R32((u32)(r_ebx+0x60u));
    /* 007b653b: mov dword ptr [esp + 0x30], ecx */ W32((u32)(r_esp+0x30u), r_ecx);
    /* 007b653f: mov dword ptr [esp + 0x44], ebx */ W32((u32)(r_esp+0x44u), r_ebx);
    /* 007b6543: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 007b6547: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 007b6549: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 007b654d: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 007b6550: mov edx, dword ptr [esp + 0x38] */ r_edx = R32((u32)(r_esp+0x38u));
    /* 007b6554: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 007b6557: lea ebp, [esp + 0x18] */ r_ebp = (u32)(r_esp+0x18u);
    /* 007b655b: mov edx, dword ptr [esp + 0x3c] */ r_edx = R32((u32)(r_esp+0x3cu));
    /* 007b655f: mov dword ptr [eax + 0xc], edx */ W32((u32)(r_eax+0xcu), r_edx);
    /* 007b6562: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 007b6566: mov dword ptr [eax + 0x10], edx */ W32((u32)(r_eax+0x10u), r_edx);
    /* 007b6569: mov edx, dword ptr [esp + 0x44] */ r_edx = R32((u32)(r_esp+0x44u));
    /* 007b656d: mov dword ptr [eax + 0x14], edx */ W32((u32)(r_eax+0x14u), r_edx);
    /* 007b6570: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 007b6574: mov dword ptr [ebp], eax */ W32((u32)(r_ebp), r_eax);
    /* 007b6577: mov eax, dword ptr [esp + 0x4c] */ r_eax = R32((u32)(r_esp+0x4cu));
    /* 007b657b: mov dword ptr [ebp + 4], eax */ W32((u32)(r_ebp+0x4u), r_eax);
    /* 007b657e: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 007b6582: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 007b6585: mov eax, dword ptr [esp + 0x54] */ r_eax = R32((u32)(r_esp+0x54u));
    /* 007b6589: mov dword ptr [ebp + 0xc], eax */ W32((u32)(r_ebp+0xcu), r_eax);
    /* 007b658c: mov eax, dword ptr [esp + 0x58] */ r_eax = R32((u32)(r_esp+0x58u));
    /* 007b6590: mov dword ptr [ebp + 0x10], eax */ W32((u32)(r_ebp+0x10u), r_eax);
    /* 007b6593: mov eax, dword ptr [esp + 0x5c] */ r_eax = R32((u32)(r_esp+0x5cu));
    /* 007b6597: mov dword ptr [ebp + 0x14], eax */ W32((u32)(r_ebp+0x14u), r_eax);
    /* 007b659a: call 0x7b5318 */ r_esp -= 4; W32(r_esp, 0x7b659fu); f_007b5318();
    /* 007b659f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b65a1: je 0x7b64ab */ if (fZ) goto L_007b64ab;
L_007b65a7:; BB(0x007b65a7);
    /* 007b65a7: mov eax, 1 */ r_eax = 0x1u;
    /* 007b65ac: add esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007b65af: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007b65b0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007b65b1: ret 0xc */ FN_RET(0x007b647c); r_esp += 16; return;
}

void f_007b65b4(void) /* sub_7B65B4 */
{
    FN_ENTER(0x007b65b4);
    /* 007b65b4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007b65b5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007b65b6: sub esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007b65b9: mov ebp, ecx */ r_ebp = r_ecx;
    /* 007b65bb: mov edi, dword ptr [esp + 0x6c] */ r_edi = R32((u32)(r_esp+0x6cu));
    /* 007b65bf: cmp edi, ebp */ {  u32 a = r_edi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b65c1: je 0x7b6865 */ if (fZ) goto L_007b6865;
L_007b65c7:; BB(0x007b65c7);
    /* 007b65c7: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b65c9: je 0x7b6865 */ if (fZ) goto L_007b6865;
L_007b65cf:; BB(0x007b65cf);
    /* 007b65cf: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 007b65d2: test eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b65d7: jne 0x7b6865 */ if (!fZ) goto L_007b6865;
L_007b65dd:; BB(0x007b65dd);
    /* 007b65dd: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 007b65e0: test eax, 0x80000800 */ {  u32 a = r_eax; u32 b = 0x80000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b65e5: jne 0x7b6865 */ if (!fZ) goto L_007b6865;
L_007b65eb:; BB(0x007b65eb);
    /* 007b65eb: lea edx, [ebp + 0x38] */ r_edx = (u32)(r_ebp+0x38u);
    /* 007b65ee: lea eax, [edi + 0x38] */ r_eax = (u32)(r_edi+0x38u);
    /* 007b65f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007b65f2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007b65f3: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x7b65f8u); f_007a9180();
    /* 007b65f8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007b65fb: fld dword ptr [esp + 0x70] */ FPUSH(R_F32((u32)(r_esp+0x70u)));
    /* 007b65ff: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 007b6601: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007b6603: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007b6604: jb 0x7b6865 */ if (fC) goto L_007b6865;
L_007b660a:; BB(0x007b660a);
    /* 007b660a: mov ecx, dword ptr [ebp + 0xa4] */ r_ecx = R32((u32)(r_ebp+0xa4u));
    /* 007b6610: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b6612: je 0x7b6865 */ if (fZ) goto L_007b6865;
L_007b6618:; BB(0x007b6618);
    /* 007b6618: mov eax, dword ptr [edi + 0xa4] */ r_eax = R32((u32)(r_edi+0xa4u));
    /* 007b661e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b6620: je 0x7b6865 */ if (fZ) goto L_007b6865;
L_007b6626:; BB(0x007b6626);
    /* 007b6626: mov dword ptr [esp + 0x30], ecx */ W32((u32)(r_esp+0x30u), r_ecx);
    /* 007b662a: mov ecx, dword ptr [ebp + 0xa8] */ r_ecx = R32((u32)(r_ebp+0xa8u));
    /* 007b6630: mov dword ptr [esp + 0x34], ecx */ W32((u32)(r_esp+0x34u), r_ecx);
    /* 007b6634: mov ecx, dword ptr [ebp + 0x38] */ r_ecx = R32((u32)(r_ebp+0x38u));
    /* 007b6637: mov dword ptr [esp + 0x38], ecx */ W32((u32)(r_esp+0x38u), r_ecx);
    /* 007b663b: mov ecx, dword ptr [ebp + 0x3c] */ r_ecx = R32((u32)(r_ebp+0x3cu));
    /* 007b663e: mov dword ptr [esp + 0x3c], ecx */ W32((u32)(r_esp+0x3cu), r_ecx);
    /* 007b6642: mov ecx, dword ptr [ebp + 0x40] */ r_ecx = R32((u32)(r_ebp+0x40u));
    /* 007b6645: mov dword ptr [esp + 0x40], ecx */ W32((u32)(r_esp+0x40u), r_ecx);
    /* 007b6649: mov ecx, dword ptr [ebp + 0x60] */ r_ecx = R32((u32)(r_ebp+0x60u));
    /* 007b664c: mov dword ptr [esp + 0x44], ecx */ W32((u32)(r_esp+0x44u), r_ecx);
    /* 007b6650: mov edx, esp */ r_edx = r_esp;
    /* 007b6652: lea ebp, [esp + 0x18] */ r_ebp = (u32)(r_esp+0x18u);
    /* 007b6656: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 007b665a: mov eax, dword ptr [edi + 0xa8] */ r_eax = R32((u32)(r_edi+0xa8u));
    /* 007b6660: mov dword ptr [esp + 0x4c], eax */ W32((u32)(r_esp+0x4cu), r_eax);
    /* 007b6664: mov eax, dword ptr [edi + 0x38] */ r_eax = R32((u32)(r_edi+0x38u));
    /* 007b6667: mov dword ptr [esp + 0x50], eax */ W32((u32)(r_esp+0x50u), r_eax);
    /* 007b666b: mov eax, dword ptr [edi + 0x3c] */ r_eax = R32((u32)(r_edi+0x3cu));
    /* 007b666e: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
    /* 007b6672: mov eax, dword ptr [edi + 0x40] */ r_eax = R32((u32)(r_edi+0x40u));
    /* 007b6675: mov dword ptr [esp + 0x58], eax */ W32((u32)(r_esp+0x58u), r_eax);
    /* 007b6679: mov eax, dword ptr [edi + 0x60] */ r_eax = R32((u32)(r_edi+0x60u));
    /* 007b667c: mov dword ptr [esp + 0x5c], eax */ W32((u32)(r_esp+0x5cu), r_eax);
    /* 007b6680: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 007b6684: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 007b6686: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 007b668a: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 007b668d: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 007b6691: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 007b6694: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 007b6698: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 007b669b: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 007b669f: mov dword ptr [edx + 0x10], eax */ W32((u32)(r_edx+0x10u), r_eax);
    /* 007b66a2: mov eax, dword ptr [esp + 0x44] */ r_eax = R32((u32)(r_esp+0x44u));
    /* 007b66a6: mov dword ptr [edx + 0x14], eax */ W32((u32)(r_edx+0x14u), r_eax);
    /* 007b66a9: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 007b66ad: mov dword ptr [ebp], eax */ W32((u32)(r_ebp), r_eax);
    /* 007b66b0: mov eax, dword ptr [esp + 0x4c] */ r_eax = R32((u32)(r_esp+0x4cu));
    /* 007b66b4: mov dword ptr [ebp + 4], eax */ W32((u32)(r_ebp+0x4u), r_eax);
    /* 007b66b7: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 007b66bb: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 007b66be: mov eax, dword ptr [esp + 0x54] */ r_eax = R32((u32)(r_esp+0x54u));
    /* 007b66c2: mov dword ptr [ebp + 0xc], eax */ W32((u32)(r_ebp+0xcu), r_eax);
    /* 007b66c5: mov eax, dword ptr [esp + 0x58] */ r_eax = R32((u32)(r_esp+0x58u));
    /* 007b66c9: mov dword ptr [ebp + 0x10], eax */ W32((u32)(r_ebp+0x10u), r_eax);
    /* 007b66cc: mov eax, dword ptr [esp + 0x5c] */ r_eax = R32((u32)(r_esp+0x5cu));
    /* 007b66d0: mov dword ptr [ebp + 0x14], eax */ W32((u32)(r_ebp+0x14u), r_eax);
    /* 007b66d3: call 0x7b5318 */ r_esp -= 4; W32(r_esp, 0x7b66d8u); f_007b5318();
    /* 007b66d8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b66da: je 0x7b6865 */ if (fZ) goto L_007b6865;
L_007b66e0:; BB(0x007b66e0);
    /* 007b66e0: mov ecx, dword ptr [0xaad6e0] */ r_ecx = R32((u32)(0xaad6e0u));
    /* 007b66e6: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007b66e8: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b66ea: je 0x7b685d */ if (fZ) goto L_007b685d;
L_007b66f0:; BB(0x007b66f0);
    /* 007b66f0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b66f2: je 0x7b686f */ if (fZ) goto L_007b686f;
L_007b66f8:; BB(0x007b66f8);
    /* 007b66f8: mov ecx, dword ptr [0xaad6e4] */ r_ecx = R32((u32)(0xaad6e4u));
    /* 007b66fe: mov edx, 1 */ r_edx = 0x1u;
    /* 007b6703: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b6705: je 0x7b685d */ if (fZ) goto L_007b685d;
L_007b670b:; BB(0x007b670b);
    /* 007b670b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b670d: je 0x7b686f */ if (fZ) goto L_007b686f;
L_007b6713:; BB(0x007b6713);
    /* 007b6713: mov ecx, dword ptr [0xaad6e8] */ r_ecx = R32((u32)(0xaad6e8u));
    /* 007b6719: mov edx, 2 */ r_edx = 0x2u;
    /* 007b671e: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b6720: je 0x7b685d */ if (fZ) goto L_007b685d;
L_007b6726:; BB(0x007b6726);
    /* 007b6726: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b6728: je 0x7b686f */ if (fZ) goto L_007b686f;
L_007b672e:; BB(0x007b672e);
    /* 007b672e: mov ecx, dword ptr [0xaad6ec] */ r_ecx = R32((u32)(0xaad6ecu));
    /* 007b6734: mov edx, 3 */ r_edx = 0x3u;
    /* 007b6739: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b673b: je 0x7b685d */ if (fZ) goto L_007b685d;
L_007b6741:; BB(0x007b6741);
    /* 007b6741: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b6743: je 0x7b686f */ if (fZ) goto L_007b686f;
L_007b6749:; BB(0x007b6749);
    /* 007b6749: mov ecx, dword ptr [0xaad6f0] */ r_ecx = R32((u32)(0xaad6f0u));
    /* 007b674f: mov edx, 4 */ r_edx = 0x4u;
    /* 007b6754: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b6756: je 0x7b685d */ if (fZ) goto L_007b685d;
L_007b675c:; BB(0x007b675c);
    /* 007b675c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b675e: je 0x7b686f */ if (fZ) goto L_007b686f;
L_007b6764:; BB(0x007b6764);
    /* 007b6764: mov ecx, dword ptr [0xaad6f4] */ r_ecx = R32((u32)(0xaad6f4u));
    /* 007b676a: mov edx, 5 */ r_edx = 0x5u;
    /* 007b676f: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b6771: je 0x7b685d */ if (fZ) goto L_007b685d;
L_007b6777:; BB(0x007b6777);
    /* 007b6777: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b6779: je 0x7b686f */ if (fZ) goto L_007b686f;
L_007b677f:; BB(0x007b677f);
    /* 007b677f: mov ecx, dword ptr [0xaad6f8] */ r_ecx = R32((u32)(0xaad6f8u));
    /* 007b6785: mov edx, 6 */ r_edx = 0x6u;
    /* 007b678a: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b678c: je 0x7b685d */ if (fZ) goto L_007b685d;
L_007b6792:; BB(0x007b6792);
    /* 007b6792: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b6794: je 0x7b686f */ if (fZ) goto L_007b686f;
L_007b679a:; BB(0x007b679a);
    /* 007b679a: mov ecx, dword ptr [0xaad6fc] */ r_ecx = R32((u32)(0xaad6fcu));
    /* 007b67a0: mov edx, 7 */ r_edx = 0x7u;
    /* 007b67a5: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b67a7: je 0x7b685d */ if (fZ) goto L_007b685d;
L_007b67ad:; BB(0x007b67ad);
    /* 007b67ad: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b67af: je 0x7b686f */ if (fZ) goto L_007b686f;
L_007b67b5:; BB(0x007b67b5);
    /* 007b67b5: mov ecx, dword ptr [0xaad700] */ r_ecx = R32((u32)(0xaad700u));
    /* 007b67bb: mov edx, 8 */ r_edx = 0x8u;
    /* 007b67c0: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b67c2: je 0x7b685d */ if (fZ) goto L_007b685d;
L_007b67c8:; BB(0x007b67c8);
    /* 007b67c8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b67ca: je 0x7b686f */ if (fZ) goto L_007b686f;
L_007b67d0:; BB(0x007b67d0);
    /* 007b67d0: mov ecx, dword ptr [0xaad704] */ r_ecx = R32((u32)(0xaad704u));
    /* 007b67d6: mov edx, 9 */ r_edx = 0x9u;
    /* 007b67db: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b67dd: je 0x7b685d */ if (fZ) goto L_007b685d;
L_007b67e3:; BB(0x007b67e3);
    /* 007b67e3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b67e5: je 0x7b686f */ if (fZ) goto L_007b686f;
L_007b67eb:; BB(0x007b67eb);
    /* 007b67eb: mov ecx, dword ptr [0xaad708] */ r_ecx = R32((u32)(0xaad708u));
    /* 007b67f1: mov edx, 0xa */ r_edx = 0xau;
    /* 007b67f6: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b67f8: je 0x7b685d */ if (fZ) goto L_007b685d;
L_007b67fa:; BB(0x007b67fa);
    /* 007b67fa: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b67fc: je 0x7b686f */ if (fZ) goto L_007b686f;
L_007b67fe:; BB(0x007b67fe);
    /* 007b67fe: mov ecx, dword ptr [0xaad70c] */ r_ecx = R32((u32)(0xaad70cu));
    /* 007b6804: mov edx, 0xb */ r_edx = 0xbu;
    /* 007b6809: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b680b: je 0x7b685d */ if (fZ) goto L_007b685d;
L_007b680d:; BB(0x007b680d);
    /* 007b680d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b680f: je 0x7b686f */ if (fZ) goto L_007b686f;
L_007b6811:; BB(0x007b6811);
    /* 007b6811: mov ecx, dword ptr [0xaad710] */ r_ecx = R32((u32)(0xaad710u));
    /* 007b6817: mov edx, 0xc */ r_edx = 0xcu;
    /* 007b681c: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b681e: je 0x7b685d */ if (fZ) goto L_007b685d;
L_007b6820:; BB(0x007b6820);
    /* 007b6820: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b6822: je 0x7b686f */ if (fZ) goto L_007b686f;
L_007b6824:; BB(0x007b6824);
    /* 007b6824: mov ecx, dword ptr [0xaad714] */ r_ecx = R32((u32)(0xaad714u));
    /* 007b682a: mov edx, 0xd */ r_edx = 0xdu;
    /* 007b682f: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b6831: je 0x7b685d */ if (fZ) goto L_007b685d;
L_007b6833:; BB(0x007b6833);
    /* 007b6833: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b6835: je 0x7b686f */ if (fZ) goto L_007b686f;
L_007b6837:; BB(0x007b6837);
    /* 007b6837: mov ecx, dword ptr [0xaad718] */ r_ecx = R32((u32)(0xaad718u));
    /* 007b683d: mov edx, 0xe */ r_edx = 0xeu;
    /* 007b6842: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b6844: je 0x7b685d */ if (fZ) goto L_007b685d;
L_007b6846:; BB(0x007b6846);
    /* 007b6846: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b6848: je 0x7b686f */ if (fZ) goto L_007b686f;
L_007b684a:; BB(0x007b684a);
    /* 007b684a: mov ecx, dword ptr [0xaad71c] */ r_ecx = R32((u32)(0xaad71cu));
    /* 007b6850: mov edx, 0xf */ r_edx = 0xfu;
    /* 007b6855: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b6857: je 0x7b685d */ if (fZ) goto L_007b685d;
L_007b6859:; BB(0x007b6859);
    /* 007b6859: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b685b: je 0x7b686f */ if (fZ) goto L_007b686f;
L_007b685d:; BB(0x007b685d);
    /* 007b685d: add esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007b6860: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007b6861: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007b6862: ret 8 */ FN_RET(0x007b65b4); r_esp += 12; return;
L_007b6865:; BB(0x007b6865);
    /* 007b6865: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007b6867: add esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007b686a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007b686b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007b686c: ret 8 */ FN_RET(0x007b65b4); r_esp += 12; return;
L_007b686f:; BB(0x007b686f);
    /* 007b686f: mov dword ptr [edx*4 + 0xaad6e0], edi */ W32((u32)(r_edx*4+0xaad6e0u), r_edi);
    /* 007b6876: add esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007b6879: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007b687a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007b687b: ret 8 */ FN_RET(0x007b65b4); r_esp += 12; return;
}

void f_007b6880(void) /* sub_7B6880 */
{
    FN_ENTER(0x007b6880);
    /* 007b6880: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007b6881: mov ebx, ecx */ r_ebx = r_ecx;
    /* 007b6883: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007b6885: call 0x7b6894 */ r_esp -= 4; W32(r_esp, 0x7b688au); f_007b6894();
    /* 007b688a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007b688c: call 0x7b798c */ r_esp -= 4; W32(r_esp, 0x7b6891u); f_007b798c();
    /* 007b6891: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007b6892: ret  */ FN_RET(0x007b6880); r_esp += 4; return;
}

void f_007b6894(void) /* sub_7B6894 */
{
    FN_ENTER(0x007b6894);
    /* 007b6894: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007b6895: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007b6896: sub esp, 0x78 */ {  u32 a = r_esp; u32 b = 0x78u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007b6899: mov ebx, ecx */ r_ebx = r_ecx;
    /* 007b689b: mov edx, dword ptr [ebx + 0xa4] */ r_edx = R32((u32)(r_ebx+0xa4u));
    /* 007b68a1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b68a3: je 0x7b6e02 */ if (fZ) goto L_007b6e02;
L_007b68a9:; BB(0x007b68a9);
    /* 007b68a9: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 007b68ac: and eax, 0xffb7ffff */ {  u32 a = r_eax; u32 b = 0xffb7ffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 007b68b1: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 007b68b4: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 007b68b9: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 007b68bb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 007b68bd: jle 0x7b6d12 */ if ((fZ||fS!=fO)) goto L_007b6d12;
L_007b68c3:; BB(0x007b68c3);
    /* 007b68c3: mov dword ptr [esp + 0x6c], edi */ W32((u32)(r_esp+0x6cu), r_edi);
L_007b68c7:; BB(0x007b68c7);
    /* 007b68c7: mov edi, dword ptr [esi*4 + 0xaad720] */ r_edi = R32((u32)(r_esi*4+0xaad720u));
    /* 007b68ce: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b68d0: je 0x7b6d03 */ if (fZ) goto L_007b6d03;
L_007b68d6:; BB(0x007b68d6);
    /* 007b68d6: movzx edx, word ptr [edi + 0x1c] */ r_edx = (u32)R16((u32)(r_edi+0x1cu));
    /* 007b68da: cmp edx, 0x1000 */ {  u32 a = r_edx; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007b68e0: jge 0x7b6d03 */ if ((fS==fO)) goto L_007b6d03;
L_007b68e6:; BB(0x007b68e6);
    /* 007b68e6: cmp edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b68e8: je 0x7b6b9d */ if (fZ) goto L_007b6b9d;
L_007b68ee:; BB(0x007b68ee);
    /* 007b68ee: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 007b68f1: test eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b68f6: jne 0x7b6b9d */ if (!fZ) goto L_007b6b9d;
L_007b68fc:; BB(0x007b68fc);
    /* 007b68fc: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 007b68ff: test eax, 0x80000800 */ {  u32 a = r_eax; u32 b = 0x80000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b6904: jne 0x7b6b9d */ if (!fZ) goto L_007b6b9d;
L_007b690a:; BB(0x007b690a);
    /* 007b690a: lea edx, [ebx + 0x38] */ r_edx = (u32)(r_ebx+0x38u);
    /* 007b690d: lea eax, [edi + 0x38] */ r_eax = (u32)(r_edi+0x38u);
    /* 007b6910: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007b6911: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007b6912: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x7b6917u); f_007a9180();
    /* 007b6917: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007b691a: fcomp dword ptr [0x97e3b8] */ fx_compare(ST(0), R_F32((u32)(0x97e3b8u))); FPOP();
    /* 007b6920: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007b6922: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007b6923: ja 0x7b6b99 */ if ((!fC&&!fZ)) goto L_007b6b99;
L_007b6929:; BB(0x007b6929);
    /* 007b6929: mov ecx, dword ptr [ebx + 0xa4] */ r_ecx = R32((u32)(r_ebx+0xa4u));
    /* 007b692f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b6931: je 0x7b6b9d */ if (fZ) goto L_007b6b9d;
L_007b6937:; BB(0x007b6937);
    /* 007b6937: mov eax, dword ptr [edi + 0xa4] */ r_eax = R32((u32)(r_edi+0xa4u));
    /* 007b693d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b693f: je 0x7b6b9d */ if (fZ) goto L_007b6b9d;
L_007b6945:; BB(0x007b6945);
    /* 007b6945: mov dword ptr [esp + 0x30], ecx */ W32((u32)(r_esp+0x30u), r_ecx);
    /* 007b6949: mov ecx, dword ptr [ebx + 0xa8] */ r_ecx = R32((u32)(r_ebx+0xa8u));
    /* 007b694f: mov dword ptr [esp + 0x34], ecx */ W32((u32)(r_esp+0x34u), r_ecx);
    /* 007b6953: mov ecx, dword ptr [ebx + 0x38] */ r_ecx = R32((u32)(r_ebx+0x38u));
    /* 007b6956: mov dword ptr [esp + 0x38], ecx */ W32((u32)(r_esp+0x38u), r_ecx);
    /* 007b695a: mov ecx, dword ptr [ebx + 0x3c] */ r_ecx = R32((u32)(r_ebx+0x3cu));
    /* 007b695d: mov dword ptr [esp + 0x3c], ecx */ W32((u32)(r_esp+0x3cu), r_ecx);
    /* 007b6961: mov ecx, dword ptr [ebx + 0x40] */ r_ecx = R32((u32)(r_ebx+0x40u));
    /* 007b6964: mov dword ptr [esp + 0x40], ecx */ W32((u32)(r_esp+0x40u), r_ecx);
    /* 007b6968: mov ecx, dword ptr [ebx + 0x60] */ r_ecx = R32((u32)(r_ebx+0x60u));
    /* 007b696b: mov dword ptr [esp + 0x44], ecx */ W32((u32)(r_esp+0x44u), r_ecx);
    /* 007b696f: mov edx, esp */ r_edx = r_esp;
    /* 007b6971: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 007b6975: mov eax, dword ptr [edi + 0xa8] */ r_eax = R32((u32)(r_edi+0xa8u));
    /* 007b697b: mov dword ptr [esp + 0x4c], eax */ W32((u32)(r_esp+0x4cu), r_eax);
    /* 007b697f: mov eax, dword ptr [edi + 0x38] */ r_eax = R32((u32)(r_edi+0x38u));
    /* 007b6982: mov dword ptr [esp + 0x50], eax */ W32((u32)(r_esp+0x50u), r_eax);
    /* 007b6986: mov eax, dword ptr [edi + 0x3c] */ r_eax = R32((u32)(r_edi+0x3cu));
    /* 007b6989: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
    /* 007b698d: mov eax, dword ptr [edi + 0x40] */ r_eax = R32((u32)(r_edi+0x40u));
    /* 007b6990: mov dword ptr [esp + 0x58], eax */ W32((u32)(r_esp+0x58u), r_eax);
    /* 007b6994: mov eax, dword ptr [edi + 0x60] */ r_eax = R32((u32)(r_edi+0x60u));
    /* 007b6997: mov dword ptr [esp + 0x5c], eax */ W32((u32)(r_esp+0x5cu), r_eax);
    /* 007b699b: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 007b699f: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 007b69a1: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 007b69a5: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 007b69a8: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 007b69ac: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 007b69af: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 007b69b3: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 007b69b6: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 007b69ba: mov dword ptr [edx + 0x10], eax */ W32((u32)(r_edx+0x10u), r_eax);
    /* 007b69bd: mov eax, dword ptr [esp + 0x44] */ r_eax = R32((u32)(r_esp+0x44u));
    /* 007b69c1: mov dword ptr [edx + 0x14], eax */ W32((u32)(r_edx+0x14u), r_eax);
    /* 007b69c4: mov edx, dword ptr [esp + 0x48] */ r_edx = R32((u32)(r_esp+0x48u));
    /* 007b69c8: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 007b69cc: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 007b69ce: mov edx, dword ptr [esp + 0x4c] */ r_edx = R32((u32)(r_esp+0x4cu));
    /* 007b69d2: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 007b69d5: mov edx, dword ptr [esp + 0x50] */ r_edx = R32((u32)(r_esp+0x50u));
    /* 007b69d9: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 007b69dc: mov edx, dword ptr [esp + 0x54] */ r_edx = R32((u32)(r_esp+0x54u));
    /* 007b69e0: mov dword ptr [eax + 0xc], edx */ W32((u32)(r_eax+0xcu), r_edx);
    /* 007b69e3: mov edx, dword ptr [esp + 0x58] */ r_edx = R32((u32)(r_esp+0x58u));
    /* 007b69e7: mov dword ptr [eax + 0x10], edx */ W32((u32)(r_eax+0x10u), r_edx);
    /* 007b69ea: mov edx, dword ptr [esp + 0x5c] */ r_edx = R32((u32)(r_esp+0x5cu));
    /* 007b69ee: mov dword ptr [eax + 0x14], edx */ W32((u32)(r_eax+0x14u), r_edx);
    /* 007b69f1: call 0x7b5318 */ r_esp -= 4; W32(r_esp, 0x7b69f6u); f_007b5318();
    /* 007b69f6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b69f8: je 0x7b6b9d */ if (fZ) goto L_007b6b9d;
L_007b69fe:; BB(0x007b69fe);
    /* 007b69fe: mov ecx, dword ptr [0xaad6e0] */ r_ecx = R32((u32)(0xaad6e0u));
    /* 007b6a04: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007b6a06: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b6a08: je 0x7b6b9f */ if (fZ) goto L_007b6b9f;
L_007b6a0e:; BB(0x007b6a0e);
    /* 007b6a0e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b6a10: je 0x7b6e08 */ if (fZ) goto L_007b6e08;
L_007b6a16:; BB(0x007b6a16);
    /* 007b6a16: mov ecx, dword ptr [0xaad6e4] */ r_ecx = R32((u32)(0xaad6e4u));
    /* 007b6a1c: mov edx, 1 */ r_edx = 0x1u;
    /* 007b6a21: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b6a23: je 0x7b6b9f */ if (fZ) goto L_007b6b9f;
L_007b6a29:; BB(0x007b6a29);
    /* 007b6a29: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b6a2b: je 0x7b6e08 */ if (fZ) goto L_007b6e08;
L_007b6a31:; BB(0x007b6a31);
    /* 007b6a31: mov ecx, dword ptr [0xaad6e8] */ r_ecx = R32((u32)(0xaad6e8u));
    /* 007b6a37: mov edx, 2 */ r_edx = 0x2u;
    /* 007b6a3c: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b6a3e: je 0x7b6b9f */ if (fZ) goto L_007b6b9f;
L_007b6a44:; BB(0x007b6a44);
    /* 007b6a44: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b6a46: je 0x7b6e08 */ if (fZ) goto L_007b6e08;
L_007b6a4c:; BB(0x007b6a4c);
    /* 007b6a4c: mov ecx, dword ptr [0xaad6ec] */ r_ecx = R32((u32)(0xaad6ecu));
    /* 007b6a52: mov edx, 3 */ r_edx = 0x3u;
    /* 007b6a57: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b6a59: je 0x7b6b9f */ if (fZ) goto L_007b6b9f;
L_007b6a5f:; BB(0x007b6a5f);
    /* 007b6a5f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b6a61: je 0x7b6e08 */ if (fZ) goto L_007b6e08;
L_007b6a67:; BB(0x007b6a67);
    /* 007b6a67: mov ecx, dword ptr [0xaad6f0] */ r_ecx = R32((u32)(0xaad6f0u));
    /* 007b6a6d: mov edx, 4 */ r_edx = 0x4u;
    /* 007b6a72: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b6a74: je 0x7b6b9f */ if (fZ) goto L_007b6b9f;
L_007b6a7a:; BB(0x007b6a7a);
    /* 007b6a7a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b6a7c: je 0x7b6e08 */ if (fZ) goto L_007b6e08;
L_007b6a82:; BB(0x007b6a82);
    /* 007b6a82: mov ecx, dword ptr [0xaad6f4] */ r_ecx = R32((u32)(0xaad6f4u));
    /* 007b6a88: mov edx, 5 */ r_edx = 0x5u;
    /* 007b6a8d: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b6a8f: je 0x7b6b9f */ if (fZ) goto L_007b6b9f;
L_007b6a95:; BB(0x007b6a95);
    /* 007b6a95: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b6a97: je 0x7b6e08 */ if (fZ) goto L_007b6e08;
L_007b6a9d:; BB(0x007b6a9d);
    /* 007b6a9d: mov ecx, dword ptr [0xaad6f8] */ r_ecx = R32((u32)(0xaad6f8u));
    /* 007b6aa3: mov edx, 6 */ r_edx = 0x6u;
    /* 007b6aa8: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b6aaa: je 0x7b6b9f */ if (fZ) goto L_007b6b9f;
L_007b6ab0:; BB(0x007b6ab0);
    /* 007b6ab0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b6ab2: je 0x7b6e08 */ if (fZ) goto L_007b6e08;
L_007b6ab8:; BB(0x007b6ab8);
    /* 007b6ab8: mov ecx, dword ptr [0xaad6fc] */ r_ecx = R32((u32)(0xaad6fcu));
    /* 007b6abe: mov edx, 7 */ r_edx = 0x7u;
    /* 007b6ac3: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b6ac5: je 0x7b6b9f */ if (fZ) goto L_007b6b9f;
L_007b6acb:; BB(0x007b6acb);
    /* 007b6acb: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b6acd: je 0x7b6e08 */ if (fZ) goto L_007b6e08;
L_007b6ad3:; BB(0x007b6ad3);
    /* 007b6ad3: mov ecx, dword ptr [0xaad700] */ r_ecx = R32((u32)(0xaad700u));
    /* 007b6ad9: mov edx, 8 */ r_edx = 0x8u;
    /* 007b6ade: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b6ae0: je 0x7b6b9f */ if (fZ) goto L_007b6b9f;
L_007b6ae6:; BB(0x007b6ae6);
    /* 007b6ae6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b6ae8: je 0x7b6e08 */ if (fZ) goto L_007b6e08;
L_007b6aee:; BB(0x007b6aee);
    /* 007b6aee: mov ecx, dword ptr [0xaad704] */ r_ecx = R32((u32)(0xaad704u));
    /* 007b6af4: mov edx, 9 */ r_edx = 0x9u;
    /* 007b6af9: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b6afb: je 0x7b6b9f */ if (fZ) goto L_007b6b9f;
L_007b6b01:; BB(0x007b6b01);
    /* 007b6b01: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b6b03: je 0x7b6e08 */ if (fZ) goto L_007b6e08;
L_007b6b09:; BB(0x007b6b09);
    /* 007b6b09: mov ecx, dword ptr [0xaad708] */ r_ecx = R32((u32)(0xaad708u));
    /* 007b6b0f: mov edx, 0xa */ r_edx = 0xau;
    /* 007b6b14: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b6b16: je 0x7b6b9f */ if (fZ) goto L_007b6b9f;
L_007b6b1c:; BB(0x007b6b1c);
    /* 007b6b1c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b6b1e: je 0x7b6e08 */ if (fZ) goto L_007b6e08;
L_007b6b24:; BB(0x007b6b24);
    /* 007b6b24: mov ecx, dword ptr [0xaad70c] */ r_ecx = R32((u32)(0xaad70cu));
    /* 007b6b2a: mov edx, 0xb */ r_edx = 0xbu;
    /* 007b6b2f: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b6b31: je 0x7b6b9f */ if (fZ) goto L_007b6b9f;
L_007b6b33:; BB(0x007b6b33);
    /* 007b6b33: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b6b35: je 0x7b6e08 */ if (fZ) goto L_007b6e08;
L_007b6b3b:; BB(0x007b6b3b);
    /* 007b6b3b: mov ecx, dword ptr [0xaad710] */ r_ecx = R32((u32)(0xaad710u));
    /* 007b6b41: mov edx, 0xc */ r_edx = 0xcu;
    /* 007b6b46: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b6b48: je 0x7b6b9f */ if (fZ) goto L_007b6b9f;
L_007b6b4a:; BB(0x007b6b4a);
    /* 007b6b4a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b6b4c: je 0x7b6e08 */ if (fZ) goto L_007b6e08;
L_007b6b52:; BB(0x007b6b52);
    /* 007b6b52: mov ecx, dword ptr [0xaad714] */ r_ecx = R32((u32)(0xaad714u));
    /* 007b6b58: mov edx, 0xd */ r_edx = 0xdu;
    /* 007b6b5d: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b6b5f: je 0x7b6b9f */ if (fZ) goto L_007b6b9f;
L_007b6b61:; BB(0x007b6b61);
    /* 007b6b61: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b6b63: je 0x7b6e08 */ if (fZ) goto L_007b6e08;
L_007b6b69:; BB(0x007b6b69);
    /* 007b6b69: mov ecx, dword ptr [0xaad718] */ r_ecx = R32((u32)(0xaad718u));
    /* 007b6b6f: mov edx, 0xe */ r_edx = 0xeu;
    /* 007b6b74: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b6b76: je 0x7b6b9f */ if (fZ) goto L_007b6b9f;
L_007b6b78:; BB(0x007b6b78);
    /* 007b6b78: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b6b7a: je 0x7b6e08 */ if (fZ) goto L_007b6e08;
L_007b6b80:; BB(0x007b6b80);
    /* 007b6b80: mov ecx, dword ptr [0xaad71c] */ r_ecx = R32((u32)(0xaad71cu));
    /* 007b6b86: mov edx, 0xf */ r_edx = 0xfu;
    /* 007b6b8b: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b6b8d: je 0x7b6b9f */ if (fZ) goto L_007b6b9f;
L_007b6b8f:; BB(0x007b6b8f);
    /* 007b6b8f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b6b91: je 0x7b6e08 */ if (fZ) goto L_007b6e08;
L_007b6b97:; BB(0x007b6b97);
    /* 007b6b97: jmp 0x7b6b9f */ goto L_007b6b9f;
L_007b6b99:; BB(0x007b6b99);
    /* 007b6b99: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007b6b9b: jmp 0x7b6b9f */ goto L_007b6b9f;
L_007b6b9d:; BB(0x007b6b9d);
    /* 007b6b9d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_007b6b9f:; BB(0x007b6b9f);
    /* 007b6b9f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b6ba1: je 0x7b6cfe */ if (fZ) goto L_007b6cfe;
L_007b6ba7:; BB(0x007b6ba7);
    /* 007b6ba7: mov ecx, dword ptr [ebx + 0xa4] */ r_ecx = R32((u32)(r_ebx+0xa4u));
    /* 007b6bad: mov edx, dword ptr [ecx + 0x18] */ r_edx = R32((u32)(r_ecx+0x18u));
    /* 007b6bb0: or edx, 0x80000 */ {  u32 a = r_edx; u32 b = 0x80000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 007b6bb6: mov dword ptr [ecx + 0x18], edx */ W32((u32)(r_ecx+0x18u), r_edx);
    /* 007b6bb9: mov edx, dword ptr [ebx + 0xa4] */ r_edx = R32((u32)(r_ebx+0xa4u));
    /* 007b6bbf: mov edx, dword ptr [edx + 0x18] */ r_edx = R32((u32)(r_edx+0x18u));
    /* 007b6bc2: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 007b6bc5: test edx, 0x2000 */ {  u32 a = r_edx; u32 b = 0x2000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b6bcb: je 0x7b6bdf */ if (fZ) goto L_007b6bdf;
L_007b6bcd:; BB(0x007b6bcd);
    /* 007b6bcd: test ecx, 0x100 */ {  u32 a = r_ecx; u32 b = 0x100u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b6bd3: je 0x7b6bdf */ if (fZ) goto L_007b6bdf;
L_007b6bd5:; BB(0x007b6bd5);
    /* 007b6bd5: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 007b6bda: jmp 0x7b6d03 */ goto L_007b6d03;
L_007b6bdf:; BB(0x007b6bdf);
    /* 007b6bdf: test edx, 0x100 */ {  u32 a = r_edx; u32 b = 0x100u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b6be5: je 0x7b6bf9 */ if (fZ) goto L_007b6bf9;
L_007b6be7:; BB(0x007b6be7);
    /* 007b6be7: test ecx, 0x2000 */ {  u32 a = r_ecx; u32 b = 0x2000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b6bed: je 0x7b6bf9 */ if (fZ) goto L_007b6bf9;
L_007b6bef:; BB(0x007b6bef);
    /* 007b6bef: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 007b6bf4: jmp 0x7b6d03 */ goto L_007b6d03;
L_007b6bf9:; BB(0x007b6bf9);
    /* 007b6bf9: test edx, 0x4000 */ {  u32 a = r_edx; u32 b = 0x4000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b6bff: je 0x7b6c13 */ if (fZ) goto L_007b6c13;
L_007b6c01:; BB(0x007b6c01);
    /* 007b6c01: test ecx, 0x200 */ {  u32 a = r_ecx; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b6c07: je 0x7b6c13 */ if (fZ) goto L_007b6c13;
L_007b6c09:; BB(0x007b6c09);
    /* 007b6c09: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 007b6c0e: jmp 0x7b6d03 */ goto L_007b6d03;
L_007b6c13:; BB(0x007b6c13);
    /* 007b6c13: test edx, 0x200 */ {  u32 a = r_edx; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b6c19: je 0x7b6c2d */ if (fZ) goto L_007b6c2d;
L_007b6c1b:; BB(0x007b6c1b);
    /* 007b6c1b: test ecx, 0x4000 */ {  u32 a = r_ecx; u32 b = 0x4000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b6c21: je 0x7b6c2d */ if (fZ) goto L_007b6c2d;
L_007b6c23:; BB(0x007b6c23);
    /* 007b6c23: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 007b6c28: jmp 0x7b6d03 */ goto L_007b6d03;
L_007b6c2d:; BB(0x007b6c2d);
    /* 007b6c2d: test edx, 0x8000 */ {  u32 a = r_edx; u32 b = 0x8000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b6c33: je 0x7b6c47 */ if (fZ) goto L_007b6c47;
L_007b6c35:; BB(0x007b6c35);
    /* 007b6c35: test ecx, 0x400 */ {  u32 a = r_ecx; u32 b = 0x400u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b6c3b: je 0x7b6c47 */ if (fZ) goto L_007b6c47;
L_007b6c3d:; BB(0x007b6c3d);
    /* 007b6c3d: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 007b6c42: jmp 0x7b6d03 */ goto L_007b6d03;
L_007b6c47:; BB(0x007b6c47);
    /* 007b6c47: test edx, 0x400 */ {  u32 a = r_edx; u32 b = 0x400u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b6c4d: je 0x7b6c61 */ if (fZ) goto L_007b6c61;
L_007b6c4f:; BB(0x007b6c4f);
    /* 007b6c4f: test ecx, 0x8000 */ {  u32 a = r_ecx; u32 b = 0x8000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b6c55: je 0x7b6c61 */ if (fZ) goto L_007b6c61;
L_007b6c57:; BB(0x007b6c57);
    /* 007b6c57: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 007b6c5c: jmp 0x7b6d03 */ goto L_007b6d03;
L_007b6c61:; BB(0x007b6c61);
    /* 007b6c61: test edx, 0x10000 */ {  u32 a = r_edx; u32 b = 0x10000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b6c67: je 0x7b6c7b */ if (fZ) goto L_007b6c7b;
L_007b6c69:; BB(0x007b6c69);
    /* 007b6c69: test ecx, 0x800 */ {  u32 a = r_ecx; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b6c6f: je 0x7b6c7b */ if (fZ) goto L_007b6c7b;
L_007b6c71:; BB(0x007b6c71);
    /* 007b6c71: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 007b6c76: jmp 0x7b6d03 */ goto L_007b6d03;
L_007b6c7b:; BB(0x007b6c7b);
    /* 007b6c7b: test edx, 0x800 */ {  u32 a = r_edx; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b6c81: je 0x7b6c92 */ if (fZ) goto L_007b6c92;
L_007b6c83:; BB(0x007b6c83);
    /* 007b6c83: test ecx, 0x10000 */ {  u32 a = r_ecx; u32 b = 0x10000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b6c89: je 0x7b6c92 */ if (fZ) goto L_007b6c92;
L_007b6c8b:; BB(0x007b6c8b);
    /* 007b6c8b: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 007b6c90: jmp 0x7b6d03 */ goto L_007b6d03;
L_007b6c92:; BB(0x007b6c92);
    /* 007b6c92: test edx, 0x40000 */ {  u32 a = r_edx; u32 b = 0x40000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b6c98: je 0x7b6ca9 */ if (fZ) goto L_007b6ca9;
L_007b6c9a:; BB(0x007b6c9a);
    /* 007b6c9a: test ecx, 0x1000 */ {  u32 a = r_ecx; u32 b = 0x1000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b6ca0: je 0x7b6ca9 */ if (fZ) goto L_007b6ca9;
L_007b6ca2:; BB(0x007b6ca2);
    /* 007b6ca2: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 007b6ca7: jmp 0x7b6d03 */ goto L_007b6d03;
L_007b6ca9:; BB(0x007b6ca9);
    /* 007b6ca9: test edx, 0x1000 */ {  u32 a = r_edx; u32 b = 0x1000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b6caf: je 0x7b6cc0 */ if (fZ) goto L_007b6cc0;
L_007b6cb1:; BB(0x007b6cb1);
    /* 007b6cb1: test ecx, 0x40000 */ {  u32 a = r_ecx; u32 b = 0x40000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b6cb7: je 0x7b6cc0 */ if (fZ) goto L_007b6cc0;
L_007b6cb9:; BB(0x007b6cb9);
    /* 007b6cb9: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 007b6cbe: jmp 0x7b6d03 */ goto L_007b6d03;
L_007b6cc0:; BB(0x007b6cc0);
    /* 007b6cc0: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 007b6cc3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b6cc5: jne 0x7b6cd2 */ if (!fZ) goto L_007b6cd2;
L_007b6cc7:; BB(0x007b6cc7);
    /* 007b6cc7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007b6cc8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007b6cc9: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007b6ccb: call 0x7b7704 */ r_esp -= 4; W32(r_esp, 0x7b6cd0u); f_007b7704();
    /* 007b6cd0: jmp 0x7b6cdb */ goto L_007b6cdb;
L_007b6cd2:; BB(0x007b6cd2);
    /* 007b6cd2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007b6cd3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007b6cd4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007b6cd6: call 0x7b6e14 */ r_esp -= 4; W32(r_esp, 0x7b6cdbu); f_007b6e14();
L_007b6cdb:; BB(0x007b6cdb);
    /* 007b6cdb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b6cdd: je 0x7b6cf7 */ if (fZ) goto L_007b6cf7;
L_007b6cdf:; BB(0x007b6cdf);
    /* 007b6cdf: mov edx, dword ptr [ebx + 0xa4] */ r_edx = R32((u32)(r_ebx+0xa4u));
    /* 007b6ce5: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 007b6ce8: or eax, 0x400000 */ {  u32 a = r_eax; u32 b = 0x400000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007b6ced: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 007b6cf0: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 007b6cf5: jmp 0x7b6d03 */ goto L_007b6d03;
L_007b6cf7:; BB(0x007b6cf7);
    /* 007b6cf7: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 007b6cfc: jmp 0x7b6d03 */ goto L_007b6d03;
L_007b6cfe:; BB(0x007b6cfe);
    /* 007b6cfe: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
L_007b6d03:; BB(0x007b6d03);
    /* 007b6d03: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007b6d06: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007b6d08: jl 0x7b68c7 */ if ((fS!=fO)) goto L_007b68c7;
L_007b6d0e:; BB(0x007b6d0e);
    /* 007b6d0e: mov edi, dword ptr [esp + 0x6c] */ r_edi = R32((u32)(r_esp+0x6cu));
L_007b6d12:; BB(0x007b6d12);
    /* 007b6d12: mov edx, dword ptr [ebx + 0xa4] */ r_edx = R32((u32)(r_ebx+0xa4u));
    /* 007b6d18: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 007b6d1b: test eax, 0x480000 */ {  u32 a = r_eax; u32 b = 0x480000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b6d20: jne 0x7b6e02 */ if (!fZ) goto L_007b6e02;
L_007b6d26:; BB(0x007b6d26);
    /* 007b6d26: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b6d28: je 0x7b6e02 */ if (fZ) goto L_007b6e02;
L_007b6d2e:; BB(0x007b6d2e);
    /* 007b6d2e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b6d30: je 0x7b6e02 */ if (fZ) goto L_007b6e02;
L_007b6d36:; BB(0x007b6d36);
    /* 007b6d36: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007b6d38: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x7b6d3du); f_008173b4();
    /* 007b6d3d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b6d3f: je 0x7b6e02 */ if (fZ) goto L_007b6e02;
L_007b6d45:; BB(0x007b6d45);
    /* 007b6d45: mov esi, dword ptr [ebx + 0xa8] */ r_esi = R32((u32)(r_ebx+0xa8u));
    /* 007b6d4b: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 007b6d50: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x7b6d55u); f_0082d990();
    /* 007b6d55: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 007b6d58: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007b6d5a: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x7b6d5fu); f_0082d8bc();
    /* 007b6d5f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007b6d61: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 007b6d63: jle 0x7b6dfd */ if ((fZ||fS!=fO)) goto L_007b6dfd;
L_007b6d69:; BB(0x007b6d69);
    /* 007b6d69: mov dword ptr [esp + 0x6c], edi */ W32((u32)(r_esp+0x6cu), r_edi);
    /* 007b6d6d: mov edi, ebx */ r_edi = r_ebx;
    /* 007b6d6f: mov dword ptr [esp + 0x70], ebp */ W32((u32)(r_esp+0x70u), r_ebp);
    /* 007b6d73: lea ecx, [ebx + 0x38] */ r_ecx = (u32)(r_ebx+0x38u);
    /* 007b6d76: mov dword ptr [esp + 0x74], ecx */ W32((u32)(r_esp+0x74u), r_ecx);
    /* 007b6d7a: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 007b6d7d: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007b6d7f: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007b6d81: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007b6d83: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007b6d85: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007b6d87: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007b6d89: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007b6d8b: mov ebp, esi */ r_ebp = r_esi;
    /* 007b6d8d: mov esi, eax */ r_esi = r_eax;
    /* 007b6d8f: mov ebx, edx */ r_ebx = r_edx;
L_007b6d91:; BB(0x007b6d91);
    /* 007b6d91: mov edx, dword ptr [edi + 0xa4] */ r_edx = R32((u32)(r_edi+0xa4u));
    /* 007b6d97: mov eax, dword ptr [esi + edx] */ r_eax = R32((u32)(r_esi+r_edx));
    /* 007b6d9a: mov dword ptr [esp + 0x60], eax */ W32((u32)(r_esp+0x60u), r_eax);
    /* 007b6d9e: mov eax, dword ptr [esi + edx + 4] */ r_eax = R32((u32)(r_esi+r_edx+0x4u));
    /* 007b6da2: mov dword ptr [esp + 0x64], eax */ W32((u32)(r_esp+0x64u), r_eax);
    /* 007b6da6: mov eax, dword ptr [esi + edx + 8] */ r_eax = R32((u32)(r_esi+r_edx+0x8u));
    /* 007b6daa: mov dword ptr [esp + 0x68], eax */ W32((u32)(r_esp+0x68u), r_eax);
    /* 007b6dae: lea edx, [esp + 0x60] */ r_edx = (u32)(r_esp+0x60u);
    /* 007b6db2: lea eax, [esp + 0x60] */ r_eax = (u32)(r_esp+0x60u);
    /* 007b6db6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007b6db7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007b6db8: call 0x83a610 */ r_esp -= 4; W32(r_esp, 0x7b6dbdu); f_0083a610();
    /* 007b6dbd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007b6dc0: mov edx, dword ptr [esp + 0x74] */ r_edx = R32((u32)(r_esp+0x74u));
    /* 007b6dc4: lea ecx, [esp + 0x60] */ r_ecx = (u32)(r_esp+0x60u);
    /* 007b6dc8: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x7b6dcdu); f_0082ebac();
    /* 007b6dcd: mov edx, dword ptr [esp + 0x60] */ r_edx = R32((u32)(r_esp+0x60u));
    /* 007b6dd1: mov eax, dword ptr [edi + 0xa4] */ r_eax = R32((u32)(r_edi+0xa4u));
    /* 007b6dd7: mov dword ptr [esi + eax + 0x1c], edx */ W32((u32)(r_esi+r_eax+0x1cu), r_edx);
    /* 007b6ddb: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007b6dde: mov edx, dword ptr [esp + 0x64] */ r_edx = R32((u32)(r_esp+0x64u));
    /* 007b6de2: mov dword ptr [esi + eax + 0x20], edx */ W32((u32)(r_esi+r_eax+0x20u), r_edx);
    /* 007b6de6: mov edx, dword ptr [esp + 0x68] */ r_edx = R32((u32)(r_esp+0x68u));
    /* 007b6dea: mov dword ptr [esi + eax + 0x24], edx */ W32((u32)(r_esi+r_eax+0x24u), r_edx);
    /* 007b6dee: add esi, 0x2c */ {  u32 a = r_esi; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007b6df1: cmp ebx, ebp */ {  u32 a = r_ebx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007b6df3: jl 0x7b6d91 */ if ((fS!=fO)) goto L_007b6d91;
L_007b6df5:; BB(0x007b6df5);
    /* 007b6df5: mov edi, dword ptr [esp + 0x6c] */ r_edi = R32((u32)(r_esp+0x6cu));
    /* 007b6df9: mov ebp, dword ptr [esp + 0x70] */ r_ebp = R32((u32)(r_esp+0x70u));
L_007b6dfd:; BB(0x007b6dfd);
    /* 007b6dfd: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x7b6e02u); f_0082da80();
L_007b6e02:; BB(0x007b6e02);
    /* 007b6e02: add esp, 0x78 */ {  u32 a = r_esp; u32 b = 0x78u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007b6e05: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007b6e06: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007b6e07: ret  */ FN_RET(0x007b6894); r_esp += 4; return;
L_007b6e08:; BB(0x007b6e08);
    /* 007b6e08: mov dword ptr [edx*4 + 0xaad6e0], edi */ W32((u32)(r_edx*4+0xaad6e0u), r_edi);
    /* 007b6e0f: jmp 0x7b6b9f */ goto L_007b6b9f;
}

void f_007b6e14(void) /* sub_7B6E14 */
{
    FN_ENTER(0x007b6e14);
    /* 007b6e14: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007b6e15: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007b6e16: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007b6e17: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007b6e18: sub esp, 0x94 */ {  u32 a = r_esp; u32 b = 0x94u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007b6e1e: mov ebp, ecx */ r_ebp = r_ecx;
    /* 007b6e20: mov ebx, dword ptr [esp + 0xa8] */ r_ebx = R32((u32)(r_esp+0xa8u));
    /* 007b6e27: mov edi, dword ptr [esp + 0xac] */ r_edi = R32((u32)(r_esp+0xacu));
    /* 007b6e2e: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b6e30: je 0x7b758e */ if (fZ) goto L_007b758e;
L_007b6e36:; BB(0x007b6e36);
    /* 007b6e36: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b6e38: je 0x7b758e */ if (fZ) goto L_007b758e;
L_007b6e3e:; BB(0x007b6e3e);
    /* 007b6e3e: lea ecx, [esp + 0x28] */ r_ecx = (u32)(r_esp+0x28u);
    /* 007b6e42: mov eax, dword ptr [ebp + 0x44] */ r_eax = R32((u32)(r_ebp+0x44u));
    /* 007b6e45: mov esi, dword ptr [ebp + 0x48] */ r_esi = R32((u32)(r_ebp+0x48u));
    /* 007b6e48: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 007b6e4c: mov eax, dword ptr [ebp + 0x4c] */ r_eax = R32((u32)(r_ebp+0x4cu));
    /* 007b6e4f: mov dword ptr [esp + 0x2c], esi */ W32((u32)(r_esp+0x2cu), r_esi);
    /* 007b6e53: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 007b6e57: lea edx, [edi + 0x1c] */ r_edx = (u32)(r_edi+0x1cu);
    /* 007b6e5a: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x7b6e5fu); f_0082f9c4();
    /* 007b6e5f: mov eax, dword ptr [0x9f9860] */ r_eax = R32((u32)(0x9f9860u));
    /* 007b6e64: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b6e66: je 0x7b7546 */ if (fZ) goto L_007b7546;
L_007b6e6c:; BB(0x007b6e6c);
    /* 007b6e6c: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 007b6e70: cmp eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007b6e75: jge 0x7b7546 */ if ((fS==fO)) goto L_007b7546;
L_007b6e7b:; BB(0x007b6e7b);
    /* 007b6e7b: fld dword ptr [edi + 0x10] */ FPUSH(R_F32((u32)(r_edi+0x10u)));
    /* 007b6e7e: fld dword ptr [edi + 0xc] */ FPUSH(R_F32((u32)(r_edi+0xcu)));
    /* 007b6e81: mov eax, dword ptr [ebp + 0xa4] */ r_eax = R32((u32)(r_ebp+0xa4u));
    /* 007b6e87: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007b6e89: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 007b6e8d: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 007b6e91: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 007b6e93: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b6e95: je 0x7b76ce */ if (fZ) goto L_007b76ce;
L_007b6e9b:; BB(0x007b6e9b);
    /* 007b6e9b: fld dword ptr [eax + 0xc] */ FPUSH(R_F32((u32)(r_eax+0xcu)));
L_007b6e9e:; BB(0x007b6e9e);
    /* 007b6e9e: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 007b6ea2: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 007b6ea4: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 007b6ea6: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 007b6eaa: je 0x7b76c3 */ if (fZ) goto L_007b76c3;
L_007b6eb0:; BB(0x007b6eb0);
    /* 007b6eb0: fld dword ptr [eax + 0xc] */ FPUSH(R_F32((u32)(r_eax+0xcu)));
L_007b6eb3:; BB(0x007b6eb3);
    /* 007b6eb3: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 007b6eb7: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 007b6eb9: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 007b6ebb: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 007b6ebf: mov edx, dword ptr [esp + 0x2c] */ r_edx = R32((u32)(r_esp+0x2cu));
    /* 007b6ec3: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 007b6ec7: mov dword ptr [0xaab4f0], eax */ W32((u32)(0xaab4f0u), r_eax);
    /* 007b6ecc: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 007b6ed0: mov dword ptr [0xaab4f4], edx */ W32((u32)(0xaab4f4u), r_edx);
    /* 007b6ed6: mov dword ptr [0xaab4f8], eax */ W32((u32)(0xaab4f8u), r_eax);
    /* 007b6edb: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 007b6ee0: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x7b6ee5u); f_0082d990();
    /* 007b6ee5: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 007b6ee8: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007b6eea: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007b6eec: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x7b6ef1u); f_0082d8bc();
    /* 007b6ef1: mov eax, 0xaab4f0 */ r_eax = 0xaab4f0u;
    /* 007b6ef6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007b6ef7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007b6ef8: call 0x83a610 */ r_esp -= 4; W32(r_esp, 0x7b6efdu); f_0083a610();
    /* 007b6efd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007b6f00: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x7b6f05u); f_0082da80();
    /* 007b6f05: fld dword ptr [0xaab4f0] */ FPUSH(R_F32((u32)(0xaab4f0u)));
    /* 007b6f0b: fld dword ptr [0xaab4f0] */ FPUSH(R_F32((u32)(0xaab4f0u)));
    /* 007b6f11: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 007b6f13: fld dword ptr [0xaab4f8] */ FPUSH(R_F32((u32)(0xaab4f8u)));
    /* 007b6f19: fld dword ptr [0xaab4f8] */ FPUSH(R_F32((u32)(0xaab4f8u)));
    /* 007b6f1f: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 007b6f21: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 007b6f25: fsub st(3) */ ST(0) = ST(0) - ST(3);
    /* 007b6f27: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 007b6f2b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007b6f2d: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 007b6f31: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 007b6f33: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 007b6f37: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 007b6f39: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007b6f3b: fcomp dword ptr [0x97e3b0] */ fx_compare(ST(0), R_F32((u32)(0x97e3b0u))); FPOP();
    /* 007b6f41: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007b6f43: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007b6f44: jb 0x7b7452 */ if (fC) goto L_007b7452;
L_007b6f4a:; BB(0x007b6f4a);
    /* 007b6f4a: mov eax, dword ptr [edi + 0x18] */ r_eax = R32((u32)(r_edi+0x18u));
    /* 007b6f4d: test eax, 0x20000000 */ {  u32 a = r_eax; u32 b = 0x20000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b6f52: je 0x7b707d */ if (fZ) goto L_007b707d;
L_007b6f58:; BB(0x007b6f58);
    /* 007b6f58: fld dword ptr [0x97e3b4] */ FPUSH(R_F32((u32)(0x97e3b4u)));
    /* 007b6f5e: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 007b6f62: fcomp dword ptr [esp + 0x18] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x18u))); FPOP();
    /* 007b6f66: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007b6f68: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007b6f69: mov dword ptr [esp + 0x38], 0 */ W32((u32)(r_esp+0x38u), 0x0u);
    /* 007b6f71: jae 0x7b6f96 */ if (!fC) goto L_007b6f96;
L_007b6f73:; BB(0x007b6f73);
    /* 007b6f73: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 007b6f75: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 007b6f77: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007b6f79: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007b6f7b: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 007b6f7f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007b6f80: jbe 0x7b6f8c */ if ((fC||fZ)) goto L_007b6f8c;
L_007b6f82:; BB(0x007b6f82);
    /* 007b6f82: mov dword ptr [esp + 0x3c], 0x3dcccccd */ W32((u32)(r_esp+0x3cu), 0x3dcccccdu);
    /* 007b6f8a: jmp 0x7b6fb7 */ goto L_007b6fb7;
L_007b6f8c:; BB(0x007b6f8c);
    /* 007b6f8c: mov dword ptr [esp + 0x3c], 0xbdcccccd */ W32((u32)(r_esp+0x3cu), 0xbdcccccdu);
    /* 007b6f94: jmp 0x7b6fb7 */ goto L_007b6fb7;
L_007b6f96:; BB(0x007b6f96);
    /* 007b6f96: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 007b6f98: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 007b6f9a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007b6f9c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007b6f9e: mov dword ptr [esp + 0x3c], edx */ W32((u32)(r_esp+0x3cu), r_edx);
    /* 007b6fa2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007b6fa3: jae 0x7b6faf */ if (!fC) goto L_007b6faf;
L_007b6fa5:; BB(0x007b6fa5);
    /* 007b6fa5: mov dword ptr [esp + 0x34], 0x3dcccccd */ W32((u32)(r_esp+0x34u), 0x3dcccccdu);
    /* 007b6fad: jmp 0x7b6fb7 */ goto L_007b6fb7;
L_007b6faf:; BB(0x007b6faf);
    /* 007b6faf: mov dword ptr [esp + 0x34], 0xbdcccccd */ W32((u32)(r_esp+0x34u), 0xbdcccccdu);
L_007b6fb7:; BB(0x007b6fb7);
    /* 007b6fb7: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 007b6fbc: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x7b6fc1u); f_0082d990();
    /* 007b6fc1: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 007b6fc4: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007b6fc6: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x7b6fcbu); f_0082d8bc();
    /* 007b6fcb: lea edx, [esp + 0x34] */ r_edx = (u32)(r_esp+0x34u);
    /* 007b6fcf: lea eax, [esp + 0x34] */ r_eax = (u32)(r_esp+0x34u);
    /* 007b6fd3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007b6fd4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007b6fd5: call 0x83a610 */ r_esp -= 4; W32(r_esp, 0x7b6fdau); f_0083a610();
    /* 007b6fda: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007b6fdd: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x7b6fe2u); f_0082da80();
    /* 007b6fe2: lea ecx, [esp + 0x34] */ r_ecx = (u32)(r_esp+0x34u);
    /* 007b6fe6: lea edx, [ebp + 0x38] */ r_edx = (u32)(r_ebp+0x38u);
    /* 007b6fe9: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x7b6feeu); f_0082ebac();
    /* 007b6fee: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 007b6ff2: mov edx, dword ptr [esp + 0x38] */ r_edx = R32((u32)(r_esp+0x38u));
    /* 007b6ff6: mov ebx, dword ptr [esp + 0x3c] */ r_ebx = R32((u32)(r_esp+0x3cu));
    /* 007b6ffa: fld dword ptr [0x97e3a8] */ FPUSH(R_F32((u32)(0x97e3a8u)));
    /* 007b7000: movzx esi, word ptr [ebp + 0x1c] */ r_esi = (u32)R16((u32)(r_ebp+0x1cu));
    /* 007b7004: mov dword ptr [esp + 0x70], eax */ W32((u32)(r_esp+0x70u), r_eax);
    /* 007b7008: mov dword ptr [esp + 0x74], edx */ W32((u32)(r_esp+0x74u), r_edx);
    /* 007b700c: fadd dword ptr [esp + 0x74] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x74u));
    /* 007b7010: fstp dword ptr [esp + 0x74] */ W_F32((u32)(r_esp+0x74u), ST(0)); FPOP();
    /* 007b7014: mov dword ptr [esp + 0x78], ebx */ W32((u32)(r_esp+0x78u), r_ebx);
    /* 007b7018: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007b7019: call 0x7ba9ec */ r_esp -= 4; W32(r_esp, 0x7b701eu); f_007ba9ec();
    /* 007b701e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007b701f: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 007b7022: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b7024: jne 0x7b702d */ if (!fZ) goto L_007b702d;
L_007b7026:; BB(0x007b7026);
    /* 007b7026: mov ebx, 0x55 */ r_ebx = 0x55u;
    /* 007b702b: jmp 0x7b7032 */ goto L_007b7032;
L_007b702d:; BB(0x007b702d);
    /* 007b702d: mov ebx, 0x15 */ r_ebx = 0x15u;
L_007b7032:; BB(0x007b7032);
    /* 007b7032: mov eax, dword ptr [ebp + 0x90] */ r_eax = R32((u32)(r_ebp+0x90u));
    /* 007b7038: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b703a: je 0x7b7644 */ if (fZ) goto L_007b7644;
L_007b7040:; BB(0x007b7040);
    /* 007b7040: lea edx, [esp + 0x70] */ r_edx = (u32)(r_esp+0x70u);
    /* 007b7044: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007b7045: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007b7046: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007b7047: call 0x7806dc */ r_esp -= 4; W32(r_esp, 0x7b704cu); f_007806dc();
    /* 007b704c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_007b704f:; BB(0x007b704f);
    /* 007b704f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b7051: je 0x7b7546 */ if (fZ) goto L_007b7546;
L_007b7057:; BB(0x007b7057);
    /* 007b7057: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 007b705a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 007b705c: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 007b7060: mov ebx, dword ptr [eax + 4] */ r_ebx = R32((u32)(r_eax+0x4u));
    /* 007b7063: mov dword ptr [esp + 0x38], ebx */ W32((u32)(r_esp+0x38u), r_ebx);
    /* 007b7067: mov esi, dword ptr [eax + 8] */ r_esi = R32((u32)(r_eax+0x8u));
    /* 007b706a: mov dword ptr [ebp + 0x38], edx */ W32((u32)(r_ebp+0x38u), r_edx);
    /* 007b706d: mov dword ptr [ebp + 0x3c], ebx */ W32((u32)(r_ebp+0x3cu), r_ebx);
    /* 007b7070: mov dword ptr [ebp + 0x40], esi */ W32((u32)(r_ebp+0x40u), r_esi);
    /* 007b7073: mov esi, 1 */ r_esi = 0x1u;
    /* 007b7078: jmp 0x7b7537 */ goto L_007b7537;
L_007b707d:; BB(0x007b707d);
    /* 007b707d: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 007b7081: fcomp dword ptr [esp + 0x20] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x20u))); FPOP();
    /* 007b7085: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007b7087: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007b7088: jae 0x7b7270 */ if (!fC) goto L_007b7270;
L_007b708e:; BB(0x007b708e);
    /* 007b708e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007b7090: fcomp dword ptr [0x97e3b4] */ fx_compare(ST(0), R_F32((u32)(0x97e3b4u))); FPOP();
    /* 007b7096: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007b7098: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 007b709a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007b709c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007b709d: jae 0x7b70a9 */ if (!fC) goto L_007b70a9;
L_007b709f:; BB(0x007b709f);
    /* 007b709f: mov dword ptr [esp + 0x34], 0xbdcccccd */ W32((u32)(r_esp+0x34u), 0xbdcccccdu);
    /* 007b70a7: jmp 0x7b70b1 */ goto L_007b70b1;
L_007b70a9:; BB(0x007b70a9);
    /* 007b70a9: mov dword ptr [esp + 0x34], 0x3dcccccd */ W32((u32)(r_esp+0x34u), 0x3dcccccdu);
L_007b70b1:; BB(0x007b70b1);
    /* 007b70b1: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
    /* 007b70b5: mov dword ptr [esp + 0x3c], edi */ W32((u32)(r_esp+0x3cu), r_edi);
    /* 007b70b9: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 007b70be: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x7b70c3u); f_0082d990();
    /* 007b70c3: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 007b70c6: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007b70c8: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x7b70cdu); f_0082d8bc();
    /* 007b70cd: lea edx, [esp + 0x34] */ r_edx = (u32)(r_esp+0x34u);
    /* 007b70d1: lea eax, [esp + 0x34] */ r_eax = (u32)(r_esp+0x34u);
    /* 007b70d5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007b70d6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007b70d7: call 0x83a610 */ r_esp -= 4; W32(r_esp, 0x7b70dcu); f_0083a610();
    /* 007b70dc: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007b70df: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x7b70e4u); f_0082da80();
    /* 007b70e4: lea ecx, [esp + 0x34] */ r_ecx = (u32)(r_esp+0x34u);
    /* 007b70e8: lea edi, [ebp + 0x38] */ r_edi = (u32)(r_ebp+0x38u);
    /* 007b70eb: mov edx, edi */ r_edx = r_edi;
    /* 007b70ed: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x7b70f2u); f_0082ebac();
    /* 007b70f2: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 007b70f6: fld dword ptr [0x97e3a8] */ FPUSH(R_F32((u32)(0x97e3a8u)));
    /* 007b70fc: mov dword ptr [esp + 0x58], eax */ W32((u32)(r_esp+0x58u), r_eax);
    /* 007b7100: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 007b7104: mov dword ptr [esp + 0x5c], eax */ W32((u32)(r_esp+0x5cu), r_eax);
    /* 007b7108: fadd dword ptr [esp + 0x5c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x5cu));
    /* 007b710c: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 007b7110: fstp dword ptr [esp + 0x5c] */ W_F32((u32)(r_esp+0x5cu), ST(0)); FPOP();
    /* 007b7114: mov dword ptr [esp + 0x60], eax */ W32((u32)(r_esp+0x60u), r_eax);
    /* 007b7118: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 007b711c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007b711d: call 0x7ba9ec */ r_esp -= 4; W32(r_esp, 0x7b7122u); f_007ba9ec();
    /* 007b7122: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007b7123: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 007b7126: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b7128: jne 0x7b7131 */ if (!fZ) goto L_007b7131;
L_007b712a:; BB(0x007b712a);
    /* 007b712a: mov eax, 0x55 */ r_eax = 0x55u;
    /* 007b712f: jmp 0x7b7136 */ goto L_007b7136;
L_007b7131:; BB(0x007b7131);
    /* 007b7131: mov eax, 0x15 */ r_eax = 0x15u;
L_007b7136:; BB(0x007b7136);
    /* 007b7136: mov edx, dword ptr [ebp + 0x90] */ r_edx = R32((u32)(r_ebp+0x90u));
    /* 007b713c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b713e: je 0x7b7664 */ if (fZ) goto L_007b7664;
L_007b7144:; BB(0x007b7144);
    /* 007b7144: lea ecx, [esp + 0x58] */ r_ecx = (u32)(r_esp+0x58u);
    /* 007b7148: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007b7149: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007b714a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007b714b: call 0x7806dc */ r_esp -= 4; W32(r_esp, 0x7b7150u); f_007806dc();
    /* 007b7150: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_007b7153:; BB(0x007b7153);
    /* 007b7153: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b7155: je 0x7b7178 */ if (fZ) goto L_007b7178;
L_007b7157:; BB(0x007b7157);
    /* 007b7157: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 007b715a: mov esi, dword ptr [eax] */ r_esi = R32((u32)(r_eax));
    /* 007b715c: mov dword ptr [esp + 0x34], esi */ W32((u32)(r_esp+0x34u), r_esi);
    /* 007b7160: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 007b7163: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
    /* 007b7167: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 007b716a: mov dword ptr [ebp + 0x38], esi */ W32((u32)(r_ebp+0x38u), r_esi);
    /* 007b716d: mov dword ptr [ebp + 0x3c], edx */ W32((u32)(r_ebp+0x3cu), r_edx);
    /* 007b7170: mov dword ptr [ebp + 0x40], eax */ W32((u32)(r_ebp+0x40u), r_eax);
    /* 007b7173: mov esi, 1 */ r_esi = 0x1u;
L_007b7178:; BB(0x007b7178);
    /* 007b7178: fld dword ptr [0xaab4f8] */ FPUSH(R_F32((u32)(0xaab4f8u)));
    /* 007b717e: fcomp dword ptr [0x97e3b4] */ fx_compare(ST(0), R_F32((u32)(0x97e3b4u))); FPOP();
    /* 007b7184: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007b7186: mov dword ptr [esp + 0x34], 0 */ W32((u32)(r_esp+0x34u), 0x0u);
    /* 007b718e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007b718f: mov dword ptr [esp + 0x38], 0 */ W32((u32)(r_esp+0x38u), 0x0u);
    /* 007b7197: jae 0x7b71a3 */ if (!fC) goto L_007b71a3;
L_007b7199:; BB(0x007b7199);
    /* 007b7199: mov dword ptr [esp + 0x3c], 0xbc23d70b */ W32((u32)(r_esp+0x3cu), 0xbc23d70bu);
    /* 007b71a1: jmp 0x7b71ab */ goto L_007b71ab;
L_007b71a3:; BB(0x007b71a3);
    /* 007b71a3: mov dword ptr [esp + 0x3c], 0x3c23d70b */ W32((u32)(r_esp+0x3cu), 0x3c23d70bu);
L_007b71ab:; BB(0x007b71ab);
    /* 007b71ab: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 007b71b0: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x7b71b5u); f_0082d990();
    /* 007b71b5: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 007b71b8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007b71ba: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x7b71bfu); f_0082d8bc();
    /* 007b71bf: lea ebx, [esp + 0x34] */ r_ebx = (u32)(r_esp+0x34u);
    /* 007b71c3: lea eax, [esp + 0x34] */ r_eax = (u32)(r_esp+0x34u);
    /* 007b71c7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007b71c8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007b71c9: call 0x83a610 */ r_esp -= 4; W32(r_esp, 0x7b71ceu); f_0083a610();
    /* 007b71ce: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007b71d1: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x7b71d6u); f_0082da80();
    /* 007b71d6: lea ecx, [esp + 0x34] */ r_ecx = (u32)(r_esp+0x34u);
    /* 007b71da: mov edx, edi */ r_edx = r_edi;
    /* 007b71dc: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x7b71e1u); f_0082ebac();
    /* 007b71e1: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 007b71e5: mov edx, dword ptr [esp + 0x38] */ r_edx = R32((u32)(r_esp+0x38u));
    /* 007b71e9: mov ebx, dword ptr [esp + 0x3c] */ r_ebx = R32((u32)(r_esp+0x3cu));
    /* 007b71ed: fld dword ptr [0x97e3a8] */ FPUSH(R_F32((u32)(0x97e3a8u)));
    /* 007b71f3: movzx edi, word ptr [ebp + 0x1c] */ r_edi = (u32)R16((u32)(r_ebp+0x1cu));
    /* 007b71f7: mov dword ptr [esp + 0x64], eax */ W32((u32)(r_esp+0x64u), r_eax);
    /* 007b71fb: mov dword ptr [esp + 0x68], edx */ W32((u32)(r_esp+0x68u), r_edx);
    /* 007b71ff: fadd dword ptr [esp + 0x68] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x68u));
    /* 007b7203: fstp dword ptr [esp + 0x68] */ W_F32((u32)(r_esp+0x68u), ST(0)); FPOP();
    /* 007b7207: mov dword ptr [esp + 0x6c], ebx */ W32((u32)(r_esp+0x6cu), r_ebx);
    /* 007b720b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007b720c: call 0x7ba9ec */ r_esp -= 4; W32(r_esp, 0x7b7211u); f_007ba9ec();
    /* 007b7211: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007b7212: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 007b7215: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b7217: jne 0x7b7220 */ if (!fZ) goto L_007b7220;
L_007b7219:; BB(0x007b7219);
    /* 007b7219: mov ebx, 0x55 */ r_ebx = 0x55u;
    /* 007b721e: jmp 0x7b7225 */ goto L_007b7225;
L_007b7220:; BB(0x007b7220);
    /* 007b7220: mov ebx, 0x15 */ r_ebx = 0x15u;
L_007b7225:; BB(0x007b7225);
    /* 007b7225: mov eax, dword ptr [ebp + 0x90] */ r_eax = R32((u32)(r_ebp+0x90u));
    /* 007b722b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b722d: je 0x7b769d */ if (fZ) goto L_007b769d;
L_007b7233:; BB(0x007b7233);
    /* 007b7233: lea edx, [esp + 0x64] */ r_edx = (u32)(r_esp+0x64u);
    /* 007b7237: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007b7238: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007b7239: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007b723a: call 0x7806dc */ r_esp -= 4; W32(r_esp, 0x7b723fu); f_007806dc();
    /* 007b723f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_007b7242:; BB(0x007b7242);
    /* 007b7242: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b7244: je 0x7b7657 */ if (fZ) goto L_007b7657;
L_007b724a:; BB(0x007b724a);
    /* 007b724a: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 007b724d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 007b724f: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 007b7253: mov ebx, dword ptr [eax + 4] */ r_ebx = R32((u32)(r_eax+0x4u));
    /* 007b7256: mov dword ptr [esp + 0x38], ebx */ W32((u32)(r_esp+0x38u), r_ebx);
    /* 007b725a: mov esi, dword ptr [eax + 8] */ r_esi = R32((u32)(r_eax+0x8u));
    /* 007b725d: mov dword ptr [ebp + 0x38], edx */ W32((u32)(r_ebp+0x38u), r_edx);
    /* 007b7260: mov dword ptr [ebp + 0x3c], ebx */ W32((u32)(r_ebp+0x3cu), r_ebx);
    /* 007b7263: mov dword ptr [ebp + 0x40], esi */ W32((u32)(r_ebp+0x40u), r_esi);
    /* 007b7266: mov esi, 1 */ r_esi = 0x1u;
    /* 007b726b: jmp 0x7b7537 */ goto L_007b7537;
L_007b7270:; BB(0x007b7270);
    /* 007b7270: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 007b7272: fcomp dword ptr [0x97e3b4] */ fx_compare(ST(0), R_F32((u32)(0x97e3b4u))); FPOP();
    /* 007b7278: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007b727a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007b727b: mov dword ptr [esp + 0x34], 0 */ W32((u32)(r_esp+0x34u), 0x0u);
    /* 007b7283: mov dword ptr [esp + 0x38], 0 */ W32((u32)(r_esp+0x38u), 0x0u);
    /* 007b728b: jae 0x7b7297 */ if (!fC) goto L_007b7297;
L_007b728d:; BB(0x007b728d);
    /* 007b728d: mov dword ptr [esp + 0x3c], 0xbdcccccd */ W32((u32)(r_esp+0x3cu), 0xbdcccccdu);
    /* 007b7295: jmp 0x7b729f */ goto L_007b729f;
L_007b7297:; BB(0x007b7297);
    /* 007b7297: mov dword ptr [esp + 0x3c], 0x3dcccccd */ W32((u32)(r_esp+0x3cu), 0x3dcccccdu);
L_007b729f:; BB(0x007b729f);
    /* 007b729f: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 007b72a4: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x7b72a9u); f_0082d990();
    /* 007b72a9: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 007b72ac: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007b72ae: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x7b72b3u); f_0082d8bc();
    /* 007b72b3: lea edx, [esp + 0x34] */ r_edx = (u32)(r_esp+0x34u);
    /* 007b72b7: lea eax, [esp + 0x34] */ r_eax = (u32)(r_esp+0x34u);
    /* 007b72bb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007b72bc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007b72bd: call 0x83a610 */ r_esp -= 4; W32(r_esp, 0x7b72c2u); f_0083a610();
    /* 007b72c2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007b72c5: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x7b72cau); f_0082da80();
    /* 007b72ca: lea ecx, [esp + 0x34] */ r_ecx = (u32)(r_esp+0x34u);
    /* 007b72ce: lea edi, [ebp + 0x38] */ r_edi = (u32)(r_ebp+0x38u);
    /* 007b72d1: mov edx, edi */ r_edx = r_edi;
    /* 007b72d3: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x7b72d8u); f_0082ebac();
    /* 007b72d8: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 007b72dc: fld dword ptr [0x97e3a8] */ FPUSH(R_F32((u32)(0x97e3a8u)));
    /* 007b72e2: mov dword ptr [esp + 0x40], eax */ W32((u32)(r_esp+0x40u), r_eax);
    /* 007b72e6: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 007b72ea: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 007b72ee: fadd dword ptr [esp + 0x44] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x44u));
    /* 007b72f2: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 007b72f6: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
    /* 007b72fa: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 007b72fe: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 007b7302: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007b7303: call 0x7ba9ec */ r_esp -= 4; W32(r_esp, 0x7b7308u); f_007ba9ec();
    /* 007b7308: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007b7309: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 007b730c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b730e: jne 0x7b7317 */ if (!fZ) goto L_007b7317;
L_007b7310:; BB(0x007b7310);
    /* 007b7310: mov eax, 0x55 */ r_eax = 0x55u;
    /* 007b7315: jmp 0x7b731c */ goto L_007b731c;
L_007b7317:; BB(0x007b7317);
    /* 007b7317: mov eax, 0x15 */ r_eax = 0x15u;
L_007b731c:; BB(0x007b731c);
    /* 007b731c: mov edx, dword ptr [ebp + 0x90] */ r_edx = R32((u32)(r_ebp+0x90u));
    /* 007b7322: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b7324: je 0x7b768a */ if (fZ) goto L_007b768a;
L_007b732a:; BB(0x007b732a);
    /* 007b732a: lea ecx, [esp + 0x40] */ r_ecx = (u32)(r_esp+0x40u);
    /* 007b732e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007b732f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007b7330: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007b7331: call 0x7806dc */ r_esp -= 4; W32(r_esp, 0x7b7336u); f_007806dc();
    /* 007b7336: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_007b7339:; BB(0x007b7339);
    /* 007b7339: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b733b: je 0x7b735e */ if (fZ) goto L_007b735e;
L_007b733d:; BB(0x007b733d);
    /* 007b733d: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 007b7340: mov esi, dword ptr [eax] */ r_esi = R32((u32)(r_eax));
    /* 007b7342: mov dword ptr [esp + 0x34], esi */ W32((u32)(r_esp+0x34u), r_esi);
    /* 007b7346: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 007b7349: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
    /* 007b734d: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 007b7350: mov dword ptr [ebp + 0x38], esi */ W32((u32)(r_ebp+0x38u), r_esi);
    /* 007b7353: mov dword ptr [ebp + 0x3c], edx */ W32((u32)(r_ebp+0x3cu), r_edx);
    /* 007b7356: mov dword ptr [ebp + 0x40], eax */ W32((u32)(r_ebp+0x40u), r_eax);
    /* 007b7359: mov esi, 1 */ r_esi = 0x1u;
L_007b735e:; BB(0x007b735e);
    /* 007b735e: fld dword ptr [0xaab4f0] */ FPUSH(R_F32((u32)(0xaab4f0u)));
    /* 007b7364: fcomp dword ptr [0x97e3b4] */ fx_compare(ST(0), R_F32((u32)(0x97e3b4u))); FPOP();
    /* 007b736a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007b736c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007b736e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007b7370: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007b7371: jae 0x7b737d */ if (!fC) goto L_007b737d;
L_007b7373:; BB(0x007b7373);
    /* 007b7373: mov dword ptr [esp + 0x34], 0xbc23d70b */ W32((u32)(r_esp+0x34u), 0xbc23d70bu);
    /* 007b737b: jmp 0x7b7385 */ goto L_007b7385;
L_007b737d:; BB(0x007b737d);
    /* 007b737d: mov dword ptr [esp + 0x34], 0x3c23d70b */ W32((u32)(r_esp+0x34u), 0x3c23d70bu);
L_007b7385:; BB(0x007b7385);
    /* 007b7385: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
    /* 007b7389: mov dword ptr [esp + 0x3c], ecx */ W32((u32)(r_esp+0x3cu), r_ecx);
    /* 007b738d: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 007b7392: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x7b7397u); f_0082d990();
    /* 007b7397: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 007b739a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007b739c: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x7b73a1u); f_0082d8bc();
    /* 007b73a1: lea ebx, [esp + 0x34] */ r_ebx = (u32)(r_esp+0x34u);
    /* 007b73a5: lea eax, [esp + 0x34] */ r_eax = (u32)(r_esp+0x34u);
    /* 007b73a9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007b73aa: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007b73ab: call 0x83a610 */ r_esp -= 4; W32(r_esp, 0x7b73b0u); f_0083a610();
    /* 007b73b0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007b73b3: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x7b73b8u); f_0082da80();
    /* 007b73b8: lea ecx, [esp + 0x34] */ r_ecx = (u32)(r_esp+0x34u);
    /* 007b73bc: mov edx, edi */ r_edx = r_edi;
    /* 007b73be: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x7b73c3u); f_0082ebac();
    /* 007b73c3: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 007b73c7: mov edx, dword ptr [esp + 0x38] */ r_edx = R32((u32)(r_esp+0x38u));
    /* 007b73cb: mov ebx, dword ptr [esp + 0x3c] */ r_ebx = R32((u32)(r_esp+0x3cu));
    /* 007b73cf: fld dword ptr [0x97e3a8] */ FPUSH(R_F32((u32)(0x97e3a8u)));
    /* 007b73d5: movzx edi, word ptr [ebp + 0x1c] */ r_edi = (u32)R16((u32)(r_ebp+0x1cu));
    /* 007b73d9: mov dword ptr [esp + 0x4c], eax */ W32((u32)(r_esp+0x4cu), r_eax);
    /* 007b73dd: mov dword ptr [esp + 0x50], edx */ W32((u32)(r_esp+0x50u), r_edx);
    /* 007b73e1: fadd dword ptr [esp + 0x50] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x50u));
    /* 007b73e5: fstp dword ptr [esp + 0x50] */ W_F32((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 007b73e9: mov dword ptr [esp + 0x54], ebx */ W32((u32)(r_esp+0x54u), r_ebx);
    /* 007b73ed: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007b73ee: call 0x7ba9ec */ r_esp -= 4; W32(r_esp, 0x7b73f3u); f_007ba9ec();
    /* 007b73f3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007b73f4: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 007b73f7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b73f9: jne 0x7b7402 */ if (!fZ) goto L_007b7402;
L_007b73fb:; BB(0x007b73fb);
    /* 007b73fb: mov ebx, 0x55 */ r_ebx = 0x55u;
    /* 007b7400: jmp 0x7b7407 */ goto L_007b7407;
L_007b7402:; BB(0x007b7402);
    /* 007b7402: mov ebx, 0x15 */ r_ebx = 0x15u;
L_007b7407:; BB(0x007b7407);
    /* 007b7407: mov eax, dword ptr [ebp + 0x90] */ r_eax = R32((u32)(r_ebp+0x90u));
    /* 007b740d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b740f: je 0x7b7677 */ if (fZ) goto L_007b7677;
L_007b7415:; BB(0x007b7415);
    /* 007b7415: lea edx, [esp + 0x4c] */ r_edx = (u32)(r_esp+0x4cu);
    /* 007b7419: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007b741a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007b741b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007b741c: call 0x7806dc */ r_esp -= 4; W32(r_esp, 0x7b7421u); f_007806dc();
    /* 007b7421: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_007b7424:; BB(0x007b7424);
    /* 007b7424: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b7426: je 0x7b7657 */ if (fZ) goto L_007b7657;
L_007b742c:; BB(0x007b742c);
    /* 007b742c: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 007b742f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 007b7431: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 007b7435: mov ebx, dword ptr [eax + 4] */ r_ebx = R32((u32)(r_eax+0x4u));
    /* 007b7438: mov dword ptr [esp + 0x38], ebx */ W32((u32)(r_esp+0x38u), r_ebx);
    /* 007b743c: mov esi, dword ptr [eax + 8] */ r_esi = R32((u32)(r_eax+0x8u));
    /* 007b743f: mov dword ptr [ebp + 0x38], edx */ W32((u32)(r_ebp+0x38u), r_edx);
    /* 007b7442: mov dword ptr [ebp + 0x3c], ebx */ W32((u32)(r_ebp+0x3cu), r_ebx);
    /* 007b7445: mov dword ptr [ebp + 0x40], esi */ W32((u32)(r_ebp+0x40u), r_esi);
    /* 007b7448: mov esi, 1 */ r_esi = 0x1u;
    /* 007b744d: jmp 0x7b7537 */ goto L_007b7537;
L_007b7452:; BB(0x007b7452);
    /* 007b7452: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007b7454: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007b7456: mov dword ptr [esp + 0x34], 0 */ W32((u32)(r_esp+0x34u), 0x0u);
    /* 007b745e: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 007b7463: mov dword ptr [esp + 0x38], 0 */ W32((u32)(r_esp+0x38u), 0x0u);
    /* 007b746b: mov dword ptr [esp + 0x3c], 0x3dcccccd */ W32((u32)(r_esp+0x3cu), 0x3dcccccdu);
    /* 007b7473: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x7b7478u); f_0082d990();
    /* 007b7478: mov edx, dword ptr [ebp + 0x60] */ r_edx = R32((u32)(r_ebp+0x60u));
    /* 007b747b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007b747d: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x7b7482u); f_0082d8bc();
    /* 007b7482: lea edx, [esp + 0x34] */ r_edx = (u32)(r_esp+0x34u);
    /* 007b7486: lea eax, [esp + 0x34] */ r_eax = (u32)(r_esp+0x34u);
    /* 007b748a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007b748b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007b748c: call 0x83a610 */ r_esp -= 4; W32(r_esp, 0x7b7491u); f_0083a610();
    /* 007b7491: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007b7494: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x7b7499u); f_0082da80();
    /* 007b7499: lea ecx, [esp + 0x34] */ r_ecx = (u32)(r_esp+0x34u);
    /* 007b749d: lea edx, [ebp + 0x38] */ r_edx = (u32)(r_ebp+0x38u);
    /* 007b74a0: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x7b74a5u); f_0082ebac();
    /* 007b74a5: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 007b74a9: mov edx, dword ptr [esp + 0x38] */ r_edx = R32((u32)(r_esp+0x38u));
    /* 007b74ad: mov ebx, dword ptr [esp + 0x3c] */ r_ebx = R32((u32)(r_esp+0x3cu));
    /* 007b74b1: fld dword ptr [0x97e3a8] */ FPUSH(R_F32((u32)(0x97e3a8u)));
    /* 007b74b7: movzx esi, word ptr [ebp + 0x1c] */ r_esi = (u32)R16((u32)(r_ebp+0x1cu));
    /* 007b74bb: mov dword ptr [esp + 0x7c], eax */ W32((u32)(r_esp+0x7cu), r_eax);
    /* 007b74bf: mov dword ptr [esp + 0x80], edx */ W32((u32)(r_esp+0x80u), r_edx);
    /* 007b74c6: fadd dword ptr [esp + 0x80] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x80u));
    /* 007b74cd: fstp dword ptr [esp + 0x80] */ W_F32((u32)(r_esp+0x80u), ST(0)); FPOP();
    /* 007b74d4: mov dword ptr [esp + 0x84], ebx */ W32((u32)(r_esp+0x84u), r_ebx);
    /* 007b74db: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007b74dc: call 0x7ba9ec */ r_esp -= 4; W32(r_esp, 0x7b74e1u); f_007ba9ec();
    /* 007b74e1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007b74e2: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 007b74e5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b74e7: jne 0x7b74f0 */ if (!fZ) goto L_007b74f0;
L_007b74e9:; BB(0x007b74e9);
    /* 007b74e9: mov ebx, 0x55 */ r_ebx = 0x55u;
    /* 007b74ee: jmp 0x7b74f5 */ goto L_007b74f5;
L_007b74f0:; BB(0x007b74f0);
    /* 007b74f0: mov ebx, 0x15 */ r_ebx = 0x15u;
L_007b74f5:; BB(0x007b74f5);
    /* 007b74f5: mov eax, dword ptr [ebp + 0x90] */ r_eax = R32((u32)(r_ebp+0x90u));
    /* 007b74fb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b74fd: je 0x7b76b0 */ if (fZ) goto L_007b76b0;
L_007b7503:; BB(0x007b7503);
    /* 007b7503: lea edx, [esp + 0x7c] */ r_edx = (u32)(r_esp+0x7cu);
    /* 007b7507: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007b7508: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007b7509: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007b750a: call 0x7806dc */ r_esp -= 4; W32(r_esp, 0x7b750fu); f_007806dc();
    /* 007b750f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_007b7512:; BB(0x007b7512);
    /* 007b7512: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b7514: je 0x7b7546 */ if (fZ) goto L_007b7546;
L_007b7516:; BB(0x007b7516);
    /* 007b7516: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 007b7519: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 007b751b: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 007b751f: mov ebx, dword ptr [eax + 4] */ r_ebx = R32((u32)(r_eax+0x4u));
    /* 007b7522: mov dword ptr [esp + 0x38], ebx */ W32((u32)(r_esp+0x38u), r_ebx);
    /* 007b7526: mov esi, dword ptr [eax + 8] */ r_esi = R32((u32)(r_eax+0x8u));
    /* 007b7529: mov dword ptr [ebp + 0x38], edx */ W32((u32)(r_ebp+0x38u), r_edx);
    /* 007b752c: mov dword ptr [ebp + 0x3c], ebx */ W32((u32)(r_ebp+0x3cu), r_ebx);
    /* 007b752f: mov dword ptr [ebp + 0x40], esi */ W32((u32)(r_ebp+0x40u), r_esi);
    /* 007b7532: mov esi, 1 */ r_esi = 0x1u;
L_007b7537:; BB(0x007b7537);
    /* 007b7537: mov eax, esi */ r_eax = r_esi;
    /* 007b7539: add esp, 0x94 */ {  u32 a = r_esp; u32 b = 0x94u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007b753f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007b7540: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007b7541: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007b7542: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007b7543: ret 8 */ FN_RET(0x007b6e14); r_esp += 12; return;
L_007b7546:; BB(0x007b7546);
    /* 007b7546: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 007b754a: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 007b754e: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 007b7550: fmul qword ptr [0x97e320] */ ST(0) = ST(0) * R_F64((u32)(0x97e320u));
    /* 007b7556: fdiv qword ptr [0x97e318] */ ST(0) = ST(0) / R_F64((u32)(0x97e318u));
    /* 007b755c: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 007b755f: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 007b7563: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007b7568: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 007b756c: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 007b7570: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 007b7574: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 007b7577: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 007b757b: push dword ptr [ebp + 0x60] */ { u32 v = R32((u32)(r_ebp+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 007b757e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007b757f: call 0x7a9018 */ r_esp -= 4; W32(r_esp, 0x7b7584u); f_007a9018();
    /* 007b7584: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007b7587: cmp eax, 0x3000 */ {  u32 a = r_eax; u32 b = 0x3000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007b758c: jge 0x7b759d */ if ((fS==fO)) goto L_007b759d;
L_007b758e:; BB(0x007b758e);
    /* 007b758e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007b7590: add esp, 0x94 */ {  u32 a = r_esp; u32 b = 0x94u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007b7596: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007b7597: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007b7598: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007b7599: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007b759a: ret 8 */ FN_RET(0x007b6e14); r_esp += 12; return;
L_007b759d:; BB(0x007b759d);
    /* 007b759d: fld dword ptr [0x97e3a8] */ FPUSH(R_F32((u32)(0x97e3a8u)));
    /* 007b75a3: mov eax, dword ptr [ebp + 0x44] */ r_eax = R32((u32)(r_ebp+0x44u));
    /* 007b75a6: movzx esi, word ptr [ebp + 0x1c] */ r_esi = (u32)R16((u32)(r_ebp+0x1cu));
    /* 007b75aa: mov dword ptr [esp + 0x88], eax */ W32((u32)(r_esp+0x88u), r_eax);
    /* 007b75b1: mov edx, dword ptr [ebp + 0x48] */ r_edx = R32((u32)(r_ebp+0x48u));
    /* 007b75b4: mov dword ptr [esp + 0x8c], edx */ W32((u32)(r_esp+0x8cu), r_edx);
    /* 007b75bb: fadd dword ptr [esp + 0x8c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x8cu));
    /* 007b75c2: mov ebx, dword ptr [ebp + 0x4c] */ r_ebx = R32((u32)(r_ebp+0x4cu));
    /* 007b75c5: fstp dword ptr [esp + 0x8c] */ W_F32((u32)(r_esp+0x8cu), ST(0)); FPOP();
    /* 007b75cc: mov dword ptr [esp + 0x90], ebx */ W32((u32)(r_esp+0x90u), r_ebx);
    /* 007b75d3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007b75d4: call 0x7ba9ec */ r_esp -= 4; W32(r_esp, 0x7b75d9u); f_007ba9ec();
    /* 007b75d9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007b75da: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 007b75dd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b75df: jne 0x7b75e8 */ if (!fZ) goto L_007b75e8;
L_007b75e1:; BB(0x007b75e1);
    /* 007b75e1: mov ebx, 0x55 */ r_ebx = 0x55u;
    /* 007b75e6: jmp 0x7b75ed */ goto L_007b75ed;
L_007b75e8:; BB(0x007b75e8);
    /* 007b75e8: mov ebx, 0x15 */ r_ebx = 0x15u;
L_007b75ed:; BB(0x007b75ed);
    /* 007b75ed: mov eax, dword ptr [ebp + 0x90] */ r_eax = R32((u32)(r_ebp+0x90u));
    /* 007b75f3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b75f5: je 0x7b76d9 */ if (fZ) goto L_007b76d9;
L_007b75fb:; BB(0x007b75fb);
    /* 007b75fb: lea edx, [esp + 0x88] */ r_edx = (u32)(r_esp+0x88u);
    /* 007b7602: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007b7603: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007b7604: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007b7605: call 0x7806dc */ r_esp -= 4; W32(r_esp, 0x7b760au); f_007806dc();
    /* 007b760a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_007b760d:; BB(0x007b760d);
    /* 007b760d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b760f: je 0x7b76ef */ if (fZ) goto L_007b76ef;
L_007b7615:; BB(0x007b7615);
    /* 007b7615: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 007b7618: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 007b761a: mov dword ptr [ebp + 0x44], eax */ W32((u32)(r_ebp+0x44u), r_eax);
    /* 007b761d: mov ebx, dword ptr [edx + 4] */ r_ebx = R32((u32)(r_edx+0x4u));
    /* 007b7620: mov dword ptr [ebp + 0x48], ebx */ W32((u32)(r_ebp+0x48u), r_ebx);
    /* 007b7623: mov esi, dword ptr [edx + 8] */ r_esi = R32((u32)(r_edx+0x8u));
    /* 007b7626: mov dword ptr [ebp + 0x4c], esi */ W32((u32)(r_ebp+0x4cu), r_esi);
    /* 007b7629: mov dword ptr [ebp + 0x38], eax */ W32((u32)(r_ebp+0x38u), r_eax);
    /* 007b762c: mov dword ptr [ebp + 0x3c], ebx */ W32((u32)(r_ebp+0x3cu), r_ebx);
    /* 007b762f: mov dword ptr [ebp + 0x40], esi */ W32((u32)(r_ebp+0x40u), r_esi);
    /* 007b7632: mov eax, 1 */ r_eax = 0x1u;
    /* 007b7637: add esp, 0x94 */ {  u32 a = r_esp; u32 b = 0x94u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007b763d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007b763e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007b763f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007b7640: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007b7641: ret 8 */ FN_RET(0x007b6e14); r_esp += 12; return;
L_007b7644:; BB(0x007b7644);
    /* 007b7644: lea eax, [esp + 0x70] */ r_eax = (u32)(r_esp+0x70u);
    /* 007b7648: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007b7649: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007b764a: call 0x780630 */ r_esp -= 4; W32(r_esp, 0x7b764fu); f_00780630();
    /* 007b764f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007b7652: jmp 0x7b704f */ goto L_007b704f;
L_007b7657:; BB(0x007b7657);
    /* 007b7657: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b7659: jne 0x7b7537 */ if (!fZ) goto L_007b7537;
L_007b765f:; BB(0x007b765f);
    /* 007b765f: jmp 0x7b7546 */ goto L_007b7546;
L_007b7664:; BB(0x007b7664);
    /* 007b7664: lea edx, [esp + 0x58] */ r_edx = (u32)(r_esp+0x58u);
    /* 007b7668: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007b7669: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007b766a: call 0x780630 */ r_esp -= 4; W32(r_esp, 0x7b766fu); f_00780630();
    /* 007b766f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007b7672: jmp 0x7b7153 */ goto L_007b7153;
L_007b7677:; BB(0x007b7677);
    /* 007b7677: lea edx, [esp + 0x4c] */ r_edx = (u32)(r_esp+0x4cu);
    /* 007b767b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007b767c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007b767d: call 0x780630 */ r_esp -= 4; W32(r_esp, 0x7b7682u); f_00780630();
    /* 007b7682: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007b7685: jmp 0x7b7424 */ goto L_007b7424;
L_007b768a:; BB(0x007b768a);
    /* 007b768a: lea edx, [esp + 0x40] */ r_edx = (u32)(r_esp+0x40u);
    /* 007b768e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007b768f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007b7690: call 0x780630 */ r_esp -= 4; W32(r_esp, 0x7b7695u); f_00780630();
    /* 007b7695: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007b7698: jmp 0x7b7339 */ goto L_007b7339;
L_007b769d:; BB(0x007b769d);
    /* 007b769d: lea edx, [esp + 0x64] */ r_edx = (u32)(r_esp+0x64u);
    /* 007b76a1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007b76a2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007b76a3: call 0x780630 */ r_esp -= 4; W32(r_esp, 0x7b76a8u); f_00780630();
    /* 007b76a8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007b76ab: jmp 0x7b7242 */ goto L_007b7242;
L_007b76b0:; BB(0x007b76b0);
    /* 007b76b0: lea eax, [esp + 0x7c] */ r_eax = (u32)(r_esp+0x7cu);
    /* 007b76b4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007b76b5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007b76b6: call 0x780630 */ r_esp -= 4; W32(r_esp, 0x7b76bbu); f_00780630();
    /* 007b76bb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007b76be: jmp 0x7b7512 */ goto L_007b7512;
L_007b76c3:; BB(0x007b76c3);
    /* 007b76c3: fld dword ptr [0x97e3b4] */ FPUSH(R_F32((u32)(0x97e3b4u)));
    /* 007b76c9: jmp 0x7b6eb3 */ goto L_007b6eb3;
L_007b76ce:; BB(0x007b76ce);
    /* 007b76ce: fld dword ptr [0x97e3b4] */ FPUSH(R_F32((u32)(0x97e3b4u)));
    /* 007b76d4: jmp 0x7b6e9e */ goto L_007b6e9e;
L_007b76d9:; BB(0x007b76d9);
    /* 007b76d9: lea eax, [esp + 0x88] */ r_eax = (u32)(r_esp+0x88u);
    /* 007b76e0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007b76e1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007b76e2: call 0x780630 */ r_esp -= 4; W32(r_esp, 0x7b76e7u); f_00780630();
    /* 007b76e7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007b76ea: jmp 0x7b760d */ goto L_007b760d;
L_007b76ef:; BB(0x007b76ef);
    /* 007b76ef: mov eax, 1 */ r_eax = 0x1u;
    /* 007b76f4: add esp, 0x94 */ {  u32 a = r_esp; u32 b = 0x94u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007b76fa: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007b76fb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007b76fc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007b76fd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007b76fe: ret 8 */ FN_RET(0x007b6e14); r_esp += 12; return;
}

