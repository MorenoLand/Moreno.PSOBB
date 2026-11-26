#include "protos.h"

void f_00525024(void) /* sub_525024 */
{
    FN_ENTER(0x00525024);
    /* 00525024: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00525025: mov edi, ecx */ r_edi = r_ecx;
    /* 00525027: movsx eax, word ptr [edi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32eu));
    /* 0052502e: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00525031: je 0x525087 */ if (fZ) goto L_00525087;
L_00525033:; BB(0x00525033);
    /* 00525033: push 0xf2 */ { u32 v = 0xf2u; r_esp -= 4; W32(r_esp, v); }
    /* 00525038: mov eax, 8 */ r_eax = 0x8u;
    /* 0052503d: mov word ptr [edi + 0x32e], ax */ W16((u32)(r_edi+0x32eu), (u16)r_eax);
    /* 00525044: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00525046: mov word ptr [edi + 0x330], dx */ W16((u32)(r_edi+0x330u), (u16)r_edx);
    /* 0052504d: mov edx, dword ptr [edi + 0xa4] */ r_edx = R32((u32)(r_edi+0xa4u));
    /* 00525053: mov eax, 6 */ r_eax = 0x6u;
    /* 00525058: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 0052505f: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 00525062: and eax, 0xffff7ffe */ {  u32 a = r_eax; u32 b = 0xffff7ffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00525067: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 0052506a: lea eax, [edi + 0x300] */ r_eax = (u32)(r_edi+0x300u);
    /* 00525070: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00525071: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x525076u); f_0050b510();
    /* 00525076: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00525079: mov ecx, edi */ r_ecx = r_edi;
    /* 0052507b: call 0x787534 */ r_esp -= 4; W32(r_esp, 0x525080u); f_00787534();
    /* 00525080: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00525081: call 0x8113e4 */ r_esp -= 4; W32(r_esp, 0x525086u); f_008113e4();
    /* 00525086: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00525087:; BB(0x00525087);
    /* 00525087: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00525088: ret  */ FN_RET(0x00525024); r_esp += 4; return;
}

void f_00525041(void)
{
    FN_ENTER(0x00525041);
    /* 00525041: add eax, dword ptr [eax] */ {  u32 a = r_eax; u32 b = R32((u32)(r_eax)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00525043: add byte ptr [ebx], dh */ { u32 ad = (u32)(r_ebx);  u32 a = R8(ad); u32 b = (u8)(r_edx>>8); u32 r = (a + b) & 0xffu; W8(ad, r); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; fC = (r < a); }
    /* 00525045: shl byte ptr [esi - 0x77], cl */ { u32 ad = (u32)(r_esi+0xffffff89u); u32 c = ((u8)r_ecx) & 31; u32 a = R8(ad); u32 r = a; if (c) { r = (a << c) & 0xffu; W8(ad, r);  } }
    /* 00525048: xchg edi, eax */ { u32 x = r_edi; u32 y = r_eax; r_edi = y; r_eax = x; }
    /* 00525049: xor byte ptr [ebx], al */ { u32 ad = (u32)(r_ebx);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; W8(ad, r);  }
    /* 0052504b: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0052504d: mov edx, dword ptr [edi + 0xa4] */ r_edx = R32((u32)(r_edi+0xa4u));
    /* 00525053: mov eax, 6 */ r_eax = 0x6u;
    /* 00525058: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 0052505f: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 00525062: and eax, 0xffff7ffe */ {  u32 a = r_eax; u32 b = 0xffff7ffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00525067: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 0052506a: lea eax, [edi + 0x300] */ r_eax = (u32)(r_edi+0x300u);
    /* 00525070: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00525071: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x525076u); f_0050b510();
    /* 00525076: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00525079: mov ecx, edi */ r_ecx = r_edi;
    /* 0052507b: call 0x787534 */ r_esp -= 4; W32(r_esp, 0x525080u); f_00787534();
    /* 00525080: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00525081: call 0x8113e4 */ r_esp -= 4; W32(r_esp, 0x525086u); f_008113e4();
    /* 00525086: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00525087: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00525088: ret  */ FN_RET(0x00525041); r_esp += 4; return;
}

void f_0052508c(void) /* sub_52508C */
{
    FN_ENTER(0x0052508c);
    /* 0052508c: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 00525093: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00525095: jne 0x5250cc */ if (!fZ) goto L_005250cc;
L_00525097:; BB(0x00525097);
    /* 00525097: movsx eax, word ptr [ecx + 0x330] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x330u));
    /* 0052509e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005250a0: jl 0x5250ac */ if ((fS!=fO)) goto L_005250ac;
L_005250a2:; BB(0x005250a2);
    /* 005250a2: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005250a5: jle 0x525102 */ if ((fZ||fS!=fO)) goto L_00525102;
L_005250a7:; BB(0x005250a7);
    /* 005250a7: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005250aa: je 0x5250b8 */ if (fZ) goto L_005250b8;
L_005250ac:; BB(0x005250ac);
    /* 005250ac: mov eax, 2 */ r_eax = 0x2u;
    /* 005250b1: mov word ptr [ecx + 0x330], ax */ W16((u32)(r_ecx+0x330u), (u16)r_eax);
L_005250b8:; BB(0x005250b8);
    /* 005250b8: mov eax, dword ptr [ecx + 0x3b4] */ r_eax = R32((u32)(r_ecx+0x3b4u));
    /* 005250be: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005250c0: je 0x525102 */ if (fZ) goto L_00525102;
L_005250c2:; BB(0x005250c2);
    /* 005250c2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005250c4: mov word ptr [ecx + 0x330], ax */ W16((u32)(r_ecx+0x330u), (u16)r_eax);
    /* 005250cb: ret  */ FN_RET(0x0052508c); r_esp += 4; return;
L_005250cc:; BB(0x005250cc);
    /* 005250cc: mov edx, dword ptr [ecx + 0x3b4] */ r_edx = R32((u32)(r_ecx+0x3b4u));
    /* 005250d2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005250d4: mov word ptr [ecx + 0x32e], ax */ W16((u32)(r_ecx+0x32eu), (u16)r_eax);
    /* 005250db: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005250dd: je 0x5250ea */ if (fZ) goto L_005250ea;
L_005250df:; BB(0x005250df);
    /* 005250df: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005250e1: mov word ptr [ecx + 0x330], ax */ W16((u32)(r_ecx+0x330u), (u16)r_eax);
    /* 005250e8: jmp 0x5250f6 */ goto L_005250f6;
L_005250ea:; BB(0x005250ea);
    /* 005250ea: mov eax, 2 */ r_eax = 0x2u;
    /* 005250ef: mov word ptr [ecx + 0x330], ax */ W16((u32)(r_ecx+0x330u), (u16)r_eax);
L_005250f6:; BB(0x005250f6);
    /* 005250f6: mov eax, 1 */ r_eax = 0x1u;
    /* 005250fb: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
L_00525102:; BB(0x00525102);
    /* 00525102: ret  */ FN_RET(0x0052508c); r_esp += 4; return;
}

void f_00525104(void) /* sub_525104 */
{
    FN_ENTER(0x00525104);
    /* 00525104: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 0052510b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0052510d: jle 0x525114 */ if ((fZ||fS!=fO)) goto L_00525114;
L_0052510f:; BB(0x0052510f);
    /* 0052510f: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00525112: jle 0x52514d */ if ((fZ||fS!=fO)) goto L_0052514d;
L_00525114:; BB(0x00525114);
    /* 00525114: movsx edx, word ptr [ecx + 0x3a4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x3a4u));
    /* 0052511b: mov eax, 1 */ r_eax = 0x1u;
    /* 00525120: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 00525127: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052512a: je 0x52514e */ if (fZ) goto L_0052514e;
L_0052512c:; BB(0x0052512c);
    /* 0052512c: mov eax, 2 */ r_eax = 0x2u;
    /* 00525131: mov word ptr [ecx + 0x32e], ax */ W16((u32)(r_ecx+0x32eu), (u16)r_eax);
L_00525138:; BB(0x00525138);
    /* 00525138: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 0052513b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0052513d: mov word ptr [ecx + 0x330], ax */ W16((u32)(r_ecx+0x330u), (u16)r_eax);
    /* 00525144: and edx, 0xfbfbffff */ {  u32 a = r_edx; u32 b = 0xfbfbffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0052514a: mov dword ptr [ecx + 0x30], edx */ W32((u32)(r_ecx+0x30u), r_edx);
L_0052514d:; BB(0x0052514d);
    /* 0052514d: ret  */ FN_RET(0x00525104); r_esp += 4; return;
L_0052514e:; BB(0x0052514e);
    /* 0052514e: mov eax, 1 */ r_eax = 0x1u;
    /* 00525153: mov word ptr [ecx + 0x32e], ax */ W16((u32)(r_ecx+0x32eu), (u16)r_eax);
    /* 0052515a: jmp 0x525138 */ goto L_00525138;
}

void f_0052515c(void) /* sub_52515C */
{
    FN_ENTER(0x0052515c);
    /* 0052515c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0052515d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0052515e: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00525161: mov edi, ecx */ r_edi = r_ecx;
    /* 00525163: mov ecx, edi */ r_ecx = r_edi;
    /* 00525165: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x52516au); f_00770738();
    /* 0052516a: mov esi, eax */ r_esi = r_eax;
    /* 0052516c: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052516e: je 0x5252f4 */ if (fZ) goto L_005252f4;
L_00525174:; BB(0x00525174);
    /* 00525174: mov edx, dword ptr [edi + 0x31c] */ r_edx = R32((u32)(r_edi+0x31cu));
    /* 0052517a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052517c: je 0x5252f4 */ if (fZ) goto L_005252f4;
L_00525182:; BB(0x00525182);
    /* 00525182: mov edx, dword ptr [esi + 0x30] */ r_edx = R32((u32)(r_esi+0x30u));
    /* 00525185: test edx, 0x2000800 */ {  u32 a = r_edx; u32 b = 0x2000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052518b: jne 0x5252f4 */ if (!fZ) goto L_005252f4;
L_00525191:; BB(0x00525191);
    /* 00525191: mov edx, dword ptr [edi + 0x30] */ r_edx = R32((u32)(r_edi+0x30u));
    /* 00525194: test edx, 0x2000 */ {  u32 a = r_edx; u32 b = 0x2000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052519a: je 0x5251c7 */ if (fZ) goto L_005251c7;
L_0052519c:; BB(0x0052519c);
    /* 0052519c: mov edx, dword ptr [0xa72ee8] */ r_edx = R32((u32)(0xa72ee8u));
    /* 005251a2: mov eax, 2 */ r_eax = 0x2u;
    /* 005251a7: mov word ptr [edi + 0x3a6], ax */ W16((u32)(r_edi+0x3a6u), (u16)r_eax);
    /* 005251ae: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 005251b0: mov ecx, edi */ r_ecx = r_edi;
    /* 005251b2: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005251b3: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005251b6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005251b7: call 0x7868f8 */ r_esp -= 4; W32(r_esp, 0x5251bcu); f_007868f8();
    /* 005251bc: mov eax, 1 */ r_eax = 0x1u;
    /* 005251c1: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005251c4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005251c5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005251c6: ret  */ FN_RET(0x0052515c); r_esp += 4; return;
L_005251c7:; BB(0x005251c7);
    /* 005251c7: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 005251ca: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005251cb: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005251cc: mov ecx, edi */ r_ecx = r_edi;
    /* 005251ce: call 0x771458 */ r_esp -= 4; W32(r_esp, 0x5251d3u); f_00771458();
    /* 005251d3: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 005251d7: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 005251da: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 005251de: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 005251e0: fmul qword ptr [0x921758] */ ST(0) = ST(0) * R_F64((u32)(0x921758u));
    /* 005251e6: fdiv qword ptr [0x921750] */ ST(0) = ST(0) / R_F64((u32)(0x921750u));
    /* 005251ec: fnstcw word ptr [esp + 0xc] */ W16((u32)(r_esp+0xcu), fcw);
    /* 005251f0: movzx eax, word ptr [esp + 0xc] */ r_eax = (u32)R16((u32)(r_esp+0xcu));
    /* 005251f5: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005251fa: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 005251fe: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 00525202: fistp dword ptr [esp + 0x1c] */ W32((u32)(r_esp+0x1cu), (u32)fx_int32(ST(0))); FPOP();
    /* 00525206: fldcw word ptr [esp + 0xc] */ fcw = R16((u32)(r_esp+0xcu));
    /* 0052520a: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 0052520e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052520f: push dword ptr [edi + 0x60] */ { u32 v = R32((u32)(r_edi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 00525212: call 0x7a9018 */ r_esp -= 4; W32(r_esp, 0x525217u); f_007a9018();
    /* 00525217: mov edx, eax */ r_edx = r_eax;
    /* 00525219: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052521c: mov eax, dword ptr [esi + 0xa4] */ r_eax = R32((u32)(r_esi+0xa4u));
    /* 00525222: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00525224: je 0x525376 */ if (fZ) goto L_00525376;
L_0052522a:; BB(0x0052522a);
    /* 0052522a: fld dword ptr [eax + 0xc] */ FPUSH(R_F32((u32)(r_eax+0xcu)));
L_0052522d:; BB(0x0052522d);
    /* 0052522d: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 00525231: cmp eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00525236: jl 0x525292 */ if ((fS!=fO)) goto L_00525292;
L_00525238:; BB(0x00525238);
    /* 00525238: cmp eax, 0x4000 */ {  u32 a = r_eax; u32 b = 0x4000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052523d: jl 0x525246 */ if ((fS!=fO)) goto L_00525246;
L_0052523f:; BB(0x0052523f);
    /* 0052523f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00525241: jmp 0x5252f4 */ goto L_005252f4;
L_00525246:; BB(0x00525246);
    /* 00525246: mov esi, dword ptr [0xa72ee8] */ r_esi = R32((u32)(0xa72ee8u));
    /* 0052524c: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 00525250: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 00525252: mov dword ptr [edi + 0x31c], ecx */ W32((u32)(r_edi+0x31cu), r_ecx);
    /* 00525258: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0052525a: fadd dword ptr [ecx + 8] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x8u));
    /* 0052525d: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0052525f: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00525261: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00525263: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00525264: jb 0x5252f4 */ if (fC) goto L_005252f4;
L_0052526a:; BB(0x0052526a);
    /* 0052526a: cmp edx, dword ptr [ecx + 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052526d: jg 0x5252f4 */ if ((!fZ&&fS==fO)) goto L_005252f4;
L_00525273:; BB(0x00525273);
    /* 00525273: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00525275: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00525276: mov word ptr [edi + 0x3a6], ax */ W16((u32)(r_edi+0x3a6u), (u16)r_eax);
    /* 0052527d: mov ecx, edi */ r_ecx = r_edi;
    /* 0052527f: push dword ptr [esi] */ { u32 v = R32((u32)(r_esi)); r_esp -= 4; W32(r_esp, v); }
    /* 00525281: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00525282: call 0x7868f8 */ r_esp -= 4; W32(r_esp, 0x525287u); f_007868f8();
    /* 00525287: mov eax, 1 */ r_eax = 0x1u;
    /* 0052528c: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0052528f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00525290: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00525291: ret  */ FN_RET(0x0052515c); r_esp += 4; return;
L_00525292:; BB(0x00525292);
    /* 00525292: mov eax, dword ptr [esi + 0x33c] */ r_eax = R32((u32)(r_esi+0x33cu));
    /* 00525298: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0052529a: je 0x5252a3 */ if (fZ) goto L_005252a3;
L_0052529c:; BB(0x0052529c);
    /* 0052529c: mov eax, 1 */ r_eax = 0x1u;
    /* 005252a1: jmp 0x5252a5 */ goto L_005252a5;
L_005252a3:; BB(0x005252a3);
    /* 005252a3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005252a5:; BB(0x005252a5);
    /* 005252a5: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005252a8: je 0x525332 */ if (fZ) goto L_00525332;
L_005252ae:; BB(0x005252ae);
    /* 005252ae: mov eax, dword ptr [0x9f9860] */ r_eax = R32((u32)(0x9f9860u));
    /* 005252b3: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005252b6: je 0x525327 */ if (fZ) goto L_00525327;
L_005252b8:; BB(0x005252b8);
    /* 005252b8: mov ecx, dword ptr [0xa72ee8] */ r_ecx = R32((u32)(0xa72ee8u));
    /* 005252be: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 005252c2: mov dword ptr [esp + 0x28], ebx */ W32((u32)(r_esp+0x28u), r_ebx);
    /* 005252c6: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_005252c8:; BB(0x005252c8);
    /* 005252c8: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 005252ca: mov ebx, dword ptr [ecx + esi*4] */ r_ebx = R32((u32)(r_ecx+r_esi*4));
    /* 005252cd: mov dword ptr [edi + 0x31c], ebx */ W32((u32)(r_edi+0x31cu), r_ebx);
    /* 005252d3: fadd dword ptr [ebx + 8] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x8u));
    /* 005252d6: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 005252d8: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 005252da: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005252dc: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005252dd: jb 0x5252e4 */ if (fC) goto L_005252e4;
L_005252df:; BB(0x005252df);
    /* 005252df: cmp edx, dword ptr [ebx + 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebx+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005252e2: jle 0x5252fc */ if ((fZ||fS!=fO)) goto L_005252fc;
L_005252e4:; BB(0x005252e4);
    /* 005252e4: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005252e7: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005252ea: jl 0x5252c8 */ if ((fS!=fO)) goto L_005252c8;
L_005252ec:; BB(0x005252ec);
    /* 005252ec: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 005252ee: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005252f0: mov ebx, dword ptr [esp + 0x28] */ r_ebx = R32((u32)(r_esp+0x28u));
L_005252f4:; BB(0x005252f4);
    /* 005252f4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005252f6: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005252f9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005252fa: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005252fb: ret  */ FN_RET(0x0052515c); r_esp += 4; return;
L_005252fc:; BB(0x005252fc);
    /* 005252fc: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 005252fe: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00525300: mov ebx, dword ptr [esp + 0x28] */ r_ebx = R32((u32)(r_esp+0x28u));
    /* 00525304: movsx eax, si */ r_eax = (u32)(i32)(i16)(u16)r_esi;
    /* 00525307: mov word ptr [edi + 0x3a6], ax */ W16((u32)(r_edi+0x3a6u), (u16)r_eax);
    /* 0052530e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00525310: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00525311: push dword ptr [ecx + eax*4] */ { u32 v = R32((u32)(r_ecx+r_eax*4)); r_esp -= 4; W32(r_esp, v); }
    /* 00525314: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00525315: mov ecx, edi */ r_ecx = r_edi;
    /* 00525317: call 0x7868f8 */ r_esp -= 4; W32(r_esp, 0x52531cu); f_007868f8();
    /* 0052531c: mov eax, 1 */ r_eax = 0x1u;
    /* 00525321: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00525324: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00525325: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00525326: ret  */ FN_RET(0x0052515c); r_esp += 4; return;
L_00525327:; BB(0x00525327);
    /* 00525327: mov esi, dword ptr [esi + 0x30] */ r_esi = R32((u32)(r_esi+0x30u));
    /* 0052532a: test esi, 0x20 */ {  u32 a = r_esi; u32 b = 0x20u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00525330: je 0x5252b8 */ if (fZ) goto L_005252b8;
L_00525332:; BB(0x00525332);
    /* 00525332: mov esi, dword ptr [0xa72ee8] */ r_esi = R32((u32)(0xa72ee8u));
    /* 00525338: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 0052533c: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 0052533e: mov dword ptr [edi + 0x31c], ecx */ W32((u32)(r_edi+0x31cu), r_ecx);
    /* 00525344: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00525346: fadd dword ptr [ecx + 8] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x8u));
    /* 00525349: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0052534b: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0052534d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0052534f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00525350: jb 0x5252f4 */ if (fC) goto L_005252f4;
L_00525352:; BB(0x00525352);
    /* 00525352: cmp edx, dword ptr [ecx + 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00525355: jg 0x5252f4 */ if ((!fZ&&fS==fO)) goto L_005252f4;
L_00525357:; BB(0x00525357);
    /* 00525357: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00525359: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052535a: mov word ptr [edi + 0x3a6], ax */ W16((u32)(r_edi+0x3a6u), (u16)r_eax);
    /* 00525361: mov ecx, edi */ r_ecx = r_edi;
    /* 00525363: push dword ptr [esi] */ { u32 v = R32((u32)(r_esi)); r_esp -= 4; W32(r_esp, v); }
    /* 00525365: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00525366: call 0x7868f8 */ r_esp -= 4; W32(r_esp, 0x52536bu); f_007868f8();
    /* 0052536b: mov eax, 1 */ r_eax = 0x1u;
    /* 00525370: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00525373: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00525374: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00525375: ret  */ FN_RET(0x0052515c); r_esp += 4; return;
L_00525376:; BB(0x00525376);
    /* 00525376: fld dword ptr [0x9217d4] */ FPUSH(R_F32((u32)(0x9217d4u)));
    /* 0052537c: jmp 0x52522d */ goto L_0052522d;
}

void f_00525345(void)
{
    FN_ENTER(0x00525345);
    goto L_00525345;
L_005252f4:; BB(0x005252f4);
    /* 005252f4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005252f6: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005252f9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005252fa: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005252fb: ret  */ FN_RET(0x00525345); r_esp += 4; return;
L_00525345:; BB(0x00525345);
    /* 00525345: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 00525346: fadd dword ptr [ecx + 8] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x8u));
    /* 00525349: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0052534b: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0052534d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0052534f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00525350: jb 0x5252f4 */ if (fC) goto L_005252f4;
L_00525352:; BB(0x00525352);
    /* 00525352: cmp edx, dword ptr [ecx + 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00525355: jg 0x5252f4 */ if ((!fZ&&fS==fO)) goto L_005252f4;
L_00525357:; BB(0x00525357);
    /* 00525357: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00525359: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052535a: mov word ptr [edi + 0x3a6], ax */ W16((u32)(r_edi+0x3a6u), (u16)r_eax);
    /* 00525361: mov ecx, edi */ r_ecx = r_edi;
    /* 00525363: push dword ptr [esi] */ { u32 v = R32((u32)(r_esi)); r_esp -= 4; W32(r_esp, v); }
    /* 00525365: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00525366: call 0x7868f8 */ r_esp -= 4; W32(r_esp, 0x52536bu); f_007868f8();
    /* 0052536b: mov eax, 1 */ r_eax = 0x1u;
    /* 00525370: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00525373: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00525374: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00525375: ret  */ FN_RET(0x00525345); r_esp += 4; return;
}

void f_00525384(void) /* sub_525384 */
{
    FN_ENTER(0x00525384);
    /* 00525384: movsx eax, word ptr [ecx + 0x3a6] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x3a6u));
    /* 0052538b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052538d: je 0x525416 */ if (fZ) goto L_00525416;
L_00525393:; BB(0x00525393);
    /* 00525393: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00525396: jne 0x5253a6 */ if (!fZ) goto L_005253a6;
L_00525398:; BB(0x00525398);
    /* 00525398: mov eax, 5 */ r_eax = 0x5u;
    /* 0052539d: mov word ptr [ecx + 0x32e], ax */ W16((u32)(r_ecx+0x32eu), (u16)r_eax);
    /* 005253a4: jmp 0x525422 */ goto L_00525422;
L_005253a6:; BB(0x005253a6);
    /* 005253a6: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005253a9: jne 0x52540d */ if (!fZ) goto L_0052540d;
L_005253ab:; BB(0x005253ab);
    /* 005253ab: mov dword ptr [ecx + 0x3a0], 0 */ W32((u32)(r_ecx+0x3a0u), 0x0u);
    /* 005253b5: mov eax, 4 */ r_eax = 0x4u;
    /* 005253ba: mov word ptr [ecx + 0x32e], ax */ W16((u32)(r_ecx+0x32eu), (u16)r_eax);
    /* 005253c1: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005253c3: mov dword ptr [ecx + 0x3dc], edx */ W32((u32)(r_ecx+0x3dcu), r_edx);
    /* 005253c9: mov dword ptr [ecx + 0x3e0], edx */ W32((u32)(r_ecx+0x3e0u), r_edx);
    /* 005253cf: mov dword ptr [ecx + 0x3e4], edx */ W32((u32)(r_ecx+0x3e4u), r_edx);
    /* 005253d5: mov dword ptr [ecx + 0x3e8], edx */ W32((u32)(r_ecx+0x3e8u), r_edx);
    /* 005253db: mov dword ptr [ecx + 0x3ec], edx */ W32((u32)(r_ecx+0x3ecu), r_edx);
    /* 005253e1: mov dword ptr [ecx + 0x3f0], edx */ W32((u32)(r_ecx+0x3f0u), r_edx);
    /* 005253e7: mov dword ptr [ecx + 0x3f4], edx */ W32((u32)(r_ecx+0x3f4u), r_edx);
    /* 005253ed: mov dword ptr [ecx + 0x3f8], edx */ W32((u32)(r_ecx+0x3f8u), r_edx);
    /* 005253f3: mov dword ptr [ecx + 0x3fc], edx */ W32((u32)(r_ecx+0x3fcu), r_edx);
    /* 005253f9: mov dword ptr [ecx + 0x400], edx */ W32((u32)(r_ecx+0x400u), r_edx);
    /* 005253ff: mov dword ptr [ecx + 0x404], edx */ W32((u32)(r_ecx+0x404u), r_edx);
    /* 00525405: mov dword ptr [ecx + 0x408], edx */ W32((u32)(r_ecx+0x408u), r_edx);
    /* 0052540b: jmp 0x525422 */ goto L_00525422;
L_0052540d:; BB(0x0052540d);
    /* 0052540d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0052540f: mov word ptr [ecx + 0x3a6], ax */ W16((u32)(r_ecx+0x3a6u), (u16)r_eax);
L_00525416:; BB(0x00525416);
    /* 00525416: mov eax, 3 */ r_eax = 0x3u;
    /* 0052541b: mov word ptr [ecx + 0x32e], ax */ W16((u32)(r_ecx+0x32eu), (u16)r_eax);
L_00525422:; BB(0x00525422);
    /* 00525422: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00525424: mov word ptr [ecx + 0x330], ax */ W16((u32)(r_ecx+0x330u), (u16)r_eax);
    /* 0052542b: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 0052542e: or eax, 0x200000 */ {  u32 a = r_eax; u32 b = 0x200000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00525433: mov edx, 1 */ r_edx = 0x1u;
    /* 00525438: mov word ptr [ecx + 0xb8], dx */ W16((u32)(r_ecx+0xb8u), (u16)r_edx);
    /* 0052543f: and eax, 0xfffbffff */ {  u32 a = r_eax; u32 b = 0xfffbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00525444: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 00525447: ret  */ FN_RET(0x00525384); r_esp += 4; return;
}

void f_00525448(void) /* sub_525448 */
{
    FN_ENTER(0x00525448);
    /* 00525448: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 0052544f: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00525452: je 0x525469 */ if (fZ) goto L_00525469;
L_00525454:; BB(0x00525454);
    /* 00525454: mov eax, 6 */ r_eax = 0x6u;
    /* 00525459: mov word ptr [ecx + 0x32e], ax */ W16((u32)(r_ecx+0x32eu), (u16)r_eax);
    /* 00525460: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00525462: mov word ptr [ecx + 0xb8], dx */ W16((u32)(r_ecx+0xb8u), (u16)r_edx);
L_00525469:; BB(0x00525469);
    /* 00525469: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 0052546c: and eax, 0xff9bffff */ {  u32 a = r_eax; u32 b = 0xff9bffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00525471: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 00525474: ret  */ FN_RET(0x00525448); r_esp += 4; return;
}

void f_00525478(void) /* sub_525478 */
{
    FN_ENTER(0x00525478);
    /* 00525478: mov eax, dword ptr [ecx + 0x90] */ r_eax = R32((u32)(r_ecx+0x90u));
    /* 0052547e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00525480: jne 0x525488 */ if (!fZ) goto L_00525488;
L_00525482:; BB(0x00525482);
    /* 00525482: call 0x525560 */ r_esp -= 4; W32(r_esp, 0x525487u); f_00525560();
    /* 00525487: ret  */ FN_RET(0x00525478); r_esp += 4; return;
L_00525488:; BB(0x00525488);
    /* 00525488: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052548b: jne 0x525493 */ if (!fZ) goto L_00525493;
L_0052548d:; BB(0x0052548d);
    /* 0052548d: call 0x52549c */ r_esp -= 4; W32(r_esp, 0x525492u); f_0052549c();
    /* 00525492: ret  */ FN_RET(0x00525478); r_esp += 4; return;
L_00525493:; BB(0x00525493);
    /* 00525493: call 0x73d160 */ r_esp -= 4; W32(r_esp, 0x525498u); f_0073d160();
    /* 00525498: ret  */ FN_RET(0x00525478); r_esp += 4; return;
}

void f_0052549c(void) /* sub_52549C */
{
    FN_ENTER(0x0052549c);
    /* 0052549c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0052549d: mov edi, ecx */ r_edi = r_ecx;
    /* 0052549f: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x5254a4u); f_00807ac0();
    /* 005254a4: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005254a7: jl 0x5254f0 */ if ((fS!=fO)) goto L_005254f0;
L_005254a9:; BB(0x005254a9);
    /* 005254a9: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005254ac: jle 0x5254da */ if ((fZ||fS!=fO)) goto L_005254da;
L_005254ae:; BB(0x005254ae);
    /* 005254ae: cmp eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005254b1: jl 0x5254f0 */ if ((fS!=fO)) goto L_005254f0;
L_005254b3:; BB(0x005254b3);
    /* 005254b3: cmp eax, 0x11 */ {  u32 a = r_eax; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005254b6: jle 0x52550f */ if ((fZ||fS!=fO)) goto L_0052550f;
L_005254b8:; BB(0x005254b8);
    /* 005254b8: cmp eax, 0x13 */ {  u32 a = r_eax; u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005254bb: jl 0x5254f0 */ if ((fS!=fO)) goto L_005254f0;
L_005254bd:; BB(0x005254bd);
    /* 005254bd: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005254c0: jg 0x5254f0 */ if ((!fZ&&fS==fO)) goto L_005254f0;
L_005254c2:; BB(0x005254c2);
    /* 005254c2: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 005254c5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005254c7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005254c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005254c9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005254ca: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005254cb: push 0x1a3 */ { u32 v = 0x1a3u; r_esp -= 4; W32(r_esp, v); }
    /* 005254d0: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x5254d5u); f_008144b0();
    /* 005254d5: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005254d8: jmp 0x5254f0 */ goto L_005254f0;
L_005254da:; BB(0x005254da);
    /* 005254da: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 005254dd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005254df: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005254e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005254e1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005254e2: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005254e3: push 0xf6 */ { u32 v = 0xf6u; r_esp -= 4; W32(r_esp, v); }
    /* 005254e8: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x5254edu); f_008144b0();
    /* 005254ed: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005254f0:; BB(0x005254f0);
    /* 005254f0: mov edx, dword ptr [edi + 0x84] */ r_edx = R32((u32)(r_edi+0x84u));
    /* 005254f6: lea eax, [edx - 1] */ r_eax = (u32)(r_edx+0xffffffffu);
    /* 005254f9: mov dword ptr [edi + 0x84], eax */ W32((u32)(r_edi+0x84u), r_eax);
    /* 005254ff: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00525501: jge 0x52550d */ if ((fS==fO)) goto L_0052550d;
L_00525503:; BB(0x00525503);
    /* 00525503: mov dword ptr [edi + 0x90], 2 */ W32((u32)(r_edi+0x90u), 0x2u);
L_0052550d:; BB(0x0052550d);
    /* 0052550d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0052550e: ret  */ FN_RET(0x0052549c); r_esp += 4; return;
L_0052550f:; BB(0x0052550f);
    /* 0052550f: mov eax, dword ptr [0x9f9860] */ r_eax = R32((u32)(0x9f9860u));
    /* 00525514: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00525517: jne 0x5254f0 */ if (!fZ) goto L_005254f0;
L_00525519:; BB(0x00525519);
    /* 00525519: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 0052551c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0052551e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052551f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00525520: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00525521: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00525522: push 0x3001e */ { u32 v = 0x3001eu; r_esp -= 4; W32(r_esp, v); }
    /* 00525527: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x52552cu); f_008144b0();
    /* 0052552c: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052552f: jmp 0x5254f0 */ goto L_005254f0;
}

void f_00525560(void) /* sub_525560 */
{
    FN_ENTER(0x00525560);
    /* 00525560: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00525561: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00525562: mov esi, ecx */ r_esi = r_ecx;
    /* 00525564: movzx eax, word ptr [esi + 0xa4] */ r_eax = (u32)R16((u32)(r_esi+0xa4u));
    /* 0052556b: mov dword ptr [esi + 0x90], 1 */ W32((u32)(r_esi+0x90u), 0x1u);
    /* 00525575: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00525576: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x52557bu); f_0068d5a8();
    /* 0052557b: mov ebp, eax */ r_ebp = r_eax;
    /* 0052557d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00525580: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00525582: je 0x5255b5 */ if (fZ) goto L_005255b5;
L_00525584:; BB(0x00525584);
    /* 00525584: movsx edx, word ptr [ebp + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 0052558b: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0052558e: jne 0x5255b5 */ if (!fZ) goto L_005255b5;
L_00525590:; BB(0x00525590);
    /* 00525590: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00525592: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x525597u); f_008173b4();
    /* 00525597: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00525599: je 0x5255b5 */ if (fZ) goto L_005255b5;
L_0052559b:; BB(0x0052559b);
    /* 0052559b: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 0052559e: test edx, 0x800 */ {  u32 a = r_edx; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005255a4: jne 0x5255b5 */ if (!fZ) goto L_005255b5;
L_005255a6:; BB(0x005255a6);
    /* 005255a6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005255a8: push dword ptr [esi + 0x84] */ { u32 v = R32((u32)(r_esi+0x84u)); r_esp -= 4; W32(r_esp, v); }
    /* 005255ae: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005255b0: call 0x69375c */ r_esp -= 4; W32(r_esp, 0x5255b5u); f_0069375c();
L_005255b5:; BB(0x005255b5);
    /* 005255b5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005255b6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005255b7: ret  */ FN_RET(0x00525560); r_esp += 4; return;
}

void f_005255b8(void)
{
    FN_ENTER(0x005255b8);
    /* 005255b8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005255b9: mov ebp, esp */ r_ebp = r_esp;
    /* 005255bb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005255bd: push 0x8d49ba */ { u32 v = 0x8d49bau; r_esp -= 4; W32(r_esp, v); }
    /* 005255c2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005255c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005255c9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005255d0: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005255d3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005255d6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005255d9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005255dc: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005255df: call 0x520e6c */ r_esp -= 4; W32(r_esp, 0x5255e4u); f_00520e6c();
    /* 005255e4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005255e6: je 0x525601 */ if (fZ) goto L_00525601;
L_005255e8:; BB(0x005255e8);
    /* 005255e8: push 0x92196c */ { u32 v = 0x92196cu; r_esp -= 4; W32(r_esp, v); }
    /* 005255ed: push 0x9bbb4c */ { u32 v = 0x9bbb4cu; r_esp -= 4; W32(r_esp, v); }
    /* 005255f2: call 0x51f674 */ r_esp -= 4; W32(r_esp, 0x5255f7u); f_0051f674();
    /* 005255f7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005255fa: mov dword ptr [0xa72edc], eax */ W32((u32)(0xa72edcu), r_eax);
    /* 005255ff: jmp 0x525656 */ goto L_00525656;
L_00525601:; BB(0x00525601);
    /* 00525601: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
    /* 00525608: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 0052560d: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x525612u); f_008581c5();
    /* 00525612: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00525613: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00525616: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00525618: je 0x525856 */ if (fZ) goto L_00525856;
L_0052561e:; BB(0x0052561e);
    /* 0052561e: mov dword ptr [ebp - 0x40], 1 */ W32((u32)(r_ebp+0xffffffc0u), 0x1u);
    /* 00525625: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0052562c: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0052562f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00525631: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00525632: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00525633: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00525634: push 0x9bbb4c */ { u32 v = 0x9bbb4cu; r_esp -= 4; W32(r_esp, v); }
    /* 00525639: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0052563b: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x525640u); f_005b7a84();
    /* 00525640: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 00525643: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
    /* 0052564a: mov dword ptr [0xa72edc], eax */ W32((u32)(0xa72edcu), r_eax);
    /* 0052564f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
L_00525656:; BB(0x00525656);
    /* 00525656: mov dword ptr [0xa72ef8], 0 */ W32((u32)(0xa72ef8u), 0x0u);
    /* 00525660: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 00525662: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00525664: mov dword ptr [0xa72ef4], 0 */ W32((u32)(0xa72ef4u), 0x0u);
    /* 0052566e: mov dword ptr [0xa72f14], eax */ W32((u32)(0xa72f14u), r_eax);
    /* 00525673: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00525676: mov dword ptr [0xa72ef0], 0 */ W32((u32)(0xa72ef0u), 0x0u);
    /* 00525680: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x525685u); f_008581c5();
    /* 00525685: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00525686: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00525689: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052568b: je 0x52584f */ if (fZ) goto L_0052584f;
L_00525691:; BB(0x00525691);
    /* 00525691: mov dword ptr [ebp - 0x38], 1 */ W32((u32)(r_ebp+0xffffffc8u), 0x1u);
    /* 00525698: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0052569f: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005256a2: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005256a4: push 0x3f333333 */ { u32 v = 0x3f333333u; r_esp -= 4; W32(r_esp, v); }
    /* 005256a9: push 0x41a00000 */ { u32 v = 0x41a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 005256ae: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005256b0: call 0x5795a0 */ r_esp -= 4; W32(r_esp, 0x5256b5u); f_005795a0();
    /* 005256b5: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005256b8: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 005256bf: mov dword ptr [0xa72f18], eax */ W32((u32)(0xa72f18u), r_eax);
    /* 005256c4: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005256cb: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 005256d2: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 005256d4: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5256d9u); f_008581c5();
    /* 005256d9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005256da: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 005256dd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005256df: je 0x525848 */ if (fZ) goto L_00525848;
L_005256e5:; BB(0x005256e5);
    /* 005256e5: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 005256ec: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 005256f3: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005256f6: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005256f8: push 0x3f333333 */ { u32 v = 0x3f333333u; r_esp -= 4; W32(r_esp, v); }
    /* 005256fd: push 0x41a00000 */ { u32 v = 0x41a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00525702: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00525704: call 0x5795a0 */ r_esp -= 4; W32(r_esp, 0x525709u); f_005795a0();
    /* 00525709: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0052570c: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 00525713: mov dword ptr [0xa72f1c], eax */ W32((u32)(0xa72f1cu), r_eax);
    /* 00525718: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0052571f: mov eax, dword ptr [0xa72edc] */ r_eax = R32((u32)(0xa72edcu));
    /* 00525724: mov ebx, dword ptr [0x9bbac4] */ r_ebx = R32((u32)(0x9bbac4u));
    /* 0052572a: mov ecx, dword ptr [0xa72f18] */ r_ecx = R32((u32)(0xa72f18u));
    /* 00525730: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 00525732: mov esi, dword ptr [eax + 0x42c] */ r_esi = R32((u32)(r_eax+0x42cu));
    /* 00525738: push 0x46 */ { u32 v = 0x46u; r_esp -= 4; W32(r_esp, v); }
    /* 0052573a: mov edx, dword ptr [eax + 0x430] */ r_edx = R32((u32)(r_eax+0x430u));
    /* 00525740: push dword ptr [edx + ebx*8 + 4] */ { u32 v = R32((u32)(r_edx+r_ebx*8+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00525744: push dword ptr [esi + 8] */ { u32 v = R32((u32)(r_esi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00525747: call 0x579a28 */ r_esp -= 4; W32(r_esp, 0x52574cu); f_00579a28();
    /* 0052574c: mov eax, dword ptr [0xa72edc] */ r_eax = R32((u32)(0xa72edcu));
    /* 00525751: mov ebx, dword ptr [0x9bbad4] */ r_ebx = R32((u32)(0x9bbad4u));
    /* 00525757: mov ecx, dword ptr [0xa72f1c] */ r_ecx = R32((u32)(0xa72f1cu));
    /* 0052575d: push 0x3e */ { u32 v = 0x3eu; r_esp -= 4; W32(r_esp, v); }
    /* 0052575f: mov esi, dword ptr [eax + 0x42c] */ r_esi = R32((u32)(r_eax+0x42cu));
    /* 00525765: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 00525767: mov edx, dword ptr [eax + 0x430] */ r_edx = R32((u32)(r_eax+0x430u));
    /* 0052576d: push dword ptr [edx + ebx*8 + 4] */ { u32 v = R32((u32)(r_edx+r_ebx*8+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00525771: push dword ptr [esi + 8] */ { u32 v = R32((u32)(r_esi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00525774: call 0x579a28 */ r_esp -= 4; W32(r_esp, 0x525779u); f_00579a28();
    /* 00525779: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0052577b: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x525780u); f_008581c5();
    /* 00525780: mov dword ptr [0xa72ee8], eax */ W32((u32)(0xa72ee8u), r_eax);
    /* 00525785: push 0x4e */ { u32 v = 0x4eu; r_esp -= 4; W32(r_esp, v); }
    /* 00525787: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x52578cu); f_0077a684();
    /* 0052578c: mov dword ptr [0xa72eec], eax */ W32((u32)(0xa72eecu), r_eax);
    /* 00525791: push 0x51 */ { u32 v = 0x51u; r_esp -= 4; W32(r_esp, v); }
    /* 00525793: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x525798u); f_0077a698();
    /* 00525798: mov edx, dword ptr [0xa72ee8] */ r_edx = R32((u32)(0xa72ee8u));
    /* 0052579e: push 0x52 */ { u32 v = 0x52u; r_esp -= 4; W32(r_esp, v); }
    /* 005257a0: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 005257a2: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x5257a7u); f_0077a698();
    /* 005257a7: mov edx, dword ptr [0xa72ee8] */ r_edx = R32((u32)(0xa72ee8u));
    /* 005257ad: push 0x53 */ { u32 v = 0x53u; r_esp -= 4; W32(r_esp, v); }
    /* 005257af: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 005257b2: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x5257b7u); f_0077a698();
    /* 005257b7: mov edx, dword ptr [0xa72ee8] */ r_edx = R32((u32)(0xa72ee8u));
    /* 005257bd: push 0x4d */ { u32 v = 0x4du; r_esp -= 4; W32(r_esp, v); }
    /* 005257bf: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 005257c2: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x5257c7u); f_0077a6b4();
    /* 005257c7: mov dword ptr [0xa72ee4], eax */ W32((u32)(0xa72ee4u), r_eax);
    /* 005257cc: push 0x4d */ { u32 v = 0x4du; r_esp -= 4; W32(r_esp, v); }
    /* 005257ce: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x5257d3u); f_0077a6cc();
    /* 005257d3: movzx edx, word ptr [0x921744] */ r_edx = (u32)R16((u32)(0x921744u));
    /* 005257da: movzx ecx, word ptr [0x921746] */ r_ecx = (u32)R16((u32)(0x921746u));
    /* 005257e1: movzx ebx, word ptr [0x921748] */ r_ebx = (u32)R16((u32)(0x921748u));
    /* 005257e8: mov edi, dword ptr [0xa72edc] */ r_edi = R32((u32)(0xa72edcu));
    /* 005257ee: mov esi, dword ptr [edi + 0x430] */ r_esi = R32((u32)(r_edi+0x430u));
    /* 005257f4: mov dword ptr [0xa72ee0], eax */ W32((u32)(0xa72ee0u), r_eax);
    /* 005257f9: mov eax, dword ptr [0x921740] */ r_eax = R32((u32)(0x921740u));
    /* 005257fe: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00525801: mov word ptr [ebp - 0x24], dx */ W16((u32)(r_ebp+0xffffffdcu), (u16)r_edx);
    /* 00525805: mov edx, dword ptr [edi + 0x42c] */ r_edx = R32((u32)(r_edi+0x42cu));
    /* 0052580b: mov word ptr [ebp - 0x22], cx */ W16((u32)(r_ebp+0xffffffdeu), (u16)r_ecx);
    /* 0052580f: mov word ptr [ebp - 0x20], bx */ W16((u32)(r_ebp+0xffffffe0u), (u16)r_ebx);
    /* 00525813: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
    /* 00525816: lea eax, [ebp - 0x2c] */ r_eax = (u32)(r_ebp+0xffffffd4u);
    /* 00525819: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052581a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052581c: push 0x41200000 */ { u32 v = 0x41200000u; r_esp -= 4; W32(r_esp, v); }
    /* 00525821: push dword ptr [edx + 0xc] */ { u32 v = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00525824: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00525827: push 0x35 */ { u32 v = 0x35u; r_esp -= 4; W32(r_esp, v); }
    /* 00525829: call 0x608470 */ r_esp -= 4; W32(r_esp, 0x52582eu); f_00608470();
    /* 0052582e: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00525831: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00525834: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 00525837: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0052583a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0052583d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00525844: mov esp, ebp */ r_esp = r_ebp;
    /* 00525846: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00525847: ret  */ FN_RET(0x005255b8); r_esp += 4; return;
L_00525848:; BB(0x00525848);
    /* 00525848: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0052584a: jmp 0x525713 */ f_00525713(); return;
L_0052584f:; BB(0x0052584f);
    /* 0052584f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00525851: jmp 0x5256bf */ f_005256bf(); return;
L_00525856:; BB(0x00525856);
    /* 00525856: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00525858: jmp 0x52564a */ f_0052564a(); return;
}

void f_00525860(void) /* sub_525860 */
{
    FN_ENTER(0x00525860);
    /* 00525860: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00525861: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00525863: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00525865: call 0x525884 */ r_esp -= 4; W32(r_esp, 0x52586au); f_00525884();
    /* 0052586a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0052586e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00525870: jne 0x525876 */ if (!fZ) goto L_00525876;
L_00525872:; BB(0x00525872);
    /* 00525872: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00525873: ret 4 */ FN_RET(0x00525860); r_esp += 8; return;
L_00525876:; BB(0x00525876);
    /* 00525876: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00525877: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x52587cu); f_005c2f74();
    /* 0052587c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0052587d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0052587e: ret 4 */ FN_RET(0x00525860); r_esp += 8; return;
}

void f_00525884(void) /* sub_525884 */
{
    FN_ENTER(0x00525884);
    /* 00525884: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00525885: mov ebp, esp */ r_ebp = r_esp;
    /* 00525887: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00525889: push 0x8d49d4 */ { u32 v = 0x8d49d4u; r_esp -= 4; W32(r_esp, v); }
    /* 0052588e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00525894: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00525895: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0052589c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0052589f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005258a2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005258a5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005258a8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005258ab: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005258ae: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005258b5: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005258b8: mov dword ptr [ecx], 0xb00da0 */ W32((u32)(r_ecx), 0xb00da0u);
    /* 005258be: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x5258c3u); f_007b9c8c();
    /* 005258c3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005258ca: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005258cd: call 0x78638c */ r_esp -= 4; W32(r_esp, 0x5258d2u); f_0078638c();
    /* 005258d2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005258d5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005258dc: mov esp, ebp */ r_esp = r_ebp;
    /* 005258de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005258df: ret  */ FN_RET(0x00525884); r_esp += 4; return;
}

void f_005258e0(void) /* sub_5258E0 */
{
    FN_ENTER(0x005258e0);
    /* 005258e0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005258e1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005258e2: mov esi, ecx */ r_esi = r_ecx;
    /* 005258e4: movzx eax, word ptr [esi + 0x37c] */ r_eax = (u32)R16((u32)(r_esi+0x37cu));
    /* 005258eb: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005258f0: mov word ptr [esi + 0x37c], ax */ W16((u32)(r_esi+0x37cu), (u16)r_eax);
    /* 005258f7: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x5258fcu); f_004f7c84();
    /* 005258fc: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005258ff: je 0x525afd */ if (fZ) goto L_00525afd;
L_00525905:; BB(0x00525905);
    /* 00525905: movzx eax, word ptr [esi + 0x340] */ r_eax = (u32)R16((u32)(r_esi+0x340u));
    /* 0052590c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052590d: call 0x578c74 */ r_esp -= 4; W32(r_esp, 0x525912u); f_00578c74();
    /* 00525912: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00525913: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00525914: mov ecx, esi */ r_ecx = r_esi;
    /* 00525916: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x52591bu); f_007706b0();
    /* 0052591b: mov ecx, esi */ r_ecx = r_esi;
    /* 0052591d: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x525922u); f_00770738();
    /* 00525922: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00525924: je 0x525945 */ if (fZ) goto L_00525945;
L_00525926:; BB(0x00525926);
    /* 00525926: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 00525929: test eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052592e: je 0x525945 */ if (fZ) goto L_00525945;
L_00525930:; BB(0x00525930);
    /* 00525930: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00525932: mov ecx, esi */ r_ecx = r_esi;
    /* 00525934: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x525939u); f_007706b0();
    /* 00525939: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 0052593e: mov word ptr [esi + 0x340], ax */ W16((u32)(r_esi+0x340u), (u16)r_eax);
L_00525945:; BB(0x00525945);
    /* 00525945: movsx eax, word ptr [esi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x32eu));
    /* 0052594c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052594e: je 0x525af1 */ if (fZ) goto L_00525af1;
L_00525954:; BB(0x00525954);
    /* 00525954: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00525957: je 0x525ae5 */ if (fZ) goto L_00525ae5;
L_0052595d:; BB(0x0052595d);
    /* 0052595d: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00525960: je 0x525ad9 */ if (fZ) goto L_00525ad9;
L_00525966:; BB(0x00525966);
    /* 00525966: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00525969: je 0x525987 */ if (fZ) goto L_00525987;
L_0052596b:; BB(0x0052596b);
    /* 0052596b: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052596e: jne 0x525979 */ if (!fZ) goto L_00525979;
L_00525970:; BB(0x00525970);
    /* 00525970: mov ecx, esi */ r_ecx = r_esi;
    /* 00525972: call 0x525b8c */ r_esp -= 4; W32(r_esp, 0x525977u); f_00525b8c();
    /* 00525977: jmp 0x52598e */ goto L_0052598e;
L_00525979:; BB(0x00525979);
    /* 00525979: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052597c: jne 0x52598e */ if (!fZ) goto L_0052598e;
L_0052597e:; BB(0x0052597e);
    /* 0052597e: mov ecx, esi */ r_ecx = r_esi;
    /* 00525980: call 0x525b08 */ r_esp -= 4; W32(r_esp, 0x525985u); f_00525b08();
    /* 00525985: jmp 0x52598e */ goto L_0052598e;
L_00525987:; BB(0x00525987);
    /* 00525987: mov ecx, esi */ r_ecx = r_esi;
    /* 00525989: call 0x525d2c */ r_esp -= 4; W32(r_esp, 0x52598eu); f_00525d2c();
L_0052598e:; BB(0x0052598e);
    /* 0052598e: mov ecx, esi */ r_ecx = r_esi;
    /* 00525990: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x525995u); f_0078730c();
    /* 00525995: mov eax, dword ptr [esi + 0x300] */ r_eax = R32((u32)(r_esi+0x300u));
    /* 0052599b: mov edx, dword ptr [esi + 0x304] */ r_edx = R32((u32)(r_esi+0x304u));
    /* 005259a1: mov ebx, dword ptr [esi + 0x308] */ r_ebx = R32((u32)(r_esi+0x308u));
    /* 005259a7: mov dword ptr [esi + 0x74], eax */ W32((u32)(r_esi+0x74u), r_eax);
    /* 005259aa: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 005259ad: mov dword ptr [esi + 0x78], edx */ W32((u32)(r_esi+0x78u), r_edx);
    /* 005259b0: test eax, 0x6000000 */ {  u32 a = r_eax; u32 b = 0x6000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005259b5: mov dword ptr [esi + 0x7c], ebx */ W32((u32)(r_esi+0x7cu), r_ebx);
    /* 005259b8: jne 0x5259d0 */ if (!fZ) goto L_005259d0;
L_005259ba:; BB(0x005259ba);
    /* 005259ba: movzx eax, word ptr [esi + 0x37c] */ r_eax = (u32)R16((u32)(r_esi+0x37cu));
    /* 005259c1: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005259c3: jne 0x5259d0 */ if (!fZ) goto L_005259d0;
L_005259c5:; BB(0x005259c5);
    /* 005259c5: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005259c7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005259c8: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x5259cdu); f_006946a8();
    /* 005259cd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005259d0:; BB(0x005259d0);
    /* 005259d0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005259d2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005259d4: lea ebx, [esi + 0x38] */ r_ebx = (u32)(r_esi+0x38u);
    /* 005259d7: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 005259dc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005259dd: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x5259e2u); f_00805608();
    /* 005259e2: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005259e5: movsx edx, word ptr [esi + 0x37c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x37cu));
    /* 005259ec: test dl, 0x40 */ {  u32 a = (u8)r_edx; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005259ef: je 0x525a73 */ if (fZ) goto L_00525a73;
L_005259f5:; BB(0x005259f5);
    /* 005259f5: fld dword ptr [0x921c34] */ FPUSH(R_F32((u32)(0x921c34u)));
    /* 005259fb: fld dword ptr [esi + 0x310] */ FPUSH(R_F32((u32)(r_esi+0x310u)));
    /* 00525a01: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00525a03: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00525a05: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00525a06: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 00525a09: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00525a0b: ja 0x525a0f */ if ((!fC&&!fZ)) goto L_00525a0f;
L_00525a0d:; BB(0x00525a0d);
    /* 00525a0d: fst st(1) */ ST(1) = ST(0);
L_00525a0f:; BB(0x00525a0f);
    /* 00525a0f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00525a11: fstp dword ptr [esi + 0x310] */ W_F32((u32)(r_esi+0x310u), ST(0)); FPOP();
    /* 00525a17: test eax, 0x800000 */ {  u32 a = r_eax; u32 b = 0x800000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00525a1c: je 0x525a76 */ if (fZ) goto L_00525a76;
L_00525a1e:; BB(0x00525a1e);
    /* 00525a1e: mov eax, dword ptr [0xaafdb8] */ r_eax = R32((u32)(0xaafdb8u));
    /* 00525a23: and edx, 0xffbf */ {  u32 a = r_edx; u32 b = 0xffbfu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00525a29: mov word ptr [esi + 0x37c], dx */ W16((u32)(r_esi+0x37cu), (u16)r_edx);
    /* 00525a30: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00525a33: je 0x525a4d */ if (fZ) goto L_00525a4d;
L_00525a35:; BB(0x00525a35);
    /* 00525a35: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00525a37: jne 0x525a5f */ if (!fZ) goto L_00525a5f;
L_00525a39:; BB(0x00525a39);
    /* 00525a39: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00525a3b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00525a3c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00525a3d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00525a3e: push 0xec */ { u32 v = 0xecu; r_esp -= 4; W32(r_esp, v); }
    /* 00525a43: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x525a48u); f_00814298();
    /* 00525a48: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00525a4b: jmp 0x525a5f */ goto L_00525a5f;
L_00525a4d:; BB(0x00525a4d);
    /* 00525a4d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00525a4f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00525a50: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00525a51: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00525a52: push 0x1ca */ { u32 v = 0x1cau; r_esp -= 4; W32(r_esp, v); }
    /* 00525a57: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x525a5cu); f_00814298();
    /* 00525a5c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00525a5f:; BB(0x00525a5f);
    /* 00525a5f: mov edx, dword ptr [esi + 0xa4] */ r_edx = R32((u32)(r_esi+0xa4u));
    /* 00525a65: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 00525a68: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00525a6b: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 00525a6e: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 00525a71: jmp 0x525a76 */ goto L_00525a76;
L_00525a73:; BB(0x00525a73);
    /* 00525a73: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
L_00525a76:; BB(0x00525a76);
    /* 00525a76: test eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00525a7b: je 0x525ad6 */ if (fZ) goto L_00525ad6;
L_00525a7d:; BB(0x00525a7d);
    /* 00525a7d: movzx eax, word ptr [esi + 0x37c] */ r_eax = (u32)R16((u32)(r_esi+0x37cu));
    /* 00525a84: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00525a86: jne 0x525ad6 */ if (!fZ) goto L_00525ad6;
L_00525a88:; BB(0x00525a88);
    /* 00525a88: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00525a8a: add word ptr [esi + 0x388], 1 */ { u32 ad = (u32)(r_esi+0x388u);  u32 a = R16(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 00525a92: mov ecx, esi */ r_ecx = r_esi;
    /* 00525a94: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 00525a96: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x525a99u); call_ind(t); }
    /* 00525a99: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00525a9b: je 0x525ad6 */ if (fZ) goto L_00525ad6;
L_00525a9d:; BB(0x00525a9d);
    /* 00525a9d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00525a9f: push 0x42f00000 */ { u32 v = 0x42f00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00525aa4: mov ecx, esi */ r_ecx = r_esi;
    /* 00525aa6: call 0x7714cc */ r_esp -= 4; W32(r_esp, 0x525aabu); f_007714cc();
    /* 00525aab: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 00525aae: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00525ab3: je 0x525ac3 */ if (fZ) goto L_00525ac3;
L_00525ab5:; BB(0x00525ab5);
    /* 00525ab5: movsx eax, word ptr [esi + 0x388] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x388u));
    /* 00525abc: cmp eax, 0x384 */ {  u32 a = r_eax; u32 b = 0x384u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00525ac1: jl 0x525ad6 */ if ((fS!=fO)) goto L_00525ad6;
L_00525ac3:; BB(0x00525ac3);
    /* 00525ac3: mov ecx, esi */ r_ecx = r_esi;
    /* 00525ac5: call 0x525c90 */ r_esp -= 4; W32(r_esp, 0x525acau); f_00525c90();
    /* 00525aca: mov eax, 9 */ r_eax = 0x9u;
    /* 00525acf: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
L_00525ad6:; BB(0x00525ad6);
    /* 00525ad6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00525ad7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00525ad8: ret  */ FN_RET(0x005258e0); r_esp += 4; return;
L_00525ad9:; BB(0x00525ad9);
    /* 00525ad9: mov ecx, esi */ r_ecx = r_esi;
    /* 00525adb: call 0x525d94 */ r_esp -= 4; W32(r_esp, 0x525ae0u); f_00525d94();
    /* 00525ae0: jmp 0x52598e */ goto L_0052598e;
L_00525ae5:; BB(0x00525ae5);
    /* 00525ae5: mov ecx, esi */ r_ecx = r_esi;
    /* 00525ae7: call 0x526008 */ r_esp -= 4; W32(r_esp, 0x525aecu); f_00526008();
    /* 00525aec: jmp 0x52598e */ goto L_0052598e;
L_00525af1:; BB(0x00525af1);
    /* 00525af1: mov ecx, esi */ r_ecx = r_esi;
    /* 00525af3: call 0x526708 */ r_esp -= 4; W32(r_esp, 0x525af8u); f_00526708();
    /* 00525af8: jmp 0x52598e */ goto L_0052598e;
L_00525afd:; BB(0x00525afd);
    /* 00525afd: mov ecx, esi */ r_ecx = r_esi;
    /* 00525aff: call 0x526a7c */ r_esp -= 4; W32(r_esp, 0x525b04u); f_00526a7c();
    /* 00525b04: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00525b05: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00525b06: ret  */ FN_RET(0x005258e0); r_esp += 4; return;
}

void f_00525b08(void) /* sub_525B08 */
{
    FN_ENTER(0x00525b08);
    /* 00525b08: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00525b09: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00525b0b: movzx eax, word ptr [ebp + 0x37c] */ r_eax = (u32)R16((u32)(r_ebp+0x37cu));
    /* 00525b12: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00525b14: and eax, 0xfffe */ {  u32 a = r_eax; u32 b = 0xfffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00525b19: mov word ptr [ebp + 0x37c], ax */ W16((u32)(r_ebp+0x37cu), (u16)r_eax);
    /* 00525b20: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x525b25u); f_007aa094();
    /* 00525b25: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 00525b28: test eax, 0x800000 */ {  u32 a = r_eax; u32 b = 0x800000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00525b2d: jne 0x525b3a */ if (!fZ) goto L_00525b3a;
L_00525b2f:; BB(0x00525b2f);
    /* 00525b2f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00525b31: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00525b33: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00525b35: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x525b3au); f_00772b44();
L_00525b3a:; BB(0x00525b3a);
    /* 00525b3a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00525b3b: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x525b40u); f_007b999c();
    /* 00525b40: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00525b41: fld dword ptr [ebp + 0xc8] */ FPUSH(R_F32((u32)(r_ebp+0xc8u)));
    /* 00525b47: fmul dword ptr [0x921c28] */ ST(0) = ST(0) * R_F32((u32)(0x921c28u));
    /* 00525b4d: fmul dword ptr [0x921c24] */ ST(0) = ST(0) * R_F32((u32)(0x921c24u));
    /* 00525b53: fcomp dword ptr [ebp + 0xc0] */ fx_compare(ST(0), R_F32((u32)(r_ebp+0xc0u))); FPOP();
    /* 00525b59: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00525b5b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00525b5c: jbe 0x525b88 */ if ((fC||fZ)) goto L_00525b88;
L_00525b5e:; BB(0x00525b5e);
    /* 00525b5e: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00525b61: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00525b63: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x525b66u); call_ind(t); }
    /* 00525b66: fld dword ptr [0x921c24] */ FPUSH(R_F32((u32)(0x921c24u)));
    /* 00525b6c: fld dword ptr [ebp + 0x30c] */ FPUSH(R_F32((u32)(r_ebp+0x30cu)));
    /* 00525b72: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00525b74: fld dword ptr [ebp + 0x314] */ FPUSH(R_F32((u32)(r_ebp+0x314u)));
    /* 00525b7a: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00525b7c: fstp dword ptr [ebp + 0x30c] */ W_F32((u32)(r_ebp+0x30cu), ST(0)); FPOP();
    /* 00525b82: fstp dword ptr [ebp + 0x314] */ W_F32((u32)(r_ebp+0x314u), ST(0)); FPOP();
L_00525b88:; BB(0x00525b88);
    /* 00525b88: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00525b89: ret  */ FN_RET(0x00525b08); r_esp += 4; return;
}

void f_00525b8c(void) /* sub_525B8C */
{
    FN_ENTER(0x00525b8c);
    /* 00525b8c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00525b8d: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00525b90: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00525b92: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00525b94: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x525b99u); f_007aa094();
    /* 00525b99: mov eax, dword ptr [ebp + 0x300] */ r_eax = R32((u32)(r_ebp+0x300u));
    /* 00525b9f: mov edx, dword ptr [ebp + 0x304] */ r_edx = R32((u32)(r_ebp+0x304u));
    /* 00525ba5: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00525ba8: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00525bab: fadd dword ptr [ebp + 0x30c] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x30cu));
    /* 00525bb1: mov eax, dword ptr [ebp + 0x308] */ r_eax = R32((u32)(r_ebp+0x308u));
    /* 00525bb7: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00525bba: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00525bbc: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00525bc0: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00525bc4: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00525bc8: fadd dword ptr [ebp + 0x314] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x314u));
    /* 00525bce: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00525bd2: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00525bd5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00525bd6: call 0x771e14 */ r_esp -= 4; W32(r_esp, 0x525bdbu); f_00771e14();
    /* 00525bdb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00525bdd: je 0x525bf5 */ if (fZ) goto L_00525bf5;
L_00525bdf:; BB(0x00525bdf);
    /* 00525bdf: fld dword ptr [0x921c20] */ FPUSH(R_F32((u32)(0x921c20u)));
    /* 00525be5: fld dword ptr [0x921c20] */ FPUSH(R_F32((u32)(0x921c20u)));
    /* 00525beb: fld dword ptr [0x921c20] */ FPUSH(R_F32((u32)(0x921c20u)));
    /* 00525bf1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00525bf3: jmp 0x525c0f */ goto L_00525c0f;
L_00525bf5:; BB(0x00525bf5);
    /* 00525bf5: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00525bf8: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00525bfa: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x525bfdu); call_ind(t); }
    /* 00525bfd: fld dword ptr [0x921c20] */ FPUSH(R_F32((u32)(0x921c20u)));
    /* 00525c03: fld dword ptr [ebp + 0x30c] */ FPUSH(R_F32((u32)(r_ebp+0x30cu)));
    /* 00525c09: fld dword ptr [ebp + 0x314] */ FPUSH(R_F32((u32)(r_ebp+0x314u)));
L_00525c0f:; BB(0x00525c0f);
    /* 00525c0f: fld dword ptr [0x921c1c] */ FPUSH(R_F32((u32)(0x921c1cu)));
    /* 00525c15: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 00525c17: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00525c19: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00525c1b: fstp dword ptr [ebp + 0x30c] */ W_F32((u32)(r_ebp+0x30cu), ST(0)); FPOP();
    /* 00525c21: fstp dword ptr [ebp + 0x314] */ W_F32((u32)(r_ebp+0x314u), ST(0)); FPOP();
    /* 00525c27: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00525c2a: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00525c2d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00525c2f: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 00525c37: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x525c3cu); f_00772b44();
    /* 00525c3c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00525c3e: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x525c43u); f_007b6880();
    /* 00525c43: mov eax, dword ptr [ebp + 0xb4] */ r_eax = R32((u32)(r_ebp+0xb4u));
    /* 00525c49: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00525c4c: je 0x525c72 */ if (fZ) goto L_00525c72;
L_00525c4e:; BB(0x00525c4e);
    /* 00525c4e: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 00525c51: movzx edx, word ptr [ebp + 0x334] */ r_edx = (u32)R16((u32)(r_ebp+0x334u));
    /* 00525c58: and eax, 0xfffffdff */ {  u32 a = r_eax; u32 b = 0xfffffdffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00525c5d: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 00525c60: movzx eax, word ptr [ebp + 0x37c] */ r_eax = (u32)R16((u32)(r_ebp+0x37cu));
    /* 00525c67: mov word ptr [ebp + 0x346], dx */ W16((u32)(r_ebp+0x346u), (u16)r_edx);
    /* 00525c6e: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00525c70: jne 0x525c77 */ if (!fZ) goto L_00525c77;
L_00525c72:; BB(0x00525c72);
    /* 00525c72: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00525c75: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00525c76: ret  */ FN_RET(0x00525b8c); r_esp += 4; return;
L_00525c77:; BB(0x00525c77);
    /* 00525c77: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00525c79: call 0x525c90 */ r_esp -= 4; W32(r_esp, 0x525c7eu); f_00525c90();
    /* 00525c7e: mov eax, 4 */ r_eax = 0x4u;
    /* 00525c83: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 00525c8a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00525c8d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00525c8e: ret  */ FN_RET(0x00525b8c); r_esp += 4; return;
}

void f_00525c90(void) /* sub_525C90 */
{
    FN_ENTER(0x00525c90);
    /* 00525c90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00525c91: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00525c94: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00525c96: movsx eax, word ptr [ebp + 0x37c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x37cu));
    /* 00525c9d: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00525c9f: jne 0x525cec */ if (!fZ) goto L_00525cec;
L_00525ca1:; BB(0x00525ca1);
    /* 00525ca1: or eax, 0xffff0002 */ {  u32 a = r_eax; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00525ca6: mov word ptr [ebp + 0x37c], ax */ W16((u32)(r_ebp+0x37cu), (u16)r_eax);
    /* 00525cad: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00525caf: mov word ptr [ebp + 0x39c], ax */ W16((u32)(r_ebp+0x39cu), (u16)r_eax);
    /* 00525cb6: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00525cb8: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x525cbdu); f_007751b0();
    /* 00525cbd: fld dword ptr [0x921c18] */ FPUSH(R_F32((u32)(0x921c18u)));
    /* 00525cc3: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 00525cc5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00525cc7: fmul dword ptr [0x921c14] */ ST(0) = ST(0) * R_F32((u32)(0x921c14u));
    /* 00525ccd: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 00525ccf: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00525cd2: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00525cd6: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00525cdb: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00525cdf: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00525ce3: fistp dword ptr [ebp + 0x398] */ W32((u32)(r_ebp+0x398u), (u32)fx_int32(ST(0))); FPOP();
    /* 00525ce9: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
L_00525cec:; BB(0x00525cec);
    /* 00525cec: mov eax, 1 */ r_eax = 0x1u;
    /* 00525cf1: mov word ptr [ebp + 0x32e], ax */ W16((u32)(r_ebp+0x32eu), (u16)r_eax);
    /* 00525cf8: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00525cfb: mov edx, 3 */ r_edx = 0x3u;
    /* 00525d00: mov word ptr [ebp + 0x382], dx */ W16((u32)(r_ebp+0x382u), (u16)r_edx);
    /* 00525d07: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00525d09: call dword ptr [eax + 0xd0] */ { u32 t = R32((u32)(r_eax+0xd0u)); r_esp -= 4; W32(r_esp, 0x525d0fu); call_ind(t); }
    /* 00525d0f: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 00525d12: mov eax, 1 */ r_eax = 0x1u;
    /* 00525d17: mov word ptr [ebp + 0x334], ax */ W16((u32)(r_ebp+0x334u), (u16)r_eax);
    /* 00525d1e: and edx, 0xfffff5ff */ {  u32 a = r_edx; u32 b = 0xfffff5ffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00525d24: mov dword ptr [ebp + 0x30], edx */ W32((u32)(r_ebp+0x30u), r_edx);
    /* 00525d27: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00525d2a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00525d2b: ret  */ FN_RET(0x00525c90); r_esp += 4; return;
}

void f_00525d2c(void) /* sub_525D2C */
{
    FN_ENTER(0x00525d2c);
    /* 00525d2c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00525d2d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00525d2f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00525d31: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x525d36u); f_007aa094();
    /* 00525d36: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 00525d39: test eax, 0x800000 */ {  u32 a = r_eax; u32 b = 0x800000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00525d3e: jne 0x525d4b */ if (!fZ) goto L_00525d4b;
L_00525d40:; BB(0x00525d40);
    /* 00525d40: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00525d42: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00525d44: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00525d46: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x525d4bu); f_00772b44();
L_00525d4b:; BB(0x00525d4b);
    /* 00525d4b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00525d4d: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x525d52u); f_007b6880();
    /* 00525d52: movsx eax, word ptr [ebx + 0x344] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x344u));
    /* 00525d59: lea edx, [eax - 1] */ r_edx = (u32)(r_eax+0xffffffffu);
    /* 00525d5c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00525d5e: jl 0x525d69 */ if ((fS!=fO)) goto L_00525d69;
L_00525d60:; BB(0x00525d60);
    /* 00525d60: mov word ptr [ebx + 0x344], dx */ W16((u32)(r_ebx+0x344u), (u16)r_edx);
    /* 00525d67: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00525d68: ret  */ FN_RET(0x00525d2c); r_esp += 4; return;
L_00525d69:; BB(0x00525d69);
    /* 00525d69: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 00525d6c: movzx edx, word ptr [ebx + 0x342] */ r_edx = (u32)R16((u32)(r_ebx+0x342u));
    /* 00525d73: and eax, 0xfffffeff */ {  u32 a = r_eax; u32 b = 0xfffffeffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00525d78: mov dword ptr [ebx + 0x30], eax */ W32((u32)(r_ebx+0x30u), r_eax);
    /* 00525d7b: movzx eax, word ptr [ebx + 0x334] */ r_eax = (u32)R16((u32)(r_ebx+0x334u));
    /* 00525d82: mov word ptr [ebx + 0x344], dx */ W16((u32)(r_ebx+0x344u), (u16)r_edx);
    /* 00525d89: mov word ptr [ebx + 0x346], ax */ W16((u32)(r_ebx+0x346u), (u16)r_eax);
    /* 00525d90: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00525d91: ret  */ FN_RET(0x00525d2c); r_esp += 4; return;
}

void f_00525d94(void) /* sub_525D94 */
{
    FN_ENTER(0x00525d94);
    /* 00525d94: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00525d95: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00525d96: mov esi, ecx */ r_esi = r_ecx;
    /* 00525d98: mov ecx, esi */ r_ecx = r_esi;
    /* 00525d9a: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x525d9fu); f_007aa094();
    /* 00525d9f: movsx eax, word ptr [esi + 0x330] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x330u));
    /* 00525da6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00525da8: je 0x525f9e */ if (fZ) goto L_00525f9e;
L_00525dae:; BB(0x00525dae);
    /* 00525dae: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00525db1: je 0x525e84 */ if (fZ) goto L_00525e84;
L_00525db7:; BB(0x00525db7);
    /* 00525db7: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00525dba: jne 0x525df4 */ if (!fZ) goto L_00525df4;
L_00525dbc:; BB(0x00525dbc);
    /* 00525dbc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00525dbe: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00525dc0: mov ecx, esi */ r_ecx = r_esi;
    /* 00525dc2: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x525dc7u); f_00772b44();
    /* 00525dc7: movsx eax, word ptr [esi + 0x344] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x344u));
    /* 00525dce: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00525dd1: mov word ptr [esi + 0x344], ax */ W16((u32)(r_esi+0x344u), (u16)r_eax);
    /* 00525dd8: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 00525ddb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00525ddd: jge 0x525f75 */ if ((fS==fO)) goto L_00525f75;
L_00525de3:; BB(0x00525de3);
    /* 00525de3: mov eax, 3 */ r_eax = 0x3u;
    /* 00525de8: mov word ptr [esi + 0x330], ax */ W16((u32)(r_esi+0x330u), (u16)r_eax);
    /* 00525def: jmp 0x525f75 */ goto L_00525f75;
L_00525df4:; BB(0x00525df4);
    /* 00525df4: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00525df7: jne 0x525f75 */ if (!fZ) goto L_00525f75;
L_00525dfd:; BB(0x00525dfd);
    /* 00525dfd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00525dff: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00525e01: fld dword ptr [esi + 0x38] */ FPUSH(R_F32((u32)(r_esi+0x38u)));
    /* 00525e04: fadd dword ptr [esi + 0x30c] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x30cu));
    /* 00525e0a: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 00525e0d: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 00525e10: fld dword ptr [esi + 0x40] */ FPUSH(R_F32((u32)(r_esi+0x40u)));
    /* 00525e13: fadd dword ptr [esi + 0x314] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x314u));
    /* 00525e19: mov ebp, dword ptr [esi + 0x40] */ r_ebp = R32((u32)(r_esi+0x40u));
    /* 00525e1c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00525e1e: fstp dword ptr [esi + 0x38] */ W_F32((u32)(r_esi+0x38u), ST(0)); FPOP();
    /* 00525e21: fstp dword ptr [esi + 0x40] */ W_F32((u32)(r_esi+0x40u), ST(0)); FPOP();
    /* 00525e24: mov dword ptr [esi + 0x44], eax */ W32((u32)(r_esi+0x44u), r_eax);
    /* 00525e27: mov dword ptr [esi + 0x48], edx */ W32((u32)(r_esi+0x48u), r_edx);
    /* 00525e2a: mov dword ptr [esi + 0x4c], ebp */ W32((u32)(r_esi+0x4cu), r_ebp);
    /* 00525e2d: mov ecx, esi */ r_ecx = r_esi;
    /* 00525e2f: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x525e34u); f_00772b44();
    /* 00525e34: mov eax, dword ptr [esi + 0xb4] */ r_eax = R32((u32)(r_esi+0xb4u));
    /* 00525e3a: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00525e3d: je 0x525f75 */ if (fZ) goto L_00525f75;
L_00525e43:; BB(0x00525e43);
    /* 00525e43: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 00525e46: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 00525e48: mov dword ptr [esi + 0x314], 0 */ W32((u32)(r_esi+0x314u), 0x0u);
    /* 00525e52: and eax, 0xffdfffff */ {  u32 a = r_eax; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00525e57: mov dword ptr [esi + 0x310], 0 */ W32((u32)(r_esi+0x310u), 0x0u);
    /* 00525e61: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 00525e64: mov ecx, esi */ r_ecx = r_esi;
    /* 00525e66: mov dword ptr [esi + 0x30c], 0 */ W32((u32)(r_esi+0x30cu), 0x0u);
    /* 00525e70: call dword ptr [edx + 0xf4] */ { u32 t = R32((u32)(r_edx+0xf4u)); r_esp -= 4; W32(r_esp, 0x525e76u); call_ind(t); }
    /* 00525e76: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00525e78: mov word ptr [esi + 0x344], ax */ W16((u32)(r_esi+0x344u), (u16)r_eax);
    /* 00525e7f: jmp 0x525f75 */ goto L_00525f75;
L_00525e84:; BB(0x00525e84);
    /* 00525e84: fld dword ptr [0x921bf8] */ FPUSH(R_F32((u32)(0x921bf8u)));
    /* 00525e8a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00525e8c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00525e8e: fld dword ptr [esi + 0x38] */ FPUSH(R_F32((u32)(r_esi+0x38u)));
    /* 00525e91: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 00525e94: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 00525e97: fld dword ptr [esi + 0x40] */ FPUSH(R_F32((u32)(r_esi+0x40u)));
    /* 00525e9a: mov ebp, dword ptr [esi + 0x40] */ r_ebp = R32((u32)(r_esi+0x40u));
    /* 00525e9d: fld dword ptr [esi + 0x30c] */ FPUSH(R_F32((u32)(r_esi+0x30cu)));
    /* 00525ea3: fld dword ptr [esi + 0x314] */ FPUSH(R_F32((u32)(r_esi+0x314u)));
    /* 00525ea9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00525eab: fadd st(3), st(0) */ ST(3) = ST(3) + ST(0);
    /* 00525ead: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 00525eaf: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00525eb1: fstp dword ptr [esi + 0x38] */ W_F32((u32)(r_esi+0x38u), ST(0)); FPOP();
    /* 00525eb4: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00525eb6: fstp dword ptr [esi + 0x30c] */ W_F32((u32)(r_esi+0x30cu), ST(0)); FPOP();
    /* 00525ebc: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00525ebe: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00525ec0: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00525ec2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00525ec4: fstp dword ptr [esi + 0x40] */ W_F32((u32)(r_esi+0x40u), ST(0)); FPOP();
    /* 00525ec7: fstp dword ptr [esi + 0x314] */ W_F32((u32)(r_esi+0x314u), ST(0)); FPOP();
    /* 00525ecd: mov dword ptr [esi + 0x44], eax */ W32((u32)(r_esi+0x44u), r_eax);
    /* 00525ed0: mov dword ptr [esi + 0x48], edx */ W32((u32)(r_esi+0x48u), r_edx);
    /* 00525ed3: mov dword ptr [esi + 0x4c], ebp */ W32((u32)(r_esi+0x4cu), r_ebp);
    /* 00525ed6: mov ecx, esi */ r_ecx = r_esi;
    /* 00525ed8: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x525eddu); f_00772b44();
    /* 00525edd: push 0x41600000 */ { u32 v = 0x41600000u; r_esp -= 4; W32(r_esp, v); }
    /* 00525ee2: mov ecx, esi */ r_ecx = r_esi;
    /* 00525ee4: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x525ee9u); f_007aaa30();
    /* 00525ee9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00525eeb: je 0x525f75 */ if (fZ) goto L_00525f75;
L_00525ef1:; BB(0x00525ef1);
    /* 00525ef1: mov ecx, esi */ r_ecx = r_esi;
    /* 00525ef3: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x525ef8u); f_00770738();
    /* 00525ef8: mov ebp, eax */ r_ebp = r_eax;
    /* 00525efa: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00525efc: je 0x525f2e */ if (fZ) goto L_00525f2e;
L_00525efe:; BB(0x00525efe);
    /* 00525efe: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00525f03: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00525f04: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00525f07: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00525f09: call dword ptr [edx + 0x50] */ { u32 t = R32((u32)(r_edx+0x50u)); r_esp -= 4; W32(r_esp, 0x525f0cu); call_ind(t); }
    /* 00525f0c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00525f0e: je 0x525f2e */ if (fZ) goto L_00525f2e;
L_00525f10:; BB(0x00525f10);
    /* 00525f10: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00525f15: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00525f16: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00525f19: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00525f1b: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x525f1eu); call_ind(t); }
    /* 00525f1e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00525f20: push 0x40400000 */ { u32 v = 0x40400000u; r_esp -= 4; W32(r_esp, v); }
    /* 00525f25: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00525f26: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00525f29: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00525f2b: call dword ptr [edx + 0x68] */ { u32 t = R32((u32)(r_edx+0x68u)); r_esp -= 4; W32(r_esp, 0x525f2eu); call_ind(t); }
L_00525f2e:; BB(0x00525f2e);
    /* 00525f2e: mov eax, dword ptr [0xaafdb8] */ r_eax = R32((u32)(0xaafdb8u));
    /* 00525f33: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00525f35: jl 0x525f5d */ if ((fS!=fO)) goto L_00525f5d;
L_00525f37:; BB(0x00525f37);
    /* 00525f37: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00525f3a: jle 0x525f7f */ if ((fZ||fS!=fO)) goto L_00525f7f;
L_00525f3c:; BB(0x00525f3c);
    /* 00525f3c: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00525f3f: jne 0x525f5d */ if (!fZ) goto L_00525f5d;
L_00525f41:; BB(0x00525f41);
    /* 00525f41: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x525f46u); f_00807ac0();
    /* 00525f46: lea ebp, [esi + 0x38] */ r_ebp = (u32)(r_esi+0x38u);
    /* 00525f49: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00525f4b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00525f4c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00525f4d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00525f4e: push dword ptr [eax*4 + 0x9bbc78] */ { u32 v = R32((u32)(r_eax*4+0x9bbc78u)); r_esp -= 4; W32(r_esp, v); }
    /* 00525f55: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x525f5au); f_00814298();
    /* 00525f5a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00525f5d:; BB(0x00525f5d);
    /* 00525f5d: mov eax, 2 */ r_eax = 0x2u;
    /* 00525f62: mov word ptr [esi + 0x330], ax */ W16((u32)(r_esi+0x330u), (u16)r_eax);
    /* 00525f69: mov edx, 0x1e */ r_edx = 0x1eu;
    /* 00525f6e: mov word ptr [esi + 0x344], dx */ W16((u32)(r_esi+0x344u), (u16)r_edx);
L_00525f75:; BB(0x00525f75);
    /* 00525f75: mov ecx, esi */ r_ecx = r_esi;
    /* 00525f77: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x525f7cu); f_007b6880();
    /* 00525f7c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00525f7d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00525f7e: ret  */ FN_RET(0x00525d94); r_esp += 4; return;
L_00525f7f:; BB(0x00525f7f);
    /* 00525f7f: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00525f81: push 0xc6 */ { u32 v = 0xc6u; r_esp -= 4; W32(r_esp, v); }
    /* 00525f86: call 0x52d204 */ r_esp -= 4; W32(r_esp, 0x525f8bu); f_0052d204();
    /* 00525f8b: lea ebp, [esi + 0x38] */ r_ebp = (u32)(r_esi+0x38u);
    /* 00525f8e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00525f90: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00525f91: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00525f92: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00525f93: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00525f94: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x525f99u); f_00814298();
    /* 00525f99: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00525f9c: jmp 0x525f5d */ goto L_00525f5d;
L_00525f9e:; BB(0x00525f9e);
    /* 00525f9e: mov eax, dword ptr [esi + 0x358] */ r_eax = R32((u32)(r_esi+0x358u));
    /* 00525fa4: push dword ptr [eax + 8] */ { u32 v = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00525fa7: mov ecx, esi */ r_ecx = r_esi;
    /* 00525fa9: call 0x772358 */ r_esp -= 4; W32(r_esp, 0x525faeu); f_00772358();
    /* 00525fae: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00525fb0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00525fb2: mov ecx, esi */ r_ecx = r_esi;
    /* 00525fb4: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x525fb9u); f_00772b44();
    /* 00525fb9: push 0x41300000 */ { u32 v = 0x41300000u; r_esp -= 4; W32(r_esp, v); }
    /* 00525fbe: mov ecx, esi */ r_ecx = r_esi;
    /* 00525fc0: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x525fc5u); f_007aaa30();
    /* 00525fc5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00525fc7: je 0x525f75 */ if (fZ) goto L_00525f75;
L_00525fc9:; BB(0x00525fc9);
    /* 00525fc9: mov ebp, dword ptr [esi] */ r_ebp = R32((u32)(r_esi));
    /* 00525fcb: mov eax, dword ptr [esi + 0x358] */ r_eax = R32((u32)(r_esi+0x358u));
    /* 00525fd1: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 00525fd4: fmul dword ptr [0x921bf4] */ ST(0) = ST(0) * R_F32((u32)(0x921bf4u));
    /* 00525fda: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 00525fdd: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00525fe0: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00525fe3: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00525fe7: mov ecx, esi */ r_ecx = r_esi;
    /* 00525fe9: call dword ptr [ebp + 0x48] */ { u32 t = R32((u32)(r_ebp+0x48u)); r_esp -= 4; W32(r_esp, 0x525fecu); call_ind(t); }
    /* 00525fec: mov dword ptr [esi + 0x310], 0 */ W32((u32)(r_esi+0x310u), 0x0u);
    /* 00525ff6: mov eax, 1 */ r_eax = 0x1u;
    /* 00525ffb: mov word ptr [esi + 0x330], ax */ W16((u32)(r_esi+0x330u), (u16)r_eax);
    /* 00526002: jmp 0x525f75 */ goto L_00525f75;
}

