#include "protos.h"

void f_0058512c(void)
{
    FN_ENTER(0x0058512c);
    goto L_0058512c;
L_005850d4:; BB(0x005850d4);
    /* 005850d4: movzx eax, byte ptr [0xa74328] */ r_eax = (u32)R8((u32)(0xa74328u));
    /* 005850db: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005850dd: jne 0x5850f3 */ if (!fZ) goto L_005850f3;
L_005850df:; BB(0x005850df);
    /* 005850df: mov dword ptr [0xa74334], 0x41200000 */ W32((u32)(0xa74334u), 0x41200000u);
    /* 005850e9: or eax, 0xffffff04 */ {  u32 a = r_eax; u32 b = 0xffffff04u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005850ee: mov byte ptr [0xa74328], al */ W8((u32)(0xa74328u), (u8)r_eax);
L_005850f3:; BB(0x005850f3);
    /* 005850f3: lea ecx, [esp + 0x24] */ r_ecx = (u32)(r_esp+0x24u);
    /* 005850f7: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 005850fb: mov edi, dword ptr [esi + 0x38] */ r_edi = R32((u32)(r_esi+0x38u));
    /* 005850fe: mov dword ptr [esp + 0x24], edi */ W32((u32)(r_esp+0x24u), r_edi);
    /* 00585102: mov edi, dword ptr [esi + 0x3c] */ r_edi = R32((u32)(r_esi+0x3cu));
    /* 00585105: mov dword ptr [esp + 0x28], edi */ W32((u32)(r_esp+0x28u), r_edi);
    /* 00585109: mov edi, dword ptr [esi + 0x40] */ r_edi = R32((u32)(r_esi+0x40u));
    /* 0058510c: mov dword ptr [esp + 0x2c], edi */ W32((u32)(r_esp+0x2cu), r_edi);
    /* 00585110: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x585115u); f_0082ebac();
    /* 00585115: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 00585119: fadd dword ptr [0xa74334] */ ST(0) = ST(0) + R_F32((u32)(0xa74334u));
    /* 0058511f: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 00585123: lea edi, [esp + 0x24] */ r_edi = (u32)(r_esp+0x24u);
    /* 00585127: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00585129: mov ecx, esi */ r_ecx = r_esi;
    /* 0058512b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
L_0058512c:; BB(0x0058512c);
    /* 0058512c: call 0x7b4c58 */ r_esp -= 4; W32(r_esp, 0x585131u); f_007b4c58();
    /* 00585131: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00585133: je 0x58514b */ if (fZ) goto L_0058514b;
L_00585135:; BB(0x00585135);
    /* 00585135: lea edi, [esp + 0x24] */ r_edi = (u32)(r_esp+0x24u);
    /* 00585139: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0058513a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0058513b: call 0x780d3c */ r_esp -= 4; W32(r_esp, 0x585140u); f_00780d3c();
    /* 00585140: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00585143: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00585145: je 0x585231 */ if (fZ) goto L_00585231;
L_0058514b:; BB(0x0058514b);
    /* 0058514b: mov edi, ebp */ r_edi = r_ebp;
    /* 0058514d: shl edi, 0xc */ { u32 c = (12u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 00585150: test ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00585156: je 0x58515a */ if (fZ) goto L_0058515a;
L_00585158:; BB(0x00585158);
    /* 00585158: neg edi */ { u32 x = r_edi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
L_0058515a:; BB(0x0058515a);
    /* 0058515a: mov ecx, edi */ r_ecx = r_edi;
    /* 0058515c: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x585161u); f_0082dcbc();
    /* 00585161: fstp dword ptr [esp + 0x50] */ W_F32((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 00585165: mov ecx, edi */ r_ecx = r_edi;
    /* 00585167: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x58516cu); f_0082ddd8();
    /* 0058516c: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 00585170: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 00585174: fld dword ptr [esp + 0x50] */ FPUSH(R_F32((u32)(r_esp+0x50u)));
    /* 00585178: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 0058517c: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 0058517e: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00585180: fmulp st(4) */ ST(4) = ST(4) * ST(0); FPOP();
    /* 00585182: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00585184: fchs  */ ST(0) = -ST(0);
    /* 00585186: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00585188: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0058518a: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0058518c: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0058518f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00585191: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00585195: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00585197: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 0058519b: cmp ebp, 0x10 */ {  u32 a = r_ebp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0058519e: jl 0x5850d4 */ if ((fS!=fO)) goto L_005850d4;
L_005851a4:; BB(0x005851a4);
    /* 005851a4: mov edi, dword ptr [esp + 0x4c] */ r_edi = R32((u32)(r_esp+0x4cu));
    /* 005851a8: mov ebp, dword ptr [esp + 0x48] */ r_ebp = R32((u32)(r_esp+0x48u));
L_005851ac:; BB(0x005851ac);
    /* 005851ac: movzx eax, byte ptr [0xa742d0] */ r_eax = (u32)R8((u32)(0xa742d0u));
    /* 005851b3: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005851b5: jne 0x5851c9 */ if (!fZ) goto L_005851c9;
L_005851b7:; BB(0x005851b7);
    /* 005851b7: mov dword ptr [0xa742dc], 0x40f00000 */ W32((u32)(0xa742dcu), 0x40f00000u);
    /* 005851c1: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005851c4: mov byte ptr [0xa742d0], al */ W8((u32)(0xa742d0u), (u8)r_eax);
L_005851c9:; BB(0x005851c9);
    /* 005851c9: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005851cb: jne 0x5851e5 */ if (!fZ) goto L_005851e5;
L_005851cd:; BB(0x005851cd);
    /* 005851cd: fld dword ptr [0xa742dc] */ FPUSH(R_F32((u32)(0xa742dcu)));
    /* 005851d3: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 005851d5: fstp dword ptr [0xa742e0] */ W_F32((u32)(0xa742e0u), ST(0)); FPOP();
    /* 005851db: or eax, 0xffffff08 */ {  u32 a = r_eax; u32 b = 0xffffff08u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005851e0: mov byte ptr [0xa742d0], al */ W8((u32)(0xa742d0u), (u8)r_eax);
L_005851e5:; BB(0x005851e5);
    /* 005851e5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005851e6: lea eax, [esi + 0x394] */ r_eax = (u32)(r_esi+0x394u);
    /* 005851ec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005851ed: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x5851f2u); f_007a9180();
    /* 005851f2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005851f5: fcomp dword ptr [0xa742e0] */ fx_compare(ST(0), R_F32((u32)(0xa742e0u))); FPOP();
    /* 005851fb: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005851fd: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005851fe: jae 0x58522b */ if (!fC) goto L_0058522b;
L_00585200:; BB(0x00585200);
    /* 00585200: mov eax, dword ptr [esi + 0x380] */ r_eax = R32((u32)(r_esi+0x380u));
    /* 00585206: cmp eax, dword ptr [esi + 0x37c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+0x37cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058520c: je 0x585214 */ if (fZ) goto L_00585214;
L_0058520e:; BB(0x0058520e);
    /* 0058520e: mov dword ptr [esi + 0x37c], eax */ W32((u32)(r_esi+0x37cu), r_eax);
L_00585214:; BB(0x00585214);
    /* 00585214: mov eax, dword ptr [0x9bf5a0] */ r_eax = R32((u32)(0x9bf5a0u));
    /* 00585219: mov dword ptr [esi + 0x380], 4 */ W32((u32)(r_esi+0x380u), 0x4u);
    /* 00585223: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00585225: je 0x58522b */ if (fZ) goto L_0058522b;
L_00585227:; BB(0x00585227);
    /* 00585227: mov ecx, esi */ r_ecx = r_esi;
    /* 00585229: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58522bu); call_ind(t); }
L_0058522b:; BB(0x0058522b);
    /* 0058522b: add esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0058522e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0058522f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00585230: ret  */ FN_RET(0x0058512c); r_esp += 4; return;
L_00585231:; BB(0x00585231);
    /* 00585231: mov edi, dword ptr [esp + 0x4c] */ r_edi = R32((u32)(r_esp+0x4cu));
    /* 00585235: mov ebp, dword ptr [esp + 0x48] */ r_ebp = R32((u32)(r_esp+0x48u));
    /* 00585239: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 0058523c: mov dword ptr [esi + 0x44], eax */ W32((u32)(r_esi+0x44u), r_eax);
    /* 0058523f: mov eax, dword ptr [esi + 0x3c] */ r_eax = R32((u32)(r_esi+0x3cu));
    /* 00585242: mov dword ptr [esi + 0x48], eax */ W32((u32)(r_esi+0x48u), r_eax);
    /* 00585245: mov eax, dword ptr [esi + 0x40] */ r_eax = R32((u32)(r_esi+0x40u));
    /* 00585248: mov dword ptr [esi + 0x4c], eax */ W32((u32)(r_esi+0x4cu), r_eax);
    /* 0058524b: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 0058524f: mov dword ptr [esi + 0x38], eax */ W32((u32)(r_esi+0x38u), r_eax);
    /* 00585252: mov ecx, esi */ r_ecx = r_esi;
    /* 00585254: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 00585258: mov dword ptr [esi + 0x3c], eax */ W32((u32)(r_esi+0x3cu), r_eax);
    /* 0058525b: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 0058525f: mov dword ptr [esi + 0x40], eax */ W32((u32)(r_esi+0x40u), r_eax);
    /* 00585262: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x585267u); f_007b6880();
    /* 00585267: jmp 0x5851ac */ goto L_005851ac;
}

void f_00585280(void) /* sub_585280 */
{
    FN_ENTER(0x00585280);
    /* 00585280: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00585281: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00585282: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00585285: mov esi, ecx */ r_esi = r_ecx;
    /* 00585287: mov eax, dword ptr [esi + 0x3cc] */ r_eax = R32((u32)(r_esi+0x3ccu));
    /* 0058528d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058528f: je 0x585295 */ if (fZ) goto L_00585295;
L_00585291:; BB(0x00585291);
    /* 00585291: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00585293: jmp 0x5852c2 */ goto L_005852c2;
L_00585295:; BB(0x00585295);
    /* 00585295: mov eax, dword ptr [esi + 0x3a8] */ r_eax = R32((u32)(r_esi+0x3a8u));
    /* 0058529b: mov eax, dword ptr [eax + 0x380] */ r_eax = R32((u32)(r_eax+0x380u));
    /* 005852a1: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005852a4: je 0x58545d */ if (fZ) goto L_0058545d;
L_005852aa:; BB(0x005852aa);
    /* 005852aa: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005852ad: je 0x58545d */ if (fZ) goto L_0058545d;
L_005852b3:; BB(0x005852b3);
    /* 005852b3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005852b5:; BB(0x005852b5);
    /* 005852b5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005852b7: je 0x5852c0 */ if (fZ) goto L_005852c0;
L_005852b9:; BB(0x005852b9);
    /* 005852b9: mov eax, 1 */ r_eax = 0x1u;
    /* 005852be: jmp 0x5852c2 */ goto L_005852c2;
L_005852c0:; BB(0x005852c0);
    /* 005852c0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005852c2:; BB(0x005852c2);
    /* 005852c2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005852c4: je 0x5852f7 */ if (fZ) goto L_005852f7;
L_005852c6:; BB(0x005852c6);
    /* 005852c6: mov eax, dword ptr [esi + 0x380] */ r_eax = R32((u32)(r_esi+0x380u));
    /* 005852cc: cmp eax, dword ptr [esi + 0x37c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+0x37cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005852d2: je 0x5852da */ if (fZ) goto L_005852da;
L_005852d4:; BB(0x005852d4);
    /* 005852d4: mov dword ptr [esi + 0x37c], eax */ W32((u32)(r_esi+0x37cu), r_eax);
L_005852da:; BB(0x005852da);
    /* 005852da: mov eax, dword ptr [0x9bf600] */ r_eax = R32((u32)(0x9bf600u));
    /* 005852df: mov dword ptr [esi + 0x380], 0x10 */ W32((u32)(r_esi+0x380u), 0x10u);
    /* 005852e9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005852eb: je 0x5852f1 */ if (fZ) goto L_005852f1;
L_005852ed:; BB(0x005852ed);
    /* 005852ed: mov ecx, esi */ r_ecx = r_esi;
    /* 005852ef: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5852f1u); call_ind(t); }
L_005852f1:; BB(0x005852f1);
    /* 005852f1: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005852f4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005852f5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005852f6: ret  */ FN_RET(0x00585280); r_esp += 4; return;
L_005852f7:; BB(0x005852f7);
    /* 005852f7: mov eax, dword ptr [esi + 0x3a8] */ r_eax = R32((u32)(r_esi+0x3a8u));
    /* 005852fd: mov eax, dword ptr [eax + 0x380] */ r_eax = R32((u32)(r_eax+0x380u));
    /* 00585303: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00585306: je 0x585453 */ if (fZ) goto L_00585453;
L_0058530c:; BB(0x0058530c);
    /* 0058530c: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058530f: je 0x585453 */ if (fZ) goto L_00585453;
L_00585315:; BB(0x00585315);
    /* 00585315: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00585317:; BB(0x00585317);
    /* 00585317: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00585319: jne 0x585422 */ if (!fZ) goto L_00585422;
L_0058531f:; BB(0x0058531f);
    /* 0058531f: movzx eax, byte ptr [0xa742e4] */ r_eax = (u32)R8((u32)(0xa742e4u));
    /* 00585326: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00585328: jne 0x58533e */ if (!fZ) goto L_0058533e;
L_0058532a:; BB(0x0058532a);
    /* 0058532a: mov dword ptr [0xa742e8], 5 */ W32((u32)(0xa742e8u), 0x5u);
    /* 00585334: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00585339: mov byte ptr [0xa742e4], al */ W8((u32)(0xa742e4u), (u8)r_eax);
L_0058533e:; BB(0x0058533e);
    /* 0058533e: mov eax, dword ptr [0xa742e8] */ r_eax = R32((u32)(0xa742e8u));
    /* 00585343: mov edx, dword ptr [esi + 0x3bc] */ r_edx = R32((u32)(r_esi+0x3bcu));
    /* 00585349: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0058534b: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0058534d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0058534f: jle 0x585408 */ if ((fZ||fS!=fO)) goto L_00585408;
L_00585355:; BB(0x00585355);
    /* 00585355: mov edi, dword ptr [esi + 0x398] */ r_edi = R32((u32)(r_esi+0x398u));
    /* 0058535b: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0058535f: fild dword ptr [esp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xcu)));
    /* 00585363: fdivr dword ptr [0x92841c] */ ST(0) = R_F32((u32)(0x92841cu)) / ST(0);
    /* 00585369: mov eax, dword ptr [esi + 0x394] */ r_eax = R32((u32)(r_esi+0x394u));
    /* 0058536f: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 00585373: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00585376: mov eax, dword ptr [esi + 0x39c] */ r_eax = R32((u32)(r_esi+0x39cu));
    /* 0058537c: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 00585380: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00585384: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00585387: lea edi, [esi + 0x38] */ r_edi = (u32)(r_esi+0x38u);
    /* 0058538a: mov edx, edi */ r_edx = r_edi;
    /* 0058538c: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x585391u); f_0082f9c4();
    /* 00585391: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00585394: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 00585398: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 0058539a: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0058539e: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 005853a2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005853a4: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 005853a6: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005853a8: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 005853aa: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005853ac: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005853af: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 005853b3: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 005853b7: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 005853ba: mov ecx, edi */ r_ecx = r_edi;
    /* 005853bc: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x5853c1u); f_0082ebac();
    /* 005853c1: push dword ptr [esi + 0x3a0] */ { u32 v = R32((u32)(r_esi+0x3a0u)); r_esp -= 4; W32(r_esp, v); }
    /* 005853c7: push dword ptr [esi + 0x60] */ { u32 v = R32((u32)(r_esi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 005853ca: call 0x7a900c */ r_esp -= 4; W32(r_esp, 0x5853cfu); f_007a900c();
    /* 005853cf: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005853d2: fild dword ptr [esi + 0x60] */ FPUSH((long double)(i32)R32((u32)(r_esi+0x60u)));
    /* 005853d5: mov edx, dword ptr [esi + 0x3bc] */ r_edx = R32((u32)(r_esi+0x3bcu));
    /* 005853db: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 005853df: fild dword ptr [esp + 0x14] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x14u)));
    /* 005853e3: fmul dword ptr [esp + 0x28] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x28u));
    /* 005853e7: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 005853e9: fnstcw word ptr [esp + 0x1c] */ W16((u32)(r_esp+0x1cu), fcw);
    /* 005853ed: movzx eax, word ptr [esp + 0x1c] */ r_eax = (u32)R16((u32)(r_esp+0x1cu));
    /* 005853f2: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005853f7: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 005853fb: fldcw word ptr [esp + 0x24] */ fcw = R16((u32)(r_esp+0x24u));
    /* 005853ff: fistp dword ptr [esi + 0x60] */ W32((u32)(r_esi+0x60u), (u32)fx_int32(ST(0))); FPOP();
    /* 00585402: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 00585406: jmp 0x585413 */ goto L_00585413;
L_00585408:; BB(0x00585408);
    /* 00585408: jne 0x585413 */ if (!fZ) goto L_00585413;
L_0058540a:; BB(0x0058540a);
    /* 0058540a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0058540c: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
L_00585413:; BB(0x00585413);
    /* 00585413: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00585416: mov dword ptr [esi + 0x3bc], edx */ W32((u32)(r_esi+0x3bcu), r_edx);
    /* 0058541c: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0058541f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00585420: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00585421: ret  */ FN_RET(0x00585280); r_esp += 4; return;
L_00585422:; BB(0x00585422);
    /* 00585422: mov eax, dword ptr [esi + 0x380] */ r_eax = R32((u32)(r_esi+0x380u));
    /* 00585428: cmp eax, dword ptr [esi + 0x37c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+0x37cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058542e: je 0x585436 */ if (fZ) goto L_00585436;
L_00585430:; BB(0x00585430);
    /* 00585430: mov dword ptr [esi + 0x37c], eax */ W32((u32)(r_esi+0x37cu), r_eax);
L_00585436:; BB(0x00585436);
    /* 00585436: mov eax, dword ptr [0x9bf590] */ r_eax = R32((u32)(0x9bf590u));
    /* 0058543b: mov dword ptr [esi + 0x380], 2 */ W32((u32)(r_esi+0x380u), 0x2u);
    /* 00585445: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00585447: je 0x58544d */ if (fZ) goto L_0058544d;
L_00585449:; BB(0x00585449);
    /* 00585449: mov ecx, esi */ r_ecx = r_esi;
    /* 0058544b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58544du); call_ind(t); }
L_0058544d:; BB(0x0058544d);
    /* 0058544d: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00585450: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00585451: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00585452: ret  */ FN_RET(0x00585280); r_esp += 4; return;
L_00585453:; BB(0x00585453);
    /* 00585453: mov eax, 1 */ r_eax = 0x1u;
    /* 00585458: jmp 0x585317 */ goto L_00585317;
L_0058545d:; BB(0x0058545d);
    /* 0058545d: mov eax, 1 */ r_eax = 0x1u;
    /* 00585462: jmp 0x5852b5 */ goto L_005852b5;
}

void f_00585468(void) /* sub_585468 */
{
    FN_ENTER(0x00585468);
    /* 00585468: mov eax, dword ptr [ecx + 0x3a8] */ r_eax = R32((u32)(r_ecx+0x3a8u));
    /* 0058546e: mov eax, dword ptr [eax + 0x380] */ r_eax = R32((u32)(r_eax+0x380u));
    /* 00585474: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00585477: je 0x5854e2 */ if (fZ) goto L_005854e2;
L_00585479:; BB(0x00585479);
    /* 00585479: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058547c: je 0x5854e2 */ if (fZ) goto L_005854e2;
L_0058547e:; BB(0x0058547e);
    /* 0058547e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00585480:; BB(0x00585480);
    /* 00585480: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00585482: jne 0x5854b8 */ if (!fZ) goto L_005854b8;
L_00585484:; BB(0x00585484);
    /* 00585484: mov eax, dword ptr [ecx + 0xb0] */ r_eax = R32((u32)(r_ecx+0xb0u));
    /* 0058548a: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0058548c: je 0x5854b7 */ if (fZ) goto L_005854b7;
L_0058548e:; BB(0x0058548e);
    /* 0058548e: mov eax, dword ptr [ecx + 0x380] */ r_eax = R32((u32)(r_ecx+0x380u));
    /* 00585494: cmp eax, dword ptr [ecx + 0x37c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x37cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058549a: je 0x5854a2 */ if (fZ) goto L_005854a2;
L_0058549c:; BB(0x0058549c);
    /* 0058549c: mov dword ptr [ecx + 0x37c], eax */ W32((u32)(r_ecx+0x37cu), r_eax);
L_005854a2:; BB(0x005854a2);
    /* 005854a2: mov eax, dword ptr [0x9bf580] */ r_eax = R32((u32)(0x9bf580u));
    /* 005854a7: mov dword ptr [ecx + 0x380], 0 */ W32((u32)(r_ecx+0x380u), 0x0u);
    /* 005854b1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005854b3: je 0x5854b7 */ if (fZ) goto L_005854b7;
L_005854b5:; BB(0x005854b5);
    /* 005854b5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5854b7u); call_ind(t); }
L_005854b7:; BB(0x005854b7);
    /* 005854b7: ret  */ FN_RET(0x00585468); r_esp += 4; return;
L_005854b8:; BB(0x005854b8);
    /* 005854b8: mov eax, dword ptr [ecx + 0x380] */ r_eax = R32((u32)(r_ecx+0x380u));
    /* 005854be: cmp eax, dword ptr [ecx + 0x37c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x37cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005854c4: je 0x5854cc */ if (fZ) goto L_005854cc;
L_005854c6:; BB(0x005854c6);
    /* 005854c6: mov dword ptr [ecx + 0x37c], eax */ W32((u32)(r_ecx+0x37cu), r_eax);
L_005854cc:; BB(0x005854cc);
    /* 005854cc: mov eax, dword ptr [0x9bf590] */ r_eax = R32((u32)(0x9bf590u));
    /* 005854d1: mov dword ptr [ecx + 0x380], 2 */ W32((u32)(r_ecx+0x380u), 0x2u);
    /* 005854db: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005854dd: je 0x5854e1 */ if (fZ) goto L_005854e1;
L_005854df:; BB(0x005854df);
    /* 005854df: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5854e1u); call_ind(t); }
L_005854e1:; BB(0x005854e1);
    /* 005854e1: ret  */ FN_RET(0x00585468); r_esp += 4; return;
L_005854e2:; BB(0x005854e2);
    /* 005854e2: mov eax, 1 */ r_eax = 0x1u;
    /* 005854e7: jmp 0x585480 */ goto L_00585480;
}

void f_005854ec(void) /* sub_5854EC */
{
    FN_ENTER(0x005854ec);
    /* 005854ec: mov eax, dword ptr [ecx + 0xb0] */ r_eax = R32((u32)(r_ecx+0xb0u));
    /* 005854f2: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005854f4: je 0x585501 */ if (fZ) goto L_00585501;
L_005854f6:; BB(0x005854f6);
    /* 005854f6: push dword ptr [ecx + 0x37c] */ { u32 v = R32((u32)(r_ecx+0x37cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005854fc: call 0x585504 */ r_esp -= 4; W32(r_esp, 0x585501u); f_00585504();
L_00585501:; BB(0x00585501);
    /* 00585501: ret  */ FN_RET(0x005854ec); r_esp += 4; return;
}

void f_00585504(void) /* sub_585504 */
{
    FN_ENTER(0x00585504);
    /* 00585504: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 00585508: mov eax, dword ptr [ecx + 0x380] */ r_eax = R32((u32)(r_ecx+0x380u));
    /* 0058550e: cmp eax, dword ptr [ecx + 0x37c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x37cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00585514: je 0x58551c */ if (fZ) goto L_0058551c;
L_00585516:; BB(0x00585516);
    /* 00585516: mov dword ptr [ecx + 0x37c], eax */ W32((u32)(r_ecx+0x37cu), r_eax);
L_0058551c:; BB(0x0058551c);
    /* 0058551c: mov dword ptr [ecx + 0x380], edx */ W32((u32)(r_ecx+0x380u), r_edx);
    /* 00585522: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00585524: jl 0x585538 */ if ((fS!=fO)) goto L_00585538;
L_00585526:; BB(0x00585526);
    /* 00585526: cmp edx, 0x11 */ {  u32 a = r_edx; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00585529: jge 0x585538 */ if ((fS==fO)) goto L_00585538;
L_0058552b:; BB(0x0058552b);
    /* 0058552b: mov eax, dword ptr [edx*8 + 0x9bf580] */ r_eax = R32((u32)(r_edx*8+0x9bf580u));
    /* 00585532: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00585534: je 0x585538 */ if (fZ) goto L_00585538;
L_00585536:; BB(0x00585536);
    /* 00585536: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x585538u); call_ind(t); }
L_00585538:; BB(0x00585538);
    /* 00585538: ret 4 */ FN_RET(0x00585504); r_esp += 8; return;
}

void f_0058553c(void) /* sub_58553C */
{
    FN_ENTER(0x0058553c);
    /* 0058553c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0058553d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0058553e: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00585541: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00585543: movzx edx, byte ptr [0xa742ec] */ r_edx = (u32)R8((u32)(0xa742ecu));
    /* 0058554a: mov ebp, dword ptr [ebx + 0x3bc] */ r_ebp = R32((u32)(r_ebx+0x3bcu));
    /* 00585550: add ebp, -1 */ {  u32 a = r_ebp; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00585553: mov dword ptr [ebx + 0x3bc], ebp */ W32((u32)(r_ebx+0x3bcu), r_ebp);
    /* 00585559: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0058555c: jne 0x585571 */ if (!fZ) goto L_00585571;
L_0058555e:; BB(0x0058555e);
    /* 0058555e: mov eax, dword ptr [0x9bf4a8] */ r_eax = R32((u32)(0x9bf4a8u));
    /* 00585563: mov dword ptr [0xa742f0], eax */ W32((u32)(0xa742f0u), r_eax);
    /* 00585568: or edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0058556b: mov byte ptr [0xa742ec], dl */ W8((u32)(0xa742ecu), (u8)r_edx);
L_00585571:; BB(0x00585571);
    /* 00585571: fld dword ptr [0x928270] */ FPUSH(R_F32((u32)(0x928270u)));
    /* 00585577: fld dword ptr [ebx + 0xc0] */ FPUSH(R_F32((u32)(r_ebx+0xc0u)));
    /* 0058557d: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0058557f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00585581: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00585582: jb 0x5855f2 */ if (fC) goto L_005855f2;
L_00585584:; BB(0x00585584);
    /* 00585584: fld dword ptr [0xa742f0] */ FPUSH(R_F32((u32)(0xa742f0u)));
    /* 0058558a: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0058558c: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0058558e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00585590: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00585591: jae 0x5855f6 */ if (!fC) goto L_005855f6;
L_00585593:; BB(0x00585593);
    /* 00585593: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00585596: jne 0x5855ae */ if (!fZ) goto L_005855ae;
L_00585598:; BB(0x00585598);
    /* 00585598: mov dword ptr [0xa742f4], 0x40a00000 */ W32((u32)(0xa742f4u), 0x40a00000u);
    /* 005855a2: or edx, 0xffffff02 */ {  u32 a = r_edx; u32 b = 0xffffff02u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 005855a8: mov byte ptr [0xa742ec], dl */ W8((u32)(0xa742ecu), (u8)r_edx);
L_005855ae:; BB(0x005855ae);
    /* 005855ae: mov eax, dword ptr [ebx + 0x3ac] */ r_eax = R32((u32)(r_ebx+0x3acu));
    /* 005855b4: mov edx, dword ptr [ebx + 0x3b0] */ r_edx = R32((u32)(r_ebx+0x3b0u));
    /* 005855ba: mov ebp, dword ptr [ebx + 0x3b4] */ r_ebp = R32((u32)(r_ebx+0x3b4u));
    /* 005855c0: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 005855c3: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 005855c7: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 005855cb: fadd dword ptr [0xa742f4] */ ST(0) = ST(0) + R_F32((u32)(0xa742f4u));
    /* 005855d1: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 005855d5: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
    /* 005855d9: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005855dc: push 0xf3 */ { u32 v = 0xf3u; r_esp -= 4; W32(r_esp, v); }
    /* 005855e1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005855e2: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5855e7u); f_0050b510();
    /* 005855e7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005855ea: mov ebp, dword ptr [ebx + 0x3bc] */ r_ebp = R32((u32)(r_ebx+0x3bcu));
    /* 005855f0: jmp 0x5855f6 */ goto L_005855f6;
L_005855f2:; BB(0x005855f2);
    /* 005855f2: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 005855f4: fstp st(0) */ ST(0) = ST(0); FPOP();
L_005855f6:; BB(0x005855f6);
    /* 005855f6: cmp ebp, 0x78 */ {  u32 a = r_ebp; u32 b = 0x78u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005855f9: jg 0x58563e */ if ((!fZ&&fS==fO)) goto L_0058563e;
L_005855fb:; BB(0x005855fb);
    /* 005855fb: je 0x585644 */ if (fZ) goto L_00585644;
L_005855fd:; BB(0x005855fd);
    /* 005855fd: fld dword ptr [0xa74340] */ FPUSH(R_F32((u32)(0xa74340u)));
    /* 00585603: fadd dword ptr [ebx + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x3cu));
    /* 00585606: fstp dword ptr [ebx + 0x3c] */ W_F32((u32)(r_ebx+0x3cu), ST(0)); FPOP();
    /* 00585609: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0058560b: jl 0x585613 */ if ((fS!=fO)) goto L_00585613;
L_0058560d:; BB(0x0058560d);
    /* 0058560d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00585610: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00585611: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00585612: ret  */ FN_RET(0x0058553c); r_esp += 4; return;
L_00585613:; BB(0x00585613);
    /* 00585613: mov eax, dword ptr [ebx + 0x380] */ r_eax = R32((u32)(r_ebx+0x380u));
    /* 00585619: cmp eax, dword ptr [ebx + 0x37c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0x37cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058561f: je 0x585627 */ if (fZ) goto L_00585627;
L_00585621:; BB(0x00585621);
    /* 00585621: mov dword ptr [ebx + 0x37c], eax */ W32((u32)(r_ebx+0x37cu), r_eax);
L_00585627:; BB(0x00585627);
    /* 00585627: mov eax, dword ptr [0x9bf5c0] */ r_eax = R32((u32)(0x9bf5c0u));
    /* 0058562c: mov dword ptr [ebx + 0x380], 8 */ W32((u32)(r_ebx+0x380u), 0x8u);
    /* 00585636: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00585638: je 0x58563e */ if (fZ) goto L_0058563e;
L_0058563a:; BB(0x0058563a);
    /* 0058563a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0058563c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58563eu); call_ind(t); }
L_0058563e:; BB(0x0058563e);
    /* 0058563e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00585641: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00585642: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00585643: ret  */ FN_RET(0x0058553c); r_esp += 4; return;
L_00585644:; BB(0x00585644);
    /* 00585644: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 00585646: lea ebp, [ebx + 0x3ac] */ r_ebp = (u32)(r_ebx+0x3acu);
    /* 0058564c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0058564d: call 0x5787a4 */ r_esp -= 4; W32(r_esp, 0x585652u); f_005787a4();
    /* 00585652: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00585654: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00585655: call 0x578418 */ r_esp -= 4; W32(r_esp, 0x58565au); f_00578418();
    /* 0058565a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058565d: mov ebp, dword ptr [ebx + 0x3bc] */ r_ebp = R32((u32)(r_ebx+0x3bcu));
    /* 00585663: jmp 0x5855fd */ goto L_005855fd;
}

void f_0058554c(void)
{
    FN_ENTER(0x0058554c);
    /* 0058554c: mov esp, 0x83000003 */ r_esp = 0x83000003u;
    UNSUP(0x00585551, "falls out of decoded code");
}

void f_00585668(void) /* sub_585668 */
{
    FN_ENTER(0x00585668);
    /* 00585668: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00585669: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0058566a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0058566b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0058566c: sub esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0058566f: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00585671: movzx eax, word ptr [ebp + 0x3c0] */ r_eax = (u32)R16((u32)(r_ebp+0x3c0u));
    /* 00585678: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00585679: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x58567eu); f_007b4d18();
    /* 0058567e: mov esi, eax */ r_esi = r_eax;
    /* 00585680: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00585683: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00585685: je 0x585af5 */ if (fZ) goto L_00585af5;
L_0058568b:; BB(0x0058568b);
    /* 0058568b: mov edx, dword ptr [esi + 0x30] */ r_edx = R32((u32)(r_esi+0x30u));
    /* 0058568e: test edx, 0x2000800 */ {  u32 a = r_edx; u32 b = 0x2000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00585694: jne 0x585af5 */ if (!fZ) goto L_00585af5;
L_0058569a:; BB(0x0058569a);
    /* 0058569a: add dword ptr [ebp + 0x3bc], -1 */ { u32 ad = (u32)(r_ebp+0x3bcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 005856a1: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 005856a4: mov ebx, dword ptr [esi + 0x38] */ r_ebx = R32((u32)(r_esi+0x38u));
    /* 005856a7: mov edi, dword ptr [esi + 0x3c] */ r_edi = R32((u32)(r_esi+0x3cu));
    /* 005856aa: mov edx, dword ptr [esi + 0x40] */ r_edx = R32((u32)(r_esi+0x40u));
    /* 005856ad: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 005856b0: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 005856b4: lea ebx, [ebp + 0x38] */ r_ebx = (u32)(r_ebp+0x38u);
    /* 005856b7: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 005856bb: mov edx, ebx */ r_edx = r_ebx;
    /* 005856bd: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x5856c2u); f_0082f9c4();
    /* 005856c2: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 005856ca: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 005856cd: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x5856d2u); f_0083173c();
    /* 005856d2: fcomp dword ptr [0x928410] */ fx_compare(ST(0), R_F32((u32)(0x928410u))); FPOP();
    /* 005856d8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005856da: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005856db: ja 0x5856fa */ if ((!fC&&!fZ)) goto L_005856fa;
L_005856dd:; BB(0x005856dd);
    /* 005856dd: fld dword ptr [0x92840c] */ FPUSH(R_F32((u32)(0x92840cu)));
    /* 005856e3: fld dword ptr [0x928414] */ FPUSH(R_F32((u32)(0x928414u)));
    /* 005856e9: mov dword ptr [esp], 0x3f800000 */ W32((u32)(r_esp), 0x3f800000u);
    /* 005856f0: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 005856f8: jmp 0x58570b */ goto L_0058570b;
L_005856fa:; BB(0x005856fa);
    /* 005856fa: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 005856fd: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x585702u); f_0082df08();
    /* 00585702: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00585704: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00585707: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
L_0058570b:; BB(0x0058570b);
    /* 0058570b: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0058570d: fmul qword ptr [0x928330] */ ST(0) = ST(0) * R_F64((u32)(0x928330u));
    /* 00585713: fdiv qword ptr [0x928328] */ ST(0) = ST(0) / R_F64((u32)(0x928328u));
    /* 00585719: fnstcw word ptr [esp + 0x30] */ W16((u32)(r_esp+0x30u), fcw);
    /* 0058571d: movzx eax, word ptr [esp + 0x30] */ r_eax = (u32)R16((u32)(r_esp+0x30u));
    /* 00585722: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00585727: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 0058572b: fldcw word ptr [esp + 0x38] */ fcw = R16((u32)(r_esp+0x38u));
    /* 0058572f: fistp dword ptr [esp + 0x40] */ W32((u32)(r_esp+0x40u), (u32)fx_int32(ST(0))); FPOP();
    /* 00585733: fldcw word ptr [esp + 0x30] */ fcw = R16((u32)(r_esp+0x30u));
    /* 00585737: mov edi, dword ptr [esp + 0x40] */ r_edi = R32((u32)(r_esp+0x40u));
    /* 0058573b: push 0x101 */ { u32 v = 0x101u; r_esp -= 4; W32(r_esp, v); }
    /* 00585740: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00585741: push dword ptr [ebp + 0x60] */ { u32 v = R32((u32)(r_ebp+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 00585744: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x585749u); f_007a8c74();
    /* 00585749: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058574c: mov edi, dword ptr [ebp + 0x3bc] */ r_edi = R32((u32)(r_ebp+0x3bcu));
    /* 00585752: mov dword ptr [ebp + 0x60], eax */ W32((u32)(r_ebp+0x60u), r_eax);
    /* 00585755: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00585757: jle 0x585bac */ if ((fZ||fS!=fO)) goto L_00585bac;
L_0058575d:; BB(0x0058575d);
    /* 0058575d: fld dword ptr [0x928278] */ FPUSH(R_F32((u32)(0x928278u)));
    /* 00585763: fadd dword ptr [ebp + 0x3b8] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x3b8u));
    /* 00585769: fcom dword ptr [0x928274] */ fx_compare(ST(0), R_F32((u32)(0x928274u))); 
    /* 0058576f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00585771: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00585772: jbe 0x585791 */ if ((fC||fZ)) goto L_00585791;
L_00585774:; BB(0x00585774);
    /* 00585774: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00585776: fld dword ptr [0x928274] */ FPUSH(R_F32((u32)(0x928274u)));
    /* 0058577c: fld dword ptr [0x928414] */ FPUSH(R_F32((u32)(0x928414u)));
    /* 00585782: mov edi, 0x3fa00000 */ r_edi = 0x3fa00000u;
    /* 00585787: mov dword ptr [ebp + 0x3b8], edi */ W32((u32)(r_ebp+0x3b8u), r_edi);
    /* 0058578d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0058578f: jmp 0x58579f */ goto L_0058579f;
L_00585791:; BB(0x00585791);
    /* 00585791: fld dword ptr [0x928414] */ FPUSH(R_F32((u32)(0x928414u)));
    /* 00585797: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00585799: fst dword ptr [ebp + 0x3b8] */ W_F32((u32)(r_ebp+0x3b8u), ST(0));
L_0058579f:; BB(0x0058579f);
    /* 0058579f: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 005857a2: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 005857a6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005857a8: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 005857aa: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005857ac: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 005857ae: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005857b0: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 005857b4: fst dword ptr [esp] */ W_F32((u32)(r_esp), ST(0));
    /* 005857b7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005857b9: fst dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0));
    /* 005857bd: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005857bf: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 005857c3: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 005857c7: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 005857cb: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x5857d0u); f_0083173c();
    /* 005857d0: fld dword ptr [0x928414] */ FPUSH(R_F32((u32)(0x928414u)));
    /* 005857d6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005857d8: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 005857da: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005857dc: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005857dd: je 0x58594b */ if (fZ) goto L_0058594b;
L_005857e3:; BB(0x005857e3);
    /* 005857e3: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005857e5: movzx eax, byte ptr [0xa74328] */ r_eax = (u32)R8((u32)(0xa74328u));
    /* 005857ec: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005857ee: jne 0x585804 */ if (!fZ) goto L_00585804;
L_005857f0:; BB(0x005857f0);
    /* 005857f0: mov edi, dword ptr [0xa74324] */ r_edi = R32((u32)(0xa74324u));
    /* 005857f6: mov dword ptr [0xa7432c], edi */ W32((u32)(0xa7432cu), r_edi);
    /* 005857fc: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005857ff: mov byte ptr [0xa74328], al */ W8((u32)(0xa74328u), (u8)r_eax);
L_00585804:; BB(0x00585804);
    /* 00585804: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00585806: jne 0x585820 */ if (!fZ) goto L_00585820;
L_00585808:; BB(0x00585808);
    /* 00585808: fld dword ptr [0xa7432c] */ FPUSH(R_F32((u32)(0xa7432cu)));
    /* 0058580e: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00585810: fstp dword ptr [0xa74330] */ W_F32((u32)(0xa74330u), ST(0)); FPOP();
    /* 00585816: or eax, 0xffffff02 */ {  u32 a = r_eax; u32 b = 0xffffff02u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0058581b: mov byte ptr [0xa74328], al */ W8((u32)(0xa74328u), (u8)r_eax);
L_00585820:; BB(0x00585820);
    /* 00585820: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 00585824: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 00585827: mov edi, dword ptr [ebp + 0x38] */ r_edi = R32((u32)(r_ebp+0x38u));
    /* 0058582a: mov dword ptr [esp + 0x18], edi */ W32((u32)(r_esp+0x18u), r_edi);
    /* 0058582e: mov edi, dword ptr [ebp + 0x3c] */ r_edi = R32((u32)(r_ebp+0x3cu));
    /* 00585831: mov dword ptr [esp + 0x1c], edi */ W32((u32)(r_esp+0x1cu), r_edi);
    /* 00585835: mov edi, dword ptr [ebp + 0x40] */ r_edi = R32((u32)(r_ebp+0x40u));
    /* 00585838: mov dword ptr [esp + 0x20], edi */ W32((u32)(r_esp+0x20u), r_edi);
    /* 0058583c: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x585841u); f_0082ebac();
    /* 00585841: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 00585845: lea edi, [ebp + 0x50] */ r_edi = (u32)(r_ebp+0x50u);
    /* 00585848: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00585849: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058584a: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x58584fu); f_007a9180();
    /* 0058584f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00585852: fcomp dword ptr [0xa74330] */ fx_compare(ST(0), R_F32((u32)(0xa74330u))); FPOP();
    /* 00585858: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0058585a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0058585b: jbe 0x585868 */ if ((fC||fZ)) goto L_00585868;
L_0058585d:; BB(0x0058585d);
    /* 0058585d: fld dword ptr [0x928414] */ FPUSH(R_F32((u32)(0x928414u)));
    /* 00585863: jmp 0x58594b */ goto L_0058594b;
L_00585868:; BB(0x00585868);
    /* 00585868: mov dword ptr [esp + 0x48], esi */ W32((u32)(r_esp+0x48u), r_esi);
    /* 0058586c: mov edi, 1 */ r_edi = 0x1u;
L_00585871:; BB(0x00585871);
    /* 00585871: movzx eax, byte ptr [0xa74328] */ r_eax = (u32)R8((u32)(0xa74328u));
    /* 00585878: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0058587a: jne 0x585890 */ if (!fZ) goto L_00585890;
L_0058587c:; BB(0x0058587c);
    /* 0058587c: mov dword ptr [0xa74334], 0x41200000 */ W32((u32)(0xa74334u), 0x41200000u);
    /* 00585886: or eax, 0xffffff04 */ {  u32 a = r_eax; u32 b = 0xffffff04u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0058588b: mov byte ptr [0xa74328], al */ W8((u32)(0xa74328u), (u8)r_eax);
L_00585890:; BB(0x00585890);
    /* 00585890: lea ecx, [esp + 0x24] */ r_ecx = (u32)(r_esp+0x24u);
    /* 00585894: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 00585898: mov eax, dword ptr [ebp + 0x38] */ r_eax = R32((u32)(r_ebp+0x38u));
    /* 0058589b: mov esi, dword ptr [ebp + 0x3c] */ r_esi = R32((u32)(r_ebp+0x3cu));
    /* 0058589e: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 005858a2: mov eax, dword ptr [ebp + 0x40] */ r_eax = R32((u32)(r_ebp+0x40u));
    /* 005858a5: mov dword ptr [esp + 0x28], esi */ W32((u32)(r_esp+0x28u), r_esi);
    /* 005858a9: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 005858ad: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x5858b2u); f_0082ebac();
    /* 005858b2: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 005858b6: fadd dword ptr [0xa74334] */ ST(0) = ST(0) + R_F32((u32)(0xa74334u));
    /* 005858bc: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 005858c0: lea eax, [esp + 0x24] */ r_eax = (u32)(r_esp+0x24u);
    /* 005858c4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005858c6: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005858c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005858c9: call 0x7b4c58 */ r_esp -= 4; W32(r_esp, 0x5858ceu); f_007b4c58();
    /* 005858ce: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005858d0: je 0x5858e8 */ if (fZ) goto L_005858e8;
L_005858d2:; BB(0x005858d2);
    /* 005858d2: lea eax, [esp + 0x24] */ r_eax = (u32)(r_esp+0x24u);
    /* 005858d6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005858d7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005858d8: call 0x780d3c */ r_esp -= 4; W32(r_esp, 0x5858ddu); f_00780d3c();
    /* 005858dd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005858e0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005858e2: je 0x585b6f */ if (fZ) goto L_00585b6f;
L_005858e8:; BB(0x005858e8);
    /* 005858e8: mov esi, edi */ r_esi = r_edi;
    /* 005858ea: shl esi, 0xc */ { u32 c = (12u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 005858ed: test edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005858f3: je 0x5858f7 */ if (fZ) goto L_005858f7;
L_005858f5:; BB(0x005858f5);
    /* 005858f5: neg esi */ { u32 x = r_esi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
L_005858f7:; BB(0x005858f7);
    /* 005858f7: mov ecx, esi */ r_ecx = r_esi;
    /* 005858f9: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x5858feu); f_0082dcbc();
    /* 005858fe: fstp dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0)); FPOP();
    /* 00585902: mov ecx, esi */ r_ecx = r_esi;
    /* 00585904: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x585909u); f_0082ddd8();
    /* 00585909: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 0058590d: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 00585911: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 00585915: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 00585919: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 0058591b: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0058591d: fmulp st(4) */ ST(4) = ST(4) * ST(0); FPOP();
    /* 0058591f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00585921: fchs  */ ST(0) = -ST(0);
    /* 00585923: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00585925: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00585927: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00585929: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0058592c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0058592e: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00585932: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00585934: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 00585938: cmp edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0058593b: jl 0x585871 */ if ((fS!=fO)) goto L_00585871;
L_00585941:; BB(0x00585941);
    /* 00585941: mov esi, dword ptr [esp + 0x48] */ r_esi = R32((u32)(r_esp+0x48u));
    /* 00585945: fld dword ptr [0x928414] */ FPUSH(R_F32((u32)(0x928414u)));
L_0058594b:; BB(0x0058594b);
    /* 0058594b: fcomp dword ptr [ebp + 0x3b8] */ fx_compare(ST(0), R_F32((u32)(r_ebp+0x3b8u))); FPOP();
    /* 00585951: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00585953: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00585954: je 0x585b3c */ if (fZ) goto L_00585b3c;
L_0058595a:; BB(0x0058595a);
    /* 0058595a: movzx eax, byte ptr [0xa742f8] */ r_eax = (u32)R8((u32)(0xa742f8u));
    /* 00585961: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00585963: jne 0x585977 */ if (!fZ) goto L_00585977;
L_00585965:; BB(0x00585965);
    /* 00585965: mov dword ptr [0xa742fc], 0x41c80000 */ W32((u32)(0xa742fcu), 0x41c80000u);
    /* 0058596f: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00585972: mov byte ptr [0xa742f8], al */ W8((u32)(0xa742f8u), (u8)r_eax);
L_00585977:; BB(0x00585977);
    /* 00585977: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00585979: jne 0x585993 */ if (!fZ) goto L_00585993;
L_0058597b:; BB(0x0058597b);
    /* 0058597b: fld dword ptr [0xa742fc] */ FPUSH(R_F32((u32)(0xa742fcu)));
    /* 00585981: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00585983: fstp dword ptr [0xa74300] */ W_F32((u32)(0xa74300u), ST(0)); FPOP();
    /* 00585989: or eax, 0xffffff02 */ {  u32 a = r_eax; u32 b = 0xffffff02u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0058598e: mov byte ptr [0xa742f8], al */ W8((u32)(0xa742f8u), (u8)r_eax);
L_00585993:; BB(0x00585993);
    /* 00585993: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00585994: add esi, 0x38 */ {  u32 a = r_esi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00585997: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00585998: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x58599du); f_007a9180();
    /* 0058599d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005859a0: fcomp dword ptr [0xa74300] */ fx_compare(ST(0), R_F32((u32)(0xa74300u))); FPOP();
    /* 005859a6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005859a8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005859a9: jae 0x5859de */ if (!fC) goto L_005859de;
L_005859ab:; BB(0x005859ab);
    /* 005859ab: mov eax, dword ptr [ebp + 0x380] */ r_eax = R32((u32)(r_ebp+0x380u));
    /* 005859b1: cmp eax, dword ptr [ebp + 0x37c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x37cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005859b7: je 0x5859bf */ if (fZ) goto L_005859bf;
L_005859b9:; BB(0x005859b9);
    /* 005859b9: mov dword ptr [ebp + 0x37c], eax */ W32((u32)(r_ebp+0x37cu), r_eax);
L_005859bf:; BB(0x005859bf);
    /* 005859bf: mov eax, dword ptr [0x9bf5d8] */ r_eax = R32((u32)(0x9bf5d8u));
    /* 005859c4: mov dword ptr [ebp + 0x380], 0xb */ W32((u32)(r_ebp+0x380u), 0xbu);
    /* 005859ce: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005859d0: je 0x5859d6 */ if (fZ) goto L_005859d6;
L_005859d2:; BB(0x005859d2);
    /* 005859d2: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005859d4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5859d6u); call_ind(t); }
L_005859d6:; BB(0x005859d6);
    /* 005859d6: add esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005859d9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005859da: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005859db: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005859dc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005859dd: ret  */ FN_RET(0x00585668); r_esp += 4; return;
L_005859de:; BB(0x005859de);
    /* 005859de: mov eax, dword ptr [ebp + 0x388] */ r_eax = R32((u32)(r_ebp+0x388u));
    /* 005859e4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005859e6: jne 0x585a3b */ if (!fZ) goto L_00585a3b;
L_005859e8:; BB(0x005859e8);
    /* 005859e8: mov eax, dword ptr [ebp + 0x3a8] */ r_eax = R32((u32)(r_ebp+0x3a8u));
    /* 005859ee: mov eax, dword ptr [eax + 0x380] */ r_eax = R32((u32)(r_eax+0x380u));
    /* 005859f4: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005859f7: je 0x585b32 */ if (fZ) goto L_00585b32;
L_005859fd:; BB(0x005859fd);
    /* 005859fd: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00585a00: je 0x585b32 */ if (fZ) goto L_00585b32;
L_00585a06:; BB(0x00585a06);
    /* 00585a06: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00585a08:; BB(0x00585a08);
    /* 00585a08: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00585a0a: jne 0x585a3b */ if (!fZ) goto L_00585a3b;
L_00585a0c:; BB(0x00585a0c);
    /* 00585a0c: mov eax, dword ptr [ebp + 0x3c8] */ r_eax = R32((u32)(r_ebp+0x3c8u));
    /* 00585a12: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00585a14: jne 0x585a3b */ if (!fZ) goto L_00585a3b;
L_00585a16:; BB(0x00585a16);
    /* 00585a16: mov ebx, dword ptr [ebp + 0x3c4] */ r_ebx = R32((u32)(r_ebp+0x3c4u));
    /* 00585a1c: movsx edx, word ptr [ebp + 0x334] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x334u));
    /* 00585a23: mov eax, ebx */ r_eax = r_ebx;
    /* 00585a25: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00585a28: add ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00585a2a: sar ebx, 1 */ { u32 c = (1u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 00585a2c: cmp edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00585a2e: jg 0x585a37 */ if ((!fZ&&fS==fO)) goto L_00585a37;
L_00585a30:; BB(0x00585a30);
    /* 00585a30: mov eax, 1 */ r_eax = 0x1u;
    /* 00585a35: jmp 0x585a3d */ goto L_00585a3d;
L_00585a37:; BB(0x00585a37);
    /* 00585a37: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00585a39: jmp 0x585a3d */ goto L_00585a3d;
L_00585a3b:; BB(0x00585a3b);
    /* 00585a3b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00585a3d:; BB(0x00585a3d);
    /* 00585a3d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00585a3f: je 0x585a74 */ if (fZ) goto L_00585a74;
L_00585a41:; BB(0x00585a41);
    /* 00585a41: mov eax, dword ptr [ebp + 0x380] */ r_eax = R32((u32)(r_ebp+0x380u));
    /* 00585a47: cmp eax, dword ptr [ebp + 0x37c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x37cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00585a4d: je 0x585a55 */ if (fZ) goto L_00585a55;
L_00585a4f:; BB(0x00585a4f);
    /* 00585a4f: mov dword ptr [ebp + 0x37c], eax */ W32((u32)(r_ebp+0x37cu), r_eax);
L_00585a55:; BB(0x00585a55);
    /* 00585a55: mov eax, dword ptr [0x9bf5e0] */ r_eax = R32((u32)(0x9bf5e0u));
    /* 00585a5a: mov dword ptr [ebp + 0x380], 0xc */ W32((u32)(r_ebp+0x380u), 0xcu);
    /* 00585a64: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00585a66: je 0x585a6c */ if (fZ) goto L_00585a6c;
L_00585a68:; BB(0x00585a68);
    /* 00585a68: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00585a6a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x585a6cu); call_ind(t); }
L_00585a6c:; BB(0x00585a6c);
    /* 00585a6c: add esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00585a6f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00585a70: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00585a71: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00585a72: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00585a73: ret  */ FN_RET(0x00585668); r_esp += 4; return;
L_00585a74:; BB(0x00585a74);
    /* 00585a74: mov eax, dword ptr [ebp + 0x3cc] */ r_eax = R32((u32)(r_ebp+0x3ccu));
    /* 00585a7a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00585a7c: je 0x585a82 */ if (fZ) goto L_00585a82;
L_00585a7e:; BB(0x00585a7e);
    /* 00585a7e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00585a80: jmp 0x585aaf */ goto L_00585aaf;
L_00585a82:; BB(0x00585a82);
    /* 00585a82: mov eax, dword ptr [ebp + 0x3a8] */ r_eax = R32((u32)(r_ebp+0x3a8u));
    /* 00585a88: mov eax, dword ptr [eax + 0x380] */ r_eax = R32((u32)(r_eax+0x380u));
    /* 00585a8e: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00585a91: je 0x585b28 */ if (fZ) goto L_00585b28;
L_00585a97:; BB(0x00585a97);
    /* 00585a97: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00585a9a: je 0x585b28 */ if (fZ) goto L_00585b28;
L_00585aa0:; BB(0x00585aa0);
    /* 00585aa0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00585aa2:; BB(0x00585aa2);
    /* 00585aa2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00585aa4: je 0x585aad */ if (fZ) goto L_00585aad;
L_00585aa6:; BB(0x00585aa6);
    /* 00585aa6: mov eax, 1 */ r_eax = 0x1u;
    /* 00585aab: jmp 0x585aaf */ goto L_00585aaf;
L_00585aad:; BB(0x00585aad);
    /* 00585aad: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00585aaf:; BB(0x00585aaf);
    /* 00585aaf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00585ab1: je 0x585ae6 */ if (fZ) goto L_00585ae6;
L_00585ab3:; BB(0x00585ab3);
    /* 00585ab3: mov eax, dword ptr [ebp + 0x380] */ r_eax = R32((u32)(r_ebp+0x380u));
    /* 00585ab9: cmp eax, dword ptr [ebp + 0x37c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x37cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00585abf: je 0x585ac7 */ if (fZ) goto L_00585ac7;
L_00585ac1:; BB(0x00585ac1);
    /* 00585ac1: mov dword ptr [ebp + 0x37c], eax */ W32((u32)(r_ebp+0x37cu), r_eax);
L_00585ac7:; BB(0x00585ac7);
    /* 00585ac7: mov eax, dword ptr [0x9bf600] */ r_eax = R32((u32)(0x9bf600u));
    /* 00585acc: mov dword ptr [ebp + 0x380], 0x10 */ W32((u32)(r_ebp+0x380u), 0x10u);
    /* 00585ad6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00585ad8: je 0x585ade */ if (fZ) goto L_00585ade;
L_00585ada:; BB(0x00585ada);
    /* 00585ada: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00585adc: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x585adeu); call_ind(t); }
L_00585ade:; BB(0x00585ade);
    /* 00585ade: add esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00585ae1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00585ae2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00585ae3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00585ae4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00585ae5: ret  */ FN_RET(0x00585668); r_esp += 4; return;
L_00585ae6:; BB(0x00585ae6);
    /* 00585ae6: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00585ae8: call 0x585be8 */ r_esp -= 4; W32(r_esp, 0x585aedu); f_00585be8();
    /* 00585aed: add esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00585af0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00585af1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00585af2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00585af3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00585af4: ret  */ FN_RET(0x00585668); r_esp += 4; return;
L_00585af5:; BB(0x00585af5);
    /* 00585af5: mov eax, dword ptr [ebp + 0x380] */ r_eax = R32((u32)(r_ebp+0x380u));
    /* 00585afb: cmp eax, dword ptr [ebp + 0x37c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x37cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00585b01: je 0x585b09 */ if (fZ) goto L_00585b09;
L_00585b03:; BB(0x00585b03);
    /* 00585b03: mov dword ptr [ebp + 0x37c], eax */ W32((u32)(r_ebp+0x37cu), r_eax);
L_00585b09:; BB(0x00585b09);
    /* 00585b09: mov eax, dword ptr [0x9bf590] */ r_eax = R32((u32)(0x9bf590u));
    /* 00585b0e: mov dword ptr [ebp + 0x380], 2 */ W32((u32)(r_ebp+0x380u), 0x2u);
    /* 00585b18: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00585b1a: je 0x585b20 */ if (fZ) goto L_00585b20;
L_00585b1c:; BB(0x00585b1c);
    /* 00585b1c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00585b1e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x585b20u); call_ind(t); }
L_00585b20:; BB(0x00585b20);
    /* 00585b20: add esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00585b23: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00585b24: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00585b25: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00585b26: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00585b27: ret  */ FN_RET(0x00585668); r_esp += 4; return;
L_00585b28:; BB(0x00585b28);
    /* 00585b28: mov eax, 1 */ r_eax = 0x1u;
    /* 00585b2d: jmp 0x585aa2 */ goto L_00585aa2;
L_00585b32:; BB(0x00585b32);
    /* 00585b32: mov eax, 1 */ r_eax = 0x1u;
    /* 00585b37: jmp 0x585a08 */ goto L_00585a08;
L_00585b3c:; BB(0x00585b3c);
    /* 00585b3c: mov eax, dword ptr [ebp + 0x380] */ r_eax = R32((u32)(r_ebp+0x380u));
    /* 00585b42: cmp eax, dword ptr [ebp + 0x37c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x37cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00585b48: je 0x585b50 */ if (fZ) goto L_00585b50;
L_00585b4a:; BB(0x00585b4a);
    /* 00585b4a: mov dword ptr [ebp + 0x37c], eax */ W32((u32)(r_ebp+0x37cu), r_eax);
L_00585b50:; BB(0x00585b50);
    /* 00585b50: mov eax, dword ptr [0x9bf5d0] */ r_eax = R32((u32)(0x9bf5d0u));
    /* 00585b55: mov dword ptr [ebp + 0x380], 0xa */ W32((u32)(r_ebp+0x380u), 0xau);
    /* 00585b5f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00585b61: je 0x585b67 */ if (fZ) goto L_00585b67;
L_00585b63:; BB(0x00585b63);
    /* 00585b63: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00585b65: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x585b67u); call_ind(t); }
L_00585b67:; BB(0x00585b67);
    /* 00585b67: add esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00585b6a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00585b6b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00585b6c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00585b6d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00585b6e: ret  */ FN_RET(0x00585668); r_esp += 4; return;
L_00585b6f:; BB(0x00585b6f);
    /* 00585b6f: mov esi, dword ptr [esp + 0x48] */ r_esi = R32((u32)(r_esp+0x48u));
    /* 00585b73: mov edi, dword ptr [ebp + 0x38] */ r_edi = R32((u32)(r_ebp+0x38u));
    /* 00585b76: mov dword ptr [ebp + 0x44], edi */ W32((u32)(r_ebp+0x44u), r_edi);
    /* 00585b79: mov edi, dword ptr [ebp + 0x3c] */ r_edi = R32((u32)(r_ebp+0x3cu));
    /* 00585b7c: mov dword ptr [ebp + 0x48], edi */ W32((u32)(r_ebp+0x48u), r_edi);
    /* 00585b7f: mov edi, dword ptr [ebp + 0x40] */ r_edi = R32((u32)(r_ebp+0x40u));
    /* 00585b82: mov dword ptr [ebp + 0x4c], edi */ W32((u32)(r_ebp+0x4cu), r_edi);
    /* 00585b85: mov edi, dword ptr [esp + 0x24] */ r_edi = R32((u32)(r_esp+0x24u));
    /* 00585b89: mov dword ptr [ebp + 0x38], edi */ W32((u32)(r_ebp+0x38u), r_edi);
    /* 00585b8c: mov edi, dword ptr [esp + 0x28] */ r_edi = R32((u32)(r_esp+0x28u));
    /* 00585b90: mov dword ptr [ebp + 0x3c], edi */ W32((u32)(r_ebp+0x3cu), r_edi);
    /* 00585b93: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00585b95: mov edi, dword ptr [esp + 0x2c] */ r_edi = R32((u32)(r_esp+0x2cu));
    /* 00585b99: mov dword ptr [ebp + 0x40], edi */ W32((u32)(r_ebp+0x40u), r_edi);
    /* 00585b9c: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x585ba1u); f_007b6880();
    /* 00585ba1: fld dword ptr [0x928414] */ FPUSH(R_F32((u32)(0x928414u)));
    /* 00585ba7: jmp 0x58594b */ goto L_0058594b;
L_00585bac:; BB(0x00585bac);
    /* 00585bac: fld dword ptr [0x928414] */ FPUSH(R_F32((u32)(0x928414u)));
    /* 00585bb2: fld dword ptr [ebp + 0x3b8] */ FPUSH(R_F32((u32)(r_ebp+0x3b8u)));
    /* 00585bb8: fsub dword ptr [0x928278] */ ST(0) = ST(0) - R_F32((u32)(0x928278u));
    /* 00585bbe: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00585bc0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00585bc2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00585bc3: jae 0x585bda */ if (!fC) goto L_00585bda;
L_00585bc5:; BB(0x00585bc5);
    /* 00585bc5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00585bc7: fld dword ptr [0x928414] */ FPUSH(R_F32((u32)(0x928414u)));
    /* 00585bcd: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00585bcf: mov dword ptr [ebp + 0x3b8], edi */ W32((u32)(r_ebp+0x3b8u), r_edi);
    /* 00585bd5: jmp 0x58579f */ goto L_0058579f;
L_00585bda:; BB(0x00585bda);
    /* 00585bda: fst dword ptr [ebp + 0x3b8] */ W_F32((u32)(r_ebp+0x3b8u), ST(0));
    /* 00585be0: jmp 0x58579f */ goto L_0058579f;
}

void f_00585ac6(void)
{
    FN_ENTER(0x00585ac6);
    /* 00585ac6: add byte ptr [ecx + 0x9bf600], ah */ { u32 ad = (u32)(r_ecx+0x9bf600u);  u32 a = R8(ad); u32 b = (u8)(r_eax>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00585acc: mov dword ptr [ebp + 0x380], 0x10 */ W32((u32)(r_ebp+0x380u), 0x10u);
    /* 00585ad6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00585ad8: je 0x585ade */ if (fZ) goto L_00585ade;
L_00585ada:; BB(0x00585ada);
    /* 00585ada: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00585adc: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x585adeu); call_ind(t); }
L_00585ade:; BB(0x00585ade);
    /* 00585ade: add esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00585ae1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00585ae2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00585ae3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00585ae4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00585ae5: ret  */ FN_RET(0x00585ac6); r_esp += 4; return;
}

void f_00585be8(void) /* sub_585BE8 */
{
    FN_ENTER(0x00585be8);
    /* 00585be8: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00585beb: mov eax, dword ptr [ecx + 0x464] */ r_eax = R32((u32)(r_ecx+0x464u));
    /* 00585bf1: test al, 7 */ {  u32 a = (u8)r_eax; u32 b = 0x7u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00585bf3: jne 0x585c50 */ if (!fZ) goto L_00585c50;
L_00585bf5:; BB(0x00585bf5);
    /* 00585bf5: movzx eax, byte ptr [0xa74304] */ r_eax = (u32)R8((u32)(0xa74304u));
    /* 00585bfc: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00585bfe: jne 0x585c14 */ if (!fZ) goto L_00585c14;
L_00585c00:; BB(0x00585c00);
    /* 00585c00: mov dword ptr [0xa74308], 0x40a00000 */ W32((u32)(0xa74308u), 0x40a00000u);
    /* 00585c0a: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00585c0f: mov byte ptr [0xa74304], al */ W8((u32)(0xa74304u), (u8)r_eax);
L_00585c14:; BB(0x00585c14);
    /* 00585c14: mov eax, dword ptr [ecx + 0x3ac] */ r_eax = R32((u32)(r_ecx+0x3acu));
    /* 00585c1a: mov edx, dword ptr [ecx + 0x3b0] */ r_edx = R32((u32)(r_ecx+0x3b0u));
    /* 00585c20: mov ecx, dword ptr [ecx + 0x3b4] */ r_ecx = R32((u32)(r_ecx+0x3b4u));
    /* 00585c26: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00585c29: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00585c2d: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00585c31: fadd dword ptr [0xa74308] */ ST(0) = ST(0) + R_F32((u32)(0xa74308u));
    /* 00585c37: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00585c3b: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 00585c3f: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00585c42: push 0xf3 */ { u32 v = 0xf3u; r_esp -= 4; W32(r_esp, v); }
    /* 00585c47: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00585c48: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x585c4du); f_0050b510();
    /* 00585c4d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00585c50:; BB(0x00585c50);
    /* 00585c50: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00585c53: ret  */ FN_RET(0x00585be8); r_esp += 4; return;
}

void f_00585c54(void) /* sub_585C54 */
{
    FN_ENTER(0x00585c54);
    /* 00585c54: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00585c55: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00585c58: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00585c5a: mov eax, dword ptr [ebx + 0x3bc] */ r_eax = R32((u32)(r_ebx+0x3bcu));
    /* 00585c60: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00585c63: mov dword ptr [ebx + 0x3bc], eax */ W32((u32)(r_ebx+0x3bcu), r_eax);
    /* 00585c69: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00585c6b: jle 0x585fb9 */ if ((fZ||fS!=fO)) goto L_00585fb9;
L_00585c71:; BB(0x00585c71);
    /* 00585c71: fld dword ptr [0x928280] */ FPUSH(R_F32((u32)(0x928280u)));
    /* 00585c77: fadd dword ptr [ebx + 0x3b8] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x3b8u));
    /* 00585c7d: fcom dword ptr [0x92827c] */ fx_compare(ST(0), R_F32((u32)(0x92827cu))); 
    /* 00585c83: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00585c85: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00585c86: jae 0x585c97 */ if (!fC) goto L_00585c97;
L_00585c88:; BB(0x00585c88);
    /* 00585c88: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00585c8a: mov eax, 0xbf800000 */ r_eax = 0xbf800000u;
    /* 00585c8f: mov dword ptr [ebx + 0x3b8], eax */ W32((u32)(r_ebx+0x3b8u), r_eax);
    /* 00585c95: jmp 0x585c9d */ goto L_00585c9d;
L_00585c97:; BB(0x00585c97);
    /* 00585c97: fstp dword ptr [ebx + 0x3b8] */ W_F32((u32)(r_ebx+0x3b8u), ST(0)); FPOP();
L_00585c9d:; BB(0x00585c9d);
    /* 00585c9d: mov ecx, dword ptr [ebx + 0x60] */ r_ecx = R32((u32)(r_ebx+0x60u));
    /* 00585ca0: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x585ca5u); f_0082dcbc();
    /* 00585ca5: fld dword ptr [ebx + 0x3b8] */ FPUSH(R_F32((u32)(r_ebx+0x3b8u)));
    /* 00585cab: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00585cad: mov ecx, dword ptr [ebx + 0x60] */ r_ecx = R32((u32)(r_ebx+0x60u));
    /* 00585cb0: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00585cb3: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x585cb8u); f_0082ddd8();
    /* 00585cb8: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 00585cbb: fld dword ptr [ebx + 0x3b8] */ FPUSH(R_F32((u32)(r_ebx+0x3b8u)));
    /* 00585cc1: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00585cc3: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00585cc7: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 00585ccb: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 00585cd3: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00585cd7: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 00585cdf: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 00585ce3: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00585ce7: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x585cecu); f_0083173c();
    /* 00585cec: fcomp dword ptr [0x928400] */ fx_compare(ST(0), R_F32((u32)(0x928400u))); FPOP();
    /* 00585cf2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00585cf4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00585cf5: je 0x585e67 */ if (fZ) goto L_00585e67;
L_00585cfb:; BB(0x00585cfb);
    /* 00585cfb: movzx edx, byte ptr [0xa74328] */ r_edx = (u32)R8((u32)(0xa74328u));
    /* 00585d02: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00585d05: jne 0x585d1a */ if (!fZ) goto L_00585d1a;
L_00585d07:; BB(0x00585d07);
    /* 00585d07: mov eax, dword ptr [0xa74324] */ r_eax = R32((u32)(0xa74324u));
    /* 00585d0c: mov dword ptr [0xa7432c], eax */ W32((u32)(0xa7432cu), r_eax);
    /* 00585d11: or edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00585d14: mov byte ptr [0xa74328], dl */ W8((u32)(0xa74328u), (u8)r_edx);
L_00585d1a:; BB(0x00585d1a);
    /* 00585d1a: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00585d1d: jne 0x585d39 */ if (!fZ) goto L_00585d39;
L_00585d1f:; BB(0x00585d1f);
    /* 00585d1f: fld dword ptr [0xa7432c] */ FPUSH(R_F32((u32)(0xa7432cu)));
    /* 00585d25: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00585d27: fstp dword ptr [0xa74330] */ W_F32((u32)(0xa74330u), ST(0)); FPOP();
    /* 00585d2d: or edx, 0xffffff02 */ {  u32 a = r_edx; u32 b = 0xffffff02u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00585d33: mov byte ptr [0xa74328], dl */ W8((u32)(0xa74328u), (u8)r_edx);
L_00585d39:; BB(0x00585d39);
    /* 00585d39: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 00585d3d: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 00585d40: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 00585d43: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00585d47: mov eax, dword ptr [ebx + 0x3c] */ r_eax = R32((u32)(r_ebx+0x3cu));
    /* 00585d4a: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 00585d4e: mov eax, dword ptr [ebx + 0x40] */ r_eax = R32((u32)(r_ebx+0x40u));
    /* 00585d51: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00585d55: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x585d5au); f_0082ebac();
    /* 00585d5a: lea edx, [esp + 0x18] */ r_edx = (u32)(r_esp+0x18u);
    /* 00585d5e: lea eax, [ebx + 0x50] */ r_eax = (u32)(r_ebx+0x50u);
    /* 00585d61: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00585d62: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00585d63: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x585d68u); f_007a9180();
    /* 00585d68: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00585d6b: fcomp dword ptr [0xa74330] */ fx_compare(ST(0), R_F32((u32)(0xa74330u))); FPOP();
    /* 00585d71: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00585d73: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00585d74: ja 0x585e67 */ if ((!fC&&!fZ)) goto L_00585e67;
L_00585d7a:; BB(0x00585d7a);
    /* 00585d7a: mov dword ptr [esp + 0x34], esi */ W32((u32)(r_esp+0x34u), r_esi);
    /* 00585d7e: mov dword ptr [esp + 0x30], edi */ W32((u32)(r_esp+0x30u), r_edi);
    /* 00585d82: mov eax, 1 */ r_eax = 0x1u;
    /* 00585d87: mov esi, eax */ r_esi = r_eax;
L_00585d89:; BB(0x00585d89);
    /* 00585d89: movzx edx, byte ptr [0xa74328] */ r_edx = (u32)R8((u32)(0xa74328u));
    /* 00585d90: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00585d93: jne 0x585dab */ if (!fZ) goto L_00585dab;
L_00585d95:; BB(0x00585d95);
    /* 00585d95: mov dword ptr [0xa74334], 0x41200000 */ W32((u32)(0xa74334u), 0x41200000u);
    /* 00585d9f: or edx, 0xffffff04 */ {  u32 a = r_edx; u32 b = 0xffffff04u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00585da5: mov byte ptr [0xa74328], dl */ W8((u32)(0xa74328u), (u8)r_edx);
L_00585dab:; BB(0x00585dab);
    /* 00585dab: lea ecx, [esp + 0x24] */ r_ecx = (u32)(r_esp+0x24u);
    /* 00585daf: mov edi, dword ptr [ebx + 0x38] */ r_edi = R32((u32)(r_ebx+0x38u));
    /* 00585db2: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 00585db5: mov dword ptr [esp + 0x24], edi */ W32((u32)(r_esp+0x24u), r_edi);
    /* 00585db9: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 00585dbd: mov edx, dword ptr [ebx + 0x40] */ r_edx = R32((u32)(r_ebx+0x40u));
    /* 00585dc0: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 00585dc4: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 00585dc8: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x585dcdu); f_0082ebac();
    /* 00585dcd: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 00585dd1: fadd dword ptr [0xa74334] */ ST(0) = ST(0) + R_F32((u32)(0xa74334u));
    /* 00585dd7: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 00585ddb: lea edx, [esp + 0x24] */ r_edx = (u32)(r_esp+0x24u);
    /* 00585ddf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00585de1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00585de3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00585de4: call 0x7b4c58 */ r_esp -= 4; W32(r_esp, 0x585de9u); f_007b4c58();
    /* 00585de9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00585deb: je 0x585e06 */ if (fZ) goto L_00585e06;
L_00585ded:; BB(0x00585ded);
    /* 00585ded: lea edx, [esp + 0x24] */ r_edx = (u32)(r_esp+0x24u);
    /* 00585df1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00585df2: lea edi, [ebx + 0x38] */ r_edi = (u32)(r_ebx+0x38u);
    /* 00585df5: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00585df6: call 0x780d3c */ r_esp -= 4; W32(r_esp, 0x585dfbu); f_00780d3c();
    /* 00585dfb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00585dfe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00585e00: je 0x585f7e */ if (fZ) goto L_00585f7e;
L_00585e06:; BB(0x00585e06);
    /* 00585e06: mov edi, esi */ r_edi = r_esi;
    /* 00585e08: shl edi, 0xc */ { u32 c = (12u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 00585e0b: test esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00585e11: je 0x585e15 */ if (fZ) goto L_00585e15;
L_00585e13:; BB(0x00585e13);
    /* 00585e13: neg edi */ { u32 x = r_edi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
L_00585e15:; BB(0x00585e15);
    /* 00585e15: mov ecx, edi */ r_ecx = r_edi;
    /* 00585e17: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x585e1cu); f_0082dcbc();
    /* 00585e1c: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 00585e20: mov ecx, edi */ r_ecx = r_edi;
    /* 00585e22: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x585e27u); f_0082ddd8();
    /* 00585e27: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 00585e2b: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 00585e2f: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 00585e33: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 00585e37: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 00585e39: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00585e3b: fmulp st(4) */ ST(4) = ST(4) * ST(0); FPOP();
    /* 00585e3d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00585e3f: fchs  */ ST(0) = -ST(0);
    /* 00585e41: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00585e43: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00585e45: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00585e47: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00585e4a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00585e4c: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00585e50: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00585e52: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 00585e56: cmp esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00585e59: jl 0x585d89 */ if ((fS!=fO)) goto L_00585d89;
L_00585e5f:; BB(0x00585e5f);
    /* 00585e5f: mov esi, dword ptr [esp + 0x34] */ r_esi = R32((u32)(r_esp+0x34u));
    /* 00585e63: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
L_00585e67:; BB(0x00585e67);
    /* 00585e67: mov eax, dword ptr [ebx + 0x388] */ r_eax = R32((u32)(r_ebx+0x388u));
    /* 00585e6d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00585e6f: jne 0x585ec4 */ if (!fZ) goto L_00585ec4;
L_00585e71:; BB(0x00585e71);
    /* 00585e71: mov eax, dword ptr [ebx + 0x3a8] */ r_eax = R32((u32)(r_ebx+0x3a8u));
    /* 00585e77: mov eax, dword ptr [eax + 0x380] */ r_eax = R32((u32)(r_eax+0x380u));
    /* 00585e7d: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00585e80: je 0x585f74 */ if (fZ) goto L_00585f74;
L_00585e86:; BB(0x00585e86);
    /* 00585e86: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00585e89: je 0x585f74 */ if (fZ) goto L_00585f74;
L_00585e8f:; BB(0x00585e8f);
    /* 00585e8f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00585e91:; BB(0x00585e91);
    /* 00585e91: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00585e93: jne 0x585ec4 */ if (!fZ) goto L_00585ec4;
L_00585e95:; BB(0x00585e95);
    /* 00585e95: mov eax, dword ptr [ebx + 0x3c8] */ r_eax = R32((u32)(r_ebx+0x3c8u));
    /* 00585e9b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00585e9d: jne 0x585ec4 */ if (!fZ) goto L_00585ec4;
L_00585e9f:; BB(0x00585e9f);
    /* 00585e9f: mov ecx, dword ptr [ebx + 0x3c4] */ r_ecx = R32((u32)(r_ebx+0x3c4u));
    /* 00585ea5: movsx edx, word ptr [ebx + 0x334] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x334u));
    /* 00585eac: mov eax, ecx */ r_eax = r_ecx;
    /* 00585eae: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00585eb1: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00585eb3: sar ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00585eb5: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00585eb7: jg 0x585ec0 */ if ((!fZ&&fS==fO)) goto L_00585ec0;
L_00585eb9:; BB(0x00585eb9);
    /* 00585eb9: mov eax, 1 */ r_eax = 0x1u;
    /* 00585ebe: jmp 0x585ec6 */ goto L_00585ec6;
L_00585ec0:; BB(0x00585ec0);
    /* 00585ec0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00585ec2: jmp 0x585ec6 */ goto L_00585ec6;
L_00585ec4:; BB(0x00585ec4);
    /* 00585ec4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00585ec6:; BB(0x00585ec6);
    /* 00585ec6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00585ec8: je 0x585efa */ if (fZ) goto L_00585efa;
L_00585eca:; BB(0x00585eca);
    /* 00585eca: mov eax, dword ptr [ebx + 0x380] */ r_eax = R32((u32)(r_ebx+0x380u));
    /* 00585ed0: cmp eax, dword ptr [ebx + 0x37c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0x37cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00585ed6: je 0x585ede */ if (fZ) goto L_00585ede;
L_00585ed8:; BB(0x00585ed8);
    /* 00585ed8: mov dword ptr [ebx + 0x37c], eax */ W32((u32)(r_ebx+0x37cu), r_eax);
L_00585ede:; BB(0x00585ede);
    /* 00585ede: mov eax, dword ptr [0x9bf5e0] */ r_eax = R32((u32)(0x9bf5e0u));
    /* 00585ee3: mov dword ptr [ebx + 0x380], 0xc */ W32((u32)(r_ebx+0x380u), 0xcu);
    /* 00585eed: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00585eef: je 0x585ef5 */ if (fZ) goto L_00585ef5;
L_00585ef1:; BB(0x00585ef1);
    /* 00585ef1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00585ef3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x585ef5u); call_ind(t); }
L_00585ef5:; BB(0x00585ef5);
    /* 00585ef5: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00585ef8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00585ef9: ret  */ FN_RET(0x00585c54); r_esp += 4; return;
L_00585efa:; BB(0x00585efa);
    /* 00585efa: mov eax, dword ptr [ebx + 0x3cc] */ r_eax = R32((u32)(r_ebx+0x3ccu));
    /* 00585f00: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00585f02: je 0x585f08 */ if (fZ) goto L_00585f08;
L_00585f04:; BB(0x00585f04);
    /* 00585f04: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00585f06: jmp 0x585f2d */ goto L_00585f2d;
L_00585f08:; BB(0x00585f08);
    /* 00585f08: mov eax, dword ptr [ebx + 0x3a8] */ r_eax = R32((u32)(r_ebx+0x3a8u));
    /* 00585f0e: mov eax, dword ptr [eax + 0x380] */ r_eax = R32((u32)(r_eax+0x380u));
    /* 00585f14: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00585f17: je 0x585f6d */ if (fZ) goto L_00585f6d;
L_00585f19:; BB(0x00585f19);
    /* 00585f19: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00585f1c: je 0x585f6d */ if (fZ) goto L_00585f6d;
L_00585f1e:; BB(0x00585f1e);
    /* 00585f1e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00585f20:; BB(0x00585f20);
    /* 00585f20: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00585f22: je 0x585f2b */ if (fZ) goto L_00585f2b;
L_00585f24:; BB(0x00585f24);
    /* 00585f24: mov eax, 1 */ r_eax = 0x1u;
    /* 00585f29: jmp 0x585f2d */ goto L_00585f2d;
L_00585f2b:; BB(0x00585f2b);
    /* 00585f2b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00585f2d:; BB(0x00585f2d);
    /* 00585f2d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00585f2f: je 0x585f61 */ if (fZ) goto L_00585f61;
L_00585f31:; BB(0x00585f31);
    /* 00585f31: mov eax, dword ptr [ebx + 0x380] */ r_eax = R32((u32)(r_ebx+0x380u));
    /* 00585f37: cmp eax, dword ptr [ebx + 0x37c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0x37cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00585f3d: je 0x585f45 */ if (fZ) goto L_00585f45;
L_00585f3f:; BB(0x00585f3f);
    /* 00585f3f: mov dword ptr [ebx + 0x37c], eax */ W32((u32)(r_ebx+0x37cu), r_eax);
L_00585f45:; BB(0x00585f45);
    /* 00585f45: mov eax, dword ptr [0x9bf600] */ r_eax = R32((u32)(0x9bf600u));
    /* 00585f4a: mov dword ptr [ebx + 0x380], 0x10 */ W32((u32)(r_ebx+0x380u), 0x10u);
    /* 00585f54: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00585f56: je 0x585f5c */ if (fZ) goto L_00585f5c;
L_00585f58:; BB(0x00585f58);
    /* 00585f58: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00585f5a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x585f5cu); call_ind(t); }
L_00585f5c:; BB(0x00585f5c);
    /* 00585f5c: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00585f5f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00585f60: ret  */ FN_RET(0x00585c54); r_esp += 4; return;
L_00585f61:; BB(0x00585f61);
    /* 00585f61: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00585f63: call 0x585be8 */ r_esp -= 4; W32(r_esp, 0x585f68u); f_00585be8();
    /* 00585f68: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00585f6b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00585f6c: ret  */ FN_RET(0x00585c54); r_esp += 4; return;
L_00585f6d:; BB(0x00585f6d);
    /* 00585f6d: mov eax, 1 */ r_eax = 0x1u;
    /* 00585f72: jmp 0x585f20 */ goto L_00585f20;
L_00585f74:; BB(0x00585f74);
    /* 00585f74: mov eax, 1 */ r_eax = 0x1u;
    /* 00585f79: jmp 0x585e91 */ goto L_00585e91;
L_00585f7e:; BB(0x00585f7e);
    /* 00585f7e: mov esi, dword ptr [esp + 0x34] */ r_esi = R32((u32)(r_esp+0x34u));
    /* 00585f82: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 00585f86: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 00585f89: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 00585f8c: mov dword ptr [ebx + 0x44], eax */ W32((u32)(r_ebx+0x44u), r_eax);
    /* 00585f8f: mov eax, dword ptr [ebx + 0x40] */ r_eax = R32((u32)(r_ebx+0x40u));
    /* 00585f92: mov dword ptr [ebx + 0x48], edx */ W32((u32)(r_ebx+0x48u), r_edx);
    /* 00585f95: mov dword ptr [ebx + 0x4c], eax */ W32((u32)(r_ebx+0x4cu), r_eax);
    /* 00585f98: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 00585f9c: mov dword ptr [ebx + 0x38], eax */ W32((u32)(r_ebx+0x38u), r_eax);
    /* 00585f9f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00585fa1: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 00585fa5: mov dword ptr [ebx + 0x3c], eax */ W32((u32)(r_ebx+0x3cu), r_eax);
    /* 00585fa8: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 00585fac: mov dword ptr [ebx + 0x40], eax */ W32((u32)(r_ebx+0x40u), r_eax);
    /* 00585faf: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x585fb4u); f_007b6880();
    /* 00585fb4: jmp 0x585e67 */ goto L_00585e67;
L_00585fb9:; BB(0x00585fb9);
    /* 00585fb9: fld dword ptr [0x928284] */ FPUSH(R_F32((u32)(0x928284u)));
    /* 00585fbf: fadd dword ptr [ebx + 0x3b8] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x3b8u));
    /* 00585fc5: fcom dword ptr [0x928400] */ fx_compare(ST(0), R_F32((u32)(0x928400u))); 
    /* 00585fcb: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00585fcd: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00585fce: jb 0x58600a */ if (fC) goto L_0058600a;
L_00585fd0:; BB(0x00585fd0);
    /* 00585fd0: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00585fd2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00585fd4: mov dword ptr [ebx + 0x3b8], eax */ W32((u32)(r_ebx+0x3b8u), r_eax);
    /* 00585fda: mov eax, dword ptr [ebx + 0x380] */ r_eax = R32((u32)(r_ebx+0x380u));
    /* 00585fe0: cmp eax, dword ptr [ebx + 0x37c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0x37cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00585fe6: je 0x585fee */ if (fZ) goto L_00585fee;
L_00585fe8:; BB(0x00585fe8);
    /* 00585fe8: mov dword ptr [ebx + 0x37c], eax */ W32((u32)(r_ebx+0x37cu), r_eax);
L_00585fee:; BB(0x00585fee);
    /* 00585fee: mov eax, dword ptr [0x9bf590] */ r_eax = R32((u32)(0x9bf590u));
    /* 00585ff3: mov dword ptr [ebx + 0x380], 2 */ W32((u32)(r_ebx+0x380u), 0x2u);
    /* 00585ffd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00585fff: je 0x586005 */ if (fZ) goto L_00586005;
L_00586001:; BB(0x00586001);
    /* 00586001: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00586003: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x586005u); call_ind(t); }
L_00586005:; BB(0x00586005);
    /* 00586005: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00586008: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00586009: ret  */ FN_RET(0x00585c54); r_esp += 4; return;
L_0058600a:; BB(0x0058600a);
    /* 0058600a: fstp dword ptr [ebx + 0x3b8] */ W_F32((u32)(r_ebx+0x3b8u), ST(0)); FPOP();
    /* 00586010: jmp 0x585c9d */ goto L_00585c9d;
}

void f_00585e9c(void)
{
    FN_ENTER(0x00585e9c);
    /* 00585e9c: sal byte ptr [ebp + 0x25], 0x8b */ { u32 ad = (u32)(r_ebp+0x25u); u32 c = (11u) & 31; u32 a = R8(ad); u32 r = a; if (c) { r = (a << c) & 0xffu; W8(ad, r);  } }
    /* 00585ea0: mov eax, esp */ r_eax = r_esp;
    /* 00585ea2: add eax, dword ptr [eax] */ {  u32 a = r_eax; u32 b = R32((u32)(r_eax)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00585ea4: add byte ptr [edi], cl */ { u32 ad = (u32)(r_edi);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00585ea6: mov edi, 0x33493 */ r_edi = 0x33493u;
    /* 00585eab: add byte ptr [ebx + 0x1fe8c1c1], cl */ { u32 ad = (u32)(r_ebx+0x1fe8c1c1u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00585eb1: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00585eb3: sar ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00585eb5: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00585eb7: jg 0x585ec0 */ if ((!fZ&&fS==fO)) goto L_00585ec0;
L_00585eb9:; BB(0x00585eb9);
    /* 00585eb9: mov eax, 1 */ r_eax = 0x1u;
    /* 00585ebe: jmp 0x585ec6 */ goto L_00585ec6;
L_00585ec0:; BB(0x00585ec0);
    /* 00585ec0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00585ec2: jmp 0x585ec6 */ goto L_00585ec6;
L_00585ec6:; BB(0x00585ec6);
    /* 00585ec6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00585ec8: je 0x585efa */ if (fZ) goto L_00585efa;
L_00585eca:; BB(0x00585eca);
    /* 00585eca: mov eax, dword ptr [ebx + 0x380] */ r_eax = R32((u32)(r_ebx+0x380u));
    /* 00585ed0: cmp eax, dword ptr [ebx + 0x37c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0x37cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00585ed6: je 0x585ede */ if (fZ) goto L_00585ede;
L_00585ed8:; BB(0x00585ed8);
    /* 00585ed8: mov dword ptr [ebx + 0x37c], eax */ W32((u32)(r_ebx+0x37cu), r_eax);
L_00585ede:; BB(0x00585ede);
    /* 00585ede: mov eax, dword ptr [0x9bf5e0] */ r_eax = R32((u32)(0x9bf5e0u));
    /* 00585ee3: mov dword ptr [ebx + 0x380], 0xc */ W32((u32)(r_ebx+0x380u), 0xcu);
    /* 00585eed: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00585eef: je 0x585ef5 */ if (fZ) goto L_00585ef5;
L_00585ef1:; BB(0x00585ef1);
    /* 00585ef1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00585ef3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x585ef5u); call_ind(t); }
L_00585ef5:; BB(0x00585ef5);
    /* 00585ef5: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00585ef8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00585ef9: ret  */ FN_RET(0x00585e9c); r_esp += 4; return;
L_00585efa:; BB(0x00585efa);
    /* 00585efa: mov eax, dword ptr [ebx + 0x3cc] */ r_eax = R32((u32)(r_ebx+0x3ccu));
    /* 00585f00: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00585f02: je 0x585f08 */ if (fZ) goto L_00585f08;
L_00585f04:; BB(0x00585f04);
    /* 00585f04: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00585f06: jmp 0x585f2d */ goto L_00585f2d;
L_00585f08:; BB(0x00585f08);
    /* 00585f08: mov eax, dword ptr [ebx + 0x3a8] */ r_eax = R32((u32)(r_ebx+0x3a8u));
    /* 00585f0e: mov eax, dword ptr [eax + 0x380] */ r_eax = R32((u32)(r_eax+0x380u));
    /* 00585f14: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00585f17: je 0x585f6d */ if (fZ) goto L_00585f6d;
L_00585f19:; BB(0x00585f19);
    /* 00585f19: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00585f1c: je 0x585f6d */ if (fZ) goto L_00585f6d;
L_00585f1e:; BB(0x00585f1e);
    /* 00585f1e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00585f20:; BB(0x00585f20);
    /* 00585f20: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00585f22: je 0x585f2b */ if (fZ) goto L_00585f2b;
L_00585f24:; BB(0x00585f24);
    /* 00585f24: mov eax, 1 */ r_eax = 0x1u;
    /* 00585f29: jmp 0x585f2d */ goto L_00585f2d;
L_00585f2b:; BB(0x00585f2b);
    /* 00585f2b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00585f2d:; BB(0x00585f2d);
    /* 00585f2d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00585f2f: je 0x585f61 */ if (fZ) goto L_00585f61;
L_00585f31:; BB(0x00585f31);
    /* 00585f31: mov eax, dword ptr [ebx + 0x380] */ r_eax = R32((u32)(r_ebx+0x380u));
    /* 00585f37: cmp eax, dword ptr [ebx + 0x37c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0x37cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00585f3d: je 0x585f45 */ if (fZ) goto L_00585f45;
L_00585f3f:; BB(0x00585f3f);
    /* 00585f3f: mov dword ptr [ebx + 0x37c], eax */ W32((u32)(r_ebx+0x37cu), r_eax);
L_00585f45:; BB(0x00585f45);
    /* 00585f45: mov eax, dword ptr [0x9bf600] */ r_eax = R32((u32)(0x9bf600u));
    /* 00585f4a: mov dword ptr [ebx + 0x380], 0x10 */ W32((u32)(r_ebx+0x380u), 0x10u);
    /* 00585f54: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00585f56: je 0x585f5c */ if (fZ) goto L_00585f5c;
L_00585f58:; BB(0x00585f58);
    /* 00585f58: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00585f5a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x585f5cu); call_ind(t); }
L_00585f5c:; BB(0x00585f5c);
    /* 00585f5c: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00585f5f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00585f60: ret  */ FN_RET(0x00585e9c); r_esp += 4; return;
L_00585f61:; BB(0x00585f61);
    /* 00585f61: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00585f63: call 0x585be8 */ r_esp -= 4; W32(r_esp, 0x585f68u); f_00585be8();
    /* 00585f68: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00585f6b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00585f6c: ret  */ FN_RET(0x00585e9c); r_esp += 4; return;
L_00585f6d:; BB(0x00585f6d);
    /* 00585f6d: mov eax, 1 */ r_eax = 0x1u;
    /* 00585f72: jmp 0x585f20 */ goto L_00585f20;
}

