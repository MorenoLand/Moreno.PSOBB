#include "protos.h"

void f_00510000(void)
{
    FN_ENTER(0x00510000);
    goto L_00510000;
L_0050fff7:; BB(0x0050fff7);
    /* 0050fff7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0050fffa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050fffb: ret  */ FN_RET(0x00510000); r_esp += 4; return;
L_00510000:; BB(0x00510000);
    /* 00510000: int 0x10 */ UNSUP(0x00510000, "int 0x10");
    /* 00510002: add byte ptr [ebx - 0x3ca2f33c], al */ { u32 ad = (u32)(r_ebx+0xc35d0cc4u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00510008: call 0x505a20 */ r_esp -= 4; W32(r_esp, 0x51000du); f_00505a20();
    /* 0051000d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051000f: jne 0x51001c */ if (!fZ) goto L_0051001c;
L_00510011:; BB(0x00510011);
    /* 00510011: movzx eax, word ptr [ebp + 0x24] */ r_eax = (u32)R16((u32)(r_ebp+0x24u));
    /* 00510015: test eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051001a: jne 0x50fff7 */ if (!fZ) goto L_0050fff7;
L_0051001c:; BB(0x0051001c);
    /* 0051001c: mov eax, dword ptr [ebp + 0x108] */ r_eax = R32((u32)(r_ebp+0x108u));
    /* 00510022: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00510024: je 0x50fff7 */ if (fZ) goto L_0050fff7;
L_00510026:; BB(0x00510026);
    /* 00510026: mov eax, dword ptr [ebp + 0x104] */ r_eax = R32((u32)(r_ebp+0x104u));
    /* 0051002c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051002e: je 0x50fff7 */ if (fZ) goto L_0050fff7;
L_00510030:; BB(0x00510030);
    /* 00510030: fld dword ptr [ebp + 0x74] */ FPUSH(R_F32((u32)(r_ebp+0x74u)));
    /* 00510033: fadd dword ptr [ebp + 0x80] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x80u));
    /* 00510039: fld dword ptr [ebp + 0x78] */ FPUSH(R_F32((u32)(r_ebp+0x78u)));
    /* 0051003c: fadd dword ptr [ebp + 0x84] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x84u));
    /* 00510042: fld dword ptr [ebp + 0x7c] */ FPUSH(R_F32((u32)(r_ebp+0x7cu)));
    /* 00510045: fadd dword ptr [ebp + 0x88] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x88u));
    /* 0051004b: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0051004d: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00510050: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00510054: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00510058: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x51005du); f_0082d7b0();
    /* 0051005d: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00510060: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x510065u); f_0082d838();
    /* 00510065: mov eax, dword ptr [ebp + 0x8c] */ r_eax = R32((u32)(r_ebp+0x8cu));
    /* 0051006b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051006c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051006d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0051006f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00510070: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x510075u); f_0082fa0c();
    /* 00510075: mov edx, dword ptr [ebp + 0xa4] */ r_edx = R32((u32)(r_ebp+0xa4u));
    /* 0051007b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0051007d: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x510082u); f_00830c04();
    /* 00510082: mov edx, dword ptr [ebp + 0x9c] */ r_edx = R32((u32)(r_ebp+0x9cu));
    /* 00510088: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0051008a: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x51008fu); f_0082e9e4();
    /* 0051008f: mov edx, dword ptr [ebp + 0xa0] */ r_edx = R32((u32)(r_ebp+0xa0u));
    /* 00510095: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00510097: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x51009cu); f_0082d8bc();
    /* 0051009c: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 005100a1: movzx edx, word ptr [ebp + 0x24] */ r_edx = (u32)R16((u32)(r_ebp+0x24u));
    /* 005100a5: mov dword ptr [0xaab518], eax */ W32((u32)(0xaab518u), r_eax);
    /* 005100aa: test edx, 0x400 */ {  u32 a = r_edx; u32 b = 0x400u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005100b0: jne 0x5101a1 */ if (!fZ) goto L_005101a1;
L_005100b6:; BB(0x005100b6);
    /* 005100b6: movsx edx, word ptr [ebp + 0x9a] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x9au));
    /* 005100bd: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005100bf: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x5100c4u); f_0082d8bc();
    /* 005100c4: movzx eax, word ptr [ebp + 0x24] */ r_eax = (u32)R16((u32)(r_ebp+0x24u));
    /* 005100c8: test eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005100cd: je 0x5100e5 */ if (fZ) goto L_005100e5;
L_005100cf:; BB(0x005100cf);
    /* 005100cf: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 005100d4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005100d6: je 0x5100e5 */ if (fZ) goto L_005100e5;
L_005100d8:; BB(0x005100d8);
    /* 005100d8: mov edx, dword ptr [eax + 0x194] */ r_edx = R32((u32)(r_eax+0x194u));
    /* 005100de: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005100e0: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x5100e5u); f_0082d8bc();
L_005100e5:; BB(0x005100e5);
    /* 005100e5: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x5100eau); f_0082dab0();
    /* 005100ea: movzx eax, word ptr [ebp + 0x24] */ r_eax = (u32)R16((u32)(r_ebp+0x24u));
    /* 005100ee: test eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005100f3: jne 0x510197 */ if (!fZ) goto L_00510197;
L_005100f9:; BB(0x005100f9);
    /* 005100f9: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 005100fe: mov dword ptr [0xaab518], eax */ W32((u32)(0xaab518u), r_eax);
    /* 00510103: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00510105: or eax, 0x8021 */ {  u32 a = r_eax; u32 b = 0x8021u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0051010a: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 0051010f: call 0x508a30 */ r_esp -= 4; W32(r_esp, 0x510114u); f_00508a30();
    /* 00510114: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00510116: je 0x510123 */ if (fZ) goto L_00510123;
L_00510118:; BB(0x00510118);
    /* 00510118: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051011a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051011c: call 0x508958 */ r_esp -= 4; W32(r_esp, 0x510121u); f_00508958();
    /* 00510121: jmp 0x51012c */ goto L_0051012c;
L_00510123:; BB(0x00510123);
    /* 00510123: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00510125: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00510127: call 0x508958 */ r_esp -= 4; W32(r_esp, 0x51012cu); f_00508958();
L_0051012c:; BB(0x0051012c);
    /* 0051012c: mov ecx, dword ptr [ebp + 0x108] */ r_ecx = R32((u32)(r_ebp+0x108u));
    /* 00510132: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x510137u); f_00829cc8();
    /* 00510137: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00510139: call 0x7a94a0 */ r_esp -= 4; W32(r_esp, 0x51013eu); f_007a94a0();
    /* 0051013e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0051013f: mov edx, dword ptr [ebp + 0x10c] */ r_edx = R32((u32)(r_ebp+0x10cu));
    /* 00510145: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00510147: je 0x51018a */ if (fZ) goto L_0051018a;
L_00510149:; BB(0x00510149);
    /* 00510149: push dword ptr [ebp + 0x110] */ { u32 v = R32((u32)(r_ebp+0x110u)); r_esp -= 4; W32(r_esp, v); }
    /* 0051014f: mov ecx, dword ptr [ebp + 0x104] */ r_ecx = R32((u32)(r_ebp+0x104u));
    /* 00510155: call 0x83bd00 */ r_esp -= 4; W32(r_esp, 0x51015au); f_0083bd00();
L_0051015a:; BB(0x0051015a);
    /* 0051015a: movzx eax, word ptr [ebp + 0x24] */ r_eax = (u32)R16((u32)(r_ebp+0x24u));
    /* 0051015e: test eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00510163: jne 0x51017e */ if (!fZ) goto L_0051017e;
L_00510165:; BB(0x00510165);
    /* 00510165: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
L_0051016a:; BB(0x0051016a);
    /* 0051016a: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 0051016f: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x510174u); f_0082dab0();
    /* 00510174: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x510179u); f_0082da80();
    /* 00510179: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0051017c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051017d: ret  */ FN_RET(0x00510000); r_esp += 4; return;
L_0051017e:; BB(0x0051017e);
    /* 0051017e: call 0x5022a0 */ r_esp -= 4; W32(r_esp, 0x510183u); f_005022a0();
    /* 00510183: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
    /* 00510188: jmp 0x51016a */ goto L_0051016a;
L_0051018a:; BB(0x0051018a);
    /* 0051018a: mov ecx, dword ptr [ebp + 0x104] */ r_ecx = R32((u32)(r_ebp+0x104u));
    /* 00510190: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x510195u); f_00831758();
    /* 00510195: jmp 0x51015a */ goto L_0051015a;
L_00510197:; BB(0x00510197);
    /* 00510197: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00510199: call 0x501fb8 */ r_esp -= 4; W32(r_esp, 0x51019eu); f_00501fb8();
    /* 0051019e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0051019f: jmp 0x51012c */ goto L_0051012c;
L_005101a1:; BB(0x005101a1);
    /* 005101a1: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x5101a6u); f_0082dbac();
    /* 005101a6: push 0x3faa3d71 */ { u32 v = 0x3faa3d71u; r_esp -= 4; W32(r_esp, v); }
    /* 005101ab: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x5101b0u); f_0061cdb0();
    /* 005101b0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005101b1: jmp 0x5100b6 */ goto L_005100b6;
}

void f_0051004f(void)
{
    FN_ENTER(0x0051004f);
    /* 0051004f: and al, 0xd9 */ {  u32 a = (u8)r_eax; u32 b = 0xd9u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00510051: pop esp */ { u32 v = R32(r_esp); r_esp += 4; r_esp = v; }
    /* 00510052: and al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00510054: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00510058: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x51005du); f_0082d7b0();
    /* 0051005d: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00510060: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x510065u); f_0082d838();
    /* 00510065: mov eax, dword ptr [ebp + 0x8c] */ r_eax = R32((u32)(r_ebp+0x8cu));
    /* 0051006b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051006c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051006d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0051006f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00510070: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x510075u); f_0082fa0c();
    /* 00510075: mov edx, dword ptr [ebp + 0xa4] */ r_edx = R32((u32)(r_ebp+0xa4u));
    /* 0051007b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0051007d: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x510082u); f_00830c04();
    /* 00510082: mov edx, dword ptr [ebp + 0x9c] */ r_edx = R32((u32)(r_ebp+0x9cu));
    /* 00510088: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0051008a: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x51008fu); f_0082e9e4();
    /* 0051008f: mov edx, dword ptr [ebp + 0xa0] */ r_edx = R32((u32)(r_ebp+0xa0u));
    /* 00510095: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00510097: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x51009cu); f_0082d8bc();
    /* 0051009c: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 005100a1: movzx edx, word ptr [ebp + 0x24] */ r_edx = (u32)R16((u32)(r_ebp+0x24u));
    /* 005100a5: mov dword ptr [0xaab518], eax */ W32((u32)(0xaab518u), r_eax);
    /* 005100aa: test edx, 0x400 */ {  u32 a = r_edx; u32 b = 0x400u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005100b0: jne 0x5101a1 */ if (!fZ) goto L_005101a1;
L_005100b6:; BB(0x005100b6);
    /* 005100b6: movsx edx, word ptr [ebp + 0x9a] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x9au));
    /* 005100bd: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005100bf: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x5100c4u); f_0082d8bc();
    /* 005100c4: movzx eax, word ptr [ebp + 0x24] */ r_eax = (u32)R16((u32)(r_ebp+0x24u));
    /* 005100c8: test eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005100cd: je 0x5100e5 */ if (fZ) goto L_005100e5;
L_005100cf:; BB(0x005100cf);
    /* 005100cf: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 005100d4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005100d6: je 0x5100e5 */ if (fZ) goto L_005100e5;
L_005100d8:; BB(0x005100d8);
    /* 005100d8: mov edx, dword ptr [eax + 0x194] */ r_edx = R32((u32)(r_eax+0x194u));
    /* 005100de: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005100e0: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x5100e5u); f_0082d8bc();
L_005100e5:; BB(0x005100e5);
    /* 005100e5: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x5100eau); f_0082dab0();
    /* 005100ea: movzx eax, word ptr [ebp + 0x24] */ r_eax = (u32)R16((u32)(r_ebp+0x24u));
    /* 005100ee: test eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005100f3: jne 0x510197 */ if (!fZ) goto L_00510197;
L_005100f9:; BB(0x005100f9);
    /* 005100f9: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 005100fe: mov dword ptr [0xaab518], eax */ W32((u32)(0xaab518u), r_eax);
    /* 00510103: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00510105: or eax, 0x8021 */ {  u32 a = r_eax; u32 b = 0x8021u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0051010a: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 0051010f: call 0x508a30 */ r_esp -= 4; W32(r_esp, 0x510114u); f_00508a30();
    /* 00510114: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00510116: je 0x510123 */ if (fZ) goto L_00510123;
L_00510118:; BB(0x00510118);
    /* 00510118: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051011a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051011c: call 0x508958 */ r_esp -= 4; W32(r_esp, 0x510121u); f_00508958();
    /* 00510121: jmp 0x51012c */ goto L_0051012c;
L_00510123:; BB(0x00510123);
    /* 00510123: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00510125: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00510127: call 0x508958 */ r_esp -= 4; W32(r_esp, 0x51012cu); f_00508958();
L_0051012c:; BB(0x0051012c);
    /* 0051012c: mov ecx, dword ptr [ebp + 0x108] */ r_ecx = R32((u32)(r_ebp+0x108u));
    /* 00510132: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x510137u); f_00829cc8();
    /* 00510137: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00510139: call 0x7a94a0 */ r_esp -= 4; W32(r_esp, 0x51013eu); f_007a94a0();
    /* 0051013e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0051013f: mov edx, dword ptr [ebp + 0x10c] */ r_edx = R32((u32)(r_ebp+0x10cu));
    /* 00510145: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00510147: je 0x51018a */ if (fZ) goto L_0051018a;
L_00510149:; BB(0x00510149);
    /* 00510149: push dword ptr [ebp + 0x110] */ { u32 v = R32((u32)(r_ebp+0x110u)); r_esp -= 4; W32(r_esp, v); }
    /* 0051014f: mov ecx, dword ptr [ebp + 0x104] */ r_ecx = R32((u32)(r_ebp+0x104u));
    /* 00510155: call 0x83bd00 */ r_esp -= 4; W32(r_esp, 0x51015au); f_0083bd00();
L_0051015a:; BB(0x0051015a);
    /* 0051015a: movzx eax, word ptr [ebp + 0x24] */ r_eax = (u32)R16((u32)(r_ebp+0x24u));
    /* 0051015e: test eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00510163: jne 0x51017e */ if (!fZ) goto L_0051017e;
L_00510165:; BB(0x00510165);
    /* 00510165: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
L_0051016a:; BB(0x0051016a);
    /* 0051016a: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 0051016f: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x510174u); f_0082dab0();
    /* 00510174: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x510179u); f_0082da80();
    /* 00510179: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0051017c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051017d: ret  */ FN_RET(0x0051004f); r_esp += 4; return;
L_0051017e:; BB(0x0051017e);
    /* 0051017e: call 0x5022a0 */ r_esp -= 4; W32(r_esp, 0x510183u); f_005022a0();
    /* 00510183: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
    /* 00510188: jmp 0x51016a */ goto L_0051016a;
L_0051018a:; BB(0x0051018a);
    /* 0051018a: mov ecx, dword ptr [ebp + 0x104] */ r_ecx = R32((u32)(r_ebp+0x104u));
    /* 00510190: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x510195u); f_00831758();
    /* 00510195: jmp 0x51015a */ goto L_0051015a;
L_00510197:; BB(0x00510197);
    /* 00510197: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00510199: call 0x501fb8 */ r_esp -= 4; W32(r_esp, 0x51019eu); f_00501fb8();
    /* 0051019e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0051019f: jmp 0x51012c */ goto L_0051012c;
L_005101a1:; BB(0x005101a1);
    /* 005101a1: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x5101a6u); f_0082dbac();
    /* 005101a6: push 0x3faa3d71 */ { u32 v = 0x3faa3d71u; r_esp -= 4; W32(r_esp, v); }
    /* 005101ab: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x5101b0u); f_0061cdb0();
    /* 005101b0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005101b1: jmp 0x5100b6 */ goto L_005100b6;
}

void f_00510050(void)
{
    FN_ENTER(0x00510050);
    /* 00510050: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00510054: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00510058: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x51005du); f_0082d7b0();
    /* 0051005d: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00510060: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x510065u); f_0082d838();
    /* 00510065: mov eax, dword ptr [ebp + 0x8c] */ r_eax = R32((u32)(r_ebp+0x8cu));
    /* 0051006b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051006c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051006d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0051006f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00510070: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x510075u); f_0082fa0c();
    /* 00510075: mov edx, dword ptr [ebp + 0xa4] */ r_edx = R32((u32)(r_ebp+0xa4u));
    /* 0051007b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0051007d: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x510082u); f_00830c04();
    /* 00510082: mov edx, dword ptr [ebp + 0x9c] */ r_edx = R32((u32)(r_ebp+0x9cu));
    /* 00510088: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0051008a: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x51008fu); f_0082e9e4();
    /* 0051008f: mov edx, dword ptr [ebp + 0xa0] */ r_edx = R32((u32)(r_ebp+0xa0u));
    /* 00510095: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00510097: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x51009cu); f_0082d8bc();
    /* 0051009c: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 005100a1: movzx edx, word ptr [ebp + 0x24] */ r_edx = (u32)R16((u32)(r_ebp+0x24u));
    /* 005100a5: mov dword ptr [0xaab518], eax */ W32((u32)(0xaab518u), r_eax);
    /* 005100aa: test edx, 0x400 */ {  u32 a = r_edx; u32 b = 0x400u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005100b0: jne 0x5101a1 */ if (!fZ) goto L_005101a1;
L_005100b6:; BB(0x005100b6);
    /* 005100b6: movsx edx, word ptr [ebp + 0x9a] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x9au));
    /* 005100bd: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005100bf: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x5100c4u); f_0082d8bc();
    /* 005100c4: movzx eax, word ptr [ebp + 0x24] */ r_eax = (u32)R16((u32)(r_ebp+0x24u));
    /* 005100c8: test eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005100cd: je 0x5100e5 */ if (fZ) goto L_005100e5;
L_005100cf:; BB(0x005100cf);
    /* 005100cf: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 005100d4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005100d6: je 0x5100e5 */ if (fZ) goto L_005100e5;
L_005100d8:; BB(0x005100d8);
    /* 005100d8: mov edx, dword ptr [eax + 0x194] */ r_edx = R32((u32)(r_eax+0x194u));
    /* 005100de: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005100e0: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x5100e5u); f_0082d8bc();
L_005100e5:; BB(0x005100e5);
    /* 005100e5: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x5100eau); f_0082dab0();
    /* 005100ea: movzx eax, word ptr [ebp + 0x24] */ r_eax = (u32)R16((u32)(r_ebp+0x24u));
    /* 005100ee: test eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005100f3: jne 0x510197 */ if (!fZ) goto L_00510197;
L_005100f9:; BB(0x005100f9);
    /* 005100f9: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 005100fe: mov dword ptr [0xaab518], eax */ W32((u32)(0xaab518u), r_eax);
    /* 00510103: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00510105: or eax, 0x8021 */ {  u32 a = r_eax; u32 b = 0x8021u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0051010a: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 0051010f: call 0x508a30 */ r_esp -= 4; W32(r_esp, 0x510114u); f_00508a30();
    /* 00510114: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00510116: je 0x510123 */ if (fZ) goto L_00510123;
L_00510118:; BB(0x00510118);
    /* 00510118: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051011a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051011c: call 0x508958 */ r_esp -= 4; W32(r_esp, 0x510121u); f_00508958();
    /* 00510121: jmp 0x51012c */ goto L_0051012c;
L_00510123:; BB(0x00510123);
    /* 00510123: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00510125: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00510127: call 0x508958 */ r_esp -= 4; W32(r_esp, 0x51012cu); f_00508958();
L_0051012c:; BB(0x0051012c);
    /* 0051012c: mov ecx, dword ptr [ebp + 0x108] */ r_ecx = R32((u32)(r_ebp+0x108u));
    /* 00510132: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x510137u); f_00829cc8();
    /* 00510137: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00510139: call 0x7a94a0 */ r_esp -= 4; W32(r_esp, 0x51013eu); f_007a94a0();
    /* 0051013e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0051013f: mov edx, dword ptr [ebp + 0x10c] */ r_edx = R32((u32)(r_ebp+0x10cu));
    /* 00510145: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00510147: je 0x51018a */ if (fZ) goto L_0051018a;
L_00510149:; BB(0x00510149);
    /* 00510149: push dword ptr [ebp + 0x110] */ { u32 v = R32((u32)(r_ebp+0x110u)); r_esp -= 4; W32(r_esp, v); }
    /* 0051014f: mov ecx, dword ptr [ebp + 0x104] */ r_ecx = R32((u32)(r_ebp+0x104u));
    /* 00510155: call 0x83bd00 */ r_esp -= 4; W32(r_esp, 0x51015au); f_0083bd00();
L_0051015a:; BB(0x0051015a);
    /* 0051015a: movzx eax, word ptr [ebp + 0x24] */ r_eax = (u32)R16((u32)(r_ebp+0x24u));
    /* 0051015e: test eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00510163: jne 0x51017e */ if (!fZ) goto L_0051017e;
L_00510165:; BB(0x00510165);
    /* 00510165: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
L_0051016a:; BB(0x0051016a);
    /* 0051016a: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 0051016f: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x510174u); f_0082dab0();
    /* 00510174: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x510179u); f_0082da80();
    /* 00510179: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0051017c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051017d: ret  */ FN_RET(0x00510050); r_esp += 4; return;
L_0051017e:; BB(0x0051017e);
    /* 0051017e: call 0x5022a0 */ r_esp -= 4; W32(r_esp, 0x510183u); f_005022a0();
    /* 00510183: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
    /* 00510188: jmp 0x51016a */ goto L_0051016a;
L_0051018a:; BB(0x0051018a);
    /* 0051018a: mov ecx, dword ptr [ebp + 0x104] */ r_ecx = R32((u32)(r_ebp+0x104u));
    /* 00510190: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x510195u); f_00831758();
    /* 00510195: jmp 0x51015a */ goto L_0051015a;
L_00510197:; BB(0x00510197);
    /* 00510197: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00510199: call 0x501fb8 */ r_esp -= 4; W32(r_esp, 0x51019eu); f_00501fb8();
    /* 0051019e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0051019f: jmp 0x51012c */ goto L_0051012c;
L_005101a1:; BB(0x005101a1);
    /* 005101a1: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x5101a6u); f_0082dbac();
    /* 005101a6: push 0x3faa3d71 */ { u32 v = 0x3faa3d71u; r_esp -= 4; W32(r_esp, v); }
    /* 005101ab: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x5101b0u); f_0061cdb0();
    /* 005101b0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005101b1: jmp 0x5100b6 */ goto L_005100b6;
}

void f_0051005f(void)
{
    FN_ENTER(0x0051005f);
    /* 0051005f: and al, 0xe8 */ {  u32 a = (u8)r_eax; u32 b = 0xe8u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00510061: rcl edi, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edi; while (c--) { u32 nc = a >> 31; a = (a << 1) | (u32)fC; fC = nc; } fO = ((a >> 31) ^ (a >> 30)) & 1; r_edi = a; }
    /* 00510063: xor dword ptr [eax], eax */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; W32(ad, r);  }
    /* 00510065: mov eax, dword ptr [ebp + 0x8c] */ r_eax = R32((u32)(r_ebp+0x8cu));
    /* 0051006b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051006c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051006d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0051006f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00510070: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x510075u); f_0082fa0c();
    /* 00510075: mov edx, dword ptr [ebp + 0xa4] */ r_edx = R32((u32)(r_ebp+0xa4u));
    /* 0051007b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0051007d: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x510082u); f_00830c04();
    /* 00510082: mov edx, dword ptr [ebp + 0x9c] */ r_edx = R32((u32)(r_ebp+0x9cu));
    /* 00510088: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0051008a: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x51008fu); f_0082e9e4();
    /* 0051008f: mov edx, dword ptr [ebp + 0xa0] */ r_edx = R32((u32)(r_ebp+0xa0u));
    /* 00510095: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00510097: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x51009cu); f_0082d8bc();
    /* 0051009c: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 005100a1: movzx edx, word ptr [ebp + 0x24] */ r_edx = (u32)R16((u32)(r_ebp+0x24u));
    /* 005100a5: mov dword ptr [0xaab518], eax */ W32((u32)(0xaab518u), r_eax);
    /* 005100aa: test edx, 0x400 */ {  u32 a = r_edx; u32 b = 0x400u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005100b0: jne 0x5101a1 */ if (!fZ) goto L_005101a1;
L_005100b6:; BB(0x005100b6);
    /* 005100b6: movsx edx, word ptr [ebp + 0x9a] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x9au));
    /* 005100bd: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005100bf: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x5100c4u); f_0082d8bc();
    /* 005100c4: movzx eax, word ptr [ebp + 0x24] */ r_eax = (u32)R16((u32)(r_ebp+0x24u));
    /* 005100c8: test eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005100cd: je 0x5100e5 */ if (fZ) goto L_005100e5;
L_005100cf:; BB(0x005100cf);
    /* 005100cf: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 005100d4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005100d6: je 0x5100e5 */ if (fZ) goto L_005100e5;
L_005100d8:; BB(0x005100d8);
    /* 005100d8: mov edx, dword ptr [eax + 0x194] */ r_edx = R32((u32)(r_eax+0x194u));
    /* 005100de: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005100e0: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x5100e5u); f_0082d8bc();
L_005100e5:; BB(0x005100e5);
    /* 005100e5: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x5100eau); f_0082dab0();
    /* 005100ea: movzx eax, word ptr [ebp + 0x24] */ r_eax = (u32)R16((u32)(r_ebp+0x24u));
    /* 005100ee: test eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005100f3: jne 0x510197 */ if (!fZ) goto L_00510197;
L_005100f9:; BB(0x005100f9);
    /* 005100f9: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 005100fe: mov dword ptr [0xaab518], eax */ W32((u32)(0xaab518u), r_eax);
    /* 00510103: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00510105: or eax, 0x8021 */ {  u32 a = r_eax; u32 b = 0x8021u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0051010a: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 0051010f: call 0x508a30 */ r_esp -= 4; W32(r_esp, 0x510114u); f_00508a30();
    /* 00510114: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00510116: je 0x510123 */ if (fZ) goto L_00510123;
L_00510118:; BB(0x00510118);
    /* 00510118: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051011a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051011c: call 0x508958 */ r_esp -= 4; W32(r_esp, 0x510121u); f_00508958();
    /* 00510121: jmp 0x51012c */ goto L_0051012c;
L_00510123:; BB(0x00510123);
    /* 00510123: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00510125: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00510127: call 0x508958 */ r_esp -= 4; W32(r_esp, 0x51012cu); f_00508958();
L_0051012c:; BB(0x0051012c);
    /* 0051012c: mov ecx, dword ptr [ebp + 0x108] */ r_ecx = R32((u32)(r_ebp+0x108u));
    /* 00510132: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x510137u); f_00829cc8();
    /* 00510137: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00510139: call 0x7a94a0 */ r_esp -= 4; W32(r_esp, 0x51013eu); f_007a94a0();
    /* 0051013e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0051013f: mov edx, dword ptr [ebp + 0x10c] */ r_edx = R32((u32)(r_ebp+0x10cu));
    /* 00510145: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00510147: je 0x51018a */ if (fZ) goto L_0051018a;
L_00510149:; BB(0x00510149);
    /* 00510149: push dword ptr [ebp + 0x110] */ { u32 v = R32((u32)(r_ebp+0x110u)); r_esp -= 4; W32(r_esp, v); }
    /* 0051014f: mov ecx, dword ptr [ebp + 0x104] */ r_ecx = R32((u32)(r_ebp+0x104u));
    /* 00510155: call 0x83bd00 */ r_esp -= 4; W32(r_esp, 0x51015au); f_0083bd00();
L_0051015a:; BB(0x0051015a);
    /* 0051015a: movzx eax, word ptr [ebp + 0x24] */ r_eax = (u32)R16((u32)(r_ebp+0x24u));
    /* 0051015e: test eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00510163: jne 0x51017e */ if (!fZ) goto L_0051017e;
L_00510165:; BB(0x00510165);
    /* 00510165: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
L_0051016a:; BB(0x0051016a);
    /* 0051016a: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 0051016f: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x510174u); f_0082dab0();
    /* 00510174: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x510179u); f_0082da80();
    /* 00510179: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0051017c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051017d: ret  */ FN_RET(0x0051005f); r_esp += 4; return;
L_0051017e:; BB(0x0051017e);
    /* 0051017e: call 0x5022a0 */ r_esp -= 4; W32(r_esp, 0x510183u); f_005022a0();
    /* 00510183: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
    /* 00510188: jmp 0x51016a */ goto L_0051016a;
L_0051018a:; BB(0x0051018a);
    /* 0051018a: mov ecx, dword ptr [ebp + 0x104] */ r_ecx = R32((u32)(r_ebp+0x104u));
    /* 00510190: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x510195u); f_00831758();
    /* 00510195: jmp 0x51015a */ goto L_0051015a;
L_00510197:; BB(0x00510197);
    /* 00510197: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00510199: call 0x501fb8 */ r_esp -= 4; W32(r_esp, 0x51019eu); f_00501fb8();
    /* 0051019e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0051019f: jmp 0x51012c */ goto L_0051012c;
L_005101a1:; BB(0x005101a1);
    /* 005101a1: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x5101a6u); f_0082dbac();
    /* 005101a6: push 0x3faa3d71 */ { u32 v = 0x3faa3d71u; r_esp -= 4; W32(r_esp, v); }
    /* 005101ab: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x5101b0u); f_0061cdb0();
    /* 005101b0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005101b1: jmp 0x5100b6 */ goto L_005100b6;
}

void f_005101b8(void) /* sub_5101B8 */
{
    FN_ENTER(0x005101b8);
    /* 005101b8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005101b9: mov ebp, esp */ r_ebp = r_esp;
    /* 005101bb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005101bd: push 0x8d40bc */ { u32 v = 0x8d40bcu; r_esp -= 4; W32(r_esp, v); }
    /* 005101c2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005101c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005101c9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005101d0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005101d3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005101d6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005101d9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005101dc: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005101df: push 0x134 */ { u32 v = 0x134u; r_esp -= 4; W32(r_esp, v); }
    /* 005101e4: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005101eb: call 0x508424 */ r_esp -= 4; W32(r_esp, 0x5101f0u); f_00508424();
    /* 005101f0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005101f1: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005101f4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005101f6: je 0x510232 */ if (fZ) goto L_00510232;
L_005101f8:; BB(0x005101f8);
    /* 005101f8: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005101ff: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00510206: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 00510209: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0051020c: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0051020f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00510212: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00510215: call 0x510238 */ r_esp -= 4; W32(r_esp, 0x51021au); f_00510238();
    /* 0051021a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0051021d: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00510224:; BB(0x00510224);
    /* 00510224: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00510227: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0051022e: mov esp, ebp */ r_esp = r_ebp;
    /* 00510230: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00510231: ret  */ FN_RET(0x005101b8); r_esp += 4; return;
L_00510232:; BB(0x00510232);
    /* 00510232: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00510234: jmp 0x510224 */ goto L_00510224;
}

void f_00510238(void) /* sub_510238 */
{
    FN_ENTER(0x00510238);
    /* 00510238: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00510239: mov ebp, esp */ r_ebp = r_esp;
    /* 0051023b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051023d: push 0x8d40d8 */ { u32 v = 0x8d40d8u; r_esp -= 4; W32(r_esp, v); }
    /* 00510242: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00510248: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00510249: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00510250: sub esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00510253: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00510256: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 00510259: mov dword ptr [ebp - 0x24], esi */ W32((u32)(r_ebp+0xffffffdcu), r_esi);
    /* 0051025c: mov dword ptr [ebp - 0x20], ebx */ W32((u32)(r_ebp+0xffffffe0u), r_ebx);
    /* 0051025f: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 00510262: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 00510265: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00510268: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0051026b: mov dword ptr [ebp - 0x54], ecx */ W32((u32)(r_ebp+0xffffffacu), r_ecx);
    /* 0051026e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0051026f: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00510272: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00510275: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 00510278: call 0x508460 */ r_esp -= 4; W32(r_esp, 0x51027du); f_00508460();
    /* 0051027d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00510284: mov esi, dword ptr [ebp - 0x54] */ r_esi = R32((u32)(r_ebp+0xffffffacu));
    /* 00510287: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0051028a: mov dword ptr [esi], 0xaff580 */ W32((u32)(r_esi), 0xaff580u);
    /* 00510290: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00510292: mov dword ptr [esi + 0x9c], eax */ W32((u32)(r_esi+0x9cu), r_eax);
    /* 00510298: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0051029b: mov dword ptr [esi + 0xa0], edx */ W32((u32)(r_esi+0xa0u), r_edx);
    /* 005102a1: mov ebx, dword ptr [ecx + 8] */ r_ebx = R32((u32)(r_ecx+0x8u));
    /* 005102a4: mov dword ptr [esi + 0xa4], ebx */ W32((u32)(r_esi+0xa4u), r_ebx);
    /* 005102aa: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x5102afu); f_008587a5();
    /* 005102af: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005102b2: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005102b5: fld dword ptr [edx + 0x18] */ FPUSH(R_F32((u32)(r_edx+0x18u)));
    /* 005102b8: fmul dword ptr [0x920484] */ ST(0) = ST(0) * R_F32((u32)(0x920484u));
    /* 005102be: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 005102c1: fild dword ptr [ebp - 0x50] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffb0u)));
    /* 005102c4: fdiv dword ptr [0x92047c] */ ST(0) = ST(0) / R_F32((u32)(0x92047cu));
    /* 005102ca: fadd dword ptr [0x920480] */ ST(0) = ST(0) + R_F32((u32)(0x920480u));
    /* 005102d0: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005102d3: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 005102d5: fadd dword ptr [eax] */ ST(0) = ST(0) + R_F32((u32)(r_eax));
    /* 005102d7: fstp dword ptr [ecx + 0x118] */ W_F32((u32)(r_ecx+0x118u), ST(0)); FPOP();
    /* 005102dd: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x5102e2u); f_008587a5();
    /* 005102e2: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005102e5: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005102e8: fld dword ptr [edx + 0x20] */ FPUSH(R_F32((u32)(r_edx+0x20u)));
    /* 005102eb: fmul dword ptr [0x920484] */ ST(0) = ST(0) * R_F32((u32)(0x920484u));
    /* 005102f1: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 005102f4: fild dword ptr [ebp - 0x48] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffb8u)));
    /* 005102f7: fdiv dword ptr [0x92047c] */ ST(0) = ST(0) / R_F32((u32)(0x92047cu));
    /* 005102fd: fadd dword ptr [0x920480] */ ST(0) = ST(0) + R_F32((u32)(0x920480u));
    /* 00510303: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00510306: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00510308: fadd dword ptr [eax + 8] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x8u));
    /* 0051030b: fstp dword ptr [ecx + 0x11c] */ W_F32((u32)(r_ecx+0x11cu), ST(0)); FPOP();
    /* 00510311: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x510316u); f_008587a5();
    /* 00510316: mov esi, dword ptr [ebp - 0x54] */ r_esi = R32((u32)(r_ebp+0xffffffacu));
    /* 00510319: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0051031c: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0051031f: fld dword ptr [edx + 0x1c] */ FPUSH(R_F32((u32)(r_edx+0x1cu)));
    /* 00510322: fmul dword ptr [0x920484] */ ST(0) = ST(0) * R_F32((u32)(0x920484u));
    /* 00510328: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 0051032b: fild dword ptr [ebp - 0x48] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffb8u)));
    /* 0051032e: fdiv dword ptr [0x92047c] */ ST(0) = ST(0) / R_F32((u32)(0x92047cu));
    /* 00510334: fadd dword ptr [0x920480] */ ST(0) = ST(0) + R_F32((u32)(0x920480u));
    /* 0051033a: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0051033c: fadd dword ptr [ecx + 4] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x4u));
    /* 0051033f: fst dword ptr [esi + 0x78] */ W_F32((u32)(r_esi+0x78u), ST(0));
    /* 00510342: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00510344: mov dword ptr [esi + 0x34], eax */ W32((u32)(r_esi+0x34u), r_eax);
    /* 00510347: mov ebx, dword ptr [ecx + 8] */ r_ebx = R32((u32)(r_ecx+0x8u));
    /* 0051034a: fstp dword ptr [esi + 0x38] */ W_F32((u32)(r_esi+0x38u), ST(0)); FPOP();
    /* 0051034d: mov dword ptr [esi + 0x3c], ebx */ W32((u32)(r_esi+0x3cu), r_ebx);
    /* 00510350: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x510355u); f_008587a5();
    /* 00510355: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 00510358: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 0051035b: fild dword ptr [ebp - 0x48] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffb8u)));
    /* 0051035e: fdiv dword ptr [0x92047c] */ ST(0) = ST(0) / R_F32((u32)(0x92047cu));
    /* 00510364: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00510367: fmul dword ptr [eax + 0x28] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x28u));
    /* 0051036a: fadd dword ptr [eax + 0x24] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x24u));
    /* 0051036d: fst dword ptr [edx + 0x2c] */ W_F32((u32)(r_edx+0x2cu), ST(0));
    /* 00510370: fstp dword ptr [edx + 0x30] */ W_F32((u32)(r_edx+0x30u), ST(0)); FPOP();
    /* 00510373: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x510378u); f_008587a5();
    /* 00510378: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0051037b: fild dword ptr [edx + 0x48] */ FPUSH((long double)(i32)R32((u32)(r_edx+0x48u)));
    /* 0051037e: fild dword ptr [edx + 0x4c] */ FPUSH((long double)(i32)R32((u32)(r_edx+0x4cu)));
    /* 00510381: movzx ecx, byte ptr [edx + 0x88] */ r_ecx = (u32)R8((u32)(r_edx+0x88u));
    /* 00510388: fld dword ptr [0x920478] */ FPUSH(R_F32((u32)(0x920478u)));
    /* 0051038e: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 00510391: fild dword ptr [ebp - 0x48] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffb8u)));
    /* 00510394: fdiv dword ptr [0x92047c] */ ST(0) = ST(0) / R_F32((u32)(0x92047cu));
    /* 0051039a: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0051039c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0051039e: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 005103a0: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005103a2: fnstcw word ptr [ebp - 0x40] */ W16((u32)(r_ebp+0xffffffc0u), fcw);
    /* 005103a5: movzx eax, word ptr [ebp - 0x40] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc0u));
    /* 005103a9: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005103ae: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 005103b1: fldcw word ptr [ebp - 0x38] */ fcw = R16((u32)(r_ebp+0xffffffc8u));
    /* 005103b4: fistp dword ptr [ebp - 0x30] */ W32((u32)(r_ebp+0xffffffd0u), (u32)fx_int32(ST(0))); FPOP();
    /* 005103b7: fldcw word ptr [ebp - 0x40] */ fcw = R16((u32)(r_ebp+0xffffffc0u));
    /* 005103ba: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 005103bd: test cl, 1 */ {  u32 a = (u8)r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005103c0: mov ebx, dword ptr [ebp - 0x30] */ r_ebx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005103c3: je 0x5103dd */ if (fZ) goto L_005103dd;
L_005103c5:; BB(0x005103c5);
    /* 005103c5: movzx edx, word ptr [eax + 0x1c] */ r_edx = (u32)R16((u32)(r_eax+0x1cu));
    /* 005103c9: mov ecx, dword ptr [edx*4 + 0xaaee20] */ r_ecx = R32((u32)(r_edx*4+0xaaee20u));
    /* 005103d0: mov ebx, dword ptr [ecx + 0x28] */ r_ebx = R32((u32)(r_ecx+0x28u));
    /* 005103d3: fild dword ptr [ebx + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_ebx+0xcu)));
    /* 005103d6: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 005103d8: fstp dword ptr [eax + 0x60] */ W_F32((u32)(r_eax+0x60u), ST(0)); FPOP();
    /* 005103db: jmp 0x5103e8 */ goto L_005103e8;
L_005103dd:; BB(0x005103dd);
    /* 005103dd: mov dword ptr [ebp - 0x48], ebx */ W32((u32)(r_ebp+0xffffffb8u), r_ebx);
    /* 005103e0: fild dword ptr [ebp - 0x48] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffb8u)));
    /* 005103e3: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 005103e5: fstp dword ptr [eax + 0x60] */ W_F32((u32)(r_eax+0x60u), ST(0)); FPOP();
L_005103e8:; BB(0x005103e8);
    /* 005103e8: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x5103edu); f_008587a5();
    /* 005103ed: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 005103f0: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 005103f3: fild dword ptr [ebp - 0x48] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffb8u)));
    /* 005103f6: fdiv dword ptr [0x92047c] */ ST(0) = ST(0) / R_F32((u32)(0x92047cu));
    /* 005103fc: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005103ff: fmul dword ptr [eax + 0x74] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x74u));
    /* 00510402: fadd dword ptr [eax + 0x30] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x30u));
    /* 00510405: fstp dword ptr [edx + 0x40] */ W_F32((u32)(r_edx+0x40u), ST(0)); FPOP();
    /* 00510408: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x51040du); f_008587a5();
    /* 0051040d: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 00510410: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 00510413: fild dword ptr [ebp - 0x48] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffb8u)));
    /* 00510416: fdiv dword ptr [0x92047c] */ ST(0) = ST(0) / R_F32((u32)(0x92047cu));
    /* 0051041c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0051041f: fmul dword ptr [eax + 0x68] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x68u));
    /* 00510422: fadd dword ptr [eax + 0x34] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x34u));
    /* 00510425: fstp dword ptr [edx + 0x44] */ W_F32((u32)(r_edx+0x44u), ST(0)); FPOP();
    /* 00510428: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x51042du); f_008587a5();
    /* 0051042d: fld dword ptr [0x920474] */ FPUSH(R_F32((u32)(0x920474u)));
    /* 00510433: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 00510436: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 00510439: fild dword ptr [ebp - 0x48] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffb8u)));
    /* 0051043c: fdiv dword ptr [0x92047c] */ ST(0) = ST(0) / R_F32((u32)(0x92047cu));
    /* 00510442: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00510444: fmul dword ptr [0x920470] */ ST(0) = ST(0) * R_F32((u32)(0x920470u));
    /* 0051044a: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 0051044c: fnstcw word ptr [ebp - 0x40] */ W16((u32)(r_ebp+0xffffffc0u), fcw);
    /* 0051044f: movzx eax, word ptr [ebp - 0x40] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc0u));
    /* 00510453: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00510458: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0051045b: fldcw word ptr [ebp - 0x38] */ fcw = R16((u32)(r_ebp+0xffffffc8u));
    /* 0051045e: fistp dword ptr [ebp - 0x30] */ W32((u32)(r_ebp+0xffffffd0u), (u32)fx_int32(ST(0))); FPOP();
    /* 00510461: fldcw word ptr [ebp - 0x40] */ fcw = R16((u32)(r_ebp+0xffffffc0u));
    /* 00510464: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00510467: mov dword ptr [edx + 0x12c], eax */ W32((u32)(r_edx+0x12cu), r_eax);
    /* 0051046d: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x510472u); f_008587a5();
    /* 00510472: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 00510475: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 00510478: fild dword ptr [ebp - 0x48] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffb8u)));
    /* 0051047b: fdiv dword ptr [0x92047c] */ ST(0) = ST(0) / R_F32((u32)(0x92047cu));
    /* 00510481: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00510484: fmul dword ptr [eax + 0x64] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x64u));
    /* 00510487: fadd dword ptr [eax + 0x60] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x60u));
    /* 0051048a: fstp dword ptr [edx + 0x124] */ W_F32((u32)(r_edx+0x124u), ST(0)); FPOP();
    /* 00510490: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x510495u); f_008587a5();
    /* 00510495: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 00510498: fld dword ptr [0x920474] */ FPUSH(R_F32((u32)(0x920474u)));
    /* 0051049e: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 005104a1: fild dword ptr [ebp - 0x48] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffb8u)));
    /* 005104a4: fdiv dword ptr [0x92047c] */ ST(0) = ST(0) / R_F32((u32)(0x92047cu));
    /* 005104aa: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 005104ac: fmul dword ptr [0x920470] */ ST(0) = ST(0) * R_F32((u32)(0x920470u));
    /* 005104b2: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 005104b4: fnstcw word ptr [ebp - 0x40] */ W16((u32)(r_ebp+0xffffffc0u), fcw);
    /* 005104b7: movzx eax, word ptr [ebp - 0x40] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc0u));
    /* 005104bb: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005104c0: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 005104c3: fldcw word ptr [ebp - 0x38] */ fcw = R16((u32)(r_ebp+0xffffffc8u));
    /* 005104c6: fistp dword ptr [edx + 0x130] */ W32((u32)(r_edx+0x130u), (u32)fx_int32(ST(0))); FPOP();
    /* 005104cc: fldcw word ptr [ebp - 0x40] */ fcw = R16((u32)(r_ebp+0xffffffc0u));
    /* 005104cf: mov eax, dword ptr [edx + 0x12c] */ r_eax = R32((u32)(r_edx+0x12cu));
    /* 005104d5: mov word ptr [edx + 0x9a], ax */ W16((u32)(r_edx+0x9au), (u16)r_eax);
    /* 005104dc: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x5104e1u); f_008587a5();
    /* 005104e1: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 005104e4: mov dword ptr [edx + 0x128], 0 */ W32((u32)(r_edx+0x128u), 0x0u);
    /* 005104ee: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 005104f1: fild dword ptr [ebp - 0x48] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffb8u)));
    /* 005104f4: fdiv dword ptr [0x92047c] */ ST(0) = ST(0) / R_F32((u32)(0x92047cu));
    /* 005104fa: fadd dword ptr [0x920480] */ ST(0) = ST(0) + R_F32((u32)(0x920480u));
    /* 00510500: movzx eax, word ptr [edx + 0x24] */ r_eax = (u32)R16((u32)(r_edx+0x24u));
    /* 00510504: fstp dword ptr [edx + 0x6c] */ W_F32((u32)(r_edx+0x6cu), ST(0)); FPOP();
    /* 00510507: test eax, 0x2000 */ {  u32 a = r_eax; u32 b = 0x2000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0051050c: jne 0x510526 */ if (!fZ) goto L_00510526;
L_0051050e:; BB(0x0051050e);
    /* 0051050e: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00510511: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00510514: mov eax, edx */ r_eax = r_edx;
    /* 00510516: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00510519: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00510520: mov esp, ebp */ r_esp = r_ebp;
    /* 00510522: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00510523: ret 0x10 */ FN_RET(0x00510238); r_esp += 20; return;
L_00510526:; BB(0x00510526);
    /* 00510526: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 00510528: call 0x505918 */ r_esp -= 4; W32(r_esp, 0x51052du); f_00505918();
    /* 0051052d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0051052e: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 00510531: jmp 0x51050e */ goto L_0051050e;
}

void f_00510534(void) /* sub_510534 */
{
    FN_ENTER(0x00510534);
    /* 00510534: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00510535: mov ebp, esp */ r_ebp = r_esp;
    /* 00510537: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00510539: push 0x8d4100 */ { u32 v = 0x8d4100u; r_esp -= 4; W32(r_esp, v); }
    /* 0051053e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00510544: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00510545: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0051054c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0051054f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00510552: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00510555: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00510558: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0051055b: push 0x134 */ { u32 v = 0x134u; r_esp -= 4; W32(r_esp, v); }
    /* 00510560: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00510567: call 0x508424 */ r_esp -= 4; W32(r_esp, 0x51056cu); f_00508424();
    /* 0051056c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0051056d: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00510570: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00510572: je 0x5105b8 */ if (fZ) goto L_005105b8;
L_00510574:; BB(0x00510574);
    /* 00510574: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0051057b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00510582: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 00510586: movzx edx, word ptr [ebp + 0x18] */ r_edx = (u32)R16((u32)(r_ebp+0x18u));
    /* 0051058a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0051058d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051058e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051058f: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 00510592: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00510595: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00510598: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0051059b: call 0x5105bc */ r_esp -= 4; W32(r_esp, 0x5105a0u); f_005105bc();
    /* 005105a0: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005105a3: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005105aa:; BB(0x005105aa);
    /* 005105aa: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005105ad: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005105b4: mov esp, ebp */ r_esp = r_ebp;
    /* 005105b6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005105b7: ret  */ FN_RET(0x00510534); r_esp += 4; return;
L_005105b8:; BB(0x005105b8);
    /* 005105b8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005105ba: jmp 0x5105aa */ goto L_005105aa;
}

void f_005105bc(void) /* sub_5105BC */
{
    FN_ENTER(0x005105bc);
    /* 005105bc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005105bd: mov ebp, esp */ r_ebp = r_esp;
    /* 005105bf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005105c1: push 0x8d411c */ { u32 v = 0x8d411cu; r_esp -= 4; W32(r_esp, v); }
    /* 005105c6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005105cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005105cd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005105d4: sub esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005105d7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005105da: mov dword ptr [ebp - 0x30], edi */ W32((u32)(r_ebp+0xffffffd0u), r_edi);
    /* 005105dd: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
    /* 005105e0: mov dword ptr [ebp - 0x28], ebx */ W32((u32)(r_ebp+0xffffffd8u), r_ebx);
    /* 005105e3: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 005105e6: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 005105e9: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005105ec: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005105ef: mov dword ptr [ebp - 0x5c], ecx */ W32((u32)(r_ebp+0xffffffa4u), r_ecx);
    /* 005105f2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005105f3: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005105f6: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005105f9: movzx eax, word ptr [ebp + 0x18] */ r_eax = (u32)R16((u32)(r_ebp+0x18u));
    /* 005105fd: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 00510600: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00510603: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 00510607: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0051060a: call 0x508460 */ r_esp -= 4; W32(r_esp, 0x51060fu); f_00508460();
    /* 0051060f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00510616: mov esi, dword ptr [ebp - 0x5c] */ r_esi = R32((u32)(r_ebp+0xffffffa4u));
    /* 00510619: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0051061c: mov dword ptr [esi], 0xaff580 */ W32((u32)(r_esi), 0xaff580u);
    /* 00510622: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00510624: mov dword ptr [esi + 0x9c], eax */ W32((u32)(r_esi+0x9cu), r_eax);
    /* 0051062a: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0051062d: mov dword ptr [esi + 0xa0], edx */ W32((u32)(r_esi+0xa0u), r_edx);
    /* 00510633: mov ebx, dword ptr [ecx + 8] */ r_ebx = R32((u32)(r_ecx+0x8u));
    /* 00510636: mov dword ptr [esi + 0xa4], ebx */ W32((u32)(r_esi+0xa4u), r_ebx);
    /* 0051063c: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x510641u); f_008587a5();
    /* 00510641: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00510644: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 00510647: fld dword ptr [edx + 0x18] */ FPUSH(R_F32((u32)(r_edx+0x18u)));
    /* 0051064a: fmul dword ptr [0x920468] */ ST(0) = ST(0) * R_F32((u32)(0x920468u));
    /* 00510650: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 00510653: fild dword ptr [ebp - 0x58] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffa8u)));
    /* 00510656: fdiv dword ptr [0x920460] */ ST(0) = ST(0) / R_F32((u32)(0x920460u));
    /* 0051065c: fadd dword ptr [0x920464] */ ST(0) = ST(0) + R_F32((u32)(0x920464u));
    /* 00510662: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00510665: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00510667: fadd dword ptr [eax] */ ST(0) = ST(0) + R_F32((u32)(r_eax));
    /* 00510669: fstp dword ptr [ecx + 0x118] */ W_F32((u32)(r_ecx+0x118u), ST(0)); FPOP();
    /* 0051066f: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x510674u); f_008587a5();
    /* 00510674: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00510677: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0051067a: fld dword ptr [edx + 0x20] */ FPUSH(R_F32((u32)(r_edx+0x20u)));
    /* 0051067d: fmul dword ptr [0x920468] */ ST(0) = ST(0) * R_F32((u32)(0x920468u));
    /* 00510683: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 00510686: fild dword ptr [ebp - 0x50] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffb0u)));
    /* 00510689: fdiv dword ptr [0x920460] */ ST(0) = ST(0) / R_F32((u32)(0x920460u));
    /* 0051068f: fadd dword ptr [0x920464] */ ST(0) = ST(0) + R_F32((u32)(0x920464u));
    /* 00510695: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00510698: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0051069a: fadd dword ptr [eax + 8] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x8u));
    /* 0051069d: fstp dword ptr [ecx + 0x11c] */ W_F32((u32)(r_ecx+0x11cu), ST(0)); FPOP();
    /* 005106a3: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x5106a8u); f_008587a5();
    /* 005106a8: mov ecx, eax */ r_ecx = r_eax;
    /* 005106aa: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 005106ad: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005106b0: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005106b3: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 005106b6: fld dword ptr [edx + 0x1c] */ FPUSH(R_F32((u32)(r_edx+0x1cu)));
    /* 005106b9: fmul dword ptr [0x920468] */ ST(0) = ST(0) * R_F32((u32)(0x920468u));
    /* 005106bf: mov dword ptr [ebp - 0x50], ecx */ W32((u32)(r_ebp+0xffffffb0u), r_ecx);
    /* 005106c2: fild dword ptr [ebp - 0x50] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffb0u)));
    /* 005106c5: fdiv dword ptr [0x920460] */ ST(0) = ST(0) / R_F32((u32)(0x920460u));
    /* 005106cb: fadd dword ptr [0x920464] */ ST(0) = ST(0) + R_F32((u32)(0x920464u));
    /* 005106d1: test edi, 0x80 */ {  u32 a = r_edi; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005106d7: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 005106d9: fadd dword ptr [ebx + 4] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x4u));
    /* 005106dc: fst dword ptr [eax + 0x78] */ W_F32((u32)(r_eax+0x78u), ST(0));
    /* 005106df: mov ecx, dword ptr [ebx] */ r_ecx = R32((u32)(r_ebx));
    /* 005106e1: mov dword ptr [eax + 0x34], ecx */ W32((u32)(r_eax+0x34u), r_ecx);
    /* 005106e4: mov esi, dword ptr [ebx + 8] */ r_esi = R32((u32)(r_ebx+0x8u));
    /* 005106e7: fstp dword ptr [eax + 0x38] */ W_F32((u32)(r_eax+0x38u), ST(0)); FPOP();
    /* 005106ea: mov dword ptr [eax + 0x3c], esi */ W32((u32)(r_eax+0x3cu), r_esi);
    /* 005106ed: mov word ptr [eax + 0x24], di */ W16((u32)(r_eax+0x24u), (u16)r_edi);
    /* 005106f1: je 0x5106fa */ if (fZ) goto L_005106fa;
L_005106f3:; BB(0x005106f3);
    /* 005106f3: mov byte ptr [eax + 0x99], 1 */ W8((u32)(r_eax+0x99u), 0x1u);
L_005106fa:; BB(0x005106fa);
    /* 005106fa: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005106fd: mov word ptr [eax + 0x28], dx */ W16((u32)(r_eax+0x28u), (u16)r_edx);
    /* 00510701: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x510706u); f_008587a5();
    /* 00510706: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 00510709: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 0051070c: fild dword ptr [ebp - 0x50] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffb0u)));
    /* 0051070f: fdiv dword ptr [0x920460] */ ST(0) = ST(0) / R_F32((u32)(0x920460u));
    /* 00510715: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00510718: fmul dword ptr [eax + 0x28] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x28u));
    /* 0051071b: fadd dword ptr [eax + 0x24] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x24u));
    /* 0051071e: fst dword ptr [edx + 0x2c] */ W_F32((u32)(r_edx+0x2cu), ST(0));
    /* 00510721: fstp dword ptr [edx + 0x30] */ W_F32((u32)(r_edx+0x30u), ST(0)); FPOP();
    /* 00510724: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x510729u); f_008587a5();
    /* 00510729: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0051072c: fild dword ptr [edx + 0x48] */ FPUSH((long double)(i32)R32((u32)(r_edx+0x48u)));
    /* 0051072f: fild dword ptr [edx + 0x4c] */ FPUSH((long double)(i32)R32((u32)(r_edx+0x4cu)));
    /* 00510732: movzx ecx, byte ptr [edx + 0x88] */ r_ecx = (u32)R8((u32)(r_edx+0x88u));
    /* 00510739: fld dword ptr [0x92045c] */ FPUSH(R_F32((u32)(0x92045cu)));
    /* 0051073f: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 00510742: fild dword ptr [ebp - 0x50] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffb0u)));
    /* 00510745: fdiv dword ptr [0x920460] */ ST(0) = ST(0) / R_F32((u32)(0x920460u));
    /* 0051074b: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0051074d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0051074f: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00510751: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00510753: fnstcw word ptr [ebp - 0x48] */ W16((u32)(r_ebp+0xffffffb8u), fcw);
    /* 00510756: movzx eax, word ptr [ebp - 0x48] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffb8u));
    /* 0051075a: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0051075f: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00510762: fldcw word ptr [ebp - 0x40] */ fcw = R16((u32)(r_ebp+0xffffffc0u));
    /* 00510765: fistp dword ptr [ebp - 0x38] */ W32((u32)(r_ebp+0xffffffc8u), (u32)fx_int32(ST(0))); FPOP();
    /* 00510768: fldcw word ptr [ebp - 0x48] */ fcw = R16((u32)(r_ebp+0xffffffb8u));
    /* 0051076b: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 0051076e: test cl, 1 */ {  u32 a = (u8)r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00510771: mov ebx, dword ptr [ebp - 0x38] */ r_ebx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00510774: je 0x51078e */ if (fZ) goto L_0051078e;
L_00510776:; BB(0x00510776);
    /* 00510776: movzx edx, word ptr [eax + 0x1c] */ r_edx = (u32)R16((u32)(r_eax+0x1cu));
    /* 0051077a: mov ecx, dword ptr [edx*4 + 0xaaee20] */ r_ecx = R32((u32)(r_edx*4+0xaaee20u));
    /* 00510781: mov ebx, dword ptr [ecx + 0x28] */ r_ebx = R32((u32)(r_ecx+0x28u));
    /* 00510784: fild dword ptr [ebx + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_ebx+0xcu)));
    /* 00510787: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 00510789: fstp dword ptr [eax + 0x60] */ W_F32((u32)(r_eax+0x60u), ST(0)); FPOP();
    /* 0051078c: jmp 0x510799 */ goto L_00510799;
L_0051078e:; BB(0x0051078e);
    /* 0051078e: mov dword ptr [ebp - 0x50], ebx */ W32((u32)(r_ebp+0xffffffb0u), r_ebx);
    /* 00510791: fild dword ptr [ebp - 0x50] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffb0u)));
    /* 00510794: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 00510796: fstp dword ptr [eax + 0x60] */ W_F32((u32)(r_eax+0x60u), ST(0)); FPOP();
L_00510799:; BB(0x00510799);
    /* 00510799: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x51079eu); f_008587a5();
    /* 0051079e: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 005107a1: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 005107a4: fild dword ptr [ebp - 0x50] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffb0u)));
    /* 005107a7: fdiv dword ptr [0x920460] */ ST(0) = ST(0) / R_F32((u32)(0x920460u));
    /* 005107ad: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005107b0: fmul dword ptr [eax + 0x74] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x74u));
    /* 005107b3: fadd dword ptr [eax + 0x30] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x30u));
    /* 005107b6: fstp dword ptr [edx + 0x40] */ W_F32((u32)(r_edx+0x40u), ST(0)); FPOP();
    /* 005107b9: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x5107beu); f_008587a5();
    /* 005107be: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 005107c1: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 005107c4: fild dword ptr [ebp - 0x50] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffb0u)));
    /* 005107c7: fdiv dword ptr [0x920460] */ ST(0) = ST(0) / R_F32((u32)(0x920460u));
    /* 005107cd: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005107d0: fmul dword ptr [eax + 0x68] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x68u));
    /* 005107d3: fadd dword ptr [eax + 0x34] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x34u));
    /* 005107d6: fstp dword ptr [edx + 0x44] */ W_F32((u32)(r_edx+0x44u), ST(0)); FPOP();
    /* 005107d9: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x5107deu); f_008587a5();
    /* 005107de: fld dword ptr [0x920458] */ FPUSH(R_F32((u32)(0x920458u)));
    /* 005107e4: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 005107e7: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 005107ea: fild dword ptr [ebp - 0x50] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffb0u)));
    /* 005107ed: fdiv dword ptr [0x920460] */ ST(0) = ST(0) / R_F32((u32)(0x920460u));
    /* 005107f3: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 005107f5: fmul dword ptr [0x920454] */ ST(0) = ST(0) * R_F32((u32)(0x920454u));
    /* 005107fb: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 005107fd: fnstcw word ptr [ebp - 0x48] */ W16((u32)(r_ebp+0xffffffb8u), fcw);
    /* 00510800: movzx eax, word ptr [ebp - 0x48] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffb8u));
    /* 00510804: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00510809: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0051080c: fldcw word ptr [ebp - 0x40] */ fcw = R16((u32)(r_ebp+0xffffffc0u));
    /* 0051080f: fistp dword ptr [ebp - 0x38] */ W32((u32)(r_ebp+0xffffffc8u), (u32)fx_int32(ST(0))); FPOP();
    /* 00510812: fldcw word ptr [ebp - 0x48] */ fcw = R16((u32)(r_ebp+0xffffffb8u));
    /* 00510815: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00510818: mov dword ptr [edx + 0x12c], eax */ W32((u32)(r_edx+0x12cu), r_eax);
    /* 0051081e: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x510823u); f_008587a5();
    /* 00510823: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 00510826: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 00510829: fild dword ptr [ebp - 0x50] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffb0u)));
    /* 0051082c: fdiv dword ptr [0x920460] */ ST(0) = ST(0) / R_F32((u32)(0x920460u));
    /* 00510832: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00510835: fmul dword ptr [eax + 0x64] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x64u));
    /* 00510838: fadd dword ptr [eax + 0x60] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x60u));
    /* 0051083b: fstp dword ptr [edx + 0x124] */ W_F32((u32)(r_edx+0x124u), ST(0)); FPOP();
    /* 00510841: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x510846u); f_008587a5();
    /* 00510846: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 00510849: fld dword ptr [0x920458] */ FPUSH(R_F32((u32)(0x920458u)));
    /* 0051084f: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 00510852: fild dword ptr [ebp - 0x50] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffb0u)));
    /* 00510855: fdiv dword ptr [0x920460] */ ST(0) = ST(0) / R_F32((u32)(0x920460u));
    /* 0051085b: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0051085d: fmul dword ptr [0x920454] */ ST(0) = ST(0) * R_F32((u32)(0x920454u));
    /* 00510863: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 00510865: fnstcw word ptr [ebp - 0x48] */ W16((u32)(r_ebp+0xffffffb8u), fcw);
    /* 00510868: movzx eax, word ptr [ebp - 0x48] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffb8u));
    /* 0051086c: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00510871: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00510874: fldcw word ptr [ebp - 0x40] */ fcw = R16((u32)(r_ebp+0xffffffc0u));
    /* 00510877: fistp dword ptr [edx + 0x130] */ W32((u32)(r_edx+0x130u), (u32)fx_int32(ST(0))); FPOP();
    /* 0051087d: fldcw word ptr [ebp - 0x48] */ fcw = R16((u32)(r_ebp+0xffffffb8u));
    /* 00510880: mov eax, dword ptr [edx + 0x12c] */ r_eax = R32((u32)(r_edx+0x12cu));
    /* 00510886: mov word ptr [edx + 0x9a], ax */ W16((u32)(r_edx+0x9au), (u16)r_eax);
    /* 0051088d: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x510892u); f_008587a5();
    /* 00510892: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 00510895: mov dword ptr [edx + 0x128], 0 */ W32((u32)(r_edx+0x128u), 0x0u);
    /* 0051089f: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 005108a2: fild dword ptr [ebp - 0x50] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffb0u)));
    /* 005108a5: fdiv dword ptr [0x920460] */ ST(0) = ST(0) / R_F32((u32)(0x920460u));
    /* 005108ab: fadd dword ptr [0x920464] */ ST(0) = ST(0) + R_F32((u32)(0x920464u));
    /* 005108b1: movzx eax, word ptr [edx + 0x24] */ r_eax = (u32)R16((u32)(r_edx+0x24u));
    /* 005108b5: fstp dword ptr [edx + 0x6c] */ W_F32((u32)(r_edx+0x6cu), ST(0)); FPOP();
    /* 005108b8: test eax, 0x2000 */ {  u32 a = r_eax; u32 b = 0x2000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005108bd: jne 0x5108da */ if (!fZ) goto L_005108da;
L_005108bf:; BB(0x005108bf);
    /* 005108bf: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 005108c2: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 005108c5: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005108c8: mov eax, edx */ r_eax = r_edx;
    /* 005108ca: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005108cd: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005108d4: mov esp, ebp */ r_esp = r_ebp;
    /* 005108d6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005108d7: ret 0x18 */ FN_RET(0x005105bc); r_esp += 28; return;
L_005108da:; BB(0x005108da);
    /* 005108da: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 005108dc: call 0x505918 */ r_esp -= 4; W32(r_esp, 0x5108e1u); f_00505918();
    /* 005108e1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005108e2: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 005108e5: jmp 0x5108bf */ goto L_005108bf;
}

void f_005108e8(void) /* sub_5108E8 */
{
    FN_ENTER(0x005108e8);
    /* 005108e8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005108e9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005108eb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005108ed: call 0x51090c */ r_esp -= 4; W32(r_esp, 0x5108f2u); f_0051090c();
    /* 005108f2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005108f6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005108f8: jne 0x5108fe */ if (!fZ) goto L_005108fe;
L_005108fa:; BB(0x005108fa);
    /* 005108fa: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005108fb: ret 4 */ FN_RET(0x005108e8); r_esp += 8; return;
L_005108fe:; BB(0x005108fe);
    /* 005108fe: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005108ff: call 0x5083bc */ r_esp -= 4; W32(r_esp, 0x510904u); f_005083bc();
    /* 00510904: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00510905: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00510906: ret 4 */ FN_RET(0x005108e8); r_esp += 8; return;
}

void f_0051090c(void) /* sub_51090C */
{
    FN_ENTER(0x0051090c);
    /* 0051090c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0051090d: mov ebp, esp */ r_ebp = r_esp;
    /* 0051090f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00510911: push 0x8d4138 */ { u32 v = 0x8d4138u; r_esp -= 4; W32(r_esp, v); }
    /* 00510916: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0051091c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051091d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00510924: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00510927: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0051092a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0051092d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00510930: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00510933: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00510936: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00510939: mov dword ptr [ecx], 0xaff658 */ W32((u32)(r_ecx), 0xaff658u);
    /* 0051093f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00510946: call 0x508368 */ r_esp -= 4; W32(r_esp, 0x51094bu); f_00508368();
    /* 0051094b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0051094e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00510955: mov esp, ebp */ r_esp = r_ebp;
    /* 00510957: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00510958: ret  */ FN_RET(0x0051090c); r_esp += 4; return;
}

void f_0051095c(void) /* sub_51095C */
{
    FN_ENTER(0x0051095c);
    /* 0051095c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0051095d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0051095e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0051095f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00510960: sub esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00510963: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00510965: fld dword ptr [ebp + 0x6c] */ FPUSH(R_F32((u32)(r_ebp+0x6cu)));
    /* 00510968: mov edx, dword ptr [ebp + 0x20] */ r_edx = R32((u32)(r_ebp+0x20u));
    /* 0051096b: fmul dword ptr [edx + 0x50] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x50u));
    /* 0051096e: fst dword ptr [ebp + 0x6c] */ W_F32((u32)(r_ebp+0x6cu), ST(0));
    /* 00510971: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00510975: lea ebx, [ebp + 0x74] */ r_ebx = (u32)(r_ebp+0x74u);
    /* 00510978: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 0051097b: lea eax, [ebp + 0x34] */ r_eax = (u32)(r_ebp+0x34u);
    /* 0051097e: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00510982: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 00510986: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0051098a: call 0x7a8f28 */ r_esp -= 4; W32(r_esp, 0x51098fu); f_007a8f28();
    /* 0051098f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00510991: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 00510995: fsub dword ptr [ebp + 0x74] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x74u));
    /* 00510998: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 0051099c: fsub dword ptr [ebp + 0x78] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x78u));
    /* 0051099f: movzx eax, word ptr [ebp + 0x26] */ r_eax = (u32)R16((u32)(r_ebp+0x26u));
    /* 005109a3: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 005109a7: fsub dword ptr [ebp + 0x7c] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x7cu));
    /* 005109aa: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005109ac: fst dword ptr [ebp + 0x40] */ W_F32((u32)(r_ebp+0x40u), ST(0));
    /* 005109af: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005109b1: fst dword ptr [ebp + 0x44] */ W_F32((u32)(r_ebp+0x44u), ST(0));
    /* 005109b4: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005109b6: fst dword ptr [ebp + 0x48] */ W_F32((u32)(r_ebp+0x48u), ST(0));
    /* 005109b9: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005109bb: je 0x5109e6 */ if (fZ) goto L_005109e6;
L_005109bd:; BB(0x005109bd);
    /* 005109bd: lea edx, [esp + 0x1c] */ r_edx = (u32)(r_esp+0x1cu);
    /* 005109c1: fld dword ptr [ebp + 0xb0] */ FPUSH(R_F32((u32)(r_ebp+0xb0u)));
    /* 005109c7: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 005109c9: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 005109cb: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 005109cd: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005109cf: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 005109d3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005109d5: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 005109d9: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 005109dd: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005109df: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x5109e4u); f_0082ebac();
    /* 005109e4: jmp 0x5109f6 */ goto L_005109f6;
L_005109e6:; BB(0x005109e6);
    /* 005109e6: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 005109e8: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 005109ea: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005109ec: lea edx, [ebp + 0x40] */ r_edx = (u32)(r_ebp+0x40u);
    /* 005109ef: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005109f1: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x5109f6u); f_0082ebac();
L_005109f6:; BB(0x005109f6);
    /* 005109f6: mov edx, dword ptr [ebp + 0x20] */ r_edx = R32((u32)(r_ebp+0x20u));
    /* 005109f9: fld dword ptr [ebp + 0x2c] */ FPUSH(R_F32((u32)(r_ebp+0x2cu)));
    /* 005109fc: fmul dword ptr [edx + 0x2c] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x2cu));
    /* 005109ff: fld dword ptr [ebp + 0x30] */ FPUSH(R_F32((u32)(r_ebp+0x30u)));
    /* 00510a02: movzx esi, word ptr [ebp + 0x26] */ r_esi = (u32)R16((u32)(r_ebp+0x26u));
    /* 00510a06: fld dword ptr [ebp + 0x60] */ FPUSH(R_F32((u32)(r_ebp+0x60u)));
    /* 00510a09: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00510a0b: fstp dword ptr [ebp + 0x2c] */ W_F32((u32)(r_ebp+0x2cu), ST(0)); FPOP();
    /* 00510a0e: fmul dword ptr [edx + 0x2c] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x2cu));
    /* 00510a11: fstp dword ptr [ebp + 0x30] */ W_F32((u32)(r_ebp+0x30u), ST(0)); FPOP();
    /* 00510a14: test esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00510a1a: je 0x510a2c */ if (fZ) goto L_00510a2c;
L_00510a1c:; BB(0x00510a1c);
    /* 00510a1c: fld dword ptr [ebp + 0xb4] */ FPUSH(R_F32((u32)(r_ebp+0xb4u)));
    /* 00510a22: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00510a24: fadd dword ptr [ebp + 0x5c] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x5cu));
    /* 00510a27: fst dword ptr [ebp + 0x5c] */ W_F32((u32)(r_ebp+0x5cu), ST(0));
    /* 00510a2a: jmp 0x510a34 */ goto L_00510a34;
L_00510a2c:; BB(0x00510a2c);
    /* 00510a2c: fld dword ptr [ebp + 0x5c] */ FPUSH(R_F32((u32)(r_ebp+0x5cu)));
    /* 00510a2f: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00510a31: fst dword ptr [ebp + 0x5c] */ W_F32((u32)(r_ebp+0x5cu), ST(0));
L_00510a34:; BB(0x00510a34);
    /* 00510a34: fcom dword ptr [edx + 0x58] */ fx_compare(ST(0), R_F32((u32)(r_edx+0x58u))); 
    /* 00510a37: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00510a39: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00510a3a: fld dword ptr [0x920510] */ FPUSH(R_F32((u32)(0x920510u)));
    /* 00510a40: fld dword ptr [0x920510] */ FPUSH(R_F32((u32)(0x920510u)));
    /* 00510a46: fld dword ptr [0x920510] */ FPUSH(R_F32((u32)(0x920510u)));
    /* 00510a4c: jae 0x510a57 */ if (!fC) goto L_00510a57;
L_00510a4e:; BB(0x00510a4e);
    /* 00510a4e: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00510a50: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 00510a52: fmul dword ptr [ebp + 0x64] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x64u));
    /* 00510a55: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
L_00510a57:; BB(0x00510a57);
    /* 00510a57: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 00510a59: fsub st(4) */ ST(0) = ST(0) - ST(4);
    /* 00510a5b: fcom dword ptr [edx + 0x5c] */ fx_compare(ST(0), R_F32((u32)(r_edx+0x5cu))); 
    /* 00510a5e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00510a60: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00510a61: jae 0x510a6c */ if (!fC) goto L_00510a6c;
L_00510a63:; BB(0x00510a63);
    /* 00510a63: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00510a65: fld dword ptr [ebp + 0x68] */ FPUSH(R_F32((u32)(r_ebp+0x68u)));
    /* 00510a68: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00510a6a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
L_00510a6c:; BB(0x00510a6c);
    /* 00510a6c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00510a6e: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00510a70: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00510a72: movzx ecx, word ptr [ebp + 0x24] */ r_ecx = (u32)R16((u32)(r_ebp+0x24u));
    /* 00510a76: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00510a77: mov eax, ecx */ r_eax = r_ecx;
    /* 00510a79: ja 0x510a7d */ if ((!fC&&!fZ)) goto L_00510a7d;
L_00510a7b:; BB(0x00510a7b);
    /* 00510a7b: fst st(1) */ ST(1) = ST(0);
L_00510a7d:; BB(0x00510a7d);
    /* 00510a7d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00510a7f: and eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00510a84: je 0x510a91 */ if (fZ) goto L_00510a91;
L_00510a86:; BB(0x00510a86);
    /* 00510a86: test esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00510a8c: je 0x510a91 */ if (fZ) goto L_00510a91;
L_00510a8e:; BB(0x00510a8e);
    /* 00510a8e: fmul dword ptr [ebp + 0x4c] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x4cu));
L_00510a91:; BB(0x00510a91);
    /* 00510a91: movzx ebx, word ptr [ebp + 0x1c] */ r_ebx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 00510a95: mov edi, dword ptr [ebx*4 + 0xaaee20] */ r_edi = R32((u32)(r_ebx*4+0xaaee20u));
    /* 00510a9c: mov edi, dword ptr [edi + 0x28] */ r_edi = R32((u32)(r_edi+0x28u));
    /* 00510a9f: mov edi, dword ptr [edi] */ r_edi = R32((u32)(r_edi));
    /* 00510aa1: test edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00510aa7: je 0x510c71 */ if (fZ) goto L_00510c71;
L_00510aad:; BB(0x00510aad);
    /* 00510aad: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00510aaf: je 0x510bd4 */ if (fZ) goto L_00510bd4;
L_00510ab5:; BB(0x00510ab5);
    /* 00510ab5: test esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00510abb: je 0x510b42 */ if (fZ) goto L_00510b42;
L_00510ac1:; BB(0x00510ac1);
    /* 00510ac1: fld dword ptr [0x92050c] */ FPUSH(R_F32((u32)(0x92050cu)));
    /* 00510ac7: fld dword ptr [ebp + 0x50] */ FPUSH(R_F32((u32)(r_ebp+0x50u)));
    /* 00510aca: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00510acc: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00510ace: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00510acf: jae 0x510adf */ if (!fC) goto L_00510adf;
L_00510ad1:; BB(0x00510ad1);
    /* 00510ad1: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00510ad3: fld dword ptr [0x92050c] */ FPUSH(R_F32((u32)(0x92050cu)));
    /* 00510ad9: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00510adb: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00510add: jmp 0x510aee */ goto L_00510aee;
L_00510adf:; BB(0x00510adf);
    /* 00510adf: fcom st(3) */ fx_compare(ST(0), ST(3)); 
    /* 00510ae1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00510ae3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00510ae4: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00510ae6: jb 0x510aea */ if (fC) goto L_00510aea;
L_00510ae8:; BB(0x00510ae8);
    /* 00510ae8: fst st(3) */ ST(3) = ST(0);
L_00510aea:; BB(0x00510aea);
    /* 00510aea: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00510aec: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
L_00510aee:; BB(0x00510aee);
    /* 00510aee: fld dword ptr [ebp + 0x54] */ FPUSH(R_F32((u32)(r_ebp+0x54u)));
    /* 00510af1: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 00510af3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00510af5: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00510af6: jae 0x510b06 */ if (!fC) goto L_00510b06;
L_00510af8:; BB(0x00510af8);
    /* 00510af8: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00510afa: fld dword ptr [0x92050c] */ FPUSH(R_F32((u32)(0x92050cu)));
    /* 00510b00: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00510b02: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00510b04: jmp 0x510b15 */ goto L_00510b15;
L_00510b06:; BB(0x00510b06);
    /* 00510b06: fcom st(3) */ fx_compare(ST(0), ST(3)); 
    /* 00510b08: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00510b0a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00510b0b: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00510b0d: jb 0x510b11 */ if (fC) goto L_00510b11;
L_00510b0f:; BB(0x00510b0f);
    /* 00510b0f: fst st(3) */ ST(3) = ST(0);
L_00510b11:; BB(0x00510b11);
    /* 00510b11: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00510b13: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
L_00510b15:; BB(0x00510b15);
    /* 00510b15: fld dword ptr [ebp + 0x58] */ FPUSH(R_F32((u32)(r_ebp+0x58u)));
    /* 00510b18: fcom st(3) */ fx_compare(ST(0), ST(3)); 
    /* 00510b1a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00510b1c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00510b1d: jae 0x510b2a */ if (!fC) goto L_00510b2a;
L_00510b1f:; BB(0x00510b1f);
    /* 00510b1f: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00510b21: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00510b23: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00510b25: jmp 0x510c64 */ goto L_00510c64;
L_00510b2a:; BB(0x00510b2a);
    /* 00510b2a: fstp st(3) */ ST(3) = ST(0); FPOP();
    /* 00510b2c: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00510b2e: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00510b30: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00510b32: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00510b33: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00510b35: jb 0x510b39 */ if (fC) goto L_00510b39;
L_00510b37:; BB(0x00510b37);
    /* 00510b37: fst st(1) */ ST(1) = ST(0);
L_00510b39:; BB(0x00510b39);
    /* 00510b39: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00510b3b: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00510b3d: jmp 0x510c64 */ goto L_00510c64;
L_00510b42:; BB(0x00510b42);
    /* 00510b42: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 00510b44: fmul dword ptr [edx + 0x6c] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x6cu));
    /* 00510b47: fadd dword ptr [ebp + 0x50] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x50u));
    /* 00510b4a: fld dword ptr [0x92050c] */ FPUSH(R_F32((u32)(0x92050cu)));
    /* 00510b50: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00510b52: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00510b54: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00510b55: jbe 0x510b65 */ if ((fC||fZ)) goto L_00510b65;
L_00510b57:; BB(0x00510b57);
    /* 00510b57: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00510b59: fld dword ptr [0x92050c] */ FPUSH(R_F32((u32)(0x92050cu)));
    /* 00510b5f: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00510b61: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00510b63: jmp 0x510b76 */ goto L_00510b76;
L_00510b65:; BB(0x00510b65);
    /* 00510b65: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00510b67: fcom st(3) */ fx_compare(ST(0), ST(3)); 
    /* 00510b69: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00510b6b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00510b6c: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00510b6e: jb 0x510b72 */ if (fC) goto L_00510b72;
L_00510b70:; BB(0x00510b70);
    /* 00510b70: fst st(3) */ ST(3) = ST(0);
L_00510b72:; BB(0x00510b72);
    /* 00510b72: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00510b74: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
L_00510b76:; BB(0x00510b76);
    /* 00510b76: fld st(4) */ { long double v = ST(4); FPUSH(v); }
    /* 00510b78: fmul dword ptr [edx + 0x70] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x70u));
    /* 00510b7b: fadd dword ptr [ebp + 0x54] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x54u));
    /* 00510b7e: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 00510b80: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00510b82: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00510b83: jae 0x510b93 */ if (!fC) goto L_00510b93;
L_00510b85:; BB(0x00510b85);
    /* 00510b85: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00510b87: fld dword ptr [0x92050c] */ FPUSH(R_F32((u32)(0x92050cu)));
    /* 00510b8d: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00510b8f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00510b91: jmp 0x510ba2 */ goto L_00510ba2;
L_00510b93:; BB(0x00510b93);
    /* 00510b93: fcom st(3) */ fx_compare(ST(0), ST(3)); 
    /* 00510b95: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00510b97: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00510b98: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00510b9a: jb 0x510b9e */ if (fC) goto L_00510b9e;
L_00510b9c:; BB(0x00510b9c);
    /* 00510b9c: fst st(3) */ ST(3) = ST(0);
L_00510b9e:; BB(0x00510b9e);
    /* 00510b9e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00510ba0: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
L_00510ba2:; BB(0x00510ba2);
    /* 00510ba2: fld st(5) */ { long double v = ST(5); FPUSH(v); }
    /* 00510ba4: fmul dword ptr [edx + 0x74] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x74u));
    /* 00510ba7: fadd dword ptr [ebp + 0x58] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x58u));
    /* 00510baa: fcom st(3) */ fx_compare(ST(0), ST(3)); 
    /* 00510bac: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00510bae: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00510baf: jae 0x510bbc */ if (!fC) goto L_00510bbc;
L_00510bb1:; BB(0x00510bb1);
    /* 00510bb1: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00510bb3: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00510bb5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00510bb7: jmp 0x510c64 */ goto L_00510c64;
L_00510bbc:; BB(0x00510bbc);
    /* 00510bbc: fstp st(3) */ ST(3) = ST(0); FPOP();
    /* 00510bbe: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00510bc0: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00510bc2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00510bc4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00510bc5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00510bc7: jb 0x510bcb */ if (fC) goto L_00510bcb;
L_00510bc9:; BB(0x00510bc9);
    /* 00510bc9: fst st(1) */ ST(1) = ST(0);
L_00510bcb:; BB(0x00510bcb);
    /* 00510bcb: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00510bcd: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00510bcf: jmp 0x510c64 */ goto L_00510c64;
L_00510bd4:; BB(0x00510bd4);
    /* 00510bd4: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 00510bd6: fmul dword ptr [edx + 0x6c] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x6cu));
    /* 00510bd9: fadd dword ptr [edx + 0x7c] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x7cu));
    /* 00510bdc: fld dword ptr [0x92050c] */ FPUSH(R_F32((u32)(0x92050cu)));
    /* 00510be2: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00510be4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00510be6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00510be7: jbe 0x510bf7 */ if ((fC||fZ)) goto L_00510bf7;
L_00510be9:; BB(0x00510be9);
    /* 00510be9: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00510beb: fld dword ptr [0x92050c] */ FPUSH(R_F32((u32)(0x92050cu)));
    /* 00510bf1: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00510bf3: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00510bf5: jmp 0x510c08 */ goto L_00510c08;
L_00510bf7:; BB(0x00510bf7);
    /* 00510bf7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00510bf9: fcom st(3) */ fx_compare(ST(0), ST(3)); 
    /* 00510bfb: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00510bfd: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00510bfe: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00510c00: jb 0x510c04 */ if (fC) goto L_00510c04;
L_00510c02:; BB(0x00510c02);
    /* 00510c02: fst st(3) */ ST(3) = ST(0);
L_00510c04:; BB(0x00510c04);
    /* 00510c04: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00510c06: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
L_00510c08:; BB(0x00510c08);
    /* 00510c08: fld st(4) */ { long double v = ST(4); FPUSH(v); }
    /* 00510c0a: fmul dword ptr [edx + 0x70] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x70u));
    /* 00510c0d: fadd dword ptr [edx + 0x80] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x80u));
    /* 00510c13: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 00510c15: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00510c17: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00510c18: jae 0x510c28 */ if (!fC) goto L_00510c28;
L_00510c1a:; BB(0x00510c1a);
    /* 00510c1a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00510c1c: fld dword ptr [0x92050c] */ FPUSH(R_F32((u32)(0x92050cu)));
    /* 00510c22: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00510c24: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00510c26: jmp 0x510c37 */ goto L_00510c37;
L_00510c28:; BB(0x00510c28);
    /* 00510c28: fcom st(3) */ fx_compare(ST(0), ST(3)); 
    /* 00510c2a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00510c2c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00510c2d: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00510c2f: jb 0x510c33 */ if (fC) goto L_00510c33;
L_00510c31:; BB(0x00510c31);
    /* 00510c31: fst st(3) */ ST(3) = ST(0);
L_00510c33:; BB(0x00510c33);
    /* 00510c33: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00510c35: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
L_00510c37:; BB(0x00510c37);
    /* 00510c37: fld st(5) */ { long double v = ST(5); FPUSH(v); }
    /* 00510c39: fmul dword ptr [edx + 0x74] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x74u));
    /* 00510c3c: fadd dword ptr [edx + 0x84] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x84u));
    /* 00510c42: fcom st(3) */ fx_compare(ST(0), ST(3)); 
    /* 00510c44: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00510c46: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00510c47: jae 0x510c51 */ if (!fC) goto L_00510c51;
L_00510c49:; BB(0x00510c49);
    /* 00510c49: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00510c4b: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00510c4d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00510c4f: jmp 0x510c64 */ goto L_00510c64;
L_00510c51:; BB(0x00510c51);
    /* 00510c51: fstp st(3) */ ST(3) = ST(0); FPOP();
    /* 00510c53: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00510c55: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00510c57: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00510c59: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00510c5a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00510c5c: jb 0x510c60 */ if (fC) goto L_00510c60;
L_00510c5e:; BB(0x00510c5e);
    /* 00510c5e: fst st(1) */ ST(1) = ST(0);
L_00510c60:; BB(0x00510c60);
    /* 00510c60: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00510c62: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
L_00510c64:; BB(0x00510c64);
    /* 00510c64: fld dword ptr [0x920510] */ FPUSH(R_F32((u32)(0x920510u)));
    /* 00510c6a: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00510c6c: jmp 0x510de5 */ goto L_00510de5;
L_00510c71:; BB(0x00510c71);
    /* 00510c71: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00510c73: je 0x510d69 */ if (fZ) goto L_00510d69;
L_00510c79:; BB(0x00510c79);
    /* 00510c79: test esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00510c7f: je 0x510cee */ if (fZ) goto L_00510cee;
L_00510c81:; BB(0x00510c81);
    /* 00510c81: fld dword ptr [0x92050c] */ FPUSH(R_F32((u32)(0x92050cu)));
    /* 00510c87: fld dword ptr [ebp + 0x50] */ FPUSH(R_F32((u32)(r_ebp+0x50u)));
    /* 00510c8a: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00510c8c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00510c8e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00510c8f: jae 0x510c9d */ if (!fC) goto L_00510c9d;
L_00510c91:; BB(0x00510c91);
    /* 00510c91: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00510c93: fld dword ptr [0x92050c] */ FPUSH(R_F32((u32)(0x92050cu)));
    /* 00510c99: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00510c9b: jmp 0x510ca8 */ goto L_00510ca8;
L_00510c9d:; BB(0x00510c9d);
    /* 00510c9d: fcom st(3) */ fx_compare(ST(0), ST(3)); 
    /* 00510c9f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00510ca1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00510ca2: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00510ca4: jb 0x510ca8 */ if (fC) goto L_00510ca8;
L_00510ca6:; BB(0x00510ca6);
    /* 00510ca6: fst st(3) */ ST(3) = ST(0);
L_00510ca8:; BB(0x00510ca8);
    /* 00510ca8: fld dword ptr [ebp + 0x54] */ FPUSH(R_F32((u32)(r_ebp+0x54u)));
    /* 00510cab: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 00510cad: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00510caf: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00510cb0: jae 0x510cbe */ if (!fC) goto L_00510cbe;
L_00510cb2:; BB(0x00510cb2);
    /* 00510cb2: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00510cb4: fld dword ptr [0x92050c] */ FPUSH(R_F32((u32)(0x92050cu)));
    /* 00510cba: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00510cbc: jmp 0x510cc9 */ goto L_00510cc9;
L_00510cbe:; BB(0x00510cbe);
    /* 00510cbe: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00510cc0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00510cc2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00510cc3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00510cc5: jb 0x510cc9 */ if (fC) goto L_00510cc9;
L_00510cc7:; BB(0x00510cc7);
    /* 00510cc7: fst st(1) */ ST(1) = ST(0);
L_00510cc9:; BB(0x00510cc9);
    /* 00510cc9: fld dword ptr [ebp + 0x58] */ FPUSH(R_F32((u32)(r_ebp+0x58u)));
    /* 00510ccc: fcom st(3) */ fx_compare(ST(0), ST(3)); 
    /* 00510cce: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00510cd0: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00510cd1: jae 0x510cdc */ if (!fC) goto L_00510cdc;
L_00510cd3:; BB(0x00510cd3);
    /* 00510cd3: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00510cd5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00510cd7: jmp 0x510de5 */ goto L_00510de5;
L_00510cdc:; BB(0x00510cdc);
    /* 00510cdc: fstp st(3) */ ST(3) = ST(0); FPOP();
    /* 00510cde: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 00510ce0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00510ce2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00510ce3: ja 0x510ce7 */ if ((!fC&&!fZ)) goto L_00510ce7;
L_00510ce5:; BB(0x00510ce5);
    /* 00510ce5: fst st(2) */ ST(2) = ST(0);
L_00510ce7:; BB(0x00510ce7);
    /* 00510ce7: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00510ce9: jmp 0x510de5 */ goto L_00510de5;
L_00510cee:; BB(0x00510cee);
    /* 00510cee: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 00510cf0: fmul dword ptr [edx + 0x6c] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x6cu));
    /* 00510cf3: fadd dword ptr [ebp + 0x50] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x50u));
    /* 00510cf6: fld dword ptr [0x92050c] */ FPUSH(R_F32((u32)(0x92050cu)));
    /* 00510cfc: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00510cfe: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00510d00: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00510d01: jbe 0x510d0f */ if ((fC||fZ)) goto L_00510d0f;
L_00510d03:; BB(0x00510d03);
    /* 00510d03: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00510d05: fld dword ptr [0x92050c] */ FPUSH(R_F32((u32)(0x92050cu)));
    /* 00510d0b: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00510d0d: jmp 0x510d1c */ goto L_00510d1c;
L_00510d0f:; BB(0x00510d0f);
    /* 00510d0f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00510d11: fcom st(3) */ fx_compare(ST(0), ST(3)); 
    /* 00510d13: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00510d15: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00510d16: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00510d18: jb 0x510d1c */ if (fC) goto L_00510d1c;
L_00510d1a:; BB(0x00510d1a);
    /* 00510d1a: fst st(3) */ ST(3) = ST(0);
L_00510d1c:; BB(0x00510d1c);
    /* 00510d1c: fld st(4) */ { long double v = ST(4); FPUSH(v); }
    /* 00510d1e: fmul dword ptr [edx + 0x70] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x70u));
    /* 00510d21: fadd dword ptr [ebp + 0x54] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x54u));
    /* 00510d24: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 00510d26: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00510d28: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00510d29: jae 0x510d37 */ if (!fC) goto L_00510d37;
L_00510d2b:; BB(0x00510d2b);
    /* 00510d2b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00510d2d: fld dword ptr [0x92050c] */ FPUSH(R_F32((u32)(0x92050cu)));
    /* 00510d33: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00510d35: jmp 0x510d42 */ goto L_00510d42;
L_00510d37:; BB(0x00510d37);
    /* 00510d37: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00510d39: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00510d3b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00510d3c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00510d3e: jb 0x510d42 */ if (fC) goto L_00510d42;
L_00510d40:; BB(0x00510d40);
    /* 00510d40: fst st(1) */ ST(1) = ST(0);
L_00510d42:; BB(0x00510d42);
    /* 00510d42: fld st(5) */ { long double v = ST(5); FPUSH(v); }
    /* 00510d44: fmul dword ptr [edx + 0x74] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x74u));
    /* 00510d47: fadd dword ptr [ebp + 0x58] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x58u));
    /* 00510d4a: fcom st(3) */ fx_compare(ST(0), ST(3)); 
    /* 00510d4c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00510d4e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00510d4f: jae 0x510d5a */ if (!fC) goto L_00510d5a;
L_00510d51:; BB(0x00510d51);
    /* 00510d51: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00510d53: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00510d55: jmp 0x510de5 */ goto L_00510de5;
L_00510d5a:; BB(0x00510d5a);
    /* 00510d5a: fstp st(3) */ ST(3) = ST(0); FPOP();
    /* 00510d5c: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 00510d5e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00510d60: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00510d61: ja 0x510d65 */ if ((!fC&&!fZ)) goto L_00510d65;
L_00510d63:; BB(0x00510d63);
    /* 00510d63: fst st(2) */ ST(2) = ST(0);
L_00510d65:; BB(0x00510d65);
    /* 00510d65: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00510d67: jmp 0x510de5 */ goto L_00510de5;
L_00510d69:; BB(0x00510d69);
    /* 00510d69: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 00510d6b: fmul dword ptr [edx + 0x6c] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x6cu));
    /* 00510d6e: fadd dword ptr [edx + 0x7c] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x7cu));
    /* 00510d71: fld dword ptr [0x92050c] */ FPUSH(R_F32((u32)(0x92050cu)));
    /* 00510d77: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00510d79: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00510d7b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00510d7c: jbe 0x510d8a */ if ((fC||fZ)) goto L_00510d8a;
L_00510d7e:; BB(0x00510d7e);
    /* 00510d7e: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00510d80: fld dword ptr [0x92050c] */ FPUSH(R_F32((u32)(0x92050cu)));
    /* 00510d86: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00510d88: jmp 0x510d97 */ goto L_00510d97;
L_00510d8a:; BB(0x00510d8a);
    /* 00510d8a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00510d8c: fcom st(3) */ fx_compare(ST(0), ST(3)); 
    /* 00510d8e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00510d90: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00510d91: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00510d93: jb 0x510d97 */ if (fC) goto L_00510d97;
L_00510d95:; BB(0x00510d95);
    /* 00510d95: fst st(3) */ ST(3) = ST(0);
L_00510d97:; BB(0x00510d97);
    /* 00510d97: fld st(4) */ { long double v = ST(4); FPUSH(v); }
    /* 00510d99: fmul dword ptr [edx + 0x70] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x70u));
    /* 00510d9c: fadd dword ptr [edx + 0x80] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x80u));
    /* 00510da2: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 00510da4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00510da6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00510da7: jae 0x510db5 */ if (!fC) goto L_00510db5;
L_00510da9:; BB(0x00510da9);
    /* 00510da9: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00510dab: fld dword ptr [0x92050c] */ FPUSH(R_F32((u32)(0x92050cu)));
    /* 00510db1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00510db3: jmp 0x510dc0 */ goto L_00510dc0;
L_00510db5:; BB(0x00510db5);
    /* 00510db5: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00510db7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00510db9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00510dba: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00510dbc: jb 0x510dc0 */ if (fC) goto L_00510dc0;
L_00510dbe:; BB(0x00510dbe);
    /* 00510dbe: fst st(1) */ ST(1) = ST(0);
L_00510dc0:; BB(0x00510dc0);
    /* 00510dc0: fld st(5) */ { long double v = ST(5); FPUSH(v); }
    /* 00510dc2: fmul dword ptr [edx + 0x74] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x74u));
    /* 00510dc5: fadd dword ptr [edx + 0x84] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x84u));
    /* 00510dcb: fcom st(3) */ fx_compare(ST(0), ST(3)); 
    /* 00510dcd: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00510dcf: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00510dd0: jae 0x510dd8 */ if (!fC) goto L_00510dd8;
L_00510dd2:; BB(0x00510dd2);
    /* 00510dd2: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00510dd4: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00510dd6: jmp 0x510de5 */ goto L_00510de5;
L_00510dd8:; BB(0x00510dd8);
    /* 00510dd8: fstp st(3) */ ST(3) = ST(0); FPOP();
    /* 00510dda: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 00510ddc: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00510dde: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00510ddf: ja 0x510de3 */ if ((!fC&&!fZ)) goto L_00510de3;
L_00510de1:; BB(0x00510de1);
    /* 00510de1: fst st(2) */ ST(2) = ST(0);
L_00510de3:; BB(0x00510de3);
    /* 00510de3: fstp st(0) */ ST(0) = ST(0); FPOP();
L_00510de5:; BB(0x00510de5);
    /* 00510de5: fld dword ptr [0x920508] */ FPUSH(R_F32((u32)(0x920508u)));
    /* 00510deb: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 00510ded: fmul st(4), st(0) */ ST(4) = ST(4) * ST(0);
    /* 00510def: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 00510df1: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00510df3: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00510df5: fnstcw word ptr [esp + 0x28] */ W16((u32)(r_esp+0x28u), fcw);
    /* 00510df9: movzx eax, word ptr [esp + 0x28] */ r_eax = (u32)R16((u32)(r_esp+0x28u));
    /* 00510dfe: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00510e03: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 00510e07: fldcw word ptr [esp + 0x30] */ fcw = R16((u32)(r_esp+0x30u));
    /* 00510e0b: fistp qword ptr [esp + 0x38] */ W64((u32)(r_esp+0x38u), (u64)fx_int64(ST(0))); FPOP();
    /* 00510e0f: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 00510e13: mov esi, dword ptr [esp + 0x38] */ r_esi = R32((u32)(r_esp+0x38u));
    /* 00510e17: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00510e19: fnstcw word ptr [esp + 0x28] */ W16((u32)(r_esp+0x28u), fcw);
    /* 00510e1d: movzx eax, word ptr [esp + 0x28] */ r_eax = (u32)R16((u32)(r_esp+0x28u));
    /* 00510e22: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00510e27: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 00510e2b: fldcw word ptr [esp + 0x30] */ fcw = R16((u32)(r_esp+0x30u));
    /* 00510e2f: fistp qword ptr [esp + 0x38] */ W64((u32)(r_esp+0x38u), (u64)fx_int64(ST(0))); FPOP();
    /* 00510e33: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 00510e37: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 00510e3b: shl esi, 0x18 */ { u32 c = (24u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 00510e3e: shl eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00510e41: and eax, 0xff0000 */ {  u32 a = r_eax; u32 b = 0xff0000u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00510e46: or esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00510e48: fnstcw word ptr [esp + 0x28] */ W16((u32)(r_esp+0x28u), fcw);
    /* 00510e4c: movzx eax, word ptr [esp + 0x28] */ r_eax = (u32)R16((u32)(r_esp+0x28u));
    /* 00510e51: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00510e56: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 00510e5a: fldcw word ptr [esp + 0x30] */ fcw = R16((u32)(r_esp+0x30u));
    /* 00510e5e: fistp qword ptr [esp + 0x38] */ W64((u32)(r_esp+0x38u), (u64)fx_int64(ST(0))); FPOP();
    /* 00510e62: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 00510e66: and esi, 0xffff00ff */ {  u32 a = r_esi; u32 b = 0xffff00ffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 00510e6c: mov edi, dword ptr [esp + 0x38] */ r_edi = R32((u32)(r_esp+0x38u));
    /* 00510e70: fnstcw word ptr [esp + 0x28] */ W16((u32)(r_esp+0x28u), fcw);
    /* 00510e74: movzx eax, word ptr [esp + 0x28] */ r_eax = (u32)R16((u32)(r_esp+0x28u));
    /* 00510e79: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00510e7e: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 00510e82: fldcw word ptr [esp + 0x30] */ fcw = R16((u32)(r_esp+0x30u));
    /* 00510e86: fistp qword ptr [esp + 0x38] */ W64((u32)(r_esp+0x38u), (u64)fx_int64(ST(0))); FPOP();
    /* 00510e8a: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 00510e8e: movzx eax, byte ptr [esp + 0x38] */ r_eax = (u32)R8((u32)(r_esp+0x38u));
    /* 00510e93: shl edi, 8 */ { u32 c = (8u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 00510e96: and edi, 0xff00 */ {  u32 a = r_edi; u32 b = 0xff00u; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 00510e9c: or esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00510e9e: and esi, 0xffffff00 */ {  u32 a = r_esi; u32 b = 0xffffff00u; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 00510ea4: or esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00510ea6: mov dword ptr [ebp + 0x94], esi */ W32((u32)(r_ebp+0x94u), r_esi);
    /* 00510eac: mov ebx, dword ptr [ebx*4 + 0xaaee20] */ r_ebx = R32((u32)(r_ebx*4+0xaaee20u));
    /* 00510eb3: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 00510eb6: mov ebx, dword ptr [eax + 0xc] */ r_ebx = R32((u32)(r_eax+0xcu));
    /* 00510eb9: movzx edx, byte ptr [edx + 0x88] */ r_edx = (u32)R8((u32)(r_edx+0x88u));
    /* 00510ec0: test dl, 0x10 */ {  u32 a = (u8)r_edx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00510ec3: je 0x510efc */ if (fZ) goto L_00510efc;
L_00510ec5:; BB(0x00510ec5);
    /* 00510ec5: add ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00510ec8: mov dword ptr [esp + 0x40], ebx */ W32((u32)(r_esp+0x40u), r_ebx);
    /* 00510ecc: fild dword ptr [esp + 0x40] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x40u)));
    /* 00510ed0: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00510ed2: fnstcw word ptr [esp + 0x28] */ W16((u32)(r_esp+0x28u), fcw);
    /* 00510ed6: movzx eax, word ptr [esp + 0x28] */ r_eax = (u32)R16((u32)(r_esp+0x28u));
    /* 00510edb: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00510ee0: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 00510ee4: fldcw word ptr [esp + 0x30] */ fcw = R16((u32)(r_esp+0x30u));
    /* 00510ee8: fistp dword ptr [esp + 0x38] */ W32((u32)(r_esp+0x38u), (u32)fx_int32(ST(0))); FPOP();
    /* 00510eec: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 00510ef0: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 00510ef4: mov byte ptr [ebp + 0x98], al */ W8((u32)(r_ebp+0x98u), (u8)r_eax);
    /* 00510efa: jmp 0x510f1e */ goto L_00510f1e;
L_00510efc:; BB(0x00510efc);
    /* 00510efc: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00510efe: movzx eax, byte ptr [ebp + 0x98] */ r_eax = (u32)R8((u32)(r_ebp+0x98u));
    /* 00510f05: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00510f08: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 00510f0b: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00510f0d: jg 0x510f18 */ if ((!fZ&&fS==fO)) goto L_00510f18;
L_00510f0f:; BB(0x00510f0f);
    /* 00510f0f: mov byte ptr [ebp + 0x98], 0 */ W8((u32)(r_ebp+0x98u), 0x0u);
    /* 00510f16: jmp 0x510f1e */ goto L_00510f1e;
L_00510f18:; BB(0x00510f18);
    /* 00510f18: mov byte ptr [ebp + 0x98], al */ W8((u32)(r_ebp+0x98u), (u8)r_eax);
L_00510f1e:; BB(0x00510f1e);
    /* 00510f1e: test cl, 0x10 */ {  u32 a = (u8)r_ecx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00510f21: jne 0x510f79 */ if (!fZ) goto L_00510f79;
L_00510f23:; BB(0x00510f23);
    /* 00510f23: mov eax, dword ptr [ebp + 0x10c] */ r_eax = R32((u32)(r_ebp+0x10cu));
    /* 00510f29: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00510f2b: je 0x510f6a */ if (fZ) goto L_00510f6a;
L_00510f2d:; BB(0x00510f2d);
    /* 00510f2d: fld dword ptr [ebp + 0x110] */ FPUSH(R_F32((u32)(r_ebp+0x110u)));
    /* 00510f33: fadd dword ptr [ebp + 0x114] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x114u));
    /* 00510f39: fst dword ptr [ebp + 0x110] */ W_F32((u32)(r_ebp+0x110u), ST(0));
    /* 00510f3f: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00510f42: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00510f45: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
    /* 00510f49: fild dword ptr [esp + 0x40] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x40u)));
    /* 00510f4d: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00510f50: fadd dword ptr [edx*4 + 0x9204d0] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x9204d0u));
    /* 00510f57: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00510f59: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00510f5b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00510f5c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00510f5e: jb 0x510f62 */ if (fC) goto L_00510f62;
L_00510f60:; BB(0x00510f60);
    /* 00510f60: fst st(1) */ ST(1) = ST(0);
L_00510f62:; BB(0x00510f62);
    /* 00510f62: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00510f64: fstp dword ptr [ebp + 0x110] */ W_F32((u32)(r_ebp+0x110u), ST(0)); FPOP();
L_00510f6a:; BB(0x00510f6a);
    /* 00510f6a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00510f6c: call 0x510fcc */ r_esp -= 4; W32(r_esp, 0x510f71u); f_00510fcc();
    /* 00510f71: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00510f74: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00510f75: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00510f76: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00510f77: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00510f78: ret  */ FN_RET(0x0051095c); r_esp += 4; return;
L_00510f79:; BB(0x00510f79);
    /* 00510f79: movzx eax, word ptr [ebp + 0x28] */ r_eax = (u32)R16((u32)(r_ebp+0x28u));
    /* 00510f7d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00510f7e: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x510f83u); f_007b4d18();
    /* 00510f83: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00510f84: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00510f86: je 0x510fb7 */ if (fZ) goto L_00510fb7;
L_00510f88:; BB(0x00510f88);
    /* 00510f88: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00510f8a: mov ecx, eax */ r_ecx = r_eax;
    /* 00510f8c: call dword ptr [edx + 0x1c] */ { u32 t = R32((u32)(r_edx+0x1cu)); r_esp -= 4; W32(r_esp, 0x510f8fu); call_ind(t); }
    /* 00510f8f: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 00510f91: fsub dword ptr [ebp + 0x34] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x34u));
    /* 00510f94: fstp dword ptr [ebp + 0x80] */ W_F32((u32)(r_ebp+0x80u), ST(0)); FPOP();
    /* 00510f9a: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 00510f9d: fsub dword ptr [ebp + 0x38] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x38u));
    /* 00510fa0: fstp dword ptr [ebp + 0x84] */ W_F32((u32)(r_ebp+0x84u), ST(0)); FPOP();
    /* 00510fa6: fld dword ptr [eax + 8] */ FPUSH(R_F32((u32)(r_eax+0x8u)));
    /* 00510fa9: fsub dword ptr [ebp + 0x3c] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x3cu));
    /* 00510fac: fstp dword ptr [ebp + 0x88] */ W_F32((u32)(r_ebp+0x88u), ST(0)); FPOP();
    /* 00510fb2: jmp 0x510f23 */ goto L_00510f23;
L_00510fb7:; BB(0x00510fb7);
    /* 00510fb7: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 00510fbb: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00510fc0: mov word ptr [ebp + 8], ax */ W16((u32)(r_ebp+0x8u), (u16)r_eax);
    /* 00510fc4: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00510fc7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00510fc8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00510fc9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00510fca: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00510fcb: ret  */ FN_RET(0x0051095c); r_esp += 4; return;
}

void f_00510f40(void)
{
    FN_ENTER(0x00510f40);
    /* 00510f40: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00510f41: add al, 0x83 */ {  u32 a = (u8)r_eax; u32 b = 0x83u; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; fC = (r < a); }
    /* 00510f43: ret 0x89ff */ FN_RET(0x00510f40); r_esp += 35331; return;
}

void f_00510fcc(void) /* sub_510FCC */
{
    FN_ENTER(0x00510fcc);
    /* 00510fcc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00510fcd: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00510fcf: fld dword ptr [ebp + 0x5c] */ FPUSH(R_F32((u32)(r_ebp+0x5cu)));
    /* 00510fd2: fcomp dword ptr [0x920504] */ fx_compare(ST(0), R_F32((u32)(0x920504u))); FPOP();
    /* 00510fd8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00510fda: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00510fdb: jb 0x510fec */ if (fC) goto L_00510fec;
L_00510fdd:; BB(0x00510fdd);
    /* 00510fdd: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 00510fe1: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00510fe6: mov word ptr [ebp + 8], ax */ W16((u32)(r_ebp+0x8u), (u16)r_eax);
    /* 00510fea: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00510feb: ret  */ FN_RET(0x00510fcc); r_esp += 4; return;
L_00510fec:; BB(0x00510fec);
    /* 00510fec: lea ecx, [ebp + 0x40] */ r_ecx = (u32)(r_ebp+0x40u);
    /* 00510fef: call 0x82def4 */ r_esp -= 4; W32(r_esp, 0x510ff4u); f_0082def4();
    /* 00510ff4: fcomp dword ptr [0x920500] */ fx_compare(ST(0), R_F32((u32)(0x920500u))); FPOP();
    /* 00510ffa: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00510ffc: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00510ffd: je 0x510fdd */ if (fZ) goto L_00510fdd;
L_00510fff:; BB(0x00510fff);
    /* 00510fff: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00511000: ret  */ FN_RET(0x00510fcc); r_esp += 4; return;
}

