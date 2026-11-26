#include "protos.h"

void f_0055d09c(void) /* sub_55D09C */
{
    FN_ENTER(0x0055d09c);
    /* 0055d09c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0055d09d: mov edi, ecx */ r_edi = r_ecx;
    /* 0055d09f: mov ecx, edi */ r_ecx = r_edi;
    /* 0055d0a1: call 0x51f814 */ r_esp -= 4; W32(r_esp, 0x55d0a6u); f_0051f814();
    /* 0055d0a6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0055d0a8: je 0x55d0b1 */ if (fZ) goto L_0055d0b1;
L_0055d0aa:; BB(0x0055d0aa);
    /* 0055d0aa: mov ecx, edi */ r_ecx = r_edi;
    /* 0055d0ac: call 0x55ca5c */ r_esp -= 4; W32(r_esp, 0x55d0b1u); f_0055ca5c();
L_0055d0b1:; BB(0x0055d0b1);
    /* 0055d0b1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0055d0b2: ret  */ FN_RET(0x0055d09c); r_esp += 4; return;
}

void f_0055d0b4(void) /* sub_55D0B4 */
{
    FN_ENTER(0x0055d0b4);
    /* 0055d0b4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0055d0b5: mov edi, ecx */ r_edi = r_ecx;
    /* 0055d0b7: mov ecx, edi */ r_ecx = r_edi;
    /* 0055d0b9: call 0x51f814 */ r_esp -= 4; W32(r_esp, 0x55d0beu); f_0051f814();
    /* 0055d0be: push 0x41700000 */ { u32 v = 0x41700000u; r_esp -= 4; W32(r_esp, v); }
    /* 0055d0c3: mov ecx, edi */ r_ecx = r_edi;
    /* 0055d0c5: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0055d0c7: push 0x43c80000 */ { u32 v = 0x43c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0055d0cc: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x55d0cfu); call_ind(t); }
    /* 0055d0cf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0055d0d1: je 0x55d11a */ if (fZ) goto L_0055d11a;
L_0055d0d3:; BB(0x0055d0d3);
    /* 0055d0d3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0055d0d5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055d0d6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055d0d7: mov ecx, edi */ r_ecx = r_edi;
    /* 0055d0d9: call 0x520cf8 */ r_esp -= 4; W32(r_esp, 0x55d0deu); f_00520cf8();
    /* 0055d0de: call 0x578b38 */ r_esp -= 4; W32(r_esp, 0x55d0e3u); f_00578b38();
    /* 0055d0e3: mov ecx, dword ptr [edi + 0x24] */ r_ecx = R32((u32)(r_edi+0x24u));
    /* 0055d0e6: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x55d0ebu); f_00829cc8();
    /* 0055d0eb: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x55d0f0u); f_0082d7b0();
    /* 0055d0f0: lea ecx, [edi + 0x38] */ r_ecx = (u32)(r_edi+0x38u);
    /* 0055d0f3: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x55d0f8u); f_0082d838();
    /* 0055d0f8: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 0055d0fb: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0055d0fd: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x55d102u); f_0082d8bc();
    /* 0055d102: call 0x520d08 */ r_esp -= 4; W32(r_esp, 0x55d107u); f_00520d08();
    /* 0055d107: push dword ptr [edi + 0x34] */ { u32 v = R32((u32)(r_edi+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 0055d10a: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x55d10fu); f_0082e1e8();
    /* 0055d10f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0055d110: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x55d115u); f_0082da80();
    /* 0055d115: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x55d11au); f_0082dab0();
L_0055d11a:; BB(0x0055d11a);
    /* 0055d11a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0055d11b: ret  */ FN_RET(0x0055d0b4); r_esp += 4; return;
}

void f_0055d11c(void) /* sub_55D11C */
{
    FN_ENTER(0x0055d11c);
    /* 0055d11c: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0055d120: cmp eax, 0x12 */ {  u32 a = r_eax; u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0055d123: ja 0x55d21a */ if ((!fC&&!fZ)) goto L_0055d21a;
L_0055d129:; BB(0x0055d129);
    /* 0055d129: mov eax, dword ptr [eax*4 + 0x925500] */ r_eax = R32((u32)(r_eax*4+0x925500u));
    /* 0055d130: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0055d21a:; BB(0x0055d21a);
    /* 0055d21a: ret 8 */ FN_RET(0x0055d11c); r_esp += 12; return;
}

void f_0055d132(void)
{
    FN_ENTER(0x0055d132);
    /* 0055d132: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0055d136: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055d137: call 0x55d220 */ r_esp -= 4; W32(r_esp, 0x55d13cu); f_0055d220();
    /* 0055d13c: jmp 0x55d21a */ goto L_0055d21a;
L_0055d21a:; BB(0x0055d21a);
    /* 0055d21a: ret 8 */ FN_RET(0x0055d132); r_esp += 12; return;
}

void f_0055d141(void)
{
    FN_ENTER(0x0055d141);
    /* 0055d141: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0055d145: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055d146: call 0x55d2ac */ r_esp -= 4; W32(r_esp, 0x55d14bu); f_0055d2ac();
    /* 0055d14b: jmp 0x55d21a */ goto L_0055d21a;
L_0055d21a:; BB(0x0055d21a);
    /* 0055d21a: ret 8 */ FN_RET(0x0055d141); r_esp += 12; return;
}

void f_0055d150(void)
{
    FN_ENTER(0x0055d150);
    /* 0055d150: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0055d154: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055d155: call 0x55d32c */ r_esp -= 4; W32(r_esp, 0x55d15au); f_0055d32c();
    /* 0055d15a: jmp 0x55d21a */ goto L_0055d21a;
L_0055d21a:; BB(0x0055d21a);
    /* 0055d21a: ret 8 */ FN_RET(0x0055d150); r_esp += 12; return;
}

void f_0055d15f(void)
{
    FN_ENTER(0x0055d15f);
    /* 0055d15f: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 0055d163: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055d164: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0055d166: call dword ptr [eax + 0x1c8] */ { u32 t = R32((u32)(r_eax+0x1c8u)); r_esp -= 4; W32(r_esp, 0x55d16cu); call_ind(t); }
    /* 0055d16c: jmp 0x55d21a */ goto L_0055d21a;
L_0055d21a:; BB(0x0055d21a);
    /* 0055d21a: ret 8 */ FN_RET(0x0055d15f); r_esp += 12; return;
}

void f_0055d171(void)
{
    FN_ENTER(0x0055d171);
    /* 0055d171: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0055d175: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055d176: call 0x55d4e8 */ r_esp -= 4; W32(r_esp, 0x55d17bu); f_0055d4e8();
    /* 0055d17b: jmp 0x55d21a */ goto L_0055d21a;
L_0055d21a:; BB(0x0055d21a);
    /* 0055d21a: ret 8 */ FN_RET(0x0055d171); r_esp += 12; return;
}

void f_0055d180(void)
{
    FN_ENTER(0x0055d180);
    /* 0055d180: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0055d184: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055d185: call 0x55d800 */ r_esp -= 4; W32(r_esp, 0x55d18au); f_0055d800();
    /* 0055d18a: jmp 0x55d21a */ goto L_0055d21a;
L_0055d21a:; BB(0x0055d21a);
    /* 0055d21a: ret 8 */ FN_RET(0x0055d180); r_esp += 12; return;
}

void f_0055d18f(void)
{
    FN_ENTER(0x0055d18f);
    /* 0055d18f: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0055d193: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055d194: call 0x55d8d4 */ r_esp -= 4; W32(r_esp, 0x55d199u); f_0055d8d4();
    /* 0055d199: jmp 0x55d21a */ goto L_0055d21a;
L_0055d21a:; BB(0x0055d21a);
    /* 0055d21a: ret 8 */ FN_RET(0x0055d18f); r_esp += 12; return;
}

void f_0055d19e(void)
{
    FN_ENTER(0x0055d19e);
    /* 0055d19e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0055d1a2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055d1a3: call 0x55d9cc */ r_esp -= 4; W32(r_esp, 0x55d1a8u); f_0055d9cc();
    /* 0055d1a8: jmp 0x55d21a */ goto L_0055d21a;
L_0055d21a:; BB(0x0055d21a);
    /* 0055d21a: ret 8 */ FN_RET(0x0055d19e); r_esp += 12; return;
}

void f_0055d1aa(void)
{
    FN_ENTER(0x0055d1aa);
    /* 0055d1aa: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0055d1ae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055d1af: call 0x55dd78 */ r_esp -= 4; W32(r_esp, 0x55d1b4u); f_0055dd78();
    /* 0055d1b4: jmp 0x55d21a */ goto L_0055d21a;
L_0055d21a:; BB(0x0055d21a);
    /* 0055d21a: ret 8 */ FN_RET(0x0055d1aa); r_esp += 12; return;
}

void f_0055d1b6(void)
{
    FN_ENTER(0x0055d1b6);
    /* 0055d1b6: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0055d1ba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055d1bb: call 0x55e488 */ r_esp -= 4; W32(r_esp, 0x55d1c0u); f_0055e488();
    /* 0055d1c0: jmp 0x55d21a */ goto L_0055d21a;
L_0055d21a:; BB(0x0055d21a);
    /* 0055d21a: ret 8 */ FN_RET(0x0055d1b6); r_esp += 12; return;
}

void f_0055d1c2(void)
{
    FN_ENTER(0x0055d1c2);
    /* 0055d1c2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0055d1c6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055d1c7: call 0x55ebb8 */ r_esp -= 4; W32(r_esp, 0x55d1ccu); f_0055ebb8();
    /* 0055d1cc: jmp 0x55d21a */ goto L_0055d21a;
L_0055d21a:; BB(0x0055d21a);
    /* 0055d21a: ret 8 */ FN_RET(0x0055d1c2); r_esp += 12; return;
}

void f_0055d1ce(void)
{
    FN_ENTER(0x0055d1ce);
    /* 0055d1ce: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 0055d1d2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055d1d3: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0055d1d5: call dword ptr [eax + 0x1c4] */ { u32 t = R32((u32)(r_eax+0x1c4u)); r_esp -= 4; W32(r_esp, 0x55d1dbu); call_ind(t); }
    /* 0055d1db: jmp 0x55d21a */ goto L_0055d21a;
L_0055d21a:; BB(0x0055d21a);
    /* 0055d21a: ret 8 */ FN_RET(0x0055d1ce); r_esp += 12; return;
}

void f_0055d1dd(void)
{
    FN_ENTER(0x0055d1dd);
    /* 0055d1dd: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 0055d1e1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055d1e2: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0055d1e4: call dword ptr [eax + 0x1c0] */ { u32 t = R32((u32)(r_eax+0x1c0u)); r_esp -= 4; W32(r_esp, 0x55d1eau); call_ind(t); }
    /* 0055d1ea: jmp 0x55d21a */ goto L_0055d21a;
L_0055d21a:; BB(0x0055d21a);
    /* 0055d21a: ret 8 */ FN_RET(0x0055d1dd); r_esp += 12; return;
}

void f_0055d1ec(void)
{
    FN_ENTER(0x0055d1ec);
    /* 0055d1ec: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0055d1f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055d1f1: call 0x55ede4 */ r_esp -= 4; W32(r_esp, 0x55d1f6u); f_0055ede4();
    /* 0055d1f6: jmp 0x55d21a */ goto L_0055d21a;
L_0055d21a:; BB(0x0055d21a);
    /* 0055d21a: ret 8 */ FN_RET(0x0055d1ec); r_esp += 12; return;
}

void f_0055d1f8(void)
{
    FN_ENTER(0x0055d1f8);
    /* 0055d1f8: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0055d1fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055d1fd: call 0x55eefc */ r_esp -= 4; W32(r_esp, 0x55d202u); f_0055eefc();
    /* 0055d202: jmp 0x55d21a */ goto L_0055d21a;
L_0055d21a:; BB(0x0055d21a);
    /* 0055d21a: ret 8 */ FN_RET(0x0055d1f8); r_esp += 12; return;
}

void f_0055d204(void)
{
    FN_ENTER(0x0055d204);
    /* 0055d204: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0055d208: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055d209: call 0x55f070 */ r_esp -= 4; W32(r_esp, 0x55d20eu); f_0055f070();
    /* 0055d20e: jmp 0x55d21a */ goto L_0055d21a;
L_0055d21a:; BB(0x0055d21a);
    /* 0055d21a: ret 8 */ FN_RET(0x0055d204); r_esp += 12; return;
}

void f_0055d210(void)
{
    FN_ENTER(0x0055d210);
    /* 0055d210: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0055d214: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055d215: call 0x55fa24 */ r_esp -= 4; W32(r_esp, 0x55d21au); f_0055fa24();
    /* 0055d21a: ret 8 */ FN_RET(0x0055d210); r_esp += 12; return;
}

void f_0055d21a(void)
{
    FN_ENTER(0x0055d21a);
    /* 0055d21a: ret 8 */ FN_RET(0x0055d21a); r_esp += 12; return;
}

void f_0055d220(void) /* sub_55D220 */
{
    FN_ENTER(0x0055d220);
    /* 0055d220: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0055d221: mov edi, ecx */ r_edi = r_ecx;
    /* 0055d223: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0055d227: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055d22a: je 0x55d272 */ if (fZ) goto L_0055d272;
L_0055d22c:; BB(0x0055d22c);
    /* 0055d22c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0055d22f: je 0x55d26e */ if (fZ) goto L_0055d26e;
L_0055d231:; BB(0x0055d231);
    /* 0055d231: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0055d234: je 0x55d26e */ if (fZ) goto L_0055d26e;
L_0055d236:; BB(0x0055d236);
    /* 0055d236: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0055d238: jne 0x55d26e */ if (!fZ) goto L_0055d26e;
L_0055d23a:; BB(0x0055d23a);
    /* 0055d23a: mov ecx, edi */ r_ecx = r_edi;
    /* 0055d23c: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x55d241u); f_007aa094();
    /* 0055d241: push 0x3e4ccccd */ { u32 v = 0x3e4ccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 0055d246: push dword ptr [edi + 0x454] */ { u32 v = R32((u32)(r_edi+0x454u)); r_esp -= 4; W32(r_esp, v); }
    /* 0055d24c: fld dword ptr [edi + 0x3c] */ FPUSH(R_F32((u32)(r_edi+0x3cu)));
    /* 0055d24f: fadd dword ptr [edi + 0x3f4] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x3f4u));
    /* 0055d255: push dword ptr [edi + 0x450] */ { u32 v = R32((u32)(r_edi+0x450u)); r_esp -= 4; W32(r_esp, v); }
    /* 0055d25b: fst dword ptr [edi + 0x400] */ W_F32((u32)(r_edi+0x400u), ST(0));
    /* 0055d261: fstp dword ptr [edi + 0x304] */ W_F32((u32)(r_edi+0x304u), ST(0)); FPOP();
    /* 0055d267: mov ecx, edi */ r_ecx = r_edi;
    /* 0055d269: call 0x520adc */ r_esp -= 4; W32(r_esp, 0x55d26eu); f_00520adc();
L_0055d26e:; BB(0x0055d26e);
    /* 0055d26e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0055d26f: ret 4 */ FN_RET(0x0055d220); r_esp += 8; return;
L_0055d272:; BB(0x0055d272);
    /* 0055d272: fld dword ptr [edi + 0x3c] */ FPUSH(R_F32((u32)(r_edi+0x3cu)));
    /* 0055d275: fadd dword ptr [edi + 0x3f4] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x3f4u));
    /* 0055d27b: mov ecx, dword ptr [edi + 0x60] */ r_ecx = R32((u32)(r_edi+0x60u));
    /* 0055d27e: fstp dword ptr [edi + 0x400] */ W_F32((u32)(r_edi+0x400u), ST(0)); FPOP();
    /* 0055d284: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0055d286: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 0055d28d: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x55d292u); f_0082dcbc();
    /* 0055d292: mov ecx, dword ptr [edi + 0x60] */ r_ecx = R32((u32)(r_edi+0x60u));
    /* 0055d295: fstp dword ptr [edi + 0x450] */ W_F32((u32)(r_edi+0x450u), ST(0)); FPOP();
    /* 0055d29b: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x55d2a0u); f_0082ddd8();
    /* 0055d2a0: fstp dword ptr [edi + 0x454] */ W_F32((u32)(r_edi+0x454u), ST(0)); FPOP();
    /* 0055d2a6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0055d2a7: ret 4 */ FN_RET(0x0055d220); r_esp += 8; return;
}

void f_0055d2ac(void) /* sub_55D2AC */
{
    FN_ENTER(0x0055d2ac);
    /* 0055d2ac: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0055d2ad: mov edi, ecx */ r_edi = r_ecx;
    /* 0055d2af: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0055d2b3: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055d2b6: je 0x55d319 */ if (fZ) goto L_0055d319;
L_0055d2b8:; BB(0x0055d2b8);
    /* 0055d2b8: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0055d2bb: je 0x55d315 */ if (fZ) goto L_0055d315;
L_0055d2bd:; BB(0x0055d2bd);
    /* 0055d2bd: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0055d2c0: je 0x55d315 */ if (fZ) goto L_0055d315;
L_0055d2c2:; BB(0x0055d2c2);
    /* 0055d2c2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0055d2c4: jne 0x55d315 */ if (!fZ) goto L_0055d315;
L_0055d2c6:; BB(0x0055d2c6);
    /* 0055d2c6: mov ecx, edi */ r_ecx = r_edi;
    /* 0055d2c8: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x55d2cdu); f_007aa094();
    /* 0055d2cd: mov eax, dword ptr [edi + 0x43c] */ r_eax = R32((u32)(r_edi+0x43cu));
    /* 0055d2d3: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0055d2d6: cmp eax, 0x5a */ {  u32 a = r_eax; u32 b = 0x5au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0055d2d9: jg 0x55d2e5 */ if ((!fZ&&fS==fO)) goto L_0055d2e5;
L_0055d2db:; BB(0x0055d2db);
    /* 0055d2db: mov dword ptr [edi + 0x43c], eax */ W32((u32)(r_edi+0x43cu), r_eax);
    /* 0055d2e1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0055d2e2: ret 4 */ FN_RET(0x0055d2ac); r_esp += 8; return;
L_0055d2e5:; BB(0x0055d2e5);
    /* 0055d2e5: movsx edx, word ptr [edi + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0xb8u));
    /* 0055d2ec: mov dword ptr [edi + 0x43c], 0 */ W32((u32)(r_edi+0x43cu), 0x0u);
    /* 0055d2f6: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0055d2f9: movsx eax, dx */ r_eax = (u32)(i32)(i16)(u16)r_edx;
    /* 0055d2fc: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0055d2ff: jge 0x55d30c */ if ((fS==fO)) goto L_0055d30c;
L_0055d301:; BB(0x0055d301);
    /* 0055d301: mov word ptr [edi + 0xb8], dx */ W16((u32)(r_edi+0xb8u), (u16)r_edx);
    /* 0055d308: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0055d309: ret 4 */ FN_RET(0x0055d2ac); r_esp += 8; return;
L_0055d30c:; BB(0x0055d30c);
    /* 0055d30c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0055d30e: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
L_0055d315:; BB(0x0055d315);
    /* 0055d315: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0055d316: ret 4 */ FN_RET(0x0055d2ac); r_esp += 8; return;
L_0055d319:; BB(0x0055d319);
    /* 0055d319: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0055d31b: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 0055d322: mov dword ptr [edi + 0x43c], eax */ W32((u32)(r_edi+0x43cu), r_eax);
    /* 0055d328: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0055d329: ret 4 */ FN_RET(0x0055d2ac); r_esp += 8; return;
}

void f_0055d32c(void) /* sub_55D32C */
{
    FN_ENTER(0x0055d32c);
    /* 0055d32c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0055d32d: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0055d32f: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0055d333: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055d336: je 0x55d42a */ if (fZ) goto L_0055d42a;
L_0055d33c:; BB(0x0055d33c);
    /* 0055d33c: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055d33f: je 0x55d410 */ if (fZ) goto L_0055d410;
L_0055d345:; BB(0x0055d345);
    /* 0055d345: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0055d347: jne 0x55d426 */ if (!fZ) goto L_0055d426;
L_0055d34d:; BB(0x0055d34d);
    /* 0055d34d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055d34f: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x55d354u); f_007aa094();
    /* 0055d354: push 0x43480000 */ { u32 v = 0x43480000u; r_esp -= 4; W32(r_esp, v); }
    /* 0055d359: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055d35b: call 0x520ea0 */ r_esp -= 4; W32(r_esp, 0x55d360u); f_00520ea0();
    /* 0055d360: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055d362: je 0x55d375 */ if (fZ) goto L_0055d375;
L_0055d364:; BB(0x0055d364);
    /* 0055d364: mov dword ptr [ebp + 0x43c], 2 */ W32((u32)(r_ebp+0x43cu), 0x2u);
    /* 0055d36e: mov eax, 2 */ r_eax = 0x2u;
    /* 0055d373: jmp 0x55d37b */ goto L_0055d37b;
L_0055d375:; BB(0x0055d375);
    /* 0055d375: mov eax, dword ptr [ebp + 0x43c] */ r_eax = R32((u32)(r_ebp+0x43cu));
L_0055d37b:; BB(0x0055d37b);
    /* 0055d37b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055d37d: jne 0x55d3b3 */ if (!fZ) goto L_0055d3b3;
L_0055d37f:; BB(0x0055d37f);
    /* 0055d37f: mov eax, dword ptr [ebp + 0x440] */ r_eax = R32((u32)(r_ebp+0x440u));
    /* 0055d385: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0055d388: mov dword ptr [ebp + 0x440], eax */ W32((u32)(r_ebp+0x440u), r_eax);
    /* 0055d38e: cmp eax, 0x3c */ {  u32 a = r_eax; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055d391: jl 0x55d39d */ if ((fS!=fO)) goto L_0055d39d;
L_0055d393:; BB(0x0055d393);
    /* 0055d393: mov dword ptr [ebp + 0x43c], 1 */ W32((u32)(r_ebp+0x43cu), 0x1u);
L_0055d39d:; BB(0x0055d39d);
    /* 0055d39d: fld dword ptr [ebp + 0x3c] */ FPUSH(R_F32((u32)(r_ebp+0x3cu)));
    /* 0055d3a0: fadd dword ptr [ebp + 0x3fc] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x3fcu));
    /* 0055d3a6: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0055d3a7: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0055d3aa: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055d3ac: call 0x55fb84 */ r_esp -= 4; W32(r_esp, 0x55d3b1u); f_0055fb84();
    /* 0055d3b1: jmp 0x55d401 */ goto L_0055d401;
L_0055d3b3:; BB(0x0055d3b3);
    /* 0055d3b3: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055d3b6: jne 0x55d401 */ if (!fZ) goto L_0055d401;
L_0055d3b8:; BB(0x0055d3b8);
    /* 0055d3b8: lea eax, [ebp + 0x50] */ r_eax = (u32)(r_ebp+0x50u);
    /* 0055d3bb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055d3bc: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055d3be: call 0x5213ec */ r_esp -= 4; W32(r_esp, 0x55d3c3u); f_005213ec();
    /* 0055d3c3: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055d3c5: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x55d3cau); f_00521410();
    /* 0055d3ca: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055d3cc: call 0x55e430 */ r_esp -= 4; W32(r_esp, 0x55d3d1u); f_0055e430();
    /* 0055d3d1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055d3d3: call 0x55d460 */ r_esp -= 4; W32(r_esp, 0x55d3d8u); f_0055d460();
    /* 0055d3d8: fld dword ptr [ebp + 0x3b4] */ FPUSH(R_F32((u32)(r_ebp+0x3b4u)));
    /* 0055d3de: fcomp dword ptr [0x925760] */ fx_compare(ST(0), R_F32((u32)(0x925760u))); FPOP();
    /* 0055d3e4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0055d3e6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0055d3e7: jbe 0x55d401 */ if ((fC||fZ)) goto L_0055d401;
L_0055d3e9:; BB(0x0055d3e9);
    /* 0055d3e9: push 0x3f4ccccd */ { u32 v = 0x3f4ccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 0055d3ee: push dword ptr [ebp + 0x3b0] */ { u32 v = R32((u32)(r_ebp+0x3b0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0055d3f4: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055d3f6: push dword ptr [ebp + 0x3a8] */ { u32 v = R32((u32)(r_ebp+0x3a8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0055d3fc: call 0x520adc */ r_esp -= 4; W32(r_esp, 0x55d401u); f_00520adc();
L_0055d401:; BB(0x0055d401);
    /* 0055d401: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0055d404: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055d406: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x55d40cu); call_ind(t); }
    /* 0055d40c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055d40d: ret 4 */ FN_RET(0x0055d32c); r_esp += 8; return;
L_0055d410:; BB(0x0055d410);
    /* 0055d410: mov eax, dword ptr [ebp + 0x43c] */ r_eax = R32((u32)(r_ebp+0x43cu));
    /* 0055d416: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0055d419: jne 0x55d426 */ if (!fZ) goto L_0055d426;
L_0055d41b:; BB(0x0055d41b);
    /* 0055d41b: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0055d41e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055d420: call dword ptr [eax + 0x1ac] */ { u32 t = R32((u32)(r_eax+0x1acu)); r_esp -= 4; W32(r_esp, 0x55d426u); call_ind(t); }
L_0055d426:; BB(0x0055d426);
    /* 0055d426: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055d427: ret 4 */ FN_RET(0x0055d32c); r_esp += 8; return;
L_0055d42a:; BB(0x0055d42a);
    /* 0055d42a: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0055d42c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055d42e: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x55d433u); f_0051f664();
    /* 0055d433: mov eax, dword ptr [ebp + 0x3d0] */ r_eax = R32((u32)(r_ebp+0x3d0u));
    /* 0055d439: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0055d43c: and eax, 0xffbfffff */ {  u32 a = r_eax; u32 b = 0xffbfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0055d441: mov dword ptr [ebp + 0x3d0], eax */ W32((u32)(r_ebp+0x3d0u), r_eax);
    /* 0055d447: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055d449: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x55d44fu); call_ind(t); }
    /* 0055d44f: mov dword ptr [ebp + 0x43c], 0 */ W32((u32)(r_ebp+0x43cu), 0x0u);
    /* 0055d459: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055d45a: ret 4 */ FN_RET(0x0055d32c); r_esp += 8; return;
}

void f_0055d460(void) /* sub_55D460 */
{
    FN_ENTER(0x0055d460);
    /* 0055d460: fld dword ptr [ecx + 0x3c] */ FPUSH(R_F32((u32)(r_ecx+0x3cu)));
    /* 0055d463: fadd dword ptr [ecx + 0x3f0] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x3f0u));
    /* 0055d469: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0055d46a: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0055d46d: call 0x55d474 */ r_esp -= 4; W32(r_esp, 0x55d472u); f_0055d474();
    /* 0055d472: ret  */ FN_RET(0x0055d460); r_esp += 4; return;
}

void f_0055d474(void) /* sub_55D474 */
{
    FN_ENTER(0x0055d474);
    /* 0055d474: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0055d478: fld dword ptr [0x925754] */ FPUSH(R_F32((u32)(0x925754u)));
    /* 0055d47e: fld dword ptr [ecx + 0x400] */ FPUSH(R_F32((u32)(r_ecx+0x400u)));
    /* 0055d484: fsub st(2), st(0) */ ST(2) = ST(2) - ST(0);
    /* 0055d486: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0055d488: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0055d48a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0055d48c: mov edx, dword ptr [ecx + 0x3d0] */ r_edx = R32((u32)(r_ecx+0x3d0u));
    /* 0055d492: and edx, 0xfff7ffff */ {  u32 a = r_edx; u32 b = 0xfff7ffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r; fO = 0; }
    /* 0055d498: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0055d499: jb 0x55d4ae */ if (fC) goto L_0055d4ae;
L_0055d49b:; BB(0x0055d49b);
    /* 0055d49b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0055d49d: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0055d49f: fstp dword ptr [ecx + 0x400] */ W_F32((u32)(r_ecx+0x400u), ST(0)); FPOP();
    /* 0055d4a5: mov dword ptr [ecx + 0x3d0], edx */ W32((u32)(r_ecx+0x3d0u), r_edx);
    /* 0055d4ab: ret 4 */ FN_RET(0x0055d474); r_esp += 8; return;
L_0055d4ae:; BB(0x0055d4ae);
    /* 0055d4ae: fcomp dword ptr [0x925758] */ fx_compare(ST(0), R_F32((u32)(0x925758u))); FPOP();
    /* 0055d4b4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0055d4b6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0055d4b7: ja 0x55d4ca */ if ((!fC&&!fZ)) goto L_0055d4ca;
L_0055d4b9:; BB(0x0055d4b9);
    /* 0055d4b9: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0055d4bb: fstp dword ptr [ecx + 0x400] */ W_F32((u32)(r_ecx+0x400u), ST(0)); FPOP();
    /* 0055d4c1: mov dword ptr [ecx + 0x3d0], edx */ W32((u32)(r_ecx+0x3d0u), r_edx);
    /* 0055d4c7: ret 4 */ FN_RET(0x0055d474); r_esp += 8; return;
L_0055d4ca:; BB(0x0055d4ca);
    /* 0055d4ca: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0055d4cc: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0055d4ce: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0055d4d2: or edx, 0x80000 */ {  u32 a = r_edx; u32 b = 0x80000u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0055d4d8: mov dword ptr [ecx + 0x400], eax */ W32((u32)(r_ecx+0x400u), r_eax);
    /* 0055d4de: mov dword ptr [ecx + 0x3d0], edx */ W32((u32)(r_ecx+0x3d0u), r_edx);
    /* 0055d4e4: ret 4 */ FN_RET(0x0055d474); r_esp += 8; return;
}

void f_0055d4e8(void) /* sub_55D4E8 */
{
    FN_ENTER(0x0055d4e8);
    /* 0055d4e8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0055d4e9: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0055d4ec: mov esi, ecx */ r_esi = r_ecx;
    /* 0055d4ee: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0055d4f2: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055d4f5: je 0x55d707 */ if (fZ) goto L_0055d707;
L_0055d4fb:; BB(0x0055d4fb);
    /* 0055d4fb: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055d4fe: je 0x55d6e8 */ if (fZ) goto L_0055d6e8;
L_0055d504:; BB(0x0055d504);
    /* 0055d504: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055d506: jne 0x55d6cc */ if (!fZ) goto L_0055d6cc;
L_0055d50c:; BB(0x0055d50c);
    /* 0055d50c: mov ecx, esi */ r_ecx = r_esi;
    /* 0055d50e: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x55d513u); f_007aa094();
    /* 0055d513: mov eax, dword ptr [esi + 0x30c] */ r_eax = R32((u32)(r_esi+0x30cu));
    /* 0055d519: mov edx, dword ptr [esi + 0x310] */ r_edx = R32((u32)(r_esi+0x310u));
    /* 0055d51f: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0055d522: mov eax, dword ptr [esi + 0x314] */ r_eax = R32((u32)(r_esi+0x314u));
    /* 0055d528: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0055d52c: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0055d530: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0055d533: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055d534: call 0x7828e4 */ r_esp -= 4; W32(r_esp, 0x55d539u); f_007828e4();
    /* 0055d539: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 0055d53d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055d540: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055d543: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0055d547: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 0055d54b: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 0055d54f: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0055d553: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0055d556: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0055d55a: mov ecx, esi */ r_ecx = r_esi;
    /* 0055d55c: call 0x5207c4 */ r_esp -= 4; W32(r_esp, 0x55d561u); f_005207c4();
    /* 0055d561: fld dword ptr [0x925750] */ FPUSH(R_F32((u32)(0x925750u)));
    /* 0055d567: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 0055d56b: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0055d56d: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0055d570: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0055d572: mov eax, dword ptr [esi + 0x440] */ r_eax = R32((u32)(r_esi+0x440u));
    /* 0055d578: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 0055d57c: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0055d57e: fstp dword ptr [esi + 0x30c] */ W_F32((u32)(r_esi+0x30cu), ST(0)); FPOP();
    /* 0055d584: fstp dword ptr [esi + 0x314] */ W_F32((u32)(r_esi+0x314u), ST(0)); FPOP();
    /* 0055d58a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055d58c: je 0x55d635 */ if (fZ) goto L_0055d635;
L_0055d592:; BB(0x0055d592);
    /* 0055d592: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0055d594: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055d597: jne 0x55d5ff */ if (!fZ) goto L_0055d5ff;
L_0055d599:; BB(0x0055d599);
    /* 0055d599: fld dword ptr [esi + 0x450] */ FPUSH(R_F32((u32)(r_esi+0x450u)));
    /* 0055d59f: fadd dword ptr [esi + 0x454] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x454u));
    /* 0055d5a5: fcom dword ptr [0x92574c] */ fx_compare(ST(0), R_F32((u32)(0x92574cu))); 
    /* 0055d5ab: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0055d5ad: fld dword ptr [esi + 0x400] */ FPUSH(R_F32((u32)(r_esi+0x400u)));
    /* 0055d5b3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0055d5b5: fst dword ptr [esi + 0x450] */ W_F32((u32)(r_esi+0x450u), ST(0));
    /* 0055d5bb: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0055d5bd: fst dword ptr [esi + 0x400] */ W_F32((u32)(r_esi+0x400u), ST(0));
    /* 0055d5c3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0055d5c4: jb 0x55d79d */ if (fC) goto L_0055d79d;
L_0055d5ca:; BB(0x0055d5ca);
    /* 0055d5ca: fld dword ptr [esi + 0x3c] */ FPUSH(R_F32((u32)(r_esi+0x3cu)));
    /* 0055d5cd: fadd dword ptr [esi + 0x3f4] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x3f4u));
    /* 0055d5d3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0055d5d5: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 0055d5d7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0055d5d9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0055d5da: jbe 0x55d7a4 */ if ((fC||fZ)) goto L_0055d7a4;
L_0055d5e0:; BB(0x0055d5e0);
    /* 0055d5e0: fstp dword ptr [esi + 0x400] */ W_F32((u32)(r_esi+0x400u), ST(0)); FPOP();
    /* 0055d5e6: mov dword ptr [esi + 0x43c], 0 */ W32((u32)(r_esi+0x43cu), 0x0u);
    /* 0055d5f0: mov dword ptr [esi + 0x440], 2 */ W32((u32)(r_esi+0x440u), 0x2u);
    /* 0055d5fa: jmp 0x55d6bb */ goto L_0055d6bb;
L_0055d5ff:; BB(0x0055d5ff);
    /* 0055d5ff: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055d602: jne 0x55d6bb */ if (!fZ) goto L_0055d6bb;
L_0055d608:; BB(0x0055d608);
    /* 0055d608: mov eax, dword ptr [esi + 0x43c] */ r_eax = R32((u32)(r_esi+0x43cu));
    /* 0055d60e: mov edx, dword ptr [esi + 0x434] */ r_edx = R32((u32)(r_esi+0x434u));
    /* 0055d614: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0055d617: mov dword ptr [esi + 0x43c], eax */ W32((u32)(r_esi+0x43cu), r_eax);
    /* 0055d61d: cmp eax, dword ptr [edx + 0x28] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x28u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055d620: jl 0x55d6bb */ if ((fS!=fO)) goto L_0055d6bb;
L_0055d626:; BB(0x0055d626);
    /* 0055d626: mov dword ptr [esi + 0x440], 3 */ W32((u32)(r_esi+0x440u), 0x3u);
    /* 0055d630: jmp 0x55d6bb */ goto L_0055d6bb;
L_0055d635:; BB(0x0055d635);
    /* 0055d635: fld dword ptr [0x925738] */ FPUSH(R_F32((u32)(0x925738u)));
    /* 0055d63b: fld dword ptr [0x925740] */ FPUSH(R_F32((u32)(0x925740u)));
    /* 0055d641: fadd dword ptr [esi + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x3cu));
    /* 0055d644: fadd dword ptr [esi + 0x3f4] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x3f4u));
    /* 0055d64a: fld dword ptr [esi + 0x450] */ FPUSH(R_F32((u32)(r_esi+0x450u)));
    /* 0055d650: fsub dword ptr [0x925744] */ ST(0) = ST(0) - R_F32((u32)(0x925744u));
    /* 0055d656: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 0055d658: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0055d65a: fld dword ptr [esi + 0x400] */ FPUSH(R_F32((u32)(r_esi+0x400u)));
    /* 0055d660: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0055d661: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0055d663: ja 0x55d667 */ if ((!fC&&!fZ)) goto L_0055d667;
L_0055d665:; BB(0x0055d665);
    /* 0055d665: fst st(1) */ ST(1) = ST(0);
L_0055d667:; BB(0x0055d667);
    /* 0055d667: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0055d669: fst dword ptr [esi + 0x450] */ W_F32((u32)(r_esi+0x450u), ST(0));
    /* 0055d66f: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 0055d671: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0055d673: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 0055d675: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0055d677: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0055d679: fstp dword ptr [esi + 0x400] */ W_F32((u32)(r_esi+0x400u), ST(0)); FPOP();
    /* 0055d67f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0055d680: jbe 0x55d7ab */ if ((fC||fZ)) goto L_0055d7ab;
L_0055d686:; BB(0x0055d686);
    /* 0055d686: fld dword ptr [esi + 0x450] */ FPUSH(R_F32((u32)(r_esi+0x450u)));
    /* 0055d68c: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0055d68e: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0055d690: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0055d692: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0055d694: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0055d695: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0055d697: jb 0x55d69b */ if (fC) goto L_0055d69b;
L_0055d699:; BB(0x0055d699);
    /* 0055d699: fst st(1) */ ST(1) = ST(0);
L_0055d69b:; BB(0x0055d69b);
    /* 0055d69b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0055d69d: fst dword ptr [esi + 0x450] */ W_F32((u32)(r_esi+0x450u), ST(0));
    /* 0055d6a3: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0055d6a5: fdiv dword ptr [0x925748] */ ST(0) = ST(0) / R_F32((u32)(0x925748u));
    /* 0055d6ab: fstp dword ptr [esi + 0x454] */ W_F32((u32)(r_esi+0x454u), ST(0)); FPOP();
    /* 0055d6b1: mov dword ptr [esi + 0x440], 1 */ W32((u32)(r_esi+0x440u), 0x1u);
L_0055d6bb:; BB(0x0055d6bb);
    /* 0055d6bb: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0055d6bd: mov ecx, esi */ r_ecx = r_esi;
    /* 0055d6bf: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x55d6c5u); call_ind(t); }
    /* 0055d6c5: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0055d6c8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0055d6c9: ret 4 */ FN_RET(0x0055d4e8); r_esp += 8; return;
L_0055d6cc:; BB(0x0055d6cc);
    /* 0055d6cc: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055d6cf: jne 0x55d700 */ if (!fZ) goto L_0055d700;
L_0055d6d1:; BB(0x0055d6d1);
    /* 0055d6d1: mov ecx, esi */ r_ecx = r_esi;
    /* 0055d6d3: call 0x51f81c */ r_esp -= 4; W32(r_esp, 0x55d6d8u); f_0051f81c();
    /* 0055d6d8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0055d6da: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 0055d6e1: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0055d6e4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0055d6e5: ret 4 */ FN_RET(0x0055d4e8); r_esp += 8; return;
L_0055d6e8:; BB(0x0055d6e8);
    /* 0055d6e8: mov eax, dword ptr [esi + 0x440] */ r_eax = R32((u32)(r_esi+0x440u));
    /* 0055d6ee: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055d6f1: jne 0x55d700 */ if (!fZ) goto L_0055d700;
L_0055d6f3:; BB(0x0055d6f3);
    /* 0055d6f3: push dword ptr [esi + 0x380] */ { u32 v = R32((u32)(r_esi+0x380u)); r_esp -= 4; W32(r_esp, v); }
    /* 0055d6f9: mov ecx, esi */ r_ecx = r_esi;
    /* 0055d6fb: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x55d700u); f_0051f62c();
L_0055d700:; BB(0x0055d700);
    /* 0055d700: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0055d703: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0055d704: ret 4 */ FN_RET(0x0055d4e8); r_esp += 8; return;
L_0055d707:; BB(0x0055d707);
    /* 0055d707: mov eax, 3 */ r_eax = 0x3u;
    /* 0055d70c: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 0055d713: mov ecx, esi */ r_ecx = r_esi;
    /* 0055d715: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x55d71au); f_007aa094();
    /* 0055d71a: mov ecx, esi */ r_ecx = r_esi;
    /* 0055d71c: call 0x55d7b4 */ r_esp -= 4; W32(r_esp, 0x55d721u); f_0055d7b4();
    /* 0055d721: mov eax, dword ptr [esi + 0x3d0] */ r_eax = R32((u32)(r_esi+0x3d0u));
    /* 0055d727: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 0055d729: and eax, 0xffbfffff */ {  u32 a = r_eax; u32 b = 0xffbfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0055d72e: mov dword ptr [esi + 0x3d0], eax */ W32((u32)(r_esi+0x3d0u), r_eax);
    /* 0055d734: mov ecx, esi */ r_ecx = r_esi;
    /* 0055d736: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x55d73cu); call_ind(t); }
    /* 0055d73c: fld dword ptr [0x92573c] */ FPUSH(R_F32((u32)(0x92573cu)));
    /* 0055d742: fadd dword ptr [esi + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x3cu));
    /* 0055d745: fadd dword ptr [esi + 0x3f4] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x3f4u));
    /* 0055d74b: fcomp dword ptr [esi + 0x400] */ fx_compare(ST(0), R_F32((u32)(r_esi+0x400u))); FPOP();
    /* 0055d751: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0055d753: mov edx, dword ptr [esi + 0x30] */ r_edx = R32((u32)(r_esi+0x30u));
    /* 0055d756: and edx, 0xfeffffff */ {  u32 a = r_edx; u32 b = 0xfeffffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0055d75c: mov dword ptr [esi + 0x43c], 0 */ W32((u32)(r_esi+0x43cu), 0x0u);
    /* 0055d766: mov dword ptr [esi + 0x30], edx */ W32((u32)(r_esi+0x30u), r_edx);
    /* 0055d769: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0055d76a: jae 0x55d778 */ if (!fC) goto L_0055d778;
L_0055d76c:; BB(0x0055d76c);
    /* 0055d76c: mov dword ptr [esi + 0x440], 0 */ W32((u32)(r_esi+0x440u), 0x0u);
    /* 0055d776: jmp 0x55d782 */ goto L_0055d782;
L_0055d778:; BB(0x0055d778);
    /* 0055d778: mov dword ptr [esi + 0x440], 2 */ W32((u32)(r_esi+0x440u), 0x2u);
L_0055d782:; BB(0x0055d782);
    /* 0055d782: mov dword ptr [esi + 0x450], 0 */ W32((u32)(r_esi+0x450u), 0x0u);
    /* 0055d78c: mov dword ptr [esi + 0x454], 0 */ W32((u32)(r_esi+0x454u), 0x0u);
    /* 0055d796: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0055d799: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0055d79a: ret 4 */ FN_RET(0x0055d4e8); r_esp += 8; return;
L_0055d79d:; BB(0x0055d79d);
    /* 0055d79d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0055d79f: jmp 0x55d6bb */ goto L_0055d6bb;
L_0055d7a4:; BB(0x0055d7a4);
    /* 0055d7a4: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0055d7a6: jmp 0x55d6bb */ goto L_0055d6bb;
L_0055d7ab:; BB(0x0055d7ab);
    /* 0055d7ab: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0055d7ad: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0055d7af: jmp 0x55d6bb */ goto L_0055d6bb;
}

void f_0055d7b4(void) /* sub_55D7B4 */
{
    FN_ENTER(0x0055d7b4);
    /* 0055d7b4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0055d7b5: mov edi, ecx */ r_edi = r_ecx;
    /* 0055d7b7: movsx eax, word ptr [edi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32eu));
    /* 0055d7be: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0055d7c1: je 0x55d7c5 */ if (fZ) goto L_0055d7c5;
L_0055d7c3:; BB(0x0055d7c3);
    /* 0055d7c3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0055d7c4: ret  */ FN_RET(0x0055d7b4); r_esp += 4; return;
L_0055d7c5:; BB(0x0055d7c5);
    /* 0055d7c5: movzx eax, word ptr [edi + 0x494] */ r_eax = (u32)R16((u32)(r_edi+0x494u));
    /* 0055d7cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055d7cd: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x55d7d2u); f_007b4d18();
    /* 0055d7d2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0055d7d3: mov dword ptr [edi + 0x3c8], eax */ W32((u32)(r_edi+0x3c8u), r_eax);
    /* 0055d7d9: mov ecx, eax */ r_ecx = r_eax;
    /* 0055d7db: call 0x55d7e4 */ r_esp -= 4; W32(r_esp, 0x55d7e0u); f_0055d7e4();
    /* 0055d7e0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0055d7e1: ret  */ FN_RET(0x0055d7b4); r_esp += 4; return;
}

void f_0055d7e4(void) /* sub_55D7E4 */
{
    FN_ENTER(0x0055d7e4);
    /* 0055d7e4: mov eax, dword ptr [ecx + 0x3d0] */ r_eax = R32((u32)(r_ecx+0x3d0u));
    /* 0055d7ea: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0055d7ed: mov dword ptr [ecx + 0x3d0], eax */ W32((u32)(r_ecx+0x3d0u), r_eax);
    /* 0055d7f3: mov dword ptr [ecx + 0x40c], 0 */ W32((u32)(r_ecx+0x40cu), 0x0u);
    /* 0055d7fd: ret  */ FN_RET(0x0055d7e4); r_esp += 4; return;
}

void f_0055d800(void) /* sub_55D800 */
{
    FN_ENTER(0x0055d800);
    /* 0055d800: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0055d801: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0055d802: mov edi, ecx */ r_edi = r_ecx;
    /* 0055d804: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0055d808: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055d80b: je 0x55d845 */ if (fZ) goto L_0055d845;
L_0055d80d:; BB(0x0055d80d);
    /* 0055d80d: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0055d810: jne 0x55d840 */ if (!fZ) goto L_0055d840;
L_0055d812:; BB(0x0055d812);
    /* 0055d812: mov eax, dword ptr [edi + 0x3d4] */ r_eax = R32((u32)(r_edi+0x3d4u));
    /* 0055d818: lea ecx, [edi + 0x3d4] */ r_ecx = (u32)(r_edi+0x3d4u);
    /* 0055d81e: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x55d821u); call_ind(t); }
    /* 0055d821: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0055d823: je 0x55d840 */ if (fZ) goto L_0055d840;
L_0055d825:; BB(0x0055d825);
    /* 0055d825: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0055d827: mov ecx, edi */ r_ecx = r_edi;
    /* 0055d829: call dword ptr [eax + 0x1bc] */ { u32 t = R32((u32)(r_eax+0x1bcu)); r_esp -= 4; W32(r_esp, 0x55d82fu); call_ind(t); }
    /* 0055d82f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0055d831: je 0x55d840 */ if (fZ) goto L_0055d840;
L_0055d833:; BB(0x0055d833);
    /* 0055d833: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 0055d837: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0055d83c: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
L_0055d840:; BB(0x0055d840);
    /* 0055d840: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055d841: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0055d842: ret 4 */ FN_RET(0x0055d800); r_esp += 8; return;
L_0055d845:; BB(0x0055d845);
    /* 0055d845: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0055d847: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0055d849: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 0055d850: mov ecx, edi */ r_ecx = r_edi;
    /* 0055d852: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x55d857u); f_0051f664();
    /* 0055d857: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0055d859: mov ecx, edi */ r_ecx = r_edi;
    /* 0055d85b: call dword ptr [eax + 0x184] */ { u32 t = R32((u32)(r_eax+0x184u)); r_esp -= 4; W32(r_esp, 0x55d861u); call_ind(t); }
    /* 0055d861: mov eax, dword ptr [edi + 0x3d0] */ r_eax = R32((u32)(r_edi+0x3d0u));
    /* 0055d867: mov edx, dword ptr [edi + 0x30] */ r_edx = R32((u32)(r_edi+0x30u));
    /* 0055d86a: mov ebp, dword ptr [edi + 0x3cc] */ r_ebp = R32((u32)(r_edi+0x3ccu));
    /* 0055d870: and eax, 0xffbfffff */ {  u32 a = r_eax; u32 b = 0xffbfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0055d875: mov dword ptr [edi + 0x3d0], eax */ W32((u32)(r_edi+0x3d0u), r_eax);
    /* 0055d87b: or edx, 0x800 */ {  u32 a = r_edx; u32 b = 0x800u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0055d881: mov dword ptr [edi + 0x30], edx */ W32((u32)(r_edi+0x30u), r_edx);
    /* 0055d884: cmp ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055d887: je 0x55d8b3 */ if (fZ) goto L_0055d8b3;
L_0055d889:; BB(0x0055d889);
    /* 0055d889: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0055d88a: call 0x8113e4 */ r_esp -= 4; W32(r_esp, 0x55d88fu); f_008113e4();
    /* 0055d88f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0055d890:; BB(0x0055d890);
    /* 0055d890: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 0055d892: mov eax, dword ptr [edi + 0x3d4] */ r_eax = R32((u32)(r_edi+0x3d4u));
    /* 0055d898: lea ebp, [edi + 0x3d4] */ r_ebp = (u32)(r_edi+0x3d4u);
    /* 0055d89e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055d8a0: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x55d8a3u); call_ind(t); }
    /* 0055d8a3: mov eax, dword ptr [edi + 0x3d4] */ r_eax = R32((u32)(r_edi+0x3d4u));
    /* 0055d8a9: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055d8ab: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x55d8aeu); call_ind(t); }
    /* 0055d8ae: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055d8af: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0055d8b0: ret 4 */ FN_RET(0x0055d800); r_esp += 8; return;
L_0055d8b3:; BB(0x0055d8b3);
    /* 0055d8b3: movzx eax, word ptr [edi + 0x494] */ r_eax = (u32)R16((u32)(r_edi+0x494u));
    /* 0055d8ba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055d8bb: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x55d8c0u); f_007b4d18();
    /* 0055d8c0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0055d8c1: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0055d8c2: mov dword ptr [edi + 0x3c8], eax */ W32((u32)(r_edi+0x3c8u), r_eax);
    /* 0055d8c8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0055d8ca: mov ecx, eax */ r_ecx = r_eax;
    /* 0055d8cc: call dword ptr [edx + 0x1dc] */ { u32 t = R32((u32)(r_edx+0x1dcu)); r_esp -= 4; W32(r_esp, 0x55d8d2u); call_ind(t); }
    /* 0055d8d2: jmp 0x55d890 */ goto L_0055d890;
}

void f_0055d8d4(void) /* sub_55D8D4 */
{
    FN_ENTER(0x0055d8d4);
    /* 0055d8d4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0055d8d5: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0055d8d7: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0055d8db: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055d8de: je 0x55d968 */ if (fZ) goto L_0055d968;
L_0055d8e4:; BB(0x0055d8e4);
    /* 0055d8e4: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055d8e7: je 0x55d93b */ if (fZ) goto L_0055d93b;
L_0055d8e9:; BB(0x0055d8e9);
    /* 0055d8e9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0055d8eb: jne 0x55d964 */ if (!fZ) goto L_0055d964;
L_0055d8ed:; BB(0x0055d8ed);
    /* 0055d8ed: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055d8ef: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x55d8f4u); f_007aa094();
    /* 0055d8f4: lea eax, [ebp + 0x50] */ r_eax = (u32)(r_ebp+0x50u);
    /* 0055d8f7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055d8f8: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055d8fa: call 0x5213ec */ r_esp -= 4; W32(r_esp, 0x55d8ffu); f_005213ec();
    /* 0055d8ff: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055d901: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x55d906u); f_00521410();
    /* 0055d906: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055d908: call 0x55e430 */ r_esp -= 4; W32(r_esp, 0x55d90du); f_0055e430();
    /* 0055d90d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055d90f: call 0x55d460 */ r_esp -= 4; W32(r_esp, 0x55d914u); f_0055d460();
    /* 0055d914: push 0x3f4ccccd */ { u32 v = 0x3f4ccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 0055d919: push dword ptr [ebp + 0x3b0] */ { u32 v = R32((u32)(r_ebp+0x3b0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0055d91f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055d921: push dword ptr [ebp + 0x3a8] */ { u32 v = R32((u32)(r_ebp+0x3a8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0055d927: call 0x520adc */ r_esp -= 4; W32(r_esp, 0x55d92cu); f_00520adc();
    /* 0055d92c: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0055d92f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055d931: call dword ptr [eax + 0x168] */ { u32 t = R32((u32)(r_eax+0x168u)); r_esp -= 4; W32(r_esp, 0x55d937u); call_ind(t); }
    /* 0055d937: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055d938: ret 4 */ FN_RET(0x0055d8d4); r_esp += 8; return;
L_0055d93b:; BB(0x0055d93b);
    /* 0055d93b: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0055d93e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055d940: call dword ptr [eax + 0x1b8] */ { u32 t = R32((u32)(r_eax+0x1b8u)); r_esp -= 4; W32(r_esp, 0x55d946u); call_ind(t); }
    /* 0055d946: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0055d948: jne 0x55d964 */ if (!fZ) goto L_0055d964;
L_0055d94a:; BB(0x0055d94a);
    /* 0055d94a: fld dword ptr [ebp + 0x3b4] */ FPUSH(R_F32((u32)(r_ebp+0x3b4u)));
    /* 0055d950: fcomp dword ptr [0x925730] */ fx_compare(ST(0), R_F32((u32)(0x925730u))); FPOP();
    /* 0055d956: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0055d958: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0055d959: jae 0x55d964 */ if (!fC) goto L_0055d964;
L_0055d95b:; BB(0x0055d95b);
    /* 0055d95b: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0055d95d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055d95f: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x55d964u); f_0051f62c();
L_0055d964:; BB(0x0055d964);
    /* 0055d964: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055d965: ret 4 */ FN_RET(0x0055d8d4); r_esp += 8; return;
L_0055d968:; BB(0x0055d968);
    /* 0055d968: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0055d96a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0055d96c: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 0055d973: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055d975: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x55d97au); f_0051f664();
    /* 0055d97a: mov eax, dword ptr [ebp + 0x3d0] */ r_eax = R32((u32)(r_ebp+0x3d0u));
    /* 0055d980: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0055d983: and eax, 0xffbfffff */ {  u32 a = r_eax; u32 b = 0xffbfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0055d988: mov dword ptr [ebp + 0x3d0], eax */ W32((u32)(r_ebp+0x3d0u), r_eax);
    /* 0055d98e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055d990: call dword ptr [edx + 0x184] */ { u32 t = R32((u32)(r_edx+0x184u)); r_esp -= 4; W32(r_esp, 0x55d996u); call_ind(t); }
    /* 0055d996: mov eax, dword ptr [ebp + 0x3cc] */ r_eax = R32((u32)(r_ebp+0x3ccu));
    /* 0055d99c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0055d99f: je 0x55d9af */ if (fZ) goto L_0055d9af;
L_0055d9a1:; BB(0x0055d9a1);
    /* 0055d9a1: mov dword ptr [ebp + 0x410], 0 */ W32((u32)(r_ebp+0x410u), 0x0u);
    /* 0055d9ab: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055d9ac: ret 4 */ FN_RET(0x0055d8d4); r_esp += 8; return;
L_0055d9af:; BB(0x0055d9af);
    /* 0055d9af: movzx eax, word ptr [ebp + 0x494] */ r_eax = (u32)R16((u32)(r_ebp+0x494u));
    /* 0055d9b6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055d9b7: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x55d9bcu); f_007b4d18();
    /* 0055d9bc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0055d9bd: mov dword ptr [ebp + 0x3c8], eax */ W32((u32)(r_ebp+0x3c8u), r_eax);
    /* 0055d9c3: mov ecx, eax */ r_ecx = r_eax;
    /* 0055d9c5: call 0x53fa2c */ r_esp -= 4; W32(r_esp, 0x55d9cau); f_0053fa2c();
    /* 0055d9ca: jmp 0x55d9a1 */ goto L_0055d9a1;
}

void f_0055d9cc(void) /* sub_55D9CC */
{
    FN_ENTER(0x0055d9cc);
    /* 0055d9cc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0055d9cd: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0055d9ce: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0055d9d1: mov esi, ecx */ r_esi = r_ecx;
    /* 0055d9d3: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 0055d9d7: lea ebx, [esi + 0x45c] */ r_ebx = (u32)(r_esi+0x45cu);
    /* 0055d9dd: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055d9e0: je 0x55dcba */ if (fZ) goto L_0055dcba;
L_0055d9e6:; BB(0x0055d9e6);
    /* 0055d9e6: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055d9e9: je 0x55dc84 */ if (fZ) goto L_0055dc84;
L_0055d9ef:; BB(0x0055d9ef);
    /* 0055d9ef: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055d9f1: jne 0x55dc70 */ if (!fZ) goto L_0055dc70;
L_0055d9f7:; BB(0x0055d9f7);
    /* 0055d9f7: mov ecx, esi */ r_ecx = r_esi;
    /* 0055d9f9: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x55d9feu); f_007aa094();
    /* 0055d9fe: push 0x43480000 */ { u32 v = 0x43480000u; r_esp -= 4; W32(r_esp, v); }
    /* 0055da03: mov ecx, esi */ r_ecx = r_esi;
    /* 0055da05: call 0x520ea0 */ r_esp -= 4; W32(r_esp, 0x55da0au); f_00520ea0();
    /* 0055da0a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055da0c: je 0x55dcb2 */ if (fZ) goto L_0055dcb2;
L_0055da12:; BB(0x0055da12);
    /* 0055da12: mov eax, dword ptr [esi + 0x43c] */ r_eax = R32((u32)(r_esi+0x43cu));
    /* 0055da18: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055da1b: jne 0x55dc14 */ if (!fZ) goto L_0055dc14;
L_0055da21:; BB(0x0055da21);
    /* 0055da21: mov eax, dword ptr [esi + 0x440] */ r_eax = R32((u32)(r_esi+0x440u));
    /* 0055da27: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055da29: jne 0x55db13 */ if (!fZ) goto L_0055db13;
L_0055da2f:; BB(0x0055da2f);
    /* 0055da2f: mov ecx, esi */ r_ecx = r_esi;
    /* 0055da31: call 0x5213d8 */ r_esp -= 4; W32(r_esp, 0x55da36u); f_005213d8();
    /* 0055da36: mov ecx, esi */ r_ecx = r_esi;
    /* 0055da38: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x55da3du); f_00521410();
    /* 0055da3d: mov ecx, esi */ r_ecx = r_esi;
    /* 0055da3f: call 0x520bf4 */ r_esp -= 4; W32(r_esp, 0x55da44u); f_00520bf4();
    /* 0055da44: fld dword ptr [0x925728] */ FPUSH(R_F32((u32)(0x925728u)));
    /* 0055da4a: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0055da4c: fcom dword ptr [0x925724] */ fx_compare(ST(0), R_F32((u32)(0x925724u))); 
    /* 0055da52: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0055da54: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0055da55: jb 0x55da61 */ if (fC) goto L_0055da61;
L_0055da57:; BB(0x0055da57);
    /* 0055da57: fld dword ptr [0x92571c] */ FPUSH(R_F32((u32)(0x92571cu)));
    /* 0055da5d: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0055da5f: jmp 0x55da69 */ goto L_0055da69;
L_0055da61:; BB(0x0055da61);
    /* 0055da61: fld dword ptr [0x925720] */ FPUSH(R_F32((u32)(0x925720u)));
    /* 0055da67: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
L_0055da69:; BB(0x0055da69);
    /* 0055da69: fld dword ptr [0x925718] */ FPUSH(R_F32((u32)(0x925718u)));
    /* 0055da6f: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 0055da71: fld dword ptr [0x925714] */ FPUSH(R_F32((u32)(0x925714u)));
    /* 0055da77: fsub dword ptr [esi + 0x3b4] */ ST(0) = ST(0) - R_F32((u32)(r_esi+0x3b4u));
    /* 0055da7d: fld dword ptr [esi + 0x3a8] */ FPUSH(R_F32((u32)(r_esi+0x3a8u)));
    /* 0055da83: fld dword ptr [esi + 0x3b0] */ FPUSH(R_F32((u32)(r_esi+0x3b0u)));
    /* 0055da89: fld dword ptr [esi + 0x3f0] */ FPUSH(R_F32((u32)(r_esi+0x3f0u)));
    /* 0055da8f: fsub dword ptr [esi + 0x3fc] */ ST(0) = ST(0) - R_F32((u32)(r_esi+0x3fcu));
    /* 0055da95: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0055da97: fnstcw word ptr [esp + 0xc] */ W16((u32)(r_esp+0xcu), fcw);
    /* 0055da9b: movzx eax, word ptr [esp + 0xc] */ r_eax = (u32)R16((u32)(r_esp+0xcu));
    /* 0055daa0: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0055daa5: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0055daa9: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 0055daad: fistp dword ptr [esi + 0x44c] */ W32((u32)(r_esi+0x44cu), (u32)fx_int32(ST(0))); FPOP();
    /* 0055dab3: fldcw word ptr [esp + 0xc] */ fcw = R16((u32)(r_esp+0xcu));
    /* 0055dab7: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0055dab9: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0055dabb: mov eax, dword ptr [esi + 0x3b4] */ r_eax = R32((u32)(r_esi+0x3b4u));
    /* 0055dac1: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0055dac3: fmulp st(4) */ ST(4) = ST(4) * ST(0); FPOP();
    /* 0055dac5: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0055dac7: fstp dword ptr [esi + 0x458] */ W_F32((u32)(r_esi+0x458u), ST(0)); FPOP();
    /* 0055dacd: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0055dacf: fstp dword ptr [esi + 0x450] */ W_F32((u32)(r_esi+0x450u), ST(0)); FPOP();
    /* 0055dad5: push 0x220 */ { u32 v = 0x220u; r_esp -= 4; W32(r_esp, v); }
    /* 0055dada: fchs  */ ST(0) = -ST(0);
    /* 0055dadc: fstp dword ptr [esi + 0x45c] */ W_F32((u32)(r_esi+0x45cu), ST(0)); FPOP();
    /* 0055dae2: fchs  */ ST(0) = -ST(0);
    /* 0055dae4: fstp dword ptr [esi + 0x464] */ W_F32((u32)(r_esi+0x464u), ST(0)); FPOP();
    /* 0055daea: mov dword ptr [esi + 0x454], eax */ W32((u32)(r_esi+0x454u), r_eax);
    /* 0055daf0: mov ecx, esi */ r_ecx = r_esi;
    /* 0055daf2: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x55daf7u); f_007879b8();
    /* 0055daf7: mov ecx, eax */ r_ecx = r_eax;
    /* 0055daf9: lea eax, [esi + 0x300] */ r_eax = (u32)(r_esi+0x300u);
    /* 0055daff: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0055db01: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055db02: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055db03: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055db04: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0055db05: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x55db0au); f_00814298();
    /* 0055db0a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055db0d: mov eax, dword ptr [esi + 0x440] */ r_eax = R32((u32)(r_esi+0x440u));
L_0055db13:; BB(0x0055db13);
    /* 0055db13: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0055db16: mov dword ptr [esi + 0x440], eax */ W32((u32)(r_esi+0x440u), r_eax);
    /* 0055db1c: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055db1f: jl 0x55db39 */ if ((fS!=fO)) goto L_0055db39;
L_0055db21:; BB(0x0055db21);
    /* 0055db21: add dword ptr [esi + 0x444], 1 */ { u32 ad = (u32)(r_esi+0x444u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0055db28: mov ecx, esi */ r_ecx = r_esi;
    /* 0055db2a: mov dword ptr [esi + 0x43c], 0 */ W32((u32)(r_esi+0x43cu), 0x0u);
    /* 0055db34: call 0x53fdc4 */ r_esp -= 4; W32(r_esp, 0x55db39u); f_0053fdc4();
L_0055db39:; BB(0x0055db39);
    /* 0055db39: push dword ptr [esi + 0x44c] */ { u32 v = R32((u32)(r_esi+0x44cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0055db3f: fld dword ptr [esi + 0x400] */ FPUSH(R_F32((u32)(r_esi+0x400u)));
    /* 0055db45: fadd dword ptr [esi + 0x450] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x450u));
    /* 0055db4b: fstp dword ptr [esi + 0x400] */ W_F32((u32)(r_esi+0x400u), ST(0)); FPOP();
    /* 0055db51: lea eax, [esi + 0x464] */ r_eax = (u32)(r_esi+0x464u);
    /* 0055db57: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055db58: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0055db59: call 0x782b64 */ r_esp -= 4; W32(r_esp, 0x55db5eu); f_00782b64();
    /* 0055db5e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055db61: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0055db64: fld dword ptr [esi + 0x454] */ FPUSH(R_F32((u32)(r_esi+0x454u)));
    /* 0055db6a: fadd dword ptr [esi + 0x458] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x458u));
    /* 0055db70: fld dword ptr [esi + 0x45c] */ FPUSH(R_F32((u32)(r_esi+0x45cu)));
    /* 0055db76: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0055db78: fadd dword ptr [esi + 0x39c] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x39cu));
    /* 0055db7e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0055db80: fstp dword ptr [esi + 0x454] */ W_F32((u32)(r_esi+0x454u), ST(0)); FPOP();
    /* 0055db86: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0055db89: fld dword ptr [esi + 0x464] */ FPUSH(R_F32((u32)(r_esi+0x464u)));
    /* 0055db8f: fmul dword ptr [esi + 0x454] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x454u));
    /* 0055db95: fadd dword ptr [esi + 0x3a4] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x3a4u));
    /* 0055db9b: lea edx, [esi + 0x38] */ r_edx = (u32)(r_esi+0x38u);
    /* 0055db9e: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0055dba2: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x55dba7u); f_0082f9c4();
    /* 0055dba7: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0055dbaa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055dbab: call 0x7828e4 */ r_esp -= 4; W32(r_esp, 0x55dbb0u); f_007828e4();
    /* 0055dbb0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0055dbb1: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055dbb4: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0055dbb8: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 0055dbbc: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0055dbc0: mov ecx, esi */ r_ecx = r_esi;
    /* 0055dbc2: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0055dbc5: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0055dbc9: call 0x520b10 */ r_esp -= 4; W32(r_esp, 0x55dbceu); f_00520b10();
    /* 0055dbce: fld dword ptr [esi + 0x45c] */ FPUSH(R_F32((u32)(r_esi+0x45cu)));
    /* 0055dbd4: fld dword ptr [esi + 0x464] */ FPUSH(R_F32((u32)(r_esi+0x464u)));
    /* 0055dbda: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0055dbdc: fmul qword ptr [0x9255d8] */ ST(0) = ST(0) * R_F64((u32)(0x9255d8u));
    /* 0055dbe2: fdiv qword ptr [0x9255d0] */ ST(0) = ST(0) / R_F64((u32)(0x9255d0u));
    /* 0055dbe8: fnstcw word ptr [esp + 0xc] */ W16((u32)(r_esp+0xcu), fcw);
    /* 0055dbec: movzx eax, word ptr [esp + 0xc] */ r_eax = (u32)R16((u32)(r_esp+0xcu));
    /* 0055dbf1: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0055dbf6: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0055dbfa: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 0055dbfe: fistp dword ptr [esp + 0x1c] */ W32((u32)(r_esp+0x1cu), (u32)fx_int32(ST(0))); FPOP();
    /* 0055dc02: fldcw word ptr [esp + 0xc] */ fcw = R16((u32)(r_esp+0xcu));
    /* 0055dc06: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0055dc0a: add eax, 0x8000 */ {  u32 a = r_eax; u32 b = 0x8000u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0055dc0f: mov dword ptr [esi + 0x60], eax */ W32((u32)(r_esi+0x60u), r_eax);
    /* 0055dc12: jmp 0x55dc5e */ goto L_0055dc5e;
L_0055dc14:; BB(0x0055dc14);
    /* 0055dc14: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055dc16: jne 0x55dc5e */ if (!fZ) goto L_0055dc5e;
L_0055dc18:; BB(0x0055dc18);
    /* 0055dc18: mov ecx, esi */ r_ecx = r_esi;
    /* 0055dc1a: call 0x5213d8 */ r_esp -= 4; W32(r_esp, 0x55dc1fu); f_005213d8();
    /* 0055dc1f: mov ecx, esi */ r_ecx = r_esi;
    /* 0055dc21: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x55dc26u); f_00521410();
    /* 0055dc26: mov ecx, esi */ r_ecx = r_esi;
    /* 0055dc28: call 0x55e430 */ r_esp -= 4; W32(r_esp, 0x55dc2du); f_0055e430();
    /* 0055dc2d: mov ecx, esi */ r_ecx = r_esi;
    /* 0055dc2f: call 0x55fb5c */ r_esp -= 4; W32(r_esp, 0x55dc34u); f_0055fb5c();
    /* 0055dc34: mov eax, dword ptr [esi + 0x440] */ r_eax = R32((u32)(r_esi+0x440u));
    /* 0055dc3a: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0055dc3d: cmp eax, 0x1e */ {  u32 a = r_eax; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055dc40: jle 0x55dc58 */ if ((fZ||fS!=fO)) goto L_0055dc58;
L_0055dc42:; BB(0x0055dc42);
    /* 0055dc42: mov dword ptr [esi + 0x440], 0 */ W32((u32)(r_esi+0x440u), 0x0u);
    /* 0055dc4c: mov dword ptr [esi + 0x43c], 1 */ W32((u32)(r_esi+0x43cu), 0x1u);
    /* 0055dc56: jmp 0x55dc5e */ goto L_0055dc5e;
L_0055dc58:; BB(0x0055dc58);
    /* 0055dc58: mov dword ptr [esi + 0x440], eax */ W32((u32)(r_esi+0x440u), r_eax);
L_0055dc5e:; BB(0x0055dc5e);
    /* 0055dc5e: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0055dc60: mov ecx, esi */ r_ecx = r_esi;
    /* 0055dc62: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x55dc68u); call_ind(t); }
    /* 0055dc68: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0055dc6b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0055dc6c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0055dc6d: ret 4 */ FN_RET(0x0055d9cc); r_esp += 8; return;
L_0055dc70:; BB(0x0055dc70);
    /* 0055dc70: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055dc73: jne 0x55dcb2 */ if (!fZ) goto L_0055dcb2;
L_0055dc75:; BB(0x0055dc75);
    /* 0055dc75: mov ecx, esi */ r_ecx = r_esi;
    /* 0055dc77: call 0x53fdc4 */ r_esp -= 4; W32(r_esp, 0x55dc7cu); f_0053fdc4();
    /* 0055dc7c: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0055dc7f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0055dc80: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0055dc81: ret 4 */ FN_RET(0x0055d9cc); r_esp += 8; return;
L_0055dc84:; BB(0x0055dc84);
    /* 0055dc84: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0055dc86: mov ecx, esi */ r_ecx = r_esi;
    /* 0055dc88: call dword ptr [eax + 0x1b8] */ { u32 t = R32((u32)(r_eax+0x1b8u)); r_esp -= 4; W32(r_esp, 0x55dc8eu); call_ind(t); }
    /* 0055dc8e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055dc90: jne 0x55dcb2 */ if (!fZ) goto L_0055dcb2;
L_0055dc92:; BB(0x0055dc92);
    /* 0055dc92: mov ecx, esi */ r_ecx = r_esi;
    /* 0055dc94: call 0x55dd5c */ r_esp -= 4; W32(r_esp, 0x55dc99u); f_0055dd5c();
    /* 0055dc99: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055dc9b: jne 0x55dcb2 */ if (!fZ) goto L_0055dcb2;
L_0055dc9d:; BB(0x0055dc9d);
    /* 0055dc9d: mov eax, dword ptr [esi + 0x444] */ r_eax = R32((u32)(r_esi+0x444u));
    /* 0055dca3: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055dca6: jl 0x55dcb2 */ if ((fS!=fO)) goto L_0055dcb2;
L_0055dca8:; BB(0x0055dca8);
    /* 0055dca8: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0055dcaa: mov ecx, esi */ r_ecx = r_esi;
    /* 0055dcac: call dword ptr [eax + 0x1ac] */ { u32 t = R32((u32)(r_eax+0x1acu)); r_esp -= 4; W32(r_esp, 0x55dcb2u); call_ind(t); }
L_0055dcb2:; BB(0x0055dcb2);
    /* 0055dcb2: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0055dcb5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0055dcb6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0055dcb7: ret 4 */ FN_RET(0x0055d9cc); r_esp += 8; return;
L_0055dcba:; BB(0x0055dcba);
    /* 0055dcba: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0055dcbc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0055dcbe: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 0055dcc5: mov ecx, esi */ r_ecx = r_esi;
    /* 0055dcc7: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x55dcccu); f_0051f664();
    /* 0055dccc: mov eax, dword ptr [esi + 0x3d0] */ r_eax = R32((u32)(r_esi+0x3d0u));
    /* 0055dcd2: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 0055dcd4: and eax, 0xffbfffff */ {  u32 a = r_eax; u32 b = 0xffbfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0055dcd9: mov dword ptr [esi + 0x3d0], eax */ W32((u32)(r_esi+0x3d0u), r_eax);
    /* 0055dcdf: mov ecx, esi */ r_ecx = r_esi;
    /* 0055dce1: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x55dce7u); call_ind(t); }
    /* 0055dce7: mov dword ptr [esi + 0x410], 0 */ W32((u32)(r_esi+0x410u), 0x0u);
    /* 0055dcf1: mov ecx, esi */ r_ecx = r_esi;
    /* 0055dcf3: mov dword ptr [esi + 0x43c], 1 */ W32((u32)(r_esi+0x43cu), 0x1u);
    /* 0055dcfd: call 0x53fdf0 */ r_esp -= 4; W32(r_esp, 0x55dd02u); f_0053fdf0();
    /* 0055dd02: mov dword ptr [esi + 0x450], 0 */ W32((u32)(r_esi+0x450u), 0x0u);
    /* 0055dd0c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0055dd0e: mov dword ptr [esi + 0x440], eax */ W32((u32)(r_esi+0x440u), r_eax);
    /* 0055dd14: mov dword ptr [esi + 0x444], eax */ W32((u32)(r_esi+0x444u), r_eax);
    /* 0055dd1a: mov dword ptr [esi + 0x454], 0 */ W32((u32)(r_esi+0x454u), 0x0u);
    /* 0055dd24: mov dword ptr [esi + 0x44c], eax */ W32((u32)(r_esi+0x44cu), r_eax);
    /* 0055dd2a: mov dword ptr [esi + 0x458], 0 */ W32((u32)(r_esi+0x458u), 0x0u);
    /* 0055dd34: mov dword ptr [esi + 0x45c], 0 */ W32((u32)(r_esi+0x45cu), 0x0u);
    /* 0055dd3e: mov dword ptr [esi + 0x460], 0 */ W32((u32)(r_esi+0x460u), 0x0u);
    /* 0055dd48: mov dword ptr [esi + 0x464], 0 */ W32((u32)(r_esi+0x464u), 0x0u);
    /* 0055dd52: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0055dd55: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0055dd56: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0055dd57: ret 4 */ FN_RET(0x0055d9cc); r_esp += 8; return;
}

void f_0055dd5c(void) /* sub_55DD5C */
{
    FN_ENTER(0x0055dd5c);
    /* 0055dd5c: mov eax, dword ptr [ecx + 0x398] */ r_eax = R32((u32)(r_ecx+0x398u));
    /* 0055dd62: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055dd64: je 0x55dd69 */ if (fZ) goto L_0055dd69;
L_0055dd66:; BB(0x0055dd66);
    /* 0055dd66: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0055dd68: ret  */ FN_RET(0x0055dd5c); r_esp += 4; return;
L_0055dd69:; BB(0x0055dd69);
    /* 0055dd69: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0055dd6b: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x55dd70u); f_0051f62c();
    /* 0055dd70: mov eax, 1 */ r_eax = 0x1u;
    /* 0055dd75: ret  */ FN_RET(0x0055dd5c); r_esp += 4; return;
}

void f_0055dd78(void) /* sub_55DD78 */
{
    FN_ENTER(0x0055dd78);
    /* 0055dd78: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0055dd79: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0055dd7a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0055dd7b: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0055dd7e: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0055dd80: mov eax, dword ptr [esp + 0x44] */ r_eax = R32((u32)(r_esp+0x44u));
    /* 0055dd84: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055dd87: je 0x55e3b2 */ if (fZ) goto L_0055e3b2;
L_0055dd8d:; BB(0x0055dd8d);
    /* 0055dd8d: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055dd90: je 0x55dfe8 */ if (fZ) goto L_0055dfe8;
L_0055dd96:; BB(0x0055dd96);
    /* 0055dd96: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055dd98: jne 0x55dfbd */ if (!fZ) goto L_0055dfbd;
L_0055dd9e:; BB(0x0055dd9e);
    /* 0055dd9e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055dda0: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x55dda5u); f_007aa094();
    /* 0055dda5: mov eax, dword ptr [ebp + 0x43c] */ r_eax = R32((u32)(r_ebp+0x43cu));
    /* 0055ddab: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055ddad: jne 0x55ddc5 */ if (!fZ) goto L_0055ddc5;
L_0055ddaf:; BB(0x0055ddaf);
    /* 0055ddaf: push 0x43480000 */ { u32 v = 0x43480000u; r_esp -= 4; W32(r_esp, v); }
    /* 0055ddb4: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055ddb6: call 0x520ea0 */ r_esp -= 4; W32(r_esp, 0x55ddbbu); f_00520ea0();
    /* 0055ddbb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055ddbd: je 0x55e016 */ if (fZ) goto L_0055e016;
L_0055ddc3:; BB(0x0055ddc3);
    /* 0055ddc3: jmp 0x55ddd4 */ goto L_0055ddd4;
L_0055ddc5:; BB(0x0055ddc5);
    /* 0055ddc5: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055ddc7: call 0x521238 */ r_esp -= 4; W32(r_esp, 0x55ddccu); f_00521238();
    /* 0055ddcc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055ddce: je 0x55e016 */ if (fZ) goto L_0055e016;
L_0055ddd4:; BB(0x0055ddd4);
    /* 0055ddd4: mov eax, dword ptr [ebp + 0x43c] */ r_eax = R32((u32)(r_ebp+0x43cu));
    /* 0055ddda: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055dddc: je 0x55e1f9 */ if (fZ) goto L_0055e1f9;
L_0055dde2:; BB(0x0055dde2);
    /* 0055dde2: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055dde5: je 0x55e0b7 */ if (fZ) goto L_0055e0b7;
L_0055ddeb:; BB(0x0055ddeb);
    /* 0055ddeb: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055ddee: je 0x55e01f */ if (fZ) goto L_0055e01f;
L_0055ddf4:; BB(0x0055ddf4);
    /* 0055ddf4: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055ddf7: je 0x55de04 */ if (fZ) goto L_0055de04;
L_0055ddf9:; BB(0x0055ddf9);
    /* 0055ddf9: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055ddfc: jne 0x55dfb0 */ if (!fZ) goto L_0055dfb0;
L_0055de02:; BB(0x0055de02);
    /* 0055de02: jmp 0x55de3a */ goto L_0055de3a;
L_0055de04:; BB(0x0055de04);
    /* 0055de04: mov dword ptr [ebp + 0x43c], 4 */ W32((u32)(r_ebp+0x43cu), 0x4u);
    /* 0055de0e: push 0x222 */ { u32 v = 0x222u; r_esp -= 4; W32(r_esp, v); }
    /* 0055de13: mov eax, 1 */ r_eax = 0x1u;
    /* 0055de18: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 0055de1f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055de21: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x55de26u); f_007879b8();
    /* 0055de26: lea ebx, [ebp + 0x300] */ r_ebx = (u32)(r_ebp+0x300u);
    /* 0055de2c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0055de2e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055de2f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055de30: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0055de31: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055de32: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x55de37u); f_00814298();
    /* 0055de37: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0055de3a:; BB(0x0055de3a);
    /* 0055de3a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055de3c: call 0x5213d8 */ r_esp -= 4; W32(r_esp, 0x55de41u); f_005213d8();
    /* 0055de41: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055de43: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x55de48u); f_00521410();
    /* 0055de48: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055de4a: call 0x55e430 */ r_esp -= 4; W32(r_esp, 0x55de4fu); f_0055e430();
    /* 0055de4f: movsx eax, word ptr [ebp + 0xb8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xb8u));
    /* 0055de56: add dword ptr [ebp + 0x440], 1 */ { u32 ad = (u32)(r_ebp+0x440u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0055de5d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055de5f: jne 0x55df06 */ if (!fZ) goto L_0055df06;
L_0055de65:; BB(0x0055de65);
    /* 0055de65: mov eax, dword ptr [ebp + 0x410] */ r_eax = R32((u32)(r_ebp+0x410u));
    /* 0055de6b: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055de6e: jl 0x55de7f */ if ((fS!=fO)) goto L_0055de7f;
L_0055de70:; BB(0x0055de70);
    /* 0055de70: mov dword ptr [ebp + 0x43c], 5 */ W32((u32)(r_ebp+0x43cu), 0x5u);
    /* 0055de7a: jmp 0x55dfa9 */ goto L_0055dfa9;
L_0055de7f:; BB(0x0055de7f);
    /* 0055de7f: fld dword ptr [ebp + 0x3b4] */ FPUSH(R_F32((u32)(r_ebp+0x3b4u)));
    /* 0055de85: fcom dword ptr [0x9256ec] */ fx_compare(ST(0), R_F32((u32)(0x9256ecu))); 
    /* 0055de8b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0055de8d: mov dword ptr [ebp + 0x440], 0 */ W32((u32)(r_ebp+0x440u), 0x0u);
    /* 0055de97: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0055de98: jae 0x55deab */ if (!fC) goto L_0055deab;
L_0055de9a:; BB(0x0055de9a);
    /* 0055de9a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0055de9c: mov dword ptr [ebp + 0x43c], 3 */ W32((u32)(r_ebp+0x43cu), 0x3u);
    /* 0055dea6: jmp 0x55dfa9 */ goto L_0055dfa9;
L_0055deab:; BB(0x0055deab);
    /* 0055deab: fcomp dword ptr [0x9256e8] */ fx_compare(ST(0), R_F32((u32)(0x9256e8u))); FPOP();
    /* 0055deb1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0055deb3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0055deb4: jae 0x55dec5 */ if (!fC) goto L_0055dec5;
L_0055deb6:; BB(0x0055deb6);
    /* 0055deb6: mov dword ptr [ebp + 0x43c], 2 */ W32((u32)(r_ebp+0x43cu), 0x2u);
    /* 0055dec0: jmp 0x55dfa9 */ goto L_0055dfa9;
L_0055dec5:; BB(0x0055dec5);
    /* 0055dec5: push 0x9257b8 */ { u32 v = 0x9257b8u; r_esp -= 4; W32(r_esp, v); }
    /* 0055deca: mov dword ptr [ebp + 0x43c], 1 */ W32((u32)(r_ebp+0x43cu), 0x1u);
    /* 0055ded4: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055ded6: call 0x55eb88 */ r_esp -= 4; W32(r_esp, 0x55dedbu); f_0055eb88();
    /* 0055dedb: fld dword ptr [ebp + 0x3b4] */ FPUSH(R_F32((u32)(r_ebp+0x3b4u)));
    /* 0055dee1: fcomp dword ptr [0x9256e4] */ fx_compare(ST(0), R_F32((u32)(0x9256e4u))); FPOP();
    /* 0055dee7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0055dee9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0055deea: jbe 0x55dfa9 */ if ((fC||fZ)) goto L_0055dfa9;
L_0055def0:; BB(0x0055def0);
    /* 0055def0: mov eax, dword ptr [ebp + 0x3d0] */ r_eax = R32((u32)(r_ebp+0x3d0u));
    /* 0055def6: and eax, 0xfffbffff */ {  u32 a = r_eax; u32 b = 0xfffbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0055defb: mov dword ptr [ebp + 0x3d0], eax */ W32((u32)(r_ebp+0x3d0u), r_eax);
    /* 0055df01: jmp 0x55dfa9 */ goto L_0055dfa9;
L_0055df06:; BB(0x0055df06);
    /* 0055df06: push 0x41200000 */ { u32 v = 0x41200000u; r_esp -= 4; W32(r_esp, v); }
    /* 0055df0b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055df0d: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x55df12u); f_007aaa30();
    /* 0055df12: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055df14: je 0x55dfa9 */ if (fZ) goto L_0055dfa9;
L_0055df1a:; BB(0x0055df1a);
    /* 0055df1a: fld dword ptr [ebp + 0x3fc] */ FPUSH(R_F32((u32)(r_ebp+0x3fcu)));
    /* 0055df20: fcomp dword ptr [0x9257d0] */ fx_compare(ST(0), R_F32((u32)(0x9257d0u))); FPOP();
    /* 0055df26: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0055df28: add dword ptr [ebp + 0x410], 1 */ { u32 ad = (u32)(r_ebp+0x410u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0055df2f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0055df30: jae 0x55dfa9 */ if (!fC) goto L_0055dfa9;
L_0055df32:; BB(0x0055df32);
    /* 0055df32: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0055df37: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0055df38: mov ecx, dword ptr [ebp + 0x398] */ r_ecx = R32((u32)(r_ebp+0x398u));
    /* 0055df3e: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0055df40: call dword ptr [eax + 0x50] */ { u32 t = R32((u32)(r_eax+0x50u)); r_esp -= 4; W32(r_esp, 0x55df43u); call_ind(t); }
    /* 0055df43: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055df45: je 0x55dfa9 */ if (fZ) goto L_0055dfa9;
L_0055df47:; BB(0x0055df47);
    /* 0055df47: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0055df4c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0055df4d: mov ecx, dword ptr [ebp + 0x398] */ r_ecx = R32((u32)(r_ebp+0x398u));
    /* 0055df53: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0055df55: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x55df58u); call_ind(t); }
    /* 0055df58: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0055df5a: push 0x40400000 */ { u32 v = 0x40400000u; r_esp -= 4; W32(r_esp, v); }
    /* 0055df5f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0055df60: mov ecx, dword ptr [ebp + 0x398] */ r_ecx = R32((u32)(r_ebp+0x398u));
    /* 0055df66: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0055df68: call dword ptr [eax + 0x68] */ { u32 t = R32((u32)(r_eax+0x68u)); r_esp -= 4; W32(r_esp, 0x55df6bu); call_ind(t); }
    /* 0055df6b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055df6d: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x55df72u); f_007751b0();
    /* 0055df72: fcomp dword ptr [0x9256f0] */ fx_compare(ST(0), R_F32((u32)(0x9256f0u))); FPOP();
    /* 0055df78: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0055df7a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0055df7b: ja 0x55dfa9 */ if ((!fC&&!fZ)) goto L_0055dfa9;
L_0055df7d:; BB(0x0055df7d);
    /* 0055df7d: mov ebx, dword ptr [0x92554c] */ r_ebx = R32((u32)(0x92554cu));
    /* 0055df83: mov ecx, dword ptr [ebp + 0x398] */ r_ecx = R32((u32)(r_ebp+0x398u));
    /* 0055df89: mov edi, dword ptr [ecx] */ r_edi = R32((u32)(r_ecx));
    /* 0055df8b: mov dword ptr [esp + 0xc], ebx */ W32((u32)(r_esp+0xcu), r_ebx);
    /* 0055df8f: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0055df94: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 0055df9c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055df9d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055df9e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0055dfa0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0055dfa2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0055dfa3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0055dfa4: call dword ptr [edi + 0x60] */ { u32 t = R32((u32)(r_edi+0x60u)); r_esp -= 4; W32(r_esp, 0x55dfa7u); call_ind(t); }
    /* 0055dfa7: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0055dfa9:; BB(0x0055dfa9);
    /* 0055dfa9: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055dfab: call 0x55fb70 */ r_esp -= 4; W32(r_esp, 0x55dfb0u); f_0055fb70();
L_0055dfb0:; BB(0x0055dfb0);
    /* 0055dfb0: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0055dfb3: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055dfb5: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x55dfbbu); call_ind(t); }
    /* 0055dfbb: jmp 0x55e016 */ goto L_0055e016;
L_0055dfbd:; BB(0x0055dfbd);
    /* 0055dfbd: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055dfc0: jne 0x55e016 */ if (!fZ) goto L_0055e016;
L_0055dfc2:; BB(0x0055dfc2);
    /* 0055dfc2: push 0x9257b8 */ { u32 v = 0x9257b8u; r_esp -= 4; W32(r_esp, v); }
    /* 0055dfc7: mov eax, dword ptr [ebp + 0x3d0] */ r_eax = R32((u32)(r_ebp+0x3d0u));
    /* 0055dfcd: and eax, 0xfffbffff */ {  u32 a = r_eax; u32 b = 0xfffbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0055dfd2: mov dword ptr [ebp + 0x3d0], eax */ W32((u32)(r_ebp+0x3d0u), r_eax);
    /* 0055dfd8: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055dfda: call 0x55eb88 */ r_esp -= 4; W32(r_esp, 0x55dfdfu); f_0055eb88();
    /* 0055dfdf: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055dfe1: call 0x53fdc4 */ r_esp -= 4; W32(r_esp, 0x55dfe6u); f_0053fdc4();
    /* 0055dfe6: jmp 0x55e016 */ goto L_0055e016;
L_0055dfe8:; BB(0x0055dfe8);
    /* 0055dfe8: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0055dfeb: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055dfed: call dword ptr [eax + 0x1b8] */ { u32 t = R32((u32)(r_eax+0x1b8u)); r_esp -= 4; W32(r_esp, 0x55dff3u); call_ind(t); }
    /* 0055dff3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055dff5: jne 0x55e016 */ if (!fZ) goto L_0055e016;
L_0055dff7:; BB(0x0055dff7);
    /* 0055dff7: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055dff9: call 0x55dd5c */ r_esp -= 4; W32(r_esp, 0x55dffeu); f_0055dd5c();
    /* 0055dffe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055e000: jne 0x55e016 */ if (!fZ) goto L_0055e016;
L_0055e002:; BB(0x0055e002);
    /* 0055e002: mov eax, dword ptr [ebp + 0x43c] */ r_eax = R32((u32)(r_ebp+0x43cu));
    /* 0055e008: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055e00b: jne 0x55e016 */ if (!fZ) goto L_0055e016;
L_0055e00d:; BB(0x0055e00d);
    /* 0055e00d: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0055e00f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055e011: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x55e016u); f_0051f62c();
L_0055e016:; BB(0x0055e016);
    /* 0055e016: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0055e019: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0055e01a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055e01b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0055e01c: ret 4 */ FN_RET(0x0055dd78); r_esp += 8; return;
L_0055e01f:; BB(0x0055e01f);
    /* 0055e01f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055e021: call 0x5213d8 */ r_esp -= 4; W32(r_esp, 0x55e026u); f_005213d8();
    /* 0055e026: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055e028: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x55e02du); f_00521410();
    /* 0055e02d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055e02f: call 0x55e430 */ r_esp -= 4; W32(r_esp, 0x55e034u); f_0055e430();
    /* 0055e034: fld dword ptr [ebp + 0x3c] */ FPUSH(R_F32((u32)(r_ebp+0x3cu)));
    /* 0055e037: fadd dword ptr [ebp + 0x3f4] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x3f4u));
    /* 0055e03d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0055e03e: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0055e041: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055e043: call 0x55d474 */ r_esp -= 4; W32(r_esp, 0x55e048u); f_0055d474();
    /* 0055e048: fld dword ptr [ebp + 0x3b4] */ FPUSH(R_F32((u32)(r_ebp+0x3b4u)));
    /* 0055e04e: fcom dword ptr [0x925700] */ fx_compare(ST(0), R_F32((u32)(0x925700u))); 
    /* 0055e054: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0055e056: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0055e057: jb 0x55e087 */ if (fC) goto L_0055e087;
L_0055e059:; BB(0x0055e059);
    /* 0055e059: fcomp dword ptr [0x9256e8] */ fx_compare(ST(0), R_F32((u32)(0x9256e8u))); FPOP();
    /* 0055e05f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0055e061: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0055e062: jbe 0x55e06e */ if ((fC||fZ)) goto L_0055e06e;
L_0055e064:; BB(0x0055e064);
    /* 0055e064: mov dword ptr [ebp + 0x43c], 1 */ W32((u32)(r_ebp+0x43cu), 0x1u);
L_0055e06e:; BB(0x0055e06e);
    /* 0055e06e: mov eax, dword ptr [ebp + 0x434] */ r_eax = R32((u32)(r_ebp+0x434u));
    /* 0055e074: push dword ptr [eax] */ { u32 v = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, v); }
    /* 0055e076: push 0x200 */ { u32 v = 0x200u; r_esp -= 4; W32(r_esp, v); }
    /* 0055e07b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055e07d: call 0x52161c */ r_esp -= 4; W32(r_esp, 0x55e082u); f_0052161c();
    /* 0055e082: jmp 0x55dfb0 */ goto L_0055dfb0;
L_0055e087:; BB(0x0055e087);
    /* 0055e087: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0055e089: fld dword ptr [ebp + 0x3fc] */ FPUSH(R_F32((u32)(r_ebp+0x3fcu)));
    /* 0055e08f: fcomp dword ptr [0x9257d0] */ fx_compare(ST(0), R_F32((u32)(0x9257d0u))); FPOP();
    /* 0055e095: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0055e097: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0055e098: jae 0x55dfb0 */ if (!fC) goto L_0055dfb0;
L_0055e09e:; BB(0x0055e09e);
    /* 0055e09e: mov dword ptr [ebp + 0x440], 0 */ W32((u32)(r_ebp+0x440u), 0x0u);
    /* 0055e0a8: mov dword ptr [ebp + 0x43c], 3 */ W32((u32)(r_ebp+0x43cu), 0x3u);
    /* 0055e0b2: jmp 0x55dfb0 */ goto L_0055dfb0;
L_0055e0b7:; BB(0x0055e0b7);
    /* 0055e0b7: mov eax, dword ptr [ebp + 0x440] */ r_eax = R32((u32)(r_ebp+0x440u));
    /* 0055e0bd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055e0bf: jne 0x55e182 */ if (!fZ) goto L_0055e182;
L_0055e0c5:; BB(0x0055e0c5);
    /* 0055e0c5: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055e0c7: call 0x5213d8 */ r_esp -= 4; W32(r_esp, 0x55e0ccu); f_005213d8();
    /* 0055e0cc: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055e0ce: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x55e0d3u); f_00521410();
    /* 0055e0d3: push 0x220 */ { u32 v = 0x220u; r_esp -= 4; W32(r_esp, v); }
    /* 0055e0d8: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055e0da: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x55e0dfu); f_007879b8();
    /* 0055e0df: lea ebx, [ebp + 0x300] */ r_ebx = (u32)(r_ebp+0x300u);
    /* 0055e0e5: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0055e0e7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055e0e8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055e0e9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0055e0ea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055e0eb: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x55e0f0u); f_00814298();
    /* 0055e0f0: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055e0f3: push 0x446f1000 */ { u32 v = 0x446f1000u; r_esp -= 4; W32(r_esp, v); }
    /* 0055e0f8: call 0x82f9f8 */ r_esp -= 4; W32(r_esp, 0x55e0fdu); f_0082f9f8();
    /* 0055e0fd: fld dword ptr [0x9256fc] */ FPUSH(R_F32((u32)(0x9256fcu)));
    /* 0055e103: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0055e105: fld dword ptr [0x9256e0] */ FPUSH(R_F32((u32)(0x9256e0u)));
    /* 0055e10b: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0055e10d: mov eax, dword ptr [ebp + 0x444] */ r_eax = R32((u32)(r_ebp+0x444u));
    /* 0055e113: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055e116: fld dword ptr [0x9256dc] */ FPUSH(R_F32((u32)(0x9256dcu)));
    /* 0055e11c: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 0055e11e: je 0x55e1e4 */ if (fZ) goto L_0055e1e4;
L_0055e124:; BB(0x0055e124);
    /* 0055e124: mov dword ptr [ebp + 0x444], 1 */ W32((u32)(r_ebp+0x444u), 0x1u);
L_0055e12e:; BB(0x0055e12e);
    /* 0055e12e: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0055e130: fld st(3) */ { long double v = ST(3); FPUSH(v); }
    /* 0055e132: fld dword ptr [ebp + 0x3a8] */ FPUSH(R_F32((u32)(r_ebp+0x3a8u)));
    /* 0055e138: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 0055e13a: fld dword ptr [ebp + 0x3b0] */ FPUSH(R_F32((u32)(r_ebp+0x3b0u)));
    /* 0055e140: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 0055e142: fmulp st(4) */ ST(4) = ST(4) * ST(0); FPOP();
    /* 0055e144: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0055e146: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0055e148: fld dword ptr [0x9256d8] */ FPUSH(R_F32((u32)(0x9256d8u)));
    /* 0055e14e: fmul st(4), st(0) */ ST(4) = ST(4) * ST(0);
    /* 0055e150: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0055e152: fstp dword ptr [ebp + 0x3a8] */ W_F32((u32)(r_ebp+0x3a8u), ST(0)); FPOP();
    /* 0055e158: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0055e15a: fstp dword ptr [ebp + 0x450] */ W_F32((u32)(r_ebp+0x450u), ST(0)); FPOP();
    /* 0055e160: fld dword ptr [ebp + 0x3f4] */ FPUSH(R_F32((u32)(r_ebp+0x3f4u)));
    /* 0055e166: fsub dword ptr [ebp + 0x3fc] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x3fcu));
    /* 0055e16c: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0055e16e: fstp dword ptr [ebp + 0x454] */ W_F32((u32)(r_ebp+0x454u), ST(0)); FPOP();
    /* 0055e174: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0055e176: fchs  */ ST(0) = -ST(0);
    /* 0055e178: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0055e17a: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0055e17c: fstp dword ptr [ebp + 0x3b0] */ W_F32((u32)(r_ebp+0x3b0u), ST(0)); FPOP();
L_0055e182:; BB(0x0055e182);
    /* 0055e182: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055e184: call 0x53fdf0 */ r_esp -= 4; W32(r_esp, 0x55e189u); f_0053fdf0();
    /* 0055e189: mov eax, dword ptr [ebp + 0x440] */ r_eax = R32((u32)(r_ebp+0x440u));
    /* 0055e18f: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0055e192: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055e195: jge 0x55e19f */ if ((fS==fO)) goto L_0055e19f;
L_0055e197:; BB(0x0055e197);
    /* 0055e197: mov dword ptr [ebp + 0x440], eax */ W32((u32)(r_ebp+0x440u), r_eax);
    /* 0055e19d: jmp 0x55e1b4 */ goto L_0055e1b4;
L_0055e19f:; BB(0x0055e19f);
    /* 0055e19f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0055e1a1: mov dword ptr [ebp + 0x440], eax */ W32((u32)(r_ebp+0x440u), r_eax);
    /* 0055e1a7: mov dword ptr [ebp + 0x43c], eax */ W32((u32)(r_ebp+0x43cu), r_eax);
    /* 0055e1ad: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055e1af: call 0x53fdc4 */ r_esp -= 4; W32(r_esp, 0x55e1b4u); f_0053fdc4();
L_0055e1b4:; BB(0x0055e1b4);
    /* 0055e1b4: push dword ptr [ebp + 0x450] */ { u32 v = R32((u32)(r_ebp+0x450u)); r_esp -= 4; W32(r_esp, v); }
    /* 0055e1ba: push dword ptr [ebp + 0x3b0] */ { u32 v = R32((u32)(r_ebp+0x3b0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0055e1c0: fld dword ptr [ebp + 0x400] */ FPUSH(R_F32((u32)(r_ebp+0x400u)));
    /* 0055e1c6: fadd dword ptr [ebp + 0x454] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x454u));
    /* 0055e1cc: push dword ptr [ebp + 0x3a8] */ { u32 v = R32((u32)(r_ebp+0x3a8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0055e1d2: fstp dword ptr [ebp + 0x400] */ W_F32((u32)(r_ebp+0x400u), ST(0)); FPOP();
    /* 0055e1d8: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055e1da: call 0x520b10 */ r_esp -= 4; W32(r_esp, 0x55e1dfu); f_00520b10();
    /* 0055e1df: jmp 0x55dfb0 */ goto L_0055dfb0;
L_0055e1e4:; BB(0x0055e1e4);
    /* 0055e1e4: mov dword ptr [ebp + 0x444], 0 */ W32((u32)(r_ebp+0x444u), 0x0u);
    /* 0055e1ee: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0055e1f0: fchs  */ ST(0) = -ST(0);
    /* 0055e1f2: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0055e1f4: jmp 0x55e12e */ goto L_0055e12e;
L_0055e1f9:; BB(0x0055e1f9);
    /* 0055e1f9: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055e1fb: call 0x5213d8 */ r_esp -= 4; W32(r_esp, 0x55e200u); f_005213d8();
    /* 0055e200: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055e202: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x55e207u); f_00521410();
    /* 0055e207: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055e209: call 0x55e430 */ r_esp -= 4; W32(r_esp, 0x55e20eu); f_0055e430();
    /* 0055e20e: mov eax, dword ptr [ebp + 0x440] */ r_eax = R32((u32)(r_ebp+0x440u));
    /* 0055e214: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0055e217: cmp eax, 0x28 */ {  u32 a = r_eax; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055e21a: jle 0x55e372 */ if ((fZ||fS!=fO)) goto L_0055e372;
L_0055e220:; BB(0x0055e220);
    /* 0055e220: mov eax, dword ptr [ebp + 0x3d0] */ r_eax = R32((u32)(r_ebp+0x3d0u));
    /* 0055e226: mov dword ptr [ebp + 0x440], 0 */ W32((u32)(r_ebp+0x440u), 0x0u);
    /* 0055e230: test eax, 0x40000 */ {  u32 a = r_eax; u32 b = 0x40000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055e235: mov dword ptr [ebp + 0x43c], 1 */ W32((u32)(r_ebp+0x43cu), 0x1u);
    /* 0055e23f: je 0x55e271 */ if (fZ) goto L_0055e271;
L_0055e241:; BB(0x0055e241);
    /* 0055e241: fld dword ptr [ebp + 0x3b4] */ FPUSH(R_F32((u32)(r_ebp+0x3b4u)));
    /* 0055e247: fcomp dword ptr [0x9256e8] */ fx_compare(ST(0), R_F32((u32)(0x9256e8u))); FPOP();
    /* 0055e24d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0055e24f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0055e250: jae 0x55e378 */ if (!fC) goto L_0055e378;
L_0055e256:; BB(0x0055e256);
    /* 0055e256: push 0x9256c8 */ { u32 v = 0x9256c8u; r_esp -= 4; W32(r_esp, v); }
    /* 0055e25b: mov dword ptr [ebp + 0x43c], 2 */ W32((u32)(r_ebp+0x43cu), 0x2u);
    /* 0055e265: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055e267: call 0x55eb88 */ r_esp -= 4; W32(r_esp, 0x55e26cu); f_0055eb88();
    /* 0055e26c: jmp 0x55e378 */ goto L_0055e378;
L_0055e271:; BB(0x0055e271);
    /* 0055e271: fld dword ptr [ebp + 0x3b4] */ FPUSH(R_F32((u32)(r_ebp+0x3b4u)));
    /* 0055e277: fcomp dword ptr [0x9256e4] */ fx_compare(ST(0), R_F32((u32)(0x9256e4u))); FPOP();
    /* 0055e27d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0055e27f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0055e280: jae 0x55e378 */ if (!fC) goto L_0055e378;
L_0055e286:; BB(0x0055e286);
    /* 0055e286: movzx eax, word ptr [ebp + 0x494] */ r_eax = (u32)R16((u32)(r_ebp+0x494u));
    /* 0055e28d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055e28e: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x55e293u); f_007b4d18();
    /* 0055e293: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0055e294: push dword ptr [ebp + 0x398] */ { u32 v = R32((u32)(r_ebp+0x398u)); r_esp -= 4; W32(r_esp, v); }
    /* 0055e29a: mov dword ptr [ebp + 0x3c8], eax */ W32((u32)(r_ebp+0x3c8u), r_eax);
    /* 0055e2a0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0055e2a2: mov ecx, eax */ r_ecx = r_eax;
    /* 0055e2a4: call dword ptr [edx + 0x1d8] */ { u32 t = R32((u32)(r_edx+0x1d8u)); r_esp -= 4; W32(r_esp, 0x55e2aau); call_ind(t); }
    /* 0055e2aa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055e2ac: je 0x55e2c4 */ if (fZ) goto L_0055e2c4;
L_0055e2ae:; BB(0x0055e2ae);
    /* 0055e2ae: mov eax, dword ptr [ebp + 0x3d0] */ r_eax = R32((u32)(r_ebp+0x3d0u));
    /* 0055e2b4: or eax, 0x40000 */ {  u32 a = r_eax; u32 b = 0x40000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0055e2b9: mov dword ptr [ebp + 0x3d0], eax */ W32((u32)(r_ebp+0x3d0u), r_eax);
    /* 0055e2bf: jmp 0x55e378 */ goto L_0055e378;
L_0055e2c4:; BB(0x0055e2c4);
    /* 0055e2c4: fld dword ptr [0x9256f8] */ FPUSH(R_F32((u32)(0x9256f8u)));
    /* 0055e2ca: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0055e2cd: lea eax, [esp + 0x14] */ r_eax = (u32)(r_esp+0x14u);
    /* 0055e2d1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055e2d2: push dword ptr [0xa73c30] */ { u32 v = R32((u32)(0xa73c30u)); r_esp -= 4; W32(r_esp, v); }
    /* 0055e2d8: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0055e2da: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055e2dc: call 0x51f918 */ r_esp -= 4; W32(r_esp, 0x55e2e1u); f_0051f918();
    /* 0055e2e1: mov edx, eax */ r_edx = r_eax;
    /* 0055e2e3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0055e2e5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0055e2e7: jle 0x55e341 */ if ((fZ||fS!=fO)) goto L_0055e341;
L_0055e2e9:; BB(0x0055e2e9);
    /* 0055e2e9: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 0055e2ed: mov edi, eax */ r_edi = r_eax;
    /* 0055e2ef: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 0055e2f3: mov esi, edx */ r_esi = r_edx;
L_0055e2f5:; BB(0x0055e2f5);
    /* 0055e2f5: movzx ebx, word ptr [esp + edi*8 + 0x14] */ r_ebx = (u32)R16((u32)(r_esp+r_edi*8+0x14u));
    /* 0055e2fa: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0055e2fb: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x55e300u); f_0068d5a8();
    /* 0055e300: mov ebx, eax */ r_ebx = r_eax;
    /* 0055e302: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055e305: cmp ebx, dword ptr [ebp + 0x398] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+0x398u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055e30b: je 0x55e332 */ if (fZ) goto L_0055e332;
L_0055e30d:; BB(0x0055e30d);
    /* 0055e30d: movzx eax, word ptr [ebp + 0x494] */ r_eax = (u32)R16((u32)(r_ebp+0x494u));
    /* 0055e314: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055e315: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x55e31au); f_007b4d18();
    /* 0055e31a: mov ecx, eax */ r_ecx = r_eax;
    /* 0055e31c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055e31f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0055e320: mov dword ptr [ebp + 0x3c8], ecx */ W32((u32)(r_ebp+0x3c8u), r_ecx);
    /* 0055e326: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0055e328: call dword ptr [eax + 0x1d8] */ { u32 t = R32((u32)(r_eax+0x1d8u)); r_esp -= 4; W32(r_esp, 0x55e32eu); call_ind(t); }
    /* 0055e32e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055e330: jne 0x55e391 */ if (!fZ) goto L_0055e391;
L_0055e332:; BB(0x0055e332);
    /* 0055e332: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0055e335: cmp edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055e337: jl 0x55e2f5 */ if ((fS!=fO)) goto L_0055e2f5;
L_0055e339:; BB(0x0055e339);
    /* 0055e339: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 0055e33d: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
L_0055e341:; BB(0x0055e341);
    /* 0055e341: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055e343: je 0x55e366 */ if (fZ) goto L_0055e366;
L_0055e345:; BB(0x0055e345);
    /* 0055e345: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0055e348: fcomp dword ptr [0x9256e4] */ fx_compare(ST(0), R_F32((u32)(0x9256e4u))); FPOP();
    /* 0055e34e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0055e350: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0055e351: jae 0x55e378 */ if (!fC) goto L_0055e378;
L_0055e353:; BB(0x0055e353);
    /* 0055e353: mov eax, dword ptr [ebp + 0x3d0] */ r_eax = R32((u32)(r_ebp+0x3d0u));
    /* 0055e359: or eax, 0x40000 */ {  u32 a = r_eax; u32 b = 0x40000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0055e35e: mov dword ptr [ebp + 0x3d0], eax */ W32((u32)(r_ebp+0x3d0u), r_eax);
    /* 0055e364: jmp 0x55e378 */ goto L_0055e378;
L_0055e366:; BB(0x0055e366);
    /* 0055e366: mov dword ptr [ebp + 0x43c], 5 */ W32((u32)(r_ebp+0x43cu), 0x5u);
    /* 0055e370: jmp 0x55e378 */ goto L_0055e378;
L_0055e372:; BB(0x0055e372);
    /* 0055e372: mov dword ptr [ebp + 0x440], eax */ W32((u32)(r_ebp+0x440u), r_eax);
L_0055e378:; BB(0x0055e378);
    /* 0055e378: fld dword ptr [ebp + 0x3c] */ FPUSH(R_F32((u32)(r_ebp+0x3cu)));
    /* 0055e37b: fadd dword ptr [ebp + 0x3fc] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x3fcu));
    /* 0055e381: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0055e382: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0055e385: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055e387: call 0x55fb84 */ r_esp -= 4; W32(r_esp, 0x55e38cu); f_0055fb84();
    /* 0055e38c: jmp 0x55dfb0 */ goto L_0055dfb0;
L_0055e391:; BB(0x0055e391);
    /* 0055e391: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 0055e395: mov eax, edi */ r_eax = r_edi;
    /* 0055e397: push dword ptr [esp + eax*8 + 0x18] */ { u32 v = R32((u32)(r_esp+r_eax*8+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 0055e39b: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x55e3a0u); f_0082dc9c();
    /* 0055e3a0: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0055e3a3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0055e3a4: mov edi, 1 */ r_edi = 0x1u;
    /* 0055e3a9: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055e3ab: call 0x521388 */ r_esp -= 4; W32(r_esp, 0x55e3b0u); f_00521388();
    /* 0055e3b0: jmp 0x55e341 */ goto L_0055e341;
L_0055e3b2:; BB(0x0055e3b2);
    /* 0055e3b2: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0055e3b4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0055e3b6: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 0055e3bd: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055e3bf: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x55e3c4u); f_0051f664();
    /* 0055e3c4: mov eax, dword ptr [ebp + 0x3d0] */ r_eax = R32((u32)(r_ebp+0x3d0u));
    /* 0055e3ca: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0055e3cd: and eax, 0xffbfffff */ {  u32 a = r_eax; u32 b = 0xffbfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0055e3d2: mov dword ptr [ebp + 0x3d0], eax */ W32((u32)(r_ebp+0x3d0u), r_eax);
    /* 0055e3d8: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055e3da: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x55e3e0u); call_ind(t); }
    /* 0055e3e0: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 0055e3e3: mov edx, dword ptr [ebp + 0x3d0] */ r_edx = R32((u32)(r_ebp+0x3d0u));
    /* 0055e3e9: mov dword ptr [ebp + 0x440], 0x28 */ W32((u32)(r_ebp+0x440u), 0x28u);
    /* 0055e3f3: and eax, 0xfeffffff */ {  u32 a = r_eax; u32 b = 0xfeffffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0055e3f8: mov dword ptr [ebp + 0x450], 0 */ W32((u32)(r_ebp+0x450u), 0x0u);
    /* 0055e402: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 0055e405: and edx, 0xfff7ffff */ {  u32 a = r_edx; u32 b = 0xfff7ffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0055e40b: mov dword ptr [ebp + 0x3d0], edx */ W32((u32)(r_ebp+0x3d0u), r_edx);
    /* 0055e411: mov dword ptr [ebp + 0x454], 0 */ W32((u32)(r_ebp+0x454u), 0x0u);
    /* 0055e41b: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0055e41d: mov dword ptr [ebp + 0x43c], ebx */ W32((u32)(r_ebp+0x43cu), r_ebx);
    /* 0055e423: mov dword ptr [ebp + 0x444], ebx */ W32((u32)(r_ebp+0x444u), r_ebx);
    /* 0055e429: jmp 0x55e016 */ goto L_0055e016;
}

