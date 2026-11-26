#include "protos.h"

void f_004bcca8(void) /* sub_4BCCA8 */
{
    FN_ENTER(0x004bcca8);
    /* 004bcca8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004bcca9: mov esi, ecx */ r_esi = r_ecx;
    /* 004bccab: mov eax, dword ptr [esi + 0x34] */ r_eax = R32((u32)(r_esi+0x34u));
    /* 004bccae: cmp eax, dword ptr [esi + 0x30] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+0x30u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004bccb1: je 0x4bccf5 */ if (fZ) goto L_004bccf5;
L_004bccb3:; BB(0x004bccb3);
    /* 004bccb3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bccb5: je 0x4bcd0f */ if (fZ) goto L_004bcd0f;
L_004bccb7:; BB(0x004bccb7);
    /* 004bccb7: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bccba: je 0x4bcd03 */ if (fZ) goto L_004bcd03;
L_004bccbc:; BB(0x004bccbc);
    /* 004bccbc: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bccbf: je 0x4bccf7 */ if (fZ) goto L_004bccf7;
L_004bccc1:; BB(0x004bccc1);
    /* 004bccc1: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bccc4: je 0x4bcce8 */ if (fZ) goto L_004bcce8;
L_004bccc6:; BB(0x004bccc6);
    /* 004bccc6: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bccc9: jne 0x4bccd7 */ if (!fZ) goto L_004bccd7;
L_004bcccb:; BB(0x004bcccb);
    /* 004bcccb: mov ecx, esi */ r_ecx = r_esi;
    /* 004bcccd: call 0x4bdbc4 */ r_esp -= 4; W32(r_esp, 0x4bccd2u); f_004bdbc4();
    /* 004bccd2: mov eax, dword ptr [esi + 0x34] */ r_eax = R32((u32)(r_esi+0x34u));
    /* 004bccd5: jmp 0x4bccf2 */ goto L_004bccf2;
L_004bccd7:; BB(0x004bccd7);
    /* 004bccd7: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004bccda: jne 0x4bccf2 */ if (!fZ) goto L_004bccf2;
L_004bccdc:; BB(0x004bccdc);
    /* 004bccdc: mov ecx, esi */ r_ecx = r_esi;
    /* 004bccde: call 0x4bde9c */ r_esp -= 4; W32(r_esp, 0x4bcce3u); f_004bde9c();
    /* 004bcce3: mov eax, dword ptr [esi + 0x34] */ r_eax = R32((u32)(r_esi+0x34u));
    /* 004bcce6: jmp 0x4bccf2 */ goto L_004bccf2;
L_004bcce8:; BB(0x004bcce8);
    /* 004bcce8: mov ecx, esi */ r_ecx = r_esi;
    /* 004bccea: call 0x4bde78 */ r_esp -= 4; W32(r_esp, 0x4bccefu); f_004bde78();
    /* 004bccef: mov eax, dword ptr [esi + 0x34] */ r_eax = R32((u32)(r_esi+0x34u));
L_004bccf2:; BB(0x004bccf2);
    /* 004bccf2: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
L_004bccf5:; BB(0x004bccf5);
    /* 004bccf5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004bccf6: ret  */ FN_RET(0x004bcca8); r_esp += 4; return;
L_004bccf7:; BB(0x004bccf7);
    /* 004bccf7: mov ecx, esi */ r_ecx = r_esi;
    /* 004bccf9: call 0x4bde9c */ r_esp -= 4; W32(r_esp, 0x4bccfeu); f_004bde9c();
    /* 004bccfe: mov eax, dword ptr [esi + 0x34] */ r_eax = R32((u32)(r_esi+0x34u));
    /* 004bcd01: jmp 0x4bccf2 */ goto L_004bccf2;
L_004bcd03:; BB(0x004bcd03);
    /* 004bcd03: mov ecx, esi */ r_ecx = r_esi;
    /* 004bcd05: call 0x4bdeb4 */ r_esp -= 4; W32(r_esp, 0x4bcd0au); f_004bdeb4();
    /* 004bcd0a: mov eax, dword ptr [esi + 0x34] */ r_eax = R32((u32)(r_esi+0x34u));
    /* 004bcd0d: jmp 0x4bccf2 */ goto L_004bccf2;
L_004bcd0f:; BB(0x004bcd0f);
    /* 004bcd0f: mov ecx, esi */ r_ecx = r_esi;
    /* 004bcd11: call 0x4bded0 */ r_esp -= 4; W32(r_esp, 0x4bcd16u); f_004bded0();
    /* 004bcd16: mov eax, dword ptr [esi + 0x34] */ r_eax = R32((u32)(r_esi+0x34u));
    /* 004bcd19: jmp 0x4bccf2 */ goto L_004bccf2;
}

void f_004bcd1c(void) /* sub_4BCD1C */
{
    FN_ENTER(0x004bcd1c);
    /* 004bcd1c: mov eax, dword ptr [ecx + 0x3c] */ r_eax = R32((u32)(r_ecx+0x3cu));
    /* 004bcd1f: and eax, 0xfffffffd */ {  u32 a = r_eax; u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004bcd22: mov dword ptr [ecx + 0x3c], eax */ W32((u32)(r_ecx+0x3cu), r_eax);
    /* 004bcd25: mov dword ptr [ecx + 0x34], 0 */ W32((u32)(r_ecx+0x34u), 0x0u);
    /* 004bcd2c: ret  */ FN_RET(0x004bcd1c); r_esp += 4; return;
}

void f_004bcd30(void) /* sub_4BCD30 */
{
    FN_ENTER(0x004bcd30);
    /* 004bcd30: mov eax, dword ptr [ecx + 0x3c] */ r_eax = R32((u32)(r_ecx+0x3cu));
    /* 004bcd33: and eax, 0xfffffffd */ {  u32 a = r_eax; u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004bcd36: mov dword ptr [ecx + 0x3c], eax */ W32((u32)(r_ecx+0x3cu), r_eax);
    /* 004bcd39: mov dword ptr [ecx + 0x34], 4 */ W32((u32)(r_ecx+0x34u), 0x4u);
    /* 004bcd40: ret  */ FN_RET(0x004bcd30); r_esp += 4; return;
}

void f_004bcd44(void) /* sub_4BCD44 */
{
    FN_ENTER(0x004bcd44);
    /* 004bcd44: mov eax, dword ptr [ecx + 0x3c] */ r_eax = R32((u32)(r_ecx+0x3cu));
    /* 004bcd47: and eax, 0xfffffffd */ {  u32 a = r_eax; u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004bcd4a: mov dword ptr [ecx + 0x3c], eax */ W32((u32)(r_ecx+0x3cu), r_eax);
    /* 004bcd4d: mov dword ptr [ecx + 0x34], 3 */ W32((u32)(r_ecx+0x34u), 0x3u);
    /* 004bcd54: ret  */ FN_RET(0x004bcd44); r_esp += 4; return;
}

void f_004bcd58(void) /* sub_4BCD58 */
{
    FN_ENTER(0x004bcd58);
    /* 004bcd58: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004bcd5b: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 004bcd5e: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 004bcd61: fld dword ptr [ecx + 0x134] */ FPUSH(R_F32((u32)(r_ecx+0x134u)));
    /* 004bcd67: fadd dword ptr [ecx + 0x138] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x138u));
    /* 004bcd6d: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004bcd70: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 004bcd73: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 004bcd76: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 004bcd79: fadd dword ptr [eax*4 + 0x9072c0] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x9072c0u));
    /* 004bcd80: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004bcd82: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004bcd84: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004bcd85: ja 0x4bcd93 */ if ((!fC&&!fZ)) goto L_004bcd93;
L_004bcd87:; BB(0x004bcd87);
    /* 004bcd87: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 004bcd89: fstp dword ptr [ecx + 0x134] */ W_F32((u32)(r_ecx+0x134u), ST(0)); FPOP();
    /* 004bcd8f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004bcd92: ret  */ FN_RET(0x004bcd58); r_esp += 4; return;
L_004bcd93:; BB(0x004bcd93);
    /* 004bcd93: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004bcd95: fstp dword ptr [ecx + 0x134] */ W_F32((u32)(r_ecx+0x134u), ST(0)); FPOP();
    /* 004bcd9b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004bcd9e: ret  */ FN_RET(0x004bcd58); r_esp += 4; return;
}

void f_004bcda0(void) /* sub_4BCDA0 */
{
    FN_ENTER(0x004bcda0);
    /* 004bcda0: mov eax, dword ptr [ecx + 0x3c] */ r_eax = R32((u32)(r_ecx+0x3cu));
    /* 004bcda3: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fO = 0; }
    /* 004bcda5: je 0x4bcdca */ if (fZ) goto L_004bcdca;
L_004bcda7:; BB(0x004bcda7);
    /* 004bcda7: fld dword ptr [ecx + 0x2c] */ FPUSH(R_F32((u32)(r_ecx+0x2cu)));
    /* 004bcdaa: fsub dword ptr [0x907390] */ ST(0) = ST(0) - R_F32((u32)(0x907390u));
    /* 004bcdb0: fcom dword ptr [0x907398] */ fx_compare(ST(0), R_F32((u32)(0x907398u))); 
    /* 004bcdb6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004bcdb8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004bcdb9: jae 0x4bcdc6 */ if (!fC) goto L_004bcdc6;
L_004bcdbb:; BB(0x004bcdbb);
    /* 004bcdbb: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004bcdbd: mov eax, 0x3c23d70a */ r_eax = 0x3c23d70au;
    /* 004bcdc2: mov dword ptr [ecx + 0x2c], eax */ W32((u32)(r_ecx+0x2cu), r_eax);
    /* 004bcdc5: ret  */ FN_RET(0x004bcda0); r_esp += 4; return;
L_004bcdc6:; BB(0x004bcdc6);
    /* 004bcdc6: fstp dword ptr [ecx + 0x2c] */ W_F32((u32)(r_ecx+0x2cu), ST(0)); FPOP();
    /* 004bcdc9: ret  */ FN_RET(0x004bcda0); r_esp += 4; return;
L_004bcdca:; BB(0x004bcdca);
    /* 004bcdca: fld dword ptr [0x907394] */ FPUSH(R_F32((u32)(0x907394u)));
    /* 004bcdd0: fadd dword ptr [ecx + 0x2c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x2cu));
    /* 004bcdd3: fcom dword ptr [0x90739c] */ fx_compare(ST(0), R_F32((u32)(0x90739cu))); 
    /* 004bcdd9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004bcddb: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004bcddc: jbe 0x4bcde9 */ if ((fC||fZ)) goto L_004bcde9;
L_004bcdde:; BB(0x004bcdde);
    /* 004bcdde: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004bcde0: mov eax, 0x3f800000 */ r_eax = 0x3f800000u;
    /* 004bcde5: mov dword ptr [ecx + 0x2c], eax */ W32((u32)(r_ecx+0x2cu), r_eax);
    /* 004bcde8: ret  */ FN_RET(0x004bcda0); r_esp += 4; return;
L_004bcde9:; BB(0x004bcde9);
    /* 004bcde9: fstp dword ptr [ecx + 0x2c] */ W_F32((u32)(r_ecx+0x2cu), ST(0)); FPOP();
    /* 004bcdec: ret  */ FN_RET(0x004bcda0); r_esp += 4; return;
}

void f_004bcdf0(void) /* sub_4BCDF0 */
{
    FN_ENTER(0x004bcdf0);
    /* 004bcdf0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004bcdf1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004bcdf3: call 0x4b9450 */ r_esp -= 4; W32(r_esp, 0x4bcdf8u); f_004b9450();
    /* 004bcdf8: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x4bcdfdu); f_0082d7b0();
    /* 004bcdfd: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 004bce00: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bce02: je 0x4bd137 */ if (fZ) goto L_004bd137;
L_004bce08:; BB(0x004bce08);
    /* 004bce08: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bce0b: je 0x4bd0e8 */ if (fZ) goto L_004bd0e8;
L_004bce11:; BB(0x004bce11);
    /* 004bce11: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004bce14: jge 0x4bd0e3 */ if ((fS==fO)) goto L_004bd0e3;
L_004bce1a:; BB(0x004bce1a);
    /* 004bce1a: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bce1d: jne 0x4bce57 */ if (!fZ) goto L_004bce57;
L_004bce1f:; BB(0x004bce1f);
    /* 004bce1f: mov edx, dword ptr [ebx + 0x130] */ r_edx = R32((u32)(r_ebx+0x130u));
    /* 004bce25: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004bce27: call 0x831308 */ r_esp -= 4; W32(r_esp, 0x4bce2cu); f_00831308();
    /* 004bce2c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bce2e: push dword ptr [ebx + 0x13c] */ { u32 v = R32((u32)(r_ebx+0x13cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004bce34: mov edx, dword ptr [ebx + 0x140] */ r_edx = R32((u32)(r_ebx+0x140u));
    /* 004bce3a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004bce3c: call 0x82df5c */ r_esp -= 4; W32(r_esp, 0x4bce41u); f_0082df5c();
    /* 004bce41: lea ecx, [ebx + 0x24] */ r_ecx = (u32)(r_ebx+0x24u);
    /* 004bce44: call 0x831290 */ r_esp -= 4; W32(r_esp, 0x4bce49u); f_00831290();
    /* 004bce49: push dword ptr [ebx + 0x1c] */ { u32 v = R32((u32)(r_ebx+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004bce4c: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x4bce51u); f_0082e1e8();
    /* 004bce51: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004bce52: jmp 0x4bd130 */ goto L_004bd130;
L_004bce57:; BB(0x004bce57);
    /* 004bce57: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bce5a: jne 0x4bd130 */ if (!fZ) goto L_004bd130;
L_004bce60:; BB(0x004bce60);
    /* 004bce60: lea ecx, [ebx + 0x40] */ r_ecx = (u32)(r_ebx+0x40u);
    /* 004bce63: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x4bce68u); f_0082d838();
    /* 004bce68: mov ecx, 0xa47f18 */ r_ecx = 0xa47f18u;
    /* 004bce6d: call 0x831290 */ r_esp -= 4; W32(r_esp, 0x4bce72u); f_00831290();
    /* 004bce72: push dword ptr [ebx + 0x140] */ { u32 v = R32((u32)(r_ebx+0x140u)); r_esp -= 4; W32(r_esp, v); }
    /* 004bce78: push dword ptr [ebx + 0x13c] */ { u32 v = R32((u32)(r_ebx+0x13cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004bce7e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004bce80: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004bce82: call 0x82df5c */ r_esp -= 4; W32(r_esp, 0x4bce87u); f_0082df5c();
    /* 004bce87: mov eax, dword ptr [ebx + 0x50] */ r_eax = R32((u32)(r_ebx+0x50u));
    /* 004bce8a: mov dword ptr [0xa47c08], eax */ W32((u32)(0xa47c08u), r_eax);
    /* 004bce8f: mov edx, dword ptr [ebx + 0x54] */ r_edx = R32((u32)(r_ebx+0x54u));
    /* 004bce92: mov dword ptr [0xa47c0c], edx */ W32((u32)(0xa47c0cu), r_edx);
    /* 004bce98: mov eax, dword ptr [ebx + 0x58] */ r_eax = R32((u32)(r_ebx+0x58u));
    /* 004bce9b: mov dword ptr [0xa47c10], eax */ W32((u32)(0xa47c10u), r_eax);
    /* 004bcea0: mov eax, dword ptr [ebx + 0xf8] */ r_eax = R32((u32)(r_ebx+0xf8u));
    /* 004bcea6: mov dword ptr [0xa47c1c], eax */ W32((u32)(0xa47c1cu), r_eax);
    /* 004bceab: mov eax, dword ptr [ebx + 0x5c] */ r_eax = R32((u32)(r_ebx+0x5cu));
    /* 004bceae: mov dword ptr [0xa47c40], eax */ W32((u32)(0xa47c40u), r_eax);
    /* 004bceb3: mov eax, dword ptr [ebx + 0x60] */ r_eax = R32((u32)(r_ebx+0x60u));
    /* 004bceb6: mov dword ptr [0xa47c44], eax */ W32((u32)(0xa47c44u), r_eax);
    /* 004bcebb: mov eax, dword ptr [ebx + 0x64] */ r_eax = R32((u32)(r_ebx+0x64u));
    /* 004bcebe: mov dword ptr [0xa47c48], eax */ W32((u32)(0xa47c48u), r_eax);
    /* 004bcec3: mov eax, dword ptr [ebx + 0xfc] */ r_eax = R32((u32)(r_ebx+0xfcu));
    /* 004bcec9: mov dword ptr [0xa47c54], eax */ W32((u32)(0xa47c54u), r_eax);
    /* 004bcece: mov eax, dword ptr [ebx + 0x68] */ r_eax = R32((u32)(r_ebx+0x68u));
    /* 004bced1: mov dword ptr [0xa47c78], eax */ W32((u32)(0xa47c78u), r_eax);
    /* 004bced6: mov eax, dword ptr [ebx + 0x6c] */ r_eax = R32((u32)(r_ebx+0x6cu));
    /* 004bced9: mov dword ptr [0xa47c7c], eax */ W32((u32)(0xa47c7cu), r_eax);
    /* 004bcede: mov eax, dword ptr [ebx + 0x70] */ r_eax = R32((u32)(r_ebx+0x70u));
    /* 004bcee1: mov dword ptr [0xa47c80], eax */ W32((u32)(0xa47c80u), r_eax);
    /* 004bcee6: mov eax, dword ptr [ebx + 0x100] */ r_eax = R32((u32)(r_ebx+0x100u));
    /* 004bceec: mov dword ptr [0xa47c8c], eax */ W32((u32)(0xa47c8cu), r_eax);
    /* 004bcef1: mov eax, dword ptr [ebx + 0x74] */ r_eax = R32((u32)(r_ebx+0x74u));
    /* 004bcef4: mov dword ptr [0xa47cb0], eax */ W32((u32)(0xa47cb0u), r_eax);
    /* 004bcef9: mov eax, dword ptr [ebx + 0x78] */ r_eax = R32((u32)(r_ebx+0x78u));
    /* 004bcefc: mov dword ptr [0xa47cb4], eax */ W32((u32)(0xa47cb4u), r_eax);
    /* 004bcf01: mov eax, dword ptr [ebx + 0x7c] */ r_eax = R32((u32)(r_ebx+0x7cu));
    /* 004bcf04: mov dword ptr [0xa47cb8], eax */ W32((u32)(0xa47cb8u), r_eax);
    /* 004bcf09: mov eax, dword ptr [ebx + 0x104] */ r_eax = R32((u32)(r_ebx+0x104u));
    /* 004bcf0f: mov dword ptr [0xa47cc4], eax */ W32((u32)(0xa47cc4u), r_eax);
    /* 004bcf14: mov eax, dword ptr [ebx + 0x80] */ r_eax = R32((u32)(r_ebx+0x80u));
    /* 004bcf1a: mov dword ptr [0xa47ce8], eax */ W32((u32)(0xa47ce8u), r_eax);
    /* 004bcf1f: mov eax, dword ptr [ebx + 0x84] */ r_eax = R32((u32)(r_ebx+0x84u));
    /* 004bcf25: mov dword ptr [0xa47cec], eax */ W32((u32)(0xa47cecu), r_eax);
    /* 004bcf2a: mov eax, dword ptr [ebx + 0x88] */ r_eax = R32((u32)(r_ebx+0x88u));
    /* 004bcf30: mov dword ptr [0xa47cf0], eax */ W32((u32)(0xa47cf0u), r_eax);
    /* 004bcf35: mov eax, dword ptr [ebx + 0x108] */ r_eax = R32((u32)(r_ebx+0x108u));
    /* 004bcf3b: mov dword ptr [0xa47cfc], eax */ W32((u32)(0xa47cfcu), r_eax);
    /* 004bcf40: mov eax, dword ptr [ebx + 0x8c] */ r_eax = R32((u32)(r_ebx+0x8cu));
    /* 004bcf46: mov dword ptr [0xa47d20], eax */ W32((u32)(0xa47d20u), r_eax);
    /* 004bcf4b: mov eax, dword ptr [ebx + 0x90] */ r_eax = R32((u32)(r_ebx+0x90u));
    /* 004bcf51: mov dword ptr [0xa47d24], eax */ W32((u32)(0xa47d24u), r_eax);
    /* 004bcf56: mov eax, dword ptr [ebx + 0x94] */ r_eax = R32((u32)(r_ebx+0x94u));
    /* 004bcf5c: mov dword ptr [0xa47d28], eax */ W32((u32)(0xa47d28u), r_eax);
    /* 004bcf61: mov eax, dword ptr [ebx + 0x10c] */ r_eax = R32((u32)(r_ebx+0x10cu));
    /* 004bcf67: mov dword ptr [0xa47d34], eax */ W32((u32)(0xa47d34u), r_eax);
    /* 004bcf6c: mov eax, dword ptr [ebx + 0x98] */ r_eax = R32((u32)(r_ebx+0x98u));
    /* 004bcf72: mov dword ptr [0xa47d58], eax */ W32((u32)(0xa47d58u), r_eax);
    /* 004bcf77: mov eax, dword ptr [ebx + 0x9c] */ r_eax = R32((u32)(r_ebx+0x9cu));
    /* 004bcf7d: mov dword ptr [0xa47d5c], eax */ W32((u32)(0xa47d5cu), r_eax);
    /* 004bcf82: mov eax, dword ptr [ebx + 0xa0] */ r_eax = R32((u32)(r_ebx+0xa0u));
    /* 004bcf88: mov dword ptr [0xa47d60], eax */ W32((u32)(0xa47d60u), r_eax);
    /* 004bcf8d: mov eax, dword ptr [ebx + 0x110] */ r_eax = R32((u32)(r_ebx+0x110u));
    /* 004bcf93: mov dword ptr [0xa47d6c], eax */ W32((u32)(0xa47d6cu), r_eax);
    /* 004bcf98: mov eax, dword ptr [ebx + 0xa4] */ r_eax = R32((u32)(r_ebx+0xa4u));
    /* 004bcf9e: mov dword ptr [0xa47d90], eax */ W32((u32)(0xa47d90u), r_eax);
    /* 004bcfa3: mov eax, dword ptr [ebx + 0xa8] */ r_eax = R32((u32)(r_ebx+0xa8u));
    /* 004bcfa9: mov dword ptr [0xa47d94], eax */ W32((u32)(0xa47d94u), r_eax);
    /* 004bcfae: mov eax, dword ptr [ebx + 0xac] */ r_eax = R32((u32)(r_ebx+0xacu));
    /* 004bcfb4: mov dword ptr [0xa47d98], eax */ W32((u32)(0xa47d98u), r_eax);
    /* 004bcfb9: mov eax, dword ptr [ebx + 0x114] */ r_eax = R32((u32)(r_ebx+0x114u));
    /* 004bcfbf: mov dword ptr [0xa47da4], eax */ W32((u32)(0xa47da4u), r_eax);
    /* 004bcfc4: mov eax, dword ptr [ebx + 0xb0] */ r_eax = R32((u32)(r_ebx+0xb0u));
    /* 004bcfca: mov dword ptr [0xa47dc8], eax */ W32((u32)(0xa47dc8u), r_eax);
    /* 004bcfcf: mov eax, dword ptr [ebx + 0xb4] */ r_eax = R32((u32)(r_ebx+0xb4u));
    /* 004bcfd5: mov dword ptr [0xa47dcc], eax */ W32((u32)(0xa47dccu), r_eax);
    /* 004bcfda: mov eax, dword ptr [ebx + 0xb8] */ r_eax = R32((u32)(r_ebx+0xb8u));
    /* 004bcfe0: mov dword ptr [0xa47dd0], eax */ W32((u32)(0xa47dd0u), r_eax);
    /* 004bcfe5: mov eax, dword ptr [ebx + 0x118] */ r_eax = R32((u32)(r_ebx+0x118u));
    /* 004bcfeb: mov dword ptr [0xa47ddc], eax */ W32((u32)(0xa47ddcu), r_eax);
    /* 004bcff0: mov eax, dword ptr [ebx + 0xbc] */ r_eax = R32((u32)(r_ebx+0xbcu));
    /* 004bcff6: mov dword ptr [0xa47e00], eax */ W32((u32)(0xa47e00u), r_eax);
    /* 004bcffb: mov eax, dword ptr [ebx + 0xc0] */ r_eax = R32((u32)(r_ebx+0xc0u));
    /* 004bd001: mov dword ptr [0xa47e04], eax */ W32((u32)(0xa47e04u), r_eax);
    /* 004bd006: mov eax, dword ptr [ebx + 0xc4] */ r_eax = R32((u32)(r_ebx+0xc4u));
    /* 004bd00c: mov dword ptr [0xa47e08], eax */ W32((u32)(0xa47e08u), r_eax);
    /* 004bd011: mov eax, dword ptr [ebx + 0x11c] */ r_eax = R32((u32)(r_ebx+0x11cu));
    /* 004bd017: mov dword ptr [0xa47e14], eax */ W32((u32)(0xa47e14u), r_eax);
    /* 004bd01c: mov eax, dword ptr [ebx + 0xc8] */ r_eax = R32((u32)(r_ebx+0xc8u));
    /* 004bd022: mov dword ptr [0xa47e38], eax */ W32((u32)(0xa47e38u), r_eax);
    /* 004bd027: mov eax, dword ptr [ebx + 0xcc] */ r_eax = R32((u32)(r_ebx+0xccu));
    /* 004bd02d: mov dword ptr [0xa47e3c], eax */ W32((u32)(0xa47e3cu), r_eax);
    /* 004bd032: mov eax, dword ptr [ebx + 0xd0] */ r_eax = R32((u32)(r_ebx+0xd0u));
    /* 004bd038: mov dword ptr [0xa47e40], eax */ W32((u32)(0xa47e40u), r_eax);
    /* 004bd03d: mov eax, dword ptr [ebx + 0x120] */ r_eax = R32((u32)(r_ebx+0x120u));
    /* 004bd043: mov dword ptr [0xa47e4c], eax */ W32((u32)(0xa47e4cu), r_eax);
    /* 004bd048: mov eax, dword ptr [ebx + 0xd4] */ r_eax = R32((u32)(r_ebx+0xd4u));
    /* 004bd04e: mov dword ptr [0xa47e70], eax */ W32((u32)(0xa47e70u), r_eax);
    /* 004bd053: mov eax, dword ptr [ebx + 0xd8] */ r_eax = R32((u32)(r_ebx+0xd8u));
    /* 004bd059: mov dword ptr [0xa47e74], eax */ W32((u32)(0xa47e74u), r_eax);
    /* 004bd05e: mov eax, dword ptr [ebx + 0xdc] */ r_eax = R32((u32)(r_ebx+0xdcu));
    /* 004bd064: mov dword ptr [0xa47e78], eax */ W32((u32)(0xa47e78u), r_eax);
    /* 004bd069: mov eax, dword ptr [ebx + 0x124] */ r_eax = R32((u32)(r_ebx+0x124u));
    /* 004bd06f: mov dword ptr [0xa47e84], eax */ W32((u32)(0xa47e84u), r_eax);
    /* 004bd074: mov eax, dword ptr [ebx + 0xe0] */ r_eax = R32((u32)(r_ebx+0xe0u));
    /* 004bd07a: mov dword ptr [0xa47ea8], eax */ W32((u32)(0xa47ea8u), r_eax);
    /* 004bd07f: mov eax, dword ptr [ebx + 0xe4] */ r_eax = R32((u32)(r_ebx+0xe4u));
    /* 004bd085: mov dword ptr [0xa47eac], eax */ W32((u32)(0xa47eacu), r_eax);
    /* 004bd08a: mov eax, dword ptr [ebx + 0xe8] */ r_eax = R32((u32)(r_ebx+0xe8u));
    /* 004bd090: mov dword ptr [0xa47eb0], eax */ W32((u32)(0xa47eb0u), r_eax);
    /* 004bd095: mov eax, dword ptr [ebx + 0x128] */ r_eax = R32((u32)(r_ebx+0x128u));
    /* 004bd09b: mov dword ptr [0xa47ebc], eax */ W32((u32)(0xa47ebcu), r_eax);
    /* 004bd0a0: mov eax, dword ptr [ebx + 0xec] */ r_eax = R32((u32)(r_ebx+0xecu));
    /* 004bd0a6: mov dword ptr [0xa47ee0], eax */ W32((u32)(0xa47ee0u), r_eax);
    /* 004bd0ab: mov eax, dword ptr [ebx + 0xf0] */ r_eax = R32((u32)(r_ebx+0xf0u));
    /* 004bd0b1: mov dword ptr [0xa47ee4], eax */ W32((u32)(0xa47ee4u), r_eax);
    /* 004bd0b6: mov eax, dword ptr [ebx + 0xf4] */ r_eax = R32((u32)(r_ebx+0xf4u));
    /* 004bd0bc: mov dword ptr [0xa47ee8], eax */ W32((u32)(0xa47ee8u), r_eax);
    /* 004bd0c1: mov eax, dword ptr [ebx + 0x12c] */ r_eax = R32((u32)(r_ebx+0x12cu));
    /* 004bd0c7: mov dword ptr [0xa47ef4], eax */ W32((u32)(0xa47ef4u), r_eax);
    /* 004bd0cc: add ebx, 0x24 */ {  u32 a = r_ebx; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004bd0cf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004bd0d1: call 0x831290 */ r_esp -= 4; W32(r_esp, 0x4bd0d6u); f_00831290();
    /* 004bd0d6: push 0xa47c00 */ { u32 v = 0xa47c00u; r_esp -= 4; W32(r_esp, v); }
    /* 004bd0db: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x4bd0e0u); f_0082e1e8();
    /* 004bd0e0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004bd0e1: jmp 0x4bd130 */ goto L_004bd130;
L_004bd0e3:; BB(0x004bd0e3);
    /* 004bd0e3: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004bd0e6: jg 0x4bd130 */ if ((!fZ&&fS==fO)) goto L_004bd130;
L_004bd0e8:; BB(0x004bd0e8);
    /* 004bd0e8: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x4bd0edu); f_0082fa9c();
    /* 004bd0ed: mov edx, dword ptr [ebx + 0x130] */ r_edx = R32((u32)(r_ebx+0x130u));
    /* 004bd0f3: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004bd0f5: call 0x831308 */ r_esp -= 4; W32(r_esp, 0x4bd0fau); f_00831308();
    /* 004bd0fa: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bd0fc: push dword ptr [ebx + 0x13c] */ { u32 v = R32((u32)(r_ebx+0x13cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004bd102: mov edx, dword ptr [ebx + 0x140] */ r_edx = R32((u32)(r_ebx+0x140u));
    /* 004bd108: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004bd10a: call 0x82df5c */ r_esp -= 4; W32(r_esp, 0x4bd10fu); f_0082df5c();
    /* 004bd10f: lea ecx, [ebx + 0x24] */ r_ecx = (u32)(r_ebx+0x24u);
    /* 004bd112: call 0x831290 */ r_esp -= 4; W32(r_esp, 0x4bd117u); f_00831290();
    /* 004bd117: push dword ptr [ebx + 0x134] */ { u32 v = R32((u32)(r_ebx+0x134u)); r_esp -= 4; W32(r_esp, v); }
    /* 004bd11d: push dword ptr [ebx + 0x20] */ { u32 v = R32((u32)(r_ebx+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 004bd120: push dword ptr [ebx + 0x1c] */ { u32 v = R32((u32)(r_ebx+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004bd123: call 0x83046c */ r_esp -= 4; W32(r_esp, 0x4bd128u); f_0083046c();
    /* 004bd128: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bd12b: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x4bd130u); f_0082faac();
L_004bd130:; BB(0x004bd130);
    /* 004bd130: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x4bd135u); f_0082da80();
    /* 004bd135: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004bd136: ret  */ FN_RET(0x004bcdf0); r_esp += 4; return;
L_004bd137:; BB(0x004bd137);
    /* 004bd137: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x4bd13cu); f_0082fa9c();
    /* 004bd13c: mov edx, dword ptr [ebx + 0x130] */ r_edx = R32((u32)(r_ebx+0x130u));
    /* 004bd142: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004bd144: call 0x831308 */ r_esp -= 4; W32(r_esp, 0x4bd149u); f_00831308();
    /* 004bd149: mov edx, dword ptr [ebx + 0x13c] */ r_edx = R32((u32)(r_ebx+0x13cu));
    /* 004bd14f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004bd151: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x4bd156u); f_0082d8bc();
    /* 004bd156: lea ecx, [ebx + 0x24] */ r_ecx = (u32)(r_ebx+0x24u);
    /* 004bd159: call 0x831290 */ r_esp -= 4; W32(r_esp, 0x4bd15eu); f_00831290();
    /* 004bd15e: push dword ptr [ebx + 0x134] */ { u32 v = R32((u32)(r_ebx+0x134u)); r_esp -= 4; W32(r_esp, v); }
    /* 004bd164: push dword ptr [ebx + 0x20] */ { u32 v = R32((u32)(r_ebx+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 004bd167: push dword ptr [ebx + 0x1c] */ { u32 v = R32((u32)(r_ebx+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004bd16a: call 0x83046c */ r_esp -= 4; W32(r_esp, 0x4bd16fu); f_0083046c();
    /* 004bd16f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bd172: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x4bd177u); f_0082faac();
    /* 004bd177: jmp 0x4bd130 */ goto L_004bd130;
}

