#include "protos.h"

void f_00410000(void)
{
    FN_ENTER(0x00410000);
    /* 00410000: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00410001: call 0x71d58c */ r_esp -= 4; W32(r_esp, 0x410006u); f_0071d58c();
    /* 00410006: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00410008: push 0x27 */ { u32 v = 0x27u; r_esp -= 4; W32(r_esp, v); }
    /* 0041000a: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x41000fu); f_00792fe8();
    /* 0041000f: lea edx, [esp + 0x104] */ r_edx = (u32)(r_esp+0x104u);
    /* 00410016: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00410018: push 0x47c35000 */ { u32 v = 0x47c35000u; r_esp -= 4; W32(r_esp, v); }
    /* 0041001d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0041001f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00410020: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00410021: call 0x71d58c */ r_esp -= 4; W32(r_esp, 0x410026u); f_0071d58c();
    /* 00410026: add esp, 0x6c */ {  u32 a = r_esp; u32 b = 0x6cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00410029: mov eax, dword ptr [0xa3af9c] */ r_eax = R32((u32)(0xa3af9cu));
    /* 0041002e: fld dword ptr [eax*8 + 0x8fa528] */ FPUSH(R_F32((u32)(r_eax*8+0x8fa528u)));
    /* 00410035: fld dword ptr [0x9a3204] */ FPUSH(R_F32((u32)(0x9a3204u)));
    /* 0041003b: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0041003d: fld dword ptr [0x9a3208] */ FPUSH(R_F32((u32)(0x9a3208u)));
    /* 00410043: fld dword ptr [0x9a320c] */ FPUSH(R_F32((u32)(0x9a320cu)));
    /* 00410049: fld dword ptr [0x9a3210] */ FPUSH(R_F32((u32)(0x9a3210u)));
    /* 0041004f: fld dword ptr [0x9a3214] */ FPUSH(R_F32((u32)(0x9a3214u)));
    /* 00410055: fld dword ptr [0x9a3218] */ FPUSH(R_F32((u32)(0x9a3218u)));
    /* 0041005b: movzx edx, word ptr [esp + 0x24] */ r_edx = (u32)R16((u32)(r_esp+0x24u));
    /* 00410060: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 00410062: fstp dword ptr [esp + 0x84] */ W_F32((u32)(r_esp+0x84u), ST(0)); FPOP();
    /* 00410069: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0041006b: fadd st(5) */ ST(0) = ST(0) + ST(5);
    /* 0041006d: fld dword ptr [eax*8 + 0x8fa52c] */ FPUSH(R_F32((u32)(r_eax*8+0x8fa52cu)));
    /* 00410074: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00410076: fstp dword ptr [esp + 0x8c] */ W_F32((u32)(r_esp+0x8cu), ST(0)); FPOP();
    /* 0041007d: fadd st(3), st(0) */ ST(3) = ST(3) + ST(0);
    /* 0041007f: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00410081: fstp dword ptr [esp + 0x88] */ W_F32((u32)(r_esp+0x88u), ST(0)); FPOP();
    /* 00410088: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0041008a: fstp dword ptr [esp + 0x90] */ W_F32((u32)(r_esp+0x90u), ST(0)); FPOP();
    /* 00410091: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 00410093: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00410095: fstp dword ptr [esp + 0x94] */ W_F32((u32)(r_esp+0x94u), ST(0)); FPOP();
    /* 0041009c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0041009e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004100a0: je 0x410132 */ if (fZ) goto L_00410132;
L_004100a6:; BB(0x004100a6);
    /* 004100a6: movzx eax, word ptr [esp + 0x44] */ r_eax = (u32)R16((u32)(r_esp+0x44u));
    /* 004100ab: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004100ad: jne 0x4100b9 */ if (!fZ) goto L_004100b9;
L_004100af:; BB(0x004100af);
    /* 004100af: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004100b1: add esp, 0xb4 */ {  u32 a = r_esp; u32 b = 0xb4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004100b7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004100b8: ret  */ FN_RET(0x00410000); r_esp += 4; return;
L_004100b9:; BB(0x004100b9);
    /* 004100b9: movzx eax, word ptr [esp + 0x64] */ r_eax = (u32)R16((u32)(r_esp+0x64u));
    /* 004100be: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004100c0: jne 0x4100cc */ if (!fZ) goto L_004100cc;
L_004100c2:; BB(0x004100c2);
    /* 004100c2: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004100c4: add esp, 0xb4 */ {  u32 a = r_esp; u32 b = 0xb4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004100ca: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004100cb: ret  */ FN_RET(0x00410000); r_esp += 4; return;
L_004100cc:; BB(0x004100cc);
    /* 004100cc: fstp dword ptr [esp + 0x98] */ W_F32((u32)(r_esp+0x98u), ST(0)); FPOP();
    /* 004100d3: lea edx, [esp + 0x84] */ r_edx = (u32)(r_esp+0x84u);
    /* 004100da: lea eax, [esp + 0x24] */ r_eax = (u32)(r_esp+0x24u);
    /* 004100de: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004100e0: push 0x47c35000 */ { u32 v = 0x47c35000u; r_esp -= 4; W32(r_esp, v); }
    /* 004100e5: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004100e7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004100e8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004100e9: call 0x71d58c */ r_esp -= 4; W32(r_esp, 0x4100eeu); f_0071d58c();
    /* 004100ee: lea edx, [esp + 0xa0] */ r_edx = (u32)(r_esp+0xa0u);
    /* 004100f5: lea eax, [esp + 0x58] */ r_eax = (u32)(r_esp+0x58u);
    /* 004100f9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004100fb: push 0x47c35000 */ { u32 v = 0x47c35000u; r_esp -= 4; W32(r_esp, v); }
    /* 00410100: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00410102: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00410103: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00410104: call 0x71d58c */ r_esp -= 4; W32(r_esp, 0x410109u); f_0071d58c();
    /* 00410109: lea edx, [esp + 0xbc] */ r_edx = (u32)(r_esp+0xbcu);
    /* 00410110: lea eax, [esp + 0x8c] */ r_eax = (u32)(r_esp+0x8cu);
    /* 00410117: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00410119: push 0x47c35000 */ { u32 v = 0x47c35000u; r_esp -= 4; W32(r_esp, v); }
    /* 0041011e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00410120: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00410121: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00410122: call 0x71d58c */ r_esp -= 4; W32(r_esp, 0x410127u); f_0071d58c();
    /* 00410127: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041012a: add esp, 0xb4 */ {  u32 a = r_esp; u32 b = 0xb4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00410130: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00410131: ret  */ FN_RET(0x00410000); r_esp += 4; return;
L_00410132:; BB(0x00410132);
    /* 00410132: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00410134: add esp, 0xb4 */ {  u32 a = r_esp; u32 b = 0xb4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041013a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0041013b: ret  */ FN_RET(0x00410000); r_esp += 4; return;
}

void f_00410004(void)
{
    FN_ENTER(0x00410004);
    /* 00410004: xor byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; W8(ad, r);  }
    /* 00410006: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00410008: push 0x27 */ { u32 v = 0x27u; r_esp -= 4; W32(r_esp, v); }
    /* 0041000a: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x41000fu); f_00792fe8();
    /* 0041000f: lea edx, [esp + 0x104] */ r_edx = (u32)(r_esp+0x104u);
    /* 00410016: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00410018: push 0x47c35000 */ { u32 v = 0x47c35000u; r_esp -= 4; W32(r_esp, v); }
    /* 0041001d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0041001f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00410020: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00410021: call 0x71d58c */ r_esp -= 4; W32(r_esp, 0x410026u); f_0071d58c();
    /* 00410026: add esp, 0x6c */ {  u32 a = r_esp; u32 b = 0x6cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00410029: mov eax, dword ptr [0xa3af9c] */ r_eax = R32((u32)(0xa3af9cu));
    /* 0041002e: fld dword ptr [eax*8 + 0x8fa528] */ FPUSH(R_F32((u32)(r_eax*8+0x8fa528u)));
    /* 00410035: fld dword ptr [0x9a3204] */ FPUSH(R_F32((u32)(0x9a3204u)));
    /* 0041003b: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0041003d: fld dword ptr [0x9a3208] */ FPUSH(R_F32((u32)(0x9a3208u)));
    /* 00410043: fld dword ptr [0x9a320c] */ FPUSH(R_F32((u32)(0x9a320cu)));
    /* 00410049: fld dword ptr [0x9a3210] */ FPUSH(R_F32((u32)(0x9a3210u)));
    /* 0041004f: fld dword ptr [0x9a3214] */ FPUSH(R_F32((u32)(0x9a3214u)));
    /* 00410055: fld dword ptr [0x9a3218] */ FPUSH(R_F32((u32)(0x9a3218u)));
    /* 0041005b: movzx edx, word ptr [esp + 0x24] */ r_edx = (u32)R16((u32)(r_esp+0x24u));
    /* 00410060: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 00410062: fstp dword ptr [esp + 0x84] */ W_F32((u32)(r_esp+0x84u), ST(0)); FPOP();
    /* 00410069: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0041006b: fadd st(5) */ ST(0) = ST(0) + ST(5);
    /* 0041006d: fld dword ptr [eax*8 + 0x8fa52c] */ FPUSH(R_F32((u32)(r_eax*8+0x8fa52cu)));
    /* 00410074: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00410076: fstp dword ptr [esp + 0x8c] */ W_F32((u32)(r_esp+0x8cu), ST(0)); FPOP();
    /* 0041007d: fadd st(3), st(0) */ ST(3) = ST(3) + ST(0);
    /* 0041007f: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00410081: fstp dword ptr [esp + 0x88] */ W_F32((u32)(r_esp+0x88u), ST(0)); FPOP();
    /* 00410088: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0041008a: fstp dword ptr [esp + 0x90] */ W_F32((u32)(r_esp+0x90u), ST(0)); FPOP();
    /* 00410091: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 00410093: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00410095: fstp dword ptr [esp + 0x94] */ W_F32((u32)(r_esp+0x94u), ST(0)); FPOP();
    /* 0041009c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0041009e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004100a0: je 0x410132 */ if (fZ) goto L_00410132;
L_004100a6:; BB(0x004100a6);
    /* 004100a6: movzx eax, word ptr [esp + 0x44] */ r_eax = (u32)R16((u32)(r_esp+0x44u));
    /* 004100ab: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004100ad: jne 0x4100b9 */ if (!fZ) goto L_004100b9;
L_004100af:; BB(0x004100af);
    /* 004100af: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004100b1: add esp, 0xb4 */ {  u32 a = r_esp; u32 b = 0xb4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004100b7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004100b8: ret  */ FN_RET(0x00410004); r_esp += 4; return;
L_004100b9:; BB(0x004100b9);
    /* 004100b9: movzx eax, word ptr [esp + 0x64] */ r_eax = (u32)R16((u32)(r_esp+0x64u));
    /* 004100be: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004100c0: jne 0x4100cc */ if (!fZ) goto L_004100cc;
L_004100c2:; BB(0x004100c2);
    /* 004100c2: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004100c4: add esp, 0xb4 */ {  u32 a = r_esp; u32 b = 0xb4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004100ca: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004100cb: ret  */ FN_RET(0x00410004); r_esp += 4; return;
L_004100cc:; BB(0x004100cc);
    /* 004100cc: fstp dword ptr [esp + 0x98] */ W_F32((u32)(r_esp+0x98u), ST(0)); FPOP();
    /* 004100d3: lea edx, [esp + 0x84] */ r_edx = (u32)(r_esp+0x84u);
    /* 004100da: lea eax, [esp + 0x24] */ r_eax = (u32)(r_esp+0x24u);
    /* 004100de: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004100e0: push 0x47c35000 */ { u32 v = 0x47c35000u; r_esp -= 4; W32(r_esp, v); }
    /* 004100e5: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004100e7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004100e8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004100e9: call 0x71d58c */ r_esp -= 4; W32(r_esp, 0x4100eeu); f_0071d58c();
    /* 004100ee: lea edx, [esp + 0xa0] */ r_edx = (u32)(r_esp+0xa0u);
    /* 004100f5: lea eax, [esp + 0x58] */ r_eax = (u32)(r_esp+0x58u);
    /* 004100f9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004100fb: push 0x47c35000 */ { u32 v = 0x47c35000u; r_esp -= 4; W32(r_esp, v); }
    /* 00410100: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00410102: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00410103: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00410104: call 0x71d58c */ r_esp -= 4; W32(r_esp, 0x410109u); f_0071d58c();
    /* 00410109: lea edx, [esp + 0xbc] */ r_edx = (u32)(r_esp+0xbcu);
    /* 00410110: lea eax, [esp + 0x8c] */ r_eax = (u32)(r_esp+0x8cu);
    /* 00410117: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00410119: push 0x47c35000 */ { u32 v = 0x47c35000u; r_esp -= 4; W32(r_esp, v); }
    /* 0041011e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00410120: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00410121: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00410122: call 0x71d58c */ r_esp -= 4; W32(r_esp, 0x410127u); f_0071d58c();
    /* 00410127: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041012a: add esp, 0xb4 */ {  u32 a = r_esp; u32 b = 0xb4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00410130: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00410131: ret  */ FN_RET(0x00410004); r_esp += 4; return;
L_00410132:; BB(0x00410132);
    /* 00410132: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00410134: add esp, 0xb4 */ {  u32 a = r_esp; u32 b = 0xb4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041013a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0041013b: ret  */ FN_RET(0x00410004); r_esp += 4; return;
}

void f_00410007(void)
{
    FN_ENTER(0x00410007);
    /* 00410007: add ebp, dword ptr [edx + 0x27] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_edx+0x27u)); u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0041000a: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x41000fu); f_00792fe8();
    /* 0041000f: lea edx, [esp + 0x104] */ r_edx = (u32)(r_esp+0x104u);
    /* 00410016: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00410018: push 0x47c35000 */ { u32 v = 0x47c35000u; r_esp -= 4; W32(r_esp, v); }
    /* 0041001d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0041001f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00410020: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00410021: call 0x71d58c */ r_esp -= 4; W32(r_esp, 0x410026u); f_0071d58c();
    /* 00410026: add esp, 0x6c */ {  u32 a = r_esp; u32 b = 0x6cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00410029: mov eax, dword ptr [0xa3af9c] */ r_eax = R32((u32)(0xa3af9cu));
    /* 0041002e: fld dword ptr [eax*8 + 0x8fa528] */ FPUSH(R_F32((u32)(r_eax*8+0x8fa528u)));
    /* 00410035: fld dword ptr [0x9a3204] */ FPUSH(R_F32((u32)(0x9a3204u)));
    /* 0041003b: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0041003d: fld dword ptr [0x9a3208] */ FPUSH(R_F32((u32)(0x9a3208u)));
    /* 00410043: fld dword ptr [0x9a320c] */ FPUSH(R_F32((u32)(0x9a320cu)));
    /* 00410049: fld dword ptr [0x9a3210] */ FPUSH(R_F32((u32)(0x9a3210u)));
    /* 0041004f: fld dword ptr [0x9a3214] */ FPUSH(R_F32((u32)(0x9a3214u)));
    /* 00410055: fld dword ptr [0x9a3218] */ FPUSH(R_F32((u32)(0x9a3218u)));
    /* 0041005b: movzx edx, word ptr [esp + 0x24] */ r_edx = (u32)R16((u32)(r_esp+0x24u));
    /* 00410060: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 00410062: fstp dword ptr [esp + 0x84] */ W_F32((u32)(r_esp+0x84u), ST(0)); FPOP();
    /* 00410069: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0041006b: fadd st(5) */ ST(0) = ST(0) + ST(5);
    /* 0041006d: fld dword ptr [eax*8 + 0x8fa52c] */ FPUSH(R_F32((u32)(r_eax*8+0x8fa52cu)));
    /* 00410074: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00410076: fstp dword ptr [esp + 0x8c] */ W_F32((u32)(r_esp+0x8cu), ST(0)); FPOP();
    /* 0041007d: fadd st(3), st(0) */ ST(3) = ST(3) + ST(0);
    /* 0041007f: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00410081: fstp dword ptr [esp + 0x88] */ W_F32((u32)(r_esp+0x88u), ST(0)); FPOP();
    /* 00410088: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0041008a: fstp dword ptr [esp + 0x90] */ W_F32((u32)(r_esp+0x90u), ST(0)); FPOP();
    /* 00410091: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 00410093: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00410095: fstp dword ptr [esp + 0x94] */ W_F32((u32)(r_esp+0x94u), ST(0)); FPOP();
    /* 0041009c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0041009e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004100a0: je 0x410132 */ if (fZ) goto L_00410132;
L_004100a6:; BB(0x004100a6);
    /* 004100a6: movzx eax, word ptr [esp + 0x44] */ r_eax = (u32)R16((u32)(r_esp+0x44u));
    /* 004100ab: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004100ad: jne 0x4100b9 */ if (!fZ) goto L_004100b9;
L_004100af:; BB(0x004100af);
    /* 004100af: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004100b1: add esp, 0xb4 */ {  u32 a = r_esp; u32 b = 0xb4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004100b7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004100b8: ret  */ FN_RET(0x00410007); r_esp += 4; return;
L_004100b9:; BB(0x004100b9);
    /* 004100b9: movzx eax, word ptr [esp + 0x64] */ r_eax = (u32)R16((u32)(r_esp+0x64u));
    /* 004100be: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004100c0: jne 0x4100cc */ if (!fZ) goto L_004100cc;
L_004100c2:; BB(0x004100c2);
    /* 004100c2: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004100c4: add esp, 0xb4 */ {  u32 a = r_esp; u32 b = 0xb4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004100ca: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004100cb: ret  */ FN_RET(0x00410007); r_esp += 4; return;
L_004100cc:; BB(0x004100cc);
    /* 004100cc: fstp dword ptr [esp + 0x98] */ W_F32((u32)(r_esp+0x98u), ST(0)); FPOP();
    /* 004100d3: lea edx, [esp + 0x84] */ r_edx = (u32)(r_esp+0x84u);
    /* 004100da: lea eax, [esp + 0x24] */ r_eax = (u32)(r_esp+0x24u);
    /* 004100de: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004100e0: push 0x47c35000 */ { u32 v = 0x47c35000u; r_esp -= 4; W32(r_esp, v); }
    /* 004100e5: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004100e7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004100e8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004100e9: call 0x71d58c */ r_esp -= 4; W32(r_esp, 0x4100eeu); f_0071d58c();
    /* 004100ee: lea edx, [esp + 0xa0] */ r_edx = (u32)(r_esp+0xa0u);
    /* 004100f5: lea eax, [esp + 0x58] */ r_eax = (u32)(r_esp+0x58u);
    /* 004100f9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004100fb: push 0x47c35000 */ { u32 v = 0x47c35000u; r_esp -= 4; W32(r_esp, v); }
    /* 00410100: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00410102: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00410103: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00410104: call 0x71d58c */ r_esp -= 4; W32(r_esp, 0x410109u); f_0071d58c();
    /* 00410109: lea edx, [esp + 0xbc] */ r_edx = (u32)(r_esp+0xbcu);
    /* 00410110: lea eax, [esp + 0x8c] */ r_eax = (u32)(r_esp+0x8cu);
    /* 00410117: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00410119: push 0x47c35000 */ { u32 v = 0x47c35000u; r_esp -= 4; W32(r_esp, v); }
    /* 0041011e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00410120: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00410121: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00410122: call 0x71d58c */ r_esp -= 4; W32(r_esp, 0x410127u); f_0071d58c();
    /* 00410127: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041012a: add esp, 0xb4 */ {  u32 a = r_esp; u32 b = 0xb4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00410130: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00410131: ret  */ FN_RET(0x00410007); r_esp += 4; return;
L_00410132:; BB(0x00410132);
    /* 00410132: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00410134: add esp, 0xb4 */ {  u32 a = r_esp; u32 b = 0xb4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041013a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0041013b: ret  */ FN_RET(0x00410007); r_esp += 4; return;
}

void f_00410029(void)
{
    FN_ENTER(0x00410029);
    /* 00410029: mov eax, dword ptr [0xa3af9c] */ r_eax = R32((u32)(0xa3af9cu));
    /* 0041002e: fld dword ptr [eax*8 + 0x8fa528] */ FPUSH(R_F32((u32)(r_eax*8+0x8fa528u)));
    /* 00410035: fld dword ptr [0x9a3204] */ FPUSH(R_F32((u32)(0x9a3204u)));
    /* 0041003b: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0041003d: fld dword ptr [0x9a3208] */ FPUSH(R_F32((u32)(0x9a3208u)));
    /* 00410043: fld dword ptr [0x9a320c] */ FPUSH(R_F32((u32)(0x9a320cu)));
    /* 00410049: fld dword ptr [0x9a3210] */ FPUSH(R_F32((u32)(0x9a3210u)));
    /* 0041004f: fld dword ptr [0x9a3214] */ FPUSH(R_F32((u32)(0x9a3214u)));
    /* 00410055: fld dword ptr [0x9a3218] */ FPUSH(R_F32((u32)(0x9a3218u)));
    /* 0041005b: movzx edx, word ptr [esp + 0x24] */ r_edx = (u32)R16((u32)(r_esp+0x24u));
    /* 00410060: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 00410062: fstp dword ptr [esp + 0x84] */ W_F32((u32)(r_esp+0x84u), ST(0)); FPOP();
    /* 00410069: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0041006b: fadd st(5) */ ST(0) = ST(0) + ST(5);
    /* 0041006d: fld dword ptr [eax*8 + 0x8fa52c] */ FPUSH(R_F32((u32)(r_eax*8+0x8fa52cu)));
    /* 00410074: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00410076: fstp dword ptr [esp + 0x8c] */ W_F32((u32)(r_esp+0x8cu), ST(0)); FPOP();
    /* 0041007d: fadd st(3), st(0) */ ST(3) = ST(3) + ST(0);
    /* 0041007f: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00410081: fstp dword ptr [esp + 0x88] */ W_F32((u32)(r_esp+0x88u), ST(0)); FPOP();
    /* 00410088: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0041008a: fstp dword ptr [esp + 0x90] */ W_F32((u32)(r_esp+0x90u), ST(0)); FPOP();
    /* 00410091: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 00410093: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00410095: fstp dword ptr [esp + 0x94] */ W_F32((u32)(r_esp+0x94u), ST(0)); FPOP();
    /* 0041009c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0041009e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004100a0: je 0x410132 */ if (fZ) goto L_00410132;
L_004100a6:; BB(0x004100a6);
    /* 004100a6: movzx eax, word ptr [esp + 0x44] */ r_eax = (u32)R16((u32)(r_esp+0x44u));
    /* 004100ab: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004100ad: jne 0x4100b9 */ if (!fZ) goto L_004100b9;
L_004100af:; BB(0x004100af);
    /* 004100af: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004100b1: add esp, 0xb4 */ {  u32 a = r_esp; u32 b = 0xb4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004100b7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004100b8: ret  */ FN_RET(0x00410029); r_esp += 4; return;
L_004100b9:; BB(0x004100b9);
    /* 004100b9: movzx eax, word ptr [esp + 0x64] */ r_eax = (u32)R16((u32)(r_esp+0x64u));
    /* 004100be: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004100c0: jne 0x4100cc */ if (!fZ) goto L_004100cc;
L_004100c2:; BB(0x004100c2);
    /* 004100c2: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004100c4: add esp, 0xb4 */ {  u32 a = r_esp; u32 b = 0xb4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004100ca: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004100cb: ret  */ FN_RET(0x00410029); r_esp += 4; return;
L_004100cc:; BB(0x004100cc);
    /* 004100cc: fstp dword ptr [esp + 0x98] */ W_F32((u32)(r_esp+0x98u), ST(0)); FPOP();
    /* 004100d3: lea edx, [esp + 0x84] */ r_edx = (u32)(r_esp+0x84u);
    /* 004100da: lea eax, [esp + 0x24] */ r_eax = (u32)(r_esp+0x24u);
    /* 004100de: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004100e0: push 0x47c35000 */ { u32 v = 0x47c35000u; r_esp -= 4; W32(r_esp, v); }
    /* 004100e5: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004100e7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004100e8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004100e9: call 0x71d58c */ r_esp -= 4; W32(r_esp, 0x4100eeu); f_0071d58c();
    /* 004100ee: lea edx, [esp + 0xa0] */ r_edx = (u32)(r_esp+0xa0u);
    /* 004100f5: lea eax, [esp + 0x58] */ r_eax = (u32)(r_esp+0x58u);
    /* 004100f9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004100fb: push 0x47c35000 */ { u32 v = 0x47c35000u; r_esp -= 4; W32(r_esp, v); }
    /* 00410100: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00410102: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00410103: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00410104: call 0x71d58c */ r_esp -= 4; W32(r_esp, 0x410109u); f_0071d58c();
    /* 00410109: lea edx, [esp + 0xbc] */ r_edx = (u32)(r_esp+0xbcu);
    /* 00410110: lea eax, [esp + 0x8c] */ r_eax = (u32)(r_esp+0x8cu);
    /* 00410117: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00410119: push 0x47c35000 */ { u32 v = 0x47c35000u; r_esp -= 4; W32(r_esp, v); }
    /* 0041011e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00410120: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00410121: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00410122: call 0x71d58c */ r_esp -= 4; W32(r_esp, 0x410127u); f_0071d58c();
    /* 00410127: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041012a: add esp, 0xb4 */ {  u32 a = r_esp; u32 b = 0xb4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00410130: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00410131: ret  */ FN_RET(0x00410029); r_esp += 4; return;
L_00410132:; BB(0x00410132);
    /* 00410132: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00410134: add esp, 0xb4 */ {  u32 a = r_esp; u32 b = 0xb4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041013a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0041013b: ret  */ FN_RET(0x00410029); r_esp += 4; return;
}

void f_0041002d(void)
{
    FN_ENTER(0x0041002d);
    /* 0041002d: add cl, bl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0041002f: add al, 0xc5 */ {  u32 a = (u8)r_eax; u32 b = 0xc5u; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00410031: sub byte ptr [ebp + 0x5d9008f], ah */ { u32 ad = (u32)(r_ebp+0x5d9008fu);  u32 a = R8(ad); u32 b = (u8)(r_eax>>8); u32 r = (a - b) & 0xffu; W8(ad, r);  }
    /* 00410037: add al, 0x32 */ {  u32 a = (u8)r_eax; u32 b = 0x32u; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00410039: lcall 0x805, 0xd9c1d800 */ UNSUP(0x00410039, "lcall 0x805, 0xd9c1d800");
    /* 00410040: xor bl, byte ptr [edx + 0xc05d900] */ {  u32 a = (u8)r_ebx; u32 b = R8((u32)(r_edx+0xc05d900u)); u32 r = (a ^ b) & 0xffu; r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00410046: xor bl, byte ptr [edx + 0x1005d900] */ {  u32 a = (u8)r_ebx; u32 b = R8((u32)(r_edx+0x1005d900u)); u32 r = (a ^ b) & 0xffu; r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0041004c: xor bl, byte ptr [edx + 0x1405d900] */ {  u32 a = (u8)r_ebx; u32 b = R8((u32)(r_edx+0x1405d900u)); u32 r = (a ^ b) & 0xffu; r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00410052: xor bl, byte ptr [edx + 0x1805d900] */ {  u32 a = (u8)r_ebx; u32 b = R8((u32)(r_edx+0x1805d900u)); u32 r = (a ^ b) & 0xffu; r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00410058: xor bl, byte ptr [edx + 0x54b70f00] */ {  u32 a = (u8)r_ebx; u32 b = R8((u32)(r_edx+0x54b70f00u)); u32 r = (a ^ b) & 0xffu; r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0041005e: and al, 0x24 */ {  u32 a = (u8)r_eax; u32 b = 0x24u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00410060: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 00410062: fstp dword ptr [esp + 0x84] */ W_F32((u32)(r_esp+0x84u), ST(0)); FPOP();
    /* 00410069: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0041006b: fadd st(5) */ ST(0) = ST(0) + ST(5);
    /* 0041006d: fld dword ptr [eax*8 + 0x8fa52c] */ FPUSH(R_F32((u32)(r_eax*8+0x8fa52cu)));
    /* 00410074: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00410076: fstp dword ptr [esp + 0x8c] */ W_F32((u32)(r_esp+0x8cu), ST(0)); FPOP();
    /* 0041007d: fadd st(3), st(0) */ ST(3) = ST(3) + ST(0);
    /* 0041007f: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00410081: fstp dword ptr [esp + 0x88] */ W_F32((u32)(r_esp+0x88u), ST(0)); FPOP();
    /* 00410088: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0041008a: fstp dword ptr [esp + 0x90] */ W_F32((u32)(r_esp+0x90u), ST(0)); FPOP();
    /* 00410091: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 00410093: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00410095: fstp dword ptr [esp + 0x94] */ W_F32((u32)(r_esp+0x94u), ST(0)); FPOP();
    /* 0041009c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0041009e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004100a0: je 0x410132 */ if (fZ) goto L_00410132;
L_004100a6:; BB(0x004100a6);
    /* 004100a6: movzx eax, word ptr [esp + 0x44] */ r_eax = (u32)R16((u32)(r_esp+0x44u));
    /* 004100ab: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004100ad: jne 0x4100b9 */ if (!fZ) goto L_004100b9;
L_004100af:; BB(0x004100af);
    /* 004100af: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004100b1: add esp, 0xb4 */ {  u32 a = r_esp; u32 b = 0xb4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004100b7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004100b8: ret  */ FN_RET(0x0041002d); r_esp += 4; return;
L_004100b9:; BB(0x004100b9);
    /* 004100b9: movzx eax, word ptr [esp + 0x64] */ r_eax = (u32)R16((u32)(r_esp+0x64u));
    /* 004100be: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004100c0: jne 0x4100cc */ if (!fZ) goto L_004100cc;
L_004100c2:; BB(0x004100c2);
    /* 004100c2: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004100c4: add esp, 0xb4 */ {  u32 a = r_esp; u32 b = 0xb4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004100ca: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004100cb: ret  */ FN_RET(0x0041002d); r_esp += 4; return;
L_004100cc:; BB(0x004100cc);
    /* 004100cc: fstp dword ptr [esp + 0x98] */ W_F32((u32)(r_esp+0x98u), ST(0)); FPOP();
    /* 004100d3: lea edx, [esp + 0x84] */ r_edx = (u32)(r_esp+0x84u);
    /* 004100da: lea eax, [esp + 0x24] */ r_eax = (u32)(r_esp+0x24u);
    /* 004100de: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004100e0: push 0x47c35000 */ { u32 v = 0x47c35000u; r_esp -= 4; W32(r_esp, v); }
    /* 004100e5: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004100e7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004100e8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004100e9: call 0x71d58c */ r_esp -= 4; W32(r_esp, 0x4100eeu); f_0071d58c();
    /* 004100ee: lea edx, [esp + 0xa0] */ r_edx = (u32)(r_esp+0xa0u);
    /* 004100f5: lea eax, [esp + 0x58] */ r_eax = (u32)(r_esp+0x58u);
    /* 004100f9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004100fb: push 0x47c35000 */ { u32 v = 0x47c35000u; r_esp -= 4; W32(r_esp, v); }
    /* 00410100: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00410102: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00410103: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00410104: call 0x71d58c */ r_esp -= 4; W32(r_esp, 0x410109u); f_0071d58c();
    /* 00410109: lea edx, [esp + 0xbc] */ r_edx = (u32)(r_esp+0xbcu);
    /* 00410110: lea eax, [esp + 0x8c] */ r_eax = (u32)(r_esp+0x8cu);
    /* 00410117: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00410119: push 0x47c35000 */ { u32 v = 0x47c35000u; r_esp -= 4; W32(r_esp, v); }
    /* 0041011e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00410120: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00410121: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00410122: call 0x71d58c */ r_esp -= 4; W32(r_esp, 0x410127u); f_0071d58c();
    /* 00410127: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041012a: add esp, 0xb4 */ {  u32 a = r_esp; u32 b = 0xb4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00410130: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00410131: ret  */ FN_RET(0x0041002d); r_esp += 4; return;
L_00410132:; BB(0x00410132);
    /* 00410132: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00410134: add esp, 0xb4 */ {  u32 a = r_esp; u32 b = 0xb4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041013a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0041013b: ret  */ FN_RET(0x0041002d); r_esp += 4; return;
}

void f_00410040(void)
{
    FN_ENTER(0x00410040);
    /* 00410040: xor bl, byte ptr [edx + 0xc05d900] */ {  u32 a = (u8)r_ebx; u32 b = R8((u32)(r_edx+0xc05d900u)); u32 r = (a ^ b) & 0xffu; r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00410046: xor bl, byte ptr [edx + 0x1005d900] */ {  u32 a = (u8)r_ebx; u32 b = R8((u32)(r_edx+0x1005d900u)); u32 r = (a ^ b) & 0xffu; r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0041004c: xor bl, byte ptr [edx + 0x1405d900] */ {  u32 a = (u8)r_ebx; u32 b = R8((u32)(r_edx+0x1405d900u)); u32 r = (a ^ b) & 0xffu; r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00410052: xor bl, byte ptr [edx + 0x1805d900] */ {  u32 a = (u8)r_ebx; u32 b = R8((u32)(r_edx+0x1805d900u)); u32 r = (a ^ b) & 0xffu; r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00410058: xor bl, byte ptr [edx + 0x54b70f00] */ {  u32 a = (u8)r_ebx; u32 b = R8((u32)(r_edx+0x54b70f00u)); u32 r = (a ^ b) & 0xffu; r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0041005e: and al, 0x24 */ {  u32 a = (u8)r_eax; u32 b = 0x24u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00410060: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 00410062: fstp dword ptr [esp + 0x84] */ W_F32((u32)(r_esp+0x84u), ST(0)); FPOP();
    /* 00410069: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0041006b: fadd st(5) */ ST(0) = ST(0) + ST(5);
    /* 0041006d: fld dword ptr [eax*8 + 0x8fa52c] */ FPUSH(R_F32((u32)(r_eax*8+0x8fa52cu)));
    /* 00410074: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00410076: fstp dword ptr [esp + 0x8c] */ W_F32((u32)(r_esp+0x8cu), ST(0)); FPOP();
    /* 0041007d: fadd st(3), st(0) */ ST(3) = ST(3) + ST(0);
    /* 0041007f: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00410081: fstp dword ptr [esp + 0x88] */ W_F32((u32)(r_esp+0x88u), ST(0)); FPOP();
    /* 00410088: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0041008a: fstp dword ptr [esp + 0x90] */ W_F32((u32)(r_esp+0x90u), ST(0)); FPOP();
    /* 00410091: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 00410093: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00410095: fstp dword ptr [esp + 0x94] */ W_F32((u32)(r_esp+0x94u), ST(0)); FPOP();
    /* 0041009c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0041009e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004100a0: je 0x410132 */ if (fZ) goto L_00410132;
L_004100a6:; BB(0x004100a6);
    /* 004100a6: movzx eax, word ptr [esp + 0x44] */ r_eax = (u32)R16((u32)(r_esp+0x44u));
    /* 004100ab: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004100ad: jne 0x4100b9 */ if (!fZ) goto L_004100b9;
L_004100af:; BB(0x004100af);
    /* 004100af: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004100b1: add esp, 0xb4 */ {  u32 a = r_esp; u32 b = 0xb4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004100b7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004100b8: ret  */ FN_RET(0x00410040); r_esp += 4; return;
L_004100b9:; BB(0x004100b9);
    /* 004100b9: movzx eax, word ptr [esp + 0x64] */ r_eax = (u32)R16((u32)(r_esp+0x64u));
    /* 004100be: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004100c0: jne 0x4100cc */ if (!fZ) goto L_004100cc;
L_004100c2:; BB(0x004100c2);
    /* 004100c2: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004100c4: add esp, 0xb4 */ {  u32 a = r_esp; u32 b = 0xb4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004100ca: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004100cb: ret  */ FN_RET(0x00410040); r_esp += 4; return;
L_004100cc:; BB(0x004100cc);
    /* 004100cc: fstp dword ptr [esp + 0x98] */ W_F32((u32)(r_esp+0x98u), ST(0)); FPOP();
    /* 004100d3: lea edx, [esp + 0x84] */ r_edx = (u32)(r_esp+0x84u);
    /* 004100da: lea eax, [esp + 0x24] */ r_eax = (u32)(r_esp+0x24u);
    /* 004100de: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004100e0: push 0x47c35000 */ { u32 v = 0x47c35000u; r_esp -= 4; W32(r_esp, v); }
    /* 004100e5: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004100e7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004100e8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004100e9: call 0x71d58c */ r_esp -= 4; W32(r_esp, 0x4100eeu); f_0071d58c();
    /* 004100ee: lea edx, [esp + 0xa0] */ r_edx = (u32)(r_esp+0xa0u);
    /* 004100f5: lea eax, [esp + 0x58] */ r_eax = (u32)(r_esp+0x58u);
    /* 004100f9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004100fb: push 0x47c35000 */ { u32 v = 0x47c35000u; r_esp -= 4; W32(r_esp, v); }
    /* 00410100: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00410102: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00410103: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00410104: call 0x71d58c */ r_esp -= 4; W32(r_esp, 0x410109u); f_0071d58c();
    /* 00410109: lea edx, [esp + 0xbc] */ r_edx = (u32)(r_esp+0xbcu);
    /* 00410110: lea eax, [esp + 0x8c] */ r_eax = (u32)(r_esp+0x8cu);
    /* 00410117: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00410119: push 0x47c35000 */ { u32 v = 0x47c35000u; r_esp -= 4; W32(r_esp, v); }
    /* 0041011e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00410120: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00410121: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00410122: call 0x71d58c */ r_esp -= 4; W32(r_esp, 0x410127u); f_0071d58c();
    /* 00410127: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041012a: add esp, 0xb4 */ {  u32 a = r_esp; u32 b = 0xb4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00410130: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00410131: ret  */ FN_RET(0x00410040); r_esp += 4; return;
L_00410132:; BB(0x00410132);
    /* 00410132: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00410134: add esp, 0xb4 */ {  u32 a = r_esp; u32 b = 0xb4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041013a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0041013b: ret  */ FN_RET(0x00410040); r_esp += 4; return;
}

void f_00410042(void)
{
    FN_ENTER(0x00410042);
    /* 00410042: add cl, bl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00410044: add eax, 0x9a320c */ {  u32 a = r_eax; u32 b = 0x9a320cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00410049: fld dword ptr [0x9a3210] */ FPUSH(R_F32((u32)(0x9a3210u)));
    /* 0041004f: fld dword ptr [0x9a3214] */ FPUSH(R_F32((u32)(0x9a3214u)));
    /* 00410055: fld dword ptr [0x9a3218] */ FPUSH(R_F32((u32)(0x9a3218u)));
    /* 0041005b: movzx edx, word ptr [esp + 0x24] */ r_edx = (u32)R16((u32)(r_esp+0x24u));
    /* 00410060: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 00410062: fstp dword ptr [esp + 0x84] */ W_F32((u32)(r_esp+0x84u), ST(0)); FPOP();
    /* 00410069: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0041006b: fadd st(5) */ ST(0) = ST(0) + ST(5);
    /* 0041006d: fld dword ptr [eax*8 + 0x8fa52c] */ FPUSH(R_F32((u32)(r_eax*8+0x8fa52cu)));
    /* 00410074: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00410076: fstp dword ptr [esp + 0x8c] */ W_F32((u32)(r_esp+0x8cu), ST(0)); FPOP();
    /* 0041007d: fadd st(3), st(0) */ ST(3) = ST(3) + ST(0);
    /* 0041007f: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00410081: fstp dword ptr [esp + 0x88] */ W_F32((u32)(r_esp+0x88u), ST(0)); FPOP();
    /* 00410088: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0041008a: fstp dword ptr [esp + 0x90] */ W_F32((u32)(r_esp+0x90u), ST(0)); FPOP();
    /* 00410091: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 00410093: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00410095: fstp dword ptr [esp + 0x94] */ W_F32((u32)(r_esp+0x94u), ST(0)); FPOP();
    /* 0041009c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0041009e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004100a0: je 0x410132 */ if (fZ) goto L_00410132;
L_004100a6:; BB(0x004100a6);
    /* 004100a6: movzx eax, word ptr [esp + 0x44] */ r_eax = (u32)R16((u32)(r_esp+0x44u));
    /* 004100ab: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004100ad: jne 0x4100b9 */ if (!fZ) goto L_004100b9;
L_004100af:; BB(0x004100af);
    /* 004100af: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004100b1: add esp, 0xb4 */ {  u32 a = r_esp; u32 b = 0xb4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004100b7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004100b8: ret  */ FN_RET(0x00410042); r_esp += 4; return;
L_004100b9:; BB(0x004100b9);
    /* 004100b9: movzx eax, word ptr [esp + 0x64] */ r_eax = (u32)R16((u32)(r_esp+0x64u));
    /* 004100be: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004100c0: jne 0x4100cc */ if (!fZ) goto L_004100cc;
L_004100c2:; BB(0x004100c2);
    /* 004100c2: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004100c4: add esp, 0xb4 */ {  u32 a = r_esp; u32 b = 0xb4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004100ca: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004100cb: ret  */ FN_RET(0x00410042); r_esp += 4; return;
L_004100cc:; BB(0x004100cc);
    /* 004100cc: fstp dword ptr [esp + 0x98] */ W_F32((u32)(r_esp+0x98u), ST(0)); FPOP();
    /* 004100d3: lea edx, [esp + 0x84] */ r_edx = (u32)(r_esp+0x84u);
    /* 004100da: lea eax, [esp + 0x24] */ r_eax = (u32)(r_esp+0x24u);
    /* 004100de: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004100e0: push 0x47c35000 */ { u32 v = 0x47c35000u; r_esp -= 4; W32(r_esp, v); }
    /* 004100e5: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004100e7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004100e8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004100e9: call 0x71d58c */ r_esp -= 4; W32(r_esp, 0x4100eeu); f_0071d58c();
    /* 004100ee: lea edx, [esp + 0xa0] */ r_edx = (u32)(r_esp+0xa0u);
    /* 004100f5: lea eax, [esp + 0x58] */ r_eax = (u32)(r_esp+0x58u);
    /* 004100f9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004100fb: push 0x47c35000 */ { u32 v = 0x47c35000u; r_esp -= 4; W32(r_esp, v); }
    /* 00410100: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00410102: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00410103: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00410104: call 0x71d58c */ r_esp -= 4; W32(r_esp, 0x410109u); f_0071d58c();
    /* 00410109: lea edx, [esp + 0xbc] */ r_edx = (u32)(r_esp+0xbcu);
    /* 00410110: lea eax, [esp + 0x8c] */ r_eax = (u32)(r_esp+0x8cu);
    /* 00410117: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00410119: push 0x47c35000 */ { u32 v = 0x47c35000u; r_esp -= 4; W32(r_esp, v); }
    /* 0041011e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00410120: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00410121: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00410122: call 0x71d58c */ r_esp -= 4; W32(r_esp, 0x410127u); f_0071d58c();
    /* 00410127: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041012a: add esp, 0xb4 */ {  u32 a = r_esp; u32 b = 0xb4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00410130: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00410131: ret  */ FN_RET(0x00410042); r_esp += 4; return;
L_00410132:; BB(0x00410132);
    /* 00410132: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00410134: add esp, 0xb4 */ {  u32 a = r_esp; u32 b = 0xb4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041013a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0041013b: ret  */ FN_RET(0x00410042); r_esp += 4; return;
}

void f_00410043(void)
{
    FN_ENTER(0x00410043);
    /* 00410043: fld dword ptr [0x9a320c] */ FPUSH(R_F32((u32)(0x9a320cu)));
    /* 00410049: fld dword ptr [0x9a3210] */ FPUSH(R_F32((u32)(0x9a3210u)));
    /* 0041004f: fld dword ptr [0x9a3214] */ FPUSH(R_F32((u32)(0x9a3214u)));
    /* 00410055: fld dword ptr [0x9a3218] */ FPUSH(R_F32((u32)(0x9a3218u)));
    /* 0041005b: movzx edx, word ptr [esp + 0x24] */ r_edx = (u32)R16((u32)(r_esp+0x24u));
    /* 00410060: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 00410062: fstp dword ptr [esp + 0x84] */ W_F32((u32)(r_esp+0x84u), ST(0)); FPOP();
    /* 00410069: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0041006b: fadd st(5) */ ST(0) = ST(0) + ST(5);
    /* 0041006d: fld dword ptr [eax*8 + 0x8fa52c] */ FPUSH(R_F32((u32)(r_eax*8+0x8fa52cu)));
    /* 00410074: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00410076: fstp dword ptr [esp + 0x8c] */ W_F32((u32)(r_esp+0x8cu), ST(0)); FPOP();
    /* 0041007d: fadd st(3), st(0) */ ST(3) = ST(3) + ST(0);
    /* 0041007f: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00410081: fstp dword ptr [esp + 0x88] */ W_F32((u32)(r_esp+0x88u), ST(0)); FPOP();
    /* 00410088: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0041008a: fstp dword ptr [esp + 0x90] */ W_F32((u32)(r_esp+0x90u), ST(0)); FPOP();
    /* 00410091: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 00410093: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00410095: fstp dword ptr [esp + 0x94] */ W_F32((u32)(r_esp+0x94u), ST(0)); FPOP();
    /* 0041009c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0041009e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004100a0: je 0x410132 */ if (fZ) goto L_00410132;
L_004100a6:; BB(0x004100a6);
    /* 004100a6: movzx eax, word ptr [esp + 0x44] */ r_eax = (u32)R16((u32)(r_esp+0x44u));
    /* 004100ab: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004100ad: jne 0x4100b9 */ if (!fZ) goto L_004100b9;
L_004100af:; BB(0x004100af);
    /* 004100af: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004100b1: add esp, 0xb4 */ {  u32 a = r_esp; u32 b = 0xb4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004100b7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004100b8: ret  */ FN_RET(0x00410043); r_esp += 4; return;
L_004100b9:; BB(0x004100b9);
    /* 004100b9: movzx eax, word ptr [esp + 0x64] */ r_eax = (u32)R16((u32)(r_esp+0x64u));
    /* 004100be: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004100c0: jne 0x4100cc */ if (!fZ) goto L_004100cc;
L_004100c2:; BB(0x004100c2);
    /* 004100c2: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004100c4: add esp, 0xb4 */ {  u32 a = r_esp; u32 b = 0xb4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004100ca: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004100cb: ret  */ FN_RET(0x00410043); r_esp += 4; return;
L_004100cc:; BB(0x004100cc);
    /* 004100cc: fstp dword ptr [esp + 0x98] */ W_F32((u32)(r_esp+0x98u), ST(0)); FPOP();
    /* 004100d3: lea edx, [esp + 0x84] */ r_edx = (u32)(r_esp+0x84u);
    /* 004100da: lea eax, [esp + 0x24] */ r_eax = (u32)(r_esp+0x24u);
    /* 004100de: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004100e0: push 0x47c35000 */ { u32 v = 0x47c35000u; r_esp -= 4; W32(r_esp, v); }
    /* 004100e5: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004100e7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004100e8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004100e9: call 0x71d58c */ r_esp -= 4; W32(r_esp, 0x4100eeu); f_0071d58c();
    /* 004100ee: lea edx, [esp + 0xa0] */ r_edx = (u32)(r_esp+0xa0u);
    /* 004100f5: lea eax, [esp + 0x58] */ r_eax = (u32)(r_esp+0x58u);
    /* 004100f9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004100fb: push 0x47c35000 */ { u32 v = 0x47c35000u; r_esp -= 4; W32(r_esp, v); }
    /* 00410100: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00410102: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00410103: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00410104: call 0x71d58c */ r_esp -= 4; W32(r_esp, 0x410109u); f_0071d58c();
    /* 00410109: lea edx, [esp + 0xbc] */ r_edx = (u32)(r_esp+0xbcu);
    /* 00410110: lea eax, [esp + 0x8c] */ r_eax = (u32)(r_esp+0x8cu);
    /* 00410117: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00410119: push 0x47c35000 */ { u32 v = 0x47c35000u; r_esp -= 4; W32(r_esp, v); }
    /* 0041011e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00410120: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00410121: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00410122: call 0x71d58c */ r_esp -= 4; W32(r_esp, 0x410127u); f_0071d58c();
    /* 00410127: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041012a: add esp, 0xb4 */ {  u32 a = r_esp; u32 b = 0xb4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00410130: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00410131: ret  */ FN_RET(0x00410043); r_esp += 4; return;
L_00410132:; BB(0x00410132);
    /* 00410132: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00410134: add esp, 0xb4 */ {  u32 a = r_esp; u32 b = 0xb4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041013a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0041013b: ret  */ FN_RET(0x00410043); r_esp += 4; return;
}

void f_00410045(void)
{
    FN_ENTER(0x00410045);
    /* 00410045: or al, 0x32 */ {  u32 a = (u8)r_eax; u32 b = 0x32u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00410047: lcall 0x9a32, 0x1005d900 */ UNSUP(0x00410047, "lcall 0x9a32, 0x1005d900");
    /* 0041004e: add cl, bl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00410050: add eax, 0x9a3214 */ {  u32 a = r_eax; u32 b = 0x9a3214u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00410055: fld dword ptr [0x9a3218] */ FPUSH(R_F32((u32)(0x9a3218u)));
    /* 0041005b: movzx edx, word ptr [esp + 0x24] */ r_edx = (u32)R16((u32)(r_esp+0x24u));
    /* 00410060: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 00410062: fstp dword ptr [esp + 0x84] */ W_F32((u32)(r_esp+0x84u), ST(0)); FPOP();
    /* 00410069: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0041006b: fadd st(5) */ ST(0) = ST(0) + ST(5);
    /* 0041006d: fld dword ptr [eax*8 + 0x8fa52c] */ FPUSH(R_F32((u32)(r_eax*8+0x8fa52cu)));
    /* 00410074: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00410076: fstp dword ptr [esp + 0x8c] */ W_F32((u32)(r_esp+0x8cu), ST(0)); FPOP();
    /* 0041007d: fadd st(3), st(0) */ ST(3) = ST(3) + ST(0);
    /* 0041007f: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00410081: fstp dword ptr [esp + 0x88] */ W_F32((u32)(r_esp+0x88u), ST(0)); FPOP();
    /* 00410088: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0041008a: fstp dword ptr [esp + 0x90] */ W_F32((u32)(r_esp+0x90u), ST(0)); FPOP();
    /* 00410091: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 00410093: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00410095: fstp dword ptr [esp + 0x94] */ W_F32((u32)(r_esp+0x94u), ST(0)); FPOP();
    /* 0041009c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0041009e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004100a0: je 0x410132 */ if (fZ) goto L_00410132;
L_004100a6:; BB(0x004100a6);
    /* 004100a6: movzx eax, word ptr [esp + 0x44] */ r_eax = (u32)R16((u32)(r_esp+0x44u));
    /* 004100ab: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004100ad: jne 0x4100b9 */ if (!fZ) goto L_004100b9;
L_004100af:; BB(0x004100af);
    /* 004100af: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004100b1: add esp, 0xb4 */ {  u32 a = r_esp; u32 b = 0xb4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004100b7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004100b8: ret  */ FN_RET(0x00410045); r_esp += 4; return;
L_004100b9:; BB(0x004100b9);
    /* 004100b9: movzx eax, word ptr [esp + 0x64] */ r_eax = (u32)R16((u32)(r_esp+0x64u));
    /* 004100be: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004100c0: jne 0x4100cc */ if (!fZ) goto L_004100cc;
L_004100c2:; BB(0x004100c2);
    /* 004100c2: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004100c4: add esp, 0xb4 */ {  u32 a = r_esp; u32 b = 0xb4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004100ca: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004100cb: ret  */ FN_RET(0x00410045); r_esp += 4; return;
L_004100cc:; BB(0x004100cc);
    /* 004100cc: fstp dword ptr [esp + 0x98] */ W_F32((u32)(r_esp+0x98u), ST(0)); FPOP();
    /* 004100d3: lea edx, [esp + 0x84] */ r_edx = (u32)(r_esp+0x84u);
    /* 004100da: lea eax, [esp + 0x24] */ r_eax = (u32)(r_esp+0x24u);
    /* 004100de: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004100e0: push 0x47c35000 */ { u32 v = 0x47c35000u; r_esp -= 4; W32(r_esp, v); }
    /* 004100e5: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004100e7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004100e8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004100e9: call 0x71d58c */ r_esp -= 4; W32(r_esp, 0x4100eeu); f_0071d58c();
    /* 004100ee: lea edx, [esp + 0xa0] */ r_edx = (u32)(r_esp+0xa0u);
    /* 004100f5: lea eax, [esp + 0x58] */ r_eax = (u32)(r_esp+0x58u);
    /* 004100f9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004100fb: push 0x47c35000 */ { u32 v = 0x47c35000u; r_esp -= 4; W32(r_esp, v); }
    /* 00410100: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00410102: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00410103: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00410104: call 0x71d58c */ r_esp -= 4; W32(r_esp, 0x410109u); f_0071d58c();
    /* 00410109: lea edx, [esp + 0xbc] */ r_edx = (u32)(r_esp+0xbcu);
    /* 00410110: lea eax, [esp + 0x8c] */ r_eax = (u32)(r_esp+0x8cu);
    /* 00410117: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00410119: push 0x47c35000 */ { u32 v = 0x47c35000u; r_esp -= 4; W32(r_esp, v); }
    /* 0041011e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00410120: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00410121: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00410122: call 0x71d58c */ r_esp -= 4; W32(r_esp, 0x410127u); f_0071d58c();
    /* 00410127: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041012a: add esp, 0xb4 */ {  u32 a = r_esp; u32 b = 0xb4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00410130: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00410131: ret  */ FN_RET(0x00410045); r_esp += 4; return;
L_00410132:; BB(0x00410132);
    /* 00410132: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00410134: add esp, 0xb4 */ {  u32 a = r_esp; u32 b = 0xb4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041013a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0041013b: ret  */ FN_RET(0x00410045); r_esp += 4; return;
}

void f_00410047(void)
{
    FN_ENTER(0x00410047);
    /* 00410047: lcall 0x9a32, 0x1005d900 */ UNSUP(0x00410047, "lcall 0x9a32, 0x1005d900");
    /* 0041004e: add cl, bl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00410050: add eax, 0x9a3214 */ {  u32 a = r_eax; u32 b = 0x9a3214u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00410055: fld dword ptr [0x9a3218] */ FPUSH(R_F32((u32)(0x9a3218u)));
    /* 0041005b: movzx edx, word ptr [esp + 0x24] */ r_edx = (u32)R16((u32)(r_esp+0x24u));
    /* 00410060: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 00410062: fstp dword ptr [esp + 0x84] */ W_F32((u32)(r_esp+0x84u), ST(0)); FPOP();
    /* 00410069: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0041006b: fadd st(5) */ ST(0) = ST(0) + ST(5);
    /* 0041006d: fld dword ptr [eax*8 + 0x8fa52c] */ FPUSH(R_F32((u32)(r_eax*8+0x8fa52cu)));
    /* 00410074: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00410076: fstp dword ptr [esp + 0x8c] */ W_F32((u32)(r_esp+0x8cu), ST(0)); FPOP();
    /* 0041007d: fadd st(3), st(0) */ ST(3) = ST(3) + ST(0);
    /* 0041007f: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00410081: fstp dword ptr [esp + 0x88] */ W_F32((u32)(r_esp+0x88u), ST(0)); FPOP();
    /* 00410088: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0041008a: fstp dword ptr [esp + 0x90] */ W_F32((u32)(r_esp+0x90u), ST(0)); FPOP();
    /* 00410091: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 00410093: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00410095: fstp dword ptr [esp + 0x94] */ W_F32((u32)(r_esp+0x94u), ST(0)); FPOP();
    /* 0041009c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0041009e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004100a0: je 0x410132 */ if (fZ) goto L_00410132;
L_004100a6:; BB(0x004100a6);
    /* 004100a6: movzx eax, word ptr [esp + 0x44] */ r_eax = (u32)R16((u32)(r_esp+0x44u));
    /* 004100ab: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004100ad: jne 0x4100b9 */ if (!fZ) goto L_004100b9;
L_004100af:; BB(0x004100af);
    /* 004100af: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004100b1: add esp, 0xb4 */ {  u32 a = r_esp; u32 b = 0xb4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004100b7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004100b8: ret  */ FN_RET(0x00410047); r_esp += 4; return;
L_004100b9:; BB(0x004100b9);
    /* 004100b9: movzx eax, word ptr [esp + 0x64] */ r_eax = (u32)R16((u32)(r_esp+0x64u));
    /* 004100be: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004100c0: jne 0x4100cc */ if (!fZ) goto L_004100cc;
L_004100c2:; BB(0x004100c2);
    /* 004100c2: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004100c4: add esp, 0xb4 */ {  u32 a = r_esp; u32 b = 0xb4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004100ca: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004100cb: ret  */ FN_RET(0x00410047); r_esp += 4; return;
L_004100cc:; BB(0x004100cc);
    /* 004100cc: fstp dword ptr [esp + 0x98] */ W_F32((u32)(r_esp+0x98u), ST(0)); FPOP();
    /* 004100d3: lea edx, [esp + 0x84] */ r_edx = (u32)(r_esp+0x84u);
    /* 004100da: lea eax, [esp + 0x24] */ r_eax = (u32)(r_esp+0x24u);
    /* 004100de: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004100e0: push 0x47c35000 */ { u32 v = 0x47c35000u; r_esp -= 4; W32(r_esp, v); }
    /* 004100e5: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004100e7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004100e8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004100e9: call 0x71d58c */ r_esp -= 4; W32(r_esp, 0x4100eeu); f_0071d58c();
    /* 004100ee: lea edx, [esp + 0xa0] */ r_edx = (u32)(r_esp+0xa0u);
    /* 004100f5: lea eax, [esp + 0x58] */ r_eax = (u32)(r_esp+0x58u);
    /* 004100f9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004100fb: push 0x47c35000 */ { u32 v = 0x47c35000u; r_esp -= 4; W32(r_esp, v); }
    /* 00410100: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00410102: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00410103: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00410104: call 0x71d58c */ r_esp -= 4; W32(r_esp, 0x410109u); f_0071d58c();
    /* 00410109: lea edx, [esp + 0xbc] */ r_edx = (u32)(r_esp+0xbcu);
    /* 00410110: lea eax, [esp + 0x8c] */ r_eax = (u32)(r_esp+0x8cu);
    /* 00410117: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00410119: push 0x47c35000 */ { u32 v = 0x47c35000u; r_esp -= 4; W32(r_esp, v); }
    /* 0041011e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00410120: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00410121: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00410122: call 0x71d58c */ r_esp -= 4; W32(r_esp, 0x410127u); f_0071d58c();
    /* 00410127: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041012a: add esp, 0xb4 */ {  u32 a = r_esp; u32 b = 0xb4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00410130: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00410131: ret  */ FN_RET(0x00410047); r_esp += 4; return;
L_00410132:; BB(0x00410132);
    /* 00410132: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00410134: add esp, 0xb4 */ {  u32 a = r_esp; u32 b = 0xb4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041013a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0041013b: ret  */ FN_RET(0x00410047); r_esp += 4; return;
}

void f_0041004a(void)
{
    FN_ENTER(0x0041004a);
    /* 0041004a: add eax, 0x9a3210 */ {  u32 a = r_eax; u32 b = 0x9a3210u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0041004f: fld dword ptr [0x9a3214] */ FPUSH(R_F32((u32)(0x9a3214u)));
    /* 00410055: fld dword ptr [0x9a3218] */ FPUSH(R_F32((u32)(0x9a3218u)));
    /* 0041005b: movzx edx, word ptr [esp + 0x24] */ r_edx = (u32)R16((u32)(r_esp+0x24u));
    /* 00410060: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 00410062: fstp dword ptr [esp + 0x84] */ W_F32((u32)(r_esp+0x84u), ST(0)); FPOP();
    /* 00410069: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0041006b: fadd st(5) */ ST(0) = ST(0) + ST(5);
    /* 0041006d: fld dword ptr [eax*8 + 0x8fa52c] */ FPUSH(R_F32((u32)(r_eax*8+0x8fa52cu)));
    /* 00410074: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00410076: fstp dword ptr [esp + 0x8c] */ W_F32((u32)(r_esp+0x8cu), ST(0)); FPOP();
    /* 0041007d: fadd st(3), st(0) */ ST(3) = ST(3) + ST(0);
    /* 0041007f: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00410081: fstp dword ptr [esp + 0x88] */ W_F32((u32)(r_esp+0x88u), ST(0)); FPOP();
    /* 00410088: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0041008a: fstp dword ptr [esp + 0x90] */ W_F32((u32)(r_esp+0x90u), ST(0)); FPOP();
    /* 00410091: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 00410093: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00410095: fstp dword ptr [esp + 0x94] */ W_F32((u32)(r_esp+0x94u), ST(0)); FPOP();
    /* 0041009c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0041009e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004100a0: je 0x410132 */ if (fZ) goto L_00410132;
L_004100a6:; BB(0x004100a6);
    /* 004100a6: movzx eax, word ptr [esp + 0x44] */ r_eax = (u32)R16((u32)(r_esp+0x44u));
    /* 004100ab: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004100ad: jne 0x4100b9 */ if (!fZ) goto L_004100b9;
L_004100af:; BB(0x004100af);
    /* 004100af: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004100b1: add esp, 0xb4 */ {  u32 a = r_esp; u32 b = 0xb4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004100b7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004100b8: ret  */ FN_RET(0x0041004a); r_esp += 4; return;
L_004100b9:; BB(0x004100b9);
    /* 004100b9: movzx eax, word ptr [esp + 0x64] */ r_eax = (u32)R16((u32)(r_esp+0x64u));
    /* 004100be: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004100c0: jne 0x4100cc */ if (!fZ) goto L_004100cc;
L_004100c2:; BB(0x004100c2);
    /* 004100c2: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004100c4: add esp, 0xb4 */ {  u32 a = r_esp; u32 b = 0xb4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004100ca: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004100cb: ret  */ FN_RET(0x0041004a); r_esp += 4; return;
L_004100cc:; BB(0x004100cc);
    /* 004100cc: fstp dword ptr [esp + 0x98] */ W_F32((u32)(r_esp+0x98u), ST(0)); FPOP();
    /* 004100d3: lea edx, [esp + 0x84] */ r_edx = (u32)(r_esp+0x84u);
    /* 004100da: lea eax, [esp + 0x24] */ r_eax = (u32)(r_esp+0x24u);
    /* 004100de: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004100e0: push 0x47c35000 */ { u32 v = 0x47c35000u; r_esp -= 4; W32(r_esp, v); }
    /* 004100e5: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004100e7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004100e8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004100e9: call 0x71d58c */ r_esp -= 4; W32(r_esp, 0x4100eeu); f_0071d58c();
    /* 004100ee: lea edx, [esp + 0xa0] */ r_edx = (u32)(r_esp+0xa0u);
    /* 004100f5: lea eax, [esp + 0x58] */ r_eax = (u32)(r_esp+0x58u);
    /* 004100f9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004100fb: push 0x47c35000 */ { u32 v = 0x47c35000u; r_esp -= 4; W32(r_esp, v); }
    /* 00410100: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00410102: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00410103: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00410104: call 0x71d58c */ r_esp -= 4; W32(r_esp, 0x410109u); f_0071d58c();
    /* 00410109: lea edx, [esp + 0xbc] */ r_edx = (u32)(r_esp+0xbcu);
    /* 00410110: lea eax, [esp + 0x8c] */ r_eax = (u32)(r_esp+0x8cu);
    /* 00410117: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00410119: push 0x47c35000 */ { u32 v = 0x47c35000u; r_esp -= 4; W32(r_esp, v); }
    /* 0041011e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00410120: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00410121: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00410122: call 0x71d58c */ r_esp -= 4; W32(r_esp, 0x410127u); f_0071d58c();
    /* 00410127: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041012a: add esp, 0xb4 */ {  u32 a = r_esp; u32 b = 0xb4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00410130: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00410131: ret  */ FN_RET(0x0041004a); r_esp += 4; return;
L_00410132:; BB(0x00410132);
    /* 00410132: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00410134: add esp, 0xb4 */ {  u32 a = r_esp; u32 b = 0xb4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041013a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0041013b: ret  */ FN_RET(0x0041004a); r_esp += 4; return;
}

void f_0041004c(void)
{
    FN_ENTER(0x0041004c);
    /* 0041004c: xor bl, byte ptr [edx + 0x1405d900] */ {  u32 a = (u8)r_ebx; u32 b = R8((u32)(r_edx+0x1405d900u)); u32 r = (a ^ b) & 0xffu; r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00410052: xor bl, byte ptr [edx + 0x1805d900] */ {  u32 a = (u8)r_ebx; u32 b = R8((u32)(r_edx+0x1805d900u)); u32 r = (a ^ b) & 0xffu; r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00410058: xor bl, byte ptr [edx + 0x54b70f00] */ {  u32 a = (u8)r_ebx; u32 b = R8((u32)(r_edx+0x54b70f00u)); u32 r = (a ^ b) & 0xffu; r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0041005e: and al, 0x24 */ {  u32 a = (u8)r_eax; u32 b = 0x24u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00410060: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 00410062: fstp dword ptr [esp + 0x84] */ W_F32((u32)(r_esp+0x84u), ST(0)); FPOP();
    /* 00410069: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0041006b: fadd st(5) */ ST(0) = ST(0) + ST(5);
    /* 0041006d: fld dword ptr [eax*8 + 0x8fa52c] */ FPUSH(R_F32((u32)(r_eax*8+0x8fa52cu)));
    /* 00410074: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00410076: fstp dword ptr [esp + 0x8c] */ W_F32((u32)(r_esp+0x8cu), ST(0)); FPOP();
    /* 0041007d: fadd st(3), st(0) */ ST(3) = ST(3) + ST(0);
    /* 0041007f: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00410081: fstp dword ptr [esp + 0x88] */ W_F32((u32)(r_esp+0x88u), ST(0)); FPOP();
    /* 00410088: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0041008a: fstp dword ptr [esp + 0x90] */ W_F32((u32)(r_esp+0x90u), ST(0)); FPOP();
    /* 00410091: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 00410093: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00410095: fstp dword ptr [esp + 0x94] */ W_F32((u32)(r_esp+0x94u), ST(0)); FPOP();
    /* 0041009c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0041009e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004100a0: je 0x410132 */ if (fZ) goto L_00410132;
L_004100a6:; BB(0x004100a6);
    /* 004100a6: movzx eax, word ptr [esp + 0x44] */ r_eax = (u32)R16((u32)(r_esp+0x44u));
    /* 004100ab: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004100ad: jne 0x4100b9 */ if (!fZ) goto L_004100b9;
L_004100af:; BB(0x004100af);
    /* 004100af: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004100b1: add esp, 0xb4 */ {  u32 a = r_esp; u32 b = 0xb4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004100b7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004100b8: ret  */ FN_RET(0x0041004c); r_esp += 4; return;
L_004100b9:; BB(0x004100b9);
    /* 004100b9: movzx eax, word ptr [esp + 0x64] */ r_eax = (u32)R16((u32)(r_esp+0x64u));
    /* 004100be: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004100c0: jne 0x4100cc */ if (!fZ) goto L_004100cc;
L_004100c2:; BB(0x004100c2);
    /* 004100c2: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004100c4: add esp, 0xb4 */ {  u32 a = r_esp; u32 b = 0xb4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004100ca: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004100cb: ret  */ FN_RET(0x0041004c); r_esp += 4; return;
L_004100cc:; BB(0x004100cc);
    /* 004100cc: fstp dword ptr [esp + 0x98] */ W_F32((u32)(r_esp+0x98u), ST(0)); FPOP();
    /* 004100d3: lea edx, [esp + 0x84] */ r_edx = (u32)(r_esp+0x84u);
    /* 004100da: lea eax, [esp + 0x24] */ r_eax = (u32)(r_esp+0x24u);
    /* 004100de: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004100e0: push 0x47c35000 */ { u32 v = 0x47c35000u; r_esp -= 4; W32(r_esp, v); }
    /* 004100e5: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004100e7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004100e8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004100e9: call 0x71d58c */ r_esp -= 4; W32(r_esp, 0x4100eeu); f_0071d58c();
    /* 004100ee: lea edx, [esp + 0xa0] */ r_edx = (u32)(r_esp+0xa0u);
    /* 004100f5: lea eax, [esp + 0x58] */ r_eax = (u32)(r_esp+0x58u);
    /* 004100f9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004100fb: push 0x47c35000 */ { u32 v = 0x47c35000u; r_esp -= 4; W32(r_esp, v); }
    /* 00410100: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00410102: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00410103: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00410104: call 0x71d58c */ r_esp -= 4; W32(r_esp, 0x410109u); f_0071d58c();
    /* 00410109: lea edx, [esp + 0xbc] */ r_edx = (u32)(r_esp+0xbcu);
    /* 00410110: lea eax, [esp + 0x8c] */ r_eax = (u32)(r_esp+0x8cu);
    /* 00410117: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00410119: push 0x47c35000 */ { u32 v = 0x47c35000u; r_esp -= 4; W32(r_esp, v); }
    /* 0041011e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00410120: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00410121: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00410122: call 0x71d58c */ r_esp -= 4; W32(r_esp, 0x410127u); f_0071d58c();
    /* 00410127: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041012a: add esp, 0xb4 */ {  u32 a = r_esp; u32 b = 0xb4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00410130: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00410131: ret  */ FN_RET(0x0041004c); r_esp += 4; return;
L_00410132:; BB(0x00410132);
    /* 00410132: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00410134: add esp, 0xb4 */ {  u32 a = r_esp; u32 b = 0xb4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041013a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0041013b: ret  */ FN_RET(0x0041004c); r_esp += 4; return;
}

void f_0041004d(void)
{
    FN_ENTER(0x0041004d);
    /* 0041004d: lcall 0x9a32, 0x1405d900 */ UNSUP(0x0041004d, "lcall 0x9a32, 0x1405d900");
    /* 00410054: add cl, bl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00410056: add eax, 0x9a3218 */ {  u32 a = r_eax; u32 b = 0x9a3218u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0041005b: movzx edx, word ptr [esp + 0x24] */ r_edx = (u32)R16((u32)(r_esp+0x24u));
    /* 00410060: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 00410062: fstp dword ptr [esp + 0x84] */ W_F32((u32)(r_esp+0x84u), ST(0)); FPOP();
    /* 00410069: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0041006b: fadd st(5) */ ST(0) = ST(0) + ST(5);
    /* 0041006d: fld dword ptr [eax*8 + 0x8fa52c] */ FPUSH(R_F32((u32)(r_eax*8+0x8fa52cu)));
    /* 00410074: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00410076: fstp dword ptr [esp + 0x8c] */ W_F32((u32)(r_esp+0x8cu), ST(0)); FPOP();
    /* 0041007d: fadd st(3), st(0) */ ST(3) = ST(3) + ST(0);
    /* 0041007f: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00410081: fstp dword ptr [esp + 0x88] */ W_F32((u32)(r_esp+0x88u), ST(0)); FPOP();
    /* 00410088: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0041008a: fstp dword ptr [esp + 0x90] */ W_F32((u32)(r_esp+0x90u), ST(0)); FPOP();
    /* 00410091: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 00410093: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00410095: fstp dword ptr [esp + 0x94] */ W_F32((u32)(r_esp+0x94u), ST(0)); FPOP();
    /* 0041009c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0041009e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004100a0: je 0x410132 */ if (fZ) goto L_00410132;
L_004100a6:; BB(0x004100a6);
    /* 004100a6: movzx eax, word ptr [esp + 0x44] */ r_eax = (u32)R16((u32)(r_esp+0x44u));
    /* 004100ab: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004100ad: jne 0x4100b9 */ if (!fZ) goto L_004100b9;
L_004100af:; BB(0x004100af);
    /* 004100af: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004100b1: add esp, 0xb4 */ {  u32 a = r_esp; u32 b = 0xb4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004100b7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004100b8: ret  */ FN_RET(0x0041004d); r_esp += 4; return;
L_004100b9:; BB(0x004100b9);
    /* 004100b9: movzx eax, word ptr [esp + 0x64] */ r_eax = (u32)R16((u32)(r_esp+0x64u));
    /* 004100be: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004100c0: jne 0x4100cc */ if (!fZ) goto L_004100cc;
L_004100c2:; BB(0x004100c2);
    /* 004100c2: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004100c4: add esp, 0xb4 */ {  u32 a = r_esp; u32 b = 0xb4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004100ca: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004100cb: ret  */ FN_RET(0x0041004d); r_esp += 4; return;
L_004100cc:; BB(0x004100cc);
    /* 004100cc: fstp dword ptr [esp + 0x98] */ W_F32((u32)(r_esp+0x98u), ST(0)); FPOP();
    /* 004100d3: lea edx, [esp + 0x84] */ r_edx = (u32)(r_esp+0x84u);
    /* 004100da: lea eax, [esp + 0x24] */ r_eax = (u32)(r_esp+0x24u);
    /* 004100de: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004100e0: push 0x47c35000 */ { u32 v = 0x47c35000u; r_esp -= 4; W32(r_esp, v); }
    /* 004100e5: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004100e7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004100e8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004100e9: call 0x71d58c */ r_esp -= 4; W32(r_esp, 0x4100eeu); f_0071d58c();
    /* 004100ee: lea edx, [esp + 0xa0] */ r_edx = (u32)(r_esp+0xa0u);
    /* 004100f5: lea eax, [esp + 0x58] */ r_eax = (u32)(r_esp+0x58u);
    /* 004100f9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004100fb: push 0x47c35000 */ { u32 v = 0x47c35000u; r_esp -= 4; W32(r_esp, v); }
    /* 00410100: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00410102: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00410103: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00410104: call 0x71d58c */ r_esp -= 4; W32(r_esp, 0x410109u); f_0071d58c();
    /* 00410109: lea edx, [esp + 0xbc] */ r_edx = (u32)(r_esp+0xbcu);
    /* 00410110: lea eax, [esp + 0x8c] */ r_eax = (u32)(r_esp+0x8cu);
    /* 00410117: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00410119: push 0x47c35000 */ { u32 v = 0x47c35000u; r_esp -= 4; W32(r_esp, v); }
    /* 0041011e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00410120: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00410121: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00410122: call 0x71d58c */ r_esp -= 4; W32(r_esp, 0x410127u); f_0071d58c();
    /* 00410127: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041012a: add esp, 0xb4 */ {  u32 a = r_esp; u32 b = 0xb4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00410130: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00410131: ret  */ FN_RET(0x0041004d); r_esp += 4; return;
L_00410132:; BB(0x00410132);
    /* 00410132: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00410134: add esp, 0xb4 */ {  u32 a = r_esp; u32 b = 0xb4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041013a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0041013b: ret  */ FN_RET(0x0041004d); r_esp += 4; return;
}

void f_0041004e(void)
{
    FN_ENTER(0x0041004e);
    /* 0041004e: add cl, bl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00410050: add eax, 0x9a3214 */ {  u32 a = r_eax; u32 b = 0x9a3214u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00410055: fld dword ptr [0x9a3218] */ FPUSH(R_F32((u32)(0x9a3218u)));
    /* 0041005b: movzx edx, word ptr [esp + 0x24] */ r_edx = (u32)R16((u32)(r_esp+0x24u));
    /* 00410060: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 00410062: fstp dword ptr [esp + 0x84] */ W_F32((u32)(r_esp+0x84u), ST(0)); FPOP();
    /* 00410069: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0041006b: fadd st(5) */ ST(0) = ST(0) + ST(5);
    /* 0041006d: fld dword ptr [eax*8 + 0x8fa52c] */ FPUSH(R_F32((u32)(r_eax*8+0x8fa52cu)));
    /* 00410074: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00410076: fstp dword ptr [esp + 0x8c] */ W_F32((u32)(r_esp+0x8cu), ST(0)); FPOP();
    /* 0041007d: fadd st(3), st(0) */ ST(3) = ST(3) + ST(0);
    /* 0041007f: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00410081: fstp dword ptr [esp + 0x88] */ W_F32((u32)(r_esp+0x88u), ST(0)); FPOP();
    /* 00410088: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0041008a: fstp dword ptr [esp + 0x90] */ W_F32((u32)(r_esp+0x90u), ST(0)); FPOP();
    /* 00410091: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 00410093: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00410095: fstp dword ptr [esp + 0x94] */ W_F32((u32)(r_esp+0x94u), ST(0)); FPOP();
    /* 0041009c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0041009e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004100a0: je 0x410132 */ if (fZ) goto L_00410132;
L_004100a6:; BB(0x004100a6);
    /* 004100a6: movzx eax, word ptr [esp + 0x44] */ r_eax = (u32)R16((u32)(r_esp+0x44u));
    /* 004100ab: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004100ad: jne 0x4100b9 */ if (!fZ) goto L_004100b9;
L_004100af:; BB(0x004100af);
    /* 004100af: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004100b1: add esp, 0xb4 */ {  u32 a = r_esp; u32 b = 0xb4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004100b7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004100b8: ret  */ FN_RET(0x0041004e); r_esp += 4; return;
L_004100b9:; BB(0x004100b9);
    /* 004100b9: movzx eax, word ptr [esp + 0x64] */ r_eax = (u32)R16((u32)(r_esp+0x64u));
    /* 004100be: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004100c0: jne 0x4100cc */ if (!fZ) goto L_004100cc;
L_004100c2:; BB(0x004100c2);
    /* 004100c2: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004100c4: add esp, 0xb4 */ {  u32 a = r_esp; u32 b = 0xb4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004100ca: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004100cb: ret  */ FN_RET(0x0041004e); r_esp += 4; return;
L_004100cc:; BB(0x004100cc);
    /* 004100cc: fstp dword ptr [esp + 0x98] */ W_F32((u32)(r_esp+0x98u), ST(0)); FPOP();
    /* 004100d3: lea edx, [esp + 0x84] */ r_edx = (u32)(r_esp+0x84u);
    /* 004100da: lea eax, [esp + 0x24] */ r_eax = (u32)(r_esp+0x24u);
    /* 004100de: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004100e0: push 0x47c35000 */ { u32 v = 0x47c35000u; r_esp -= 4; W32(r_esp, v); }
    /* 004100e5: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004100e7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004100e8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004100e9: call 0x71d58c */ r_esp -= 4; W32(r_esp, 0x4100eeu); f_0071d58c();
    /* 004100ee: lea edx, [esp + 0xa0] */ r_edx = (u32)(r_esp+0xa0u);
    /* 004100f5: lea eax, [esp + 0x58] */ r_eax = (u32)(r_esp+0x58u);
    /* 004100f9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004100fb: push 0x47c35000 */ { u32 v = 0x47c35000u; r_esp -= 4; W32(r_esp, v); }
    /* 00410100: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00410102: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00410103: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00410104: call 0x71d58c */ r_esp -= 4; W32(r_esp, 0x410109u); f_0071d58c();
    /* 00410109: lea edx, [esp + 0xbc] */ r_edx = (u32)(r_esp+0xbcu);
    /* 00410110: lea eax, [esp + 0x8c] */ r_eax = (u32)(r_esp+0x8cu);
    /* 00410117: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00410119: push 0x47c35000 */ { u32 v = 0x47c35000u; r_esp -= 4; W32(r_esp, v); }
    /* 0041011e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00410120: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00410121: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00410122: call 0x71d58c */ r_esp -= 4; W32(r_esp, 0x410127u); f_0071d58c();
    /* 00410127: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041012a: add esp, 0xb4 */ {  u32 a = r_esp; u32 b = 0xb4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00410130: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00410131: ret  */ FN_RET(0x0041004e); r_esp += 4; return;
L_00410132:; BB(0x00410132);
    /* 00410132: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00410134: add esp, 0xb4 */ {  u32 a = r_esp; u32 b = 0xb4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041013a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0041013b: ret  */ FN_RET(0x0041004e); r_esp += 4; return;
}

void f_00410050(void)
{
    FN_ENTER(0x00410050);
    /* 00410050: add eax, 0x9a3214 */ {  u32 a = r_eax; u32 b = 0x9a3214u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00410055: fld dword ptr [0x9a3218] */ FPUSH(R_F32((u32)(0x9a3218u)));
    /* 0041005b: movzx edx, word ptr [esp + 0x24] */ r_edx = (u32)R16((u32)(r_esp+0x24u));
    /* 00410060: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 00410062: fstp dword ptr [esp + 0x84] */ W_F32((u32)(r_esp+0x84u), ST(0)); FPOP();
    /* 00410069: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0041006b: fadd st(5) */ ST(0) = ST(0) + ST(5);
    /* 0041006d: fld dword ptr [eax*8 + 0x8fa52c] */ FPUSH(R_F32((u32)(r_eax*8+0x8fa52cu)));
    /* 00410074: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00410076: fstp dword ptr [esp + 0x8c] */ W_F32((u32)(r_esp+0x8cu), ST(0)); FPOP();
    /* 0041007d: fadd st(3), st(0) */ ST(3) = ST(3) + ST(0);
    /* 0041007f: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00410081: fstp dword ptr [esp + 0x88] */ W_F32((u32)(r_esp+0x88u), ST(0)); FPOP();
    /* 00410088: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0041008a: fstp dword ptr [esp + 0x90] */ W_F32((u32)(r_esp+0x90u), ST(0)); FPOP();
    /* 00410091: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 00410093: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00410095: fstp dword ptr [esp + 0x94] */ W_F32((u32)(r_esp+0x94u), ST(0)); FPOP();
    /* 0041009c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0041009e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004100a0: je 0x410132 */ if (fZ) goto L_00410132;
L_004100a6:; BB(0x004100a6);
    /* 004100a6: movzx eax, word ptr [esp + 0x44] */ r_eax = (u32)R16((u32)(r_esp+0x44u));
    /* 004100ab: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004100ad: jne 0x4100b9 */ if (!fZ) goto L_004100b9;
L_004100af:; BB(0x004100af);
    /* 004100af: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004100b1: add esp, 0xb4 */ {  u32 a = r_esp; u32 b = 0xb4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004100b7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004100b8: ret  */ FN_RET(0x00410050); r_esp += 4; return;
L_004100b9:; BB(0x004100b9);
    /* 004100b9: movzx eax, word ptr [esp + 0x64] */ r_eax = (u32)R16((u32)(r_esp+0x64u));
    /* 004100be: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004100c0: jne 0x4100cc */ if (!fZ) goto L_004100cc;
L_004100c2:; BB(0x004100c2);
    /* 004100c2: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004100c4: add esp, 0xb4 */ {  u32 a = r_esp; u32 b = 0xb4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004100ca: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004100cb: ret  */ FN_RET(0x00410050); r_esp += 4; return;
L_004100cc:; BB(0x004100cc);
    /* 004100cc: fstp dword ptr [esp + 0x98] */ W_F32((u32)(r_esp+0x98u), ST(0)); FPOP();
    /* 004100d3: lea edx, [esp + 0x84] */ r_edx = (u32)(r_esp+0x84u);
    /* 004100da: lea eax, [esp + 0x24] */ r_eax = (u32)(r_esp+0x24u);
    /* 004100de: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004100e0: push 0x47c35000 */ { u32 v = 0x47c35000u; r_esp -= 4; W32(r_esp, v); }
    /* 004100e5: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004100e7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004100e8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004100e9: call 0x71d58c */ r_esp -= 4; W32(r_esp, 0x4100eeu); f_0071d58c();
    /* 004100ee: lea edx, [esp + 0xa0] */ r_edx = (u32)(r_esp+0xa0u);
    /* 004100f5: lea eax, [esp + 0x58] */ r_eax = (u32)(r_esp+0x58u);
    /* 004100f9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004100fb: push 0x47c35000 */ { u32 v = 0x47c35000u; r_esp -= 4; W32(r_esp, v); }
    /* 00410100: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00410102: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00410103: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00410104: call 0x71d58c */ r_esp -= 4; W32(r_esp, 0x410109u); f_0071d58c();
    /* 00410109: lea edx, [esp + 0xbc] */ r_edx = (u32)(r_esp+0xbcu);
    /* 00410110: lea eax, [esp + 0x8c] */ r_eax = (u32)(r_esp+0x8cu);
    /* 00410117: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00410119: push 0x47c35000 */ { u32 v = 0x47c35000u; r_esp -= 4; W32(r_esp, v); }
    /* 0041011e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00410120: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00410121: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00410122: call 0x71d58c */ r_esp -= 4; W32(r_esp, 0x410127u); f_0071d58c();
    /* 00410127: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041012a: add esp, 0xb4 */ {  u32 a = r_esp; u32 b = 0xb4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00410130: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00410131: ret  */ FN_RET(0x00410050); r_esp += 4; return;
L_00410132:; BB(0x00410132);
    /* 00410132: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00410134: add esp, 0xb4 */ {  u32 a = r_esp; u32 b = 0xb4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041013a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0041013b: ret  */ FN_RET(0x00410050); r_esp += 4; return;
}

void f_00410052(void)
{
    FN_ENTER(0x00410052);
    /* 00410052: xor bl, byte ptr [edx + 0x1805d900] */ {  u32 a = (u8)r_ebx; u32 b = R8((u32)(r_edx+0x1805d900u)); u32 r = (a ^ b) & 0xffu; r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00410058: xor bl, byte ptr [edx + 0x54b70f00] */ {  u32 a = (u8)r_ebx; u32 b = R8((u32)(r_edx+0x54b70f00u)); u32 r = (a ^ b) & 0xffu; r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0041005e: and al, 0x24 */ {  u32 a = (u8)r_eax; u32 b = 0x24u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00410060: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 00410062: fstp dword ptr [esp + 0x84] */ W_F32((u32)(r_esp+0x84u), ST(0)); FPOP();
    /* 00410069: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0041006b: fadd st(5) */ ST(0) = ST(0) + ST(5);
    /* 0041006d: fld dword ptr [eax*8 + 0x8fa52c] */ FPUSH(R_F32((u32)(r_eax*8+0x8fa52cu)));
    /* 00410074: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00410076: fstp dword ptr [esp + 0x8c] */ W_F32((u32)(r_esp+0x8cu), ST(0)); FPOP();
    /* 0041007d: fadd st(3), st(0) */ ST(3) = ST(3) + ST(0);
    /* 0041007f: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00410081: fstp dword ptr [esp + 0x88] */ W_F32((u32)(r_esp+0x88u), ST(0)); FPOP();
    /* 00410088: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0041008a: fstp dword ptr [esp + 0x90] */ W_F32((u32)(r_esp+0x90u), ST(0)); FPOP();
    /* 00410091: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 00410093: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00410095: fstp dword ptr [esp + 0x94] */ W_F32((u32)(r_esp+0x94u), ST(0)); FPOP();
    /* 0041009c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0041009e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004100a0: je 0x410132 */ if (fZ) goto L_00410132;
L_004100a6:; BB(0x004100a6);
    /* 004100a6: movzx eax, word ptr [esp + 0x44] */ r_eax = (u32)R16((u32)(r_esp+0x44u));
    /* 004100ab: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004100ad: jne 0x4100b9 */ if (!fZ) goto L_004100b9;
L_004100af:; BB(0x004100af);
    /* 004100af: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004100b1: add esp, 0xb4 */ {  u32 a = r_esp; u32 b = 0xb4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004100b7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004100b8: ret  */ FN_RET(0x00410052); r_esp += 4; return;
L_004100b9:; BB(0x004100b9);
    /* 004100b9: movzx eax, word ptr [esp + 0x64] */ r_eax = (u32)R16((u32)(r_esp+0x64u));
    /* 004100be: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004100c0: jne 0x4100cc */ if (!fZ) goto L_004100cc;
L_004100c2:; BB(0x004100c2);
    /* 004100c2: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004100c4: add esp, 0xb4 */ {  u32 a = r_esp; u32 b = 0xb4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004100ca: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004100cb: ret  */ FN_RET(0x00410052); r_esp += 4; return;
L_004100cc:; BB(0x004100cc);
    /* 004100cc: fstp dword ptr [esp + 0x98] */ W_F32((u32)(r_esp+0x98u), ST(0)); FPOP();
    /* 004100d3: lea edx, [esp + 0x84] */ r_edx = (u32)(r_esp+0x84u);
    /* 004100da: lea eax, [esp + 0x24] */ r_eax = (u32)(r_esp+0x24u);
    /* 004100de: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004100e0: push 0x47c35000 */ { u32 v = 0x47c35000u; r_esp -= 4; W32(r_esp, v); }
    /* 004100e5: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004100e7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004100e8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004100e9: call 0x71d58c */ r_esp -= 4; W32(r_esp, 0x4100eeu); f_0071d58c();
    /* 004100ee: lea edx, [esp + 0xa0] */ r_edx = (u32)(r_esp+0xa0u);
    /* 004100f5: lea eax, [esp + 0x58] */ r_eax = (u32)(r_esp+0x58u);
    /* 004100f9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004100fb: push 0x47c35000 */ { u32 v = 0x47c35000u; r_esp -= 4; W32(r_esp, v); }
    /* 00410100: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00410102: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00410103: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00410104: call 0x71d58c */ r_esp -= 4; W32(r_esp, 0x410109u); f_0071d58c();
    /* 00410109: lea edx, [esp + 0xbc] */ r_edx = (u32)(r_esp+0xbcu);
    /* 00410110: lea eax, [esp + 0x8c] */ r_eax = (u32)(r_esp+0x8cu);
    /* 00410117: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00410119: push 0x47c35000 */ { u32 v = 0x47c35000u; r_esp -= 4; W32(r_esp, v); }
    /* 0041011e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00410120: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00410121: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00410122: call 0x71d58c */ r_esp -= 4; W32(r_esp, 0x410127u); f_0071d58c();
    /* 00410127: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041012a: add esp, 0xb4 */ {  u32 a = r_esp; u32 b = 0xb4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00410130: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00410131: ret  */ FN_RET(0x00410052); r_esp += 4; return;
L_00410132:; BB(0x00410132);
    /* 00410132: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00410134: add esp, 0xb4 */ {  u32 a = r_esp; u32 b = 0xb4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041013a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0041013b: ret  */ FN_RET(0x00410052); r_esp += 4; return;
}

void f_00410054(void)
{
    FN_ENTER(0x00410054);
    /* 00410054: add cl, bl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00410056: add eax, 0x9a3218 */ {  u32 a = r_eax; u32 b = 0x9a3218u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0041005b: movzx edx, word ptr [esp + 0x24] */ r_edx = (u32)R16((u32)(r_esp+0x24u));
    /* 00410060: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 00410062: fstp dword ptr [esp + 0x84] */ W_F32((u32)(r_esp+0x84u), ST(0)); FPOP();
    /* 00410069: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0041006b: fadd st(5) */ ST(0) = ST(0) + ST(5);
    /* 0041006d: fld dword ptr [eax*8 + 0x8fa52c] */ FPUSH(R_F32((u32)(r_eax*8+0x8fa52cu)));
    /* 00410074: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00410076: fstp dword ptr [esp + 0x8c] */ W_F32((u32)(r_esp+0x8cu), ST(0)); FPOP();
    /* 0041007d: fadd st(3), st(0) */ ST(3) = ST(3) + ST(0);
    /* 0041007f: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00410081: fstp dword ptr [esp + 0x88] */ W_F32((u32)(r_esp+0x88u), ST(0)); FPOP();
    /* 00410088: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0041008a: fstp dword ptr [esp + 0x90] */ W_F32((u32)(r_esp+0x90u), ST(0)); FPOP();
    /* 00410091: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 00410093: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00410095: fstp dword ptr [esp + 0x94] */ W_F32((u32)(r_esp+0x94u), ST(0)); FPOP();
    /* 0041009c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0041009e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004100a0: je 0x410132 */ if (fZ) goto L_00410132;
L_004100a6:; BB(0x004100a6);
    /* 004100a6: movzx eax, word ptr [esp + 0x44] */ r_eax = (u32)R16((u32)(r_esp+0x44u));
    /* 004100ab: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004100ad: jne 0x4100b9 */ if (!fZ) goto L_004100b9;
L_004100af:; BB(0x004100af);
    /* 004100af: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004100b1: add esp, 0xb4 */ {  u32 a = r_esp; u32 b = 0xb4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004100b7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004100b8: ret  */ FN_RET(0x00410054); r_esp += 4; return;
L_004100b9:; BB(0x004100b9);
    /* 004100b9: movzx eax, word ptr [esp + 0x64] */ r_eax = (u32)R16((u32)(r_esp+0x64u));
    /* 004100be: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004100c0: jne 0x4100cc */ if (!fZ) goto L_004100cc;
L_004100c2:; BB(0x004100c2);
    /* 004100c2: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004100c4: add esp, 0xb4 */ {  u32 a = r_esp; u32 b = 0xb4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004100ca: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004100cb: ret  */ FN_RET(0x00410054); r_esp += 4; return;
L_004100cc:; BB(0x004100cc);
    /* 004100cc: fstp dword ptr [esp + 0x98] */ W_F32((u32)(r_esp+0x98u), ST(0)); FPOP();
    /* 004100d3: lea edx, [esp + 0x84] */ r_edx = (u32)(r_esp+0x84u);
    /* 004100da: lea eax, [esp + 0x24] */ r_eax = (u32)(r_esp+0x24u);
    /* 004100de: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004100e0: push 0x47c35000 */ { u32 v = 0x47c35000u; r_esp -= 4; W32(r_esp, v); }
    /* 004100e5: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004100e7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004100e8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004100e9: call 0x71d58c */ r_esp -= 4; W32(r_esp, 0x4100eeu); f_0071d58c();
    /* 004100ee: lea edx, [esp + 0xa0] */ r_edx = (u32)(r_esp+0xa0u);
    /* 004100f5: lea eax, [esp + 0x58] */ r_eax = (u32)(r_esp+0x58u);
    /* 004100f9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004100fb: push 0x47c35000 */ { u32 v = 0x47c35000u; r_esp -= 4; W32(r_esp, v); }
    /* 00410100: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00410102: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00410103: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00410104: call 0x71d58c */ r_esp -= 4; W32(r_esp, 0x410109u); f_0071d58c();
    /* 00410109: lea edx, [esp + 0xbc] */ r_edx = (u32)(r_esp+0xbcu);
    /* 00410110: lea eax, [esp + 0x8c] */ r_eax = (u32)(r_esp+0x8cu);
    /* 00410117: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00410119: push 0x47c35000 */ { u32 v = 0x47c35000u; r_esp -= 4; W32(r_esp, v); }
    /* 0041011e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00410120: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00410121: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00410122: call 0x71d58c */ r_esp -= 4; W32(r_esp, 0x410127u); f_0071d58c();
    /* 00410127: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041012a: add esp, 0xb4 */ {  u32 a = r_esp; u32 b = 0xb4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00410130: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00410131: ret  */ FN_RET(0x00410054); r_esp += 4; return;
L_00410132:; BB(0x00410132);
    /* 00410132: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00410134: add esp, 0xb4 */ {  u32 a = r_esp; u32 b = 0xb4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041013a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0041013b: ret  */ FN_RET(0x00410054); r_esp += 4; return;
}

void f_0041005f(void)
{
    FN_ENTER(0x0041005f);
    /* 0041005f: and al, 0xd9 */ {  u32 a = (u8)r_eax; u32 b = 0xd9u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00410061: int 0xd9 */ UNSUP(0x00410061, "int 0xd9");
    /* 00410063: pushfd  */ { u32 v = 0x202u | rt_eflags_extra | (u32)fC | ((u32)fP << 2) | ((u32)fA << 4) | ((u32)fZ << 6) | ((u32)fS << 7) | ((u32)fO << 11); r_esp -= 4; W32(r_esp, v); }
    /* 00410064: and al, 0x84 */ {  u32 a = (u8)r_eax; u32 b = 0x84u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00410066: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00410068: add cl, bl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0041006a: retf 0xc5d8 */ { u32 t = R32(r_esp); r_esp += 4; r_eax = r_edx = 0; call_ind(t); }
    /* 0041006d: fld dword ptr [eax*8 + 0x8fa52c] */ FPUSH(R_F32((u32)(r_eax*8+0x8fa52cu)));
    /* 00410074: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00410076: fstp dword ptr [esp + 0x8c] */ W_F32((u32)(r_esp+0x8cu), ST(0)); FPOP();
    /* 0041007d: fadd st(3), st(0) */ ST(3) = ST(3) + ST(0);
    /* 0041007f: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00410081: fstp dword ptr [esp + 0x88] */ W_F32((u32)(r_esp+0x88u), ST(0)); FPOP();
    /* 00410088: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0041008a: fstp dword ptr [esp + 0x90] */ W_F32((u32)(r_esp+0x90u), ST(0)); FPOP();
    /* 00410091: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 00410093: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00410095: fstp dword ptr [esp + 0x94] */ W_F32((u32)(r_esp+0x94u), ST(0)); FPOP();
    /* 0041009c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0041009e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004100a0: je 0x410132 */ if (fZ) goto L_00410132;
L_004100a6:; BB(0x004100a6);
    /* 004100a6: movzx eax, word ptr [esp + 0x44] */ r_eax = (u32)R16((u32)(r_esp+0x44u));
    /* 004100ab: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004100ad: jne 0x4100b9 */ if (!fZ) goto L_004100b9;
L_004100af:; BB(0x004100af);
    /* 004100af: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004100b1: add esp, 0xb4 */ {  u32 a = r_esp; u32 b = 0xb4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004100b7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004100b8: ret  */ FN_RET(0x0041005f); r_esp += 4; return;
L_004100b9:; BB(0x004100b9);
    /* 004100b9: movzx eax, word ptr [esp + 0x64] */ r_eax = (u32)R16((u32)(r_esp+0x64u));
    /* 004100be: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004100c0: jne 0x4100cc */ if (!fZ) goto L_004100cc;
L_004100c2:; BB(0x004100c2);
    /* 004100c2: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004100c4: add esp, 0xb4 */ {  u32 a = r_esp; u32 b = 0xb4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004100ca: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004100cb: ret  */ FN_RET(0x0041005f); r_esp += 4; return;
L_004100cc:; BB(0x004100cc);
    /* 004100cc: fstp dword ptr [esp + 0x98] */ W_F32((u32)(r_esp+0x98u), ST(0)); FPOP();
    /* 004100d3: lea edx, [esp + 0x84] */ r_edx = (u32)(r_esp+0x84u);
    /* 004100da: lea eax, [esp + 0x24] */ r_eax = (u32)(r_esp+0x24u);
    /* 004100de: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004100e0: push 0x47c35000 */ { u32 v = 0x47c35000u; r_esp -= 4; W32(r_esp, v); }
    /* 004100e5: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004100e7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004100e8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004100e9: call 0x71d58c */ r_esp -= 4; W32(r_esp, 0x4100eeu); f_0071d58c();
    /* 004100ee: lea edx, [esp + 0xa0] */ r_edx = (u32)(r_esp+0xa0u);
    /* 004100f5: lea eax, [esp + 0x58] */ r_eax = (u32)(r_esp+0x58u);
    /* 004100f9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004100fb: push 0x47c35000 */ { u32 v = 0x47c35000u; r_esp -= 4; W32(r_esp, v); }
    /* 00410100: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00410102: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00410103: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00410104: call 0x71d58c */ r_esp -= 4; W32(r_esp, 0x410109u); f_0071d58c();
    /* 00410109: lea edx, [esp + 0xbc] */ r_edx = (u32)(r_esp+0xbcu);
    /* 00410110: lea eax, [esp + 0x8c] */ r_eax = (u32)(r_esp+0x8cu);
    /* 00410117: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00410119: push 0x47c35000 */ { u32 v = 0x47c35000u; r_esp -= 4; W32(r_esp, v); }
    /* 0041011e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00410120: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00410121: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00410122: call 0x71d58c */ r_esp -= 4; W32(r_esp, 0x410127u); f_0071d58c();
    /* 00410127: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041012a: add esp, 0xb4 */ {  u32 a = r_esp; u32 b = 0xb4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00410130: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00410131: ret  */ FN_RET(0x0041005f); r_esp += 4; return;
L_00410132:; BB(0x00410132);
    /* 00410132: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00410134: add esp, 0xb4 */ {  u32 a = r_esp; u32 b = 0xb4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041013a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0041013b: ret  */ FN_RET(0x0041005f); r_esp += 4; return;
}

void f_00410140(void) /* sub_410140 */
{
    FN_ENTER(0x00410140);
    /* 00410140: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00410141: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00410142: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00410143: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00410144: sub esp, 0x74 */ {  u32 a = r_esp; u32 b = 0x74u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00410147: mov ebp, eax */ r_ebp = r_eax;
    /* 00410149: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0041014b: mov dword ptr [ebp], edx */ W32((u32)(r_ebp), r_edx);
    /* 0041014e: mov dword ptr [ebp + 4], edx */ W32((u32)(r_ebp+0x4u), r_edx);
    /* 00410151: mov dword ptr [ebp + 8], edx */ W32((u32)(r_ebp+0x8u), r_edx);
    /* 00410154: mov dword ptr [ebp + 0xc], edx */ W32((u32)(r_ebp+0xcu), r_edx);
    /* 00410157: mov dword ptr [ebp + 0x10], edx */ W32((u32)(r_ebp+0x10u), r_edx);
    /* 0041015a: mov dword ptr [ebp + 0x14], edx */ W32((u32)(r_ebp+0x14u), r_edx);
    /* 0041015d: mov dword ptr [ebp + 0x18], edx */ W32((u32)(r_ebp+0x18u), r_edx);
    /* 00410160: mov dword ptr [ebp + 0x1c], edx */ W32((u32)(r_ebp+0x1cu), r_edx);
    /* 00410163: lea ecx, [ebp + 0x20] */ r_ecx = (u32)(r_ebp+0x20u);
    /* 00410166: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 00410169: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0041016b: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 0041016d: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 00410170: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 00410173: mov dword ptr [ecx + 0xc], edx */ W32((u32)(r_ecx+0xcu), r_edx);
    /* 00410176: mov dword ptr [ecx + 0x10], edx */ W32((u32)(r_ecx+0x10u), r_edx);
    /* 00410179: mov dword ptr [ecx + 0x14], edx */ W32((u32)(r_ecx+0x14u), r_edx);
    /* 0041017c: mov dword ptr [ecx + 0x18], edx */ W32((u32)(r_ecx+0x18u), r_edx);
    /* 0041017f: mov dword ptr [ecx + 0x1c], edx */ W32((u32)(r_ecx+0x1cu), r_edx);
    /* 00410182: lea ebx, [ebp + 0x40] */ r_ebx = (u32)(r_ebp+0x40u);
    /* 00410185: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00410187: mov dword ptr [ebx], edx */ W32((u32)(r_ebx), r_edx);
    /* 00410189: mov dword ptr [ebx + 4], edx */ W32((u32)(r_ebx+0x4u), r_edx);
    /* 0041018c: mov dword ptr [ebx + 8], edx */ W32((u32)(r_ebx+0x8u), r_edx);
    /* 0041018f: mov dword ptr [ebx + 0xc], edx */ W32((u32)(r_ebx+0xcu), r_edx);
    /* 00410192: mov dword ptr [ebx + 0x10], edx */ W32((u32)(r_ebx+0x10u), r_edx);
    /* 00410195: mov dword ptr [ebx + 0x14], edx */ W32((u32)(r_ebx+0x14u), r_edx);
    /* 00410198: mov dword ptr [ebx + 0x18], edx */ W32((u32)(r_ebx+0x18u), r_edx);
    /* 0041019b: mov dword ptr [ebx + 0x1c], edx */ W32((u32)(r_ebx+0x1cu), r_edx);
    /* 0041019e: mov edx, dword ptr [0xa3af9c] */ r_edx = R32((u32)(0xa3af9cu));
    /* 004101a4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004101a6: je 0x4101b5 */ if (fZ) goto L_004101b5;
L_004101a8:; BB(0x004101a8);
    /* 004101a8: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004101ab: je 0x4101b5 */ if (fZ) goto L_004101b5;
L_004101ad:; BB(0x004101ad);
    /* 004101ad: add esp, 0x74 */ {  u32 a = r_esp; u32 b = 0x74u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004101b0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004101b1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004101b2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004101b3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004101b4: ret  */ FN_RET(0x00410140); r_esp += 4; return;
L_004101b5:; BB(0x004101b5);
    /* 004101b5: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004101ba: call 0x6c1bd4 */ r_esp -= 4; W32(r_esp, 0x4101bfu); f_006c1bd4();
    /* 004101bf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004101c0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004101c2: je 0x4101c7 */ if (fZ) goto L_004101c7;
L_004101c4:; BB(0x004101c4);
    /* 004101c4: mov esi, dword ptr [eax + 0xc] */ r_esi = R32((u32)(r_eax+0xcu));
L_004101c7:; BB(0x004101c7);
    /* 004101c7: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004101cc: call 0x6c1bcc */ r_esp -= 4; W32(r_esp, 0x4101d1u); f_006c1bcc();
    /* 004101d1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004101d2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004101d4: je 0x4101ad */ if (fZ) goto L_004101ad;
L_004101d6:; BB(0x004101d6);
    /* 004101d6: add eax, 0x370 */ {  u32 a = r_eax; u32 b = 0x370u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004101db: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004101dd: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 004101e0: mov edi, dword ptr [eax + 8] */ r_edi = R32((u32)(r_eax+0x8u));
    /* 004101e3: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 004101e7: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 004101ea: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 004101ee: mov dword ptr [esp + 0xc], edi */ W32((u32)(r_esp+0xcu), r_edi);
    /* 004101f2: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 004101f6: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 004101f9: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 004101fd: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 00410200: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 00410204: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 00410207: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 0041020b: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 0041020e: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 00410212: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 00410215: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 00410219: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 0041021c: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 00410220: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 00410223: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 00410227: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 0041022a: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 0041022e: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 00410231: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 00410235: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 00410238: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
    /* 0041023c: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 0041023f: mov dword ptr [esp + 0x3c], edx */ W32((u32)(r_esp+0x3cu), r_edx);
    /* 00410243: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 00410246: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
    /* 0041024a: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 0041024d: mov dword ptr [esp + 0x44], edx */ W32((u32)(r_esp+0x44u), r_edx);
    /* 00410251: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 00410254: mov dword ptr [esp + 0x48], edx */ W32((u32)(r_esp+0x48u), r_edx);
    /* 00410258: mov edx, dword ptr [eax + 0x48] */ r_edx = R32((u32)(r_eax+0x48u));
    /* 0041025b: mov dword ptr [esp + 0x4c], edx */ W32((u32)(r_esp+0x4cu), r_edx);
    /* 0041025f: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 00410262: mov dword ptr [esp + 0x50], edx */ W32((u32)(r_esp+0x50u), r_edx);
    /* 00410266: mov edx, dword ptr [eax + 0x50] */ r_edx = R32((u32)(r_eax+0x50u));
    /* 00410269: mov dword ptr [esp + 0x54], edx */ W32((u32)(r_esp+0x54u), r_edx);
    /* 0041026d: mov edx, dword ptr [eax + 0x54] */ r_edx = R32((u32)(r_eax+0x54u));
    /* 00410270: mov dword ptr [esp + 0x58], edx */ W32((u32)(r_esp+0x58u), r_edx);
    /* 00410274: mov edx, dword ptr [eax + 0x58] */ r_edx = R32((u32)(r_eax+0x58u));
    /* 00410277: mov dword ptr [esp + 0x5c], edx */ W32((u32)(r_esp+0x5cu), r_edx);
    /* 0041027b: mov edx, dword ptr [eax + 0x5c] */ r_edx = R32((u32)(r_eax+0x5cu));
    /* 0041027e: mov dword ptr [esp + 0x60], edx */ W32((u32)(r_esp+0x60u), r_edx);
    /* 00410282: mov edx, dword ptr [eax + 0x60] */ r_edx = R32((u32)(r_eax+0x60u));
    /* 00410285: mov dword ptr [esp + 0x64], edx */ W32((u32)(r_esp+0x64u), r_edx);
    /* 00410289: mov edx, dword ptr [eax + 0x64] */ r_edx = R32((u32)(r_eax+0x64u));
    /* 0041028c: mov dword ptr [esp + 0x68], edx */ W32((u32)(r_esp+0x68u), r_edx);
    /* 00410290: mov edx, dword ptr [eax + 0x68] */ r_edx = R32((u32)(r_eax+0x68u));
    /* 00410293: mov dword ptr [esp + 0x6c], edx */ W32((u32)(r_esp+0x6cu), r_edx);
    /* 00410297: mov edx, dword ptr [eax + 0x6c] */ r_edx = R32((u32)(r_eax+0x6cu));
    /* 0041029a: mov dword ptr [esp + 0x70], edx */ W32((u32)(r_esp+0x70u), r_edx);
    /* 0041029e: mov eax, 0x88888889 */ r_eax = 0x88888889u;
    /* 004102a3: mul esi */ { u64 t = (u64)r_eax * r_esi; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 004102a5: mov eax, 0x88888889 */ r_eax = 0x88888889u;
    /* 004102aa: mov esi, edx */ r_esi = r_edx;
    /* 004102ac: shr esi, 5 */ { u32 c = (5u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 004102af: mul esi */ { u64 t = (u64)r_eax * r_esi; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 004102b1: mov edi, edx */ r_edi = r_edx;
    /* 004102b3: shr edi, 5 */ { u32 c = (5u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 004102b6: lea ecx, [edi + edi] */ r_ecx = (u32)(r_edi+r_edi);
    /* 004102b9: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004102bb: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 004102be: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004102c0: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004102c2: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004102c4: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004102c6: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 004102c8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004102ca: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fC = 0; }
    /* 004102cc: jae 0x4102d0 */ if (!fC) goto L_004102d0;
L_004102ce:; BB(0x004102ce);
    /* 004102ce: mov edi, ecx */ r_edi = r_ecx;
L_004102d0:; BB(0x004102d0);
    /* 004102d0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004102d2: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fC = 0; }
    /* 004102d4: jae 0x4102d8 */ if (!fC) goto L_004102d8;
L_004102d6:; BB(0x004102d6);
    /* 004102d6: mov esi, ecx */ r_esi = r_ecx;
L_004102d8:; BB(0x004102d8);
    /* 004102d8: cmp edi, 0x270f */ {  u32 a = r_edi; u32 b = 0x270fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004102de: jbe 0x4102ea */ if ((fC||fZ)) goto L_004102ea;
L_004102e0:; BB(0x004102e0);
    /* 004102e0: mov edi, 0x270f */ r_edi = 0x270fu;
    /* 004102e5: mov esi, 0x3b */ r_esi = 0x3bu;
L_004102ea:; BB(0x004102ea);
    /* 004102ea: mov ecx, 0x3b */ r_ecx = 0x3bu;
    /* 004102ef: cmp esi, 0x3b */ {  u32 a = r_esi; u32 b = 0x3bu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004102f2: jbe 0x4102f6 */ if ((fC||fZ)) goto L_004102f6;
L_004102f4:; BB(0x004102f4);
    /* 004102f4: mov esi, ecx */ r_esi = r_ecx;
L_004102f6:; BB(0x004102f6);
    /* 004102f6: movzx ecx, byte ptr [esp + 0x36] */ r_ecx = (u32)R8((u32)(r_esp+0x36u));
    /* 004102fb: test cl, 2 */ {  u32 a = (u8)r_ecx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004102fe: je 0x41031a */ if (fZ) goto L_0041031a;
L_00410300:; BB(0x00410300);
    /* 00410300: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00410302: push 0x27 */ { u32 v = 0x27u; r_esp -= 4; W32(r_esp, v); }
    /* 00410304: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x410309u); f_00792fe8();
    /* 00410309: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041030a: push 0x8fa548 */ { u32 v = 0x8fa548u; r_esp -= 4; W32(r_esp, v); }
    /* 0041030f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00410310: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x410315u); f_00857e29();
    /* 00410315: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00410318: jmp 0x410334 */ goto L_00410334;
L_0041031a:; BB(0x0041031a);
    /* 0041031a: movsx ecx, byte ptr [esp + 0x35] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_esp+0x35u));
    /* 0041031f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00410320: call 0x793078 */ r_esp -= 4; W32(r_esp, 0x410325u); f_00793078();
    /* 00410325: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00410326: push 0x8fa548 */ { u32 v = 0x8fa548u; r_esp -= 4; W32(r_esp, v); }
    /* 0041032b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0041032c: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x410331u); f_00857e29();
    /* 00410331: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00410334:; BB(0x00410334);
    /* 00410334: movzx eax, byte ptr [esp + 0x36] */ r_eax = (u32)R8((u32)(r_esp+0x36u));
    /* 00410339: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0041033b: je 0x41035b */ if (fZ) goto L_0041035b;
L_0041033d:; BB(0x0041033d);
    /* 0041033d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041033f: push 0x27 */ { u32 v = 0x27u; r_esp -= 4; W32(r_esp, v); }
    /* 00410341: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x410346u); f_00792fe8();
    /* 00410346: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00410347: push 0x8fa548 */ { u32 v = 0x8fa548u; r_esp -= 4; W32(r_esp, v); }
    /* 0041034c: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00410350: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00410351: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x410356u); f_00857e29();
    /* 00410356: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00410359: jmp 0x410379 */ goto L_00410379;
L_0041035b:; BB(0x0041035b);
    /* 0041035b: movsx eax, byte ptr [esp + 0x34] */ r_eax = (u32)(i32)(i8)R8((u32)(r_esp+0x34u));
    /* 00410360: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00410361: call 0x7930c8 */ r_esp -= 4; W32(r_esp, 0x410366u); f_007930c8();
    /* 00410366: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00410367: push 0x8fa548 */ { u32 v = 0x8fa548u; r_esp -= 4; W32(r_esp, v); }
    /* 0041036c: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 00410370: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00410371: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x410376u); f_00857e29();
    /* 00410376: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00410379:; BB(0x00410379);
    /* 00410379: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0041037a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0041037b: push 0x8fa550 */ { u32 v = 0x8fa550u; r_esp -= 4; W32(r_esp, v); }
    /* 00410380: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00410381: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x410386u); f_00857e29();
    /* 00410386: add esp, 0x84 */ {  u32 a = r_esp; u32 b = 0x84u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041038c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0041038d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041038e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0041038f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00410390: ret  */ FN_RET(0x00410140); r_esp += 4; return;
}

void f_00410394(void) /* sub_410394 */
{
    FN_ENTER(0x00410394);
    /* 00410394: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00410395: mov edi, ecx */ r_edi = r_ecx;
    /* 00410397: mov ecx, dword ptr [edi + 0x6c] */ r_ecx = R32((u32)(r_edi+0x6cu));
    /* 0041039a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041039c: je 0x4103aa */ if (fZ) goto L_004103aa;
L_0041039e:; BB(0x0041039e);
    /* 0041039e: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x4103a3u); f_007127b0();
    /* 004103a3: mov dword ptr [edi + 0x6c], 0 */ W32((u32)(r_edi+0x6cu), 0x0u);
L_004103aa:; BB(0x004103aa);
    /* 004103aa: mov edx, dword ptr [0xa3adc4] */ r_edx = R32((u32)(0xa3adc4u));
    /* 004103b0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004103b2: je 0x4103c1 */ if (fZ) goto L_004103c1;
L_004103b4:; BB(0x004103b4);
    /* 004103b4: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004103b8: or eax, 0xffff0010 */ {  u32 a = r_eax; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004103bd: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_004103c1:; BB(0x004103c1);
    /* 004103c1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004103c2: ret  */ FN_RET(0x00410394); r_esp += 4; return;
}

void f_004103c4(void) /* sub_4103C4 */
{
    FN_ENTER(0x004103c4);
    /* 004103c4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004103c5: mov esi, ecx */ r_esi = r_ecx;
    /* 004103c7: mov edx, dword ptr [0xa3af9c] */ r_edx = R32((u32)(0xa3af9cu));
    /* 004103cd: mov dword ptr [0xa3afa4], 1 */ W32((u32)(0xa3afa4u), 0x1u);
    /* 004103d7: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004103da: jge 0x41041e */ if ((fS==fO)) goto L_0041041e;
L_004103dc:; BB(0x004103dc);
    /* 004103dc: mov eax, dword ptr [esi + 0x6c] */ r_eax = R32((u32)(r_esi+0x6cu));
    /* 004103df: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004103e1: je 0x410420 */ if (fZ) goto L_00410420;
L_004103e3:; BB(0x004103e3);
    /* 004103e3: mov ecx, dword ptr [0xa3adc4] */ r_ecx = R32((u32)(0xa3adc4u));
    /* 004103e9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004103eb: je 0x410403 */ if (fZ) goto L_00410403;
L_004103ed:; BB(0x004103ed);
    /* 004103ed: movzx eax, word ptr [ecx + 8] */ r_eax = (u32)R16((u32)(r_ecx+0x8u));
    /* 004103f1: and eax, 0xffef */ {  u32 a = r_eax; u32 b = 0xffefu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004103f6: mov word ptr [ecx + 8], ax */ W16((u32)(r_ecx+0x8u), (u16)r_eax);
    /* 004103fa: lea edx, [esi + 0x24] */ r_edx = (u32)(r_esi+0x24u);
    /* 004103fd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004103fe: call 0x40b3c0 */ r_esp -= 4; W32(r_esp, 0x410403u); f_0040b3c0();
L_00410403:; BB(0x00410403);
    /* 00410403: push dword ptr [0xa0f67c] */ { u32 v = R32((u32)(0xa0f67cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00410409: mov ecx, 0xaae89c */ r_ecx = 0xaae89cu;
    /* 0041040e: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x410413u); f_007c1160();
    /* 00410413: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00410415: je 0x41041e */ if (fZ) goto L_0041041e;
L_00410417:; BB(0x00410417);
    /* 00410417: mov dword ptr [esi + 0x1c], 2 */ W32((u32)(r_esi+0x1cu), 0x2u);
L_0041041e:; BB(0x0041041e);
    /* 0041041e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0041041f: ret  */ FN_RET(0x004103c4); r_esp += 4; return;
L_00410420:; BB(0x00410420);
    /* 00410420: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00410422: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00410424: lea eax, [edx + edx + 0x8fa528] */ r_eax = (u32)(r_edx+r_edx+0x8fa528u);
    /* 0041042b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041042c: mov ecx, esi */ r_ecx = r_esi;
    /* 0041042e: call 0x410438 */ r_esp -= 4; W32(r_esp, 0x410433u); f_00410438();
    /* 00410433: mov dword ptr [esi + 0x6c], eax */ W32((u32)(r_esi+0x6cu), r_eax);
    /* 00410436: jmp 0x4103e3 */ goto L_004103e3;
}

void f_00410438(void) /* sub_410438 */
{
    FN_ENTER(0x00410438);
    /* 00410438: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00410439: push 0x40fe38 */ { u32 v = 0x40fe38u; r_esp -= 4; W32(r_esp, v); }
    /* 0041043e: push 0x8fa51c */ { u32 v = 0x8fa51cu; r_esp -= 4; W32(r_esp, v); }
    /* 00410443: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00410447: call 0x7130a4 */ r_esp -= 4; W32(r_esp, 0x41044cu); f_007130a4();
    /* 0041044c: mov ebx, eax */ r_ebx = r_eax;
    /* 0041044e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00410451: push 0x476a6000 */ { u32 v = 0x476a6000u; r_esp -= 4; W32(r_esp, v); }
    /* 00410456: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00410458: call 0x712624 */ r_esp -= 4; W32(r_esp, 0x41045du); f_00712624();
    /* 0041045d: mov eax, ebx */ r_eax = r_ebx;
    /* 0041045f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00410460: ret 4 */ FN_RET(0x00410438); r_esp += 8; return;
}

void f_00410464(void) /* sub_410464 */
{
    FN_ENTER(0x00410464);
    /* 00410464: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00410465: mov esi, ecx */ r_esi = r_ecx;
    /* 00410467: mov ecx, dword ptr [esi + 0x6c] */ r_ecx = R32((u32)(r_esi+0x6cu));
    /* 0041046a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041046c: mov dword ptr [0xa3afa4], 0 */ W32((u32)(0xa3afa4u), 0x0u);
    /* 00410476: je 0x410484 */ if (fZ) goto L_00410484;
L_00410478:; BB(0x00410478);
    /* 00410478: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x41047du); f_007127b0();
    /* 0041047d: mov dword ptr [esi + 0x6c], 0 */ W32((u32)(r_esi+0x6cu), 0x0u);
L_00410484:; BB(0x00410484);
    /* 00410484: mov eax, dword ptr [0xa3af9c] */ r_eax = R32((u32)(0xa3af9cu));
    /* 00410489: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0041048c: jge 0x4104c9 */ if ((fS==fO)) goto L_004104c9;
L_0041048e:; BB(0x0041048e);
    /* 0041048e: mov ecx, dword ptr [0xa3adc4] */ r_ecx = R32((u32)(0xa3adc4u));
    /* 00410494: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00410496: je 0x4104ae */ if (fZ) goto L_004104ae;
L_00410498:; BB(0x00410498);
    /* 00410498: movzx eax, word ptr [ecx + 8] */ r_eax = (u32)R16((u32)(r_ecx+0x8u));
    /* 0041049c: and eax, 0xffef */ {  u32 a = r_eax; u32 b = 0xffefu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004104a1: mov word ptr [ecx + 8], ax */ W16((u32)(r_ecx+0x8u), (u16)r_eax);
    /* 004104a5: lea edx, [esi + 0x48] */ r_edx = (u32)(r_esi+0x48u);
    /* 004104a8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004104a9: call 0x40b3c0 */ r_esp -= 4; W32(r_esp, 0x4104aeu); f_0040b3c0();
L_004104ae:; BB(0x004104ae);
    /* 004104ae: push dword ptr [0xa0f67c] */ { u32 v = R32((u32)(0xa0f67cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004104b4: mov ecx, 0xaae89c */ r_ecx = 0xaae89cu;
    /* 004104b9: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x4104beu); f_007c1160();
    /* 004104be: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004104c0: je 0x4104c9 */ if (fZ) goto L_004104c9;
L_004104c2:; BB(0x004104c2);
    /* 004104c2: mov dword ptr [esi + 0x1c], 1 */ W32((u32)(r_esi+0x1cu), 0x1u);
L_004104c9:; BB(0x004104c9);
    /* 004104c9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004104ca: ret  */ FN_RET(0x00410464); r_esp += 4; return;
}

void f_004104cc(void) /* sub_4104CC */
{
    FN_ENTER(0x004104cc);
    /* 004104cc: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 004104d0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004104d2: jle 0x4104f6 */ if ((fZ||fS!=fO)) goto L_004104f6;
L_004104d4:; BB(0x004104d4);
    /* 004104d4: mov eax, dword ptr [ecx + 0x1c] */ r_eax = R32((u32)(r_ecx+0x1cu));
    /* 004104d7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004104d9: jne 0x4104f3 */ if (!fZ) goto L_004104f3;
L_004104db:; BB(0x004104db);
    /* 004104db: mov eax, dword ptr [0xa3afa4] */ r_eax = R32((u32)(0xa3afa4u));
    /* 004104e0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004104e2: je 0x4104eb */ if (fZ) goto L_004104eb;
L_004104e4:; BB(0x004104e4);
    /* 004104e4: mov eax, 1 */ r_eax = 0x1u;
    /* 004104e9: jmp 0x4104f0 */ goto L_004104f0;
L_004104eb:; BB(0x004104eb);
    /* 004104eb: mov eax, 2 */ r_eax = 0x2u;
L_004104f0:; BB(0x004104f0);
    /* 004104f0: mov dword ptr [ecx + 0x1c], eax */ W32((u32)(r_ecx+0x1cu), r_eax);
L_004104f3:; BB(0x004104f3);
    /* 004104f3: ret 4 */ FN_RET(0x004104cc); r_esp += 8; return;
L_004104f6:; BB(0x004104f6);
    /* 004104f6: mov dword ptr [ecx + 0x1c], 0 */ W32((u32)(r_ecx+0x1cu), 0x0u);
    /* 004104fd: ret 4 */ FN_RET(0x004104cc); r_esp += 8; return;
}

void f_00410500(void) /* sub_410500 */
{
    FN_ENTER(0x00410500);
    /* 00410500: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00410501: mov ebp, esp */ r_ebp = r_esp;
    /* 00410503: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00410505: push 0x8cca4c */ { u32 v = 0x8cca4cu; r_esp -= 4; W32(r_esp, v); }
    /* 0041050a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00410510: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00410511: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00410518: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0041051b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0041051e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00410521: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00410524: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00410527: mov eax, dword ptr [0xa3af94] */ r_eax = R32((u32)(0xa3af94u));
    /* 0041052c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0041052e: je 0x41053e */ if (fZ) goto L_0041053e;
L_00410530:; BB(0x00410530);
    /* 00410530: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00410533: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0041053a: mov esp, ebp */ r_esp = r_ebp;
    /* 0041053c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041053d: ret  */ FN_RET(0x00410500); r_esp += 4; return;
L_0041053e:; BB(0x0041053e);
    /* 0041053e: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00410545: push 0x70 */ { u32 v = 0x70u; r_esp -= 4; W32(r_esp, v); }
    /* 00410547: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x41054cu); f_005caba4();
    /* 0041054c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0041054d: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00410550: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00410552: je 0x410581 */ if (fZ) goto L_00410581;
L_00410554:; BB(0x00410554);
    /* 00410554: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0041055b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00410562: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00410565: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00410568: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0041056b: call 0x410588 */ r_esp -= 4; W32(r_esp, 0x410570u); f_00410588();
    /* 00410570: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00410573: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0041057a:; BB(0x0041057a);
    /* 0041057a: mov dword ptr [0xa3af94], eax */ W32((u32)(0xa3af94u), r_eax);
    /* 0041057f: jmp 0x410530 */ goto L_00410530;
L_00410581:; BB(0x00410581);
    /* 00410581: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00410583: jmp 0x41057a */ goto L_0041057a;
}

void f_00410588(void) /* sub_410588 */
{
    FN_ENTER(0x00410588);
    /* 00410588: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00410589: mov ebp, esp */ r_ebp = r_esp;
    /* 0041058b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0041058d: push 0x8cca68 */ { u32 v = 0x8cca68u; r_esp -= 4; W32(r_esp, v); }
    /* 00410592: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00410598: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00410599: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004105a0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004105a3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004105a6: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 004105a9: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 004105ac: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 004105af: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004105b2: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004105b5: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 004105b8: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004105bb: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x4105c0u); f_008193cc();
    /* 004105c0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004105c7: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004105ca: mov dword ptr [ebx], 0xaf2dc8 */ W32((u32)(r_ebx), 0xaf2dc8u);
    /* 004105d0: add ebx, 0x24 */ {  u32 a = r_ebx; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004105d3: mov esi, 2 */ r_esi = 0x2u;
L_004105d8:; BB(0x004105d8);
    /* 004105d8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004105da: call 0x40b1b4 */ r_esp -= 4; W32(r_esp, 0x4105dfu); f_0040b1b4();
    /* 004105df: add ebx, 0x24 */ {  u32 a = r_ebx; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004105e2: add esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_esi = r; fZ = (r == 0); }
    /* 004105e5: jne 0x4105d8 */ if (!fZ) goto L_004105d8;
L_004105e7:; BB(0x004105e7);
    /* 004105e7: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004105ea: mov eax, dword ptr [0x9a31e8] */ r_eax = R32((u32)(0x9a31e8u));
    /* 004105ef: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004105f2: mov dword ptr [0xa3af9c], ecx */ W32((u32)(0xa3af9cu), r_ecx);
    /* 004105f8: mov dword ptr [ebx + 4], eax */ W32((u32)(r_ebx+0x4u), r_eax);
    /* 004105fb: mov dword ptr [0xa3afa4], 1 */ W32((u32)(0xa3afa4u), 0x1u);
    /* 00410605: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00410607: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00410609: mov dword ptr [0xa3af98], edx */ W32((u32)(0xa3af98u), r_edx);
    /* 0041060f: mov dword ptr [ebx + 0x24], 2 */ W32((u32)(r_ebx+0x24u), 0x2u);
    /* 00410616: mov dword ptr [ebx + 0x1c], edx */ W32((u32)(r_ebx+0x1cu), r_edx);
    /* 00410619: mov dword ptr [ebx + 0x28], 0x43d80000 */ W32((u32)(r_ebx+0x28u), 0x43d80000u);
    /* 00410620: push 0x27 */ { u32 v = 0x27u; r_esp -= 4; W32(r_esp, v); }
    /* 00410622: mov dword ptr [ebx + 0x20], edx */ W32((u32)(r_ebx+0x20u), r_edx);
    /* 00410625: mov dword ptr [ebx + 0x2c], 0x43d28000 */ W32((u32)(r_ebx+0x2cu), 0x43d28000u);
    /* 0041062c: mov dword ptr [ebx + 0x6c], edx */ W32((u32)(r_ebx+0x6cu), r_edx);
    /* 0041062f: mov dword ptr [ebx + 0x30], 0x43d80000 */ W32((u32)(r_ebx+0x30u), 0x43d80000u);
    /* 00410636: mov dword ptr [ebx + 0x34], 0x43d28000 */ W32((u32)(r_ebx+0x34u), 0x43d28000u);
    /* 0041063d: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x410642u); f_00792fe8();
    /* 00410642: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00410645: mov dword ptr [edx + 0x38], 0 */ W32((u32)(r_edx+0x38u), 0x0u);
    /* 0041064c: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 0041064f: mov dword ptr [edx + 0x3c], 8 */ W32((u32)(r_edx+0x3cu), 0x8u);
    /* 00410656: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00410658: mov dword ptr [edx + 0x40], 0x1e */ W32((u32)(r_edx+0x40u), 0x1eu);
    /* 0041065f: push 0x27 */ { u32 v = 0x27u; r_esp -= 4; W32(r_esp, v); }
    /* 00410661: mov dword ptr [edx + 0x48], 2 */ W32((u32)(r_edx+0x48u), 0x2u);
    /* 00410668: mov dword ptr [edx + 0x4c], 0x43d80000 */ W32((u32)(r_edx+0x4cu), 0x43d80000u);
    /* 0041066f: mov dword ptr [edx + 0x50], 0x43d28000 */ W32((u32)(r_edx+0x50u), 0x43d28000u);
    /* 00410676: mov dword ptr [edx + 0x54], 0x43d80000 */ W32((u32)(r_edx+0x54u), 0x43d80000u);
    /* 0041067d: mov dword ptr [edx + 0x58], 0x43d28000 */ W32((u32)(r_edx+0x58u), 0x43d28000u);
    /* 00410684: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x410689u); f_00792fe8();
    /* 00410689: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0041068c: mov dword ptr [edx + 0x5c], 0 */ W32((u32)(r_edx+0x5cu), 0x0u);
    /* 00410693: mov dword ptr [edx + 0x68], eax */ W32((u32)(r_edx+0x68u), r_eax);
    /* 00410696: lea eax, [edx + 0x24] */ r_eax = (u32)(r_edx+0x24u);
    /* 00410699: mov dword ptr [edx + 0x60], 8 */ W32((u32)(r_edx+0x60u), 0x8u);
    /* 004106a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004106a1: mov dword ptr [edx + 0x64], 0x1e */ W32((u32)(r_edx+0x64u), 0x1eu);
    /* 004106a8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004106a9: call 0x40b1ec */ r_esp -= 4; W32(r_esp, 0x4106aeu); f_0040b1ec();
    /* 004106ae: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004106b1: mov edx, dword ptr [0xa3adc4] */ r_edx = R32((u32)(0xa3adc4u));
    /* 004106b7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004106b9: je 0x4106c8 */ if (fZ) goto L_004106c8;
L_004106bb:; BB(0x004106bb);
    /* 004106bb: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004106bf: or eax, 0xffff0010 */ {  u32 a = r_eax; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004106c4: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_004106c8:; BB(0x004106c8);
    /* 004106c8: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 004106cb: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004106ce: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 004106d1: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004106d4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004106d7: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004106de: mov esp, ebp */ r_esp = r_ebp;
    /* 004106e0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004106e1: ret 8 */ FN_RET(0x00410588); r_esp += 12; return;
}

void f_004106e4(void) /* sub_4106E4 */
{
    FN_ENTER(0x004106e4);
    /* 004106e4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004106e5: mov edi, ecx */ r_edi = r_ecx;
    /* 004106e7: mov eax, dword ptr [edi + 0x1c] */ r_eax = R32((u32)(r_edi+0x1cu));
    /* 004106ea: mov ecx, edi */ r_ecx = r_edi;
    /* 004106ec: call dword ptr [eax*4 + 0x8fa4fc] */ { u32 t = R32((u32)(r_eax*4+0x8fa4fcu)); r_esp -= 4; W32(r_esp, 0x4106f3u); call_ind(t); }
    /* 004106f3: mov eax, dword ptr [edi + 0x1c] */ r_eax = R32((u32)(r_edi+0x1cu));
    /* 004106f6: mov dword ptr [edi + 0x20], eax */ W32((u32)(r_edi+0x20u), r_eax);
    /* 004106f9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004106fa: ret  */ FN_RET(0x004106e4); r_esp += 4; return;
}

void f_004106fc(void) /* sub_4106FC */
{
    FN_ENTER(0x004106fc);
    /* 004106fc: mov eax, dword ptr [0xa16380] */ r_eax = R32((u32)(0xa16380u));
    /* 00410701: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00410704: je 0x41072d */ if (fZ) goto L_0041072d;
L_00410706:; BB(0x00410706);
    /* 00410706: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00410708: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041070a: call 0x82acfc */ r_esp -= 4; W32(r_esp, 0x41070fu); f_0082acfc();
    /* 0041070f: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00410711: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00410713: call 0x82acfc */ r_esp -= 4; W32(r_esp, 0x410718u); f_0082acfc();
    /* 00410718: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0041071a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041071c: call 0x82acfc */ r_esp -= 4; W32(r_esp, 0x410721u); f_0082acfc();
    /* 00410721: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00410723: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00410725: call 0x82acfc */ r_esp -= 4; W32(r_esp, 0x41072au); f_0082acfc();
    /* 0041072a: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_0041072d:; BB(0x0041072d);
    /* 0041072d: ret  */ FN_RET(0x004106fc); r_esp += 4; return;
}

void f_00410730(void) /* sub_410730 */
{
    FN_ENTER(0x00410730);
    /* 00410730: mov dword ptr [0xa3af88], 0x3f800000 */ W32((u32)(0xa3af88u), 0x3f800000u);
    /* 0041073a: mov dword ptr [0xa3af8c], 0x41000000 */ W32((u32)(0xa3af8cu), 0x41000000u);
    /* 00410744: mov dword ptr [0xa3af90], 0x3fc00000 */ W32((u32)(0xa3af90u), 0x3fc00000u);
    /* 0041074e: ret  */ FN_RET(0x00410730); r_esp += 4; return;
}

void f_00410750(void) /* sub_410750 */
{
    FN_ENTER(0x00410750);
    /* 00410750: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00410751: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00410753: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00410755: call 0x410774 */ r_esp -= 4; W32(r_esp, 0x41075au); f_00410774();
    /* 0041075a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0041075e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00410760: jne 0x410766 */ if (!fZ) goto L_00410766;
L_00410762:; BB(0x00410762);
    /* 00410762: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00410763: ret 4 */ FN_RET(0x00410750); r_esp += 8; return;
L_00410766:; BB(0x00410766);
    /* 00410766: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00410767: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x41076cu); f_005c2f74();
    /* 0041076c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0041076d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0041076e: ret 4 */ FN_RET(0x00410750); r_esp += 8; return;
}

void f_00410774(void) /* sub_410774 */
{
    FN_ENTER(0x00410774);
    /* 00410774: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00410775: mov ebp, esp */ r_ebp = r_esp;
    /* 00410777: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00410779: push 0x8cca84 */ { u32 v = 0x8cca84u; r_esp -= 4; W32(r_esp, v); }
    /* 0041077e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00410784: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00410785: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0041078c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0041078f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00410792: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00410795: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00410798: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0041079b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0041079e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004107a1: mov dword ptr [ecx], 0xaf2e30 */ W32((u32)(r_ecx), 0xaf2e30u);
    /* 004107a7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004107ae: call 0x4174d8 */ r_esp -= 4; W32(r_esp, 0x4107b3u); f_004174d8();
    /* 004107b3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004107b6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004107bd: mov esp, ebp */ r_esp = r_ebp;
    /* 004107bf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004107c0: ret  */ FN_RET(0x00410774); r_esp += 4; return;
}

void f_004107c4(void) /* sub_4107C4 */
{
    FN_ENTER(0x004107c4);
    /* 004107c4: mov dword ptr [0xa3afac], 1 */ W32((u32)(0xa3afacu), 0x1u);
    /* 004107ce: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 004107d0: call 0x7a60dc */ r_esp -= 4; W32(r_esp, 0x4107d5u); f_007a60dc();
    /* 004107d5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004107d6: ret  */ FN_RET(0x004107c4); r_esp += 4; return;
}

void f_004107d8(void) /* sub_4107D8 */
{
    FN_ENTER(0x004107d8);
    /* 004107d8: mov dword ptr [0xa3afac], 0 */ W32((u32)(0xa3afacu), 0x0u);
    /* 004107e2: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 004107e4: call 0x7a60dc */ r_esp -= 4; W32(r_esp, 0x4107e9u); f_007a60dc();
    /* 004107e9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004107ea: ret  */ FN_RET(0x004107d8); r_esp += 4; return;
}

void f_004107ec(void) /* sub_4107EC */
{
    FN_ENTER(0x004107ec);
    /* 004107ec: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004107ee: push 0x2b */ { u32 v = 0x2bu; r_esp -= 4; W32(r_esp, v); }
    /* 004107f0: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x4107f5u); f_00792fe8();
    /* 004107f5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004107f8: ret  */ FN_RET(0x004107ec); r_esp += 4; return;
}

void f_004107fc(void) /* sub_4107FC */
{
    FN_ENTER(0x004107fc);
    /* 004107fc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004107fd: mov ebp, esp */ r_ebp = r_esp;
    /* 004107ff: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00410801: push 0x8ccaba */ { u32 v = 0x8ccabau; r_esp -= 4; W32(r_esp, v); }
    /* 00410806: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0041080c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041080d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00410814: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00410817: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0041081a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0041081d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00410820: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00410823: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00410826: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00410829: call 0x417564 */ r_esp -= 4; W32(r_esp, 0x41082eu); f_00417564();
    /* 0041082e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00410835: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00410838: mov dword ptr [edx], 0xaf2e30 */ W32((u32)(r_edx), 0xaf2e30u);
    /* 0041083e: mov eax, dword ptr [0x9a323c] */ r_eax = R32((u32)(0x9a323cu));
    /* 00410843: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0041084a: push 0x240 */ { u32 v = 0x240u; r_esp -= 4; W32(r_esp, v); }
    /* 0041084f: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00410852: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x410857u); f_005caba4();
    /* 00410857: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00410858: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0041085b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0041085d: je 0x410881 */ if (fZ) goto L_00410881;
L_0041085f:; BB(0x0041085f);
    /* 0041085f: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 00410866: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0041086d: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00410870: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 00410872: push dword ptr [ebp - 0x20] */ { u32 v = R32((u32)(r_ebp+0xffffffe0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00410875: call 0x415154 */ r_esp -= 4; W32(r_esp, 0x41087au); f_00415154();
    /* 0041087a: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_00410881:; BB(0x00410881);
    /* 00410881: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00410884: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00410887: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0041088e: mov esp, ebp */ r_esp = r_ebp;
    /* 00410890: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00410891: ret 4 */ FN_RET(0x004107fc); r_esp += 8; return;
}

void f_00410894(void) /* sub_410894 */
{
    FN_ENTER(0x00410894);
    /* 00410894: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00410896: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x410899u); call_ind(t); }
    /* 00410899: ret  */ FN_RET(0x00410894); r_esp += 4; return;
}

void f_0041089c(void) /* sub_41089C */
{
    FN_ENTER(0x0041089c);
    /* 0041089c: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0041089e: call dword ptr [eax + 0x28] */ { u32 t = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, 0x4108a1u); call_ind(t); }
    /* 004108a1: ret  */ FN_RET(0x0041089c); r_esp += 4; return;
}

void f_004108a4(void) /* sub_4108A4 */
{
    FN_ENTER(0x004108a4);
    /* 004108a4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004108a5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004108a7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004108a9: call 0x4108c8 */ r_esp -= 4; W32(r_esp, 0x4108aeu); f_004108c8();
    /* 004108ae: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004108b2: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004108b4: jne 0x4108ba */ if (!fZ) goto L_004108ba;
L_004108b6:; BB(0x004108b6);
    /* 004108b6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004108b7: ret 4 */ FN_RET(0x004108a4); r_esp += 8; return;
L_004108ba:; BB(0x004108ba);
    /* 004108ba: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004108bb: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4108c0u); f_005c2f74();
    /* 004108c0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004108c1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004108c2: ret 4 */ FN_RET(0x004108a4); r_esp += 8; return;
}

void f_004108c8(void) /* sub_4108C8 */
{
    FN_ENTER(0x004108c8);
    /* 004108c8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004108c9: mov ebp, esp */ r_ebp = r_esp;
    /* 004108cb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004108cd: push 0x8ccad4 */ { u32 v = 0x8ccad4u; r_esp -= 4; W32(r_esp, v); }
    /* 004108d2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004108d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004108d9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004108e0: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004108e3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004108e6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004108e9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004108ec: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004108ef: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004108f2: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004108f5: mov dword ptr [ecx], 0xaf2e88 */ W32((u32)(r_ecx), 0xaf2e88u);
    /* 004108fb: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00410902: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x410907u); f_008171e8();
    /* 00410907: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0041090a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00410911: mov esp, ebp */ r_esp = r_ebp;
    /* 00410913: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00410914: ret  */ FN_RET(0x004108c8); r_esp += 4; return;
}

void f_00410900(void)
{
    FN_ENTER(0x00410900);
}

void f_00410918(void) /* sub_410918 */
{
    FN_ENTER(0x00410918);
    /* 00410918: mov ecx, dword ptr [0xa3afb4] */ r_ecx = R32((u32)(0xa3afb4u));
    /* 0041091e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00410920: je 0x410931 */ if (fZ) goto L_00410931;
L_00410922:; BB(0x00410922);
    /* 00410922: call 0x829de0 */ r_esp -= 4; W32(r_esp, 0x410927u); f_00829de0();
    /* 00410927: mov dword ptr [0xa3afb4], 0 */ W32((u32)(0xa3afb4u), 0x0u);
L_00410931:; BB(0x00410931);
    /* 00410931: ret  */ FN_RET(0x00410918); r_esp += 4; return;
}

void f_00410934(void) /* sub_410934 */
{
    FN_ENTER(0x00410934);
    /* 00410934: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00410935: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00410937: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0041093b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0041093d: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x410942u); f_008193cc();
    /* 00410942: mov dword ptr [ebx], 0xaf2e88 */ W32((u32)(r_ebx), 0xaf2e88u);
    /* 00410948: mov edx, dword ptr [0x9a34a8] */ r_edx = R32((u32)(0x9a34a8u));
    /* 0041094e: mov dword ptr [ebx + 4], edx */ W32((u32)(r_ebx+0x4u), r_edx);
    /* 00410951: mov eax, ebx */ r_eax = r_ebx;
    /* 00410953: mov dword ptr [ebx + 0x1c], 0 */ W32((u32)(r_ebx+0x1cu), 0x0u);
    /* 0041095a: mov dword ptr [ebx + 0x20], 0xffffffff */ W32((u32)(r_ebx+0x20u), 0xffffffffu);
    /* 00410961: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00410962: ret 4 */ FN_RET(0x00410934); r_esp += 8; return;
}

void f_00410968(void) /* sub_410968 */
{
    FN_ENTER(0x00410968);
    /* 00410968: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 0041096b: mov eax, dword ptr [ecx + 0x1c] */ r_eax = R32((u32)(r_ecx+0x1cu));
    /* 0041096e: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00410971: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00410973: je 0x4109b1 */ if (fZ) goto L_004109b1;
L_00410975:; BB(0x00410975);
    /* 00410975: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00410978: jne 0x41098a */ if (!fZ) goto L_0041098a;
L_0041097a:; BB(0x0041097a);
    /* 0041097a: mov dword ptr [ecx + 0x20], edx */ W32((u32)(r_ecx+0x20u), r_edx);
    /* 0041097d: cmp edx, 0x12 */ {  u32 a = r_edx; u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00410980: jle 0x4109c0 */ if ((fZ||fS!=fO)) goto L_004109c0;
L_00410982:; BB(0x00410982);
    /* 00410982: mov dword ptr [ecx + 0x1c], 2 */ W32((u32)(r_ecx+0x1cu), 0x2u);
    /* 00410989: ret  */ FN_RET(0x00410968); r_esp += 4; return;
L_0041098a:; BB(0x0041098a);
    /* 0041098a: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0041098d: je 0x410993 */ if (fZ) goto L_00410993;
L_0041098f:; BB(0x0041098f);
    /* 0041098f: mov dword ptr [ecx + 0x20], edx */ W32((u32)(r_ecx+0x20u), r_edx);
    /* 00410992: ret  */ FN_RET(0x00410968); r_esp += 4; return;
L_00410993:; BB(0x00410993);
    /* 00410993: cmp edx, 0x1f */ {  u32 a = r_edx; u32 b = 0x1fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00410996: jg 0x41099c */ if ((!fZ&&fS==fO)) goto L_0041099c;
L_00410998:; BB(0x00410998);
    /* 00410998: mov dword ptr [ecx + 0x20], edx */ W32((u32)(r_ecx+0x20u), r_edx);
    /* 0041099b: ret  */ FN_RET(0x00410968); r_esp += 4; return;
L_0041099c:; BB(0x0041099c);
    /* 0041099c: movzx eax, word ptr [ecx + 8] */ r_eax = (u32)R16((u32)(r_ecx+0x8u));
    /* 004109a0: mov dword ptr [ecx + 0x20], 0x20 */ W32((u32)(r_ecx+0x20u), 0x20u);
    /* 004109a7: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004109ac: mov word ptr [ecx + 8], ax */ W16((u32)(r_ecx+0x8u), (u16)r_eax);
    /* 004109b0: ret  */ FN_RET(0x00410968); r_esp += 4; return;
L_004109b1:; BB(0x004109b1);
    /* 004109b1: mov dword ptr [ecx + 0x20], edx */ W32((u32)(r_ecx+0x20u), r_edx);
    /* 004109b4: cmp edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004109b7: jle 0x4109c0 */ if ((fZ||fS!=fO)) goto L_004109c0;
L_004109b9:; BB(0x004109b9);
    /* 004109b9: mov dword ptr [ecx + 0x1c], 1 */ W32((u32)(r_ecx+0x1cu), 0x1u);
L_004109c0:; BB(0x004109c0);
    /* 004109c0: ret  */ FN_RET(0x00410968); r_esp += 4; return;
}

void f_004109c4(void) /* sub_4109C4 */
{
    FN_ENTER(0x004109c4);
    /* 004109c4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004109c5: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004109c8: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004109ca: mov eax, dword ptr [0xa16380] */ r_eax = R32((u32)(0xa16380u));
    /* 004109cf: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004109d2: je 0x410b6a */ if (fZ) goto L_00410b6a;
L_004109d8:; BB(0x004109d8);
    /* 004109d8: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 004109da: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004109dc: call 0x82acfc */ r_esp -= 4; W32(r_esp, 0x4109e1u); f_0082acfc();
    /* 004109e1: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 004109e3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004109e5: call 0x82acfc */ r_esp -= 4; W32(r_esp, 0x4109eau); f_0082acfc();
    /* 004109ea: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004109ed: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 004109f0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004109f2: je 0x410b0a */ if (fZ) goto L_00410b0a;
L_004109f8:; BB(0x004109f8);
    /* 004109f8: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004109fb: je 0x410a5f */ if (fZ) goto L_00410a5f;
L_004109fd:; BB(0x004109fd);
    /* 004109fd: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00410a00: jne 0x410b55 */ if (!fZ) goto L_00410b55;
L_00410a06:; BB(0x00410a06);
    /* 00410a06: mov ecx, dword ptr [ebp + 0x20] */ r_ecx = R32((u32)(r_ebp+0x20u));
    /* 00410a09: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 00410a0c: add ecx, 7 */ {  u32 a = r_ecx; u32 b = 0x7u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00410a0f: mov ebp, 0x40 */ r_ebp = 0x40u;
    /* 00410a14: mov edi, ecx */ r_edi = r_ecx;
L_00410a16:; BB(0x00410a16);
    /* 00410a16: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00410a1b: call 0x82bb30 */ r_esp -= 4; W32(r_esp, 0x410a20u); f_0082bb30();
    /* 00410a20: mov ecx, dword ptr [0xa3afb4] */ r_ecx = R32((u32)(0xa3afb4u));
    /* 00410a26: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x410a2bu); f_00829cc8();
    /* 00410a2b: mov ecx, edi */ r_ecx = r_edi;
    /* 00410a2d: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 00410a32: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x410a37u); f_0082bb60();
    /* 00410a37: push 0x3bea0ea1 */ { u32 v = 0x3bea0ea1u; r_esp -= 4; W32(r_esp, v); }
    /* 00410a3c: lea ecx, [ebp + 0x9a3420] */ r_ecx = (u32)(r_ebp+0x9a3420u);
    /* 00410a42: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x410a47u); f_0082b440();
    /* 00410a47: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x410a4cu); f_004ac444();
    /* 00410a4c: add ebp, 0x20 */ {  u32 a = r_ebp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00410a4f: cmp ebp, 0x80 */ {  u32 a = r_ebp; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00410a55: jb 0x410a16 */ if (fC) goto L_00410a16;
L_00410a57:; BB(0x00410a57);
    /* 00410a57: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 00410a5a: jmp 0x410b55 */ goto L_00410b55;
L_00410a5f:; BB(0x00410a5f);
    /* 00410a5f: mov ecx, dword ptr [ebp + 0x20] */ r_ecx = R32((u32)(r_ebp+0x20u));
    /* 00410a62: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 00410a66: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 00410a69: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00410a6b: mov esi, eax */ r_esi = r_eax;
    /* 00410a6d: mov edi, ecx */ r_edi = r_ecx;
L_00410a6f:; BB(0x00410a6f);
    /* 00410a6f: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00410a74: call 0x82bb30 */ r_esp -= 4; W32(r_esp, 0x410a79u); f_0082bb30();
    /* 00410a79: mov ecx, dword ptr [0xa3afb4] */ r_ecx = R32((u32)(0xa3afb4u));
    /* 00410a7f: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x410a84u); f_00829cc8();
    /* 00410a84: mov ecx, edi */ r_ecx = r_edi;
    /* 00410a86: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 00410a8b: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x410a90u); f_0082bb60();
    /* 00410a90: push 0x3bea0ea1 */ { u32 v = 0x3bea0ea1u; r_esp -= 4; W32(r_esp, v); }
    /* 00410a95: lea ecx, [esi + 0x9a3420] */ r_ecx = (u32)(r_esi+0x9a3420u);
    /* 00410a9b: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x410aa0u); f_0082b440();
    /* 00410aa0: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x410aa5u); f_004ac444();
    /* 00410aa5: add esi, 0x20 */ {  u32 a = r_esi; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00410aa8: cmp esi, 0x40 */ {  u32 a = r_esi; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00410aab: jb 0x410a6f */ if (fC) goto L_00410a6f;
L_00410aad:; BB(0x00410aad);
    /* 00410aad: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 00410ab1: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 00410ab4: mov ecx, dword ptr [ebp + 0x20] */ r_ecx = R32((u32)(r_ebp+0x20u));
    /* 00410ab7: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 00410aba: add ecx, 7 */ {  u32 a = r_ecx; u32 b = 0x7u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00410abd: mov ebp, 0x40 */ r_ebp = 0x40u;
    /* 00410ac2: mov edi, ecx */ r_edi = r_ecx;
L_00410ac4:; BB(0x00410ac4);
    /* 00410ac4: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00410ac9: call 0x82bb30 */ r_esp -= 4; W32(r_esp, 0x410aceu); f_0082bb30();
    /* 00410ace: mov ecx, dword ptr [0xa3afb4] */ r_ecx = R32((u32)(0xa3afb4u));
    /* 00410ad4: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x410ad9u); f_00829cc8();
    /* 00410ad9: mov ecx, edi */ r_ecx = r_edi;
    /* 00410adb: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 00410ae0: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x410ae5u); f_0082bb60();
    /* 00410ae5: push 0x3bea0ea1 */ { u32 v = 0x3bea0ea1u; r_esp -= 4; W32(r_esp, v); }
    /* 00410aea: lea ecx, [ebp + 0x9a3420] */ r_ecx = (u32)(r_ebp+0x9a3420u);
    /* 00410af0: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x410af5u); f_0082b440();
    /* 00410af5: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x410afau); f_004ac444();
    /* 00410afa: add ebp, 0x20 */ {  u32 a = r_ebp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00410afd: cmp ebp, 0x80 */ {  u32 a = r_ebp; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00410b03: jb 0x410ac4 */ if (fC) goto L_00410ac4;
L_00410b05:; BB(0x00410b05);
    /* 00410b05: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 00410b08: jmp 0x410b55 */ goto L_00410b55;
L_00410b0a:; BB(0x00410b0a);
    /* 00410b0a: mov ecx, dword ptr [ebp + 0x20] */ r_ecx = R32((u32)(r_ebp+0x20u));
    /* 00410b0d: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 00410b10: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00410b12: mov edi, ecx */ r_edi = r_ecx;
L_00410b14:; BB(0x00410b14);
    /* 00410b14: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00410b19: call 0x82bb30 */ r_esp -= 4; W32(r_esp, 0x410b1eu); f_0082bb30();
    /* 00410b1e: mov ecx, dword ptr [0xa3afb4] */ r_ecx = R32((u32)(0xa3afb4u));
    /* 00410b24: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x410b29u); f_00829cc8();
    /* 00410b29: mov ecx, edi */ r_ecx = r_edi;
    /* 00410b2b: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 00410b30: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x410b35u); f_0082bb60();
    /* 00410b35: push 0x3bea0ea1 */ { u32 v = 0x3bea0ea1u; r_esp -= 4; W32(r_esp, v); }
    /* 00410b3a: lea ecx, [ebp + 0x9a3420] */ r_ecx = (u32)(r_ebp+0x9a3420u);
    /* 00410b40: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x410b45u); f_0082b440();
    /* 00410b45: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x410b4au); f_004ac444();
    /* 00410b4a: add ebp, 0x20 */ {  u32 a = r_ebp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00410b4d: cmp ebp, 0x40 */ {  u32 a = r_ebp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00410b50: jb 0x410b14 */ if (fC) goto L_00410b14;
L_00410b52:; BB(0x00410b52);
    /* 00410b52: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
L_00410b55:; BB(0x00410b55);
    /* 00410b55: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00410b57: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00410b59: call 0x82acfc */ r_esp -= 4; W32(r_esp, 0x410b5eu); f_0082acfc();
    /* 00410b5e: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00410b60: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00410b62: call 0x82acfc */ r_esp -= 4; W32(r_esp, 0x410b67u); f_0082acfc();
    /* 00410b67: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00410b6a:; BB(0x00410b6a);
    /* 00410b6a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00410b6d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00410b6e: ret  */ FN_RET(0x004109c4); r_esp += 4; return;
}

void f_00410b70(void) /* sub_410B70 */
{
    FN_ENTER(0x00410b70);
    /* 00410b70: mov eax, 0x9a34a0 */ r_eax = 0x9a34a0u;
    /* 00410b75: mov dword ptr [0xa3afb4], eax */ W32((u32)(0xa3afb4u), r_eax);
    /* 00410b7a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00410b7b: push 0x8fa840 */ { u32 v = 0x8fa840u; r_esp -= 4; W32(r_esp, v); }
    /* 00410b80: call 0x81a934 */ r_esp -= 4; W32(r_esp, 0x410b85u); f_0081a934();
    /* 00410b85: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00410b88: ret  */ FN_RET(0x00410b70); r_esp += 4; return;
}

void f_00410b8c(void) /* sub_410B8C */
{
    FN_ENTER(0x00410b8c);
    /* 00410b8c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00410b8d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00410b8f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00410b91: call 0x410bb0 */ r_esp -= 4; W32(r_esp, 0x410b96u); f_00410bb0();
    /* 00410b96: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00410b9a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00410b9c: jne 0x410ba2 */ if (!fZ) goto L_00410ba2;
L_00410b9e:; BB(0x00410b9e);
    /* 00410b9e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00410b9f: ret 4 */ FN_RET(0x00410b8c); r_esp += 8; return;
L_00410ba2:; BB(0x00410ba2);
    /* 00410ba2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00410ba3: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x410ba8u); f_005c2f74();
    /* 00410ba8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00410ba9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00410baa: ret 4 */ FN_RET(0x00410b8c); r_esp += 8; return;
}

void f_00410bb0(void) /* sub_410BB0 */
{
    FN_ENTER(0x00410bb0);
    /* 00410bb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00410bb1: mov ebp, esp */ r_ebp = r_esp;
    /* 00410bb3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00410bb5: push 0x8ccaf0 */ { u32 v = 0x8ccaf0u; r_esp -= 4; W32(r_esp, v); }
    /* 00410bba: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00410bc0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00410bc1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00410bc8: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00410bcb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00410bce: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00410bd1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00410bd4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00410bd7: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00410bda: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00410bdd: mov dword ptr [ecx], 0xaf2f88 */ W32((u32)(r_ecx), 0xaf2f88u);
    /* 00410be3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00410bea: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x410befu); f_008171e8();
    /* 00410bef: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00410bf2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00410bf9: mov esp, ebp */ r_esp = r_ebp;
    /* 00410bfb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00410bfc: ret  */ FN_RET(0x00410bb0); r_esp += 4; return;
}

void f_00410c00(void) /* sub_410C00 */
{
    FN_ENTER(0x00410c00);
    /* 00410c00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00410c01: mov ebp, esp */ r_ebp = r_esp;
    /* 00410c03: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00410c05: push 0x8ccb0c */ { u32 v = 0x8ccb0cu; r_esp -= 4; W32(r_esp, v); }
    /* 00410c0a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00410c10: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00410c11: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00410c18: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00410c1b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00410c1e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00410c21: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00410c24: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00410c27: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00410c2a: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00410c2d: mov eax, ecx */ r_eax = r_ecx;
    /* 00410c2f: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 00410c32: mov dword ptr [eax], 0xaf2f98 */ W32((u32)(r_eax), 0xaf2f98u);
    /* 00410c38: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00410c3a: je 0x410c52 */ if (fZ) goto L_00410c52;
L_00410c3c:; BB(0x00410c3c);
    /* 00410c3c: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00410c40: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00410c45: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00410c49: mov edx, ecx */ r_edx = r_ecx;
    /* 00410c4b: mov dword ptr [edx + 0x1c], 0 */ W32((u32)(r_edx+0x1cu), 0x0u);
L_00410c52:; BB(0x00410c52);
    /* 00410c52: mov eax, ecx */ r_eax = r_ecx;
    /* 00410c54: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 00410c57: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00410c59: je 0x410c71 */ if (fZ) goto L_00410c71;
L_00410c5b:; BB(0x00410c5b);
    /* 00410c5b: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00410c5f: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00410c64: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00410c68: mov edx, ecx */ r_edx = r_ecx;
    /* 00410c6a: mov dword ptr [edx + 0x20], 0 */ W32((u32)(r_edx+0x20u), 0x0u);
L_00410c71:; BB(0x00410c71);
    /* 00410c71: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00410c78: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x410c7du); f_008171e8();
    /* 00410c7d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00410c80: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00410c82: jne 0x410c94 */ if (!fZ) goto L_00410c94;
L_00410c84:; BB(0x00410c84);
    /* 00410c84: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00410c87: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00410c8e: mov esp, ebp */ r_esp = r_ebp;
    /* 00410c90: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00410c91: ret 4 */ FN_RET(0x00410c00); r_esp += 8; return;
L_00410c94:; BB(0x00410c94);
    /* 00410c94: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00410c97: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00410c98: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x410c9du); f_005c2f74();
    /* 00410c9d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00410c9e: jmp 0x410c84 */ goto L_00410c84;
}

void f_00410ca0(void) /* sub_410CA0 */
{
    FN_ENTER(0x00410ca0);
    /* 00410ca0: mov ecx, dword ptr [0xa3b040] */ r_ecx = R32((u32)(0xa3b040u));
    /* 00410ca6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00410ca8: je 0x410cbd */ if (fZ) goto L_00410cbd;
L_00410caa:; BB(0x00410caa);
    /* 00410caa: je 0x410cb3 */ if (fZ) goto L_00410cb3;
L_00410cac:; BB(0x00410cac);
    /* 00410cac: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00410cae: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x410cb3u); f_004066a8();
L_00410cb3:; BB(0x00410cb3);
    /* 00410cb3: mov dword ptr [0xa3b040], 0 */ W32((u32)(0xa3b040u), 0x0u);
L_00410cbd:; BB(0x00410cbd);
    /* 00410cbd: ret  */ FN_RET(0x00410ca0); r_esp += 4; return;
}

void f_00410cc0(void) /* sub_410CC0 */
{
    FN_ENTER(0x00410cc0);
    /* 00410cc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00410cc1: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00410cc3: mov eax, dword ptr [ebp + 0x2c] */ r_eax = R32((u32)(r_ebp+0x2cu));
    /* 00410cc6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00410cc8: je 0x410cf1 */ if (fZ) goto L_00410cf1;
L_00410cca:; BB(0x00410cca);
    /* 00410cca: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00410ccc: call 0x410d70 */ r_esp -= 4; W32(r_esp, 0x410cd1u); f_00410d70();
    /* 00410cd1: fld dword ptr [ebp + 0x1c] */ FPUSH(R_F32((u32)(r_ebp+0x1cu)));
    /* 00410cd4: fcomp dword ptr [0x8fa8f0] */ fx_compare(ST(0), R_F32((u32)(0x8fa8f0u))); FPOP();
    /* 00410cda: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00410cdc: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00410cdd: ja 0x410cee */ if ((!fC&&!fZ)) goto L_00410cee;
L_00410cdf:; BB(0x00410cdf);
    /* 00410cdf: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 00410ce3: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00410ce8: mov word ptr [ebp + 8], ax */ W16((u32)(r_ebp+0x8u), (u16)r_eax);
    /* 00410cec: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00410ced: ret  */ FN_RET(0x00410cc0); r_esp += 4; return;
L_00410cee:; BB(0x00410cee);
    /* 00410cee: mov eax, dword ptr [ebp + 0x2c] */ r_eax = R32((u32)(r_ebp+0x2cu));
L_00410cf1:; BB(0x00410cf1);
    /* 00410cf1: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00410cf3: je 0x410d2b */ if (fZ) goto L_00410d2b;
L_00410cf5:; BB(0x00410cf5);
    /* 00410cf5: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00410cf7: call 0x410d70 */ r_esp -= 4; W32(r_esp, 0x410cfcu); f_00410d70();
    /* 00410cfc: fld dword ptr [ebp + 0x34] */ FPUSH(R_F32((u32)(r_ebp+0x34u)));
    /* 00410cff: fcomp dword ptr [ebp + 0x1c] */ fx_compare(ST(0), R_F32((u32)(r_ebp+0x1cu))); FPOP();
    /* 00410d02: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00410d04: mov edx, dword ptr [ebp + 0x34] */ r_edx = R32((u32)(r_ebp+0x34u));
    /* 00410d07: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00410d08: ja 0x410d2b */ if ((!fC&&!fZ)) goto L_00410d2b;
L_00410d0a:; BB(0x00410d0a);
    /* 00410d0a: mov eax, dword ptr [ebp + 0x2c] */ r_eax = R32((u32)(r_ebp+0x2cu));
    /* 00410d0d: mov dword ptr [ebp + 0x28], 0 */ W32((u32)(r_ebp+0x28u), 0x0u);
    /* 00410d14: mov dword ptr [ebp + 0x1c], edx */ W32((u32)(r_ebp+0x1cu), r_edx);
    /* 00410d17: and eax, 0xfffffffd */ {  u32 a = r_eax; u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00410d1a: mov dword ptr [ebp + 0x24], 0 */ W32((u32)(r_ebp+0x24u), 0x0u);
    /* 00410d21: mov dword ptr [ebp + 0x2c], eax */ W32((u32)(r_ebp+0x2cu), r_eax);
    /* 00410d24: mov dword ptr [ebp + 0x20], 0 */ W32((u32)(r_ebp+0x20u), 0x0u);
L_00410d2b:; BB(0x00410d2b);
    /* 00410d2b: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 00410d2e: mov edx, dword ptr [ebp + 0x2c] */ r_edx = R32((u32)(r_ebp+0x2cu));
    /* 00410d31: add dword ptr [ebp + 0x68], eax */ { u32 ad = (u32)(r_ebp+0x68u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00410d34: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00410d37: je 0x410d53 */ if (fZ) goto L_00410d53;
L_00410d39:; BB(0x00410d39);
    /* 00410d39: mov edx, dword ptr [ebp + 0x48] */ r_edx = R32((u32)(r_ebp+0x48u));
    /* 00410d3c: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00410d3e: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 00410d41: cmp eax, 0xccc */ {  u32 a = r_eax; u32 b = 0xcccu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00410d46: jl 0x410d6b */ if ((fS!=fO)) goto L_00410d6b;
L_00410d48:; BB(0x00410d48);
    /* 00410d48: mov eax, dword ptr [ebp + 0x2c] */ r_eax = R32((u32)(r_ebp+0x2cu));
    /* 00410d4b: and eax, 0xfffffffb */ {  u32 a = r_eax; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00410d4e: mov dword ptr [ebp + 0x2c], eax */ W32((u32)(r_ebp+0x2cu), r_eax);
    /* 00410d51: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00410d52: ret  */ FN_RET(0x00410cc0); r_esp += 4; return;
L_00410d53:; BB(0x00410d53);
    /* 00410d53: mov edx, dword ptr [ebp + 0x48] */ r_edx = R32((u32)(r_ebp+0x48u));
    /* 00410d56: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00410d58: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 00410d5b: cmp eax, 0x5b0 */ {  u32 a = r_eax; u32 b = 0x5b0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00410d60: jg 0x410d6b */ if ((!fZ&&fS==fO)) goto L_00410d6b;
L_00410d62:; BB(0x00410d62);
    /* 00410d62: mov eax, dword ptr [ebp + 0x2c] */ r_eax = R32((u32)(r_ebp+0x2cu));
    /* 00410d65: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00410d68: mov dword ptr [ebp + 0x2c], eax */ W32((u32)(r_ebp+0x2cu), r_eax);
L_00410d6b:; BB(0x00410d6b);
    /* 00410d6b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00410d6c: ret  */ FN_RET(0x00410cc0); r_esp += 4; return;
}

void f_00410d70(void) /* sub_410D70 */
{
    FN_ENTER(0x00410d70);
    /* 00410d70: fld dword ptr [ecx + 0x1c] */ FPUSH(R_F32((u32)(r_ecx+0x1cu)));
    /* 00410d73: fadd dword ptr [ecx + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x38u));
    /* 00410d76: fld dword ptr [ecx + 0x20] */ FPUSH(R_F32((u32)(r_ecx+0x20u)));
    /* 00410d79: fadd dword ptr [ecx + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x3cu));
    /* 00410d7c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00410d7e: fstp dword ptr [ecx + 0x1c] */ W_F32((u32)(r_ecx+0x1cu), ST(0)); FPOP();
    /* 00410d81: fst dword ptr [ecx + 0x20] */ W_F32((u32)(r_ecx+0x20u), ST(0));
    /* 00410d84: fst dword ptr [ecx + 0x24] */ W_F32((u32)(r_ecx+0x24u), ST(0));
    /* 00410d87: fstp dword ptr [ecx + 0x28] */ W_F32((u32)(r_ecx+0x28u), ST(0)); FPOP();
    /* 00410d8a: ret  */ FN_RET(0x00410d70); r_esp += 4; return;
}

void f_00410d8c(void) /* sub_410D8C */
{
    FN_ENTER(0x00410d8c);
    /* 00410d8c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00410d8d: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00410d8f: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x410d94u); f_0082dbac();
    /* 00410d94: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x410d99u); f_0082d7b0();
    /* 00410d99: mov ecx, dword ptr [ebp + 0x50] */ r_ecx = R32((u32)(r_ebp+0x50u));
    /* 00410d9c: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x410da1u); f_00829cc8();
    /* 00410da1: lea ecx, [ebp + 0x58] */ r_ecx = (u32)(r_ebp+0x58u);
    /* 00410da4: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x410da9u); f_0082d838();
    /* 00410da9: push dword ptr [ebp + 0x6c] */ { u32 v = R32((u32)(r_ebp+0x6cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00410dac: push dword ptr [ebp + 0x68] */ { u32 v = R32((u32)(r_ebp+0x68u)); r_esp -= 4; W32(r_esp, v); }
    /* 00410daf: mov edx, dword ptr [ebp + 0x64] */ r_edx = R32((u32)(r_ebp+0x64u));
    /* 00410db2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00410db4: call 0x82df5c */ r_esp -= 4; W32(r_esp, 0x410db9u); f_0082df5c();
    /* 00410db9: push dword ptr [ebp + 0x4c] */ { u32 v = R32((u32)(r_ebp+0x4cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00410dbc: call 0x82e540 */ r_esp -= 4; W32(r_esp, 0x410dc1u); f_0082e540();
    /* 00410dc1: push dword ptr [ebp + 0x4c] */ { u32 v = R32((u32)(r_ebp+0x4cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00410dc4: call 0x82e5f8 */ r_esp -= 4; W32(r_esp, 0x410dc9u); f_0082e5f8();
    /* 00410dc9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00410dcc: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x410dd1u); f_0082da80();
    /* 00410dd1: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x410dd6u); f_0082dab0();
    /* 00410dd6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00410dd7: ret  */ FN_RET(0x00410d8c); r_esp += 4; return;
}

void f_00410dd8(void) /* sub_410DD8 */
{
    FN_ENTER(0x00410dd8);
    /* 00410dd8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00410dd9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00410dda: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00410ddb: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00410dde: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00410de0: fld dword ptr [ebx + 0x24] */ FPUSH(R_F32((u32)(r_ebx+0x24u)));
    /* 00410de3: fcomp dword ptr [0x8fa8dc] */ fx_compare(ST(0), R_F32((u32)(0x8fa8dcu))); FPOP();
    /* 00410de9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00410deb: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00410dec: jb 0x410df5 */ if (fC) goto L_00410df5;
L_00410dee:; BB(0x00410dee);
    /* 00410dee: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00410df1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00410df2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00410df3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00410df4: ret  */ FN_RET(0x00410dd8); r_esp += 4; return;
L_00410df5:; BB(0x00410df5);
    /* 00410df5: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x410dfau); f_0082dbac();
    /* 00410dfa: movzx edx, byte ptr [0xa3afbc] */ r_edx = (u32)R8((u32)(0xa3afbcu));
    /* 00410e01: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00410e04: jne 0x410e19 */ if (!fZ) goto L_00410e19;
L_00410e06:; BB(0x00410e06);
    /* 00410e06: mov dword ptr [0xa3afc4], 0xc10c0000 */ W32((u32)(0xa3afc4u), 0xc10c0000u);
    /* 00410e10: or edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00410e13: mov byte ptr [0xa3afbc], dl */ W8((u32)(0xa3afbcu), (u8)r_edx);
L_00410e19:; BB(0x00410e19);
    /* 00410e19: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00410e1c: jne 0x410e31 */ if (!fZ) goto L_00410e31;
L_00410e1e:; BB(0x00410e1e);
    /* 00410e1e: mov dword ptr [0xa3afc8], 0xc240cccd */ W32((u32)(0xa3afc8u), 0xc240cccdu);
    /* 00410e28: or edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00410e2b: mov byte ptr [0xa3afbc], dl */ W8((u32)(0xa3afbcu), (u8)r_edx);
L_00410e31:; BB(0x00410e31);
    /* 00410e31: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00410e34: jne 0x410e4c */ if (!fZ) goto L_00410e4c;
L_00410e36:; BB(0x00410e36);
    /* 00410e36: mov dword ptr [0xa3afcc], 0x424f3333 */ W32((u32)(0xa3afccu), 0x424f3333u);
    /* 00410e40: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 00410e43: or edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00410e46: mov byte ptr [0xa3afbc], dl */ W8((u32)(0xa3afbcu), (u8)r_edx);
L_00410e4c:; BB(0x00410e4c);
    /* 00410e4c: test dl, 8 */ {  u32 a = (u8)r_edx; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00410e4f: jne 0x410e6f */ if (!fZ) goto L_00410e6f;
L_00410e51:; BB(0x00410e51);
    /* 00410e51: fld dword ptr [0x8fa8cc] */ FPUSH(R_F32((u32)(0x8fa8ccu)));
    /* 00410e57: fadd dword ptr [0xa3afc4] */ ST(0) = ST(0) + R_F32((u32)(0xa3afc4u));
    /* 00410e5d: fstp dword ptr [0xa3afd0] */ W_F32((u32)(0xa3afd0u), ST(0)); FPOP();
    /* 00410e63: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 00410e66: or edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00410e69: mov byte ptr [0xa3afbc], dl */ W8((u32)(0xa3afbcu), (u8)r_edx);
L_00410e6f:; BB(0x00410e6f);
    /* 00410e6f: test dl, 0x10 */ {  u32 a = (u8)r_edx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00410e72: jne 0x410e8a */ if (!fZ) goto L_00410e8a;
L_00410e74:; BB(0x00410e74);
    /* 00410e74: mov dword ptr [0xa3afd4], 0xbf2ccccd */ W32((u32)(0xa3afd4u), 0xbf2ccccdu);
    /* 00410e7e: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 00410e81: or edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00410e84: mov byte ptr [0xa3afbc], dl */ W8((u32)(0xa3afbcu), (u8)r_edx);
L_00410e8a:; BB(0x00410e8a);
    /* 00410e8a: test dl, 0x20 */ {  u32 a = (u8)r_edx; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00410e8d: jne 0x410ea5 */ if (!fZ) goto L_00410ea5;
L_00410e8f:; BB(0x00410e8f);
    /* 00410e8f: mov dword ptr [0xa3afd8], 0xc0a00000 */ W32((u32)(0xa3afd8u), 0xc0a00000u);
    /* 00410e99: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 00410e9c: or edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00410e9f: mov byte ptr [0xa3afbc], dl */ W8((u32)(0xa3afbcu), (u8)r_edx);
L_00410ea5:; BB(0x00410ea5);
    /* 00410ea5: test dl, 0x40 */ {  u32 a = (u8)r_edx; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00410ea8: jne 0x410ec0 */ if (!fZ) goto L_00410ec0;
L_00410eaa:; BB(0x00410eaa);
    /* 00410eaa: mov dword ptr [0xa3afdc], 0x42340000 */ W32((u32)(0xa3afdcu), 0x42340000u);
    /* 00410eb4: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 00410eb7: or edx, 0x40 */ {  u32 a = r_edx; u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00410eba: mov byte ptr [0xa3afbc], dl */ W8((u32)(0xa3afbcu), (u8)r_edx);
L_00410ec0:; BB(0x00410ec0);
    /* 00410ec0: test edx, 0x80 */ {  u32 a = r_edx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00410ec6: jne 0x410f3a */ if (!fZ) goto L_00410f3a;
L_00410ec8:; BB(0x00410ec8);
    /* 00410ec8: mov eax, dword ptr [0xa3afc8] */ r_eax = R32((u32)(0xa3afc8u));
    /* 00410ecd: mov ebp, dword ptr [0xa3afd4] */ r_ebp = R32((u32)(0xa3afd4u));
    /* 00410ed3: mov edi, dword ptr [0xa3afd8] */ r_edi = R32((u32)(0xa3afd8u));
    /* 00410ed9: mov ecx, dword ptr [0xa3afcc] */ r_ecx = R32((u32)(0xa3afccu));
    /* 00410edf: or edx, 0xffffff80 */ {  u32 a = r_edx; u32 b = 0xffffff80u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00410ee2: mov dword ptr [0xa3afe0], eax */ W32((u32)(0xa3afe0u), r_eax);
    /* 00410ee7: mov dword ptr [0xa3afe4], ebp */ W32((u32)(0xa3afe4u), r_ebp);
    /* 00410eed: mov dword ptr [0xa3afe8], edi */ W32((u32)(0xa3afe8u), r_edi);
    /* 00410ef3: mov dword ptr [0xa3afec], ecx */ W32((u32)(0xa3afecu), r_ecx);
    /* 00410ef9: mov dword ptr [0xa3aff0], ebp */ W32((u32)(0xa3aff0u), r_ebp);
    /* 00410eff: mov ebp, dword ptr [0xa3afd0] */ r_ebp = R32((u32)(0xa3afd0u));
    /* 00410f05: mov dword ptr [0xa3aff4], edi */ W32((u32)(0xa3aff4u), r_edi);
    /* 00410f0b: mov edi, dword ptr [0xa3afdc] */ r_edi = R32((u32)(0xa3afdcu));
    /* 00410f11: mov dword ptr [0xa3aff8], ecx */ W32((u32)(0xa3aff8u), r_ecx);
    /* 00410f17: mov dword ptr [0xa3affc], ebp */ W32((u32)(0xa3affcu), r_ebp);
    /* 00410f1d: mov dword ptr [0xa3b000], edi */ W32((u32)(0xa3b000u), r_edi);
    /* 00410f23: mov dword ptr [0xa3b004], eax */ W32((u32)(0xa3b004u), r_eax);
    /* 00410f28: mov dword ptr [0xa3b008], ebp */ W32((u32)(0xa3b008u), r_ebp);
    /* 00410f2e: mov dword ptr [0xa3b00c], edi */ W32((u32)(0xa3b00cu), r_edi);
    /* 00410f34: mov byte ptr [0xa3afbc], dl */ W8((u32)(0xa3afbcu), (u8)r_edx);
L_00410f3a:; BB(0x00410f3a);
    /* 00410f3a: push 0x60 */ { u32 v = 0x60u; r_esp -= 4; W32(r_esp, v); }
    /* 00410f3c: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00410f3e: push 0x9a34f0 */ { u32 v = 0x9a34f0u; r_esp -= 4; W32(r_esp, v); }
    /* 00410f43: call 0x82c0d8 */ r_esp -= 4; W32(r_esp, 0x410f48u); f_0082c0d8();
    /* 00410f48: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00410f4b: fld dword ptr [ebx + 0x24] */ FPUSH(R_F32((u32)(r_ebx+0x24u)));
    /* 00410f4e: fcom dword ptr [0x8fa8bc] */ fx_compare(ST(0), R_F32((u32)(0x8fa8bcu))); 
    /* 00410f54: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00410f56: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00410f57: jbe 0x41104b */ if ((fC||fZ)) goto L_0041104b;
L_00410f5d:; BB(0x00410f5d);
    /* 00410f5d: movzx eax, byte ptr [0xa3afc0] */ r_eax = (u32)R8((u32)(0xa3afc0u));
    /* 00410f64: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00410f66: jne 0x410fc2 */ if (!fZ) goto L_00410fc2;
L_00410f68:; BB(0x00410f68);
    /* 00410f68: mov dword ptr [0xa3b010], 0x43af0000 */ W32((u32)(0xa3b010u), 0x43af0000u);
    /* 00410f72: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00410f77: mov byte ptr [0xa3afc0], al */ W8((u32)(0xa3afc0u), (u8)r_eax);
    /* 00410f7c: mov dword ptr [0xa3b014], 0 */ W32((u32)(0xa3b014u), 0x0u);
    /* 00410f86: mov dword ptr [0xa3b018], 0x44200000 */ W32((u32)(0xa3b018u), 0x44200000u);
    /* 00410f90: mov dword ptr [0xa3b01c], 0 */ W32((u32)(0xa3b01cu), 0x0u);
    /* 00410f9a: mov dword ptr [0xa3b020], 0x44200000 */ W32((u32)(0xa3b020u), 0x44200000u);
    /* 00410fa4: mov dword ptr [0xa3b024], 0x44160000 */ W32((u32)(0xa3b024u), 0x44160000u);
    /* 00410fae: mov dword ptr [0xa3b028], 0x43af0000 */ W32((u32)(0xa3b028u), 0x43af0000u);
    /* 00410fb8: mov dword ptr [0xa3b02c], 0x44160000 */ W32((u32)(0xa3b02cu), 0x44160000u);
L_00410fc2:; BB(0x00410fc2);
    /* 00410fc2: mov edx, dword ptr [0x8fa84c] */ r_edx = R32((u32)(0x8fa84cu));
    /* 00410fc8: mov ecx, dword ptr [0x8fa850] */ r_ecx = R32((u32)(0x8fa850u));
    /* 00410fce: mov ebx, dword ptr [0x8fa854] */ r_ebx = R32((u32)(0x8fa854u));
    /* 00410fd4: mov ebp, dword ptr [0x8fa858] */ r_ebp = R32((u32)(0x8fa858u));
    /* 00410fda: fld dword ptr [0x8fa8b8] */ FPUSH(R_F32((u32)(0x8fa8b8u)));
    /* 00410fe0: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00410fe2: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 00410fe6: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 00410feb: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00410ff0: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00410ff4: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 00410ff8: fistp qword ptr [esp + 0x20] */ W64((u32)(r_esp+0x20u), (u64)fx_int64(ST(0))); FPOP();
    /* 00410ffc: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00411000: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 00411004: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00411007: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 0041100b: shl eax, 0x18 */ { u32 c = (24u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0041100e: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 00411012: mov dword ptr [esp + 0xc], ebp */ W32((u32)(r_esp+0xcu), r_ebp);
    /* 00411016: mov dword ptr [0xa3b030], eax */ W32((u32)(0xa3b030u), r_eax);
    /* 0041101b: mov dword ptr [0xa3b034], eax */ W32((u32)(0xa3b034u), r_eax);
    /* 00411020: mov dword ptr [0xa3b038], eax */ W32((u32)(0xa3b038u), r_eax);
    /* 00411025: mov dword ptr [0xa3b03c], eax */ W32((u32)(0xa3b03cu), r_eax);
    /* 0041102a: lea edi, [esp] */ r_edi = (u32)(r_esp);
    /* 0041102d: push 0x60 */ { u32 v = 0x60u; r_esp -= 4; W32(r_esp, v); }
    /* 0041102f: push 0xc0000000 */ { u32 v = 0xc0000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00411034: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00411036: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00411037: call 0x82b5d8 */ r_esp -= 4; W32(r_esp, 0x41103cu); f_0082b5d8();
    /* 0041103c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0041103f:; BB(0x0041103f);
    /* 0041103f: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x411044u); f_0082dab0();
    /* 00411044: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00411047: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00411048: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00411049: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0041104a: ret  */ FN_RET(0x00410dd8); r_esp += 4; return;
L_0041104b:; BB(0x0041104b);
    /* 0041104b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0041104d: jmp 0x41103f */ goto L_0041103f;
}

