#include "protos.h"

void f_007870b7(void)
{
    FN_ENTER(0x007870b7);
    goto L_007870b7;
L_0078700b:; BB(0x0078700b);
    /* 0078700b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078700d: mov dword ptr [ecx + 0x348], eax */ W32((u32)(r_ecx+0x348u), r_eax);
    /* 00787013: mov dword ptr [ecx + 0x34c], eax */ W32((u32)(r_ecx+0x34cu), r_eax);
    /* 00787019: mov dword ptr [ecx + 0x350], eax */ W32((u32)(r_ecx+0x350u), r_eax);
    /* 0078701f: mov dword ptr [ecx + 0x354], eax */ W32((u32)(r_ecx+0x354u), r_eax);
    /* 00787025: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00787026: ret  */ FN_RET(0x007870b7); r_esp += 4; return;
L_007870b7:; BB(0x007870b7);
    /* 007870b7: mov edx, dword ptr [eax + 0x350] */ r_edx = R32((u32)(r_eax+0x350u));
L_007870bd:; BB(0x007870bd);
    /* 007870bd: mov eax, edx */ r_eax = r_edx;
    /* 007870bf: mov edx, dword ptr [edx + 0x350] */ r_edx = R32((u32)(r_edx+0x350u));
    /* 007870c5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007870c7: jne 0x7870bd */ if (!fZ) goto L_007870bd;
L_007870c9:; BB(0x007870c9);
    /* 007870c9: mov dword ptr [eax + 0x350], ebp */ W32((u32)(r_eax+0x350u), r_ebp);
    /* 007870cf: mov edx, dword ptr [ecx + 0x354] */ r_edx = R32((u32)(r_ecx+0x354u));
    /* 007870d5: mov dword ptr [edx + 0x348], 0 */ W32((u32)(r_edx+0x348u), 0x0u);
    /* 007870df: mov ebp, dword ptr [ecx + 0x354] */ r_ebp = R32((u32)(r_ecx+0x354u));
    /* 007870e5: mov dword ptr [ebp + 0x34c], eax */ W32((u32)(r_ebp+0x34cu), r_eax);
    /* 007870eb: mov eax, dword ptr [ecx + 0x34c] */ r_eax = R32((u32)(r_ecx+0x34cu));
    /* 007870f1: mov edx, dword ptr [ecx + 0x350] */ r_edx = R32((u32)(r_ecx+0x350u));
    /* 007870f7: mov dword ptr [eax + 0x350], edx */ W32((u32)(r_eax+0x350u), r_edx);
    /* 007870fd: mov edx, dword ptr [ecx + 0x350] */ r_edx = R32((u32)(r_ecx+0x350u));
    /* 00787103: mov eax, dword ptr [ecx + 0x34c] */ r_eax = R32((u32)(r_ecx+0x34cu));
    /* 00787109: mov dword ptr [edx + 0x34c], eax */ W32((u32)(r_edx+0x34cu), r_eax);
    /* 0078710f: jmp 0x78700b */ goto L_0078700b;
}

void f_00787274(void) /* sub_787274 */
{
    FN_ENTER(0x00787274);
    /* 00787274: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00787275: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 00787279: mov ecx, dword ptr [edx + 0x354] */ r_ecx = R32((u32)(r_edx+0x354u));
    /* 0078727f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00787281: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 00787285: mov edx, dword ptr [eax + 0x354] */ r_edx = R32((u32)(r_eax+0x354u));
    /* 0078728b: je 0x7872dd */ if (fZ) goto L_007872dd;
L_0078728d:; BB(0x0078728d);
    /* 0078728d: mov ebp, dword ptr [ecx + 0x350] */ r_ebp = R32((u32)(r_ecx+0x350u));
    /* 00787293: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00787295: je 0x7872a3 */ if (fZ) goto L_007872a3;
L_00787297:; BB(0x00787297);
    /* 00787297: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00787299: mov ebp, dword ptr [ebp + 0x350] */ r_ebp = R32((u32)(r_ebp+0x350u));
    /* 0078729f: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007872a1: jne 0x787297 */ if (!fZ) goto L_00787297;
L_007872a3:; BB(0x007872a3);
    /* 007872a3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007872a5: je 0x7872e1 */ if (fZ) goto L_007872e1;
L_007872a7:; BB(0x007872a7);
    /* 007872a7: mov eax, dword ptr [edx + 0x350] */ r_eax = R32((u32)(r_edx+0x350u));
    /* 007872ad: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007872af: je 0x7872bd */ if (fZ) goto L_007872bd;
L_007872b1:; BB(0x007872b1);
    /* 007872b1: mov edx, eax */ r_edx = r_eax;
    /* 007872b3: mov eax, dword ptr [eax + 0x350] */ r_eax = R32((u32)(r_eax+0x350u));
    /* 007872b9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007872bb: jne 0x7872b1 */ if (!fZ) goto L_007872b1;
L_007872bd:; BB(0x007872bd);
    /* 007872bd: mov eax, dword ptr [ecx + 0x34c] */ r_eax = R32((u32)(r_ecx+0x34cu));
    /* 007872c3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007872c5: je 0x7872d1 */ if (fZ) goto L_007872d1;
L_007872c7:; BB(0x007872c7);
    /* 007872c7: mov dword ptr [eax + 0x350], 0 */ W32((u32)(r_eax+0x350u), 0x0u);
L_007872d1:; BB(0x007872d1);
    /* 007872d1: mov dword ptr [ecx + 0x34c], edx */ W32((u32)(r_ecx+0x34cu), r_edx);
    /* 007872d7: mov dword ptr [edx + 0x350], ecx */ W32((u32)(r_edx+0x350u), r_ecx);
L_007872dd:; BB(0x007872dd);
    /* 007872dd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007872de: ret 8 */ FN_RET(0x00787274); r_esp += 12; return;
L_007872e1:; BB(0x007872e1);
    /* 007872e1: mov edx, dword ptr [ecx + 0x34c] */ r_edx = R32((u32)(r_ecx+0x34cu));
    /* 007872e7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007872e9: je 0x7872f9 */ if (fZ) goto L_007872f9;
L_007872eb:; BB(0x007872eb);
    /* 007872eb: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007872ed: mov dword ptr [edx + 0x350], ebp */ W32((u32)(r_edx+0x350u), r_ebp);
    /* 007872f3: mov dword ptr [ecx + 0x34c], ebp */ W32((u32)(r_ecx+0x34cu), r_ebp);
L_007872f9:; BB(0x007872f9);
    /* 007872f9: mov dword ptr [ecx + 0x348], eax */ W32((u32)(r_ecx+0x348u), r_eax);
    /* 007872ff: mov dword ptr [eax + 0x354], ecx */ W32((u32)(r_eax+0x354u), r_ecx);
    /* 00787305: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00787306: ret 8 */ FN_RET(0x00787274); r_esp += 12; return;
}

void f_0078730c(void) /* sub_78730C */
{
    FN_ENTER(0x0078730c);
    /* 0078730c: mov eax, dword ptr [ecx + 0x38] */ r_eax = R32((u32)(r_ecx+0x38u));
    /* 0078730f: fld dword ptr [ecx + 0x3c] */ FPUSH(R_F32((u32)(r_ecx+0x3cu)));
    /* 00787312: mov edx, dword ptr [ecx + 0x3c] */ r_edx = R32((u32)(r_ecx+0x3cu));
    /* 00787315: mov dword ptr [ecx + 0x300], eax */ W32((u32)(r_ecx+0x300u), r_eax);
    /* 0078731b: mov eax, dword ptr [ecx + 0x40] */ r_eax = R32((u32)(r_ecx+0x40u));
    /* 0078731e: mov dword ptr [ecx + 0x304], edx */ W32((u32)(r_ecx+0x304u), r_edx);
    /* 00787324: mov dword ptr [ecx + 0x308], eax */ W32((u32)(r_ecx+0x308u), r_eax);
    /* 0078732a: mov eax, dword ptr [ecx + 0x2b4] */ r_eax = R32((u32)(r_ecx+0x2b4u));
    /* 00787330: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00787332: je 0x787345 */ if (fZ) goto L_00787345;
L_00787334:; BB(0x00787334);
    /* 00787334: fld dword ptr [eax + 0x10] */ FPUSH(R_F32((u32)(r_eax+0x10u)));
    /* 00787337: fmul dword ptr [0x97a1ec] */ ST(0) = ST(0) * R_F32((u32)(0x97a1ecu));
    /* 0078733d: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0078733f: fst dword ptr [ecx + 0x304] */ W_F32((u32)(r_ecx+0x304u), ST(0));
L_00787345:; BB(0x00787345);
    /* 00787345: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00787347: ret  */ FN_RET(0x0078730c); r_esp += 4; return;
}

void f_00787348(void) /* sub_787348 */
{
    FN_ENTER(0x00787348);
    /* 00787348: movzx eax, word ptr [ecx + 0x2da] */ r_eax = (u32)R16((u32)(r_ecx+0x2dau));
    /* 0078734f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00787350: call 0x787398 */ r_esp -= 4; W32(r_esp, 0x787355u); f_00787398();
    /* 00787355: ret  */ FN_RET(0x00787348); r_esp += 4; return;
}

void f_00787358(void) /* sub_787358 */
{
    FN_ENTER(0x00787358);
    /* 00787358: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0078735b: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 00787360: movzx edx, word ptr [ecx + 0x1c] */ r_edx = (u32)R16((u32)(r_ecx+0x1cu));
    /* 00787364: mov word ptr [esp + 2], dx */ W16((u32)(r_esp+0x2u), (u16)r_edx);
    /* 00787369: movzx edx, word ptr [ecx + 0x2c] */ r_edx = (u32)R16((u32)(r_ecx+0x2cu));
    /* 0078736d: mov byte ptr [esp], 0xc8 */ W8((u32)(r_esp), 0xc8u);
    /* 00787371: mov byte ptr [esp + 1], 3 */ W8((u32)(r_esp+0x1u), 0x3u);
    /* 00787376: mov word ptr [esp + 4], dx */ W16((u32)(r_esp+0x4u), (u16)r_edx);
    /* 0078737b: mov word ptr [esp + 6], ax */ W16((u32)(r_esp+0x6u), (u16)r_eax);
    /* 00787380: movzx eax, byte ptr [esp + 0x14] */ r_eax = (u32)R8((u32)(r_esp+0x14u));
    /* 00787385: mov byte ptr [esp + 8], al */ W8((u32)(r_esp+0x8u), (u8)r_eax);
    /* 00787389: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0078738c: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x787391u); f_008003e0();
    /* 00787391: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00787394: ret 8 */ FN_RET(0x00787358); r_esp += 12; return;
}

void f_00787398(void) /* sub_787398 */
{
    FN_ENTER(0x00787398);
    /* 00787398: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00787399: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0078739a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0078739b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0078739c: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0078739f: mov edi, ecx */ r_edi = r_ecx;
    /* 007873a1: movzx esi, word ptr [esp + 0x34] */ r_esi = (u32)R16((u32)(r_esp+0x34u));
    /* 007873a6: cmp esi, 0x1000 */ {  u32 a = r_esi; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007873ac: jl 0x7873b8 */ if ((fS!=fO)) goto L_007873b8;
L_007873ae:; BB(0x007873ae);
    /* 007873ae: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007873b1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007873b2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007873b3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007873b4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007873b5: ret 4 */ FN_RET(0x00787398); r_esp += 8; return;
L_007873b8:; BB(0x007873b8);
    /* 007873b8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007873b9: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x7873beu); f_0068d5a8();
    /* 007873be: mov ebp, eax */ r_ebp = r_eax;
    /* 007873c0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007873c3: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007873c5: je 0x7874c3 */ if (fZ) goto L_007874c3;
L_007873cb:; BB(0x007873cb);
    /* 007873cb: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 007873ce: test edx, 0x800 */ {  u32 a = r_edx; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007873d4: jne 0x7873e4 */ if (!fZ) goto L_007873e4;
L_007873d6:; BB(0x007873d6);
    /* 007873d6: mov edx, dword ptr [ebp + 0x3f0] */ r_edx = R32((u32)(r_ebp+0x3f0u));
    /* 007873dc: cmp edx, dword ptr [0xaafca0] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaafca0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007873e2: je 0x7873ee */ if (fZ) goto L_007873ee;
L_007873e4:; BB(0x007873e4);
    /* 007873e4: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007873e7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007873e8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007873e9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007873ea: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007873eb: ret 4 */ FN_RET(0x00787398); r_esp += 8; return;
L_007873ee:; BB(0x007873ee);
    /* 007873ee: mov ebx, dword ptr [0xaafdb8] */ r_ebx = R32((u32)(0xaafdb8u));
    /* 007873f4: mov edx, dword ptr [edi + 0x2b4] */ r_edx = R32((u32)(r_edi+0x2b4u));
    /* 007873fa: mov edx, dword ptr [edx + 0x1c] */ r_edx = R32((u32)(r_edx+0x1cu));
    /* 007873fd: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00787400: jne 0x78740f */ if (!fZ) goto L_0078740f;
L_00787402:; BB(0x00787402);
    /* 00787402: lea ebx, [edx + edx] */ r_ebx = (u32)(r_edx+r_edx);
    /* 00787405: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00787407: add edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00787409: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0078740b: add ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0078740d: jmp 0x787418 */ goto L_00787418;
L_0078740f:; BB(0x0078740f);
    /* 0078740f: lea ebx, [edx + edx] */ r_ebx = (u32)(r_edx+r_edx);
    /* 00787412: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00787414: add ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00787416: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_00787418:; BB(0x00787418);
    /* 00787418: movzx edx, word ptr [edi + 0x2d8] */ r_edx = (u32)R16((u32)(r_edi+0x2d8u));
    /* 0078741f: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00787421: je 0x78742b */ if (fZ) goto L_0078742b;
L_00787423:; BB(0x00787423);
    /* 00787423: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00787425: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00787427: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00787429: jmp 0x787454 */ goto L_00787454;
L_0078742b:; BB(0x0078742b);
    /* 0078742b: mov ecx, 0xa94290 */ r_ecx = 0xa94290u;
    /* 00787430: call 0x6a8eb0 */ r_esp -= 4; W32(r_esp, 0x787435u); f_006a8eb0();
    /* 00787435: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00787438: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078743b: je 0x787500 */ if (fZ) goto L_00787500;
L_00787441:; BB(0x00787441);
    /* 00787441: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00787443: lea edx, [ebx + ebx] */ r_edx = (u32)(r_ebx+r_ebx);
    /* 00787446: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00787448: add edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0078744a: lea ebx, [edx + edx] */ r_ebx = (u32)(r_edx+r_edx);
    /* 0078744d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0078744f: call 0x770ce4 */ r_esp -= 4; W32(r_esp, 0x787454u); f_00770ce4();
L_00787454:; BB(0x00787454);
    /* 00787454: mov edx, dword ptr [0xa49510] */ r_edx = R32((u32)(0xa49510u));
    /* 0078745a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078745c: je 0x787469 */ if (fZ) goto L_00787469;
L_0078745e:; BB(0x0078745e);
    /* 0078745e: mov edx, dword ptr [0xa95624] */ r_edx = R32((u32)(0xa95624u));
    /* 00787464: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00787467: je 0x7874cd */ if (fZ) goto L_007874cd;
L_00787469:; BB(0x00787469);
    /* 00787469: mov eax, 0x51eb851f */ r_eax = 0x51eb851fu;
    /* 0078746e: imul ebx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00787470: sar ebx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 00787473: lea ecx, [edi + 0x300] */ r_ecx = (u32)(r_edi+0x300u);
    /* 00787479: sar edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0078747c: sub edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0078747e: imul edx, dword ptr [0x9f9ee0] */ { i64 t = (i64)(i32)r_edx * (i64)(i32)R32((u32)(0x9f9ee0u)); r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00787485: movzx ebx, word ptr [ebp + 0x1c] */ r_ebx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 00787489: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0078748a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0078748b: mov eax, 0x14 */ r_eax = 0x14u;
    /* 00787490: push 0x9783a0 */ { u32 v = 0x9783a0u; r_esp -= 4; W32(r_esp, v); }
    /* 00787495: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00787496: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00787497: push 0xffff00ff */ { u32 v = 0xffff00ffu; r_esp -= 4; W32(r_esp, v); }
    /* 0078749c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0078749d: call 0x78aabc */ r_esp -= 4; W32(r_esp, 0x7874a2u); f_0078aabc();
    /* 007874a2: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007874a5: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 007874a9: movzx ebp, word ptr [edi + 0x2d8] */ r_ebp = (u32)R16((u32)(r_edi+0x2d8u));
    /* 007874b0: cmp esi, ebp */ {  u32 a = r_esi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007874b2: mov eax, 0 */ r_eax = 0x0u;
    /* 007874b7: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 007874ba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007874bb: mov ecx, edi */ r_ecx = r_edi;
    /* 007874bd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007874be: call 0x787358 */ r_esp -= 4; W32(r_esp, 0x7874c3u); f_00787358();
L_007874c3:; BB(0x007874c3);
    /* 007874c3: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007874c6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007874c7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007874c8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007874c9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007874ca: ret 4 */ FN_RET(0x00787398); r_esp += 8; return;
L_007874cd:; BB(0x007874cd);
    /* 007874cd: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 007874d0: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 007874d3: fmul dword ptr [0xa48be4] */ ST(0) = ST(0) * R_F32((u32)(0xa48be4u));
    /* 007874d9: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 007874dd: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 007874e2: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007874e7: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 007874eb: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 007874ef: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 007874f3: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 007874f7: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 007874fb: jmp 0x787469 */ goto L_00787469;
L_00787500:; BB(0x00787500);
    /* 00787500: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00787502: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00787503: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00787505: call 0x691728 */ r_esp -= 4; W32(r_esp, 0x78750au); f_00691728();
    /* 0078750a: push 0x97a6b0 */ { u32 v = 0x97a6b0u; r_esp -= 4; W32(r_esp, v); }
    /* 0078750f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00787510: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00787512: call 0x691578 */ r_esp -= 4; W32(r_esp, 0x787517u); f_00691578();
    /* 00787517: push 0x932cf0 */ { u32 v = 0x932cf0u; r_esp -= 4; W32(r_esp, v); }
    /* 0078751c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0078751d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0078751f: call 0x691578 */ r_esp -= 4; W32(r_esp, 0x787524u); f_00691578();
    /* 00787524: jmp 0x787441 */ goto L_00787441;
}

void f_0078752c(void) /* sub_78752C */
{
    FN_ENTER(0x0078752c);
    /* 0078752c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0078752d: call 0x5c973c */ r_esp -= 4; W32(r_esp, 0x787532u); f_005c973c();
    /* 00787532: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00787533: ret  */ FN_RET(0x0078752c); r_esp += 4; return;
}

void f_00787534(void) /* sub_787534 */
{
    FN_ENTER(0x00787534);
    /* 00787534: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00787535: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00787537: movzx eax, word ptr [ebx + 0x2da] */ r_eax = (u32)R16((u32)(r_ebx+0x2dau));
    /* 0078753e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00787540: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00787541: call 0x787398 */ r_esp -= 4; W32(r_esp, 0x787546u); f_00787398();
    /* 00787546: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00787547: call 0x5c973c */ r_esp -= 4; W32(r_esp, 0x78754cu); f_005c973c();
    /* 0078754c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0078754d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0078754e: ret  */ FN_RET(0x00787534); r_esp += 4; return;
}

void f_00787550(void) /* sub_787550 */
{
    FN_ENTER(0x00787550);
    /* 00787550: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00787554: mov dword ptr [ecx + 0x378], eax */ W32((u32)(r_ecx+0x378u), r_eax);
    /* 0078755a: ret 4 */ FN_RET(0x00787550); r_esp += 8; return;
}

void f_00787568(void) /* sub_787568 */
{
    FN_ENTER(0x00787568);
    /* 00787568: mov edx, dword ptr [ecx + 0x378] */ r_edx = R32((u32)(r_ecx+0x378u));
    /* 0078756e: mov eax, dword ptr [edx*4 + 0x9f9d20] */ r_eax = R32((u32)(r_edx*4+0x9f9d20u));
    /* 00787575: ret  */ FN_RET(0x00787568); r_esp += 4; return;
}

void f_00787578(void) /* sub_787578 */
{
    FN_ENTER(0x00787578);
    /* 00787578: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00787579: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0078757a: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0078757d: movzx eax, word ptr [ecx + 0x1c] */ r_eax = (u32)R16((u32)(r_ecx+0x1cu));
    /* 00787581: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00787583: cmp eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00787588: jl 0x787706 */ if ((fS!=fO)) goto L_00787706;
L_0078758e:; BB(0x0078758e);
    /* 0078758e: cmp eax, 0x4000 */ {  u32 a = r_eax; u32 b = 0x4000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00787593: jge 0x787706 */ if ((fS==fO)) goto L_00787706;
L_00787599:; BB(0x00787599);
    /* 00787599: movsx esi, word ptr [ecx + 0x2c] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ecx+0x2cu));
    /* 0078759d: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0078759f: jl 0x7875ce */ if ((fS!=fO)) goto L_007875ce;
L_007875a1:; BB(0x007875a1);
    /* 007875a1: cmp esi, 0xb4f */ {  u32 a = r_esi; u32 b = 0xb4fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007875a7: jg 0x7875ce */ if ((!fZ&&fS==fO)) goto L_007875ce;
L_007875a9:; BB(0x007875a9);
    /* 007875a9: mov eax, dword ptr [0xab02b8] */ r_eax = R32((u32)(0xab02b8u));
    /* 007875ae: lea edi, [esi + esi] */ r_edi = (u32)(r_esi+r_esi);
    /* 007875b1: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 007875b3: lea edx, [edi + edi] */ r_edx = (u32)(r_edi+r_edi);
    /* 007875b6: add edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007875b8: mov edi, dword ptr [edx + eax] */ r_edi = R32((u32)(r_edx+r_eax));
    /* 007875bb: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 007875be: mov edi, dword ptr [edx + eax + 4] */ r_edi = R32((u32)(r_edx+r_eax+0x4u));
    /* 007875c2: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 007875c6: mov eax, dword ptr [edx + eax + 8] */ r_eax = R32((u32)(r_edx+r_eax+0x8u));
    /* 007875ca: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
L_007875ce:; BB(0x007875ce);
    /* 007875ce: movzx eax, word ptr [ecx + 0x2bc] */ r_eax = (u32)R16((u32)(r_ecx+0x2bcu));
    /* 007875d5: movzx edi, word ptr [ecx + 0x334] */ r_edi = (u32)R16((u32)(r_ecx+0x334u));
    /* 007875dc: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 007875df: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 007875e2: sub eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007875e4: mov word ptr [esp + 6], ax */ W16((u32)(r_esp+0x6u), (u16)r_eax);
    /* 007875e9: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 007875ed: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007875f0: je 0x787669 */ if (fZ) goto L_00787669;
L_007875f2:; BB(0x007875f2);
    /* 007875f2: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 007875f6: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007875f9: je 0x787669 */ if (fZ) goto L_00787669;
L_007875fb:; BB(0x007875fb);
    /* 007875fb: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 007875ff: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00787602: je 0x787611 */ if (fZ) goto L_00787611;
L_00787604:; BB(0x00787604);
    /* 00787604: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 00787608: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078760b: jne 0x7876bf */ if (!fZ) goto L_007876bf;
L_00787611:; BB(0x00787611);
    /* 00787611: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 00787615: mov edi, dword ptr [ecx + 0x288] */ r_edi = R32((u32)(r_ecx+0x288u));
    /* 0078761b: mov byte ptr [esp + 0xa], al */ W8((u32)(r_esp+0xau), (u8)r_eax);
    /* 0078761f: mov eax, 0x88888889 */ r_eax = 0x88888889u;
    /* 00787624: imul edi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_edi; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00787626: add edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00787628: sar edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0078762b: sar edi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 0078762e: sub edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00787630: add edx, -0x28 */ {  u32 a = r_edx; u32 b = 0xffffffd8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00787633: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 00787637: fild dword ptr [esp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xcu)));
    /* 0078763b: fmul dword ptr [0x97a1e8] */ ST(0) = ST(0) * R_F32((u32)(0x97a1e8u));
    /* 00787641: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 00787645: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 0078764a: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0078764f: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 00787653: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 00787657: fistp qword ptr [esp + 0x24] */ W64((u32)(r_esp+0x24u), (u64)fx_int64(ST(0))); FPOP();
    /* 0078765b: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 0078765f: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 00787663: mov byte ptr [esp + 0xb], al */ W8((u32)(r_esp+0xbu), (u8)r_eax);
    /* 00787667: jmp 0x7876bf */ goto L_007876bf;
L_00787669:; BB(0x00787669);
    /* 00787669: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 0078766d: mov edi, dword ptr [ecx + 0x27c] */ r_edi = R32((u32)(r_ecx+0x27cu));
    /* 00787673: mov byte ptr [esp + 8], al */ W8((u32)(r_esp+0x8u), (u8)r_eax);
    /* 00787677: mov eax, 0x88888889 */ r_eax = 0x88888889u;
    /* 0078767c: imul edi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_edi; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0078767e: add edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00787680: sar edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00787683: sar edi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 00787686: sub edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00787688: add edx, -0x28 */ {  u32 a = r_edx; u32 b = 0xffffffd8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0078768b: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 0078768f: fild dword ptr [esp + 0x2c] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x2cu)));
    /* 00787693: fmul dword ptr [0x97a1e8] */ ST(0) = ST(0) * R_F32((u32)(0x97a1e8u));
    /* 00787699: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 0078769d: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 007876a2: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007876a7: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 007876ab: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 007876af: fistp qword ptr [esp + 0x24] */ W64((u32)(r_esp+0x24u), (u64)fx_int64(ST(0))); FPOP();
    /* 007876b3: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 007876b7: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 007876bb: mov byte ptr [esp + 9], al */ W8((u32)(r_esp+0x9u), (u8)r_eax);
L_007876bf:; BB(0x007876bf);
    /* 007876bf: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007876c1: jl 0x7876f7 */ if ((fS!=fO)) goto L_007876f7;
L_007876c3:; BB(0x007876c3);
    /* 007876c3: cmp esi, 0xb4f */ {  u32 a = r_esi; u32 b = 0xb4fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007876c9: jg 0x7876f7 */ if ((!fZ&&fS==fO)) goto L_007876f7;
L_007876cb:; BB(0x007876cb);
    /* 007876cb: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 007876ce: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007876d0: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007876d2: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
    /* 007876d5: add eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007876d7: mov esi, dword ptr [0xab02b8] */ r_esi = R32((u32)(0xab02b8u));
    /* 007876dd: mov dword ptr [eax + esi], edx */ W32((u32)(r_eax+r_esi), r_edx);
    /* 007876e0: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 007876e4: mov dword ptr [eax + esi + 4], edi */ W32((u32)(r_eax+r_esi+0x4u), r_edi);
    /* 007876e8: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 007876ec: mov dword ptr [eax + esi + 8], edx */ W32((u32)(r_eax+r_esi+0x8u), r_edx);
    /* 007876f0: mov esi, 1 */ r_esi = 0x1u;
    /* 007876f5: jmp 0x7876f9 */ goto L_007876f9;
L_007876f7:; BB(0x007876f7);
    /* 007876f7: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_007876f9:; BB(0x007876f9);
    /* 007876f9: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007876fb: je 0x787706 */ if (fZ) goto L_00787706;
L_007876fd:; BB(0x007876fd);
    /* 007876fd: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00787700: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00787701: call 0x787710 */ r_esp -= 4; W32(r_esp, 0x787706u); f_00787710();
L_00787706:; BB(0x00787706);
    /* 00787706: mov eax, esi */ r_eax = r_esi;
    /* 00787708: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0078770b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0078770c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0078770d: ret 4 */ FN_RET(0x00787578); r_esp += 8; return;
}

void f_00787710(void) /* sub_787710 */
{
    FN_ENTER(0x00787710);
    /* 00787710: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00787711: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00787712: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00787715: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00787717: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0078771b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078771d: je 0x78778e */ if (fZ) goto L_0078778e;
L_0078771f:; BB(0x0078771f);
    /* 0078771f: mov edi, dword ptr [eax] */ r_edi = R32((u32)(r_eax));
    /* 00787721: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00787724: movsx edx, word ptr [ebp + 0x2c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x2cu));
L_00787728:; BB(0x00787728);
    /* 00787728: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0078772c: mov byte ptr [esp], 0xa */ W8((u32)(r_esp), 0xau);
    /* 00787730: shr ecx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00787733: mov byte ptr [esp + 1], 3 */ W8((u32)(r_esp+0x1u), 0x3u);
    /* 00787738: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 0078773d: mov word ptr [esp + 4], dx */ W16((u32)(r_esp+0x4u), (u16)r_edx);
    /* 00787742: mov edx, dword ptr [0xa9cd68] */ r_edx = R32((u32)(0xa9cd68u));
    /* 00787748: mov word ptr [esp + 6], cx */ W16((u32)(r_esp+0x6u), (u16)r_ecx);
    /* 0078774d: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00787750: je 0x787766 */ if (fZ) goto L_00787766;
L_00787752:; BB(0x00787752);
    /* 00787752: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
L_00787756:; BB(0x00787756);
    /* 00787756: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00787759: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x78775eu); f_008003e0();
L_0078775e:; BB(0x0078775e);
    /* 0078775e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00787761: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00787762: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00787763: ret 4 */ FN_RET(0x00787710); r_esp += 8; return;
L_00787766:; BB(0x00787766);
    /* 00787766: mov eax, edi */ r_eax = r_edi;
    /* 00787768: and eax, 0xffffffc0 */ {  u32 a = r_eax; u32 b = 0xffffffc0u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0078776b: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0078776f: mov eax, dword ptr [ebp + 0x338] */ r_eax = R32((u32)(r_ebp+0x338u));
    /* 00787775: and edi, 0x3f */ {  u32 a = r_edi; u32 b = 0x3fu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 00787778: not eax */ r_eax = ~r_eax;
    /* 0078777a: and eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0078777c: je 0x787756 */ if (fZ) goto L_00787756;
L_0078777e:; BB(0x0078777e);
    /* 0078777e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0078777f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00787781: call 0x7877bc */ r_esp -= 4; W32(r_esp, 0x787786u); f_007877bc();
    /* 00787786: mov dword ptr [ebp + 0x338], edi */ W32((u32)(r_ebp+0x338u), r_edi);
    /* 0078778c: jmp 0x787756 */ goto L_00787756;
L_0078778e:; BB(0x0078778e);
    /* 0078778e: movsx edx, word ptr [ebp + 0x2c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x2cu));
    /* 00787792: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00787794: jl 0x78775e */ if ((fS!=fO)) goto L_0078775e;
L_00787796:; BB(0x00787796);
    /* 00787796: cmp edx, 0xb4f */ {  u32 a = r_edx; u32 b = 0xb4fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0078779c: jg 0x78775e */ if ((!fZ&&fS==fO)) goto L_0078775e;
L_0078779e:; BB(0x0078779e);
    /* 0078779e: mov ecx, dword ptr [0xab02b8] */ r_ecx = R32((u32)(0xab02b8u));
    /* 007877a4: lea edi, [edx + edx] */ r_edi = (u32)(r_edx+r_edx);
    /* 007877a7: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 007877a9: lea eax, [edi + edi] */ r_eax = (u32)(r_edi+r_edi);
    /* 007877ac: add eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007877ae: mov edi, dword ptr [eax + ecx] */ r_edi = R32((u32)(r_eax+r_ecx));
    /* 007877b1: mov ecx, dword ptr [eax + ecx + 4] */ r_ecx = R32((u32)(r_eax+r_ecx+0x4u));
    /* 007877b5: jmp 0x787728 */ goto L_00787728;
}

void f_007877bc(void) /* sub_7877BC */
{
    FN_ENTER(0x007877bc);
    /* 007877bc: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007877bf: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 007877c3: movzx eax, word ptr [ecx + 0x1c] */ r_eax = (u32)R16((u32)(r_ecx+0x1cu));
    /* 007877c7: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 007877cc: mov byte ptr [esp], 0x9c */ W8((u32)(r_esp), 0x9cu);
    /* 007877d0: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 007877d4: mov byte ptr [esp + 1], 2 */ W8((u32)(r_esp+0x1u), 0x2u);
    /* 007877d9: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 007877dc: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x7877e1u); f_008003e0();
    /* 007877e1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007877e4: ret 4 */ FN_RET(0x007877bc); r_esp += 8; return;
}

void f_007877e8(void) /* sub_7877E8 */
{
    FN_ENTER(0x007877e8);
    /* 007877e8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007877e9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007877ea: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007877ed: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 007877f1: mov edx, dword ptr [0xab02b8] */ r_edx = R32((u32)(0xab02b8u));
    /* 007877f7: movzx esi, word ptr [eax + 4] */ r_esi = (u32)R16((u32)(r_eax+0x4u));
    /* 007877fb: lea ebx, [esi + esi] */ r_ebx = (u32)(r_esi+r_esi);
    /* 007877fe: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00787800: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 00787803: add ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00787805: mov ebx, dword ptr [ecx + edx] */ r_ebx = R32((u32)(r_ecx+r_edx));
    /* 00787808: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 0078780b: mov ebx, dword ptr [ecx + edx + 4] */ r_ebx = R32((u32)(r_ecx+r_edx+0x4u));
    /* 0078780f: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 00787813: mov ecx, dword ptr [ecx + edx + 8] */ r_ecx = R32((u32)(r_ecx+r_edx+0x8u));
    /* 00787817: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 0078781b: movzx ecx, word ptr [eax + 6] */ r_ecx = (u32)R16((u32)(r_eax+0x6u));
    /* 0078781f: mov word ptr [esp + 6], cx */ W16((u32)(r_esp+0x6u), (u16)r_ecx);
    /* 00787824: mov ecx, dword ptr [0xa9cd68] */ r_ecx = R32((u32)(0xa9cd68u));
    /* 0078782a: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078782d: je 0x7878d8 */ if (fZ) goto L_007878d8;
L_00787833:; BB(0x00787833);
    /* 00787833: mov ebx, dword ptr [eax + 8] */ r_ebx = R32((u32)(r_eax+0x8u));
    /* 00787836: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
L_00787839:; BB(0x00787839);
    /* 00787839: movsx esi, si */ r_esi = (u32)(i32)(i16)(u16)r_esi;
    /* 0078783c: cmp esi, 0xb4f */ {  u32 a = r_esi; u32 b = 0xb4fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00787842: jg 0x787860 */ if ((!fZ&&fS==fO)) goto L_00787860;
L_00787844:; BB(0x00787844);
    /* 00787844: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00787846: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00787848: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 0078784b: add ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0078784d: mov dword ptr [ecx + edx], ebx */ W32((u32)(r_ecx+r_edx), r_ebx);
    /* 00787850: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 00787854: mov dword ptr [ecx + edx + 4], ebx */ W32((u32)(r_ecx+r_edx+0x4u), r_ebx);
    /* 00787858: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 0078785c: mov dword ptr [ecx + edx + 8], esi */ W32((u32)(r_ecx+r_edx+0x8u), r_esi);
L_00787860:; BB(0x00787860);
    /* 00787860: movzx ebx, word ptr [eax + 2] */ r_ebx = (u32)R16((u32)(r_eax+0x2u));
    /* 00787864: cmp ebx, 0x1000 */ {  u32 a = r_ebx; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0078786a: jl 0x7878c0 */ if ((fS!=fO)) goto L_007878c0;
L_0078786c:; BB(0x0078786c);
    /* 0078786c: cmp ebx, 0x4000 */ {  u32 a = r_ebx; u32 b = 0x4000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00787872: jge 0x7878c0 */ if ((fS==fO)) goto L_007878c0;
L_00787874:; BB(0x00787874);
    /* 00787874: mov ecx, dword ptr [0xaae168] */ r_ecx = R32((u32)(0xaae168u));
    /* 0078787a: mov eax, dword ptr [0xaae164] */ r_eax = R32((u32)(0xaae164u));
    /* 0078787f: lea eax, [ecx + eax - 1] */ r_eax = (u32)(r_ecx+r_eax+0xffffffffu);
    /* 00787883: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00787885: jge 0x7878ad */ if ((fS==fO)) goto L_007878ad;
L_00787887:; BB(0x00787887);
    /* 00787887: lea edx, [ecx + eax] */ r_edx = (u32)(r_ecx+r_eax);
    /* 0078788a: mov esi, edx */ r_esi = r_edx;
    /* 0078788c: shr esi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 0078788f: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00787891: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00787893: mov esi, dword ptr [edx*4 + 0xaad720] */ r_esi = R32((u32)(r_edx*4+0xaad720u));
    /* 0078789a: movzx esi, word ptr [esi + 0x1c] */ r_esi = (u32)R16((u32)(r_esi+0x1cu));
    /* 0078789e: cmp esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007878a0: jge 0x7878a7 */ if ((fS==fO)) goto L_007878a7;
L_007878a2:; BB(0x007878a2);
    /* 007878a2: lea ecx, [edx + 1] */ r_ecx = (u32)(r_edx+0x1u);
    /* 007878a5: jmp 0x7878a9 */ goto L_007878a9;
L_007878a7:; BB(0x007878a7);
    /* 007878a7: mov eax, edx */ r_eax = r_edx;
L_007878a9:; BB(0x007878a9);
    /* 007878a9: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007878ab: jl 0x787887 */ if ((fS!=fO)) goto L_00787887;
L_007878ad:; BB(0x007878ad);
    /* 007878ad: mov ecx, dword ptr [ecx*4 + 0xaad720] */ r_ecx = R32((u32)(r_ecx*4+0xaad720u));
    /* 007878b4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007878b6: je 0x7878c0 */ if (fZ) goto L_007878c0;
L_007878b8:; BB(0x007878b8);
    /* 007878b8: movzx eax, word ptr [ecx + 0x1c] */ r_eax = (u32)R16((u32)(r_ecx+0x1cu));
    /* 007878bc: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007878be: je 0x7878c2 */ if (fZ) goto L_007878c2;
L_007878c0:; BB(0x007878c0);
    /* 007878c0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_007878c2:; BB(0x007878c2);
    /* 007878c2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007878c4: je 0x7878d2 */ if (fZ) goto L_007878d2;
L_007878c6:; BB(0x007878c6);
    /* 007878c6: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 007878c9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007878ca: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 007878cc: call dword ptr [edx + 0x148] */ { u32 t = R32((u32)(r_edx+0x148u)); r_esp -= 4; W32(r_esp, 0x7878d2u); call_ind(t); }
L_007878d2:; BB(0x007878d2);
    /* 007878d2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007878d5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007878d6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007878d7: ret  */ FN_RET(0x007877e8); r_esp += 4; return;
L_007878d8:; BB(0x007878d8);
    /* 007878d8: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 007878db: and ebx, 0x3f */ {  u32 a = r_ebx; u32 b = 0x3fu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 007878de: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 007878e1: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 007878e4: and ecx, 0xffffffc0 */ {  u32 a = r_ecx; u32 b = 0xffffffc0u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 007878e7: or ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 007878e9: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 007878ec: jmp 0x787839 */ goto L_00787839;
}

void f_007878f4(void) /* sub_7878F4 */
{
    FN_ENTER(0x007878f4);
    /* 007878f4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007878f5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007878f6: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 007878fa: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007878fc: je 0x787908 */ if (fZ) goto L_00787908;
L_007878fe:; BB(0x007878fe);
    /* 007878fe: mov eax, dword ptr [0xa9cd68] */ r_eax = R32((u32)(0xa9cd68u));
    /* 00787903: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00787906: je 0x78790b */ if (fZ) goto L_0078790b;
L_00787908:; BB(0x00787908);
    /* 00787908: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00787909: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0078790a: ret  */ FN_RET(0x007878f4); r_esp += 4; return;
L_0078790b:; BB(0x0078790b);
    /* 0078790b: movzx eax, word ptr [edi + 2] */ r_eax = (u32)R16((u32)(r_edi+0x2u));
    /* 0078790f: cmp eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00787914: jl 0x787908 */ if ((fS!=fO)) goto L_00787908;
L_00787916:; BB(0x00787916);
    /* 00787916: cmp eax, 0x4000 */ {  u32 a = r_eax; u32 b = 0x4000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0078791b: jge 0x787908 */ if ((fS==fO)) goto L_00787908;
L_0078791d:; BB(0x0078791d);
    /* 0078791d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0078791e: call 0x578c74 */ r_esp -= 4; W32(r_esp, 0x787923u); f_00578c74();
    /* 00787923: mov esi, eax */ r_esi = r_eax;
    /* 00787925: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00787928: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078792a: je 0x787908 */ if (fZ) goto L_00787908;
L_0078792c:; BB(0x0078792c);
    /* 0078792c: mov ecx, esi */ r_ecx = r_esi;
    /* 0078792e: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x787933u); f_008173b4();
    /* 00787933: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00787935: je 0x787908 */ if (fZ) goto L_00787908;
L_00787937:; BB(0x00787937);
    /* 00787937: mov edx, dword ptr [esi + 0x30] */ r_edx = R32((u32)(r_esi+0x30u));
    /* 0078793a: test edx, 0x800 */ {  u32 a = r_edx; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00787940: jne 0x787908 */ if (!fZ) goto L_00787908;
L_00787942:; BB(0x00787942);
    /* 00787942: mov edi, dword ptr [edi + 4] */ r_edi = R32((u32)(r_edi+0x4u));
    /* 00787945: test edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00787947: jne 0x787908 */ if (!fZ) goto L_00787908;
L_00787949:; BB(0x00787949);
    /* 00787949: or edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0078794b: mov dword ptr [esi + 0x30], edx */ W32((u32)(r_esi+0x30u), r_edx);
    /* 0078794e: cmp edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00787951: je 0x78798b */ if (fZ) goto L_0078798b;
L_00787953:; BB(0x00787953);
    /* 00787953: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00787956: je 0x78797e */ if (fZ) goto L_0078797e;
L_00787958:; BB(0x00787958);
    /* 00787958: cmp edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078795b: jne 0x78796a */ if (!fZ) goto L_0078796a;
L_0078795d:; BB(0x0078795d);
    /* 0078795d: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 0078795f: mov ecx, esi */ r_ecx = r_esi;
    /* 00787961: call dword ptr [edx + 0xc4] */ { u32 t = R32((u32)(r_edx+0xc4u)); r_esp -= 4; W32(r_esp, 0x787967u); call_ind(t); }
    /* 00787967: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00787968: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00787969: ret  */ FN_RET(0x007878f4); r_esp += 4; return;
L_0078796a:; BB(0x0078796a);
    /* 0078796a: cmp edi, 0x20 */ {  u32 a = r_edi; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0078796d: jne 0x787908 */ if (!fZ) goto L_00787908;
L_0078796f:; BB(0x0078796f);
    /* 0078796f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00787971: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 00787973: mov ecx, esi */ r_ecx = r_esi;
    /* 00787975: call dword ptr [edx + 0xc8] */ { u32 t = R32((u32)(r_edx+0xc8u)); r_esp -= 4; W32(r_esp, 0x78797bu); call_ind(t); }
    /* 0078797b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0078797c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0078797d: ret  */ FN_RET(0x007878f4); r_esp += 4; return;
L_0078797e:; BB(0x0078797e);
    /* 0078797e: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 00787980: mov ecx, esi */ r_ecx = r_esi;
    /* 00787982: call dword ptr [edx + 0xcc] */ { u32 t = R32((u32)(r_edx+0xccu)); r_esp -= 4; W32(r_esp, 0x787988u); call_ind(t); }
    /* 00787988: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00787989: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0078798a: ret  */ FN_RET(0x007878f4); r_esp += 4; return;
L_0078798b:; BB(0x0078798b);
    /* 0078798b: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 0078798d: mov ecx, esi */ r_ecx = r_esi;
    /* 0078798f: call dword ptr [edx + 0xbc] */ { u32 t = R32((u32)(r_edx+0xbcu)); r_esp -= 4; W32(r_esp, 0x787995u); call_ind(t); }
    /* 00787995: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00787996: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00787997: ret  */ FN_RET(0x007878f4); r_esp += 4; return;
}

void f_00787998(void)
{
    FN_ENTER(0x00787998);
    /* 00787998: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0078799c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078799e: je 0x7879b7 */ if (fZ) goto L_007879b7;
L_007879a0:; BB(0x007879a0);
    /* 007879a0: movzx edx, word ptr [eax + 2] */ r_edx = (u32)R16((u32)(r_eax+0x2u));
    /* 007879a4: mov eax, 1 */ r_eax = 0x1u;
    /* 007879a9: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007879ac: jg 0x7879b0 */ if ((!fZ&&fS==fO)) goto L_007879b0;
L_007879ae:; BB(0x007879ae);
    /* 007879ae: mov edx, eax */ r_edx = r_eax;
L_007879b0:; BB(0x007879b0);
    /* 007879b0: mov dword ptr [0x9f9ee0], edx */ W32((u32)(0x9f9ee0u), r_edx);
    /* 007879b6: ret  */ FN_RET(0x00787998); r_esp += 4; return;
L_007879b7:; BB(0x007879b7);
    /* 007879b7: ret  */ FN_RET(0x00787998); r_esp += 4; return;
}

void f_007879b8(void) /* sub_7879B8 */
{
    FN_ENTER(0x007879b8);
    /* 007879b8: push dword ptr [ecx + 0x378] */ { u32 v = R32((u32)(r_ecx+0x378u)); r_esp -= 4; W32(r_esp, v); }
    /* 007879be: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 007879c2: call 0x52d204 */ r_esp -= 4; W32(r_esp, 0x7879c7u); f_0052d204();
    /* 007879c7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007879ca: ret 4 */ FN_RET(0x007879b8); r_esp += 8; return;
}

void f_007879d0(void) /* sub_7879D0 */
{
    FN_ENTER(0x007879d0);
    /* 007879d0: push dword ptr [ecx + 0x378] */ { u32 v = R32((u32)(r_ecx+0x378u)); r_esp -= 4; W32(r_esp, v); }
    /* 007879d6: call 0x793014 */ r_esp -= 4; W32(r_esp, 0x7879dbu); f_00793014();
    /* 007879db: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007879dc: ret  */ FN_RET(0x007879d0); r_esp += 4; return;
}

void f_007879e0(void) /* sub_7879E0 */
{
    FN_ENTER(0x007879e0);
    /* 007879e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007879e1: mov ebp, ecx */ r_ebp = r_ecx;
    /* 007879e3: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 007879e6: test eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007879eb: jne 0x787a47 */ if (!fZ) goto L_00787a47;
L_007879ed:; BB(0x007879ed);
    /* 007879ed: mov edx, dword ptr [0xaf034c] */ r_edx = R32((u32)(0xaf034cu));
    /* 007879f3: push 0x800 */ { u32 v = 0x800u; r_esp -= 4; W32(r_esp, v); }
    /* 007879f8: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007879fa: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 007879fe: or eax, 0xffff0400 */ {  u32 a = r_eax; u32 b = 0xffff0400u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00787a03: mov word ptr [ebp + 8], ax */ W16((u32)(r_ebp+0x8u), (u16)r_eax);
    /* 00787a07: or edx, 0xc10 */ {  u32 a = r_edx; u32 b = 0xc10u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00787a0d: mov dword ptr [0xaf034c], edx */ W32((u32)(0xaf034cu), r_edx);
    /* 00787a13: call 0x82d6fc */ r_esp -= 4; W32(r_esp, 0x787a18u); f_0082d6fc();
    /* 00787a18: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00787a1b: call 0x7a950c */ r_esp -= 4; W32(r_esp, 0x787a20u); f_007a950c();
    /* 00787a20: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00787a23: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00787a25: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x787a28u); call_ind(t); }
    /* 00787a28: mov edx, dword ptr [0xaf034c] */ r_edx = R32((u32)(0xaf034cu));
    /* 00787a2e: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 00787a32: and eax, 0xfbff */ {  u32 a = r_eax; u32 b = 0xfbffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00787a37: mov word ptr [ebp + 8], ax */ W16((u32)(r_ebp+0x8u), (u16)r_eax);
    /* 00787a3b: and edx, 0xfffff3ef */ {  u32 a = r_edx; u32 b = 0xfffff3efu; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00787a41: mov dword ptr [0xaf034c], edx */ W32((u32)(0xaf034cu), r_edx);
L_00787a47:; BB(0x00787a47);
    /* 00787a47: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00787a48: ret  */ FN_RET(0x007879e0); r_esp += 4; return;
}

void f_00787a4c(void) /* sub_787A4C */
{
    FN_ENTER(0x00787a4c);
    /* 00787a4c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00787a4d: mov edi, ecx */ r_edi = r_ecx;
    /* 00787a4f: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00787a53: mov ecx, edi */ r_ecx = r_edi;
    /* 00787a55: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x787a5au); f_008193cc();
    /* 00787a5a: mov dword ptr [edi], 0xb44ca0 */ W32((u32)(r_edi), 0xb44ca0u);
    /* 00787a60: mov edx, dword ptr [0x9f9edc] */ r_edx = R32((u32)(0x9f9edcu));
    /* 00787a66: mov dword ptr [edi + 4], edx */ W32((u32)(r_edi+0x4u), r_edx);
    /* 00787a69: mov eax, 2 */ r_eax = 0x2u;
    /* 00787a6e: mov word ptr [edi + 0x1c], ax */ W16((u32)(r_edi+0x1cu), (u16)r_eax);
    /* 00787a72: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00787a74: mov word ptr [edi + 0x1e], ax */ W16((u32)(r_edi+0x1eu), (u16)r_eax);
    /* 00787a78: mov eax, edi */ r_eax = r_edi;
    /* 00787a7a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00787a7b: ret 4 */ FN_RET(0x00787a4c); r_esp += 8; return;
}

void f_00787a80(void) /* sub_787A80 */
{
    FN_ENTER(0x00787a80);
    /* 00787a80: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00787a81: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00787a82: mov esi, ecx */ r_esi = r_ecx;
    /* 00787a84: mov ebp, dword ptr [esi + 0x18] */ r_ebp = R32((u32)(r_esi+0x18u));
    /* 00787a87: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00787a89: je 0x787c97 */ if (fZ) goto L_00787c97;
L_00787a8f:; BB(0x00787a8f);
    /* 00787a8f: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x787a94u); f_004f7c84();
    /* 00787a94: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00787a96: je 0x787a9b */ if (fZ) goto L_00787a9b;
L_00787a98:; BB(0x00787a98);
    /* 00787a98: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00787a99: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00787a9a: ret  */ FN_RET(0x00787a80); r_esp += 4; return;
L_00787a9b:; BB(0x00787a9b);
    /* 00787a9b: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00787a9e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00787aa0: call dword ptr [eax + 0x8c] */ { u32 t = R32((u32)(r_eax+0x8cu)); r_esp -= 4; W32(r_esp, 0x787aa6u); call_ind(t); }
    /* 00787aa6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00787aa8: je 0x787ac5 */ if (fZ) goto L_00787ac5;
L_00787aaa:; BB(0x00787aaa);
    /* 00787aaa: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 00787aae: and eax, 0xfff7 */ {  u32 a = r_eax; u32 b = 0xfff7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00787ab3: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00787ab6: mov word ptr [ebp + 8], ax */ W16((u32)(r_ebp+0x8u), (u16)r_eax);
    /* 00787aba: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00787abc: call dword ptr [edx + 0x104] */ { u32 t = R32((u32)(r_edx+0x104u)); r_esp -= 4; W32(r_esp, 0x787ac2u); call_ind(t); }
    /* 00787ac2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00787ac3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00787ac4: ret  */ FN_RET(0x00787a80); r_esp += 4; return;
L_00787ac5:; BB(0x00787ac5);
    /* 00787ac5: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00787ac8: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00787aca: call dword ptr [eax + 0xac] */ { u32 t = R32((u32)(r_eax+0xacu)); r_esp -= 4; W32(r_esp, 0x787ad0u); call_ind(t); }
    /* 00787ad0: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00787ad3: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00787ad5: call dword ptr [eax + 0xb0] */ { u32 t = R32((u32)(r_eax+0xb0u)); r_esp -= 4; W32(r_esp, 0x787adbu); call_ind(t); }
    /* 00787adb: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00787ade: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00787ae0: call dword ptr [eax + 0xb4] */ { u32 t = R32((u32)(r_eax+0xb4u)); r_esp -= 4; W32(r_esp, 0x787ae6u); call_ind(t); }
    /* 00787ae6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00787ae8: jne 0x787b64 */ if (!fZ) goto L_00787b64;
L_00787aea:; BB(0x00787aea);
    /* 00787aea: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00787aed: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00787aef: call dword ptr [eax + 0xa0] */ { u32 t = R32((u32)(r_eax+0xa0u)); r_esp -= 4; W32(r_esp, 0x787af5u); call_ind(t); }
    /* 00787af5: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00787af8: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00787afa: call dword ptr [eax + 0x98] */ { u32 t = R32((u32)(r_eax+0x98u)); r_esp -= 4; W32(r_esp, 0x787b00u); call_ind(t); }
    /* 00787b00: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00787b02: jne 0x787b22 */ if (!fZ) goto L_00787b22;
L_00787b04:; BB(0x00787b04);
    /* 00787b04: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00787b07: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00787b09: call dword ptr [eax + 0xa8] */ { u32 t = R32((u32)(r_eax+0xa8u)); r_esp -= 4; W32(r_esp, 0x787b0fu); call_ind(t); }
    /* 00787b0f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00787b11: jne 0x787b22 */ if (!fZ) goto L_00787b22;
L_00787b13:; BB(0x00787b13);
    /* 00787b13: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00787b16: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00787b18: call dword ptr [eax + 0xa4] */ { u32 t = R32((u32)(r_eax+0xa4u)); r_esp -= 4; W32(r_esp, 0x787b1eu); call_ind(t); }
    /* 00787b1e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00787b20: je 0x787b57 */ if (fZ) goto L_00787b57;
L_00787b22:; BB(0x00787b22);
    /* 00787b22: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00787b24: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00787b25: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x787b2au); f_006946a8();
    /* 00787b2a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00787b2c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00787b2e: lea eax, [ebp + 0x38] */ r_eax = (u32)(r_ebp+0x38u);
    /* 00787b31: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 00787b36: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00787b37: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x787b3cu); f_00805608();
    /* 00787b3c: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00787b3f: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00787b42: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00787b44: call dword ptr [eax + 0x78] */ { u32 t = R32((u32)(r_eax+0x78u)); r_esp -= 4; W32(r_esp, 0x787b47u); call_ind(t); }
    /* 00787b47: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 00787b4b: or eax, 0xffff0008 */ {  u32 a = r_eax; u32 b = 0xffff0008u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00787b50: mov word ptr [ebp + 8], ax */ W16((u32)(r_ebp+0x8u), (u16)r_eax);
    /* 00787b54: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00787b55: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00787b56: ret  */ FN_RET(0x00787a80); r_esp += 4; return;
L_00787b57:; BB(0x00787b57);
    /* 00787b57: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 00787b5b: and eax, 0xfff7 */ {  u32 a = r_eax; u32 b = 0xfff7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00787b60: mov word ptr [ebp + 8], ax */ W16((u32)(r_ebp+0x8u), (u16)r_eax);
L_00787b64:; BB(0x00787b64);
    /* 00787b64: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00787b67: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00787b69: call dword ptr [eax + 0x88] */ { u32 t = R32((u32)(r_eax+0x88u)); r_esp -= 4; W32(r_esp, 0x787b6fu); call_ind(t); }
    /* 00787b6f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00787b71: je 0x787b81 */ if (fZ) goto L_00787b81;
L_00787b73:; BB(0x00787b73);
    /* 00787b73: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00787b76: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00787b78: call dword ptr [eax + 0x100] */ { u32 t = R32((u32)(r_eax+0x100u)); r_esp -= 4; W32(r_esp, 0x787b7eu); call_ind(t); }
    /* 00787b7e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00787b7f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00787b80: ret  */ FN_RET(0x00787a80); r_esp += 4; return;
L_00787b81:; BB(0x00787b81);
    /* 00787b81: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00787b84: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00787b86: call dword ptr [eax + 0x84] */ { u32 t = R32((u32)(r_eax+0x84u)); r_esp -= 4; W32(r_esp, 0x787b8cu); call_ind(t); }
    /* 00787b8c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00787b8e: jne 0x787c76 */ if (!fZ) goto L_00787c76;
L_00787b94:; BB(0x00787b94);
    /* 00787b94: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 00787b97: test eax, 0x600000 */ {  u32 a = r_eax; u32 b = 0x600000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00787b9c: jne 0x787c73 */ if (!fZ) goto L_00787c73;
L_00787ba2:; BB(0x00787ba2);
    /* 00787ba2: mov eax, dword ptr [ebp + 0x318] */ r_eax = R32((u32)(r_ebp+0x318u));
    /* 00787ba8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00787baa: je 0x787c84 */ if (fZ) goto L_00787c84;
L_00787bb0:; BB(0x00787bb0);
    /* 00787bb0: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00787bb2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00787bb4: mov word ptr [esi + 0x1c], ax */ W16((u32)(r_esi+0x1cu), (u16)r_eax);
L_00787bb8:; BB(0x00787bb8);
    /* 00787bb8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00787bba: jne 0x787c05 */ if (!fZ) goto L_00787c05;
L_00787bbc:; BB(0x00787bbc);
    /* 00787bbc: mov edx, dword ptr [ebp + 0x318] */ r_edx = R32((u32)(r_ebp+0x318u));
    /* 00787bc2: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00787bc5: test dword ptr [0xa0f674], eax */ {  u32 a = R32((u32)(0xa0f674u)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00787bcb: jne 0x787bf7 */ if (!fZ) goto L_00787bf7;
L_00787bcd:; BB(0x00787bcd);
    /* 00787bcd: fld dword ptr [edx + 0x24] */ FPUSH(R_F32((u32)(r_edx+0x24u)));
    /* 00787bd0: fcomp dword ptr [0x97a1e4] */ fx_compare(ST(0), R_F32((u32)(0x97a1e4u))); FPOP();
    /* 00787bd6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00787bd8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00787bd9: jbe 0x787be9 */ if ((fC||fZ)) goto L_00787be9;
L_00787bdb:; BB(0x00787bdb);
    /* 00787bdb: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00787bde: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00787be0: call dword ptr [eax + 0xf4] */ { u32 t = R32((u32)(r_eax+0xf4u)); r_esp -= 4; W32(r_esp, 0x787be6u); call_ind(t); }
    /* 00787be6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00787be7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00787be8: ret  */ FN_RET(0x00787a80); r_esp += 4; return;
L_00787be9:; BB(0x00787be9);
    /* 00787be9: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00787bec: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00787bee: call dword ptr [eax + 0xf0] */ { u32 t = R32((u32)(r_eax+0xf0u)); r_esp -= 4; W32(r_esp, 0x787bf4u); call_ind(t); }
    /* 00787bf4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00787bf5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00787bf6: ret  */ FN_RET(0x00787a80); r_esp += 4; return;
L_00787bf7:; BB(0x00787bf7);
    /* 00787bf7: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00787bfa: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00787bfc: call dword ptr [eax + 0xf8] */ { u32 t = R32((u32)(r_eax+0xf8u)); r_esp -= 4; W32(r_esp, 0x787c02u); call_ind(t); }
    /* 00787c02: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00787c03: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00787c04: ret  */ FN_RET(0x00787a80); r_esp += 4; return;
L_00787c05:; BB(0x00787c05);
    /* 00787c05: jle 0x787c73 */ if ((fZ||fS!=fO)) goto L_00787c73;
L_00787c07:; BB(0x00787c07);
    /* 00787c07: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00787c0a: jg 0x787c73 */ if ((!fZ&&fS==fO)) goto L_00787c73;
L_00787c0c:; BB(0x00787c0c);
    /* 00787c0c: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00787c0f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00787c11: call dword ptr [eax + 0x78] */ { u32 t = R32((u32)(r_eax+0x78u)); r_esp -= 4; W32(r_esp, 0x787c14u); call_ind(t); }
    /* 00787c14: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00787c17: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00787c19: call dword ptr [eax + 0x7c] */ { u32 t = R32((u32)(r_eax+0x7cu)); r_esp -= 4; W32(r_esp, 0x787c1cu); call_ind(t); }
    /* 00787c1c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00787c1e: je 0x787c2e */ if (fZ) goto L_00787c2e;
L_00787c20:; BB(0x00787c20);
    /* 00787c20: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00787c23: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00787c25: call dword ptr [eax + 0xf0] */ { u32 t = R32((u32)(r_eax+0xf0u)); r_esp -= 4; W32(r_esp, 0x787c2bu); call_ind(t); }
    /* 00787c2b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00787c2c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00787c2d: ret  */ FN_RET(0x00787a80); r_esp += 4; return;
L_00787c2e:; BB(0x00787c2e);
    /* 00787c2e: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00787c31: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00787c33: call dword ptr [eax + 0x90] */ { u32 t = R32((u32)(r_eax+0x90u)); r_esp -= 4; W32(r_esp, 0x787c39u); call_ind(t); }
    /* 00787c39: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00787c3b: je 0x787c4b */ if (fZ) goto L_00787c4b;
L_00787c3d:; BB(0x00787c3d);
    /* 00787c3d: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00787c40: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00787c42: call dword ptr [eax + 0xf4] */ { u32 t = R32((u32)(r_eax+0xf4u)); r_esp -= 4; W32(r_esp, 0x787c48u); call_ind(t); }
    /* 00787c48: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00787c49: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00787c4a: ret  */ FN_RET(0x00787a80); r_esp += 4; return;
L_00787c4b:; BB(0x00787c4b);
    /* 00787c4b: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00787c4e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00787c50: call dword ptr [eax + 0x80] */ { u32 t = R32((u32)(r_eax+0x80u)); r_esp -= 4; W32(r_esp, 0x787c56u); call_ind(t); }
    /* 00787c56: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00787c58: je 0x787c68 */ if (fZ) goto L_00787c68;
L_00787c5a:; BB(0x00787c5a);
    /* 00787c5a: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00787c5d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00787c5f: call dword ptr [eax + 0xf8] */ { u32 t = R32((u32)(r_eax+0xf8u)); r_esp -= 4; W32(r_esp, 0x787c65u); call_ind(t); }
    /* 00787c65: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00787c66: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00787c67: ret  */ FN_RET(0x00787a80); r_esp += 4; return;
L_00787c68:; BB(0x00787c68);
    /* 00787c68: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00787c6b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00787c6d: call dword ptr [eax + 0xf4] */ { u32 t = R32((u32)(r_eax+0xf4u)); r_esp -= 4; W32(r_esp, 0x787c73u); call_ind(t); }
L_00787c73:; BB(0x00787c73);
    /* 00787c73: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00787c74: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00787c75: ret  */ FN_RET(0x00787a80); r_esp += 4; return;
L_00787c76:; BB(0x00787c76);
    /* 00787c76: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00787c79: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00787c7b: call dword ptr [eax + 0xfc] */ { u32 t = R32((u32)(r_eax+0xfcu)); r_esp -= 4; W32(r_esp, 0x787c81u); call_ind(t); }
    /* 00787c81: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00787c82: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00787c83: ret  */ FN_RET(0x00787a80); r_esp += 4; return;
L_00787c84:; BB(0x00787c84);
    /* 00787c84: mov edx, 2 */ r_edx = 0x2u;
    /* 00787c89: mov eax, 2 */ r_eax = 0x2u;
    /* 00787c8e: mov word ptr [esi + 0x1c], ax */ W16((u32)(r_esi+0x1cu), (u16)r_eax);
    /* 00787c92: jmp 0x787bb8 */ goto L_00787bb8;
L_00787c97:; BB(0x00787c97);
    /* 00787c97: movzx eax, word ptr [esi + 8] */ r_eax = (u32)R16((u32)(r_esi+0x8u));
    /* 00787c9b: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00787ca0: mov word ptr [esi + 8], ax */ W16((u32)(r_esi+0x8u), (u16)r_eax);
    /* 00787ca4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00787ca5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00787ca6: ret  */ FN_RET(0x00787a80); r_esp += 4; return;
}

void f_00787ca8(void) /* sub_787CA8 */
{
    FN_ENTER(0x00787ca8);
    /* 00787ca8: mov dword ptr [0xa9c220], 0x3f800000 */ W32((u32)(0xa9c220u), 0x3f800000u);
    /* 00787cb2: mov dword ptr [0xa9c224], 0x41000000 */ W32((u32)(0xa9c224u), 0x41000000u);
    /* 00787cbc: mov dword ptr [0xa9c228], 0x3fc00000 */ W32((u32)(0xa9c228u), 0x3fc00000u);
    /* 00787cc6: ret  */ FN_RET(0x00787ca8); r_esp += 4; return;
}

void f_00787cc8(void) /* sub_787CC8 */
{
    FN_ENTER(0x00787cc8);
    /* 00787cc8: call 0x7a61a4 */ r_esp -= 4; W32(r_esp, 0x787ccdu); f_007a61a4();
    /* 00787ccd: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00787cd0: jne 0x787cdc */ if (!fZ) goto L_00787cdc;
L_00787cd2:; BB(0x00787cd2);
    /* 00787cd2: mov dword ptr [0xa9c22c], 0 */ W32((u32)(0xa9c22cu), 0x0u);
L_00787cdc:; BB(0x00787cdc);
    /* 00787cdc: ret  */ FN_RET(0x00787cc8); r_esp += 4; return;
}

void f_00787ce0(void) /* sub_787CE0 */
{
    FN_ENTER(0x00787ce0);
    /* 00787ce0: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00787ce3: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x787ce8u); f_00807ac0();
    /* 00787ce8: mov edx, dword ptr [eax*4 + 0x9fcae0] */ r_edx = R32((u32)(r_eax*4+0x9fcae0u));
    /* 00787cef: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00787cf1: je 0x787d38 */ if (fZ) goto L_00787d38;
L_00787cf3:; BB(0x00787cf3);
    /* 00787cf3: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 00787cf6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00787cf8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00787cfa: je 0x787d09 */ if (fZ) goto L_00787d09;
L_00787cfc:; BB(0x00787cfc);
    /* 00787cfc: add edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00787cff: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 00787d02: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00787d05: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00787d07: jne 0x787cfc */ if (!fZ) goto L_00787cfc;
L_00787d09:; BB(0x00787d09);
    /* 00787d09: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00787d0b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00787d0d: jle 0x787d38 */ if ((fZ||fS!=fO)) goto L_00787d38;
L_00787d0f:; BB(0x00787d0f);
    /* 00787d0f: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 00787d13: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00787d15: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 00787d19: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 00787d1c: mov esi, eax */ r_esi = r_eax;
    /* 00787d1e: mov edi, edx */ r_edi = r_edx;
L_00787d20:; BB(0x00787d20);
    /* 00787d20: add edi, -8 */ {  u32 a = r_edi; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00787d23: call dword ptr [edi + 4] */ { u32 t = R32((u32)(r_edi+0x4u)); r_esp -= 4; W32(r_esp, 0x787d26u); call_ind(t); }
    /* 00787d26: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00787d29: cmp ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00787d2b: jl 0x787d20 */ if ((fS!=fO)) goto L_00787d20;
L_00787d2d:; BB(0x00787d2d);
    /* 00787d2d: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 00787d31: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 00787d35: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
L_00787d38:; BB(0x00787d38);
    /* 00787d38: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00787d3b: ret  */ FN_RET(0x00787ce0); r_esp += 4; return;
}

void f_00787d3c(void) /* sub_787D3C */
{
    FN_ENTER(0x00787d3c);
    /* 00787d3c: mov dword ptr [0xa9c240], 0x3f800000 */ W32((u32)(0xa9c240u), 0x3f800000u);
    /* 00787d46: mov dword ptr [0xa9c244], 0x41000000 */ W32((u32)(0xa9c244u), 0x41000000u);
    /* 00787d50: mov dword ptr [0xa9c248], 0x3fc00000 */ W32((u32)(0xa9c248u), 0x3fc00000u);
    /* 00787d5a: ret  */ FN_RET(0x00787d3c); r_esp += 4; return;
}

void f_00787d5c(void) /* sub_787D5C */
{
    FN_ENTER(0x00787d5c);
    /* 00787d5c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00787d5d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00787d5e: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 00787d62: mov edx, dword ptr [eax*4 + 0x9fcae0] */ r_edx = R32((u32)(r_eax*4+0x9fcae0u));
    /* 00787d69: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00787d6b: je 0x787d8c */ if (fZ) goto L_00787d8c;
L_00787d6d:; BB(0x00787d6d);
    /* 00787d6d: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00787d6f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00787d71: je 0x787d8c */ if (fZ) goto L_00787d8c;
L_00787d73:; BB(0x00787d73);
    /* 00787d73: mov ebx, eax */ r_ebx = r_eax;
    /* 00787d75: mov esi, edx */ r_esi = r_edx;
L_00787d77:; BB(0x00787d77);
    /* 00787d77: call 0x5ba1f0 */ r_esp -= 4; W32(r_esp, 0x787d7cu); f_005ba1f0();
    /* 00787d7c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00787d7e: jne 0x787d94 */ if (!fZ) goto L_00787d94;
L_00787d80:; BB(0x00787d80);
    /* 00787d80: call ebx */ { u32 t = r_ebx; r_esp -= 4; W32(r_esp, 0x787d82u); call_ind(t); }
    /* 00787d82: mov ebx, dword ptr [esi + 8] */ r_ebx = R32((u32)(r_esi+0x8u));
    /* 00787d85: add esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00787d88: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00787d8a: jne 0x787d77 */ if (!fZ) goto L_00787d77;
L_00787d8c:; BB(0x00787d8c);
    /* 00787d8c: mov eax, 1 */ r_eax = 0x1u;
    /* 00787d91: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00787d92: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00787d93: ret  */ FN_RET(0x00787d5c); r_esp += 4; return;
L_00787d94:; BB(0x00787d94);
    /* 00787d94: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00787d96: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00787d97: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00787d98: ret  */ FN_RET(0x00787d5c); r_esp += 4; return;
}

void f_00787d9c(void) /* sub_787D9C */
{
    FN_ENTER(0x00787d9c);
    /* 00787d9c: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x787da1u); f_00807ac0();
    /* 00787da1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00787da2: call 0x787d5c */ r_esp -= 4; W32(r_esp, 0x787da7u); f_00787d5c();
    /* 00787da7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00787da8: ret  */ FN_RET(0x00787d9c); r_esp += 4; return;
}

void f_00787dac(void) /* sub_787DAC */
{
    FN_ENTER(0x00787dac);
    /* 00787dac: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00787dad: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00787daf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00787db1: call 0x787dd0 */ r_esp -= 4; W32(r_esp, 0x787db6u); f_00787dd0();
    /* 00787db6: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00787dba: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00787dbc: jne 0x787dc2 */ if (!fZ) goto L_00787dc2;
L_00787dbe:; BB(0x00787dbe);
    /* 00787dbe: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00787dbf: ret 4 */ FN_RET(0x00787dac); r_esp += 8; return;
L_00787dc2:; BB(0x00787dc2);
    /* 00787dc2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00787dc3: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x787dc8u); f_005c2f74();
    /* 00787dc8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00787dc9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00787dca: ret 4 */ FN_RET(0x00787dac); r_esp += 8; return;
}

void f_00787dd0(void) /* sub_787DD0 */
{
    FN_ENTER(0x00787dd0);
    /* 00787dd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00787dd1: mov ebp, esp */ r_ebp = r_esp;
    /* 00787dd3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00787dd5: push 0x8f492c */ { u32 v = 0x8f492cu; r_esp -= 4; W32(r_esp, v); }
    /* 00787dda: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00787de0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00787de1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00787de8: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00787deb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00787dee: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00787df1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00787df4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00787df7: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00787dfa: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00787e01: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00787e04: push dword ptr [eax + 0x28] */ { u32 v = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 00787e07: mov dword ptr [eax], 0xb44d00 */ W32((u32)(r_eax), 0xb44d00u);
    /* 00787e0d: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x787e12u); f_00857e98();
    /* 00787e12: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00787e15: push dword ptr [eax + 0x24] */ { u32 v = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 00787e18: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x787e1du); f_00857e98();
    /* 00787e1d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00787e20: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00787e27: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00787e2a: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x787e2fu); f_008171e8();
    /* 00787e2f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00787e32: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00787e39: mov esp, ebp */ r_esp = r_ebp;
    /* 00787e3b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00787e3c: ret  */ FN_RET(0x00787dd0); r_esp += 4; return;
}

void f_00787e40(void) /* sub_787E40 */
{
    FN_ENTER(0x00787e40);
    /* 00787e40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00787e41: mov ebp, esp */ r_ebp = r_esp;
    /* 00787e43: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00787e45: push 0x8f4948 */ { u32 v = 0x8f4948u; r_esp -= 4; W32(r_esp, v); }
    /* 00787e4a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00787e50: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00787e51: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00787e58: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00787e5b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00787e5e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00787e61: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00787e64: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00787e67: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00787e6a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00787e6d: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00787e70: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00787e73: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x787e78u); f_008193cc();
    /* 00787e78: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00787e7f: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00787e82: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00787e85: mov dword ptr [edx], 0xb44d00 */ W32((u32)(r_edx), 0xb44d00u);
    /* 00787e8b: mov eax, dword ptr [0x9fce40] */ r_eax = R32((u32)(0x9fce40u));
    /* 00787e90: mov dword ptr [edx + 0x20], 0 */ W32((u32)(r_edx+0x20u), 0x0u);
    /* 00787e97: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00787e9a: mov dword ptr [edx + 0x1c], ecx */ W32((u32)(r_edx+0x1cu), r_ecx);
    /* 00787e9d: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00787e9f: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00787ea1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00787ea2: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x787ea7u); f_008581c5();
    /* 00787ea7: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00787eaa: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 00787ead: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00787eb0: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00787eb2: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00787eb4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00787eb5: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x787ebau); f_008581c5();
    /* 00787eba: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00787ebd: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00787ec0: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 00787ec3: mov dword ptr [ecx + 0x28], eax */ W32((u32)(r_ecx+0x28u), r_eax);
    /* 00787ec6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00787ec8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00787eca: jle 0x787ee8 */ if ((fZ||fS!=fO)) goto L_00787ee8;
L_00787ecc:; BB(0x00787ecc);
    /* 00787ecc: mov edx, dword ptr [ecx + 0x24] */ r_edx = R32((u32)(r_ecx+0x24u));
    /* 00787ecf: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00787ed1: mov dword ptr [edx + eax*4], ebx */ W32((u32)(r_edx+r_eax*4), r_ebx);
    /* 00787ed4: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00787ed7: mov esi, dword ptr [ecx + 0x28] */ r_esi = R32((u32)(r_ecx+0x28u));
    /* 00787eda: mov dword ptr [esi + eax*4], ebx */ W32((u32)(r_esi+r_eax*4), r_ebx);
    /* 00787edd: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00787ee0: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00787ee3: cmp eax, dword ptr [ecx + 0x1c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x1cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00787ee6: jl 0x787ecc */ if ((fS!=fO)) goto L_00787ecc;
L_00787ee8:; BB(0x00787ee8);
    /* 00787ee8: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00787eeb: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00787eee: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00787ef1: mov eax, ecx */ r_eax = r_ecx;
    /* 00787ef3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00787ef6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00787efd: mov esp, ebp */ r_esp = r_ebp;
    /* 00787eff: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00787f00: ret 8 */ FN_RET(0x00787e40); r_esp += 12; return;
}

void f_00787f04(void) /* sub_787F04 */
{
    FN_ENTER(0x00787f04);
    /* 00787f04: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00787f05: mov eax, ecx */ r_eax = r_ecx;
    /* 00787f07: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 00787f0a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00787f0c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00787f0e: jle 0x787f2a */ if ((fZ||fS!=fO)) goto L_00787f2a;
L_00787f10:; BB(0x00787f10);
    /* 00787f10: mov eax, dword ptr [eax + 0x28] */ r_eax = R32((u32)(r_eax+0x28u));
L_00787f13:; BB(0x00787f13);
    /* 00787f13: mov ebx, dword ptr [eax + ecx*4] */ r_ebx = R32((u32)(r_eax+r_ecx*4));
    /* 00787f16: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00787f19: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00787f1b: je 0x787f26 */ if (fZ) goto L_00787f26;
L_00787f1d:; BB(0x00787f1d);
    /* 00787f1d: movzx ebx, word ptr [ebx + 2] */ r_ebx = (u32)R16((u32)(r_ebx+0x2u));
    /* 00787f21: test bl, 8 */ {  u32 a = (u8)r_ebx; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00787f24: je 0x787f2e */ if (fZ) goto L_00787f2e;
L_00787f26:; BB(0x00787f26);
    /* 00787f26: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00787f28: jl 0x787f13 */ if ((fS!=fO)) goto L_00787f13;
L_00787f2a:; BB(0x00787f2a);
    /* 00787f2a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00787f2c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00787f2d: ret  */ FN_RET(0x00787f04); r_esp += 4; return;
L_00787f2e:; BB(0x00787f2e);
    /* 00787f2e: mov eax, 1 */ r_eax = 0x1u;
    /* 00787f33: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00787f34: ret  */ FN_RET(0x00787f04); r_esp += 4; return;
}

void f_00787f38(void) /* sub_787F38 */
{
    FN_ENTER(0x00787f38);
    /* 00787f38: mov dword ptr [0xa9c460], 0x3f800000 */ W32((u32)(0xa9c460u), 0x3f800000u);
    /* 00787f42: mov dword ptr [0xa9c464], 0x41000000 */ W32((u32)(0xa9c464u), 0x41000000u);
    /* 00787f4c: mov dword ptr [0xa9c468], 0x3fc00000 */ W32((u32)(0xa9c468u), 0x3fc00000u);
    /* 00787f56: ret  */ FN_RET(0x00787f38); r_esp += 4; return;
}

void f_00787f58(void) /* sub_787F58 */
{
    FN_ENTER(0x00787f58);
    /* 00787f58: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00787f59: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00787f5b: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 00787f5e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00787f60: je 0x787f6e */ if (fZ) goto L_00787f6e;
L_00787f62:; BB(0x00787f62);
    /* 00787f62: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00787f65: je 0x787f75 */ if (fZ) goto L_00787f75;
L_00787f67:; BB(0x00787f67);
    /* 00787f67: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00787f6a: je 0x787f83 */ if (fZ) goto L_00787f83;
L_00787f6c:; BB(0x00787f6c);
    /* 00787f6c: jmp 0x787fac */ goto L_00787fac;
L_00787f6e:; BB(0x00787f6e);
    /* 00787f6e: mov dword ptr [ebp + 0x1c], 1 */ W32((u32)(r_ebp+0x1cu), 0x1u);
L_00787f75:; BB(0x00787f75);
    /* 00787f75: mov eax, dword ptr [ebp + 0x20] */ r_eax = R32((u32)(r_ebp+0x20u));
    /* 00787f78: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00787f7a: je 0x787fae */ if (fZ) goto L_00787fae;
L_00787f7c:; BB(0x00787f7c);
    /* 00787f7c: mov dword ptr [ebp + 0x1c], 2 */ W32((u32)(r_ebp+0x1cu), 0x2u);
L_00787f83:; BB(0x00787f83);
    /* 00787f83: call 0x694c6c */ r_esp -= 4; W32(r_esp, 0x787f88u); f_00694c6c();
    /* 00787f88: push dword ptr [0xa0f678] */ { u32 v = R32((u32)(0xa0f678u)); r_esp -= 4; W32(r_esp, v); }
    /* 00787f8e: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 00787f91: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00787f93: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00787f95: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00787f97: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 00787f9e: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x787fa3u); f_007c1160();
    /* 00787fa3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00787fa5: je 0x787fac */ if (fZ) goto L_00787fac;
L_00787fa7:; BB(0x00787fa7);
    /* 00787fa7: call 0x81e298 */ r_esp -= 4; W32(r_esp, 0x787facu); f_0081e298();
L_00787fac:; BB(0x00787fac);
    /* 00787fac: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00787fad: ret  */ FN_RET(0x00787f58); r_esp += 4; return;
L_00787fae:; BB(0x00787fae);
    /* 00787fae: push 0x97a6cc */ { u32 v = 0x97a6ccu; r_esp -= 4; W32(r_esp, v); }
    /* 00787fb3: push 0x97a6c4 */ { u32 v = 0x97a6c4u; r_esp -= 4; W32(r_esp, v); }
    /* 00787fb8: call 0x73a888 */ r_esp -= 4; W32(r_esp, 0x787fbdu); f_0073a888();
    /* 00787fbd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00787fc0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00787fc2: push 0xa9c260 */ { u32 v = 0xa9c260u; r_esp -= 4; W32(r_esp, v); }
    /* 00787fc7: mov dword ptr [ebp + 0x20], eax */ W32((u32)(r_ebp+0x20u), r_eax);
    /* 00787fca: mov ecx, eax */ r_ecx = r_eax;
    /* 00787fcc: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x787fd1u); f_0073ae38();
    /* 00787fd1: jmp 0x787f7c */ goto L_00787f7c;
}

void f_00787fd4(void) /* sub_787FD4 */
{
    FN_ENTER(0x00787fd4);
    /* 00787fd4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00787fd5: mov ebp, esp */ r_ebp = r_esp;
    /* 00787fd7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00787fd9: push 0x8f4964 */ { u32 v = 0x8f4964u; r_esp -= 4; W32(r_esp, v); }
    /* 00787fde: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00787fe4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00787fe5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00787fec: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00787fef: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00787ff2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00787ff5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00787ff8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00787ffb: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00787ffe: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00788005: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00788008: mov dword ptr [eax], 0xb44d70 */ W32((u32)(r_eax), 0xb44d70u);
    /* 0078800e: call 0x815434 */ r_esp -= 4; W32(r_esp, 0x788013u); f_00815434();
    /* 00788013: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00788016: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 00788019: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078801b: je 0x788034 */ if (fZ) goto L_00788034;
L_0078801d:; BB(0x0078801d);
    /* 0078801d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00788020: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00788024: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00788029: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0078802d: mov dword ptr [ecx + 0x20], 0 */ W32((u32)(r_ecx+0x20u), 0x0u);
L_00788034:; BB(0x00788034);
    /* 00788034: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0078803b: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x788040u); f_008171e8();
    /* 00788040: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00788043: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0078804a: mov esp, ebp */ r_esp = r_ebp;
    /* 0078804c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0078804d: ret  */ FN_RET(0x00787fd4); r_esp += 4; return;
}

