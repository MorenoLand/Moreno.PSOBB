#include "protos.h"

void f_0068a088(void) /* sub_68A088 */
{
    FN_ENTER(0x0068a088);
    /* 0068a088: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0068a089: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068a08a: mov esi, ecx */ r_esi = r_ecx;
    /* 0068a08c: mov eax, dword ptr [esi + 0x9a8] */ r_eax = R32((u32)(r_esi+0x9a8u));
    /* 0068a092: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068a094: je 0x68a0d8 */ if (fZ) goto L_0068a0d8;
L_0068a096:; BB(0x0068a096);
    /* 0068a096: mov ecx, dword ptr [esi + 0xe0] */ r_ecx = R32((u32)(r_esi+0xe0u));
    /* 0068a09c: add ecx, 0xe80 */ {  u32 a = r_ecx; u32 b = 0xe80u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0068a0a2: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x68a0a7u); f_0082d990();
    /* 0068a0a7: lea ecx, [esi + 0xc7c] */ r_ecx = (u32)(r_esi+0xc7cu);
    /* 0068a0ad: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x68a0b2u); f_00829cc8();
    /* 0068a0b2: movzx eax, word ptr [esi + 8] */ r_eax = (u32)R16((u32)(r_esi+0x8u));
    /* 0068a0b6: test eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068a0bb: je 0x68a0c2 */ if (fZ) goto L_0068a0c2;
L_0068a0bd:; BB(0x0068a0bd);
    /* 0068a0bd: call 0x7a950c */ r_esp -= 4; W32(r_esp, 0x68a0c2u); f_007a950c();
L_0068a0c2:; BB(0x0068a0c2);
    /* 0068a0c2: push dword ptr [esi + 0x9a8] */ { u32 v = R32((u32)(r_esi+0x9a8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0068a0c8: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x68a0cdu); f_0082e1e8();
    /* 0068a0cd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0068a0ce: call 0x7a9044 */ r_esp -= 4; W32(r_esp, 0x68a0d3u); f_007a9044();
    /* 0068a0d3: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x68a0d8u); f_0082da80();
L_0068a0d8:; BB(0x0068a0d8);
    /* 0068a0d8: mov eax, dword ptr [esi + 0x9a4] */ r_eax = R32((u32)(r_esi+0x9a4u));
    /* 0068a0de: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068a0e0: je 0x68a13b */ if (fZ) goto L_0068a13b;
L_0068a0e2:; BB(0x0068a0e2);
    /* 0068a0e2: mov ecx, dword ptr [esi + 0xe0] */ r_ecx = R32((u32)(r_esi+0xe0u));
    /* 0068a0e8: add ecx, 0xec0 */ {  u32 a = r_ecx; u32 b = 0xec0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0068a0ee: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x68a0f3u); f_0082d990();
    /* 0068a0f3: lea ecx, [esi + 0xb10] */ r_ecx = (u32)(r_esi+0xb10u);
    /* 0068a0f9: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x68a0feu); f_00829cc8();
    /* 0068a0fe: movzx eax, word ptr [esi + 8] */ r_eax = (u32)R16((u32)(r_esi+0x8u));
    /* 0068a102: test eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068a107: je 0x68a10e */ if (fZ) goto L_0068a10e;
L_0068a109:; BB(0x0068a109);
    /* 0068a109: call 0x7a950c */ r_esp -= 4; W32(r_esp, 0x68a10eu); f_007a950c();
L_0068a10e:; BB(0x0068a10e);
    /* 0068a10e: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0068a110: call 0x7a94a0 */ r_esp -= 4; W32(r_esp, 0x68a115u); f_007a94a0();
    /* 0068a115: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0068a116: call 0x4e71a8 */ r_esp -= 4; W32(r_esp, 0x68a11bu); f_004e71a8();
    /* 0068a11b: push dword ptr [esi + 0x9a4] */ { u32 v = R32((u32)(r_esi+0x9a4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0068a121: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x68a126u); f_0082e1e8();
    /* 0068a126: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0068a127: call 0x4e71c8 */ r_esp -= 4; W32(r_esp, 0x68a12cu); f_004e71c8();
    /* 0068a12c: call 0x7a94b0 */ r_esp -= 4; W32(r_esp, 0x68a131u); f_007a94b0();
    /* 0068a131: call 0x7a9044 */ r_esp -= 4; W32(r_esp, 0x68a136u); f_007a9044();
    /* 0068a136: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x68a13bu); f_0082da80();
L_0068a13b:; BB(0x0068a13b);
    /* 0068a13b: mov eax, dword ptr [esi + 0x9a0] */ r_eax = R32((u32)(r_esi+0x9a0u));
    /* 0068a141: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0068a143: je 0x68a1a3 */ if (fZ) goto L_0068a1a3;
L_0068a145:; BB(0x0068a145);
    /* 0068a145: mov ecx, dword ptr [esi + 0xe0] */ r_ecx = R32((u32)(r_esi+0xe0u));
    /* 0068a14b: add ecx, 0xec0 */ {  u32 a = r_ecx; u32 b = 0xec0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0068a151: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x68a156u); f_0082d990();
    /* 0068a156: lea ecx, [esi + 0xb10] */ r_ecx = (u32)(r_esi+0xb10u);
    /* 0068a15c: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x68a161u); f_00829cc8();
    /* 0068a161: movzx eax, word ptr [esi + 8] */ r_eax = (u32)R16((u32)(r_esi+0x8u));
    /* 0068a165: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0068a167: test eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068a16c: je 0x68a173 */ if (fZ) goto L_0068a173;
L_0068a16e:; BB(0x0068a16e);
    /* 0068a16e: mov ebp, 1 */ r_ebp = 0x1u;
L_0068a173:; BB(0x0068a173);
    /* 0068a173: call 0x4e71a8 */ r_esp -= 4; W32(r_esp, 0x68a178u); f_004e71a8();
    /* 0068a178: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068a179: push dword ptr [esi + 0x6fc] */ { u32 v = R32((u32)(r_esi+0x6fcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0068a17f: lea eax, [esi + 0x930] */ r_eax = (u32)(r_esi+0x930u);
    /* 0068a185: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068a186: push dword ptr [esi + 0x9a0] */ { u32 v = R32((u32)(r_esi+0x9a0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0068a18c: call 0x4e70c4 */ r_esp -= 4; W32(r_esp, 0x68a191u); f_004e70c4();
    /* 0068a191: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068a194: call 0x4e71c8 */ r_esp -= 4; W32(r_esp, 0x68a199u); f_004e71c8();
    /* 0068a199: call 0x7a9044 */ r_esp -= 4; W32(r_esp, 0x68a19eu); f_007a9044();
    /* 0068a19e: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x68a1a3u); f_0082da80();
L_0068a1a3:; BB(0x0068a1a3);
    /* 0068a1a3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068a1a4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0068a1a5: ret  */ FN_RET(0x0068a088); r_esp += 4; return;
}

void f_0068a1a8(void) /* sub_68A1A8 */
{
    FN_ENTER(0x0068a1a8);
    /* 0068a1a8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0068a1a9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0068a1ab: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x68a1b0u); f_0082d7b0();
    /* 0068a1b0: lea edx, [ebx + 0x38] */ r_edx = (u32)(r_ebx+0x38u);
    /* 0068a1b3: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0068a1b5: call 0x8316b4 */ r_esp -= 4; W32(r_esp, 0x68a1bau); f_008316b4();
    /* 0068a1ba: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 0068a1bd: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0068a1bf: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x68a1c4u); f_0082d8bc();
    /* 0068a1c4: push dword ptr [ebx + 0xe0] */ { u32 v = R32((u32)(r_ebx+0xe0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0068a1ca: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0068a1ce: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0068a1d0: push dword ptr [ebx + 0xf8] */ { u32 v = R32((u32)(r_ebx+0xf8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0068a1d6: call 0x7aab2c */ r_esp -= 4; W32(r_esp, 0x68a1dbu); f_007aab2c();
    /* 0068a1db: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x68a1e0u); f_0082da80();
    /* 0068a1e0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0068a1e1: ret 4 */ FN_RET(0x0068a1a8); r_esp += 8; return;
}

void f_0068a1e4(void) /* sub_68A1E4 */
{
    FN_ENTER(0x0068a1e4);
    /* 0068a1e4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0068a1e5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0068a1e7: fld dword ptr [ebx + 0x6fc] */ FPUSH(R_F32((u32)(r_ebx+0x6fcu)));
    /* 0068a1ed: fcomp dword ptr [0x93c764] */ fx_compare(ST(0), R_F32((u32)(0x93c764u))); FPOP();
    /* 0068a1f3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0068a1f5: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0068a1f6: jb 0x68a1fa */ if (fC) goto L_0068a1fa;
L_0068a1f8:; BB(0x0068a1f8);
    /* 0068a1f8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0068a1f9: ret  */ FN_RET(0x0068a1e4); r_esp += 4; return;
L_0068a1fa:; BB(0x0068a1fa);
    /* 0068a1fa: call 0x7a9044 */ r_esp -= 4; W32(r_esp, 0x68a1ffu); f_007a9044();
    /* 0068a1ff: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 0068a204: push 0x800 */ { u32 v = 0x800u; r_esp -= 4; W32(r_esp, v); }
    /* 0068a209: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0068a20b: or eax, 0x810 */ {  u32 a = r_eax; u32 b = 0x810u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0068a210: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 0068a215: call 0x82d6fc */ r_esp -= 4; W32(r_esp, 0x68a21au); f_0082d6fc();
    /* 0068a21a: add ebx, 0x6fc */ {  u32 a = r_ebx; u32 b = 0x6fcu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0068a220: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0068a221: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x68a226u); f_0082d710();
    /* 0068a226: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068a229: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0068a22a: ret  */ FN_RET(0x0068a1e4); r_esp += 4; return;
}

void f_0068a22c(void) /* sub_68A22C */
{
    FN_ENTER(0x0068a22c);
    /* 0068a22c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0068a22d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068a22e: mov esi, ecx */ r_esi = r_ecx;
    /* 0068a230: push 0x41200000 */ { u32 v = 0x41200000u; r_esp -= 4; W32(r_esp, v); }
    /* 0068a235: mov eax, dword ptr [esi + 0x340] */ r_eax = R32((u32)(r_esi+0x340u));
    /* 0068a23b: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0068a23e: mov dword ptr [esi + 0x340], eax */ W32((u32)(r_esi+0x340u), r_eax);
    /* 0068a244: lea edx, [esi + 0x38] */ r_edx = (u32)(r_esi+0x38u);
    /* 0068a247: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068a248: call 0x502c78 */ r_esp -= 4; W32(r_esp, 0x68a24du); f_00502c78();
    /* 0068a24d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068a250: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0068a252: jne 0x68a257 */ if (!fZ) goto L_0068a257;
L_0068a254:; BB(0x0068a254);
    /* 0068a254: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068a255: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0068a256: ret  */ FN_RET(0x0068a22c); r_esp += 4; return;
L_0068a257:; BB(0x0068a257);
    /* 0068a257: movzx eax, word ptr [esi + 8] */ r_eax = (u32)R16((u32)(r_esi+0x8u));
    /* 0068a25b: or eax, 0xffff0400 */ {  u32 a = r_eax; u32 b = 0xffff0400u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0068a260: mov word ptr [esi + 8], ax */ W16((u32)(r_esi+0x8u), (u16)r_eax);
    /* 0068a264: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x68a269u); f_0082dbac();
    /* 0068a269: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 0068a26c: test eax, 0x2000000 */ {  u32 a = r_eax; u32 b = 0x2000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068a271: jne 0x68a308 */ if (!fZ) goto L_0068a308;
L_0068a277:; BB(0x0068a277);
    /* 0068a277: mov eax, dword ptr [esi + 0xdf0] */ r_eax = R32((u32)(r_esi+0xdf0u));
    /* 0068a27d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068a27f: jne 0x68a308 */ if (!fZ) goto L_0068a308;
L_0068a285:; BB(0x0068a285);
    /* 0068a285: mov edx, dword ptr [esi + 0x33c] */ r_edx = R32((u32)(r_esi+0x33cu));
    /* 0068a28b: and edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 0068a28e: je 0x68a297 */ if (fZ) goto L_0068a297;
L_0068a290:; BB(0x0068a290);
    /* 0068a290: mov eax, 1 */ r_eax = 0x1u;
    /* 0068a295: jmp 0x68a299 */ goto L_0068a299;
L_0068a297:; BB(0x0068a297);
    /* 0068a297: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0068a299:; BB(0x0068a299);
    /* 0068a299: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068a29b: je 0x68a2b9 */ if (fZ) goto L_0068a2b9;
L_0068a29d:; BB(0x0068a29d);
    /* 0068a29d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068a29f: je 0x68a2a8 */ if (fZ) goto L_0068a2a8;
L_0068a2a1:; BB(0x0068a2a1);
    /* 0068a2a1: mov eax, 1 */ r_eax = 0x1u;
    /* 0068a2a6: jmp 0x68a2aa */ goto L_0068a2aa;
L_0068a2a8:; BB(0x0068a2a8);
    /* 0068a2a8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0068a2aa:; BB(0x0068a2aa);
    /* 0068a2aa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068a2ac: je 0x68a308 */ if (fZ) goto L_0068a308;
L_0068a2ae:; BB(0x0068a2ae);
    /* 0068a2ae: movsx eax, word ptr [esi + 0x330] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x330u));
    /* 0068a2b5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068a2b7: jne 0x68a308 */ if (!fZ) goto L_0068a308;
L_0068a2b9:; BB(0x0068a2b9);
    /* 0068a2b9: push 0x41a00000 */ { u32 v = 0x41a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0068a2be: mov ecx, esi */ r_ecx = r_esi;
    /* 0068a2c0: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0068a2c2: push 0x43c80000 */ { u32 v = 0x43c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0068a2c7: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x68a2cau); call_ind(t); }
    /* 0068a2ca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068a2cb: mov edx, dword ptr [esi + 0x30] */ r_edx = R32((u32)(r_esi+0x30u));
    /* 0068a2ce: and edx, 0xf7ffffff */ {  u32 a = r_edx; u32 b = 0xf7ffffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0068a2d4: mov dword ptr [esi + 0x30], edx */ W32((u32)(r_esi+0x30u), r_edx);
    /* 0068a2d7: mov ecx, esi */ r_ecx = r_esi;
    /* 0068a2d9: call 0x689dec */ r_esp -= 4; W32(r_esp, 0x68a2deu); f_00689dec();
    /* 0068a2de: lea ebp, [esi + 0x6e0] */ r_ebp = (u32)(r_esi+0x6e0u);
    /* 0068a2e4: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0068a2e6: call 0x69830c */ r_esp -= 4; W32(r_esp, 0x68a2ebu); f_0069830c();
    /* 0068a2eb: mov ecx, esi */ r_ecx = r_esi;
    /* 0068a2ed: call 0x68a1e4 */ r_esp -= 4; W32(r_esp, 0x68a2f2u); f_0068a1e4();
    /* 0068a2f2: mov eax, dword ptr [esi + 0x340] */ r_eax = R32((u32)(r_esi+0x340u));
    /* 0068a2f8: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0068a2fb: mov dword ptr [esi + 0x340], eax */ W32((u32)(r_esi+0x340u), r_eax);
    /* 0068a301: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0068a303: call 0x698348 */ r_esp -= 4; W32(r_esp, 0x68a308u); f_00698348();
L_0068a308:; BB(0x0068a308);
    /* 0068a308: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x68a30du); f_0082dab0();
    /* 0068a30d: movzx eax, word ptr [esi + 8] */ r_eax = (u32)R16((u32)(r_esi+0x8u));
    /* 0068a311: and eax, 0xfbff */ {  u32 a = r_eax; u32 b = 0xfbffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0068a316: mov word ptr [esi + 8], ax */ W16((u32)(r_esi+0x8u), (u16)r_eax);
    /* 0068a31a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068a31b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0068a31c: ret  */ FN_RET(0x0068a22c); r_esp += 4; return;
}

void f_0068a320(void) /* sub_68A320 */
{
    FN_ENTER(0x0068a320);
    /* 0068a320: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0068a321: mov edi, ecx */ r_edi = r_ecx;
    /* 0068a323: mov ecx, edi */ r_ecx = r_edi;
    /* 0068a325: call 0x68a3e0 */ r_esp -= 4; W32(r_esp, 0x68a32au); f_0068a3e0();
    /* 0068a32a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068a32c: je 0x68a340 */ if (fZ) goto L_0068a340;
L_0068a32e:; BB(0x0068a32e);
    /* 0068a32e: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0068a330: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 0068a332: mov ecx, edi */ r_ecx = r_edi;
    /* 0068a334: call 0x698a08 */ r_esp -= 4; W32(r_esp, 0x68a339u); f_00698a08();
    /* 0068a339: mov eax, 1 */ r_eax = 0x1u;
    /* 0068a33e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068a33f: ret  */ FN_RET(0x0068a320); r_esp += 4; return;
L_0068a340:; BB(0x0068a340);
    /* 0068a340: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0068a343: test eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068a348: je 0x68a370 */ if (fZ) goto L_0068a370;
L_0068a34a:; BB(0x0068a34a);
    /* 0068a34a: test eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068a34f: je 0x68a35e */ if (fZ) goto L_0068a35e;
L_0068a351:; BB(0x0068a351);
    /* 0068a351: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0068a353: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0068a355: mov ecx, edi */ r_ecx = r_edi;
    /* 0068a357: call 0x698a08 */ r_esp -= 4; W32(r_esp, 0x68a35cu); f_00698a08();
    /* 0068a35c: jmp 0x68a369 */ goto L_0068a369;
L_0068a35e:; BB(0x0068a35e);
    /* 0068a35e: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0068a360: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 0068a362: mov ecx, edi */ r_ecx = r_edi;
    /* 0068a364: call 0x698a08 */ r_esp -= 4; W32(r_esp, 0x68a369u); f_00698a08();
L_0068a369:; BB(0x0068a369);
    /* 0068a369: mov eax, 1 */ r_eax = 0x1u;
    /* 0068a36e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068a36f: ret  */ FN_RET(0x0068a320); r_esp += 4; return;
L_0068a370:; BB(0x0068a370);
    /* 0068a370: mov ecx, edi */ r_ecx = r_edi;
    /* 0068a372: call 0x69d6d8 */ r_esp -= 4; W32(r_esp, 0x68a377u); f_0069d6d8();
    /* 0068a377: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068a379: je 0x68a38d */ if (fZ) goto L_0068a38d;
L_0068a37b:; BB(0x0068a37b);
    /* 0068a37b: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0068a37d: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0068a37f: mov ecx, edi */ r_ecx = r_edi;
    /* 0068a381: call 0x698a08 */ r_esp -= 4; W32(r_esp, 0x68a386u); f_00698a08();
    /* 0068a386: mov eax, 1 */ r_eax = 0x1u;
    /* 0068a38b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068a38c: ret  */ FN_RET(0x0068a320); r_esp += 4; return;
L_0068a38d:; BB(0x0068a38d);
    /* 0068a38d: mov edx, dword ptr [edi + 0x30] */ r_edx = R32((u32)(r_edi+0x30u));
    /* 0068a390: test edx, 0x10000 */ {  u32 a = r_edx; u32 b = 0x10000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068a396: je 0x68a3ce */ if (fZ) goto L_0068a3ce;
L_0068a398:; BB(0x0068a398);
    /* 0068a398: movsx eax, word ptr [edi + 0x6ca] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x6cau));
    /* 0068a39f: cmp eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068a3a2: je 0x68a3d2 */ if (fZ) goto L_0068a3d2;
L_0068a3a4:; BB(0x0068a3a4);
    /* 0068a3a4: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0068a3a6: movsx eax, word ptr [edi + 0x6ca] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x6cau));
    /* 0068a3ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068a3ae: and edx, 0xfffeffff */ {  u32 a = r_edx; u32 b = 0xfffeffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0068a3b4: mov dword ptr [edi + 0x30], edx */ W32((u32)(r_edi+0x30u), r_edx);
    /* 0068a3b7: mov ecx, edi */ r_ecx = r_edi;
    /* 0068a3b9: call 0x698a08 */ r_esp -= 4; W32(r_esp, 0x68a3beu); f_00698a08();
    /* 0068a3be: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0068a3c0: mov word ptr [edi + 0x6ca], ax */ W16((u32)(r_edi+0x6cau), (u16)r_eax);
L_0068a3c7:; BB(0x0068a3c7);
    /* 0068a3c7: mov eax, 1 */ r_eax = 0x1u;
    /* 0068a3cc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068a3cd: ret  */ FN_RET(0x0068a320); r_esp += 4; return;
L_0068a3ce:; BB(0x0068a3ce);
    /* 0068a3ce: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0068a3d0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068a3d1: ret  */ FN_RET(0x0068a320); r_esp += 4; return;
L_0068a3d2:; BB(0x0068a3d2);
    /* 0068a3d2: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0068a3d4: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0068a3d6: mov ecx, edi */ r_ecx = r_edi;
    /* 0068a3d8: call 0x698a08 */ r_esp -= 4; W32(r_esp, 0x68a3ddu); f_00698a08();
    /* 0068a3dd: jmp 0x68a3c7 */ goto L_0068a3c7;
}

void f_0068a3e0(void) /* sub_68A3E0 */
{
    FN_ENTER(0x0068a3e0);
    /* 0068a3e0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0068a3e1: mov esi, ecx */ r_esi = r_ecx;
    /* 0068a3e3: mov ecx, esi */ r_ecx = r_esi;
    /* 0068a3e5: call 0x68a3fc */ r_esp -= 4; W32(r_esp, 0x68a3eau); f_0068a3fc();
    /* 0068a3ea: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068a3ec: jne 0x68a3f2 */ if (!fZ) goto L_0068a3f2;
L_0068a3ee:; BB(0x0068a3ee);
    /* 0068a3ee: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0068a3f0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0068a3f1: ret  */ FN_RET(0x0068a3e0); r_esp += 4; return;
L_0068a3f2:; BB(0x0068a3f2);
    /* 0068a3f2: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 0068a3f5: and eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0068a3f8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0068a3f9: ret  */ FN_RET(0x0068a3e0); r_esp += 4; return;
}

void f_0068a3fc(void) /* sub_68A3FC */
{
    FN_ENTER(0x0068a3fc);
    /* 0068a3fc: push dword ptr [ecx + 0x3ec] */ { u32 v = R32((u32)(r_ecx+0x3ecu)); r_esp -= 4; W32(r_esp, v); }
    /* 0068a402: call 0x807d8c */ r_esp -= 4; W32(r_esp, 0x68a407u); f_00807d8c();
    /* 0068a407: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0068a408: ret  */ FN_RET(0x0068a3fc); r_esp += 4; return;
}

void f_0068a40c(void) /* sub_68A40C */
{
    FN_ENTER(0x0068a40c);
    /* 0068a40c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0068a40d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0068a40e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068a40f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0068a410: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0068a413: mov esi, ecx */ r_esi = r_ecx;
    /* 0068a415: lea ebp, [esi + 0x628] */ r_ebp = (u32)(r_esi+0x628u);
    /* 0068a41b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0068a41d: push dword ptr [0xa0f674] */ { u32 v = R32((u32)(0xa0f674u)); r_esp -= 4; W32(r_esp, v); }
    /* 0068a423: call 0x6a7c24 */ r_esp -= 4; W32(r_esp, 0x68a428u); f_006a7c24();
    /* 0068a428: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068a42a: je 0x68a49b */ if (fZ) goto L_0068a49b;
L_0068a42c:; BB(0x0068a42c);
    /* 0068a42c: mov eax, dword ptr [esi + 0x350] */ r_eax = R32((u32)(r_esi+0x350u));
    /* 0068a432: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0068a434: jne 0x68a43d */ if (!fZ) goto L_0068a43d;
L_0068a436:; BB(0x0068a436);
    /* 0068a436: mov eax, 1 */ r_eax = 0x1u;
    /* 0068a43b: jmp 0x68a43f */ goto L_0068a43f;
L_0068a43d:; BB(0x0068a43d);
    /* 0068a43d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0068a43f:; BB(0x0068a43f);
    /* 0068a43f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068a441: je 0x68a86e */ if (fZ) goto L_0068a86e;
L_0068a447:; BB(0x0068a447);
    /* 0068a447: mov ecx, esi */ r_ecx = r_esi;
    /* 0068a449: call 0x68c160 */ r_esp -= 4; W32(r_esp, 0x68a44eu); f_0068c160();
    /* 0068a44e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068a450: jne 0x68a45b */ if (!fZ) goto L_0068a45b;
L_0068a452:; BB(0x0068a452);
    /* 0068a452: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068a454: mov edx, 1 */ r_edx = 0x1u;
    /* 0068a459: jmp 0x68a471 */ goto L_0068a471;
L_0068a45b:; BB(0x0068a45b);
    /* 0068a45b: mov eax, dword ptr [esi + 0x45c] */ r_eax = R32((u32)(r_esi+0x45cu));
    /* 0068a461: movzx edx, word ptr [eax + 0x108c] */ r_edx = (u32)R16((u32)(r_eax+0x108cu));
    /* 0068a468: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068a469: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x68a46eu); f_007b4d18();
    /* 0068a46e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0068a46f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_0068a471:; BB(0x0068a471);
    /* 0068a471: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068a472: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068a473: mov ecx, esi */ r_ecx = r_esi;
    /* 0068a475: call 0x68c190 */ r_esp -= 4; W32(r_esp, 0x68a47au); f_0068c190();
    /* 0068a47a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068a47c: je 0x68a86e */ if (fZ) goto L_0068a86e;
L_0068a482:; BB(0x0068a482);
    /* 0068a482: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0068a484: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 0068a488: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068a489: call 0x71825c */ r_esp -= 4; W32(r_esp, 0x68a48eu); f_0071825c();
    /* 0068a48e: mov eax, 1 */ r_eax = 0x1u;
    /* 0068a493: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068a496: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0068a497: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068a498: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0068a499: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068a49a: ret  */ FN_RET(0x0068a40c); r_esp += 4; return;
L_0068a49b:; BB(0x0068a49b);
    /* 0068a49b: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 0068a49f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068a4a0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0068a4a2: call 0x6a7cec */ r_esp -= 4; W32(r_esp, 0x68a4a7u); f_006a7cec();
    /* 0068a4a7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068a4a8: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0068a4aa: call 0x6a7c24 */ r_esp -= 4; W32(r_esp, 0x68a4afu); f_006a7c24();
    /* 0068a4af: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068a4b1: je 0x68a601 */ if (fZ) goto L_0068a601;
L_0068a4b7:; BB(0x0068a4b7);
    /* 0068a4b7: mov eax, dword ptr [esi + 0x350] */ r_eax = R32((u32)(r_esi+0x350u));
    /* 0068a4bd: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0068a4bf: jne 0x68a4c8 */ if (!fZ) goto L_0068a4c8;
L_0068a4c1:; BB(0x0068a4c1);
    /* 0068a4c1: mov eax, 1 */ r_eax = 0x1u;
    /* 0068a4c6: jmp 0x68a4ca */ goto L_0068a4ca;
L_0068a4c8:; BB(0x0068a4c8);
    /* 0068a4c8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0068a4ca:; BB(0x0068a4ca);
    /* 0068a4ca: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068a4cc: je 0x68a86e */ if (fZ) goto L_0068a86e;
L_0068a4d2:; BB(0x0068a4d2);
    /* 0068a4d2: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 0068a4d6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068a4d7: call 0x6a9f60 */ r_esp -= 4; W32(r_esp, 0x68a4dcu); f_006a9f60();
    /* 0068a4dc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0068a4dd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068a4df: je 0x68a519 */ if (fZ) goto L_0068a519;
L_0068a4e1:; BB(0x0068a4e1);
    /* 0068a4e1: mov eax, dword ptr [esi + 0x538] */ r_eax = R32((u32)(r_esi+0x538u));
    /* 0068a4e7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068a4e9: jne 0x68a4f2 */ if (!fZ) goto L_0068a4f2;
L_0068a4eb:; BB(0x0068a4eb);
    /* 0068a4eb: mov eax, 1 */ r_eax = 0x1u;
    /* 0068a4f0: jmp 0x68a4f4 */ goto L_0068a4f4;
L_0068a4f2:; BB(0x0068a4f2);
    /* 0068a4f2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0068a4f4:; BB(0x0068a4f4);
    /* 0068a4f4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068a4f6: je 0x68a519 */ if (fZ) goto L_0068a519;
L_0068a4f8:; BB(0x0068a4f8);
    /* 0068a4f8: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 0068a4fc: call 0x68c10d */ r_esp -= 4; W32(r_esp, 0x68a501u); f_0068c10d();
    /* 0068a501: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068a503: je 0x68a86e */ if (fZ) goto L_0068a86e;
L_0068a509:; BB(0x0068a509);
    /* 0068a509: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 0068a50d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068a50e: call 0x6aa040 */ r_esp -= 4; W32(r_esp, 0x68a513u); f_006aa040();
    /* 0068a513: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0068a514: jmp 0x68a86e */ goto L_0068a86e;
L_0068a519:; BB(0x0068a519);
    /* 0068a519: mov edi, 2 */ r_edi = 0x2u;
    /* 0068a51e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0068a51f: mov ecx, esi */ r_ecx = r_esi;
    /* 0068a521: call 0x68aa04 */ r_esp -= 4; W32(r_esp, 0x68a526u); f_0068aa04();
    /* 0068a526: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0068a527: movsx ebx, ax */ r_ebx = (u32)(i32)(i16)(u16)r_eax;
    /* 0068a52a: mov ecx, esi */ r_ecx = r_esi;
    /* 0068a52c: call 0x68aa6c */ r_esp -= 4; W32(r_esp, 0x68a531u); f_0068aa6c();
    /* 0068a531: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 0068a534: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0068a538: mov byte ptr [esi + 0x354], bl */ W8((u32)(r_esi+0x354u), (u8)r_ebx);
    /* 0068a53e: mov byte ptr [esi + 0x355], dl */ W8((u32)(r_esi+0x355u), (u8)r_edx);
    /* 0068a544: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068a546: je 0x68a86e */ if (fZ) goto L_0068a86e;
L_0068a54c:; BB(0x0068a54c);
    /* 0068a54c: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068a54f: je 0x68a86e */ if (fZ) goto L_0068a86e;
L_0068a555:; BB(0x0068a555);
    /* 0068a555: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068a558: je 0x68a8ae */ if (fZ) goto L_0068a8ae;
L_0068a55e:; BB(0x0068a55e);
    /* 0068a55e: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068a561: je 0x68a885 */ if (fZ) goto L_0068a885;
L_0068a567:; BB(0x0068a567);
    /* 0068a567: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068a56a: je 0x68a5c5 */ if (fZ) goto L_0068a5c5;
L_0068a56c:; BB(0x0068a56c);
    /* 0068a56c: cmp ebx, 5 */ {  u32 a = r_ebx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068a56f: jne 0x68a59b */ if (!fZ) goto L_0068a59b;
L_0068a571:; BB(0x0068a571);
    /* 0068a571: mov eax, edx */ r_eax = r_edx;
    /* 0068a573: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068a574: mov ecx, esi */ r_ecx = r_esi;
    /* 0068a576: call 0x69a8c0 */ r_esp -= 4; W32(r_esp, 0x68a57bu); f_0069a8c0();
    /* 0068a57b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068a57d: je 0x68a86e */ if (fZ) goto L_0068a86e;
L_0068a583:; BB(0x0068a583);
    /* 0068a583: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0068a587: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0068a589: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0068a58b: mov word ptr [esi + 0x4e6], ax */ W16((u32)(r_esi+0x4e6u), (u16)r_eax);
    /* 0068a592: mov ecx, esi */ r_ecx = r_esi;
    /* 0068a594: call 0x698a08 */ r_esp -= 4; W32(r_esp, 0x68a599u); f_00698a08();
    /* 0068a599: jmp 0x68a5e8 */ goto L_0068a5e8;
L_0068a59b:; BB(0x0068a59b);
    /* 0068a59b: cmp ebx, 6 */ {  u32 a = r_ebx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068a59e: jne 0x68a86e */ if (!fZ) goto L_0068a86e;
L_0068a5a4:; BB(0x0068a5a4);
    /* 0068a5a4: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 0068a5a8: call 0x68c10d */ r_esp -= 4; W32(r_esp, 0x68a5adu); f_0068c10d();
    /* 0068a5ad: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068a5af: je 0x68a86e */ if (fZ) goto L_0068a86e;
L_0068a5b5:; BB(0x0068a5b5);
    /* 0068a5b5: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 0068a5b9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068a5ba: call 0x6aa040 */ r_esp -= 4; W32(r_esp, 0x68a5bfu); f_006aa040();
    /* 0068a5bf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0068a5c0: jmp 0x68a86e */ goto L_0068a86e;
L_0068a5c5:; BB(0x0068a5c5);
    /* 0068a5c5: mov ecx, esi */ r_ecx = r_esi;
    /* 0068a5c7: call 0x68aa8c */ r_esp -= 4; W32(r_esp, 0x68a5ccu); f_0068aa8c();
    /* 0068a5cc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068a5ce: je 0x68a86e */ if (fZ) goto L_0068a86e;
L_0068a5d4:; BB(0x0068a5d4);
    /* 0068a5d4: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0068a5d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068a5d9: mov ecx, esi */ r_ecx = r_esi;
    /* 0068a5db: call 0x68aadc */ r_esp -= 4; W32(r_esp, 0x68a5e0u); f_0068aadc();
    /* 0068a5e0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068a5e2: je 0x68a86e */ if (fZ) goto L_0068a86e;
L_0068a5e8:; BB(0x0068a5e8);
    /* 0068a5e8: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0068a5ea: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 0068a5ee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068a5ef: call 0x71825c */ r_esp -= 4; W32(r_esp, 0x68a5f4u); f_0071825c();
    /* 0068a5f4: mov eax, 1 */ r_eax = 0x1u;
    /* 0068a5f9: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068a5fc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0068a5fd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068a5fe: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0068a5ff: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068a600: ret  */ FN_RET(0x0068a40c); r_esp += 4; return;
L_0068a601:; BB(0x0068a601);
    /* 0068a601: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 0068a605: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068a606: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0068a608: call 0x6a7cc4 */ r_esp -= 4; W32(r_esp, 0x68a60du); f_006a7cc4();
    /* 0068a60d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068a60e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0068a610: call 0x6a7c24 */ r_esp -= 4; W32(r_esp, 0x68a615u); f_006a7c24();
    /* 0068a615: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068a617: je 0x68a720 */ if (fZ) goto L_0068a720;
L_0068a61d:; BB(0x0068a61d);
    /* 0068a61d: mov eax, dword ptr [esi + 0x350] */ r_eax = R32((u32)(r_esi+0x350u));
    /* 0068a623: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0068a625: jne 0x68a62e */ if (!fZ) goto L_0068a62e;
L_0068a627:; BB(0x0068a627);
    /* 0068a627: mov eax, 1 */ r_eax = 0x1u;
    /* 0068a62c: jmp 0x68a630 */ goto L_0068a630;
L_0068a62e:; BB(0x0068a62e);
    /* 0068a62e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0068a630:; BB(0x0068a630);
    /* 0068a630: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068a632: je 0x68a86e */ if (fZ) goto L_0068a86e;
L_0068a638:; BB(0x0068a638);
    /* 0068a638: mov edi, 3 */ r_edi = 0x3u;
    /* 0068a63d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0068a63e: mov ecx, esi */ r_ecx = r_esi;
    /* 0068a640: call 0x68aa04 */ r_esp -= 4; W32(r_esp, 0x68a645u); f_0068aa04();
    /* 0068a645: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0068a646: movsx ebx, ax */ r_ebx = (u32)(i32)(i16)(u16)r_eax;
    /* 0068a649: mov ecx, esi */ r_ecx = r_esi;
    /* 0068a64b: call 0x68aa6c */ r_esp -= 4; W32(r_esp, 0x68a650u); f_0068aa6c();
    /* 0068a650: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 0068a653: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0068a657: mov byte ptr [esi + 0x354], bl */ W8((u32)(r_esi+0x354u), (u8)r_ebx);
    /* 0068a65d: mov byte ptr [esi + 0x355], dl */ W8((u32)(r_esi+0x355u), (u8)r_edx);
    /* 0068a663: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068a665: je 0x68a86e */ if (fZ) goto L_0068a86e;
L_0068a66b:; BB(0x0068a66b);
    /* 0068a66b: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068a66e: je 0x68a86e */ if (fZ) goto L_0068a86e;
L_0068a674:; BB(0x0068a674);
    /* 0068a674: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068a677: je 0x68a927 */ if (fZ) goto L_0068a927;
L_0068a67d:; BB(0x0068a67d);
    /* 0068a67d: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068a680: je 0x68a8fa */ if (fZ) goto L_0068a8fa;
L_0068a686:; BB(0x0068a686);
    /* 0068a686: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068a689: je 0x68a6e4 */ if (fZ) goto L_0068a6e4;
L_0068a68b:; BB(0x0068a68b);
    /* 0068a68b: cmp ebx, 5 */ {  u32 a = r_ebx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068a68e: jne 0x68a6ba */ if (!fZ) goto L_0068a6ba;
L_0068a690:; BB(0x0068a690);
    /* 0068a690: mov eax, edx */ r_eax = r_edx;
    /* 0068a692: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068a693: mov ecx, esi */ r_ecx = r_esi;
    /* 0068a695: call 0x69a8c0 */ r_esp -= 4; W32(r_esp, 0x68a69au); f_0069a8c0();
    /* 0068a69a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068a69c: je 0x68a86e */ if (fZ) goto L_0068a86e;
L_0068a6a2:; BB(0x0068a6a2);
    /* 0068a6a2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0068a6a6: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0068a6a8: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0068a6aa: mov word ptr [esi + 0x4e6], ax */ W16((u32)(r_esi+0x4e6u), (u16)r_eax);
    /* 0068a6b1: mov ecx, esi */ r_ecx = r_esi;
    /* 0068a6b3: call 0x698a08 */ r_esp -= 4; W32(r_esp, 0x68a6b8u); f_00698a08();
    /* 0068a6b8: jmp 0x68a707 */ goto L_0068a707;
L_0068a6ba:; BB(0x0068a6ba);
    /* 0068a6ba: cmp ebx, 6 */ {  u32 a = r_ebx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068a6bd: jne 0x68a86e */ if (!fZ) goto L_0068a86e;
L_0068a6c3:; BB(0x0068a6c3);
    /* 0068a6c3: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 0068a6c7: call 0x68c10d */ r_esp -= 4; W32(r_esp, 0x68a6ccu); f_0068c10d();
    /* 0068a6cc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068a6ce: je 0x68a86e */ if (fZ) goto L_0068a86e;
L_0068a6d4:; BB(0x0068a6d4);
    /* 0068a6d4: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 0068a6d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068a6d9: call 0x6aa040 */ r_esp -= 4; W32(r_esp, 0x68a6deu); f_006aa040();
    /* 0068a6de: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0068a6df: jmp 0x68a86e */ goto L_0068a86e;
L_0068a6e4:; BB(0x0068a6e4);
    /* 0068a6e4: mov ecx, esi */ r_ecx = r_esi;
    /* 0068a6e6: call 0x68aa8c */ r_esp -= 4; W32(r_esp, 0x68a6ebu); f_0068aa8c();
    /* 0068a6eb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068a6ed: je 0x68a86e */ if (fZ) goto L_0068a86e;
L_0068a6f3:; BB(0x0068a6f3);
    /* 0068a6f3: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0068a6f7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068a6f8: mov ecx, esi */ r_ecx = r_esi;
    /* 0068a6fa: call 0x68aadc */ r_esp -= 4; W32(r_esp, 0x68a6ffu); f_0068aadc();
    /* 0068a6ff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068a701: je 0x68a86e */ if (fZ) goto L_0068a86e;
L_0068a707:; BB(0x0068a707);
    /* 0068a707: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0068a709: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 0068a70d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068a70e: call 0x71825c */ r_esp -= 4; W32(r_esp, 0x68a713u); f_0071825c();
    /* 0068a713: mov eax, 1 */ r_eax = 0x1u;
    /* 0068a718: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068a71b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0068a71c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068a71d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0068a71e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068a71f: ret  */ FN_RET(0x0068a40c); r_esp += 4; return;
L_0068a720:; BB(0x0068a720);
    /* 0068a720: call 0x7c00c4 */ r_esp -= 4; W32(r_esp, 0x68a725u); f_007c00c4();
    /* 0068a725: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068a727: jne 0x68a73b */ if (!fZ) goto L_0068a73b;
L_0068a729:; BB(0x0068a729);
    /* 0068a729: call 0x7c00d0 */ r_esp -= 4; W32(r_esp, 0x68a72eu); f_007c00d0();
    /* 0068a72e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068a730: jne 0x68a73b */ if (!fZ) goto L_0068a73b;
L_0068a732:; BB(0x0068a732);
    /* 0068a732: call 0x7c00dc */ r_esp -= 4; W32(r_esp, 0x68a737u); f_007c00dc();
    /* 0068a737: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068a739: je 0x68a745 */ if (fZ) goto L_0068a745;
L_0068a73b:; BB(0x0068a73b);
    /* 0068a73b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068a73d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068a740: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0068a741: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068a742: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0068a743: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068a744: ret  */ FN_RET(0x0068a40c); r_esp += 4; return;
L_0068a745:; BB(0x0068a745);
    /* 0068a745: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 0068a749: mov dword ptr [esp + 0xc], esi */ W32((u32)(r_esp+0xcu), r_esi);
    /* 0068a74d: mov eax, 0x23 */ r_eax = 0x23u;
    /* 0068a752: mov edi, 4 */ r_edi = 0x4u;
    /* 0068a757: mov ebp, eax */ r_ebp = r_eax;
L_0068a759:; BB(0x0068a759);
    /* 0068a759: call 0x791b48 */ r_esp -= 4; W32(r_esp, 0x68a75eu); f_00791b48();
    /* 0068a75e: mov edx, ebp */ r_edx = r_ebp;
    /* 0068a760: and edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0068a766: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068a767: mov ecx, eax */ r_ecx = r_eax;
    /* 0068a769: call 0x78fd68 */ r_esp -= 4; W32(r_esp, 0x68a76eu); f_0078fd68();
    /* 0068a76e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 0068a770: je 0x68a85f */ if (fZ) goto L_0068a85f;
L_0068a776:; BB(0x0068a776);
    /* 0068a776: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 0068a77a: mov edx, 1 */ r_edx = 0x1u;
    /* 0068a77f: mov ecx, edi */ r_ecx = r_edi;
    /* 0068a781: shl edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0068a783: test dword ptr [ebx + 0x350], edx */ {  u32 a = R32((u32)(r_ebx+0x350u)); u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068a789: jne 0x68a792 */ if (!fZ) goto L_0068a792;
L_0068a78b:; BB(0x0068a78b);
    /* 0068a78b: mov edx, 1 */ r_edx = 0x1u;
    /* 0068a790: jmp 0x68a794 */ goto L_0068a794;
L_0068a792:; BB(0x0068a792);
    /* 0068a792: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_0068a794:; BB(0x0068a794);
    /* 0068a794: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068a796: je 0x68a85f */ if (fZ) goto L_0068a85f;
L_0068a79c:; BB(0x0068a79c);
    /* 0068a79c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0068a79d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0068a79f: call 0x68aa04 */ r_esp -= 4; W32(r_esp, 0x68a7a4u); f_0068aa04();
    /* 0068a7a4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0068a7a5: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0068a7a7: movsx ebx, ax */ r_ebx = (u32)(i32)(i16)(u16)r_eax;
    /* 0068a7aa: call 0x68aa6c */ r_esp -= 4; W32(r_esp, 0x68a7afu); f_0068aa6c();
    /* 0068a7af: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0068a7b3: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0068a7b6: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0068a7ba: mov byte ptr [edx + 0x354], bl */ W8((u32)(r_edx+0x354u), (u8)r_ebx);
    /* 0068a7c0: mov byte ptr [edx + 0x355], al */ W8((u32)(r_edx+0x355u), (u8)r_eax);
    /* 0068a7c6: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068a7c8: je 0x68a85f */ if (fZ) goto L_0068a85f;
L_0068a7ce:; BB(0x0068a7ce);
    /* 0068a7ce: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068a7d1: je 0x68a85f */ if (fZ) goto L_0068a85f;
L_0068a7d7:; BB(0x0068a7d7);
    /* 0068a7d7: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068a7da: je 0x68a9aa */ if (fZ) goto L_0068a9aa;
L_0068a7e0:; BB(0x0068a7e0);
    /* 0068a7e0: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068a7e3: je 0x68a977 */ if (fZ) goto L_0068a977;
L_0068a7e9:; BB(0x0068a7e9);
    /* 0068a7e9: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068a7ec: je 0x68a842 */ if (fZ) goto L_0068a842;
L_0068a7ee:; BB(0x0068a7ee);
    /* 0068a7ee: cmp ebx, 5 */ {  u32 a = r_ebx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068a7f1: jne 0x68a81f */ if (!fZ) goto L_0068a81f;
L_0068a7f3:; BB(0x0068a7f3);
    /* 0068a7f3: mov edx, eax */ r_edx = r_eax;
    /* 0068a7f5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068a7f6: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 0068a7fa: call 0x69a8c0 */ r_esp -= 4; W32(r_esp, 0x68a7ffu); f_0069a8c0();
    /* 0068a7ff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068a801: je 0x68a85f */ if (fZ) goto L_0068a85f;
L_0068a803:; BB(0x0068a803);
    /* 0068a803: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0068a807: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 0068a80b: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0068a80d: mov word ptr [esi + 0x4e6], ax */ W16((u32)(r_esi+0x4e6u), (u16)r_eax);
    /* 0068a814: mov ecx, esi */ r_ecx = r_esi;
    /* 0068a816: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0068a818: call 0x698a08 */ r_esp -= 4; W32(r_esp, 0x68a81du); f_00698a08();
    /* 0068a81d: jmp 0x68a878 */ goto L_0068a878;
L_0068a81f:; BB(0x0068a81f);
    /* 0068a81f: cmp ebx, 6 */ {  u32 a = r_ebx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068a822: jne 0x68a85f */ if (!fZ) goto L_0068a85f;
L_0068a824:; BB(0x0068a824);
    /* 0068a824: movzx eax, word ptr [edx + 0x1c] */ r_eax = (u32)R16((u32)(r_edx+0x1cu));
    /* 0068a828: call 0x68c10d */ r_esp -= 4; W32(r_esp, 0x68a82du); f_0068c10d();
    /* 0068a82d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068a82f: je 0x68a85f */ if (fZ) goto L_0068a85f;
L_0068a831:; BB(0x0068a831);
    /* 0068a831: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0068a835: movzx ebx, word ptr [edx + 0x1c] */ r_ebx = (u32)R16((u32)(r_edx+0x1cu));
    /* 0068a839: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0068a83a: call 0x6aa040 */ r_esp -= 4; W32(r_esp, 0x68a83fu); f_006aa040();
    /* 0068a83f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0068a840: jmp 0x68a85f */ goto L_0068a85f;
L_0068a842:; BB(0x0068a842);
    /* 0068a842: mov ecx, edx */ r_ecx = r_edx;
    /* 0068a844: call 0x68aa8c */ r_esp -= 4; W32(r_esp, 0x68a849u); f_0068aa8c();
    /* 0068a849: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068a84b: je 0x68a85f */ if (fZ) goto L_0068a85f;
L_0068a84d:; BB(0x0068a84d);
    /* 0068a84d: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 0068a851: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068a852: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 0068a856: call 0x68aadc */ r_esp -= 4; W32(r_esp, 0x68a85bu); f_0068aadc();
    /* 0068a85b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068a85d: jne 0x68a878 */ if (!fZ) goto L_0068a878;
L_0068a85f:; BB(0x0068a85f);
    /* 0068a85f: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0068a862: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0068a865: cmp ebp, 0x2c */ {  u32 a = r_ebp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0068a868: jle 0x68a759 */ if ((fZ||fS!=fO)) goto L_0068a759;
L_0068a86e:; BB(0x0068a86e);
    /* 0068a86e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068a870: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068a873: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0068a874: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068a875: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0068a876: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068a877: ret  */ FN_RET(0x0068a40c); r_esp += 4; return;
L_0068a878:; BB(0x0068a878);
    /* 0068a878: mov eax, 1 */ r_eax = 0x1u;
    /* 0068a87d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068a880: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0068a881: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068a882: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0068a883: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068a884: ret  */ FN_RET(0x0068a40c); r_esp += 4; return;
L_0068a885:; BB(0x0068a885);
    /* 0068a885: mov eax, edx */ r_eax = r_edx;
    /* 0068a887: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068a888: mov ecx, esi */ r_ecx = r_esi;
    /* 0068a88a: call 0x69a088 */ r_esp -= 4; W32(r_esp, 0x68a88fu); f_0069a088();
    /* 0068a88f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068a891: je 0x68a86e */ if (fZ) goto L_0068a86e;
L_0068a893:; BB(0x0068a893);
    /* 0068a893: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0068a897: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0068a899: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0068a89b: mov word ptr [esi + 0x464], ax */ W16((u32)(r_esi+0x464u), (u16)r_eax);
    /* 0068a8a2: mov ecx, esi */ r_ecx = r_esi;
    /* 0068a8a4: call 0x698a08 */ r_esp -= 4; W32(r_esp, 0x68a8a9u); f_00698a08();
    /* 0068a8a9: jmp 0x68a5e8 */ goto L_0068a5e8;
L_0068a8ae:; BB(0x0068a8ae);
    /* 0068a8ae: mov eax, edx */ r_eax = r_edx;
    /* 0068a8b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068a8b1: mov word ptr [esi + 0x8a4], ax */ W16((u32)(r_esi+0x8a4u), (u16)r_eax);
    /* 0068a8b8: mov ecx, esi */ r_ecx = r_esi;
    /* 0068a8ba: call 0x6994d4 */ r_esp -= 4; W32(r_esp, 0x68a8bfu); f_006994d4();
    /* 0068a8bf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068a8c1: je 0x68a86e */ if (fZ) goto L_0068a86e;
L_0068a8c3:; BB(0x0068a8c3);
    /* 0068a8c3: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0068a8c5: call 0x6a7c8c */ r_esp -= 4; W32(r_esp, 0x68a8cau); f_006a7c8c();
    /* 0068a8ca: fcomp dword ptr [0x93c754] */ fx_compare(ST(0), R_F32((u32)(0x93c754u))); FPOP();
    /* 0068a8d0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0068a8d2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0068a8d3: jb 0x68a8e7 */ if (fC) goto L_0068a8e7;
L_0068a8d5:; BB(0x0068a8d5);
    /* 0068a8d5: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0068a8d7: call 0x6a7cac */ r_esp -= 4; W32(r_esp, 0x68a8dcu); f_006a7cac();
    /* 0068a8dc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068a8dd: mov ecx, esi */ r_ecx = r_esi;
    /* 0068a8df: call 0x68c038 */ r_esp -= 4; W32(r_esp, 0x68a8e4u); f_0068c038();
    /* 0068a8e4: mov dword ptr [esi + 0x60], eax */ W32((u32)(r_esi+0x60u), r_eax);
L_0068a8e7:; BB(0x0068a8e7);
    /* 0068a8e7: mov eax, 5 */ r_eax = 0x5u;
    /* 0068a8ec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068a8ed: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068a8ee: mov ecx, esi */ r_ecx = r_esi;
    /* 0068a8f0: call 0x698a08 */ r_esp -= 4; W32(r_esp, 0x68a8f5u); f_00698a08();
    /* 0068a8f5: jmp 0x68a5e8 */ goto L_0068a5e8;
L_0068a8fa:; BB(0x0068a8fa);
    /* 0068a8fa: mov eax, edx */ r_eax = r_edx;
    /* 0068a8fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068a8fd: mov ecx, esi */ r_ecx = r_esi;
    /* 0068a8ff: call 0x69a088 */ r_esp -= 4; W32(r_esp, 0x68a904u); f_0069a088();
    /* 0068a904: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068a906: je 0x68a86e */ if (fZ) goto L_0068a86e;
L_0068a90c:; BB(0x0068a90c);
    /* 0068a90c: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0068a910: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0068a912: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0068a914: mov word ptr [esi + 0x464], ax */ W16((u32)(r_esi+0x464u), (u16)r_eax);
    /* 0068a91b: mov ecx, esi */ r_ecx = r_esi;
    /* 0068a91d: call 0x698a08 */ r_esp -= 4; W32(r_esp, 0x68a922u); f_00698a08();
    /* 0068a922: jmp 0x68a707 */ goto L_0068a707;
L_0068a927:; BB(0x0068a927);
    /* 0068a927: mov eax, edx */ r_eax = r_edx;
    /* 0068a929: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068a92a: mov word ptr [esi + 0x8a4], ax */ W16((u32)(r_esi+0x8a4u), (u16)r_eax);
    /* 0068a931: mov ecx, esi */ r_ecx = r_esi;
    /* 0068a933: call 0x6994d4 */ r_esp -= 4; W32(r_esp, 0x68a938u); f_006994d4();
    /* 0068a938: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068a93a: je 0x68a86e */ if (fZ) goto L_0068a86e;
L_0068a940:; BB(0x0068a940);
    /* 0068a940: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0068a942: call 0x6a7c8c */ r_esp -= 4; W32(r_esp, 0x68a947u); f_006a7c8c();
    /* 0068a947: fcomp dword ptr [0x93c754] */ fx_compare(ST(0), R_F32((u32)(0x93c754u))); FPOP();
    /* 0068a94d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0068a94f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0068a950: jb 0x68a964 */ if (fC) goto L_0068a964;
L_0068a952:; BB(0x0068a952);
    /* 0068a952: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0068a954: call 0x6a7cac */ r_esp -= 4; W32(r_esp, 0x68a959u); f_006a7cac();
    /* 0068a959: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068a95a: mov ecx, esi */ r_ecx = r_esi;
    /* 0068a95c: call 0x68c038 */ r_esp -= 4; W32(r_esp, 0x68a961u); f_0068c038();
    /* 0068a961: mov dword ptr [esi + 0x60], eax */ W32((u32)(r_esi+0x60u), r_eax);
L_0068a964:; BB(0x0068a964);
    /* 0068a964: mov eax, 5 */ r_eax = 0x5u;
    /* 0068a969: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068a96a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068a96b: mov ecx, esi */ r_ecx = r_esi;
    /* 0068a96d: call 0x698a08 */ r_esp -= 4; W32(r_esp, 0x68a972u); f_00698a08();
    /* 0068a972: jmp 0x68a707 */ goto L_0068a707;
L_0068a977:; BB(0x0068a977);
    /* 0068a977: mov edx, eax */ r_edx = r_eax;
    /* 0068a979: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068a97a: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 0068a97e: call 0x69a088 */ r_esp -= 4; W32(r_esp, 0x68a983u); f_0069a088();
    /* 0068a983: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068a985: je 0x68a85f */ if (fZ) goto L_0068a85f;
L_0068a98b:; BB(0x0068a98b);
    /* 0068a98b: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0068a98f: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 0068a993: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0068a995: mov word ptr [esi + 0x464], ax */ W16((u32)(r_esi+0x464u), (u16)r_eax);
    /* 0068a99c: mov ecx, esi */ r_ecx = r_esi;
    /* 0068a99e: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0068a9a0: call 0x698a08 */ r_esp -= 4; W32(r_esp, 0x68a9a5u); f_00698a08();
    /* 0068a9a5: jmp 0x68a878 */ goto L_0068a878;
L_0068a9aa:; BB(0x0068a9aa);
    /* 0068a9aa: mov edx, eax */ r_edx = r_eax;
    /* 0068a9ac: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0068a9b0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068a9b1: mov word ptr [ecx + 0x8a4], dx */ W16((u32)(r_ecx+0x8a4u), (u16)r_edx);
    /* 0068a9b8: call 0x6994d4 */ r_esp -= 4; W32(r_esp, 0x68a9bdu); f_006994d4();
    /* 0068a9bd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068a9bf: je 0x68a85f */ if (fZ) goto L_0068a85f;
L_0068a9c5:; BB(0x0068a9c5);
    /* 0068a9c5: mov ebp, dword ptr [esp + 4] */ r_ebp = R32((u32)(r_esp+0x4u));
    /* 0068a9c9: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 0068a9cd: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0068a9cf: call 0x6a7c8c */ r_esp -= 4; W32(r_esp, 0x68a9d4u); f_006a7c8c();
    /* 0068a9d4: fcomp dword ptr [0x93c754] */ fx_compare(ST(0), R_F32((u32)(0x93c754u))); FPOP();
    /* 0068a9da: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0068a9dc: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0068a9dd: jb 0x68a9f1 */ if (fC) goto L_0068a9f1;
L_0068a9df:; BB(0x0068a9df);
    /* 0068a9df: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0068a9e1: call 0x6a7cac */ r_esp -= 4; W32(r_esp, 0x68a9e6u); f_006a7cac();
    /* 0068a9e6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068a9e7: mov ecx, esi */ r_ecx = r_esi;
    /* 0068a9e9: call 0x68c038 */ r_esp -= 4; W32(r_esp, 0x68a9eeu); f_0068c038();
    /* 0068a9ee: mov dword ptr [esi + 0x60], eax */ W32((u32)(r_esi+0x60u), r_eax);
L_0068a9f1:; BB(0x0068a9f1);
    /* 0068a9f1: mov eax, 5 */ r_eax = 0x5u;
    /* 0068a9f6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068a9f7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068a9f8: mov ecx, esi */ r_ecx = r_esi;
    /* 0068a9fa: call 0x698a08 */ r_esp -= 4; W32(r_esp, 0x68a9ffu); f_00698a08();
    /* 0068a9ff: jmp 0x68a878 */ goto L_0068a878;
}

void f_0068aa04(void) /* sub_68AA04 */
{
    FN_ENTER(0x0068aa04);
    /* 0068aa04: call 0x68aa24 */ r_esp -= 4; W32(r_esp, 0x68aa09u); f_0068aa24();
    /* 0068aa09: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0068aa0b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068aa0d: jne 0x68aa14 */ if (!fZ) goto L_0068aa14;
L_0068aa0f:; BB(0x0068aa0f);
    /* 0068aa0f: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068aa12: jmp 0x68aa17 */ goto L_0068aa17;
L_0068aa14:; BB(0x0068aa14);
    /* 0068aa14: add eax, 0x3c */ {  u32 a = r_eax; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_0068aa17:; BB(0x0068aa17);
    /* 0068aa17: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0068aa1b: movzx eax, byte ptr [eax + edx*4] */ r_eax = (u32)R8((u32)(r_eax+r_edx*4));
    /* 0068aa1f: ret 4 */ FN_RET(0x0068aa04); r_esp += 8; return;
}

void f_0068aa24(void) /* sub_68AA24 */
{
    FN_ENTER(0x0068aa24);
    /* 0068aa24: mov eax, dword ptr [ecx + 0x524] */ r_eax = R32((u32)(r_ecx+0x524u));
    /* 0068aa2a: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0068aa2c: je 0x68aa35 */ if (fZ) goto L_0068aa35;
L_0068aa2e:; BB(0x0068aa2e);
    /* 0068aa2e: mov eax, 1 */ r_eax = 0x1u;
    /* 0068aa33: jmp 0x68aa37 */ goto L_0068aa37;
L_0068aa35:; BB(0x0068aa35);
    /* 0068aa35: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0068aa37:; BB(0x0068aa37);
    /* 0068aa37: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068aa39: je 0x68aa62 */ if (fZ) goto L_0068aa62;
L_0068aa3b:; BB(0x0068aa3b);
    /* 0068aa3b: lea edx, [ecx + 0x538] */ r_edx = (u32)(r_ecx+0x538u);
    /* 0068aa41: lea eax, [ecx + 0x5ac] */ r_eax = (u32)(r_ecx+0x5acu);
    /* 0068aa47: mov ecx, dword ptr [ecx + 0x5ac] */ r_ecx = R32((u32)(r_ecx+0x5acu));
    /* 0068aa4d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068aa4f: jne 0x68aa58 */ if (!fZ) goto L_0068aa58;
L_0068aa51:; BB(0x0068aa51);
    /* 0068aa51: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0068aa56: jmp 0x68aa5a */ goto L_0068aa5a;
L_0068aa58:; BB(0x0068aa58);
    /* 0068aa58: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_0068aa5a:; BB(0x0068aa5a);
    /* 0068aa5a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0068aa5c: je 0x68aa61 */ if (fZ) goto L_0068aa61;
L_0068aa5e:; BB(0x0068aa5e);
    /* 0068aa5e: mov eax, edx */ r_eax = r_edx;
    /* 0068aa60: ret  */ FN_RET(0x0068aa24); r_esp += 4; return;
L_0068aa61:; BB(0x0068aa61);
    /* 0068aa61: ret  */ FN_RET(0x0068aa24); r_esp += 4; return;
L_0068aa62:; BB(0x0068aa62);
    /* 0068aa62: add ecx, 0x538 */ {  u32 a = r_ecx; u32 b = 0x538u; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068aa68: mov eax, ecx */ r_eax = r_ecx;
    /* 0068aa6a: ret  */ FN_RET(0x0068aa24); r_esp += 4; return;
}

void f_0068aa6c(void) /* sub_68AA6C */
{
    FN_ENTER(0x0068aa6c);
    /* 0068aa6c: call 0x68aa24 */ r_esp -= 4; W32(r_esp, 0x68aa71u); f_0068aa24();
    /* 0068aa71: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0068aa73: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068aa75: jne 0x68aa7c */ if (!fZ) goto L_0068aa7c;
L_0068aa77:; BB(0x0068aa77);
    /* 0068aa77: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068aa7a: jmp 0x68aa7f */ goto L_0068aa7f;
L_0068aa7c:; BB(0x0068aa7c);
    /* 0068aa7c: add eax, 0x3c */ {  u32 a = r_eax; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_0068aa7f:; BB(0x0068aa7f);
    /* 0068aa7f: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0068aa83: movzx eax, byte ptr [eax + edx*4 + 1] */ r_eax = (u32)R8((u32)(r_eax+r_edx*4+0x1u));
    /* 0068aa88: ret 4 */ FN_RET(0x0068aa6c); r_esp += 8; return;
}

void f_0068aa8c(void) /* sub_68AA8C */
{
    FN_ENTER(0x0068aa8c);
    /* 0068aa8c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0068aa8d: mov esi, ecx */ r_esi = r_ecx;
    /* 0068aa8f: mov ecx, esi */ r_ecx = r_esi;
    /* 0068aa91: call 0x689410 */ r_esp -= 4; W32(r_esp, 0x68aa96u); f_00689410();
    /* 0068aa96: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068aa98: jne 0x68aaae */ if (!fZ) goto L_0068aaae;
L_0068aa9a:; BB(0x0068aa9a);
    /* 0068aa9a: mov ecx, esi */ r_ecx = r_esi;
    /* 0068aa9c: call 0x68aabc */ r_esp -= 4; W32(r_esp, 0x68aaa1u); f_0068aabc();
    /* 0068aaa1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068aaa3: je 0x68aaae */ if (fZ) goto L_0068aaae;
L_0068aaa5:; BB(0x0068aaa5);
    /* 0068aaa5: call 0x807d60 */ r_esp -= 4; W32(r_esp, 0x68aaaau); f_00807d60();
    /* 0068aaaa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0068aaac: jne 0x68aab2 */ if (!fZ) goto L_0068aab2;
L_0068aaae:; BB(0x0068aaae);
    /* 0068aaae: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0068aab0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0068aab1: ret  */ FN_RET(0x0068aa8c); r_esp += 4; return;
L_0068aab2:; BB(0x0068aab2);
    /* 0068aab2: mov eax, 1 */ r_eax = 0x1u;
    /* 0068aab7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0068aab8: ret  */ FN_RET(0x0068aa8c); r_esp += 4; return;
}

void f_0068aabc(void) /* sub_68AABC */
{
    FN_ENTER(0x0068aabc);
    /* 0068aabc: mov eax, dword ptr [ecx + 0x45c] */ r_eax = R32((u32)(r_ecx+0x45cu));
    /* 0068aac2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068aac4: je 0x68aad6 */ if (fZ) goto L_0068aad6;
L_0068aac6:; BB(0x0068aac6);
    /* 0068aac6: mov eax, dword ptr [eax + 0x1c] */ r_eax = R32((u32)(r_eax+0x1cu));
    /* 0068aac9: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0068aacb: je 0x68aad0 */ if (fZ) goto L_0068aad0;
L_0068aacd:; BB(0x0068aacd);
    /* 0068aacd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0068aacf: ret  */ FN_RET(0x0068aabc); r_esp += 4; return;
L_0068aad0:; BB(0x0068aad0);
    /* 0068aad0: mov eax, 1 */ r_eax = 0x1u;
    /* 0068aad5: ret  */ FN_RET(0x0068aabc); r_esp += 4; return;
L_0068aad6:; BB(0x0068aad6);
    /* 0068aad6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0068aad8: ret  */ FN_RET(0x0068aabc); r_esp += 4; return;
}

void f_0068aadc(void) /* sub_68AADC */
{
    FN_ENTER(0x0068aadc);
    /* 0068aadc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0068aadd: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068aade: sub esp, 0x16c */ {  u32 a = r_esp; u32 b = 0x16cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0068aae4: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0068aae6: mov eax, dword ptr [esp + 0x178] */ r_eax = R32((u32)(r_esp+0x178u));
    /* 0068aaed: cmp eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0068aaf0: ja 0x68bbd3 */ if ((!fC&&!fZ)) goto L_0068bbd3;
L_0068aaf6:; BB(0x0068aaf6);
    /* 0068aaf6: mov eax, dword ptr [eax*4 + 0x93c5c0] */ r_eax = R32((u32)(r_eax*4+0x93c5c0u));
    /* 0068aafd: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0068bbd3:; BB(0x0068bbd3);
    /* 0068bbd3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068bbd5: add esp, 0x16c */ {  u32 a = r_esp; u32 b = 0x16cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068bbdb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068bbdc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068bbdd: ret 4 */ FN_RET(0x0068aadc); r_esp += 8; return;
}

void f_0068aaff(void)
{
    FN_ENTER(0x0068aaff);
    /* 0068aaff: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0068ab01: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0068ab03: call 0x6959c0 */ r_esp -= 4; W32(r_esp, 0x68ab08u); f_006959c0();
    /* 0068ab08: add esp, 0x16c */ {  u32 a = r_esp; u32 b = 0x16cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068ab0e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068ab0f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068ab10: ret 4 */ FN_RET(0x0068aaff); r_esp += 8; return;
}

void f_0068ab13(void)
{
    FN_ENTER(0x0068ab13);
    /* 0068ab13: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0068ab15: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0068ab17: call 0x6959c0 */ r_esp -= 4; W32(r_esp, 0x68ab1cu); f_006959c0();
    /* 0068ab1c: add esp, 0x16c */ {  u32 a = r_esp; u32 b = 0x16cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068ab22: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068ab23: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068ab24: ret 4 */ FN_RET(0x0068ab13); r_esp += 8; return;
}

void f_0068ab27(void)
{
    FN_ENTER(0x0068ab27);
    /* 0068ab27: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0068ab29: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0068ab2b: call 0x6959c0 */ r_esp -= 4; W32(r_esp, 0x68ab30u); f_006959c0();
    /* 0068ab30: add esp, 0x16c */ {  u32 a = r_esp; u32 b = 0x16cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068ab36: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068ab37: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068ab38: ret 4 */ FN_RET(0x0068ab27); r_esp += 8; return;
}

void f_0068ab3b(void)
{
    FN_ENTER(0x0068ab3b);
    /* 0068ab3b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0068ab3d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0068ab3f: call 0x6959c0 */ r_esp -= 4; W32(r_esp, 0x68ab44u); f_006959c0();
    /* 0068ab44: add esp, 0x16c */ {  u32 a = r_esp; u32 b = 0x16cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068ab4a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068ab4b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068ab4c: ret 4 */ FN_RET(0x0068ab3b); r_esp += 8; return;
}

void f_0068ab4f(void)
{
    FN_ENTER(0x0068ab4f);
    /* 0068ab4f: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0068ab52: call 0x5d6a3c */ r_esp -= 4; W32(r_esp, 0x68ab57u); f_005d6a3c();
    /* 0068ab57: mov ecx, dword ptr [ebp + 0xdf4] */ r_ecx = R32((u32)(r_ebp+0xdf4u));
    /* 0068ab5d: mov byte ptr [esp], 3 */ W8((u32)(r_esp), 0x3u);
    /* 0068ab61: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0068ab64: mov byte ptr [esp + 1], 8 */ W8((u32)(r_esp+0x1u), 0x8u);
    /* 0068ab69: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068ab6a: call 0x6a4e50 */ r_esp -= 4; W32(r_esp, 0x68ab6fu); f_006a4e50();
    /* 0068ab6f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068ab71: je 0x68bc07 */ if (fZ) goto L_0068bc07;
L_0068ab77:; BB(0x0068ab77);
    /* 0068ab77: mov ecx, eax */ r_ecx = r_eax;
    /* 0068ab79: call 0x6a60dc */ r_esp -= 4; W32(r_esp, 0x68ab7eu); f_006a60dc();
    /* 0068ab7e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068ab80: je 0x68bbfa */ if (fZ) goto L_0068bbfa;
L_0068ab86:; BB(0x0068ab86);
    /* 0068ab86: mov edi, dword ptr [eax + 0xd8] */ r_edi = R32((u32)(r_eax+0xd8u));
    /* 0068ab8c: call 0x68be84 */ r_esp -= 4; W32(r_esp, 0x68ab91u); f_0068be84();
    /* 0068ab91: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068ab93: jne 0x68ac66 */ if (!fZ) goto L_0068ac66;
L_0068ab99:; BB(0x0068ab99);
    /* 0068ab99: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0068ab9a: mov ecx, dword ptr [ebp + 0xdf4] */ r_ecx = R32((u32)(r_ebp+0xdf4u));
    /* 0068aba0: call 0x6a6a60 */ r_esp -= 4; W32(r_esp, 0x68aba5u); f_006a6a60();
    /* 0068aba5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068aba7: je 0x68ac66 */ if (fZ) goto L_0068ac66;
L_0068abad:; BB(0x0068abad);
    /* 0068abad: mov ecx, eax */ r_ecx = r_eax;
    /* 0068abaf: call 0x6a60dc */ r_esp -= 4; W32(r_esp, 0x68abb4u); f_006a60dc();
    /* 0068abb4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068abb6: je 0x68ac66 */ if (fZ) goto L_0068ac66;
L_0068abbc:; BB(0x0068abbc);
    /* 0068abbc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068abbd: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0068abbf: call 0x68be94 */ r_esp -= 4; W32(r_esp, 0x68abc4u); f_0068be94();
    /* 0068abc4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068abc6: je 0x68ac57 */ if (fZ) goto L_0068ac57;
L_0068abcc:; BB(0x0068abcc);
    /* 0068abcc: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068abce: je 0x68abe9 */ if (fZ) goto L_0068abe9;
L_0068abd0:; BB(0x0068abd0);
    /* 0068abd0: movsx eax, word ptr [ebp + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 0068abd7: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068abda: jne 0x68abe3 */ if (!fZ) goto L_0068abe3;
L_0068abdc:; BB(0x0068abdc);
    /* 0068abdc: mov eax, 1 */ r_eax = 0x1u;
    /* 0068abe1: jmp 0x68abe5 */ goto L_0068abe5;
L_0068abe3:; BB(0x0068abe3);
    /* 0068abe3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0068abe5:; BB(0x0068abe5);
    /* 0068abe5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068abe7: jne 0x68ac66 */ if (!fZ) goto L_0068ac66;
L_0068abe9:; BB(0x0068abe9);
    /* 0068abe9: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0068abed: mov byte ptr [esp + 0x14], 0x27 */ W8((u32)(r_esp+0x14u), 0x27u);
    /* 0068abf2: mov word ptr [esp + 0x16], ax */ W16((u32)(r_esp+0x16u), (u16)r_eax);
    /* 0068abf7: mov byte ptr [esp + 0x15], 2 */ W8((u32)(r_esp+0x15u), 0x2u);
    /* 0068abfc: mov dword ptr [esp + 0x18], edi */ W32((u32)(r_esp+0x18u), r_edi);
    /* 0068ac00: lea ecx, [esp + 0x14] */ r_ecx = (u32)(r_esp+0x14u);
    /* 0068ac04: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x68ac09u); f_008003e0();
    /* 0068ac09: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0068ac0c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068ac0d: mov ecx, dword ptr [ebp + 0xdf4] */ r_ecx = R32((u32)(r_ebp+0xdf4u));
    /* 0068ac13: call 0x6a4e50 */ r_esp -= 4; W32(r_esp, 0x68ac18u); f_006a4e50();
    /* 0068ac18: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068ac1a: je 0x68bbed */ if (fZ) goto L_0068bbed;
L_0068ac20:; BB(0x0068ac20);
    /* 0068ac20: mov ecx, eax */ r_ecx = r_eax;
    /* 0068ac22: call 0x6a60dc */ r_esp -= 4; W32(r_esp, 0x68ac27u); f_006a60dc();
    /* 0068ac27: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068ac29: je 0x68bbe0 */ if (fZ) goto L_0068bbe0;
L_0068ac2f:; BB(0x0068ac2f);
    /* 0068ac2f: mov ecx, eax */ r_ecx = r_eax;
    /* 0068ac31: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x68ac36u); f_008173b4();
    /* 0068ac36: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068ac38: jne 0x68ac47 */ if (!fZ) goto L_0068ac47;
L_0068ac3a:; BB(0x0068ac3a);
    /* 0068ac3a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068ac3c: add esp, 0x16c */ {  u32 a = r_esp; u32 b = 0x16cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068ac42: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068ac43: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068ac44: ret 4 */ FN_RET(0x0068ab4f); r_esp += 8; return;
L_0068ac47:; BB(0x0068ac47);
    /* 0068ac47: mov eax, 1 */ r_eax = 0x1u;
    /* 0068ac4c: add esp, 0x16c */ {  u32 a = r_esp; u32 b = 0x16cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068ac52: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068ac53: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068ac54: ret 4 */ FN_RET(0x0068ab4f); r_esp += 8; return;
L_0068ac57:; BB(0x0068ac57);
    /* 0068ac57: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068ac59: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068ac5a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068ac5b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068ac5c: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 0068ac5e: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x68ac63u); f_00814298();
    /* 0068ac63: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0068ac66:; BB(0x0068ac66);
    /* 0068ac66: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068ac68: add esp, 0x16c */ {  u32 a = r_esp; u32 b = 0x16cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068ac6e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068ac6f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068ac70: ret 4 */ FN_RET(0x0068ab4f); r_esp += 8; return;
L_0068bbe0:; BB(0x0068bbe0);
    /* 0068bbe0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068bbe2: add esp, 0x16c */ {  u32 a = r_esp; u32 b = 0x16cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068bbe8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068bbe9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068bbea: ret 4 */ FN_RET(0x0068ab4f); r_esp += 8; return;
L_0068bbed:; BB(0x0068bbed);
    /* 0068bbed: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068bbef: add esp, 0x16c */ {  u32 a = r_esp; u32 b = 0x16cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068bbf5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068bbf6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068bbf7: ret 4 */ FN_RET(0x0068ab4f); r_esp += 8; return;
L_0068bbfa:; BB(0x0068bbfa);
    /* 0068bbfa: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068bbfc: add esp, 0x16c */ {  u32 a = r_esp; u32 b = 0x16cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068bc02: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068bc03: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068bc04: ret 4 */ FN_RET(0x0068ab4f); r_esp += 8; return;
L_0068bc07:; BB(0x0068bc07);
    /* 0068bc07: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068bc09: add esp, 0x16c */ {  u32 a = r_esp; u32 b = 0x16cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068bc0f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068bc10: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068bc11: ret 4 */ FN_RET(0x0068ab4f); r_esp += 8; return;
}

void f_0068ac73(void)
{
    FN_ENTER(0x0068ac73);
    /* 0068ac73: lea ecx, [esp + 0x1c] */ r_ecx = (u32)(r_esp+0x1cu);
    /* 0068ac77: call 0x5d6a3c */ r_esp -= 4; W32(r_esp, 0x68ac7cu); f_005d6a3c();
    /* 0068ac7c: mov ecx, dword ptr [ebp + 0xdf4] */ r_ecx = R32((u32)(r_ebp+0xdf4u));
    /* 0068ac82: mov byte ptr [esp + 0x1c], 3 */ W8((u32)(r_esp+0x1cu), 0x3u);
    /* 0068ac87: lea eax, [esp + 0x1c] */ r_eax = (u32)(r_esp+0x1cu);
    /* 0068ac8b: mov byte ptr [esp + 0x1d], 7 */ W8((u32)(r_esp+0x1du), 0x7u);
    /* 0068ac90: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068ac91: call 0x6a4e50 */ r_esp -= 4; W32(r_esp, 0x68ac96u); f_006a4e50();
    /* 0068ac96: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068ac98: je 0x68bc3b */ if (fZ) goto L_0068bc3b;
L_0068ac9e:; BB(0x0068ac9e);
    /* 0068ac9e: mov ecx, eax */ r_ecx = r_eax;
    /* 0068aca0: call 0x6a60dc */ r_esp -= 4; W32(r_esp, 0x68aca5u); f_006a60dc();
    /* 0068aca5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068aca7: je 0x68bc2e */ if (fZ) goto L_0068bc2e;
L_0068acad:; BB(0x0068acad);
    /* 0068acad: mov edi, dword ptr [eax + 0xd8] */ r_edi = R32((u32)(r_eax+0xd8u));
    /* 0068acb3: call 0x68be84 */ r_esp -= 4; W32(r_esp, 0x68acb8u); f_0068be84();
    /* 0068acb8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068acba: jne 0x68ad92 */ if (!fZ) goto L_0068ad92;
L_0068acc0:; BB(0x0068acc0);
    /* 0068acc0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0068acc1: mov ecx, dword ptr [ebp + 0xdf4] */ r_ecx = R32((u32)(r_ebp+0xdf4u));
    /* 0068acc7: call 0x6a6a60 */ r_esp -= 4; W32(r_esp, 0x68acccu); f_006a6a60();
    /* 0068accc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068acce: je 0x68ad92 */ if (fZ) goto L_0068ad92;
L_0068acd4:; BB(0x0068acd4);
    /* 0068acd4: mov ecx, eax */ r_ecx = r_eax;
    /* 0068acd6: call 0x6a60dc */ r_esp -= 4; W32(r_esp, 0x68acdbu); f_006a60dc();
    /* 0068acdb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068acdd: je 0x68ad92 */ if (fZ) goto L_0068ad92;
L_0068ace3:; BB(0x0068ace3);
    /* 0068ace3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068ace4: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0068ace6: call 0x68be94 */ r_esp -= 4; W32(r_esp, 0x68acebu); f_0068be94();
    /* 0068aceb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068aced: je 0x68ad83 */ if (fZ) goto L_0068ad83;
L_0068acf3:; BB(0x0068acf3);
    /* 0068acf3: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068acf5: je 0x68ad14 */ if (fZ) goto L_0068ad14;
L_0068acf7:; BB(0x0068acf7);
    /* 0068acf7: movsx eax, word ptr [ebp + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 0068acfe: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068ad01: jne 0x68ad0a */ if (!fZ) goto L_0068ad0a;
L_0068ad03:; BB(0x0068ad03);
    /* 0068ad03: mov eax, 1 */ r_eax = 0x1u;
    /* 0068ad08: jmp 0x68ad0c */ goto L_0068ad0c;
L_0068ad0a:; BB(0x0068ad0a);
    /* 0068ad0a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0068ad0c:; BB(0x0068ad0c);
    /* 0068ad0c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068ad0e: jne 0x68ad92 */ if (!fZ) goto L_0068ad92;
L_0068ad14:; BB(0x0068ad14);
    /* 0068ad14: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0068ad18: mov byte ptr [esp + 0x30], 0x27 */ W8((u32)(r_esp+0x30u), 0x27u);
    /* 0068ad1d: mov word ptr [esp + 0x32], ax */ W16((u32)(r_esp+0x32u), (u16)r_eax);
    /* 0068ad22: mov byte ptr [esp + 0x31], 2 */ W8((u32)(r_esp+0x31u), 0x2u);
    /* 0068ad27: mov dword ptr [esp + 0x34], edi */ W32((u32)(r_esp+0x34u), r_edi);
    /* 0068ad2b: lea ecx, [esp + 0x30] */ r_ecx = (u32)(r_esp+0x30u);
    /* 0068ad2f: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x68ad34u); f_008003e0();
    /* 0068ad34: lea eax, [esp + 0x1c] */ r_eax = (u32)(r_esp+0x1cu);
    /* 0068ad38: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068ad39: mov ecx, dword ptr [ebp + 0xdf4] */ r_ecx = R32((u32)(r_ebp+0xdf4u));
    /* 0068ad3f: call 0x6a4e50 */ r_esp -= 4; W32(r_esp, 0x68ad44u); f_006a4e50();
    /* 0068ad44: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068ad46: je 0x68bc21 */ if (fZ) goto L_0068bc21;
L_0068ad4c:; BB(0x0068ad4c);
    /* 0068ad4c: mov ecx, eax */ r_ecx = r_eax;
    /* 0068ad4e: call 0x6a60dc */ r_esp -= 4; W32(r_esp, 0x68ad53u); f_006a60dc();
    /* 0068ad53: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068ad55: je 0x68bc14 */ if (fZ) goto L_0068bc14;
L_0068ad5b:; BB(0x0068ad5b);
    /* 0068ad5b: mov ecx, eax */ r_ecx = r_eax;
    /* 0068ad5d: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x68ad62u); f_008173b4();
    /* 0068ad62: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068ad64: jne 0x68ad73 */ if (!fZ) goto L_0068ad73;
L_0068ad66:; BB(0x0068ad66);
    /* 0068ad66: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068ad68: add esp, 0x16c */ {  u32 a = r_esp; u32 b = 0x16cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068ad6e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068ad6f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068ad70: ret 4 */ FN_RET(0x0068ac73); r_esp += 8; return;
L_0068ad73:; BB(0x0068ad73);
    /* 0068ad73: mov eax, 1 */ r_eax = 0x1u;
    /* 0068ad78: add esp, 0x16c */ {  u32 a = r_esp; u32 b = 0x16cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068ad7e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068ad7f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068ad80: ret 4 */ FN_RET(0x0068ac73); r_esp += 8; return;
L_0068ad83:; BB(0x0068ad83);
    /* 0068ad83: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068ad85: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068ad86: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068ad87: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068ad88: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 0068ad8a: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x68ad8fu); f_00814298();
    /* 0068ad8f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0068ad92:; BB(0x0068ad92);
    /* 0068ad92: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068ad94: add esp, 0x16c */ {  u32 a = r_esp; u32 b = 0x16cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068ad9a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068ad9b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068ad9c: ret 4 */ FN_RET(0x0068ac73); r_esp += 8; return;
L_0068bc14:; BB(0x0068bc14);
    /* 0068bc14: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068bc16: add esp, 0x16c */ {  u32 a = r_esp; u32 b = 0x16cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068bc1c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068bc1d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068bc1e: ret 4 */ FN_RET(0x0068ac73); r_esp += 8; return;
L_0068bc21:; BB(0x0068bc21);
    /* 0068bc21: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068bc23: add esp, 0x16c */ {  u32 a = r_esp; u32 b = 0x16cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068bc29: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068bc2a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068bc2b: ret 4 */ FN_RET(0x0068ac73); r_esp += 8; return;
L_0068bc2e:; BB(0x0068bc2e);
    /* 0068bc2e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068bc30: add esp, 0x16c */ {  u32 a = r_esp; u32 b = 0x16cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068bc36: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068bc37: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068bc38: ret 4 */ FN_RET(0x0068ac73); r_esp += 8; return;
L_0068bc3b:; BB(0x0068bc3b);
    /* 0068bc3b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068bc3d: add esp, 0x16c */ {  u32 a = r_esp; u32 b = 0x16cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068bc43: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068bc44: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068bc45: ret 4 */ FN_RET(0x0068ac73); r_esp += 8; return;
}

void f_0068ad9f(void)
{
    FN_ENTER(0x0068ad9f);
    /* 0068ad9f: lea ecx, [ebp + 0x460] */ r_ecx = (u32)(r_ebp+0x460u);
    /* 0068ada5: call 0x6acde0 */ r_esp -= 4; W32(r_esp, 0x68adaau); f_006acde0();
    /* 0068adaa: lea ecx, [esp + 0x38] */ r_ecx = (u32)(r_esp+0x38u);
    /* 0068adae: call 0x5d6a3c */ r_esp -= 4; W32(r_esp, 0x68adb3u); f_005d6a3c();
    /* 0068adb3: mov ecx, dword ptr [ebp + 0xdf4] */ r_ecx = R32((u32)(r_ebp+0xdf4u));
    /* 0068adb9: mov byte ptr [esp + 0x38], 3 */ W8((u32)(r_esp+0x38u), 0x3u);
    /* 0068adbe: lea eax, [esp + 0x38] */ r_eax = (u32)(r_esp+0x38u);
    /* 0068adc2: mov byte ptr [esp + 0x39], 5 */ W8((u32)(r_esp+0x39u), 0x5u);
    /* 0068adc7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068adc8: call 0x6a4e50 */ r_esp -= 4; W32(r_esp, 0x68adcdu); f_006a4e50();
    /* 0068adcd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068adcf: je 0x68bc6f */ if (fZ) goto L_0068bc6f;
L_0068add5:; BB(0x0068add5);
    /* 0068add5: mov ecx, eax */ r_ecx = r_eax;
    /* 0068add7: call 0x6a60dc */ r_esp -= 4; W32(r_esp, 0x68addcu); f_006a60dc();
    /* 0068addc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068adde: je 0x68bc62 */ if (fZ) goto L_0068bc62;
L_0068ade4:; BB(0x0068ade4);
    /* 0068ade4: mov edi, dword ptr [eax + 0xd8] */ r_edi = R32((u32)(r_eax+0xd8u));
    /* 0068adea: call 0x68be84 */ r_esp -= 4; W32(r_esp, 0x68adefu); f_0068be84();
    /* 0068adef: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068adf1: jne 0x68aec9 */ if (!fZ) goto L_0068aec9;
L_0068adf7:; BB(0x0068adf7);
    /* 0068adf7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0068adf8: mov ecx, dword ptr [ebp + 0xdf4] */ r_ecx = R32((u32)(r_ebp+0xdf4u));
    /* 0068adfe: call 0x6a6a60 */ r_esp -= 4; W32(r_esp, 0x68ae03u); f_006a6a60();
    /* 0068ae03: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068ae05: je 0x68aec9 */ if (fZ) goto L_0068aec9;
L_0068ae0b:; BB(0x0068ae0b);
    /* 0068ae0b: mov ecx, eax */ r_ecx = r_eax;
    /* 0068ae0d: call 0x6a60dc */ r_esp -= 4; W32(r_esp, 0x68ae12u); f_006a60dc();
    /* 0068ae12: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068ae14: je 0x68aec9 */ if (fZ) goto L_0068aec9;
L_0068ae1a:; BB(0x0068ae1a);
    /* 0068ae1a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068ae1b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0068ae1d: call 0x68be94 */ r_esp -= 4; W32(r_esp, 0x68ae22u); f_0068be94();
    /* 0068ae22: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068ae24: je 0x68aeba */ if (fZ) goto L_0068aeba;
L_0068ae2a:; BB(0x0068ae2a);
    /* 0068ae2a: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068ae2c: je 0x68ae4b */ if (fZ) goto L_0068ae4b;
L_0068ae2e:; BB(0x0068ae2e);
    /* 0068ae2e: movsx eax, word ptr [ebp + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 0068ae35: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068ae38: jne 0x68ae41 */ if (!fZ) goto L_0068ae41;
L_0068ae3a:; BB(0x0068ae3a);
    /* 0068ae3a: mov eax, 1 */ r_eax = 0x1u;
    /* 0068ae3f: jmp 0x68ae43 */ goto L_0068ae43;
L_0068ae41:; BB(0x0068ae41);
    /* 0068ae41: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0068ae43:; BB(0x0068ae43);
    /* 0068ae43: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068ae45: jne 0x68aec9 */ if (!fZ) goto L_0068aec9;
L_0068ae4b:; BB(0x0068ae4b);
    /* 0068ae4b: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0068ae4f: mov byte ptr [esp + 0x4c], 0x27 */ W8((u32)(r_esp+0x4cu), 0x27u);
    /* 0068ae54: mov word ptr [esp + 0x4e], ax */ W16((u32)(r_esp+0x4eu), (u16)r_eax);
    /* 0068ae59: mov byte ptr [esp + 0x4d], 2 */ W8((u32)(r_esp+0x4du), 0x2u);
    /* 0068ae5e: mov dword ptr [esp + 0x50], edi */ W32((u32)(r_esp+0x50u), r_edi);
    /* 0068ae62: lea ecx, [esp + 0x4c] */ r_ecx = (u32)(r_esp+0x4cu);
    /* 0068ae66: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x68ae6bu); f_008003e0();
    /* 0068ae6b: lea eax, [esp + 0x38] */ r_eax = (u32)(r_esp+0x38u);
    /* 0068ae6f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068ae70: mov ecx, dword ptr [ebp + 0xdf4] */ r_ecx = R32((u32)(r_ebp+0xdf4u));
    /* 0068ae76: call 0x6a4e50 */ r_esp -= 4; W32(r_esp, 0x68ae7bu); f_006a4e50();
    /* 0068ae7b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068ae7d: je 0x68bc55 */ if (fZ) goto L_0068bc55;
L_0068ae83:; BB(0x0068ae83);
    /* 0068ae83: mov ecx, eax */ r_ecx = r_eax;
    /* 0068ae85: call 0x6a60dc */ r_esp -= 4; W32(r_esp, 0x68ae8au); f_006a60dc();
    /* 0068ae8a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068ae8c: je 0x68bc48 */ if (fZ) goto L_0068bc48;
L_0068ae92:; BB(0x0068ae92);
    /* 0068ae92: mov ecx, eax */ r_ecx = r_eax;
    /* 0068ae94: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x68ae99u); f_008173b4();
    /* 0068ae99: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068ae9b: jne 0x68aeaa */ if (!fZ) goto L_0068aeaa;
L_0068ae9d:; BB(0x0068ae9d);
    /* 0068ae9d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068ae9f: add esp, 0x16c */ {  u32 a = r_esp; u32 b = 0x16cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068aea5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068aea6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068aea7: ret 4 */ FN_RET(0x0068ad9f); r_esp += 8; return;
L_0068aeaa:; BB(0x0068aeaa);
    /* 0068aeaa: mov eax, 1 */ r_eax = 0x1u;
    /* 0068aeaf: add esp, 0x16c */ {  u32 a = r_esp; u32 b = 0x16cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068aeb5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068aeb6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068aeb7: ret 4 */ FN_RET(0x0068ad9f); r_esp += 8; return;
L_0068aeba:; BB(0x0068aeba);
    /* 0068aeba: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068aebc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068aebd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068aebe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068aebf: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 0068aec1: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x68aec6u); f_00814298();
    /* 0068aec6: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0068aec9:; BB(0x0068aec9);
    /* 0068aec9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068aecb: add esp, 0x16c */ {  u32 a = r_esp; u32 b = 0x16cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068aed1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068aed2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068aed3: ret 4 */ FN_RET(0x0068ad9f); r_esp += 8; return;
L_0068bc48:; BB(0x0068bc48);
    /* 0068bc48: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068bc4a: add esp, 0x16c */ {  u32 a = r_esp; u32 b = 0x16cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068bc50: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068bc51: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068bc52: ret 4 */ FN_RET(0x0068ad9f); r_esp += 8; return;
L_0068bc55:; BB(0x0068bc55);
    /* 0068bc55: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068bc57: add esp, 0x16c */ {  u32 a = r_esp; u32 b = 0x16cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068bc5d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068bc5e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068bc5f: ret 4 */ FN_RET(0x0068ad9f); r_esp += 8; return;
L_0068bc62:; BB(0x0068bc62);
    /* 0068bc62: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068bc64: add esp, 0x16c */ {  u32 a = r_esp; u32 b = 0x16cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068bc6a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068bc6b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068bc6c: ret 4 */ FN_RET(0x0068ad9f); r_esp += 8; return;
L_0068bc6f:; BB(0x0068bc6f);
    /* 0068bc6f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068bc71: add esp, 0x16c */ {  u32 a = r_esp; u32 b = 0x16cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068bc77: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068bc78: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068bc79: ret 4 */ FN_RET(0x0068ad9f); r_esp += 8; return;
}

void f_0068aed6(void)
{
    FN_ENTER(0x0068aed6);
    /* 0068aed6: lea ecx, [esp + 0x54] */ r_ecx = (u32)(r_esp+0x54u);
    /* 0068aeda: call 0x5d6a3c */ r_esp -= 4; W32(r_esp, 0x68aedfu); f_005d6a3c();
    /* 0068aedf: mov ecx, dword ptr [ebp + 0xdf4] */ r_ecx = R32((u32)(r_ebp+0xdf4u));
    /* 0068aee5: mov byte ptr [esp + 0x54], 3 */ W8((u32)(r_esp+0x54u), 0x3u);
    /* 0068aeea: lea eax, [esp + 0x54] */ r_eax = (u32)(r_esp+0x54u);
    /* 0068aeee: mov byte ptr [esp + 0x55], 4 */ W8((u32)(r_esp+0x55u), 0x4u);
    /* 0068aef3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068aef4: call 0x6a4e50 */ r_esp -= 4; W32(r_esp, 0x68aef9u); f_006a4e50();
    /* 0068aef9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068aefb: je 0x68bca3 */ if (fZ) goto L_0068bca3;
L_0068af01:; BB(0x0068af01);
    /* 0068af01: mov ecx, eax */ r_ecx = r_eax;
    /* 0068af03: call 0x6a60dc */ r_esp -= 4; W32(r_esp, 0x68af08u); f_006a60dc();
    /* 0068af08: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068af0a: je 0x68bc96 */ if (fZ) goto L_0068bc96;
L_0068af10:; BB(0x0068af10);
    /* 0068af10: mov edi, dword ptr [eax + 0xd8] */ r_edi = R32((u32)(r_eax+0xd8u));
    /* 0068af16: call 0x68be84 */ r_esp -= 4; W32(r_esp, 0x68af1bu); f_0068be84();
    /* 0068af1b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068af1d: jne 0x68aff5 */ if (!fZ) goto L_0068aff5;
L_0068af23:; BB(0x0068af23);
    /* 0068af23: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0068af24: mov ecx, dword ptr [ebp + 0xdf4] */ r_ecx = R32((u32)(r_ebp+0xdf4u));
    /* 0068af2a: call 0x6a6a60 */ r_esp -= 4; W32(r_esp, 0x68af2fu); f_006a6a60();
    /* 0068af2f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068af31: je 0x68aff5 */ if (fZ) goto L_0068aff5;
L_0068af37:; BB(0x0068af37);
    /* 0068af37: mov ecx, eax */ r_ecx = r_eax;
    /* 0068af39: call 0x6a60dc */ r_esp -= 4; W32(r_esp, 0x68af3eu); f_006a60dc();
    /* 0068af3e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068af40: je 0x68aff5 */ if (fZ) goto L_0068aff5;
L_0068af46:; BB(0x0068af46);
    /* 0068af46: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068af47: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0068af49: call 0x68be94 */ r_esp -= 4; W32(r_esp, 0x68af4eu); f_0068be94();
    /* 0068af4e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068af50: je 0x68afe6 */ if (fZ) goto L_0068afe6;
L_0068af56:; BB(0x0068af56);
    /* 0068af56: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068af58: je 0x68af77 */ if (fZ) goto L_0068af77;
L_0068af5a:; BB(0x0068af5a);
    /* 0068af5a: movsx eax, word ptr [ebp + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 0068af61: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068af64: jne 0x68af6d */ if (!fZ) goto L_0068af6d;
L_0068af66:; BB(0x0068af66);
    /* 0068af66: mov eax, 1 */ r_eax = 0x1u;
    /* 0068af6b: jmp 0x68af6f */ goto L_0068af6f;
L_0068af6d:; BB(0x0068af6d);
    /* 0068af6d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0068af6f:; BB(0x0068af6f);
    /* 0068af6f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068af71: jne 0x68aff5 */ if (!fZ) goto L_0068aff5;
L_0068af77:; BB(0x0068af77);
    /* 0068af77: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0068af7b: mov byte ptr [esp + 0x68], 0x27 */ W8((u32)(r_esp+0x68u), 0x27u);
    /* 0068af80: mov word ptr [esp + 0x6a], ax */ W16((u32)(r_esp+0x6au), (u16)r_eax);
    /* 0068af85: mov byte ptr [esp + 0x69], 2 */ W8((u32)(r_esp+0x69u), 0x2u);
    /* 0068af8a: mov dword ptr [esp + 0x6c], edi */ W32((u32)(r_esp+0x6cu), r_edi);
    /* 0068af8e: lea ecx, [esp + 0x68] */ r_ecx = (u32)(r_esp+0x68u);
    /* 0068af92: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x68af97u); f_008003e0();
    /* 0068af97: lea eax, [esp + 0x54] */ r_eax = (u32)(r_esp+0x54u);
    /* 0068af9b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068af9c: mov ecx, dword ptr [ebp + 0xdf4] */ r_ecx = R32((u32)(r_ebp+0xdf4u));
    /* 0068afa2: call 0x6a4e50 */ r_esp -= 4; W32(r_esp, 0x68afa7u); f_006a4e50();
    /* 0068afa7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068afa9: je 0x68bc89 */ if (fZ) goto L_0068bc89;
L_0068afaf:; BB(0x0068afaf);
    /* 0068afaf: mov ecx, eax */ r_ecx = r_eax;
    /* 0068afb1: call 0x6a60dc */ r_esp -= 4; W32(r_esp, 0x68afb6u); f_006a60dc();
    /* 0068afb6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068afb8: je 0x68bc7c */ if (fZ) goto L_0068bc7c;
L_0068afbe:; BB(0x0068afbe);
    /* 0068afbe: mov ecx, eax */ r_ecx = r_eax;
    /* 0068afc0: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x68afc5u); f_008173b4();
    /* 0068afc5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068afc7: jne 0x68afd6 */ if (!fZ) goto L_0068afd6;
L_0068afc9:; BB(0x0068afc9);
    /* 0068afc9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068afcb: add esp, 0x16c */ {  u32 a = r_esp; u32 b = 0x16cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068afd1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068afd2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068afd3: ret 4 */ FN_RET(0x0068aed6); r_esp += 8; return;
L_0068afd6:; BB(0x0068afd6);
    /* 0068afd6: mov eax, 1 */ r_eax = 0x1u;
    /* 0068afdb: add esp, 0x16c */ {  u32 a = r_esp; u32 b = 0x16cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068afe1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068afe2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068afe3: ret 4 */ FN_RET(0x0068aed6); r_esp += 8; return;
L_0068afe6:; BB(0x0068afe6);
    /* 0068afe6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068afe8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068afe9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068afea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068afeb: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 0068afed: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x68aff2u); f_00814298();
    /* 0068aff2: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0068aff5:; BB(0x0068aff5);
    /* 0068aff5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068aff7: add esp, 0x16c */ {  u32 a = r_esp; u32 b = 0x16cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068affd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068affe: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068afff: ret 4 */ FN_RET(0x0068aed6); r_esp += 8; return;
L_0068bc7c:; BB(0x0068bc7c);
    /* 0068bc7c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068bc7e: add esp, 0x16c */ {  u32 a = r_esp; u32 b = 0x16cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068bc84: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068bc85: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068bc86: ret 4 */ FN_RET(0x0068aed6); r_esp += 8; return;
L_0068bc89:; BB(0x0068bc89);
    /* 0068bc89: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068bc8b: add esp, 0x16c */ {  u32 a = r_esp; u32 b = 0x16cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068bc91: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068bc92: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068bc93: ret 4 */ FN_RET(0x0068aed6); r_esp += 8; return;
L_0068bc96:; BB(0x0068bc96);
    /* 0068bc96: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068bc98: add esp, 0x16c */ {  u32 a = r_esp; u32 b = 0x16cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068bc9e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068bc9f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068bca0: ret 4 */ FN_RET(0x0068aed6); r_esp += 8; return;
L_0068bca3:; BB(0x0068bca3);
    /* 0068bca3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068bca5: add esp, 0x16c */ {  u32 a = r_esp; u32 b = 0x16cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068bcab: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068bcac: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068bcad: ret 4 */ FN_RET(0x0068aed6); r_esp += 8; return;
}

