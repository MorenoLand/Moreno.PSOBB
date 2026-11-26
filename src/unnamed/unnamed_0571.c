#include "protos.h"

void f_00571090(void) /* sub_571090 */
{
    FN_ENTER(0x00571090);
    /* 00571090: mov eax, dword ptr [0xa73f90] */ r_eax = R32((u32)(0xa73f90u));
    /* 00571095: cmp eax, 0x21 */ {  u32 a = r_eax; u32 b = 0x21u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00571098: je 0x5710ab */ if (fZ) goto L_005710ab;
L_0057109a:; BB(0x0057109a);
    /* 0057109a: cmp eax, 0x2b */ {  u32 a = r_eax; u32 b = 0x2bu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057109d: je 0x5710ab */ if (fZ) goto L_005710ab;
L_0057109f:; BB(0x0057109f);
    /* 0057109f: cmp eax, 0x64 */ {  u32 a = r_eax; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005710a2: je 0x5710ab */ if (fZ) goto L_005710ab;
L_005710a4:; BB(0x005710a4);
    /* 005710a4: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x5710a9u); f_0082dab0();
    /* 005710a9: jmp 0x5710b0 */ goto L_005710b0;
L_005710ab:; BB(0x005710ab);
    /* 005710ab: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x5710b0u); f_0082dbac();
L_005710b0:; BB(0x005710b0);
    /* 005710b0: add dword ptr [0xa73f90], 1 */ { u32 ad = (u32)(0xa73f90u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005710b7: ret  */ FN_RET(0x00571090); r_esp += 4; return;
}

void f_005710b8(void) /* sub_5710B8 */
{
    FN_ENTER(0x005710b8);
    /* 005710b8: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 005710bc: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005710bf: ja 0x57116e */ if ((!fC&&!fZ)) goto L_0057116e;
L_005710c5:; BB(0x005710c5);
    /* 005710c5: mov eax, dword ptr [eax*4 + 0x926a74] */ r_eax = R32((u32)(r_eax*4+0x926a74u));
    /* 005710cc: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0057116e:; BB(0x0057116e);
    /* 0057116e: ret 8 */ FN_RET(0x005710b8); r_esp += 12; return;
}

void f_005710ce(void)
{
    FN_ENTER(0x005710ce);
    /* 005710ce: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005710d2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005710d3: call 0x571174 */ r_esp -= 4; W32(r_esp, 0x5710d8u); f_00571174();
    /* 005710d8: jmp 0x57116e */ goto L_0057116e;
L_0057116e:; BB(0x0057116e);
    /* 0057116e: ret 8 */ FN_RET(0x005710ce); r_esp += 12; return;
}

void f_005710dd(void)
{
    FN_ENTER(0x005710dd);
    /* 005710dd: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005710e1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005710e2: call 0x571194 */ r_esp -= 4; W32(r_esp, 0x5710e7u); f_00571194();
    /* 005710e7: jmp 0x57116e */ goto L_0057116e;
L_0057116e:; BB(0x0057116e);
    /* 0057116e: ret 8 */ FN_RET(0x005710dd); r_esp += 12; return;
}

void f_005710ec(void)
{
    FN_ENTER(0x005710ec);
    /* 005710ec: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005710f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005710f1: call 0x571314 */ r_esp -= 4; W32(r_esp, 0x5710f6u); f_00571314();
    /* 005710f6: jmp 0x57116e */ goto L_0057116e;
L_0057116e:; BB(0x0057116e);
    /* 0057116e: ret 8 */ FN_RET(0x005710ec); r_esp += 12; return;
}

void f_005710f8(void)
{
    FN_ENTER(0x005710f8);
    /* 005710f8: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005710fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005710fd: call 0x57148c */ r_esp -= 4; W32(r_esp, 0x571102u); f_0057148c();
    /* 00571102: jmp 0x57116e */ goto L_0057116e;
L_0057116e:; BB(0x0057116e);
    /* 0057116e: ret 8 */ FN_RET(0x005710f8); r_esp += 12; return;
}

void f_00571104(void)
{
    FN_ENTER(0x00571104);
    /* 00571104: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00571108: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00571109: call 0x5716f8 */ r_esp -= 4; W32(r_esp, 0x57110eu); f_005716f8();
    /* 0057110e: jmp 0x57116e */ goto L_0057116e;
L_0057116e:; BB(0x0057116e);
    /* 0057116e: ret 8 */ FN_RET(0x00571104); r_esp += 12; return;
}

void f_00571110(void)
{
    FN_ENTER(0x00571110);
    /* 00571110: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00571114: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00571115: call 0x5717dc */ r_esp -= 4; W32(r_esp, 0x57111au); f_005717dc();
    /* 0057111a: jmp 0x57116e */ goto L_0057116e;
L_0057116e:; BB(0x0057116e);
    /* 0057116e: ret 8 */ FN_RET(0x00571110); r_esp += 12; return;
}

void f_0057111c(void)
{
    FN_ENTER(0x0057111c);
    /* 0057111c: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00571120: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00571121: call 0x571a60 */ r_esp -= 4; W32(r_esp, 0x571126u); f_00571a60();
    /* 00571126: jmp 0x57116e */ goto L_0057116e;
L_0057116e:; BB(0x0057116e);
    /* 0057116e: ret 8 */ FN_RET(0x0057111c); r_esp += 12; return;
}

void f_00571128(void)
{
    FN_ENTER(0x00571128);
    /* 00571128: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0057112c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057112d: call 0x572094 */ r_esp -= 4; W32(r_esp, 0x571132u); f_00572094();
    /* 00571132: jmp 0x57116e */ goto L_0057116e;
L_0057116e:; BB(0x0057116e);
    /* 0057116e: ret 8 */ FN_RET(0x00571128); r_esp += 12; return;
}

void f_00571134(void)
{
    FN_ENTER(0x00571134);
    /* 00571134: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00571138: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00571139: call 0x572410 */ r_esp -= 4; W32(r_esp, 0x57113eu); f_00572410();
    /* 0057113e: jmp 0x57116e */ goto L_0057116e;
L_0057116e:; BB(0x0057116e);
    /* 0057116e: ret 8 */ FN_RET(0x00571134); r_esp += 12; return;
}

void f_00571140(void)
{
    FN_ENTER(0x00571140);
    /* 00571140: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00571144: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00571145: call 0x572718 */ r_esp -= 4; W32(r_esp, 0x57114au); f_00572718();
    /* 0057114a: jmp 0x57116e */ goto L_0057116e;
L_0057116e:; BB(0x0057116e);
    /* 0057116e: ret 8 */ FN_RET(0x00571140); r_esp += 12; return;
}

void f_0057114c(void)
{
    FN_ENTER(0x0057114c);
    /* 0057114c: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00571150: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00571151: call 0x5729c0 */ r_esp -= 4; W32(r_esp, 0x571156u); f_005729c0();
    /* 00571156: jmp 0x57116e */ goto L_0057116e;
L_0057116e:; BB(0x0057116e);
    /* 0057116e: ret 8 */ FN_RET(0x0057114c); r_esp += 12; return;
}

void f_00571158(void)
{
    FN_ENTER(0x00571158);
    /* 00571158: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0057115c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057115d: call 0x572a60 */ r_esp -= 4; W32(r_esp, 0x571162u); f_00572a60();
    /* 00571162: jmp 0x57116e */ goto L_0057116e;
L_0057116e:; BB(0x0057116e);
    /* 0057116e: ret 8 */ FN_RET(0x00571158); r_esp += 12; return;
}

void f_00571164(void)
{
    FN_ENTER(0x00571164);
    /* 00571164: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00571168: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00571169: call 0x5738b0 */ r_esp -= 4; W32(r_esp, 0x57116eu); f_005738b0();
    /* 0057116e: ret 8 */ FN_RET(0x00571164); r_esp += 12; return;
}

void f_00571174(void) /* sub_571174 */
{
    FN_ENTER(0x00571174);
    /* 00571174: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00571178: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0057117b: je 0x57118f */ if (fZ) goto L_0057118f;
L_0057117d:; BB(0x0057117d);
    /* 0057117d: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00571180: jne 0x57118f */ if (!fZ) goto L_0057118f;
L_00571182:; BB(0x00571182);
    /* 00571182: movzx eax, word ptr [ecx + 8] */ r_eax = (u32)R16((u32)(r_ecx+0x8u));
    /* 00571186: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0057118b: mov word ptr [ecx + 8], ax */ W16((u32)(r_ecx+0x8u), (u16)r_eax);
L_0057118f:; BB(0x0057118f);
    /* 0057118f: ret 4 */ FN_RET(0x00571174); r_esp += 8; return;
}

void f_00571194(void) /* sub_571194 */
{
    FN_ENTER(0x00571194);
    /* 00571194: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00571195: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00571198: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0057119a: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0057119e: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005711a1: je 0x5712a1 */ if (fZ) goto L_005712a1;
L_005711a7:; BB(0x005711a7);
    /* 005711a7: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005711aa: je 0x571286 */ if (fZ) goto L_00571286;
L_005711b0:; BB(0x005711b0);
    /* 005711b0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005711b2: jne 0x57129a */ if (!fZ) goto L_0057129a;
L_005711b8:; BB(0x005711b8);
    /* 005711b8: mov eax, dword ptr [ebp + 0x498] */ r_eax = R32((u32)(r_ebp+0x498u));
    /* 005711be: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005711c0: jne 0x571247 */ if (!fZ) goto L_00571247;
L_005711c6:; BB(0x005711c6);
    /* 005711c6: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005711c8: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x5711cdu); f_007aa094();
    /* 005711cd: mov eax, dword ptr [ebp + 0xb0] */ r_eax = R32((u32)(r_ebp+0xb0u));
    /* 005711d3: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005711d5: je 0x571235 */ if (fZ) goto L_00571235;
L_005711d7:; BB(0x005711d7);
    /* 005711d7: mov ecx, dword ptr [ebp + 0x60] */ r_ecx = R32((u32)(r_ebp+0x60u));
    /* 005711da: mov dword ptr [ebp + 0x498], 1 */ W32((u32)(r_ebp+0x498u), 0x1u);
    /* 005711e4: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x5711e9u); f_0082dcbc();
    /* 005711e9: fld dword ptr [0x926c3c] */ FPUSH(R_F32((u32)(0x926c3cu)));
    /* 005711ef: mov ecx, dword ptr [ebp + 0x60] */ r_ecx = R32((u32)(r_ebp+0x60u));
    /* 005711f2: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 005711f4: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005711f7: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 005711ff: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x571204u); f_0082ddd8();
    /* 00571204: fld dword ptr [0x926c3c] */ FPUSH(R_F32((u32)(0x926c3cu)));
    /* 0057120a: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0057120c: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00571210: lea edx, [ebp + 0x38] */ r_edx = (u32)(r_ebp+0x38u);
    /* 00571213: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00571216: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x57121bu); f_0082ebac();
    /* 0057121b: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0057121e: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 00571220: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00571221: call 0x578388 */ r_esp -= 4; W32(r_esp, 0x571226u); f_00578388();
    /* 00571226: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 0057122a: push 0x46 */ { u32 v = 0x46u; r_esp -= 4; W32(r_esp, v); }
    /* 0057122c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057122d: call 0x5787a4 */ r_esp -= 4; W32(r_esp, 0x571232u); f_005787a4();
    /* 00571232: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00571235:; BB(0x00571235);
    /* 00571235: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00571238: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0057123a: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x571240u); call_ind(t); }
    /* 00571240: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00571243: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00571244: ret 4 */ FN_RET(0x00571194); r_esp += 8; return;
L_00571247:; BB(0x00571247);
    /* 00571247: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057124a: jne 0x57129a */ if (!fZ) goto L_0057129a;
L_0057124c:; BB(0x0057124c);
    /* 0057124c: fld dword ptr [0x926c44] */ FPUSH(R_F32((u32)(0x926c44u)));
    /* 00571252: fld dword ptr [ebp + 0x3c] */ FPUSH(R_F32((u32)(r_ebp+0x3cu)));
    /* 00571255: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 00571257: fld dword ptr [ebp + 0x4ac] */ FPUSH(R_F32((u32)(r_ebp+0x4acu)));
    /* 0057125d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0057125f: fstp dword ptr [ebp + 0x3c] */ W_F32((u32)(r_ebp+0x3cu), ST(0)); FPOP();
    /* 00571262: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00571264: fcom dword ptr [0x926c40] */ fx_compare(ST(0), R_F32((u32)(0x926c40u))); 
    /* 0057126a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0057126c: fstp dword ptr [ebp + 0x4ac] */ W_F32((u32)(r_ebp+0x4acu), ST(0)); FPOP();
    /* 00571272: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00571273: jbe 0x57129a */ if ((fC||fZ)) goto L_0057129a;
L_00571275:; BB(0x00571275);
    /* 00571275: mov dword ptr [ebp + 0x498], 2 */ W32((u32)(r_ebp+0x498u), 0x2u);
    /* 0057127f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00571282: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00571283: ret 4 */ FN_RET(0x00571194); r_esp += 8; return;
L_00571286:; BB(0x00571286);
    /* 00571286: mov eax, dword ptr [ebp + 0x498] */ r_eax = R32((u32)(r_ebp+0x498u));
    /* 0057128c: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057128f: jne 0x57129a */ if (!fZ) goto L_0057129a;
L_00571291:; BB(0x00571291);
    /* 00571291: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 00571293: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00571295: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x57129au); f_0051f62c();
L_0057129a:; BB(0x0057129a);
    /* 0057129a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0057129d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057129e: ret 4 */ FN_RET(0x00571194); r_esp += 8; return;
L_005712a1:; BB(0x005712a1);
    /* 005712a1: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 005712a4: mov eax, 6 */ r_eax = 0x6u;
    /* 005712a9: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 005712b0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005712b2: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x5712b8u); call_ind(t); }
    /* 005712b8: mov eax, dword ptr [ebp + 0x440] */ r_eax = R32((u32)(r_ebp+0x440u));
    /* 005712be: and eax, 0xffffffd7 */ {  u32 a = r_eax; u32 b = 0xffffffd7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005712c1: mov dword ptr [ebp + 0x440], eax */ W32((u32)(r_ebp+0x440u), r_eax);
    /* 005712c7: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005712c9: call 0x51f894 */ r_esp -= 4; W32(r_esp, 0x5712ceu); f_0051f894();
    /* 005712ce: push 0xf2 */ { u32 v = 0xf2u; r_esp -= 4; W32(r_esp, v); }
    /* 005712d3: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005712d5: call 0x779df0 */ r_esp -= 4; W32(r_esp, 0x5712dau); f_00779df0();
    /* 005712da: mov dword ptr [ebp + 0x498], 0 */ W32((u32)(r_ebp+0x498u), 0x0u);
    /* 005712e4: push 0x218 */ { u32 v = 0x218u; r_esp -= 4; W32(r_esp, v); }
    /* 005712e9: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005712eb: mov dword ptr [ebp + 0x4ac], 0 */ W32((u32)(r_ebp+0x4acu), 0x0u);
    /* 005712f5: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x5712fau); f_007879b8();
    /* 005712fa: add ebp, 0x38 */ {  u32 a = r_ebp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005712fd: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005712ff: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00571300: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00571301: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00571302: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00571303: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x571308u); f_00814298();
    /* 00571308: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057130b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0057130e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057130f: ret 4 */ FN_RET(0x00571194); r_esp += 8; return;
}

void f_00571314(void) /* sub_571314 */
{
    FN_ENTER(0x00571314);
    /* 00571314: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00571315: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00571316: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00571318: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0057131c: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057131f: je 0x57140e */ if (fZ) goto L_0057140e;
L_00571325:; BB(0x00571325);
    /* 00571325: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00571328: je 0x571384 */ if (fZ) goto L_00571384;
L_0057132a:; BB(0x0057132a);
    /* 0057132a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057132c: jne 0x571355 */ if (!fZ) goto L_00571355;
L_0057132e:; BB(0x0057132e);
    /* 0057132e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00571330: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x571335u); f_007aa094();
    /* 00571335: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00571337: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00571339: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x57133fu); call_ind(t); }
    /* 0057133f: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00571341: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00571343: call dword ptr [eax + 0x168] */ { u32 t = R32((u32)(r_eax+0x168u)); r_esp -= 4; W32(r_esp, 0x571349u); call_ind(t); }
    /* 00571349: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0057134b: call 0x571464 */ r_esp -= 4; W32(r_esp, 0x571350u); f_00571464();
    /* 00571350: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00571351: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00571352: ret 4 */ FN_RET(0x00571314); r_esp += 8; return;
L_00571355:; BB(0x00571355);
    /* 00571355: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00571358: jne 0x571409 */ if (!fZ) goto L_00571409;
L_0057135e:; BB(0x0057135e);
    /* 0057135e: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 00571361: mov edx, dword ptr [ebx + 0x440] */ r_edx = R32((u32)(r_ebx+0x440u));
    /* 00571367: and eax, 0xfffffdff */ {  u32 a = r_eax; u32 b = 0xfffffdffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0057136c: mov dword ptr [ebx + 0x30], eax */ W32((u32)(r_ebx+0x30u), r_eax);
    /* 0057136f: and edx, 0xfffffffd */ {  u32 a = r_edx; u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00571372: mov dword ptr [ebx + 0x440], edx */ W32((u32)(r_ebx+0x440u), r_edx);
    /* 00571378: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0057137a: call 0x51f81c */ r_esp -= 4; W32(r_esp, 0x57137fu); f_0051f81c();
    /* 0057137f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00571380: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00571381: ret 4 */ FN_RET(0x00571314); r_esp += 8; return;
L_00571384:; BB(0x00571384);
    /* 00571384: mov eax, dword ptr [ebx + 0xb0] */ r_eax = R32((u32)(r_ebx+0xb0u));
    /* 0057138a: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0057138c: je 0x571409 */ if (fZ) goto L_00571409;
L_0057138e:; BB(0x0057138e);
    /* 0057138e: movsx ecx, word ptr [ebx + 0x334] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebx+0x334u));
    /* 00571395: movsx ebp, word ptr [ebx + 0x2bc] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_ebx+0x2bcu));
    /* 0057139c: lea eax, [ebp] */ r_eax = (u32)(r_ebp);
    /* 0057139f: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 005713a2: add eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005713a4: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005713a6: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005713a8: jg 0x5713dc */ if ((!fZ&&fS==fO)) goto L_005713dc;
L_005713aa:; BB(0x005713aa);
    /* 005713aa: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 005713af: imul ebp */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebp; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005713b1: sar ebp, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebp = r;  } }
    /* 005713b4: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 005713b6: sub edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005713b8: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005713ba: jl 0x5713dc */ if ((fS!=fO)) goto L_005713dc;
L_005713bc:; BB(0x005713bc);
    /* 005713bc: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005713be: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x5713c3u); f_007751b0();
    /* 005713c3: fcomp dword ptr [ebx + 0x448] */ fx_compare(ST(0), R_F32((u32)(r_ebx+0x448u))); FPOP();
    /* 005713c9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005713cb: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005713cc: ja 0x5713dc */ if ((!fC&&!fZ)) goto L_005713dc;
L_005713ce:; BB(0x005713ce);
    /* 005713ce: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 005713d0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005713d2: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5713d7u); f_0051f62c();
    /* 005713d7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005713d8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005713d9: ret 4 */ FN_RET(0x00571314); r_esp += 8; return;
L_005713dc:; BB(0x005713dc);
    /* 005713dc: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005713de: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x5713e3u); f_007751b0();
    /* 005713e3: fcomp dword ptr [0x926c38] */ fx_compare(ST(0), R_F32((u32)(0x926c38u))); FPOP();
    /* 005713e9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005713eb: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005713ec: jae 0x5713fc */ if (!fC) goto L_005713fc;
L_005713ee:; BB(0x005713ee);
    /* 005713ee: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 005713f0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005713f2: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5713f7u); f_0051f62c();
    /* 005713f7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005713f8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005713f9: ret 4 */ FN_RET(0x00571314); r_esp += 8; return;
L_005713fc:; BB(0x005713fc);
    /* 005713fc: push dword ptr [ebx + 0x380] */ { u32 v = R32((u32)(r_ebx+0x380u)); r_esp -= 4; W32(r_esp, v); }
    /* 00571402: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00571404: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x571409u); f_0051f62c();
L_00571409:; BB(0x00571409);
    /* 00571409: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0057140a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057140b: ret 4 */ FN_RET(0x00571314); r_esp += 8; return;
L_0057140e:; BB(0x0057140e);
    /* 0057140e: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00571410: mov eax, 5 */ r_eax = 0x5u;
    /* 00571415: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 0057141c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0057141e: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x571424u); call_ind(t); }
    /* 00571424: push 0xf2 */ { u32 v = 0xf2u; r_esp -= 4; W32(r_esp, v); }
    /* 00571429: mov eax, dword ptr [ebx + 0x440] */ r_eax = R32((u32)(r_ebx+0x440u));
    /* 0057142f: and eax, 0xffffffd7 */ {  u32 a = r_eax; u32 b = 0xffffffd7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00571432: mov dword ptr [ebx + 0x440], eax */ W32((u32)(r_ebx+0x440u), r_eax);
    /* 00571438: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0057143a: call 0x779df0 */ r_esp -= 4; W32(r_esp, 0x57143fu); f_00779df0();
    /* 0057143f: push 0x219 */ { u32 v = 0x219u; r_esp -= 4; W32(r_esp, v); }
    /* 00571444: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00571446: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x57144bu); f_007879b8();
    /* 0057144b: add ebx, 0x38 */ {  u32 a = r_ebx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0057144e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00571450: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00571451: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00571452: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00571453: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00571454: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x571459u); f_00814298();
    /* 00571459: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0057145c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0057145d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057145e: ret 4 */ FN_RET(0x00571314); r_esp += 8; return;
}

void f_00571464(void) /* sub_571464 */
{
    FN_ENTER(0x00571464);
    /* 00571464: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00571465: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00571467: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00571469: push 0x21d */ { u32 v = 0x21du; r_esp -= 4; W32(r_esp, v); }
    /* 0057146e: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x571473u); f_007879b8();
    /* 00571473: mov ecx, eax */ r_ecx = r_eax;
    /* 00571475: lea eax, [ebp + 0x38] */ r_eax = (u32)(r_ebp+0x38u);
    /* 00571478: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0057147a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0057147b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0057147c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057147d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0057147e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0057147f: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x571484u); f_008144b0();
    /* 00571484: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00571487: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00571488: ret  */ FN_RET(0x00571464); r_esp += 4; return;
}

void f_0057148c(void) /* sub_57148C */
{
    FN_ENTER(0x0057148c);
    /* 0057148c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0057148d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0057148e: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00571491: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00571493: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 00571497: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057149a: je 0x571670 */ if (fZ) goto L_00571670;
L_005714a0:; BB(0x005714a0);
    /* 005714a0: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005714a3: je 0x5715fb */ if (fZ) goto L_005715fb;
L_005714a9:; BB(0x005714a9);
    /* 005714a9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005714ab: jne 0x571625 */ if (!fZ) goto L_00571625;
L_005714b1:; BB(0x005714b1);
    /* 005714b1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005714b3: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x5714b8u); f_007aa094();
    /* 005714b8: mov eax, dword ptr [ebx + 0x498] */ r_eax = R32((u32)(r_ebx+0x498u));
    /* 005714be: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005714c0: jne 0x571553 */ if (!fZ) goto L_00571553;
L_005714c6:; BB(0x005714c6);
    /* 005714c6: mov eax, dword ptr [ebx + 0x49c] */ r_eax = R32((u32)(r_ebx+0x49cu));
    /* 005714cc: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005714cf: mov dword ptr [ebx + 0x49c], eax */ W32((u32)(r_ebx+0x49cu), r_eax);
    /* 005714d5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005714d7: jle 0x57162d */ if ((fZ||fS!=fO)) goto L_0057162d;
L_005714dd:; BB(0x005714dd);
    /* 005714dd: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005714df: call 0x52126c */ r_esp -= 4; W32(r_esp, 0x5714e4u); f_0052126c();
    /* 005714e4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005714e6: je 0x5714f6 */ if (fZ) goto L_005714f6;
L_005714e8:; BB(0x005714e8);
    /* 005714e8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005714ea: call 0x5213d8 */ r_esp -= 4; W32(r_esp, 0x5714efu); f_005213d8();
    /* 005714ef: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005714f1: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x5714f6u); f_00521410();
L_005714f6:; BB(0x005714f6);
    /* 005714f6: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 005714f8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005714fa: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x571500u); call_ind(t); }
    /* 00571500: mov edi, dword ptr [ebx + 0x49c] */ r_edi = R32((u32)(r_ebx+0x49cu));
    /* 00571506: mov eax, 0x92492493 */ r_eax = 0x92492493u;
    /* 0057150b: imul edi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_edi; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0057150d: mov eax, edi */ r_eax = r_edi;
    /* 0057150f: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00571512: add edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00571514: sar edx, 3 */ { u32 c = (3u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00571517: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00571519: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0057151b: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 0057151e: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00571520: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00571522: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00571524: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00571526: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00571528: jne 0x571625 */ if (!fZ) goto L_00571625;
L_0057152e:; BB(0x0057152e);
    /* 0057152e: push 0x216 */ { u32 v = 0x216u; r_esp -= 4; W32(r_esp, v); }
    /* 00571533: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00571535: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x57153au); f_007879b8();
    /* 0057153a: add ebx, 0x38 */ {  u32 a = r_ebx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0057153d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0057153f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00571540: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00571541: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00571542: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00571543: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x571548u); f_00814298();
    /* 00571548: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057154b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0057154e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0057154f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00571550: ret 4 */ FN_RET(0x0057148c); r_esp += 8; return;
L_00571553:; BB(0x00571553);
    /* 00571553: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00571556: jne 0x571625 */ if (!fZ) goto L_00571625;
L_0057155c:; BB(0x0057155c);
    /* 0057155c: push 0x41200000 */ { u32 v = 0x41200000u; r_esp -= 4; W32(r_esp, v); }
    /* 00571561: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00571563: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x571568u); f_007aaa30();
    /* 00571568: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057156a: je 0x5715df */ if (fZ) goto L_005715df;
L_0057156c:; BB(0x0057156c);
    /* 0057156c: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 0057156f: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 00571572: mov edi, dword ptr [ebx + 0x40] */ r_edi = R32((u32)(r_ebx+0x40u));
    /* 00571575: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00571578: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0057157a: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0057157e: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00571582: fadd dword ptr [0x926c30] */ ST(0) = ST(0) + R_F32((u32)(0x926c30u));
    /* 00571588: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0057158c: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 00571590: mov edi, dword ptr [ebx + 0x464] */ r_edi = R32((u32)(r_ebx+0x464u));
    /* 00571596: call 0x5716c0 */ r_esp -= 4; W32(r_esp, 0x57159bu); f_005716c0();
    /* 0057159b: mov edx, dword ptr [edi*4 + 0xa73f48] */ r_edx = R32((u32)(r_edi*4+0xa73f48u));
    /* 005715a2: lea edi, [esp] */ r_edi = (u32)(r_esp);
    /* 005715a5: push dword ptr [edx + 0x10] */ { u32 v = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 005715a8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005715a9: push 0x20c */ { u32 v = 0x20cu; r_esp -= 4; W32(r_esp, v); }
    /* 005715ae: push 0x20b */ { u32 v = 0x20bu; r_esp -= 4; W32(r_esp, v); }
    /* 005715b3: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005715b5: push dword ptr [edx + 4] */ { u32 v = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005715b8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005715b9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005715ba: call 0x576714 */ r_esp -= 4; W32(r_esp, 0x5715bfu); f_00576714();
    /* 005715bf: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005715c2: push 0x217 */ { u32 v = 0x217u; r_esp -= 4; W32(r_esp, v); }
    /* 005715c7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005715c9: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x5715ceu); f_007879b8();
    /* 005715ce: lea edi, [ebx + 0x38] */ r_edi = (u32)(r_ebx+0x38u);
    /* 005715d1: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005715d3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005715d4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005715d5: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005715d6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005715d7: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5715dcu); f_00814298();
    /* 005715dc: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005715df:; BB(0x005715df);
    /* 005715df: mov eax, dword ptr [ebx + 0xb0] */ r_eax = R32((u32)(r_ebx+0xb0u));
    /* 005715e5: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005715e7: je 0x571625 */ if (fZ) goto L_00571625;
L_005715e9:; BB(0x005715e9);
    /* 005715e9: mov dword ptr [ebx + 0x498], 3 */ W32((u32)(r_ebx+0x498u), 0x3u);
    /* 005715f3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005715f6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005715f7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005715f8: ret 4 */ FN_RET(0x0057148c); r_esp += 8; return;
L_005715fb:; BB(0x005715fb);
    /* 005715fb: mov eax, dword ptr [ebx + 0x498] */ r_eax = R32((u32)(r_ebx+0x498u));
    /* 00571601: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00571604: jne 0x571617 */ if (!fZ) goto L_00571617;
L_00571606:; BB(0x00571606);
    /* 00571606: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00571608: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0057160a: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x57160fu); f_0051f62c();
    /* 0057160f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00571612: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00571613: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00571614: ret 4 */ FN_RET(0x0057148c); r_esp += 8; return;
L_00571617:; BB(0x00571617);
    /* 00571617: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057161a: jne 0x571625 */ if (!fZ) goto L_00571625;
L_0057161c:; BB(0x0057161c);
    /* 0057161c: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0057161e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00571620: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x571625u); f_0051f62c();
L_00571625:; BB(0x00571625);
    /* 00571625: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00571628: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00571629: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0057162a: ret 4 */ FN_RET(0x0057148c); r_esp += 8; return;
L_0057162d:; BB(0x0057162d);
    /* 0057162d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0057162f: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x571634u); f_007751b0();
    /* 00571634: mov edx, dword ptr [ebx + 0x464] */ r_edx = R32((u32)(r_ebx+0x464u));
    /* 0057163a: mov edi, dword ptr [edx*4 + 0xa73f48] */ r_edi = R32((u32)(r_edx*4+0xa73f48u));
    /* 00571641: fcomp dword ptr [edi + 0x14] */ fx_compare(ST(0), R_F32((u32)(r_edi+0x14u))); FPOP();
    /* 00571644: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00571646: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00571647: ja 0x571658 */ if ((!fC&&!fZ)) goto L_00571658;
L_00571649:; BB(0x00571649);
    /* 00571649: mov dword ptr [ebx + 0x498], 2 */ W32((u32)(r_ebx+0x498u), 0x2u);
    /* 00571653: jmp 0x5714dd */ goto L_005714dd;
L_00571658:; BB(0x00571658);
    /* 00571658: mov dword ptr [ebx + 0x498], 1 */ W32((u32)(r_ebx+0x498u), 0x1u);
    /* 00571662: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00571664: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 0057166b: jmp 0x5714dd */ goto L_005714dd;
L_00571670:; BB(0x00571670);
    /* 00571670: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00571672: mov eax, 2 */ r_eax = 0x2u;
    /* 00571677: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 0057167e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00571680: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x571685u); f_0051f664();
    /* 00571685: mov eax, dword ptr [ebx + 0x440] */ r_eax = R32((u32)(r_ebx+0x440u));
    /* 0057168b: mov edx, dword ptr [ebx + 0x464] */ r_edx = R32((u32)(r_ebx+0x464u));
    /* 00571691: mov dword ptr [ebx + 0x498], 0 */ W32((u32)(r_ebx+0x498u), 0x0u);
    /* 0057169b: and eax, 0xfffffff7 */ {  u32 a = r_eax; u32 b = 0xfffffff7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0057169e: mov edi, dword ptr [edx*4 + 0xa73f48] */ r_edi = R32((u32)(r_edx*4+0xa73f48u));
    /* 005716a5: or eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005716a8: mov dword ptr [ebx + 0x440], eax */ W32((u32)(r_ebx+0x440u), r_eax);
    /* 005716ae: mov eax, dword ptr [edi + 0x24] */ r_eax = R32((u32)(r_edi+0x24u));
    /* 005716b1: mov dword ptr [ebx + 0x49c], eax */ W32((u32)(r_ebx+0x49cu), r_eax);
    /* 005716b7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005716ba: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005716bb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005716bc: ret 4 */ FN_RET(0x0057148c); r_esp += 8; return;
}

void f_005716c0(void) /* sub_5716C0 */
{
    FN_ENTER(0x005716c0);
    /* 005716c0: mov edx, dword ptr [ecx + 0x2b4] */ r_edx = R32((u32)(r_ecx+0x2b4u));
    /* 005716c6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005716c8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005716ca: je 0x5716e8 */ if (fZ) goto L_005716e8;
L_005716cc:; BB(0x005716cc);
    /* 005716cc: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 005716cf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005716d1: jl 0x5716f4 */ if ((fS!=fO)) goto L_005716f4;
L_005716d3:; BB(0x005716d3);
    /* 005716d3: mov edx, dword ptr [0xa9cd68] */ r_edx = R32((u32)(0xa9cd68u));
    /* 005716d9: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005716dc: je 0x5716e9 */ if (fZ) goto L_005716e9;
L_005716de:; BB(0x005716de);
    /* 005716de: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005716e1: jle 0x5716e8 */ if ((fZ||fS!=fO)) goto L_005716e8;
L_005716e3:; BB(0x005716e3);
    /* 005716e3: mov eax, 0xe */ r_eax = 0xeu;
L_005716e8:; BB(0x005716e8);
    /* 005716e8: ret  */ FN_RET(0x005716c0); r_esp += 4; return;
L_005716e9:; BB(0x005716e9);
    /* 005716e9: cmp eax, 0x1d */ {  u32 a = r_eax; u32 b = 0x1du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005716ec: jle 0x5716e8 */ if ((fZ||fS!=fO)) goto L_005716e8;
L_005716ee:; BB(0x005716ee);
    /* 005716ee: mov eax, 0x1d */ r_eax = 0x1du;
    /* 005716f3: ret  */ FN_RET(0x005716c0); r_esp += 4; return;
L_005716f4:; BB(0x005716f4);
    /* 005716f4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005716f6: ret  */ FN_RET(0x005716c0); r_esp += 4; return;
}

void f_005716f8(void) /* sub_5716F8 */
{
    FN_ENTER(0x005716f8);
    /* 005716f8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005716f9: mov edi, ecx */ r_edi = r_ecx;
    /* 005716fb: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005716ff: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00571702: je 0x571783 */ if (fZ) goto L_00571783;
L_00571708:; BB(0x00571708);
    /* 00571708: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0057170b: je 0x57177f */ if (fZ) goto L_0057177f;
L_0057170d:; BB(0x0057170d);
    /* 0057170d: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00571710: je 0x571747 */ if (fZ) goto L_00571747;
L_00571712:; BB(0x00571712);
    /* 00571712: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00571714: jne 0x57172f */ if (!fZ) goto L_0057172f;
L_00571716:; BB(0x00571716);
    /* 00571716: mov ecx, edi */ r_ecx = r_edi;
    /* 00571718: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x57171du); f_007aa094();
    /* 0057171d: add dword ptr [edi + 0x498], 1 */ { u32 ad = (u32)(r_edi+0x498u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00571724: mov ecx, edi */ r_ecx = r_edi;
    /* 00571726: call 0x571464 */ r_esp -= 4; W32(r_esp, 0x57172bu); f_00571464();
    /* 0057172b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0057172c: ret 4 */ FN_RET(0x005716f8); r_esp += 8; return;
L_0057172f:; BB(0x0057172f);
    /* 0057172f: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00571732: jne 0x57177f */ if (!fZ) goto L_0057177f;
L_00571734:; BB(0x00571734);
    /* 00571734: mov eax, dword ptr [edi + 0x440] */ r_eax = R32((u32)(r_edi+0x440u));
    /* 0057173a: and eax, 0xfffffffd */ {  u32 a = r_eax; u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0057173d: mov dword ptr [edi + 0x440], eax */ W32((u32)(r_edi+0x440u), r_eax);
    /* 00571743: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00571744: ret 4 */ FN_RET(0x005716f8); r_esp += 8; return;
L_00571747:; BB(0x00571747);
    /* 00571747: fld dword ptr [0x926c2c] */ FPUSH(R_F32((u32)(0x926c2cu)));
    /* 0057174d: fadd dword ptr [edi + 0xc4] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0xc4u));
    /* 00571753: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00571754: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00571757: mov ecx, edi */ r_ecx = r_edi;
    /* 00571759: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x57175eu); f_007aaa30();
    /* 0057175e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00571760: je 0x57176b */ if (fZ) goto L_0057176b;
L_00571762:; BB(0x00571762);
    /* 00571762: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00571764: mov ecx, edi */ r_ecx = r_edi;
    /* 00571766: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x57176bu); f_0051f62c();
L_0057176b:; BB(0x0057176b);
    /* 0057176b: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0057176d: mov ecx, edi */ r_ecx = r_edi;
    /* 0057176f: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x571775u); call_ind(t); }
    /* 00571775: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00571777: mov ecx, edi */ r_ecx = r_edi;
    /* 00571779: call dword ptr [eax + 0x168] */ { u32 t = R32((u32)(r_eax+0x168u)); r_esp -= 4; W32(r_esp, 0x57177fu); call_ind(t); }
L_0057177f:; BB(0x0057177f);
    /* 0057177f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00571780: ret 4 */ FN_RET(0x005716f8); r_esp += 8; return;
L_00571783:; BB(0x00571783);
    /* 00571783: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 00571785: mov eax, 7 */ r_eax = 0x7u;
    /* 0057178a: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 00571791: mov ecx, edi */ r_ecx = r_edi;
    /* 00571793: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x571799u); call_ind(t); }
    /* 00571799: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0057179b: mov eax, dword ptr [edi + 0x440] */ r_eax = R32((u32)(r_edi+0x440u));
    /* 005717a1: and eax, 0xffffffd7 */ {  u32 a = r_eax; u32 b = 0xffffffd7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005717a4: mov dword ptr [edi + 0x440], eax */ W32((u32)(r_edi+0x440u), r_eax);
    /* 005717aa: mov ecx, edi */ r_ecx = r_edi;
    /* 005717ac: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x5717b1u); f_0051f664();
    /* 005717b1: mov dword ptr [edi + 0x498], 0 */ W32((u32)(r_edi+0x498u), 0x0u);
    /* 005717bb: push 0x21c */ { u32 v = 0x21cu; r_esp -= 4; W32(r_esp, v); }
    /* 005717c0: mov ecx, edi */ r_ecx = r_edi;
    /* 005717c2: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x5717c7u); f_007879b8();
    /* 005717c7: add edi, 0x38 */ {  u32 a = r_edi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005717ca: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005717cc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005717cd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005717ce: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005717cf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005717d0: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5717d5u); f_00814298();
    /* 005717d5: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005717d8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005717d9: ret 4 */ FN_RET(0x005716f8); r_esp += 8; return;
}

void f_005717dc(void) /* sub_5717DC */
{
    FN_ENTER(0x005717dc);
    /* 005717dc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005717dd: mov ebp, esp */ r_ebp = r_esp;
    /* 005717df: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005717e1: push 0x8d706c */ { u32 v = 0x8d706cu; r_esp -= 4; W32(r_esp, v); }
    /* 005717e6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005717ec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005717ed: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005717f4: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005717f7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005717fa: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 005717fd: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 00571800: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 00571803: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00571806: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00571809: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057180c: je 0x571a16 */ if (fZ) goto L_00571a16;
L_00571812:; BB(0x00571812);
    /* 00571812: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00571815: je 0x571881 */ if (fZ) goto L_00571881;
L_00571817:; BB(0x00571817);
    /* 00571817: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00571819: jne 0x571860 */ if (!fZ) goto L_00571860;
L_0057181b:; BB(0x0057181b);
    /* 0057181b: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x571820u); f_007aa094();
    /* 00571820: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00571823: mov ebx, dword ptr [eax + 0x498] */ r_ebx = R32((u32)(r_eax+0x498u));
    /* 00571829: cmp ebx, 6 */ {  u32 a = r_ebx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057182c: je 0x5718f7 */ if (fZ) goto L_005718f7;
L_00571832:; BB(0x00571832);
    /* 00571832: cmp ebx, 0x19 */ {  u32 a = r_ebx; u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00571835: je 0x5718ae */ if (fZ) goto L_005718ae;
L_00571837:; BB(0x00571837);
    /* 00571837: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0057183a: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0057183c: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0057183f: mov dword ptr [ecx + 0x498], ebx */ W32((u32)(r_ecx+0x498u), r_ebx);
    /* 00571845: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x57184bu); call_ind(t); }
    /* 0057184b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0057184e: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00571850: call dword ptr [eax + 0x168] */ { u32 t = R32((u32)(r_eax+0x168u)); r_esp -= 4; W32(r_esp, 0x571856u); call_ind(t); }
    /* 00571856: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00571859: call 0x571464 */ r_esp -= 4; W32(r_esp, 0x57185eu); f_00571464();
    /* 0057185e: jmp 0x571895 */ goto L_00571895;
L_00571860:; BB(0x00571860);
    /* 00571860: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00571863: jne 0x571895 */ if (!fZ) goto L_00571895;
L_00571865:; BB(0x00571865);
    /* 00571865: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 00571868: mov edx, dword ptr [ecx + 0x440] */ r_edx = R32((u32)(r_ecx+0x440u));
    /* 0057186e: and eax, 0xfbffffff */ {  u32 a = r_eax; u32 b = 0xfbffffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00571873: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 00571876: and edx, 0xfffffffd */ {  u32 a = r_edx; u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00571879: mov dword ptr [ecx + 0x440], edx */ W32((u32)(r_ecx+0x440u), r_edx);
    /* 0057187f: jmp 0x571895 */ goto L_00571895;
L_00571881:; BB(0x00571881);
    /* 00571881: mov eax, ecx */ r_eax = r_ecx;
    /* 00571883: mov edx, dword ptr [eax + 0x498] */ r_edx = R32((u32)(r_eax+0x498u));
    /* 00571889: cmp edx, 0x1e */ {  u32 a = r_edx; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0057188c: jl 0x571895 */ if ((fS!=fO)) goto L_00571895;
L_0057188e:; BB(0x0057188e);
    /* 0057188e: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00571890: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x571895u); f_0051f62c();
L_00571895:; BB(0x00571895);
    /* 00571895: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00571898: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0057189b: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0057189e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005718a1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005718a8: mov esp, ebp */ r_esp = r_ebp;
    /* 005718aa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005718ab: ret 4 */ FN_RET(0x005717dc); r_esp += 8; return;
L_005718ae:; BB(0x005718ae);
    /* 005718ae: mov edx, dword ptr [eax + 0x49c] */ r_edx = R32((u32)(r_eax+0x49cu));
    /* 005718b4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005718b6: je 0x571837 */ if (fZ) goto L_00571837;
L_005718bc:; BB(0x005718bc);
    /* 005718bc: push dword ptr [eax + 0x398] */ { u32 v = R32((u32)(r_eax+0x398u)); r_esp -= 4; W32(r_esp, v); }
    /* 005718c2: call 0x520f3c */ r_esp -= 4; W32(r_esp, 0x5718c7u); f_00520f3c();
    /* 005718c7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005718c8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005718ca: jne 0x5718da */ if (!fZ) goto L_005718da;
L_005718cc:; BB(0x005718cc);
    /* 005718cc: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005718cf: mov ebx, dword ptr [eax + 0x498] */ r_ebx = R32((u32)(r_eax+0x498u));
    /* 005718d5: jmp 0x571837 */ goto L_00571837;
L_005718da:; BB(0x005718da);
    /* 005718da: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005718dd: mov edx, dword ptr [ecx + 0x398] */ r_edx = R32((u32)(r_ecx+0x398u));
    /* 005718e3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005718e5: mov word ptr [edx + 0x336], ax */ W16((u32)(r_edx+0x336u), (u16)r_eax);
    /* 005718ec: mov ebx, dword ptr [ecx + 0x498] */ r_ebx = R32((u32)(r_ecx+0x498u));
    /* 005718f2: jmp 0x571837 */ goto L_00571837;
L_005718f7:; BB(0x005718f7);
    /* 005718f7: mov edi, dword ptr [0xaae168] */ r_edi = R32((u32)(0xaae168u));
    /* 005718fd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005718ff: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00571902: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00571904: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00571906: jle 0x57193e */ if ((fZ||fS!=fO)) goto L_0057193e;
L_00571908:; BB(0x00571908);
    /* 00571908: mov ebx, dword ptr [esi*4 + 0xaad720] */ r_ebx = R32((u32)(r_esi*4+0xaad720u));
    /* 0057190f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00571910: call 0x52135c */ r_esp -= 4; W32(r_esp, 0x571915u); f_0052135c();
    /* 00571915: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00571916: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00571918: je 0x571937 */ if (fZ) goto L_00571937;
L_0057191a:; BB(0x0057191a);
    /* 0057191a: movsx eax, word ptr [ebx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32cu));
    /* 00571921: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00571924: jne 0x57192d */ if (!fZ) goto L_0057192d;
L_00571926:; BB(0x00571926);
    /* 00571926: mov eax, 1 */ r_eax = 0x1u;
    /* 0057192b: jmp 0x57192f */ goto L_0057192f;
L_0057192d:; BB(0x0057192d);
    /* 0057192d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0057192f:; BB(0x0057192f);
    /* 0057192f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00571931: je 0x571a0e */ if (fZ) goto L_00571a0e;
L_00571937:; BB(0x00571937);
    /* 00571937: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0057193a: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0057193c: jl 0x571908 */ if ((fS!=fO)) goto L_00571908;
L_0057193e:; BB(0x0057193e);
    /* 0057193e: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00571941: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00571942: call 0x52135c */ r_esp -= 4; W32(r_esp, 0x571947u); f_0052135c();
    /* 00571947: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00571948: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057194a: je 0x57196d */ if (fZ) goto L_0057196d;
L_0057194c:; BB(0x0057194c);
    /* 0057194c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0057194f: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00571952: lea ebx, [eax + 0x38] */ r_ebx = (u32)(r_eax+0x38u);
    /* 00571955: lea ecx, [edx + 0x38] */ r_ecx = (u32)(r_edx+0x38u);
    /* 00571958: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00571959: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0057195a: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x57195fu); f_007a9180();
    /* 0057195f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00571962: fcomp dword ptr [0xa73f20] */ fx_compare(ST(0), R_F32((u32)(0xa73f20u))); FPOP();
    /* 00571968: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0057196a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0057196b: jb 0x571972 */ if (fC) goto L_00571972;
L_0057196d:; BB(0x0057196d);
    /* 0057196d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0057196f: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
L_00571972:; BB(0x00571972);
    /* 00571972: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00571975: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00571977: je 0x571a00 */ if (fZ) goto L_00571a00;
L_0057197d:; BB(0x0057197d);
    /* 0057197d: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 00571984: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 00571986: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x57198bu); f_005caba4();
    /* 0057198b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0057198c: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0057198f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00571991: je 0x5719b7 */ if (fZ) goto L_005719b7;
L_00571993:; BB(0x00571993);
    /* 00571993: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 0057199a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005719a1: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005719a4: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 005719a7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005719a8: mov ecx, eax */ r_ecx = r_eax;
    /* 005719aa: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005719ab: call 0x5740fc */ r_esp -= 4; W32(r_esp, 0x5719b0u); f_005740fc();
    /* 005719b0: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_005719b7:; BB(0x005719b7);
    /* 005719b7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005719be: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005719c1: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005719c4: mov dword ptr [ecx + 0x49c], 1 */ W32((u32)(r_ecx+0x49cu), 0x1u);
    /* 005719ce: mov dword ptr [ecx + 0x398], eax */ W32((u32)(r_ecx+0x398u), r_eax);
    /* 005719d4: push 0x215 */ { u32 v = 0x215u; r_esp -= 4; W32(r_esp, v); }
    /* 005719d9: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x5719deu); f_007879b8();
    /* 005719de: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005719e1: lea ebx, [edx + 0x38] */ r_ebx = (u32)(r_edx+0x38u);
    /* 005719e4: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005719e6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005719e7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005719e8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005719e9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005719ea: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5719efu); f_00814298();
    /* 005719ef: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005719f2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005719f5: mov ebx, dword ptr [eax + 0x498] */ r_ebx = R32((u32)(r_eax+0x498u));
    /* 005719fb: jmp 0x571837 */ goto L_00571837;
L_00571a00:; BB(0x00571a00);
    /* 00571a00: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00571a03: mov ebx, dword ptr [eax + 0x498] */ r_ebx = R32((u32)(r_eax+0x498u));
    /* 00571a09: jmp 0x571837 */ goto L_00571837;
L_00571a0e:; BB(0x00571a0e);
    /* 00571a0e: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00571a11: jmp 0x57193e */ goto L_0057193e;
L_00571a16:; BB(0x00571a16);
    /* 00571a16: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00571a18: mov eax, 2 */ r_eax = 0x2u;
    /* 00571a1d: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 00571a24: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x571a2au); call_ind(t); }
    /* 00571a2a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00571a2d: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00571a2f: call dword ptr [eax + 0x174] */ { u32 t = R32((u32)(r_eax+0x174u)); r_esp -= 4; W32(r_esp, 0x571a35u); call_ind(t); }
    /* 00571a35: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00571a38: mov eax, dword ptr [ecx + 0x440] */ r_eax = R32((u32)(r_ecx+0x440u));
    /* 00571a3e: and eax, 0xfffffff7 */ {  u32 a = r_eax; u32 b = 0xfffffff7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00571a41: or eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00571a44: mov dword ptr [ecx + 0x440], eax */ W32((u32)(r_ecx+0x440u), r_eax);
    /* 00571a4a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00571a4c: mov dword ptr [ecx + 0x498], edx */ W32((u32)(r_ecx+0x498u), r_edx);
    /* 00571a52: mov dword ptr [ecx + 0x49c], edx */ W32((u32)(r_ecx+0x49cu), r_edx);
    /* 00571a58: jmp 0x571895 */ goto L_00571895;
}

void f_005719e0(void)
{
    FN_ENTER(0x005719e0);
    goto L_005719e0;
L_00571837:; BB(0x00571837);
    /* 00571837: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0057183a: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0057183c: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0057183f: mov dword ptr [ecx + 0x498], ebx */ W32((u32)(r_ecx+0x498u), r_ebx);
    /* 00571845: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x57184bu); call_ind(t); }
    /* 0057184b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0057184e: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00571850: call dword ptr [eax + 0x168] */ { u32 t = R32((u32)(r_eax+0x168u)); r_esp -= 4; W32(r_esp, 0x571856u); call_ind(t); }
    /* 00571856: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00571859: call 0x571464 */ r_esp -= 4; W32(r_esp, 0x57185eu); f_00571464();
    /* 0057185e: jmp 0x571895 */ goto L_00571895;
L_00571895:; BB(0x00571895);
    /* 00571895: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00571898: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0057189b: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0057189e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005718a1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005718a8: mov esp, ebp */ r_esp = r_ebp;
    /* 005718aa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005718ab: ret 4 */ FN_RET(0x005719e0); r_esp += 8; return;
L_005719e0:; BB(0x005719e0);
    /* 005719e0: in al, dx */ UNSUP(0x005719e0, "in al, dx");
    /* 005719e1: lea ebx, [edx + 0x38] */ r_ebx = (u32)(r_edx+0x38u);
    /* 005719e4: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005719e6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005719e7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005719e8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005719e9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005719ea: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5719efu); f_00814298();
    /* 005719ef: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005719f2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005719f5: mov ebx, dword ptr [eax + 0x498] */ r_ebx = R32((u32)(r_eax+0x498u));
    /* 005719fb: jmp 0x571837 */ goto L_00571837;
}

void f_00571a60(void) /* sub_571A60 */
{
    FN_ENTER(0x00571a60);
    /* 00571a60: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00571a61: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00571a62: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00571a65: mov esi, ecx */ r_esi = r_ecx;
    /* 00571a67: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 00571a6b: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00571a6e: je 0x571e42 */ if (fZ) goto L_00571e42;
L_00571a74:; BB(0x00571a74);
    /* 00571a74: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00571a77: je 0x571dc0 */ if (fZ) goto L_00571dc0;
L_00571a7d:; BB(0x00571a7d);
    /* 00571a7d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00571a7f: jne 0x571d91 */ if (!fZ) goto L_00571d91;
L_00571a85:; BB(0x00571a85);
    /* 00571a85: mov ecx, esi */ r_ecx = r_esi;
    /* 00571a87: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x571a8cu); f_007aa094();
    /* 00571a8c: mov eax, dword ptr [esi + 0x498] */ r_eax = R32((u32)(r_esi+0x498u));
    /* 00571a92: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00571a94: je 0x571ca4 */ if (fZ) goto L_00571ca4;
L_00571a9a:; BB(0x00571a9a);
    /* 00571a9a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00571a9d: jne 0x571c3b */ if (!fZ) goto L_00571c3b;
L_00571aa3:; BB(0x00571aa3);
    /* 00571aa3: mov ecx, esi */ r_ecx = r_esi;
    /* 00571aa5: call 0x571f00 */ r_esp -= 4; W32(r_esp, 0x571aaau); f_00571f00();
    /* 00571aaa: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00571aac: mov ecx, esi */ r_ecx = r_esi;
    /* 00571aae: call 0x572068 */ r_esp -= 4; W32(r_esp, 0x571ab3u); f_00572068();
    /* 00571ab3: mov eax, dword ptr [esi + 0x3a8] */ r_eax = R32((u32)(r_esi+0x3a8u));
    /* 00571ab9: mov edx, dword ptr [esi + 0x3b0] */ r_edx = R32((u32)(r_esi+0x3b0u));
    /* 00571abf: fld dword ptr [esi + 0x44c] */ FPUSH(R_F32((u32)(r_esi+0x44cu)));
    /* 00571ac5: fmul dword ptr [0x926c24] */ ST(0) = ST(0) * R_F32((u32)(0x926c24u));
    /* 00571acb: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00571ace: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00571ad2: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00571ad5: mov ecx, esi */ r_ecx = r_esi;
    /* 00571ad7: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00571adb: call 0x520940 */ r_esp -= 4; W32(r_esp, 0x571ae0u); f_00520940();
    /* 00571ae0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00571ae2: je 0x571ae9 */ if (fZ) goto L_00571ae9;
L_00571ae4:; BB(0x00571ae4);
    /* 00571ae4: mov edi, 1 */ r_edi = 0x1u;
L_00571ae9:; BB(0x00571ae9);
    /* 00571ae9: push dword ptr [esi + 0x44c] */ { u32 v = R32((u32)(r_esi+0x44cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00571aef: push dword ptr [esi + 0x3b0] */ { u32 v = R32((u32)(r_esi+0x3b0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00571af5: mov ecx, esi */ r_ecx = r_esi;
    /* 00571af7: push dword ptr [esi + 0x3a8] */ { u32 v = R32((u32)(r_esi+0x3a8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00571afd: call 0x5209d4 */ r_esp -= 4; W32(r_esp, 0x571b02u); f_005209d4();
    /* 00571b02: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00571b04: mov ecx, esi */ r_ecx = r_esi;
    /* 00571b06: call 0x520bb8 */ r_esp -= 4; W32(r_esp, 0x571b0bu); f_00520bb8();
    /* 00571b0b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00571b0d: je 0x571b14 */ if (fZ) goto L_00571b14;
L_00571b0f:; BB(0x00571b0f);
    /* 00571b0f: mov edi, 1 */ r_edi = 0x1u;
L_00571b14:; BB(0x00571b14);
    /* 00571b14: mov ecx, esi */ r_ecx = r_esi;
    /* 00571b16: call 0x7b7e9c */ r_esp -= 4; W32(r_esp, 0x571b1bu); f_007b7e9c();
    /* 00571b1b: mov eax, dword ptr [esi + 0xa4] */ r_eax = R32((u32)(r_esi+0xa4u));
    /* 00571b21: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 00571b24: test edx, 0x200000 */ {  u32 a = r_edx; u32 b = 0x200000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00571b2a: je 0x571b31 */ if (fZ) goto L_00571b31;
L_00571b2c:; BB(0x00571b2c);
    /* 00571b2c: mov edi, 1 */ r_edi = 0x1u;
L_00571b31:; BB(0x00571b31);
    /* 00571b31: call 0x7b51c4 */ r_esp -= 4; W32(r_esp, 0x571b36u); f_007b51c4();
    /* 00571b36: mov ecx, esi */ r_ecx = r_esi;
    /* 00571b38: call 0x7b6894 */ r_esp -= 4; W32(r_esp, 0x571b3du); f_007b6894();
    /* 00571b3d: mov eax, dword ptr [esi + 0xa4] */ r_eax = R32((u32)(r_esi+0xa4u));
    /* 00571b43: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 00571b46: test edx, 0x80000 */ {  u32 a = r_edx; u32 b = 0x80000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00571b4c: je 0x571be3 */ if (fZ) goto L_00571be3;
L_00571b52:; BB(0x00571b52);
    /* 00571b52: mov dword ptr [esp + 0x20], edi */ W32((u32)(r_esp+0x20u), r_edi);
    /* 00571b56: mov dword ptr [esp + 0x24], ebx */ W32((u32)(r_esp+0x24u), r_ebx);
    /* 00571b5a: mov dword ptr [esp + 0x28], ebp */ W32((u32)(r_esp+0x28u), r_ebp);
    /* 00571b5e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00571b60: mov edi, eax */ r_edi = r_eax;
L_00571b62:; BB(0x00571b62);
    /* 00571b62: mov ebx, dword ptr [edi + 0xaad6e0] */ r_ebx = R32((u32)(r_edi+0xaad6e0u));
    /* 00571b68: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00571b6b: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00571b6d: je 0x571ddc */ if (fZ) goto L_00571ddc;
L_00571b73:; BB(0x00571b73);
    /* 00571b73: movzx edx, word ptr [ebx + 0x96] */ r_edx = (u32)R16((u32)(r_ebx+0x96u));
    /* 00571b7a: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00571b7d: jne 0x571bd2 */ if (!fZ) goto L_00571bd2;
L_00571b7f:; BB(0x00571b7f);
    /* 00571b7f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00571b80: mov ecx, dword ptr [esi + 0x490] */ r_ecx = R32((u32)(r_esi+0x490u));
    /* 00571b86: call 0x521b18 */ r_esp -= 4; W32(r_esp, 0x571b8bu); f_00521b18();
    /* 00571b8b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00571b8d: je 0x571bd2 */ if (fZ) goto L_00571bd2;
L_00571b8f:; BB(0x00571b8f);
    /* 00571b8f: mov ebp, dword ptr [esi + 0x464] */ r_ebp = R32((u32)(r_esi+0x464u));
    /* 00571b95: mov ebp, dword ptr [ebp*4 + 0xa73f48] */ r_ebp = R32((u32)(r_ebp*4+0xa73f48u));
    /* 00571b9c: mov ecx, dword ptr [ebp] */ r_ecx = R32((u32)(r_ebp));
    /* 00571b9f: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00571ba1: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00571ba3: mov ebp, 0xffffffff */ r_ebp = 0xffffffffu;
    /* 00571ba8: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00571bab: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 00571baf: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00571bb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00571bb1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00571bb2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00571bb3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00571bb5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00571bb6: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00571bb8: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x571bbbu); call_ind(t); }
    /* 00571bbb: fcomp dword ptr [0x926c20] */ fx_compare(ST(0), R_F32((u32)(0x926c20u))); FPOP();
    /* 00571bc1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00571bc3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00571bc4: jbe 0x571bd2 */ if ((fC||fZ)) goto L_00571bd2;
L_00571bc6:; BB(0x00571bc6);
    /* 00571bc6: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 00571bc9: or edx, 0x600 */ {  u32 a = r_edx; u32 b = 0x600u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00571bcf: mov dword ptr [ebx + 0x30], edx */ W32((u32)(r_ebx+0x30u), r_edx);
L_00571bd2:; BB(0x00571bd2);
    /* 00571bd2: cmp edi, 0x40 */ {  u32 a = r_edi; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00571bd5: jl 0x571b62 */ if ((fS!=fO)) goto L_00571b62;
L_00571bd7:; BB(0x00571bd7);
    /* 00571bd7: mov edi, dword ptr [esp + 0x20] */ r_edi = R32((u32)(r_esp+0x20u));
    /* 00571bdb: mov ebx, dword ptr [esp + 0x24] */ r_ebx = R32((u32)(r_esp+0x24u));
    /* 00571bdf: mov ebp, dword ptr [esp + 0x28] */ r_ebp = R32((u32)(r_esp+0x28u));
L_00571be3:; BB(0x00571be3);
    /* 00571be3: fld dword ptr [esi + 0x4b0] */ FPUSH(R_F32((u32)(r_esi+0x4b0u)));
    /* 00571be9: fadd dword ptr [esi + 0x44c] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x44cu));
    /* 00571bef: fcom dword ptr [0x926c1c] */ fx_compare(ST(0), R_F32((u32)(0x926c1cu))); 
    /* 00571bf5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00571bf7: fstp dword ptr [esi + 0x4b0] */ W_F32((u32)(r_esi+0x4b0u), ST(0)); FPOP();
    /* 00571bfd: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00571bfe: jb 0x571c31 */ if (fC) goto L_00571c31;
L_00571c00:; BB(0x00571c00);
    /* 00571c00: mov eax, dword ptr [esi + 0x440] */ r_eax = R32((u32)(r_esi+0x440u));
    /* 00571c06: mov dword ptr [esi + 0x498], 2 */ W32((u32)(r_esi+0x498u), 0x2u);
    /* 00571c10: and eax, 0xffffffdf */ {  u32 a = r_eax; u32 b = 0xffffffdfu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00571c13: mov dword ptr [esi + 0x440], eax */ W32((u32)(r_esi+0x440u), r_eax);
    /* 00571c19: mov dword ptr [esi + 0x49c], 0 */ W32((u32)(r_esi+0x49cu), 0x0u);
    /* 00571c23: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00571c25: mov ecx, esi */ r_ecx = r_esi;
    /* 00571c27: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x571c2cu); f_0051f664();
    /* 00571c2c: jmp 0x571dd4 */ goto L_00571dd4;
L_00571c31:; BB(0x00571c31);
    /* 00571c31: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00571c33: je 0x571dd4 */ if (fZ) goto L_00571dd4;
L_00571c39:; BB(0x00571c39);
    /* 00571c39: jmp 0x571c00 */ goto L_00571c00;
L_00571c3b:; BB(0x00571c3b);
    /* 00571c3b: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00571c3e: jne 0x571dd4 */ if (!fZ) goto L_00571dd4;
L_00571c44:; BB(0x00571c44);
    /* 00571c44: mov eax, dword ptr [esi + 0x49c] */ r_eax = R32((u32)(r_esi+0x49cu));
    /* 00571c4a: fld dword ptr [esi + 0x4ac] */ FPUSH(R_F32((u32)(r_esi+0x4acu)));
    /* 00571c50: fmul dword ptr [0x926c28] */ ST(0) = ST(0) * R_F32((u32)(0x926c28u));
    /* 00571c56: fstp dword ptr [esi + 0x4ac] */ W_F32((u32)(r_esi+0x4acu), ST(0)); FPOP();
    /* 00571c5c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00571c5f: mov dword ptr [esi + 0x49c], eax */ W32((u32)(r_esi+0x49cu), r_eax);
    /* 00571c65: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00571c68: jl 0x571c7c */ if ((fS!=fO)) goto L_00571c7c;
L_00571c6a:; BB(0x00571c6a);
    /* 00571c6a: mov eax, 3 */ r_eax = 0x3u;
    /* 00571c6f: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 00571c76: mov dword ptr [esi + 0x498], eax */ W32((u32)(r_esi+0x498u), r_eax);
L_00571c7c:; BB(0x00571c7c);
    /* 00571c7c: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00571c7e: mov ecx, esi */ r_ecx = r_esi;
    /* 00571c80: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x571c86u); call_ind(t); }
    /* 00571c86: push dword ptr [esi + 0x4ac] */ { u32 v = R32((u32)(r_esi+0x4acu)); r_esp -= 4; W32(r_esp, v); }
    /* 00571c8c: push dword ptr [esi + 0x3b0] */ { u32 v = R32((u32)(r_esi+0x3b0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00571c92: mov ecx, esi */ r_ecx = r_esi;
    /* 00571c94: push dword ptr [esi + 0x3a8] */ { u32 v = R32((u32)(r_esi+0x3a8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00571c9a: call 0x5209d4 */ r_esp -= 4; W32(r_esp, 0x571c9fu); f_005209d4();
    /* 00571c9f: jmp 0x571dd4 */ goto L_00571dd4;
L_00571ca4:; BB(0x00571ca4);
    /* 00571ca4: mov ecx, esi */ r_ecx = r_esi;
    /* 00571ca6: call 0x572068 */ r_esp -= 4; W32(r_esp, 0x571cabu); f_00572068();
    /* 00571cab: push 0x42c80000 */ { u32 v = 0x42c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 00571cb0: push dword ptr [esi + 0x3b0] */ { u32 v = R32((u32)(r_esi+0x3b0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00571cb6: mov ecx, esi */ r_ecx = r_esi;
    /* 00571cb8: push dword ptr [esi + 0x3a8] */ { u32 v = R32((u32)(r_esi+0x3a8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00571cbe: call 0x520940 */ r_esp -= 4; W32(r_esp, 0x571cc3u); f_00520940();
    /* 00571cc3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00571cc5: je 0x571cfb */ if (fZ) goto L_00571cfb;
L_00571cc7:; BB(0x00571cc7);
    /* 00571cc7: push 0x21b */ { u32 v = 0x21bu; r_esp -= 4; W32(r_esp, v); }
    /* 00571ccc: mov eax, 3 */ r_eax = 0x3u;
    /* 00571cd1: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 00571cd8: mov dword ptr [esi + 0x498], eax */ W32((u32)(r_esi+0x498u), r_eax);
    /* 00571cde: mov ecx, esi */ r_ecx = r_esi;
    /* 00571ce0: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x571ce5u); f_007879b8();
    /* 00571ce5: add esi, 0x38 */ {  u32 a = r_esi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00571ce8: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00571cea: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00571ceb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00571cec: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00571ced: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00571cee: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x571cf3u); f_00814298();
    /* 00571cf3: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00571cf6: jmp 0x571dd4 */ goto L_00571dd4;
L_00571cfb:; BB(0x00571cfb);
    /* 00571cfb: mov eax, dword ptr [esi + 0x4a0] */ r_eax = R32((u32)(r_esi+0x4a0u));
    /* 00571d01: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00571d04: mov dword ptr [esi + 0x4a0], eax */ W32((u32)(r_esi+0x4a0u), r_eax);
    /* 00571d0a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00571d0c: jle 0x571ded */ if ((fZ||fS!=fO)) goto L_00571ded;
L_00571d12:; BB(0x00571d12);
    /* 00571d12: mov ecx, esi */ r_ecx = r_esi;
    /* 00571d14: call 0x52126c */ r_esp -= 4; W32(r_esp, 0x571d19u); f_0052126c();
    /* 00571d19: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00571d1b: je 0x571d2b */ if (fZ) goto L_00571d2b;
L_00571d1d:; BB(0x00571d1d);
    /* 00571d1d: mov ecx, esi */ r_ecx = r_esi;
    /* 00571d1f: call 0x5213d8 */ r_esp -= 4; W32(r_esp, 0x571d24u); f_005213d8();
    /* 00571d24: mov ecx, esi */ r_ecx = r_esi;
    /* 00571d26: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x571d2bu); f_00521410();
L_00571d2b:; BB(0x00571d2b);
    /* 00571d2b: fld dword ptr [esi + 0x3a8] */ FPUSH(R_F32((u32)(r_esi+0x3a8u)));
    /* 00571d31: fld dword ptr [esi + 0x3b0] */ FPUSH(R_F32((u32)(r_esi+0x3b0u)));
    /* 00571d37: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00571d39: fmul qword ptr [0x926b18] */ ST(0) = ST(0) * R_F64((u32)(0x926b18u));
    /* 00571d3f: fdiv qword ptr [0x926b10] */ ST(0) = ST(0) / R_F64((u32)(0x926b10u));
    /* 00571d45: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 00571d49: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 00571d4e: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00571d53: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00571d57: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00571d5b: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 00571d5f: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00571d63: mov eax, dword ptr [esi + 0x358] */ r_eax = R32((u32)(r_esi+0x358u));
    /* 00571d69: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 00571d6d: mov dword ptr [esi + 0x4a8], edx */ W32((u32)(r_esi+0x4a8u), r_edx);
    /* 00571d73: push dword ptr [eax + 8] */ { u32 v = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00571d76: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00571d77: push dword ptr [esi + 0x60] */ { u32 v = R32((u32)(r_esi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 00571d7a: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x571d7fu); f_007a8c74();
    /* 00571d7f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00571d82: mov dword ptr [esi + 0x60], eax */ W32((u32)(r_esi+0x60u), r_eax);
    /* 00571d85: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00571d87: mov ecx, esi */ r_ecx = r_esi;
    /* 00571d89: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x571d8fu); call_ind(t); }
    /* 00571d8f: jmp 0x571dd4 */ goto L_00571dd4;
L_00571d91:; BB(0x00571d91);
    /* 00571d91: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00571d94: jne 0x571dd4 */ if (!fZ) goto L_00571dd4;
L_00571d96:; BB(0x00571d96);
    /* 00571d96: mov eax, dword ptr [esi + 0x440] */ r_eax = R32((u32)(r_esi+0x440u));
    /* 00571d9c: mov edi, dword ptr [esi + 0xa4] */ r_edi = R32((u32)(r_esi+0xa4u));
    /* 00571da2: and eax, 0xffffffdf */ {  u32 a = r_eax; u32 b = 0xffffffdfu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00571da5: mov dword ptr [esi + 0x440], eax */ W32((u32)(r_esi+0x440u), r_eax);
    /* 00571dab: mov edx, dword ptr [edi + 0x18] */ r_edx = R32((u32)(r_edi+0x18u));
    /* 00571dae: and edx, 0xfffff8ff */ {  u32 a = r_edx; u32 b = 0xfffff8ffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00571db4: mov dword ptr [edi + 0x18], edx */ W32((u32)(r_edi+0x18u), r_edx);
    /* 00571db7: mov ecx, esi */ r_ecx = r_esi;
    /* 00571db9: call 0x520be8 */ r_esp -= 4; W32(r_esp, 0x571dbeu); f_00520be8();
    /* 00571dbe: jmp 0x571dd4 */ goto L_00571dd4;
L_00571dc0:; BB(0x00571dc0);
    /* 00571dc0: mov eax, dword ptr [esi + 0x498] */ r_eax = R32((u32)(r_esi+0x498u));
    /* 00571dc6: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00571dc9: jne 0x571dd4 */ if (!fZ) goto L_00571dd4;
L_00571dcb:; BB(0x00571dcb);
    /* 00571dcb: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00571dcd: mov ecx, esi */ r_ecx = r_esi;
    /* 00571dcf: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x571dd4u); f_0051f62c();
L_00571dd4:; BB(0x00571dd4);
    /* 00571dd4: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00571dd7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00571dd8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00571dd9: ret 4 */ FN_RET(0x00571a60); r_esp += 8; return;
L_00571ddc:; BB(0x00571ddc);
    /* 00571ddc: mov edi, dword ptr [esp + 0x20] */ r_edi = R32((u32)(r_esp+0x20u));
    /* 00571de0: mov ebx, dword ptr [esp + 0x24] */ r_ebx = R32((u32)(r_esp+0x24u));
    /* 00571de4: mov ebp, dword ptr [esp + 0x28] */ r_ebp = R32((u32)(r_esp+0x28u));
    /* 00571de8: jmp 0x571be3 */ goto L_00571be3;
L_00571ded:; BB(0x00571ded);
    /* 00571ded: push 0x21b */ { u32 v = 0x21bu; r_esp -= 4; W32(r_esp, v); }
    /* 00571df2: mov edx, dword ptr [esi + 0x440] */ r_edx = R32((u32)(r_esi+0x440u));
    /* 00571df8: mov eax, 1 */ r_eax = 0x1u;
    /* 00571dfd: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 00571e04: mov dword ptr [esi + 0x498], eax */ W32((u32)(r_esi+0x498u), r_eax);
    /* 00571e0a: mov eax, dword ptr [esi + 0xa4] */ r_eax = R32((u32)(r_esi+0xa4u));
    /* 00571e10: or edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00571e13: mov dword ptr [esi + 0x440], edx */ W32((u32)(r_esi+0x440u), r_edx);
    /* 00571e19: mov edi, dword ptr [eax + 0x18] */ r_edi = R32((u32)(r_eax+0x18u));
    /* 00571e1c: or edi, 0x700 */ {  u32 a = r_edi; u32 b = 0x700u; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 00571e22: mov dword ptr [eax + 0x18], edi */ W32((u32)(r_eax+0x18u), r_edi);
    /* 00571e25: mov ecx, esi */ r_ecx = r_esi;
    /* 00571e27: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x571e2cu); f_007879b8();
    /* 00571e2c: lea edi, [esi + 0x38] */ r_edi = (u32)(r_esi+0x38u);
    /* 00571e2f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00571e31: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00571e32: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00571e33: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00571e34: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00571e35: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x571e3au); f_00814298();
    /* 00571e3a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00571e3d: jmp 0x571d12 */ goto L_00571d12;
L_00571e42:; BB(0x00571e42);
    /* 00571e42: mov ecx, esi */ r_ecx = r_esi;
    /* 00571e44: call 0x572068 */ r_esp -= 4; W32(r_esp, 0x571e49u); f_00572068();
    /* 00571e49: push 0x42c80000 */ { u32 v = 0x42c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 00571e4e: push dword ptr [esi + 0x3b0] */ { u32 v = R32((u32)(r_esi+0x3b0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00571e54: mov ecx, esi */ r_ecx = r_esi;
    /* 00571e56: push dword ptr [esi + 0x3a8] */ { u32 v = R32((u32)(r_esi+0x3a8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00571e5c: call 0x520940 */ r_esp -= 4; W32(r_esp, 0x571e61u); f_00520940();
    /* 00571e61: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00571e63: je 0x571e7c */ if (fZ) goto L_00571e7c;
L_00571e65:; BB(0x00571e65);
    /* 00571e65: mov eax, 3 */ r_eax = 0x3u;
    /* 00571e6a: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 00571e71: mov dword ptr [esi + 0x498], eax */ W32((u32)(r_esi+0x498u), r_eax);
    /* 00571e77: jmp 0x571dd4 */ goto L_00571dd4;
L_00571e7c:; BB(0x00571e7c);
    /* 00571e7c: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00571e7e: mov eax, 2 */ r_eax = 0x2u;
    /* 00571e83: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 00571e8a: mov ecx, esi */ r_ecx = r_esi;
    /* 00571e8c: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x571e91u); f_0051f664();
    /* 00571e91: mov eax, dword ptr [esi + 0x440] */ r_eax = R32((u32)(r_esi+0x440u));
    /* 00571e97: mov edi, dword ptr [esi + 0x44c] */ r_edi = R32((u32)(r_esi+0x44cu));
    /* 00571e9d: mov dword ptr [esi + 0x4a0], 0xa */ W32((u32)(r_esi+0x4a0u), 0xau);
    /* 00571ea7: and eax, 0xffffffd7 */ {  u32 a = r_eax; u32 b = 0xffffffd7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00571eaa: mov dword ptr [esi + 0x4b0], 0 */ W32((u32)(r_esi+0x4b0u), 0x0u);
    /* 00571eb4: mov dword ptr [esi + 0x440], eax */ W32((u32)(r_esi+0x440u), r_eax);
    /* 00571eba: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00571ebc: mov dword ptr [esi + 0x498], edx */ W32((u32)(r_esi+0x498u), r_edx);
    /* 00571ec2: mov dword ptr [esi + 0x49c], edx */ W32((u32)(r_esi+0x49cu), r_edx);
    /* 00571ec8: mov edx, dword ptr [esi + 0x490] */ r_edx = R32((u32)(r_esi+0x490u));
    /* 00571ece: mov dword ptr [esi + 0x4ac], edi */ W32((u32)(r_esi+0x4acu), r_edi);
    /* 00571ed4: mov edi, dword ptr [edx + 0xc] */ r_edi = R32((u32)(r_edx+0xcu));
    /* 00571ed7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00571ed9: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00571edb: jle 0x571eed */ if ((fZ||fS!=fO)) goto L_00571eed;
L_00571edd:; BB(0x00571edd);
    /* 00571edd: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 00571edf: mov edi, dword ptr [edx + 4] */ r_edi = R32((u32)(r_edx+0x4u));
    /* 00571ee2: mov dword ptr [ecx + eax*4], edi */ W32((u32)(r_ecx+r_eax*4), r_edi);
    /* 00571ee5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00571ee8: cmp eax, dword ptr [edx + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00571eeb: jl 0x571edd */ if ((fS!=fO)) goto L_00571edd;
L_00571eed:; BB(0x00571eed);
    /* 00571eed: mov dword ptr [edx + 8], 0 */ W32((u32)(r_edx+0x8u), 0x0u);
    /* 00571ef4: mov ecx, esi */ r_ecx = r_esi;
    /* 00571ef6: call 0x520bdc */ r_esp -= 4; W32(r_esp, 0x571efbu); f_00520bdc();
    /* 00571efb: jmp 0x571dd4 */ goto L_00571dd4;
}

void f_00571c2b(void)
{
    FN_ENTER(0x00571c2b);
}

void f_00571f00(void) /* sub_571F00 */
{
    FN_ENTER(0x00571f00);
    /* 00571f00: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00571f01: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00571f02: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00571f03: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00571f04: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00571f07: mov edi, ecx */ r_edi = r_ecx;
    /* 00571f09: mov eax, dword ptr [edi + 0x38] */ r_eax = R32((u32)(r_edi+0x38u));
    /* 00571f0c: mov edx, dword ptr [edi + 0x3c] */ r_edx = R32((u32)(r_edi+0x3cu));
    /* 00571f0f: fld dword ptr [0x926c14] */ FPUSH(R_F32((u32)(0x926c14u)));
    /* 00571f15: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00571f18: mov eax, dword ptr [edi + 0x40] */ r_eax = R32((u32)(r_edi+0x40u));
    /* 00571f1b: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00571f1f: fadd dword ptr [esp + 4] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x4u));
    /* 00571f23: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00571f27: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00571f2b: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 00571f2e: lea eax, [edi + 0x128] */ r_eax = (u32)(r_edi+0x128u);
    /* 00571f34: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 00571f36: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00571f37: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00571f38: call 0x7806dc */ r_esp -= 4; W32(r_esp, 0x571f3du); f_007806dc();
    /* 00571f3d: mov ebx, eax */ r_ebx = r_eax;
    /* 00571f3f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00571f42: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00571f44: je 0x572060 */ if (fZ) goto L_00572060;
L_00571f4a:; BB(0x00571f4a);
    /* 00571f4a: mov esi, dword ptr [ebx] */ r_esi = R32((u32)(r_ebx));
    /* 00571f4c: and esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a & b) & 0xffffffffu; r_esi = r; fZ = (r == 0); }
    /* 00571f4f: je 0x571f60 */ if (fZ) goto L_00571f60;
L_00571f51:; BB(0x00571f51);
    /* 00571f51: lea ebp, [edi + 0x38] */ r_ebp = (u32)(r_edi+0x38u);
    /* 00571f54: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00571f55: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00571f56: call 0x578c08 */ r_esp -= 4; W32(r_esp, 0x571f5bu); f_00578c08();
    /* 00571f5b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00571f5e: jmp 0x571f7e */ goto L_00571f7e;
L_00571f60:; BB(0x00571f60);
    /* 00571f60: push 0x21e */ { u32 v = 0x21eu; r_esp -= 4; W32(r_esp, v); }
    /* 00571f65: mov ecx, edi */ r_ecx = r_edi;
    /* 00571f67: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x571f6cu); f_007879b8();
    /* 00571f6c: lea ebp, [edi + 0x38] */ r_ebp = (u32)(r_edi+0x38u);
    /* 00571f6f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00571f71: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00571f72: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00571f73: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00571f74: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00571f75: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00571f76: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x571f7bu); f_008144b0();
    /* 00571f7b: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00571f7e:; BB(0x00571f7e);
    /* 00571f7e: push 0x40a00000 */ { u32 v = 0x40a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00571f83: mov ecx, edi */ r_ecx = r_edi;
    /* 00571f85: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x571f8au); f_007aaa30();
    /* 00571f8a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00571f8c: jne 0x571fb2 */ if (!fZ) goto L_00571fb2;
L_00571f8e:; BB(0x00571f8e);
    /* 00571f8e: push 0x41700000 */ { u32 v = 0x41700000u; r_esp -= 4; W32(r_esp, v); }
    /* 00571f93: mov ecx, edi */ r_ecx = r_edi;
    /* 00571f95: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x571f9au); f_007aaa30();
    /* 00571f9a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00571f9c: jne 0x571fb2 */ if (!fZ) goto L_00571fb2;
L_00571f9e:; BB(0x00571f9e);
    /* 00571f9e: push 0x41c80000 */ { u32 v = 0x41c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 00571fa3: mov ecx, edi */ r_ecx = r_edi;
    /* 00571fa5: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x571faau); f_007aaa30();
    /* 00571faa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00571fac: je 0x572060 */ if (fZ) goto L_00572060;
L_00571fb2:; BB(0x00571fb2);
    /* 00571fb2: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00571fb4: je 0x572040 */ if (fZ) goto L_00572040;
L_00571fba:; BB(0x00571fba);
    /* 00571fba: push 0x49 */ { u32 v = 0x49u; r_esp -= 4; W32(r_esp, v); }
    /* 00571fbc: mov edx, dword ptr [ebx + 4] */ r_edx = R32((u32)(r_ebx+0x4u));
    /* 00571fbf: add edx, 0x38 */ {  u32 a = r_edx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00571fc2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00571fc3: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x571fc8u); f_0050b510();
    /* 00571fc8: mov ebp, eax */ r_ebp = r_eax;
    /* 00571fca: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00571fcd: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00571fcf: je 0x572012 */ if (fZ) goto L_00572012;
L_00571fd1:; BB(0x00571fd1);
    /* 00571fd1: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00571fd3: call 0x50c094 */ r_esp -= 4; W32(r_esp, 0x571fd8u); f_0050c094();
    /* 00571fd8: mov esi, eax */ r_esi = r_eax;
    /* 00571fda: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00571fdd: call 0x50c08c */ r_esp -= 4; W32(r_esp, 0x571fe2u); f_0050c08c();
    /* 00571fe2: movzx edx, word ptr [ebp + 0x2c] */ r_edx = (u32)R16((u32)(r_ebp+0x2cu));
    /* 00571fe6: mov dword ptr [ebp + 0x58], 0 */ W32((u32)(r_ebp+0x58u), 0x0u);
    /* 00571fed: mov dword ptr [ebp + 0x50], esi */ W32((u32)(r_ebp+0x50u), r_esi);
    /* 00571ff0: mov dword ptr [ebp + 0x54], eax */ W32((u32)(r_ebp+0x54u), r_eax);
    /* 00571ff3: mov dword ptr [ebp + 0x60], 0x3f800000 */ W32((u32)(r_ebp+0x60u), 0x3f800000u);
    /* 00571ffa: or edx, 0xffff0600 */ {  u32 a = r_edx; u32 b = 0xffff0600u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00572000: mov word ptr [ebp + 0x2c], dx */ W16((u32)(r_ebp+0x2cu), (u16)r_edx);
    /* 00572004: mov dword ptr [ebp + 0x44], 0x40a00000 */ W32((u32)(r_ebp+0x44u), 0x40a00000u);
    /* 0057200b: mov dword ptr [ebp + 0x48], 0x3f800000 */ W32((u32)(r_ebp+0x48u), 0x3f800000u);
L_00572012:; BB(0x00572012);
    /* 00572012: push 0xa4 */ { u32 v = 0xa4u; r_esp -= 4; W32(r_esp, v); }
    /* 00572017: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 0057201a: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0057201d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057201e: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x572023u); f_0050b510();
    /* 00572023: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00572026: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00572028: je 0x572060 */ if (fZ) goto L_00572060;
L_0057202a:; BB(0x0057202a);
    /* 0057202a: mov dword ptr [eax + 0x44], 0x40a00000 */ W32((u32)(r_eax+0x44u), 0x40a00000u);
    /* 00572031: mov dword ptr [eax + 0x48], 0x3fc00000 */ W32((u32)(r_eax+0x48u), 0x3fc00000u);
    /* 00572038: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0057203b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0057203c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057203d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0057203e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0057203f: ret  */ FN_RET(0x00571f00); r_esp += 4; return;
L_00572040:; BB(0x00572040);
    /* 00572040: push 0xf3 */ { u32 v = 0xf3u; r_esp -= 4; W32(r_esp, v); }
    /* 00572045: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00572046: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x57204bu); f_0050b510();
    /* 0057204b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057204e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00572050: je 0x572060 */ if (fZ) goto L_00572060;
L_00572052:; BB(0x00572052);
    /* 00572052: mov dword ptr [eax + 0x44], 0x40a00000 */ W32((u32)(r_eax+0x44u), 0x40a00000u);
    /* 00572059: mov dword ptr [eax + 0x48], 0x40000000 */ W32((u32)(r_eax+0x48u), 0x40000000u);
L_00572060:; BB(0x00572060);
    /* 00572060: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00572063: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00572064: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00572065: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00572066: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00572067: ret  */ FN_RET(0x00571f00); r_esp += 4; return;
}

