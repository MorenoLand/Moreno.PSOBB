#include "protos.h"

void f_006ea1b4(void) /* sub_6EA1B4 */
{
    FN_ENTER(0x006ea1b4);
    /* 006ea1b4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006ea1b5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006ea1b6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006ea1b7: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006ea1ba: mov edi, ecx */ r_edi = r_ecx;
    /* 006ea1bc: movzx eax, word ptr [edi + 0xc8] */ r_eax = (u32)R16((u32)(r_edi+0xc8u));
    /* 006ea1c3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ea1c4: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x6ea1c9u); f_007b4d18();
    /* 006ea1c9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ea1ca: mov dword ptr [edi + 0x1c], eax */ W32((u32)(r_edi+0x1cu), r_eax);
    /* 006ea1cd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ea1cf: je 0x6ea2fb */ if (fZ) goto L_006ea2fb;
L_006ea1d5:; BB(0x006ea1d5);
    /* 006ea1d5: movsx edx, word ptr [edi + 0xc6] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0xc6u));
    /* 006ea1dc: mov eax, dword ptr [edx*8 + 0x96da7c] */ r_eax = R32((u32)(r_edx*8+0x96da7cu));
    /* 006ea1e3: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 006ea1e5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 006ea1e7: jbe 0x6ea2dd */ if ((fC||fZ)) goto L_006ea2dd;
L_006ea1ed:; BB(0x006ea1ed);
    /* 006ea1ed: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 006ea1f0: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006ea1f2: lea ebx, [ecx + ecx] */ r_ebx = (u32)(r_ecx+r_ecx);
    /* 006ea1f5: add ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_006ea1f7:; BB(0x006ea1f7);
    /* 006ea1f7: mov ecx, dword ptr [edx*8 + 0x96da78] */ r_ecx = R32((u32)(r_edx*8+0x96da78u));
    /* 006ea1fe: mov ecx, dword ptr [ecx + ebx + 4] */ r_ecx = R32((u32)(r_ecx+r_ebx+0x4u));
    /* 006ea202: test cl, 4 */ {  u32 a = (u8)r_ecx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006ea205: jne 0x6ea234 */ if (!fZ) goto L_006ea234;
L_006ea207:; BB(0x006ea207);
    /* 006ea207: mov ecx, dword ptr [edi + 0x130] */ r_ecx = R32((u32)(r_edi+0x130u));
    /* 006ea20d: mov ecx, dword ptr [ecx + esi*4] */ r_ecx = R32((u32)(r_ecx+r_esi*4));
    /* 006ea210: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ea212: je 0x6ea2cf */ if (fZ) goto L_006ea2cf;
L_006ea218:; BB(0x006ea218);
    /* 006ea218: lea eax, [edi + 0x20] */ r_eax = (u32)(r_edi+0x20u);
    /* 006ea21b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ea21c: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x6ea221u); f_00508db8();
    /* 006ea221: movsx edx, word ptr [edi + 0xc6] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0xc6u));
    /* 006ea228: mov eax, dword ptr [edx*8 + 0x96da7c] */ r_eax = R32((u32)(r_edx*8+0x96da7cu));
    /* 006ea22f: jmp 0x6ea2cf */ goto L_006ea2cf;
L_006ea234:; BB(0x006ea234);
    /* 006ea234: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 006ea23b: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 006ea240: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 006ea248: mov dword ptr [esp + 8], 0xc0a00000 */ W32((u32)(r_esp+0x8u), 0xc0a00000u);
    /* 006ea250: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x6ea255u); f_0082d990();
    /* 006ea255: mov edx, dword ptr [edi + 0x58] */ r_edx = R32((u32)(r_edi+0x58u));
    /* 006ea258: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006ea25a: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x6ea25fu); f_0082d8bc();
    /* 006ea25f: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 006ea262: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ea263: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 006ea267: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006ea269: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x6ea26eu); f_00830aa0();
    /* 006ea26e: mov ecx, 1 */ r_ecx = 0x1u;
    /* 006ea273: call 0x82eb80 */ r_esp -= 4; W32(r_esp, 0x6ea278u); f_0082eb80();
    /* 006ea278: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 006ea27b: fadd dword ptr [edi + 0x20] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x20u));
    /* 006ea27e: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 006ea282: fadd dword ptr [edi + 0x24] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x24u));
    /* 006ea285: mov eax, dword ptr [edi + 0x130] */ r_eax = R32((u32)(r_edi+0x130u));
    /* 006ea28b: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 006ea28f: fadd dword ptr [edi + 0x28] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x28u));
    /* 006ea292: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 006ea294: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 006ea298: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 006ea29c: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 006ea2a0: mov ecx, dword ptr [eax + esi*4] */ r_ecx = R32((u32)(r_eax+r_esi*4));
    /* 006ea2a3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ea2a5: je 0x6ea2c1 */ if (fZ) goto L_006ea2c1;
L_006ea2a7:; BB(0x006ea2a7);
    /* 006ea2a7: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 006ea2ab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ea2ac: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x6ea2b1u); f_00508db8();
    /* 006ea2b1: movsx edx, word ptr [edi + 0xc6] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0xc6u));
    /* 006ea2b8: mov eax, dword ptr [edx*8 + 0x96da7c] */ r_eax = R32((u32)(r_edx*8+0x96da7cu));
    /* 006ea2bf: jmp 0x6ea2cf */ goto L_006ea2cf;
L_006ea2c1:; BB(0x006ea2c1);
    /* 006ea2c1: movsx edx, word ptr [edi + 0xc6] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0xc6u));
    /* 006ea2c8: mov eax, dword ptr [edx*8 + 0x96da7c] */ r_eax = R32((u32)(r_edx*8+0x96da7cu));
L_006ea2cf:; BB(0x006ea2cf);
    /* 006ea2cf: add ebx, 0xc */ {  u32 a = r_ebx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006ea2d2: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006ea2d5: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 006ea2d7: jb 0x6ea1f7 */ if (fC) goto L_006ea1f7;
L_006ea2dd:; BB(0x006ea2dd);
    /* 006ea2dd: mov ecx, edi */ r_ecx = r_edi;
    /* 006ea2df: call 0x6f0474 */ r_esp -= 4; W32(r_esp, 0x6ea2e4u); f_006f0474();
    /* 006ea2e4: mov ecx, edi */ r_ecx = r_edi;
    /* 006ea2e6: call 0x6f053c */ r_esp -= 4; W32(r_esp, 0x6ea2ebu); f_006f053c();
    /* 006ea2eb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006ea2ed: mov ecx, edi */ r_ecx = r_edi;
    /* 006ea2ef: call 0x6f0798 */ r_esp -= 4; W32(r_esp, 0x6ea2f4u); f_006f0798();
    /* 006ea2f4: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ea2f7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ea2f8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ea2f9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ea2fa: ret  */ FN_RET(0x006ea1b4); r_esp += 4; return;
L_006ea2fb:; BB(0x006ea2fb);
    /* 006ea2fb: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 006ea2ff: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006ea304: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 006ea308: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ea30b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ea30c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ea30d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ea30e: ret  */ FN_RET(0x006ea1b4); r_esp += 4; return;
}

void f_006ea310(void) /* sub_6EA310 */
{
    FN_ENTER(0x006ea310);
    /* 006ea310: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006ea311: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006ea312: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006ea315: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006ea317: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
    /* 006ea31b: movzx edx, word ptr [ebx + 0x1c] */ r_edx = (u32)R16((u32)(r_ebx+0x1cu));
    /* 006ea31f: movzx ecx, word ptr [ebp + 0x134] */ r_ecx = (u32)R16((u32)(r_ebp+0x134u));
    /* 006ea326: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ea328: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ea32a: jne 0x6ea331 */ if (!fZ) goto L_006ea331;
L_006ea32c:; BB(0x006ea32c);
    /* 006ea32c: mov eax, 1 */ r_eax = 0x1u;
L_006ea331:; BB(0x006ea331);
    /* 006ea331: movzx ecx, word ptr [ebp + 0x136] */ r_ecx = (u32)R16((u32)(r_ebp+0x136u));
    /* 006ea338: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ea33a: jne 0x6ea341 */ if (!fZ) goto L_006ea341;
L_006ea33c:; BB(0x006ea33c);
    /* 006ea33c: mov eax, 1 */ r_eax = 0x1u;
L_006ea341:; BB(0x006ea341);
    /* 006ea341: movzx ecx, word ptr [ebp + 0x138] */ r_ecx = (u32)R16((u32)(r_ebp+0x138u));
    /* 006ea348: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ea34a: jne 0x6ea351 */ if (!fZ) goto L_006ea351;
L_006ea34c:; BB(0x006ea34c);
    /* 006ea34c: mov eax, 1 */ r_eax = 0x1u;
L_006ea351:; BB(0x006ea351);
    /* 006ea351: movzx ecx, word ptr [ebp + 0x13a] */ r_ecx = (u32)R16((u32)(r_ebp+0x13au));
    /* 006ea358: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ea35a: jne 0x6ea361 */ if (!fZ) goto L_006ea361;
L_006ea35c:; BB(0x006ea35c);
    /* 006ea35c: mov eax, 1 */ r_eax = 0x1u;
L_006ea361:; BB(0x006ea361);
    /* 006ea361: movzx ecx, word ptr [ebp + 0x13c] */ r_ecx = (u32)R16((u32)(r_ebp+0x13cu));
    /* 006ea368: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ea36a: jne 0x6ea371 */ if (!fZ) goto L_006ea371;
L_006ea36c:; BB(0x006ea36c);
    /* 006ea36c: mov eax, 1 */ r_eax = 0x1u;
L_006ea371:; BB(0x006ea371);
    /* 006ea371: movzx ecx, word ptr [ebp + 0x13e] */ r_ecx = (u32)R16((u32)(r_ebp+0x13eu));
    /* 006ea378: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ea37a: jne 0x6ea381 */ if (!fZ) goto L_006ea381;
L_006ea37c:; BB(0x006ea37c);
    /* 006ea37c: mov eax, 1 */ r_eax = 0x1u;
L_006ea381:; BB(0x006ea381);
    /* 006ea381: movzx ecx, word ptr [ebp + 0x140] */ r_ecx = (u32)R16((u32)(r_ebp+0x140u));
    /* 006ea388: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ea38a: jne 0x6ea391 */ if (!fZ) goto L_006ea391;
L_006ea38c:; BB(0x006ea38c);
    /* 006ea38c: mov eax, 1 */ r_eax = 0x1u;
L_006ea391:; BB(0x006ea391);
    /* 006ea391: movzx ecx, word ptr [ebp + 0x142] */ r_ecx = (u32)R16((u32)(r_ebp+0x142u));
    /* 006ea398: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ea39a: jne 0x6ea3a1 */ if (!fZ) goto L_006ea3a1;
L_006ea39c:; BB(0x006ea39c);
    /* 006ea39c: mov eax, 1 */ r_eax = 0x1u;
L_006ea3a1:; BB(0x006ea3a1);
    /* 006ea3a1: movzx ecx, word ptr [ebp + 0x144] */ r_ecx = (u32)R16((u32)(r_ebp+0x144u));
    /* 006ea3a8: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ea3aa: jne 0x6ea3b1 */ if (!fZ) goto L_006ea3b1;
L_006ea3ac:; BB(0x006ea3ac);
    /* 006ea3ac: mov eax, 1 */ r_eax = 0x1u;
L_006ea3b1:; BB(0x006ea3b1);
    /* 006ea3b1: movzx ecx, word ptr [ebp + 0x146] */ r_ecx = (u32)R16((u32)(r_ebp+0x146u));
    /* 006ea3b8: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ea3ba: jne 0x6ea3c1 */ if (!fZ) goto L_006ea3c1;
L_006ea3bc:; BB(0x006ea3bc);
    /* 006ea3bc: mov eax, 1 */ r_eax = 0x1u;
L_006ea3c1:; BB(0x006ea3c1);
    /* 006ea3c1: movzx ecx, word ptr [ebp + 0x148] */ r_ecx = (u32)R16((u32)(r_ebp+0x148u));
    /* 006ea3c8: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ea3ca: jne 0x6ea3d1 */ if (!fZ) goto L_006ea3d1;
L_006ea3cc:; BB(0x006ea3cc);
    /* 006ea3cc: mov eax, 1 */ r_eax = 0x1u;
L_006ea3d1:; BB(0x006ea3d1);
    /* 006ea3d1: movzx ecx, word ptr [ebp + 0x14a] */ r_ecx = (u32)R16((u32)(r_ebp+0x14au));
    /* 006ea3d8: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ea3da: jne 0x6ea3e1 */ if (!fZ) goto L_006ea3e1;
L_006ea3dc:; BB(0x006ea3dc);
    /* 006ea3dc: mov eax, 1 */ r_eax = 0x1u;
L_006ea3e1:; BB(0x006ea3e1);
    /* 006ea3e1: movzx ecx, word ptr [ebp + 0x14c] */ r_ecx = (u32)R16((u32)(r_ebp+0x14cu));
    /* 006ea3e8: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ea3ea: jne 0x6ea3f1 */ if (!fZ) goto L_006ea3f1;
L_006ea3ec:; BB(0x006ea3ec);
    /* 006ea3ec: mov eax, 1 */ r_eax = 0x1u;
L_006ea3f1:; BB(0x006ea3f1);
    /* 006ea3f1: movzx ecx, word ptr [ebp + 0x14e] */ r_ecx = (u32)R16((u32)(r_ebp+0x14eu));
    /* 006ea3f8: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ea3fa: jne 0x6ea401 */ if (!fZ) goto L_006ea401;
L_006ea3fc:; BB(0x006ea3fc);
    /* 006ea3fc: mov eax, 1 */ r_eax = 0x1u;
L_006ea401:; BB(0x006ea401);
    /* 006ea401: movzx ecx, word ptr [ebp + 0x150] */ r_ecx = (u32)R16((u32)(r_ebp+0x150u));
    /* 006ea408: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ea40a: jne 0x6ea411 */ if (!fZ) goto L_006ea411;
L_006ea40c:; BB(0x006ea40c);
    /* 006ea40c: mov eax, 1 */ r_eax = 0x1u;
L_006ea411:; BB(0x006ea411);
    /* 006ea411: movzx ecx, word ptr [ebp + 0x152] */ r_ecx = (u32)R16((u32)(r_ebp+0x152u));
    /* 006ea418: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ea41a: jne 0x6ea421 */ if (!fZ) goto L_006ea421;
L_006ea41c:; BB(0x006ea41c);
    /* 006ea41c: mov eax, 1 */ r_eax = 0x1u;
L_006ea421:; BB(0x006ea421);
    /* 006ea421: movzx ecx, word ptr [ebp + 0x154] */ r_ecx = (u32)R16((u32)(r_ebp+0x154u));
    /* 006ea428: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ea42a: jne 0x6ea431 */ if (!fZ) goto L_006ea431;
L_006ea42c:; BB(0x006ea42c);
    /* 006ea42c: mov eax, 1 */ r_eax = 0x1u;
L_006ea431:; BB(0x006ea431);
    /* 006ea431: movzx ecx, word ptr [ebp + 0x156] */ r_ecx = (u32)R16((u32)(r_ebp+0x156u));
    /* 006ea438: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ea43a: jne 0x6ea441 */ if (!fZ) goto L_006ea441;
L_006ea43c:; BB(0x006ea43c);
    /* 006ea43c: mov eax, 1 */ r_eax = 0x1u;
L_006ea441:; BB(0x006ea441);
    /* 006ea441: movzx ecx, word ptr [ebp + 0x158] */ r_ecx = (u32)R16((u32)(r_ebp+0x158u));
    /* 006ea448: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ea44a: jne 0x6ea451 */ if (!fZ) goto L_006ea451;
L_006ea44c:; BB(0x006ea44c);
    /* 006ea44c: mov eax, 1 */ r_eax = 0x1u;
L_006ea451:; BB(0x006ea451);
    /* 006ea451: movzx ecx, word ptr [ebp + 0x15a] */ r_ecx = (u32)R16((u32)(r_ebp+0x15au));
    /* 006ea458: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ea45a: jne 0x6ea461 */ if (!fZ) goto L_006ea461;
L_006ea45c:; BB(0x006ea45c);
    /* 006ea45c: mov eax, 1 */ r_eax = 0x1u;
L_006ea461:; BB(0x006ea461);
    /* 006ea461: movzx ecx, word ptr [ebp + 0x15c] */ r_ecx = (u32)R16((u32)(r_ebp+0x15cu));
    /* 006ea468: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ea46a: jne 0x6ea471 */ if (!fZ) goto L_006ea471;
L_006ea46c:; BB(0x006ea46c);
    /* 006ea46c: mov eax, 1 */ r_eax = 0x1u;
L_006ea471:; BB(0x006ea471);
    /* 006ea471: movzx ecx, word ptr [ebp + 0x15e] */ r_ecx = (u32)R16((u32)(r_ebp+0x15eu));
    /* 006ea478: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ea47a: jne 0x6ea481 */ if (!fZ) goto L_006ea481;
L_006ea47c:; BB(0x006ea47c);
    /* 006ea47c: mov eax, 1 */ r_eax = 0x1u;
L_006ea481:; BB(0x006ea481);
    /* 006ea481: movzx ecx, word ptr [ebp + 0x160] */ r_ecx = (u32)R16((u32)(r_ebp+0x160u));
    /* 006ea488: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ea48a: jne 0x6ea491 */ if (!fZ) goto L_006ea491;
L_006ea48c:; BB(0x006ea48c);
    /* 006ea48c: mov eax, 1 */ r_eax = 0x1u;
L_006ea491:; BB(0x006ea491);
    /* 006ea491: movzx ecx, word ptr [ebp + 0x162] */ r_ecx = (u32)R16((u32)(r_ebp+0x162u));
    /* 006ea498: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ea49a: jne 0x6ea4a1 */ if (!fZ) goto L_006ea4a1;
L_006ea49c:; BB(0x006ea49c);
    /* 006ea49c: mov eax, 1 */ r_eax = 0x1u;
L_006ea4a1:; BB(0x006ea4a1);
    /* 006ea4a1: movzx ecx, word ptr [ebp + 0x164] */ r_ecx = (u32)R16((u32)(r_ebp+0x164u));
    /* 006ea4a8: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ea4aa: jne 0x6ea4b1 */ if (!fZ) goto L_006ea4b1;
L_006ea4ac:; BB(0x006ea4ac);
    /* 006ea4ac: mov eax, 1 */ r_eax = 0x1u;
L_006ea4b1:; BB(0x006ea4b1);
    /* 006ea4b1: movzx ecx, word ptr [ebp + 0x166] */ r_ecx = (u32)R16((u32)(r_ebp+0x166u));
    /* 006ea4b8: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ea4ba: jne 0x6ea4c1 */ if (!fZ) goto L_006ea4c1;
L_006ea4bc:; BB(0x006ea4bc);
    /* 006ea4bc: mov eax, 1 */ r_eax = 0x1u;
L_006ea4c1:; BB(0x006ea4c1);
    /* 006ea4c1: movzx ecx, word ptr [ebp + 0x168] */ r_ecx = (u32)R16((u32)(r_ebp+0x168u));
    /* 006ea4c8: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ea4ca: jne 0x6ea4d1 */ if (!fZ) goto L_006ea4d1;
L_006ea4cc:; BB(0x006ea4cc);
    /* 006ea4cc: mov eax, 1 */ r_eax = 0x1u;
L_006ea4d1:; BB(0x006ea4d1);
    /* 006ea4d1: movzx ecx, word ptr [ebp + 0x16a] */ r_ecx = (u32)R16((u32)(r_ebp+0x16au));
    /* 006ea4d8: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ea4da: jne 0x6ea4e1 */ if (!fZ) goto L_006ea4e1;
L_006ea4dc:; BB(0x006ea4dc);
    /* 006ea4dc: mov eax, 1 */ r_eax = 0x1u;
L_006ea4e1:; BB(0x006ea4e1);
    /* 006ea4e1: movzx ecx, word ptr [ebp + 0x16c] */ r_ecx = (u32)R16((u32)(r_ebp+0x16cu));
    /* 006ea4e8: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ea4ea: jne 0x6ea4f1 */ if (!fZ) goto L_006ea4f1;
L_006ea4ec:; BB(0x006ea4ec);
    /* 006ea4ec: mov eax, 1 */ r_eax = 0x1u;
L_006ea4f1:; BB(0x006ea4f1);
    /* 006ea4f1: movzx ecx, word ptr [ebp + 0x16e] */ r_ecx = (u32)R16((u32)(r_ebp+0x16eu));
    /* 006ea4f8: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ea4fa: jne 0x6ea501 */ if (!fZ) goto L_006ea501;
L_006ea4fc:; BB(0x006ea4fc);
    /* 006ea4fc: mov eax, 1 */ r_eax = 0x1u;
L_006ea501:; BB(0x006ea501);
    /* 006ea501: movzx ecx, word ptr [ebp + 0x170] */ r_ecx = (u32)R16((u32)(r_ebp+0x170u));
    /* 006ea508: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ea50a: jne 0x6ea511 */ if (!fZ) goto L_006ea511;
L_006ea50c:; BB(0x006ea50c);
    /* 006ea50c: mov eax, 1 */ r_eax = 0x1u;
L_006ea511:; BB(0x006ea511);
    /* 006ea511: movzx ecx, word ptr [ebp + 0x172] */ r_ecx = (u32)R16((u32)(r_ebp+0x172u));
    /* 006ea518: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ea51a: jne 0x6ea521 */ if (!fZ) goto L_006ea521;
L_006ea51c:; BB(0x006ea51c);
    /* 006ea51c: mov eax, 1 */ r_eax = 0x1u;
L_006ea521:; BB(0x006ea521);
    /* 006ea521: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ea523: jne 0x6ea5ed */ if (!fZ) goto L_006ea5ed;
L_006ea529:; BB(0x006ea529);
    /* 006ea529: mov eax, dword ptr [ebp + 0x174] */ r_eax = R32((u32)(r_ebp+0x174u));
    /* 006ea52f: mov word ptr [ebp + eax*2 + 0x134], dx */ W16((u32)(r_ebp+r_eax*2+0x134u), (u16)r_edx);
    /* 006ea537: mov eax, dword ptr [ebp + 0x174] */ r_eax = R32((u32)(r_ebp+0x174u));
    /* 006ea53d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006ea540: cmp eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006ea543: jl 0x6ea551 */ if ((fS!=fO)) goto L_006ea551;
L_006ea545:; BB(0x006ea545);
    /* 006ea545: mov dword ptr [ebp + 0x174], 0x1f */ W32((u32)(r_ebp+0x174u), 0x1fu);
    /* 006ea54f: jmp 0x6ea557 */ goto L_006ea557;
L_006ea551:; BB(0x006ea551);
    /* 006ea551: mov dword ptr [ebp + 0x174], eax */ W32((u32)(r_ebp+0x174u), r_eax);
L_006ea557:; BB(0x006ea557);
    /* 006ea557: mov edx, dword ptr [ebp + 0xcc] */ r_edx = R32((u32)(r_ebp+0xccu));
    /* 006ea55d: movzx eax, word ptr [ebx + 0x1c] */ r_eax = (u32)R16((u32)(r_ebx+0x1cu));
    /* 006ea561: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006ea564: jge 0x6ea587 */ if ((fS==fO)) goto L_006ea587;
L_006ea566:; BB(0x006ea566);
    /* 006ea566: movsx eax, word ptr [ebx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32cu));
    /* 006ea56d: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ea570: jne 0x6ea57a */ if (!fZ) goto L_006ea57a;
L_006ea572:; BB(0x006ea572);
    /* 006ea572: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ea575: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ea576: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ea577: ret 4 */ FN_RET(0x006ea310); r_esp += 8; return;
L_006ea57a:; BB(0x006ea57a);
    /* 006ea57a: mov dword ptr [esp], 5 */ W32((u32)(r_esp), 0x5u);
    /* 006ea581: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 006ea585: jmp 0x6ea592 */ goto L_006ea592;
L_006ea587:; BB(0x006ea587);
    /* 006ea587: mov dword ptr [esp], 5 */ W32((u32)(r_esp), 0x5u);
    /* 006ea58e: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
L_006ea592:; BB(0x006ea592);
    /* 006ea592: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006ea594: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 006ea596: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 006ea598: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006ea59a: push dword ptr [ebp + 0xf8] */ { u32 v = R32((u32)(r_ebp+0xf8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006ea5a0: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 006ea5a4: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 006ea5a8: push dword ptr [ebp + 0x1c] */ { u32 v = R32((u32)(r_ebp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006ea5ab: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x6ea5aeu); call_ind(t); }
    /* 006ea5ae: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006ea5b0: lea edx, [ebx + 0x38] */ r_edx = (u32)(r_ebx+0x38u);
    /* 006ea5b3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ea5b5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ea5b6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ea5b7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006ea5b8: push 0xb0 */ { u32 v = 0xb0u; r_esp -= 4; W32(r_esp, v); }
    /* 006ea5bd: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6ea5c2u); f_00814298();
    /* 006ea5c2: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006ea5c5: movzx eax, word ptr [ebp + 0xc8] */ r_eax = (u32)R16((u32)(r_ebp+0xc8u));
    /* 006ea5cc: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006ea5cf: jge 0x6ea5ed */ if ((fS==fO)) goto L_006ea5ed;
L_006ea5d1:; BB(0x006ea5d1);
    /* 006ea5d1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ea5d2: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 006ea5d4: call 0x6e1ed0 */ r_esp -= 4; W32(r_esp, 0x6ea5d9u); f_006e1ed0();
    /* 006ea5d9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006ea5dc: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006ea5de: jne 0x6ea5ed */ if (!fZ) goto L_006ea5ed;
L_006ea5e0:; BB(0x006ea5e0);
    /* 006ea5e0: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 006ea5e4: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006ea5e9: mov word ptr [ebp + 8], ax */ W16((u32)(r_ebp+0x8u), (u16)r_eax);
L_006ea5ed:; BB(0x006ea5ed);
    /* 006ea5ed: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ea5f0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ea5f1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ea5f2: ret 4 */ FN_RET(0x006ea310); r_esp += 8; return;
}

void f_006ea5f8(void) /* sub_6EA5F8 */
{
    FN_ENTER(0x006ea5f8);
    /* 006ea5f8: mov dword ptr [0xa96768], 0x3f800000 */ W32((u32)(0xa96768u), 0x3f800000u);
    /* 006ea602: mov dword ptr [0xa9676c], 0x41000000 */ W32((u32)(0xa9676cu), 0x41000000u);
    /* 006ea60c: mov dword ptr [0xa96770], 0x3fc00000 */ W32((u32)(0xa96770u), 0x3fc00000u);
    /* 006ea616: ret  */ FN_RET(0x006ea5f8); r_esp += 4; return;
}

void f_006ea618(void) /* sub_6EA618 */
{
    FN_ENTER(0x006ea618);
    /* 006ea618: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006ea619: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006ea61b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006ea61d: call 0x6ea63c */ r_esp -= 4; W32(r_esp, 0x6ea622u); f_006ea63c();
    /* 006ea622: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006ea626: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ea628: jne 0x6ea62e */ if (!fZ) goto L_006ea62e;
L_006ea62a:; BB(0x006ea62a);
    /* 006ea62a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ea62b: ret 4 */ FN_RET(0x006ea618); r_esp += 8; return;
L_006ea62e:; BB(0x006ea62e);
    /* 006ea62e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006ea62f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6ea634u); f_005c2f74();
    /* 006ea634: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ea635: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ea636: ret 4 */ FN_RET(0x006ea618); r_esp += 8; return;
}

void f_006ea63c(void) /* sub_6EA63C */
{
    FN_ENTER(0x006ea63c);
    /* 006ea63c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006ea63d: mov ebp, esp */ r_ebp = r_esp;
    /* 006ea63f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006ea641: push 0x8ef46c */ { u32 v = 0x8ef46cu; r_esp -= 4; W32(r_esp, v); }
    /* 006ea646: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006ea64c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ea64d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006ea654: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006ea657: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006ea65a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006ea65d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006ea660: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006ea663: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006ea666: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006ea669: mov dword ptr [ecx], 0xb3dd18 */ W32((u32)(r_ecx), 0xb3dd18u);
    /* 006ea66f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006ea676: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x6ea67bu); f_008171e8();
    /* 006ea67b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006ea67e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006ea685: mov esp, ebp */ r_esp = r_ebp;
    /* 006ea687: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ea688: ret  */ FN_RET(0x006ea63c); r_esp += 4; return;
}

void f_006ea68c(void) /* sub_6EA68C */
{
    FN_ENTER(0x006ea68c);
    /* 006ea68c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006ea68d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006ea68f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006ea691: call 0x6ea6b0 */ r_esp -= 4; W32(r_esp, 0x6ea696u); f_006ea6b0();
    /* 006ea696: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006ea69a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ea69c: jne 0x6ea6a2 */ if (!fZ) goto L_006ea6a2;
L_006ea69e:; BB(0x006ea69e);
    /* 006ea69e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ea69f: ret 4 */ FN_RET(0x006ea68c); r_esp += 8; return;
L_006ea6a2:; BB(0x006ea6a2);
    /* 006ea6a2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006ea6a3: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6ea6a8u); f_005c2f74();
    /* 006ea6a8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ea6a9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ea6aa: ret 4 */ FN_RET(0x006ea68c); r_esp += 8; return;
}

void f_006ea6b0(void) /* sub_6EA6B0 */
{
    FN_ENTER(0x006ea6b0);
    /* 006ea6b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006ea6b1: mov ebp, esp */ r_ebp = r_esp;
    /* 006ea6b3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006ea6b5: push 0x8ef488 */ { u32 v = 0x8ef488u; r_esp -= 4; W32(r_esp, v); }
    /* 006ea6ba: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006ea6c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ea6c1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006ea6c8: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006ea6cb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006ea6ce: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006ea6d1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006ea6d4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006ea6d7: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006ea6da: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006ea6dd: mov dword ptr [ecx], 0xb3dd28 */ W32((u32)(r_ecx), 0xb3dd28u);
    /* 006ea6e3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006ea6ea: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x6ea6efu); f_008171e8();
    /* 006ea6ef: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006ea6f2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006ea6f9: mov esp, ebp */ r_esp = r_ebp;
    /* 006ea6fb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ea6fc: ret  */ FN_RET(0x006ea6b0); r_esp += 4; return;
}

void f_006ea700(void) /* sub_6EA700 */
{
    FN_ENTER(0x006ea700);
    /* 006ea700: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 006ea704: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ea706: je 0x6ea711 */ if (fZ) goto L_006ea711;
L_006ea708:; BB(0x006ea708);
    /* 006ea708: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x6ea70du); f_008173b4();
    /* 006ea70d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ea70f: jne 0x6ea714 */ if (!fZ) goto L_006ea714;
L_006ea711:; BB(0x006ea711);
    /* 006ea711: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ea713: ret  */ FN_RET(0x006ea700); r_esp += 4; return;
L_006ea714:; BB(0x006ea714);
    /* 006ea714: mov eax, 1 */ r_eax = 0x1u;
    /* 006ea719: ret  */ FN_RET(0x006ea700); r_esp += 4; return;
}

void f_006ea71c(void) /* sub_6EA71C */
{
    FN_ENTER(0x006ea71c);
    /* 006ea71c: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 006ea720: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ea722: je 0x6ea736 */ if (fZ) goto L_006ea736;
L_006ea724:; BB(0x006ea724);
    /* 006ea724: movzx eax, word ptr [eax + 0x96] */ r_eax = (u32)R16((u32)(r_eax+0x96u));
    /* 006ea72b: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006ea72e: jne 0x6ea736 */ if (!fZ) goto L_006ea736;
L_006ea730:; BB(0x006ea730);
    /* 006ea730: mov eax, 1 */ r_eax = 0x1u;
    /* 006ea735: ret  */ FN_RET(0x006ea71c); r_esp += 4; return;
L_006ea736:; BB(0x006ea736);
    /* 006ea736: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ea738: ret  */ FN_RET(0x006ea71c); r_esp += 4; return;
}

void f_006ea73c(void) /* sub_6EA73C */
{
    FN_ENTER(0x006ea73c);
    /* 006ea73c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006ea73d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006ea73e: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006ea741: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 006ea745: mov esi, dword ptr [esp + 0x1c] */ r_esi = R32((u32)(r_esp+0x1cu));
    /* 006ea749: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 006ea74e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ea750: je 0x6ea7bd */ if (fZ) goto L_006ea7bd;
L_006ea752:; BB(0x006ea752);
    /* 006ea752: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 006ea755: fld dword ptr [eax + 0x178] */ FPUSH(R_F32((u32)(r_eax+0x178u)));
    /* 006ea75b: fsub dword ptr [edi] */ ST(0) = ST(0) - R_F32((u32)(r_edi));
    /* 006ea75d: fld dword ptr [eax + 0x17c] */ FPUSH(R_F32((u32)(r_eax+0x17cu)));
    /* 006ea763: fld dword ptr [eax + 0x180] */ FPUSH(R_F32((u32)(r_eax+0x180u)));
    /* 006ea769: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 006ea76b: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006ea76e: fsub dword ptr [edi + 4] */ ST(0) = ST(0) - R_F32((u32)(r_edi+0x4u));
    /* 006ea771: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 006ea775: fsub dword ptr [edi + 8] */ ST(0) = ST(0) - R_F32((u32)(r_edi+0x8u));
    /* 006ea778: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 006ea77c: call 0x82def4 */ r_esp -= 4; W32(r_esp, 0x6ea781u); f_0082def4();
    /* 006ea781: fcomp dword ptr [0x96db1c] */ fx_compare(ST(0), R_F32((u32)(0x96db1cu))); FPOP();
    /* 006ea787: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006ea789: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006ea78a: je 0x6ea796 */ if (fZ) goto L_006ea796;
L_006ea78c:; BB(0x006ea78c);
    /* 006ea78c: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 006ea78f: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x6ea794u); f_0082df08();
    /* 006ea794: fstp st(0) */ ST(0) = ST(0); FPOP();
L_006ea796:; BB(0x006ea796);
    /* 006ea796: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 006ea799: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 006ea79d: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 006ea79f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006ea7a1: fadd dword ptr [edi] */ ST(0) = ST(0) + R_F32((u32)(r_edi));
    /* 006ea7a3: fstp dword ptr [esi] */ W_F32((u32)(r_esi), ST(0)); FPOP();
    /* 006ea7a5: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 006ea7a9: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 006ea7ab: fadd dword ptr [edi + 4] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x4u));
    /* 006ea7ae: fstp dword ptr [esi + 4] */ W_F32((u32)(r_esi+0x4u), ST(0)); FPOP();
    /* 006ea7b1: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 006ea7b5: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 006ea7b7: fadd dword ptr [edi + 8] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x8u));
    /* 006ea7ba: fstp dword ptr [esi + 8] */ W_F32((u32)(r_esi+0x8u), ST(0)); FPOP();
L_006ea7bd:; BB(0x006ea7bd);
    /* 006ea7bd: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ea7c0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ea7c1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ea7c2: ret  */ FN_RET(0x006ea73c); r_esp += 4; return;
}

void f_006ea7c4(void) /* sub_6EA7C4 */
{
    FN_ENTER(0x006ea7c4);
    /* 006ea7c4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006ea7c5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006ea7c6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006ea7c7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006ea7c8: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006ea7cb: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 006ea7cf: mov esi, dword ptr [esp + 0x34] */ r_esi = R32((u32)(r_esp+0x34u));
    /* 006ea7d3: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x6ea7d8u); f_00807ac0();
    /* 006ea7d8: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ea7db: je 0x6eaacd */ if (fZ) goto L_006eaacd;
L_006ea7e1:; BB(0x006ea7e1);
    /* 006ea7e1: mov ebp, 0x461c4000 */ r_ebp = 0x461c4000u;
L_006ea7e6:; BB(0x006ea7e6);
    /* 006ea7e6: fld dword ptr [edi + 0x20] */ FPUSH(R_F32((u32)(r_edi+0x20u)));
    /* 006ea7e9: mov ecx, dword ptr [edi + 0x20] */ r_ecx = R32((u32)(r_edi+0x20u));
    /* 006ea7ec: fld dword ptr [edi + 0x24] */ FPUSH(R_F32((u32)(r_edi+0x24u)));
    /* 006ea7ef: mov edx, dword ptr [edi + 0x24] */ r_edx = R32((u32)(r_edi+0x24u));
    /* 006ea7f2: fld dword ptr [edi + 0x28] */ FPUSH(R_F32((u32)(r_edi+0x28u)));
    /* 006ea7f5: mov eax, dword ptr [edi + 0x28] */ r_eax = R32((u32)(r_edi+0x28u));
    /* 006ea7f8: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 006ea7fa: mov dword ptr [0xa96780], ebx */ W32((u32)(0xa96780u), r_ebx);
    /* 006ea800: mov dword ptr [0xa967c0], ebx */ W32((u32)(0xa967c0u), r_ebx);
    /* 006ea806: mov dword ptr [0xa96784], ebx */ W32((u32)(0xa96784u), r_ebx);
    /* 006ea80c: mov dword ptr [0xa967c4], ebx */ W32((u32)(0xa967c4u), r_ebx);
    /* 006ea812: mov dword ptr [0xa96788], ebx */ W32((u32)(0xa96788u), r_ebx);
    /* 006ea818: mov dword ptr [0xa967c8], ebx */ W32((u32)(0xa967c8u), r_ebx);
    /* 006ea81e: mov dword ptr [0xa9678c], ebx */ W32((u32)(0xa9678cu), r_ebx);
    /* 006ea824: mov dword ptr [0xa967cc], ebx */ W32((u32)(0xa967ccu), r_ebx);
    /* 006ea82a: mov dword ptr [0xa96790], ebx */ W32((u32)(0xa96790u), r_ebx);
    /* 006ea830: mov dword ptr [0xa967d0], ebx */ W32((u32)(0xa967d0u), r_ebx);
    /* 006ea836: mov dword ptr [0xa96794], ebx */ W32((u32)(0xa96794u), r_ebx);
    /* 006ea83c: mov dword ptr [0xa967d4], ebx */ W32((u32)(0xa967d4u), r_ebx);
    /* 006ea842: mov dword ptr [0xa96798], ebx */ W32((u32)(0xa96798u), r_ebx);
    /* 006ea848: mov dword ptr [0xa967d8], ebx */ W32((u32)(0xa967d8u), r_ebx);
    /* 006ea84e: mov dword ptr [0xa9679c], ebx */ W32((u32)(0xa9679cu), r_ebx);
    /* 006ea854: mov dword ptr [0xa967dc], ebx */ W32((u32)(0xa967dcu), r_ebx);
    /* 006ea85a: mov dword ptr [0xa967a0], ebx */ W32((u32)(0xa967a0u), r_ebx);
    /* 006ea860: mov dword ptr [0xa967e0], ebx */ W32((u32)(0xa967e0u), r_ebx);
    /* 006ea866: mov dword ptr [0xa967a4], ebx */ W32((u32)(0xa967a4u), r_ebx);
    /* 006ea86c: mov dword ptr [0xa967e4], ebx */ W32((u32)(0xa967e4u), r_ebx);
    /* 006ea872: mov dword ptr [0xa967a8], ebx */ W32((u32)(0xa967a8u), r_ebx);
    /* 006ea878: mov dword ptr [0xa967e8], ebx */ W32((u32)(0xa967e8u), r_ebx);
    /* 006ea87e: mov dword ptr [0xa967ac], ebx */ W32((u32)(0xa967acu), r_ebx);
    /* 006ea884: mov dword ptr [0xa967ec], ebx */ W32((u32)(0xa967ecu), r_ebx);
    /* 006ea88a: mov dword ptr [0xa967b0], ebx */ W32((u32)(0xa967b0u), r_ebx);
    /* 006ea890: mov dword ptr [0xa967f0], ebx */ W32((u32)(0xa967f0u), r_ebx);
    /* 006ea896: mov dword ptr [0xa967b4], ebx */ W32((u32)(0xa967b4u), r_ebx);
    /* 006ea89c: mov dword ptr [0xa967f4], ebx */ W32((u32)(0xa967f4u), r_ebx);
    /* 006ea8a2: mov dword ptr [0xa967b8], ebx */ W32((u32)(0xa967b8u), r_ebx);
    /* 006ea8a8: mov dword ptr [0xa967f8], ebx */ W32((u32)(0xa967f8u), r_ebx);
    /* 006ea8ae: mov dword ptr [0xa967bc], ebx */ W32((u32)(0xa967bcu), r_ebx);
    /* 006ea8b4: mov dword ptr [0xa967fc], ebx */ W32((u32)(0xa967fcu), r_ebx);
    /* 006ea8ba: mov dword ptr [0xa96800], ebx */ W32((u32)(0xa96800u), r_ebx);
    /* 006ea8c0: mov ebx, dword ptr [edi + 0x128] */ r_ebx = R32((u32)(r_edi+0x128u));
    /* 006ea8c6: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ea8c8: je 0x6eaad7 */ if (fZ) goto L_006eaad7;
L_006ea8ce:; BB(0x006ea8ce);
    /* 006ea8ce: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006ea8d2: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 006ea8d6: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 006ea8d9: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 006ea8dd: fld dword ptr [edi + 0x78] */ FPUSH(R_F32((u32)(r_edi+0x78u)));
    /* 006ea8e0: fsubp st(3) */ ST(3) = ST(3) - ST(0); FPOP();
    /* 006ea8e2: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 006ea8e4: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 006ea8e8: fld dword ptr [edi + 0x7c] */ FPUSH(R_F32((u32)(r_edi+0x7cu)));
    /* 006ea8eb: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 006ea8ed: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 006ea8f1: fld dword ptr [edi + 0x80] */ FPUSH(R_F32((u32)(r_edi+0x80u)));
    /* 006ea8f7: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 006ea8f9: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 006ea8fd: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x6ea902u); f_0083173c();
    /* 006ea902: fld qword ptr [0x96daa8] */ FPUSH(R_F64((u32)(0x96daa8u)));
    /* 006ea908: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 006ea90a: fld dword ptr [0x96db10] */ FPUSH(R_F32((u32)(0x96db10u)));
    /* 006ea910: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 006ea913: mov eax, dword ptr [edi + 0x128] */ r_eax = R32((u32)(r_edi+0x128u));
    /* 006ea919: mov ecx, dword ptr [eax + 0xa4] */ r_ecx = R32((u32)(r_eax+0xa4u));
    /* 006ea91f: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 006ea923: mov edx, dword ptr [edi + 0x12c] */ r_edx = R32((u32)(r_edi+0x12cu));
    /* 006ea929: mov dword ptr [ecx + 0x10], edx */ W32((u32)(r_ecx+0x10u), r_edx);
    /* 006ea92c: mov ebx, dword ptr [edi + 0x128] */ r_ebx = R32((u32)(r_edi+0x128u));
    /* 006ea932: mov eax, dword ptr [ebx + 0xa4] */ r_eax = R32((u32)(r_ebx+0xa4u));
    /* 006ea938: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 006ea93a: fstp dword ptr [eax + 0xc] */ W_F32((u32)(r_eax+0xcu), ST(0)); FPOP();
    /* 006ea93d: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 006ea941: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006ea943: fadd dword ptr [edi + 0x78] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x78u));
    /* 006ea946: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 006ea948: mov eax, dword ptr [edi + 0x128] */ r_eax = R32((u32)(r_edi+0x128u));
    /* 006ea94e: fst dword ptr [esp] */ W_F32((u32)(r_esp), ST(0));
    /* 006ea951: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 006ea953: fadd dword ptr [edi + 0x7c] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x7cu));
    /* 006ea956: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 006ea958: fst dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0));
    /* 006ea95c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006ea95e: fadd dword ptr [edi + 0x80] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x80u));
    /* 006ea964: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 006ea966: fstp dword ptr [eax + 0x38] */ W_F32((u32)(r_eax+0x38u), ST(0)); FPOP();
    /* 006ea969: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006ea96b: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 006ea96d: fstp dword ptr [eax + 0x3c] */ W_F32((u32)(r_eax+0x3cu), ST(0)); FPOP();
    /* 006ea970: fstp dword ptr [eax + 0x40] */ W_F32((u32)(r_eax+0x40u), ST(0)); FPOP();
    /* 006ea973: mov edx, dword ptr [edi + 0x128] */ r_edx = R32((u32)(r_edi+0x128u));
    /* 006ea979: mov eax, dword ptr [edi + 0x54] */ r_eax = R32((u32)(r_edi+0x54u));
    /* 006ea97c: mov dword ptr [edx + 0x5c], eax */ W32((u32)(r_edx+0x5cu), r_eax);
    /* 006ea97f: mov eax, dword ptr [edi + 0x58] */ r_eax = R32((u32)(r_edi+0x58u));
    /* 006ea982: mov dword ptr [edx + 0x60], eax */ W32((u32)(r_edx+0x60u), r_eax);
    /* 006ea985: mov eax, dword ptr [edi + 0x5c] */ r_eax = R32((u32)(r_edi+0x5cu));
    /* 006ea988: mov dword ptr [edx + 0x64], eax */ W32((u32)(r_edx+0x64u), r_eax);
    /* 006ea98b: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 006ea98f: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006ea992: jge 0x6eaa37 */ if ((fS==fO)) goto L_006eaa37;
L_006ea998:; BB(0x006ea998);
    /* 006ea998: mov eax, dword ptr [0xaae16c] */ r_eax = R32((u32)(0xaae16cu));
    /* 006ea99d: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 006ea99f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006ea9a1: jle 0x6eaaa8 */ if ((fZ||fS!=fO)) goto L_006eaaa8;
L_006ea9a7:; BB(0x006ea9a7);
    /* 006ea9a7: mov dword ptr [esp + 0x18], ebp */ W32((u32)(r_esp+0x18u), r_ebp);
    /* 006ea9ab: mov ebp, eax */ r_ebp = r_eax;
L_006ea9ad:; BB(0x006ea9ad);
    /* 006ea9ad: mov edi, dword ptr [ebx*4 + 0xaad720] */ r_edi = R32((u32)(r_ebx*4+0xaad720u));
    /* 006ea9b4: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ea9b6: je 0x6eaa2a */ if (fZ) goto L_006eaa2a;
L_006ea9b8:; BB(0x006ea9b8);
    /* 006ea9b8: movzx edx, word ptr [edi + 0x1c] */ r_edx = (u32)R16((u32)(r_edi+0x1cu));
    /* 006ea9bc: movzx ecx, word ptr [esi + 0x1c] */ r_ecx = (u32)R16((u32)(r_esi+0x1cu));
    /* 006ea9c0: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ea9c2: je 0x6eaa2a */ if (fZ) goto L_006eaa2a;
L_006ea9c4:; BB(0x006ea9c4);
    /* 006ea9c4: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 006ea9c8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006ea9c9: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006ea9ca: mov edx, dword ptr [esp + 0x38] */ r_edx = R32((u32)(r_esp+0x38u));
    /* 006ea9ce: mov ecx, dword ptr [edx + 0x128] */ r_ecx = R32((u32)(r_edx+0x128u));
    /* 006ea9d4: call 0x7b65b4 */ r_esp -= 4; W32(r_esp, 0x6ea9d9u); f_007b65b4();
    /* 006ea9d9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ea9db: je 0x6eaa2a */ if (fZ) goto L_006eaa2a;
L_006ea9dd:; BB(0x006ea9dd);
    /* 006ea9dd: mov edx, dword ptr [edi + 0x30] */ r_edx = R32((u32)(r_edi+0x30u));
    /* 006ea9e0: test edx, 0x30000000 */ {  u32 a = r_edx; u32 b = 0x30000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ea9e6: je 0x6eaa2a */ if (fZ) goto L_006eaa2a;
L_006ea9e8:; BB(0x006ea9e8);
    /* 006ea9e8: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 006ea9eb: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006ea9ee: jne 0x6ea9f8 */ if (!fZ) goto L_006ea9f8;
L_006ea9f0:; BB(0x006ea9f0);
    /* 006ea9f0: test edx, 0x2000000 */ {  u32 a = r_edx; u32 b = 0x2000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ea9f6: jne 0x6eaa2a */ if (!fZ) goto L_006eaa2a;
L_006ea9f8:; BB(0x006ea9f8);
    /* 006ea9f8: mov edx, dword ptr [0xa96800] */ r_edx = R32((u32)(0xa96800u));
    /* 006ea9fe: mov dword ptr [edx*4 + 0xa967c0], eax */ W32((u32)(r_edx*4+0xa967c0u), r_eax);
    /* 006eaa05: mov ecx, dword ptr [0xa96800] */ r_ecx = R32((u32)(0xa96800u));
    /* 006eaa0b: mov dword ptr [ecx*4 + 0xa96780], edi */ W32((u32)(r_ecx*4+0xa96780u), r_edi);
    /* 006eaa12: mov edx, dword ptr [0xa96800] */ r_edx = R32((u32)(0xa96800u));
    /* 006eaa18: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006eaa1b: cmp edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006eaa1e: jge 0x6eaab5 */ if ((fS==fO)) goto L_006eaab5;
L_006eaa24:; BB(0x006eaa24);
    /* 006eaa24: mov dword ptr [0xa96800], edx */ W32((u32)(0xa96800u), r_edx);
L_006eaa2a:; BB(0x006eaa2a);
    /* 006eaa2a: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006eaa2d: cmp ebx, ebp */ {  u32 a = r_ebx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006eaa2f: jl 0x6ea9ad */ if ((fS!=fO)) goto L_006ea9ad;
L_006eaa35:; BB(0x006eaa35);
    /* 006eaa35: jmp 0x6eaaa8 */ goto L_006eaaa8;
L_006eaa37:; BB(0x006eaa37);
    /* 006eaa37: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_006eaa39:; BB(0x006eaa39);
    /* 006eaa39: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006eaa3a: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x6eaa3fu); f_007b4d18();
    /* 006eaa3f: mov ebp, eax */ r_ebp = r_eax;
    /* 006eaa41: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006eaa44: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006eaa46: je 0x6eaaa0 */ if (fZ) goto L_006eaaa0;
L_006eaa48:; BB(0x006eaa48);
    /* 006eaa48: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 006eaa4c: movzx ecx, word ptr [esi + 0x1c] */ r_ecx = (u32)R16((u32)(r_esi+0x1cu));
    /* 006eaa50: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006eaa52: je 0x6eaaa0 */ if (fZ) goto L_006eaaa0;
L_006eaa54:; BB(0x006eaa54);
    /* 006eaa54: push 0x461c4000 */ { u32 v = 0x461c4000u; r_esp -= 4; W32(r_esp, v); }
    /* 006eaa59: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006eaa5a: mov ecx, dword ptr [edi + 0x128] */ r_ecx = R32((u32)(r_edi+0x128u));
    /* 006eaa60: call 0x7b65b4 */ r_esp -= 4; W32(r_esp, 0x6eaa65u); f_007b65b4();
    /* 006eaa65: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006eaa67: je 0x6eaaa0 */ if (fZ) goto L_006eaaa0;
L_006eaa69:; BB(0x006eaa69);
    /* 006eaa69: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 006eaa6c: test edx, 0x10000000 */ {  u32 a = r_edx; u32 b = 0x10000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006eaa72: je 0x6eaaa0 */ if (fZ) goto L_006eaaa0;
L_006eaa74:; BB(0x006eaa74);
    /* 006eaa74: mov edx, dword ptr [0xa96800] */ r_edx = R32((u32)(0xa96800u));
    /* 006eaa7a: mov dword ptr [edx*4 + 0xa967c0], eax */ W32((u32)(r_edx*4+0xa967c0u), r_eax);
    /* 006eaa81: mov ecx, dword ptr [0xa96800] */ r_ecx = R32((u32)(0xa96800u));
    /* 006eaa87: mov dword ptr [ecx*4 + 0xa96780], ebp */ W32((u32)(r_ecx*4+0xa96780u), r_ebp);
    /* 006eaa8e: mov eax, dword ptr [0xa96800] */ r_eax = R32((u32)(0xa96800u));
    /* 006eaa93: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006eaa96: cmp eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006eaa99: jge 0x6eaac1 */ if ((fS==fO)) goto L_006eaac1;
L_006eaa9b:; BB(0x006eaa9b);
    /* 006eaa9b: mov dword ptr [0xa96800], eax */ W32((u32)(0xa96800u), r_eax);
L_006eaaa0:; BB(0x006eaaa0);
    /* 006eaaa0: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006eaaa3: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006eaaa6: jl 0x6eaa39 */ if ((fS!=fO)) goto L_006eaa39;
L_006eaaa8:; BB(0x006eaaa8);
    /* 006eaaa8: mov eax, 0xa96780 */ r_eax = 0xa96780u;
    /* 006eaaad: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006eaab0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006eaab1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006eaab2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006eaab3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006eaab4: ret  */ FN_RET(0x006ea7c4); r_esp += 4; return;
L_006eaab5:; BB(0x006eaab5);
    /* 006eaab5: mov dword ptr [0xa96800], 0xf */ W32((u32)(0xa96800u), 0xfu);
    /* 006eaabf: jmp 0x6eaaa8 */ goto L_006eaaa8;
L_006eaac1:; BB(0x006eaac1);
    /* 006eaac1: mov dword ptr [0xa96800], 0xf */ W32((u32)(0xa96800u), 0xfu);
    /* 006eaacb: jmp 0x6eaaa8 */ goto L_006eaaa8;
L_006eaacd:; BB(0x006eaacd);
    /* 006eaacd: mov ebp, 0x47742400 */ r_ebp = 0x47742400u;
    /* 006eaad2: jmp 0x6ea7e6 */ goto L_006ea7e6;
L_006eaad7:; BB(0x006eaad7);
    /* 006eaad7: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 006eaad9: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006eaadb: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006eaadd: mov eax, 0xa96780 */ r_eax = 0xa96780u;
    /* 006eaae2: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006eaae5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006eaae6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006eaae7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006eaae8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006eaae9: ret  */ FN_RET(0x006ea7c4); r_esp += 4; return;
}

void f_006eaaec(void) /* sub_6EAAEC */
{
    FN_ENTER(0x006eaaec);
    /* 006eaaec: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006eaaed: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006eaaee: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006eaaef: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006eaaf0: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006eaaf3: mov esi, dword ptr [esp + 0x30] */ r_esi = R32((u32)(r_esp+0x30u));
    /* 006eaaf7: mov ebx, dword ptr [esp + 0x34] */ r_ebx = R32((u32)(r_esp+0x34u));
    /* 006eaafb: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x6eab00u); f_00807ac0();
    /* 006eab00: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006eab03: je 0x6ead8c */ if (fZ) goto L_006ead8c;
L_006eab09:; BB(0x006eab09);
    /* 006eab09: mov eax, 0x461c4000 */ r_eax = 0x461c4000u;
    /* 006eab0e: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
L_006eab11:; BB(0x006eab11);
    /* 006eab11: fld dword ptr [esi + 0x20] */ FPUSH(R_F32((u32)(r_esi+0x20u)));
    /* 006eab14: fld dword ptr [esi + 0x24] */ FPUSH(R_F32((u32)(r_esi+0x24u)));
    /* 006eab17: fld dword ptr [esi + 0x28] */ FPUSH(R_F32((u32)(r_esi+0x28u)));
    /* 006eab1a: mov edx, dword ptr [esi + 0x128] */ r_edx = R32((u32)(r_esi+0x128u));
    /* 006eab20: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 006eab22: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 006eab26: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 006eab2a: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 006eab2e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006eab30: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006eab32: mov dword ptr [0xa96780], eax */ W32((u32)(0xa96780u), r_eax);
    /* 006eab37: mov dword ptr [0xa967c0], eax */ W32((u32)(0xa967c0u), r_eax);
    /* 006eab3c: mov dword ptr [0xa96784], eax */ W32((u32)(0xa96784u), r_eax);
    /* 006eab41: mov dword ptr [0xa967c4], eax */ W32((u32)(0xa967c4u), r_eax);
    /* 006eab46: mov dword ptr [0xa96788], eax */ W32((u32)(0xa96788u), r_eax);
    /* 006eab4b: mov dword ptr [0xa967c8], eax */ W32((u32)(0xa967c8u), r_eax);
    /* 006eab50: mov dword ptr [0xa9678c], eax */ W32((u32)(0xa9678cu), r_eax);
    /* 006eab55: mov dword ptr [0xa967cc], eax */ W32((u32)(0xa967ccu), r_eax);
    /* 006eab5a: mov dword ptr [0xa96790], eax */ W32((u32)(0xa96790u), r_eax);
    /* 006eab5f: mov dword ptr [0xa967d0], eax */ W32((u32)(0xa967d0u), r_eax);
    /* 006eab64: mov dword ptr [0xa96794], eax */ W32((u32)(0xa96794u), r_eax);
    /* 006eab69: mov dword ptr [0xa967d4], eax */ W32((u32)(0xa967d4u), r_eax);
    /* 006eab6e: mov dword ptr [0xa96798], eax */ W32((u32)(0xa96798u), r_eax);
    /* 006eab73: mov dword ptr [0xa967d8], eax */ W32((u32)(0xa967d8u), r_eax);
    /* 006eab78: mov dword ptr [0xa9679c], eax */ W32((u32)(0xa9679cu), r_eax);
    /* 006eab7d: mov dword ptr [0xa967dc], eax */ W32((u32)(0xa967dcu), r_eax);
    /* 006eab82: mov dword ptr [0xa967a0], eax */ W32((u32)(0xa967a0u), r_eax);
    /* 006eab87: mov dword ptr [0xa967e0], eax */ W32((u32)(0xa967e0u), r_eax);
    /* 006eab8c: mov dword ptr [0xa967a4], eax */ W32((u32)(0xa967a4u), r_eax);
    /* 006eab91: mov dword ptr [0xa967e4], eax */ W32((u32)(0xa967e4u), r_eax);
    /* 006eab96: mov dword ptr [0xa967a8], eax */ W32((u32)(0xa967a8u), r_eax);
    /* 006eab9b: mov dword ptr [0xa967e8], eax */ W32((u32)(0xa967e8u), r_eax);
    /* 006eaba0: mov dword ptr [0xa967ac], eax */ W32((u32)(0xa967acu), r_eax);
    /* 006eaba5: mov dword ptr [0xa967ec], eax */ W32((u32)(0xa967ecu), r_eax);
    /* 006eabaa: mov dword ptr [0xa967b0], eax */ W32((u32)(0xa967b0u), r_eax);
    /* 006eabaf: mov dword ptr [0xa967f0], eax */ W32((u32)(0xa967f0u), r_eax);
    /* 006eabb4: mov dword ptr [0xa967b4], eax */ W32((u32)(0xa967b4u), r_eax);
    /* 006eabb9: mov dword ptr [0xa967f4], eax */ W32((u32)(0xa967f4u), r_eax);
    /* 006eabbe: mov dword ptr [0xa967b8], eax */ W32((u32)(0xa967b8u), r_eax);
    /* 006eabc3: mov dword ptr [0xa967f8], eax */ W32((u32)(0xa967f8u), r_eax);
    /* 006eabc8: mov dword ptr [0xa967bc], eax */ W32((u32)(0xa967bcu), r_eax);
    /* 006eabcd: mov dword ptr [0xa967fc], eax */ W32((u32)(0xa967fcu), r_eax);
    /* 006eabd2: mov dword ptr [0xa96800], eax */ W32((u32)(0xa96800u), r_eax);
    /* 006eabd7: je 0x6ead99 */ if (fZ) goto L_006ead99;
L_006eabdd:; BB(0x006eabdd);
    /* 006eabdd: lea ecx, [esp + 0x10] */ r_ecx = (u32)(r_esp+0x10u);
    /* 006eabe1: fld dword ptr [esi + 0x78] */ FPUSH(R_F32((u32)(r_esi+0x78u)));
    /* 006eabe4: fsubr dword ptr [esp + 4] */ ST(0) = R_F32((u32)(r_esp+0x4u)) - ST(0);
    /* 006eabe8: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 006eabec: fld dword ptr [esi + 0x7c] */ FPUSH(R_F32((u32)(r_esi+0x7cu)));
    /* 006eabef: fsubr dword ptr [esp + 0xc] */ ST(0) = R_F32((u32)(r_esp+0xcu)) - ST(0);
    /* 006eabf3: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 006eabf7: fld dword ptr [esi + 0x80] */ FPUSH(R_F32((u32)(r_esi+0x80u)));
    /* 006eabfd: fsubr dword ptr [esp + 8] */ ST(0) = R_F32((u32)(r_esp+0x8u)) - ST(0);
    /* 006eac01: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 006eac05: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x6eac0au); f_0083173c();
    /* 006eac0a: fld dword ptr [0x96db04] */ FPUSH(R_F32((u32)(0x96db04u)));
    /* 006eac10: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 006eac12: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 006eac16: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 006eac1a: mov edx, dword ptr [esi + 0x128] */ r_edx = R32((u32)(r_esi+0x128u));
    /* 006eac20: mov eax, dword ptr [edx + 0xa4] */ r_eax = R32((u32)(r_edx+0xa4u));
    /* 006eac26: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 006eac2a: mov ecx, dword ptr [esi + 0x12c] */ r_ecx = R32((u32)(r_esi+0x12cu));
    /* 006eac30: mov dword ptr [eax + 0x10], ecx */ W32((u32)(r_eax+0x10u), r_ecx);
    /* 006eac33: mov eax, dword ptr [esi + 0x128] */ r_eax = R32((u32)(r_esi+0x128u));
    /* 006eac39: mov eax, dword ptr [eax + 0xa4] */ r_eax = R32((u32)(r_eax+0xa4u));
    /* 006eac3f: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 006eac41: fstp dword ptr [eax + 0xc] */ W_F32((u32)(r_eax+0xcu), ST(0)); FPOP();
    /* 006eac44: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006eac46: fadd dword ptr [esi + 0x78] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x78u));
    /* 006eac49: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006eac4b: fadd dword ptr [esi + 0x7c] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x7cu));
    /* 006eac4e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006eac50: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 006eac52: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006eac54: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 006eac56: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 006eac58: fadd dword ptr [esi + 0x80] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x80u));
    /* 006eac5e: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 006eac60: mov eax, dword ptr [esi + 0x128] */ r_eax = R32((u32)(r_esi+0x128u));
    /* 006eac66: fstp dword ptr [eax + 0x38] */ W_F32((u32)(r_eax+0x38u), ST(0)); FPOP();
    /* 006eac69: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006eac6b: fstp dword ptr [eax + 0x3c] */ W_F32((u32)(r_eax+0x3cu), ST(0)); FPOP();
    /* 006eac6e: fstp dword ptr [eax + 0x40] */ W_F32((u32)(r_eax+0x40u), ST(0)); FPOP();
    /* 006eac71: mov eax, dword ptr [esi + 0x128] */ r_eax = R32((u32)(r_esi+0x128u));
    /* 006eac77: mov edx, dword ptr [esi + 0x54] */ r_edx = R32((u32)(r_esi+0x54u));
    /* 006eac7a: mov dword ptr [eax + 0x5c], edx */ W32((u32)(r_eax+0x5cu), r_edx);
    /* 006eac7d: mov edx, dword ptr [esi + 0x58] */ r_edx = R32((u32)(r_esi+0x58u));
    /* 006eac80: mov dword ptr [eax + 0x60], edx */ W32((u32)(r_eax+0x60u), r_edx);
    /* 006eac83: mov edx, dword ptr [esi + 0x5c] */ r_edx = R32((u32)(r_esi+0x5cu));
    /* 006eac86: mov dword ptr [eax + 0x64], edx */ W32((u32)(r_eax+0x64u), r_edx);
    /* 006eac89: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 006eac8f: mov eax, dword ptr [0xaae16c] */ r_eax = R32((u32)(0xaae16cu));
    /* 006eac94: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006eac96: jge 0x6ead6c */ if ((fS==fO)) goto L_006ead6c;
L_006eac9c:; BB(0x006eac9c);
    /* 006eac9c: mov edi, esi */ r_edi = r_esi;
    /* 006eac9e: mov esi, ebx */ r_esi = r_ebx;
    /* 006eaca0: mov ebx, edx */ r_ebx = r_edx;
L_006eaca2:; BB(0x006eaca2);
    /* 006eaca2: mov ebp, dword ptr [ebx*4 + 0xaad720] */ r_ebp = R32((u32)(r_ebx*4+0xaad720u));
    /* 006eaca9: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006eacab: je 0x6ead61 */ if (fZ) goto L_006ead61;
L_006eacb1:; BB(0x006eacb1);
    /* 006eacb1: mov ecx, dword ptr [ebp + 0x30] */ r_ecx = R32((u32)(r_ebp+0x30u));
    /* 006eacb4: test ecx, 0x20000000 */ {  u32 a = r_ecx; u32 b = 0x20000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006eacba: jne 0x6eacfa */ if (!fZ) goto L_006eacfa;
L_006eacbc:; BB(0x006eacbc);
    /* 006eacbc: test ecx, 0x40000000 */ {  u32 a = r_ecx; u32 b = 0x40000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006eacc2: je 0x6ead61 */ if (fZ) goto L_006ead61;
L_006eacc8:; BB(0x006eacc8);
    /* 006eacc8: test ecx, 0x80000000 */ {  u32 a = r_ecx; u32 b = 0x80000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006eacce: jne 0x6ead61 */ if (!fZ) goto L_006ead61;
L_006eacd4:; BB(0x006eacd4);
    /* 006eacd4: push 0x461c4000 */ { u32 v = 0x461c4000u; r_esp -= 4; W32(r_esp, v); }
    /* 006eacd9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006eacda: mov ecx, dword ptr [edi + 0x128] */ r_ecx = R32((u32)(r_edi+0x128u));
    /* 006eace0: call 0x7b65b4 */ r_esp -= 4; W32(r_esp, 0x6eace5u); f_007b65b4();
    /* 006eace5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006eace7: je 0x6eacf3 */ if (fZ) goto L_006eacf3;
L_006eace9:; BB(0x006eace9);
    /* 006eace9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006eaceb: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006eacee: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006eacef: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006eacf0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006eacf1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006eacf2: ret  */ FN_RET(0x006eaaec); r_esp += 4; return;
L_006eacf3:; BB(0x006eacf3);
    /* 006eacf3: mov eax, dword ptr [0xaae16c] */ r_eax = R32((u32)(0xaae16cu));
    /* 006eacf8: jmp 0x6ead61 */ goto L_006ead61;
L_006eacfa:; BB(0x006eacfa);
    /* 006eacfa: movzx ecx, word ptr [ebp + 0x1c] */ r_ecx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 006eacfe: movzx edx, word ptr [esi + 0x1c] */ r_edx = (u32)R16((u32)(r_esi+0x1cu));
    /* 006ead02: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ead04: je 0x6ead61 */ if (fZ) goto L_006ead61;
L_006ead06:; BB(0x006ead06);
    /* 006ead06: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 006ead09: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ead0a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006ead0b: mov ecx, dword ptr [edi + 0x128] */ r_ecx = R32((u32)(r_edi+0x128u));
    /* 006ead11: call 0x7b65b4 */ r_esp -= 4; W32(r_esp, 0x6ead16u); f_007b65b4();
    /* 006ead16: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ead18: je 0x6ead85 */ if (fZ) goto L_006ead85;
L_006ead1a:; BB(0x006ead1a);
    /* 006ead1a: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 006ead1d: test cl, 1 */ {  u32 a = (u8)r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006ead20: jne 0x6ead31 */ if (!fZ) goto L_006ead31;
L_006ead22:; BB(0x006ead22);
    /* 006ead22: test ecx, 0x2000000 */ {  u32 a = r_ecx; u32 b = 0x2000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ead28: je 0x6ead31 */ if (fZ) goto L_006ead31;
L_006ead2a:; BB(0x006ead2a);
    /* 006ead2a: mov eax, dword ptr [0xaae16c] */ r_eax = R32((u32)(0xaae16cu));
    /* 006ead2f: jmp 0x6ead61 */ goto L_006ead61;
L_006ead31:; BB(0x006ead31);
    /* 006ead31: mov ecx, dword ptr [0xa96800] */ r_ecx = R32((u32)(0xa96800u));
    /* 006ead37: mov dword ptr [ecx*4 + 0xa967c0], eax */ W32((u32)(r_ecx*4+0xa967c0u), r_eax);
    /* 006ead3e: mov eax, dword ptr [0xa96800] */ r_eax = R32((u32)(0xa96800u));
    /* 006ead43: mov dword ptr [eax*4 + 0xa96780], ebp */ W32((u32)(r_eax*4+0xa96780u), r_ebp);
    /* 006ead4a: mov eax, dword ptr [0xa96800] */ r_eax = R32((u32)(0xa96800u));
    /* 006ead4f: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006ead52: cmp eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006ead55: jge 0x6ead79 */ if ((fS==fO)) goto L_006ead79;
L_006ead57:; BB(0x006ead57);
    /* 006ead57: mov dword ptr [0xa96800], eax */ W32((u32)(0xa96800u), r_eax);
    /* 006ead5c: mov eax, dword ptr [0xaae16c] */ r_eax = R32((u32)(0xaae16cu));
L_006ead61:; BB(0x006ead61);
    /* 006ead61: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006ead64: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006ead66: jl 0x6eaca2 */ if ((fS!=fO)) goto L_006eaca2;
L_006ead6c:; BB(0x006ead6c);
    /* 006ead6c: mov eax, 0xa96780 */ r_eax = 0xa96780u;
    /* 006ead71: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ead74: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ead75: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ead76: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ead77: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ead78: ret  */ FN_RET(0x006eaaec); r_esp += 4; return;
L_006ead79:; BB(0x006ead79);
    /* 006ead79: mov dword ptr [0xa96800], 0xf */ W32((u32)(0xa96800u), 0xfu);
    /* 006ead83: jmp 0x6ead6c */ goto L_006ead6c;
L_006ead85:; BB(0x006ead85);
    /* 006ead85: mov eax, dword ptr [0xaae16c] */ r_eax = R32((u32)(0xaae16cu));
    /* 006ead8a: jmp 0x6ead61 */ goto L_006ead61;
L_006ead8c:; BB(0x006ead8c);
    /* 006ead8c: mov eax, 0x47742400 */ r_eax = 0x47742400u;
    /* 006ead91: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006ead94: jmp 0x6eab11 */ goto L_006eab11;
L_006ead99:; BB(0x006ead99);
    /* 006ead99: mov eax, 0xa96780 */ r_eax = 0xa96780u;
    /* 006ead9e: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006eada1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006eada2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006eada3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006eada4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006eada5: ret  */ FN_RET(0x006eaaec); r_esp += 4; return;
}

void f_006eada8(void) /* sub_6EADA8 */
{
    FN_ENTER(0x006eada8);
    /* 006eada8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006eada9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006eadaa: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006eadab: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006eadae: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
    /* 006eadb2: mov esi, dword ptr [ebx + 0xdc] */ r_esi = R32((u32)(r_ebx+0xdcu));
    /* 006eadb8: mov edx, dword ptr [ebx + 0x20] */ r_edx = R32((u32)(r_ebx+0x20u));
    /* 006eadbb: mov eax, dword ptr [ebx + 0x24] */ r_eax = R32((u32)(r_ebx+0x24u));
    /* 006eadbe: mov ecx, dword ptr [ebx + 0x28] */ r_ecx = R32((u32)(r_ebx+0x28u));
    /* 006eadc1: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 006eadc3: mov dword ptr [0xa96780], ebx */ W32((u32)(0xa96780u), r_ebx);
    /* 006eadc9: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006eadcb: mov dword ptr [0xa967c0], ebx */ W32((u32)(0xa967c0u), r_ebx);
    /* 006eadd1: mov dword ptr [0xa96784], ebx */ W32((u32)(0xa96784u), r_ebx);
    /* 006eadd7: mov dword ptr [0xa967c4], ebx */ W32((u32)(0xa967c4u), r_ebx);
    /* 006eaddd: mov dword ptr [0xa96788], ebx */ W32((u32)(0xa96788u), r_ebx);
    /* 006eade3: mov dword ptr [0xa967c8], ebx */ W32((u32)(0xa967c8u), r_ebx);
    /* 006eade9: mov dword ptr [0xa9678c], ebx */ W32((u32)(0xa9678cu), r_ebx);
    /* 006eadef: mov dword ptr [0xa967cc], ebx */ W32((u32)(0xa967ccu), r_ebx);
    /* 006eadf5: mov dword ptr [0xa96790], ebx */ W32((u32)(0xa96790u), r_ebx);
    /* 006eadfb: mov dword ptr [0xa967d0], ebx */ W32((u32)(0xa967d0u), r_ebx);
    /* 006eae01: mov dword ptr [0xa96794], ebx */ W32((u32)(0xa96794u), r_ebx);
    /* 006eae07: mov dword ptr [0xa967d4], ebx */ W32((u32)(0xa967d4u), r_ebx);
    /* 006eae0d: mov dword ptr [0xa96798], ebx */ W32((u32)(0xa96798u), r_ebx);
    /* 006eae13: mov dword ptr [0xa967d8], ebx */ W32((u32)(0xa967d8u), r_ebx);
    /* 006eae19: mov dword ptr [0xa9679c], ebx */ W32((u32)(0xa9679cu), r_ebx);
    /* 006eae1f: mov dword ptr [0xa967dc], ebx */ W32((u32)(0xa967dcu), r_ebx);
    /* 006eae25: mov dword ptr [0xa967a0], ebx */ W32((u32)(0xa967a0u), r_ebx);
    /* 006eae2b: mov dword ptr [0xa967e0], ebx */ W32((u32)(0xa967e0u), r_ebx);
    /* 006eae31: mov dword ptr [0xa967a4], ebx */ W32((u32)(0xa967a4u), r_ebx);
    /* 006eae37: mov dword ptr [0xa967e4], ebx */ W32((u32)(0xa967e4u), r_ebx);
    /* 006eae3d: mov dword ptr [0xa967a8], ebx */ W32((u32)(0xa967a8u), r_ebx);
    /* 006eae43: mov dword ptr [0xa967e8], ebx */ W32((u32)(0xa967e8u), r_ebx);
    /* 006eae49: mov dword ptr [0xa967ac], ebx */ W32((u32)(0xa967acu), r_ebx);
    /* 006eae4f: mov dword ptr [0xa967ec], ebx */ W32((u32)(0xa967ecu), r_ebx);
    /* 006eae55: mov dword ptr [0xa967b0], ebx */ W32((u32)(0xa967b0u), r_ebx);
    /* 006eae5b: mov dword ptr [0xa967f0], ebx */ W32((u32)(0xa967f0u), r_ebx);
    /* 006eae61: mov dword ptr [0xa967b4], ebx */ W32((u32)(0xa967b4u), r_ebx);
    /* 006eae67: mov dword ptr [0xa967f4], ebx */ W32((u32)(0xa967f4u), r_ebx);
    /* 006eae6d: mov dword ptr [0xa967b8], ebx */ W32((u32)(0xa967b8u), r_ebx);
    /* 006eae73: mov dword ptr [0xa967f8], ebx */ W32((u32)(0xa967f8u), r_ebx);
    /* 006eae79: mov dword ptr [0xa967bc], ebx */ W32((u32)(0xa967bcu), r_ebx);
    /* 006eae7f: mov dword ptr [0xa967fc], ebx */ W32((u32)(0xa967fcu), r_ebx);
    /* 006eae85: mov dword ptr [0xa96800], ebx */ W32((u32)(0xa96800u), r_ebx);
    /* 006eae8b: je 0x6eaf13 */ if (fZ) goto L_006eaf13;
L_006eae91:; BB(0x006eae91);
    /* 006eae91: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 006eae95: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 006eae99: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 006eae9c: mov dword ptr [esi + 0x38], edx */ W32((u32)(r_esi+0x38u), r_edx);
    /* 006eae9f: mov dword ptr [esi + 0x3c], eax */ W32((u32)(r_esi+0x3cu), r_eax);
    /* 006eaea2: mov dword ptr [esi + 0x40], ecx */ W32((u32)(r_esi+0x40u), r_ecx);
    /* 006eaea5: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_006eaea7:; BB(0x006eaea7);
    /* 006eaea7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006eaea8: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6eaeadu); f_0068d5a8();
    /* 006eaead: mov edi, eax */ r_edi = r_eax;
    /* 006eaeaf: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006eaeb2: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006eaeb4: je 0x6eaef3 */ if (fZ) goto L_006eaef3;
L_006eaeb6:; BB(0x006eaeb6);
    /* 006eaeb6: push 0x461c4000 */ { u32 v = 0x461c4000u; r_esp -= 4; W32(r_esp, v); }
    /* 006eaebb: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006eaebc: mov ecx, esi */ r_ecx = r_esi;
    /* 006eaebe: call 0x7b65b4 */ r_esp -= 4; W32(r_esp, 0x6eaec3u); f_007b65b4();
    /* 006eaec3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006eaec5: je 0x6eaef3 */ if (fZ) goto L_006eaef3;
L_006eaec7:; BB(0x006eaec7);
    /* 006eaec7: mov edx, dword ptr [0xa96800] */ r_edx = R32((u32)(0xa96800u));
    /* 006eaecd: mov dword ptr [edx*4 + 0xa967c0], eax */ W32((u32)(r_edx*4+0xa967c0u), r_eax);
    /* 006eaed4: mov edx, dword ptr [0xa96800] */ r_edx = R32((u32)(0xa96800u));
    /* 006eaeda: mov dword ptr [edx*4 + 0xa96780], edi */ W32((u32)(r_edx*4+0xa96780u), r_edi);
    /* 006eaee1: mov eax, dword ptr [0xa96800] */ r_eax = R32((u32)(0xa96800u));
    /* 006eaee6: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006eaee9: cmp eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006eaeec: jge 0x6eaf07 */ if ((fS==fO)) goto L_006eaf07;
L_006eaeee:; BB(0x006eaeee);
    /* 006eaeee: mov dword ptr [0xa96800], eax */ W32((u32)(0xa96800u), r_eax);
L_006eaef3:; BB(0x006eaef3);
    /* 006eaef3: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006eaef6: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006eaef9: jl 0x6eaea7 */ if ((fS!=fO)) goto L_006eaea7;
L_006eaefb:; BB(0x006eaefb);
    /* 006eaefb: mov eax, 0xa96780 */ r_eax = 0xa96780u;
    /* 006eaf00: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006eaf03: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006eaf04: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006eaf05: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006eaf06: ret  */ FN_RET(0x006eada8); r_esp += 4; return;
L_006eaf07:; BB(0x006eaf07);
    /* 006eaf07: mov dword ptr [0xa96800], 0xf */ W32((u32)(0xa96800u), 0xfu);
    /* 006eaf11: jmp 0x6eaefb */ goto L_006eaefb;
L_006eaf13:; BB(0x006eaf13);
    /* 006eaf13: mov eax, 0xa96780 */ r_eax = 0xa96780u;
    /* 006eaf18: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006eaf1b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006eaf1c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006eaf1d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006eaf1e: ret  */ FN_RET(0x006eada8); r_esp += 4; return;
}

void f_006eaf20(void) /* sub_6EAF20 */
{
    FN_ENTER(0x006eaf20);
    /* 006eaf20: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006eaf21: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006eaf22: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006eaf23: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006eaf24: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006eaf27: mov edi, dword ptr [esp + 0x20] */ r_edi = R32((u32)(r_esp+0x20u));
    /* 006eaf2b: mov esi, dword ptr [edi + 0xdc] */ r_esi = R32((u32)(r_edi+0xdcu));
    /* 006eaf31: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x6eaf36u); f_00807ac0();
    /* 006eaf36: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006eaf39: je 0x6eb0de */ if (fZ) goto L_006eb0de;
L_006eaf3f:; BB(0x006eaf3f);
    /* 006eaf3f: mov ebx, 0x461c4000 */ r_ebx = 0x461c4000u;
L_006eaf44:; BB(0x006eaf44);
    /* 006eaf44: mov edx, dword ptr [edi + 0x20] */ r_edx = R32((u32)(r_edi+0x20u));
    /* 006eaf47: mov eax, dword ptr [edi + 0x24] */ r_eax = R32((u32)(r_edi+0x24u));
    /* 006eaf4a: mov ecx, dword ptr [edi + 0x28] */ r_ecx = R32((u32)(r_edi+0x28u));
    /* 006eaf4d: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 006eaf4f: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006eaf51: mov dword ptr [0xa96780], edi */ W32((u32)(0xa96780u), r_edi);
    /* 006eaf57: mov dword ptr [0xa967c0], edi */ W32((u32)(0xa967c0u), r_edi);
    /* 006eaf5d: mov dword ptr [0xa96784], edi */ W32((u32)(0xa96784u), r_edi);
    /* 006eaf63: mov dword ptr [0xa967c4], edi */ W32((u32)(0xa967c4u), r_edi);
    /* 006eaf69: mov dword ptr [0xa96788], edi */ W32((u32)(0xa96788u), r_edi);
    /* 006eaf6f: mov dword ptr [0xa967c8], edi */ W32((u32)(0xa967c8u), r_edi);
    /* 006eaf75: mov dword ptr [0xa9678c], edi */ W32((u32)(0xa9678cu), r_edi);
    /* 006eaf7b: mov dword ptr [0xa967cc], edi */ W32((u32)(0xa967ccu), r_edi);
    /* 006eaf81: mov dword ptr [0xa96790], edi */ W32((u32)(0xa96790u), r_edi);
    /* 006eaf87: mov dword ptr [0xa967d0], edi */ W32((u32)(0xa967d0u), r_edi);
    /* 006eaf8d: mov dword ptr [0xa96794], edi */ W32((u32)(0xa96794u), r_edi);
    /* 006eaf93: mov dword ptr [0xa967d4], edi */ W32((u32)(0xa967d4u), r_edi);
    /* 006eaf99: mov dword ptr [0xa96798], edi */ W32((u32)(0xa96798u), r_edi);
    /* 006eaf9f: mov dword ptr [0xa967d8], edi */ W32((u32)(0xa967d8u), r_edi);
    /* 006eafa5: mov dword ptr [0xa9679c], edi */ W32((u32)(0xa9679cu), r_edi);
    /* 006eafab: mov dword ptr [0xa967dc], edi */ W32((u32)(0xa967dcu), r_edi);
    /* 006eafb1: mov dword ptr [0xa967a0], edi */ W32((u32)(0xa967a0u), r_edi);
    /* 006eafb7: mov dword ptr [0xa967e0], edi */ W32((u32)(0xa967e0u), r_edi);
    /* 006eafbd: mov dword ptr [0xa967a4], edi */ W32((u32)(0xa967a4u), r_edi);
    /* 006eafc3: mov dword ptr [0xa967e4], edi */ W32((u32)(0xa967e4u), r_edi);
    /* 006eafc9: mov dword ptr [0xa967a8], edi */ W32((u32)(0xa967a8u), r_edi);
    /* 006eafcf: mov dword ptr [0xa967e8], edi */ W32((u32)(0xa967e8u), r_edi);
    /* 006eafd5: mov dword ptr [0xa967ac], edi */ W32((u32)(0xa967acu), r_edi);
    /* 006eafdb: mov dword ptr [0xa967ec], edi */ W32((u32)(0xa967ecu), r_edi);
    /* 006eafe1: mov dword ptr [0xa967b0], edi */ W32((u32)(0xa967b0u), r_edi);
    /* 006eafe7: mov dword ptr [0xa967f0], edi */ W32((u32)(0xa967f0u), r_edi);
    /* 006eafed: mov dword ptr [0xa967b4], edi */ W32((u32)(0xa967b4u), r_edi);
    /* 006eaff3: mov dword ptr [0xa967f4], edi */ W32((u32)(0xa967f4u), r_edi);
    /* 006eaff9: mov dword ptr [0xa967b8], edi */ W32((u32)(0xa967b8u), r_edi);
    /* 006eafff: mov dword ptr [0xa967f8], edi */ W32((u32)(0xa967f8u), r_edi);
    /* 006eb005: mov dword ptr [0xa967bc], edi */ W32((u32)(0xa967bcu), r_edi);
    /* 006eb00b: mov dword ptr [0xa967fc], edi */ W32((u32)(0xa967fcu), r_edi);
    /* 006eb011: mov dword ptr [0xa96800], edi */ W32((u32)(0xa96800u), r_edi);
    /* 006eb017: je 0x6eb0d1 */ if (fZ) goto L_006eb0d1;
L_006eb01d:; BB(0x006eb01d);
    /* 006eb01d: mov edi, dword ptr [0xaae168] */ r_edi = R32((u32)(0xaae168u));
    /* 006eb023: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 006eb027: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 006eb02b: mov dword ptr [esi + 0x38], edx */ W32((u32)(r_esi+0x38u), r_edx);
    /* 006eb02e: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 006eb031: mov dword ptr [esi + 0x3c], eax */ W32((u32)(r_esi+0x3cu), r_eax);
    /* 006eb034: mov eax, dword ptr [0xaae16c] */ r_eax = R32((u32)(0xaae16cu));
    /* 006eb039: mov dword ptr [esi + 0x40], ecx */ W32((u32)(r_esi+0x40u), r_ecx);
    /* 006eb03c: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006eb03e: jge 0x6eb0b1 */ if ((fS==fO)) goto L_006eb0b1;
L_006eb040:; BB(0x006eb040);
    /* 006eb040: mov ebp, dword ptr [edi*4 + 0xaad720] */ r_ebp = R32((u32)(r_edi*4+0xaad720u));
    /* 006eb047: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006eb049: je 0x6eb0aa */ if (fZ) goto L_006eb0aa;
L_006eb04b:; BB(0x006eb04b);
    /* 006eb04b: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 006eb04e: test edx, 0x20000000 */ {  u32 a = r_edx; u32 b = 0x20000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006eb054: je 0x6eb0aa */ if (fZ) goto L_006eb0aa;
L_006eb056:; BB(0x006eb056);
    /* 006eb056: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006eb057: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006eb058: mov ecx, esi */ r_ecx = r_esi;
    /* 006eb05a: call 0x7b65b4 */ r_esp -= 4; W32(r_esp, 0x6eb05fu); f_007b65b4();
    /* 006eb05f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006eb061: je 0x6eb0ca */ if (fZ) goto L_006eb0ca;
L_006eb063:; BB(0x006eb063);
    /* 006eb063: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 006eb066: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006eb069: jne 0x6eb07a */ if (!fZ) goto L_006eb07a;
L_006eb06b:; BB(0x006eb06b);
    /* 006eb06b: test edx, 0x2000000 */ {  u32 a = r_edx; u32 b = 0x2000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006eb071: je 0x6eb07a */ if (fZ) goto L_006eb07a;
L_006eb073:; BB(0x006eb073);
    /* 006eb073: mov eax, dword ptr [0xaae16c] */ r_eax = R32((u32)(0xaae16cu));
    /* 006eb078: jmp 0x6eb0aa */ goto L_006eb0aa;
L_006eb07a:; BB(0x006eb07a);
    /* 006eb07a: mov edx, dword ptr [0xa96800] */ r_edx = R32((u32)(0xa96800u));
    /* 006eb080: mov dword ptr [edx*4 + 0xa967c0], eax */ W32((u32)(r_edx*4+0xa967c0u), r_eax);
    /* 006eb087: mov eax, dword ptr [0xa96800] */ r_eax = R32((u32)(0xa96800u));
    /* 006eb08c: mov dword ptr [eax*4 + 0xa96780], ebp */ W32((u32)(r_eax*4+0xa96780u), r_ebp);
    /* 006eb093: mov eax, dword ptr [0xa96800] */ r_eax = R32((u32)(0xa96800u));
    /* 006eb098: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006eb09b: cmp eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006eb09e: jge 0x6eb0be */ if ((fS==fO)) goto L_006eb0be;
L_006eb0a0:; BB(0x006eb0a0);
    /* 006eb0a0: mov dword ptr [0xa96800], eax */ W32((u32)(0xa96800u), r_eax);
    /* 006eb0a5: mov eax, dword ptr [0xaae16c] */ r_eax = R32((u32)(0xaae16cu));
L_006eb0aa:; BB(0x006eb0aa);
    /* 006eb0aa: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006eb0ad: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006eb0af: jl 0x6eb040 */ if ((fS!=fO)) goto L_006eb040;
L_006eb0b1:; BB(0x006eb0b1);
    /* 006eb0b1: mov eax, 0xa96780 */ r_eax = 0xa96780u;
    /* 006eb0b6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006eb0b9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006eb0ba: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006eb0bb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006eb0bc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006eb0bd: ret  */ FN_RET(0x006eaf20); r_esp += 4; return;
L_006eb0be:; BB(0x006eb0be);
    /* 006eb0be: mov dword ptr [0xa96800], 0xf */ W32((u32)(0xa96800u), 0xfu);
    /* 006eb0c8: jmp 0x6eb0b1 */ goto L_006eb0b1;
L_006eb0ca:; BB(0x006eb0ca);
    /* 006eb0ca: mov eax, dword ptr [0xaae16c] */ r_eax = R32((u32)(0xaae16cu));
    /* 006eb0cf: jmp 0x6eb0aa */ goto L_006eb0aa;
L_006eb0d1:; BB(0x006eb0d1);
    /* 006eb0d1: mov eax, 0xa96780 */ r_eax = 0xa96780u;
    /* 006eb0d6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006eb0d9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006eb0da: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006eb0db: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006eb0dc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006eb0dd: ret  */ FN_RET(0x006eaf20); r_esp += 4; return;
L_006eb0de:; BB(0x006eb0de);
    /* 006eb0de: mov ebx, 0x47742400 */ r_ebx = 0x47742400u;
    /* 006eb0e3: jmp 0x6eaf44 */ goto L_006eaf44;
}

