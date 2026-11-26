#include "protos.h"

void f_004f0043(void)
{
    FN_ENTER(0x004f0043);
    goto L_004f0043;
L_004eff59:; BB(0x004eff59);
    /* 004eff59: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 004eff5d: mov eax, dword ptr [esi + 0x24] */ r_eax = R32((u32)(r_esi+0x24u));
    /* 004eff60: mov edx, dword ptr [eax + edi*4] */ r_edx = R32((u32)(r_eax+r_edi*4));
    /* 004eff63: lea ebx, [edi + edi] */ r_ebx = (u32)(r_edi+r_edi);
    /* 004eff66: cmp edx, 9 */ {  u32 a = r_edx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004eff69: je 0x4f0069 */ if (fZ) goto L_004f0069;
L_004eff6f:; BB(0x004eff6f);
    /* 004eff6f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004eff71: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
L_004eff75:; BB(0x004eff75);
    /* 004eff75: call 0x4e9398 */ r_esp -= 4; W32(r_esp, 0x4eff7au); f_004e9398();
    /* 004eff7a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004eff7c: je 0x4effe3 */ if (fZ) goto L_004effe3;
L_004eff7e:; BB(0x004eff7e);
    /* 004eff7e: cmp edi, dword ptr [esi + 0x2c] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esi+0x2cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004eff81: jne 0x4effe3 */ if (!fZ) goto L_004effe3;
L_004eff83:; BB(0x004eff83);
    /* 004eff83: mov ecx, dword ptr [esi + 0x34] */ r_ecx = R32((u32)(r_esi+0x34u));
    /* 004eff86: shl ecx, 0xa */ { u32 c = (10u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 004eff89: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x4eff8eu); f_0082dcbc();
    /* 004eff8e: fmul dword ptr [0x91dc94] */ ST(0) = ST(0) * R_F32((u32)(0x91dc94u));
    /* 004eff94: fld dword ptr [0x91e190] */ FPUSH(R_F32((u32)(0x91e190u)));
    /* 004eff9a: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 004eff9c: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004eff9e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004effa0: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004effa1: jae 0x4effa5 */ if (!fC) goto L_004effa5;
L_004effa3:; BB(0x004effa3);
    /* 004effa3: fst st(1) */ ST(1) = ST(0);
L_004effa5:; BB(0x004effa5);
    /* 004effa5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004effa7: fmul dword ptr [esp + 0x38] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x38u));
    /* 004effab: mov edx, dword ptr [esp + 0x44] */ r_edx = R32((u32)(r_esp+0x44u));
    /* 004effaf: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004effb1: je 0x4effb9 */ if (fZ) goto L_004effb9;
L_004effb3:; BB(0x004effb3);
    /* 004effb3: fmul dword ptr [0x91dc90] */ ST(0) = ST(0) * R_F32((u32)(0x91dc90u));
L_004effb9:; BB(0x004effb9);
    /* 004effb9: mov eax, dword ptr [esi + 0x24] */ r_eax = R32((u32)(r_esi+0x24u));
    /* 004effbc: mov edx, dword ptr [eax + ebx*2] */ r_edx = R32((u32)(r_eax+r_ebx*2));
    /* 004effbf: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 004effc3: add edx, 0x93 */ {  u32 a = r_edx; u32 b = 0x93u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004effc9: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 004effcc: mov dword ptr [esp + 4], 0xbfe80000 */ W32((u32)(r_esp+0x4u), 0xbfe80000u);
    /* 004effd4: lea ebx, [esp + 0x28] */ r_ebx = (u32)(r_esp+0x28u);
    /* 004effd8: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 004effdc: call 0x4e9ef8 */ r_esp -= 4; W32(r_esp, 0x4effe1u); f_004e9ef8();
    /* 004effe1: jmp 0x4f004a */ goto L_004f004a;
L_004effe3:; BB(0x004effe3);
    /* 004effe3: movzx eax, byte ptr [0xa72354] */ r_eax = (u32)R8((u32)(0xa72354u));
    /* 004effea: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004effec: jne 0x4f000a */ if (!fZ) goto L_004f000a;
L_004effee:; BB(0x004effee);
    /* 004effee: fld dword ptr [0x91e180] */ FPUSH(R_F32((u32)(0x91e180u)));
    /* 004efff4: mov dword ptr [0xa72370], 0x3f19999a */ W32((u32)(0xa72370u), 0x3f19999au);
    /* 004efffe: or eax, 0xffffff40 */ {  u32 a = r_eax; u32 b = 0xffffff40u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f0003: mov byte ptr [0xa72354], al */ W8((u32)(0xa72354u), (u8)r_eax);
    /* 004f0008: jmp 0x4f0010 */ goto L_004f0010;
L_004f000a:; BB(0x004f000a);
    /* 004f000a: fld dword ptr [0xa72370] */ FPUSH(R_F32((u32)(0xa72370u)));
L_004f0010:; BB(0x004f0010);
    /* 004f0010: fmul dword ptr [esp + 0x38] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x38u));
    /* 004f0014: mov eax, dword ptr [esp + 0x44] */ r_eax = R32((u32)(r_esp+0x44u));
    /* 004f0018: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f001a: je 0x4f0022 */ if (fZ) goto L_004f0022;
L_004f001c:; BB(0x004f001c);
    /* 004f001c: fmul dword ptr [0x91dc90] */ ST(0) = ST(0) * R_F32((u32)(0x91dc90u));
L_004f0022:; BB(0x004f0022);
    /* 004f0022: mov eax, dword ptr [esi + 0x24] */ r_eax = R32((u32)(r_esi+0x24u));
    /* 004f0025: mov edx, dword ptr [eax + ebx*2] */ r_edx = R32((u32)(r_eax+r_ebx*2));
    /* 004f0028: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 004f002c: add edx, 0x93 */ {  u32 a = r_edx; u32 b = 0x93u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f0032: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 004f0035: mov dword ptr [esp + 4], 0xbfe80000 */ W32((u32)(r_esp+0x4u), 0xbfe80000u);
    /* 004f003d: lea ebx, [esp + 0x28] */ r_ebx = (u32)(r_esp+0x28u);
    /* 004f0041: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
L_004f0043:; BB(0x004f0043);
    /* 004f0043: and al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 004f0045: call 0x4e9ef8 */ r_esp -= 4; W32(r_esp, 0x4f004au); f_004e9ef8();
L_004f004a:; BB(0x004f004a);
    /* 004f004a: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 004f004e: fadd dword ptr [0x91dc8c] */ ST(0) = ST(0) + R_F32((u32)(0x91dc8cu));
    /* 004f0054: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004f0057: cmp edi, dword ptr [esi + 0x28] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esi+0x28u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f005a: jl 0x4eff59 */ if ((fS!=fO)) goto L_004eff59;
L_004f0060:; BB(0x004f0060);
    /* 004f0060: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004f0062: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004f0065: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004f0066: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004f0067: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004f0068: ret  */ FN_RET(0x004f0043); r_esp += 4; return;
L_004f0069:; BB(0x004f0069);
    /* 004f0069: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 004f006c: add eax, 0x50 */ {  u32 a = r_eax; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f006f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f0070: call 0x4e732c */ r_esp -= 4; W32(r_esp, 0x4f0075u); f_004e732c();
    /* 004f0075: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f0076: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f0078: mov eax, 0 */ r_eax = 0x0u;
    /* 004f007d: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 004f0080: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 004f0084: jmp 0x4eff75 */ goto L_004eff75;
}

void f_004f0044(void)
{
    FN_ENTER(0x004f0044);
    /* 004f0044: or al, ch */ {  u32 a = (u8)r_eax; u32 b = (u8)(r_ecx>>8); u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004f0046: scasb al, byte ptr es:[edi] */ { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_edi += rt_df ? -1 : 1;  }
    /* 004f0047: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    UNSUP(0x004f0048, "falls out of decoded code");
}

void f_004f0046(void)
{
    FN_ENTER(0x004f0046);
    /* 004f0046: scasb al, byte ptr es:[edi] */ { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_edi += rt_df ? -1 : 1;  }
    /* 004f0047: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    UNSUP(0x004f0048, "falls out of decoded code");
}

void f_004f0048(void)
{
    FN_ENTER(0x004f0048);
}

void f_004f0049(void)
{
    FN_ENTER(0x004f0049);
}

void f_004f004b(void)
{
    FN_ENTER(0x004f004b);
    goto L_004f004b;
L_004eff59:; BB(0x004eff59);
    /* 004eff59: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 004eff5d: mov eax, dword ptr [esi + 0x24] */ r_eax = R32((u32)(r_esi+0x24u));
    /* 004eff60: mov edx, dword ptr [eax + edi*4] */ r_edx = R32((u32)(r_eax+r_edi*4));
    /* 004eff63: lea ebx, [edi + edi] */ r_ebx = (u32)(r_edi+r_edi);
    /* 004eff66: cmp edx, 9 */ {  u32 a = r_edx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004eff69: je 0x4f0069 */ if (fZ) goto L_004f0069;
L_004eff6f:; BB(0x004eff6f);
    /* 004eff6f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004eff71: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
L_004eff75:; BB(0x004eff75);
    /* 004eff75: call 0x4e9398 */ r_esp -= 4; W32(r_esp, 0x4eff7au); f_004e9398();
    /* 004eff7a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004eff7c: je 0x4effe3 */ if (fZ) goto L_004effe3;
L_004eff7e:; BB(0x004eff7e);
    /* 004eff7e: cmp edi, dword ptr [esi + 0x2c] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esi+0x2cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004eff81: jne 0x4effe3 */ if (!fZ) goto L_004effe3;
L_004eff83:; BB(0x004eff83);
    /* 004eff83: mov ecx, dword ptr [esi + 0x34] */ r_ecx = R32((u32)(r_esi+0x34u));
    /* 004eff86: shl ecx, 0xa */ { u32 c = (10u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 004eff89: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x4eff8eu); f_0082dcbc();
    /* 004eff8e: fmul dword ptr [0x91dc94] */ ST(0) = ST(0) * R_F32((u32)(0x91dc94u));
    /* 004eff94: fld dword ptr [0x91e190] */ FPUSH(R_F32((u32)(0x91e190u)));
    /* 004eff9a: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 004eff9c: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004eff9e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004effa0: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004effa1: jae 0x4effa5 */ if (!fC) goto L_004effa5;
L_004effa3:; BB(0x004effa3);
    /* 004effa3: fst st(1) */ ST(1) = ST(0);
L_004effa5:; BB(0x004effa5);
    /* 004effa5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004effa7: fmul dword ptr [esp + 0x38] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x38u));
    /* 004effab: mov edx, dword ptr [esp + 0x44] */ r_edx = R32((u32)(r_esp+0x44u));
    /* 004effaf: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004effb1: je 0x4effb9 */ if (fZ) goto L_004effb9;
L_004effb3:; BB(0x004effb3);
    /* 004effb3: fmul dword ptr [0x91dc90] */ ST(0) = ST(0) * R_F32((u32)(0x91dc90u));
L_004effb9:; BB(0x004effb9);
    /* 004effb9: mov eax, dword ptr [esi + 0x24] */ r_eax = R32((u32)(r_esi+0x24u));
    /* 004effbc: mov edx, dword ptr [eax + ebx*2] */ r_edx = R32((u32)(r_eax+r_ebx*2));
    /* 004effbf: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 004effc3: add edx, 0x93 */ {  u32 a = r_edx; u32 b = 0x93u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004effc9: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 004effcc: mov dword ptr [esp + 4], 0xbfe80000 */ W32((u32)(r_esp+0x4u), 0xbfe80000u);
    /* 004effd4: lea ebx, [esp + 0x28] */ r_ebx = (u32)(r_esp+0x28u);
    /* 004effd8: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 004effdc: call 0x4e9ef8 */ r_esp -= 4; W32(r_esp, 0x4effe1u); f_004e9ef8();
    /* 004effe1: jmp 0x4f004a */ goto L_004f004a;
L_004effe3:; BB(0x004effe3);
    /* 004effe3: movzx eax, byte ptr [0xa72354] */ r_eax = (u32)R8((u32)(0xa72354u));
    /* 004effea: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004effec: jne 0x4f000a */ if (!fZ) goto L_004f000a;
L_004effee:; BB(0x004effee);
    /* 004effee: fld dword ptr [0x91e180] */ FPUSH(R_F32((u32)(0x91e180u)));
    /* 004efff4: mov dword ptr [0xa72370], 0x3f19999a */ W32((u32)(0xa72370u), 0x3f19999au);
    /* 004efffe: or eax, 0xffffff40 */ {  u32 a = r_eax; u32 b = 0xffffff40u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f0003: mov byte ptr [0xa72354], al */ W8((u32)(0xa72354u), (u8)r_eax);
    /* 004f0008: jmp 0x4f0010 */ goto L_004f0010;
L_004f000a:; BB(0x004f000a);
    /* 004f000a: fld dword ptr [0xa72370] */ FPUSH(R_F32((u32)(0xa72370u)));
L_004f0010:; BB(0x004f0010);
    /* 004f0010: fmul dword ptr [esp + 0x38] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x38u));
    /* 004f0014: mov eax, dword ptr [esp + 0x44] */ r_eax = R32((u32)(r_esp+0x44u));
    /* 004f0018: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f001a: je 0x4f0022 */ if (fZ) goto L_004f0022;
L_004f001c:; BB(0x004f001c);
    /* 004f001c: fmul dword ptr [0x91dc90] */ ST(0) = ST(0) * R_F32((u32)(0x91dc90u));
L_004f0022:; BB(0x004f0022);
    /* 004f0022: mov eax, dword ptr [esi + 0x24] */ r_eax = R32((u32)(r_esi+0x24u));
    /* 004f0025: mov edx, dword ptr [eax + ebx*2] */ r_edx = R32((u32)(r_eax+r_ebx*2));
    /* 004f0028: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 004f002c: add edx, 0x93 */ {  u32 a = r_edx; u32 b = 0x93u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f0032: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 004f0035: mov dword ptr [esp + 4], 0xbfe80000 */ W32((u32)(r_esp+0x4u), 0xbfe80000u);
    /* 004f003d: lea ebx, [esp + 0x28] */ r_ebx = (u32)(r_esp+0x28u);
    /* 004f0041: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 004f0045: call 0x4e9ef8 */ r_esp -= 4; W32(r_esp, 0x4f004au); f_004e9ef8();
L_004f004a:; BB(0x004f004a);
    /* 004f004a: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
L_004f004b:; BB(0x004f004b);
    /* 004f004b: inc esp */ { u32 x = r_esp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f004c: and al, 0x2c */ {  u32 a = (u8)r_eax; u32 b = 0x2cu; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 004f004e: fadd dword ptr [0x91dc8c] */ ST(0) = ST(0) + R_F32((u32)(0x91dc8cu));
    /* 004f0054: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004f0057: cmp edi, dword ptr [esi + 0x28] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esi+0x28u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f005a: jl 0x4eff59 */ if ((fS!=fO)) goto L_004eff59;
L_004f0060:; BB(0x004f0060);
    /* 004f0060: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004f0062: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004f0065: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004f0066: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004f0067: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004f0068: ret  */ FN_RET(0x004f004b); r_esp += 4; return;
L_004f0069:; BB(0x004f0069);
    /* 004f0069: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 004f006c: add eax, 0x50 */ {  u32 a = r_eax; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f006f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f0070: call 0x4e732c */ r_esp -= 4; W32(r_esp, 0x4f0075u); f_004e732c();
    /* 004f0075: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f0076: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f0078: mov eax, 0 */ r_eax = 0x0u;
    /* 004f007d: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 004f0080: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 004f0084: jmp 0x4eff75 */ goto L_004eff75;
}

void f_004f004c(void)
{
    FN_ENTER(0x004f004c);
    goto L_004f004c;
L_004eff59:; BB(0x004eff59);
    /* 004eff59: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 004eff5d: mov eax, dword ptr [esi + 0x24] */ r_eax = R32((u32)(r_esi+0x24u));
    /* 004eff60: mov edx, dword ptr [eax + edi*4] */ r_edx = R32((u32)(r_eax+r_edi*4));
    /* 004eff63: lea ebx, [edi + edi] */ r_ebx = (u32)(r_edi+r_edi);
    /* 004eff66: cmp edx, 9 */ {  u32 a = r_edx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004eff69: je 0x4f0069 */ if (fZ) goto L_004f0069;
L_004eff6f:; BB(0x004eff6f);
    /* 004eff6f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004eff71: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
L_004eff75:; BB(0x004eff75);
    /* 004eff75: call 0x4e9398 */ r_esp -= 4; W32(r_esp, 0x4eff7au); f_004e9398();
    /* 004eff7a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004eff7c: je 0x4effe3 */ if (fZ) goto L_004effe3;
L_004eff7e:; BB(0x004eff7e);
    /* 004eff7e: cmp edi, dword ptr [esi + 0x2c] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esi+0x2cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004eff81: jne 0x4effe3 */ if (!fZ) goto L_004effe3;
L_004eff83:; BB(0x004eff83);
    /* 004eff83: mov ecx, dword ptr [esi + 0x34] */ r_ecx = R32((u32)(r_esi+0x34u));
    /* 004eff86: shl ecx, 0xa */ { u32 c = (10u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 004eff89: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x4eff8eu); f_0082dcbc();
    /* 004eff8e: fmul dword ptr [0x91dc94] */ ST(0) = ST(0) * R_F32((u32)(0x91dc94u));
    /* 004eff94: fld dword ptr [0x91e190] */ FPUSH(R_F32((u32)(0x91e190u)));
    /* 004eff9a: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 004eff9c: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004eff9e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004effa0: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004effa1: jae 0x4effa5 */ if (!fC) goto L_004effa5;
L_004effa3:; BB(0x004effa3);
    /* 004effa3: fst st(1) */ ST(1) = ST(0);
L_004effa5:; BB(0x004effa5);
    /* 004effa5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004effa7: fmul dword ptr [esp + 0x38] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x38u));
    /* 004effab: mov edx, dword ptr [esp + 0x44] */ r_edx = R32((u32)(r_esp+0x44u));
    /* 004effaf: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004effb1: je 0x4effb9 */ if (fZ) goto L_004effb9;
L_004effb3:; BB(0x004effb3);
    /* 004effb3: fmul dword ptr [0x91dc90] */ ST(0) = ST(0) * R_F32((u32)(0x91dc90u));
L_004effb9:; BB(0x004effb9);
    /* 004effb9: mov eax, dword ptr [esi + 0x24] */ r_eax = R32((u32)(r_esi+0x24u));
    /* 004effbc: mov edx, dword ptr [eax + ebx*2] */ r_edx = R32((u32)(r_eax+r_ebx*2));
    /* 004effbf: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 004effc3: add edx, 0x93 */ {  u32 a = r_edx; u32 b = 0x93u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004effc9: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 004effcc: mov dword ptr [esp + 4], 0xbfe80000 */ W32((u32)(r_esp+0x4u), 0xbfe80000u);
    /* 004effd4: lea ebx, [esp + 0x28] */ r_ebx = (u32)(r_esp+0x28u);
    /* 004effd8: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 004effdc: call 0x4e9ef8 */ r_esp -= 4; W32(r_esp, 0x4effe1u); f_004e9ef8();
    /* 004effe1: jmp 0x4f004a */ goto L_004f004a;
L_004effe3:; BB(0x004effe3);
    /* 004effe3: movzx eax, byte ptr [0xa72354] */ r_eax = (u32)R8((u32)(0xa72354u));
    /* 004effea: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004effec: jne 0x4f000a */ if (!fZ) goto L_004f000a;
L_004effee:; BB(0x004effee);
    /* 004effee: fld dword ptr [0x91e180] */ FPUSH(R_F32((u32)(0x91e180u)));
    /* 004efff4: mov dword ptr [0xa72370], 0x3f19999a */ W32((u32)(0xa72370u), 0x3f19999au);
    /* 004efffe: or eax, 0xffffff40 */ {  u32 a = r_eax; u32 b = 0xffffff40u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f0003: mov byte ptr [0xa72354], al */ W8((u32)(0xa72354u), (u8)r_eax);
    /* 004f0008: jmp 0x4f0010 */ goto L_004f0010;
L_004f000a:; BB(0x004f000a);
    /* 004f000a: fld dword ptr [0xa72370] */ FPUSH(R_F32((u32)(0xa72370u)));
L_004f0010:; BB(0x004f0010);
    /* 004f0010: fmul dword ptr [esp + 0x38] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x38u));
    /* 004f0014: mov eax, dword ptr [esp + 0x44] */ r_eax = R32((u32)(r_esp+0x44u));
    /* 004f0018: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f001a: je 0x4f0022 */ if (fZ) goto L_004f0022;
L_004f001c:; BB(0x004f001c);
    /* 004f001c: fmul dword ptr [0x91dc90] */ ST(0) = ST(0) * R_F32((u32)(0x91dc90u));
L_004f0022:; BB(0x004f0022);
    /* 004f0022: mov eax, dword ptr [esi + 0x24] */ r_eax = R32((u32)(r_esi+0x24u));
    /* 004f0025: mov edx, dword ptr [eax + ebx*2] */ r_edx = R32((u32)(r_eax+r_ebx*2));
    /* 004f0028: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 004f002c: add edx, 0x93 */ {  u32 a = r_edx; u32 b = 0x93u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f0032: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 004f0035: mov dword ptr [esp + 4], 0xbfe80000 */ W32((u32)(r_esp+0x4u), 0xbfe80000u);
    /* 004f003d: lea ebx, [esp + 0x28] */ r_ebx = (u32)(r_esp+0x28u);
    /* 004f0041: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 004f0045: call 0x4e9ef8 */ r_esp -= 4; W32(r_esp, 0x4f004au); f_004e9ef8();
L_004f004a:; BB(0x004f004a);
    /* 004f004a: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
L_004f004c:; BB(0x004f004c);
    /* 004f004c: and al, 0x2c */ {  u32 a = (u8)r_eax; u32 b = 0x2cu; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 004f004e: fadd dword ptr [0x91dc8c] */ ST(0) = ST(0) + R_F32((u32)(0x91dc8cu));
    /* 004f0054: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004f0057: cmp edi, dword ptr [esi + 0x28] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esi+0x28u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f005a: jl 0x4eff59 */ if ((fS!=fO)) goto L_004eff59;
L_004f0060:; BB(0x004f0060);
    /* 004f0060: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004f0062: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004f0065: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004f0066: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004f0067: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004f0068: ret  */ FN_RET(0x004f004c); r_esp += 4; return;
L_004f0069:; BB(0x004f0069);
    /* 004f0069: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 004f006c: add eax, 0x50 */ {  u32 a = r_eax; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f006f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f0070: call 0x4e732c */ r_esp -= 4; W32(r_esp, 0x4f0075u); f_004e732c();
    /* 004f0075: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f0076: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f0078: mov eax, 0 */ r_eax = 0x0u;
    /* 004f007d: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 004f0080: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 004f0084: jmp 0x4eff75 */ goto L_004eff75;
}

void f_004f004d(void)
{
    FN_ENTER(0x004f004d);
    goto L_004f004d;
L_004eff59:; BB(0x004eff59);
    /* 004eff59: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 004eff5d: mov eax, dword ptr [esi + 0x24] */ r_eax = R32((u32)(r_esi+0x24u));
    /* 004eff60: mov edx, dword ptr [eax + edi*4] */ r_edx = R32((u32)(r_eax+r_edi*4));
    /* 004eff63: lea ebx, [edi + edi] */ r_ebx = (u32)(r_edi+r_edi);
    /* 004eff66: cmp edx, 9 */ {  u32 a = r_edx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004eff69: je 0x4f0069 */ if (fZ) goto L_004f0069;
L_004eff6f:; BB(0x004eff6f);
    /* 004eff6f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004eff71: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
L_004eff75:; BB(0x004eff75);
    /* 004eff75: call 0x4e9398 */ r_esp -= 4; W32(r_esp, 0x4eff7au); f_004e9398();
    /* 004eff7a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004eff7c: je 0x4effe3 */ if (fZ) goto L_004effe3;
L_004eff7e:; BB(0x004eff7e);
    /* 004eff7e: cmp edi, dword ptr [esi + 0x2c] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esi+0x2cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004eff81: jne 0x4effe3 */ if (!fZ) goto L_004effe3;
L_004eff83:; BB(0x004eff83);
    /* 004eff83: mov ecx, dword ptr [esi + 0x34] */ r_ecx = R32((u32)(r_esi+0x34u));
    /* 004eff86: shl ecx, 0xa */ { u32 c = (10u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 004eff89: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x4eff8eu); f_0082dcbc();
    /* 004eff8e: fmul dword ptr [0x91dc94] */ ST(0) = ST(0) * R_F32((u32)(0x91dc94u));
    /* 004eff94: fld dword ptr [0x91e190] */ FPUSH(R_F32((u32)(0x91e190u)));
    /* 004eff9a: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 004eff9c: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004eff9e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004effa0: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004effa1: jae 0x4effa5 */ if (!fC) goto L_004effa5;
L_004effa3:; BB(0x004effa3);
    /* 004effa3: fst st(1) */ ST(1) = ST(0);
L_004effa5:; BB(0x004effa5);
    /* 004effa5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004effa7: fmul dword ptr [esp + 0x38] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x38u));
    /* 004effab: mov edx, dword ptr [esp + 0x44] */ r_edx = R32((u32)(r_esp+0x44u));
    /* 004effaf: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004effb1: je 0x4effb9 */ if (fZ) goto L_004effb9;
L_004effb3:; BB(0x004effb3);
    /* 004effb3: fmul dword ptr [0x91dc90] */ ST(0) = ST(0) * R_F32((u32)(0x91dc90u));
L_004effb9:; BB(0x004effb9);
    /* 004effb9: mov eax, dword ptr [esi + 0x24] */ r_eax = R32((u32)(r_esi+0x24u));
    /* 004effbc: mov edx, dword ptr [eax + ebx*2] */ r_edx = R32((u32)(r_eax+r_ebx*2));
    /* 004effbf: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 004effc3: add edx, 0x93 */ {  u32 a = r_edx; u32 b = 0x93u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004effc9: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 004effcc: mov dword ptr [esp + 4], 0xbfe80000 */ W32((u32)(r_esp+0x4u), 0xbfe80000u);
    /* 004effd4: lea ebx, [esp + 0x28] */ r_ebx = (u32)(r_esp+0x28u);
    /* 004effd8: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 004effdc: call 0x4e9ef8 */ r_esp -= 4; W32(r_esp, 0x4effe1u); f_004e9ef8();
    /* 004effe1: jmp 0x4f004a */ goto L_004f004a;
L_004effe3:; BB(0x004effe3);
    /* 004effe3: movzx eax, byte ptr [0xa72354] */ r_eax = (u32)R8((u32)(0xa72354u));
    /* 004effea: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004effec: jne 0x4f000a */ if (!fZ) goto L_004f000a;
L_004effee:; BB(0x004effee);
    /* 004effee: fld dword ptr [0x91e180] */ FPUSH(R_F32((u32)(0x91e180u)));
    /* 004efff4: mov dword ptr [0xa72370], 0x3f19999a */ W32((u32)(0xa72370u), 0x3f19999au);
    /* 004efffe: or eax, 0xffffff40 */ {  u32 a = r_eax; u32 b = 0xffffff40u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f0003: mov byte ptr [0xa72354], al */ W8((u32)(0xa72354u), (u8)r_eax);
    /* 004f0008: jmp 0x4f0010 */ goto L_004f0010;
L_004f000a:; BB(0x004f000a);
    /* 004f000a: fld dword ptr [0xa72370] */ FPUSH(R_F32((u32)(0xa72370u)));
L_004f0010:; BB(0x004f0010);
    /* 004f0010: fmul dword ptr [esp + 0x38] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x38u));
    /* 004f0014: mov eax, dword ptr [esp + 0x44] */ r_eax = R32((u32)(r_esp+0x44u));
    /* 004f0018: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f001a: je 0x4f0022 */ if (fZ) goto L_004f0022;
L_004f001c:; BB(0x004f001c);
    /* 004f001c: fmul dword ptr [0x91dc90] */ ST(0) = ST(0) * R_F32((u32)(0x91dc90u));
L_004f0022:; BB(0x004f0022);
    /* 004f0022: mov eax, dword ptr [esi + 0x24] */ r_eax = R32((u32)(r_esi+0x24u));
    /* 004f0025: mov edx, dword ptr [eax + ebx*2] */ r_edx = R32((u32)(r_eax+r_ebx*2));
    /* 004f0028: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 004f002c: add edx, 0x93 */ {  u32 a = r_edx; u32 b = 0x93u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f0032: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 004f0035: mov dword ptr [esp + 4], 0xbfe80000 */ W32((u32)(r_esp+0x4u), 0xbfe80000u);
    /* 004f003d: lea ebx, [esp + 0x28] */ r_ebx = (u32)(r_esp+0x28u);
    /* 004f0041: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 004f0045: call 0x4e9ef8 */ r_esp -= 4; W32(r_esp, 0x4f004au); f_004e9ef8();
L_004f004a:; BB(0x004f004a);
    /* 004f004a: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
L_004f004d:; BB(0x004f004d);
    /* 004f004d: sub al, 0xd8 */ {  u32 a = (u8)r_eax; u32 b = 0xd8u; u32 r = (a - b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 004f004e: fadd dword ptr [0x91dc8c] */ ST(0) = ST(0) + R_F32((u32)(0x91dc8cu));
    /* 004f004f: add eax, 0x91dc8c */ {  u32 a = r_eax; u32 b = 0x91dc8cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f0054: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004f0057: cmp edi, dword ptr [esi + 0x28] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esi+0x28u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f005a: jl 0x4eff59 */ if ((fS!=fO)) goto L_004eff59;
L_004f0060:; BB(0x004f0060);
    /* 004f0060: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004f0062: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004f0065: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004f0066: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004f0067: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004f0068: ret  */ FN_RET(0x004f004d); r_esp += 4; return;
L_004f0069:; BB(0x004f0069);
    /* 004f0069: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 004f006c: add eax, 0x50 */ {  u32 a = r_eax; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f006f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f0070: call 0x4e732c */ r_esp -= 4; W32(r_esp, 0x4f0075u); f_004e732c();
    /* 004f0075: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f0076: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f0078: mov eax, 0 */ r_eax = 0x0u;
    /* 004f007d: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 004f0080: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 004f0084: jmp 0x4eff75 */ goto L_004eff75;
}

void f_004f004e(void)
{
    FN_ENTER(0x004f004e);
    goto L_004f004e;
L_004eff59:; BB(0x004eff59);
    /* 004eff59: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 004eff5d: mov eax, dword ptr [esi + 0x24] */ r_eax = R32((u32)(r_esi+0x24u));
    /* 004eff60: mov edx, dword ptr [eax + edi*4] */ r_edx = R32((u32)(r_eax+r_edi*4));
    /* 004eff63: lea ebx, [edi + edi] */ r_ebx = (u32)(r_edi+r_edi);
    /* 004eff66: cmp edx, 9 */ {  u32 a = r_edx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004eff69: je 0x4f0069 */ if (fZ) goto L_004f0069;
L_004eff6f:; BB(0x004eff6f);
    /* 004eff6f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004eff71: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
L_004eff75:; BB(0x004eff75);
    /* 004eff75: call 0x4e9398 */ r_esp -= 4; W32(r_esp, 0x4eff7au); f_004e9398();
    /* 004eff7a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004eff7c: je 0x4effe3 */ if (fZ) goto L_004effe3;
L_004eff7e:; BB(0x004eff7e);
    /* 004eff7e: cmp edi, dword ptr [esi + 0x2c] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esi+0x2cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004eff81: jne 0x4effe3 */ if (!fZ) goto L_004effe3;
L_004eff83:; BB(0x004eff83);
    /* 004eff83: mov ecx, dword ptr [esi + 0x34] */ r_ecx = R32((u32)(r_esi+0x34u));
    /* 004eff86: shl ecx, 0xa */ { u32 c = (10u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 004eff89: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x4eff8eu); f_0082dcbc();
    /* 004eff8e: fmul dword ptr [0x91dc94] */ ST(0) = ST(0) * R_F32((u32)(0x91dc94u));
    /* 004eff94: fld dword ptr [0x91e190] */ FPUSH(R_F32((u32)(0x91e190u)));
    /* 004eff9a: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 004eff9c: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004eff9e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004effa0: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004effa1: jae 0x4effa5 */ if (!fC) goto L_004effa5;
L_004effa3:; BB(0x004effa3);
    /* 004effa3: fst st(1) */ ST(1) = ST(0);
L_004effa5:; BB(0x004effa5);
    /* 004effa5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004effa7: fmul dword ptr [esp + 0x38] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x38u));
    /* 004effab: mov edx, dword ptr [esp + 0x44] */ r_edx = R32((u32)(r_esp+0x44u));
    /* 004effaf: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004effb1: je 0x4effb9 */ if (fZ) goto L_004effb9;
L_004effb3:; BB(0x004effb3);
    /* 004effb3: fmul dword ptr [0x91dc90] */ ST(0) = ST(0) * R_F32((u32)(0x91dc90u));
L_004effb9:; BB(0x004effb9);
    /* 004effb9: mov eax, dword ptr [esi + 0x24] */ r_eax = R32((u32)(r_esi+0x24u));
    /* 004effbc: mov edx, dword ptr [eax + ebx*2] */ r_edx = R32((u32)(r_eax+r_ebx*2));
    /* 004effbf: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 004effc3: add edx, 0x93 */ {  u32 a = r_edx; u32 b = 0x93u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004effc9: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 004effcc: mov dword ptr [esp + 4], 0xbfe80000 */ W32((u32)(r_esp+0x4u), 0xbfe80000u);
    /* 004effd4: lea ebx, [esp + 0x28] */ r_ebx = (u32)(r_esp+0x28u);
    /* 004effd8: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 004effdc: call 0x4e9ef8 */ r_esp -= 4; W32(r_esp, 0x4effe1u); f_004e9ef8();
    /* 004effe1: jmp 0x4f004a */ goto L_004f004a;
L_004effe3:; BB(0x004effe3);
    /* 004effe3: movzx eax, byte ptr [0xa72354] */ r_eax = (u32)R8((u32)(0xa72354u));
    /* 004effea: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004effec: jne 0x4f000a */ if (!fZ) goto L_004f000a;
L_004effee:; BB(0x004effee);
    /* 004effee: fld dword ptr [0x91e180] */ FPUSH(R_F32((u32)(0x91e180u)));
    /* 004efff4: mov dword ptr [0xa72370], 0x3f19999a */ W32((u32)(0xa72370u), 0x3f19999au);
    /* 004efffe: or eax, 0xffffff40 */ {  u32 a = r_eax; u32 b = 0xffffff40u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f0003: mov byte ptr [0xa72354], al */ W8((u32)(0xa72354u), (u8)r_eax);
    /* 004f0008: jmp 0x4f0010 */ goto L_004f0010;
L_004f000a:; BB(0x004f000a);
    /* 004f000a: fld dword ptr [0xa72370] */ FPUSH(R_F32((u32)(0xa72370u)));
L_004f0010:; BB(0x004f0010);
    /* 004f0010: fmul dword ptr [esp + 0x38] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x38u));
    /* 004f0014: mov eax, dword ptr [esp + 0x44] */ r_eax = R32((u32)(r_esp+0x44u));
    /* 004f0018: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f001a: je 0x4f0022 */ if (fZ) goto L_004f0022;
L_004f001c:; BB(0x004f001c);
    /* 004f001c: fmul dword ptr [0x91dc90] */ ST(0) = ST(0) * R_F32((u32)(0x91dc90u));
L_004f0022:; BB(0x004f0022);
    /* 004f0022: mov eax, dword ptr [esi + 0x24] */ r_eax = R32((u32)(r_esi+0x24u));
    /* 004f0025: mov edx, dword ptr [eax + ebx*2] */ r_edx = R32((u32)(r_eax+r_ebx*2));
    /* 004f0028: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 004f002c: add edx, 0x93 */ {  u32 a = r_edx; u32 b = 0x93u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f0032: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 004f0035: mov dword ptr [esp + 4], 0xbfe80000 */ W32((u32)(r_esp+0x4u), 0xbfe80000u);
    /* 004f003d: lea ebx, [esp + 0x28] */ r_ebx = (u32)(r_esp+0x28u);
    /* 004f0041: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 004f0045: call 0x4e9ef8 */ r_esp -= 4; W32(r_esp, 0x4f004au); f_004e9ef8();
L_004f004a:; BB(0x004f004a);
    /* 004f004a: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
L_004f004e:; BB(0x004f004e);
    /* 004f004e: fadd dword ptr [0x91dc8c] */ ST(0) = ST(0) + R_F32((u32)(0x91dc8cu));
    /* 004f0054: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004f0057: cmp edi, dword ptr [esi + 0x28] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esi+0x28u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f005a: jl 0x4eff59 */ if ((fS!=fO)) goto L_004eff59;
L_004f0060:; BB(0x004f0060);
    /* 004f0060: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004f0062: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004f0065: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004f0066: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004f0067: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004f0068: ret  */ FN_RET(0x004f004e); r_esp += 4; return;
L_004f0069:; BB(0x004f0069);
    /* 004f0069: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 004f006c: add eax, 0x50 */ {  u32 a = r_eax; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f006f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f0070: call 0x4e732c */ r_esp -= 4; W32(r_esp, 0x4f0075u); f_004e732c();
    /* 004f0075: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f0076: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f0078: mov eax, 0 */ r_eax = 0x0u;
    /* 004f007d: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 004f0080: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 004f0084: jmp 0x4eff75 */ goto L_004eff75;
}

void f_004f0050(void)
{
    FN_ENTER(0x004f0050);
    /* 004f0050: mov esp, ds */ r_esp = 0x2bu;
    /* 004f0052: xchg ecx, eax */ { u32 x = r_ecx; u32 y = r_eax; r_ecx = y; r_eax = x; }
    /* 004f0053: add byte ptr [ebx + 0x7e3b01c7], al */ { u32 ad = (u32)(r_ebx+0x7e3b01c7u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 004f0059: sub byte ptr [edi], cl */ { u32 ad = (u32)(r_edi);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a - b) & 0xffu; W8(ad, r);  }
    UNSUP(0x004f005b, "falls out of decoded code");
}

void f_004f0052(void)
{
    FN_ENTER(0x004f0052);
    /* 004f0052: xchg ecx, eax */ { u32 x = r_ecx; u32 y = r_eax; r_ecx = y; r_eax = x; }
    /* 004f0053: add byte ptr [ebx + 0x7e3b01c7], al */ { u32 ad = (u32)(r_ebx+0x7e3b01c7u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 004f0059: sub byte ptr [edi], cl */ { u32 ad = (u32)(r_edi);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a - b) & 0xffu; W8(ad, r);  }
    UNSUP(0x004f005b, "falls out of decoded code");
}

void f_004f0053(void)
{
    FN_ENTER(0x004f0053);
    /* 004f0053: add byte ptr [ebx + 0x7e3b01c7], al */ { u32 ad = (u32)(r_ebx+0x7e3b01c7u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 004f0059: sub byte ptr [edi], cl */ { u32 ad = (u32)(r_edi);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a - b) & 0xffu; W8(ad, r);  }
    UNSUP(0x004f005b, "falls out of decoded code");
}

void f_004f00bc(void) /* sub_4F00BC */
{
    FN_ENTER(0x004f00bc);
    /* 004f00bc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004f00bd: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f00be: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004f00bf: sub esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004f00c2: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004f00c4: fld dword ptr [0xa7221c] */ FPUSH(R_F32((u32)(0xa7221cu)));
    /* 004f00ca: movzx eax, byte ptr [0xa72374] */ r_eax = (u32)R8((u32)(0xa72374u));
    /* 004f00d1: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 004f00d5: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004f00d7: jne 0x4f00f5 */ if (!fZ) goto L_004f00f5;
L_004f00d9:; BB(0x004f00d9);
    /* 004f00d9: fld dword ptr [0x91e1bc] */ FPUSH(R_F32((u32)(0x91e1bcu)));
    /* 004f00df: mov dword ptr [0xa7237c], 0x3f4ccccd */ W32((u32)(0xa7237cu), 0x3f4ccccdu);
    /* 004f00e9: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f00ee: mov byte ptr [0xa72374], al */ W8((u32)(0xa72374u), (u8)r_eax);
    /* 004f00f3: jmp 0x4f00fb */ goto L_004f00fb;
L_004f00f5:; BB(0x004f00f5);
    /* 004f00f5: fld dword ptr [0xa7237c] */ FPUSH(R_F32((u32)(0xa7237cu)));
L_004f00fb:; BB(0x004f00fb);
    /* 004f00fb: fld dword ptr [ebx + 0x48] */ FPUSH(R_F32((u32)(r_ebx+0x48u)));
    /* 004f00fe: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004f0100: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004f0102: fstp dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0)); FPOP();
    /* 004f0106: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004f0107: jb 0x4f0117 */ if (fC) goto L_004f0117;
L_004f0109:; BB(0x004f0109);
    /* 004f0109: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004f010b: fld dword ptr [0x91e17c] */ FPUSH(R_F32((u32)(0x91e17cu)));
    /* 004f0111: fstp dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0)); FPOP();
    /* 004f0115: jmp 0x4f012b */ goto L_004f012b;
L_004f0117:; BB(0x004f0117);
    /* 004f0117: fld dword ptr [0x91dcfc] */ FPUSH(R_F32((u32)(0x91dcfcu)));
    /* 004f011d: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 004f011f: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 004f0123: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 004f0125: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 004f0127: fstp dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0)); FPOP();
L_004f012b:; BB(0x004f012b);
    /* 004f012b: push 0x9e */ { u32 v = 0x9eu; r_esp -= 4; W32(r_esp, v); }
    /* 004f0130: call 0x4ea00c */ r_esp -= 4; W32(r_esp, 0x4f0135u); f_004ea00c();
    /* 004f0135: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f0136: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 004f013a: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 004f013e: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004f0142: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 004f0146: fsubr dword ptr [0x91dcf8] */ ST(0) = R_F32((u32)(0x91dcf8u)) - ST(0);
    /* 004f014c: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 004f0150: mov dword ptr [esp + 0x14], 0x432d0000 */ W32((u32)(r_esp+0x14u), 0x432d0000u);
    /* 004f0158: mov dword ptr [esp], 0x9e */ W32((u32)(r_esp), 0x9eu);
    /* 004f015f: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 004f0163: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004f0167: mov dword ptr [esp + 4], 0xc0440000 */ W32((u32)(r_esp+0x4u), 0xc0440000u);
    /* 004f016f: call 0x4e9ef8 */ r_esp -= 4; W32(r_esp, 0x4f0174u); f_004e9ef8();
    /* 004f0174: push 0x9a */ { u32 v = 0x9au; r_esp -= 4; W32(r_esp, v); }
    /* 004f0179: call 0x4ea00c */ r_esp -= 4; W32(r_esp, 0x4f017eu); f_004ea00c();
    /* 004f017e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f017f: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 004f0183: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 004f0187: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 004f018b: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 004f018f: fsubr dword ptr [0x91dcf0] */ ST(0) = R_F32((u32)(0x91dcf0u)) - ST(0);
    /* 004f0195: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 004f0199: mov dword ptr [esp + 0x14], 0x43520000 */ W32((u32)(r_esp+0x14u), 0x43520000u);
    /* 004f01a1: mov dword ptr [esp], 0x9a */ W32((u32)(r_esp), 0x9au);
    /* 004f01a8: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 004f01ac: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004f01b0: mov dword ptr [esp + 4], 0xc0440000 */ W32((u32)(r_esp+0x4u), 0xc0440000u);
    /* 004f01b8: call 0x4e9ef8 */ r_esp -= 4; W32(r_esp, 0x4f01bdu); f_004e9ef8();
    /* 004f01bd: push 0x9d */ { u32 v = 0x9du; r_esp -= 4; W32(r_esp, v); }
    /* 004f01c2: call 0x4ea00c */ r_esp -= 4; W32(r_esp, 0x4f01c7u); f_004ea00c();
    /* 004f01c7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f01c8: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 004f01cc: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 004f01d0: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 004f01d4: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 004f01d8: fsubr dword ptr [0x91dce8] */ ST(0) = R_F32((u32)(0x91dce8u)) - ST(0);
    /* 004f01de: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 004f01e2: mov dword ptr [esp + 0x14], 0x43760000 */ W32((u32)(r_esp+0x14u), 0x43760000u);
    /* 004f01ea: mov dword ptr [esp], 0x9d */ W32((u32)(r_esp), 0x9du);
    /* 004f01f1: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 004f01f5: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004f01f9: mov dword ptr [esp + 4], 0xc0440000 */ W32((u32)(r_esp+0x4u), 0xc0440000u);
    /* 004f0201: call 0x4e9ef8 */ r_esp -= 4; W32(r_esp, 0x4f0206u); f_004e9ef8();
    /* 004f0206: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 004f020a: fmul dword ptr [0x91e174] */ ST(0) = ST(0) * R_F32((u32)(0x91e174u));
    /* 004f0210: fnstcw word ptr [esp + 0x30] */ W16((u32)(r_esp+0x30u), fcw);
    /* 004f0214: movzx eax, word ptr [esp + 0x30] */ r_eax = (u32)R16((u32)(r_esp+0x30u));
    /* 004f0219: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f021e: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 004f0222: fldcw word ptr [esp + 0x38] */ fcw = R16((u32)(r_esp+0x38u));
    /* 004f0226: fistp qword ptr [esp + 0x40] */ W64((u32)(r_esp+0x40u), (u64)fx_int64(ST(0))); FPOP();
    /* 004f022a: fldcw word ptr [esp + 0x30] */ fcw = R16((u32)(r_esp+0x30u));
    /* 004f022e: movzx eax, byte ptr [0xa72374] */ r_eax = (u32)R8((u32)(0xa72374u));
    /* 004f0235: mov esi, dword ptr [esp + 0x40] */ r_esi = R32((u32)(r_esp+0x40u));
    /* 004f0239: shl esi, 0x18 */ { u32 c = (24u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 004f023c: or esi, 0xffffff */ {  u32 a = r_esi; u32 b = 0xffffffu; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 004f0242: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004f0244: jne 0x4f025a */ if (!fZ) goto L_004f025a;
L_004f0246:; BB(0x004f0246);
    /* 004f0246: mov dword ptr [0xa72380], 0x43838000 */ W32((u32)(0xa72380u), 0x43838000u);
    /* 004f0250: or eax, 0xffffff02 */ {  u32 a = r_eax; u32 b = 0xffffff02u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f0255: mov byte ptr [0xa72374], al */ W8((u32)(0xa72374u), (u8)r_eax);
L_004f025a:; BB(0x004f025a);
    /* 004f025a: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
    /* 004f025d: movsx ebp, byte ptr [eax + 0x31] */ r_ebp = (u32)(i32)(i8)R8((u32)(r_eax+0x31u));
    /* 004f0261: movzx edx, byte ptr [eax + 0x32] */ r_edx = (u32)R8((u32)(r_eax+0x32u));
    /* 004f0265: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004f0268: je 0x4f026f */ if (fZ) goto L_004f026f;
L_004f026a:; BB(0x004f026a);
    /* 004f026a: mov ebp, 0xc */ r_ebp = 0xcu;
L_004f026f:; BB(0x004f026f);
    /* 004f026f: call 0x4d28a4 */ r_esp -= 4; W32(r_esp, 0x4f0274u); f_004d28a4();
    /* 004f0274: push dword ptr [ebp*4 + 0x9b8f88] */ { u32 v = R32((u32)(r_ebp*4+0x9b8f88u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f027b: call 0x7087dc */ r_esp -= 4; W32(r_esp, 0x4f0280u); f_007087dc();
    /* 004f0280: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f0281: mov edx, dword ptr [0xa72380] */ r_edx = R32((u32)(0xa72380u));
    /* 004f0287: fld dword ptr [0x91dcdc] */ FPUSH(R_F32((u32)(0x91dcdcu)));
    /* 004f028d: fmul dword ptr [esp + 0x48] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x48u));
    /* 004f0291: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 004f0295: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 004f0298: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004f029c: mov dword ptr [esp + 0xc], esi */ W32((u32)(r_esp+0xcu), r_esi);
    /* 004f02a0: call 0x7ac12c */ r_esp -= 4; W32(r_esp, 0x4f02a5u); f_007ac12c();
    /* 004f02a5: call 0x4d2968 */ r_esp -= 4; W32(r_esp, 0x4f02aau); f_004d2968();
    /* 004f02aa: movzx eax, byte ptr [0xa72374] */ r_eax = (u32)R8((u32)(0xa72374u));
    /* 004f02b1: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004f02b3: jne 0x4f02c9 */ if (!fZ) goto L_004f02c9;
L_004f02b5:; BB(0x004f02b5);
    /* 004f02b5: mov dword ptr [0xa72384], 0x43838000 */ W32((u32)(0xa72384u), 0x43838000u);
    /* 004f02bf: or eax, 0xffffff04 */ {  u32 a = r_eax; u32 b = 0xffffff04u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f02c4: mov byte ptr [0xa72374], al */ W8((u32)(0xa72374u), (u8)r_eax);
L_004f02c9:; BB(0x004f02c9);
    /* 004f02c9: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
    /* 004f02cc: mov eax, dword ptr [eax + 0x18] */ r_eax = R32((u32)(r_eax+0x18u));
    /* 004f02cf: test eax, 0xff000000 */ {  u32 a = r_eax; u32 b = 0xff000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f02d4: jne 0x4f02db */ if (!fZ) goto L_004f02db;
L_004f02d6:; BB(0x004f02d6);
    /* 004f02d6: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
L_004f02db:; BB(0x004f02db);
    /* 004f02db: and eax, 0xffffff */ {  u32 a = r_eax; u32 b = 0xffffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004f02e0: and esi, 0xff000000 */ {  u32 a = r_esi; u32 b = 0xff000000u; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 004f02e6: or esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 004f02e8: call 0x4d28a4 */ r_esp -= 4; W32(r_esp, 0x4f02edu); f_004d28a4();
    /* 004f02ed: mov eax, dword ptr [0xa72384] */ r_eax = R32((u32)(0xa72384u));
    /* 004f02f2: fld dword ptr [0x91dcd8] */ FPUSH(R_F32((u32)(0x91dcd8u)));
    /* 004f02f8: fmul dword ptr [esp + 0x48] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x48u));
    /* 004f02fc: mov edx, dword ptr [ebx + 0x1c] */ r_edx = R32((u32)(r_ebx+0x1cu));
    /* 004f02ff: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 004f0303: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 004f0306: add edx, 0x50 */ {  u32 a = r_edx; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f0309: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 004f030d: mov dword ptr [esp + 0xc], esi */ W32((u32)(r_esp+0xcu), r_esi);
    /* 004f0311: call 0x7ac12c */ r_esp -= 4; W32(r_esp, 0x4f0316u); f_007ac12c();
    /* 004f0316: call 0x4d2968 */ r_esp -= 4; W32(r_esp, 0x4f031bu); f_004d2968();
    /* 004f031b: movzx eax, byte ptr [0xa72374] */ r_eax = (u32)R8((u32)(0xa72374u));
    /* 004f0322: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004f0324: jne 0x4f0342 */ if (!fZ) goto L_004f0342;
L_004f0326:; BB(0x004f0326);
    /* 004f0326: fld dword ptr [0x91e1bc] */ FPUSH(R_F32((u32)(0x91e1bcu)));
    /* 004f032c: mov dword ptr [0xa72378], 0x3f4ccccd */ W32((u32)(0xa72378u), 0x3f4ccccdu);
    /* 004f0336: or eax, 0xffffff08 */ {  u32 a = r_eax; u32 b = 0xffffff08u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f033b: mov byte ptr [0xa72374], al */ W8((u32)(0xa72374u), (u8)r_eax);
    /* 004f0340: jmp 0x4f0348 */ goto L_004f0348;
L_004f0342:; BB(0x004f0342);
    /* 004f0342: fld dword ptr [0xa72378] */ FPUSH(R_F32((u32)(0xa72378u)));
L_004f0348:; BB(0x004f0348);
    /* 004f0348: fld dword ptr [ebx + 0x48] */ FPUSH(R_F32((u32)(r_ebx+0x48u)));
    /* 004f034b: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004f034d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004f034f: fstp dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0)); FPOP();
    /* 004f0353: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004f0354: jbe 0x4f0463 */ if ((fC||fZ)) goto L_004f0463;
L_004f035a:; BB(0x004f035a);
    /* 004f035a: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 004f035e: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 004f0360: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004f0362: fsubr dword ptr [0x91dcd4] */ ST(0) = R_F32((u32)(0x91dcd4u)) - ST(0);
    /* 004f0368: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 004f036a: mov edx, dword ptr [ebx + 0x1c] */ r_edx = R32((u32)(r_ebx+0x1cu));
    /* 004f036d: movzx eax, byte ptr [edx + 0x32] */ r_eax = (u32)R8((u32)(r_edx+0x32u));
    /* 004f0371: fstp dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0)); FPOP();
    /* 004f0375: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004f0377: jne 0x4f03b7 */ if (!fZ) goto L_004f03b7;
L_004f0379:; BB(0x004f0379);
    /* 004f0379: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 004f037d: movzx eax, byte ptr [edx + 0x30] */ r_eax = (u32)R8((u32)(r_edx+0x30u));
    /* 004f0381: mov edx, dword ptr [eax*4 + 0x9b8f60] */ r_edx = R32((u32)(r_eax*4+0x9b8f60u));
    /* 004f0388: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 004f038c: mov dword ptr [esp + 0x18], 0x43540000 */ W32((u32)(r_esp+0x18u), 0x43540000u);
    /* 004f0394: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 004f0397: mov dword ptr [esp + 0x1c], 0x436a0000 */ W32((u32)(r_esp+0x1cu), 0x436a0000u);
    /* 004f039f: lea ebp, [esp + 0x18] */ r_ebp = (u32)(r_esp+0x18u);
    /* 004f03a3: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
    /* 004f03a7: mov dword ptr [esp + 4], 0xc0440000 */ W32((u32)(r_esp+0x4u), 0xc0440000u);
    /* 004f03af: call 0x4e9ef8 */ r_esp -= 4; W32(r_esp, 0x4f03b4u); f_004e9ef8();
    /* 004f03b4: mov edx, dword ptr [ebx + 0x1c] */ r_edx = R32((u32)(r_ebx+0x1cu));
L_004f03b7:; BB(0x004f03b7);
    /* 004f03b7: movsx eax, byte ptr [edx + 0x30] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x30u));
    /* 004f03bb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f03bc: call 0x7930c8 */ r_esp -= 4; W32(r_esp, 0x4f03c1u); f_007930c8();
    /* 004f03c1: mov ebp, eax */ r_ebp = r_eax;
    /* 004f03c3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f03c6: mov edx, dword ptr [ebx + 0x1c] */ r_edx = R32((u32)(r_ebx+0x1cu));
    /* 004f03c9: movzx ecx, byte ptr [edx + 0x32] */ r_ecx = (u32)R8((u32)(r_edx+0x32u));
    /* 004f03cd: test cl, 1 */ {  u32 a = (u8)r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004f03d0: je 0x4f03d7 */ if (fZ) goto L_004f03d7;
L_004f03d2:; BB(0x004f03d2);
    /* 004f03d2: mov ebp, 0x9b8f58 */ r_ebp = 0x9b8f58u;
L_004f03d7:; BB(0x004f03d7);
    /* 004f03d7: movzx edx, byte ptr [0xa72374] */ r_edx = (u32)R8((u32)(0xa72374u));
    /* 004f03de: test dl, 0x10 */ {  u32 a = (u8)r_edx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004f03e1: jne 0x4f03f9 */ if (!fZ) goto L_004f03f9;
L_004f03e3:; BB(0x004f03e3);
    /* 004f03e3: mov dword ptr [0xa72388], 0x43838000 */ W32((u32)(0xa72388u), 0x43838000u);
    /* 004f03ed: or edx, 0xffffff10 */ {  u32 a = r_edx; u32 b = 0xffffff10u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004f03f3: mov byte ptr [0xa72374], dl */ W8((u32)(0xa72374u), (u8)r_edx);
L_004f03f9:; BB(0x004f03f9);
    /* 004f03f9: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 004f03fd: fmul dword ptr [0x91e174] */ ST(0) = ST(0) * R_F32((u32)(0x91e174u));
    /* 004f0403: fnstcw word ptr [esp + 0x30] */ W16((u32)(r_esp+0x30u), fcw);
    /* 004f0407: movzx eax, word ptr [esp + 0x30] */ r_eax = (u32)R16((u32)(r_esp+0x30u));
    /* 004f040c: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f0411: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 004f0415: fldcw word ptr [esp + 0x38] */ fcw = R16((u32)(r_esp+0x38u));
    /* 004f0419: fistp qword ptr [esp + 0x40] */ W64((u32)(r_esp+0x40u), (u64)fx_int64(ST(0))); FPOP();
    /* 004f041d: fldcw word ptr [esp + 0x30] */ fcw = R16((u32)(r_esp+0x30u));
    /* 004f0421: mov ebx, dword ptr [esp + 0x40] */ r_ebx = R32((u32)(r_esp+0x40u));
    /* 004f0425: shl ebx, 0x18 */ { u32 c = (24u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 004f0428: or ebx, 0xffffff */ {  u32 a = r_ebx; u32 b = 0xffffffu; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 004f042e: call 0x4d28a4 */ r_esp -= 4; W32(r_esp, 0x4f0433u); f_004d28a4();
    /* 004f0433: mov edx, dword ptr [0xa72388] */ r_edx = R32((u32)(0xa72388u));
    /* 004f0439: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 004f043d: fmul dword ptr [0x91dcc8] */ ST(0) = ST(0) * R_F32((u32)(0x91dcc8u));
    /* 004f0443: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 004f0447: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 004f044a: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
    /* 004f044e: mov dword ptr [esp + 0xc], ebx */ W32((u32)(r_esp+0xcu), r_ebx);
    /* 004f0452: call 0x7ac12c */ r_esp -= 4; W32(r_esp, 0x4f0457u); f_007ac12c();
    /* 004f0457: call 0x4d2968 */ r_esp -= 4; W32(r_esp, 0x4f045cu); f_004d2968();
    /* 004f045c: add esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004f045f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004f0460: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f0461: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004f0462: ret  */ FN_RET(0x004f00bc); r_esp += 4; return;
L_004f0463:; BB(0x004f0463);
    /* 004f0463: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004f0465: add esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004f0468: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004f0469: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f046a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004f046b: ret  */ FN_RET(0x004f00bc); r_esp += 4; return;
}

void f_004f010a(void)
{
    FN_ENTER(0x004f010a);
    /* 004f010a: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 004f010c: add eax, 0x91e17c */ {  u32 a = r_eax; u32 b = 0x91e17cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f0111: fstp dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0)); FPOP();
    /* 004f0115: jmp 0x4f012b */ goto L_004f012b;
L_004f012b:; BB(0x004f012b);
    /* 004f012b: push 0x9e */ { u32 v = 0x9eu; r_esp -= 4; W32(r_esp, v); }
    /* 004f0130: call 0x4ea00c */ r_esp -= 4; W32(r_esp, 0x4f0135u); f_004ea00c();
    /* 004f0135: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f0136: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 004f013a: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 004f013e: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004f0142: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 004f0146: fsubr dword ptr [0x91dcf8] */ ST(0) = R_F32((u32)(0x91dcf8u)) - ST(0);
    /* 004f014c: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 004f0150: mov dword ptr [esp + 0x14], 0x432d0000 */ W32((u32)(r_esp+0x14u), 0x432d0000u);
    /* 004f0158: mov dword ptr [esp], 0x9e */ W32((u32)(r_esp), 0x9eu);
    /* 004f015f: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 004f0163: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004f0167: mov dword ptr [esp + 4], 0xc0440000 */ W32((u32)(r_esp+0x4u), 0xc0440000u);
    /* 004f016f: call 0x4e9ef8 */ r_esp -= 4; W32(r_esp, 0x4f0174u); f_004e9ef8();
    /* 004f0174: push 0x9a */ { u32 v = 0x9au; r_esp -= 4; W32(r_esp, v); }
    /* 004f0179: call 0x4ea00c */ r_esp -= 4; W32(r_esp, 0x4f017eu); f_004ea00c();
    /* 004f017e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f017f: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 004f0183: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 004f0187: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 004f018b: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 004f018f: fsubr dword ptr [0x91dcf0] */ ST(0) = R_F32((u32)(0x91dcf0u)) - ST(0);
    /* 004f0195: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 004f0199: mov dword ptr [esp + 0x14], 0x43520000 */ W32((u32)(r_esp+0x14u), 0x43520000u);
    /* 004f01a1: mov dword ptr [esp], 0x9a */ W32((u32)(r_esp), 0x9au);
    /* 004f01a8: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 004f01ac: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004f01b0: mov dword ptr [esp + 4], 0xc0440000 */ W32((u32)(r_esp+0x4u), 0xc0440000u);
    /* 004f01b8: call 0x4e9ef8 */ r_esp -= 4; W32(r_esp, 0x4f01bdu); f_004e9ef8();
    /* 004f01bd: push 0x9d */ { u32 v = 0x9du; r_esp -= 4; W32(r_esp, v); }
    /* 004f01c2: call 0x4ea00c */ r_esp -= 4; W32(r_esp, 0x4f01c7u); f_004ea00c();
    /* 004f01c7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f01c8: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 004f01cc: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 004f01d0: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 004f01d4: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 004f01d8: fsubr dword ptr [0x91dce8] */ ST(0) = R_F32((u32)(0x91dce8u)) - ST(0);
    /* 004f01de: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 004f01e2: mov dword ptr [esp + 0x14], 0x43760000 */ W32((u32)(r_esp+0x14u), 0x43760000u);
    /* 004f01ea: mov dword ptr [esp], 0x9d */ W32((u32)(r_esp), 0x9du);
    /* 004f01f1: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 004f01f5: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004f01f9: mov dword ptr [esp + 4], 0xc0440000 */ W32((u32)(r_esp+0x4u), 0xc0440000u);
    /* 004f0201: call 0x4e9ef8 */ r_esp -= 4; W32(r_esp, 0x4f0206u); f_004e9ef8();
    /* 004f0206: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 004f020a: fmul dword ptr [0x91e174] */ ST(0) = ST(0) * R_F32((u32)(0x91e174u));
    /* 004f0210: fnstcw word ptr [esp + 0x30] */ W16((u32)(r_esp+0x30u), fcw);
    /* 004f0214: movzx eax, word ptr [esp + 0x30] */ r_eax = (u32)R16((u32)(r_esp+0x30u));
    /* 004f0219: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f021e: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 004f0222: fldcw word ptr [esp + 0x38] */ fcw = R16((u32)(r_esp+0x38u));
    /* 004f0226: fistp qword ptr [esp + 0x40] */ W64((u32)(r_esp+0x40u), (u64)fx_int64(ST(0))); FPOP();
    /* 004f022a: fldcw word ptr [esp + 0x30] */ fcw = R16((u32)(r_esp+0x30u));
    /* 004f022e: movzx eax, byte ptr [0xa72374] */ r_eax = (u32)R8((u32)(0xa72374u));
    /* 004f0235: mov esi, dword ptr [esp + 0x40] */ r_esi = R32((u32)(r_esp+0x40u));
    /* 004f0239: shl esi, 0x18 */ { u32 c = (24u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 004f023c: or esi, 0xffffff */ {  u32 a = r_esi; u32 b = 0xffffffu; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 004f0242: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004f0244: jne 0x4f025a */ if (!fZ) goto L_004f025a;
L_004f0246:; BB(0x004f0246);
    /* 004f0246: mov dword ptr [0xa72380], 0x43838000 */ W32((u32)(0xa72380u), 0x43838000u);
    /* 004f0250: or eax, 0xffffff02 */ {  u32 a = r_eax; u32 b = 0xffffff02u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f0255: mov byte ptr [0xa72374], al */ W8((u32)(0xa72374u), (u8)r_eax);
L_004f025a:; BB(0x004f025a);
    /* 004f025a: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
    /* 004f025d: movsx ebp, byte ptr [eax + 0x31] */ r_ebp = (u32)(i32)(i8)R8((u32)(r_eax+0x31u));
    /* 004f0261: movzx edx, byte ptr [eax + 0x32] */ r_edx = (u32)R8((u32)(r_eax+0x32u));
    /* 004f0265: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004f0268: je 0x4f026f */ if (fZ) goto L_004f026f;
L_004f026a:; BB(0x004f026a);
    /* 004f026a: mov ebp, 0xc */ r_ebp = 0xcu;
L_004f026f:; BB(0x004f026f);
    /* 004f026f: call 0x4d28a4 */ r_esp -= 4; W32(r_esp, 0x4f0274u); f_004d28a4();
    /* 004f0274: push dword ptr [ebp*4 + 0x9b8f88] */ { u32 v = R32((u32)(r_ebp*4+0x9b8f88u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f027b: call 0x7087dc */ r_esp -= 4; W32(r_esp, 0x4f0280u); f_007087dc();
    /* 004f0280: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f0281: mov edx, dword ptr [0xa72380] */ r_edx = R32((u32)(0xa72380u));
    /* 004f0287: fld dword ptr [0x91dcdc] */ FPUSH(R_F32((u32)(0x91dcdcu)));
    /* 004f028d: fmul dword ptr [esp + 0x48] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x48u));
    /* 004f0291: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 004f0295: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 004f0298: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004f029c: mov dword ptr [esp + 0xc], esi */ W32((u32)(r_esp+0xcu), r_esi);
    /* 004f02a0: call 0x7ac12c */ r_esp -= 4; W32(r_esp, 0x4f02a5u); f_007ac12c();
    /* 004f02a5: call 0x4d2968 */ r_esp -= 4; W32(r_esp, 0x4f02aau); f_004d2968();
    /* 004f02aa: movzx eax, byte ptr [0xa72374] */ r_eax = (u32)R8((u32)(0xa72374u));
    /* 004f02b1: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004f02b3: jne 0x4f02c9 */ if (!fZ) goto L_004f02c9;
L_004f02b5:; BB(0x004f02b5);
    /* 004f02b5: mov dword ptr [0xa72384], 0x43838000 */ W32((u32)(0xa72384u), 0x43838000u);
    /* 004f02bf: or eax, 0xffffff04 */ {  u32 a = r_eax; u32 b = 0xffffff04u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f02c4: mov byte ptr [0xa72374], al */ W8((u32)(0xa72374u), (u8)r_eax);
L_004f02c9:; BB(0x004f02c9);
    /* 004f02c9: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
    /* 004f02cc: mov eax, dword ptr [eax + 0x18] */ r_eax = R32((u32)(r_eax+0x18u));
    /* 004f02cf: test eax, 0xff000000 */ {  u32 a = r_eax; u32 b = 0xff000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f02d4: jne 0x4f02db */ if (!fZ) goto L_004f02db;
L_004f02d6:; BB(0x004f02d6);
    /* 004f02d6: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
L_004f02db:; BB(0x004f02db);
    /* 004f02db: and eax, 0xffffff */ {  u32 a = r_eax; u32 b = 0xffffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004f02e0: and esi, 0xff000000 */ {  u32 a = r_esi; u32 b = 0xff000000u; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 004f02e6: or esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 004f02e8: call 0x4d28a4 */ r_esp -= 4; W32(r_esp, 0x4f02edu); f_004d28a4();
    /* 004f02ed: mov eax, dword ptr [0xa72384] */ r_eax = R32((u32)(0xa72384u));
    /* 004f02f2: fld dword ptr [0x91dcd8] */ FPUSH(R_F32((u32)(0x91dcd8u)));
    /* 004f02f8: fmul dword ptr [esp + 0x48] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x48u));
    /* 004f02fc: mov edx, dword ptr [ebx + 0x1c] */ r_edx = R32((u32)(r_ebx+0x1cu));
    /* 004f02ff: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 004f0303: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 004f0306: add edx, 0x50 */ {  u32 a = r_edx; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f0309: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 004f030d: mov dword ptr [esp + 0xc], esi */ W32((u32)(r_esp+0xcu), r_esi);
    /* 004f0311: call 0x7ac12c */ r_esp -= 4; W32(r_esp, 0x4f0316u); f_007ac12c();
    /* 004f0316: call 0x4d2968 */ r_esp -= 4; W32(r_esp, 0x4f031bu); f_004d2968();
    /* 004f031b: movzx eax, byte ptr [0xa72374] */ r_eax = (u32)R8((u32)(0xa72374u));
    /* 004f0322: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004f0324: jne 0x4f0342 */ if (!fZ) goto L_004f0342;
L_004f0326:; BB(0x004f0326);
    /* 004f0326: fld dword ptr [0x91e1bc] */ FPUSH(R_F32((u32)(0x91e1bcu)));
    /* 004f032c: mov dword ptr [0xa72378], 0x3f4ccccd */ W32((u32)(0xa72378u), 0x3f4ccccdu);
    /* 004f0336: or eax, 0xffffff08 */ {  u32 a = r_eax; u32 b = 0xffffff08u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f033b: mov byte ptr [0xa72374], al */ W8((u32)(0xa72374u), (u8)r_eax);
    /* 004f0340: jmp 0x4f0348 */ goto L_004f0348;
L_004f0342:; BB(0x004f0342);
    /* 004f0342: fld dword ptr [0xa72378] */ FPUSH(R_F32((u32)(0xa72378u)));
L_004f0348:; BB(0x004f0348);
    /* 004f0348: fld dword ptr [ebx + 0x48] */ FPUSH(R_F32((u32)(r_ebx+0x48u)));
    /* 004f034b: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004f034d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004f034f: fstp dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0)); FPOP();
    /* 004f0353: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004f0354: jbe 0x4f0463 */ if ((fC||fZ)) goto L_004f0463;
L_004f035a:; BB(0x004f035a);
    /* 004f035a: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 004f035e: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 004f0360: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004f0362: fsubr dword ptr [0x91dcd4] */ ST(0) = R_F32((u32)(0x91dcd4u)) - ST(0);
    /* 004f0368: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 004f036a: mov edx, dword ptr [ebx + 0x1c] */ r_edx = R32((u32)(r_ebx+0x1cu));
    /* 004f036d: movzx eax, byte ptr [edx + 0x32] */ r_eax = (u32)R8((u32)(r_edx+0x32u));
    /* 004f0371: fstp dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0)); FPOP();
    /* 004f0375: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004f0377: jne 0x4f03b7 */ if (!fZ) goto L_004f03b7;
L_004f0379:; BB(0x004f0379);
    /* 004f0379: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 004f037d: movzx eax, byte ptr [edx + 0x30] */ r_eax = (u32)R8((u32)(r_edx+0x30u));
    /* 004f0381: mov edx, dword ptr [eax*4 + 0x9b8f60] */ r_edx = R32((u32)(r_eax*4+0x9b8f60u));
    /* 004f0388: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 004f038c: mov dword ptr [esp + 0x18], 0x43540000 */ W32((u32)(r_esp+0x18u), 0x43540000u);
    /* 004f0394: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 004f0397: mov dword ptr [esp + 0x1c], 0x436a0000 */ W32((u32)(r_esp+0x1cu), 0x436a0000u);
    /* 004f039f: lea ebp, [esp + 0x18] */ r_ebp = (u32)(r_esp+0x18u);
    /* 004f03a3: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
    /* 004f03a7: mov dword ptr [esp + 4], 0xc0440000 */ W32((u32)(r_esp+0x4u), 0xc0440000u);
    /* 004f03af: call 0x4e9ef8 */ r_esp -= 4; W32(r_esp, 0x4f03b4u); f_004e9ef8();
    /* 004f03b4: mov edx, dword ptr [ebx + 0x1c] */ r_edx = R32((u32)(r_ebx+0x1cu));
L_004f03b7:; BB(0x004f03b7);
    /* 004f03b7: movsx eax, byte ptr [edx + 0x30] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x30u));
    /* 004f03bb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f03bc: call 0x7930c8 */ r_esp -= 4; W32(r_esp, 0x4f03c1u); f_007930c8();
    /* 004f03c1: mov ebp, eax */ r_ebp = r_eax;
    /* 004f03c3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f03c6: mov edx, dword ptr [ebx + 0x1c] */ r_edx = R32((u32)(r_ebx+0x1cu));
    /* 004f03c9: movzx ecx, byte ptr [edx + 0x32] */ r_ecx = (u32)R8((u32)(r_edx+0x32u));
    /* 004f03cd: test cl, 1 */ {  u32 a = (u8)r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004f03d0: je 0x4f03d7 */ if (fZ) goto L_004f03d7;
L_004f03d2:; BB(0x004f03d2);
    /* 004f03d2: mov ebp, 0x9b8f58 */ r_ebp = 0x9b8f58u;
L_004f03d7:; BB(0x004f03d7);
    /* 004f03d7: movzx edx, byte ptr [0xa72374] */ r_edx = (u32)R8((u32)(0xa72374u));
    /* 004f03de: test dl, 0x10 */ {  u32 a = (u8)r_edx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004f03e1: jne 0x4f03f9 */ if (!fZ) goto L_004f03f9;
L_004f03e3:; BB(0x004f03e3);
    /* 004f03e3: mov dword ptr [0xa72388], 0x43838000 */ W32((u32)(0xa72388u), 0x43838000u);
    /* 004f03ed: or edx, 0xffffff10 */ {  u32 a = r_edx; u32 b = 0xffffff10u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004f03f3: mov byte ptr [0xa72374], dl */ W8((u32)(0xa72374u), (u8)r_edx);
L_004f03f9:; BB(0x004f03f9);
    /* 004f03f9: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 004f03fd: fmul dword ptr [0x91e174] */ ST(0) = ST(0) * R_F32((u32)(0x91e174u));
    /* 004f0403: fnstcw word ptr [esp + 0x30] */ W16((u32)(r_esp+0x30u), fcw);
    /* 004f0407: movzx eax, word ptr [esp + 0x30] */ r_eax = (u32)R16((u32)(r_esp+0x30u));
    /* 004f040c: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f0411: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 004f0415: fldcw word ptr [esp + 0x38] */ fcw = R16((u32)(r_esp+0x38u));
    /* 004f0419: fistp qword ptr [esp + 0x40] */ W64((u32)(r_esp+0x40u), (u64)fx_int64(ST(0))); FPOP();
    /* 004f041d: fldcw word ptr [esp + 0x30] */ fcw = R16((u32)(r_esp+0x30u));
    /* 004f0421: mov ebx, dword ptr [esp + 0x40] */ r_ebx = R32((u32)(r_esp+0x40u));
    /* 004f0425: shl ebx, 0x18 */ { u32 c = (24u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 004f0428: or ebx, 0xffffff */ {  u32 a = r_ebx; u32 b = 0xffffffu; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 004f042e: call 0x4d28a4 */ r_esp -= 4; W32(r_esp, 0x4f0433u); f_004d28a4();
    /* 004f0433: mov edx, dword ptr [0xa72388] */ r_edx = R32((u32)(0xa72388u));
    /* 004f0439: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 004f043d: fmul dword ptr [0x91dcc8] */ ST(0) = ST(0) * R_F32((u32)(0x91dcc8u));
    /* 004f0443: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 004f0447: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 004f044a: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
    /* 004f044e: mov dword ptr [esp + 0xc], ebx */ W32((u32)(r_esp+0xcu), r_ebx);
    /* 004f0452: call 0x7ac12c */ r_esp -= 4; W32(r_esp, 0x4f0457u); f_007ac12c();
    /* 004f0457: call 0x4d2968 */ r_esp -= 4; W32(r_esp, 0x4f045cu); f_004d2968();
    /* 004f045c: add esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004f045f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004f0460: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f0461: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004f0462: ret  */ FN_RET(0x004f010a); r_esp += 4; return;
L_004f0463:; BB(0x004f0463);
    /* 004f0463: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004f0465: add esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004f0468: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004f0469: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f046a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004f046b: ret  */ FN_RET(0x004f010a); r_esp += 4; return;
}

void f_004f0200(void)
{
    FN_ENTER(0x004f0200);
    /* 004f0200: shr al, 0xf2 */ { u32 c = (18u) & 31; u32 a = (u8)r_eax; u32 r = a; if (c) { r = (c >= 8) ? 0 : (a >> c); r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fC = (c <= 8) ? ((a >> (c - 1)) & 1) : 0; fO = (a >> 7) & 1; fZ = (r == 0); fS = (r >> 7) & 1; fP = !__builtin_parity(r & 0xffu); } }
    /* 004f0203: pushfd  */ { u32 v = 0x202u | rt_eflags_extra | (u32)fC | ((u32)fP << 2) | ((u32)fA << 4) | ((u32)fZ << 6) | ((u32)fS << 7) | ((u32)fO << 11); r_esp -= 4; W32(r_esp, v); }
    UNSUP(0x004f0204, "falls out of decoded code");
}

void f_004f046c(void) /* sub_4F046C */
{
    FN_ENTER(0x004f046c);
    /* 004f046c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004f046d: mov edi, ecx */ r_edi = r_ecx;
    /* 004f046f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004f0471: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f0472: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f0473: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f0474: push 0x570 */ { u32 v = 0x570u; r_esp -= 4; W32(r_esp, v); }
    /* 004f0479: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4f047eu); f_00814298();
    /* 004f047e: mov edx, dword ptr [edi + 0x2c] */ r_edx = R32((u32)(r_edi+0x2cu));
    /* 004f0481: mov eax, dword ptr [edi + 0x24] */ r_eax = R32((u32)(r_edi+0x24u));
    /* 004f0484: mov dword ptr [0xa72574], 1 */ W32((u32)(0xa72574u), 0x1u);
    /* 004f048e: mov eax, dword ptr [eax + edx*4] */ r_eax = R32((u32)(r_eax+r_edx*4));
    /* 004f0491: push dword ptr [eax*8 + 0x9b8fc0] */ { u32 v = R32((u32)(r_eax*8+0x9b8fc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f0498: push dword ptr [edi + 0x50] */ { u32 v = R32((u32)(r_edi+0x50u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f049b: call 0x4f04a8 */ r_esp -= 4; W32(r_esp, 0x4f04a0u); f_004f04a8();
    /* 004f04a0: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004f04a3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004f04a4: ret  */ FN_RET(0x004f046c); r_esp += 4; return;
}

void f_004f04a8(void) /* sub_4F04A8 */
{
    FN_ENTER(0x004f04a8);
    /* 004f04a8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f04a9: mov ebp, esp */ r_ebp = r_esp;
    /* 004f04ab: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004f04ad: push 0x8d2d6e */ { u32 v = 0x8d2d6eu; r_esp -= 4; W32(r_esp, v); }
    /* 004f04b2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004f04b8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f04b9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004f04c0: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004f04c3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004f04c6: mov dword ptr [ebp - 0x2c], edi */ W32((u32)(r_ebp+0xffffffd4u), r_edi);
    /* 004f04c9: mov dword ptr [ebp - 0x28], esi */ W32((u32)(r_ebp+0xffffffd8u), r_esi);
    /* 004f04cc: mov dword ptr [ebp - 0x24], ebx */ W32((u32)(r_ebp+0xffffffdcu), r_ebx);
    /* 004f04cf: push 0x5c */ { u32 v = 0x5cu; r_esp -= 4; W32(r_esp, v); }
    /* 004f04d1: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 004f04d8: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4f04ddu); f_005caba4();
    /* 004f04dd: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 004f04e0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f04e3: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 004f04e6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f04e8: je 0x4f06d6 */ if (fZ) goto L_004f06d6;
L_004f04ee:; BB(0x004f04ee);
    /* 004f04ee: mov dword ptr [ebp - 0x3c], 1 */ W32((u32)(r_ebp+0xffffffc4u), 0x1u);
    /* 004f04f5: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004f04fc: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f04ff: mov ecx, eax */ r_ecx = r_eax;
    /* 004f0501: mov dword ptr [ebp - 0x48], ecx */ W32((u32)(r_ebp+0xffffffb8u), r_ecx);
    /* 004f0504: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x4f0509u); f_008193cc();
    /* 004f0509: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 004f0510: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004f0513: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 004f0516: mov dword ptr [ecx], 0xafdb78 */ W32((u32)(r_ecx), 0xafdb78u);
    /* 004f051c: mov eax, dword ptr [0x9b9014] */ r_eax = R32((u32)(0x9b9014u));
    /* 004f0521: mov ebx, dword ptr [0xa4d7f8] */ r_ebx = R32((u32)(0xa4d7f8u));
    /* 004f0527: mov dword ptr [ecx + 0x20], 0 */ W32((u32)(r_ecx+0x20u), 0x0u);
    /* 004f052e: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 004f0531: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004f0532: mov dword ptr [ecx + 0x1c], ebx */ W32((u32)(r_ecx+0x1cu), r_ebx);
    /* 004f0535: mov dword ptr [ecx + 0x24], edx */ W32((u32)(r_ecx+0x24u), r_edx);
    /* 004f0538: call 0x4e6f24 */ r_esp -= 4; W32(r_esp, 0x4f053du); f_004e6f24();
    /* 004f053d: mov edx, eax */ r_edx = r_eax;
    /* 004f053f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f0542: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 004f0545: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 004f0548: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 004f054b: lea esi, [edx + edx] */ r_esi = (u32)(r_edx+r_edx);
    /* 004f054e: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f0550: sub esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 004f0552: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f0554: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f0556: sub esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 004f0558: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 004f055b: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f055d: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 004f0560: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f0562: movsx esi, word ptr [esi + ecx*2 + 0x9b5b60] */ r_esi = (u32)(i32)(i16)R16((u32)(r_esi+r_ecx*2+0x9b5b60u));
    /* 004f056a: mov dword ptr [eax + 0x2c], esi */ W32((u32)(r_eax+0x2cu), r_esi);
    /* 004f056d: movsx edx, word ptr [edx + ecx*2 + 0x38] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edx+r_ecx*2+0x38u));
    /* 004f0572: mov dword ptr [eax + 0x28], edx */ W32((u32)(r_eax+0x28u), r_edx);
    /* 004f0575: mov ebx, 1 */ r_ebx = 0x1u;
    /* 004f057a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004f057c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004f057e: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 004f0580: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004f0582: jle 0x4f06c6 */ if ((fZ||fS!=fO)) goto L_004f06c6;
L_004f0588:; BB(0x004f0588);
    /* 004f0588: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f058b: or eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f058d: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f058f: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004f0592: cmp edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f0594: jl 0x4f0588 */ if ((fS!=fO)) goto L_004f0588;
L_004f0596:; BB(0x004f0596);
    /* 004f0596: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004f0599: mov dword ptr [ebx + 0x34], eax */ W32((u32)(r_ebx+0x34u), r_eax);
    /* 004f059c: mov dword ptr [ebx + 0x30], ecx */ W32((u32)(r_ebx+0x30u), r_ecx);
L_004f059f:; BB(0x004f059f);
    /* 004f059f: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004f05a1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004f05a3: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004f05a5: jle 0x4f05b5 */ if ((fZ||fS!=fO)) goto L_004f05b5;
L_004f05a7:; BB(0x004f05a7);
    /* 004f05a7: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f05a9: je 0x4f05b5 */ if (fZ) goto L_004f05b5;
L_004f05ab:; BB(0x004f05ab);
    /* 004f05ab: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f05ae: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f05b1: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f05b3: jl 0x4f05a7 */ if ((fS!=fO)) goto L_004f05a7;
L_004f05b5:; BB(0x004f05b5);
    /* 004f05b5: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 004f05b7: cmp ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f05ba: jle 0x4f0621 */ if ((fZ||fS!=fO)) goto L_004f0621;
L_004f05bc:; BB(0x004f05bc);
    /* 004f05bc: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 004f05bf: mov dword ptr [esi + 0x44], 9 */ W32((u32)(r_esi+0x44u), 0x9u);
    /* 004f05c6: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 004f05c9: mov eax, 0x38e38e39 */ r_eax = 0x38e38e39u;
    /* 004f05ce: imul ebx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f05d0: mov eax, ebx */ r_eax = r_ebx;
    /* 004f05d2: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004f05d5: mov edi, edx */ r_edi = r_edx;
    /* 004f05d7: sar edi, 1 */ { u32 c = (1u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 004f05d9: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 004f05db: lea eax, [edi + edi] */ r_eax = (u32)(r_edi+r_edi);
    /* 004f05de: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f05e0: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f05e2: add eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f05e4: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 004f05e6: mov dword ptr [esi + 0x48], edi */ W32((u32)(r_esi+0x48u), r_edi);
    /* 004f05e9: lea ecx, [ecx + 8] */ r_ecx = (u32)(r_ecx+0x8u);
    /* 004f05ec: mov eax, 0x38e38e39 */ r_eax = 0x38e38e39u;
    /* 004f05f1: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f05f3: sar ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 004f05f6: mov dword ptr [esi + 0x54], ebx */ W32((u32)(r_esi+0x54u), r_ebx);
    /* 004f05f9: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 004f05fb: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004f05fd: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f0600: mov dword ptr [esi + 0x4c], edx */ W32((u32)(r_esi+0x4cu), r_edx);
    /* 004f0603: lea ebx, [edi + edi*8] */ r_ebx = (u32)(r_edi+r_edi*8);
    /* 004f0606: neg ebx */ { u32 x = r_ebx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 004f0608: add ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f060a: cmp ecx, 9 */ {  u32 a = r_ecx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f060d: jg 0x4f0616 */ if ((!fZ&&fS==fO)) goto L_004f0616;
L_004f060f:; BB(0x004f060f);
    /* 004f060f: mov eax, esi */ r_eax = r_esi;
    /* 004f0611: mov dword ptr [eax + 0x50], ecx */ W32((u32)(r_eax+0x50u), r_ecx);
    /* 004f0614: jmp 0x4f063b */ goto L_004f063b;
L_004f0616:; BB(0x004f0616);
    /* 004f0616: mov eax, esi */ r_eax = r_esi;
    /* 004f0618: mov dword ptr [eax + 0x50], 9 */ W32((u32)(r_eax+0x50u), 0x9u);
    /* 004f061f: jmp 0x4f063b */ goto L_004f063b;
L_004f0621:; BB(0x004f0621);
    /* 004f0621: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 004f0624: mov dword ptr [eax + 0x4c], 1 */ W32((u32)(r_eax+0x4cu), 0x1u);
    /* 004f062b: mov dword ptr [eax + 0x54], ebx */ W32((u32)(r_eax+0x54u), r_ebx);
    /* 004f062e: mov dword ptr [eax + 0x50], ecx */ W32((u32)(r_eax+0x50u), r_ecx);
    /* 004f0631: mov dword ptr [eax + 0x48], 0 */ W32((u32)(r_eax+0x48u), 0x0u);
    /* 004f0638: mov dword ptr [eax + 0x44], ecx */ W32((u32)(r_eax+0x44u), r_ecx);
L_004f063b:; BB(0x004f063b);
    /* 004f063b: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004f063e: mov dword ptr [ebp - 0x34], edi */ W32((u32)(r_ebp+0xffffffccu), r_edi);
    /* 004f0641: fild dword ptr [ebp - 0x34] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffccu)));
    /* 004f0644: fstp dword ptr [eax + 0x58] */ W_F32((u32)(r_eax+0x58u), ST(0)); FPOP();
    /* 004f0647: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f0649: mov dword ptr [eax + 0x3c], 1 */ W32((u32)(r_eax+0x3cu), 0x1u);
    /* 004f0650: mov dword ptr [eax + 0x40], 0 */ W32((u32)(r_eax+0x40u), 0x0u);
    /* 004f0657: je 0x4f06bc */ if (fZ) goto L_004f06bc;
L_004f0659:; BB(0x004f0659);
    /* 004f0659: mov eax, edx */ r_eax = r_edx;
    /* 004f065b: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f065e: je 0x4f067e */ if (fZ) goto L_004f067e;
L_004f0660:; BB(0x004f0660);
    /* 004f0660: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f0663: jne 0x4f066f */ if (!fZ) goto L_004f066f;
L_004f0665:; BB(0x004f0665);
    /* 004f0665: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004f0667: call 0x4ecd84 */ r_esp -= 4; W32(r_esp, 0x4f066cu); f_004ecd84();
    /* 004f066c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f066d: jmp 0x4f069b */ goto L_004f069b;
L_004f066f:; BB(0x004f066f);
    /* 004f066f: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004f0672: jne 0x4f069b */ if (!fZ) goto L_004f069b;
L_004f0674:; BB(0x004f0674);
    /* 004f0674: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004f0676: call 0x4ecd84 */ r_esp -= 4; W32(r_esp, 0x4f067bu); f_004ecd84();
    /* 004f067b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f067c: jmp 0x4f069b */ goto L_004f069b;
L_004f067e:; BB(0x004f067e);
    /* 004f067e: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f0681: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 004f0684: test dl, 0x10 */ {  u32 a = (u8)r_edx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004f0687: je 0x4f0693 */ if (fZ) goto L_004f0693;
L_004f0689:; BB(0x004f0689);
    /* 004f0689: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 004f068b: call 0x4ecd84 */ r_esp -= 4; W32(r_esp, 0x4f0690u); f_004ecd84();
    /* 004f0690: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f0691: jmp 0x4f069b */ goto L_004f069b;
L_004f0693:; BB(0x004f0693);
    /* 004f0693: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 004f0695: call 0x4ecd84 */ r_esp -= 4; W32(r_esp, 0x4f069au); f_004ecd84();
    /* 004f069a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_004f069b:; BB(0x004f069b);
    /* 004f069b: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_004f06a2:; BB(0x004f06a2);
    /* 004f06a2: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 004f06a5: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 004f06a8: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 004f06ab: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004f06ae: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004f06b1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004f06b8: mov esp, ebp */ r_esp = r_ebp;
    /* 004f06ba: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f06bb: ret  */ FN_RET(0x004f04a8); r_esp += 4; return;
L_004f06bc:; BB(0x004f06bc);
    /* 004f06bc: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 004f06be: call 0x4ecd84 */ r_esp -= 4; W32(r_esp, 0x4f06c3u); f_004ecd84();
    /* 004f06c3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f06c4: jmp 0x4f069b */ goto L_004f069b;
L_004f06c6:; BB(0x004f06c6);
    /* 004f06c6: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004f06c9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004f06cb: mov dword ptr [ebx + 0x34], eax */ W32((u32)(r_ebx+0x34u), r_eax);
    /* 004f06ce: mov dword ptr [ebx + 0x30], eax */ W32((u32)(r_ebx+0x30u), r_eax);
    /* 004f06d1: jmp 0x4f059f */ goto L_004f059f;
L_004f06d6:; BB(0x004f06d6);
    /* 004f06d6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004f06d8: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 004f06db: jmp 0x4f06a2 */ goto L_004f06a2;
}

void f_004f06e0(void)
{
    FN_ENTER(0x004f06e0);
    /* 004f06e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f06e1: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004f06e3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004f06e5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f06e6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f06e7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f06e8: push 0x570 */ { u32 v = 0x570u; r_esp -= 4; W32(r_esp, v); }
    /* 004f06ed: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4f06f2u); f_00814298();
    /* 004f06f2: push dword ptr [ebp + 0x50] */ { u32 v = R32((u32)(r_ebp+0x50u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f06f5: mov dword ptr [0xa72574], 1 */ W32((u32)(0xa72574u), 0x1u);
    /* 004f06ff: call 0x4f070c */ r_esp -= 4; W32(r_esp, 0x4f0704u); f_004f070c();
    /* 004f0704: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004f0707: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f0708: ret  */ FN_RET(0x004f06e0); r_esp += 4; return;
}

void f_004f070c(void) /* sub_4F070C */
{
    FN_ENTER(0x004f070c);
    /* 004f070c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f070d: mov ebp, esp */ r_ebp = r_esp;
    /* 004f070f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004f0711: push 0x8d2da2 */ { u32 v = 0x8d2da2u; r_esp -= 4; W32(r_esp, v); }
    /* 004f0716: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004f071c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f071d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004f0724: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004f0727: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004f072a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 004f072d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 004f0730: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 004f0733: push 0x44 */ { u32 v = 0x44u; r_esp -= 4; W32(r_esp, v); }
    /* 004f0735: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 004f073c: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4f0741u); f_005caba4();
    /* 004f0741: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004f0744: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f0747: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 004f074a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f074c: je 0x4f07f5 */ if (fZ) goto L_004f07f5;
L_004f0752:; BB(0x004f0752);
    /* 004f0752: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 004f0759: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004f0760: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f0763: mov ecx, eax */ r_ecx = r_eax;
    /* 004f0765: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 004f0768: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x4f076du); f_008193cc();
    /* 004f076d: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 004f0774: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f0777: mov dword ptr [ecx], 0xafdb88 */ W32((u32)(r_ecx), 0xafdb88u);
    /* 004f077d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004f077f: mov eax, dword ptr [0x9b9018] */ r_eax = R32((u32)(0x9b9018u));
    /* 004f0784: mov ebx, dword ptr [0xa4d7f8] */ r_ebx = R32((u32)(0xa4d7f8u));
    /* 004f078a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004f078b: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 004f078e: mov dword ptr [ecx + 0x1c], ebx */ W32((u32)(r_ecx+0x1cu), r_ebx);
    /* 004f0791: mov dword ptr [ecx + 0x20], edx */ W32((u32)(r_ecx+0x20u), r_edx);
    /* 004f0794: mov dword ptr [ecx + 0x24], edx */ W32((u32)(r_ecx+0x24u), r_edx);
    /* 004f0797: call 0x4e6f24 */ r_esp -= 4; W32(r_esp, 0x4f079cu); f_004e6f24();
    /* 004f079c: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f079f: mov dword ptr [ebx + 0x30], 1 */ W32((u32)(r_ebx+0x30u), 0x1u);
    /* 004f07a6: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 004f07a9: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f07ab: mov dword ptr [ebx + 0x34], 0 */ W32((u32)(r_ebx+0x34u), 0x0u);
    /* 004f07b2: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 004f07b4: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004f07b6: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f07b8: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f07ba: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004f07bc: movsx eax, word ptr [edx*4 + 0x9b5b68] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx*4+0x9b5b68u));
    /* 004f07c4: mov dword ptr [ebx + 0x28], eax */ W32((u32)(r_ebx+0x28u), r_eax);
    /* 004f07c7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004f07c9: mov dword ptr [ebx + 0x38], ecx */ W32((u32)(r_ebx+0x38u), r_ecx);
    /* 004f07cc: mov dword ptr [ebx + 0x3c], ecx */ W32((u32)(r_ebx+0x3cu), r_ecx);
    /* 004f07cf: mov dword ptr [ebx + 0x40], ecx */ W32((u32)(r_ebx+0x40u), r_ecx);
    /* 004f07d2: call 0x4ecd84 */ r_esp -= 4; W32(r_esp, 0x4f07d7u); f_004ecd84();
    /* 004f07d7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004f07da: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_004f07e1:; BB(0x004f07e1);
    /* 004f07e1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f07e4: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004f07e7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004f07ea: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004f07f1: mov esp, ebp */ r_esp = r_ebp;
    /* 004f07f3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f07f4: ret  */ FN_RET(0x004f070c); r_esp += 4; return;
L_004f07f5:; BB(0x004f07f5);
    /* 004f07f5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004f07f7: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004f07fa: jmp 0x4f07e1 */ goto L_004f07e1;
}

void f_004f07fc(void)
{
    FN_ENTER(0x004f07fc);
    /* 004f07fc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f07fd: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004f07ff: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004f0801: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f0802: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f0803: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f0804: push 0x570 */ { u32 v = 0x570u; r_esp -= 4; W32(r_esp, v); }
    /* 004f0809: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4f080eu); f_00814298();
    /* 004f080e: push dword ptr [ebp + 0x50] */ { u32 v = R32((u32)(r_ebp+0x50u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f0811: mov dword ptr [0xa72574], 1 */ W32((u32)(0xa72574u), 0x1u);
    /* 004f081b: call 0x4f0828 */ r_esp -= 4; W32(r_esp, 0x4f0820u); f_004f0828();
    /* 004f0820: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004f0823: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f0824: ret  */ FN_RET(0x004f07fc); r_esp += 4; return;
}

void f_004f0828(void) /* sub_4F0828 */
{
    FN_ENTER(0x004f0828);
    /* 004f0828: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f0829: mov ebp, esp */ r_ebp = r_esp;
    /* 004f082b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004f082d: push 0x8d2dc8 */ { u32 v = 0x8d2dc8u; r_esp -= 4; W32(r_esp, v); }
    /* 004f0832: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004f0838: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f0839: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004f0840: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004f0843: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004f0846: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004f0849: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004f084c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004f084f: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004f0851: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 004f0858: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4f085du); f_005caba4();
    /* 004f085d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f085e: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004f0861: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f0863: je 0x4f0896 */ if (fZ) goto L_004f0896;
L_004f0865:; BB(0x004f0865);
    /* 004f0865: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 004f086c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004f0873: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f0876: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f0879: call 0x4f089c */ r_esp -= 4; W32(r_esp, 0x4f087eu); f_004f089c();
    /* 004f087e: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f0881: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_004f0888:; BB(0x004f0888);
    /* 004f0888: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004f088b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004f0892: mov esp, ebp */ r_esp = r_ebp;
    /* 004f0894: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f0895: ret  */ FN_RET(0x004f0828); r_esp += 4; return;
L_004f0896:; BB(0x004f0896);
    /* 004f0896: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004f0898: jmp 0x4f0888 */ goto L_004f0888;
}

void f_004f089c(void) /* sub_4F089C */
{
    FN_ENTER(0x004f089c);
    /* 004f089c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f089d: mov ebp, esp */ r_ebp = r_esp;
    /* 004f089f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004f08a1: push 0x8d2de4 */ { u32 v = 0x8d2de4u; r_esp -= 4; W32(r_esp, v); }
    /* 004f08a6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004f08ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f08ad: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004f08b4: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004f08b7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004f08ba: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004f08bd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004f08c0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004f08c3: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f08c6: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004f08c9: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x4f08ceu); f_008193cc();
    /* 004f08ce: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004f08d5: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f08d8: mov dword ptr [edi], 0xafdb98 */ W32((u32)(r_edi), 0xafdb98u);
    /* 004f08de: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 004f08e0: mov eax, dword ptr [0x9b901c] */ r_eax = R32((u32)(0x9b901cu));
    /* 004f08e5: mov ecx, dword ptr [0xa4d7f8] */ r_ecx = R32((u32)(0xa4d7f8u));
    /* 004f08eb: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 004f08ed: mov dword ptr [edi + 4], eax */ W32((u32)(r_edi+0x4u), r_eax);
    /* 004f08f0: mov dword ptr [edi + 0x1c], ecx */ W32((u32)(r_edi+0x1cu), r_ecx);
    /* 004f08f3: mov edx, dword ptr [ecx + 0x48] */ r_edx = R32((u32)(r_ecx+0x48u));
    /* 004f08f6: mov dword ptr [edi + 0x34], edx */ W32((u32)(r_edi+0x34u), r_edx);
    /* 004f08f9: mov ebx, dword ptr [ecx + 0x4c] */ r_ebx = R32((u32)(r_ecx+0x4cu));
    /* 004f08fc: mov dword ptr [edi + 0x38], ebx */ W32((u32)(r_edi+0x38u), r_ebx);
    /* 004f08ff: mov dword ptr [edi + 0x20], esi */ W32((u32)(r_edi+0x20u), r_esi);
    /* 004f0902: mov dword ptr [edi + 0x24], esi */ W32((u32)(r_edi+0x24u), r_esi);
    /* 004f0905: mov dword ptr [edi + 0x3c], 0 */ W32((u32)(r_edi+0x3cu), 0x0u);
    /* 004f090c: call 0x4ecd84 */ r_esp -= 4; W32(r_esp, 0x4f0911u); f_004ecd84();
    /* 004f0911: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f0912: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f0915: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 004f0918: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 004f091b: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f091e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004f0921: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004f0928: mov esp, ebp */ r_esp = r_ebp;
    /* 004f092a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f092b: ret 4 */ FN_RET(0x004f089c); r_esp += 8; return;
}

void f_004f0930(void)
{
    FN_ENTER(0x004f0930);
    /* 004f0930: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f0931: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004f0933: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004f0935: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f0936: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f0937: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f0938: push 0x570 */ { u32 v = 0x570u; r_esp -= 4; W32(r_esp, v); }
    /* 004f093d: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4f0942u); f_00814298();
    /* 004f0942: push dword ptr [ebp + 0x50] */ { u32 v = R32((u32)(r_ebp+0x50u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f0945: mov dword ptr [0xa72574], 1 */ W32((u32)(0xa72574u), 0x1u);
    /* 004f094f: call 0x4f095c */ r_esp -= 4; W32(r_esp, 0x4f0954u); f_004f095c();
    /* 004f0954: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004f0957: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f0958: ret  */ FN_RET(0x004f0930); r_esp += 4; return;
}

void f_004f095c(void) /* sub_4F095C */
{
    FN_ENTER(0x004f095c);
    /* 004f095c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f095d: mov ebp, esp */ r_ebp = r_esp;
    /* 004f095f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004f0961: push 0x8d2e0c */ { u32 v = 0x8d2e0cu; r_esp -= 4; W32(r_esp, v); }
    /* 004f0966: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004f096c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f096d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004f0974: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004f0977: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004f097a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004f097d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004f0980: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004f0983: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 004f0985: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 004f098c: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4f0991u); f_005caba4();
    /* 004f0991: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f0992: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004f0995: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f0997: je 0x4f09ca */ if (fZ) goto L_004f09ca;
L_004f0999:; BB(0x004f0999);
    /* 004f0999: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 004f09a0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004f09a7: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f09aa: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f09ad: call 0x4f09d0 */ r_esp -= 4; W32(r_esp, 0x4f09b2u); f_004f09d0();
    /* 004f09b2: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f09b5: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_004f09bc:; BB(0x004f09bc);
    /* 004f09bc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004f09bf: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004f09c6: mov esp, ebp */ r_esp = r_ebp;
    /* 004f09c8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f09c9: ret  */ FN_RET(0x004f095c); r_esp += 4; return;
L_004f09ca:; BB(0x004f09ca);
    /* 004f09ca: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004f09cc: jmp 0x4f09bc */ goto L_004f09bc;
}

void f_004f098f(void)
{
    FN_ENTER(0x004f098f);
    goto L_004f098f;
L_004f091b:; BB(0x004f091b);
    /* 004f091b: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f091e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004f0921: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004f0928: mov esp, ebp */ r_esp = r_ebp;
    /* 004f092a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f092b: ret 4 */ FN_RET(0x004f098f); r_esp += 8; return;
L_004f098f:; BB(0x004f098f);
    /* 004f098f: or eax, 0x45895900 */ {  u32 a = r_eax; u32 b = 0x45895900u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004f0994: loopne 0x4f091b */ r_ecx--; if (r_ecx && !fZ) goto L_004f091b;
    /* 004f0996: sal byte ptr [ecx + esi - 0x39], 0x45 */ { u32 ad = (u32)(r_ecx+r_esi+0xffffffc7u); u32 c = (5u) & 31; u32 a = R8(ad); u32 r = a; if (c) { r = (a << c) & 0xffu; W8(ad, r);  } }
    /* 004f099b: fadd qword ptr [ecx] */ ST(0) = ST(0) + R_F64((u32)(r_ecx));
    /* 004f099d: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 004f099f: add bh, al */ {  u32 a = (u8)(r_ebx>>8); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 004f09a1: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004f09a2: cld  */ rt_df = 0;
    /* 004f09a3: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 004f09a5: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 004f09a7: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f09aa: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f09ad: call 0x4f09d0 */ r_esp -= 4; W32(r_esp, 0x4f09b2u); f_004f09d0();
    /* 004f09b2: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f09b5: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 004f09bc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004f09bf: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004f09c6: mov esp, ebp */ r_esp = r_ebp;
    /* 004f09c8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f09c9: ret  */ FN_RET(0x004f098f); r_esp += 4; return;
}

void f_004f09d0(void) /* sub_4F09D0 */
{
    FN_ENTER(0x004f09d0);
    /* 004f09d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f09d1: mov ebp, esp */ r_ebp = r_esp;
    /* 004f09d3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004f09d5: push 0x8d2e28 */ { u32 v = 0x8d2e28u; r_esp -= 4; W32(r_esp, v); }
    /* 004f09da: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004f09e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f09e1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004f09e8: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004f09eb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004f09ee: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004f09f1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004f09f4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004f09f7: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f09fa: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004f09fd: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x4f0a02u); f_008193cc();
    /* 004f0a02: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004f0a09: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f0a0c: mov dword ptr [ecx], 0xafdba8 */ W32((u32)(r_ecx), 0xafdba8u);
    /* 004f0a12: mov eax, dword ptr [0x9b9020] */ r_eax = R32((u32)(0x9b9020u));
    /* 004f0a17: mov edx, dword ptr [0xa4d7f8] */ r_edx = R32((u32)(0xa4d7f8u));
    /* 004f0a1d: mov dword ptr [ecx + 0x20], 0 */ W32((u32)(r_ecx+0x20u), 0x0u);
    /* 004f0a24: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 004f0a27: mov dword ptr [ecx + 0x1c], edx */ W32((u32)(r_ecx+0x1cu), r_edx);
    /* 004f0a2a: mov dword ptr [ecx + 0x24], 1 */ W32((u32)(r_ecx+0x24u), 0x1u);
    /* 004f0a31: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 004f0a33: mov dword ptr [ecx + 0x28], 0 */ W32((u32)(r_ecx+0x28u), 0x0u);
    /* 004f0a3a: call 0x4ecd84 */ r_esp -= 4; W32(r_esp, 0x4f0a3fu); f_004ecd84();
    /* 004f0a3f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f0a40: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f0a43: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004f0a46: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004f0a4d: mov esp, ebp */ r_esp = r_ebp;
    /* 004f0a4f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f0a50: ret 4 */ FN_RET(0x004f09d0); r_esp += 8; return;
}

void f_004f0a54(void)
{
    FN_ENTER(0x004f0a54);
    /* 004f0a54: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f0a55: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004f0a57: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004f0a59: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f0a5a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f0a5b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f0a5c: push 0x570 */ { u32 v = 0x570u; r_esp -= 4; W32(r_esp, v); }
    /* 004f0a61: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4f0a66u); f_00814298();
    /* 004f0a66: push dword ptr [ebp + 0x50] */ { u32 v = R32((u32)(r_ebp+0x50u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f0a69: mov dword ptr [0xa72574], 1 */ W32((u32)(0xa72574u), 0x1u);
    /* 004f0a73: call 0x4f0a80 */ r_esp -= 4; W32(r_esp, 0x4f0a78u); f_004f0a80();
    /* 004f0a78: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004f0a7b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f0a7c: ret  */ FN_RET(0x004f0a54); r_esp += 4; return;
}

void f_004f0a80(void) /* sub_4F0A80 */
{
    FN_ENTER(0x004f0a80);
    /* 004f0a80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f0a81: mov ebp, esp */ r_ebp = r_esp;
    /* 004f0a83: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004f0a85: push 0x8d2e50 */ { u32 v = 0x8d2e50u; r_esp -= 4; W32(r_esp, v); }
    /* 004f0a8a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004f0a90: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f0a91: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004f0a98: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004f0a9b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004f0a9e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004f0aa1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004f0aa4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004f0aa7: push 0x34 */ { u32 v = 0x34u; r_esp -= 4; W32(r_esp, v); }
    /* 004f0aa9: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 004f0ab0: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4f0ab5u); f_005caba4();
    /* 004f0ab5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f0ab6: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004f0ab9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f0abb: je 0x4f0aee */ if (fZ) goto L_004f0aee;
L_004f0abd:; BB(0x004f0abd);
    /* 004f0abd: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 004f0ac4: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004f0acb: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f0ace: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f0ad1: call 0x4f0af4 */ r_esp -= 4; W32(r_esp, 0x4f0ad6u); f_004f0af4();
    /* 004f0ad6: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f0ad9: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_004f0ae0:; BB(0x004f0ae0);
    /* 004f0ae0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004f0ae3: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004f0aea: mov esp, ebp */ r_esp = r_ebp;
    /* 004f0aec: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f0aed: ret  */ FN_RET(0x004f0a80); r_esp += 4; return;
L_004f0aee:; BB(0x004f0aee);
    /* 004f0aee: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004f0af0: jmp 0x4f0ae0 */ goto L_004f0ae0;
}

void f_004f0af4(void) /* sub_4F0AF4 */
{
    FN_ENTER(0x004f0af4);
    /* 004f0af4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f0af5: mov ebp, esp */ r_ebp = r_esp;
    /* 004f0af7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004f0af9: push 0x8d2e6c */ { u32 v = 0x8d2e6cu; r_esp -= 4; W32(r_esp, v); }
    /* 004f0afe: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004f0b04: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f0b05: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004f0b0c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004f0b0f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004f0b12: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004f0b15: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004f0b18: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004f0b1b: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f0b1e: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004f0b21: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x4f0b26u); f_008193cc();
    /* 004f0b26: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004f0b2d: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f0b30: mov dword ptr [ebx], 0xafdbb8 */ W32((u32)(r_ebx), 0xafdbb8u);
    /* 004f0b36: mov eax, dword ptr [0x9b9024] */ r_eax = R32((u32)(0x9b9024u));
    /* 004f0b3b: mov edx, dword ptr [0xa4d7f8] */ r_edx = R32((u32)(0xa4d7f8u));
    /* 004f0b41: mov dword ptr [ebx + 0x2c], 1 */ W32((u32)(r_ebx+0x2cu), 0x1u);
    /* 004f0b48: mov dword ptr [ebx + 4], eax */ W32((u32)(r_ebx+0x4u), r_eax);
    /* 004f0b4b: mov dword ptr [ebx + 0x1c], edx */ W32((u32)(r_ebx+0x1cu), r_edx);
    /* 004f0b4e: mov dword ptr [ebx + 0x30], 0 */ W32((u32)(r_ebx+0x30u), 0x0u);
    /* 004f0b55: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 004f0b57: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004f0b59: mov dword ptr [ebx + 0x20], ecx */ W32((u32)(r_ebx+0x20u), r_ecx);
    /* 004f0b5c: mov dword ptr [ebx + 0x28], ecx */ W32((u32)(r_ebx+0x28u), r_ecx);
    /* 004f0b5f: mov dword ptr [ebx + 0x24], ecx */ W32((u32)(r_ebx+0x24u), r_ecx);
    /* 004f0b62: call 0x4ecd84 */ r_esp -= 4; W32(r_esp, 0x4f0b67u); f_004ecd84();
    /* 004f0b67: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f0b68: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f0b6b: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f0b6e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004f0b71: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004f0b78: mov esp, ebp */ r_esp = r_ebp;
    /* 004f0b7a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f0b7b: ret 4 */ FN_RET(0x004f0af4); r_esp += 8; return;
}

void f_004f0b00(void)
{
    FN_ENTER(0x004f0b00);
    /* 004f0b00: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 004f0b02: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 004f0b04: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f0b05: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004f0b0c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004f0b0f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004f0b12: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004f0b15: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004f0b18: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004f0b1b: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f0b1e: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004f0b21: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x4f0b26u); f_008193cc();
    /* 004f0b26: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004f0b2d: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f0b30: mov dword ptr [ebx], 0xafdbb8 */ W32((u32)(r_ebx), 0xafdbb8u);
    /* 004f0b36: mov eax, dword ptr [0x9b9024] */ r_eax = R32((u32)(0x9b9024u));
    /* 004f0b3b: mov edx, dword ptr [0xa4d7f8] */ r_edx = R32((u32)(0xa4d7f8u));
    /* 004f0b41: mov dword ptr [ebx + 0x2c], 1 */ W32((u32)(r_ebx+0x2cu), 0x1u);
    /* 004f0b48: mov dword ptr [ebx + 4], eax */ W32((u32)(r_ebx+0x4u), r_eax);
    /* 004f0b4b: mov dword ptr [ebx + 0x1c], edx */ W32((u32)(r_ebx+0x1cu), r_edx);
    /* 004f0b4e: mov dword ptr [ebx + 0x30], 0 */ W32((u32)(r_ebx+0x30u), 0x0u);
    /* 004f0b55: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 004f0b57: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004f0b59: mov dword ptr [ebx + 0x20], ecx */ W32((u32)(r_ebx+0x20u), r_ecx);
    /* 004f0b5c: mov dword ptr [ebx + 0x28], ecx */ W32((u32)(r_ebx+0x28u), r_ecx);
    /* 004f0b5f: mov dword ptr [ebx + 0x24], ecx */ W32((u32)(r_ebx+0x24u), r_ecx);
    /* 004f0b62: call 0x4ecd84 */ r_esp -= 4; W32(r_esp, 0x4f0b67u); f_004ecd84();
    /* 004f0b67: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f0b68: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f0b6b: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f0b6e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004f0b71: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004f0b78: mov esp, ebp */ r_esp = r_ebp;
    /* 004f0b7a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f0b7b: ret 4 */ FN_RET(0x004f0b00); r_esp += 8; return;
}

void f_004f0b80(void)
{
    FN_ENTER(0x004f0b80);
    /* 004f0b80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f0b81: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004f0b83: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 004f0b86: add eax, 0x50 */ {  u32 a = r_eax; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f0b89: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f0b8a: call 0x4e732c */ r_esp -= 4; W32(r_esp, 0x4f0b8fu); f_004e732c();
    /* 004f0b8f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f0b90: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f0b92: jne 0x4f0ba8 */ if (!fZ) goto L_004f0ba8;
L_004f0b94:; BB(0x004f0b94);
    /* 004f0b94: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004f0b96: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f0b97: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f0b98: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f0b99: push 0x575 */ { u32 v = 0x575u; r_esp -= 4; W32(r_esp, v); }
    /* 004f0b9e: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4f0ba3u); f_00814298();
    /* 004f0ba3: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004f0ba6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f0ba7: ret  */ FN_RET(0x004f0b80); r_esp += 4; return;
L_004f0ba8:; BB(0x004f0ba8);
    /* 004f0ba8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004f0baa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f0bab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f0bac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f0bad: push 0x570 */ { u32 v = 0x570u; r_esp -= 4; W32(r_esp, v); }
    /* 004f0bb2: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4f0bb7u); f_00814298();
    /* 004f0bb7: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f0bba: mov edx, dword ptr [ebp + 0x1c] */ r_edx = R32((u32)(r_ebp+0x1cu));
    /* 004f0bbd: movsx eax, byte ptr [edx + 0x30] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x30u));
    /* 004f0bc1: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f0bc4: je 0x4f0c00 */ if (fZ) goto L_004f0c00;
L_004f0bc6:; BB(0x004f0bc6);
    /* 004f0bc6: call 0x4e74f8 */ r_esp -= 4; W32(r_esp, 0x4f0bcbu); f_004e74f8();
    /* 004f0bcb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004f0bcd: je 0x4f0bd9 */ if (fZ) goto L_004f0bd9;
L_004f0bcf:; BB(0x004f0bcf);
    /* 004f0bcf: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 004f0bd2: mov dword ptr [eax + 0x2c], 0 */ W32((u32)(r_eax+0x2cu), 0x0u);
L_004f0bd9:; BB(0x004f0bd9);
    /* 004f0bd9: mov dword ptr [0xa72238], 1 */ W32((u32)(0xa72238u), 0x1u);
    /* 004f0be3: mov dword ptr [0xa72120], 0 */ W32((u32)(0xa72120u), 0x0u);
    /* 004f0bed: mov dword ptr [ebp + 0x30], 0x3c */ W32((u32)(r_ebp+0x30u), 0x3cu);
    /* 004f0bf4: mov dword ptr [0xa72574], 2 */ W32((u32)(0xa72574u), 0x2u);
    /* 004f0bfe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f0bff: ret  */ FN_RET(0x004f0b80); r_esp += 4; return;
L_004f0c00:; BB(0x004f0c00);
    /* 004f0c00: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004f0c01: call 0x4e7200 */ r_esp -= 4; W32(r_esp, 0x4f0c06u); f_004e7200();
    /* 004f0c06: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f0c07: mov edx, dword ptr [ebp + 0x1c] */ r_edx = R32((u32)(r_ebp+0x1cu));
    /* 004f0c0a: mov byte ptr [edx + 0x30], al */ W8((u32)(r_edx+0x30u), (u8)r_eax);
    /* 004f0c0d: jmp 0x4f0bd9 */ goto L_004f0bd9;
}

void f_004f0c10(void) /* sub_4F0C10 */
{
    FN_ENTER(0x004f0c10);
    /* 004f0c10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f0c11: mov ebp, esp */ r_ebp = r_esp;
    /* 004f0c13: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004f0c15: push 0x8d2ebe */ { u32 v = 0x8d2ebeu; r_esp -= 4; W32(r_esp, v); }
    /* 004f0c1a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004f0c20: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f0c21: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004f0c28: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004f0c2b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004f0c2e: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 004f0c31: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 004f0c34: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 004f0c37: push 0x58 */ { u32 v = 0x58u; r_esp -= 4; W32(r_esp, v); }
    /* 004f0c39: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 004f0c40: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4f0c45u); f_005caba4();
    /* 004f0c45: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004f0c48: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f0c4b: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 004f0c4e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f0c50: je 0x4f0f3a */ if (fZ) goto L_004f0f3a;
L_004f0c56:; BB(0x004f0c56);
    /* 004f0c56: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 004f0c5d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004f0c64: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f0c67: mov ecx, eax */ r_ecx = r_eax;
    /* 004f0c69: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 004f0c6c: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x4f0c71u); f_008193cc();
    /* 004f0c71: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 004f0c78: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f0c7b: mov dword ptr [edx], 0xafdb68 */ W32((u32)(r_edx), 0xafdb68u);
    /* 004f0c81: mov eax, dword ptr [0x9b9010] */ r_eax = R32((u32)(0x9b9010u));
    /* 004f0c86: mov ebx, dword ptr [0xa4d7f8] */ r_ebx = R32((u32)(0xa4d7f8u));
    /* 004f0c8c: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 004f0c8f: mov dword ptr [edx + 0x1c], ebx */ W32((u32)(r_edx+0x1cu), r_ebx);
    /* 004f0c92: movzx ecx, byte ptr [ebx + 0x32] */ r_ecx = (u32)R8((u32)(r_ebx+0x32u));
    /* 004f0c96: test cl, 0xa */ {  u32 a = (u8)r_ecx; u32 b = 0xau; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004f0c99: jne 0x4f0d6e */ if (!fZ) goto L_004f0d6e;
L_004f0c9f:; BB(0x004f0c9f);
    /* 004f0c9f: call 0x4e74f0 */ r_esp -= 4; W32(r_esp, 0x4f0ca4u); f_004e74f0();
    /* 004f0ca4: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 004f0ca7: mov ebx, dword ptr [esi + 0x1c] */ r_ebx = R32((u32)(r_esi+0x1cu));
    /* 004f0caa: mov dl, byte ptr [ebx + 0x31] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebx+0x31u))) & 0xffu);
    /* 004f0cad: cmp dl, byte ptr [eax + 0x31] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_eax+0x31u)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 004f0cb0: jne 0x4f0d6e */ if (!fZ) goto L_004f0d6e;
L_004f0cb6:; BB(0x004f0cb6);
    /* 004f0cb6: call 0x4e74f0 */ r_esp -= 4; W32(r_esp, 0x4f0cbbu); f_004e74f0();
    /* 004f0cbb: mov edx, eax */ r_edx = r_eax;
    /* 004f0cbd: mov ecx, esi */ r_ecx = r_esi;
    /* 004f0cbf: mov eax, dword ptr [ecx + 0x1c] */ r_eax = R32((u32)(r_ecx+0x1cu));
    /* 004f0cc2: mov ebx, dword ptr [edx] */ r_ebx = R32((u32)(r_edx));
    /* 004f0cc4: mov esi, dword ptr [edx + 4] */ r_esi = R32((u32)(r_edx+0x4u));
    /* 004f0cc7: mov edi, dword ptr [edx + 8] */ r_edi = R32((u32)(r_edx+0x8u));
    /* 004f0cca: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 004f0ccd: mov dword ptr [eax], ebx */ W32((u32)(r_eax), r_ebx);
    /* 004f0ccf: mov dword ptr [eax + 4], esi */ W32((u32)(r_eax+0x4u), r_esi);
    /* 004f0cd2: mov dword ptr [eax + 8], edi */ W32((u32)(r_eax+0x8u), r_edi);
    /* 004f0cd5: mov dword ptr [eax + 0xc], ecx */ W32((u32)(r_eax+0xcu), r_ecx);
    /* 004f0cd8: mov ecx, dword ptr [edx + 0x10] */ r_ecx = R32((u32)(r_edx+0x10u));
    /* 004f0cdb: mov dword ptr [eax + 0x10], ecx */ W32((u32)(r_eax+0x10u), r_ecx);
    /* 004f0cde: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 004f0ce1: mov dword ptr [eax + 0x14], ecx */ W32((u32)(r_eax+0x14u), r_ecx);
    /* 004f0ce4: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 004f0ce7: mov dword ptr [eax + 0x18], ecx */ W32((u32)(r_eax+0x18u), r_ecx);
    /* 004f0cea: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 004f0ced: mov dword ptr [eax + 0x1c], ecx */ W32((u32)(r_eax+0x1cu), r_ecx);
    /* 004f0cf0: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 004f0cf3: mov dword ptr [eax + 0x20], ecx */ W32((u32)(r_eax+0x20u), r_ecx);
    /* 004f0cf6: mov ecx, dword ptr [edx + 0x24] */ r_ecx = R32((u32)(r_edx+0x24u));
    /* 004f0cf9: mov dword ptr [eax + 0x24], ecx */ W32((u32)(r_eax+0x24u), r_ecx);
    /* 004f0cfc: mov ecx, dword ptr [edx + 0x28] */ r_ecx = R32((u32)(r_edx+0x28u));
    /* 004f0cff: mov dword ptr [eax + 0x28], ecx */ W32((u32)(r_eax+0x28u), r_ecx);
    /* 004f0d02: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 004f0d05: mov dword ptr [eax + 0x2c], ecx */ W32((u32)(r_eax+0x2cu), r_ecx);
    /* 004f0d08: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 004f0d0b: mov dword ptr [eax + 0x30], ecx */ W32((u32)(r_eax+0x30u), r_ecx);
    /* 004f0d0e: mov ecx, dword ptr [edx + 0x34] */ r_ecx = R32((u32)(r_edx+0x34u));
    /* 004f0d11: mov dword ptr [eax + 0x34], ecx */ W32((u32)(r_eax+0x34u), r_ecx);
    /* 004f0d14: mov ecx, dword ptr [edx + 0x38] */ r_ecx = R32((u32)(r_edx+0x38u));
    /* 004f0d17: mov dword ptr [eax + 0x38], ecx */ W32((u32)(r_eax+0x38u), r_ecx);
    /* 004f0d1a: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 004f0d1d: mov dword ptr [eax + 0x3c], ecx */ W32((u32)(r_eax+0x3cu), r_ecx);
    /* 004f0d20: mov ecx, dword ptr [edx + 0x40] */ r_ecx = R32((u32)(r_edx+0x40u));
    /* 004f0d23: mov dword ptr [eax + 0x40], ecx */ W32((u32)(r_eax+0x40u), r_ecx);
    /* 004f0d26: mov ecx, dword ptr [edx + 0x44] */ r_ecx = R32((u32)(r_edx+0x44u));
    /* 004f0d29: mov dword ptr [eax + 0x44], ecx */ W32((u32)(r_eax+0x44u), r_ecx);
    /* 004f0d2c: mov ecx, dword ptr [edx + 0x48] */ r_ecx = R32((u32)(r_edx+0x48u));
    /* 004f0d2f: mov dword ptr [eax + 0x48], ecx */ W32((u32)(r_eax+0x48u), r_ecx);
    /* 004f0d32: mov ecx, dword ptr [edx + 0x4c] */ r_ecx = R32((u32)(r_edx+0x4cu));
    /* 004f0d35: mov dword ptr [eax + 0x4c], ecx */ W32((u32)(r_eax+0x4cu), r_ecx);
    /* 004f0d38: mov ecx, dword ptr [edx + 0x50] */ r_ecx = R32((u32)(r_edx+0x50u));
    /* 004f0d3b: mov dword ptr [eax + 0x50], ecx */ W32((u32)(r_eax+0x50u), r_ecx);
    /* 004f0d3e: mov ecx, dword ptr [edx + 0x54] */ r_ecx = R32((u32)(r_edx+0x54u));
    /* 004f0d41: mov dword ptr [eax + 0x54], ecx */ W32((u32)(r_eax+0x54u), r_ecx);
    /* 004f0d44: mov ecx, dword ptr [edx + 0x58] */ r_ecx = R32((u32)(r_edx+0x58u));
    /* 004f0d47: mov dword ptr [eax + 0x58], ecx */ W32((u32)(r_eax+0x58u), r_ecx);
    /* 004f0d4a: mov ecx, dword ptr [edx + 0x5c] */ r_ecx = R32((u32)(r_edx+0x5cu));
    /* 004f0d4d: mov dword ptr [eax + 0x5c], ecx */ W32((u32)(r_eax+0x5cu), r_ecx);
    /* 004f0d50: mov ecx, dword ptr [edx + 0x60] */ r_ecx = R32((u32)(r_edx+0x60u));
    /* 004f0d53: mov dword ptr [eax + 0x60], ecx */ W32((u32)(r_eax+0x60u), r_ecx);
    /* 004f0d56: mov ecx, dword ptr [edx + 0x64] */ r_ecx = R32((u32)(r_edx+0x64u));
    /* 004f0d59: mov dword ptr [eax + 0x64], ecx */ W32((u32)(r_eax+0x64u), r_ecx);
    /* 004f0d5c: mov ecx, dword ptr [edx + 0x68] */ r_ecx = R32((u32)(r_edx+0x68u));
    /* 004f0d5f: mov edx, dword ptr [edx + 0x6c] */ r_edx = R32((u32)(r_edx+0x6cu));
    /* 004f0d62: mov dword ptr [eax + 0x68], ecx */ W32((u32)(r_eax+0x68u), r_ecx);
    /* 004f0d65: mov dword ptr [eax + 0x6c], edx */ W32((u32)(r_eax+0x6cu), r_edx);
    /* 004f0d68: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f0d6b: mov ebx, dword ptr [eax + 0x1c] */ r_ebx = R32((u32)(r_eax+0x1cu));
L_004f0d6e:; BB(0x004f0d6e);
    /* 004f0d6e: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 004f0d70: push 0xa4d800 */ { u32 v = 0xa4d800u; r_esp -= 4; W32(r_esp, v); }
    /* 004f0d75: add ebx, 0x50 */ {  u32 a = r_ebx; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f0d78: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004f0d79: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x4f0d7eu); f_00857dec();
    /* 004f0d7e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f0d81: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f0d84: mov esi, dword ptr [edx + 0x1c] */ r_esi = R32((u32)(r_edx+0x1cu));
    /* 004f0d87: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004f0d89: mov word ptr [esi + 0x68], ax */ W16((u32)(r_esi+0x68u), (u16)r_eax);
    /* 004f0d8d: mov edi, dword ptr [edx + 0x1c] */ r_edi = R32((u32)(r_edx+0x1cu));
    /* 004f0d90: mov byte ptr [edi + 0x1c], al */ W8((u32)(r_edi+0x1cu), (u8)r_eax);
    /* 004f0d93: mov ebx, dword ptr [edx + 0x1c] */ r_ebx = R32((u32)(r_edx+0x1cu));
    /* 004f0d96: movzx ecx, byte ptr [ebx + 0x32] */ r_ecx = (u32)R8((u32)(r_ebx+0x32u));
    /* 004f0d9a: and ecx, 0xf5 */ {  u32 a = r_ecx; u32 b = 0xf5u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 004f0da0: mov byte ptr [ebx + 0x32], cl */ W8((u32)(r_ebx+0x32u), (u8)r_ecx);
    /* 004f0da3: call 0x4e74f8 */ r_esp -= 4; W32(r_esp, 0x4f0da8u); f_004e74f8();
    /* 004f0da8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f0daa: je 0x4f0db8 */ if (fZ) goto L_004f0db8;
L_004f0dac:; BB(0x004f0dac);
    /* 004f0dac: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f0daf: mov dword ptr [eax + 0x20], 6 */ W32((u32)(r_eax+0x20u), 0x6u);
    /* 004f0db6: jmp 0x4f0dfc */ goto L_004f0dfc;
L_004f0db8:; BB(0x004f0db8);
    /* 004f0db8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f0dbb: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 004f0dbe: movsx edx, byte ptr [ecx + 0x30] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x30u));
    /* 004f0dc2: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f0dc5: je 0x4f0efe */ if (fZ) goto L_004f0efe;
L_004f0dcb:; BB(0x004f0dcb);
    /* 004f0dcb: movzx eax, byte ptr [ecx + 0x32] */ r_eax = (u32)R8((u32)(r_ecx+0x32u));
    /* 004f0dcf: test al, 0xa */ {  u32 a = (u8)r_eax; u32 b = 0xau; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004f0dd1: je 0x4f0ddf */ if (fZ) goto L_004f0ddf;
L_004f0dd3:; BB(0x004f0dd3);
    /* 004f0dd3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f0dd6: mov dword ptr [eax + 0x20], 5 */ W32((u32)(r_eax+0x20u), 0x5u);
    /* 004f0ddd: jmp 0x4f0dfc */ goto L_004f0dfc;
L_004f0ddf:; BB(0x004f0ddf);
    /* 004f0ddf: mov eax, dword ptr [ecx + 0x34] */ r_eax = R32((u32)(r_ecx+0x34u));
    /* 004f0de2: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004f0de4: jne 0x4f0df2 */ if (!fZ) goto L_004f0df2;
L_004f0de6:; BB(0x004f0de6);
    /* 004f0de6: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f0de9: mov dword ptr [eax + 0x20], 3 */ W32((u32)(r_eax+0x20u), 0x3u);
    /* 004f0df0: jmp 0x4f0dfc */ goto L_004f0dfc;
L_004f0df2:; BB(0x004f0df2);
    /* 004f0df2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f0df5: mov dword ptr [eax + 0x20], 4 */ W32((u32)(r_eax+0x20u), 0x4u);
L_004f0dfc:; BB(0x004f0dfc);
    /* 004f0dfc: mov ecx, eax */ r_ecx = r_eax;
    /* 004f0dfe: call 0x4f3988 */ r_esp -= 4; W32(r_esp, 0x4f0e03u); f_004f3988();
    /* 004f0e03: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f0e06: mov edx, dword ptr [ebx + 0x20] */ r_edx = R32((u32)(r_ebx+0x20u));
    /* 004f0e09: mov eax, dword ptr [edx*8 + 0x9b908c] */ r_eax = R32((u32)(r_edx*8+0x9b908cu));
    /* 004f0e10: mov dword ptr [ebx + 0x28], eax */ W32((u32)(r_ebx+0x28u), r_eax);
    /* 004f0e13: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004f0e15: mov esi, dword ptr [edx*8 + 0x9b9090] */ r_esi = R32((u32)(r_edx*8+0x9b9090u));
    /* 004f0e1c: mov dword ptr [0xa72574], ecx */ W32((u32)(0xa72574u), r_ecx);
    /* 004f0e22: mov dword ptr [0xa72570], ecx */ W32((u32)(0xa72570u), r_ecx);
    /* 004f0e28: mov dword ptr [ebx + 0x24], esi */ W32((u32)(r_ebx+0x24u), r_esi);
    /* 004f0e2b: mov dword ptr [ebx + 0x2c], ecx */ W32((u32)(r_ebx+0x2cu), r_ecx);
    /* 004f0e2e: mov edi, dword ptr [esi] */ r_edi = R32((u32)(r_esi));
    /* 004f0e30: mov dword ptr [0xa7256c], edi */ W32((u32)(0xa7256cu), r_edi);
    /* 004f0e36: call 0x4f3b58 */ r_esp -= 4; W32(r_esp, 0x4f0e3bu); f_004f3b58();
    /* 004f0e3b: mov eax, ebx */ r_eax = r_ebx;
    /* 004f0e3d: mov dword ptr [eax + 0x38], 0 */ W32((u32)(r_eax+0x38u), 0x0u);
    /* 004f0e44: mov dword ptr [eax + 0x3c], 0 */ W32((u32)(r_eax+0x3cu), 0x0u);
    /* 004f0e4b: mov dword ptr [eax + 0x40], 0 */ W32((u32)(r_eax+0x40u), 0x0u);
    /* 004f0e52: mov dword ptr [eax + 0x44], 0 */ W32((u32)(r_eax+0x44u), 0x0u);
    /* 004f0e59: mov dword ptr [eax + 0x48], 0 */ W32((u32)(r_eax+0x48u), 0x0u);
    /* 004f0e60: mov dword ptr [eax + 0x4c], 0 */ W32((u32)(r_eax+0x4cu), 0x0u);
    /* 004f0e67: mov dword ptr [eax + 0x54], 0 */ W32((u32)(r_eax+0x54u), 0x0u);
    /* 004f0e6e: mov eax, dword ptr [0xa720f0] */ r_eax = R32((u32)(0xa720f0u));
    /* 004f0e73: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f0e75: je 0x4f0e7e */ if (fZ) goto L_004f0e7e;
L_004f0e77:; BB(0x004f0e77);
    /* 004f0e77: mov dword ptr [eax + 0x38], 0x41f00000 */ W32((u32)(r_eax+0x38u), 0x41f00000u);
L_004f0e7e:; BB(0x004f0e7e);
    /* 004f0e7e: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 004f0e85: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 004f0e87: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4f0e8cu); f_005caba4();
    /* 004f0e8c: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 004f0e8f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f0e92: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 004f0e95: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f0e97: je 0x4f0ef7 */ if (fZ) goto L_004f0ef7;
L_004f0e99:; BB(0x004f0e99);
    /* 004f0e99: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 004f0ea0: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 004f0ea7: mov ecx, eax */ r_ecx = r_eax;
    /* 004f0ea9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004f0eab: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x4f0eb0u); f_008193cc();
    /* 004f0eb0: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_004f0eb7:; BB(0x004f0eb7);
    /* 004f0eb7: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 004f0eba: mov edx, ebx */ r_edx = r_ebx;
    /* 004f0ebc: mov dword ptr [edx + 0x50], eax */ W32((u32)(r_edx+0x50u), r_eax);
    /* 004f0ebf: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 004f0ec6: call 0x4ec8d4 */ r_esp -= 4; W32(r_esp, 0x4f0ecbu); f_004ec8d4();
    /* 004f0ecb: push 0x91dd1c */ { u32 v = 0x91dd1cu; r_esp -= 4; W32(r_esp, v); }
    /* 004f0ed0: call 0x4f4234 */ r_esp -= 4; W32(r_esp, 0x4f0ed5u); f_004f4234();
    /* 004f0ed5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f0ed6: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_004f0edd:; BB(0x004f0edd);
    /* 004f0edd: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f0ee0: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 004f0ee3: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f0ee6: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004f0ee9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004f0eec: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004f0ef3: mov esp, ebp */ r_esp = r_ebp;
    /* 004f0ef5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f0ef6: ret  */ FN_RET(0x004f0c10); r_esp += 4; return;
L_004f0ef7:; BB(0x004f0ef7);
    /* 004f0ef7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004f0ef9: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 004f0efc: jmp 0x4f0eb7 */ goto L_004f0eb7;
L_004f0efe:; BB(0x004f0efe);
    /* 004f0efe: movzx eax, byte ptr [ecx + 0x32] */ r_eax = (u32)R8((u32)(r_ecx+0x32u));
    /* 004f0f02: test al, 0xa */ {  u32 a = (u8)r_eax; u32 b = 0xau; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004f0f04: je 0x4f0f15 */ if (fZ) goto L_004f0f15;
L_004f0f06:; BB(0x004f0f06);
    /* 004f0f06: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f0f09: mov dword ptr [eax + 0x20], 2 */ W32((u32)(r_eax+0x20u), 0x2u);
    /* 004f0f10: jmp 0x4f0dfc */ goto L_004f0dfc;
L_004f0f15:; BB(0x004f0f15);
    /* 004f0f15: mov eax, dword ptr [ecx + 0x34] */ r_eax = R32((u32)(r_ecx+0x34u));
    /* 004f0f18: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004f0f1a: jne 0x4f0f2b */ if (!fZ) goto L_004f0f2b;
L_004f0f1c:; BB(0x004f0f1c);
    /* 004f0f1c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f0f1f: mov dword ptr [eax + 0x20], 0 */ W32((u32)(r_eax+0x20u), 0x0u);
    /* 004f0f26: jmp 0x4f0dfc */ goto L_004f0dfc;
L_004f0f2b:; BB(0x004f0f2b);
    /* 004f0f2b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f0f2e: mov dword ptr [eax + 0x20], 1 */ W32((u32)(r_eax+0x20u), 0x1u);
    /* 004f0f35: jmp 0x4f0dfc */ goto L_004f0dfc;
L_004f0f3a:; BB(0x004f0f3a);
    /* 004f0f3a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004f0f3c: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004f0f3f: jmp 0x4f0edd */ goto L_004f0edd;
}

void f_004f0f44(void) /* sub_4F0F44 */
{
    FN_ENTER(0x004f0f44);
    /* 004f0f44: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004f0f45: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004f0f46: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f0f47: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004f0f48: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004f0f4b: mov eax, dword ptr [ecx + 0x3c] */ r_eax = R32((u32)(r_ecx+0x3cu));
    /* 004f0f4e: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 004f0f52: add dword ptr [ecx + 0x38], 1 */ { u32 ad = (u32)(r_ecx+0x38u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 004f0f56: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f0f58: jne 0x4f0f9a */ if (!fZ) goto L_004f0f9a;
L_004f0f5a:; BB(0x004f0f5a);
    /* 004f0f5a: fld dword ptr [0x91e12c] */ FPUSH(R_F32((u32)(0x91e12cu)));
    /* 004f0f60: mov edx, ecx */ r_edx = r_ecx;
    /* 004f0f62: fadd dword ptr [edx + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x40u));
    /* 004f0f65: fcom dword ptr [0x91e134] */ fx_compare(ST(0), R_F32((u32)(0x91e134u))); 
    /* 004f0f6b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004f0f6d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004f0f6e: jbe 0x4f0f7d */ if ((fC||fZ)) goto L_004f0f7d;
L_004f0f70:; BB(0x004f0f70);
    /* 004f0f70: mov eax, edx */ r_eax = r_edx;
    /* 004f0f72: fstp dword ptr [eax + 0x40] */ W_F32((u32)(r_eax+0x40u), ST(0)); FPOP();
    /* 004f0f75: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004f0f78: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004f0f79: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f0f7a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004f0f7b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004f0f7c: ret  */ FN_RET(0x004f0f44); r_esp += 4; return;
L_004f0f7d:; BB(0x004f0f7d);
    /* 004f0f7d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004f0f7f: movzx edx, word ptr [ecx + 8] */ r_edx = (u32)R16((u32)(r_ecx+0x8u));
    /* 004f0f83: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004f0f85: mov dword ptr [ecx + 0x40], eax */ W32((u32)(r_ecx+0x40u), r_eax);
    /* 004f0f88: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004f0f8e: mov word ptr [ecx + 8], dx */ W16((u32)(r_ecx+0x8u), (u16)r_edx);
    /* 004f0f92: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004f0f95: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004f0f96: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f0f97: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004f0f98: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004f0f99: ret  */ FN_RET(0x004f0f44); r_esp += 4; return;
L_004f0f9a:; BB(0x004f0f9a);
    /* 004f0f9a: fld dword ptr [0x91e130] */ FPUSH(R_F32((u32)(0x91e130u)));
    /* 004f0fa0: mov edx, ecx */ r_edx = r_ecx;
    /* 004f0fa2: fadd dword ptr [edx + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x40u));
    /* 004f0fa5: fcom dword ptr [0x91e138] */ fx_compare(ST(0), R_F32((u32)(0x91e138u))); 
    /* 004f0fab: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004f0fad: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004f0fae: jbe 0x4f0fbc */ if ((fC||fZ)) goto L_004f0fbc;
L_004f0fb0:; BB(0x004f0fb0);
    /* 004f0fb0: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004f0fb2: mov eax, 0x3f800000 */ r_eax = 0x3f800000u;
    /* 004f0fb7: mov dword ptr [edx + 0x40], eax */ W32((u32)(r_edx+0x40u), r_eax);
    /* 004f0fba: jmp 0x4f0fc1 */ goto L_004f0fc1;
L_004f0fbc:; BB(0x004f0fbc);
    /* 004f0fbc: mov eax, edx */ r_eax = r_edx;
    /* 004f0fbe: fstp dword ptr [eax + 0x40] */ W_F32((u32)(r_eax+0x40u), ST(0)); FPOP();
L_004f0fc1:; BB(0x004f0fc1);
    /* 004f0fc1: mov esi, dword ptr [edx + 0x20] */ r_esi = R32((u32)(r_edx+0x20u));
    /* 004f0fc4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004f0fc6: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004f0fca: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f0fcc: je 0x4f10de */ if (fZ) goto L_004f10de;
L_004f0fd2:; BB(0x004f0fd2);
    /* 004f0fd2: push dword ptr [0xa0f670] */ { u32 v = R32((u32)(0xa0f670u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f0fd8: call 0x4f4010 */ r_esp -= 4; W32(r_esp, 0x4f0fddu); f_004f4010();
    /* 004f0fdd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f0fde: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f0fe0: je 0x4f0fed */ if (fZ) goto L_004f0fed;
L_004f0fe2:; BB(0x004f0fe2);
    /* 004f0fe2: mov eax, 1 */ r_eax = 0x1u;
    /* 004f0fe7: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004f0feb: jmp 0x4f1006 */ goto L_004f1006;
L_004f0fed:; BB(0x004f0fed);
    /* 004f0fed: push dword ptr [0xa0f66c] */ { u32 v = R32((u32)(0xa0f66cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004f0ff3: call 0x4f4010 */ r_esp -= 4; W32(r_esp, 0x4f0ff8u); f_004f4010();
    /* 004f0ff8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f0ff9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f0ffb: je 0x4f1006 */ if (fZ) goto L_004f1006;
L_004f0ffd:; BB(0x004f0ffd);
    /* 004f0ffd: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 004f1002: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
L_004f1006:; BB(0x004f1006);
    /* 004f1006: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 004f100a: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 004f100d: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f1010: jle 0x4f104c */ if ((fZ||fS!=fO)) goto L_004f104c;
L_004f1012:; BB(0x004f1012);
    /* 004f1012: push dword ptr [0xa0f668] */ { u32 v = R32((u32)(0xa0f668u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f1018: call 0x4f4010 */ r_esp -= 4; W32(r_esp, 0x4f101du); f_004f4010();
    /* 004f101d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f101e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f1020: je 0x4f102f */ if (fZ) goto L_004f102f;
L_004f1022:; BB(0x004f1022);
    /* 004f1022: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 004f1026: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 004f1029: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 004f102d: jmp 0x4f104c */ goto L_004f104c;
L_004f102f:; BB(0x004f102f);
    /* 004f102f: push dword ptr [0xa0f664] */ { u32 v = R32((u32)(0xa0f664u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f1035: call 0x4f4010 */ r_esp -= 4; W32(r_esp, 0x4f103au); f_004f4010();
    /* 004f103a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f103b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f103d: je 0x4f104c */ if (fZ) goto L_004f104c;
L_004f103f:; BB(0x004f103f);
    /* 004f103f: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 004f1043: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 004f1046: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004f1048: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
L_004f104c:; BB(0x004f104c);
    /* 004f104c: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004f1050: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f1052: je 0x4f12cf */ if (fZ) goto L_004f12cf;
L_004f1058:; BB(0x004f1058);
    /* 004f1058: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 004f105c: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 004f1060: mov ebp, dword ptr [eax + 0x24] */ r_ebp = R32((u32)(r_eax+0x24u));
    /* 004f1063: mov ebx, dword ptr [eax + 0x1c] */ r_ebx = R32((u32)(r_eax+0x1cu));
    /* 004f1066: movsx eax, word ptr [ebx + ebp*2 + 0x38] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+r_ebp*2+0x38u));
    /* 004f106b: lea edi, [edx + eax] */ r_edi = (u32)(r_edx+r_eax);
    /* 004f106e: movsx edi, di */ r_edi = (u32)(i32)(i16)(u16)r_edi;
    /* 004f1071: mov word ptr [ebx + ebp*2 + 0x38], di */ W16((u32)(r_ebx+r_ebp*2+0x38u), (u16)r_edi);
    /* 004f1076: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f1079: je 0x4f129e */ if (fZ) goto L_004f129e;
L_004f107f:; BB(0x004f107f);
    /* 004f107f: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f1082: je 0x4f129e */ if (fZ) goto L_004f129e;
L_004f1088:; BB(0x004f1088);
    /* 004f1088: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 004f108c: mov esi, dword ptr [ecx + 0x44] */ r_esi = R32((u32)(r_ecx+0x44u));
    /* 004f108f: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 004f1093: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004f1094: idiv esi */ { i32 d = (i32)r_esi; if (!d) UNSUP(0x004f1094, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x004f1094, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 004f1096: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 004f109a: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 004f109e: movsx esi, dx */ r_esi = (u32)(i32)(i16)(u16)r_edx;
    /* 004f10a1: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 004f10a4: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f10a6: jl 0x4f10b1 */ if ((fS!=fO)) goto L_004f10b1;
L_004f10a8:; BB(0x004f10a8);
    /* 004f10a8: mov word ptr [ebx + ebp*2 + 0x38], si */ W16((u32)(r_ebx+r_ebp*2+0x38u), (u16)r_esi);
    /* 004f10ad: mov edi, esi */ r_edi = r_esi;
    /* 004f10af: jmp 0x4f10b9 */ goto L_004f10b9;
L_004f10b1:; BB(0x004f10b1);
    /* 004f10b1: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004f10b3: jl 0x4f127a */ if ((fS!=fO)) goto L_004f127a;
L_004f10b9:; BB(0x004f10b9);
    /* 004f10b9: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f10bb: je 0x4f10d4 */ if (fZ) goto L_004f10d4;
L_004f10bd:; BB(0x004f10bd);
    /* 004f10bd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004f10bf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f10c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f10c1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f10c2: push 0x56f */ { u32 v = 0x56fu; r_esp -= 4; W32(r_esp, v); }
    /* 004f10c7: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4f10ccu); f_00814298();
    /* 004f10cc: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f10cf: movsx edi, word ptr [ebx + ebp*2 + 0x38] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ebx+r_ebp*2+0x38u));
L_004f10d4:; BB(0x004f10d4);
    /* 004f10d4: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 004f10d8: mov esi, dword ptr [eax + 0x20] */ r_esi = R32((u32)(r_eax+0x20u));
    /* 004f10db: mov dword ptr [eax + 0x28], edi */ W32((u32)(r_eax+0x28u), r_edi);
L_004f10de:; BB(0x004f10de);
    /* 004f10de: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 004f10e2: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 004f10e5: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 004f10e7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004f10e9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004f10eb: jle 0x4f10fe */ if ((fZ||fS!=fO)) goto L_004f10fe;
L_004f10ed:; BB(0x004f10ed);
    /* 004f10ed: mov eax, dword ptr [eax + 0x28] */ r_eax = R32((u32)(r_eax+0x28u));
L_004f10f0:; BB(0x004f10f0);
    /* 004f10f0: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f10f2: je 0x4f10fe */ if (fZ) goto L_004f10fe;
L_004f10f4:; BB(0x004f10f4);
    /* 004f10f4: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004f10f7: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f10fa: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f10fc: jl 0x4f10f0 */ if ((fS!=fO)) goto L_004f10f0;
L_004f10fe:; BB(0x004f10fe);
    /* 004f10fe: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 004f1102: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 004f1105: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004f1107: cmp ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f110a: jle 0x4f1172 */ if ((fZ||fS!=fO)) goto L_004f1172;
L_004f110c:; BB(0x004f110c);
    /* 004f110c: mov edi, eax */ r_edi = r_eax;
    /* 004f110e: mov dword ptr [edi + 0x44], 9 */ W32((u32)(r_edi+0x44u), 0x9u);
    /* 004f1115: mov dword ptr [esp + 0x10], esi */ W32((u32)(r_esp+0x10u), r_esi);
    /* 004f1119: mov eax, 0x38e38e39 */ r_eax = 0x38e38e39u;
    /* 004f111e: imul ebp */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebp; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f1120: mov eax, ebp */ r_eax = r_ebp;
    /* 004f1122: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004f1125: mov ebx, edx */ r_ebx = r_edx;
    /* 004f1127: sar ebx, 1 */ { u32 c = (1u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 004f1129: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 004f112b: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 004f112e: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f1130: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f1132: add eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f1134: sub ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 004f1136: mov dword ptr [edi + 0x48], ebx */ W32((u32)(r_edi+0x48u), r_ebx);
    /* 004f1139: lea esi, [ecx + 8] */ r_esi = (u32)(r_ecx+0x8u);
    /* 004f113c: mov eax, 0x38e38e39 */ r_eax = 0x38e38e39u;
    /* 004f1141: imul esi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_esi; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f1143: sar esi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 004f1146: mov dword ptr [edi + 0x54], ebp */ W32((u32)(r_edi+0x54u), r_ebp);
    /* 004f1149: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 004f114b: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004f114d: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 004f1151: mov dword ptr [edi + 0x4c], edx */ W32((u32)(r_edi+0x4cu), r_edx);
    /* 004f1154: lea ebp, [ebx + ebx*8] */ r_ebp = (u32)(r_ebx+r_ebx*8);
    /* 004f1157: neg ebp */ { u32 x = r_ebp; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 004f1159: add ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f115b: cmp ecx, 9 */ {  u32 a = r_ecx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f115e: jg 0x4f1167 */ if ((!fZ&&fS==fO)) goto L_004f1167;
L_004f1160:; BB(0x004f1160);
    /* 004f1160: mov eax, edi */ r_eax = r_edi;
    /* 004f1162: mov dword ptr [eax + 0x50], ecx */ W32((u32)(r_eax+0x50u), r_ecx);
    /* 004f1165: jmp 0x4f1189 */ goto L_004f1189;
L_004f1167:; BB(0x004f1167);
    /* 004f1167: mov eax, edi */ r_eax = r_edi;
    /* 004f1169: mov dword ptr [eax + 0x50], 9 */ W32((u32)(r_eax+0x50u), 0x9u);
    /* 004f1170: jmp 0x4f1189 */ goto L_004f1189;
L_004f1172:; BB(0x004f1172);
    /* 004f1172: mov dword ptr [eax + 0x4c], 1 */ W32((u32)(r_eax+0x4cu), 0x1u);
    /* 004f1179: mov dword ptr [eax + 0x54], ebp */ W32((u32)(r_eax+0x54u), r_ebp);
    /* 004f117c: mov dword ptr [eax + 0x50], ecx */ W32((u32)(r_eax+0x50u), r_ecx);
    /* 004f117f: mov dword ptr [eax + 0x48], 0 */ W32((u32)(r_eax+0x48u), 0x0u);
    /* 004f1186: mov dword ptr [eax + 0x44], ecx */ W32((u32)(r_eax+0x44u), r_ecx);
L_004f1189:; BB(0x004f1189);
    /* 004f1189: mov edx, eax */ r_edx = r_eax;
    /* 004f118b: fld dword ptr [edx + 0x58] */ FPUSH(R_F32((u32)(r_edx+0x58u)));
    /* 004f118e: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 004f1191: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 004f1194: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004f1196: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004f1198: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004f1199: jbe 0x4f11b3 */ if ((fC||fZ)) goto L_004f11b3;
L_004f119b:; BB(0x004f119b);
    /* 004f119b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004f119d: fadd dword ptr [0x91dd24] */ ST(0) = ST(0) + R_F32((u32)(0x91dd24u));
    /* 004f11a3: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004f11a5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004f11a7: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004f11a8: ja 0x4f11ac */ if ((!fC&&!fZ)) goto L_004f11ac;
L_004f11aa:; BB(0x004f11aa);
    /* 004f11aa: fst st(1) */ ST(1) = ST(0);
L_004f11ac:; BB(0x004f11ac);
    /* 004f11ac: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004f11ae: fst dword ptr [edx + 0x58] */ W_F32((u32)(r_edx+0x58u), ST(0));
    /* 004f11b1: jmp 0x4f11d0 */ goto L_004f11d0;
L_004f11b3:; BB(0x004f11b3);
    /* 004f11b3: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004f11b5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004f11b7: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004f11b8: jae 0x4f11d0 */ if (!fC) goto L_004f11d0;
L_004f11ba:; BB(0x004f11ba);
    /* 004f11ba: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004f11bc: fsub dword ptr [0x91dd24] */ ST(0) = ST(0) - R_F32((u32)(0x91dd24u));
    /* 004f11c2: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004f11c4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004f11c6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004f11c7: jb 0x4f11cb */ if (fC) goto L_004f11cb;
L_004f11c9:; BB(0x004f11c9);
    /* 004f11c9: fst st(1) */ ST(1) = ST(0);
L_004f11cb:; BB(0x004f11cb);
    /* 004f11cb: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004f11cd: fst dword ptr [edx + 0x58] */ W_F32((u32)(r_edx+0x58u), ST(0));
L_004f11d0:; BB(0x004f11d0);
    /* 004f11d0: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004f11d2: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004f11d4: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f11d6: je 0x4f1234 */ if (fZ) goto L_004f1234;
L_004f11d8:; BB(0x004f11d8);
    /* 004f11d8: mov eax, dword ptr [0xa0f678] */ r_eax = R32((u32)(0xa0f678u));
    /* 004f11dd: or eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f11df: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f11e0: call 0x4f3eb8 */ r_esp -= 4; W32(r_esp, 0x4f11e5u); f_004f3eb8();
    /* 004f11e5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f11e6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f11e8: je 0x4f1217 */ if (fZ) goto L_004f1217;
L_004f11ea:; BB(0x004f11ea);
    /* 004f11ea: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004f11ec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f11ed: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f11ee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f11ef: push 0x573 */ { u32 v = 0x573u; r_esp -= 4; W32(r_esp, v); }
    /* 004f11f4: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4f11f9u); f_00814298();
    /* 004f11f9: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f11fc: call 0x4f12dc */ r_esp -= 4; W32(r_esp, 0x4f1201u); f_004f12dc();
    /* 004f1201: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 004f1205: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004f1207: mov dword ptr [0xa72574], eax */ W32((u32)(0xa72574u), r_eax);
    /* 004f120c: mov dword ptr [edx + 0x3c], eax */ W32((u32)(r_edx+0x3cu), r_eax);
    /* 004f120f: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004f1212: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004f1213: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f1214: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004f1215: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004f1216: ret  */ FN_RET(0x004f0f44); r_esp += 4; return;
L_004f1217:; BB(0x004f1217);
    /* 004f1217: mov eax, dword ptr [0xa0f674] */ r_eax = R32((u32)(0xa0f674u));
    /* 004f121c: or eax, dword ptr [0xa0f698] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa0f698u)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f1222: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f1223: call 0x4f3eb8 */ r_esp -= 4; W32(r_esp, 0x4f1228u); f_004f3eb8();
    /* 004f1228: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f1229: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f122b: jne 0x4f124b */ if (!fZ) goto L_004f124b;
L_004f122d:; BB(0x004f122d);
    /* 004f122d: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 004f1231: mov esi, dword ptr [eax + 0x20] */ r_esi = R32((u32)(r_eax+0x20u));
L_004f1234:; BB(0x004f1234);
    /* 004f1234: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f1236: jne 0x4f1243 */ if (!fZ) goto L_004f1243;
L_004f1238:; BB(0x004f1238);
    /* 004f1238: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 004f123c: mov dword ptr [eax + 0x20], 1 */ W32((u32)(r_eax+0x20u), 0x1u);
L_004f1243:; BB(0x004f1243);
    /* 004f1243: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004f1246: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004f1247: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f1248: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004f1249: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004f124a: ret  */ FN_RET(0x004f0f44); r_esp += 4; return;
L_004f124b:; BB(0x004f124b);
    /* 004f124b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004f124d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f124e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f124f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f1250: push 0x570 */ { u32 v = 0x570u; r_esp -= 4; W32(r_esp, v); }
    /* 004f1255: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4f125au); f_00814298();
    /* 004f125a: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 004f125e: mov dword ptr [0xa72570], 1 */ W32((u32)(0xa72570u), 0x1u);
    /* 004f1268: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004f126a: mov dword ptr [edx + 0x3c], eax */ W32((u32)(r_edx+0x3cu), r_eax);
    /* 004f126d: mov dword ptr [0xa72574], eax */ W32((u32)(0xa72574u), r_eax);
    /* 004f1272: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004f1275: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004f1276: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f1277: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004f1278: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004f1279: ret  */ FN_RET(0x004f0f44); r_esp += 4; return;
L_004f127a:; BB(0x004f127a);
    /* 004f127a: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 004f127e: lea ecx, [esi + ecx] */ r_ecx = (u32)(r_esi+r_ecx);
    /* 004f1281: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f1283: jge 0x4f1291 */ if ((fS==fO)) goto L_004f1291;
L_004f1285:; BB(0x004f1285);
    /* 004f1285: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
L_004f1289:; BB(0x004f1289);
    /* 004f1289: mov esi, ecx */ r_esi = r_ecx;
    /* 004f128b: add ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f128d: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f128f: jl 0x4f1289 */ if ((fS!=fO)) goto L_004f1289;
L_004f1291:; BB(0x004f1291);
    /* 004f1291: movsx edi, si */ r_edi = (u32)(i32)(i16)(u16)r_esi;
    /* 004f1294: mov word ptr [ebx + ebp*2 + 0x38], di */ W16((u32)(r_ebx+r_ebp*2+0x38u), (u16)r_edi);
    /* 004f1299: jmp 0x4f10b9 */ goto L_004f10b9;
L_004f129e:; BB(0x004f129e);
    /* 004f129e: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 004f12a2: mov edx, dword ptr [edx + 0x2c] */ r_edx = R32((u32)(r_edx+0x2cu));
    /* 004f12a5: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f12a7: jl 0x4f12b7 */ if ((fS!=fO)) goto L_004f12b7;
L_004f12a9:; BB(0x004f12a9);
    /* 004f12a9: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004f12ab: mov word ptr [ebx + ebp*2 + 0x38], dx */ W16((u32)(r_ebx+r_ebp*2+0x38u), (u16)r_edx);
    /* 004f12b0: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 004f12b2: jmp 0x4f10b9 */ goto L_004f10b9;
L_004f12b7:; BB(0x004f12b7);
    /* 004f12b7: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004f12b9: jge 0x4f10b9 */ if ((fS==fO)) goto L_004f10b9;
L_004f12bf:; BB(0x004f12bf);
    /* 004f12bf: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f12c2: movsx edi, dx */ r_edi = (u32)(i32)(i16)(u16)r_edx;
    /* 004f12c5: mov word ptr [ebx + ebp*2 + 0x38], di */ W16((u32)(r_ebx+r_ebp*2+0x38u), (u16)r_edi);
    /* 004f12ca: jmp 0x4f10b9 */ goto L_004f10b9;
L_004f12cf:; BB(0x004f12cf);
    /* 004f12cf: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 004f12d3: mov esi, dword ptr [eax + 0x20] */ r_esi = R32((u32)(r_eax+0x20u));
    /* 004f12d6: jmp 0x4f10de */ goto L_004f10de;
}

