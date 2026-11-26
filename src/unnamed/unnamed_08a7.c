#include "protos.h"

void f_008a7675(void) /* sub_8A7675 */
{
    FN_ENTER(0x008a7675);
    /* 008a7675: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008a7676: mov ebp, esp */ r_ebp = r_esp;
    /* 008a7678: sub esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008a767b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008a767c: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
    /* 008a767f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a7680: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 008a7682: mov si, word ptr [ebx] */ r_esi = (r_esi & 0xffff0000u) | ((R16((u32)(r_ebx))) & 0xffffu);
    /* 008a7685: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008a7686: lea eax, [ebp - 0x58] */ r_eax = (u32)(r_ebp+0xffffffa8u);
    /* 008a7689: mov ecx, esi */ r_ecx = r_esi;
    /* 008a768b: call 0x8a63ea */ r_esp -= 4; W32(r_esp, 0x8a7690u); f_008a63ea();
    /* 008a7690: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 008a7692: mov di, word ptr [ebx + 2] */ r_edi = (r_edi & 0xffff0000u) | ((R16((u32)(r_ebx+0x2u))) & 0xffffu);
    /* 008a7696: lea eax, [ebp - 0x48] */ r_eax = (u32)(r_ebp+0xffffffb8u);
    /* 008a7699: mov ecx, edi */ r_ecx = r_edi;
    /* 008a769b: call 0x8a63ea */ r_esp -= 4; W32(r_esp, 0x8a76a0u); f_008a63ea();
    /* 008a76a0: cmp si, di */ {  u32 a = (u16)r_esi; u32 b = (u16)r_edi; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008a76a3: ja 0x8a7708 */ if ((!fC&&!fZ)) goto L_008a7708;
L_008a76a5:; BB(0x008a76a5);
    /* 008a76a5: fld dword ptr [0x99b9b4] */ FPUSH(R_F32((u32)(0x99b9b4u)));
    /* 008a76ab: lea esi, [ebp - 0x18] */ r_esi = (u32)(r_ebp+0xffffffe8u);
    /* 008a76ae: fld dword ptr [ebp - 0x48] */ FPUSH(R_F32((u32)(r_ebp+0xffffffb8u)));
    /* 008a76b1: lea edi, [ebp - 0x28] */ r_edi = (u32)(r_ebp+0xffffffd8u);
    /* 008a76b4: fsub dword ptr [ebp - 0x58] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0xffffffa8u));
    /* 008a76b7: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008a76b9: fadd dword ptr [ebp - 0x58] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xffffffa8u));
    /* 008a76bc: fstp dword ptr [ebp - 0x38] */ W_F32((u32)(r_ebp+0xffffffc8u), ST(0)); FPOP();
    /* 008a76bf: fld dword ptr [ebp - 0x44] */ FPUSH(R_F32((u32)(r_ebp+0xffffffbcu)));
    /* 008a76c2: fsub dword ptr [ebp - 0x54] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0xffffffacu));
    /* 008a76c5: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008a76c7: fadd dword ptr [ebp - 0x54] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xffffffacu));
    /* 008a76ca: fstp dword ptr [ebp - 0x34] */ W_F32((u32)(r_ebp+0xffffffccu), ST(0)); FPOP();
    /* 008a76cd: fld dword ptr [ebp - 0x40] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc0u)));
    /* 008a76d0: fsub dword ptr [ebp - 0x50] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0xffffffb0u));
    /* 008a76d3: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008a76d5: fadd dword ptr [ebp - 0x50] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xffffffb0u));
    /* 008a76d8: fstp dword ptr [ebp - 0x30] */ W_F32((u32)(r_ebp+0xffffffd0u), ST(0)); FPOP();
    /* 008a76db: fld dword ptr [ebp - 0x3c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc4u)));
    /* 008a76de: fsub dword ptr [ebp - 0x4c] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0xffffffb4u));
    /* 008a76e1: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008a76e3: fadd dword ptr [ebp - 0x4c] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xffffffb4u));
    /* 008a76e6: fstp dword ptr [ebp - 0x2c] */ W_F32((u32)(r_ebp+0xffffffd4u), ST(0)); FPOP();
    /* 008a76e9: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008a76eb: fldz  */ FPUSH(0.0);
    /* 008a76ed: fstp dword ptr [ebp - 0x18] */ W_F32((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 008a76f0: fldz  */ FPUSH(0.0);
    /* 008a76f2: fstp dword ptr [ebp - 0x14] */ W_F32((u32)(r_ebp+0xffffffecu), ST(0)); FPOP();
    /* 008a76f5: fldz  */ FPUSH(0.0);
    /* 008a76f7: fstp dword ptr [ebp - 0x10] */ W_F32((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 008a76fa: fldz  */ FPUSH(0.0);
    /* 008a76fc: fstp dword ptr [ebp - 0xc] */ W_F32((u32)(r_ebp+0xfffffff4u), ST(0)); FPOP();
    /* 008a76ff: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 008a7700: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 008a7701: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 008a7702: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 008a7703: jmp 0x8a7788 */ goto L_008a7788;
L_008a7708:; BB(0x008a7708);
    /* 008a7708: fld dword ptr [ebp - 0x48] */ FPUSH(R_F32((u32)(r_ebp+0xffffffb8u)));
    /* 008a770b: fsub dword ptr [ebp - 0x58] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0xffffffa8u));
    /* 008a770e: fld dword ptr [0x99bad0] */ FPUSH(R_F32((u32)(0x99bad0u)));
    /* 008a7714: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 008a7716: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008a7718: fadd dword ptr [ebp - 0x58] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xffffffa8u));
    /* 008a771b: fstp dword ptr [ebp - 0x38] */ W_F32((u32)(r_ebp+0xffffffc8u), ST(0)); FPOP();
    /* 008a771e: fld dword ptr [ebp - 0x44] */ FPUSH(R_F32((u32)(r_ebp+0xffffffbcu)));
    /* 008a7721: fsub dword ptr [ebp - 0x54] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0xffffffacu));
    /* 008a7724: fst dword ptr [ebp + 0xc] */ W_F32((u32)(r_ebp+0xcu), ST(0));
    /* 008a7727: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008a7729: fadd dword ptr [ebp - 0x54] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xffffffacu));
    /* 008a772c: fstp dword ptr [ebp - 0x34] */ W_F32((u32)(r_ebp+0xffffffccu), ST(0)); FPOP();
    /* 008a772f: fld dword ptr [ebp - 0x40] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc0u)));
    /* 008a7732: fsub dword ptr [ebp - 0x50] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0xffffffb0u));
    /* 008a7735: fst dword ptr [ebp - 4] */ W_F32((u32)(r_ebp+0xfffffffcu), ST(0));
    /* 008a7738: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008a773a: fadd dword ptr [ebp - 0x50] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xffffffb0u));
    /* 008a773d: fstp dword ptr [ebp - 0x30] */ W_F32((u32)(r_ebp+0xffffffd0u), ST(0)); FPOP();
    /* 008a7740: fld dword ptr [ebp - 0x3c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc4u)));
    /* 008a7743: fsub dword ptr [ebp - 0x4c] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0xffffffb4u));
    /* 008a7746: fst dword ptr [ebp - 8] */ W_F32((u32)(r_ebp+0xfffffff8u), ST(0));
    /* 008a7749: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008a774b: fadd dword ptr [ebp - 0x4c] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xffffffb4u));
    /* 008a774e: fstp dword ptr [ebp - 0x2c] */ W_F32((u32)(r_ebp+0xffffffd4u), ST(0)); FPOP();
    /* 008a7751: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008a7753: fld dword ptr [0x99db94] */ FPUSH(R_F32((u32)(0x99db94u)));
    /* 008a7759: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 008a775b: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008a775d: fadd dword ptr [ebp - 0x58] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xffffffa8u));
    /* 008a7760: fstp dword ptr [ebp - 0x28] */ W_F32((u32)(r_ebp+0xffffffd8u), ST(0)); FPOP();
    /* 008a7763: fld dword ptr [ebp + 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xcu)));
    /* 008a7766: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008a7768: fadd dword ptr [ebp - 0x54] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xffffffacu));
    /* 008a776b: fstp dword ptr [ebp - 0x24] */ W_F32((u32)(r_ebp+0xffffffdcu), ST(0)); FPOP();
    /* 008a776e: fld dword ptr [ebp - 4] */ FPUSH(R_F32((u32)(r_ebp+0xfffffffcu)));
    /* 008a7771: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008a7773: fadd dword ptr [ebp - 0x50] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xffffffb0u));
    /* 008a7776: fstp dword ptr [ebp - 0x20] */ W_F32((u32)(r_ebp+0xffffffe0u), ST(0)); FPOP();
    /* 008a7779: fld dword ptr [ebp - 8] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff8u)));
    /* 008a777c: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008a777e: fadd dword ptr [ebp - 0x4c] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xffffffb4u));
    /* 008a7781: fstp dword ptr [ebp - 0x1c] */ W_F32((u32)(r_ebp+0xffffffe4u), ST(0)); FPOP();
    /* 008a7784: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008a7786: fstp st(0) */ ST(0) = ST(0); FPOP();
L_008a7788:; BB(0x008a7788);
    /* 008a7788: mov ebx, dword ptr [ebx + 4] */ r_ebx = R32((u32)(r_ebx+0x4u));
    /* 008a778b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008a778e: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 008a7790: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008a7791:; BB(0x008a7791);
    /* 008a7791: mov edx, ebx */ r_edx = r_ebx;
    /* 008a7793: and edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 008a7796: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 008a7799: mov edi, eax */ r_edi = r_eax;
    /* 008a779b: lea esi, [ebp + edx - 0x58] */ r_esi = (u32)(r_ebp+r_edx+0xffffffa8u);
    /* 008a779f: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 008a77a0: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 008a77a1: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 008a77a2: add eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008a77a5: shr ebx, 2 */ { u32 c = (2u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 008a77a8: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 008a77a9: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 008a77aa: jne 0x8a7791 */ if (!fZ) goto L_008a7791;
L_008a77ac:; BB(0x008a77ac);
    /* 008a77ac: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008a77ad: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008a77ae: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a77b0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008a77b1: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008a77b2: ret  */ FN_RET(0x008a7675); r_esp += 4; return;
}

void f_008a77b3(void) /* sub_8A77B3 */
{
    FN_ENTER(0x008a77b3);
    /* 008a77b3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008a77b4: mov ebp, esp */ r_ebp = r_esp;
    /* 008a77b6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a77b7: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 008a77ba: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008a77bb: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 008a77be: lea eax, [esi + 8] */ r_eax = (u32)(r_esi+0x8u);
    /* 008a77c1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a77c2: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008a77c3: call 0x8a7675 */ r_esp -= 4; W32(r_esp, 0x8a77c8u); f_008a7675();
    /* 008a77c8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a77ca: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a77cb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a77cc: jl 0x8a7832 */ if ((fS!=fO)) goto L_008a7832;
L_008a77ce:; BB(0x008a77ce);
    /* 008a77ce: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 008a77d0: fld dword ptr [0x99bacc] */ FPUSH(R_F32((u32)(0x99baccu)));
    /* 008a77d6: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 008a77d8: pop edx */ { u32 v = R32(r_esp); r_esp += 4; r_edx = v; }
    /* 008a77d9: lea eax, [edi + 0xc] */ r_eax = (u32)(r_edi+0xcu);
    /* 008a77dc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
L_008a77dd:; BB(0x008a77dd);
    /* 008a77dd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 008a77df: and ebx, 0xf */ {  u32 a = r_ebx; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 008a77e2: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 008a77e4: mov dword ptr [ebp + 0xc], ebx */ W32((u32)(r_ebp+0xcu), r_ebx);
    /* 008a77e7: fild dword ptr [ebp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xcu)));
    /* 008a77ea: jge 0x8a77f2 */ if ((fS==fO)) goto L_008a77f2;
L_008a77ec:; BB(0x008a77ec);
    /* 008a77ec: fadd dword ptr [0x99b9bc] */ ST(0) = ST(0) + R_F32((u32)(0x99b9bcu));
L_008a77f2:; BB(0x008a77f2);
    /* 008a77f2: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008a77f4: shr ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 008a77f7: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
    /* 008a77f9: add eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008a77fc: dec edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 008a77fd: jne 0x8a77dd */ if (!fZ) goto L_008a77dd;
L_008a77ff:; BB(0x008a77ff);
    /* 008a77ff: mov esi, dword ptr [esi + 4] */ r_esi = R32((u32)(r_esi+0x4u));
    /* 008a7802: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 008a7804: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a7805: lea eax, [edi + 0x8c] */ r_eax = (u32)(r_edi+0x8cu);
    /* 008a780b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
L_008a780c:; BB(0x008a780c);
    /* 008a780c: mov edx, esi */ r_edx = r_esi;
    /* 008a780e: and edx, 0xf */ {  u32 a = r_edx; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 008a7811: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 008a7813: mov dword ptr [ebp + 0xc], edx */ W32((u32)(r_ebp+0xcu), r_edx);
    /* 008a7816: fild dword ptr [ebp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xcu)));
    /* 008a7819: jge 0x8a7821 */ if ((fS==fO)) goto L_008a7821;
L_008a781b:; BB(0x008a781b);
    /* 008a781b: fadd dword ptr [0x99b9bc] */ ST(0) = ST(0) + R_F32((u32)(0x99b9bcu));
L_008a7821:; BB(0x008a7821);
    /* 008a7821: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008a7823: shr esi, 4 */ { u32 c = (4u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 008a7826: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
    /* 008a7828: add eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008a782b: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 008a782c: jne 0x8a780c */ if (!fZ) goto L_008a780c;
L_008a782e:; BB(0x008a782e);
    /* 008a782e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008a7830: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_008a7832:; BB(0x008a7832);
    /* 008a7832: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008a7833: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008a7834: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008a7835: ret  */ FN_RET(0x008a77b3); r_esp += 4; return;
}

void f_008a7836(void) /* sub_8A7836 */
{
    FN_ENTER(0x008a7836);
    /* 008a7836: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008a7837: mov ebp, esp */ r_ebp = r_esp;
    /* 008a7839: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008a783c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a783d: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 008a7840: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008a7841: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 008a7844: lea eax, [esi + 8] */ r_eax = (u32)(r_esi+0x8u);
    /* 008a7847: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a7848: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008a7849: call 0x8a7675 */ r_esp -= 4; W32(r_esp, 0x8a784eu); f_008a7675();
    /* 008a784e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a7850: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a7851: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a7852: jl 0x8a796e */ if ((fS!=fO)) goto L_008a796e;
L_008a7858:; BB(0x008a7858);
    /* 008a7858: mov al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esi))) & 0xffu);
    /* 008a785a: fld dword ptr [0x99ba7c] */ FPUSH(R_F32((u32)(0x99ba7cu)));
    /* 008a7860: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 008a7863: mov dword ptr [ebp + 0xc], ecx */ W32((u32)(r_ebp+0xcu), r_ecx);
    /* 008a7866: mov cl, byte ptr [esi + 1] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_esi+0x1u))) & 0xffu);
    /* 008a7869: cmp al, cl */ {  u32 a = (u8)r_eax; u32 b = (u8)r_ecx; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 008a786b: fild dword ptr [ebp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xcu)));
    /* 008a786e: movzx edx, cl */ r_edx = (u32)(u8)r_ecx;
    /* 008a7871: mov dword ptr [ebp + 0xc], edx */ W32((u32)(r_ebp+0xcu), r_edx);
    /* 008a7874: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008a7876: fstp dword ptr [ebp - 0x20] */ W_F32((u32)(r_ebp+0xffffffe0u), ST(0)); FPOP();
    /* 008a7879: fild dword ptr [ebp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xcu)));
    /* 008a787c: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008a787e: fstp dword ptr [ebp - 0x1c] */ W_F32((u32)(r_ebp+0xffffffe4u), ST(0)); FPOP();
    /* 008a7881: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008a7883: jbe 0x8a78c7 */ if ((fC||fZ)) goto L_008a78c7;
L_008a7885:; BB(0x008a7885);
    /* 008a7885: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008a7887: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_008a7888:; BB(0x008a7888);
    /* 008a7888: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 008a788a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a788b: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008a788d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 008a788f: mov dword ptr [ebp + 0xc], ecx */ W32((u32)(r_ebp+0xcu), r_ecx);
    /* 008a7892: fild dword ptr [ebp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xcu)));
    /* 008a7895: jge 0x8a789d */ if ((fS==fO)) goto L_008a789d;
L_008a7897:; BB(0x008a7897);
    /* 008a7897: fadd dword ptr [0x99b9bc] */ ST(0) = ST(0) + R_F32((u32)(0x99b9bcu));
L_008a789d:; BB(0x008a789d);
    /* 008a789d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 008a789f: fmul dword ptr [ebp - 0x20] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffe0u));
    /* 008a78a2: mov dword ptr [ebp + 0xc], eax */ W32((u32)(r_ebp+0xcu), r_eax);
    /* 008a78a5: fild dword ptr [ebp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xcu)));
    /* 008a78a8: jge 0x8a78b0 */ if ((fS==fO)) goto L_008a78b0;
L_008a78aa:; BB(0x008a78aa);
    /* 008a78aa: fadd dword ptr [0x99b9bc] */ ST(0) = ST(0) + R_F32((u32)(0x99b9bcu));
L_008a78b0:; BB(0x008a78b0);
    /* 008a78b0: fmul dword ptr [ebp - 0x1c] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffe4u));
    /* 008a78b3: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008a78b4: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008a78b7: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008a78b9: fmul dword ptr [0x99badc] */ ST(0) = ST(0) * R_F32((u32)(0x99badcu));
    /* 008a78bf: fstp dword ptr [ebp + eax*4 - 0x20] */ W_F32((u32)(r_ebp+r_eax*4+0xffffffe0u), ST(0)); FPOP();
    /* 008a78c3: jb 0x8a7888 */ if (fC) goto L_008a7888;
L_008a78c5:; BB(0x008a78c5);
    /* 008a78c5: jmp 0x8a7911 */ goto L_008a7911;
L_008a78c7:; BB(0x008a78c7);
    /* 008a78c7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008a78c9: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_008a78ca:; BB(0x008a78ca);
    /* 008a78ca: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 008a78cc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a78cd: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008a78cf: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 008a78d1: mov dword ptr [ebp + 0xc], ecx */ W32((u32)(r_ebp+0xcu), r_ecx);
    /* 008a78d4: fild dword ptr [ebp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xcu)));
    /* 008a78d7: jge 0x8a78df */ if ((fS==fO)) goto L_008a78df;
L_008a78d9:; BB(0x008a78d9);
    /* 008a78d9: fadd dword ptr [0x99b9bc] */ ST(0) = ST(0) + R_F32((u32)(0x99b9bcu));
L_008a78df:; BB(0x008a78df);
    /* 008a78df: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 008a78e1: fmul dword ptr [ebp - 0x20] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffe0u));
    /* 008a78e4: mov dword ptr [ebp + 0xc], eax */ W32((u32)(r_ebp+0xcu), r_eax);
    /* 008a78e7: fild dword ptr [ebp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xcu)));
    /* 008a78ea: jge 0x8a78f2 */ if ((fS==fO)) goto L_008a78f2;
L_008a78ec:; BB(0x008a78ec);
    /* 008a78ec: fadd dword ptr [0x99b9bc] */ ST(0) = ST(0) + R_F32((u32)(0x99b9bcu));
L_008a78f2:; BB(0x008a78f2);
    /* 008a78f2: fmul dword ptr [ebp - 0x1c] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffe4u));
    /* 008a78f5: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008a78f6: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008a78f9: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008a78fb: fmul dword ptr [0x99dbc0] */ ST(0) = ST(0) * R_F32((u32)(0x99dbc0u));
    /* 008a7901: fstp dword ptr [ebp + eax*4 - 0x20] */ W_F32((u32)(r_ebp+r_eax*4+0xffffffe0u), ST(0)); FPOP();
    /* 008a7905: jb 0x8a78ca */ if (fC) goto L_008a78ca;
L_008a7907:; BB(0x008a7907);
    /* 008a7907: fldz  */ FPUSH(0.0);
    /* 008a7909: fstp dword ptr [ebp - 8] */ W_F32((u32)(r_ebp+0xfffffff8u), ST(0)); FPOP();
    /* 008a790c: fld1  */ FPUSH(1.0);
    /* 008a790e: fstp dword ptr [ebp - 4] */ W_F32((u32)(r_ebp+0xfffffffcu), ST(0)); FPOP();
L_008a7911:; BB(0x008a7911);
    /* 008a7911: movzx eax, byte ptr [esi + 2] */ r_eax = (u32)R8((u32)(r_esi+0x2u));
    /* 008a7915: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008a7917: mov ch, byte ptr [esi + 4] */ r_ecx = (r_ecx & 0xffff00ffu) | (((R8((u32)(r_esi+0x4u))) & 0xffu) << 8);
    /* 008a791a: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 008a791c: pop edx */ { u32 v = R32(r_esp); r_esp += 4; r_edx = v; }
    /* 008a791d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008a791e: mov cl, byte ptr [esi + 3] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_esi+0x3u))) & 0xffu);
    /* 008a7921: shl ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 008a7924: or ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 008a7926: lea eax, [edi + 0xc] */ r_eax = (u32)(r_edi+0xcu);
L_008a7929:; BB(0x008a7929);
    /* 008a7929: mov ebx, ecx */ r_ebx = r_ecx;
    /* 008a792b: and ebx, 7 */ {  u32 a = r_ebx; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 008a792e: fld dword ptr [ebp + ebx*4 - 0x20] */ FPUSH(R_F32((u32)(r_ebp+r_ebx*4+0xffffffe0u)));
    /* 008a7932: shr ecx, 3 */ { u32 c = (3u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 008a7935: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
    /* 008a7937: add eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008a793a: dec edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 008a793b: jne 0x8a7929 */ if (!fZ) goto L_008a7929;
L_008a793d:; BB(0x008a793d);
    /* 008a793d: movzx eax, byte ptr [esi + 5] */ r_eax = (u32)R8((u32)(r_esi+0x5u));
    /* 008a7941: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008a7943: mov ch, byte ptr [esi + 7] */ r_ecx = (r_ecx & 0xffff00ffu) | (((R8((u32)(r_esi+0x7u))) & 0xffu) << 8);
    /* 008a7946: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 008a7948: pop edx */ { u32 v = R32(r_esp); r_esp += 4; r_edx = v; }
    /* 008a7949: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008a794a: mov cl, byte ptr [esi + 6] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_esi+0x6u))) & 0xffu);
    /* 008a794d: shl ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 008a7950: or ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 008a7952: lea eax, [edi + 0x8c] */ r_eax = (u32)(r_edi+0x8cu);
L_008a7958:; BB(0x008a7958);
    /* 008a7958: mov esi, ecx */ r_esi = r_ecx;
    /* 008a795a: and esi, 7 */ {  u32 a = r_esi; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 008a795d: fld dword ptr [ebp + esi*4 - 0x20] */ FPUSH(R_F32((u32)(r_ebp+r_esi*4+0xffffffe0u)));
    /* 008a7961: shr ecx, 3 */ { u32 c = (3u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 008a7964: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
    /* 008a7966: add eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008a7969: dec edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 008a796a: jne 0x8a7958 */ if (!fZ) goto L_008a7958;
L_008a796c:; BB(0x008a796c);
    /* 008a796c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_008a796e:; BB(0x008a796e);
    /* 008a796e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008a796f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008a7970: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008a7971: ret  */ FN_RET(0x008a7836); r_esp += 4; return;
}

void f_008a7972(void) /* sub_8A7972 */
{
    FN_ENTER(0x008a7972);
    /* 008a7972: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 008a7976: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008a7978: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008a797c: call 0x8a6e71 */ r_esp -= 4; W32(r_esp, 0x8a7981u); f_008a6e71();
    /* 008a7981: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a7983: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a7984: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a7985: jl 0x8a7989 */ if ((fS!=fO)) goto L_008a7989;
L_008a7987:; BB(0x008a7987);
    /* 008a7987: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_008a7989:; BB(0x008a7989);
    /* 008a7989: ret  */ FN_RET(0x008a7972); r_esp += 4; return;
}

void f_008a798a(void) /* sub_8A798A */
{
    FN_ENTER(0x008a798a);
    /* 008a798a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008a798b: mov ebp, esp */ r_ebp = r_esp;
    /* 008a798d: sub esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008a7990: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008a7991: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 008a7994: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a7995: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008a7996: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 008a7998: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008a799a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a799b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008a799d: lea edi, [ebp - 0x50] */ r_edi = (u32)(r_ebp+0xffffffb0u);
    /* 008a79a0: mov dword ptr [ebx], edx */ W32((u32)(r_ebx), r_edx);
    /* 008a79a2: mov dword ptr [ebx + 4], edx */ W32((u32)(r_ebx+0x4u), r_edx);
    /* 008a79a5: rep stosd dword ptr es:[edi], eax */ while (r_ecx) { W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 008a79a7: call 0x8a64e4 */ r_esp -= 4; W32(r_esp, 0x8a79acu); f_008a64e4();
    /* 008a79ac: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 008a79af: add eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008a79b2: mov dword ptr [ebp + 8], edx */ W32((u32)(r_ebp+0x8u), r_edx);
    /* 008a79b5: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_008a79b8:; BB(0x008a79b8);
    /* 008a79b8: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008a79bb: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 008a79be: mov ecx, eax */ r_ecx = r_eax;
    /* 008a79c0: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 008a79c3: fld dword ptr [ebp + ecx - 0x50] */ FPUSH(R_F32((u32)(r_ebp+r_ecx+0xffffffb0u)));
    /* 008a79c7: fadd dword ptr [edx] */ ST(0) = ST(0) + R_F32((u32)(r_edx));
    /* 008a79c9: fst dword ptr [ebp - 8] */ W_F32((u32)(r_ebp+0xfffffff8u), ST(0));
    /* 008a79cc: fmul dword ptr [0x99ba9c] */ ST(0) = ST(0) * R_F32((u32)(0x99ba9cu));
    /* 008a79d2: fadd dword ptr [0x99b9b4] */ ST(0) = ST(0) + R_F32((u32)(0x99b9b4u));
    /* 008a79d8: fstp dword ptr [ebp - 0xc] */ W_F32((u32)(r_ebp+0xfffffff4u), ST(0)); FPOP();
    /* 008a79db: fld dword ptr [ebp - 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff4u)));
    /* 008a79de: fistp dword ptr [ebp - 0x10] */ W32((u32)(r_ebp+0xfffffff0u), (u32)fx_int32(ST(0))); FPOP();
    /* 008a79e1: mov esi, dword ptr [ebp - 0x10] */ r_esi = R32((u32)(r_ebp+0xfffffff0u));
    /* 008a79e4: shr eax, 3 */ { u32 c = (3u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 008a79e7: lea edx, [ebx + eax*4] */ r_edx = (u32)(r_ebx+r_eax*4);
    /* 008a79ea: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 008a79ec: mov edi, esi */ r_edi = r_esi;
    /* 008a79ee: shr eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 008a79f1: shl edi, 0x1c */ { u32 c = (28u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 008a79f4: or eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 008a79f6: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 008a79f8: mov dword ptr [ebp - 0xc], esi */ W32((u32)(r_ebp+0xfffffff4u), r_esi);
    /* 008a79fb: fild dword ptr [ebp - 0xc] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffff4u)));
    /* 008a79fe: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 008a7a00: jge 0x8a7a08 */ if ((fS==fO)) goto L_008a7a08;
L_008a7a02:; BB(0x008a7a02);
    /* 008a7a02: fadd dword ptr [0x99b9bc] */ ST(0) = ST(0) + R_F32((u32)(0x99b9bcu));
L_008a7a08:; BB(0x008a7a08);
    /* 008a7a08: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 008a7a0b: fmul dword ptr [0x99bacc] */ ST(0) = ST(0) * R_F32((u32)(0x99baccu));
    /* 008a7a11: and edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 008a7a14: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a7a17: fsubr dword ptr [ebp - 8] */ ST(0) = R_F32((u32)(r_ebp+0xfffffff8u)) - ST(0);
    /* 008a7a1a: je 0x8a7a2c */ if (fZ) goto L_008a7a2c;
L_008a7a1c:; BB(0x008a7a1c);
    /* 008a7a1c: fld dword ptr [0x99dbbc] */ FPUSH(R_F32((u32)(0x99dbbcu)));
    /* 008a7a22: lea eax, [ebp + ecx - 0x4c] */ r_eax = (u32)(r_ebp+r_ecx+0xffffffb4u);
    /* 008a7a26: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008a7a28: fadd dword ptr [eax] */ ST(0) = ST(0) + R_F32((u32)(r_eax));
    /* 008a7a2a: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
L_008a7a2c:; BB(0x008a7a2c);
    /* 008a7a2c: cmp dword ptr [ebp + 8], 0xc */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008a7a30: jae 0x8a7a6b */ if (!fC) goto L_008a7a6b;
L_008a7a32:; BB(0x008a7a32);
    /* 008a7a32: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a7a34: je 0x8a7a46 */ if (fZ) goto L_008a7a46;
L_008a7a36:; BB(0x008a7a36);
    /* 008a7a36: fld dword ptr [0x99dbb8] */ FPUSH(R_F32((u32)(0x99dbb8u)));
    /* 008a7a3c: lea eax, [ebp + ecx - 0x44] */ r_eax = (u32)(r_ebp+r_ecx+0xffffffbcu);
    /* 008a7a40: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008a7a42: fadd dword ptr [eax] */ ST(0) = ST(0) + R_F32((u32)(r_eax));
    /* 008a7a44: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
L_008a7a46:; BB(0x008a7a46);
    /* 008a7a46: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a7a49: fld dword ptr [0x99dbb4] */ FPUSH(R_F32((u32)(0x99dbb4u)));
    /* 008a7a4f: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008a7a51: lea eax, [ebp + ecx - 0x40] */ r_eax = (u32)(r_ebp+r_ecx+0xffffffc0u);
    /* 008a7a55: fadd dword ptr [eax] */ ST(0) = ST(0) + R_F32((u32)(r_eax));
    /* 008a7a57: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
    /* 008a7a59: je 0x8a7a6b */ if (fZ) goto L_008a7a6b;
L_008a7a5b:; BB(0x008a7a5b);
    /* 008a7a5b: fmul dword ptr [0x99bae4] */ ST(0) = ST(0) * R_F32((u32)(0x99bae4u));
    /* 008a7a61: lea ecx, [ebp + ecx - 0x3c] */ r_ecx = (u32)(r_ebp+r_ecx+0xffffffc4u);
    /* 008a7a65: fadd dword ptr [ecx] */ ST(0) = ST(0) + R_F32((u32)(r_ecx));
    /* 008a7a67: fstp dword ptr [ecx] */ W_F32((u32)(r_ecx), ST(0)); FPOP();
    /* 008a7a69: jmp 0x8a7a6d */ goto L_008a7a6d;
L_008a7a6b:; BB(0x008a7a6b);
    /* 008a7a6b: fstp st(0) */ ST(0) = ST(0); FPOP();
L_008a7a6d:; BB(0x008a7a6d);
    /* 008a7a6d: inc dword ptr [ebp + 8] */ { u32 ad = (u32)(r_ebp+0x8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008a7a70: add dword ptr [ebp - 4], 0x10 */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008a7a74: cmp dword ptr [ebp + 8], 0x10 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008a7a78: jb 0x8a79b8 */ if (fC) goto L_008a79b8;
L_008a7a7e:; BB(0x008a7a7e);
    /* 008a7a7e: mov eax, dword ptr [0xaea334] */ r_eax = R32((u32)(0xaea334u));
    /* 008a7a83: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 008a7a86: fldcw word ptr [ebp + 8] */ fcw = R16((u32)(r_ebp+0x8u));
    /* 008a7a89: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 008a7a8c: add ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008a7a8f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008a7a91: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008a7a92: call 0x8a6e71 */ r_esp -= 4; W32(r_esp, 0x8a7a97u); f_008a6e71();
    /* 008a7a97: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a7a98: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a7a99: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008a7a9a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008a7a9b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008a7a9c: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008a7a9d: ret  */ FN_RET(0x008a798a); r_esp += 4; return;
}

void f_008a7a9e(void) /* sub_8A7A9E */
{
    FN_ENTER(0x008a7a9e);
    /* 008a7a9e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008a7a9f: lea ebp, [esp - 0x70] */ r_ebp = (u32)(r_esp+0xffffff90u);
    /* 008a7aa3: sub esp, 0xa0 */ {  u32 a = r_esp; u32 b = 0xa0u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008a7aa9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008a7aaa: mov ebx, dword ptr [ebp + 0x7c] */ r_ebx = R32((u32)(r_ebp+0x7cu));
    /* 008a7aad: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a7aae: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008a7aaf: add ebx, 0xc */ {  u32 a = r_ebx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008a7ab2: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 008a7ab4: mov dword ptr [ebp + 0x68], eax */ W32((u32)(r_ebp+0x68u), r_eax);
    /* 008a7ab7: mov dword ptr [ebp + 0x64], eax */ W32((u32)(r_ebp+0x64u), r_eax);
    /* 008a7aba: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 008a7abc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a7abd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008a7abf: lea edi, [ebp - 0x30] */ r_edi = (u32)(r_ebp+0xffffffd0u);
    /* 008a7ac2: rep stosd dword ptr es:[edi], eax */ while (r_ecx) { W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 008a7ac4: call 0x8a64e4 */ r_esp -= 4; W32(r_esp, 0x8a7ac9u); f_008a64e4();
    /* 008a7ac9: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008a7acb: mov edi, ebx */ r_edi = r_ebx;
L_008a7acd:; BB(0x008a7acd);
    /* 008a7acd: mov ecx, edx */ r_ecx = r_edx;
    /* 008a7acf: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 008a7ad2: fld dword ptr [ebp + ecx - 0x30] */ FPUSH(R_F32((u32)(r_ebp+r_ecx+0xffffffd0u)));
    /* 008a7ad6: fadd dword ptr [edi] */ ST(0) = ST(0) + R_F32((u32)(r_edi));
    /* 008a7ad8: fst dword ptr [ebp + 0x5c] */ W_F32((u32)(r_ebp+0x5cu), ST(0));
    /* 008a7adb: fmul dword ptr [0x99ba90] */ ST(0) = ST(0) * R_F32((u32)(0x99ba90u));
    /* 008a7ae1: fadd dword ptr [0x99b9b4] */ ST(0) = ST(0) + R_F32((u32)(0x99b9b4u));
    /* 008a7ae7: fstp dword ptr [ebp + 0x6c] */ W_F32((u32)(r_ebp+0x6cu), ST(0)); FPOP();
    /* 008a7aea: fld dword ptr [ebp + 0x6c] */ FPUSH(R_F32((u32)(r_ebp+0x6cu)));
    /* 008a7aed: fistp dword ptr [ebp + 0x60] */ W32((u32)(r_ebp+0x60u), (u32)fx_int32(ST(0))); FPOP();
    /* 008a7af0: mov eax, dword ptr [ebp + 0x60] */ r_eax = R32((u32)(r_ebp+0x60u));
    /* 008a7af3: mov dword ptr [ebp + 0x6c], eax */ W32((u32)(r_ebp+0x6cu), r_eax);
    /* 008a7af6: fild dword ptr [ebp + 0x6c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x6cu)));
    /* 008a7af9: fmul dword ptr [0x99ba7c] */ ST(0) = ST(0) * R_F32((u32)(0x99ba7cu));
    /* 008a7aff: fcom dword ptr [ebp + 0x68] */ fx_compare(ST(0), R_F32((u32)(r_ebp+0x68u))); 
    /* 008a7b02: fst dword ptr [ebp + ecx + 0x10] */ W_F32((u32)(r_ebp+r_ecx+0x10u), ST(0));
    /* 008a7b06: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 008a7b08: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 008a7b0b: jp 0x8a7b12 */ if (fP) goto L_008a7b12;
L_008a7b0d:; BB(0x008a7b0d);
    /* 008a7b0d: fst dword ptr [ebp + 0x68] */ W_F32((u32)(r_ebp+0x68u), ST(0));
    /* 008a7b10: jmp 0x8a7b1f */ goto L_008a7b1f;
L_008a7b12:; BB(0x008a7b12);
    /* 008a7b12: fcom dword ptr [ebp + 0x64] */ fx_compare(ST(0), R_F32((u32)(r_ebp+0x64u))); 
    /* 008a7b15: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 008a7b17: test ah, 0x41 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x41u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a7b1a: jne 0x8a7b1f */ if (!fZ) goto L_008a7b1f;
L_008a7b1c:; BB(0x008a7b1c);
    /* 008a7b1c: fst dword ptr [ebp + 0x64] */ W_F32((u32)(r_ebp+0x64u), ST(0));
L_008a7b1f:; BB(0x008a7b1f);
    /* 008a7b1f: fsubr dword ptr [ebp + 0x5c] */ ST(0) = R_F32((u32)(r_ebp+0x5cu)) - ST(0);
    /* 008a7b22: mov esi, edx */ r_esi = r_edx;
    /* 008a7b24: and esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 008a7b27: cmp esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a7b2a: je 0x8a7b3c */ if (fZ) goto L_008a7b3c;
L_008a7b2c:; BB(0x008a7b2c);
    /* 008a7b2c: fld dword ptr [0x99dbbc] */ FPUSH(R_F32((u32)(0x99dbbcu)));
    /* 008a7b32: lea eax, [ebp + ecx - 0x2c] */ r_eax = (u32)(r_ebp+r_ecx+0xffffffd4u);
    /* 008a7b36: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008a7b38: fadd dword ptr [eax] */ ST(0) = ST(0) + R_F32((u32)(r_eax));
    /* 008a7b3a: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
L_008a7b3c:; BB(0x008a7b3c);
    /* 008a7b3c: cmp edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008a7b3f: jae 0x8a7b7a */ if (!fC) goto L_008a7b7a;
L_008a7b41:; BB(0x008a7b41);
    /* 008a7b41: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a7b43: je 0x8a7b55 */ if (fZ) goto L_008a7b55;
L_008a7b45:; BB(0x008a7b45);
    /* 008a7b45: fld dword ptr [0x99dbb8] */ FPUSH(R_F32((u32)(0x99dbb8u)));
    /* 008a7b4b: lea eax, [ebp + ecx - 0x24] */ r_eax = (u32)(r_ebp+r_ecx+0xffffffdcu);
    /* 008a7b4f: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008a7b51: fadd dword ptr [eax] */ ST(0) = ST(0) + R_F32((u32)(r_eax));
    /* 008a7b53: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
L_008a7b55:; BB(0x008a7b55);
    /* 008a7b55: cmp esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a7b58: fld dword ptr [0x99dbb4] */ FPUSH(R_F32((u32)(0x99dbb4u)));
    /* 008a7b5e: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008a7b60: lea eax, [ebp + ecx - 0x20] */ r_eax = (u32)(r_ebp+r_ecx+0xffffffe0u);
    /* 008a7b64: fadd dword ptr [eax] */ ST(0) = ST(0) + R_F32((u32)(r_eax));
    /* 008a7b66: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
    /* 008a7b68: je 0x8a7b7a */ if (fZ) goto L_008a7b7a;
L_008a7b6a:; BB(0x008a7b6a);
    /* 008a7b6a: fmul dword ptr [0x99bae4] */ ST(0) = ST(0) * R_F32((u32)(0x99bae4u));
    /* 008a7b70: lea eax, [ebp + ecx - 0x1c] */ r_eax = (u32)(r_ebp+r_ecx+0xffffffe4u);
    /* 008a7b74: fadd dword ptr [eax] */ ST(0) = ST(0) + R_F32((u32)(r_eax));
    /* 008a7b76: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
    /* 008a7b78: jmp 0x8a7b7c */ goto L_008a7b7c;
L_008a7b7a:; BB(0x008a7b7a);
    /* 008a7b7a: fstp st(0) */ ST(0) = ST(0); FPOP();
L_008a7b7c:; BB(0x008a7b7c);
    /* 008a7b7c: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008a7b7d: add edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008a7b80: cmp edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008a7b83: jb 0x8a7acd */ if (fC) goto L_008a7acd;
L_008a7b89:; BB(0x008a7b89);
    /* 008a7b89: mov eax, dword ptr [0xaea334] */ r_eax = R32((u32)(0xaea334u));
    /* 008a7b8e: mov dword ptr [ebp + 0x6c], eax */ W32((u32)(r_ebp+0x6cu), r_eax);
    /* 008a7b91: fldcw word ptr [ebp + 0x6c] */ fcw = R16((u32)(r_ebp+0x6cu));
    /* 008a7b94: mov esi, dword ptr [ebp + 0x78] */ r_esi = R32((u32)(r_ebp+0x78u));
    /* 008a7b97: lea eax, [esi + 8] */ r_eax = (u32)(r_esi+0x8u);
    /* 008a7b9a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008a7b9c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a7b9d: mov eax, dword ptr [ebp + 0x7c] */ r_eax = R32((u32)(r_ebp+0x7cu));
    /* 008a7ba0: call 0x8a6e71 */ r_esp -= 4; W32(r_esp, 0x8a7ba5u); f_008a6e71();
    /* 008a7ba5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 008a7ba7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a7ba8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a7ba9: jl 0x8a7ee8 */ if ((fS!=fO)) goto L_008a7ee8;
L_008a7baf:; BB(0x008a7baf);
    /* 008a7baf: fld1  */ FPUSH(1.0);
    /* 008a7bb1: fcomp dword ptr [ebp + 0x68] */ fx_compare(ST(0), R_F32((u32)(r_ebp+0x68u))); FPOP();
    /* 008a7bb4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 008a7bb6: test ah, 0x44 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x44u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 008a7bb9: jp 0x8a7bc7 */ if (fP) goto L_008a7bc7;
L_008a7bbb:; BB(0x008a7bbb);
    /* 008a7bbb: or byte ptr [esi], 0xff */ { u32 ad = (u32)(r_esi);  u32 a = R8(ad); u32 b = 0xffu; u32 r = (a | b) & 0xffu; W8(ad, r);  }
    /* 008a7bbe: or byte ptr [esi + 1], 0xff */ { u32 ad = (u32)(r_esi+0x1u);  u32 a = R8(ad); u32 b = 0xffu; u32 r = (a | b) & 0xffu; W8(ad, r);  }
    /* 008a7bc2: jmp 0x8a7c80 */ goto L_008a7c80;
L_008a7bc7:; BB(0x008a7bc7);
    /* 008a7bc7: fldz  */ FPUSH(0.0);
    /* 008a7bc9: fcomp dword ptr [ebp + 0x68] */ fx_compare(ST(0), R_F32((u32)(r_ebp+0x68u))); FPOP();
    /* 008a7bcc: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 008a7bce: test ah, 0x44 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x44u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 008a7bd1: jnp 0x8a7be7 */ if (!fP) goto L_008a7be7;
L_008a7bd3:; BB(0x008a7bd3);
    /* 008a7bd3: fld1  */ FPUSH(1.0);
    /* 008a7bd5: fcomp dword ptr [ebp + 0x64] */ fx_compare(ST(0), R_F32((u32)(r_ebp+0x64u))); FPOP();
    /* 008a7bd8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 008a7bda: test ah, 0x44 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x44u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 008a7bdd: jnp 0x8a7be7 */ if (!fP) goto L_008a7be7;
L_008a7bdf:; BB(0x008a7bdf);
    /* 008a7bdf: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 008a7be1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008a7be2: mov dword ptr [ebp + 0x7c], edi */ W32((u32)(r_ebp+0x7cu), r_edi);
    /* 008a7be5: jmp 0x8a7bf1 */ goto L_008a7bf1;
L_008a7be7:; BB(0x008a7be7);
    /* 008a7be7: mov dword ptr [ebp + 0x7c], 6 */ W32((u32)(r_ebp+0x7cu), 0x6u);
    /* 008a7bee: mov edi, dword ptr [ebp + 0x7c] */ r_edi = R32((u32)(r_ebp+0x7cu));
L_008a7bf1:; BB(0x008a7bf1);
    /* 008a7bf1: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008a7bf2: lea eax, [ebp + 0x10] */ r_eax = (u32)(r_ebp+0x10u);
    /* 008a7bf5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a7bf6: lea eax, [ebp + 0x78] */ r_eax = (u32)(r_ebp+0x78u);
    /* 008a7bf9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a7bfa: lea eax, [ebp + 0x6c] */ r_eax = (u32)(r_ebp+0x6cu);
    /* 008a7bfd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a7bfe: call 0x8a6601 */ r_esp -= 4; W32(r_esp, 0x8a7c03u); f_008a6601();
    /* 008a7c03: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008a7c06: call 0x8a64e4 */ r_esp -= 4; W32(r_esp, 0x8a7c0bu); f_008a64e4();
    /* 008a7c0b: fld dword ptr [ebp + 0x6c] */ FPUSH(R_F32((u32)(r_ebp+0x6cu)));
    /* 008a7c0e: fmul dword ptr [0x99ba90] */ ST(0) = ST(0) * R_F32((u32)(0x99ba90u));
    /* 008a7c14: fadd dword ptr [0x99b9b4] */ ST(0) = ST(0) + R_F32((u32)(0x99b9b4u));
    /* 008a7c1a: fstp dword ptr [ebp + 0x6c] */ W_F32((u32)(r_ebp+0x6cu), ST(0)); FPOP();
    /* 008a7c1d: fld dword ptr [ebp + 0x6c] */ FPUSH(R_F32((u32)(r_ebp+0x6cu)));
    /* 008a7c20: fistp dword ptr [ebp + 0x60] */ W32((u32)(r_ebp+0x60u), (u32)fx_int32(ST(0))); FPOP();
    /* 008a7c23: fld dword ptr [ebp + 0x78] */ FPUSH(R_F32((u32)(r_ebp+0x78u)));
    /* 008a7c26: mov eax, dword ptr [ebp + 0x60] */ r_eax = R32((u32)(r_ebp+0x60u));
    /* 008a7c29: fmul dword ptr [0x99ba90] */ ST(0) = ST(0) * R_F32((u32)(0x99ba90u));
    /* 008a7c2f: fadd dword ptr [0x99b9b4] */ ST(0) = ST(0) + R_F32((u32)(0x99b9b4u));
    /* 008a7c35: fstp dword ptr [ebp + 0x78] */ W_F32((u32)(r_ebp+0x78u), ST(0)); FPOP();
    /* 008a7c38: fld dword ptr [ebp + 0x78] */ FPUSH(R_F32((u32)(r_ebp+0x78u)));
    /* 008a7c3b: fistp dword ptr [ebp + 0x6c] */ W32((u32)(r_ebp+0x6cu), (u32)fx_int32(ST(0))); FPOP();
    /* 008a7c3e: mov edx, dword ptr [0xaea334] */ r_edx = R32((u32)(0xaea334u));
    /* 008a7c44: mov ecx, dword ptr [ebp + 0x6c] */ r_ecx = R32((u32)(r_ebp+0x6cu));
    /* 008a7c47: mov dword ptr [ebp + 0x78], edx */ W32((u32)(r_ebp+0x78u), r_edx);
    /* 008a7c4a: fldcw word ptr [ebp + 0x78] */ fcw = R16((u32)(r_ebp+0x78u));
    /* 008a7c4d: cmp edi, 8 */ {  u32 a = r_edi; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a7c50: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 008a7c53: mov dword ptr [ebp + 0x78], edx */ W32((u32)(r_ebp+0x78u), r_edx);
    /* 008a7c56: movzx edx, cl */ r_edx = (u32)(u8)r_ecx;
    /* 008a7c59: fild dword ptr [ebp + 0x78] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x78u)));
    /* 008a7c5c: mov dword ptr [ebp + 0x78], edx */ W32((u32)(r_ebp+0x78u), r_edx);
    /* 008a7c5f: fmul dword ptr [0x99ba7c] */ ST(0) = ST(0) * R_F32((u32)(0x99ba7cu));
    /* 008a7c65: fild dword ptr [ebp + 0x78] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x78u)));
    /* 008a7c68: fmul dword ptr [0x99ba7c] */ ST(0) = ST(0) * R_F32((u32)(0x99ba7cu));
    /* 008a7c6e: fst dword ptr [ebp + 0x78] */ W_F32((u32)(r_ebp+0x78u), ST(0));
    /* 008a7c71: jne 0x8a7c8d */ if (!fZ) goto L_008a7c8d;
L_008a7c73:; BB(0x008a7c73);
    /* 008a7c73: cmp al, cl */ {  u32 a = (u8)r_eax; u32 b = (u8)r_ecx; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008a7c75: jne 0x8a7cf5 */ if (!fZ) goto L_008a7cf5;
L_008a7c77:; BB(0x008a7c77);
    /* 008a7c77: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008a7c79: mov byte ptr [esi], al */ W8((u32)(r_esi), (u8)r_eax);
    /* 008a7c7b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008a7c7d: mov byte ptr [esi + 1], cl */ W8((u32)(r_esi+0x1u), (u8)r_ecx);
L_008a7c80:; BB(0x008a7c80);
    /* 008a7c80: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008a7c82: lea edi, [esi + 2] */ r_edi = (u32)(r_esi+0x2u);
    /* 008a7c85: stosd dword ptr es:[edi], eax */ W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4;
    /* 008a7c86: stosw word ptr es:[edi], ax */ W16(r_edi, (u16)r_eax); r_edi += rt_df ? -2 : 2;
    /* 008a7c88: jmp 0x8a7ee6 */ goto L_008a7ee6;
L_008a7c8d:; BB(0x008a7c8d);
    /* 008a7c8d: cmp edi, 6 */ {  u32 a = r_edi; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a7c90: jne 0x8a7cf5 */ if (!fZ) goto L_008a7cf5;
L_008a7c92:; BB(0x008a7c92);
    /* 008a7c92: mov byte ptr [esi], al */ W8((u32)(r_esi), (u8)r_eax);
    /* 008a7c94: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008a7c96: mov eax, dword ptr [ebp + 0x78] */ r_eax = R32((u32)(r_ebp+0x78u));
    /* 008a7c99: fstp dword ptr [ebp + 0x30] */ W_F32((u32)(r_ebp+0x30u), ST(0)); FPOP();
    /* 008a7c9c: mov dword ptr [ebp + 0x34], eax */ W32((u32)(r_ebp+0x34u), r_eax);
    /* 008a7c9f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008a7ca1: mov byte ptr [esi + 1], cl */ W8((u32)(r_esi+0x1u), (u8)r_ecx);
    /* 008a7ca4: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_008a7ca5:; BB(0x008a7ca5);
    /* 008a7ca5: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 008a7ca7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a7ca8: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008a7caa: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 008a7cac: mov dword ptr [ebp + 0x78], ecx */ W32((u32)(r_ebp+0x78u), r_ecx);
    /* 008a7caf: fild dword ptr [ebp + 0x78] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x78u)));
    /* 008a7cb2: jge 0x8a7cba */ if ((fS==fO)) goto L_008a7cba;
L_008a7cb4:; BB(0x008a7cb4);
    /* 008a7cb4: fadd dword ptr [0x99b9bc] */ ST(0) = ST(0) + R_F32((u32)(0x99b9bcu));
L_008a7cba:; BB(0x008a7cba);
    /* 008a7cba: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 008a7cbc: fmul dword ptr [ebp + 0x30] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x30u));
    /* 008a7cbf: mov dword ptr [ebp + 0x78], eax */ W32((u32)(r_ebp+0x78u), r_eax);
    /* 008a7cc2: fild dword ptr [ebp + 0x78] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x78u)));
    /* 008a7cc5: jge 0x8a7ccd */ if ((fS==fO)) goto L_008a7ccd;
L_008a7cc7:; BB(0x008a7cc7);
    /* 008a7cc7: fadd dword ptr [0x99b9bc] */ ST(0) = ST(0) + R_F32((u32)(0x99b9bcu));
L_008a7ccd:; BB(0x008a7ccd);
    /* 008a7ccd: fmul dword ptr [ebp + 0x34] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x34u));
    /* 008a7cd0: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008a7cd1: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008a7cd4: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008a7cd6: fmul dword ptr [0x99dbc0] */ ST(0) = ST(0) * R_F32((u32)(0x99dbc0u));
    /* 008a7cdc: fstp dword ptr [ebp + eax*4 + 0x30] */ W_F32((u32)(r_ebp+r_eax*4+0x30u), ST(0)); FPOP();
    /* 008a7ce0: jb 0x8a7ca5 */ if (fC) goto L_008a7ca5;
L_008a7ce2:; BB(0x008a7ce2);
    /* 008a7ce2: fldz  */ FPUSH(0.0);
    /* 008a7ce4: mov dword ptr [ebp + 0x60], 0x99dbe4 */ W32((u32)(r_ebp+0x60u), 0x99dbe4u);
    /* 008a7ceb: fstp dword ptr [ebp + 0x48] */ W_F32((u32)(r_ebp+0x48u), ST(0)); FPOP();
    /* 008a7cee: fld1  */ FPUSH(1.0);
    /* 008a7cf0: fstp dword ptr [ebp + 0x4c] */ W_F32((u32)(r_ebp+0x4cu), ST(0)); FPOP();
    /* 008a7cf3: jmp 0x8a7d47 */ goto L_008a7d47;
L_008a7cf5:; BB(0x008a7cf5);
    /* 008a7cf5: mov byte ptr [esi + 1], al */ W8((u32)(r_esi+0x1u), (u8)r_eax);
    /* 008a7cf8: fstp dword ptr [ebp + 0x30] */ W_F32((u32)(r_ebp+0x30u), ST(0)); FPOP();
    /* 008a7cfb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008a7cfd: fstp dword ptr [ebp + 0x34] */ W_F32((u32)(r_ebp+0x34u), ST(0)); FPOP();
    /* 008a7d00: mov byte ptr [esi], cl */ W8((u32)(r_esi), (u8)r_ecx);
    /* 008a7d02: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_008a7d03:; BB(0x008a7d03);
    /* 008a7d03: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 008a7d05: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a7d06: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008a7d08: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 008a7d0a: mov dword ptr [ebp + 0x78], ecx */ W32((u32)(r_ebp+0x78u), r_ecx);
    /* 008a7d0d: fild dword ptr [ebp + 0x78] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x78u)));
    /* 008a7d10: jge 0x8a7d18 */ if ((fS==fO)) goto L_008a7d18;
L_008a7d12:; BB(0x008a7d12);
    /* 008a7d12: fadd dword ptr [0x99b9bc] */ ST(0) = ST(0) + R_F32((u32)(0x99b9bcu));
L_008a7d18:; BB(0x008a7d18);
    /* 008a7d18: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 008a7d1a: fmul dword ptr [ebp + 0x30] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x30u));
    /* 008a7d1d: mov dword ptr [ebp + 0x78], eax */ W32((u32)(r_ebp+0x78u), r_eax);
    /* 008a7d20: fild dword ptr [ebp + 0x78] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x78u)));
    /* 008a7d23: jge 0x8a7d2b */ if ((fS==fO)) goto L_008a7d2b;
L_008a7d25:; BB(0x008a7d25);
    /* 008a7d25: fadd dword ptr [0x99b9bc] */ ST(0) = ST(0) + R_F32((u32)(0x99b9bcu));
L_008a7d2b:; BB(0x008a7d2b);
    /* 008a7d2b: fmul dword ptr [ebp + 0x34] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x34u));
    /* 008a7d2e: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008a7d2f: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008a7d32: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008a7d34: fmul dword ptr [0x99badc] */ ST(0) = ST(0) * R_F32((u32)(0x99badcu));
    /* 008a7d3a: fstp dword ptr [ebp + eax*4 + 0x30] */ W_F32((u32)(r_ebp+r_eax*4+0x30u), ST(0)); FPOP();
    /* 008a7d3e: jb 0x8a7d03 */ if (fC) goto L_008a7d03;
L_008a7d40:; BB(0x008a7d40);
    /* 008a7d40: mov dword ptr [ebp + 0x60], 0x99dbc4 */ W32((u32)(r_ebp+0x60u), 0x99dbc4u);
L_008a7d47:; BB(0x008a7d47);
    /* 008a7d47: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008a7d48: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 008a7d4a: mov dword ptr [ebp + 0x78], edi */ W32((u32)(r_ebp+0x78u), r_edi);
    /* 008a7d4d: fild dword ptr [ebp + 0x78] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x78u)));
    /* 008a7d50: jge 0x8a7d58 */ if ((fS==fO)) goto L_008a7d58;
L_008a7d52:; BB(0x008a7d52);
    /* 008a7d52: fadd dword ptr [0x99b9bc] */ ST(0) = ST(0) + R_F32((u32)(0x99b9bcu));
L_008a7d58:; BB(0x008a7d58);
    /* 008a7d58: fstp dword ptr [ebp + 0x58] */ W_F32((u32)(r_ebp+0x58u), ST(0)); FPOP();
    /* 008a7d5b: fld dword ptr [ebp + 0x30] */ FPUSH(R_F32((u32)(r_ebp+0x30u)));
    /* 008a7d5e: fcomp dword ptr [ebp + 0x34] */ fx_compare(ST(0), R_F32((u32)(r_ebp+0x34u))); FPOP();
    /* 008a7d61: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 008a7d63: test ah, 0x44 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x44u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 008a7d66: jnp 0x8a7d73 */ if (!fP) goto L_008a7d73;
L_008a7d68:; BB(0x008a7d68);
    /* 008a7d68: fld dword ptr [ebp + 0x34] */ FPUSH(R_F32((u32)(r_ebp+0x34u)));
    /* 008a7d6b: fsub dword ptr [ebp + 0x30] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x30u));
    /* 008a7d6e: fdivr dword ptr [ebp + 0x58] */ ST(0) = R_F32((u32)(r_ebp+0x58u)) / ST(0);
    /* 008a7d71: jmp 0x8a7d75 */ goto L_008a7d75;
L_008a7d73:; BB(0x008a7d73);
    /* 008a7d73: fldz  */ FPUSH(0.0);
L_008a7d75:; BB(0x008a7d75);
    /* 008a7d75: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 008a7d77: fstp dword ptr [ebp + 0x5c] */ W_F32((u32)(r_ebp+0x5cu), ST(0)); FPOP();
    /* 008a7d7a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a7d7b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008a7d7d: lea edi, [ebp - 0x30] */ r_edi = (u32)(r_ebp+0xffffffd0u);
    /* 008a7d80: rep stosd dword ptr es:[edi], eax */ while (r_ecx) { W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 008a7d82: call 0x8a64e4 */ r_esp -= 4; W32(r_esp, 0x8a7d87u); f_008a64e4();
    /* 008a7d87: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008a7d89: lea ecx, [esi + 3] */ r_ecx = (u32)(r_esi+0x3u);
    /* 008a7d8c: mov dword ptr [ebp + 0x68], ebx */ W32((u32)(r_ebp+0x68u), r_ebx);
L_008a7d8f:; BB(0x008a7d8f);
    /* 008a7d8f: lea esi, [eax + 8] */ r_esi = (u32)(r_eax+0x8u);
    /* 008a7d92: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008a7d94: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008a7d96: mov dword ptr [ebp + 0x78], edx */ W32((u32)(r_ebp+0x78u), r_edx);
    /* 008a7d99: mov dword ptr [ebp + 0x6c], esi */ W32((u32)(r_ebp+0x6cu), r_esi);
    /* 008a7d9c: mov ebx, eax */ r_ebx = r_eax;
    /* 008a7d9e: jae 0x8a7eba */ if (!fC) goto L_008a7eba;
L_008a7da4:; BB(0x008a7da4);
    /* 008a7da4: mov eax, dword ptr [ebp + 0x68] */ r_eax = R32((u32)(r_ebp+0x68u));
    /* 008a7da7: mov dword ptr [ebp + 0x64], eax */ W32((u32)(r_ebp+0x64u), r_eax);
L_008a7daa:; BB(0x008a7daa);
    /* 008a7daa: mov eax, dword ptr [ebp + 0x64] */ r_eax = R32((u32)(r_ebp+0x64u));
    /* 008a7dad: mov esi, ebx */ r_esi = r_ebx;
    /* 008a7daf: shl esi, 2 */ { u32 c = (2u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 008a7db2: fld dword ptr [ebp + esi - 0x30] */ FPUSH(R_F32((u32)(r_ebp+r_esi+0xffffffd0u)));
    /* 008a7db6: fadd dword ptr [eax] */ ST(0) = ST(0) + R_F32((u32)(r_eax));
    /* 008a7db8: fst dword ptr [ebp + 0x78] */ W_F32((u32)(r_ebp+0x78u), ST(0));
    /* 008a7dbb: fsub dword ptr [ebp + 0x30] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x30u));
    /* 008a7dbe: fmul dword ptr [ebp + 0x5c] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x5cu));
    /* 008a7dc1: fcom dword ptr [0x99b9cc] */ fx_compare(ST(0), R_F32((u32)(0x99b9ccu))); 
    /* 008a7dc7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 008a7dc9: test ah, 0x41 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x41u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 008a7dcc: jp 0x8a7df1 */ if (fP) goto L_008a7df1;
L_008a7dce:; BB(0x008a7dce);
    /* 008a7dce: cmp dword ptr [ebp + 0x7c], 6 */ {  u32 a = R32((u32)(r_ebp+0x7cu)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a7dd2: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008a7dd4: jne 0x8a7ded */ if (!fZ) goto L_008a7ded;
L_008a7dd6:; BB(0x008a7dd6);
    /* 008a7dd6: fld dword ptr [ebp + 0x30] */ FPUSH(R_F32((u32)(r_ebp+0x30u)));
    /* 008a7dd9: fmul dword ptr [0x99b9b4] */ ST(0) = ST(0) * R_F32((u32)(0x99b9b4u));
    /* 008a7ddf: fcomp dword ptr [ebp + 0x78] */ fx_compare(ST(0), R_F32((u32)(r_ebp+0x78u))); FPOP();
    /* 008a7de2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 008a7de4: test ah, 1 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a7de7: jne 0x8a7ded */ if (!fZ) goto L_008a7ded;
L_008a7de9:; BB(0x008a7de9);
    /* 008a7de9: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 008a7deb: jmp 0x8a7e1e */ goto L_008a7e1e;
L_008a7ded:; BB(0x008a7ded);
    /* 008a7ded: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008a7def: jmp 0x8a7e3e */ goto L_008a7e3e;
L_008a7df1:; BB(0x008a7df1);
    /* 008a7df1: fcom dword ptr [ebp + 0x58] */ fx_compare(ST(0), R_F32((u32)(r_ebp+0x58u))); 
    /* 008a7df4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 008a7df6: test ah, 1 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a7df9: jne 0x8a7e26 */ if (!fZ) goto L_008a7e26;
L_008a7dfb:; BB(0x008a7dfb);
    /* 008a7dfb: cmp dword ptr [ebp + 0x7c], 6 */ {  u32 a = R32((u32)(r_ebp+0x7cu)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a7dff: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008a7e01: jne 0x8a7e21 */ if (!fZ) goto L_008a7e21;
L_008a7e03:; BB(0x008a7e03);
    /* 008a7e03: fld dword ptr [ebp + 0x34] */ FPUSH(R_F32((u32)(r_ebp+0x34u)));
    /* 008a7e06: fadd dword ptr [0x99b9b8] */ ST(0) = ST(0) + R_F32((u32)(0x99b9b8u));
    /* 008a7e0c: fmul dword ptr [0x99b9b4] */ ST(0) = ST(0) * R_F32((u32)(0x99b9b4u));
    /* 008a7e12: fcomp dword ptr [ebp + 0x78] */ fx_compare(ST(0), R_F32((u32)(r_ebp+0x78u))); FPOP();
    /* 008a7e15: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 008a7e17: test ah, 0x41 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x41u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 008a7e1a: jp 0x8a7e21 */ if (fP) goto L_008a7e21;
L_008a7e1c:; BB(0x008a7e1c);
    /* 008a7e1c: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
L_008a7e1e:; BB(0x008a7e1e);
    /* 008a7e1e: pop eax */ { u32 v = R32(r_esp); r_esp += 4; r_eax = v; }
    /* 008a7e1f: jmp 0x8a7e3e */ goto L_008a7e3e;
L_008a7e21:; BB(0x008a7e21);
    /* 008a7e21: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008a7e23: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008a7e24: jmp 0x8a7e3e */ goto L_008a7e3e;
L_008a7e26:; BB(0x008a7e26);
    /* 008a7e26: fadd dword ptr [0x99b9b4] */ ST(0) = ST(0) + R_F32((u32)(0x99b9b4u));
    /* 008a7e2c: fstp dword ptr [ebp + 0x54] */ W_F32((u32)(r_ebp+0x54u), ST(0)); FPOP();
    /* 008a7e2f: fld dword ptr [ebp + 0x54] */ FPUSH(R_F32((u32)(r_ebp+0x54u)));
    /* 008a7e32: fistp dword ptr [ebp + 0x50] */ W32((u32)(r_ebp+0x50u), (u32)fx_int32(ST(0))); FPOP();
    /* 008a7e35: mov eax, dword ptr [ebp + 0x50] */ r_eax = R32((u32)(r_ebp+0x50u));
    /* 008a7e38: mov edi, dword ptr [ebp + 0x60] */ r_edi = R32((u32)(r_ebp+0x60u));
    /* 008a7e3b: mov eax, dword ptr [edi + eax*4] */ r_eax = R32((u32)(r_edi+r_eax*4));
L_008a7e3e:; BB(0x008a7e3e);
    /* 008a7e3e: fld dword ptr [ebp + 0x78] */ FPUSH(R_F32((u32)(r_ebp+0x78u)));
    /* 008a7e41: mov edi, eax */ r_edi = r_eax;
    /* 008a7e43: fsub dword ptr [ebp + eax*4 + 0x30] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+r_eax*4+0x30u));
    /* 008a7e47: shl edi, 0x15 */ { u32 c = (21u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 008a7e4a: shr edx, 3 */ { u32 c = (3u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 008a7e4d: or edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 008a7e4f: mov edi, ebx */ r_edi = r_ebx;
    /* 008a7e51: and edi, 3 */ {  u32 a = r_edi; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 008a7e54: cmp edi, 3 */ {  u32 a = r_edi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a7e57: je 0x8a7e69 */ if (fZ) goto L_008a7e69;
L_008a7e59:; BB(0x008a7e59);
    /* 008a7e59: fld dword ptr [0x99dbbc] */ FPUSH(R_F32((u32)(0x99dbbcu)));
    /* 008a7e5f: lea eax, [ebp + esi - 0x2c] */ r_eax = (u32)(r_ebp+r_esi+0xffffffd4u);
    /* 008a7e63: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008a7e65: fadd dword ptr [eax] */ ST(0) = ST(0) + R_F32((u32)(r_eax));
    /* 008a7e67: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
L_008a7e69:; BB(0x008a7e69);
    /* 008a7e69: cmp ebx, 0xc */ {  u32 a = r_ebx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008a7e6c: jae 0x8a7ea7 */ if (!fC) goto L_008a7ea7;
L_008a7e6e:; BB(0x008a7e6e);
    /* 008a7e6e: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a7e70: je 0x8a7e82 */ if (fZ) goto L_008a7e82;
L_008a7e72:; BB(0x008a7e72);
    /* 008a7e72: fld dword ptr [0x99dbb8] */ FPUSH(R_F32((u32)(0x99dbb8u)));
    /* 008a7e78: lea eax, [ebp + esi - 0x24] */ r_eax = (u32)(r_ebp+r_esi+0xffffffdcu);
    /* 008a7e7c: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008a7e7e: fadd dword ptr [eax] */ ST(0) = ST(0) + R_F32((u32)(r_eax));
    /* 008a7e80: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
L_008a7e82:; BB(0x008a7e82);
    /* 008a7e82: cmp edi, 3 */ {  u32 a = r_edi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a7e85: fld dword ptr [0x99dbb4] */ FPUSH(R_F32((u32)(0x99dbb4u)));
    /* 008a7e8b: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008a7e8d: lea eax, [ebp + esi - 0x20] */ r_eax = (u32)(r_ebp+r_esi+0xffffffe0u);
    /* 008a7e91: fadd dword ptr [eax] */ ST(0) = ST(0) + R_F32((u32)(r_eax));
    /* 008a7e93: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
    /* 008a7e95: je 0x8a7ea7 */ if (fZ) goto L_008a7ea7;
L_008a7e97:; BB(0x008a7e97);
    /* 008a7e97: fmul dword ptr [0x99bae4] */ ST(0) = ST(0) * R_F32((u32)(0x99bae4u));
    /* 008a7e9d: lea eax, [ebp + esi - 0x1c] */ r_eax = (u32)(r_ebp+r_esi+0xffffffe4u);
    /* 008a7ea1: fadd dword ptr [eax] */ ST(0) = ST(0) + R_F32((u32)(r_eax));
    /* 008a7ea3: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
    /* 008a7ea5: jmp 0x8a7ea9 */ goto L_008a7ea9;
L_008a7ea7:; BB(0x008a7ea7);
    /* 008a7ea7: fstp st(0) */ ST(0) = ST(0); FPOP();
L_008a7ea9:; BB(0x008a7ea9);
    /* 008a7ea9: add dword ptr [ebp + 0x64], 0x10 */ { u32 ad = (u32)(r_ebp+0x64u);  u32 a = R32(ad); u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008a7ead: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008a7eae: cmp ebx, dword ptr [ebp + 0x6c] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+0x6cu)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008a7eb1: jb 0x8a7daa */ if (fC) goto L_008a7daa;
L_008a7eb7:; BB(0x008a7eb7);
    /* 008a7eb7: mov dword ptr [ebp + 0x78], edx */ W32((u32)(r_ebp+0x78u), r_edx);
L_008a7eba:; BB(0x008a7eba);
    /* 008a7eba: mov al, byte ptr [ebp + 0x7a] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0x7au))) & 0xffu);
    /* 008a7ebd: add dword ptr [ebp + 0x68], 0x80 */ { u32 ad = (u32)(r_ebp+0x68u);  u32 a = R32(ad); u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008a7ec4: mov byte ptr [ecx + 1], al */ W8((u32)(r_ecx+0x1u), (u8)r_eax);
    /* 008a7ec7: mov eax, dword ptr [ebp + 0x6c] */ r_eax = R32((u32)(r_ebp+0x6cu));
    /* 008a7eca: mov byte ptr [ecx - 1], dl */ W8((u32)(r_ecx+0xffffffffu), (u8)r_edx);
    /* 008a7ecd: mov byte ptr [ecx], dh */ W8((u32)(r_ecx), (u8)(r_edx>>8));
    /* 008a7ecf: add ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008a7ed2: cmp eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008a7ed5: jb 0x8a7d8f */ if (fC) goto L_008a7d8f;
L_008a7edb:; BB(0x008a7edb);
    /* 008a7edb: mov eax, dword ptr [0xaea334] */ r_eax = R32((u32)(0xaea334u));
    /* 008a7ee0: mov dword ptr [ebp + 0x7c], eax */ W32((u32)(r_ebp+0x7cu), r_eax);
    /* 008a7ee3: fldcw word ptr [ebp + 0x7c] */ fcw = R16((u32)(r_ebp+0x7cu));
L_008a7ee6:; BB(0x008a7ee6);
    /* 008a7ee6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_008a7ee8:; BB(0x008a7ee8);
    /* 008a7ee8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008a7ee9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008a7eea: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008a7eeb: add ebp, 0x70 */ {  u32 a = r_ebp; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008a7eee: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008a7eef: ret  */ FN_RET(0x008a7a9e); r_esp += 4; return;
}

void f_008a7ef0(void) /* sub_8A7EF0 */
{
    FN_ENTER(0x008a7ef0);
    /* 008a7ef0: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008a7ef4: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008a7ef8: call 0x8a77b3 */ r_esp -= 4; W32(r_esp, 0x8a7efdu); f_008a77b3();
    /* 008a7efd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a7eff: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a7f00: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a7f01: jl 0x8a7f12 */ if ((fS!=fO)) goto L_008a7f12;
L_008a7f03:; BB(0x008a7f03);
    /* 008a7f03: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 008a7f07: call 0x8a6436 */ r_esp -= 4; W32(r_esp, 0x8a7f0cu); f_008a6436();
    /* 008a7f0c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a7f0e: jl 0x8a7f12 */ if ((fS!=fO)) goto L_008a7f12;
L_008a7f10:; BB(0x008a7f10);
    /* 008a7f10: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_008a7f12:; BB(0x008a7f12);
    /* 008a7f12: ret  */ FN_RET(0x008a7ef0); r_esp += 4; return;
}

void f_008a7f13(void)
{
    FN_ENTER(0x008a7f13);
    /* 008a7f13: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008a7f17: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008a7f1b: call 0x8a7836 */ r_esp -= 4; W32(r_esp, 0x8a7f20u); f_008a7836();
    /* 008a7f20: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a7f22: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a7f23: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a7f24: jl 0x8a7f35 */ if ((fS!=fO)) goto L_008a7f35;
L_008a7f26:; BB(0x008a7f26);
    /* 008a7f26: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 008a7f2a: call 0x8a6436 */ r_esp -= 4; W32(r_esp, 0x8a7f2fu); f_008a6436();
    /* 008a7f2f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a7f31: jl 0x8a7f35 */ if ((fS!=fO)) goto L_008a7f35;
L_008a7f33:; BB(0x008a7f33);
    /* 008a7f33: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_008a7f35:; BB(0x008a7f35);
    /* 008a7f35: ret  */ FN_RET(0x008a7f13); r_esp += 4; return;
}

void f_008a7f36(void) /* sub_8A7F36 */
{
    FN_ENTER(0x008a7f36);
    /* 008a7f36: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008a7f37: mov ebp, esp */ r_ebp = r_esp;
    /* 008a7f39: sub esp, 0x100 */ {  u32 a = r_esp; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008a7f3f: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 008a7f42: lea ecx, [ebp - 0x100] */ r_ecx = (u32)(r_ebp+0xffffff00u);
    /* 008a7f48: call 0x8a64b4 */ r_esp -= 4; W32(r_esp, 0x8a7f4du); f_008a64b4();
    /* 008a7f4d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a7f4f: jl 0x8a7f68 */ if ((fS!=fO)) goto L_008a7f68;
L_008a7f51:; BB(0x008a7f51);
    /* 008a7f51: lea eax, [ebp - 0x100] */ r_eax = (u32)(r_ebp+0xffffff00u);
    /* 008a7f57: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a7f58: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008a7f5b: call 0x8a798a */ r_esp -= 4; W32(r_esp, 0x8a7f60u); f_008a798a();
    /* 008a7f60: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a7f62: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a7f63: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a7f64: jl 0x8a7f68 */ if ((fS!=fO)) goto L_008a7f68;
L_008a7f66:; BB(0x008a7f66);
    /* 008a7f66: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_008a7f68:; BB(0x008a7f68);
    /* 008a7f68: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008a7f69: ret  */ FN_RET(0x008a7f36); r_esp += 4; return;
}

void f_008a7f6a(void) /* sub_8A7F6A */
{
    FN_ENTER(0x008a7f6a);
    /* 008a7f6a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008a7f6b: mov ebp, esp */ r_ebp = r_esp;
    /* 008a7f6d: sub esp, 0x100 */ {  u32 a = r_esp; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008a7f73: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 008a7f76: lea ecx, [ebp - 0x100] */ r_ecx = (u32)(r_ebp+0xffffff00u);
    /* 008a7f7c: call 0x8a64b4 */ r_esp -= 4; W32(r_esp, 0x8a7f81u); f_008a64b4();
    /* 008a7f81: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a7f83: jl 0x8a7f9c */ if ((fS!=fO)) goto L_008a7f9c;
L_008a7f85:; BB(0x008a7f85);
    /* 008a7f85: lea eax, [ebp - 0x100] */ r_eax = (u32)(r_ebp+0xffffff00u);
    /* 008a7f8b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a7f8c: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008a7f8f: call 0x8a7a9e */ r_esp -= 4; W32(r_esp, 0x8a7f94u); f_008a7a9e();
    /* 008a7f94: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a7f96: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a7f97: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a7f98: jl 0x8a7f9c */ if ((fS!=fO)) goto L_008a7f9c;
L_008a7f9a:; BB(0x008a7f9a);
    /* 008a7f9a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_008a7f9c:; BB(0x008a7f9c);
    /* 008a7f9c: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008a7f9d: ret  */ FN_RET(0x008a7f6a); r_esp += 4; return;
}

