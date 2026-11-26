#include "protos.h"

void f_005c7074(void) /* sub_5C7074 */
{
    FN_ENTER(0x005c7074);
    /* 005c7074: mov dword ptr [0xa8d85c], 0x3f800000 */ W32((u32)(0xa8d85cu), 0x3f800000u);
    /* 005c707e: mov dword ptr [0xa8d860], 0x41000000 */ W32((u32)(0xa8d860u), 0x41000000u);
    /* 005c7088: mov dword ptr [0xa8d864], 0x3fc00000 */ W32((u32)(0xa8d864u), 0x3fc00000u);
    /* 005c7092: ret  */ FN_RET(0x005c7074); r_esp += 4; return;
}

void f_005c7075(void)
{
    FN_ENTER(0x005c7075);
    /* 005c7075: add eax, 0xa8d85c */ {  u32 a = r_eax; u32 b = 0xa8d85cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c707a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 005c707c: cmp byte ptr [edi], 0xc7 */ {  u32 a = R8((u32)(r_edi)); u32 b = 0xc7u; u32 r = (a - b) & 0xffu;   }
    /* 005c707f: add eax, 0xa8d860 */ {  u32 a = r_eax; u32 b = 0xa8d860u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c7084: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 005c7086: add byte ptr [ecx - 0x39], al */ { u32 ad = (u32)(r_ecx+0xffffffc7u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 005c7089: add eax, 0xa8d864 */ {  u32 a = r_eax; u32 b = 0xa8d864u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c708e: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 005c7090: sar byte ptr [edi], 0xc3 */ { u32 ad = (u32)(r_edi); u32 c = (3u) & 31; u32 a = R8(ad); u32 r = a; if (c) { r = (u32)((i8)a >> (c > 7 ? 7 : c)) & 0xffu; W8(ad, r);  } }
    /* 005c7093: nop  */ ;
    /* 005c7094: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c7095: mov ebp, esp */ r_ebp = r_esp;
    /* 005c7097: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005c7099: push 0x8d9950 */ { u32 v = 0x8d9950u; r_esp -= 4; W32(r_esp, v); }
    /* 005c709e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005c70a4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c70a5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005c70ac: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c70af: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005c70b2: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005c70b5: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005c70b8: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005c70bb: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005c70be: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005c70c1: mov eax, ecx */ r_eax = r_ecx;
    /* 005c70c3: mov dword ptr [eax], 0xb0c258 */ W32((u32)(r_eax), 0xb0c258u);
    /* 005c70c9: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005c70d0: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x5c70d5u); f_008171e8();
    /* 005c70d5: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005c70d8: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c70da: jne 0x5c70ec */ if (!fZ) goto L_005c70ec;
L_005c70dc:; BB(0x005c70dc);
    /* 005c70dc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c70df: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005c70e6: mov esp, ebp */ r_esp = r_ebp;
    /* 005c70e8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c70e9: ret 4 */ FN_RET(0x005c7075); r_esp += 8; return;
L_005c70ec:; BB(0x005c70ec);
    /* 005c70ec: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005c70ef: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c70f0: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5c70f5u); f_005c2f74();
    /* 005c70f5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005c70f6: jmp 0x5c70dc */ goto L_005c70dc;
}

void f_005c7094(void) /* sub_5C7094 */
{
    FN_ENTER(0x005c7094);
    /* 005c7094: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c7095: mov ebp, esp */ r_ebp = r_esp;
    /* 005c7097: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005c7099: push 0x8d9950 */ { u32 v = 0x8d9950u; r_esp -= 4; W32(r_esp, v); }
    /* 005c709e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005c70a4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c70a5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005c70ac: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c70af: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005c70b2: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005c70b5: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005c70b8: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005c70bb: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005c70be: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005c70c1: mov eax, ecx */ r_eax = r_ecx;
    /* 005c70c3: mov dword ptr [eax], 0xb0c258 */ W32((u32)(r_eax), 0xb0c258u);
    /* 005c70c9: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005c70d0: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x5c70d5u); f_008171e8();
    /* 005c70d5: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005c70d8: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c70da: jne 0x5c70ec */ if (!fZ) goto L_005c70ec;
L_005c70dc:; BB(0x005c70dc);
    /* 005c70dc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c70df: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005c70e6: mov esp, ebp */ r_esp = r_ebp;
    /* 005c70e8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c70e9: ret 4 */ FN_RET(0x005c7094); r_esp += 8; return;
L_005c70ec:; BB(0x005c70ec);
    /* 005c70ec: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005c70ef: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c70f0: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5c70f5u); f_005c2f74();
    /* 005c70f5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005c70f6: jmp 0x5c70dc */ goto L_005c70dc;
}

void f_005c70f8(void) /* sub_5C70F8 */
{
    FN_ENTER(0x005c70f8);
    /* 005c70f8: mov eax, dword ptr [ecx + 0x34] */ r_eax = R32((u32)(r_ecx+0x34u));
    /* 005c70fb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c70fd: je 0x5c710c */ if (fZ) goto L_005c710c;
L_005c70ff:; BB(0x005c70ff);
    /* 005c70ff: movzx eax, word ptr [ecx + 8] */ r_eax = (u32)R16((u32)(r_ecx+0x8u));
    /* 005c7103: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c7108: mov word ptr [ecx + 8], ax */ W16((u32)(r_ecx+0x8u), (u16)r_eax);
L_005c710c:; BB(0x005c710c);
    /* 005c710c: ret  */ FN_RET(0x005c70f8); r_esp += 4; return;
}

void f_005c7110(void)
{
    FN_ENTER(0x005c7110);
    /* 005c7110: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 005c7114: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c7116: je 0x5c711d */ if (fZ) goto L_005c711d;
L_005c7118:; BB(0x005c7118);
    /* 005c7118: call 0x5c7120 */ r_esp -= 4; W32(r_esp, 0x5c711du); f_005c7120();
L_005c711d:; BB(0x005c711d);
    /* 005c711d: ret  */ FN_RET(0x005c7110); r_esp += 4; return;
}

void f_005c7120(void) /* sub_5C7120 */
{
    FN_ENTER(0x005c7120);
    /* 005c7120: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005c7121: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005c7122: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c7123: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005c7124: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c7127: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005c7129: movzx edx, word ptr [ebp + 0x2a] */ r_edx = (u32)R16((u32)(r_ebp+0x2au));
    /* 005c712d: movsx eax, word ptr [ebp + 0x2c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x2cu));
    /* 005c7131: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c7132: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c7133: call 0x7b9df0 */ r_esp -= 4; W32(r_esp, 0x5c7138u); f_007b9df0();
    /* 005c7138: mov ebx, eax */ r_ebx = r_eax;
    /* 005c713a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c713d: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c713f: je 0x5c71e8 */ if (fZ) goto L_005c71e8;
L_005c7145:; BB(0x005c7145);
    /* 005c7145: movsx edx, word ptr [ebp + 0x2c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x2cu));
    /* 005c7149: mov esi, dword ptr [ebx + 0xa4] */ r_esi = R32((u32)(r_ebx+0xa4u));
    /* 005c714f: lea edi, [edx + edx] */ r_edi = (u32)(r_edx+r_edx);
    /* 005c7152: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005c7154: sub edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 005c7156: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005c7158: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005c715a: sub edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 005c715c: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005c715e: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005c7160: lea edi, [esi + edi + 0x1c] */ r_edi = (u32)(r_esi+r_edi+0x1cu);
    /* 005c7164: lea esi, [ebp + 0x38] */ r_esi = (u32)(r_ebp+0x38u);
    /* 005c7167: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005c7168: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005c7169: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x5c716eu); f_007a9180();
    /* 005c716e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c7171: fcomp dword ptr [0x92bcb4] */ fx_compare(ST(0), R_F32((u32)(0x92bcb4u))); FPOP();
    /* 005c7177: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005c7179: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005c717a: jae 0x5c71b4 */ if (!fC) goto L_005c71b4;
L_005c717c:; BB(0x005c717c);
    /* 005c717c: movzx edx, word ptr [ebp + 0x28] */ r_edx = (u32)R16((u32)(r_ebp+0x28u));
    /* 005c7180: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c7181: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x5c7186u); f_0068d5a8();
    /* 005c7186: mov esi, eax */ r_esi = r_eax;
    /* 005c7188: push dword ptr [ebp + 0x24] */ { u32 v = R32((u32)(r_ebp+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 005c718b: call 0x5c5528 */ r_esp -= 4; W32(r_esp, 0x5c7190u); f_005c5528();
    /* 005c7190: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c7193: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7195: je 0x5c71e8 */ if (fZ) goto L_005c71e8;
L_005c7197:; BB(0x005c7197);
    /* 005c7197: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7199: je 0x5c71e8 */ if (fZ) goto L_005c71e8;
L_005c719b:; BB(0x005c719b);
    /* 005c719b: mov edi, dword ptr [eax] */ r_edi = R32((u32)(r_eax));
    /* 005c719d: movsx edx, word ptr [ebp + 0x2c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x2cu));
    /* 005c71a1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c71a2: mov ecx, eax */ r_ecx = r_eax;
    /* 005c71a4: push dword ptr [ebp + 0x30] */ { u32 v = R32((u32)(r_ebp+0x30u)); r_esp -= 4; W32(r_esp, v); }
    /* 005c71a7: push dword ptr [ebp + 0x20] */ { u32 v = R32((u32)(r_ebp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 005c71aa: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005c71ab: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005c71ac: call dword ptr [edi + 0xf8] */ { u32 t = R32((u32)(r_edi+0xf8u)); r_esp -= 4; W32(r_esp, 0x5c71b2u); call_ind(t); }
    /* 005c71b2: jmp 0x5c71e8 */ goto L_005c71e8;
L_005c71b4:; BB(0x005c71b4);
    /* 005c71b4: lea edx, [ebp + 0x44] */ r_edx = (u32)(r_ebp+0x44u);
    /* 005c71b7: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 005c71bb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c71bc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005c71bd: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x5c71c2u); f_007a9180();
    /* 005c71c2: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 005c71c6: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 005c71ca: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c71cb: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005c71cc: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x5c71d1u); f_007a9180();
    /* 005c71d1: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c71d4: fcomp dword ptr [esp] */ fx_compare(ST(0), R_F32((u32)(r_esp))); FPOP();
    /* 005c71d7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005c71d9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005c71da: jae 0x5c71e8 */ if (!fC) goto L_005c71e8;
L_005c71dc:; BB(0x005c71dc);
    /* 005c71dc: movsx edx, word ptr [ebp + 0x2c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x2cu));
    /* 005c71e0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c71e1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005c71e3: call 0x7775c4 */ r_esp -= 4; W32(r_esp, 0x5c71e8u); f_007775c4();
L_005c71e8:; BB(0x005c71e8);
    /* 005c71e8: mov dword ptr [ebp + 0x34], 1 */ W32((u32)(r_ebp+0x34u), 0x1u);
    /* 005c71ef: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005c71f2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005c71f3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c71f4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005c71f5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005c71f6: ret  */ FN_RET(0x005c7120); r_esp += 4; return;
}

void f_005c71f8(void) /* sub_5C71F8 */
{
    FN_ENTER(0x005c71f8);
    /* 005c71f8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c71f9: mov ebp, esp */ r_ebp = r_esp;
    /* 005c71fb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005c71fd: push 0x8d9992 */ { u32 v = 0x8d9992u; r_esp -= 4; W32(r_esp, v); }
    /* 005c7202: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005c7208: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c7209: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005c7210: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c7213: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005c7216: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005c7219: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005c721c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005c721f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005c7222: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c7224: je 0x5c72ff */ if (fZ) goto L_005c72ff;
L_005c722a:; BB(0x005c722a);
    /* 005c722a: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 005c722d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c722f: je 0x5c72ff */ if (fZ) goto L_005c72ff;
L_005c7235:; BB(0x005c7235);
    /* 005c7235: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005c7238: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c723a: je 0x5c72ff */ if (fZ) goto L_005c72ff;
L_005c7240:; BB(0x005c7240);
    /* 005c7240: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 005c7243: movzx edx, word ptr [eax + 0xc] */ r_edx = (u32)R16((u32)(r_eax+0xcu));
    /* 005c7247: cmp edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005c724d: je 0x5c72ff */ if (fZ) goto L_005c72ff;
L_005c7253:; BB(0x005c7253);
    /* 005c7253: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 005c7256: movzx edx, word ptr [eax + 0xe] */ r_edx = (u32)R16((u32)(r_eax+0xeu));
    /* 005c725a: cmp edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005c7260: je 0x5c72ff */ if (fZ) goto L_005c72ff;
L_005c7266:; BB(0x005c7266);
    /* 005c7266: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 005c726d: push 0x50 */ { u32 v = 0x50u; r_esp -= 4; W32(r_esp, v); }
    /* 005c726f: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5c7274u); f_005caba4();
    /* 005c7274: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005c7277: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c727a: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005c727d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c727f: je 0x5c7313 */ if (fZ) goto L_005c7313;
L_005c7285:; BB(0x005c7285);
    /* 005c7285: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 005c728c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005c7293: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 005c7296: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005c7299: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
    /* 005c729c: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 005c729f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005c72a2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c72a3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c72a4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005c72a5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005c72a6: call 0x5c731c */ r_esp -= 4; W32(r_esp, 0x5c72abu); f_005c731c();
    /* 005c72ab: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_005c72b2:; BB(0x005c72b2);
    /* 005c72b2: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005c72b9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005c72bc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c72be: je 0x5c72ff */ if (fZ) goto L_005c72ff;
L_005c72c0:; BB(0x005c72c0);
    /* 005c72c0: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 005c72c7: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 005c72c9: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5c72ceu); f_005caba4();
    /* 005c72ce: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005c72cf: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005c72d2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c72d4: je 0x5c72ff */ if (fZ) goto L_005c72ff;
L_005c72d6:; BB(0x005c72d6);
    /* 005c72d6: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 005c72dd: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005c72e4: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005c72e7: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 005c72ea: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c72eb: mov ecx, eax */ r_ecx = r_eax;
    /* 005c72ed: push 0x5c7110 */ { u32 v = 0x5c7110u; r_esp -= 4; W32(r_esp, v); }
    /* 005c72f2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005c72f3: call 0x5e5b88 */ r_esp -= 4; W32(r_esp, 0x5c72f8u); f_005e5b88();
    /* 005c72f8: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_005c72ff:; BB(0x005c72ff);
    /* 005c72ff: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c7302: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c7305: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c7308: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005c730f: mov esp, ebp */ r_esp = r_ebp;
    /* 005c7311: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c7312: ret  */ FN_RET(0x005c71f8); r_esp += 4; return;
L_005c7313:; BB(0x005c7313);
    /* 005c7313: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005c7315: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005c7318: jmp 0x5c72b2 */ goto L_005c72b2;
}

void f_005c731c(void) /* sub_5C731C */
{
    FN_ENTER(0x005c731c);
    /* 005c731c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c731d: mov ebp, esp */ r_ebp = r_esp;
    /* 005c731f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005c7321: push 0x8d99ac */ { u32 v = 0x8d99acu; r_esp -= 4; W32(r_esp, v); }
    /* 005c7326: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005c732c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c732d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005c7334: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c7337: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005c733a: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 005c733d: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 005c7340: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 005c7343: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005c7346: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005c7349: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 005c734c: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 005c734f: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005c7352: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 005c7355: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x5c735au); f_008193cc();
    /* 005c735a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005c7361: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005c7364: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005c7367: mov dword ptr [ecx], 0xb0c258 */ W32((u32)(r_ecx), 0xb0c258u);
    /* 005c736d: mov ebx, dword ptr [0x9c2110] */ r_ebx = R32((u32)(0x9c2110u));
    /* 005c7373: mov dword ptr [ecx + 4], ebx */ W32((u32)(r_ecx+0x4u), r_ebx);
    /* 005c7376: mov esi, dword ptr [edx] */ r_esi = R32((u32)(r_edx));
    /* 005c7378: mov dword ptr [ecx + 0x1c], esi */ W32((u32)(r_ecx+0x1cu), r_esi);
    /* 005c737b: mov edi, dword ptr [edx + 4] */ r_edi = R32((u32)(r_edx+0x4u));
    /* 005c737e: mov dword ptr [ecx + 0x20], edi */ W32((u32)(r_ecx+0x20u), r_edi);
    /* 005c7381: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005c7384: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 005c7387: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 005c738a: mov dword ptr [ecx + 0x28], eax */ W32((u32)(r_ecx+0x28u), r_eax);
    /* 005c738d: mov ebx, dword ptr [edx + 0x10] */ r_ebx = R32((u32)(r_edx+0x10u));
    /* 005c7390: mov dword ptr [ecx + 0x2c], ebx */ W32((u32)(r_ecx+0x2cu), r_ebx);
    /* 005c7393: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c7396: mov edx, dword ptr [edx + 0x14] */ r_edx = R32((u32)(r_edx+0x14u));
    /* 005c7399: mov dword ptr [ecx + 0x34], 0 */ W32((u32)(r_ecx+0x34u), 0x0u);
    /* 005c73a0: mov dword ptr [ecx + 0x30], edx */ W32((u32)(r_ecx+0x30u), r_edx);
    /* 005c73a3: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 005c73a5: mov dword ptr [ecx + 0x44], edx */ W32((u32)(r_ecx+0x44u), r_edx);
    /* 005c73a8: mov edx, dword ptr [ebx + 4] */ r_edx = R32((u32)(r_ebx+0x4u));
    /* 005c73ab: mov dword ptr [ecx + 0x48], edx */ W32((u32)(r_ecx+0x48u), r_edx);
    /* 005c73ae: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 005c73b1: mov dword ptr [ecx + 0x4c], edx */ W32((u32)(r_ecx+0x4cu), r_edx);
    /* 005c73b4: shr eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 005c73b7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c73b8: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x5c73bdu); f_007b4d18();
    /* 005c73bd: mov ebx, eax */ r_ebx = r_eax;
    /* 005c73bf: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c73c2: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005c73c5: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c73c7: je 0x5c7413 */ if (fZ) goto L_005c7413;
L_005c73c9:; BB(0x005c73c9);
    /* 005c73c9: movsx ecx, word ptr [edx + 0x2c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx+0x2cu));
    /* 005c73cd: mov edi, dword ptr [ebx + 0xa4] */ r_edi = R32((u32)(r_ebx+0xa4u));
    /* 005c73d3: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 005c73d6: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c73d8: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005c73da: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c73dc: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c73de: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005c73e0: mov ebx, dword ptr [edi + eax*4 + 0x1c] */ r_ebx = R32((u32)(r_edi+r_eax*4+0x1cu));
    /* 005c73e4: mov dword ptr [edx + 0x38], ebx */ W32((u32)(r_edx+0x38u), r_ebx);
    /* 005c73e7: mov esi, dword ptr [edi + eax*4 + 0x20] */ r_esi = R32((u32)(r_edi+r_eax*4+0x20u));
    /* 005c73eb: mov dword ptr [edx + 0x3c], esi */ W32((u32)(r_edx+0x3cu), r_esi);
    /* 005c73ee: mov eax, dword ptr [edi + eax*4 + 0x24] */ r_eax = R32((u32)(r_edi+r_eax*4+0x24u));
    /* 005c73f2: mov dword ptr [edx + 0x40], eax */ W32((u32)(r_edx+0x40u), r_eax);
    /* 005c73f5: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
L_005c73f8:; BB(0x005c73f8);
    /* 005c73f8: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c73fb: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c73fe: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c7401: mov eax, edx */ r_eax = r_edx;
    /* 005c7403: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c7406: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005c740d: mov esp, ebp */ r_esp = r_ebp;
    /* 005c740f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c7410: ret 0x10 */ FN_RET(0x005c731c); r_esp += 20; return;
L_005c7413:; BB(0x005c7413);
    /* 005c7413: mov dword ptr [edx + 0x34], 1 */ W32((u32)(r_edx+0x34u), 0x1u);
    /* 005c741a: jmp 0x5c73f8 */ goto L_005c73f8;
}

void f_005c7325(void)
{
    FN_ENTER(0x005c7325);
    /* 005c7325: add byte ptr [ecx], ah */ { u32 ad = (u32)(r_ecx);  u32 a = R8(ad); u32 b = (u8)(r_eax>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 005c7329: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 005c732b: add byte ptr [eax + 0x64], dl */ { u32 ad = (u32)(r_eax+0x64u);  u32 a = R8(ad); u32 b = (u8)r_edx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 005c732e: mov dword ptr [0], esp */ W32((u32)(0x0u), r_esp);
    /* 005c7334: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c7337: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005c733a: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 005c733d: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 005c7340: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 005c7343: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005c7346: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005c7349: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 005c734c: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 005c734f: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005c7352: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 005c7355: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x5c735au); f_008193cc();
    /* 005c735a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005c7361: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005c7364: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005c7367: mov dword ptr [ecx], 0xb0c258 */ W32((u32)(r_ecx), 0xb0c258u);
    /* 005c736d: mov ebx, dword ptr [0x9c2110] */ r_ebx = R32((u32)(0x9c2110u));
    /* 005c7373: mov dword ptr [ecx + 4], ebx */ W32((u32)(r_ecx+0x4u), r_ebx);
    /* 005c7376: mov esi, dword ptr [edx] */ r_esi = R32((u32)(r_edx));
    /* 005c7378: mov dword ptr [ecx + 0x1c], esi */ W32((u32)(r_ecx+0x1cu), r_esi);
    /* 005c737b: mov edi, dword ptr [edx + 4] */ r_edi = R32((u32)(r_edx+0x4u));
    /* 005c737e: mov dword ptr [ecx + 0x20], edi */ W32((u32)(r_ecx+0x20u), r_edi);
    /* 005c7381: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005c7384: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 005c7387: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 005c738a: mov dword ptr [ecx + 0x28], eax */ W32((u32)(r_ecx+0x28u), r_eax);
    /* 005c738d: mov ebx, dword ptr [edx + 0x10] */ r_ebx = R32((u32)(r_edx+0x10u));
    /* 005c7390: mov dword ptr [ecx + 0x2c], ebx */ W32((u32)(r_ecx+0x2cu), r_ebx);
    /* 005c7393: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c7396: mov edx, dword ptr [edx + 0x14] */ r_edx = R32((u32)(r_edx+0x14u));
    /* 005c7399: mov dword ptr [ecx + 0x34], 0 */ W32((u32)(r_ecx+0x34u), 0x0u);
    /* 005c73a0: mov dword ptr [ecx + 0x30], edx */ W32((u32)(r_ecx+0x30u), r_edx);
    /* 005c73a3: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 005c73a5: mov dword ptr [ecx + 0x44], edx */ W32((u32)(r_ecx+0x44u), r_edx);
    /* 005c73a8: mov edx, dword ptr [ebx + 4] */ r_edx = R32((u32)(r_ebx+0x4u));
    /* 005c73ab: mov dword ptr [ecx + 0x48], edx */ W32((u32)(r_ecx+0x48u), r_edx);
    /* 005c73ae: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 005c73b1: mov dword ptr [ecx + 0x4c], edx */ W32((u32)(r_ecx+0x4cu), r_edx);
    /* 005c73b4: shr eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 005c73b7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c73b8: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x5c73bdu); f_007b4d18();
    /* 005c73bd: mov ebx, eax */ r_ebx = r_eax;
    /* 005c73bf: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c73c2: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005c73c5: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c73c7: je 0x5c7413 */ if (fZ) goto L_005c7413;
L_005c73c9:; BB(0x005c73c9);
    /* 005c73c9: movsx ecx, word ptr [edx + 0x2c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx+0x2cu));
    /* 005c73cd: mov edi, dword ptr [ebx + 0xa4] */ r_edi = R32((u32)(r_ebx+0xa4u));
    /* 005c73d3: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 005c73d6: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c73d8: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005c73da: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c73dc: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c73de: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005c73e0: mov ebx, dword ptr [edi + eax*4 + 0x1c] */ r_ebx = R32((u32)(r_edi+r_eax*4+0x1cu));
    /* 005c73e4: mov dword ptr [edx + 0x38], ebx */ W32((u32)(r_edx+0x38u), r_ebx);
    /* 005c73e7: mov esi, dword ptr [edi + eax*4 + 0x20] */ r_esi = R32((u32)(r_edi+r_eax*4+0x20u));
    /* 005c73eb: mov dword ptr [edx + 0x3c], esi */ W32((u32)(r_edx+0x3cu), r_esi);
    /* 005c73ee: mov eax, dword ptr [edi + eax*4 + 0x24] */ r_eax = R32((u32)(r_edi+r_eax*4+0x24u));
    /* 005c73f2: mov dword ptr [edx + 0x40], eax */ W32((u32)(r_edx+0x40u), r_eax);
    /* 005c73f5: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
L_005c73f8:; BB(0x005c73f8);
    /* 005c73f8: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c73fb: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c73fe: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c7401: mov eax, edx */ r_eax = r_edx;
    /* 005c7403: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c7406: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005c740d: mov esp, ebp */ r_esp = r_ebp;
    /* 005c740f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c7410: ret 0x10 */ FN_RET(0x005c7325); r_esp += 20; return;
L_005c7413:; BB(0x005c7413);
    /* 005c7413: mov dword ptr [edx + 0x34], 1 */ W32((u32)(r_edx+0x34u), 0x1u);
    /* 005c741a: jmp 0x5c73f8 */ goto L_005c73f8;
}

void f_005c741c(void) /* sub_5C741C */
{
    FN_ENTER(0x005c741c);
    /* 005c741c: mov dword ptr [0xa8d86c], 0x3f800000 */ W32((u32)(0xa8d86cu), 0x3f800000u);
    /* 005c7426: mov dword ptr [0xa8d870], 0x41000000 */ W32((u32)(0xa8d870u), 0x41000000u);
    /* 005c7430: mov dword ptr [0xa8d874], 0x3fc00000 */ W32((u32)(0xa8d874u), 0x3fc00000u);
    /* 005c743a: ret  */ FN_RET(0x005c741c); r_esp += 4; return;
}

void f_005c743c(void) /* sub_5C743C */
{
    FN_ENTER(0x005c743c);
    /* 005c743c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005c743d: call 0x5c7468 */ r_esp -= 4; W32(r_esp, 0x5c7442u); f_005c7468();
    /* 005c7442: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005c7444: mov ebx, eax */ r_ebx = r_eax;
L_005c7446:; BB(0x005c7446);
    /* 005c7446: push dword ptr [ebx + 0xa8d87c] */ { u32 v = R32((u32)(r_ebx+0xa8d87cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005c744c: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x5c7451u); f_00857e98();
    /* 005c7451: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005c7452: mov dword ptr [ebx + 0xa8d87c], 0 */ W32((u32)(r_ebx+0xa8d87cu), 0x0u);
    /* 005c745c: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005c745f: cmp ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005c7462: jl 0x5c7446 */ if ((fS!=fO)) goto L_005c7446;
L_005c7464:; BB(0x005c7464);
    /* 005c7464: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005c7465: ret  */ FN_RET(0x005c743c); r_esp += 4; return;
}

void f_005c7468(void) /* sub_5C7468 */
{
    FN_ENTER(0x005c7468);
    /* 005c7468: mov edx, dword ptr [0xa8d884] */ r_edx = R32((u32)(0xa8d884u));
    /* 005c746e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c7470: je 0x5c748c */ if (fZ) goto L_005c748c;
L_005c7472:; BB(0x005c7472);
    /* 005c7472: mov eax, dword ptr [0xa8d888] */ r_eax = R32((u32)(0xa8d888u));
    /* 005c7477: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7479: jne 0x5c748d */ if (!fZ) goto L_005c748d;
L_005c747b:; BB(0x005c747b);
    /* 005c747b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c747c: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x5c7481u); f_00857e98();
    /* 005c7481: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_005c7482:; BB(0x005c7482);
    /* 005c7482: mov dword ptr [0xa8d884], 0 */ W32((u32)(0xa8d884u), 0x0u);
L_005c748c:; BB(0x005c748c);
    /* 005c748c: ret  */ FN_RET(0x005c7468); r_esp += 4; return;
L_005c748d:; BB(0x005c748d);
    /* 005c748d: push 0x92bcb8 */ { u32 v = 0x92bcb8u; r_esp -= 4; W32(r_esp, v); }
    /* 005c7492: call 0x5b9008 */ r_esp -= 4; W32(r_esp, 0x5c7497u); f_005b9008();
    /* 005c7497: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005c7498: jmp 0x5c7482 */ goto L_005c7482;
}

void f_005c749c(void) /* sub_5C749C */
{
    FN_ENTER(0x005c749c);
    /* 005c749c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005c749d: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 005c74a1: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c74a3: jne 0x5c74ac */ if (!fZ) goto L_005c74ac;
L_005c74a5:; BB(0x005c74a5);
    /* 005c74a5: mov eax, dword ptr [0xa8d884] */ r_eax = R32((u32)(0xa8d884u));
    /* 005c74aa: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005c74ab: ret  */ FN_RET(0x005c749c); r_esp += 4; return;
L_005c74ac:; BB(0x005c74ac);
    /* 005c74ac: call 0x5c7468 */ r_esp -= 4; W32(r_esp, 0x5c74b1u); f_005c7468();
    /* 005c74b1: call 0x5b7a28 */ r_esp -= 4; W32(r_esp, 0x5c74b6u); f_005b7a28();
    /* 005c74b6: mov dword ptr [0xa8d888], eax */ W32((u32)(0xa8d888u), r_eax);
    /* 005c74bb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c74bd: je 0x5c74c7 */ if (fZ) goto L_005c74c7;
L_005c74bf:; BB(0x005c74bf);
    /* 005c74bf: cmp edi, 0x90000 */ {  u32 a = r_edi; u32 b = 0x90000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c74c5: jl 0x5c74d5 */ if ((fS!=fO)) goto L_005c74d5;
L_005c74c7:; BB(0x005c74c7);
    /* 005c74c7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005c74c8: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5c74cdu); f_008581c5();
    /* 005c74cd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005c74ce: mov dword ptr [0xa8d884], eax */ W32((u32)(0xa8d884u), r_eax);
    /* 005c74d3: jmp 0x5c74a5 */ goto L_005c74a5;
L_005c74d5:; BB(0x005c74d5);
    /* 005c74d5: push 0x92bcb8 */ { u32 v = 0x92bcb8u; r_esp -= 4; W32(r_esp, v); }
    /* 005c74da: call 0x5b7a44 */ r_esp -= 4; W32(r_esp, 0x5c74dfu); f_005b7a44();
    /* 005c74df: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005c74e0: mov dword ptr [0xa8d884], eax */ W32((u32)(0xa8d884u), r_eax);
    /* 005c74e5: jmp 0x5c74a5 */ goto L_005c74a5;
}

void f_005c74e8(void) /* sub_5C74E8 */
{
    FN_ENTER(0x005c74e8);
    /* 005c74e8: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 005c74ec: mov eax, dword ptr [edx*4 + 0xa8d87c] */ r_eax = R32((u32)(r_edx*4+0xa8d87cu));
    /* 005c74f3: ret  */ FN_RET(0x005c74e8); r_esp += 4; return;
}

void f_005c74f4(void) /* sub_5C74F4 */
{
    FN_ENTER(0x005c74f4);
    /* 005c74f4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005c74f5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005c74f7: mov dword ptr [0xa8d888], eax */ W32((u32)(0xa8d888u), r_eax);
    /* 005c74fc: mov dword ptr [0xa8d884], eax */ W32((u32)(0xa8d884u), r_eax);
    /* 005c7501: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005c7503: mov ebx, eax */ r_ebx = r_eax;
L_005c7505:; BB(0x005c7505);
    /* 005c7505: push 0x200 */ { u32 v = 0x200u; r_esp -= 4; W32(r_esp, v); }
    /* 005c750a: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5c750fu); f_008581c5();
    /* 005c750f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005c7510: mov dword ptr [ebx + 0xa8d87c], eax */ W32((u32)(r_ebx+0xa8d87cu), r_eax);
    /* 005c7516: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005c7519: cmp ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005c751c: jl 0x5c7505 */ if ((fS!=fO)) goto L_005c7505;
L_005c751e:; BB(0x005c751e);
    /* 005c751e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005c751f: ret  */ FN_RET(0x005c74f4); r_esp += 4; return;
}

void f_005c7520(void) /* sub_5C7520 */
{
    FN_ENTER(0x005c7520);
    /* 005c7520: push dword ptr [0xa8d890] */ { u32 v = R32((u32)(0xa8d890u)); r_esp -= 4; W32(r_esp, v); }
    /* 005c7526: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x5c752bu); f_00857e98();
    /* 005c752b: push dword ptr [0xa8d898] */ { u32 v = R32((u32)(0xa8d898u)); r_esp -= 4; W32(r_esp, v); }
    /* 005c7531: mov dword ptr [0xa8d890], 0 */ W32((u32)(0xa8d890u), 0x0u);
    /* 005c753b: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x5c7540u); f_00857e98();
    /* 005c7540: push dword ptr [0xa8d89c] */ { u32 v = R32((u32)(0xa8d89cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005c7546: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005c7548: mov dword ptr [0xa8d898], eax */ W32((u32)(0xa8d898u), r_eax);
    /* 005c754d: mov dword ptr [0xa8d894], eax */ W32((u32)(0xa8d894u), r_eax);
    /* 005c7552: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x5c7557u); f_00857e98();
    /* 005c7557: push dword ptr [0xa8d8a0] */ { u32 v = R32((u32)(0xa8d8a0u)); r_esp -= 4; W32(r_esp, v); }
    /* 005c755d: mov dword ptr [0xa8d89c], 0 */ W32((u32)(0xa8d89cu), 0x0u);
    /* 005c7567: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x5c756cu); f_00857e98();
    /* 005c756c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c756f: mov eax, dword ptr [0xa8d8a4] */ r_eax = R32((u32)(0xa8d8a4u));
    /* 005c7574: mov dword ptr [0xa8d8a0], 0 */ W32((u32)(0xa8d8a0u), 0x0u);
    /* 005c757e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7580: je 0x5c7589 */ if (fZ) goto L_005c7589;
L_005c7582:; BB(0x005c7582);
    /* 005c7582: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c7583: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x5c7588u); f_00857e98();
    /* 005c7588: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_005c7589:; BB(0x005c7589);
    /* 005c7589: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c758b: mov dword ptr [0xa8d8a4], eax */ W32((u32)(0xa8d8a4u), r_eax);
    /* 005c7590: mov dword ptr [0xa8d88c], eax */ W32((u32)(0xa8d88cu), r_eax);
    /* 005c7595: ret  */ FN_RET(0x005c7520); r_esp += 4; return;
}

void f_005c7598(void) /* sub_5C7598 */
{
    FN_ENTER(0x005c7598);
    /* 005c7598: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005c7599: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005c759b: mov ebx, eax */ r_ebx = r_eax;
L_005c759d:; BB(0x005c759d);
    /* 005c759d: mov eax, dword ptr [0xa8d8a4] */ r_eax = R32((u32)(0xa8d8a4u));
    /* 005c75a2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c75a4: je 0x5c75dc */ if (fZ) goto L_005c75dc;
L_005c75a6:; BB(0x005c75a6);
    /* 005c75a6: mov dword ptr [ebx + eax + 4], 0 */ W32((u32)(r_ebx+r_eax+0x4u), 0x0u);
    /* 005c75ae: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005c75b0: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 005c75b5: mov byte ptr [ebx + eax + 1], cl */ W8((u32)(r_ebx+r_eax+0x1u), (u8)r_ecx);
    /* 005c75b9: mov dword ptr [ebx + eax + 8], 0 */ W32((u32)(r_ebx+r_eax+0x8u), 0x0u);
    /* 005c75c1: mov byte ptr [ebx + eax], dl */ W8((u32)(r_ebx+r_eax), (u8)r_edx);
    /* 005c75c4: mov word ptr [ebx + eax + 2], dx */ W16((u32)(r_ebx+r_eax+0x2u), (u16)r_edx);
    /* 005c75c9: mov word ptr [ebx + eax + 0xc], dx */ W16((u32)(r_ebx+r_eax+0xcu), (u16)r_edx);
    /* 005c75ce: mov word ptr [ebx + eax + 0xe], cx */ W16((u32)(r_ebx+r_eax+0xeu), (u16)r_ecx);
    /* 005c75d3: lea ecx, [eax + ebx + 0x10] */ r_ecx = (u32)(r_eax+r_ebx+0x10u);
    /* 005c75d7: call 0x5d6a3c */ r_esp -= 4; W32(r_esp, 0x5c75dcu); f_005d6a3c();
L_005c75dc:; BB(0x005c75dc);
    /* 005c75dc: add ebx, 0x24 */ {  u32 a = r_ebx; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005c75df: cmp ebx, 0x1e600 */ {  u32 a = r_ebx; u32 b = 0x1e600u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c75e5: jl 0x5c759d */ if ((fS!=fO)) goto L_005c759d;
L_005c75e7:; BB(0x005c75e7);
    /* 005c75e7: mov eax, dword ptr [0xa8d890] */ r_eax = R32((u32)(0xa8d890u));
    /* 005c75ec: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c75ee: je 0x5c75fa */ if (fZ) goto L_005c75fa;
L_005c75f0:; BB(0x005c75f0);
    /* 005c75f0: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005c75f2: mov word ptr [eax], dx */ W16((u32)(r_eax), (u16)r_edx);
    /* 005c75f5: mov eax, dword ptr [0xa8d890] */ r_eax = R32((u32)(0xa8d890u));
L_005c75fa:; BB(0x005c75fa);
    /* 005c75fa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c75fc: je 0x5c7609 */ if (fZ) goto L_005c7609;
L_005c75fe:; BB(0x005c75fe);
    /* 005c75fe: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005c7600: mov word ptr [eax + 2], dx */ W16((u32)(r_eax+0x2u), (u16)r_edx);
    /* 005c7604: mov eax, dword ptr [0xa8d890] */ r_eax = R32((u32)(0xa8d890u));
L_005c7609:; BB(0x005c7609);
    /* 005c7609: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c760b: je 0x5c7618 */ if (fZ) goto L_005c7618;
L_005c760d:; BB(0x005c760d);
    /* 005c760d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005c760f: mov word ptr [eax + 4], dx */ W16((u32)(r_eax+0x4u), (u16)r_edx);
    /* 005c7613: mov eax, dword ptr [0xa8d890] */ r_eax = R32((u32)(0xa8d890u));
L_005c7618:; BB(0x005c7618);
    /* 005c7618: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c761a: je 0x5c7627 */ if (fZ) goto L_005c7627;
L_005c761c:; BB(0x005c761c);
    /* 005c761c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005c761e: mov word ptr [eax + 6], dx */ W16((u32)(r_eax+0x6u), (u16)r_edx);
    /* 005c7622: mov eax, dword ptr [0xa8d890] */ r_eax = R32((u32)(0xa8d890u));
L_005c7627:; BB(0x005c7627);
    /* 005c7627: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7629: je 0x5c7636 */ if (fZ) goto L_005c7636;
L_005c762b:; BB(0x005c762b);
    /* 005c762b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005c762d: mov word ptr [eax + 8], dx */ W16((u32)(r_eax+0x8u), (u16)r_edx);
    /* 005c7631: mov eax, dword ptr [0xa8d890] */ r_eax = R32((u32)(0xa8d890u));
L_005c7636:; BB(0x005c7636);
    /* 005c7636: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7638: je 0x5c7645 */ if (fZ) goto L_005c7645;
L_005c763a:; BB(0x005c763a);
    /* 005c763a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005c763c: mov word ptr [eax + 0xa], dx */ W16((u32)(r_eax+0xau), (u16)r_edx);
    /* 005c7640: mov eax, dword ptr [0xa8d890] */ r_eax = R32((u32)(0xa8d890u));
L_005c7645:; BB(0x005c7645);
    /* 005c7645: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7647: je 0x5c7654 */ if (fZ) goto L_005c7654;
L_005c7649:; BB(0x005c7649);
    /* 005c7649: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005c764b: mov word ptr [eax + 0xc], dx */ W16((u32)(r_eax+0xcu), (u16)r_edx);
    /* 005c764f: mov eax, dword ptr [0xa8d890] */ r_eax = R32((u32)(0xa8d890u));
L_005c7654:; BB(0x005c7654);
    /* 005c7654: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7656: je 0x5c7663 */ if (fZ) goto L_005c7663;
L_005c7658:; BB(0x005c7658);
    /* 005c7658: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005c765a: mov word ptr [eax + 0xe], dx */ W16((u32)(r_eax+0xeu), (u16)r_edx);
    /* 005c765e: mov eax, dword ptr [0xa8d890] */ r_eax = R32((u32)(0xa8d890u));
L_005c7663:; BB(0x005c7663);
    /* 005c7663: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7665: je 0x5c7672 */ if (fZ) goto L_005c7672;
L_005c7667:; BB(0x005c7667);
    /* 005c7667: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005c7669: mov word ptr [eax + 0x10], dx */ W16((u32)(r_eax+0x10u), (u16)r_edx);
    /* 005c766d: mov eax, dword ptr [0xa8d890] */ r_eax = R32((u32)(0xa8d890u));
L_005c7672:; BB(0x005c7672);
    /* 005c7672: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7674: je 0x5c7681 */ if (fZ) goto L_005c7681;
L_005c7676:; BB(0x005c7676);
    /* 005c7676: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005c7678: mov word ptr [eax + 0x12], dx */ W16((u32)(r_eax+0x12u), (u16)r_edx);
    /* 005c767c: mov eax, dword ptr [0xa8d890] */ r_eax = R32((u32)(0xa8d890u));
L_005c7681:; BB(0x005c7681);
    /* 005c7681: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7683: je 0x5c7690 */ if (fZ) goto L_005c7690;
L_005c7685:; BB(0x005c7685);
    /* 005c7685: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005c7687: mov word ptr [eax + 0x14], dx */ W16((u32)(r_eax+0x14u), (u16)r_edx);
    /* 005c768b: mov eax, dword ptr [0xa8d890] */ r_eax = R32((u32)(0xa8d890u));
L_005c7690:; BB(0x005c7690);
    /* 005c7690: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7692: je 0x5c769f */ if (fZ) goto L_005c769f;
L_005c7694:; BB(0x005c7694);
    /* 005c7694: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005c7696: mov word ptr [eax + 0x16], dx */ W16((u32)(r_eax+0x16u), (u16)r_edx);
    /* 005c769a: mov eax, dword ptr [0xa8d890] */ r_eax = R32((u32)(0xa8d890u));
L_005c769f:; BB(0x005c769f);
    /* 005c769f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c76a1: je 0x5c76ae */ if (fZ) goto L_005c76ae;
L_005c76a3:; BB(0x005c76a3);
    /* 005c76a3: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005c76a5: mov word ptr [eax + 0x18], dx */ W16((u32)(r_eax+0x18u), (u16)r_edx);
    /* 005c76a9: mov eax, dword ptr [0xa8d890] */ r_eax = R32((u32)(0xa8d890u));
L_005c76ae:; BB(0x005c76ae);
    /* 005c76ae: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c76b0: je 0x5c76bd */ if (fZ) goto L_005c76bd;
L_005c76b2:; BB(0x005c76b2);
    /* 005c76b2: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005c76b4: mov word ptr [eax + 0x1a], dx */ W16((u32)(r_eax+0x1au), (u16)r_edx);
    /* 005c76b8: mov eax, dword ptr [0xa8d890] */ r_eax = R32((u32)(0xa8d890u));
L_005c76bd:; BB(0x005c76bd);
    /* 005c76bd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c76bf: je 0x5c76cc */ if (fZ) goto L_005c76cc;
L_005c76c1:; BB(0x005c76c1);
    /* 005c76c1: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005c76c3: mov word ptr [eax + 0x1c], dx */ W16((u32)(r_eax+0x1cu), (u16)r_edx);
    /* 005c76c7: mov eax, dword ptr [0xa8d890] */ r_eax = R32((u32)(0xa8d890u));
L_005c76cc:; BB(0x005c76cc);
    /* 005c76cc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c76ce: je 0x5c76db */ if (fZ) goto L_005c76db;
L_005c76d0:; BB(0x005c76d0);
    /* 005c76d0: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005c76d2: mov word ptr [eax + 0x1e], dx */ W16((u32)(r_eax+0x1eu), (u16)r_edx);
    /* 005c76d6: mov eax, dword ptr [0xa8d890] */ r_eax = R32((u32)(0xa8d890u));
L_005c76db:; BB(0x005c76db);
    /* 005c76db: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c76dd: je 0x5c76ea */ if (fZ) goto L_005c76ea;
L_005c76df:; BB(0x005c76df);
    /* 005c76df: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005c76e1: mov word ptr [eax + 0x20], dx */ W16((u32)(r_eax+0x20u), (u16)r_edx);
    /* 005c76e5: mov eax, dword ptr [0xa8d890] */ r_eax = R32((u32)(0xa8d890u));
L_005c76ea:; BB(0x005c76ea);
    /* 005c76ea: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c76ec: je 0x5c76f4 */ if (fZ) goto L_005c76f4;
L_005c76ee:; BB(0x005c76ee);
    /* 005c76ee: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005c76f0: mov word ptr [eax + 0x22], dx */ W16((u32)(r_eax+0x22u), (u16)r_edx);
L_005c76f4:; BB(0x005c76f4);
    /* 005c76f4: mov eax, dword ptr [0xa8d8a0] */ r_eax = R32((u32)(0xa8d8a0u));
    /* 005c76f9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c76fb: je 0x5c7723 */ if (fZ) goto L_005c7723;
L_005c76fd:; BB(0x005c76fd);
    /* 005c76fd: mov ecx, dword ptr [0xa8d8a4] */ r_ecx = R32((u32)(0xa8d8a4u));
    /* 005c7703: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7705: je 0x5c7723 */ if (fZ) goto L_005c7723;
L_005c7707:; BB(0x005c7707);
    /* 005c7707: mov edx, dword ptr [0xa8d89c] */ r_edx = R32((u32)(0xa8d89cu));
    /* 005c770d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c770f: je 0x5c7723 */ if (fZ) goto L_005c7723;
L_005c7711:; BB(0x005c7711);
    /* 005c7711: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 005c7713: mov eax, dword ptr [0xa8d89c] */ r_eax = R32((u32)(0xa8d89cu));
    /* 005c7718: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
    /* 005c771e: mov eax, dword ptr [0xa8d8a0] */ r_eax = R32((u32)(0xa8d8a0u));
L_005c7723:; BB(0x005c7723);
    /* 005c7723: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7725: je 0x5c7755 */ if (fZ) goto L_005c7755;
L_005c7727:; BB(0x005c7727);
    /* 005c7727: mov ecx, dword ptr [0xa8d8a4] */ r_ecx = R32((u32)(0xa8d8a4u));
    /* 005c772d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c772f: je 0x5c7755 */ if (fZ) goto L_005c7755;
L_005c7731:; BB(0x005c7731);
    /* 005c7731: mov edx, dword ptr [0xa8d89c] */ r_edx = R32((u32)(0xa8d89cu));
    /* 005c7737: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7739: je 0x5c7755 */ if (fZ) goto L_005c7755;
L_005c773b:; BB(0x005c773b);
    /* 005c773b: add ecx, 0x1b00 */ {  u32 a = r_ecx; u32 b = 0x1b00u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c7741: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 005c7744: mov eax, dword ptr [0xa8d89c] */ r_eax = R32((u32)(0xa8d89cu));
    /* 005c7749: mov dword ptr [eax + 4], 0 */ W32((u32)(r_eax+0x4u), 0x0u);
    /* 005c7750: mov eax, dword ptr [0xa8d8a0] */ r_eax = R32((u32)(0xa8d8a0u));
L_005c7755:; BB(0x005c7755);
    /* 005c7755: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7757: je 0x5c7787 */ if (fZ) goto L_005c7787;
L_005c7759:; BB(0x005c7759);
    /* 005c7759: mov ecx, dword ptr [0xa8d8a4] */ r_ecx = R32((u32)(0xa8d8a4u));
    /* 005c775f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7761: je 0x5c7787 */ if (fZ) goto L_005c7787;
L_005c7763:; BB(0x005c7763);
    /* 005c7763: mov edx, dword ptr [0xa8d89c] */ r_edx = R32((u32)(0xa8d89cu));
    /* 005c7769: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c776b: je 0x5c7787 */ if (fZ) goto L_005c7787;
L_005c776d:; BB(0x005c776d);
    /* 005c776d: add ecx, 0x3600 */ {  u32 a = r_ecx; u32 b = 0x3600u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c7773: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 005c7776: mov eax, dword ptr [0xa8d89c] */ r_eax = R32((u32)(0xa8d89cu));
    /* 005c777b: mov dword ptr [eax + 8], 0 */ W32((u32)(r_eax+0x8u), 0x0u);
    /* 005c7782: mov eax, dword ptr [0xa8d8a0] */ r_eax = R32((u32)(0xa8d8a0u));
L_005c7787:; BB(0x005c7787);
    /* 005c7787: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7789: je 0x5c77b9 */ if (fZ) goto L_005c77b9;
L_005c778b:; BB(0x005c778b);
    /* 005c778b: mov ecx, dword ptr [0xa8d8a4] */ r_ecx = R32((u32)(0xa8d8a4u));
    /* 005c7791: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7793: je 0x5c77b9 */ if (fZ) goto L_005c77b9;
L_005c7795:; BB(0x005c7795);
    /* 005c7795: mov edx, dword ptr [0xa8d89c] */ r_edx = R32((u32)(0xa8d89cu));
    /* 005c779b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c779d: je 0x5c77b9 */ if (fZ) goto L_005c77b9;
L_005c779f:; BB(0x005c779f);
    /* 005c779f: add ecx, 0x5100 */ {  u32 a = r_ecx; u32 b = 0x5100u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c77a5: mov dword ptr [eax + 0xc], ecx */ W32((u32)(r_eax+0xcu), r_ecx);
    /* 005c77a8: mov eax, dword ptr [0xa8d89c] */ r_eax = R32((u32)(0xa8d89cu));
    /* 005c77ad: mov dword ptr [eax + 0xc], 0 */ W32((u32)(r_eax+0xcu), 0x0u);
    /* 005c77b4: mov eax, dword ptr [0xa8d8a0] */ r_eax = R32((u32)(0xa8d8a0u));
L_005c77b9:; BB(0x005c77b9);
    /* 005c77b9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c77bb: je 0x5c77eb */ if (fZ) goto L_005c77eb;
L_005c77bd:; BB(0x005c77bd);
    /* 005c77bd: mov ecx, dword ptr [0xa8d8a4] */ r_ecx = R32((u32)(0xa8d8a4u));
    /* 005c77c3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c77c5: je 0x5c77eb */ if (fZ) goto L_005c77eb;
L_005c77c7:; BB(0x005c77c7);
    /* 005c77c7: mov edx, dword ptr [0xa8d89c] */ r_edx = R32((u32)(0xa8d89cu));
    /* 005c77cd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c77cf: je 0x5c77eb */ if (fZ) goto L_005c77eb;
L_005c77d1:; BB(0x005c77d1);
    /* 005c77d1: add ecx, 0x6c00 */ {  u32 a = r_ecx; u32 b = 0x6c00u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c77d7: mov dword ptr [eax + 0x10], ecx */ W32((u32)(r_eax+0x10u), r_ecx);
    /* 005c77da: mov eax, dword ptr [0xa8d89c] */ r_eax = R32((u32)(0xa8d89cu));
    /* 005c77df: mov dword ptr [eax + 0x10], 0 */ W32((u32)(r_eax+0x10u), 0x0u);
    /* 005c77e6: mov eax, dword ptr [0xa8d8a0] */ r_eax = R32((u32)(0xa8d8a0u));
L_005c77eb:; BB(0x005c77eb);
    /* 005c77eb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c77ed: je 0x5c781d */ if (fZ) goto L_005c781d;
L_005c77ef:; BB(0x005c77ef);
    /* 005c77ef: mov ecx, dword ptr [0xa8d8a4] */ r_ecx = R32((u32)(0xa8d8a4u));
    /* 005c77f5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c77f7: je 0x5c781d */ if (fZ) goto L_005c781d;
L_005c77f9:; BB(0x005c77f9);
    /* 005c77f9: mov edx, dword ptr [0xa8d89c] */ r_edx = R32((u32)(0xa8d89cu));
    /* 005c77ff: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7801: je 0x5c781d */ if (fZ) goto L_005c781d;
L_005c7803:; BB(0x005c7803);
    /* 005c7803: add ecx, 0x8700 */ {  u32 a = r_ecx; u32 b = 0x8700u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c7809: mov dword ptr [eax + 0x14], ecx */ W32((u32)(r_eax+0x14u), r_ecx);
    /* 005c780c: mov eax, dword ptr [0xa8d89c] */ r_eax = R32((u32)(0xa8d89cu));
    /* 005c7811: mov dword ptr [eax + 0x14], 0 */ W32((u32)(r_eax+0x14u), 0x0u);
    /* 005c7818: mov eax, dword ptr [0xa8d8a0] */ r_eax = R32((u32)(0xa8d8a0u));
L_005c781d:; BB(0x005c781d);
    /* 005c781d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c781f: je 0x5c784f */ if (fZ) goto L_005c784f;
L_005c7821:; BB(0x005c7821);
    /* 005c7821: mov ecx, dword ptr [0xa8d8a4] */ r_ecx = R32((u32)(0xa8d8a4u));
    /* 005c7827: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7829: je 0x5c784f */ if (fZ) goto L_005c784f;
L_005c782b:; BB(0x005c782b);
    /* 005c782b: mov edx, dword ptr [0xa8d89c] */ r_edx = R32((u32)(0xa8d89cu));
    /* 005c7831: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7833: je 0x5c784f */ if (fZ) goto L_005c784f;
L_005c7835:; BB(0x005c7835);
    /* 005c7835: add ecx, 0xa200 */ {  u32 a = r_ecx; u32 b = 0xa200u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c783b: mov dword ptr [eax + 0x18], ecx */ W32((u32)(r_eax+0x18u), r_ecx);
    /* 005c783e: mov eax, dword ptr [0xa8d89c] */ r_eax = R32((u32)(0xa8d89cu));
    /* 005c7843: mov dword ptr [eax + 0x18], 0 */ W32((u32)(r_eax+0x18u), 0x0u);
    /* 005c784a: mov eax, dword ptr [0xa8d8a0] */ r_eax = R32((u32)(0xa8d8a0u));
L_005c784f:; BB(0x005c784f);
    /* 005c784f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7851: je 0x5c7881 */ if (fZ) goto L_005c7881;
L_005c7853:; BB(0x005c7853);
    /* 005c7853: mov ecx, dword ptr [0xa8d8a4] */ r_ecx = R32((u32)(0xa8d8a4u));
    /* 005c7859: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c785b: je 0x5c7881 */ if (fZ) goto L_005c7881;
L_005c785d:; BB(0x005c785d);
    /* 005c785d: mov edx, dword ptr [0xa8d89c] */ r_edx = R32((u32)(0xa8d89cu));
    /* 005c7863: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7865: je 0x5c7881 */ if (fZ) goto L_005c7881;
L_005c7867:; BB(0x005c7867);
    /* 005c7867: add ecx, 0xbd00 */ {  u32 a = r_ecx; u32 b = 0xbd00u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c786d: mov dword ptr [eax + 0x1c], ecx */ W32((u32)(r_eax+0x1cu), r_ecx);
    /* 005c7870: mov eax, dword ptr [0xa8d89c] */ r_eax = R32((u32)(0xa8d89cu));
    /* 005c7875: mov dword ptr [eax + 0x1c], 0 */ W32((u32)(r_eax+0x1cu), 0x0u);
    /* 005c787c: mov eax, dword ptr [0xa8d8a0] */ r_eax = R32((u32)(0xa8d8a0u));
L_005c7881:; BB(0x005c7881);
    /* 005c7881: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7883: je 0x5c78b3 */ if (fZ) goto L_005c78b3;
L_005c7885:; BB(0x005c7885);
    /* 005c7885: mov ecx, dword ptr [0xa8d8a4] */ r_ecx = R32((u32)(0xa8d8a4u));
    /* 005c788b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c788d: je 0x5c78b3 */ if (fZ) goto L_005c78b3;
L_005c788f:; BB(0x005c788f);
    /* 005c788f: mov edx, dword ptr [0xa8d89c] */ r_edx = R32((u32)(0xa8d89cu));
    /* 005c7895: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7897: je 0x5c78b3 */ if (fZ) goto L_005c78b3;
L_005c7899:; BB(0x005c7899);
    /* 005c7899: add ecx, 0xd800 */ {  u32 a = r_ecx; u32 b = 0xd800u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c789f: mov dword ptr [eax + 0x20], ecx */ W32((u32)(r_eax+0x20u), r_ecx);
    /* 005c78a2: mov eax, dword ptr [0xa8d89c] */ r_eax = R32((u32)(0xa8d89cu));
    /* 005c78a7: mov dword ptr [eax + 0x20], 0 */ W32((u32)(r_eax+0x20u), 0x0u);
    /* 005c78ae: mov eax, dword ptr [0xa8d8a0] */ r_eax = R32((u32)(0xa8d8a0u));
L_005c78b3:; BB(0x005c78b3);
    /* 005c78b3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c78b5: je 0x5c78e5 */ if (fZ) goto L_005c78e5;
L_005c78b7:; BB(0x005c78b7);
    /* 005c78b7: mov ecx, dword ptr [0xa8d8a4] */ r_ecx = R32((u32)(0xa8d8a4u));
    /* 005c78bd: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c78bf: je 0x5c78e5 */ if (fZ) goto L_005c78e5;
L_005c78c1:; BB(0x005c78c1);
    /* 005c78c1: mov edx, dword ptr [0xa8d89c] */ r_edx = R32((u32)(0xa8d89cu));
    /* 005c78c7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c78c9: je 0x5c78e5 */ if (fZ) goto L_005c78e5;
L_005c78cb:; BB(0x005c78cb);
    /* 005c78cb: add ecx, 0xf300 */ {  u32 a = r_ecx; u32 b = 0xf300u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c78d1: mov dword ptr [eax + 0x24], ecx */ W32((u32)(r_eax+0x24u), r_ecx);
    /* 005c78d4: mov eax, dword ptr [0xa8d89c] */ r_eax = R32((u32)(0xa8d89cu));
    /* 005c78d9: mov dword ptr [eax + 0x24], 0 */ W32((u32)(r_eax+0x24u), 0x0u);
    /* 005c78e0: mov eax, dword ptr [0xa8d8a0] */ r_eax = R32((u32)(0xa8d8a0u));
L_005c78e5:; BB(0x005c78e5);
    /* 005c78e5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c78e7: je 0x5c7917 */ if (fZ) goto L_005c7917;
L_005c78e9:; BB(0x005c78e9);
    /* 005c78e9: mov ecx, dword ptr [0xa8d8a4] */ r_ecx = R32((u32)(0xa8d8a4u));
    /* 005c78ef: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c78f1: je 0x5c7917 */ if (fZ) goto L_005c7917;
L_005c78f3:; BB(0x005c78f3);
    /* 005c78f3: mov edx, dword ptr [0xa8d89c] */ r_edx = R32((u32)(0xa8d89cu));
    /* 005c78f9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c78fb: je 0x5c7917 */ if (fZ) goto L_005c7917;
L_005c78fd:; BB(0x005c78fd);
    /* 005c78fd: add ecx, 0x10e00 */ {  u32 a = r_ecx; u32 b = 0x10e00u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c7903: mov dword ptr [eax + 0x28], ecx */ W32((u32)(r_eax+0x28u), r_ecx);
    /* 005c7906: mov eax, dword ptr [0xa8d89c] */ r_eax = R32((u32)(0xa8d89cu));
    /* 005c790b: mov dword ptr [eax + 0x28], 0 */ W32((u32)(r_eax+0x28u), 0x0u);
    /* 005c7912: mov eax, dword ptr [0xa8d8a0] */ r_eax = R32((u32)(0xa8d8a0u));
L_005c7917:; BB(0x005c7917);
    /* 005c7917: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7919: je 0x5c7949 */ if (fZ) goto L_005c7949;
L_005c791b:; BB(0x005c791b);
    /* 005c791b: mov ecx, dword ptr [0xa8d8a4] */ r_ecx = R32((u32)(0xa8d8a4u));
    /* 005c7921: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7923: je 0x5c7949 */ if (fZ) goto L_005c7949;
L_005c7925:; BB(0x005c7925);
    /* 005c7925: mov edx, dword ptr [0xa8d89c] */ r_edx = R32((u32)(0xa8d89cu));
    /* 005c792b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c792d: je 0x5c7949 */ if (fZ) goto L_005c7949;
L_005c792f:; BB(0x005c792f);
    /* 005c792f: add ecx, 0x12900 */ {  u32 a = r_ecx; u32 b = 0x12900u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c7935: mov dword ptr [eax + 0x2c], ecx */ W32((u32)(r_eax+0x2cu), r_ecx);
    /* 005c7938: mov eax, dword ptr [0xa8d89c] */ r_eax = R32((u32)(0xa8d89cu));
    /* 005c793d: mov dword ptr [eax + 0x2c], 0 */ W32((u32)(r_eax+0x2cu), 0x0u);
    /* 005c7944: mov eax, dword ptr [0xa8d8a0] */ r_eax = R32((u32)(0xa8d8a0u));
L_005c7949:; BB(0x005c7949);
    /* 005c7949: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c794b: je 0x5c797b */ if (fZ) goto L_005c797b;
L_005c794d:; BB(0x005c794d);
    /* 005c794d: mov ecx, dword ptr [0xa8d8a4] */ r_ecx = R32((u32)(0xa8d8a4u));
    /* 005c7953: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7955: je 0x5c797b */ if (fZ) goto L_005c797b;
L_005c7957:; BB(0x005c7957);
    /* 005c7957: mov edx, dword ptr [0xa8d89c] */ r_edx = R32((u32)(0xa8d89cu));
    /* 005c795d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c795f: je 0x5c797b */ if (fZ) goto L_005c797b;
L_005c7961:; BB(0x005c7961);
    /* 005c7961: add ecx, 0x14400 */ {  u32 a = r_ecx; u32 b = 0x14400u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c7967: mov dword ptr [eax + 0x30], ecx */ W32((u32)(r_eax+0x30u), r_ecx);
    /* 005c796a: mov eax, dword ptr [0xa8d89c] */ r_eax = R32((u32)(0xa8d89cu));
    /* 005c796f: mov dword ptr [eax + 0x30], 0 */ W32((u32)(r_eax+0x30u), 0x0u);
    /* 005c7976: mov eax, dword ptr [0xa8d8a0] */ r_eax = R32((u32)(0xa8d8a0u));
L_005c797b:; BB(0x005c797b);
    /* 005c797b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c797d: je 0x5c79ad */ if (fZ) goto L_005c79ad;
L_005c797f:; BB(0x005c797f);
    /* 005c797f: mov ecx, dword ptr [0xa8d8a4] */ r_ecx = R32((u32)(0xa8d8a4u));
    /* 005c7985: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7987: je 0x5c79ad */ if (fZ) goto L_005c79ad;
L_005c7989:; BB(0x005c7989);
    /* 005c7989: mov edx, dword ptr [0xa8d89c] */ r_edx = R32((u32)(0xa8d89cu));
    /* 005c798f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7991: je 0x5c79ad */ if (fZ) goto L_005c79ad;
L_005c7993:; BB(0x005c7993);
    /* 005c7993: add ecx, 0x15f00 */ {  u32 a = r_ecx; u32 b = 0x15f00u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c7999: mov dword ptr [eax + 0x34], ecx */ W32((u32)(r_eax+0x34u), r_ecx);
    /* 005c799c: mov eax, dword ptr [0xa8d89c] */ r_eax = R32((u32)(0xa8d89cu));
    /* 005c79a1: mov dword ptr [eax + 0x34], 0 */ W32((u32)(r_eax+0x34u), 0x0u);
    /* 005c79a8: mov eax, dword ptr [0xa8d8a0] */ r_eax = R32((u32)(0xa8d8a0u));
L_005c79ad:; BB(0x005c79ad);
    /* 005c79ad: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c79af: je 0x5c79df */ if (fZ) goto L_005c79df;
L_005c79b1:; BB(0x005c79b1);
    /* 005c79b1: mov ecx, dword ptr [0xa8d8a4] */ r_ecx = R32((u32)(0xa8d8a4u));
    /* 005c79b7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c79b9: je 0x5c79df */ if (fZ) goto L_005c79df;
L_005c79bb:; BB(0x005c79bb);
    /* 005c79bb: mov edx, dword ptr [0xa8d89c] */ r_edx = R32((u32)(0xa8d89cu));
    /* 005c79c1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c79c3: je 0x5c79df */ if (fZ) goto L_005c79df;
L_005c79c5:; BB(0x005c79c5);
    /* 005c79c5: add ecx, 0x17a00 */ {  u32 a = r_ecx; u32 b = 0x17a00u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c79cb: mov dword ptr [eax + 0x38], ecx */ W32((u32)(r_eax+0x38u), r_ecx);
    /* 005c79ce: mov eax, dword ptr [0xa8d89c] */ r_eax = R32((u32)(0xa8d89cu));
    /* 005c79d3: mov dword ptr [eax + 0x38], 0 */ W32((u32)(r_eax+0x38u), 0x0u);
    /* 005c79da: mov eax, dword ptr [0xa8d8a0] */ r_eax = R32((u32)(0xa8d8a0u));
L_005c79df:; BB(0x005c79df);
    /* 005c79df: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c79e1: je 0x5c7a11 */ if (fZ) goto L_005c7a11;
L_005c79e3:; BB(0x005c79e3);
    /* 005c79e3: mov ecx, dword ptr [0xa8d8a4] */ r_ecx = R32((u32)(0xa8d8a4u));
    /* 005c79e9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c79eb: je 0x5c7a11 */ if (fZ) goto L_005c7a11;
L_005c79ed:; BB(0x005c79ed);
    /* 005c79ed: mov edx, dword ptr [0xa8d89c] */ r_edx = R32((u32)(0xa8d89cu));
    /* 005c79f3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c79f5: je 0x5c7a11 */ if (fZ) goto L_005c7a11;
L_005c79f7:; BB(0x005c79f7);
    /* 005c79f7: add ecx, 0x19500 */ {  u32 a = r_ecx; u32 b = 0x19500u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c79fd: mov dword ptr [eax + 0x3c], ecx */ W32((u32)(r_eax+0x3cu), r_ecx);
    /* 005c7a00: mov eax, dword ptr [0xa8d89c] */ r_eax = R32((u32)(0xa8d89cu));
    /* 005c7a05: mov dword ptr [eax + 0x3c], 0 */ W32((u32)(r_eax+0x3cu), 0x0u);
    /* 005c7a0c: mov eax, dword ptr [0xa8d8a0] */ r_eax = R32((u32)(0xa8d8a0u));
L_005c7a11:; BB(0x005c7a11);
    /* 005c7a11: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7a13: je 0x5c7a43 */ if (fZ) goto L_005c7a43;
L_005c7a15:; BB(0x005c7a15);
    /* 005c7a15: mov ecx, dword ptr [0xa8d8a4] */ r_ecx = R32((u32)(0xa8d8a4u));
    /* 005c7a1b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7a1d: je 0x5c7a43 */ if (fZ) goto L_005c7a43;
L_005c7a1f:; BB(0x005c7a1f);
    /* 005c7a1f: mov edx, dword ptr [0xa8d89c] */ r_edx = R32((u32)(0xa8d89cu));
    /* 005c7a25: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7a27: je 0x5c7a43 */ if (fZ) goto L_005c7a43;
L_005c7a29:; BB(0x005c7a29);
    /* 005c7a29: add ecx, 0x1b000 */ {  u32 a = r_ecx; u32 b = 0x1b000u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c7a2f: mov dword ptr [eax + 0x40], ecx */ W32((u32)(r_eax+0x40u), r_ecx);
    /* 005c7a32: mov eax, dword ptr [0xa8d89c] */ r_eax = R32((u32)(0xa8d89cu));
    /* 005c7a37: mov dword ptr [eax + 0x40], 0 */ W32((u32)(r_eax+0x40u), 0x0u);
    /* 005c7a3e: mov eax, dword ptr [0xa8d8a0] */ r_eax = R32((u32)(0xa8d8a0u));
L_005c7a43:; BB(0x005c7a43);
    /* 005c7a43: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c7a45: je 0x5c7a70 */ if (fZ) goto L_005c7a70;
L_005c7a47:; BB(0x005c7a47);
    /* 005c7a47: mov ecx, dword ptr [0xa8d8a4] */ r_ecx = R32((u32)(0xa8d8a4u));
    /* 005c7a4d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c7a4f: je 0x5c7a70 */ if (fZ) goto L_005c7a70;
L_005c7a51:; BB(0x005c7a51);
    /* 005c7a51: mov edx, dword ptr [0xa8d89c] */ r_edx = R32((u32)(0xa8d89cu));
    /* 005c7a57: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c7a59: je 0x5c7a70 */ if (fZ) goto L_005c7a70;
L_005c7a5b:; BB(0x005c7a5b);
    /* 005c7a5b: add ecx, 0x1cb00 */ {  u32 a = r_ecx; u32 b = 0x1cb00u; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005c7a61: mov dword ptr [eax + 0x44], ecx */ W32((u32)(r_eax+0x44u), r_ecx);
    /* 005c7a64: mov eax, dword ptr [0xa8d89c] */ r_eax = R32((u32)(0xa8d89cu));
    /* 005c7a69: mov dword ptr [eax + 0x44], 0 */ W32((u32)(r_eax+0x44u), 0x0u);
L_005c7a70:; BB(0x005c7a70);
    /* 005c7a70: mov dword ptr [0xa8d894], 0 */ W32((u32)(0xa8d894u), 0x0u);
    /* 005c7a7a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005c7a7b: ret  */ FN_RET(0x005c7598); r_esp += 4; return;
}

void f_005c7a7c(void) /* sub_5C7A7C */
{
    FN_ENTER(0x005c7a7c);
    /* 005c7a7c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005c7a7d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005c7a7e: mov eax, dword ptr [0xaae16c] */ r_eax = R32((u32)(0xaae16cu));
    /* 005c7a83: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005c7a85: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7a87: je 0x5c7ad0 */ if (fZ) goto L_005c7ad0;
L_005c7a89:; BB(0x005c7a89);
    /* 005c7a89: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 005c7a8c: mov ebx, edx */ r_ebx = r_edx;
L_005c7a8e:; BB(0x005c7a8e);
    /* 005c7a8e: mov esi, dword ptr [ebx*4 + 0xaad720] */ r_esi = R32((u32)(r_ebx*4+0xaad720u));
    /* 005c7a95: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7a97: je 0x5c7ac6 */ if (fZ) goto L_005c7ac6;
L_005c7a99:; BB(0x005c7a99);
    /* 005c7a99: push 0x20000 */ { u32 v = 0x20000u; r_esp -= 4; W32(r_esp, v); }
    /* 005c7a9e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c7aa0: mov ecx, esi */ r_ecx = r_esi;
    /* 005c7aa2: call 0x7b5290 */ r_esp -= 4; W32(r_esp, 0x5c7aa7u); f_007b5290();
    /* 005c7aa7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7aa9: je 0x5c7ac1 */ if (fZ) goto L_005c7ac1;
L_005c7aab:; BB(0x005c7aab);
    /* 005c7aab: mov eax, dword ptr [esi + 0x14] */ r_eax = R32((u32)(r_esi+0x14u));
    /* 005c7aae: cmp eax, dword ptr [0xaca36c] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaca36cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7ab4: je 0x5c7fb4 */ if (fZ) goto L_005c7fb4;
L_005c7aba:; BB(0x005c7aba);
    /* 005c7aba: mov eax, dword ptr [0xaae16c] */ r_eax = R32((u32)(0xaae16cu));
    /* 005c7abf: jmp 0x5c7ac6 */ goto L_005c7ac6;
L_005c7ac1:; BB(0x005c7ac1);
    /* 005c7ac1: mov eax, dword ptr [0xaae16c] */ r_eax = R32((u32)(0xaae16cu));
L_005c7ac6:; BB(0x005c7ac6);
    /* 005c7ac6: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005c7ac9: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7acb: jne 0x5c7a8e */ if (!fZ) goto L_005c7a8e;
L_005c7acd:; BB(0x005c7acd);
    /* 005c7acd: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
L_005c7ad0:; BB(0x005c7ad0);
    /* 005c7ad0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005c7ad2: mov ebx, eax */ r_ebx = r_eax;
L_005c7ad4:; BB(0x005c7ad4);
    /* 005c7ad4: mov eax, dword ptr [0xa8d8a4] */ r_eax = R32((u32)(0xa8d8a4u));
    /* 005c7ad9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7adb: je 0x5c7b13 */ if (fZ) goto L_005c7b13;
L_005c7add:; BB(0x005c7add);
    /* 005c7add: mov dword ptr [ebx + eax + 4], 0 */ W32((u32)(r_ebx+r_eax+0x4u), 0x0u);
    /* 005c7ae5: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005c7ae7: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 005c7aec: mov byte ptr [ebx + eax + 1], cl */ W8((u32)(r_ebx+r_eax+0x1u), (u8)r_ecx);
    /* 005c7af0: mov dword ptr [ebx + eax + 8], 0 */ W32((u32)(r_ebx+r_eax+0x8u), 0x0u);
    /* 005c7af8: mov byte ptr [ebx + eax], dl */ W8((u32)(r_ebx+r_eax), (u8)r_edx);
    /* 005c7afb: mov word ptr [ebx + eax + 2], dx */ W16((u32)(r_ebx+r_eax+0x2u), (u16)r_edx);
    /* 005c7b00: mov word ptr [ebx + eax + 0xc], dx */ W16((u32)(r_ebx+r_eax+0xcu), (u16)r_edx);
    /* 005c7b05: mov word ptr [ebx + eax + 0xe], cx */ W16((u32)(r_ebx+r_eax+0xeu), (u16)r_ecx);
    /* 005c7b0a: lea ecx, [eax + ebx + 0x10] */ r_ecx = (u32)(r_eax+r_ebx+0x10u);
    /* 005c7b0e: call 0x5d6a3c */ r_esp -= 4; W32(r_esp, 0x5c7b13u); f_005d6a3c();
L_005c7b13:; BB(0x005c7b13);
    /* 005c7b13: add ebx, 0x24 */ {  u32 a = r_ebx; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005c7b16: cmp ebx, 0x1e600 */ {  u32 a = r_ebx; u32 b = 0x1e600u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c7b1c: jl 0x5c7ad4 */ if ((fS!=fO)) goto L_005c7ad4;
L_005c7b1e:; BB(0x005c7b1e);
    /* 005c7b1e: mov eax, dword ptr [0xa8d890] */ r_eax = R32((u32)(0xa8d890u));
    /* 005c7b23: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7b25: je 0x5c7b31 */ if (fZ) goto L_005c7b31;
L_005c7b27:; BB(0x005c7b27);
    /* 005c7b27: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005c7b29: mov word ptr [eax], dx */ W16((u32)(r_eax), (u16)r_edx);
    /* 005c7b2c: mov eax, dword ptr [0xa8d890] */ r_eax = R32((u32)(0xa8d890u));
L_005c7b31:; BB(0x005c7b31);
    /* 005c7b31: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7b33: je 0x5c7b40 */ if (fZ) goto L_005c7b40;
L_005c7b35:; BB(0x005c7b35);
    /* 005c7b35: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005c7b37: mov word ptr [eax + 2], dx */ W16((u32)(r_eax+0x2u), (u16)r_edx);
    /* 005c7b3b: mov eax, dword ptr [0xa8d890] */ r_eax = R32((u32)(0xa8d890u));
L_005c7b40:; BB(0x005c7b40);
    /* 005c7b40: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7b42: je 0x5c7b4f */ if (fZ) goto L_005c7b4f;
L_005c7b44:; BB(0x005c7b44);
    /* 005c7b44: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005c7b46: mov word ptr [eax + 4], dx */ W16((u32)(r_eax+0x4u), (u16)r_edx);
    /* 005c7b4a: mov eax, dword ptr [0xa8d890] */ r_eax = R32((u32)(0xa8d890u));
L_005c7b4f:; BB(0x005c7b4f);
    /* 005c7b4f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7b51: je 0x5c7b5e */ if (fZ) goto L_005c7b5e;
L_005c7b53:; BB(0x005c7b53);
    /* 005c7b53: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005c7b55: mov word ptr [eax + 6], dx */ W16((u32)(r_eax+0x6u), (u16)r_edx);
    /* 005c7b59: mov eax, dword ptr [0xa8d890] */ r_eax = R32((u32)(0xa8d890u));
L_005c7b5e:; BB(0x005c7b5e);
    /* 005c7b5e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7b60: je 0x5c7b6d */ if (fZ) goto L_005c7b6d;
L_005c7b62:; BB(0x005c7b62);
    /* 005c7b62: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005c7b64: mov word ptr [eax + 8], dx */ W16((u32)(r_eax+0x8u), (u16)r_edx);
    /* 005c7b68: mov eax, dword ptr [0xa8d890] */ r_eax = R32((u32)(0xa8d890u));
L_005c7b6d:; BB(0x005c7b6d);
    /* 005c7b6d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7b6f: je 0x5c7b7c */ if (fZ) goto L_005c7b7c;
L_005c7b71:; BB(0x005c7b71);
    /* 005c7b71: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005c7b73: mov word ptr [eax + 0xa], dx */ W16((u32)(r_eax+0xau), (u16)r_edx);
    /* 005c7b77: mov eax, dword ptr [0xa8d890] */ r_eax = R32((u32)(0xa8d890u));
L_005c7b7c:; BB(0x005c7b7c);
    /* 005c7b7c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7b7e: je 0x5c7b8b */ if (fZ) goto L_005c7b8b;
L_005c7b80:; BB(0x005c7b80);
    /* 005c7b80: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005c7b82: mov word ptr [eax + 0xc], dx */ W16((u32)(r_eax+0xcu), (u16)r_edx);
    /* 005c7b86: mov eax, dword ptr [0xa8d890] */ r_eax = R32((u32)(0xa8d890u));
L_005c7b8b:; BB(0x005c7b8b);
    /* 005c7b8b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7b8d: je 0x5c7b9a */ if (fZ) goto L_005c7b9a;
L_005c7b8f:; BB(0x005c7b8f);
    /* 005c7b8f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005c7b91: mov word ptr [eax + 0xe], dx */ W16((u32)(r_eax+0xeu), (u16)r_edx);
    /* 005c7b95: mov eax, dword ptr [0xa8d890] */ r_eax = R32((u32)(0xa8d890u));
L_005c7b9a:; BB(0x005c7b9a);
    /* 005c7b9a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7b9c: je 0x5c7ba9 */ if (fZ) goto L_005c7ba9;
L_005c7b9e:; BB(0x005c7b9e);
    /* 005c7b9e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005c7ba0: mov word ptr [eax + 0x10], dx */ W16((u32)(r_eax+0x10u), (u16)r_edx);
    /* 005c7ba4: mov eax, dword ptr [0xa8d890] */ r_eax = R32((u32)(0xa8d890u));
L_005c7ba9:; BB(0x005c7ba9);
    /* 005c7ba9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7bab: je 0x5c7bb8 */ if (fZ) goto L_005c7bb8;
L_005c7bad:; BB(0x005c7bad);
    /* 005c7bad: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005c7baf: mov word ptr [eax + 0x12], dx */ W16((u32)(r_eax+0x12u), (u16)r_edx);
    /* 005c7bb3: mov eax, dword ptr [0xa8d890] */ r_eax = R32((u32)(0xa8d890u));
L_005c7bb8:; BB(0x005c7bb8);
    /* 005c7bb8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7bba: je 0x5c7bc7 */ if (fZ) goto L_005c7bc7;
L_005c7bbc:; BB(0x005c7bbc);
    /* 005c7bbc: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005c7bbe: mov word ptr [eax + 0x14], dx */ W16((u32)(r_eax+0x14u), (u16)r_edx);
    /* 005c7bc2: mov eax, dword ptr [0xa8d890] */ r_eax = R32((u32)(0xa8d890u));
L_005c7bc7:; BB(0x005c7bc7);
    /* 005c7bc7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7bc9: je 0x5c7bd6 */ if (fZ) goto L_005c7bd6;
L_005c7bcb:; BB(0x005c7bcb);
    /* 005c7bcb: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005c7bcd: mov word ptr [eax + 0x16], dx */ W16((u32)(r_eax+0x16u), (u16)r_edx);
    /* 005c7bd1: mov eax, dword ptr [0xa8d890] */ r_eax = R32((u32)(0xa8d890u));
L_005c7bd6:; BB(0x005c7bd6);
    /* 005c7bd6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7bd8: je 0x5c7be5 */ if (fZ) goto L_005c7be5;
L_005c7bda:; BB(0x005c7bda);
    /* 005c7bda: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005c7bdc: mov word ptr [eax + 0x18], dx */ W16((u32)(r_eax+0x18u), (u16)r_edx);
    /* 005c7be0: mov eax, dword ptr [0xa8d890] */ r_eax = R32((u32)(0xa8d890u));
L_005c7be5:; BB(0x005c7be5);
    /* 005c7be5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7be7: je 0x5c7bf4 */ if (fZ) goto L_005c7bf4;
L_005c7be9:; BB(0x005c7be9);
    /* 005c7be9: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005c7beb: mov word ptr [eax + 0x1a], dx */ W16((u32)(r_eax+0x1au), (u16)r_edx);
    /* 005c7bef: mov eax, dword ptr [0xa8d890] */ r_eax = R32((u32)(0xa8d890u));
L_005c7bf4:; BB(0x005c7bf4);
    /* 005c7bf4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7bf6: je 0x5c7c03 */ if (fZ) goto L_005c7c03;
L_005c7bf8:; BB(0x005c7bf8);
    /* 005c7bf8: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005c7bfa: mov word ptr [eax + 0x1c], dx */ W16((u32)(r_eax+0x1cu), (u16)r_edx);
    /* 005c7bfe: mov eax, dword ptr [0xa8d890] */ r_eax = R32((u32)(0xa8d890u));
L_005c7c03:; BB(0x005c7c03);
    /* 005c7c03: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7c05: je 0x5c7c12 */ if (fZ) goto L_005c7c12;
L_005c7c07:; BB(0x005c7c07);
    /* 005c7c07: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005c7c09: mov word ptr [eax + 0x1e], dx */ W16((u32)(r_eax+0x1eu), (u16)r_edx);
    /* 005c7c0d: mov eax, dword ptr [0xa8d890] */ r_eax = R32((u32)(0xa8d890u));
L_005c7c12:; BB(0x005c7c12);
    /* 005c7c12: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7c14: je 0x5c7c21 */ if (fZ) goto L_005c7c21;
L_005c7c16:; BB(0x005c7c16);
    /* 005c7c16: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005c7c18: mov word ptr [eax + 0x20], dx */ W16((u32)(r_eax+0x20u), (u16)r_edx);
    /* 005c7c1c: mov eax, dword ptr [0xa8d890] */ r_eax = R32((u32)(0xa8d890u));
L_005c7c21:; BB(0x005c7c21);
    /* 005c7c21: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7c23: je 0x5c7c2b */ if (fZ) goto L_005c7c2b;
L_005c7c25:; BB(0x005c7c25);
    /* 005c7c25: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005c7c27: mov word ptr [eax + 0x22], dx */ W16((u32)(r_eax+0x22u), (u16)r_edx);
L_005c7c2b:; BB(0x005c7c2b);
    /* 005c7c2b: mov eax, dword ptr [0xa8d8a0] */ r_eax = R32((u32)(0xa8d8a0u));
    /* 005c7c30: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7c32: je 0x5c7c5a */ if (fZ) goto L_005c7c5a;
L_005c7c34:; BB(0x005c7c34);
    /* 005c7c34: mov ecx, dword ptr [0xa8d8a4] */ r_ecx = R32((u32)(0xa8d8a4u));
    /* 005c7c3a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7c3c: je 0x5c7c5a */ if (fZ) goto L_005c7c5a;
L_005c7c3e:; BB(0x005c7c3e);
    /* 005c7c3e: mov edx, dword ptr [0xa8d89c] */ r_edx = R32((u32)(0xa8d89cu));
    /* 005c7c44: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7c46: je 0x5c7c5a */ if (fZ) goto L_005c7c5a;
L_005c7c48:; BB(0x005c7c48);
    /* 005c7c48: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 005c7c4a: mov eax, dword ptr [0xa8d89c] */ r_eax = R32((u32)(0xa8d89cu));
    /* 005c7c4f: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
    /* 005c7c55: mov eax, dword ptr [0xa8d8a0] */ r_eax = R32((u32)(0xa8d8a0u));
L_005c7c5a:; BB(0x005c7c5a);
    /* 005c7c5a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7c5c: je 0x5c7c8c */ if (fZ) goto L_005c7c8c;
L_005c7c5e:; BB(0x005c7c5e);
    /* 005c7c5e: mov ecx, dword ptr [0xa8d8a4] */ r_ecx = R32((u32)(0xa8d8a4u));
    /* 005c7c64: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7c66: je 0x5c7c8c */ if (fZ) goto L_005c7c8c;
L_005c7c68:; BB(0x005c7c68);
    /* 005c7c68: mov edx, dword ptr [0xa8d89c] */ r_edx = R32((u32)(0xa8d89cu));
    /* 005c7c6e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7c70: je 0x5c7c8c */ if (fZ) goto L_005c7c8c;
L_005c7c72:; BB(0x005c7c72);
    /* 005c7c72: add ecx, 0x1b00 */ {  u32 a = r_ecx; u32 b = 0x1b00u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c7c78: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 005c7c7b: mov eax, dword ptr [0xa8d89c] */ r_eax = R32((u32)(0xa8d89cu));
    /* 005c7c80: mov dword ptr [eax + 4], 0 */ W32((u32)(r_eax+0x4u), 0x0u);
    /* 005c7c87: mov eax, dword ptr [0xa8d8a0] */ r_eax = R32((u32)(0xa8d8a0u));
L_005c7c8c:; BB(0x005c7c8c);
    /* 005c7c8c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7c8e: je 0x5c7cbe */ if (fZ) goto L_005c7cbe;
L_005c7c90:; BB(0x005c7c90);
    /* 005c7c90: mov ecx, dword ptr [0xa8d8a4] */ r_ecx = R32((u32)(0xa8d8a4u));
    /* 005c7c96: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7c98: je 0x5c7cbe */ if (fZ) goto L_005c7cbe;
L_005c7c9a:; BB(0x005c7c9a);
    /* 005c7c9a: mov edx, dword ptr [0xa8d89c] */ r_edx = R32((u32)(0xa8d89cu));
    /* 005c7ca0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7ca2: je 0x5c7cbe */ if (fZ) goto L_005c7cbe;
L_005c7ca4:; BB(0x005c7ca4);
    /* 005c7ca4: add ecx, 0x3600 */ {  u32 a = r_ecx; u32 b = 0x3600u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c7caa: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 005c7cad: mov eax, dword ptr [0xa8d89c] */ r_eax = R32((u32)(0xa8d89cu));
    /* 005c7cb2: mov dword ptr [eax + 8], 0 */ W32((u32)(r_eax+0x8u), 0x0u);
    /* 005c7cb9: mov eax, dword ptr [0xa8d8a0] */ r_eax = R32((u32)(0xa8d8a0u));
L_005c7cbe:; BB(0x005c7cbe);
    /* 005c7cbe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7cc0: je 0x5c7cf0 */ if (fZ) goto L_005c7cf0;
L_005c7cc2:; BB(0x005c7cc2);
    /* 005c7cc2: mov ecx, dword ptr [0xa8d8a4] */ r_ecx = R32((u32)(0xa8d8a4u));
    /* 005c7cc8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7cca: je 0x5c7cf0 */ if (fZ) goto L_005c7cf0;
L_005c7ccc:; BB(0x005c7ccc);
    /* 005c7ccc: mov edx, dword ptr [0xa8d89c] */ r_edx = R32((u32)(0xa8d89cu));
    /* 005c7cd2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7cd4: je 0x5c7cf0 */ if (fZ) goto L_005c7cf0;
L_005c7cd6:; BB(0x005c7cd6);
    /* 005c7cd6: add ecx, 0x5100 */ {  u32 a = r_ecx; u32 b = 0x5100u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c7cdc: mov dword ptr [eax + 0xc], ecx */ W32((u32)(r_eax+0xcu), r_ecx);
    /* 005c7cdf: mov eax, dword ptr [0xa8d89c] */ r_eax = R32((u32)(0xa8d89cu));
    /* 005c7ce4: mov dword ptr [eax + 0xc], 0 */ W32((u32)(r_eax+0xcu), 0x0u);
    /* 005c7ceb: mov eax, dword ptr [0xa8d8a0] */ r_eax = R32((u32)(0xa8d8a0u));
L_005c7cf0:; BB(0x005c7cf0);
    /* 005c7cf0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7cf2: je 0x5c7d22 */ if (fZ) goto L_005c7d22;
L_005c7cf4:; BB(0x005c7cf4);
    /* 005c7cf4: mov ecx, dword ptr [0xa8d8a4] */ r_ecx = R32((u32)(0xa8d8a4u));
    /* 005c7cfa: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7cfc: je 0x5c7d22 */ if (fZ) goto L_005c7d22;
L_005c7cfe:; BB(0x005c7cfe);
    /* 005c7cfe: mov edx, dword ptr [0xa8d89c] */ r_edx = R32((u32)(0xa8d89cu));
    /* 005c7d04: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7d06: je 0x5c7d22 */ if (fZ) goto L_005c7d22;
L_005c7d08:; BB(0x005c7d08);
    /* 005c7d08: add ecx, 0x6c00 */ {  u32 a = r_ecx; u32 b = 0x6c00u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c7d0e: mov dword ptr [eax + 0x10], ecx */ W32((u32)(r_eax+0x10u), r_ecx);
    /* 005c7d11: mov eax, dword ptr [0xa8d89c] */ r_eax = R32((u32)(0xa8d89cu));
    /* 005c7d16: mov dword ptr [eax + 0x10], 0 */ W32((u32)(r_eax+0x10u), 0x0u);
    /* 005c7d1d: mov eax, dword ptr [0xa8d8a0] */ r_eax = R32((u32)(0xa8d8a0u));
L_005c7d22:; BB(0x005c7d22);
    /* 005c7d22: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7d24: je 0x5c7d54 */ if (fZ) goto L_005c7d54;
L_005c7d26:; BB(0x005c7d26);
    /* 005c7d26: mov ecx, dword ptr [0xa8d8a4] */ r_ecx = R32((u32)(0xa8d8a4u));
    /* 005c7d2c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7d2e: je 0x5c7d54 */ if (fZ) goto L_005c7d54;
L_005c7d30:; BB(0x005c7d30);
    /* 005c7d30: mov edx, dword ptr [0xa8d89c] */ r_edx = R32((u32)(0xa8d89cu));
    /* 005c7d36: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7d38: je 0x5c7d54 */ if (fZ) goto L_005c7d54;
L_005c7d3a:; BB(0x005c7d3a);
    /* 005c7d3a: add ecx, 0x8700 */ {  u32 a = r_ecx; u32 b = 0x8700u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c7d40: mov dword ptr [eax + 0x14], ecx */ W32((u32)(r_eax+0x14u), r_ecx);
    /* 005c7d43: mov eax, dword ptr [0xa8d89c] */ r_eax = R32((u32)(0xa8d89cu));
    /* 005c7d48: mov dword ptr [eax + 0x14], 0 */ W32((u32)(r_eax+0x14u), 0x0u);
    /* 005c7d4f: mov eax, dword ptr [0xa8d8a0] */ r_eax = R32((u32)(0xa8d8a0u));
L_005c7d54:; BB(0x005c7d54);
    /* 005c7d54: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7d56: je 0x5c7d86 */ if (fZ) goto L_005c7d86;
L_005c7d58:; BB(0x005c7d58);
    /* 005c7d58: mov ecx, dword ptr [0xa8d8a4] */ r_ecx = R32((u32)(0xa8d8a4u));
    /* 005c7d5e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7d60: je 0x5c7d86 */ if (fZ) goto L_005c7d86;
L_005c7d62:; BB(0x005c7d62);
    /* 005c7d62: mov edx, dword ptr [0xa8d89c] */ r_edx = R32((u32)(0xa8d89cu));
    /* 005c7d68: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7d6a: je 0x5c7d86 */ if (fZ) goto L_005c7d86;
L_005c7d6c:; BB(0x005c7d6c);
    /* 005c7d6c: add ecx, 0xa200 */ {  u32 a = r_ecx; u32 b = 0xa200u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c7d72: mov dword ptr [eax + 0x18], ecx */ W32((u32)(r_eax+0x18u), r_ecx);
    /* 005c7d75: mov eax, dword ptr [0xa8d89c] */ r_eax = R32((u32)(0xa8d89cu));
    /* 005c7d7a: mov dword ptr [eax + 0x18], 0 */ W32((u32)(r_eax+0x18u), 0x0u);
    /* 005c7d81: mov eax, dword ptr [0xa8d8a0] */ r_eax = R32((u32)(0xa8d8a0u));
L_005c7d86:; BB(0x005c7d86);
    /* 005c7d86: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7d88: je 0x5c7db8 */ if (fZ) goto L_005c7db8;
L_005c7d8a:; BB(0x005c7d8a);
    /* 005c7d8a: mov ecx, dword ptr [0xa8d8a4] */ r_ecx = R32((u32)(0xa8d8a4u));
    /* 005c7d90: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7d92: je 0x5c7db8 */ if (fZ) goto L_005c7db8;
L_005c7d94:; BB(0x005c7d94);
    /* 005c7d94: mov edx, dword ptr [0xa8d89c] */ r_edx = R32((u32)(0xa8d89cu));
    /* 005c7d9a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7d9c: je 0x5c7db8 */ if (fZ) goto L_005c7db8;
L_005c7d9e:; BB(0x005c7d9e);
    /* 005c7d9e: add ecx, 0xbd00 */ {  u32 a = r_ecx; u32 b = 0xbd00u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c7da4: mov dword ptr [eax + 0x1c], ecx */ W32((u32)(r_eax+0x1cu), r_ecx);
    /* 005c7da7: mov eax, dword ptr [0xa8d89c] */ r_eax = R32((u32)(0xa8d89cu));
    /* 005c7dac: mov dword ptr [eax + 0x1c], 0 */ W32((u32)(r_eax+0x1cu), 0x0u);
    /* 005c7db3: mov eax, dword ptr [0xa8d8a0] */ r_eax = R32((u32)(0xa8d8a0u));
L_005c7db8:; BB(0x005c7db8);
    /* 005c7db8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7dba: je 0x5c7dea */ if (fZ) goto L_005c7dea;
L_005c7dbc:; BB(0x005c7dbc);
    /* 005c7dbc: mov ecx, dword ptr [0xa8d8a4] */ r_ecx = R32((u32)(0xa8d8a4u));
    /* 005c7dc2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7dc4: je 0x5c7dea */ if (fZ) goto L_005c7dea;
L_005c7dc6:; BB(0x005c7dc6);
    /* 005c7dc6: mov edx, dword ptr [0xa8d89c] */ r_edx = R32((u32)(0xa8d89cu));
    /* 005c7dcc: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7dce: je 0x5c7dea */ if (fZ) goto L_005c7dea;
L_005c7dd0:; BB(0x005c7dd0);
    /* 005c7dd0: add ecx, 0xd800 */ {  u32 a = r_ecx; u32 b = 0xd800u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c7dd6: mov dword ptr [eax + 0x20], ecx */ W32((u32)(r_eax+0x20u), r_ecx);
    /* 005c7dd9: mov eax, dword ptr [0xa8d89c] */ r_eax = R32((u32)(0xa8d89cu));
    /* 005c7dde: mov dword ptr [eax + 0x20], 0 */ W32((u32)(r_eax+0x20u), 0x0u);
    /* 005c7de5: mov eax, dword ptr [0xa8d8a0] */ r_eax = R32((u32)(0xa8d8a0u));
L_005c7dea:; BB(0x005c7dea);
    /* 005c7dea: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7dec: je 0x5c7e1c */ if (fZ) goto L_005c7e1c;
L_005c7dee:; BB(0x005c7dee);
    /* 005c7dee: mov ecx, dword ptr [0xa8d8a4] */ r_ecx = R32((u32)(0xa8d8a4u));
    /* 005c7df4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7df6: je 0x5c7e1c */ if (fZ) goto L_005c7e1c;
L_005c7df8:; BB(0x005c7df8);
    /* 005c7df8: mov edx, dword ptr [0xa8d89c] */ r_edx = R32((u32)(0xa8d89cu));
    /* 005c7dfe: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7e00: je 0x5c7e1c */ if (fZ) goto L_005c7e1c;
L_005c7e02:; BB(0x005c7e02);
    /* 005c7e02: add ecx, 0xf300 */ {  u32 a = r_ecx; u32 b = 0xf300u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c7e08: mov dword ptr [eax + 0x24], ecx */ W32((u32)(r_eax+0x24u), r_ecx);
    /* 005c7e0b: mov eax, dword ptr [0xa8d89c] */ r_eax = R32((u32)(0xa8d89cu));
    /* 005c7e10: mov dword ptr [eax + 0x24], 0 */ W32((u32)(r_eax+0x24u), 0x0u);
    /* 005c7e17: mov eax, dword ptr [0xa8d8a0] */ r_eax = R32((u32)(0xa8d8a0u));
L_005c7e1c:; BB(0x005c7e1c);
    /* 005c7e1c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7e1e: je 0x5c7e4e */ if (fZ) goto L_005c7e4e;
L_005c7e20:; BB(0x005c7e20);
    /* 005c7e20: mov ecx, dword ptr [0xa8d8a4] */ r_ecx = R32((u32)(0xa8d8a4u));
    /* 005c7e26: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7e28: je 0x5c7e4e */ if (fZ) goto L_005c7e4e;
L_005c7e2a:; BB(0x005c7e2a);
    /* 005c7e2a: mov edx, dword ptr [0xa8d89c] */ r_edx = R32((u32)(0xa8d89cu));
    /* 005c7e30: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7e32: je 0x5c7e4e */ if (fZ) goto L_005c7e4e;
L_005c7e34:; BB(0x005c7e34);
    /* 005c7e34: add ecx, 0x10e00 */ {  u32 a = r_ecx; u32 b = 0x10e00u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c7e3a: mov dword ptr [eax + 0x28], ecx */ W32((u32)(r_eax+0x28u), r_ecx);
    /* 005c7e3d: mov eax, dword ptr [0xa8d89c] */ r_eax = R32((u32)(0xa8d89cu));
    /* 005c7e42: mov dword ptr [eax + 0x28], 0 */ W32((u32)(r_eax+0x28u), 0x0u);
    /* 005c7e49: mov eax, dword ptr [0xa8d8a0] */ r_eax = R32((u32)(0xa8d8a0u));
L_005c7e4e:; BB(0x005c7e4e);
    /* 005c7e4e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7e50: je 0x5c7e80 */ if (fZ) goto L_005c7e80;
L_005c7e52:; BB(0x005c7e52);
    /* 005c7e52: mov ecx, dword ptr [0xa8d8a4] */ r_ecx = R32((u32)(0xa8d8a4u));
    /* 005c7e58: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7e5a: je 0x5c7e80 */ if (fZ) goto L_005c7e80;
L_005c7e5c:; BB(0x005c7e5c);
    /* 005c7e5c: mov edx, dword ptr [0xa8d89c] */ r_edx = R32((u32)(0xa8d89cu));
    /* 005c7e62: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7e64: je 0x5c7e80 */ if (fZ) goto L_005c7e80;
L_005c7e66:; BB(0x005c7e66);
    /* 005c7e66: add ecx, 0x12900 */ {  u32 a = r_ecx; u32 b = 0x12900u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c7e6c: mov dword ptr [eax + 0x2c], ecx */ W32((u32)(r_eax+0x2cu), r_ecx);
    /* 005c7e6f: mov eax, dword ptr [0xa8d89c] */ r_eax = R32((u32)(0xa8d89cu));
    /* 005c7e74: mov dword ptr [eax + 0x2c], 0 */ W32((u32)(r_eax+0x2cu), 0x0u);
    /* 005c7e7b: mov eax, dword ptr [0xa8d8a0] */ r_eax = R32((u32)(0xa8d8a0u));
L_005c7e80:; BB(0x005c7e80);
    /* 005c7e80: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7e82: je 0x5c7eb2 */ if (fZ) goto L_005c7eb2;
L_005c7e84:; BB(0x005c7e84);
    /* 005c7e84: mov ecx, dword ptr [0xa8d8a4] */ r_ecx = R32((u32)(0xa8d8a4u));
    /* 005c7e8a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7e8c: je 0x5c7eb2 */ if (fZ) goto L_005c7eb2;
L_005c7e8e:; BB(0x005c7e8e);
    /* 005c7e8e: mov edx, dword ptr [0xa8d89c] */ r_edx = R32((u32)(0xa8d89cu));
    /* 005c7e94: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7e96: je 0x5c7eb2 */ if (fZ) goto L_005c7eb2;
L_005c7e98:; BB(0x005c7e98);
    /* 005c7e98: add ecx, 0x14400 */ {  u32 a = r_ecx; u32 b = 0x14400u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c7e9e: mov dword ptr [eax + 0x30], ecx */ W32((u32)(r_eax+0x30u), r_ecx);
    /* 005c7ea1: mov eax, dword ptr [0xa8d89c] */ r_eax = R32((u32)(0xa8d89cu));
    /* 005c7ea6: mov dword ptr [eax + 0x30], 0 */ W32((u32)(r_eax+0x30u), 0x0u);
    /* 005c7ead: mov eax, dword ptr [0xa8d8a0] */ r_eax = R32((u32)(0xa8d8a0u));
L_005c7eb2:; BB(0x005c7eb2);
    /* 005c7eb2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7eb4: je 0x5c7ee4 */ if (fZ) goto L_005c7ee4;
L_005c7eb6:; BB(0x005c7eb6);
    /* 005c7eb6: mov ecx, dword ptr [0xa8d8a4] */ r_ecx = R32((u32)(0xa8d8a4u));
    /* 005c7ebc: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7ebe: je 0x5c7ee4 */ if (fZ) goto L_005c7ee4;
L_005c7ec0:; BB(0x005c7ec0);
    /* 005c7ec0: mov edx, dword ptr [0xa8d89c] */ r_edx = R32((u32)(0xa8d89cu));
    /* 005c7ec6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7ec8: je 0x5c7ee4 */ if (fZ) goto L_005c7ee4;
L_005c7eca:; BB(0x005c7eca);
    /* 005c7eca: add ecx, 0x15f00 */ {  u32 a = r_ecx; u32 b = 0x15f00u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c7ed0: mov dword ptr [eax + 0x34], ecx */ W32((u32)(r_eax+0x34u), r_ecx);
    /* 005c7ed3: mov eax, dword ptr [0xa8d89c] */ r_eax = R32((u32)(0xa8d89cu));
    /* 005c7ed8: mov dword ptr [eax + 0x34], 0 */ W32((u32)(r_eax+0x34u), 0x0u);
    /* 005c7edf: mov eax, dword ptr [0xa8d8a0] */ r_eax = R32((u32)(0xa8d8a0u));
L_005c7ee4:; BB(0x005c7ee4);
    /* 005c7ee4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7ee6: je 0x5c7f16 */ if (fZ) goto L_005c7f16;
L_005c7ee8:; BB(0x005c7ee8);
    /* 005c7ee8: mov ecx, dword ptr [0xa8d8a4] */ r_ecx = R32((u32)(0xa8d8a4u));
    /* 005c7eee: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7ef0: je 0x5c7f16 */ if (fZ) goto L_005c7f16;
L_005c7ef2:; BB(0x005c7ef2);
    /* 005c7ef2: mov edx, dword ptr [0xa8d89c] */ r_edx = R32((u32)(0xa8d89cu));
    /* 005c7ef8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7efa: je 0x5c7f16 */ if (fZ) goto L_005c7f16;
L_005c7efc:; BB(0x005c7efc);
    /* 005c7efc: add ecx, 0x17a00 */ {  u32 a = r_ecx; u32 b = 0x17a00u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c7f02: mov dword ptr [eax + 0x38], ecx */ W32((u32)(r_eax+0x38u), r_ecx);
    /* 005c7f05: mov eax, dword ptr [0xa8d89c] */ r_eax = R32((u32)(0xa8d89cu));
    /* 005c7f0a: mov dword ptr [eax + 0x38], 0 */ W32((u32)(r_eax+0x38u), 0x0u);
    /* 005c7f11: mov eax, dword ptr [0xa8d8a0] */ r_eax = R32((u32)(0xa8d8a0u));
L_005c7f16:; BB(0x005c7f16);
    /* 005c7f16: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7f18: je 0x5c7f48 */ if (fZ) goto L_005c7f48;
L_005c7f1a:; BB(0x005c7f1a);
    /* 005c7f1a: mov ecx, dword ptr [0xa8d8a4] */ r_ecx = R32((u32)(0xa8d8a4u));
    /* 005c7f20: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7f22: je 0x5c7f48 */ if (fZ) goto L_005c7f48;
L_005c7f24:; BB(0x005c7f24);
    /* 005c7f24: mov edx, dword ptr [0xa8d89c] */ r_edx = R32((u32)(0xa8d89cu));
    /* 005c7f2a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7f2c: je 0x5c7f48 */ if (fZ) goto L_005c7f48;
L_005c7f2e:; BB(0x005c7f2e);
    /* 005c7f2e: add ecx, 0x19500 */ {  u32 a = r_ecx; u32 b = 0x19500u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c7f34: mov dword ptr [eax + 0x3c], ecx */ W32((u32)(r_eax+0x3cu), r_ecx);
    /* 005c7f37: mov eax, dword ptr [0xa8d89c] */ r_eax = R32((u32)(0xa8d89cu));
    /* 005c7f3c: mov dword ptr [eax + 0x3c], 0 */ W32((u32)(r_eax+0x3cu), 0x0u);
    /* 005c7f43: mov eax, dword ptr [0xa8d8a0] */ r_eax = R32((u32)(0xa8d8a0u));
L_005c7f48:; BB(0x005c7f48);
    /* 005c7f48: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7f4a: je 0x5c7f7a */ if (fZ) goto L_005c7f7a;
L_005c7f4c:; BB(0x005c7f4c);
    /* 005c7f4c: mov ecx, dword ptr [0xa8d8a4] */ r_ecx = R32((u32)(0xa8d8a4u));
    /* 005c7f52: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7f54: je 0x5c7f7a */ if (fZ) goto L_005c7f7a;
L_005c7f56:; BB(0x005c7f56);
    /* 005c7f56: mov edx, dword ptr [0xa8d89c] */ r_edx = R32((u32)(0xa8d89cu));
    /* 005c7f5c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7f5e: je 0x5c7f7a */ if (fZ) goto L_005c7f7a;
L_005c7f60:; BB(0x005c7f60);
    /* 005c7f60: add ecx, 0x1b000 */ {  u32 a = r_ecx; u32 b = 0x1b000u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c7f66: mov dword ptr [eax + 0x40], ecx */ W32((u32)(r_eax+0x40u), r_ecx);
    /* 005c7f69: mov eax, dword ptr [0xa8d89c] */ r_eax = R32((u32)(0xa8d89cu));
    /* 005c7f6e: mov dword ptr [eax + 0x40], 0 */ W32((u32)(r_eax+0x40u), 0x0u);
    /* 005c7f75: mov eax, dword ptr [0xa8d8a0] */ r_eax = R32((u32)(0xa8d8a0u));
L_005c7f7a:; BB(0x005c7f7a);
    /* 005c7f7a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c7f7c: je 0x5c7fa7 */ if (fZ) goto L_005c7fa7;
L_005c7f7e:; BB(0x005c7f7e);
    /* 005c7f7e: mov ecx, dword ptr [0xa8d8a4] */ r_ecx = R32((u32)(0xa8d8a4u));
    /* 005c7f84: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c7f86: je 0x5c7fa7 */ if (fZ) goto L_005c7fa7;
L_005c7f88:; BB(0x005c7f88);
    /* 005c7f88: mov edx, dword ptr [0xa8d89c] */ r_edx = R32((u32)(0xa8d89cu));
    /* 005c7f8e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c7f90: je 0x5c7fa7 */ if (fZ) goto L_005c7fa7;
L_005c7f92:; BB(0x005c7f92);
    /* 005c7f92: add ecx, 0x1cb00 */ {  u32 a = r_ecx; u32 b = 0x1cb00u; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005c7f98: mov dword ptr [eax + 0x44], ecx */ W32((u32)(r_eax+0x44u), r_ecx);
    /* 005c7f9b: mov eax, dword ptr [0xa8d89c] */ r_eax = R32((u32)(0xa8d89cu));
    /* 005c7fa0: mov dword ptr [eax + 0x44], 0 */ W32((u32)(r_eax+0x44u), 0x0u);
L_005c7fa7:; BB(0x005c7fa7);
    /* 005c7fa7: mov dword ptr [0xa8d894], 0 */ W32((u32)(0xa8d894u), 0x0u);
    /* 005c7fb1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005c7fb2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005c7fb3: ret  */ FN_RET(0x005c7a7c); r_esp += 4; return;
L_005c7fb4:; BB(0x005c7fb4);
    /* 005c7fb4: movzx eax, word ptr [esi + 8] */ r_eax = (u32)R16((u32)(r_esi+0x8u));
    /* 005c7fb8: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005c7fbd: mov word ptr [esi + 8], ax */ W16((u32)(r_esi+0x8u), (u16)r_eax);
    /* 005c7fc1: mov eax, dword ptr [0xaae16c] */ r_eax = R32((u32)(0xaae16cu));
    /* 005c7fc6: jmp 0x5c7ac6 */ goto L_005c7ac6;
}

void f_005c7f93(void)
{
    FN_ENTER(0x005c7f93);
    /* 005c7f93: rol dword ptr [eax], 0xcb */ { u32 ad = (u32)(r_eax); u32 c = (11u) & 31; u32 a = R32(ad); u32 r = a; if (c) { { u32 k = c % 32; r = k ? (((a << k) | (a >> (32 - k))) & 0xffffffffu) : a; } W32(ad, r);  } }
    /* 005c7f96: add dword ptr [eax], eax */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005c7f98: mov dword ptr [eax + 0x44], ecx */ W32((u32)(r_eax+0x44u), r_ecx);
    /* 005c7f9b: mov eax, dword ptr [0xa8d89c] */ r_eax = R32((u32)(0xa8d89cu));
    /* 005c7fa0: mov dword ptr [eax + 0x44], 0 */ W32((u32)(r_eax+0x44u), 0x0u);
    /* 005c7fa7: mov dword ptr [0xa8d894], 0 */ W32((u32)(0xa8d894u), 0x0u);
    /* 005c7fb1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005c7fb2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005c7fb3: ret  */ FN_RET(0x005c7f93); r_esp += 4; return;
}

void f_005c7fcc(void) /* sub_5C7FCC */
{
    FN_ENTER(0x005c7fcc);
    /* 005c7fcc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005c7fcd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005c7fce: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c7fcf: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005c7fd0: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c7fd3: mov esi, dword ptr [esp + 0x34] */ r_esi = R32((u32)(r_esp+0x34u));
    /* 005c7fd7: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7fd9: je 0x5c8086 */ if (fZ) goto L_005c8086;
L_005c7fdf:; BB(0x005c7fdf);
    /* 005c7fdf: movsx ebp, byte ptr [esi] */ r_ebp = (u32)(i32)(i8)R8((u32)(r_esi));
    /* 005c7fe2: mov eax, ebp */ r_eax = r_ebp;
    /* 005c7fe4: call 0x5c81f0 */ r_esp -= 4; W32(r_esp, 0x5c7fe9u); f_005c81f0();
    /* 005c7fe9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7feb: je 0x5c8081 */ if (fZ) goto L_005c8081;
L_005c7ff1:; BB(0x005c7ff1);
    /* 005c7ff1: mov edx, dword ptr [0xa9c4f4] */ r_edx = R32((u32)(0xa9c4f4u));
    /* 005c7ff7: cmp edx, dword ptr [0xa9c4dc] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa9c4dcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7ffd: jne 0x5c8081 */ if (!fZ) goto L_005c8081;
L_005c8003:; BB(0x005c8003);
    /* 005c8003: mov edx, dword ptr [0xa8d89c] */ r_edx = R32((u32)(0xa8d89cu));
    /* 005c8009: mov ecx, 0xffff */ r_ecx = 0xffffu;
    /* 005c800e: mov edx, dword ptr [edx + ebp*4] */ r_edx = R32((u32)(r_edx+r_ebp*4));
    /* 005c8011: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 005c8015: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 005c8017: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005c8019: lea edi, [ebp + ebp] */ r_edi = (u32)(r_ebp+r_ebp);
    /* 005c801d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c801f: je 0x5c8090 */ if (fZ) goto L_005c8090;
L_005c8021:; BB(0x005c8021);
    /* 005c8021: mov eax, dword ptr [0xa8d8a0] */ r_eax = R32((u32)(0xa8d8a0u));
    /* 005c8026: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
    /* 005c802a: mov eax, dword ptr [eax + edi*2] */ r_eax = R32((u32)(r_eax+r_edi*2));
    /* 005c802d: mov dword ptr [esp + 0x18], ebp */ W32((u32)(r_esp+0x18u), r_ebp);
    /* 005c8031: lea edi, [ecx + ecx] */ r_edi = (u32)(r_ecx+r_ecx);
    /* 005c8034: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005c8036: lea edi, [edi + edi*8] */ r_edi = (u32)(r_edi+r_edi*8);
L_005c8039:; BB(0x005c8039);
    /* 005c8039: movzx ebp, word ptr [edi + eax + 0xe] */ r_ebp = (u32)R16((u32)(r_edi+r_eax+0xeu));
    /* 005c803e: cmp ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c8040: jge 0x5c8046 */ if ((fS==fO)) goto L_005c8046;
L_005c8042:; BB(0x005c8042);
    /* 005c8042: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005c8044: mov esi, ebp */ r_esi = r_ebp;
L_005c8046:; BB(0x005c8046);
    /* 005c8046: add edi, 0x24 */ {  u32 a = r_edi; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005c8049: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c804c: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c804e: jne 0x5c8039 */ if (!fZ) goto L_005c8039;
L_005c8050:; BB(0x005c8050);
    /* 005c8050: mov ebp, dword ptr [esp + 0x18] */ r_ebp = R32((u32)(r_esp+0x18u));
    /* 005c8054: mov esi, dword ptr [esp + 0x34] */ r_esi = R32((u32)(r_esp+0x34u));
L_005c8058:; BB(0x005c8058);
    /* 005c8058: mov byte ptr [esp + 4], 0x63 */ W8((u32)(r_esp+0x4u), 0x63u);
    /* 005c805d: mov dword ptr [esp + 0xc], ebp */ W32((u32)(r_esp+0xcu), r_ebp);
    /* 005c8061: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005c8063: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005c8065: mov byte ptr [esp + 5], 3 */ W8((u32)(r_esp+0x5u), 0x3u);
    /* 005c806a: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 005c806e: lea edx, [ebx + ebx*8] */ r_edx = (u32)(r_ebx+r_ebx*8);
    /* 005c8071: mov ebx, dword ptr [edx + eax + 0x1c] */ r_ebx = R32((u32)(r_edx+r_eax+0x1cu));
    /* 005c8075: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 005c8079: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x5c807eu); f_008003e0();
    /* 005c807e: movsx ebp, byte ptr [esi] */ r_ebp = (u32)(i32)(i8)R8((u32)(r_esi));
L_005c8081:; BB(0x005c8081);
    /* 005c8081: cmp ebp, 0x12 */ {  u32 a = r_ebp; u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c8084: jl 0x5c809b */ if ((fS!=fO)) goto L_005c809b;
L_005c8086:; BB(0x005c8086);
    /* 005c8086: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005c8088: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005c808b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005c808c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c808d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005c808e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005c808f: ret  */ FN_RET(0x005c7fcc); r_esp += 4; return;
L_005c8090:; BB(0x005c8090);
    /* 005c8090: mov edx, dword ptr [0xa8d8a0] */ r_edx = R32((u32)(0xa8d8a0u));
    /* 005c8096: mov eax, dword ptr [edx + edi*2] */ r_eax = R32((u32)(r_edx+r_edi*2));
    /* 005c8099: jmp 0x5c8058 */ goto L_005c8058;
L_005c809b:; BB(0x005c809b);
    /* 005c809b: mov eax, ebp */ r_eax = r_ebp;
    /* 005c809d: call 0x5c8214 */ r_esp -= 4; W32(r_esp, 0x5c80a2u); f_005c8214();
    /* 005c80a2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c80a4: je 0x5c8086 */ if (fZ) goto L_005c8086;
L_005c80a6:; BB(0x005c80a6);
    /* 005c80a6: mov edx, dword ptr [0xa8d8a0] */ r_edx = R32((u32)(0xa8d8a0u));
    /* 005c80ac: mov edi, dword ptr [edx + ebp*4] */ r_edi = R32((u32)(r_edx+r_ebp*4));
    /* 005c80af: lea ebx, [ebp + ebp] */ r_ebx = (u32)(r_ebp+r_ebp);
    /* 005c80b3: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c80b5: je 0x5c8086 */ if (fZ) goto L_005c8086;
L_005c80b7:; BB(0x005c80b7);
    /* 005c80b7: mov edx, dword ptr [0xa8d89c] */ r_edx = R32((u32)(0xa8d89cu));
    /* 005c80bd: mov ecx, dword ptr [esi + 0x1c] */ r_ecx = R32((u32)(r_esi+0x1cu));
    /* 005c80c0: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 005c80c4: mov edx, dword ptr [edx + ebx*2] */ r_edx = R32((u32)(r_edx+r_ebx*2));
    /* 005c80c7: lea eax, [edx - 1] */ r_eax = (u32)(r_edx+0xffffffffu);
    /* 005c80ca: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 005c80ce: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005c80d0: jl 0x5c8169 */ if ((fS!=fO)) goto L_005c8169;
L_005c80d6:; BB(0x005c80d6);
    /* 005c80d6: lea eax, [edx + edx - 2] */ r_eax = (u32)(r_edx+r_edx+0xfffffffeu);
    /* 005c80da: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c80dc: lea eax, [eax + eax*8] */ r_eax = (u32)(r_eax+r_eax*8);
    /* 005c80df: cmp ecx, dword ptr [eax + edi + 0x1c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+r_edi+0x1cu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c80e3: jge 0x5c8169 */ if ((fS==fO)) goto L_005c8169;
L_005c80e9:; BB(0x005c80e9);
    /* 005c80e9: mov ebp, dword ptr [esp + 0x1c] */ r_ebp = R32((u32)(r_esp+0x1cu));
    /* 005c80ed: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005c80ef: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005c80f1: jle 0x5c8125 */ if ((fZ||fS!=fO)) goto L_005c8125;
L_005c80f3:; BB(0x005c80f3);
    /* 005c80f3: mov dword ptr [esp + 0x10], ebx */ W32((u32)(r_esp+0x10u), r_ebx);
L_005c80f7:; BB(0x005c80f7);
    /* 005c80f7: lea ebx, [ebp + eax] */ r_ebx = (u32)(r_ebp+r_eax);
    /* 005c80fb: mov esi, ebx */ r_esi = r_ebx;
    /* 005c80fd: shr esi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 005c8100: add ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005c8102: sar ebx, 1 */ { u32 c = (1u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 005c8104: lea esi, [ebx + ebx] */ r_esi = (u32)(r_ebx+r_ebx);
    /* 005c8107: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005c8109: lea esi, [esi + esi*8] */ r_esi = (u32)(r_esi+r_esi*8);
    /* 005c810c: cmp ecx, dword ptr [esi + edi + 0x1c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esi+r_edi+0x1cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c8110: jle 0x5c8117 */ if ((fZ||fS!=fO)) goto L_005c8117;
L_005c8112:; BB(0x005c8112);
    /* 005c8112: lea eax, [ebx + 1] */ r_eax = (u32)(r_ebx+0x1u);
    /* 005c8115: jmp 0x5c8119 */ goto L_005c8119;
L_005c8117:; BB(0x005c8117);
    /* 005c8117: mov ebp, ebx */ r_ebp = r_ebx;
L_005c8119:; BB(0x005c8119);
    /* 005c8119: cmp eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c811b: jl 0x5c80f7 */ if ((fS!=fO)) goto L_005c80f7;
L_005c811d:; BB(0x005c811d);
    /* 005c811d: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 005c8121: mov esi, dword ptr [esp + 0x34] */ r_esi = R32((u32)(r_esp+0x34u));
L_005c8125:; BB(0x005c8125);
    /* 005c8125: lea ebp, [eax + eax] */ r_ebp = (u32)(r_eax+r_eax);
    /* 005c8128: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005c812a: lea ebp, [ebp + ebp*8] */ r_ebp = (u32)(r_ebp+r_ebp*8);
    /* 005c812e: mov dword ptr [esp + 0x1c], ebp */ W32((u32)(r_esp+0x1cu), r_ebp);
    /* 005c8132: lea ebp, [edi + ebp] */ r_ebp = (u32)(r_edi+r_ebp);
    /* 005c8135: cmp ecx, dword ptr [ebp + 0x1c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x1cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c8138: jne 0x5c8144 */ if (!fZ) goto L_005c8144;
L_005c813a:; BB(0x005c813a);
    /* 005c813a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005c813c: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005c813f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005c8140: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c8141: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005c8142: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005c8143: ret  */ FN_RET(0x005c7fcc); r_esp += 4; return;
L_005c8144:; BB(0x005c8144);
    /* 005c8144: lea ecx, [ebp + 0x24] */ r_ecx = (u32)(r_ebp+0x24u);
    /* 005c8147: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c8149: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c814b: lea edx, [edx + edx*8] */ r_edx = (u32)(r_edx+r_edx*8);
    /* 005c814e: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005c8150: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c8152: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c8154: lea eax, [eax + eax*8] */ r_eax = (u32)(r_eax+r_eax*8);
    /* 005c8157: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c8159: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c815a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c815b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c815c: call 0x858c80 */ r_esp -= 4; W32(r_esp, 0x5c8161u); f_00858c80();
    /* 005c8161: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c8164: movsx ebp, byte ptr [esi] */ r_ebp = (u32)(i32)(i8)R8((u32)(r_esi));
    /* 005c8167: jmp 0x5c8174 */ goto L_005c8174;
L_005c8169:; BB(0x005c8169);
    /* 005c8169: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c816b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c816d: lea edx, [edx + edx*8] */ r_edx = (u32)(r_edx+r_edx*8);
    /* 005c8170: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
L_005c8174:; BB(0x005c8174);
    /* 005c8174: mov ecx, dword ptr [0xa8d890] */ r_ecx = R32((u32)(0xa8d890u));
    /* 005c817a: movzx edx, word ptr [ecx + ebp*2] */ r_edx = (u32)R16((u32)(r_ecx+r_ebp*2));
    /* 005c817e: mov word ptr [esi + 0xe], dx */ W16((u32)(r_esi+0xeu), (u16)r_edx);
    /* 005c8182: movzx edx, word ptr [ecx + ebp*2] */ r_edx = (u32)R16((u32)(r_ecx+r_ebp*2));
    /* 005c8186: cmp edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c818c: je 0x5c8195 */ if (fZ) goto L_005c8195;
L_005c818e:; BB(0x005c818e);
    /* 005c818e: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c8191: mov word ptr [ecx + ebp*2], dx */ W16((u32)(r_ecx+r_ebp*2), (u16)r_edx);
L_005c8195:; BB(0x005c8195);
    /* 005c8195: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 005c8199: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 005c819b: mov dword ptr [edx + edi], ecx */ W32((u32)(r_edx+r_edi), r_ecx);
    /* 005c819e: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 005c81a1: mov dword ptr [edx + edi + 4], eax */ W32((u32)(r_edx+r_edi+0x4u), r_eax);
    /* 005c81a5: mov ebp, dword ptr [esi + 8] */ r_ebp = R32((u32)(r_esi+0x8u));
    /* 005c81a8: mov dword ptr [edx + edi + 8], ebp */ W32((u32)(r_edx+r_edi+0x8u), r_ebp);
    /* 005c81ac: mov eax, dword ptr [esi + 0xc] */ r_eax = R32((u32)(r_esi+0xcu));
    /* 005c81af: mov dword ptr [edx + edi + 0xc], eax */ W32((u32)(r_edx+r_edi+0xcu), r_eax);
    /* 005c81b3: mov eax, dword ptr [esi + 0x10] */ r_eax = R32((u32)(r_esi+0x10u));
    /* 005c81b6: mov dword ptr [edx + edi + 0x10], eax */ W32((u32)(r_edx+r_edi+0x10u), r_eax);
    /* 005c81ba: mov eax, dword ptr [esi + 0x14] */ r_eax = R32((u32)(r_esi+0x14u));
    /* 005c81bd: mov dword ptr [edx + edi + 0x14], eax */ W32((u32)(r_edx+r_edi+0x14u), r_eax);
    /* 005c81c1: mov eax, dword ptr [esi + 0x18] */ r_eax = R32((u32)(r_esi+0x18u));
    /* 005c81c4: mov dword ptr [edx + edi + 0x18], eax */ W32((u32)(r_edx+r_edi+0x18u), r_eax);
    /* 005c81c8: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 005c81cb: mov dword ptr [edx + edi + 0x1c], eax */ W32((u32)(r_edx+r_edi+0x1cu), r_eax);
    /* 005c81cf: mov esi, dword ptr [esi + 0x20] */ r_esi = R32((u32)(r_esi+0x20u));
    /* 005c81d2: mov dword ptr [edx + edi + 0x20], esi */ W32((u32)(r_edx+r_edi+0x20u), r_esi);
    /* 005c81d6: mov eax, 1 */ r_eax = 0x1u;
    /* 005c81db: mov edi, dword ptr [esp + 0x14] */ r_edi = R32((u32)(r_esp+0x14u));
    /* 005c81df: add dword ptr [edi + ebx*2], 1 */ { u32 ad = (u32)(r_edi+r_ebx*2);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 005c81e3: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005c81e6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005c81e7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c81e8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005c81e9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005c81ea: ret  */ FN_RET(0x005c7fcc); r_esp += 4; return;
}

