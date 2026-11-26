#include "protos.h"

void f_0059d010(void) /* sub_59D010 */
{
    FN_ENTER(0x0059d010);
    /* 0059d010: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0059d011: mov edi, ecx */ r_edi = r_ecx;
    /* 0059d013: mov eax, dword ptr [edi + 0x3f0] */ r_eax = R32((u32)(r_edi+0x3f0u));
    /* 0059d019: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059d01b: jne 0x59d03f */ if (!fZ) goto L_0059d03f;
L_0059d01d:; BB(0x0059d01d);
    /* 0059d01d: push 0x1dd */ { u32 v = 0x1ddu; r_esp -= 4; W32(r_esp, v); }
    /* 0059d022: mov ecx, edi */ r_ecx = r_edi;
    /* 0059d024: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x59d029u); f_007879b8();
    /* 0059d029: mov ecx, eax */ r_ecx = r_eax;
    /* 0059d02b: lea eax, [edi + 0x38] */ r_eax = (u32)(r_edi+0x38u);
    /* 0059d02e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0059d030: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059d031: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059d032: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059d033: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0059d034: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0059d035: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x59d03au); f_008144b0();
    /* 0059d03a: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0059d03d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0059d03e: ret  */ FN_RET(0x0059d010); r_esp += 4; return;
L_0059d03f:; BB(0x0059d03f);
    /* 0059d03f: push 0x1de */ { u32 v = 0x1deu; r_esp -= 4; W32(r_esp, v); }
    /* 0059d044: mov ecx, edi */ r_ecx = r_edi;
    /* 0059d046: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x59d04bu); f_007879b8();
    /* 0059d04b: mov ecx, eax */ r_ecx = r_eax;
    /* 0059d04d: lea eax, [edi + 0x38] */ r_eax = (u32)(r_edi+0x38u);
    /* 0059d050: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0059d052: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059d053: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059d054: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059d055: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0059d056: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0059d057: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x59d05cu); f_008144b0();
    /* 0059d05c: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0059d05f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0059d060: ret  */ FN_RET(0x0059d010); r_esp += 4; return;
}

void f_0059d064(void) /* sub_59D064 */
{
    FN_ENTER(0x0059d064);
    /* 0059d064: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0059d065: sub esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0059d068: mov edi, ecx */ r_edi = r_ecx;
    /* 0059d06a: mov eax, dword ptr [esp + 0x54] */ r_eax = R32((u32)(r_esp+0x54u));
    /* 0059d06e: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059d071: je 0x59d39a */ if (fZ) goto L_0059d39a;
L_0059d077:; BB(0x0059d077);
    /* 0059d077: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059d07a: je 0x59d090 */ if (fZ) goto L_0059d090;
L_0059d07c:; BB(0x0059d07c);
    /* 0059d07c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059d07e: jne 0x59d393 */ if (!fZ) goto L_0059d393;
L_0059d084:; BB(0x0059d084);
    /* 0059d084: add dword ptr [edi + 0x4ec], 1 */ { u32 ad = (u32)(r_edi+0x4ecu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0059d08b: jmp 0x59d393 */ goto L_0059d393;
L_0059d090:; BB(0x0059d090);
    /* 0059d090: push dword ptr [0xa746bc] */ { u32 v = R32((u32)(0xa746bcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0059d096: mov ecx, edi */ r_ecx = r_edi;
    /* 0059d098: push dword ptr [0xa746c0] */ { u32 v = R32((u32)(0xa746c0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0059d09e: call 0x59ccec */ r_esp -= 4; W32(r_esp, 0x59d0a3u); f_0059ccec();
    /* 0059d0a3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059d0a5: je 0x59d37f */ if (fZ) goto L_0059d37f;
L_0059d0ab:; BB(0x0059d0ab);
    /* 0059d0ab: mov eax, dword ptr [edi + 0x3f4] */ r_eax = R32((u32)(r_edi+0x3f4u));
    /* 0059d0b1: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0059d0b3: je 0x59d21b */ if (fZ) goto L_0059d21b;
L_0059d0b9:; BB(0x0059d0b9);
    /* 0059d0b9: mov ecx, edi */ r_ecx = r_edi;
    /* 0059d0bb: call 0x5213d8 */ r_esp -= 4; W32(r_esp, 0x59d0c0u); f_005213d8();
    /* 0059d0c0: mov ecx, edi */ r_ecx = r_edi;
    /* 0059d0c2: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x59d0c7u); f_00521410();
    /* 0059d0c7: mov ecx, dword ptr [edi + 0x3f8] */ r_ecx = R32((u32)(r_edi+0x3f8u));
    /* 0059d0cd: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x59d0d2u); f_0082dcbc();
    /* 0059d0d2: fld dword ptr [0x929930] */ FPUSH(R_F32((u32)(0x929930u)));
    /* 0059d0d8: mov ecx, dword ptr [edi + 0x3f8] */ r_ecx = R32((u32)(r_edi+0x3f8u));
    /* 0059d0de: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0059d0e0: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 0059d0e4: mov dword ptr [esp + 0x28], 0 */ W32((u32)(r_esp+0x28u), 0x0u);
    /* 0059d0ec: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x59d0f1u); f_0082ddd8();
    /* 0059d0f1: fld dword ptr [0x929930] */ FPUSH(R_F32((u32)(0x929930u)));
    /* 0059d0f7: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0059d0f9: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 0059d0fd: lea edx, [edi + 0x39c] */ r_edx = (u32)(r_edi+0x39cu);
    /* 0059d103: lea ecx, [esp + 0x24] */ r_ecx = (u32)(r_esp+0x24u);
    /* 0059d107: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x59d10cu); f_0082ebac();
    /* 0059d10c: lea ecx, [esp + 0x24] */ r_ecx = (u32)(r_esp+0x24u);
    /* 0059d110: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 0059d113: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x59d118u); f_0082f9c4();
    /* 0059d118: lea eax, [esp + 0x24] */ r_eax = (u32)(r_esp+0x24u);
    /* 0059d11c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059d11d: call 0x7828e4 */ r_esp -= 4; W32(r_esp, 0x59d122u); f_007828e4();
    /* 0059d122: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0059d123: add esp, -0x10 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059d126: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 0059d12a: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0059d12e: mov ecx, edi */ r_ecx = r_edi;
    /* 0059d130: lea eax, [esp + 0x40] */ r_eax = (u32)(r_esp+0x40u);
    /* 0059d134: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0059d137: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 0059d13b: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0059d13f: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0059d143: call 0x520a04 */ r_esp -= 4; W32(r_esp, 0x59d148u); f_00520a04();
    /* 0059d148: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 0059d14c: fld dword ptr [0x929934] */ FPUSH(R_F32((u32)(0x929934u)));
    /* 0059d152: fadd dword ptr [esp + 0x34] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x34u));
    /* 0059d156: mov edx, dword ptr [esp + 0x38] */ r_edx = R32((u32)(r_esp+0x38u));
    /* 0059d15a: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
    /* 0059d15e: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
    /* 0059d162: lea eax, [edi + 0x128] */ r_eax = (u32)(r_edi+0x128u);
    /* 0059d168: mov dword ptr [esp + 0x44], edx */ W32((u32)(r_esp+0x44u), r_edx);
    /* 0059d16c: lea edx, [esp + 0x3c] */ r_edx = (u32)(r_esp+0x3cu);
    /* 0059d170: push 0xe0 */ { u32 v = 0xe0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059d175: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059d176: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059d177: call 0x7806dc */ r_esp -= 4; W32(r_esp, 0x59d17cu); f_007806dc();
    /* 0059d17c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059d17f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059d181: jne 0x59d198 */ if (!fZ) goto L_0059d198;
L_0059d183:; BB(0x0059d183);
    /* 0059d183: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 0059d187: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 0059d18b: mov dword ptr [edi + 0x38], eax */ W32((u32)(r_edi+0x38u), r_eax);
    /* 0059d18e: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 0059d192: mov dword ptr [edi + 0x3c], edx */ W32((u32)(r_edi+0x3cu), r_edx);
    /* 0059d195: mov dword ptr [edi + 0x40], eax */ W32((u32)(r_edi+0x40u), r_eax);
L_0059d198:; BB(0x0059d198);
    /* 0059d198: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0059d19a: mov ecx, edi */ r_ecx = r_edi;
    /* 0059d19c: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x59d1a2u); call_ind(t); }
    /* 0059d1a2: mov eax, dword ptr [edi + 0x38] */ r_eax = R32((u32)(r_edi+0x38u));
    /* 0059d1a5: mov edx, dword ptr [edi + 0x3c] */ r_edx = R32((u32)(r_edi+0x3cu));
    /* 0059d1a8: mov dword ptr [edi + 0x44], eax */ W32((u32)(r_edi+0x44u), r_eax);
    /* 0059d1ab: mov eax, dword ptr [edi + 0x40] */ r_eax = R32((u32)(r_edi+0x40u));
    /* 0059d1ae: mov dword ptr [edi + 0x48], edx */ W32((u32)(r_edi+0x48u), r_edx);
    /* 0059d1b1: mov dword ptr [edi + 0x4c], eax */ W32((u32)(r_edi+0x4cu), r_eax);
    /* 0059d1b4: mov ecx, edi */ r_ecx = r_edi;
    /* 0059d1b6: call 0x59c744 */ r_esp -= 4; W32(r_esp, 0x59d1bbu); f_0059c744();
    /* 0059d1bb: mov eax, dword ptr [edi + 0x3f8] */ r_eax = R32((u32)(r_edi+0x3f8u));
    /* 0059d1c1: add eax, 0x8000 */ {  u32 a = r_eax; u32 b = 0x8000u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0059d1c6: mov dword ptr [edi + 0x60], eax */ W32((u32)(r_edi+0x60u), r_eax);
    /* 0059d1c9: mov ecx, edi */ r_ecx = r_edi;
    /* 0059d1cb: call 0x59c770 */ r_esp -= 4; W32(r_esp, 0x59d1d0u); f_0059c770();
    /* 0059d1d0: mov eax, dword ptr [edi + 0x3f8] */ r_eax = R32((u32)(r_edi+0x3f8u));
    /* 0059d1d6: add eax, 0x2aaa */ {  u32 a = r_eax; u32 b = 0x2aaau; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0059d1db: mov dword ptr [edi + 0x3f8], eax */ W32((u32)(r_edi+0x3f8u), r_eax);
    /* 0059d1e1: mov ecx, edi */ r_ecx = r_edi;
    /* 0059d1e3: call 0x51ffdc */ r_esp -= 4; W32(r_esp, 0x59d1e8u); f_0051ffdc();
    /* 0059d1e8: mov dword ptr [esp + 0x48], ebx */ W32((u32)(r_esp+0x48u), r_ebx);
    /* 0059d1ec: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0059d1ee: mov ebx, eax */ r_ebx = r_eax;
L_0059d1f0:; BB(0x0059d1f0);
    /* 0059d1f0: movzx edx, word ptr [edi + ebx*2 + 0x3ec] */ r_edx = (u32)R16((u32)(r_edi+r_ebx*2+0x3ecu));
    /* 0059d1f8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059d1f9: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x59d1feu); f_007b4d18();
    /* 0059d1fe: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0059d1ff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059d201: je 0x59d20a */ if (fZ) goto L_0059d20a;
L_0059d203:; BB(0x0059d203);
    /* 0059d203: mov ecx, eax */ r_ecx = r_eax;
    /* 0059d205: call 0x59acb8 */ r_esp -= 4; W32(r_esp, 0x59d20au); f_0059acb8();
L_0059d20a:; BB(0x0059d20a);
    /* 0059d20a: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0059d20d: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059d210: jl 0x59d1f0 */ if ((fS!=fO)) goto L_0059d1f0;
L_0059d212:; BB(0x0059d212);
    /* 0059d212: mov ebx, dword ptr [esp + 0x48] */ r_ebx = R32((u32)(r_esp+0x48u));
    /* 0059d216: jmp 0x59d374 */ goto L_0059d374;
L_0059d21b:; BB(0x0059d21b);
    /* 0059d21b: mov ecx, edi */ r_ecx = r_edi;
    /* 0059d21d: call 0x5213d8 */ r_esp -= 4; W32(r_esp, 0x59d222u); f_005213d8();
    /* 0059d222: mov ecx, edi */ r_ecx = r_edi;
    /* 0059d224: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x59d229u); f_00521410();
    /* 0059d229: mov ecx, dword ptr [edi + 0x3f8] */ r_ecx = R32((u32)(r_edi+0x3f8u));
    /* 0059d22f: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x59d234u); f_0082dcbc();
    /* 0059d234: fld dword ptr [0x92993c] */ FPUSH(R_F32((u32)(0x92993cu)));
    /* 0059d23a: mov ecx, dword ptr [edi + 0x3f8] */ r_ecx = R32((u32)(r_edi+0x3f8u));
    /* 0059d240: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0059d242: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0059d245: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 0059d24d: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x59d252u); f_0082ddd8();
    /* 0059d252: fld dword ptr [0x92993c] */ FPUSH(R_F32((u32)(0x92993cu)));
    /* 0059d258: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0059d25a: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0059d25e: lea edx, [edi + 0x39c] */ r_edx = (u32)(r_edi+0x39cu);
    /* 0059d264: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0059d267: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x59d26cu); f_0082ebac();
    /* 0059d26c: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0059d26f: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 0059d272: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x59d277u); f_0082f9c4();
    /* 0059d277: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0059d27a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059d27b: call 0x7828e4 */ r_esp -= 4; W32(r_esp, 0x59d280u); f_007828e4();
    /* 0059d280: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0059d281: add esp, -0x10 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059d284: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0059d288: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0059d28c: mov ecx, edi */ r_ecx = r_edi;
    /* 0059d28e: lea eax, [esp + 0x1c] */ r_eax = (u32)(r_esp+0x1cu);
    /* 0059d292: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0059d295: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0059d299: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0059d29d: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0059d2a1: call 0x520a04 */ r_esp -= 4; W32(r_esp, 0x59d2a6u); f_00520a04();
    /* 0059d2a6: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0059d2aa: fld dword ptr [0x929934] */ FPUSH(R_F32((u32)(0x929934u)));
    /* 0059d2b0: fadd dword ptr [esp + 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x10u));
    /* 0059d2b4: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 0059d2b8: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 0059d2bc: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0059d2c0: lea eax, [edi + 0x128] */ r_eax = (u32)(r_edi+0x128u);
    /* 0059d2c6: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 0059d2ca: lea edx, [esp + 0x18] */ r_edx = (u32)(r_esp+0x18u);
    /* 0059d2ce: push 0xe0 */ { u32 v = 0xe0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059d2d3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059d2d4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059d2d5: call 0x7806dc */ r_esp -= 4; W32(r_esp, 0x59d2dau); f_007806dc();
    /* 0059d2da: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059d2dd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059d2df: jne 0x59d2f6 */ if (!fZ) goto L_0059d2f6;
L_0059d2e1:; BB(0x0059d2e1);
    /* 0059d2e1: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0059d2e5: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0059d2e9: mov dword ptr [edi + 0x38], eax */ W32((u32)(r_edi+0x38u), r_eax);
    /* 0059d2ec: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0059d2f0: mov dword ptr [edi + 0x3c], edx */ W32((u32)(r_edi+0x3cu), r_edx);
    /* 0059d2f3: mov dword ptr [edi + 0x40], eax */ W32((u32)(r_edi+0x40u), r_eax);
L_0059d2f6:; BB(0x0059d2f6);
    /* 0059d2f6: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0059d2f8: mov ecx, edi */ r_ecx = r_edi;
    /* 0059d2fa: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x59d300u); call_ind(t); }
    /* 0059d300: mov eax, dword ptr [edi + 0x38] */ r_eax = R32((u32)(r_edi+0x38u));
    /* 0059d303: mov edx, dword ptr [edi + 0x3c] */ r_edx = R32((u32)(r_edi+0x3cu));
    /* 0059d306: mov dword ptr [edi + 0x44], eax */ W32((u32)(r_edi+0x44u), r_eax);
    /* 0059d309: mov eax, dword ptr [edi + 0x40] */ r_eax = R32((u32)(r_edi+0x40u));
    /* 0059d30c: mov dword ptr [edi + 0x48], edx */ W32((u32)(r_edi+0x48u), r_edx);
    /* 0059d30f: mov dword ptr [edi + 0x4c], eax */ W32((u32)(r_edi+0x4cu), r_eax);
    /* 0059d312: mov ecx, edi */ r_ecx = r_edi;
    /* 0059d314: call 0x59c744 */ r_esp -= 4; W32(r_esp, 0x59d319u); f_0059c744();
    /* 0059d319: mov eax, dword ptr [edi + 0x3f8] */ r_eax = R32((u32)(r_edi+0x3f8u));
    /* 0059d31f: add eax, 0x8000 */ {  u32 a = r_eax; u32 b = 0x8000u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0059d324: mov dword ptr [edi + 0x60], eax */ W32((u32)(r_edi+0x60u), r_eax);
    /* 0059d327: mov ecx, edi */ r_ecx = r_edi;
    /* 0059d329: call 0x59c770 */ r_esp -= 4; W32(r_esp, 0x59d32eu); f_0059c770();
    /* 0059d32e: mov eax, dword ptr [edi + 0x3f8] */ r_eax = R32((u32)(r_edi+0x3f8u));
    /* 0059d334: add eax, 0x2aaa */ {  u32 a = r_eax; u32 b = 0x2aaau; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0059d339: mov dword ptr [edi + 0x3f8], eax */ W32((u32)(r_edi+0x3f8u), r_eax);
    /* 0059d33f: mov ecx, edi */ r_ecx = r_edi;
    /* 0059d341: call 0x51ffdc */ r_esp -= 4; W32(r_esp, 0x59d346u); f_0051ffdc();
    /* 0059d346: mov dword ptr [esp + 0x48], ebx */ W32((u32)(r_esp+0x48u), r_ebx);
    /* 0059d34a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0059d34c: mov ebx, eax */ r_ebx = r_eax;
L_0059d34e:; BB(0x0059d34e);
    /* 0059d34e: movzx edx, word ptr [edi + ebx*2 + 0x3ec] */ r_edx = (u32)R16((u32)(r_edi+r_ebx*2+0x3ecu));
    /* 0059d356: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059d357: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x59d35cu); f_007b4d18();
    /* 0059d35c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0059d35d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059d35f: je 0x59d368 */ if (fZ) goto L_0059d368;
L_0059d361:; BB(0x0059d361);
    /* 0059d361: mov ecx, eax */ r_ecx = r_eax;
    /* 0059d363: call 0x59acb8 */ r_esp -= 4; W32(r_esp, 0x59d368u); f_0059acb8();
L_0059d368:; BB(0x0059d368);
    /* 0059d368: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0059d36b: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059d36e: jl 0x59d34e */ if ((fS!=fO)) goto L_0059d34e;
L_0059d370:; BB(0x0059d370);
    /* 0059d370: mov ebx, dword ptr [esp + 0x48] */ r_ebx = R32((u32)(r_esp+0x48u));
L_0059d374:; BB(0x0059d374);
    /* 0059d374: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0059d376: mov ecx, edi */ r_ecx = r_edi;
    /* 0059d378: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x59d37du); f_0051f62c();
    /* 0059d37d: jmp 0x59d393 */ goto L_0059d393;
L_0059d37f:; BB(0x0059d37f);
    /* 0059d37f: mov eax, dword ptr [edi + 0x4ec] */ r_eax = R32((u32)(r_edi+0x4ecu));
    /* 0059d385: cmp eax, 0x5a */ {  u32 a = r_eax; u32 b = 0x5au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059d388: jle 0x59d393 */ if ((fZ||fS!=fO)) goto L_0059d393;
L_0059d38a:; BB(0x0059d38a);
    /* 0059d38a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0059d38c: mov ecx, edi */ r_ecx = r_edi;
    /* 0059d38e: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x59d393u); f_0051f62c();
L_0059d393:; BB(0x0059d393);
    /* 0059d393: add esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0059d396: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0059d397: ret 4 */ FN_RET(0x0059d064); r_esp += 8; return;
L_0059d39a:; BB(0x0059d39a);
    /* 0059d39a: mov dword ptr [edi + 0x4ec], 0 */ W32((u32)(r_edi+0x4ecu), 0x0u);
    /* 0059d3a4: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0059d3a6: mov ecx, edi */ r_ecx = r_edi;
    /* 0059d3a8: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x59d3adu); f_0051f664();
    /* 0059d3ad: mov eax, dword ptr [edi + 0x3d0] */ r_eax = R32((u32)(r_edi+0x3d0u));
    /* 0059d3b3: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 0059d3b5: and eax, 0xfffffffd */ {  u32 a = r_eax; u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0059d3b8: mov dword ptr [edi + 0x3d0], eax */ W32((u32)(r_edi+0x3d0u), r_eax);
    /* 0059d3be: mov ecx, edi */ r_ecx = r_edi;
    /* 0059d3c0: call dword ptr [edx + 0x184] */ { u32 t = R32((u32)(r_edx+0x184u)); r_esp -= 4; W32(r_esp, 0x59d3c6u); call_ind(t); }
    /* 0059d3c6: mov ecx, edi */ r_ecx = r_edi;
    /* 0059d3c8: call 0x520f68 */ r_esp -= 4; W32(r_esp, 0x59d3cdu); f_00520f68();
    /* 0059d3cd: jmp 0x59d393 */ goto L_0059d393;
}

void f_0059d3d0(void) /* sub_59D3D0 */
{
    FN_ENTER(0x0059d3d0);
    /* 0059d3d0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0059d3d1: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0059d3d4: mov edi, ecx */ r_edi = r_ecx;
    /* 0059d3d6: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 0059d3da: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059d3dd: je 0x59d5d3 */ if (fZ) goto L_0059d5d3;
L_0059d3e3:; BB(0x0059d3e3);
    /* 0059d3e3: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059d3e6: je 0x59d3ff */ if (fZ) goto L_0059d3ff;
L_0059d3e8:; BB(0x0059d3e8);
    /* 0059d3e8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059d3ea: jne 0x59d5cc */ if (!fZ) goto L_0059d5cc;
L_0059d3f0:; BB(0x0059d3f0);
    /* 0059d3f0: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0059d3f2: mov ecx, edi */ r_ecx = r_edi;
    /* 0059d3f4: call dword ptr [eax + 0x168] */ { u32 t = R32((u32)(r_eax+0x168u)); r_esp -= 4; W32(r_esp, 0x59d3fau); call_ind(t); }
    /* 0059d3fa: jmp 0x59d5cc */ goto L_0059d5cc;
L_0059d3ff:; BB(0x0059d3ff);
    /* 0059d3ff: push dword ptr [0xa746c4] */ { u32 v = R32((u32)(0xa746c4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0059d405: mov ecx, edi */ r_ecx = r_edi;
    /* 0059d407: push dword ptr [0xa746c8] */ { u32 v = R32((u32)(0xa746c8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0059d40d: call 0x59ccec */ r_esp -= 4; W32(r_esp, 0x59d412u); f_0059ccec();
    /* 0059d412: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059d414: je 0x59d5cc */ if (fZ) goto L_0059d5cc;
L_0059d41a:; BB(0x0059d41a);
    /* 0059d41a: mov ecx, edi */ r_ecx = r_edi;
    /* 0059d41c: call 0x5213d8 */ r_esp -= 4; W32(r_esp, 0x59d421u); f_005213d8();
    /* 0059d421: mov ecx, edi */ r_ecx = r_edi;
    /* 0059d423: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x59d428u); f_00521410();
    /* 0059d428: fld dword ptr [edi + 0x3a8] */ FPUSH(R_F32((u32)(r_edi+0x3a8u)));
    /* 0059d42e: fld dword ptr [edi + 0x3b0] */ FPUSH(R_F32((u32)(r_edi+0x3b0u)));
    /* 0059d434: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0059d436: fchs  */ ST(0) = -ST(0);
    /* 0059d438: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0059d43a: fchs  */ ST(0) = -ST(0);
    /* 0059d43c: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0059d43e: fmul qword ptr [0x9298a8] */ ST(0) = ST(0) * R_F64((u32)(0x9298a8u));
    /* 0059d444: fdiv qword ptr [0x9298a0] */ ST(0) = ST(0) / R_F64((u32)(0x9298a0u));
    /* 0059d44a: fnstcw word ptr [esp + 0x24] */ W16((u32)(r_esp+0x24u), fcw);
    /* 0059d44e: movzx eax, word ptr [esp + 0x24] */ r_eax = (u32)R16((u32)(r_esp+0x24u));
    /* 0059d453: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0059d458: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 0059d45c: fldcw word ptr [esp + 0x2c] */ fcw = R16((u32)(r_esp+0x2cu));
    /* 0059d460: fistp dword ptr [edi + 0x3f8] */ W32((u32)(r_edi+0x3f8u), (u32)fx_int32(ST(0))); FPOP();
    /* 0059d466: fldcw word ptr [esp + 0x24] */ fcw = R16((u32)(r_esp+0x24u));
    /* 0059d46a: mov ecx, edi */ r_ecx = r_edi;
    /* 0059d46c: call 0x5213d8 */ r_esp -= 4; W32(r_esp, 0x59d471u); f_005213d8();
    /* 0059d471: mov ecx, edi */ r_ecx = r_edi;
    /* 0059d473: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x59d478u); f_00521410();
    /* 0059d478: mov ecx, dword ptr [edi + 0x3f8] */ r_ecx = R32((u32)(r_edi+0x3f8u));
    /* 0059d47e: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x59d483u); f_0082dcbc();
    /* 0059d483: fld dword ptr [0x92992c] */ FPUSH(R_F32((u32)(0x92992cu)));
    /* 0059d489: mov ecx, dword ptr [edi + 0x3f8] */ r_ecx = R32((u32)(r_edi+0x3f8u));
    /* 0059d48f: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0059d491: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0059d494: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 0059d49c: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x59d4a1u); f_0082ddd8();
    /* 0059d4a1: fld dword ptr [0x92992c] */ FPUSH(R_F32((u32)(0x92992cu)));
    /* 0059d4a7: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0059d4a9: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0059d4ad: lea edx, [edi + 0x39c] */ r_edx = (u32)(r_edi+0x39cu);
    /* 0059d4b3: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0059d4b6: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x59d4bbu); f_0082ebac();
    /* 0059d4bb: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0059d4be: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 0059d4c1: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x59d4c6u); f_0082f9c4();
    /* 0059d4c6: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0059d4c9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059d4ca: call 0x7828e4 */ r_esp -= 4; W32(r_esp, 0x59d4cfu); f_007828e4();
    /* 0059d4cf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0059d4d0: add esp, -0x10 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059d4d3: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0059d4d7: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0059d4db: mov ecx, edi */ r_ecx = r_edi;
    /* 0059d4dd: lea eax, [esp + 0x1c] */ r_eax = (u32)(r_esp+0x1cu);
    /* 0059d4e1: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0059d4e4: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0059d4e8: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0059d4ec: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0059d4f0: call 0x520a04 */ r_esp -= 4; W32(r_esp, 0x59d4f5u); f_00520a04();
    /* 0059d4f5: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0059d4f9: fld dword ptr [0x929924] */ FPUSH(R_F32((u32)(0x929924u)));
    /* 0059d4ff: fadd dword ptr [esp + 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x10u));
    /* 0059d503: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 0059d507: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 0059d50b: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0059d50f: lea eax, [edi + 0x128] */ r_eax = (u32)(r_edi+0x128u);
    /* 0059d515: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 0059d519: lea edx, [esp + 0x18] */ r_edx = (u32)(r_esp+0x18u);
    /* 0059d51d: push 0xe0 */ { u32 v = 0xe0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059d522: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059d523: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059d524: call 0x7806dc */ r_esp -= 4; W32(r_esp, 0x59d529u); f_007806dc();
    /* 0059d529: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059d52c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059d52e: jne 0x59d545 */ if (!fZ) goto L_0059d545;
L_0059d530:; BB(0x0059d530);
    /* 0059d530: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0059d534: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0059d538: mov dword ptr [edi + 0x38], eax */ W32((u32)(r_edi+0x38u), r_eax);
    /* 0059d53b: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0059d53f: mov dword ptr [edi + 0x3c], edx */ W32((u32)(r_edi+0x3cu), r_edx);
    /* 0059d542: mov dword ptr [edi + 0x40], eax */ W32((u32)(r_edi+0x40u), r_eax);
L_0059d545:; BB(0x0059d545);
    /* 0059d545: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0059d547: mov ecx, edi */ r_ecx = r_edi;
    /* 0059d549: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x59d54fu); call_ind(t); }
    /* 0059d54f: mov eax, dword ptr [edi + 0x38] */ r_eax = R32((u32)(r_edi+0x38u));
    /* 0059d552: mov edx, dword ptr [edi + 0x3c] */ r_edx = R32((u32)(r_edi+0x3cu));
    /* 0059d555: mov dword ptr [edi + 0x44], eax */ W32((u32)(r_edi+0x44u), r_eax);
    /* 0059d558: mov eax, dword ptr [edi + 0x40] */ r_eax = R32((u32)(r_edi+0x40u));
    /* 0059d55b: mov dword ptr [edi + 0x48], edx */ W32((u32)(r_edi+0x48u), r_edx);
    /* 0059d55e: mov dword ptr [edi + 0x4c], eax */ W32((u32)(r_edi+0x4cu), r_eax);
    /* 0059d561: mov ecx, edi */ r_ecx = r_edi;
    /* 0059d563: call 0x59c744 */ r_esp -= 4; W32(r_esp, 0x59d568u); f_0059c744();
    /* 0059d568: mov eax, dword ptr [edi + 0x3f8] */ r_eax = R32((u32)(r_edi+0x3f8u));
    /* 0059d56e: add eax, 0x8000 */ {  u32 a = r_eax; u32 b = 0x8000u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0059d573: mov dword ptr [edi + 0x60], eax */ W32((u32)(r_edi+0x60u), r_eax);
    /* 0059d576: mov ecx, edi */ r_ecx = r_edi;
    /* 0059d578: call 0x59c770 */ r_esp -= 4; W32(r_esp, 0x59d57du); f_0059c770();
    /* 0059d57d: mov eax, dword ptr [edi + 0x3f8] */ r_eax = R32((u32)(r_edi+0x3f8u));
    /* 0059d583: add eax, 0x2aaa */ {  u32 a = r_eax; u32 b = 0x2aaau; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0059d588: mov dword ptr [edi + 0x3f8], eax */ W32((u32)(r_edi+0x3f8u), r_eax);
    /* 0059d58e: mov ecx, edi */ r_ecx = r_edi;
    /* 0059d590: call 0x51ffdc */ r_esp -= 4; W32(r_esp, 0x59d595u); f_0051ffdc();
    /* 0059d595: mov dword ptr [esp + 0x30], ebx */ W32((u32)(r_esp+0x30u), r_ebx);
    /* 0059d599: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0059d59b: mov ebx, eax */ r_ebx = r_eax;
L_0059d59d:; BB(0x0059d59d);
    /* 0059d59d: movzx edx, word ptr [edi + ebx*2 + 0x3ec] */ r_edx = (u32)R16((u32)(r_edi+r_ebx*2+0x3ecu));
    /* 0059d5a5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059d5a6: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x59d5abu); f_007b4d18();
    /* 0059d5ab: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0059d5ac: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059d5ae: je 0x59d5b7 */ if (fZ) goto L_0059d5b7;
L_0059d5b0:; BB(0x0059d5b0);
    /* 0059d5b0: mov ecx, eax */ r_ecx = r_eax;
    /* 0059d5b2: call 0x59acb8 */ r_esp -= 4; W32(r_esp, 0x59d5b7u); f_0059acb8();
L_0059d5b7:; BB(0x0059d5b7);
    /* 0059d5b7: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0059d5ba: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059d5bd: jl 0x59d59d */ if ((fS!=fO)) goto L_0059d59d;
L_0059d5bf:; BB(0x0059d5bf);
    /* 0059d5bf: mov ebx, dword ptr [esp + 0x30] */ r_ebx = R32((u32)(r_esp+0x30u));
    /* 0059d5c3: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0059d5c5: mov ecx, edi */ r_ecx = r_edi;
    /* 0059d5c7: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x59d5ccu); f_0051f62c();
L_0059d5cc:; BB(0x0059d5cc);
    /* 0059d5cc: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0059d5cf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0059d5d0: ret 4 */ FN_RET(0x0059d3d0); r_esp += 8; return;
L_0059d5d3:; BB(0x0059d5d3);
    /* 0059d5d3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0059d5d5: mov ecx, edi */ r_ecx = r_edi;
    /* 0059d5d7: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x59d5dcu); f_0051f664();
    /* 0059d5dc: mov eax, dword ptr [edi + 0x50] */ r_eax = R32((u32)(r_edi+0x50u));
    /* 0059d5df: mov edx, dword ptr [edi + 0x54] */ r_edx = R32((u32)(r_edi+0x54u));
    /* 0059d5e2: mov ecx, dword ptr [edi + 0x58] */ r_ecx = R32((u32)(r_edi+0x58u));
    /* 0059d5e5: mov dword ptr [edi + 0x38], eax */ W32((u32)(r_edi+0x38u), r_eax);
    /* 0059d5e8: mov dword ptr [edi + 0x3c], edx */ W32((u32)(r_edi+0x3cu), r_edx);
    /* 0059d5eb: mov dword ptr [edi + 0x40], ecx */ W32((u32)(r_edi+0x40u), r_ecx);
    /* 0059d5ee: mov dword ptr [edi + 0x44], eax */ W32((u32)(r_edi+0x44u), r_eax);
    /* 0059d5f1: mov dword ptr [edi + 0x48], edx */ W32((u32)(r_edi+0x48u), r_edx);
    /* 0059d5f4: mov dword ptr [edi + 0x4c], ecx */ W32((u32)(r_edi+0x4cu), r_ecx);
    /* 0059d5f7: mov dword ptr [edi + 0x300], eax */ W32((u32)(r_edi+0x300u), r_eax);
    /* 0059d5fd: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0059d5ff: mov dword ptr [edi + 0x304], edx */ W32((u32)(r_edi+0x304u), r_edx);
    /* 0059d605: mov dword ptr [edi + 0x308], ecx */ W32((u32)(r_edi+0x308u), r_ecx);
    /* 0059d60b: mov ecx, edi */ r_ecx = r_edi;
    /* 0059d60d: call dword ptr [eax + 0x184] */ { u32 t = R32((u32)(r_eax+0x184u)); r_esp -= 4; W32(r_esp, 0x59d613u); call_ind(t); }
    /* 0059d613: jmp 0x59d5cc */ goto L_0059d5cc;
}

void f_0059d618(void) /* sub_59D618 */
{
    FN_ENTER(0x0059d618);
    /* 0059d618: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 0059d61f: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0059d622: je 0x59d63b */ if (fZ) goto L_0059d63b;
L_0059d624:; BB(0x0059d624);
    /* 0059d624: mov eax, dword ptr [ecx + 0x3d0] */ r_eax = R32((u32)(r_ecx+0x3d0u));
    /* 0059d62a: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0059d62c: jne 0x59d636 */ if (!fZ) goto L_0059d636;
L_0059d62e:; BB(0x0059d62e);
    /* 0059d62e: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0059d630: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x59d635u); f_0051f62c();
    /* 0059d635: ret  */ FN_RET(0x0059d618); r_esp += 4; return;
L_0059d636:; BB(0x0059d636);
    /* 0059d636: call 0x51f81c */ r_esp -= 4; W32(r_esp, 0x59d63bu); f_0051f81c();
L_0059d63b:; BB(0x0059d63b);
    /* 0059d63b: ret  */ FN_RET(0x0059d618); r_esp += 4; return;
}

void f_0059d6ac(void)
{
    FN_ENTER(0x0059d6ac);
    /* 0059d6ac: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0059d6ad: mov ebp, esp */ r_ebp = r_esp;
    /* 0059d6af: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0059d6b1: push 0x8d86dc */ { u32 v = 0x8d86dcu; r_esp -= 4; W32(r_esp, v); }
    /* 0059d6b6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0059d6bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059d6bd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0059d6c4: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0059d6c7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0059d6ca: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0059d6cd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0059d6d0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0059d6d3: mov dword ptr [0xa746dc], 0 */ W32((u32)(0xa746dcu), 0x0u);
    /* 0059d6dd: mov dword ptr [0xa746e0], 0 */ W32((u32)(0xa746e0u), 0x0u);
    /* 0059d6e7: mov dword ptr [0xa746e4], 0 */ W32((u32)(0xa746e4u), 0x0u);
    /* 0059d6f1: call 0x520e6c */ r_esp -= 4; W32(r_esp, 0x59d6f6u); f_00520e6c();
    /* 0059d6f6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059d6f8: je 0x59d713 */ if (fZ) goto L_0059d713;
L_0059d6fa:; BB(0x0059d6fa);
    /* 0059d6fa: push 0x929ad4 */ { u32 v = 0x929ad4u; r_esp -= 4; W32(r_esp, v); }
    /* 0059d6ff: push 0x9bff30 */ { u32 v = 0x9bff30u; r_esp -= 4; W32(r_esp, v); }
    /* 0059d704: call 0x51f674 */ r_esp -= 4; W32(r_esp, 0x59d709u); f_0051f674();
    /* 0059d709: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059d70c: mov dword ptr [0xa7470c], eax */ W32((u32)(0xa7470cu), r_eax);
    /* 0059d711: jmp 0x59d723 */ goto L_0059d723;
L_0059d713:; BB(0x0059d713);
    /* 0059d713: push 0x9bff30 */ { u32 v = 0x9bff30u; r_esp -= 4; W32(r_esp, v); }
    /* 0059d718: call 0x51f6b0 */ r_esp -= 4; W32(r_esp, 0x59d71du); f_0051f6b0();
    /* 0059d71d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0059d71e: mov dword ptr [0xa7470c], eax */ W32((u32)(0xa7470cu), r_eax);
L_0059d723:; BB(0x0059d723);
    /* 0059d723: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0059d725: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x59d72au); f_0077a684();
    /* 0059d72a: mov dword ptr [0xa746f4], eax */ W32((u32)(0xa746f4u), r_eax);
    /* 0059d72f: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0059d731: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x59d736u); f_0077a698();
    /* 0059d736: mov dword ptr [0xa746f0], eax */ W32((u32)(0xa746f0u), r_eax);
    /* 0059d73b: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0059d73d: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x59d742u); f_0077a6b4();
    /* 0059d742: mov dword ptr [0xa746ec], eax */ W32((u32)(0xa746ecu), r_eax);
    /* 0059d747: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0059d749: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x59d74eu); f_0077a6cc();
    /* 0059d74e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059d751: mov dword ptr [0xa74700], 0 */ W32((u32)(0xa74700u), 0x0u);
    /* 0059d75b: mov dword ptr [0xa746e8], eax */ W32((u32)(0xa746e8u), r_eax);
    /* 0059d760: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0059d762: mov dword ptr [0xa74708], eax */ W32((u32)(0xa74708u), r_eax);
    /* 0059d767: mov dword ptr [0xa74704], eax */ W32((u32)(0xa74704u), r_eax);
    /* 0059d76c: mov dword ptr [0xa746fc], eax */ W32((u32)(0xa746fcu), r_eax);
    /* 0059d771: call 0x59ad7c */ r_esp -= 4; W32(r_esp, 0x59d776u); f_0059ad7c();
    /* 0059d776: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 0059d77d: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0059d77f: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x59d784u); f_008581c5();
    /* 0059d784: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0059d785: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0059d788: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059d78a: je 0x59d840 */ if (fZ) goto L_0059d840;
L_0059d790:; BB(0x0059d790);
    /* 0059d790: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 0059d797: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0059d79e: mov eax, dword ptr [0xa7470c] */ r_eax = R32((u32)(0xa7470cu));
    /* 0059d7a3: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0059d7a6: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0059d7a8: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 0059d7ae: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0059d7b1: call 0x52d584 */ r_esp -= 4; W32(r_esp, 0x59d7b6u); f_0052d584();
    /* 0059d7b6: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0059d7b9: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 0059d7c0: mov dword ptr [0xa746f8], eax */ W32((u32)(0xa746f8u), r_eax);
    /* 0059d7c5: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0059d7cc: mov eax, dword ptr [0x929894] */ r_eax = R32((u32)(0x929894u));
    /* 0059d7d1: movzx edx, word ptr [0x929898] */ r_edx = (u32)R16((u32)(0x929898u));
    /* 0059d7d8: movzx ecx, word ptr [0x92989a] */ r_ecx = (u32)R16((u32)(0x92989au));
    /* 0059d7df: movzx ebx, word ptr [0x92989c] */ r_ebx = (u32)R16((u32)(0x92989cu));
    /* 0059d7e6: mov edi, dword ptr [0xa7470c] */ r_edi = R32((u32)(0xa7470cu));
    /* 0059d7ec: mov esi, dword ptr [edi + 0x430] */ r_esi = R32((u32)(r_edi+0x430u));
    /* 0059d7f2: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0059d7f5: mov word ptr [ebp - 0x24], dx */ W16((u32)(r_ebp+0xffffffdcu), (u16)r_edx);
    /* 0059d7f9: mov edx, dword ptr [edi + 0x42c] */ r_edx = R32((u32)(r_edi+0x42cu));
    /* 0059d7ff: mov word ptr [ebp - 0x22], cx */ W16((u32)(r_ebp+0xffffffdeu), (u16)r_ecx);
    /* 0059d803: mov word ptr [ebp - 0x20], bx */ W16((u32)(r_ebp+0xffffffe0u), (u16)r_ebx);
    /* 0059d807: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
    /* 0059d80a: lea eax, [ebp - 0x2c] */ r_eax = (u32)(r_ebp+0xffffffd4u);
    /* 0059d80d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059d80e: push 0x41700000 */ { u32 v = 0x41700000u; r_esp -= 4; W32(r_esp, v); }
    /* 0059d813: push dword ptr [0x9bff6c] */ { u32 v = R32((u32)(0x9bff6cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0059d819: push dword ptr [edx + 0xc] */ { u32 v = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0059d81c: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0059d81f: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 0059d821: call 0x608470 */ r_esp -= 4; W32(r_esp, 0x59d826u); f_00608470();
    /* 0059d826: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0059d829: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0059d82c: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0059d82f: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0059d832: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0059d835: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0059d83c: mov esp, ebp */ r_esp = r_ebp;
    /* 0059d83e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059d83f: ret  */ FN_RET(0x0059d6ac); r_esp += 4; return;
L_0059d840:; BB(0x0059d840);
    /* 0059d840: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0059d842: jmp 0x59d7c0 */ f_0059d7c0(); return;
}

void f_0059d848(void) /* sub_59D848 */
{
    FN_ENTER(0x0059d848);
    /* 0059d848: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0059d84c: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0059d84f: je 0x59d879 */ if (fZ) goto L_0059d879;
L_0059d851:; BB(0x0059d851);
    /* 0059d851: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059d854: je 0x59d864 */ if (fZ) goto L_0059d864;
L_0059d856:; BB(0x0059d856);
    /* 0059d856: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0059d858: jne 0x59d876 */ if (!fZ) goto L_0059d876;
L_0059d85a:; BB(0x0059d85a);
    /* 0059d85a: add dword ptr [ecx + 0x4ec], 1 */ { u32 ad = (u32)(r_ecx+0x4ecu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0059d861: ret 4 */ FN_RET(0x0059d848); r_esp += 8; return;
L_0059d864:; BB(0x0059d864);
    /* 0059d864: mov eax, dword ptr [ecx + 0x4ec] */ r_eax = R32((u32)(r_ecx+0x4ecu));
    /* 0059d86a: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0059d86d: jl 0x59d876 */ if ((fS!=fO)) goto L_0059d876;
L_0059d86f:; BB(0x0059d86f);
    /* 0059d86f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0059d871: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x59d876u); f_0051f62c();
L_0059d876:; BB(0x0059d876);
    /* 0059d876: ret 4 */ FN_RET(0x0059d848); r_esp += 8; return;
L_0059d879:; BB(0x0059d879);
    /* 0059d879: mov dword ptr [ecx + 0x4ec], 0 */ W32((u32)(r_ecx+0x4ecu), 0x0u);
    /* 0059d883: ret 4 */ FN_RET(0x0059d848); r_esp += 8; return;
}

void f_0059d888(void) /* sub_59D888 */
{
    FN_ENTER(0x0059d888);
    /* 0059d888: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0059d889: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0059d88b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0059d88d: call 0x5218d4 */ r_esp -= 4; W32(r_esp, 0x59d892u); f_005218d4();
    /* 0059d892: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059d894: je 0x59d8a7 */ if (fZ) goto L_0059d8a7;
L_0059d896:; BB(0x0059d896);
    /* 0059d896: mov edx, dword ptr [ebx + 0x3d0] */ r_edx = R32((u32)(r_ebx+0x3d0u));
    /* 0059d89c: or edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0059d89f: mov dword ptr [ebx + 0x3d0], edx */ W32((u32)(r_ebx+0x3d0u), r_edx);
    /* 0059d8a5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0059d8a6: ret  */ FN_RET(0x0059d888); r_esp += 4; return;
L_0059d8a7:; BB(0x0059d8a7);
    /* 0059d8a7: mov edx, dword ptr [ebx + 0x3d0] */ r_edx = R32((u32)(r_ebx+0x3d0u));
    /* 0059d8ad: and edx, 0xffffffef */ {  u32 a = r_edx; u32 b = 0xffffffefu; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0059d8b0: mov dword ptr [ebx + 0x3d0], edx */ W32((u32)(r_ebx+0x3d0u), r_edx);
    /* 0059d8b6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0059d8b7: ret  */ FN_RET(0x0059d888); r_esp += 4; return;
}

void f_0059d8b8(void) /* sub_59D8B8 */
{
    FN_ENTER(0x0059d8b8);
    /* 0059d8b8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0059d8b9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0059d8ba: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0059d8bb: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0059d8bd: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0059d8bf: call 0x521840 */ r_esp -= 4; W32(r_esp, 0x59d8c4u); f_00521840();
    /* 0059d8c4: mov esi, dword ptr [0xa7470c] */ r_esi = R32((u32)(0xa7470cu));
    /* 0059d8ca: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0059d8cc: mov eax, dword ptr [esi + 0x42c] */ r_eax = R32((u32)(r_esi+0x42cu));
    /* 0059d8d2: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 0059d8d5: mov dword ptr [ebx + 0x34], edx */ W32((u32)(r_ebx+0x34u), r_edx);
    /* 0059d8d8: push 0x9bff60 */ { u32 v = 0x9bff60u; r_esp -= 4; W32(r_esp, v); }
    /* 0059d8dd: mov edi, dword ptr [esi + 0x42c] */ r_edi = R32((u32)(r_esi+0x42cu));
    /* 0059d8e3: mov eax, dword ptr [edi + 0xc] */ r_eax = R32((u32)(r_edi+0xcu));
    /* 0059d8e6: mov dword ptr [ebx + 0x24], eax */ W32((u32)(r_ebx+0x24u), r_eax);
    /* 0059d8e9: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0059d8eb: call 0x51ff3c */ r_esp -= 4; W32(r_esp, 0x59d8f0u); f_0051ff3c();
    /* 0059d8f0: mov eax, dword ptr [0xa7470c] */ r_eax = R32((u32)(0xa7470cu));
    /* 0059d8f5: mov dword ptr [ebx + 0xd8], 0x9bfe80 */ W32((u32)(r_ebx+0xd8u), 0x9bfe80u);
    /* 0059d8ff: mov edx, dword ptr [eax + 0x430] */ r_edx = R32((u32)(r_eax+0x430u));
    /* 0059d905: mov dword ptr [ebx + 0xdc], edx */ W32((u32)(r_ebx+0xdcu), r_edx);
    /* 0059d90b: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0059d90d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0059d90e: mov word ptr [ebx + 0xb8], si */ W16((u32)(r_ebx+0xb8u), (u16)r_esi);
    /* 0059d915: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0059d917: call 0x7aa4c8 */ r_esp -= 4; W32(r_esp, 0x59d91cu); f_007aa4c8();
    /* 0059d91c: push dword ptr [0xa746ec] */ { u32 v = R32((u32)(0xa746ecu)); r_esp -= 4; W32(r_esp, v); }
    /* 0059d922: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0059d924: movzx eax, word ptr [ebx + 0xb8] */ r_eax = (u32)R16((u32)(r_ebx+0xb8u));
    /* 0059d92b: push dword ptr [0xa746f0] */ { u32 v = R32((u32)(0xa746f0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0059d931: push dword ptr [0xa746f4] */ { u32 v = R32((u32)(0xa746f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0059d937: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 0059d93e: call 0x520c70 */ r_esp -= 4; W32(r_esp, 0x59d943u); f_00520c70();
    /* 0059d943: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0059d945: call 0x520380 */ r_esp -= 4; W32(r_esp, 0x59d94au); f_00520380();
    /* 0059d94a: mov dword ptr [ebx + 0x358], 0x9bff44 */ W32((u32)(r_ebx+0x358u), 0x9bff44u);
    /* 0059d954: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0059d956: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0059d958: call 0x520390 */ r_esp -= 4; W32(r_esp, 0x59d95du); f_00520390();
    /* 0059d95d: mov dword ptr [ebx + 0x384], 0x41700000 */ W32((u32)(r_ebx+0x384u), 0x41700000u);
    /* 0059d967: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 0059d969: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0059d96b: call 0x521820 */ r_esp -= 4; W32(r_esp, 0x59d970u); f_00521820();
    /* 0059d970: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 0059d972: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0059d974: call 0x5217fc */ r_esp -= 4; W32(r_esp, 0x59d979u); f_005217fc();
    /* 0059d979: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0059d97b: call 0x520bdc */ r_esp -= 4; W32(r_esp, 0x59d980u); f_00520bdc();
    /* 0059d980: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0059d982: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0059d984: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0059d986: mov word ptr [ebx + 0x32e], ax */ W16((u32)(r_ebx+0x32eu), (u16)r_eax);
    /* 0059d98d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0059d98f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059d990: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x59d996u); call_ind(t); }
    /* 0059d996: mov edi, dword ptr [ebx + 0x38] */ r_edi = R32((u32)(r_ebx+0x38u));
    /* 0059d999: mov eax, dword ptr [ebx + 0x3c] */ r_eax = R32((u32)(r_ebx+0x3cu));
    /* 0059d99c: mov edx, dword ptr [ebx + 0x40] */ r_edx = R32((u32)(r_ebx+0x40u));
    /* 0059d99f: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0059d9a1: mov word ptr [ebx + 0x3c8], si */ W16((u32)(r_ebx+0x3c8u), (u16)r_esi);
    /* 0059d9a8: mov dword ptr [ebx + 0x3d0], esi */ W32((u32)(r_ebx+0x3d0u), r_esi);
    /* 0059d9ae: mov dword ptr [ebx + 0x3cc], 0 */ W32((u32)(r_ebx+0x3ccu), 0x0u);
    /* 0059d9b8: mov dword ptr [ebx + 0x3d4], edi */ W32((u32)(r_ebx+0x3d4u), r_edi);
    /* 0059d9be: mov dword ptr [ebx + 0x3d8], eax */ W32((u32)(r_ebx+0x3d8u), r_eax);
    /* 0059d9c4: mov dword ptr [ebx + 0x3dc], edx */ W32((u32)(r_ebx+0x3dcu), r_edx);
    /* 0059d9ca: mov dword ptr [ebx + 0x3e0], edi */ W32((u32)(r_ebx+0x3e0u), r_edi);
    /* 0059d9d0: movsx edi, word ptr [ebx + 0x2c] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ebx+0x2cu));
    /* 0059d9d4: mov dword ptr [ebx + 0x3e4], eax */ W32((u32)(r_ebx+0x3e4u), r_eax);
    /* 0059d9da: movzx eax, word ptr [ebx + 0x1c] */ r_eax = (u32)R16((u32)(r_ebx+0x1cu));
    /* 0059d9de: mov dword ptr [ebx + 0x3e8], edx */ W32((u32)(r_ebx+0x3e8u), r_edx);
    /* 0059d9e4: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0059d9e7: movzx edx, ax */ r_edx = (u32)(u16)r_eax;
    /* 0059d9ea: lea eax, [edi + 1] */ r_eax = (u32)(r_edi+0x1u);
    /* 0059d9ed: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059d9ee: mov word ptr [ebx + 0x3ec], dx */ W16((u32)(r_ebx+0x3ecu), (u16)r_edx);
    /* 0059d9f5: lea esi, [edx + 1] */ r_esi = (u32)(r_edx+0x1u);
    /* 0059d9f8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059d9f9: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0059d9fc: lea ecx, [ebx + 0x3d4] */ r_ecx = (u32)(r_ebx+0x3d4u);
    /* 0059da02: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0059da03: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0059da04: call 0x59a2b0 */ r_esp -= 4; W32(r_esp, 0x59da09u); f_0059a2b0();
    /* 0059da09: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0059da0a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0059da0b: mov word ptr [ebx + 0x3ee], si */ W16((u32)(r_ebx+0x3eeu), (u16)r_esi);
    /* 0059da12: lea eax, [ebx + 0x3e0] */ r_eax = (u32)(r_ebx+0x3e0u);
    /* 0059da18: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059da19: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0059da1a: call 0x59a340 */ r_esp -= 4; W32(r_esp, 0x59da1fu); f_0059a340();
    /* 0059da1f: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059da22: movsx edx, word ptr [ebx + 0x2d0] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x2d0u));
    /* 0059da29: mov esi, dword ptr [ebx + 0x404] */ r_esi = R32((u32)(r_ebx+0x404u));
    /* 0059da2f: mov dword ptr [ebx + 0x400], 0x3f800000 */ W32((u32)(r_ebx+0x400u), 0x3f800000u);
    /* 0059da39: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0059da3b: mov dword ptr [ebx + 0x3f0], eax */ W32((u32)(r_ebx+0x3f0u), r_eax);
    /* 0059da41: mov dword ptr [ebx + 0x3f4], eax */ W32((u32)(r_ebx+0x3f4u), r_eax);
    /* 0059da47: mov dword ptr [ebx + 0x3f8], eax */ W32((u32)(r_ebx+0x3f8u), r_eax);
    /* 0059da4d: mov dword ptr [ebx + 0x3fc], edx */ W32((u32)(r_ebx+0x3fcu), r_edx);
    /* 0059da53: lea ecx, [ebx + 0x404] */ r_ecx = (u32)(r_ebx+0x404u);
    /* 0059da59: call dword ptr [esi + 0xc] */ { u32 t = R32((u32)(r_esi+0xcu)); r_esp -= 4; W32(r_esp, 0x59da5cu); call_ind(t); }
    /* 0059da5c: mov dword ptr [ebx + 0x420], 0 */ W32((u32)(r_ebx+0x420u), 0x0u);
    /* 0059da66: lea edi, [ebx + 0x47c] */ r_edi = (u32)(r_ebx+0x47cu);
    /* 0059da6c: lea esi, [ebx + 0x4ec] */ r_esi = (u32)(r_ebx+0x4ecu);
L_0059da72:; BB(0x0059da72);
    /* 0059da72: mov ecx, edi */ r_ecx = r_edi;
    /* 0059da74: call 0x57739c */ r_esp -= 4; W32(r_esp, 0x59da79u); f_0057739c();
    /* 0059da79: add edi, 0x1c */ {  u32 a = r_edi; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0059da7c: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059da7e: jg 0x59da72 */ if ((!fZ&&fS==fO)) goto L_0059da72;
L_0059da80:; BB(0x0059da80);
    /* 0059da80: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0059da82: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0059da84: call dword ptr [eax + 0x174] */ { u32 t = R32((u32)(r_eax+0x174u)); r_esp -= 4; W32(r_esp, 0x59da8au); call_ind(t); }
    /* 0059da8a: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0059da8c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0059da8e: call dword ptr [eax + 0x180] */ { u32 t = R32((u32)(r_eax+0x180u)); r_esp -= 4; W32(r_esp, 0x59da94u); call_ind(t); }
    /* 0059da94: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_0059da96:; BB(0x0059da96);
    /* 0059da96: movzx eax, word ptr [ebx + esi*2 + 0x3ec] */ r_eax = (u32)R16((u32)(r_ebx+r_esi*2+0x3ecu));
    /* 0059da9e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059da9f: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x59daa4u); f_007b4d18();
    /* 0059daa4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0059daa5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059daa7: je 0x59dab0 */ if (fZ) goto L_0059dab0;
L_0059daa9:; BB(0x0059daa9);
    /* 0059daa9: mov ecx, eax */ r_ecx = r_eax;
    /* 0059daab: call 0x59ac9c */ r_esp -= 4; W32(r_esp, 0x59dab0u); f_0059ac9c();
L_0059dab0:; BB(0x0059dab0);
    /* 0059dab0: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0059dab3: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0059dab6: jl 0x59da96 */ if ((fS!=fO)) goto L_0059da96;
L_0059dab8:; BB(0x0059dab8);
    /* 0059dab8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0059dab9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0059daba: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0059dabb: ret  */ FN_RET(0x0059d8b8); r_esp += 4; return;
}

void f_0059d920(void)
{
    FN_ENTER(0x0059d920);
    /* 0059d920: cmpsd dword ptr [esi], dword ptr es:[edi] */ { u32 a = R32(r_esi); u32 b = R32(r_edi); u32 r = (a - b) & 0xffffffffu; r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;  }
    /* 0059d921: add byte ptr [ebx - 0x7c48f035], cl */ { u32 ad = (u32)(r_ebx+0x83b70fcbu);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0059d927: mov eax, 0xff000000 */ r_eax = 0xff000000u;
    /* 0059d92c: xor eax, 0xa746f0 */ {  u32 a = r_eax; u32 b = 0xa746f0u; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0059d931: push dword ptr [0xa746f4] */ { u32 v = R32((u32)(0xa746f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0059d937: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 0059d93e: call 0x520c70 */ r_esp -= 4; W32(r_esp, 0x59d943u); f_00520c70();
    /* 0059d943: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0059d945: call 0x520380 */ r_esp -= 4; W32(r_esp, 0x59d94au); f_00520380();
    /* 0059d94a: mov dword ptr [ebx + 0x358], 0x9bff44 */ W32((u32)(r_ebx+0x358u), 0x9bff44u);
    /* 0059d954: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0059d956: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0059d958: call 0x520390 */ r_esp -= 4; W32(r_esp, 0x59d95du); f_00520390();
    /* 0059d95d: mov dword ptr [ebx + 0x384], 0x41700000 */ W32((u32)(r_ebx+0x384u), 0x41700000u);
    /* 0059d967: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 0059d969: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0059d96b: call 0x521820 */ r_esp -= 4; W32(r_esp, 0x59d970u); f_00521820();
    /* 0059d970: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 0059d972: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0059d974: call 0x5217fc */ r_esp -= 4; W32(r_esp, 0x59d979u); f_005217fc();
    /* 0059d979: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0059d97b: call 0x520bdc */ r_esp -= 4; W32(r_esp, 0x59d980u); f_00520bdc();
    /* 0059d980: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0059d982: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0059d984: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0059d986: mov word ptr [ebx + 0x32e], ax */ W16((u32)(r_ebx+0x32eu), (u16)r_eax);
    /* 0059d98d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0059d98f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059d990: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x59d996u); call_ind(t); }
    /* 0059d996: mov edi, dword ptr [ebx + 0x38] */ r_edi = R32((u32)(r_ebx+0x38u));
    /* 0059d999: mov eax, dword ptr [ebx + 0x3c] */ r_eax = R32((u32)(r_ebx+0x3cu));
    /* 0059d99c: mov edx, dword ptr [ebx + 0x40] */ r_edx = R32((u32)(r_ebx+0x40u));
    /* 0059d99f: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0059d9a1: mov word ptr [ebx + 0x3c8], si */ W16((u32)(r_ebx+0x3c8u), (u16)r_esi);
    /* 0059d9a8: mov dword ptr [ebx + 0x3d0], esi */ W32((u32)(r_ebx+0x3d0u), r_esi);
    /* 0059d9ae: mov dword ptr [ebx + 0x3cc], 0 */ W32((u32)(r_ebx+0x3ccu), 0x0u);
    /* 0059d9b8: mov dword ptr [ebx + 0x3d4], edi */ W32((u32)(r_ebx+0x3d4u), r_edi);
    /* 0059d9be: mov dword ptr [ebx + 0x3d8], eax */ W32((u32)(r_ebx+0x3d8u), r_eax);
    /* 0059d9c4: mov dword ptr [ebx + 0x3dc], edx */ W32((u32)(r_ebx+0x3dcu), r_edx);
    /* 0059d9ca: mov dword ptr [ebx + 0x3e0], edi */ W32((u32)(r_ebx+0x3e0u), r_edi);
    /* 0059d9d0: movsx edi, word ptr [ebx + 0x2c] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ebx+0x2cu));
    /* 0059d9d4: mov dword ptr [ebx + 0x3e4], eax */ W32((u32)(r_ebx+0x3e4u), r_eax);
    /* 0059d9da: movzx eax, word ptr [ebx + 0x1c] */ r_eax = (u32)R16((u32)(r_ebx+0x1cu));
    /* 0059d9de: mov dword ptr [ebx + 0x3e8], edx */ W32((u32)(r_ebx+0x3e8u), r_edx);
    /* 0059d9e4: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0059d9e7: movzx edx, ax */ r_edx = (u32)(u16)r_eax;
    /* 0059d9ea: lea eax, [edi + 1] */ r_eax = (u32)(r_edi+0x1u);
    /* 0059d9ed: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059d9ee: mov word ptr [ebx + 0x3ec], dx */ W16((u32)(r_ebx+0x3ecu), (u16)r_edx);
    /* 0059d9f5: lea esi, [edx + 1] */ r_esi = (u32)(r_edx+0x1u);
    /* 0059d9f8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059d9f9: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0059d9fc: lea ecx, [ebx + 0x3d4] */ r_ecx = (u32)(r_ebx+0x3d4u);
    /* 0059da02: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0059da03: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0059da04: call 0x59a2b0 */ r_esp -= 4; W32(r_esp, 0x59da09u); f_0059a2b0();
    /* 0059da09: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0059da0a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0059da0b: mov word ptr [ebx + 0x3ee], si */ W16((u32)(r_ebx+0x3eeu), (u16)r_esi);
    /* 0059da12: lea eax, [ebx + 0x3e0] */ r_eax = (u32)(r_ebx+0x3e0u);
    /* 0059da18: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059da19: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0059da1a: call 0x59a340 */ r_esp -= 4; W32(r_esp, 0x59da1fu); f_0059a340();
    /* 0059da1f: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059da22: movsx edx, word ptr [ebx + 0x2d0] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x2d0u));
    /* 0059da29: mov esi, dword ptr [ebx + 0x404] */ r_esi = R32((u32)(r_ebx+0x404u));
    /* 0059da2f: mov dword ptr [ebx + 0x400], 0x3f800000 */ W32((u32)(r_ebx+0x400u), 0x3f800000u);
    /* 0059da39: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0059da3b: mov dword ptr [ebx + 0x3f0], eax */ W32((u32)(r_ebx+0x3f0u), r_eax);
    /* 0059da41: mov dword ptr [ebx + 0x3f4], eax */ W32((u32)(r_ebx+0x3f4u), r_eax);
    /* 0059da47: mov dword ptr [ebx + 0x3f8], eax */ W32((u32)(r_ebx+0x3f8u), r_eax);
    /* 0059da4d: mov dword ptr [ebx + 0x3fc], edx */ W32((u32)(r_ebx+0x3fcu), r_edx);
    /* 0059da53: lea ecx, [ebx + 0x404] */ r_ecx = (u32)(r_ebx+0x404u);
    /* 0059da59: call dword ptr [esi + 0xc] */ { u32 t = R32((u32)(r_esi+0xcu)); r_esp -= 4; W32(r_esp, 0x59da5cu); call_ind(t); }
    /* 0059da5c: mov dword ptr [ebx + 0x420], 0 */ W32((u32)(r_ebx+0x420u), 0x0u);
    /* 0059da66: lea edi, [ebx + 0x47c] */ r_edi = (u32)(r_ebx+0x47cu);
    /* 0059da6c: lea esi, [ebx + 0x4ec] */ r_esi = (u32)(r_ebx+0x4ecu);
L_0059da72:; BB(0x0059da72);
    /* 0059da72: mov ecx, edi */ r_ecx = r_edi;
    /* 0059da74: call 0x57739c */ r_esp -= 4; W32(r_esp, 0x59da79u); f_0057739c();
    /* 0059da79: add edi, 0x1c */ {  u32 a = r_edi; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0059da7c: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059da7e: jg 0x59da72 */ if ((!fZ&&fS==fO)) goto L_0059da72;
L_0059da80:; BB(0x0059da80);
    /* 0059da80: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0059da82: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0059da84: call dword ptr [eax + 0x174] */ { u32 t = R32((u32)(r_eax+0x174u)); r_esp -= 4; W32(r_esp, 0x59da8au); call_ind(t); }
    /* 0059da8a: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0059da8c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0059da8e: call dword ptr [eax + 0x180] */ { u32 t = R32((u32)(r_eax+0x180u)); r_esp -= 4; W32(r_esp, 0x59da94u); call_ind(t); }
    /* 0059da94: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_0059da96:; BB(0x0059da96);
    /* 0059da96: movzx eax, word ptr [ebx + esi*2 + 0x3ec] */ r_eax = (u32)R16((u32)(r_ebx+r_esi*2+0x3ecu));
    /* 0059da9e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059da9f: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x59daa4u); f_007b4d18();
    /* 0059daa4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0059daa5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059daa7: je 0x59dab0 */ if (fZ) goto L_0059dab0;
L_0059daa9:; BB(0x0059daa9);
    /* 0059daa9: mov ecx, eax */ r_ecx = r_eax;
    /* 0059daab: call 0x59ac9c */ r_esp -= 4; W32(r_esp, 0x59dab0u); f_0059ac9c();
L_0059dab0:; BB(0x0059dab0);
    /* 0059dab0: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0059dab3: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0059dab6: jl 0x59da96 */ if ((fS!=fO)) goto L_0059da96;
L_0059dab8:; BB(0x0059dab8);
    /* 0059dab8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0059dab9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0059daba: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0059dabb: ret  */ FN_RET(0x0059d920); r_esp += 4; return;
}

void f_0059dabc(void) /* sub_59DABC */
{
    FN_ENTER(0x0059dabc);
    /* 0059dabc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0059dabd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0059dabf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0059dac1: call 0x59db54 */ r_esp -= 4; W32(r_esp, 0x59dac6u); f_0059db54();
    /* 0059dac6: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0059daca: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0059dacc: jne 0x59dad2 */ if (!fZ) goto L_0059dad2;
L_0059dace:; BB(0x0059dace);
    /* 0059dace: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0059dacf: ret 4 */ FN_RET(0x0059dabc); r_esp += 8; return;
L_0059dad2:; BB(0x0059dad2);
    /* 0059dad2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0059dad3: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x59dad8u); f_005c2f74();
    /* 0059dad8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0059dad9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0059dada: ret 4 */ FN_RET(0x0059dabc); r_esp += 8; return;
}

void f_0059dae0(void) /* sub_59DAE0 */
{
    FN_ENTER(0x0059dae0);
    /* 0059dae0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0059dae1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0059dae3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0059dae5: call 0x59db04 */ r_esp -= 4; W32(r_esp, 0x59daeau); f_0059db04();
    /* 0059daea: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0059daee: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0059daf0: jne 0x59daf6 */ if (!fZ) goto L_0059daf6;
L_0059daf2:; BB(0x0059daf2);
    /* 0059daf2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0059daf3: ret 4 */ FN_RET(0x0059dae0); r_esp += 8; return;
L_0059daf6:; BB(0x0059daf6);
    /* 0059daf6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0059daf7: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x59dafcu); f_005c2f74();
    /* 0059dafc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0059dafd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0059dafe: ret 4 */ FN_RET(0x0059dae0); r_esp += 8; return;
}

void f_0059db04(void) /* sub_59DB04 */
{
    FN_ENTER(0x0059db04);
    /* 0059db04: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0059db05: mov ebp, esp */ r_ebp = r_esp;
    /* 0059db07: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0059db09: push 0x8d86f8 */ { u32 v = 0x8d86f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0059db0e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0059db14: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059db15: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0059db1c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0059db1f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0059db22: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0059db25: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0059db28: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0059db2b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0059db2e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0059db31: mov dword ptr [ecx], 0xb0a120 */ W32((u32)(r_ecx), 0xb0a120u);
    /* 0059db37: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0059db3e: call 0x59db54 */ r_esp -= 4; W32(r_esp, 0x59db43u); f_0059db54();
    /* 0059db43: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0059db46: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0059db4d: mov esp, ebp */ r_esp = r_ebp;
    /* 0059db4f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059db50: ret  */ FN_RET(0x0059db04); r_esp += 4; return;
}

void f_0059db54(void) /* sub_59DB54 */
{
    FN_ENTER(0x0059db54);
    /* 0059db54: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0059db55: mov ebp, esp */ r_ebp = r_esp;
    /* 0059db57: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0059db59: push 0x8d8738 */ { u32 v = 0x8d8738u; r_esp -= 4; W32(r_esp, v); }
    /* 0059db5e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0059db64: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059db65: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0059db6c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0059db6f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0059db72: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0059db75: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0059db78: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0059db7b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0059db7e: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0059db85: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0059db88: mov edx, dword ptr [ecx + 0x44c] */ r_edx = R32((u32)(r_ecx+0x44cu));
    /* 0059db8e: mov dword ptr [ecx], 0xb09f40 */ W32((u32)(r_ecx), 0xb09f40u);
    /* 0059db94: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059db96: je 0x59dbb2 */ if (fZ) goto L_0059dbb2;
L_0059db98:; BB(0x0059db98);
    /* 0059db98: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0059db9b: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0059db9f: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0059dba4: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0059dba8: mov dword ptr [ecx + 0x44c], 0 */ W32((u32)(r_ecx+0x44cu), 0x0u);
L_0059dbb2:; BB(0x0059dbb2);
    /* 0059dbb2: mov edx, dword ptr [ecx + 0x450] */ r_edx = R32((u32)(r_ecx+0x450u));
    /* 0059dbb8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059dbba: je 0x59dbd6 */ if (fZ) goto L_0059dbd6;
L_0059dbbc:; BB(0x0059dbbc);
    /* 0059dbbc: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0059dbbf: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0059dbc3: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0059dbc8: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0059dbcc: mov dword ptr [ecx + 0x450], 0 */ W32((u32)(r_ecx+0x450u), 0x0u);
L_0059dbd6:; BB(0x0059dbd6);
    /* 0059dbd6: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x59dbdbu); f_007b9c8c();
    /* 0059dbdb: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0059dbe2: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0059dbe5: add ecx, 0x40c */ {  u32 a = r_ecx; u32 b = 0x40cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0059dbeb: call 0x5769f8 */ r_esp -= 4; W32(r_esp, 0x59dbf0u); f_005769f8();
    /* 0059dbf0: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0059dbf7: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0059dbfa: call 0x51f4fc */ r_esp -= 4; W32(r_esp, 0x59dbffu); f_0051f4fc();
    /* 0059dbff: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0059dc02: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0059dc09: mov esp, ebp */ r_esp = r_ebp;
    /* 0059dc0b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059dc0c: ret  */ FN_RET(0x0059db54); r_esp += 4; return;
}

void f_0059dc10(void) /* sub_59DC10 */
{
    FN_ENTER(0x0059dc10);
    /* 0059dc10: push dword ptr [0xa74764] */ { u32 v = R32((u32)(0xa74764u)); r_esp -= 4; W32(r_esp, v); }
    /* 0059dc16: call 0x5022dc */ r_esp -= 4; W32(r_esp, 0x59dc1bu); f_005022dc();
    /* 0059dc1b: add dword ptr [0xa74788], 1 */ { u32 ad = (u32)(0xa74788u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0059dc22: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0059dc23: ret  */ FN_RET(0x0059dc10); r_esp += 4; return;
}

void f_0059dc24(void) /* sub_59DC24 */
{
    FN_ENTER(0x0059dc24);
    /* 0059dc24: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0059dc25: mov esi, ecx */ r_esi = r_ecx;
    /* 0059dc27: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0059dc29: mov ecx, esi */ r_ecx = r_esi;
    /* 0059dc2b: call dword ptr [eax + 0x168] */ { u32 t = R32((u32)(r_eax+0x168u)); r_esp -= 4; W32(r_esp, 0x59dc31u); call_ind(t); }
    /* 0059dc31: mov ecx, esi */ r_ecx = r_esi;
    /* 0059dc33: call 0x7b6894 */ r_esp -= 4; W32(r_esp, 0x59dc38u); f_007b6894();
    /* 0059dc38: mov ecx, esi */ r_ecx = r_esi;
    /* 0059dc3a: call 0x7b798c */ r_esp -= 4; W32(r_esp, 0x59dc3fu); f_007b798c();
    /* 0059dc3f: mov ecx, esi */ r_ecx = r_esi;
    /* 0059dc41: call 0x7b7e9c */ r_esp -= 4; W32(r_esp, 0x59dc46u); f_007b7e9c();
    /* 0059dc46: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0059dc47: ret  */ FN_RET(0x0059dc24); r_esp += 4; return;
}

void f_0059dc48(void) /* sub_59DC48 */
{
    FN_ENTER(0x0059dc48);
    /* 0059dc48: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0059dc49: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0059dc4a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0059dc4b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0059dc4c: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0059dc4e: push 0x41b80000 */ { u32 v = 0x41b80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0059dc53: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0059dc55: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x59dc5au); f_007aaa30();
    /* 0059dc5a: mov ebx, eax */ r_ebx = r_eax;
    /* 0059dc5c: push 0x41700000 */ { u32 v = 0x41700000u; r_esp -= 4; W32(r_esp, v); }
    /* 0059dc61: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0059dc63: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x59dc68u); f_007aaa30();
    /* 0059dc68: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059dc6a: jne 0x59dc74 */ if (!fZ) goto L_0059dc74;
L_0059dc6c:; BB(0x0059dc6c);
    /* 0059dc6c: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0059dc6e: je 0x59dd5f */ if (fZ) goto L_0059dd5f;
L_0059dc74:; BB(0x0059dc74);
    /* 0059dc74: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0059dc76: call 0x521324 */ r_esp -= 4; W32(r_esp, 0x59dc7bu); f_00521324();
    /* 0059dc7b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059dc7d: je 0x59dd4a */ if (fZ) goto L_0059dd4a;
L_0059dc83:; BB(0x0059dc83);
    /* 0059dc83: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0059dc88: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0059dc89: mov ecx, dword ptr [ebp + 0x398] */ r_ecx = R32((u32)(r_ebp+0x398u));
    /* 0059dc8f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0059dc91: call dword ptr [edx + 0x50] */ { u32 t = R32((u32)(r_edx+0x50u)); r_esp -= 4; W32(r_esp, 0x59dc94u); call_ind(t); }
    /* 0059dc94: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059dc96: je 0x59dd4a */ if (fZ) goto L_0059dd4a;
L_0059dc9c:; BB(0x0059dc9c);
    /* 0059dc9c: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0059dca1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0059dca2: mov ecx, dword ptr [ebp + 0x398] */ r_ecx = R32((u32)(r_ebp+0x398u));
    /* 0059dca8: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0059dcaa: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x59dcadu); call_ind(t); }
    /* 0059dcad: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0059dcb0: push 0x40400000 */ { u32 v = 0x40400000u; r_esp -= 4; W32(r_esp, v); }
    /* 0059dcb5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0059dcb6: mov ecx, dword ptr [ebp + 0x398] */ r_ecx = R32((u32)(r_ebp+0x398u));
    /* 0059dcbc: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0059dcbe: call dword ptr [edx + 0x68] */ { u32 t = R32((u32)(r_edx+0x68u)); r_esp -= 4; W32(r_esp, 0x59dcc1u); call_ind(t); }
    /* 0059dcc1: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0059dcc4: fcomp dword ptr [0x929e00] */ fx_compare(ST(0), R_F32((u32)(0x929e00u))); FPOP();
    /* 0059dcca: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0059dccc: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0059dccd: jbe 0x59dd4a */ if ((fC||fZ)) goto L_0059dd4a;
L_0059dccf:; BB(0x0059dccf);
    /* 0059dccf: mov edx, dword ptr [ebp + 0x3f8] */ r_edx = R32((u32)(r_ebp+0x3f8u));
    /* 0059dcd5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0059dcd7: jle 0x59dd27 */ if ((fZ||fS!=fO)) goto L_0059dd27;
L_0059dcd9:; BB(0x0059dcd9);
    /* 0059dcd9: mov ebx, dword ptr [ebp + 0x398] */ r_ebx = R32((u32)(r_ebp+0x398u));
    /* 0059dcdf: movsx eax, word ptr [ebx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32cu));
    /* 0059dce6: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059dce9: jne 0x59dd4a */ if (!fZ) goto L_0059dd4a;
L_0059dceb:; BB(0x0059dceb);
    /* 0059dceb: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0059dced: lea ecx, [ebx + 0xdf8] */ r_ecx = (u32)(r_ebx+0xdf8u);
    /* 0059dcf3: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x59dcf8u); f_0069792c();
    /* 0059dcf8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059dcfa: je 0x59dd4a */ if (fZ) goto L_0059dd4a;
L_0059dcfc:; BB(0x0059dcfc);
    /* 0059dcfc: push dword ptr [eax + 0xd8] */ { u32 v = R32((u32)(r_eax+0xd8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0059dd02: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0059dd04: call 0x68dfd8 */ r_esp -= 4; W32(r_esp, 0x59dd09u); f_0068dfd8();
    /* 0059dd09: lea edi, [ebp + 0x400] */ r_edi = (u32)(r_ebp+0x400u);
    /* 0059dd0f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0059dd10: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0059dd12: call 0x68c358 */ r_esp -= 4; W32(r_esp, 0x59dd17u); f_0068c358();
    /* 0059dd17: push 0x1d0 */ { u32 v = 0x1d0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059dd1c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0059dd1d: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x59dd22u); f_0050b510();
    /* 0059dd22: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059dd25: jmp 0x59dd4a */ goto L_0059dd4a;
L_0059dd27:; BB(0x0059dd27);
    /* 0059dd27: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059dd29: je 0x59dd4a */ if (fZ) goto L_0059dd4a;
L_0059dd2b:; BB(0x0059dd2b);
    /* 0059dd2b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0059dd2d: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x59dd32u); f_007751b0();
    /* 0059dd32: fcomp dword ptr [0x929dfc] */ fx_compare(ST(0), R_F32((u32)(0x929dfcu))); FPOP();
    /* 0059dd38: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0059dd3a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0059dd3b: ja 0x59dd4a */ if ((!fC&&!fZ)) goto L_0059dd4a;
L_0059dd3d:; BB(0x0059dd3d);
    /* 0059dd3d: push dword ptr [ebp + 0x398] */ { u32 v = R32((u32)(r_ebp+0x398u)); r_esp -= 4; W32(r_esp, v); }
    /* 0059dd43: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0059dd45: call 0x51fe4c */ r_esp -= 4; W32(r_esp, 0x59dd4au); f_0051fe4c();
L_0059dd4a:; BB(0x0059dd4a);
    /* 0059dd4a: add ebp, 0x38 */ {  u32 a = r_ebp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0059dd4d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0059dd4f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059dd50: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059dd51: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0059dd52: push 0x244 */ { u32 v = 0x244u; r_esp -= 4; W32(r_esp, v); }
    /* 0059dd57: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x59dd5cu); f_00814298();
    /* 0059dd5c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_0059dd5f:; BB(0x0059dd5f);
    /* 0059dd5f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0059dd60: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0059dd61: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059dd62: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0059dd63: ret  */ FN_RET(0x0059dc48); r_esp += 4; return;
}

void f_0059dd64(void) /* sub_59DD64 */
{
    FN_ENTER(0x0059dd64);
    /* 0059dd64: mov eax, dword ptr [ecx + 0x3d4] */ r_eax = R32((u32)(r_ecx+0x3d4u));
    /* 0059dd6a: test eax, 0x10000 */ {  u32 a = r_eax; u32 b = 0x10000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059dd6f: jne 0x59ddb6 */ if (!fZ) goto L_0059ddb6;
L_0059dd71:; BB(0x0059dd71);
    /* 0059dd71: fld dword ptr [ecx + 0x3b4] */ FPUSH(R_F32((u32)(r_ecx+0x3b4u)));
    /* 0059dd77: fcom dword ptr [0x929df8] */ fx_compare(ST(0), R_F32((u32)(0x929df8u))); 
    /* 0059dd7d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0059dd7f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0059dd80: jbe 0x59ddb9 */ if ((fC||fZ)) goto L_0059ddb9;
L_0059dd82:; BB(0x0059dd82);
    /* 0059dd82: fcom dword ptr [0x929df4] */ fx_compare(ST(0), R_F32((u32)(0x929df4u))); 
    /* 0059dd88: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0059dd8a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0059dd8b: jb 0x59dd91 */ if (fC) goto L_0059dd91;
L_0059dd8d:; BB(0x0059dd8d);
    /* 0059dd8d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0059dd8f: jmp 0x59ddb6 */ goto L_0059ddb6;
L_0059dd91:; BB(0x0059dd91);
    /* 0059dd91: fld dword ptr [0x929df0] */ FPUSH(R_F32((u32)(0x929df0u)));
    /* 0059dd97: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0059dd99: mov eax, dword ptr [ecx + 0x60] */ r_eax = R32((u32)(r_ecx+0x60u));
    /* 0059dd9c: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059dd9f: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0059dda3: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0059dda6: call 0x59ddc0 */ r_esp -= 4; W32(r_esp, 0x59ddabu); f_0059ddc0();
    /* 0059ddab: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0059ddad: mov eax, 0 */ r_eax = 0x0u;
    /* 0059ddb2: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0059ddb5: ret  */ FN_RET(0x0059dd64); r_esp += 4; return;
L_0059ddb6:; BB(0x0059ddb6);
    /* 0059ddb6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0059ddb8: ret  */ FN_RET(0x0059dd64); r_esp += 4; return;
L_0059ddb9:; BB(0x0059ddb9);
    /* 0059ddb9: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0059ddbb: jmp 0x59ddb6 */ goto L_0059ddb6;
}

void f_0059ddc0(void) /* sub_59DDC0 */
{
    FN_ENTER(0x0059ddc0);
    /* 0059ddc0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0059ddc1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0059ddc2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0059ddc3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0059ddc4: mov edi, ecx */ r_edi = r_ecx;
    /* 0059ddc6: mov esi, dword ptr [edi + 0x60] */ r_esi = R32((u32)(r_edi+0x60u));
    /* 0059ddc9: mov ebp, dword ptr [edi + 0xa4] */ r_ebp = R32((u32)(r_edi+0xa4u));
    /* 0059ddcf: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0059ddd3: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 0059ddd7: fmul dword ptr [0x929dec] */ ST(0) = ST(0) * R_F32((u32)(0x929decu));
    /* 0059dddd: mov ebx, dword ptr [ebp + 0x18] */ r_ebx = R32((u32)(r_ebp+0x18u));
    /* 0059dde0: fst dword ptr [ebp + 8] */ W_F32((u32)(r_ebp+0x8u), ST(0));
    /* 0059dde3: fstp dword ptr [ebp + 0xc] */ W_F32((u32)(r_ebp+0xcu), ST(0)); FPOP();
    /* 0059dde6: mov ecx, edi */ r_ecx = r_edi;
    /* 0059dde8: mov dword ptr [ebp], 0 */ W32((u32)(r_ebp), 0x0u);
    /* 0059ddef: mov dword ptr [ebp + 0x10], 0x41000000 */ W32((u32)(r_ebp+0x10u), 0x41000000u);
    /* 0059ddf6: mov dword ptr [ebp + 0x14], 1 */ W32((u32)(r_ebp+0x14u), 0x1u);
    /* 0059ddfd: mov dword ptr [ebp + 0x18], 0x9d01 */ W32((u32)(r_ebp+0x18u), 0x9d01u);
    /* 0059de04: mov dword ptr [edi + 0x60], eax */ W32((u32)(r_edi+0x60u), r_eax);
    /* 0059de07: call 0x7b798c */ r_esp -= 4; W32(r_esp, 0x59de0cu); f_007b798c();
    /* 0059de0c: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 0059de0f: test eax, 0x380000 */ {  u32 a = r_eax; u32 b = 0x380000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0059de14: je 0x59de1d */ if (fZ) goto L_0059de1d;
L_0059de16:; BB(0x0059de16);
    /* 0059de16: mov eax, 1 */ r_eax = 0x1u;
    /* 0059de1b: jmp 0x59de1f */ goto L_0059de1f;
L_0059de1d:; BB(0x0059de1d);
    /* 0059de1d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_0059de1f:; BB(0x0059de1f);
    /* 0059de1f: mov edx, dword ptr [0x9c0124] */ r_edx = R32((u32)(0x9c0124u));
    /* 0059de25: mov dword ptr [ebp], edx */ W32((u32)(r_ebp), r_edx);
    /* 0059de28: mov edx, dword ptr [0x9c0128] */ r_edx = R32((u32)(0x9c0128u));
    /* 0059de2e: mov dword ptr [ebp + 4], edx */ W32((u32)(r_ebp+0x4u), r_edx);
    /* 0059de31: mov edx, dword ptr [0x9c012c] */ r_edx = R32((u32)(0x9c012cu));
    /* 0059de37: mov dword ptr [ebp + 8], edx */ W32((u32)(r_ebp+0x8u), r_edx);
    /* 0059de3a: mov edx, dword ptr [0x9c0130] */ r_edx = R32((u32)(0x9c0130u));
    /* 0059de40: mov dword ptr [ebp + 0xc], edx */ W32((u32)(r_ebp+0xcu), r_edx);
    /* 0059de43: mov edx, dword ptr [0x9c0134] */ r_edx = R32((u32)(0x9c0134u));
    /* 0059de49: mov dword ptr [ebp + 0x10], edx */ W32((u32)(r_ebp+0x10u), r_edx);
    /* 0059de4c: mov edx, dword ptr [0x9c0138] */ r_edx = R32((u32)(0x9c0138u));
    /* 0059de52: mov dword ptr [ebp + 0x14], edx */ W32((u32)(r_ebp+0x14u), r_edx);
    /* 0059de55: mov edx, dword ptr [0x9c013c] */ r_edx = R32((u32)(0x9c013cu));
    /* 0059de5b: mov dword ptr [ebp + 0x18], edx */ W32((u32)(r_ebp+0x18u), r_edx);
    /* 0059de5e: mov edx, dword ptr [0x9c0140] */ r_edx = R32((u32)(0x9c0140u));
    /* 0059de64: mov dword ptr [ebp + 0x1c], edx */ W32((u32)(r_ebp+0x1cu), r_edx);
    /* 0059de67: mov edx, dword ptr [0x9c0144] */ r_edx = R32((u32)(0x9c0144u));
    /* 0059de6d: mov dword ptr [ebp + 0x20], edx */ W32((u32)(r_ebp+0x20u), r_edx);
    /* 0059de70: mov edx, dword ptr [0x9c0148] */ r_edx = R32((u32)(0x9c0148u));
    /* 0059de76: mov dword ptr [ebp + 0x24], edx */ W32((u32)(r_ebp+0x24u), r_edx);
    /* 0059de79: mov edx, dword ptr [0x9c014c] */ r_edx = R32((u32)(0x9c014cu));
    /* 0059de7f: mov dword ptr [ebp + 0x28], edx */ W32((u32)(r_ebp+0x28u), r_edx);
    /* 0059de82: mov dword ptr [ebp + 0x18], ebx */ W32((u32)(r_ebp+0x18u), r_ebx);
    /* 0059de85: mov dword ptr [edi + 0x60], esi */ W32((u32)(r_edi+0x60u), r_esi);
    /* 0059de88: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0059de89: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059de8a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0059de8b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0059de8c: ret 8 */ FN_RET(0x0059ddc0); r_esp += 12; return;
}

void f_0059de90(void) /* sub_59DE90 */
{
    FN_ENTER(0x0059de90);
    /* 0059de90: mov eax, dword ptr [ecx + 0x3d4] */ r_eax = R32((u32)(r_ecx+0x3d4u));
    /* 0059de96: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0059de98: je 0x59deb1 */ if (fZ) goto L_0059deb1;
L_0059de9a:; BB(0x0059de9a);
    /* 0059de9a: mov edx, dword ptr [ecx + 0x40c] */ r_edx = R32((u32)(r_ecx+0x40cu));
    /* 0059dea0: lea eax, [ecx + 0x40c] */ r_eax = (u32)(r_ecx+0x40cu);
    /* 0059dea6: mov ecx, eax */ r_ecx = r_eax;
    /* 0059dea8: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x59deabu); call_ind(t); }
    /* 0059deab: mov eax, 1 */ r_eax = 0x1u;
    /* 0059deb0: ret  */ FN_RET(0x0059de90); r_esp += 4; return;
L_0059deb1:; BB(0x0059deb1);
    /* 0059deb1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0059deb3: ret  */ FN_RET(0x0059de90); r_esp += 4; return;
}

void f_0059deb4(void) /* sub_59DEB4 */
{
    FN_ENTER(0x0059deb4);
    /* 0059deb4: mov eax, dword ptr [ecx + 0x3d4] */ r_eax = R32((u32)(r_ecx+0x3d4u));
    /* 0059deba: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0059debc: je 0x59ded5 */ if (fZ) goto L_0059ded5;
L_0059debe:; BB(0x0059debe);
    /* 0059debe: mov edx, dword ptr [ecx + 0x40c] */ r_edx = R32((u32)(r_ecx+0x40cu));
    /* 0059dec4: lea eax, [ecx + 0x40c] */ r_eax = (u32)(r_ecx+0x40cu);
    /* 0059deca: mov ecx, eax */ r_ecx = r_eax;
    /* 0059decc: call dword ptr [edx + 0x1c] */ { u32 t = R32((u32)(r_edx+0x1cu)); r_esp -= 4; W32(r_esp, 0x59decfu); call_ind(t); }
    /* 0059decf: mov eax, 1 */ r_eax = 0x1u;
    /* 0059ded4: ret  */ FN_RET(0x0059deb4); r_esp += 4; return;
L_0059ded5:; BB(0x0059ded5);
    /* 0059ded5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0059ded7: ret  */ FN_RET(0x0059deb4); r_esp += 4; return;
}

void f_0059ded8(void) /* sub_59DED8 */
{
    FN_ENTER(0x0059ded8);
    /* 0059ded8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0059ded9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0059deda: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0059dedb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0059dedc: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0059dedf: mov edi, ecx */ r_edi = r_ecx;
    /* 0059dee1: mov ebx, dword ptr [esp + 0x20] */ r_ebx = R32((u32)(r_esp+0x20u));
    /* 0059dee5: fld dword ptr [0x929dd8] */ FPUSH(R_F32((u32)(0x929dd8u)));
    /* 0059deeb: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0059deed: mov edx, dword ptr [ebx + 4] */ r_edx = R32((u32)(r_ebx+0x4u));
    /* 0059def0: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0059def3: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 0059def6: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0059defa: fadd dword ptr [esp + 4] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x4u));
    /* 0059defe: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0059df02: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0059df06: lea eax, [edi + 0x128] */ r_eax = (u32)(r_edi+0x128u);
    /* 0059df0c: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0059df0f: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 0059df11: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059df12: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059df13: call 0x7806dc */ r_esp -= 4; W32(r_esp, 0x59df18u); f_007806dc();
    /* 0059df18: mov esi, eax */ r_esi = r_eax;
    /* 0059df1a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059df1d: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059df1f: je 0x59df28 */ if (fZ) goto L_0059df28;
L_0059df21:; BB(0x0059df21);
    /* 0059df21: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 0059df23: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0059df26: jne 0x59df34 */ if (!fZ) goto L_0059df34;
L_0059df28:; BB(0x0059df28);
    /* 0059df28: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0059df2a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0059df2d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0059df2e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059df2f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0059df30: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0059df31: ret 4 */ FN_RET(0x0059ded8); r_esp += 8; return;
L_0059df34:; BB(0x0059df34);
    /* 0059df34: push 0x49 */ { u32 v = 0x49u; r_esp -= 4; W32(r_esp, v); }
    /* 0059df36: mov edx, dword ptr [esi + 4] */ r_edx = R32((u32)(r_esi+0x4u));
    /* 0059df39: add edx, 0x38 */ {  u32 a = r_edx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0059df3c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059df3d: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x59df42u); f_0050b510();
    /* 0059df42: mov ebp, eax */ r_ebp = r_eax;
    /* 0059df44: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059df47: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059df49: je 0x59df7e */ if (fZ) goto L_0059df7e;
L_0059df4b:; BB(0x0059df4b);
    /* 0059df4b: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0059df4d: call 0x50c094 */ r_esp -= 4; W32(r_esp, 0x59df52u); f_0050c094();
    /* 0059df52: mov ebx, eax */ r_ebx = r_eax;
    /* 0059df54: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059df57: call 0x50c08c */ r_esp -= 4; W32(r_esp, 0x59df5cu); f_0050c08c();
    /* 0059df5c: movzx edx, word ptr [ebp + 0x2c] */ r_edx = (u32)R16((u32)(r_ebp+0x2cu));
    /* 0059df60: mov dword ptr [ebp + 0x58], 0 */ W32((u32)(r_ebp+0x58u), 0x0u);
    /* 0059df67: mov dword ptr [ebp + 0x50], ebx */ W32((u32)(r_ebp+0x50u), r_ebx);
    /* 0059df6a: mov dword ptr [ebp + 0x54], eax */ W32((u32)(r_ebp+0x54u), r_eax);
    /* 0059df6d: mov dword ptr [ebp + 0x60], 0x3f800000 */ W32((u32)(r_ebp+0x60u), 0x3f800000u);
    /* 0059df74: or edx, 0xffff0600 */ {  u32 a = r_edx; u32 b = 0xffff0600u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0059df7a: mov word ptr [ebp + 0x2c], dx */ W16((u32)(r_ebp+0x2cu), (u16)r_edx);
L_0059df7e:; BB(0x0059df7e);
    /* 0059df7e: push 0xa4 */ { u32 v = 0xa4u; r_esp -= 4; W32(r_esp, v); }
    /* 0059df83: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 0059df86: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0059df89: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059df8a: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x59df8fu); f_0050b510();
    /* 0059df8f: add edi, 0x38 */ {  u32 a = r_edi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0059df92: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0059df93: call 0x578bac */ r_esp -= 4; W32(r_esp, 0x59df98u); f_00578bac();
    /* 0059df98: mov eax, 1 */ r_eax = 0x1u;
    /* 0059df9d: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0059dfa0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0059dfa1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059dfa2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0059dfa3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0059dfa4: ret 4 */ FN_RET(0x0059ded8); r_esp += 8; return;
}

void f_0059dfa8(void)
{
    FN_ENTER(0x0059dfa8);
    /* 0059dfa8: mov ecx, dword ptr [0xa74768] */ r_ecx = R32((u32)(0xa74768u));
    /* 0059dfae: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059dfb0: je 0x59dfc5 */ if (fZ) goto L_0059dfc5;
L_0059dfb2:; BB(0x0059dfb2);
    /* 0059dfb2: je 0x59dfbb */ if (fZ) goto L_0059dfbb;
L_0059dfb4:; BB(0x0059dfb4);
    /* 0059dfb4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0059dfb6: call 0x45a950 */ r_esp -= 4; W32(r_esp, 0x59dfbbu); f_0045a950();
L_0059dfbb:; BB(0x0059dfbb);
    /* 0059dfbb: mov dword ptr [0xa74768], 0 */ W32((u32)(0xa74768u), 0x0u);
L_0059dfc5:; BB(0x0059dfc5);
    /* 0059dfc5: mov ecx, dword ptr [0xa7476c] */ r_ecx = R32((u32)(0xa7476cu));
    /* 0059dfcb: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059dfcd: je 0x59dfe1 */ if (fZ) goto L_0059dfe1;
L_0059dfcf:; BB(0x0059dfcf);
    /* 0059dfcf: je 0x59dfd7 */ if (fZ) goto L_0059dfd7;
L_0059dfd1:; BB(0x0059dfd1);
    /* 0059dfd1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0059dfd3: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0059dfd5: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x59dfd7u); call_ind(t); }
L_0059dfd7:; BB(0x0059dfd7);
    /* 0059dfd7: mov dword ptr [0xa7476c], 0 */ W32((u32)(0xa7476cu), 0x0u);
L_0059dfe1:; BB(0x0059dfe1);
    /* 0059dfe1: mov eax, dword ptr [0xa74738] */ r_eax = R32((u32)(0xa74738u));
    /* 0059dfe6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059dfe8: je 0x59dffb */ if (fZ) goto L_0059dffb;
L_0059dfea:; BB(0x0059dfea);
    /* 0059dfea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059dfeb: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x59dff0u); f_00857e98();
    /* 0059dff0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0059dff1: mov dword ptr [0xa74738], 0 */ W32((u32)(0xa74738u), 0x0u);
L_0059dffb:; BB(0x0059dffb);
    /* 0059dffb: mov ecx, dword ptr [0xa74740] */ r_ecx = R32((u32)(0xa74740u));
    /* 0059e001: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0059e003: je 0x59e018 */ if (fZ) goto L_0059e018;
L_0059e005:; BB(0x0059e005);
    /* 0059e005: je 0x59e00e */ if (fZ) goto L_0059e00e;
L_0059e007:; BB(0x0059e007);
    /* 0059e007: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0059e009: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x59e00eu); f_004066a8();
L_0059e00e:; BB(0x0059e00e);
    /* 0059e00e: mov dword ptr [0xa74740], 0 */ W32((u32)(0xa74740u), 0x0u);
L_0059e018:; BB(0x0059e018);
    /* 0059e018: ret  */ FN_RET(0x0059dfa8); r_esp += 4; return;
}

