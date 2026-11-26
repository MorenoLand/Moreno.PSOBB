#include "protos.h"

void f_006b6008(void) /* sub_6B6008 */
{
    FN_ENTER(0x006b6008);
    /* 006b6008: mov dword ptr [0xa94ad4], 0 */ W32((u32)(0xa94ad4u), 0x0u);
    /* 006b6012: ret  */ FN_RET(0x006b6008); r_esp += 4; return;
}

void f_006b6014(void)
{
    FN_ENTER(0x006b6014);
    /* 006b6014: movzx edx, byte ptr [esp + 4] */ r_edx = (u32)R8((u32)(r_esp+0x4u));
    /* 006b6019: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b601e: push dword ptr [eax + edx*4] */ { u32 v = R32((u32)(r_eax+r_edx*4)); r_esp -= 4; W32(r_esp, v); }
    /* 006b6021: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6b6026u); f_0068d5a8();
    /* 006b6026: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b6027: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b6029: je 0x6b6206 */ if (fZ) goto L_006b6206;
L_006b602f:; BB(0x006b602f);
    /* 006b602f: mov eax, dword ptr [eax + 0x328] */ r_eax = R32((u32)(r_eax+0x328u));
    /* 006b6035: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006b6037: je 0x6b6040 */ if (fZ) goto L_006b6040;
L_006b6039:; BB(0x006b6039);
    /* 006b6039: mov edx, 1 */ r_edx = 0x1u;
    /* 006b603e: jmp 0x6b6042 */ goto L_006b6042;
L_006b6040:; BB(0x006b6040);
    /* 006b6040: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_006b6042:; BB(0x006b6042);
    /* 006b6042: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b6044: je 0x6b6058 */ if (fZ) goto L_006b6058;
L_006b6046:; BB(0x006b6046);
    /* 006b6046: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b604b: movzx edx, byte ptr [esp + 8] */ r_edx = (u32)R8((u32)(r_esp+0x8u));
    /* 006b6050: mov dword ptr [eax + edx*4], 1 */ W32((u32)(r_eax+r_edx*4), 0x1u);
    /* 006b6057: ret  */ FN_RET(0x006b6014); r_esp += 4; return;
L_006b6058:; BB(0x006b6058);
    /* 006b6058: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006b605a: je 0x6b6063 */ if (fZ) goto L_006b6063;
L_006b605c:; BB(0x006b605c);
    /* 006b605c: mov edx, 1 */ r_edx = 0x1u;
    /* 006b6061: jmp 0x6b6065 */ goto L_006b6065;
L_006b6063:; BB(0x006b6063);
    /* 006b6063: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_006b6065:; BB(0x006b6065);
    /* 006b6065: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b6067: je 0x6b607b */ if (fZ) goto L_006b607b;
L_006b6069:; BB(0x006b6069);
    /* 006b6069: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b606e: movzx edx, byte ptr [esp + 8] */ r_edx = (u32)R8((u32)(r_esp+0x8u));
    /* 006b6073: mov dword ptr [eax + edx*4], 2 */ W32((u32)(r_eax+r_edx*4), 0x2u);
    /* 006b607a: ret  */ FN_RET(0x006b6014); r_esp += 4; return;
L_006b607b:; BB(0x006b607b);
    /* 006b607b: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006b607d: je 0x6b6086 */ if (fZ) goto L_006b6086;
L_006b607f:; BB(0x006b607f);
    /* 006b607f: mov edx, 1 */ r_edx = 0x1u;
    /* 006b6084: jmp 0x6b6088 */ goto L_006b6088;
L_006b6086:; BB(0x006b6086);
    /* 006b6086: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_006b6088:; BB(0x006b6088);
    /* 006b6088: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b608a: je 0x6b609e */ if (fZ) goto L_006b609e;
L_006b608c:; BB(0x006b608c);
    /* 006b608c: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b6091: movzx edx, byte ptr [esp + 8] */ r_edx = (u32)R8((u32)(r_esp+0x8u));
    /* 006b6096: mov dword ptr [eax + edx*4], 3 */ W32((u32)(r_eax+r_edx*4), 0x3u);
    /* 006b609d: ret  */ FN_RET(0x006b6014); r_esp += 4; return;
L_006b609e:; BB(0x006b609e);
    /* 006b609e: test eax, 0xe0 */ {  u32 a = r_eax; u32 b = 0xe0u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b60a3: je 0x6b60ac */ if (fZ) goto L_006b60ac;
L_006b60a5:; BB(0x006b60a5);
    /* 006b60a5: mov edx, 1 */ r_edx = 0x1u;
    /* 006b60aa: jmp 0x6b60ae */ goto L_006b60ae;
L_006b60ac:; BB(0x006b60ac);
    /* 006b60ac: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_006b60ae:; BB(0x006b60ae);
    /* 006b60ae: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b60b0: je 0x6b60c4 */ if (fZ) goto L_006b60c4;
L_006b60b2:; BB(0x006b60b2);
    /* 006b60b2: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b60b7: movzx edx, byte ptr [esp + 8] */ r_edx = (u32)R8((u32)(r_esp+0x8u));
    /* 006b60bc: mov dword ptr [eax + edx*4], 4 */ W32((u32)(r_eax+r_edx*4), 0x4u);
    /* 006b60c3: ret  */ FN_RET(0x006b6014); r_esp += 4; return;
L_006b60c4:; BB(0x006b60c4);
    /* 006b60c4: test eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b60c9: je 0x6b60d2 */ if (fZ) goto L_006b60d2;
L_006b60cb:; BB(0x006b60cb);
    /* 006b60cb: mov edx, 1 */ r_edx = 0x1u;
    /* 006b60d0: jmp 0x6b60d4 */ goto L_006b60d4;
L_006b60d2:; BB(0x006b60d2);
    /* 006b60d2: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_006b60d4:; BB(0x006b60d4);
    /* 006b60d4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b60d6: je 0x6b60ea */ if (fZ) goto L_006b60ea;
L_006b60d8:; BB(0x006b60d8);
    /* 006b60d8: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b60dd: movzx edx, byte ptr [esp + 8] */ r_edx = (u32)R8((u32)(r_esp+0x8u));
    /* 006b60e2: mov dword ptr [eax + edx*4], 5 */ W32((u32)(r_eax+r_edx*4), 0x5u);
    /* 006b60e9: ret  */ FN_RET(0x006b6014); r_esp += 4; return;
L_006b60ea:; BB(0x006b60ea);
    /* 006b60ea: test eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b60ef: je 0x6b60f8 */ if (fZ) goto L_006b60f8;
L_006b60f1:; BB(0x006b60f1);
    /* 006b60f1: mov edx, 1 */ r_edx = 0x1u;
    /* 006b60f6: jmp 0x6b60fa */ goto L_006b60fa;
L_006b60f8:; BB(0x006b60f8);
    /* 006b60f8: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_006b60fa:; BB(0x006b60fa);
    /* 006b60fa: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b60fc: je 0x6b6110 */ if (fZ) goto L_006b6110;
L_006b60fe:; BB(0x006b60fe);
    /* 006b60fe: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b6103: movzx edx, byte ptr [esp + 8] */ r_edx = (u32)R8((u32)(r_esp+0x8u));
    /* 006b6108: mov dword ptr [eax + edx*4], 6 */ W32((u32)(r_eax+r_edx*4), 0x6u);
    /* 006b610f: ret  */ FN_RET(0x006b6014); r_esp += 4; return;
L_006b6110:; BB(0x006b6110);
    /* 006b6110: test eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b6115: je 0x6b611e */ if (fZ) goto L_006b611e;
L_006b6117:; BB(0x006b6117);
    /* 006b6117: mov edx, 1 */ r_edx = 0x1u;
    /* 006b611c: jmp 0x6b6120 */ goto L_006b6120;
L_006b611e:; BB(0x006b611e);
    /* 006b611e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_006b6120:; BB(0x006b6120);
    /* 006b6120: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b6122: je 0x6b6136 */ if (fZ) goto L_006b6136;
L_006b6124:; BB(0x006b6124);
    /* 006b6124: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b6129: movzx edx, byte ptr [esp + 8] */ r_edx = (u32)R8((u32)(r_esp+0x8u));
    /* 006b612e: mov dword ptr [eax + edx*4], 7 */ W32((u32)(r_eax+r_edx*4), 0x7u);
    /* 006b6135: ret  */ FN_RET(0x006b6014); r_esp += 4; return;
L_006b6136:; BB(0x006b6136);
    /* 006b6136: test eax, 0x6000 */ {  u32 a = r_eax; u32 b = 0x6000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b613b: je 0x6b6144 */ if (fZ) goto L_006b6144;
L_006b613d:; BB(0x006b613d);
    /* 006b613d: mov edx, 1 */ r_edx = 0x1u;
    /* 006b6142: jmp 0x6b6146 */ goto L_006b6146;
L_006b6144:; BB(0x006b6144);
    /* 006b6144: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_006b6146:; BB(0x006b6146);
    /* 006b6146: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b6148: je 0x6b615c */ if (fZ) goto L_006b615c;
L_006b614a:; BB(0x006b614a);
    /* 006b614a: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b614f: movzx edx, byte ptr [esp + 8] */ r_edx = (u32)R8((u32)(r_esp+0x8u));
    /* 006b6154: mov dword ptr [eax + edx*4], 8 */ W32((u32)(r_eax+r_edx*4), 0x8u);
    /* 006b615b: ret  */ FN_RET(0x006b6014); r_esp += 4; return;
L_006b615c:; BB(0x006b615c);
    /* 006b615c: test eax, 0x8000 */ {  u32 a = r_eax; u32 b = 0x8000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b6161: je 0x6b616a */ if (fZ) goto L_006b616a;
L_006b6163:; BB(0x006b6163);
    /* 006b6163: mov edx, 1 */ r_edx = 0x1u;
    /* 006b6168: jmp 0x6b616c */ goto L_006b616c;
L_006b616a:; BB(0x006b616a);
    /* 006b616a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_006b616c:; BB(0x006b616c);
    /* 006b616c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b616e: je 0x6b6182 */ if (fZ) goto L_006b6182;
L_006b6170:; BB(0x006b6170);
    /* 006b6170: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b6175: movzx edx, byte ptr [esp + 8] */ r_edx = (u32)R8((u32)(r_esp+0x8u));
    /* 006b617a: mov dword ptr [eax + edx*4], 9 */ W32((u32)(r_eax+r_edx*4), 0x9u);
    /* 006b6181: ret  */ FN_RET(0x006b6014); r_esp += 4; return;
L_006b6182:; BB(0x006b6182);
    /* 006b6182: test eax, 0x10000 */ {  u32 a = r_eax; u32 b = 0x10000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b6187: je 0x6b6190 */ if (fZ) goto L_006b6190;
L_006b6189:; BB(0x006b6189);
    /* 006b6189: mov edx, 1 */ r_edx = 0x1u;
    /* 006b618e: jmp 0x6b6192 */ goto L_006b6192;
L_006b6190:; BB(0x006b6190);
    /* 006b6190: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_006b6192:; BB(0x006b6192);
    /* 006b6192: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b6194: je 0x6b61a8 */ if (fZ) goto L_006b61a8;
L_006b6196:; BB(0x006b6196);
    /* 006b6196: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b619b: movzx edx, byte ptr [esp + 8] */ r_edx = (u32)R8((u32)(r_esp+0x8u));
    /* 006b61a0: mov dword ptr [eax + edx*4], 0xa */ W32((u32)(r_eax+r_edx*4), 0xau);
    /* 006b61a7: ret  */ FN_RET(0x006b6014); r_esp += 4; return;
L_006b61a8:; BB(0x006b61a8);
    /* 006b61a8: test eax, 0x40000 */ {  u32 a = r_eax; u32 b = 0x40000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b61ad: je 0x6b61b6 */ if (fZ) goto L_006b61b6;
L_006b61af:; BB(0x006b61af);
    /* 006b61af: mov edx, 1 */ r_edx = 0x1u;
    /* 006b61b4: jmp 0x6b61b8 */ goto L_006b61b8;
L_006b61b6:; BB(0x006b61b6);
    /* 006b61b6: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_006b61b8:; BB(0x006b61b8);
    /* 006b61b8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b61ba: je 0x6b61ce */ if (fZ) goto L_006b61ce;
L_006b61bc:; BB(0x006b61bc);
    /* 006b61bc: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b61c1: movzx edx, byte ptr [esp + 8] */ r_edx = (u32)R8((u32)(r_esp+0x8u));
    /* 006b61c6: mov dword ptr [eax + edx*4], 0xb */ W32((u32)(r_eax+r_edx*4), 0xbu);
    /* 006b61cd: ret  */ FN_RET(0x006b6014); r_esp += 4; return;
L_006b61ce:; BB(0x006b61ce);
    /* 006b61ce: test eax, 0x80000 */ {  u32 a = r_eax; u32 b = 0x80000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b61d3: je 0x6b61dc */ if (fZ) goto L_006b61dc;
L_006b61d5:; BB(0x006b61d5);
    /* 006b61d5: mov eax, 1 */ r_eax = 0x1u;
    /* 006b61da: jmp 0x6b61de */ goto L_006b61de;
L_006b61dc:; BB(0x006b61dc);
    /* 006b61dc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_006b61de:; BB(0x006b61de);
    /* 006b61de: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b61e0: jne 0x6b61f4 */ if (!fZ) goto L_006b61f4;
L_006b61e2:; BB(0x006b61e2);
    /* 006b61e2: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b61e7: movzx edx, byte ptr [esp + 8] */ r_edx = (u32)R8((u32)(r_esp+0x8u));
    /* 006b61ec: mov dword ptr [eax + edx*4], 0xd */ W32((u32)(r_eax+r_edx*4), 0xdu);
    /* 006b61f3: ret  */ FN_RET(0x006b6014); r_esp += 4; return;
L_006b61f4:; BB(0x006b61f4);
    /* 006b61f4: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b61f9: movzx edx, byte ptr [esp + 8] */ r_edx = (u32)R8((u32)(r_esp+0x8u));
    /* 006b61fe: mov dword ptr [eax + edx*4], 0xc */ W32((u32)(r_eax+r_edx*4), 0xcu);
    /* 006b6205: ret  */ FN_RET(0x006b6014); r_esp += 4; return;
L_006b6206:; BB(0x006b6206);
    /* 006b6206: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b620b: movzx edx, byte ptr [esp + 8] */ r_edx = (u32)R8((u32)(r_esp+0x8u));
    /* 006b6210: mov dword ptr [eax + edx*4], 0 */ W32((u32)(r_eax+r_edx*4), 0x0u);
    /* 006b6217: ret  */ FN_RET(0x006b6014); r_esp += 4; return;
}

void f_006b6218(void)
{
    FN_ENTER(0x006b6218);
    /* 006b6218: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006b6219: mov ebp, esp */ r_ebp = r_esp;
    /* 006b621b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006b621d: push 0x8ebf22 */ { u32 v = 0x8ebf22u; r_esp -= 4; W32(r_esp, v); }
    /* 006b6222: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006b6228: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b6229: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006b6230: sub esp, 0x824 */ {  u32 a = r_esp; u32 b = 0x824u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006b6236: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006b6239: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 006b623c: mov dword ptr [ebp - 0x24], esi */ W32((u32)(r_ebp+0xffffffdcu), r_esi);
    /* 006b623f: mov dword ptr [ebp - 0x20], ebx */ W32((u32)(r_ebp+0xffffffe0u), r_ebx);
    /* 006b6242: movzx eax, byte ptr [0xa954cc] */ r_eax = (u32)R8((u32)(0xa954ccu));
    /* 006b6249: mov edx, dword ptr [0xa954d0] */ r_edx = R32((u32)(0xa954d0u));
    /* 006b624f: mov dword ptr [ebp - 0x830], 0 */ W32((u32)(r_ebp+0xfffff7d0u), 0x0u);
    /* 006b6259: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 006b625c: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 006b625f: push 0x20a8 */ { u32 v = 0x20a8u; r_esp -= 4; W32(r_esp, v); }
    /* 006b6264: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6b6269u); f_005caba4();
    /* 006b6269: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006b626c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b626f: mov dword ptr [ebp - 0x82c], eax */ W32((u32)(r_ebp+0xfffff7d4u), r_eax);
    /* 006b6275: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b6277: je 0x6b634f */ if (fZ) goto L_006b634f;
L_006b627d:; BB(0x006b627d);
    /* 006b627d: mov dword ptr [ebp - 0x830], 1 */ W32((u32)(r_ebp+0xfffff7d0u), 0x1u);
    /* 006b6287: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006b628e: mov ecx, eax */ r_ecx = r_eax;
    /* 006b6290: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006b6292: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b6293: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b6294: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b6295: call 0x815cc0 */ r_esp -= 4; W32(r_esp, 0x6b629au); f_00815cc0();
    /* 006b629a: mov dword ptr [ebp - 0x830], 0 */ W32((u32)(r_ebp+0xfffff7d0u), 0x0u);
    /* 006b62a4: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006b62ab: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006b62ae: lea edx, [ebp - 0x828] */ r_edx = (u32)(r_ebp+0xfffff7d8u);
    /* 006b62b4: push 0x3ff */ { u32 v = 0x3ffu; r_esp -= 4; W32(r_esp, v); }
    /* 006b62b9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b62ba: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006b62bb: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x6b62c0u); f_00857dec();
    /* 006b62c0: lea eax, [ebp - 0x828] */ r_eax = (u32)(r_ebp+0xfffff7d8u);
    /* 006b62c6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b62c7: call 0x815844 */ r_esp -= 4; W32(r_esp, 0x6b62ccu); f_00815844();
    /* 006b62cc: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b62cf: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006b62d2: lea eax, [ebp - 0x828] */ r_eax = (u32)(r_ebp+0xfffff7d8u);
    /* 006b62d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b62d9: call 0x815ad8 */ r_esp -= 4; W32(r_esp, 0x6b62deu); f_00815ad8();
    /* 006b62de: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006b62e1: mov edx, dword ptr [eax + 0x209c] */ r_edx = R32((u32)(r_eax+0x209cu));
    /* 006b62e7: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006b62ea: jle 0x6b6306 */ if ((fZ||fS!=fO)) goto L_006b6306;
L_006b62ec:; BB(0x006b62ec);
    /* 006b62ec: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b62ee: je 0x6b62f8 */ if (fZ) goto L_006b62f8;
L_006b62f0:; BB(0x006b62f0);
    /* 006b62f0: mov ecx, eax */ r_ecx = r_eax;
    /* 006b62f2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006b62f4: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006b62f6: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x6b62f8u); call_ind(t); }
L_006b62f8:; BB(0x006b62f8);
    /* 006b62f8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006b62fb: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006b6302: mov esp, ebp */ r_esp = r_ebp;
    /* 006b6304: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006b6305: ret  */ FN_RET(0x006b6218); r_esp += 4; return;
L_006b6306:; BB(0x006b6306);
    /* 006b6306: mov edx, dword ptr [0xa954b0] */ r_edx = R32((u32)(0xa954b0u));
    /* 006b630c: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006b630f: push dword ptr [edx + ecx*4] */ { u32 v = R32((u32)(r_edx+r_ecx*4)); r_esp -= 4; W32(r_esp, v); }
    /* 006b6312: lea edi, [eax + 0x1c] */ r_edi = (u32)(r_eax+0x1cu);
    /* 006b6315: mov esi, 0x40 */ r_esi = 0x40u;
    /* 006b631a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006b631b: lea ebx, [eax + 0x5c] */ r_ebx = (u32)(r_eax+0x5cu);
    /* 006b631e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006b631f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006b6320: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006b6321: call 0x813790 */ r_esp -= 4; W32(r_esp, 0x6b6326u); f_00813790();
    /* 006b6326: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b6329: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006b632c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b632e: je 0x6b6338 */ if (fZ) goto L_006b6338;
L_006b6330:; BB(0x006b6330);
    /* 006b6330: mov ecx, eax */ r_ecx = r_eax;
    /* 006b6332: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006b6334: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006b6336: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x6b6338u); call_ind(t); }
L_006b6338:; BB(0x006b6338);
    /* 006b6338: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 006b633b: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 006b633e: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006b6341: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006b6344: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006b634b: mov esp, ebp */ r_esp = r_ebp;
    /* 006b634d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006b634e: ret  */ FN_RET(0x006b6218); r_esp += 4; return;
L_006b634f:; BB(0x006b634f);
    /* 006b634f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006b6351: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006b6354: jmp 0x6b62a4 */ f_006b62a4(); return;
}

void f_006b635c(void)
{
    FN_ENTER(0x006b635c);
    /* 006b635c: movzx edx, byte ptr [esp + 4] */ r_edx = (u32)R8((u32)(r_esp+0x4u));
    /* 006b6361: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b6366: mov dword ptr [eax + edx*4], 4 */ W32((u32)(r_eax+r_edx*4), 0x4u);
    /* 006b636d: ret  */ FN_RET(0x006b635c); r_esp += 4; return;
}

void f_006b6370(void)
{
    FN_ENTER(0x006b6370);
    /* 006b6370: movzx ecx, byte ptr [esp + 4] */ r_ecx = (u32)R8((u32)(r_esp+0x4u));
    /* 006b6375: movzx eax, byte ptr [esp + 8] */ r_eax = (u32)R8((u32)(r_esp+0x8u));
    /* 006b637a: mov edx, dword ptr [0xa954b0] */ r_edx = R32((u32)(0xa954b0u));
    /* 006b6380: push dword ptr [edx + eax*4] */ { u32 v = R32((u32)(r_edx+r_eax*4)); r_esp -= 4; W32(r_esp, v); }
    /* 006b6383: push dword ptr [edx + ecx*4] */ { u32 v = R32((u32)(r_edx+r_ecx*4)); r_esp -= 4; W32(r_esp, v); }
    /* 006b6386: call 0x4db680 */ r_esp -= 4; W32(r_esp, 0x6b638bu); f_004db680();
    /* 006b638b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b638e: ret  */ FN_RET(0x006b6370); r_esp += 4; return;
}

void f_006b6390(void)
{
    FN_ENTER(0x006b6390);
    /* 006b6390: call 0x4db6bc */ r_esp -= 4; W32(r_esp, 0x6b6395u); f_004db6bc();
    /* 006b6395: mov edx, dword ptr [0xa954b0] */ r_edx = R32((u32)(0xa954b0u));
    /* 006b639b: movzx ecx, byte ptr [esp + 4] */ r_ecx = (u32)R8((u32)(r_esp+0x4u));
    /* 006b63a0: mov dword ptr [edx + ecx*4], eax */ W32((u32)(r_edx+r_ecx*4), r_eax);
    /* 006b63a3: ret  */ FN_RET(0x006b6390); r_esp += 4; return;
}

void f_006b63a4(void) /* sub_6B63A4 */
{
    FN_ENTER(0x006b63a4);
    /* 006b63a4: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006b63a7: movzx edx, byte ptr [esp + 0x2c] */ r_edx = (u32)R8((u32)(r_esp+0x2cu));
    /* 006b63ac: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b63b1: fild dword ptr [eax + edx*4] */ FPUSH((long double)(i32)R32((u32)(r_eax+r_edx*4)));
    /* 006b63b4: fild dword ptr [eax + edx*4 + 4] */ FPUSH((long double)(i32)R32((u32)(r_eax+r_edx*4+0x4u)));
    /* 006b63b8: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 006b63ba: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006b63bd: fild dword ptr [eax + edx*4 + 8] */ FPUSH((long double)(i32)R32((u32)(r_eax+r_edx*4+0x8u)));
    /* 006b63c1: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 006b63c4: fild dword ptr [eax + edx*4 + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_eax+r_edx*4+0xcu)));
    /* 006b63c8: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 006b63ca: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 006b63ce: fild dword ptr [eax + edx*4 + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_eax+r_edx*4+0x10u)));
    /* 006b63d2: fild dword ptr [eax + edx*4 + 0x14] */ FPUSH((long double)(i32)R32((u32)(r_eax+r_edx*4+0x14u)));
    /* 006b63d6: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 006b63d8: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 006b63dc: fild dword ptr [eax + edx*4 + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_eax+r_edx*4+0x18u)));
    /* 006b63e0: fild dword ptr [eax + edx*4 + 0x1c] */ FPUSH((long double)(i32)R32((u32)(r_eax+r_edx*4+0x1cu)));
    /* 006b63e4: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 006b63e6: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 006b63ea: fild dword ptr [eax + edx*4 + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_eax+r_edx*4+0x20u)));
    /* 006b63ee: fild dword ptr [eax + edx*4 + 0x24] */ FPUSH((long double)(i32)R32((u32)(r_eax+r_edx*4+0x24u)));
    /* 006b63f2: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 006b63f4: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 006b63f8: fild dword ptr [eax + edx*4 + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_eax+r_edx*4+0x28u)));
    /* 006b63fc: fild dword ptr [eax + edx*4 + 0x2c] */ FPUSH((long double)(i32)R32((u32)(r_eax+r_edx*4+0x2cu)));
    /* 006b6400: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 006b6402: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 006b6406: fild dword ptr [eax + edx*4 + 0x30] */ FPUSH((long double)(i32)R32((u32)(r_eax+r_edx*4+0x30u)));
    /* 006b640a: fild dword ptr [eax + edx*4 + 0x34] */ FPUSH((long double)(i32)R32((u32)(r_eax+r_edx*4+0x34u)));
    /* 006b640e: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 006b6410: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 006b6414: fild dword ptr [eax + edx*4 + 0x38] */ FPUSH((long double)(i32)R32((u32)(r_eax+r_edx*4+0x38u)));
    /* 006b6418: fild dword ptr [eax + edx*4 + 0x3c] */ FPUSH((long double)(i32)R32((u32)(r_eax+r_edx*4+0x3cu)));
    /* 006b641c: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 006b641e: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 006b6422: fild dword ptr [eax + edx*4 + 0x40] */ FPUSH((long double)(i32)R32((u32)(r_eax+r_edx*4+0x40u)));
    /* 006b6426: fild dword ptr [eax + edx*4 + 0x44] */ FPUSH((long double)(i32)R32((u32)(r_eax+r_edx*4+0x44u)));
    /* 006b642a: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 006b642c: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 006b6430: fild dword ptr [eax + edx*4 + 0x48] */ FPUSH((long double)(i32)R32((u32)(r_eax+r_edx*4+0x48u)));
    /* 006b6434: fild dword ptr [eax + edx*4 + 0x4c] */ FPUSH((long double)(i32)R32((u32)(r_eax+r_edx*4+0x4cu)));
    /* 006b6438: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 006b643a: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 006b643e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006b643f: call 0x4def94 */ r_esp -= 4; W32(r_esp, 0x6b6444u); f_004def94();
    /* 006b6444: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b6447: ret  */ FN_RET(0x006b63a4); r_esp += 4; return;
}

void f_006b6448(void) /* sub_6B6448 */
{
    FN_ENTER(0x006b6448);
    /* 006b6448: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006b6449: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006b644a: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006b644d: movzx edi, byte ptr [0xa954cc] */ r_edi = (u32)R8((u32)(0xa954ccu));
    /* 006b6454: mov esi, dword ptr [0xa954d0] */ r_esi = R32((u32)(0xa954d0u));
    /* 006b645a: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 006b645d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b645e: call 0x80ca60 */ r_esp -= 4; W32(r_esp, 0x6b6463u); f_0080ca60();
    /* 006b6463: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b6468: fild dword ptr [eax + edi*4] */ FPUSH((long double)(i32)R32((u32)(r_eax+r_edi*4)));
    /* 006b646b: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 006b646f: lea edx, [edi + 1] */ r_edx = (u32)(r_edi+0x1u);
    /* 006b6472: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 006b6475: fild dword ptr [eax + edx*4] */ FPUSH((long double)(i32)R32((u32)(r_eax+r_edx*4)));
    /* 006b6478: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 006b647c: lea ecx, [edi + 2] */ r_ecx = (u32)(r_edi+0x2u);
    /* 006b647f: movzx ecx, cl */ r_ecx = (u32)(u8)r_ecx;
    /* 006b6482: fild dword ptr [eax + ecx*4] */ FPUSH((long double)(i32)R32((u32)(r_eax+r_ecx*4)));
    /* 006b6485: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 006b6489: lea edx, [edi + 3] */ r_edx = (u32)(r_edi+0x3u);
    /* 006b648c: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 006b648f: fild dword ptr [eax + edx*4] */ FPUSH((long double)(i32)R32((u32)(r_eax+r_edx*4)));
    /* 006b6492: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 006b6496: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006b6499: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 006b649f: mov eax, dword ptr [eax + edi*4] */ r_eax = R32((u32)(r_eax+r_edi*4));
    /* 006b64a2: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 006b64a6: lea eax, [esp + 4] */ r_eax = (u32)(r_esp+0x4u);
    /* 006b64aa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b64ab: call 0x615e70 */ r_esp -= 4; W32(r_esp, 0x6b64b0u); f_00615e70();
    /* 006b64b0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b64b3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b64b5: je 0x6b64bf */ if (fZ) goto L_006b64bf;
L_006b64b7:; BB(0x006b64b7);
    /* 006b64b7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006b64b8: mov ecx, eax */ r_ecx = r_eax;
    /* 006b64ba: call 0x616650 */ r_esp -= 4; W32(r_esp, 0x6b64bfu); f_00616650();
L_006b64bf:; BB(0x006b64bf);
    /* 006b64bf: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b64c2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006b64c3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006b64c4: ret  */ FN_RET(0x006b6448); r_esp += 4; return;
}

void f_006b64c8(void)
{
    FN_ENTER(0x006b64c8);
    /* 006b64c8: push dword ptr [0xa954cc] */ { u32 v = R32((u32)(0xa954ccu)); r_esp -= 4; W32(r_esp, v); }
    /* 006b64ce: call 0x77a700 */ r_esp -= 4; W32(r_esp, 0x6b64d3u); f_0077a700();
    /* 006b64d3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b64d4: ret  */ FN_RET(0x006b64c8); r_esp += 4; return;
}

void f_006b64d8(void) /* sub_6B64D8 */
{
    FN_ENTER(0x006b64d8);
    /* 006b64d8: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006b64db: movzx ecx, word ptr [esp + 0x28] */ r_ecx = (u32)R16((u32)(r_esp+0x28u));
    /* 006b64e0: mov eax, dword ptr [0xa954ac] */ r_eax = R32((u32)(0xa954acu));
    /* 006b64e5: mov edx, dword ptr [0xa954a8] */ r_edx = R32((u32)(0xa954a8u));
    /* 006b64eb: mov eax, dword ptr [eax + ecx*4] */ r_eax = R32((u32)(r_eax+r_ecx*4));
    /* 006b64ee: mov ecx, edx */ r_ecx = r_edx;
    /* 006b64f0: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 006b64f2: je 0x6b6578 */ if (fZ) goto L_006b6578;
L_006b64f8:; BB(0x006b64f8);
    /* 006b64f8: movzx ecx, word ptr [eax + edx] */ r_ecx = (u32)R16((u32)(r_eax+r_edx));
    /* 006b64fc: mov word ptr [esp], cx */ W16((u32)(r_esp), (u16)r_ecx);
    /* 006b6500: movzx ecx, word ptr [eax + edx + 2] */ r_ecx = (u32)R16((u32)(r_eax+r_edx+0x2u));
    /* 006b6505: mov word ptr [esp + 2], cx */ W16((u32)(r_esp+0x2u), (u16)r_ecx);
    /* 006b650a: movzx ecx, word ptr [eax + edx + 4] */ r_ecx = (u32)R16((u32)(r_eax+r_edx+0x4u));
    /* 006b650f: mov word ptr [esp + 4], cx */ W16((u32)(r_esp+0x4u), (u16)r_ecx);
    /* 006b6514: movzx ecx, word ptr [eax + edx + 6] */ r_ecx = (u32)R16((u32)(r_eax+r_edx+0x6u));
    /* 006b6519: mov word ptr [esp + 6], cx */ W16((u32)(r_esp+0x6u), (u16)r_ecx);
    /* 006b651e: movzx ecx, word ptr [eax + edx + 8] */ r_ecx = (u32)R16((u32)(r_eax+r_edx+0x8u));
    /* 006b6523: mov word ptr [esp + 8], cx */ W16((u32)(r_esp+0x8u), (u16)r_ecx);
    /* 006b6528: movzx ecx, word ptr [eax + edx + 0xa] */ r_ecx = (u32)R16((u32)(r_eax+r_edx+0xau));
    /* 006b652d: mov word ptr [esp + 0xa], cx */ W16((u32)(r_esp+0xau), (u16)r_ecx);
    /* 006b6532: movzx ecx, word ptr [eax + edx + 0xc] */ r_ecx = (u32)R16((u32)(r_eax+r_edx+0xcu));
    /* 006b6537: mov word ptr [esp + 0xc], cx */ W16((u32)(r_esp+0xcu), (u16)r_ecx);
    /* 006b653c: movzx ecx, word ptr [eax + edx + 0xe] */ r_ecx = (u32)R16((u32)(r_eax+r_edx+0xeu));
    /* 006b6541: mov word ptr [esp + 0xe], cx */ W16((u32)(r_esp+0xeu), (u16)r_ecx);
    /* 006b6546: mov ecx, dword ptr [eax + edx + 0x10] */ r_ecx = R32((u32)(r_eax+r_edx+0x10u));
    /* 006b654a: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 006b654e: mov ecx, dword ptr [eax + edx + 0x14] */ r_ecx = R32((u32)(r_eax+r_edx+0x14u));
    /* 006b6552: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 006b6556: mov ecx, dword ptr [eax + edx + 0x18] */ r_ecx = R32((u32)(r_eax+r_edx+0x18u));
    /* 006b655a: mov dword ptr [esp + 0x18], ecx */ W32((u32)(r_esp+0x18u), r_ecx);
    /* 006b655e: mov ecx, dword ptr [eax + edx + 0x1c] */ r_ecx = R32((u32)(r_eax+r_edx+0x1cu));
    /* 006b6562: mov dword ptr [esp + 0x1c], ecx */ W32((u32)(r_esp+0x1cu), r_ecx);
    /* 006b6566: mov eax, dword ptr [eax + edx + 0x20] */ r_eax = R32((u32)(r_eax+r_edx+0x20u));
    /* 006b656a: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 006b656e: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 006b6571: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006b6572: call 0x77a70c */ r_esp -= 4; W32(r_esp, 0x6b6577u); f_0077a70c();
    /* 006b6577: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_006b6578:; BB(0x006b6578);
    /* 006b6578: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b657b: ret  */ FN_RET(0x006b64d8); r_esp += 4; return;
}

void f_006b657c(void) /* sub_6B657C */
{
    FN_ENTER(0x006b657c);
    /* 006b657c: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006b657f: movzx ecx, word ptr [esp + 0x34] */ r_ecx = (u32)R16((u32)(r_esp+0x34u));
    /* 006b6584: mov eax, dword ptr [0xa954ac] */ r_eax = R32((u32)(0xa954acu));
    /* 006b6589: mov edx, dword ptr [0xa954a8] */ r_edx = R32((u32)(0xa954a8u));
    /* 006b658f: mov eax, dword ptr [eax + ecx*4] */ r_eax = R32((u32)(r_eax+r_ecx*4));
    /* 006b6592: mov ecx, edx */ r_ecx = r_edx;
    /* 006b6594: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 006b6596: je 0x6b6634 */ if (fZ) goto L_006b6634;
L_006b659c:; BB(0x006b659c);
    /* 006b659c: movzx ecx, word ptr [eax + edx] */ r_ecx = (u32)R16((u32)(r_eax+r_edx));
    /* 006b65a0: mov word ptr [esp], cx */ W16((u32)(r_esp), (u16)r_ecx);
    /* 006b65a4: movzx ecx, word ptr [eax + edx + 2] */ r_ecx = (u32)R16((u32)(r_eax+r_edx+0x2u));
    /* 006b65a9: mov word ptr [esp + 2], cx */ W16((u32)(r_esp+0x2u), (u16)r_ecx);
    /* 006b65ae: movzx ecx, word ptr [eax + edx + 4] */ r_ecx = (u32)R16((u32)(r_eax+r_edx+0x4u));
    /* 006b65b3: mov word ptr [esp + 4], cx */ W16((u32)(r_esp+0x4u), (u16)r_ecx);
    /* 006b65b8: movzx ecx, word ptr [eax + edx + 6] */ r_ecx = (u32)R16((u32)(r_eax+r_edx+0x6u));
    /* 006b65bd: mov word ptr [esp + 6], cx */ W16((u32)(r_esp+0x6u), (u16)r_ecx);
    /* 006b65c2: mov ecx, dword ptr [eax + edx + 8] */ r_ecx = R32((u32)(r_eax+r_edx+0x8u));
    /* 006b65c6: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 006b65ca: mov ecx, dword ptr [eax + edx + 0xc] */ r_ecx = R32((u32)(r_eax+r_edx+0xcu));
    /* 006b65ce: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 006b65d2: mov ecx, dword ptr [eax + edx + 0x10] */ r_ecx = R32((u32)(r_eax+r_edx+0x10u));
    /* 006b65d6: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 006b65da: movzx ecx, word ptr [eax + edx + 0x14] */ r_ecx = (u32)R16((u32)(r_eax+r_edx+0x14u));
    /* 006b65df: mov word ptr [esp + 0x14], cx */ W16((u32)(r_esp+0x14u), (u16)r_ecx);
    /* 006b65e4: movzx ecx, word ptr [eax + edx + 0x16] */ r_ecx = (u32)R16((u32)(r_eax+r_edx+0x16u));
    /* 006b65e9: mov word ptr [esp + 0x16], cx */ W16((u32)(r_esp+0x16u), (u16)r_ecx);
    /* 006b65ee: movzx ecx, word ptr [eax + edx + 0x18] */ r_ecx = (u32)R16((u32)(r_eax+r_edx+0x18u));
    /* 006b65f3: mov word ptr [esp + 0x18], cx */ W16((u32)(r_esp+0x18u), (u16)r_ecx);
    /* 006b65f8: movzx ecx, word ptr [eax + edx + 0x1a] */ r_ecx = (u32)R16((u32)(r_eax+r_edx+0x1au));
    /* 006b65fd: mov word ptr [esp + 0x1a], cx */ W16((u32)(r_esp+0x1au), (u16)r_ecx);
    /* 006b6602: mov ecx, dword ptr [eax + edx + 0x1c] */ r_ecx = R32((u32)(r_eax+r_edx+0x1cu));
    /* 006b6606: mov dword ptr [esp + 0x1c], ecx */ W32((u32)(r_esp+0x1cu), r_ecx);
    /* 006b660a: mov ecx, dword ptr [eax + edx + 0x20] */ r_ecx = R32((u32)(r_eax+r_edx+0x20u));
    /* 006b660e: mov dword ptr [esp + 0x20], ecx */ W32((u32)(r_esp+0x20u), r_ecx);
    /* 006b6612: mov ecx, dword ptr [eax + edx + 0x24] */ r_ecx = R32((u32)(r_eax+r_edx+0x24u));
    /* 006b6616: mov dword ptr [esp + 0x24], ecx */ W32((u32)(r_esp+0x24u), r_ecx);
    /* 006b661a: mov ecx, dword ptr [eax + edx + 0x28] */ r_ecx = R32((u32)(r_eax+r_edx+0x28u));
    /* 006b661e: mov dword ptr [esp + 0x28], ecx */ W32((u32)(r_esp+0x28u), r_ecx);
    /* 006b6622: mov eax, dword ptr [eax + edx + 0x2c] */ r_eax = R32((u32)(r_eax+r_edx+0x2cu));
    /* 006b6626: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 006b662a: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 006b662d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006b662e: call 0x77a9c4 */ r_esp -= 4; W32(r_esp, 0x6b6633u); f_0077a9c4();
    /* 006b6633: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_006b6634:; BB(0x006b6634);
    /* 006b6634: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b6637: ret  */ FN_RET(0x006b657c); r_esp += 4; return;
}

void f_006b6638(void) /* sub_6B6638 */
{
    FN_ENTER(0x006b6638);
    /* 006b6638: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006b663b: movzx ecx, word ptr [esp + 0x24] */ r_ecx = (u32)R16((u32)(r_esp+0x24u));
    /* 006b6640: mov eax, dword ptr [0xa954ac] */ r_eax = R32((u32)(0xa954acu));
    /* 006b6645: mov edx, dword ptr [0xa954a8] */ r_edx = R32((u32)(0xa954a8u));
    /* 006b664b: mov eax, dword ptr [eax + ecx*4] */ r_eax = R32((u32)(r_eax+r_ecx*4));
    /* 006b664e: mov ecx, edx */ r_ecx = r_edx;
    /* 006b6650: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 006b6652: je 0x6b66c0 */ if (fZ) goto L_006b66c0;
L_006b6654:; BB(0x006b6654);
    /* 006b6654: movzx ecx, word ptr [eax + edx] */ r_ecx = (u32)R16((u32)(r_eax+r_edx));
    /* 006b6658: mov word ptr [esp], cx */ W16((u32)(r_esp), (u16)r_ecx);
    /* 006b665c: movzx ecx, word ptr [eax + edx + 2] */ r_ecx = (u32)R16((u32)(r_eax+r_edx+0x2u));
    /* 006b6661: mov word ptr [esp + 2], cx */ W16((u32)(r_esp+0x2u), (u16)r_ecx);
    /* 006b6666: movzx ecx, word ptr [eax + edx + 4] */ r_ecx = (u32)R16((u32)(r_eax+r_edx+0x4u));
    /* 006b666b: mov word ptr [esp + 4], cx */ W16((u32)(r_esp+0x4u), (u16)r_ecx);
    /* 006b6670: movzx ecx, word ptr [eax + edx + 6] */ r_ecx = (u32)R16((u32)(r_eax+r_edx+0x6u));
    /* 006b6675: mov word ptr [esp + 6], cx */ W16((u32)(r_esp+0x6u), (u16)r_ecx);
    /* 006b667a: movzx ecx, word ptr [eax + edx + 8] */ r_ecx = (u32)R16((u32)(r_eax+r_edx+0x8u));
    /* 006b667f: mov word ptr [esp + 8], cx */ W16((u32)(r_esp+0x8u), (u16)r_ecx);
    /* 006b6684: movzx ecx, word ptr [eax + edx + 0xa] */ r_ecx = (u32)R16((u32)(r_eax+r_edx+0xau));
    /* 006b6689: mov word ptr [esp + 0xa], cx */ W16((u32)(r_esp+0xau), (u16)r_ecx);
    /* 006b668e: mov ecx, dword ptr [eax + edx + 0xc] */ r_ecx = R32((u32)(r_eax+r_edx+0xcu));
    /* 006b6692: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 006b6696: mov ecx, dword ptr [eax + edx + 0x10] */ r_ecx = R32((u32)(r_eax+r_edx+0x10u));
    /* 006b669a: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 006b669e: mov ecx, dword ptr [eax + edx + 0x14] */ r_ecx = R32((u32)(r_eax+r_edx+0x14u));
    /* 006b66a2: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 006b66a6: mov ecx, dword ptr [eax + edx + 0x18] */ r_ecx = R32((u32)(r_eax+r_edx+0x18u));
    /* 006b66aa: mov dword ptr [esp + 0x18], ecx */ W32((u32)(r_esp+0x18u), r_ecx);
    /* 006b66ae: mov eax, dword ptr [eax + edx + 0x1c] */ r_eax = R32((u32)(r_eax+r_edx+0x1cu));
    /* 006b66b2: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 006b66b6: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 006b66b9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006b66ba: call 0x77ad04 */ r_esp -= 4; W32(r_esp, 0x6b66bfu); f_0077ad04();
    /* 006b66bf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_006b66c0:; BB(0x006b66c0);
    /* 006b66c0: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b66c3: ret  */ FN_RET(0x006b6638); r_esp += 4; return;
}

void f_006b66c4(void) /* sub_6B66C4 */
{
    FN_ENTER(0x006b66c4);
    /* 006b66c4: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006b66c7: movzx ecx, word ptr [esp + 0x34] */ r_ecx = (u32)R16((u32)(r_esp+0x34u));
    /* 006b66cc: mov eax, dword ptr [0xa954ac] */ r_eax = R32((u32)(0xa954acu));
    /* 006b66d1: mov edx, dword ptr [0xa954a8] */ r_edx = R32((u32)(0xa954a8u));
    /* 006b66d7: mov eax, dword ptr [eax + ecx*4] */ r_eax = R32((u32)(r_eax+r_ecx*4));
    /* 006b66da: mov ecx, edx */ r_ecx = r_edx;
    /* 006b66dc: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 006b66de: je 0x6b6748 */ if (fZ) goto L_006b6748;
L_006b66e0:; BB(0x006b66e0);
    /* 006b66e0: mov ecx, dword ptr [eax + edx] */ r_ecx = R32((u32)(r_eax+r_edx));
    /* 006b66e3: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 006b66e6: mov ecx, dword ptr [eax + edx + 4] */ r_ecx = R32((u32)(r_eax+r_edx+0x4u));
    /* 006b66ea: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 006b66ee: mov ecx, dword ptr [eax + edx + 8] */ r_ecx = R32((u32)(r_eax+r_edx+0x8u));
    /* 006b66f2: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 006b66f6: mov ecx, dword ptr [eax + edx + 0xc] */ r_ecx = R32((u32)(r_eax+r_edx+0xcu));
    /* 006b66fa: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 006b66fe: mov ecx, dword ptr [eax + edx + 0x10] */ r_ecx = R32((u32)(r_eax+r_edx+0x10u));
    /* 006b6702: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 006b6706: mov ecx, dword ptr [eax + edx + 0x14] */ r_ecx = R32((u32)(r_eax+r_edx+0x14u));
    /* 006b670a: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 006b670e: mov ecx, dword ptr [eax + edx + 0x18] */ r_ecx = R32((u32)(r_eax+r_edx+0x18u));
    /* 006b6712: mov dword ptr [esp + 0x18], ecx */ W32((u32)(r_esp+0x18u), r_ecx);
    /* 006b6716: mov ecx, dword ptr [eax + edx + 0x1c] */ r_ecx = R32((u32)(r_eax+r_edx+0x1cu));
    /* 006b671a: mov dword ptr [esp + 0x1c], ecx */ W32((u32)(r_esp+0x1cu), r_ecx);
    /* 006b671e: mov ecx, dword ptr [eax + edx + 0x20] */ r_ecx = R32((u32)(r_eax+r_edx+0x20u));
    /* 006b6722: mov dword ptr [esp + 0x20], ecx */ W32((u32)(r_esp+0x20u), r_ecx);
    /* 006b6726: mov ecx, dword ptr [eax + edx + 0x24] */ r_ecx = R32((u32)(r_eax+r_edx+0x24u));
    /* 006b672a: mov dword ptr [esp + 0x24], ecx */ W32((u32)(r_esp+0x24u), r_ecx);
    /* 006b672e: mov ecx, dword ptr [eax + edx + 0x28] */ r_ecx = R32((u32)(r_eax+r_edx+0x28u));
    /* 006b6732: mov dword ptr [esp + 0x28], ecx */ W32((u32)(r_esp+0x28u), r_ecx);
    /* 006b6736: mov eax, dword ptr [eax + edx + 0x2c] */ r_eax = R32((u32)(r_eax+r_edx+0x2cu));
    /* 006b673a: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 006b673e: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 006b6741: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006b6742: call 0x77af50 */ r_esp -= 4; W32(r_esp, 0x6b6747u); f_0077af50();
    /* 006b6747: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_006b6748:; BB(0x006b6748);
    /* 006b6748: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b674b: ret  */ FN_RET(0x006b66c4); r_esp += 4; return;
}

void f_006b674c(void)
{
    FN_ENTER(0x006b674c);
    /* 006b674c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006b674d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006b674e: movzx edx, byte ptr [esp + 0x10] */ r_edx = (u32)R8((u32)(r_esp+0x10u));
    /* 006b6753: mov ecx, dword ptr [0xa954b0] */ r_ecx = R32((u32)(0xa954b0u));
    /* 006b6759: mov dword ptr [ecx + edx*4], 0 */ W32((u32)(r_ecx+r_edx*4), 0x0u);
    /* 006b6760: mov eax, dword ptr [0xa95df0] */ r_eax = R32((u32)(0xa95df0u));
    /* 006b6765: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b6767: je 0x6b6795 */ if (fZ) goto L_006b6795;
L_006b6769:; BB(0x006b6769);
    /* 006b6769: movzx edi, byte ptr [esp + 0xc] */ r_edi = (u32)R8((u32)(r_esp+0xcu));
    /* 006b676e: mov ecx, dword ptr [ecx + edi*4] */ r_ecx = R32((u32)(r_ecx+r_edi*4));
    /* 006b6771: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b6773: jl 0x6b6795 */ if ((fS!=fO)) goto L_006b6795;
L_006b6775:; BB(0x006b6775);
    /* 006b6775: cmp ecx, 0xff */ {  u32 a = r_ecx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006b677b: jge 0x6b6795 */ if ((fS==fO)) goto L_006b6795;
L_006b677d:; BB(0x006b677d);
    /* 006b677d: lea eax, [eax + ecx + 0x10] */ r_eax = (u32)(r_eax+r_ecx+0x10u);
    /* 006b6781: movzx ecx, word ptr [eax] */ r_ecx = (u32)R16((u32)(r_eax));
    /* 006b6784: mov word ptr [esp], cx */ W16((u32)(r_esp), (u16)r_ecx);
    /* 006b6788: mov ecx, dword ptr [0xa954b0] */ r_ecx = R32((u32)(0xa954b0u));
    /* 006b678e: movsx eax, word ptr [esp] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp));
    /* 006b6792: mov dword ptr [ecx + edx*4], eax */ W32((u32)(r_ecx+r_edx*4), r_eax);
L_006b6795:; BB(0x006b6795);
    /* 006b6795: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b6796: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006b6797: ret  */ FN_RET(0x006b674c); r_esp += 4; return;
}

void f_006b6798(void)
{
    FN_ENTER(0x006b6798);
    /* 006b6798: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006b6799: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006b679a: movzx edx, byte ptr [esp + 0x10] */ r_edx = (u32)R8((u32)(r_esp+0x10u));
    /* 006b679f: mov ecx, dword ptr [0xa954b0] */ r_ecx = R32((u32)(0xa954b0u));
    /* 006b67a5: mov dword ptr [ecx + edx*4], 0 */ W32((u32)(r_ecx+r_edx*4), 0x0u);
    /* 006b67ac: mov eax, dword ptr [0xa95df0] */ r_eax = R32((u32)(0xa95df0u));
    /* 006b67b1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b67b3: je 0x6b67de */ if (fZ) goto L_006b67de;
L_006b67b5:; BB(0x006b67b5);
    /* 006b67b5: movzx edi, byte ptr [esp + 0xc] */ r_edi = (u32)R8((u32)(r_esp+0xcu));
    /* 006b67ba: mov ecx, dword ptr [ecx + edi*4] */ r_ecx = R32((u32)(r_ecx+r_edi*4));
    /* 006b67bd: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b67bf: jl 0x6b67de */ if ((fS!=fO)) goto L_006b67de;
L_006b67c1:; BB(0x006b67c1);
    /* 006b67c1: cmp ecx, 0xfd */ {  u32 a = r_ecx; u32 b = 0xfdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006b67c7: jge 0x6b67de */ if ((fS==fO)) goto L_006b67de;
L_006b67c9:; BB(0x006b67c9);
    /* 006b67c9: lea eax, [eax + ecx + 0x10] */ r_eax = (u32)(r_eax+r_ecx+0x10u);
    /* 006b67cd: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 006b67cf: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 006b67d2: mov ecx, dword ptr [0xa954b0] */ r_ecx = R32((u32)(0xa954b0u));
    /* 006b67d8: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 006b67db: mov dword ptr [ecx + edx*4], eax */ W32((u32)(r_ecx+r_edx*4), r_eax);
L_006b67de:; BB(0x006b67de);
    /* 006b67de: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b67df: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006b67e0: ret  */ FN_RET(0x006b6798); r_esp += 4; return;
}

void f_006b67e4(void)
{
    FN_ENTER(0x006b67e4);
    /* 006b67e4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006b67e5: movzx edi, byte ptr [esp + 8] */ r_edi = (u32)R8((u32)(r_esp+0x8u));
    /* 006b67ea: mov edx, dword ptr [0xa954b0] */ r_edx = R32((u32)(0xa954b0u));
    /* 006b67f0: movzx ecx, byte ptr [esp + 0xc] */ r_ecx = (u32)R8((u32)(r_esp+0xcu));
    /* 006b67f5: mov eax, dword ptr [edx + edi*4] */ r_eax = R32((u32)(r_edx+r_edi*4));
    /* 006b67f8: mov ecx, dword ptr [edx + ecx*4] */ r_ecx = R32((u32)(r_edx+r_ecx*4));
    /* 006b67fb: shl eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r; fC = (c <= 32) ? ((a >> (32 - c)) & 1) : 0; fO = ((r >> 31) & 1) ^ fC; fZ = (r == 0); fS = (r >> 31) & 1; fP = !__builtin_parity(r & 0xffu); } }
    /* 006b67fd: mov dword ptr [edx + edi*4], eax */ W32((u32)(r_edx+r_edi*4), r_eax);
    /* 006b6800: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006b6801: ret  */ FN_RET(0x006b67e4); r_esp += 4; return;
}

void f_006b6804(void)
{
    FN_ENTER(0x006b6804);
    /* 006b6804: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006b6805: movzx edi, byte ptr [esp + 8] */ r_edi = (u32)R8((u32)(r_esp+0x8u));
    /* 006b680a: mov edx, dword ptr [0xa954b0] */ r_edx = R32((u32)(0xa954b0u));
    /* 006b6810: movzx ecx, byte ptr [esp + 0xc] */ r_ecx = (u32)R8((u32)(r_esp+0xcu));
    /* 006b6815: mov eax, dword ptr [edx + edi*4] */ r_eax = R32((u32)(r_edx+r_edi*4));
    /* 006b6818: mov ecx, dword ptr [edx + ecx*4] */ r_ecx = R32((u32)(r_edx+r_ecx*4));
    /* 006b681b: sar eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r; fC = ((i32)a >> ((c > 31 ? 31 : c - 1))) & 1; fO = 0; fZ = (r == 0); fS = (r >> 31) & 1; fP = !__builtin_parity(r & 0xffu); } }
    /* 006b681d: mov dword ptr [edx + edi*4], eax */ W32((u32)(r_edx+r_edi*4), r_eax);
    /* 006b6820: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006b6821: ret  */ FN_RET(0x006b6804); r_esp += 4; return;
}

void f_006b6824(void) /* sub_6B6824 */
{
    FN_ENTER(0x006b6824);
    /* 006b6824: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006b6825: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006b6826: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006b6829: movzx eax, byte ptr [esp + 0x34] */ r_eax = (u32)R8((u32)(r_esp+0x34u));
    /* 006b682e: mov ecx, dword ptr [0xa954b0] */ r_ecx = R32((u32)(0xa954b0u));
    /* 006b6834: mov edi, dword ptr [ecx + eax*4] */ r_edi = R32((u32)(r_ecx+r_eax*4));
    /* 006b6837: lea edx, [eax + 1] */ r_edx = (u32)(r_eax+0x1u);
    /* 006b683a: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 006b683d: mov esi, dword ptr [ecx + edx*4] */ r_esi = R32((u32)(r_ecx+r_edx*4));
    /* 006b6840: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x6b6845u); f_008587a5();
    /* 006b6845: mov edx, dword ptr [0xa954b0] */ r_edx = R32((u32)(0xa954b0u));
    /* 006b684b: movzx ecx, byte ptr [esp + 0x38] */ r_ecx = (u32)R8((u32)(r_esp+0x38u));
    /* 006b6850: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 006b6853: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 006b6856: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006b685a: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 006b685e: fdiv dword ptr [0x969944] */ ST(0) = ST(0) / R_F32((u32)(0x969944u));
    /* 006b6864: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 006b6866: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 006b686a: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 006b686f: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006b6874: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 006b6878: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 006b687c: fistp dword ptr [esp + 0x20] */ W32((u32)(r_esp+0x20u), (u32)fx_int32(ST(0))); FPOP();
    /* 006b6880: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 006b6884: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 006b6888: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006b688a: jg 0x6b688e */ if ((!fZ&&fS==fO)) goto L_006b688e;
L_006b688c:; BB(0x006b688c);
    /* 006b688c: mov edi, eax */ r_edi = r_eax;
L_006b688e:; BB(0x006b688e);
    /* 006b688e: mov dword ptr [edx + ecx*4], edi */ W32((u32)(r_edx+r_ecx*4), r_edi);
    /* 006b6891: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b6894: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006b6895: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006b6896: ret  */ FN_RET(0x006b6824); r_esp += 4; return;
}

void f_006b6898(void)
{
    FN_ENTER(0x006b6898);
    /* 006b6898: call 0x5c7a7c */ r_esp -= 4; W32(r_esp, 0x6b689du); f_005c7a7c();
    /* 006b689d: mov ecx, dword ptr [0xa95aa8] */ r_ecx = R32((u32)(0xa95aa8u));
    /* 006b68a3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b68a5: je 0x6b68ac */ if (fZ) goto L_006b68ac;
L_006b68a7:; BB(0x006b68a7);
    /* 006b68a7: call 0x6bc2d4 */ r_esp -= 4; W32(r_esp, 0x6b68acu); f_006bc2d4();
L_006b68ac:; BB(0x006b68ac);
    /* 006b68ac: push dword ptr [0xaca384] */ { u32 v = R32((u32)(0xaca384u)); r_esp -= 4; W32(r_esp, v); }
    /* 006b68b2: call 0x6bc9d8 */ r_esp -= 4; W32(r_esp, 0x6b68b7u); f_006bc9d8();
    /* 006b68b7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b68b8: call 0x80ed84 */ r_esp -= 4; W32(r_esp, 0x6b68bdu); f_0080ed84();
    /* 006b68bd: call 0x811918 */ r_esp -= 4; W32(r_esp, 0x6b68c2u); f_00811918();
    /* 006b68c2: call 0x80d2cc */ r_esp -= 4; W32(r_esp, 0x6b68c7u); f_0080d2cc();
    /* 006b68c7: call 0x816fe0 */ r_esp -= 4; W32(r_esp, 0x6b68ccu); f_00816fe0();
    /* 006b68cc: call 0x8059a8 */ r_esp -= 4; W32(r_esp, 0x6b68d1u); f_008059a8();
    /* 006b68d1: call 0x4db84c */ r_esp -= 4; W32(r_esp, 0x6b68d6u); f_004db84c();
    /* 006b68d6: ret  */ FN_RET(0x006b6898); r_esp += 4; return;
}

void f_006b68d8(void)
{
    FN_ENTER(0x006b68d8);
    /* 006b68d8: call 0x4db7d4 */ r_esp -= 4; W32(r_esp, 0x6b68ddu); f_004db7d4();
    /* 006b68dd: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006b68e0: je 0x6b690f */ if (fZ) goto L_006b690f;
L_006b68e2:; BB(0x006b68e2);
    /* 006b68e2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b68e4: jne 0x6b68f8 */ if (!fZ) goto L_006b68f8;
L_006b68e6:; BB(0x006b68e6);
    /* 006b68e6: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b68eb: movzx edx, byte ptr [esp + 4] */ r_edx = (u32)R8((u32)(r_esp+0x4u));
    /* 006b68f0: mov dword ptr [eax + edx*4], 1 */ W32((u32)(r_eax+r_edx*4), 0x1u);
    /* 006b68f7: ret  */ FN_RET(0x006b68d8); r_esp += 4; return;
L_006b68f8:; BB(0x006b68f8);
    /* 006b68f8: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006b68fb: jne 0x6b6920 */ if (!fZ) goto L_006b6920;
L_006b68fd:; BB(0x006b68fd);
    /* 006b68fd: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b6902: movzx edx, byte ptr [esp + 4] */ r_edx = (u32)R8((u32)(r_esp+0x4u));
    /* 006b6907: mov dword ptr [eax + edx*4], 2 */ W32((u32)(r_eax+r_edx*4), 0x2u);
    /* 006b690e: ret  */ FN_RET(0x006b68d8); r_esp += 4; return;
L_006b690f:; BB(0x006b690f);
    /* 006b690f: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b6914: movzx edx, byte ptr [esp + 4] */ r_edx = (u32)R8((u32)(r_esp+0x4u));
    /* 006b6919: mov dword ptr [eax + edx*4], 0 */ W32((u32)(r_eax+r_edx*4), 0x0u);
L_006b6920:; BB(0x006b6920);
    /* 006b6920: ret  */ FN_RET(0x006b68d8); r_esp += 4; return;
}

void f_006b6917(void)
{
    FN_ENTER(0x006b6917);
    /* 006b6917: and al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b6919: mov dword ptr [eax + edx*4], 0 */ W32((u32)(r_eax+r_edx*4), 0x0u);
    /* 006b6920: ret  */ FN_RET(0x006b6917); r_esp += 4; return;
}

void f_006b6924(void)
{
    FN_ENTER(0x006b6924);
    /* 006b6924: call 0x4db804 */ r_esp -= 4; W32(r_esp, 0x6b6929u); f_004db804();
    /* 006b6929: ret  */ FN_RET(0x006b6924); r_esp += 4; return;
}

void f_006b692c(void)
{
    FN_ENTER(0x006b692c);
    /* 006b692c: mov eax, dword ptr [0xa954cc] */ r_eax = R32((u32)(0xa954ccu));
    /* 006b6931: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b6933: jb 0x6b6946 */ if (fC) goto L_006b6946;
L_006b6935:; BB(0x006b6935);
    /* 006b6935: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006b6938: jae 0x6b6946 */ if (!fC) goto L_006b6946;
L_006b693a:; BB(0x006b693a);
    /* 006b693a: mov eax, dword ptr [eax*4 + 0x9697f8] */ r_eax = R32((u32)(r_eax*4+0x9697f8u));
    /* 006b6941: mov byte ptr [0xa95527], al */ W8((u32)(0xa95527u), (u8)r_eax);
L_006b6946:; BB(0x006b6946);
    /* 006b6946: ret  */ FN_RET(0x006b692c); r_esp += 4; return;
}

void f_006b6948(void)
{
    FN_ENTER(0x006b6948);
    /* 006b6948: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006b6949: movzx edx, byte ptr [esp + 8] */ r_edx = (u32)R8((u32)(r_esp+0x8u));
    /* 006b694e: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b6953: push dword ptr [eax + edx*4] */ { u32 v = R32((u32)(r_eax+r_edx*4)); r_esp -= 4; W32(r_esp, v); }
    /* 006b6956: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6b695bu); f_0068d5a8();
    /* 006b695b: mov esi, eax */ r_esi = r_eax;
    /* 006b695d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b6960: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b6962: je 0x6b6972 */ if (fZ) goto L_006b6972;
L_006b6964:; BB(0x006b6964);
    /* 006b6964: mov ecx, esi */ r_ecx = r_esi;
    /* 006b6966: call 0x688f70 */ r_esp -= 4; W32(r_esp, 0x6b696bu); f_00688f70();
    /* 006b696b: mov ecx, esi */ r_ecx = r_esi;
    /* 006b696d: call 0x688fa0 */ r_esp -= 4; W32(r_esp, 0x6b6972u); f_00688fa0();
L_006b6972:; BB(0x006b6972);
    /* 006b6972: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006b6973: ret  */ FN_RET(0x006b6948); r_esp += 4; return;
}

void f_006b6974(void)
{
    FN_ENTER(0x006b6974);
    /* 006b6974: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006b6976: call 0x4db8b4 */ r_esp -= 4; W32(r_esp, 0x6b697bu); f_004db8b4();
    /* 006b697b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b697c: ret  */ FN_RET(0x006b6974); r_esp += 4; return;
}

void f_006b6980(void)
{
    FN_ENTER(0x006b6980);
    /* 006b6980: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006b6982: call 0x4db8b4 */ r_esp -= 4; W32(r_esp, 0x6b6987u); f_004db8b4();
    /* 006b6987: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b6988: ret  */ FN_RET(0x006b6980); r_esp += 4; return;
}

void f_006b698c(void)
{
    FN_ENTER(0x006b698c);
    /* 006b698c: call 0x4db8e0 */ r_esp -= 4; W32(r_esp, 0x6b6991u); f_004db8e0();
    /* 006b6991: mov edx, eax */ r_edx = r_eax;
    /* 006b6993: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b6998: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b699a: je 0x6b69a9 */ if (fZ) goto L_006b69a9;
L_006b699c:; BB(0x006b699c);
    /* 006b699c: movzx edx, byte ptr [esp + 4] */ r_edx = (u32)R8((u32)(r_esp+0x4u));
    /* 006b69a1: mov dword ptr [eax + edx*4], 1 */ W32((u32)(r_eax+r_edx*4), 0x1u);
    /* 006b69a8: ret  */ FN_RET(0x006b698c); r_esp += 4; return;
L_006b69a9:; BB(0x006b69a9);
    /* 006b69a9: movzx edx, byte ptr [esp + 4] */ r_edx = (u32)R8((u32)(r_esp+0x4u));
    /* 006b69ae: mov dword ptr [eax + edx*4], 0 */ W32((u32)(r_eax+r_edx*4), 0x0u);
    /* 006b69b5: ret  */ FN_RET(0x006b698c); r_esp += 4; return;
}

void f_006b69b8(void)
{
    FN_ENTER(0x006b69b8);
    /* 006b69b8: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x6b69bdu); f_006dc358();
    /* 006b69bd: mov dword ptr [0xa95580], eax */ W32((u32)(0xa95580u), r_eax);
    /* 006b69c2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b69c4: jne 0x6b69d0 */ if (!fZ) goto L_006b69d0;
L_006b69c6:; BB(0x006b69c6);
    /* 006b69c6: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x6b69cbu); f_006dc358();
    /* 006b69cb: mov dword ptr [0xa95580], eax */ W32((u32)(0xa95580u), r_eax);
L_006b69d0:; BB(0x006b69d0);
    /* 006b69d0: ret  */ FN_RET(0x006b69b8); r_esp += 4; return;
}

void f_006b69d4(void) /* sub_6B69D4 */
{
    FN_ENTER(0x006b69d4);
    /* 006b69d4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006b69d5: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006b69d8: movzx edi, byte ptr [esp + 0x44] */ r_edi = (u32)R8((u32)(r_esp+0x44u));
    /* 006b69dd: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 006b69e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b69e1: call 0x80ca60 */ r_esp -= 4; W32(r_esp, 0x6b69e6u); f_0080ca60();
    /* 006b69e6: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b69eb: mov dword ptr [esp + 0x1c], 0 */ W32((u32)(r_esp+0x1cu), 0x0u);
    /* 006b69f3: lea edx, [edi + 1] */ r_edx = (u32)(r_edi+0x1u);
    /* 006b69f6: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 006b69f9: mov dword ptr [esp + 0x20], 1 */ W32((u32)(r_esp+0x20u), 0x1u);
    /* 006b6a01: fild dword ptr [eax + edi*4] */ FPUSH((long double)(i32)R32((u32)(r_eax+r_edi*4)));
    /* 006b6a04: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 006b6a08: fild dword ptr [eax + edx*4] */ FPUSH((long double)(i32)R32((u32)(r_eax+r_edx*4)));
    /* 006b6a0b: lea ecx, [edi + 2] */ r_ecx = (u32)(r_edi+0x2u);
    /* 006b6a0e: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 006b6a12: movzx ecx, cl */ r_ecx = (u32)(u8)r_ecx;
    /* 006b6a15: fild dword ptr [eax + ecx*4] */ FPUSH((long double)(i32)R32((u32)(r_eax+r_ecx*4)));
    /* 006b6a18: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 006b6a1c: lea edx, [edi + 3] */ r_edx = (u32)(r_edi+0x3u);
    /* 006b6a1f: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 006b6a22: fild dword ptr [eax + edx*4] */ FPUSH((long double)(i32)R32((u32)(r_eax+r_edx*4)));
    /* 006b6a25: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 006b6a29: lea edi, [edi + 4] */ r_edi = (u32)(r_edi+0x4u);
    /* 006b6a2c: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 006b6a32: mov eax, dword ptr [eax + edi*4] */ r_eax = R32((u32)(r_eax+r_edi*4));
    /* 006b6a35: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 006b6a39: lea eax, [esp + 4] */ r_eax = (u32)(r_esp+0x4u);
    /* 006b6a3d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b6a3e: call 0x615e70 */ r_esp -= 4; W32(r_esp, 0x6b6a43u); f_00615e70();
    /* 006b6a43: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b6a46: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006b6a47: ret  */ FN_RET(0x006b69d4); r_esp += 4; return;
}

void f_006b6a48(void) /* sub_6B6A48 */
{
    FN_ENTER(0x006b6a48);
    /* 006b6a48: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006b6a49: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006b6a4a: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006b6a4d: movzx ebx, byte ptr [esp + 0x48] */ r_ebx = (u32)R8((u32)(r_esp+0x48u));
    /* 006b6a52: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 006b6a55: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b6a56: call 0x80ca60 */ r_esp -= 4; W32(r_esp, 0x6b6a5bu); f_0080ca60();
    /* 006b6a5b: mov ecx, dword ptr [0xa954b0] */ r_ecx = R32((u32)(0xa954b0u));
    /* 006b6a61: fild dword ptr [ecx + ebx*4] */ FPUSH((long double)(i32)R32((u32)(r_ecx+r_ebx*4)));
    /* 006b6a64: mov edx, dword ptr [0xa954a8] */ r_edx = R32((u32)(0xa954a8u));
    /* 006b6a6a: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 006b6a6e: lea edi, [ebx + 1] */ r_edi = (u32)(r_ebx+0x1u);
    /* 006b6a71: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 006b6a77: fild dword ptr [ecx + edi*4] */ FPUSH((long double)(i32)R32((u32)(r_ecx+r_edi*4)));
    /* 006b6a7a: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 006b6a7e: lea eax, [ebx + 2] */ r_eax = (u32)(r_ebx+0x2u);
    /* 006b6a81: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006b6a84: fild dword ptr [ecx + eax*4] */ FPUSH((long double)(i32)R32((u32)(r_ecx+r_eax*4)));
    /* 006b6a87: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 006b6a8b: lea eax, [ebx + 3] */ r_eax = (u32)(r_ebx+0x3u);
    /* 006b6a8e: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006b6a91: fild dword ptr [ecx + eax*4] */ FPUSH((long double)(i32)R32((u32)(r_ecx+r_eax*4)));
    /* 006b6a94: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 006b6a98: lea eax, [ebx + 4] */ r_eax = (u32)(r_ebx+0x4u);
    /* 006b6a9b: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006b6a9e: mov eax, dword ptr [ecx + eax*4] */ r_eax = R32((u32)(r_ecx+r_eax*4));
    /* 006b6aa1: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 006b6aa5: lea eax, [ebx + 5] */ r_eax = (u32)(r_ebx+0x5u);
    /* 006b6aa8: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006b6aab: mov eax, dword ptr [ecx + eax*4] */ r_eax = R32((u32)(r_ecx+r_eax*4));
    /* 006b6aae: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 006b6ab2: lea eax, [ebx + 6] */ r_eax = (u32)(r_ebx+0x6u);
    /* 006b6ab5: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006b6ab8: mov eax, dword ptr [ecx + eax*4] */ r_eax = R32((u32)(r_ecx+r_eax*4));
    /* 006b6abb: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
    /* 006b6abf: lea eax, [ebx + 7] */ r_eax = (u32)(r_ebx+0x7u);
    /* 006b6ac2: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006b6ac5: movzx edi, word ptr [ecx + eax*4] */ r_edi = (u32)R16((u32)(r_ecx+r_eax*4));
    /* 006b6ac9: mov eax, dword ptr [0xa954ac] */ r_eax = R32((u32)(0xa954acu));
    /* 006b6ace: mov edi, dword ptr [eax + edi*4] */ r_edi = R32((u32)(r_eax+r_edi*4));
    /* 006b6ad1: add edi, dword ptr [0xa954a8] */ {  u32 a = r_edi; u32 b = R32((u32)(0xa954a8u)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006b6ad7: mov dword ptr [0xa8f178], edi */ W32((u32)(0xa8f178u), r_edi);
    /* 006b6add: lea edi, [ebx + 8] */ r_edi = (u32)(r_ebx+0x8u);
    /* 006b6ae0: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 006b6ae6: movzx edi, word ptr [ecx + edi*4] */ r_edi = (u32)R16((u32)(r_ecx+r_edi*4));
    /* 006b6aea: mov edi, dword ptr [eax + edi*4] */ r_edi = R32((u32)(r_eax+r_edi*4));
    /* 006b6aed: add edi, dword ptr [0xa954a8] */ {  u32 a = r_edi; u32 b = R32((u32)(0xa954a8u)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006b6af3: mov dword ptr [0xa8f17c], edi */ W32((u32)(0xa8f17cu), r_edi);
    /* 006b6af9: lea ebx, [ebx + 9] */ r_ebx = (u32)(r_ebx+0x9u);
    /* 006b6afc: movzx ebx, bl */ r_ebx = (u32)(u8)r_ebx;
    /* 006b6aff: movzx ecx, word ptr [ecx + ebx*4] */ r_ecx = (u32)R16((u32)(r_ecx+r_ebx*4));
    /* 006b6b03: add edx, dword ptr [eax + ecx*4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+r_ecx*4)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006b6b06: mov dword ptr [0xa8f180], edx */ W32((u32)(0xa8f180u), r_edx);
    /* 006b6b0c: lea eax, [esp + 4] */ r_eax = (u32)(r_esp+0x4u);
    /* 006b6b10: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b6b11: call 0x63998c */ r_esp -= 4; W32(r_esp, 0x6b6b16u); f_0063998c();
    /* 006b6b16: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006b6b18: mov dword ptr [0xa8f178], eax */ W32((u32)(0xa8f178u), r_eax);
    /* 006b6b1d: mov dword ptr [0xa8f17c], eax */ W32((u32)(0xa8f17cu), r_eax);
    /* 006b6b22: mov dword ptr [0xa8f180], eax */ W32((u32)(0xa8f180u), r_eax);
    /* 006b6b27: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b6b2a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006b6b2b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006b6b2c: ret  */ FN_RET(0x006b6a48); r_esp += 4; return;
}

void f_006b6b30(void) /* sub_6B6B30 */
{
    FN_ENTER(0x006b6b30);
    /* 006b6b30: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006b6b31: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006b6b32: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006b6b35: movzx edx, byte ptr [esp + 0x1c] */ r_edx = (u32)R8((u32)(r_esp+0x1cu));
    /* 006b6b3a: movzx ebp, byte ptr [esp + 0x20] */ r_ebp = (u32)R8((u32)(r_esp+0x20u));
    /* 006b6b3f: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b6b44: push dword ptr [eax + edx*4] */ { u32 v = R32((u32)(r_eax+r_edx*4)); r_esp -= 4; W32(r_esp, v); }
    /* 006b6b47: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6b6b4cu); f_0068d5a8();
    /* 006b6b4c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b6b4d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b6b4f: je 0x6b6ba9 */ if (fZ) goto L_006b6ba9;
L_006b6b51:; BB(0x006b6b51);
    /* 006b6b51: movsx edx, word ptr [eax + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x32cu));
    /* 006b6b58: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b6b5b: je 0x6b6ba9 */ if (fZ) goto L_006b6ba9;
L_006b6b5d:; BB(0x006b6b5d);
    /* 006b6b5d: mov ecx, dword ptr [0xa954b0] */ r_ecx = R32((u32)(0xa954b0u));
    /* 006b6b63: fild dword ptr [ecx + ebp*4] */ FPUSH((long double)(i32)R32((u32)(r_ecx+r_ebp*4)));
    /* 006b6b66: lea edx, [ebp + 1] */ r_edx = (u32)(r_ebp+0x1u);
    /* 006b6b69: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 006b6b6c: mov edx, dword ptr [ecx + edx*4] */ r_edx = R32((u32)(r_ecx+r_edx*4));
    /* 006b6b6f: lea esi, [ebp + 2] */ r_esi = (u32)(r_ebp+0x2u);
    /* 006b6b72: and esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 006b6b78: mov esi, dword ptr [ecx + esi*4] */ r_esi = R32((u32)(r_ecx+r_esi*4));
    /* 006b6b7b: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006b6b7d: jle 0x6b6b91 */ if ((fZ||fS!=fO)) goto L_006b6b91;
L_006b6b7f:; BB(0x006b6b7f);
    /* 006b6b7f: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 006b6b82: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 006b6b85: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 006b6b89: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 006b6b8d: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 006b6b8f: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
L_006b6b91:; BB(0x006b6b91);
    /* 006b6b91: fst dword ptr [eax + 0x690] */ W_F32((u32)(r_eax+0x690u), ST(0));
    /* 006b6b97: fst dword ptr [eax + 0x69c] */ W_F32((u32)(r_eax+0x69cu), ST(0));
    /* 006b6b9d: fst dword ptr [eax + 0x698] */ W_F32((u32)(r_eax+0x698u), ST(0));
    /* 006b6ba3: fstp dword ptr [eax + 0x694] */ W_F32((u32)(r_eax+0x694u), ST(0)); FPOP();
L_006b6ba9:; BB(0x006b6ba9);
    /* 006b6ba9: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b6bac: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006b6bad: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006b6bae: ret  */ FN_RET(0x006b6b30); r_esp += 4; return;
}

void f_006b6bb0(void)
{
    FN_ENTER(0x006b6bb0);
    /* 006b6bb0: mov eax, dword ptr [0xa954cc] */ r_eax = R32((u32)(0xa954ccu));
    /* 006b6bb5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b6bb7: jb 0x6b6bc4 */ if (fC) goto L_006b6bc4;
L_006b6bb9:; BB(0x006b6bb9);
    /* 006b6bb9: cmp eax, 0x1d */ {  u32 a = r_eax; u32 b = 0x1du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006b6bbc: ja 0x6b6bc4 */ if ((!fC&&!fZ)) goto L_006b6bc4;
L_006b6bbe:; BB(0x006b6bbe);
    /* 006b6bbe: mov word ptr [0xa9553c], ax */ W16((u32)(0xa9553cu), (u16)r_eax);
L_006b6bc4:; BB(0x006b6bc4);
    /* 006b6bc4: ret  */ FN_RET(0x006b6bb0); r_esp += 4; return;
}

void f_006b6bc8(void)
{
    FN_ENTER(0x006b6bc8);
    /* 006b6bc8: movzx ecx, byte ptr [esp + 4] */ r_ecx = (u32)R8((u32)(r_esp+0x4u));
    /* 006b6bcd: mov edx, dword ptr [0xa954b0] */ r_edx = R32((u32)(0xa954b0u));
    /* 006b6bd3: mov eax, dword ptr [0xa447a0] */ r_eax = R32((u32)(0xa447a0u));
    /* 006b6bd8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b6bda: je 0x6b6be4 */ if (fZ) goto L_006b6be4;
L_006b6bdc:; BB(0x006b6bdc);
    /* 006b6bdc: mov dword ptr [edx + ecx*4], 1 */ W32((u32)(r_edx+r_ecx*4), 0x1u);
    /* 006b6be3: ret  */ FN_RET(0x006b6bc8); r_esp += 4; return;
L_006b6be4:; BB(0x006b6be4);
    /* 006b6be4: mov dword ptr [edx + ecx*4], 0 */ W32((u32)(r_edx+r_ecx*4), 0x0u);
    /* 006b6beb: ret  */ FN_RET(0x006b6bc8); r_esp += 4; return;
}

void f_006b6bec(void)
{
    FN_ENTER(0x006b6bec);
    /* 006b6bec: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006b6bf1: call 0x6c1bd4 */ r_esp -= 4; W32(r_esp, 0x6b6bf6u); f_006c1bd4();
    /* 006b6bf6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b6bf7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b6bf9: je 0x6b6c35 */ if (fZ) goto L_006b6c35;
L_006b6bfb:; BB(0x006b6bfb);
    /* 006b6bfb: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 006b6bfd: push 0x8f8818 */ { u32 v = 0x8f8818u; r_esp -= 4; W32(r_esp, v); }
    /* 006b6c02: add eax, 0x2880 */ {  u32 a = r_eax; u32 b = 0x2880u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006b6c07: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b6c08: call 0x858643 */ r_esp -= 4; W32(r_esp, 0x6b6c0du); f_00858643();
    /* 006b6c0d: mov edx, eax */ r_edx = r_eax;
    /* 006b6c0f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b6c12: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b6c17: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b6c19: jne 0x6b6c28 */ if (!fZ) goto L_006b6c28;
L_006b6c1b:; BB(0x006b6c1b);
    /* 006b6c1b: movzx edx, byte ptr [esp + 4] */ r_edx = (u32)R8((u32)(r_esp+0x4u));
    /* 006b6c20: mov dword ptr [eax + edx*4], 0 */ W32((u32)(r_eax+r_edx*4), 0x0u);
    /* 006b6c27: ret  */ FN_RET(0x006b6bec); r_esp += 4; return;
L_006b6c28:; BB(0x006b6c28);
    /* 006b6c28: movzx edx, byte ptr [esp + 4] */ r_edx = (u32)R8((u32)(r_esp+0x4u));
    /* 006b6c2d: mov dword ptr [eax + edx*4], 1 */ W32((u32)(r_eax+r_edx*4), 0x1u);
    /* 006b6c34: ret  */ FN_RET(0x006b6bec); r_esp += 4; return;
L_006b6c35:; BB(0x006b6c35);
    /* 006b6c35: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b6c3a: movzx edx, byte ptr [esp + 4] */ r_edx = (u32)R8((u32)(r_esp+0x4u));
    /* 006b6c3f: mov dword ptr [eax + edx*4], 0 */ W32((u32)(r_eax+r_edx*4), 0x0u);
    /* 006b6c46: ret  */ FN_RET(0x006b6bec); r_esp += 4; return;
}

void f_006b6c48(void)
{
    FN_ENTER(0x006b6c48);
    /* 006b6c48: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006b6c49: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006b6c4a: movzx ebx, byte ptr [esp + 0xc] */ r_ebx = (u32)R8((u32)(r_esp+0xcu));
    /* 006b6c4f: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006b6c54: call 0x6c1bd4 */ r_esp -= 4; W32(r_esp, 0x6b6c59u); f_006c1bd4();
    /* 006b6c59: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b6c5a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b6c5c: je 0x6b6cda */ if (fZ) goto L_006b6cda;
L_006b6c5e:; BB(0x006b6c5e);
    /* 006b6c5e: mov edx, dword ptr [0xa954b0] */ r_edx = R32((u32)(0xa954b0u));
    /* 006b6c64: movzx ecx, word ptr [eax + 0x27c0] */ r_ecx = (u32)R16((u32)(r_eax+0x27c0u));
    /* 006b6c6b: mov dword ptr [edx + ebx*4], ecx */ W32((u32)(r_edx+r_ebx*4), r_ecx);
    /* 006b6c6e: movzx ecx, word ptr [eax + 0x27c2] */ r_ecx = (u32)R16((u32)(r_eax+0x27c2u));
    /* 006b6c75: lea esi, [ebx + 1] */ r_esi = (u32)(r_ebx+0x1u);
    /* 006b6c78: and esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 006b6c7e: mov dword ptr [edx + esi*4], ecx */ W32((u32)(r_edx+r_esi*4), r_ecx);
    /* 006b6c81: movzx ecx, word ptr [eax + 0x27c4] */ r_ecx = (u32)R16((u32)(r_eax+0x27c4u));
    /* 006b6c88: lea esi, [ebx + 2] */ r_esi = (u32)(r_ebx+0x2u);
    /* 006b6c8b: and esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 006b6c91: mov dword ptr [edx + esi*4], ecx */ W32((u32)(r_edx+r_esi*4), r_ecx);
    /* 006b6c94: movzx ecx, word ptr [eax + 0x27c6] */ r_ecx = (u32)R16((u32)(r_eax+0x27c6u));
    /* 006b6c9b: lea esi, [ebx + 3] */ r_esi = (u32)(r_ebx+0x3u);
    /* 006b6c9e: and esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 006b6ca4: mov dword ptr [edx + esi*4], ecx */ W32((u32)(r_edx+r_esi*4), r_ecx);
    /* 006b6ca7: movzx esi, word ptr [eax + 0x27c8] */ r_esi = (u32)R16((u32)(r_eax+0x27c8u));
    /* 006b6cae: lea ecx, [ebx + 4] */ r_ecx = (u32)(r_ebx+0x4u);
    /* 006b6cb1: movzx ecx, cl */ r_ecx = (u32)(u8)r_ecx;
    /* 006b6cb4: mov dword ptr [edx + ecx*4], esi */ W32((u32)(r_edx+r_ecx*4), r_esi);
    /* 006b6cb7: movzx ecx, word ptr [eax + 0x27ca] */ r_ecx = (u32)R16((u32)(r_eax+0x27cau));
    /* 006b6cbe: lea esi, [ebx + 5] */ r_esi = (u32)(r_ebx+0x5u);
    /* 006b6cc1: and esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_esi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b6cc7: lea ebx, [ebx + 6] */ r_ebx = (u32)(r_ebx+0x6u);
    /* 006b6cca: mov dword ptr [edx + esi*4], ecx */ W32((u32)(r_edx+r_esi*4), r_ecx);
    /* 006b6ccd: movzx eax, word ptr [eax + 0x27cc] */ r_eax = (u32)R16((u32)(r_eax+0x27ccu));
    /* 006b6cd4: movzx ebx, bl */ r_ebx = (u32)(u8)r_ebx;
    /* 006b6cd7: mov dword ptr [edx + ebx*4], eax */ W32((u32)(r_edx+r_ebx*4), r_eax);
L_006b6cda:; BB(0x006b6cda);
    /* 006b6cda: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006b6cdb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006b6cdc: ret  */ FN_RET(0x006b6c48); r_esp += 4; return;
}

void f_006b6ce0(void)
{
    FN_ENTER(0x006b6ce0);
    /* 006b6ce0: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006b6ce5: call 0x6c1bd4 */ r_esp -= 4; W32(r_esp, 0x6b6ceau); f_006c1bd4();
    /* 006b6cea: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b6ceb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b6ced: je 0x6b6d16 */ if (fZ) goto L_006b6d16;
L_006b6cef:; BB(0x006b6cef);
    /* 006b6cef: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006b6cf1: add eax, 0x27dc */ {  u32 a = r_eax; u32 b = 0x27dcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006b6cf6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b6cf7: call 0x4da114 */ r_esp -= 4; W32(r_esp, 0x6b6cfcu); f_004da114();
    /* 006b6cfc: push dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006b6cff: call 0x4d9664 */ r_esp -= 4; W32(r_esp, 0x6b6d04u); f_004d9664();
    /* 006b6d04: mov edx, dword ptr [0xa954b0] */ r_edx = R32((u32)(0xa954b0u));
    /* 006b6d0a: movzx ecx, byte ptr [esp + 0x10] */ r_ecx = (u32)R8((u32)(r_esp+0x10u));
    /* 006b6d0f: mov dword ptr [edx + ecx*4], eax */ W32((u32)(r_edx+r_ecx*4), r_eax);
    /* 006b6d12: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b6d15: ret  */ FN_RET(0x006b6ce0); r_esp += 4; return;
L_006b6d16:; BB(0x006b6d16);
    /* 006b6d16: ret  */ FN_RET(0x006b6ce0); r_esp += 4; return;
}

void f_006b6d18(void)
{
    FN_ENTER(0x006b6d18);
    /* 006b6d18: movzx ecx, byte ptr [esp + 4] */ r_ecx = (u32)R8((u32)(r_esp+0x4u));
    /* 006b6d1d: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 006b6d22: mov edx, dword ptr [0xa954b0] */ r_edx = R32((u32)(0xa954b0u));
    /* 006b6d28: mov dword ptr [edx + ecx*4], eax */ W32((u32)(r_edx+r_ecx*4), r_eax);
    /* 006b6d2b: ret  */ FN_RET(0x006b6d18); r_esp += 4; return;
}

void f_006b6d2c(void)
{
    FN_ENTER(0x006b6d2c);
    /* 006b6d2c: push 0x8f8818 */ { u32 v = 0x8f8818u; r_esp -= 4; W32(r_esp, v); }
    /* 006b6d31: push 0xa49870 */ { u32 v = 0xa49870u; r_esp -= 4; W32(r_esp, v); }
    /* 006b6d36: call 0x858c4d */ r_esp -= 4; W32(r_esp, 0x6b6d3bu); f_00858c4d();
    /* 006b6d3b: mov edx, eax */ r_edx = r_eax;
    /* 006b6d3d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b6d40: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b6d45: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b6d47: jne 0x6b6d56 */ if (!fZ) goto L_006b6d56;
L_006b6d49:; BB(0x006b6d49);
    /* 006b6d49: movzx edx, byte ptr [esp + 4] */ r_edx = (u32)R8((u32)(r_esp+0x4u));
    /* 006b6d4e: mov dword ptr [eax + edx*4], 0 */ W32((u32)(r_eax+r_edx*4), 0x0u);
    /* 006b6d55: ret  */ FN_RET(0x006b6d2c); r_esp += 4; return;
L_006b6d56:; BB(0x006b6d56);
    /* 006b6d56: movzx edx, byte ptr [esp + 4] */ r_edx = (u32)R8((u32)(r_esp+0x4u));
    /* 006b6d5b: mov dword ptr [eax + edx*4], 1 */ W32((u32)(r_eax+r_edx*4), 0x1u);
    /* 006b6d62: ret  */ FN_RET(0x006b6d2c); r_esp += 4; return;
}

void f_006b6d64(void)
{
    FN_ENTER(0x006b6d64);
    /* 006b6d64: push 0x8f8818 */ { u32 v = 0x8f8818u; r_esp -= 4; W32(r_esp, v); }
    /* 006b6d69: push dword ptr [0xa9a9a4] */ { u32 v = R32((u32)(0xa9a9a4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006b6d6f: call 0x858c4d */ r_esp -= 4; W32(r_esp, 0x6b6d74u); f_00858c4d();
    /* 006b6d74: mov edx, eax */ r_edx = r_eax;
    /* 006b6d76: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b6d79: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b6d7e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b6d80: jne 0x6b6d8f */ if (!fZ) goto L_006b6d8f;
L_006b6d82:; BB(0x006b6d82);
    /* 006b6d82: movzx edx, byte ptr [esp + 4] */ r_edx = (u32)R8((u32)(r_esp+0x4u));
    /* 006b6d87: mov dword ptr [eax + edx*4], 0 */ W32((u32)(r_eax+r_edx*4), 0x0u);
    /* 006b6d8e: ret  */ FN_RET(0x006b6d64); r_esp += 4; return;
L_006b6d8f:; BB(0x006b6d8f);
    /* 006b6d8f: movzx edx, byte ptr [esp + 4] */ r_edx = (u32)R8((u32)(r_esp+0x4u));
    /* 006b6d94: mov dword ptr [eax + edx*4], 1 */ W32((u32)(r_eax+r_edx*4), 0x1u);
    /* 006b6d9b: ret  */ FN_RET(0x006b6d64); r_esp += 4; return;
}

void f_006b6d9c(void)
{
    FN_ENTER(0x006b6d9c);
    /* 006b6d9c: movzx eax, byte ptr [0xa954cc] */ r_eax = (u32)R8((u32)(0xa954ccu));
    /* 006b6da3: mov edx, dword ptr [0xa954d0] */ r_edx = R32((u32)(0xa954d0u));
    /* 006b6da9: movsx ecx, byte ptr [edx] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_edx));
    /* 006b6dac: mov edx, dword ptr [0xa954b0] */ r_edx = R32((u32)(0xa954b0u));
    /* 006b6db2: mov dword ptr [edx + eax*4], ecx */ W32((u32)(r_edx+r_eax*4), r_ecx);
    /* 006b6db5: ret  */ FN_RET(0x006b6d9c); r_esp += 4; return;
}

void f_006b6db8(void)
{
    FN_ENTER(0x006b6db8);
    /* 006b6db8: movzx eax, byte ptr [0xa954cc] */ r_eax = (u32)R8((u32)(0xa954ccu));
    /* 006b6dbf: mov edx, dword ptr [0xa954d0] */ r_edx = R32((u32)(0xa954d0u));
    /* 006b6dc5: movsx ecx, word ptr [edx] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx));
    /* 006b6dc8: mov edx, dword ptr [0xa954b0] */ r_edx = R32((u32)(0xa954b0u));
    /* 006b6dce: mov dword ptr [edx + eax*4], ecx */ W32((u32)(r_edx+r_eax*4), r_ecx);
    /* 006b6dd1: ret  */ FN_RET(0x006b6db8); r_esp += 4; return;
}

void f_006b6dd4(void)
{
    FN_ENTER(0x006b6dd4);
    /* 006b6dd4: movzx edx, byte ptr [0xa954cc] */ r_edx = (u32)R8((u32)(0xa954ccu));
    /* 006b6ddb: mov ecx, dword ptr [0xa954d0] */ r_ecx = R32((u32)(0xa954d0u));
    /* 006b6de1: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b6de6: mov ecx, dword ptr [ecx] */ r_ecx = R32((u32)(r_ecx));
    /* 006b6de8: mov dword ptr [eax + edx*4], ecx */ W32((u32)(r_eax+r_edx*4), r_ecx);
    /* 006b6deb: ret  */ FN_RET(0x006b6dd4); r_esp += 4; return;
}

void f_006b6dec(void) /* sub_6B6DEC */
{
    FN_ENTER(0x006b6dec);
    /* 006b6dec: mov edx, dword ptr [0xa954cc] */ r_edx = R32((u32)(0xa954ccu));
    /* 006b6df2: mov eax, dword ptr [0xa954d0] */ r_eax = R32((u32)(0xa954d0u));
    /* 006b6df7: mov byte ptr [edx], al */ W8((u32)(r_edx), (u8)r_eax);
    /* 006b6df9: ret  */ FN_RET(0x006b6dec); r_esp += 4; return;
}

void f_006b6dfc(void) /* sub_6B6DFC */
{
    FN_ENTER(0x006b6dfc);
    /* 006b6dfc: mov edx, dword ptr [0xa954cc] */ r_edx = R32((u32)(0xa954ccu));
    /* 006b6e02: mov eax, dword ptr [0xa954d0] */ r_eax = R32((u32)(0xa954d0u));
    /* 006b6e07: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
    /* 006b6e0a: ret  */ FN_RET(0x006b6dfc); r_esp += 4; return;
}

void f_006b6e0c(void) /* sub_6B6E0C */
{
    FN_ENTER(0x006b6e0c);
    /* 006b6e0c: mov edx, dword ptr [0xa954cc] */ r_edx = R32((u32)(0xa954ccu));
    /* 006b6e12: mov eax, dword ptr [0xa954d0] */ r_eax = R32((u32)(0xa954d0u));
    /* 006b6e17: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 006b6e19: ret  */ FN_RET(0x006b6e0c); r_esp += 4; return;
}

void f_006b6e1c(void) /* sub_6B6E1C */
{
    FN_ENTER(0x006b6e1c);
    /* 006b6e1c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006b6e1d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006b6e1e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006b6e1f: movzx ebx, byte ptr [esp + 0x10] */ r_ebx = (u32)R8((u32)(r_esp+0x10u));
    /* 006b6e24: mov esi, dword ptr [0xa954b0] */ r_esi = R32((u32)(0xa954b0u));
    /* 006b6e2a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006b6e2c: mov edx, 0x8c007220 */ r_edx = 0x8c007220u;
    /* 006b6e31: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006b6e33: mov dword ptr [esi + ebx*4], 0 */ W32((u32)(r_esi+r_ebx*4), 0x0u);
L_006b6e3a:; BB(0x006b6e3a);
    /* 006b6e3a: mov edi, edx */ r_edi = r_edx;
    /* 006b6e3c: mov edi, dword ptr [edi] */ r_edi = R32((u32)(r_edi));
    /* 006b6e3e: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006b6e41: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b6e43: je 0x6b6e4b */ if (fZ) goto L_006b6e4b;
L_006b6e45:; BB(0x006b6e45);
    /* 006b6e45: or ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 006b6e48: mov dword ptr [esi + ebx*4], ecx */ W32((u32)(r_esi+r_ebx*4), r_ecx);
L_006b6e4b:; BB(0x006b6e4b);
    /* 006b6e4b: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006b6e4e: movsx edi, ax */ r_edi = (u32)(i32)(i16)(u16)r_eax;
    /* 006b6e51: cmp edi, 0xc0 */ {  u32 a = r_edi; u32 b = 0xc0u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 006b6e57: jb 0x6b6e3a */ if (fC) goto L_006b6e3a;
L_006b6e59:; BB(0x006b6e59);
    /* 006b6e59: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x6b6e5eu); f_006dc358();
    /* 006b6e5e: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b6e61: jne 0x6b6e6c */ if (!fZ) goto L_006b6e6c;
L_006b6e63:; BB(0x006b6e63);
    /* 006b6e63: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b6e68: or dword ptr [eax + ebx*4], 2 */ { u32 ad = (u32)(r_eax+r_ebx*4);  u32 a = R32(ad); u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_006b6e6c:; BB(0x006b6e6c);
    /* 006b6e6c: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x6b6e71u); f_006dc358();
    /* 006b6e71: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b6e74: jne 0x6b6e7f */ if (!fZ) goto L_006b6e7f;
L_006b6e76:; BB(0x006b6e76);
    /* 006b6e76: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b6e7b: or dword ptr [eax + ebx*4], 4 */ { u32 ad = (u32)(r_eax+r_ebx*4);  u32 a = R32(ad); u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_006b6e7f:; BB(0x006b6e7f);
    /* 006b6e7f: call 0x5ca8ec */ r_esp -= 4; W32(r_esp, 0x6b6e84u); f_005ca8ec();
    /* 006b6e84: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b6e87: jne 0x6b6e92 */ if (!fZ) goto L_006b6e92;
L_006b6e89:; BB(0x006b6e89);
    /* 006b6e89: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b6e8e: or dword ptr [eax + ebx*4], 8 */ { u32 ad = (u32)(r_eax+r_ebx*4);  u32 a = R32(ad); u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_006b6e92:; BB(0x006b6e92);
    /* 006b6e92: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006b6e98: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6b6e9du); f_0068d5a8();
    /* 006b6e9d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b6e9e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b6ea0: je 0x6b6eb5 */ if (fZ) goto L_006b6eb5;
L_006b6ea2:; BB(0x006b6ea2);
    /* 006b6ea2: mov eax, dword ptr [eax + 0x454] */ r_eax = R32((u32)(r_eax+0x454u));
    /* 006b6ea8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b6eaa: je 0x6b6eb5 */ if (fZ) goto L_006b6eb5;
L_006b6eac:; BB(0x006b6eac);
    /* 006b6eac: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b6eb1: or dword ptr [eax + ebx*4], 0x10 */ { u32 ad = (u32)(r_eax+r_ebx*4);  u32 a = R32(ad); u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_006b6eb5:; BB(0x006b6eb5);
    /* 006b6eb5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006b6eb6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006b6eb7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006b6eb8: ret  */ FN_RET(0x006b6e1c); r_esp += 4; return;
}

void f_006b6e75(void)
{
    FN_ENTER(0x006b6e75);
    /* 006b6e75: or dword ptr [ecx + 0xa954b0], esp */ { u32 ad = (u32)(r_ecx+0xa954b0u);  u32 a = R32(ad); u32 b = r_esp; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 006b6e7b: or dword ptr [eax + ebx*4], 4 */ { u32 ad = (u32)(r_eax+r_ebx*4);  u32 a = R32(ad); u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 006b6e7f: call 0x5ca8ec */ r_esp -= 4; W32(r_esp, 0x6b6e84u); f_005ca8ec();
    /* 006b6e84: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b6e87: jne 0x6b6e92 */ if (!fZ) goto L_006b6e92;
L_006b6e89:; BB(0x006b6e89);
    /* 006b6e89: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b6e8e: or dword ptr [eax + ebx*4], 8 */ { u32 ad = (u32)(r_eax+r_ebx*4);  u32 a = R32(ad); u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_006b6e92:; BB(0x006b6e92);
    /* 006b6e92: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006b6e98: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6b6e9du); f_0068d5a8();
    /* 006b6e9d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b6e9e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b6ea0: je 0x6b6eb5 */ if (fZ) goto L_006b6eb5;
L_006b6ea2:; BB(0x006b6ea2);
    /* 006b6ea2: mov eax, dword ptr [eax + 0x454] */ r_eax = R32((u32)(r_eax+0x454u));
    /* 006b6ea8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b6eaa: je 0x6b6eb5 */ if (fZ) goto L_006b6eb5;
L_006b6eac:; BB(0x006b6eac);
    /* 006b6eac: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b6eb1: or dword ptr [eax + ebx*4], 0x10 */ { u32 ad = (u32)(r_eax+r_ebx*4);  u32 a = R32(ad); u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_006b6eb5:; BB(0x006b6eb5);
    /* 006b6eb5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006b6eb6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006b6eb7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006b6eb8: ret  */ FN_RET(0x006b6e75); r_esp += 4; return;
}

void f_006b6ebc(void)
{
    FN_ENTER(0x006b6ebc);
    /* 006b6ebc: movzx edx, byte ptr [esp + 4] */ r_edx = (u32)R8((u32)(r_esp+0x4u));
    /* 006b6ec1: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b6ec6: push dword ptr [eax + edx*4] */ { u32 v = R32((u32)(r_eax+r_edx*4)); r_esp -= 4; W32(r_esp, v); }
    /* 006b6ec9: call 0x4db908 */ r_esp -= 4; W32(r_esp, 0x6b6eceu); f_004db908();
    /* 006b6ece: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b6ecf: ret  */ FN_RET(0x006b6ebc); r_esp += 4; return;
}

void f_006b6ed0(void)
{
    FN_ENTER(0x006b6ed0);
    /* 006b6ed0: call 0x4db930 */ r_esp -= 4; W32(r_esp, 0x6b6ed5u); f_004db930();
    /* 006b6ed5: ret  */ FN_RET(0x006b6ed0); r_esp += 4; return;
}

void f_006b6ed8(void)
{
    FN_ENTER(0x006b6ed8);
    /* 006b6ed8: call 0x4db828 */ r_esp -= 4; W32(r_esp, 0x6b6eddu); f_004db828();
    /* 006b6edd: ret  */ FN_RET(0x006b6ed8); r_esp += 4; return;
}

void f_006b6ee0(void)
{
    FN_ENTER(0x006b6ee0);
    /* 006b6ee0: mov eax, dword ptr [0xa95df4] */ r_eax = R32((u32)(0xa95df4u));
    /* 006b6ee5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b6ee7: je 0x6b6ef5 */ if (fZ) goto L_006b6ef5;
L_006b6ee9:; BB(0x006b6ee9);
    /* 006b6ee9: mov eax, dword ptr [eax + 0x110] */ r_eax = R32((u32)(r_eax+0x110u));
    /* 006b6eef: mov dword ptr [0xa95580], eax */ W32((u32)(0xa95580u), r_eax);
    /* 006b6ef4: ret  */ FN_RET(0x006b6ee0); r_esp += 4; return;
L_006b6ef5:; BB(0x006b6ef5);
    /* 006b6ef5: mov dword ptr [0xa95580], 0 */ W32((u32)(0xa95580u), 0x0u);
    /* 006b6eff: ret  */ FN_RET(0x006b6ee0); r_esp += 4; return;
}

void f_006b6f00(void)
{
    FN_ENTER(0x006b6f00);
    /* 006b6f00: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006b6f01: movzx eax, byte ptr [esp + 8] */ r_eax = (u32)R8((u32)(r_esp+0x8u));
    /* 006b6f06: call 0x6b6f15 */ r_esp -= 4; W32(r_esp, 0x6b6f0bu); f_006b6f15();
    /* 006b6f0b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b6f0c: ret  */ FN_RET(0x006b6f00); r_esp += 4; return;
}

void f_006b6f10(void)
{
    FN_ENTER(0x006b6f10);
    /* 006b6f10: movzx eax, byte ptr [esp + 4] */ r_eax = (u32)R8((u32)(r_esp+0x4u));
    /* 006b6f15: mov edx, dword ptr [0xa954b0] */ r_edx = R32((u32)(0xa954b0u));
    /* 006b6f1b: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006b6f1e: mov edx, dword ptr [edx + eax*4] */ r_edx = R32((u32)(r_edx+r_eax*4));
    /* 006b6f21: mov eax, dword ptr [0xa95df0] */ r_eax = R32((u32)(0xa95df0u));
    /* 006b6f26: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b6f28: je 0x6b6f43 */ if (fZ) goto L_006b6f43;
L_006b6f2a:; BB(0x006b6f2a);
    /* 006b6f2a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b6f2c: jl 0x6b6f43 */ if ((fS!=fO)) goto L_006b6f43;
L_006b6f2e:; BB(0x006b6f2e);
    /* 006b6f2e: cmp edx, 0xfd */ {  u32 a = r_edx; u32 b = 0xfdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006b6f34: jge 0x6b6f43 */ if ((fS==fO)) goto L_006b6f43;
L_006b6f36:; BB(0x006b6f36);
    /* 006b6f36: lea ecx, [eax + edx + 0x10] */ r_ecx = (u32)(r_eax+r_edx+0x10u);
    /* 006b6f3a: mov eax, 0xa95580 */ r_eax = 0xa95580u;
    /* 006b6f3f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006b6f41: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
L_006b6f43:; BB(0x006b6f43);
    /* 006b6f43: ret  */ FN_RET(0x006b6f10); r_esp += 4; return;
}

void f_006b6f15(void) /* sub_6B6F15 */
{
    FN_ENTER(0x006b6f15);
    /* 006b6f15: mov edx, dword ptr [0xa954b0] */ r_edx = R32((u32)(0xa954b0u));
    /* 006b6f1b: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006b6f1e: mov edx, dword ptr [edx + eax*4] */ r_edx = R32((u32)(r_edx+r_eax*4));
    /* 006b6f21: mov eax, dword ptr [0xa95df0] */ r_eax = R32((u32)(0xa95df0u));
    /* 006b6f26: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b6f28: je 0x6b6f43 */ if (fZ) goto L_006b6f43;
L_006b6f2a:; BB(0x006b6f2a);
    /* 006b6f2a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b6f2c: jl 0x6b6f43 */ if ((fS!=fO)) goto L_006b6f43;
L_006b6f2e:; BB(0x006b6f2e);
    /* 006b6f2e: cmp edx, 0xfd */ {  u32 a = r_edx; u32 b = 0xfdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006b6f34: jge 0x6b6f43 */ if ((fS==fO)) goto L_006b6f43;
L_006b6f36:; BB(0x006b6f36);
    /* 006b6f36: lea ecx, [eax + edx + 0x10] */ r_ecx = (u32)(r_eax+r_edx+0x10u);
    /* 006b6f3a: mov eax, 0xa95580 */ r_eax = 0xa95580u;
    /* 006b6f3f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006b6f41: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
L_006b6f43:; BB(0x006b6f43);
    /* 006b6f43: ret  */ FN_RET(0x006b6f15); r_esp += 4; return;
}

void f_006b6f44(void)
{
    FN_ENTER(0x006b6f44);
    /* 006b6f44: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 006b6f48: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b6f4a: je 0x6b6f71 */ if (fZ) goto L_006b6f71;
L_006b6f4c:; BB(0x006b6f4c);
    /* 006b6f4c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b6f4f: jne 0x6b6f5a */ if (!fZ) goto L_006b6f5a;
L_006b6f51:; BB(0x006b6f51);
    /* 006b6f51: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006b6f53: call 0x80c79c */ r_esp -= 4; W32(r_esp, 0x6b6f58u); f_0080c79c();
    /* 006b6f58: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b6f59: ret  */ FN_RET(0x006b6f44); r_esp += 4; return;
L_006b6f5a:; BB(0x006b6f5a);
    /* 006b6f5a: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b6f5d: jne 0x6b6f68 */ if (!fZ) goto L_006b6f68;
L_006b6f5f:; BB(0x006b6f5f);
    /* 006b6f5f: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 006b6f61: call 0x80c79c */ r_esp -= 4; W32(r_esp, 0x6b6f66u); f_0080c79c();
    /* 006b6f66: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b6f67: ret  */ FN_RET(0x006b6f44); r_esp += 4; return;
L_006b6f68:; BB(0x006b6f68);
    /* 006b6f68: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006b6f6a: call 0x80c79c */ r_esp -= 4; W32(r_esp, 0x6b6f6fu); f_0080c79c();
    /* 006b6f6f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b6f70: ret  */ FN_RET(0x006b6f44); r_esp += 4; return;
L_006b6f71:; BB(0x006b6f71);
    /* 006b6f71: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006b6f73: call 0x80c79c */ r_esp -= 4; W32(r_esp, 0x6b6f78u); f_0080c79c();
    /* 006b6f78: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b6f79: ret  */ FN_RET(0x006b6f44); r_esp += 4; return;
}

void f_006b6f7c(void)
{
    FN_ENTER(0x006b6f7c);
    /* 006b6f7c: movzx eax, byte ptr [esp + 4] */ r_eax = (u32)R8((u32)(r_esp+0x4u));
    /* 006b6f81: movzx edx, byte ptr [esp + 8] */ r_edx = (u32)R8((u32)(r_esp+0x8u));
    /* 006b6f86: mov ecx, dword ptr [0xa954b0] */ r_ecx = R32((u32)(0xa954b0u));
    /* 006b6f8c: movzx eax, word ptr [ecx + eax*4] */ r_eax = (u32)R16((u32)(r_ecx+r_eax*4));
    /* 006b6f90: movsx edx, word ptr [ecx + edx*4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+r_edx*4));
    /* 006b6f94: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006b6f95: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b6f96: call 0x7b48f0 */ r_esp -= 4; W32(r_esp, 0x6b6f9bu); f_007b48f0();
    /* 006b6f9b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b6f9e: ret  */ FN_RET(0x006b6f7c); r_esp += 4; return;
}

void f_006b6fa0(void)
{
    FN_ENTER(0x006b6fa0);
    /* 006b6fa0: movzx edx, byte ptr [esp + 4] */ r_edx = (u32)R8((u32)(r_esp+0x4u));
    /* 006b6fa5: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b6faa: movzx ecx, word ptr [eax + edx*4] */ r_ecx = (u32)R16((u32)(r_eax+r_edx*4));
    /* 006b6fae: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006b6faf: call 0x7b4918 */ r_esp -= 4; W32(r_esp, 0x6b6fb4u); f_007b4918();
    /* 006b6fb4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b6fb5: ret  */ FN_RET(0x006b6fa0); r_esp += 4; return;
}

void f_006b6fb8(void) /* sub_6B6FB8 */
{
    FN_ENTER(0x006b6fb8);
    /* 006b6fb8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006b6fb9: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006b6fbc: movzx edx, byte ptr [esp + 0x1c] */ r_edx = (u32)R8((u32)(r_esp+0x1cu));
    /* 006b6fc1: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b6fc6: fild dword ptr [eax + edx*4] */ FPUSH((long double)(i32)R32((u32)(r_eax+r_edx*4)));
    /* 006b6fc9: fild dword ptr [eax + edx*4 + 8] */ FPUSH((long double)(i32)R32((u32)(r_eax+r_edx*4+0x8u)));
    /* 006b6fcd: movzx edi, word ptr [eax + edx*4 + 0xc] */ r_edi = (u32)R16((u32)(r_eax+r_edx*4+0xcu));
    /* 006b6fd2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006b6fd4: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 006b6fd8: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 006b6fdc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006b6fdd: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6b6fe2u); f_0068d5a8();
    /* 006b6fe2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b6fe3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b6fe5: je 0x6b700f */ if (fZ) goto L_006b700f;
L_006b6fe7:; BB(0x006b6fe7);
    /* 006b6fe7: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 006b6feb: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 006b6fef: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006b6ff1: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 006b6ff5: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 006b6ff9: mov byte ptr [esp], 0x42 */ W8((u32)(r_esp), 0x42u);
    /* 006b6ffd: mov byte ptr [esp + 1], 3 */ W8((u32)(r_esp+0x1u), 0x3u);
    /* 006b7002: mov word ptr [esp + 2], di */ W16((u32)(r_esp+0x2u), (u16)r_edi);
    /* 006b7007: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 006b700a: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x6b700fu); f_008003e0();
L_006b700f:; BB(0x006b700f);
    /* 006b700f: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b7012: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006b7013: ret  */ FN_RET(0x006b6fb8); r_esp += 4; return;
}

