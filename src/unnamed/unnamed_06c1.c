#include "protos.h"

void f_006c1004(void) /* sub_6C1004 */
{
    FN_ENTER(0x006c1004);
    /* 006c1004: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006c1005: mov edi, ecx */ r_edi = r_ecx;
    /* 006c1007: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c100b: mov ecx, edi */ r_ecx = r_edi;
    /* 006c100d: call 0x4f7330 */ r_esp -= 4; W32(r_esp, 0x6c1012u); f_004f7330();
    /* 006c1012: mov dword ptr [edi], 0xb3b068 */ W32((u32)(r_edi), 0xb3b068u);
    /* 006c1018: mov edx, dword ptr [0x9ceac4] */ r_edx = R32((u32)(0x9ceac4u));
    /* 006c101e: mov dword ptr [edi + 4], edx */ W32((u32)(r_edi+0x4u), r_edx);
    /* 006c1021: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c1023: mov dword ptr [edi + 0x40], 0xd */ W32((u32)(r_edi+0x40u), 0xdu);
    /* 006c102a: mov dword ptr [edi + 0x38], eax */ W32((u32)(r_edi+0x38u), r_eax);
    /* 006c102d: mov dword ptr [edi + 0x3c], eax */ W32((u32)(r_edi+0x3cu), r_eax);
    /* 006c1030: mov dword ptr [edi + 0x44], eax */ W32((u32)(r_edi+0x44u), r_eax);
    /* 006c1033: mov dword ptr [edi + 0x48], 0x31 */ W32((u32)(r_edi+0x48u), 0x31u);
    /* 006c103a: mov dword ptr [edi + 0x4c], eax */ W32((u32)(r_edi+0x4cu), r_eax);
    /* 006c103d: mov eax, edi */ r_eax = r_edi;
    /* 006c103f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006c1040: ret 4 */ FN_RET(0x006c1004); r_esp += 8; return;
}

void f_006c1044(void) /* sub_6C1044 */
{
    FN_ENTER(0x006c1044);
    /* 006c1044: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006c1045: mov edi, ecx */ r_edi = r_ecx;
    /* 006c1047: call 0x7c0424 */ r_esp -= 4; W32(r_esp, 0x6c104cu); f_007c0424();
    /* 006c104c: call 0x7becd4 */ r_esp -= 4; W32(r_esp, 0x6c1051u); f_007becd4();
    /* 006c1051: mov ecx, edi */ r_ecx = r_edi;
    /* 006c1053: call 0x6c1070 */ r_esp -= 4; W32(r_esp, 0x6c1058u); f_006c1070();
    /* 006c1058: mov ecx, edi */ r_ecx = r_edi;
    /* 006c105a: call 0x6c12a8 */ r_esp -= 4; W32(r_esp, 0x6c105fu); f_006c12a8();
    /* 006c105f: mov ecx, edi */ r_ecx = r_edi;
    /* 006c1061: call 0x6c1304 */ r_esp -= 4; W32(r_esp, 0x6c1066u); f_006c1304();
    /* 006c1066: call 0x7c0368 */ r_esp -= 4; W32(r_esp, 0x6c106bu); f_007c0368();
    /* 006c106b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006c106c: ret  */ FN_RET(0x006c1044); r_esp += 4; return;
}

void f_006c1070(void) /* sub_6C1070 */
{
    FN_ENTER(0x006c1070);
    /* 006c1070: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006c1071: mov edi, ecx */ r_edi = r_ecx;
    /* 006c1073: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 006c1076: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 006c1079: push dword ptr [0xa0f684] */ { u32 v = R32((u32)(0xa0f684u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c107f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006c1081: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006c1083: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006c1085: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 006c108c: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x6c1091u); f_007c1160();
    /* 006c1091: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c1093: je 0x6c10b7 */ if (fZ) goto L_006c10b7;
L_006c1095:; BB(0x006c1095);
    /* 006c1095: mov eax, dword ptr [edi + 0x3c] */ r_eax = R32((u32)(r_edi+0x3cu));
    /* 006c1098: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006c109b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006c109d: jl 0x6c129a */ if ((fS!=fO)) goto L_006c129a;
L_006c10a3:; BB(0x006c10a3);
    /* 006c10a3: mov dword ptr [edi + 0x3c], eax */ W32((u32)(r_edi+0x3cu), r_eax);
L_006c10a6:; BB(0x006c10a6);
    /* 006c10a6: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 006c10a9: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 006c10ac: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006c10ae: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006c10b0: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006c10b2: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006c10b4: mov dword ptr [edi + 0x38], edx */ W32((u32)(r_edi+0x38u), r_edx);
L_006c10b7:; BB(0x006c10b7);
    /* 006c10b7: push dword ptr [0xa0f688] */ { u32 v = R32((u32)(0xa0f688u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c10bd: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 006c10c0: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 006c10c3: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006c10c5: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006c10c7: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006c10c9: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 006c10d0: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x6c10d5u); f_007c1160();
    /* 006c10d5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c10d7: je 0x6c1103 */ if (fZ) goto L_006c1103;
L_006c10d9:; BB(0x006c10d9);
    /* 006c10d9: mov eax, dword ptr [edi + 0x3c] */ r_eax = R32((u32)(r_edi+0x3cu));
    /* 006c10dc: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006c10df: cmp eax, dword ptr [edi + 0x40] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edi+0x40u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006c10e2: jle 0x6c10ef */ if ((fZ||fS!=fO)) goto L_006c10ef;
L_006c10e4:; BB(0x006c10e4);
    /* 006c10e4: mov dword ptr [edi + 0x3c], 0 */ W32((u32)(r_edi+0x3cu), 0x0u);
    /* 006c10eb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c10ed: jmp 0x6c10f2 */ goto L_006c10f2;
L_006c10ef:; BB(0x006c10ef);
    /* 006c10ef: mov dword ptr [edi + 0x3c], eax */ W32((u32)(r_edi+0x3cu), r_eax);
L_006c10f2:; BB(0x006c10f2);
    /* 006c10f2: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 006c10f5: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 006c10f8: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006c10fa: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006c10fc: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006c10fe: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006c1100: mov dword ptr [edi + 0x38], edx */ W32((u32)(r_edi+0x38u), r_edx);
L_006c1103:; BB(0x006c1103);
    /* 006c1103: push dword ptr [0xa0f664] */ { u32 v = R32((u32)(0xa0f664u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c1109: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 006c110c: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 006c110f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006c1111: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006c1113: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006c1115: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 006c111c: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x6c1121u); f_007c1160();
    /* 006c1121: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c1123: je 0x6c1129 */ if (fZ) goto L_006c1129;
L_006c1125:; BB(0x006c1125);
    /* 006c1125: add dword ptr [edi + 0x44], -1 */ { u32 ad = (u32)(r_edi+0x44u);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_006c1129:; BB(0x006c1129);
    /* 006c1129: push dword ptr [0xa0f668] */ { u32 v = R32((u32)(0xa0f668u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c112f: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 006c1132: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 006c1135: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006c1137: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006c1139: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006c113b: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 006c1142: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x6c1147u); f_007c1160();
    /* 006c1147: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c1149: je 0x6c114f */ if (fZ) goto L_006c114f;
L_006c114b:; BB(0x006c114b);
    /* 006c114b: add dword ptr [edi + 0x44], 1 */ { u32 ad = (u32)(r_edi+0x44u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_006c114f:; BB(0x006c114f);
    /* 006c114f: push dword ptr [0xa0f664] */ { u32 v = R32((u32)(0xa0f664u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c1155: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 006c1158: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 006c115b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006c115d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006c115f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006c1161: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 006c1168: call 0x7c1100 */ r_esp -= 4; W32(r_esp, 0x6c116du); f_007c1100();
    /* 006c116d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c116f: je 0x6c1183 */ if (fZ) goto L_006c1183;
L_006c1171:; BB(0x006c1171);
    /* 006c1171: mov eax, dword ptr [edi + 0x4c] */ r_eax = R32((u32)(r_edi+0x4cu));
    /* 006c1174: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006c1177: mov dword ptr [edi + 0x4c], eax */ W32((u32)(r_edi+0x4cu), r_eax);
    /* 006c117a: cmp eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006c117d: jle 0x6c1183 */ if ((fZ||fS!=fO)) goto L_006c1183;
L_006c117f:; BB(0x006c117f);
    /* 006c117f: add dword ptr [edi + 0x44], -1 */ { u32 ad = (u32)(r_edi+0x44u);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_006c1183:; BB(0x006c1183);
    /* 006c1183: push dword ptr [0xa0f668] */ { u32 v = R32((u32)(0xa0f668u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c1189: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 006c118c: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 006c118f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006c1191: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006c1193: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006c1195: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 006c119c: call 0x7c1100 */ r_esp -= 4; W32(r_esp, 0x6c11a1u); f_007c1100();
    /* 006c11a1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c11a3: je 0x6c11b7 */ if (fZ) goto L_006c11b7;
L_006c11a5:; BB(0x006c11a5);
    /* 006c11a5: mov eax, dword ptr [edi + 0x4c] */ r_eax = R32((u32)(r_edi+0x4cu));
    /* 006c11a8: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006c11ab: mov dword ptr [edi + 0x4c], eax */ W32((u32)(r_edi+0x4cu), r_eax);
    /* 006c11ae: cmp eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006c11b1: jle 0x6c11b7 */ if ((fZ||fS!=fO)) goto L_006c11b7;
L_006c11b3:; BB(0x006c11b3);
    /* 006c11b3: add dword ptr [edi + 0x44], 1 */ { u32 ad = (u32)(r_edi+0x44u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_006c11b7:; BB(0x006c11b7);
    /* 006c11b7: push dword ptr [0xa0f664] */ { u32 v = R32((u32)(0xa0f664u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c11bd: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 006c11c0: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 006c11c3: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006c11c5: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006c11c7: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006c11c9: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 006c11d0: call 0x7c11a0 */ r_esp -= 4; W32(r_esp, 0x6c11d5u); f_007c11a0();
    /* 006c11d5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c11d7: jne 0x6c11fb */ if (!fZ) goto L_006c11fb;
L_006c11d9:; BB(0x006c11d9);
    /* 006c11d9: push dword ptr [0xa0f668] */ { u32 v = R32((u32)(0xa0f668u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c11df: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 006c11e2: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 006c11e5: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006c11e7: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006c11e9: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006c11eb: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 006c11f2: call 0x7c11a0 */ r_esp -= 4; W32(r_esp, 0x6c11f7u); f_007c11a0();
    /* 006c11f7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c11f9: je 0x6c1202 */ if (fZ) goto L_006c1202;
L_006c11fb:; BB(0x006c11fb);
    /* 006c11fb: mov dword ptr [edi + 0x4c], 0 */ W32((u32)(r_edi+0x4cu), 0x0u);
L_006c1202:; BB(0x006c1202);
    /* 006c1202: push dword ptr [0xa0f66c] */ { u32 v = R32((u32)(0xa0f66cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006c1208: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 006c120b: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 006c120e: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006c1210: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006c1212: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006c1214: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 006c121b: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x6c1220u); f_007c1160();
    /* 006c1220: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c1222: je 0x6c122d */ if (fZ) goto L_006c122d;
L_006c1224:; BB(0x006c1224);
    /* 006c1224: mov eax, dword ptr [edi + 0x44] */ r_eax = R32((u32)(r_edi+0x44u));
    /* 006c1227: add eax, -0x19 */ {  u32 a = r_eax; u32 b = 0xffffffe7u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006c122a: mov dword ptr [edi + 0x44], eax */ W32((u32)(r_edi+0x44u), r_eax);
L_006c122d:; BB(0x006c122d);
    /* 006c122d: push dword ptr [0xa0f670] */ { u32 v = R32((u32)(0xa0f670u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c1233: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 006c1236: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 006c1239: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006c123b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006c123d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006c123f: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 006c1246: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x6c124bu); f_007c1160();
    /* 006c124b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c124d: je 0x6c125a */ if (fZ) goto L_006c125a;
L_006c124f:; BB(0x006c124f);
    /* 006c124f: mov edx, dword ptr [edi + 0x44] */ r_edx = R32((u32)(r_edi+0x44u));
    /* 006c1252: add edx, 0x19 */ {  u32 a = r_edx; u32 b = 0x19u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006c1255: mov dword ptr [edi + 0x44], edx */ W32((u32)(r_edi+0x44u), r_edx);
    /* 006c1258: jmp 0x6c125d */ goto L_006c125d;
L_006c125a:; BB(0x006c125a);
    /* 006c125a: mov edx, dword ptr [edi + 0x44] */ r_edx = R32((u32)(r_edi+0x44u));
L_006c125d:; BB(0x006c125d);
    /* 006c125d: mov eax, dword ptr [edi + 0x48] */ r_eax = R32((u32)(r_edi+0x48u));
    /* 006c1260: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c1262: je 0x6c1283 */ if (fZ) goto L_006c1283;
L_006c1264:; BB(0x006c1264);
    /* 006c1264: mov ecx, dword ptr [edi + 0x3c] */ r_ecx = R32((u32)(r_edi+0x3cu));
    /* 006c1267: cmp ecx, dword ptr [edi + 0x40] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edi+0x40u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c126a: jne 0x6c1283 */ if (!fZ) goto L_006c1283;
L_006c126c:; BB(0x006c126c);
    /* 006c126c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006c126e: jge 0x6c1275 */ if ((fS==fO)) goto L_006c1275;
L_006c1270:; BB(0x006c1270);
    /* 006c1270: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006c1272: mov dword ptr [edi + 0x44], edx */ W32((u32)(r_edi+0x44u), r_edx);
L_006c1275:; BB(0x006c1275);
    /* 006c1275: lea ecx, [eax - 1] */ r_ecx = (u32)(r_eax+0xffffffffu);
    /* 006c1278: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006c127a: jle 0x6c1298 */ if ((fZ||fS!=fO)) goto L_006c1298;
L_006c127c:; BB(0x006c127c);
    /* 006c127c: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006c127e: mov dword ptr [edi + 0x44], edx */ W32((u32)(r_edi+0x44u), r_edx);
    /* 006c1281: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006c1282: ret  */ FN_RET(0x006c1070); r_esp += 4; return;
L_006c1283:; BB(0x006c1283);
    /* 006c1283: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006c1285: jge 0x6c128d */ if ((fS==fO)) goto L_006c128d;
L_006c1287:; BB(0x006c1287);
    /* 006c1287: add edx, 0x4b */ {  u32 a = r_edx; u32 b = 0x4bu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006c128a: mov dword ptr [edi + 0x44], edx */ W32((u32)(r_edi+0x44u), r_edx);
L_006c128d:; BB(0x006c128d);
    /* 006c128d: cmp edx, 0x4a */ {  u32 a = r_edx; u32 b = 0x4au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006c1290: jle 0x6c1298 */ if ((fZ||fS!=fO)) goto L_006c1298;
L_006c1292:; BB(0x006c1292);
    /* 006c1292: add edx, -0x4b */ {  u32 a = r_edx; u32 b = 0xffffffb5u; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006c1295: mov dword ptr [edi + 0x44], edx */ W32((u32)(r_edi+0x44u), r_edx);
L_006c1298:; BB(0x006c1298);
    /* 006c1298: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006c1299: ret  */ FN_RET(0x006c1070); r_esp += 4; return;
L_006c129a:; BB(0x006c129a);
    /* 006c129a: mov eax, dword ptr [edi + 0x40] */ r_eax = R32((u32)(r_edi+0x40u));
    /* 006c129d: mov dword ptr [edi + 0x3c], eax */ W32((u32)(r_edi+0x3cu), r_eax);
    /* 006c12a0: jmp 0x6c10a6 */ goto L_006c10a6;
}

void f_006c12a8(void) /* sub_6C12A8 */
{
    FN_ENTER(0x006c12a8);
    /* 006c12a8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006c12a9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006c12aa: mov esi, ecx */ r_esi = r_ecx;
    /* 006c12ac: push dword ptr [0xa0f674] */ { u32 v = R32((u32)(0xa0f674u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c12b2: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 006c12b5: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 006c12b8: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006c12ba: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006c12bc: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006c12be: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 006c12c5: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x6c12cau); f_007c1160();
    /* 006c12ca: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c12cc: je 0x6c12ff */ if (fZ) goto L_006c12ff;
L_006c12ce:; BB(0x006c12ce);
    /* 006c12ce: mov ebp, dword ptr [esi + 0x3c] */ r_ebp = R32((u32)(r_esi+0x3cu));
    /* 006c12d1: lea eax, [ebp + ebp*4] */ r_eax = (u32)(r_ebp+r_ebp*4);
    /* 006c12d5: lea ebp, [eax + eax] */ r_ebp = (u32)(r_eax+r_eax);
    /* 006c12d8: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 006c12da: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 006c12dc: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 006c12de: sub ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 006c12e0: add ebp, dword ptr [esi + 0x44] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esi+0x44u)); u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 006c12e3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006c12e4: call 0x6bb254 */ r_esp -= 4; W32(r_esp, 0x6c12e9u); f_006bb254();
    /* 006c12e9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c12ea: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c12ec: je 0x6c12f8 */ if (fZ) goto L_006c12f8;
L_006c12ee:; BB(0x006c12ee);
    /* 006c12ee: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006c12ef: call 0x6bb1a8 */ r_esp -= 4; W32(r_esp, 0x6c12f4u); f_006bb1a8();
    /* 006c12f4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c12f5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006c12f6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006c12f7: ret  */ FN_RET(0x006c12a8); r_esp += 4; return;
L_006c12f8:; BB(0x006c12f8);
    /* 006c12f8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006c12f9: call 0x6bb100 */ r_esp -= 4; W32(r_esp, 0x6c12feu); f_006bb100();
    /* 006c12fe: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_006c12ff:; BB(0x006c12ff);
    /* 006c12ff: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006c1300: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006c1301: ret  */ FN_RET(0x006c12a8); r_esp += 4; return;
}

void f_006c1304(void) /* sub_6C1304 */
{
    FN_ENTER(0x006c1304);
    /* 006c1304: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006c1305: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006c1306: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006c1307: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006c1308: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006c130b: mov edi, ecx */ r_edi = r_ecx;
    /* 006c130d: mov eax, dword ptr [edi + 0x48] */ r_eax = R32((u32)(r_edi+0x48u));
    /* 006c1310: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006c1312: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c1314: je 0x6c137f */ if (fZ) goto L_006c137f;
L_006c1316:; BB(0x006c1316);
    /* 006c1316: mov edx, dword ptr [edi + 0x3c] */ r_edx = R32((u32)(r_edi+0x3cu));
    /* 006c1319: cmp edx, dword ptr [edi + 0x40] */ {  u32 a = r_edx; u32 b = R32((u32)(r_edi+0x40u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c131c: jne 0x6c137f */ if (!fZ) goto L_006c137f;
L_006c131e:; BB(0x006c131e);
    /* 006c131e: mov ebp, dword ptr [edi + 0x38] */ r_ebp = R32((u32)(r_edi+0x38u));
    /* 006c1321: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 006c1324: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006c1326: jmp 0x6c132b */ goto L_006c132b;
L_006c1328:; BB(0x006c1328);
    /* 006c1328: mov eax, dword ptr [edi + 0x48] */ r_eax = R32((u32)(r_edi+0x48u));
L_006c132b:; BB(0x006c132b);
    /* 006c132b: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 006c132f: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 006c1331: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 006c1334: lea esi, [edx + ecx] */ r_esi = (u32)(r_edx+r_ecx);
    /* 006c1337: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006c1339: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006c133b: lea ecx, [ecx + esi + 4] */ r_ecx = (u32)(r_ecx+r_esi+0x4u);
    /* 006c133f: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 006c1342: shl ecx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 006c1345: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 006c1349: jmp 0x6c134e */ goto L_006c134e;
L_006c134b:; BB(0x006c134b);
    /* 006c134b: mov eax, dword ptr [edi + 0x48] */ r_eax = R32((u32)(r_edi+0x48u));
L_006c134e:; BB(0x006c134e);
    /* 006c134e: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006c1350: jge 0x6c1375 */ if ((fS==fO)) goto L_006c1375;
L_006c1352:; BB(0x006c1352);
    /* 006c1352: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006c1353: call 0x6bb254 */ r_esp -= 4; W32(r_esp, 0x6c1358u); f_006bb254();
    /* 006c1358: lea edx, [ebx + 5] */ r_edx = (u32)(r_ebx+0x5u);
    /* 006c135b: or edx, dword ptr [esp + 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0xcu)); u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 006c135f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c1360: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006c1361: push 0x96b768 */ { u32 v = 0x96b768u; r_esp -= 4; W32(r_esp, v); }
    /* 006c1366: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006c1367: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x6c136cu); f_0061cdb0();
    /* 006c136c: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c136f: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 006c1372: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_006c1375:; BB(0x006c1375);
    /* 006c1375: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006c1378: cmp ebx, 0x19 */ {  u32 a = r_ebx; u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006c137b: jl 0x6c134b */ if ((fS!=fO)) goto L_006c134b;
L_006c137d:; BB(0x006c137d);
    /* 006c137d: jmp 0x6c13f0 */ goto L_006c13f0;
L_006c137f:; BB(0x006c137f);
    /* 006c137f: mov ebp, 0x40000 */ r_ebp = 0x40000u;
    /* 006c1384: mov eax, dword ptr [edi + 0x38] */ r_eax = R32((u32)(r_edi+0x38u));
    /* 006c1387: mov ebx, eax */ r_ebx = r_eax;
L_006c1389:; BB(0x006c1389);
    /* 006c1389: mov esi, 5 */ r_esi = 0x5u;
L_006c138e:; BB(0x006c138e);
    /* 006c138e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006c138f: call 0x6bb254 */ r_esp -= 4; W32(r_esp, 0x6c1394u); f_006bb254();
    /* 006c1394: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c1395: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006c1396: mov edx, ebp */ r_edx = r_ebp;
    /* 006c1398: or edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 006c139a: push 0x96b768 */ { u32 v = 0x96b768u; r_esp -= 4; W32(r_esp, v); }
    /* 006c139f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006c13a0: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x6c13a5u); f_0061cdb0();
    /* 006c13a5: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c13a8: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006c13ab: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006c13ae: cmp esi, 0x1e */ {  u32 a = r_esi; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006c13b1: jl 0x6c138e */ if ((fS!=fO)) goto L_006c138e;
L_006c13b3:; BB(0x006c13b3);
    /* 006c13b3: add ebp, 0xb0000 */ {  u32 a = r_ebp; u32 b = 0xb0000u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 006c13b9: cmp ebp, 0x250000 */ {  u32 a = r_ebp; u32 b = 0x250000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006c13bf: jl 0x6c1389 */ if ((fS!=fO)) goto L_006c1389;
L_006c13c1:; BB(0x006c13c1);
    /* 006c13c1: push dword ptr [edi + 0x40] */ { u32 v = R32((u32)(r_edi+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c13c4: push dword ptr [edi + 0x3c] */ { u32 v = R32((u32)(r_edi+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006c13c7: push 0x96b774 */ { u32 v = 0x96b774u; r_esp -= 4; W32(r_esp, v); }
    /* 006c13cc: push 0x1d0004 */ { u32 v = 0x1d0004u; r_esp -= 4; W32(r_esp, v); }
    /* 006c13d1: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x6c13d6u); f_0061cdb0();
    /* 006c13d6: push dword ptr [edi + 0x44] */ { u32 v = R32((u32)(r_edi+0x44u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c13d9: push 0x96b784 */ { u32 v = 0x96b784u; r_esp -= 4; W32(r_esp, v); }
    /* 006c13de: push 0x40004 */ { u32 v = 0x40004u; r_esp -= 4; W32(r_esp, v); }
    /* 006c13e3: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x6c13e8u); f_0061cdb0();
    /* 006c13e8: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006c13eb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006c13ec: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006c13ed: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006c13ee: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006c13ef: ret  */ FN_RET(0x006c1304); r_esp += 4; return;
L_006c13f0:; BB(0x006c13f0);
    /* 006c13f0: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 006c13f4: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 006c13f7: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006c13fa: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006c13fd: jl 0x6c1328 */ if ((fS!=fO)) goto L_006c1328;
L_006c1403:; BB(0x006c1403);
    /* 006c1403: jmp 0x6c13c1 */ goto L_006c13c1;
}

void f_006c1408(void) /* sub_6C1408 */
{
    FN_ENTER(0x006c1408);
    /* 006c1408: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006c1409: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006c140b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006c140d: call 0x6c142c */ r_esp -= 4; W32(r_esp, 0x6c1412u); f_006c142c();
    /* 006c1412: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006c1416: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c1418: jne 0x6c141e */ if (!fZ) goto L_006c141e;
L_006c141a:; BB(0x006c141a);
    /* 006c141a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006c141b: ret 4 */ FN_RET(0x006c1408); r_esp += 8; return;
L_006c141e:; BB(0x006c141e);
    /* 006c141e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006c141f: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x6c1424u); f_00857e98();
    /* 006c1424: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c1425: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006c1426: ret 4 */ FN_RET(0x006c1408); r_esp += 8; return;
}

void f_006c142c(void) /* sub_6C142C */
{
    FN_ENTER(0x006c142c);
    /* 006c142c: mov dword ptr [ecx], 0xb3b08c */ W32((u32)(r_ecx), 0xb3b08cu);
    /* 006c1432: ret  */ FN_RET(0x006c142c); r_esp += 4; return;
}

void f_006c1434(void) /* sub_6C1434 */
{
    FN_ENTER(0x006c1434);
    /* 006c1434: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006c1435: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006c1437: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006c1439: mov dword ptr [ebp], 0xb3b08c */ W32((u32)(r_ebp), 0xb3b08cu);
    /* 006c1440: call 0x6c1610 */ r_esp -= 4; W32(r_esp, 0x6c1445u); f_006c1610();
    /* 006c1445: mov eax, ebp */ r_eax = r_ebp;
    /* 006c1447: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006c1448: ret  */ FN_RET(0x006c1434); r_esp += 4; return;
}

void f_006c144c(void) /* sub_6C144C */
{
    FN_ENTER(0x006c144c);
    /* 006c144c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006c144d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006c144e: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006c1450: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 006c1454: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c1456: je 0x6c14b7 */ if (fZ) goto L_006c14b7;
L_006c1458:; BB(0x006c1458);
    /* 006c1458: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006c1459: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006c145b: call 0x6c14c8 */ r_esp -= 4; W32(r_esp, 0x6c1460u); f_006c14c8();
    /* 006c1460: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c1462: jne 0x6c146b */ if (!fZ) goto L_006c146b;
L_006c1464:; BB(0x006c1464);
    /* 006c1464: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c1466: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006c1467: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006c1468: ret 4 */ FN_RET(0x006c144c); r_esp += 8; return;
L_006c146b:; BB(0x006c146b);
    /* 006c146b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006c146d: call 0x6c14f4 */ r_esp -= 4; W32(r_esp, 0x6c1472u); f_006c14f4();
    /* 006c1472: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c1474: jne 0x6c147d */ if (!fZ) goto L_006c147d;
L_006c1476:; BB(0x006c1476);
    /* 006c1476: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c1478: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006c1479: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006c147a: ret 4 */ FN_RET(0x006c144c); r_esp += 8; return;
L_006c147d:; BB(0x006c147d);
    /* 006c147d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006c147e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006c1480: call 0x6c151c */ r_esp -= 4; W32(r_esp, 0x6c1485u); f_006c151c();
    /* 006c1485: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c1487: jne 0x6c1490 */ if (!fZ) goto L_006c1490;
L_006c1489:; BB(0x006c1489);
    /* 006c1489: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c148b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006c148c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006c148d: ret 4 */ FN_RET(0x006c144c); r_esp += 8; return;
L_006c1490:; BB(0x006c1490);
    /* 006c1490: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006c1492: call 0x6c1570 */ r_esp -= 4; W32(r_esp, 0x6c1497u); f_006c1570();
    /* 006c1497: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006c1499: call 0x6c1578 */ r_esp -= 4; W32(r_esp, 0x6c149eu); f_006c1578();
    /* 006c149e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006c149f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006c14a1: call 0x6c158c */ r_esp -= 4; W32(r_esp, 0x6c14a6u); f_006c158c();
    /* 006c14a6: mov dword ptr [ebp + 0x18], 1 */ W32((u32)(r_ebp+0x18u), 0x1u);
    /* 006c14ad: mov eax, 1 */ r_eax = 0x1u;
    /* 006c14b2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006c14b3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006c14b4: ret 4 */ FN_RET(0x006c144c); r_esp += 8; return;
L_006c14b7:; BB(0x006c14b7);
    /* 006c14b7: mov dword ptr [ebp + 0x1c], 3 */ W32((u32)(r_ebp+0x1cu), 0x3u);
    /* 006c14be: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c14c0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006c14c1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006c14c2: ret 4 */ FN_RET(0x006c144c); r_esp += 8; return;
}

void f_006c14c8(void) /* sub_6C14C8 */
{
    FN_ENTER(0x006c14c8);
    /* 006c14c8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006c14c9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006c14cb: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c14cf: call 0x5bbe24 */ r_esp -= 4; W32(r_esp, 0x6c14d4u); f_005bbe24();
    /* 006c14d4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c14d5: mov dword ptr [ebx + 0x10], eax */ W32((u32)(r_ebx+0x10u), r_eax);
    /* 006c14d8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c14da: jbe 0x6c14e5 */ if ((fC||fZ)) goto L_006c14e5;
L_006c14dc:; BB(0x006c14dc);
    /* 006c14dc: mov eax, 1 */ r_eax = 0x1u;
    /* 006c14e1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006c14e2: ret 4 */ FN_RET(0x006c14c8); r_esp += 8; return;
L_006c14e5:; BB(0x006c14e5);
    /* 006c14e5: mov dword ptr [ebx + 0x1c], 1 */ W32((u32)(r_ebx+0x1cu), 0x1u);
    /* 006c14ec: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c14ee: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006c14ef: ret 4 */ FN_RET(0x006c14c8); r_esp += 8; return;
}

void f_006c14f4(void) /* sub_6C14F4 */
{
    FN_ENTER(0x006c14f4);
    /* 006c14f4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006c14f5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006c14f7: push dword ptr [ebx + 0x10] */ { u32 v = R32((u32)(r_ebx+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c14fa: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c14ffu); f_008581c5();
    /* 006c14ff: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c1500: mov dword ptr [ebx + 0xc], eax */ W32((u32)(r_ebx+0xcu), r_eax);
    /* 006c1503: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c1505: je 0x6c150e */ if (fZ) goto L_006c150e;
L_006c1507:; BB(0x006c1507);
    /* 006c1507: mov eax, 1 */ r_eax = 0x1u;
    /* 006c150c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006c150d: ret  */ FN_RET(0x006c14f4); r_esp += 4; return;
L_006c150e:; BB(0x006c150e);
    /* 006c150e: mov dword ptr [ebx + 0x1c], 4 */ W32((u32)(r_ebx+0x1cu), 0x4u);
    /* 006c1515: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c1517: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006c1518: ret  */ FN_RET(0x006c14f4); r_esp += 4; return;
}

void f_006c151c(void) /* sub_6C151C */
{
    FN_ENTER(0x006c151c);
    /* 006c151c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006c151d: mov edi, ecx */ r_edi = r_ecx;
    /* 006c151f: push dword ptr [edi + 0xc] */ { u32 v = R32((u32)(r_edi+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006c1522: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006c1526: call 0x5bb880 */ r_esp -= 4; W32(r_esp, 0x6c152bu); f_005bb880();
    /* 006c152b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c152e: mov dword ptr [edi + 0x10], eax */ W32((u32)(r_edi+0x10u), r_eax);
    /* 006c1531: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c1533: jbe 0x6c153e */ if ((fC||fZ)) goto L_006c153e;
L_006c1535:; BB(0x006c1535);
    /* 006c1535: mov eax, 1 */ r_eax = 0x1u;
    /* 006c153a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006c153b: ret 4 */ FN_RET(0x006c151c); r_esp += 8; return;
L_006c153e:; BB(0x006c153e);
    /* 006c153e: mov dword ptr [edi + 0x1c], 2 */ W32((u32)(r_edi+0x1cu), 0x2u);
    /* 006c1545: mov ecx, edi */ r_ecx = r_edi;
    /* 006c1547: call 0x6c1554 */ r_esp -= 4; W32(r_esp, 0x6c154cu); f_006c1554();
    /* 006c154c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c154e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006c154f: ret 4 */ FN_RET(0x006c151c); r_esp += 8; return;
}

void f_006c1554(void) /* sub_6C1554 */
{
    FN_ENTER(0x006c1554);
    /* 006c1554: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006c1555: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006c1557: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 006c155a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c155c: je 0x6c156c */ if (fZ) goto L_006c156c;
L_006c155e:; BB(0x006c155e);
    /* 006c155e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c155f: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x6c1564u); f_00857e98();
    /* 006c1564: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c1565: mov dword ptr [ebp + 0xc], 0 */ W32((u32)(r_ebp+0xcu), 0x0u);
L_006c156c:; BB(0x006c156c);
    /* 006c156c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006c156d: ret  */ FN_RET(0x006c1554); r_esp += 4; return;
}

void f_006c1570(void) /* sub_6C1570 */
{
    FN_ENTER(0x006c1570);
    /* 006c1570: mov eax, dword ptr [ecx + 0xc] */ r_eax = R32((u32)(r_ecx+0xcu));
    /* 006c1573: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 006c1576: ret  */ FN_RET(0x006c1570); r_esp += 4; return;
}

void f_006c1578(void) /* sub_6C1578 */
{
    FN_ENTER(0x006c1578);
    /* 006c1578: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006c1579: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006c157b: mov ecx, dword ptr [ebx + 4] */ r_ecx = R32((u32)(r_ebx+0x4u));
    /* 006c157e: call 0x6c1650 */ r_esp -= 4; W32(r_esp, 0x6c1583u); f_006c1650();
    /* 006c1583: add eax, dword ptr [ebx + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0xcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006c1586: mov dword ptr [ebx + 8], eax */ W32((u32)(r_ebx+0x8u), r_eax);
    /* 006c1589: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006c158a: ret  */ FN_RET(0x006c1578); r_esp += 4; return;
}

void f_006c158c(void) /* sub_6C158C */
{
    FN_ENTER(0x006c158c);
    /* 006c158c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006c158d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006c158e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006c158f: mov esi, ecx */ r_esi = r_ecx;
    /* 006c1591: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 006c1595: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c1597: mov dh, byte ptr [edi] */ r_edx = (r_edx & 0xffff00ffu) | (((R8((u32)(r_edi))) & 0xffu) << 8);
    /* 006c1599: mov ecx, edi */ r_ecx = r_edi;
    /* 006c159b: test dh, dh */ {  u32 a = (u8)(r_edx>>8); u32 b = (u8)(r_edx>>8); u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006c159d: je 0x6c15ab */ if (fZ) goto L_006c15ab;
L_006c159f:; BB(0x006c159f);
    /* 006c159f: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006c15a2: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006c15a5: mov dl, byte ptr [ecx] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx))) & 0xffu);
    /* 006c15a7: test dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006c15a9: jne 0x6c159f */ if (!fZ) goto L_006c159f;
L_006c15ab:; BB(0x006c15ab);
    /* 006c15ab: cmp eax, 0x1f */ {  u32 a = r_eax; u32 b = 0x1fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006c15ae: jle 0x6c15c9 */ if ((fZ||fS!=fO)) goto L_006c15c9;
L_006c15b0:; BB(0x006c15b0);
    /* 006c15b0: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 006c15b2: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006c15b3: lea eax, [esi + 0x20] */ r_eax = (u32)(r_esi+0x20u);
    /* 006c15b6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c15b7: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x6c15bcu); f_00858900();
    /* 006c15bc: mov byte ptr [esi + 0x3f], 0 */ W8((u32)(r_esi+0x3fu), 0x0u);
    /* 006c15c0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006c15c3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006c15c4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006c15c5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006c15c6: ret 4 */ FN_RET(0x006c158c); r_esp += 8; return;
L_006c15c9:; BB(0x006c15c9);
    /* 006c15c9: add esi, 0x20 */ {  u32 a = r_esi; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_006c15cc:; BB(0x006c15cc);
    /* 006c15cc: mov dl, byte ptr [edi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 006c15ce: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006c15d1: mov byte ptr [esi], dl */ W8((u32)(r_esi), (u8)r_edx);
    /* 006c15d3: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006c15d6: test dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c15d8: jne 0x6c15cc */ if (!fZ) goto L_006c15cc;
L_006c15da:; BB(0x006c15da);
    /* 006c15da: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006c15db: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006c15dc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006c15dd: ret 4 */ FN_RET(0x006c158c); r_esp += 8; return;
}

void f_006c15e0(void) /* sub_6C15E0 */
{
    FN_ENTER(0x006c15e0);
    /* 006c15e0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006c15e1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006c15e3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006c15e5: call 0x6c1554 */ r_esp -= 4; W32(r_esp, 0x6c15eau); f_006c1554();
    /* 006c15ea: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006c15ec: call 0x6c1610 */ r_esp -= 4; W32(r_esp, 0x6c15f1u); f_006c1610();
    /* 006c15f1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006c15f2: ret  */ FN_RET(0x006c15e0); r_esp += 4; return;
}

void f_006c15f4(void) /* sub_6C15F4 */
{
    FN_ENTER(0x006c15f4);
    /* 006c15f4: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 006c15f7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c15f9: je 0x6c1603 */ if (fZ) goto L_006c1603;
L_006c15fb:; BB(0x006c15fb);
    /* 006c15fb: mov ecx, eax */ r_ecx = r_eax;
    /* 006c15fd: call 0x6c1644 */ r_esp -= 4; W32(r_esp, 0x6c1602u); f_006c1644();
    /* 006c1602: ret  */ FN_RET(0x006c15f4); r_esp += 4; return;
L_006c1603:; BB(0x006c1603);
    /* 006c1603: mov dword ptr [ecx + 0x1c], 7 */ W32((u32)(r_ecx+0x1cu), 0x7u);
    /* 006c160a: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 006c160f: ret  */ FN_RET(0x006c15f4); r_esp += 4; return;
}

void f_006c1610(void) /* sub_6C1610 */
{
    FN_ENTER(0x006c1610);
    /* 006c1610: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c1612: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 006c1615: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 006c1618: lea eax, [ecx + 0x20] */ r_eax = (u32)(r_ecx+0x20u);
    /* 006c161b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006c161d: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 006c161f: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 006c1622: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 006c1625: mov dword ptr [eax + 0xc], edx */ W32((u32)(r_eax+0xcu), r_edx);
    /* 006c1628: mov dword ptr [eax + 0x10], edx */ W32((u32)(r_eax+0x10u), r_edx);
    /* 006c162b: mov dword ptr [eax + 0x14], edx */ W32((u32)(r_eax+0x14u), r_edx);
    /* 006c162e: mov dword ptr [eax + 0x18], edx */ W32((u32)(r_eax+0x18u), r_edx);
    /* 006c1631: mov dword ptr [eax + 0x1c], edx */ W32((u32)(r_eax+0x1cu), r_edx);
    /* 006c1634: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c1636: mov dword ptr [ecx + 0xc], eax */ W32((u32)(r_ecx+0xcu), r_eax);
    /* 006c1639: mov dword ptr [ecx + 0x10], eax */ W32((u32)(r_ecx+0x10u), r_eax);
    /* 006c163c: mov dword ptr [ecx + 0x18], eax */ W32((u32)(r_ecx+0x18u), r_eax);
    /* 006c163f: mov dword ptr [ecx + 0x1c], eax */ W32((u32)(r_ecx+0x1cu), r_eax);
    /* 006c1642: ret  */ FN_RET(0x006c1610); r_esp += 4; return;
}

void f_006c1644(void) /* sub_6C1644 */
{
    FN_ENTER(0x006c1644);
    /* 006c1644: lea eax, [ecx + 0x10] */ r_eax = (u32)(r_ecx+0x10u);
    /* 006c1647: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c1648: call 0x6c1664 */ r_esp -= 4; W32(r_esp, 0x6c164du); f_006c1664();
    /* 006c164d: ret  */ FN_RET(0x006c1644); r_esp += 4; return;
}

void f_006c1650(void) /* sub_6C1650 */
{
    FN_ENTER(0x006c1650);
    /* 006c1650: lea eax, [ecx + 0x14] */ r_eax = (u32)(r_ecx+0x14u);
    /* 006c1653: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c1654: call 0x6c1664 */ r_esp -= 4; W32(r_esp, 0x6c1659u); f_006c1664();
    /* 006c1659: ret  */ FN_RET(0x006c1650); r_esp += 4; return;
}

void f_006c165c(void) /* sub_6C165C */
{
    FN_ENTER(0x006c165c);
    /* 006c165c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006c165d: call 0x6c1664 */ r_esp -= 4; W32(r_esp, 0x6c1662u); f_006c1664();
    /* 006c1662: ret  */ FN_RET(0x006c165c); r_esp += 4; return;
}

void f_006c1664(void) /* sub_6C1664 */
{
    FN_ENTER(0x006c1664);
    /* 006c1664: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 006c1668: movzx eax, byte ptr [edx] */ r_eax = (u32)R8((u32)(r_edx));
    /* 006c166b: movzx ecx, byte ptr [edx + 1] */ r_ecx = (u32)R8((u32)(r_edx+0x1u));
    /* 006c166f: shl eax, 0x18 */ { u32 c = (24u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 006c1672: shl ecx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 006c1675: and ecx, 0xff0000 */ {  u32 a = r_ecx; u32 b = 0xff0000u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 006c167b: or eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006c167d: movzx ecx, byte ptr [edx + 2] */ r_ecx = (u32)R8((u32)(r_edx+0x2u));
    /* 006c1681: movzx edx, byte ptr [edx + 3] */ r_edx = (u32)R8((u32)(r_edx+0x3u));
    /* 006c1685: shl ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 006c1688: and ecx, 0xff00 */ {  u32 a = r_ecx; u32 b = 0xff00u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 006c168e: or eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006c1690: or eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c1692: ret 4 */ FN_RET(0x006c1664); r_esp += 8; return;
}

void f_006c1698(void) /* sub_6C1698 */
{
    FN_ENTER(0x006c1698);
    /* 006c1698: lea eax, [ecx + 4] */ r_eax = (u32)(r_ecx+0x4u);
    /* 006c169b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c169c: call 0x6c1664 */ r_esp -= 4; W32(r_esp, 0x6c16a1u); f_006c1664();
    /* 006c16a1: ret  */ FN_RET(0x006c1698); r_esp += 4; return;
}

void f_006c16a4(void) /* sub_6C16A4 */
{
    FN_ENTER(0x006c16a4);
    /* 006c16a4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006c16a5: mov ebp, esp */ r_ebp = r_esp;
    /* 006c16a7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006c16a9: push 0x8ec52a */ { u32 v = 0x8ec52au; r_esp -= 4; W32(r_esp, v); }
    /* 006c16ae: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006c16b4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c16b5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006c16bc: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006c16bf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006c16c2: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 006c16c5: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 006c16c8: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 006c16cb: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 006c16ce: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 006c16d1: mov eax, ecx */ r_eax = r_ecx;
    /* 006c16d3: lea edx, [eax + 0x3e0] */ r_edx = (u32)(r_eax+0x3e0u);
    /* 006c16d9: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 006c16dc: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 006c16df: add eax, 0x74 */ {  u32 a = r_eax; u32 b = 0x74u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006c16e2: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 006c16e5: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 006c16ec: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c16f1: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 006c16f4: add eax, 0x3c */ {  u32 a = r_eax; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006c16f7: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 006c16f9: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c16fb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c16fc: call 0x8586d6 */ r_esp -= 4; W32(r_esp, 0x6c1701u); f_008586d6();
    /* 006c1701: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 006c1708: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c170d: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 006c1710: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006c1713: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 006c1715: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c1717: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c1718: call 0x8586d6 */ r_esp -= 4; W32(r_esp, 0x6c171du); f_008586d6();
    /* 006c171d: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 006c1720: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 006c1723: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 006c172a: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c172f: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 006c1732: add eax, 0x3c */ {  u32 a = r_eax; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006c1735: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 006c1737: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c1739: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c173a: call 0x8586d6 */ r_esp -= 4; W32(r_esp, 0x6c173fu); f_008586d6();
    /* 006c173f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006c1746: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c174b: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 006c174e: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006c1751: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 006c1753: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c1755: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c1756: call 0x8586d6 */ r_esp -= 4; W32(r_esp, 0x6c175bu); f_008586d6();
    /* 006c175b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006c175e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c1760: jne 0x6c1772 */ if (!fZ) goto L_006c1772;
L_006c1762:; BB(0x006c1762);
    /* 006c1762: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006c1765: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006c176c: mov esp, ebp */ r_esp = r_ebp;
    /* 006c176e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006c176f: ret 4 */ FN_RET(0x006c16a4); r_esp += 8; return;
L_006c1772:; BB(0x006c1772);
    /* 006c1772: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006c1775: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c1776: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x6c177bu); f_00857e98();
    /* 006c177b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c177c: jmp 0x6c1762 */ goto L_006c1762;
}

void f_006c1780(void) /* sub_6C1780 */
{
    FN_ENTER(0x006c1780);
    /* 006c1780: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006c1781: mov ebp, esp */ r_ebp = r_esp;
    /* 006c1783: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006c1785: push 0x8ec554 */ { u32 v = 0x8ec554u; r_esp -= 4; W32(r_esp, v); }
    /* 006c178a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006c1790: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c1791: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006c1798: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006c179b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006c179e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 006c17a1: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 006c17a4: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 006c17a7: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 006c17aa: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 006c17ad: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006c17b4: push 0x6c1940 */ { u32 v = 0x6c1940u; r_esp -= 4; W32(r_esp, v); }
    /* 006c17b9: mov eax, ecx */ r_eax = r_ecx;
    /* 006c17bb: lea edx, [eax + 4] */ r_edx = (u32)(r_eax+0x4u);
    /* 006c17be: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c17c0: push 0x2ea4 */ { u32 v = 0x2ea4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c17c5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006c17c6: call 0x8586d6 */ r_esp -= 4; W32(r_esp, 0x6c17cbu); f_008586d6();
    /* 006c17cb: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006c17ce: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c17d0: jne 0x6c17e2 */ if (!fZ) goto L_006c17e2;
L_006c17d2:; BB(0x006c17d2);
    /* 006c17d2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006c17d5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006c17dc: mov esp, ebp */ r_esp = r_ebp;
    /* 006c17de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006c17df: ret 4 */ FN_RET(0x006c1780); r_esp += 8; return;
L_006c17e2:; BB(0x006c17e2);
    /* 006c17e2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006c17e5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c17e6: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x6c17ebu); f_00857e98();
    /* 006c17eb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c17ec: jmp 0x6c17d2 */ goto L_006c17d2;
}

void f_006c17f0(void) /* sub_6C17F0 */
{
    FN_ENTER(0x006c17f0);
    /* 006c17f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006c17f1: mov ebp, esp */ r_ebp = r_esp;
    /* 006c17f3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006c17f5: push 0x8ec5ce */ { u32 v = 0x8ec5ceu; r_esp -= 4; W32(r_esp, v); }
    /* 006c17fa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006c1800: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c1801: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006c1808: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006c180b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006c180e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006c1811: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006c1814: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006c1817: lea eax, [ecx + 0x3e0] */ r_eax = (u32)(r_ecx+0x3e0u);
    /* 006c181d: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c1822: push 0x4da288 */ { u32 v = 0x4da288u; r_esp -= 4; W32(r_esp, v); }
    /* 006c1827: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006c182a: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 006c182d: add ecx, 0x3e4 */ {  u32 a = r_ecx; u32 b = 0x3e4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006c1833: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 006c1836: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 006c1839: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 006c183b: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c183d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006c183e: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x6c1843u); f_00858736();
    /* 006c1843: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006c184a: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c184f: push 0x4da288 */ { u32 v = 0x4da288u; r_esp -= 4; W32(r_esp, v); }
    /* 006c1854: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 006c1857: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 006c1859: add eax, 0x3c */ {  u32 a = r_eax; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006c185c: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c185e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c185f: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x6c1864u); f_00858736();
    /* 006c1864: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 006c1867: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
    /* 006c186d: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 006c1874: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c1879: push 0x4da288 */ { u32 v = 0x4da288u; r_esp -= 4; W32(r_esp, v); }
    /* 006c187e: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 006c1881: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 006c1883: lea eax, [edx + 0x74] */ r_eax = (u32)(r_edx+0x74u);
    /* 006c1886: add edx, 0x78 */ {  u32 a = r_edx; u32 b = 0x78u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006c1889: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 006c188c: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c188e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006c188f: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x6c1894u); f_00858736();
    /* 006c1894: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 006c189b: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c18a0: push 0x4da288 */ { u32 v = 0x4da288u; r_esp -= 4; W32(r_esp, v); }
    /* 006c18a5: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 006c18a8: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 006c18aa: add eax, 0x3c */ {  u32 a = r_eax; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006c18ad: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c18af: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c18b0: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x6c18b5u); f_00858736();
    /* 006c18b5: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 006c18b8: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
    /* 006c18be: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 006c18c5: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_006c18c7:; BB(0x006c18c7);
    /* 006c18c7: mov edi, dword ptr [ebp - 0x3c] */ r_edi = R32((u32)(r_ebp+0xffffffc4u));
    /* 006c18ca: lea edx, [ebx + ebx] */ r_edx = (u32)(r_ebx+r_ebx);
    /* 006c18cd: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006c18cf: lea esi, [edx + edx] */ r_esi = (u32)(r_edx+r_edx);
    /* 006c18d2: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006c18d4: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006c18d6: sub esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 006c18d8: mov byte ptr [esi + edi + 5], 0xff */ W8((u32)(r_esi+r_edi+0x5u), 0xffu);
    /* 006c18dd: lea ecx, [edi + esi + 0xc] */ r_ecx = (u32)(r_edi+r_esi+0xcu);
    /* 006c18e1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c18e3: mov byte ptr [esi + edi + 4], al */ W8((u32)(r_esi+r_edi+0x4u), (u8)r_eax);
    /* 006c18e7: mov dword ptr [esi + edi + 8], eax */ W32((u32)(r_esi+r_edi+0x8u), r_eax);
    /* 006c18eb: mov byte ptr [esi + edi + 7], al */ W8((u32)(r_esi+r_edi+0x7u), (u8)r_eax);
    /* 006c18ef: mov byte ptr [esi + edi + 6], al */ W8((u32)(r_esi+r_edi+0x6u), (u8)r_eax);
    /* 006c18f3: call 0x5d6a3c */ r_esp -= 4; W32(r_esp, 0x6c18f8u); f_005d6a3c();
    /* 006c18f8: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006c18fb: cmp ebx, 0x1e */ {  u32 a = r_ebx; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006c18fe: jl 0x6c18c7 */ if ((fS!=fO)) goto L_006c18c7;
L_006c1900:; BB(0x006c1900);
    /* 006c1900: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 006c1907: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006c190a: add ebx, 0x700 */ {  u32 a = r_ebx; u32 b = 0x700u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006c1910: mov esi, 0xc8 */ r_esi = 0xc8u;
L_006c1915:; BB(0x006c1915);
    /* 006c1915: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006c1917: call 0x6c8960 */ r_esp -= 4; W32(r_esp, 0x6c191cu); f_006c8960();
    /* 006c191c: add ebx, 0x18 */ {  u32 a = r_ebx; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006c191f: add esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_esi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006c1922: jne 0x6c1915 */ if (!fZ) goto L_006c1915;
L_006c1924:; BB(0x006c1924);
    /* 006c1924: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006c1927: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 006c192a: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006c192d: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 006c1930: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006c1933: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006c193a: mov esp, ebp */ r_esp = r_ebp;
    /* 006c193c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006c193d: ret  */ FN_RET(0x006c17f0); r_esp += 4; return;
}

void f_006c1940(void) /* sub_6C1940 */
{
    FN_ENTER(0x006c1940);
    /* 006c1940: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006c1941: mov ebp, esp */ r_ebp = r_esp;
    /* 006c1943: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006c1945: push 0x8ec646 */ { u32 v = 0x8ec646u; r_esp -= 4; W32(r_esp, v); }
    /* 006c194a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006c1950: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c1951: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006c1958: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006c195b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006c195e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006c1961: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006c1964: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006c1967: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006c196a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006c196d: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 006c1970: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 006c1973: add eax, 0x3e0 */ {  u32 a = r_eax; u32 b = 0x3e0u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006c1978: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 006c197b: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 006c197e: add eax, 0x74 */ {  u32 a = r_eax; u32 b = 0x74u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006c1981: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 006c1984: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 006c198b: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c1990: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 006c1993: add eax, 0x3c */ {  u32 a = r_eax; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006c1996: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 006c1998: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c199a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c199b: call 0x8586d6 */ r_esp -= 4; W32(r_esp, 0x6c19a0u); f_008586d6();
    /* 006c19a0: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 006c19a7: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c19ac: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 006c19af: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006c19b2: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 006c19b4: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c19b6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c19b7: call 0x8586d6 */ r_esp -= 4; W32(r_esp, 0x6c19bcu); f_008586d6();
    /* 006c19bc: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 006c19bf: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 006c19c2: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 006c19c9: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c19ce: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 006c19d1: add eax, 0x3c */ {  u32 a = r_eax; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006c19d4: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 006c19d6: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c19d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c19d9: call 0x8586d6 */ r_esp -= 4; W32(r_esp, 0x6c19deu); f_008586d6();
    /* 006c19de: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006c19e5: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c19ea: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 006c19ed: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006c19f0: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 006c19f2: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c19f4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c19f5: call 0x8586d6 */ r_esp -= 4; W32(r_esp, 0x6c19fau); f_008586d6();
    /* 006c19fa: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006c19fd: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006c1a04: mov esp, ebp */ r_esp = r_ebp;
    /* 006c1a06: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006c1a07: ret  */ FN_RET(0x006c1940); r_esp += 4; return;
}

void f_006c1a08(void) /* sub_6C1A08 */
{
    FN_ENTER(0x006c1a08);
    /* 006c1a08: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006c1a09: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006c1a0a: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006c1a0c: movzx ecx, byte ptr [ebx] */ r_ecx = (u32)R8((u32)(r_ebx));
    /* 006c1a0f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006c1a11: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c1a13: jle 0x6c1a48 */ if ((fZ||fS!=fO)) goto L_006c1a48;
L_006c1a15:; BB(0x006c1a15);
    /* 006c1a15: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 006c1a18: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006c1a1a: lea ebp, [eax + eax] */ r_ebp = (u32)(r_eax+r_eax);
    /* 006c1a1d: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 006c1a1f: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 006c1a21: sub ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 006c1a23: lea eax, [ebx + ebp + 0xc] */ r_eax = (u32)(r_ebx+r_ebp+0xcu);
L_006c1a27:; BB(0x006c1a27);
    /* 006c1a27: movzx ebx, byte ptr [eax] */ r_ebx = (u32)R8((u32)(r_eax));
    /* 006c1a2a: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c1a2d: je 0x6c1a4b */ if (fZ) goto L_006c1a4b;
L_006c1a2f:; BB(0x006c1a2f);
    /* 006c1a2f: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_006c1a31:; BB(0x006c1a31);
    /* 006c1a31: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c1a33: je 0x6c1a3e */ if (fZ) goto L_006c1a3e;
L_006c1a35:; BB(0x006c1a35);
    /* 006c1a35: mov ebx, dword ptr [eax - 4] */ r_ebx = R32((u32)(r_eax+0xfffffffcu));
    /* 006c1a38: and ebx, 0xfffffff7 */ {  u32 a = r_ebx; u32 b = 0xfffffff7u; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 006c1a3b: mov dword ptr [eax - 4], ebx */ W32((u32)(r_eax+0xfffffffcu), r_ebx);
L_006c1a3e:; BB(0x006c1a3e);
    /* 006c1a3e: add eax, 0x1c */ {  u32 a = r_eax; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006c1a41: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006c1a44: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006c1a46: jl 0x6c1a27 */ if ((fS!=fO)) goto L_006c1a27;
L_006c1a48:; BB(0x006c1a48);
    /* 006c1a48: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006c1a49: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006c1a4a: ret  */ FN_RET(0x006c1a08); r_esp += 4; return;
L_006c1a4b:; BB(0x006c1a4b);
    /* 006c1a4b: movzx ebx, byte ptr [eax + 1] */ r_ebx = (u32)R8((u32)(r_eax+0x1u));
    /* 006c1a4f: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c1a52: jne 0x6c1a2f */ if (!fZ) goto L_006c1a2f;
L_006c1a54:; BB(0x006c1a54);
    /* 006c1a54: mov ebx, 1 */ r_ebx = 0x1u;
    /* 006c1a59: jmp 0x6c1a31 */ goto L_006c1a31;
}

void f_006c1a5c(void) /* sub_6C1A5C */
{
    FN_ENTER(0x006c1a5c);
    /* 006c1a5c: imul edx, dword ptr [0xa95e48], 0x2ea4 */ { i64 t = (i64)(i32)R32((u32)(0xa95e48u)) * (i64)(i32)0x2ea4u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006c1a66: lea eax, [edx + ecx + 0x4e0] */ r_eax = (u32)(r_edx+r_ecx+0x4e0u);
    /* 006c1a6d: ret  */ FN_RET(0x006c1a5c); r_esp += 4; return;
}

void f_006c1a70(void) /* sub_6C1A70 */
{
    FN_ENTER(0x006c1a70);
    /* 006c1a70: mov edx, dword ptr [0xa95df0] */ r_edx = R32((u32)(0xa95df0u));
    /* 006c1a76: mov eax, dword ptr [edx + 0x110] */ r_eax = R32((u32)(r_edx+0x110u));
    /* 006c1a7c: ret  */ FN_RET(0x006c1a70); r_esp += 4; return;
}

void f_006c1a80(void) /* sub_6C1A80 */
{
    FN_ENTER(0x006c1a80);
    /* 006c1a80: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 006c1a84: mov ecx, dword ptr [0xa95e44] */ r_ecx = R32((u32)(0xa95e44u));
    /* 006c1a8a: imul edx, eax, 0x2ea4 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x2ea4u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006c1a90: mov dword ptr [0xa95e48], eax */ W32((u32)(0xa95e48u), r_eax);
    /* 006c1a95: push 0x4dc */ { u32 v = 0x4dcu; r_esp -= 4; W32(r_esp, v); }
    /* 006c1a9a: lea eax, [edx + ecx + 4] */ r_eax = (u32)(r_edx+r_ecx+0x4u);
    /* 006c1a9e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c1a9f: push dword ptr [0xa95dfc] */ { u32 v = R32((u32)(0xa95dfcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006c1aa5: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x6c1aaau); f_0086b6b8();
    /* 006c1aaa: imul eax, dword ptr [0xa95e48], 0x2ea4 */ { i64 t = (i64)(i32)R32((u32)(0xa95e48u)) * (i64)(i32)0x2ea4u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006c1ab4: mov edx, dword ptr [0xa95e44] */ r_edx = R32((u32)(0xa95e44u));
    /* 006c1aba: push 0x29c8 */ { u32 v = 0x29c8u; r_esp -= 4; W32(r_esp, v); }
    /* 006c1abf: lea ecx, [eax + edx + 0x4e0] */ r_ecx = (u32)(r_eax+r_edx+0x4e0u);
    /* 006c1ac6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006c1ac7: push dword ptr [0xa95df8] */ { u32 v = R32((u32)(0xa95df8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c1acd: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x6c1ad2u); f_0086b6b8();
    /* 006c1ad2: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c1ad5: call 0x6c1adc */ r_esp -= 4; W32(r_esp, 0x6c1adau); f_006c1adc();
    /* 006c1ada: ret  */ FN_RET(0x006c1a80); r_esp += 4; return;
}

void f_006c1adc(void) /* sub_6C1ADC */
{
    FN_ENTER(0x006c1adc);
    /* 006c1adc: imul eax, dword ptr [0xa95e48], 0x2ea4 */ { i64 t = (i64)(i32)R32((u32)(0xa95e48u)) * (i64)(i32)0x2ea4u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006c1ae6: mov edx, dword ptr [0xa95e44] */ r_edx = R32((u32)(0xa95e44u));
    /* 006c1aec: push 0x4dc */ { u32 v = 0x4dcu; r_esp -= 4; W32(r_esp, v); }
    /* 006c1af1: lea ecx, [eax + edx + 4] */ r_ecx = (u32)(r_eax+r_edx+0x4u);
    /* 006c1af5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006c1af6: push dword ptr [0xa95dfc] */ { u32 v = R32((u32)(0xa95dfcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006c1afc: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x6c1b01u); f_0086b6b8();
    /* 006c1b01: imul eax, dword ptr [0xa95e48], 0x2ea4 */ { i64 t = (i64)(i32)R32((u32)(0xa95e48u)) * (i64)(i32)0x2ea4u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006c1b0b: mov edx, dword ptr [0xa95e44] */ r_edx = R32((u32)(0xa95e44u));
    /* 006c1b11: push 0x29c8 */ { u32 v = 0x29c8u; r_esp -= 4; W32(r_esp, v); }
    /* 006c1b16: lea ecx, [eax + edx + 0x4e0] */ r_ecx = (u32)(r_eax+r_edx+0x4e0u);
    /* 006c1b1d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006c1b1e: push dword ptr [0xa95df8] */ { u32 v = R32((u32)(0xa95df8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c1b24: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x6c1b29u); f_0086b6b8();
    /* 006c1b29: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c1b2b: call 0x6bb754 */ r_esp -= 4; W32(r_esp, 0x6c1b30u); f_006bb754();
    /* 006c1b30: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c1b33: mov eax, dword ptr [0xa95db0] */ r_eax = R32((u32)(0xa95db0u));
    /* 006c1b38: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c1b3a: je 0x6c1b43 */ if (fZ) goto L_006c1b43;
L_006c1b3c:; BB(0x006c1b3c);
    /* 006c1b3c: mov eax, dword ptr [0xa95dfc] */ r_eax = R32((u32)(0xa95dfcu));
    /* 006c1b41: jmp 0x6c1b7d */ goto L_006c1b7d;
L_006c1b43:; BB(0x006c1b43);
    /* 006c1b43: mov edx, dword ptr [0xa95df8] */ r_edx = R32((u32)(0xa95df8u));
    /* 006c1b49: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c1b4b: je 0x6c1b53 */ if (fZ) goto L_006c1b53;
L_006c1b4d:; BB(0x006c1b4d);
    /* 006c1b4d: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006c1b4f: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006c1b51: jne 0x6c1b95 */ if (!fZ) goto L_006c1b95;
L_006c1b53:; BB(0x006c1b53);
    /* 006c1b53: mov eax, dword ptr [0xa95dfc] */ r_eax = R32((u32)(0xa95dfcu));
    /* 006c1b58: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 006c1b5b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c1b5d: jne 0x6c1b7d */ if (!fZ) goto L_006c1b7d;
L_006c1b5f:; BB(0x006c1b5f);
    /* 006c1b5f: mov ecx, dword ptr [eax + 0x36c] */ r_ecx = R32((u32)(r_eax+0x36cu));
    /* 006c1b65: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c1b67: jne 0x6c1b7d */ if (!fZ) goto L_006c1b7d;
L_006c1b69:; BB(0x006c1b69);
    /* 006c1b69: mov ecx, dword ptr [edx + 0x21c] */ r_ecx = R32((u32)(r_edx+0x21cu));
    /* 006c1b6f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c1b71: jne 0x6c1b7d */ if (!fZ) goto L_006c1b7d;
L_006c1b73:; BB(0x006c1b73);
    /* 006c1b73: mov edx, dword ptr [edx + 0x220] */ r_edx = R32((u32)(r_edx+0x220u));
    /* 006c1b79: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c1b7b: je 0x6c1b87 */ if (fZ) goto L_006c1b87;
L_006c1b7d:; BB(0x006c1b7d);
    /* 006c1b7d: mov edx, dword ptr [0xa9cd44] */ r_edx = R32((u32)(0xa9cd44u));
    /* 006c1b83: mov byte ptr [eax + 3], dl */ W8((u32)(r_eax+0x3u), (u8)r_edx);
    /* 006c1b86: ret  */ FN_RET(0x006c1adc); r_esp += 4; return;
L_006c1b87:; BB(0x006c1b87);
    /* 006c1b87: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c1b88: call 0x6ab1b4 */ r_esp -= 4; W32(r_esp, 0x6c1b8du); f_006ab1b4();
    /* 006c1b8d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c1b8e: mov eax, dword ptr [0xa95dfc] */ r_eax = R32((u32)(0xa95dfcu));
    /* 006c1b93: jmp 0x6c1b7d */ goto L_006c1b7d;
L_006c1b95:; BB(0x006c1b95);
    /* 006c1b95: call 0x6c7754 */ r_esp -= 4; W32(r_esp, 0x6c1b9au); f_006c7754();
    /* 006c1b9a: mov eax, dword ptr [0xa95dfc] */ r_eax = R32((u32)(0xa95dfcu));
    /* 006c1b9f: jmp 0x6c1b7d */ goto L_006c1b7d;
}

void f_006c1ba4(void) /* sub_6C1BA4 */
{
    FN_ENTER(0x006c1ba4);
    /* 006c1ba4: mov eax, dword ptr [0xa95e44] */ r_eax = R32((u32)(0xa95e44u));
    /* 006c1ba9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c1bab: je 0x6c1bc6 */ if (fZ) goto L_006c1bc6;
L_006c1bad:; BB(0x006c1bad);
    /* 006c1bad: imul edx, dword ptr [esp + 4], 0x2ea4 */ { i64 t = (i64)(i32)R32((u32)(r_esp+0x4u)) * (i64)(i32)0x2ea4u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006c1bb5: mov eax, dword ptr [eax + edx + 0x4e4] */ r_eax = R32((u32)(r_eax+r_edx+0x4e4u));
    /* 006c1bbc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c1bbe: je 0x6c1bc6 */ if (fZ) goto L_006c1bc6;
L_006c1bc0:; BB(0x006c1bc0);
    /* 006c1bc0: mov eax, 1 */ r_eax = 0x1u;
    /* 006c1bc5: ret  */ FN_RET(0x006c1ba4); r_esp += 4; return;
L_006c1bc6:; BB(0x006c1bc6);
    /* 006c1bc6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c1bc8: ret  */ FN_RET(0x006c1ba4); r_esp += 4; return;
}

void f_006c1bcc(void) /* sub_6C1BCC */
{
    FN_ENTER(0x006c1bcc);
    /* 006c1bcc: mov eax, dword ptr [0xa95dfc] */ r_eax = R32((u32)(0xa95dfcu));
    /* 006c1bd1: ret  */ FN_RET(0x006c1bcc); r_esp += 4; return;
}

void f_006c1bd4(void) /* sub_6C1BD4 */
{
    FN_ENTER(0x006c1bd4);
    /* 006c1bd4: mov eax, dword ptr [0xa95df8] */ r_eax = R32((u32)(0xa95df8u));
    /* 006c1bd9: ret  */ FN_RET(0x006c1bd4); r_esp += 4; return;
}

void f_006c1bdc(void) /* sub_6C1BDC */
{
    FN_ENTER(0x006c1bdc);
    /* 006c1bdc: sub esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006c1bdf: mov eax, dword ptr [0xa95e44] */ r_eax = R32((u32)(0xa95e44u));
    /* 006c1be4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c1be6: je 0x6c1c93 */ if (fZ) goto L_006c1c93;
L_006c1bec:; BB(0x006c1bec);
    /* 006c1bec: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 006c1bef: push dword ptr [0xa95e2c] */ { u32 v = R32((u32)(0xa95e2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006c1bf5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c1bf6: call 0x82c21c */ r_esp -= 4; W32(r_esp, 0x6c1bfbu); f_0082c21c();
    /* 006c1bfb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c1bfe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c1c00: je 0x6c1c0b */ if (fZ) goto L_006c1c0b;
L_006c1c02:; BB(0x006c1c02);
    /* 006c1c02: mov eax, 1 */ r_eax = 0x1u;
    /* 006c1c07: add esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006c1c0a: ret  */ FN_RET(0x006c1bdc); r_esp += 4; return;
L_006c1c0b:; BB(0x006c1c0b);
    /* 006c1c0b: push dword ptr [0xa95e44] */ { u32 v = R32((u32)(0xa95e44u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c1c11: call 0x6c1c9c */ r_esp -= 4; W32(r_esp, 0x6c1c16u); f_006c1c9c();
    /* 006c1c16: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c1c17: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c1c19: jne 0x6c1c24 */ if (!fZ) goto L_006c1c24;
L_006c1c1b:; BB(0x006c1c1b);
    /* 006c1c1b: mov eax, 1 */ r_eax = 0x1u;
    /* 006c1c20: add esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006c1c23: ret  */ FN_RET(0x006c1bdc); r_esp += 4; return;
L_006c1c24:; BB(0x006c1c24);
    /* 006c1c24: mov eax, dword ptr [0xa95e44] */ r_eax = R32((u32)(0xa95e44u));
    /* 006c1c29: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c1c2b: je 0x6c1c74 */ if (fZ) goto L_006c1c74;
L_006c1c2d:; BB(0x006c1c2d);
    /* 006c1c2d: mov edx, dword ptr [eax + 0x4e8] */ r_edx = R32((u32)(r_eax+0x4e8u));
    /* 006c1c33: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c1c35: je 0x6c1c3f */ if (fZ) goto L_006c1c3f;
L_006c1c37:; BB(0x006c1c37);
    /* 006c1c37: cmp edx, 0xc87ed5b1 */ {  u32 a = r_edx; u32 b = 0xc87ed5b1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c1c3d: jne 0x6c1c8c */ if (!fZ) goto L_006c1c8c;
L_006c1c3f:; BB(0x006c1c3f);
    /* 006c1c3f: mov edx, dword ptr [eax + 0x338c] */ r_edx = R32((u32)(r_eax+0x338cu));
    /* 006c1c45: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c1c47: je 0x6c1c51 */ if (fZ) goto L_006c1c51;
L_006c1c49:; BB(0x006c1c49);
    /* 006c1c49: cmp edx, 0xc87ed5b1 */ {  u32 a = r_edx; u32 b = 0xc87ed5b1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c1c4f: jne 0x6c1c8c */ if (!fZ) goto L_006c1c8c;
L_006c1c51:; BB(0x006c1c51);
    /* 006c1c51: mov edx, dword ptr [eax + 0x6230] */ r_edx = R32((u32)(r_eax+0x6230u));
    /* 006c1c57: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c1c59: je 0x6c1c63 */ if (fZ) goto L_006c1c63;
L_006c1c5b:; BB(0x006c1c5b);
    /* 006c1c5b: cmp edx, 0xc87ed5b1 */ {  u32 a = r_edx; u32 b = 0xc87ed5b1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c1c61: jne 0x6c1c8c */ if (!fZ) goto L_006c1c8c;
L_006c1c63:; BB(0x006c1c63);
    /* 006c1c63: mov eax, dword ptr [eax + 0x90d4] */ r_eax = R32((u32)(r_eax+0x90d4u));
    /* 006c1c69: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c1c6b: je 0x6c1c74 */ if (fZ) goto L_006c1c74;
L_006c1c6d:; BB(0x006c1c6d);
    /* 006c1c6d: cmp eax, 0xc87ed5b1 */ {  u32 a = r_eax; u32 b = 0xc87ed5b1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c1c72: jne 0x6c1c8c */ if (!fZ) goto L_006c1c8c;
L_006c1c74:; BB(0x006c1c74);
    /* 006c1c74: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_006c1c76:; BB(0x006c1c76);
    /* 006c1c76: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c1c78: je 0x6c1c83 */ if (fZ) goto L_006c1c83;
L_006c1c7a:; BB(0x006c1c7a);
    /* 006c1c7a: mov eax, 5 */ r_eax = 0x5u;
    /* 006c1c7f: add esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006c1c82: ret  */ FN_RET(0x006c1bdc); r_esp += 4; return;
L_006c1c83:; BB(0x006c1c83);
    /* 006c1c83: mov eax, 7 */ r_eax = 0x7u;
    /* 006c1c88: add esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006c1c8b: ret  */ FN_RET(0x006c1bdc); r_esp += 4; return;
L_006c1c8c:; BB(0x006c1c8c);
    /* 006c1c8c: mov eax, 1 */ r_eax = 0x1u;
    /* 006c1c91: jmp 0x6c1c76 */ goto L_006c1c76;
L_006c1c93:; BB(0x006c1c93);
    /* 006c1c93: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c1c95: add esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006c1c98: ret  */ FN_RET(0x006c1bdc); r_esp += 4; return;
}

void f_006c1c9c(void) /* sub_6C1C9C */
{
    FN_ENTER(0x006c1c9c);
    /* 006c1c9c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006c1c9d: mov ebp, esp */ r_ebp = r_esp;
    /* 006c1c9f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006c1ca1: push 0x8ec66c */ { u32 v = 0x8ec66cu; r_esp -= 4; W32(r_esp, v); }
    /* 006c1ca6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006c1cac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c1cad: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006c1cb4: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006c1cb7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006c1cba: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 006c1cbd: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 006c1cc0: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 006c1cc3: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 006c1cca: push 0xbaa4 */ { u32 v = 0xbaa4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c1ccf: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c1cd4u); f_008581c5();
    /* 006c1cd4: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006c1cd7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c1cda: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 006c1cdd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c1cdf: je 0x6c1e29 */ if (fZ) goto L_006c1e29;
L_006c1ce5:; BB(0x006c1ce5);
    /* 006c1ce5: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 006c1cec: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006c1cf3: push 0x6c1940 */ { u32 v = 0x6c1940u; r_esp -= 4; W32(r_esp, v); }
    /* 006c1cf8: push 0x6c17f0 */ { u32 v = 0x6c17f0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c1cfd: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c1cff: lea edx, [eax + 4] */ r_edx = (u32)(r_eax+0x4u);
    /* 006c1d02: push 0x2ea4 */ { u32 v = 0x2ea4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c1d07: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006c1d08: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x6c1d0du); f_00858736();
    /* 006c1d0d: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_006c1d14:; BB(0x006c1d14);
    /* 006c1d14: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006c1d1b: push 0xbaa4 */ { u32 v = 0xbaa4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c1d20: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c1d23: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006c1d26: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c1d27: call 0x86b324 */ r_esp -= 4; W32(r_esp, 0x6c1d2cu); f_0086b324();
    /* 006c1d2c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c1d2f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006c1d32: mov esi, dword ptr [eax] */ r_esi = R32((u32)(r_eax));
    /* 006c1d34: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
    /* 006c1d3a: mov ebx, 0xffffffff */ r_ebx = 0xffffffffu;
    /* 006c1d3f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_006c1d41:; BB(0x006c1d41);
    /* 006c1d41: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006c1d44: movzx edx, byte ptr [ecx + eax] */ r_edx = (u32)R8((u32)(r_ecx+r_eax));
    /* 006c1d48: xor ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 006c1d4a: test bl, 1 */ {  u32 a = (u8)r_ebx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006c1d4d: je 0x6c1d59 */ if (fZ) goto L_006c1d59;
L_006c1d4f:; BB(0x006c1d4f);
    /* 006c1d4f: shr ebx, 1 */ { u32 c = (1u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 006c1d51: xor ebx, 0xedb88320 */ {  u32 a = r_ebx; u32 b = 0xedb88320u; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 006c1d57: jmp 0x6c1d5b */ goto L_006c1d5b;
L_006c1d59:; BB(0x006c1d59);
    /* 006c1d59: shr ebx, 1 */ { u32 c = (1u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
L_006c1d5b:; BB(0x006c1d5b);
    /* 006c1d5b: test bl, 1 */ {  u32 a = (u8)r_ebx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006c1d5e: je 0x6c1d6a */ if (fZ) goto L_006c1d6a;
L_006c1d60:; BB(0x006c1d60);
    /* 006c1d60: shr ebx, 1 */ { u32 c = (1u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 006c1d62: xor ebx, 0xedb88320 */ {  u32 a = r_ebx; u32 b = 0xedb88320u; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 006c1d68: jmp 0x6c1d6c */ goto L_006c1d6c;
L_006c1d6a:; BB(0x006c1d6a);
    /* 006c1d6a: shr ebx, 1 */ { u32 c = (1u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
L_006c1d6c:; BB(0x006c1d6c);
    /* 006c1d6c: test bl, 1 */ {  u32 a = (u8)r_ebx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006c1d6f: je 0x6c1d7b */ if (fZ) goto L_006c1d7b;
L_006c1d71:; BB(0x006c1d71);
    /* 006c1d71: shr ebx, 1 */ { u32 c = (1u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 006c1d73: xor ebx, 0xedb88320 */ {  u32 a = r_ebx; u32 b = 0xedb88320u; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 006c1d79: jmp 0x6c1d7d */ goto L_006c1d7d;
L_006c1d7b:; BB(0x006c1d7b);
    /* 006c1d7b: shr ebx, 1 */ { u32 c = (1u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
L_006c1d7d:; BB(0x006c1d7d);
    /* 006c1d7d: test bl, 1 */ {  u32 a = (u8)r_ebx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006c1d80: je 0x6c1d8c */ if (fZ) goto L_006c1d8c;
L_006c1d82:; BB(0x006c1d82);
    /* 006c1d82: shr ebx, 1 */ { u32 c = (1u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 006c1d84: xor ebx, 0xedb88320 */ {  u32 a = r_ebx; u32 b = 0xedb88320u; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 006c1d8a: jmp 0x6c1d8e */ goto L_006c1d8e;
L_006c1d8c:; BB(0x006c1d8c);
    /* 006c1d8c: shr ebx, 1 */ { u32 c = (1u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
L_006c1d8e:; BB(0x006c1d8e);
    /* 006c1d8e: test bl, 1 */ {  u32 a = (u8)r_ebx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006c1d91: je 0x6c1d9d */ if (fZ) goto L_006c1d9d;
L_006c1d93:; BB(0x006c1d93);
    /* 006c1d93: shr ebx, 1 */ { u32 c = (1u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 006c1d95: xor ebx, 0xedb88320 */ {  u32 a = r_ebx; u32 b = 0xedb88320u; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 006c1d9b: jmp 0x6c1d9f */ goto L_006c1d9f;
L_006c1d9d:; BB(0x006c1d9d);
    /* 006c1d9d: shr ebx, 1 */ { u32 c = (1u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
L_006c1d9f:; BB(0x006c1d9f);
    /* 006c1d9f: test bl, 1 */ {  u32 a = (u8)r_ebx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006c1da2: je 0x6c1dae */ if (fZ) goto L_006c1dae;
L_006c1da4:; BB(0x006c1da4);
    /* 006c1da4: shr ebx, 1 */ { u32 c = (1u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 006c1da6: xor ebx, 0xedb88320 */ {  u32 a = r_ebx; u32 b = 0xedb88320u; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 006c1dac: jmp 0x6c1db0 */ goto L_006c1db0;
L_006c1dae:; BB(0x006c1dae);
    /* 006c1dae: shr ebx, 1 */ { u32 c = (1u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
L_006c1db0:; BB(0x006c1db0);
    /* 006c1db0: test bl, 1 */ {  u32 a = (u8)r_ebx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006c1db3: je 0x6c1dbf */ if (fZ) goto L_006c1dbf;
L_006c1db5:; BB(0x006c1db5);
    /* 006c1db5: shr ebx, 1 */ { u32 c = (1u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 006c1db7: xor ebx, 0xedb88320 */ {  u32 a = r_ebx; u32 b = 0xedb88320u; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 006c1dbd: jmp 0x6c1dc1 */ goto L_006c1dc1;
L_006c1dbf:; BB(0x006c1dbf);
    /* 006c1dbf: shr ebx, 1 */ { u32 c = (1u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
L_006c1dc1:; BB(0x006c1dc1);
    /* 006c1dc1: test bl, 1 */ {  u32 a = (u8)r_ebx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006c1dc4: je 0x6c1dd0 */ if (fZ) goto L_006c1dd0;
L_006c1dc6:; BB(0x006c1dc6);
    /* 006c1dc6: shr ebx, 1 */ { u32 c = (1u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 006c1dc8: xor ebx, 0xedb88320 */ {  u32 a = r_ebx; u32 b = 0xedb88320u; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 006c1dce: jmp 0x6c1dd2 */ goto L_006c1dd2;
L_006c1dd0:; BB(0x006c1dd0);
    /* 006c1dd0: shr ebx, 1 */ { u32 c = (1u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
L_006c1dd2:; BB(0x006c1dd2);
    /* 006c1dd2: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006c1dd5: cmp ecx, 0xbaa4 */ {  u32 a = r_ecx; u32 b = 0xbaa4u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 006c1ddb: jb 0x6c1d41 */ if (fC) goto L_006c1d41;
L_006c1de1:; BB(0x006c1de1);
    /* 006c1de1: not ebx */ r_ebx = ~r_ebx;
    /* 006c1de3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c1de5: je 0x6c1df0 */ if (fZ) goto L_006c1df0;
L_006c1de7:; BB(0x006c1de7);
    /* 006c1de7: mov ecx, eax */ r_ecx = r_eax;
    /* 006c1de9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006c1deb: call 0x6c1780 */ r_esp -= 4; W32(r_esp, 0x6c1df0u); f_006c1780();
L_006c1df0:; BB(0x006c1df0);
    /* 006c1df0: cmp esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006c1df2: jne 0x6c1e10 */ if (!fZ) goto L_006c1e10;
L_006c1df4:; BB(0x006c1df4);
    /* 006c1df4: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006c1df7: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 006c1dfa: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006c1dfd: mov eax, 1 */ r_eax = 0x1u;
    /* 006c1e02: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006c1e05: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006c1e0c: mov esp, ebp */ r_esp = r_ebp;
    /* 006c1e0e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006c1e0f: ret  */ FN_RET(0x006c1c9c); r_esp += 4; return;
L_006c1e10:; BB(0x006c1e10);
    /* 006c1e10: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006c1e13: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 006c1e16: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006c1e19: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c1e1b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006c1e1e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006c1e25: mov esp, ebp */ r_esp = r_ebp;
    /* 006c1e27: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006c1e28: ret  */ FN_RET(0x006c1c9c); r_esp += 4; return;
L_006c1e29:; BB(0x006c1e29);
    /* 006c1e29: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c1e2b: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006c1e2e: jmp 0x6c1d14 */ goto L_006c1d14;
}

void f_006c1e34(void) /* sub_6C1E34 */
{
    FN_ENTER(0x006c1e34);
    /* 006c1e34: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006c1e35: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006c1e36: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 006c1e3b: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 006c1e3f: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 006c1e43: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006c1e45: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c1e47: jbe 0x6c1ed6 */ if ((fC||fZ)) goto L_006c1ed6;
L_006c1e4d:; BB(0x006c1e4d);
    /* 006c1e4d: movzx esi, byte ptr [edx + ebx] */ r_esi = (u32)R8((u32)(r_edx+r_ebx));
    /* 006c1e51: xor eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c1e53: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006c1e56: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006c1e58: je 0x6c1e63 */ if (fZ) goto L_006c1e63;
L_006c1e5a:; BB(0x006c1e5a);
    /* 006c1e5a: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 006c1e5c: xor eax, 0xedb88320 */ {  u32 a = r_eax; u32 b = 0xedb88320u; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c1e61: jmp 0x6c1e65 */ goto L_006c1e65;
L_006c1e63:; BB(0x006c1e63);
    /* 006c1e63: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
L_006c1e65:; BB(0x006c1e65);
    /* 006c1e65: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006c1e67: je 0x6c1e72 */ if (fZ) goto L_006c1e72;
L_006c1e69:; BB(0x006c1e69);
    /* 006c1e69: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 006c1e6b: xor eax, 0xedb88320 */ {  u32 a = r_eax; u32 b = 0xedb88320u; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c1e70: jmp 0x6c1e74 */ goto L_006c1e74;
L_006c1e72:; BB(0x006c1e72);
    /* 006c1e72: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
L_006c1e74:; BB(0x006c1e74);
    /* 006c1e74: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006c1e76: je 0x6c1e81 */ if (fZ) goto L_006c1e81;
L_006c1e78:; BB(0x006c1e78);
    /* 006c1e78: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 006c1e7a: xor eax, 0xedb88320 */ {  u32 a = r_eax; u32 b = 0xedb88320u; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c1e7f: jmp 0x6c1e83 */ goto L_006c1e83;
L_006c1e81:; BB(0x006c1e81);
    /* 006c1e81: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
L_006c1e83:; BB(0x006c1e83);
    /* 006c1e83: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006c1e85: je 0x6c1e90 */ if (fZ) goto L_006c1e90;
L_006c1e87:; BB(0x006c1e87);
    /* 006c1e87: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 006c1e89: xor eax, 0xedb88320 */ {  u32 a = r_eax; u32 b = 0xedb88320u; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c1e8e: jmp 0x6c1e92 */ goto L_006c1e92;
L_006c1e90:; BB(0x006c1e90);
    /* 006c1e90: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
L_006c1e92:; BB(0x006c1e92);
    /* 006c1e92: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006c1e94: je 0x6c1e9f */ if (fZ) goto L_006c1e9f;
L_006c1e96:; BB(0x006c1e96);
    /* 006c1e96: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 006c1e98: xor eax, 0xedb88320 */ {  u32 a = r_eax; u32 b = 0xedb88320u; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c1e9d: jmp 0x6c1ea1 */ goto L_006c1ea1;
L_006c1e9f:; BB(0x006c1e9f);
    /* 006c1e9f: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
L_006c1ea1:; BB(0x006c1ea1);
    /* 006c1ea1: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006c1ea3: je 0x6c1eae */ if (fZ) goto L_006c1eae;
L_006c1ea5:; BB(0x006c1ea5);
    /* 006c1ea5: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 006c1ea7: xor eax, 0xedb88320 */ {  u32 a = r_eax; u32 b = 0xedb88320u; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c1eac: jmp 0x6c1eb0 */ goto L_006c1eb0;
L_006c1eae:; BB(0x006c1eae);
    /* 006c1eae: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
L_006c1eb0:; BB(0x006c1eb0);
    /* 006c1eb0: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006c1eb2: je 0x6c1ebd */ if (fZ) goto L_006c1ebd;
L_006c1eb4:; BB(0x006c1eb4);
    /* 006c1eb4: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 006c1eb6: xor eax, 0xedb88320 */ {  u32 a = r_eax; u32 b = 0xedb88320u; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c1ebb: jmp 0x6c1ebf */ goto L_006c1ebf;
L_006c1ebd:; BB(0x006c1ebd);
    /* 006c1ebd: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
L_006c1ebf:; BB(0x006c1ebf);
    /* 006c1ebf: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006c1ec1: je 0x6c1ecc */ if (fZ) goto L_006c1ecc;
L_006c1ec3:; BB(0x006c1ec3);
    /* 006c1ec3: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 006c1ec5: xor eax, 0xedb88320 */ {  u32 a = r_eax; u32 b = 0xedb88320u; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c1eca: jmp 0x6c1ece */ goto L_006c1ece;
L_006c1ecc:; BB(0x006c1ecc);
    /* 006c1ecc: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
L_006c1ece:; BB(0x006c1ece);
    /* 006c1ece: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006c1ed0: jb 0x6c1e4d */ if (fC) goto L_006c1e4d;
L_006c1ed6:; BB(0x006c1ed6);
    /* 006c1ed6: not eax */ r_eax = ~r_eax;
    /* 006c1ed8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006c1ed9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006c1eda: ret  */ FN_RET(0x006c1e34); r_esp += 4; return;
}

void f_006c1edc(void) /* sub_6C1EDC */
{
    FN_ENTER(0x006c1edc);
    /* 006c1edc: mov eax, dword ptr [0xa95df8] */ r_eax = R32((u32)(0xa95df8u));
    /* 006c1ee1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c1ee3: je 0x6c1ee9 */ if (fZ) goto L_006c1ee9;
L_006c1ee5:; BB(0x006c1ee5);
    /* 006c1ee5: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 006c1ee8: ret  */ FN_RET(0x006c1edc); r_esp += 4; return;
L_006c1ee9:; BB(0x006c1ee9);
    /* 006c1ee9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c1eeb: ret  */ FN_RET(0x006c1edc); r_esp += 4; return;
}

void f_006c1eec(void) /* sub_6C1EEC */
{
    FN_ENTER(0x006c1eec);
    /* 006c1eec: mov eax, dword ptr [0xa95df8] */ r_eax = R32((u32)(0xa95df8u));
    /* 006c1ef1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c1ef3: je 0x6c1f01 */ if (fZ) goto L_006c1f01;
L_006c1ef5:; BB(0x006c1ef5);
    /* 006c1ef5: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 006c1ef8: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006c1efb: mov dword ptr [eax + 0x14], edx */ W32((u32)(r_eax+0x14u), r_edx);
    /* 006c1efe: mov eax, edx */ r_eax = r_edx;
    /* 006c1f00: ret  */ FN_RET(0x006c1eec); r_esp += 4; return;
L_006c1f01:; BB(0x006c1f01);
    /* 006c1f01: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c1f03: ret  */ FN_RET(0x006c1eec); r_esp += 4; return;
}

void f_006c1f04(void) /* sub_6C1F04 */
{
    FN_ENTER(0x006c1f04);
    /* 006c1f04: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006c1f05: mov ebp, esp */ r_ebp = r_esp;
    /* 006c1f07: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006c1f09: push 0x8ec69a */ { u32 v = 0x8ec69au; r_esp -= 4; W32(r_esp, v); }
    /* 006c1f0e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006c1f14: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c1f15: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006c1f1c: sub esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006c1f22: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006c1f25: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 006c1f28: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 006c1f2b: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 006c1f2e: mov eax, dword ptr [0xaab1f4] */ r_eax = R32((u32)(0xaab1f4u));
    /* 006c1f33: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c1f36: je 0x6c25e0 */ if (fZ) goto L_006c25e0;
L_006c1f3c:; BB(0x006c1f3c);
    /* 006c1f3c: mov eax, dword ptr [0xa95dfc] */ r_eax = R32((u32)(0xa95dfcu));
    /* 006c1f41: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c1f43: je 0x6c230e */ if (fZ) goto L_006c230e;
L_006c1f49:; BB(0x006c1f49);
    /* 006c1f49: mov eax, dword ptr [0xa95df8] */ r_eax = R32((u32)(0xa95df8u));
    /* 006c1f4e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c1f50: je 0x6c230e */ if (fZ) goto L_006c230e;
L_006c1f56:; BB(0x006c1f56);
    /* 006c1f56: mov eax, dword ptr [0xa95e44] */ r_eax = R32((u32)(0xa95e44u));
    /* 006c1f5b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c1f5d: je 0x6c230e */ if (fZ) goto L_006c230e;
L_006c1f63:; BB(0x006c1f63);
    /* 006c1f63: call 0x6ffa24 */ r_esp -= 4; W32(r_esp, 0x6c1f68u); f_006ffa24();
    /* 006c1f68: call 0x415cec */ r_esp -= 4; W32(r_esp, 0x6c1f6du); f_00415cec();
    /* 006c1f6d: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 006c1f70: mov dword ptr [0xa95ddc], eax */ W32((u32)(0xa95ddcu), r_eax);
    /* 006c1f75: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c1f76: call 0x82c204 */ r_esp -= 4; W32(r_esp, 0x6c1f7bu); f_0082c204();
    /* 006c1f7b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c1f7c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c1f7f: je 0x6c1f9f */ if (fZ) goto L_006c1f9f;
L_006c1f81:; BB(0x006c1f81);
    /* 006c1f81: mov eax, dword ptr [0xa95db0] */ r_eax = R32((u32)(0xa95db0u));
    /* 006c1f86: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c1f89: je 0x6c2034 */ if (fZ) goto L_006c2034;
L_006c1f8f:; BB(0x006c1f8f);
    /* 006c1f8f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c1f91: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006c1f94: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006c1f9b: mov esp, ebp */ r_esp = r_ebp;
    /* 006c1f9d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006c1f9e: ret  */ FN_RET(0x006c1f04); r_esp += 4; return;
L_006c1f9f:; BB(0x006c1f9f);
    /* 006c1f9f: push dword ptr [0xa95ddc] */ { u32 v = R32((u32)(0xa95ddcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006c1fa5: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x6c1faau); f_006dc358();
    /* 006c1faa: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c1fab: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c1fad: je 0x6c2045 */ if (fZ) goto L_006c2045;
L_006c1fb3:; BB(0x006c1fb3);
    /* 006c1fb3: push dword ptr [0xa95ddc] */ { u32 v = R32((u32)(0xa95ddcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006c1fb9: call 0x82c204 */ r_esp -= 4; W32(r_esp, 0x6c1fbeu); f_0082c204();
    /* 006c1fbe: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c1fbf: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c1fc2: je 0x6c1fe7 */ if (fZ) goto L_006c1fe7;
L_006c1fc4:; BB(0x006c1fc4);
    /* 006c1fc4: mov eax, dword ptr [0xa95db0] */ r_eax = R32((u32)(0xa95db0u));
    /* 006c1fc9: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c1fcc: je 0x6c203e */ if (fZ) goto L_006c203e;
L_006c1fce:; BB(0x006c1fce);
    /* 006c1fce: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 006c1fd1: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006c1fd4: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006c1fd7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c1fd9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006c1fdc: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006c1fe3: mov esp, ebp */ r_esp = r_ebp;
    /* 006c1fe5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006c1fe6: ret  */ FN_RET(0x006c1f04); r_esp += 4; return;
L_006c1fe7:; BB(0x006c1fe7);
    /* 006c1fe7: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 006c1fec: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c1fee: je 0x6c201d */ if (fZ) goto L_006c201d;
L_006c1ff0:; BB(0x006c1ff0);
    /* 006c1ff0: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 006c1ff5: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x6c1ffau); f_0061cdb0();
    /* 006c1ffa: call 0x7becd4 */ r_esp -= 4; W32(r_esp, 0x6c1fffu); f_007becd4();
    /* 006c1fff: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 006c2004: call 0x81888c */ r_esp -= 4; W32(r_esp, 0x6c2009u); f_0081888c();
    /* 006c2009: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 006c200e: call 0x817604 */ r_esp -= 4; W32(r_esp, 0x6c2013u); f_00817604();
    /* 006c2013: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 006c2018: call 0x818f80 */ r_esp -= 4; W32(r_esp, 0x6c201du); f_00818f80();
L_006c201d:; BB(0x006c201d);
    /* 006c201d: call 0x80030c */ r_esp -= 4; W32(r_esp, 0x6c2022u); f_0080030c();
    /* 006c2022: push dword ptr [0xa95ddc] */ { u32 v = R32((u32)(0xa95ddcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006c2028: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x6c202du); f_006dc358();
    /* 006c202d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c202e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c2030: jne 0x6c1fb3 */ if (!fZ) goto L_006c1fb3;
L_006c2032:; BB(0x006c2032);
    /* 006c2032: jmp 0x6c2045 */ goto L_006c2045;
L_006c2034:; BB(0x006c2034);
    /* 006c2034: call 0x7a0118 */ r_esp -= 4; W32(r_esp, 0x6c2039u); f_007a0118();
    /* 006c2039: jmp 0x6c1f8f */ goto L_006c1f8f;
L_006c203e:; BB(0x006c203e);
    /* 006c203e: call 0x7a0118 */ r_esp -= 4; W32(r_esp, 0x6c2043u); f_007a0118();
    /* 006c2043: jmp 0x6c1fce */ goto L_006c1fce;
L_006c2045:; BB(0x006c2045);
    /* 006c2045: push 0x9ceac8 */ { u32 v = 0x9ceac8u; r_esp -= 4; W32(r_esp, v); }
    /* 006c204a: push dword ptr [0xa95ddc] */ { u32 v = R32((u32)(0xa95ddcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006c2050: call 0x82c198 */ r_esp -= 4; W32(r_esp, 0x6c2055u); f_0082c198();
    /* 006c2055: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c2058: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c205a: je 0x6c2083 */ if (fZ) goto L_006c2083;
L_006c205c:; BB(0x006c205c);
    /* 006c205c: mov eax, dword ptr [0xa95db0] */ r_eax = R32((u32)(0xa95db0u));
    /* 006c2061: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c2064: je 0x6c25d6 */ if (fZ) goto L_006c25d6;
L_006c206a:; BB(0x006c206a);
    /* 006c206a: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 006c206d: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006c2070: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006c2073: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c2075: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006c2078: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006c207f: mov esp, ebp */ r_esp = r_ebp;
    /* 006c2081: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006c2082: ret  */ FN_RET(0x006c1f04); r_esp += 4; return;
L_006c2083:; BB(0x006c2083);
    /* 006c2083: mov ebx, dword ptr [0xa95dd4] */ r_ebx = R32((u32)(0xa95dd4u));
    /* 006c2089: shl ebx, 0xe */ { u32 c = (14u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 006c208c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006c208d: call 0x82e940 */ r_esp -= 4; W32(r_esp, 0x6c2092u); f_0082e940();
    /* 006c2092: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006c2095: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006c2096: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c2098: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c2099: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x6c209eu); f_0086b688();
    /* 006c209e: push dword ptr [0xa95dd4] */ { u32 v = R32((u32)(0xa95dd4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c20a4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006c20a7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c20a8: push 0x9ceac8 */ { u32 v = 0x9ceac8u; r_esp -= 4; W32(r_esp, v); }
    /* 006c20ad: push dword ptr [0xa95ddc] */ { u32 v = R32((u32)(0xa95ddcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006c20b3: call 0x82c260 */ r_esp -= 4; W32(r_esp, 0x6c20b8u); f_0082c260();
    /* 006c20b8: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c20bb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c20bd: je 0x6c2169 */ if (fZ) goto L_006c2169;
L_006c20c3:; BB(0x006c20c3);
    /* 006c20c3: push dword ptr [0xa95ddc] */ { u32 v = R32((u32)(0xa95ddcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006c20c9: call 0x82c204 */ r_esp -= 4; W32(r_esp, 0x6c20ceu); f_0082c204();
    /* 006c20ce: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c20cf: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c20d2: je 0x6c2109 */ if (fZ) goto L_006c2109;
L_006c20d4:; BB(0x006c20d4);
    /* 006c20d4: mov eax, dword ptr [0xa95db0] */ r_eax = R32((u32)(0xa95db0u));
    /* 006c20d9: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c20dc: je 0x6c25cc */ if (fZ) goto L_006c25cc;
L_006c20e2:; BB(0x006c20e2);
    /* 006c20e2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006c20e5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c20e7: je 0x6c20f0 */ if (fZ) goto L_006c20f0;
L_006c20e9:; BB(0x006c20e9);
    /* 006c20e9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c20ea: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x6c20efu); f_0082e960();
    /* 006c20ef: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_006c20f0:; BB(0x006c20f0);
    /* 006c20f0: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 006c20f3: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006c20f6: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006c20f9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c20fb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006c20fe: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006c2105: mov esp, ebp */ r_esp = r_ebp;
    /* 006c2107: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006c2108: ret  */ FN_RET(0x006c1f04); r_esp += 4; return;
L_006c2109:; BB(0x006c2109);
    /* 006c2109: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 006c210e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c2110: je 0x6c213f */ if (fZ) goto L_006c213f;
L_006c2112:; BB(0x006c2112);
    /* 006c2112: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 006c2117: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x6c211cu); f_0061cdb0();
    /* 006c211c: call 0x7becd4 */ r_esp -= 4; W32(r_esp, 0x6c2121u); f_007becd4();
    /* 006c2121: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 006c2126: call 0x81888c */ r_esp -= 4; W32(r_esp, 0x6c212bu); f_0081888c();
    /* 006c212b: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 006c2130: call 0x817604 */ r_esp -= 4; W32(r_esp, 0x6c2135u); f_00817604();
    /* 006c2135: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 006c213a: call 0x818f80 */ r_esp -= 4; W32(r_esp, 0x6c213fu); f_00818f80();
L_006c213f:; BB(0x006c213f);
    /* 006c213f: call 0x80030c */ r_esp -= 4; W32(r_esp, 0x6c2144u); f_0080030c();
    /* 006c2144: push dword ptr [0xa95dd4] */ { u32 v = R32((u32)(0xa95dd4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c214a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006c214d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c214e: push 0x9ceac8 */ { u32 v = 0x9ceac8u; r_esp -= 4; W32(r_esp, v); }
    /* 006c2153: push dword ptr [0xa95ddc] */ { u32 v = R32((u32)(0xa95ddcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006c2159: call 0x82c260 */ r_esp -= 4; W32(r_esp, 0x6c215eu); f_0082c260();
    /* 006c215e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c2161: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c2163: jne 0x6c20c3 */ if (!fZ) goto L_006c20c3;
L_006c2169:; BB(0x006c2169);
    /* 006c2169: push dword ptr [0xa95ddc] */ { u32 v = R32((u32)(0xa95ddcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006c216f: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x6c2174u); f_006dc358();
    /* 006c2174: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c2175: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c2177: je 0x6c2212 */ if (fZ) goto L_006c2212;
L_006c217d:; BB(0x006c217d);
    /* 006c217d: push dword ptr [0xa95ddc] */ { u32 v = R32((u32)(0xa95ddcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006c2183: call 0x82c204 */ r_esp -= 4; W32(r_esp, 0x6c2188u); f_0082c204();
    /* 006c2188: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c2189: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c218c: je 0x6c21c3 */ if (fZ) goto L_006c21c3;
L_006c218e:; BB(0x006c218e);
    /* 006c218e: mov eax, dword ptr [0xa95db0] */ r_eax = R32((u32)(0xa95db0u));
    /* 006c2193: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c2196: je 0x6c25c2 */ if (fZ) goto L_006c25c2;
L_006c219c:; BB(0x006c219c);
    /* 006c219c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006c219f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c21a1: je 0x6c21aa */ if (fZ) goto L_006c21aa;
L_006c21a3:; BB(0x006c21a3);
    /* 006c21a3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c21a4: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x6c21a9u); f_0082e960();
    /* 006c21a9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_006c21aa:; BB(0x006c21aa);
    /* 006c21aa: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 006c21ad: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006c21b0: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006c21b3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c21b5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006c21b8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006c21bf: mov esp, ebp */ r_esp = r_ebp;
    /* 006c21c1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006c21c2: ret  */ FN_RET(0x006c1f04); r_esp += 4; return;
L_006c21c3:; BB(0x006c21c3);
    /* 006c21c3: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 006c21c8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c21ca: je 0x6c21f9 */ if (fZ) goto L_006c21f9;
L_006c21cc:; BB(0x006c21cc);
    /* 006c21cc: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 006c21d1: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x6c21d6u); f_0061cdb0();
    /* 006c21d6: call 0x7becd4 */ r_esp -= 4; W32(r_esp, 0x6c21dbu); f_007becd4();
    /* 006c21db: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 006c21e0: call 0x81888c */ r_esp -= 4; W32(r_esp, 0x6c21e5u); f_0081888c();
    /* 006c21e5: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 006c21ea: call 0x817604 */ r_esp -= 4; W32(r_esp, 0x6c21efu); f_00817604();
    /* 006c21ef: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 006c21f4: call 0x818f80 */ r_esp -= 4; W32(r_esp, 0x6c21f9u); f_00818f80();
L_006c21f9:; BB(0x006c21f9);
    /* 006c21f9: call 0x80030c */ r_esp -= 4; W32(r_esp, 0x6c21feu); f_0080030c();
    /* 006c21fe: push dword ptr [0xa95ddc] */ { u32 v = R32((u32)(0xa95ddcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006c2204: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x6c2209u); f_006dc358();
    /* 006c2209: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c220a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c220c: jne 0x6c217d */ if (!fZ) goto L_006c217d;
L_006c2212:; BB(0x006c2212);
    /* 006c2212: mov eax, dword ptr [0xa95df0] */ r_eax = R32((u32)(0xa95df0u));
    /* 006c2217: mov edx, dword ptr [eax + 0x110] */ r_edx = R32((u32)(r_eax+0x110u));
    /* 006c221d: mov dword ptr [ebp - 0x8c], 0 */ W32((u32)(r_ebp+0xffffff74u), 0x0u);
    /* 006c2227: mov dword ptr [0xa95dc4], edx */ W32((u32)(0xa95dc4u), r_edx);
    /* 006c222d: push 0xbaa4 */ { u32 v = 0xbaa4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c2232: mov dword ptr [0xa95dc0], edx */ W32((u32)(0xa95dc0u), r_edx);
    /* 006c2238: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c223du); f_008581c5();
    /* 006c223d: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006c2240: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c2243: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 006c2249: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c224b: je 0x6c25b8 */ if (fZ) goto L_006c25b8;
L_006c2251:; BB(0x006c2251);
    /* 006c2251: mov dword ptr [ebp - 0x8c], 1 */ W32((u32)(r_ebp+0xffffff74u), 0x1u);
    /* 006c225b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006c2262: push 0x6c1940 */ { u32 v = 0x6c1940u; r_esp -= 4; W32(r_esp, v); }
    /* 006c2267: push 0x6c17f0 */ { u32 v = 0x6c17f0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c226c: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c226e: lea edx, [eax + 4] */ r_edx = (u32)(r_eax+0x4u);
    /* 006c2271: push 0x2ea4 */ { u32 v = 0x2ea4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c2276: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006c2277: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x6c227cu); f_00858736();
    /* 006c227c: mov dword ptr [ebp - 0x8c], 0 */ W32((u32)(r_ebp+0xffffff74u), 0x0u);
L_006c2286:; BB(0x006c2286);
    /* 006c2286: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006c228d: push 0xbaa4 */ { u32 v = 0xbaa4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c2292: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006c2295: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c2297: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c2298: call 0x86b5cc */ r_esp -= 4; W32(r_esp, 0x6c229du); f_0086b5cc();
    /* 006c229d: push 0xbaa4 */ { u32 v = 0xbaa4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c22a2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006c22a5: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006c22a8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c22a9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006c22aa: call 0x86b324 */ r_esp -= 4; W32(r_esp, 0x6c22afu); f_0086b324();
    /* 006c22af: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c22b2: imul ebx, dword ptr [0xa95e48], 0x2ea4 */ { i64 t = (i64)(i32)R32((u32)(0xa95e48u)) * (i64)(i32)0x2ea4u; r_ebx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006c22bc: add esp, -0x10 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c22bf: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006c22c2: mov esi, dword ptr [0xa95e44] */ r_esi = R32((u32)(0xa95e44u));
    /* 006c22c8: mov edx, dword ptr [0xa95df8] */ r_edx = R32((u32)(0xa95df8u));
    /* 006c22ce: mov dword ptr [esp + 0xc], esi */ W32((u32)(r_esp+0xcu), r_esi);
    /* 006c22d2: lea eax, [ecx + ebx + 0x4e0] */ r_eax = (u32)(r_ecx+r_ebx+0x4e0u);
    /* 006c22d9: call 0x6c2614 */ r_esp -= 4; W32(r_esp, 0x6c22deu); f_006c2614();
    /* 006c22de: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c22e1: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c22e4: je 0x6c232e */ if (fZ) goto L_006c232e;
L_006c22e6:; BB(0x006c22e6);
    /* 006c22e6: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006c22e9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c22eb: je 0x6c22f4 */ if (fZ) goto L_006c22f4;
L_006c22ed:; BB(0x006c22ed);
    /* 006c22ed: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c22ee: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x6c22f3u); f_0082e960();
    /* 006c22f3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_006c22f4:; BB(0x006c22f4);
    /* 006c22f4: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006c22f7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c22f9: je 0x6c2304 */ if (fZ) goto L_006c2304;
L_006c22fb:; BB(0x006c22fb);
    /* 006c22fb: mov ecx, eax */ r_ecx = r_eax;
    /* 006c22fd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006c22ff: call 0x6c1780 */ r_esp -= 4; W32(r_esp, 0x6c2304u); f_006c1780();
L_006c2304:; BB(0x006c2304);
    /* 006c2304: mov eax, dword ptr [0xa95db0] */ r_eax = R32((u32)(0xa95db0u));
    /* 006c2309: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c230c: je 0x6c2327 */ if (fZ) goto L_006c2327;
L_006c230e:; BB(0x006c230e);
    /* 006c230e: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 006c2311: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006c2314: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006c2317: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c2319: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006c231c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006c2323: mov esp, ebp */ r_esp = r_ebp;
    /* 006c2325: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006c2326: ret  */ FN_RET(0x006c1f04); r_esp += 4; return;
L_006c2327:; BB(0x006c2327);
    /* 006c2327: call 0x7a0118 */ r_esp -= 4; W32(r_esp, 0x6c232cu); f_007a0118();
    /* 006c232c: jmp 0x6c230e */ goto L_006c230e;
L_006c232e:; BB(0x006c232e);
    /* 006c232e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006c2331: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c2333: je 0x6c233c */ if (fZ) goto L_006c233c;
L_006c2335:; BB(0x006c2335);
    /* 006c2335: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c2336: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x6c233bu); f_0082e960();
    /* 006c233b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_006c233c:; BB(0x006c233c);
    /* 006c233c: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006c233f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c2341: je 0x6c234c */ if (fZ) goto L_006c234c;
L_006c2343:; BB(0x006c2343);
    /* 006c2343: mov ecx, eax */ r_ecx = r_eax;
    /* 006c2345: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006c2347: call 0x6c1780 */ r_esp -= 4; W32(r_esp, 0x6c234cu); f_006c1780();
L_006c234c:; BB(0x006c234c);
    /* 006c234c: mov eax, dword ptr [0xa95de0] */ r_eax = R32((u32)(0xa95de0u));
    /* 006c2351: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c2353: jne 0x6c252c */ if (!fZ) goto L_006c252c;
L_006c2359:; BB(0x006c2359);
    /* 006c2359: push dword ptr [0xa95ddc] */ { u32 v = R32((u32)(0xa95ddcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006c235f: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x6c2364u); f_006dc358();
    /* 006c2364: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c2365: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c2367: jne 0x6c252c */ if (!fZ) goto L_006c252c;
L_006c236d:; BB(0x006c236d);
    /* 006c236d: call 0x6aa450 */ r_esp -= 4; W32(r_esp, 0x6c2372u); f_006aa450();
    /* 006c2372: call 0x7083d4 */ r_esp -= 4; W32(r_esp, 0x6c2377u); f_007083d4();
    /* 006c2377: call 0x6c267c */ r_esp -= 4; W32(r_esp, 0x6c237cu); f_006c267c();
    /* 006c237c: mov eax, dword ptr [0xa95df8] */ r_eax = R32((u32)(0xa95df8u));
    /* 006c2381: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c2383: je 0x6c238d */ if (fZ) goto L_006c238d;
L_006c2385:; BB(0x006c2385);
    /* 006c2385: or dword ptr [eax], 1 */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 006c2388: mov eax, dword ptr [0xa95df8] */ r_eax = R32((u32)(0xa95df8u));
L_006c238d:; BB(0x006c238d);
    /* 006c238d: add dword ptr [eax + 0x14], 1 */ { u32 ad = (u32)(r_eax+0x14u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 006c2391: call 0x6c26e4 */ r_esp -= 4; W32(r_esp, 0x6c2396u); f_006c26e4();
    /* 006c2396: imul eax, dword ptr [0xa95e48], 0x2ea4 */ { i64 t = (i64)(i32)R32((u32)(0xa95e48u)) * (i64)(i32)0x2ea4u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006c23a0: mov edx, dword ptr [0xa95e44] */ r_edx = R32((u32)(0xa95e44u));
    /* 006c23a6: push 0x4dc */ { u32 v = 0x4dcu; r_esp -= 4; W32(r_esp, v); }
    /* 006c23ab: push dword ptr [0xa95dfc] */ { u32 v = R32((u32)(0xa95dfcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006c23b1: lea ecx, [eax + edx + 4] */ r_ecx = (u32)(r_eax+r_edx+0x4u);
    /* 006c23b5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006c23b6: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x6c23bbu); f_0086b6b8();
    /* 006c23bb: imul eax, dword ptr [0xa95e48], 0x2ea4 */ { i64 t = (i64)(i32)R32((u32)(0xa95e48u)) * (i64)(i32)0x2ea4u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006c23c5: mov edx, dword ptr [0xa95e44] */ r_edx = R32((u32)(0xa95e44u));
    /* 006c23cb: push 0x29c8 */ { u32 v = 0x29c8u; r_esp -= 4; W32(r_esp, v); }
    /* 006c23d0: push dword ptr [0xa95df8] */ { u32 v = R32((u32)(0xa95df8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c23d6: lea ecx, [eax + edx + 0x4e0] */ r_ecx = (u32)(r_eax+r_edx+0x4e0u);
    /* 006c23dd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006c23de: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x6c23e3u); f_0086b6b8();
    /* 006c23e3: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c23e6: mov eax, dword ptr [0xa95db0] */ r_eax = R32((u32)(0xa95db0u));
    /* 006c23eb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c23ed: je 0x6c254c */ if (fZ) goto L_006c254c;
L_006c23f3:; BB(0x006c23f3);
    /* 006c23f3: imul edx, dword ptr [0xa95e48], 0x2ea4 */ { i64 t = (i64)(i32)R32((u32)(0xa95e48u)) * (i64)(i32)0x2ea4u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006c23fd: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006c23fe: mov eax, dword ptr [0xa95e44] */ r_eax = R32((u32)(0xa95e44u));
    /* 006c2403: mov ecx, dword ptr [0xa95df0] */ r_ecx = R32((u32)(0xa95df0u));
    /* 006c2409: mov dword ptr [eax + edx + 0x370], 0 */ W32((u32)(r_eax+r_edx+0x370u), 0x0u);
    /* 006c2414: mov ebx, dword ptr [ecx + 0x110] */ r_ebx = R32((u32)(r_ecx+0x110u));
    /* 006c241a: mov dword ptr [0xa95dc4], ebx */ W32((u32)(0xa95dc4u), r_ebx);
    /* 006c2420: mov dword ptr [0xa95dc0], ebx */ W32((u32)(0xa95dc0u), r_ebx);
    /* 006c2426: call 0x6c26fc */ r_esp -= 4; W32(r_esp, 0x6c242bu); f_006c26fc();
    /* 006c242b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c242c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c242e: mov dword ptr [ebp - 0x84], eax */ W32((u32)(r_ebp+0xffffff7cu), r_eax);
    /* 006c2434: mov dword ptr [ebp - 0x80], eax */ W32((u32)(r_ebp+0xffffff80u), r_eax);
    /* 006c2437: mov dword ptr [ebp - 0x7c], eax */ W32((u32)(r_ebp+0xffffff84u), r_eax);
    /* 006c243a: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 006c243d: mov dword ptr [ebp - 0x74], eax */ W32((u32)(r_ebp+0xffffff8cu), r_eax);
    /* 006c2440: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 006c2443: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 006c2446: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 006c2449: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
    /* 006c244c: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 006c244f: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 006c2452: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 006c2455: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 006c2458: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 006c245b: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 006c245e: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 006c2461: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 006c2464: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 006c2467: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 006c246a: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 006c246d: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 006c2470: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 006c2473: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 006c2476: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 006c2479: lea esi, [ebp - 0x84] */ r_esi = (u32)(r_ebp+0xffffff7cu);
    /* 006c247f: mov edi, 0x9ceb2c */ r_edi = 0x9ceb2cu;
L_006c2484:; BB(0x006c2484);
    /* 006c2484: mov dl, byte ptr [edi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 006c2486: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006c2489: mov byte ptr [esi], dl */ W8((u32)(r_esi), (u8)r_edx);
    /* 006c248b: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006c248e: test dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006c2490: jne 0x6c2484 */ if (!fZ) goto L_006c2484;
L_006c2492:; BB(0x006c2492);
    /* 006c2492: lea esi, [ebp - 0x72] */ r_esi = (u32)(r_ebp+0xffffff8eu);
    /* 006c2495: mov edi, 0x9ceae8 */ r_edi = 0x9ceae8u;
L_006c249a:; BB(0x006c249a);
    /* 006c249a: mov dl, byte ptr [edi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 006c249c: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006c249f: mov byte ptr [esi], dl */ W8((u32)(r_esi), (u8)r_edx);
    /* 006c24a1: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006c24a4: test dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006c24a6: jne 0x6c249a */ if (!fZ) goto L_006c249a;
L_006c24a8:; BB(0x006c24a8);
    /* 006c24a8: mov ebx, 0xa95e6c */ r_ebx = 0xa95e6cu;
    /* 006c24ad: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 006c24af: mov edx, dword ptr [ebx + 4] */ r_edx = R32((u32)(r_ebx+0x4u));
    /* 006c24b2: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
    /* 006c24b5: mov esi, dword ptr [ebx + 0xc] */ r_esi = R32((u32)(r_ebx+0xcu));
    /* 006c24b8: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 006c24bb: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
    /* 006c24be: mov dword ptr [ebp - 0x48], ecx */ W32((u32)(r_ebp+0xffffffb8u), r_ecx);
    /* 006c24c1: mov dword ptr [ebp - 0x44], esi */ W32((u32)(r_ebp+0xffffffbcu), r_esi);
    /* 006c24c4: lea eax, [ebp - 0x84] */ r_eax = (u32)(r_ebp+0xffffff7cu);
    /* 006c24ca: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 006c24cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c24cd: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x6c24d2u); f_0061cdb0();
    /* 006c24d2: mov ecx, dword ptr [0xa95e44] */ r_ecx = R32((u32)(0xa95e44u));
    /* 006c24d8: mov dword ptr [ebp - 0x28], 0xbaa4 */ W32((u32)(r_ebp+0xffffffd8u), 0xbaa4u);
    /* 006c24df: mov eax, 1 */ r_eax = 0x1u;
    /* 006c24e4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006c24e6: mov word ptr [ebp - 0x38], ax */ W16((u32)(r_ebp+0xffffffc8u), (u16)r_eax);
    /* 006c24ea: mov word ptr [ebp - 0x36], ax */ W16((u32)(r_ebp+0xffffffcau), (u16)r_eax);
    /* 006c24ee: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 006c24f1: mov word ptr [ebp - 0x30], dx */ W16((u32)(r_ebp+0xffffffd0u), (u16)r_edx);
    /* 006c24f5: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 006c24f8: lea ebx, [ebp - 0x84] */ r_ebx = (u32)(r_ebp+0xffffff7cu);
    /* 006c24fe: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006c24ff: push dword ptr [0xa95e2c] */ { u32 v = R32((u32)(0xa95e2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006c2505: call 0x82c34c */ r_esp -= 4; W32(r_esp, 0x6c250au); f_0082c34c();
    /* 006c250a: lea eax, [ebp - 0x84] */ r_eax = (u32)(r_ebp+0xffffff7cu);
    /* 006c2510: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c2511: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x6c2516u); f_0061cdb0();
    /* 006c2516: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c2519: call 0x6c3de4 */ r_esp -= 4; W32(r_esp, 0x6c251eu); f_006c3de4();
    /* 006c251e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c2520: jne 0x6c252c */ if (!fZ) goto L_006c252c;
L_006c2522:; BB(0x006c2522);
    /* 006c2522: mov dword ptr [0xa95de0], 6 */ W32((u32)(0xa95de0u), 0x6u);
L_006c252c:; BB(0x006c252c);
    /* 006c252c: mov edx, dword ptr [0xa95df8] */ r_edx = R32((u32)(0xa95df8u));
    /* 006c2532: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 006c2535: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006c2538: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006c253b: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 006c253e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006c2541: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006c2548: mov esp, ebp */ r_esp = r_ebp;
    /* 006c254a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006c254b: ret  */ FN_RET(0x006c1f04); r_esp += 4; return;
L_006c254c:; BB(0x006c254c);
    /* 006c254c: imul eax, dword ptr [0xa95e48], 0x2ea4 */ { i64 t = (i64)(i32)R32((u32)(0xa95e48u)) * (i64)(i32)0x2ea4u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006c2556: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 006c2558: mov edx, dword ptr [0xa95e44] */ r_edx = R32((u32)(0xa95e44u));
    /* 006c255e: lea esi, [eax + edx + 4] */ r_esi = (u32)(r_eax+r_edx+0x4u);
    /* 006c2562: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_006c2565:; BB(0x006c2565);
    /* 006c2565: mov byte ptr [esi + 1], 0xff */ W8((u32)(r_esi+0x1u), 0xffu);
    /* 006c2569: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c256b: mov byte ptr [esi], al */ W8((u32)(r_esi), (u8)r_eax);
    /* 006c256d: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
    /* 006c2570: lea ecx, [esi + 8] */ r_ecx = (u32)(r_esi+0x8u);
    /* 006c2573: call 0x5d6a3c */ r_esp -= 4; W32(r_esp, 0x6c2578u); f_005d6a3c();
    /* 006c2578: add esi, 0x1c */ {  u32 a = r_esi; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006c257b: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006c257e: cmp ebx, 0x1e */ {  u32 a = r_ebx; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006c2581: jl 0x6c2565 */ if ((fS!=fO)) goto L_006c2565;
L_006c2583:; BB(0x006c2583);
    /* 006c2583: imul edx, dword ptr [0xa95e48], 0x2ea4 */ { i64 t = (i64)(i32)R32((u32)(0xa95e48u)) * (i64)(i32)0x2ea4u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006c258d: mov eax, dword ptr [0xa95e44] */ r_eax = R32((u32)(0xa95e44u));
    /* 006c2592: mov byte ptr [eax + edx + 4], 0 */ W8((u32)(r_eax+r_edx+0x4u), 0x0u);
    /* 006c2597: imul ebx, dword ptr [0xa95e48], 0x2ea4 */ { i64 t = (i64)(i32)R32((u32)(0xa95e48u)) * (i64)(i32)0x2ea4u; r_ebx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006c25a1: mov esi, dword ptr [0xa95e44] */ r_esi = R32((u32)(0xa95e44u));
    /* 006c25a7: lea ecx, [ebx + esi + 0x6fc] */ r_ecx = (u32)(r_ebx+r_esi+0x6fcu);
    /* 006c25ae: call 0x6ca370 */ r_esp -= 4; W32(r_esp, 0x6c25b3u); f_006ca370();
    /* 006c25b3: jmp 0x6c23f3 */ goto L_006c23f3;
L_006c25b8:; BB(0x006c25b8);
    /* 006c25b8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c25ba: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006c25bd: jmp 0x6c2286 */ goto L_006c2286;
L_006c25c2:; BB(0x006c25c2);
    /* 006c25c2: call 0x7a0118 */ r_esp -= 4; W32(r_esp, 0x6c25c7u); f_007a0118();
    /* 006c25c7: jmp 0x6c219c */ goto L_006c219c;
L_006c25cc:; BB(0x006c25cc);
    /* 006c25cc: call 0x7a0118 */ r_esp -= 4; W32(r_esp, 0x6c25d1u); f_007a0118();
    /* 006c25d1: jmp 0x6c20e2 */ goto L_006c20e2;
L_006c25d6:; BB(0x006c25d6);
    /* 006c25d6: call 0x7a0118 */ r_esp -= 4; W32(r_esp, 0x6c25dbu); f_007a0118();
    /* 006c25db: jmp 0x6c206a */ goto L_006c206a;
L_006c25e0:; BB(0x006c25e0);
    /* 006c25e0: mov eax, dword ptr [0xa95df8] */ r_eax = R32((u32)(0xa95df8u));
    /* 006c25e5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c25e7: je 0x6c230e */ if (fZ) goto L_006c230e;
L_006c25ed:; BB(0x006c25ed);
    /* 006c25ed: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 006c25f0: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006c25f3: mov dword ptr [eax + 0x14], edx */ W32((u32)(r_eax+0x14u), r_edx);
    /* 006c25f6: mov eax, edx */ r_eax = r_edx;
    /* 006c25f8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006c25fb: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006c2602: mov esp, ebp */ r_esp = r_ebp;
    /* 006c2604: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006c2605: ret  */ FN_RET(0x006c1f04); r_esp += 4; return;
}

