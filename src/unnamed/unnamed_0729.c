#include "protos.h"

void f_007290f0(void) /* sub_7290F0 */
{
    FN_ENTER(0x007290f0);
    /* 007290f0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007290f1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007290f2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007290f3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007290f6: mov ebx, ecx */ r_ebx = r_ecx;
    /* 007290f8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007290fa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007290fb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007290fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007290fd: push 0x56f */ { u32 v = 0x56fu; r_esp -= 4; W32(r_esp, v); }
    /* 00729102: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x729107u); f_00814298();
    /* 00729107: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0072910a: movzx eax, byte ptr [ebx + 0x64] */ r_eax = (u32)R8((u32)(r_ebx+0x64u));
    /* 0072910e: mov edx, dword ptr [ebx + 0x70] */ r_edx = R32((u32)(r_ebx+0x70u));
    /* 00729111: sub edx, dword ptr [eax*4 + 0x970a00] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax*4+0x970a00u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00729118: cmp edx, dword ptr [ebx + 0x68] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebx+0x68u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0072911b: jge 0x729125 */ if ((fS==fO)) goto L_00729125;
L_0072911d:; BB(0x0072911d);
    /* 0072911d: mov edx, dword ptr [ebx + 0x6c] */ r_edx = R32((u32)(r_ebx+0x6cu));
    /* 00729120: mov dword ptr [ebx + 0x70], edx */ W32((u32)(r_ebx+0x70u), r_edx);
    /* 00729123: jmp 0x729128 */ goto L_00729128;
L_00729125:; BB(0x00729125);
    /* 00729125: mov dword ptr [ebx + 0x70], edx */ W32((u32)(r_ebx+0x70u), r_edx);
L_00729128:; BB(0x00729128);
    /* 00729128: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0072912a: mov esi, eax */ r_esi = r_eax;
    /* 0072912c: mov edi, edx */ r_edi = r_edx;
L_0072912e:; BB(0x0072912e);
    /* 0072912e: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 00729133: imul edi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_edi; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00729135: mov ecx, dword ptr [ebx + 0x28] */ r_ecx = R32((u32)(r_ebx+0x28u));
    /* 00729138: mov ecx, dword ptr [ecx + esi*4] */ r_ecx = R32((u32)(r_ecx+r_esi*4));
    /* 0072913b: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0072913e: mov eax, edi */ r_eax = r_edi;
    /* 00729140: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00729143: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00729145: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 00729148: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0072914a: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0072914c: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0072914e: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00729150: add eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00729152: mov dword ptr [ecx + 0x20], eax */ W32((u32)(r_ecx+0x20u), r_eax);
    /* 00729155: call 0x72cdd0 */ r_esp -= 4; W32(r_esp, 0x72915au); f_0072cdd0();
    /* 0072915a: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 0072915f: imul edi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_edi; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00729161: sar edi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 00729164: neg edi */ { u32 x = r_edi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00729166: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00729169: add edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0072916b: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0072916e: cmp esi, 6 */ {  u32 a = r_esi; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00729171: jb 0x72912e */ if (fC) goto L_0072912e;
L_00729173:; BB(0x00729173);
    /* 00729173: fld dword ptr [0x9709d0] */ FPUSH(R_F32((u32)(0x9709d0u)));
    /* 00729179: fld dword ptr [0x9709d4] */ FPUSH(R_F32((u32)(0x9709d4u)));
    /* 0072917f: fadd dword ptr [ebx + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x38u));
    /* 00729182: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00729184: movsx eax, byte ptr [ebx + 0x62] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebx+0x62u));
    /* 00729188: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0072918b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0072918d: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 00729190: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00729192: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 00729195: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00729198: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0072919a: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0072919c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0072919e: fadd dword ptr [0x9709cc] */ ST(0) = ST(0) + R_F32((u32)(0x9709ccu));
    /* 007291a4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 007291a6: jle 0x72927c */ if ((fZ||fS!=fO)) goto L_0072927c;
L_007291ac:; BB(0x007291ac);
    /* 007291ac: fld dword ptr [0x9709c8] */ FPUSH(R_F32((u32)(0x9709c8u)));
    /* 007291b2: jmp 0x7291b6 */ goto L_007291b6;
L_007291b4:; BB(0x007291b4);
    /* 007291b4: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
L_007291b6:; BB(0x007291b6);
    /* 007291b6: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 007291b9: mov ecx, dword ptr [eax + edx*4] */ r_ecx = R32((u32)(r_eax+r_edx*4));
    /* 007291bc: fld dword ptr [ecx + 0x10] */ FPUSH(R_F32((u32)(r_ecx+0x10u)));
    /* 007291bf: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 007291c1: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007291c4: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 007291c6: fstp dword ptr [ecx + 8] */ W_F32((u32)(r_ecx+0x8u), ST(0)); FPOP();
    /* 007291c9: movsx eax, byte ptr [ebx + 0x62] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebx+0x62u));
    /* 007291cd: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007291cf: jl 0x7291b4 */ if ((fS!=fO)) goto L_007291b4;
L_007291d1:; BB(0x007291d1);
    /* 007291d1: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 007291d3: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007291d5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007291d7: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007291d9: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007291dc: jge 0x729275 */ if ((fS==fO)) goto L_00729275;
L_007291e2:; BB(0x007291e2);
    /* 007291e2: mov eax, edx */ r_eax = r_edx;
    /* 007291e4: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007291e6: add eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007291e9: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007291ec: jl 0x729259 */ if ((fS!=fO)) goto L_00729259;
L_007291ee:; BB(0x007291ee);
    /* 007291ee: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 007291f1: mov eax, dword ptr [eax + edx*4] */ r_eax = R32((u32)(r_eax+r_edx*4));
    /* 007291f4: movzx ecx, word ptr [eax + 4] */ r_ecx = (u32)R16((u32)(r_eax+0x4u));
    /* 007291f8: or ecx, 0xffff0002 */ {  u32 a = r_ecx; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 007291fe: mov word ptr [eax + 4], cx */ W16((u32)(r_eax+0x4u), (u16)r_ecx);
    /* 00729202: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 00729205: mov ecx, dword ptr [eax + edx*4 + 4] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x4u));
    /* 00729209: movzx eax, word ptr [ecx + 4] */ r_eax = (u32)R16((u32)(r_ecx+0x4u));
    /* 0072920d: or eax, 0xffff0002 */ {  u32 a = r_eax; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00729212: mov word ptr [ecx + 4], ax */ W16((u32)(r_ecx+0x4u), (u16)r_eax);
    /* 00729216: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 00729219: mov ecx, dword ptr [eax + edx*4 + 8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 0072921d: movzx eax, word ptr [ecx + 4] */ r_eax = (u32)R16((u32)(r_ecx+0x4u));
    /* 00729221: or eax, 0xffff0002 */ {  u32 a = r_eax; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00729226: mov word ptr [ecx + 4], ax */ W16((u32)(r_ecx+0x4u), (u16)r_eax);
    /* 0072922a: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 0072922d: mov ecx, dword ptr [eax + edx*4 + 0xc] */ r_ecx = R32((u32)(r_eax+r_edx*4+0xcu));
    /* 00729231: movzx eax, word ptr [ecx + 4] */ r_eax = (u32)R16((u32)(r_ecx+0x4u));
    /* 00729235: or eax, 0xffff0002 */ {  u32 a = r_eax; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0072923a: mov word ptr [ecx + 4], ax */ W16((u32)(r_ecx+0x4u), (u16)r_eax);
    /* 0072923e: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 00729241: mov ecx, dword ptr [eax + edx*4 + 0x10] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x10u));
    /* 00729245: movzx eax, word ptr [ecx + 4] */ r_eax = (u32)R16((u32)(r_ecx+0x4u));
    /* 00729249: or eax, 0xffff0002 */ {  u32 a = r_eax; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0072924e: mov word ptr [ecx + 4], ax */ W16((u32)(r_ecx+0x4u), (u16)r_eax);
    /* 00729252: add edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00729255: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00729257: jl 0x7291ee */ if ((fS!=fO)) goto L_007291ee;
L_00729259:; BB(0x00729259);
    /* 00729259: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 0072925c: mov eax, dword ptr [eax + edx*4] */ r_eax = R32((u32)(r_eax+r_edx*4));
    /* 0072925f: movzx ecx, word ptr [eax + 4] */ r_ecx = (u32)R16((u32)(r_eax+0x4u));
    /* 00729263: or ecx, 0xffff0002 */ {  u32 a = r_ecx; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00729269: mov word ptr [eax + 4], cx */ W16((u32)(r_eax+0x4u), (u16)r_ecx);
    /* 0072926d: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00729270: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00729273: jl 0x729259 */ if ((fS!=fO)) goto L_00729259;
L_00729275:; BB(0x00729275);
    /* 00729275: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00729278: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00729279: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0072927a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0072927b: ret  */ FN_RET(0x007290f0); r_esp += 4; return;
L_0072927c:; BB(0x0072927c);
    /* 0072927c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0072927e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00729280: jmp 0x7291e2 */ goto L_007291e2;
}

void f_00729288(void) /* sub_729288 */
{
    FN_ENTER(0x00729288);
    /* 00729288: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00729289: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0072928b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0072928d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072928e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072928f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00729290: push 0x56f */ { u32 v = 0x56fu; r_esp -= 4; W32(r_esp, v); }
    /* 00729295: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x72929au); f_00814298();
    /* 0072929a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0072929d: movsx ecx, byte ptr [ebx + 0x64] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_ebx+0x64u));
    /* 007292a1: movsx eax, byte ptr [ebx + 0x62] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebx+0x62u));
    /* 007292a5: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007292a8: movsx edx, cl */ r_edx = (u32)(i32)(i8)(u8)r_ecx;
    /* 007292ab: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007292ad: jl 0x7292c9 */ if ((fS!=fO)) goto L_007292c9;
L_007292af:; BB(0x007292af);
    /* 007292af: movzx edx, word ptr [ebx + 0x60] */ r_edx = (u32)R16((u32)(r_ebx+0x60u));
    /* 007292b3: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007292b6: je 0x7292c0 */ if (fZ) goto L_007292c0;
L_007292b8:; BB(0x007292b8);
    /* 007292b8: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007292bb: mov byte ptr [ebx + 0x64], al */ W8((u32)(r_ebx+0x64u), (u8)r_eax);
    /* 007292be: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007292bf: ret  */ FN_RET(0x00729288); r_esp += 4; return;
L_007292c0:; BB(0x007292c0);
    /* 007292c0: movzx eax, byte ptr [ebx + 0x63] */ r_eax = (u32)R8((u32)(r_ebx+0x63u));
    /* 007292c4: mov byte ptr [ebx + 0x64], al */ W8((u32)(r_ebx+0x64u), (u8)r_eax);
    /* 007292c7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007292c8: ret  */ FN_RET(0x00729288); r_esp += 4; return;
L_007292c9:; BB(0x007292c9);
    /* 007292c9: mov byte ptr [ebx + 0x64], cl */ W8((u32)(r_ebx+0x64u), (u8)r_ecx);
    /* 007292cc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007292cd: ret  */ FN_RET(0x00729288); r_esp += 4; return;
}

void f_007292d0(void) /* sub_7292D0 */
{
    FN_ENTER(0x007292d0);
    /* 007292d0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007292d1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 007292d3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007292d5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007292d6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007292d7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007292d8: push 0x56f */ { u32 v = 0x56fu; r_esp -= 4; W32(r_esp, v); }
    /* 007292dd: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x7292e2u); f_00814298();
    /* 007292e2: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007292e5: movsx ecx, byte ptr [ebx + 0x64] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_ebx+0x64u));
    /* 007292e9: movsx eax, byte ptr [ebx + 0x63] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebx+0x63u));
    /* 007292ed: add ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007292f0: movsx edx, cl */ r_edx = (u32)(i32)(i8)(u8)r_ecx;
    /* 007292f3: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007292f5: jge 0x729311 */ if ((fS==fO)) goto L_00729311;
L_007292f7:; BB(0x007292f7);
    /* 007292f7: movzx edx, word ptr [ebx + 0x60] */ r_edx = (u32)R16((u32)(r_ebx+0x60u));
    /* 007292fb: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007292fe: je 0x729305 */ if (fZ) goto L_00729305;
L_00729300:; BB(0x00729300);
    /* 00729300: mov byte ptr [ebx + 0x64], al */ W8((u32)(r_ebx+0x64u), (u8)r_eax);
    /* 00729303: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00729304: ret  */ FN_RET(0x007292d0); r_esp += 4; return;
L_00729305:; BB(0x00729305);
    /* 00729305: movzx eax, byte ptr [ebx + 0x62] */ r_eax = (u32)R8((u32)(r_ebx+0x62u));
    /* 00729309: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0072930c: mov byte ptr [ebx + 0x64], al */ W8((u32)(r_ebx+0x64u), (u8)r_eax);
    /* 0072930f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00729310: ret  */ FN_RET(0x007292d0); r_esp += 4; return;
L_00729311:; BB(0x00729311);
    /* 00729311: mov byte ptr [ebx + 0x64], cl */ W8((u32)(r_ebx+0x64u), (u8)r_ecx);
    /* 00729314: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00729315: ret  */ FN_RET(0x007292d0); r_esp += 4; return;
}

void f_00729318(void) /* sub_729318 */
{
    FN_ENTER(0x00729318);
    /* 00729318: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00729319: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0072931b: mov eax, dword ptr [ebx + 0x70] */ r_eax = R32((u32)(r_ebx+0x70u));
    /* 0072931e: cmp eax, dword ptr [ebx + 0x68] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0x68u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00729321: jl 0x729357 */ if ((fS!=fO)) goto L_00729357;
L_00729323:; BB(0x00729323);
    /* 00729323: cmp eax, dword ptr [ebx + 0x6c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0x6cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00729326: jg 0x729357 */ if ((!fZ&&fS==fO)) goto L_00729357;
L_00729328:; BB(0x00729328);
    /* 00729328: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0072932a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072932b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072932c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072932d: push 0x570 */ { u32 v = 0x570u; r_esp -= 4; W32(r_esp, v); }
    /* 00729332: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x729337u); f_00814298();
    /* 00729337: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0072933a: movzx eax, word ptr [ebx + 0x60] */ r_eax = (u32)R16((u32)(r_ebx+0x60u));
    /* 0072933e: mov ecx, dword ptr [ebx + 0x74] */ r_ecx = R32((u32)(r_ebx+0x74u));
    /* 00729341: or eax, 0xffff0002 */ {  u32 a = r_eax; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00729346: mov word ptr [ebx + 0x60], ax */ W16((u32)(r_ebx+0x60u), (u16)r_eax);
    /* 0072934a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0072934c: je 0x729355 */ if (fZ) goto L_00729355;
L_0072934e:; BB(0x0072934e);
    /* 0072934e: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00729350: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x729355u); f_00760acc();
L_00729355:; BB(0x00729355);
    /* 00729355: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00729356: ret  */ FN_RET(0x00729318); r_esp += 4; return;
L_00729357:; BB(0x00729357);
    /* 00729357: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00729359: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072935a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072935b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072935c: push 0x575 */ { u32 v = 0x575u; r_esp -= 4; W32(r_esp, v); }
    /* 00729361: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x729366u); f_00814298();
    /* 00729366: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00729369: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072936a: ret  */ FN_RET(0x00729318); r_esp += 4; return;
}

void f_0072936c(void) /* sub_72936C */
{
    FN_ENTER(0x0072936c);
    /* 0072936c: movzx eax, word ptr [ecx + 0x60] */ r_eax = (u32)R16((u32)(r_ecx+0x60u));
    /* 00729370: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00729372: je 0x729375 */ if (fZ) goto L_00729375;
L_00729374:; BB(0x00729374);
    /* 00729374: ret  */ FN_RET(0x0072936c); r_esp += 4; return;
L_00729375:; BB(0x00729375);
    /* 00729375: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00729377: je 0x72937a */ if (fZ) goto L_0072937a;
L_00729379:; BB(0x00729379);
    /* 00729379: ret  */ FN_RET(0x0072936c); r_esp += 4; return;
L_0072937a:; BB(0x0072937a);
    /* 0072937a: or eax, 0xffff0004 */ {  u32 a = r_eax; u32 b = 0xffff0004u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0072937f: mov word ptr [ecx + 0x60], ax */ W16((u32)(r_ecx+0x60u), (u16)r_eax);
    /* 00729383: ret  */ FN_RET(0x0072936c); r_esp += 4; return;
}

void f_00729384(void) /* sub_729384 */
{
    FN_ENTER(0x00729384);
    /* 00729384: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00729385: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00729386: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00729388: lea eax, [ebp + 0x78] */ r_eax = (u32)(r_ebp+0x78u);
    /* 0072938b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072938c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0072938e: call 0x712658 */ r_esp -= 4; W32(r_esp, 0x729393u); f_00712658();
    /* 00729393: mov ebx, eax */ r_ebx = r_eax;
    /* 00729395: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00729396: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00729398: call 0x710f80 */ r_esp -= 4; W32(r_esp, 0x72939du); f_00710f80();
    /* 0072939d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0072939e: lea edx, [ebp + 0x24] */ r_edx = (u32)(r_ebp+0x24u);
    /* 007293a1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007293a2: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007293a4: call 0x72a648 */ r_esp -= 4; W32(r_esp, 0x7293a9u); f_0072a648();
    /* 007293a9: movsx eax, byte ptr [ebp + 0x64] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0x64u));
    /* 007293ad: mov edx, dword ptr [ebp + 0x28] */ r_edx = R32((u32)(r_ebp+0x28u));
    /* 007293b0: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 007293b3: movzx edx, word ptr [ebp + 0x60] */ r_edx = (u32)R16((u32)(r_ebp+0x60u));
    /* 007293b7: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007293ba: je 0x7293c3 */ if (fZ) goto L_007293c3;
L_007293bc:; BB(0x007293bc);
    /* 007293bc: mov edx, 1 */ r_edx = 0x1u;
    /* 007293c1: jmp 0x7293c5 */ goto L_007293c5;
L_007293c3:; BB(0x007293c3);
    /* 007293c3: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_007293c5:; BB(0x007293c5);
    /* 007293c5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007293c6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007293c7: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007293c9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007293ca: call 0x7293e0 */ r_esp -= 4; W32(r_esp, 0x7293cfu); f_007293e0();
    /* 007293cf: mov ecx, dword ptr [ebp + 0x74] */ r_ecx = R32((u32)(r_ebp+0x74u));
    /* 007293d2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007293d4: je 0x7293dc */ if (fZ) goto L_007293dc;
L_007293d6:; BB(0x007293d6);
    /* 007293d6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007293d7: call 0x761390 */ r_esp -= 4; W32(r_esp, 0x7293dcu); f_00761390();
L_007293dc:; BB(0x007293dc);
    /* 007293dc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007293dd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007293de: ret  */ FN_RET(0x00729384); r_esp += 4; return;
}

void f_007293a9(void)
{
    FN_ENTER(0x007293a9);
    /* 007293a9: movsx eax, byte ptr [ebp + 0x64] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0x64u));
    /* 007293ad: mov edx, dword ptr [ebp + 0x28] */ r_edx = R32((u32)(r_ebp+0x28u));
    /* 007293b0: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 007293b3: movzx edx, word ptr [ebp + 0x60] */ r_edx = (u32)R16((u32)(r_ebp+0x60u));
    /* 007293b7: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007293ba: je 0x7293c3 */ if (fZ) goto L_007293c3;
L_007293bc:; BB(0x007293bc);
    /* 007293bc: mov edx, 1 */ r_edx = 0x1u;
    /* 007293c1: jmp 0x7293c5 */ goto L_007293c5;
L_007293c3:; BB(0x007293c3);
    /* 007293c3: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_007293c5:; BB(0x007293c5);
    /* 007293c5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007293c6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007293c7: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007293c9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007293ca: call 0x7293e0 */ r_esp -= 4; W32(r_esp, 0x7293cfu); f_007293e0();
    /* 007293cf: mov ecx, dword ptr [ebp + 0x74] */ r_ecx = R32((u32)(r_ebp+0x74u));
    /* 007293d2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007293d4: je 0x7293dc */ if (fZ) goto L_007293dc;
L_007293d6:; BB(0x007293d6);
    /* 007293d6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007293d7: call 0x761390 */ r_esp -= 4; W32(r_esp, 0x7293dcu); f_00761390();
L_007293dc:; BB(0x007293dc);
    /* 007293dc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007293dd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007293de: ret  */ FN_RET(0x007293a9); r_esp += 4; return;
}

void f_007293e0(void) /* sub_7293E0 */
{
    FN_ENTER(0x007293e0);
    /* 007293e0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007293e1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007293e2: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007293e5: mov ebp, dword ptr [esp + 0x48] */ r_ebp = R32((u32)(r_esp+0x48u));
    /* 007293e9: mov eax, dword ptr [esp + 0x4c] */ r_eax = R32((u32)(r_esp+0x4cu));
    /* 007293ed: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 007293f0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007293f2: jl 0x729626 */ if ((fS!=fO)) goto L_00729626;
L_007293f8:; BB(0x007293f8);
    /* 007293f8: mov edi, 0x43700000 */ r_edi = 0x43700000u;
    /* 007293fd: mov dword ptr [esp + 0x14], edi */ W32((u32)(r_esp+0x14u), r_edi);
    /* 00729401: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00729403: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 00729407: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00729409: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 0072940d: mov edx, 0x43600000 */ r_edx = 0x43600000u;
    /* 00729412: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 00729416: mov edx, dword ptr [esp + 0x50] */ r_edx = R32((u32)(r_esp+0x50u));
    /* 0072941a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072941c: je 0x729424 */ if (fZ) goto L_00729424;
L_0072941e:; BB(0x0072941e);
    /* 0072941e: lea edi, [esp + 0x14] */ r_edi = (u32)(r_esp+0x14u);
    /* 00729422: jmp 0x729428 */ goto L_00729428;
L_00729424:; BB(0x00729424);
    /* 00729424: lea edi, [esp + 0xc] */ r_edi = (u32)(r_esp+0xcu);
L_00729428:; BB(0x00729428);
    /* 00729428: fld dword ptr [0x9709b8] */ FPUSH(R_F32((u32)(0x9709b8u)));
    /* 0072942e: fadd dword ptr [ebp + 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x10u));
    /* 00729431: fadd dword ptr [eax + 8] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x8u));
    /* 00729434: fld dword ptr [0x9709ac] */ FPUSH(R_F32((u32)(0x9709acu)));
    /* 0072943a: fadd dword ptr [ebp + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x38u));
    /* 0072943d: fdivr dword ptr [0x9709b0] */ ST(0) = R_F32((u32)(0x9709b0u)) / ST(0);
    /* 00729443: fld dword ptr [eax + 0x10] */ FPUSH(R_F32((u32)(r_eax+0x10u)));
    /* 00729446: fmul dword ptr [0x9709b4] */ ST(0) = ST(0) * R_F32((u32)(0x9709b4u));
    /* 0072944c: fld dword ptr [ebp + 0x14] */ FPUSH(R_F32((u32)(r_ebp+0x14u)));
    /* 0072944f: fadd dword ptr [eax + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0xcu));
    /* 00729452: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00729454: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00729457: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00729459: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0072945d: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0072945f: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00729463: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00729468: call 0x82bb30 */ r_esp -= 4; W32(r_esp, 0x72946du); f_0082bb30();
    /* 0072946d: mov ecx, dword ptr [0xa983d8] */ r_ecx = R32((u32)(0xa983d8u));
    /* 00729473: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x729478u); f_00829cc8();
    /* 00729478: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0072947a: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0072947f: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x729484u); f_0082bb60();
    /* 00729484: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00729488: fld dword ptr [0x9709a8] */ FPUSH(R_F32((u32)(0x9709a8u)));
    /* 0072948e: fadd dword ptr [esp + 8] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x8u));
    /* 00729492: fld dword ptr [0x9709a4] */ FPUSH(R_F32((u32)(0x9709a4u)));
    /* 00729498: fld dword ptr [0x9709a0] */ FPUSH(R_F32((u32)(0x9709a0u)));
    /* 0072949e: fld dword ptr [0x97099c] */ FPUSH(R_F32((u32)(0x97099cu)));
    /* 007294a4: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 007294a6: fst dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0));
    /* 007294aa: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 007294ac: fst dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0));
    /* 007294b0: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 007294b2: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 007294b6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007294b8: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 007294ba: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007294bc: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 007294c0: lea eax, [esp + 0x1c] */ r_eax = (u32)(r_esp+0x1cu);
    /* 007294c4: fld dword ptr [edi] */ FPUSH(R_F32((u32)(r_edi)));
    /* 007294c6: fdiv st(3) */ ST(0) = ST(0) / ST(3);
    /* 007294c8: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 007294cc: fld dword ptr [edi + 4] */ FPUSH(R_F32((u32)(r_edi+0x4u)));
    /* 007294cf: fdiv st(3) */ ST(0) = ST(0) / ST(3);
    /* 007294d1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007294d3: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 007294d7: fld dword ptr [edi] */ FPUSH(R_F32((u32)(r_edi)));
    /* 007294d9: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 007294db: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007294dd: fdiv st(2) */ ST(0) = ST(0) / ST(2);
    /* 007294df: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 007294e3: fld dword ptr [edi + 4] */ FPUSH(R_F32((u32)(r_edi+0x4u)));
    /* 007294e6: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 007294e8: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 007294ea: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 007294ee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007294ef: call 0x71bbb4 */ r_esp -= 4; W32(r_esp, 0x7294f4u); f_0071bbb4();
    /* 007294f4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007294f5: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 007294f9: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 007294fc: lea ecx, [esp + 0x20] */ r_ecx = (u32)(r_esp+0x20u);
    /* 00729500: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x729505u); f_0082b440();
    /* 00729505: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00729509: fld dword ptr [0x970998] */ FPUSH(R_F32((u32)(0x970998u)));
    /* 0072950f: fadd dword ptr [esp + 8] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x8u));
    /* 00729513: fld dword ptr [0x9709a4] */ FPUSH(R_F32((u32)(0x9709a4u)));
    /* 00729519: fld dword ptr [0x97099c] */ FPUSH(R_F32((u32)(0x97099cu)));
    /* 0072951f: fld dword ptr [0x970994] */ FPUSH(R_F32((u32)(0x970994u)));
    /* 00729525: fld dword ptr [0x970990] */ FPUSH(R_F32((u32)(0x970990u)));
    /* 0072952b: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0072952d: fst dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0));
    /* 00729531: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00729533: fst dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0));
    /* 00729537: fadd dword ptr [0x9709a0] */ ST(0) = ST(0) + R_F32((u32)(0x9709a0u));
    /* 0072953d: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 00729541: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00729543: fadd st(3), st(0) */ ST(3) = ST(3) + ST(0);
    /* 00729545: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00729547: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 0072954b: lea eax, [esp + 0x1c] */ r_eax = (u32)(r_esp+0x1cu);
    /* 0072954f: fld dword ptr [edi] */ FPUSH(R_F32((u32)(r_edi)));
    /* 00729551: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 00729553: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 00729557: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00729559: fadd dword ptr [edi + 4] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x4u));
    /* 0072955c: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 0072955e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00729560: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 00729564: fld dword ptr [edi] */ FPUSH(R_F32((u32)(r_edi)));
    /* 00729566: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00729568: fdiv st(1), st(0) */ ST(1) = ST(1) / ST(0);
    /* 0072956a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0072956c: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 00729570: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00729572: fadd dword ptr [edi + 4] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x4u));
    /* 00729575: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 00729577: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 0072957b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072957c: call 0x71bbb4 */ r_esp -= 4; W32(r_esp, 0x729581u); f_0071bbb4();
    /* 00729581: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00729582: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00729586: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00729589: lea ecx, [esp + 0x20] */ r_ecx = (u32)(r_esp+0x20u);
    /* 0072958d: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x729592u); f_0082b440();
    /* 00729592: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00729596: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 0072959a: fadd dword ptr [0x97098c] */ ST(0) = ST(0) + R_F32((u32)(0x97098cu));
    /* 007295a0: fld dword ptr [0x9709a4] */ FPUSH(R_F32((u32)(0x9709a4u)));
    /* 007295a6: fld dword ptr [0x97099c] */ FPUSH(R_F32((u32)(0x97099cu)));
    /* 007295ac: fld dword ptr [0x970988] */ FPUSH(R_F32((u32)(0x970988u)));
    /* 007295b2: fld dword ptr [0x970998] */ FPUSH(R_F32((u32)(0x970998u)));
    /* 007295b8: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 007295ba: fst dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0));
    /* 007295be: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 007295c0: fst dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0));
    /* 007295c4: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 007295c6: fadd st(4), st(0) */ ST(4) = ST(4) + ST(0);
    /* 007295c8: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 007295ca: fadd dword ptr [0x9709a0] */ ST(0) = ST(0) + R_F32((u32)(0x9709a0u));
    /* 007295d0: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 007295d2: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 007295d6: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 007295d8: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 007295dc: lea eax, [esp + 0x1c] */ r_eax = (u32)(r_esp+0x1cu);
    /* 007295e0: fld dword ptr [edi] */ FPUSH(R_F32((u32)(r_edi)));
    /* 007295e2: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 007295e4: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 007295e8: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007295ea: fadd dword ptr [edi + 4] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x4u));
    /* 007295ed: fdiv st(2) */ ST(0) = ST(0) / ST(2);
    /* 007295ef: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007295f1: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 007295f5: fld dword ptr [edi] */ FPUSH(R_F32((u32)(r_edi)));
    /* 007295f7: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 007295f9: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 007295fb: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 007295ff: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00729601: fadd dword ptr [edi + 4] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x4u));
    /* 00729604: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 00729606: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 0072960a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072960b: call 0x71bbb4 */ r_esp -= 4; W32(r_esp, 0x729610u); f_0071bbb4();
    /* 00729610: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00729611: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00729615: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00729618: lea ecx, [esp + 0x20] */ r_ecx = (u32)(r_esp+0x20u);
    /* 0072961c: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x729621u); f_0082b440();
    /* 00729621: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x729626u); f_004ac444();
L_00729626:; BB(0x00729626);
    /* 00729626: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00729629: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0072962a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0072962b: ret 0xc */ FN_RET(0x007293e0); r_esp += 16; return;
}

void f_00729630(void) /* sub_729630 */
{
    FN_ENTER(0x00729630);
    /* 00729630: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00729631: mov ebp, esp */ r_ebp = r_esp;
    /* 00729633: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00729635: push 0x8f10bc */ { u32 v = 0x8f10bcu; r_esp -= 4; W32(r_esp, v); }
    /* 0072963a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00729640: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00729641: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00729648: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0072964b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0072964e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00729651: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00729654: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00729657: mov eax, dword ptr [ecx + 0x74] */ r_eax = R32((u32)(r_ecx+0x74u));
    /* 0072965a: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0072965d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0072965f: je 0x729671 */ if (fZ) goto L_00729671;
L_00729661:; BB(0x00729661);
    /* 00729661: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00729664: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0072966b: mov esp, ebp */ r_esp = r_ebp;
    /* 0072966d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0072966e: ret 4 */ FN_RET(0x00729630); r_esp += 8; return;
L_00729671:; BB(0x00729671);
    /* 00729671: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 00729678: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 0072967a: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x72967fu); f_008581c5();
    /* 0072967f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00729680: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00729683: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00729685: je 0x7296dd */ if (fZ) goto L_007296dd;
L_00729687:; BB(0x00729687);
    /* 00729687: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0072968e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00729695: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00729698: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0072969b: movsx edx, word ptr [eax + 0x20] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x20u));
    /* 0072969f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007296a0: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 007296a3: call 0x761320 */ r_esp -= 4; W32(r_esp, 0x7296a8u); f_00761320();
    /* 007296a8: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 007296ab: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_007296b2:; BB(0x007296b2);
    /* 007296b2: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007296b5: fld dword ptr [0x970984] */ FPUSH(R_F32((u32)(0x970984u)));
    /* 007296bb: fadd dword ptr [edx + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x3cu));
    /* 007296be: fstp dword ptr [edx + 0x3c] */ W_F32((u32)(r_edx+0x3cu), ST(0)); FPOP();
    /* 007296c1: mov dword ptr [edx + 0x74], eax */ W32((u32)(r_edx+0x74u), r_eax);
    /* 007296c4: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 007296c7: or eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007296ca: mov dword ptr [edx + 0x2c], eax */ W32((u32)(r_edx+0x2cu), r_eax);
    /* 007296cd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007296d0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007296d7: mov esp, ebp */ r_esp = r_ebp;
    /* 007296d9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007296da: ret 4 */ FN_RET(0x00729630); r_esp += 8; return;
L_007296dd:; BB(0x007296dd);
    /* 007296dd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007296df: jmp 0x7296b2 */ goto L_007296b2;
}

void f_007296e4(void) /* sub_7296E4 */
{
    FN_ENTER(0x007296e4);
    /* 007296e4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007296e5: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007296e8: mov ebx, ecx */ r_ebx = r_ecx;
    /* 007296ea: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007296ec: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 007296f0: mov dword ptr [ebx + 0x38], eax */ W32((u32)(r_ebx+0x38u), r_eax);
    /* 007296f3: call 0x710f64 */ r_esp -= 4; W32(r_esp, 0x7296f8u); f_00710f64();
    /* 007296f8: fld dword ptr [0x97097c] */ FPUSH(R_F32((u32)(0x97097cu)));
    /* 007296fe: fld dword ptr [0x970980] */ FPUSH(R_F32((u32)(0x970980u)));
    /* 00729704: fadd dword ptr [ebx + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x38u));
    /* 00729707: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00729709: movsx eax, byte ptr [ebx + 0x62] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebx+0x62u));
    /* 0072970d: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 00729710: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00729712: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 00729715: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00729717: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 0072971a: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 0072971d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0072971f: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00729721: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00729723: fadd dword ptr [0x970978] */ ST(0) = ST(0) + R_F32((u32)(0x970978u));
    /* 00729729: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0072972b: jle 0x729801 */ if ((fZ||fS!=fO)) goto L_00729801;
L_00729731:; BB(0x00729731);
    /* 00729731: fld dword ptr [0x970974] */ FPUSH(R_F32((u32)(0x970974u)));
    /* 00729737: jmp 0x72973b */ goto L_0072973b;
L_00729739:; BB(0x00729739);
    /* 00729739: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
L_0072973b:; BB(0x0072973b);
    /* 0072973b: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 0072973e: mov ecx, dword ptr [eax + edx*4] */ r_ecx = R32((u32)(r_eax+r_edx*4));
    /* 00729741: fld dword ptr [ecx + 0x10] */ FPUSH(R_F32((u32)(r_ecx+0x10u)));
    /* 00729744: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00729746: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00729749: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0072974b: fstp dword ptr [ecx + 8] */ W_F32((u32)(r_ecx+0x8u), ST(0)); FPOP();
    /* 0072974e: movsx eax, byte ptr [ebx + 0x62] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebx+0x62u));
    /* 00729752: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00729754: jl 0x729739 */ if ((fS!=fO)) goto L_00729739;
L_00729756:; BB(0x00729756);
    /* 00729756: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 00729758: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0072975a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0072975c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0072975e: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00729761: jge 0x7297fa */ if ((fS==fO)) goto L_007297fa;
L_00729767:; BB(0x00729767);
    /* 00729767: mov eax, edx */ r_eax = r_edx;
    /* 00729769: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0072976b: add eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0072976e: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00729771: jl 0x7297de */ if ((fS!=fO)) goto L_007297de;
L_00729773:; BB(0x00729773);
    /* 00729773: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 00729776: mov eax, dword ptr [eax + edx*4] */ r_eax = R32((u32)(r_eax+r_edx*4));
    /* 00729779: movzx ecx, word ptr [eax + 4] */ r_ecx = (u32)R16((u32)(r_eax+0x4u));
    /* 0072977d: or ecx, 0xffff0002 */ {  u32 a = r_ecx; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00729783: mov word ptr [eax + 4], cx */ W16((u32)(r_eax+0x4u), (u16)r_ecx);
    /* 00729787: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 0072978a: mov ecx, dword ptr [eax + edx*4 + 4] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x4u));
    /* 0072978e: movzx eax, word ptr [ecx + 4] */ r_eax = (u32)R16((u32)(r_ecx+0x4u));
    /* 00729792: or eax, 0xffff0002 */ {  u32 a = r_eax; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00729797: mov word ptr [ecx + 4], ax */ W16((u32)(r_ecx+0x4u), (u16)r_eax);
    /* 0072979b: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 0072979e: mov ecx, dword ptr [eax + edx*4 + 8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 007297a2: movzx eax, word ptr [ecx + 4] */ r_eax = (u32)R16((u32)(r_ecx+0x4u));
    /* 007297a6: or eax, 0xffff0002 */ {  u32 a = r_eax; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007297ab: mov word ptr [ecx + 4], ax */ W16((u32)(r_ecx+0x4u), (u16)r_eax);
    /* 007297af: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 007297b2: mov ecx, dword ptr [eax + edx*4 + 0xc] */ r_ecx = R32((u32)(r_eax+r_edx*4+0xcu));
    /* 007297b6: movzx eax, word ptr [ecx + 4] */ r_eax = (u32)R16((u32)(r_ecx+0x4u));
    /* 007297ba: or eax, 0xffff0002 */ {  u32 a = r_eax; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007297bf: mov word ptr [ecx + 4], ax */ W16((u32)(r_ecx+0x4u), (u16)r_eax);
    /* 007297c3: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 007297c6: mov ecx, dword ptr [eax + edx*4 + 0x10] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x10u));
    /* 007297ca: movzx eax, word ptr [ecx + 4] */ r_eax = (u32)R16((u32)(r_ecx+0x4u));
    /* 007297ce: or eax, 0xffff0002 */ {  u32 a = r_eax; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007297d3: mov word ptr [ecx + 4], ax */ W16((u32)(r_ecx+0x4u), (u16)r_eax);
    /* 007297d7: add edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007297da: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007297dc: jl 0x729773 */ if ((fS!=fO)) goto L_00729773;
L_007297de:; BB(0x007297de);
    /* 007297de: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 007297e1: mov eax, dword ptr [eax + edx*4] */ r_eax = R32((u32)(r_eax+r_edx*4));
    /* 007297e4: movzx ecx, word ptr [eax + 4] */ r_ecx = (u32)R16((u32)(r_eax+0x4u));
    /* 007297e8: or ecx, 0xffff0002 */ {  u32 a = r_ecx; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 007297ee: mov word ptr [eax + 4], cx */ W16((u32)(r_eax+0x4u), (u16)r_ecx);
    /* 007297f2: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007297f5: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007297f8: jl 0x7297de */ if ((fS!=fO)) goto L_007297de;
L_007297fa:; BB(0x007297fa);
    /* 007297fa: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007297fd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007297fe: ret 4 */ FN_RET(0x007296e4); r_esp += 8; return;
L_00729801:; BB(0x00729801);
    /* 00729801: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00729803: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00729805: jmp 0x729767 */ goto L_00729767;
}

void f_0072980c(void) /* sub_72980C */
{
    FN_ENTER(0x0072980c);
    /* 0072980c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0072980d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0072980f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00729811: call 0x729830 */ r_esp -= 4; W32(r_esp, 0x729816u); f_00729830();
    /* 00729816: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0072981a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0072981c: jne 0x729822 */ if (!fZ) goto L_00729822;
L_0072981e:; BB(0x0072981e);
    /* 0072981e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072981f: ret 4 */ FN_RET(0x0072980c); r_esp += 8; return;
L_00729822:; BB(0x00729822);
    /* 00729822: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00729823: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x729828u); f_00857e98();
    /* 00729828: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00729829: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072982a: ret 4 */ FN_RET(0x0072980c); r_esp += 8; return;
}

void f_00729830(void) /* sub_729830 */
{
    FN_ENTER(0x00729830);
    /* 00729830: mov dword ptr [ecx], 0xb40168 */ W32((u32)(r_ecx), 0xb40168u);
    /* 00729836: ret  */ FN_RET(0x00729830); r_esp += 4; return;
}

void f_00729838(void) /* sub_729838 */
{
    FN_ENTER(0x00729838);
    /* 00729838: movzx eax, word ptr [esp + 4] */ r_eax = (u32)R16((u32)(r_esp+0x4u));
    /* 0072983d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0072983f: mov word ptr [ecx + 4], dx */ W16((u32)(r_ecx+0x4u), (u16)r_edx);
    /* 00729843: mov word ptr [ecx + 6], ax */ W16((u32)(r_ecx+0x6u), (u16)r_eax);
    /* 00729847: mov dword ptr [ecx], 0xb40168 */ W32((u32)(r_ecx), 0xb40168u);
    /* 0072984d: mov eax, ecx */ r_eax = r_ecx;
    /* 0072984f: ret 4 */ FN_RET(0x00729838); r_esp += 8; return;
}

void f_00729854(void) /* sub_729854 */
{
    FN_ENTER(0x00729854);
    /* 00729854: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00729855: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00729857: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00729859: call 0x729878 */ r_esp -= 4; W32(r_esp, 0x72985eu); f_00729878();
    /* 0072985e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00729862: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00729864: jne 0x72986a */ if (!fZ) goto L_0072986a;
L_00729866:; BB(0x00729866);
    /* 00729866: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00729867: ret 4 */ FN_RET(0x00729854); r_esp += 8; return;
L_0072986a:; BB(0x0072986a);
    /* 0072986a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0072986b: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x729870u); f_00857e98();
    /* 00729870: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00729871: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00729872: ret 4 */ FN_RET(0x00729854); r_esp += 8; return;
}

void f_00729878(void) /* sub_729878 */
{
    FN_ENTER(0x00729878);
    /* 00729878: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00729879: mov ebp, esp */ r_ebp = r_esp;
    /* 0072987b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0072987d: push 0x8f10d8 */ { u32 v = 0x8f10d8u; r_esp -= 4; W32(r_esp, v); }
    /* 00729882: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00729888: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00729889: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00729890: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00729893: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00729896: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00729899: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0072989c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0072989f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 007298a2: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007298a5: mov dword ptr [ecx], 0xb401a0 */ W32((u32)(r_ecx), 0xb401a0u);
    /* 007298ab: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 007298b2: call 0x729830 */ r_esp -= 4; W32(r_esp, 0x7298b7u); f_00729830();
    /* 007298b7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007298ba: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007298c1: mov esp, ebp */ r_esp = r_ebp;
    /* 007298c3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007298c4: ret  */ FN_RET(0x00729878); r_esp += 4; return;
}

void f_007298c8(void) /* sub_7298C8 */
{
    FN_ENTER(0x007298c8);
    /* 007298c8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007298c9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007298ca: mov esi, ecx */ r_esi = r_ecx;
    /* 007298cc: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 007298d0: movsx eax, word ptr [esp + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x10u));
    /* 007298d5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007298d6: mov ecx, esi */ r_ecx = r_esi;
    /* 007298d8: call 0x729838 */ r_esp -= 4; W32(r_esp, 0x7298ddu); f_00729838();
    /* 007298dd: mov dword ptr [esi], 0xb401a0 */ W32((u32)(r_esi), 0xb401a0u);
    /* 007298e3: mov dword ptr [esi + 0x1c], 0 */ W32((u32)(r_esi+0x1cu), 0x0u);
    /* 007298ea: mov edx, dword ptr [edi + 4] */ r_edx = R32((u32)(r_edi+0x4u));
    /* 007298ed: mov dword ptr [esi + 0xc], edx */ W32((u32)(r_esi+0xcu), r_edx);
    /* 007298f0: mov eax, dword ptr [edi + 8] */ r_eax = R32((u32)(r_edi+0x8u));
    /* 007298f3: mov dword ptr [esi + 0x10], eax */ W32((u32)(r_esi+0x10u), r_eax);
    /* 007298f6: mov eax, dword ptr [edi + 0xc] */ r_eax = R32((u32)(r_edi+0xcu));
    /* 007298f9: mov dword ptr [esi + 8], eax */ W32((u32)(r_esi+0x8u), r_eax);
    /* 007298fc: mov eax, dword ptr [edi + 0x18] */ r_eax = R32((u32)(r_edi+0x18u));
    /* 007298ff: mov dword ptr [esi + 0x14], eax */ W32((u32)(r_esi+0x14u), r_eax);
    /* 00729902: mov eax, dword ptr [edi + 0x10] */ r_eax = R32((u32)(r_edi+0x10u));
    /* 00729905: mov dword ptr [esi + 0x18], eax */ W32((u32)(r_esi+0x18u), r_eax);
    /* 00729908: mov eax, dword ptr [edi + 0x14] */ r_eax = R32((u32)(r_edi+0x14u));
    /* 0072990b: mov word ptr [esi + 4], ax */ W16((u32)(r_esi+0x4u), (u16)r_eax);
    /* 0072990f: mov eax, dword ptr [edi + 0x1c] */ r_eax = R32((u32)(r_edi+0x1cu));
    /* 00729912: mov dword ptr [esi + 0x20], eax */ W32((u32)(r_esi+0x20u), r_eax);
    /* 00729915: mov edi, dword ptr [edi + 0x20] */ r_edi = R32((u32)(r_edi+0x20u));
    /* 00729918: mov dword ptr [esi + 0x24], edi */ W32((u32)(r_esi+0x24u), r_edi);
    /* 0072991b: mov eax, esi */ r_eax = r_esi;
    /* 0072991d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0072991e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0072991f: ret 8 */ FN_RET(0x007298c8); r_esp += 12; return;
}

void f_00729924(void) /* sub_729924 */
{
    FN_ENTER(0x00729924);
    /* 00729924: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00729925: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00729928: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0072992a: movzx edx, word ptr [ebx + 4] */ r_edx = (u32)R16((u32)(r_ebx+0x4u));
    /* 0072992e: fld dword ptr [ebx + 0x20] */ FPUSH(R_F32((u32)(r_ebx+0x20u)));
    /* 00729931: fld dword ptr [0x970ac4] */ FPUSH(R_F32((u32)(0x970ac4u)));
    /* 00729937: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00729939: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0072993b: fst dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0));
    /* 0072993f: and edx, 0xfffb */ {  u32 a = r_edx; u32 b = 0xfffbu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00729945: mov word ptr [ebx + 4], dx */ W16((u32)(r_ebx+0x4u), (u16)r_edx);
    /* 00729949: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0072994a: jae 0x72995a */ if (!fC) goto L_0072995a;
L_0072994c:; BB(0x0072994c);
    /* 0072994c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0072994e: fld dword ptr [ebx + 0x24] */ FPUSH(R_F32((u32)(r_ebx+0x24u)));
    /* 00729951: fcom dword ptr [esp + 4] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x4u))); 
    /* 00729955: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00729957: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00729958: ja 0x729960 */ if ((!fC&&!fZ)) goto L_00729960;
L_0072995a:; BB(0x0072995a);
    /* 0072995a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0072995c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0072995e: jmp 0x729969 */ goto L_00729969;
L_00729960:; BB(0x00729960);
    /* 00729960: fmul dword ptr [ebx + 0x14] */ ST(0) = ST(0) * R_F32((u32)(r_ebx+0x14u));
    /* 00729963: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 00729965: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
L_00729969:; BB(0x00729969);
    /* 00729969: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0072996d: fsub dword ptr [ebx + 0x1c] */ ST(0) = ST(0) - R_F32((u32)(r_ebx+0x1cu));
    /* 00729970: fst dword ptr [esp] */ W_F32((u32)(r_esp), ST(0));
    /* 00729973: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00729974: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00729977: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x72997cu); f_0082e900();
    /* 0072997c: fld dword ptr [0x970ac0] */ FPUSH(R_F32((u32)(0x970ac0u)));
    /* 00729982: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00729984: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 00729986: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00729988: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00729989: jae 0x7299a6 */ if (!fC) goto L_007299a6;
L_0072998b:; BB(0x0072998b);
    /* 0072998b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0072998d: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00729991: movzx eax, word ptr [ebx + 4] */ r_eax = (u32)R16((u32)(r_ebx+0x4u));
    /* 00729995: fstp dword ptr [ebx + 0x1c] */ W_F32((u32)(r_ebx+0x1cu), ST(0)); FPOP();
    /* 00729998: or eax, 0xffff0004 */ {  u32 a = r_eax; u32 b = 0xffff0004u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0072999d: mov word ptr [ebx + 4], ax */ W16((u32)(r_ebx+0x4u), (u16)r_eax);
    /* 007299a1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007299a4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007299a5: ret  */ FN_RET(0x00729924); r_esp += 4; return;
L_007299a6:; BB(0x007299a6);
    /* 007299a6: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 007299a9: fcomp dword ptr [0x970ac4] */ fx_compare(ST(0), R_F32((u32)(0x970ac4u))); FPOP();
    /* 007299af: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007299b1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007299b2: jbe 0x7299c1 */ if ((fC||fZ)) goto L_007299c1;
L_007299b4:; BB(0x007299b4);
    /* 007299b4: fld dword ptr [ebx + 0x1c] */ FPUSH(R_F32((u32)(r_ebx+0x1cu)));
    /* 007299b7: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 007299b9: fstp dword ptr [ebx + 0x1c] */ W_F32((u32)(r_ebx+0x1cu), ST(0)); FPOP();
    /* 007299bc: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007299bf: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007299c0: ret  */ FN_RET(0x00729924); r_esp += 4; return;
L_007299c1:; BB(0x007299c1);
    /* 007299c1: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007299c3: fld dword ptr [0x970abc] */ FPUSH(R_F32((u32)(0x970abcu)));
    /* 007299c9: fadd dword ptr [ebx + 0x1c] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x1cu));
    /* 007299cc: fstp dword ptr [ebx + 0x1c] */ W_F32((u32)(r_ebx+0x1cu), ST(0)); FPOP();
    /* 007299cf: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007299d2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007299d3: ret  */ FN_RET(0x00729924); r_esp += 4; return;
}

void f_007299d4(void) /* sub_7299D4 */
{
    FN_ENTER(0x007299d4);
    /* 007299d4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007299d5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007299d6: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007299d9: mov ebp, ecx */ r_ebp = r_ecx;
    /* 007299db: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
    /* 007299df: fild dword ptr [ebx + 0x30] */ FPUSH((long double)(i32)R32((u32)(r_ebx+0x30u)));
    /* 007299e2: fld dword ptr [0x970ab8] */ FPUSH(R_F32((u32)(0x970ab8u)));
    /* 007299e8: fld dword ptr [ebp + 0x10] */ FPUSH(R_F32((u32)(r_ebp+0x10u)));
    /* 007299eb: fdivr st(1), st(0) */ ST(1) = ST(0) / ST(1);
    /* 007299ed: fld dword ptr [ebp + 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xcu)));
    /* 007299f0: fld dword ptr [ebx + 0x18] */ FPUSH(R_F32((u32)(r_ebx+0x18u)));
    /* 007299f3: fdivr st(1) */ ST(0) = ST(1) / ST(0);
    /* 007299f5: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 007299f7: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007299f9: fmul dword ptr [0x970ab4] */ ST(0) = ST(0) * R_F32((u32)(0x970ab4u));
    /* 007299ff: fsubp st(3) */ ST(3) = ST(3) - ST(0); FPOP();
    /* 00729a01: fld dword ptr [0x970aac] */ FPUSH(R_F32((u32)(0x970aacu)));
    /* 00729a07: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00729a09: fmul dword ptr [0x970ab0] */ ST(0) = ST(0) * R_F32((u32)(0x970ab0u));
    /* 00729a0f: fcom st(3) */ fx_compare(ST(0), ST(3)); 
    /* 00729a11: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00729a13: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00729a14: jbe 0x729b0b */ if ((fC||fZ)) goto L_00729b0b;
L_00729a1a:; BB(0x00729a1a);
    /* 00729a1a: fld dword ptr [ebp + 0x1c] */ FPUSH(R_F32((u32)(r_ebp+0x1cu)));
    /* 00729a1d: fcom st(4) */ fx_compare(ST(0), ST(4)); 
    /* 00729a1f: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00729a21: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00729a23: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00729a25: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00729a27: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00729a2b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00729a2c: ja 0x729a44 */ if ((!fC&&!fZ)) goto L_00729a44;
L_00729a2e:; BB(0x00729a2e);
    /* 00729a2e: movzx eax, word ptr [ebp + 4] */ r_eax = (u32)R16((u32)(r_ebp+0x4u));
    /* 00729a32: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00729a34: jne 0x729a44 */ if (!fZ) goto L_00729a44;
L_00729a36:; BB(0x00729a36);
    /* 00729a36: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 00729a38: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00729a3a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00729a3c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00729a3f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00729a40: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00729a41: ret 4 */ FN_RET(0x007299d4); r_esp += 8; return;
L_00729a44:; BB(0x00729a44);
    /* 00729a44: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00729a46: fadd dword ptr [ebx + 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x10u));
    /* 00729a49: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00729a4b: fadd dword ptr [ebx + 0x14] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x14u));
    /* 00729a4e: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 00729a52: fld dword ptr [0x970aa4] */ FPUSH(R_F32((u32)(0x970aa4u)));
    /* 00729a58: fmul dword ptr [ebp + 8] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x8u));
    /* 00729a5b: fadd dword ptr [ebx + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x38u));
    /* 00729a5e: fdivr dword ptr [0x970aa8] */ ST(0) = R_F32((u32)(0x970aa8u)) / ST(0);
    /* 00729a64: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00729a66: fcom st(4) */ fx_compare(ST(0), ST(4)); 
    /* 00729a68: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00729a6a: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00729a6c: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00729a6f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00729a71: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00729a75: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00729a79: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00729a7a: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00729a7f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00729a81: jb 0x729a85 */ if (fC) goto L_00729a85;
L_00729a83:; BB(0x00729a83);
    /* 00729a83: fst st(1) */ ST(1) = ST(0);
L_00729a85:; BB(0x00729a85);
    /* 00729a85: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00729a87: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00729a8b: call 0x82bb30 */ r_esp -= 4; W32(r_esp, 0x729a90u); f_0082bb30();
    /* 00729a90: mov ecx, dword ptr [0xa983d8] */ r_ecx = R32((u32)(0xa983d8u));
    /* 00729a96: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x729a9bu); f_00829cc8();
    /* 00729a9b: mov ecx, 0xd */ r_ecx = 0xdu;
    /* 00729aa0: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 00729aa5: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x729aaau); f_0082bb60();
    /* 00729aaa: movzx eax, word ptr [ebp + 4] */ r_eax = (u32)R16((u32)(r_ebp+0x4u));
    /* 00729aae: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00729ab0: je 0x729acf */ if (fZ) goto L_00729acf;
L_00729ab2:; BB(0x00729ab2);
    /* 00729ab2: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00729ab5: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 00729ab9: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00729abd: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00729abf: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 00729ac2: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 00729ac6: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00729aca: call 0x729b1c */ r_esp -= 4; W32(r_esp, 0x729acfu); f_00729b1c();
L_00729acf:; BB(0x00729acf);
    /* 00729acf: mov ecx, dword ptr [ebp + 0x18] */ r_ecx = R32((u32)(r_ebp+0x18u));
    /* 00729ad2: call 0x82b438 */ r_esp -= 4; W32(r_esp, 0x729ad7u); f_0082b438();
    /* 00729ad7: add esp, -0x10 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00729ada: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 00729ade: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 00729ae2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00729ae4: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00729ae8: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00729aec: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 00729aef: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00729af1: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 00729af5: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00729af9: call 0x729c90 */ r_esp -= 4; W32(r_esp, 0x729afeu); f_00729c90();
    /* 00729afe: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x729b03u); f_004ac444();
    /* 00729b03: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00729b06: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00729b07: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00729b08: ret 4 */ FN_RET(0x007299d4); r_esp += 8; return;
L_00729b0b:; BB(0x00729b0b);
    /* 00729b0b: fstp st(3) */ ST(3) = ST(0); FPOP();
    /* 00729b0d: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 00729b0f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00729b11: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00729b13: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00729b16: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00729b17: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00729b18: ret 4 */ FN_RET(0x007299d4); r_esp += 8; return;
}

void f_00729b1c(void) /* sub_729B1C */
{
    FN_ENTER(0x00729b1c);
    /* 00729b1c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00729b1d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00729b1e: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00729b21: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
    /* 00729b25: mov esi, dword ptr [esp + 0x34] */ r_esi = R32((u32)(r_esp+0x34u));
    /* 00729b29: fld dword ptr [0x970aa0] */ FPUSH(R_F32((u32)(0x970aa0u)));
    /* 00729b2f: fadd dword ptr [ecx + 0x14] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x14u));
    /* 00729b32: fld dword ptr [esi] */ FPUSH(R_F32((u32)(r_esi)));
    /* 00729b34: fld dword ptr [0x970a9c] */ FPUSH(R_F32((u32)(0x970a9cu)));
    /* 00729b3a: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00729b3c: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 00729b40: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00729b42: fst dword ptr [esp] */ W_F32((u32)(r_esp), ST(0));
    /* 00729b45: fadd dword ptr [0x970a98] */ ST(0) = ST(0) + R_F32((u32)(0x970a98u));
    /* 00729b4b: fld dword ptr [esi + 4] */ FPUSH(R_F32((u32)(r_esi+0x4u)));
    /* 00729b4e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00729b50: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00729b54: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00729b56: fst dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0));
    /* 00729b5a: fadd dword ptr [0x970a94] */ ST(0) = ST(0) + R_F32((u32)(0x970a94u));
    /* 00729b60: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00729b64: mov dword ptr [esp + 0x10], 0x3e180000 */ W32((u32)(r_esp+0x10u), 0x3e180000u);
    /* 00729b6c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00729b6e: mov dword ptr [esp + 0x14], 0x3f6f0000 */ W32((u32)(r_esp+0x14u), 0x3f6f0000u);
    /* 00729b76: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00729b79: mov dword ptr [esp + 0x18], 0x3e680000 */ W32((u32)(r_esp+0x18u), 0x3e680000u);
    /* 00729b81: mov dword ptr [esp + 0x1c], 0x3f780000 */ W32((u32)(r_esp+0x1cu), 0x3f780000u);
    /* 00729b89: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00729b8a: call 0x71ba34 */ r_esp -= 4; W32(r_esp, 0x729b8fu); f_0071ba34();
    /* 00729b8f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00729b91: je 0x729ba1 */ if (fZ) goto L_00729ba1;
L_00729b93:; BB(0x00729b93);
    /* 00729b93: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 00729b97: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00729b98: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 00729b9c: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x729ba1u); f_0082b440();
L_00729ba1:; BB(0x00729ba1);
    /* 00729ba1: fld dword ptr [0x970a80] */ FPUSH(R_F32((u32)(0x970a80u)));
    /* 00729ba7: fadd dword ptr [esi] */ ST(0) = ST(0) + R_F32((u32)(r_esi));
    /* 00729ba9: fld dword ptr [0x970a9c] */ FPUSH(R_F32((u32)(0x970a9cu)));
    /* 00729baf: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00729bb1: fst dword ptr [esp] */ W_F32((u32)(r_esp), ST(0));
    /* 00729bb4: fadd dword ptr [0x970a7c] */ ST(0) = ST(0) + R_F32((u32)(0x970a7cu));
    /* 00729bba: fadd dword ptr [esp + 0x20] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x20u));
    /* 00729bbe: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00729bc0: fadd dword ptr [esi + 4] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x4u));
    /* 00729bc3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00729bc5: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00729bc9: fst dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0));
    /* 00729bcd: fadd dword ptr [0x970a94] */ ST(0) = ST(0) + R_F32((u32)(0x970a94u));
    /* 00729bd3: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00729bd7: mov dword ptr [esp + 0x10], 0x3e6c0000 */ W32((u32)(r_esp+0x10u), 0x3e6c0000u);
    /* 00729bdf: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00729be1: mov dword ptr [esp + 0x14], 0x3f6f0000 */ W32((u32)(r_esp+0x14u), 0x3f6f0000u);
    /* 00729be9: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00729bec: mov dword ptr [esp + 0x18], 0x3e9e0000 */ W32((u32)(r_esp+0x18u), 0x3e9e0000u);
    /* 00729bf4: mov dword ptr [esp + 0x1c], 0x3f780000 */ W32((u32)(r_esp+0x1cu), 0x3f780000u);
    /* 00729bfc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00729bfd: call 0x71ba34 */ r_esp -= 4; W32(r_esp, 0x729c02u); f_0071ba34();
    /* 00729c02: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00729c04: je 0x729c14 */ if (fZ) goto L_00729c14;
L_00729c06:; BB(0x00729c06);
    /* 00729c06: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 00729c0a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00729c0b: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 00729c0f: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x729c14u); f_0082b440();
L_00729c14:; BB(0x00729c14);
    /* 00729c14: fld dword ptr [0x970a70] */ FPUSH(R_F32((u32)(0x970a70u)));
    /* 00729c1a: fadd dword ptr [esi] */ ST(0) = ST(0) + R_F32((u32)(r_esi));
    /* 00729c1c: fadd dword ptr [esp + 0x20] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x20u));
    /* 00729c20: fld dword ptr [0x970a9c] */ FPUSH(R_F32((u32)(0x970a9cu)));
    /* 00729c26: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00729c28: fst dword ptr [esp] */ W_F32((u32)(r_esp), ST(0));
    /* 00729c2b: fadd dword ptr [0x970a98] */ ST(0) = ST(0) + R_F32((u32)(0x970a98u));
    /* 00729c31: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00729c33: fadd dword ptr [esi + 4] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x4u));
    /* 00729c36: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00729c38: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00729c3c: fst dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0));
    /* 00729c40: fadd dword ptr [0x970a94] */ ST(0) = ST(0) + R_F32((u32)(0x970a94u));
    /* 00729c46: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00729c4a: mov dword ptr [esp + 0x10], 0x3ed20000 */ W32((u32)(r_esp+0x10u), 0x3ed20000u);
    /* 00729c52: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00729c54: mov dword ptr [esp + 0x14], 0x3f6f0000 */ W32((u32)(r_esp+0x14u), 0x3f6f0000u);
    /* 00729c5c: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00729c5f: mov dword ptr [esp + 0x18], 0x3efa0000 */ W32((u32)(r_esp+0x18u), 0x3efa0000u);
    /* 00729c67: mov dword ptr [esp + 0x1c], 0x3f780000 */ W32((u32)(r_esp+0x1cu), 0x3f780000u);
    /* 00729c6f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00729c70: call 0x71ba34 */ r_esp -= 4; W32(r_esp, 0x729c75u); f_0071ba34();
    /* 00729c75: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00729c77: je 0x729c87 */ if (fZ) goto L_00729c87;
L_00729c79:; BB(0x00729c79);
    /* 00729c79: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 00729c7d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00729c7e: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 00729c82: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x729c87u); f_0082b440();
L_00729c87:; BB(0x00729c87);
    /* 00729c87: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00729c8a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00729c8b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00729c8c: ret 0xc */ FN_RET(0x00729b1c); r_esp += 16; return;
}

void f_00729c90(void) /* sub_729C90 */
{
    FN_ENTER(0x00729c90);
    /* 00729c90: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00729c91: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00729c92: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00729c95: mov esi, ecx */ r_esi = r_ecx;
    /* 00729c97: mov ebx, dword ptr [esp + 0x30] */ r_ebx = R32((u32)(r_esp+0x30u));
    /* 00729c9b: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 00729c9f: fcomp dword ptr [0x970a64] */ fx_compare(ST(0), R_F32((u32)(0x970a64u))); FPOP();
    /* 00729ca5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00729ca7: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00729ca8: jbe 0x729e84 */ if ((fC||fZ)) goto L_00729e84;
L_00729cae:; BB(0x00729cae);
    /* 00729cae: fld dword ptr [0x970a60] */ FPUSH(R_F32((u32)(0x970a60u)));
    /* 00729cb4: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 00729cb8: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00729cba: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00729cbc: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00729cbe: fld dword ptr [0x970a5c] */ FPUSH(R_F32((u32)(0x970a5cu)));
    /* 00729cc4: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00729cc7: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00729cc8: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 00729ccb: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00729ccf: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00729cd2: fld dword ptr [ebx] */ FPUSH(R_F32((u32)(r_ebx)));
    /* 00729cd4: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00729cd6: jae 0x729cda */ if (!fC) goto L_00729cda;
L_00729cd8:; BB(0x00729cd8);
    /* 00729cd8: fst st(3) */ ST(3) = ST(0);
L_00729cda:; BB(0x00729cda);
    /* 00729cda: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00729cdc: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00729cde: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 00729ce0: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00729ce2: fadd dword ptr [0x970a50] */ ST(0) = ST(0) + R_F32((u32)(0x970a50u));
    /* 00729ce8: fdiv dword ptr [0x970a4c] */ ST(0) = ST(0) / R_F32((u32)(0x970a4cu));
    /* 00729cee: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00729cf0: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00729cf4: fadd dword ptr [ebx + 4] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x4u));
    /* 00729cf7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00729cf9: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 00729cfd: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00729d01: mov dword ptr [esp + 0x10], 0x3f660000 */ W32((u32)(r_esp+0x10u), 0x3f660000u);
    /* 00729d09: mov dword ptr [esp + 0x14], 0x3df00000 */ W32((u32)(r_esp+0x14u), 0x3df00000u);
    /* 00729d11: mov dword ptr [esp + 0x1c], 0x3e140000 */ W32((u32)(r_esp+0x1cu), 0x3e140000u);
    /* 00729d19: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00729d1a: mov ecx, dword ptr [esp + 0x30] */ r_ecx = R32((u32)(r_esp+0x30u));
    /* 00729d1e: call 0x71ba34 */ r_esp -= 4; W32(r_esp, 0x729d23u); f_0071ba34();
    /* 00729d23: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00729d25: je 0x729d35 */ if (fZ) goto L_00729d35;
L_00729d27:; BB(0x00729d27);
    /* 00729d27: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 00729d2b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00729d2c: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 00729d30: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x729d35u); f_0082b440();
L_00729d35:; BB(0x00729d35);
    /* 00729d35: fld dword ptr [0x970a60] */ FPUSH(R_F32((u32)(0x970a60u)));
    /* 00729d3b: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 00729d3f: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 00729d41: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00729d43: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00729d44: jbe 0x729e8c */ if ((fC||fZ)) goto L_00729e8c;
L_00729d4a:; BB(0x00729d4a);
    /* 00729d4a: fld dword ptr [0x970a44] */ FPUSH(R_F32((u32)(0x970a44u)));
    /* 00729d50: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 00729d54: fld dword ptr [esi + 0x14] */ FPUSH(R_F32((u32)(r_esi+0x14u)));
    /* 00729d57: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 00729d59: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00729d5b: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 00729d5d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00729d5f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00729d61: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00729d63: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00729d64: jae 0x729d74 */ if (!fC) goto L_00729d74;
L_00729d66:; BB(0x00729d66);
    /* 00729d66: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00729d68: fld dword ptr [0x970a44] */ FPUSH(R_F32((u32)(0x970a44u)));
    /* 00729d6e: fadd dword ptr [esp + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x38u));
    /* 00729d72: jmp 0x729d7c */ goto L_00729d7c;
L_00729d74:; BB(0x00729d74);
    /* 00729d74: fld dword ptr [0x970a40] */ FPUSH(R_F32((u32)(0x970a40u)));
    /* 00729d7a: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
L_00729d7c:; BB(0x00729d7c);
    /* 00729d7c: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 00729d7f: fld dword ptr [ebx] */ FPUSH(R_F32((u32)(r_ebx)));
    /* 00729d81: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 00729d83: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00729d86: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 00729d89: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00729d8d: fld dword ptr [ebx] */ FPUSH(R_F32((u32)(r_ebx)));
    /* 00729d8f: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00729d91: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00729d93: fld dword ptr [0x970a5c] */ FPUSH(R_F32((u32)(0x970a5cu)));
    /* 00729d99: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00729d9b: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00729d9f: fadd dword ptr [ebx + 4] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x4u));
    /* 00729da2: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00729da6: mov dword ptr [esp + 0x10], 0x3f6d0000 */ W32((u32)(r_esp+0x10u), 0x3f6d0000u);
    /* 00729dae: mov dword ptr [esp + 0x14], 0x3df00000 */ W32((u32)(r_esp+0x14u), 0x3df00000u);
    /* 00729db6: mov dword ptr [esp + 0x18], 0x3f790000 */ W32((u32)(r_esp+0x18u), 0x3f790000u);
    /* 00729dbe: mov dword ptr [esp + 0x1c], 0x3e140000 */ W32((u32)(r_esp+0x1cu), 0x3e140000u);
    /* 00729dc6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00729dc7: mov ecx, dword ptr [esp + 0x30] */ r_ecx = R32((u32)(r_esp+0x30u));
    /* 00729dcb: call 0x71ba34 */ r_esp -= 4; W32(r_esp, 0x729dd0u); f_0071ba34();
    /* 00729dd0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00729dd2: je 0x729de2 */ if (fZ) goto L_00729de2;
L_00729dd4:; BB(0x00729dd4);
    /* 00729dd4: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 00729dd8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00729dd9: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 00729ddd: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x729de2u); f_0082b440();
L_00729de2:; BB(0x00729de2);
    /* 00729de2: fld dword ptr [0x970a44] */ FPUSH(R_F32((u32)(0x970a44u)));
    /* 00729de8: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 00729dec: fld dword ptr [esi + 0x14] */ FPUSH(R_F32((u32)(r_esi+0x14u)));
    /* 00729def: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 00729df1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00729df3: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 00729df5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00729df7: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00729df8: ja 0x729e06 */ if ((!fC&&!fZ)) goto L_00729e06;
L_00729dfa:; BB(0x00729dfa);
    /* 00729dfa: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00729dfc: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00729dfe: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00729e01: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00729e02: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00729e03: ret 0x10 */ FN_RET(0x00729c90); r_esp += 20; return;
L_00729e06:; BB(0x00729e06);
    /* 00729e06: fsubr dword ptr [0x970a60] */ ST(0) = R_F32((u32)(0x970a60u)) - ST(0);
    /* 00729e0c: fadd dword ptr [esp + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x38u));
    /* 00729e10: fld dword ptr [0x970a5c] */ FPUSH(R_F32((u32)(0x970a5cu)));
    /* 00729e16: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 00729e19: fld dword ptr [ebx] */ FPUSH(R_F32((u32)(r_ebx)));
    /* 00729e1b: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 00729e1d: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00729e20: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 00729e23: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00729e27: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00729e29: fadd dword ptr [ebx] */ ST(0) = ST(0) + R_F32((u32)(r_ebx));
    /* 00729e2b: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00729e2d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00729e2f: fadd dword ptr [0x970a30] */ ST(0) = ST(0) + R_F32((u32)(0x970a30u));
    /* 00729e35: fdiv dword ptr [0x970a4c] */ ST(0) = ST(0) / R_F32((u32)(0x970a4cu));
    /* 00729e3b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00729e3d: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00729e41: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00729e43: fadd dword ptr [ebx + 4] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x4u));
    /* 00729e46: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00729e48: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 00729e4c: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00729e50: mov dword ptr [esp + 0x10], 0x3f7c0000 */ W32((u32)(r_esp+0x10u), 0x3f7c0000u);
    /* 00729e58: mov dword ptr [esp + 0x14], 0x3df00000 */ W32((u32)(r_esp+0x14u), 0x3df00000u);
    /* 00729e60: mov dword ptr [esp + 0x1c], 0x3e140000 */ W32((u32)(r_esp+0x1cu), 0x3e140000u);
    /* 00729e68: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00729e69: mov ecx, dword ptr [esp + 0x30] */ r_ecx = R32((u32)(r_esp+0x30u));
    /* 00729e6d: call 0x71ba34 */ r_esp -= 4; W32(r_esp, 0x729e72u); f_0071ba34();
    /* 00729e72: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00729e74: je 0x729e84 */ if (fZ) goto L_00729e84;
L_00729e76:; BB(0x00729e76);
    /* 00729e76: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 00729e7a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00729e7b: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 00729e7f: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x729e84u); f_0082b440();
L_00729e84:; BB(0x00729e84);
    /* 00729e84: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00729e87: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00729e88: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00729e89: ret 0x10 */ FN_RET(0x00729c90); r_esp += 20; return;
L_00729e8c:; BB(0x00729e8c);
    /* 00729e8c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00729e8e: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00729e91: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00729e92: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00729e93: ret 0x10 */ FN_RET(0x00729c90); r_esp += 20; return;
}

void f_00729e98(void) /* sub_729E98 */
{
    FN_ENTER(0x00729e98);
    /* 00729e98: fld dword ptr [0x970a2c] */ FPUSH(R_F32((u32)(0x970a2cu)));
    /* 00729e9e: fld dword ptr [ecx + 0x20] */ FPUSH(R_F32((u32)(r_ecx+0x20u)));
    /* 00729ea1: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00729ea3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00729ea5: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00729ea6: jbe 0x729eb4 */ if ((fC||fZ)) goto L_00729eb4;
L_00729ea8:; BB(0x00729ea8);
    /* 00729ea8: fld dword ptr [ecx + 0x24] */ FPUSH(R_F32((u32)(r_ecx+0x24u)));
    /* 00729eab: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 00729ead: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00729eaf: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00729eb0: ja 0x729eb8 */ if ((!fC&&!fZ)) goto L_00729eb8;
L_00729eb2:; BB(0x00729eb2);
    /* 00729eb2: fstp st(0) */ ST(0) = ST(0); FPOP();
L_00729eb4:; BB(0x00729eb4);
    /* 00729eb4: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00729eb6: jmp 0x729ec1 */ goto L_00729ec1;
L_00729eb8:; BB(0x00729eb8);
    /* 00729eb8: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 00729eba: fld dword ptr [ecx + 0x14] */ FPUSH(R_F32((u32)(r_ecx+0x14u)));
    /* 00729ebd: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00729ebf: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
L_00729ec1:; BB(0x00729ec1);
    /* 00729ec1: fstp dword ptr [ecx + 0x1c] */ W_F32((u32)(r_ecx+0x1cu), ST(0)); FPOP();
    /* 00729ec4: ret  */ FN_RET(0x00729e98); r_esp += 4; return;
}

void f_00729ec8(void) /* sub_729EC8 */
{
    FN_ENTER(0x00729ec8);
    /* 00729ec8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00729ec9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00729ecb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00729ecd: call 0x729eec */ r_esp -= 4; W32(r_esp, 0x729ed2u); f_00729eec();
    /* 00729ed2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00729ed6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00729ed8: jne 0x729ede */ if (!fZ) goto L_00729ede;
L_00729eda:; BB(0x00729eda);
    /* 00729eda: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00729edb: ret 4 */ FN_RET(0x00729ec8); r_esp += 8; return;
L_00729ede:; BB(0x00729ede);
    /* 00729ede: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00729edf: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x729ee4u); f_00857e98();
    /* 00729ee4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00729ee5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00729ee6: ret 4 */ FN_RET(0x00729ec8); r_esp += 8; return;
}

void f_00729eec(void) /* sub_729EEC */
{
    FN_ENTER(0x00729eec);
    /* 00729eec: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00729eed: mov ebp, esp */ r_ebp = r_esp;
    /* 00729eef: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00729ef1: push 0x8f10f4 */ { u32 v = 0x8f10f4u; r_esp -= 4; W32(r_esp, v); }
    /* 00729ef6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00729efc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00729efd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00729f04: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00729f07: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00729f0a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00729f0d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00729f10: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00729f13: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00729f16: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00729f19: mov dword ptr [ecx], 0xb401d8 */ W32((u32)(r_ecx), 0xb401d8u);
    /* 00729f1f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00729f26: call 0x729878 */ r_esp -= 4; W32(r_esp, 0x729f2bu); f_00729878();
    /* 00729f2b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00729f2e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00729f35: mov esp, ebp */ r_esp = r_ebp;
    /* 00729f37: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00729f38: ret  */ FN_RET(0x00729eec); r_esp += 4; return;
}

void f_00729f3c(void) /* sub_729F3C */
{
    FN_ENTER(0x00729f3c);
    /* 00729f3c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00729f3d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00729f3e: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00729f41: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00729f43: mov edi, dword ptr [esp + 0x24] */ r_edi = R32((u32)(r_esp+0x24u));
    /* 00729f47: movsx eax, word ptr [esp + 0x28] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x28u));
    /* 00729f4c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00729f4d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00729f4f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00729f50: call 0x7298c8 */ r_esp -= 4; W32(r_esp, 0x729f55u); f_007298c8();
    /* 00729f55: fld dword ptr [ebx + 0x24] */ FPUSH(R_F32((u32)(r_ebx+0x24u)));
    /* 00729f58: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00729f5b: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00729f5f: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00729f64: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00729f68: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00729f6c: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 00729f70: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00729f73: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 00729f77: mov dword ptr [ebx], 0xb401d8 */ W32((u32)(r_ebx), 0xb401d8u);
    /* 00729f7d: mov word ptr [ebx + 0x28], dx */ W16((u32)(r_ebx+0x28u), (u16)r_edx);
    /* 00729f81: mov eax, dword ptr [edi + 0x24] */ r_eax = R32((u32)(r_edi+0x24u));
    /* 00729f84: mov dword ptr [ebx + 0x60], eax */ W32((u32)(r_ebx+0x60u), r_eax);
    /* 00729f87: mov edi, dword ptr [edi + 0x28] */ r_edi = R32((u32)(r_edi+0x28u));
    /* 00729f8a: mov eax, dword ptr [ebx + 0x18] */ r_eax = R32((u32)(r_ebx+0x18u));
    /* 00729f8d: mov dword ptr [ebx + 0x64], edi */ W32((u32)(r_ebx+0x64u), r_edi);
    /* 00729f90: mov dword ptr [ebx + 0x2c], eax */ W32((u32)(r_ebx+0x2cu), r_eax);
    /* 00729f93: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00729f95: mov word ptr [ebx + 0x2a], ax */ W16((u32)(r_ebx+0x2au), (u16)r_eax);
    /* 00729f99: mov eax, ebx */ r_eax = r_ebx;
    /* 00729f9b: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00729f9e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00729f9f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00729fa0: ret 8 */ FN_RET(0x00729f3c); r_esp += 12; return;
}

void f_00729fa4(void) /* sub_729FA4 */
{
    FN_ENTER(0x00729fa4);
    /* 00729fa4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00729fa5: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00729fa8: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00729faa: movzx edx, word ptr [ebp + 4] */ r_edx = (u32)R16((u32)(r_ebp+0x4u));
    /* 00729fae: test dl, 0x40 */ {  u32 a = (u8)r_edx; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00729fb1: jne 0x72a0a7 */ if (!fZ) goto L_0072a0a7;
L_00729fb7:; BB(0x00729fb7);
    /* 00729fb7: movsx eax, word ptr [ebp + 0x28] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x28u));
    /* 00729fbb: fld dword ptr [ebp + 0x24] */ FPUSH(R_F32((u32)(r_ebp+0x24u)));
    /* 00729fbe: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00729fc1: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00729fc4: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00729fc6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00729fc8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00729fc9: je 0x72a09d */ if (fZ) goto L_0072a09d;
L_00729fcf:; BB(0x00729fcf);
    /* 00729fcf: fld dword ptr [0x970af0] */ FPUSH(R_F32((u32)(0x970af0u)));
    /* 00729fd5: fld dword ptr [ebp + 0x20] */ FPUSH(R_F32((u32)(r_ebp+0x20u)));
    /* 00729fd8: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00729fda: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00729fdc: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00729fdd: jbe 0x729fea */ if ((fC||fZ)) goto L_00729fea;
L_00729fdf:; BB(0x00729fdf);
    /* 00729fdf: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00729fe1: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00729fe3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00729fe5: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00729fe6: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00729fe8: ja 0x729ff0 */ if ((!fC&&!fZ)) goto L_00729ff0;
L_00729fea:; BB(0x00729fea);
    /* 00729fea: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 00729fec: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00729fee: jmp 0x729ff9 */ goto L_00729ff9;
L_00729ff0:; BB(0x00729ff0);
    /* 00729ff0: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00729ff2: fld dword ptr [ebp + 0x14] */ FPUSH(R_F32((u32)(r_ebp+0x14u)));
    /* 00729ff5: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00729ff7: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
L_00729ff9:; BB(0x00729ff9);
    /* 00729ff9: test dl, 0x20 */ {  u32 a = (u8)r_edx; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00729ffc: je 0x72a013 */ if (fZ) goto L_0072a013;
L_00729ffe:; BB(0x00729ffe);
    /* 00729ffe: fld dword ptr [ebp + 0x14] */ FPUSH(R_F32((u32)(r_ebp+0x14u)));
    /* 0072a001: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0072a003: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0072a005: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0072a006: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0072a008: jb 0x72a00c */ if (fC) goto L_0072a00c;
L_0072a00a:; BB(0x0072a00a);
    /* 0072a00a: fst st(1) */ ST(1) = ST(0);
L_0072a00c:; BB(0x0072a00c);
    /* 0072a00c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0072a00e: fstp dword ptr [ebp + 0x1c] */ W_F32((u32)(r_ebp+0x1cu), ST(0)); FPOP();
    /* 0072a011: jmp 0x72a016 */ goto L_0072a016;
L_0072a013:; BB(0x0072a013);
    /* 0072a013: fstp dword ptr [ebp + 0x1c] */ W_F32((u32)(r_ebp+0x1cu), ST(0)); FPOP();
L_0072a016:; BB(0x0072a016);
    /* 0072a016: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 0072a01a: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 0072a01f: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0072a024: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0072a028: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0072a02c: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 0072a030: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0072a034: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0072a038: mov word ptr [ebp + 0x28], ax */ W16((u32)(r_ebp+0x28u), (u16)r_eax);
    /* 0072a03c: mov ecx, 0x24 */ r_ecx = 0x24u;
    /* 0072a041: mov eax, 0x24 */ r_eax = 0x24u;
    /* 0072a046: mov word ptr [ebp + 0x2a], ax */ W16((u32)(r_ebp+0x2au), (u16)r_eax);
L_0072a04a:; BB(0x0072a04a);
    /* 0072a04a: and edx, 0xfffb */ {  u32 a = r_edx; u32 b = 0xfffbu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0072a050: mov word ptr [ebp + 4], dx */ W16((u32)(r_ebp+0x4u), (u16)r_edx);
    /* 0072a054: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072a056: je 0x72a06d */ if (fZ) goto L_0072a06d;
L_0072a058:; BB(0x0072a058);
    /* 0072a058: add ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0072a05b: mov word ptr [ebp + 0x2a], cx */ W16((u32)(r_ebp+0x2au), (u16)r_ecx);
    /* 0072a05f: movsx eax, cx */ r_eax = (u32)(i32)(i16)(u16)r_ecx;
    /* 0072a062: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072a064: jne 0x72a074 */ if (!fZ) goto L_0072a074;
L_0072a066:; BB(0x0072a066);
    /* 0072a066: test dl, 0x10 */ {  u32 a = (u8)r_edx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0072a069: je 0x72a074 */ if (fZ) goto L_0072a074;
L_0072a06b:; BB(0x0072a06b);
    /* 0072a06b: jmp 0x72a079 */ goto L_0072a079;
L_0072a06d:; BB(0x0072a06d);
    /* 0072a06d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0072a06f: call 0x729924 */ r_esp -= 4; W32(r_esp, 0x72a074u); f_00729924();
L_0072a074:; BB(0x0072a074);
    /* 0072a074: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0072a077: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0072a078: ret  */ FN_RET(0x00729fa4); r_esp += 4; return;
L_0072a079:; BB(0x0072a079);
    /* 0072a079: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0072a07b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072a07c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072a07d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072a07e: push 0xac */ { u32 v = 0xacu; r_esp -= 4; W32(r_esp, v); }
    /* 0072a083: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x72a088u); f_00814298();
    /* 0072a088: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0072a08a: push 0xffffff00 */ { u32 v = 0xffffff00u; r_esp -= 4; W32(r_esp, v); }
    /* 0072a08f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072a090: call 0x814664 */ r_esp -= 4; W32(r_esp, 0x72a095u); f_00814664();
    /* 0072a095: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0072a098: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0072a09b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0072a09c: ret  */ FN_RET(0x00729fa4); r_esp += 4; return;
L_0072a09d:; BB(0x0072a09d);
    /* 0072a09d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0072a09f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0072a0a1: movsx ecx, word ptr [ebp + 0x2a] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x2au));
    /* 0072a0a5: jmp 0x72a04a */ goto L_0072a04a;
L_0072a0a7:; BB(0x0072a0a7);
    /* 0072a0a7: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0072a0a9: call 0x72a0bc */ r_esp -= 4; W32(r_esp, 0x72a0aeu); f_0072a0bc();
    /* 0072a0ae: movzx edx, word ptr [ebp + 4] */ r_edx = (u32)R16((u32)(r_ebp+0x4u));
    /* 0072a0b2: mov dword ptr [ebp + 0x18], eax */ W32((u32)(r_ebp+0x18u), r_eax);
    /* 0072a0b5: jmp 0x729fb7 */ goto L_00729fb7;
}

