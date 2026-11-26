#include "protos.h"

void f_007b007a(void)
{
    FN_ENTER(0x007b007a);
    /* 007b007a: adc dword ptr [eax + 0xd000000], 0 */ { u32 ad = (u32)(r_eax+0xd000000u); u32 c = fC; u32 a = R32(ad); u32 b = 0x0u; u32 r = (a + b + c) & 0xffffffffu; W32(ad, r);  }
    /* 007b0081: add al, byte ptr [eax] */ {  u32 a = (u8)r_eax; u32 b = R8((u32)(r_eax)); u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 007b0083: add byte ptr [ecx + 0x9083], cl */ { u32 ad = (u32)(r_ecx+0x9083u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 007b0089: add byte ptr [esi - 0x77], ah */ { u32 ad = (u32)(r_esi+0xffffff89u);  u32 a = R8(ad); u32 b = (u8)(r_eax>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 007b008c: stosd dword ptr es:[edi], eax */ W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4;
    /* 007b008d: mov byte ptr [eax], al */ W8((u32)(r_eax), (u8)r_eax);
    /* 007b008f: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 007b0091: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b0093: je 0x7b00a1 */ if (fZ) goto L_007b00a1;
L_007b0095:; BB(0x007b0095);
    /* 007b0095: mov eax, 1 */ r_eax = 0x1u;
    /* 007b009a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007b009d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007b009e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007b009f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007b00a0: ret  */ FN_RET(0x007b007a); r_esp += 4; return;
L_007b00a1:; BB(0x007b00a1);
    /* 007b00a1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007b00a3: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007b00a6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007b00a7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007b00a8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007b00a9: ret  */ FN_RET(0x007b007a); r_esp += 4; return;
}

void f_007b00bc(void) /* sub_7B00BC */
{
    FN_ENTER(0x007b00bc);
    /* 007b00bc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007b00bd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007b00be: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007b00c1: mov esi, ecx */ r_esi = r_ecx;
    /* 007b00c3: call 0x807e10 */ r_esp -= 4; W32(r_esp, 0x7b00c8u); f_00807e10();
    /* 007b00c8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b00ca: jne 0x7b072b */ if (!fZ) goto L_007b072b;
L_007b00d0:; BB(0x007b00d0);
    /* 007b00d0: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 007b00d3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b00d5: jne 0x7b02a7 */ if (!fZ) goto L_007b02a7;
L_007b00db:; BB(0x007b00db);
    /* 007b00db: mov edx, dword ptr [esi + 0x78] */ r_edx = R32((u32)(r_esi+0x78u));
    /* 007b00de: mov eax, dword ptr [edx + 0x8c] */ r_eax = R32((u32)(r_edx+0x8cu));
    /* 007b00e4: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007b00e6: je 0x7b0137 */ if (fZ) goto L_007b0137;
L_007b00e8:; BB(0x007b00e8);
    /* 007b00e8: mov eax, dword ptr [esi + 0x80] */ r_eax = R32((u32)(r_esi+0x80u));
    /* 007b00ee: mov dword ptr [esi + 0x1c], 1 */ W32((u32)(r_esi+0x1cu), 0x1u);
    /* 007b00f5: and eax, 0xffffefcf */ {  u32 a = r_eax; u32 b = 0xffffefcfu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 007b00fa: mov dword ptr [esi + 0x80], eax */ W32((u32)(r_esi+0x80u), r_eax);
    /* 007b0100: mov dword ptr [esi + 0x7c], 0 */ W32((u32)(r_esi+0x7cu), 0x0u);
    /* 007b0107: mov eax, dword ptr [edx + 0x94] */ r_eax = R32((u32)(r_edx+0x94u));
    /* 007b010d: mov edx, dword ptr [eax + 0x300] */ r_edx = R32((u32)(r_eax+0x300u));
    /* 007b0113: mov dword ptr [esi + 0xdc], edx */ W32((u32)(r_esi+0xdcu), r_edx);
    /* 007b0119: mov edi, dword ptr [eax + 0x304] */ r_edi = R32((u32)(r_eax+0x304u));
    /* 007b011f: mov dword ptr [esi + 0xe0], edi */ W32((u32)(r_esi+0xe0u), r_edi);
    /* 007b0125: mov eax, dword ptr [eax + 0x308] */ r_eax = R32((u32)(r_eax+0x308u));
    /* 007b012b: mov dword ptr [esi + 0xe4], eax */ W32((u32)(r_esi+0xe4u), r_eax);
    /* 007b0131: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007b0134: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007b0135: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007b0136: ret  */ FN_RET(0x007b00bc); r_esp += 4; return;
L_007b0137:; BB(0x007b0137);
    /* 007b0137: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007b0139: mov eax, dword ptr [esi + 0x80] */ r_eax = R32((u32)(r_esi+0x80u));
    /* 007b013f: and eax, 0xfffffeff */ {  u32 a = r_eax; u32 b = 0xfffffeffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 007b0144: mov dword ptr [esi + 0x80], eax */ W32((u32)(r_esi+0x80u), r_eax);
    /* 007b014a: mov ecx, esi */ r_ecx = r_esi;
    /* 007b014c: call 0x7b0a7c */ r_esp -= 4; W32(r_esp, 0x7b0151u); f_007b0a7c();
    /* 007b0151: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b0153: je 0x7b0276 */ if (fZ) goto L_007b0276;
L_007b0159:; BB(0x007b0159);
    /* 007b0159: mov eax, dword ptr [esi + 0x80] */ r_eax = R32((u32)(r_esi+0x80u));
    /* 007b015f: test eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b0164: je 0x7b01d1 */ if (fZ) goto L_007b01d1;
L_007b0166:; BB(0x007b0166);
    /* 007b0166: mov edx, dword ptr [esi + 0x24] */ r_edx = R32((u32)(r_esi+0x24u));
    /* 007b0169: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007b016b: mov word ptr [esi + 0x5c], ax */ W16((u32)(r_esi+0x5cu), (u16)r_eax);
    /* 007b016f: cmp edx, 0x13 */ {  u32 a = r_edx; u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b0172: jne 0x7b017c */ if (!fZ) goto L_007b017c;
L_007b0174:; BB(0x007b0174);
    /* 007b0174: mov eax, dword ptr [esi + 0x80] */ r_eax = R32((u32)(r_esi+0x80u));
    /* 007b017a: jmp 0x7b018c */ goto L_007b018c;
L_007b017c:; BB(0x007b017c);
    /* 007b017c: mov eax, dword ptr [esi + 0x80] */ r_eax = R32((u32)(r_esi+0x80u));
    /* 007b0182: mov dword ptr [esi + 0x24], 0x13 */ W32((u32)(r_esi+0x24u), 0x13u);
    /* 007b0189: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_007b018c:; BB(0x007b018c);
    /* 007b018c: mov dword ptr [esi + 0x7c], 8 */ W32((u32)(r_esi+0x7cu), 0x8u);
    /* 007b0193: and eax, 0xffffefff */ {  u32 a = r_eax; u32 b = 0xffffefffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 007b0198: mov dword ptr [esi + 0x80], eax */ W32((u32)(r_esi+0x80u), r_eax);
    /* 007b019e: mov eax, dword ptr [esi + 0x78] */ r_eax = R32((u32)(r_esi+0x78u));
    /* 007b01a1: mov eax, dword ptr [eax + 0x94] */ r_eax = R32((u32)(r_eax+0x94u));
    /* 007b01a7: mov edx, dword ptr [eax + 0x300] */ r_edx = R32((u32)(r_eax+0x300u));
    /* 007b01ad: mov dword ptr [esi + 0xdc], edx */ W32((u32)(r_esi+0xdcu), r_edx);
    /* 007b01b3: mov edi, dword ptr [eax + 0x304] */ r_edi = R32((u32)(r_eax+0x304u));
    /* 007b01b9: mov dword ptr [esi + 0xe0], edi */ W32((u32)(r_esi+0xe0u), r_edi);
    /* 007b01bf: mov eax, dword ptr [eax + 0x308] */ r_eax = R32((u32)(r_eax+0x308u));
    /* 007b01c5: mov dword ptr [esi + 0xe4], eax */ W32((u32)(r_esi+0xe4u), r_eax);
    /* 007b01cb: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007b01ce: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007b01cf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007b01d0: ret  */ FN_RET(0x007b00bc); r_esp += 4; return;
L_007b01d1:; BB(0x007b01d1);
    /* 007b01d1: and eax, 0xfffffdff */ {  u32 a = r_eax; u32 b = 0xfffffdffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 007b01d6: mov dword ptr [esi + 0x80], eax */ W32((u32)(r_esi+0x80u), r_eax);
    /* 007b01dc: mov eax, dword ptr [esi + 0x78] */ r_eax = R32((u32)(r_esi+0x78u));
    /* 007b01df: mov edx, dword ptr [eax + 0x94] */ r_edx = R32((u32)(r_eax+0x94u));
    /* 007b01e5: lea edi, [esi + 0xdc] */ r_edi = (u32)(r_esi+0xdcu);
    /* 007b01eb: add edx, 0x38 */ {  u32 a = r_edx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007b01ee: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007b01ef: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007b01f0: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x7b01f5u); f_007a9180();
    /* 007b01f5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007b01f8: fcomp dword ptr [0x97dd9c] */ fx_compare(ST(0), R_F32((u32)(0x97dd9cu))); FPOP();
    /* 007b01fe: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007b0200: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007b0201: jae 0x7b024e */ if (!fC) goto L_007b024e;
L_007b0203:; BB(0x007b0203);
    /* 007b0203: mov eax, dword ptr [esi + 0x80] */ r_eax = R32((u32)(r_esi+0x80u));
    /* 007b0209: mov edx, dword ptr [esi + 0x78] */ r_edx = R32((u32)(r_esi+0x78u));
    /* 007b020c: mov dword ptr [esi + 0x7c], 8 */ W32((u32)(r_esi+0x7cu), 0x8u);
    /* 007b0213: and eax, 0xffffefff */ {  u32 a = r_eax; u32 b = 0xffffefffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 007b0218: mov dword ptr [esi + 0x80], eax */ W32((u32)(r_esi+0x80u), r_eax);
    /* 007b021e: mov edx, dword ptr [edx + 0x94] */ r_edx = R32((u32)(r_edx+0x94u));
    /* 007b0224: mov edi, dword ptr [edx + 0x300] */ r_edi = R32((u32)(r_edx+0x300u));
    /* 007b022a: mov dword ptr [esi + 0xdc], edi */ W32((u32)(r_esi+0xdcu), r_edi);
    /* 007b0230: mov eax, dword ptr [edx + 0x304] */ r_eax = R32((u32)(r_edx+0x304u));
    /* 007b0236: mov dword ptr [esi + 0xe0], eax */ W32((u32)(r_esi+0xe0u), r_eax);
    /* 007b023c: mov eax, dword ptr [edx + 0x308] */ r_eax = R32((u32)(r_edx+0x308u));
    /* 007b0242: mov dword ptr [esi + 0xe4], eax */ W32((u32)(r_esi+0xe4u), r_eax);
    /* 007b0248: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007b024b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007b024c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007b024d: ret  */ FN_RET(0x007b00bc); r_esp += 4; return;
L_007b024e:; BB(0x007b024e);
    /* 007b024e: mov ecx, esi */ r_ecx = r_esi;
    /* 007b0250: call 0x7b0fdc */ r_esp -= 4; W32(r_esp, 0x7b0255u); f_007b0fdc();
    /* 007b0255: mov eax, dword ptr [esi + 0x80] */ r_eax = R32((u32)(r_esi+0x80u));
    /* 007b025b: mov dword ptr [esi + 0x7c], 1 */ W32((u32)(r_esi+0x7cu), 0x1u);
    /* 007b0262: and eax, 0xffffefef */ {  u32 a = r_eax; u32 b = 0xffffefefu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 007b0267: or eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007b026a: mov dword ptr [esi + 0x80], eax */ W32((u32)(r_esi+0x80u), r_eax);
    /* 007b0270: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007b0273: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007b0274: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007b0275: ret  */ FN_RET(0x007b00bc); r_esp += 4; return;
L_007b0276:; BB(0x007b0276);
    /* 007b0276: mov ecx, esi */ r_ecx = r_esi;
    /* 007b0278: call 0x7b0fdc */ r_esp -= 4; W32(r_esp, 0x7b027du); f_007b0fdc();
    /* 007b027d: mov eax, dword ptr [esi + 0x80] */ r_eax = R32((u32)(r_esi+0x80u));
    /* 007b0283: mov dword ptr [esi + 0x7c], 1 */ W32((u32)(r_esi+0x7cu), 0x1u);
    /* 007b028a: and eax, 0xffffefef */ {  u32 a = r_eax; u32 b = 0xffffefefu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 007b028f: or eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007b0292: mov dword ptr [esi + 0x80], eax */ W32((u32)(r_esi+0x80u), r_eax);
    /* 007b0298: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007b029a: mov word ptr [esi + 0x8e], dx */ W16((u32)(r_esi+0x8eu), (u16)r_edx);
    /* 007b02a1: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007b02a4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007b02a5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007b02a6: ret  */ FN_RET(0x007b00bc); r_esp += 4; return;
L_007b02a7:; BB(0x007b02a7);
    /* 007b02a7: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b02aa: jne 0x7b0725 */ if (!fZ) goto L_007b0725;
L_007b02b0:; BB(0x007b02b0);
    /* 007b02b0: fld dword ptr [0x97ddb0] */ FPUSH(R_F32((u32)(0x97ddb0u)));
    /* 007b02b6: mov eax, dword ptr [esi + 0x80] */ r_eax = R32((u32)(r_esi+0x80u));
    /* 007b02bc: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 007b02c0: test eax, 0x8000 */ {  u32 a = r_eax; u32 b = 0x8000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b02c5: je 0x7b02d1 */ if (fZ) goto L_007b02d1;
L_007b02c7:; BB(0x007b02c7);
    /* 007b02c7: fld dword ptr [0x97ddac] */ FPUSH(R_F32((u32)(0x97ddacu)));
    /* 007b02cd: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
L_007b02d1:; BB(0x007b02d1);
    /* 007b02d1: mov eax, dword ptr [esi + 0x78] */ r_eax = R32((u32)(r_esi+0x78u));
    /* 007b02d4: mov ecx, dword ptr [eax + 0x94] */ r_ecx = R32((u32)(r_eax+0x94u));
    /* 007b02da: call 0x699510 */ r_esp -= 4; W32(r_esp, 0x7b02dfu); f_00699510();
    /* 007b02df: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b02e1: je 0x7b037b */ if (fZ) goto L_007b037b;
L_007b02e7:; BB(0x007b02e7);
    /* 007b02e7: movsx eax, word ptr [esi + 0x8e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x8eu));
    /* 007b02ee: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b02f0: jne 0x7b0382 */ if (!fZ) goto L_007b0382;
L_007b02f6:; BB(0x007b02f6);
    /* 007b02f6: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x7b02fbu); f_008587a5();
    /* 007b02fb: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007b02fc: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 007b0300: fild dword ptr [esp + 4] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x4u)));
    /* 007b0304: fdiv dword ptr [0x97dda4] */ ST(0) = ST(0) / R_F32((u32)(0x97dda4u));
    /* 007b030a: fmul dword ptr [0x97dda8] */ ST(0) = ST(0) * R_F32((u32)(0x97dda8u));
    /* 007b0310: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 007b0313: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x7b0318u); f_0082e900();
    /* 007b0318: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 007b031c: movzx edx, byte ptr [esi + 0x52] */ r_edx = (u32)R8((u32)(r_esi+0x52u));
    /* 007b0320: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 007b0324: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 007b0328: fmul dword ptr [0x97dda0] */ ST(0) = ST(0) * R_F32((u32)(0x97dda0u));
    /* 007b032e: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 007b0330: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007b0332: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 007b0334: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007b0336: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007b0337: jbe 0x7b0341 */ if ((fC||fZ)) goto L_007b0341;
L_007b0339:; BB(0x007b0339);
    /* 007b0339: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 007b033b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007b033d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007b033f: jmp 0x7b0382 */ goto L_007b0382;
L_007b0341:; BB(0x007b0341);
    /* 007b0341: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 007b0345: fchs  */ ST(0) = -ST(0);
    /* 007b0347: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 007b0349: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 007b034b: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 007b034f: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 007b0354: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007b0359: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 007b035d: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 007b0361: fistp dword ptr [esp + 0x20] */ W32((u32)(r_esp+0x20u), (u32)fx_int32(ST(0))); FPOP();
    /* 007b0365: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 007b0369: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 007b036d: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 007b0370: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007b0372: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007b0374: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007b0376: movsx eax, dx */ r_eax = (u32)(i32)(i16)(u16)r_edx;
    /* 007b0379: jmp 0x7b0382 */ goto L_007b0382;
L_007b037b:; BB(0x007b037b);
    /* 007b037b: movsx eax, word ptr [esi + 0x8e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x8eu));
L_007b0382:; BB(0x007b0382);
    /* 007b0382: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007b0385: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 007b0388: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007b038a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 007b038c: mov ecx, esi */ r_ecx = r_esi;
    /* 007b038e: jg 0x7b0392 */ if ((!fZ&&fS==fO)) goto L_007b0392;
L_007b0390:; BB(0x007b0390);
    /* 007b0390: mov edx, eax */ r_edx = r_eax;
L_007b0392:; BB(0x007b0392);
    /* 007b0392: mov word ptr [esi + 0x8e], dx */ W16((u32)(r_esi+0x8eu), (u16)r_edx);
    /* 007b0399: call 0x7b0754 */ r_esp -= 4; W32(r_esp, 0x7b039eu); f_007b0754();
    /* 007b039e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b03a0: je 0x7b04ad */ if (fZ) goto L_007b04ad;
L_007b03a6:; BB(0x007b03a6);
    /* 007b03a6: mov eax, dword ptr [esi + 0x84] */ r_eax = R32((u32)(r_esi+0x84u));
    /* 007b03ac: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b03ae: jne 0x7b04ad */ if (!fZ) goto L_007b04ad;
L_007b03b4:; BB(0x007b03b4);
    /* 007b03b4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007b03b6: mov ecx, esi */ r_ecx = r_esi;
    /* 007b03b8: call 0x7b0a7c */ r_esp -= 4; W32(r_esp, 0x7b03bdu); f_007b0a7c();
    /* 007b03bd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b03bf: jne 0x7b0436 */ if (!fZ) goto L_007b0436;
L_007b03c1:; BB(0x007b03c1);
    /* 007b03c1: mov edx, dword ptr [esi + 0x80] */ r_edx = R32((u32)(r_esi+0x80u));
    /* 007b03c7: test edx, 0x80 */ {  u32 a = r_edx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b03cd: je 0x7b040c */ if (fZ) goto L_007b040c;
L_007b03cf:; BB(0x007b03cf);
    /* 007b03cf: movsx eax, word ptr [esi + 0x8e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x8eu));
    /* 007b03d6: and edx, 0xffffff7f */ {  u32 a = r_edx; u32 b = 0xffffff7fu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 007b03dc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b03de: je 0x7b03ee */ if (fZ) goto L_007b03ee;
L_007b03e0:; BB(0x007b03e0);
    /* 007b03e0: mov ecx, dword ptr [esi + 0x78] */ r_ecx = R32((u32)(r_esi+0x78u));
    /* 007b03e3: mov dword ptr [esi + 0x80], edx */ W32((u32)(r_esi+0x80u), r_edx);
    /* 007b03e9: jmp 0x7b0714 */ goto L_007b0714;
L_007b03ee:; BB(0x007b03ee);
    /* 007b03ee: mov ecx, dword ptr [esi + 0x78] */ r_ecx = R32((u32)(r_esi+0x78u));
    /* 007b03f1: mov dword ptr [esi + 0x7c], 2 */ W32((u32)(r_esi+0x7cu), 0x2u);
    /* 007b03f8: and edx, 0xffffefdf */ {  u32 a = r_edx; u32 b = 0xffffefdfu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 007b03fe: or edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 007b0401: mov dword ptr [esi + 0x80], edx */ W32((u32)(r_esi+0x80u), r_edx);
    /* 007b0407: jmp 0x7b0714 */ goto L_007b0714;
L_007b040c:; BB(0x007b040c);
    /* 007b040c: mov ecx, esi */ r_ecx = r_esi;
    /* 007b040e: call 0x7b0fdc */ r_esp -= 4; W32(r_esp, 0x7b0413u); f_007b0fdc();
    /* 007b0413: mov eax, dword ptr [esi + 0x80] */ r_eax = R32((u32)(r_esi+0x80u));
    /* 007b0419: mov ecx, dword ptr [esi + 0x78] */ r_ecx = R32((u32)(r_esi+0x78u));
    /* 007b041c: mov dword ptr [esi + 0x7c], 1 */ W32((u32)(r_esi+0x7cu), 0x1u);
    /* 007b0423: and eax, 0xffffefef */ {  u32 a = r_eax; u32 b = 0xffffefefu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 007b0428: or eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007b042b: mov dword ptr [esi + 0x80], eax */ W32((u32)(r_esi+0x80u), r_eax);
    /* 007b0431: jmp 0x7b0714 */ goto L_007b0714;
L_007b0436:; BB(0x007b0436);
    /* 007b0436: mov edx, dword ptr [esi + 0x24] */ r_edx = R32((u32)(r_esi+0x24u));
    /* 007b0439: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007b043b: mov word ptr [esi + 0x5c], ax */ W16((u32)(r_esi+0x5cu), (u16)r_eax);
    /* 007b043f: cmp edx, 0x13 */ {  u32 a = r_edx; u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b0442: jne 0x7b044c */ if (!fZ) goto L_007b044c;
L_007b0444:; BB(0x007b0444);
    /* 007b0444: mov edx, dword ptr [esi + 0x80] */ r_edx = R32((u32)(r_esi+0x80u));
    /* 007b044a: jmp 0x7b045c */ goto L_007b045c;
L_007b044c:; BB(0x007b044c);
    /* 007b044c: mov edx, dword ptr [esi + 0x80] */ r_edx = R32((u32)(r_esi+0x80u));
    /* 007b0452: mov dword ptr [esi + 0x24], 0x13 */ W32((u32)(r_esi+0x24u), 0x13u);
    /* 007b0459: or edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
L_007b045c:; BB(0x007b045c);
    /* 007b045c: mov ecx, dword ptr [esi + 0x78] */ r_ecx = R32((u32)(r_esi+0x78u));
    /* 007b045f: mov dword ptr [esi + 0x7c], 8 */ W32((u32)(r_esi+0x7cu), 0x8u);
    /* 007b0466: and edx, 0xffffefff */ {  u32 a = r_edx; u32 b = 0xffffefffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 007b046c: mov dword ptr [esi + 0x80], edx */ W32((u32)(r_esi+0x80u), r_edx);
    /* 007b0472: mov eax, dword ptr [ecx + 0x94] */ r_eax = R32((u32)(r_ecx+0x94u));
    /* 007b0478: mov edi, dword ptr [eax + 0x300] */ r_edi = R32((u32)(r_eax+0x300u));
    /* 007b047e: mov dword ptr [esi + 0xdc], edi */ W32((u32)(r_esi+0xdcu), r_edi);
    /* 007b0484: mov edi, dword ptr [eax + 0x304] */ r_edi = R32((u32)(r_eax+0x304u));
    /* 007b048a: mov dword ptr [esi + 0xe0], edi */ W32((u32)(r_esi+0xe0u), r_edi);
    /* 007b0490: mov eax, dword ptr [eax + 0x308] */ r_eax = R32((u32)(r_eax+0x308u));
    /* 007b0496: mov dword ptr [esi + 0xe4], eax */ W32((u32)(r_esi+0xe4u), r_eax);
    /* 007b049c: and edx, 0xffffff7f */ {  u32 a = r_edx; u32 b = 0xffffff7fu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 007b04a2: mov dword ptr [esi + 0x80], edx */ W32((u32)(r_esi+0x80u), r_edx);
    /* 007b04a8: jmp 0x7b0714 */ goto L_007b0714;
L_007b04ad:; BB(0x007b04ad);
    /* 007b04ad: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007b04af: mov ecx, esi */ r_ecx = r_esi;
    /* 007b04b1: call 0x7b0a7c */ r_esp -= 4; W32(r_esp, 0x7b04b6u); f_007b0a7c();
    /* 007b04b6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b04b8: je 0x7b066c */ if (fZ) goto L_007b066c;
L_007b04be:; BB(0x007b04be);
    /* 007b04be: mov edx, dword ptr [esi + 0x80] */ r_edx = R32((u32)(r_esi+0x80u));
    /* 007b04c4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007b04c6: mov word ptr [esi + 0x6c], ax */ W16((u32)(r_esi+0x6cu), (u16)r_eax);
    /* 007b04ca: test edx, 0x200 */ {  u32 a = r_edx; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b04d0: jne 0x7b0602 */ if (!fZ) goto L_007b0602;
L_007b04d6:; BB(0x007b04d6);
    /* 007b04d6: test edx, 0x80 */ {  u32 a = r_edx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b04dc: je 0x7b051b */ if (fZ) goto L_007b051b;
L_007b04de:; BB(0x007b04de);
    /* 007b04de: movsx eax, word ptr [esi + 0x8e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x8eu));
    /* 007b04e5: and edx, 0xfffffd7f */ {  u32 a = r_edx; u32 b = 0xfffffd7fu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 007b04eb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b04ed: je 0x7b04fd */ if (fZ) goto L_007b04fd;
L_007b04ef:; BB(0x007b04ef);
    /* 007b04ef: mov ecx, dword ptr [esi + 0x78] */ r_ecx = R32((u32)(r_esi+0x78u));
    /* 007b04f2: mov dword ptr [esi + 0x80], edx */ W32((u32)(r_esi+0x80u), r_edx);
    /* 007b04f8: jmp 0x7b0714 */ goto L_007b0714;
L_007b04fd:; BB(0x007b04fd);
    /* 007b04fd: mov ecx, dword ptr [esi + 0x78] */ r_ecx = R32((u32)(r_esi+0x78u));
    /* 007b0500: mov dword ptr [esi + 0x7c], 2 */ W32((u32)(r_esi+0x7cu), 0x2u);
    /* 007b0507: and edx, 0xffffefdf */ {  u32 a = r_edx; u32 b = 0xffffefdfu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 007b050d: or edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 007b0510: mov dword ptr [esi + 0x80], edx */ W32((u32)(r_esi+0x80u), r_edx);
    /* 007b0516: jmp 0x7b0714 */ goto L_007b0714;
L_007b051b:; BB(0x007b051b);
    /* 007b051b: mov eax, dword ptr [esi + 0x78] */ r_eax = R32((u32)(r_esi+0x78u));
    /* 007b051e: and edx, 0xfffffdff */ {  u32 a = r_edx; u32 b = 0xfffffdffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 007b0524: mov dword ptr [esi + 0x80], edx */ W32((u32)(r_esi+0x80u), r_edx);
    /* 007b052a: mov edx, dword ptr [eax + 0x94] */ r_edx = R32((u32)(r_eax+0x94u));
    /* 007b0530: lea edi, [esi + 0xdc] */ r_edi = (u32)(r_esi+0xdcu);
    /* 007b0536: add edx, 0x38 */ {  u32 a = r_edx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007b0539: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007b053a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007b053b: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x7b0540u); f_007a9180();
    /* 007b0540: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007b0543: fcomp dword ptr [0x97dd9c] */ fx_compare(ST(0), R_F32((u32)(0x97dd9cu))); FPOP();
    /* 007b0549: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007b054b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007b054c: jb 0x7b05b8 */ if (fC) goto L_007b05b8;
L_007b054e:; BB(0x007b054e);
    /* 007b054e: mov eax, dword ptr [esi + 0x84] */ r_eax = R32((u32)(r_esi+0x84u));
    /* 007b0554: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b0556: je 0x7b058e */ if (fZ) goto L_007b058e;
L_007b0558:; BB(0x007b0558);
    /* 007b0558: movsx eax, word ptr [esi + 0x8e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x8eu));
    /* 007b055f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b0561: je 0x7b056b */ if (fZ) goto L_007b056b;
L_007b0563:; BB(0x007b0563);
    /* 007b0563: mov ecx, dword ptr [esi + 0x78] */ r_ecx = R32((u32)(r_esi+0x78u));
    /* 007b0566: jmp 0x7b0714 */ goto L_007b0714;
L_007b056b:; BB(0x007b056b);
    /* 007b056b: mov eax, dword ptr [esi + 0x80] */ r_eax = R32((u32)(r_esi+0x80u));
    /* 007b0571: mov ecx, dword ptr [esi + 0x78] */ r_ecx = R32((u32)(r_esi+0x78u));
    /* 007b0574: mov dword ptr [esi + 0x7c], 2 */ W32((u32)(r_esi+0x7cu), 0x2u);
    /* 007b057b: and eax, 0xffffefdf */ {  u32 a = r_eax; u32 b = 0xffffefdfu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 007b0580: or eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007b0583: mov dword ptr [esi + 0x80], eax */ W32((u32)(r_esi+0x80u), r_eax);
    /* 007b0589: jmp 0x7b0714 */ goto L_007b0714;
L_007b058e:; BB(0x007b058e);
    /* 007b058e: mov ecx, esi */ r_ecx = r_esi;
    /* 007b0590: call 0x7b0fdc */ r_esp -= 4; W32(r_esp, 0x7b0595u); f_007b0fdc();
    /* 007b0595: mov eax, dword ptr [esi + 0x80] */ r_eax = R32((u32)(r_esi+0x80u));
    /* 007b059b: mov ecx, dword ptr [esi + 0x78] */ r_ecx = R32((u32)(r_esi+0x78u));
    /* 007b059e: mov dword ptr [esi + 0x7c], 1 */ W32((u32)(r_esi+0x7cu), 0x1u);
    /* 007b05a5: and eax, 0xffffefef */ {  u32 a = r_eax; u32 b = 0xffffefefu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 007b05aa: or eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007b05ad: mov dword ptr [esi + 0x80], eax */ W32((u32)(r_esi+0x80u), r_eax);
    /* 007b05b3: jmp 0x7b0714 */ goto L_007b0714;
L_007b05b8:; BB(0x007b05b8);
    /* 007b05b8: mov eax, dword ptr [esi + 0x80] */ r_eax = R32((u32)(r_esi+0x80u));
    /* 007b05be: mov ecx, dword ptr [esi + 0x78] */ r_ecx = R32((u32)(r_esi+0x78u));
    /* 007b05c1: mov dword ptr [esi + 0x7c], 8 */ W32((u32)(r_esi+0x7cu), 0x8u);
    /* 007b05c8: and eax, 0xffffefff */ {  u32 a = r_eax; u32 b = 0xffffefffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 007b05cd: mov dword ptr [esi + 0x80], eax */ W32((u32)(r_esi+0x80u), r_eax);
    /* 007b05d3: mov eax, dword ptr [ecx + 0x94] */ r_eax = R32((u32)(r_ecx+0x94u));
    /* 007b05d9: mov edx, dword ptr [eax + 0x300] */ r_edx = R32((u32)(r_eax+0x300u));
    /* 007b05df: mov dword ptr [esi + 0xdc], edx */ W32((u32)(r_esi+0xdcu), r_edx);
    /* 007b05e5: mov edi, dword ptr [eax + 0x304] */ r_edi = R32((u32)(r_eax+0x304u));
    /* 007b05eb: mov dword ptr [esi + 0xe0], edi */ W32((u32)(r_esi+0xe0u), r_edi);
    /* 007b05f1: mov eax, dword ptr [eax + 0x308] */ r_eax = R32((u32)(r_eax+0x308u));
    /* 007b05f7: mov dword ptr [esi + 0xe4], eax */ W32((u32)(r_esi+0xe4u), r_eax);
    /* 007b05fd: jmp 0x7b0714 */ goto L_007b0714;
L_007b0602:; BB(0x007b0602);
    /* 007b0602: mov edx, dword ptr [esi + 0x24] */ r_edx = R32((u32)(r_esi+0x24u));
    /* 007b0605: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007b0607: mov word ptr [esi + 0x5c], ax */ W16((u32)(r_esi+0x5cu), (u16)r_eax);
    /* 007b060b: cmp edx, 0x13 */ {  u32 a = r_edx; u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b060e: jne 0x7b0618 */ if (!fZ) goto L_007b0618;
L_007b0610:; BB(0x007b0610);
    /* 007b0610: mov eax, dword ptr [esi + 0x80] */ r_eax = R32((u32)(r_esi+0x80u));
    /* 007b0616: jmp 0x7b0628 */ goto L_007b0628;
L_007b0618:; BB(0x007b0618);
    /* 007b0618: mov eax, dword ptr [esi + 0x80] */ r_eax = R32((u32)(r_esi+0x80u));
    /* 007b061e: mov dword ptr [esi + 0x24], 0x13 */ W32((u32)(r_esi+0x24u), 0x13u);
    /* 007b0625: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_007b0628:; BB(0x007b0628);
    /* 007b0628: mov ecx, dword ptr [esi + 0x78] */ r_ecx = R32((u32)(r_esi+0x78u));
    /* 007b062b: mov dword ptr [esi + 0x7c], 8 */ W32((u32)(r_esi+0x7cu), 0x8u);
    /* 007b0632: and eax, 0xffffefff */ {  u32 a = r_eax; u32 b = 0xffffefffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 007b0637: mov dword ptr [esi + 0x80], eax */ W32((u32)(r_esi+0x80u), r_eax);
    /* 007b063d: mov edi, dword ptr [ecx + 0x94] */ r_edi = R32((u32)(r_ecx+0x94u));
    /* 007b0643: mov eax, dword ptr [edi + 0x300] */ r_eax = R32((u32)(r_edi+0x300u));
    /* 007b0649: mov dword ptr [esi + 0xdc], eax */ W32((u32)(r_esi+0xdcu), r_eax);
    /* 007b064f: mov edx, dword ptr [edi + 0x304] */ r_edx = R32((u32)(r_edi+0x304u));
    /* 007b0655: mov dword ptr [esi + 0xe0], edx */ W32((u32)(r_esi+0xe0u), r_edx);
    /* 007b065b: mov eax, dword ptr [edi + 0x308] */ r_eax = R32((u32)(r_edi+0x308u));
    /* 007b0661: mov dword ptr [esi + 0xe4], eax */ W32((u32)(r_esi+0xe4u), r_eax);
    /* 007b0667: jmp 0x7b0714 */ goto L_007b0714;
L_007b066c:; BB(0x007b066c);
    /* 007b066c: mov ecx, esi */ r_ecx = r_esi;
    /* 007b066e: call 0x7b086c */ r_esp -= 4; W32(r_esp, 0x7b0673u); f_007b086c();
    /* 007b0673: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b0675: je 0x7b06bf */ if (fZ) goto L_007b06bf;
L_007b0677:; BB(0x007b0677);
    /* 007b0677: movsx eax, word ptr [esi + 0x8e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x8eu));
    /* 007b067e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b0680: jne 0x7b06bf */ if (!fZ) goto L_007b06bf;
L_007b0682:; BB(0x007b0682);
    /* 007b0682: mov eax, dword ptr [esi + 0x80] */ r_eax = R32((u32)(r_esi+0x80u));
    /* 007b0688: test eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b068d: je 0x7b06a0 */ if (fZ) goto L_007b06a0;
L_007b068f:; BB(0x007b068f);
    /* 007b068f: mov dword ptr [esi + 0x7c], 2 */ W32((u32)(r_esi+0x7cu), 0x2u);
    /* 007b0696: and eax, 0xffffefdf */ {  u32 a = r_eax; u32 b = 0xffffefdfu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 007b069b: or eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007b069e: jmp 0x7b06af */ goto L_007b06af;
L_007b06a0:; BB(0x007b06a0);
    /* 007b06a0: mov dword ptr [esi + 0x7c], 1 */ W32((u32)(r_esi+0x7cu), 0x1u);
    /* 007b06a7: and eax, 0xffffefef */ {  u32 a = r_eax; u32 b = 0xffffefefu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 007b06ac: or eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_007b06af:; BB(0x007b06af);
    /* 007b06af: mov ecx, dword ptr [esi + 0x78] */ r_ecx = R32((u32)(r_esi+0x78u));
    /* 007b06b2: and eax, 0xffffefff */ {  u32 a = r_eax; u32 b = 0xffffefffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 007b06b7: mov dword ptr [esi + 0x80], eax */ W32((u32)(r_esi+0x80u), r_eax);
    /* 007b06bd: jmp 0x7b0714 */ goto L_007b0714;
L_007b06bf:; BB(0x007b06bf);
    /* 007b06bf: mov eax, dword ptr [esi + 0x84] */ r_eax = R32((u32)(r_esi+0x84u));
    /* 007b06c5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b06c7: jne 0x7b06ef */ if (!fZ) goto L_007b06ef;
L_007b06c9:; BB(0x007b06c9);
    /* 007b06c9: mov ecx, dword ptr [esi + 0x78] */ r_ecx = R32((u32)(r_esi+0x78u));
    /* 007b06cc: mov edi, dword ptr [ecx + 0x94] */ r_edi = R32((u32)(r_ecx+0x94u));
    /* 007b06d2: mov eax, dword ptr [edi + 0x38] */ r_eax = R32((u32)(r_edi+0x38u));
    /* 007b06d5: mov dword ptr [esi + 0xdc], eax */ W32((u32)(r_esi+0xdcu), r_eax);
    /* 007b06db: mov edx, dword ptr [edi + 0x3c] */ r_edx = R32((u32)(r_edi+0x3cu));
    /* 007b06de: mov dword ptr [esi + 0xe0], edx */ W32((u32)(r_esi+0xe0u), r_edx);
    /* 007b06e4: mov eax, dword ptr [edi + 0x40] */ r_eax = R32((u32)(r_edi+0x40u));
    /* 007b06e7: mov dword ptr [esi + 0xe4], eax */ W32((u32)(r_esi+0xe4u), r_eax);
    /* 007b06ed: jmp 0x7b06f9 */ goto L_007b06f9;
L_007b06ef:; BB(0x007b06ef);
    /* 007b06ef: mov ecx, esi */ r_ecx = r_esi;
    /* 007b06f1: call 0x7b0fdc */ r_esp -= 4; W32(r_esp, 0x7b06f6u); f_007b0fdc();
    /* 007b06f6: mov ecx, dword ptr [esi + 0x78] */ r_ecx = R32((u32)(r_esi+0x78u));
L_007b06f9:; BB(0x007b06f9);
    /* 007b06f9: mov eax, dword ptr [esi + 0x80] */ r_eax = R32((u32)(r_esi+0x80u));
    /* 007b06ff: mov dword ptr [esi + 0x7c], 1 */ W32((u32)(r_esi+0x7cu), 0x1u);
    /* 007b0706: and eax, 0xffffefef */ {  u32 a = r_eax; u32 b = 0xffffefefu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 007b070b: or eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007b070e: mov dword ptr [esi + 0x80], eax */ W32((u32)(r_esi+0x80u), r_eax);
L_007b0714:; BB(0x007b0714);
    /* 007b0714: mov eax, dword ptr [ecx + 0x8c] */ r_eax = R32((u32)(r_ecx+0x8cu));
    /* 007b071a: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007b071c: jne 0x7b0725 */ if (!fZ) goto L_007b0725;
L_007b071e:; BB(0x007b071e);
    /* 007b071e: mov dword ptr [esi + 0x1c], 0 */ W32((u32)(r_esi+0x1cu), 0x0u);
L_007b0725:; BB(0x007b0725);
    /* 007b0725: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007b0728: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007b0729: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007b072a: ret  */ FN_RET(0x007b00bc); r_esp += 4; return;
L_007b072b:; BB(0x007b072b);
    /* 007b072b: mov ecx, esi */ r_ecx = r_esi;
    /* 007b072d: call 0x7b0fdc */ r_esp -= 4; W32(r_esp, 0x7b0732u); f_007b0fdc();
    /* 007b0732: mov eax, dword ptr [esi + 0x80] */ r_eax = R32((u32)(r_esi+0x80u));
    /* 007b0738: mov dword ptr [esi + 0x7c], 1 */ W32((u32)(r_esi+0x7cu), 0x1u);
    /* 007b073f: and eax, 0xffffefef */ {  u32 a = r_eax; u32 b = 0xffffefefu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 007b0744: or eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007b0747: mov dword ptr [esi + 0x80], eax */ W32((u32)(r_esi+0x80u), r_eax);
    /* 007b074d: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007b0750: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007b0751: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007b0752: ret  */ FN_RET(0x007b00bc); r_esp += 4; return;
}

void f_007b0754(void) /* sub_7B0754 */
{
    FN_ENTER(0x007b0754);
    /* 007b0754: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007b0755: mov ebp, ecx */ r_ebp = r_ecx;
    /* 007b0757: mov edx, dword ptr [ebp + 0x78] */ r_edx = R32((u32)(r_ebp+0x78u));
    /* 007b075a: fld dword ptr [ebp + 0x44] */ FPUSH(R_F32((u32)(r_ebp+0x44u)));
    /* 007b075d: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 007b075f: mov eax, dword ptr [ebp + 0x74] */ r_eax = R32((u32)(r_ebp+0x74u));
    /* 007b0762: mov eax, dword ptr [eax + 0x8c] */ r_eax = R32((u32)(r_eax+0x8cu));
    /* 007b0768: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007b076a: je 0x7b0784 */ if (fZ) goto L_007b0784;
L_007b076c:; BB(0x007b076c);
    /* 007b076c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007b076e: mov edx, dword ptr [ebp + 0x80] */ r_edx = R32((u32)(r_ebp+0x80u));
    /* 007b0774: and edx, 0xfffffeff */ {  u32 a = r_edx; u32 b = 0xfffffeffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 007b077a: mov dword ptr [ebp + 0x80], edx */ W32((u32)(r_ebp+0x80u), r_edx);
    /* 007b0780: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007b0782: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007b0783: ret  */ FN_RET(0x007b0754); r_esp += 4; return;
L_007b0784:; BB(0x007b0784);
    /* 007b0784: mov eax, dword ptr [edx + 0x90] */ r_eax = R32((u32)(r_edx+0x90u));
    /* 007b078a: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007b078c: jne 0x7b0851 */ if (!fZ) goto L_007b0851;
L_007b0792:; BB(0x007b0792);
    /* 007b0792: fcomp dword ptr [ebp + 0x58] */ fx_compare(ST(0), R_F32((u32)(r_ebp+0x58u))); FPOP();
    /* 007b0795: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007b0797: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007b0798: ja 0x7b082e */ if ((!fC&&!fZ)) goto L_007b082e;
L_007b079e:; BB(0x007b079e);
    /* 007b079e: mov eax, dword ptr [ebp + 0x80] */ r_eax = R32((u32)(r_ebp+0x80u));
    /* 007b07a4: or eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007b07a9: mov dword ptr [ebp + 0x80], eax */ W32((u32)(r_ebp+0x80u), r_eax);
    /* 007b07af: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 007b07b1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007b07b3: je 0x7b0827 */ if (fZ) goto L_007b0827;
L_007b07b5:; BB(0x007b07b5);
    /* 007b07b5: movsx ecx, word ptr [ebp + 0x66] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x66u));
    /* 007b07b9: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007b07bc: movsx eax, cx */ r_eax = (u32)(i32)(i16)(u16)r_ecx;
    /* 007b07bf: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007b07c2: jl 0x7b0823 */ if ((fS!=fO)) goto L_007b0823;
L_007b07c4:; BB(0x007b07c4);
    /* 007b07c4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007b07c6: mov word ptr [ebp + 0x66], ax */ W16((u32)(r_ebp+0x66u), (u16)r_eax);
    /* 007b07ca: movzx edx, word ptr [edx + 4] */ r_edx = (u32)R16((u32)(r_edx+0x4u));
    /* 007b07ce: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007b07cf: call 0x578c74 */ r_esp -= 4; W32(r_esp, 0x7b07d4u); f_00578c74();
    /* 007b07d4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007b07d5: mov edx, dword ptr [ebp + 0x80] */ r_edx = R32((u32)(r_ebp+0x80u));
    /* 007b07db: and edx, 0xffff7fff */ {  u32 a = r_edx; u32 b = 0xffff7fffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 007b07e1: mov dword ptr [ebp + 0x80], edx */ W32((u32)(r_ebp+0x80u), r_edx);
    /* 007b07e7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007b07e9: je 0x7b0827 */ if (fZ) goto L_007b0827;
L_007b07eb:; BB(0x007b07eb);
    /* 007b07eb: mov edx, dword ptr [ebp + 0x78] */ r_edx = R32((u32)(r_ebp+0x78u));
    /* 007b07ee: mov edx, dword ptr [edx + 0x94] */ r_edx = R32((u32)(r_edx+0x94u));
    /* 007b07f4: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007b07f7: add edx, 0x38 */ {  u32 a = r_edx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007b07fa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007b07fb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007b07fc: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x7b0801u); f_007a9180();
    /* 007b0801: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 007b0804: fld dword ptr [ebp + 0x48] */ FPUSH(R_F32((u32)(r_ebp+0x48u)));
    /* 007b0807: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 007b0809: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 007b080b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007b080d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007b080e: jbe 0x7b0827 */ if ((fC||fZ)) goto L_007b0827;
L_007b0810:; BB(0x007b0810);
    /* 007b0810: mov eax, dword ptr [ebp + 0x80] */ r_eax = R32((u32)(r_ebp+0x80u));
    /* 007b0816: or eax, 0x8080 */ {  u32 a = r_eax; u32 b = 0x8080u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007b081b: mov dword ptr [ebp + 0x80], eax */ W32((u32)(r_ebp+0x80u), r_eax);
    /* 007b0821: jmp 0x7b0827 */ goto L_007b0827;
L_007b0823:; BB(0x007b0823);
    /* 007b0823: mov word ptr [ebp + 0x66], cx */ W16((u32)(r_ebp+0x66u), (u16)r_ecx);
L_007b0827:; BB(0x007b0827);
    /* 007b0827: mov eax, 1 */ r_eax = 0x1u;
    /* 007b082c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007b082d: ret  */ FN_RET(0x007b0754); r_esp += 4; return;
L_007b082e:; BB(0x007b082e);
    /* 007b082e: mov eax, dword ptr [ebp + 0x80] */ r_eax = R32((u32)(r_ebp+0x80u));
    /* 007b0834: test eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007b0839: je 0x7b0842 */ if (fZ) goto L_007b0842;
L_007b083b:; BB(0x007b083b);
    /* 007b083b: mov eax, 1 */ r_eax = 0x1u;
    /* 007b0840: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007b0841: ret  */ FN_RET(0x007b0754); r_esp += 4; return;
L_007b0842:; BB(0x007b0842);
    /* 007b0842: and eax, 0xfffffeff */ {  u32 a = r_eax; u32 b = 0xfffffeffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 007b0847: mov dword ptr [ebp + 0x80], eax */ W32((u32)(r_ebp+0x80u), r_eax);
    /* 007b084d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007b084f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007b0850: ret  */ FN_RET(0x007b0754); r_esp += 4; return;
L_007b0851:; BB(0x007b0851);
    /* 007b0851: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007b0853: mov edx, dword ptr [ebp + 0x80] */ r_edx = R32((u32)(r_ebp+0x80u));
    /* 007b0859: or edx, 0x100 */ {  u32 a = r_edx; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007b085f: mov dword ptr [ebp + 0x80], edx */ W32((u32)(r_ebp+0x80u), r_edx);
    /* 007b0865: mov eax, 1 */ r_eax = 0x1u;
    /* 007b086a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007b086b: ret  */ FN_RET(0x007b0754); r_esp += 4; return;
}

void f_007b086c(void) /* sub_7B086C */
{
    FN_ENTER(0x007b086c);
    /* 007b086c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007b086d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007b086e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007b086f: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007b0872: mov edi, ecx */ r_edi = r_ecx;
    /* 007b0874: mov esi, dword ptr [edi + 0x78] */ r_esi = R32((u32)(r_edi+0x78u));
    /* 007b0877: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 007b0879: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007b087c: jge 0x7b0894 */ if ((fS==fO)) goto L_007b0894;
L_007b087e:; BB(0x007b087e);
    /* 007b087e: mov eax, dword ptr [edi + 0x80] */ r_eax = R32((u32)(r_edi+0x80u));
    /* 007b0884: and eax, 0xffffdfff */ {  u32 a = r_eax; u32 b = 0xffffdfffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 007b0889: mov dword ptr [edi + 0x80], eax */ W32((u32)(r_edi+0x80u), r_eax);
    /* 007b088f: jmp 0x7b0917 */ goto L_007b0917;
L_007b0894:; BB(0x007b0894);
    /* 007b0894: mov eax, dword ptr [edi + 0x80] */ r_eax = R32((u32)(r_edi+0x80u));
    /* 007b089a: or eax, 0x2000 */ {  u32 a = r_eax; u32 b = 0x2000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007b089f: mov dword ptr [edi + 0x80], eax */ W32((u32)(r_edi+0x80u), r_eax);
    /* 007b08a5: movsx eax, word ptr [edi + 0x68] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x68u));
    /* 007b08a9: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007b08ac: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 007b08af: cmp edx, 0x64 */ {  u32 a = r_edx; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007b08b2: jl 0x7b0913 */ if ((fS!=fO)) goto L_007b0913;
L_007b08b4:; BB(0x007b08b4);
    /* 007b08b4: mov edx, dword ptr [edi + 0x78] */ r_edx = R32((u32)(r_edi+0x78u));
    /* 007b08b7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007b08b9: mov word ptr [edi + 0x68], ax */ W16((u32)(r_edi+0x68u), (u16)r_eax);
    /* 007b08bd: mov ebx, dword ptr [edx + 0x90] */ r_ebx = R32((u32)(r_edx+0x90u));
    /* 007b08c3: test bl, 8 */ {  u32 a = (u8)r_ebx; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007b08c6: je 0x7b08ee */ if (fZ) goto L_007b08ee;
L_007b08c8:; BB(0x007b08c8);
    /* 007b08c8: mov edx, dword ptr [edi + 0x24] */ r_edx = R32((u32)(r_edi+0x24u));
    /* 007b08cb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007b08cd: mov word ptr [edi + 0x5c], ax */ W16((u32)(r_edi+0x5cu), (u16)r_eax);
    /* 007b08d1: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b08d4: je 0x7b0917 */ if (fZ) goto L_007b0917;
L_007b08d6:; BB(0x007b08d6);
    /* 007b08d6: mov eax, dword ptr [edi + 0x80] */ r_eax = R32((u32)(r_edi+0x80u));
    /* 007b08dc: mov dword ptr [edi + 0x24], 1 */ W32((u32)(r_edi+0x24u), 0x1u);
    /* 007b08e3: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007b08e6: mov dword ptr [edi + 0x80], eax */ W32((u32)(r_edi+0x80u), r_eax);
    /* 007b08ec: jmp 0x7b0917 */ goto L_007b0917;
L_007b08ee:; BB(0x007b08ee);
    /* 007b08ee: mov edx, dword ptr [edi + 0x24] */ r_edx = R32((u32)(r_edi+0x24u));
    /* 007b08f1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007b08f3: mov word ptr [edi + 0x5c], ax */ W16((u32)(r_edi+0x5cu), (u16)r_eax);
    /* 007b08f7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b08f9: je 0x7b0917 */ if (fZ) goto L_007b0917;
L_007b08fb:; BB(0x007b08fb);
    /* 007b08fb: mov eax, dword ptr [edi + 0x80] */ r_eax = R32((u32)(r_edi+0x80u));
    /* 007b0901: mov dword ptr [edi + 0x24], 0 */ W32((u32)(r_edi+0x24u), 0x0u);
    /* 007b0908: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007b090b: mov dword ptr [edi + 0x80], eax */ W32((u32)(r_edi+0x80u), r_eax);
    /* 007b0911: jmp 0x7b0917 */ goto L_007b0917;
L_007b0913:; BB(0x007b0913);
    /* 007b0913: mov word ptr [edi + 0x68], ax */ W16((u32)(r_edi+0x68u), (u16)r_eax);
L_007b0917:; BB(0x007b0917);
    /* 007b0917: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 007b0919: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 007b091b: je 0x7b09c8 */ if (fZ) goto L_007b09c8;
L_007b0921:; BB(0x007b0921);
    /* 007b0921: mov ebx, 0 */ r_ebx = 0x0u;
    /* 007b0926: jle 0x7b0999 */ if ((fZ||fS!=fO)) goto L_007b0999;
L_007b0928:; BB(0x007b0928);
    /* 007b0928: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 007b092c: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
L_007b092f:; BB(0x007b092f);
    /* 007b092f: mov ebp, dword ptr [esp + 4] */ r_ebp = R32((u32)(r_esp+0x4u));
    /* 007b0933: mov edi, dword ptr [ebp + 0x78] */ r_edi = R32((u32)(r_ebp+0x78u));
    /* 007b0936: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 007b0939: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007b093b: lea ebp, [eax + eax] */ r_ebp = (u32)(r_eax+r_eax);
    /* 007b093e: add ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007b0940: movzx edx, word ptr [ebp + esi + 4] */ r_edx = (u32)R16((u32)(r_ebp+r_esi+0x4u));
    /* 007b0945: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007b0946: call 0x578c74 */ r_esp -= 4; W32(r_esp, 0x7b094bu); f_00578c74();
    /* 007b094b: mov edx, dword ptr [eax + 0x300] */ r_edx = R32((u32)(r_eax+0x300u));
    /* 007b0951: mov eax, dword ptr [eax + 0x308] */ r_eax = R32((u32)(r_eax+0x308u));
    /* 007b0957: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 007b095b: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 007b095f: mov eax, dword ptr [edi + 0x94] */ r_eax = R32((u32)(r_edi+0x94u));
    /* 007b0965: lea edi, [esp + 0xc] */ r_edi = (u32)(r_esp+0xcu);
    /* 007b0969: mov ecx, dword ptr [eax + 0x304] */ r_ecx = R32((u32)(r_eax+0x304u));
    /* 007b096f: add eax, 0x300 */ {  u32 a = r_eax; u32 b = 0x300u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007b0974: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 007b0978: push 0x2100 */ { u32 v = 0x2100u; r_esp -= 4; W32(r_esp, v); }
    /* 007b097d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007b097e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007b097f: call 0x77fffc */ r_esp -= 4; W32(r_esp, 0x7b0984u); f_0077fffc();
    /* 007b0984: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007b0987: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b0989: je 0x7b09d1 */ if (fZ) goto L_007b09d1;
L_007b098b:; BB(0x007b098b);
    /* 007b098b: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007b098e: cmp ebx, dword ptr [esi] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esi)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007b0990: jl 0x7b092f */ if ((fS!=fO)) goto L_007b092f;
L_007b0992:; BB(0x007b0992);
    /* 007b0992: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 007b0996: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
L_007b0999:; BB(0x007b0999);
    /* 007b0999: mov edx, dword ptr [edi + 0x24] */ r_edx = R32((u32)(r_edi+0x24u));
    /* 007b099c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007b099e: mov word ptr [edi + 0x5c], ax */ W16((u32)(r_edi+0x5cu), (u16)r_eax);
    /* 007b09a2: cmp edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b09a5: jne 0x7b09af */ if (!fZ) goto L_007b09af;
L_007b09a7:; BB(0x007b09a7);
    /* 007b09a7: mov eax, dword ptr [edi + 0x80] */ r_eax = R32((u32)(r_edi+0x80u));
    /* 007b09ad: jmp 0x7b09bf */ goto L_007b09bf;
L_007b09af:; BB(0x007b09af);
    /* 007b09af: mov eax, dword ptr [edi + 0x80] */ r_eax = R32((u32)(r_edi+0x80u));
    /* 007b09b5: mov dword ptr [edi + 0x24], 8 */ W32((u32)(r_edi+0x24u), 0x8u);
    /* 007b09bc: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_007b09bf:; BB(0x007b09bf);
    /* 007b09bf: or eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007b09c2: mov dword ptr [edi + 0x80], eax */ W32((u32)(r_edi+0x80u), r_eax);
L_007b09c8:; BB(0x007b09c8);
    /* 007b09c8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007b09ca: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007b09cd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007b09ce: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007b09cf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007b09d0: ret  */ FN_RET(0x007b086c); r_esp += 4; return;
L_007b09d1:; BB(0x007b09d1);
    /* 007b09d1: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 007b09d5: movzx eax, word ptr [esi + 4] */ r_eax = (u32)R16((u32)(r_esi+0x4u));
    /* 007b09d9: mov ebx, ebp */ r_ebx = r_ebp;
    /* 007b09db: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
    /* 007b09de: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007b09df: call 0x578c74 */ r_esp -= 4; W32(r_esp, 0x7b09e4u); f_00578c74();
    /* 007b09e4: mov ecx, dword ptr [edi + 0x78] */ r_ecx = R32((u32)(r_edi+0x78u));
    /* 007b09e7: mov edx, dword ptr [ebx + esi + 4] */ r_edx = R32((u32)(r_ebx+r_esi+0x4u));
    /* 007b09eb: mov ebx, dword ptr [ebx + esi + 8] */ r_ebx = R32((u32)(r_ebx+r_esi+0x8u));
    /* 007b09ef: mov esi, dword ptr [ecx + 0x7c] */ r_esi = R32((u32)(r_ecx+0x7cu));
    /* 007b09f2: mov dword ptr [ecx + 0x80], esi */ W32((u32)(r_ecx+0x80u), r_esi);
    /* 007b09f8: mov dword ptr [ecx + 0x7c], edx */ W32((u32)(r_ecx+0x7cu), r_edx);
    /* 007b09fb: mov dword ptr [ecx + 0x84], ebx */ W32((u32)(r_ecx+0x84u), r_ebx);
    /* 007b0a01: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 007b0a04: mov ebx, dword ptr [edi + 0x78] */ r_ebx = R32((u32)(r_edi+0x78u));
    /* 007b0a07: mov dword ptr [edi + 0xdc], edx */ W32((u32)(r_edi+0xdcu), r_edx);
    /* 007b0a0d: mov edx, dword ptr [ebx + 0x94] */ r_edx = R32((u32)(r_ebx+0x94u));
    /* 007b0a13: mov edx, dword ptr [edx + 0x304] */ r_edx = R32((u32)(r_edx+0x304u));
    /* 007b0a19: mov dword ptr [edi + 0xe0], edx */ W32((u32)(r_edi+0xe0u), r_edx);
    /* 007b0a1f: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 007b0a22: mov dword ptr [edi + 0xe4], eax */ W32((u32)(r_edi+0xe4u), r_eax);
    /* 007b0a28: mov eax, dword ptr [ebx + 0x94] */ r_eax = R32((u32)(r_ebx+0x94u));
    /* 007b0a2e: lea edx, [edi + 0xdc] */ r_edx = (u32)(r_edi+0xdcu);
    /* 007b0a34: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007b0a37: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007b0a38: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007b0a39: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x7b0a3eu); f_007a9180();
    /* 007b0a3e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007b0a41: fld dword ptr [0x97dd98] */ FPUSH(R_F32((u32)(0x97dd98u)));
    /* 007b0a47: fadd dword ptr [edi + 0x4c] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x4cu));
    /* 007b0a4a: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 007b0a4c: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 007b0a4e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007b0a50: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007b0a51: jbe 0x7b0a60 */ if ((fC||fZ)) goto L_007b0a60;
L_007b0a53:; BB(0x007b0a53);
    /* 007b0a53: mov eax, dword ptr [edi + 0x80] */ r_eax = R32((u32)(r_edi+0x80u));
    /* 007b0a59: or eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007b0a5e: jmp 0x7b0a66 */ goto L_007b0a66;
L_007b0a60:; BB(0x007b0a60);
    /* 007b0a60: mov eax, dword ptr [edi + 0x80] */ r_eax = R32((u32)(r_edi+0x80u));
L_007b0a66:; BB(0x007b0a66);
    /* 007b0a66: and eax, 0xffffffbf */ {  u32 a = r_eax; u32 b = 0xffffffbfu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 007b0a69: mov dword ptr [edi + 0x80], eax */ W32((u32)(r_edi+0x80u), r_eax);
    /* 007b0a6f: mov eax, 1 */ r_eax = 0x1u;
    /* 007b0a74: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007b0a77: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007b0a78: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007b0a79: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007b0a7a: ret  */ FN_RET(0x007b086c); r_esp += 4; return;
}

void f_007b0a7c(void) /* sub_7B0A7C */
{
    FN_ENTER(0x007b0a7c);
    /* 007b0a7c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007b0a7d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007b0a7e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007b0a7f: mov ebp, ecx */ r_ebp = r_ecx;
    /* 007b0a81: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 007b0a85: mov eax, dword ptr [ebp + 0x78] */ r_eax = R32((u32)(r_ebp+0x78u));
    /* 007b0a88: mov edi, dword ptr [eax + 0x8c] */ r_edi = R32((u32)(r_eax+0x8cu));
    /* 007b0a8e: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 007b0a90: test edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b0a96: je 0x7b0a9d */ if (fZ) goto L_007b0a9d;
L_007b0a98:; BB(0x007b0a98);
    /* 007b0a98: mov ebx, 1 */ r_ebx = 0x1u;
L_007b0a9d:; BB(0x007b0a9d);
    /* 007b0a9d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b0a9f: je 0x7b0abf */ if (fZ) goto L_007b0abf;
L_007b0aa1:; BB(0x007b0aa1);
    /* 007b0aa1: mov edi, dword ptr [ebp + 0x74] */ r_edi = R32((u32)(r_ebp+0x74u));
    /* 007b0aa4: mov edi, dword ptr [edi + 0x8c] */ r_edi = R32((u32)(r_edi+0x8cu));
    /* 007b0aaa: test edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b0ab0: je 0x7b0abf */ if (fZ) goto L_007b0abf;
L_007b0ab2:; BB(0x007b0ab2);
    /* 007b0ab2: mov edi, dword ptr [ebp + 0x84] */ r_edi = R32((u32)(r_ebp+0x84u));
    /* 007b0ab8: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b0aba: jne 0x7b0abf */ if (!fZ) goto L_007b0abf;
L_007b0abc:; BB(0x007b0abc);
    /* 007b0abc: or ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
L_007b0abf:; BB(0x007b0abf);
    /* 007b0abf: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b0ac1: je 0x7b0ace */ if (fZ) goto L_007b0ace;
L_007b0ac3:; BB(0x007b0ac3);
    /* 007b0ac3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 007b0ac5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b0ac7: je 0x7b0ace */ if (fZ) goto L_007b0ace;
L_007b0ac9:; BB(0x007b0ac9);
    /* 007b0ac9: test bl, 2 */ {  u32 a = (u8)r_ebx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007b0acc: jne 0x7b0af1 */ if (!fZ) goto L_007b0af1;
L_007b0ace:; BB(0x007b0ace);
    /* 007b0ace: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b0ad1: je 0x7b0e43 */ if (fZ) goto L_007b0e43;
L_007b0ad7:; BB(0x007b0ad7);
    /* 007b0ad7: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b0ada: je 0x7b0d2b */ if (fZ) goto L_007b0d2b;
L_007b0ae0:; BB(0x007b0ae0);
    /* 007b0ae0: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b0ae3: je 0x7b0b99 */ if (fZ) goto L_007b0b99;
L_007b0ae9:; BB(0x007b0ae9);
    /* 007b0ae9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007b0aeb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007b0aec: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007b0aed: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007b0aee: ret 4 */ FN_RET(0x007b0a7c); r_esp += 8; return;
L_007b0af1:; BB(0x007b0af1);
    /* 007b0af1: movsx edi, word ptr [ebp + 0x66] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ebp+0x66u));
    /* 007b0af5: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 007b0af8: movsx edx, di */ r_edx = (u32)(i32)(i16)(u16)r_edi;
    /* 007b0afb: cmp edx, 0x1e */ {  u32 a = r_edx; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007b0afe: jl 0x7b0b90 */ if ((fS!=fO)) goto L_007b0b90;
L_007b0b04:; BB(0x007b0b04);
    /* 007b0b04: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007b0b06: mov word ptr [ebp + 0x66], dx */ W16((u32)(r_ebp+0x66u), (u16)r_edx);
    /* 007b0b0a: movzx eax, word ptr [eax + 4] */ r_eax = (u32)R16((u32)(r_eax+0x4u));
    /* 007b0b0e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007b0b0f: call 0x578c74 */ r_esp -= 4; W32(r_esp, 0x7b0b14u); f_00578c74();
    /* 007b0b14: mov edi, eax */ r_edi = r_eax;
    /* 007b0b16: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007b0b19: mov edx, dword ptr [ebp + 0x80] */ r_edx = R32((u32)(r_ebp+0x80u));
    /* 007b0b1f: and edx, 0xffff7fff */ {  u32 a = r_edx; u32 b = 0xffff7fffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 007b0b25: mov dword ptr [ebp + 0x80], edx */ W32((u32)(r_ebp+0x80u), r_edx);
    /* 007b0b2b: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b0b2d: je 0x7b0ace */ if (fZ) goto L_007b0ace;
L_007b0b2f:; BB(0x007b0b2f);
    /* 007b0b2f: mov edx, dword ptr [ebp + 0x78] */ r_edx = R32((u32)(r_ebp+0x78u));
    /* 007b0b32: mov edx, dword ptr [edx + 0x94] */ r_edx = R32((u32)(r_edx+0x94u));
    /* 007b0b38: lea eax, [edi + 0x38] */ r_eax = (u32)(r_edi+0x38u);
    /* 007b0b3b: add edx, 0x38 */ {  u32 a = r_edx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007b0b3e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007b0b3f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007b0b40: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x7b0b45u); f_007a9180();
    /* 007b0b45: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007b0b48: fld dword ptr [ebp + 0x48] */ FPUSH(R_F32((u32)(r_ebp+0x48u)));
    /* 007b0b4b: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 007b0b4d: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 007b0b4f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007b0b51: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007b0b52: jbe 0x7b0ace */ if ((fC||fZ)) goto L_007b0ace;
L_007b0b58:; BB(0x007b0b58);
    /* 007b0b58: mov edx, dword ptr [edi + 0x38] */ r_edx = R32((u32)(r_edi+0x38u));
    /* 007b0b5b: mov dword ptr [ebp + 0xdc], edx */ W32((u32)(r_ebp+0xdcu), r_edx);
    /* 007b0b61: mov ebx, dword ptr [edi + 0x3c] */ r_ebx = R32((u32)(r_edi+0x3cu));
    /* 007b0b64: mov dword ptr [ebp + 0xe0], ebx */ W32((u32)(r_ebp+0xe0u), r_ebx);
    /* 007b0b6a: mov eax, dword ptr [edi + 0x40] */ r_eax = R32((u32)(r_edi+0x40u));
    /* 007b0b6d: mov edi, dword ptr [ebp + 0x80] */ r_edi = R32((u32)(r_ebp+0x80u));
    /* 007b0b73: or edi, 0x8080 */ {  u32 a = r_edi; u32 b = 0x8080u; u32 r = (a | b) & 0xffffffffu; r_edi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007b0b79: mov dword ptr [ebp + 0xe4], eax */ W32((u32)(r_ebp+0xe4u), r_eax);
    /* 007b0b7f: mov dword ptr [ebp + 0x80], edi */ W32((u32)(r_ebp+0x80u), r_edi);
    /* 007b0b85: mov eax, 1 */ r_eax = 0x1u;
    /* 007b0b8a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007b0b8b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007b0b8c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007b0b8d: ret 4 */ FN_RET(0x007b0a7c); r_esp += 8; return;
L_007b0b90:; BB(0x007b0b90);
    /* 007b0b90: mov word ptr [ebp + 0x66], di */ W16((u32)(r_ebp+0x66u), (u16)r_edi);
    /* 007b0b94: jmp 0x7b0ace */ goto L_007b0ace;
L_007b0b99:; BB(0x007b0b99);
    /* 007b0b99: mov eax, dword ptr [ebp + 0x80] */ r_eax = R32((u32)(r_ebp+0x80u));
    /* 007b0b9f: mov ebx, dword ptr [ebp + 0x78] */ r_ebx = R32((u32)(r_ebp+0x78u));
    /* 007b0ba2: or eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007b0ba7: mov dword ptr [ebp + 0x80], eax */ W32((u32)(r_ebp+0x80u), r_eax);
    /* 007b0bad: mov eax, dword ptr [ebx + 0x90] */ r_eax = R32((u32)(r_ebx+0x90u));
    /* 007b0bb3: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007b0bb5: je 0x7b0c13 */ if (fZ) goto L_007b0c13;
L_007b0bb7:; BB(0x007b0bb7);
    /* 007b0bb7: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 007b0bb9: mov ecx, dword ptr [ebx + 0x94] */ r_ecx = R32((u32)(r_ebx+0x94u));
    /* 007b0bbf: call 0x69a088 */ r_esp -= 4; W32(r_esp, 0x7b0bc4u); f_0069a088();
    /* 007b0bc4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b0bc6: je 0x7b0ae9 */ if (fZ) goto L_007b0ae9;
L_007b0bcc:; BB(0x007b0bcc);
    /* 007b0bcc: mov eax, dword ptr [ebp + 0x78] */ r_eax = R32((u32)(r_ebp+0x78u));
    /* 007b0bcf: mov edx, dword ptr [eax + 0x90] */ r_edx = R32((u32)(r_eax+0x90u));
    /* 007b0bd5: test dl, 0x20 */ {  u32 a = (u8)r_edx; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007b0bd8: jne 0x7b0bfc */ if (!fZ) goto L_007b0bfc;
L_007b0bda:; BB(0x007b0bda);
    /* 007b0bda: mov eax, dword ptr [ebp + 0x34] */ r_eax = R32((u32)(r_ebp+0x34u));
    /* 007b0bdd: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007b0bdf: jne 0x7b0ae9 */ if (!fZ) goto L_007b0ae9;
L_007b0be5:; BB(0x007b0be5);
    /* 007b0be5: mov edx, 2 */ r_edx = 0x2u;
    /* 007b0bea: mov word ptr [ebp + 0x92], dx */ W16((u32)(r_ebp+0x92u), (u16)r_edx);
    /* 007b0bf1: mov eax, 1 */ r_eax = 0x1u;
    /* 007b0bf6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007b0bf7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007b0bf8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007b0bf9: ret 4 */ FN_RET(0x007b0a7c); r_esp += 8; return;
L_007b0bfc:; BB(0x007b0bfc);
    /* 007b0bfc: mov edx, 2 */ r_edx = 0x2u;
    /* 007b0c01: mov word ptr [ebp + 0x92], dx */ W16((u32)(r_ebp+0x92u), (u16)r_edx);
    /* 007b0c08: mov eax, 1 */ r_eax = 0x1u;
    /* 007b0c0d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007b0c0e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007b0c0f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007b0c10: ret 4 */ FN_RET(0x007b0a7c); r_esp += 8; return;
L_007b0c13:; BB(0x007b0c13);
    /* 007b0c13: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007b0c15: je 0x7b0c7f */ if (fZ) goto L_007b0c7f;
L_007b0c17:; BB(0x007b0c17);
    /* 007b0c17: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007b0c19: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 007b0c1b: mov ecx, dword ptr [ebx + 0x94] */ r_ecx = R32((u32)(r_ebx+0x94u));
    /* 007b0c21: call 0x68faa8 */ r_esp -= 4; W32(r_esp, 0x7b0c26u); f_0068faa8();
    /* 007b0c26: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b0c29: je 0x7b0cc5 */ if (fZ) goto L_007b0cc5;
L_007b0c2f:; BB(0x007b0c2f);
    /* 007b0c2f: mov eax, dword ptr [ebx + 0x90] */ r_eax = R32((u32)(r_ebx+0x90u));
    /* 007b0c35: or eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007b0c38: mov dword ptr [ebx + 0x90], eax */ W32((u32)(r_ebx+0x90u), r_eax);
L_007b0c3e:; BB(0x007b0c3e);
    /* 007b0c3e: mov eax, dword ptr [ebp + 0x78] */ r_eax = R32((u32)(r_ebp+0x78u));
    /* 007b0c41: mov edx, dword ptr [eax + 0x90] */ r_edx = R32((u32)(r_eax+0x90u));
    /* 007b0c47: test dl, 0x20 */ {  u32 a = (u8)r_edx; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007b0c4a: jne 0x7b0c6b */ if (!fZ) goto L_007b0c6b;
L_007b0c4c:; BB(0x007b0c4c);
    /* 007b0c4c: mov eax, dword ptr [ebp + 0x34] */ r_eax = R32((u32)(r_ebp+0x34u));
    /* 007b0c4f: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007b0c51: jne 0x7b0ae9 */ if (!fZ) goto L_007b0ae9;
L_007b0c57:; BB(0x007b0c57);
    /* 007b0c57: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007b0c59: mov word ptr [ebp + 0x92], dx */ W16((u32)(r_ebp+0x92u), (u16)r_edx);
    /* 007b0c60: mov eax, 1 */ r_eax = 0x1u;
    /* 007b0c65: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007b0c66: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007b0c67: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007b0c68: ret 4 */ FN_RET(0x007b0a7c); r_esp += 8; return;
L_007b0c6b:; BB(0x007b0c6b);
    /* 007b0c6b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007b0c6d: mov word ptr [ebp + 0x92], dx */ W16((u32)(r_ebp+0x92u), (u16)r_edx);
    /* 007b0c74: mov eax, 1 */ r_eax = 0x1u;
    /* 007b0c79: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007b0c7a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007b0c7b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007b0c7c: ret 4 */ FN_RET(0x007b0a7c); r_esp += 8; return;
L_007b0c7f:; BB(0x007b0c7f);
    /* 007b0c7f: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007b0c81: je 0x7b0ae9 */ if (fZ) goto L_007b0ae9;
L_007b0c87:; BB(0x007b0c87);
    /* 007b0c87: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007b0c89: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 007b0c8b: mov ecx, dword ptr [ebx + 0x94] */ r_ecx = R32((u32)(r_ebx+0x94u));
    /* 007b0c91: call 0x68faa8 */ r_esp -= 4; W32(r_esp, 0x7b0c96u); f_0068faa8();
    /* 007b0c96: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b0c99: je 0x7b0ae9 */ if (fZ) goto L_007b0ae9;
L_007b0c9f:; BB(0x007b0c9f);
    /* 007b0c9f: mov edx, dword ptr [ebx + 0x90] */ r_edx = R32((u32)(r_ebx+0x90u));
    /* 007b0ca5: or edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007b0ca8: mov dword ptr [ebx + 0x90], edx */ W32((u32)(r_ebx+0x90u), r_edx);
    /* 007b0cae: mov eax, 1 */ r_eax = 0x1u;
    /* 007b0cb3: mov word ptr [ebp + 0x92], ax */ W16((u32)(r_ebp+0x92u), (u16)r_eax);
    /* 007b0cba: mov eax, 1 */ r_eax = 0x1u;
    /* 007b0cbf: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007b0cc0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007b0cc1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007b0cc2: ret 4 */ FN_RET(0x007b0a7c); r_esp += 8; return;
L_007b0cc5:; BB(0x007b0cc5);
    /* 007b0cc5: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 007b0cc7: mov ecx, dword ptr [ebx + 0x94] */ r_ecx = R32((u32)(r_ebx+0x94u));
    /* 007b0ccd: call 0x69a088 */ r_esp -= 4; W32(r_esp, 0x7b0cd2u); f_0069a088();
    /* 007b0cd2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b0cd4: jne 0x7b0c3e */ if (!fZ) goto L_007b0c3e;
L_007b0cda:; BB(0x007b0cda);
    /* 007b0cda: movsx ebx, word ptr [ebp + 0x6c] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_ebp+0x6cu));
    /* 007b0cde: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b0ce0: jne 0x7b0d0a */ if (!fZ) goto L_007b0d0a;
L_007b0ce2:; BB(0x007b0ce2);
    /* 007b0ce2: mov edx, dword ptr [ebp + 0x24] */ r_edx = R32((u32)(r_ebp+0x24u));
    /* 007b0ce5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007b0ce7: mov word ptr [ebp + 0x5c], ax */ W16((u32)(r_ebp+0x5cu), (u16)r_eax);
    /* 007b0ceb: cmp edx, 0x14 */ {  u32 a = r_edx; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b0cee: je 0x7b0d0a */ if (fZ) goto L_007b0d0a;
L_007b0cf0:; BB(0x007b0cf0);
    /* 007b0cf0: mov eax, dword ptr [ebp + 0x80] */ r_eax = R32((u32)(r_ebp+0x80u));
    /* 007b0cf6: movsx ebx, word ptr [ebp + 0x6c] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_ebp+0x6cu));
    /* 007b0cfa: mov dword ptr [ebp + 0x24], 0x14 */ W32((u32)(r_ebp+0x24u), 0x14u);
    /* 007b0d01: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007b0d04: mov dword ptr [ebp + 0x80], eax */ W32((u32)(r_ebp+0x80u), r_eax);
L_007b0d0a:; BB(0x007b0d0a);
    /* 007b0d0a: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007b0d0d: movsx eax, bx */ r_eax = (u32)(i32)(i16)(u16)r_ebx;
    /* 007b0d10: cmp eax, 0x5dc */ {  u32 a = r_eax; u32 b = 0x5dcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007b0d15: jl 0x7b0d22 */ if ((fS!=fO)) goto L_007b0d22;
L_007b0d17:; BB(0x007b0d17);
    /* 007b0d17: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007b0d19: mov word ptr [ebp + 0x6c], ax */ W16((u32)(r_ebp+0x6cu), (u16)r_eax);
    /* 007b0d1d: jmp 0x7b0ae9 */ goto L_007b0ae9;
L_007b0d22:; BB(0x007b0d22);
    /* 007b0d22: mov word ptr [ebp + 0x6c], bx */ W16((u32)(r_ebp+0x6cu), (u16)r_ebx);
    /* 007b0d26: jmp 0x7b0ae9 */ goto L_007b0ae9;
L_007b0d2b:; BB(0x007b0d2b);
    /* 007b0d2b: mov ecx, dword ptr [ebp + 0x78] */ r_ecx = R32((u32)(r_ebp+0x78u));
    /* 007b0d2e: mov eax, dword ptr [ecx + 0x8c] */ r_eax = R32((u32)(r_ecx+0x8cu));
    /* 007b0d34: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007b0d36: je 0x7b0d40 */ if (fZ) goto L_007b0d40;
L_007b0d38:; BB(0x007b0d38);
    /* 007b0d38: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007b0d3a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007b0d3b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007b0d3c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007b0d3d: ret 4 */ FN_RET(0x007b0a7c); r_esp += 8; return;
L_007b0d40:; BB(0x007b0d40);
    /* 007b0d40: mov edx, dword ptr [ebp + 0x74] */ r_edx = R32((u32)(r_ebp+0x74u));
    /* 007b0d43: mov eax, dword ptr [edx + 0x94] */ r_eax = R32((u32)(r_edx+0x94u));
    /* 007b0d49: mov edi, dword ptr [eax + 0x300] */ r_edi = R32((u32)(r_eax+0x300u));
    /* 007b0d4f: mov dword ptr [ebp + 0xdc], edi */ W32((u32)(r_ebp+0xdcu), r_edi);
    /* 007b0d55: mov edi, dword ptr [eax + 0x304] */ r_edi = R32((u32)(r_eax+0x304u));
    /* 007b0d5b: mov dword ptr [ebp + 0xe0], edi */ W32((u32)(r_ebp+0xe0u), r_edi);
    /* 007b0d61: mov eax, dword ptr [eax + 0x308] */ r_eax = R32((u32)(r_eax+0x308u));
    /* 007b0d67: mov dword ptr [ebp + 0xe4], eax */ W32((u32)(r_ebp+0xe4u), r_eax);
    /* 007b0d6d: mov eax, dword ptr [ebp + 0x80] */ r_eax = R32((u32)(r_ebp+0x80u));
    /* 007b0d73: or eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007b0d76: mov dword ptr [ebp + 0x80], eax */ W32((u32)(r_ebp+0x80u), r_eax);
    /* 007b0d7c: mov eax, dword ptr [edx + 0x90] */ r_eax = R32((u32)(r_edx+0x90u));
    /* 007b0d82: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007b0d84: je 0x7b0de2 */ if (fZ) goto L_007b0de2;
L_007b0d86:; BB(0x007b0d86);
    /* 007b0d86: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 007b0d88: mov ecx, dword ptr [ecx + 0x94] */ r_ecx = R32((u32)(r_ecx+0x94u));
    /* 007b0d8e: call 0x69a088 */ r_esp -= 4; W32(r_esp, 0x7b0d93u); f_0069a088();
    /* 007b0d93: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b0d95: je 0x7b0ae0 */ if (fZ) goto L_007b0ae0;
L_007b0d9b:; BB(0x007b0d9b);
    /* 007b0d9b: mov eax, dword ptr [ebp + 0x78] */ r_eax = R32((u32)(r_ebp+0x78u));
    /* 007b0d9e: mov edx, dword ptr [eax + 0x90] */ r_edx = R32((u32)(r_eax+0x90u));
    /* 007b0da4: test dl, 0x20 */ {  u32 a = (u8)r_edx; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007b0da7: jne 0x7b0dcb */ if (!fZ) goto L_007b0dcb;
L_007b0da9:; BB(0x007b0da9);
    /* 007b0da9: mov eax, dword ptr [ebp + 0x34] */ r_eax = R32((u32)(r_ebp+0x34u));
    /* 007b0dac: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007b0dae: jne 0x7b0ae0 */ if (!fZ) goto L_007b0ae0;
L_007b0db4:; BB(0x007b0db4);
    /* 007b0db4: mov edx, 2 */ r_edx = 0x2u;
    /* 007b0db9: mov word ptr [ebp + 0x92], dx */ W16((u32)(r_ebp+0x92u), (u16)r_edx);
    /* 007b0dc0: mov eax, 1 */ r_eax = 0x1u;
    /* 007b0dc5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007b0dc6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007b0dc7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007b0dc8: ret 4 */ FN_RET(0x007b0a7c); r_esp += 8; return;
L_007b0dcb:; BB(0x007b0dcb);
    /* 007b0dcb: mov edx, 2 */ r_edx = 0x2u;
    /* 007b0dd0: mov word ptr [ebp + 0x92], dx */ W16((u32)(r_ebp+0x92u), (u16)r_edx);
    /* 007b0dd7: mov eax, 1 */ r_eax = 0x1u;
    /* 007b0ddc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007b0ddd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007b0dde: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007b0ddf: ret 4 */ FN_RET(0x007b0a7c); r_esp += 8; return;
L_007b0de2:; BB(0x007b0de2);
    /* 007b0de2: test eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b0de7: je 0x7b0ae0 */ if (fZ) goto L_007b0ae0;
L_007b0ded:; BB(0x007b0ded);
    /* 007b0ded: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 007b0def: mov ecx, dword ptr [ecx + 0x94] */ r_ecx = R32((u32)(r_ecx+0x94u));
    /* 007b0df5: call 0x69a088 */ r_esp -= 4; W32(r_esp, 0x7b0dfau); f_0069a088();
    /* 007b0dfa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b0dfc: je 0x7b0ae0 */ if (fZ) goto L_007b0ae0;
L_007b0e02:; BB(0x007b0e02);
    /* 007b0e02: mov eax, dword ptr [ebp + 0x78] */ r_eax = R32((u32)(r_ebp+0x78u));
    /* 007b0e05: mov edx, dword ptr [eax + 0x90] */ r_edx = R32((u32)(r_eax+0x90u));
    /* 007b0e0b: test dl, 0x20 */ {  u32 a = (u8)r_edx; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007b0e0e: jne 0x7b0e2f */ if (!fZ) goto L_007b0e2f;
L_007b0e10:; BB(0x007b0e10);
    /* 007b0e10: mov eax, dword ptr [ebp + 0x34] */ r_eax = R32((u32)(r_ebp+0x34u));
    /* 007b0e13: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007b0e15: jne 0x7b0ae0 */ if (!fZ) goto L_007b0ae0;
L_007b0e1b:; BB(0x007b0e1b);
    /* 007b0e1b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007b0e1d: mov word ptr [ebp + 0x92], dx */ W16((u32)(r_ebp+0x92u), (u16)r_edx);
    /* 007b0e24: mov eax, 1 */ r_eax = 0x1u;
    /* 007b0e29: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007b0e2a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007b0e2b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007b0e2c: ret 4 */ FN_RET(0x007b0a7c); r_esp += 8; return;
L_007b0e2f:; BB(0x007b0e2f);
    /* 007b0e2f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007b0e31: mov word ptr [ebp + 0x92], dx */ W16((u32)(r_ebp+0x92u), (u16)r_edx);
    /* 007b0e38: mov eax, 1 */ r_eax = 0x1u;
    /* 007b0e3d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007b0e3e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007b0e3f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007b0e40: ret 4 */ FN_RET(0x007b0a7c); r_esp += 8; return;
L_007b0e43:; BB(0x007b0e43);
    /* 007b0e43: mov eax, dword ptr [ebp + 0x80] */ r_eax = R32((u32)(r_ebp+0x80u));
    /* 007b0e49: mov edi, dword ptr [ebp + 0x78] */ r_edi = R32((u32)(r_ebp+0x78u));
    /* 007b0e4c: or eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007b0e51: mov dword ptr [ebp + 0x80], eax */ W32((u32)(r_ebp+0x80u), r_eax);
    /* 007b0e57: mov eax, dword ptr [edi + 0x90] */ r_eax = R32((u32)(r_edi+0x90u));
    /* 007b0e5d: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007b0e5f: je 0x7b0ebd */ if (fZ) goto L_007b0ebd;
L_007b0e61:; BB(0x007b0e61);
    /* 007b0e61: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 007b0e63: mov ecx, dword ptr [edi + 0x94] */ r_ecx = R32((u32)(r_edi+0x94u));
    /* 007b0e69: call 0x69a088 */ r_esp -= 4; W32(r_esp, 0x7b0e6eu); f_0069a088();
    /* 007b0e6e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b0e70: je 0x7b0ad7 */ if (fZ) goto L_007b0ad7;
L_007b0e76:; BB(0x007b0e76);
    /* 007b0e76: mov eax, dword ptr [ebp + 0x78] */ r_eax = R32((u32)(r_ebp+0x78u));
    /* 007b0e79: mov edx, dword ptr [eax + 0x90] */ r_edx = R32((u32)(r_eax+0x90u));
    /* 007b0e7f: test dl, 0x20 */ {  u32 a = (u8)r_edx; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007b0e82: jne 0x7b0ea6 */ if (!fZ) goto L_007b0ea6;
L_007b0e84:; BB(0x007b0e84);
    /* 007b0e84: mov eax, dword ptr [ebp + 0x34] */ r_eax = R32((u32)(r_ebp+0x34u));
    /* 007b0e87: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007b0e89: jne 0x7b0ad7 */ if (!fZ) goto L_007b0ad7;
L_007b0e8f:; BB(0x007b0e8f);
    /* 007b0e8f: mov edx, 2 */ r_edx = 0x2u;
    /* 007b0e94: mov word ptr [ebp + 0x92], dx */ W16((u32)(r_ebp+0x92u), (u16)r_edx);
    /* 007b0e9b: mov eax, 1 */ r_eax = 0x1u;
    /* 007b0ea0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007b0ea1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007b0ea2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007b0ea3: ret 4 */ FN_RET(0x007b0a7c); r_esp += 8; return;
L_007b0ea6:; BB(0x007b0ea6);
    /* 007b0ea6: mov edx, 2 */ r_edx = 0x2u;
    /* 007b0eab: mov word ptr [ebp + 0x92], dx */ W16((u32)(r_ebp+0x92u), (u16)r_edx);
    /* 007b0eb2: mov eax, 1 */ r_eax = 0x1u;
    /* 007b0eb7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007b0eb8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007b0eb9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007b0eba: ret 4 */ FN_RET(0x007b0a7c); r_esp += 8; return;
L_007b0ebd:; BB(0x007b0ebd);
    /* 007b0ebd: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007b0ebf: je 0x7b0f29 */ if (fZ) goto L_007b0f29;
L_007b0ec1:; BB(0x007b0ec1);
    /* 007b0ec1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007b0ec3: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 007b0ec5: mov ecx, dword ptr [edi + 0x94] */ r_ecx = R32((u32)(r_edi+0x94u));
    /* 007b0ecb: call 0x68faa8 */ r_esp -= 4; W32(r_esp, 0x7b0ed0u); f_0068faa8();
    /* 007b0ed0: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b0ed3: je 0x7b0f75 */ if (fZ) goto L_007b0f75;
L_007b0ed9:; BB(0x007b0ed9);
    /* 007b0ed9: mov eax, dword ptr [edi + 0x90] */ r_eax = R32((u32)(r_edi+0x90u));
    /* 007b0edf: or eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007b0ee2: mov dword ptr [edi + 0x90], eax */ W32((u32)(r_edi+0x90u), r_eax);
L_007b0ee8:; BB(0x007b0ee8);
    /* 007b0ee8: mov eax, dword ptr [ebp + 0x78] */ r_eax = R32((u32)(r_ebp+0x78u));
    /* 007b0eeb: mov edx, dword ptr [eax + 0x90] */ r_edx = R32((u32)(r_eax+0x90u));
    /* 007b0ef1: test dl, 0x20 */ {  u32 a = (u8)r_edx; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007b0ef4: jne 0x7b0f15 */ if (!fZ) goto L_007b0f15;
L_007b0ef6:; BB(0x007b0ef6);
    /* 007b0ef6: mov eax, dword ptr [ebp + 0x34] */ r_eax = R32((u32)(r_ebp+0x34u));
    /* 007b0ef9: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007b0efb: jne 0x7b0ad7 */ if (!fZ) goto L_007b0ad7;
L_007b0f01:; BB(0x007b0f01);
    /* 007b0f01: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007b0f03: mov word ptr [ebp + 0x92], dx */ W16((u32)(r_ebp+0x92u), (u16)r_edx);
    /* 007b0f0a: mov eax, 1 */ r_eax = 0x1u;
    /* 007b0f0f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007b0f10: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007b0f11: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007b0f12: ret 4 */ FN_RET(0x007b0a7c); r_esp += 8; return;
L_007b0f15:; BB(0x007b0f15);
    /* 007b0f15: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007b0f17: mov word ptr [ebp + 0x92], dx */ W16((u32)(r_ebp+0x92u), (u16)r_edx);
    /* 007b0f1e: mov eax, 1 */ r_eax = 0x1u;
    /* 007b0f23: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007b0f24: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007b0f25: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007b0f26: ret 4 */ FN_RET(0x007b0a7c); r_esp += 8; return;
L_007b0f29:; BB(0x007b0f29);
    /* 007b0f29: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007b0f2b: jne 0x7b0f37 */ if (!fZ) goto L_007b0f37;
L_007b0f2d:; BB(0x007b0f2d);
    /* 007b0f2d: mov ebx, 2 */ r_ebx = 0x2u;
    /* 007b0f32: jmp 0x7b0ad7 */ goto L_007b0ad7;
L_007b0f37:; BB(0x007b0f37);
    /* 007b0f37: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007b0f39: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 007b0f3b: mov ecx, dword ptr [edi + 0x94] */ r_ecx = R32((u32)(r_edi+0x94u));
    /* 007b0f41: call 0x68faa8 */ r_esp -= 4; W32(r_esp, 0x7b0f46u); f_0068faa8();
    /* 007b0f46: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b0f49: je 0x7b0ad7 */ if (fZ) goto L_007b0ad7;
L_007b0f4f:; BB(0x007b0f4f);
    /* 007b0f4f: mov edx, dword ptr [edi + 0x90] */ r_edx = R32((u32)(r_edi+0x90u));
    /* 007b0f55: or edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007b0f58: mov dword ptr [edi + 0x90], edx */ W32((u32)(r_edi+0x90u), r_edx);
    /* 007b0f5e: mov eax, 1 */ r_eax = 0x1u;
    /* 007b0f63: mov word ptr [ebp + 0x92], ax */ W16((u32)(r_ebp+0x92u), (u16)r_eax);
    /* 007b0f6a: mov eax, 1 */ r_eax = 0x1u;
    /* 007b0f6f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007b0f70: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007b0f71: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007b0f72: ret 4 */ FN_RET(0x007b0a7c); r_esp += 8; return;
L_007b0f75:; BB(0x007b0f75);
    /* 007b0f75: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 007b0f77: mov ecx, dword ptr [edi + 0x94] */ r_ecx = R32((u32)(r_edi+0x94u));
    /* 007b0f7d: call 0x69a088 */ r_esp -= 4; W32(r_esp, 0x7b0f82u); f_0069a088();
    /* 007b0f82: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b0f84: jne 0x7b0ee8 */ if (!fZ) goto L_007b0ee8;
L_007b0f8a:; BB(0x007b0f8a);
    /* 007b0f8a: movsx edi, word ptr [ebp + 0x6c] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ebp+0x6cu));
    /* 007b0f8e: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b0f90: jne 0x7b0fba */ if (!fZ) goto L_007b0fba;
L_007b0f92:; BB(0x007b0f92);
    /* 007b0f92: mov edx, dword ptr [ebp + 0x24] */ r_edx = R32((u32)(r_ebp+0x24u));
    /* 007b0f95: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007b0f97: mov word ptr [ebp + 0x5c], ax */ W16((u32)(r_ebp+0x5cu), (u16)r_eax);
    /* 007b0f9b: cmp edx, 0x14 */ {  u32 a = r_edx; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b0f9e: je 0x7b0fba */ if (fZ) goto L_007b0fba;
L_007b0fa0:; BB(0x007b0fa0);
    /* 007b0fa0: mov eax, dword ptr [ebp + 0x80] */ r_eax = R32((u32)(r_ebp+0x80u));
    /* 007b0fa6: movsx edi, word ptr [ebp + 0x6c] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ebp+0x6cu));
    /* 007b0faa: mov dword ptr [ebp + 0x24], 0x14 */ W32((u32)(r_ebp+0x24u), 0x14u);
    /* 007b0fb1: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007b0fb4: mov dword ptr [ebp + 0x80], eax */ W32((u32)(r_ebp+0x80u), r_eax);
L_007b0fba:; BB(0x007b0fba);
    /* 007b0fba: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 007b0fbd: movsx eax, di */ r_eax = (u32)(i32)(i16)(u16)r_edi;
    /* 007b0fc0: cmp eax, 0x5dc */ {  u32 a = r_eax; u32 b = 0x5dcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007b0fc5: jl 0x7b0fd2 */ if ((fS!=fO)) goto L_007b0fd2;
L_007b0fc7:; BB(0x007b0fc7);
    /* 007b0fc7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007b0fc9: mov word ptr [ebp + 0x6c], ax */ W16((u32)(r_ebp+0x6cu), (u16)r_eax);
    /* 007b0fcd: jmp 0x7b0ad7 */ goto L_007b0ad7;
L_007b0fd2:; BB(0x007b0fd2);
    /* 007b0fd2: mov word ptr [ebp + 0x6c], di */ W16((u32)(r_ebp+0x6cu), (u16)r_edi);
    /* 007b0fd6: jmp 0x7b0ad7 */ goto L_007b0ad7;
}

void f_007b0fdc(void) /* sub_7B0FDC */
{
    FN_ENTER(0x007b0fdc);
    /* 007b0fdc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007b0fdd: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007b0fe0: mov edi, ecx */ r_edi = r_ecx;
    /* 007b0fe2: mov eax, dword ptr [edi + 0x84] */ r_eax = R32((u32)(r_edi+0x84u));
    /* 007b0fe8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b0fea: je 0x7b10fb */ if (fZ) goto L_007b10fb;
L_007b0ff0:; BB(0x007b0ff0);
    /* 007b0ff0: mov eax, dword ptr [edi + 0x34] */ r_eax = R32((u32)(r_edi+0x34u));
    /* 007b0ff3: test eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b0ff8: je 0x7b10cc */ if (fZ) goto L_007b10cc;
L_007b0ffe:; BB(0x007b0ffe);
    /* 007b0ffe: fld dword ptr [edi + 0x54] */ FPUSH(R_F32((u32)(r_edi+0x54u)));
    /* 007b1001: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 007b1003: fcomp dword ptr [edi + 0x88] */ fx_compare(ST(0), R_F32((u32)(r_edi+0x88u))); FPOP();
    /* 007b1009: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007b100b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007b100c: jae 0x7b1040 */ if (!fC) goto L_007b1040;
L_007b100e:; BB(0x007b100e);
    /* 007b100e: mov eax, dword ptr [edi + 0x74] */ r_eax = R32((u32)(r_edi+0x74u));
    /* 007b1011: mov ecx, dword ptr [eax + 0x94] */ r_ecx = R32((u32)(r_eax+0x94u));
    /* 007b1017: mov edx, dword ptr [ecx + 0x300] */ r_edx = R32((u32)(r_ecx+0x300u));
    /* 007b101d: mov dword ptr [edi + 0xdc], edx */ W32((u32)(r_edi+0xdcu), r_edx);
    /* 007b1023: mov eax, dword ptr [ecx + 0x304] */ r_eax = R32((u32)(r_ecx+0x304u));
    /* 007b1029: mov dword ptr [edi + 0xe0], eax */ W32((u32)(r_edi+0xe0u), r_eax);
    /* 007b102f: mov eax, dword ptr [ecx + 0x308] */ r_eax = R32((u32)(r_ecx+0x308u));
    /* 007b1035: mov dword ptr [edi + 0xe4], eax */ W32((u32)(r_edi+0xe4u), r_eax);
    /* 007b103b: jmp 0x7b1128 */ goto L_007b1128;
L_007b1040:; BB(0x007b1040);
    /* 007b1040: mov eax, dword ptr [edi + 0x78] */ r_eax = R32((u32)(r_edi+0x78u));
    /* 007b1043: mov edx, dword ptr [eax + 0x94] */ r_edx = R32((u32)(r_eax+0x94u));
    /* 007b1049: fld dword ptr [edi + 0xdc] */ FPUSH(R_F32((u32)(r_edi+0xdcu)));
    /* 007b104f: fsub dword ptr [edx + 0x38] */ ST(0) = ST(0) - R_F32((u32)(r_edx+0x38u));
    /* 007b1052: fld dword ptr [edi + 0xe4] */ FPUSH(R_F32((u32)(r_edi+0xe4u)));
    /* 007b1058: fsub dword ptr [edx + 0x40] */ ST(0) = ST(0) - R_F32((u32)(r_edx+0x40u));
    /* 007b105b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007b105d: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 007b1060: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 007b1064: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 007b106c: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 007b106f: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x7b1074u); f_0083173c();
    /* 007b1074: fcomp dword ptr [0x97dd94] */ fx_compare(ST(0), R_F32((u32)(0x97dd94u))); FPOP();
    /* 007b107a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007b107c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007b107d: je 0x7b1089 */ if (fZ) goto L_007b1089;
L_007b107f:; BB(0x007b107f);
    /* 007b107f: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 007b1082: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x7b1087u); f_0082df08();
    /* 007b1087: fstp st(0) */ ST(0) = ST(0); FPOP();
L_007b1089:; BB(0x007b1089);
    /* 007b1089: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 007b108c: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 007b1090: fld dword ptr [edi + 0x54] */ FPUSH(R_F32((u32)(r_edi+0x54u)));
    /* 007b1093: mov eax, dword ptr [edi + 0x78] */ r_eax = R32((u32)(r_edi+0x78u));
    /* 007b1096: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007b1098: fchs  */ ST(0) = -ST(0);
    /* 007b109a: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 007b109c: fadd dword ptr [edi + 0xdc] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0xdcu));
    /* 007b10a2: fstp dword ptr [edi + 0xdc] */ W_F32((u32)(r_edi+0xdcu), ST(0)); FPOP();
    /* 007b10a8: fchs  */ ST(0) = -ST(0);
    /* 007b10aa: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 007b10ac: fadd dword ptr [edi + 0xe4] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0xe4u));
    /* 007b10b2: fstp dword ptr [edi + 0xe4] */ W_F32((u32)(r_edi+0xe4u), ST(0)); FPOP();
    /* 007b10b8: mov edx, dword ptr [eax + 0x94] */ r_edx = R32((u32)(r_eax+0x94u));
    /* 007b10be: mov eax, dword ptr [edx + 0x304] */ r_eax = R32((u32)(r_edx+0x304u));
    /* 007b10c4: mov dword ptr [edi + 0xe0], eax */ W32((u32)(r_edi+0xe0u), r_eax);
    /* 007b10ca: jmp 0x7b1128 */ goto L_007b1128;
L_007b10cc:; BB(0x007b10cc);
    /* 007b10cc: mov eax, dword ptr [edi + 0x74] */ r_eax = R32((u32)(r_edi+0x74u));
    /* 007b10cf: mov ecx, dword ptr [eax + 0x94] */ r_ecx = R32((u32)(r_eax+0x94u));
    /* 007b10d5: mov edx, dword ptr [ecx + 0x300] */ r_edx = R32((u32)(r_ecx+0x300u));
    /* 007b10db: mov dword ptr [edi + 0xdc], edx */ W32((u32)(r_edi+0xdcu), r_edx);
    /* 007b10e1: mov eax, dword ptr [ecx + 0x304] */ r_eax = R32((u32)(r_ecx+0x304u));
    /* 007b10e7: mov dword ptr [edi + 0xe0], eax */ W32((u32)(r_edi+0xe0u), r_eax);
    /* 007b10ed: mov eax, dword ptr [ecx + 0x308] */ r_eax = R32((u32)(r_ecx+0x308u));
    /* 007b10f3: mov dword ptr [edi + 0xe4], eax */ W32((u32)(r_edi+0xe4u), r_eax);
    /* 007b10f9: jmp 0x7b1128 */ goto L_007b1128;
L_007b10fb:; BB(0x007b10fb);
    /* 007b10fb: mov eax, dword ptr [edi + 0x74] */ r_eax = R32((u32)(r_edi+0x74u));
    /* 007b10fe: mov ecx, dword ptr [eax + 0x94] */ r_ecx = R32((u32)(r_eax+0x94u));
    /* 007b1104: mov edx, dword ptr [ecx + 0x300] */ r_edx = R32((u32)(r_ecx+0x300u));
    /* 007b110a: mov dword ptr [edi + 0xdc], edx */ W32((u32)(r_edi+0xdcu), r_edx);
    /* 007b1110: mov eax, dword ptr [ecx + 0x304] */ r_eax = R32((u32)(r_ecx+0x304u));
    /* 007b1116: mov dword ptr [edi + 0xe0], eax */ W32((u32)(r_edi+0xe0u), r_eax);
    /* 007b111c: mov eax, dword ptr [ecx + 0x308] */ r_eax = R32((u32)(r_ecx+0x308u));
    /* 007b1122: mov dword ptr [edi + 0xe4], eax */ W32((u32)(r_edi+0xe4u), r_eax);
L_007b1128:; BB(0x007b1128);
    /* 007b1128: mov eax, 1 */ r_eax = 0x1u;
    /* 007b112d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007b1130: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007b1131: ret  */ FN_RET(0x007b0fdc); r_esp += 4; return;
}

