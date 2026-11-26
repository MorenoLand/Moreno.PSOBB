#include "protos.h"

void f_005c500c(void) /* sub_5C500C */
{
    FN_ENTER(0x005c500c);
    /* 005c500c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c500f: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005c5012: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c5013: call 0x5c425c */ r_esp -= 4; W32(r_esp, 0x5c5018u); f_005c425c();
    /* 005c5018: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 005c501b: call 0x5d2fb0 */ r_esp -= 4; W32(r_esp, 0x5c5020u); f_005d2fb0();
    /* 005c5020: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005c5023: ret  */ FN_RET(0x005c500c); r_esp += 4; return;
}

void f_005c5024(void) /* sub_5C5024 */
{
    FN_ENTER(0x005c5024);
    /* 005c5024: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c5026: ret 4 */ FN_RET(0x005c5024); r_esp += 8; return;
}

void f_005c502c(void) /* sub_5C502C */
{
    FN_ENTER(0x005c502c);
    /* 005c502c: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 005c5030: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005c5033: je 0x5c504f */ if (fZ) goto L_005c504f;
L_005c5035:; BB(0x005c5035);
    /* 005c5035: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c5038: je 0x5c503d */ if (fZ) goto L_005c503d;
L_005c503a:; BB(0x005c503a);
    /* 005c503a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c503c: ret  */ FN_RET(0x005c502c); r_esp += 4; return;
L_005c503d:; BB(0x005c503d);
    /* 005c503d: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005c5041: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c5044: jge 0x5c5055 */ if ((fS==fO)) goto L_005c5055;
L_005c5046:; BB(0x005c5046);
    /* 005c5046: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005c504a: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005c504d: je 0x5c505e */ if (fZ) goto L_005c505e;
L_005c504f:; BB(0x005c504f);
    /* 005c504f: mov eax, 1 */ r_eax = 0x1u;
    /* 005c5054: ret  */ FN_RET(0x005c502c); r_esp += 4; return;
L_005c5055:; BB(0x005c5055);
    /* 005c5055: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005c5059: cmp eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005c505c: je 0x5c504f */ if (fZ) goto L_005c504f;
L_005c505e:; BB(0x005c505e);
    /* 005c505e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c5060: ret  */ FN_RET(0x005c502c); r_esp += 4; return;
}

void f_005c5064(void) /* sub_5C5064 */
{
    FN_ENTER(0x005c5064);
    /* 005c5064: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c5067: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005c506a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c506b: call 0x5c425c */ r_esp -= 4; W32(r_esp, 0x5c5070u); f_005c425c();
    /* 005c5070: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 005c5073: call 0x5d6430 */ r_esp -= 4; W32(r_esp, 0x5c5078u); f_005d6430();
    /* 005c5078: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005c507b: ret  */ FN_RET(0x005c5064); r_esp += 4; return;
}

void f_005c507c(void) /* sub_5C507C */
{
    FN_ENTER(0x005c507c);
    /* 005c507c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005c507d: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c5080: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005c5082: mov ecx, dword ptr [esp + 0x1c] */ r_ecx = R32((u32)(r_esp+0x1cu));
    /* 005c5086: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c5088: je 0x5c50a8 */ if (fZ) goto L_005c50a8;
L_005c508a:; BB(0x005c508a);
    /* 005c508a: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005c508d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c508e: call 0x5c425c */ r_esp -= 4; W32(r_esp, 0x5c5093u); f_005c425c();
    /* 005c5093: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005c5096: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c5097: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 005c5099: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005c509b: call dword ptr [edx + 0x9c] */ { u32 t = R32((u32)(r_edx+0x9cu)); r_esp -= 4; W32(r_esp, 0x5c50a1u); call_ind(t); }
    /* 005c50a1: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005c50a4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005c50a5: ret 4 */ FN_RET(0x005c507c); r_esp += 8; return;
L_005c50a8:; BB(0x005c50a8);
    /* 005c50a8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005c50aa: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005c50ad: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005c50ae: ret 4 */ FN_RET(0x005c507c); r_esp += 8; return;
}

void f_005c50b4(void) /* sub_5C50B4 */
{
    FN_ENTER(0x005c50b4);
    /* 005c50b4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005c50b5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c50b6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005c50b7: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c50ba: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005c50bc: mov ebp, dword ptr [esp + 0x24] */ r_ebp = R32((u32)(r_esp+0x24u));
    /* 005c50c0: mov edi, dword ptr [esp + 0x28] */ r_edi = R32((u32)(r_esp+0x28u));
    /* 005c50c4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005c50c6: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005c50c9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c50ca: call 0x5c425c */ r_esp -= 4; W32(r_esp, 0x5c50cfu); f_005c425c();
    /* 005c50cf: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c50d1: jne 0x5c50d9 */ if (!fZ) goto L_005c50d9;
L_005c50d3:; BB(0x005c50d3);
    /* 005c50d3: mov edi, dword ptr [ebx + 0xf8] */ r_edi = R32((u32)(r_ebx+0xf8u));
L_005c50d9:; BB(0x005c50d9);
    /* 005c50d9: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005c50da: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c50db: lea ecx, [esp + 8] */ r_ecx = (u32)(r_esp+0x8u);
    /* 005c50df: call 0x5d5f40 */ r_esp -= 4; W32(r_esp, 0x5c50e4u); f_005d5f40();
    /* 005c50e4: mov edx, dword ptr [ebx + 0xdc] */ r_edx = R32((u32)(r_ebx+0xdcu));
    /* 005c50ea: test edx, 0x200 */ {  u32 a = r_edx; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c50f0: je 0x5c50f5 */ if (fZ) goto L_005c50f5;
L_005c50f2:; BB(0x005c50f2);
    /* 005c50f2: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_005c50f5:; BB(0x005c50f5);
    /* 005c50f5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c50f7: jne 0x5c5107 */ if (!fZ) goto L_005c5107;
L_005c50f9:; BB(0x005c50f9);
    /* 005c50f9: test edx, 0x80 */ {  u32 a = r_edx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c50ff: je 0x5c5107 */ if (fZ) goto L_005c5107;
L_005c5101:; BB(0x005c5101);
    /* 005c5101: or eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005c5104: and eax, 0xfffffffd */ {  u32 a = r_eax; u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
L_005c5107:; BB(0x005c5107);
    /* 005c5107: and eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005c5109: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005c510c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005c510d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c510e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005c510f: ret 8 */ FN_RET(0x005c50b4); r_esp += 12; return;
}

void f_005c5114(void) /* sub_5C5114 */
{
    FN_ENTER(0x005c5114);
    /* 005c5114: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c5117: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005c511a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c511b: call 0x5c425c */ r_esp -= 4; W32(r_esp, 0x5c5120u); f_005c425c();
    /* 005c5120: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005c5123: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c5124: call 0x5ca4a4 */ r_esp -= 4; W32(r_esp, 0x5c5129u); f_005ca4a4();
    /* 005c5129: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005c512c: ret  */ FN_RET(0x005c5114); r_esp += 4; return;
}

void f_005c5130(void) /* sub_5C5130 */
{
    FN_ENTER(0x005c5130);
    /* 005c5130: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c5133: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005c5136: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c5137: call 0x5c425c */ r_esp -= 4; W32(r_esp, 0x5c513cu); f_005c425c();
    /* 005c513c: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 005c513f: call 0x5d325c */ r_esp -= 4; W32(r_esp, 0x5c5144u); f_005d325c();
    /* 005c5144: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005c5147: ret  */ FN_RET(0x005c5130); r_esp += 4; return;
}

void f_005c5148(void) /* sub_5C5148 */
{
    FN_ENTER(0x005c5148);
    /* 005c5148: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c514b: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005c514e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c514f: call 0x5c425c */ r_esp -= 4; W32(r_esp, 0x5c5154u); f_005c425c();
    /* 005c5154: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 005c5157: call 0x5d2f7c */ r_esp -= 4; W32(r_esp, 0x5c515cu); f_005d2f7c();
    /* 005c515c: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005c515f: ret  */ FN_RET(0x005c5148); r_esp += 4; return;
}

void f_005c5160(void) /* sub_5C5160 */
{
    FN_ENTER(0x005c5160);
    /* 005c5160: mov eax, dword ptr [ecx + 0xdc] */ r_eax = R32((u32)(r_ecx+0xdcu));
    /* 005c5166: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005c5168: jne 0x5c517a */ if (!fZ) goto L_005c517a;
L_005c516a:; BB(0x005c516a);
    /* 005c516a: mov eax, dword ptr [ecx + 0xfc] */ r_eax = R32((u32)(r_ecx+0xfcu));
    /* 005c5170: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c5172: je 0x5c517a */ if (fZ) goto L_005c517a;
L_005c5174:; BB(0x005c5174);
    /* 005c5174: mov eax, 1 */ r_eax = 0x1u;
    /* 005c5179: ret  */ FN_RET(0x005c5160); r_esp += 4; return;
L_005c517a:; BB(0x005c517a);
    /* 005c517a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c517c: ret  */ FN_RET(0x005c5160); r_esp += 4; return;
}

void f_005c5180(void) /* sub_5C5180 */
{
    FN_ENTER(0x005c5180);
    /* 005c5180: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c5183: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005c5186: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c5187: call 0x5c425c */ r_esp -= 4; W32(r_esp, 0x5c518cu); f_005c425c();
    /* 005c518c: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 005c518f: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x5c5194u); f_006dc358();
    /* 005c5194: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005c5197: ret  */ FN_RET(0x005c5180); r_esp += 4; return;
}

void f_005c5198(void) /* sub_5C5198 */
{
    FN_ENTER(0x005c5198);
    /* 005c5198: movzx eax, word ptr [ecx + 8] */ r_eax = (u32)R16((u32)(r_ecx+0x8u));
    /* 005c519c: and eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c51a1: ret  */ FN_RET(0x005c5198); r_esp += 4; return;
}

void f_005c51a4(void) /* sub_5C51A4 */
{
    FN_ENTER(0x005c51a4);
    /* 005c51a4: call 0x7a61a4 */ r_esp -= 4; W32(r_esp, 0x5c51a9u); f_007a61a4();
    /* 005c51a9: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c51ac: je 0x5c51bb */ if (fZ) goto L_005c51bb;
L_005c51ae:; BB(0x005c51ae);
    /* 005c51ae: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005c51b0:; BB(0x005c51b0);
    /* 005c51b0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c51b2: mov eax, 0 */ r_eax = 0x0u;
    /* 005c51b7: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 005c51ba: ret  */ FN_RET(0x005c51a4); r_esp += 4; return;
L_005c51bb:; BB(0x005c51bb);
    /* 005c51bb: call 0x7bb6d0 */ r_esp -= 4; W32(r_esp, 0x5c51c0u); f_007bb6d0();
    /* 005c51c0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c51c2: je 0x5c51cb */ if (fZ) goto L_005c51cb;
L_005c51c4:; BB(0x005c51c4);
    /* 005c51c4: mov eax, 1 */ r_eax = 0x1u;
    /* 005c51c9: jmp 0x5c51b0 */ goto L_005c51b0;
L_005c51cb:; BB(0x005c51cb);
    /* 005c51cb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005c51cd: jmp 0x5c51b0 */ goto L_005c51b0;
}

void f_005c51d0(void) /* sub_5C51D0 */
{
    FN_ENTER(0x005c51d0);
    /* 005c51d0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005c51d1: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c51d4: call 0x80a640 */ r_esp -= 4; W32(r_esp, 0x5c51d9u); f_0080a640();
    /* 005c51d9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c51db: jne 0x5c5252 */ if (!fZ) goto L_005c5252;
L_005c51dd:; BB(0x005c51dd);
    /* 005c51dd: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 005c51e1: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 005c51e4: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c51e7: je 0x5c525f */ if (fZ) goto L_005c525f;
L_005c51e9:; BB(0x005c51e9);
    /* 005c51e9: mov edx, dword ptr [0xa8d820] */ r_edx = R32((u32)(0xa8d820u));
    /* 005c51ef: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 005c51f1: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c51f4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005c51f6: jle 0x5c5257 */ if ((fZ||fS!=fO)) goto L_005c5257;
L_005c51f8:; BB(0x005c51f8);
    /* 005c51f8: mov ecx, dword ptr [0xa8d81c] */ r_ecx = R32((u32)(0xa8d81cu));
    /* 005c51fe: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 005c5202: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
L_005c5205:; BB(0x005c5205);
    /* 005c5205: lea edi, [ebx + edx] */ r_edi = (u32)(r_ebx+r_edx);
    /* 005c5208: sar edi, 1 */ { u32 c = (1u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 005c520a: mov esi, dword ptr [ecx + edi*4] */ r_esi = R32((u32)(r_ecx+r_edi*4));
    /* 005c520d: cmp eax, dword ptr [esi + 0xd8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+0xd8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c5213: jle 0x5c521a */ if ((fZ||fS!=fO)) goto L_005c521a;
L_005c5215:; BB(0x005c5215);
    /* 005c5215: lea ebx, [edi + 1] */ r_ebx = (u32)(r_edi+0x1u);
    /* 005c5218: jmp 0x5c521c */ goto L_005c521c;
L_005c521a:; BB(0x005c521a);
    /* 005c521a: mov edx, edi */ r_edx = r_edi;
L_005c521c:; BB(0x005c521c);
    /* 005c521c: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c521e: jl 0x5c5205 */ if ((fS!=fO)) goto L_005c5205;
L_005c5220:; BB(0x005c5220);
    /* 005c5220: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 005c5224: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
L_005c5227:; BB(0x005c5227);
    /* 005c5227: mov ecx, dword ptr [ecx + ebx*4] */ r_ecx = R32((u32)(r_ecx+r_ebx*4));
    /* 005c522a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c522c: je 0x5c5236 */ if (fZ) goto L_005c5236;
L_005c522e:; BB(0x005c522e);
    /* 005c522e: cmp eax, dword ptr [ecx + 0xd8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0xd8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c5234: je 0x5c5238 */ if (fZ) goto L_005c5238;
L_005c5236:; BB(0x005c5236);
    /* 005c5236: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_005c5238:; BB(0x005c5238);
    /* 005c5238: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c523a: je 0x5c5252 */ if (fZ) goto L_005c5252;
L_005c523c:; BB(0x005c523c);
    /* 005c523c: mov eax, dword ptr [ecx + 0xf8] */ r_eax = R32((u32)(r_ecx+0xf8u));
    /* 005c5242: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c5244: je 0x5c5252 */ if (fZ) goto L_005c5252;
L_005c5246:; BB(0x005c5246);
    /* 005c5246: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 005c524a: push dword ptr [eax + 8] */ { u32 v = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005c524d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005c524f: call dword ptr [edx + 0x3c] */ { u32 t = R32((u32)(r_edx+0x3cu)); r_esp -= 4; W32(r_esp, 0x5c5252u); call_ind(t); }
L_005c5252:; BB(0x005c5252);
    /* 005c5252: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005c5255: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005c5256: ret  */ FN_RET(0x005c51d0); r_esp += 4; return;
L_005c5257:; BB(0x005c5257);
    /* 005c5257: mov ecx, dword ptr [0xa8d81c] */ r_ecx = R32((u32)(0xa8d81cu));
    /* 005c525d: jmp 0x5c5227 */ goto L_005c5227;
L_005c525f:; BB(0x005c525f);
    /* 005c525f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005c5261: jmp 0x5c5238 */ goto L_005c5238;
}

void f_005c5264(void) /* sub_5C5264 */
{
    FN_ENTER(0x005c5264);
    /* 005c5264: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c5267: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 005c526b: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 005c526f: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c5272: mov eax, ecx */ r_eax = r_ecx;
    /* 005c5274: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 005c5278: call 0x5c528c */ r_esp -= 4; W32(r_esp, 0x5c527du); f_005c528c();
    /* 005c527d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005c5280: ret 8 */ FN_RET(0x005c5264); r_esp += 12; return;
}

void f_005c5284(void) /* sub_5C5284 */
{
    FN_ENTER(0x005c5284);
    /* 005c5284: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 005c5288: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 005c528c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005c528d: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c5290: fst dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0));
    /* 005c5294: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 005c5297: mov ebx, eax */ r_ebx = r_eax;
    /* 005c5299: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005c529b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c529c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005c529d: call 0x835c3c */ r_esp -= 4; W32(r_esp, 0x5c52a2u); f_00835c3c();
    /* 005c52a2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c52a5: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 005c52a9: fld dword ptr [0x92bb5c] */ FPUSH(R_F32((u32)(0x92bb5cu)));
    /* 005c52af: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 005c52b1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005c52b3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005c52b4: jb 0x5c53a6 */ if (fC) goto L_005c53a6;
L_005c52ba:; BB(0x005c52ba);
    /* 005c52ba: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 005c52be: fchs  */ ST(0) = -ST(0);
    /* 005c52c0: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 005c52c2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005c52c4: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005c52c6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005c52c8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005c52c9: ja 0x5c53bb */ if ((!fC&&!fZ)) goto L_005c53bb;
L_005c52cf:; BB(0x005c52cf);
    /* 005c52cf: fcomp dword ptr [esp] */ fx_compare(ST(0), R_F32((u32)(r_esp))); FPOP();
    /* 005c52d2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005c52d4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005c52d5: jbe 0x5c533a */ if ((fC||fZ)) goto L_005c533a;
L_005c52d7:; BB(0x005c52d7);
    /* 005c52d7: fld dword ptr [0xa489e8] */ FPUSH(R_F32((u32)(0xa489e8u)));
    /* 005c52dd: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 005c52e1: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 005c52e3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005c52e5: fadd dword ptr [ebx] */ ST(0) = ST(0) + R_F32((u32)(r_ebx));
    /* 005c52e7: fld dword ptr [0xa489ec] */ FPUSH(R_F32((u32)(0xa489ecu)));
    /* 005c52ed: fld dword ptr [0xa489f0] */ FPUSH(R_F32((u32)(0xa489f0u)));
    /* 005c52f3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005c52f5: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 005c52f7: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 005c52f9: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 005c52fb: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005c52fd: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005c5300: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005c5302: fadd dword ptr [ebx + 4] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x4u));
    /* 005c5305: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 005c5309: fadd dword ptr [ebx + 8] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x8u));
    /* 005c530c: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 005c5310: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 005c5314: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c5315: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005c5317: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 005c531b: call 0x82f09c */ r_esp -= 4; W32(r_esp, 0x5c5320u); f_0082f09c();
    /* 005c5320: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 005c5324: fcomp dword ptr [0x92bb5c] */ fx_compare(ST(0), R_F32((u32)(0x92bb5cu))); FPOP();
    /* 005c532a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005c532c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005c532d: jae 0x5c53b1 */ if (!fC) goto L_005c53b1;
L_005c5333:; BB(0x005c5333);
    /* 005c5333: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005c5335: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005c5338: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005c5339: ret  */ FN_RET(0x005c5284); r_esp += 4; return;
L_005c533a:; BB(0x005c533a);
    /* 005c533a: fld dword ptr [0xa489e8] */ FPUSH(R_F32((u32)(0xa489e8u)));
    /* 005c5340: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 005c5344: fld dword ptr [0xa489ec] */ FPUSH(R_F32((u32)(0xa489ecu)));
    /* 005c534a: fld dword ptr [0xa489f0] */ FPUSH(R_F32((u32)(0xa489f0u)));
    /* 005c5350: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 005c5352: fchs  */ ST(0) = -ST(0);
    /* 005c5354: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 005c5356: fadd dword ptr [ebx] */ ST(0) = ST(0) + R_F32((u32)(r_ebx));
    /* 005c5358: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005c535b: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 005c535f: fchs  */ ST(0) = -ST(0);
    /* 005c5361: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 005c5363: fadd dword ptr [ebx + 4] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x4u));
    /* 005c5366: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 005c536a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005c536c: fchs  */ ST(0) = -ST(0);
    /* 005c536e: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 005c5370: fadd dword ptr [ebx + 8] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x8u));
    /* 005c5373: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 005c5377: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c5378: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 005c537c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005c537e: call 0x82f09c */ r_esp -= 4; W32(r_esp, 0x5c5383u); f_0082f09c();
    /* 005c5383: movsx ecx, word ptr [0xa48a4c] */ r_ecx = (u32)(i32)(i16)R16((u32)(0xa48a4cu));
    /* 005c538a: movsx edx, word ptr [0x9acb68] */ r_edx = (u32)(i32)(i16)R16((u32)(0x9acb68u));
    /* 005c5391: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c5393: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 005c5397: fild dword ptr [esp + 0x14] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x14u)));
    /* 005c539b: fcomp dword ptr [esp + 0xc] */ fx_compare(ST(0), R_F32((u32)(r_esp+0xcu))); FPOP();
    /* 005c539f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005c53a1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005c53a2: jb 0x5c53aa */ if (fC) goto L_005c53aa;
L_005c53a4:; BB(0x005c53a4);
    /* 005c53a4: jmp 0x5c53b1 */ goto L_005c53b1;
L_005c53a6:; BB(0x005c53a6);
    /* 005c53a6: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 005c53a8: fstp st(0) */ ST(0) = ST(0); FPOP();
L_005c53aa:; BB(0x005c53aa);
    /* 005c53aa: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005c53ac: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005c53af: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005c53b0: ret  */ FN_RET(0x005c5284); r_esp += 4; return;
L_005c53b1:; BB(0x005c53b1);
    /* 005c53b1: mov eax, 1 */ r_eax = 0x1u;
    /* 005c53b6: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005c53b9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005c53ba: ret  */ FN_RET(0x005c5284); r_esp += 4; return;
L_005c53bb:; BB(0x005c53bb);
    /* 005c53bb: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005c53bd: jmp 0x5c53aa */ goto L_005c53aa;
}

void f_005c528c(void) /* sub_5C528C */
{
    FN_ENTER(0x005c528c);
    /* 005c528c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005c528d: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c5290: fst dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0));
    /* 005c5294: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 005c5297: mov ebx, eax */ r_ebx = r_eax;
    /* 005c5299: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005c529b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c529c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005c529d: call 0x835c3c */ r_esp -= 4; W32(r_esp, 0x5c52a2u); f_00835c3c();
    /* 005c52a2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c52a5: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 005c52a9: fld dword ptr [0x92bb5c] */ FPUSH(R_F32((u32)(0x92bb5cu)));
    /* 005c52af: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 005c52b1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005c52b3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005c52b4: jb 0x5c53a6 */ if (fC) goto L_005c53a6;
L_005c52ba:; BB(0x005c52ba);
    /* 005c52ba: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 005c52be: fchs  */ ST(0) = -ST(0);
    /* 005c52c0: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 005c52c2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005c52c4: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005c52c6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005c52c8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005c52c9: ja 0x5c53bb */ if ((!fC&&!fZ)) goto L_005c53bb;
L_005c52cf:; BB(0x005c52cf);
    /* 005c52cf: fcomp dword ptr [esp] */ fx_compare(ST(0), R_F32((u32)(r_esp))); FPOP();
    /* 005c52d2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005c52d4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005c52d5: jbe 0x5c533a */ if ((fC||fZ)) goto L_005c533a;
L_005c52d7:; BB(0x005c52d7);
    /* 005c52d7: fld dword ptr [0xa489e8] */ FPUSH(R_F32((u32)(0xa489e8u)));
    /* 005c52dd: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 005c52e1: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 005c52e3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005c52e5: fadd dword ptr [ebx] */ ST(0) = ST(0) + R_F32((u32)(r_ebx));
    /* 005c52e7: fld dword ptr [0xa489ec] */ FPUSH(R_F32((u32)(0xa489ecu)));
    /* 005c52ed: fld dword ptr [0xa489f0] */ FPUSH(R_F32((u32)(0xa489f0u)));
    /* 005c52f3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005c52f5: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 005c52f7: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 005c52f9: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 005c52fb: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005c52fd: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005c5300: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005c5302: fadd dword ptr [ebx + 4] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x4u));
    /* 005c5305: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 005c5309: fadd dword ptr [ebx + 8] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x8u));
    /* 005c530c: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 005c5310: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 005c5314: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c5315: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005c5317: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 005c531b: call 0x82f09c */ r_esp -= 4; W32(r_esp, 0x5c5320u); f_0082f09c();
    /* 005c5320: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 005c5324: fcomp dword ptr [0x92bb5c] */ fx_compare(ST(0), R_F32((u32)(0x92bb5cu))); FPOP();
    /* 005c532a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005c532c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005c532d: jae 0x5c53b1 */ if (!fC) goto L_005c53b1;
L_005c5333:; BB(0x005c5333);
    /* 005c5333: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005c5335: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005c5338: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005c5339: ret  */ FN_RET(0x005c528c); r_esp += 4; return;
L_005c533a:; BB(0x005c533a);
    /* 005c533a: fld dword ptr [0xa489e8] */ FPUSH(R_F32((u32)(0xa489e8u)));
    /* 005c5340: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 005c5344: fld dword ptr [0xa489ec] */ FPUSH(R_F32((u32)(0xa489ecu)));
    /* 005c534a: fld dword ptr [0xa489f0] */ FPUSH(R_F32((u32)(0xa489f0u)));
    /* 005c5350: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 005c5352: fchs  */ ST(0) = -ST(0);
    /* 005c5354: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 005c5356: fadd dword ptr [ebx] */ ST(0) = ST(0) + R_F32((u32)(r_ebx));
    /* 005c5358: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005c535b: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 005c535f: fchs  */ ST(0) = -ST(0);
    /* 005c5361: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 005c5363: fadd dword ptr [ebx + 4] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x4u));
    /* 005c5366: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 005c536a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005c536c: fchs  */ ST(0) = -ST(0);
    /* 005c536e: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 005c5370: fadd dword ptr [ebx + 8] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x8u));
    /* 005c5373: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 005c5377: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c5378: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 005c537c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005c537e: call 0x82f09c */ r_esp -= 4; W32(r_esp, 0x5c5383u); f_0082f09c();
    /* 005c5383: movsx ecx, word ptr [0xa48a4c] */ r_ecx = (u32)(i32)(i16)R16((u32)(0xa48a4cu));
    /* 005c538a: movsx edx, word ptr [0x9acb68] */ r_edx = (u32)(i32)(i16)R16((u32)(0x9acb68u));
    /* 005c5391: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c5393: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 005c5397: fild dword ptr [esp + 0x14] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x14u)));
    /* 005c539b: fcomp dword ptr [esp + 0xc] */ fx_compare(ST(0), R_F32((u32)(r_esp+0xcu))); FPOP();
    /* 005c539f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005c53a1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005c53a2: jb 0x5c53aa */ if (fC) goto L_005c53aa;
L_005c53a4:; BB(0x005c53a4);
    /* 005c53a4: jmp 0x5c53b1 */ goto L_005c53b1;
L_005c53a6:; BB(0x005c53a6);
    /* 005c53a6: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 005c53a8: fstp st(0) */ ST(0) = ST(0); FPOP();
L_005c53aa:; BB(0x005c53aa);
    /* 005c53aa: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005c53ac: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005c53af: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005c53b0: ret  */ FN_RET(0x005c528c); r_esp += 4; return;
L_005c53b1:; BB(0x005c53b1);
    /* 005c53b1: mov eax, 1 */ r_eax = 0x1u;
    /* 005c53b6: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005c53b9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005c53ba: ret  */ FN_RET(0x005c528c); r_esp += 4; return;
L_005c53bb:; BB(0x005c53bb);
    /* 005c53bb: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005c53bd: jmp 0x5c53aa */ goto L_005c53aa;
}

void f_005c53c0(void) /* sub_5C53C0 */
{
    FN_ENTER(0x005c53c0);
    /* 005c53c0: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c53c3: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 005c53c7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c53c9: je 0x5c550c */ if (fZ) goto L_005c550c;
L_005c53cf:; BB(0x005c53cf);
    /* 005c53cf: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 005c53d3: mov dword ptr [0xa8d82c], 0x8321d8 */ W32((u32)(0xa8d82cu), 0x8321d8u);
    /* 005c53dd: mov dword ptr [0xa8d824], edx */ W32((u32)(0xa8d824u), r_edx);
    /* 005c53e3: mov dword ptr [0xa8d828], 0 */ W32((u32)(0xa8d828u), 0x0u);
    /* 005c53ed: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 005c53f1: mov ebx, eax */ r_ebx = r_eax;
    /* 005c53f3: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
L_005c53f7:; BB(0x005c53f7);
    /* 005c53f7: mov esi, dword ptr [ebx] */ r_esi = R32((u32)(r_ebx));
    /* 005c53f9: mov edx, esi */ r_edx = r_esi;
    /* 005c53fb: and edx, 7 */ {  u32 a = r_edx; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005c53fe: cmp edx, 7 */ {  u32 a = r_edx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c5401: jne 0x5c5466 */ if (!fZ) goto L_005c5466;
L_005c5403:; BB(0x005c5403);
    /* 005c5403: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x5c5408u); f_0082d7b0();
    /* 005c5408: mov ecx, dword ptr [0xa8d828] */ r_ecx = R32((u32)(0xa8d828u));
    /* 005c540e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c5410: je 0x5c5426 */ if (fZ) goto L_005c5426;
L_005c5412:; BB(0x005c5412);
    /* 005c5412: call 0x831650 */ r_esp -= 4; W32(r_esp, 0x5c5417u); f_00831650();
    /* 005c5417: mov edx, dword ptr [0xa8d828] */ r_edx = R32((u32)(0xa8d828u));
    /* 005c541d: add edx, 0x40 */ {  u32 a = r_edx; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c5420: mov dword ptr [0xa8d828], edx */ W32((u32)(0xa8d828u), r_edx);
L_005c5426:; BB(0x005c5426);
    /* 005c5426: mov edx, dword ptr [0xa8d824] */ r_edx = R32((u32)(0xa8d824u));
    /* 005c542c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c542e: je 0x5c5434 */ if (fZ) goto L_005c5434;
L_005c5430:; BB(0x005c5430);
    /* 005c5430: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005c5431: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5c5433u); call_ind(t); }
    /* 005c5433: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_005c5434:; BB(0x005c5434);
    /* 005c5434: test esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c543a: jne 0x5c544c */ if (!fZ) goto L_005c544c;
L_005c543c:; BB(0x005c543c);
    /* 005c543c: mov edx, dword ptr [0xa8d82c] */ r_edx = R32((u32)(0xa8d82cu));
    /* 005c5442: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c5444: je 0x5c544c */ if (fZ) goto L_005c544c;
L_005c5446:; BB(0x005c5446);
    /* 005c5446: push dword ptr [ebx + 4] */ { u32 v = R32((u32)(r_ebx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005c5449: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5c544bu); call_ind(t); }
    /* 005c544b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_005c544c:; BB(0x005c544c);
    /* 005c544c: test esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c5452: jne 0x5c545c */ if (!fZ) goto L_005c545c;
L_005c5454:; BB(0x005c5454);
    /* 005c5454: mov eax, dword ptr [ebx + 0x2c] */ r_eax = R32((u32)(r_ebx+0x2cu));
    /* 005c5457: call 0x5c30f0 */ r_esp -= 4; W32(r_esp, 0x5c545cu); f_005c30f0();
L_005c545c:; BB(0x005c545c);
    /* 005c545c: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5c5461u); f_0082da80();
    /* 005c5461: jmp 0x5c54f9 */ goto L_005c54f9;
L_005c5466:; BB(0x005c5466);
    /* 005c5466: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x5c546bu); f_0082d7b0();
    /* 005c546b: test esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c5471: jne 0x5c547b */ if (!fZ) goto L_005c547b;
L_005c5473:; BB(0x005c5473);
    /* 005c5473: lea ecx, [ebx + 8] */ r_ecx = (u32)(r_ebx+0x8u);
    /* 005c5476: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x5c547bu); f_0082d838();
L_005c547b:; BB(0x005c547b);
    /* 005c547b: test esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c5481: jne 0x5c5490 */ if (!fZ) goto L_005c5490;
L_005c5483:; BB(0x005c5483);
    /* 005c5483: lea ecx, [ebx + 0x14] */ r_ecx = (u32)(r_ebx+0x14u);
    /* 005c5486: mov edx, esi */ r_edx = r_esi;
    /* 005c5488: and edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005c548b: call 0x830df8 */ r_esp -= 4; W32(r_esp, 0x5c5490u); f_00830df8();
L_005c5490:; BB(0x005c5490);
    /* 005c5490: test esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c5496: jne 0x5c54a0 */ if (!fZ) goto L_005c54a0;
L_005c5498:; BB(0x005c5498);
    /* 005c5498: lea ecx, [ebx + 0x20] */ r_ecx = (u32)(r_ebx+0x20u);
    /* 005c549b: call 0x831290 */ r_esp -= 4; W32(r_esp, 0x5c54a0u); f_00831290();
L_005c54a0:; BB(0x005c54a0);
    /* 005c54a0: mov edx, dword ptr [0xa8d824] */ r_edx = R32((u32)(0xa8d824u));
    /* 005c54a6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c54a8: je 0x5c54ae */ if (fZ) goto L_005c54ae;
L_005c54aa:; BB(0x005c54aa);
    /* 005c54aa: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005c54ab: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5c54adu); call_ind(t); }
    /* 005c54ad: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_005c54ae:; BB(0x005c54ae);
    /* 005c54ae: mov ecx, dword ptr [0xa8d828] */ r_ecx = R32((u32)(0xa8d828u));
    /* 005c54b4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c54b6: je 0x5c54cc */ if (fZ) goto L_005c54cc;
L_005c54b8:; BB(0x005c54b8);
    /* 005c54b8: call 0x831650 */ r_esp -= 4; W32(r_esp, 0x5c54bdu); f_00831650();
    /* 005c54bd: mov edx, dword ptr [0xa8d828] */ r_edx = R32((u32)(0xa8d828u));
    /* 005c54c3: add edx, 0x40 */ {  u32 a = r_edx; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c54c6: mov dword ptr [0xa8d828], edx */ W32((u32)(0xa8d828u), r_edx);
L_005c54cc:; BB(0x005c54cc);
    /* 005c54cc: test esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c54d2: jne 0x5c54e4 */ if (!fZ) goto L_005c54e4;
L_005c54d4:; BB(0x005c54d4);
    /* 005c54d4: mov edx, dword ptr [0xa8d82c] */ r_edx = R32((u32)(0xa8d82cu));
    /* 005c54da: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c54dc: je 0x5c54e4 */ if (fZ) goto L_005c54e4;
L_005c54de:; BB(0x005c54de);
    /* 005c54de: push dword ptr [ebx + 4] */ { u32 v = R32((u32)(r_ebx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005c54e1: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5c54e3u); call_ind(t); }
    /* 005c54e3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_005c54e4:; BB(0x005c54e4);
    /* 005c54e4: test esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c54ea: jne 0x5c54f4 */ if (!fZ) goto L_005c54f4;
L_005c54ec:; BB(0x005c54ec);
    /* 005c54ec: mov eax, dword ptr [ebx + 0x2c] */ r_eax = R32((u32)(r_ebx+0x2cu));
    /* 005c54ef: call 0x5c30f0 */ r_esp -= 4; W32(r_esp, 0x5c54f4u); f_005c30f0();
L_005c54f4:; BB(0x005c54f4);
    /* 005c54f4: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5c54f9u); f_0082da80();
L_005c54f9:; BB(0x005c54f9);
    /* 005c54f9: mov ebx, dword ptr [ebx + 0x30] */ r_ebx = R32((u32)(r_ebx+0x30u));
    /* 005c54fc: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c54fe: jne 0x5c53f7 */ if (!fZ) goto L_005c53f7;
L_005c5504:; BB(0x005c5504);
    /* 005c5504: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 005c5508: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
L_005c550c:; BB(0x005c550c);
    /* 005c550c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005c550e: mov dword ptr [0xa8d82c], eax */ W32((u32)(0xa8d82cu), r_eax);
    /* 005c5513: mov dword ptr [0xa8d828], eax */ W32((u32)(0xa8d828u), r_eax);
    /* 005c5518: mov dword ptr [0xa8d824], eax */ W32((u32)(0xa8d824u), r_eax);
    /* 005c551d: call 0x7a9044 */ r_esp -= 4; W32(r_esp, 0x5c5522u); f_007a9044();
    /* 005c5522: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005c5525: ret  */ FN_RET(0x005c53c0); r_esp += 4; return;
}

void f_005c5528(void) /* sub_5C5528 */
{
    FN_ENTER(0x005c5528);
    /* 005c5528: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005c5529: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c552c: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 005c5530: cmp ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c5533: je 0x5c5581 */ if (fZ) goto L_005c5581;
L_005c5535:; BB(0x005c5535);
    /* 005c5535: mov eax, dword ptr [0xa8d820] */ r_eax = R32((u32)(0xa8d820u));
    /* 005c553a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005c553c: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c553f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005c5541: jle 0x5c558d */ if ((fZ||fS!=fO)) goto L_005c558d;
L_005c5543:; BB(0x005c5543);
    /* 005c5543: mov edx, dword ptr [0xa8d81c] */ r_edx = R32((u32)(0xa8d81cu));
    /* 005c5549: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 005c554d: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
L_005c5550:; BB(0x005c5550);
    /* 005c5550: lea edi, [ecx + eax] */ r_edi = (u32)(r_ecx+r_eax);
    /* 005c5553: sar edi, 1 */ { u32 c = (1u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 005c5555: mov esi, dword ptr [edx + edi*4] */ r_esi = R32((u32)(r_edx+r_edi*4));
    /* 005c5558: cmp ebx, dword ptr [esi + 0xd8] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esi+0xd8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c555e: jle 0x5c5565 */ if ((fZ||fS!=fO)) goto L_005c5565;
L_005c5560:; BB(0x005c5560);
    /* 005c5560: lea ecx, [edi + 1] */ r_ecx = (u32)(r_edi+0x1u);
    /* 005c5563: jmp 0x5c5567 */ goto L_005c5567;
L_005c5565:; BB(0x005c5565);
    /* 005c5565: mov eax, edi */ r_eax = r_edi;
L_005c5567:; BB(0x005c5567);
    /* 005c5567: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c5569: jl 0x5c5550 */ if ((fS!=fO)) goto L_005c5550;
L_005c556b:; BB(0x005c556b);
    /* 005c556b: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 005c556f: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
L_005c5572:; BB(0x005c5572);
    /* 005c5572: mov eax, dword ptr [edx + ecx*4] */ r_eax = R32((u32)(r_edx+r_ecx*4));
    /* 005c5575: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c5577: je 0x5c5581 */ if (fZ) goto L_005c5581;
L_005c5579:; BB(0x005c5579);
    /* 005c5579: cmp ebx, dword ptr [eax + 0xd8] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_eax+0xd8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c557f: je 0x5c5588 */ if (fZ) goto L_005c5588;
L_005c5581:; BB(0x005c5581);
    /* 005c5581: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005c5583: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005c5586: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005c5587: ret  */ FN_RET(0x005c5528); r_esp += 4; return;
L_005c5588:; BB(0x005c5588);
    /* 005c5588: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005c558b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005c558c: ret  */ FN_RET(0x005c5528); r_esp += 4; return;
L_005c558d:; BB(0x005c558d);
    /* 005c558d: mov edx, dword ptr [0xa8d81c] */ r_edx = R32((u32)(0xa8d81cu));
    /* 005c5593: jmp 0x5c5572 */ goto L_005c5572;
}

void f_005c5598(void) /* sub_5C5598 */
{
    FN_ENTER(0x005c5598);
    /* 005c5598: mov eax, dword ptr [0xa8d820] */ r_eax = R32((u32)(0xa8d820u));
    /* 005c559d: ret  */ FN_RET(0x005c5598); r_esp += 4; return;
}

void f_005c55a0(void) /* sub_5C55A0 */
{
    FN_ENTER(0x005c55a0);
    /* 005c55a0: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 005c55a4: mov edx, dword ptr [0xa8d81c] */ r_edx = R32((u32)(0xa8d81cu));
    /* 005c55aa: mov eax, dword ptr [edx + ecx*4] */ r_eax = R32((u32)(r_edx+r_ecx*4));
    /* 005c55ad: ret  */ FN_RET(0x005c55a0); r_esp += 4; return;
}

void f_005c55b0(void) /* sub_5C55B0 */
{
    FN_ENTER(0x005c55b0);
    /* 005c55b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c55b1: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c55b4: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 005c55b9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c55ba: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x5c55bfu); f_0068d5a8();
    /* 005c55bf: mov edx, eax */ r_edx = r_eax;
    /* 005c55c1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c55c4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005c55c6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c55c8: je 0x5c5629 */ if (fZ) goto L_005c5629;
L_005c55ca:; BB(0x005c55ca);
    /* 005c55ca: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 005c55cd: mov ebx, eax */ r_ebx = r_eax;
    /* 005c55cf: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 005c55d3: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 005c55d7: mov ecx, 9 */ r_ecx = 0x9u;
    /* 005c55dc: lea ebp, [edx + 0xdf8] */ r_ebp = (u32)(r_edx+0xdf8u);
    /* 005c55e2: mov esi, edx */ r_esi = r_edx;
    /* 005c55e4: mov edi, ecx */ r_edi = r_ecx;
L_005c55e6:; BB(0x005c55e6);
    /* 005c55e6: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005c55e7: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005c55e9: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x5c55eeu); f_0069792c();
    /* 005c55ee: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c55f0: je 0x5c5601 */ if (fZ) goto L_005c5601;
L_005c55f2:; BB(0x005c55f2);
    /* 005c55f2: mov ecx, eax */ r_ecx = r_eax;
    /* 005c55f4: call 0x5d2458 */ r_esp -= 4; W32(r_esp, 0x5c55f9u); f_005d2458();
    /* 005c55f9: movzx eax, word ptr [eax] */ r_eax = (u32)R16((u32)(r_eax));
    /* 005c55fc: add ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005c55fe: movsx ebx, bx */ r_ebx = (u32)(i32)(i16)(u16)r_ebx;
L_005c5601:; BB(0x005c5601);
    /* 005c5601: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005c5604: cmp edi, 0xd */ {  u32 a = r_edi; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c5607: jl 0x5c55e6 */ if ((fS!=fO)) goto L_005c55e6;
L_005c5609:; BB(0x005c5609);
    /* 005c5609: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 005c560d: mov eax, ebx */ r_eax = r_ebx;
    /* 005c560f: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 005c5612: mov edx, esi */ r_edx = r_esi;
    /* 005c5614: movzx edx, word ptr [edx + 0x2c0] */ r_edx = (u32)R16((u32)(r_edx+0x2c0u));
    /* 005c561b: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005c561d: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 005c5621: movsx eax, dx */ r_eax = (u32)(i32)(i16)(u16)r_edx;
    /* 005c5624: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005c5627: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c5628: ret  */ FN_RET(0x005c55b0); r_esp += 4; return;
L_005c5629:; BB(0x005c5629);
    /* 005c5629: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005c562b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005c562e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c562f: ret  */ FN_RET(0x005c55b0); r_esp += 4; return;
}

void f_005c5630(void) /* sub_5C5630 */
{
    FN_ENTER(0x005c5630);
    /* 005c5630: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c5631: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c5634: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 005c5639: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c563a: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x5c563fu); f_0068d5a8();
    /* 005c563f: mov edx, eax */ r_edx = r_eax;
    /* 005c5641: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c5644: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005c5646: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c5648: je 0x5c56aa */ if (fZ) goto L_005c56aa;
L_005c564a:; BB(0x005c564a);
    /* 005c564a: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 005c564d: mov ebx, eax */ r_ebx = r_eax;
    /* 005c564f: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 005c5653: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 005c5657: mov ecx, 9 */ r_ecx = 0x9u;
    /* 005c565c: lea ebp, [edx + 0xdf8] */ r_ebp = (u32)(r_edx+0xdf8u);
    /* 005c5662: mov esi, edx */ r_esi = r_edx;
    /* 005c5664: mov edi, ecx */ r_edi = r_ecx;
L_005c5666:; BB(0x005c5666);
    /* 005c5666: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005c5667: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005c5669: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x5c566eu); f_0069792c();
    /* 005c566e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c5670: je 0x5c5682 */ if (fZ) goto L_005c5682;
L_005c5672:; BB(0x005c5672);
    /* 005c5672: mov ecx, eax */ r_ecx = r_eax;
    /* 005c5674: call 0x5d2458 */ r_esp -= 4; W32(r_esp, 0x5c5679u); f_005d2458();
    /* 005c5679: movzx eax, word ptr [eax + 2] */ r_eax = (u32)R16((u32)(r_eax+0x2u));
    /* 005c567d: add ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005c567f: movsx ebx, bx */ r_ebx = (u32)(i32)(i16)(u16)r_ebx;
L_005c5682:; BB(0x005c5682);
    /* 005c5682: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005c5685: cmp edi, 0xd */ {  u32 a = r_edi; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c5688: jl 0x5c5666 */ if ((fS!=fO)) goto L_005c5666;
L_005c568a:; BB(0x005c568a);
    /* 005c568a: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 005c568e: mov eax, ebx */ r_eax = r_ebx;
    /* 005c5690: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 005c5693: mov edx, esi */ r_edx = r_esi;
    /* 005c5695: movzx edx, word ptr [edx + 0x2c2] */ r_edx = (u32)R16((u32)(r_edx+0x2c2u));
    /* 005c569c: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005c569e: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 005c56a2: movsx eax, dx */ r_eax = (u32)(i32)(i16)(u16)r_edx;
    /* 005c56a5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005c56a8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c56a9: ret  */ FN_RET(0x005c5630); r_esp += 4; return;
L_005c56aa:; BB(0x005c56aa);
    /* 005c56aa: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005c56ac: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005c56af: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c56b0: ret  */ FN_RET(0x005c5630); r_esp += 4; return;
}

void f_005c56b4(void) /* sub_5C56B4 */
{
    FN_ENTER(0x005c56b4);
    /* 005c56b4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005c56b5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005c56b6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c56b7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005c56b8: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c56bb: movsx edi, word ptr [esp + 0x1c] */ r_edi = (u32)(i32)(i16)R16((u32)(r_esp+0x1cu));
    /* 005c56c0: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005c56c2: jl 0x5c579f */ if ((fS!=fO)) goto L_005c579f;
L_005c56c8:; BB(0x005c56c8);
    /* 005c56c8: cmp edi, 0x13 */ {  u32 a = r_edi; u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c56cb: jge 0x5c579f */ if ((fS==fO)) goto L_005c579f;
L_005c56d1:; BB(0x005c56d1);
    /* 005c56d1: movsx eax, word ptr [esp + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x20u));
    /* 005c56d6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005c56d8: jl 0x5c579f */ if ((fS!=fO)) goto L_005c579f;
L_005c56de:; BB(0x005c56de);
    /* 005c56de: movsx eax, word ptr [esp + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x20u));
    /* 005c56e3: cmp eax, 0x1d */ {  u32 a = r_eax; u32 b = 0x1du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c56e6: jg 0x5c579f */ if ((!fZ&&fS==fO)) goto L_005c579f;
L_005c56ec:; BB(0x005c56ec);
    /* 005c56ec: movzx eax, word ptr [ecx + 0xe4] */ r_eax = (u32)R16((u32)(r_ecx+0xe4u));
    /* 005c56f3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c56f4: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x5c56f9u); f_0068d5a8();
    /* 005c56f9: mov ebx, eax */ r_ebx = r_eax;
    /* 005c56fb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c56fe: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c5700: je 0x5c579f */ if (fZ) goto L_005c579f;
L_005c5706:; BB(0x005c5706);
    /* 005c5706: movsx esi, word ptr [ebx + 0x334] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebx+0x334u));
    /* 005c570d: movzx ebp, word ptr [ebx + 0x336] */ r_ebp = (u32)R16((u32)(r_ebx+0x336u));
    /* 005c5714: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 005c5717: mov eax, 9 */ r_eax = 0x9u;
    /* 005c571c: lea edx, [ebx + 0xdf8] */ r_edx = (u32)(r_ebx+0xdf8u);
    /* 005c5722: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 005c5726: mov ebx, edx */ r_ebx = r_edx;
    /* 005c5728: mov edi, eax */ r_edi = r_eax;
L_005c572a:; BB(0x005c572a);
    /* 005c572a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005c572b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005c572d: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x5c5732u); f_0069792c();
    /* 005c5732: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c5734: je 0x5c573f */ if (fZ) goto L_005c573f;
L_005c5736:; BB(0x005c5736);
    /* 005c5736: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c5738: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c573a: mov ecx, eax */ r_ecx = r_eax;
    /* 005c573c: call dword ptr [edx + 0x54] */ { u32 t = R32((u32)(r_edx+0x54u)); r_esp -= 4; W32(r_esp, 0x5c573fu); call_ind(t); }
L_005c573f:; BB(0x005c573f);
    /* 005c573f: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005c5742: cmp edi, 0xd */ {  u32 a = r_edi; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c5745: jl 0x5c572a */ if ((fS!=fO)) goto L_005c572a;
L_005c5747:; BB(0x005c5747);
    /* 005c5747: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 005c574a: movsx edi, word ptr [esp + 0x1c] */ r_edi = (u32)(i32)(i16)R16((u32)(r_esp+0x1cu));
    /* 005c574f: movsx edx, word ptr [esp + 0x20] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esp+0x20u));
    /* 005c5754: lea ecx, [ebx + 0x460] */ r_ecx = (u32)(r_ebx+0x460u);
    /* 005c575a: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 005c575d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c575e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005c575f: call 0x6acf64 */ r_esp -= 4; W32(r_esp, 0x5c5764u); f_006acf64();
    /* 005c5764: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 005c5767: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 005c576b: mov edi, 9 */ r_edi = 0x9u;
L_005c5770:; BB(0x005c5770);
    /* 005c5770: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005c5771: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005c5773: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x5c5778u); f_0069792c();
    /* 005c5778: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c577a: je 0x5c5785 */ if (fZ) goto L_005c5785;
L_005c577c:; BB(0x005c577c);
    /* 005c577c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c577e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c5780: mov ecx, eax */ r_ecx = r_eax;
    /* 005c5782: call dword ptr [edx + 0x50] */ { u32 t = R32((u32)(r_edx+0x50u)); r_esp -= 4; W32(r_esp, 0x5c5785u); call_ind(t); }
L_005c5785:; BB(0x005c5785);
    /* 005c5785: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005c5788: cmp edi, 0xd */ {  u32 a = r_edi; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c578b: jl 0x5c5770 */ if ((fS!=fO)) goto L_005c5770;
L_005c578d:; BB(0x005c578d);
    /* 005c578d: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 005c5790: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005c5791: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005c5793: call 0x770b58 */ r_esp -= 4; W32(r_esp, 0x5c5798u); f_00770b58();
    /* 005c5798: mov word ptr [ebx + 0x336], bp */ W16((u32)(r_ebx+0x336u), (u16)r_ebp);
L_005c579f:; BB(0x005c579f);
    /* 005c579f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005c57a2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005c57a3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c57a4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005c57a5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005c57a6: ret 8 */ FN_RET(0x005c56b4); r_esp += 12; return;
}

void f_005c57ac(void) /* sub_5C57AC */
{
    FN_ENTER(0x005c57ac);
    /* 005c57ac: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005c57ad: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c57b0: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 005c57b4: cmp ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c57b7: je 0x5c5826 */ if (fZ) goto L_005c5826;
L_005c57b9:; BB(0x005c57b9);
    /* 005c57b9: mov eax, dword ptr [0xa8d820] */ r_eax = R32((u32)(0xa8d820u));
    /* 005c57be: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005c57c0: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c57c3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005c57c5: jle 0x5c581e */ if ((fZ||fS!=fO)) goto L_005c581e;
L_005c57c7:; BB(0x005c57c7);
    /* 005c57c7: mov edx, dword ptr [0xa8d81c] */ r_edx = R32((u32)(0xa8d81cu));
    /* 005c57cd: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 005c57d1: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
L_005c57d4:; BB(0x005c57d4);
    /* 005c57d4: lea edi, [ecx + eax] */ r_edi = (u32)(r_ecx+r_eax);
    /* 005c57d7: sar edi, 1 */ { u32 c = (1u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 005c57d9: mov esi, dword ptr [edx + edi*4] */ r_esi = R32((u32)(r_edx+r_edi*4));
    /* 005c57dc: cmp ebx, dword ptr [esi + 0xd8] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esi+0xd8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c57e2: jle 0x5c57e9 */ if ((fZ||fS!=fO)) goto L_005c57e9;
L_005c57e4:; BB(0x005c57e4);
    /* 005c57e4: lea ecx, [edi + 1] */ r_ecx = (u32)(r_edi+0x1u);
    /* 005c57e7: jmp 0x5c57eb */ goto L_005c57eb;
L_005c57e9:; BB(0x005c57e9);
    /* 005c57e9: mov eax, edi */ r_eax = r_edi;
L_005c57eb:; BB(0x005c57eb);
    /* 005c57eb: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c57ed: jl 0x5c57d4 */ if ((fS!=fO)) goto L_005c57d4;
L_005c57ef:; BB(0x005c57ef);
    /* 005c57ef: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 005c57f3: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
L_005c57f6:; BB(0x005c57f6);
    /* 005c57f6: mov edx, dword ptr [edx + ecx*4] */ r_edx = R32((u32)(r_edx+r_ecx*4));
    /* 005c57f9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c57fb: je 0x5c5805 */ if (fZ) goto L_005c5805;
L_005c57fd:; BB(0x005c57fd);
    /* 005c57fd: cmp ebx, dword ptr [edx + 0xd8] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx+0xd8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c5803: je 0x5c5807 */ if (fZ) goto L_005c5807;
L_005c5805:; BB(0x005c5805);
    /* 005c5805: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_005c5807:; BB(0x005c5807);
    /* 005c5807: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c5809: je 0x5c5817 */ if (fZ) goto L_005c5817;
L_005c580b:; BB(0x005c580b);
    /* 005c580b: movsx eax, byte ptr [edx + 0xf1] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0xf1u));
    /* 005c5812: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c5815: je 0x5c582a */ if (fZ) goto L_005c582a;
L_005c5817:; BB(0x005c5817);
    /* 005c5817: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005c5819: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005c581c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005c581d: ret  */ FN_RET(0x005c57ac); r_esp += 4; return;
L_005c581e:; BB(0x005c581e);
    /* 005c581e: mov edx, dword ptr [0xa8d81c] */ r_edx = R32((u32)(0xa8d81cu));
    /* 005c5824: jmp 0x5c57f6 */ goto L_005c57f6;
L_005c5826:; BB(0x005c5826);
    /* 005c5826: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005c5828: jmp 0x5c5807 */ goto L_005c5807;
L_005c582a:; BB(0x005c582a);
    /* 005c582a: mov eax, edx */ r_eax = r_edx;
    /* 005c582c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005c582f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005c5830: ret  */ FN_RET(0x005c57ac); r_esp += 4; return;
}

void f_005c5834(void) /* sub_5C5834 */
{
    FN_ENTER(0x005c5834);
    /* 005c5834: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005c5838: call 0x81a6b0 */ r_esp -= 4; W32(r_esp, 0x5c583du); f_0081a6b0();
    /* 005c583d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005c583e: ret  */ FN_RET(0x005c5834); r_esp += 4; return;
}

void f_005c5874(void) /* sub_5C5874 */
{
    FN_ENTER(0x005c5874);
    /* 005c5874: add dword ptr [0xa8d834], 1 */ { u32 ad = (u32)(0xa8d834u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005c587b: ret  */ FN_RET(0x005c5874); r_esp += 4; return;
}

void f_005c587c(void) /* sub_5C587C */
{
    FN_ENTER(0x005c587c);
    /* 005c587c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c587f: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005c5882: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c5883: call 0x5c425c */ r_esp -= 4; W32(r_esp, 0x5c5888u); f_005c425c();
    /* 005c5888: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 005c588b: call 0x5d6990 */ r_esp -= 4; W32(r_esp, 0x5c5890u); f_005d6990();
    /* 005c5890: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005c5893: ret  */ FN_RET(0x005c587c); r_esp += 4; return;
}

void f_005c5894(void) /* sub_5C5894 */
{
    FN_ENTER(0x005c5894);
    /* 005c5894: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c5897: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005c589a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c589b: call 0x5c425c */ r_esp -= 4; W32(r_esp, 0x5c58a0u); f_005c425c();
    /* 005c58a0: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 005c58a3: call 0x5d69a8 */ r_esp -= 4; W32(r_esp, 0x5c58a8u); f_005d69a8();
    /* 005c58a8: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005c58ab: ret  */ FN_RET(0x005c5894); r_esp += 4; return;
}

void f_005c58ac(void) /* sub_5C58AC */
{
    FN_ENTER(0x005c58ac);
    /* 005c58ac: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c58ad: mov ebp, esp */ r_ebp = r_esp;
    /* 005c58af: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005c58b1: push 0x8d989c */ { u32 v = 0x8d989cu; r_esp -= 4; W32(r_esp, v); }
    /* 005c58b6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005c58bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c58bd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005c58c4: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c58c7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005c58ca: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005c58cd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005c58d0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005c58d3: push 0x1000 */ { u32 v = 0x1000u; r_esp -= 4; W32(r_esp, v); }
    /* 005c58d8: mov dword ptr [0xa8d820], 0 */ W32((u32)(0xa8d820u), 0x0u);
    /* 005c58e2: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5c58e7u); f_008581c5();
    /* 005c58e7: mov dword ptr [0xa8d81c], eax */ W32((u32)(0xa8d81cu), r_eax);
    /* 005c58ec: push 0x1000 */ { u32 v = 0x1000u; r_esp -= 4; W32(r_esp, v); }
    /* 005c58f1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c58f3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c58f4: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x5c58f9u); f_0086b688();
    /* 005c58f9: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005c5900: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c5902: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5c5907u); f_008581c5();
    /* 005c5907: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c590a: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005c590d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c590f: je 0x5c5968 */ if (fZ) goto L_005c5968;
L_005c5911:; BB(0x005c5911);
    /* 005c5911: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005c5918: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005c591f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c5922: call 0x5e391c */ r_esp -= 4; W32(r_esp, 0x5c5927u); f_005e391c();
    /* 005c5927: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c592a: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005c5931:; BB(0x005c5931);
    /* 005c5931: mov dword ptr [0xa8d830], eax */ W32((u32)(0xa8d830u), r_eax);
    /* 005c5936: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005c593d: call 0x5cb898 */ r_esp -= 4; W32(r_esp, 0x5c5942u); f_005cb898();
    /* 005c5942: call 0x5cb870 */ r_esp -= 4; W32(r_esp, 0x5c5947u); f_005cb870();
    /* 005c5947: call 0x5caa98 */ r_esp -= 4; W32(r_esp, 0x5c594cu); f_005caa98();
    /* 005c594c: call 0x5c5874 */ r_esp -= 4; W32(r_esp, 0x5c5951u); f_005c5874();
    /* 005c5951: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c5954: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c5957: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 005c595a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c595d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005c5964: mov esp, ebp */ r_esp = r_ebp;
    /* 005c5966: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c5967: ret  */ FN_RET(0x005c58ac); r_esp += 4; return;
L_005c5968:; BB(0x005c5968);
    /* 005c5968: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005c596a: jmp 0x5c5931 */ goto L_005c5931;
}

void f_005c596c(void) /* sub_5C596C */
{
    FN_ENTER(0x005c596c);
    /* 005c596c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005c596d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005c596f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005c5971: call 0x5c5a94 */ r_esp -= 4; W32(r_esp, 0x5c5976u); f_005c5a94();
    /* 005c5976: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005c597a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c597c: jne 0x5c5982 */ if (!fZ) goto L_005c5982;
L_005c597e:; BB(0x005c597e);
    /* 005c597e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005c597f: ret 4 */ FN_RET(0x005c596c); r_esp += 8; return;
L_005c5982:; BB(0x005c5982);
    /* 005c5982: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005c5983: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5c5988u); f_005c2f74();
    /* 005c5988: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005c5989: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005c598a: ret 4 */ FN_RET(0x005c596c); r_esp += 8; return;
}

void f_005c5990(void) /* sub_5C5990 */
{
    FN_ENTER(0x005c5990);
    /* 005c5990: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005c5991: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005c5993: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005c5995: call 0x5c59b4 */ r_esp -= 4; W32(r_esp, 0x5c599au); f_005c59b4();
    /* 005c599a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005c599e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c59a0: jne 0x5c59a6 */ if (!fZ) goto L_005c59a6;
L_005c59a2:; BB(0x005c59a2);
    /* 005c59a2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005c59a3: ret 4 */ FN_RET(0x005c5990); r_esp += 8; return;
L_005c59a6:; BB(0x005c59a6);
    /* 005c59a6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005c59a7: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5c59acu); f_005c2f74();
    /* 005c59ac: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005c59ad: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005c59ae: ret 4 */ FN_RET(0x005c5990); r_esp += 8; return;
}

void f_005c59b4(void) /* sub_5C59B4 */
{
    FN_ENTER(0x005c59b4);
    /* 005c59b4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c59b5: mov ebp, esp */ r_ebp = r_esp;
    /* 005c59b7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005c59b9: push 0x8d98b8 */ { u32 v = 0x8d98b8u; r_esp -= 4; W32(r_esp, v); }
    /* 005c59be: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005c59c4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c59c5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005c59cc: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c59cf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005c59d2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005c59d5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005c59d8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005c59db: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005c59de: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c59e1: mov edx, dword ptr [ecx + 0x12c] */ r_edx = R32((u32)(r_ecx+0x12cu));
    /* 005c59e7: mov dword ptr [ecx], 0xb0c1bc */ W32((u32)(r_ecx), 0xb0c1bcu);
    /* 005c59ed: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c59ef: je 0x5c5a0b */ if (fZ) goto L_005c5a0b;
L_005c59f1:; BB(0x005c59f1);
    /* 005c59f1: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c59f4: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 005c59f8: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005c59fd: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 005c5a01: mov dword ptr [ecx + 0x12c], 0 */ W32((u32)(r_ecx+0x12cu), 0x0u);
L_005c5a0b:; BB(0x005c5a0b);
    /* 005c5a0b: mov edx, dword ptr [ecx + 0x130] */ r_edx = R32((u32)(r_ecx+0x130u));
    /* 005c5a11: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c5a13: je 0x5c5a2f */ if (fZ) goto L_005c5a2f;
L_005c5a15:; BB(0x005c5a15);
    /* 005c5a15: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c5a18: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 005c5a1c: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005c5a21: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 005c5a25: mov dword ptr [ecx + 0x130], 0 */ W32((u32)(r_ecx+0x130u), 0x0u);
L_005c5a2f:; BB(0x005c5a2f);
    /* 005c5a2f: mov edx, dword ptr [ecx + 0x134] */ r_edx = R32((u32)(r_ecx+0x134u));
    /* 005c5a35: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c5a37: je 0x5c5a53 */ if (fZ) goto L_005c5a53;
L_005c5a39:; BB(0x005c5a39);
    /* 005c5a39: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c5a3c: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 005c5a40: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005c5a45: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 005c5a49: mov dword ptr [ecx + 0x134], 0 */ W32((u32)(r_ecx+0x134u), 0x0u);
L_005c5a53:; BB(0x005c5a53);
    /* 005c5a53: mov edx, dword ptr [ecx + 0x140] */ r_edx = R32((u32)(r_ecx+0x140u));
    /* 005c5a59: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c5a5b: je 0x5c5a77 */ if (fZ) goto L_005c5a77;
L_005c5a5d:; BB(0x005c5a5d);
    /* 005c5a5d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c5a60: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 005c5a64: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005c5a69: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 005c5a6d: mov dword ptr [ecx + 0x140], 0 */ W32((u32)(r_ecx+0x140u), 0x0u);
L_005c5a77:; BB(0x005c5a77);
    /* 005c5a77: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005c5a7e: call 0x5c5a94 */ r_esp -= 4; W32(r_esp, 0x5c5a83u); f_005c5a94();
    /* 005c5a83: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c5a86: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005c5a8d: mov esp, ebp */ r_esp = r_ebp;
    /* 005c5a8f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c5a90: ret  */ FN_RET(0x005c59b4); r_esp += 4; return;
}

void f_005c5a94(void) /* sub_5C5A94 */
{
    FN_ENTER(0x005c5a94);
    /* 005c5a94: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c5a95: mov ebp, esp */ r_ebp = r_esp;
    /* 005c5a97: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005c5a99: push 0x8d98d4 */ { u32 v = 0x8d98d4u; r_esp -= 4; W32(r_esp, v); }
    /* 005c5a9e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005c5aa4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c5aa5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005c5aac: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c5aaf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005c5ab2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005c5ab5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005c5ab8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005c5abb: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005c5abe: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c5ac1: mov dword ptr [ecx], 0xb0c1a8 */ W32((u32)(r_ecx), 0xb0c1a8u);
    /* 005c5ac7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005c5ace: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x5c5ad3u); f_008171e8();
    /* 005c5ad3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c5ad6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005c5add: mov esp, ebp */ r_esp = r_ebp;
    /* 005c5adf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c5ae0: ret  */ FN_RET(0x005c5a94); r_esp += 4; return;
}

void f_005c5ae4(void) /* sub_5C5AE4 */
{
    FN_ENTER(0x005c5ae4);
    /* 005c5ae4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005c5ae5: mov edi, ecx */ r_edi = r_ecx;
    /* 005c5ae7: mov ecx, edi */ r_ecx = r_edi;
    /* 005c5ae9: call 0x5c5b44 */ r_esp -= 4; W32(r_esp, 0x5c5aeeu); f_005c5b44();
    /* 005c5aee: mov dword ptr [edi + 0x4c], 0x3f800000 */ W32((u32)(r_edi+0x4cu), 0x3f800000u);
    /* 005c5af5: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c5af7: mov dword ptr [edi + 0x40], edx */ W32((u32)(r_edi+0x40u), r_edx);
    /* 005c5afa: mov dword ptr [edi + 0x44], edx */ W32((u32)(r_edi+0x44u), r_edx);
    /* 005c5afd: mov dword ptr [edi + 0x5c], 0x40400000 */ W32((u32)(r_edi+0x5cu), 0x40400000u);
    /* 005c5b04: mov dword ptr [edi + 0x48], edx */ W32((u32)(r_edi+0x48u), r_edx);
    /* 005c5b07: mov dword ptr [edi + 0x50], edx */ W32((u32)(r_edi+0x50u), r_edx);
    /* 005c5b0a: mov dword ptr [edi + 0x54], edx */ W32((u32)(r_edi+0x54u), r_edx);
    /* 005c5b0d: mov dword ptr [edi + 0x60], 0x3f800000 */ W32((u32)(r_edi+0x60u), 0x3f800000u);
    /* 005c5b14: mov dword ptr [edi + 0x58], edx */ W32((u32)(r_edi+0x58u), r_edx);
    /* 005c5b17: mov dword ptr [edi + 0x70], edx */ W32((u32)(r_edi+0x70u), r_edx);
    /* 005c5b1a: mov dword ptr [edi + 0x74], edx */ W32((u32)(r_edi+0x74u), r_edx);
    /* 005c5b1d: mov dword ptr [edi + 0x64], 0x3f800000 */ W32((u32)(r_edi+0x64u), 0x3f800000u);
    /* 005c5b24: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 005c5b29: mov dword ptr [edi + 0x78], eax */ W32((u32)(r_edi+0x78u), r_eax);
    /* 005c5b2c: mov dword ptr [edi + 0x7c], eax */ W32((u32)(r_edi+0x7cu), r_eax);
    /* 005c5b2f: mov dword ptr [edi + 0x68], 0x3f800000 */ W32((u32)(r_edi+0x68u), 0x3f800000u);
    /* 005c5b36: mov eax, edi */ r_eax = r_edi;
    /* 005c5b38: mov dword ptr [edi + 0x6c], 0x3f800000 */ W32((u32)(r_edi+0x6cu), 0x3f800000u);
    /* 005c5b3f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005c5b40: ret  */ FN_RET(0x005c5ae4); r_esp += 4; return;
}

void f_005c5b44(void) /* sub_5C5B44 */
{
    FN_ENTER(0x005c5b44);
    /* 005c5b44: mov dword ptr [ecx], 0 */ W32((u32)(r_ecx), 0x0u);
    /* 005c5b4a: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 005c5b4f: mov dword ptr [ecx + 4], 0 */ W32((u32)(r_ecx+0x4u), 0x0u);
    /* 005c5b56: mov edx, 0xffff */ r_edx = 0xffffu;
    /* 005c5b5b: mov word ptr [ecx + 0x14], dx */ W16((u32)(r_ecx+0x14u), (u16)r_edx);
    /* 005c5b5f: mov dword ptr [ecx + 8], 0 */ W32((u32)(r_ecx+0x8u), 0x0u);
    /* 005c5b66: mov word ptr [ecx + 0x16], ax */ W16((u32)(r_ecx+0x16u), (u16)r_eax);
    /* 005c5b6a: mov dword ptr [ecx + 0x18], eax */ W32((u32)(r_ecx+0x18u), r_eax);
    /* 005c5b6d: mov eax, ecx */ r_eax = r_ecx;
    /* 005c5b6f: mov dword ptr [ecx + 0xc], 0x40a00000 */ W32((u32)(r_ecx+0xcu), 0x40a00000u);
    /* 005c5b76: mov dword ptr [ecx + 0x10], 1 */ W32((u32)(r_ecx+0x10u), 0x1u);
    /* 005c5b7d: mov dword ptr [ecx + 0x1c], 0 */ W32((u32)(r_ecx+0x1cu), 0x0u);
    /* 005c5b84: mov dword ptr [ecx + 0x20], 0x3f800000 */ W32((u32)(r_ecx+0x20u), 0x3f800000u);
    /* 005c5b8b: mov dword ptr [ecx + 0x24], 0 */ W32((u32)(r_ecx+0x24u), 0x0u);
    /* 005c5b92: ret  */ FN_RET(0x005c5b44); r_esp += 4; return;
}

void f_005c5b94(void) /* sub_5C5B94 */
{
    FN_ENTER(0x005c5b94);
    /* 005c5b94: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005c5b95: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005c5b96: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c5b97: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005c5b98: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c5b9b: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005c5b9d: call 0x7b8cec */ r_esp -= 4; W32(r_esp, 0x5c5ba2u); f_007b8cec();
    /* 005c5ba2: lea ebx, [ebp + 0x1c] */ r_ebx = (u32)(r_ebp+0x1cu);
    /* 005c5ba5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005c5ba6: call 0x7b976c */ r_esp -= 4; W32(r_esp, 0x5c5babu); f_007b976c();
    /* 005c5bab: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005c5bac: mov eax, dword ptr [ebp + 0xc0] */ r_eax = R32((u32)(r_ebp+0xc0u));
    /* 005c5bb2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c5bb4: je 0x5c5bbd */ if (fZ) goto L_005c5bbd;
L_005c5bb6:; BB(0x005c5bb6);
    /* 005c5bb6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005c5bb7: call 0x7b8d60 */ r_esp -= 4; W32(r_esp, 0x5c5bbcu); f_007b8d60();
    /* 005c5bbc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_005c5bbd:; BB(0x005c5bbd);
    /* 005c5bbd: mov eax, dword ptr [ebp + 0xbc] */ r_eax = R32((u32)(r_ebp+0xbcu));
    /* 005c5bc3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c5bc5: je 0x5c5bce */ if (fZ) goto L_005c5bce;
L_005c5bc7:; BB(0x005c5bc7);
    /* 005c5bc7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005c5bc8: call 0x7b9788 */ r_esp -= 4; W32(r_esp, 0x5c5bcdu); f_007b9788();
    /* 005c5bcd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_005c5bce:; BB(0x005c5bce);
    /* 005c5bce: mov eax, dword ptr [0xaae15c] */ r_eax = R32((u32)(0xaae15cu));
    /* 005c5bd3: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005c5bd5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c5bd7: je 0x5c5d54 */ if (fZ) goto L_005c5d54;
L_005c5bdd:; BB(0x005c5bdd);
    /* 005c5bdd: lea ecx, [ebp + 0x60] */ r_ecx = (u32)(r_ebp+0x60u);
    /* 005c5be0: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 005c5be4: lea ebx, [edx + edx] */ r_ebx = (u32)(r_edx+r_edx);
    /* 005c5be7: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005c5be9: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005c5beb: mov esi, edx */ r_esi = r_edx;
L_005c5bed:; BB(0x005c5bed);
    /* 005c5bed: lea edi, [ebx + 0xaad660] */ r_edi = (u32)(r_ebx+0xaad660u);
    /* 005c5bf3: mov edx, dword ptr [ebp + 0xa0] */ r_edx = R32((u32)(r_ebp+0xa0u));
    /* 005c5bf9: cmp edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c5bfc: jge 0x5c5d46 */ if ((fS==fO)) goto L_005c5d46;
L_005c5c02:; BB(0x005c5c02);
    /* 005c5c02: mov edx, dword ptr [ebx + 0xaad660] */ r_edx = R32((u32)(r_ebx+0xaad660u));
    /* 005c5c08: movzx edx, word ptr [edx + 0x1c] */ r_edx = (u32)R16((u32)(r_edx+0x1cu));
    /* 005c5c0c: movzx ecx, word ptr [ebp + 0xa8] */ r_ecx = (u32)R16((u32)(r_ebp+0xa8u));
    /* 005c5c13: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c5c15: je 0x5c5d46 */ if (fZ) goto L_005c5d46;
L_005c5c1b:; BB(0x005c5c1b);
    /* 005c5c1b: mov eax, 1 */ r_eax = 0x1u;
    /* 005c5c20: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 005c5c24: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x5c5c29u); f_00687c48();
    /* 005c5c29: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c5c2b: je 0x5c5c38 */ if (fZ) goto L_005c5c38;
L_005c5c2d:; BB(0x005c5c2d);
    /* 005c5c2d: mov ecx, dword ptr [ebx + 0xaad660] */ r_ecx = R32((u32)(r_ebx+0xaad660u));
    /* 005c5c33: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 005c5c36: jmp 0x5c5c53 */ goto L_005c5c53;
L_005c5c38:; BB(0x005c5c38);
    /* 005c5c38: mov ecx, dword ptr [ebx + 0xaad660] */ r_ecx = R32((u32)(r_ebx+0xaad660u));
    /* 005c5c3e: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 005c5c41: mov eax, edx */ r_eax = r_edx;
    /* 005c5c43: and eax, 0x60000000 */ {  u32 a = r_eax; u32 b = 0x60000000u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005c5c48: cmp eax, 0x20000000 */ {  u32 a = r_eax; u32 b = 0x20000000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c5c4d: je 0x5c5d95 */ if (fZ) goto L_005c5d95;
L_005c5c53:; BB(0x005c5c53);
    /* 005c5c53: test edx, 0x4000000 */ {  u32 a = r_edx; u32 b = 0x4000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c5c59: je 0x5c5c65 */ if (fZ) goto L_005c5c65;
L_005c5c5b:; BB(0x005c5c5b);
    /* 005c5c5b: mov eax, dword ptr [0xaae15c] */ r_eax = R32((u32)(0xaae15cu));
    /* 005c5c60: jmp 0x5c5d46 */ goto L_005c5d46;
L_005c5c65:; BB(0x005c5c65);
    /* 005c5c65: mov eax, dword ptr [ebx + 0xaad664] */ r_eax = R32((u32)(r_ebx+0xaad664u));
    /* 005c5c6b: mov edx, dword ptr [ecx + 0xa4] */ r_edx = R32((u32)(r_ecx+0xa4u));
    /* 005c5c71: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 005c5c75: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005c5c79: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 005c5c7c: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c5c7e: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005c5c80: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c5c82: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c5c84: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005c5c86: mov eax, dword ptr [edx + ecx*4 + 0x18] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x18u));
    /* 005c5c8a: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 005c5c8e: test eax, 0x2000000 */ {  u32 a = r_eax; u32 b = 0x2000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c5c93: je 0x5c5c9f */ if (fZ) goto L_005c5c9f;
L_005c5c95:; BB(0x005c5c95);
    /* 005c5c95: mov eax, dword ptr [0xaae15c] */ r_eax = R32((u32)(0xaae15cu));
    /* 005c5c9a: jmp 0x5c5d46 */ goto L_005c5d46;
L_005c5c9f:; BB(0x005c5c9f);
    /* 005c5c9f: test eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c5ca4: je 0x5c5cb0 */ if (fZ) goto L_005c5cb0;
L_005c5ca6:; BB(0x005c5ca6);
    /* 005c5ca6: mov eax, dword ptr [0xaae15c] */ r_eax = R32((u32)(0xaae15cu));
    /* 005c5cab: jmp 0x5c5d46 */ goto L_005c5d46;
L_005c5cb0:; BB(0x005c5cb0);
    /* 005c5cb0: test eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c5cb5: je 0x5c5cc1 */ if (fZ) goto L_005c5cc1;
L_005c5cb7:; BB(0x005c5cb7);
    /* 005c5cb7: mov eax, dword ptr [0xaae15c] */ r_eax = R32((u32)(0xaae15cu));
    /* 005c5cbc: jmp 0x5c5d46 */ goto L_005c5d46;
L_005c5cc1:; BB(0x005c5cc1);
    /* 005c5cc1: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 005c5cc5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c5cc7: je 0x5c5d8e */ if (fZ) goto L_005c5d8e;
L_005c5ccd:; BB(0x005c5ccd);
    /* 005c5ccd: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 005c5cd1: mov eax, dword ptr [ebp + 0xa0] */ r_eax = R32((u32)(r_ebp+0xa0u));
    /* 005c5cd7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c5cd9: je 0x5c5cf5 */ if (fZ) goto L_005c5cf5;
L_005c5cdb:; BB(0x005c5cdb);
    /* 005c5cdb: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 005c5cde: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
L_005c5ce2:; BB(0x005c5ce2);
    /* 005c5ce2: cmp ecx, dword ptr [edx] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c5ce4: je 0x5c5d7b */ if (fZ) goto L_005c5d7b;
L_005c5cea:; BB(0x005c5cea);
    /* 005c5cea: add edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c5ced: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 005c5cf0: jne 0x5c5ce2 */ if (!fZ) goto L_005c5ce2;
L_005c5cf2:; BB(0x005c5cf2);
    /* 005c5cf2: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
L_005c5cf5:; BB(0x005c5cf5);
    /* 005c5cf5: movzx eax, word ptr [ecx + 0x96] */ r_eax = (u32)R16((u32)(r_ecx+0x96u));
    /* 005c5cfc: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c5cff: jne 0x5c5d08 */ if (!fZ) goto L_005c5d08;
L_005c5d01:; BB(0x005c5d01);
    /* 005c5d01: mov eax, 1 */ r_eax = 0x1u;
    /* 005c5d06: jmp 0x5c5d0a */ goto L_005c5d0a;
L_005c5d08:; BB(0x005c5d08);
    /* 005c5d08: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005c5d0a:; BB(0x005c5d0a);
    /* 005c5d0a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c5d0c: je 0x5c5d41 */ if (fZ) goto L_005c5d41;
L_005c5d0e:; BB(0x005c5d0e);
    /* 005c5d0e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005c5d0f: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 005c5d11: mov eax, dword ptr [ebx + 0xaad664] */ r_eax = R32((u32)(r_ebx+0xaad664u));
    /* 005c5d17: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 005c5d1a: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 005c5d1d: add dword ptr [ebp + 0xa0], 1 */ { u32 ad = (u32)(r_ebp+0xa0u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 005c5d24: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005c5d26: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x5c5d29u); call_ind(t); }
    /* 005c5d29: mov eax, dword ptr [ebp + 0xa4] */ r_eax = R32((u32)(r_ebp+0xa4u));
    /* 005c5d2f: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 005c5d32: mov dword ptr [ebp + 0xa4], eax */ W32((u32)(r_ebp+0xa4u), r_eax);
    /* 005c5d38: je 0x5c5d61 */ if (fZ) goto L_005c5d61;
L_005c5d3a:; BB(0x005c5d3a);
    /* 005c5d3a: mov eax, dword ptr [0xaae15c] */ r_eax = R32((u32)(0xaae15cu));
    /* 005c5d3f: jmp 0x5c5d46 */ goto L_005c5d46;
L_005c5d41:; BB(0x005c5d41);
    /* 005c5d41: mov eax, dword ptr [0xaae15c] */ r_eax = R32((u32)(0xaae15cu));
L_005c5d46:; BB(0x005c5d46);
    /* 005c5d46: add ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005c5d49: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005c5d4c: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c5d4e: jne 0x5c5bed */ if (!fZ) goto L_005c5bed;
L_005c5d54:; BB(0x005c5d54);
    /* 005c5d54: call 0x7b8cec */ r_esp -= 4; W32(r_esp, 0x5c5d59u); f_007b8cec();
    /* 005c5d59: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005c5d5c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005c5d5d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c5d5e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005c5d5f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005c5d60: ret  */ FN_RET(0x005c5b94); r_esp += 4; return;
L_005c5d61:; BB(0x005c5d61);
    /* 005c5d61: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 005c5d65: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005c5d6a: mov word ptr [ebp + 8], ax */ W16((u32)(r_ebp+0x8u), (u16)r_eax);
    /* 005c5d6e: call 0x7b8cec */ r_esp -= 4; W32(r_esp, 0x5c5d73u); f_007b8cec();
    /* 005c5d73: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005c5d76: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005c5d77: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c5d78: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005c5d79: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005c5d7a: ret  */ FN_RET(0x005c5b94); r_esp += 4; return;
L_005c5d7b:; BB(0x005c5d7b);
    /* 005c5d7b: cmp ebp, dword ptr [edx + 4] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_edx+0x4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c5d7e: jne 0x5c5cea */ if (!fZ) goto L_005c5cea;
L_005c5d84:; BB(0x005c5d84);
    /* 005c5d84: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
    /* 005c5d87: mov eax, dword ptr [0xaae15c] */ r_eax = R32((u32)(0xaae15cu));
    /* 005c5d8c: jmp 0x5c5d46 */ goto L_005c5d46;
L_005c5d8e:; BB(0x005c5d8e);
    /* 005c5d8e: mov eax, dword ptr [0xaae15c] */ r_eax = R32((u32)(0xaae15cu));
    /* 005c5d93: jmp 0x5c5d46 */ goto L_005c5d46;
L_005c5d95:; BB(0x005c5d95);
    /* 005c5d95: call 0x7ba980 */ r_esp -= 4; W32(r_esp, 0x5c5d9au); f_007ba980();
    /* 005c5d9a: mov ecx, dword ptr [ebx + 0xaad660] */ r_ecx = R32((u32)(r_ebx+0xaad660u));
    /* 005c5da0: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 005c5da3: cmp ax, word ptr [ebp + 0xaa] */ {  u32 a = (u16)r_eax; u32 b = R16((u32)(r_ebp+0xaau)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 005c5daa: je 0x5c5dba */ if (fZ) goto L_005c5dba;
L_005c5dac:; BB(0x005c5dac);
    /* 005c5dac: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 005c5daf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005c5db1: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 005c5db5: jmp 0x5c5c53 */ goto L_005c5c53;
L_005c5dba:; BB(0x005c5dba);
    /* 005c5dba: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 005c5dbd: jmp 0x5c5c53 */ goto L_005c5c53;
}

void f_005c5dd0(void) /* sub_5C5DD0 */
{
    FN_ENTER(0x005c5dd0);
    /* 005c5dd0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005c5dd1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005c5dd2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c5dd3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005c5dd4: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c5dd7: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005c5dd9: movzx edx, word ptr [ebx + 0xa8] */ r_edx = (u32)R16((u32)(r_ebx+0xa8u));
    /* 005c5de0: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 005c5de4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c5de5: mov edi, dword ptr [eax] */ r_edi = R32((u32)(r_eax));
    /* 005c5de7: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x5c5decu); f_0068d5a8();
    /* 005c5dec: mov ebp, eax */ r_ebp = r_eax;
    /* 005c5dee: push dword ptr [ebx + 0xac] */ { u32 v = R32((u32)(r_ebx+0xacu)); r_esp -= 4; W32(r_esp, v); }
    /* 005c5df4: call 0x5c5528 */ r_esp -= 4; W32(r_esp, 0x5c5df9u); f_005c5528();
    /* 005c5df9: mov esi, eax */ r_esi = r_eax;
    /* 005c5dfb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c5dfe: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 005c5e02: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c5e04: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 005c5e07: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 005c5e0a: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c5e0c: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005c5e0e: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c5e10: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c5e12: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005c5e14: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c5e16: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c5e18: add ecx, dword ptr [edx + 0xa4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0xa4u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c5e1e: mov dword ptr [esp + 0x30], ecx */ W32((u32)(r_esp+0x30u), r_ecx);
    /* 005c5e22: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c5e24: je 0x5c5f4d */ if (fZ) goto L_005c5f4d;
L_005c5e2a:; BB(0x005c5e2a);
    /* 005c5e2a: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c5e2c: je 0x5c5f4d */ if (fZ) goto L_005c5f4d;
L_005c5e32:; BB(0x005c5e32);
    /* 005c5e32: push dword ptr [ebx + 0xb0] */ { u32 v = R32((u32)(r_ebx+0xb0u)); r_esp -= 4; W32(r_esp, v); }
    /* 005c5e38: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c5e3a: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005c5e3c: mov ecx, edi */ r_ecx = r_edi;
    /* 005c5e3e: mov edx, dword ptr [esp + 0x38] */ r_edx = R32((u32)(r_esp+0x38u));
    /* 005c5e42: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c5e43: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c5e44: call dword ptr [eax + 0x54] */ { u32 t = R32((u32)(r_eax+0x54u)); r_esp -= 4; W32(r_esp, 0x5c5e47u); call_ind(t); }
    /* 005c5e47: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c5e49: je 0x5c5f4d */ if (fZ) goto L_005c5f4d;
L_005c5e4f:; BB(0x005c5e4f);
    /* 005c5e4f: fld dword ptr [0x92bc8c] */ FPUSH(R_F32((u32)(0x92bc8cu)));
    /* 005c5e55: mov edx, dword ptr [ebx + 0xb8] */ r_edx = R32((u32)(r_ebx+0xb8u));
    /* 005c5e5b: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 005c5e5f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c5e61: je 0x5c5ead */ if (fZ) goto L_005c5ead;
L_005c5e63:; BB(0x005c5e63);
    /* 005c5e63: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c5e66: jne 0x5c5e97 */ if (!fZ) goto L_005c5e97;
L_005c5e68:; BB(0x005c5e68);
    /* 005c5e68: push dword ptr [ebx + 0xb4] */ { u32 v = R32((u32)(r_ebx+0xb4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005c5e6e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c5e6f: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 005c5e71: mov ecx, edi */ r_ecx = r_edi;
    /* 005c5e73: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x5c5e76u); call_ind(t); }
    /* 005c5e76: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 005c5e7a: fld dword ptr [0x92bc88] */ FPUSH(R_F32((u32)(0x92bc88u)));
    /* 005c5e80: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 005c5e82: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c5e85: fmul dword ptr [esp + 0x34] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x34u));
    /* 005c5e89: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 005c5e8d: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 005c5e90: mov ecx, edi */ r_ecx = r_edi;
    /* 005c5e92: call dword ptr [edx + 0x68] */ { u32 t = R32((u32)(r_edx+0x68u)); r_esp -= 4; W32(r_esp, 0x5c5e95u); call_ind(t); }
    /* 005c5e95: jmp 0x5c5ebf */ goto L_005c5ebf;
L_005c5e97:; BB(0x005c5e97);
    /* 005c5e97: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c5e9a: jne 0x5c5ebf */ if (!fZ) goto L_005c5ebf;
L_005c5e9c:; BB(0x005c5e9c);
    /* 005c5e9c: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 005c5ea0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c5ea1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c5ea2: mov ebx, dword ptr [edi] */ r_ebx = R32((u32)(r_edi));
    /* 005c5ea4: mov ecx, edi */ r_ecx = r_edi;
    /* 005c5ea6: call dword ptr [ebx + 0x64] */ { u32 t = R32((u32)(r_ebx+0x64u)); r_esp -= 4; W32(r_esp, 0x5c5ea9u); call_ind(t); }
    /* 005c5ea9: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005c5eab: jmp 0x5c5ebf */ goto L_005c5ebf;
L_005c5ead:; BB(0x005c5ead);
    /* 005c5ead: push dword ptr [ebx + 0xb4] */ { u32 v = R32((u32)(r_ebx+0xb4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005c5eb3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c5eb4: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 005c5eb6: mov ecx, edi */ r_ecx = r_edi;
    /* 005c5eb8: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x5c5ebbu); call_ind(t); }
    /* 005c5ebb: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
L_005c5ebf:; BB(0x005c5ebf);
    /* 005c5ebf: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 005c5ec3: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 005c5ec7: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 005c5ecc: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005c5ed1: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 005c5ed5: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 005c5ed9: fistp dword ptr [esp + 0x24] */ W32((u32)(r_esp+0x24u), (u32)fx_int32(ST(0))); FPOP();
    /* 005c5edd: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 005c5ee1: mov ebx, dword ptr [esp + 0x24] */ r_ebx = R32((u32)(r_esp+0x24u));
    /* 005c5ee5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005c5ee6: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005c5ee8: call 0x69b4f0 */ r_esp -= 4; W32(r_esp, 0x5c5eedu); f_0069b4f0();
    /* 005c5eed: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 005c5ef0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005c5ef1: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005c5ef4: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005c5ef6: call dword ptr [edx + 0x134] */ { u32 t = R32((u32)(r_edx+0x134u)); r_esp -= 4; W32(r_esp, 0x5c5efcu); call_ind(t); }
    /* 005c5efc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005c5efd: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005c5efe: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005c5f00: call 0x6918b4 */ r_esp -= 4; W32(r_esp, 0x5c5f05u); f_006918b4();
    /* 005c5f05: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 005c5f08: call 0x5e4aac */ r_esp -= 4; W32(r_esp, 0x5c5f0du); f_005e4aac();
    /* 005c5f0d: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 005c5f11: movzx edx, byte ptr [esi + 0xf3] */ r_edx = (u32)R8((u32)(r_esi+0xf3u));
    /* 005c5f18: movzx ebx, byte ptr [esi + 0xf4] */ r_ebx = (u32)R8((u32)(r_esi+0xf4u));
    /* 005c5f1f: mov byte ptr [esp], dl */ W8((u32)(r_esp), (u8)r_edx);
    /* 005c5f22: mov byte ptr [esp + 1], bl */ W8((u32)(r_esp+0x1u), (u8)r_ebx);
    /* 005c5f26: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 005c5f2a: mov dword ptr [esp + 0xc], edi */ W32((u32)(r_esp+0xcu), r_edi);
    /* 005c5f2e: lea ebp, [esp] */ r_ebp = (u32)(r_esp);
    /* 005c5f31: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005c5f34: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 005c5f38: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c5f39: call 0x5e5098 */ r_esp -= 4; W32(r_esp, 0x5c5f3eu); f_005e5098();
    /* 005c5f3e: mov eax, 1 */ r_eax = 0x1u;
    /* 005c5f43: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005c5f46: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005c5f47: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c5f48: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005c5f49: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005c5f4a: ret 4 */ FN_RET(0x005c5dd0); r_esp += 8; return;
L_005c5f4d:; BB(0x005c5f4d);
    /* 005c5f4d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005c5f4f: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005c5f52: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005c5f53: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c5f54: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005c5f55: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005c5f56: ret 4 */ FN_RET(0x005c5dd0); r_esp += 8; return;
}

void f_005c5f5c(void) /* sub_5C5F5C */
{
    FN_ENTER(0x005c5f5c);
    /* 005c5f5c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c5f5d: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c5f60: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005c5f62: mov eax, dword ptr [ebp + 0xd0] */ r_eax = R32((u32)(r_ebp+0xd0u));
    /* 005c5f68: lea edx, [ebp + 0x24] */ r_edx = (u32)(r_ebp+0x24u);
    /* 005c5f6b: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 005c5f6e: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 005c5f71: mov eax, dword ptr [ebp + 0xd4] */ r_eax = R32((u32)(r_ebp+0xd4u));
    /* 005c5f77: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 005c5f7b: mov eax, dword ptr [ebp + 0xd8] */ r_eax = R32((u32)(r_ebp+0xd8u));
    /* 005c5f81: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005c5f85: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x5c5f8au); f_0082ebac();
    /* 005c5f8a: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005c5f8d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c5f8e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005c5f90: call 0x5c5f9c */ r_esp -= 4; W32(r_esp, 0x5c5f95u); f_005c5f9c();
    /* 005c5f95: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005c5f98: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c5f99: ret  */ FN_RET(0x005c5f5c); r_esp += 4; return;
}

void f_005c5f9c(void) /* sub_5C5F9C */
{
    FN_ENTER(0x005c5f9c);
    /* 005c5f9c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005c5f9d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c5f9e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005c5f9f: mov edi, ecx */ r_edi = r_ecx;
    /* 005c5fa1: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 005c5fa5: lea ebp, [edi + 0x24] */ r_ebp = (u32)(r_edi+0x24u);
    /* 005c5fa8: push 0x8100 */ { u32 v = 0x8100u; r_esp -= 4; W32(r_esp, v); }
    /* 005c5fad: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005c5fae: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c5faf: call 0x77fffc */ r_esp -= 4; W32(r_esp, 0x5c5fb4u); f_0077fffc();
    /* 005c5fb4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c5fb7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c5fb9: je 0x5c6001 */ if (fZ) goto L_005c6001;
L_005c5fbb:; BB(0x005c5fbb);
    /* 005c5fbb: mov edx, dword ptr [edi + 0xe0] */ r_edx = R32((u32)(r_edi+0xe0u));
    /* 005c5fc1: or edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 005c5fc4: mov dword ptr [edi + 0xe0], edx */ W32((u32)(r_edi+0xe0u), r_edx);
    /* 005c5fca: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005c5fcd: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c5fcf: mov dword ptr [edi + 0x24], eax */ W32((u32)(r_edi+0x24u), r_eax);
    /* 005c5fd2: mov ebx, dword ptr [edx + 4] */ r_ebx = R32((u32)(r_edx+0x4u));
    /* 005c5fd5: mov dword ptr [edi + 0x28], ebx */ W32((u32)(r_edi+0x28u), r_ebx);
    /* 005c5fd8: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005c5fdb: mov edx, dword ptr [edi + 0x138] */ r_edx = R32((u32)(r_edi+0x138u));
    /* 005c5fe1: mov dword ptr [edi + 0x2c], eax */ W32((u32)(r_edi+0x2cu), r_eax);
    /* 005c5fe4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c5fe6: je 0x5c6012 */ if (fZ) goto L_005c6012;
L_005c5fe8:; BB(0x005c5fe8);
    /* 005c5fe8: lea eax, [edi + 0xd0] */ r_eax = (u32)(r_edi+0xd0u);
    /* 005c5fee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c5fef: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c5ff0: push dword ptr [edi + 0xac] */ { u32 v = R32((u32)(r_edi+0xacu)); r_esp -= 4; W32(r_esp, v); }
    /* 005c5ff6: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5c5ff8u); call_ind(t); }
    /* 005c5ff8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005c5ffb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005c5ffc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c5ffd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005c5ffe: ret 4 */ FN_RET(0x005c5f9c); r_esp += 8; return;
L_005c6001:; BB(0x005c6001);
    /* 005c6001: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 005c6003: mov dword ptr [edi + 0x24], eax */ W32((u32)(r_edi+0x24u), r_eax);
    /* 005c6006: mov edx, dword ptr [ebx + 4] */ r_edx = R32((u32)(r_ebx+0x4u));
    /* 005c6009: mov dword ptr [edi + 0x28], edx */ W32((u32)(r_edi+0x28u), r_edx);
    /* 005c600c: mov ebx, dword ptr [ebx + 8] */ r_ebx = R32((u32)(r_ebx+0x8u));
    /* 005c600f: mov dword ptr [edi + 0x2c], ebx */ W32((u32)(r_edi+0x2cu), r_ebx);
L_005c6012:; BB(0x005c6012);
    /* 005c6012: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005c6013: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c6014: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005c6015: ret 4 */ FN_RET(0x005c5f9c); r_esp += 8; return;
}

