#include "protos.h"

void f_0088b230(void) /* sub_88B230 */
{
    FN_ENTER(0x0088b230);
L_0088b230:; BB(0x0088b230);
    /* 0088b230: test dword ptr [0xae7f00], 0xffffff80 */ {  u32 a = R32((u32)(0xae7f00u)); u32 b = 0xffffff80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088b23a: jne 0x88b258 */ if (!fZ) goto L_0088b258;
L_0088b240:; BB(0x0088b240);
    /* 0088b240: test dword ptr [0xae7f00], 0xffffffff */ {  u32 a = R32((u32)(0xae7f00u)); u32 b = 0xffffffffu; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088b24a: jne 0x88b4a0 */ if (!fZ) goto L_0088b4a0;
L_0088b250:; BB(0x0088b250);
    /* 0088b250: call 0x86b8a0 */ r_esp -= 4; W32(r_esp, 0x88b255u); f_0086b8a0();
    /* 0088b255: jmp 0x88b230 */ goto L_0088b230;
L_0088b258:; BB(0x0088b258);
    /* 0088b258: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0088b259: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0088b25a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0088b25b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0088b25c: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0088b25f: mov edi, dword ptr [esp + 0x34] */ r_edi = R32((u32)(r_esp+0x34u));
    /* 0088b263: mov esi, dword ptr [esp + 0x38] */ r_esi = R32((u32)(r_esp+0x38u));
    /* 0088b267: mov ebx, dword ptr [esp + 0x3c] */ r_ebx = R32((u32)(r_esp+0x3cu));
    /* 0088b26b: mov ecx, dword ptr [esp + 0x40] */ r_ecx = R32((u32)(r_esp+0x40u));
    /* 0088b26f: sub ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0088b271: sub esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0088b273: mov dword ptr [esp + 0xc], esi */ W32((u32)(r_esp+0xcu), r_esi);
    /* 0088b277: mov eax, ecx */ r_eax = r_ecx;
    /* 0088b279: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0088b27b: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0088b27c: xor ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0088b27e: sub ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 0088b280: mov eax, ecx */ r_eax = r_ecx;
    /* 0088b282: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0088b283: idiv esi */ { i32 d = (i32)r_esi; if (!d) UNSUP(0x0088b283, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0088b283, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0088b285: lea edx, [eax - 1] */ r_edx = (u32)(r_eax+0xffffffffu);
    /* 0088b288: lea esi, [eax + 1] */ r_esi = (u32)(r_eax+0x1u);
    /* 0088b28b: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0088b28f: cmp ecx, 0 */ {  u32 a = r_ecx; u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088b292: mov eax, 0 */ r_eax = 0x0u;
    /* 0088b297: cmovl esi, edx */ if ((fS!=fO)) { r_esi = r_edx; }
    /* 0088b29a: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0088b29e: lea eax, [edi + edi] */ r_eax = (u32)(r_edi+r_edi);
    /* 0088b2a1: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0088b2a3: add eax, dword ptr [esp + 0x44] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x44u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0088b2a7: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0088b2ab: call 0x88a0fc */ r_esp -= 4; W32(r_esp, 0x88b2b0u); f_0088a0fc();
    /* 0088b2b0: mov ecx, eax */ r_ecx = r_eax;
    /* 0088b2b2: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0088b2b6: imul eax, dword ptr [esp + 0xc] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_esp+0xcu)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0088b2bb: mov edi, 1 */ r_edi = 0x1u;
    /* 0088b2c0: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0088b2c1: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0088b2c3: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0088b2c5: sub ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 0088b2c7: mov edx, ebx */ r_edx = r_ebx;
    /* 0088b2c9: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 0088b2cb: imul edx, edx */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_edx; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0088b2ce: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 0088b2d2: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 0088b2d6: mov edi, dword ptr [esp + 0x4c] */ r_edi = R32((u32)(r_esp+0x4cu));
    /* 0088b2da: movss xmm1, dword ptr [edi + 0x458] */ { u32 v = R32((u32)(r_edi+0x458u)); xmm[1].d[0] = v; xmm[1].d[1] = 0; xmm[1].d[2] = 0; xmm[1].d[3] = 0; }
    /* 0088b2e2: mov edi, dword ptr [esp + 0x48] */ r_edi = R32((u32)(r_esp+0x48u));
    /* 0088b2e6: movss xmm2, dword ptr [edi + eax*4] */ { u32 v = R32((u32)(r_edi+r_eax*4)); xmm[2].d[0] = v; xmm[2].d[1] = 0; xmm[2].d[2] = 0; xmm[2].d[3] = 0; }
    /* 0088b2eb: addss xmm2, xmm1 */ { XMM s = xmm[1]; xmm[2].fs[0] = xmm[2].fs[0] + s.fs[0]; }
    /* 0088b2ef: mov edi, dword ptr [esp + 0x14] */ r_edi = R32((u32)(r_esp+0x14u));
    /* 0088b2f3: comiss xmm2, dword ptr [edi] */ { XMM s; s.d[0] = R32((u32)(r_edi)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; float a = xmm[2].fs[0]; float b = s.fs[0]; fO = 0; fS = 0; fA = 0; if (a != a || b != b) { fZ = 1; fP = 1; fC = 1; } else if (a > b) { fZ = 0; fP = 0; fC = 0; } else if (a < b) { fZ = 0; fP = 0; fC = 1; } else { fZ = 1; fP = 0; fC = 0; } }
    /* 0088b2f6: jb 0x88b33b */ if (fC) goto L_0088b33b;
L_0088b2f8:; BB(0x0088b2f8);
    /* 0088b2f8: mov edi, dword ptr [esp + 0x4c] */ r_edi = R32((u32)(r_esp+0x4cu));
    /* 0088b2fc: movss xmm2, dword ptr [edi + 0x448] */ { u32 v = R32((u32)(r_edi+0x448u)); xmm[2].d[0] = v; xmm[2].d[1] = 0; xmm[2].d[2] = 0; xmm[2].d[3] = 0; }
    /* 0088b304: movss xmm0, xmm2 */ xmm[0].d[0] = xmm[2].d[0];
    /* 0088b308: cvtsi2ss xmm3, ebx */ xmm[3].fs[0] = (float)(i32)(r_ebx);
    /* 0088b30c: addss xmm0, xmm3 */ { XMM s = xmm[3]; xmm[0].fs[0] = xmm[0].fs[0] + s.fs[0]; }
    /* 0088b310: cvtsi2ss xmm4, ecx */ xmm[4].fs[0] = (float)(i32)(r_ecx);
    /* 0088b314: comiss xmm0, xmm4 */ { XMM s = xmm[4]; float a = xmm[0].fs[0]; float b = s.fs[0]; fO = 0; fS = 0; fA = 0; if (a != a || b != b) { fZ = 1; fP = 1; fC = 1; } else if (a > b) { fZ = 0; fP = 0; fC = 0; } else if (a < b) { fZ = 0; fP = 0; fC = 1; } else { fZ = 1; fP = 0; fC = 0; } }
    /* 0088b317: jb 0x88b46c */ if (fC) goto L_0088b46c;
L_0088b31d:; BB(0x0088b31d);
    /* 0088b31d: mov ecx, dword ptr [esp + 0x4c] */ r_ecx = R32((u32)(r_esp+0x4cu));
    /* 0088b321: subss xmm3, dword ptr [ecx + 0x44c] */ { XMM s; s.d[0] = R32((u32)(r_ecx+0x44cu)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[3].fs[0] = xmm[3].fs[0] - s.fs[0]; }
    /* 0088b329: comiss xmm3, xmm4 */ { XMM s = xmm[4]; float a = xmm[3].fs[0]; float b = s.fs[0]; fO = 0; fS = 0; fA = 0; if (a != a || b != b) { fZ = 1; fP = 1; fC = 1; } else if (a > b) { fZ = 0; fP = 0; fC = 0; } else if (a < b) { fZ = 0; fP = 0; fC = 1; } else { fZ = 1; fP = 0; fC = 0; } }
    /* 0088b32c: jbe 0x88b347 */ if ((fC||fZ)) goto L_0088b347;
L_0088b32e:; BB(0x0088b32e);
    /* 0088b32e: mov eax, 1 */ r_eax = 0x1u;
    /* 0088b333: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0088b336: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0088b337: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0088b338: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0088b339: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0088b33a: ret  */ FN_RET(0x0088b230); r_esp += 4; return;
L_0088b33b:; BB(0x0088b33b);
    /* 0088b33b: mov ecx, dword ptr [esp + 0x4c] */ r_ecx = R32((u32)(r_esp+0x4cu));
    /* 0088b33f: movss xmm2, dword ptr [ecx + 0x448] */ { u32 v = R32((u32)(r_ecx+0x448u)); xmm[2].d[0] = v; xmm[2].d[1] = 0; xmm[2].d[2] = 0; xmm[2].d[3] = 0; }
L_0088b347:; BB(0x0088b347);
    /* 0088b347: mov ecx, dword ptr [esp + 0x34] */ r_ecx = R32((u32)(r_esp+0x34u));
    /* 0088b34b: lea eax, [ecx + 1] */ r_eax = (u32)(r_ecx+0x1u);
    /* 0088b34e: mov edi, dword ptr [esp + 0x38] */ r_edi = R32((u32)(r_esp+0x38u));
    /* 0088b352: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0088b354: jge 0x88b420 */ if ((fS==fO)) goto L_0088b420;
L_0088b35a:; BB(0x0088b35a);
    /* 0088b35a: movss xmm0, dword ptr [0x99afc4] */ { u32 v = R32((u32)(0x99afc4u)); xmm[0].d[0] = v; xmm[0].d[1] = 0; xmm[0].d[2] = 0; xmm[0].d[3] = 0; }
    /* 0088b362: mov dword ptr [esp + 0x18], ebp */ W32((u32)(r_esp+0x18u), r_ebp);
    /* 0088b366: mov dword ptr [esp + 0x1c], esi */ W32((u32)(r_esp+0x1cu), r_esi);
    /* 0088b36a: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
L_0088b36e:; BB(0x0088b36e);
    /* 0088b36e: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 0088b372: lea ebp, [edi + esi] */ r_ebp = (u32)(r_edi+r_esi);
    /* 0088b375: mov esi, ebp */ r_esi = r_ebp;
    /* 0088b377: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0088b37b: sub esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0088b37d: mov edi, dword ptr [esp + 0x1c] */ r_edi = R32((u32)(r_esp+0x1cu));
    /* 0088b381: lea edi, [edi + ebx] */ r_edi = (u32)(r_edi+r_ebx);
    /* 0088b384: cmp ebp, ecx */ {  u32 a = r_ebp; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088b386: movss xmm3, dword ptr [0x99afc0] */ { u32 v = R32((u32)(0x99afc0u)); xmm[3].d[0] = v; xmm[3].d[1] = 0; xmm[3].d[2] = 0; xmm[3].d[3] = 0; }
    /* 0088b38e: cmovl esi, ebp */ if ((fS!=fO)) { r_esi = r_ebp; }
    /* 0088b391: add ebx, dword ptr [esp + 4] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esp+0x4u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0088b395: cmp ebp, ecx */ {  u32 a = r_ebp; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088b397: mov ecx, dword ptr [esp + 0x44] */ r_ecx = R32((u32)(r_esp+0x44u));
    /* 0088b39b: movss xmm5, dword ptr [ecx + eax*4] */ { u32 v = R32((u32)(r_ecx+r_eax*4)); xmm[5].d[0] = v; xmm[5].d[1] = 0; xmm[5].d[2] = 0; xmm[5].d[3] = 0; }
    /* 0088b3a0: cmovge ebx, edi */ if ((fS==fO)) { r_ebx = r_edi; }
    /* 0088b3a3: mulss xmm3, xmm5 */ { XMM s = xmm[5]; xmm[3].fs[0] = xmm[3].fs[0] * s.fs[0]; }
    /* 0088b3a7: addss xmm3, xmm0 */ { XMM s = xmm[0]; xmm[3].fs[0] = xmm[3].fs[0] + s.fs[0]; }
    /* 0088b3ab: cvttss2si ecx, xmm3 */ { XMM s = xmm[3]; double v = (double)s.fs[0]; double r = trunc(v); r_ecx = (r >= -2147483648.0 && r < 2147483648.0) ? (u32)(i32)r : 0x80000000u; }
    /* 0088b3af: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0088b3b1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0088b3b3: jg 0x88b3b7 */ if ((!fZ&&fS==fO)) goto L_0088b3b7;
L_0088b3b5:; BB(0x0088b3b5);
    /* 0088b3b5: mov ecx, ebp */ r_ecx = r_ebp;
L_0088b3b7:; BB(0x0088b3b7);
    /* 0088b3b7: mov ebp, 0x3ff */ r_ebp = 0x3ffu;
    /* 0088b3bc: cmp ecx, 0x3ff */ {  u32 a = r_ecx; u32 b = 0x3ffu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088b3c2: cmovge ecx, ebp */ if ((fS==fO)) { r_ecx = r_ebp; }
    /* 0088b3c5: mov ebp, ebx */ r_ebp = r_ebx;
    /* 0088b3c7: sub ebp, ecx */ {  u32 a = r_ebp; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 0088b3c9: imul ebp, ebp */ { i64 t = (i64)(i32)r_ebp * (i64)(i32)r_ebp; r_ebp = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0088b3cc: add edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_edx = r; fC = (r < a); }
    /* 0088b3ce: mov ebp, dword ptr [esp + 0x48] */ r_ebp = R32((u32)(r_esp+0x48u));
    /* 0088b3d2: inc dword ptr [esp + 8] */ { u32 ad = (u32)(r_esp+0x8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0088b3d6: movss xmm4, dword ptr [ebp + eax*4] */ { u32 v = R32((u32)(r_ebp+r_eax*4)); xmm[4].d[0] = v; xmm[4].d[1] = 0; xmm[4].d[2] = 0; xmm[4].d[3] = 0; }
    /* 0088b3dc: addss xmm4, xmm1 */ { XMM s = xmm[1]; xmm[4].fs[0] = xmm[4].fs[0] + s.fs[0]; }
    /* 0088b3e0: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0088b3e1: comiss xmm4, xmm5 */ { XMM s = xmm[5]; float a = xmm[4].fs[0]; float b = s.fs[0]; fO = 0; fS = 0; fA = 0; if (a != a || b != b) { fZ = 1; fP = 1; fC = 1; } else if (a > b) { fZ = 0; fP = 0; fC = 0; } else if (a < b) { fZ = 0; fP = 0; fC = 1; } else { fZ = 1; fP = 0; fC = 0; } }
    /* 0088b3e4: jb 0x88b414 */ if (fC) goto L_0088b414;
L_0088b3e6:; BB(0x0088b3e6);
    /* 0088b3e6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 0088b3e8: je 0x88b414 */ if (fZ) goto L_0088b414;
L_0088b3ea:; BB(0x0088b3ea);
    /* 0088b3ea: cvtsi2ss xmm3, ebx */ xmm[3].fs[0] = (float)(i32)(r_ebx);
    /* 0088b3ee: movss xmm4, xmm2 */ xmm[4].d[0] = xmm[2].d[0];
    /* 0088b3f2: addss xmm4, xmm3 */ { XMM s = xmm[3]; xmm[4].fs[0] = xmm[4].fs[0] + s.fs[0]; }
    /* 0088b3f6: cvtsi2ss xmm5, ecx */ xmm[5].fs[0] = (float)(i32)(r_ecx);
    /* 0088b3fa: comiss xmm4, xmm5 */ { XMM s = xmm[5]; float a = xmm[4].fs[0]; float b = s.fs[0]; fO = 0; fS = 0; fA = 0; if (a != a || b != b) { fZ = 1; fP = 1; fC = 1; } else if (a > b) { fZ = 0; fP = 0; fC = 0; } else if (a < b) { fZ = 0; fP = 0; fC = 1; } else { fZ = 1; fP = 0; fC = 0; } }
    /* 0088b3fd: jb 0x88b490 */ if (fC) goto L_0088b490;
L_0088b403:; BB(0x0088b403);
    /* 0088b403: mov ecx, dword ptr [esp + 0x4c] */ r_ecx = R32((u32)(r_esp+0x4cu));
    /* 0088b407: subss xmm3, dword ptr [ecx + 0x44c] */ { XMM s; s.d[0] = R32((u32)(r_ecx+0x44cu)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[3].fs[0] = xmm[3].fs[0] - s.fs[0]; }
    /* 0088b40f: comiss xmm3, xmm5 */ { XMM s = xmm[5]; float a = xmm[3].fs[0]; float b = s.fs[0]; fO = 0; fS = 0; fA = 0; if (a != a || b != b) { fZ = 1; fP = 1; fC = 1; } else if (a > b) { fZ = 0; fP = 0; fC = 0; } else if (a < b) { fZ = 0; fP = 0; fC = 1; } else { fZ = 1; fP = 0; fC = 0; } }
    /* 0088b412: ja 0x88b483 */ if ((!fC&&!fZ)) goto L_0088b483;
L_0088b414:; BB(0x0088b414);
    /* 0088b414: mov ecx, dword ptr [esp + 0x38] */ r_ecx = R32((u32)(r_esp+0x38u));
    /* 0088b418: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0088b41a: jl 0x88b36e */ if ((fS!=fO)) goto L_0088b36e;
L_0088b420:; BB(0x0088b420);
    /* 0088b420: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 0088b424: mov ebx, dword ptr [esp + 0x4c] */ r_ebx = R32((u32)(r_esp+0x4cu));
    /* 0088b428: movss xmm3, dword ptr [ebx + 0x450] */ { u32 v = R32((u32)(r_ebx+0x450u)); xmm[3].d[0] = v; xmm[3].d[1] = 0; xmm[3].d[2] = 0; xmm[3].d[3] = 0; }
    /* 0088b430: cvtsi2ss xmm1, ecx */ xmm[1].fs[0] = (float)(i32)(r_ecx);
    /* 0088b434: mulss xmm2, xmm2 */ { XMM s = xmm[2]; xmm[2].fs[0] = xmm[2].fs[0] * s.fs[0]; }
    /* 0088b438: divss xmm2, xmm1 */ { XMM s = xmm[1]; xmm[2].fs[0] = xmm[2].fs[0] / s.fs[0]; }
    /* 0088b43c: comiss xmm2, xmm3 */ { XMM s = xmm[3]; float a = xmm[2].fs[0]; float b = s.fs[0]; fO = 0; fS = 0; fA = 0; if (a != a || b != b) { fZ = 1; fP = 1; fC = 1; } else if (a > b) { fZ = 0; fP = 0; fC = 0; } else if (a < b) { fZ = 0; fP = 0; fC = 1; } else { fZ = 1; fP = 0; fC = 0; } }
    /* 0088b43f: ja 0x88b479 */ if ((!fC&&!fZ)) goto L_0088b479;
L_0088b441:; BB(0x0088b441);
    /* 0088b441: mov ecx, dword ptr [esp + 0x4c] */ r_ecx = R32((u32)(r_esp+0x4cu));
    /* 0088b445: movss xmm0, dword ptr [ecx + 0x44c] */ { u32 v = R32((u32)(r_ecx+0x44cu)); xmm[0].d[0] = v; xmm[0].d[1] = 0; xmm[0].d[2] = 0; xmm[0].d[3] = 0; }
    /* 0088b44d: mulss xmm0, xmm0 */ { XMM s = xmm[0]; xmm[0].fs[0] = xmm[0].fs[0] * s.fs[0]; }
    /* 0088b451: divss xmm0, xmm1 */ { XMM s = xmm[1]; xmm[0].fs[0] = xmm[0].fs[0] / s.fs[0]; }
    /* 0088b455: comiss xmm0, xmm3 */ { XMM s = xmm[3]; float a = xmm[0].fs[0]; float b = s.fs[0]; fO = 0; fS = 0; fA = 0; if (a != a || b != b) { fZ = 1; fP = 1; fC = 1; } else if (a > b) { fZ = 0; fP = 0; fC = 0; } else if (a < b) { fZ = 0; fP = 0; fC = 1; } else { fZ = 1; fP = 0; fC = 0; } }
    /* 0088b458: ja 0x88b479 */ if ((!fC&&!fZ)) goto L_0088b479;
L_0088b45a:; BB(0x0088b45a);
    /* 0088b45a: mov eax, edx */ r_eax = r_edx;
    /* 0088b45c: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 0088b460: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0088b461: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0088b461, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0088b461, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0088b463: cvtsi2ss xmm0, eax */ xmm[0].fs[0] = (float)(i32)(r_eax);
    /* 0088b467: comiss xmm0, xmm3 */ { XMM s = xmm[3]; float a = xmm[0].fs[0]; float b = s.fs[0]; fO = 0; fS = 0; fA = 0; if (a != a || b != b) { fZ = 1; fP = 1; fC = 1; } else if (a > b) { fZ = 0; fP = 0; fC = 0; } else if (a < b) { fZ = 0; fP = 0; fC = 1; } else { fZ = 1; fP = 0; fC = 0; } }
    /* 0088b46a: jbe 0x88b479 */ if ((fC||fZ)) goto L_0088b479;
L_0088b46c:; BB(0x0088b46c);
    /* 0088b46c: mov eax, 1 */ r_eax = 0x1u;
    /* 0088b471: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0088b474: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0088b475: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0088b476: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0088b477: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0088b478: ret  */ FN_RET(0x0088b230); r_esp += 4; return;
L_0088b479:; BB(0x0088b479);
    /* 0088b479: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0088b47b: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0088b47e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0088b47f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0088b480: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0088b481: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0088b482: ret  */ FN_RET(0x0088b230); r_esp += 4; return;
L_0088b483:; BB(0x0088b483);
    /* 0088b483: mov eax, 1 */ r_eax = 0x1u;
    /* 0088b488: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0088b48b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0088b48c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0088b48d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0088b48e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0088b48f: ret  */ FN_RET(0x0088b230); r_esp += 4; return;
L_0088b490:; BB(0x0088b490);
    /* 0088b490: mov eax, 1 */ r_eax = 0x1u;
    /* 0088b495: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0088b498: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0088b499: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0088b49a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0088b49b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0088b49c: ret  */ FN_RET(0x0088b230); r_esp += 4; return;
L_0088b4a0:; BB(0x0088b4a0);
    /* 0088b4a0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0088b4a1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0088b4a2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0088b4a3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0088b4a4: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0088b4a7: mov esi, dword ptr [esp + 0x5c] */ r_esi = R32((u32)(r_esp+0x5cu));
    /* 0088b4ab: mov ebp, dword ptr [esp + 0x60] */ r_ebp = R32((u32)(r_esp+0x60u));
    /* 0088b4af: mov ecx, dword ptr [esp + 0x64] */ r_ecx = R32((u32)(r_esp+0x64u));
    /* 0088b4b3: sub ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0088b4b5: sub esi, dword ptr [esp + 0x58] */ {  u32 a = r_esi; u32 b = R32((u32)(r_esp+0x58u)); u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0088b4b9: mov dword ptr [esp + 0x38], esi */ W32((u32)(r_esp+0x38u), r_esi);
    /* 0088b4bd: mov eax, ecx */ r_eax = r_ecx;
    /* 0088b4bf: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0088b4c0: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0088b4c2: xor ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0088b4c4: sub ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0088b4c6: mov eax, ecx */ r_eax = r_ecx;
    /* 0088b4c8: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0088b4c9: idiv esi */ { i32 d = (i32)r_esi; if (!d) UNSUP(0x0088b4c9, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0088b4c9, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0088b4cb: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 0088b4cf: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0088b4d1: jl 0x88b700 */ if ((fS!=fO)) goto L_0088b700;
L_0088b4d7:; BB(0x0088b4d7);
    /* 0088b4d7: lea edx, [eax + 1] */ r_edx = (u32)(r_eax+0x1u);
    /* 0088b4da: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
L_0088b4de:; BB(0x0088b4de);
    /* 0088b4de: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0088b4e0: mov dword ptr [esp + 0x3c], edx */ W32((u32)(r_esp+0x3cu), r_edx);
    /* 0088b4e4: mov ecx, dword ptr [esp + 0x58] */ r_ecx = R32((u32)(r_esp+0x58u));
    /* 0088b4e8: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 0088b4eb: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0088b4ed: add eax, dword ptr [esp + 0x68] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x68u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0088b4f1: call 0x88a0fc */ r_esp -= 4; W32(r_esp, 0x88b4f6u); f_0088a0fc();
    /* 0088b4f6: mov edi, eax */ r_edi = r_eax;
    /* 0088b4f8: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 0088b4fc: imul eax, dword ptr [esp + 0x38] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_esp+0x38u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0088b501: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0088b502: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0088b504: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0088b506: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0088b508: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0088b50a: sub ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0088b50c: imul ecx, ecx */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_ecx; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0088b50f: mov edx, 1 */ r_edx = 0x1u;
    /* 0088b514: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 0088b518: mov edx, dword ptr [esp + 0x70] */ r_edx = R32((u32)(r_esp+0x70u));
    /* 0088b51c: fld dword ptr [edx + 0x458] */ FPUSH(R_F32((u32)(r_edx+0x458u)));
    /* 0088b522: mov edx, dword ptr [esp + 0x6c] */ r_edx = R32((u32)(r_esp+0x6cu));
    /* 0088b526: mov esi, dword ptr [esp + 0x58] */ r_esi = R32((u32)(r_esp+0x58u));
    /* 0088b52a: fld dword ptr [edx + esi*4] */ FPUSH(R_F32((u32)(r_edx+r_esi*4)));
    /* 0088b52d: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0088b52f: mov edx, dword ptr [esp + 0x68] */ r_edx = R32((u32)(r_esp+0x68u));
    /* 0088b533: fcomp dword ptr [edx + esi*4] */ fx_compare(ST(0), R_F32((u32)(r_edx+r_esi*4))); FPOP();
    /* 0088b536: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0088b538: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0088b539: jb 0x88b588 */ if (fC) goto L_0088b588;
L_0088b53b:; BB(0x0088b53b);
    /* 0088b53b: mov edx, dword ptr [esp + 0x70] */ r_edx = R32((u32)(r_esp+0x70u));
    /* 0088b53f: fld dword ptr [edx + 0x448] */ FPUSH(R_F32((u32)(r_edx+0x448u)));
    /* 0088b545: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 0088b549: fild dword ptr [esp + 4] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x4u)));
    /* 0088b54d: mov dword ptr [esp + 0xc], edi */ W32((u32)(r_esp+0xcu), r_edi);
    /* 0088b551: fild dword ptr [esp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xcu)));
    /* 0088b555: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 0088b557: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0088b559: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 0088b55b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0088b55d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0088b55e: jb 0x88b6d6 */ if (fC) goto L_0088b6d6;
L_0088b564:; BB(0x0088b564);
    /* 0088b564: mov edx, dword ptr [esp + 0x70] */ r_edx = R32((u32)(r_esp+0x70u));
    /* 0088b568: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0088b56a: fsub dword ptr [edx + 0x44c] */ ST(0) = ST(0) - R_F32((u32)(r_edx+0x44cu));
    /* 0088b570: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0088b572: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0088b574: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0088b575: jbe 0x88b592 */ if ((fC||fZ)) goto L_0088b592;
L_0088b577:; BB(0x0088b577);
    /* 0088b577: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0088b579: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0088b57b: mov eax, 1 */ r_eax = 0x1u;
    /* 0088b580: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0088b583: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0088b584: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0088b585: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0088b586: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0088b587: ret  */ FN_RET(0x0088b230); r_esp += 4; return;
L_0088b588:; BB(0x0088b588);
    /* 0088b588: mov edx, dword ptr [esp + 0x70] */ r_edx = R32((u32)(r_esp+0x70u));
    /* 0088b58c: fld dword ptr [edx + 0x448] */ FPUSH(R_F32((u32)(r_edx+0x448u)));
L_0088b592:; BB(0x0088b592);
    /* 0088b592: mov edx, dword ptr [esp + 0x58] */ r_edx = R32((u32)(r_esp+0x58u));
    /* 0088b596: lea edx, [edx + 1] */ r_edx = (u32)(r_edx+0x1u);
    /* 0088b599: mov esi, dword ptr [esp + 0x5c] */ r_esi = R32((u32)(r_esp+0x5cu));
    /* 0088b59d: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088b59f: jge 0x88b736 */ if ((fS==fO)) goto L_0088b736;
L_0088b5a5:; BB(0x0088b5a5);
    /* 0088b5a5: fld dword ptr [0x99afbc] */ FPUSH(R_F32((u32)(0x99afbcu)));
    /* 0088b5ab: mov dword ptr [esp + 0x40], ebx */ W32((u32)(r_esp+0x40u), r_ebx);
    /* 0088b5af: mov edi, dword ptr [esp + 0x3c] */ r_edi = R32((u32)(r_esp+0x3cu));
L_0088b5b3:; BB(0x0088b5b3);
    /* 0088b5b3: add edi, dword ptr [esp + 0x40] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+0x40u)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0088b5b7: mov ebx, dword ptr [esp + 0x38] */ r_ebx = R32((u32)(r_esp+0x38u));
    /* 0088b5bb: cmp edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088b5bd: jl 0x88b5c9 */ if ((fS!=fO)) goto L_0088b5c9;
L_0088b5bf:; BB(0x0088b5bf);
    /* 0088b5bf: sub edi, dword ptr [esp + 0x38] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+0x38u)); u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0088b5c3: add ebp, dword ptr [esp + 0x2c] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0x2cu)); u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0088b5c7: jmp 0x88b5cd */ goto L_0088b5cd;
L_0088b5c9:; BB(0x0088b5c9);
    /* 0088b5c9: add ebp, dword ptr [esp + 0x34] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0x34u)); u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
L_0088b5cd:; BB(0x0088b5cd);
    /* 0088b5cd: lea esi, [edx + edx] */ r_esi = (u32)(r_edx+r_edx);
    /* 0088b5d0: mov ebx, dword ptr [esp + 0x68] */ r_ebx = R32((u32)(r_esp+0x68u));
    /* 0088b5d4: fld dword ptr [ebx + edx*4] */ FPUSH(R_F32((u32)(r_ebx+r_edx*4)));
    /* 0088b5d7: fld dword ptr [0x99afb8] */ FPUSH(R_F32((u32)(0x99afb8u)));
    /* 0088b5dd: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0088b5df: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0088b5e1: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 0088b5e5: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 0088b5ea: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0088b5ef: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 0088b5f3: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 0088b5f7: fistp dword ptr [esp + 0x24] */ W32((u32)(r_esp+0x24u), (u32)fx_int32(ST(0))); FPOP();
    /* 0088b5fb: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 0088b5ff: mov ebx, dword ptr [esp + 0x24] */ r_ebx = R32((u32)(r_esp+0x24u));
    /* 0088b603: cmp ebx, 0x3ff */ {  u32 a = r_ebx; u32 b = 0x3ffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088b609: jg 0x88b615 */ if ((!fZ&&fS==fO)) goto L_0088b615;
L_0088b60b:; BB(0x0088b60b);
    /* 0088b60b: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0088b60d: jl 0x88b6f9 */ if ((fS!=fO)) goto L_0088b6f9;
L_0088b613:; BB(0x0088b613);
    /* 0088b613: jmp 0x88b61a */ goto L_0088b61a;
L_0088b615:; BB(0x0088b615);
    /* 0088b615: mov ebx, 0x3ff */ r_ebx = 0x3ffu;
L_0088b61a:; BB(0x0088b61a);
    /* 0088b61a: mov eax, ebp */ r_eax = r_ebp;
    /* 0088b61c: sub eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0088b61e: imul eax, eax */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_eax; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0088b621: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0088b623: inc dword ptr [esp + 0x30] */ { u32 ad = (u32)(r_esp+0x30u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0088b627: mov eax, dword ptr [esp + 0x6c] */ r_eax = R32((u32)(r_esp+0x6cu));
    /* 0088b62b: fld dword ptr [eax + esi*2] */ FPUSH(R_F32((u32)(r_eax+r_esi*2)));
    /* 0088b62e: fadd st(4) */ ST(0) = ST(0) + ST(4);
    /* 0088b630: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0088b632: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0088b634: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0088b635: jb 0x88b671 */ if (fC) goto L_0088b671;
L_0088b637:; BB(0x0088b637);
    /* 0088b637: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088b639: je 0x88b671 */ if (fZ) goto L_0088b671;
L_0088b63b:; BB(0x0088b63b);
    /* 0088b63b: mov dword ptr [esp + 0xc], ebp */ W32((u32)(r_esp+0xcu), r_ebp);
    /* 0088b63f: fild dword ptr [esp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xcu)));
    /* 0088b643: mov dword ptr [esp + 0xc], ebx */ W32((u32)(r_esp+0xcu), r_ebx);
    /* 0088b647: fild dword ptr [esp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xcu)));
    /* 0088b64b: fld st(3) */ { long double v = ST(3); FPUSH(v); }
    /* 0088b64d: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0088b64f: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 0088b651: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0088b653: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0088b654: jb 0x88b70c */ if (fC) goto L_0088b70c;
L_0088b65a:; BB(0x0088b65a);
    /* 0088b65a: mov ebx, dword ptr [esp + 0x70] */ r_ebx = R32((u32)(r_esp+0x70u));
    /* 0088b65e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0088b660: fsub dword ptr [ebx + 0x44c] */ ST(0) = ST(0) - R_F32((u32)(r_ebx+0x44cu));
    /* 0088b666: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0088b668: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0088b66a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0088b66b: ja 0x88b723 */ if ((!fC&&!fZ)) goto L_0088b723;
L_0088b671:; BB(0x0088b671);
    /* 0088b671: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088b672: mov ebx, dword ptr [esp + 0x5c] */ r_ebx = R32((u32)(r_esp+0x5cu));
    /* 0088b676: cmp edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088b678: jl 0x88b5b3 */ if ((fS!=fO)) goto L_0088b5b3;
L_0088b67e:; BB(0x0088b67e);
    /* 0088b67e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0088b680: fstp st(1) */ ST(1) = ST(0); FPOP();
L_0088b682:; BB(0x0088b682);
    /* 0088b682: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 0088b686: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 0088b68a: fild dword ptr [esp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xcu)));
    /* 0088b68e: mov ebx, dword ptr [esp + 0x70] */ r_ebx = R32((u32)(r_esp+0x70u));
    /* 0088b692: fld dword ptr [ebx + 0x450] */ FPUSH(R_F32((u32)(r_ebx+0x450u)));
    /* 0088b698: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0088b69a: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0088b69c: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 0088b69e: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 0088b6a0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0088b6a2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0088b6a3: ja 0x88b6eb */ if ((!fC&&!fZ)) goto L_0088b6eb;
L_0088b6a5:; BB(0x0088b6a5);
    /* 0088b6a5: mov edx, dword ptr [esp + 0x70] */ r_edx = R32((u32)(r_esp+0x70u));
    /* 0088b6a9: fld dword ptr [edx + 0x44c] */ FPUSH(R_F32((u32)(r_edx+0x44cu)));
    /* 0088b6af: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0088b6b1: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 0088b6b3: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 0088b6b5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0088b6b7: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0088b6b8: ja 0x88b6eb */ if ((!fC&&!fZ)) goto L_0088b6eb;
L_0088b6ba:; BB(0x0088b6ba);
    /* 0088b6ba: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0088b6bc: mov eax, ecx */ r_eax = r_ecx;
    /* 0088b6be: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0088b6bf: mov ebx, dword ptr [esp + 0x30] */ r_ebx = R32((u32)(r_esp+0x30u));
    /* 0088b6c3: idiv ebx */ { i32 d = (i32)r_ebx; if (!d) UNSUP(0x0088b6c3, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0088b6c3, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0088b6c5: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0088b6c9: fild dword ptr [esp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xcu)));
    /* 0088b6cd: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0088b6cf: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0088b6d1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0088b6d2: ja 0x88b6da */ if ((!fC&&!fZ)) goto L_0088b6da;
L_0088b6d4:; BB(0x0088b6d4);
    /* 0088b6d4: jmp 0x88b6eb */ goto L_0088b6eb;
L_0088b6d6:; BB(0x0088b6d6);
    /* 0088b6d6: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 0088b6d8: fstp st(1) */ ST(1) = ST(0); FPOP();
L_0088b6da:; BB(0x0088b6da);
    /* 0088b6da: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0088b6dc: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0088b6de: mov eax, 1 */ r_eax = 0x1u;
    /* 0088b6e3: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0088b6e6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0088b6e7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0088b6e8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0088b6e9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0088b6ea: ret  */ FN_RET(0x0088b230); r_esp += 4; return;
L_0088b6eb:; BB(0x0088b6eb);
    /* 0088b6eb: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0088b6ed: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0088b6ef: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0088b6f1: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0088b6f4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0088b6f5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0088b6f6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0088b6f7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0088b6f8: ret  */ FN_RET(0x0088b230); r_esp += 4; return;
L_0088b6f9:; BB(0x0088b6f9);
    /* 0088b6f9: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0088b6fb: jmp 0x88b61a */ goto L_0088b61a;
L_0088b700:; BB(0x0088b700);
    /* 0088b700: lea edx, [eax - 1] */ r_edx = (u32)(r_eax+0xffffffffu);
    /* 0088b703: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 0088b707: jmp 0x88b4de */ goto L_0088b4de;
L_0088b70c:; BB(0x0088b70c);
    /* 0088b70c: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0088b70e: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0088b710: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 0088b712: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0088b714: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0088b716: mov eax, 1 */ r_eax = 0x1u;
    /* 0088b71b: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0088b71e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0088b71f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0088b720: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0088b721: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0088b722: ret  */ FN_RET(0x0088b230); r_esp += 4; return;
L_0088b723:; BB(0x0088b723);
    /* 0088b723: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0088b725: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0088b727: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0088b729: mov eax, 1 */ r_eax = 0x1u;
    /* 0088b72e: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0088b731: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0088b732: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0088b733: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0088b734: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0088b735: ret  */ FN_RET(0x0088b230); r_esp += 4; return;
L_0088b736:; BB(0x0088b736);
    /* 0088b736: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0088b738: jmp 0x88b682 */ goto L_0088b682;
}

void f_0088b740(void) /* sub_88B740 */
{
    FN_ENTER(0x0088b740);
    /* 0088b740: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0088b741: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0088b742: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 0088b746: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0088b748: je 0x88b7cb */ if (fZ) goto L_0088b7cb;
L_0088b74e:; BB(0x0088b74e);
    /* 0088b74e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0088b750: mov edx, dword ptr [ebx + 4] */ r_edx = R32((u32)(r_ebx+0x4u));
    /* 0088b753: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0088b755: jle 0x88b7ce */ if ((fZ||fS!=fO)) goto L_0088b7ce;
L_0088b757:; BB(0x0088b757);
    /* 0088b757: mov eax, dword ptr [ebx + 0x14] */ r_eax = R32((u32)(r_ebx+0x14u));
    /* 0088b75a: mov esi, ecx */ r_esi = r_ecx;
L_0088b75c:; BB(0x0088b75c);
    /* 0088b75c: mov ecx, dword ptr [eax + esi*4] */ r_ecx = R32((u32)(r_eax+r_esi*4));
    /* 0088b75f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088b761: je 0x88b770 */ if (fZ) goto L_0088b770;
L_0088b763:; BB(0x0088b763);
    /* 0088b763: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0088b764: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x88b769u); f_00858882();
    /* 0088b769: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0088b76a: mov edx, dword ptr [ebx + 4] */ r_edx = R32((u32)(r_ebx+0x4u));
    /* 0088b76d: mov eax, dword ptr [ebx + 0x14] */ r_eax = R32((u32)(r_ebx+0x14u));
L_0088b770:; BB(0x0088b770);
    /* 0088b770: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0088b771: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088b773: jl 0x88b75c */ if ((fS!=fO)) goto L_0088b75c;
L_0088b775:; BB(0x0088b775);
    /* 0088b775: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0088b776: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x88b77bu); f_00858882();
    /* 0088b77b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0088b77c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0088b77e: cmp dword ptr [ebx + 0x18], 0 */ {  u32 a = R32((u32)(r_ebx+0x18u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088b782: jle 0x88b798 */ if ((fZ||fS!=fO)) goto L_0088b798;
L_0088b784:; BB(0x0088b784);
    /* 0088b784: mov esi, eax */ r_esi = r_eax;
L_0088b786:; BB(0x0088b786);
    /* 0088b786: mov edx, dword ptr [ebx + 0x1c] */ r_edx = R32((u32)(r_ebx+0x1cu));
    /* 0088b789: push dword ptr [edx + esi*4] */ { u32 v = R32((u32)(r_edx+r_esi*4)); r_esp -= 4; W32(r_esp, v); }
    /* 0088b78c: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x88b791u); f_00858882();
    /* 0088b791: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0088b792: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0088b793: cmp esi, dword ptr [ebx + 0x18] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebx+0x18u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088b796: jl 0x88b786 */ if ((fS!=fO)) goto L_0088b786;
L_0088b798:; BB(0x0088b798);
    /* 0088b798: push dword ptr [ebx + 0x1c] */ { u32 v = R32((u32)(r_ebx+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0088b79b: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x88b7a0u); f_00858882();
    /* 0088b7a0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0088b7a2: mov dword ptr [ebx], eax */ W32((u32)(r_ebx), r_eax);
    /* 0088b7a4: mov dword ptr [ebx + 4], eax */ W32((u32)(r_ebx+0x4u), r_eax);
    /* 0088b7a7: mov dword ptr [ebx + 8], eax */ W32((u32)(r_ebx+0x8u), r_eax);
    /* 0088b7aa: mov dword ptr [ebx + 0xc], eax */ W32((u32)(r_ebx+0xcu), r_eax);
    /* 0088b7ad: mov dword ptr [ebx + 0x10], eax */ W32((u32)(r_ebx+0x10u), r_eax);
    /* 0088b7b0: mov dword ptr [ebx + 0x14], eax */ W32((u32)(r_ebx+0x14u), r_eax);
    /* 0088b7b3: mov dword ptr [ebx + 0x18], eax */ W32((u32)(r_ebx+0x18u), r_eax);
    /* 0088b7b6: mov dword ptr [ebx + 0x1c], eax */ W32((u32)(r_ebx+0x1cu), r_eax);
    /* 0088b7b9: mov dword ptr [ebx + 0x20], eax */ W32((u32)(r_ebx+0x20u), r_eax);
    /* 0088b7bc: mov dword ptr [ebx + 0x24], eax */ W32((u32)(r_ebx+0x24u), r_eax);
    /* 0088b7bf: mov dword ptr [ebx + 0x28], eax */ W32((u32)(r_ebx+0x28u), r_eax);
    /* 0088b7c2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0088b7c3: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x88b7c8u); f_00858882();
    /* 0088b7c8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_0088b7cb:; BB(0x0088b7cb);
    /* 0088b7cb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0088b7cc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0088b7cd: ret  */ FN_RET(0x0088b740); r_esp += 4; return;
L_0088b7ce:; BB(0x0088b7ce);
    /* 0088b7ce: mov eax, dword ptr [ebx + 0x14] */ r_eax = R32((u32)(r_ebx+0x14u));
    /* 0088b7d1: jmp 0x88b775 */ goto L_0088b775;
}

void f_0088b7d4(void) /* sub_88B7D4 */
{
    FN_ENTER(0x0088b7d4);
    /* 0088b7d4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0088b7d5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0088b7d6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0088b7d7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0088b7d8: mov edi, dword ptr [esp + 0x14] */ r_edi = R32((u32)(r_esp+0x14u));
    /* 0088b7dc: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 0088b7e0: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0088b7e2: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 0088b7e4: push dword ptr [edi] */ { u32 v = R32((u32)(r_edi)); r_esp -= 4; W32(r_esp, v); }
    /* 0088b7e6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0088b7e7: call 0x8779d8 */ r_esp -= 4; W32(r_esp, 0x88b7ecu); f_008779d8();
    /* 0088b7ec: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 0088b7ee: push dword ptr [edi + 4] */ { u32 v = R32((u32)(r_edi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0088b7f1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0088b7f2: call 0x8779d8 */ r_esp -= 4; W32(r_esp, 0x88b7f7u); f_008779d8();
    /* 0088b7f7: mov eax, dword ptr [edi + 8] */ r_eax = R32((u32)(r_edi+0x8u));
    /* 0088b7fa: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0088b7fb: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 0088b7fd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0088b7fe: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0088b7ff: call 0x8779d8 */ r_esp -= 4; W32(r_esp, 0x88b804u); f_008779d8();
    /* 0088b804: mov eax, dword ptr [edi + 0xc] */ r_eax = R32((u32)(r_edi+0xcu));
    /* 0088b807: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0088b808: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0088b80a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0088b80b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0088b80c: call 0x8779d8 */ r_esp -= 4; W32(r_esp, 0x88b811u); f_008779d8();
    /* 0088b811: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0088b813: push dword ptr [edi + 0x10] */ { u32 v = R32((u32)(r_edi+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0088b816: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0088b817: call 0x8779d8 */ r_esp -= 4; W32(r_esp, 0x88b81cu); f_008779d8();
    /* 0088b81c: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0088b81f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0088b821: cmp dword ptr [edi + 0xc], 0 */ {  u32 a = R32((u32)(r_edi+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088b825: jle 0x88b897 */ if ((fZ||fS!=fO)) goto L_0088b897;
L_0088b827:; BB(0x0088b827);
    /* 0088b827: mov ebx, eax */ r_ebx = r_eax;
L_0088b829:; BB(0x0088b829);
    /* 0088b829: mov eax, dword ptr [edi + ebx*4 + 0x14] */ r_eax = R32((u32)(r_edi+r_ebx*4+0x14u));
    /* 0088b82d: mov ecx, eax */ r_ecx = r_eax;
    /* 0088b82f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0088b831: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088b833: je 0x88b86c */ if (fZ) goto L_0088b86c;
L_0088b835:; BB(0x0088b835);
    /* 0088b835: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088b836: shr ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0088b838: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088b83a: jne 0x88b835 */ if (!fZ) goto L_0088b835;
L_0088b83c:; BB(0x0088b83c);
    /* 0088b83c: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088b83f: jle 0x88b86c */ if ((fZ||fS!=fO)) goto L_0088b86c;
L_0088b841:; BB(0x0088b841);
    /* 0088b841: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0088b843: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0088b844: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0088b845: call 0x8779d8 */ r_esp -= 4; W32(r_esp, 0x88b84au); f_008779d8();
    /* 0088b84a: mov edx, 1 */ r_edx = 0x1u;
    /* 0088b84f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0088b850: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0088b851: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0088b852: call 0x8779d8 */ r_esp -= 4; W32(r_esp, 0x88b857u); f_008779d8();
    /* 0088b857: mov edx, dword ptr [edi + ebx*4 + 0x14] */ r_edx = R32((u32)(r_edi+r_ebx*4+0x14u));
    /* 0088b85b: sar edx, 3 */ { u32 c = (3u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0088b85e: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0088b860: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0088b861: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0088b862: call 0x8779d8 */ r_esp -= 4; W32(r_esp, 0x88b867u); f_008779d8();
    /* 0088b867: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0088b86a: jmp 0x88b878 */ goto L_0088b878;
L_0088b86c:; BB(0x0088b86c);
    /* 0088b86c: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0088b86e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0088b86f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0088b870: call 0x8779d8 */ r_esp -= 4; W32(r_esp, 0x88b875u); f_008779d8();
    /* 0088b875: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0088b878:; BB(0x0088b878);
    /* 0088b878: mov edx, dword ptr [edi + ebx*4 + 0x14] */ r_edx = R32((u32)(r_edi+r_ebx*4+0x14u));
    /* 0088b87c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0088b87e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088b880: je 0x88b88f */ if (fZ) goto L_0088b88f;
L_0088b882:; BB(0x0088b882);
    /* 0088b882: mov eax, edx */ r_eax = r_edx;
    /* 0088b884: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0088b887: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0088b889: shr edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0088b88b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088b88d: jne 0x88b882 */ if (!fZ) goto L_0088b882;
L_0088b88f:; BB(0x0088b88f);
    /* 0088b88f: add ebp, ecx */ {  u32 a = r_ebp; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0088b891: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0088b892: cmp ebx, dword ptr [edi + 0xc] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edi+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088b895: jl 0x88b829 */ if ((fS!=fO)) goto L_0088b829;
L_0088b897:; BB(0x0088b897);
    /* 0088b897: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0088b899: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0088b89b: jle 0x88b8b6 */ if ((fZ||fS!=fO)) goto L_0088b8b6;
L_0088b89d:; BB(0x0088b89d);
    /* 0088b89d: mov ebx, eax */ r_ebx = r_eax;
L_0088b89f:; BB(0x0088b89f);
    /* 0088b89f: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0088b8a1: push dword ptr [edi + ebx*4 + 0x114] */ { u32 v = R32((u32)(r_edi+r_ebx*4+0x114u)); r_esp -= 4; W32(r_esp, v); }
    /* 0088b8a8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0088b8a9: call 0x8779d8 */ r_esp -= 4; W32(r_esp, 0x88b8aeu); f_008779d8();
    /* 0088b8ae: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0088b8b1: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0088b8b2: cmp ebx, ebp */ {  u32 a = r_ebx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0088b8b4: jl 0x88b89f */ if ((fS!=fO)) goto L_0088b89f;
L_0088b8b6:; BB(0x0088b8b6);
    /* 0088b8b6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0088b8b7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0088b8b8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0088b8b9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0088b8ba: ret  */ FN_RET(0x0088b7d4); r_esp += 4; return;
}

void f_0088b8bc(void) /* sub_88B8BC */
{
    FN_ENTER(0x0088b8bc);
    /* 0088b8bc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0088b8bd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0088b8be: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0088b8bf: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0088b8c0: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0088b8c3: mov esi, dword ptr [esp + 0x24] */ r_esi = R32((u32)(r_esp+0x24u));
    /* 0088b8c7: mov ebp, dword ptr [esp + 0x28] */ r_ebp = R32((u32)(r_esp+0x28u));
    /* 0088b8cb: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0088b8cd: push 0x714 */ { u32 v = 0x714u; r_esp -= 4; W32(r_esp, v); }
    /* 0088b8d2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0088b8d4: call 0x8587c7 */ r_esp -= 4; W32(r_esp, 0x88b8d9u); f_008587c7();
    /* 0088b8d9: mov edi, eax */ r_edi = r_eax;
    /* 0088b8db: mov esi, dword ptr [esi + 0x1c] */ r_esi = R32((u32)(r_esi+0x1cu));
    /* 0088b8de: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 0088b8e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0088b8e1: call 0x877c98 */ r_esp -= 4; W32(r_esp, 0x88b8e6u); f_00877c98();
    /* 0088b8e6: mov dword ptr [edi], eax */ W32((u32)(r_edi), r_eax);
    /* 0088b8e8: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 0088b8ea: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0088b8eb: call 0x877c98 */ r_esp -= 4; W32(r_esp, 0x88b8f0u); f_00877c98();
    /* 0088b8f0: mov dword ptr [edi + 4], eax */ W32((u32)(r_edi+0x4u), r_eax);
    /* 0088b8f3: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 0088b8f5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0088b8f6: call 0x877c98 */ r_esp -= 4; W32(r_esp, 0x88b8fbu); f_00877c98();
    /* 0088b8fb: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0088b8fc: mov dword ptr [edi + 8], eax */ W32((u32)(r_edi+0x8u), r_eax);
    /* 0088b8ff: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0088b901: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0088b902: call 0x877c98 */ r_esp -= 4; W32(r_esp, 0x88b907u); f_00877c98();
    /* 0088b907: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0088b908: mov dword ptr [edi + 0xc], eax */ W32((u32)(r_edi+0xcu), r_eax);
    /* 0088b90b: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0088b90d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0088b90e: call 0x877c98 */ r_esp -= 4; W32(r_esp, 0x88b913u); f_00877c98();
    /* 0088b913: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0088b916: mov dword ptr [edi + 0x10], eax */ W32((u32)(r_edi+0x10u), r_eax);
    /* 0088b919: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0088b91b: cmp dword ptr [edi + 0xc], 0 */ {  u32 a = R32((u32)(r_edi+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088b91f: jle 0x88b987 */ if ((fZ||fS!=fO)) goto L_0088b987;
L_0088b921:; BB(0x0088b921);
    /* 0088b921: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 0088b925: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 0088b929: mov edi, eax */ r_edi = r_eax;
L_0088b92b:; BB(0x0088b92b);
    /* 0088b92b: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0088b92d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0088b92e: call 0x877c98 */ r_esp -= 4; W32(r_esp, 0x88b933u); f_00877c98();
    /* 0088b933: mov esi, eax */ r_esi = r_eax;
    /* 0088b935: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0088b937: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0088b938: call 0x877c98 */ r_esp -= 4; W32(r_esp, 0x88b93du); f_00877c98();
    /* 0088b93d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0088b940: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088b942: je 0x88b957 */ if (fZ) goto L_0088b957;
L_0088b944:; BB(0x0088b944);
    /* 0088b944: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0088b946: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0088b947: call 0x877c98 */ r_esp -= 4; W32(r_esp, 0x88b94cu); f_00877c98();
    /* 0088b94c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0088b94f: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0088b951: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0088b953: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0088b955: or esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
L_0088b957:; BB(0x0088b957);
    /* 0088b957: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 0088b95b: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088b95d: mov dword ptr [edx + edi*4 + 0x14], esi */ W32((u32)(r_edx+r_edi*4+0x14u), r_esi);
    /* 0088b961: mov edx, 0 */ r_edx = 0x0u;
    /* 0088b966: je 0x88b975 */ if (fZ) goto L_0088b975;
L_0088b968:; BB(0x0088b968);
    /* 0088b968: mov ecx, esi */ r_ecx = r_esi;
    /* 0088b96a: and ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0088b96d: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088b96f: shr esi, 1 */ { u32 c = (1u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 0088b971: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088b973: jne 0x88b968 */ if (!fZ) goto L_0088b968;
L_0088b975:; BB(0x0088b975);
    /* 0088b975: add ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0088b977: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0088b978: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 0088b97c: cmp edi, dword ptr [edx + 0xc] */ {  u32 a = r_edi; u32 b = R32((u32)(r_edx+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088b97f: jl 0x88b92b */ if ((fS!=fO)) goto L_0088b92b;
L_0088b981:; BB(0x0088b981);
    /* 0088b981: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 0088b985: mov edi, edx */ r_edi = r_edx;
L_0088b987:; BB(0x0088b987);
    /* 0088b987: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0088b989: jle 0x88b9c0 */ if ((fZ||fS!=fO)) goto L_0088b9c0;
L_0088b98b:; BB(0x0088b98b);
    /* 0088b98b: lea edx, [edi + 0x114] */ r_edx = (u32)(r_edi+0x114u);
    /* 0088b991: lea eax, [edi + ebx*4 + 0x114] */ r_eax = (u32)(r_edi+r_ebx*4+0x114u);
    /* 0088b998: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 0088b99c: mov edi, eax */ r_edi = r_eax;
    /* 0088b99e: mov dword ptr [esp + 0xc], ebx */ W32((u32)(r_esp+0xcu), r_ebx);
    /* 0088b9a2: mov ebx, edx */ r_ebx = r_edx;
L_0088b9a4:; BB(0x0088b9a4);
    /* 0088b9a4: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0088b9a6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0088b9a7: call 0x877c98 */ r_esp -= 4; W32(r_esp, 0x88b9acu); f_00877c98();
    /* 0088b9ac: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0088b9af: mov dword ptr [ebx], eax */ W32((u32)(r_ebx), r_eax);
    /* 0088b9b1: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0088b9b4: cmp ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0088b9b6: jb 0x88b9a4 */ if (fC) goto L_0088b9a4;
L_0088b9b8:; BB(0x0088b9b8);
    /* 0088b9b8: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 0088b9bc: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
L_0088b9c0:; BB(0x0088b9c0);
    /* 0088b9c0: mov ecx, dword ptr [esi + 0x18] */ r_ecx = R32((u32)(r_esi+0x18u));
    /* 0088b9c3: cmp ecx, dword ptr [edi + 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edi+0x10u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088b9c6: jle 0x88b9e6 */ if ((fZ||fS!=fO)) goto L_0088b9e6;
L_0088b9c8:; BB(0x0088b9c8);
    /* 0088b9c8: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0088b9ca: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0088b9cc: jle 0x88b9dc */ if ((fZ||fS!=fO)) goto L_0088b9dc;
L_0088b9ce:; BB(0x0088b9ce);
    /* 0088b9ce: cmp ecx, dword ptr [edi + edx*4 + 0x114] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edi+r_edx*4+0x114u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088b9d5: jle 0x88b9e6 */ if ((fZ||fS!=fO)) goto L_0088b9e6;
L_0088b9d7:; BB(0x0088b9d7);
    /* 0088b9d7: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088b9d8: cmp edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088b9da: jl 0x88b9ce */ if ((fS!=fO)) goto L_0088b9ce;
L_0088b9dc:; BB(0x0088b9dc);
    /* 0088b9dc: mov eax, edi */ r_eax = r_edi;
    /* 0088b9de: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0088b9e1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0088b9e2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0088b9e3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0088b9e4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0088b9e5: ret  */ FN_RET(0x0088b8bc); r_esp += 4; return;
L_0088b9e6:; BB(0x0088b9e6);
    /* 0088b9e6: mov eax, edi */ r_eax = r_edi;
    /* 0088b9e8: call 0x88b9fc */ r_esp -= 4; W32(r_esp, 0x88b9edu); f_0088b9fc();
    /* 0088b9ed: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0088b9ef: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0088b9f2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0088b9f3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0088b9f4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0088b9f5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0088b9f6: ret  */ FN_RET(0x0088b8bc); r_esp += 4; return;
}

void f_0088b9f8(void) /* sub_88B9F8 */
{
    FN_ENTER(0x0088b9f8);
    /* 0088b9f8: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0088b9fc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0088b9fd: mov esi, eax */ r_esi = r_eax;
    /* 0088b9ff: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0088ba01: je 0x88ba19 */ if (fZ) goto L_0088ba19;
L_0088ba03:; BB(0x0088ba03);
    /* 0088ba03: push 0x714 */ { u32 v = 0x714u; r_esp -= 4; W32(r_esp, v); }
    /* 0088ba08: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0088ba0a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0088ba0b: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x88ba10u); f_0086b688();
    /* 0088ba10: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0088ba11: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x88ba16u); f_00858882();
    /* 0088ba16: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_0088ba19:; BB(0x0088ba19);
    /* 0088ba19: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0088ba1a: ret  */ FN_RET(0x0088b9f8); r_esp += 4; return;
}

void f_0088b9fc(void) /* sub_88B9FC */
{
    FN_ENTER(0x0088b9fc);
    /* 0088b9fc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0088b9fd: mov esi, eax */ r_esi = r_eax;
    /* 0088b9ff: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0088ba01: je 0x88ba19 */ if (fZ) goto L_0088ba19;
L_0088ba03:; BB(0x0088ba03);
    /* 0088ba03: push 0x714 */ { u32 v = 0x714u; r_esp -= 4; W32(r_esp, v); }
    /* 0088ba08: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0088ba0a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0088ba0b: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x88ba10u); f_0086b688();
    /* 0088ba10: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0088ba11: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x88ba16u); f_00858882();
    /* 0088ba16: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_0088ba19:; BB(0x0088ba19);
    /* 0088ba19: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0088ba1a: ret  */ FN_RET(0x0088b9fc); r_esp += 4; return;
}

void f_0088ba1c(void) /* sub_88BA1C */
{
    FN_ENTER(0x0088ba1c);
    /* 0088ba1c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0088ba1d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0088ba1e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0088ba1f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0088ba20: sub esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0088ba23: mov ebp, dword ptr [esp + 0x60] */ r_ebp = R32((u32)(r_esp+0x60u));
    /* 0088ba27: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 0088ba29: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0088ba2b: call 0x8587c7 */ r_esp -= 4; W32(r_esp, 0x88ba30u); f_008587c7();
    /* 0088ba30: mov ebx, eax */ r_ebx = r_eax;
    /* 0088ba32: mov edi, dword ptr [ebp + 4] */ r_edi = R32((u32)(r_ebp+0x4u));
    /* 0088ba35: mov edi, dword ptr [edi + 0x1c] */ r_edi = R32((u32)(r_edi+0x1cu));
    /* 0088ba38: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0088ba3a: mov dword ptr [esp + 0x4c], ebp */ W32((u32)(r_esp+0x4cu), r_ebp);
    /* 0088ba3e: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0088ba40: mov ecx, dword ptr [esp + 0x6c] */ r_ecx = R32((u32)(r_esp+0x6cu));
    /* 0088ba44: mov dword ptr [ebx], ecx */ W32((u32)(r_ebx), r_ecx);
    /* 0088ba46: mov eax, dword ptr [ecx + 0xc] */ r_eax = R32((u32)(r_ecx+0xcu));
    /* 0088ba49: mov dword ptr [ebx + 4], eax */ W32((u32)(r_ebx+0x4u), r_eax);
    /* 0088ba4c: mov edx, dword ptr [edi + 0xb20] */ r_edx = R32((u32)(r_edi+0xb20u));
    /* 0088ba52: mov dword ptr [ebx + 0xc], edx */ W32((u32)(r_ebx+0xcu), r_edx);
    /* 0088ba55: mov esi, dword ptr [ecx + 0x10] */ r_esi = R32((u32)(r_ecx+0x10u));
    /* 0088ba58: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 0088ba5b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088ba5d: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0088ba5f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088ba61: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088ba63: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0088ba65: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088ba67: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088ba69: add edx, dword ptr [edi + 0xb20] */ {  u32 a = r_edx; u32 b = R32((u32)(r_edi+0xb20u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088ba6f: mov dword ptr [ebx + 0x10], edx */ W32((u32)(r_ebx+0x10u), r_edx);
    /* 0088ba72: mov esi, dword ptr [edx] */ r_esi = R32((u32)(r_edx));
    /* 0088ba74: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0088ba76: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0088ba77: call 0x8587c7 */ r_esp -= 4; W32(r_esp, 0x88ba7cu); f_008587c7();
    /* 0088ba7c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0088ba7f: mov dword ptr [ebx + 0x14], eax */ W32((u32)(r_ebx+0x14u), r_eax);
    /* 0088ba82: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0088ba84: mov edx, dword ptr [ebx + 4] */ r_edx = R32((u32)(r_ebx+0x4u));
    /* 0088ba87: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0088ba89: jle 0x88bb4a */ if ((fZ||fS!=fO)) goto L_0088bb4a;
L_0088ba8f:; BB(0x0088ba8f);
    /* 0088ba8f: mov dword ptr [esp + 0x34], esi */ W32((u32)(r_esp+0x34u), r_esi);
    /* 0088ba93: mov dword ptr [esp + 0x38], edi */ W32((u32)(r_esp+0x38u), r_edi);
    /* 0088ba97: mov edi, eax */ r_edi = r_eax;
L_0088ba99:; BB(0x0088ba99);
    /* 0088ba99: mov ecx, dword ptr [esp + 0x64] */ r_ecx = R32((u32)(r_esp+0x64u));
    /* 0088ba9d: mov ecx, dword ptr [ecx + edi*4 + 0x14] */ r_ecx = R32((u32)(r_ecx+r_edi*4+0x14u));
    /* 0088baa1: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0088baa3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088baa5: je 0x88baae */ if (fZ) goto L_0088baae;
L_0088baa7:; BB(0x0088baa7);
    /* 0088baa7: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0088baa8: shr ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0088baaa: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088baac: jne 0x88baa7 */ if (!fZ) goto L_0088baa7;
L_0088baae:; BB(0x0088baae);
    /* 0088baae: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088bab0: je 0x88bb3d */ if (fZ) goto L_0088bb3d;
L_0088bab6:; BB(0x0088bab6);
    /* 0088bab6: cmp esi, ebp */ {  u32 a = r_esi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088bab8: jle 0x88babc */ if ((fZ||fS!=fO)) goto L_0088babc;
L_0088baba:; BB(0x0088baba);
    /* 0088baba: mov ebp, esi */ r_ebp = r_esi;
L_0088babc:; BB(0x0088babc);
    /* 0088babc: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0088babe: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0088babf: call 0x8587c7 */ r_esp -= 4; W32(r_esp, 0x88bac4u); f_008587c7();
    /* 0088bac4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0088bac7: mov edx, dword ptr [ebx + 0x14] */ r_edx = R32((u32)(r_ebx+0x14u));
    /* 0088baca: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0088bacc: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 0088bace: mov dword ptr [edx + edi*4], eax */ W32((u32)(r_edx+r_edi*4), r_eax);
    /* 0088bad1: jle 0x88bd37 */ if ((fZ||fS!=fO)) goto L_0088bd37;
L_0088bad7:; BB(0x0088bad7);
    /* 0088bad7: mov dword ptr [esp + 0x30], ebp */ W32((u32)(r_esp+0x30u), r_ebp);
    /* 0088badb: mov edx, dword ptr [esp + 0x44] */ r_edx = R32((u32)(r_esp+0x44u));
    /* 0088badf: mov dword ptr [esp + 0x3c], ebx */ W32((u32)(r_esp+0x3cu), r_ebx);
    /* 0088bae3: mov ebx, dword ptr [esp + 0x64] */ r_ebx = R32((u32)(r_esp+0x64u));
L_0088bae7:; BB(0x0088bae7);
    /* 0088bae7: mov ebp, 1 */ r_ebp = 0x1u;
    /* 0088baec: shl ebp, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebp = r;  } }
    /* 0088baee: test dword ptr [ebx + edi*4 + 0x14], ebp */ {  u32 a = R32((u32)(r_ebx+r_edi*4+0x14u)); u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088baf2: je 0x88bb29 */ if (fZ) goto L_0088bb29;
L_0088baf4:; BB(0x0088baf4);
    /* 0088baf4: mov ebp, edx */ r_ebp = r_edx;
    /* 0088baf6: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088baf7: mov ebp, dword ptr [ebx + ebp*4 + 0x114] */ r_ebp = R32((u32)(r_ebx+r_ebp*4+0x114u));
    /* 0088bafe: lea eax, [ebp + ebp] */ r_eax = (u32)(r_ebp+r_ebp);
    /* 0088bb02: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0088bb04: sub eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0088bb06: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0088bb08: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0088bb0a: sub eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0088bb0c: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0088bb0e: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0088bb10: mov ebp, dword ptr [esp + 0x38] */ r_ebp = R32((u32)(r_esp+0x38u));
    /* 0088bb14: add eax, dword ptr [ebp + 0xb20] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xb20u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0088bb1a: mov ebp, dword ptr [esp + 0x3c] */ r_ebp = R32((u32)(r_esp+0x3cu));
    /* 0088bb1e: mov ebp, dword ptr [ebp + 0x14] */ r_ebp = R32((u32)(r_ebp+0x14u));
    /* 0088bb21: mov ebp, dword ptr [ebp + edi*4] */ r_ebp = R32((u32)(r_ebp+r_edi*4));
    /* 0088bb25: mov dword ptr [ebp + ecx*4], eax */ W32((u32)(r_ebp+r_ecx*4), r_eax);
L_0088bb29:; BB(0x0088bb29);
    /* 0088bb29: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0088bb2a: cmp ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0088bb2c: jl 0x88bae7 */ if ((fS!=fO)) goto L_0088bae7;
L_0088bb2e:; BB(0x0088bb2e);
    /* 0088bb2e: mov dword ptr [esp + 0x44], edx */ W32((u32)(r_esp+0x44u), r_edx);
    /* 0088bb32: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
    /* 0088bb36: mov ebx, dword ptr [esp + 0x3c] */ r_ebx = R32((u32)(r_esp+0x3cu));
    /* 0088bb3a: mov edx, dword ptr [ebx + 4] */ r_edx = R32((u32)(r_ebx+0x4u));
L_0088bb3d:; BB(0x0088bb3d);
    /* 0088bb3d: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0088bb3e: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088bb40: jl 0x88ba99 */ if ((fS!=fO)) goto L_0088ba99;
L_0088bb46:; BB(0x0088bb46);
    /* 0088bb46: mov esi, dword ptr [esp + 0x34] */ r_esi = R32((u32)(r_esp+0x34u));
L_0088bb4a:; BB(0x0088bb4a);
    /* 0088bb4a: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 0088bb4e: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 0088bb52: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 0088bb55: mov dword ptr [esp + 0x20], esi */ W32((u32)(r_esp+0x20u), r_esi);
    /* 0088bb59: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 0088bb5d: fstp qword ptr [esp + 8] */ W_F64((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0088bb61: call 0x84d1d4 */ r_esp -= 4; W32(r_esp, 0x88bb66u); f_0084d1d4();
    /* 0088bb66: fadd qword ptr [0x99b028] */ ST(0) = ST(0) + R_F64((u32)(0x99b028u));
    /* 0088bb6c: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 0088bb70: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 0088bb75: and eax, 0xfffff3ff */ {  u32 a = r_eax; u32 b = 0xfffff3ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0088bb7a: or eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0088bb7f: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0088bb83: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 0088bb87: fistp dword ptr [esp + 0x28] */ W32((u32)(r_esp+0x28u), (u32)fx_int32(ST(0))); FPOP();
    /* 0088bb8b: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0088bb8f: mov edx, dword ptr [esp + 0x28] */ r_edx = R32((u32)(r_esp+0x28u));
    /* 0088bb93: mov dword ptr [ebx + 0x18], edx */ W32((u32)(r_ebx+0x18u), r_edx);
    /* 0088bb96: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088bb98: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088bb9a: mov dword ptr [ebx + 8], ebp */ W32((u32)(r_ebx+0x8u), r_ebp);
    /* 0088bb9d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0088bb9e: call 0x859c55 */ r_esp -= 4; W32(r_esp, 0x88bba3u); f_00859c55();
    /* 0088bba3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0088bba4: mov dword ptr [ebx + 0x1c], eax */ W32((u32)(r_ebx+0x1cu), r_eax);
    /* 0088bba7: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0088bba9: mov eax, dword ptr [ebx + 0x18] */ r_eax = R32((u32)(r_ebx+0x18u));
    /* 0088bbac: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0088bbae: jle 0x88bd2d */ if ((fZ||fS!=fO)) goto L_0088bd2d;
L_0088bbb4:; BB(0x0088bbb4);
    /* 0088bbb4: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 0088bbb7: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088bbb9: lea ecx, [esi - 5] */ r_ecx = (u32)(r_esi+0xfffffffbu);
    /* 0088bbbc: mov dword ptr [esp + 0x30], ecx */ W32((u32)(r_esp+0x30u), r_ecx);
    /* 0088bbc0: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
    /* 0088bbc4: mov dword ptr [esp + 0x34], esi */ W32((u32)(r_esp+0x34u), r_esi);
L_0088bbc8:; BB(0x0088bbc8);
    /* 0088bbc8: mov esi, edi */ r_esi = r_edi;
    /* 0088bbca: mov ecx, dword ptr [ebx + 4] */ r_ecx = R32((u32)(r_ebx+0x4u));
    /* 0088bbcd: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0088bbce: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0088bbce, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0088bbce, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0088bbd0: mov ebp, eax */ r_ebp = r_eax;
    /* 0088bbd2: mov edx, dword ptr [esp + 0x38] */ r_edx = R32((u32)(r_esp+0x38u));
    /* 0088bbd6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0088bbd7: call 0x859c55 */ r_esp -= 4; W32(r_esp, 0x88bbdcu); f_00859c55();
    /* 0088bbdc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0088bbdd: mov edx, dword ptr [ebx + 0x1c] */ r_edx = R32((u32)(r_ebx+0x1cu));
    /* 0088bbe0: mov ecx, dword ptr [esp + 0x34] */ r_ecx = R32((u32)(r_esp+0x34u));
    /* 0088bbe4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0088bbe6: mov dword ptr [edx + edi*4], eax */ W32((u32)(r_edx+r_edi*4), r_eax);
    /* 0088bbe9: mov eax, 0 */ r_eax = 0x0u;
    /* 0088bbee: jle 0x88bd21 */ if ((fZ||fS!=fO)) goto L_0088bd21;
L_0088bbf4:; BB(0x0088bbf4);
    /* 0088bbf4: mov edx, ecx */ r_edx = r_ecx;
    /* 0088bbf6: cmp edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088bbf9: jl 0x88bcd3 */ if ((fS!=fO)) goto L_0088bcd3;
L_0088bbff:; BB(0x0088bbff);
    /* 0088bbff: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 0088bc03: mov dword ptr [esp + 0x40], edi */ W32((u32)(r_esp+0x40u), r_edi);
L_0088bc07:; BB(0x0088bc07);
    /* 0088bc07: mov eax, esi */ r_eax = r_esi;
    /* 0088bc09: mov edi, dword ptr [ebx + 4] */ r_edi = R32((u32)(r_ebx+0x4u));
    /* 0088bc0c: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0088bc0d: idiv ebp */ { i32 d = (i32)r_ebp; if (!d) UNSUP(0x0088bc0d, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0088bc0d, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0088bc0f: mov ecx, eax */ r_ecx = r_eax;
    /* 0088bc11: mov edx, ebp */ r_edx = r_ebp;
    /* 0088bc13: imul edx, ecx */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_ecx; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0088bc16: sub esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0088bc18: mov eax, ebp */ r_eax = r_ebp;
    /* 0088bc1a: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0088bc1b: idiv edi */ { i32 d = (i32)r_edi; if (!d) UNSUP(0x0088bc1b, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0088bc1b, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0088bc1d: mov ebp, eax */ r_ebp = r_eax;
    /* 0088bc1f: mov edx, dword ptr [ebx + 0x1c] */ r_edx = R32((u32)(r_ebx+0x1cu));
    /* 0088bc22: mov edi, dword ptr [esp + 0x40] */ r_edi = R32((u32)(r_esp+0x40u));
    /* 0088bc26: mov edx, dword ptr [edx + edi*4] */ r_edx = R32((u32)(r_edx+r_edi*4));
    /* 0088bc29: mov edi, dword ptr [esp + 0x44] */ r_edi = R32((u32)(r_esp+0x44u));
    /* 0088bc2d: mov eax, esi */ r_eax = r_esi;
    /* 0088bc2f: mov dword ptr [edx + edi*4], ecx */ W32((u32)(r_edx+r_edi*4), r_ecx);
    /* 0088bc32: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0088bc33: idiv ebp */ { i32 d = (i32)r_ebp; if (!d) UNSUP(0x0088bc33, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0088bc33, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0088bc35: mov ecx, eax */ r_ecx = r_eax;
    /* 0088bc37: mov edx, ebp */ r_edx = r_ebp;
    /* 0088bc39: imul edx, ecx */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_ecx; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0088bc3c: sub esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0088bc3e: mov eax, ebp */ r_eax = r_ebp;
    /* 0088bc40: mov dword ptr [esp + 0x48], esi */ W32((u32)(r_esp+0x48u), r_esi);
    /* 0088bc44: mov esi, dword ptr [ebx + 4] */ r_esi = R32((u32)(r_ebx+0x4u));
    /* 0088bc47: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0088bc48: idiv esi */ { i32 d = (i32)r_esi; if (!d) UNSUP(0x0088bc48, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0088bc48, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0088bc4a: mov ebp, eax */ r_ebp = r_eax;
    /* 0088bc4c: mov edx, dword ptr [ebx + 0x1c] */ r_edx = R32((u32)(r_ebx+0x1cu));
    /* 0088bc4f: mov esi, dword ptr [esp + 0x40] */ r_esi = R32((u32)(r_esp+0x40u));
    /* 0088bc53: mov edx, dword ptr [edx + esi*4] */ r_edx = R32((u32)(r_edx+r_esi*4));
    /* 0088bc56: mov esi, dword ptr [esp + 0x48] */ r_esi = R32((u32)(r_esp+0x48u));
    /* 0088bc5a: mov eax, esi */ r_eax = r_esi;
    /* 0088bc5c: mov dword ptr [edx + edi*4 + 4], ecx */ W32((u32)(r_edx+r_edi*4+0x4u), r_ecx);
    /* 0088bc60: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0088bc61: idiv ebp */ { i32 d = (i32)r_ebp; if (!d) UNSUP(0x0088bc61, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0088bc61, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0088bc63: mov ecx, eax */ r_ecx = r_eax;
    /* 0088bc65: mov edx, ebp */ r_edx = r_ebp;
    /* 0088bc67: imul edx, ecx */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_ecx; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0088bc6a: sub esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0088bc6c: mov eax, ebp */ r_eax = r_ebp;
    /* 0088bc6e: mov dword ptr [esp + 0x48], esi */ W32((u32)(r_esp+0x48u), r_esi);
    /* 0088bc72: mov esi, dword ptr [ebx + 4] */ r_esi = R32((u32)(r_ebx+0x4u));
    /* 0088bc75: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0088bc76: idiv esi */ { i32 d = (i32)r_esi; if (!d) UNSUP(0x0088bc76, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0088bc76, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0088bc78: mov ebp, eax */ r_ebp = r_eax;
    /* 0088bc7a: mov edx, dword ptr [ebx + 0x1c] */ r_edx = R32((u32)(r_ebx+0x1cu));
    /* 0088bc7d: mov esi, dword ptr [esp + 0x40] */ r_esi = R32((u32)(r_esp+0x40u));
    /* 0088bc81: mov edx, dword ptr [edx + esi*4] */ r_edx = R32((u32)(r_edx+r_esi*4));
    /* 0088bc84: mov esi, dword ptr [esp + 0x48] */ r_esi = R32((u32)(r_esp+0x48u));
    /* 0088bc88: mov eax, esi */ r_eax = r_esi;
    /* 0088bc8a: mov dword ptr [edx + edi*4 + 8], ecx */ W32((u32)(r_edx+r_edi*4+0x8u), r_ecx);
    /* 0088bc8e: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0088bc8f: idiv ebp */ { i32 d = (i32)r_ebp; if (!d) UNSUP(0x0088bc8f, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0088bc8f, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0088bc91: mov ecx, eax */ r_ecx = r_eax;
    /* 0088bc93: mov edx, ebp */ r_edx = r_ebp;
    /* 0088bc95: imul edx, ecx */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_ecx; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0088bc98: sub esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0088bc9a: mov eax, ebp */ r_eax = r_ebp;
    /* 0088bc9c: mov dword ptr [esp + 0x48], esi */ W32((u32)(r_esp+0x48u), r_esi);
    /* 0088bca0: mov esi, dword ptr [ebx + 4] */ r_esi = R32((u32)(r_ebx+0x4u));
    /* 0088bca3: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0088bca4: idiv esi */ { i32 d = (i32)r_esi; if (!d) UNSUP(0x0088bca4, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0088bca4, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0088bca6: mov ebp, eax */ r_ebp = r_eax;
    /* 0088bca8: mov edx, dword ptr [ebx + 0x1c] */ r_edx = R32((u32)(r_ebx+0x1cu));
    /* 0088bcab: mov esi, dword ptr [esp + 0x40] */ r_esi = R32((u32)(r_esp+0x40u));
    /* 0088bcaf: mov edx, dword ptr [edx + esi*4] */ r_edx = R32((u32)(r_edx+r_esi*4));
    /* 0088bcb2: mov esi, dword ptr [esp + 0x48] */ r_esi = R32((u32)(r_esp+0x48u));
    /* 0088bcb6: mov dword ptr [edx + edi*4 + 0xc], ecx */ W32((u32)(r_edx+r_edi*4+0xcu), r_ecx);
    /* 0088bcba: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0088bcbd: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 0088bcc1: mov dword ptr [esp + 0x44], edi */ W32((u32)(r_esp+0x44u), r_edi);
    /* 0088bcc5: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088bcc7: jle 0x88bc07 */ if ((fZ||fS!=fO)) goto L_0088bc07;
L_0088bccd:; BB(0x0088bccd);
    /* 0088bccd: mov eax, edi */ r_eax = r_edi;
    /* 0088bccf: mov edi, dword ptr [esp + 0x40] */ r_edi = R32((u32)(r_esp+0x40u));
L_0088bcd3:; BB(0x0088bcd3);
    /* 0088bcd3: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 0088bcd7: mov dword ptr [esp + 0x40], edi */ W32((u32)(r_esp+0x40u), r_edi);
    /* 0088bcdb: mov dword ptr [esp + 0x3c], ebx */ W32((u32)(r_esp+0x3cu), r_ebx);
L_0088bcdf:; BB(0x0088bcdf);
    /* 0088bcdf: mov eax, esi */ r_eax = r_esi;
    /* 0088bce1: mov ebx, ebp */ r_ebx = r_ebp;
    /* 0088bce3: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0088bce4: idiv ebp */ { i32 d = (i32)r_ebp; if (!d) UNSUP(0x0088bce4, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0088bce4, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0088bce6: mov ecx, eax */ r_ecx = r_eax;
    /* 0088bce8: imul ebx, ecx */ { i64 t = (i64)(i32)r_ebx * (i64)(i32)r_ecx; r_ebx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0088bceb: sub esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0088bced: mov ebx, dword ptr [esp + 0x3c] */ r_ebx = R32((u32)(r_esp+0x3cu));
    /* 0088bcf1: mov edi, dword ptr [ebx + 4] */ r_edi = R32((u32)(r_ebx+0x4u));
    /* 0088bcf4: mov eax, ebp */ r_eax = r_ebp;
    /* 0088bcf6: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0088bcf7: idiv edi */ { i32 d = (i32)r_edi; if (!d) UNSUP(0x0088bcf7, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0088bcf7, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0088bcf9: mov ebp, eax */ r_ebp = r_eax;
    /* 0088bcfb: mov edx, dword ptr [ebx + 0x1c] */ r_edx = R32((u32)(r_ebx+0x1cu));
    /* 0088bcfe: mov ebx, dword ptr [esp + 0x40] */ r_ebx = R32((u32)(r_esp+0x40u));
    /* 0088bd02: mov edx, dword ptr [edx + ebx*4] */ r_edx = R32((u32)(r_edx+r_ebx*4));
    /* 0088bd05: mov ebx, dword ptr [esp + 0x44] */ r_ebx = R32((u32)(r_esp+0x44u));
    /* 0088bd09: mov dword ptr [edx + ebx*4], ecx */ W32((u32)(r_edx+r_ebx*4), r_ecx);
    /* 0088bd0c: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0088bd0d: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 0088bd11: mov dword ptr [esp + 0x44], ebx */ W32((u32)(r_esp+0x44u), r_ebx);
    /* 0088bd15: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088bd17: jl 0x88bcdf */ if ((fS!=fO)) goto L_0088bcdf;
L_0088bd19:; BB(0x0088bd19);
    /* 0088bd19: mov edi, dword ptr [esp + 0x40] */ r_edi = R32((u32)(r_esp+0x40u));
    /* 0088bd1d: mov ebx, dword ptr [esp + 0x3c] */ r_ebx = R32((u32)(r_esp+0x3cu));
L_0088bd21:; BB(0x0088bd21);
    /* 0088bd21: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0088bd22: mov eax, dword ptr [ebx + 0x18] */ r_eax = R32((u32)(r_ebx+0x18u));
    /* 0088bd25: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088bd27: jl 0x88bbc8 */ if ((fS!=fO)) goto L_0088bbc8;
L_0088bd2d:; BB(0x0088bd2d);
    /* 0088bd2d: mov eax, ebx */ r_eax = r_ebx;
    /* 0088bd2f: add esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0088bd32: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0088bd33: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0088bd34: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0088bd35: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0088bd36: ret  */ FN_RET(0x0088ba1c); r_esp += 4; return;
L_0088bd37:; BB(0x0088bd37);
    /* 0088bd37: mov edx, dword ptr [ebx + 4] */ r_edx = R32((u32)(r_ebx+0x4u));
    /* 0088bd3a: jmp 0x88bb3d */ goto L_0088bb3d;
}

void f_0088bbdc(void)
{
    FN_ENTER(0x0088bbdc);
    goto L_0088bbdc;
L_0088bbc8:; BB(0x0088bbc8);
    /* 0088bbc8: mov esi, edi */ r_esi = r_edi;
    /* 0088bbca: mov ecx, dword ptr [ebx + 4] */ r_ecx = R32((u32)(r_ebx+0x4u));
    /* 0088bbcd: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0088bbce: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0088bbce, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0088bbce, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0088bbd0: mov ebp, eax */ r_ebp = r_eax;
    /* 0088bbd2: mov edx, dword ptr [esp + 0x38] */ r_edx = R32((u32)(r_esp+0x38u));
    /* 0088bbd6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0088bbd7: call 0x859c55 */ r_esp -= 4; W32(r_esp, 0x88bbdcu); f_00859c55();
L_0088bbdc:; BB(0x0088bbdc);
    /* 0088bbdc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0088bbdd: mov edx, dword ptr [ebx + 0x1c] */ r_edx = R32((u32)(r_ebx+0x1cu));
    /* 0088bbe0: mov ecx, dword ptr [esp + 0x34] */ r_ecx = R32((u32)(r_esp+0x34u));
    /* 0088bbe4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0088bbe6: mov dword ptr [edx + edi*4], eax */ W32((u32)(r_edx+r_edi*4), r_eax);
    /* 0088bbe9: mov eax, 0 */ r_eax = 0x0u;
    /* 0088bbee: jle 0x88bd21 */ if ((fZ||fS!=fO)) goto L_0088bd21;
L_0088bbf4:; BB(0x0088bbf4);
    /* 0088bbf4: mov edx, ecx */ r_edx = r_ecx;
    /* 0088bbf6: cmp edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088bbf9: jl 0x88bcd3 */ if ((fS!=fO)) goto L_0088bcd3;
L_0088bbff:; BB(0x0088bbff);
    /* 0088bbff: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 0088bc03: mov dword ptr [esp + 0x40], edi */ W32((u32)(r_esp+0x40u), r_edi);
L_0088bc07:; BB(0x0088bc07);
    /* 0088bc07: mov eax, esi */ r_eax = r_esi;
    /* 0088bc09: mov edi, dword ptr [ebx + 4] */ r_edi = R32((u32)(r_ebx+0x4u));
    /* 0088bc0c: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0088bc0d: idiv ebp */ { i32 d = (i32)r_ebp; if (!d) UNSUP(0x0088bc0d, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0088bc0d, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0088bc0f: mov ecx, eax */ r_ecx = r_eax;
    /* 0088bc11: mov edx, ebp */ r_edx = r_ebp;
    /* 0088bc13: imul edx, ecx */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_ecx; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0088bc16: sub esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0088bc18: mov eax, ebp */ r_eax = r_ebp;
    /* 0088bc1a: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0088bc1b: idiv edi */ { i32 d = (i32)r_edi; if (!d) UNSUP(0x0088bc1b, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0088bc1b, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0088bc1d: mov ebp, eax */ r_ebp = r_eax;
    /* 0088bc1f: mov edx, dword ptr [ebx + 0x1c] */ r_edx = R32((u32)(r_ebx+0x1cu));
    /* 0088bc22: mov edi, dword ptr [esp + 0x40] */ r_edi = R32((u32)(r_esp+0x40u));
    /* 0088bc26: mov edx, dword ptr [edx + edi*4] */ r_edx = R32((u32)(r_edx+r_edi*4));
    /* 0088bc29: mov edi, dword ptr [esp + 0x44] */ r_edi = R32((u32)(r_esp+0x44u));
    /* 0088bc2d: mov eax, esi */ r_eax = r_esi;
    /* 0088bc2f: mov dword ptr [edx + edi*4], ecx */ W32((u32)(r_edx+r_edi*4), r_ecx);
    /* 0088bc32: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0088bc33: idiv ebp */ { i32 d = (i32)r_ebp; if (!d) UNSUP(0x0088bc33, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0088bc33, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0088bc35: mov ecx, eax */ r_ecx = r_eax;
    /* 0088bc37: mov edx, ebp */ r_edx = r_ebp;
    /* 0088bc39: imul edx, ecx */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_ecx; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0088bc3c: sub esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0088bc3e: mov eax, ebp */ r_eax = r_ebp;
    /* 0088bc40: mov dword ptr [esp + 0x48], esi */ W32((u32)(r_esp+0x48u), r_esi);
    /* 0088bc44: mov esi, dword ptr [ebx + 4] */ r_esi = R32((u32)(r_ebx+0x4u));
    /* 0088bc47: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0088bc48: idiv esi */ { i32 d = (i32)r_esi; if (!d) UNSUP(0x0088bc48, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0088bc48, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0088bc4a: mov ebp, eax */ r_ebp = r_eax;
    /* 0088bc4c: mov edx, dword ptr [ebx + 0x1c] */ r_edx = R32((u32)(r_ebx+0x1cu));
    /* 0088bc4f: mov esi, dword ptr [esp + 0x40] */ r_esi = R32((u32)(r_esp+0x40u));
    /* 0088bc53: mov edx, dword ptr [edx + esi*4] */ r_edx = R32((u32)(r_edx+r_esi*4));
    /* 0088bc56: mov esi, dword ptr [esp + 0x48] */ r_esi = R32((u32)(r_esp+0x48u));
    /* 0088bc5a: mov eax, esi */ r_eax = r_esi;
    /* 0088bc5c: mov dword ptr [edx + edi*4 + 4], ecx */ W32((u32)(r_edx+r_edi*4+0x4u), r_ecx);
    /* 0088bc60: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0088bc61: idiv ebp */ { i32 d = (i32)r_ebp; if (!d) UNSUP(0x0088bc61, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0088bc61, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0088bc63: mov ecx, eax */ r_ecx = r_eax;
    /* 0088bc65: mov edx, ebp */ r_edx = r_ebp;
    /* 0088bc67: imul edx, ecx */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_ecx; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0088bc6a: sub esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0088bc6c: mov eax, ebp */ r_eax = r_ebp;
    /* 0088bc6e: mov dword ptr [esp + 0x48], esi */ W32((u32)(r_esp+0x48u), r_esi);
    /* 0088bc72: mov esi, dword ptr [ebx + 4] */ r_esi = R32((u32)(r_ebx+0x4u));
    /* 0088bc75: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0088bc76: idiv esi */ { i32 d = (i32)r_esi; if (!d) UNSUP(0x0088bc76, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0088bc76, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0088bc78: mov ebp, eax */ r_ebp = r_eax;
    /* 0088bc7a: mov edx, dword ptr [ebx + 0x1c] */ r_edx = R32((u32)(r_ebx+0x1cu));
    /* 0088bc7d: mov esi, dword ptr [esp + 0x40] */ r_esi = R32((u32)(r_esp+0x40u));
    /* 0088bc81: mov edx, dword ptr [edx + esi*4] */ r_edx = R32((u32)(r_edx+r_esi*4));
    /* 0088bc84: mov esi, dword ptr [esp + 0x48] */ r_esi = R32((u32)(r_esp+0x48u));
    /* 0088bc88: mov eax, esi */ r_eax = r_esi;
    /* 0088bc8a: mov dword ptr [edx + edi*4 + 8], ecx */ W32((u32)(r_edx+r_edi*4+0x8u), r_ecx);
    /* 0088bc8e: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0088bc8f: idiv ebp */ { i32 d = (i32)r_ebp; if (!d) UNSUP(0x0088bc8f, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0088bc8f, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0088bc91: mov ecx, eax */ r_ecx = r_eax;
    /* 0088bc93: mov edx, ebp */ r_edx = r_ebp;
    /* 0088bc95: imul edx, ecx */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_ecx; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0088bc98: sub esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0088bc9a: mov eax, ebp */ r_eax = r_ebp;
    /* 0088bc9c: mov dword ptr [esp + 0x48], esi */ W32((u32)(r_esp+0x48u), r_esi);
    /* 0088bca0: mov esi, dword ptr [ebx + 4] */ r_esi = R32((u32)(r_ebx+0x4u));
    /* 0088bca3: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0088bca4: idiv esi */ { i32 d = (i32)r_esi; if (!d) UNSUP(0x0088bca4, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0088bca4, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0088bca6: mov ebp, eax */ r_ebp = r_eax;
    /* 0088bca8: mov edx, dword ptr [ebx + 0x1c] */ r_edx = R32((u32)(r_ebx+0x1cu));
    /* 0088bcab: mov esi, dword ptr [esp + 0x40] */ r_esi = R32((u32)(r_esp+0x40u));
    /* 0088bcaf: mov edx, dword ptr [edx + esi*4] */ r_edx = R32((u32)(r_edx+r_esi*4));
    /* 0088bcb2: mov esi, dword ptr [esp + 0x48] */ r_esi = R32((u32)(r_esp+0x48u));
    /* 0088bcb6: mov dword ptr [edx + edi*4 + 0xc], ecx */ W32((u32)(r_edx+r_edi*4+0xcu), r_ecx);
    /* 0088bcba: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0088bcbd: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 0088bcc1: mov dword ptr [esp + 0x44], edi */ W32((u32)(r_esp+0x44u), r_edi);
    /* 0088bcc5: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088bcc7: jle 0x88bc07 */ if ((fZ||fS!=fO)) goto L_0088bc07;
L_0088bccd:; BB(0x0088bccd);
    /* 0088bccd: mov eax, edi */ r_eax = r_edi;
    /* 0088bccf: mov edi, dword ptr [esp + 0x40] */ r_edi = R32((u32)(r_esp+0x40u));
L_0088bcd3:; BB(0x0088bcd3);
    /* 0088bcd3: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 0088bcd7: mov dword ptr [esp + 0x40], edi */ W32((u32)(r_esp+0x40u), r_edi);
    /* 0088bcdb: mov dword ptr [esp + 0x3c], ebx */ W32((u32)(r_esp+0x3cu), r_ebx);
L_0088bcdf:; BB(0x0088bcdf);
    /* 0088bcdf: mov eax, esi */ r_eax = r_esi;
    /* 0088bce1: mov ebx, ebp */ r_ebx = r_ebp;
    /* 0088bce3: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0088bce4: idiv ebp */ { i32 d = (i32)r_ebp; if (!d) UNSUP(0x0088bce4, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0088bce4, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0088bce6: mov ecx, eax */ r_ecx = r_eax;
    /* 0088bce8: imul ebx, ecx */ { i64 t = (i64)(i32)r_ebx * (i64)(i32)r_ecx; r_ebx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0088bceb: sub esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0088bced: mov ebx, dword ptr [esp + 0x3c] */ r_ebx = R32((u32)(r_esp+0x3cu));
    /* 0088bcf1: mov edi, dword ptr [ebx + 4] */ r_edi = R32((u32)(r_ebx+0x4u));
    /* 0088bcf4: mov eax, ebp */ r_eax = r_ebp;
    /* 0088bcf6: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0088bcf7: idiv edi */ { i32 d = (i32)r_edi; if (!d) UNSUP(0x0088bcf7, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0088bcf7, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0088bcf9: mov ebp, eax */ r_ebp = r_eax;
    /* 0088bcfb: mov edx, dword ptr [ebx + 0x1c] */ r_edx = R32((u32)(r_ebx+0x1cu));
    /* 0088bcfe: mov ebx, dword ptr [esp + 0x40] */ r_ebx = R32((u32)(r_esp+0x40u));
    /* 0088bd02: mov edx, dword ptr [edx + ebx*4] */ r_edx = R32((u32)(r_edx+r_ebx*4));
    /* 0088bd05: mov ebx, dword ptr [esp + 0x44] */ r_ebx = R32((u32)(r_esp+0x44u));
    /* 0088bd09: mov dword ptr [edx + ebx*4], ecx */ W32((u32)(r_edx+r_ebx*4), r_ecx);
    /* 0088bd0c: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0088bd0d: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 0088bd11: mov dword ptr [esp + 0x44], ebx */ W32((u32)(r_esp+0x44u), r_ebx);
    /* 0088bd15: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088bd17: jl 0x88bcdf */ if ((fS!=fO)) goto L_0088bcdf;
L_0088bd19:; BB(0x0088bd19);
    /* 0088bd19: mov edi, dword ptr [esp + 0x40] */ r_edi = R32((u32)(r_esp+0x40u));
    /* 0088bd1d: mov ebx, dword ptr [esp + 0x3c] */ r_ebx = R32((u32)(r_esp+0x3cu));
L_0088bd21:; BB(0x0088bd21);
    /* 0088bd21: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0088bd22: mov eax, dword ptr [ebx + 0x18] */ r_eax = R32((u32)(r_ebx+0x18u));
    /* 0088bd25: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088bd27: jl 0x88bbc8 */ if ((fS!=fO)) goto L_0088bbc8;
L_0088bd2d:; BB(0x0088bd2d);
    /* 0088bd2d: mov eax, ebx */ r_eax = r_ebx;
    /* 0088bd2f: add esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0088bd32: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0088bd33: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0088bd34: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0088bd35: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0088bd36: ret  */ FN_RET(0x0088bbdc); r_esp += 4; return;
}

void f_0088bd40(void) /* sub_88BD40 */
{
    FN_ENTER(0x0088bd40);
    /* 0088bd40: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0088bd41: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0088bd42: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0088bd45: mov ecx, dword ptr [esp + 0x28] */ r_ecx = R32((u32)(r_esp+0x28u));
    /* 0088bd49: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0088bd4b: mov ecx, dword ptr [ecx] */ r_ecx = R32((u32)(r_ecx));
    /* 0088bd4d: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 0088bd51: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0088bd52: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0088bd52, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0088bd52, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0088bd54: mov edx, eax */ r_edx = r_eax;
    /* 0088bd56: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0088bd58: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0088bd5a: jle 0x88bda9 */ if ((fZ||fS!=fO)) goto L_0088bda9;
L_0088bd5c:; BB(0x0088bd5c);
    /* 0088bd5c: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0088bd5e: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0088bd60: mov esi, eax */ r_esi = r_eax;
    /* 0088bd62: imul esi, ecx */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_ecx; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0088bd65: add esi, dword ptr [esp + 0x20] */ {  u32 a = r_esi; u32 b = R32((u32)(r_esp+0x20u)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0088bd69: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 0088bd6d: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 0088bd71: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 0088bd75: mov edi, dword ptr [esp + 0x28] */ r_edi = R32((u32)(r_esp+0x28u));
    /* 0088bd79: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 0088bd7c: mov ebp, eax */ r_ebp = r_eax;
L_0088bd7e:; BB(0x0088bd7e);
    /* 0088bd7e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0088bd7f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0088bd80: call 0x88d590 */ r_esp -= 4; W32(r_esp, 0x88bd85u); f_0088d590();
    /* 0088bd85: push dword ptr [esp + 0x24] */ { u32 v = R32((u32)(r_esp+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 0088bd89: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0088bd8a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0088bd8b: call 0x885fd4 */ r_esp -= 4; W32(r_esp, 0x88bd90u); f_00885fd4();
    /* 0088bd90: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0088bd93: add ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0088bd95: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0088bd96: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0088bd9a: add esi, dword ptr [esp + 8] */ {  u32 a = r_esi; u32 b = R32((u32)(r_esp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0088bd9e: cmp ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088bda0: jl 0x88bd7e */ if ((fS!=fO)) goto L_0088bd7e;
L_0088bda2:; BB(0x0088bda2);
    /* 0088bda2: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 0088bda6: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
L_0088bda9:; BB(0x0088bda9);
    /* 0088bda9: mov eax, ebx */ r_eax = r_ebx;
    /* 0088bdab: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0088bdae: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0088bdaf: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0088bdb0: ret  */ FN_RET(0x0088bd40); r_esp += 4; return;
}

void f_0088bdb4(void)
{
    FN_ENTER(0x0088bdb4);
    /* 0088bdb4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0088bdb5: mov ebp, esp */ r_ebp = r_esp;
    /* 0088bdb7: sub esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0088bdba: mov dword ptr [ebp - 0x2c], edi */ W32((u32)(r_ebp+0xffffffd4u), r_edi);
    /* 0088bdbd: mov dword ptr [ebp - 0x30], esi */ W32((u32)(r_ebp+0xffffffd0u), r_esi);
    /* 0088bdc0: mov dword ptr [ebp - 0x34], ebx */ W32((u32)(r_ebp+0xffffffccu), r_ebx);
    /* 0088bdc3: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 0088bdc6: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 0088bdc9: mov ecx, dword ptr [ebp + 0x18] */ r_ecx = R32((u32)(r_ebp+0x18u));
    /* 0088bdcc: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0088bdce: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0088bdd0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0088bdd2: jle 0x88bff8 */ if ((fZ||fS!=fO)) goto L_0088bff8;
L_0088bdd8:; BB(0x0088bdd8);
    /* 0088bdd8: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 0088bddb: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0088bddc: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088bdde: je 0x88bded */ if (fZ) goto L_0088bded;
L_0088bde0:; BB(0x0088bde0);
    /* 0088bde0: mov ebx, dword ptr [ebp + 0x10] */ r_ebx = R32((u32)(r_ebp+0x10u));
    /* 0088bde3: mov ecx, dword ptr [ebx + eax*4 - 4] */ r_ecx = R32((u32)(r_ebx+r_eax*4+0xfffffffcu));
    /* 0088bde7: mov edi, esi */ r_edi = r_esi;
    /* 0088bde9: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0088bdea: mov dword ptr [ebx + edi*4], ecx */ W32((u32)(r_ebx+r_edi*4), r_ecx);
L_0088bded:; BB(0x0088bded);
    /* 0088bded: mov ecx, dword ptr [ebp + 0x18] */ r_ecx = R32((u32)(r_ebp+0x18u));
    /* 0088bdf0: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088bdf2: jl 0x88bdd8 */ if ((fS!=fO)) goto L_0088bdd8;
L_0088bdf4:; BB(0x0088bdf4);
    /* 0088bdf4: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 0088bdf7: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088bdf9: je 0x88bff8 */ if (fZ) goto L_0088bff8;
L_0088bdff:; BB(0x0088bdff);
    /* 0088bdff: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0088be02: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0088be04: mov dword ptr [ebp - 0x4c], esp */ W32((u32)(r_ebp+0xffffffb4u), r_esp);
    /* 0088be07: mov edi, dword ptr [edx + 8] */ r_edi = R32((u32)(r_edx+0x8u));
    /* 0088be0a: mov eax, dword ptr [eax + 0x10] */ r_eax = R32((u32)(r_eax+0x10u));
    /* 0088be0d: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
    /* 0088be10: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0088be12: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0088be15: mov dword ptr [ebp - 0x44], edi */ W32((u32)(r_ebp+0xffffffbcu), r_edi);
    /* 0088be18: mov dword ptr [ebp - 0x40], ecx */ W32((u32)(r_ebp+0xffffffc0u), r_ecx);
    /* 0088be1b: sub eax, dword ptr [edx] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0088be1d: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0088be1e: idiv edi */ { i32 d = (i32)r_edi; if (!d) UNSUP(0x0088be1e, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0088be1e, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0088be20: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0088be23: lea eax, [ecx + eax - 1] */ r_eax = (u32)(r_ecx+r_eax+0xffffffffu);
    /* 0088be27: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0088be28: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0088be28, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0088be28, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0088be2a: mov edi, eax */ r_edi = r_eax;
    /* 0088be2c: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
    /* 0088be2f: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0088be31: call 0x858020 */ r_esp -= 4; W32(r_esp, 0x88be36u); f_00858020();
    /* 0088be36: and esp, 0xfffffff0 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 0088be39: mov eax, esp */ r_eax = r_esp;
    /* 0088be3b: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0088be3d: jle 0x88be6f */ if ((fZ||fS!=fO)) goto L_0088be6f;
L_0088be3f:; BB(0x0088be3f);
    /* 0088be3f: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0088be41: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0088be43: mov edx, eax */ r_edx = r_eax;
    /* 0088be45: lea ecx, [eax + esi*4] */ r_ecx = (u32)(r_eax+r_esi*4);
    /* 0088be48: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 0088be4b: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0088be4e: mov dword ptr [ebp - 0x50], esi */ W32((u32)(r_ebp+0xffffffb0u), r_esi);
    /* 0088be51: mov esi, edx */ r_esi = r_edx;
L_0088be53:; BB(0x0088be53);
    /* 0088be53: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0088be54: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0088be55: call 0x87421c */ r_esp -= 4; W32(r_esp, 0x88be5au); f_0087421c();
    /* 0088be5a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0088be5d: mov dword ptr [esi], eax */ W32((u32)(r_esi), r_eax);
    /* 0088be5f: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0088be62: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0088be65: cmp esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0088be67: jb 0x88be53 */ if (fC) goto L_0088be53;
L_0088be69:; BB(0x0088be69);
    /* 0088be69: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0088be6c: mov esi, dword ptr [ebp - 0x50] */ r_esi = R32((u32)(r_ebp+0xffffffb0u));
L_0088be6f:; BB(0x0088be6f);
    /* 0088be6f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0088be71: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0088be74: mov edx, dword ptr [edx + 8] */ r_edx = R32((u32)(r_edx+0x8u));
    /* 0088be77: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0088be79: jle 0x88c007 */ if ((fZ||fS!=fO)) goto L_0088c007;
L_0088be7f:; BB(0x0088be7f);
    /* 0088be7f: lea ebx, [ebx + 4] */ r_ebx = (u32)(r_ebx+0x4u);
    /* 0088be82: mov dword ptr [ebp - 0x28], ebx */ W32((u32)(r_ebp+0xffffffd8u), r_ebx);
    /* 0088be85: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0088be88: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
    /* 0088be8b: mov dword ptr [ebp - 0x50], esi */ W32((u32)(r_ebp+0xffffffb0u), r_esi);
L_0088be8e:; BB(0x0088be8e);
    /* 0088be8e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0088be90: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0088be92: mov edi, dword ptr [ebp - 0x3c] */ r_edi = R32((u32)(r_ebp+0xffffffc4u));
    /* 0088be95: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 0088be97: jle 0x88c026 */ if ((fZ||fS!=fO)) goto L_0088c026;
L_0088be9d:; BB(0x0088be9d);
    /* 0088be9d: mov edx, 1 */ r_edx = 0x1u;
    /* 0088bea2: lea edi, [ecx + ecx] */ r_edi = (u32)(r_ecx+r_ecx);
    /* 0088bea5: shl edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0088bea7: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0088beaa: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 0088bead: mov edi, dword ptr [ebp - 0x40] */ r_edi = R32((u32)(r_ebp+0xffffffc0u));
L_0088beb0:; BB(0x0088beb0);
    /* 0088beb0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088beb2: jne 0x88bf1a */ if (!fZ) goto L_0088bf1a;
L_0088beb4:; BB(0x0088beb4);
    /* 0088beb4: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0088beb6: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0088beb9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0088bebb: jle 0x88bf1a */ if ((fZ||fS!=fO)) goto L_0088bf1a;
L_0088bebd:; BB(0x0088bebd);
    /* 0088bebd: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 0088bec0: mov edi, dword ptr [ebp + 0xc] */ r_edi = R32((u32)(r_ebp+0xcu));
    /* 0088bec3: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0088bec6: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0088bec9: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0088becc: mov esi, dword ptr [ebp - 0x38] */ r_esi = R32((u32)(r_ebp+0xffffffc8u));
    /* 0088becf: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
L_0088bed2:; BB(0x0088bed2);
    /* 0088bed2: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0088bed5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0088bed6: push dword ptr [edi + 0x10] */ { u32 v = R32((u32)(r_edi+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0088bed9: call 0x88600c */ r_esp -= 4; W32(r_esp, 0x88bedeu); f_0088600c();
    /* 0088bede: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0088bee1: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088bee4: je 0x88c007 */ if (fZ) goto L_0088c007;
L_0088beea:; BB(0x0088beea);
    /* 0088beea: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 0088beed: mov edx, dword ptr [esi + ebx*4] */ r_edx = R32((u32)(r_esi+r_ebx*4));
    /* 0088bef0: mov ecx, dword ptr [ecx + eax*4] */ r_ecx = R32((u32)(r_ecx+r_eax*4));
    /* 0088bef3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0088bef6: mov dword ptr [edx + eax*2], ecx */ W32((u32)(r_edx+r_eax*2), r_ecx);
    /* 0088bef9: mov edx, dword ptr [esi + ebx*4] */ r_edx = R32((u32)(r_esi+r_ebx*4));
    /* 0088befc: cmp dword ptr [edx + eax*2], 0 */ {  u32 a = R32((u32)(r_edx+r_eax*2)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088bf00: je 0x88c007 */ if (fZ) goto L_0088c007;
L_0088bf06:; BB(0x0088bf06);
    /* 0088bf06: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0088bf07: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 0088bf0a: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088bf0c: jl 0x88bed2 */ if ((fS!=fO)) goto L_0088bed2;
L_0088bf0e:; BB(0x0088bf0e);
    /* 0088bf0e: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0088bf11: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0088bf14: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0088bf17: mov edi, dword ptr [ebp - 0x40] */ r_edi = R32((u32)(r_ebp+0xffffffc0u));
L_0088bf1a:; BB(0x0088bf1a);
    /* 0088bf1a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0088bf1c: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0088bf1e: jle 0x88bfdb */ if ((fZ||fS!=fO)) goto L_0088bfdb;
L_0088bf24:; BB(0x0088bf24);
    /* 0088bf24: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0088bf27: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
L_0088bf2a:; BB(0x0088bf2a);
    /* 0088bf2a: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0088bf2d: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088bf2f: jge 0x88c01b */ if ((fS==fO)) goto L_0088c01b;
L_0088bf35:; BB(0x0088bf35);
    /* 0088bf35: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0088bf37: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0088bf3a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0088bf3c: jle 0x88bfc5 */ if ((fZ||fS!=fO)) goto L_0088bfc5;
L_0088bf42:; BB(0x0088bf42);
    /* 0088bf42: mov esi, eax */ r_esi = r_eax;
    /* 0088bf44: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 0088bf47: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0088bf4a: imul esi, dword ptr [ebp - 0x44] */ { i64 t = (i64)(i32)r_esi * (i64)(i32)R32((u32)(r_ebp+0xffffffbcu)); r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0088bf4e: lea edi, [edi + edi] */ r_edi = (u32)(r_edi+r_edi);
    /* 0088bf51: mov dword ptr [ebp - 8], edi */ W32((u32)(r_ebp+0xfffffff8u), r_edi);
    /* 0088bf54: mov edi, dword ptr [ebp - 0x48] */ r_edi = R32((u32)(r_ebp+0xffffffb8u));
    /* 0088bf57: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0088bf5a: mov dword ptr [ebp - 0xc], esi */ W32((u32)(r_ebp+0xfffffff4u), r_esi);
    /* 0088bf5d: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 0088bf60: mov esi, dword ptr [ebp - 0x38] */ r_esi = R32((u32)(r_ebp+0xffffffc8u));
    /* 0088bf63: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_0088bf66:; BB(0x0088bf66);
    /* 0088bf66: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 0088bf68: mov eax, dword ptr [esi + ebx*4] */ r_eax = R32((u32)(r_esi+r_ebx*4));
    /* 0088bf6b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0088bf6e: add edx, dword ptr [ebp - 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088bf71: mov eax, dword ptr [eax + ecx*2] */ r_eax = R32((u32)(r_eax+r_ecx*2));
    /* 0088bf74: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0088bf77: mov eax, dword ptr [eax + ecx*2] */ r_eax = R32((u32)(r_eax+r_ecx*2));
    /* 0088bf7a: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0088bf7d: test dword ptr [edi + eax*4 + 0x14], ecx */ {  u32 a = R32((u32)(r_edi+r_eax*4+0x14u)); u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088bf81: je 0x88bfb7 */ if (fZ) goto L_0088bfb7;
L_0088bf83:; BB(0x0088bf83);
    /* 0088bf83: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0088bf86: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 0088bf89: mov eax, dword ptr [ecx + eax*4] */ r_eax = R32((u32)(r_ecx+r_eax*4));
    /* 0088bf8c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0088bf8f: mov eax, dword ptr [eax + ecx*2] */ r_eax = R32((u32)(r_eax+r_ecx*2));
    /* 0088bf92: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088bf94: je 0x88bfb7 */ if (fZ) goto L_0088bfb7;
L_0088bf96:; BB(0x0088bf96);
    /* 0088bf96: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088bf98: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088bf9a: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0088bf9d: add edx, dword ptr [ecx + ebx*4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+r_ebx*4)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088bfa0: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0088bfa3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0088bfa4: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0088bfa7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0088bfa8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0088bfa9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0088bfaa: call 0x886160 */ r_esp -= 4; W32(r_esp, 0x88bfafu); f_00886160();
    /* 0088bfaf: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0088bfb2: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088bfb5: je 0x88c007 */ if (fZ) goto L_0088c007;
L_0088bfb7:; BB(0x0088bfb7);
    /* 0088bfb7: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0088bfb8: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 0088bfbb: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088bfbd: jl 0x88bf66 */ if ((fS!=fO)) goto L_0088bf66;
L_0088bfbf:; BB(0x0088bfbf);
    /* 0088bfbf: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0088bfc2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
L_0088bfc5:; BB(0x0088bfc5);
    /* 0088bfc5: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088bfc6: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0088bfc7: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0088bfca: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088bfcc: jl 0x88bf2a */ if ((fS!=fO)) goto L_0088bf2a;
L_0088bfd2:; BB(0x0088bfd2);
    /* 0088bfd2: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0088bfd5: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0088bfd8: mov edi, dword ptr [ebp - 0x40] */ r_edi = R32((u32)(r_ebp+0xffffffc0u));
L_0088bfdb:; BB(0x0088bfdb);
    /* 0088bfdb: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0088bfdc: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0088bfdf: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088bfe1: jl 0x88beb0 */ if ((fS!=fO)) goto L_0088beb0;
L_0088bfe7:; BB(0x0088bfe7);
    /* 0088bfe7: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
    /* 0088bfea: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0088bfeb: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 0088bfee: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088bff0: jl 0x88be8e */ if ((fS!=fO)) goto L_0088be8e;
L_0088bff6:; BB(0x0088bff6);
    /* 0088bff6: jmp 0x88c007 */ goto L_0088c007;
L_0088bff8:; BB(0x0088bff8);
    /* 0088bff8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0088bffa: mov ebx, dword ptr [ebp - 0x34] */ r_ebx = R32((u32)(r_ebp+0xffffffccu));
    /* 0088bffd: mov esi, dword ptr [ebp - 0x30] */ r_esi = R32((u32)(r_ebp+0xffffffd0u));
    /* 0088c000: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 0088c003: mov esp, ebp */ r_esp = r_ebp;
    /* 0088c005: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0088c006: ret  */ FN_RET(0x0088bdb4); r_esp += 4; return;
L_0088c007:; BB(0x0088c007);
    /* 0088c007: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0088c00a: mov esp, eax */ r_esp = r_eax;
    /* 0088c00c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0088c00e: mov ebx, dword ptr [ebp - 0x34] */ r_ebx = R32((u32)(r_ebp+0xffffffccu));
    /* 0088c011: mov esi, dword ptr [ebp - 0x30] */ r_esi = R32((u32)(r_ebp+0xffffffd0u));
    /* 0088c014: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 0088c017: mov esp, ebp */ r_esp = r_ebp;
    /* 0088c019: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0088c01a: ret  */ FN_RET(0x0088bdb4); r_esp += 4; return;
L_0088c01b:; BB(0x0088c01b);
    /* 0088c01b: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0088c01e: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0088c021: mov edi, dword ptr [ebp - 0x40] */ r_edi = R32((u32)(r_ebp+0xffffffc0u));
    /* 0088c024: jmp 0x88bfdb */ goto L_0088bfdb;
L_0088c026:; BB(0x0088c026);
    /* 0088c026: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0088c027: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088c029: jl 0x88be8e */ if ((fS!=fO)) goto L_0088be8e;
L_0088c02f:; BB(0x0088c02f);
    /* 0088c02f: jmp 0x88c007 */ goto L_0088c007;
}

