#include "protos.h"

void f_00807320(void) /* sub_807320 */
{
    FN_ENTER(0x00807320);
    /* 00807320: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00807323: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 00807326: push 0x96f148 */ { u32 v = 0x96f148u; r_esp -= 4; W32(r_esp, v); }
    /* 0080732b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0080732c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0080732d: call 0x78e574 */ r_esp -= 4; W32(r_esp, 0x807332u); f_0078e574();
    /* 00807332: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 00807336: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00807337: call 0x5b9328 */ r_esp -= 4; W32(r_esp, 0x80733cu); f_005b9328();
    /* 0080733c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0080733f: cmp eax, dword ptr [0xaafc5c] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaafc5cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00807345: jg 0x807394 */ if ((!fZ&&fS==fO)) goto L_00807394;
L_00807347:; BB(0x00807347);
    /* 00807347: mov eax, dword ptr [0xaafc70] */ r_eax = R32((u32)(0xaafc70u));
    /* 0080734c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080734e: je 0x80738a */ if (fZ) goto L_0080738a;
L_00807350:; BB(0x00807350);
    /* 00807350: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 00807353: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00807354: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00807355: call 0x5b9bf4 */ r_esp -= 4; W32(r_esp, 0x80735au); f_005b9bf4();
    /* 0080735a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0080735d: mov dword ptr [0xa9bcac], eax */ W32((u32)(0xa9bcacu), r_eax);
    /* 00807362: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00807364: je 0x80737b */ if (fZ) goto L_0080737b;
L_00807366:; BB(0x00807366);
    /* 00807366: mov ecx, dword ptr [0xaab3f0] */ r_ecx = R32((u32)(0xaab3f0u));
    /* 0080736c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080736e: je 0x80737b */ if (fZ) goto L_0080737b;
L_00807370:; BB(0x00807370);
    /* 00807370: push dword ptr [eax] */ { u32 v = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, v); }
    /* 00807372: call 0x7a7b0c */ r_esp -= 4; W32(r_esp, 0x807377u); f_007a7b0c();
    /* 00807377: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0080737a: ret  */ FN_RET(0x00807320); r_esp += 4; return;
L_0080737b:; BB(0x0080737b);
    /* 0080737b: push 0x97f21c */ { u32 v = 0x97f21cu; r_esp -= 4; W32(r_esp, v); }
    /* 00807380: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x807385u); f_0061cdb0();
    /* 00807385: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00807386: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00807389: ret  */ FN_RET(0x00807320); r_esp += 4; return;
L_0080738a:; BB(0x0080738a);
    /* 0080738a: mov dword ptr [0xa9bcac], 0 */ W32((u32)(0xa9bcacu), 0x0u);
L_00807394:; BB(0x00807394);
    /* 00807394: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00807397: ret  */ FN_RET(0x00807320); r_esp += 4; return;
}

void f_0080739c(void) /* sub_80739C */
{
    FN_ENTER(0x0080739c);
    /* 0080739c: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0080739f: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 008073a2: push 0x97f250 */ { u32 v = 0x97f250u; r_esp -= 4; W32(r_esp, v); }
    /* 008073a7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008073a8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008073a9: call 0x78e574 */ r_esp -= 4; W32(r_esp, 0x8073aeu); f_0078e574();
    /* 008073ae: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 008073b2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008073b3: call 0x5b9328 */ r_esp -= 4; W32(r_esp, 0x8073b8u); f_005b9328();
    /* 008073b8: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008073bb: cmp eax, dword ptr [0xaafc54] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaafc54u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008073c1: jg 0x8073ec */ if ((!fZ&&fS==fO)) goto L_008073ec;
L_008073c3:; BB(0x008073c3);
    /* 008073c3: mov eax, dword ptr [0xaafc68] */ r_eax = R32((u32)(0xaafc68u));
    /* 008073c8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008073ca: je 0x8073e2 */ if (fZ) goto L_008073e2;
L_008073cc:; BB(0x008073cc);
    /* 008073cc: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 008073cf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008073d0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008073d1: call 0x5b9bf4 */ r_esp -= 4; W32(r_esp, 0x8073d6u); f_005b9bf4();
    /* 008073d6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008073d9: mov dword ptr [0xaafc50], eax */ W32((u32)(0xaafc50u), r_eax);
    /* 008073de: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008073e1: ret  */ FN_RET(0x0080739c); r_esp += 4; return;
L_008073e2:; BB(0x008073e2);
    /* 008073e2: mov dword ptr [0xaafc50], 0 */ W32((u32)(0xaafc50u), 0x0u);
L_008073ec:; BB(0x008073ec);
    /* 008073ec: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008073ef: ret  */ FN_RET(0x0080739c); r_esp += 4; return;
}

void f_008073f4(void) /* sub_8073F4 */
{
    FN_ENTER(0x008073f4);
    /* 008073f4: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008073f7: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 008073fa: push 0x97f248 */ { u32 v = 0x97f248u; r_esp -= 4; W32(r_esp, v); }
    /* 008073ff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00807400: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00807401: call 0x78e574 */ r_esp -= 4; W32(r_esp, 0x807406u); f_0078e574();
    /* 00807406: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 0080740a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0080740b: call 0x5b9328 */ r_esp -= 4; W32(r_esp, 0x807410u); f_005b9328();
    /* 00807410: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00807413: cmp eax, dword ptr [0xaafc58] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaafc58u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00807419: jg 0x80743f */ if ((!fZ&&fS==fO)) goto L_0080743f;
L_0080741b:; BB(0x0080741b);
    /* 0080741b: mov eax, dword ptr [0xaafc6c] */ r_eax = R32((u32)(0xaafc6cu));
    /* 00807420: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00807422: je 0x807435 */ if (fZ) goto L_00807435;
L_00807424:; BB(0x00807424);
    /* 00807424: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 00807427: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00807428: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00807429: call 0x5b9910 */ r_esp -= 4; W32(r_esp, 0x80742eu); f_005b9910();
    /* 0080742e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00807431: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00807434: ret  */ FN_RET(0x008073f4); r_esp += 4; return;
L_00807435:; BB(0x00807435);
    /* 00807435: mov dword ptr [0xaafc6c], 0 */ W32((u32)(0xaafc6cu), 0x0u);
L_0080743f:; BB(0x0080743f);
    /* 0080743f: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00807442: ret  */ FN_RET(0x008073f4); r_esp += 4; return;
}

void f_00807448(void) /* sub_807448 */
{
    FN_ENTER(0x00807448);
    /* 00807448: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00807449: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0080744a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0080744b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0080744c: sub esp, 0x184 */ {  u32 a = r_esp; u32 b = 0x184u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00807452: mov ebp, eax */ r_ebp = r_eax;
    /* 00807454: call 0x482a30 */ r_esp -= 4; W32(r_esp, 0x807459u); f_00482a30();
    /* 00807459: movzx edx, ax */ r_edx = (u32)(u16)r_eax;
    /* 0080745c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080745e: je 0x807482 */ if (fZ) goto L_00807482;
L_00807460:; BB(0x00807460);
    /* 00807460: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00807463: jne 0x80746d */ if (!fZ) goto L_0080746d;
L_00807465:; BB(0x00807465);
    /* 00807465: fld dword ptr [0x97f1b8] */ FPUSH(R_F32((u32)(0x97f1b8u)));
    /* 0080746b: jmp 0x807488 */ goto L_00807488;
L_0080746d:; BB(0x0080746d);
    /* 0080746d: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00807470: jne 0x80747a */ if (!fZ) goto L_0080747a;
L_00807472:; BB(0x00807472);
    /* 00807472: fld dword ptr [0x97f1bc] */ FPUSH(R_F32((u32)(0x97f1bcu)));
    /* 00807478: jmp 0x807488 */ goto L_00807488;
L_0080747a:; BB(0x0080747a);
    /* 0080747a: fld dword ptr [0x97f1c0] */ FPUSH(R_F32((u32)(0x97f1c0u)));
    /* 00807480: jmp 0x807488 */ goto L_00807488;
L_00807482:; BB(0x00807482);
    /* 00807482: fld dword ptr [0x97f1c0] */ FPUSH(R_F32((u32)(0x97f1c0u)));
L_00807488:; BB(0x00807488);
    /* 00807488: lea edi, [esp + 0xc] */ r_edi = (u32)(r_esp+0xcu);
    /* 0080748c: mov esi, 0x97ede0 */ r_esi = 0x97ede0u;
    /* 00807491: mov ecx, 0x178 */ r_ecx = 0x178u;
    /* 00807496: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00807497: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0080749a: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 0080749c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0080749d: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008074a0: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 008074a2: fld dword ptr [0x97f1b4] */ FPUSH(R_F32((u32)(0x97f1b4u)));
    /* 008074a8: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008074aa: fld dword ptr [0x97f1b0] */ FPUSH(R_F32((u32)(0x97f1b0u)));
    /* 008074b0: fld dword ptr [0x97f1ac] */ FPUSH(R_F32((u32)(0x97f1acu)));
    /* 008074b6: fld dword ptr [0x97f1a8] */ FPUSH(R_F32((u32)(0x97f1a8u)));
    /* 008074bc: mov eax, dword ptr [0xaafc9c] */ r_eax = R32((u32)(0xaafc9cu));
    /* 008074c1: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 008074c3: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 008074c5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 008074c7: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 008074c9: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 008074cb: fmulp st(4) */ ST(4) = ST(4) * ST(0); FPOP();
    /* 008074cd: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 008074cf: fst dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0));
    /* 008074d3: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 008074d5: fst dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0));
    /* 008074d9: fst dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0));
    /* 008074dd: fst dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0));
    /* 008074e1: fst dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0));
    /* 008074e5: fst dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0));
    /* 008074e9: fst dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0));
    /* 008074ed: fst dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0));
    /* 008074f1: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 008074f3: fst dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0));
    /* 008074f7: fst dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0));
    /* 008074fb: fst dword ptr [esp + 0x5c] */ W_F32((u32)(r_esp+0x5cu), ST(0));
    /* 008074ff: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00807501: fst dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0));
    /* 00807505: fst dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0));
    /* 00807509: fst dword ptr [esp + 0x74] */ W_F32((u32)(r_esp+0x74u), ST(0));
    /* 0080750d: fst dword ptr [esp + 0x7c] */ W_F32((u32)(r_esp+0x7cu), ST(0));
    /* 00807511: fst dword ptr [esp + 0x84] */ W_F32((u32)(r_esp+0x84u), ST(0));
    /* 00807518: fst dword ptr [esp + 0x8c] */ W_F32((u32)(r_esp+0x8cu), ST(0));
    /* 0080751f: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00807521: fst dword ptr [esp + 0x94] */ W_F32((u32)(r_esp+0x94u), ST(0));
    /* 00807528: fst dword ptr [esp + 0x9c] */ W_F32((u32)(r_esp+0x9cu), ST(0));
    /* 0080752f: fst dword ptr [esp + 0xa4] */ W_F32((u32)(r_esp+0xa4u), ST(0));
    /* 00807536: fst dword ptr [esp + 0xac] */ W_F32((u32)(r_esp+0xacu), ST(0));
    /* 0080753d: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0080753f: fst dword ptr [esp + 0xb4] */ W_F32((u32)(r_esp+0xb4u), ST(0));
    /* 00807546: fst dword ptr [esp + 0xbc] */ W_F32((u32)(r_esp+0xbcu), ST(0));
    /* 0080754d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0080754f: fst dword ptr [esp + 0xc4] */ W_F32((u32)(r_esp+0xc4u), ST(0));
    /* 00807556: fst dword ptr [esp + 0xcc] */ W_F32((u32)(r_esp+0xccu), ST(0));
    /* 0080755d: fst dword ptr [esp + 0xd4] */ W_F32((u32)(r_esp+0xd4u), ST(0));
    /* 00807564: fst dword ptr [esp + 0xdc] */ W_F32((u32)(r_esp+0xdcu), ST(0));
    /* 0080756b: fst dword ptr [esp + 0xe4] */ W_F32((u32)(r_esp+0xe4u), ST(0));
    /* 00807572: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00807574: fst dword ptr [esp + 0xec] */ W_F32((u32)(r_esp+0xecu), ST(0));
    /* 0080757b: fst dword ptr [esp + 0xf4] */ W_F32((u32)(r_esp+0xf4u), ST(0));
    /* 00807582: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00807584: fst dword ptr [esp + 0xfc] */ W_F32((u32)(r_esp+0xfcu), ST(0));
    /* 0080758b: fst dword ptr [esp + 0x104] */ W_F32((u32)(r_esp+0x104u), ST(0));
    /* 00807592: fst dword ptr [esp + 0x10c] */ W_F32((u32)(r_esp+0x10cu), ST(0));
    /* 00807599: fst dword ptr [esp + 0x114] */ W_F32((u32)(r_esp+0x114u), ST(0));
    /* 008075a0: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 008075a2: fst dword ptr [esp + 0x11c] */ W_F32((u32)(r_esp+0x11cu), ST(0));
    /* 008075a9: fstp dword ptr [esp + 0x124] */ W_F32((u32)(r_esp+0x124u), ST(0)); FPOP();
    /* 008075b0: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 008075b2: fst dword ptr [esp + 0x12c] */ W_F32((u32)(r_esp+0x12cu), ST(0));
    /* 008075b9: fst dword ptr [esp + 0x134] */ W_F32((u32)(r_esp+0x134u), ST(0));
    /* 008075c0: fst dword ptr [esp + 0x13c] */ W_F32((u32)(r_esp+0x13cu), ST(0));
    /* 008075c7: fstp dword ptr [esp + 0x144] */ W_F32((u32)(r_esp+0x144u), ST(0)); FPOP();
    /* 008075ce: fst dword ptr [esp + 0x14c] */ W_F32((u32)(r_esp+0x14cu), ST(0));
    /* 008075d5: fst dword ptr [esp + 0x154] */ W_F32((u32)(r_esp+0x154u), ST(0));
    /* 008075dc: fst dword ptr [esp + 0x15c] */ W_F32((u32)(r_esp+0x15cu), ST(0));
    /* 008075e3: fst dword ptr [esp + 0x164] */ W_F32((u32)(r_esp+0x164u), ST(0));
    /* 008075ea: fst dword ptr [esp + 0x16c] */ W_F32((u32)(r_esp+0x16cu), ST(0));
    /* 008075f1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 008075f3: fstp dword ptr [esp + 0x174] */ W_F32((u32)(r_esp+0x174u), ST(0)); FPOP();
    /* 008075fa: fstp dword ptr [esp + 0x17c] */ W_F32((u32)(r_esp+0x17cu), ST(0)); FPOP();
    /* 00807601: mov esi, dword ptr [esp + eax*8 + 0xc] */ r_esi = R32((u32)(r_esp+r_eax*8+0xcu));
    /* 00807605: mov dword ptr [ebp + 0xc], esi */ W32((u32)(r_ebp+0xcu), r_esi);
    /* 00807608: mov esi, dword ptr [esp + eax*8 + 0x10] */ r_esi = R32((u32)(r_esp+r_eax*8+0x10u));
    /* 0080760c: call 0x8076d8 */ r_esp -= 4; W32(r_esp, 0x807611u); f_008076d8();
    /* 00807611: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00807613: je 0x807629 */ if (fZ) goto L_00807629;
L_00807615:; BB(0x00807615);
    /* 00807615: mov edx, dword ptr [0xaafc98] */ r_edx = R32((u32)(0xaafc98u));
    /* 0080761b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0080761d: jl 0x807629 */ if ((fS!=fO)) goto L_00807629;
L_0080761f:; BB(0x0080761f);
    /* 0080761f: cmp edx, 9 */ {  u32 a = r_edx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00807622: jg 0x807629 */ if ((!fZ&&fS==fO)) goto L_00807629;
L_00807624:; BB(0x00807624);
    /* 00807624: mov esi, 0x3f000000 */ r_esi = 0x3f000000u;
L_00807629:; BB(0x00807629);
    /* 00807629: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0080762c: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 00807630: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00807632: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00807634: jle 0x807672 */ if ((fZ||fS!=fO)) goto L_00807672;
L_00807636:; BB(0x00807636);
    /* 00807636: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
L_0080763a:; BB(0x0080763a);
    /* 0080763a: mov esi, dword ptr [edx + 0x24] */ r_esi = R32((u32)(r_edx+0x24u));
    /* 0080763d: mov edi, dword ptr [edx + 0x2c] */ r_edi = R32((u32)(r_edx+0x2cu));
    /* 00807640: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00807642: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00807644: jle 0x807661 */ if ((fZ||fS!=fO)) goto L_00807661;
L_00807646:; BB(0x00807646);
    /* 00807646: mov ecx, dword ptr [esi + 0x1c] */ r_ecx = R32((u32)(r_esi+0x1cu));
    /* 00807649: and ecx, 0xfffbffff */ {  u32 a = r_ecx; u32 b = 0xfffbffffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0080764f: mov dword ptr [esi + 0x1c], ecx */ W32((u32)(r_esi+0x1cu), r_ecx);
    /* 00807652: add esi, 0x20 */ {  u32 a = r_esi; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00807655: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00807658: cmp ebx, dword ptr [edx + 0x2c] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx+0x2cu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0080765b: jl 0x807646 */ if ((fS!=fO)) goto L_00807646;
L_0080765d:; BB(0x0080765d);
    /* 0080765d: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
L_00807661:; BB(0x00807661);
    /* 00807661: add edx, 0x34 */ {  u32 a = r_edx; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00807664: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00807667: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00807669: jl 0x80763a */ if ((fS!=fO)) goto L_0080763a;
L_0080766b:; BB(0x0080766b);
    /* 0080766b: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 0080766f: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
L_00807672:; BB(0x00807672);
    /* 00807672: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00807674: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00807676: jle 0x8076c6 */ if ((fZ||fS!=fO)) goto L_008076c6;
L_00807678:; BB(0x00807678);
    /* 00807678: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
L_0080767c:; BB(0x0080767c);
    /* 0080767c: mov edi, dword ptr [edx + 0x24] */ r_edi = R32((u32)(r_edx+0x24u));
    /* 0080767f: mov ebx, dword ptr [edx + 0x2c] */ r_ebx = R32((u32)(r_edx+0x2cu));
    /* 00807682: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00807684: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00807686: jle 0x8076bc */ if ((fZ||fS!=fO)) goto L_008076bc;
L_00807688:; BB(0x00807688);
    /* 00807688: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
    /* 0080768c: mov ebp, dword ptr [esp + 4] */ r_ebp = R32((u32)(r_esp+0x4u));
L_00807690:; BB(0x00807690);
    /* 00807690: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00807693: test ecx, 0x40000 */ {  u32 a = r_ecx; u32 b = 0x40000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00807699: jne 0x8076aa */ if (!fZ) goto L_008076aa;
L_0080769b:; BB(0x0080769b);
    /* 0080769b: or ecx, 0x40000 */ {  u32 a = r_ecx; u32 b = 0x40000u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 008076a1: mov dword ptr [edi + 0x10], ebp */ W32((u32)(r_edi+0x10u), r_ebp);
    /* 008076a4: mov dword ptr [edi + 0x1c], ecx */ W32((u32)(r_edi+0x1cu), r_ecx);
    /* 008076a7: mov ebx, dword ptr [edx + 0x2c] */ r_ebx = R32((u32)(r_edx+0x2cu));
L_008076aa:; BB(0x008076aa);
    /* 008076aa: add edi, 0x20 */ {  u32 a = r_edi; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008076ad: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008076b0: cmp esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008076b2: jl 0x807690 */ if ((fS!=fO)) goto L_00807690;
L_008076b4:; BB(0x008076b4);
    /* 008076b4: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
    /* 008076b8: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
L_008076bc:; BB(0x008076bc);
    /* 008076bc: add edx, 0x34 */ {  u32 a = r_edx; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008076bf: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008076c2: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008076c4: jl 0x80767c */ if ((fS!=fO)) goto L_0080767c;
L_008076c6:; BB(0x008076c6);
    /* 008076c6: add esp, 0x184 */ {  u32 a = r_esp; u32 b = 0x184u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008076cc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008076cd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008076ce: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008076cf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008076d0: ret  */ FN_RET(0x00807448); r_esp += 4; return;
}

void f_008076d4(void) /* sub_8076D4 */
{
    FN_ENTER(0x008076d4);
    /* 008076d4: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 008076d8: mov edx, dword ptr [eax*4 + 0x97f040] */ r_edx = R32((u32)(r_eax*4+0x97f040u));
    /* 008076df: cmp edx, 0xe */ {  u32 a = r_edx; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008076e2: je 0x8076e7 */ if (fZ) goto L_008076e7;
L_008076e4:; BB(0x008076e4);
    /* 008076e4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008076e6: ret  */ FN_RET(0x008076d4); r_esp += 4; return;
L_008076e7:; BB(0x008076e7);
    /* 008076e7: mov eax, 1 */ r_eax = 0x1u;
    /* 008076ec: ret  */ FN_RET(0x008076d4); r_esp += 4; return;
}

void f_008076d8(void) /* sub_8076D8 */
{
    FN_ENTER(0x008076d8);
    /* 008076d8: mov edx, dword ptr [eax*4 + 0x97f040] */ r_edx = R32((u32)(r_eax*4+0x97f040u));
    /* 008076df: cmp edx, 0xe */ {  u32 a = r_edx; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008076e2: je 0x8076e7 */ if (fZ) goto L_008076e7;
L_008076e4:; BB(0x008076e4);
    /* 008076e4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008076e6: ret  */ FN_RET(0x008076d8); r_esp += 4; return;
L_008076e7:; BB(0x008076e7);
    /* 008076e7: mov eax, 1 */ r_eax = 0x1u;
    /* 008076ec: ret  */ FN_RET(0x008076d8); r_esp += 4; return;
}

void f_008076f0(void) /* sub_8076F0 */
{
    FN_ENTER(0x008076f0);
    /* 008076f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008076f1: mov ebp, esp */ r_ebp = r_esp;
    /* 008076f3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 008076f5: push 0x8f71a8 */ { u32 v = 0x8f71a8u; r_esp -= 4; W32(r_esp, v); }
    /* 008076fa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00807700: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00807701: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00807708: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0080770b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0080770e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00807711: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00807714: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00807717: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00807719: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00807720: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x807725u); f_005caba4();
    /* 00807725: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00807726: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00807729: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0080772b: je 0x807750 */ if (fZ) goto L_00807750;
L_0080772d:; BB(0x0080772d);
    /* 0080772d: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00807734: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0080773b: push dword ptr [0xaca378] */ { u32 v = R32((u32)(0xaca378u)); r_esp -= 4; W32(r_esp, v); }
    /* 00807741: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00807744: call 0x807760 */ r_esp -= 4; W32(r_esp, 0x807749u); f_00807760();
    /* 00807749: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00807750:; BB(0x00807750);
    /* 00807750: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00807753: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0080775a: mov esp, ebp */ r_esp = r_ebp;
    /* 0080775c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0080775d: ret  */ FN_RET(0x008076f0); r_esp += 4; return;
}

void f_00807760(void) /* sub_807760 */
{
    FN_ENTER(0x00807760);
    /* 00807760: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00807761: mov ebp, esp */ r_ebp = r_esp;
    /* 00807763: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00807765: push 0x8f71c4 */ { u32 v = 0x8f71c4u; r_esp -= 4; W32(r_esp, v); }
    /* 0080776a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00807770: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00807771: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00807778: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0080777b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0080777e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00807781: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00807784: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00807787: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0080778a: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0080778d: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x807792u); f_008193cc();
    /* 00807792: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00807799: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0080779c: mov dword ptr [ebx], 0xb475f0 */ W32((u32)(r_ebx), 0xb475f0u);
    /* 008077a2: mov eax, dword ptr [0xa114a8] */ r_eax = R32((u32)(0xa114a8u));
    /* 008077a7: mov ecx, dword ptr [0xaafc6c] */ r_ecx = R32((u32)(0xaafc6cu));
    /* 008077ad: mov dword ptr [ebx + 0x38], 0x32 */ W32((u32)(r_ebx+0x38u), 0x32u);
    /* 008077b4: mov dword ptr [ebx + 4], eax */ W32((u32)(r_ebx+0x4u), r_eax);
    /* 008077b7: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008077b9: mov dword ptr [ebx + 0x1c], edx */ W32((u32)(r_ebx+0x1cu), r_edx);
    /* 008077bc: mov dword ptr [ebx + 0x30], edx */ W32((u32)(r_ebx+0x30u), r_edx);
    /* 008077bf: mov dword ptr [ebx + 0x34], edx */ W32((u32)(r_ebx+0x34u), r_edx);
    /* 008077c2: mov dword ptr [ebx + 0x3c], edx */ W32((u32)(r_ebx+0x3cu), r_edx);
    /* 008077c5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008077c7: je 0x8077d3 */ if (fZ) goto L_008077d3;
L_008077c9:; BB(0x008077c9);
    /* 008077c9: mov ecx, ebx */ r_ecx = r_ebx;
    /* 008077cb: call 0x807828 */ r_esp -= 4; W32(r_esp, 0x8077d0u); f_00807828();
    /* 008077d0: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
L_008077d3:; BB(0x008077d3);
    /* 008077d3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 008077d5: call 0x80b474 */ r_esp -= 4; W32(r_esp, 0x8077dau); f_0080b474();
    /* 008077da: mov eax, dword ptr [0xaafc9c] */ r_eax = R32((u32)(0xaafc9cu));
    /* 008077df: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008077e2: je 0x807802 */ if (fZ) goto L_00807802;
L_008077e4:; BB(0x008077e4);
    /* 008077e4: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 008077e7: call 0x80a650 */ r_esp -= 4; W32(r_esp, 0x8077ecu); f_0080a650();
    /* 008077ec: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 008077ef: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 008077f2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 008077f5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 008077fc: mov esp, ebp */ r_esp = r_ebp;
    /* 008077fe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008077ff: ret 4 */ FN_RET(0x00807760); r_esp += 8; return;
L_00807802:; BB(0x00807802);
    /* 00807802: mov eax, dword ptr [0xaafc50] */ r_eax = R32((u32)(0xaafc50u));
    /* 00807807: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00807809: je 0x8077e4 */ if (fZ) goto L_008077e4;
L_0080780b:; BB(0x0080780b);
    /* 0080780b: mov eax, dword ptr [0xaafca4] */ r_eax = R32((u32)(0xaafca4u));
    /* 00807810: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00807812: je 0x8077e4 */ if (fZ) goto L_008077e4;
L_00807814:; BB(0x00807814);
    /* 00807814: mov eax, dword ptr [eax + 0x14] */ r_eax = R32((u32)(r_eax+0x14u));
    /* 00807817: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00807819: je 0x8077e4 */ if (fZ) goto L_008077e4;
L_0080781b:; BB(0x0080781b);
    /* 0080781b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0080781e: call 0x80b484 */ r_esp -= 4; W32(r_esp, 0x807823u); f_0080b484();
    /* 00807823: jmp 0x8077e4 */ goto L_008077e4;
}

void f_00807828(void) /* sub_807828 */
{
    FN_ENTER(0x00807828);
    /* 00807828: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00807829: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0080782c: mov ebp, dword ptr [0xaafc6c] */ r_ebp = R32((u32)(0xaafc6cu));
    /* 00807832: mov eax, ebp */ r_eax = r_ebp;
    /* 00807834: call 0x807aa8 */ r_esp -= 4; W32(r_esp, 0x807839u); f_00807aa8();
    /* 00807839: movsx eax, word ptr [ebp] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp));
    /* 0080783d: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00807840: je 0x80786b */ if (fZ) goto L_0080786b;
L_00807842:; BB(0x00807842);
    /* 00807842: mov dword ptr [esp + 0xc], ebx */ W32((u32)(r_esp+0xcu), r_ebx);
    /* 00807846: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 0080784a: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
L_0080784e:; BB(0x0080784e);
    /* 0080784e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00807850: jne 0x807933 */ if (!fZ) goto L_00807933;
L_00807856:; BB(0x00807856);
    /* 00807856: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00807858: jne 0x807870 */ if (!fZ) goto L_00807870;
L_0080785a:; BB(0x0080785a);
    /* 0080785a: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080785d: jne 0x80784e */ if (!fZ) goto L_0080784e;
L_0080785f:; BB(0x0080785f);
    /* 0080785f: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 00807863: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 00807867: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
L_0080786b:; BB(0x0080786b);
    /* 0080786b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0080786e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0080786f: ret  */ FN_RET(0x00807828); r_esp += 4; return;
L_00807870:; BB(0x00807870);
    /* 00807870: movzx eax, word ptr [ebp + 2] */ r_eax = (u32)R16((u32)(r_ebp+0x2u));
    /* 00807874: movzx ebx, word ptr [ebp + 4] */ r_ebx = (u32)R16((u32)(r_ebp+0x4u));
    /* 00807878: movzx edi, word ptr [ebp + 6] */ r_edi = (u32)R16((u32)(r_ebp+0x6u));
    /* 0080787c: lea ecx, [ebp + 2] */ r_ecx = (u32)(r_ebp+0x2u);
    /* 0080787f: mov edx, eax */ r_edx = r_eax;
    /* 00807881: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00807884: and edx, 0xff00 */ {  u32 a = r_edx; u32 b = 0xff00u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0080788a: sar edx, 8 */ { u32 c = (8u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0080788d: or edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0080788f: mov word ptr [ebp + 2], dx */ W16((u32)(r_ebp+0x2u), (u16)r_edx);
    /* 00807893: mov esi, ebx */ r_esi = r_ebx;
    /* 00807895: and esi, 0xff00 */ {  u32 a = r_esi; u32 b = 0xff00u; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0080789b: sar esi, 8 */ { u32 c = (8u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 0080789e: shl ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 008078a1: or esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 008078a3: mov word ptr [ebp + 4], si */ W16((u32)(r_ebp+0x4u), (u16)r_esi);
    /* 008078a7: mov edx, edi */ r_edx = r_edi;
    /* 008078a9: and edx, 0xff00 */ {  u32 a = r_edx; u32 b = 0xff00u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 008078af: sar edx, 8 */ { u32 c = (8u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 008078b2: shl edi, 8 */ { u32 c = (8u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 008078b5: or edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 008078b7: movzx eax, dx */ r_eax = (u32)(u16)r_edx;
    /* 008078ba: mov word ptr [ebp + 6], ax */ W16((u32)(r_ebp+0x6u), (u16)r_eax);
    /* 008078be: movsx edx, dx */ r_edx = (u32)(i32)(i16)(u16)r_edx;
    /* 008078c1: lea eax, [ebp + 8] */ r_eax = (u32)(r_ebp+0x8u);
    /* 008078c4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008078c6: je 0x8078fe */ if (fZ) goto L_008078fe;
L_008078c8:; BB(0x008078c8);
    /* 008078c8: movzx ebx, word ptr [eax] */ r_ebx = (u32)R16((u32)(r_eax));
    /* 008078cb: movzx edi, word ptr [eax + 2] */ r_edi = (u32)R16((u32)(r_eax+0x2u));
    /* 008078cf: mov esi, ebx */ r_esi = r_ebx;
    /* 008078d1: and esi, 0xff00 */ {  u32 a = r_esi; u32 b = 0xff00u; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 008078d7: sar esi, 8 */ { u32 c = (8u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 008078da: shl ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 008078dd: or esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 008078df: mov word ptr [eax], si */ W16((u32)(r_eax), (u16)r_esi);
    /* 008078e2: mov ebx, edi */ r_ebx = r_edi;
    /* 008078e4: and ebx, 0xff00 */ {  u32 a = r_ebx; u32 b = 0xff00u; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 008078ea: sar ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 008078ed: shl edi, 8 */ { u32 c = (8u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 008078f0: or ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 008078f2: mov word ptr [eax + 2], bx */ W16((u32)(r_eax+0x2u), (u16)r_ebx);
    /* 008078f6: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008078f9: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 008078fc: jne 0x8078c8 */ if (!fZ) goto L_008078c8;
L_008078fe:; BB(0x008078fe);
    /* 008078fe: movsx edx, word ptr [ecx] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx));
    /* 00807901: lea eax, [edx] */ r_eax = (u32)(r_edx);
    /* 00807903: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00807906: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00807908: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0080790a: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080790c: lea ebp, [ebp + edx + 4] */ r_ebp = (u32)(r_ebp+r_edx+0x4u);
    /* 00807910: movzx ecx, word ptr [ebp] */ r_ecx = (u32)R16((u32)(r_ebp));
    /* 00807914: mov esi, ecx */ r_esi = r_ecx;
    /* 00807916: and esi, 0xff00 */ {  u32 a = r_esi; u32 b = 0xff00u; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0080791c: sar esi, 8 */ { u32 c = (8u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 0080791f: shl ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00807922: or esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00807924: movzx ebx, si */ r_ebx = (u32)(u16)r_esi;
    /* 00807927: mov word ptr [ebp], bx */ W16((u32)(r_ebp), (u16)r_ebx);
    /* 0080792b: movsx eax, si */ r_eax = (u32)(i32)(i16)(u16)r_esi;
    /* 0080792e: jmp 0x80785a */ goto L_0080785a;
L_00807933:; BB(0x00807933);
    /* 00807933: movzx eax, word ptr [ebp + 2] */ r_eax = (u32)R16((u32)(r_ebp+0x2u));
    /* 00807937: movzx ebx, word ptr [ebp + 4] */ r_ebx = (u32)R16((u32)(r_ebp+0x4u));
    /* 0080793b: lea ecx, [ebp + 2] */ r_ecx = (u32)(r_ebp+0x2u);
    /* 0080793e: mov edx, eax */ r_edx = r_eax;
    /* 00807940: and edx, 0xff00 */ {  u32 a = r_edx; u32 b = 0xff00u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00807946: sar edx, 8 */ { u32 c = (8u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00807949: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0080794c: or edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0080794e: mov word ptr [ebp + 2], dx */ W16((u32)(r_ebp+0x2u), (u16)r_edx);
    /* 00807952: mov edi, ebx */ r_edi = r_ebx;
    /* 00807954: and edi, 0xff00 */ {  u32 a = r_edi; u32 b = 0xff00u; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0080795a: sar edi, 8 */ { u32 c = (8u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 0080795d: shl ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 00807960: or edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 00807962: movzx esi, di */ r_esi = (u32)(u16)r_edi;
    /* 00807965: mov word ptr [ebp + 4], si */ W16((u32)(r_ebp+0x4u), (u16)r_esi);
    /* 00807969: movsx edx, di */ r_edx = (u32)(i32)(i16)(u16)r_edi;
    /* 0080796c: lea eax, [ebp + 8] */ r_eax = (u32)(r_ebp+0x8u);
    /* 0080796f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00807971: je 0x807a71 */ if (fZ) goto L_00807a71;
L_00807977:; BB(0x00807977);
    /* 00807977: movzx ebx, word ptr [eax] */ r_ebx = (u32)R16((u32)(r_eax));
    /* 0080797a: mov esi, ebx */ r_esi = r_ebx;
    /* 0080797c: and esi, 0xff00 */ {  u32 a = r_esi; u32 b = 0xff00u; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 00807982: sar esi, 8 */ { u32 c = (8u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 00807985: shl ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 00807988: or esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 0080798a: movzx ebx, word ptr [eax + 2] */ r_ebx = (u32)R16((u32)(r_eax+0x2u));
    /* 0080798e: mov word ptr [eax], si */ W16((u32)(r_eax), (u16)r_esi);
    /* 00807991: mov esi, ebx */ r_esi = r_ebx;
    /* 00807993: and esi, 0xff00 */ {  u32 a = r_esi; u32 b = 0xff00u; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 00807999: sar esi, 8 */ { u32 c = (8u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 0080799c: shl ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 0080799f: or esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 008079a1: mov word ptr [eax + 2], si */ W16((u32)(r_eax+0x2u), (u16)r_esi);
    /* 008079a5: mov esi, dword ptr [eax + 4] */ r_esi = R32((u32)(r_eax+0x4u));
    /* 008079a8: mov ebx, esi */ r_ebx = r_esi;
    /* 008079aa: and ebx, 0xff000000 */ {  u32 a = r_ebx; u32 b = 0xff000000u; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 008079b0: shr ebx, 0x18 */ { u32 c = (24u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 008079b3: mov edi, esi */ r_edi = r_esi;
    /* 008079b5: and edi, 0xff0000 */ {  u32 a = r_edi; u32 b = 0xff0000u; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 008079bb: shr edi, 8 */ { u32 c = (8u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 008079be: or ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 008079c0: mov edi, esi */ r_edi = r_esi;
    /* 008079c2: shl esi, 0x18 */ { u32 c = (24u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 008079c5: and edi, 0xff00 */ {  u32 a = r_edi; u32 b = 0xff00u; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 008079cb: shl edi, 8 */ { u32 c = (8u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 008079ce: or ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 008079d0: or ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 008079d2: mov esi, dword ptr [eax + 8] */ r_esi = R32((u32)(r_eax+0x8u));
    /* 008079d5: mov dword ptr [eax + 4], ebx */ W32((u32)(r_eax+0x4u), r_ebx);
    /* 008079d8: mov ebx, esi */ r_ebx = r_esi;
    /* 008079da: and ebx, 0xff000000 */ {  u32 a = r_ebx; u32 b = 0xff000000u; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 008079e0: shr ebx, 0x18 */ { u32 c = (24u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 008079e3: mov edi, esi */ r_edi = r_esi;
    /* 008079e5: and edi, 0xff0000 */ {  u32 a = r_edi; u32 b = 0xff0000u; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 008079eb: shr edi, 8 */ { u32 c = (8u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 008079ee: or ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 008079f0: mov edi, esi */ r_edi = r_esi;
    /* 008079f2: shl esi, 0x18 */ { u32 c = (24u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 008079f5: and edi, 0xff00 */ {  u32 a = r_edi; u32 b = 0xff00u; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 008079fb: shl edi, 8 */ { u32 c = (8u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 008079fe: or ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 00807a00: or ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 00807a02: mov dword ptr [eax + 8], ebx */ W32((u32)(r_eax+0x8u), r_ebx);
    /* 00807a05: mov ebx, dword ptr [eax + 0xc] */ r_ebx = R32((u32)(r_eax+0xcu));
    /* 00807a08: mov edi, ebx */ r_edi = r_ebx;
    /* 00807a0a: and edi, 0xff000000 */ {  u32 a = r_edi; u32 b = 0xff000000u; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 00807a10: shr edi, 0x18 */ { u32 c = (24u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 00807a13: mov esi, ebx */ r_esi = r_ebx;
    /* 00807a15: and esi, 0xff0000 */ {  u32 a = r_esi; u32 b = 0xff0000u; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 00807a1b: shr esi, 8 */ { u32 c = (8u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 00807a1e: or edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 00807a20: mov esi, ebx */ r_esi = r_ebx;
    /* 00807a22: shl ebx, 0x18 */ { u32 c = (24u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 00807a25: and esi, 0xff00 */ {  u32 a = r_esi; u32 b = 0xff00u; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 00807a2b: shl esi, 8 */ { u32 c = (8u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 00807a2e: or edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 00807a30: mov esi, dword ptr [eax + 0x10] */ r_esi = R32((u32)(r_eax+0x10u));
    /* 00807a33: or edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 00807a35: mov dword ptr [eax + 0xc], edi */ W32((u32)(r_eax+0xcu), r_edi);
    /* 00807a38: mov ebx, esi */ r_ebx = r_esi;
    /* 00807a3a: and ebx, 0xff000000 */ {  u32 a = r_ebx; u32 b = 0xff000000u; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 00807a40: shr ebx, 0x18 */ { u32 c = (24u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 00807a43: mov edi, esi */ r_edi = r_esi;
    /* 00807a45: and edi, 0xff0000 */ {  u32 a = r_edi; u32 b = 0xff0000u; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 00807a4b: shr edi, 8 */ { u32 c = (8u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 00807a4e: or ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 00807a50: mov edi, esi */ r_edi = r_esi;
    /* 00807a52: shl esi, 0x18 */ { u32 c = (24u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 00807a55: and edi, 0xff00 */ {  u32 a = r_edi; u32 b = 0xff00u; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 00807a5b: shl edi, 8 */ { u32 c = (8u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 00807a5e: or ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 00807a60: or ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 00807a62: mov dword ptr [eax + 0x10], ebx */ W32((u32)(r_eax+0x10u), r_ebx);
    /* 00807a65: add eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00807a68: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 00807a6b: jne 0x807977 */ if (!fZ) goto L_00807977;
L_00807a71:; BB(0x00807a71);
    /* 00807a71: movsx edx, word ptr [ecx] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx));
    /* 00807a74: lea eax, [edx] */ r_eax = (u32)(r_edx);
    /* 00807a76: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00807a79: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00807a7b: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00807a7d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00807a7f: lea ebp, [ebp + edx + 4] */ r_ebp = (u32)(r_ebp+r_edx+0x4u);
    /* 00807a83: movzx ecx, word ptr [ebp] */ r_ecx = (u32)R16((u32)(r_ebp));
    /* 00807a87: mov esi, ecx */ r_esi = r_ecx;
    /* 00807a89: and esi, 0xff00 */ {  u32 a = r_esi; u32 b = 0xff00u; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 00807a8f: sar esi, 8 */ { u32 c = (8u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 00807a92: shl ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00807a95: or esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00807a97: movzx ebx, si */ r_ebx = (u32)(u16)r_esi;
    /* 00807a9a: mov word ptr [ebp], bx */ W16((u32)(r_ebp), (u16)r_ebx);
    /* 00807a9e: movsx eax, si */ r_eax = (u32)(i32)(i16)(u16)r_esi;
    /* 00807aa1: jmp 0x80785a */ goto L_0080785a;
}

void f_00807aa8(void) /* sub_807AA8 */
{
    FN_ENTER(0x00807aa8);
    /* 00807aa8: movzx edx, word ptr [eax] */ r_edx = (u32)R16((u32)(r_eax));
    /* 00807aab: mov ecx, edx */ r_ecx = r_edx;
    /* 00807aad: shl edx, 8 */ { u32 c = (8u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00807ab0: and ecx, 0xff00 */ {  u32 a = r_ecx; u32 b = 0xff00u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00807ab6: sar ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00807ab9: or ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00807abb: mov word ptr [eax], cx */ W16((u32)(r_eax), (u16)r_ecx);
    /* 00807abe: ret  */ FN_RET(0x00807aa8); r_esp += 4; return;
}

void f_00807ac0(void) /* sub_807AC0 */
{
    FN_ENTER(0x00807ac0);
    /* 00807ac0: mov eax, dword ptr [0xaafc9c] */ r_eax = R32((u32)(0xaafc9cu));
    /* 00807ac5: ret  */ FN_RET(0x00807ac0); r_esp += 4; return;
}

void f_00807ac8(void) /* sub_807AC8 */
{
    FN_ENTER(0x00807ac8);
    /* 00807ac8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00807ac9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00807aca: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00807acb: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 00807acf: mov eax, dword ptr [0xaafca4] */ r_eax = R32((u32)(0xaafca4u));
    /* 00807ad4: movsx ecx, word ptr [eax + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x8u));
    /* 00807ad8: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00807ada: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00807adc: jle 0x807b9b */ if ((fZ||fS!=fO)) goto L_00807b9b;
L_00807ae2:; BB(0x00807ae2);
    /* 00807ae2: cmp ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00807ae5: jl 0x807ba7 */ if ((fS!=fO)) goto L_00807ba7;
L_00807aeb:; BB(0x00807aeb);
    /* 00807aeb: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
L_00807aee:; BB(0x00807aee);
    /* 00807aee: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 00807af1: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00807af3: sub eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00807af5: lea eax, [ebx + eax*4] */ r_eax = (u32)(r_ebx+r_eax*4);
    /* 00807af8: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00807afa: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00807afc: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00807afe: cmp esi, dword ptr [eax] */ {  u32 a = r_esi; u32 b = R32((u32)(r_eax)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00807b00: je 0x807ba3 */ if (fZ) goto L_00807ba3;
L_00807b06:; BB(0x00807b06);
    /* 00807b06: lea edi, [ebx + 1] */ r_edi = (u32)(r_ebx+0x1u);
    /* 00807b09: lea eax, [ebx + ebx + 2] */ r_eax = (u32)(r_ebx+r_ebx+0x2u);
    /* 00807b0d: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00807b0f: sub eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00807b11: lea eax, [ebx + eax*4 + 1] */ r_eax = (u32)(r_ebx+r_eax*4+0x1u);
    /* 00807b15: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00807b17: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00807b19: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00807b1b: cmp esi, dword ptr [eax] */ {  u32 a = r_esi; u32 b = R32((u32)(r_eax)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00807b1d: je 0x807ba3 */ if (fZ) goto L_00807ba3;
L_00807b23:; BB(0x00807b23);
    /* 00807b23: lea eax, [edi + 1] */ r_eax = (u32)(r_edi+0x1u);
    /* 00807b26: lea ebx, [edi + edi + 2] */ r_ebx = (u32)(r_edi+r_edi+0x2u);
    /* 00807b2a: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00807b2c: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 00807b2e: lea eax, [edi + ebx*4 + 1] */ r_eax = (u32)(r_edi+r_ebx*4+0x1u);
    /* 00807b32: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00807b34: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00807b36: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00807b38: cmp esi, dword ptr [eax] */ {  u32 a = r_esi; u32 b = R32((u32)(r_eax)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00807b3a: je 0x807ba3 */ if (fZ) goto L_00807ba3;
L_00807b3c:; BB(0x00807b3c);
    /* 00807b3c: lea eax, [edi + 2] */ r_eax = (u32)(r_edi+0x2u);
    /* 00807b3f: lea ebx, [edi + edi + 4] */ r_ebx = (u32)(r_edi+r_edi+0x4u);
    /* 00807b43: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00807b45: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 00807b47: lea eax, [edi + ebx*4 + 2] */ r_eax = (u32)(r_edi+r_ebx*4+0x2u);
    /* 00807b4b: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00807b4d: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00807b4f: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00807b51: cmp esi, dword ptr [eax] */ {  u32 a = r_esi; u32 b = R32((u32)(r_eax)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00807b53: je 0x807ba3 */ if (fZ) goto L_00807ba3;
L_00807b55:; BB(0x00807b55);
    /* 00807b55: lea eax, [edi + 3] */ r_eax = (u32)(r_edi+0x3u);
    /* 00807b58: lea ebx, [edi + edi + 6] */ r_ebx = (u32)(r_edi+r_edi+0x6u);
    /* 00807b5c: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00807b5e: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 00807b60: lea eax, [edi + ebx*4 + 3] */ r_eax = (u32)(r_edi+r_ebx*4+0x3u);
    /* 00807b64: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00807b66: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00807b68: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00807b6a: cmp esi, dword ptr [eax] */ {  u32 a = r_esi; u32 b = R32((u32)(r_eax)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00807b6c: je 0x807ba3 */ if (fZ) goto L_00807ba3;
L_00807b6e:; BB(0x00807b6e);
    /* 00807b6e: lea ebx, [edi + 4] */ r_ebx = (u32)(r_edi+0x4u);
    /* 00807b71: lea eax, [ecx - 6] */ r_eax = (u32)(r_ecx+0xfffffffau);
    /* 00807b74: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00807b76: jle 0x807aee */ if ((fZ||fS!=fO)) goto L_00807aee;
L_00807b7c:; BB(0x00807b7c);
    /* 00807b7c: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 00807b7f: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00807b81: sub eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00807b83: lea eax, [ebx + eax*4] */ r_eax = (u32)(r_ebx+r_eax*4);
    /* 00807b86: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00807b88: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_00807b8a:; BB(0x00807b8a);
    /* 00807b8a: lea edi, [edx + eax] */ r_edi = (u32)(r_edx+r_eax);
    /* 00807b8d: cmp esi, dword ptr [edi] */ {  u32 a = r_esi; u32 b = R32((u32)(r_edi)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00807b8f: je 0x807ba1 */ if (fZ) goto L_00807ba1;
L_00807b91:; BB(0x00807b91);
    /* 00807b91: add eax, 0x34 */ {  u32 a = r_eax; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00807b94: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00807b97: cmp ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00807b99: jl 0x807b8a */ if ((fS!=fO)) goto L_00807b8a;
L_00807b9b:; BB(0x00807b9b);
    /* 00807b9b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00807b9d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00807b9e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00807b9f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00807ba0: ret  */ FN_RET(0x00807ac8); r_esp += 4; return;
L_00807ba1:; BB(0x00807ba1);
    /* 00807ba1: mov eax, edi */ r_eax = r_edi;
L_00807ba3:; BB(0x00807ba3);
    /* 00807ba3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00807ba4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00807ba5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00807ba6: ret  */ FN_RET(0x00807ac8); r_esp += 4; return;
L_00807ba7:; BB(0x00807ba7);
    /* 00807ba7: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 00807baa: jmp 0x807b7c */ goto L_00807b7c;
}

void f_00807bac(void) /* sub_807BAC */
{
    FN_ENTER(0x00807bac);
    /* 00807bac: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00807bb0: mov edx, dword ptr [0xaafca4] */ r_edx = R32((u32)(0xaafca4u));
    /* 00807bb6: movsx ecx, word ptr [edx + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx+0x8u));
    /* 00807bba: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00807bbc: jl 0x807bc1 */ if ((fS!=fO)) goto L_00807bc1;
L_00807bbe:; BB(0x00807bbe);
    /* 00807bbe: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00807bc0: ret  */ FN_RET(0x00807bac); r_esp += 4; return;
L_00807bc1:; BB(0x00807bc1);
    /* 00807bc1: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 00807bc4: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00807bc6: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00807bc8: lea eax, [eax + ecx*4] */ r_eax = (u32)(r_eax+r_ecx*4);
    /* 00807bcb: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00807bcd: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00807bcf: add eax, dword ptr [edx + 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x10u)); u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00807bd2: ret  */ FN_RET(0x00807bac); r_esp += 4; return;
}

void f_00807bd4(void) /* sub_807BD4 */
{
    FN_ENTER(0x00807bd4);
    /* 00807bd4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00807bd5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00807bd6: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00807bd9: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 00807bde: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00807bdf: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x807be4u); f_0068d5a8();
    /* 00807be4: mov ecx, eax */ r_ecx = r_eax;
    /* 00807be6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00807be9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00807beb: je 0x807c9b */ if (fZ) goto L_00807c9b;
L_00807bf1:; BB(0x00807bf1);
    /* 00807bf1: mov eax, dword ptr [0xaafca4] */ r_eax = R32((u32)(0xaafca4u));
    /* 00807bf6: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00807bf9: mov ebx, 0xffffffff */ r_ebx = 0xffffffffu;
    /* 00807bfe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00807c00: je 0x807c94 */ if (fZ) goto L_00807c94;
L_00807c06:; BB(0x00807c06);
    /* 00807c06: fld dword ptr [0x97f1a0] */ FPUSH(R_F32((u32)(0x97f1a0u)));
    /* 00807c0c: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 00807c0f: movsx eax, word ptr [eax + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x8u));
    /* 00807c13: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00807c15: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00807c17: jle 0x807ca6 */ if ((fZ||fS!=fO)) goto L_00807ca6;
L_00807c1d:; BB(0x00807c1d);
    /* 00807c1d: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00807c21: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 00807c25: mov edi, ecx */ r_edi = r_ecx;
    /* 00807c27: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 00807c2a: mov ebp, edx */ r_ebp = r_edx;
L_00807c2c:; BB(0x00807c2c);
    /* 00807c2c: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00807c2f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00807c31: jl 0x807c7b */ if ((fS!=fO)) goto L_00807c7b;
L_00807c33:; BB(0x00807c33);
    /* 00807c33: lea eax, [ebp + 4] */ r_eax = (u32)(r_ebp+0x4u);
    /* 00807c36: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00807c37: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00807c38: call 0x78ea2c */ r_esp -= 4; W32(r_esp, 0x807c3du); f_0078ea2c();
    /* 00807c3d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00807c40: fld dword ptr [ebp + 0x1c] */ FPUSH(R_F32((u32)(r_ebp+0x1cu)));
    /* 00807c43: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00807c45: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 00807c47: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00807c49: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00807c4a: jae 0x807c59 */ if (!fC) goto L_00807c59;
L_00807c4c:; BB(0x00807c4c);
    /* 00807c4c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00807c4e: mov eax, dword ptr [0xaafca4] */ r_eax = R32((u32)(0xaafca4u));
    /* 00807c53: movsx eax, word ptr [eax + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x8u));
    /* 00807c57: jmp 0x807c7b */ goto L_00807c7b;
L_00807c59:; BB(0x00807c59);
    /* 00807c59: fcom dword ptr [esp + 8] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x8u))); 
    /* 00807c5d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00807c5f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00807c60: mov edx, dword ptr [0xaafca4] */ r_edx = R32((u32)(0xaafca4u));
    /* 00807c66: jae 0x807c75 */ if (!fC) goto L_00807c75;
L_00807c68:; BB(0x00807c68);
    /* 00807c68: mov ebx, dword ptr [ebp] */ r_ebx = R32((u32)(r_ebp));
    /* 00807c6b: movsx eax, word ptr [edx + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x8u));
    /* 00807c6f: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00807c73: jmp 0x807c7b */ goto L_00807c7b;
L_00807c75:; BB(0x00807c75);
    /* 00807c75: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00807c77: movsx eax, word ptr [edx + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x8u));
L_00807c7b:; BB(0x00807c7b);
    /* 00807c7b: add ebp, 0x34 */ {  u32 a = r_ebp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00807c7e: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00807c81: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00807c83: jl 0x807c2c */ if ((fS!=fO)) goto L_00807c2c;
L_00807c85:; BB(0x00807c85);
    /* 00807c85: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 00807c89: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
L_00807c8c:; BB(0x00807c8c);
    /* 00807c8c: mov eax, ebx */ r_eax = r_ebx;
    /* 00807c8e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00807c91: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00807c92: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00807c93: ret  */ FN_RET(0x00807bd4); r_esp += 4; return;
L_00807c94:; BB(0x00807c94);
    /* 00807c94: mov ebx, 0xffffffff */ r_ebx = 0xffffffffu;
    /* 00807c99: jmp 0x807c8c */ goto L_00807c8c;
L_00807c9b:; BB(0x00807c9b);
    /* 00807c9b: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 00807ca0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00807ca3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00807ca4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00807ca5: ret  */ FN_RET(0x00807bd4); r_esp += 4; return;
L_00807ca6:; BB(0x00807ca6);
    /* 00807ca6: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00807ca8: jmp 0x807c8c */ goto L_00807c8c;
}

void f_00807c93(void)
{
    FN_ENTER(0x00807c93);
    /* 00807c93: ret  */ FN_RET(0x00807c93); r_esp += 4; return;
}

void f_00807cac(void) /* sub_807CAC */
{
    FN_ENTER(0x00807cac);
    /* 00807cac: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00807cad: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00807cb0: mov eax, dword ptr [0xaafca4] */ r_eax = R32((u32)(0xaafca4u));
    /* 00807cb5: mov ebx, 0xffffffff */ r_ebx = 0xffffffffu;
    /* 00807cba: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00807cbc: je 0x807d50 */ if (fZ) goto L_00807d50;
L_00807cc2:; BB(0x00807cc2);
    /* 00807cc2: fld dword ptr [0x97f19c] */ FPUSH(R_F32((u32)(0x97f19cu)));
    /* 00807cc8: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 00807ccb: movsx eax, word ptr [eax + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x8u));
    /* 00807ccf: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00807cd1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00807cd3: jle 0x807d5a */ if ((fZ||fS!=fO)) goto L_00807d5a;
L_00807cd9:; BB(0x00807cd9);
    /* 00807cd9: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00807cdd: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 00807ce1: mov esi, edx */ r_esi = r_edx;
    /* 00807ce3: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 00807ce6: mov edi, ecx */ r_edi = r_ecx;
L_00807ce8:; BB(0x00807ce8);
    /* 00807ce8: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 00807cea: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00807cec: jl 0x807d38 */ if ((fS!=fO)) goto L_00807d38;
L_00807cee:; BB(0x00807cee);
    /* 00807cee: lea eax, [edi + 4] */ r_eax = (u32)(r_edi+0x4u);
    /* 00807cf1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00807cf2: push dword ptr [esp + 0x18] */ { u32 v = R32((u32)(r_esp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 00807cf6: call 0x78ea2c */ r_esp -= 4; W32(r_esp, 0x807cfbu); f_0078ea2c();
    /* 00807cfb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00807cfe: fld dword ptr [edi + 0x1c] */ FPUSH(R_F32((u32)(r_edi+0x1cu)));
    /* 00807d01: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00807d03: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 00807d05: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00807d07: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00807d08: jae 0x807d17 */ if (!fC) goto L_00807d17;
L_00807d0a:; BB(0x00807d0a);
    /* 00807d0a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00807d0c: mov eax, dword ptr [0xaafca4] */ r_eax = R32((u32)(0xaafca4u));
    /* 00807d11: movsx eax, word ptr [eax + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x8u));
    /* 00807d15: jmp 0x807d38 */ goto L_00807d38;
L_00807d17:; BB(0x00807d17);
    /* 00807d17: fcom dword ptr [esp + 8] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x8u))); 
    /* 00807d1b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00807d1d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00807d1e: mov edx, dword ptr [0xaafca4] */ r_edx = R32((u32)(0xaafca4u));
    /* 00807d24: jae 0x807d32 */ if (!fC) goto L_00807d32;
L_00807d26:; BB(0x00807d26);
    /* 00807d26: mov ebx, dword ptr [edi] */ r_ebx = R32((u32)(r_edi));
    /* 00807d28: movsx eax, word ptr [edx + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x8u));
    /* 00807d2c: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00807d30: jmp 0x807d38 */ goto L_00807d38;
L_00807d32:; BB(0x00807d32);
    /* 00807d32: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00807d34: movsx eax, word ptr [edx + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x8u));
L_00807d38:; BB(0x00807d38);
    /* 00807d38: add edi, 0x34 */ {  u32 a = r_edi; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00807d3b: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00807d3e: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00807d40: jl 0x807ce8 */ if ((fS!=fO)) goto L_00807ce8;
L_00807d42:; BB(0x00807d42);
    /* 00807d42: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 00807d46: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
L_00807d49:; BB(0x00807d49);
    /* 00807d49: mov eax, ebx */ r_eax = r_ebx;
    /* 00807d4b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00807d4e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00807d4f: ret  */ FN_RET(0x00807cac); r_esp += 4; return;
L_00807d50:; BB(0x00807d50);
    /* 00807d50: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 00807d55: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00807d58: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00807d59: ret  */ FN_RET(0x00807cac); r_esp += 4; return;
L_00807d5a:; BB(0x00807d5a);
    /* 00807d5a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00807d5c: jmp 0x807d49 */ goto L_00807d49;
}

void f_00807d60(void) /* sub_807D60 */
{
    FN_ENTER(0x00807d60);
    /* 00807d60: mov edx, dword ptr [0xaafc9c] */ r_edx = R32((u32)(0xaafc9cu));
    /* 00807d66: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00807d68:; BB(0x00807d68);
    /* 00807d68: mov ecx, eax */ r_ecx = r_eax;
    /* 00807d6a: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00807d6d: cmp edx, dword ptr [ecx*4 + 0x97f1c8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx*4+0x97f1c8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00807d74: je 0x807d88 */ if (fZ) goto L_00807d88;
L_00807d76:; BB(0x00807d76);
    /* 00807d76: mov ecx, dword ptr [eax*4 + 0x97f1c8] */ r_ecx = R32((u32)(r_eax*4+0x97f1c8u));
    /* 00807d7d: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00807d80: jne 0x807d68 */ if (!fZ) goto L_00807d68;
L_00807d82:; BB(0x00807d82);
    /* 00807d82: mov eax, 1 */ r_eax = 0x1u;
    /* 00807d87: ret  */ FN_RET(0x00807d60); r_esp += 4; return;
L_00807d88:; BB(0x00807d88);
    /* 00807d88: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00807d8a: ret  */ FN_RET(0x00807d60); r_esp += 4; return;
}

void f_00807d8c(void) /* sub_807D8C */
{
    FN_ENTER(0x00807d8c);
    /* 00807d8c: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 00807d90: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00807d92:; BB(0x00807d92);
    /* 00807d92: mov ecx, eax */ r_ecx = r_eax;
    /* 00807d94: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00807d97: cmp edx, dword ptr [ecx*4 + 0x97f1c8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx*4+0x97f1c8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00807d9e: je 0x807db2 */ if (fZ) goto L_00807db2;
L_00807da0:; BB(0x00807da0);
    /* 00807da0: mov ecx, dword ptr [eax*4 + 0x97f1c8] */ r_ecx = R32((u32)(r_eax*4+0x97f1c8u));
    /* 00807da7: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00807daa: jne 0x807d92 */ if (!fZ) goto L_00807d92;
L_00807dac:; BB(0x00807dac);
    /* 00807dac: mov eax, 1 */ r_eax = 0x1u;
    /* 00807db1: ret  */ FN_RET(0x00807d8c); r_esp += 4; return;
L_00807db2:; BB(0x00807db2);
    /* 00807db2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00807db4: ret  */ FN_RET(0x00807d8c); r_esp += 4; return;
}

void f_00807db8(void) /* sub_807DB8 */
{
    FN_ENTER(0x00807db8);
    /* 00807db8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00807db9: mov eax, dword ptr [0xaafc9c] */ r_eax = R32((u32)(0xaafc9cu));
    /* 00807dbe: call 0x807dcc */ r_esp -= 4; W32(r_esp, 0x807dc3u); f_00807dcc();
    /* 00807dc3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00807dc4: ret  */ FN_RET(0x00807db8); r_esp += 4; return;
}

void f_00807dc8(void) /* sub_807DC8 */
{
    FN_ENTER(0x00807dc8);
    /* 00807dc8: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00807dcc: mov edx, dword ptr [eax*4 + 0x97f040] */ r_edx = R32((u32)(r_eax*4+0x97f040u));
    /* 00807dd3: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00807dd6: je 0x807ddb */ if (fZ) goto L_00807ddb;
L_00807dd8:; BB(0x00807dd8);
    /* 00807dd8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00807dda: ret  */ FN_RET(0x00807dc8); r_esp += 4; return;
L_00807ddb:; BB(0x00807ddb);
    /* 00807ddb: mov eax, 1 */ r_eax = 0x1u;
    /* 00807de0: ret  */ FN_RET(0x00807dc8); r_esp += 4; return;
}

void f_00807dcc(void) /* sub_807DCC */
{
    FN_ENTER(0x00807dcc);
    /* 00807dcc: mov edx, dword ptr [eax*4 + 0x97f040] */ r_edx = R32((u32)(r_eax*4+0x97f040u));
    /* 00807dd3: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00807dd6: je 0x807ddb */ if (fZ) goto L_00807ddb;
L_00807dd8:; BB(0x00807dd8);
    /* 00807dd8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00807dda: ret  */ FN_RET(0x00807dcc); r_esp += 4; return;
L_00807ddb:; BB(0x00807ddb);
    /* 00807ddb: mov eax, 1 */ r_eax = 0x1u;
    /* 00807de0: ret  */ FN_RET(0x00807dcc); r_esp += 4; return;
}

void f_00807de4(void) /* sub_807DE4 */
{
    FN_ENTER(0x00807de4);
    /* 00807de4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00807de5: mov eax, dword ptr [0xaafc9c] */ r_eax = R32((u32)(0xaafc9cu));
    /* 00807dea: call 0x807df8 */ r_esp -= 4; W32(r_esp, 0x807defu); f_00807df8();
    /* 00807def: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00807df0: ret  */ FN_RET(0x00807de4); r_esp += 4; return;
}

void f_00807df8(void) /* sub_807DF8 */
{
    FN_ENTER(0x00807df8);
    /* 00807df8: mov edx, dword ptr [eax*4 + 0x97f040] */ r_edx = R32((u32)(r_eax*4+0x97f040u));
    /* 00807dff: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00807e02: je 0x807e07 */ if (fZ) goto L_00807e07;
L_00807e04:; BB(0x00807e04);
    /* 00807e04: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00807e06: ret  */ FN_RET(0x00807df8); r_esp += 4; return;
L_00807e07:; BB(0x00807e07);
    /* 00807e07: mov eax, 1 */ r_eax = 0x1u;
    /* 00807e0c: ret  */ FN_RET(0x00807df8); r_esp += 4; return;
}

void f_00807e10(void) /* sub_807E10 */
{
    FN_ENTER(0x00807e10);
    /* 00807e10: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00807e11: mov eax, dword ptr [0xaafc9c] */ r_eax = R32((u32)(0xaafc9cu));
    /* 00807e16: call 0x807e24 */ r_esp -= 4; W32(r_esp, 0x807e1bu); f_00807e24();
    /* 00807e1b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00807e1c: ret  */ FN_RET(0x00807e10); r_esp += 4; return;
}

void f_00807e20(void) /* sub_807E20 */
{
    FN_ENTER(0x00807e20);
    /* 00807e20: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00807e24: mov edx, dword ptr [eax*4 + 0x97f040] */ r_edx = R32((u32)(r_eax*4+0x97f040u));
    /* 00807e2b: cmp edx, 0xd */ {  u32 a = r_edx; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00807e2e: je 0x807e33 */ if (fZ) goto L_00807e33;
L_00807e30:; BB(0x00807e30);
    /* 00807e30: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00807e32: ret  */ FN_RET(0x00807e20); r_esp += 4; return;
L_00807e33:; BB(0x00807e33);
    /* 00807e33: mov eax, 1 */ r_eax = 0x1u;
    /* 00807e38: ret  */ FN_RET(0x00807e20); r_esp += 4; return;
}

void f_00807e24(void) /* sub_807E24 */
{
    FN_ENTER(0x00807e24);
    /* 00807e24: mov edx, dword ptr [eax*4 + 0x97f040] */ r_edx = R32((u32)(r_eax*4+0x97f040u));
    /* 00807e2b: cmp edx, 0xd */ {  u32 a = r_edx; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00807e2e: je 0x807e33 */ if (fZ) goto L_00807e33;
L_00807e30:; BB(0x00807e30);
    /* 00807e30: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00807e32: ret  */ FN_RET(0x00807e24); r_esp += 4; return;
L_00807e33:; BB(0x00807e33);
    /* 00807e33: mov eax, 1 */ r_eax = 0x1u;
    /* 00807e38: ret  */ FN_RET(0x00807e24); r_esp += 4; return;
}

void f_00807e3c(void) /* sub_807E3C */
{
    FN_ENTER(0x00807e3c);
    /* 00807e3c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00807e3d: mov eax, dword ptr [0xaafc9c] */ r_eax = R32((u32)(0xaafc9cu));
    /* 00807e42: call 0x807e50 */ r_esp -= 4; W32(r_esp, 0x807e47u); f_00807e50();
    /* 00807e47: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00807e48: ret  */ FN_RET(0x00807e3c); r_esp += 4; return;
}

void f_00807e4c(void) /* sub_807E4C */
{
    FN_ENTER(0x00807e4c);
    /* 00807e4c: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00807e50: mov edx, dword ptr [eax*4 + 0x97f040] */ r_edx = R32((u32)(r_eax*4+0x97f040u));
    /* 00807e57: cmp edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00807e5a: je 0x807e5f */ if (fZ) goto L_00807e5f;
L_00807e5c:; BB(0x00807e5c);
    /* 00807e5c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00807e5e: ret  */ FN_RET(0x00807e4c); r_esp += 4; return;
L_00807e5f:; BB(0x00807e5f);
    /* 00807e5f: mov eax, 1 */ r_eax = 0x1u;
    /* 00807e64: ret  */ FN_RET(0x00807e4c); r_esp += 4; return;
}

void f_00807e50(void) /* sub_807E50 */
{
    FN_ENTER(0x00807e50);
    /* 00807e50: mov edx, dword ptr [eax*4 + 0x97f040] */ r_edx = R32((u32)(r_eax*4+0x97f040u));
    /* 00807e57: cmp edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00807e5a: je 0x807e5f */ if (fZ) goto L_00807e5f;
L_00807e5c:; BB(0x00807e5c);
    /* 00807e5c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00807e5e: ret  */ FN_RET(0x00807e50); r_esp += 4; return;
L_00807e5f:; BB(0x00807e5f);
    /* 00807e5f: mov eax, 1 */ r_eax = 0x1u;
    /* 00807e64: ret  */ FN_RET(0x00807e50); r_esp += 4; return;
}

void f_00807e68(void) /* sub_807E68 */
{
    FN_ENTER(0x00807e68);
    /* 00807e68: mov edx, dword ptr [0xaafc9c] */ r_edx = R32((u32)(0xaafc9cu));
    /* 00807e6e: mov eax, dword ptr [edx*4 + 0x97f040] */ r_eax = R32((u32)(r_edx*4+0x97f040u));
    /* 00807e75: ret  */ FN_RET(0x00807e68); r_esp += 4; return;
}

void f_00807e78(void) /* sub_807E78 */
{
    FN_ENTER(0x00807e78);
    /* 00807e78: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00807e79: mov eax, dword ptr [0xaafc9c] */ r_eax = R32((u32)(0xaafc9cu));
    /* 00807e7e: call 0x807e8c */ r_esp -= 4; W32(r_esp, 0x807e83u); f_00807e8c();
    /* 00807e83: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00807e84: ret  */ FN_RET(0x00807e78); r_esp += 4; return;
}

void f_00807e8c(void) /* sub_807E8C */
{
    FN_ENTER(0x00807e8c);
    /* 00807e8c: cmp eax, 0x22 */ {  u32 a = r_eax; u32 b = 0x22u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00807e8f: jne 0x807e97 */ if (!fZ) goto L_00807e97;
L_00807e91:; BB(0x00807e91);
    /* 00807e91: mov eax, 0xf */ r_eax = 0xfu;
    /* 00807e96: ret  */ FN_RET(0x00807e8c); r_esp += 4; return;
L_00807e97:; BB(0x00807e97);
    /* 00807e97: cmp eax, 0x23 */ {  u32 a = r_eax; u32 b = 0x23u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00807e9a: jne 0x807ea2 */ if (!fZ) goto L_00807ea2;
L_00807e9c:; BB(0x00807e9c);
    /* 00807e9c: mov eax, 0x10 */ r_eax = 0x10u;
    /* 00807ea1: ret  */ FN_RET(0x00807e8c); r_esp += 4; return;
L_00807ea2:; BB(0x00807ea2);
    /* 00807ea2: mov eax, dword ptr [eax*4 + 0x97f040] */ r_eax = R32((u32)(r_eax*4+0x97f040u));
    /* 00807ea9: ret  */ FN_RET(0x00807e8c); r_esp += 4; return;
}

void f_00807eac(void) /* sub_807EAC */
{
    FN_ENTER(0x00807eac);
    /* 00807eac: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00807eb0: mov dword ptr [0xaafc3c], eax */ W32((u32)(0xaafc3cu), r_eax);
    /* 00807eb5: ret  */ FN_RET(0x00807eac); r_esp += 4; return;
}

void f_00807eb8(void) /* sub_807EB8 */
{
    FN_ENTER(0x00807eb8);
    /* 00807eb8: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00807ebc: mov dword ptr [0xaafc38], eax */ W32((u32)(0xaafc38u), r_eax);
    /* 00807ec1: ret  */ FN_RET(0x00807eb8); r_esp += 4; return;
}

void f_00807ec4(void) /* sub_807EC4 */
{
    FN_ENTER(0x00807ec4);
    /* 00807ec4: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00807ec8: mov dword ptr [0xaafc34], eax */ W32((u32)(0xaafc34u), r_eax);
    /* 00807ecd: ret  */ FN_RET(0x00807ec4); r_esp += 4; return;
}

void f_00807ed0(void) /* sub_807ED0 */
{
    FN_ENTER(0x00807ed0);
    /* 00807ed0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00807ed1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00807ed2: sub esp, 0xbc */ {  u32 a = r_esp; u32 b = 0xbcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00807ed8: mov esi, 0x97ef60 */ r_esi = 0x97ef60u;
    /* 00807edd: lea edi, [esp] */ r_edi = (u32)(r_esp);
    /* 00807ee0: mov ecx, 0xbc */ r_ecx = 0xbcu;
    /* 00807ee5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00807ee6: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00807ee9: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 00807eeb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00807eec: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00807eef: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 00807ef1: mov edx, dword ptr [0xaafc9c] */ r_edx = R32((u32)(0xaafc9cu));
    /* 00807ef7: mov eax, dword ptr [esp + edx*4] */ r_eax = R32((u32)(r_esp+r_edx*4));
    /* 00807efa: add esp, 0xbc */ {  u32 a = r_esp; u32 b = 0xbcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00807f00: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00807f01: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00807f02: ret  */ FN_RET(0x00807ed0); r_esp += 4; return;
}

void f_00807f04(void) /* sub_807F04 */
{
    FN_ENTER(0x00807f04);
    /* 00807f04: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00807f05: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00807f08: mov ebp, dword ptr [esp + 0x34] */ r_ebp = R32((u32)(r_esp+0x34u));
    /* 00807f0c: mov edx, ebp */ r_edx = r_ebp;
    /* 00807f0e: mov ecx, dword ptr [esp + 0x30] */ r_ecx = R32((u32)(r_esp+0x30u));
    /* 00807f12: call 0x82f9e0 */ r_esp -= 4; W32(r_esp, 0x807f17u); f_0082f9e0();
    /* 00807f17: fcomp dword ptr [0x97f190] */ fx_compare(ST(0), R_F32((u32)(0x97f190u))); FPOP();
    /* 00807f1d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00807f1f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00807f20: jae 0x807f2b */ if (!fC) goto L_00807f2b;
L_00807f22:; BB(0x00807f22);
    /* 00807f22: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00807f24: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00807f27: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00807f28: ret 0x10 */ FN_RET(0x00807f04); r_esp += 20; return;
L_00807f2b:; BB(0x00807f2b);
    /* 00807f2b: mov edx, dword ptr [0xa48a54] */ r_edx = R32((u32)(0xa48a54u));
    /* 00807f31: mov eax, dword ptr [edx + 0x178] */ r_eax = R32((u32)(r_edx+0x178u));
    /* 00807f37: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00807f3a: mov eax, dword ptr [edx + 0x180] */ r_eax = R32((u32)(r_edx+0x180u));
    /* 00807f40: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00807f42: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 00807f46: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00807f4a: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 00807f4d: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00807f50: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00807f54: mov eax, dword ptr [ebp + 4] */ r_eax = R32((u32)(r_ebp+0x4u));
    /* 00807f57: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00807f5b: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 00807f5f: mov ebp, dword ptr [ebp + 8] */ r_ebp = R32((u32)(r_ebp+0x8u));
    /* 00807f62: mov dword ptr [esp + 0x14], ebp */ W32((u32)(r_esp+0x14u), r_ebp);
    /* 00807f66: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00807f67: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00807f68: push dword ptr [esp + 0x34] */ { u32 v = R32((u32)(r_esp+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 00807f6c: call 0x83a0dc */ r_esp -= 4; W32(r_esp, 0x807f71u); f_0083a0dc();
    /* 00807f71: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00807f74: fcomp dword ptr [esp + 0x38] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x38u))); FPOP();
    /* 00807f78: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00807f7a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00807f7b: ja 0x807f22 */ if ((!fC&&!fZ)) goto L_00807f22;
L_00807f7d:; BB(0x00807f7d);
    /* 00807f7d: mov eax, 1 */ r_eax = 0x1u;
    /* 00807f82: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00807f85: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00807f86: ret 0x10 */ FN_RET(0x00807f04); r_esp += 20; return;
}

void f_00807f8c(void) /* sub_807F8C */
{
    FN_ENTER(0x00807f8c);
    /* 00807f8c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00807f8d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00807f8e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00807f8f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00807f90: sub esp, 0xac */ {  u32 a = r_esp; u32 b = 0xacu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00807f96: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00807f98: mov ecx, dword ptr [0xaafca4] */ r_ecx = R32((u32)(0xaafca4u));
    /* 00807f9e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00807fa0: je 0x808648 */ if (fZ) goto L_00808648;
L_00807fa6:; BB(0x00807fa6);
    /* 00807fa6: mov dword ptr [0xa11494], 0x44160000 */ W32((u32)(0xa11494u), 0x44160000u);
    /* 00807fb0: mov eax, 0xbf800000 */ r_eax = 0xbf800000u;
    /* 00807fb5: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00807fb7: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00807fb9: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00807fbd: mov eax, dword ptr [ecx + 0xc] */ r_eax = R32((u32)(r_ecx+0xcu));
    /* 00807fc0: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 00807fc4: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 00807fc9: mov dword ptr [ebp + 0x1c], 0 */ W32((u32)(r_ebp+0x1cu), 0x0u);
    /* 00807fd0: mov dword ptr [esp + 0x10], edi */ W32((u32)(r_esp+0x10u), r_edi);
    /* 00807fd4: mov dword ptr [0xa11490], eax */ W32((u32)(0xa11490u), r_eax);
    /* 00807fd9: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x807fdeu); f_0082d990();
    /* 00807fde: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 00807fe3: mov edx, dword ptr [eax + 0x194] */ r_edx = R32((u32)(r_eax+0x194u));
    /* 00807fe9: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00807feb: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x807ff0u); f_0082d8bc();
    /* 00807ff0: lea eax, [esp + 0x1c] */ r_eax = (u32)(r_esp+0x1cu);
    /* 00807ff4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00807ff5: lea edx, [esp + 0x14] */ r_edx = (u32)(r_esp+0x14u);
    /* 00807ff9: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00807ffb: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x808000u); f_0082eab8();
    /* 00808000: lea ecx, [esp + 0x1c] */ r_ecx = (u32)(r_esp+0x1cu);
    /* 00808004: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x808009u); f_0082df08();
    /* 00808009: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0080800b: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x808010u); f_0082da80();
    /* 00808010: mov edx, dword ptr [0xaafca4] */ r_edx = R32((u32)(0xaafca4u));
    /* 00808016: mov edi, dword ptr [edx + 0x10] */ r_edi = R32((u32)(r_edx+0x10u));
    /* 00808019: movsx eax, word ptr [edx + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x8u));
    /* 0080801d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0080801f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00808021: jle 0x80849b */ if ((fZ||fS!=fO)) goto L_0080849b;
L_00808027:; BB(0x00808027);
    /* 00808027: mov ebx, ecx */ r_ebx = r_ecx;
L_00808029:; BB(0x00808029);
    /* 00808029: mov ecx, dword ptr [edi + 0x30] */ r_ecx = R32((u32)(r_edi+0x30u));
    /* 0080802c: test ecx, 0x80000 */ {  u32 a = r_ecx; u32 b = 0x80000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00808032: jne 0x8082f7 */ if (!fZ) goto L_008082f7;
L_00808038:; BB(0x00808038);
    /* 00808038: fld dword ptr [edi + 4] */ FPUSH(R_F32((u32)(r_edi+0x4u)));
    /* 0080803b: mov esi, dword ptr [edi + 4] */ r_esi = R32((u32)(r_edi+0x4u));
    /* 0080803e: fld dword ptr [edi + 0xc] */ FPUSH(R_F32((u32)(r_edi+0xcu)));
    /* 00808041: mov eax, dword ptr [edi + 0xc] */ r_eax = R32((u32)(r_edi+0xcu));
    /* 00808044: fld dword ptr [edi + 0x1c] */ FPUSH(R_F32((u32)(r_edi+0x1cu)));
    /* 00808047: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00808049: mov dword ptr [esp + 0x2c], 0 */ W32((u32)(r_esp+0x2cu), 0x0u);
    /* 00808051: mov dword ptr [esp + 0x28], esi */ W32((u32)(r_esp+0x28u), r_esi);
    /* 00808055: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 00808059: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 0080805e: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00808060: fsub dword ptr [eax + 0x178] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0x178u));
    /* 00808066: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00808068: fsub dword ptr [eax + 0x180] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0x180u));
    /* 0080806e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00808070: fst dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0));
    /* 00808074: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00808076: fadd dword ptr [0x97f188] */ ST(0) = ST(0) + R_F32((u32)(0x97f188u));
    /* 0080807c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0080807e: fst dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0));
    /* 00808082: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00808084: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00808086: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00808088: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0080808a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0080808c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0080808e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0080808f: mov dword ptr [esp + 0x38], 0 */ W32((u32)(r_esp+0x38u), 0x0u);
    /* 00808097: jae 0x8080b0 */ if (!fC) goto L_008080b0;
L_00808099:; BB(0x00808099);
    /* 00808099: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0080809b: or ecx, 0x10000 */ {  u32 a = r_ecx; u32 b = 0x10000u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 008080a1: mov dword ptr [edi + 0x30], ecx */ W32((u32)(r_edi+0x30u), r_ecx);
    /* 008080a4: add edi, 0x34 */ {  u32 a = r_edi; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008080a7: add dword ptr [ebp + 0x1c], 1 */ { u32 ad = (u32)(r_ebp+0x1cu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008080ab: jmp 0x808489 */ goto L_00808489;
L_008080b0:; BB(0x008080b0);
    /* 008080b0: fld dword ptr [0xa11490] */ FPUSH(R_F32((u32)(0xa11490u)));
    /* 008080b6: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 008080b8: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 008080ba: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 008080bc: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 008080bd: jae 0x8080d0 */ if (!fC) goto L_008080d0;
L_008080bf:; BB(0x008080bf);
    /* 008080bf: and ecx, 0xfffeffff */ {  u32 a = r_ecx; u32 b = 0xfffeffffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008080c5: mov dword ptr [edi + 0x30], ecx */ W32((u32)(r_edi+0x30u), r_ecx);
    /* 008080c8: add edi, 0x34 */ {  u32 a = r_edi; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008080cb: jmp 0x808489 */ goto L_00808489;
L_008080d0:; BB(0x008080d0);
    /* 008080d0: lea ecx, [esp + 0x34] */ r_ecx = (u32)(r_esp+0x34u);
    /* 008080d4: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x8080d9u); f_0082df08();
    /* 008080d9: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008080db: lea ecx, [esp + 0x1c] */ r_ecx = (u32)(r_esp+0x1cu);
    /* 008080df: lea edx, [esp + 0x34] */ r_edx = (u32)(r_esp+0x34u);
    /* 008080e3: call 0x82f9e0 */ r_esp -= 4; W32(r_esp, 0x8080e8u); f_0082f9e0();
    /* 008080e8: fcom dword ptr [0x97f188] */ fx_compare(ST(0), R_F32((u32)(0x97f188u))); 
    /* 008080ee: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 008080f0: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 008080f1: jae 0x80810e */ if (!fC) goto L_0080810e;
L_008080f3:; BB(0x008080f3);
    /* 008080f3: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008080f5: mov edx, dword ptr [0xaafca4] */ r_edx = R32((u32)(0xaafca4u));
    /* 008080fb: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 008080fe: and eax, 0xfffeffff */ {  u32 a = r_eax; u32 b = 0xfffeffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00808103: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 00808106: add edi, 0x34 */ {  u32 a = r_edi; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00808109: jmp 0x808489 */ goto L_00808489;
L_0080810e:; BB(0x0080810e);
    /* 0080810e: fcomp dword ptr [0x97f184] */ fx_compare(ST(0), R_F32((u32)(0x97f184u))); FPOP();
    /* 00808114: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00808116: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00808117: jb 0x808136 */ if (fC) goto L_00808136;
L_00808119:; BB(0x00808119);
    /* 00808119: mov edx, dword ptr [0xaafca4] */ r_edx = R32((u32)(0xaafca4u));
    /* 0080811f: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 00808122: or eax, 0x10000 */ {  u32 a = r_eax; u32 b = 0x10000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00808127: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0080812a: add edi, 0x34 */ {  u32 a = r_edi; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0080812d: add dword ptr [ebp + 0x1c], 1 */ { u32 ad = (u32)(r_ebp+0x1cu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00808131: jmp 0x808489 */ goto L_00808489;
L_00808136:; BB(0x00808136);
    /* 00808136: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 0080813b: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x808140u); f_0082d990();
    /* 00808140: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 00808145: mov edx, dword ptr [eax + 0x19c] */ r_edx = R32((u32)(r_eax+0x19cu));
    /* 0080814b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0080814d: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x808152u); f_0082d8bc();
    /* 00808152: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 00808156: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00808157: lea edx, [esp + 0x20] */ r_edx = (u32)(r_esp+0x20u);
    /* 0080815b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0080815d: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x808162u); f_0082eab8();
    /* 00808162: lea ecx, [esp + 0x10] */ r_ecx = (u32)(r_esp+0x10u);
    /* 00808166: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x80816bu); f_0082df08();
    /* 0080816b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0080816d: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00808172: call 0x82eb80 */ r_esp -= 4; W32(r_esp, 0x808177u); f_0082eb80();
    /* 00808177: lea ecx, [esp + 0x34] */ r_ecx = (u32)(r_esp+0x34u);
    /* 0080817b: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 0080817f: fld dword ptr [edi + 0x1c] */ FPUSH(R_F32((u32)(r_edi+0x1cu)));
    /* 00808182: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00808185: call 0x82f9e0 */ r_esp -= 4; W32(r_esp, 0x80818au); f_0082f9e0();
    /* 0080818a: fcomp dword ptr [0x97f188] */ fx_compare(ST(0), R_F32((u32)(0x97f188u))); FPOP();
    /* 00808190: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00808192: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00808193: jb 0x808209 */ if (fC) goto L_00808209;
L_00808195:; BB(0x00808195);
    /* 00808195: mov esi, dword ptr [0xa48a54] */ r_esi = R32((u32)(0xa48a54u));
    /* 0080819b: mov eax, dword ptr [esi + 0x178] */ r_eax = R32((u32)(r_esi+0x178u));
    /* 008081a1: mov dword ptr [esp + 0x40], eax */ W32((u32)(r_esp+0x40u), r_eax);
    /* 008081a5: mov eax, dword ptr [esi + 0x180] */ r_eax = R32((u32)(r_esi+0x180u));
    /* 008081ab: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008081ad: mov dword ptr [esp + 0x44], edx */ W32((u32)(r_esp+0x44u), r_edx);
    /* 008081b1: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 008081b5: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 008081b9: mov dword ptr [esp + 0x4c], eax */ W32((u32)(r_esp+0x4cu), r_eax);
    /* 008081bd: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 008081c1: mov dword ptr [esp + 0x50], eax */ W32((u32)(r_esp+0x50u), r_eax);
    /* 008081c5: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 008081c9: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
    /* 008081cd: lea esi, [esp + 0x28] */ r_esi = (u32)(r_esp+0x28u);
    /* 008081d1: lea edx, [esp + 0x40] */ r_edx = (u32)(r_esp+0x40u);
    /* 008081d5: lea eax, [esp + 0x58] */ r_eax = (u32)(r_esp+0x58u);
    /* 008081d9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008081da: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008081db: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008081dc: call 0x83a0dc */ r_esp -= 4; W32(r_esp, 0x8081e1u); f_0083a0dc();
    /* 008081e1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008081e4: fcomp dword ptr [esp] */ fx_compare(ST(0), R_F32((u32)(r_esp))); FPOP();
    /* 008081e7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 008081e9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 008081ea: ja 0x808209 */ if ((!fC&&!fZ)) goto L_00808209;
L_008081ec:; BB(0x008081ec);
    /* 008081ec: mov edx, dword ptr [0xaafca4] */ r_edx = R32((u32)(0xaafca4u));
    /* 008081f2: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 008081f5: or eax, 0x10000 */ {  u32 a = r_eax; u32 b = 0x10000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 008081fa: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 008081fd: add edi, 0x34 */ {  u32 a = r_edi; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00808200: add dword ptr [ebp + 0x1c], 1 */ { u32 ad = (u32)(r_ebp+0x1cu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00808204: jmp 0x808489 */ goto L_00808489;
L_00808209:; BB(0x00808209);
    /* 00808209: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 0080820e: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x808213u); f_0082d990();
    /* 00808213: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 00808218: mov edx, dword ptr [eax + 0x19c] */ r_edx = R32((u32)(r_eax+0x19cu));
    /* 0080821e: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00808220: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00808222: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x808227u); f_0082d8bc();
    /* 00808227: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 0080822b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0080822c: lea edx, [esp + 0x20] */ r_edx = (u32)(r_esp+0x20u);
    /* 00808230: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00808232: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x808237u); f_0082eab8();
    /* 00808237: lea ecx, [esp + 0x10] */ r_ecx = (u32)(r_esp+0x10u);
    /* 0080823b: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x808240u); f_0082df08();
    /* 00808240: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00808242: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00808247: call 0x82eb80 */ r_esp -= 4; W32(r_esp, 0x80824cu); f_0082eb80();
    /* 0080824c: lea ecx, [esp + 0x34] */ r_ecx = (u32)(r_esp+0x34u);
    /* 00808250: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 00808254: fld dword ptr [edi + 0x1c] */ FPUSH(R_F32((u32)(r_edi+0x1cu)));
    /* 00808257: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0080825a: call 0x82f9e0 */ r_esp -= 4; W32(r_esp, 0x80825fu); f_0082f9e0();
    /* 0080825f: fcomp dword ptr [0x97f188] */ fx_compare(ST(0), R_F32((u32)(0x97f188u))); FPOP();
    /* 00808265: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00808267: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00808268: jb 0x8082de */ if (fC) goto L_008082de;
L_0080826a:; BB(0x0080826a);
    /* 0080826a: mov esi, dword ptr [0xa48a54] */ r_esi = R32((u32)(0xa48a54u));
    /* 00808270: mov eax, dword ptr [esi + 0x178] */ r_eax = R32((u32)(r_esi+0x178u));
    /* 00808276: mov dword ptr [esp + 0x64], eax */ W32((u32)(r_esp+0x64u), r_eax);
    /* 0080827a: mov eax, dword ptr [esi + 0x180] */ r_eax = R32((u32)(r_esi+0x180u));
    /* 00808280: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00808282: mov dword ptr [esp + 0x68], edx */ W32((u32)(r_esp+0x68u), r_edx);
    /* 00808286: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 0080828a: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0080828e: mov dword ptr [esp + 0x70], eax */ W32((u32)(r_esp+0x70u), r_eax);
    /* 00808292: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00808296: mov dword ptr [esp + 0x74], eax */ W32((u32)(r_esp+0x74u), r_eax);
    /* 0080829a: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0080829e: mov dword ptr [esp + 0x78], eax */ W32((u32)(r_esp+0x78u), r_eax);
    /* 008082a2: lea esi, [esp + 0x28] */ r_esi = (u32)(r_esp+0x28u);
    /* 008082a6: lea edx, [esp + 0x64] */ r_edx = (u32)(r_esp+0x64u);
    /* 008082aa: lea eax, [esp + 0x7c] */ r_eax = (u32)(r_esp+0x7cu);
    /* 008082ae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008082af: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008082b0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008082b1: call 0x83a0dc */ r_esp -= 4; W32(r_esp, 0x8082b6u); f_0083a0dc();
    /* 008082b6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008082b9: fcomp dword ptr [esp] */ fx_compare(ST(0), R_F32((u32)(r_esp))); FPOP();
    /* 008082bc: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 008082be: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 008082bf: ja 0x8082de */ if ((!fC&&!fZ)) goto L_008082de;
L_008082c1:; BB(0x008082c1);
    /* 008082c1: mov edx, dword ptr [0xaafca4] */ r_edx = R32((u32)(0xaafca4u));
    /* 008082c7: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 008082ca: or eax, 0x10000 */ {  u32 a = r_eax; u32 b = 0x10000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 008082cf: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 008082d2: add edi, 0x34 */ {  u32 a = r_edi; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008082d5: add dword ptr [ebp + 0x1c], 1 */ { u32 ad = (u32)(r_ebp+0x1cu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008082d9: jmp 0x808489 */ goto L_00808489;
L_008082de:; BB(0x008082de);
    /* 008082de: mov edx, dword ptr [0xaafca4] */ r_edx = R32((u32)(0xaafca4u));
    /* 008082e4: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 008082e7: and eax, 0xfffeffff */ {  u32 a = r_eax; u32 b = 0xfffeffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008082ec: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 008082ef: add edi, 0x34 */ {  u32 a = r_edi; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008082f2: jmp 0x808489 */ goto L_00808489;
L_008082f7:; BB(0x008082f7);
    /* 008082f7: or ecx, 0x10000 */ {  u32 a = r_ecx; u32 b = 0x10000u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 008082fd: mov edx, dword ptr [edi + 0x20] */ r_edx = R32((u32)(r_edi+0x20u));
    /* 00808300: mov eax, dword ptr [edi + 0x28] */ r_eax = R32((u32)(r_edi+0x28u));
    /* 00808303: mov dword ptr [edi + 0x30], ecx */ W32((u32)(r_edi+0x30u), r_ecx);
    /* 00808306: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00808308: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0080830a: jle 0x8083c0 */ if ((fZ||fS!=fO)) goto L_008083c0;
L_00808310:; BB(0x00808310);
    /* 00808310: mov dword ptr [esp + 0xc], edi */ W32((u32)(r_esp+0xcu), r_edi);
    /* 00808314: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 00808318: mov ebx, edx */ r_ebx = r_edx;
    /* 0080831a: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
L_0080831e:; BB(0x0080831e);
    /* 0080831e: mov ebp, dword ptr [ebx] */ r_ebp = R32((u32)(r_ebx));
    /* 00808320: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00808322: je 0x8083a6 */ if (fZ) goto L_008083a6;
L_00808328:; BB(0x00808328);
    /* 00808328: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 0080832b: test ecx, 0x200 */ {  u32 a = r_ecx; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00808331: je 0x808336 */ if (fZ) goto L_00808336;
L_00808333:; BB(0x00808333);
    /* 00808333: mov ebp, dword ptr [ebp] */ r_ebp = R32((u32)(r_ebp));
L_00808336:; BB(0x00808336);
    /* 00808336: mov eax, dword ptr [ebp + 4] */ r_eax = R32((u32)(r_ebp+0x4u));
    /* 00808339: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080833b: je 0x808396 */ if (fZ) goto L_00808396;
L_0080833d:; BB(0x0080833d);
    /* 0080833d: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 00808342: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00808344: je 0x808396 */ if (fZ) goto L_00808396;
L_00808346:; BB(0x00808346);
    /* 00808346: lea edi, [ebp + 8] */ r_edi = (u32)(r_ebp+0x8u);
    /* 00808349: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0080834a: add eax, 0x178 */ {  u32 a = r_eax; u32 b = 0x178u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0080834f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00808350: call 0x78ea50 */ r_esp -= 4; W32(r_esp, 0x808355u); f_0078ea50();
    /* 00808355: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00808358: mov ecx, dword ptr [ebp + 4] */ r_ecx = R32((u32)(r_ebp+0x4u));
    /* 0080835b: fld dword ptr [ecx + 0x28] */ FPUSH(R_F32((u32)(r_ecx+0x28u)));
    /* 0080835e: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00808360: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00808362: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00808364: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00808365: ja 0x80837f */ if ((!fC&&!fZ)) goto L_0080837f;
L_00808367:; BB(0x00808367);
    /* 00808367: push 0x42c80000 */ { u32 v = 0x42c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0080836c: push 0x461c4000 */ { u32 v = 0x461c4000u; r_esp -= 4; W32(r_esp, v); }
    /* 00808371: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00808372: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 00808376: call 0x808660 */ r_esp -= 4; W32(r_esp, 0x80837bu); f_00808660();
    /* 0080837b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080837d: je 0x808393 */ if (fZ) goto L_00808393;
L_0080837f:; BB(0x0080837f);
    /* 0080837f: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 00808383: mov eax, dword ptr [ebx + 0xc] */ r_eax = R32((u32)(r_ebx+0xcu));
    /* 00808386: or eax, 0x10000 */ {  u32 a = r_eax; u32 b = 0x10000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0080838b: mov dword ptr [ebx + 0xc], eax */ W32((u32)(r_ebx+0xcu), r_eax);
    /* 0080838e: mov eax, dword ptr [ecx + 0x28] */ r_eax = R32((u32)(r_ecx+0x28u));
    /* 00808391: jmp 0x8083a6 */ goto L_008083a6;
L_00808393:; BB(0x00808393);
    /* 00808393: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
L_00808396:; BB(0x00808396);
    /* 00808396: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0080839a: and ecx, 0xfffeffff */ {  u32 a = r_ecx; u32 b = 0xfffeffffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008083a0: mov dword ptr [ebx + 0xc], ecx */ W32((u32)(r_ebx+0xcu), r_ecx);
    /* 008083a3: mov eax, dword ptr [eax + 0x28] */ r_eax = R32((u32)(r_eax+0x28u));
L_008083a6:; BB(0x008083a6);
    /* 008083a6: add ebx, 0x10 */ {  u32 a = r_ebx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008083a9: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008083ac: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008083ae: jl 0x80831e */ if ((fS!=fO)) goto L_0080831e;
L_008083b4:; BB(0x008083b4);
    /* 008083b4: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 008083b8: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 008083bc: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
L_008083c0:; BB(0x008083c0);
    /* 008083c0: mov edx, dword ptr [edi + 0x24] */ r_edx = R32((u32)(r_edi+0x24u));
    /* 008083c3: mov eax, dword ptr [edi + 0x2c] */ r_eax = R32((u32)(r_edi+0x2cu));
    /* 008083c6: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 008083c8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008083ca: jle 0x808480 */ if ((fZ||fS!=fO)) goto L_00808480;
L_008083d0:; BB(0x008083d0);
    /* 008083d0: mov dword ptr [esp + 0xc], edi */ W32((u32)(r_esp+0xcu), r_edi);
    /* 008083d4: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 008083d8: mov ebx, edx */ r_ebx = r_edx;
    /* 008083da: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
L_008083de:; BB(0x008083de);
    /* 008083de: mov ebp, dword ptr [ebx] */ r_ebp = R32((u32)(r_ebx));
    /* 008083e0: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008083e2: je 0x808466 */ if (fZ) goto L_00808466;
L_008083e8:; BB(0x008083e8);
    /* 008083e8: mov ecx, dword ptr [ebx + 0x1c] */ r_ecx = R32((u32)(r_ebx+0x1cu));
    /* 008083eb: test ecx, 0x200 */ {  u32 a = r_ecx; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008083f1: je 0x8083f6 */ if (fZ) goto L_008083f6;
L_008083f3:; BB(0x008083f3);
    /* 008083f3: mov ebp, dword ptr [ebp] */ r_ebp = R32((u32)(r_ebp));
L_008083f6:; BB(0x008083f6);
    /* 008083f6: mov eax, dword ptr [ebp + 4] */ r_eax = R32((u32)(r_ebp+0x4u));
    /* 008083f9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008083fb: je 0x808456 */ if (fZ) goto L_00808456;
L_008083fd:; BB(0x008083fd);
    /* 008083fd: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 00808402: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00808404: je 0x808456 */ if (fZ) goto L_00808456;
L_00808406:; BB(0x00808406);
    /* 00808406: lea edi, [ebp + 8] */ r_edi = (u32)(r_ebp+0x8u);
    /* 00808409: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0080840a: add eax, 0x178 */ {  u32 a = r_eax; u32 b = 0x178u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0080840f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00808410: call 0x78ea50 */ r_esp -= 4; W32(r_esp, 0x808415u); f_0078ea50();
    /* 00808415: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00808418: mov ecx, dword ptr [ebp + 4] */ r_ecx = R32((u32)(r_ebp+0x4u));
    /* 0080841b: fld dword ptr [ecx + 0x28] */ FPUSH(R_F32((u32)(r_ecx+0x28u)));
    /* 0080841e: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00808420: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00808422: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00808424: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00808425: ja 0x80843f */ if ((!fC&&!fZ)) goto L_0080843f;
L_00808427:; BB(0x00808427);
    /* 00808427: push 0x42c80000 */ { u32 v = 0x42c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0080842c: push 0x461c4000 */ { u32 v = 0x461c4000u; r_esp -= 4; W32(r_esp, v); }
    /* 00808431: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00808432: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 00808436: call 0x808660 */ r_esp -= 4; W32(r_esp, 0x80843bu); f_00808660();
    /* 0080843b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080843d: je 0x808453 */ if (fZ) goto L_00808453;
L_0080843f:; BB(0x0080843f);
    /* 0080843f: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 00808443: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
    /* 00808446: or eax, 0x10000 */ {  u32 a = r_eax; u32 b = 0x10000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0080844b: mov dword ptr [ebx + 0x1c], eax */ W32((u32)(r_ebx+0x1cu), r_eax);
    /* 0080844e: mov eax, dword ptr [ecx + 0x2c] */ r_eax = R32((u32)(r_ecx+0x2cu));
    /* 00808451: jmp 0x808466 */ goto L_00808466;
L_00808453:; BB(0x00808453);
    /* 00808453: mov ecx, dword ptr [ebx + 0x1c] */ r_ecx = R32((u32)(r_ebx+0x1cu));
L_00808456:; BB(0x00808456);
    /* 00808456: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0080845a: and ecx, 0xfffeffff */ {  u32 a = r_ecx; u32 b = 0xfffeffffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00808460: mov dword ptr [ebx + 0x1c], ecx */ W32((u32)(r_ebx+0x1cu), r_ecx);
    /* 00808463: mov eax, dword ptr [eax + 0x2c] */ r_eax = R32((u32)(r_eax+0x2cu));
L_00808466:; BB(0x00808466);
    /* 00808466: add ebx, 0x20 */ {  u32 a = r_ebx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00808469: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0080846c: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0080846e: jl 0x8083de */ if ((fS!=fO)) goto L_008083de;
L_00808474:; BB(0x00808474);
    /* 00808474: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 00808478: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 0080847c: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
L_00808480:; BB(0x00808480);
    /* 00808480: mov edx, dword ptr [0xaafca4] */ r_edx = R32((u32)(0xaafca4u));
    /* 00808486: add edi, 0x34 */ {  u32 a = r_edi; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
L_00808489:; BB(0x00808489);
    /* 00808489: movsx eax, word ptr [edx + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x8u));
    /* 0080848d: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00808490: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00808492: jl 0x808029 */ if ((fS!=fO)) goto L_00808029;
L_00808498:; BB(0x00808498);
    /* 00808498: mov edi, dword ptr [edx + 0x10] */ r_edi = R32((u32)(r_edx+0x10u));
L_0080849b:; BB(0x0080849b);
    /* 0080849b: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0080849d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0080849f: jle 0x808648 */ if ((fZ||fS!=fO)) goto L_00808648;
L_008084a5:; BB(0x008084a5);
    /* 008084a5: mov edx, dword ptr [edi + 0x30] */ r_edx = R32((u32)(r_edi+0x30u));
    /* 008084a8: test edx, 0x100000 */ {  u32 a = r_edx; u32 b = 0x100000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008084ae: je 0x80863a */ if (fZ) goto L_0080863a;
L_008084b4:; BB(0x008084b4);
    /* 008084b4: mov esi, dword ptr [edi + 0x20] */ r_esi = R32((u32)(r_edi+0x20u));
    /* 008084b7: mov eax, dword ptr [edi + 0x28] */ r_eax = R32((u32)(r_edi+0x28u));
    /* 008084ba: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 008084bc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008084be: jle 0x80857c */ if ((fZ||fS!=fO)) goto L_0080857c;
L_008084c4:; BB(0x008084c4);
    /* 008084c4: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008084c6: mov edx, dword ptr [esi + 0xc] */ r_edx = R32((u32)(r_esi+0xcu));
    /* 008084c9: test edx, 0x200 */ {  u32 a = r_edx; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008084cf: je 0x8084d3 */ if (fZ) goto L_008084d3;
L_008084d1:; BB(0x008084d1);
    /* 008084d1: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
L_008084d3:; BB(0x008084d3);
    /* 008084d3: fld dword ptr [0xa11494] */ FPUSH(R_F32((u32)(0xa11494u)));
    /* 008084d9: fadd dword ptr [0xa1148c] */ ST(0) = ST(0) + R_F32((u32)(0xa1148cu));
    /* 008084df: fld dword ptr [edi + 4] */ FPUSH(R_F32((u32)(r_edi+0x4u)));
    /* 008084e2: fadd dword ptr [eax + 8] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x8u));
    /* 008084e5: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 008084e8: fadd dword ptr [edx + 0x1c] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x1cu));
    /* 008084eb: fld dword ptr [edi + 0xc] */ FPUSH(R_F32((u32)(r_edi+0xcu)));
    /* 008084ee: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 008084f0: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 008084f3: fstp dword ptr [esp + 0x88] */ W_F32((u32)(r_esp+0x88u), ST(0)); FPOP();
    /* 008084fa: fld dword ptr [edi + 8] */ FPUSH(R_F32((u32)(r_edi+0x8u)));
    /* 008084fd: fadd dword ptr [eax + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0xcu));
    /* 00808500: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00808503: fadd dword ptr [edx + 0x20] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x20u));
    /* 00808506: fstp dword ptr [esp + 0x8c] */ W_F32((u32)(r_esp+0x8cu), ST(0)); FPOP();
    /* 0080850d: fadd dword ptr [eax + 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x10u));
    /* 00808510: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00808512: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 00808515: fadd dword ptr [eax + 0x24] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x24u));
    /* 00808518: fstp dword ptr [esp + 0x90] */ W_F32((u32)(r_esp+0x90u), ST(0)); FPOP();
    /* 0080851f: lea eax, [esp + 0x94] */ r_eax = (u32)(r_esp+0x94u);
    /* 00808526: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00808527: lea edx, [esp + 0x8c] */ r_edx = (u32)(r_esp+0x8cu);
    /* 0080852e: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x808533u); f_00830aa0();
    /* 00808533: fld dword ptr [esp + 0x9c] */ FPUSH(R_F32((u32)(r_esp+0x9cu)));
    /* 0080853a: fcom dword ptr [0x97f188] */ fx_compare(ST(0), R_F32((u32)(0x97f188u))); 
    /* 00808540: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00808542: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00808543: ja 0x808560 */ if ((!fC&&!fZ)) goto L_00808560;
L_00808545:; BB(0x00808545);
    /* 00808545: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00808548: fchs  */ ST(0) = -ST(0);
    /* 0080854a: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 0080854c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0080854e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0080854f: ja 0x808560 */ if ((!fC&&!fZ)) goto L_00808560;
L_00808551:; BB(0x00808551);
    /* 00808551: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00808553: mov eax, dword ptr [esi + 0xc] */ r_eax = R32((u32)(r_esi+0xcu));
    /* 00808556: or eax, 0x10000 */ {  u32 a = r_eax; u32 b = 0x10000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0080855b: mov dword ptr [esi + 0xc], eax */ W32((u32)(r_esi+0xcu), r_eax);
    /* 0080855e: jmp 0x80856d */ goto L_0080856d;
L_00808560:; BB(0x00808560);
    /* 00808560: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00808562: mov eax, dword ptr [esi + 0xc] */ r_eax = R32((u32)(r_esi+0xcu));
    /* 00808565: and eax, 0xfffeffff */ {  u32 a = r_eax; u32 b = 0xfffeffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0080856a: mov dword ptr [esi + 0xc], eax */ W32((u32)(r_esi+0xcu), r_eax);
L_0080856d:; BB(0x0080856d);
    /* 0080856d: add esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00808570: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00808573: cmp ebx, dword ptr [edi + 0x28] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edi+0x28u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00808576: jl 0x8084c4 */ if ((fS!=fO)) goto L_008084c4;
L_0080857c:; BB(0x0080857c);
    /* 0080857c: mov esi, dword ptr [edi + 0x24] */ r_esi = R32((u32)(r_edi+0x24u));
    /* 0080857f: mov eax, dword ptr [edi + 0x2c] */ r_eax = R32((u32)(r_edi+0x2cu));
    /* 00808582: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00808584: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00808586: jle 0x808653 */ if ((fZ||fS!=fO)) goto L_00808653;
L_0080858c:; BB(0x0080858c);
    /* 0080858c: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 0080858e: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 00808591: test eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00808596: je 0x80859a */ if (fZ) goto L_0080859a;
L_00808598:; BB(0x00808598);
    /* 00808598: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
L_0080859a:; BB(0x0080859a);
    /* 0080859a: fld dword ptr [0xa11494] */ FPUSH(R_F32((u32)(0xa11494u)));
    /* 008085a0: fadd dword ptr [0xa1148c] */ ST(0) = ST(0) + R_F32((u32)(0xa1148cu));
    /* 008085a6: fld dword ptr [edi + 4] */ FPUSH(R_F32((u32)(r_edi+0x4u)));
    /* 008085a9: fadd dword ptr [edx + 8] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x8u));
    /* 008085ac: fld dword ptr [edi + 0xc] */ FPUSH(R_F32((u32)(r_edi+0xcu)));
    /* 008085af: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 008085b1: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 008085b4: fstp dword ptr [esp + 0x88] */ W_F32((u32)(r_esp+0x88u), ST(0)); FPOP();
    /* 008085bb: lea eax, [esp + 0xa0] */ r_eax = (u32)(r_esp+0xa0u);
    /* 008085c2: fld dword ptr [edi + 8] */ FPUSH(R_F32((u32)(r_edi+0x8u)));
    /* 008085c5: fadd dword ptr [edx + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0xcu));
    /* 008085c8: fstp dword ptr [esp + 0x8c] */ W_F32((u32)(r_esp+0x8cu), ST(0)); FPOP();
    /* 008085cf: fadd dword ptr [edx + 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x10u));
    /* 008085d2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008085d4: fstp dword ptr [esp + 0x90] */ W_F32((u32)(r_esp+0x90u), ST(0)); FPOP();
    /* 008085db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008085dc: lea edx, [esp + 0x8c] */ r_edx = (u32)(r_esp+0x8cu);
    /* 008085e3: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x8085e8u); f_00830aa0();
    /* 008085e8: fld dword ptr [esp + 0xa8] */ FPUSH(R_F32((u32)(r_esp+0xa8u)));
    /* 008085ef: fcom dword ptr [0x97f188] */ fx_compare(ST(0), R_F32((u32)(0x97f188u))); 
    /* 008085f5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 008085f7: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 008085f8: ja 0x808615 */ if ((!fC&&!fZ)) goto L_00808615;
L_008085fa:; BB(0x008085fa);
    /* 008085fa: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 008085fd: fchs  */ ST(0) = -ST(0);
    /* 008085ff: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 00808601: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00808603: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00808604: ja 0x808615 */ if ((!fC&&!fZ)) goto L_00808615;
L_00808606:; BB(0x00808606);
    /* 00808606: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00808608: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 0080860b: or eax, 0x10000 */ {  u32 a = r_eax; u32 b = 0x10000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00808610: mov dword ptr [esi + 0x1c], eax */ W32((u32)(r_esi+0x1cu), r_eax);
    /* 00808613: jmp 0x808622 */ goto L_00808622;
L_00808615:; BB(0x00808615);
    /* 00808615: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00808617: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 0080861a: and eax, 0xfffeffff */ {  u32 a = r_eax; u32 b = 0xfffeffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0080861f: mov dword ptr [esi + 0x1c], eax */ W32((u32)(r_esi+0x1cu), r_eax);
L_00808622:; BB(0x00808622);
    /* 00808622: add esi, 0x20 */ {  u32 a = r_esi; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00808625: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00808628: cmp ebx, dword ptr [edi + 0x2c] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edi+0x2cu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0080862b: jl 0x80858c */ if ((fS!=fO)) goto L_0080858c;
L_00808631:; BB(0x00808631);
    /* 00808631: mov eax, dword ptr [0xaafca4] */ r_eax = R32((u32)(0xaafca4u));
    /* 00808636: movsx eax, word ptr [eax + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x8u));
L_0080863a:; BB(0x0080863a);
    /* 0080863a: add edi, 0x34 */ {  u32 a = r_edi; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0080863d: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00808640: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00808642: jl 0x8084a5 */ if ((fS!=fO)) goto L_008084a5;
L_00808648:; BB(0x00808648);
    /* 00808648: add esp, 0xac */ {  u32 a = r_esp; u32 b = 0xacu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0080864e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0080864f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00808650: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00808651: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00808652: ret  */ FN_RET(0x00807f8c); r_esp += 4; return;
L_00808653:; BB(0x00808653);
    /* 00808653: mov eax, dword ptr [0xaafca4] */ r_eax = R32((u32)(0xaafca4u));
    /* 00808658: movsx eax, word ptr [eax + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x8u));
    /* 0080865c: jmp 0x80863a */ goto L_0080863a;
}

