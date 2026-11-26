#include "protos.h"

void f_0073b0f0(void) /* sub_73B0F0 */
{
    FN_ENTER(0x0073b0f0);
    /* 0073b0f0: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0073b0f3: mov edx, ecx */ r_edx = r_ecx;
    /* 0073b0f5: mov eax, dword ptr [edx + 0x98] */ r_eax = R32((u32)(r_edx+0x98u));
    /* 0073b0fb: mov dword ptr [edx + 0x74], eax */ W32((u32)(r_edx+0x74u), r_eax);
    /* 0073b0fe: mov eax, dword ptr [edx + 0xa0] */ r_eax = R32((u32)(r_edx+0xa0u));
    /* 0073b104: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0073b106: mov dword ptr [edx + 0x5c], 0x1000000 */ W32((u32)(r_edx+0x5cu), 0x1000000u);
    /* 0073b10d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 0073b10f: jbe 0x73b16a */ if ((fC||fZ)) goto L_0073b16a;
L_0073b111:; BB(0x0073b111);
    /* 0073b111: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 0073b115: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0073b117: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 0073b11b: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 0073b11e: mov esi, edx */ r_esi = r_edx;
L_0073b120:; BB(0x0073b120);
    /* 0073b120: mov edi, dword ptr [esi + 0x28] */ r_edi = R32((u32)(r_esi+0x28u));
    /* 0073b123: mov ecx, dword ptr [edi + ebx*4] */ r_ecx = R32((u32)(r_edi+r_ebx*4));
    /* 0073b126: mov edi, dword ptr [esi + 0x90] */ r_edi = R32((u32)(r_esi+0x90u));
    /* 0073b12c: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 0073b12f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073b131: je 0x73b158 */ if (fZ) goto L_0073b158;
L_0073b133:; BB(0x0073b133);
    /* 0073b133: mov eax, dword ptr [edi + ebx*8] */ r_eax = R32((u32)(r_edi+r_ebx*8));
    /* 0073b136: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0073b138: je 0x73b14d */ if (fZ) goto L_0073b14d;
L_0073b13a:; BB(0x0073b13a);
    /* 0073b13a: and eax, 0xfffffff7 */ {  u32 a = r_eax; u32 b = 0xfffffff7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0073b13d: mov dword ptr [edi + ebx*8], eax */ W32((u32)(r_edi+r_ebx*8), r_eax);
    /* 0073b140: movzx eax, word ptr [ecx + 4] */ r_eax = (u32)R16((u32)(r_ecx+0x4u));
    /* 0073b144: and eax, 0xfff7 */ {  u32 a = r_eax; u32 b = 0xfff7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0073b149: mov word ptr [ecx + 4], ax */ W16((u32)(r_ecx+0x4u), (u16)r_eax);
L_0073b14d:; BB(0x0073b14d);
    /* 0073b14d: call 0x72e0e4 */ r_esp -= 4; W32(r_esp, 0x73b152u); f_0072e0e4();
    /* 0073b152: mov eax, dword ptr [esi + 0xa0] */ r_eax = R32((u32)(r_esi+0xa0u));
L_0073b158:; BB(0x0073b158);
    /* 0073b158: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0073b15b: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0073b15d: jb 0x73b120 */ if (fC) goto L_0073b120;
L_0073b15f:; BB(0x0073b15f);
    /* 0073b15f: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 0073b163: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 0073b167: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
L_0073b16a:; BB(0x0073b16a);
    /* 0073b16a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0073b16d: ret  */ FN_RET(0x0073b0f0); r_esp += 4; return;
}

void f_0073b170(void) /* sub_73B170 */
{
    FN_ENTER(0x0073b170);
    /* 0073b170: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0073b171: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0073b172: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0073b174: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0073b176: call 0x712798 */ r_esp -= 4; W32(r_esp, 0x73b17bu); f_00712798();
    /* 0073b17b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073b17d: je 0x73b18d */ if (fZ) goto L_0073b18d;
L_0073b17f:; BB(0x0073b17f);
    /* 0073b17f: fld dword ptr [ebx + 0x74] */ FPUSH(R_F32((u32)(r_ebx+0x74u)));
    /* 0073b182: fcomp dword ptr [ebx + 0x98] */ fx_compare(ST(0), R_F32((u32)(r_ebx+0x98u))); FPOP();
    /* 0073b188: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0073b18a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0073b18b: je 0x73b192 */ if (fZ) goto L_0073b192;
L_0073b18d:; BB(0x0073b18d);
    /* 0073b18d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073b18f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0073b190: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0073b191: ret  */ FN_RET(0x0073b170); r_esp += 4; return;
L_0073b192:; BB(0x0073b192);
    /* 0073b192: mov edx, dword ptr [ebx + 0xa0] */ r_edx = R32((u32)(r_ebx+0xa0u));
    /* 0073b198: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0073b19a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073b19c: jbe 0x73b1c1 */ if ((fC||fZ)) goto L_0073b1c1;
L_0073b19e:; BB(0x0073b19e);
    /* 0073b19e: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 0073b1a1: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
L_0073b1a4:; BB(0x0073b1a4);
    /* 0073b1a4: mov esi, dword ptr [eax + ecx*4] */ r_esi = R32((u32)(r_eax+r_ecx*4));
    /* 0073b1a7: mov ebx, dword ptr [esi + 0x20] */ r_ebx = R32((u32)(r_esi+0x20u));
    /* 0073b1aa: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0073b1ad: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073b1af: je 0x73b1ba */ if (fZ) goto L_0073b1ba;
L_0073b1b1:; BB(0x0073b1b1);
    /* 0073b1b1: movzx ebx, word ptr [esi + 4] */ r_ebx = (u32)R16((u32)(r_esi+0x4u));
    /* 0073b1b5: test bl, 0x10 */ {  u32 a = (u8)r_ebx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0073b1b8: je 0x73b1c9 */ if (fZ) goto L_0073b1c9;
L_0073b1ba:; BB(0x0073b1ba);
    /* 0073b1ba: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0073b1bc: jb 0x73b1a4 */ if (fC) goto L_0073b1a4;
L_0073b1be:; BB(0x0073b1be);
    /* 0073b1be: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
L_0073b1c1:; BB(0x0073b1c1);
    /* 0073b1c1: mov eax, 1 */ r_eax = 0x1u;
    /* 0073b1c6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0073b1c7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0073b1c8: ret  */ FN_RET(0x0073b170); r_esp += 4; return;
L_0073b1c9:; BB(0x0073b1c9);
    /* 0073b1c9: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 0073b1cc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073b1ce: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0073b1cf: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0073b1d0: ret  */ FN_RET(0x0073b170); r_esp += 4; return;
}

void f_0073b1cf(void)
{
    FN_ENTER(0x0073b1cf);
    /* 0073b1cf: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0073b1d0: ret  */ FN_RET(0x0073b1cf); r_esp += 4; return;
}

void f_0073b1d4(void) /* sub_73B1D4 */
{
    FN_ENTER(0x0073b1d4);
    /* 0073b1d4: mov dword ptr [0x9f3278], 3 */ W32((u32)(0x9f3278u), 0x3u);
    /* 0073b1de: ret  */ FN_RET(0x0073b1d4); r_esp += 4; return;
}

void f_0073b1e0(void) /* sub_73B1E0 */
{
    FN_ENTER(0x0073b1e0);
    /* 0073b1e0: mov eax, 0x9f3268 */ r_eax = 0x9f3268u;
    /* 0073b1e5: ret  */ FN_RET(0x0073b1e0); r_esp += 4; return;
}

void f_0073b1e8(void) /* sub_73B1E8 */
{
    FN_ENTER(0x0073b1e8);
    /* 0073b1e8: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 0073b1ec: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0073b1f0: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0073b1f2: mov dword ptr [0x9f3268], edx */ W32((u32)(0x9f3268u), r_edx);
    /* 0073b1f8: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0073b1fb: mov dword ptr [0x9f326c], edx */ W32((u32)(0x9f326cu), r_edx);
    /* 0073b201: mov dword ptr [0x9f3248], eax */ W32((u32)(0x9f3248u), r_eax);
    /* 0073b206: ret  */ FN_RET(0x0073b1e8); r_esp += 4; return;
}

void f_0073b208(void) /* sub_73B208 */
{
    FN_ENTER(0x0073b208);
    /* 0073b208: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0073b209: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0073b20a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0073b20b: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0073b20e: mov esi, dword ptr [ecx + 0xa0] */ r_esi = R32((u32)(r_ecx+0xa0u));
    /* 0073b214: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0073b216: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 0073b218: jbe 0x73b31d */ if ((fC||fZ)) goto L_0073b31d;
L_0073b21e:; BB(0x0073b21e);
    /* 0073b21e: mov eax, dword ptr [ecx + 0x28] */ r_eax = R32((u32)(r_ecx+0x28u));
    /* 0073b221: mov edx, dword ptr [ecx + 0x90] */ r_edx = R32((u32)(r_ecx+0x90u));
    /* 0073b227: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 0073b22b: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 0073b22e: lea ebx, [edi + edi] */ r_ebx = (u32)(r_edi+r_edi);
    /* 0073b231: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0073b233: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_0073b235:; BB(0x0073b235);
    /* 0073b235: mov ecx, dword ptr [eax + edi*4] */ r_ecx = R32((u32)(r_eax+r_edi*4));
    /* 0073b238: mov ebp, dword ptr [ecx + 0x20] */ r_ebp = R32((u32)(r_ecx+0x20u));
    /* 0073b23b: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073b23d: je 0x73b26d */ if (fZ) goto L_0073b26d;
L_0073b23f:; BB(0x0073b23f);
    /* 0073b23f: mov ebp, dword ptr [edx + edi*8] */ r_ebp = R32((u32)(r_edx+r_edi*8));
    /* 0073b242: lea ecx, [edx + ebx] */ r_ecx = (u32)(r_edx+r_ebx);
    /* 0073b245: test ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073b24b: je 0x73b26d */ if (fZ) goto L_0073b26d;
L_0073b24d:; BB(0x0073b24d);
    /* 0073b24d: mov ebp, dword ptr [ecx + 4] */ r_ebp = R32((u32)(r_ecx+0x4u));
    /* 0073b250: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0073b252: jle 0x73b26d */ if ((fZ||fS!=fO)) goto L_0073b26d;
L_0073b254:; BB(0x0073b254);
    /* 0073b254: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0073b258: add ebp, -1 */ {  u32 a = r_ebp; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0073b25b: mov dword ptr [ecx + 4], ebp */ W32((u32)(r_ecx+0x4u), r_ebp);
    /* 0073b25e: mov esi, dword ptr [edx + 0xa0] */ r_esi = R32((u32)(r_edx+0xa0u));
    /* 0073b264: mov eax, dword ptr [edx + 0x28] */ r_eax = R32((u32)(r_edx+0x28u));
    /* 0073b267: mov edx, dword ptr [edx + 0x90] */ r_edx = R32((u32)(r_edx+0x90u));
L_0073b26d:; BB(0x0073b26d);
    /* 0073b26d: add ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0073b270: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0073b273: cmp edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0073b275: jb 0x73b235 */ if (fC) goto L_0073b235;
L_0073b277:; BB(0x0073b277);
    /* 0073b277: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 0073b27b: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
L_0073b27e:; BB(0x0073b27e);
    /* 0073b27e: mov ebx, dword ptr [ecx + 0x84] */ r_ebx = R32((u32)(r_ecx+0x84u));
    /* 0073b284: mov esi, dword ptr [eax + ebx*4] */ r_esi = R32((u32)(r_eax+r_ebx*4));
    /* 0073b287: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 0073b28a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0073b28c: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0073b28e: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0073b290: mov edx, dword ptr [esi + 0x20] */ r_edx = R32((u32)(r_esi+0x20u));
    /* 0073b293: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073b295: je 0x73b29e */ if (fZ) goto L_0073b29e;
L_0073b297:; BB(0x0073b297);
    /* 0073b297: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0073b29a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0073b29c: jle 0x73b2a5 */ if ((fZ||fS!=fO)) goto L_0073b2a5;
L_0073b29e:; BB(0x0073b29e);
    /* 0073b29e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0073b2a1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0073b2a2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0073b2a3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0073b2a4: ret  */ FN_RET(0x0073b208); r_esp += 4; return;
L_0073b2a5:; BB(0x0073b2a5);
    /* 0073b2a5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0073b2a7: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0073b2aa: je 0x73b29e */ if (fZ) goto L_0073b29e;
L_0073b2ac:; BB(0x0073b2ac);
    /* 0073b2ac: fld dword ptr [0x971c68] */ FPUSH(R_F32((u32)(0x971c68u)));
L_0073b2b2:; BB(0x0073b2b2);
    /* 0073b2b2: and edx, 0xfffffffb */ {  u32 a = r_edx; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0073b2b5: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 0073b2b7: fld dword ptr [esi + 0xc] */ FPUSH(R_F32((u32)(r_esi+0xcu)));
    /* 0073b2ba: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0073b2bc: fld dword ptr [ecx + 0x98] */ FPUSH(R_F32((u32)(r_ecx+0x98u)));
    /* 0073b2c2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0073b2c4: fadd dword ptr [esi + 0x14] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x14u));
    /* 0073b2c7: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0073b2c9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0073b2cb: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0073b2ce: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0073b2cf: jb 0x73b2d3 */ if (fC) goto L_0073b2d3;
L_0073b2d1:; BB(0x0073b2d1);
    /* 0073b2d1: fst st(1) */ ST(1) = ST(0);
L_0073b2d3:; BB(0x0073b2d3);
    /* 0073b2d3: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0073b2d5: cmp ebx, dword ptr [ecx + 0xa0] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ecx+0xa0u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0073b2db: fstp dword ptr [ecx + 0x98] */ W_F32((u32)(r_ecx+0x98u), ST(0)); FPOP();
    /* 0073b2e1: jl 0x73b2e5 */ if ((fS!=fO)) goto L_0073b2e5;
L_0073b2e3:; BB(0x0073b2e3);
    /* 0073b2e3: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_0073b2e5:; BB(0x0073b2e5);
    /* 0073b2e5: cmp ebx, dword ptr [ecx + 0x84] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ecx+0x84u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073b2eb: je 0x73b315 */ if (fZ) goto L_0073b315;
L_0073b2ed:; BB(0x0073b2ed);
    /* 0073b2ed: mov eax, dword ptr [ecx + 0x28] */ r_eax = R32((u32)(r_ecx+0x28u));
    /* 0073b2f0: mov esi, dword ptr [eax + ebx*4] */ r_esi = R32((u32)(r_eax+r_ebx*4));
    /* 0073b2f3: mov edx, dword ptr [esi + 0x20] */ r_edx = R32((u32)(r_esi+0x20u));
    /* 0073b2f6: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 0073b2f9: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0073b2fb: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0073b2fd: add eax, dword ptr [ecx + 0x90] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x90u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0073b303: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073b305: je 0x73b319 */ if (fZ) goto L_0073b319;
L_0073b307:; BB(0x0073b307);
    /* 0073b307: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0073b30a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0073b30c: jg 0x73b319 */ if ((!fZ&&fS==fO)) goto L_0073b319;
L_0073b30e:; BB(0x0073b30e);
    /* 0073b30e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0073b310: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0073b313: jne 0x73b2b2 */ if (!fZ) goto L_0073b2b2;
L_0073b315:; BB(0x0073b315);
    /* 0073b315: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0073b317: jmp 0x73b29e */ goto L_0073b29e;
L_0073b319:; BB(0x0073b319);
    /* 0073b319: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0073b31b: jmp 0x73b29e */ goto L_0073b29e;
L_0073b31d:; BB(0x0073b31d);
    /* 0073b31d: mov eax, dword ptr [ecx + 0x28] */ r_eax = R32((u32)(r_ecx+0x28u));
    /* 0073b320: mov edx, dword ptr [ecx + 0x90] */ r_edx = R32((u32)(r_ecx+0x90u));
    /* 0073b326: jmp 0x73b27e */ goto L_0073b27e;
}

void f_0073b32c(void) /* sub_73B32C */
{
    FN_ENTER(0x0073b32c);
    /* 0073b32c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0073b32d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0073b32f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0073b331: call 0x73b350 */ r_esp -= 4; W32(r_esp, 0x73b336u); f_0073b350();
    /* 0073b336: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0073b33a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073b33c: jne 0x73b342 */ if (!fZ) goto L_0073b342;
L_0073b33e:; BB(0x0073b33e);
    /* 0073b33e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0073b33f: ret 4 */ FN_RET(0x0073b32c); r_esp += 8; return;
L_0073b342:; BB(0x0073b342);
    /* 0073b342: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0073b343: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x73b348u); f_005c2f74();
    /* 0073b348: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0073b349: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0073b34a: ret 4 */ FN_RET(0x0073b32c); r_esp += 8; return;
}

void f_0073b350(void) /* sub_73B350 */
{
    FN_ENTER(0x0073b350);
    /* 0073b350: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0073b351: mov ebp, esp */ r_ebp = r_esp;
    /* 0073b353: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0073b355: push 0x8f1cc0 */ { u32 v = 0x8f1cc0u; r_esp -= 4; W32(r_esp, v); }
    /* 0073b35a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0073b360: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073b361: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0073b368: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0073b36b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0073b36e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0073b371: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0073b374: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0073b377: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0073b37a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0073b37d: mov dword ptr [ecx], 0xb40e40 */ W32((u32)(r_ecx), 0xb40e40u);
    /* 0073b383: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0073b38a: call 0x73a5a8 */ r_esp -= 4; W32(r_esp, 0x73b38fu); f_0073a5a8();
    /* 0073b38f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0073b392: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0073b399: mov esp, ebp */ r_esp = r_ebp;
    /* 0073b39b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073b39c: ret  */ FN_RET(0x0073b350); r_esp += 4; return;
}

void f_0073b3a0(void) /* sub_73B3A0 */
{
    FN_ENTER(0x0073b3a0);
    /* 0073b3a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0073b3a1: mov ebp, esp */ r_ebp = r_esp;
    /* 0073b3a3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0073b3a5: push 0x8f1ce8 */ { u32 v = 0x8f1ce8u; r_esp -= 4; W32(r_esp, v); }
    /* 0073b3aa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0073b3b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073b3b1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0073b3b8: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0073b3bb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0073b3be: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0073b3c1: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0073b3c4: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0073b3c7: call 0x73b1e0 */ r_esp -= 4; W32(r_esp, 0x73b3ccu); f_0073b1e0();
    /* 0073b3cc: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0073b3cf: mov edx, eax */ r_edx = r_eax;
    /* 0073b3d1: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0073b3d3: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 0073b3d6: or eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0073b3d9: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0073b3dc: mov dword ptr [edx + 0x10], eax */ W32((u32)(r_edx+0x10u), r_eax);
    /* 0073b3df: call 0x73b1e8 */ r_esp -= 4; W32(r_esp, 0x73b3e4u); f_0073b1e8();
    /* 0073b3e4: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0073b3eb: push 0xa4 */ { u32 v = 0xa4u; r_esp -= 4; W32(r_esp, v); }
    /* 0073b3f0: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x73b3f5u); f_005caba4();
    /* 0073b3f5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073b3f8: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0073b3fb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073b3fd: je 0x73b43f */ if (fZ) goto L_0073b43f;
L_0073b3ff:; BB(0x0073b3ff);
    /* 0073b3ff: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0073b406: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0073b40d: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0073b410: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0073b413: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0073b416: call 0x73b444 */ r_esp -= 4; W32(r_esp, 0x73b41bu); f_0073b444();
    /* 0073b41b: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0073b41e: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0073b425:; BB(0x0073b425);
    /* 0073b425: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0073b428: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 0073b42b: and edx, 0xffffffdf */ {  u32 a = r_edx; u32 b = 0xffffffdfu; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073b42e: mov dword ptr [ecx + 0x10], edx */ W32((u32)(r_ecx+0x10u), r_edx);
    /* 0073b431: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0073b434: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0073b43b: mov esp, ebp */ r_esp = r_ebp;
    /* 0073b43d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073b43e: ret  */ FN_RET(0x0073b3a0); r_esp += 4; return;
L_0073b43f:; BB(0x0073b43f);
    /* 0073b43f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0073b441: jmp 0x73b425 */ goto L_0073b425;
}

void f_0073b444(void) /* sub_73B444 */
{
    FN_ENTER(0x0073b444);
    /* 0073b444: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0073b445: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0073b447: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0073b44b: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0073b44d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0073b44f: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0073b453: call 0x73a610 */ r_esp -= 4; W32(r_esp, 0x73b458u); f_0073a610();
    /* 0073b458: mov dword ptr [ebx], 0xb40e40 */ W32((u32)(r_ebx), 0xb40e40u);
    /* 0073b45e: mov edx, dword ptr [0x9f327c] */ r_edx = R32((u32)(0x9f327cu));
    /* 0073b464: mov dword ptr [ebx + 4], edx */ W32((u32)(r_ebx+0x4u), r_edx);
    /* 0073b467: mov eax, ebx */ r_eax = r_ebx;
    /* 0073b469: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0073b46a: ret 8 */ FN_RET(0x0073b444); r_esp += 12; return;
}

void f_0073b470(void) /* sub_73B470 */
{
    FN_ENTER(0x0073b470);
    /* 0073b470: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0073b471: mov esi, ecx */ r_esi = r_ecx;
    /* 0073b473: mov ecx, esi */ r_ecx = r_esi;
    /* 0073b475: call 0x7108f4 */ r_esp -= 4; W32(r_esp, 0x73b47au); f_007108f4();
    /* 0073b47a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073b47b: lea edx, [esi + 0x24] */ r_edx = (u32)(r_esi+0x24u);
    /* 0073b47e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0073b47f: mov ecx, esi */ r_ecx = r_esi;
    /* 0073b481: call 0x72a648 */ r_esp -= 4; W32(r_esp, 0x73b486u); f_0072a648();
    /* 0073b486: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0073b487: ret  */ FN_RET(0x0073b470); r_esp += 4; return;
}

void f_0073b488(void) /* sub_73B488 */
{
    FN_ENTER(0x0073b488);
    /* 0073b488: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0073b489: fld dword ptr [ecx + 0x30] */ FPUSH(R_F32((u32)(r_ecx+0x30u)));
    /* 0073b48c: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 0073b490: fcomp dword ptr [edi] */ fx_compare(ST(0), R_F32((u32)(r_edi))); FPOP();
    /* 0073b492: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0073b494: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 0073b496: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0073b497: jne 0x73b4a4 */ if (!fZ) goto L_0073b4a4;
L_0073b499:; BB(0x0073b499);
    /* 0073b499: fld dword ptr [ecx + 0x34] */ FPUSH(R_F32((u32)(r_ecx+0x34u)));
    /* 0073b49c: fcomp dword ptr [edi + 4] */ fx_compare(ST(0), R_F32((u32)(r_edi+0x4u))); FPOP();
    /* 0073b49f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0073b4a1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0073b4a2: je 0x73b4b8 */ if (fZ) goto L_0073b4b8;
L_0073b4a4:; BB(0x0073b4a4);
    /* 0073b4a4: mov dword ptr [ecx + 0x30], edx */ W32((u32)(r_ecx+0x30u), r_edx);
    /* 0073b4a7: mov eax, dword ptr [edi + 4] */ r_eax = R32((u32)(r_edi+0x4u));
    /* 0073b4aa: mov dword ptr [ecx + 0x50], 3 */ W32((u32)(r_ecx+0x50u), 0x3u);
    /* 0073b4b1: mov dword ptr [ecx + 0x34], eax */ W32((u32)(r_ecx+0x34u), r_eax);
    /* 0073b4b4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0073b4b5: ret 4 */ FN_RET(0x0073b488); r_esp += 8; return;
L_0073b4b8:; BB(0x0073b4b8);
    /* 0073b4b8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0073b4b9: ret 4 */ FN_RET(0x0073b488); r_esp += 8; return;
}

void f_0073b4bc(void) /* sub_73B4BC */
{
    FN_ENTER(0x0073b4bc);
    /* 0073b4bc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0073b4bd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0073b4bf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0073b4c1: call 0x73b4e0 */ r_esp -= 4; W32(r_esp, 0x73b4c6u); f_0073b4e0();
    /* 0073b4c6: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0073b4ca: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073b4cc: jne 0x73b4d2 */ if (!fZ) goto L_0073b4d2;
L_0073b4ce:; BB(0x0073b4ce);
    /* 0073b4ce: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0073b4cf: ret 4 */ FN_RET(0x0073b4bc); r_esp += 8; return;
L_0073b4d2:; BB(0x0073b4d2);
    /* 0073b4d2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0073b4d3: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x73b4d8u); f_005c2f74();
    /* 0073b4d8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0073b4d9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0073b4da: ret 4 */ FN_RET(0x0073b4bc); r_esp += 8; return;
}

void f_0073b4e0(void) /* sub_73B4E0 */
{
    FN_ENTER(0x0073b4e0);
    /* 0073b4e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0073b4e1: mov ebp, esp */ r_ebp = r_esp;
    /* 0073b4e3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0073b4e5: push 0x8f1d04 */ { u32 v = 0x8f1d04u; r_esp -= 4; W32(r_esp, v); }
    /* 0073b4ea: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0073b4f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073b4f1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0073b4f8: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0073b4fb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0073b4fe: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0073b501: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0073b504: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0073b507: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0073b50a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0073b511: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0073b514: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 0073b517: mov dword ptr [eax], 0xb40ef8 */ W32((u32)(r_eax), 0xb40ef8u);
    /* 0073b51d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073b51f: je 0x73b528 */ if (fZ) goto L_0073b528;
L_0073b521:; BB(0x0073b521);
    /* 0073b521: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0073b523: call 0x721474 */ r_esp -= 4; W32(r_esp, 0x73b528u); f_00721474();
L_0073b528:; BB(0x0073b528);
    /* 0073b528: mov eax, dword ptr [0xa98478] */ r_eax = R32((u32)(0xa98478u));
    /* 0073b52d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073b52f: je 0x73b538 */ if (fZ) goto L_0073b538;
L_0073b531:; BB(0x0073b531);
    /* 0073b531: mov dword ptr [eax + 0x44], 0 */ W32((u32)(r_eax+0x44u), 0x0u);
L_0073b538:; BB(0x0073b538);
    /* 0073b538: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0073b53f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0073b542: call 0x73a5a8 */ r_esp -= 4; W32(r_esp, 0x73b547u); f_0073a5a8();
    /* 0073b547: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0073b54a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0073b551: mov esp, ebp */ r_esp = r_ebp;
    /* 0073b553: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073b554: ret  */ FN_RET(0x0073b4e0); r_esp += 4; return;
}

void f_0073b558(void) /* sub_73B558 */
{
    FN_ENTER(0x0073b558);
    /* 0073b558: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0073b559: mov eax, dword ptr [ecx + 0x9c] */ r_eax = R32((u32)(r_ecx+0x9cu));
    /* 0073b55f: lea edx, [eax - 1] */ r_edx = (u32)(r_eax+0xffffffffu);
    /* 0073b562: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0073b564: jge 0x73b56f */ if ((fS==fO)) goto L_0073b56f;
L_0073b566:; BB(0x0073b566);
    /* 0073b566: mov edx, dword ptr [ecx + 0xa0] */ r_edx = R32((u32)(r_ecx+0xa0u));
    /* 0073b56c: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
L_0073b56f:; BB(0x0073b56f);
    /* 0073b56f: fld dword ptr [0x971cf8] */ FPUSH(R_F32((u32)(0x971cf8u)));
    /* 0073b575: fadd dword ptr [ecx + 0x48] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x48u));
    /* 0073b578: mov esi, dword ptr [ecx + 0x28] */ r_esi = R32((u32)(r_ecx+0x28u));
    /* 0073b57b: mov eax, dword ptr [esi + eax*4] */ r_eax = R32((u32)(r_esi+r_eax*4));
    /* 0073b57e: mov edx, dword ptr [esi + edx*4] */ r_edx = R32((u32)(r_esi+r_edx*4));
    /* 0073b581: fld dword ptr [edx + 0xc] */ FPUSH(R_F32((u32)(r_edx+0xcu)));
    /* 0073b584: fsub dword ptr [eax + 0xc] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0xcu));
    /* 0073b587: fadd dword ptr [edx + 0x14] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x14u));
    /* 0073b58a: mov eax, dword ptr [ecx + 0x64] */ r_eax = R32((u32)(r_ecx+0x64u));
    /* 0073b58d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0073b58f: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
    /* 0073b591: fstp dword ptr [eax + 4] */ W_F32((u32)(r_eax+0x4u), ST(0)); FPOP();
    /* 0073b594: call 0x73b59c */ r_esp -= 4; W32(r_esp, 0x73b599u); f_0073b59c();
    /* 0073b599: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0073b59a: ret  */ FN_RET(0x0073b558); r_esp += 4; return;
}

void f_0073b59c(void) /* sub_73B59C */
{
    FN_ENTER(0x0073b59c);
    /* 0073b59c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0073b59d: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0073b5a0: mov esi, ecx */ r_esi = r_ecx;
    /* 0073b5a2: mov ecx, dword ptr [esi + 0x64] */ r_ecx = R32((u32)(r_esi+0x64u));
    /* 0073b5a5: fld dword ptr [0x971cf0] */ FPUSH(R_F32((u32)(0x971cf0u)));
    /* 0073b5ab: fadd dword ptr [esi + 0x4c] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x4cu));
    /* 0073b5ae: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0073b5b2: lea edx, [esi + 0x70] */ r_edx = (u32)(r_esi+0x70u);
    /* 0073b5b5: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 0073b5bc: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0073b5bf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073b5c0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0073b5c1: call 0x73f8a4 */ r_esp -= 4; W32(r_esp, 0x73b5c6u); f_0073f8a4();
    /* 0073b5c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073b5c8: jne 0x73b5cf */ if (!fZ) goto L_0073b5cf;
L_0073b5ca:; BB(0x0073b5ca);
    /* 0073b5ca: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0073b5cd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0073b5ce: ret  */ FN_RET(0x0073b59c); r_esp += 4; return;
L_0073b5cf:; BB(0x0073b5cf);
    /* 0073b5cf: mov eax, dword ptr [esi + 0x74] */ r_eax = R32((u32)(r_esi+0x74u));
    /* 0073b5d2: mov dword ptr [esi + 0x98], eax */ W32((u32)(r_esi+0x98u), r_eax);
    /* 0073b5d8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0073b5db: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0073b5dc: ret  */ FN_RET(0x0073b59c); r_esp += 4; return;
}

void f_0073b5e0(void) /* sub_73B5E0 */
{
    FN_ENTER(0x0073b5e0);
    /* 0073b5e0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0073b5e1: mov edi, ecx */ r_edi = r_ecx;
    /* 0073b5e3: mov eax, dword ptr [edi + 0x64] */ r_eax = R32((u32)(r_edi+0x64u));
    /* 0073b5e6: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0073b5e9: mov dword ptr [edi + 0x74], edx */ W32((u32)(r_edi+0x74u), r_edx);
    /* 0073b5ec: mov ecx, edi */ r_ecx = r_edi;
    /* 0073b5ee: call 0x73b59c */ r_esp -= 4; W32(r_esp, 0x73b5f3u); f_0073b59c();
    /* 0073b5f3: mov dword ptr [edi + 0xa4], 0 */ W32((u32)(r_edi+0xa4u), 0x0u);
    /* 0073b5fd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0073b5fe: ret  */ FN_RET(0x0073b5e0); r_esp += 4; return;
}

void f_0073b604(void) /* sub_73B604 */
{
    FN_ENTER(0x0073b604);
    /* 0073b604: movzx edx, word ptr [eax] */ r_edx = (u32)R16((u32)(r_eax));
    /* 0073b607: cmp edx, 9 */ {  u32 a = r_edx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0073b60a: je 0x73b612 */ if (fZ) goto L_0073b612;
L_0073b60c:; BB(0x0073b60c);
    /* 0073b60c: mov eax, 1 */ r_eax = 0x1u;
    /* 0073b611: ret  */ FN_RET(0x0073b604); r_esp += 4; return;
L_0073b612:; BB(0x0073b612);
    /* 0073b612: movzx eax, word ptr [eax + 2] */ r_eax = (u32)R16((u32)(r_eax+0x2u));
    /* 0073b616: cmp eax, 0x45 */ {  u32 a = r_eax; u32 b = 0x45u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073b619: je 0x73b626 */ if (fZ) goto L_0073b626;
L_0073b61b:; BB(0x0073b61b);
    /* 0073b61b: cmp eax, 0x4a */ {  u32 a = r_eax; u32 b = 0x4au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0073b61e: je 0x73b626 */ if (fZ) goto L_0073b626;
L_0073b620:; BB(0x0073b620);
    /* 0073b620: mov eax, 1 */ r_eax = 0x1u;
    /* 0073b625: ret  */ FN_RET(0x0073b604); r_esp += 4; return;
L_0073b626:; BB(0x0073b626);
    /* 0073b626: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073b628: ret  */ FN_RET(0x0073b604); r_esp += 4; return;
}

void f_0073b62c(void) /* sub_73B62C */
{
    FN_ENTER(0x0073b62c);
    /* 0073b62c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0073b62d: mov eax, 0x74 */ r_eax = 0x74u;
    /* 0073b632: mov ebx, eax */ r_ebx = r_eax;
L_0073b634:; BB(0x0073b634);
    /* 0073b634: mov edx, dword ptr [ebx + 0xa9a920] */ r_edx = R32((u32)(r_ebx+0xa9a920u));
    /* 0073b63a: add ebx, -4 */ {  u32 a = r_ebx; u32 b = 0xfffffffcu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0073b63d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073b63f: je 0x73b657 */ if (fZ) goto L_0073b657;
L_0073b641:; BB(0x0073b641);
    /* 0073b641: mov ecx, dword ptr [0xa9a9a8] */ r_ecx = R32((u32)(0xa9a9a8u));
    /* 0073b647: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0073b648: call 0x7a8b04 */ r_esp -= 4; W32(r_esp, 0x73b64du); f_007a8b04();
    /* 0073b64d: mov dword ptr [ebx + 0xa9a924], 0 */ W32((u32)(r_ebx+0xa9a924u), 0x0u);
L_0073b657:; BB(0x0073b657);
    /* 0073b657: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0073b659: jge 0x73b634 */ if ((fS==fO)) goto L_0073b634;
L_0073b65b:; BB(0x0073b65b);
    /* 0073b65b: mov eax, dword ptr [0xa9a9a4] */ r_eax = R32((u32)(0xa9a9a4u));
    /* 0073b660: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073b662: je 0x73b67a */ if (fZ) goto L_0073b67a;
L_0073b664:; BB(0x0073b664);
    /* 0073b664: mov ecx, dword ptr [0xa9a9a8] */ r_ecx = R32((u32)(0xa9a9a8u));
    /* 0073b66a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073b66b: call 0x7a8b04 */ r_esp -= 4; W32(r_esp, 0x73b670u); f_007a8b04();
    /* 0073b670: mov dword ptr [0xa9a9a4], 0 */ W32((u32)(0xa9a9a4u), 0x0u);
L_0073b67a:; BB(0x0073b67a);
    /* 0073b67a: mov ecx, dword ptr [0xa9a9a8] */ r_ecx = R32((u32)(0xa9a9a8u));
    /* 0073b680: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073b682: je 0x73b68b */ if (fZ) goto L_0073b68b;
L_0073b684:; BB(0x0073b684);
    /* 0073b684: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0073b686: call 0x508320 */ r_esp -= 4; W32(r_esp, 0x73b68bu); f_00508320();
L_0073b68b:; BB(0x0073b68b);
    /* 0073b68b: mov dword ptr [0xa9a9a8], 0 */ W32((u32)(0xa9a9a8u), 0x0u);
    /* 0073b695: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0073b696: ret  */ FN_RET(0x0073b62c); r_esp += 4; return;
}

void f_0073b698(void) /* sub_73B698 */
{
    FN_ENTER(0x0073b698);
    /* 0073b698: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0073b699: mov ebp, esp */ r_ebp = r_esp;
    /* 0073b69b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0073b69d: push 0x8f1d2c */ { u32 v = 0x8f1d2cu; r_esp -= 4; W32(r_esp, v); }
    /* 0073b6a2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0073b6a8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073b6a9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0073b6b0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0073b6b3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0073b6b6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0073b6b9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0073b6bc: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0073b6bf: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 0073b6c1: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0073b6c4: call 0x73b1e8 */ r_esp -= 4; W32(r_esp, 0x73b6c9u); f_0073b1e8();
    /* 0073b6c9: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0073b6d0: push 0xa8 */ { u32 v = 0xa8u; r_esp -= 4; W32(r_esp, v); }
    /* 0073b6d5: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x73b6dau); f_005caba4();
    /* 0073b6da: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073b6dd: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0073b6e0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073b6e2: je 0x73b718 */ if (fZ) goto L_0073b718;
L_0073b6e4:; BB(0x0073b6e4);
    /* 0073b6e4: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0073b6eb: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0073b6f2: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0073b6f5: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0073b6f8: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0073b6fb: call 0x73b71c */ r_esp -= 4; W32(r_esp, 0x73b700u); f_0073b71c();
    /* 0073b700: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0073b703: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0073b70a:; BB(0x0073b70a);
    /* 0073b70a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0073b70d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0073b714: mov esp, ebp */ r_esp = r_ebp;
    /* 0073b716: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073b717: ret  */ FN_RET(0x0073b698); r_esp += 4; return;
L_0073b718:; BB(0x0073b718);
    /* 0073b718: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073b71a: jmp 0x73b70a */ goto L_0073b70a;
}

void f_0073b71c(void) /* sub_73B71C */
{
    FN_ENTER(0x0073b71c);
    /* 0073b71c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0073b71d: mov ebp, esp */ r_ebp = r_esp;
    /* 0073b71f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0073b721: push 0x8f1d62 */ { u32 v = 0x8f1d62u; r_esp -= 4; W32(r_esp, v); }
    /* 0073b726: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0073b72c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073b72d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0073b734: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0073b737: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0073b73a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0073b73d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0073b740: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0073b743: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0073b746: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0073b749: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 0073b74b: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0073b74e: call 0x73a610 */ r_esp -= 4; W32(r_esp, 0x73b753u); f_0073a610();
    /* 0073b753: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0073b75a: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0073b75d: mov dword ptr [edx], 0xb40ef8 */ W32((u32)(r_edx), 0xb40ef8u);
    /* 0073b763: mov eax, dword ptr [0x9f3280] */ r_eax = R32((u32)(0x9f3280u));
    /* 0073b768: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0073b76b: mov eax, dword ptr [0xa98478] */ r_eax = R32((u32)(0xa98478u));
    /* 0073b770: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073b772: je 0x73b77a */ if (fZ) goto L_0073b77a;
L_0073b774:; BB(0x0073b774);
    /* 0073b774: mov dword ptr [eax + 0x44], edx */ W32((u32)(r_eax+0x44u), r_edx);
    /* 0073b777: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
L_0073b77a:; BB(0x0073b77a);
    /* 0073b77a: fld dword ptr [0x971ce8] */ FPUSH(R_F32((u32)(0x971ce8u)));
    /* 0073b780: fadd dword ptr [edx + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x38u));
    /* 0073b783: fstp dword ptr [ebp - 0x34] */ W_F32((u32)(r_ebp+0xffffffccu), ST(0)); FPOP();
    /* 0073b786: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0073b788: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0073b78f: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 0073b796: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x73b79bu); f_008581c5();
    /* 0073b79b: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0073b79e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073b7a1: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0073b7a4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073b7a6: je 0x73b84d */ if (fZ) goto L_0073b84d;
L_0073b7ac:; BB(0x0073b7ac);
    /* 0073b7ac: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 0073b7b3: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0073b7ba: mov ecx, eax */ r_ecx = r_eax;
    /* 0073b7bc: lea eax, [ebp - 0x34] */ r_eax = (u32)(r_ebp+0xffffffccu);
    /* 0073b7bf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073b7c0: call 0x73f670 */ r_esp -= 4; W32(r_esp, 0x73b7c5u); f_0073f670();
    /* 0073b7c5: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_0073b7cc:; BB(0x0073b7cc);
    /* 0073b7cc: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0073b7cf: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0073b7d2: mov dword ptr [ecx + 0x64], eax */ W32((u32)(r_ecx+0x64u), r_eax);
    /* 0073b7d5: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0073b7dc: mov eax, dword ptr [ecx + 0x2c] */ r_eax = R32((u32)(r_ecx+0x2cu));
    /* 0073b7df: mov dword ptr [ecx + 0xa4], 0 */ W32((u32)(r_ecx+0xa4u), 0x0u);
    /* 0073b7e9: or eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0073b7ee: mov dword ptr [ecx + 0x2c], eax */ W32((u32)(r_ecx+0x2cu), r_eax);
    /* 0073b7f1: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_0073b7f3:; BB(0x0073b7f3);
    /* 0073b7f3: mov eax, dword ptr [ebx*4 + 0xa9a920] */ r_eax = R32((u32)(r_ebx*4+0xa9a920u));
    /* 0073b7fa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073b7fc: je 0x73b81c */ if (fZ) goto L_0073b81c;
L_0073b7fe:; BB(0x0073b7fe);
    /* 0073b7fe: push 0x502 */ { u32 v = 0x502u; r_esp -= 4; W32(r_esp, v); }
    /* 0073b803: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073b804: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x73b809u); f_0073ae38();
    /* 0073b809: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0073b80c: call 0x73b558 */ r_esp -= 4; W32(r_esp, 0x73b811u); f_0073b558();
    /* 0073b811: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0073b814: call 0x73b5e0 */ r_esp -= 4; W32(r_esp, 0x73b819u); f_0073b5e0();
    /* 0073b819: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
L_0073b81c:; BB(0x0073b81c);
    /* 0073b81c: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0073b81f: cmp ebx, 0x1e */ {  u32 a = r_ebx; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0073b822: jl 0x73b7f3 */ if ((fS!=fO)) goto L_0073b7f3;
L_0073b824:; BB(0x0073b824);
    /* 0073b824: call 0x73b0f0 */ r_esp -= 4; W32(r_esp, 0x73b829u); f_0073b0f0();
    /* 0073b829: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0073b82c: call 0x73b59c */ r_esp -= 4; W32(r_esp, 0x73b831u); f_0073b59c();
    /* 0073b831: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0073b834: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0073b837: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0073b83a: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0073b83d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0073b840: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0073b847: mov esp, ebp */ r_esp = r_ebp;
    /* 0073b849: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073b84a: ret 8 */ FN_RET(0x0073b71c); r_esp += 12; return;
L_0073b84d:; BB(0x0073b84d);
    /* 0073b84d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0073b84f: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0073b852: jmp 0x73b7cc */ goto L_0073b7cc;
}

void f_0073b858(void) /* sub_73B858 */
{
    FN_ENTER(0x0073b858);
    /* 0073b858: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0073b859: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0073b85a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0073b85b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0073b85c: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0073b85f: movzx edi, word ptr [esp + 0x1c] */ r_edi = (u32)R16((u32)(r_esp+0x1cu));
    /* 0073b864: mov esi, dword ptr [esp + 0x20] */ r_esi = R32((u32)(r_esp+0x20u));
    /* 0073b868: cmp edi, dword ptr [0xa9c4f4] */ {  u32 a = r_edi; u32 b = R32((u32)(0xa9c4f4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073b86e: jne 0x73ba13 */ if (!fZ) goto L_0073ba13;
L_0073b874:; BB(0x0073b874);
    /* 0073b874: mov edx, dword ptr [0xa9a9a4] */ r_edx = R32((u32)(0xa9a9a4u));
    /* 0073b87a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073b87c: je 0x73b894 */ if (fZ) goto L_0073b894;
L_0073b87e:; BB(0x0073b87e);
    /* 0073b87e: mov ecx, dword ptr [0xa9a9a8] */ r_ecx = R32((u32)(0xa9a9a8u));
    /* 0073b884: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0073b885: call 0x7a8b04 */ r_esp -= 4; W32(r_esp, 0x73b88au); f_007a8b04();
    /* 0073b88a: mov dword ptr [0xa9a9a4], 0 */ W32((u32)(0xa9a9a4u), 0x0u);
L_0073b894:; BB(0x0073b894);
    /* 0073b894: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073b896: je 0x73ba13 */ if (fZ) goto L_0073ba13;
L_0073b89c:; BB(0x0073b89c);
    /* 0073b89c: mov eax, esi */ r_eax = r_esi;
    /* 0073b89e: call 0x73b604 */ r_esp -= 4; W32(r_esp, 0x73b8a3u); f_0073b604();
    /* 0073b8a3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0073b8a4: mov ebp, eax */ r_ebp = r_eax;
    /* 0073b8a6: call 0x858009 */ r_esp -= 4; W32(r_esp, 0x73b8abu); f_00858009();
    /* 0073b8ab: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0073b8ac: lea ebx, [eax + 1] */ r_ebx = (u32)(r_eax+0x1u);
    /* 0073b8af: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073b8b1: je 0x73b8b6 */ if (fZ) goto L_0073b8b6;
L_0073b8b3:; BB(0x0073b8b3);
    /* 0073b8b3: lea ebx, [eax + 3] */ r_ebx = (u32)(r_eax+0x3u);
L_0073b8b6:; BB(0x0073b8b6);
    /* 0073b8b6: mov ecx, dword ptr [0xa9a9a8] */ r_ecx = R32((u32)(0xa9a9a8u));
    /* 0073b8bc: lea edx, [ebx + ebx] */ r_edx = (u32)(r_ebx+r_ebx);
    /* 0073b8bf: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0073b8c3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0073b8c4: call 0x7a8a38 */ r_esp -= 4; W32(r_esp, 0x73b8c9u); f_007a8a38();
    /* 0073b8c9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073b8cb: jne 0x73b9d2 */ if (!fZ) goto L_0073b9d2;
L_0073b8d1:; BB(0x0073b8d1);
    /* 0073b8d1: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
L_0073b8d5:; BB(0x0073b8d5);
    /* 0073b8d5: mov edx, dword ptr [0xa9a920] */ r_edx = R32((u32)(0xa9a920u));
    /* 0073b8db: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073b8dd: je 0x73b9b9 */ if (fZ) goto L_0073b9b9;
L_0073b8e3:; BB(0x0073b8e3);
    /* 0073b8e3: mov ecx, dword ptr [0xa9a9a8] */ r_ecx = R32((u32)(0xa9a9a8u));
    /* 0073b8e9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0073b8ea: call 0x7a8b04 */ r_esp -= 4; W32(r_esp, 0x73b8efu); f_007a8b04();
    /* 0073b8ef: mov dword ptr [0xa9a920], 0 */ W32((u32)(0xa9a920u), 0x0u);
    /* 0073b8f9: mov ecx, 0xa9a920 */ r_ecx = 0xa9a920u;
    /* 0073b8fe: mov edx, 0xa9a924 */ r_edx = 0xa9a924u;
    /* 0073b903: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0073b905: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 0073b907: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0073b90a: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0073b90d: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0073b910: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 0073b913: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 0073b916: mov dword ptr [ecx + 0xc], eax */ W32((u32)(r_ecx+0xcu), r_eax);
    /* 0073b919: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 0073b91c: mov dword ptr [ecx + 0x10], eax */ W32((u32)(r_ecx+0x10u), r_eax);
    /* 0073b91f: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 0073b922: mov dword ptr [ecx + 0x14], eax */ W32((u32)(r_ecx+0x14u), r_eax);
    /* 0073b925: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 0073b928: mov dword ptr [ecx + 0x18], eax */ W32((u32)(r_ecx+0x18u), r_eax);
    /* 0073b92b: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0073b92e: mov dword ptr [ecx + 0x1c], eax */ W32((u32)(r_ecx+0x1cu), r_eax);
    /* 0073b931: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 0073b934: mov dword ptr [ecx + 0x20], eax */ W32((u32)(r_ecx+0x20u), r_eax);
    /* 0073b937: mov eax, dword ptr [edx + 0x24] */ r_eax = R32((u32)(r_edx+0x24u));
    /* 0073b93a: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 0073b93d: mov eax, dword ptr [edx + 0x28] */ r_eax = R32((u32)(r_edx+0x28u));
    /* 0073b940: mov dword ptr [ecx + 0x28], eax */ W32((u32)(r_ecx+0x28u), r_eax);
    /* 0073b943: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 0073b946: mov dword ptr [ecx + 0x2c], eax */ W32((u32)(r_ecx+0x2cu), r_eax);
    /* 0073b949: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 0073b94c: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 0073b94f: mov eax, dword ptr [edx + 0x34] */ r_eax = R32((u32)(r_edx+0x34u));
    /* 0073b952: mov dword ptr [ecx + 0x34], eax */ W32((u32)(r_ecx+0x34u), r_eax);
    /* 0073b955: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 0073b958: mov dword ptr [ecx + 0x38], eax */ W32((u32)(r_ecx+0x38u), r_eax);
    /* 0073b95b: mov eax, dword ptr [edx + 0x3c] */ r_eax = R32((u32)(r_edx+0x3cu));
    /* 0073b95e: mov dword ptr [ecx + 0x3c], eax */ W32((u32)(r_ecx+0x3cu), r_eax);
    /* 0073b961: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 0073b964: mov dword ptr [ecx + 0x40], eax */ W32((u32)(r_ecx+0x40u), r_eax);
    /* 0073b967: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0073b96a: mov dword ptr [ecx + 0x44], eax */ W32((u32)(r_ecx+0x44u), r_eax);
    /* 0073b96d: mov eax, dword ptr [edx + 0x48] */ r_eax = R32((u32)(r_edx+0x48u));
    /* 0073b970: mov dword ptr [ecx + 0x48], eax */ W32((u32)(r_ecx+0x48u), r_eax);
    /* 0073b973: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 0073b976: mov dword ptr [ecx + 0x4c], eax */ W32((u32)(r_ecx+0x4cu), r_eax);
    /* 0073b979: mov eax, dword ptr [edx + 0x50] */ r_eax = R32((u32)(r_edx+0x50u));
    /* 0073b97c: mov dword ptr [ecx + 0x50], eax */ W32((u32)(r_ecx+0x50u), r_eax);
    /* 0073b97f: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 0073b982: mov dword ptr [ecx + 0x54], eax */ W32((u32)(r_ecx+0x54u), r_eax);
    /* 0073b985: mov eax, dword ptr [edx + 0x58] */ r_eax = R32((u32)(r_edx+0x58u));
    /* 0073b988: mov dword ptr [ecx + 0x58], eax */ W32((u32)(r_ecx+0x58u), r_eax);
    /* 0073b98b: mov eax, dword ptr [edx + 0x5c] */ r_eax = R32((u32)(r_edx+0x5cu));
    /* 0073b98e: mov dword ptr [ecx + 0x5c], eax */ W32((u32)(r_ecx+0x5cu), r_eax);
    /* 0073b991: mov eax, dword ptr [edx + 0x60] */ r_eax = R32((u32)(r_edx+0x60u));
    /* 0073b994: mov dword ptr [ecx + 0x60], eax */ W32((u32)(r_ecx+0x60u), r_eax);
    /* 0073b997: mov eax, dword ptr [edx + 0x64] */ r_eax = R32((u32)(r_edx+0x64u));
    /* 0073b99a: mov dword ptr [ecx + 0x64], eax */ W32((u32)(r_ecx+0x64u), r_eax);
    /* 0073b99d: mov eax, dword ptr [edx + 0x68] */ r_eax = R32((u32)(r_edx+0x68u));
    /* 0073b9a0: mov dword ptr [ecx + 0x68], eax */ W32((u32)(r_ecx+0x68u), r_eax);
    /* 0073b9a3: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0073b9a6: mov edx, dword ptr [edx + 0x70] */ r_edx = R32((u32)(r_edx+0x70u));
    /* 0073b9a9: mov dword ptr [ecx + 0x6c], eax */ W32((u32)(r_ecx+0x6cu), r_eax);
    /* 0073b9ac: mov dword ptr [ecx + 0x70], edx */ W32((u32)(r_ecx+0x70u), r_edx);
    /* 0073b9af: mov dword ptr [0xa9a994], 0 */ W32((u32)(0xa9a994u), 0x0u);
L_0073b9b9:; BB(0x0073b9b9);
    /* 0073b9b9: mov ecx, dword ptr [0xa9a9a8] */ r_ecx = R32((u32)(0xa9a9a8u));
    /* 0073b9bf: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0073b9c0: call 0x7a8a38 */ r_esp -= 4; W32(r_esp, 0x73b9c5u); f_007a8a38();
    /* 0073b9c5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073b9c7: je 0x73b8d5 */ if (fZ) goto L_0073b8d5;
L_0073b9cd:; BB(0x0073b9cd);
    /* 0073b9cd: movzx edi, word ptr [esp + 0x1c] */ r_edi = (u32)R16((u32)(r_esp+0x1cu));
L_0073b9d2:; BB(0x0073b9d2);
    /* 0073b9d2: mov dword ptr [0xa9a9a4], eax */ W32((u32)(0xa9a9a4u), r_eax);
    /* 0073b9d7: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073b9d9: je 0x73ba08 */ if (fZ) goto L_0073ba08;
L_0073b9db:; BB(0x0073b9db);
    /* 0073b9db: mov edx, 9 */ r_edx = 0x9u;
    /* 0073b9e0: mov word ptr [eax], dx */ W16((u32)(r_eax), (u16)r_edx);
    /* 0073b9e3: mov ecx, dword ptr [0xa9cd44] */ r_ecx = R32((u32)(0xa9cd44u));
    /* 0073b9e9: lea edx, [eax + 2] */ r_edx = (u32)(r_eax+0x2u);
    /* 0073b9ec: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0073b9ef: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073b9f1: jne 0x73b9fd */ if (!fZ) goto L_0073b9fd;
L_0073b9f3:; BB(0x0073b9f3);
    /* 0073b9f3: mov ecx, 0x4a */ r_ecx = 0x4au;
    /* 0073b9f8: mov word ptr [edx], cx */ W16((u32)(r_edx), (u16)r_ecx);
    /* 0073b9fb: jmp 0x73ba05 */ goto L_0073ba05;
L_0073b9fd:; BB(0x0073b9fd);
    /* 0073b9fd: mov ecx, 0x45 */ r_ecx = 0x45u;
    /* 0073ba02: mov word ptr [edx], cx */ W16((u32)(r_edx), (u16)r_ecx);
L_0073ba05:; BB(0x0073ba05);
    /* 0073ba05: add ebx, -2 */ {  u32 a = r_ebx; u32 b = 0xfffffffeu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_0073ba08:; BB(0x0073ba08);
    /* 0073ba08: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0073ba09: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0073ba0a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073ba0b: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x73ba10u); f_00857dec();
    /* 0073ba10: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0073ba13:; BB(0x0073ba13);
    /* 0073ba13: mov eax, edi */ r_eax = r_edi;
    /* 0073ba15: call 0x73c1fd */ r_esp -= 4; W32(r_esp, 0x73ba1au); f_0073c1fd();
    /* 0073ba1a: mov ebx, eax */ r_ebx = r_eax;
    /* 0073ba1c: call 0x816d30 */ r_esp -= 4; W32(r_esp, 0x73ba21u); f_00816d30();
    /* 0073ba21: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073ba23: je 0x73ba41 */ if (fZ) goto L_0073ba41;
L_0073ba25:; BB(0x0073ba25);
    /* 0073ba25: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0073ba26: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x73ba2bu); f_00816cb8();
    /* 0073ba2b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0073ba2c: call 0x816994 */ r_esp -= 4; W32(r_esp, 0x73ba31u); f_00816994();
    /* 0073ba31: push 0x971cfc */ { u32 v = 0x971cfcu; r_esp -= 4; W32(r_esp, v); }
    /* 0073ba36: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x73ba3bu); f_00816cb8();
    /* 0073ba3b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0073ba3c: call 0x816994 */ r_esp -= 4; W32(r_esp, 0x73ba41u); f_00816994();
L_0073ba41:; BB(0x0073ba41);
    /* 0073ba41: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0073ba42: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x73ba47u); f_00816cb8();
    /* 0073ba47: mov eax, 0xac9d80 */ r_eax = 0xac9d80u;
    /* 0073ba4c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073ba4d: call 0x858009 */ r_esp -= 4; W32(r_esp, 0x73ba52u); f_00858009();
    /* 0073ba52: mov esi, eax */ r_esi = r_eax;
    /* 0073ba54: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073ba57: mov edx, dword ptr [0xa9a920] */ r_edx = R32((u32)(0xa9a920u));
    /* 0073ba5d: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0073ba5f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073ba61: je 0x73bd77 */ if (fZ) goto L_0073bd77;
L_0073ba67:; BB(0x0073ba67);
    /* 0073ba67: mov edx, dword ptr [0xa9a924] */ r_edx = R32((u32)(0xa9a924u));
    /* 0073ba6d: mov edi, 1 */ r_edi = 0x1u;
    /* 0073ba72: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073ba74: je 0x73bd77 */ if (fZ) goto L_0073bd77;
L_0073ba7a:; BB(0x0073ba7a);
    /* 0073ba7a: mov edx, dword ptr [0xa9a928] */ r_edx = R32((u32)(0xa9a928u));
    /* 0073ba80: mov edi, 2 */ r_edi = 0x2u;
    /* 0073ba85: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073ba87: je 0x73bd77 */ if (fZ) goto L_0073bd77;
L_0073ba8d:; BB(0x0073ba8d);
    /* 0073ba8d: mov edx, dword ptr [0xa9a92c] */ r_edx = R32((u32)(0xa9a92cu));
    /* 0073ba93: mov edi, 3 */ r_edi = 0x3u;
    /* 0073ba98: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073ba9a: je 0x73bd77 */ if (fZ) goto L_0073bd77;
L_0073baa0:; BB(0x0073baa0);
    /* 0073baa0: mov edx, dword ptr [0xa9a930] */ r_edx = R32((u32)(0xa9a930u));
    /* 0073baa6: mov edi, 4 */ r_edi = 0x4u;
    /* 0073baab: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073baad: je 0x73bd77 */ if (fZ) goto L_0073bd77;
L_0073bab3:; BB(0x0073bab3);
    /* 0073bab3: mov edx, dword ptr [0xa9a934] */ r_edx = R32((u32)(0xa9a934u));
    /* 0073bab9: mov edi, 5 */ r_edi = 0x5u;
    /* 0073babe: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073bac0: je 0x73bd77 */ if (fZ) goto L_0073bd77;
L_0073bac6:; BB(0x0073bac6);
    /* 0073bac6: mov edx, dword ptr [0xa9a938] */ r_edx = R32((u32)(0xa9a938u));
    /* 0073bacc: mov edi, 6 */ r_edi = 0x6u;
    /* 0073bad1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073bad3: je 0x73bd77 */ if (fZ) goto L_0073bd77;
L_0073bad9:; BB(0x0073bad9);
    /* 0073bad9: mov edx, dword ptr [0xa9a93c] */ r_edx = R32((u32)(0xa9a93cu));
    /* 0073badf: mov edi, 7 */ r_edi = 0x7u;
    /* 0073bae4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073bae6: je 0x73bd77 */ if (fZ) goto L_0073bd77;
L_0073baec:; BB(0x0073baec);
    /* 0073baec: mov edx, dword ptr [0xa9a940] */ r_edx = R32((u32)(0xa9a940u));
    /* 0073baf2: mov edi, 8 */ r_edi = 0x8u;
    /* 0073baf7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073baf9: je 0x73bd77 */ if (fZ) goto L_0073bd77;
L_0073baff:; BB(0x0073baff);
    /* 0073baff: mov edx, dword ptr [0xa9a944] */ r_edx = R32((u32)(0xa9a944u));
    /* 0073bb05: mov edi, 9 */ r_edi = 0x9u;
    /* 0073bb0a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073bb0c: je 0x73bd77 */ if (fZ) goto L_0073bd77;
L_0073bb12:; BB(0x0073bb12);
    /* 0073bb12: mov edx, dword ptr [0xa9a948] */ r_edx = R32((u32)(0xa9a948u));
    /* 0073bb18: mov edi, 0xa */ r_edi = 0xau;
    /* 0073bb1d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073bb1f: je 0x73bd77 */ if (fZ) goto L_0073bd77;
L_0073bb25:; BB(0x0073bb25);
    /* 0073bb25: mov edx, dword ptr [0xa9a94c] */ r_edx = R32((u32)(0xa9a94cu));
    /* 0073bb2b: mov edi, 0xb */ r_edi = 0xbu;
    /* 0073bb30: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073bb32: je 0x73bd77 */ if (fZ) goto L_0073bd77;
L_0073bb38:; BB(0x0073bb38);
    /* 0073bb38: mov edx, dword ptr [0xa9a950] */ r_edx = R32((u32)(0xa9a950u));
    /* 0073bb3e: mov edi, 0xc */ r_edi = 0xcu;
    /* 0073bb43: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073bb45: je 0x73bd77 */ if (fZ) goto L_0073bd77;
L_0073bb4b:; BB(0x0073bb4b);
    /* 0073bb4b: mov edx, dword ptr [0xa9a954] */ r_edx = R32((u32)(0xa9a954u));
    /* 0073bb51: mov edi, 0xd */ r_edi = 0xdu;
    /* 0073bb56: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073bb58: je 0x73bd77 */ if (fZ) goto L_0073bd77;
L_0073bb5e:; BB(0x0073bb5e);
    /* 0073bb5e: mov edx, dword ptr [0xa9a958] */ r_edx = R32((u32)(0xa9a958u));
    /* 0073bb64: mov edi, 0xe */ r_edi = 0xeu;
    /* 0073bb69: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073bb6b: je 0x73bd77 */ if (fZ) goto L_0073bd77;
L_0073bb71:; BB(0x0073bb71);
    /* 0073bb71: mov edx, dword ptr [0xa9a95c] */ r_edx = R32((u32)(0xa9a95cu));
    /* 0073bb77: mov edi, 0xf */ r_edi = 0xfu;
    /* 0073bb7c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073bb7e: je 0x73bd77 */ if (fZ) goto L_0073bd77;
L_0073bb84:; BB(0x0073bb84);
    /* 0073bb84: mov edx, dword ptr [0xa9a960] */ r_edx = R32((u32)(0xa9a960u));
    /* 0073bb8a: mov edi, 0x10 */ r_edi = 0x10u;
    /* 0073bb8f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073bb91: je 0x73bd77 */ if (fZ) goto L_0073bd77;
L_0073bb97:; BB(0x0073bb97);
    /* 0073bb97: mov edx, dword ptr [0xa9a964] */ r_edx = R32((u32)(0xa9a964u));
    /* 0073bb9d: mov edi, 0x11 */ r_edi = 0x11u;
    /* 0073bba2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073bba4: je 0x73bd77 */ if (fZ) goto L_0073bd77;
L_0073bbaa:; BB(0x0073bbaa);
    /* 0073bbaa: mov edx, dword ptr [0xa9a968] */ r_edx = R32((u32)(0xa9a968u));
    /* 0073bbb0: mov edi, 0x12 */ r_edi = 0x12u;
    /* 0073bbb5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073bbb7: je 0x73bd77 */ if (fZ) goto L_0073bd77;
L_0073bbbd:; BB(0x0073bbbd);
    /* 0073bbbd: mov edx, dword ptr [0xa9a96c] */ r_edx = R32((u32)(0xa9a96cu));
    /* 0073bbc3: mov edi, 0x13 */ r_edi = 0x13u;
    /* 0073bbc8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073bbca: je 0x73bd77 */ if (fZ) goto L_0073bd77;
L_0073bbd0:; BB(0x0073bbd0);
    /* 0073bbd0: mov edx, dword ptr [0xa9a970] */ r_edx = R32((u32)(0xa9a970u));
    /* 0073bbd6: mov edi, 0x14 */ r_edi = 0x14u;
    /* 0073bbdb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073bbdd: je 0x73bd77 */ if (fZ) goto L_0073bd77;
L_0073bbe3:; BB(0x0073bbe3);
    /* 0073bbe3: mov edx, dword ptr [0xa9a974] */ r_edx = R32((u32)(0xa9a974u));
    /* 0073bbe9: mov edi, 0x15 */ r_edi = 0x15u;
    /* 0073bbee: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073bbf0: je 0x73bd77 */ if (fZ) goto L_0073bd77;
L_0073bbf6:; BB(0x0073bbf6);
    /* 0073bbf6: mov edx, dword ptr [0xa9a978] */ r_edx = R32((u32)(0xa9a978u));
    /* 0073bbfc: mov edi, 0x16 */ r_edi = 0x16u;
    /* 0073bc01: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073bc03: je 0x73bd77 */ if (fZ) goto L_0073bd77;
L_0073bc09:; BB(0x0073bc09);
    /* 0073bc09: mov edx, dword ptr [0xa9a97c] */ r_edx = R32((u32)(0xa9a97cu));
    /* 0073bc0f: mov edi, 0x17 */ r_edi = 0x17u;
    /* 0073bc14: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073bc16: je 0x73bd77 */ if (fZ) goto L_0073bd77;
L_0073bc1c:; BB(0x0073bc1c);
    /* 0073bc1c: mov edx, dword ptr [0xa9a980] */ r_edx = R32((u32)(0xa9a980u));
    /* 0073bc22: mov edi, 0x18 */ r_edi = 0x18u;
    /* 0073bc27: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073bc29: je 0x73bd77 */ if (fZ) goto L_0073bd77;
L_0073bc2f:; BB(0x0073bc2f);
    /* 0073bc2f: mov edx, dword ptr [0xa9a984] */ r_edx = R32((u32)(0xa9a984u));
    /* 0073bc35: mov edi, 0x19 */ r_edi = 0x19u;
    /* 0073bc3a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073bc3c: je 0x73bd77 */ if (fZ) goto L_0073bd77;
L_0073bc42:; BB(0x0073bc42);
    /* 0073bc42: mov edx, dword ptr [0xa9a988] */ r_edx = R32((u32)(0xa9a988u));
    /* 0073bc48: mov edi, 0x1a */ r_edi = 0x1au;
    /* 0073bc4d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073bc4f: je 0x73bd77 */ if (fZ) goto L_0073bd77;
L_0073bc55:; BB(0x0073bc55);
    /* 0073bc55: mov edx, dword ptr [0xa9a98c] */ r_edx = R32((u32)(0xa9a98cu));
    /* 0073bc5b: mov edi, 0x1b */ r_edi = 0x1bu;
    /* 0073bc60: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073bc62: je 0x73bd77 */ if (fZ) goto L_0073bd77;
L_0073bc68:; BB(0x0073bc68);
    /* 0073bc68: mov edx, dword ptr [0xa9a990] */ r_edx = R32((u32)(0xa9a990u));
    /* 0073bc6e: mov edi, 0x1c */ r_edi = 0x1cu;
    /* 0073bc73: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073bc75: je 0x73bd77 */ if (fZ) goto L_0073bd77;
L_0073bc7b:; BB(0x0073bc7b);
    /* 0073bc7b: mov edx, dword ptr [0xa9a994] */ r_edx = R32((u32)(0xa9a994u));
    /* 0073bc81: mov edi, 0x1d */ r_edi = 0x1du;
    /* 0073bc86: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073bc88: je 0x73bd77 */ if (fZ) goto L_0073bd77;
L_0073bc8e:; BB(0x0073bc8e);
    /* 0073bc8e: mov edx, dword ptr [0xa9a920] */ r_edx = R32((u32)(0xa9a920u));
    /* 0073bc94: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073bc96: je 0x73bd72 */ if (fZ) goto L_0073bd72;
L_0073bc9c:; BB(0x0073bc9c);
    /* 0073bc9c: mov ecx, dword ptr [0xa9a9a8] */ r_ecx = R32((u32)(0xa9a9a8u));
    /* 0073bca2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0073bca3: call 0x7a8b04 */ r_esp -= 4; W32(r_esp, 0x73bca8u); f_007a8b04();
    /* 0073bca8: mov dword ptr [0xa9a920], 0 */ W32((u32)(0xa9a920u), 0x0u);
    /* 0073bcb2: mov edx, 0xa9a920 */ r_edx = 0xa9a920u;
    /* 0073bcb7: mov eax, 0xa9a924 */ r_eax = 0xa9a924u;
    /* 0073bcbc: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0073bcbe: mov ebx, dword ptr [eax + 4] */ r_ebx = R32((u32)(r_eax+0x4u));
    /* 0073bcc1: mov ebp, dword ptr [eax + 8] */ r_ebp = R32((u32)(r_eax+0x8u));
    /* 0073bcc4: mov edi, dword ptr [eax + 0xc] */ r_edi = R32((u32)(r_eax+0xcu));
    /* 0073bcc7: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 0073bcc9: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 0073bccc: mov dword ptr [edx + 4], ebx */ W32((u32)(r_edx+0x4u), r_ebx);
    /* 0073bccf: mov dword ptr [edx + 8], ebp */ W32((u32)(r_edx+0x8u), r_ebp);
    /* 0073bcd2: mov dword ptr [edx + 0xc], edi */ W32((u32)(r_edx+0xcu), r_edi);
    /* 0073bcd5: mov dword ptr [edx + 0x10], ecx */ W32((u32)(r_edx+0x10u), r_ecx);
    /* 0073bcd8: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 0073bcdb: mov dword ptr [edx + 0x14], ecx */ W32((u32)(r_edx+0x14u), r_ecx);
    /* 0073bcde: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 0073bce1: mov dword ptr [edx + 0x18], ecx */ W32((u32)(r_edx+0x18u), r_ecx);
    /* 0073bce4: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 0073bce7: mov dword ptr [edx + 0x1c], ecx */ W32((u32)(r_edx+0x1cu), r_ecx);
    /* 0073bcea: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 0073bced: mov dword ptr [edx + 0x20], ecx */ W32((u32)(r_edx+0x20u), r_ecx);
    /* 0073bcf0: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 0073bcf3: mov dword ptr [edx + 0x24], ecx */ W32((u32)(r_edx+0x24u), r_ecx);
    /* 0073bcf6: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 0073bcf9: mov dword ptr [edx + 0x28], ecx */ W32((u32)(r_edx+0x28u), r_ecx);
    /* 0073bcfc: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 0073bcff: mov dword ptr [edx + 0x2c], ecx */ W32((u32)(r_edx+0x2cu), r_ecx);
    /* 0073bd02: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 0073bd05: mov dword ptr [edx + 0x30], ecx */ W32((u32)(r_edx+0x30u), r_ecx);
    /* 0073bd08: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 0073bd0b: mov dword ptr [edx + 0x34], ecx */ W32((u32)(r_edx+0x34u), r_ecx);
    /* 0073bd0e: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 0073bd11: mov dword ptr [edx + 0x38], ecx */ W32((u32)(r_edx+0x38u), r_ecx);
    /* 0073bd14: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 0073bd17: mov dword ptr [edx + 0x3c], ecx */ W32((u32)(r_edx+0x3cu), r_ecx);
    /* 0073bd1a: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 0073bd1d: mov dword ptr [edx + 0x40], ecx */ W32((u32)(r_edx+0x40u), r_ecx);
    /* 0073bd20: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 0073bd23: mov dword ptr [edx + 0x44], ecx */ W32((u32)(r_edx+0x44u), r_ecx);
    /* 0073bd26: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 0073bd29: mov dword ptr [edx + 0x48], ecx */ W32((u32)(r_edx+0x48u), r_ecx);
    /* 0073bd2c: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 0073bd2f: mov dword ptr [edx + 0x4c], ecx */ W32((u32)(r_edx+0x4cu), r_ecx);
    /* 0073bd32: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 0073bd35: mov dword ptr [edx + 0x50], ecx */ W32((u32)(r_edx+0x50u), r_ecx);
    /* 0073bd38: mov ecx, dword ptr [eax + 0x54] */ r_ecx = R32((u32)(r_eax+0x54u));
    /* 0073bd3b: mov dword ptr [edx + 0x54], ecx */ W32((u32)(r_edx+0x54u), r_ecx);
    /* 0073bd3e: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 0073bd41: mov dword ptr [edx + 0x58], ecx */ W32((u32)(r_edx+0x58u), r_ecx);
    /* 0073bd44: mov ecx, dword ptr [eax + 0x5c] */ r_ecx = R32((u32)(r_eax+0x5cu));
    /* 0073bd47: mov dword ptr [edx + 0x5c], ecx */ W32((u32)(r_edx+0x5cu), r_ecx);
    /* 0073bd4a: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 0073bd4d: mov dword ptr [edx + 0x60], ecx */ W32((u32)(r_edx+0x60u), r_ecx);
    /* 0073bd50: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 0073bd53: mov dword ptr [edx + 0x64], ecx */ W32((u32)(r_edx+0x64u), r_ecx);
    /* 0073bd56: mov ecx, dword ptr [eax + 0x68] */ r_ecx = R32((u32)(r_eax+0x68u));
    /* 0073bd59: mov dword ptr [edx + 0x68], ecx */ W32((u32)(r_edx+0x68u), r_ecx);
    /* 0073bd5c: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 0073bd5f: mov dword ptr [edx + 0x6c], ecx */ W32((u32)(r_edx+0x6cu), r_ecx);
    /* 0073bd62: mov ecx, dword ptr [eax + 0x70] */ r_ecx = R32((u32)(r_eax+0x70u));
    /* 0073bd65: mov dword ptr [edx + 0x70], ecx */ W32((u32)(r_edx+0x70u), r_ecx);
    /* 0073bd68: mov dword ptr [0xa9a994], 0 */ W32((u32)(0xa9a994u), 0x0u);
L_0073bd72:; BB(0x0073bd72);
    /* 0073bd72: mov edi, 0x1d */ r_edi = 0x1du;
L_0073bd77:; BB(0x0073bd77);
    /* 0073bd77: mov ecx, dword ptr [0xa9a9a8] */ r_ecx = R32((u32)(0xa9a9a8u));
    /* 0073bd7d: lea ebp, [esi + esi + 2] */ r_ebp = (u32)(r_esi+r_esi+0x2u);
    /* 0073bd81: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0073bd82: call 0x7a8a38 */ r_esp -= 4; W32(r_esp, 0x73bd87u); f_007a8a38();
    /* 0073bd87: mov ebx, eax */ r_ebx = r_eax;
    /* 0073bd89: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073bd8b: jne 0x73c1ab */ if (!fZ) goto L_0073c1ab;
L_0073bd91:; BB(0x0073bd91);
    /* 0073bd91: mov edx, dword ptr [0xa9a920] */ r_edx = R32((u32)(0xa9a920u));
    /* 0073bd97: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073bd99: je 0x73be75 */ if (fZ) goto L_0073be75;
L_0073bd9f:; BB(0x0073bd9f);
    /* 0073bd9f: mov ecx, dword ptr [0xa9a9a8] */ r_ecx = R32((u32)(0xa9a9a8u));
    /* 0073bda5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0073bda6: call 0x7a8b04 */ r_esp -= 4; W32(r_esp, 0x73bdabu); f_007a8b04();
    /* 0073bdab: mov dword ptr [0xa9a920], 0 */ W32((u32)(0xa9a920u), 0x0u);
    /* 0073bdb5: mov edx, 0xa9a920 */ r_edx = 0xa9a920u;
    /* 0073bdba: mov eax, 0xa9a924 */ r_eax = 0xa9a924u;
    /* 0073bdbf: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0073bdc1: mov ebx, dword ptr [eax + 4] */ r_ebx = R32((u32)(r_eax+0x4u));
    /* 0073bdc4: mov edi, dword ptr [eax + 8] */ r_edi = R32((u32)(r_eax+0x8u));
    /* 0073bdc7: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 0073bdc9: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 0073bdcc: mov dword ptr [edx + 4], ebx */ W32((u32)(r_edx+0x4u), r_ebx);
    /* 0073bdcf: mov dword ptr [edx + 8], edi */ W32((u32)(r_edx+0x8u), r_edi);
    /* 0073bdd2: mov dword ptr [edx + 0xc], ecx */ W32((u32)(r_edx+0xcu), r_ecx);
    /* 0073bdd5: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 0073bdd8: mov dword ptr [edx + 0x10], ecx */ W32((u32)(r_edx+0x10u), r_ecx);
    /* 0073bddb: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 0073bdde: mov dword ptr [edx + 0x14], ecx */ W32((u32)(r_edx+0x14u), r_ecx);
    /* 0073bde1: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 0073bde4: mov dword ptr [edx + 0x18], ecx */ W32((u32)(r_edx+0x18u), r_ecx);
    /* 0073bde7: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 0073bdea: mov dword ptr [edx + 0x1c], ecx */ W32((u32)(r_edx+0x1cu), r_ecx);
    /* 0073bded: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 0073bdf0: mov dword ptr [edx + 0x20], ecx */ W32((u32)(r_edx+0x20u), r_ecx);
    /* 0073bdf3: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 0073bdf6: mov dword ptr [edx + 0x24], ecx */ W32((u32)(r_edx+0x24u), r_ecx);
    /* 0073bdf9: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 0073bdfc: mov dword ptr [edx + 0x28], ecx */ W32((u32)(r_edx+0x28u), r_ecx);
    /* 0073bdff: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 0073be02: mov dword ptr [edx + 0x2c], ecx */ W32((u32)(r_edx+0x2cu), r_ecx);
    /* 0073be05: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 0073be08: mov dword ptr [edx + 0x30], ecx */ W32((u32)(r_edx+0x30u), r_ecx);
    /* 0073be0b: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 0073be0e: mov dword ptr [edx + 0x34], ecx */ W32((u32)(r_edx+0x34u), r_ecx);
    /* 0073be11: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 0073be14: mov dword ptr [edx + 0x38], ecx */ W32((u32)(r_edx+0x38u), r_ecx);
    /* 0073be17: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 0073be1a: mov dword ptr [edx + 0x3c], ecx */ W32((u32)(r_edx+0x3cu), r_ecx);
    /* 0073be1d: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 0073be20: mov dword ptr [edx + 0x40], ecx */ W32((u32)(r_edx+0x40u), r_ecx);
    /* 0073be23: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 0073be26: mov dword ptr [edx + 0x44], ecx */ W32((u32)(r_edx+0x44u), r_ecx);
    /* 0073be29: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 0073be2c: mov dword ptr [edx + 0x48], ecx */ W32((u32)(r_edx+0x48u), r_ecx);
    /* 0073be2f: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 0073be32: mov dword ptr [edx + 0x4c], ecx */ W32((u32)(r_edx+0x4cu), r_ecx);
    /* 0073be35: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 0073be38: mov dword ptr [edx + 0x50], ecx */ W32((u32)(r_edx+0x50u), r_ecx);
    /* 0073be3b: mov ecx, dword ptr [eax + 0x54] */ r_ecx = R32((u32)(r_eax+0x54u));
    /* 0073be3e: mov dword ptr [edx + 0x54], ecx */ W32((u32)(r_edx+0x54u), r_ecx);
    /* 0073be41: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 0073be44: mov dword ptr [edx + 0x58], ecx */ W32((u32)(r_edx+0x58u), r_ecx);
    /* 0073be47: mov ecx, dword ptr [eax + 0x5c] */ r_ecx = R32((u32)(r_eax+0x5cu));
    /* 0073be4a: mov dword ptr [edx + 0x5c], ecx */ W32((u32)(r_edx+0x5cu), r_ecx);
    /* 0073be4d: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 0073be50: mov dword ptr [edx + 0x60], ecx */ W32((u32)(r_edx+0x60u), r_ecx);
    /* 0073be53: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 0073be56: mov dword ptr [edx + 0x64], ecx */ W32((u32)(r_edx+0x64u), r_ecx);
    /* 0073be59: mov ecx, dword ptr [eax + 0x68] */ r_ecx = R32((u32)(r_eax+0x68u));
    /* 0073be5c: mov dword ptr [edx + 0x68], ecx */ W32((u32)(r_edx+0x68u), r_ecx);
    /* 0073be5f: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 0073be62: mov dword ptr [edx + 0x6c], ecx */ W32((u32)(r_edx+0x6cu), r_ecx);
    /* 0073be65: mov ecx, dword ptr [eax + 0x70] */ r_ecx = R32((u32)(r_eax+0x70u));
    /* 0073be68: mov dword ptr [edx + 0x70], ecx */ W32((u32)(r_edx+0x70u), r_ecx);
    /* 0073be6b: mov dword ptr [0xa9a994], 0 */ W32((u32)(0xa9a994u), 0x0u);
L_0073be75:; BB(0x0073be75);
    /* 0073be75: mov ecx, dword ptr [0xa9a9a8] */ r_ecx = R32((u32)(0xa9a9a8u));
    /* 0073be7b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0073be7c: call 0x7a8a38 */ r_esp -= 4; W32(r_esp, 0x73be81u); f_007a8a38();
    /* 0073be81: mov ebx, eax */ r_ebx = r_eax;
    /* 0073be83: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073be85: je 0x73bd91 */ if (fZ) goto L_0073bd91;
L_0073be8b:; BB(0x0073be8b);
    /* 0073be8b: mov edx, dword ptr [0xa9a920] */ r_edx = R32((u32)(0xa9a920u));
    /* 0073be91: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0073be93: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073be95: je 0x73c1ab */ if (fZ) goto L_0073c1ab;
L_0073be9b:; BB(0x0073be9b);
    /* 0073be9b: mov edx, dword ptr [0xa9a924] */ r_edx = R32((u32)(0xa9a924u));
    /* 0073bea1: mov edi, 1 */ r_edi = 0x1u;
    /* 0073bea6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073bea8: je 0x73c1ab */ if (fZ) goto L_0073c1ab;
L_0073beae:; BB(0x0073beae);
    /* 0073beae: mov edx, dword ptr [0xa9a928] */ r_edx = R32((u32)(0xa9a928u));
    /* 0073beb4: mov edi, 2 */ r_edi = 0x2u;
    /* 0073beb9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073bebb: je 0x73c1ab */ if (fZ) goto L_0073c1ab;
L_0073bec1:; BB(0x0073bec1);
    /* 0073bec1: mov edx, dword ptr [0xa9a92c] */ r_edx = R32((u32)(0xa9a92cu));
    /* 0073bec7: mov edi, 3 */ r_edi = 0x3u;
    /* 0073becc: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073bece: je 0x73c1ab */ if (fZ) goto L_0073c1ab;
L_0073bed4:; BB(0x0073bed4);
    /* 0073bed4: mov edx, dword ptr [0xa9a930] */ r_edx = R32((u32)(0xa9a930u));
    /* 0073beda: mov edi, 4 */ r_edi = 0x4u;
    /* 0073bedf: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073bee1: je 0x73c1ab */ if (fZ) goto L_0073c1ab;
L_0073bee7:; BB(0x0073bee7);
    /* 0073bee7: mov edx, dword ptr [0xa9a934] */ r_edx = R32((u32)(0xa9a934u));
    /* 0073beed: mov edi, 5 */ r_edi = 0x5u;
    /* 0073bef2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073bef4: je 0x73c1ab */ if (fZ) goto L_0073c1ab;
L_0073befa:; BB(0x0073befa);
    /* 0073befa: mov edx, dword ptr [0xa9a938] */ r_edx = R32((u32)(0xa9a938u));
    /* 0073bf00: mov edi, 6 */ r_edi = 0x6u;
    /* 0073bf05: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073bf07: je 0x73c1ab */ if (fZ) goto L_0073c1ab;
L_0073bf0d:; BB(0x0073bf0d);
    /* 0073bf0d: mov edx, dword ptr [0xa9a93c] */ r_edx = R32((u32)(0xa9a93cu));
    /* 0073bf13: mov edi, 7 */ r_edi = 0x7u;
    /* 0073bf18: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073bf1a: je 0x73c1ab */ if (fZ) goto L_0073c1ab;
L_0073bf20:; BB(0x0073bf20);
    /* 0073bf20: mov edx, dword ptr [0xa9a940] */ r_edx = R32((u32)(0xa9a940u));
    /* 0073bf26: mov edi, 8 */ r_edi = 0x8u;
    /* 0073bf2b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073bf2d: je 0x73c1ab */ if (fZ) goto L_0073c1ab;
L_0073bf33:; BB(0x0073bf33);
    /* 0073bf33: mov edx, dword ptr [0xa9a944] */ r_edx = R32((u32)(0xa9a944u));
    /* 0073bf39: mov edi, 9 */ r_edi = 0x9u;
    /* 0073bf3e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073bf40: je 0x73c1ab */ if (fZ) goto L_0073c1ab;
L_0073bf46:; BB(0x0073bf46);
    /* 0073bf46: mov edx, dword ptr [0xa9a948] */ r_edx = R32((u32)(0xa9a948u));
    /* 0073bf4c: mov edi, 0xa */ r_edi = 0xau;
    /* 0073bf51: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073bf53: je 0x73c1ab */ if (fZ) goto L_0073c1ab;
L_0073bf59:; BB(0x0073bf59);
    /* 0073bf59: mov edx, dword ptr [0xa9a94c] */ r_edx = R32((u32)(0xa9a94cu));
    /* 0073bf5f: mov edi, 0xb */ r_edi = 0xbu;
    /* 0073bf64: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073bf66: je 0x73c1ab */ if (fZ) goto L_0073c1ab;
L_0073bf6c:; BB(0x0073bf6c);
    /* 0073bf6c: mov edx, dword ptr [0xa9a950] */ r_edx = R32((u32)(0xa9a950u));
    /* 0073bf72: mov edi, 0xc */ r_edi = 0xcu;
    /* 0073bf77: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073bf79: je 0x73c1ab */ if (fZ) goto L_0073c1ab;
L_0073bf7f:; BB(0x0073bf7f);
    /* 0073bf7f: mov edx, dword ptr [0xa9a954] */ r_edx = R32((u32)(0xa9a954u));
    /* 0073bf85: mov edi, 0xd */ r_edi = 0xdu;
    /* 0073bf8a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073bf8c: je 0x73c1ab */ if (fZ) goto L_0073c1ab;
L_0073bf92:; BB(0x0073bf92);
    /* 0073bf92: mov edx, dword ptr [0xa9a958] */ r_edx = R32((u32)(0xa9a958u));
    /* 0073bf98: mov edi, 0xe */ r_edi = 0xeu;
    /* 0073bf9d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073bf9f: je 0x73c1ab */ if (fZ) goto L_0073c1ab;
L_0073bfa5:; BB(0x0073bfa5);
    /* 0073bfa5: mov edx, dword ptr [0xa9a95c] */ r_edx = R32((u32)(0xa9a95cu));
    /* 0073bfab: mov edi, 0xf */ r_edi = 0xfu;
    /* 0073bfb0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073bfb2: je 0x73c1ab */ if (fZ) goto L_0073c1ab;
L_0073bfb8:; BB(0x0073bfb8);
    /* 0073bfb8: mov edx, dword ptr [0xa9a960] */ r_edx = R32((u32)(0xa9a960u));
    /* 0073bfbe: mov edi, 0x10 */ r_edi = 0x10u;
    /* 0073bfc3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073bfc5: je 0x73c1ab */ if (fZ) goto L_0073c1ab;
L_0073bfcb:; BB(0x0073bfcb);
    /* 0073bfcb: mov edx, dword ptr [0xa9a964] */ r_edx = R32((u32)(0xa9a964u));
    /* 0073bfd1: mov edi, 0x11 */ r_edi = 0x11u;
    /* 0073bfd6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073bfd8: je 0x73c1ab */ if (fZ) goto L_0073c1ab;
L_0073bfde:; BB(0x0073bfde);
    /* 0073bfde: mov edx, dword ptr [0xa9a968] */ r_edx = R32((u32)(0xa9a968u));
    /* 0073bfe4: mov edi, 0x12 */ r_edi = 0x12u;
    /* 0073bfe9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073bfeb: je 0x73c1ab */ if (fZ) goto L_0073c1ab;
L_0073bff1:; BB(0x0073bff1);
    /* 0073bff1: mov edx, dword ptr [0xa9a96c] */ r_edx = R32((u32)(0xa9a96cu));
    /* 0073bff7: mov edi, 0x13 */ r_edi = 0x13u;
    /* 0073bffc: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073bffe: je 0x73c1ab */ if (fZ) goto L_0073c1ab;
L_0073c004:; BB(0x0073c004);
    /* 0073c004: mov edx, dword ptr [0xa9a970] */ r_edx = R32((u32)(0xa9a970u));
    /* 0073c00a: mov edi, 0x14 */ r_edi = 0x14u;
    /* 0073c00f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073c011: je 0x73c1ab */ if (fZ) goto L_0073c1ab;
L_0073c017:; BB(0x0073c017);
    /* 0073c017: mov edx, dword ptr [0xa9a974] */ r_edx = R32((u32)(0xa9a974u));
    /* 0073c01d: mov edi, 0x15 */ r_edi = 0x15u;
    /* 0073c022: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073c024: je 0x73c1ab */ if (fZ) goto L_0073c1ab;
L_0073c02a:; BB(0x0073c02a);
    /* 0073c02a: mov edx, dword ptr [0xa9a978] */ r_edx = R32((u32)(0xa9a978u));
    /* 0073c030: mov edi, 0x16 */ r_edi = 0x16u;
    /* 0073c035: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073c037: je 0x73c1ab */ if (fZ) goto L_0073c1ab;
L_0073c03d:; BB(0x0073c03d);
    /* 0073c03d: mov edx, dword ptr [0xa9a97c] */ r_edx = R32((u32)(0xa9a97cu));
    /* 0073c043: mov edi, 0x17 */ r_edi = 0x17u;
    /* 0073c048: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073c04a: je 0x73c1ab */ if (fZ) goto L_0073c1ab;
L_0073c050:; BB(0x0073c050);
    /* 0073c050: mov edx, dword ptr [0xa9a980] */ r_edx = R32((u32)(0xa9a980u));
    /* 0073c056: mov edi, 0x18 */ r_edi = 0x18u;
    /* 0073c05b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073c05d: je 0x73c1ab */ if (fZ) goto L_0073c1ab;
L_0073c063:; BB(0x0073c063);
    /* 0073c063: mov edx, dword ptr [0xa9a984] */ r_edx = R32((u32)(0xa9a984u));
    /* 0073c069: mov edi, 0x19 */ r_edi = 0x19u;
    /* 0073c06e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073c070: je 0x73c1ab */ if (fZ) goto L_0073c1ab;
L_0073c076:; BB(0x0073c076);
    /* 0073c076: mov edx, dword ptr [0xa9a988] */ r_edx = R32((u32)(0xa9a988u));
    /* 0073c07c: mov edi, 0x1a */ r_edi = 0x1au;
    /* 0073c081: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073c083: je 0x73c1ab */ if (fZ) goto L_0073c1ab;
L_0073c089:; BB(0x0073c089);
    /* 0073c089: mov edx, dword ptr [0xa9a98c] */ r_edx = R32((u32)(0xa9a98cu));
    /* 0073c08f: mov edi, 0x1b */ r_edi = 0x1bu;
    /* 0073c094: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073c096: je 0x73c1ab */ if (fZ) goto L_0073c1ab;
L_0073c09c:; BB(0x0073c09c);
    /* 0073c09c: mov edx, dword ptr [0xa9a990] */ r_edx = R32((u32)(0xa9a990u));
    /* 0073c0a2: mov edi, 0x1c */ r_edi = 0x1cu;
    /* 0073c0a7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073c0a9: je 0x73c1ab */ if (fZ) goto L_0073c1ab;
L_0073c0af:; BB(0x0073c0af);
    /* 0073c0af: mov edx, dword ptr [0xa9a994] */ r_edx = R32((u32)(0xa9a994u));
    /* 0073c0b5: mov edi, 0x1d */ r_edi = 0x1du;
    /* 0073c0ba: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073c0bc: je 0x73c1ab */ if (fZ) goto L_0073c1ab;
L_0073c0c2:; BB(0x0073c0c2);
    /* 0073c0c2: mov edx, dword ptr [0xa9a920] */ r_edx = R32((u32)(0xa9a920u));
    /* 0073c0c8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073c0ca: je 0x73c1a6 */ if (fZ) goto L_0073c1a6;
L_0073c0d0:; BB(0x0073c0d0);
    /* 0073c0d0: mov ecx, dword ptr [0xa9a9a8] */ r_ecx = R32((u32)(0xa9a9a8u));
    /* 0073c0d6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0073c0d7: call 0x7a8b04 */ r_esp -= 4; W32(r_esp, 0x73c0dcu); f_007a8b04();
    /* 0073c0dc: mov dword ptr [0xa9a920], 0 */ W32((u32)(0xa9a920u), 0x0u);
    /* 0073c0e6: mov ecx, 0xa9a920 */ r_ecx = 0xa9a920u;
    /* 0073c0eb: mov edx, 0xa9a924 */ r_edx = 0xa9a924u;
    /* 0073c0f0: mov ebp, dword ptr [edx] */ r_ebp = R32((u32)(r_edx));
    /* 0073c0f2: mov edi, dword ptr [edx + 4] */ r_edi = R32((u32)(r_edx+0x4u));
    /* 0073c0f5: mov dword ptr [ecx], ebp */ W32((u32)(r_ecx), r_ebp);
    /* 0073c0f7: mov ebp, dword ptr [edx + 8] */ r_ebp = R32((u32)(r_edx+0x8u));
    /* 0073c0fa: mov dword ptr [ecx + 4], edi */ W32((u32)(r_ecx+0x4u), r_edi);
    /* 0073c0fd: mov dword ptr [ecx + 8], ebp */ W32((u32)(r_ecx+0x8u), r_ebp);
    /* 0073c100: mov ebp, dword ptr [edx + 0xc] */ r_ebp = R32((u32)(r_edx+0xcu));
    /* 0073c103: mov dword ptr [ecx + 0xc], ebp */ W32((u32)(r_ecx+0xcu), r_ebp);
    /* 0073c106: mov ebp, dword ptr [edx + 0x10] */ r_ebp = R32((u32)(r_edx+0x10u));
    /* 0073c109: mov dword ptr [ecx + 0x10], ebp */ W32((u32)(r_ecx+0x10u), r_ebp);
    /* 0073c10c: mov ebp, dword ptr [edx + 0x14] */ r_ebp = R32((u32)(r_edx+0x14u));
    /* 0073c10f: mov dword ptr [ecx + 0x14], ebp */ W32((u32)(r_ecx+0x14u), r_ebp);
    /* 0073c112: mov ebp, dword ptr [edx + 0x18] */ r_ebp = R32((u32)(r_edx+0x18u));
    /* 0073c115: mov dword ptr [ecx + 0x18], ebp */ W32((u32)(r_ecx+0x18u), r_ebp);
    /* 0073c118: mov ebp, dword ptr [edx + 0x1c] */ r_ebp = R32((u32)(r_edx+0x1cu));
    /* 0073c11b: mov dword ptr [ecx + 0x1c], ebp */ W32((u32)(r_ecx+0x1cu), r_ebp);
    /* 0073c11e: mov ebp, dword ptr [edx + 0x20] */ r_ebp = R32((u32)(r_edx+0x20u));
    /* 0073c121: mov dword ptr [ecx + 0x20], ebp */ W32((u32)(r_ecx+0x20u), r_ebp);
    /* 0073c124: mov ebp, dword ptr [edx + 0x24] */ r_ebp = R32((u32)(r_edx+0x24u));
    /* 0073c127: mov dword ptr [ecx + 0x24], ebp */ W32((u32)(r_ecx+0x24u), r_ebp);
    /* 0073c12a: mov ebp, dword ptr [edx + 0x28] */ r_ebp = R32((u32)(r_edx+0x28u));
    /* 0073c12d: mov dword ptr [ecx + 0x28], ebp */ W32((u32)(r_ecx+0x28u), r_ebp);
    /* 0073c130: mov ebp, dword ptr [edx + 0x2c] */ r_ebp = R32((u32)(r_edx+0x2cu));
    /* 0073c133: mov dword ptr [ecx + 0x2c], ebp */ W32((u32)(r_ecx+0x2cu), r_ebp);
    /* 0073c136: mov ebp, dword ptr [edx + 0x30] */ r_ebp = R32((u32)(r_edx+0x30u));
    /* 0073c139: mov dword ptr [ecx + 0x30], ebp */ W32((u32)(r_ecx+0x30u), r_ebp);
    /* 0073c13c: mov ebp, dword ptr [edx + 0x34] */ r_ebp = R32((u32)(r_edx+0x34u));
    /* 0073c13f: mov dword ptr [ecx + 0x34], ebp */ W32((u32)(r_ecx+0x34u), r_ebp);
    /* 0073c142: mov ebp, dword ptr [edx + 0x38] */ r_ebp = R32((u32)(r_edx+0x38u));
    /* 0073c145: mov dword ptr [ecx + 0x38], ebp */ W32((u32)(r_ecx+0x38u), r_ebp);
    /* 0073c148: mov ebp, dword ptr [edx + 0x3c] */ r_ebp = R32((u32)(r_edx+0x3cu));
    /* 0073c14b: mov dword ptr [ecx + 0x3c], ebp */ W32((u32)(r_ecx+0x3cu), r_ebp);
    /* 0073c14e: mov ebp, dword ptr [edx + 0x40] */ r_ebp = R32((u32)(r_edx+0x40u));
    /* 0073c151: mov dword ptr [ecx + 0x40], ebp */ W32((u32)(r_ecx+0x40u), r_ebp);
    /* 0073c154: mov ebp, dword ptr [edx + 0x44] */ r_ebp = R32((u32)(r_edx+0x44u));
    /* 0073c157: mov dword ptr [ecx + 0x44], ebp */ W32((u32)(r_ecx+0x44u), r_ebp);
    /* 0073c15a: mov ebp, dword ptr [edx + 0x48] */ r_ebp = R32((u32)(r_edx+0x48u));
    /* 0073c15d: mov dword ptr [ecx + 0x48], ebp */ W32((u32)(r_ecx+0x48u), r_ebp);
    /* 0073c160: mov ebp, dword ptr [edx + 0x4c] */ r_ebp = R32((u32)(r_edx+0x4cu));
    /* 0073c163: mov dword ptr [ecx + 0x4c], ebp */ W32((u32)(r_ecx+0x4cu), r_ebp);
    /* 0073c166: mov ebp, dword ptr [edx + 0x50] */ r_ebp = R32((u32)(r_edx+0x50u));
    /* 0073c169: mov dword ptr [ecx + 0x50], ebp */ W32((u32)(r_ecx+0x50u), r_ebp);
    /* 0073c16c: mov ebp, dword ptr [edx + 0x54] */ r_ebp = R32((u32)(r_edx+0x54u));
    /* 0073c16f: mov dword ptr [ecx + 0x54], ebp */ W32((u32)(r_ecx+0x54u), r_ebp);
    /* 0073c172: mov ebp, dword ptr [edx + 0x58] */ r_ebp = R32((u32)(r_edx+0x58u));
    /* 0073c175: mov dword ptr [ecx + 0x58], ebp */ W32((u32)(r_ecx+0x58u), r_ebp);
    /* 0073c178: mov ebp, dword ptr [edx + 0x5c] */ r_ebp = R32((u32)(r_edx+0x5cu));
    /* 0073c17b: mov dword ptr [ecx + 0x5c], ebp */ W32((u32)(r_ecx+0x5cu), r_ebp);
    /* 0073c17e: mov ebp, dword ptr [edx + 0x60] */ r_ebp = R32((u32)(r_edx+0x60u));
    /* 0073c181: mov dword ptr [ecx + 0x60], ebp */ W32((u32)(r_ecx+0x60u), r_ebp);
    /* 0073c184: mov ebp, dword ptr [edx + 0x64] */ r_ebp = R32((u32)(r_edx+0x64u));
    /* 0073c187: mov dword ptr [ecx + 0x64], ebp */ W32((u32)(r_ecx+0x64u), r_ebp);
    /* 0073c18a: mov ebp, dword ptr [edx + 0x68] */ r_ebp = R32((u32)(r_edx+0x68u));
    /* 0073c18d: mov dword ptr [ecx + 0x68], ebp */ W32((u32)(r_ecx+0x68u), r_ebp);
    /* 0073c190: mov ebp, dword ptr [edx + 0x6c] */ r_ebp = R32((u32)(r_edx+0x6cu));
    /* 0073c193: mov edx, dword ptr [edx + 0x70] */ r_edx = R32((u32)(r_edx+0x70u));
    /* 0073c196: mov dword ptr [ecx + 0x6c], ebp */ W32((u32)(r_ecx+0x6cu), r_ebp);
    /* 0073c199: mov dword ptr [ecx + 0x70], edx */ W32((u32)(r_ecx+0x70u), r_edx);
    /* 0073c19c: mov dword ptr [0xa9a994], 0 */ W32((u32)(0xa9a994u), 0x0u);
L_0073c1a6:; BB(0x0073c1a6);
    /* 0073c1a6: mov edi, 0x1d */ r_edi = 0x1du;
L_0073c1ab:; BB(0x0073c1ab);
    /* 0073c1ab: mov dword ptr [edi*4 + 0xa9a920], ebx */ W32((u32)(r_edi*4+0xa9a920u), r_ebx);
    /* 0073c1b2: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0073c1b3: mov edx, 0xac9d80 */ r_edx = 0xac9d80u;
    /* 0073c1b8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0073c1b9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0073c1ba: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x73c1bfu); f_00857dec();
    /* 0073c1bf: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073c1c2: mov ecx, dword ptr [edi*4 + 0xa9a920] */ r_ecx = R32((u32)(r_edi*4+0xa9a920u));
    /* 0073c1c9: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0073c1cb: mov word ptr [ecx + esi*2], dx */ W16((u32)(r_ecx+r_esi*2), (u16)r_edx);
    /* 0073c1cf: mov eax, dword ptr [0xa98478] */ r_eax = R32((u32)(0xa98478u));
    /* 0073c1d4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073c1d6: je 0x73c1f2 */ if (fZ) goto L_0073c1f2;
L_0073c1d8:; BB(0x0073c1d8);
    /* 0073c1d8: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
L_0073c1db:; BB(0x0073c1db);
    /* 0073c1db: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073c1dd: je 0x73c1ea */ if (fZ) goto L_0073c1ea;
L_0073c1df:; BB(0x0073c1df);
    /* 0073c1df: mov eax, 0xac9d80 */ r_eax = 0xac9d80u;
    /* 0073c1e4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073c1e5: call 0x73c228 */ r_esp -= 4; W32(r_esp, 0x73c1eau); f_0073c228();
L_0073c1ea:; BB(0x0073c1ea);
    /* 0073c1ea: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0073c1ed: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0073c1ee: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073c1ef: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0073c1f0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0073c1f1: ret  */ FN_RET(0x0073b858); r_esp += 4; return;
L_0073c1f2:; BB(0x0073c1f2);
    /* 0073c1f2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0073c1f4: jmp 0x73c1db */ goto L_0073c1db;
}

