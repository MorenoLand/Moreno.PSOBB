#include "protos.h"

void f_00765024(void) /* sub_765024 */
{
    FN_ENTER(0x00765024);
    /* 00765024: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00765025: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00765028: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0076502a: mov eax, dword ptr [0xa9b070] */ r_eax = R32((u32)(0xa9b070u));
    /* 0076502f: test eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00765034: je 0x76503d */ if (fZ) goto L_0076503d;
L_00765036:; BB(0x00765036);
    /* 00765036: mov eax, 1 */ r_eax = 0x1u;
    /* 0076503b: jmp 0x76503f */ goto L_0076503f;
L_0076503d:; BB(0x0076503d);
    /* 0076503d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0076503f:; BB(0x0076503f);
    /* 0076503f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00765041: je 0x765065 */ if (fZ) goto L_00765065;
L_00765043:; BB(0x00765043);
    /* 00765043: mov eax, dword ptr [ebx + 0x384] */ r_eax = R32((u32)(r_ebx+0x384u));
    /* 00765049: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076504b: jne 0x765065 */ if (!fZ) goto L_00765065;
L_0076504d:; BB(0x0076504d);
    /* 0076504d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0076504f: mov ecx, dword ptr [ebx + 0x37c] */ r_ecx = R32((u32)(r_ebx+0x37cu));
    /* 00765055: call 0x767a28 */ r_esp -= 4; W32(r_esp, 0x76505au); f_00767a28();
    /* 0076505a: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0076505d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076505e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00765060: call 0x770b58 */ r_esp -= 4; W32(r_esp, 0x765065u); f_00770b58();
L_00765065:; BB(0x00765065);
    /* 00765065: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00765067: call 0x7650e4 */ r_esp -= 4; W32(r_esp, 0x76506cu); f_007650e4();
    /* 0076506c: fld dword ptr [0x9760b8] */ FPUSH(R_F32((u32)(0x9760b8u)));
    /* 00765072: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 00765075: fld dword ptr [ebx + 0x3c] */ FPUSH(R_F32((u32)(r_ebx+0x3cu)));
    /* 00765078: mov edx, dword ptr [ebx + 0x40] */ r_edx = R32((u32)(r_ebx+0x40u));
    /* 0076507b: fst dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0));
    /* 0076507f: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00765081: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00765085: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00765087: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0076508a: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0076508e: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00765091: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00765093: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00765094: call 0x7b4c58 */ r_esp -= 4; W32(r_esp, 0x765099u); f_007b4c58();
    /* 00765099: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076509b: jne 0x7650ad */ if (!fZ) goto L_007650ad;
L_0076509d:; BB(0x0076509d);
    /* 0076509d: fld dword ptr [0x9760b4] */ FPUSH(R_F32((u32)(0x9760b4u)));
    /* 007650a3: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 007650ab: jmp 0x7650b1 */ goto L_007650b1;
L_007650ad:; BB(0x007650ad);
    /* 007650ad: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
L_007650b1:; BB(0x007650b1);
    /* 007650b1: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 007650b5: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 007650b7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007650b9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007650ba: jae 0x7650c9 */ if (!fC) goto L_007650c9;
L_007650bc:; BB(0x007650bc);
    /* 007650bc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007650be: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007650c0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007650c2: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x7650c7u); f_007b52ec();
    /* 007650c7: jmp 0x7650d4 */ goto L_007650d4;
L_007650c9:; BB(0x007650c9);
    /* 007650c9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007650cb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007650cd: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007650cf: call 0x7b52c4 */ r_esp -= 4; W32(r_esp, 0x7650d4u); f_007b52c4();
L_007650d4:; BB(0x007650d4);
    /* 007650d4: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007650d6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007650d7: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x7650dcu); f_006946a8();
    /* 007650dc: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007650df: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007650e0: ret  */ FN_RET(0x00765024); r_esp += 4; return;
}

void f_007650e4(void) /* sub_7650E4 */
{
    FN_ENTER(0x007650e4);
    /* 007650e4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007650e5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 007650e7: mov ecx, dword ptr [ebx + 0x380] */ r_ecx = R32((u32)(r_ebx+0x380u));
    /* 007650ed: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 007650f0: mov dword ptr [ebx + 0x38], eax */ W32((u32)(r_ebx+0x38u), r_eax);
    /* 007650f3: mov edx, dword ptr [ecx + 0x34] */ r_edx = R32((u32)(r_ecx+0x34u));
    /* 007650f6: mov dword ptr [ebx + 0x3c], edx */ W32((u32)(r_ebx+0x3cu), r_edx);
    /* 007650f9: mov eax, dword ptr [ecx + 0x38] */ r_eax = R32((u32)(r_ecx+0x38u));
    /* 007650fc: mov dword ptr [ebx + 0x40], eax */ W32((u32)(r_ebx+0x40u), r_eax);
    /* 007650ff: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00765101: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x765106u); f_0078730c();
    /* 00765106: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00765107: mov eax, dword ptr [ebx + 0x300] */ r_eax = R32((u32)(r_ebx+0x300u));
    /* 0076510d: mov edx, dword ptr [ebx + 0x304] */ r_edx = R32((u32)(r_ebx+0x304u));
    /* 00765113: mov dword ptr [ebx + 0x74], eax */ W32((u32)(r_ebx+0x74u), r_eax);
    /* 00765116: mov eax, dword ptr [ebx + 0x308] */ r_eax = R32((u32)(r_ebx+0x308u));
    /* 0076511c: mov dword ptr [ebx + 0x78], edx */ W32((u32)(r_ebx+0x78u), r_edx);
    /* 0076511f: mov dword ptr [ebx + 0x7c], eax */ W32((u32)(r_ebx+0x7cu), r_eax);
    /* 00765122: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x765127u); f_007b999c();
    /* 00765127: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00765128: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00765129: ret  */ FN_RET(0x007650e4); r_esp += 4; return;
}

void f_0076512c(void) /* sub_76512C */
{
    FN_ENTER(0x0076512c);
    /* 0076512c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0076512d: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0076512f: mov eax, dword ptr [ebp + 0x384] */ r_eax = R32((u32)(r_ebp+0x384u));
    /* 00765135: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00765137: je 0x76513b */ if (fZ) goto L_0076513b;
L_00765139:; BB(0x00765139);
    /* 00765139: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0076513a: ret  */ FN_RET(0x0076512c); r_esp += 4; return;
L_0076513b:; BB(0x0076513b);
    /* 0076513b: mov eax, dword ptr [0xa9afe0] */ r_eax = R32((u32)(0xa9afe0u));
    /* 00765140: mov edx, dword ptr [0xa9b074] */ r_edx = R32((u32)(0xa9b074u));
    /* 00765146: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00765149: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076514c: je 0x765190 */ if (fZ) goto L_00765190;
L_0076514e:; BB(0x0076514e);
    /* 0076514e: mov dword ptr [0xa9afe0], eax */ W32((u32)(0xa9afe0u), r_eax);
L_00765153:; BB(0x00765153);
    /* 00765153: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00765155: call 0x7651e8 */ r_esp -= 4; W32(r_esp, 0x76515au); f_007651e8();
    /* 0076515a: mov eax, dword ptr [0xa9afe0] */ r_eax = R32((u32)(0xa9afe0u));
    /* 0076515f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00765161: jle 0x76517d */ if ((fZ||fS!=fO)) goto L_0076517d;
L_00765163:; BB(0x00765163);
    /* 00765163: mov edx, dword ptr [ebp + 0x37c] */ r_edx = R32((u32)(r_ebp+0x37cu));
    /* 00765169: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 0076516c: or eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00765171: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
L_00765174:; BB(0x00765174);
    /* 00765174: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00765176: call 0x765218 */ r_esp -= 4; W32(r_esp, 0x76517bu); f_00765218();
    /* 0076517b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0076517c: ret  */ FN_RET(0x0076512c); r_esp += 4; return;
L_0076517d:; BB(0x0076517d);
    /* 0076517d: mov edx, dword ptr [ebp + 0x37c] */ r_edx = R32((u32)(r_ebp+0x37cu));
    /* 00765183: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 00765186: or eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0076518b: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 0076518e: jmp 0x765174 */ goto L_00765174;
L_00765190:; BB(0x00765190);
    /* 00765190: mov ecx, dword ptr [0xa9b070] */ r_ecx = R32((u32)(0xa9b070u));
    /* 00765196: test ecx, 0x400 */ {  u32 a = r_ecx; u32 b = 0x400u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076519c: je 0x7651a5 */ if (fZ) goto L_007651a5;
L_0076519e:; BB(0x0076519e);
    /* 0076519e: mov edx, 1 */ r_edx = 0x1u;
    /* 007651a3: jmp 0x7651a7 */ goto L_007651a7;
L_007651a5:; BB(0x007651a5);
    /* 007651a5: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_007651a7:; BB(0x007651a7);
    /* 007651a7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007651a9: jne 0x7651dc */ if (!fZ) goto L_007651dc;
L_007651ab:; BB(0x007651ab);
    /* 007651ab: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007651ad: jne 0x7651d2 */ if (!fZ) goto L_007651d2;
L_007651af:; BB(0x007651af);
    /* 007651af: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 007651b2: mov dword ptr [0xa9afe0], 1 */ W32((u32)(0xa9afe0u), 0x1u);
    /* 007651bc: or ecx, 0x800 */ {  u32 a = r_ecx; u32 b = 0x800u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 007651c2: and eax, 0xfffff5ff */ {  u32 a = r_eax; u32 b = 0xfffff5ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007651c7: mov dword ptr [0xa9b070], ecx */ W32((u32)(0xa9b070u), r_ecx);
    /* 007651cd: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 007651d0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007651d1: ret  */ FN_RET(0x0076512c); r_esp += 4; return;
L_007651d2:; BB(0x007651d2);
    /* 007651d2: mov dword ptr [0xa9afe0], eax */ W32((u32)(0xa9afe0u), r_eax);
    /* 007651d7: jmp 0x765153 */ goto L_00765153;
L_007651dc:; BB(0x007651dc);
    /* 007651dc: mov dword ptr [0xa9afe0], eax */ W32((u32)(0xa9afe0u), r_eax);
    /* 007651e1: jmp 0x765153 */ goto L_00765153;
}

void f_007651e8(void) /* sub_7651E8 */
{
    FN_ENTER(0x007651e8);
    /* 007651e8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007651e9: mov ebp, ecx */ r_ebp = r_ecx;
    /* 007651eb: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007651ed: call 0x765200 */ r_esp -= 4; W32(r_esp, 0x7651f2u); f_00765200();
    /* 007651f2: mov dword ptr [ebp + 0x384], 1 */ W32((u32)(r_ebp+0x384u), 0x1u);
    /* 007651fc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007651fd: ret  */ FN_RET(0x007651e8); r_esp += 4; return;
}

void f_00765200(void) /* sub_765200 */
{
    FN_ENTER(0x00765200);
    /* 00765200: mov eax, dword ptr [ecx + 0x384] */ r_eax = R32((u32)(r_ecx+0x384u));
    /* 00765206: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00765208: je 0x76520b */ if (fZ) goto L_0076520b;
L_0076520a:; BB(0x0076520a);
    /* 0076520a: ret  */ FN_RET(0x00765200); r_esp += 4; return;
L_0076520b:; BB(0x0076520b);
    /* 0076520b: push 0xa000000 */ { u32 v = 0xa000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00765210: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00765212: call 0x7b52c4 */ r_esp -= 4; W32(r_esp, 0x765217u); f_007b52c4();
    /* 00765217: ret  */ FN_RET(0x00765200); r_esp += 4; return;
}

void f_00765218(void) /* sub_765218 */
{
    FN_ENTER(0x00765218);
    /* 00765218: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00765219: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0076521c: mov edi, ecx */ r_edi = r_ecx;
    /* 0076521e: mov ecx, dword ptr [0xa48a54] */ r_ecx = R32((u32)(0xa48a54u));
    /* 00765224: mov eax, dword ptr [ecx + 0x178] */ r_eax = R32((u32)(r_ecx+0x178u));
    /* 0076522a: mov edx, dword ptr [ecx + 0x17c] */ r_edx = R32((u32)(r_ecx+0x17cu));
    /* 00765230: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00765233: mov eax, dword ptr [ecx + 0x180] */ r_eax = R32((u32)(r_ecx+0x180u));
    /* 00765239: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0076523d: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00765241: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00765244: mov eax, dword ptr [edi + 0x38] */ r_eax = R32((u32)(r_edi+0x38u));
    /* 00765247: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0076524b: mov eax, dword ptr [edi + 0x3c] */ r_eax = R32((u32)(r_edi+0x3cu));
    /* 0076524e: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00765252: mov eax, dword ptr [edi + 0x40] */ r_eax = R32((u32)(r_edi+0x40u));
    /* 00765255: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00765259: mov eax, dword ptr [edi + 0xa4] */ r_eax = R32((u32)(r_edi+0xa4u));
    /* 0076525f: fld dword ptr [eax + 0xc] */ FPUSH(R_F32((u32)(r_eax+0xcu)));
    /* 00765262: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 00765266: add edi, 0x38 */ {  u32 a = r_edi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00765269: mov edx, edi */ r_edx = r_edi;
    /* 0076526b: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x765270u); f_0082f9c4();
    /* 00765270: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00765273: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x765278u); f_0082df08();
    /* 00765278: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0076527a: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0076527d: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 00765281: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 00765283: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00765287: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 0076528b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0076528d: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0076528f: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00765291: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00765293: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00765295: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00765298: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0076529c: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 007652a0: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 007652a4: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 007652a7: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x7652acu); f_0082ebac();
    /* 007652ac: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 007652b0: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 007652b2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007652b3: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x7652b8u); f_0050b510();
    /* 007652b8: lea eax, [esp + 0x14] */ r_eax = (u32)(r_esp+0x14u);
    /* 007652bc: push 0x46 */ { u32 v = 0x46u; r_esp -= 4; W32(r_esp, v); }
    /* 007652be: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007652bf: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x7652c4u); f_0050b510();
    /* 007652c4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007652c6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007652c8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007652c9: push 0xaf */ { u32 v = 0xafu; r_esp -= 4; W32(r_esp, v); }
    /* 007652ce: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x7652d3u); f_00814298();
    /* 007652d3: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007652d6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007652d7: ret  */ FN_RET(0x00765218); r_esp += 4; return;
}

void f_007652d8(void) /* sub_7652D8 */
{
    FN_ENTER(0x007652d8);
    /* 007652d8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007652d9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 007652db: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007652dd: call 0x779bb0 */ r_esp -= 4; W32(r_esp, 0x7652e2u); f_00779bb0();
    /* 007652e2: mov dword ptr [ebx + 0x384], 0 */ W32((u32)(r_ebx+0x384u), 0x0u);
    /* 007652ec: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007652ee: call 0x7652f8 */ r_esp -= 4; W32(r_esp, 0x7652f3u); f_007652f8();
    /* 007652f3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007652f4: ret  */ FN_RET(0x007652d8); r_esp += 4; return;
}

void f_007652f8(void) /* sub_7652F8 */
{
    FN_ENTER(0x007652f8);
    /* 007652f8: mov eax, dword ptr [ecx + 0x384] */ r_eax = R32((u32)(r_ecx+0x384u));
    /* 007652fe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00765300: je 0x765303 */ if (fZ) goto L_00765303;
L_00765302:; BB(0x00765302);
    /* 00765302: ret  */ FN_RET(0x007652f8); r_esp += 4; return;
L_00765303:; BB(0x00765303);
    /* 00765303: push 0xa000000 */ { u32 v = 0xa000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00765308: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0076530a: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x76530fu); f_007b52ec();
    /* 0076530f: ret  */ FN_RET(0x007652f8); r_esp += 4; return;
}

void f_00765310(void) /* sub_765310 */
{
    FN_ENTER(0x00765310);
    /* 00765310: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00765311: mov ebp, esp */ r_ebp = r_esp;
    /* 00765313: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00765315: push 0x8f37ca */ { u32 v = 0x8f37cau; r_esp -= 4; W32(r_esp, v); }
    /* 0076531a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00765320: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00765321: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00765328: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0076532b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0076532e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00765331: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00765334: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00765337: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00765339: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 00765340: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x765345u); f_005caba4();
    /* 00765345: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00765346: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00765349: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076534b: je 0x7653e0 */ if (fZ) goto L_007653e0;
L_00765351:; BB(0x00765351);
    /* 00765351: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 00765358: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0076535f: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00765362: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00765365: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00765366: call 0x787a4c */ r_esp -= 4; W32(r_esp, 0x76536bu); f_00787a4c();
    /* 0076536b: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0076536e: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 00765375: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_00765378:; BB(0x00765378);
    /* 00765378: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0076537f: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 00765386: push 0x388 */ { u32 v = 0x388u; r_esp -= 4; W32(r_esp, v); }
    /* 0076538b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x765390u); f_005caba4();
    /* 00765390: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00765391: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00765394: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00765396: je 0x7653dc */ if (fZ) goto L_007653dc;
L_00765398:; BB(0x00765398);
    /* 00765398: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0076539f: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 007653a6: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 007653a9: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 007653ac: movzx edx, word ptr [ebp + 8] */ r_edx = (u32)R16((u32)(r_ebp+0x8u));
    /* 007653b0: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 007653b3: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 007653b6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007653b7: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 007653ba: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007653bb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007653bc: call 0x7653e8 */ r_esp -= 4; W32(r_esp, 0x7653c1u); f_007653e8();
    /* 007653c1: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 007653c4: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_007653cb:; BB(0x007653cb);
    /* 007653cb: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 007653ce: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007653d1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007653d8: mov esp, ebp */ r_esp = r_ebp;
    /* 007653da: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007653db: ret  */ FN_RET(0x00765310); r_esp += 4; return;
L_007653dc:; BB(0x007653dc);
    /* 007653dc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007653de: jmp 0x7653cb */ goto L_007653cb;
L_007653e0:; BB(0x007653e0);
    /* 007653e0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007653e2: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 007653e5: jmp 0x765378 */ goto L_00765378;
}

void f_0076534a(void)
{
    FN_ENTER(0x0076534a);
    /* 0076534a: ror byte ptr [edi], 0x84 */ { u32 ad = (u32)(r_edi); u32 c = (4u) & 31; u32 a = R8(ad); u32 r = a; if (c) { { u32 k = c % 8; r = k ? (((a >> k) | (a << (8 - k))) & 0xffu) : a; } W8(ad, r);  } }
    /* 0076534d: pop dword ptr [eax] */ { u32 v = R32(r_esp); r_esp += 4; W32((u32)(r_eax), v); }
    /* 0076534f: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00765351: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 00765358: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0076535f: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00765362: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00765365: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00765366: call 0x787a4c */ r_esp -= 4; W32(r_esp, 0x76536bu); f_00787a4c();
    /* 0076536b: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0076536e: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 00765375: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00765378: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0076537f: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 00765386: push 0x388 */ { u32 v = 0x388u; r_esp -= 4; W32(r_esp, v); }
    /* 0076538b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x765390u); f_005caba4();
    /* 00765390: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00765391: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00765394: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00765396: je 0x7653dc */ if (fZ) goto L_007653dc;
L_00765398:; BB(0x00765398);
    /* 00765398: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0076539f: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 007653a6: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 007653a9: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 007653ac: movzx edx, word ptr [ebp + 8] */ r_edx = (u32)R16((u32)(r_ebp+0x8u));
    /* 007653b0: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 007653b3: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 007653b6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007653b7: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 007653ba: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007653bb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007653bc: call 0x7653e8 */ r_esp -= 4; W32(r_esp, 0x7653c1u); f_007653e8();
    /* 007653c1: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 007653c4: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_007653cb:; BB(0x007653cb);
    /* 007653cb: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 007653ce: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007653d1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007653d8: mov esp, ebp */ r_esp = r_ebp;
    /* 007653da: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007653db: ret  */ FN_RET(0x0076534a); r_esp += 4; return;
L_007653dc:; BB(0x007653dc);
    /* 007653dc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007653de: jmp 0x7653cb */ goto L_007653cb;
}

void f_007653e8(void) /* sub_7653E8 */
{
    FN_ENTER(0x007653e8);
    /* 007653e8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007653e9: mov ebp, esp */ r_ebp = r_esp;
    /* 007653eb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007653ed: push 0x8f37e4 */ { u32 v = 0x8f37e4u; r_esp -= 4; W32(r_esp, v); }
    /* 007653f2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007653f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007653f9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00765400: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00765403: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00765406: mov dword ptr [ebp - 0x2c], edi */ W32((u32)(r_ebp+0xffffffd4u), r_edi);
    /* 00765409: mov dword ptr [ebp - 0x28], esi */ W32((u32)(r_ebp+0xffffffd8u), r_esi);
    /* 0076540c: mov dword ptr [ebp - 0x24], ebx */ W32((u32)(r_ebp+0xffffffdcu), r_ebx);
    /* 0076540f: movzx eax, word ptr [ebp + 0xc] */ r_eax = (u32)R16((u32)(r_ebp+0xcu));
    /* 00765413: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00765416: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00765419: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 0076541c: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0076541f: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 00765422: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00765425: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00765428: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 0076542b: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0076542e: call 0x7865e8 */ r_esp -= 4; W32(r_esp, 0x765433u); f_007865e8();
    /* 00765433: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0076543a: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0076543d: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00765440: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00765443: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 00765446: mov dword ptr [ecx + 0x380], edx */ W32((u32)(r_ecx+0x380u), r_edx);
    /* 0076544c: mov word ptr [ecx + 0x1c], bx */ W16((u32)(r_ecx+0x1cu), (u16)r_ebx);
    /* 00765450: mov dword ptr [ecx], 0xb43200 */ W32((u32)(r_ecx), 0xb43200u);
    /* 00765456: mov eax, dword ptr [0x9f5a44] */ r_eax = R32((u32)(0x9f5a44u));
    /* 0076545b: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0076545e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00765461: mov dword ptr [ecx + 0x384], 0 */ W32((u32)(r_ecx+0x384u), 0x0u);
    /* 0076546b: mov dword ptr [ecx + 0x37c], eax */ W32((u32)(r_ecx+0x37cu), r_eax);
    /* 00765471: mov word ptr [ecx + 0x2c], si */ W16((u32)(r_ecx+0x2cu), (u16)r_esi);
    /* 00765475: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00765477: push 0x9f5a48 */ { u32 v = 0x9f5a48u; r_esp -= 4; W32(r_esp, v); }
    /* 0076547c: movzx edi, word ptr [eax + 0x28] */ r_edi = (u32)R16((u32)(r_eax+0x28u));
    /* 00765480: mov word ptr [ecx + 0x28], di */ W16((u32)(r_ecx+0x28u), (u16)r_edi);
    /* 00765484: movzx eax, word ptr [eax + 0x2a] */ r_eax = (u32)R16((u32)(r_eax+0x2au));
    /* 00765488: mov word ptr [ecx + 0x2a], ax */ W16((u32)(r_ecx+0x2au), (u16)r_eax);
    /* 0076548c: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x765491u); f_007b9a88();
    /* 00765491: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00765494: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x765499u); f_007b4f54();
    /* 00765499: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0076549c: push 0x700 */ { u32 v = 0x700u; r_esp -= 4; W32(r_esp, v); }
    /* 007654a1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007654a3: call 0x7b52c4 */ r_esp -= 4; W32(r_esp, 0x7654a8u); f_007b52c4();
    /* 007654a8: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 007654ab: call 0x7654f4 */ r_esp -= 4; W32(r_esp, 0x7654b0u); f_007654f4();
    /* 007654b0: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 007654b3: call 0x7650e4 */ r_esp -= 4; W32(r_esp, 0x7654b8u); f_007650e4();
    /* 007654b8: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 007654bb: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 007654be: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 007654c1: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 007654c4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007654c7: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007654ce: mov esp, ebp */ r_esp = r_ebp;
    /* 007654d0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007654d1: ret 0x14 */ FN_RET(0x007653e8); r_esp += 24; return;
}

void f_007654d4(void) /* sub_7654D4 */
{
    FN_ENTER(0x007654d4);
    /* 007654d4: mov dword ptr [0xa9afd4], 0x3f800000 */ W32((u32)(0xa9afd4u), 0x3f800000u);
    /* 007654de: mov dword ptr [0xa9afd8], 0x41000000 */ W32((u32)(0xa9afd8u), 0x41000000u);
    /* 007654e8: mov dword ptr [0xa9afdc], 0x3fc00000 */ W32((u32)(0xa9afdcu), 0x3fc00000u);
    /* 007654f2: ret  */ FN_RET(0x007654d4); r_esp += 4; return;
}

void f_007654f4(void) /* sub_7654F4 */
{
    FN_ENTER(0x007654f4);
    /* 007654f4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007654f5: mov ebp, ecx */ r_ebp = r_ecx;
    /* 007654f7: mov eax, dword ptr [ebp + 0x37c] */ r_eax = R32((u32)(r_ebp+0x37cu));
    /* 007654fd: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007654ff: push dword ptr [eax + 0x320] */ { u32 v = R32((u32)(r_eax+0x320u)); r_esp -= 4; W32(r_esp, v); }
    /* 00765505: push dword ptr [eax + 0x31c] */ { u32 v = R32((u32)(r_eax+0x31cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0076550b: push dword ptr [eax + 0x2b4] */ { u32 v = R32((u32)(r_eax+0x2b4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00765511: call 0x7868f8 */ r_esp -= 4; W32(r_esp, 0x765516u); f_007868f8();
    /* 00765516: mov ecx, dword ptr [ebp + 0x37c] */ r_ecx = R32((u32)(r_ebp+0x37cu));
    /* 0076551c: call 0x787560 */ r_esp -= 4; W32(r_esp, 0x765521u); f_00787560();
    /* 00765521: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00765522: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00765524: call 0x787550 */ r_esp -= 4; W32(r_esp, 0x765529u); f_00787550();
    /* 00765529: mov ecx, dword ptr [0xa9afe0] */ r_ecx = R32((u32)(0xa9afe0u));
    /* 0076552f: movsx eax, word ptr [ebp + 0x2bc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x2bcu));
    /* 00765536: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00765537: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00765537, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00765537, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00765539: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0076553c: mov word ptr [ebp + 0x2bc], ax */ W16((u32)(r_ebp+0x2bcu), (u16)r_eax);
    /* 00765543: mov word ptr [ebp + 0x334], ax */ W16((u32)(r_ebp+0x334u), (u16)r_eax);
    /* 0076554a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0076554b: ret  */ FN_RET(0x007654f4); r_esp += 4; return;
}

void f_0076554c(void) /* sub_76554C */
{
    FN_ENTER(0x0076554c);
    /* 0076554c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0076554d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0076554f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00765551: call 0x765570 */ r_esp -= 4; W32(r_esp, 0x765556u); f_00765570();
    /* 00765556: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0076555a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0076555c: jne 0x765562 */ if (!fZ) goto L_00765562;
L_0076555e:; BB(0x0076555e);
    /* 0076555e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0076555f: ret 4 */ FN_RET(0x0076554c); r_esp += 8; return;
L_00765562:; BB(0x00765562);
    /* 00765562: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00765563: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x765568u); f_005c2f74();
    /* 00765568: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00765569: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0076556a: ret 4 */ FN_RET(0x0076554c); r_esp += 8; return;
}

void f_00765570(void) /* sub_765570 */
{
    FN_ENTER(0x00765570);
    /* 00765570: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00765571: mov ebp, esp */ r_ebp = r_esp;
    /* 00765573: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00765575: push 0x8f3800 */ { u32 v = 0x8f3800u; r_esp -= 4; W32(r_esp, v); }
    /* 0076557a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00765580: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00765581: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00765588: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0076558b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0076558e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00765591: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00765594: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00765597: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0076559a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007655a1: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 007655a4: mov esi, dword ptr [eax + 0x1c] */ r_esi = R32((u32)(r_eax+0x1cu));
    /* 007655a7: mov dword ptr [eax], 0xb43388 */ W32((u32)(r_eax), 0xb43388u);
    /* 007655ad: add esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007655b0: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007655b2: jl 0x765630 */ if ((fS!=fO)) goto L_00765630;
L_007655b4:; BB(0x007655b4);
    /* 007655b4: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
L_007655b7:; BB(0x007655b7);
    /* 007655b7: mov ecx, dword ptr [edx + esi*4] */ r_ecx = R32((u32)(r_edx+r_esi*4));
    /* 007655ba: lea ebx, [esi + esi] */ r_ebx = (u32)(r_esi+r_esi);
    /* 007655bd: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007655bf: je 0x7655ef */ if (fZ) goto L_007655ef;
L_007655c1:; BB(0x007655c1);
    /* 007655c1: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x7655c6u); f_008173b4();
    /* 007655c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007655c8: jne 0x7655d2 */ if (!fZ) goto L_007655d2;
L_007655ca:; BB(0x007655ca);
    /* 007655ca: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 007655cd: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 007655d0: jmp 0x7655ef */ goto L_007655ef;
L_007655d2:; BB(0x007655d2);
    /* 007655d2: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 007655d5: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 007655d8: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 007655db: mov ebx, dword ptr [edx + ebx*2] */ r_ebx = R32((u32)(r_edx+r_ebx*2));
    /* 007655de: movzx ecx, word ptr [ebx + 8] */ r_ecx = (u32)R16((u32)(r_ebx+0x8u));
    /* 007655e2: or ecx, 0xffff0001 */ {  u32 a = r_ecx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 007655e8: mov word ptr [ebx + 8], cx */ W16((u32)(r_ebx+0x8u), (u16)r_ecx);
    /* 007655ec: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
L_007655ef:; BB(0x007655ef);
    /* 007655ef: add esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007655f2: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007655f4: jge 0x7655b7 */ if ((fS==fO)) goto L_007655b7;
L_007655f6:; BB(0x007655f6);
    /* 007655f6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007655f8: je 0x76560b */ if (fZ) goto L_0076560b;
L_007655fa:; BB(0x007655fa);
    /* 007655fa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007655fb: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x765600u); f_00857e98();
    /* 00765600: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00765601: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00765604: mov dword ptr [eax + 0x20], 0 */ W32((u32)(r_eax+0x20u), 0x0u);
L_0076560b:; BB(0x0076560b);
    /* 0076560b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00765612: mov ecx, eax */ r_ecx = r_eax;
    /* 00765614: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x765619u); f_008171e8();
    /* 00765619: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0076561c: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0076561f: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00765622: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00765625: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0076562c: mov esp, ebp */ r_esp = r_ebp;
    /* 0076562e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0076562f: ret  */ FN_RET(0x00765570); r_esp += 4; return;
L_00765630:; BB(0x00765630);
    /* 00765630: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 00765633: jmp 0x7655f6 */ goto L_007655f6;
}

void f_00765638(void) /* sub_765638 */
{
    FN_ENTER(0x00765638);
    /* 00765638: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00765639: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0076563c: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0076563e: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 00765642: mov dword ptr [ebx + 0x1c], 0 */ W32((u32)(r_ebx+0x1cu), 0x0u);
    /* 00765649: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0076564b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0076564d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0076564f: jl 0x765662 */ if ((fS!=fO)) goto L_00765662;
L_00765651:; BB(0x00765651);
    /* 00765651: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
L_00765655:; BB(0x00765655);
    /* 00765655: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00765658: mov dword ptr [ebx + 0x1c], eax */ W32((u32)(r_ebx+0x1cu), r_eax);
    /* 0076565b: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 0076565e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00765660: jge 0x765655 */ if ((fS==fO)) goto L_00765655;
L_00765662:; BB(0x00765662);
    /* 00765662: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00765664: jne 0x76567d */ if (!fZ) goto L_0076567d;
L_00765666:; BB(0x00765666);
    /* 00765666: movzx edx, word ptr [ebx + 8] */ r_edx = (u32)R16((u32)(r_ebx+0x8u));
    /* 0076566a: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00765670: mov word ptr [ebx + 8], dx */ W16((u32)(r_ebx+0x8u), (u16)r_edx);
    /* 00765674: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00765676: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00765679: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0076567a: ret 8 */ FN_RET(0x00765638); r_esp += 12; return;
L_0076567d:; BB(0x0076567d);
    /* 0076567d: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0076567f: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00765681: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00765682: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x765687u); f_008581c5();
    /* 00765687: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00765688: mov dword ptr [ebx + 0x20], eax */ W32((u32)(r_ebx+0x20u), r_eax);
    /* 0076568b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076568d: je 0x7656df */ if (fZ) goto L_007656df;
L_0076568f:; BB(0x0076568f);
    /* 0076568f: mov edx, dword ptr [ebx + 0x1c] */ r_edx = R32((u32)(r_ebx+0x1cu));
    /* 00765692: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00765694: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00765696: jle 0x7656d3 */ if ((fZ||fS!=fO)) goto L_007656d3;
L_00765698:; BB(0x00765698);
    /* 00765698: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 0076569c: mov esi, ebx */ r_esi = r_ebx;
    /* 0076569e: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 007656a1: mov edi, dword ptr [esp + 0x14] */ r_edi = R32((u32)(r_esp+0x14u));
    /* 007656a5: mov ebx, eax */ r_ebx = r_eax;
L_007656a7:; BB(0x007656a7);
    /* 007656a7: mov ecx, dword ptr [0xa9b068] */ r_ecx = R32((u32)(0xa9b068u));
    /* 007656ad: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007656af: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007656b0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007656b1: push dword ptr [edi + ebx*4] */ { u32 v = R32((u32)(r_edi+r_ebx*4)); r_esp -= 4; W32(r_esp, v); }
    /* 007656b4: push dword ptr [esp + 0x1c] */ { u32 v = R32((u32)(r_esp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 007656b8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007656b9: call 0x661448 */ r_esp -= 4; W32(r_esp, 0x7656beu); f_00661448();
    /* 007656be: mov edx, dword ptr [esi + 0x20] */ r_edx = R32((u32)(r_esi+0x20u));
    /* 007656c1: mov dword ptr [edx + ebx*4], eax */ W32((u32)(r_edx+r_ebx*4), r_eax);
    /* 007656c4: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007656c7: cmp ebx, dword ptr [esi + 0x1c] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esi+0x1cu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007656ca: jl 0x7656a7 */ if ((fS!=fO)) goto L_007656a7;
L_007656cc:; BB(0x007656cc);
    /* 007656cc: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 007656d0: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
L_007656d3:; BB(0x007656d3);
    /* 007656d3: mov eax, 1 */ r_eax = 0x1u;
    /* 007656d8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007656db: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007656dc: ret 8 */ FN_RET(0x00765638); r_esp += 12; return;
L_007656df:; BB(0x007656df);
    /* 007656df: mov dword ptr [ebx + 0x1c], 0 */ W32((u32)(r_ebx+0x1cu), 0x0u);
    /* 007656e6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007656e8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007656eb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007656ec: ret 8 */ FN_RET(0x00765638); r_esp += 12; return;
}

void f_007656f0(void) /* sub_7656F0 */
{
    FN_ENTER(0x007656f0);
    /* 007656f0: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 007656f4: mov eax, dword ptr [ecx + 0x20] */ r_eax = R32((u32)(r_ecx+0x20u));
    /* 007656f7: mov ecx, dword ptr [eax + edx*4] */ r_ecx = R32((u32)(r_eax+r_edx*4));
    /* 007656fa: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007656fc: je 0x76570f */ if (fZ) goto L_0076570f;
L_007656fe:; BB(0x007656fe);
    /* 007656fe: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x765703u); f_008173b4();
    /* 00765703: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00765705: je 0x76570f */ if (fZ) goto L_0076570f;
L_00765707:; BB(0x00765707);
    /* 00765707: mov eax, 1 */ r_eax = 0x1u;
    /* 0076570c: ret 4 */ FN_RET(0x007656f0); r_esp += 8; return;
L_0076570f:; BB(0x0076570f);
    /* 0076570f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00765711: ret 4 */ FN_RET(0x007656f0); r_esp += 8; return;
}

void f_00765714(void) /* sub_765714 */
{
    FN_ENTER(0x00765714);
    /* 00765714: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00765717: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 0076571a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0076571c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0076571e: jle 0x76575f */ if ((fZ||fS!=fO)) goto L_0076575f;
L_00765720:; BB(0x00765720);
    /* 00765720: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 00765724: mov ebx, eax */ r_ebx = r_eax;
    /* 00765726: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 00765729: mov esi, ecx */ r_esi = r_ecx;
L_0076572b:; BB(0x0076572b);
    /* 0076572b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0076572c: mov ecx, esi */ r_ecx = r_esi;
    /* 0076572e: call 0x7656f0 */ r_esp -= 4; W32(r_esp, 0x765733u); f_007656f0();
    /* 00765733: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00765735: je 0x765750 */ if (fZ) goto L_00765750;
L_00765737:; BB(0x00765737);
    /* 00765737: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x76573cu); f_0082d7b0();
    /* 0076573c: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00765740: mov edx, dword ptr [esi + 0x20] */ r_edx = R32((u32)(r_esi+0x20u));
    /* 00765743: mov ecx, dword ptr [edx + ebx*4] */ r_ecx = R32((u32)(r_edx+r_ebx*4));
    /* 00765746: call 0x661124 */ r_esp -= 4; W32(r_esp, 0x76574bu); f_00661124();
    /* 0076574b: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x765750u); f_0082da80();
L_00765750:; BB(0x00765750);
    /* 00765750: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00765753: cmp ebx, dword ptr [esi + 0x1c] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esi+0x1cu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00765756: jl 0x76572b */ if ((fS!=fO)) goto L_0076572b;
L_00765758:; BB(0x00765758);
    /* 00765758: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 0076575c: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
L_0076575f:; BB(0x0076575f);
    /* 0076575f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00765762: ret 4 */ FN_RET(0x00765714); r_esp += 8; return;
}

void f_00765768(void) /* sub_765768 */
{
    FN_ENTER(0x00765768);
    /* 00765768: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0076576b: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 0076576e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00765770: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00765772: jle 0x7657c4 */ if ((fZ||fS!=fO)) goto L_007657c4;
L_00765774:; BB(0x00765774);
    /* 00765774: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 00765778: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 0076577c: mov esi, eax */ r_esi = r_eax;
    /* 0076577e: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 00765781: mov edi, ecx */ r_edi = r_ecx;
L_00765783:; BB(0x00765783);
    /* 00765783: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00765784: mov ecx, edi */ r_ecx = r_edi;
    /* 00765786: call 0x7656f0 */ r_esp -= 4; W32(r_esp, 0x76578bu); f_007656f0();
    /* 0076578b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076578d: je 0x7657b1 */ if (fZ) goto L_007657b1;
L_0076578f:; BB(0x0076578f);
    /* 0076578f: push 0x16ef */ { u32 v = 0x16efu; r_esp -= 4; W32(r_esp, v); }
    /* 00765794: mov ebx, dword ptr [edi + 0x20] */ r_ebx = R32((u32)(r_edi+0x20u));
    /* 00765797: mov ebx, dword ptr [ebx + esi*4] */ r_ebx = R32((u32)(r_ebx+r_esi*4));
    /* 0076579a: lea edx, [ebx + 0x38] */ r_edx = (u32)(r_ebx+0x38u);
    /* 0076579d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0076579e: call 0x780630 */ r_esp -= 4; W32(r_esp, 0x7657a3u); f_00780630();
    /* 007657a3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007657a6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007657a8: je 0x7657b1 */ if (fZ) goto L_007657b1;
L_007657aa:; BB(0x007657aa);
    /* 007657aa: mov dword ptr [ebx + 0x3c], 0 */ W32((u32)(r_ebx+0x3cu), 0x0u);
L_007657b1:; BB(0x007657b1);
    /* 007657b1: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007657b4: cmp esi, dword ptr [edi + 0x1c] */ {  u32 a = r_esi; u32 b = R32((u32)(r_edi+0x1cu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007657b7: jl 0x765783 */ if ((fS!=fO)) goto L_00765783;
L_007657b9:; BB(0x007657b9);
    /* 007657b9: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 007657bd: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 007657c1: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
L_007657c4:; BB(0x007657c4);
    /* 007657c4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007657c7: ret  */ FN_RET(0x00765768); r_esp += 4; return;
}

void f_007657c8(void) /* sub_7657C8 */
{
    FN_ENTER(0x007657c8);
    /* 007657c8: mov dword ptr [0xa9afe8], 0 */ W32((u32)(0xa9afe8u), 0x0u);
    /* 007657d2: mov dword ptr [0xa9afec], ecx */ W32((u32)(0xa9afecu), r_ecx);
    /* 007657d8: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 007657dc: call 0x82fabc */ r_esp -= 4; W32(r_esp, 0x7657e1u); f_0082fabc();
    /* 007657e1: ret 4 */ FN_RET(0x007657c8); r_esp += 8; return;
}

void f_007657e4(void) /* sub_7657E4 */
{
    FN_ENTER(0x007657e4);
    /* 007657e4: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007657e6: call 0x82fabc */ r_esp -= 4; W32(r_esp, 0x7657ebu); f_0082fabc();
    /* 007657eb: mov dword ptr [0xa9afec], 0 */ W32((u32)(0xa9afecu), 0x0u);
    /* 007657f5: ret  */ FN_RET(0x007657e4); r_esp += 4; return;
}

void f_007657f8(void) /* sub_7657F8 */
{
    FN_ENTER(0x007657f8);
    /* 007657f8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007657f9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007657fa: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007657fb: mov esi, ecx */ r_esi = r_ecx;
    /* 007657fd: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 00765801: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
    /* 00765805: mov ecx, esi */ r_ecx = r_esi;
    /* 00765807: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00765808: call 0x7656f0 */ r_esp -= 4; W32(r_esp, 0x76580du); f_007656f0();
    /* 0076580d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0076580f: jne 0x765817 */ if (!fZ) goto L_00765817;
L_00765811:; BB(0x00765811);
    /* 00765811: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00765812: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00765813: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00765814: ret 8 */ FN_RET(0x007657f8); r_esp += 12; return;
L_00765817:; BB(0x00765817);
    /* 00765817: mov eax, dword ptr [esi + 0x20] */ r_eax = R32((u32)(r_esi+0x20u));
    /* 0076581a: mov ebp, dword ptr [eax + ebp*4] */ r_ebp = R32((u32)(r_eax+r_ebp*4));
    /* 0076581d: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0076581f: mov dword ptr [ebp + 0x38], edx */ W32((u32)(r_ebp+0x38u), r_edx);
    /* 00765822: mov ecx, dword ptr [ebx + 4] */ r_ecx = R32((u32)(r_ebx+0x4u));
    /* 00765825: mov dword ptr [ebp + 0x3c], ecx */ W32((u32)(r_ebp+0x3cu), r_ecx);
    /* 00765828: mov ebx, dword ptr [ebx + 8] */ r_ebx = R32((u32)(r_ebx+0x8u));
    /* 0076582b: mov dword ptr [ebp + 0x40], ebx */ W32((u32)(r_ebp+0x40u), r_ebx);
    /* 0076582e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0076582f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00765830: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00765831: ret 8 */ FN_RET(0x007657f8); r_esp += 12; return;
}

void f_00765834(void) /* sub_765834 */
{
    FN_ENTER(0x00765834);
    /* 00765834: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00765835: mov ebx, esp */ r_ebx = r_esp;
    /* 00765837: and esp, 0xfffffff0 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 0076583a: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0076583d: mov eax, dword ptr [ebx + 0xc] */ r_eax = R32((u32)(r_ebx+0xcu));
    /* 00765840: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00765842: je 0x7658de */ if (fZ) goto L_007658de;
L_00765848:; BB(0x00765848);
    /* 00765848: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0076584a: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0076584d: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00765850: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 00765854: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 00765857: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0076585b: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 0076585e: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 00765862: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 00765865: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 00765869: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 0076586c: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 00765870: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 00765873: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 00765877: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 0076587a: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 0076587e: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 00765881: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 00765885: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 00765888: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 0076588c: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 0076588f: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 00765893: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 00765896: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 0076589a: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 0076589d: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 007658a1: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 007658a4: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 007658a8: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 007658ab: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
    /* 007658af: mov eax, dword ptr [eax + 0x3c] */ r_eax = R32((u32)(r_eax+0x3cu));
    /* 007658b2: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
L_007658b6:; BB(0x007658b6);
    /* 007658b6: call 0x4d455c */ r_esp -= 4; W32(r_esp, 0x7658bbu); f_004d455c();
    /* 007658bb: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 007658be: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007658bf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007658c0: call 0x83a668 */ r_esp -= 4; W32(r_esp, 0x7658c5u); f_0083a668();
    /* 007658c5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007658c8: mov ecx, dword ptr [0xa9afec] */ r_ecx = R32((u32)(0xa9afecu));
    /* 007658ce: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 007658d1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007658d2: push dword ptr [ebx + 8] */ { u32 v = R32((u32)(r_ebx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 007658d5: call 0x7658e8 */ r_esp -= 4; W32(r_esp, 0x7658dau); f_007658e8();
    /* 007658da: mov esp, ebx */ r_esp = r_ebx;
    /* 007658dc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007658dd: ret  */ FN_RET(0x00765834); r_esp += 4; return;
L_007658de:; BB(0x007658de);
    /* 007658de: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 007658e1: call 0x831650 */ r_esp -= 4; W32(r_esp, 0x7658e6u); f_00831650();
    /* 007658e6: jmp 0x7658b6 */ goto L_007658b6;
}

void f_007658e8(void) /* sub_7658E8 */
{
    FN_ENTER(0x007658e8);
    /* 007658e8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007658e9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007658ea: mov edi, ecx */ r_edi = r_ecx;
    /* 007658ec: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 007658f0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007658f1: mov ecx, edi */ r_ecx = r_edi;
    /* 007658f3: call 0x7656f0 */ r_esp -= 4; W32(r_esp, 0x7658f8u); f_007656f0();
    /* 007658f8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007658fa: jne 0x765901 */ if (!fZ) goto L_00765901;
L_007658fc:; BB(0x007658fc);
    /* 007658fc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007658fd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007658fe: ret 8 */ FN_RET(0x007658e8); r_esp += 12; return;
L_00765901:; BB(0x00765901);
    /* 00765901: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x765906u); f_0082d7b0();
    /* 00765906: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0076590a: mov eax, dword ptr [edi + 0x20] */ r_eax = R32((u32)(r_edi+0x20u));
    /* 0076590d: mov ecx, dword ptr [eax + esi*4] */ r_ecx = R32((u32)(r_eax+r_esi*4));
    /* 00765910: call 0x661124 */ r_esp -= 4; W32(r_esp, 0x765915u); f_00661124();
    /* 00765915: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x76591au); f_0082da80();
    /* 0076591a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0076591b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0076591c: ret 8 */ FN_RET(0x007658e8); r_esp += 12; return;
}

void f_00765920(void) /* sub_765920 */
{
    FN_ENTER(0x00765920);
    /* 00765920: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00765921: mov ebx, esp */ r_ebx = r_esp;
    /* 00765923: and esp, 0xfffffff0 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 00765926: sub esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00765929: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 0076592c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076592e: je 0x765a08 */ if (fZ) goto L_00765a08;
L_00765934:; BB(0x00765934);
    /* 00765934: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00765936: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00765939: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0076593c: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 00765940: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 00765943: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00765947: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 0076594a: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 0076594e: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 00765951: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 00765955: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 00765958: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 0076595c: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 0076595f: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 00765963: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 00765966: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 0076596a: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 0076596d: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 00765971: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 00765974: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 00765978: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 0076597b: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 0076597f: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 00765982: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 00765986: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 00765989: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 0076598d: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 00765990: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 00765994: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 00765997: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
    /* 0076599b: mov eax, dword ptr [eax + 0x3c] */ r_eax = R32((u32)(r_eax+0x3cu));
    /* 0076599e: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
L_007659a2:; BB(0x007659a2);
    /* 007659a2: call 0x4d455c */ r_esp -= 4; W32(r_esp, 0x7659a7u); f_004d455c();
    /* 007659a7: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 007659aa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007659ab: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007659ac: call 0x83a668 */ r_esp -= 4; W32(r_esp, 0x7659b1u); f_0083a668();
    /* 007659b1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007659b4: mov ecx, dword ptr [0xa9afec] */ r_ecx = R32((u32)(0xa9afecu));
    /* 007659ba: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 007659bd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007659bf: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007659c1: jle 0x765a04 */ if ((fZ||fS!=fO)) goto L_00765a04;
L_007659c3:; BB(0x007659c3);
    /* 007659c3: mov dword ptr [esp + 0x44], esi */ W32((u32)(r_esp+0x44u), r_esi);
    /* 007659c7: mov esi, eax */ r_esi = r_eax;
    /* 007659c9: mov dword ptr [esp + 0x40], edi */ W32((u32)(r_esp+0x40u), r_edi);
    /* 007659cd: mov edi, ecx */ r_edi = r_ecx;
L_007659cf:; BB(0x007659cf);
    /* 007659cf: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007659d0: mov ecx, edi */ r_ecx = r_edi;
    /* 007659d2: call 0x7656f0 */ r_esp -= 4; W32(r_esp, 0x7659d7u); f_007656f0();
    /* 007659d7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007659d9: je 0x7659f4 */ if (fZ) goto L_007659f4;
L_007659db:; BB(0x007659db);
    /* 007659db: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x7659e0u); f_0082d7b0();
    /* 007659e0: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 007659e3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007659e4: mov eax, dword ptr [edi + 0x20] */ r_eax = R32((u32)(r_edi+0x20u));
    /* 007659e7: mov ecx, dword ptr [eax + esi*4] */ r_ecx = R32((u32)(r_eax+r_esi*4));
    /* 007659ea: call 0x661124 */ r_esp -= 4; W32(r_esp, 0x7659efu); f_00661124();
    /* 007659ef: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x7659f4u); f_0082da80();
L_007659f4:; BB(0x007659f4);
    /* 007659f4: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007659f7: cmp esi, dword ptr [edi + 0x1c] */ {  u32 a = r_esi; u32 b = R32((u32)(r_edi+0x1cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007659fa: jl 0x7659cf */ if ((fS!=fO)) goto L_007659cf;
L_007659fc:; BB(0x007659fc);
    /* 007659fc: mov esi, dword ptr [esp + 0x44] */ r_esi = R32((u32)(r_esp+0x44u));
    /* 00765a00: mov edi, dword ptr [esp + 0x40] */ r_edi = R32((u32)(r_esp+0x40u));
L_00765a04:; BB(0x00765a04);
    /* 00765a04: mov esp, ebx */ r_esp = r_ebx;
    /* 00765a06: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00765a07: ret  */ FN_RET(0x00765920); r_esp += 4; return;
L_00765a08:; BB(0x00765a08);
    /* 00765a08: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00765a0b: call 0x831650 */ r_esp -= 4; W32(r_esp, 0x765a10u); f_00831650();
    /* 00765a10: jmp 0x7659a2 */ goto L_007659a2;
}

void f_00765a14(void) /* sub_765A14 */
{
    FN_ENTER(0x00765a14);
    /* 00765a14: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00765a15: mov edi, ecx */ r_edi = r_ecx;
    /* 00765a17: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00765a1b: mov ecx, edi */ r_ecx = r_edi;
    /* 00765a1d: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x765a22u); f_008193cc();
    /* 00765a22: mov dword ptr [edi], 0xb43388 */ W32((u32)(r_edi), 0xb43388u);
    /* 00765a28: mov edx, dword ptr [0x9f5a74] */ r_edx = R32((u32)(0x9f5a74u));
    /* 00765a2e: mov dword ptr [edi + 4], edx */ W32((u32)(r_edi+0x4u), r_edx);
    /* 00765a31: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00765a33: mov dword ptr [edi + 0x1c], eax */ W32((u32)(r_edi+0x1cu), r_eax);
    /* 00765a36: mov dword ptr [edi + 0x20], eax */ W32((u32)(r_edi+0x20u), r_eax);
    /* 00765a39: mov eax, edi */ r_eax = r_edi;
    /* 00765a3b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00765a3c: ret 4 */ FN_RET(0x00765a14); r_esp += 8; return;
}

void f_00765a40(void) /* sub_765A40 */
{
    FN_ENTER(0x00765a40);
    /* 00765a40: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00765a43: mov eax, dword ptr [ecx + 0x1c] */ r_eax = R32((u32)(r_ecx+0x1cu));
    /* 00765a46: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00765a48: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00765a4a: jle 0x765a8a */ if ((fZ||fS!=fO)) goto L_00765a8a;
L_00765a4c:; BB(0x00765a4c);
    /* 00765a4c: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 00765a50: mov ebx, edx */ r_ebx = r_edx;
    /* 00765a52: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 00765a55: mov esi, ecx */ r_esi = r_ecx;
L_00765a57:; BB(0x00765a57);
    /* 00765a57: mov edx, dword ptr [esi + 0x20] */ r_edx = R32((u32)(r_esi+0x20u));
    /* 00765a5a: mov ecx, dword ptr [edx + ebx*4] */ r_ecx = R32((u32)(r_edx+r_ebx*4));
    /* 00765a5d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00765a5f: je 0x765a7c */ if (fZ) goto L_00765a7c;
L_00765a61:; BB(0x00765a61);
    /* 00765a61: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x765a66u); f_008173b4();
    /* 00765a66: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00765a68: jne 0x765a79 */ if (!fZ) goto L_00765a79;
L_00765a6a:; BB(0x00765a6a);
    /* 00765a6a: mov eax, dword ptr [esi + 0x20] */ r_eax = R32((u32)(r_esi+0x20u));
    /* 00765a6d: mov dword ptr [eax + ebx*4], 0 */ W32((u32)(r_eax+r_ebx*4), 0x0u);
    /* 00765a74: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 00765a77: jmp 0x765a7c */ goto L_00765a7c;
L_00765a79:; BB(0x00765a79);
    /* 00765a79: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
L_00765a7c:; BB(0x00765a7c);
    /* 00765a7c: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00765a7f: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00765a81: jl 0x765a57 */ if ((fS!=fO)) goto L_00765a57;
L_00765a83:; BB(0x00765a83);
    /* 00765a83: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 00765a87: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
L_00765a8a:; BB(0x00765a8a);
    /* 00765a8a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00765a8d: ret  */ FN_RET(0x00765a40); r_esp += 4; return;
}

void f_00765a90(void) /* sub_765A90 */
{
    FN_ENTER(0x00765a90);
    /* 00765a90: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00765a91: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00765a92: mov edi, ecx */ r_edi = r_ecx;
    /* 00765a94: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 00765a98: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00765a99: mov ecx, edi */ r_ecx = r_edi;
    /* 00765a9b: call 0x7656f0 */ r_esp -= 4; W32(r_esp, 0x765aa0u); f_007656f0();
    /* 00765aa0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00765aa2: jne 0x765aab */ if (!fZ) goto L_00765aab;
L_00765aa4:; BB(0x00765aa4);
    /* 00765aa4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00765aa6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00765aa7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00765aa8: ret 4 */ FN_RET(0x00765a90); r_esp += 8; return;
L_00765aab:; BB(0x00765aab);
    /* 00765aab: mov eax, dword ptr [edi + 0x20] */ r_eax = R32((u32)(r_edi+0x20u));
    /* 00765aae: mov edx, dword ptr [eax + ebx*4] */ r_edx = R32((u32)(r_eax+r_ebx*4));
    /* 00765ab1: mov ecx, dword ptr [edx + 0x9c] */ r_ecx = R32((u32)(r_edx+0x9cu));
    /* 00765ab7: test cl, 2 */ {  u32 a = (u8)r_ecx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00765aba: je 0x765ac6 */ if (fZ) goto L_00765ac6;
L_00765abc:; BB(0x00765abc);
    /* 00765abc: mov eax, 1 */ r_eax = 0x1u;
    /* 00765ac1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00765ac2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00765ac3: ret 4 */ FN_RET(0x00765a90); r_esp += 8; return;
L_00765ac6:; BB(0x00765ac6);
    /* 00765ac6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00765ac8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00765ac9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00765aca: ret 4 */ FN_RET(0x00765a90); r_esp += 8; return;
}

void f_00765ad0(void) /* sub_765AD0 */
{
    FN_ENTER(0x00765ad0);
    /* 00765ad0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00765ad1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00765ad3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00765ad5: call 0x765af4 */ r_esp -= 4; W32(r_esp, 0x765adau); f_00765af4();
    /* 00765ada: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00765ade: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00765ae0: jne 0x765ae6 */ if (!fZ) goto L_00765ae6;
L_00765ae2:; BB(0x00765ae2);
    /* 00765ae2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00765ae3: ret 4 */ FN_RET(0x00765ad0); r_esp += 8; return;
L_00765ae6:; BB(0x00765ae6);
    /* 00765ae6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00765ae7: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x765aecu); f_005c2f74();
    /* 00765aec: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00765aed: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00765aee: ret 4 */ FN_RET(0x00765ad0); r_esp += 8; return;
}

void f_00765af4(void) /* sub_765AF4 */
{
    FN_ENTER(0x00765af4);
    /* 00765af4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00765af5: mov ebp, esp */ r_ebp = r_esp;
    /* 00765af7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00765af9: push 0x8f381c */ { u32 v = 0x8f381cu; r_esp -= 4; W32(r_esp, v); }
    /* 00765afe: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00765b04: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00765b05: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00765b0c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00765b0f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00765b12: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00765b15: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00765b18: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00765b1b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00765b1e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00765b21: mov dword ptr [ecx], 0xb43410 */ W32((u32)(r_ecx), 0xb43410u);
    /* 00765b27: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00765b2e: call 0x765570 */ r_esp -= 4; W32(r_esp, 0x765b33u); f_00765570();
    /* 00765b33: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00765b36: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00765b3d: mov esp, ebp */ r_esp = r_ebp;
    /* 00765b3f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00765b40: ret  */ FN_RET(0x00765af4); r_esp += 4; return;
}

void f_00765b44(void) /* sub_765B44 */
{
    FN_ENTER(0x00765b44);
    /* 00765b44: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00765b45: mov eax, dword ptr [0xa9afe8] */ r_eax = R32((u32)(0xa9afe8u));
    /* 00765b4a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00765b4c: je 0x765be7 */ if (fZ) goto L_00765be7;
L_00765b52:; BB(0x00765b52);
    /* 00765b52: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00765b55: je 0x765bbd */ if (fZ) goto L_00765bbd;
L_00765b57:; BB(0x00765b57);
    /* 00765b57: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00765b5a: jne 0x765b8c */ if (!fZ) goto L_00765b8c;
L_00765b5c:; BB(0x00765b5c);
    /* 00765b5c: fld dword ptr [0xa9aff8] */ FPUSH(R_F32((u32)(0xa9aff8u)));
    /* 00765b62: fdiv dword ptr [0x976114] */ ST(0) = ST(0) / R_F32((u32)(0x976114u));
    /* 00765b68: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00765b6b: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00765b6e: mov dword ptr [esp + 4], 0x3f800000 */ W32((u32)(r_esp+0x4u), 0x3f800000u);
    /* 00765b76: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00765b78: mov dword ptr [esp + 8], 0x3f800000 */ W32((u32)(r_esp+0x8u), 0x3f800000u);
    /* 00765b80: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x765b85u); f_0082fa0c();
    /* 00765b85: mov eax, dword ptr [0xa9afe8] */ r_eax = R32((u32)(0xa9afe8u));
    /* 00765b8a: jmp 0x765bdd */ goto L_00765bdd;
L_00765b8c:; BB(0x00765b8c);
    /* 00765b8c: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00765b8f: jne 0x765bdd */ if (!fZ) goto L_00765bdd;
L_00765b91:; BB(0x00765b91);
    /* 00765b91: fld dword ptr [0xa9aff8] */ FPUSH(R_F32((u32)(0xa9aff8u)));
    /* 00765b97: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00765b9a: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 00765ba1: fchs  */ ST(0) = -ST(0);
    /* 00765ba3: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00765ba7: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 00765baf: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00765bb1: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x765bb6u); f_00830b74();
    /* 00765bb6: mov eax, dword ptr [0xa9afe8] */ r_eax = R32((u32)(0xa9afe8u));
    /* 00765bbb: jmp 0x765bdd */ goto L_00765bdd;
L_00765bbd:; BB(0x00765bbd);
    /* 00765bbd: push dword ptr [0xa9aff8] */ { u32 v = R32((u32)(0xa9aff8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00765bc3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00765bc5: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00765bc7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00765bc9: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x765bceu); f_00830b74();
    /* 00765bce: mov eax, dword ptr [0xa9affc] */ r_eax = R32((u32)(0xa9affcu));
    /* 00765bd3: call 0x765c1c */ r_esp -= 4; W32(r_esp, 0x765bd8u); f_00765c1c();
    /* 00765bd8: mov eax, dword ptr [0xa9afe8] */ r_eax = R32((u32)(0xa9afe8u));
L_00765bdd:; BB(0x00765bdd);
    /* 00765bdd: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00765be0: mov dword ptr [0xa9afe8], eax */ W32((u32)(0xa9afe8u), r_eax);
    /* 00765be5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00765be6: ret  */ FN_RET(0x00765b44); r_esp += 4; return;
L_00765be7:; BB(0x00765be7);
    /* 00765be7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00765be9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00765bea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00765beb: call 0x765834 */ r_esp -= 4; W32(r_esp, 0x765bf0u); f_00765834();
    /* 00765bf0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00765bf2: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00765bf4: call 0x765834 */ r_esp -= 4; W32(r_esp, 0x765bf9u); f_00765834();
    /* 00765bf9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00765bfb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00765bfd: call 0x765834 */ r_esp -= 4; W32(r_esp, 0x765c02u); f_00765834();
    /* 00765c02: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00765c05: mov eax, dword ptr [0xa9b000] */ r_eax = R32((u32)(0xa9b000u));
    /* 00765c0a: call 0x765c1c */ r_esp -= 4; W32(r_esp, 0x765c0fu); f_00765c1c();
    /* 00765c0f: mov eax, dword ptr [0xa9afe8] */ r_eax = R32((u32)(0xa9afe8u));
    /* 00765c14: jmp 0x765bdd */ goto L_00765bdd;
}

void f_00765c1c(void) /* sub_765C1C */
{
    FN_ENTER(0x00765c1c);
    /* 00765c1c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00765c1d: mov ebx, esp */ r_ebx = r_esp;
    /* 00765c1f: and esp, 0xfffffff0 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 00765c22: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00765c23: sub esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00765c26: mov esi, eax */ r_esi = r_eax;
    /* 00765c28: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x765c2du); f_0082d7b0();
    /* 00765c2d: call 0x4d455c */ r_esp -= 4; W32(r_esp, 0x765c32u); f_004d455c();
    /* 00765c32: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00765c33: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00765c35: call 0x83a668 */ r_esp -= 4; W32(r_esp, 0x765c3au); f_0083a668();
    /* 00765c3a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00765c3d: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00765c40: call 0x831650 */ r_esp -= 4; W32(r_esp, 0x765c45u); f_00831650();
    /* 00765c45: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 00765c49: mov dword ptr [esi], edx */ W32((u32)(r_esi), r_edx);
    /* 00765c4b: mov ecx, dword ptr [esp + 0x34] */ r_ecx = R32((u32)(r_esp+0x34u));
    /* 00765c4f: mov dword ptr [esi + 4], ecx */ W32((u32)(r_esi+0x4u), r_ecx);
    /* 00765c52: mov edx, dword ptr [esp + 0x38] */ r_edx = R32((u32)(r_esp+0x38u));
    /* 00765c56: mov dword ptr [esi + 8], edx */ W32((u32)(r_esi+0x8u), r_edx);
    /* 00765c59: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x765c5eu); f_0082da80();
    /* 00765c5e: add esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00765c61: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00765c62: mov esp, ebx */ r_esp = r_ebx;
    /* 00765c64: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00765c65: ret  */ FN_RET(0x00765c1c); r_esp += 4; return;
}

void f_00765c68(void) /* sub_765C68 */
{
    FN_ENTER(0x00765c68);
    /* 00765c68: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00765c69: mov ebp, esp */ r_ebp = r_esp;
    /* 00765c6b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00765c6d: push 0x8f3838 */ { u32 v = 0x8f3838u; r_esp -= 4; W32(r_esp, v); }
    /* 00765c72: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00765c78: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00765c79: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00765c80: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00765c83: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00765c86: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00765c89: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00765c8c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00765c8f: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00765c92: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00765c95: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00765c98: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00765c9b: call 0x765a14 */ r_esp -= 4; W32(r_esp, 0x765ca0u); f_00765a14();
    /* 00765ca0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00765ca7: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00765caa: mov dword ptr [ebx], 0xb43410 */ W32((u32)(r_ebx), 0xb43410u);
    /* 00765cb0: mov eax, dword ptr [0x9f5a78] */ r_eax = R32((u32)(0x9f5a78u));
    /* 00765cb5: mov ecx, dword ptr [0xa9aff4] */ r_ecx = R32((u32)(0xa9aff4u));
    /* 00765cbb: mov dword ptr [ebx + 4], eax */ W32((u32)(r_ebx+0x4u), r_eax);
    /* 00765cbe: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00765cc0: je 0x765d56 */ if (fZ) goto L_00765d56;
L_00765cc6:; BB(0x00765cc6);
    /* 00765cc6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00765cc8: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x765ccdu); f_005b8610();
    /* 00765ccd: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00765cd0: mov ecx, dword ptr [0xa9aff4] */ r_ecx = R32((u32)(0xa9aff4u));
    /* 00765cd6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00765cd8: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 00765cdb: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x765ce0u); f_005b8624();
    /* 00765ce0: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00765ce3: mov ecx, dword ptr [0xa9aff4] */ r_ecx = R32((u32)(0xa9aff4u));
    /* 00765ce9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00765ceb: mov dword ptr [edx + 0x28], eax */ W32((u32)(r_edx+0x28u), r_eax);
    /* 00765cee: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x765cf3u); f_005b8638();
    /* 00765cf3: push 0x9f5a9c */ { u32 v = 0x9f5a9cu; r_esp -= 4; W32(r_esp, v); }
    /* 00765cf8: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00765cfb: mov dword ptr [ecx + 0x2c], eax */ W32((u32)(r_ecx+0x2cu), r_eax);
    /* 00765cfe: mov dword ptr [ecx + 0x30], 0 */ W32((u32)(r_ecx+0x30u), 0x0u);
    /* 00765d05: fild dword ptr [eax + 4] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x4u)));
    /* 00765d08: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00765d0b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00765d0e: mov dword ptr [ecx + 0x50], 0 */ W32((u32)(r_ecx+0x50u), 0x0u);
    /* 00765d15: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00765d18: fadd dword ptr [edx*4 + 0x9760f8] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x9760f8u));
    /* 00765d1f: fadd dword ptr [0x97610c] */ ST(0) = ST(0) + R_F32((u32)(0x97610cu));
    /* 00765d25: fstp dword ptr [ecx + 0x34] */ W_F32((u32)(r_ecx+0x34u), ST(0)); FPOP();
    /* 00765d28: mov dword ptr [ecx + 0x58], 0 */ W32((u32)(r_ecx+0x58u), 0x0u);
    /* 00765d2f: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00765d31: mov dword ptr [ecx + 0x54], eax */ W32((u32)(r_ecx+0x54u), r_eax);
    /* 00765d34: mov dword ptr [ecx + 0x5c], 0xffffffff */ W32((u32)(r_ecx+0x5cu), 0xffffffffu);
    /* 00765d3b: call 0x765638 */ r_esp -= 4; W32(r_esp, 0x765d40u); f_00765638();
    /* 00765d40: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00765d43: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00765d46: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00765d49: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00765d50: mov esp, ebp */ r_esp = r_ebp;
    /* 00765d52: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00765d53: ret 8 */ FN_RET(0x00765c68); r_esp += 12; return;
L_00765d56:; BB(0x00765d56);
    /* 00765d56: movzx edx, word ptr [ebx + 8] */ r_edx = (u32)R16((u32)(r_ebx+0x8u));
    /* 00765d5a: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00765d60: mov word ptr [ebx + 8], dx */ W16((u32)(r_ebx+0x8u), (u16)r_edx);
    /* 00765d64: mov eax, ebx */ r_eax = r_ebx;
    /* 00765d66: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00765d69: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00765d6c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00765d73: mov esp, ebp */ r_esp = r_ebp;
    /* 00765d75: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00765d76: ret 8 */ FN_RET(0x00765c68); r_esp += 12; return;
}

void f_00765d7c(void) /* sub_765D7C */
{
    FN_ENTER(0x00765d7c);
    /* 00765d7c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00765d7d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00765d7e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00765d7f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00765d80: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00765d83: mov edi, ecx */ r_edi = r_ecx;
    /* 00765d85: mov ecx, edi */ r_ecx = r_edi;
    /* 00765d87: call 0x765a40 */ r_esp -= 4; W32(r_esp, 0x765d8cu); f_00765a40();
    /* 00765d8c: fld dword ptr [0x976108] */ FPUSH(R_F32((u32)(0x976108u)));
    /* 00765d92: fadd dword ptr [edi + 0x30] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x30u));
    /* 00765d95: fcom dword ptr [edi + 0x34] */ fx_compare(ST(0), R_F32((u32)(r_edi+0x34u))); 
    /* 00765d98: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00765d9a: fstp dword ptr [edi + 0x30] */ W_F32((u32)(r_edi+0x30u), ST(0)); FPOP();
    /* 00765d9d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00765d9e: jae 0x765eba */ if (!fC) goto L_00765eba;
L_00765da4:; BB(0x00765da4);
    /* 00765da4: mov eax, dword ptr [edi + 0x5c] */ r_eax = R32((u32)(r_edi+0x5cu));
    /* 00765da7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00765da9: jl 0x765e88 */ if ((fS!=fO)) goto L_00765e88;
L_00765daf:; BB(0x00765daf);
    /* 00765daf: lea esi, [edi + 0x38] */ r_esi = (u32)(r_edi+0x38u);
L_00765db2:; BB(0x00765db2);
    /* 00765db2: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00765db5: mov eax, dword ptr [edi + 0x44] */ r_eax = R32((u32)(r_edi+0x44u));
    /* 00765db8: mov ebx, dword ptr [edi + 0x48] */ r_ebx = R32((u32)(r_edi+0x48u));
    /* 00765dbb: mov ebp, dword ptr [edi + 0x4c] */ r_ebp = R32((u32)(r_edi+0x4cu));
    /* 00765dbe: mov edx, esi */ r_edx = r_esi;
    /* 00765dc0: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00765dc3: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 00765dc7: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
    /* 00765dcb: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x765dd0u); f_0082f9c4();
    /* 00765dd0: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00765dd3: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00765dd7: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00765dd9: fmul qword ptr [0x9760f0] */ ST(0) = ST(0) * R_F64((u32)(0x9760f0u));
    /* 00765ddf: fdiv qword ptr [0x9760e8] */ ST(0) = ST(0) / R_F64((u32)(0x9760e8u));
    /* 00765de5: fnstcw word ptr [esp + 0xc] */ W16((u32)(r_esp+0xcu), fcw);
    /* 00765de9: movzx eax, word ptr [esp + 0xc] */ r_eax = (u32)R16((u32)(r_esp+0xcu));
    /* 00765dee: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00765df3: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00765df7: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 00765dfb: fistp dword ptr [esp + 0x1c] */ W32((u32)(r_esp+0x1cu), (u32)fx_int32(ST(0))); FPOP();
    /* 00765dff: fldcw word ptr [esp + 0xc] */ fcw = R16((u32)(r_esp+0xcu));
    /* 00765e03: mov ecx, edi */ r_ecx = r_edi;
    /* 00765e05: mov ebp, dword ptr [esp + 0x1c] */ r_ebp = R32((u32)(r_esp+0x1cu));
    /* 00765e09: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00765e0b: call 0x765a90 */ r_esp -= 4; W32(r_esp, 0x765e10u); f_00765a90();
    /* 00765e10: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00765e12: je 0x765e7d */ if (fZ) goto L_00765e7d;
L_00765e14:; BB(0x00765e14);
    /* 00765e14: fld dword ptr [0x976100] */ FPUSH(R_F32((u32)(0x976100u)));
    /* 00765e1a: fadd dword ptr [edi + 0x50] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x50u));
    /* 00765e1d: fstp dword ptr [edi + 0x50] */ W_F32((u32)(r_edi+0x50u), ST(0)); FPOP();
    /* 00765e20: lea ebx, [edi + 0x44] */ r_ebx = (u32)(r_edi+0x44u);
    /* 00765e23: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00765e25: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00765e26: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00765e27: call 0x77fffc */ r_esp -= 4; W32(r_esp, 0x765e2cu); f_0077fffc();
    /* 00765e2c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00765e2f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00765e31: je 0x765e61 */ if (fZ) goto L_00765e61;
L_00765e33:; BB(0x00765e33);
    /* 00765e33: push dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00765e36: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00765e37: call 0x7a8c28 */ r_esp -= 4; W32(r_esp, 0x765e3cu); f_007a8c28();
    /* 00765e3c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00765e3f: fst dword ptr [edi + 0x50] */ W_F32((u32)(r_edi+0x50u), ST(0));
    /* 00765e42: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00765e43: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00765e46: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x765e4bu); f_0082dc9c();
    /* 00765e4b: mov ecx, dword ptr [0xa9b068] */ r_ecx = R32((u32)(0xa9b068u));
    /* 00765e51: fstp dword ptr [edi + 0x50] */ W_F32((u32)(r_edi+0x50u), ST(0)); FPOP();
    /* 00765e54: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00765e56: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00765e57: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00765e59: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00765e5b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00765e5c: call 0x661448 */ r_esp -= 4; W32(r_esp, 0x765e61u); f_00661448();
L_00765e61:; BB(0x00765e61);
    /* 00765e61: mov ecx, dword ptr [0xa9b07c] */ r_ecx = R32((u32)(0xa9b07cu));
    /* 00765e67: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 00765e6f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00765e71: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00765e72: push dword ptr [edi + 0x58] */ { u32 v = R32((u32)(r_edi+0x58u)); r_esp -= 4; W32(r_esp, v); }
    /* 00765e75: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00765e76: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00765e78: call 0x768a84 */ r_esp -= 4; W32(r_esp, 0x765e7du); f_00768a84();
L_00765e7d:; BB(0x00765e7d);
    /* 00765e7d: mov dword ptr [edi + 0x58], ebp */ W32((u32)(r_edi+0x58u), r_ebp);
    /* 00765e80: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00765e83: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00765e84: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00765e85: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00765e86: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00765e87: ret  */ FN_RET(0x00765d7c); r_esp += 4; return;
L_00765e88:; BB(0x00765e88);
    /* 00765e88: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00765e8a: mov ecx, edi */ r_ecx = r_edi;
    /* 00765e8c: call 0x765a90 */ r_esp -= 4; W32(r_esp, 0x765e91u); f_00765a90();
    /* 00765e91: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00765e93: jne 0x765e9d */ if (!fZ) goto L_00765e9d;
L_00765e95:; BB(0x00765e95);
    /* 00765e95: lea esi, [edi + 0x38] */ r_esi = (u32)(r_edi+0x38u);
    /* 00765e98: jmp 0x765db2 */ goto L_00765db2;
L_00765e9d:; BB(0x00765e9d);
    /* 00765e9d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00765e9f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00765ea1: lea esi, [edi + 0x38] */ r_esi = (u32)(r_edi+0x38u);
    /* 00765ea4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00765ea5: push 0x6f8 */ { u32 v = 0x6f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00765eaa: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x765eafu); f_00814298();
    /* 00765eaf: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00765eb2: mov dword ptr [edi + 0x5c], eax */ W32((u32)(r_edi+0x5cu), r_eax);
    /* 00765eb5: jmp 0x765db2 */ goto L_00765db2;
L_00765eba:; BB(0x00765eba);
    /* 00765eba: push dword ptr [edi + 0x5c] */ { u32 v = R32((u32)(r_edi+0x5cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00765ebd: call 0x8148d4 */ r_esp -= 4; W32(r_esp, 0x765ec2u); f_008148d4();
    /* 00765ec2: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 00765ec6: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00765ecb: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 00765ecf: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00765ed2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00765ed3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00765ed4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00765ed5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00765ed6: ret  */ FN_RET(0x00765d7c); r_esp += 4; return;
}

void f_00765ed8(void) /* sub_765ED8 */
{
    FN_ENTER(0x00765ed8);
    /* 00765ed8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00765ed9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00765eda: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00765edd: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00765edf: mov ecx, dword ptr [ebp + 0x54] */ r_ecx = R32((u32)(r_ebp+0x54u));
    /* 00765ee2: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 00765ee9: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 00765ef1: mov dword ptr [esp + 8], 0x3f800000 */ W32((u32)(r_esp+0x8u), 0x3f800000u);
    /* 00765ef9: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 00765efc: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00765f00: mov eax, dword ptr [ecx + 0x34] */ r_eax = R32((u32)(r_ecx+0x34u));
    /* 00765f03: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00765f07: mov eax, dword ptr [ecx + 0x38] */ r_eax = R32((u32)(r_ecx+0x38u));
    /* 00765f0a: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00765f0e: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00765f11: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00765f12: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 00765f16: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x765f1bu); f_0082eab8();
    /* 00765f1b: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00765f1e: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00765f22: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00765f24: fmul qword ptr [0x9760e0] */ ST(0) = ST(0) * R_F64((u32)(0x9760e0u));
    /* 00765f2a: fdiv qword ptr [0x9760d8] */ ST(0) = ST(0) / R_F64((u32)(0x9760d8u));
    /* 00765f30: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 00765f34: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 00765f39: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00765f3e: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00765f42: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 00765f46: fistp dword ptr [esp + 0x28] */ W32((u32)(r_esp+0x28u), (u32)fx_int32(ST(0))); FPOP();
    /* 00765f4a: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 00765f4e: mov esi, dword ptr [esp + 0x28] */ r_esi = R32((u32)(r_esp+0x28u));
    /* 00765f52: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x765f57u); f_0082d7b0();
    /* 00765f57: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00765f5b: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x765f60u); f_0082d838();
    /* 00765f60: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00765f62: mov edx, esi */ r_edx = r_esi;
    /* 00765f64: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x765f69u); f_0082d8bc();
    /* 00765f69: mov ecx, dword ptr [ebp + 0x28] */ r_ecx = R32((u32)(r_ebp+0x28u));
    /* 00765f6c: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x765f71u); f_00829cc8();
    /* 00765f71: push 0x765b44 */ { u32 v = 0x765b44u; r_esp -= 4; W32(r_esp, v); }
    /* 00765f76: mov esi, dword ptr [ebp + 0x50] */ r_esi = R32((u32)(r_ebp+0x50u));
    /* 00765f79: lea eax, [ebp + 0x38] */ r_eax = (u32)(r_ebp+0x38u);
    /* 00765f7c: lea edx, [ebp + 0x44] */ r_edx = (u32)(r_ebp+0x44u);
    /* 00765f7f: mov dword ptr [0xa9b000], eax */ W32((u32)(0xa9b000u), r_eax);
    /* 00765f84: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00765f86: mov dword ptr [0xa9affc], edx */ W32((u32)(0xa9affcu), r_edx);
    /* 00765f8c: mov dword ptr [0xa9aff8], esi */ W32((u32)(0xa9aff8u), r_esi);
    /* 00765f92: call 0x7657c8 */ r_esp -= 4; W32(r_esp, 0x765f97u); f_007657c8();
    /* 00765f97: push dword ptr [ebp + 0x30] */ { u32 v = R32((u32)(r_ebp+0x30u)); r_esp -= 4; W32(r_esp, v); }
    /* 00765f9a: push dword ptr [ebp + 0x2c] */ { u32 v = R32((u32)(r_ebp+0x2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00765f9d: push dword ptr [ebp + 0x24] */ { u32 v = R32((u32)(r_ebp+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 00765fa0: call 0x830a28 */ r_esp -= 4; W32(r_esp, 0x765fa5u); f_00830a28();
    /* 00765fa5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00765fa8: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00765faa: call 0x7657e4 */ r_esp -= 4; W32(r_esp, 0x765fafu); f_007657e4();
    /* 00765faf: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x765fb4u); f_0082da80();
    /* 00765fb4: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00765fb7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00765fb8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00765fb9: ret  */ FN_RET(0x00765ed8); r_esp += 4; return;
}

void f_00765fbc(void) /* sub_765FBC */
{
    FN_ENTER(0x00765fbc);
    /* 00765fbc: mov ecx, dword ptr [0xa9aff4] */ r_ecx = R32((u32)(0xa9aff4u));
    /* 00765fc2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00765fc4: je 0x765fd9 */ if (fZ) goto L_00765fd9;
L_00765fc6:; BB(0x00765fc6);
    /* 00765fc6: je 0x765fcf */ if (fZ) goto L_00765fcf;
L_00765fc8:; BB(0x00765fc8);
    /* 00765fc8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00765fca: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x765fcfu); f_004066a8();
L_00765fcf:; BB(0x00765fcf);
    /* 00765fcf: mov dword ptr [0xa9aff4], 0 */ W32((u32)(0xa9aff4u), 0x0u);
L_00765fd9:; BB(0x00765fd9);
    /* 00765fd9: ret  */ FN_RET(0x00765fbc); r_esp += 4; return;
}

void f_00765fdc(void) /* sub_765FDC */
{
    FN_ENTER(0x00765fdc);
    /* 00765fdc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00765fdd: mov ebp, esp */ r_ebp = r_esp;
    /* 00765fdf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00765fe1: push 0x8f3860 */ { u32 v = 0x8f3860u; r_esp -= 4; W32(r_esp, v); }
    /* 00765fe6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00765fec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00765fed: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00765ff4: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00765ff7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00765ffa: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00765ffd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00766000: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00766003: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 00766008: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0076600f: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x766014u); f_008581c5();
    /* 00766014: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00766015: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00766018: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076601a: je 0x7660bd */ if (fZ) goto L_007660bd;
L_00766020:; BB(0x00766020);
    /* 00766020: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00766027: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0076602e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00766031: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00766033: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00766034: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00766035: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00766036: push 0x9f5a8c */ { u32 v = 0x9f5a8cu; r_esp -= 4; W32(r_esp, v); }
    /* 0076603b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0076603d: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x766042u); f_005b7a84();
    /* 00766042: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00766045: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0076604c:; BB(0x0076604c);
    /* 0076604c: mov dword ptr [0xa9aff4], edx */ W32((u32)(0xa9aff4u), r_edx);
    /* 00766052: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00766059: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076605b: je 0x76607f */ if (fZ) goto L_0076607f;
L_0076605d:; BB(0x0076605d);
    /* 0076605d: mov eax, dword ptr [edx + 0x42c] */ r_eax = R32((u32)(r_edx+0x42cu));
    /* 00766063: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00766065: je 0x76607f */ if (fZ) goto L_0076607f;
L_00766067:; BB(0x00766067);
    /* 00766067: mov eax, dword ptr [edx + 0x430] */ r_eax = R32((u32)(r_edx+0x430u));
    /* 0076606d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0076606f: je 0x76607f */ if (fZ) goto L_0076607f;
L_00766071:; BB(0x00766071);
    /* 00766071: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00766074: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0076607b: mov esp, ebp */ r_esp = r_ebp;
    /* 0076607d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0076607e: ret  */ FN_RET(0x00765fdc); r_esp += 4; return;
L_0076607f:; BB(0x0076607f);
    /* 0076607f: push dword ptr [0x9f5a8c] */ { u32 v = R32((u32)(0x9f5a8cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00766085: push 0x92b154 */ { u32 v = 0x92b154u; r_esp -= 4; W32(r_esp, v); }
    /* 0076608a: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x76608fu); f_0061cdb0();
    /* 0076608f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00766092: mov ecx, dword ptr [0xa9aff4] */ r_ecx = R32((u32)(0xa9aff4u));
    /* 00766098: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0076609a: je 0x7660af */ if (fZ) goto L_007660af;
L_0076609c:; BB(0x0076609c);
    /* 0076609c: je 0x7660a5 */ if (fZ) goto L_007660a5;
L_0076609e:; BB(0x0076609e);
    /* 0076609e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007660a0: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x7660a5u); f_004066a8();
L_007660a5:; BB(0x007660a5);
    /* 007660a5: mov dword ptr [0xa9aff4], 0 */ W32((u32)(0xa9aff4u), 0x0u);
L_007660af:; BB(0x007660af);
    /* 007660af: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007660b2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007660b9: mov esp, ebp */ r_esp = r_ebp;
    /* 007660bb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007660bc: ret  */ FN_RET(0x00765fdc); r_esp += 4; return;
L_007660bd:; BB(0x007660bd);
    /* 007660bd: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007660bf: jmp 0x76604c */ goto L_0076604c;
}

