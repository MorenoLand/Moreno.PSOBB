#include "protos.h"

void f_007a6044(void)
{
    FN_ENTER(0x007a6044);
    /* 007a6044: mov eax, 0xb46028 */ r_eax = 0xb46028u;
    /* 007a6049: jmp 0x857a43 */ f_00857a43(); return;
}

void f_007a6050(void) /* sub_7A6050 */
{
    FN_ENTER(0x007a6050);
    /* 007a6050: push 0x77 */ { u32 v = 0x77u; r_esp -= 4; W32(r_esp, v); }
    /* 007a6052: call 0x7bfe60 */ r_esp -= 4; W32(r_esp, 0x7a6057u); f_007bfe60();
    /* 007a6057: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007a6058: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a605a: je 0x7a607f */ if (fZ) goto L_007a607f;
L_007a605c:; BB(0x007a605c);
    /* 007a605c: mov eax, dword ptr [0xaab384] */ r_eax = R32((u32)(0xaab384u));
    /* 007a6061: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007a6064: je 0x7a607f */ if (fZ) goto L_007a607f;
L_007a6066:; BB(0x007a6066);
    /* 007a6066: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007a6069: je 0x7a607f */ if (fZ) goto L_007a607f;
L_007a606b:; BB(0x007a606b);
    /* 007a606b: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007a606e: je 0x7a607f */ if (fZ) goto L_007a607f;
L_007a6070:; BB(0x007a6070);
    /* 007a6070: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007a6073: je 0x7a607f */ if (fZ) goto L_007a607f;
L_007a6075:; BB(0x007a6075);
    /* 007a6075: cmp eax, 0x12 */ {  u32 a = r_eax; u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007a6078: je 0x7a607f */ if (fZ) goto L_007a607f;
L_007a607a:; BB(0x007a607a);
    /* 007a607a: call 0x7c1424 */ r_esp -= 4; W32(r_esp, 0x7a607fu); f_007c1424();
L_007a607f:; BB(0x007a607f);
    /* 007a607f: ret  */ FN_RET(0x007a6050); r_esp += 4; return;
}

void f_007a6080(void) /* sub_7A6080 */
{
    FN_ENTER(0x007a6080);
    /* 007a6080: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007a6081: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007a6082: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 007a6086: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a6088: je 0x7a608f */ if (fZ) goto L_007a608f;
L_007a608a:; BB(0x007a608a);
    /* 007a608a: mov dword ptr [0x9ff8d4], eax */ W32((u32)(0x9ff8d4u), r_eax);
L_007a608f:; BB(0x007a608f);
    /* 007a608f: push dword ptr [0x9ff8d0] */ { u32 v = R32((u32)(0x9ff8d0u)); r_esp -= 4; W32(r_esp, v); }
    /* 007a6095: push dword ptr [0x9ff8d4] */ { u32 v = R32((u32)(0x9ff8d4u)); r_esp -= 4; W32(r_esp, v); }
    /* 007a609b: push dword ptr [0x9ff8cc] */ { u32 v = R32((u32)(0x9ff8ccu)); r_esp -= 4; W32(r_esp, v); }
    /* 007a60a1: call 0x82d650 */ r_esp -= 4; W32(r_esp, 0x7a60a6u); f_0082d650();
    /* 007a60a6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007a60a9: call 0x482eac */ r_esp -= 4; W32(r_esp, 0x7a60aeu); f_00482eac();
    /* 007a60ae: call 0x482aa0 */ r_esp -= 4; W32(r_esp, 0x7a60b3u); f_00482aa0();
    /* 007a60b3: mov edi, eax */ r_edi = r_eax;
    /* 007a60b5: call 0x4829e0 */ r_esp -= 4; W32(r_esp, 0x7a60bau); f_004829e0();
    /* 007a60ba: mov ebx, eax */ r_ebx = r_eax;
    /* 007a60bc: call 0x4829e8 */ r_esp -= 4; W32(r_esp, 0x7a60c1u); f_004829e8();
    /* 007a60c1: movzx ecx, bx */ r_ecx = (u32)(u16)r_ebx;
    /* 007a60c4: movzx edx, ax */ r_edx = (u32)(u16)r_eax;
    /* 007a60c7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007a60c8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007a60c9: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007a60ca: call 0x82cadc */ r_esp -= 4; W32(r_esp, 0x7a60cfu); f_0082cadc();
    /* 007a60cf: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007a60d2: call 0x4837cc */ r_esp -= 4; W32(r_esp, 0x7a60d7u); f_004837cc();
    /* 007a60d7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007a60d8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007a60d9: ret  */ FN_RET(0x007a6080); r_esp += 4; return;
}

void f_007a60dc(void) /* sub_7A60DC */
{
    FN_ENTER(0x007a60dc);
    /* 007a60dc: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 007a60e0: mov dword ptr [0xaab394], 1 */ W32((u32)(0xaab394u), 0x1u);
    /* 007a60ea: mov dword ptr [0xaab388], eax */ W32((u32)(0xaab388u), r_eax);
    /* 007a60ef: ret  */ FN_RET(0x007a60dc); r_esp += 4; return;
}

void f_007a60f0(void) /* sub_7A60F0 */
{
    FN_ENTER(0x007a60f0);
    /* 007a60f0: mov eax, dword ptr [0xaab38c] */ r_eax = R32((u32)(0xaab38cu));
    /* 007a60f5: mov dword ptr [0xaab394], 2 */ W32((u32)(0xaab394u), 0x2u);
    /* 007a60ff: mov dword ptr [0xaab388], eax */ W32((u32)(0xaab388u), r_eax);
    /* 007a6104: ret  */ FN_RET(0x007a60f0); r_esp += 4; return;
}

void f_007a6108(void) /* sub_7A6108 */
{
    FN_ENTER(0x007a6108);
    /* 007a6108: mov dword ptr [0xaab380], 0 */ W32((u32)(0xaab380u), 0x0u);
    /* 007a6112: ret  */ FN_RET(0x007a6108); r_esp += 4; return;
}

void f_007a6114(void) /* sub_7A6114 */
{
    FN_ENTER(0x007a6114);
    /* 007a6114: mov dword ptr [0xaab380], 1 */ W32((u32)(0xaab380u), 0x1u);
    /* 007a611e: ret  */ FN_RET(0x007a6114); r_esp += 4; return;
}

void f_007a6120(void) /* sub_7A6120 */
{
    FN_ENTER(0x007a6120);
    /* 007a6120: mov eax, dword ptr [0xaab380] */ r_eax = R32((u32)(0xaab380u));
    /* 007a6125: ret  */ FN_RET(0x007a6120); r_esp += 4; return;
}

void f_007a6128(void) /* sub_7A6128 */
{
    FN_ENTER(0x007a6128);
    /* 007a6128: mov dword ptr [0xaab37c], 0 */ W32((u32)(0xaab37cu), 0x0u);
    /* 007a6132: ret  */ FN_RET(0x007a6128); r_esp += 4; return;
}

void f_007a6134(void) /* sub_7A6134 */
{
    FN_ENTER(0x007a6134);
    /* 007a6134: mov dword ptr [0xaab37c], 1 */ W32((u32)(0xaab37cu), 0x1u);
    /* 007a613e: ret  */ FN_RET(0x007a6134); r_esp += 4; return;
}

void f_007a6140(void) /* sub_7A6140 */
{
    FN_ENTER(0x007a6140);
    /* 007a6140: mov eax, dword ptr [0xaab37c] */ r_eax = R32((u32)(0xaab37cu));
    /* 007a6145: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a6147: je 0x7a614f */ if (fZ) goto L_007a614f;
L_007a6149:; BB(0x007a6149);
    /* 007a6149: mov eax, 1 */ r_eax = 0x1u;
    /* 007a614e: ret  */ FN_RET(0x007a6140); r_esp += 4; return;
L_007a614f:; BB(0x007a614f);
    /* 007a614f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a6151: ret  */ FN_RET(0x007a6140); r_esp += 4; return;
}

void f_007a6154(void) /* sub_7A6154 */
{
    FN_ENTER(0x007a6154);
    /* 007a6154: mov dword ptr [0xaab378], 0 */ W32((u32)(0xaab378u), 0x0u);
    /* 007a615e: ret  */ FN_RET(0x007a6154); r_esp += 4; return;
}

void f_007a6160(void) /* sub_7A6160 */
{
    FN_ENTER(0x007a6160);
    /* 007a6160: mov dword ptr [0xaab378], 1 */ W32((u32)(0xaab378u), 0x1u);
    /* 007a616a: ret  */ FN_RET(0x007a6160); r_esp += 4; return;
}

void f_007a616c(void) /* sub_7A616C */
{
    FN_ENTER(0x007a616c);
    /* 007a616c: mov eax, dword ptr [0xaab378] */ r_eax = R32((u32)(0xaab378u));
    /* 007a6171: ret  */ FN_RET(0x007a616c); r_esp += 4; return;
}

void f_007a6174(void) /* sub_7A6174 */
{
    FN_ENTER(0x007a6174);
    /* 007a6174: mov dword ptr [0xaab388], 0 */ W32((u32)(0xaab388u), 0x0u);
    /* 007a617e: mov dword ptr [0xaab394], 3 */ W32((u32)(0xaab394u), 0x3u);
    /* 007a6188: ret  */ FN_RET(0x007a6174); r_esp += 4; return;
}

void f_007a618c(void) /* sub_7A618C */
{
    FN_ENTER(0x007a618c);
    /* 007a618c: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 007a6190: mov dword ptr [0xaab38c], eax */ W32((u32)(0xaab38cu), r_eax);
    /* 007a6195: ret  */ FN_RET(0x007a618c); r_esp += 4; return;
}

void f_007a6198(void) /* sub_7A6198 */
{
    FN_ENTER(0x007a6198);
    /* 007a6198: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 007a619c: mov dword ptr [0xaab390], eax */ W32((u32)(0xaab390u), r_eax);
    /* 007a61a1: ret  */ FN_RET(0x007a6198); r_esp += 4; return;
}

void f_007a61a4(void) /* sub_7A61A4 */
{
    FN_ENTER(0x007a61a4);
    /* 007a61a4: mov eax, dword ptr [0xaab384] */ r_eax = R32((u32)(0xaab384u));
    /* 007a61a9: ret  */ FN_RET(0x007a61a4); r_esp += 4; return;
}

void f_007a61ac(void) /* sub_7A61AC */
{
    FN_ENTER(0x007a61ac);
    /* 007a61ac: mov eax, dword ptr [0xaab398] */ r_eax = R32((u32)(0xaab398u));
    /* 007a61b1: ret  */ FN_RET(0x007a61ac); r_esp += 4; return;
}

void f_007a61b4(void) /* sub_7A61B4 */
{
    FN_ENTER(0x007a61b4);
    /* 007a61b4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007a61b5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007a61b6: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 007a61bb: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 007a61bf: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 007a61c3: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007a61c5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a61c7: jle 0x7a6256 */ if ((fZ||fS!=fO)) goto L_007a6256;
L_007a61cd:; BB(0x007a61cd);
    /* 007a61cd: movzx esi, byte ptr [edx + ebx] */ r_esi = (u32)R8((u32)(r_edx+r_ebx));
    /* 007a61d1: xor eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007a61d3: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007a61d6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007a61d8: je 0x7a61e3 */ if (fZ) goto L_007a61e3;
L_007a61da:; BB(0x007a61da);
    /* 007a61da: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 007a61dc: xor eax, 0xedb88320 */ {  u32 a = r_eax; u32 b = 0xedb88320u; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007a61e1: jmp 0x7a61e5 */ goto L_007a61e5;
L_007a61e3:; BB(0x007a61e3);
    /* 007a61e3: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
L_007a61e5:; BB(0x007a61e5);
    /* 007a61e5: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007a61e7: je 0x7a61f2 */ if (fZ) goto L_007a61f2;
L_007a61e9:; BB(0x007a61e9);
    /* 007a61e9: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 007a61eb: xor eax, 0xedb88320 */ {  u32 a = r_eax; u32 b = 0xedb88320u; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007a61f0: jmp 0x7a61f4 */ goto L_007a61f4;
L_007a61f2:; BB(0x007a61f2);
    /* 007a61f2: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
L_007a61f4:; BB(0x007a61f4);
    /* 007a61f4: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007a61f6: je 0x7a6201 */ if (fZ) goto L_007a6201;
L_007a61f8:; BB(0x007a61f8);
    /* 007a61f8: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 007a61fa: xor eax, 0xedb88320 */ {  u32 a = r_eax; u32 b = 0xedb88320u; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007a61ff: jmp 0x7a6203 */ goto L_007a6203;
L_007a6201:; BB(0x007a6201);
    /* 007a6201: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
L_007a6203:; BB(0x007a6203);
    /* 007a6203: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007a6205: je 0x7a6210 */ if (fZ) goto L_007a6210;
L_007a6207:; BB(0x007a6207);
    /* 007a6207: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 007a6209: xor eax, 0xedb88320 */ {  u32 a = r_eax; u32 b = 0xedb88320u; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007a620e: jmp 0x7a6212 */ goto L_007a6212;
L_007a6210:; BB(0x007a6210);
    /* 007a6210: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
L_007a6212:; BB(0x007a6212);
    /* 007a6212: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007a6214: je 0x7a621f */ if (fZ) goto L_007a621f;
L_007a6216:; BB(0x007a6216);
    /* 007a6216: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 007a6218: xor eax, 0xedb88320 */ {  u32 a = r_eax; u32 b = 0xedb88320u; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007a621d: jmp 0x7a6221 */ goto L_007a6221;
L_007a621f:; BB(0x007a621f);
    /* 007a621f: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
L_007a6221:; BB(0x007a6221);
    /* 007a6221: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007a6223: je 0x7a622e */ if (fZ) goto L_007a622e;
L_007a6225:; BB(0x007a6225);
    /* 007a6225: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 007a6227: xor eax, 0xedb88320 */ {  u32 a = r_eax; u32 b = 0xedb88320u; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007a622c: jmp 0x7a6230 */ goto L_007a6230;
L_007a622e:; BB(0x007a622e);
    /* 007a622e: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
L_007a6230:; BB(0x007a6230);
    /* 007a6230: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007a6232: je 0x7a623d */ if (fZ) goto L_007a623d;
L_007a6234:; BB(0x007a6234);
    /* 007a6234: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 007a6236: xor eax, 0xedb88320 */ {  u32 a = r_eax; u32 b = 0xedb88320u; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007a623b: jmp 0x7a623f */ goto L_007a623f;
L_007a623d:; BB(0x007a623d);
    /* 007a623d: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
L_007a623f:; BB(0x007a623f);
    /* 007a623f: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007a6241: je 0x7a624c */ if (fZ) goto L_007a624c;
L_007a6243:; BB(0x007a6243);
    /* 007a6243: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 007a6245: xor eax, 0xedb88320 */ {  u32 a = r_eax; u32 b = 0xedb88320u; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007a624a: jmp 0x7a624e */ goto L_007a624e;
L_007a624c:; BB(0x007a624c);
    /* 007a624c: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
L_007a624e:; BB(0x007a624e);
    /* 007a624e: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007a6250: jl 0x7a61cd */ if ((fS!=fO)) goto L_007a61cd;
L_007a6256:; BB(0x007a6256);
    /* 007a6256: not eax */ r_eax = ~r_eax;
    /* 007a6258: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007a6259: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007a625a: ret  */ FN_RET(0x007a61b4); r_esp += 4; return;
}

void f_007a625c(void) /* sub_7A625C */
{
    FN_ENTER(0x007a625c);
    /* 007a625c: mov ecx, 0xaca2c8 */ r_ecx = 0xaca2c8u;
    /* 007a6261: call 0x817574 */ r_esp -= 4; W32(r_esp, 0x7a6266u); f_00817574();
    /* 007a6266: ret  */ FN_RET(0x007a625c); r_esp += 4; return;
}

void f_007a6268(void) /* sub_7A6268 */
{
    FN_ENTER(0x007a6268);
    /* 007a6268: call 0x502690 */ r_esp -= 4; W32(r_esp, 0x7a626du); f_00502690();
    /* 007a626d: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x7a6272u); f_0061cdb0();
    /* 007a6272: mov eax, dword ptr [0xab5a48] */ r_eax = R32((u32)(0xab5a48u));
    /* 007a6277: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a6279: je 0x7a6280 */ if (fZ) goto L_007a6280;
L_007a627b:; BB(0x007a627b);
    /* 007a627b: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x7a6280u); f_0061cdb0();
L_007a6280:; BB(0x007a6280);
    /* 007a6280: mov ecx, 0xaca2ac */ r_ecx = 0xaca2acu;
    /* 007a6285: call 0x817574 */ r_esp -= 4; W32(r_esp, 0x7a628au); f_00817574();
    /* 007a628a: ret  */ FN_RET(0x007a6268); r_esp += 4; return;
}

void f_007a628c(void)
{
    FN_ENTER(0x007a628c);
    /* 007a628c: call 0x82d2a4 */ r_esp -= 4; W32(r_esp, 0x7a6291u); f_0082d2a4();
    /* 007a6291: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a6293: jne 0x7a629f */ if (!fZ) goto L_007a629f;
L_007a6295:; BB(0x007a6295);
    /* 007a6295: call 0x82c3b0 */ r_esp -= 4; W32(r_esp, 0x7a629au); f_0082c3b0();
    /* 007a629a: call 0x841318 */ r_esp -= 4; W32(r_esp, 0x7a629fu); f_00841318();
L_007a629f:; BB(0x007a629f);
    /* 007a629f: call 0x83a948 */ r_esp -= 4; W32(r_esp, 0x7a62a4u); f_0083a948();
    /* 007a62a4: call 0x83fe14 */ r_esp -= 4; W32(r_esp, 0x7a62a9u); f_0083fe14();
    /* 007a62a9: mov ecx, 0xa9caa0 */ r_ecx = 0xa9caa0u;
    /* 007a62ae: call 0x78f4e8 */ r_esp -= 4; W32(r_esp, 0x7a62b3u); f_0078f4e8();
    /* 007a62b3: call 0x708194 */ r_esp -= 4; W32(r_esp, 0x7a62b8u); f_00708194();
    /* 007a62b8: call 0x6ff1c0 */ r_esp -= 4; W32(r_esp, 0x7a62bdu); f_006ff1c0();
    /* 007a62bd: call 0x83de80 */ r_esp -= 4; W32(r_esp, 0x7a62c2u); f_0083de80();
    /* 007a62c2: call 0x5ba154 */ r_esp -= 4; W32(r_esp, 0x7a62c7u); f_005ba154();
    /* 007a62c7: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x7a62ccu); f_0061cdb0();
    /* 007a62cc: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x7a62d1u); f_0061cdb0();
    /* 007a62d1: call 0x83ecc0 */ r_esp -= 4; W32(r_esp, 0x7a62d6u); f_0083ecc0();
    /* 007a62d6: call 0x84376c */ r_esp -= 4; W32(r_esp, 0x7a62dbu); f_0084376c();
    /* 007a62db: ret  */ FN_RET(0x007a628c); r_esp += 4; return;
}

void f_007a62dc(void) /* sub_7A62DC */
{
    FN_ENTER(0x007a62dc);
    /* 007a62dc: mov dword ptr [0xaab388], 0 */ W32((u32)(0xaab388u), 0x0u);
    /* 007a62e6: mov dword ptr [0xaab394], 1 */ W32((u32)(0xaab394u), 0x1u);
    /* 007a62f0: ret  */ FN_RET(0x007a62dc); r_esp += 4; return;
}

void f_007a62f4(void) /* sub_7A62F4 */
{
    FN_ENTER(0x007a62f4);
    /* 007a62f4: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 007a62f6: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007a62f9: je 0x7a6303 */ if (fZ) goto L_007a6303;
L_007a62fb:; BB(0x007a62fb);
    /* 007a62fb: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007a62fe: je 0x7a6303 */ if (fZ) goto L_007a6303;
L_007a6300:; BB(0x007a6300);
    /* 007a6300: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a6302: ret  */ FN_RET(0x007a62f4); r_esp += 4; return;
L_007a6303:; BB(0x007a6303);
    /* 007a6303: mov eax, 1 */ r_eax = 0x1u;
    /* 007a6308: ret  */ FN_RET(0x007a62f4); r_esp += 4; return;
}

void f_007a630c(void) /* sub_7A630C */
{
    FN_ENTER(0x007a630c);
    /* 007a630c: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 007a6310: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 007a6314: mov dword ptr [ecx + 0x18], edx */ W32((u32)(r_ecx+0x18u), r_edx);
    /* 007a6317: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 007a631b: mov dword ptr [ecx + 0x1c], edx */ W32((u32)(r_ecx+0x1cu), r_edx);
    /* 007a631e: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 007a6322: mov dword ptr [ecx + 0x20], edx */ W32((u32)(r_ecx+0x20u), r_edx);
    /* 007a6325: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 007a6328: ret 0x10 */ FN_RET(0x007a630c); r_esp += 20; return;
}

void f_007a632c(void) /* sub_7A632C */
{
    FN_ENTER(0x007a632c);
    /* 007a632c: mov dword ptr [0xaab35c], 0x3f800000 */ W32((u32)(0xaab35cu), 0x3f800000u);
    /* 007a6336: mov dword ptr [0xaab360], 0x41000000 */ W32((u32)(0xaab360u), 0x41000000u);
    /* 007a6340: mov dword ptr [0xaab364], 0x3fc00000 */ W32((u32)(0xaab364u), 0x3fc00000u);
    /* 007a634a: ret  */ FN_RET(0x007a632c); r_esp += 4; return;
}

void f_007a634c(void) /* sub_7A634C */
{
    FN_ENTER(0x007a634c);
    /* 007a634c: call 0x80030c */ r_esp -= 4; W32(r_esp, 0x7a6351u); f_0080030c();
    /* 007a6351: call 0x80030c */ r_esp -= 4; W32(r_esp, 0x7a6356u); f_0080030c();
    /* 007a6356: ret  */ FN_RET(0x007a634c); r_esp += 4; return;
}

void f_007a6358(void)
{
    FN_ENTER(0x007a6358);
    /* 007a6358: call 0x79f1d8 */ r_esp -= 4; W32(r_esp, 0x7a635du); f_0079f1d8();
    /* 007a635d: mov dword ptr [0xaab388], 0 */ W32((u32)(0xaab388u), 0x0u);
    /* 007a6367: mov dword ptr [0xaab394], 1 */ W32((u32)(0xaab394u), 0x1u);
    /* 007a6371: ret  */ FN_RET(0x007a6358); r_esp += 4; return;
}

void f_007a6374(void) /* sub_7A6374 */
{
    FN_ENTER(0x007a6374);
    /* 007a6374: mov eax, dword ptr [0xaaecb8] */ r_eax = R32((u32)(0xaaecb8u));
    /* 007a6379: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a637b: je 0x7a6394 */ if (fZ) goto L_007a6394;
L_007a637d:; BB(0x007a637d);
    /* 007a637d: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 007a637f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007a6381: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a6382: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a6383: push 0xaae9a0 */ { u32 v = 0xaae9a0u; r_esp -= 4; W32(r_esp, v); }
    /* 007a6388: push 0x97d120 */ { u32 v = 0x97d120u; r_esp -= 4; W32(r_esp, v); }
    /* 007a638d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a638e: call dword ptr [0x8f8320] */ { u32 t = R32((u32)(0x8f8320u)); r_esp -= 4; W32(r_esp, 0x7a6394u); call_ind(t); }
L_007a6394:; BB(0x007a6394);
    /* 007a6394: ret  */ FN_RET(0x007a6374); r_esp += 4; return;
}

void f_007a6398(void) /* sub_7A6398 */
{
    FN_ENTER(0x007a6398);
    /* 007a6398: call 0x5067d8 */ r_esp -= 4; W32(r_esp, 0x7a639du); f_005067d8();
    /* 007a639d: call 0x7a634c */ r_esp -= 4; W32(r_esp, 0x7a63a2u); f_007a634c();
    /* 007a63a2: push 0xe0 */ { u32 v = 0xe0u; r_esp -= 4; W32(r_esp, v); }
    /* 007a63a7: push 0x9ff6e0 */ { u32 v = 0x9ff6e0u; r_esp -= 4; W32(r_esp, v); }
    /* 007a63ac: call 0x78b0a0 */ r_esp -= 4; W32(r_esp, 0x7a63b1u); f_0078b0a0();
    /* 007a63b1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007a63b4: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 007a63b9: call 0x817400 */ r_esp -= 4; W32(r_esp, 0x7a63beu); f_00817400();
    /* 007a63be: call 0x5bb198 */ r_esp -= 4; W32(r_esp, 0x7a63c3u); f_005bb198();
    /* 007a63c3: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 007a63c5: push 0x9ff8a4 */ { u32 v = 0x9ff8a4u; r_esp -= 4; W32(r_esp, v); }
    /* 007a63ca: call 0x78b0a0 */ r_esp -= 4; W32(r_esp, 0x7a63cfu); f_0078b0a0();
    /* 007a63cf: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007a63d2: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x7a63d7u); f_0061cdb0();
    /* 007a63d7: call 0x83fe1c */ r_esp -= 4; W32(r_esp, 0x7a63dcu); f_0083fe1c();
    /* 007a63dc: call 0x83aa30 */ r_esp -= 4; W32(r_esp, 0x7a63e1u); f_0083aa30();
    /* 007a63e1: call 0x791680 */ r_esp -= 4; W32(r_esp, 0x7a63e6u); f_00791680();
    /* 007a63e6: call 0x70816c */ r_esp -= 4; W32(r_esp, 0x7a63ebu); f_0070816c();
    /* 007a63eb: push dword ptr [0xaab368] */ { u32 v = R32((u32)(0xaab368u)); r_esp -= 4; W32(r_esp, v); }
    /* 007a63f1: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x7a63f6u); f_0082e960();
    /* 007a63f6: push dword ptr [0xaab540] */ { u32 v = R32((u32)(0xaab540u)); r_esp -= 4; W32(r_esp, v); }
    /* 007a63fc: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x7a6401u); f_0082e960();
    /* 007a6401: push dword ptr [0xaab53c] */ { u32 v = R32((u32)(0xaab53cu)); r_esp -= 4; W32(r_esp, v); }
    /* 007a6407: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x7a640cu); f_0082e960();
    /* 007a640c: push dword ptr [0xaab3b0] */ { u32 v = R32((u32)(0xaab3b0u)); r_esp -= 4; W32(r_esp, v); }
    /* 007a6412: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x7a6417u); f_0082e960();
    /* 007a6417: push dword ptr [0xaab36c] */ { u32 v = R32((u32)(0xaab36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 007a641d: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x7a6422u); f_0082e960();
    /* 007a6422: push dword ptr [0xaab370] */ { u32 v = R32((u32)(0xaab370u)); r_esp -= 4; W32(r_esp, v); }
    /* 007a6428: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x7a642du); f_0082e960();
    /* 007a642d: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007a6430: call 0x843f84 */ r_esp -= 4; W32(r_esp, 0x7a6435u); f_00843f84();
    /* 007a6435: push dword ptr [0xaab3a8] */ { u32 v = R32((u32)(0xaab3a8u)); r_esp -= 4; W32(r_esp, v); }
    /* 007a643b: push dword ptr [0xaab3a4] */ { u32 v = R32((u32)(0xaab3a4u)); r_esp -= 4; W32(r_esp, v); }
    /* 007a6441: mov ecx, dword ptr [0xaab39c] */ r_ecx = R32((u32)(0xaab39cu));
    /* 007a6447: mov edx, dword ptr [0xaab3a0] */ r_edx = R32((u32)(0xaab3a0u));
    /* 007a644d: call 0x618a44 */ r_esp -= 4; W32(r_esp, 0x7a6452u); f_00618a44();
    /* 007a6452: ret  */ FN_RET(0x007a6398); r_esp += 4; return;
}

void f_007a6454(void)
{
    FN_ENTER(0x007a6454);
    /* 007a6454: mov eax, dword ptr [0xacbec0] */ r_eax = R32((u32)(0xacbec0u));
    /* 007a6459: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a645b: jne 0x7a6478 */ if (!fZ) goto L_007a6478;
L_007a645d:; BB(0x007a645d);
    /* 007a645d: mov eax, 1 */ r_eax = 0x1u;
    /* 007a6462: mov dword ptr [0xaab384], eax */ W32((u32)(0xaab384u), r_eax);
    /* 007a6467: mov dword ptr [0xaab38c], eax */ W32((u32)(0xaab38cu), r_eax);
    /* 007a646c: mov dword ptr [0xaab390], eax */ W32((u32)(0xaab390u), r_eax);
    /* 007a6471: mov dword ptr [0xaab398], eax */ W32((u32)(0xaab398u), r_eax);
    /* 007a6476: jmp 0x7a6491 */ goto L_007a6491;
L_007a6478:; BB(0x007a6478);
    /* 007a6478: mov eax, 0x12 */ r_eax = 0x12u;
    /* 007a647d: mov dword ptr [0xaab384], eax */ W32((u32)(0xaab384u), r_eax);
    /* 007a6482: mov dword ptr [0xaab38c], eax */ W32((u32)(0xaab38cu), r_eax);
    /* 007a6487: mov dword ptr [0xaab390], eax */ W32((u32)(0xaab390u), r_eax);
    /* 007a648c: mov dword ptr [0xaab398], eax */ W32((u32)(0xaab398u), r_eax);
L_007a6491:; BB(0x007a6491);
    /* 007a6491: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a6493: mov dword ptr [0xaab39c], eax */ W32((u32)(0xaab39cu), r_eax);
    /* 007a6498: mov dword ptr [0xaab3a0], eax */ W32((u32)(0xaab3a0u), r_eax);
    /* 007a649d: mov dword ptr [0xaab3a4], eax */ W32((u32)(0xaab3a4u), r_eax);
    /* 007a64a2: mov dword ptr [0xaab3a8], eax */ W32((u32)(0xaab3a8u), r_eax);
    /* 007a64a7: ret  */ FN_RET(0x007a6454); r_esp += 4; return;
}

void f_007a645f(void)
{
    FN_ENTER(0x007a645f);
    /* 007a645f: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 007a6461: add byte ptr [ebx + 0xaab384], ah */ { u32 ad = (u32)(r_ebx+0xaab384u);  u32 a = R8(ad); u32 b = (u8)(r_eax>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 007a6467: mov dword ptr [0xaab38c], eax */ W32((u32)(0xaab38cu), r_eax);
    /* 007a646c: mov dword ptr [0xaab390], eax */ W32((u32)(0xaab390u), r_eax);
    /* 007a6471: mov dword ptr [0xaab398], eax */ W32((u32)(0xaab398u), r_eax);
    /* 007a6476: jmp 0x7a6491 */ goto L_007a6491;
L_007a6491:; BB(0x007a6491);
    /* 007a6491: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a6493: mov dword ptr [0xaab39c], eax */ W32((u32)(0xaab39cu), r_eax);
    /* 007a6498: mov dword ptr [0xaab3a0], eax */ W32((u32)(0xaab3a0u), r_eax);
    /* 007a649d: mov dword ptr [0xaab3a4], eax */ W32((u32)(0xaab3a4u), r_eax);
    /* 007a64a2: mov dword ptr [0xaab3a8], eax */ W32((u32)(0xaab3a8u), r_eax);
    /* 007a64a7: ret  */ FN_RET(0x007a645f); r_esp += 4; return;
}

void f_007a64a8(void)
{
    FN_ENTER(0x007a64a8);
    /* 007a64a8: call 0x7a9564 */ r_esp -= 4; W32(r_esp, 0x7a64adu); f_007a9564();
    /* 007a64ad: ret  */ FN_RET(0x007a64a8); r_esp += 4; return;
}

void f_007a64b0(void) /* sub_7A64B0 */
{
    FN_ENTER(0x007a64b0);
    /* 007a64b0: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007a64b3: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x7a64b8u); f_0061cdb0();
    /* 007a64b8: mov dword ptr [esp], 0x31 */ W32((u32)(r_esp), 0x31u);
    /* 007a64bf: call 0x4829e0 */ r_esp -= 4; W32(r_esp, 0x7a64c4u); f_004829e0();
    /* 007a64c4: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 007a64c7: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 007a64cb: call 0x4829e8 */ r_esp -= 4; W32(r_esp, 0x7a64d0u); f_004829e8();
    /* 007a64d0: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 007a64d3: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 007a64d7: call 0x4829f0 */ r_esp -= 4; W32(r_esp, 0x7a64dcu); f_004829f0();
    /* 007a64dc: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 007a64df: cmp eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a64e2: je 0x7a66ad */ if (fZ) goto L_007a66ad;
L_007a64e8:; BB(0x007a64e8);
    /* 007a64e8: mov dword ptr [esp + 0xc], 0 */ W32((u32)(r_esp+0xcu), 0x0u);
L_007a64f0:; BB(0x007a64f0);
    /* 007a64f0: call 0x482f0c */ r_esp -= 4; W32(r_esp, 0x7a64f5u); f_00482f0c();
    /* 007a64f5: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 007a64f8: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 007a64fc: call 0x482a08 */ r_esp -= 4; W32(r_esp, 0x7a6501u); f_00482a08();
    /* 007a6501: mov edx, dword ptr [0x9ff8cc] */ r_edx = R32((u32)(0x9ff8ccu));
    /* 007a6507: mov ecx, dword ptr [0x9ff8d4] */ r_ecx = R32((u32)(0x9ff8d4u));
    /* 007a650d: mov dword ptr [esp + 0x20], 0x2800000 */ W32((u32)(r_esp+0x20u), 0x2800000u);
    /* 007a6515: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 007a6518: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 007a651c: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 007a6520: mov dword ptr [esp + 0x1c], ecx */ W32((u32)(r_esp+0x1cu), r_ecx);
    /* 007a6524: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 007a6527: call 0x843fbc */ r_esp -= 4; W32(r_esp, 0x7a652cu); f_00843fbc();
    /* 007a652c: call 0x482a40 */ r_esp -= 4; W32(r_esp, 0x7a6531u); f_00482a40();
    /* 007a6531: push 0x6000 */ { u32 v = 0x6000u; r_esp -= 4; W32(r_esp, v); }
    /* 007a6536: call 0x82e940 */ r_esp -= 4; W32(r_esp, 0x7a653bu); f_0082e940();
    /* 007a653b: push 0xc000 */ { u32 v = 0xc000u; r_esp -= 4; W32(r_esp, v); }
    /* 007a6540: mov dword ptr [0xaab370], eax */ W32((u32)(0xaab370u), r_eax);
    /* 007a6545: call 0x82e940 */ r_esp -= 4; W32(r_esp, 0x7a654au); f_0082e940();
    /* 007a654a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007a654d: mov ecx, dword ptr [0xaab370] */ r_ecx = R32((u32)(0xaab370u));
    /* 007a6553: mov dword ptr [0xaab36c], eax */ W32((u32)(0xaab36cu), r_eax);
    /* 007a6558: push 0x400 */ { u32 v = 0x400u; r_esp -= 4; W32(r_esp, v); }
    /* 007a655d: mov edx, 0x400 */ r_edx = 0x400u;
    /* 007a6562: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a6563: call 0x82ac64 */ r_esp -= 4; W32(r_esp, 0x7a6568u); f_0082ac64();
    /* 007a6568: push 0x100000 */ { u32 v = 0x100000u; r_esp -= 4; W32(r_esp, v); }
    /* 007a656d: call 0x82d6f0 */ r_esp -= 4; W32(r_esp, 0x7a6572u); f_0082d6f0();
    /* 007a6572: push 0x100000 */ { u32 v = 0x100000u; r_esp -= 4; W32(r_esp, v); }
    /* 007a6577: call 0x82e940 */ r_esp -= 4; W32(r_esp, 0x7a657cu); f_0082e940();
    /* 007a657c: mov dword ptr [0xaab3b0], eax */ W32((u32)(0xaab3b0u), r_eax);
    /* 007a6581: push 0x6000 */ { u32 v = 0x6000u; r_esp -= 4; W32(r_esp, v); }
    /* 007a6586: call 0x82e940 */ r_esp -= 4; W32(r_esp, 0x7a658bu); f_0082e940();
    /* 007a658b: mov dword ptr [0xaab53c], eax */ W32((u32)(0xaab53cu), r_eax);
    /* 007a6590: push 0x2000 */ { u32 v = 0x2000u; r_esp -= 4; W32(r_esp, v); }
    /* 007a6595: call 0x82e940 */ r_esp -= 4; W32(r_esp, 0x7a659au); f_0082e940();
    /* 007a659a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007a659d: mov ecx, dword ptr [0xaab3b0] */ r_ecx = R32((u32)(0xaab3b0u));
    /* 007a65a3: mov dword ptr [0xaab540], eax */ W32((u32)(0xaab540u), r_eax);
    /* 007a65a8: mov edx, 0x4000 */ r_edx = 0x4000u;
    /* 007a65ad: call 0x82e8f4 */ r_esp -= 4; W32(r_esp, 0x7a65b2u); f_0082e8f4();
    /* 007a65b2: mov ecx, 0x82e940 */ r_ecx = 0x82e940u;
    /* 007a65b7: mov edx, 0x82e960 */ r_edx = 0x82e960u;
    /* 007a65bc: call 0x83b3f8 */ r_esp -= 4; W32(r_esp, 0x7a65c1u); f_0083b3f8();
    /* 007a65c1: mov ecx, 0x7a628c */ r_ecx = 0x7a628cu;
    /* 007a65c6: call 0x843f64 */ r_esp -= 4; W32(r_esp, 0x7a65cbu); f_00843f64();
    /* 007a65cb: push 0x2000 */ { u32 v = 0x2000u; r_esp -= 4; W32(r_esp, v); }
    /* 007a65d0: call 0x82e940 */ r_esp -= 4; W32(r_esp, 0x7a65d5u); f_0082e940();
    /* 007a65d5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007a65d6: mov dword ptr [0xaab368], eax */ W32((u32)(0xaab368u), r_eax);
    /* 007a65db: mov ecx, eax */ r_ecx = r_eax;
    /* 007a65dd: mov edx, 0x80 */ r_edx = 0x80u;
    /* 007a65e2: call 0x843f78 */ r_esp -= 4; W32(r_esp, 0x7a65e7u); f_00843f78();
    /* 007a65e7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007a65e9: call 0x830cd8 */ r_esp -= 4; W32(r_esp, 0x7a65eeu); f_00830cd8();
    /* 007a65ee: call 0x70828c */ r_esp -= 4; W32(r_esp, 0x7a65f3u); f_0070828c();
    /* 007a65f3: call 0x792b64 */ r_esp -= 4; W32(r_esp, 0x7a65f8u); f_00792b64();
    /* 007a65f8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007a65fa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a65fb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a65fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a65fd: call 0x83aa48 */ r_esp -= 4; W32(r_esp, 0x7a6602u); f_0083aa48();
    /* 007a6602: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007a6605: call 0x83fe24 */ r_esp -= 4; W32(r_esp, 0x7a660au); f_0083fe24();
    /* 007a660a: call 0x6ffa48 */ r_esp -= 4; W32(r_esp, 0x7a660fu); f_006ffa48();
    /* 007a660f: call 0x7c1374 */ r_esp -= 4; W32(r_esp, 0x7a6614u); f_007c1374();
    /* 007a6614: mov ecx, dword ptr [0xaab53c] */ r_ecx = R32((u32)(0xaab53cu));
    /* 007a661a: call 0x830a98 */ r_esp -= 4; W32(r_esp, 0x7a661fu); f_00830a98();
    /* 007a661f: push 0x1000 */ { u32 v = 0x1000u; r_esp -= 4; W32(r_esp, v); }
    /* 007a6624: call 0x82e940 */ r_esp -= 4; W32(r_esp, 0x7a6629u); f_0082e940();
    /* 007a6629: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007a662a: mov dword ptr [0xaab374], eax */ W32((u32)(0xaab374u), r_eax);
    /* 007a662f: push 0x800 */ { u32 v = 0x800u; r_esp -= 4; W32(r_esp, v); }
    /* 007a6634: mov ecx, eax */ r_ecx = r_eax;
    /* 007a6636: mov edx, 0x80 */ r_edx = 0x80u;
    /* 007a663b: call 0x779df0 */ r_esp -= 4; W32(r_esp, 0x7a6640u); f_00779df0();
    /* 007a6640: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 007a6642: push 0x9ff8a4 */ { u32 v = 0x9ff8a4u; r_esp -= 4; W32(r_esp, v); }
    /* 007a6647: call 0x78b184 */ r_esp -= 4; W32(r_esp, 0x7a664cu); f_0078b184();
    /* 007a664c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007a664f: mov ecx, 0xa9caa0 */ r_ecx = 0xa9caa0u;
    /* 007a6654: call 0x78f5d0 */ r_esp -= 4; W32(r_esp, 0x7a6659u); f_0078f5d0();
    /* 007a6659: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 007a665e: call 0x819438 */ r_esp -= 4; W32(r_esp, 0x7a6663u); f_00819438();
    /* 007a6663: call 0x5bbf1c */ r_esp -= 4; W32(r_esp, 0x7a6668u); f_005bbf1c();
    /* 007a6668: push 0xe0 */ { u32 v = 0xe0u; r_esp -= 4; W32(r_esp, v); }
    /* 007a666d: push 0x9ff6e0 */ { u32 v = 0x9ff6e0u; r_esp -= 4; W32(r_esp, v); }
    /* 007a6672: call 0x78b184 */ r_esp -= 4; W32(r_esp, 0x7a6677u); f_0078b184();
    /* 007a6677: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007a667a: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x7a667fu); f_006dc358();
    /* 007a667f: call 0x5068b8 */ r_esp -= 4; W32(r_esp, 0x7a6684u); f_005068b8();
    /* 007a6684: push 0x7a0334 */ { u32 v = 0x7a0334u; r_esp -= 4; W32(r_esp, v); }
    /* 007a6689: call 0x82cb00 */ r_esp -= 4; W32(r_esp, 0x7a668eu); f_0082cb00();
    /* 007a668e: push 0x7a6358 */ { u32 v = 0x7a6358u; r_esp -= 4; W32(r_esp, v); }
    /* 007a6693: call 0x82d330 */ r_esp -= 4; W32(r_esp, 0x7a6698u); f_0082d330();
    /* 007a6698: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007a669b: call 0x82d2a4 */ r_esp -= 4; W32(r_esp, 0x7a66a0u); f_0082d2a4();
    /* 007a66a0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a66a2: je 0x7a66a9 */ if (fZ) goto L_007a66a9;
L_007a66a4:; BB(0x007a66a4);
    /* 007a66a4: call 0x82d2ac */ r_esp -= 4; W32(r_esp, 0x7a66a9u); f_0082d2ac();
L_007a66a9:; BB(0x007a66a9);
    /* 007a66a9: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007a66ac: ret  */ FN_RET(0x007a64b0); r_esp += 4; return;
L_007a66ad:; BB(0x007a66ad);
    /* 007a66ad: mov dword ptr [esp + 0xc], 4 */ W32((u32)(r_esp+0xcu), 0x4u);
    /* 007a66b5: jmp 0x7a64f0 */ goto L_007a64f0;
}

void f_007a66bc(void) /* sub_7A66BC */
{
    FN_ENTER(0x007a66bc);
    /* 007a66bc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007a66bd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 007a66bf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007a66c1: call 0x7a66e0 */ r_esp -= 4; W32(r_esp, 0x7a66c6u); f_007a66e0();
    /* 007a66c6: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 007a66ca: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a66cc: jne 0x7a66d2 */ if (!fZ) goto L_007a66d2;
L_007a66ce:; BB(0x007a66ce);
    /* 007a66ce: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007a66cf: ret 4 */ FN_RET(0x007a66bc); r_esp += 8; return;
L_007a66d2:; BB(0x007a66d2);
    /* 007a66d2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007a66d3: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x7a66d8u); f_005c2f74();
    /* 007a66d8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007a66d9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007a66da: ret 4 */ FN_RET(0x007a66bc); r_esp += 8; return;
}

void f_007a66e0(void) /* sub_7A66E0 */
{
    FN_ENTER(0x007a66e0);
    /* 007a66e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007a66e1: mov ebp, esp */ r_ebp = r_esp;
    /* 007a66e3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007a66e5: push 0x8f5b4c */ { u32 v = 0x8f5b4cu; r_esp -= 4; W32(r_esp, v); }
    /* 007a66ea: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007a66f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a66f1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007a66f8: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007a66fb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007a66fe: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 007a6701: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 007a6704: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 007a6707: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 007a670a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007a6711: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 007a6714: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 007a6717: mov dword ptr [eax], 0xb460a8 */ W32((u32)(r_eax), 0xb460a8u);
    /* 007a671d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a671f: je 0x7a6730 */ if (fZ) goto L_007a6730;
L_007a6721:; BB(0x007a6721);
    /* 007a6721: call 0x73d160 */ r_esp -= 4; W32(r_esp, 0x7a6726u); f_0073d160();
    /* 007a6726: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 007a6729: mov dword ptr [eax + 0x2c], 0 */ W32((u32)(r_eax+0x2cu), 0x0u);
L_007a6730:; BB(0x007a6730);
    /* 007a6730: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 007a6737: mov ecx, eax */ r_ecx = r_eax;
    /* 007a6739: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x7a673eu); f_008171e8();
    /* 007a673e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007a6741: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007a6748: mov esp, ebp */ r_esp = r_ebp;
    /* 007a674a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a674b: ret  */ FN_RET(0x007a66e0); r_esp += 4; return;
}

void f_007a674c(void) /* sub_7A674C */
{
    FN_ENTER(0x007a674c);
    /* 007a674c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007a674d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 007a674f: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 007a6753: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007a6755: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x7a675au); f_008193cc();
    /* 007a675a: mov dword ptr [ebx], 0xb460a8 */ W32((u32)(r_ebx), 0xb460a8u);
    /* 007a6760: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a6762: mov dword ptr [ebx + 0x1c], edx */ W32((u32)(r_ebx+0x1cu), r_edx);
    /* 007a6765: mov dword ptr [ebx + 0x20], edx */ W32((u32)(r_ebx+0x20u), r_edx);
    /* 007a6768: mov dword ptr [ebx + 0x28], 0xd */ W32((u32)(r_ebx+0x28u), 0xdu);
    /* 007a676f: mov dword ptr [ebx + 0x24], edx */ W32((u32)(r_ebx+0x24u), r_edx);
    /* 007a6772: mov dword ptr [ebx + 0x2c], edx */ W32((u32)(r_ebx+0x2cu), r_edx);
    /* 007a6775: mov eax, ebx */ r_eax = r_ebx;
    /* 007a6777: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007a6778: ret 4 */ FN_RET(0x007a674c); r_esp += 8; return;
}

void f_007a677c(void) /* sub_7A677C */
{
    FN_ENTER(0x007a677c);
    /* 007a677c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007a677d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007a677e: mov ebx, ecx */ r_ebx = r_ecx;
    /* 007a6780: mov eax, dword ptr [ebx + 0x20] */ r_eax = R32((u32)(r_ebx+0x20u));
    /* 007a6783: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007a6785: je 0x7a678f */ if (fZ) goto L_007a678f;
L_007a6787:; BB(0x007a6787);
    /* 007a6787: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
    /* 007a678a: jmp 0x7a6861 */ goto L_007a6861;
L_007a678f:; BB(0x007a678f);
    /* 007a678f: call 0x782e8c */ r_esp -= 4; W32(r_esp, 0x7a6794u); f_00782e8c();
    /* 007a6794: lea edx, [eax + 8] */ r_edx = (u32)(r_eax+0x8u);
    /* 007a6797: cmp edx, 9 */ {  u32 a = r_edx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 007a679a: ja 0x7a685e */ if ((!fC&&!fZ)) goto L_007a685e;
L_007a67a0:; BB(0x007a67a0);
    /* 007a67a0: mov eax, dword ptr [eax*4 + 0x97d184] */ r_eax = R32((u32)(r_eax*4+0x97d184u));
    /* 007a67a7: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_007a685e:; BB(0x007a685e);
    /* 007a685e: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
L_007a6861:; BB(0x007a6861);
    /* 007a6861: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007a6864: ja 0x7a6b42 */ if ((!fC&&!fZ)) goto L_007a6b42;
L_007a686a:; BB(0x007a686a);
    /* 007a686a: mov eax, dword ptr [eax*4 + 0x97d128] */ r_eax = R32((u32)(r_eax*4+0x97d128u));
    /* 007a6871: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_007a6b42:; BB(0x007a6b42);
    /* 007a6b42: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007a6b43: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a6b44: ret  */ FN_RET(0x007a677c); r_esp += 4; return;
}

void f_007a67a9(void)
{
    FN_ENTER(0x007a67a9);
    /* 007a67a9: mov eax, dword ptr [ebx + 0x20] */ r_eax = R32((u32)(r_ebx+0x20u));
    /* 007a67ac: mov dword ptr [ebx + 0x24], 1 */ W32((u32)(r_ebx+0x24u), 0x1u);
    /* 007a67b3: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007a67b6: mov dword ptr [ebx + 0x20], eax */ W32((u32)(r_ebx+0x20u), r_eax);
    /* 007a67b9: mov dword ptr [ebx + 0x1c], 0xe */ W32((u32)(r_ebx+0x1cu), 0xeu);
    /* 007a67c0: mov eax, 0xe */ r_eax = 0xeu;
    /* 007a67c5: jmp 0x7a6861 */ goto L_007a6861;
L_007a6861:; BB(0x007a6861);
    /* 007a6861: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007a6864: ja 0x7a6b42 */ if ((!fC&&!fZ)) goto L_007a6b42;
L_007a686a:; BB(0x007a686a);
    /* 007a686a: mov eax, dword ptr [eax*4 + 0x97d128] */ r_eax = R32((u32)(r_eax*4+0x97d128u));
    /* 007a6871: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_007a6b42:; BB(0x007a6b42);
    /* 007a6b42: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007a6b43: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a6b44: ret  */ FN_RET(0x007a67a9); r_esp += 4; return;
}

void f_007a67ca(void)
{
    FN_ENTER(0x007a67ca);
    /* 007a67ca: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
    /* 007a67cd: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a67d0: je 0x7a6b45 */ if (fZ) goto L_007a6b45;
L_007a67d6:; BB(0x007a67d6);
    /* 007a67d6: jmp 0x7a6861 */ goto L_007a6861;
L_007a6861:; BB(0x007a6861);
    /* 007a6861: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007a6864: ja 0x7a6b42 */ if ((!fC&&!fZ)) goto L_007a6b42;
L_007a686a:; BB(0x007a686a);
    /* 007a686a: mov eax, dword ptr [eax*4 + 0x97d128] */ r_eax = R32((u32)(r_eax*4+0x97d128u));
    /* 007a6871: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_007a6b42:; BB(0x007a6b42);
    /* 007a6b42: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007a6b43: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a6b44: ret  */ FN_RET(0x007a67ca); r_esp += 4; return;
L_007a6b45:; BB(0x007a6b45);
    /* 007a6b45: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 007a6b48: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a6b4b: je 0x7a6b6a */ if (fZ) goto L_007a6b6a;
L_007a6b4d:; BB(0x007a6b4d);
    /* 007a6b4d: mov eax, 6 */ r_eax = 0x6u;
    /* 007a6b52: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a6b53: push 0x25 */ { u32 v = 0x25u; r_esp -= 4; W32(r_esp, v); }
    /* 007a6b55: mov dword ptr [ebx + 0x28], eax */ W32((u32)(r_ebx+0x28u), r_eax);
    /* 007a6b58: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7a6b5du); f_00792fe8();
    /* 007a6b5d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007a6b60: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007a6b62: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a6b63: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007a6b65: call 0x7a6d1c */ r_esp -= 4; W32(r_esp, 0x7a6b6au); f_007a6d1c();
L_007a6b6a:; BB(0x007a6b6a);
    /* 007a6b6a: mov dword ptr [ebx + 0x1c], 5 */ W32((u32)(r_ebx+0x1cu), 0x5u);
    /* 007a6b71: mov eax, 5 */ r_eax = 0x5u;
    /* 007a6b76: jmp 0x7a6861 */ goto L_007a6861;
}

void f_007a67db(void)
{
    FN_ENTER(0x007a67db);
    /* 007a67db: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
    /* 007a67de: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a67e1: je 0x7a6b7b */ if (fZ) goto L_007a6b7b;
L_007a67e7:; BB(0x007a67e7);
    /* 007a67e7: jmp 0x7a6861 */ goto L_007a6861;
L_007a6861:; BB(0x007a6861);
    /* 007a6861: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007a6864: ja 0x7a6b42 */ if ((!fC&&!fZ)) goto L_007a6b42;
L_007a686a:; BB(0x007a686a);
    /* 007a686a: mov eax, dword ptr [eax*4 + 0x97d128] */ r_eax = R32((u32)(r_eax*4+0x97d128u));
    /* 007a6871: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_007a6b42:; BB(0x007a6b42);
    /* 007a6b42: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007a6b43: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a6b44: ret  */ FN_RET(0x007a67db); r_esp += 4; return;
L_007a6b7b:; BB(0x007a6b7b);
    /* 007a6b7b: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 007a6b7e: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a6b81: je 0x7a6ba0 */ if (fZ) goto L_007a6ba0;
L_007a6b83:; BB(0x007a6b83);
    /* 007a6b83: mov eax, 4 */ r_eax = 0x4u;
    /* 007a6b88: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a6b89: push 0x25 */ { u32 v = 0x25u; r_esp -= 4; W32(r_esp, v); }
    /* 007a6b8b: mov dword ptr [ebx + 0x28], eax */ W32((u32)(r_ebx+0x28u), r_eax);
    /* 007a6b8e: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7a6b93u); f_00792fe8();
    /* 007a6b93: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007a6b96: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007a6b98: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a6b99: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007a6b9b: call 0x7a6d1c */ r_esp -= 4; W32(r_esp, 0x7a6ba0u); f_007a6d1c();
L_007a6ba0:; BB(0x007a6ba0);
    /* 007a6ba0: mov dword ptr [ebx + 0x1c], 7 */ W32((u32)(r_ebx+0x1cu), 0x7u);
    /* 007a6ba7: mov eax, 7 */ r_eax = 0x7u;
    /* 007a6bac: jmp 0x7a6861 */ goto L_007a6861;
}

void f_007a67e9(void)
{
    FN_ENTER(0x007a67e9);
    /* 007a67e9: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
    /* 007a67ec: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a67ef: je 0x7a6bb1 */ if (fZ) goto L_007a6bb1;
L_007a67f5:; BB(0x007a67f5);
    /* 007a67f5: jmp 0x7a6861 */ goto L_007a6861;
L_007a6861:; BB(0x007a6861);
    /* 007a6861: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007a6864: ja 0x7a6b42 */ if ((!fC&&!fZ)) goto L_007a6b42;
L_007a686a:; BB(0x007a686a);
    /* 007a686a: mov eax, dword ptr [eax*4 + 0x97d128] */ r_eax = R32((u32)(r_eax*4+0x97d128u));
    /* 007a6871: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_007a6b42:; BB(0x007a6b42);
    /* 007a6b42: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007a6b43: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a6b44: ret  */ FN_RET(0x007a67e9); r_esp += 4; return;
L_007a6bb1:; BB(0x007a6bb1);
    /* 007a6bb1: mov edx, dword ptr [ebx + 0x28] */ r_edx = R32((u32)(r_ebx+0x28u));
    /* 007a6bb4: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a6bb7: je 0x7a6861 */ if (fZ) goto L_007a6861;
L_007a6bbd:; BB(0x007a6bbd);
    /* 007a6bbd: mov eax, 3 */ r_eax = 0x3u;
    /* 007a6bc2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a6bc3: push 0x25 */ { u32 v = 0x25u; r_esp -= 4; W32(r_esp, v); }
    /* 007a6bc5: mov dword ptr [ebx + 0x28], eax */ W32((u32)(r_ebx+0x28u), r_eax);
    /* 007a6bc8: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7a6bcdu); f_00792fe8();
    /* 007a6bcd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007a6bd0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007a6bd2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a6bd3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007a6bd5: call 0x7a6d1c */ r_esp -= 4; W32(r_esp, 0x7a6bdau); f_007a6d1c();
    /* 007a6bda: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
    /* 007a6bdd: jmp 0x7a6861 */ goto L_007a6861;
}

void f_007a67f7(void)
{
    FN_ENTER(0x007a67f7);
    /* 007a67f7: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
    /* 007a67fa: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a67fd: je 0x7a6be2 */ if (fZ) goto L_007a6be2;
L_007a6803:; BB(0x007a6803);
    /* 007a6803: jmp 0x7a6861 */ goto L_007a6861;
L_007a6861:; BB(0x007a6861);
    /* 007a6861: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007a6864: ja 0x7a6b42 */ if ((!fC&&!fZ)) goto L_007a6b42;
L_007a686a:; BB(0x007a686a);
    /* 007a686a: mov eax, dword ptr [eax*4 + 0x97d128] */ r_eax = R32((u32)(r_eax*4+0x97d128u));
    /* 007a6871: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_007a6b42:; BB(0x007a6b42);
    /* 007a6b42: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007a6b43: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a6b44: ret  */ FN_RET(0x007a67f7); r_esp += 4; return;
L_007a6be2:; BB(0x007a6be2);
    /* 007a6be2: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 007a6be5: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a6be8: je 0x7a6c07 */ if (fZ) goto L_007a6c07;
L_007a6bea:; BB(0x007a6bea);
    /* 007a6bea: mov eax, 2 */ r_eax = 0x2u;
    /* 007a6bef: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a6bf0: push 0x25 */ { u32 v = 0x25u; r_esp -= 4; W32(r_esp, v); }
    /* 007a6bf2: mov dword ptr [ebx + 0x28], eax */ W32((u32)(r_ebx+0x28u), r_eax);
    /* 007a6bf5: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7a6bfau); f_00792fe8();
    /* 007a6bfa: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007a6bfd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007a6bff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a6c00: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007a6c02: call 0x7a6d1c */ r_esp -= 4; W32(r_esp, 0x7a6c07u); f_007a6d1c();
L_007a6c07:; BB(0x007a6c07);
    /* 007a6c07: mov dword ptr [ebx + 0x1c], 9 */ W32((u32)(r_ebx+0x1cu), 0x9u);
    /* 007a6c0e: mov eax, 9 */ r_eax = 0x9u;
    /* 007a6c13: jmp 0x7a6861 */ goto L_007a6861;
}

void f_007a6805(void)
{
    FN_ENTER(0x007a6805);
    /* 007a6805: mov eax, dword ptr [ebx + 0x20] */ r_eax = R32((u32)(r_ebx+0x20u));
    /* 007a6808: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007a680a: je 0x7a6821 */ if (fZ) goto L_007a6821;
L_007a680c:; BB(0x007a680c);
    /* 007a680c: mov dword ptr [ebx + 0x24], 0 */ W32((u32)(r_ebx+0x24u), 0x0u);
    /* 007a6813: mov eax, 3 */ r_eax = 0x3u;
    /* 007a6818: mov dword ptr [ebx + 0x1c], 3 */ W32((u32)(r_ebx+0x1cu), 0x3u);
    /* 007a681f: jmp 0x7a6824 */ goto L_007a6824;
L_007a6821:; BB(0x007a6821);
    /* 007a6821: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
L_007a6824:; BB(0x007a6824);
    /* 007a6824: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a6827: je 0x7a6c18 */ if (fZ) goto L_007a6c18;
L_007a682d:; BB(0x007a682d);
    /* 007a682d: jmp 0x7a6861 */ goto L_007a6861;
L_007a6861:; BB(0x007a6861);
    /* 007a6861: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007a6864: ja 0x7a6b42 */ if ((!fC&&!fZ)) goto L_007a6b42;
L_007a686a:; BB(0x007a686a);
    /* 007a686a: mov eax, dword ptr [eax*4 + 0x97d128] */ r_eax = R32((u32)(r_eax*4+0x97d128u));
    /* 007a6871: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_007a6b42:; BB(0x007a6b42);
    /* 007a6b42: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007a6b43: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a6b44: ret  */ FN_RET(0x007a6805); r_esp += 4; return;
L_007a6c18:; BB(0x007a6c18);
    /* 007a6c18: mov edx, dword ptr [ebx + 0x28] */ r_edx = R32((u32)(r_ebx+0x28u));
    /* 007a6c1b: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a6c1e: je 0x7a6861 */ if (fZ) goto L_007a6861;
L_007a6c24:; BB(0x007a6c24);
    /* 007a6c24: mov eax, 1 */ r_eax = 0x1u;
    /* 007a6c29: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a6c2a: push 0x25 */ { u32 v = 0x25u; r_esp -= 4; W32(r_esp, v); }
    /* 007a6c2c: mov dword ptr [ebx + 0x28], eax */ W32((u32)(r_ebx+0x28u), r_eax);
    /* 007a6c2f: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7a6c34u); f_00792fe8();
    /* 007a6c34: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007a6c37: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007a6c39: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a6c3a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007a6c3c: call 0x7a6d1c */ r_esp -= 4; W32(r_esp, 0x7a6c41u); f_007a6d1c();
    /* 007a6c41: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
    /* 007a6c44: jmp 0x7a6861 */ goto L_007a6861;
}

void f_007a682f(void)
{
    FN_ENTER(0x007a682f);
    /* 007a682f: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
    /* 007a6832: jmp 0x7a6861 */ goto L_007a6861;
L_007a6861:; BB(0x007a6861);
    /* 007a6861: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007a6864: ja 0x7a6b42 */ if ((!fC&&!fZ)) goto L_007a6b42;
L_007a686a:; BB(0x007a686a);
    /* 007a686a: mov eax, dword ptr [eax*4 + 0x97d128] */ r_eax = R32((u32)(r_eax*4+0x97d128u));
    /* 007a6871: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_007a6b42:; BB(0x007a6b42);
    /* 007a6b42: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007a6b43: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a6b44: ret  */ FN_RET(0x007a682f); r_esp += 4; return;
}

void f_007a6834(void)
{
    FN_ENTER(0x007a6834);
    /* 007a6834: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
    /* 007a6837: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a683a: je 0x7a6c49 */ if (fZ) goto L_007a6c49;
L_007a6840:; BB(0x007a6840);
    /* 007a6840: jmp 0x7a6861 */ goto L_007a6861;
L_007a6861:; BB(0x007a6861);
    /* 007a6861: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007a6864: ja 0x7a6b42 */ if ((!fC&&!fZ)) goto L_007a6b42;
L_007a686a:; BB(0x007a686a);
    /* 007a686a: mov eax, dword ptr [eax*4 + 0x97d128] */ r_eax = R32((u32)(r_eax*4+0x97d128u));
    /* 007a6871: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_007a6b42:; BB(0x007a6b42);
    /* 007a6b42: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007a6b43: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a6b44: ret  */ FN_RET(0x007a6834); r_esp += 4; return;
L_007a6c49:; BB(0x007a6c49);
    /* 007a6c49: mov edx, dword ptr [ebx + 0x28] */ r_edx = R32((u32)(r_ebx+0x28u));
    /* 007a6c4c: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a6c4f: je 0x7a6861 */ if (fZ) goto L_007a6861;
L_007a6c55:; BB(0x007a6c55);
    /* 007a6c55: mov eax, 0xa */ r_eax = 0xau;
    /* 007a6c5a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a6c5b: push 0x25 */ { u32 v = 0x25u; r_esp -= 4; W32(r_esp, v); }
    /* 007a6c5d: mov dword ptr [ebx + 0x28], eax */ W32((u32)(r_ebx+0x28u), r_eax);
    /* 007a6c60: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7a6c65u); f_00792fe8();
    /* 007a6c65: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007a6c68: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007a6c6a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a6c6b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007a6c6d: call 0x7a6d1c */ r_esp -= 4; W32(r_esp, 0x7a6c72u); f_007a6d1c();
    /* 007a6c72: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
    /* 007a6c75: jmp 0x7a6861 */ goto L_007a6861;
}

void f_007a6842(void)
{
    FN_ENTER(0x007a6842);
    /* 007a6842: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
    /* 007a6845: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a6848: je 0x7a6c7a */ if (fZ) goto L_007a6c7a;
L_007a684e:; BB(0x007a684e);
    /* 007a684e: jmp 0x7a6861 */ goto L_007a6861;
L_007a6861:; BB(0x007a6861);
    /* 007a6861: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007a6864: ja 0x7a6b42 */ if ((!fC&&!fZ)) goto L_007a6b42;
L_007a686a:; BB(0x007a686a);
    /* 007a686a: mov eax, dword ptr [eax*4 + 0x97d128] */ r_eax = R32((u32)(r_eax*4+0x97d128u));
    /* 007a6871: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_007a6b42:; BB(0x007a6b42);
    /* 007a6b42: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007a6b43: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a6b44: ret  */ FN_RET(0x007a6842); r_esp += 4; return;
L_007a6c7a:; BB(0x007a6c7a);
    /* 007a6c7a: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 007a6c7d: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a6c80: je 0x7a6c9f */ if (fZ) goto L_007a6c9f;
L_007a6c82:; BB(0x007a6c82);
    /* 007a6c82: mov eax, 5 */ r_eax = 0x5u;
    /* 007a6c87: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a6c88: push 0x25 */ { u32 v = 0x25u; r_esp -= 4; W32(r_esp, v); }
    /* 007a6c8a: mov dword ptr [ebx + 0x28], eax */ W32((u32)(r_ebx+0x28u), r_eax);
    /* 007a6c8d: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7a6c92u); f_00792fe8();
    /* 007a6c92: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007a6c95: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007a6c97: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a6c98: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007a6c9a: call 0x7a6d1c */ r_esp -= 4; W32(r_esp, 0x7a6c9fu); f_007a6d1c();
L_007a6c9f:; BB(0x007a6c9f);
    /* 007a6c9f: mov dword ptr [ebx + 0x1c], 7 */ W32((u32)(r_ebx+0x1cu), 0x7u);
    /* 007a6ca6: mov eax, 7 */ r_eax = 0x7u;
    /* 007a6cab: jmp 0x7a6861 */ goto L_007a6861;
}

void f_007a6850(void)
{
    FN_ENTER(0x007a6850);
    /* 007a6850: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
    /* 007a6853: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a6856: je 0x7a6cb0 */ if (fZ) goto L_007a6cb0;
L_007a685c:; BB(0x007a685c);
    /* 007a685c: jmp 0x7a6861 */ goto L_007a6861;
L_007a6861:; BB(0x007a6861);
    /* 007a6861: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007a6864: ja 0x7a6b42 */ if ((!fC&&!fZ)) goto L_007a6b42;
L_007a686a:; BB(0x007a686a);
    /* 007a686a: mov eax, dword ptr [eax*4 + 0x97d128] */ r_eax = R32((u32)(r_eax*4+0x97d128u));
    /* 007a6871: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_007a6b42:; BB(0x007a6b42);
    /* 007a6b42: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007a6b43: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a6b44: ret  */ FN_RET(0x007a6850); r_esp += 4; return;
L_007a6cb0:; BB(0x007a6cb0);
    /* 007a6cb0: mov edx, dword ptr [ebx + 0x28] */ r_edx = R32((u32)(r_ebx+0x28u));
    /* 007a6cb3: cmp edx, 0xe */ {  u32 a = r_edx; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a6cb6: je 0x7a6861 */ if (fZ) goto L_007a6861;
L_007a6cbc:; BB(0x007a6cbc);
    /* 007a6cbc: mov dword ptr [ebx + 0x28], 0xe */ W32((u32)(r_ebx+0x28u), 0xeu);
    /* 007a6cc3: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 007a6cc5: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 007a6cc7: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7a6cccu); f_00792fe8();
    /* 007a6ccc: mov ebp, eax */ r_ebp = r_eax;
    /* 007a6cce: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007a6cd1: mov ecx, dword ptr [ebx + 0x2c] */ r_ecx = R32((u32)(r_ebx+0x2cu));
    /* 007a6cd4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a6cd6: je 0x7a6ce4 */ if (fZ) goto L_007a6ce4;
L_007a6cd8:; BB(0x007a6cd8);
    /* 007a6cd8: call 0x73d160 */ r_esp -= 4; W32(r_esp, 0x7a6cddu); f_0073d160();
    /* 007a6cdd: mov dword ptr [ebx + 0x2c], 0 */ W32((u32)(r_ebx+0x2cu), 0x0u);
L_007a6ce4:; BB(0x007a6ce4);
    /* 007a6ce4: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 007a6cea: push dword ptr [0xaca37c] */ { u32 v = R32((u32)(0xaca37cu)); r_esp -= 4; W32(r_esp, v); }
    /* 007a6cf0: call 0x73cd8c */ r_esp -= 4; W32(r_esp, 0x7a6cf5u); f_0073cd8c();
    /* 007a6cf5: push 0xe6 */ { u32 v = 0xe6u; r_esp -= 4; W32(r_esp, v); }
    /* 007a6cfa: mov dword ptr [ebx + 0x2c], eax */ W32((u32)(r_ebx+0x2cu), r_eax);
    /* 007a6cfd: call 0x73ec3c */ r_esp -= 4; W32(r_esp, 0x7a6d02u); f_0073ec3c();
    /* 007a6d02: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007a6d05: push 0x43eb0000 */ { u32 v = 0x43eb0000u; r_esp -= 4; W32(r_esp, v); }
    /* 007a6d0a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a6d0b: mov ecx, dword ptr [ebx + 0x2c] */ r_ecx = R32((u32)(r_ebx+0x2cu));
    /* 007a6d0e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007a6d0f: call 0x73d0b0 */ r_esp -= 4; W32(r_esp, 0x7a6d14u); f_0073d0b0();
    /* 007a6d14: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
    /* 007a6d17: jmp 0x7a6861 */ goto L_007a6861;
}

void f_007a6873(void)
{
    FN_ENTER(0x007a6873);
    /* 007a6873: mov eax, dword ptr [0xa0f674] */ r_eax = R32((u32)(0xa0f674u));
    /* 007a6878: or eax, dword ptr [0xa0f678] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa0f678u)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007a687e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a687f: mov ecx, 0xaae75c */ r_ecx = 0xaae75cu;
    /* 007a6884: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x7a6889u); f_007c1160();
    /* 007a6889: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a688b: je 0x7a6b42 */ if (fZ) goto L_007a6b42;
L_007a6891:; BB(0x007a6891);
    /* 007a6891: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007a6893: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a6894: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a6895: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a6896: push 0x585 */ { u32 v = 0x585u; r_esp -= 4; W32(r_esp, v); }
    /* 007a689b: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x7a68a0u); f_00814298();
    /* 007a68a0: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007a68a3: mov dword ptr [ebx + 0x1c], 3 */ W32((u32)(r_ebx+0x1cu), 0x3u);
    /* 007a68aa: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007a68ab: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a68ac: ret  */ FN_RET(0x007a6873); r_esp += 4; return;
L_007a6b42:; BB(0x007a6b42);
    /* 007a6b42: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007a6b43: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a6b44: ret  */ FN_RET(0x007a6873); r_esp += 4; return;
}

void f_007a68ad(void)
{
    FN_ENTER(0x007a68ad);
    /* 007a68ad: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 007a68af: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x7a68b4u); f_006dc358();
    /* 007a68b4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007a68b5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a68b7: jne 0x7a6b42 */ if (!fZ) goto L_007a6b42;
L_007a68bd:; BB(0x007a68bd);
    /* 007a68bd: mov eax, dword ptr [ebx + 0x20] */ r_eax = R32((u32)(r_ebx+0x20u));
    /* 007a68c0: mov dword ptr [ebx + 0x1c], 0 */ W32((u32)(r_ebx+0x1cu), 0x0u);
    /* 007a68c7: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a68ca: mov dword ptr [ebx + 0x20], eax */ W32((u32)(r_ebx+0x20u), r_eax);
    /* 007a68cd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007a68ce: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a68cf: ret  */ FN_RET(0x007a68ad); r_esp += 4; return;
L_007a6b42:; BB(0x007a6b42);
    /* 007a6b42: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007a6b43: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a6b44: ret  */ FN_RET(0x007a68ad); r_esp += 4; return;
}

void f_007a68d0(void)
{
    FN_ENTER(0x007a68d0);
    /* 007a68d0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007a68d2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a68d3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a68d4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a68d5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a68d6: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 007a68d8: call 0x82c21c */ r_esp -= 4; W32(r_esp, 0x7a68ddu); f_0082c21c();
    /* 007a68dd: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007a68e0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a68e2: jne 0x7a691c */ if (!fZ) goto L_007a691c;
L_007a68e4:; BB(0x007a68e4);
    /* 007a68e4: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 007a68e7: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a68ea: je 0x7a6909 */ if (fZ) goto L_007a6909;
L_007a68ec:; BB(0x007a68ec);
    /* 007a68ec: mov eax, 8 */ r_eax = 0x8u;
    /* 007a68f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a68f2: push 0x25 */ { u32 v = 0x25u; r_esp -= 4; W32(r_esp, v); }
    /* 007a68f4: mov dword ptr [ebx + 0x28], eax */ W32((u32)(r_ebx+0x28u), r_eax);
    /* 007a68f7: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7a68fcu); f_00792fe8();
    /* 007a68fc: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007a68ff: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007a6901: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a6902: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007a6904: call 0x7a6d1c */ r_esp -= 4; W32(r_esp, 0x7a6909u); f_007a6d1c();
L_007a6909:; BB(0x007a6909);
    /* 007a6909: mov eax, dword ptr [ebx + 0x20] */ r_eax = R32((u32)(r_ebx+0x20u));
    /* 007a690c: mov dword ptr [ebx + 0x1c], 0xc */ W32((u32)(r_ebx+0x1cu), 0xcu);
    /* 007a6913: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a6916: mov dword ptr [ebx + 0x20], eax */ W32((u32)(r_ebx+0x20u), r_eax);
    /* 007a6919: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007a691a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a691b: ret  */ FN_RET(0x007a68d0); r_esp += 4; return;
L_007a691c:; BB(0x007a691c);
    /* 007a691c: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 007a691f: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007a6922: je 0x7a6941 */ if (fZ) goto L_007a6941;
L_007a6924:; BB(0x007a6924);
    /* 007a6924: mov eax, 9 */ r_eax = 0x9u;
    /* 007a6929: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a692a: push 0x25 */ { u32 v = 0x25u; r_esp -= 4; W32(r_esp, v); }
    /* 007a692c: mov dword ptr [ebx + 0x28], eax */ W32((u32)(r_ebx+0x28u), r_eax);
    /* 007a692f: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7a6934u); f_00792fe8();
    /* 007a6934: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007a6937: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007a6939: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a693a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007a693c: call 0x7a6d1c */ r_esp -= 4; W32(r_esp, 0x7a6941u); f_007a6d1c();
L_007a6941:; BB(0x007a6941);
    /* 007a6941: mov dword ptr [ebx + 0x1c], 0xd */ W32((u32)(r_ebx+0x1cu), 0xdu);
    /* 007a6948: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007a6949: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a694a: ret  */ FN_RET(0x007a68d0); r_esp += 4; return;
}

void f_007a694b(void)
{
    FN_ENTER(0x007a694b);
    /* 007a694b: mov eax, dword ptr [ebx + 0x20] */ r_eax = R32((u32)(r_ebx+0x20u));
    /* 007a694e: mov dword ptr [ebx + 0x1c], 0xa */ W32((u32)(r_ebx+0x1cu), 0xau);
    /* 007a6955: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007a6958: mov dword ptr [ebx + 0x20], eax */ W32((u32)(r_ebx+0x20u), r_eax);
    /* 007a695b: mov ecx, dword ptr [ebx + 0x2c] */ r_ecx = R32((u32)(r_ebx+0x2cu));
    /* 007a695e: call 0x73d114 */ r_esp -= 4; W32(r_esp, 0x7a6963u); f_0073d114();
    /* 007a6963: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a6965: je 0x7a6981 */ if (fZ) goto L_007a6981;
L_007a6967:; BB(0x007a6967);
    /* 007a6967: mov eax, dword ptr [ebx + 0x20] */ r_eax = R32((u32)(r_ebx+0x20u));
    /* 007a696a: mov dword ptr [ebx + 0x24], 2 */ W32((u32)(r_ebx+0x24u), 0x2u);
    /* 007a6971: and eax, 0xfffffffd */ {  u32 a = r_eax; u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a6974: mov dword ptr [ebx + 0x20], eax */ W32((u32)(r_ebx+0x20u), r_eax);
    /* 007a6977: mov dword ptr [ebx + 0x1c], 0xe */ W32((u32)(r_ebx+0x1cu), 0xeu);
    /* 007a697e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007a697f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a6980: ret  */ FN_RET(0x007a694b); r_esp += 4; return;
L_007a6981:; BB(0x007a6981);
    /* 007a6981: mov ecx, dword ptr [ebx + 0x2c] */ r_ecx = R32((u32)(r_ebx+0x2cu));
    /* 007a6984: call 0x73ce50 */ r_esp -= 4; W32(r_esp, 0x7a6989u); f_0073ce50();
    /* 007a6989: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a698b: je 0x7a6b42 */ if (fZ) goto L_007a6b42;
L_007a6991:; BB(0x007a6991);
    /* 007a6991: mov eax, dword ptr [ebx + 0x20] */ r_eax = R32((u32)(r_ebx+0x20u));
    /* 007a6994: mov ecx, dword ptr [ebx + 0x2c] */ r_ecx = R32((u32)(r_ebx+0x2cu));
    /* 007a6997: and eax, 0xfffffffd */ {  u32 a = r_eax; u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 007a699a: mov dword ptr [ebx + 0x20], eax */ W32((u32)(r_ebx+0x20u), r_eax);
    /* 007a699d: call 0x73d134 */ r_esp -= 4; W32(r_esp, 0x7a69a2u); f_0073d134();
    /* 007a69a2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a69a4: jne 0x7a69b0 */ if (!fZ) goto L_007a69b0;
L_007a69a6:; BB(0x007a69a6);
    /* 007a69a6: mov dword ptr [ebx + 0x1c], 0xb */ W32((u32)(r_ebx+0x1cu), 0xbu);
    /* 007a69ad: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007a69ae: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a69af: ret  */ FN_RET(0x007a694b); r_esp += 4; return;
L_007a69b0:; BB(0x007a69b0);
    /* 007a69b0: mov dword ptr [ebx + 0x24], 2 */ W32((u32)(r_ebx+0x24u), 0x2u);
    /* 007a69b7: mov dword ptr [ebx + 0x1c], 0xe */ W32((u32)(r_ebx+0x1cu), 0xeu);
    /* 007a69be: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007a69bf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a69c0: ret  */ FN_RET(0x007a694b); r_esp += 4; return;
L_007a6b42:; BB(0x007a6b42);
    /* 007a6b42: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007a6b43: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a6b44: ret  */ FN_RET(0x007a694b); r_esp += 4; return;
}

void f_007a695b(void)
{
    FN_ENTER(0x007a695b);
    /* 007a695b: mov ecx, dword ptr [ebx + 0x2c] */ r_ecx = R32((u32)(r_ebx+0x2cu));
    /* 007a695e: call 0x73d114 */ r_esp -= 4; W32(r_esp, 0x7a6963u); f_0073d114();
    /* 007a6963: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a6965: je 0x7a6981 */ if (fZ) goto L_007a6981;
L_007a6967:; BB(0x007a6967);
    /* 007a6967: mov eax, dword ptr [ebx + 0x20] */ r_eax = R32((u32)(r_ebx+0x20u));
    /* 007a696a: mov dword ptr [ebx + 0x24], 2 */ W32((u32)(r_ebx+0x24u), 0x2u);
    /* 007a6971: and eax, 0xfffffffd */ {  u32 a = r_eax; u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a6974: mov dword ptr [ebx + 0x20], eax */ W32((u32)(r_ebx+0x20u), r_eax);
    /* 007a6977: mov dword ptr [ebx + 0x1c], 0xe */ W32((u32)(r_ebx+0x1cu), 0xeu);
    /* 007a697e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007a697f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a6980: ret  */ FN_RET(0x007a695b); r_esp += 4; return;
L_007a6981:; BB(0x007a6981);
    /* 007a6981: mov ecx, dword ptr [ebx + 0x2c] */ r_ecx = R32((u32)(r_ebx+0x2cu));
    /* 007a6984: call 0x73ce50 */ r_esp -= 4; W32(r_esp, 0x7a6989u); f_0073ce50();
    /* 007a6989: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a698b: je 0x7a6b42 */ if (fZ) goto L_007a6b42;
L_007a6991:; BB(0x007a6991);
    /* 007a6991: mov eax, dword ptr [ebx + 0x20] */ r_eax = R32((u32)(r_ebx+0x20u));
    /* 007a6994: mov ecx, dword ptr [ebx + 0x2c] */ r_ecx = R32((u32)(r_ebx+0x2cu));
    /* 007a6997: and eax, 0xfffffffd */ {  u32 a = r_eax; u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 007a699a: mov dword ptr [ebx + 0x20], eax */ W32((u32)(r_ebx+0x20u), r_eax);
    /* 007a699d: call 0x73d134 */ r_esp -= 4; W32(r_esp, 0x7a69a2u); f_0073d134();
    /* 007a69a2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a69a4: jne 0x7a69b0 */ if (!fZ) goto L_007a69b0;
L_007a69a6:; BB(0x007a69a6);
    /* 007a69a6: mov dword ptr [ebx + 0x1c], 0xb */ W32((u32)(r_ebx+0x1cu), 0xbu);
    /* 007a69ad: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007a69ae: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a69af: ret  */ FN_RET(0x007a695b); r_esp += 4; return;
L_007a69b0:; BB(0x007a69b0);
    /* 007a69b0: mov dword ptr [ebx + 0x24], 2 */ W32((u32)(r_ebx+0x24u), 0x2u);
    /* 007a69b7: mov dword ptr [ebx + 0x1c], 0xe */ W32((u32)(r_ebx+0x1cu), 0xeu);
    /* 007a69be: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007a69bf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a69c0: ret  */ FN_RET(0x007a695b); r_esp += 4; return;
L_007a6b42:; BB(0x007a6b42);
    /* 007a6b42: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007a6b43: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a6b44: ret  */ FN_RET(0x007a695b); r_esp += 4; return;
}

void f_007a69c1(void)
{
    FN_ENTER(0x007a69c1);
    /* 007a69c1: mov eax, dword ptr [ebx + 0x20] */ r_eax = R32((u32)(r_ebx+0x20u));
    /* 007a69c4: mov dword ptr [ebx + 0x1c], 8 */ W32((u32)(r_ebx+0x1cu), 0x8u);
    /* 007a69cb: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007a69ce: mov dword ptr [ebx + 0x20], eax */ W32((u32)(r_ebx+0x20u), r_eax);
    /* 007a69d1: mov ecx, dword ptr [ebx + 0x2c] */ r_ecx = R32((u32)(r_ebx+0x2cu));
    /* 007a69d4: call 0x73d114 */ r_esp -= 4; W32(r_esp, 0x7a69d9u); f_0073d114();
    /* 007a69d9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a69db: je 0x7a69f7 */ if (fZ) goto L_007a69f7;
L_007a69dd:; BB(0x007a69dd);
    /* 007a69dd: mov eax, dword ptr [ebx + 0x20] */ r_eax = R32((u32)(r_ebx+0x20u));
    /* 007a69e0: mov dword ptr [ebx + 0x24], 2 */ W32((u32)(r_ebx+0x24u), 0x2u);
    /* 007a69e7: and eax, 0xfffffffd */ {  u32 a = r_eax; u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a69ea: mov dword ptr [ebx + 0x20], eax */ W32((u32)(r_ebx+0x20u), r_eax);
    /* 007a69ed: mov dword ptr [ebx + 0x1c], 0xe */ W32((u32)(r_ebx+0x1cu), 0xeu);
    /* 007a69f4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007a69f5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a69f6: ret  */ FN_RET(0x007a69c1); r_esp += 4; return;
L_007a69f7:; BB(0x007a69f7);
    /* 007a69f7: mov ecx, dword ptr [ebx + 0x2c] */ r_ecx = R32((u32)(r_ebx+0x2cu));
    /* 007a69fa: call 0x73ce50 */ r_esp -= 4; W32(r_esp, 0x7a69ffu); f_0073ce50();
    /* 007a69ff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a6a01: je 0x7a6b42 */ if (fZ) goto L_007a6b42;
L_007a6a07:; BB(0x007a6a07);
    /* 007a6a07: mov eax, dword ptr [ebx + 0x20] */ r_eax = R32((u32)(r_ebx+0x20u));
    /* 007a6a0a: mov ecx, dword ptr [ebx + 0x2c] */ r_ecx = R32((u32)(r_ebx+0x2cu));
    /* 007a6a0d: and eax, 0xfffffffd */ {  u32 a = r_eax; u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 007a6a10: mov dword ptr [ebx + 0x20], eax */ W32((u32)(r_ebx+0x20u), r_eax);
    /* 007a6a13: call 0x73d134 */ r_esp -= 4; W32(r_esp, 0x7a6a18u); f_0073d134();
    /* 007a6a18: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a6a1a: jne 0x7a6a2d */ if (!fZ) goto L_007a6a2d;
L_007a6a1c:; BB(0x007a6a1c);
    /* 007a6a1c: mov dword ptr [ebx + 0x24], 3 */ W32((u32)(r_ebx+0x24u), 0x3u);
    /* 007a6a23: mov dword ptr [ebx + 0x1c], 0xe */ W32((u32)(r_ebx+0x1cu), 0xeu);
    /* 007a6a2a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007a6a2b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a6a2c: ret  */ FN_RET(0x007a69c1); r_esp += 4; return;
L_007a6a2d:; BB(0x007a6a2d);
    /* 007a6a2d: mov dword ptr [ebx + 0x24], 2 */ W32((u32)(r_ebx+0x24u), 0x2u);
    /* 007a6a34: mov dword ptr [ebx + 0x1c], 0xe */ W32((u32)(r_ebx+0x1cu), 0xeu);
    /* 007a6a3b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007a6a3c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a6a3d: ret  */ FN_RET(0x007a69c1); r_esp += 4; return;
L_007a6b42:; BB(0x007a6b42);
    /* 007a6b42: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007a6b43: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a6b44: ret  */ FN_RET(0x007a69c1); r_esp += 4; return;
}

void f_007a69d1(void)
{
    FN_ENTER(0x007a69d1);
    /* 007a69d1: mov ecx, dword ptr [ebx + 0x2c] */ r_ecx = R32((u32)(r_ebx+0x2cu));
    /* 007a69d4: call 0x73d114 */ r_esp -= 4; W32(r_esp, 0x7a69d9u); f_0073d114();
    /* 007a69d9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a69db: je 0x7a69f7 */ if (fZ) goto L_007a69f7;
L_007a69dd:; BB(0x007a69dd);
    /* 007a69dd: mov eax, dword ptr [ebx + 0x20] */ r_eax = R32((u32)(r_ebx+0x20u));
    /* 007a69e0: mov dword ptr [ebx + 0x24], 2 */ W32((u32)(r_ebx+0x24u), 0x2u);
    /* 007a69e7: and eax, 0xfffffffd */ {  u32 a = r_eax; u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a69ea: mov dword ptr [ebx + 0x20], eax */ W32((u32)(r_ebx+0x20u), r_eax);
    /* 007a69ed: mov dword ptr [ebx + 0x1c], 0xe */ W32((u32)(r_ebx+0x1cu), 0xeu);
    /* 007a69f4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007a69f5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a69f6: ret  */ FN_RET(0x007a69d1); r_esp += 4; return;
L_007a69f7:; BB(0x007a69f7);
    /* 007a69f7: mov ecx, dword ptr [ebx + 0x2c] */ r_ecx = R32((u32)(r_ebx+0x2cu));
    /* 007a69fa: call 0x73ce50 */ r_esp -= 4; W32(r_esp, 0x7a69ffu); f_0073ce50();
    /* 007a69ff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a6a01: je 0x7a6b42 */ if (fZ) goto L_007a6b42;
L_007a6a07:; BB(0x007a6a07);
    /* 007a6a07: mov eax, dword ptr [ebx + 0x20] */ r_eax = R32((u32)(r_ebx+0x20u));
    /* 007a6a0a: mov ecx, dword ptr [ebx + 0x2c] */ r_ecx = R32((u32)(r_ebx+0x2cu));
    /* 007a6a0d: and eax, 0xfffffffd */ {  u32 a = r_eax; u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 007a6a10: mov dword ptr [ebx + 0x20], eax */ W32((u32)(r_ebx+0x20u), r_eax);
    /* 007a6a13: call 0x73d134 */ r_esp -= 4; W32(r_esp, 0x7a6a18u); f_0073d134();
    /* 007a6a18: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a6a1a: jne 0x7a6a2d */ if (!fZ) goto L_007a6a2d;
L_007a6a1c:; BB(0x007a6a1c);
    /* 007a6a1c: mov dword ptr [ebx + 0x24], 3 */ W32((u32)(r_ebx+0x24u), 0x3u);
    /* 007a6a23: mov dword ptr [ebx + 0x1c], 0xe */ W32((u32)(r_ebx+0x1cu), 0xeu);
    /* 007a6a2a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007a6a2b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a6a2c: ret  */ FN_RET(0x007a69d1); r_esp += 4; return;
L_007a6a2d:; BB(0x007a6a2d);
    /* 007a6a2d: mov dword ptr [ebx + 0x24], 2 */ W32((u32)(r_ebx+0x24u), 0x2u);
    /* 007a6a34: mov dword ptr [ebx + 0x1c], 0xe */ W32((u32)(r_ebx+0x1cu), 0xeu);
    /* 007a6a3b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007a6a3c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a6a3d: ret  */ FN_RET(0x007a69d1); r_esp += 4; return;
L_007a6b42:; BB(0x007a6b42);
    /* 007a6b42: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007a6b43: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a6b44: ret  */ FN_RET(0x007a69d1); r_esp += 4; return;
}

void f_007a6a3e(void)
{
    FN_ENTER(0x007a6a3e);
    /* 007a6a3e: mov eax, dword ptr [ebx + 0x20] */ r_eax = R32((u32)(r_ebx+0x20u));
    /* 007a6a41: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007a6a44: mov dword ptr [ebx + 0x20], eax */ W32((u32)(r_ebx+0x20u), r_eax);
    /* 007a6a47: call 0x7083d4 */ r_esp -= 4; W32(r_esp, 0x7a6a4cu); f_007083d4();
    /* 007a6a4c: mov dword ptr [ebx + 0x1c], 6 */ W32((u32)(r_ebx+0x1cu), 0x6u);
    /* 007a6a53: call 0x782f84 */ r_esp -= 4; W32(r_esp, 0x7a6a58u); f_00782f84();
    /* 007a6a58: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a6a5a: je 0x7a6b42 */ if (fZ) goto L_007a6b42;
L_007a6a60:; BB(0x007a6a60);
    /* 007a6a60: mov eax, dword ptr [ebx + 0x20] */ r_eax = R32((u32)(r_ebx+0x20u));
    /* 007a6a63: mov dword ptr [ebx + 0x1c], 3 */ W32((u32)(r_ebx+0x1cu), 0x3u);
    /* 007a6a6a: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a6a6d: mov dword ptr [ebx + 0x20], eax */ W32((u32)(r_ebx+0x20u), r_eax);
    /* 007a6a70: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007a6a71: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a6a72: ret  */ FN_RET(0x007a6a3e); r_esp += 4; return;
L_007a6b42:; BB(0x007a6b42);
    /* 007a6b42: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007a6b43: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a6b44: ret  */ FN_RET(0x007a6a3e); r_esp += 4; return;
}

void f_007a6a53(void)
{
    FN_ENTER(0x007a6a53);
    /* 007a6a53: call 0x782f84 */ r_esp -= 4; W32(r_esp, 0x7a6a58u); f_00782f84();
    /* 007a6a58: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a6a5a: je 0x7a6b42 */ if (fZ) goto L_007a6b42;
L_007a6a60:; BB(0x007a6a60);
    /* 007a6a60: mov eax, dword ptr [ebx + 0x20] */ r_eax = R32((u32)(r_ebx+0x20u));
    /* 007a6a63: mov dword ptr [ebx + 0x1c], 3 */ W32((u32)(r_ebx+0x1cu), 0x3u);
    /* 007a6a6a: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a6a6d: mov dword ptr [ebx + 0x20], eax */ W32((u32)(r_ebx+0x20u), r_eax);
    /* 007a6a70: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007a6a71: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a6a72: ret  */ FN_RET(0x007a6a53); r_esp += 4; return;
L_007a6b42:; BB(0x007a6b42);
    /* 007a6b42: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007a6b43: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a6b44: ret  */ FN_RET(0x007a6a53); r_esp += 4; return;
}

void f_007a6a73(void)
{
    FN_ENTER(0x007a6a73);
    /* 007a6a73: mov eax, dword ptr [ebx + 0x20] */ r_eax = R32((u32)(r_ebx+0x20u));
    /* 007a6a76: mov dword ptr [ebx + 0x1c], 4 */ W32((u32)(r_ebx+0x1cu), 0x4u);
    /* 007a6a7d: and eax, 0xfffffffd */ {  u32 a = r_eax; u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 007a6a80: mov dword ptr [ebx + 0x20], eax */ W32((u32)(r_ebx+0x20u), r_eax);
    /* 007a6a83: mov eax, dword ptr [0xa0f674] */ r_eax = R32((u32)(0xa0f674u));
    /* 007a6a88: or eax, dword ptr [0xa0f678] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa0f678u)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007a6a8e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a6a8f: mov ecx, 0xaae75c */ r_ecx = 0xaae75cu;
    /* 007a6a94: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x7a6a99u); f_007c1160();
    /* 007a6a99: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a6a9b: je 0x7a6b42 */ if (fZ) goto L_007a6b42;
L_007a6aa1:; BB(0x007a6aa1);
    /* 007a6aa1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007a6aa3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a6aa4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a6aa5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a6aa6: push 0x585 */ { u32 v = 0x585u; r_esp -= 4; W32(r_esp, v); }
    /* 007a6aab: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x7a6ab0u); f_00814298();
    /* 007a6ab0: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007a6ab3: mov eax, dword ptr [ebx + 0x20] */ r_eax = R32((u32)(r_ebx+0x20u));
    /* 007a6ab6: mov dword ptr [ebx + 0x24], 2 */ W32((u32)(r_ebx+0x24u), 0x2u);
    /* 007a6abd: and eax, 0xfffffffd */ {  u32 a = r_eax; u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a6ac0: mov dword ptr [ebx + 0x20], eax */ W32((u32)(r_ebx+0x20u), r_eax);
    /* 007a6ac3: mov dword ptr [ebx + 0x1c], 0xe */ W32((u32)(r_ebx+0x1cu), 0xeu);
    /* 007a6aca: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007a6acb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a6acc: ret  */ FN_RET(0x007a6a73); r_esp += 4; return;
L_007a6b42:; BB(0x007a6b42);
    /* 007a6b42: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007a6b43: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a6b44: ret  */ FN_RET(0x007a6a73); r_esp += 4; return;
}

void f_007a6a83(void)
{
    FN_ENTER(0x007a6a83);
    /* 007a6a83: mov eax, dword ptr [0xa0f674] */ r_eax = R32((u32)(0xa0f674u));
    /* 007a6a88: or eax, dword ptr [0xa0f678] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa0f678u)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007a6a8e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a6a8f: mov ecx, 0xaae75c */ r_ecx = 0xaae75cu;
    /* 007a6a94: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x7a6a99u); f_007c1160();
    /* 007a6a99: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a6a9b: je 0x7a6b42 */ if (fZ) goto L_007a6b42;
L_007a6aa1:; BB(0x007a6aa1);
    /* 007a6aa1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007a6aa3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a6aa4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a6aa5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a6aa6: push 0x585 */ { u32 v = 0x585u; r_esp -= 4; W32(r_esp, v); }
    /* 007a6aab: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x7a6ab0u); f_00814298();
    /* 007a6ab0: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007a6ab3: mov eax, dword ptr [ebx + 0x20] */ r_eax = R32((u32)(r_ebx+0x20u));
    /* 007a6ab6: mov dword ptr [ebx + 0x24], 2 */ W32((u32)(r_ebx+0x24u), 0x2u);
    /* 007a6abd: and eax, 0xfffffffd */ {  u32 a = r_eax; u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a6ac0: mov dword ptr [ebx + 0x20], eax */ W32((u32)(r_ebx+0x20u), r_eax);
    /* 007a6ac3: mov dword ptr [ebx + 0x1c], 0xe */ W32((u32)(r_ebx+0x1cu), 0xeu);
    /* 007a6aca: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007a6acb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a6acc: ret  */ FN_RET(0x007a6a83); r_esp += 4; return;
L_007a6b42:; BB(0x007a6b42);
    /* 007a6b42: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007a6b43: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a6b44: ret  */ FN_RET(0x007a6a83); r_esp += 4; return;
}

void f_007a6acd(void)
{
    FN_ENTER(0x007a6acd);
    /* 007a6acd: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 007a6ad0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a6ad2: je 0x7a6aee */ if (fZ) goto L_007a6aee;
L_007a6ad4:; BB(0x007a6ad4);
    /* 007a6ad4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007a6ad6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a6ad7: push 0x25 */ { u32 v = 0x25u; r_esp -= 4; W32(r_esp, v); }
    /* 007a6ad9: mov dword ptr [ebx + 0x28], eax */ W32((u32)(r_ebx+0x28u), r_eax);
    /* 007a6adc: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7a6ae1u); f_00792fe8();
    /* 007a6ae1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007a6ae4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007a6ae6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a6ae7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007a6ae9: call 0x7a6d1c */ r_esp -= 4; W32(r_esp, 0x7a6aeeu); f_007a6d1c();
L_007a6aee:; BB(0x007a6aee);
    /* 007a6aee: mov dword ptr [ebx + 0x1c], 2 */ W32((u32)(r_ebx+0x1cu), 0x2u);
    /* 007a6af5: mov ecx, dword ptr [ebx + 0x2c] */ r_ecx = R32((u32)(r_ebx+0x2cu));
    /* 007a6af8: call 0x73d114 */ r_esp -= 4; W32(r_esp, 0x7a6afdu); f_0073d114();
    /* 007a6afd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a6aff: je 0x7a6b12 */ if (fZ) goto L_007a6b12;
L_007a6b01:; BB(0x007a6b01);
    /* 007a6b01: mov dword ptr [ebx + 0x24], 2 */ W32((u32)(r_ebx+0x24u), 0x2u);
    /* 007a6b08: mov dword ptr [ebx + 0x1c], 0xe */ W32((u32)(r_ebx+0x1cu), 0xeu);
    /* 007a6b0f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007a6b10: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a6b11: ret  */ FN_RET(0x007a6acd); r_esp += 4; return;
L_007a6b12:; BB(0x007a6b12);
    /* 007a6b12: mov ecx, dword ptr [ebx + 0x2c] */ r_ecx = R32((u32)(r_ebx+0x2cu));
    /* 007a6b15: call 0x73ce50 */ r_esp -= 4; W32(r_esp, 0x7a6b1au); f_0073ce50();
    /* 007a6b1a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a6b1c: je 0x7a6b42 */ if (fZ) goto L_007a6b42;
L_007a6b1e:; BB(0x007a6b1e);
    /* 007a6b1e: mov ecx, dword ptr [ebx + 0x2c] */ r_ecx = R32((u32)(r_ebx+0x2cu));
    /* 007a6b21: call 0x73d134 */ r_esp -= 4; W32(r_esp, 0x7a6b26u); f_0073d134();
    /* 007a6b26: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a6b28: jne 0x7a6b34 */ if (!fZ) goto L_007a6b34;
L_007a6b2a:; BB(0x007a6b2a);
    /* 007a6b2a: mov dword ptr [ebx + 0x1c], 3 */ W32((u32)(r_ebx+0x1cu), 0x3u);
    /* 007a6b31: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007a6b32: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a6b33: ret  */ FN_RET(0x007a6acd); r_esp += 4; return;
L_007a6b34:; BB(0x007a6b34);
    /* 007a6b34: mov dword ptr [ebx + 0x24], 2 */ W32((u32)(r_ebx+0x24u), 0x2u);
    /* 007a6b3b: mov dword ptr [ebx + 0x1c], 0xe */ W32((u32)(r_ebx+0x1cu), 0xeu);
L_007a6b42:; BB(0x007a6b42);
    /* 007a6b42: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007a6b43: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a6b44: ret  */ FN_RET(0x007a6acd); r_esp += 4; return;
}

void f_007a6af5(void)
{
    FN_ENTER(0x007a6af5);
    /* 007a6af5: mov ecx, dword ptr [ebx + 0x2c] */ r_ecx = R32((u32)(r_ebx+0x2cu));
    /* 007a6af8: call 0x73d114 */ r_esp -= 4; W32(r_esp, 0x7a6afdu); f_0073d114();
    /* 007a6afd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a6aff: je 0x7a6b12 */ if (fZ) goto L_007a6b12;
L_007a6b01:; BB(0x007a6b01);
    /* 007a6b01: mov dword ptr [ebx + 0x24], 2 */ W32((u32)(r_ebx+0x24u), 0x2u);
    /* 007a6b08: mov dword ptr [ebx + 0x1c], 0xe */ W32((u32)(r_ebx+0x1cu), 0xeu);
    /* 007a6b0f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007a6b10: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a6b11: ret  */ FN_RET(0x007a6af5); r_esp += 4; return;
L_007a6b12:; BB(0x007a6b12);
    /* 007a6b12: mov ecx, dword ptr [ebx + 0x2c] */ r_ecx = R32((u32)(r_ebx+0x2cu));
    /* 007a6b15: call 0x73ce50 */ r_esp -= 4; W32(r_esp, 0x7a6b1au); f_0073ce50();
    /* 007a6b1a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a6b1c: je 0x7a6b42 */ if (fZ) goto L_007a6b42;
L_007a6b1e:; BB(0x007a6b1e);
    /* 007a6b1e: mov ecx, dword ptr [ebx + 0x2c] */ r_ecx = R32((u32)(r_ebx+0x2cu));
    /* 007a6b21: call 0x73d134 */ r_esp -= 4; W32(r_esp, 0x7a6b26u); f_0073d134();
    /* 007a6b26: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a6b28: jne 0x7a6b34 */ if (!fZ) goto L_007a6b34;
L_007a6b2a:; BB(0x007a6b2a);
    /* 007a6b2a: mov dword ptr [ebx + 0x1c], 3 */ W32((u32)(r_ebx+0x1cu), 0x3u);
    /* 007a6b31: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007a6b32: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a6b33: ret  */ FN_RET(0x007a6af5); r_esp += 4; return;
L_007a6b34:; BB(0x007a6b34);
    /* 007a6b34: mov dword ptr [ebx + 0x24], 2 */ W32((u32)(r_ebx+0x24u), 0x2u);
    /* 007a6b3b: mov dword ptr [ebx + 0x1c], 0xe */ W32((u32)(r_ebx+0x1cu), 0xeu);
L_007a6b42:; BB(0x007a6b42);
    /* 007a6b42: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007a6b43: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a6b44: ret  */ FN_RET(0x007a6af5); r_esp += 4; return;
}

void f_007a6b42(void)
{
    FN_ENTER(0x007a6b42);
    /* 007a6b42: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007a6b43: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a6b44: ret  */ FN_RET(0x007a6b42); r_esp += 4; return;
}

void f_007a6d1c(void) /* sub_7A6D1C */
{
    FN_ENTER(0x007a6d1c);
    /* 007a6d1c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007a6d1d: mov ebp, ecx */ r_ebp = r_ecx;
    /* 007a6d1f: mov ecx, dword ptr [ebp + 0x2c] */ r_ecx = R32((u32)(r_ebp+0x2cu));
    /* 007a6d22: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a6d24: je 0x7a6d32 */ if (fZ) goto L_007a6d32;
L_007a6d26:; BB(0x007a6d26);
    /* 007a6d26: call 0x73d160 */ r_esp -= 4; W32(r_esp, 0x7a6d2bu); f_0073d160();
    /* 007a6d2b: mov dword ptr [ebp + 0x2c], 0 */ W32((u32)(r_ebp+0x2cu), 0x0u);
L_007a6d32:; BB(0x007a6d32);
    /* 007a6d32: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 007a6d38: push dword ptr [0xaca37c] */ { u32 v = R32((u32)(0xaca37cu)); r_esp -= 4; W32(r_esp, v); }
    /* 007a6d3e: call 0x73cd8c */ r_esp -= 4; W32(r_esp, 0x7a6d43u); f_0073cd8c();
    /* 007a6d43: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007a6d46: mov dword ptr [ebp + 0x2c], eax */ W32((u32)(r_ebp+0x2cu), r_eax);
    /* 007a6d49: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 007a6d4d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a6d4f: je 0x7a6d73 */ if (fZ) goto L_007a6d73;
L_007a6d51:; BB(0x007a6d51);
    /* 007a6d51: push 0xe6 */ { u32 v = 0xe6u; r_esp -= 4; W32(r_esp, v); }
    /* 007a6d56: call 0x73ec3c */ r_esp -= 4; W32(r_esp, 0x7a6d5bu); f_0073ec3c();
    /* 007a6d5b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007a6d5c: push 0x43eb0000 */ { u32 v = 0x43eb0000u; r_esp -= 4; W32(r_esp, v); }
    /* 007a6d61: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a6d62: mov ecx, dword ptr [ebp + 0x2c] */ r_ecx = R32((u32)(r_ebp+0x2cu));
    /* 007a6d65: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 007a6d69: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a6d6a: call 0x73ce70 */ r_esp -= 4; W32(r_esp, 0x7a6d6fu); f_0073ce70();
    /* 007a6d6f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a6d70: ret 8 */ FN_RET(0x007a6d1c); r_esp += 12; return;
L_007a6d73:; BB(0x007a6d73);
    /* 007a6d73: push 0xe6 */ { u32 v = 0xe6u; r_esp -= 4; W32(r_esp, v); }
    /* 007a6d78: call 0x73ec3c */ r_esp -= 4; W32(r_esp, 0x7a6d7du); f_0073ec3c();
    /* 007a6d7d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007a6d7e: push 0x43eb0000 */ { u32 v = 0x43eb0000u; r_esp -= 4; W32(r_esp, v); }
    /* 007a6d83: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a6d84: mov ecx, dword ptr [ebp + 0x2c] */ r_ecx = R32((u32)(r_ebp+0x2cu));
    /* 007a6d87: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 007a6d8b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a6d8c: call 0x73d0b0 */ r_esp -= 4; W32(r_esp, 0x7a6d91u); f_0073d0b0();
    /* 007a6d91: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a6d92: ret 8 */ FN_RET(0x007a6d1c); r_esp += 12; return;
}

void f_007a6d98(void) /* sub_7A6D98 */
{
    FN_ENTER(0x007a6d98);
    /* 007a6d98: mov eax, dword ptr [ecx + 0x24] */ r_eax = R32((u32)(r_ecx+0x24u));
    /* 007a6d9b: ret  */ FN_RET(0x007a6d98); r_esp += 4; return;
}

void f_007a6d9c(void) /* sub_7A6D9C */
{
    FN_ENTER(0x007a6d9c);
    /* 007a6d9c: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x7a6da1u); f_00807ac0();
    /* 007a6da1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a6da2: call 0x815584 */ r_esp -= 4; W32(r_esp, 0x7a6da7u); f_00815584();
    /* 007a6da7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007a6da8: call 0x781fc4 */ r_esp -= 4; W32(r_esp, 0x7a6dadu); f_00781fc4();
    /* 007a6dad: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a6daf: je 0x7a6db4 */ if (fZ) goto L_007a6db4;
L_007a6db1:; BB(0x007a6db1);
    /* 007a6db1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a6db3: ret  */ FN_RET(0x007a6d9c); r_esp += 4; return;
L_007a6db4:; BB(0x007a6db4);
    /* 007a6db4: call 0x793f64 */ r_esp -= 4; W32(r_esp, 0x7a6db9u); f_00793f64();
    /* 007a6db9: call 0x782098 */ r_esp -= 4; W32(r_esp, 0x7a6dbeu); f_00782098();
    /* 007a6dbe: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 007a6dc0: call 0x814c7c */ r_esp -= 4; W32(r_esp, 0x7a6dc5u); f_00814c7c();
    /* 007a6dc5: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 007a6dc7: call 0x6bb100 */ r_esp -= 4; W32(r_esp, 0x7a6dccu); f_006bb100();
    /* 007a6dcc: mov eax, 1 */ r_eax = 0x1u;
    /* 007a6dd1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007a6dd4: ret  */ FN_RET(0x007a6d9c); r_esp += 4; return;
}

void f_007a6dd8(void) /* sub_7A6DD8 */
{
    FN_ENTER(0x007a6dd8);
    /* 007a6dd8: call 0x815578 */ r_esp -= 4; W32(r_esp, 0x7a6dddu); f_00815578();
    /* 007a6ddd: call 0x815434 */ r_esp -= 4; W32(r_esp, 0x7a6de2u); f_00815434();
    /* 007a6de2: call 0x782048 */ r_esp -= 4; W32(r_esp, 0x7a6de7u); f_00782048();
    /* 007a6de7: ret  */ FN_RET(0x007a6dd8); r_esp += 4; return;
}

void f_007a6de8(void) /* sub_7A6DE8 */
{
    FN_ENTER(0x007a6de8);
    /* 007a6de8: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x7a6dedu); f_00807ac0();
    /* 007a6ded: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a6dee: call 0x815584 */ r_esp -= 4; W32(r_esp, 0x7a6df3u); f_00815584();
    /* 007a6df3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007a6df4: call 0x781fc4 */ r_esp -= 4; W32(r_esp, 0x7a6df9u); f_00781fc4();
    /* 007a6df9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a6dfb: je 0x7a6e00 */ if (fZ) goto L_007a6e00;
L_007a6dfd:; BB(0x007a6dfd);
    /* 007a6dfd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a6dff: ret  */ FN_RET(0x007a6de8); r_esp += 4; return;
L_007a6e00:; BB(0x007a6e00);
    /* 007a6e00: call 0x793f64 */ r_esp -= 4; W32(r_esp, 0x7a6e05u); f_00793f64();
    /* 007a6e05: call 0x782098 */ r_esp -= 4; W32(r_esp, 0x7a6e0au); f_00782098();
    /* 007a6e0a: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 007a6e0c: call 0x814c7c */ r_esp -= 4; W32(r_esp, 0x7a6e11u); f_00814c7c();
    /* 007a6e11: mov eax, 1 */ r_eax = 0x1u;
    /* 007a6e16: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007a6e17: ret  */ FN_RET(0x007a6de8); r_esp += 4; return;
}

void f_007a6e18(void) /* sub_7A6E18 */
{
    FN_ENTER(0x007a6e18);
    /* 007a6e18: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007a6e1b: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x7a6e20u); f_00807ac0();
    /* 007a6e20: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a6e21: call 0x815584 */ r_esp -= 4; W32(r_esp, 0x7a6e26u); f_00815584();
    /* 007a6e26: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007a6e27: call 0x781fc4 */ r_esp -= 4; W32(r_esp, 0x7a6e2cu); f_00781fc4();
    /* 007a6e2c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a6e2e: je 0x7a6e36 */ if (fZ) goto L_007a6e36;
L_007a6e30:; BB(0x007a6e30);
    /* 007a6e30: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007a6e32: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007a6e35: ret  */ FN_RET(0x007a6e18); r_esp += 4; return;
L_007a6e36:; BB(0x007a6e36);
    /* 007a6e36: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 007a6e38: push 0x9ff8f8 */ { u32 v = 0x9ff8f8u; r_esp -= 4; W32(r_esp, v); }
    /* 007a6e3d: call 0x78b184 */ r_esp -= 4; W32(r_esp, 0x7a6e42u); f_0078b184();
    /* 007a6e42: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007a6e45: call 0x520e6c */ r_esp -= 4; W32(r_esp, 0x7a6e4au); f_00520e6c();
    /* 007a6e4a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a6e4c: jne 0x7a6ec0 */ if (!fZ) goto L_007a6ec0;
L_007a6e4e:; BB(0x007a6e4e);
    /* 007a6e4e: mov dword ptr [esp + 4], 0x40333333 */ W32((u32)(r_esp+0x4u), 0x40333333u);
    /* 007a6e56: mov eax, 0xbfb9999a */ r_eax = 0xbfb9999au;
    /* 007a6e5b: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 007a6e5e: mov dword ptr [esp + 8], 0xbecccccd */ W32((u32)(r_esp+0x8u), 0xbecccccdu);
    /* 007a6e66: mov dword ptr [esp + 0x18], 0x3f800000 */ W32((u32)(r_esp+0x18u), 0x3f800000u);
    /* 007a6e6e: mov dword ptr [esp + 0x1c], 0x3f75c28f */ W32((u32)(r_esp+0x1cu), 0x3f75c28fu);
    /* 007a6e76: mov dword ptr [esp + 0x20], 0x3e99999a */ W32((u32)(r_esp+0x20u), 0x3e99999au);
    /* 007a6e7e: mov dword ptr [esp + 0x34], 0x3f800000 */ W32((u32)(r_esp+0x34u), 0x3f800000u);
    /* 007a6e86: mov dword ptr [esp + 0x38], 0x3dcccccd */ W32((u32)(r_esp+0x38u), 0x3dcccccdu);
    /* 007a6e8e: mov dword ptr [esp + 0x3c], 0x3e75c28f */ W32((u32)(r_esp+0x3cu), 0x3e75c28fu);
    /* 007a6e96: mov dword ptr [esp + 0x40], 0x3ecccccd */ W32((u32)(r_esp+0x40u), 0x3ecccccdu);
    /* 007a6e9e: mov dword ptr [esp + 0x24], 0x3f800000 */ W32((u32)(r_esp+0x24u), 0x3f800000u);
    /* 007a6ea6: mov dword ptr [esp + 0x28], 0x3f800000 */ W32((u32)(r_esp+0x28u), 0x3f800000u);
    /* 007a6eae: mov dword ptr [esp + 0x2c], 0x3f028f5c */ W32((u32)(r_esp+0x2cu), 0x3f028f5cu);
    /* 007a6eb6: mov dword ptr [esp + 0x30], 0x3ecccccd */ W32((u32)(r_esp+0x30u), 0x3ecccccdu);
    /* 007a6ebe: jmp 0x7a6f30 */ goto L_007a6f30;
L_007a6ec0:; BB(0x007a6ec0);
    /* 007a6ec0: mov dword ptr [esp + 4], 0x40333333 */ W32((u32)(r_esp+0x4u), 0x40333333u);
    /* 007a6ec8: mov eax, 0xbfb9999a */ r_eax = 0xbfb9999au;
    /* 007a6ecd: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 007a6ed0: mov dword ptr [esp + 8], 0xbecccccd */ W32((u32)(r_esp+0x8u), 0xbecccccdu);
    /* 007a6ed8: mov dword ptr [esp + 0x18], 0x3f800000 */ W32((u32)(r_esp+0x18u), 0x3f800000u);
    /* 007a6ee0: mov dword ptr [esp + 0x1c], 0x3f75c28f */ W32((u32)(r_esp+0x1cu), 0x3f75c28fu);
    /* 007a6ee8: mov dword ptr [esp + 0x20], 0x3f400000 */ W32((u32)(r_esp+0x20u), 0x3f400000u);
    /* 007a6ef0: mov dword ptr [esp + 0x34], 0x3f800000 */ W32((u32)(r_esp+0x34u), 0x3f800000u);
    /* 007a6ef8: mov dword ptr [esp + 0x38], 0x3dcccccd */ W32((u32)(r_esp+0x38u), 0x3dcccccdu);
    /* 007a6f00: mov dword ptr [esp + 0x3c], 0x3e75c28f */ W32((u32)(r_esp+0x3cu), 0x3e75c28fu);
    /* 007a6f08: mov dword ptr [esp + 0x40], 0x3ecccccd */ W32((u32)(r_esp+0x40u), 0x3ecccccdu);
    /* 007a6f10: mov dword ptr [esp + 0x24], 0x3f800000 */ W32((u32)(r_esp+0x24u), 0x3f800000u);
    /* 007a6f18: mov dword ptr [esp + 0x28], 0x3f59999a */ W32((u32)(r_esp+0x28u), 0x3f59999au);
    /* 007a6f20: mov dword ptr [esp + 0x2c], 0x3f800000 */ W32((u32)(r_esp+0x2cu), 0x3f800000u);
    /* 007a6f28: mov dword ptr [esp + 0x30], 0x3f800000 */ W32((u32)(r_esp+0x30u), 0x3f800000u);
L_007a6f30:; BB(0x007a6f30);
    /* 007a6f30: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 007a6f33: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a6f34: call 0x794034 */ r_esp -= 4; W32(r_esp, 0x7a6f39u); f_00794034();
    /* 007a6f39: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007a6f3a: call 0x782098 */ r_esp -= 4; W32(r_esp, 0x7a6f3fu); f_00782098();
    /* 007a6f3f: call 0x427528 */ r_esp -= 4; W32(r_esp, 0x7a6f44u); f_00427528();
    /* 007a6f44: push 0x97926c */ { u32 v = 0x97926cu; r_esp -= 4; W32(r_esp, v); }
    /* 007a6f49: call 0x814afc */ r_esp -= 4; W32(r_esp, 0x7a6f4eu); f_00814afc();
    /* 007a6f4e: mov eax, 1 */ r_eax = 0x1u;
    /* 007a6f53: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007a6f56: ret  */ FN_RET(0x007a6e18); r_esp += 4; return;
}

void f_007a6f58(void) /* sub_7A6F58 */
{
    FN_ENTER(0x007a6f58);
    /* 007a6f58: call 0x815578 */ r_esp -= 4; W32(r_esp, 0x7a6f5du); f_00815578();
    /* 007a6f5d: call 0x815434 */ r_esp -= 4; W32(r_esp, 0x7a6f62u); f_00815434();
    /* 007a6f62: call 0x8153a4 */ r_esp -= 4; W32(r_esp, 0x7a6f67u); f_008153a4();
    /* 007a6f67: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 007a6f69: push 0x9ff8f8 */ { u32 v = 0x9ff8f8u; r_esp -= 4; W32(r_esp, v); }
    /* 007a6f6e: call 0x78b0a0 */ r_esp -= 4; W32(r_esp, 0x7a6f73u); f_0078b0a0();
    /* 007a6f73: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007a6f76: call 0x782048 */ r_esp -= 4; W32(r_esp, 0x7a6f7bu); f_00782048();
    /* 007a6f7b: ret  */ FN_RET(0x007a6f58); r_esp += 4; return;
}

void f_007a6f7c(void) /* sub_7A6F7C */
{
    FN_ENTER(0x007a6f7c);
    /* 007a6f7c: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x7a6f81u); f_00807ac0();
    /* 007a6f81: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a6f82: call 0x815584 */ r_esp -= 4; W32(r_esp, 0x7a6f87u); f_00815584();
    /* 007a6f87: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007a6f88: call 0x781fc4 */ r_esp -= 4; W32(r_esp, 0x7a6f8du); f_00781fc4();
    /* 007a6f8d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a6f8f: je 0x7a6f94 */ if (fZ) goto L_007a6f94;
L_007a6f91:; BB(0x007a6f91);
    /* 007a6f91: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a6f93: ret  */ FN_RET(0x007a6f7c); r_esp += 4; return;
L_007a6f94:; BB(0x007a6f94);
    /* 007a6f94: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 007a6f96: push 0x9ff900 */ { u32 v = 0x9ff900u; r_esp -= 4; W32(r_esp, v); }
    /* 007a6f9b: call 0x78b184 */ r_esp -= 4; W32(r_esp, 0x7a6fa0u); f_0078b184();
    /* 007a6fa0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007a6fa3: call 0x793f64 */ r_esp -= 4; W32(r_esp, 0x7a6fa8u); f_00793f64();
    /* 007a6fa8: call 0x782098 */ r_esp -= 4; W32(r_esp, 0x7a6fadu); f_00782098();
    /* 007a6fad: call 0x43a4a0 */ r_esp -= 4; W32(r_esp, 0x7a6fb2u); f_0043a4a0();
    /* 007a6fb2: push 0x979290 */ { u32 v = 0x979290u; r_esp -= 4; W32(r_esp, v); }
    /* 007a6fb7: call 0x814afc */ r_esp -= 4; W32(r_esp, 0x7a6fbcu); f_00814afc();
    /* 007a6fbc: mov eax, 1 */ r_eax = 0x1u;
    /* 007a6fc1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007a6fc2: ret  */ FN_RET(0x007a6f7c); r_esp += 4; return;
}

void f_007a6fc4(void) /* sub_7A6FC4 */
{
    FN_ENTER(0x007a6fc4);
    /* 007a6fc4: call 0x815578 */ r_esp -= 4; W32(r_esp, 0x7a6fc9u); f_00815578();
    /* 007a6fc9: call 0x815434 */ r_esp -= 4; W32(r_esp, 0x7a6fceu); f_00815434();
    /* 007a6fce: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 007a6fd0: push 0x9ff900 */ { u32 v = 0x9ff900u; r_esp -= 4; W32(r_esp, v); }
    /* 007a6fd5: call 0x78b0a0 */ r_esp -= 4; W32(r_esp, 0x7a6fdau); f_0078b0a0();
    /* 007a6fda: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007a6fdd: call 0x782048 */ r_esp -= 4; W32(r_esp, 0x7a6fe2u); f_00782048();
    /* 007a6fe2: ret  */ FN_RET(0x007a6fc4); r_esp += 4; return;
}

void f_007a6fe4(void) /* sub_7A6FE4 */
{
    FN_ENTER(0x007a6fe4);
    /* 007a6fe4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007a6fe5: mov ebp, esp */ r_ebp = r_esp;
    /* 007a6fe7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007a6fe9: push 0x8f5b74 */ { u32 v = 0x8f5b74u; r_esp -= 4; W32(r_esp, v); }
    /* 007a6fee: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007a6ff4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a6ff5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007a6ffc: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007a6fff: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007a7002: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 007a7005: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 007a7008: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 007a700b: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x7a7010u); f_00807ac0();
    /* 007a7010: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a7011: call 0x815584 */ r_esp -= 4; W32(r_esp, 0x7a7016u); f_00815584();
    /* 007a7016: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007a7017: call 0x781fc4 */ r_esp -= 4; W32(r_esp, 0x7a701cu); f_00781fc4();
    /* 007a701c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a701e: je 0x7a7030 */ if (fZ) goto L_007a7030;
L_007a7020:; BB(0x007a7020);
    /* 007a7020: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a7022: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007a7025: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007a702c: mov esp, ebp */ r_esp = r_ebp;
    /* 007a702e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a702f: ret  */ FN_RET(0x007a6fe4); r_esp += 4; return;
L_007a7030:; BB(0x007a7030);
    /* 007a7030: call 0x793f64 */ r_esp -= 4; W32(r_esp, 0x7a7035u); f_00793f64();
    /* 007a7035: call 0x782098 */ r_esp -= 4; W32(r_esp, 0x7a703au); f_00782098();
    /* 007a703a: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 007a7041: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 007a7043: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x7a7048u); f_005caba4();
    /* 007a7048: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007a7049: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 007a704c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a704e: je 0x7a706d */ if (fZ) goto L_007a706d;
L_007a7050:; BB(0x007a7050);
    /* 007a7050: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 007a7057: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007a705e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007a7061: call 0x440880 */ r_esp -= 4; W32(r_esp, 0x7a7066u); f_00440880();
    /* 007a7066: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_007a706d:; BB(0x007a706d);
    /* 007a706d: mov eax, 1 */ r_eax = 0x1u;
    /* 007a7072: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007a7075: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007a707c: mov esp, ebp */ r_esp = r_ebp;
    /* 007a707e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a707f: ret  */ FN_RET(0x007a6fe4); r_esp += 4; return;
}

