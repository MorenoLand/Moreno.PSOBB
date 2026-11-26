#include "protos.h"

void f_007812c8(void) /* sub_7812C8 */
{
    FN_ENTER(0x007812c8);
    /* 007812c8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007812c9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007812ca: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007812cb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007812cc: sub esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007812cf: mov edx, dword ptr [esp + 0x5c] */ r_edx = R32((u32)(r_esp+0x5cu));
    /* 007812d3: mov eax, 0xa9bc9c */ r_eax = 0xa9bc9cu;
    /* 007812d8: mov ebp, dword ptr [eax + 4] */ r_ebp = R32((u32)(r_eax+0x4u));
    /* 007812db: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
    /* 007812e1: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 007812e3: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 007812e5: mov dword ptr [eax + 8], 0xffffffff */ W32((u32)(r_eax+0x8u), 0xffffffffu);
    /* 007812ec: mov dword ptr [eax + 0xc], 0xbf800000 */ W32((u32)(r_eax+0xcu), 0xbf800000u);
    /* 007812f3: mov esi, dword ptr [edx + 0x18] */ r_esi = R32((u32)(r_edx+0x18u));
    /* 007812f6: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 007812f8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 007812fa: jle 0x78141b */ if ((fZ||fS!=fO)) goto L_0078141b;
L_00781300:; BB(0x00781300);
    /* 00781300: mov dword ptr [esp + 0x40], edi */ W32((u32)(r_esp+0x40u), r_edi);
    /* 00781304: mov dword ptr [esp + 0x3c], ecx */ W32((u32)(r_esp+0x3cu), r_ecx);
    /* 00781308: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 0078130c: lea ebx, [edx + 0xc] */ r_ebx = (u32)(r_edx+0xcu);
L_0078130f:; BB(0x0078130f);
    /* 0078130f: mov edi, dword ptr [esp + 0x5c] */ r_edi = R32((u32)(r_esp+0x5cu));
    /* 00781313: lea ecx, [esp + 0x24] */ r_ecx = (u32)(r_esp+0x24u);
    /* 00781317: fld dword ptr [edi + 0xc] */ FPUSH(R_F32((u32)(r_edi+0xcu)));
    /* 0078131a: fadd dword ptr [esi] */ ST(0) = ST(0) + R_F32((u32)(r_esi));
    /* 0078131c: fld dword ptr [edi + 0x10] */ FPUSH(R_F32((u32)(r_edi+0x10u)));
    /* 0078131f: fld dword ptr [edi + 0x14] */ FPUSH(R_F32((u32)(r_edi+0x14u)));
    /* 00781322: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00781324: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 00781328: fadd dword ptr [esi + 4] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x4u));
    /* 0078132b: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 0078132f: fadd dword ptr [esi + 8] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x8u));
    /* 00781332: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 00781336: mov edx, dword ptr [edi + 8] */ r_edx = R32((u32)(r_edi+0x8u));
    /* 00781339: mov edi, dword ptr [0xa9bc80] */ r_edi = R32((u32)(0xa9bc80u));
    /* 0078133f: mov dword ptr [esp + 0x44], edx */ W32((u32)(r_esp+0x44u), r_edx);
    /* 00781343: lea edx, [esp + 0x18] */ r_edx = (u32)(r_esp+0x18u);
    /* 00781347: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00781348: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00781349: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0078134a: call 0x7a8c4c */ r_esp -= 4; W32(r_esp, 0x78134fu); f_007a8c4c();
    /* 0078134f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00781352: mov edx, dword ptr [edi + 0x24] */ r_edx = R32((u32)(r_edi+0x24u));
    /* 00781355: mov dword ptr [0xa9bc90], ebp */ W32((u32)(0xa9bc90u), r_ebp);
    /* 0078135b: mov dword ptr [0xa9bc94], 0x40000000 */ W32((u32)(0xa9bc94u), 0x40000000u);
    /* 00781365: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00781367: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00781369: je 0x7813b7 */ if (fZ) goto L_007813b7;
L_0078136b:; BB(0x0078136b);
    /* 0078136b: mov dword ptr [esp + 0x38], ebp */ W32((u32)(r_esp+0x38u), r_ebp);
    /* 0078136f: mov ebp, ebx */ r_ebp = r_ebx;
    /* 00781371: mov dword ptr [esp + 0x34], esi */ W32((u32)(r_esp+0x34u), r_esi);
    /* 00781375: mov esi, dword ptr [esp + 0x44] */ r_esi = R32((u32)(r_esp+0x44u));
    /* 00781379: mov ebx, eax */ r_ebx = r_eax;
L_0078137b:; BB(0x0078137b);
    /* 0078137b: mov dword ptr [esp + 0x14], 3 */ W32((u32)(r_esp+0x14u), 0x3u);
    /* 00781383: mov dword ptr [esp + 0xc], edi */ W32((u32)(r_esp+0xcu), r_edi);
    /* 00781387: mov eax, ebp */ r_eax = r_ebp;
    /* 00781389: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 0078138d: lea edx, [esp + 0x24] */ r_edx = (u32)(r_esp+0x24u);
    /* 00781391: mov ecx, esi */ r_ecx = r_esi;
    /* 00781393: call 0x780284 */ r_esp -= 4; W32(r_esp, 0x781398u); f_00780284();
    /* 00781398: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078139a: je 0x7813a1 */ if (fZ) goto L_007813a1;
L_0078139c:; BB(0x0078139c);
    /* 0078139c: mov ebx, 1 */ r_ebx = 0x1u;
L_007813a1:; BB(0x007813a1);
    /* 007813a1: mov edx, dword ptr [edi + 0x4c] */ r_edx = R32((u32)(r_edi+0x4cu));
    /* 007813a4: add edi, 0x28 */ {  u32 a = r_edi; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 007813a7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007813a9: jne 0x78137b */ if (!fZ) goto L_0078137b;
L_007813ab:; BB(0x007813ab);
    /* 007813ab: mov esi, dword ptr [esp + 0x34] */ r_esi = R32((u32)(r_esp+0x34u));
    /* 007813af: mov eax, ebx */ r_eax = r_ebx;
    /* 007813b1: mov ebx, ebp */ r_ebx = r_ebp;
    /* 007813b3: mov ebp, dword ptr [esp + 0x38] */ r_ebp = R32((u32)(r_esp+0x38u));
L_007813b7:; BB(0x007813b7);
    /* 007813b7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007813b9: je 0x7813f8 */ if (fZ) goto L_007813f8;
L_007813bb:; BB(0x007813bb);
    /* 007813bb: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 007813bf: fsub dword ptr [ebp] */ ST(0) = ST(0) - R_F32((u32)(r_ebp));
    /* 007813c2: fmul dword ptr [ebp + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xcu));
    /* 007813c5: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 007813c9: fsub dword ptr [ebp + 8] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x8u));
    /* 007813cc: fmul dword ptr [ebp + 0x14] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x14u));
    /* 007813cf: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 007813d1: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007813d2: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 007813d5: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x7813dau); f_0082e900();
    /* 007813da: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 007813de: fcom dword ptr [edx + 0xc] */ fx_compare(ST(0), R_F32((u32)(r_edx+0xcu))); 
    /* 007813e1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007813e3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007813e4: jbe 0x781429 */ if ((fC||fZ)) goto L_00781429;
L_007813e6:; BB(0x007813e6);
    /* 007813e6: mov ecx, edx */ r_ecx = r_edx;
    /* 007813e8: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 007813ec: fstp dword ptr [ecx + 0xc] */ W_F32((u32)(r_ecx+0xcu), ST(0)); FPOP();
    /* 007813ef: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 007813f2: mov dword ptr [ecx], 1 */ W32((u32)(r_ecx), 0x1u);
L_007813f8:; BB(0x007813f8);
    /* 007813f8: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 007813fc: mov ecx, dword ptr [esp + 0x3c] */ r_ecx = R32((u32)(r_esp+0x3cu));
    /* 00781400: add esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00781403: add ebp, 0x1c */ {  u32 a = r_ebp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00781406: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00781409: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0078140b: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
    /* 0078140f: jl 0x78130f */ if ((fS!=fO)) goto L_0078130f;
L_00781415:; BB(0x00781415);
    /* 00781415: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 00781419: mov ebx, dword ptr [eax] */ r_ebx = R32((u32)(r_eax));
L_0078141b:; BB(0x0078141b);
    /* 0078141b: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078141d: jne 0x781421 */ if (!fZ) goto L_00781421;
L_0078141f:; BB(0x0078141f);
    /* 0078141f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00781421:; BB(0x00781421);
    /* 00781421: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00781424: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00781425: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00781426: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00781427: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00781428: ret  */ FN_RET(0x007812c8); r_esp += 4; return;
L_00781429:; BB(0x00781429);
    /* 00781429: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0078142b: jmp 0x7813f8 */ goto L_007813f8;
}

void f_00781430(void) /* sub_781430 */
{
    FN_ENTER(0x00781430);
    /* 00781430: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00781431: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00781432: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00781433: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00781434: mov ecx, 0xa9b900 */ r_ecx = 0xa9b900u;
    /* 00781439: mov edx, 0x20 */ r_edx = 0x20u;
    /* 0078143e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00781440: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00781442: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00781444: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_00781446:; BB(0x00781446);
    /* 00781446: mov dword ptr [ecx + 0x18], 0 */ W32((u32)(r_ecx+0x18u), 0x0u);
    /* 0078144d: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0078144f: mov dword ptr [ecx + 8], edi */ W32((u32)(r_ecx+0x8u), r_edi);
    /* 00781452: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00781454: mov dword ptr [ecx + 4], edi */ W32((u32)(r_ecx+0x4u), r_edi);
    /* 00781457: mov dword ptr [ecx], ebx */ W32((u32)(r_ecx), r_ebx);
    /* 00781459: mov dword ptr [ecx + 0x14], ebp */ W32((u32)(r_ecx+0x14u), r_ebp);
    /* 0078145c: mov dword ptr [ecx + 0x10], esi */ W32((u32)(r_ecx+0x10u), r_esi);
    /* 0078145f: mov dword ptr [ecx + 0xc], eax */ W32((u32)(r_ecx+0xcu), r_eax);
    /* 00781462: add ecx, 0x1c */ {  u32 a = r_ecx; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00781465: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 00781468: jne 0x781446 */ if (!fZ) goto L_00781446;
L_0078146a:; BB(0x0078146a);
    /* 0078146a: mov dword ptr [0xa9bca4], 0xffffffff */ W32((u32)(0xa9bca4u), 0xffffffffu);
    /* 00781474: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00781476: mov edx, 0xa9b900 */ r_edx = 0xa9b900u;
    /* 0078147b: mov dword ptr [0xa9bc84], eax */ W32((u32)(0xa9bc84u), r_eax);
    /* 00781480: mov dword ptr [0xa9bca8], 0xbf800000 */ W32((u32)(0xa9bca8u), 0xbf800000u);
    /* 0078148a: mov dword ptr [0xa9bc88], edx */ W32((u32)(0xa9bc88u), r_edx);
    /* 00781490: mov dword ptr [0xa9bc9c], eax */ W32((u32)(0xa9bc9cu), r_eax);
    /* 00781495: mov dword ptr [0xa9bca0], edx */ W32((u32)(0xa9bca0u), r_edx);
    /* 0078149b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0078149c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0078149d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0078149e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0078149f: ret  */ FN_RET(0x00781430); r_esp += 4; return;
}

void f_007814a0(void) /* sub_7814A0 */
{
    FN_ENTER(0x007814a0);
    /* 007814a0: push 0x5000 */ { u32 v = 0x5000u; r_esp -= 4; W32(r_esp, v); }
    /* 007814a5: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x7814aau); f_008581c5();
    /* 007814aa: mov dword ptr [0xa9bc80], eax */ W32((u32)(0xa9bc80u), r_eax);
    /* 007814af: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007814b0: ret  */ FN_RET(0x007814a0); r_esp += 4; return;
}

void f_007814b4(void) /* sub_7814B4 */
{
    FN_ENTER(0x007814b4);
    /* 007814b4: call 0x781f9c */ r_esp -= 4; W32(r_esp, 0x7814b9u); f_00781f9c();
    /* 007814b9: ret  */ FN_RET(0x007814b4); r_esp += 4; return;
}

void f_007814bc(void) /* sub_7814BC */
{
    FN_ENTER(0x007814bc);
    /* 007814bc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007814bd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 007814bf: lea eax, [ebx + 0x54] */ r_eax = (u32)(r_ebx+0x54u);
    /* 007814c2: push 0x57 */ { u32 v = 0x57u; r_esp -= 4; W32(r_esp, v); }
    /* 007814c4: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 007814c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007814c9: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x7814ceu); f_00857dec();
    /* 007814ce: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007814d0: mov word ptr [ebx + 0x102], ax */ W16((u32)(r_ebx+0x102u), (u16)r_eax);
    /* 007814d7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007814da: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007814db: ret 4 */ FN_RET(0x007814bc); r_esp += 8; return;
}

void f_007814c0(void)
{
    FN_ENTER(0x007814c0);
    /* 007814c0: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007814c1: push esp */ { u32 v = r_esp; r_esp -= 4; W32(r_esp, v); }
    /* 007814c2: push 0x57 */ { u32 v = 0x57u; r_esp -= 4; W32(r_esp, v); }
    /* 007814c4: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 007814c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007814c9: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x7814ceu); f_00857dec();
    /* 007814ce: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007814d0: mov word ptr [ebx + 0x102], ax */ W16((u32)(r_ebx+0x102u), (u16)r_eax);
    /* 007814d7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007814da: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007814db: ret 4 */ FN_RET(0x007814c0); r_esp += 8; return;
}

void f_007814e0(void) /* sub_7814E0 */
{
    FN_ENTER(0x007814e0);
    /* 007814e0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007814e1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007814e2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007814e3: mov eax, ecx */ r_eax = r_ecx;
    /* 007814e5: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 007814e9: mov ebp, dword ptr [esp + 0x14] */ r_ebp = R32((u32)(r_esp+0x14u));
    /* 007814ed: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 007814ef: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007814f1: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007814f3: jle 0x781515 */ if ((fZ||fS!=fO)) goto L_00781515;
L_007814f5:; BB(0x007814f5);
    /* 007814f5: movzx esi, byte ptr [edi + 0x104] */ r_esi = (u32)R8((u32)(r_edi+0x104u));
    /* 007814fc: test esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00781502: je 0x78151b */ if (fZ) goto L_0078151b;
L_00781504:; BB(0x00781504);
    /* 00781504: cmp ecx, dword ptr [edi] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edi)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00781506: je 0x78151b */ if (fZ) goto L_0078151b;
L_00781508:; BB(0x00781508);
    /* 00781508: add edi, 0x108 */ {  u32 a = r_edi; u32 b = 0x108u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0078150e: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00781511: cmp edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00781513: jl 0x7814f5 */ if ((fS!=fO)) goto L_007814f5;
L_00781515:; BB(0x00781515);
    /* 00781515: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00781516: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00781517: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00781518: ret 8 */ FN_RET(0x007814e0); r_esp += 12; return;
L_0078151b:; BB(0x0078151b);
    /* 0078151b: mov esi, eax */ r_esi = r_eax;
    /* 0078151d: mov ecx, 0x108 */ r_ecx = 0x108u;
    /* 00781522: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00781523: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00781526: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 00781528: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00781529: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078152c: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 0078152e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0078152f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00781530: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00781531: ret 8 */ FN_RET(0x007814e0); r_esp += 12; return;
}

void f_00781534(void) /* sub_781534 */
{
    FN_ENTER(0x00781534);
    /* 00781534: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00781535: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00781536: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00781537: mov edx, ecx */ r_edx = r_ecx;
    /* 00781539: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 0078153d: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
    /* 00781541: mov ebp, dword ptr [edx] */ r_ebp = R32((u32)(r_edx));
    /* 00781543: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00781545: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00781547: jle 0x781565 */ if ((fZ||fS!=fO)) goto L_00781565;
L_00781549:; BB(0x00781549);
    /* 00781549: movsx eax, byte ptr [edi + 0x104] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edi+0x104u));
    /* 00781550: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00781552: je 0x78156d */ if (fZ) goto L_0078156d;
L_00781554:; BB(0x00781554);
    /* 00781554: cmp ebp, dword ptr [edi] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_edi)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00781556: je 0x781575 */ if (fZ) goto L_00781575;
L_00781558:; BB(0x00781558);
    /* 00781558: add edi, 0x108 */ {  u32 a = r_edi; u32 b = 0x108u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0078155e: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00781561: cmp ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00781563: jl 0x781549 */ if ((fS!=fO)) goto L_00781549;
L_00781565:; BB(0x00781565);
    /* 00781565: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00781567: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00781568: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00781569: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0078156a: ret 8 */ FN_RET(0x00781534); r_esp += 12; return;
L_0078156d:; BB(0x0078156d);
    /* 0078156d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078156f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00781570: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00781571: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00781572: ret 8 */ FN_RET(0x00781534); r_esp += 12; return;
L_00781575:; BB(0x00781575);
    /* 00781575: movzx ebp, byte ptr [edx + 0x104] */ r_ebp = (u32)R8((u32)(r_edx+0x104u));
    /* 0078157c: test ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00781582: je 0x7815a9 */ if (fZ) goto L_007815a9;
L_00781584:; BB(0x00781584);
    /* 00781584: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00781586: je 0x7815bc */ if (fZ) goto L_007815bc;
L_00781588:; BB(0x00781588);
    /* 00781588: movsx eax, byte ptr [edx + 0x107] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x107u));
    /* 0078158f: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00781592: jge 0x7815bc */ if ((fS==fO)) goto L_007815bc;
L_00781594:; BB(0x00781594);
    /* 00781594: mov esi, edx */ r_esi = r_edx;
    /* 00781596: mov ecx, 0x108 */ r_ecx = 0x108u;
    /* 0078159b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0078159c: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0078159f: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 007815a1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007815a2: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007815a5: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 007815a7: jmp 0x7815bc */ goto L_007815bc;
L_007815a9:; BB(0x007815a9);
    /* 007815a9: mov esi, edx */ r_esi = r_edx;
    /* 007815ab: mov ecx, 0x108 */ r_ecx = 0x108u;
    /* 007815b0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007815b1: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 007815b4: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 007815b6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007815b7: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007815ba: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
L_007815bc:; BB(0x007815bc);
    /* 007815bc: mov eax, 1 */ r_eax = 0x1u;
    /* 007815c1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007815c2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007815c3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007815c4: ret 8 */ FN_RET(0x00781534); r_esp += 12; return;
}

void f_007815c8(void) /* sub_7815C8 */
{
    FN_ENTER(0x007815c8);
    /* 007815c8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007815c9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007815ca: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007815cb: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 007815cf: mov ebp, dword ptr [esp + 0x14] */ r_ebp = R32((u32)(r_esp+0x14u));
    /* 007815d3: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 007815d7: lea eax, [ebx - 1] */ r_eax = (u32)(r_ebx+0xffffffffu);
    /* 007815da: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007815dc: jge 0x781627 */ if ((fS==fO)) goto L_00781627;
L_007815de:; BB(0x007815de);
    /* 007815de: lea edi, [ecx + ecx] */ r_edi = (u32)(r_ecx+r_ecx);
    /* 007815e1: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 007815e3: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 007815e5: lea eax, [edi + edi] */ r_eax = (u32)(r_edi+r_edi);
    /* 007815e8: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007815ea: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007815ec: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007815ee: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007815f0: add eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007815f2: lea edx, [ebp + eax] */ r_edx = (u32)(r_ebp+r_eax);
    /* 007815f6: lea eax, [eax + ebp + 0x108] */ r_eax = (u32)(r_eax+r_ebp+0x108u);
    /* 007815fd: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 007815ff: add ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00781601: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00781603: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00781605: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00781607: lea edi, [ecx + ecx] */ r_edi = (u32)(r_ecx+r_ecx);
    /* 0078160a: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0078160c: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0078160e: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00781610: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00781612: lea ecx, [edi + ecx - 0x108] */ r_ecx = (u32)(r_edi+r_ecx+0xfffffef8u);
    /* 00781619: and ecx, 0xfffffffc */ {  u32 a = r_ecx; u32 b = 0xfffffffcu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0078161c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0078161d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0078161e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0078161f: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x781624u); f_0086b6b8();
    /* 00781624: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00781627:; BB(0x00781627);
    /* 00781627: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 0078162a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0078162c: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0078162e: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 00781631: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00781633: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00781635: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00781637: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00781639: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0078163b: lea ecx, [ebp + edx - 0x108] */ r_ecx = (u32)(r_ebp+r_edx+0xfffffef8u);
    /* 00781642: call 0x781f88 */ r_esp -= 4; W32(r_esp, 0x781647u); f_00781f88();
    /* 00781647: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00781648: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00781649: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0078164a: ret  */ FN_RET(0x007815c8); r_esp += 4; return;
}

void f_0078164c(void) /* sub_78164C */
{
    FN_ENTER(0x0078164c);
    /* 0078164c: mov eax, 0xa9bcc0 */ r_eax = 0xa9bcc0u;
    /* 00781651: ret  */ FN_RET(0x0078164c); r_esp += 4; return;
}

void f_00781654(void) /* sub_781654 */
{
    FN_ENTER(0x00781654);
    /* 00781654: push 0x318 */ { u32 v = 0x318u; r_esp -= 4; W32(r_esp, v); }
    /* 00781659: mov edx, 0xa9bcc0 */ r_edx = 0xa9bcc0u;
    /* 0078165e: lea eax, [edx + 0x108] */ r_eax = (u32)(r_edx+0x108u);
    /* 00781664: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00781665: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00781666: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x78166bu); f_0086b6b8();
    /* 0078166b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0078166e: mov ecx, 0xa9bfd8 */ r_ecx = 0xa9bfd8u;
    /* 00781673: call 0x781f88 */ r_esp -= 4; W32(r_esp, 0x781678u); f_00781f88();
    /* 00781678: movzx eax, byte ptr [0xa9bdc4] */ r_eax = (u32)R8((u32)(0xa9bdc4u));
    /* 0078167f: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00781681: jne 0x781688 */ if (!fZ) goto L_00781688;
L_00781683:; BB(0x00781683);
    /* 00781683: call 0x717d10 */ r_esp -= 4; W32(r_esp, 0x781688u); f_00717d10();
L_00781688:; BB(0x00781688);
    /* 00781688: ret  */ FN_RET(0x00781654); r_esp += 4; return;
}

void f_0078168c(void) /* sub_78168C */
{
    FN_ENTER(0x0078168c);
    /* 0078168c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0078168d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0078168e: mov ebp, dword ptr [esp + 0xc] */ r_ebp = R32((u32)(r_esp+0xcu));
    /* 00781692: mov dword ptr [0xa9c0ec], 0 */ W32((u32)(0xa9c0ecu), 0x0u);
    /* 0078169c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0078169d: call 0x6c1bd4 */ r_esp -= 4; W32(r_esp, 0x7816a2u); f_006c1bd4();
    /* 007816a2: mov esi, eax */ r_esi = r_eax;
    /* 007816a4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007816a7: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007816a9: je 0x7816c4 */ if (fZ) goto L_007816c4;
L_007816ab:; BB(0x007816ab);
    /* 007816ab: add esi, 0x14e4 */ {  u32 a = r_esi; u32 b = 0x14e4u; u32 r = (a + b) & 0xffffffffu; r_esi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007816b1: je 0x7816c4 */ if (fZ) goto L_007816c4;
L_007816b3:; BB(0x007816b3);
    /* 007816b3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007816b4: mov ecx, esi */ r_ecx = r_esi;
    /* 007816b6: call 0x7816c8 */ r_esp -= 4; W32(r_esp, 0x7816bbu); f_007816c8();
    /* 007816bb: mov dword ptr [0xa9c0ec], esi */ W32((u32)(0xa9c0ecu), r_esi);
    /* 007816c1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007816c2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007816c3: ret  */ FN_RET(0x0078168c); r_esp += 4; return;
L_007816c4:; BB(0x007816c4);
    /* 007816c4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007816c5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007816c6: ret  */ FN_RET(0x0078168c); r_esp += 4; return;
}

void f_007816c8(void) /* sub_7816C8 */
{
    FN_ENTER(0x007816c8);
    /* 007816c8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007816c9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007816ca: mov edi, ecx */ r_edi = r_ecx;
    /* 007816cc: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 007816d0: call 0x6c1bcc */ r_esp -= 4; W32(r_esp, 0x7816d5u); f_006c1bcc();
    /* 007816d5: mov esi, eax */ r_esi = r_eax;
    /* 007816d7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007816da: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007816dc: je 0x78174e */ if (fZ) goto L_0078174e;
L_007816de:; BB(0x007816de);
    /* 007816de: mov edx, esi */ r_edx = r_esi;
    /* 007816e0: add edx, 0x370 */ {  u32 a = r_edx; u32 b = 0x370u; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007816e6: je 0x78174e */ if (fZ) goto L_0078174e;
L_007816e8:; BB(0x007816e8);
    /* 007816e8: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 007816ea: movzx edx, byte ptr [edi + 0x104] */ r_edx = (u32)R8((u32)(r_edi+0x104u));
    /* 007816f1: or edx, 0xffffff01 */ {  u32 a = r_edx; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 007816f7: mov byte ptr [edi + 0x104], dl */ W8((u32)(r_edi+0x104u), (u8)r_edx);
    /* 007816fd: lea eax, [edi + 4] */ r_eax = (u32)(r_edi+0x4u);
    /* 00781700: lea edx, [esi + 0x3c0] */ r_edx = (u32)(r_esi+0x3c0u);
    /* 00781706: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00781707: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00781708: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x78170du); f_00857dec();
    /* 0078170d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00781710: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00781712: mov word ptr [edi + 0x32], dx */ W16((u32)(r_edi+0x32u), (u16)r_edx);
    /* 00781716: movzx edx, byte ptr [esi + 0x3a1] */ r_edx = (u32)R8((u32)(r_esi+0x3a1u));
    /* 0078171d: mov byte ptr [edi + 0x107], dl */ W8((u32)(r_edi+0x107u), (u8)r_edx);
    /* 00781723: movzx eax, byte ptr [esi + 0x3a0] */ r_eax = (u32)R8((u32)(r_esi+0x3a0u));
    /* 0078172a: mov byte ptr [edi + 0x106], al */ W8((u32)(r_edi+0x106u), (u8)r_eax);
    /* 00781730: mov eax, dword ptr [0xa9cd44] */ r_eax = R32((u32)(0xa9cd44u));
    /* 00781735: mov byte ptr [edi + 0x105], al */ W8((u32)(r_edi+0x105u), (u8)r_eax);
    /* 0078173b: mov eax, dword ptr [0xaab284] */ r_eax = R32((u32)(0xaab284u));
    /* 00781740: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00781742: je 0x78174e */ if (fZ) goto L_0078174e;
L_00781744:; BB(0x00781744);
    /* 00781744: mov eax, dword ptr [eax + 0x12124] */ r_eax = R32((u32)(r_eax+0x12124u));
    /* 0078174a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078174c: jne 0x781753 */ if (!fZ) goto L_00781753;
L_0078174e:; BB(0x0078174e);
    /* 0078174e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0078174f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00781750: ret 4 */ FN_RET(0x007816c8); r_esp += 8; return;
L_00781753:; BB(0x00781753);
    /* 00781753: mov dword ptr [edi], eax */ W32((u32)(r_edi), r_eax);
    /* 00781755: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00781756: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00781757: ret 4 */ FN_RET(0x007816c8); r_esp += 8; return;
}

void f_0078175c(void) /* sub_78175C */
{
    FN_ENTER(0x0078175c);
    /* 0078175c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0078175d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0078175e: mov edi, ecx */ r_edi = r_ecx;
    /* 00781760: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00781764: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x781769u); f_0068d5a8();
    /* 00781769: mov ebx, eax */ r_ebx = r_eax;
    /* 0078176b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0078176e: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00781770: je 0x7817dc */ if (fZ) goto L_007817dc;
L_00781772:; BB(0x00781772);
    /* 00781772: movzx edx, byte ptr [edi + 0x104] */ r_edx = (u32)R8((u32)(r_edi+0x104u));
    /* 00781779: or edx, 0xffffff03 */ {  u32 a = r_edx; u32 b = 0xffffff03u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0078177f: mov byte ptr [edi + 0x104], dl */ W8((u32)(r_edi+0x104u), (u8)r_edx);
    /* 00781785: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00781787: call 0x6936b4 */ r_esp -= 4; W32(r_esp, 0x78178cu); f_006936b4();
    /* 0078178c: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 0078178e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0078178f: lea edx, [edi + 4] */ r_edx = (u32)(r_edi+0x4u);
    /* 00781792: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00781793: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x781798u); f_00857dec();
    /* 00781798: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0078179b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0078179d: mov word ptr [edi + 0x32], dx */ W16((u32)(r_edi+0x32u), (u16)r_edx);
    /* 007817a1: movzx edx, byte ptr [ebx + 0x961] */ r_edx = (u32)R8((u32)(r_ebx+0x961u));
    /* 007817a8: mov byte ptr [edi + 0x107], dl */ W8((u32)(r_edi+0x107u), (u8)r_edx);
    /* 007817ae: movzx edx, byte ptr [ebx + 0x960] */ r_edx = (u32)R8((u32)(r_ebx+0x960u));
    /* 007817b5: mov byte ptr [edi + 0x106], dl */ W8((u32)(r_edi+0x106u), (u8)r_edx);
    /* 007817bb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007817bd: call 0x68d3e0 */ r_esp -= 4; W32(r_esp, 0x7817c2u); f_0068d3e0();
    /* 007817c2: mov byte ptr [edi + 0x105], al */ W8((u32)(r_edi+0x105u), (u8)r_eax);
    /* 007817c8: mov edx, ebx */ r_edx = r_ebx;
    /* 007817ca: add edx, 0xeb0 */ {  u32 a = r_edx; u32 b = 0xeb0u; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 007817d0: je 0x7817dc */ if (fZ) goto L_007817dc;
L_007817d2:; BB(0x007817d2);
    /* 007817d2: mov eax, dword ptr [ebx + 0xeb4] */ r_eax = R32((u32)(r_ebx+0xeb4u));
    /* 007817d8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007817da: jne 0x7817e3 */ if (!fZ) goto L_007817e3;
L_007817dc:; BB(0x007817dc);
    /* 007817dc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007817de: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007817df: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007817e0: ret 4 */ FN_RET(0x0078175c); r_esp += 8; return;
L_007817e3:; BB(0x007817e3);
    /* 007817e3: mov dword ptr [edi], eax */ W32((u32)(r_edi), r_eax);
    /* 007817e5: mov eax, 1 */ r_eax = 0x1u;
    /* 007817ea: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007817eb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007817ec: ret 4 */ FN_RET(0x0078175c); r_esp += 8; return;
}

void f_007817f0(void) /* sub_7817F0 */
{
    FN_ENTER(0x007817f0);
    /* 007817f0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007817f1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007817f2: mov esi, ecx */ r_esi = r_ecx;
    /* 007817f4: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 007817f8: call 0x813670 */ r_esp -= 4; W32(r_esp, 0x7817fdu); f_00813670();
    /* 007817fd: mov ebp, eax */ r_ebp = r_eax;
    /* 007817ff: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00781802: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00781804: je 0x781855 */ if (fZ) goto L_00781855;
L_00781806:; BB(0x00781806);
    /* 00781806: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 00781808: movzx edx, byte ptr [esi + 0x104] */ r_edx = (u32)R8((u32)(r_esi+0x104u));
    /* 0078180f: or edx, 0xffffff03 */ {  u32 a = r_edx; u32 b = 0xffffff03u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00781815: mov byte ptr [esi + 0x104], dl */ W8((u32)(r_esi+0x104u), (u8)r_edx);
    /* 0078181b: lea edx, [ebp + 8] */ r_edx = (u32)(r_ebp+0x8u);
    /* 0078181e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0078181f: lea eax, [esi + 4] */ r_eax = (u32)(r_esi+0x4u);
    /* 00781822: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00781823: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x781828u); f_00857dec();
    /* 00781828: mov byte ptr [esi + 0x107], 0xc */ W8((u32)(r_esi+0x107u), 0xcu);
    /* 0078182f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00781831: mov word ptr [esi + 0x32], dx */ W16((u32)(r_esi+0x32u), (u16)r_edx);
    /* 00781835: mov byte ptr [esi + 0x106], 0xa */ W8((u32)(r_esi+0x106u), 0xau);
    /* 0078183c: mov byte ptr [esi + 0x105], 8 */ W8((u32)(r_esi+0x105u), 0x8u);
    /* 00781843: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00781846: mov dword ptr [esi], eax */ W32((u32)(r_esi), r_eax);
    /* 00781848: mov eax, 1 */ r_eax = 0x1u;
    /* 0078184d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00781850: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00781851: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00781852: ret 4 */ FN_RET(0x007817f0); r_esp += 8; return;
L_00781855:; BB(0x00781855);
    /* 00781855: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00781857: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00781858: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00781859: ret 4 */ FN_RET(0x007817f0); r_esp += 8; return;
}

void f_0078185c(void) /* sub_78185C */
{
    FN_ENTER(0x0078185c);
    /* 0078185c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0078185d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0078185f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00781861: call 0x781878 */ r_esp -= 4; W32(r_esp, 0x781866u); f_00781878();
    /* 00781866: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0078186a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0078186c: call 0x7816c8 */ r_esp -= 4; W32(r_esp, 0x781871u); f_007816c8();
    /* 00781871: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00781872: ret 4 */ FN_RET(0x0078185c); r_esp += 8; return;
}

void f_00781878(void) /* sub_781878 */
{
    FN_ENTER(0x00781878);
    /* 00781878: push 0x108 */ { u32 v = 0x108u; r_esp -= 4; W32(r_esp, v); }
    /* 0078187d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0078187f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00781880: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x781885u); f_0086b688();
    /* 00781885: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00781888: ret  */ FN_RET(0x00781878); r_esp += 4; return;
}

void f_0078188c(void) /* sub_78188C */
{
    FN_ENTER(0x0078188c);
    /* 0078188c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0078188d: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 00781891: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00781893: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 00781897: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00781899: jle 0x7818b4 */ if ((fZ||fS!=fO)) goto L_007818b4;
L_0078189b:; BB(0x0078189b);
    /* 0078189b: movzx ebx, byte ptr [ecx + 0x104] */ r_ebx = (u32)R8((u32)(r_ecx+0x104u));
    /* 007818a2: test bl, 1 */ {  u32 a = (u8)r_ebx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007818a5: je 0x7818b8 */ if (fZ) goto L_007818b8;
L_007818a7:; BB(0x007818a7);
    /* 007818a7: add ecx, 0x108 */ {  u32 a = r_ecx; u32 b = 0x108u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007818ad: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007818b0: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007818b2: jl 0x78189b */ if ((fS!=fO)) goto L_0078189b;
L_007818b4:; BB(0x007818b4);
    /* 007818b4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007818b6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007818b7: ret  */ FN_RET(0x0078188c); r_esp += 4; return;
L_007818b8:; BB(0x007818b8);
    /* 007818b8: mov eax, 1 */ r_eax = 0x1u;
    /* 007818bd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007818be: ret  */ FN_RET(0x0078188c); r_esp += 4; return;
}

void f_007818c0(void) /* sub_7818C0 */
{
    FN_ENTER(0x007818c0);
    /* 007818c0: mov edx, dword ptr [0xa95df4] */ r_edx = R32((u32)(0xa95df4u));
    /* 007818c6: add edx, 0x1f74 */ {  u32 a = r_edx; u32 b = 0x1f74u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007818cc: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_007818ce:; BB(0x007818ce);
    /* 007818ce: movzx eax, byte ptr [edx + 0x104] */ r_eax = (u32)R8((u32)(r_edx+0x104u));
    /* 007818d5: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007818d7: je 0x78190b */ if (fZ) goto L_0078190b;
L_007818d9:; BB(0x007818d9);
    /* 007818d9: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007818dc: lea eax, [edx + 0x1bc] */ r_eax = (u32)(r_edx+0x1bcu);
    /* 007818e2: movzx edx, byte ptr [edx + 0x2c0] */ r_edx = (u32)R8((u32)(r_edx+0x2c0u));
    /* 007818e9: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007818ec: je 0x78190b */ if (fZ) goto L_0078190b;
L_007818ee:; BB(0x007818ee);
    /* 007818ee: movzx edx, byte ptr [eax + 0x2c0] */ r_edx = (u32)R8((u32)(r_eax+0x2c0u));
    /* 007818f5: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007818f8: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007818fb: je 0x78190b */ if (fZ) goto L_0078190b;
L_007818fd:; BB(0x007818fd);
    /* 007818fd: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00781900: lea edx, [eax + 0x378] */ r_edx = (u32)(r_eax+0x378u);
    /* 00781906: cmp ecx, 0x69 */ {  u32 a = r_ecx; u32 b = 0x69u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00781909: jl 0x7818ce */ if ((fS!=fO)) goto L_007818ce;
L_0078190b:; BB(0x0078190b);
    /* 0078190b: mov eax, ecx */ r_eax = r_ecx;
    /* 0078190d: ret  */ FN_RET(0x007818c0); r_esp += 4; return;
}

void f_00781910(void) /* sub_781910 */
{
    FN_ENTER(0x00781910);
    /* 00781910: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00781911: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 00781915: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00781917: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0078191b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078191d: jle 0x781938 */ if ((fZ||fS!=fO)) goto L_00781938;
L_0078191f:; BB(0x0078191f);
    /* 0078191f: movzx ebx, byte ptr [edx + 0x104] */ r_ebx = (u32)R8((u32)(r_edx+0x104u));
    /* 00781926: test bl, 1 */ {  u32 a = (u8)r_ebx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00781929: je 0x781938 */ if (fZ) goto L_00781938;
L_0078192b:; BB(0x0078192b);
    /* 0078192b: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0078192e: add edx, 0x108 */ {  u32 a = r_edx; u32 b = 0x108u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00781934: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00781936: jl 0x78191f */ if ((fS!=fO)) goto L_0078191f;
L_00781938:; BB(0x00781938);
    /* 00781938: mov eax, ecx */ r_eax = r_ecx;
    /* 0078193a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0078193b: ret  */ FN_RET(0x00781910); r_esp += 4; return;
}

void f_0078193c(void) /* sub_78193C */
{
    FN_ENTER(0x0078193c);
    /* 0078193c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0078193d: mov byte ptr [esp], 6 */ W8((u32)(r_esp), 0x6u);
    /* 00781941: mov byte ptr [esp + 1], 1 */ W8((u32)(r_esp+0x1u), 0x1u);
    /* 00781946: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0078194a: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 0078194e: call 0x8005b0 */ r_esp -= 4; W32(r_esp, 0x781953u); f_008005b0();
    /* 00781953: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00781954: ret  */ FN_RET(0x0078193c); r_esp += 4; return;
}

void f_00781958(void) /* sub_781958 */
{
    FN_ENTER(0x00781958);
    /* 00781958: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00781959: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0078195a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0078195b: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 0078195f: lea esi, [edi + 4] */ r_esi = (u32)(r_edi+0x4u);
    /* 00781962: mov ecx, esi */ r_ecx = r_esi;
    /* 00781964: call 0x781f44 */ r_esp -= 4; W32(r_esp, 0x781969u); f_00781f44();
    /* 00781969: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078196b: je 0x781971 */ if (fZ) goto L_00781971;
L_0078196d:; BB(0x0078196d);
    /* 0078196d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0078196e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0078196f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00781970: ret  */ FN_RET(0x00781958); r_esp += 4; return;
L_00781971:; BB(0x00781971);
    /* 00781971: mov eax, esi */ r_eax = r_esi;
    /* 00781973: call 0x781acc */ r_esp -= 4; W32(r_esp, 0x781978u); f_00781acc();
    /* 00781978: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078197a: je 0x781980 */ if (fZ) goto L_00781980;
L_0078197c:; BB(0x0078197c);
    /* 0078197c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0078197d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0078197e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0078197f: ret  */ FN_RET(0x00781958); r_esp += 4; return;
L_00781980:; BB(0x00781980);
    /* 00781980: movzx edx, word ptr [0xa98474] */ r_edx = (u32)R16((u32)(0xa98474u));
    /* 00781987: or edx, 0xffff0002 */ {  u32 a = r_edx; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0078198d: mov word ptr [0xa98474], dx */ W16((u32)(0xa98474u), (u16)r_edx);
    /* 00781994: mov edx, dword ptr [edi + 4] */ r_edx = R32((u32)(r_edi+0x4u));
    /* 00781997: mov ecx, 0xa9bcc0 */ r_ecx = 0xa9bcc0u;
    /* 0078199c: movsx eax, byte ptr [ecx + 0x104] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ecx+0x104u));
    /* 007819a3: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007819a5: je 0x7819f7 */ if (fZ) goto L_007819f7;
L_007819a7:; BB(0x007819a7);
    /* 007819a7: cmp edx, dword ptr [ecx] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007819a9: je 0x781a7d */ if (fZ) goto L_00781a7d;
L_007819af:; BB(0x007819af);
    /* 007819af: mov ecx, 0xa9bdc8 */ r_ecx = 0xa9bdc8u;
    /* 007819b4: movsx eax, byte ptr [ecx + 0x104] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ecx+0x104u));
    /* 007819bb: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007819bd: je 0x7819f7 */ if (fZ) goto L_007819f7;
L_007819bf:; BB(0x007819bf);
    /* 007819bf: cmp edx, dword ptr [ecx] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007819c1: je 0x781a7d */ if (fZ) goto L_00781a7d;
L_007819c7:; BB(0x007819c7);
    /* 007819c7: mov ecx, 0xa9bed0 */ r_ecx = 0xa9bed0u;
    /* 007819cc: movsx eax, byte ptr [ecx + 0x104] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ecx+0x104u));
    /* 007819d3: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007819d5: je 0x7819f7 */ if (fZ) goto L_007819f7;
L_007819d7:; BB(0x007819d7);
    /* 007819d7: cmp edx, dword ptr [ecx] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007819d9: je 0x781a7d */ if (fZ) goto L_00781a7d;
L_007819df:; BB(0x007819df);
    /* 007819df: mov ecx, 0xa9bfd8 */ r_ecx = 0xa9bfd8u;
    /* 007819e4: movsx eax, byte ptr [ecx + 0x104] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ecx+0x104u));
    /* 007819eb: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007819ed: je 0x7819f7 */ if (fZ) goto L_007819f7;
L_007819ef:; BB(0x007819ef);
    /* 007819ef: cmp edx, dword ptr [ecx] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007819f1: je 0x781a7d */ if (fZ) goto L_00781a7d;
L_007819f7:; BB(0x007819f7);
    /* 007819f7: mov edi, 0xa9bcc0 */ r_edi = 0xa9bcc0u;
    /* 007819fc: movzx eax, byte ptr [edi + 0x104] */ r_eax = (u32)R8((u32)(r_edi+0x104u));
    /* 00781a03: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00781a05: je 0x781a68 */ if (fZ) goto L_00781a68;
L_00781a07:; BB(0x00781a07);
    /* 00781a07: cmp edx, dword ptr [edi] */ {  u32 a = r_edx; u32 b = R32((u32)(r_edi)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00781a09: je 0x781a68 */ if (fZ) goto L_00781a68;
L_00781a0b:; BB(0x00781a0b);
    /* 00781a0b: mov eax, 1 */ r_eax = 0x1u;
    /* 00781a10: mov edi, 0xa9bdc8 */ r_edi = 0xa9bdc8u;
    /* 00781a15: movzx ecx, byte ptr [edi + 0x104] */ r_ecx = (u32)R8((u32)(r_edi+0x104u));
    /* 00781a1c: test cl, 1 */ {  u32 a = (u8)r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00781a1f: je 0x781a63 */ if (fZ) goto L_00781a63;
L_00781a21:; BB(0x00781a21);
    /* 00781a21: cmp edx, dword ptr [edi] */ {  u32 a = r_edx; u32 b = R32((u32)(r_edi)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00781a23: je 0x781a63 */ if (fZ) goto L_00781a63;
L_00781a25:; BB(0x00781a25);
    /* 00781a25: mov eax, 2 */ r_eax = 0x2u;
    /* 00781a2a: mov edi, 0xa9bed0 */ r_edi = 0xa9bed0u;
    /* 00781a2f: movzx ecx, byte ptr [edi + 0x104] */ r_ecx = (u32)R8((u32)(r_edi+0x104u));
    /* 00781a36: test cl, 1 */ {  u32 a = (u8)r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00781a39: je 0x781a63 */ if (fZ) goto L_00781a63;
L_00781a3b:; BB(0x00781a3b);
    /* 00781a3b: cmp edx, dword ptr [edi] */ {  u32 a = r_edx; u32 b = R32((u32)(r_edi)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00781a3d: je 0x781a63 */ if (fZ) goto L_00781a63;
L_00781a3f:; BB(0x00781a3f);
    /* 00781a3f: mov eax, 3 */ r_eax = 0x3u;
    /* 00781a44: mov edi, 0xa9bfd8 */ r_edi = 0xa9bfd8u;
    /* 00781a49: movzx ecx, byte ptr [edi + 0x104] */ r_ecx = (u32)R8((u32)(r_edi+0x104u));
    /* 00781a50: test cl, 1 */ {  u32 a = (u8)r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00781a53: je 0x781a63 */ if (fZ) goto L_00781a63;
L_00781a55:; BB(0x00781a55);
    /* 00781a55: cmp edx, dword ptr [edi] */ {  u32 a = r_edx; u32 b = R32((u32)(r_edi)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00781a57: je 0x781a63 */ if (fZ) goto L_00781a63;
L_00781a59:; BB(0x00781a59);
    /* 00781a59: mov eax, 4 */ r_eax = 0x4u;
    /* 00781a5e: mov edi, 0xa9c0e0 */ r_edi = 0xa9c0e0u;
L_00781a63:; BB(0x00781a63);
    /* 00781a63: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00781a66: jge 0x781a79 */ if ((fS==fO)) goto L_00781a79;
L_00781a68:; BB(0x00781a68);
    /* 00781a68: mov ecx, 0x108 */ r_ecx = 0x108u;
    /* 00781a6d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00781a6e: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00781a71: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 00781a73: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00781a74: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00781a77: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
L_00781a79:; BB(0x00781a79);
    /* 00781a79: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00781a7a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00781a7b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00781a7c: ret  */ FN_RET(0x00781958); r_esp += 4; return;
L_00781a7d:; BB(0x00781a7d);
    /* 00781a7d: movzx edx, byte ptr [edi + 0x108] */ r_edx = (u32)R8((u32)(r_edi+0x108u));
    /* 00781a84: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00781a87: je 0x781ab0 */ if (fZ) goto L_00781ab0;
L_00781a89:; BB(0x00781a89);
    /* 00781a89: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00781a8b: je 0x781ac3 */ if (fZ) goto L_00781ac3;
L_00781a8d:; BB(0x00781a8d);
    /* 00781a8d: movsx edx, byte ptr [edi + 0x10b] */ r_edx = (u32)(i32)(i8)R8((u32)(r_edi+0x10bu));
    /* 00781a94: cmp edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00781a97: jge 0x781ac3 */ if ((fS==fO)) goto L_00781ac3;
L_00781a99:; BB(0x00781a99);
    /* 00781a99: mov edi, ecx */ r_edi = r_ecx;
    /* 00781a9b: mov ecx, 0x108 */ r_ecx = 0x108u;
    /* 00781aa0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00781aa1: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00781aa4: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 00781aa6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00781aa7: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00781aaa: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 00781aac: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00781aad: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00781aae: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00781aaf: ret  */ FN_RET(0x00781958); r_esp += 4; return;
L_00781ab0:; BB(0x00781ab0);
    /* 00781ab0: mov edi, ecx */ r_edi = r_ecx;
    /* 00781ab2: mov ecx, 0x108 */ r_ecx = 0x108u;
    /* 00781ab7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00781ab8: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00781abb: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 00781abd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00781abe: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00781ac1: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
L_00781ac3:; BB(0x00781ac3);
    /* 00781ac3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00781ac4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00781ac5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00781ac6: ret  */ FN_RET(0x00781958); r_esp += 4; return;
}

void f_00781acc(void) /* sub_781ACC */
{
    FN_ENTER(0x00781acc);
    /* 00781acc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00781acd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00781ace: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00781acf: mov ebp, eax */ r_ebp = r_eax;
    /* 00781ad1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00781ad3: call 0x781f44 */ r_esp -= 4; W32(r_esp, 0x781ad8u); f_00781f44();
    /* 00781ad8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00781ada: je 0x781ae2 */ if (fZ) goto L_00781ae2;
L_00781adc:; BB(0x00781adc);
    /* 00781adc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00781ade: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00781adf: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00781ae0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00781ae1: ret  */ FN_RET(0x00781acc); r_esp += 4; return;
L_00781ae2:; BB(0x00781ae2);
    /* 00781ae2: mov edi, dword ptr [0xa95df4] */ r_edi = R32((u32)(0xa95df4u));
    /* 00781ae8: mov ecx, dword ptr [ebp] */ r_ecx = R32((u32)(r_ebp));
    /* 00781aeb: add edi, 0x1f74 */ {  u32 a = r_edi; u32 b = 0x1f74u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00781af1: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_00781af3:; BB(0x00781af3);
    /* 00781af3: movsx eax, byte ptr [edi + 0x104] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edi+0x104u));
    /* 00781afa: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00781afc: je 0x781b3a */ if (fZ) goto L_00781b3a;
L_00781afe:; BB(0x00781afe);
    /* 00781afe: cmp ecx, dword ptr [edi] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edi)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00781b00: je 0x781b40 */ if (fZ) goto L_00781b40;
L_00781b02:; BB(0x00781b02);
    /* 00781b02: add edi, 0x1bc */ {  u32 a = r_edi; u32 b = 0x1bcu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00781b08: movsx eax, byte ptr [edi + 0x104] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edi+0x104u));
    /* 00781b0f: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00781b11: je 0x781b3a */ if (fZ) goto L_00781b3a;
L_00781b13:; BB(0x00781b13);
    /* 00781b13: cmp ecx, dword ptr [edi] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edi)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00781b15: je 0x781b40 */ if (fZ) goto L_00781b40;
L_00781b17:; BB(0x00781b17);
    /* 00781b17: add edi, 0x1bc */ {  u32 a = r_edi; u32 b = 0x1bcu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00781b1d: movsx eax, byte ptr [edi + 0x104] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edi+0x104u));
    /* 00781b24: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00781b26: je 0x781b3a */ if (fZ) goto L_00781b3a;
L_00781b28:; BB(0x00781b28);
    /* 00781b28: cmp ecx, dword ptr [edi] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edi)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00781b2a: je 0x781b40 */ if (fZ) goto L_00781b40;
L_00781b2c:; BB(0x00781b2c);
    /* 00781b2c: add edi, 0x1bc */ {  u32 a = r_edi; u32 b = 0x1bcu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00781b32: add edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00781b35: cmp edx, 0x69 */ {  u32 a = r_edx; u32 b = 0x69u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00781b38: jl 0x781af3 */ if ((fS!=fO)) goto L_00781af3;
L_00781b3a:; BB(0x00781b3a);
    /* 00781b3a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00781b3c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00781b3d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00781b3e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00781b3f: ret  */ FN_RET(0x00781acc); r_esp += 4; return;
L_00781b40:; BB(0x00781b40);
    /* 00781b40: movzx edx, byte ptr [ebp + 0x104] */ r_edx = (u32)R8((u32)(r_ebp+0x104u));
    /* 00781b47: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00781b4a: je 0x781b71 */ if (fZ) goto L_00781b71;
L_00781b4c:; BB(0x00781b4c);
    /* 00781b4c: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00781b4e: je 0x781b84 */ if (fZ) goto L_00781b84;
L_00781b50:; BB(0x00781b50);
    /* 00781b50: movsx edx, byte ptr [ebp + 0x107] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+0x107u));
    /* 00781b57: cmp edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00781b5a: jge 0x781b84 */ if ((fS==fO)) goto L_00781b84;
L_00781b5c:; BB(0x00781b5c);
    /* 00781b5c: mov esi, ebp */ r_esi = r_ebp;
    /* 00781b5e: mov ecx, 0x108 */ r_ecx = 0x108u;
    /* 00781b63: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00781b64: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00781b67: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 00781b69: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00781b6a: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00781b6d: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 00781b6f: jmp 0x781b84 */ goto L_00781b84;
L_00781b71:; BB(0x00781b71);
    /* 00781b71: mov esi, ebp */ r_esi = r_ebp;
    /* 00781b73: mov ecx, 0x108 */ r_ecx = 0x108u;
    /* 00781b78: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00781b79: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00781b7c: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 00781b7e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00781b7f: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00781b82: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
L_00781b84:; BB(0x00781b84);
    /* 00781b84: mov eax, dword ptr [0xaab284] */ r_eax = R32((u32)(0xaab284u));
    /* 00781b89: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00781b8b: je 0x781b95 */ if (fZ) goto L_00781b95;
L_00781b8d:; BB(0x00781b8d);
    /* 00781b8d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00781b8e: mov ecx, eax */ r_ecx = r_eax;
    /* 00781b90: call 0x7f3014 */ r_esp -= 4; W32(r_esp, 0x781b95u); f_007f3014();
L_00781b95:; BB(0x00781b95);
    /* 00781b95: mov eax, 1 */ r_eax = 0x1u;
    /* 00781b9a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00781b9b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00781b9c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00781b9d: ret  */ FN_RET(0x00781acc); r_esp += 4; return;
}

void f_00781ba0(void) /* sub_781BA0 */
{
    FN_ENTER(0x00781ba0);
    /* 00781ba0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00781ba1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00781ba2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00781ba3: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 00781ba7: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00781ba9: call 0x781f44 */ r_esp -= 4; W32(r_esp, 0x781baeu); f_00781f44();
    /* 00781bae: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00781bb0: je 0x781bb6 */ if (fZ) goto L_00781bb6;
L_00781bb2:; BB(0x00781bb2);
    /* 00781bb2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00781bb3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00781bb4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00781bb5: ret  */ FN_RET(0x00781ba0); r_esp += 4; return;
L_00781bb6:; BB(0x00781bb6);
    /* 00781bb6: mov edi, dword ptr [0xa95df4] */ r_edi = R32((u32)(0xa95df4u));
    /* 00781bbc: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00781bbf: add edi, 0x1f74 */ {  u32 a = r_edi; u32 b = 0x1f74u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00781bc5: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_00781bc7:; BB(0x00781bc7);
    /* 00781bc7: movzx ecx, byte ptr [edi + 0x104] */ r_ecx = (u32)R8((u32)(r_edi+0x104u));
    /* 00781bce: test cl, 1 */ {  u32 a = (u8)r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00781bd1: je 0x781c1e */ if (fZ) goto L_00781c1e;
L_00781bd3:; BB(0x00781bd3);
    /* 00781bd3: cmp eax, dword ptr [edi] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edi)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00781bd5: je 0x781c1e */ if (fZ) goto L_00781c1e;
L_00781bd7:; BB(0x00781bd7);
    /* 00781bd7: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00781bda: add edi, 0x1bc */ {  u32 a = r_edi; u32 b = 0x1bcu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00781be0: movzx ecx, byte ptr [edi + 0x104] */ r_ecx = (u32)R8((u32)(r_edi+0x104u));
    /* 00781be7: test cl, 1 */ {  u32 a = (u8)r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00781bea: je 0x781c19 */ if (fZ) goto L_00781c19;
L_00781bec:; BB(0x00781bec);
    /* 00781bec: cmp eax, dword ptr [edi] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edi)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00781bee: je 0x781c19 */ if (fZ) goto L_00781c19;
L_00781bf0:; BB(0x00781bf0);
    /* 00781bf0: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00781bf3: add edi, 0x1bc */ {  u32 a = r_edi; u32 b = 0x1bcu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00781bf9: movzx ecx, byte ptr [edi + 0x104] */ r_ecx = (u32)R8((u32)(r_edi+0x104u));
    /* 00781c00: test cl, 1 */ {  u32 a = (u8)r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00781c03: je 0x781c19 */ if (fZ) goto L_00781c19;
L_00781c05:; BB(0x00781c05);
    /* 00781c05: cmp eax, dword ptr [edi] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edi)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00781c07: je 0x781c19 */ if (fZ) goto L_00781c19;
L_00781c09:; BB(0x00781c09);
    /* 00781c09: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00781c0c: add edi, 0x1bc */ {  u32 a = r_edi; u32 b = 0x1bcu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00781c12: cmp edx, 0x69 */ {  u32 a = r_edx; u32 b = 0x69u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00781c15: jl 0x781bc7 */ if ((fS!=fO)) goto L_00781bc7;
L_00781c17:; BB(0x00781c17);
    /* 00781c17: jmp 0x781c31 */ goto L_00781c31;
L_00781c19:; BB(0x00781c19);
    /* 00781c19: cmp edx, 0x69 */ {  u32 a = r_edx; u32 b = 0x69u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00781c1c: jge 0x781c31 */ if ((fS==fO)) goto L_00781c31;
L_00781c1e:; BB(0x00781c1e);
    /* 00781c1e: mov esi, ebp */ r_esi = r_ebp;
    /* 00781c20: mov ecx, 0x108 */ r_ecx = 0x108u;
    /* 00781c25: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00781c26: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00781c29: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 00781c2b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00781c2c: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00781c2f: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
L_00781c31:; BB(0x00781c31);
    /* 00781c31: call 0x6c28b0 */ r_esp -= 4; W32(r_esp, 0x781c36u); f_006c28b0();
    /* 00781c36: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00781c37: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00781c38: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00781c39: ret  */ FN_RET(0x00781ba0); r_esp += 4; return;
}

void f_00781c3c(void) /* sub_781C3C */
{
    FN_ENTER(0x00781c3c);
    /* 00781c3c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00781c3d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00781c3e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00781c3f: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 00781c43: mov esi, dword ptr [0xa95df4] */ r_esi = R32((u32)(0xa95df4u));
    /* 00781c49: lea eax, [esi + 0x1f74] */ r_eax = (u32)(r_esi+0x1f74u);
    /* 00781c4f: cmp ebx, 0x69 */ {  u32 a = r_ebx; u32 b = 0x69u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00781c52: jge 0x781cc3 */ if ((fS==fO)) goto L_00781cc3;
L_00781c54:; BB(0x00781c54);
    /* 00781c54: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00781c56: je 0x781cd4 */ if (fZ) goto L_00781cd4;
L_00781c58:; BB(0x00781c58);
    /* 00781c58: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 00781c5e: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 00781c61: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00781c63: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00781c65: sub eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00781c67: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00781c69: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00781c6b: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00781c6d: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00781c6f: sub eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00781c71: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00781c73: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00781c75: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00781c77: je 0x781c8a */ if (fZ) goto L_00781c8a;
L_00781c79:; BB(0x00781c79);
    /* 00781c79: lea ebp, [eax + esi + 0x1f74] */ r_ebp = (u32)(r_eax+r_esi+0x1f74u);
    /* 00781c80: push dword ptr [ebp] */ { u32 v = R32((u32)(r_ebp)); r_esp -= 4; W32(r_esp, v); }
    /* 00781c83: call 0x7f3074 */ r_esp -= 4; W32(r_esp, 0x781c88u); f_007f3074();
    /* 00781c88: jmp 0x781c91 */ goto L_00781c91;
L_00781c8a:; BB(0x00781c8a);
    /* 00781c8a: lea ebp, [eax + esi + 0x1f74] */ r_ebp = (u32)(r_eax+r_esi+0x1f74u);
L_00781c91:; BB(0x00781c91);
    /* 00781c91: lea eax, [ebp + 0x1bc] */ r_eax = (u32)(r_ebp+0x1bcu);
    /* 00781c97: neg ebx */ { u32 x = r_ebx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 00781c99: lea edx, [ebx + ebx] */ r_edx = (u32)(r_ebx+r_ebx);
    /* 00781c9c: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00781c9e: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00781ca0: sub edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00781ca2: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00781ca4: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00781ca6: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00781ca8: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00781caa: sub edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00781cac: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00781cae: lea ecx, [edx + edx + 0xb460] */ r_ecx = (u32)(r_edx+r_edx+0xb460u);
    /* 00781cb5: and ecx, 0xfffffffc */ {  u32 a = r_ecx; u32 b = 0xfffffffcu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00781cb8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00781cb9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00781cba: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00781cbb: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x781cc0u); f_0086b6b8();
    /* 00781cc0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00781cc3:; BB(0x00781cc3);
    /* 00781cc3: add esi, 0xd3d4 */ {  u32 a = r_esi; u32 b = 0xd3d4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00781cc9: mov ecx, esi */ r_ecx = r_esi;
    /* 00781ccb: call 0x781f88 */ r_esp -= 4; W32(r_esp, 0x781cd0u); f_00781f88();
    /* 00781cd0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00781cd1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00781cd2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00781cd3: ret  */ FN_RET(0x00781c3c); r_esp += 4; return;
L_00781cd4:; BB(0x00781cd4);
    /* 00781cd4: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 00781cd7: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00781cd9: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00781cdb: sub eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00781cdd: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00781cdf: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00781ce1: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00781ce3: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00781ce5: sub eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00781ce7: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00781ce9: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00781ceb: lea ebp, [eax + esi + 0x1f74] */ r_ebp = (u32)(r_eax+r_esi+0x1f74u);
    /* 00781cf2: jmp 0x781c91 */ goto L_00781c91;
}

void f_00781cf4(void) /* sub_781CF4 */
{
    FN_ENTER(0x00781cf4);
    /* 00781cf4: mov ecx, dword ptr [0xa95df4] */ r_ecx = R32((u32)(0xa95df4u));
    /* 00781cfa: add ecx, 0x1f74 */ {  u32 a = r_ecx; u32 b = 0x1f74u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00781d00: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_00781d02:; BB(0x00781d02);
    /* 00781d02: movzx eax, byte ptr [ecx + 0x104] */ r_eax = (u32)R8((u32)(r_ecx+0x104u));
    /* 00781d09: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00781d0b: je 0x781d3c */ if (fZ) goto L_00781d3c;
L_00781d0d:; BB(0x00781d0d);
    /* 00781d0d: lea eax, [ecx + 0x1bc] */ r_eax = (u32)(r_ecx+0x1bcu);
    /* 00781d13: movzx ecx, byte ptr [ecx + 0x2c0] */ r_ecx = (u32)R8((u32)(r_ecx+0x2c0u));
    /* 00781d1a: test cl, 1 */ {  u32 a = (u8)r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00781d1d: je 0x781d3c */ if (fZ) goto L_00781d3c;
L_00781d1f:; BB(0x00781d1f);
    /* 00781d1f: movzx ecx, byte ptr [eax + 0x2c0] */ r_ecx = (u32)R8((u32)(r_eax+0x2c0u));
    /* 00781d26: test cl, 1 */ {  u32 a = (u8)r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00781d29: je 0x781d3c */ if (fZ) goto L_00781d3c;
L_00781d2b:; BB(0x00781d2b);
    /* 00781d2b: lea ecx, [eax + 0x378] */ r_ecx = (u32)(r_eax+0x378u);
    /* 00781d31: add edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00781d34: cmp edx, 0x69 */ {  u32 a = r_edx; u32 b = 0x69u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00781d37: jl 0x781d02 */ if ((fS!=fO)) goto L_00781d02;
L_00781d39:; BB(0x00781d39);
    /* 00781d39: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00781d3b: ret  */ FN_RET(0x00781cf4); r_esp += 4; return;
L_00781d3c:; BB(0x00781d3c);
    /* 00781d3c: mov eax, 1 */ r_eax = 0x1u;
    /* 00781d41: ret  */ FN_RET(0x00781cf4); r_esp += 4; return;
}

void f_00781d44(void) /* sub_781D44 */
{
    FN_ENTER(0x00781d44);
    /* 00781d44: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00781d45: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00781d46: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00781d47: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00781d48: sub esp, 0x1c0 */ {  u32 a = r_esp; u32 b = 0x1c0u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00781d4e: mov eax, dword ptr [esp + 0x1d4] */ r_eax = R32((u32)(r_esp+0x1d4u));
    /* 00781d55: call 0x781dd8 */ r_esp -= 4; W32(r_esp, 0x781d5au); f_00781dd8();
    /* 00781d5a: mov ebp, eax */ r_ebp = r_eax;
    /* 00781d5c: mov eax, dword ptr [esp + 0x1d8] */ r_eax = R32((u32)(r_esp+0x1d8u));
    /* 00781d63: call 0x781dd8 */ r_esp -= 4; W32(r_esp, 0x781d68u); f_00781dd8();
    /* 00781d68: mov ebx, eax */ r_ebx = r_eax;
    /* 00781d6a: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00781d6c: je 0x781dc9 */ if (fZ) goto L_00781dc9;
L_00781d6e:; BB(0x00781d6e);
    /* 00781d6e: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00781d70: je 0x781dc9 */ if (fZ) goto L_00781dc9;
L_00781d72:; BB(0x00781d72);
    /* 00781d72: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 00781d78: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00781d7a: je 0x781d86 */ if (fZ) goto L_00781d86;
L_00781d7c:; BB(0x00781d7c);
    /* 00781d7c: push dword ptr [ebx] */ { u32 v = R32((u32)(r_ebx)); r_esp -= 4; W32(r_esp, v); }
    /* 00781d7e: push dword ptr [ebp] */ { u32 v = R32((u32)(r_ebp)); r_esp -= 4; W32(r_esp, v); }
    /* 00781d81: call 0x7f31a8 */ r_esp -= 4; W32(r_esp, 0x781d86u); f_007f31a8();
L_00781d86:; BB(0x00781d86);
    /* 00781d86: lea edi, [esp + 4] */ r_edi = (u32)(r_esp+0x4u);
    /* 00781d8a: mov esi, ebp */ r_esi = r_ebp;
    /* 00781d8c: mov ecx, 0x1bc */ r_ecx = 0x1bcu;
    /* 00781d91: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00781d92: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00781d95: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 00781d97: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00781d98: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00781d9b: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 00781d9d: mov edi, ebp */ r_edi = r_ebp;
    /* 00781d9f: mov esi, ebx */ r_esi = r_ebx;
    /* 00781da1: mov ecx, 0x1bc */ r_ecx = 0x1bcu;
    /* 00781da6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00781da7: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00781daa: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 00781dac: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00781dad: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00781db0: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 00781db2: lea esi, [esp + 4] */ r_esi = (u32)(r_esp+0x4u);
    /* 00781db6: mov edi, ebx */ r_edi = r_ebx;
    /* 00781db8: mov ecx, 0x1bc */ r_ecx = 0x1bcu;
    /* 00781dbd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00781dbe: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00781dc1: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 00781dc3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00781dc4: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00781dc7: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
L_00781dc9:; BB(0x00781dc9);
    /* 00781dc9: add esp, 0x1c0 */ {  u32 a = r_esp; u32 b = 0x1c0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00781dcf: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00781dd0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00781dd1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00781dd2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00781dd3: ret  */ FN_RET(0x00781d44); r_esp += 4; return;
}

void f_00781dd4(void) /* sub_781DD4 */
{
    FN_ENTER(0x00781dd4);
    /* 00781dd4: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00781dd8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00781dda: jl 0x781de1 */ if ((fS!=fO)) goto L_00781de1;
L_00781ddc:; BB(0x00781ddc);
    /* 00781ddc: cmp eax, 0x69 */ {  u32 a = r_eax; u32 b = 0x69u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00781ddf: jl 0x781de4 */ if ((fS!=fO)) goto L_00781de4;
L_00781de1:; BB(0x00781de1);
    /* 00781de1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00781de3: ret  */ FN_RET(0x00781dd4); r_esp += 4; return;
L_00781de4:; BB(0x00781de4);
    /* 00781de4: mov ecx, dword ptr [0xa95df4] */ r_ecx = R32((u32)(0xa95df4u));
    /* 00781dea: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 00781ded: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00781def: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00781df1: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00781df3: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00781df5: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00781df7: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00781df9: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00781dfb: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00781dfd: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00781dff: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00781e01: lea eax, [edx + ecx + 0x1f74] */ r_eax = (u32)(r_edx+r_ecx+0x1f74u);
    /* 00781e08: ret  */ FN_RET(0x00781dd4); r_esp += 4; return;
}

void f_00781dd8(void) /* sub_781DD8 */
{
    FN_ENTER(0x00781dd8);
    /* 00781dd8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00781dda: jl 0x781de1 */ if ((fS!=fO)) goto L_00781de1;
L_00781ddc:; BB(0x00781ddc);
    /* 00781ddc: cmp eax, 0x69 */ {  u32 a = r_eax; u32 b = 0x69u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00781ddf: jl 0x781de4 */ if ((fS!=fO)) goto L_00781de4;
L_00781de1:; BB(0x00781de1);
    /* 00781de1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00781de3: ret  */ FN_RET(0x00781dd8); r_esp += 4; return;
L_00781de4:; BB(0x00781de4);
    /* 00781de4: mov ecx, dword ptr [0xa95df4] */ r_ecx = R32((u32)(0xa95df4u));
    /* 00781dea: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 00781ded: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00781def: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00781df1: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00781df3: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00781df5: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00781df7: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00781df9: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00781dfb: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00781dfd: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00781dff: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00781e01: lea eax, [edx + ecx + 0x1f74] */ r_eax = (u32)(r_edx+r_ecx+0x1f74u);
    /* 00781e08: ret  */ FN_RET(0x00781dd8); r_esp += 4; return;
}

void f_00781e0c(void) /* sub_781E0C */
{
    FN_ENTER(0x00781e0c);
    /* 00781e0c: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 00781e10: mov edx, dword ptr [0xa95df4] */ r_edx = R32((u32)(0xa95df4u));
    /* 00781e16: add edx, 0x1f74 */ {  u32 a = r_edx; u32 b = 0x1f74u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00781e1c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00781e1e:; BB(0x00781e1e);
    /* 00781e1e: cmp ecx, dword ptr [edx] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00781e20: je 0x781e47 */ if (fZ) goto L_00781e47;
L_00781e22:; BB(0x00781e22);
    /* 00781e22: add edx, 0x1bc */ {  u32 a = r_edx; u32 b = 0x1bcu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00781e28: cmp ecx, dword ptr [edx] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00781e2a: je 0x781e47 */ if (fZ) goto L_00781e47;
L_00781e2c:; BB(0x00781e2c);
    /* 00781e2c: add edx, 0x1bc */ {  u32 a = r_edx; u32 b = 0x1bcu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00781e32: cmp ecx, dword ptr [edx] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00781e34: je 0x781e47 */ if (fZ) goto L_00781e47;
L_00781e36:; BB(0x00781e36);
    /* 00781e36: add edx, 0x1bc */ {  u32 a = r_edx; u32 b = 0x1bcu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00781e3c: add eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00781e3f: cmp eax, 0x69 */ {  u32 a = r_eax; u32 b = 0x69u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00781e42: jl 0x781e1e */ if ((fS!=fO)) goto L_00781e1e;
L_00781e44:; BB(0x00781e44);
    /* 00781e44: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00781e46: ret  */ FN_RET(0x00781e0c); r_esp += 4; return;
L_00781e47:; BB(0x00781e47);
    /* 00781e47: mov eax, edx */ r_eax = r_edx;
    /* 00781e49: ret  */ FN_RET(0x00781e0c); r_esp += 4; return;
}

void f_00781e3a(void)
{
    FN_ENTER(0x00781e3a);
    goto L_00781e3a;
L_00781e1e:; BB(0x00781e1e);
    /* 00781e1e: cmp ecx, dword ptr [edx] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00781e20: je 0x781e47 */ if (fZ) goto L_00781e47;
L_00781e22:; BB(0x00781e22);
    /* 00781e22: add edx, 0x1bc */ {  u32 a = r_edx; u32 b = 0x1bcu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00781e28: cmp ecx, dword ptr [edx] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00781e2a: je 0x781e47 */ if (fZ) goto L_00781e47;
L_00781e2c:; BB(0x00781e2c);
    /* 00781e2c: add edx, 0x1bc */ {  u32 a = r_edx; u32 b = 0x1bcu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00781e32: cmp ecx, dword ptr [edx] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00781e34: je 0x781e47 */ if (fZ) goto L_00781e47;
L_00781e36:; BB(0x00781e36);
    /* 00781e36: add edx, 0x1bc */ {  u32 a = r_edx; u32 b = 0x1bcu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
L_00781e3a:; BB(0x00781e3a);
    /* 00781e3a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00781e3c: add eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00781e3f: cmp eax, 0x69 */ {  u32 a = r_eax; u32 b = 0x69u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00781e42: jl 0x781e1e */ if ((fS!=fO)) goto L_00781e1e;
L_00781e44:; BB(0x00781e44);
    /* 00781e44: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00781e46: ret  */ FN_RET(0x00781e3a); r_esp += 4; return;
L_00781e47:; BB(0x00781e47);
    /* 00781e47: mov eax, edx */ r_eax = r_edx;
    /* 00781e49: ret  */ FN_RET(0x00781e3a); r_esp += 4; return;
}

void f_00781e4c(void) /* sub_781E4C */
{
    FN_ENTER(0x00781e4c);
    /* 00781e4c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00781e4d: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00781e51: call 0x781dd8 */ r_esp -= 4; W32(r_esp, 0x781e56u); f_00781dd8();
    /* 00781e56: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00781e58: je 0x781e61 */ if (fZ) goto L_00781e61;
L_00781e5a:; BB(0x00781e5a);
    /* 00781e5a: add eax, 0x10c */ {  u32 a = r_eax; u32 b = 0x10cu; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00781e5f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00781e60: ret  */ FN_RET(0x00781e4c); r_esp += 4; return;
L_00781e61:; BB(0x00781e61);
    /* 00781e61: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00781e63: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00781e64: ret  */ FN_RET(0x00781e4c); r_esp += 4; return;
}

void f_00781e68(void) /* sub_781E68 */
{
    FN_ENTER(0x00781e68);
    /* 00781e68: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00781e69: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00781e6a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00781e6b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00781e6c: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 00781e70: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00781e72: je 0x781eb0 */ if (fZ) goto L_00781eb0;
L_00781e74:; BB(0x00781e74);
    /* 00781e74: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00781e78: call 0x781dd8 */ r_esp -= 4; W32(r_esp, 0x781e7du); f_00781dd8();
    /* 00781e7d: mov esi, eax */ r_esi = r_eax;
    /* 00781e7f: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00781e81: je 0x781eb0 */ if (fZ) goto L_00781eb0;
L_00781e83:; BB(0x00781e83);
    /* 00781e83: push 0x57 */ { u32 v = 0x57u; r_esp -= 4; W32(r_esp, v); }
    /* 00781e85: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00781e86: lea ebx, [esi + 0x10c] */ r_ebx = (u32)(r_esi+0x10cu);
    /* 00781e8c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00781e8d: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x781e92u); f_00857dec();
    /* 00781e92: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00781e95: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00781e97: mov word ptr [esi + 0x1ba], dx */ W16((u32)(r_esi+0x1bau), (u16)r_edx);
    /* 00781e9e: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 00781ea4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00781ea6: je 0x781eb0 */ if (fZ) goto L_00781eb0;
L_00781ea8:; BB(0x00781ea8);
    /* 00781ea8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00781ea9: push dword ptr [esi] */ { u32 v = R32((u32)(r_esi)); r_esp -= 4; W32(r_esp, v); }
    /* 00781eab: call 0x7f30ac */ r_esp -= 4; W32(r_esp, 0x781eb0u); f_007f30ac();
L_00781eb0:; BB(0x00781eb0);
    /* 00781eb0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00781eb1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00781eb2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00781eb3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00781eb4: ret  */ FN_RET(0x00781e68); r_esp += 4; return;
}

void f_00781eb8(void) /* sub_781EB8 */
{
    FN_ENTER(0x00781eb8);
    /* 00781eb8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00781eb9: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 00781ebe: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00781ec0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00781ec1: call 0x77a040 */ r_esp -= 4; W32(r_esp, 0x781ec6u); f_0077a040();
    /* 00781ec6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00781ec7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00781ec9: jne 0x781ecf */ if (!fZ) goto L_00781ecf;
L_00781ecb:; BB(0x00781ecb);
    /* 00781ecb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00781ecd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00781ece: ret  */ FN_RET(0x00781eb8); r_esp += 4; return;
L_00781ecf:; BB(0x00781ecf);
    /* 00781ecf: mov ecx, dword ptr [0xa95df4] */ r_ecx = R32((u32)(0xa95df4u));
    /* 00781ed5: add ecx, 0x1f74 */ {  u32 a = r_ecx; u32 b = 0x1f74u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00781edb: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_00781edd:; BB(0x00781edd);
    /* 00781edd: movzx eax, byte ptr [ecx + 0x104] */ r_eax = (u32)R8((u32)(r_ecx+0x104u));
    /* 00781ee4: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00781ee6: je 0x781eeb */ if (fZ) goto L_00781eeb;
L_00781ee8:; BB(0x00781ee8);
    /* 00781ee8: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_00781eeb:; BB(0x00781eeb);
    /* 00781eeb: lea eax, [ecx + 0x1bc] */ r_eax = (u32)(r_ecx+0x1bcu);
    /* 00781ef1: movzx ecx, byte ptr [ecx + 0x2c0] */ r_ecx = (u32)R8((u32)(r_ecx+0x2c0u));
    /* 00781ef8: test cl, 1 */ {  u32 a = (u8)r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00781efb: je 0x781f00 */ if (fZ) goto L_00781f00;
L_00781efd:; BB(0x00781efd);
    /* 00781efd: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_00781f00:; BB(0x00781f00);
    /* 00781f00: movzx ecx, byte ptr [eax + 0x2c0] */ r_ecx = (u32)R8((u32)(r_eax+0x2c0u));
    /* 00781f07: test cl, 1 */ {  u32 a = (u8)r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00781f0a: je 0x781f0f */ if (fZ) goto L_00781f0f;
L_00781f0c:; BB(0x00781f0c);
    /* 00781f0c: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_00781f0f:; BB(0x00781f0f);
    /* 00781f0f: lea ecx, [eax + 0x378] */ r_ecx = (u32)(r_eax+0x378u);
    /* 00781f15: add edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00781f18: cmp edx, 0x69 */ {  u32 a = r_edx; u32 b = 0x69u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00781f1b: jl 0x781edd */ if ((fS!=fO)) goto L_00781edd;
L_00781f1d:; BB(0x00781f1d);
    /* 00781f1d: mov eax, ebx */ r_eax = r_ebx;
    /* 00781f1f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00781f20: ret  */ FN_RET(0x00781eb8); r_esp += 4; return;
}

void f_00781f24(void) /* sub_781F24 */
{
    FN_ENTER(0x00781f24);
    /* 00781f24: mov dword ptr [0xa9c0e0], 0x3f800000 */ W32((u32)(0xa9c0e0u), 0x3f800000u);
    /* 00781f2e: mov dword ptr [0xa9c0e4], 0x41000000 */ W32((u32)(0xa9c0e4u), 0x41000000u);
    /* 00781f38: mov dword ptr [0xa9c0e8], 0x3fc00000 */ W32((u32)(0xa9c0e8u), 0x3fc00000u);
    /* 00781f42: ret  */ FN_RET(0x00781f24); r_esp += 4; return;
}

void f_00781f44(void) /* sub_781F44 */
{
    FN_ENTER(0x00781f44);
    /* 00781f44: movzx eax, word ptr [ecx + 0x102] */ r_eax = (u32)R16((u32)(r_ecx+0x102u));
    /* 00781f4b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00781f4d: jne 0x781f5b */ if (!fZ) goto L_00781f5b;
L_00781f4f:; BB(0x00781f4f);
    /* 00781f4f: movsx eax, byte ptr [ecx + 0x104] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ecx+0x104u));
    /* 00781f56: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00781f59: je 0x781f61 */ if (fZ) goto L_00781f61;
L_00781f5b:; BB(0x00781f5b);
    /* 00781f5b: mov eax, 1 */ r_eax = 0x1u;
    /* 00781f60: ret  */ FN_RET(0x00781f44); r_esp += 4; return;
L_00781f61:; BB(0x00781f61);
    /* 00781f61: movsx eax, byte ptr [ecx + 0x105] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ecx+0x105u));
    /* 00781f68: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00781f6a: jl 0x781f5b */ if ((fS!=fO)) goto L_00781f5b;
L_00781f6c:; BB(0x00781f6c);
    /* 00781f6c: movsx eax, byte ptr [ecx + 0x106] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ecx+0x106u));
    /* 00781f73: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00781f75: jl 0x781f5b */ if ((fS!=fO)) goto L_00781f5b;
L_00781f77:; BB(0x00781f77);
    /* 00781f77: movsx eax, byte ptr [ecx + 0x107] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ecx+0x107u));
    /* 00781f7e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00781f80: jl 0x781f5b */ if ((fS!=fO)) goto L_00781f5b;
L_00781f82:; BB(0x00781f82);
    /* 00781f82: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00781f84: ret  */ FN_RET(0x00781f44); r_esp += 4; return;
}

void f_00781f88(void) /* sub_781F88 */
{
    FN_ENTER(0x00781f88);
    /* 00781f88: movzx eax, byte ptr [ecx + 0x104] */ r_eax = (u32)R8((u32)(r_ecx+0x104u));
    /* 00781f8f: and eax, 0xfe */ {  u32 a = r_eax; u32 b = 0xfeu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00781f94: mov byte ptr [ecx + 0x104], al */ W8((u32)(r_ecx+0x104u), (u8)r_eax);
    /* 00781f9a: ret  */ FN_RET(0x00781f88); r_esp += 4; return;
}

void f_00781f9c(void) /* sub_781F9C */
{
    FN_ENTER(0x00781f9c);
    /* 00781f9c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00781f9d: call 0x717d10 */ r_esp -= 4; W32(r_esp, 0x781fa2u); f_00717d10();
    /* 00781fa2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00781fa4: mov ebx, eax */ r_ebx = r_eax;
L_00781fa6:; BB(0x00781fa6);
    /* 00781fa6: lea ecx, [ebx + 0xa9bcc0] */ r_ecx = (u32)(r_ebx+0xa9bcc0u);
    /* 00781fac: call 0x781f88 */ r_esp -= 4; W32(r_esp, 0x781fb1u); f_00781f88();
    /* 00781fb1: add ebx, 0x108 */ {  u32 a = r_ebx; u32 b = 0x108u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00781fb7: cmp ebx, 0x420 */ {  u32 a = r_ebx; u32 b = 0x420u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00781fbd: jl 0x781fa6 */ if ((fS!=fO)) goto L_00781fa6;
L_00781fbf:; BB(0x00781fbf);
    /* 00781fbf: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00781fc0: ret  */ FN_RET(0x00781f9c); r_esp += 4; return;
}

void f_00781fc4(void) /* sub_781FC4 */
{
    FN_ENTER(0x00781fc4);
    /* 00781fc4: call 0x5ba174 */ r_esp -= 4; W32(r_esp, 0x781fc9u); f_005ba174();
    /* 00781fc9: call 0x782478 */ r_esp -= 4; W32(r_esp, 0x781fceu); f_00782478();
    /* 00781fce: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00781fd0: jne 0x781fdd */ if (!fZ) goto L_00781fdd;
L_00781fd2:; BB(0x00781fd2);
    /* 00781fd2: call 0x782038 */ r_esp -= 4; W32(r_esp, 0x781fd7u); f_00782038();
    /* 00781fd7: mov eax, 1 */ r_eax = 0x1u;
    /* 00781fdc: ret  */ FN_RET(0x00781fc4); r_esp += 4; return;
L_00781fdd:; BB(0x00781fdd);
    /* 00781fdd: call 0x5bbe0c */ r_esp -= 4; W32(r_esp, 0x781fe2u); f_005bbe0c();
    /* 00781fe2: call 0x80caf0 */ r_esp -= 4; W32(r_esp, 0x781fe7u); f_0080caf0();
    /* 00781fe7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00781fe9: jne 0x781ffb */ if (!fZ) goto L_00781ffb;
L_00781feb:; BB(0x00781feb);
    /* 00781feb: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x781ff0u); f_0061cdb0();
    /* 00781ff0: call 0x782038 */ r_esp -= 4; W32(r_esp, 0x781ff5u); f_00782038();
    /* 00781ff5: mov eax, 1 */ r_eax = 0x1u;
    /* 00781ffa: ret  */ FN_RET(0x00781fc4); r_esp += 4; return;
L_00781ffb:; BB(0x00781ffb);
    /* 00781ffb: call 0x787d9c */ r_esp -= 4; W32(r_esp, 0x782000u); f_00787d9c();
    /* 00782000: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00782002: jne 0x782014 */ if (!fZ) goto L_00782014;
L_00782004:; BB(0x00782004);
    /* 00782004: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x782009u); f_0061cdb0();
    /* 00782009: call 0x782038 */ r_esp -= 4; W32(r_esp, 0x78200eu); f_00782038();
    /* 0078200e: mov eax, 1 */ r_eax = 0x1u;
    /* 00782013: ret  */ FN_RET(0x00781fc4); r_esp += 4; return;
L_00782014:; BB(0x00782014);
    /* 00782014: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x782019u); f_0061cdb0();
    /* 00782019: call 0x5ba1f0 */ r_esp -= 4; W32(r_esp, 0x78201eu); f_005ba1f0();
    /* 0078201e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00782020: je 0x78202d */ if (fZ) goto L_0078202d;
L_00782022:; BB(0x00782022);
    /* 00782022: call 0x782038 */ r_esp -= 4; W32(r_esp, 0x782027u); f_00782038();
    /* 00782027: mov eax, 1 */ r_eax = 0x1u;
    /* 0078202c: ret  */ FN_RET(0x00781fc4); r_esp += 4; return;
L_0078202d:; BB(0x0078202d);
    /* 0078202d: call 0x5ba1e0 */ r_esp -= 4; W32(r_esp, 0x782032u); f_005ba1e0();
    /* 00782032: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00782034: ret  */ FN_RET(0x00781fc4); r_esp += 4; return;
}

