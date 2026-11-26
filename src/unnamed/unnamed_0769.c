#include "protos.h"

void f_00769030(void)
{
    FN_ENTER(0x00769030);
    /* 00769030: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00769034: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00769037: jne 0x769041 */ if (!fZ) goto L_00769041;
L_00769039:; BB(0x00769039);
    /* 00769039: call 0x76ba4c */ r_esp -= 4; W32(r_esp, 0x76903eu); f_0076ba4c();
    /* 0076903e: ret 4 */ FN_RET(0x00769030); r_esp += 8; return;
L_00769041:; BB(0x00769041);
    /* 00769041: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00769043: jne 0x76904a */ if (!fZ) goto L_0076904a;
L_00769045:; BB(0x00769045);
    /* 00769045: call 0x769050 */ r_esp -= 4; W32(r_esp, 0x76904au); f_00769050();
L_0076904a:; BB(0x0076904a);
    /* 0076904a: ret 4 */ FN_RET(0x00769030); r_esp += 8; return;
}

void f_00769050(void) /* sub_769050 */
{
    FN_ENTER(0x00769050);
    /* 00769050: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00769051: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00769052: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00769053: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00769054: mov edx, ecx */ r_edx = r_ecx;
    /* 00769056: mov eax, dword ptr [edx + 0xf80] */ r_eax = R32((u32)(r_edx+0xf80u));
    /* 0076905c: fld dword ptr [eax*4 + 0x977444] */ FPUSH(R_F32((u32)(r_eax*4+0x977444u)));
    /* 00769063: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00769065: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00769067: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00769069: lea ebp, [eax + eax] */ r_ebp = (u32)(r_eax+r_eax);
    /* 0076906c: lea ecx, [eax + ebp + 0x977408] */ r_ecx = (u32)(r_eax+r_ebp+0x977408u);
    /* 00769073: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00769078: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0076907a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0076907c: jle 0x769104 */ if ((fZ||fS!=fO)) goto L_00769104;
L_00769082:; BB(0x00769082);
    /* 00769082: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00769085: mov esi, edx */ r_esi = r_edx;
    /* 00769087: mov edi, ecx */ r_edi = r_ecx;
L_00769089:; BB(0x00769089);
    /* 00769089: mov edx, dword ptr [ebp*4 + 0xaad720] */ r_edx = R32((u32)(r_ebp*4+0xaad720u));
    /* 00769090: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00769092: je 0x7690d6 */ if (fZ) goto L_007690d6;
L_00769094:; BB(0x00769094);
    /* 00769094: movzx ecx, word ptr [edx + 0x1c] */ r_ecx = (u32)R16((u32)(r_edx+0x1cu));
    /* 00769098: cmp ecx, 0x1000 */ {  u32 a = r_ecx; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0076909e: jge 0x7690d6 */ if ((fS==fO)) goto L_007690d6;
L_007690a0:; BB(0x007690a0);
    /* 007690a0: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 007690a3: test ecx, 0x2000800 */ {  u32 a = r_ecx; u32 b = 0x2000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007690a9: jne 0x7690d6 */ if (!fZ) goto L_007690d6;
L_007690ab:; BB(0x007690ab);
    /* 007690ab: mov ecx, dword ptr [edx + 0x3f0] */ r_ecx = R32((u32)(r_edx+0x3f0u));
    /* 007690b1: cmp ecx, dword ptr [0xaafca0] */ {  u32 a = r_ecx; u32 b = R32((u32)(0xaafca0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007690b7: jne 0x7690d6 */ if (!fZ) goto L_007690d6;
L_007690b9:; BB(0x007690b9);
    /* 007690b9: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007690ba: add edx, 0x300 */ {  u32 a = r_edx; u32 b = 0x300u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007690c0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007690c1: call 0x7a8c28 */ r_esp -= 4; W32(r_esp, 0x7690c6u); f_007a8c28();
    /* 007690c6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007690c9: fcomp dword ptr [esp] */ fx_compare(ST(0), R_F32((u32)(r_esp))); FPOP();
    /* 007690cc: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007690ce: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007690cf: jb 0x769100 */ if (fC) goto L_00769100;
L_007690d1:; BB(0x007690d1);
    /* 007690d1: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
L_007690d6:; BB(0x007690d6);
    /* 007690d6: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007690d9: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007690db: jl 0x769089 */ if ((fS!=fO)) goto L_00769089;
L_007690dd:; BB(0x007690dd);
    /* 007690dd: mov edx, esi */ r_edx = r_esi;
L_007690df:; BB(0x007690df);
    /* 007690df: mov eax, dword ptr [edx + 0xf9c] */ r_eax = R32((u32)(r_edx+0xf9cu));
    /* 007690e5: cmp eax, 0x1518 */ {  u32 a = r_eax; u32 b = 0x1518u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007690ea: jl 0x7690fb */ if ((fS!=fO)) goto L_007690fb;
L_007690ec:; BB(0x007690ec);
    /* 007690ec: mov eax, dword ptr [edx + 0xf74] */ r_eax = R32((u32)(r_edx+0xf74u));
    /* 007690f2: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007690f5: mov dword ptr [edx + 0xf74], eax */ W32((u32)(r_edx+0xf74u), r_eax);
L_007690fb:; BB(0x007690fb);
    /* 007690fb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007690fc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007690fd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007690fe: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007690ff: ret  */ FN_RET(0x00769050); r_esp += 4; return;
L_00769100:; BB(0x00769100);
    /* 00769100: mov edx, esi */ r_edx = r_esi;
    /* 00769102: jmp 0x7690ec */ goto L_007690ec;
L_00769104:; BB(0x00769104);
    /* 00769104: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00769106: jmp 0x7690df */ goto L_007690df;
}

void f_007690c0(void)
{
    FN_ENTER(0x007690c0);
    goto L_007690c0;
L_00769089:; BB(0x00769089);
    /* 00769089: mov edx, dword ptr [ebp*4 + 0xaad720] */ r_edx = R32((u32)(r_ebp*4+0xaad720u));
    /* 00769090: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00769092: je 0x7690d6 */ if (fZ) goto L_007690d6;
L_00769094:; BB(0x00769094);
    /* 00769094: movzx ecx, word ptr [edx + 0x1c] */ r_ecx = (u32)R16((u32)(r_edx+0x1cu));
    /* 00769098: cmp ecx, 0x1000 */ {  u32 a = r_ecx; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0076909e: jge 0x7690d6 */ if ((fS==fO)) goto L_007690d6;
L_007690a0:; BB(0x007690a0);
    /* 007690a0: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 007690a3: test ecx, 0x2000800 */ {  u32 a = r_ecx; u32 b = 0x2000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007690a9: jne 0x7690d6 */ if (!fZ) goto L_007690d6;
L_007690ab:; BB(0x007690ab);
    /* 007690ab: mov ecx, dword ptr [edx + 0x3f0] */ r_ecx = R32((u32)(r_edx+0x3f0u));
    /* 007690b1: cmp ecx, dword ptr [0xaafca0] */ {  u32 a = r_ecx; u32 b = R32((u32)(0xaafca0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007690b7: jne 0x7690d6 */ if (!fZ) goto L_007690d6;
L_007690b9:; BB(0x007690b9);
    /* 007690b9: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007690ba: add edx, 0x300 */ {  u32 a = r_edx; u32 b = 0x300u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
L_007690c0:; BB(0x007690c0);
    /* 007690c0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007690c1: call 0x7a8c28 */ r_esp -= 4; W32(r_esp, 0x7690c6u); f_007a8c28();
    /* 007690c6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007690c9: fcomp dword ptr [esp] */ fx_compare(ST(0), R_F32((u32)(r_esp))); FPOP();
    /* 007690cc: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007690ce: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007690cf: jb 0x769100 */ if (fC) goto L_00769100;
L_007690d1:; BB(0x007690d1);
    /* 007690d1: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
L_007690d6:; BB(0x007690d6);
    /* 007690d6: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007690d9: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007690db: jl 0x769089 */ if ((fS!=fO)) goto L_00769089;
L_007690dd:; BB(0x007690dd);
    /* 007690dd: mov edx, esi */ r_edx = r_esi;
    /* 007690df: mov eax, dword ptr [edx + 0xf9c] */ r_eax = R32((u32)(r_edx+0xf9cu));
    /* 007690e5: cmp eax, 0x1518 */ {  u32 a = r_eax; u32 b = 0x1518u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007690ea: jl 0x7690fb */ if ((fS!=fO)) goto L_007690fb;
L_007690ec:; BB(0x007690ec);
    /* 007690ec: mov eax, dword ptr [edx + 0xf74] */ r_eax = R32((u32)(r_edx+0xf74u));
    /* 007690f2: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007690f5: mov dword ptr [edx + 0xf74], eax */ W32((u32)(r_edx+0xf74u), r_eax);
L_007690fb:; BB(0x007690fb);
    /* 007690fb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007690fc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007690fd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007690fe: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007690ff: ret  */ FN_RET(0x007690c0); r_esp += 4; return;
L_00769100:; BB(0x00769100);
    /* 00769100: mov edx, esi */ r_edx = r_esi;
    /* 00769102: jmp 0x7690ec */ goto L_007690ec;
}

void f_00769108(void)
{
    FN_ENTER(0x00769108);
    /* 00769108: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0076910c: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0076910f: jne 0x76911e */ if (!fZ) goto L_0076911e;
L_00769111:; BB(0x00769111);
    /* 00769111: mov dword ptr [ecx + 0xf9c], 0 */ W32((u32)(r_ecx+0xf9cu), 0x0u);
    /* 0076911b: ret 4 */ FN_RET(0x00769108); r_esp += 8; return;
L_0076911e:; BB(0x0076911e);
    /* 0076911e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00769120: jne 0x769127 */ if (!fZ) goto L_00769127;
L_00769122:; BB(0x00769122);
    /* 00769122: call 0x76912c */ r_esp -= 4; W32(r_esp, 0x769127u); f_0076912c();
L_00769127:; BB(0x00769127);
    /* 00769127: ret 4 */ FN_RET(0x00769108); r_esp += 8; return;
}

void f_0076912c(void) /* sub_76912C */
{
    FN_ENTER(0x0076912c);
    /* 0076912c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0076912d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0076912f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00769131: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00769133: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x769138u); f_007aaa30();
    /* 00769138: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0076913a: je 0x769151 */ if (fZ) goto L_00769151;
L_0076913c:; BB(0x0076913c);
    /* 0076913c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0076913e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00769140: add ebx, 0x38 */ {  u32 a = r_ebx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00769143: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00769144: push 0x6f1 */ { u32 v = 0x6f1u; r_esp -= 4; W32(r_esp, v); }
    /* 00769149: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x76914eu); f_00814298();
    /* 0076914e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_00769151:; BB(0x00769151);
    /* 00769151: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00769152: ret  */ FN_RET(0x0076912c); r_esp += 4; return;
}

void f_00769154(void)
{
    FN_ENTER(0x00769154);
    /* 00769154: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00769158: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076915b: jne 0x769165 */ if (!fZ) goto L_00769165;
L_0076915d:; BB(0x0076915d);
    /* 0076915d: call 0x76ba14 */ r_esp -= 4; W32(r_esp, 0x769162u); f_0076ba14();
    /* 00769162: ret 4 */ FN_RET(0x00769154); r_esp += 8; return;
L_00769165:; BB(0x00769165);
    /* 00769165: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00769167: jne 0x76916e */ if (!fZ) goto L_0076916e;
L_00769169:; BB(0x00769169);
    /* 00769169: call 0x769174 */ r_esp -= 4; W32(r_esp, 0x76916eu); f_00769174();
L_0076916e:; BB(0x0076916e);
    /* 0076916e: ret 4 */ FN_RET(0x00769154); r_esp += 8; return;
}

void f_00769174(void) /* sub_769174 */
{
    FN_ENTER(0x00769174);
    /* 00769174: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00769175: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00769176: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00769179: mov esi, ecx */ r_esi = r_ecx;
    /* 0076917b: mov eax, dword ptr [esi + 0xf84] */ r_eax = R32((u32)(r_esi+0xf84u));
    /* 00769181: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00769183: jle 0x769194 */ if ((fZ||fS!=fO)) goto L_00769194;
L_00769185:; BB(0x00769185);
    /* 00769185: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00769188: mov dword ptr [esi + 0xf84], eax */ W32((u32)(r_esi+0xf84u), r_eax);
L_0076918e:; BB(0x0076918e);
    /* 0076918e: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00769191: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00769192: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00769193: ret  */ FN_RET(0x00769174); r_esp += 4; return;
L_00769194:; BB(0x00769194);
    /* 00769194: mov eax, dword ptr [esi + 0xf80] */ r_eax = R32((u32)(r_esi+0xf80u));
    /* 0076919a: fld dword ptr [eax*4 + 0x977444] */ FPUSH(R_F32((u32)(r_eax*4+0x977444u)));
    /* 007691a1: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 007691a3: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007691a5: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007691a7: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 007691aa: lea eax, [eax + edx + 0x977408] */ r_eax = (u32)(r_eax+r_edx+0x977408u);
    /* 007691b1: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 007691b7: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 007691b9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 007691bb: jle 0x7693ce */ if ((fZ||fS!=fO)) goto L_007693ce;
L_007691c1:; BB(0x007691c1);
    /* 007691c1: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 007691c5: mov dword ptr [esp + 0x34], ebp */ W32((u32)(r_esp+0x34u), r_ebp);
    /* 007691c9: mov ebp, eax */ r_ebp = r_eax;
L_007691cb:; BB(0x007691cb);
    /* 007691cb: mov eax, dword ptr [ebx*4 + 0xaad720] */ r_eax = R32((u32)(r_ebx*4+0xaad720u));
    /* 007691d2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007691d4: je 0x769219 */ if (fZ) goto L_00769219;
L_007691d6:; BB(0x007691d6);
    /* 007691d6: movzx ecx, word ptr [eax + 0x1c] */ r_ecx = (u32)R16((u32)(r_eax+0x1cu));
    /* 007691da: cmp ecx, 0x1000 */ {  u32 a = r_ecx; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007691e0: jge 0x769219 */ if ((fS==fO)) goto L_00769219;
L_007691e2:; BB(0x007691e2);
    /* 007691e2: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 007691e5: test ecx, 0x2000800 */ {  u32 a = r_ecx; u32 b = 0x2000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007691eb: jne 0x769219 */ if (!fZ) goto L_00769219;
L_007691ed:; BB(0x007691ed);
    /* 007691ed: mov ecx, dword ptr [eax + 0x3f0] */ r_ecx = R32((u32)(r_eax+0x3f0u));
    /* 007691f3: cmp ecx, dword ptr [0xaafca0] */ {  u32 a = r_ecx; u32 b = R32((u32)(0xaafca0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007691f9: jne 0x769219 */ if (!fZ) goto L_00769219;
L_007691fb:; BB(0x007691fb);
    /* 007691fb: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007691fc: add eax, 0x300 */ {  u32 a = r_eax; u32 b = 0x300u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00769201: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00769202: call 0x7a8c28 */ r_esp -= 4; W32(r_esp, 0x769207u); f_007a8c28();
    /* 00769207: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0076920a: fcomp dword ptr [esp + 0x38] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x38u))); FPOP();
    /* 0076920e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00769210: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00769211: jb 0x76924b */ if (fC) goto L_0076924b;
L_00769213:; BB(0x00769213);
    /* 00769213: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
L_00769219:; BB(0x00769219);
    /* 00769219: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0076921c: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0076921e: jl 0x7691cb */ if ((fS!=fO)) goto L_007691cb;
L_00769220:; BB(0x00769220);
    /* 00769220: mov ebp, dword ptr [esp + 0x34] */ r_ebp = R32((u32)(r_esp+0x34u));
L_00769224:; BB(0x00769224);
    /* 00769224: mov eax, dword ptr [esi + 0xf9c] */ r_eax = R32((u32)(r_esi+0xf9cu));
    /* 0076922a: cmp eax, 0x1518 */ {  u32 a = r_eax; u32 b = 0x1518u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0076922f: jl 0x76918e */ if ((fS!=fO)) goto L_0076918e;
L_00769235:; BB(0x00769235);
    /* 00769235: mov eax, dword ptr [esi + 0xf74] */ r_eax = R32((u32)(r_esi+0xf74u));
    /* 0076923b: or eax, 0x102 */ {  u32 a = r_eax; u32 b = 0x102u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00769240: mov dword ptr [esi + 0xf74], eax */ W32((u32)(r_esi+0xf74u), r_eax);
    /* 00769246: jmp 0x76918e */ goto L_0076918e;
L_0076924b:; BB(0x0076924b);
    /* 0076924b: mov ebp, dword ptr [esp + 0x34] */ r_ebp = R32((u32)(r_esp+0x34u));
    /* 0076924f: push 0x461c4000 */ { u32 v = 0x461c4000u; r_esp -= 4; W32(r_esp, v); }
    /* 00769254: mov ecx, esi */ r_ecx = r_esi;
    /* 00769256: call 0x521160 */ r_esp -= 4; W32(r_esp, 0x76925bu); f_00521160();
    /* 0076925b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076925c: mov ecx, esi */ r_ecx = r_esi;
    /* 0076925e: call 0x520fcc */ r_esp -= 4; W32(r_esp, 0x769263u); f_00520fcc();
    /* 00769263: mov ecx, esi */ r_ecx = r_esi;
    /* 00769265: call 0x5213d8 */ r_esp -= 4; W32(r_esp, 0x76926au); f_005213d8();
    /* 0076926a: mov ecx, esi */ r_ecx = r_esi;
    /* 0076926c: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x769271u); f_00521410();
    /* 00769271: mov eax, dword ptr [esi + 0x398] */ r_eax = R32((u32)(r_esi+0x398u));
    /* 00769277: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00769279: je 0x7693c4 */ if (fZ) goto L_007693c4;
L_0076927f:; BB(0x0076927f);
    /* 0076927f: fld dword ptr [esi + 0x3b4] */ FPUSH(R_F32((u32)(r_esi+0x3b4u)));
    /* 00769285: fcom dword ptr [0x977094] */ fx_compare(ST(0), R_F32((u32)(0x977094u))); 
    /* 0076928b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0076928d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0076928e: jae 0x769296 */ if (!fC) goto L_00769296;
L_00769290:; BB(0x00769290);
    /* 00769290: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00769292: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00769294: jmp 0x7692ad */ goto L_007692ad;
L_00769296:; BB(0x00769296);
    /* 00769296: fcomp dword ptr [0x977098] */ fx_compare(ST(0), R_F32((u32)(0x977098u))); FPOP();
    /* 0076929c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0076929e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0076929f: jae 0x7692a8 */ if (!fC) goto L_007692a8;
L_007692a1:; BB(0x007692a1);
    /* 007692a1: mov ebx, 1 */ r_ebx = 0x1u;
    /* 007692a6: jmp 0x7692ad */ goto L_007692ad;
L_007692a8:; BB(0x007692a8);
    /* 007692a8: mov ebx, 2 */ r_ebx = 0x2u;
L_007692ad:; BB(0x007692ad);
    /* 007692ad: fld dword ptr [esi + 0x3a8] */ FPUSH(R_F32((u32)(r_esi+0x3a8u)));
    /* 007692b3: fld dword ptr [esi + 0x3b0] */ FPUSH(R_F32((u32)(r_esi+0x3b0u)));
    /* 007692b9: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 007692bb: fmul qword ptr [0x977048] */ ST(0) = ST(0) * R_F64((u32)(0x977048u));
    /* 007692c1: fdiv qword ptr [0x977040] */ ST(0) = ST(0) / R_F64((u32)(0x977040u));
    /* 007692c7: fnstcw word ptr [esp + 0x1c] */ W16((u32)(r_esp+0x1cu), fcw);
    /* 007692cb: movzx eax, word ptr [esp + 0x1c] */ r_eax = (u32)R16((u32)(r_esp+0x1cu));
    /* 007692d0: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007692d5: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 007692d9: fldcw word ptr [esp + 0x24] */ fcw = R16((u32)(r_esp+0x24u));
    /* 007692dd: fistp dword ptr [esp + 0x2c] */ W32((u32)(r_esp+0x2cu), (u32)fx_int32(ST(0))); FPOP();
    /* 007692e1: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 007692e5: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 007692e9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007692ea: push dword ptr [esi + 0x60] */ { u32 v = R32((u32)(r_esi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 007692ed: call 0x7a9018 */ r_esp -= 4; W32(r_esp, 0x7692f2u); f_007a9018();
    /* 007692f2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007692f5: cmp eax, 0x3800 */ {  u32 a = r_eax; u32 b = 0x3800u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007692fa: jle 0x769301 */ if ((fZ||fS!=fO)) goto L_00769301;
L_007692fc:; BB(0x007692fc);
    /* 007692fc: mov ebx, 3 */ r_ebx = 0x3u;
L_00769301:; BB(0x00769301);
    /* 00769301: mov eax, dword ptr [esi + 0xf7c] */ r_eax = R32((u32)(r_esi+0xf7cu));
    /* 00769307: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00769309: jl 0x769323 */ if ((fS!=fO)) goto L_00769323;
L_0076930b:; BB(0x0076930b);
    /* 0076930b: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0076930e: jg 0x769317 */ if ((!fZ&&fS==fO)) goto L_00769317;
L_00769310:; BB(0x00769310);
    /* 00769310: mov edx, 0x976980 */ r_edx = 0x976980u;
    /* 00769315: jmp 0x769328 */ goto L_00769328;
L_00769317:; BB(0x00769317);
    /* 00769317: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076931a: jne 0x769323 */ if (!fZ) goto L_00769323;
L_0076931c:; BB(0x0076931c);
    /* 0076931c: mov edx, 0x976a40 */ r_edx = 0x976a40u;
    /* 00769321: jmp 0x769328 */ goto L_00769328;
L_00769323:; BB(0x00769323);
    /* 00769323: mov edx, 0x9769e0 */ r_edx = 0x9769e0u;
L_00769328:; BB(0x00769328);
    /* 00769328: lea eax, [ebx + ebx*4] */ r_eax = (u32)(r_ebx+r_ebx*4);
    /* 0076932b: mov ebx, dword ptr [edx + eax*4] */ r_ebx = R32((u32)(r_edx+r_eax*4));
    /* 0076932e: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 00769331: mov ebx, dword ptr [edx + eax*4 + 4] */ r_ebx = R32((u32)(r_edx+r_eax*4+0x4u));
    /* 00769335: mov ecx, esi */ r_ecx = r_esi;
    /* 00769337: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 0076933b: mov ebx, dword ptr [edx + eax*4 + 8] */ r_ebx = R32((u32)(r_edx+r_eax*4+0x8u));
    /* 0076933f: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 00769343: mov ebx, dword ptr [edx + eax*4 + 0xc] */ r_ebx = R32((u32)(r_edx+r_eax*4+0xcu));
    /* 00769347: mov dword ptr [esp + 0xc], ebx */ W32((u32)(r_esp+0xcu), r_ebx);
    /* 0076934b: mov edx, dword ptr [edx + eax*4 + 0x10] */ r_edx = R32((u32)(r_edx+r_eax*4+0x10u));
    /* 0076934f: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 00769353: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00769356: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00769357: call 0x77776c */ r_esp -= 4; W32(r_esp, 0x76935cu); f_0077776c();
    /* 0076935c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076935e: je 0x7693bd */ if (fZ) goto L_007693bd;
L_00769360:; BB(0x00769360);
    /* 00769360: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00769363: je 0x76937d */ if (fZ) goto L_0076937d;
L_00769365:; BB(0x00769365);
    /* 00769365: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00769368: jne 0x769371 */ if (!fZ) goto L_00769371;
L_0076936a:; BB(0x0076936a);
    /* 0076936a: mov ecx, 0x12 */ r_ecx = 0x12u;
    /* 0076936f: jmp 0x769382 */ goto L_00769382;
L_00769371:; BB(0x00769371);
    /* 00769371: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00769374: jne 0x769382 */ if (!fZ) goto L_00769382;
L_00769376:; BB(0x00769376);
    /* 00769376: mov ecx, 0x16 */ r_ecx = 0x16u;
    /* 0076937b: jmp 0x769382 */ goto L_00769382;
L_0076937d:; BB(0x0076937d);
    /* 0076937d: mov ecx, 0x15 */ r_ecx = 0x15u;
L_00769382:; BB(0x00769382);
    /* 00769382: mov byte ptr [esp + 0x14], 0xdc */ W8((u32)(r_esp+0x14u), 0xdcu);
    /* 00769387: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 0076938c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0076938e: mov byte ptr [esp + 0x15], 2 */ W8((u32)(r_esp+0x15u), 0x2u);
    /* 00769393: mov word ptr [esp + 0x16], ax */ W16((u32)(r_esp+0x16u), (u16)r_eax);
    /* 00769398: mov word ptr [esp + 0x18], dx */ W16((u32)(r_esp+0x18u), (u16)r_edx);
    /* 0076939d: mov word ptr [esp + 0x1a], cx */ W16((u32)(r_esp+0x1au), (u16)r_ecx);
    /* 007693a2: call 0x52cf54 */ r_esp -= 4; W32(r_esp, 0x7693a7u); f_0052cf54();
    /* 007693a7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007693a9: je 0x76918e */ if (fZ) goto L_0076918e;
L_007693af:; BB(0x007693af);
    /* 007693af: lea ecx, [esp + 0x14] */ r_ecx = (u32)(r_esp+0x14u);
    /* 007693b3: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x7693b8u); f_008003e0();
    /* 007693b8: jmp 0x76918e */ goto L_0076918e;
L_007693bd:; BB(0x007693bd);
    /* 007693bd: mov ecx, 0x11 */ r_ecx = 0x11u;
    /* 007693c2: jmp 0x769382 */ goto L_00769382;
L_007693c4:; BB(0x007693c4);
    /* 007693c4: mov ebx, 2 */ r_ebx = 0x2u;
    /* 007693c9: jmp 0x769301 */ goto L_00769301;
L_007693ce:; BB(0x007693ce);
    /* 007693ce: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007693d0: jmp 0x769224 */ goto L_00769224;
}

void f_007693d8(void)
{
    FN_ENTER(0x007693d8);
    /* 007693d8: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 007693dc: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007693df: je 0x7693ea */ if (fZ) goto L_007693ea;
L_007693e1:; BB(0x007693e1);
    /* 007693e1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007693e3: jne 0x7693ea */ if (!fZ) goto L_007693ea;
L_007693e5:; BB(0x007693e5);
    /* 007693e5: call 0x7693f0 */ r_esp -= 4; W32(r_esp, 0x7693eau); f_007693f0();
L_007693ea:; BB(0x007693ea);
    /* 007693ea: ret 4 */ FN_RET(0x007693d8); r_esp += 8; return;
}

void f_007693f0(void) /* sub_7693F0 */
{
    FN_ENTER(0x007693f0);
    /* 007693f0: mov eax, dword ptr [ecx + 0xf74] */ r_eax = R32((u32)(r_ecx+0xf74u));
    /* 007693f6: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007693f9: mov dword ptr [ecx + 0xf74], eax */ W32((u32)(r_ecx+0xf74u), r_eax);
    /* 007693ff: ret  */ FN_RET(0x007693f0); r_esp += 4; return;
}

void f_00769400(void)
{
    FN_ENTER(0x00769400);
    /* 00769400: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00769404: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00769407: je 0x769412 */ if (fZ) goto L_00769412;
L_00769409:; BB(0x00769409);
    /* 00769409: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0076940b: jne 0x769412 */ if (!fZ) goto L_00769412;
L_0076940d:; BB(0x0076940d);
    /* 0076940d: call 0x769418 */ r_esp -= 4; W32(r_esp, 0x769412u); f_00769418();
L_00769412:; BB(0x00769412);
    /* 00769412: ret 4 */ FN_RET(0x00769400); r_esp += 8; return;
}

void f_00769418(void) /* sub_769418 */
{
    FN_ENTER(0x00769418);
    /* 00769418: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00769419: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0076941a: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0076941d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0076941f: push 0x42aa0000 */ { u32 v = 0x42aa0000u; r_esp -= 4; W32(r_esp, v); }
    /* 00769424: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00769426: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x76942bu); f_007aaa30();
    /* 0076942b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076942d: je 0x76949c */ if (fZ) goto L_0076949c;
L_0076942f:; BB(0x0076942f);
    /* 0076942f: mov dword ptr [0xa9b044], 0 */ W32((u32)(0xa9b044u), 0x0u);
    /* 00769439: call 0x7bb6d0 */ r_esp -= 4; W32(r_esp, 0x76943eu); f_007bb6d0();
    /* 0076943e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076943f: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x769444u); f_0068d5a8();
    /* 00769444: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00769445: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00769447: je 0x769478 */ if (fZ) goto L_00769478;
L_00769449:; BB(0x00769449);
    /* 00769449: lea esi, [ebx + 0x38] */ r_esi = (u32)(r_ebx+0x38u);
    /* 0076944c: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0076944f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00769450: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00769451: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x769456u); f_007a9180();
    /* 00769456: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00769459: fcomp dword ptr [0x9773f8] */ fx_compare(ST(0), R_F32((u32)(0x9773f8u))); FPOP();
    /* 0076945f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00769461: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00769462: ja 0x76947b */ if ((!fC&&!fZ)) goto L_0076947b;
L_00769464:; BB(0x00769464);
    /* 00769464: mov dword ptr [0xa9b044], 1 */ W32((u32)(0xa9b044u), 0x1u);
    /* 0076946e: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00769470: call 0x4d4288 */ r_esp -= 4; W32(r_esp, 0x769475u); f_004d4288();
    /* 00769475: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00769476: jmp 0x76947b */ goto L_0076947b;
L_00769478:; BB(0x00769478);
    /* 00769478: lea esi, [ebx + 0x38] */ r_esi = (u32)(r_ebx+0x38u);
L_0076947b:; BB(0x0076947b);
    /* 0076947b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0076947d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0076947f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00769480: push 0x6e3 */ { u32 v = 0x6e3u; r_esp -= 4; W32(r_esp, v); }
    /* 00769485: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x76948au); f_00814298();
    /* 0076948a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0076948c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0076948e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0076948f: push 0x6d9 */ { u32 v = 0x6d9u; r_esp -= 4; W32(r_esp, v); }
    /* 00769494: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x769499u); f_00814298();
    /* 00769499: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0076949c:; BB(0x0076949c);
    /* 0076949c: fld dword ptr [ebx + 0xc0] */ FPUSH(R_F32((u32)(r_ebx+0xc0u)));
    /* 007694a2: fcom dword ptr [0x976924] */ fx_compare(ST(0), R_F32((u32)(0x976924u))); 
    /* 007694a8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007694aa: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007694ab: jb 0x76960a */ if (fC) goto L_0076960a;
L_007694b1:; BB(0x007694b1);
    /* 007694b1: fcomp dword ptr [0x976920] */ fx_compare(ST(0), R_F32((u32)(0x976920u))); FPOP();
    /* 007694b7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007694b9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007694ba: ja 0x76960c */ if ((!fC&&!fZ)) goto L_0076960c;
L_007694c0:; BB(0x007694c0);
    /* 007694c0: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 007694c3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007694c4: push 0x55 */ { u32 v = 0x55u; r_esp -= 4; W32(r_esp, v); }
    /* 007694c6: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 007694c8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007694ca: call dword ptr [edx + 0x10c] */ { u32 t = R32((u32)(r_edx+0x10cu)); r_esp -= 4; W32(r_esp, 0x7694d0u); call_ind(t); }
    /* 007694d0: mov eax, dword ptr [0x976914] */ r_eax = R32((u32)(0x976914u));
    /* 007694d5: mov edx, dword ptr [0x976918] */ r_edx = R32((u32)(0x976918u));
    /* 007694db: mov esi, dword ptr [0x97691c] */ r_esi = R32((u32)(0x97691cu));
    /* 007694e1: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 007694e5: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 007694e9: mov dword ptr [esp + 0x14], esi */ W32((u32)(r_esp+0x14u), r_esi);
    /* 007694ed: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 007694f0: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 007694f2: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 007694f4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007694f5: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x7694fau); f_0050b7a4();
    /* 007694fa: mov esi, eax */ r_esi = r_eax;
    /* 007694fc: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007694ff: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00769501: mov ecx, esi */ r_ecx = r_esi;
    /* 00769503: call 0x508f08 */ r_esp -= 4; W32(r_esp, 0x769508u); f_00508f08();
    /* 00769508: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 0076950a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0076950c: call 0x768964 */ r_esp -= 4; W32(r_esp, 0x769511u); f_00768964();
    /* 00769511: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00769513: jne 0x769519 */ if (!fZ) goto L_00769519;
L_00769515:; BB(0x00769515);
    /* 00769515: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00769517: jmp 0x76951f */ goto L_0076951f;
L_00769519:; BB(0x00769519);
    /* 00769519: lea edx, [ebx + 0xe94] */ r_edx = (u32)(r_ebx+0xe94u);
L_0076951f:; BB(0x0076951f);
    /* 0076951f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00769520: mov ecx, esi */ r_ecx = r_esi;
    /* 00769522: call 0x508dec */ r_esp -= 4; W32(r_esp, 0x769527u); f_00508dec();
    /* 00769527: mov dword ptr [esi + 0x44], 0x3f19999a */ W32((u32)(r_esi+0x44u), 0x3f19999au);
    /* 0076952e: push 0xfeffffff */ { u32 v = 0xfeffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00769533: mov ecx, esi */ r_ecx = r_esi;
    /* 00769535: mov dword ptr [esi + 0x48], 0x3f19999a */ W32((u32)(r_esi+0x48u), 0x3f19999au);
    /* 0076953c: call 0x508ee4 */ r_esp -= 4; W32(r_esp, 0x769541u); f_00508ee4();
    /* 00769541: movzx edx, word ptr [esi + 0x2e] */ r_edx = (u32)R16((u32)(r_esi+0x2eu));
    /* 00769545: mov dword ptr [esi + 0x64], 0x40200000 */ W32((u32)(r_esi+0x64u), 0x40200000u);
    /* 0076954c: or edx, 0xffff0008 */ {  u32 a = r_edx; u32 b = 0xffff0008u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00769552: mov word ptr [esi + 0x2e], dx */ W16((u32)(r_esi+0x2eu), (u16)r_edx);
    /* 00769556: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 0076955a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0076955b: mov ecx, esi */ r_ecx = r_esi;
    /* 0076955d: call 0x508dd0 */ r_esp -= 4; W32(r_esp, 0x769562u); f_00508dd0();
    /* 00769562: push 0x41200000 */ { u32 v = 0x41200000u; r_esp -= 4; W32(r_esp, v); }
    /* 00769567: mov ecx, esi */ r_ecx = r_esi;
    /* 00769569: call 0x508dac */ r_esp -= 4; W32(r_esp, 0x76956eu); f_00508dac();
    /* 0076956e: mov dword ptr [esp + 4], 0xc1a00000 */ W32((u32)(r_esp+0x4u), 0xc1a00000u);
    /* 00769576: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00769579: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 0076957b: push 0x58 */ { u32 v = 0x58u; r_esp -= 4; W32(r_esp, v); }
    /* 0076957d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076957e: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x769583u); f_0050b7a4();
    /* 00769583: mov esi, eax */ r_esi = r_eax;
    /* 00769585: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00769588: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0076958a: mov ecx, esi */ r_ecx = r_esi;
    /* 0076958c: call 0x508f08 */ r_esp -= 4; W32(r_esp, 0x769591u); f_00508f08();
    /* 00769591: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 00769593: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00769595: call 0x768964 */ r_esp -= 4; W32(r_esp, 0x76959au); f_00768964();
    /* 0076959a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076959c: jne 0x7695a2 */ if (!fZ) goto L_007695a2;
L_0076959e:; BB(0x0076959e);
    /* 0076959e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007695a0: jmp 0x7695a8 */ goto L_007695a8;
L_007695a2:; BB(0x007695a2);
    /* 007695a2: lea edx, [ebx + 0xe94] */ r_edx = (u32)(r_ebx+0xe94u);
L_007695a8:; BB(0x007695a8);
    /* 007695a8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007695a9: mov ecx, esi */ r_ecx = r_esi;
    /* 007695ab: call 0x508dec */ r_esp -= 4; W32(r_esp, 0x7695b0u); f_00508dec();
    /* 007695b0: push 0x20ffffff */ { u32 v = 0x20ffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007695b5: mov dword ptr [esi + 0x44], 0x41300000 */ W32((u32)(r_esi+0x44u), 0x41300000u);
    /* 007695bc: mov dword ptr [esi + 0x48], 0x41300000 */ W32((u32)(r_esi+0x48u), 0x41300000u);
    /* 007695c3: mov ecx, esi */ r_ecx = r_esi;
    /* 007695c5: call 0x508ee4 */ r_esp -= 4; W32(r_esp, 0x7695cau); f_00508ee4();
    /* 007695ca: movzx edx, word ptr [esi + 0x2e] */ r_edx = (u32)R16((u32)(r_esi+0x2eu));
    /* 007695ce: mov dword ptr [esi + 0x64], 0x40e00000 */ W32((u32)(r_esi+0x64u), 0x40e00000u);
    /* 007695d5: or edx, 0xffff0008 */ {  u32 a = r_edx; u32 b = 0xffff0008u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 007695db: mov word ptr [esi + 0x2e], dx */ W16((u32)(r_esi+0x2eu), (u16)r_edx);
    /* 007695df: mov dword ptr [esp + 0xc], 0xc000 */ W32((u32)(r_esp+0xcu), 0xc000u);
    /* 007695e7: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 007695eb: mov ecx, esi */ r_ecx = r_esi;
    /* 007695ed: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007695ee: call 0x508dd0 */ r_esp -= 4; W32(r_esp, 0x7695f3u); f_00508dd0();
    /* 007695f3: push 0x41400000 */ { u32 v = 0x41400000u; r_esp -= 4; W32(r_esp, v); }
    /* 007695f8: mov ecx, esi */ r_ecx = r_esi;
    /* 007695fa: call 0x508dac */ r_esp -= 4; W32(r_esp, 0x7695ffu); f_00508dac();
    /* 007695ff: mov eax, dword ptr [0xa9b044] */ r_eax = R32((u32)(0xa9b044u));
    /* 00769604: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00769606: jne 0x769646 */ if (!fZ) goto L_00769646;
L_00769608:; BB(0x00769608);
    /* 00769608: jmp 0x76960c */ goto L_0076960c;
L_0076960a:; BB(0x0076960a);
    /* 0076960a: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0076960c:; BB(0x0076960c);
    /* 0076960c: mov eax, dword ptr [ebx + 0xb0] */ r_eax = R32((u32)(r_ebx+0xb0u));
    /* 00769612: test al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00769614: je 0x769640 */ if (fZ) goto L_00769640;
L_00769616:; BB(0x00769616);
    /* 00769616: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00769618: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x76961du); f_007751b0();
    /* 0076961d: fcomp dword ptr [0x9773d8] */ fx_compare(ST(0), R_F32((u32)(0x9773d8u))); FPOP();
    /* 00769623: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00769625: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00769626: jb 0x769660 */ if (fC) goto L_00769660;
L_00769628:; BB(0x00769628);
    /* 00769628: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0076962a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0076962c: call 0x76bfa0 */ r_esp -= 4; W32(r_esp, 0x769631u); f_0076bfa0();
L_00769631:; BB(0x00769631);
    /* 00769631: mov eax, dword ptr [ebx + 0xf74] */ r_eax = R32((u32)(r_ebx+0xf74u));
    /* 00769637: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0076963a: mov dword ptr [ebx + 0xf74], eax */ W32((u32)(r_ebx+0xf74u), r_eax);
L_00769640:; BB(0x00769640);
    /* 00769640: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00769643: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00769644: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00769645: ret  */ FN_RET(0x00769418); r_esp += 4; return;
L_00769646:; BB(0x00769646);
    /* 00769646: movzx eax, byte ptr [0xa72ae4] */ r_eax = (u32)R8((u32)(0xa72ae4u));
    /* 0076964d: mov byte ptr [0x9ba3fc], 0x8f */ W8((u32)(0x9ba3fcu), 0x8fu);
    /* 00769654: or eax, 0xffffff02 */ {  u32 a = r_eax; u32 b = 0xffffff02u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00769659: mov byte ptr [0xa72ae4], al */ W8((u32)(0xa72ae4u), (u8)r_eax);
    /* 0076965e: jmp 0x76960c */ goto L_0076960c;
L_00769660:; BB(0x00769660);
    /* 00769660: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 00769662: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00769664: call 0x76bfa0 */ r_esp -= 4; W32(r_esp, 0x769669u); f_0076bfa0();
    /* 00769669: jmp 0x769631 */ goto L_00769631;
}

void f_0076966c(void)
{
    FN_ENTER(0x0076966c);
    /* 0076966c: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00769670: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00769673: jne 0x76967d */ if (!fZ) goto L_0076967d;
L_00769675:; BB(0x00769675);
    /* 00769675: call 0x76b8f4 */ r_esp -= 4; W32(r_esp, 0x76967au); f_0076b8f4();
    /* 0076967a: ret 4 */ FN_RET(0x0076966c); r_esp += 8; return;
L_0076967d:; BB(0x0076967d);
    /* 0076967d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0076967f: jne 0x769686 */ if (!fZ) goto L_00769686;
L_00769681:; BB(0x00769681);
    /* 00769681: call 0x76968c */ r_esp -= 4; W32(r_esp, 0x769686u); f_0076968c();
L_00769686:; BB(0x00769686);
    /* 00769686: ret 4 */ FN_RET(0x0076966c); r_esp += 8; return;
}

void f_0076968c(void) /* sub_76968C */
{
    FN_ENTER(0x0076968c);
    /* 0076968c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0076968d: mov ebp, esp */ r_ebp = r_esp;
    /* 0076968f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00769691: push 0x8f3b16 */ { u32 v = 0x8f3b16u; r_esp -= 4; W32(r_esp, v); }
    /* 00769696: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0076969c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076969d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007696a4: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007696a7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007696aa: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 007696ad: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 007696b0: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 007696b3: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 007696b6: push 0x40a00000 */ { u32 v = 0x40a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 007696bb: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x7696c0u); f_007aaa30();
    /* 007696c0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007696c2: je 0x7697c8 */ if (fZ) goto L_007697c8;
L_007696c8:; BB(0x007696c8);
    /* 007696c8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007696cb: mov eax, dword ptr [eax + 0xf80] */ r_eax = R32((u32)(r_eax+0xf80u));
    /* 007696d1: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007696d4: jl 0x7697c8 */ if ((fS!=fO)) goto L_007697c8;
L_007696da:; BB(0x007696da);
    /* 007696da: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007696dd: jg 0x7697c8 */ if ((!fZ&&fS==fO)) goto L_007697c8;
L_007696e3:; BB(0x007696e3);
    /* 007696e3: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 007696ea: push 0xe4 */ { u32 v = 0xe4u; r_esp -= 4; W32(r_esp, v); }
    /* 007696ef: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x7696f4u); f_005caba4();
    /* 007696f4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007696f5: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 007696f8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007696fa: je 0x769752 */ if (fZ) goto L_00769752;
L_007696fc:; BB(0x007696fc);
    /* 007696fc: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 00769703: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0076970a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0076970d: push 0x27 */ { u32 v = 0x27u; r_esp -= 4; W32(r_esp, v); }
    /* 0076970f: call 0x768964 */ r_esp -= 4; W32(r_esp, 0x769714u); f_00768964();
    /* 00769714: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00769716: jne 0x76971c */ if (!fZ) goto L_0076971c;
L_00769718:; BB(0x00769718);
    /* 00769718: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0076971a: jmp 0x769725 */ goto L_00769725;
L_0076971c:; BB(0x0076971c);
    /* 0076971c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0076971f: lea edx, [eax + 0xdd4] */ r_edx = (u32)(r_eax+0xdd4u);
L_00769725:; BB(0x00769725);
    /* 00769725: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00769728: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0076972b: movzx eax, word ptr [ebx + 0x394] */ r_eax = (u32)R16((u32)(r_ebx+0x394u));
    /* 00769732: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00769735: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00769736: push dword ptr [0xa9b078] */ { u32 v = R32((u32)(0xa9b078u)); r_esp -= 4; W32(r_esp, v); }
    /* 0076973c: push dword ptr [ebx + 0x60] */ { u32 v = R32((u32)(r_ebx+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 0076973f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00769740: push dword ptr [ebx + 0x3cc] */ { u32 v = R32((u32)(r_ebx+0x3ccu)); r_esp -= 4; W32(r_esp, v); }
    /* 00769746: call 0x76619c */ r_esp -= 4; W32(r_esp, 0x76974bu); f_0076619c();
    /* 0076974b: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_00769752:; BB(0x00769752);
    /* 00769752: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00769759: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00769760: push 0xe4 */ { u32 v = 0xe4u; r_esp -= 4; W32(r_esp, v); }
    /* 00769765: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x76976au); f_005caba4();
    /* 0076976a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0076976b: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0076976e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00769770: je 0x7697c8 */ if (fZ) goto L_007697c8;
L_00769772:; BB(0x00769772);
    /* 00769772: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00769779: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00769780: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00769783: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 00769785: call 0x768964 */ r_esp -= 4; W32(r_esp, 0x76978au); f_00768964();
    /* 0076978a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076978c: jne 0x769792 */ if (!fZ) goto L_00769792;
L_0076978e:; BB(0x0076978e);
    /* 0076978e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00769790: jmp 0x76979b */ goto L_0076979b;
L_00769792:; BB(0x00769792);
    /* 00769792: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00769795: lea edx, [eax + 0xe14] */ r_edx = (u32)(r_eax+0xe14u);
L_0076979b:; BB(0x0076979b);
    /* 0076979b: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0076979e: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 007697a1: movzx eax, word ptr [ebx + 0x394] */ r_eax = (u32)R16((u32)(r_ebx+0x394u));
    /* 007697a8: add eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007697ab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007697ac: push dword ptr [0xa9b078] */ { u32 v = R32((u32)(0xa9b078u)); r_esp -= 4; W32(r_esp, v); }
    /* 007697b2: push dword ptr [ebx + 0x60] */ { u32 v = R32((u32)(r_ebx+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 007697b5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007697b6: push dword ptr [ebx + 0x3cc] */ { u32 v = R32((u32)(r_ebx+0x3ccu)); r_esp -= 4; W32(r_esp, v); }
    /* 007697bc: call 0x76619c */ r_esp -= 4; W32(r_esp, 0x7697c1u); f_0076619c();
    /* 007697c1: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_007697c8:; BB(0x007697c8);
    /* 007697c8: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 007697cb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007697ce: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007697d5: mov esp, ebp */ r_esp = r_ebp;
    /* 007697d7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007697d8: ret  */ FN_RET(0x0076968c); r_esp += 4; return;
}

void f_007697dc(void)
{
    FN_ENTER(0x007697dc);
    /* 007697dc: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 007697e0: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007697e3: jne 0x7697ea */ if (!fZ) goto L_007697ea;
L_007697e5:; BB(0x007697e5);
    /* 007697e5: call 0x76b85c */ r_esp -= 4; W32(r_esp, 0x7697eau); f_0076b85c();
L_007697ea:; BB(0x007697ea);
    /* 007697ea: ret 4 */ FN_RET(0x007697dc); r_esp += 8; return;
}

void f_007697f0(void)
{
    FN_ENTER(0x007697f0);
    /* 007697f0: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 007697f4: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007697f7: je 0x769802 */ if (fZ) goto L_00769802;
L_007697f9:; BB(0x007697f9);
    /* 007697f9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007697fb: jne 0x769802 */ if (!fZ) goto L_00769802;
L_007697fd:; BB(0x007697fd);
    /* 007697fd: call 0x769808 */ r_esp -= 4; W32(r_esp, 0x769802u); f_00769808();
L_00769802:; BB(0x00769802);
    /* 00769802: ret 4 */ FN_RET(0x007697f0); r_esp += 8; return;
}

void f_00769808(void) /* sub_769808 */
{
    FN_ENTER(0x00769808);
    /* 00769808: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00769809: mov ebp, esp */ r_ebp = r_esp;
    /* 0076980b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0076980d: push 0x8f3b3c */ { u32 v = 0x8f3b3cu; r_esp -= 4; W32(r_esp, v); }
    /* 00769812: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00769818: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00769819: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00769820: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00769823: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00769826: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 00769829: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 0076982c: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 0076982f: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00769832: push 0x41d80000 */ { u32 v = 0x41d80000u; r_esp -= 4; W32(r_esp, v); }
    /* 00769837: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x76983cu); f_007aaa30();
    /* 0076983c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076983e: jne 0x769964 */ if (!fZ) goto L_00769964;
L_00769844:; BB(0x00769844);
    /* 00769844: push 0x41e00000 */ { u32 v = 0x41e00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00769849: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0076984c: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x769851u); f_007aaa30();
    /* 00769851: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00769853: je 0x769950 */ if (fZ) goto L_00769950;
L_00769859:; BB(0x00769859);
    /* 00769859: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0076985c: mov eax, dword ptr [eax + 0xf80] */ r_eax = R32((u32)(r_eax+0xf80u));
    /* 00769862: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00769865: jl 0x769893 */ if ((fS!=fO)) goto L_00769893;
L_00769867:; BB(0x00769867);
    /* 00769867: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0076986a: jg 0x769893 */ if ((!fZ&&fS==fO)) goto L_00769893;
L_0076986c:; BB(0x0076986c);
    /* 0076986c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0076986f: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x769874u); f_007751b0();
    /* 00769874: fcomp dword ptr [0x9773c8] */ fx_compare(ST(0), R_F32((u32)(0x9773c8u))); FPOP();
    /* 0076987a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0076987c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0076987d: jae 0x769889 */ if (!fC) goto L_00769889;
L_0076987f:; BB(0x0076987f);
    /* 0076987f: mov eax, 2 */ r_eax = 0x2u;
    /* 00769884: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00769887: jmp 0x7698b5 */ goto L_007698b5;
L_00769889:; BB(0x00769889);
    /* 00769889: mov eax, 3 */ r_eax = 0x3u;
    /* 0076988e: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00769891: jmp 0x7698b5 */ goto L_007698b5;
L_00769893:; BB(0x00769893);
    /* 00769893: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00769896: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x76989bu); f_007751b0();
    /* 0076989b: fcomp dword ptr [0x9773c8] */ fx_compare(ST(0), R_F32((u32)(0x9773c8u))); FPOP();
    /* 007698a1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007698a3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007698a4: jae 0x7698ad */ if (!fC) goto L_007698ad;
L_007698a6:; BB(0x007698a6);
    /* 007698a6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007698a8: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 007698ab: jmp 0x7698b5 */ goto L_007698b5;
L_007698ad:; BB(0x007698ad);
    /* 007698ad: mov eax, 1 */ r_eax = 0x1u;
    /* 007698b2: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
L_007698b5:; BB(0x007698b5);
    /* 007698b5: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x7698bau); f_0082d7b0();
    /* 007698ba: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007698bc: call 0x830cd8 */ r_esp -= 4; W32(r_esp, 0x7698c1u); f_00830cd8();
    /* 007698c1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007698c4: lea ecx, [eax + 0x38] */ r_ecx = (u32)(r_eax+0x38u);
    /* 007698c7: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x7698ccu); f_0082d838();
    /* 007698cc: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007698cf: mov edx, dword ptr [eax + 0x60] */ r_edx = R32((u32)(r_eax+0x60u));
    /* 007698d2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007698d4: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x7698d9u); f_0082d8bc();
    /* 007698d9: push 0x41e80000 */ { u32 v = 0x41e80000u; r_esp -= 4; W32(r_esp, v); }
    /* 007698de: mov eax, dword ptr [0xa9b078] */ r_eax = R32((u32)(0xa9b078u));
    /* 007698e3: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007698e5: mov edx, dword ptr [eax*8 + 0x9f75c8] */ r_edx = R32((u32)(r_eax*8+0x9f75c8u));
    /* 007698ec: mov ecx, dword ptr [edx*4 + 0xa9b080] */ r_ecx = R32((u32)(r_edx*4+0xa9b080u));
    /* 007698f3: call 0x579de0 */ r_esp -= 4; W32(r_esp, 0x7698f8u); f_00579de0();
    /* 007698f8: lea ebx, [ebp - 0x38] */ r_ebx = (u32)(r_ebp+0xffffffc8u);
    /* 007698fb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007698fc: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007698fe: mov edx, eax */ r_edx = r_eax;
    /* 00769900: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x769905u); f_00830aa0();
    /* 00769905: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x76990au); f_0082da80();
    /* 0076990a: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 00769911: push 0x60 */ { u32 v = 0x60u; r_esp -= 4; W32(r_esp, v); }
    /* 00769913: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x769918u); f_005caba4();
    /* 00769918: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00769919: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0076991c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0076991e: je 0x769950 */ if (fZ) goto L_00769950;
L_00769920:; BB(0x00769920);
    /* 00769920: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 00769927: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0076992e: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00769931: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 00769934: lea ebx, [ebp - 0x38] */ r_ebx = (u32)(r_ebp+0xffffffc8u);
    /* 00769937: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00769938: mov ecx, eax */ r_ecx = r_eax;
    /* 0076993a: push dword ptr [esi + 0x60] */ { u32 v = R32((u32)(r_esi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 0076993d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0076993e: push dword ptr [esi + 0x3cc] */ { u32 v = R32((u32)(r_esi+0x3ccu)); r_esp -= 4; W32(r_esp, v); }
    /* 00769944: call 0x76cb9c */ r_esp -= 4; W32(r_esp, 0x769949u); f_0076cb9c();
    /* 00769949: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_00769950:; BB(0x00769950);
    /* 00769950: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00769953: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00769956: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00769959: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00769960: mov esp, ebp */ r_esp = r_ebp;
    /* 00769962: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00769963: ret  */ FN_RET(0x00769808); r_esp += 4; return;
L_00769964:; BB(0x00769964);
    /* 00769964: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00769967: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 00769969: call 0x768964 */ r_esp -= 4; W32(r_esp, 0x76996eu); f_00768964();
    /* 0076996e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00769970: je 0x769990 */ if (fZ) goto L_00769990;
L_00769972:; BB(0x00769972);
    /* 00769972: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00769975: mov eax, dword ptr [ecx + 0xec4] */ r_eax = R32((u32)(r_ecx+0xec4u));
    /* 0076997b: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 0076997e: mov edx, dword ptr [ecx + 0xec8] */ r_edx = R32((u32)(r_ecx+0xec8u));
    /* 00769984: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 00769987: mov ebx, dword ptr [ecx + 0xecc] */ r_ebx = R32((u32)(r_ecx+0xeccu));
    /* 0076998d: mov dword ptr [ebp - 0x3c], ebx */ W32((u32)(r_ebp+0xffffffc4u), r_ebx);
L_00769990:; BB(0x00769990);
    /* 00769990: lea eax, [ebp - 0x44] */ r_eax = (u32)(r_ebp+0xffffffbcu);
    /* 00769993: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00769995: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00769997: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00769998: push 0x6f9 */ { u32 v = 0x6f9u; r_esp -= 4; W32(r_esp, v); }
    /* 0076999d: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x7699a2u); f_00814298();
    /* 007699a2: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007699a5: jmp 0x769844 */ goto L_00769844;
}

void f_007699ac(void)
{
    FN_ENTER(0x007699ac);
    /* 007699ac: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 007699b0: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007699b3: je 0x7699c6 */ if (fZ) goto L_007699c6;
L_007699b5:; BB(0x007699b5);
    /* 007699b5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007699b7: je 0x7699cb */ if (fZ) goto L_007699cb;
L_007699b9:; BB(0x007699b9);
    /* 007699b9: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007699bc: jne 0x7699cb */ if (!fZ) goto L_007699cb;
L_007699be:; BB(0x007699be);
    /* 007699be: call 0x76a708 */ r_esp -= 4; W32(r_esp, 0x7699c3u); f_0076a708();
    /* 007699c3: ret 4 */ FN_RET(0x007699ac); r_esp += 8; return;
L_007699c6:; BB(0x007699c6);
    /* 007699c6: call 0x76b7a8 */ r_esp -= 4; W32(r_esp, 0x7699cbu); f_0076b7a8();
L_007699cb:; BB(0x007699cb);
    /* 007699cb: ret 4 */ FN_RET(0x007699ac); r_esp += 8; return;
}

void f_007699d0(void)
{
    FN_ENTER(0x007699d0);
    /* 007699d0: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 007699d4: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007699d7: jne 0x7699e1 */ if (!fZ) goto L_007699e1;
L_007699d9:; BB(0x007699d9);
    /* 007699d9: call 0x76b700 */ r_esp -= 4; W32(r_esp, 0x7699deu); f_0076b700();
    /* 007699de: ret 4 */ FN_RET(0x007699d0); r_esp += 8; return;
L_007699e1:; BB(0x007699e1);
    /* 007699e1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007699e3: jne 0x7699ea */ if (!fZ) goto L_007699ea;
L_007699e5:; BB(0x007699e5);
    /* 007699e5: call 0x7693f0 */ r_esp -= 4; W32(r_esp, 0x7699eau); f_007693f0();
L_007699ea:; BB(0x007699ea);
    /* 007699ea: ret 4 */ FN_RET(0x007699d0); r_esp += 8; return;
}

void f_007699f0(void)
{
    FN_ENTER(0x007699f0);
    /* 007699f0: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 007699f4: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007699f7: jne 0x769a01 */ if (!fZ) goto L_00769a01;
L_007699f9:; BB(0x007699f9);
    /* 007699f9: call 0x76f4f4 */ r_esp -= 4; W32(r_esp, 0x7699feu); f_0076f4f4();
    /* 007699fe: ret 4 */ FN_RET(0x007699f0); r_esp += 8; return;
L_00769a01:; BB(0x00769a01);
    /* 00769a01: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00769a03: jne 0x769a0a */ if (!fZ) goto L_00769a0a;
L_00769a05:; BB(0x00769a05);
    /* 00769a05: call 0x769a10 */ r_esp -= 4; W32(r_esp, 0x769a0au); f_00769a10();
L_00769a0a:; BB(0x00769a0a);
    /* 00769a0a: ret 4 */ FN_RET(0x007699f0); r_esp += 8; return;
}

void f_00769a10(void) /* sub_769A10 */
{
    FN_ENTER(0x00769a10);
    /* 00769a10: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00769a11: mov edi, ecx */ r_edi = r_ecx;
    /* 00769a13: mov ecx, edi */ r_ecx = r_edi;
    /* 00769a15: push 0x42580000 */ { u32 v = 0x42580000u; r_esp -= 4; W32(r_esp, v); }
    /* 00769a1a: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x769a1fu); f_007aaa30();
    /* 00769a1f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00769a21: je 0x769a5f */ if (fZ) goto L_00769a5f;
L_00769a23:; BB(0x00769a23);
    /* 00769a23: mov eax, dword ptr [edi + 0xf80] */ r_eax = R32((u32)(r_edi+0xf80u));
    /* 00769a29: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00769a2c: jl 0x769a4a */ if ((fS!=fO)) goto L_00769a4a;
L_00769a2e:; BB(0x00769a2e);
    /* 00769a2e: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00769a31: jg 0x769a4a */ if ((!fZ&&fS==fO)) goto L_00769a4a;
L_00769a33:; BB(0x00769a33);
    /* 00769a33: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00769a35: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00769a37: add edi, 0x38 */ {  u32 a = r_edi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00769a3a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00769a3b: push 0x6f3 */ { u32 v = 0x6f3u; r_esp -= 4; W32(r_esp, v); }
    /* 00769a40: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x769a45u); f_00814298();
    /* 00769a45: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00769a48: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00769a49: ret  */ FN_RET(0x00769a10); r_esp += 4; return;
L_00769a4a:; BB(0x00769a4a);
    /* 00769a4a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00769a4c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00769a4e: add edi, 0x38 */ {  u32 a = r_edi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00769a51: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00769a52: push 0x6f2 */ { u32 v = 0x6f2u; r_esp -= 4; W32(r_esp, v); }
    /* 00769a57: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x769a5cu); f_00814298();
    /* 00769a5c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_00769a5f:; BB(0x00769a5f);
    /* 00769a5f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00769a60: ret  */ FN_RET(0x00769a10); r_esp += 4; return;
}

void f_00769a64(void)
{
    FN_ENTER(0x00769a64);
    /* 00769a64: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00769a68: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00769a6b: je 0x769a7e */ if (fZ) goto L_00769a7e;
L_00769a6d:; BB(0x00769a6d);
    /* 00769a6d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00769a6f: je 0x769a83 */ if (fZ) goto L_00769a83;
L_00769a71:; BB(0x00769a71);
    /* 00769a71: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00769a74: jne 0x769a83 */ if (!fZ) goto L_00769a83;
L_00769a76:; BB(0x00769a76);
    /* 00769a76: call 0x76b620 */ r_esp -= 4; W32(r_esp, 0x769a7bu); f_0076b620();
    /* 00769a7b: ret 4 */ FN_RET(0x00769a64); r_esp += 8; return;
L_00769a7e:; BB(0x00769a7e);
    /* 00769a7e: call 0x76b688 */ r_esp -= 4; W32(r_esp, 0x769a83u); f_0076b688();
L_00769a83:; BB(0x00769a83);
    /* 00769a83: ret 4 */ FN_RET(0x00769a64); r_esp += 8; return;
}

void f_00769a88(void) /* sub_769A88 */
{
    FN_ENTER(0x00769a88);
    /* 00769a88: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00769a89: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00769a8a: mov edi, ecx */ r_edi = r_ecx;
    /* 00769a8c: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 00769a90: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00769a93: je 0x769b29 */ if (fZ) goto L_00769b29;
L_00769a99:; BB(0x00769a99);
    /* 00769a99: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fO = 0; }
    /* 00769a9b: jne 0x769b1d */ if (!fZ) goto L_00769b1d;
L_00769aa1:; BB(0x00769aa1);
    /* 00769aa1: fld dword ptr [0x9773bc] */ FPUSH(R_F32((u32)(0x9773bcu)));
    /* 00769aa7: fadd dword ptr [edi + 0x2b8] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x2b8u));
    /* 00769aad: fcom dword ptr [0x9773b8] */ fx_compare(ST(0), R_F32((u32)(0x9773b8u))); 
    /* 00769ab3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00769ab5: fstp dword ptr [edi + 0x2b8] */ W_F32((u32)(r_edi+0x2b8u), ST(0)); FPOP();
    /* 00769abb: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00769abc: jbe 0x769b30 */ if ((fC||fZ)) goto L_00769b30;
L_00769abe:; BB(0x00769abe);
    /* 00769abe: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 00769ac1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00769ac3: mov ebx, eax */ r_ebx = r_eax;
L_00769ac5:; BB(0x00769ac5);
    /* 00769ac5: mov edx, dword ptr [edi + 0xfb4] */ r_edx = R32((u32)(r_edi+0xfb4u));
    /* 00769acb: push dword ptr [edx + ebx*4] */ { u32 v = R32((u32)(r_edx+r_ebx*4)); r_esp -= 4; W32(r_esp, v); }
    /* 00769ace: mov ecx, edi */ r_ecx = r_edi;
    /* 00769ad0: call 0x7776d0 */ r_esp -= 4; W32(r_esp, 0x769ad5u); f_007776d0();
    /* 00769ad5: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00769ad8: cmp ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00769adb: jl 0x769ac5 */ if ((fS!=fO)) goto L_00769ac5;
L_00769add:; BB(0x00769add);
    /* 00769add: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 00769ae0: mov edx, dword ptr [edi + 0xf94] */ r_edx = R32((u32)(r_edi+0xf94u));
    /* 00769ae6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00769ae8: jl 0x769b05 */ if ((fS!=fO)) goto L_00769b05;
L_00769aea:; BB(0x00769aea);
    /* 00769aea: cmp edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00769aed: jg 0x769b05 */ if ((!fZ&&fS==fO)) goto L_00769b05;
L_00769aef:; BB(0x00769aef);
    /* 00769aef: mov eax, dword ptr [edi + 0xfb4] */ r_eax = R32((u32)(r_edi+0xfb4u));
    /* 00769af5: mov ecx, dword ptr [eax + edx*4] */ r_ecx = R32((u32)(r_eax+r_edx*4));
    /* 00769af8: call 0x7778d8 */ r_esp -= 4; W32(r_esp, 0x769afdu); f_007778d8();
    /* 00769afd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00769afe: mov ecx, edi */ r_ecx = r_edi;
    /* 00769b00: call 0x7778e0 */ r_esp -= 4; W32(r_esp, 0x769b05u); f_007778e0();
L_00769b05:; BB(0x00769b05);
    /* 00769b05: mov ecx, edi */ r_ecx = r_edi;
    /* 00769b07: call 0x51f894 */ r_esp -= 4; W32(r_esp, 0x769b0cu); f_0051f894();
    /* 00769b0c: mov eax, dword ptr [edi + 0xf74] */ r_eax = R32((u32)(r_edi+0xf74u));
    /* 00769b12: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00769b15: mov dword ptr [edi + 0xf74], eax */ W32((u32)(r_edi+0xf74u), r_eax);
    /* 00769b1b: jmp 0x769b30 */ goto L_00769b30;
L_00769b1d:; BB(0x00769b1d);
    /* 00769b1d: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00769b20: jne 0x769b30 */ if (!fZ) goto L_00769b30;
L_00769b22:; BB(0x00769b22);
    /* 00769b22: call 0x44bf4c */ r_esp -= 4; W32(r_esp, 0x769b27u); f_0044bf4c();
    /* 00769b27: jmp 0x769b30 */ goto L_00769b30;
L_00769b29:; BB(0x00769b29);
    /* 00769b29: mov ecx, edi */ r_ecx = r_edi;
    /* 00769b2b: call 0x76b5ec */ r_esp -= 4; W32(r_esp, 0x769b30u); f_0076b5ec();
L_00769b30:; BB(0x00769b30);
    /* 00769b30: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00769b31: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00769b32: ret 4 */ FN_RET(0x00769a88); r_esp += 8; return;
}

void f_00769b38(void)
{
    FN_ENTER(0x00769b38);
    /* 00769b38: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00769b3c: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00769b3f: je 0x769b4a */ if (fZ) goto L_00769b4a;
L_00769b41:; BB(0x00769b41);
    /* 00769b41: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00769b43: jne 0x769b4a */ if (!fZ) goto L_00769b4a;
L_00769b45:; BB(0x00769b45);
    /* 00769b45: call 0x769b50 */ r_esp -= 4; W32(r_esp, 0x769b4au); f_00769b50();
L_00769b4a:; BB(0x00769b4a);
    /* 00769b4a: ret 4 */ FN_RET(0x00769b38); r_esp += 8; return;
}

void f_00769b50(void) /* sub_769B50 */
{
    FN_ENTER(0x00769b50);
    /* 00769b50: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00769b52: movzx eax, word ptr [ecx + 8] */ r_eax = (u32)R16((u32)(r_ecx+0x8u));
    /* 00769b56: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00769b5b: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00769b5d: mov word ptr [ecx + 8], ax */ W16((u32)(r_ecx+0x8u), (u16)r_eax);
    /* 00769b61: call 0x810ae8 */ r_esp -= 4; W32(r_esp, 0x769b66u); f_00810ae8();
    /* 00769b66: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00769b69: ret  */ FN_RET(0x00769b50); r_esp += 4; return;
}

void f_00769b6c(void) /* sub_769B6C */
{
    FN_ENTER(0x00769b6c);
    /* 00769b6c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00769b6d: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00769b6f: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x769b74u); f_004f7c84();
    /* 00769b74: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00769b76: je 0x769b7a */ if (fZ) goto L_00769b7a;
L_00769b78:; BB(0x00769b78);
    /* 00769b78: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00769b79: ret  */ FN_RET(0x00769b6c); r_esp += 4; return;
L_00769b7a:; BB(0x00769b7a);
    /* 00769b7a: call 0x520db8 */ r_esp -= 4; W32(r_esp, 0x769b7fu); f_00520db8();
    /* 00769b7f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00769b81: je 0x769b85 */ if (fZ) goto L_00769b85;
L_00769b83:; BB(0x00769b83);
    /* 00769b83: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00769b84: ret  */ FN_RET(0x00769b6c); r_esp += 4; return;
L_00769b85:; BB(0x00769b85);
    /* 00769b85: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00769b88: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00769b8a: call dword ptr [eax + 0x154] */ { u32 t = R32((u32)(r_eax+0x154u)); r_esp -= 4; W32(r_esp, 0x769b90u); call_ind(t); }
    /* 00769b90: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00769b93: je 0x769ba0 */ if (fZ) goto L_00769ba0;
L_00769b95:; BB(0x00769b95);
    /* 00769b95: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00769b98: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00769b9a: call dword ptr [eax + 0x15c] */ { u32 t = R32((u32)(r_eax+0x15cu)); r_esp -= 4; W32(r_esp, 0x769ba0u); call_ind(t); }
L_00769ba0:; BB(0x00769ba0);
    /* 00769ba0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00769ba1: ret  */ FN_RET(0x00769b6c); r_esp += 4; return;
}

void f_00769ba4(void) /* sub_769BA4 */
{
    FN_ENTER(0x00769ba4);
    /* 00769ba4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00769ba5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00769ba6: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00769ba8: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x769badu); f_004f7c84();
    /* 00769bad: mov ebx, eax */ r_ebx = r_eax;
    /* 00769baf: mov edx, dword ptr [ebp + 0xf74] */ r_edx = R32((u32)(r_ebp+0xf74u));
    /* 00769bb5: test dl, 8 */ {  u32 a = (u8)r_edx; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00769bb8: je 0x769bc1 */ if (fZ) goto L_00769bc1;
L_00769bba:; BB(0x00769bba);
    /* 00769bba: mov edx, 1 */ r_edx = 0x1u;
    /* 00769bbf: jmp 0x769bc3 */ goto L_00769bc3;
L_00769bc1:; BB(0x00769bc1);
    /* 00769bc1: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_00769bc3:; BB(0x00769bc3);
    /* 00769bc3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00769bc5: je 0x769bce */ if (fZ) goto L_00769bce;
L_00769bc7:; BB(0x00769bc7);
    /* 00769bc7: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00769bc9: jne 0x769bce */ if (!fZ) goto L_00769bce;
L_00769bcb:; BB(0x00769bcb);
    /* 00769bcb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00769bcc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00769bcd: ret  */ FN_RET(0x00769ba4); r_esp += 4; return;
L_00769bce:; BB(0x00769bce);
    /* 00769bce: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x769bd3u); f_0082d7b0();
    /* 00769bd3: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00769bd5: call 0x769c94 */ r_esp -= 4; W32(r_esp, 0x769bdau); f_00769c94();
    /* 00769bda: mov ecx, dword ptr [ebp + 0x24] */ r_ecx = R32((u32)(r_ebp+0x24u));
    /* 00769bdd: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x769be2u); f_00829cc8();
    /* 00769be2: fld dword ptr [ebp + 0xf8c] */ FPUSH(R_F32((u32)(r_ebp+0xf8cu)));
    /* 00769be8: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00769beb: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 00769bf2: fchs  */ ST(0) = -ST(0);
    /* 00769bf4: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00769bf8: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 00769c00: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00769c02: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x769c07u); f_00830b74();
    /* 00769c07: movsx edx, word ptr [ebp + 0xfa4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfa4u));
    /* 00769c0e: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00769c11: je 0x769c25 */ if (fZ) goto L_00769c25;
L_00769c13:; BB(0x00769c13);
    /* 00769c13: lea ecx, [ebp + 0x38] */ r_ecx = (u32)(r_ebp+0x38u);
    /* 00769c16: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x769c1bu); f_0082d838();
    /* 00769c1b: mov edx, dword ptr [ebp + 0x60] */ r_edx = R32((u32)(r_ebp+0x60u));
    /* 00769c1e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00769c20: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x769c25u); f_0082d8bc();
L_00769c25:; BB(0x00769c25);
    /* 00769c25: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_00769c27:; BB(0x00769c27);
    /* 00769c27: mov eax, dword ptr [ebp + 0xfb4] */ r_eax = R32((u32)(r_ebp+0xfb4u));
    /* 00769c2d: mov eax, dword ptr [eax + edx*4] */ r_eax = R32((u32)(r_eax+r_edx*4));
    /* 00769c30: mov eax, dword ptr [eax + 0x384] */ r_eax = R32((u32)(r_eax+0x384u));
    /* 00769c36: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00769c39: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00769c3b: je 0x769c53 */ if (fZ) goto L_00769c53;
L_00769c3d:; BB(0x00769c3d);
    /* 00769c3d: mov eax, dword ptr [ebp + edx*8 + 0x3cc] */ r_eax = R32((u32)(r_ebp+r_edx*8+0x3ccu));
    /* 00769c44: or dword ptr [eax], 8 */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 00769c47: mov eax, dword ptr [ebp + edx*8 + 0x3d0] */ r_eax = R32((u32)(r_ebp+r_edx*8+0x3d0u));
    /* 00769c4e: and dword ptr [eax], 0xfffffff7 */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0xfffffff7u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00769c51: jmp 0x769c67 */ goto L_00769c67;
L_00769c53:; BB(0x00769c53);
    /* 00769c53: mov eax, dword ptr [ebp + edx*8 + 0x3cc] */ r_eax = R32((u32)(r_ebp+r_edx*8+0x3ccu));
    /* 00769c5a: and dword ptr [eax], 0xfffffff7 */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0xfffffff7u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00769c5d: mov eax, dword ptr [ebp + edx*8 + 0x3d0] */ r_eax = R32((u32)(r_ebp+r_edx*8+0x3d0u));
    /* 00769c64: or dword ptr [eax], 8 */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_00769c67:; BB(0x00769c67);
    /* 00769c67: cmp edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00769c6a: jl 0x769c27 */ if ((fS!=fO)) goto L_00769c27;
L_00769c6c:; BB(0x00769c6c);
    /* 00769c6c: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00769c6e: je 0x769c7b */ if (fZ) goto L_00769c7b;
L_00769c70:; BB(0x00769c70);
    /* 00769c70: push dword ptr [ebp + 0x34] */ { u32 v = R32((u32)(r_ebp+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 00769c73: call 0x82e760 */ r_esp -= 4; W32(r_esp, 0x769c78u); f_0082e760();
    /* 00769c78: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00769c79: jmp 0x769c82 */ goto L_00769c82;
L_00769c7b:; BB(0x00769c7b);
    /* 00769c7b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00769c7d: call 0x7aa850 */ r_esp -= 4; W32(r_esp, 0x769c82u); f_007aa850();
L_00769c82:; BB(0x00769c82);
    /* 00769c82: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00769c84: call 0x769cf0 */ r_esp -= 4; W32(r_esp, 0x769c89u); f_00769cf0();
    /* 00769c89: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x769c8eu); f_0082da80();
    /* 00769c8e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00769c8f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00769c90: ret  */ FN_RET(0x00769ba4); r_esp += 4; return;
}

void f_00769c94(void) /* sub_769C94 */
{
    FN_ENTER(0x00769c94);
    /* 00769c94: mov dword ptr [0xa9b08c], 0 */ W32((u32)(0xa9b08cu), 0x0u);
    /* 00769c9e: lea eax, [ecx + 0x414] */ r_eax = (u32)(r_ecx+0x414u);
    /* 00769ca4: mov dword ptr [0xa9b09c], eax */ W32((u32)(0xa9b09cu), r_eax);
    /* 00769ca9: mov eax, dword ptr [ecx + 0x60] */ r_eax = R32((u32)(r_ecx+0x60u));
    /* 00769cac: mov dword ptr [0xa9b090], eax */ W32((u32)(0xa9b090u), r_eax);
    /* 00769cb1: movsx eax, word ptr [ecx + 0xfa4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0xfa4u));
    /* 00769cb8: lea edx, [ecx + 0xf3c] */ r_edx = (u32)(r_ecx+0xf3cu);
    /* 00769cbe: mov dword ptr [0xa9b094], edx */ W32((u32)(0xa9b094u), r_edx);
    /* 00769cc4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00769cc6: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00769cc9: jne 0x769cd2 */ if (!fZ) goto L_00769cd2;
L_00769ccb:; BB(0x00769ccb);
    /* 00769ccb: mov edx, 0x767bf8 */ r_edx = 0x767bf8u;
    /* 00769cd0: jmp 0x769cdc */ goto L_00769cdc;
L_00769cd2:; BB(0x00769cd2);
    /* 00769cd2: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00769cd5: jne 0x769cdc */ if (!fZ) goto L_00769cdc;
L_00769cd7:; BB(0x00769cd7);
    /* 00769cd7: mov edx, 0x767bac */ r_edx = 0x767bacu;
L_00769cdc:; BB(0x00769cdc);
    /* 00769cdc: mov dword ptr [0xa9b098], edx */ W32((u32)(0xa9b098u), r_edx);
    /* 00769ce2: mov ecx, 0x767b44 */ r_ecx = 0x767b44u;
    /* 00769ce7: call 0x82fabc */ r_esp -= 4; W32(r_esp, 0x769cecu); f_0082fabc();
    /* 00769cec: ret  */ FN_RET(0x00769c94); r_esp += 4; return;
}

void f_00769cf0(void) /* sub_769CF0 */
{
    FN_ENTER(0x00769cf0);
    /* 00769cf0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00769cf2: call 0x82fabc */ r_esp -= 4; W32(r_esp, 0x769cf7u); f_0082fabc();
    /* 00769cf7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00769cf9: mov dword ptr [0xa9b094], eax */ W32((u32)(0xa9b094u), r_eax);
    /* 00769cfe: mov dword ptr [0xa9b09c], eax */ W32((u32)(0xa9b09cu), r_eax);
    /* 00769d03: ret  */ FN_RET(0x00769cf0); r_esp += 4; return;
}

void f_00769d04(void) /* sub_769D04 */
{
    FN_ENTER(0x00769d04);
    /* 00769d04: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00769d07: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 00769d0a: mov edx, dword ptr [ecx + 0xf74] */ r_edx = R32((u32)(r_ecx+0xf74u));
    /* 00769d10: and eax, 0xfffffdff */ {  u32 a = r_eax; u32 b = 0xfffffdffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00769d15: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 00769d18: test edx, 0x800 */ {  u32 a = r_edx; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00769d1e: je 0x769d27 */ if (fZ) goto L_00769d27;
L_00769d20:; BB(0x00769d20);
    /* 00769d20: mov eax, 1 */ r_eax = 0x1u;
    /* 00769d25: jmp 0x769d29 */ goto L_00769d29;
L_00769d27:; BB(0x00769d27);
    /* 00769d27: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00769d29:; BB(0x00769d29);
    /* 00769d29: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00769d2b: je 0x769d31 */ if (fZ) goto L_00769d31;
L_00769d2d:; BB(0x00769d2d);
    /* 00769d2d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00769d30: ret  */ FN_RET(0x00769d04); r_esp += 4; return;
L_00769d31:; BB(0x00769d31);
    /* 00769d31: mov eax, dword ptr [0xa9b074] */ r_eax = R32((u32)(0xa9b074u));
    /* 00769d36: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00769d39: je 0x769d75 */ if (fZ) goto L_00769d75;
L_00769d3b:; BB(0x00769d3b);
    /* 00769d3b: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00769d3e: jne 0x769d75 */ if (!fZ) goto L_00769d75;
L_00769d40:; BB(0x00769d40);
    /* 00769d40: mov byte ptr [esp], 0xdc */ W8((u32)(r_esp), 0xdcu);
    /* 00769d44: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 00769d49: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00769d4b: mov byte ptr [esp + 1], 2 */ W8((u32)(r_esp+0x1u), 0x2u);
    /* 00769d50: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 00769d55: mov ecx, 0x10 */ r_ecx = 0x10u;
    /* 00769d5a: mov word ptr [esp + 4], dx */ W16((u32)(r_esp+0x4u), (u16)r_edx);
    /* 00769d5f: mov word ptr [esp + 6], cx */ W16((u32)(r_esp+0x6u), (u16)r_ecx);
    /* 00769d64: call 0x52cf54 */ r_esp -= 4; W32(r_esp, 0x769d69u); f_0052cf54();
    /* 00769d69: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00769d6b: je 0x769d75 */ if (fZ) goto L_00769d75;
L_00769d6d:; BB(0x00769d6d);
    /* 00769d6d: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00769d70: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x769d75u); f_008003e0();
L_00769d75:; BB(0x00769d75);
    /* 00769d75: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00769d78: ret  */ FN_RET(0x00769d04); r_esp += 4; return;
}

void f_00769d7c(void) /* sub_769D7C */
{
    FN_ENTER(0x00769d7c);
    /* 00769d7c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00769d7d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00769d7e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00769d7f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00769d80: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00769d83: mov edi, ecx */ r_edi = r_ecx;
    /* 00769d85: mov eax, dword ptr [0xa9b074] */ r_eax = R32((u32)(0xa9b074u));
    /* 00769d8a: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00769d8d: jne 0x769e89 */ if (!fZ) goto L_00769e89;
L_00769d93:; BB(0x00769d93);
    /* 00769d93: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00769d95: mov ecx, edi */ r_ecx = r_edi;
    /* 00769d97: call 0x76bf88 */ r_esp -= 4; W32(r_esp, 0x769d9cu); f_0076bf88();
    /* 00769d9c: movsx eax, word ptr [edi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32eu));
    /* 00769da3: cmp eax, 0x1a */ {  u32 a = r_eax; u32 b = 0x1au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00769da6: je 0x769df3 */ if (fZ) goto L_00769df3;
L_00769da8:; BB(0x00769da8);
    /* 00769da8: mov eax, dword ptr [edi + 0xf74] */ r_eax = R32((u32)(r_edi+0xf74u));
    /* 00769dae: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00769db0: je 0x769db9 */ if (fZ) goto L_00769db9;
L_00769db2:; BB(0x00769db2);
    /* 00769db2: mov eax, 1 */ r_eax = 0x1u;
    /* 00769db7: jmp 0x769dbb */ goto L_00769dbb;
L_00769db9:; BB(0x00769db9);
    /* 00769db9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00769dbb:; BB(0x00769dbb);
    /* 00769dbb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00769dbd: jne 0x769df3 */ if (!fZ) goto L_00769df3;
L_00769dbf:; BB(0x00769dbf);
    /* 00769dbf: mov ecx, edi */ r_ecx = r_edi;
    /* 00769dc1: call 0x76af64 */ r_esp -= 4; W32(r_esp, 0x769dc6u); f_0076af64();
    /* 00769dc6: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00769dc8: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 00769dca: movsx eax, word ptr [edi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32eu));
    /* 00769dd1: mov ecx, edi */ r_ecx = r_edi;
    /* 00769dd3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00769dd4: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x769ddau); call_ind(t); }
    /* 00769dda: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00769ddc: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 00769dde: mov eax, 0x1a */ r_eax = 0x1au;
    /* 00769de3: mov word ptr [edi + 0x32e], ax */ W16((u32)(r_edi+0x32eu), (u16)r_eax);
    /* 00769dea: mov ecx, edi */ r_ecx = r_edi;
    /* 00769dec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00769ded: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x769df3u); call_ind(t); }
L_00769df3:; BB(0x00769df3);
    /* 00769df3: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00769df5: mov ecx, edi */ r_ecx = r_edi;
    /* 00769df7: call dword ptr [eax + 0x108] */ { u32 t = R32((u32)(r_eax+0x108u)); r_esp -= 4; W32(r_esp, 0x769dfdu); call_ind(t); }
    /* 00769dfd: mov esi, dword ptr [0xa9b078] */ r_esi = R32((u32)(0xa9b078u));
    /* 00769e03: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00769e05: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
    /* 00769e08: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00769e0a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00769e0c: push dword ptr [eax + 0x9f75d0] */ { u32 v = R32((u32)(r_eax+0x9f75d0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00769e12: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x769e17u); f_0077a684();
    /* 00769e17: mov ebp, eax */ r_ebp = r_eax;
    /* 00769e19: push dword ptr [esi*8 + 0x9f75d0] */ { u32 v = R32((u32)(r_esi*8+0x9f75d0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00769e20: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x769e25u); f_0077a698();
    /* 00769e25: mov ebx, eax */ r_ebx = r_eax;
    /* 00769e27: push dword ptr [esi*8 + 0x9f75d0] */ { u32 v = R32((u32)(r_esi*8+0x9f75d0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00769e2e: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x769e33u); f_0077a6b4();
    /* 00769e33: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00769e36: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00769e37: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00769e38: mov ecx, edi */ r_ecx = r_edi;
    /* 00769e3a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00769e3b: call 0x7868f8 */ r_esp -= 4; W32(r_esp, 0x769e40u); f_007868f8();
    /* 00769e40: push dword ptr [esi*8 + 0x9f75d0] */ { u32 v = R32((u32)(r_esi*8+0x9f75d0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00769e47: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x769e4cu); f_0077a6cc();
    /* 00769e4c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00769e4d: mov dword ptr [0xa9afe0], 4 */ W32((u32)(0xa9afe0u), 0x4u);
    /* 00769e57: mov dword ptr [edi + 0x3d0], eax */ W32((u32)(r_edi+0x3d0u), r_eax);
    /* 00769e5d: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 00769e60: and eax, 0xfffff5ff */ {  u32 a = r_eax; u32 b = 0xfffff5ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00769e65: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 00769e68: mov ecx, edi */ r_ecx = r_edi;
    /* 00769e6a: call 0x76c014 */ r_esp -= 4; W32(r_esp, 0x769e6fu); f_0076c014();
    /* 00769e6f: mov eax, dword ptr [0xa9b070] */ r_eax = R32((u32)(0xa9b070u));
    /* 00769e74: or eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00769e77: mov dword ptr [0xa9b070], eax */ W32((u32)(0xa9b070u), r_eax);
    /* 00769e7c: call 0x76f514 */ r_esp -= 4; W32(r_esp, 0x769e81u); f_0076f514();
    /* 00769e81: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00769e84: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00769e85: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00769e86: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00769e87: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00769e88: ret  */ FN_RET(0x00769d7c); r_esp += 4; return;
L_00769e89:; BB(0x00769e89);
    /* 00769e89: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00769e8c: jne 0x769ec3 */ if (!fZ) goto L_00769ec3;
L_00769e8e:; BB(0x00769e8e);
    /* 00769e8e: mov byte ptr [esp], 0xdc */ W8((u32)(r_esp), 0xdcu);
    /* 00769e92: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 00769e97: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00769e99: mov byte ptr [esp + 1], 2 */ W8((u32)(r_esp+0x1u), 0x2u);
    /* 00769e9e: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 00769ea3: mov ecx, 0x1b */ r_ecx = 0x1bu;
    /* 00769ea8: mov word ptr [esp + 4], dx */ W16((u32)(r_esp+0x4u), (u16)r_edx);
    /* 00769ead: mov word ptr [esp + 6], cx */ W16((u32)(r_esp+0x6u), (u16)r_ecx);
    /* 00769eb2: call 0x52cf54 */ r_esp -= 4; W32(r_esp, 0x769eb7u); f_0052cf54();
    /* 00769eb7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00769eb9: je 0x769ec3 */ if (fZ) goto L_00769ec3;
L_00769ebb:; BB(0x00769ebb);
    /* 00769ebb: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00769ebe: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x769ec3u); f_008003e0();
L_00769ec3:; BB(0x00769ec3);
    /* 00769ec3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00769ec6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00769ec7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00769ec8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00769ec9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00769eca: ret  */ FN_RET(0x00769d7c); r_esp += 4; return;
}

void f_00769dbe(void)
{
    FN_ENTER(0x00769dbe);
    /* 00769dbe: xor al, 0x8b */ {  u32 a = (u8)r_eax; u32 b = 0x8bu; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00769dc0: iretd  */ UNSUP(0x00769dc0, "iretd ");
    /* 00769dc1: call 0x76af64 */ r_esp -= 4; W32(r_esp, 0x769dc6u); f_0076af64();
    /* 00769dc6: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00769dc8: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 00769dca: movsx eax, word ptr [edi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32eu));
    /* 00769dd1: mov ecx, edi */ r_ecx = r_edi;
    /* 00769dd3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00769dd4: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x769ddau); call_ind(t); }
    /* 00769dda: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00769ddc: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 00769dde: mov eax, 0x1a */ r_eax = 0x1au;
    /* 00769de3: mov word ptr [edi + 0x32e], ax */ W16((u32)(r_edi+0x32eu), (u16)r_eax);
    /* 00769dea: mov ecx, edi */ r_ecx = r_edi;
    /* 00769dec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00769ded: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x769df3u); call_ind(t); }
    /* 00769df3: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00769df5: mov ecx, edi */ r_ecx = r_edi;
    /* 00769df7: call dword ptr [eax + 0x108] */ { u32 t = R32((u32)(r_eax+0x108u)); r_esp -= 4; W32(r_esp, 0x769dfdu); call_ind(t); }
    /* 00769dfd: mov esi, dword ptr [0xa9b078] */ r_esi = R32((u32)(0xa9b078u));
    /* 00769e03: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00769e05: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
    /* 00769e08: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00769e0a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00769e0c: push dword ptr [eax + 0x9f75d0] */ { u32 v = R32((u32)(r_eax+0x9f75d0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00769e12: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x769e17u); f_0077a684();
    /* 00769e17: mov ebp, eax */ r_ebp = r_eax;
    /* 00769e19: push dword ptr [esi*8 + 0x9f75d0] */ { u32 v = R32((u32)(r_esi*8+0x9f75d0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00769e20: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x769e25u); f_0077a698();
    /* 00769e25: mov ebx, eax */ r_ebx = r_eax;
    /* 00769e27: push dword ptr [esi*8 + 0x9f75d0] */ { u32 v = R32((u32)(r_esi*8+0x9f75d0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00769e2e: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x769e33u); f_0077a6b4();
    /* 00769e33: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00769e36: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00769e37: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00769e38: mov ecx, edi */ r_ecx = r_edi;
    /* 00769e3a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00769e3b: call 0x7868f8 */ r_esp -= 4; W32(r_esp, 0x769e40u); f_007868f8();
    /* 00769e40: push dword ptr [esi*8 + 0x9f75d0] */ { u32 v = R32((u32)(r_esi*8+0x9f75d0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00769e47: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x769e4cu); f_0077a6cc();
    /* 00769e4c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00769e4d: mov dword ptr [0xa9afe0], 4 */ W32((u32)(0xa9afe0u), 0x4u);
    /* 00769e57: mov dword ptr [edi + 0x3d0], eax */ W32((u32)(r_edi+0x3d0u), r_eax);
    /* 00769e5d: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 00769e60: and eax, 0xfffff5ff */ {  u32 a = r_eax; u32 b = 0xfffff5ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00769e65: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 00769e68: mov ecx, edi */ r_ecx = r_edi;
    /* 00769e6a: call 0x76c014 */ r_esp -= 4; W32(r_esp, 0x769e6fu); f_0076c014();
    /* 00769e6f: mov eax, dword ptr [0xa9b070] */ r_eax = R32((u32)(0xa9b070u));
    /* 00769e74: or eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00769e77: mov dword ptr [0xa9b070], eax */ W32((u32)(0xa9b070u), r_eax);
    /* 00769e7c: call 0x76f514 */ r_esp -= 4; W32(r_esp, 0x769e81u); f_0076f514();
    /* 00769e81: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00769e84: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00769e85: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00769e86: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00769e87: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00769e88: ret  */ FN_RET(0x00769dbe); r_esp += 4; return;
}

void f_00769ecc(void) /* sub_769ECC */
{
    FN_ENTER(0x00769ecc);
    /* 00769ecc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00769ecd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00769ece: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00769ecf: mov esi, ecx */ r_esi = r_ecx;
    /* 00769ed1: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 00769ed5: movsx ebp, di */ r_ebp = (u32)(i32)(i16)(u16)r_edi;
    /* 00769ed8: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x769eddu); f_004f7c84();
    /* 00769edd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00769edf: jne 0x769f72 */ if (!fZ) goto L_00769f72;
L_00769ee5:; BB(0x00769ee5);
    /* 00769ee5: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00769ee7: jl 0x769eee */ if ((fS!=fO)) goto L_00769eee;
L_00769ee9:; BB(0x00769ee9);
    /* 00769ee9: cmp edi, 0x1f */ {  u32 a = r_edi; u32 b = 0x1fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00769eec: jle 0x769ef4 */ if ((fZ||fS!=fO)) goto L_00769ef4;
L_00769eee:; BB(0x00769eee);
    /* 00769eee: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00769eef: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00769ef0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00769ef1: ret 8 */ FN_RET(0x00769ecc); r_esp += 12; return;
L_00769ef4:; BB(0x00769ef4);
    /* 00769ef4: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00769ef8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00769ef9: lea ebp, [ebp + ebp*4] */ r_ebp = (u32)(r_ebp+r_ebp*4);
    /* 00769efd: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00769eff: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00769f01: lea ebp, [ebp + ebp + 0x9f6c60] */ r_ebp = (u32)(r_ebp+r_ebp+0x9f6c60u);
    /* 00769f08: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00769f09: mov ecx, esi */ r_ecx = r_esi;
    /* 00769f0b: call 0x769f88 */ r_esp -= 4; W32(r_esp, 0x769f10u); f_00769f88();
    /* 00769f10: movsx edx, word ptr [esi + 0x32e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x32eu));
    /* 00769f17: mov edi, dword ptr [esi + 0x37c] */ r_edi = R32((u32)(r_esi+0x37cu));
    /* 00769f1d: cmp edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00769f1f: je 0x769f2f */ if (fZ) goto L_00769f2f;
L_00769f21:; BB(0x00769f21);
    /* 00769f21: lea eax, [edx + edx*4] */ r_eax = (u32)(r_edx+r_edx*4);
    /* 00769f24: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00769f26: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00769f28: lea ebp, [eax + eax + 0x9f6c60] */ r_ebp = (u32)(r_eax+r_eax+0x9f6c60u);
L_00769f2f:; BB(0x00769f2f);
    /* 00769f2f: mov eax, dword ptr [ebp + 4] */ r_eax = R32((u32)(r_ebp+0x4u));
    /* 00769f32: cmp eax, dword ptr [0x9773a4] */ {  u32 a = r_eax; u32 b = R32((u32)(0x9773a4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00769f38: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00769f3b: je 0x769f78 */ if (fZ) goto L_00769f78;
L_00769f3d:; BB(0x00769f3d);
    /* 00769f3d: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 00769f41: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00769f42: add ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00769f44: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x769f46u); call_ind(t); }
    /* 00769f46: movsx edx, word ptr [esi + 0x32e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x32eu));
    /* 00769f4d: mov edi, dword ptr [esi + 0x37c] */ r_edi = R32((u32)(r_esi+0x37cu));
L_00769f53:; BB(0x00769f53);
    /* 00769f53: cmp edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00769f55: je 0x769f65 */ if (fZ) goto L_00769f65;
L_00769f57:; BB(0x00769f57);
    /* 00769f57: lea eax, [edx + edx*4] */ r_eax = (u32)(r_edx+r_edx*4);
    /* 00769f5a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00769f5c: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00769f5e: lea ebp, [eax + eax + 0x9f6c60] */ r_ebp = (u32)(r_eax+r_eax+0x9f6c60u);
L_00769f65:; BB(0x00769f65);
    /* 00769f65: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00769f69: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00769f6a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00769f6b: mov ecx, esi */ r_ecx = r_esi;
    /* 00769f6d: call 0x76a0a4 */ r_esp -= 4; W32(r_esp, 0x769f72u); f_0076a0a4();
L_00769f72:; BB(0x00769f72);
    /* 00769f72: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00769f73: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00769f74: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00769f75: ret 8 */ FN_RET(0x00769ecc); r_esp += 12; return;
L_00769f78:; BB(0x00769f78);
    /* 00769f78: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00769f7a: je 0x769f53 */ if (fZ) goto L_00769f53;
L_00769f7c:; BB(0x00769f7c);
    /* 00769f7c: cmp ecx, dword ptr [0x9773a8] */ {  u32 a = r_ecx; u32 b = R32((u32)(0x9773a8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00769f82: jne 0x769f3d */ if (!fZ) goto L_00769f3d;
L_00769f84:; BB(0x00769f84);
    /* 00769f84: jmp 0x769f53 */ goto L_00769f53;
}

void f_00769f88(void) /* sub_769F88 */
{
    FN_ENTER(0x00769f88);
    /* 00769f88: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00769f89: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00769f8a: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00769f8c: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00769f90: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00769f93: jne 0x769fa6 */ if (!fZ) goto L_00769fa6;
L_00769f95:; BB(0x00769f95);
    /* 00769f95: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 00769f99: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00769f9a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00769f9c: call 0x76bbe8 */ r_esp -= 4; W32(r_esp, 0x769fa1u); f_0076bbe8();
    /* 00769fa1: jmp 0x76a059 */ goto L_0076a059;
L_00769fa6:; BB(0x00769fa6);
    /* 00769fa6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00769fa8: jne 0x76a059 */ if (!fZ) goto L_0076a059;
L_00769fae:; BB(0x00769fae);
    /* 00769fae: movsx eax, word ptr [ebx + 0xfa4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0xfa4u));
    /* 00769fb5: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00769fb8: je 0x769fcc */ if (fZ) goto L_00769fcc;
L_00769fba:; BB(0x00769fba);
    /* 00769fba: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 00769fbd: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 00769fc0: mov dword ptr [ebx + 0x44], eax */ W32((u32)(r_ebx+0x44u), r_eax);
    /* 00769fc3: mov eax, dword ptr [ebx + 0x40] */ r_eax = R32((u32)(r_ebx+0x40u));
    /* 00769fc6: mov dword ptr [ebx + 0x48], edx */ W32((u32)(r_ebx+0x48u), r_edx);
    /* 00769fc9: mov dword ptr [ebx + 0x4c], eax */ W32((u32)(r_ebx+0x4cu), r_eax);
L_00769fcc:; BB(0x00769fcc);
    /* 00769fcc: mov eax, dword ptr [0xa9b070] */ r_eax = R32((u32)(0xa9b070u));
    /* 00769fd1: mov edx, dword ptr [ebx + 0xf74] */ r_edx = R32((u32)(r_ebx+0xf74u));
    /* 00769fd7: and eax, 0xffffffc3 */ {  u32 a = r_eax; u32 b = 0xffffffc3u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00769fda: mov dword ptr [0xa9b070], eax */ W32((u32)(0xa9b070u), r_eax);
    /* 00769fdf: test edx, 0x1000 */ {  u32 a = r_edx; u32 b = 0x1000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00769fe5: je 0x769fee */ if (fZ) goto L_00769fee;
L_00769fe7:; BB(0x00769fe7);
    /* 00769fe7: mov eax, 1 */ r_eax = 0x1u;
    /* 00769fec: jmp 0x769ff0 */ goto L_00769ff0;
L_00769fee:; BB(0x00769fee);
    /* 00769fee: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00769ff0:; BB(0x00769ff0);
    /* 00769ff0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00769ff2: je 0x76a02a */ if (fZ) goto L_0076a02a;
L_00769ff4:; BB(0x00769ff4);
    /* 00769ff4: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 00769ff7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00769ff9: mov esi, eax */ r_esi = r_eax;
L_00769ffb:; BB(0x00769ffb);
    /* 00769ffb: mov edx, dword ptr [ebx + 0xfb0] */ r_edx = R32((u32)(r_ebx+0xfb0u));
    /* 0076a001: mov ecx, dword ptr [edx + esi*4] */ r_ecx = R32((u32)(r_edx+r_esi*4));
    /* 0076a004: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0076a007: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076a009: je 0x76a010 */ if (fZ) goto L_0076a010;
L_0076a00b:; BB(0x0076a00b);
    /* 0076a00b: call 0x764f48 */ r_esp -= 4; W32(r_esp, 0x76a010u); f_00764f48();
L_0076a010:; BB(0x0076a010);
    /* 0076a010: cmp esi, 0x13 */ {  u32 a = r_esi; u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0076a013: jl 0x769ffb */ if ((fS!=fO)) goto L_00769ffb;
L_0076a015:; BB(0x0076a015);
    /* 0076a015: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 0076a018: mov edx, dword ptr [ebx + 0xf74] */ r_edx = R32((u32)(r_ebx+0xf74u));
    /* 0076a01e: and edx, 0xffffefff */ {  u32 a = r_edx; u32 b = 0xffffefffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0076a024: mov dword ptr [ebx + 0xf74], edx */ W32((u32)(r_ebx+0xf74u), r_edx);
L_0076a02a:; BB(0x0076a02a);
    /* 0076a02a: mov eax, dword ptr [0xa9b074] */ r_eax = R32((u32)(0xa9b074u));
    /* 0076a02f: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076a032: je 0x76a079 */ if (fZ) goto L_0076a079;
L_0076a034:; BB(0x0076a034);
    /* 0076a034: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0076a037: je 0x76a040 */ if (fZ) goto L_0076a040;
L_0076a039:; BB(0x0076a039);
    /* 0076a039: mov eax, 1 */ r_eax = 0x1u;
    /* 0076a03e: jmp 0x76a042 */ goto L_0076a042;
L_0076a040:; BB(0x0076a040);
    /* 0076a040: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0076a042:; BB(0x0076a042);
    /* 0076a042: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0076a044: je 0x76a059 */ if (fZ) goto L_0076a059;
L_0076a046:; BB(0x0076a046);
    /* 0076a046: mov eax, dword ptr [ebx + 0xfa0] */ r_eax = R32((u32)(r_ebx+0xfa0u));
    /* 0076a04c: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076a04f: je 0x76a05e */ if (fZ) goto L_0076a05e;
L_0076a051:; BB(0x0076a051);
    /* 0076a051: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076a052: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0076a054: call 0x767ce0 */ r_esp -= 4; W32(r_esp, 0x76a059u); f_00767ce0();
L_0076a059:; BB(0x0076a059);
    /* 0076a059: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0076a05a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0076a05b: ret 8 */ FN_RET(0x00769f88); r_esp += 12; return;
L_0076a05e:; BB(0x0076a05e);
    /* 0076a05e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0076a060: call 0x767d88 */ r_esp -= 4; W32(r_esp, 0x76a065u); f_00767d88();
    /* 0076a065: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0076a067: jne 0x76a059 */ if (!fZ) goto L_0076a059;
L_0076a069:; BB(0x0076a069);
    /* 0076a069: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0076a06d: push dword ptr [eax + 0xc] */ { u32 v = R32((u32)(r_eax+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0076a070: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0076a072: call 0x767ce0 */ r_esp -= 4; W32(r_esp, 0x76a077u); f_00767ce0();
    /* 0076a077: jmp 0x76a059 */ goto L_0076a059;
L_0076a079:; BB(0x0076a079);
    /* 0076a079: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 0076a07c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0076a07e: mov esi, eax */ r_esi = r_eax;
L_0076a080:; BB(0x0076a080);
    /* 0076a080: mov edx, dword ptr [ebx + 0xfb4] */ r_edx = R32((u32)(r_ebx+0xfb4u));
    /* 0076a086: mov ecx, dword ptr [edx + esi*4] */ r_ecx = R32((u32)(r_edx+r_esi*4));
    /* 0076a089: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0076a08b: call dword ptr [edx + 0x108] */ { u32 t = R32((u32)(r_edx+0x108u)); r_esp -= 4; W32(r_esp, 0x76a091u); call_ind(t); }
    /* 0076a091: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0076a094: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0076a097: jl 0x76a080 */ if ((fS!=fO)) goto L_0076a080;
L_0076a099:; BB(0x0076a099);
    /* 0076a099: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 0076a09c: mov edx, dword ptr [ebx + 0xf74] */ r_edx = R32((u32)(r_ebx+0xf74u));
    /* 0076a0a2: jmp 0x76a034 */ goto L_0076a034;
}

