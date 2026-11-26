#include "protos.h"

void f_004ab053(void)
{
    FN_ENTER(0x004ab053);
    goto L_004ab053;
L_004aae6e:; BB(0x004aae6e);
    /* 004aae6e: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 004aae70: mov esi, edi */ r_esi = r_edi;
    /* 004aae72: sar esi, 4 */ { u32 c = (4u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 004aae75: shr esi, 0x1b */ { u32 c = (27u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 004aae78: add esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004aae7a: sar esi, 5 */ { u32 c = (5u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 004aae7d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004aae7f: je 0x4ab038 */ if (fZ) goto L_004ab038;
L_004aae85:; BB(0x004aae85);
    /* 004aae85: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004aae87: je 0x4aaec5 */ if (fZ) goto L_004aaec5;
L_004aae89:; BB(0x004aae89);
    /* 004aae89: mov ecx, esi */ r_ecx = r_esi;
    /* 004aae8b: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x4aae90u); f_0082dcbc();
    /* 004aae90: fmul dword ptr [esp + 0x24] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x24u));
    /* 004aae94: fadd dword ptr [ebp + 0x120] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x120u));
    /* 004aae9a: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004aae9d: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 004aaea5: mov ecx, esi */ r_ecx = r_esi;
    /* 004aaea7: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x4aaeacu); f_0082ddd8();
    /* 004aaeac: fmul dword ptr [esp + 0x24] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x24u));
    /* 004aaeb0: fadd dword ptr [ebp + 0x128] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x128u));
    /* 004aaeb6: mov ecx, dword ptr [ebx] */ r_ecx = R32((u32)(r_ebx));
    /* 004aaeb8: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004aaebc: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 004aaebf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004aaec0: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x4aaec5u); f_00508db8();
L_004aaec5:; BB(0x004aaec5);
    /* 004aaec5: mov eax, dword ptr [ebx + 0x80] */ r_eax = R32((u32)(r_ebx+0x80u));
    /* 004aaecb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004aaecd: je 0x4aafcd */ if (fZ) goto L_004aafcd;
L_004aaed3:; BB(0x004aaed3);
    /* 004aaed3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004aaed5: je 0x4aaf27 */ if (fZ) goto L_004aaf27;
L_004aaed7:; BB(0x004aaed7);
    /* 004aaed7: mov ecx, esi */ r_ecx = r_esi;
    /* 004aaed9: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x4aaedeu); f_0082dcbc();
    /* 004aaede: fld dword ptr [0x904480] */ FPUSH(R_F32((u32)(0x904480u)));
    /* 004aaee4: fadd dword ptr [esp + 0x24] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x24u));
    /* 004aaee8: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004aaeea: fadd dword ptr [ebp + 0x120] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x120u));
    /* 004aaef0: mov ecx, esi */ r_ecx = r_esi;
    /* 004aaef2: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004aaef5: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 004aaefd: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x4aaf02u); f_0082ddd8();
    /* 004aaf02: fld dword ptr [0x904480] */ FPUSH(R_F32((u32)(0x904480u)));
    /* 004aaf08: fadd dword ptr [esp + 0x24] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x24u));
    /* 004aaf0c: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004aaf0e: fadd dword ptr [ebp + 0x128] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x128u));
    /* 004aaf14: mov ecx, dword ptr [ebx + 0x80] */ r_ecx = R32((u32)(r_ebx+0x80u));
    /* 004aaf1a: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004aaf1e: lea esi, [esp] */ r_esi = (u32)(r_esp);
    /* 004aaf21: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004aaf22: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x4aaf27u); f_00508db8();
L_004aaf27:; BB(0x004aaf27);
    /* 004aaf27: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 004aaf2b: add edi, 0x10000 */ {  u32 a = r_edi; u32 b = 0x10000u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004aaf31: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004aaf34: cmp ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004aaf36: ja 0x4aae6e */ if ((!fC&&!fZ)) goto L_004aae6e;
L_004aaf3c:; BB(0x004aaf3c);
    /* 004aaf3c: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
    /* 004aaf40: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 004aaf44: mov eax, dword ptr [ebp + 0x12c] */ r_eax = R32((u32)(r_ebp+0x12cu));
    /* 004aaf4a: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004aaf4d: cmp eax, 0x1e */ {  u32 a = r_eax; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004aaf50: jg 0x4aaf5a */ if ((!fZ&&fS==fO)) goto L_004aaf5a;
L_004aaf52:; BB(0x004aaf52);
    /* 004aaf52: mov dword ptr [ebp + 0x12c], eax */ W32((u32)(r_ebp+0x12cu), r_eax);
    /* 004aaf58: jmp 0x4aafc7 */ goto L_004aafc7;
L_004aaf5a:; BB(0x004aaf5a);
    /* 004aaf5a: mov dword ptr [ebp + 0x12c], 0 */ W32((u32)(r_ebp+0x12cu), 0x0u);
    /* 004aaf64: mov dword ptr [ebp + 0x1c], 1 */ W32((u32)(r_ebp+0x1cu), 0x1u);
    /* 004aaf6b: jmp 0x4aafc7 */ goto L_004aafc7;
L_004aafc7:; BB(0x004aafc7);
    /* 004aafc7: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004aafca: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004aafcb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004aafcc: ret  */ FN_RET(0x004ab053); r_esp += 4; return;
L_004aafcd:; BB(0x004aafcd);
    /* 004aafcd: mov eax, dword ptr [0xa476f4] */ r_eax = R32((u32)(0xa476f4u));
    /* 004aafd2: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004aafd4: push dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 004aafd7: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 004aafdb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004aafdc: call 0x50981c */ r_esp -= 4; W32(r_esp, 0x4aafe1u); f_0050981c();
    /* 004aafe1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004aafe4: mov dword ptr [ebx + 0x80], eax */ W32((u32)(r_ebx+0x80u), r_eax);
    /* 004aafea: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004aafec: je 0x4aaed3 */ if (fZ) goto L_004aaed3;
L_004aaff2:; BB(0x004aaff2);
    /* 004aaff2: mov ecx, dword ptr [0xa47630] */ r_ecx = R32((u32)(0xa47630u));
    /* 004aaff8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004aaffa: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x4aafffu); f_005b8610();
    /* 004aafff: mov ecx, eax */ r_ecx = r_eax;
    /* 004ab001: mov eax, dword ptr [0xa4762c] */ r_eax = R32((u32)(0xa4762cu));
    /* 004ab006: mov edx, dword ptr [ebx + 0x80] */ r_edx = R32((u32)(r_ebx+0x80u));
    /* 004ab00c: mov dword ptr [edx + 0x58], 0 */ W32((u32)(r_edx+0x58u), 0x0u);
    /* 004ab013: mov dword ptr [edx + 0x50], ecx */ W32((u32)(r_edx+0x50u), r_ecx);
    /* 004ab016: mov dword ptr [edx + 0x60], 0x3f800000 */ W32((u32)(r_edx+0x60u), 0x3f800000u);
    /* 004ab01d: mov dword ptr [edx + 0x54], eax */ W32((u32)(r_edx+0x54u), r_eax);
    /* 004ab020: movzx eax, word ptr [edx + 0x2c] */ r_eax = (u32)R16((u32)(r_edx+0x2cu));
    /* 004ab024: or eax, 0xffff0200 */ {  u32 a = r_eax; u32 b = 0xffff0200u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004ab029: mov word ptr [edx + 0x2c], ax */ W16((u32)(r_edx+0x2cu), (u16)r_eax);
    /* 004ab02d: mov eax, dword ptr [ebx + 0x80] */ r_eax = R32((u32)(r_ebx+0x80u));
    /* 004ab033: jmp 0x4aaed3 */ goto L_004aaed3;
L_004ab038:; BB(0x004ab038);
    /* 004ab038: mov eax, dword ptr [0xa476f4] */ r_eax = R32((u32)(0xa476f4u));
    /* 004ab03d: push 0x2040 */ { u32 v = 0x2040u; r_esp -= 4; W32(r_esp, v); }
    /* 004ab042: push dword ptr [eax] */ { u32 v = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, v); }
    /* 004ab044: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 004ab048: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ab049: call 0x50981c */ r_esp -= 4; W32(r_esp, 0x4ab04eu); f_0050981c();
    /* 004ab04e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ab051: mov dword ptr [ebx], eax */ W32((u32)(r_ebx), r_eax);
L_004ab053:; BB(0x004ab053);
    /* 004ab053: jmp 0x4aae85 */ goto L_004aae85;
}

void f_004ab058(void) /* sub_4AB058 */
{
    FN_ENTER(0x004ab058);
    /* 004ab058: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x4ab05du); f_006dc358();
    /* 004ab05d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ab05f: jne 0x4ab06b */ if (!fZ) goto L_004ab06b;
L_004ab061:; BB(0x004ab061);
    /* 004ab061: mov dword ptr [0xa476f4], 0x904470 */ W32((u32)(0xa476f4u), 0x904470u);
L_004ab06b:; BB(0x004ab06b);
    /* 004ab06b: ret  */ FN_RET(0x004ab058); r_esp += 4; return;
}

void f_004ab06c(void) /* sub_4AB06C */
{
    FN_ENTER(0x004ab06c);
    /* 004ab06c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004ab06d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004ab06f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004ab071: call 0x4ab090 */ r_esp -= 4; W32(r_esp, 0x4ab076u); f_004ab090();
    /* 004ab076: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004ab07a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ab07c: jne 0x4ab082 */ if (!fZ) goto L_004ab082;
L_004ab07e:; BB(0x004ab07e);
    /* 004ab07e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004ab07f: ret 4 */ FN_RET(0x004ab06c); r_esp += 8; return;
L_004ab082:; BB(0x004ab082);
    /* 004ab082: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004ab083: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4ab088u); f_005c2f74();
    /* 004ab088: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004ab089: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004ab08a: ret 4 */ FN_RET(0x004ab06c); r_esp += 8; return;
}

void f_004ab090(void) /* sub_4AB090 */
{
    FN_ENTER(0x004ab090);
    /* 004ab090: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ab091: mov ebp, esp */ r_ebp = r_esp;
    /* 004ab093: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004ab095: push 0x8d07d0 */ { u32 v = 0x8d07d0u; r_esp -= 4; W32(r_esp, v); }
    /* 004ab09a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004ab0a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ab0a1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004ab0a8: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004ab0ab: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004ab0ae: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004ab0b1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004ab0b4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004ab0b7: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004ab0ba: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004ab0bd: mov edx, dword ptr [ecx + 0x58] */ r_edx = R32((u32)(r_ecx+0x58u));
    /* 004ab0c0: mov dword ptr [ecx], 0xafa2e0 */ W32((u32)(r_ecx), 0xafa2e0u);
    /* 004ab0c6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ab0c8: je 0x4ab0e1 */ if (fZ) goto L_004ab0e1;
L_004ab0ca:; BB(0x004ab0ca);
    /* 004ab0ca: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004ab0cd: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004ab0d1: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004ab0d6: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004ab0da: mov dword ptr [ecx + 0x58], 0 */ W32((u32)(r_ecx+0x58u), 0x0u);
L_004ab0e1:; BB(0x004ab0e1);
    /* 004ab0e1: mov edx, dword ptr [ecx + 0x54] */ r_edx = R32((u32)(r_ecx+0x54u));
    /* 004ab0e4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ab0e6: je 0x4ab0ff */ if (fZ) goto L_004ab0ff;
L_004ab0e8:; BB(0x004ab0e8);
    /* 004ab0e8: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004ab0eb: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004ab0ef: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004ab0f4: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004ab0f8: mov dword ptr [ecx + 0x54], 0 */ W32((u32)(r_ecx+0x54u), 0x0u);
L_004ab0ff:; BB(0x004ab0ff);
    /* 004ab0ff: mov edx, dword ptr [ecx + 0x50] */ r_edx = R32((u32)(r_ecx+0x50u));
    /* 004ab102: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ab104: je 0x4ab11d */ if (fZ) goto L_004ab11d;
L_004ab106:; BB(0x004ab106);
    /* 004ab106: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004ab109: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004ab10d: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004ab112: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004ab116: mov dword ptr [ecx + 0x50], 0 */ W32((u32)(r_ecx+0x50u), 0x0u);
L_004ab11d:; BB(0x004ab11d);
    /* 004ab11d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004ab124: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x4ab129u); f_008171e8();
    /* 004ab129: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004ab12c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004ab133: mov esp, ebp */ r_esp = r_ebp;
    /* 004ab135: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ab136: ret  */ FN_RET(0x004ab090); r_esp += 4; return;
}

void f_004ab138(void) /* sub_4AB138 */
{
    FN_ENTER(0x004ab138);
    /* 004ab138: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ab139: mov ebp, esp */ r_ebp = r_esp;
    /* 004ab13b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004ab13d: push 0x8d07f8 */ { u32 v = 0x8d07f8u; r_esp -= 4; W32(r_esp, v); }
    /* 004ab142: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004ab148: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ab149: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004ab150: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004ab153: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004ab156: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004ab159: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004ab15c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004ab15f: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 004ab162: push 0x16ef */ { u32 v = 0x16efu; r_esp -= 4; W32(r_esp, v); }
    /* 004ab167: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004ab169: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 004ab16c: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 004ab16f: mov eax, dword ptr [0x903ae0] */ r_eax = R32((u32)(0x903ae0u));
    /* 004ab174: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 004ab177: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 004ab17a: lea eax, [ebp - 0x30] */ r_eax = (u32)(r_ebp+0xffffffd0u);
    /* 004ab17d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ab17e: call 0x780630 */ r_esp -= 4; W32(r_esp, 0x4ab183u); f_00780630();
    /* 004ab183: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ab186: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ab188: je 0x4ab19e */ if (fZ) goto L_004ab19e;
L_004ab18a:; BB(0x004ab18a);
    /* 004ab18a: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 004ab18d: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 004ab190: fcomp dword ptr [0x903ae0] */ fx_compare(ST(0), R_F32((u32)(0x903ae0u))); FPOP();
    /* 004ab196: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004ab198: mov edx, dword ptr [edx + 4] */ r_edx = R32((u32)(r_edx+0x4u));
    /* 004ab19b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004ab19c: jbe 0x4ab1ae */ if ((fC||fZ)) goto L_004ab1ae;
L_004ab19e:; BB(0x004ab19e);
    /* 004ab19e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ab1a0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004ab1a3: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004ab1aa: mov esp, ebp */ r_esp = r_ebp;
    /* 004ab1ac: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ab1ad: ret  */ FN_RET(0x004ab138); r_esp += 4; return;
L_004ab1ae:; BB(0x004ab1ae);
    /* 004ab1ae: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 004ab1b5: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 004ab1b8: push 0x5c */ { u32 v = 0x5cu; r_esp -= 4; W32(r_esp, v); }
    /* 004ab1ba: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4ab1bfu); f_005caba4();
    /* 004ab1bf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004ab1c0: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004ab1c3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ab1c5: je 0x4ab204 */ if (fZ) goto L_004ab204;
L_004ab1c7:; BB(0x004ab1c7);
    /* 004ab1c7: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 004ab1ce: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004ab1d5: movzx eax, word ptr [ebp + 0x14] */ r_eax = (u32)R16((u32)(r_ebp+0x14u));
    /* 004ab1d9: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004ab1dc: lea edx, [ebp - 0x30] */ r_edx = (u32)(r_ebp+0xffffffd0u);
    /* 004ab1df: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ab1e0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004ab1e1: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 004ab1e4: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004ab1e7: call 0x4ab208 */ r_esp -= 4; W32(r_esp, 0x4ab1ecu); f_004ab208();
    /* 004ab1ec: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004ab1ef: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_004ab1f6:; BB(0x004ab1f6);
    /* 004ab1f6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004ab1f9: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004ab200: mov esp, ebp */ r_esp = r_ebp;
    /* 004ab202: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ab203: ret  */ FN_RET(0x004ab138); r_esp += 4; return;
L_004ab204:; BB(0x004ab204);
    /* 004ab204: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ab206: jmp 0x4ab1f6 */ goto L_004ab1f6;
}

void f_004ab208(void) /* sub_4AB208 */
{
    FN_ENTER(0x004ab208);
    /* 004ab208: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004ab209: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004ab20a: mov edi, ecx */ r_edi = r_ecx;
    /* 004ab20c: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
    /* 004ab210: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 004ab214: mov ecx, edi */ r_ecx = r_edi;
    /* 004ab216: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x4ab21bu); f_008193cc();
    /* 004ab21b: mov dword ptr [edi], 0xafa2e0 */ W32((u32)(r_edi), 0xafa2e0u);
    /* 004ab221: mov edx, dword ptr [0x9ab8a0] */ r_edx = R32((u32)(0x9ab8a0u));
    /* 004ab227: mov dword ptr [edi + 4], edx */ W32((u32)(r_edi+0x4u), r_edx);
    /* 004ab22a: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 004ab22c: mov dword ptr [edi + 0x28], eax */ W32((u32)(r_edi+0x28u), r_eax);
    /* 004ab22f: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 004ab232: mov dword ptr [edi + 0x2c], eax */ W32((u32)(r_edi+0x2cu), r_eax);
    /* 004ab235: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 004ab23a: mov ebx, dword ptr [ebx + 8] */ r_ebx = R32((u32)(r_ebx+0x8u));
    /* 004ab23d: mov dword ptr [edi + 0x30], ebx */ W32((u32)(r_edi+0x30u), r_ebx);
    /* 004ab240: mov dword ptr [edi + 0x34], 0 */ W32((u32)(r_edi+0x34u), 0x0u);
    /* 004ab247: mov word ptr [edi + 0x24], ax */ W16((u32)(r_edi+0x24u), (u16)r_eax);
    /* 004ab24b: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 004ab24f: mov dword ptr [edi + 0x38], 0 */ W32((u32)(r_edi+0x38u), 0x0u);
    /* 004ab256: mov dword ptr [edi + 0x4c], eax */ W32((u32)(r_edi+0x4cu), r_eax);
    /* 004ab259: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ab25b: mov dword ptr [edi + 0x50], eax */ W32((u32)(r_edi+0x50u), r_eax);
    /* 004ab25e: mov dword ptr [edi + 0x3c], 0 */ W32((u32)(r_edi+0x3cu), 0x0u);
    /* 004ab265: mov dword ptr [edi + 0x54], eax */ W32((u32)(r_edi+0x54u), r_eax);
    /* 004ab268: mov dword ptr [edi + 0x58], eax */ W32((u32)(r_edi+0x58u), r_eax);
    /* 004ab26b: mov dword ptr [edi + 0x20], eax */ W32((u32)(r_edi+0x20u), r_eax);
    /* 004ab26e: mov dword ptr [edi + 0x1c], eax */ W32((u32)(r_edi+0x1cu), r_eax);
    /* 004ab271: mov eax, edi */ r_eax = r_edi;
    /* 004ab273: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004ab274: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004ab275: ret 0x10 */ FN_RET(0x004ab208); r_esp += 20; return;
}

void f_004ab278(void) /* sub_4AB278 */
{
    FN_ENTER(0x004ab278);
    /* 004ab278: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004ab279: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004ab27a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004ab27b: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004ab27e: mov edi, ecx */ r_edi = r_ecx;
    /* 004ab280: mov ecx, dword ptr [edi + 0x4c] */ r_ecx = R32((u32)(r_edi+0x4cu));
    /* 004ab283: call 0x4a873c */ r_esp -= 4; W32(r_esp, 0x4ab288u); f_004a873c();
    /* 004ab288: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ab28a: jne 0x4ab422 */ if (!fZ) goto L_004ab422;
L_004ab290:; BB(0x004ab290);
    /* 004ab290: mov eax, dword ptr [edi + 0x1c] */ r_eax = R32((u32)(r_edi+0x1cu));
    /* 004ab293: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ab295: je 0x4ab2f2 */ if (fZ) goto L_004ab2f2;
L_004ab297:; BB(0x004ab297);
    /* 004ab297: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ab29a: je 0x4ab2f9 */ if (fZ) goto L_004ab2f9;
L_004ab29c:; BB(0x004ab29c);
    /* 004ab29c: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ab29f: jne 0x4ab41b */ if (!fZ) goto L_004ab41b;
L_004ab2a5:; BB(0x004ab2a5);
    /* 004ab2a5: mov ecx, dword ptr [edi + 0x50] */ r_ecx = R32((u32)(r_edi+0x50u));
    /* 004ab2a8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ab2aa: je 0x4ab2b1 */ if (fZ) goto L_004ab2b1;
L_004ab2ac:; BB(0x004ab2ac);
    /* 004ab2ac: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x4ab2b1u); f_00508f48();
L_004ab2b1:; BB(0x004ab2b1);
    /* 004ab2b1: mov ecx, dword ptr [edi + 0x54] */ r_ecx = R32((u32)(r_edi+0x54u));
    /* 004ab2b4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ab2b6: je 0x4ab2bd */ if (fZ) goto L_004ab2bd;
L_004ab2b8:; BB(0x004ab2b8);
    /* 004ab2b8: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x4ab2bdu); f_00508f48();
L_004ab2bd:; BB(0x004ab2bd);
    /* 004ab2bd: mov ecx, dword ptr [edi + 0x58] */ r_ecx = R32((u32)(r_edi+0x58u));
    /* 004ab2c0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ab2c2: je 0x4ab2c9 */ if (fZ) goto L_004ab2c9;
L_004ab2c4:; BB(0x004ab2c4);
    /* 004ab2c4: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x4ab2c9u); f_00508f48();
L_004ab2c9:; BB(0x004ab2c9);
    /* 004ab2c9: mov eax, dword ptr [edi + 0x20] */ r_eax = R32((u32)(r_edi+0x20u));
    /* 004ab2cc: cmp eax, 0x3c */ {  u32 a = r_eax; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004ab2cf: jg 0x4ab2de */ if ((!fZ&&fS==fO)) goto L_004ab2de;
L_004ab2d1:; BB(0x004ab2d1);
    /* 004ab2d1: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004ab2d4: mov dword ptr [edi + 0x20], eax */ W32((u32)(r_edi+0x20u), r_eax);
    /* 004ab2d7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004ab2da: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004ab2db: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004ab2dc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004ab2dd: ret  */ FN_RET(0x004ab278); r_esp += 4; return;
L_004ab2de:; BB(0x004ab2de);
    /* 004ab2de: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 004ab2e2: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004ab2e7: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 004ab2eb: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004ab2ee: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004ab2ef: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004ab2f0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004ab2f1: ret  */ FN_RET(0x004ab278); r_esp += 4; return;
L_004ab2f2:; BB(0x004ab2f2);
    /* 004ab2f2: mov dword ptr [edi + 0x1c], 1 */ W32((u32)(r_edi+0x1cu), 0x1u);
L_004ab2f9:; BB(0x004ab2f9);
    /* 004ab2f9: mov eax, dword ptr [0x903ae0] */ r_eax = R32((u32)(0x903ae0u));
    /* 004ab2fe: push 0x16ef */ { u32 v = 0x16efu; r_esp -= 4; W32(r_esp, v); }
    /* 004ab303: mov dword ptr [edi + 0x2c], eax */ W32((u32)(r_edi+0x2cu), r_eax);
    /* 004ab306: lea esi, [edi + 0x28] */ r_esi = (u32)(r_edi+0x28u);
    /* 004ab309: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004ab30a: call 0x780630 */ r_esp -= 4; W32(r_esp, 0x4ab30fu); f_00780630();
    /* 004ab30f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ab312: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ab314: je 0x4ab4d2 */ if (fZ) goto L_004ab4d2;
L_004ab31a:; BB(0x004ab31a);
    /* 004ab31a: fld dword ptr [0x903ae0] */ FPUSH(R_F32((u32)(0x903ae0u)));
    /* 004ab320: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 004ab323: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 004ab326: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004ab328: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004ab32a: mov ebx, dword ptr [edi + 0x50] */ r_ebx = R32((u32)(r_edi+0x50u));
    /* 004ab32d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004ab32e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004ab330: jb 0x4ab334 */ if (fC) goto L_004ab334;
L_004ab332:; BB(0x004ab332);
    /* 004ab332: fst st(1) */ ST(1) = ST(0);
L_004ab334:; BB(0x004ab334);
    /* 004ab334: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004ab336: fstp dword ptr [edi + 0x2c] */ W_F32((u32)(r_edi+0x2cu), ST(0)); FPOP();
    /* 004ab339: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ab33b: je 0x4ab4b8 */ if (fZ) goto L_004ab4b8;
L_004ab341:; BB(0x004ab341);
    /* 004ab341: mov eax, dword ptr [edi + 0x54] */ r_eax = R32((u32)(r_edi+0x54u));
    /* 004ab344: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ab346: je 0x4ab451 */ if (fZ) goto L_004ab451;
L_004ab34c:; BB(0x004ab34c);
    /* 004ab34c: mov eax, dword ptr [edi + 0x58] */ r_eax = R32((u32)(r_edi+0x58u));
    /* 004ab34f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ab351: je 0x4ab436 */ if (fZ) goto L_004ab436;
L_004ab357:; BB(0x004ab357);
    /* 004ab357: mov ecx, dword ptr [edi + 0x50] */ r_ecx = R32((u32)(r_edi+0x50u));
    /* 004ab35a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ab35c: je 0x4ab364 */ if (fZ) goto L_004ab364;
L_004ab35e:; BB(0x004ab35e);
    /* 004ab35e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004ab35f: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x4ab364u); f_00508db8();
L_004ab364:; BB(0x004ab364);
    /* 004ab364: mov ecx, dword ptr [edi + 0x54] */ r_ecx = R32((u32)(r_edi+0x54u));
    /* 004ab367: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ab369: je 0x4ab371 */ if (fZ) goto L_004ab371;
L_004ab36b:; BB(0x004ab36b);
    /* 004ab36b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004ab36c: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x4ab371u); f_00508db8();
L_004ab371:; BB(0x004ab371);
    /* 004ab371: mov ecx, dword ptr [edi + 0x58] */ r_ecx = R32((u32)(r_edi+0x58u));
    /* 004ab374: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ab376: je 0x4ab37e */ if (fZ) goto L_004ab37e;
L_004ab378:; BB(0x004ab378);
    /* 004ab378: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004ab379: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x4ab37eu); f_00508db8();
L_004ab37e:; BB(0x004ab37e);
    /* 004ab37e: mov eax, dword ptr [edi + 0x20] */ r_eax = R32((u32)(r_edi+0x20u));
    /* 004ab381: cmp eax, 0x168 */ {  u32 a = r_eax; u32 b = 0x168u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004ab386: jle 0x4ab396 */ if ((fZ||fS!=fO)) goto L_004ab396;
L_004ab388:; BB(0x004ab388);
    /* 004ab388: mov dword ptr [edi + 0x1c], 2 */ W32((u32)(r_edi+0x1cu), 0x2u);
    /* 004ab38f: mov dword ptr [edi + 0x20], 0 */ W32((u32)(r_edi+0x20u), 0x0u);
L_004ab396:; BB(0x004ab396);
    /* 004ab396: call 0x4a6edc */ r_esp -= 4; W32(r_esp, 0x4ab39bu); f_004a6edc();
    /* 004ab39b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004ab39c: mov ecx, eax */ r_ecx = r_eax;
    /* 004ab39e: call 0x4a8690 */ r_esp -= 4; W32(r_esp, 0x4ab3a3u); f_004a8690();
    /* 004ab3a3: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 004ab3a6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ab3a7: mov ecx, edi */ r_ecx = r_edi;
    /* 004ab3a9: call 0x4ab4e8 */ r_esp -= 4; W32(r_esp, 0x4ab3aeu); f_004ab4e8();
    /* 004ab3ae: fld dword ptr [0x9044bc] */ FPUSH(R_F32((u32)(0x9044bcu)));
    /* 004ab3b4: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 004ab3b7: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004ab3b9: fadd dword ptr [edi + 0x34] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x34u));
    /* 004ab3bc: fld dword ptr [edi + 0x28] */ FPUSH(R_F32((u32)(r_edi+0x28u)));
    /* 004ab3bf: fld dword ptr [edi + 0x30] */ FPUSH(R_F32((u32)(r_edi+0x30u)));
    /* 004ab3c2: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 004ab3c6: fmulp st(4) */ ST(4) = ST(4) * ST(0); FPOP();
    /* 004ab3c8: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 004ab3ca: fadd dword ptr [edi + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x3cu));
    /* 004ab3cd: fld dword ptr [0x9044b8] */ FPUSH(R_F32((u32)(0x9044b8u)));
    /* 004ab3d3: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 004ab3d5: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004ab3d7: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004ab3d9: fst dword ptr [edi + 0x34] */ W_F32((u32)(r_edi+0x34u), ST(0));
    /* 004ab3dc: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004ab3de: fst dword ptr [edi + 0x3c] */ W_F32((u32)(r_edi+0x3cu), ST(0));
    /* 004ab3e1: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004ab3e3: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004ab3e5: fstp dword ptr [edi + 0x28] */ W_F32((u32)(r_edi+0x28u), ST(0)); FPOP();
    /* 004ab3e8: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004ab3ea: fstp dword ptr [edi + 0x30] */ W_F32((u32)(r_edi+0x30u), ST(0)); FPOP();
    /* 004ab3ed: mov eax, 1 */ r_eax = 0x1u;
    /* 004ab3f2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ab3f3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ab3f4: push 0x3fc00000 */ { u32 v = 0x3fc00000u; r_esp -= 4; W32(r_esp, v); }
    /* 004ab3f9: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 004ab3fe: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004ab3ff: call 0x80575c */ r_esp -= 4; W32(r_esp, 0x4ab404u); f_0080575c();
    /* 004ab404: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004ab406: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ab407: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ab408: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004ab409: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004ab40a: push 0x39f */ { u32 v = 0x39fu; r_esp -= 4; W32(r_esp, v); }
    /* 004ab40f: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x4ab414u); f_008144b0();
    /* 004ab414: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ab417: add dword ptr [edi + 0x20], 1 */ { u32 ad = (u32)(r_edi+0x20u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_004ab41b:; BB(0x004ab41b);
    /* 004ab41b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004ab41e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004ab41f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004ab420: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004ab421: ret  */ FN_RET(0x004ab278); r_esp += 4; return;
L_004ab422:; BB(0x004ab422);
    /* 004ab422: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 004ab426: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004ab42b: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 004ab42f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004ab432: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004ab433: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004ab434: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004ab435: ret  */ FN_RET(0x004ab278); r_esp += 4; return;
L_004ab436:; BB(0x004ab436);
    /* 004ab436: mov eax, dword ptr [0xa476fc] */ r_eax = R32((u32)(0xa476fcu));
    /* 004ab43b: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004ab43d: push dword ptr [eax + 8] */ { u32 v = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004ab440: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004ab441: call 0x50981c */ r_esp -= 4; W32(r_esp, 0x4ab446u); f_0050981c();
    /* 004ab446: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ab449: mov dword ptr [edi + 0x58], eax */ W32((u32)(r_edi+0x58u), r_eax);
    /* 004ab44c: jmp 0x4ab357 */ goto L_004ab357;
L_004ab451:; BB(0x004ab451);
    /* 004ab451: mov eax, dword ptr [0xa476fc] */ r_eax = R32((u32)(0xa476fcu));
    /* 004ab456: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004ab458: push dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 004ab45b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004ab45c: call 0x50981c */ r_esp -= 4; W32(r_esp, 0x4ab461u); f_0050981c();
    /* 004ab461: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ab464: mov dword ptr [edi + 0x54], eax */ W32((u32)(r_edi+0x54u), r_eax);
    /* 004ab467: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ab469: je 0x4ab34c */ if (fZ) goto L_004ab34c;
L_004ab46f:; BB(0x004ab46f);
    /* 004ab46f: mov ecx, dword ptr [0xa47630] */ r_ecx = R32((u32)(0xa47630u));
    /* 004ab475: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004ab477: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x4ab47cu); f_005b8610();
    /* 004ab47c: mov ebx, eax */ r_ebx = r_eax;
    /* 004ab47e: mov ecx, dword ptr [0xa47630] */ r_ecx = R32((u32)(0xa47630u));
    /* 004ab484: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004ab486: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x4ab48bu); f_005b8638();
    /* 004ab48b: mov ecx, eax */ r_ecx = r_eax;
    /* 004ab48d: mov eax, dword ptr [0xa4762c] */ r_eax = R32((u32)(0xa4762cu));
    /* 004ab492: mov edx, dword ptr [edi + 0x54] */ r_edx = R32((u32)(r_edi+0x54u));
    /* 004ab495: mov dword ptr [edx + 0x60], 0x3f800000 */ W32((u32)(r_edx+0x60u), 0x3f800000u);
    /* 004ab49c: mov dword ptr [edx + 0x50], ebx */ W32((u32)(r_edx+0x50u), r_ebx);
    /* 004ab49f: movzx ebx, word ptr [edx + 0x2c] */ r_ebx = (u32)R16((u32)(r_edx+0x2cu));
    /* 004ab4a3: mov dword ptr [edx + 0x54], eax */ W32((u32)(r_edx+0x54u), r_eax);
    /* 004ab4a6: mov dword ptr [edx + 0x58], ecx */ W32((u32)(r_edx+0x58u), r_ecx);
    /* 004ab4a9: or ebx, 0xffff0200 */ {  u32 a = r_ebx; u32 b = 0xffff0200u; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 004ab4af: mov word ptr [edx + 0x2c], bx */ W16((u32)(r_edx+0x2cu), (u16)r_ebx);
    /* 004ab4b3: jmp 0x4ab34c */ goto L_004ab34c;
L_004ab4b8:; BB(0x004ab4b8);
    /* 004ab4b8: mov eax, dword ptr [0xa476fc] */ r_eax = R32((u32)(0xa476fcu));
    /* 004ab4bd: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004ab4bf: push dword ptr [eax] */ { u32 v = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, v); }
    /* 004ab4c1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004ab4c2: call 0x50981c */ r_esp -= 4; W32(r_esp, 0x4ab4c7u); f_0050981c();
    /* 004ab4c7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ab4ca: mov dword ptr [edi + 0x50], eax */ W32((u32)(r_edi+0x50u), r_eax);
    /* 004ab4cd: jmp 0x4ab341 */ goto L_004ab341;
L_004ab4d2:; BB(0x004ab4d2);
    /* 004ab4d2: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 004ab4d6: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004ab4db: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 004ab4df: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004ab4e2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004ab4e3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004ab4e4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004ab4e5: ret  */ FN_RET(0x004ab278); r_esp += 4; return;
}

void f_004ab4e8(void) /* sub_4AB4E8 */
{
    FN_ENTER(0x004ab4e8);
    /* 004ab4e8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004ab4e9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ab4ea: mov esi, ecx */ r_esi = r_ecx;
    /* 004ab4ec: mov ebp, dword ptr [esp + 0xc] */ r_ebp = R32((u32)(r_esp+0xcu));
    /* 004ab4f0: mov dword ptr [ebp], 0 */ W32((u32)(r_ebp), 0x0u);
    /* 004ab4f7: mov dword ptr [ebp + 4], 0 */ W32((u32)(r_ebp+0x4u), 0x0u);
    /* 004ab4fe: mov dword ptr [ebp + 8], 0 */ W32((u32)(r_ebp+0x8u), 0x0u);
    /* 004ab505: movzx eax, word ptr [esi + 0x24] */ r_eax = (u32)R16((u32)(r_esi+0x24u));
    /* 004ab509: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004ab50e: je 0x4ab538 */ if (fZ) goto L_004ab538;
L_004ab510:; BB(0x004ab510);
    /* 004ab510: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ab511: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x4ab516u); f_0068d5a8();
    /* 004ab516: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004ab517: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ab519: je 0x4ab538 */ if (fZ) goto L_004ab538;
L_004ab51b:; BB(0x004ab51b);
    /* 004ab51b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ab51c: fld dword ptr [eax + 0x38] */ FPUSH(R_F32((u32)(r_eax+0x38u)));
    /* 004ab51f: fsub dword ptr [esi + 0x28] */ ST(0) = ST(0) - R_F32((u32)(r_esi+0x28u));
    /* 004ab522: fstp dword ptr [ebp] */ W_F32((u32)(r_ebp), ST(0)); FPOP();
    /* 004ab525: fld dword ptr [eax + 0x40] */ FPUSH(R_F32((u32)(r_eax+0x40u)));
    /* 004ab528: fsub dword ptr [esi + 0x30] */ ST(0) = ST(0) - R_F32((u32)(r_esi+0x30u));
    /* 004ab52b: fstp dword ptr [ebp + 8] */ W_F32((u32)(r_ebp+0x8u), ST(0)); FPOP();
    /* 004ab52e: call 0x782868 */ r_esp -= 4; W32(r_esp, 0x4ab533u); f_00782868();
    /* 004ab533: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004ab535: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_004ab538:; BB(0x004ab538);
    /* 004ab538: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ab539: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004ab53a: ret 4 */ FN_RET(0x004ab4e8); r_esp += 8; return;
}

void f_004ab540(void) /* sub_4AB540 */
{
    FN_ENTER(0x004ab540);
    /* 004ab540: mov dword ptr [0xa47700], 0x3f800000 */ W32((u32)(0xa47700u), 0x3f800000u);
    /* 004ab54a: mov dword ptr [0xa47704], 0x41000000 */ W32((u32)(0xa47704u), 0x41000000u);
    /* 004ab554: mov dword ptr [0xa47708], 0x3fc00000 */ W32((u32)(0xa47708u), 0x3fc00000u);
    /* 004ab55e: ret  */ FN_RET(0x004ab540); r_esp += 4; return;
}

void f_004ab560(void) /* sub_4AB560 */
{
    FN_ENTER(0x004ab560);
    /* 004ab560: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x4ab565u); f_006dc358();
    /* 004ab565: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ab567: jne 0x4ab573 */ if (!fZ) goto L_004ab573;
L_004ab569:; BB(0x004ab569);
    /* 004ab569: mov dword ptr [0xa476fc], 0x90449c */ W32((u32)(0xa476fcu), 0x90449cu);
L_004ab573:; BB(0x004ab573);
    /* 004ab573: ret  */ FN_RET(0x004ab560); r_esp += 4; return;
}

void f_004ab574(void) /* sub_4AB574 */
{
    FN_ENTER(0x004ab574);
    /* 004ab574: mov ecx, dword ptr [0xa47710] */ r_ecx = R32((u32)(0xa47710u));
    /* 004ab57a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ab57c: je 0x4ab599 */ if (fZ) goto L_004ab599;
L_004ab57e:; BB(0x004ab57e);
    /* 004ab57e: call 0x829de0 */ r_esp -= 4; W32(r_esp, 0x4ab583u); f_00829de0();
    /* 004ab583: push dword ptr [0xa47710] */ { u32 v = R32((u32)(0xa47710u)); r_esp -= 4; W32(r_esp, v); }
    /* 004ab589: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x4ab58eu); f_0082e960();
    /* 004ab58e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004ab58f: mov dword ptr [0xa47710], 0 */ W32((u32)(0xa47710u), 0x0u);
L_004ab599:; BB(0x004ab599);
    /* 004ab599: mov ecx, dword ptr [0xa47714] */ r_ecx = R32((u32)(0xa47714u));
    /* 004ab59f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ab5a1: je 0x4ab5aa */ if (fZ) goto L_004ab5aa;
L_004ab5a3:; BB(0x004ab5a3);
    /* 004ab5a3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004ab5a5: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x4ab5aau); f_004066a8();
L_004ab5aa:; BB(0x004ab5aa);
    /* 004ab5aa: mov dword ptr [0xa47714], 0 */ W32((u32)(0xa47714u), 0x0u);
    /* 004ab5b4: ret  */ FN_RET(0x004ab574); r_esp += 4; return;
}

void f_004ab5b8(void) /* sub_4AB5B8 */
{
    FN_ENTER(0x004ab5b8);
    /* 004ab5b8: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x4ab5bdu); f_006dc358();
    /* 004ab5bd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ab5bf: jne 0x4ab5f1 */ if (!fZ) goto L_004ab5f1;
L_004ab5c1:; BB(0x004ab5c1);
    /* 004ab5c1: push 0x9ab8dc */ { u32 v = 0x9ab8dcu; r_esp -= 4; W32(r_esp, v); }
    /* 004ab5c6: call 0x51f6b0 */ r_esp -= 4; W32(r_esp, 0x4ab5cbu); f_0051f6b0();
    /* 004ab5cb: push 0x904638 */ { u32 v = 0x904638u; r_esp -= 4; W32(r_esp, v); }
    /* 004ab5d0: mov dword ptr [0xa47714], eax */ W32((u32)(0xa47714u), r_eax);
    /* 004ab5d5: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x4ab5dau); f_008009dc();
    /* 004ab5da: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ab5dd: mov ecx, dword ptr [0xa47714] */ r_ecx = R32((u32)(0xa47714u));
    /* 004ab5e3: mov dword ptr [0xa47710], eax */ W32((u32)(0xa47710u), r_eax);
    /* 004ab5e8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ab5ea: je 0x4ab5f1 */ if (fZ) goto L_004ab5f1;
L_004ab5ec:; BB(0x004ab5ec);
    /* 004ab5ec: call 0x5b90d0 */ r_esp -= 4; W32(r_esp, 0x4ab5f1u); f_005b90d0();
L_004ab5f1:; BB(0x004ab5f1);
    /* 004ab5f1: ret  */ FN_RET(0x004ab5b8); r_esp += 4; return;
}

void f_004ab5f4(void) /* sub_4AB5F4 */
{
    FN_ENTER(0x004ab5f4);
    /* 004ab5f4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004ab5f5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004ab5f7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004ab5f9: call 0x4ab618 */ r_esp -= 4; W32(r_esp, 0x4ab5feu); f_004ab618();
    /* 004ab5fe: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004ab602: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ab604: jne 0x4ab60a */ if (!fZ) goto L_004ab60a;
L_004ab606:; BB(0x004ab606);
    /* 004ab606: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004ab607: ret 4 */ FN_RET(0x004ab5f4); r_esp += 8; return;
L_004ab60a:; BB(0x004ab60a);
    /* 004ab60a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004ab60b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4ab610u); f_005c2f74();
    /* 004ab610: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004ab611: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004ab612: ret 4 */ FN_RET(0x004ab5f4); r_esp += 8; return;
}

void f_004ab618(void) /* sub_4AB618 */
{
    FN_ENTER(0x004ab618);
    /* 004ab618: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ab619: mov ebp, esp */ r_ebp = r_esp;
    /* 004ab61b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004ab61d: push 0x8d0814 */ { u32 v = 0x8d0814u; r_esp -= 4; W32(r_esp, v); }
    /* 004ab622: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004ab628: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ab629: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004ab630: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004ab633: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004ab636: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004ab639: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004ab63c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004ab63f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004ab642: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004ab645: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 004ab648: mov dword ptr [ecx], 0xafa368 */ W32((u32)(r_ecx), 0xafa368u);
    /* 004ab64e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ab650: je 0x4ab669 */ if (fZ) goto L_004ab669;
L_004ab652:; BB(0x004ab652);
    /* 004ab652: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004ab655: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004ab659: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004ab65e: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004ab662: mov dword ptr [ecx + 0x28], 0 */ W32((u32)(r_ecx+0x28u), 0x0u);
L_004ab669:; BB(0x004ab669);
    /* 004ab669: mov edx, dword ptr [ecx + 0x24] */ r_edx = R32((u32)(r_ecx+0x24u));
    /* 004ab66c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ab66e: je 0x4ab687 */ if (fZ) goto L_004ab687;
L_004ab670:; BB(0x004ab670);
    /* 004ab670: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004ab673: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004ab677: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004ab67c: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004ab680: mov dword ptr [ecx + 0x24], 0 */ W32((u32)(r_ecx+0x24u), 0x0u);
L_004ab687:; BB(0x004ab687);
    /* 004ab687: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 004ab68a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ab68c: je 0x4ab6a5 */ if (fZ) goto L_004ab6a5;
L_004ab68e:; BB(0x004ab68e);
    /* 004ab68e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004ab691: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004ab695: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004ab69a: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004ab69e: mov dword ptr [ecx + 0x20], 0 */ W32((u32)(r_ecx+0x20u), 0x0u);
L_004ab6a5:; BB(0x004ab6a5);
    /* 004ab6a5: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 004ab6a8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ab6aa: je 0x4ab6c3 */ if (fZ) goto L_004ab6c3;
L_004ab6ac:; BB(0x004ab6ac);
    /* 004ab6ac: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004ab6af: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004ab6b3: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004ab6b8: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004ab6bc: mov dword ptr [ecx + 0x1c], 0 */ W32((u32)(r_ecx+0x1cu), 0x0u);
L_004ab6c3:; BB(0x004ab6c3);
    /* 004ab6c3: mov dword ptr [0xa47724], 0 */ W32((u32)(0xa47724u), 0x0u);
    /* 004ab6cd: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004ab6d4: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x4ab6d9u); f_008171e8();
    /* 004ab6d9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004ab6dc: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004ab6e3: mov esp, ebp */ r_esp = r_ebp;
    /* 004ab6e5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ab6e6: ret  */ FN_RET(0x004ab618); r_esp += 4; return;
}

void f_004ab6e8(void) /* sub_4AB6E8 */
{
    FN_ENTER(0x004ab6e8);
    /* 004ab6e8: mov edx, dword ptr [0xa47724] */ r_edx = R32((u32)(0xa47724u));
    /* 004ab6ee: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ab6f0: je 0x4ab709 */ if (fZ) goto L_004ab709;
L_004ab6f2:; BB(0x004ab6f2);
    /* 004ab6f2: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004ab6f6: mov dword ptr [0xa47724], 0 */ W32((u32)(0xa47724u), 0x0u);
    /* 004ab700: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004ab705: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_004ab709:; BB(0x004ab709);
    /* 004ab709: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4ab70eu); f_0061cdb0();
    /* 004ab70e: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x4ab713u); f_004ac444();
    /* 004ab713: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4ab718u); f_0061cdb0();
    /* 004ab718: call 0x4abb2c */ r_esp -= 4; W32(r_esp, 0x4ab71du); f_004abb2c();
    /* 004ab71d: call 0x4ab574 */ r_esp -= 4; W32(r_esp, 0x4ab722u); f_004ab574();
    /* 004ab722: ret  */ FN_RET(0x004ab6e8); r_esp += 4; return;
}

void f_004ab724(void) /* sub_4AB724 */
{
    FN_ENTER(0x004ab724);
    /* 004ab724: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ab725: mov ebp, esp */ r_ebp = r_esp;
    /* 004ab727: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004ab729: push 0x8d083c */ { u32 v = 0x8d083cu; r_esp -= 4; W32(r_esp, v); }
    /* 004ab72e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004ab734: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ab735: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004ab73c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004ab73f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004ab742: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004ab745: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004ab748: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004ab74b: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 004ab74d: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 004ab754: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4ab759u); f_005caba4();
    /* 004ab759: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004ab75a: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004ab75d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ab75f: je 0x4ab79a */ if (fZ) goto L_004ab79a;
L_004ab761:; BB(0x004ab761);
    /* 004ab761: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 004ab768: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004ab76f: push dword ptr [0xaca37c] */ { u32 v = R32((u32)(0xaca37cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004ab775: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004ab778: call 0x4ab7a0 */ r_esp -= 4; W32(r_esp, 0x4ab77du); f_004ab7a0();
    /* 004ab77d: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004ab780: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_004ab787:; BB(0x004ab787);
    /* 004ab787: mov dword ptr [0xa47724], eax */ W32((u32)(0xa47724u), r_eax);
    /* 004ab78c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004ab78f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004ab796: mov esp, ebp */ r_esp = r_ebp;
    /* 004ab798: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ab799: ret  */ FN_RET(0x004ab724); r_esp += 4; return;
L_004ab79a:; BB(0x004ab79a);
    /* 004ab79a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ab79c: jmp 0x4ab787 */ goto L_004ab787;
}

void f_004ab7a0(void) /* sub_4AB7A0 */
{
    FN_ENTER(0x004ab7a0);
    /* 004ab7a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ab7a1: mov ebp, esp */ r_ebp = r_esp;
    /* 004ab7a3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004ab7a5: push 0x8d0858 */ { u32 v = 0x8d0858u; r_esp -= 4; W32(r_esp, v); }
    /* 004ab7aa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004ab7b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ab7b1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004ab7b8: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004ab7bb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004ab7be: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004ab7c1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004ab7c4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004ab7c7: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004ab7ca: mov dword ptr [ebp - 0x40], ecx */ W32((u32)(r_ebp+0xffffffc0u), r_ecx);
    /* 004ab7cd: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x4ab7d2u); f_008193cc();
    /* 004ab7d2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004ab7d9: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 004ab7dc: mov dword ptr [ecx], 0xafa368 */ W32((u32)(r_ecx), 0xafa368u);
    /* 004ab7e2: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004ab7e4: mov eax, dword ptr [0x9ab8ec] */ r_eax = R32((u32)(0x9ab8ecu));
    /* 004ab7e9: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 004ab7ec: mov dword ptr [ecx + 0x1c], edx */ W32((u32)(r_ecx+0x1cu), r_edx);
    /* 004ab7ef: mov dword ptr [ecx + 0x20], edx */ W32((u32)(r_ecx+0x20u), r_edx);
    /* 004ab7f2: mov dword ptr [ecx + 0x24], edx */ W32((u32)(r_ecx+0x24u), r_edx);
    /* 004ab7f5: mov dword ptr [ecx + 0x28], edx */ W32((u32)(r_ecx+0x28u), r_edx);
    /* 004ab7f8: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4ab7fdu); f_008587a5();
    /* 004ab7fd: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 004ab800: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 004ab803: fild dword ptr [ebp - 0x3c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffc4u)));
    /* 004ab806: fdiv dword ptr [0x904668] */ ST(0) = ST(0) / R_F32((u32)(0x904668u));
    /* 004ab80c: fmul dword ptr [0x90466c] */ ST(0) = ST(0) * R_F32((u32)(0x90466cu));
    /* 004ab812: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004ab814: fadd dword ptr [0x904670] */ ST(0) = ST(0) + R_F32((u32)(0x904670u));
    /* 004ab81a: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004ab820: fnstcw word ptr [ebp - 0x34] */ W16((u32)(r_ebp+0xffffffccu), fcw);
    /* 004ab823: movzx eax, word ptr [ebp - 0x34] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffccu));
    /* 004ab827: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004ab82c: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 004ab82f: fldcw word ptr [ebp - 0x2c] */ fcw = R16((u32)(r_ebp+0xffffffd4u));
    /* 004ab832: fistp dword ptr [ebp - 0x24] */ W32((u32)(r_ebp+0xffffffdcu), (u32)fx_int32(ST(0))); FPOP();
    /* 004ab835: fldcw word ptr [ebp - 0x34] */ fcw = R16((u32)(r_ebp+0xffffffccu));
    /* 004ab838: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 004ab83b: mov word ptr [edx + 0x2c], ax */ W16((u32)(r_edx+0x2cu), (u16)r_eax);
    /* 004ab83f: call 0x8115f0 */ r_esp -= 4; W32(r_esp, 0x4ab844u); f_008115f0();
    /* 004ab844: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ab847: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ab849: je 0x4ab850 */ if (fZ) goto L_004ab850;
L_004ab84b:; BB(0x004ab84b);
    /* 004ab84b: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 004ab84e: jmp 0x4ab86f */ goto L_004ab86f;
L_004ab850:; BB(0x004ab850);
    /* 004ab850: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 004ab853: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 004ab856: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ab858: je 0x4ab8b0 */ if (fZ) goto L_004ab8b0;
L_004ab85a:; BB(0x004ab85a);
    /* 004ab85a: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 004ab85d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ab85f: je 0x4ab8a1 */ if (fZ) goto L_004ab8a1;
L_004ab861:; BB(0x004ab861);
    /* 004ab861: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 004ab864: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ab866: je 0x4ab88e */ if (fZ) goto L_004ab88e;
L_004ab868:; BB(0x004ab868);
    /* 004ab868: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 004ab86b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ab86d: je 0x4ab87f */ if (fZ) goto L_004ab87f;
L_004ab86f:; BB(0x004ab86f);
    /* 004ab86f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004ab872: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004ab879: mov esp, ebp */ r_esp = r_ebp;
    /* 004ab87b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ab87c: ret 4 */ FN_RET(0x004ab7a0); r_esp += 8; return;
L_004ab87f:; BB(0x004ab87f);
    /* 004ab87f: call 0x4ac4c0 */ r_esp -= 4; W32(r_esp, 0x4ab884u); f_004ac4c0();
    /* 004ab884: mov edx, eax */ r_edx = r_eax;
    /* 004ab886: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 004ab889: mov dword ptr [eax + 0x28], edx */ W32((u32)(r_eax+0x28u), r_edx);
    /* 004ab88c: jmp 0x4ab86f */ goto L_004ab86f;
L_004ab88e:; BB(0x004ab88e);
    /* 004ab88e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ab88f: call 0x4ac280 */ r_esp -= 4; W32(r_esp, 0x4ab894u); f_004ac280();
    /* 004ab894: mov edx, eax */ r_edx = r_eax;
    /* 004ab896: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ab899: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 004ab89c: mov dword ptr [eax + 0x24], edx */ W32((u32)(r_eax+0x24u), r_edx);
    /* 004ab89f: jmp 0x4ab868 */ goto L_004ab868;
L_004ab8a1:; BB(0x004ab8a1);
    /* 004ab8a1: call 0x4abd58 */ r_esp -= 4; W32(r_esp, 0x4ab8a6u); f_004abd58();
    /* 004ab8a6: mov edx, eax */ r_edx = r_eax;
    /* 004ab8a8: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 004ab8ab: mov dword ptr [eax + 0x20], edx */ W32((u32)(r_eax+0x20u), r_edx);
    /* 004ab8ae: jmp 0x4ab861 */ goto L_004ab861;
L_004ab8b0:; BB(0x004ab8b0);
    /* 004ab8b0: call 0x4abb60 */ r_esp -= 4; W32(r_esp, 0x4ab8b5u); f_004abb60();
    /* 004ab8b5: mov edx, eax */ r_edx = r_eax;
    /* 004ab8b7: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 004ab8ba: mov dword ptr [eax + 0x1c], edx */ W32((u32)(r_eax+0x1cu), r_edx);
    /* 004ab8bd: jmp 0x4ab85a */ goto L_004ab85a;
}

void f_004ab8c0(void) /* sub_4AB8C0 */
{
    FN_ENTER(0x004ab8c0);
    /* 004ab8c0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004ab8c1: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004ab8c4: mov edi, ecx */ r_edi = r_ecx;
    /* 004ab8c6: movsx edx, word ptr [edi + 0x2c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x2cu));
    /* 004ab8ca: lea eax, [edx - 1] */ r_eax = (u32)(r_edx+0xffffffffu);
    /* 004ab8cd: mov word ptr [edi + 0x2c], ax */ W16((u32)(r_edi+0x2cu), (u16)r_eax);
    /* 004ab8d1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004ab8d3: jle 0x4ab8da */ if ((fZ||fS!=fO)) goto L_004ab8da;
L_004ab8d5:; BB(0x004ab8d5);
    /* 004ab8d5: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004ab8d8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004ab8d9: ret  */ FN_RET(0x004ab8c0); r_esp += 4; return;
L_004ab8da:; BB(0x004ab8da);
    /* 004ab8da: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004ab8dc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ab8dd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ab8de: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ab8df: push 0x3af */ { u32 v = 0x3afu; r_esp -= 4; W32(r_esp, v); }
    /* 004ab8e4: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4ab8e9u); f_00814298();
    /* 004ab8e9: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ab8ec: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4ab8f1u); f_008587a5();
    /* 004ab8f1: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 004ab8f4: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 004ab8f7: fdiv dword ptr [0x90465c] */ ST(0) = ST(0) / R_F32((u32)(0x90465cu));
    /* 004ab8fd: fmul dword ptr [0x904660] */ ST(0) = ST(0) * R_F32((u32)(0x904660u));
    /* 004ab903: fadd dword ptr [0x904664] */ ST(0) = ST(0) + R_F32((u32)(0x904664u));
    /* 004ab909: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 004ab90d: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 004ab912: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004ab917: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 004ab91b: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 004ab91f: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 004ab923: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 004ab927: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 004ab92b: mov word ptr [edi + 0x2c], ax */ W16((u32)(r_edi+0x2cu), (u16)r_eax);
    /* 004ab92f: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004ab932: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004ab933: ret  */ FN_RET(0x004ab8c0); r_esp += 4; return;
}

void f_004ab934(void) /* sub_4AB934 */
{
    FN_ENTER(0x004ab934);
    /* 004ab934: mov eax, dword ptr [0xa47724] */ r_eax = R32((u32)(0xa47724u));
    /* 004ab939: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ab93b: je 0x4ab949 */ if (fZ) goto L_004ab949;
L_004ab93d:; BB(0x004ab93d);
    /* 004ab93d: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 004ab940: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ab942: je 0x4ab949 */ if (fZ) goto L_004ab949;
L_004ab944:; BB(0x004ab944);
    /* 004ab944: call 0x4ac198 */ r_esp -= 4; W32(r_esp, 0x4ab949u); f_004ac198();
L_004ab949:; BB(0x004ab949);
    /* 004ab949: ret  */ FN_RET(0x004ab934); r_esp += 4; return;
}

void f_004ab94c(void) /* sub_4AB94C */
{
    FN_ENTER(0x004ab94c);
    /* 004ab94c: mov eax, dword ptr [0xa47724] */ r_eax = R32((u32)(0xa47724u));
    /* 004ab951: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ab953: je 0x4ab969 */ if (fZ) goto L_004ab969;
L_004ab955:; BB(0x004ab955);
    /* 004ab955: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 004ab958: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ab95a: je 0x4ab969 */ if (fZ) goto L_004ab969;
L_004ab95c:; BB(0x004ab95c);
    /* 004ab95c: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004ab960: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004ab964: call 0x4ac3ac */ r_esp -= 4; W32(r_esp, 0x4ab969u); f_004ac3ac();
L_004ab969:; BB(0x004ab969);
    /* 004ab969: ret  */ FN_RET(0x004ab94c); r_esp += 4; return;
}

void f_004ab96c(void) /* sub_4AB96C */
{
    FN_ENTER(0x004ab96c);
    /* 004ab96c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004ab96d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ab96e: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 004ab972: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 004ab976: mov eax, dword ptr [0xa47724] */ r_eax = R32((u32)(0xa47724u));
    /* 004ab97b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ab97d: je 0x4ab9a0 */ if (fZ) goto L_004ab9a0;
L_004ab97f:; BB(0x004ab97f);
    /* 004ab97f: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 004ab982: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ab984: je 0x4ab992 */ if (fZ) goto L_004ab992;
L_004ab986:; BB(0x004ab986);
    /* 004ab986: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ab987: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004ab988: call 0x4abc3c */ r_esp -= 4; W32(r_esp, 0x4ab98du); f_004abc3c();
    /* 004ab98d: mov eax, dword ptr [0xa47724] */ r_eax = R32((u32)(0xa47724u));
L_004ab992:; BB(0x004ab992);
    /* 004ab992: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 004ab995: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ab997: je 0x4ab9a0 */ if (fZ) goto L_004ab9a0;
L_004ab999:; BB(0x004ab999);
    /* 004ab999: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ab99a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004ab99b: call 0x4abe1c */ r_esp -= 4; W32(r_esp, 0x4ab9a0u); f_004abe1c();
L_004ab9a0:; BB(0x004ab9a0);
    /* 004ab9a0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ab9a1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004ab9a2: ret  */ FN_RET(0x004ab96c); r_esp += 4; return;
}

void f_004ab9a4(void) /* sub_4AB9A4 */
{
    FN_ENTER(0x004ab9a4);
    /* 004ab9a4: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 004ab9a8: fld dword ptr [edx + 8] */ FPUSH(R_F32((u32)(r_edx+0x8u)));
    /* 004ab9ab: fadd dword ptr [esp + 8] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x8u));
    /* 004ab9af: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 004ab9b1: ret  */ FN_RET(0x004ab9a4); r_esp += 4; return;
}

void f_004ab9b4(void) /* sub_4AB9B4 */
{
    FN_ENTER(0x004ab9b4);
    /* 004ab9b4: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 004ab9b8: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 004ab9bc: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 004ab9be: fsub dword ptr [ecx + 8] */ ST(0) = ST(0) - R_F32((u32)(r_ecx+0x8u));
    /* 004ab9c1: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 004ab9c3: fld dword ptr [edx + 8] */ FPUSH(R_F32((u32)(r_edx+0x8u)));
    /* 004ab9c6: fsub dword ptr [ecx + 0x10] */ ST(0) = ST(0) - R_F32((u32)(r_ecx+0x10u));
    /* 004ab9c9: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 004ab9cb: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004ab9cd: fcomp dword ptr [esp + 0xc] */ fx_compare(ST(0), R_F32((u32)(r_esp+0xcu))); FPOP();
    /* 004ab9d1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004ab9d3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004ab9d4: jae 0x4ab9dc */ if (!fC) goto L_004ab9dc;
L_004ab9d6:; BB(0x004ab9d6);
    /* 004ab9d6: mov eax, 1 */ r_eax = 0x1u;
    /* 004ab9db: ret  */ FN_RET(0x004ab9b4); r_esp += 4; return;
L_004ab9dc:; BB(0x004ab9dc);
    /* 004ab9dc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ab9de: ret  */ FN_RET(0x004ab9b4); r_esp += 4; return;
}

void f_004ab9e0(void) /* sub_4AB9E0 */
{
    FN_ENTER(0x004ab9e0);
    /* 004ab9e0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004ab9e1: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4ab9e6u); f_0061cdb0();
    /* 004ab9e6: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 004ab9ea: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x4ab9efu); f_00829cc8();
    /* 004ab9ef: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x4ab9f4u); f_0082d7b0();
    /* 004ab9f4: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 004ab9f8: call 0x4aba08 */ r_esp -= 4; W32(r_esp, 0x4ab9fdu); f_004aba08();
    /* 004ab9fd: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x4aba02u); f_0082da80();
    /* 004aba02: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004aba03: ret  */ FN_RET(0x004ab9e0); r_esp += 4; return;
}

void f_004aba08(void) /* sub_4ABA08 */
{
    FN_ENTER(0x004aba08);
    /* 004aba08: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004aba09: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004aba0a: mov ebx, eax */ r_ebx = r_eax;
L_004aba0c:; BB(0x004aba0c);
    /* 004aba0c: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004aba0e: je 0x4aba6e */ if (fZ) goto L_004aba6e;
L_004aba10:; BB(0x004aba10);
    /* 004aba10: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x4aba15u); f_0082d7b0();
    /* 004aba15: lea ecx, [ebx + 8] */ r_ecx = (u32)(r_ebx+0x8u);
    /* 004aba18: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x4aba1du); f_0082d838();
    /* 004aba1d: lea ecx, [ebx + 0x14] */ r_ecx = (u32)(r_ebx+0x14u);
    /* 004aba20: mov edx, 1 */ r_edx = 0x1u;
    /* 004aba25: call 0x830df8 */ r_esp -= 4; W32(r_esp, 0x4aba2au); f_00830df8();
    /* 004aba2a: lea ecx, [ebx + 0x20] */ r_ecx = (u32)(r_ebx+0x20u);
    /* 004aba2d: call 0x831290 */ r_esp -= 4; W32(r_esp, 0x4aba32u); f_00831290();
    /* 004aba32: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 004aba34: test dl, 8 */ {  u32 a = (u8)r_edx; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004aba37: jne 0x4aba5c */ if (!fZ) goto L_004aba5c;
L_004aba39:; BB(0x004aba39);
    /* 004aba39: mov edx, dword ptr [ebx + 4] */ r_edx = R32((u32)(r_ebx+0x4u));
    /* 004aba3c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004aba3e: je 0x4aba5c */ if (fZ) goto L_004aba5c;
L_004aba40:; BB(0x004aba40);
    /* 004aba40: call 0x502b14 */ r_esp -= 4; W32(r_esp, 0x4aba45u); f_00502b14();
    /* 004aba45: call 0x835068 */ r_esp -= 4; W32(r_esp, 0x4aba4au); f_00835068();
    /* 004aba4a: mov ecx, dword ptr [ebx + 4] */ r_ecx = R32((u32)(r_ebx+0x4u));
    /* 004aba4d: call 0x835120 */ r_esp -= 4; W32(r_esp, 0x4aba52u); f_00835120();
    /* 004aba52: call 0x835078 */ r_esp -= 4; W32(r_esp, 0x4aba57u); f_00835078();
    /* 004aba57: call 0x502c30 */ r_esp -= 4; W32(r_esp, 0x4aba5cu); f_00502c30();
L_004aba5c:; BB(0x004aba5c);
    /* 004aba5c: mov eax, dword ptr [ebx + 0x2c] */ r_eax = R32((u32)(r_ebx+0x2cu));
    /* 004aba5f: call 0x4aba08 */ r_esp -= 4; W32(r_esp, 0x4aba64u); f_004aba08();
    /* 004aba64: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x4aba69u); f_0082da80();
    /* 004aba69: mov ebx, dword ptr [ebx + 0x30] */ r_ebx = R32((u32)(r_ebx+0x30u));
    /* 004aba6c: jmp 0x4aba0c */ goto L_004aba0c;
L_004aba6e:; BB(0x004aba6e);
    /* 004aba6e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004aba6f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004aba70: ret  */ FN_RET(0x004aba08); r_esp += 4; return;
}

void f_004aba74(void) /* sub_4ABA74 */
{
    FN_ENTER(0x004aba74);
    /* 004aba74: mov dword ptr [0xa47718], 0x3f800000 */ W32((u32)(0xa47718u), 0x3f800000u);
    /* 004aba7e: mov dword ptr [0xa4771c], 0x41000000 */ W32((u32)(0xa4771cu), 0x41000000u);
    /* 004aba88: mov dword ptr [0xa47720], 0x3fc00000 */ W32((u32)(0xa47720u), 0x3fc00000u);
    /* 004aba92: ret  */ FN_RET(0x004aba74); r_esp += 4; return;
}

void f_004aba94(void) /* sub_4ABA94 */
{
    FN_ENTER(0x004aba94);
    /* 004aba94: call 0x4ab5b8 */ r_esp -= 4; W32(r_esp, 0x4aba99u); f_004ab5b8();
    /* 004aba99: call 0x4abcac */ r_esp -= 4; W32(r_esp, 0x4aba9eu); f_004abcac();
    /* 004aba9e: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4abaa3u); f_0061cdb0();
    /* 004abaa3: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x4abaa8u); f_004ac444();
    /* 004abaa8: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4abaadu); f_0061cdb0();
    /* 004abaad: mov dword ptr [0xa47724], 0 */ W32((u32)(0xa47724u), 0x0u);
    /* 004abab7: ret  */ FN_RET(0x004aba94); r_esp += 4; return;
}

void f_004abab8(void) /* sub_4ABAB8 */
{
    FN_ENTER(0x004abab8);
    /* 004abab8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004abab9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004ababb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004ababd: call 0x4abadc */ r_esp -= 4; W32(r_esp, 0x4abac2u); f_004abadc();
    /* 004abac2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004abac6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004abac8: jne 0x4abace */ if (!fZ) goto L_004abace;
L_004abaca:; BB(0x004abaca);
    /* 004abaca: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004abacb: ret 4 */ FN_RET(0x004abab8); r_esp += 8; return;
L_004abace:; BB(0x004abace);
    /* 004abace: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004abacf: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4abad4u); f_005c2f74();
    /* 004abad4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004abad5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004abad6: ret 4 */ FN_RET(0x004abab8); r_esp += 8; return;
}

void f_004abadc(void) /* sub_4ABADC */
{
    FN_ENTER(0x004abadc);
    /* 004abadc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004abadd: mov ebp, esp */ r_ebp = r_esp;
    /* 004abadf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004abae1: push 0x8d0874 */ { u32 v = 0x8d0874u; r_esp -= 4; W32(r_esp, v); }
    /* 004abae6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004abaec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004abaed: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004abaf4: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004abaf7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004abafa: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004abafd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004abb00: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004abb03: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004abb06: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004abb09: mov dword ptr [ecx], 0xafa3c8 */ W32((u32)(r_ecx), 0xafa3c8u);
    /* 004abb0f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004abb16: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x4abb1bu); f_008171e8();
    /* 004abb1b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004abb1e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004abb25: mov esp, ebp */ r_esp = r_ebp;
    /* 004abb27: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004abb28: ret  */ FN_RET(0x004abadc); r_esp += 4; return;
}

void f_004abb2c(void) /* sub_4ABB2C */
{
    FN_ENTER(0x004abb2c);
    /* 004abb2c: mov eax, dword ptr [0xa47714] */ r_eax = R32((u32)(0xa47714u));
    /* 004abb31: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004abb33: je 0x4abb5f */ if (fZ) goto L_004abb5f;
L_004abb35:; BB(0x004abb35);
    /* 004abb35: mov eax, dword ptr [eax + 0x42c] */ r_eax = R32((u32)(r_eax+0x42cu));
    /* 004abb3b: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 004abb3e: mov edx, dword ptr [eax + 0x68] */ r_edx = R32((u32)(r_eax+0x68u));
    /* 004abb41: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004abb43: je 0x4abb5f */ if (fZ) goto L_004abb5f;
L_004abb45:; BB(0x004abb45);
    /* 004abb45: mov eax, dword ptr [ecx + 0x2c] */ r_eax = R32((u32)(r_ecx+0x2cu));
    /* 004abb48: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004abb4a: je 0x4abb5f */ if (fZ) goto L_004abb5f;
L_004abb4c:; BB(0x004abb4c);
    /* 004abb4c: cmp edx, dword ptr [eax + 0x2c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0x2cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004abb4f: jne 0x4abb58 */ if (!fZ) goto L_004abb58;
L_004abb51:; BB(0x004abb51);
    /* 004abb51: mov dword ptr [eax + 0x2c], 0 */ W32((u32)(r_eax+0x2cu), 0x0u);
L_004abb58:; BB(0x004abb58);
    /* 004abb58: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 004abb5b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004abb5d: jne 0x4abb4c */ if (!fZ) goto L_004abb4c;
L_004abb5f:; BB(0x004abb5f);
    /* 004abb5f: ret  */ FN_RET(0x004abb2c); r_esp += 4; return;
}

void f_004abb60(void) /* sub_4ABB60 */
{
    FN_ENTER(0x004abb60);
    /* 004abb60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004abb61: mov ebp, esp */ r_ebp = r_esp;
    /* 004abb63: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004abb65: push 0x8d089c */ { u32 v = 0x8d089cu; r_esp -= 4; W32(r_esp, v); }
    /* 004abb6a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004abb70: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004abb71: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004abb78: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004abb7b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004abb7e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004abb81: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004abb84: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004abb87: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 004abb89: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 004abb90: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4abb95u); f_005caba4();
    /* 004abb95: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004abb96: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004abb99: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004abb9b: je 0x4abbd1 */ if (fZ) goto L_004abbd1;
L_004abb9d:; BB(0x004abb9d);
    /* 004abb9d: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 004abba4: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004abbab: push dword ptr [0xaca378] */ { u32 v = R32((u32)(0xaca378u)); r_esp -= 4; W32(r_esp, v); }
    /* 004abbb1: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004abbb4: call 0x4abbd8 */ r_esp -= 4; W32(r_esp, 0x4abbb9u); f_004abbd8();
    /* 004abbb9: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004abbbc: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_004abbc3:; BB(0x004abbc3);
    /* 004abbc3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004abbc6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004abbcd: mov esp, ebp */ r_esp = r_ebp;
    /* 004abbcf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004abbd0: ret  */ FN_RET(0x004abb60); r_esp += 4; return;
L_004abbd1:; BB(0x004abbd1);
    /* 004abbd1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004abbd3: jmp 0x4abbc3 */ goto L_004abbc3;
}

void f_004abbd8(void) /* sub_4ABBD8 */
{
    FN_ENTER(0x004abbd8);
    /* 004abbd8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004abbd9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004abbdb: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004abbdf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004abbe1: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x4abbe6u); f_008193cc();
    /* 004abbe6: mov dword ptr [ebx], 0xafa3c8 */ W32((u32)(r_ebx), 0xafa3c8u);
    /* 004abbec: mov edx, dword ptr [0x9ab8f0] */ r_edx = R32((u32)(0x9ab8f0u));
    /* 004abbf2: mov dword ptr [ebx + 4], edx */ W32((u32)(r_ebx+0x4u), r_edx);
    /* 004abbf5: mov eax, ebx */ r_eax = r_ebx;
    /* 004abbf7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004abbf8: ret 4 */ FN_RET(0x004abbd8); r_esp += 8; return;
}

void f_004abbfc(void) /* sub_4ABBFC */
{
    FN_ENTER(0x004abbfc);
    /* 004abbfc: call 0x67e408 */ r_esp -= 4; W32(r_esp, 0x4abc01u); f_0067e408();
    /* 004abc01: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004abc03: je 0x4abc06 */ if (fZ) goto L_004abc06;
L_004abc05:; BB(0x004abc05);
    /* 004abc05: ret  */ FN_RET(0x004abbfc); r_esp += 4; return;
L_004abc06:; BB(0x004abc06);
    /* 004abc06: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x4abc0bu); f_0082d7b0();
    /* 004abc0b: mov ecx, dword ptr [0xa47710] */ r_ecx = R32((u32)(0xa47710u));
    /* 004abc11: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x4abc16u); f_00829cc8();
    /* 004abc16: call 0x835068 */ r_esp -= 4; W32(r_esp, 0x4abc1bu); f_00835068();
    /* 004abc1b: mov eax, dword ptr [0xa47714] */ r_eax = R32((u32)(0xa47714u));
    /* 004abc20: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 004abc26: mov ecx, dword ptr [edx + 0x78] */ r_ecx = R32((u32)(r_edx+0x78u));
    /* 004abc29: call 0x835090 */ r_esp -= 4; W32(r_esp, 0x4abc2eu); f_00835090();
    /* 004abc2e: call 0x835078 */ r_esp -= 4; W32(r_esp, 0x4abc33u); f_00835078();
    /* 004abc33: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x4abc38u); f_0082da80();
    /* 004abc38: ret  */ FN_RET(0x004abbfc); r_esp += 4; return;
}

void f_004abc3c(void) /* sub_4ABC3C */
{
    FN_ENTER(0x004abc3c);
    /* 004abc3c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004abc3d: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004abc40: mov eax, dword ptr [0xa47714] */ r_eax = R32((u32)(0xa47714u));
    /* 004abc45: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 004abc4b: mov ebx, dword ptr [edx + 0x78] */ r_ebx = R32((u32)(r_edx+0x78u));
    /* 004abc4e: push 0x41700000 */ { u32 v = 0x41700000u; r_esp -= 4; W32(r_esp, v); }
    /* 004abc53: push dword ptr [esp + 0x24] */ { u32 v = R32((u32)(r_esp+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 004abc57: call 0x4ab9a4 */ r_esp -= 4; W32(r_esp, 0x4abc5cu); f_004ab9a4();
    /* 004abc5c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004abc5f: mov ebx, dword ptr [ebx + 0x2c] */ r_ebx = R32((u32)(r_ebx+0x2cu));
    /* 004abc62: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004abc64: je 0x4abca5 */ if (fZ) goto L_004abca5;
L_004abc66:; BB(0x004abc66);
    /* 004abc66: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 004abc6a: mov dword ptr [esp + 0xc], esi */ W32((u32)(r_esp+0xcu), r_esi);
    /* 004abc6e: mov esi, dword ptr [esp + 0x1c] */ r_esi = R32((u32)(r_esp+0x1cu));
L_004abc72:; BB(0x004abc72);
    /* 004abc72: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 004abc74: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004abc76: jne 0x4abc93 */ if (!fZ) goto L_004abc93;
L_004abc78:; BB(0x004abc78);
    /* 004abc78: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 004abc7c: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004abc80: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 004abc83: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 004abc87: call 0x4ab9b4 */ r_esp -= 4; W32(r_esp, 0x4abc8cu); f_004ab9b4();
    /* 004abc8c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004abc8e: je 0x4abc93 */ if (fZ) goto L_004abc93;
L_004abc90:; BB(0x004abc90);
    /* 004abc90: or dword ptr [ebx], 0x10 */ { u32 ad = (u32)(r_ebx);  u32 a = R32(ad); u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_004abc93:; BB(0x004abc93);
    /* 004abc93: mov ebx, dword ptr [ebx + 0x30] */ r_ebx = R32((u32)(r_ebx+0x30u));
    /* 004abc96: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004abc98: jne 0x4abc72 */ if (!fZ) goto L_004abc72;
L_004abc9a:; BB(0x004abc9a);
    /* 004abc9a: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
L_004abc9e:; BB(0x004abc9e);
    /* 004abc9e: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004abca1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004abca2: ret 8 */ FN_RET(0x004abc3c); r_esp += 12; return;
L_004abca5:; BB(0x004abca5);
    /* 004abca5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004abca7: jmp 0x4abc9e */ goto L_004abc9e;
}

void f_004abcac(void) /* sub_4ABCAC */
{
    FN_ENTER(0x004abcac);
    /* 004abcac: mov eax, dword ptr [0xa47714] */ r_eax = R32((u32)(0xa47714u));
    /* 004abcb1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004abcb3: je 0x4abce3 */ if (fZ) goto L_004abce3;
L_004abcb5:; BB(0x004abcb5);
    /* 004abcb5: mov eax, dword ptr [eax + 0x42c] */ r_eax = R32((u32)(r_eax+0x42cu));
    /* 004abcbb: mov edx, dword ptr [eax + 0x78] */ r_edx = R32((u32)(r_eax+0x78u));
    /* 004abcbe: mov eax, dword ptr [eax + 0x68] */ r_eax = R32((u32)(r_eax+0x68u));
    /* 004abcc1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004abcc3: je 0x4abce3 */ if (fZ) goto L_004abce3;
L_004abcc5:; BB(0x004abcc5);
    /* 004abcc5: and dword ptr [edx], 0xffffffef */ { u32 ad = (u32)(r_edx);  u32 a = R32(ad); u32 b = 0xffffffefu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 004abcc8: mov edx, dword ptr [edx + 0x2c] */ r_edx = R32((u32)(r_edx+0x2cu));
    /* 004abccb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004abccd: je 0x4abce3 */ if (fZ) goto L_004abce3;
L_004abccf:; BB(0x004abccf);
    /* 004abccf: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 004abcd2: and dword ptr [edx], 0xffffffef */ { u32 ad = (u32)(r_edx);  u32 a = R32(ad); u32 b = 0xffffffefu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 004abcd5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004abcd7: jne 0x4abcdc */ if (!fZ) goto L_004abcdc;
L_004abcd9:; BB(0x004abcd9);
    /* 004abcd9: mov dword ptr [edx + 0x2c], eax */ W32((u32)(r_edx+0x2cu), r_eax);
L_004abcdc:; BB(0x004abcdc);
    /* 004abcdc: mov edx, dword ptr [edx + 0x30] */ r_edx = R32((u32)(r_edx+0x30u));
    /* 004abcdf: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004abce1: jne 0x4abccf */ if (!fZ) goto L_004abccf;
L_004abce3:; BB(0x004abce3);
    /* 004abce3: ret  */ FN_RET(0x004abcac); r_esp += 4; return;
}

void f_004abce4(void) /* sub_4ABCE4 */
{
    FN_ENTER(0x004abce4);
    /* 004abce4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004abce5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004abce7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004abce9: call 0x4abd08 */ r_esp -= 4; W32(r_esp, 0x4abceeu); f_004abd08();
    /* 004abcee: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004abcf2: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004abcf4: jne 0x4abcfa */ if (!fZ) goto L_004abcfa;
L_004abcf6:; BB(0x004abcf6);
    /* 004abcf6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004abcf7: ret 4 */ FN_RET(0x004abce4); r_esp += 8; return;
L_004abcfa:; BB(0x004abcfa);
    /* 004abcfa: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004abcfb: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4abd00u); f_005c2f74();
    /* 004abd00: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004abd01: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004abd02: ret 4 */ FN_RET(0x004abce4); r_esp += 8; return;
}

void f_004abd08(void) /* sub_4ABD08 */
{
    FN_ENTER(0x004abd08);
    /* 004abd08: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004abd09: mov ebp, esp */ r_ebp = r_esp;
    /* 004abd0b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004abd0d: push 0x8d08b8 */ { u32 v = 0x8d08b8u; r_esp -= 4; W32(r_esp, v); }
    /* 004abd12: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004abd18: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004abd19: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004abd20: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004abd23: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004abd26: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004abd29: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004abd2c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004abd2f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004abd32: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004abd35: mov dword ptr [ecx], 0xafa428 */ W32((u32)(r_ecx), 0xafa428u);
    /* 004abd3b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004abd42: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x4abd47u); f_008171e8();
    /* 004abd47: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004abd4a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004abd51: mov esp, ebp */ r_esp = r_ebp;
    /* 004abd53: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004abd54: ret  */ FN_RET(0x004abd08); r_esp += 4; return;
}

void f_004abd58(void) /* sub_4ABD58 */
{
    FN_ENTER(0x004abd58);
    /* 004abd58: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004abd59: mov ebp, esp */ r_ebp = r_esp;
    /* 004abd5b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004abd5d: push 0x8d08e0 */ { u32 v = 0x8d08e0u; r_esp -= 4; W32(r_esp, v); }
    /* 004abd62: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004abd68: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004abd69: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004abd70: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004abd73: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004abd76: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004abd79: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004abd7c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004abd7f: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 004abd81: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 004abd88: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4abd8du); f_005caba4();
    /* 004abd8d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004abd8e: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004abd91: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004abd93: je 0x4abdc9 */ if (fZ) goto L_004abdc9;
L_004abd95:; BB(0x004abd95);
    /* 004abd95: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 004abd9c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004abda3: push dword ptr [0xaca378] */ { u32 v = R32((u32)(0xaca378u)); r_esp -= 4; W32(r_esp, v); }
    /* 004abda9: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004abdac: call 0x4abdd0 */ r_esp -= 4; W32(r_esp, 0x4abdb1u); f_004abdd0();
    /* 004abdb1: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004abdb4: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_004abdbb:; BB(0x004abdbb);
    /* 004abdbb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004abdbe: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004abdc5: mov esp, ebp */ r_esp = r_ebp;
    /* 004abdc7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004abdc8: ret  */ FN_RET(0x004abd58); r_esp += 4; return;
L_004abdc9:; BB(0x004abdc9);
    /* 004abdc9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004abdcb: jmp 0x4abdbb */ goto L_004abdbb;
}

void f_004abdd0(void) /* sub_4ABDD0 */
{
    FN_ENTER(0x004abdd0);
    /* 004abdd0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004abdd1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004abdd3: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004abdd7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004abdd9: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x4abddeu); f_008193cc();
    /* 004abdde: mov dword ptr [ebx], 0xafa428 */ W32((u32)(r_ebx), 0xafa428u);
    /* 004abde4: mov edx, dword ptr [0x9ab8f4] */ r_edx = R32((u32)(0x9ab8f4u));
    /* 004abdea: mov dword ptr [ebx + 4], edx */ W32((u32)(r_ebx+0x4u), r_edx);
    /* 004abded: mov eax, ebx */ r_eax = r_ebx;
    /* 004abdef: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004abdf0: ret 4 */ FN_RET(0x004abdd0); r_esp += 8; return;
}

void f_004abdf4(void) /* sub_4ABDF4 */
{
    FN_ENTER(0x004abdf4);
    /* 004abdf4: call 0x67e408 */ r_esp -= 4; W32(r_esp, 0x4abdf9u); f_0067e408();
    /* 004abdf9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004abdfb: je 0x4abdfe */ if (fZ) goto L_004abdfe;
L_004abdfd:; BB(0x004abdfd);
    /* 004abdfd: ret  */ FN_RET(0x004abdf4); r_esp += 4; return;
L_004abdfe:; BB(0x004abdfe);
    /* 004abdfe: mov eax, dword ptr [0xa47714] */ r_eax = R32((u32)(0xa47714u));
    /* 004abe03: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 004abe09: push dword ptr [edx + 0x58] */ { u32 v = R32((u32)(r_edx+0x58u)); r_esp -= 4; W32(r_esp, v); }
    /* 004abe0c: push dword ptr [0xa47710] */ { u32 v = R32((u32)(0xa47710u)); r_esp -= 4; W32(r_esp, v); }
    /* 004abe12: call 0x4ab9e0 */ r_esp -= 4; W32(r_esp, 0x4abe17u); f_004ab9e0();
    /* 004abe17: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004abe1a: ret  */ FN_RET(0x004abdf4); r_esp += 4; return;
}

void f_004abe1c(void) /* sub_4ABE1C */
{
    FN_ENTER(0x004abe1c);
    /* 004abe1c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004abe1d: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004abe20: mov eax, dword ptr [0xa47714] */ r_eax = R32((u32)(0xa47714u));
    /* 004abe25: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 004abe2b: mov ebx, dword ptr [edx + 0x58] */ r_ebx = R32((u32)(r_edx+0x58u));
    /* 004abe2e: push 0x42480000 */ { u32 v = 0x42480000u; r_esp -= 4; W32(r_esp, v); }
    /* 004abe33: push dword ptr [esp + 0x30] */ { u32 v = R32((u32)(r_esp+0x30u)); r_esp -= 4; W32(r_esp, v); }
    /* 004abe37: call 0x4ab9a4 */ r_esp -= 4; W32(r_esp, 0x4abe3cu); f_004ab9a4();
    /* 004abe3c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004abe3f: mov ebx, dword ptr [ebx + 0x2c] */ r_ebx = R32((u32)(r_ebx+0x2cu));
    /* 004abe42: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004abe44: je 0x4abeb1 */ if (fZ) goto L_004abeb1;
L_004abe46:; BB(0x004abe46);
    /* 004abe46: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 004abe4a: mov dword ptr [esp + 0x18], esi */ W32((u32)(r_esp+0x18u), r_esi);
    /* 004abe4e: mov esi, dword ptr [esp + 0x28] */ r_esi = R32((u32)(r_esp+0x28u));
L_004abe52:; BB(0x004abe52);
    /* 004abe52: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 004abe54: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004abe56: jne 0x4abe9f */ if (!fZ) goto L_004abe9f;
L_004abe58:; BB(0x004abe58);
    /* 004abe58: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 004abe5c: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004abe60: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 004abe63: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 004abe67: call 0x4ab9b4 */ r_esp -= 4; W32(r_esp, 0x4abe6cu); f_004ab9b4();
    /* 004abe6c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004abe6e: je 0x4abe9f */ if (fZ) goto L_004abe9f;
L_004abe70:; BB(0x004abe70);
    /* 004abe70: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 004abe73: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 004abe77: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 004abe7b: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 004abe7e: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 004abe82: mov ecx, dword ptr [ebx + 0x10] */ r_ecx = R32((u32)(r_ebx+0x10u));
    /* 004abe85: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 004abe89: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004abe8a: call 0x4a0d38 */ r_esp -= 4; W32(r_esp, 0x4abe8fu); f_004a0d38();
    /* 004abe8f: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 004abe93: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004abe94: call 0x4a8750 */ r_esp -= 4; W32(r_esp, 0x4abe99u); f_004a8750();
    /* 004abe99: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004abe9c: or dword ptr [ebx], 8 */ { u32 ad = (u32)(r_ebx);  u32 a = R32(ad); u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_004abe9f:; BB(0x004abe9f);
    /* 004abe9f: mov ebx, dword ptr [ebx + 0x30] */ r_ebx = R32((u32)(r_ebx+0x30u));
    /* 004abea2: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004abea4: jne 0x4abe52 */ if (!fZ) goto L_004abe52;
L_004abea6:; BB(0x004abea6);
    /* 004abea6: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
L_004abeaa:; BB(0x004abeaa);
    /* 004abeaa: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004abead: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004abeae: ret 8 */ FN_RET(0x004abe1c); r_esp += 12; return;
L_004abeb1:; BB(0x004abeb1);
    /* 004abeb1: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004abeb3: jmp 0x4abeaa */ goto L_004abeaa;
}

void f_004abeb8(void) /* sub_4ABEB8 */
{
    FN_ENTER(0x004abeb8);
    /* 004abeb8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004abeb9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004abebb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004abebd: call 0x4abedc */ r_esp -= 4; W32(r_esp, 0x4abec2u); f_004abedc();
    /* 004abec2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004abec6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004abec8: jne 0x4abece */ if (!fZ) goto L_004abece;
L_004abeca:; BB(0x004abeca);
    /* 004abeca: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004abecb: ret 4 */ FN_RET(0x004abeb8); r_esp += 8; return;
L_004abece:; BB(0x004abece);
    /* 004abece: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004abecf: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4abed4u); f_005c2f74();
    /* 004abed4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004abed5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004abed6: ret 4 */ FN_RET(0x004abeb8); r_esp += 8; return;
}

void f_004abedc(void) /* sub_4ABEDC */
{
    FN_ENTER(0x004abedc);
    /* 004abedc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004abedd: mov ebp, esp */ r_ebp = r_esp;
    /* 004abedf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004abee1: push 0x8d08fc */ { u32 v = 0x8d08fcu; r_esp -= 4; W32(r_esp, v); }
    /* 004abee6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004abeec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004abeed: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004abef4: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004abef7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004abefa: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004abefd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004abf00: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004abf03: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004abf06: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004abf09: mov edx, dword ptr [ecx + 0x48] */ r_edx = R32((u32)(r_ecx+0x48u));
    /* 004abf0c: mov dword ptr [ecx], 0xafa488 */ W32((u32)(r_ecx), 0xafa488u);
    /* 004abf12: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004abf14: je 0x4abf2d */ if (fZ) goto L_004abf2d;
L_004abf16:; BB(0x004abf16);
    /* 004abf16: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004abf19: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004abf1d: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004abf22: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004abf26: mov dword ptr [ecx + 0x48], 0 */ W32((u32)(r_ecx+0x48u), 0x0u);
L_004abf2d:; BB(0x004abf2d);
    /* 004abf2d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004abf34: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x4abf39u); f_008171e8();
    /* 004abf39: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004abf3c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004abf43: mov esp, ebp */ r_esp = r_ebp;
    /* 004abf45: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004abf46: ret  */ FN_RET(0x004abedc); r_esp += 4; return;
}

void f_004abf48(void) /* sub_4ABF48 */
{
    FN_ENTER(0x004abf48);
    /* 004abf48: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004abf49: mov ebp, esp */ r_ebp = r_esp;
    /* 004abf4b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004abf4d: push 0x8d0924 */ { u32 v = 0x8d0924u; r_esp -= 4; W32(r_esp, v); }
    /* 004abf52: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004abf58: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004abf59: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004abf60: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004abf63: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004abf66: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004abf69: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004abf6c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004abf6f: push 0x4c */ { u32 v = 0x4cu; r_esp -= 4; W32(r_esp, v); }
    /* 004abf71: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 004abf78: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4abf7du); f_005caba4();
    /* 004abf7d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004abf7e: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004abf81: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004abf83: je 0x4abfbc */ if (fZ) goto L_004abfbc;
L_004abf85:; BB(0x004abf85);
    /* 004abf85: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 004abf8c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004abf93: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004abf96: push dword ptr [0xaca378] */ { u32 v = R32((u32)(0xaca378u)); r_esp -= 4; W32(r_esp, v); }
    /* 004abf9c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004abf9f: call 0x4abfc0 */ r_esp -= 4; W32(r_esp, 0x4abfa4u); f_004abfc0();
    /* 004abfa4: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004abfa7: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_004abfae:; BB(0x004abfae);
    /* 004abfae: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004abfb1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004abfb8: mov esp, ebp */ r_esp = r_ebp;
    /* 004abfba: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004abfbb: ret  */ FN_RET(0x004abf48); r_esp += 4; return;
L_004abfbc:; BB(0x004abfbc);
    /* 004abfbc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004abfbe: jmp 0x4abfae */ goto L_004abfae;
}

void f_004abfc0(void) /* sub_4ABFC0 */
{
    FN_ENTER(0x004abfc0);
    /* 004abfc0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004abfc1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004abfc2: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004abfc4: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 004abfc8: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 004abfcc: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004abfce: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x4abfd3u); f_008193cc();
    /* 004abfd3: mov dword ptr [ebx], 0xafa488 */ W32((u32)(r_ebx), 0xafa488u);
    /* 004abfd9: mov eax, dword ptr [0x9ab8f8] */ r_eax = R32((u32)(0x9ab8f8u));
    /* 004abfde: mov edx, dword ptr [0xa47714] */ r_edx = R32((u32)(0xa47714u));
    /* 004abfe4: mov dword ptr [ebx + 4], eax */ W32((u32)(r_ebx+0x4u), r_eax);
    /* 004abfe7: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 004abfe9: mov dword ptr [ebx + 0x2c], eax */ W32((u32)(r_ebx+0x2cu), r_eax);
    /* 004abfec: mov eax, dword ptr [edi + 4] */ r_eax = R32((u32)(r_edi+0x4u));
    /* 004abfef: mov dword ptr [ebx + 0x30], eax */ W32((u32)(r_ebx+0x30u), r_eax);
    /* 004abff2: mov edi, dword ptr [edi + 8] */ r_edi = R32((u32)(r_edi+0x8u));
    /* 004abff5: mov dword ptr [ebx + 0x20], 0 */ W32((u32)(r_ebx+0x20u), 0x0u);
    /* 004abffc: mov dword ptr [ebx + 0x34], edi */ W32((u32)(r_ebx+0x34u), r_edi);
    /* 004abfff: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ac001: mov dword ptr [ebx + 0x1c], eax */ W32((u32)(r_ebx+0x1cu), r_eax);
    /* 004ac004: mov dword ptr [ebx + 0x24], 0x3f800000 */ W32((u32)(r_ebx+0x24u), 0x3f800000u);
    /* 004ac00b: mov dword ptr [ebx + 0x28], eax */ W32((u32)(r_ebx+0x28u), r_eax);
    /* 004ac00e: mov dword ptr [ebx + 0x48], eax */ W32((u32)(r_ebx+0x48u), r_eax);
    /* 004ac011: mov eax, dword ptr [edx + 0x42c] */ r_eax = R32((u32)(r_edx+0x42cu));
    /* 004ac017: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 004ac01a: mov dword ptr [ebx + 0x38], eax */ W32((u32)(r_ebx+0x38u), r_eax);
    /* 004ac01d: mov eax, dword ptr [edx + 0x42c] */ r_eax = R32((u32)(r_edx+0x42cu));
    /* 004ac023: mov eax, dword ptr [eax + 0x18] */ r_eax = R32((u32)(r_eax+0x18u));
    /* 004ac026: mov dword ptr [ebx + 0x3c], eax */ W32((u32)(r_ebx+0x3cu), r_eax);
    /* 004ac029: mov eax, dword ptr [edx + 0x430] */ r_eax = R32((u32)(r_edx+0x430u));
    /* 004ac02f: mov eax, dword ptr [eax + 0x14] */ r_eax = R32((u32)(r_eax+0x14u));
    /* 004ac032: mov dword ptr [ebx + 0x40], eax */ W32((u32)(r_ebx+0x40u), r_eax);
    /* 004ac035: mov eax, dword ptr [edx + 0x430] */ r_eax = R32((u32)(r_edx+0x430u));
    /* 004ac03b: mov eax, dword ptr [eax + 0x1c] */ r_eax = R32((u32)(r_eax+0x1cu));
    /* 004ac03e: mov dword ptr [ebx + 0x44], eax */ W32((u32)(r_ebx+0x44u), r_eax);
    /* 004ac041: mov eax, ebx */ r_eax = r_ebx;
    /* 004ac043: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004ac044: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004ac045: ret 8 */ FN_RET(0x004abfc0); r_esp += 12; return;
}

