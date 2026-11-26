#include "protos.h"

void f_0056500a(void)
{
    FN_ENTER(0x0056500a);
    /* 0056500a: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0056500e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056500f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00565011: call 0x565290 */ r_esp -= 4; W32(r_esp, 0x565016u); f_00565290();
    /* 00565016: jmp 0x565206 */ goto L_00565206;
L_00565206:; BB(0x00565206);
    /* 00565206: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00565207: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00565208: ret 8 */ FN_RET(0x0056500a); r_esp += 12; return;
}

void f_0056501b(void)
{
    FN_ENTER(0x0056501b);
    /* 0056501b: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0056501f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00565020: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00565022: call 0x5658c4 */ r_esp -= 4; W32(r_esp, 0x565027u); f_005658c4();
    /* 00565027: jmp 0x565206 */ goto L_00565206;
L_00565206:; BB(0x00565206);
    /* 00565206: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00565207: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00565208: ret 8 */ FN_RET(0x0056501b); r_esp += 12; return;
}

void f_0056502c(void)
{
    FN_ENTER(0x0056502c);
    /* 0056502c: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00565030: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00565031: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00565033: call 0x571174 */ r_esp -= 4; W32(r_esp, 0x565038u); f_00571174();
    /* 00565038: jmp 0x565206 */ goto L_00565206;
L_00565206:; BB(0x00565206);
    /* 00565206: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00565207: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00565208: ret 8 */ FN_RET(0x0056502c); r_esp += 12; return;
}

void f_0056503d(void)
{
    FN_ENTER(0x0056503d);
    /* 0056503d: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00565041: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00565042: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00565044: call 0x565ecc */ r_esp -= 4; W32(r_esp, 0x565049u); f_00565ecc();
    /* 00565049: jmp 0x565206 */ goto L_00565206;
L_00565206:; BB(0x00565206);
    /* 00565206: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00565207: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00565208: ret 8 */ FN_RET(0x0056503d); r_esp += 12; return;
}

void f_0056504e(void)
{
    FN_ENTER(0x0056504e);
    /* 0056504e: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00565052: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00565053: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00565055: call 0x56627c */ r_esp -= 4; W32(r_esp, 0x56505au); f_0056627c();
    /* 0056505a: jmp 0x565206 */ goto L_00565206;
L_00565206:; BB(0x00565206);
    /* 00565206: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00565207: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00565208: ret 8 */ FN_RET(0x0056504e); r_esp += 12; return;
}

void f_0056505f(void)
{
    FN_ENTER(0x0056505f);
    /* 0056505f: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00565063: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00565064: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00565066: call 0x566468 */ r_esp -= 4; W32(r_esp, 0x56506bu); f_00566468();
    /* 0056506b: jmp 0x565206 */ goto L_00565206;
L_00565206:; BB(0x00565206);
    /* 00565206: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00565207: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00565208: ret 8 */ FN_RET(0x0056505f); r_esp += 12; return;
}

void f_00565070(void)
{
    FN_ENTER(0x00565070);
    /* 00565070: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00565074: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00565075: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00565077: call 0x56661c */ r_esp -= 4; W32(r_esp, 0x56507cu); f_0056661c();
    /* 0056507c: jmp 0x565206 */ goto L_00565206;
L_00565206:; BB(0x00565206);
    /* 00565206: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00565207: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00565208: ret 8 */ FN_RET(0x00565070); r_esp += 12; return;
}

void f_00565081(void)
{
    FN_ENTER(0x00565081);
    /* 00565081: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00565085: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00565086: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00565088: call 0x566930 */ r_esp -= 4; W32(r_esp, 0x56508du); f_00566930();
    /* 0056508d: jmp 0x565206 */ goto L_00565206;
L_00565206:; BB(0x00565206);
    /* 00565206: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00565207: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00565208: ret 8 */ FN_RET(0x00565081); r_esp += 12; return;
}

void f_00565092(void)
{
    FN_ENTER(0x00565092);
    /* 00565092: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00565096: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00565097: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00565099: call 0x566b9c */ r_esp -= 4; W32(r_esp, 0x56509eu); f_00566b9c();
    /* 0056509e: jmp 0x565206 */ goto L_00565206;
L_00565206:; BB(0x00565206);
    /* 00565206: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00565207: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00565208: ret 8 */ FN_RET(0x00565092); r_esp += 12; return;
}

void f_005650a3(void)
{
    FN_ENTER(0x005650a3);
    /* 005650a3: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 005650a7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005650a8: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005650aa: call 0x566fbc */ r_esp -= 4; W32(r_esp, 0x5650afu); f_00566fbc();
    /* 005650af: jmp 0x565206 */ goto L_00565206;
L_00565206:; BB(0x00565206);
    /* 00565206: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00565207: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00565208: ret 8 */ FN_RET(0x005650a3); r_esp += 12; return;
}

void f_005650b4(void)
{
    FN_ENTER(0x005650b4);
    /* 005650b4: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 005650b8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005650b9: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005650bb: call 0x5676a0 */ r_esp -= 4; W32(r_esp, 0x5650c0u); f_005676a0();
    /* 005650c0: jmp 0x565206 */ goto L_00565206;
L_00565206:; BB(0x00565206);
    /* 00565206: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00565207: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00565208: ret 8 */ FN_RET(0x005650b4); r_esp += 12; return;
}

void f_005650c5(void)
{
    FN_ENTER(0x005650c5);
    /* 005650c5: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 005650c9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005650ca: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005650cc: call 0x567a38 */ r_esp -= 4; W32(r_esp, 0x5650d1u); f_00567a38();
    /* 005650d1: jmp 0x565206 */ goto L_00565206;
L_00565206:; BB(0x00565206);
    /* 00565206: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00565207: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00565208: ret 8 */ FN_RET(0x005650c5); r_esp += 12; return;
}

void f_005650d6(void)
{
    FN_ENTER(0x005650d6);
    /* 005650d6: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 005650da: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005650db: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005650dd: call 0x567cb8 */ r_esp -= 4; W32(r_esp, 0x5650e2u); f_00567cb8();
    /* 005650e2: jmp 0x565206 */ goto L_00565206;
L_00565206:; BB(0x00565206);
    /* 00565206: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00565207: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00565208: ret 8 */ FN_RET(0x005650d6); r_esp += 12; return;
}

void f_005650e7(void)
{
    FN_ENTER(0x005650e7);
    /* 005650e7: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 005650eb: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005650ee: je 0x565260 */ if (fZ) goto L_00565260;
L_005650f4:; BB(0x005650f4);
    /* 005650f4: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 005650f8: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005650fb: je 0x56519f */ if (fZ) goto L_0056519f;
L_00565101:; BB(0x00565101);
    /* 00565101: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00565105: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00565107: jne 0x565206 */ if (!fZ) goto L_00565206;
L_0056510d:; BB(0x0056510d);
    /* 0056510d: add dword ptr [ebp + 0x520], 1 */ { u32 ad = (u32)(r_ebp+0x520u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00565114: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00565116: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x56511bu); f_007aa094();
    /* 0056511b: push 0x41a00000 */ { u32 v = 0x41a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00565120: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00565122: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x565127u); f_007aaa30();
    /* 00565127: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00565129: je 0x56514a */ if (fZ) goto L_0056514a;
L_0056512b:; BB(0x0056512b);
    /* 0056512b: push 0x230 */ { u32 v = 0x230u; r_esp -= 4; W32(r_esp, v); }
    /* 00565130: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00565132: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x565137u); f_007879b8();
    /* 00565137: mov ecx, eax */ r_ecx = r_eax;
    /* 00565139: lea eax, [ebp + 0x38] */ r_eax = (u32)(r_ebp+0x38u);
    /* 0056513c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0056513e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056513f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00565140: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00565141: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00565142: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x565147u); f_00814298();
    /* 00565147: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0056514a:; BB(0x0056514a);
    /* 0056514a: mov eax, dword ptr [ebp + 0x520] */ r_eax = R32((u32)(r_ebp+0x520u));
    /* 00565150: cmp eax, 0x3c */ {  u32 a = r_eax; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00565153: je 0x565217 */ if (fZ) goto L_00565217;
L_00565159:; BB(0x00565159);
    /* 00565159: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0056515b: call 0x52126c */ r_esp -= 4; W32(r_esp, 0x565160u); f_0052126c();
    /* 00565160: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00565162: je 0x565180 */ if (fZ) goto L_00565180;
L_00565164:; BB(0x00565164);
    /* 00565164: movsx eax, word ptr [ebp + 0xb8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xb8u));
    /* 0056516b: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056516e: je 0x56520b */ if (fZ) goto L_0056520b;
L_00565174:; BB(0x00565174);
    /* 00565174: mov dword ptr [ebp + 0x480], 0 */ W32((u32)(r_ebp+0x480u), 0x0u);
    /* 0056517e: jmp 0x565187 */ goto L_00565187;
L_00565180:; BB(0x00565180);
    /* 00565180: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00565182: call 0x564760 */ r_esp -= 4; W32(r_esp, 0x565187u); f_00564760();
L_00565187:; BB(0x00565187);
    /* 00565187: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0056518a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0056518c: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x565192u); call_ind(t); }
    /* 00565192: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00565195: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00565197: call dword ptr [eax + 0x168] */ { u32 t = R32((u32)(r_eax+0x168u)); r_esp -= 4; W32(r_esp, 0x56519du); call_ind(t); }
    /* 0056519d: jmp 0x565206 */ goto L_00565206;
L_0056519f:; BB(0x0056519f);
    /* 0056519f: mov eax, dword ptr [ebp + 0xb0] */ r_eax = R32((u32)(r_ebp+0xb0u));
    /* 005651a5: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005651a7: je 0x565206 */ if (fZ) goto L_00565206;
L_005651a9:; BB(0x005651a9);
    /* 005651a9: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 005651ab: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005651ad: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5651b2u); f_0051f62c();
    /* 005651b2: jmp 0x565206 */ goto L_00565206;
L_00565206:; BB(0x00565206);
    /* 00565206: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00565207: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00565208: ret 8 */ FN_RET(0x005650e7); r_esp += 12; return;
L_0056520b:; BB(0x0056520b);
    /* 0056520b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0056520d: call 0x564780 */ r_esp -= 4; W32(r_esp, 0x565212u); f_00564780();
    /* 00565212: jmp 0x565187 */ goto L_00565187;
L_00565217:; BB(0x00565217);
    /* 00565217: mov eax, dword ptr [0xa73d60] */ r_eax = R32((u32)(0xa73d60u));
    /* 0056521c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056521e: je 0x565159 */ if (fZ) goto L_00565159;
L_00565224:; BB(0x00565224);
    /* 00565224: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 00565227: mov ebx, eax */ r_ebx = r_eax;
L_00565229:; BB(0x00565229);
    /* 00565229: movzx edx, word ptr [ebx + 8] */ r_edx = (u32)R16((u32)(r_ebx+0x8u));
    /* 0056522d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056522e: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x565233u); f_007b4d18();
    /* 00565233: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00565234: mov edx, dword ptr [eax + 0x474] */ r_edx = R32((u32)(r_eax+0x474u));
    /* 0056523a: cmp edx, dword ptr [ebp + 0x474] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x474u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00565240: jne 0x565251 */ if (!fZ) goto L_00565251;
L_00565242:; BB(0x00565242);
    /* 00565242: mov edx, dword ptr [eax + 0x4b4] */ r_edx = R32((u32)(r_eax+0x4b4u));
    /* 00565248: or edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0056524b: mov dword ptr [eax + 0x4b4], edx */ W32((u32)(r_eax+0x4b4u), r_edx);
L_00565251:; BB(0x00565251);
    /* 00565251: mov ebx, dword ptr [ebx + 4] */ r_ebx = R32((u32)(r_ebx+0x4u));
    /* 00565254: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00565256: jne 0x565229 */ if (!fZ) goto L_00565229;
L_00565258:; BB(0x00565258);
    /* 00565258: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 0056525b: jmp 0x565159 */ goto L_00565159;
L_00565260:; BB(0x00565260);
    /* 00565260: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00565262: mov eax, 0xe */ r_eax = 0xeu;
    /* 00565267: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 0056526e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00565270: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x565275u); f_0051f664();
    /* 00565275: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00565278: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0056527a: call dword ptr [eax + 0x184] */ { u32 t = R32((u32)(r_eax+0x184u)); r_esp -= 4; W32(r_esp, 0x565280u); call_ind(t); }
    /* 00565280: mov dword ptr [ebp + 0x520], 0 */ W32((u32)(r_ebp+0x520u), 0x0u);
    /* 0056528a: jmp 0x565206 */ goto L_00565206;
}

void f_005651b4(void)
{
    FN_ENTER(0x005651b4);
    /* 005651b4: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 005651b8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005651b9: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005651bb: call 0x56825c */ r_esp -= 4; W32(r_esp, 0x5651c0u); f_0056825c();
    /* 005651c0: jmp 0x565206 */ goto L_00565206;
L_00565206:; BB(0x00565206);
    /* 00565206: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00565207: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00565208: ret 8 */ FN_RET(0x005651b4); r_esp += 12; return;
}

void f_005651c2(void)
{
    FN_ENTER(0x005651c2);
    /* 005651c2: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 005651c6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005651c7: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005651c9: call 0x568344 */ r_esp -= 4; W32(r_esp, 0x5651ceu); f_00568344();
    /* 005651ce: jmp 0x565206 */ goto L_00565206;
L_00565206:; BB(0x00565206);
    /* 00565206: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00565207: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00565208: ret 8 */ FN_RET(0x005651c2); r_esp += 12; return;
}

void f_005651d0(void)
{
    FN_ENTER(0x005651d0);
    /* 005651d0: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 005651d4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005651d5: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005651d7: call 0x568420 */ r_esp -= 4; W32(r_esp, 0x5651dcu); f_00568420();
    /* 005651dc: jmp 0x565206 */ goto L_00565206;
L_00565206:; BB(0x00565206);
    /* 00565206: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00565207: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00565208: ret 8 */ FN_RET(0x005651d0); r_esp += 12; return;
}

void f_005651de(void)
{
    FN_ENTER(0x005651de);
    /* 005651de: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 005651e2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005651e3: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005651e5: call 0x568518 */ r_esp -= 4; W32(r_esp, 0x5651eau); f_00568518();
    /* 005651ea: jmp 0x565206 */ goto L_00565206;
L_00565206:; BB(0x00565206);
    /* 00565206: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00565207: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00565208: ret 8 */ FN_RET(0x005651de); r_esp += 12; return;
}

void f_005651ec(void)
{
    FN_ENTER(0x005651ec);
    /* 005651ec: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 005651f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005651f1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005651f3: call 0x5685f4 */ r_esp -= 4; W32(r_esp, 0x5651f8u); f_005685f4();
    /* 005651f8: jmp 0x565206 */ goto L_00565206;
L_00565206:; BB(0x00565206);
    /* 00565206: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00565207: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00565208: ret 8 */ FN_RET(0x005651ec); r_esp += 12; return;
}

void f_005651fa(void)
{
    FN_ENTER(0x005651fa);
    /* 005651fa: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 005651fe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005651ff: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00565201: call 0x5690f8 */ r_esp -= 4; W32(r_esp, 0x565206u); f_005690f8();
    /* 00565206: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00565207: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00565208: ret 8 */ FN_RET(0x005651fa); r_esp += 12; return;
}

void f_00565206(void)
{
    FN_ENTER(0x00565206);
    /* 00565206: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00565207: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00565208: ret 8 */ FN_RET(0x00565206); r_esp += 12; return;
}

void f_00565290(void) /* sub_565290 */
{
    FN_ENTER(0x00565290);
    /* 00565290: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00565291: mov ebx, esp */ r_ebx = r_esp;
    /* 00565293: and esp, 0xfffffff8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 00565296: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00565297: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00565298: mov ebp, dword ptr [ebx + 4] */ r_ebp = R32((u32)(r_ebx+0x4u));
    /* 0056529b: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 0056529f: mov ebp, esp */ r_ebp = r_esp;
    /* 005652a1: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005652a3: push 0x8d693a */ { u32 v = 0x8d693au; r_esp -= 4; W32(r_esp, v); }
    /* 005652a8: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005652ae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005652af: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005652b6: sub esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005652b9: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005652bc: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005652bf: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005652c2: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005652c5: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005652c8: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 005652cb: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005652ce: je 0x56587f */ if (fZ) goto L_0056587f;
L_005652d4:; BB(0x005652d4);
    /* 005652d4: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005652d7: je 0x56565a */ if (fZ) goto L_0056565a;
L_005652dd:; BB(0x005652dd);
    /* 005652dd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005652df: jne 0x56566b */ if (!fZ) goto L_0056566b;
L_005652e5:; BB(0x005652e5);
    /* 005652e5: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x5652eau); f_0078730c();
    /* 005652ea: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005652ed: mov edx, dword ptr [eax + 0x520] */ r_edx = R32((u32)(r_eax+0x520u));
    /* 005652f3: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005652f6: jne 0x56556b */ if (!fZ) goto L_0056556b;
L_005652fc:; BB(0x005652fc);
    /* 005652fc: mov ecx, eax */ r_ecx = r_eax;
    /* 005652fe: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x565303u); f_007aa094();
    /* 00565303: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00565306: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 0056530c: test dl, 0x10 */ {  u32 a = (u8)r_edx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0056530f: je 0x565318 */ if (fZ) goto L_00565318;
L_00565311:; BB(0x00565311);
    /* 00565311: mov eax, 1 */ r_eax = 0x1u;
    /* 00565316: jmp 0x56531a */ goto L_0056531a;
L_00565318:; BB(0x00565318);
    /* 00565318: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0056531a:; BB(0x0056531a);
    /* 0056531a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056531c: je 0x56532b */ if (fZ) goto L_0056532b;
L_0056531e:; BB(0x0056531e);
    /* 0056531e: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00565321: mov dword ptr [eax + 0x520], 2 */ W32((u32)(r_eax+0x520u), 0x2u);
L_0056532b:; BB(0x0056532b);
    /* 0056532b: push 0x41700000 */ { u32 v = 0x41700000u; r_esp -= 4; W32(r_esp, v); }
    /* 00565330: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00565333: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x565338u); f_007aaa30();
    /* 00565338: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056533a: je 0x56566b */ if (fZ) goto L_0056566b;
L_00565340:; BB(0x00565340);
    /* 00565340: mov dword ptr [ebp - 0x5c], 0 */ W32((u32)(r_ebp+0xffffffa4u), 0x0u);
    /* 00565347: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 0056534c: mov dword ptr [ebp - 0x58], 0x41700000 */ W32((u32)(r_ebp+0xffffffa8u), 0x41700000u);
    /* 00565353: mov dword ptr [ebp - 0x54], 0x41400000 */ W32((u32)(r_ebp+0xffffffacu), 0x41400000u);
    /* 0056535a: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x56535fu); f_0082d990();
    /* 0056535f: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00565362: mov edx, dword ptr [eax + 0x60] */ r_edx = R32((u32)(r_eax+0x60u));
    /* 00565365: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00565367: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x56536cu); f_0082d8bc();
    /* 0056536c: lea eax, [ebp - 0x5c] */ r_eax = (u32)(r_ebp+0xffffffa4u);
    /* 0056536f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00565370: lea edx, [ebp - 0x5c] */ r_edx = (u32)(r_ebp+0xffffffa4u);
    /* 00565373: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00565375: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x56537au); f_0082eab8();
    /* 0056537a: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0056537f: call 0x82eb80 */ r_esp -= 4; W32(r_esp, 0x565384u); f_0082eb80();
    /* 00565384: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00565387: lea ecx, [ebp - 0x5c] */ r_ecx = (u32)(r_ebp+0xffffffa4u);
    /* 0056538a: lea esi, [eax + 0x300] */ r_esi = (u32)(r_eax+0x300u);
    /* 00565390: mov edx, esi */ r_edx = r_esi;
    /* 00565392: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x565397u); f_0082ebac();
    /* 00565397: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0056539a: mov ecx, dword ptr [eax + 0x398] */ r_ecx = R32((u32)(r_eax+0x398u));
    /* 005653a0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005653a2: je 0x565857 */ if (fZ) goto L_00565857;
L_005653a8:; BB(0x005653a8);
    /* 005653a8: mov ecx, eax */ r_ecx = r_eax;
    /* 005653aa: mov eax, dword ptr [ecx + 0x39c] */ r_eax = R32((u32)(r_ecx+0x39cu));
    /* 005653b0: mov edi, dword ptr [ecx + 0x3a0] */ r_edi = R32((u32)(r_ecx+0x3a0u));
    /* 005653b6: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 005653b9: mov eax, dword ptr [ecx + 0x3a4] */ r_eax = R32((u32)(r_ecx+0x3a4u));
    /* 005653bf: mov dword ptr [ebp - 0x64], edi */ W32((u32)(r_ebp+0xffffff9cu), r_edi);
    /* 005653c2: mov edx, esi */ r_edx = r_esi;
    /* 005653c4: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 005653c7: lea ecx, [ebp - 0x68] */ r_ecx = (u32)(r_ebp+0xffffff98u);
    /* 005653ca: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x5653cfu); f_0082f9c4();
    /* 005653cf: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005653d2: lea eax, [ebp - 0x68] */ r_eax = (u32)(r_ebp+0xffffff98u);
    /* 005653d5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005653d6: mov edx, dword ptr [ecx + 0x358] */ r_edx = R32((u32)(r_ecx+0x358u));
    /* 005653dc: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005653df: call 0x771858 */ r_esp -= 4; W32(r_esp, 0x5653e4u); f_00771858();
L_005653e4:; BB(0x005653e4);
    /* 005653e4: mov edx, dword ptr [0xa9cd68] */ r_edx = R32((u32)(0xa9cd68u));
    /* 005653ea: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005653ed: je 0x56568c */ if (fZ) goto L_0056568c;
L_005653f3:; BB(0x005653f3);
    /* 005653f3: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005653f6: mov ecx, dword ptr [edx + 0x470] */ r_ecx = R32((u32)(r_edx+0x470u));
    /* 005653fc: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005653ff: jne 0x56541e */ if (!fZ) goto L_0056541e;
L_00565401:; BB(0x00565401);
    /* 00565401: mov ecx, edx */ r_ecx = r_edx;
    /* 00565403: call 0x5716c0 */ r_esp -= 4; W32(r_esp, 0x565408u); f_005716c0();
    /* 00565408: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0056540b: lea edx, [ebp - 0x5c] */ r_edx = (u32)(r_ebp+0xffffffa4u);
    /* 0056540e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056540f: push dword ptr [ecx + 0x60] */ { u32 v = R32((u32)(r_ecx+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 00565412: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00565413: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00565414: call 0x6e38e0 */ r_esp -= 4; W32(r_esp, 0x565419u); f_006e38e0();
    /* 00565419: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056541c: jmp 0x56547c */ goto L_0056547c;
L_0056541e:; BB(0x0056541e);
    /* 0056541e: mov ecx, dword ptr [edx + 0x31c] */ r_ecx = R32((u32)(r_edx+0x31cu));
    /* 00565424: mov edi, dword ptr [ecx + 0xc] */ r_edi = R32((u32)(r_ecx+0xcu));
    /* 00565427: mov esi, edi */ r_esi = r_edi;
    /* 00565429: shr esi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 0056542c: add edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0056542e: sar edi, 1 */ { u32 c = (1u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 00565430: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00565432: jge 0x565461 */ if ((fS==fO)) goto L_00565461;
L_00565434:; BB(0x00565434);
    /* 00565434: mov eax, edx */ r_eax = r_edx;
    /* 00565436: mov esi, dword ptr [eax + 0x398] */ r_esi = R32((u32)(r_eax+0x398u));
    /* 0056543c: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056543e: je 0x565461 */ if (fZ) goto L_00565461;
L_00565440:; BB(0x00565440);
    /* 00565440: mov ecx, eax */ r_ecx = r_eax;
    /* 00565442: call 0x5716c0 */ r_esp -= 4; W32(r_esp, 0x565447u); f_005716c0();
    /* 00565447: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0056544a: lea edx, [ebp - 0x5c] */ r_edx = (u32)(r_ebp+0xffffffa4u);
    /* 0056544d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056544e: add esi, 0x300 */ {  u32 a = r_esi; u32 b = 0x300u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00565454: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00565455: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00565456: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00565457: call 0x6e3408 */ r_esp -= 4; W32(r_esp, 0x56545cu); f_006e3408();
    /* 0056545c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056545f: jmp 0x56547c */ goto L_0056547c;
L_00565461:; BB(0x00565461);
    /* 00565461: mov ecx, edx */ r_ecx = r_edx;
    /* 00565463: call 0x5716c0 */ r_esp -= 4; W32(r_esp, 0x565468u); f_005716c0();
    /* 00565468: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0056546b: lea edx, [ebp - 0x5c] */ r_edx = (u32)(r_ebp+0xffffffa4u);
    /* 0056546e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056546f: push dword ptr [ecx + 0x60] */ { u32 v = R32((u32)(r_ecx+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 00565472: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00565473: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00565474: call 0x6e2f20 */ r_esp -= 4; W32(r_esp, 0x565479u); f_006e2f20();
    /* 00565479: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0056547c:; BB(0x0056547c);
    /* 0056547c: mov dword ptr [ebp - 0x68], 0 */ W32((u32)(r_ebp+0xffffff98u), 0x0u);
    /* 00565483: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 00565488: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
    /* 0056548f: mov dword ptr [ebp - 0x60], 0 */ W32((u32)(r_ebp+0xffffffa0u), 0x0u);
    /* 00565496: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x56549bu); f_0082d990();
    /* 0056549b: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0056549e: mov edx, dword ptr [eax + 0x60] */ r_edx = R32((u32)(r_eax+0x60u));
    /* 005654a1: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005654a3: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x5654a8u); f_0082d8bc();
    /* 005654a8: lea eax, [ebp - 0x68] */ r_eax = (u32)(r_ebp+0xffffff98u);
    /* 005654ab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005654ac: lea edx, [ebp - 0x68] */ r_edx = (u32)(r_ebp+0xffffff98u);
    /* 005654af: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005654b1: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x5654b6u); f_0082eab8();
    /* 005654b6: mov ecx, 1 */ r_ecx = 0x1u;
    /* 005654bb: call 0x82eb80 */ r_esp -= 4; W32(r_esp, 0x5654c0u); f_0082eb80();
    /* 005654c0: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005654c3: mov edx, dword ptr [eax + 0x470] */ r_edx = R32((u32)(r_eax+0x470u));
    /* 005654c9: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005654cc: je 0x56566b */ if (fZ) goto L_0056566b;
L_005654d2:; BB(0x005654d2);
    /* 005654d2: fld dword ptr [ebp - 0x68] */ FPUSH(R_F32((u32)(r_ebp+0xffffff98u)));
    /* 005654d5: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 005654d7: fld dword ptr [ebp - 0x64] */ FPUSH(R_F32((u32)(r_ebp+0xffffff9cu)));
    /* 005654da: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 005654dc: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 005654de: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005654df: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005654e2: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x5654e7u); f_0082dc9c();
    /* 005654e7: fld dword ptr [ebp - 0x60] */ FPUSH(R_F32((u32)(r_ebp+0xffffffa0u)));
    /* 005654ea: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005654ec: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 005654ee: fld dword ptr [ebp - 0x64] */ FPUSH(R_F32((u32)(r_ebp+0xffffff9cu)));
    /* 005654f1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005654f3: fmul qword ptr [0x925d40] */ ST(0) = ST(0) * R_F64((u32)(0x925d40u));
    /* 005654f9: fdiv qword ptr [0x925d38] */ ST(0) = ST(0) / R_F64((u32)(0x925d38u));
    /* 005654ff: fnstcw word ptr [ebp - 0x38] */ W16((u32)(r_ebp+0xffffffc8u), fcw);
    /* 00565502: movzx eax, word ptr [ebp - 0x38] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc8u));
    /* 00565506: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0056550b: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0056550e: fldcw word ptr [ebp - 0x30] */ fcw = R16((u32)(r_ebp+0xffffffd0u));
    /* 00565511: fistp dword ptr [ebp - 0x50] */ W32((u32)(r_ebp+0xffffffb0u), (u32)fx_int32(ST(0))); FPOP();
    /* 00565514: fldcw word ptr [ebp - 0x38] */ fcw = R16((u32)(r_ebp+0xffffffc8u));
    /* 00565517: fld dword ptr [ebp - 0x68] */ FPUSH(R_F32((u32)(r_ebp+0xffffff98u)));
    /* 0056551a: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
    /* 00565521: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00565523: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00565525: fmul qword ptr [0x925d40] */ ST(0) = ST(0) * R_F64((u32)(0x925d40u));
    /* 0056552b: fdiv qword ptr [0x925d38] */ ST(0) = ST(0) / R_F64((u32)(0x925d38u));
    /* 00565531: fnstcw word ptr [ebp - 0x38] */ W16((u32)(r_ebp+0xffffffc8u), fcw);
    /* 00565534: movzx eax, word ptr [ebp - 0x38] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc8u));
    /* 00565538: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0056553d: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00565540: fldcw word ptr [ebp - 0x30] */ fcw = R16((u32)(r_ebp+0xffffffd0u));
    /* 00565543: fistp dword ptr [ebp - 0x28] */ W32((u32)(r_ebp+0xffffffd8u), (u32)fx_int32(ST(0))); FPOP();
    /* 00565546: fldcw word ptr [ebp - 0x38] */ fcw = R16((u32)(r_ebp+0xffffffc8u));
    /* 00565549: lea ecx, [ebp - 0x5c] */ r_ecx = (u32)(r_ebp+0xffffffa4u);
    /* 0056554c: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0056554f: lea edx, [ebp - 0x50] */ r_edx = (u32)(r_ebp+0xffffffb0u);
    /* 00565552: push 0xcc */ { u32 v = 0xccu; r_esp -= 4; W32(r_esp, v); }
    /* 00565557: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00565558: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0056555a: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 0056555d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056555e: call 0x50bab4 */ r_esp -= 4; W32(r_esp, 0x565563u); f_0050bab4();
    /* 00565563: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00565566: jmp 0x56566b */ goto L_0056566b;
L_0056556b:; BB(0x0056556b);
    /* 0056556b: mov edx, dword ptr [eax + 0x398] */ r_edx = R32((u32)(r_eax+0x398u));
    /* 00565571: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00565573: je 0x565865 */ if (fZ) goto L_00565865;
L_00565579:; BB(0x00565579);
    /* 00565579: mov ecx, eax */ r_ecx = r_eax;
    /* 0056557b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0056557d: push dword ptr [ecx + 0x3a4] */ { u32 v = R32((u32)(r_ecx+0x3a4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00565583: push dword ptr [ecx + 0x3a0] */ { u32 v = R32((u32)(r_ecx+0x3a0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00565589: push dword ptr [ecx + 0x39c] */ { u32 v = R32((u32)(r_ecx+0x39cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0056558f: call 0x771c8c */ r_esp -= 4; W32(r_esp, 0x565594u); f_00771c8c();
    /* 00565594: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00565596: je 0x5655e3 */ if (fZ) goto L_005655e3;
L_00565598:; BB(0x00565598);
    /* 00565598: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0056559b: push dword ptr [ecx + 0x308] */ { u32 v = R32((u32)(r_ecx+0x308u)); r_esp -= 4; W32(r_esp, v); }
    /* 005655a1: push dword ptr [ecx + 0x304] */ { u32 v = R32((u32)(r_ecx+0x304u)); r_esp -= 4; W32(r_esp, v); }
    /* 005655a7: push dword ptr [ecx + 0x300] */ { u32 v = R32((u32)(r_ecx+0x300u)); r_esp -= 4; W32(r_esp, v); }
    /* 005655ad: call 0x771f1c */ r_esp -= 4; W32(r_esp, 0x5655b2u); f_00771f1c();
    /* 005655b2: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005655b5: mov eax, dword ptr [ecx + 0x358] */ r_eax = R32((u32)(r_ecx+0x358u));
    /* 005655bb: push dword ptr [eax + 8] */ { u32 v = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005655be: call 0x772358 */ r_esp -= 4; W32(r_esp, 0x5655c3u); f_00772358();
    /* 005655c3: mov esi, eax */ r_esi = r_eax;
    /* 005655c5: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005655c8: push dword ptr [ecx + 0x60] */ { u32 v = R32((u32)(r_ecx+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 005655cb: mov edi, dword ptr [ecx] */ r_edi = R32((u32)(r_ecx));
    /* 005655cd: mov edx, dword ptr [ecx + 0x358] */ r_edx = R32((u32)(r_ecx+0x358u));
    /* 005655d3: push dword ptr [edx + 4] */ { u32 v = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005655d6: call dword ptr [edi + 0x48] */ { u32 t = R32((u32)(r_edi+0x48u)); r_esp -= 4; W32(r_esp, 0x5655d9u); call_ind(t); }
    /* 005655d9: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005655dc: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005655de: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x5655e1u); call_ind(t); }
    /* 005655e1: jmp 0x565626 */ goto L_00565626;
L_005655e3:; BB(0x005655e3);
    /* 005655e3: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005655e6: lea ecx, [ebp - 0x68] */ r_ecx = (u32)(r_ebp+0xffffff98u);
    /* 005655e9: mov eax, dword ptr [edx + 0x39c] */ r_eax = R32((u32)(r_edx+0x39cu));
    /* 005655ef: mov esi, dword ptr [edx + 0x3a0] */ r_esi = R32((u32)(r_edx+0x3a0u));
    /* 005655f5: mov edi, dword ptr [edx + 0x3a4] */ r_edi = R32((u32)(r_edx+0x3a4u));
    /* 005655fb: lea edx, [edx + 0x300] */ r_edx = (u32)(r_edx+0x300u);
    /* 00565601: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 00565604: mov dword ptr [ebp - 0x64], esi */ W32((u32)(r_ebp+0xffffff9cu), r_esi);
    /* 00565607: mov dword ptr [ebp - 0x60], edi */ W32((u32)(r_ebp+0xffffffa0u), r_edi);
    /* 0056560a: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x56560fu); f_0082f9c4();
    /* 0056560f: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00565612: lea eax, [ebp - 0x68] */ r_eax = (u32)(r_ebp+0xffffff98u);
    /* 00565615: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00565616: mov edx, dword ptr [ecx + 0x358] */ r_edx = R32((u32)(r_ecx+0x358u));
    /* 0056561c: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0056561f: call 0x771858 */ r_esp -= 4; W32(r_esp, 0x565624u); f_00771858();
    /* 00565624: mov esi, eax */ r_esi = r_eax;
L_00565626:; BB(0x00565626);
    /* 00565626: cmp esi, 0x100 */ {  u32 a = r_esi; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056562c: jge 0x565649 */ if ((fS==fO)) goto L_00565649;
L_0056562e:; BB(0x0056562e);
    /* 0056562e: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00565631: mov dword ptr [edx + 0x520], 1 */ W32((u32)(r_edx+0x520u), 0x1u);
    /* 0056563b: mov eax, 0xd */ r_eax = 0xdu;
    /* 00565640: mov word ptr [edx + 0xb8], ax */ W16((u32)(r_edx+0xb8u), (u16)r_eax);
    /* 00565647: jmp 0x56566b */ goto L_0056566b;
L_00565649:; BB(0x00565649);
    /* 00565649: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0056564c: mov eax, 1 */ r_eax = 0x1u;
    /* 00565651: mov word ptr [edx + 0xb8], ax */ W16((u32)(r_edx+0xb8u), (u16)r_eax);
    /* 00565658: jmp 0x56566b */ goto L_0056566b;
L_0056565a:; BB(0x0056565a);
    /* 0056565a: mov eax, ecx */ r_eax = r_ecx;
    /* 0056565c: mov edx, dword ptr [eax + 0x520] */ r_edx = R32((u32)(r_eax+0x520u));
    /* 00565662: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00565665: je 0x565873 */ if (fZ) goto L_00565873;
L_0056566b:; BB(0x0056566b);
    /* 0056566b: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0056566e: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x565673u); f_007b6880();
    /* 00565673: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00565676: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00565679: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0056567c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00565683: mov esp, ebp */ r_esp = r_ebp;
    /* 00565685: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00565686: mov esp, ebx */ r_esp = r_ebx;
    /* 00565688: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00565689: ret 4 */ FN_RET(0x00565290); r_esp += 8; return;
L_0056568c:; BB(0x0056568c);
    /* 0056568c: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0056568f: mov ecx, dword ptr [edx + 0x470] */ r_ecx = R32((u32)(r_edx+0x470u));
    /* 00565695: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00565698: jne 0x565713 */ if (!fZ) goto L_00565713;
L_0056569a:; BB(0x0056569a);
    /* 0056569a: mov ecx, dword ptr [edx + 0x31c] */ r_ecx = R32((u32)(r_edx+0x31cu));
    /* 005656a0: mov edi, dword ptr [ecx + 0xc] */ r_edi = R32((u32)(r_ecx+0xcu));
    /* 005656a3: mov esi, edi */ r_esi = r_edi;
    /* 005656a5: shr esi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 005656a8: add edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005656aa: sar edi, 1 */ { u32 c = (1u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 005656ac: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005656ae: jge 0x5656dd */ if ((fS==fO)) goto L_005656dd;
L_005656b0:; BB(0x005656b0);
    /* 005656b0: mov eax, edx */ r_eax = r_edx;
    /* 005656b2: mov edx, dword ptr [eax + 0x398] */ r_edx = R32((u32)(r_eax+0x398u));
    /* 005656b8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005656ba: je 0x5656dd */ if (fZ) goto L_005656dd;
L_005656bc:; BB(0x005656bc);
    /* 005656bc: mov ecx, eax */ r_ecx = r_eax;
    /* 005656be: call 0x5716c0 */ r_esp -= 4; W32(r_esp, 0x5656c3u); f_005716c0();
    /* 005656c3: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 005656c6: lea ecx, [ebp - 0x5c] */ r_ecx = (u32)(r_ebp+0xffffffa4u);
    /* 005656c9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005656ca: lea edx, [esi + 0x39c] */ r_edx = (u32)(r_esi+0x39cu);
    /* 005656d0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005656d1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005656d2: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005656d3: call 0x6e9e14 */ r_esp -= 4; W32(r_esp, 0x5656d8u); f_006e9e14();
    /* 005656d8: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005656db: jmp 0x5656f9 */ goto L_005656f9;
L_005656dd:; BB(0x005656dd);
    /* 005656dd: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005656e0: call 0x5716c0 */ r_esp -= 4; W32(r_esp, 0x5656e5u); f_005716c0();
    /* 005656e5: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005656e8: lea edx, [ebp - 0x5c] */ r_edx = (u32)(r_ebp+0xffffffa4u);
    /* 005656eb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005656ec: push dword ptr [ecx + 0x60] */ { u32 v = R32((u32)(r_ecx+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 005656ef: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005656f0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005656f1: call 0x6e9848 */ r_esp -= 4; W32(r_esp, 0x5656f6u); f_006e9848();
    /* 005656f6: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005656f9:; BB(0x005656f9);
    /* 005656f9: lea edx, [ebp - 0x5c] */ r_edx = (u32)(r_ebp+0xffffffa4u);
    /* 005656fc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005656fe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005656ff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00565700: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00565701: push 0x92 */ { u32 v = 0x92u; r_esp -= 4; W32(r_esp, v); }
    /* 00565706: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x56570bu); f_00814298();
    /* 0056570b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056570e: jmp 0x56566b */ goto L_0056566b;
L_00565713:; BB(0x00565713);
    /* 00565713: mov ecx, dword ptr [edx + 0x31c] */ r_ecx = R32((u32)(r_edx+0x31cu));
    /* 00565719: mov edi, dword ptr [ecx + 0xc] */ r_edi = R32((u32)(r_ecx+0xcu));
    /* 0056571c: mov esi, edi */ r_esi = r_edi;
    /* 0056571e: shr esi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 00565721: add edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00565723: sar edi, 1 */ { u32 c = (1u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 00565725: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00565727: jge 0x56577d */ if ((fS==fO)) goto L_0056577d;
L_00565729:; BB(0x00565729);
    /* 00565729: mov eax, edx */ r_eax = r_edx;
    /* 0056572b: mov edx, dword ptr [eax + 0x398] */ r_edx = R32((u32)(r_eax+0x398u));
    /* 00565731: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00565733: je 0x56577d */ if (fZ) goto L_0056577d;
L_00565735:; BB(0x00565735);
    /* 00565735: mov ecx, eax */ r_ecx = r_eax;
    /* 00565737: mov eax, dword ptr [ecx + 0x398] */ r_eax = R32((u32)(r_ecx+0x398u));
    /* 0056573d: mov dword ptr [ecx + 0x4b8], 1 */ W32((u32)(r_ecx+0x4b8u), 0x1u);
    /* 00565747: movzx edx, word ptr [eax + 0x1c] */ r_edx = (u32)R16((u32)(r_eax+0x1cu));
    /* 0056574b: lea esi, [ecx + 0x4b8] */ r_esi = (u32)(r_ecx+0x4b8u);
    /* 00565751: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00565753: mov word ptr [ecx + 0x4bc], dx */ W16((u32)(r_ecx+0x4bcu), (u16)r_edx);
    /* 0056575a: mov word ptr [ecx + 0x4be], di */ W16((u32)(r_ecx+0x4beu), (u16)r_edi);
    /* 00565761: call 0x5716c0 */ r_esp -= 4; W32(r_esp, 0x565766u); f_005716c0();
    /* 00565766: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00565769: lea edx, [ebp - 0x5c] */ r_edx = (u32)(r_ebp+0xffffffa4u);
    /* 0056576c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056576d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0056576e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056576f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00565770: call 0x6e54a8 */ r_esp -= 4; W32(r_esp, 0x565775u); f_006e54a8();
    /* 00565775: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00565778: jmp 0x56583d */ goto L_0056583d;
L_0056577d:; BB(0x0056577d);
    /* 0056577d: lea eax, [ebp - 0x5c] */ r_eax = (u32)(r_ebp+0xffffffa4u);
    /* 00565780: push 0xb9 */ { u32 v = 0xb9u; r_esp -= 4; W32(r_esp, v); }
    /* 00565785: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00565786: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x56578bu); f_0050b510();
    /* 0056578b: lea eax, [ebp - 0x5c] */ r_eax = (u32)(r_ebp+0xffffffa4u);
    /* 0056578e: push 0xba */ { u32 v = 0xbau; r_esp -= 4; W32(r_esp, v); }
    /* 00565793: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00565794: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x565799u); f_0050b510();
    /* 00565799: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056579c: mov dword ptr [ebp - 0x68], 0 */ W32((u32)(r_ebp+0xffffff98u), 0x0u);
    /* 005657a3: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 005657a8: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
    /* 005657af: mov dword ptr [ebp - 0x60], 0x3f800000 */ W32((u32)(r_ebp+0xffffffa0u), 0x3f800000u);
    /* 005657b6: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x5657bbu); f_0082d990();
    /* 005657bb: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005657be: mov edx, dword ptr [eax + 0x60] */ r_edx = R32((u32)(r_eax+0x60u));
    /* 005657c1: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005657c3: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x5657c8u); f_0082d8bc();
    /* 005657c8: lea eax, [ebp - 0x68] */ r_eax = (u32)(r_ebp+0xffffff98u);
    /* 005657cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005657cc: lea edx, [ebp - 0x68] */ r_edx = (u32)(r_ebp+0xffffff98u);
    /* 005657cf: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005657d1: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x5657d6u); f_0082eab8();
    /* 005657d6: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5657dbu); f_0082da80();
    /* 005657db: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
    /* 005657e2: push 0x260 */ { u32 v = 0x260u; r_esp -= 4; W32(r_esp, v); }
    /* 005657e7: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5657ecu); f_005caba4();
    /* 005657ec: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005657ed: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 005657f0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005657f2: je 0x565836 */ if (fZ) goto L_00565836;
L_005657f4:; BB(0x005657f4);
    /* 005657f4: mov dword ptr [ebp - 0x44], 1 */ W32((u32)(r_ebp+0xffffffbcu), 0x1u);
    /* 005657fb: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00565802: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00565805: lea ecx, [ebp - 0x5c] */ r_ecx = (u32)(r_ebp+0xffffffa4u);
    /* 00565808: lea edi, [ebp - 0x68] */ r_edi = (u32)(r_ebp+0xffffff98u);
    /* 0056580b: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0056580d: mov esi, dword ptr [edx + 0x31c] */ r_esi = R32((u32)(r_edx+0x31cu));
    /* 00565813: push 0x14000000 */ { u32 v = 0x14000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00565818: push 0x3fe66666 */ { u32 v = 0x3fe66666u; r_esp -= 4; W32(r_esp, v); }
    /* 0056581d: push dword ptr [esi + 8] */ { u32 v = R32((u32)(r_esi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00565820: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00565821: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00565822: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 00565828: mov ecx, eax */ r_ecx = r_eax;
    /* 0056582a: call 0x6f3ba4 */ r_esp -= 4; W32(r_esp, 0x56582fu); f_006f3ba4();
    /* 0056582f: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
L_00565836:; BB(0x00565836);
    /* 00565836: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
L_0056583d:; BB(0x0056583d);
    /* 0056583d: lea edx, [ebp - 0x5c] */ r_edx = (u32)(r_ebp+0xffffffa4u);
    /* 00565840: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00565842: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00565843: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00565844: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00565845: push 0x8f */ { u32 v = 0x8fu; r_esp -= 4; W32(r_esp, v); }
    /* 0056584a: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x56584fu); f_00814298();
    /* 0056584f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00565852: jmp 0x56566b */ goto L_0056566b;
L_00565857:; BB(0x00565857);
    /* 00565857: mov edx, dword ptr [eax + 0x31c] */ r_edx = R32((u32)(r_eax+0x31cu));
    /* 0056585d: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 00565860: jmp 0x5653e4 */ goto L_005653e4;
L_00565865:; BB(0x00565865);
    /* 00565865: mov ecx, eax */ r_ecx = r_eax;
    /* 00565867: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00565869: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x56586eu); f_0051f62c();
    /* 0056586e: jmp 0x56566b */ goto L_0056566b;
L_00565873:; BB(0x00565873);
    /* 00565873: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00565875: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x56587au); f_0051f62c();
    /* 0056587a: jmp 0x56566b */ goto L_0056566b;
L_0056587f:; BB(0x0056587f);
    /* 0056587f: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 00565881: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00565883: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 0056588a: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x56588fu); f_0051f664();
    /* 0056588f: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00565892: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00565894: call dword ptr [eax + 0x188] */ { u32 t = R32((u32)(r_eax+0x188u)); r_esp -= 4; W32(r_esp, 0x56589au); call_ind(t); }
    /* 0056589a: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0056589d: mov eax, dword ptr [ecx + 0x4b4] */ r_eax = R32((u32)(r_ecx+0x4b4u));
    /* 005658a3: and eax, 0xfffffffd */ {  u32 a = r_eax; u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005658a6: mov dword ptr [ecx + 0x4b4], eax */ W32((u32)(r_ecx+0x4b4u), r_eax);
    /* 005658ac: call 0x5213d8 */ r_esp -= 4; W32(r_esp, 0x5658b1u); f_005213d8();
    /* 005658b1: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005658b4: mov dword ptr [eax + 0x520], 0 */ W32((u32)(r_eax+0x520u), 0x0u);
    /* 005658be: jmp 0x56566b */ goto L_0056566b;
}

void f_00565345(void)
{
    FN_ENTER(0x00565345);
    /* 00565345: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00565347: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 0056534c: mov dword ptr [ebp - 0x58], 0x41700000 */ W32((u32)(r_ebp+0xffffffa8u), 0x41700000u);
    /* 00565353: mov dword ptr [ebp - 0x54], 0x41400000 */ W32((u32)(r_ebp+0xffffffacu), 0x41400000u);
    /* 0056535a: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x56535fu); f_0082d990();
    /* 0056535f: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00565362: mov edx, dword ptr [eax + 0x60] */ r_edx = R32((u32)(r_eax+0x60u));
    /* 00565365: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00565367: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x56536cu); f_0082d8bc();
    /* 0056536c: lea eax, [ebp - 0x5c] */ r_eax = (u32)(r_ebp+0xffffffa4u);
    /* 0056536f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00565370: lea edx, [ebp - 0x5c] */ r_edx = (u32)(r_ebp+0xffffffa4u);
    /* 00565373: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00565375: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x56537au); f_0082eab8();
    /* 0056537a: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0056537f: call 0x82eb80 */ r_esp -= 4; W32(r_esp, 0x565384u); f_0082eb80();
    /* 00565384: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00565387: lea ecx, [ebp - 0x5c] */ r_ecx = (u32)(r_ebp+0xffffffa4u);
    /* 0056538a: lea esi, [eax + 0x300] */ r_esi = (u32)(r_eax+0x300u);
    /* 00565390: mov edx, esi */ r_edx = r_esi;
    /* 00565392: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x565397u); f_0082ebac();
    /* 00565397: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0056539a: mov ecx, dword ptr [eax + 0x398] */ r_ecx = R32((u32)(r_eax+0x398u));
    /* 005653a0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005653a2: je 0x565857 */ if (fZ) goto L_00565857;
L_005653a8:; BB(0x005653a8);
    /* 005653a8: mov ecx, eax */ r_ecx = r_eax;
    /* 005653aa: mov eax, dword ptr [ecx + 0x39c] */ r_eax = R32((u32)(r_ecx+0x39cu));
    /* 005653b0: mov edi, dword ptr [ecx + 0x3a0] */ r_edi = R32((u32)(r_ecx+0x3a0u));
    /* 005653b6: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 005653b9: mov eax, dword ptr [ecx + 0x3a4] */ r_eax = R32((u32)(r_ecx+0x3a4u));
    /* 005653bf: mov dword ptr [ebp - 0x64], edi */ W32((u32)(r_ebp+0xffffff9cu), r_edi);
    /* 005653c2: mov edx, esi */ r_edx = r_esi;
    /* 005653c4: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 005653c7: lea ecx, [ebp - 0x68] */ r_ecx = (u32)(r_ebp+0xffffff98u);
    /* 005653ca: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x5653cfu); f_0082f9c4();
    /* 005653cf: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005653d2: lea eax, [ebp - 0x68] */ r_eax = (u32)(r_ebp+0xffffff98u);
    /* 005653d5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005653d6: mov edx, dword ptr [ecx + 0x358] */ r_edx = R32((u32)(r_ecx+0x358u));
    /* 005653dc: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005653df: call 0x771858 */ r_esp -= 4; W32(r_esp, 0x5653e4u); f_00771858();
L_005653e4:; BB(0x005653e4);
    /* 005653e4: mov edx, dword ptr [0xa9cd68] */ r_edx = R32((u32)(0xa9cd68u));
    /* 005653ea: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005653ed: je 0x56568c */ if (fZ) goto L_0056568c;
L_005653f3:; BB(0x005653f3);
    /* 005653f3: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005653f6: mov ecx, dword ptr [edx + 0x470] */ r_ecx = R32((u32)(r_edx+0x470u));
    /* 005653fc: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005653ff: jne 0x56541e */ if (!fZ) goto L_0056541e;
L_00565401:; BB(0x00565401);
    /* 00565401: mov ecx, edx */ r_ecx = r_edx;
    /* 00565403: call 0x5716c0 */ r_esp -= 4; W32(r_esp, 0x565408u); f_005716c0();
    /* 00565408: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0056540b: lea edx, [ebp - 0x5c] */ r_edx = (u32)(r_ebp+0xffffffa4u);
    /* 0056540e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056540f: push dword ptr [ecx + 0x60] */ { u32 v = R32((u32)(r_ecx+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 00565412: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00565413: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00565414: call 0x6e38e0 */ r_esp -= 4; W32(r_esp, 0x565419u); f_006e38e0();
    /* 00565419: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056541c: jmp 0x56547c */ goto L_0056547c;
L_0056541e:; BB(0x0056541e);
    /* 0056541e: mov ecx, dword ptr [edx + 0x31c] */ r_ecx = R32((u32)(r_edx+0x31cu));
    /* 00565424: mov edi, dword ptr [ecx + 0xc] */ r_edi = R32((u32)(r_ecx+0xcu));
    /* 00565427: mov esi, edi */ r_esi = r_edi;
    /* 00565429: shr esi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 0056542c: add edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0056542e: sar edi, 1 */ { u32 c = (1u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 00565430: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00565432: jge 0x565461 */ if ((fS==fO)) goto L_00565461;
L_00565434:; BB(0x00565434);
    /* 00565434: mov eax, edx */ r_eax = r_edx;
    /* 00565436: mov esi, dword ptr [eax + 0x398] */ r_esi = R32((u32)(r_eax+0x398u));
    /* 0056543c: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056543e: je 0x565461 */ if (fZ) goto L_00565461;
L_00565440:; BB(0x00565440);
    /* 00565440: mov ecx, eax */ r_ecx = r_eax;
    /* 00565442: call 0x5716c0 */ r_esp -= 4; W32(r_esp, 0x565447u); f_005716c0();
    /* 00565447: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0056544a: lea edx, [ebp - 0x5c] */ r_edx = (u32)(r_ebp+0xffffffa4u);
    /* 0056544d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056544e: add esi, 0x300 */ {  u32 a = r_esi; u32 b = 0x300u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00565454: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00565455: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00565456: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00565457: call 0x6e3408 */ r_esp -= 4; W32(r_esp, 0x56545cu); f_006e3408();
    /* 0056545c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056545f: jmp 0x56547c */ goto L_0056547c;
L_00565461:; BB(0x00565461);
    /* 00565461: mov ecx, edx */ r_ecx = r_edx;
    /* 00565463: call 0x5716c0 */ r_esp -= 4; W32(r_esp, 0x565468u); f_005716c0();
    /* 00565468: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0056546b: lea edx, [ebp - 0x5c] */ r_edx = (u32)(r_ebp+0xffffffa4u);
    /* 0056546e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056546f: push dword ptr [ecx + 0x60] */ { u32 v = R32((u32)(r_ecx+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 00565472: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00565473: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00565474: call 0x6e2f20 */ r_esp -= 4; W32(r_esp, 0x565479u); f_006e2f20();
    /* 00565479: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0056547c:; BB(0x0056547c);
    /* 0056547c: mov dword ptr [ebp - 0x68], 0 */ W32((u32)(r_ebp+0xffffff98u), 0x0u);
    /* 00565483: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 00565488: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
    /* 0056548f: mov dword ptr [ebp - 0x60], 0 */ W32((u32)(r_ebp+0xffffffa0u), 0x0u);
    /* 00565496: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x56549bu); f_0082d990();
    /* 0056549b: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0056549e: mov edx, dword ptr [eax + 0x60] */ r_edx = R32((u32)(r_eax+0x60u));
    /* 005654a1: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005654a3: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x5654a8u); f_0082d8bc();
    /* 005654a8: lea eax, [ebp - 0x68] */ r_eax = (u32)(r_ebp+0xffffff98u);
    /* 005654ab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005654ac: lea edx, [ebp - 0x68] */ r_edx = (u32)(r_ebp+0xffffff98u);
    /* 005654af: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005654b1: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x5654b6u); f_0082eab8();
    /* 005654b6: mov ecx, 1 */ r_ecx = 0x1u;
    /* 005654bb: call 0x82eb80 */ r_esp -= 4; W32(r_esp, 0x5654c0u); f_0082eb80();
    /* 005654c0: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005654c3: mov edx, dword ptr [eax + 0x470] */ r_edx = R32((u32)(r_eax+0x470u));
    /* 005654c9: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005654cc: je 0x56566b */ if (fZ) goto L_0056566b;
L_005654d2:; BB(0x005654d2);
    /* 005654d2: fld dword ptr [ebp - 0x68] */ FPUSH(R_F32((u32)(r_ebp+0xffffff98u)));
    /* 005654d5: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 005654d7: fld dword ptr [ebp - 0x64] */ FPUSH(R_F32((u32)(r_ebp+0xffffff9cu)));
    /* 005654da: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 005654dc: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 005654de: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005654df: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005654e2: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x5654e7u); f_0082dc9c();
    /* 005654e7: fld dword ptr [ebp - 0x60] */ FPUSH(R_F32((u32)(r_ebp+0xffffffa0u)));
    /* 005654ea: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005654ec: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 005654ee: fld dword ptr [ebp - 0x64] */ FPUSH(R_F32((u32)(r_ebp+0xffffff9cu)));
    /* 005654f1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005654f3: fmul qword ptr [0x925d40] */ ST(0) = ST(0) * R_F64((u32)(0x925d40u));
    /* 005654f9: fdiv qword ptr [0x925d38] */ ST(0) = ST(0) / R_F64((u32)(0x925d38u));
    /* 005654ff: fnstcw word ptr [ebp - 0x38] */ W16((u32)(r_ebp+0xffffffc8u), fcw);
    /* 00565502: movzx eax, word ptr [ebp - 0x38] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc8u));
    /* 00565506: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0056550b: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0056550e: fldcw word ptr [ebp - 0x30] */ fcw = R16((u32)(r_ebp+0xffffffd0u));
    /* 00565511: fistp dword ptr [ebp - 0x50] */ W32((u32)(r_ebp+0xffffffb0u), (u32)fx_int32(ST(0))); FPOP();
    /* 00565514: fldcw word ptr [ebp - 0x38] */ fcw = R16((u32)(r_ebp+0xffffffc8u));
    /* 00565517: fld dword ptr [ebp - 0x68] */ FPUSH(R_F32((u32)(r_ebp+0xffffff98u)));
    /* 0056551a: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
    /* 00565521: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00565523: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00565525: fmul qword ptr [0x925d40] */ ST(0) = ST(0) * R_F64((u32)(0x925d40u));
    /* 0056552b: fdiv qword ptr [0x925d38] */ ST(0) = ST(0) / R_F64((u32)(0x925d38u));
    /* 00565531: fnstcw word ptr [ebp - 0x38] */ W16((u32)(r_ebp+0xffffffc8u), fcw);
    /* 00565534: movzx eax, word ptr [ebp - 0x38] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc8u));
    /* 00565538: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0056553d: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00565540: fldcw word ptr [ebp - 0x30] */ fcw = R16((u32)(r_ebp+0xffffffd0u));
    /* 00565543: fistp dword ptr [ebp - 0x28] */ W32((u32)(r_ebp+0xffffffd8u), (u32)fx_int32(ST(0))); FPOP();
    /* 00565546: fldcw word ptr [ebp - 0x38] */ fcw = R16((u32)(r_ebp+0xffffffc8u));
    /* 00565549: lea ecx, [ebp - 0x5c] */ r_ecx = (u32)(r_ebp+0xffffffa4u);
    /* 0056554c: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0056554f: lea edx, [ebp - 0x50] */ r_edx = (u32)(r_ebp+0xffffffb0u);
    /* 00565552: push 0xcc */ { u32 v = 0xccu; r_esp -= 4; W32(r_esp, v); }
    /* 00565557: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00565558: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0056555a: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 0056555d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056555e: call 0x50bab4 */ r_esp -= 4; W32(r_esp, 0x565563u); f_0050bab4();
    /* 00565563: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00565566: jmp 0x56566b */ goto L_0056566b;
L_0056566b:; BB(0x0056566b);
    /* 0056566b: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0056566e: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x565673u); f_007b6880();
    /* 00565673: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00565676: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00565679: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0056567c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00565683: mov esp, ebp */ r_esp = r_ebp;
    /* 00565685: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00565686: mov esp, ebx */ r_esp = r_ebx;
    /* 00565688: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00565689: ret 4 */ FN_RET(0x00565345); r_esp += 8; return;
L_0056568c:; BB(0x0056568c);
    /* 0056568c: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0056568f: mov ecx, dword ptr [edx + 0x470] */ r_ecx = R32((u32)(r_edx+0x470u));
    /* 00565695: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00565698: jne 0x565713 */ if (!fZ) goto L_00565713;
L_0056569a:; BB(0x0056569a);
    /* 0056569a: mov ecx, dword ptr [edx + 0x31c] */ r_ecx = R32((u32)(r_edx+0x31cu));
    /* 005656a0: mov edi, dword ptr [ecx + 0xc] */ r_edi = R32((u32)(r_ecx+0xcu));
    /* 005656a3: mov esi, edi */ r_esi = r_edi;
    /* 005656a5: shr esi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 005656a8: add edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005656aa: sar edi, 1 */ { u32 c = (1u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 005656ac: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005656ae: jge 0x5656dd */ if ((fS==fO)) goto L_005656dd;
L_005656b0:; BB(0x005656b0);
    /* 005656b0: mov eax, edx */ r_eax = r_edx;
    /* 005656b2: mov edx, dword ptr [eax + 0x398] */ r_edx = R32((u32)(r_eax+0x398u));
    /* 005656b8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005656ba: je 0x5656dd */ if (fZ) goto L_005656dd;
L_005656bc:; BB(0x005656bc);
    /* 005656bc: mov ecx, eax */ r_ecx = r_eax;
    /* 005656be: call 0x5716c0 */ r_esp -= 4; W32(r_esp, 0x5656c3u); f_005716c0();
    /* 005656c3: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 005656c6: lea ecx, [ebp - 0x5c] */ r_ecx = (u32)(r_ebp+0xffffffa4u);
    /* 005656c9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005656ca: lea edx, [esi + 0x39c] */ r_edx = (u32)(r_esi+0x39cu);
    /* 005656d0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005656d1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005656d2: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005656d3: call 0x6e9e14 */ r_esp -= 4; W32(r_esp, 0x5656d8u); f_006e9e14();
    /* 005656d8: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005656db: jmp 0x5656f9 */ goto L_005656f9;
L_005656dd:; BB(0x005656dd);
    /* 005656dd: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005656e0: call 0x5716c0 */ r_esp -= 4; W32(r_esp, 0x5656e5u); f_005716c0();
    /* 005656e5: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005656e8: lea edx, [ebp - 0x5c] */ r_edx = (u32)(r_ebp+0xffffffa4u);
    /* 005656eb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005656ec: push dword ptr [ecx + 0x60] */ { u32 v = R32((u32)(r_ecx+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 005656ef: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005656f0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005656f1: call 0x6e9848 */ r_esp -= 4; W32(r_esp, 0x5656f6u); f_006e9848();
    /* 005656f6: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005656f9:; BB(0x005656f9);
    /* 005656f9: lea edx, [ebp - 0x5c] */ r_edx = (u32)(r_ebp+0xffffffa4u);
    /* 005656fc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005656fe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005656ff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00565700: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00565701: push 0x92 */ { u32 v = 0x92u; r_esp -= 4; W32(r_esp, v); }
    /* 00565706: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x56570bu); f_00814298();
    /* 0056570b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056570e: jmp 0x56566b */ goto L_0056566b;
L_00565713:; BB(0x00565713);
    /* 00565713: mov ecx, dword ptr [edx + 0x31c] */ r_ecx = R32((u32)(r_edx+0x31cu));
    /* 00565719: mov edi, dword ptr [ecx + 0xc] */ r_edi = R32((u32)(r_ecx+0xcu));
    /* 0056571c: mov esi, edi */ r_esi = r_edi;
    /* 0056571e: shr esi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 00565721: add edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00565723: sar edi, 1 */ { u32 c = (1u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 00565725: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00565727: jge 0x56577d */ if ((fS==fO)) goto L_0056577d;
L_00565729:; BB(0x00565729);
    /* 00565729: mov eax, edx */ r_eax = r_edx;
    /* 0056572b: mov edx, dword ptr [eax + 0x398] */ r_edx = R32((u32)(r_eax+0x398u));
    /* 00565731: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00565733: je 0x56577d */ if (fZ) goto L_0056577d;
L_00565735:; BB(0x00565735);
    /* 00565735: mov ecx, eax */ r_ecx = r_eax;
    /* 00565737: mov eax, dword ptr [ecx + 0x398] */ r_eax = R32((u32)(r_ecx+0x398u));
    /* 0056573d: mov dword ptr [ecx + 0x4b8], 1 */ W32((u32)(r_ecx+0x4b8u), 0x1u);
    /* 00565747: movzx edx, word ptr [eax + 0x1c] */ r_edx = (u32)R16((u32)(r_eax+0x1cu));
    /* 0056574b: lea esi, [ecx + 0x4b8] */ r_esi = (u32)(r_ecx+0x4b8u);
    /* 00565751: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00565753: mov word ptr [ecx + 0x4bc], dx */ W16((u32)(r_ecx+0x4bcu), (u16)r_edx);
    /* 0056575a: mov word ptr [ecx + 0x4be], di */ W16((u32)(r_ecx+0x4beu), (u16)r_edi);
    /* 00565761: call 0x5716c0 */ r_esp -= 4; W32(r_esp, 0x565766u); f_005716c0();
    /* 00565766: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00565769: lea edx, [ebp - 0x5c] */ r_edx = (u32)(r_ebp+0xffffffa4u);
    /* 0056576c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056576d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0056576e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056576f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00565770: call 0x6e54a8 */ r_esp -= 4; W32(r_esp, 0x565775u); f_006e54a8();
    /* 00565775: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00565778: jmp 0x56583d */ goto L_0056583d;
L_0056577d:; BB(0x0056577d);
    /* 0056577d: lea eax, [ebp - 0x5c] */ r_eax = (u32)(r_ebp+0xffffffa4u);
    /* 00565780: push 0xb9 */ { u32 v = 0xb9u; r_esp -= 4; W32(r_esp, v); }
    /* 00565785: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00565786: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x56578bu); f_0050b510();
    /* 0056578b: lea eax, [ebp - 0x5c] */ r_eax = (u32)(r_ebp+0xffffffa4u);
    /* 0056578e: push 0xba */ { u32 v = 0xbau; r_esp -= 4; W32(r_esp, v); }
    /* 00565793: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00565794: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x565799u); f_0050b510();
    /* 00565799: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056579c: mov dword ptr [ebp - 0x68], 0 */ W32((u32)(r_ebp+0xffffff98u), 0x0u);
    /* 005657a3: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 005657a8: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
    /* 005657af: mov dword ptr [ebp - 0x60], 0x3f800000 */ W32((u32)(r_ebp+0xffffffa0u), 0x3f800000u);
    /* 005657b6: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x5657bbu); f_0082d990();
    /* 005657bb: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005657be: mov edx, dword ptr [eax + 0x60] */ r_edx = R32((u32)(r_eax+0x60u));
    /* 005657c1: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005657c3: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x5657c8u); f_0082d8bc();
    /* 005657c8: lea eax, [ebp - 0x68] */ r_eax = (u32)(r_ebp+0xffffff98u);
    /* 005657cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005657cc: lea edx, [ebp - 0x68] */ r_edx = (u32)(r_ebp+0xffffff98u);
    /* 005657cf: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005657d1: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x5657d6u); f_0082eab8();
    /* 005657d6: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5657dbu); f_0082da80();
    /* 005657db: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
    /* 005657e2: push 0x260 */ { u32 v = 0x260u; r_esp -= 4; W32(r_esp, v); }
    /* 005657e7: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5657ecu); f_005caba4();
    /* 005657ec: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005657ed: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 005657f0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005657f2: je 0x565836 */ if (fZ) goto L_00565836;
L_005657f4:; BB(0x005657f4);
    /* 005657f4: mov dword ptr [ebp - 0x44], 1 */ W32((u32)(r_ebp+0xffffffbcu), 0x1u);
    /* 005657fb: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00565802: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00565805: lea ecx, [ebp - 0x5c] */ r_ecx = (u32)(r_ebp+0xffffffa4u);
    /* 00565808: lea edi, [ebp - 0x68] */ r_edi = (u32)(r_ebp+0xffffff98u);
    /* 0056580b: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0056580d: mov esi, dword ptr [edx + 0x31c] */ r_esi = R32((u32)(r_edx+0x31cu));
    /* 00565813: push 0x14000000 */ { u32 v = 0x14000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00565818: push 0x3fe66666 */ { u32 v = 0x3fe66666u; r_esp -= 4; W32(r_esp, v); }
    /* 0056581d: push dword ptr [esi + 8] */ { u32 v = R32((u32)(r_esi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00565820: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00565821: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00565822: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 00565828: mov ecx, eax */ r_ecx = r_eax;
    /* 0056582a: call 0x6f3ba4 */ r_esp -= 4; W32(r_esp, 0x56582fu); f_006f3ba4();
    /* 0056582f: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
L_00565836:; BB(0x00565836);
    /* 00565836: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
L_0056583d:; BB(0x0056583d);
    /* 0056583d: lea edx, [ebp - 0x5c] */ r_edx = (u32)(r_ebp+0xffffffa4u);
    /* 00565840: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00565842: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00565843: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00565844: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00565845: push 0x8f */ { u32 v = 0x8fu; r_esp -= 4; W32(r_esp, v); }
    /* 0056584a: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x56584fu); f_00814298();
    /* 0056584f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00565852: jmp 0x56566b */ goto L_0056566b;
L_00565857:; BB(0x00565857);
    /* 00565857: mov edx, dword ptr [eax + 0x31c] */ r_edx = R32((u32)(r_eax+0x31cu));
    /* 0056585d: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 00565860: jmp 0x5653e4 */ goto L_005653e4;
}

void f_005658c4(void) /* sub_5658C4 */
{
    FN_ENTER(0x005658c4);
    /* 005658c4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005658c5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005658c6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005658c7: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005658ca: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005658cc: mov eax, dword ptr [esp + 0x54] */ r_eax = R32((u32)(r_esp+0x54u));
    /* 005658d0: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005658d3: je 0x565a92 */ if (fZ) goto L_00565a92;
L_005658d9:; BB(0x005658d9);
    /* 005658d9: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005658dc: je 0x565a56 */ if (fZ) goto L_00565a56;
L_005658e2:; BB(0x005658e2);
    /* 005658e2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005658e4: jne 0x565a3e */ if (!fZ) goto L_00565a3e;
L_005658ea:; BB(0x005658ea);
    /* 005658ea: mov eax, dword ptr [ebx + 0x520] */ r_eax = R32((u32)(r_ebx+0x520u));
    /* 005658f0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005658f2: jne 0x565a2b */ if (!fZ) goto L_00565a2b;
L_005658f8:; BB(0x005658f8);
    /* 005658f8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005658fa: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x5658ffu); f_007aa094();
    /* 005658ff: mov eax, dword ptr [ebx + 0xb0] */ r_eax = R32((u32)(r_ebx+0xb0u));
    /* 00565905: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00565907: je 0x565913 */ if (fZ) goto L_00565913;
L_00565909:; BB(0x00565909);
    /* 00565909: mov dword ptr [ebx + 0x520], 1 */ W32((u32)(r_ebx+0x520u), 0x1u);
L_00565913:; BB(0x00565913);
    /* 00565913: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00565915: call 0x565e7c */ r_esp -= 4; W32(r_esp, 0x56591au); f_00565e7c();
    /* 0056591a: push 0x41000000 */ { u32 v = 0x41000000u; r_esp -= 4; W32(r_esp, v); }
    /* 0056591f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00565921: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x565926u); f_007aaa30();
    /* 00565926: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00565928: je 0x565947 */ if (fZ) goto L_00565947;
L_0056592a:; BB(0x0056592a);
    /* 0056592a: push 0x237 */ { u32 v = 0x237u; r_esp -= 4; W32(r_esp, v); }
    /* 0056592f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00565931: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x565936u); f_007879b8();
    /* 00565936: lea ebp, [ebx + 0x38] */ r_ebp = (u32)(r_ebx+0x38u);
    /* 00565939: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0056593b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056593c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056593d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056593e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056593f: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x565944u); f_00814298();
    /* 00565944: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00565947:; BB(0x00565947);
    /* 00565947: push 0x42040000 */ { u32 v = 0x42040000u; r_esp -= 4; W32(r_esp, v); }
    /* 0056594c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0056594e: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x565953u); f_007aaa30();
    /* 00565953: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00565955: je 0x5659d1 */ if (fZ) goto L_005659d1;
L_00565957:; BB(0x00565957);
    /* 00565957: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00565959: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0056595b: call dword ptr [eax + 0x178] */ { u32 t = R32((u32)(r_eax+0x178u)); r_esp -= 4; W32(r_esp, 0x565961u); call_ind(t); }
    /* 00565961: call 0x7b51c4 */ r_esp -= 4; W32(r_esp, 0x565966u); f_007b51c4();
    /* 00565966: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00565968: call 0x7b6894 */ r_esp -= 4; W32(r_esp, 0x56596du); f_007b6894();
    /* 0056596d: mov eax, dword ptr [ebx + 0x514] */ r_eax = R32((u32)(r_ebx+0x514u));
    /* 00565973: mov edx, dword ptr [eax + 0xa4] */ r_edx = R32((u32)(r_eax+0xa4u));
    /* 00565979: mov ebp, dword ptr [edx + 0x18] */ r_ebp = R32((u32)(r_edx+0x18u));
    /* 0056597c: test ebp, 0x80000 */ {  u32 a = r_ebp; u32 b = 0x80000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00565982: je 0x5659d1 */ if (fZ) goto L_005659d1;
L_00565984:; BB(0x00565984);
    /* 00565984: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
L_00565986:; BB(0x00565986);
    /* 00565986: mov esi, dword ptr [ebp + 0xaad6e0] */ r_esi = R32((u32)(r_ebp+0xaad6e0u));
    /* 0056598c: add ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0056598f: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00565991: je 0x5659d1 */ if (fZ) goto L_005659d1;
L_00565993:; BB(0x00565993);
    /* 00565993: movzx eax, word ptr [esi + 0x96] */ r_eax = (u32)R16((u32)(r_esi+0x96u));
    /* 0056599a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056599d: jne 0x5659cc */ if (!fZ) goto L_005659cc;
L_0056599f:; BB(0x0056599f);
    /* 0056599f: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 005659a4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005659a5: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 005659a7: mov ecx, esi */ r_ecx = r_esi;
    /* 005659a9: call dword ptr [eax + 0x50] */ { u32 t = R32((u32)(r_eax+0x50u)); r_esp -= 4; W32(r_esp, 0x5659acu); call_ind(t); }
    /* 005659ac: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005659ae: je 0x5659cc */ if (fZ) goto L_005659cc;
L_005659b0:; BB(0x005659b0);
    /* 005659b0: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 005659b5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005659b6: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 005659b8: mov ecx, esi */ r_ecx = r_esi;
    /* 005659ba: call dword ptr [eax + 0x68] */ { u32 t = R32((u32)(r_eax+0x68u)); r_esp -= 4; W32(r_esp, 0x5659bdu); call_ind(t); }
    /* 005659bd: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 005659c2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005659c3: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 005659c5: mov ecx, esi */ r_ecx = r_esi;
    /* 005659c7: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x5659cau); call_ind(t); }
    /* 005659ca: fstp st(0) */ ST(0) = ST(0); FPOP();
L_005659cc:; BB(0x005659cc);
    /* 005659cc: cmp ebp, 0x40 */ {  u32 a = r_ebp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005659cf: jl 0x565986 */ if ((fS!=fO)) goto L_00565986;
L_005659d1:; BB(0x005659d1);
    /* 005659d1: push 0x3dcccccd */ { u32 v = 0x3dcccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 005659d6: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005659d8: call 0x5675fc */ r_esp -= 4; W32(r_esp, 0x5659ddu); f_005675fc();
    /* 005659dd: push 0x1000 */ { u32 v = 0x1000u; r_esp -= 4; W32(r_esp, v); }
    /* 005659e2: push dword ptr [ebx + 0x530] */ { u32 v = R32((u32)(r_ebx+0x530u)); r_esp -= 4; W32(r_esp, v); }
    /* 005659e8: push dword ptr [ebx + 0x60] */ { u32 v = R32((u32)(r_ebx+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 005659eb: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x5659f0u); f_007a8c74();
    /* 005659f0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005659f3: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 005659f6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005659f7: mov dword ptr [ebx + 0x60], eax */ W32((u32)(r_ebx+0x60u), r_eax);
    /* 005659fa: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005659fc: call 0x564800 */ r_esp -= 4; W32(r_esp, 0x565a01u); f_00564800();
    /* 00565a01: fld dword ptr [ebx + 0xc0] */ FPUSH(R_F32((u32)(r_ebx+0xc0u)));
    /* 00565a07: fcomp dword ptr [0x925fb4] */ fx_compare(ST(0), R_F32((u32)(0x925fb4u))); FPOP();
    /* 00565a0d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00565a0f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00565a10: ja 0x565a2b */ if ((!fC&&!fZ)) goto L_00565a2b;
L_00565a12:; BB(0x00565a12);
    /* 00565a12: push dword ptr [ebx + 0x4a0] */ { u32 v = R32((u32)(r_ebx+0x4a0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00565a18: push dword ptr [ebx + 0x3b0] */ { u32 v = R32((u32)(r_ebx+0x3b0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00565a1e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00565a20: push dword ptr [ebx + 0x3a8] */ { u32 v = R32((u32)(r_ebx+0x3a8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00565a26: call 0x5207c4 */ r_esp -= 4; W32(r_esp, 0x565a2bu); f_005207c4();
L_00565a2b:; BB(0x00565a2b);
    /* 00565a2b: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00565a2d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00565a2f: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x565a35u); call_ind(t); }
    /* 00565a35: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00565a37: call 0x7b7e9c */ r_esp -= 4; W32(r_esp, 0x565a3cu); f_007b7e9c();
    /* 00565a3c: jmp 0x565a61 */ goto L_00565a61;
L_00565a3e:; BB(0x00565a3e);
    /* 00565a3e: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00565a41: jne 0x565a61 */ if (!fZ) goto L_00565a61;
L_00565a43:; BB(0x00565a43);
    /* 00565a43: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00565a45: call 0x564760 */ r_esp -= 4; W32(r_esp, 0x565a4au); f_00564760();
    /* 00565a4a: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00565a4c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00565a4e: call dword ptr [eax + 0x178] */ { u32 t = R32((u32)(r_eax+0x178u)); r_esp -= 4; W32(r_esp, 0x565a54u); call_ind(t); }
    /* 00565a54: jmp 0x565a61 */ goto L_00565a61;
L_00565a56:; BB(0x00565a56);
    /* 00565a56: mov eax, dword ptr [ebx + 0x520] */ r_eax = R32((u32)(r_ebx+0x520u));
    /* 00565a5c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00565a5f: je 0x565a6a */ if (fZ) goto L_00565a6a;
L_00565a61:; BB(0x00565a61);
    /* 00565a61: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00565a64: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00565a65: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00565a66: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00565a67: ret 4 */ FN_RET(0x005658c4); r_esp += 8; return;
L_00565a6a:; BB(0x00565a6a);
    /* 00565a6a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00565a6c: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x565a71u); f_007751b0();
    /* 00565a71: fcomp dword ptr [ebx + 0x4b0] */ fx_compare(ST(0), R_F32((u32)(r_ebx+0x4b0u))); FPOP();
    /* 00565a77: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00565a79: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00565a7a: jae 0x565a87 */ if (!fC) goto L_00565a87;
L_00565a7c:; BB(0x00565a7c);
    /* 00565a7c: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00565a7e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00565a80: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x565a85u); f_0051f62c();
    /* 00565a85: jmp 0x565a61 */ goto L_00565a61;
L_00565a87:; BB(0x00565a87);
    /* 00565a87: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00565a89: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00565a8b: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x565a90u); f_0051f62c();
    /* 00565a90: jmp 0x565a61 */ goto L_00565a61;
L_00565a92:; BB(0x00565a92);
    /* 00565a92: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 00565a94: mov eax, 0xc */ r_eax = 0xcu;
    /* 00565a99: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 00565aa0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00565aa2: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x565aa7u); f_0051f664();
    /* 00565aa7: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00565aa9: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00565aab: call dword ptr [eax + 0x188] */ { u32 t = R32((u32)(r_eax+0x188u)); r_esp -= 4; W32(r_esp, 0x565ab1u); call_ind(t); }
    /* 00565ab1: mov eax, dword ptr [ebx + 0x4b4] */ r_eax = R32((u32)(r_ebx+0x4b4u));
    /* 00565ab7: and eax, 0xfffffffd */ {  u32 a = r_eax; u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00565aba: mov dword ptr [ebx + 0x4b4], eax */ W32((u32)(r_ebx+0x4b4u), r_eax);
    /* 00565ac0: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00565ac2: mov dword ptr [ebx + 0x520], edx */ W32((u32)(r_ebx+0x520u), r_edx);
    /* 00565ac8: mov dword ptr [ebx + 0x534], edx */ W32((u32)(r_ebx+0x534u), r_edx);
    /* 00565ace: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00565ad0: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x565ad5u); f_007751b0();
    /* 00565ad5: fld dword ptr [0x925fc4] */ FPUSH(R_F32((u32)(0x925fc4u)));
    /* 00565adb: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00565add: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 00565ae1: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 00565ae6: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00565aeb: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00565aef: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 00565af3: fistp dword ptr [esp + 0x28] */ W32((u32)(r_esp+0x28u), (u32)fx_int32(ST(0))); FPOP();
    /* 00565af7: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 00565afb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00565afd: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 00565b01: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00565b04: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00565b07: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x565b0cu); f_007751b0();
    /* 00565b0c: fadd st(0) */ ST(0) = ST(0) + ST(0);
    /* 00565b0e: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
    /* 00565b11: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 00565b15: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 00565b1a: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00565b1f: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00565b23: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 00565b27: fistp dword ptr [esp + 0x28] */ W32((u32)(r_esp+0x28u), (u32)fx_int32(ST(0))); FPOP();
    /* 00565b2b: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 00565b2f: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 00565b33: lea edx, [eax - 1] */ r_edx = (u32)(r_eax+0xffffffffu);
    /* 00565b36: cmp edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00565b38: jg 0x565b42 */ if ((!fZ&&fS==fO)) goto L_00565b42;
L_00565b3a:; BB(0x00565b3a);
    /* 00565b3a: mov edx, eax */ r_edx = r_eax;
    /* 00565b3c: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00565b40: jmp 0x565b46 */ goto L_00565b46;
L_00565b42:; BB(0x00565b42);
    /* 00565b42: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
L_00565b46:; BB(0x00565b46);
    /* 00565b46: mov dword ptr [ebx + 0x3a8], 0 */ W32((u32)(r_ebx+0x3a8u), 0x0u);
    /* 00565b50: add ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00565b52: neg ebp */ { u32 x = r_ebp; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00565b54: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00565b56: mov dword ptr [ebx + 0x3ac], 0 */ W32((u32)(r_ebx+0x3acu), 0x0u);
    /* 00565b60: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
    /* 00565b64: mov dword ptr [ebx + 0x3b0], 0 */ W32((u32)(r_ebx+0x3b0u), 0x0u);
    /* 00565b6e: mov dword ptr [ebx + 0x3b4], 0 */ W32((u32)(r_ebx+0x3b4u), 0x0u);
    /* 00565b78: call 0x565eac */ r_esp -= 4; W32(r_esp, 0x565b7du); f_00565eac();
    /* 00565b7d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00565b7f: je 0x565d4a */ if (fZ) goto L_00565d4a;
L_00565b85:; BB(0x00565b85);
    /* 00565b85: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00565b87: call 0x5213d8 */ r_esp -= 4; W32(r_esp, 0x565b8cu); f_005213d8();
    /* 00565b8c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00565b8e: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x565b93u); f_00521410();
    /* 00565b93: fld dword ptr [ebx + 0x3a8] */ FPUSH(R_F32((u32)(r_ebx+0x3a8u)));
    /* 00565b99: fld dword ptr [ebx + 0x3b0] */ FPUSH(R_F32((u32)(r_ebx+0x3b0u)));
    /* 00565b9f: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00565ba1: fmul qword ptr [0x925d30] */ ST(0) = ST(0) * R_F64((u32)(0x925d30u));
    /* 00565ba7: fdiv qword ptr [0x925d28] */ ST(0) = ST(0) / R_F64((u32)(0x925d28u));
    /* 00565bad: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 00565bb1: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 00565bb6: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00565bbb: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00565bbf: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 00565bc3: fistp dword ptr [esp + 0x28] */ W32((u32)(r_esp+0x28u), (u32)fx_int32(ST(0))); FPOP();
    /* 00565bc7: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 00565bcb: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 00565bcf: mov dword ptr [ebx + 0x530], eax */ W32((u32)(r_ebx+0x530u), r_eax);
    /* 00565bd5: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00565bd7: mov dword ptr [esp + 0x30], edi */ W32((u32)(r_esp+0x30u), r_edi);
    /* 00565bdb: jmp 0x565be3 */ goto L_00565be3;
L_00565bdd:; BB(0x00565bdd);
    /* 00565bdd: mov eax, dword ptr [ebx + 0x530] */ r_eax = R32((u32)(r_ebx+0x530u));
L_00565be3:; BB(0x00565be3);
    /* 00565be3: mov esi, dword ptr [esp + ebp*4] */ r_esi = R32((u32)(r_esp+r_ebp*4));
    /* 00565be6: mov edi, esi */ r_edi = r_esi;
    /* 00565be8: shl edi, 0xd */ { u32 c = (13u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 00565beb: sub edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00565bed: mov esi, dword ptr [ebx + 0xa4] */ r_esi = R32((u32)(r_ebx+0xa4u));
    /* 00565bf3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00565bf5: lea edx, [edi + eax + 0x8000] */ r_edx = (u32)(r_edi+r_eax+0x8000u);
    /* 00565bfc: mov edi, dword ptr [ebx + 0x60] */ r_edi = R32((u32)(r_ebx+0x60u));
    /* 00565bff: mov eax, dword ptr [esi + 0x18] */ r_eax = R32((u32)(r_esi+0x18u));
    /* 00565c02: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 00565c06: mov dword ptr [esp + 0x40], eax */ W32((u32)(r_esp+0x40u), r_eax);
    /* 00565c0a: mov dword ptr [esi], 0 */ W32((u32)(r_esi), 0x0u);
    /* 00565c10: mov dword ptr [esi + 8], 0x42a00000 */ W32((u32)(r_esi+0x8u), 0x42a00000u);
    /* 00565c17: mov dword ptr [esi + 0xc], 0x42a00000 */ W32((u32)(r_esi+0xcu), 0x42a00000u);
    /* 00565c1e: mov dword ptr [esi + 0x10], 0x41000000 */ W32((u32)(r_esi+0x10u), 0x41000000u);
    /* 00565c25: mov dword ptr [esi + 0x14], 1 */ W32((u32)(r_esi+0x14u), 0x1u);
    /* 00565c2c: mov dword ptr [esi + 0x18], 0x9d01 */ W32((u32)(r_esi+0x18u), 0x9d01u);
    /* 00565c33: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00565c35: mov dword ptr [ebx + 0x60], edx */ W32((u32)(r_ebx+0x60u), r_edx);
    /* 00565c38: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x565c3eu); call_ind(t); }
    /* 00565c3e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00565c40: call 0x7b7e9c */ r_esp -= 4; W32(r_esp, 0x565c45u); f_007b7e9c();
    /* 00565c45: mov eax, dword ptr [esi + 0x18] */ r_eax = R32((u32)(r_esi+0x18u));
    /* 00565c48: test eax, 0x380000 */ {  u32 a = r_eax; u32 b = 0x380000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00565c4d: je 0x565c56 */ if (fZ) goto L_00565c56;
L_00565c4f:; BB(0x00565c4f);
    /* 00565c4f: mov eax, 1 */ r_eax = 0x1u;
    /* 00565c54: jmp 0x565c58 */ goto L_00565c58;
L_00565c56:; BB(0x00565c56);
    /* 00565c56: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00565c58:; BB(0x00565c58);
    /* 00565c58: mov edx, dword ptr [ebx + 0x46c] */ r_edx = R32((u32)(r_ebx+0x46cu));
    /* 00565c5e: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00565c61: je 0x565e15 */ if (fZ) goto L_00565e15;
L_00565c67:; BB(0x00565c67);
    /* 00565c67: mov edx, dword ptr [0x9be2e0] */ r_edx = R32((u32)(0x9be2e0u));
    /* 00565c6d: mov dword ptr [esi], edx */ W32((u32)(r_esi), r_edx);
    /* 00565c6f: mov edx, dword ptr [0x9be2e4] */ r_edx = R32((u32)(0x9be2e4u));
    /* 00565c75: mov dword ptr [esi + 4], edx */ W32((u32)(r_esi+0x4u), r_edx);
    /* 00565c78: mov edx, dword ptr [0x9be2e8] */ r_edx = R32((u32)(0x9be2e8u));
    /* 00565c7e: mov dword ptr [esi + 8], edx */ W32((u32)(r_esi+0x8u), r_edx);
    /* 00565c81: mov edx, dword ptr [0x9be2ec] */ r_edx = R32((u32)(0x9be2ecu));
    /* 00565c87: mov dword ptr [esi + 0xc], edx */ W32((u32)(r_esi+0xcu), r_edx);
    /* 00565c8a: mov edx, dword ptr [0x9be2f0] */ r_edx = R32((u32)(0x9be2f0u));
    /* 00565c90: mov dword ptr [esi + 0x10], edx */ W32((u32)(r_esi+0x10u), r_edx);
    /* 00565c93: mov edx, dword ptr [0x9be2f4] */ r_edx = R32((u32)(0x9be2f4u));
    /* 00565c99: mov dword ptr [esi + 0x14], edx */ W32((u32)(r_esi+0x14u), r_edx);
    /* 00565c9c: mov edx, dword ptr [0x9be2f8] */ r_edx = R32((u32)(0x9be2f8u));
    /* 00565ca2: mov dword ptr [esi + 0x18], edx */ W32((u32)(r_esi+0x18u), r_edx);
    /* 00565ca5: mov edx, dword ptr [0x9be2fc] */ r_edx = R32((u32)(0x9be2fcu));
    /* 00565cab: mov dword ptr [esi + 0x1c], edx */ W32((u32)(r_esi+0x1cu), r_edx);
    /* 00565cae: mov edx, dword ptr [0x9be300] */ r_edx = R32((u32)(0x9be300u));
    /* 00565cb4: mov dword ptr [esi + 0x20], edx */ W32((u32)(r_esi+0x20u), r_edx);
    /* 00565cb7: mov edx, dword ptr [0x9be304] */ r_edx = R32((u32)(0x9be304u));
    /* 00565cbd: mov dword ptr [esi + 0x24], edx */ W32((u32)(r_esi+0x24u), r_edx);
    /* 00565cc0: mov edx, dword ptr [0x9be308] */ r_edx = R32((u32)(0x9be308u));
    /* 00565cc6: mov dword ptr [esi + 0x28], edx */ W32((u32)(r_esi+0x28u), r_edx);
L_00565cc9:; BB(0x00565cc9);
    /* 00565cc9: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 00565ccd: mov dword ptr [esi + 0x18], edx */ W32((u32)(r_esi+0x18u), r_edx);
    /* 00565cd0: mov dword ptr [ebx + 0x60], edi */ W32((u32)(r_ebx+0x60u), r_edi);
    /* 00565cd3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00565cd5: jne 0x565d3a */ if (!fZ) goto L_00565d3a;
L_00565cd7:; BB(0x00565cd7);
    /* 00565cd7: mov ecx, dword ptr [esp + 0x34] */ r_ecx = R32((u32)(r_esp+0x34u));
    /* 00565cdb: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x565ce0u); f_0082dcbc();
    /* 00565ce0: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 00565ce4: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 00565ce8: fmul dword ptr [0x925fb0] */ ST(0) = ST(0) * R_F32((u32)(0x925fb0u));
    /* 00565cee: fmul dword ptr [0x925fb8] */ ST(0) = ST(0) * R_F32((u32)(0x925fb8u));
    /* 00565cf4: mov ecx, dword ptr [esp + 0x34] */ r_ecx = R32((u32)(r_esp+0x34u));
    /* 00565cf8: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 00565cfc: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x565d01u); f_0082ddd8();
    /* 00565d01: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 00565d05: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 00565d09: fmul dword ptr [0x925fb0] */ ST(0) = ST(0) * R_F32((u32)(0x925fb0u));
    /* 00565d0f: fmul dword ptr [0x925fb8] */ ST(0) = ST(0) * R_F32((u32)(0x925fb8u));
    /* 00565d15: fst dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0));
    /* 00565d19: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00565d1c: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 00565d20: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00565d23: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00565d27: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00565d29: mov dword ptr [esp + 8], 0x3f800000 */ W32((u32)(r_esp+0x8u), 0x3f800000u);
    /* 00565d31: call 0x520940 */ r_esp -= 4; W32(r_esp, 0x565d36u); f_00520940();
    /* 00565d36: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00565d38: je 0x565d7b */ if (fZ) goto L_00565d7b;
L_00565d3a:; BB(0x00565d3a);
    /* 00565d3a: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00565d3d: cmp ebp, 3 */ {  u32 a = r_ebp; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00565d40: jl 0x565bdd */ if ((fS!=fO)) goto L_00565bdd;
L_00565d46:; BB(0x00565d46);
    /* 00565d46: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
L_00565d4a:; BB(0x00565d4a);
    /* 00565d4a: fld dword ptr [ebx + 0x3b4] */ FPUSH(R_F32((u32)(r_ebx+0x3b4u)));
    /* 00565d50: fdiv dword ptr [0x925fd0] */ ST(0) = ST(0) / R_F32((u32)(0x925fd0u));
    /* 00565d56: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00565d58: fst dword ptr [ebx + 0x49c] */ W_F32((u32)(r_ebx+0x49cu), ST(0));
    /* 00565d5e: fstp dword ptr [ebx + 0x4a0] */ W_F32((u32)(r_ebx+0x4a0u), ST(0)); FPOP();
    /* 00565d64: mov dword ptr [ebx + 0x520], 0 */ W32((u32)(r_ebx+0x520u), 0x0u);
    /* 00565d6e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00565d70: call dword ptr [eax + 0x174] */ { u32 t = R32((u32)(r_eax+0x174u)); r_esp -= 4; W32(r_esp, 0x565d76u); call_ind(t); }
    /* 00565d76: jmp 0x565a61 */ goto L_00565a61;
L_00565d7b:; BB(0x00565d7b);
    /* 00565d7b: lea esi, [esp + 0xc] */ r_esi = (u32)(r_esp+0xcu);
    /* 00565d7f: fld dword ptr [ebx + 0x300] */ FPUSH(R_F32((u32)(r_ebx+0x300u)));
    /* 00565d85: fadd dword ptr [esp + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x3cu));
    /* 00565d89: mov eax, dword ptr [ebx + 0x304] */ r_eax = R32((u32)(r_ebx+0x304u));
    /* 00565d8f: fld dword ptr [ebx + 0x308] */ FPUSH(R_F32((u32)(r_ebx+0x308u)));
    /* 00565d95: fadd dword ptr [esp + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x38u));
    /* 00565d99: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00565d9b: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00565d9f: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 00565da3: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00565da7: lea edx, [ebx + 0x128] */ r_edx = (u32)(r_ebx+0x128u);
    /* 00565dad: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 00565daf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00565db0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00565db1: call 0x7806dc */ r_esp -= 4; W32(r_esp, 0x565db6u); f_007806dc();
    /* 00565db6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00565db9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00565dbb: je 0x565d3a */ if (fZ) goto L_00565d3a;
L_00565dc1:; BB(0x00565dc1);
    /* 00565dc1: mov esi, dword ptr [esp + 0x34] */ r_esi = R32((u32)(r_esp+0x34u));
    /* 00565dc5: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 00565dc9: mov ecx, esi */ r_ecx = r_esi;
    /* 00565dcb: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x565dd0u); f_0082dcbc();
    /* 00565dd0: fstp dword ptr [ebx + 0x3a8] */ W_F32((u32)(r_ebx+0x3a8u), ST(0)); FPOP();
    /* 00565dd6: mov dword ptr [ebx + 0x3ac], 0 */ W32((u32)(r_ebx+0x3acu), 0x0u);
    /* 00565de0: mov ecx, esi */ r_ecx = r_esi;
    /* 00565de2: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x565de7u); f_0082ddd8();
    /* 00565de7: mov eax, dword ptr [esp + ebp*4] */ r_eax = R32((u32)(r_esp+r_ebp*4));
    /* 00565dea: fstp dword ptr [ebx + 0x3b0] */ W_F32((u32)(r_ebx+0x3b0u), ST(0)); FPOP();
    /* 00565df0: mov ebp, eax */ r_ebp = r_eax;
    /* 00565df2: shl ebp, 0xd */ { u32 c = (13u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebp = r;  } }
    /* 00565df5: sub ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00565df7: mov dword ptr [ebx + 0x3b4], 0x42700000 */ W32((u32)(r_ebx+0x3b4u), 0x42700000u);
    /* 00565e01: mov edx, ebp */ r_edx = r_ebp;
    /* 00565e03: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00565e06: add ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00565e08: sar ebp, 1 */ { u32 c = (1u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebp = r;  } }
    /* 00565e0a: add dword ptr [ebx + 0x530], ebp */ { u32 ad = (u32)(r_ebx+0x530u);  u32 a = R32(ad); u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00565e10: jmp 0x565d4a */ goto L_00565d4a;
L_00565e15:; BB(0x00565e15);
    /* 00565e15: mov edx, dword ptr [0x9be30c] */ r_edx = R32((u32)(0x9be30cu));
    /* 00565e1b: mov dword ptr [esi], edx */ W32((u32)(r_esi), r_edx);
    /* 00565e1d: mov edx, dword ptr [0x9be310] */ r_edx = R32((u32)(0x9be310u));
    /* 00565e23: mov dword ptr [esi + 4], edx */ W32((u32)(r_esi+0x4u), r_edx);
    /* 00565e26: mov edx, dword ptr [0x9be314] */ r_edx = R32((u32)(0x9be314u));
    /* 00565e2c: mov dword ptr [esi + 8], edx */ W32((u32)(r_esi+0x8u), r_edx);
    /* 00565e2f: mov edx, dword ptr [0x9be318] */ r_edx = R32((u32)(0x9be318u));
    /* 00565e35: mov dword ptr [esi + 0xc], edx */ W32((u32)(r_esi+0xcu), r_edx);
    /* 00565e38: mov edx, dword ptr [0x9be31c] */ r_edx = R32((u32)(0x9be31cu));
    /* 00565e3e: mov dword ptr [esi + 0x10], edx */ W32((u32)(r_esi+0x10u), r_edx);
    /* 00565e41: mov edx, dword ptr [0x9be320] */ r_edx = R32((u32)(0x9be320u));
    /* 00565e47: mov dword ptr [esi + 0x14], edx */ W32((u32)(r_esi+0x14u), r_edx);
    /* 00565e4a: mov edx, dword ptr [0x9be324] */ r_edx = R32((u32)(0x9be324u));
    /* 00565e50: mov dword ptr [esi + 0x18], edx */ W32((u32)(r_esi+0x18u), r_edx);
    /* 00565e53: mov edx, dword ptr [0x9be328] */ r_edx = R32((u32)(0x9be328u));
    /* 00565e59: mov dword ptr [esi + 0x1c], edx */ W32((u32)(r_esi+0x1cu), r_edx);
    /* 00565e5c: mov edx, dword ptr [0x9be32c] */ r_edx = R32((u32)(0x9be32cu));
    /* 00565e62: mov dword ptr [esi + 0x20], edx */ W32((u32)(r_esi+0x20u), r_edx);
    /* 00565e65: mov edx, dword ptr [0x9be330] */ r_edx = R32((u32)(0x9be330u));
    /* 00565e6b: mov dword ptr [esi + 0x24], edx */ W32((u32)(r_esi+0x24u), r_edx);
    /* 00565e6e: mov edx, dword ptr [0x9be334] */ r_edx = R32((u32)(0x9be334u));
    /* 00565e74: mov dword ptr [esi + 0x28], edx */ W32((u32)(r_esi+0x28u), r_edx);
    /* 00565e77: jmp 0x565cc9 */ goto L_00565cc9;
}

void f_00565e7c(void) /* sub_565E7C */
{
    FN_ENTER(0x00565e7c);
    /* 00565e7c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00565e7d: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00565e7f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00565e81: push 0x40e00000 */ { u32 v = 0x40e00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00565e86: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x565e8bu); f_007aaa30();
    /* 00565e8b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00565e8d: jne 0x565e9f */ if (!fZ) goto L_00565e9f;
L_00565e8f:; BB(0x00565e8f);
    /* 00565e8f: push 0x41e00000 */ { u32 v = 0x41e00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00565e94: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00565e96: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x565e9bu); f_007aaa30();
    /* 00565e9b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00565e9d: je 0x565eaa */ if (fZ) goto L_00565eaa;
L_00565e9f:; BB(0x00565e9f);
    /* 00565e9f: lea eax, [ebp + 0x38] */ r_eax = (u32)(r_ebp+0x38u);
    /* 00565ea2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00565ea3: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00565ea5: call 0x5648a0 */ r_esp -= 4; W32(r_esp, 0x565eaau); f_005648a0();
L_00565eaa:; BB(0x00565eaa);
    /* 00565eaa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00565eab: ret  */ FN_RET(0x00565e7c); r_esp += 4; return;
}

void f_00565eac(void) /* sub_565EAC */
{
    FN_ENTER(0x00565eac);
    /* 00565eac: mov eax, dword ptr [ecx + 0x46c] */ r_eax = R32((u32)(r_ecx+0x46cu));
    /* 00565eb2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00565eb4: je 0x565ec1 */ if (fZ) goto L_00565ec1;
L_00565eb6:; BB(0x00565eb6);
    /* 00565eb6: push 0x43af0000 */ { u32 v = 0x43af0000u; r_esp -= 4; W32(r_esp, v); }
    /* 00565ebb: call 0x521010 */ r_esp -= 4; W32(r_esp, 0x565ec0u); f_00521010();
    /* 00565ec0: ret  */ FN_RET(0x00565eac); r_esp += 4; return;
L_00565ec1:; BB(0x00565ec1);
    /* 00565ec1: push 0x437a0000 */ { u32 v = 0x437a0000u; r_esp -= 4; W32(r_esp, v); }
    /* 00565ec6: call 0x521010 */ r_esp -= 4; W32(r_esp, 0x565ecbu); f_00521010();
    /* 00565ecb: ret  */ FN_RET(0x00565eac); r_esp += 4; return;
}

void f_00565ecc(void) /* sub_565ECC */
{
    FN_ENTER(0x00565ecc);
    /* 00565ecc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00565ecd: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00565ed0: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00565ed2: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 00565ed6: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00565ed9: je 0x5660d0 */ if (fZ) goto L_005660d0;
L_00565edf:; BB(0x00565edf);
    /* 00565edf: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00565ee2: je 0x5660b6 */ if (fZ) goto L_005660b6;
L_00565ee8:; BB(0x00565ee8);
    /* 00565ee8: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00565eeb: je 0x5660a2 */ if (fZ) goto L_005660a2;
L_00565ef1:; BB(0x00565ef1);
    /* 00565ef1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00565ef3: jne 0x566094 */ if (!fZ) goto L_00566094;
L_00565ef9:; BB(0x00565ef9);
    /* 00565ef9: mov eax, dword ptr [ebx + 0x520] */ r_eax = R32((u32)(r_ebx+0x520u));
    /* 00565eff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00565f01: jne 0x56605a */ if (!fZ) goto L_0056605a;
L_00565f07:; BB(0x00565f07);
    /* 00565f07: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00565f09: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x565f0eu); f_007aa094();
    /* 00565f0e: mov eax, dword ptr [ebx + 0xb0] */ r_eax = R32((u32)(r_ebx+0xb0u));
    /* 00565f14: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00565f16: je 0x565f83 */ if (fZ) goto L_00565f83;
L_00565f18:; BB(0x00565f18);
    /* 00565f18: mov dword ptr [ebx + 0x520], 1 */ W32((u32)(r_ebx+0x520u), 0x1u);
    /* 00565f22: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 00565f25: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 00565f29: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 00565f30: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 00565f38: mov dword ptr [esp + 8], 0xc1200000 */ W32((u32)(r_esp+0x8u), 0xc1200000u);
    /* 00565f40: push dword ptr [ebx + 0x60] */ { u32 v = R32((u32)(r_ebx+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 00565f43: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00565f44: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00565f45: call 0x782b64 */ r_esp -= 4; W32(r_esp, 0x565f4au); f_00782b64();
    /* 00565f4a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00565f4d: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00565f50: lea edx, [ebx + 0x38] */ r_edx = (u32)(r_ebx+0x38u);
    /* 00565f53: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x565f58u); f_0082ebac();
    /* 00565f58: mov eax, dword ptr [ebx + 0x46c] */ r_eax = R32((u32)(r_ebx+0x46cu));
    /* 00565f5e: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00565f61: je 0x5660bd */ if (fZ) goto L_005660bd;
L_00565f67:; BB(0x00565f67);
    /* 00565f67: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00565f6a: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 00565f6c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00565f6d: call 0x5782f8 */ r_esp -= 4; W32(r_esp, 0x565f72u); f_005782f8();
    /* 00565f72: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00565f75:; BB(0x00565f75);
    /* 00565f75: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00565f78: push 0x46 */ { u32 v = 0x46u; r_esp -= 4; W32(r_esp, v); }
    /* 00565f7a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00565f7b: call 0x578778 */ r_esp -= 4; W32(r_esp, 0x565f80u); f_00578778();
    /* 00565f80: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00565f83:; BB(0x00565f83);
    /* 00565f83: push 0x300 */ { u32 v = 0x300u; r_esp -= 4; W32(r_esp, v); }
    /* 00565f88: push dword ptr [ebx + 0x530] */ { u32 v = R32((u32)(r_ebx+0x530u)); r_esp -= 4; W32(r_esp, v); }
    /* 00565f8e: push dword ptr [ebx + 0x60] */ { u32 v = R32((u32)(r_ebx+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 00565f91: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x565f96u); f_007a8c74();
    /* 00565f96: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00565f99: fld dword ptr [ebx + 0x384] */ FPUSH(R_F32((u32)(r_ebx+0x384u)));
    /* 00565f9f: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 00565fa2: fcom dword ptr [0x925f80] */ fx_compare(ST(0), R_F32((u32)(0x925f80u))); 
    /* 00565fa8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00565faa: mov dword ptr [ebx + 0x60], edx */ W32((u32)(r_ebx+0x60u), r_edx);
    /* 00565fad: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00565fae: jae 0x565fbe */ if (!fC) goto L_00565fbe;
L_00565fb0:; BB(0x00565fb0);
    /* 00565fb0: fld dword ptr [ebx + 0x538] */ FPUSH(R_F32((u32)(r_ebx+0x538u)));
    /* 00565fb6: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00565fb8: fst dword ptr [ebx + 0x384] */ W_F32((u32)(r_ebx+0x384u), ST(0));
L_00565fbe:; BB(0x00565fbe);
    /* 00565fbe: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00565fc0: mov eax, dword ptr [ebx + 0x30c] */ r_eax = R32((u32)(r_ebx+0x30cu));
    /* 00565fc6: mov edx, dword ptr [ebx + 0x310] */ r_edx = R32((u32)(r_ebx+0x310u));
    /* 00565fcc: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00565fd0: mov eax, dword ptr [ebx + 0x314] */ r_eax = R32((u32)(r_ebx+0x314u));
    /* 00565fd6: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 00565fda: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00565fde: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 00565fe2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00565fe3: call 0x7828e4 */ r_esp -= 4; W32(r_esp, 0x565fe8u); f_007828e4();
    /* 00565fe8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00565fe9: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00565fec: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 00565ff0: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 00565ff4: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00565ff8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00565ffa: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00565ffd: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00566001: call 0x5209d4 */ r_esp -= 4; W32(r_esp, 0x566006u); f_005209d4();
    /* 00566006: push 0x41d00000 */ { u32 v = 0x41d00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0056600b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0056600d: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x566012u); f_007aaa30();
    /* 00566012: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00566014: je 0x566022 */ if (fZ) goto L_00566022;
L_00566016:; BB(0x00566016);
    /* 00566016: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 0056601a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056601b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0056601d: call 0x5661f8 */ r_esp -= 4; W32(r_esp, 0x566022u); f_005661f8();
L_00566022:; BB(0x00566022);
    /* 00566022: fld dword ptr [0x925f94] */ FPUSH(R_F32((u32)(0x925f94u)));
    /* 00566028: push dword ptr [ebx + 0x60] */ { u32 v = R32((u32)(r_ebx+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 0056602b: fld dword ptr [ebx + 0x30c] */ FPUSH(R_F32((u32)(r_ebx+0x30cu)));
    /* 00566031: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00566033: fld dword ptr [ebx + 0x314] */ FPUSH(R_F32((u32)(r_ebx+0x314u)));
    /* 00566039: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0056603b: fstp dword ptr [ebx + 0x30c] */ W_F32((u32)(r_ebx+0x30cu), ST(0)); FPOP();
    /* 00566041: fstp dword ptr [ebx + 0x314] */ W_F32((u32)(r_ebx+0x314u), ST(0)); FPOP();
    /* 00566047: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00566049: call 0x564800 */ r_esp -= 4; W32(r_esp, 0x56604eu); f_00564800();
    /* 0056604e: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00566050: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00566052: call dword ptr [eax + 0x168] */ { u32 t = R32((u32)(r_eax+0x168u)); r_esp -= 4; W32(r_esp, 0x566058u); call_ind(t); }
    /* 00566058: jmp 0x5660b6 */ goto L_005660b6;
L_0056605a:; BB(0x0056605a);
    /* 0056605a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056605d: jne 0x5660b6 */ if (!fZ) goto L_005660b6;
L_0056605f:; BB(0x0056605f);
    /* 0056605f: fld dword ptr [0x925f8c] */ FPUSH(R_F32((u32)(0x925f8cu)));
    /* 00566065: fld dword ptr [ebx + 0x3c] */ FPUSH(R_F32((u32)(r_ebx+0x3cu)));
    /* 00566068: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 0056606a: fld dword ptr [ebx + 0x540] */ FPUSH(R_F32((u32)(r_ebx+0x540u)));
    /* 00566070: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00566072: fstp dword ptr [ebx + 0x3c] */ W_F32((u32)(r_ebx+0x3cu), ST(0)); FPOP();
    /* 00566075: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00566077: fcom dword ptr [0x925f88] */ fx_compare(ST(0), R_F32((u32)(0x925f88u))); 
    /* 0056607d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0056607f: fstp dword ptr [ebx + 0x540] */ W_F32((u32)(r_ebx+0x540u), ST(0)); FPOP();
    /* 00566085: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00566086: jbe 0x5660b6 */ if ((fC||fZ)) goto L_005660b6;
L_00566088:; BB(0x00566088);
    /* 00566088: mov dword ptr [ebx + 0x520], 2 */ W32((u32)(r_ebx+0x520u), 0x2u);
    /* 00566092: jmp 0x5660b6 */ goto L_005660b6;
L_00566094:; BB(0x00566094);
    /* 00566094: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00566097: jne 0x5660b6 */ if (!fZ) goto L_005660b6;
L_00566099:; BB(0x00566099);
    /* 00566099: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0056609b: call 0x520be8 */ r_esp -= 4; W32(r_esp, 0x5660a0u); f_00520be8();
    /* 005660a0: jmp 0x5660b6 */ goto L_005660b6;
L_005660a2:; BB(0x005660a2);
    /* 005660a2: mov eax, dword ptr [ebx + 0x520] */ r_eax = R32((u32)(r_ebx+0x520u));
    /* 005660a8: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005660ab: jne 0x5660b6 */ if (!fZ) goto L_005660b6;
L_005660ad:; BB(0x005660ad);
    /* 005660ad: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 005660af: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005660b1: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5660b6u); f_0051f62c();
L_005660b6:; BB(0x005660b6);
    /* 005660b6: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005660b9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005660ba: ret 4 */ FN_RET(0x00565ecc); r_esp += 8; return;
L_005660bd:; BB(0x005660bd);
    /* 005660bd: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005660c0: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 005660c2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005660c3: call 0x5781d8 */ r_esp -= 4; W32(r_esp, 0x5660c8u); f_005781d8();
    /* 005660c8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005660cb: jmp 0x565f75 */ goto L_00565f75;
L_005660d0:; BB(0x005660d0);
    /* 005660d0: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 005660d2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005660d4: call dword ptr [eax + 0x188] */ { u32 t = R32((u32)(r_eax+0x188u)); r_esp -= 4; W32(r_esp, 0x5660dau); call_ind(t); }
    /* 005660da: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005660dc: call 0x51f894 */ r_esp -= 4; W32(r_esp, 0x5660e1u); f_0051f894();
    /* 005660e1: push 0x233 */ { u32 v = 0x233u; r_esp -= 4; W32(r_esp, v); }
    /* 005660e6: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005660e8: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x5660edu); f_007879b8();
    /* 005660ed: mov ecx, eax */ r_ecx = r_eax;
    /* 005660ef: lea eax, [ebx + 0x38] */ r_eax = (u32)(r_ebx+0x38u);
    /* 005660f2: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005660f4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005660f5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005660f6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005660f7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005660f8: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5660fdu); f_00814298();
    /* 005660fd: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00566100: push 0xf1 */ { u32 v = 0xf1u; r_esp -= 4; W32(r_esp, v); }
    /* 00566105: mov eax, 0xb */ r_eax = 0xbu;
    /* 0056610a: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 00566111: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00566113: call 0x779df0 */ r_esp -= 4; W32(r_esp, 0x566118u); f_00779df0();
    /* 00566118: mov eax, dword ptr [ebx + 0xd8] */ r_eax = R32((u32)(r_ebx+0xd8u));
    /* 0056611e: mov dword ptr [ebx + 0x520], 0 */ W32((u32)(r_ebx+0x520u), 0x0u);
    /* 00566128: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0056612a: push dword ptr [eax + 0x78] */ { u32 v = R32((u32)(r_eax+0x78u)); r_esp -= 4; W32(r_esp, v); }
    /* 0056612d: call 0x566240 */ r_esp -= 4; W32(r_esp, 0x566132u); f_00566240();
    /* 00566132: mov eax, dword ptr [ebx + 0x46c] */ r_eax = R32((u32)(r_ebx+0x46cu));
    /* 00566138: fstp dword ptr [ebx + 0x538] */ W_F32((u32)(r_ebx+0x538u), ST(0)); FPOP();
    /* 0056613e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00566140: mov dword ptr [ebx + 0x540], 0 */ W32((u32)(r_ebx+0x540u), 0x0u);
    /* 0056614a: mov dword ptr [ebx + 0x384], 0 */ W32((u32)(r_ebx+0x384u), 0x0u);
    /* 00566154: je 0x5661e9 */ if (fZ) goto L_005661e9;
L_0056615a:; BB(0x0056615a);
    /* 0056615a: mov eax, dword ptr [0xa73d68] */ r_eax = R32((u32)(0xa73d68u));
    /* 0056615f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00566161: je 0x5661e9 */ if (fZ) goto L_005661e9;
L_00566167:; BB(0x00566167);
    /* 00566167: mov dword ptr [esp + 0x34], esi */ W32((u32)(r_esp+0x34u), r_esi);
    /* 0056616b: mov dword ptr [esp + 0x30], edi */ W32((u32)(r_esp+0x30u), r_edi);
    /* 0056616f: mov edi, eax */ r_edi = r_eax;
L_00566171:; BB(0x00566171);
    /* 00566171: movzx edx, word ptr [edi + 8] */ r_edx = (u32)R16((u32)(r_edi+0x8u));
    /* 00566175: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00566176: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x56617bu); f_007b4d18();
    /* 0056617b: mov esi, eax */ r_esi = r_eax;
    /* 0056617d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00566180: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00566182: je 0x5661da */ if (fZ) goto L_005661da;
L_00566184:; BB(0x00566184);
    /* 00566184: mov edx, dword ptr [esi + 0x474] */ r_edx = R32((u32)(r_esi+0x474u));
    /* 0056618a: cmp edx, dword ptr [ebx + 0x474] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebx+0x474u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00566190: jne 0x5661da */ if (!fZ) goto L_005661da;
L_00566192:; BB(0x00566192);
    /* 00566192: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00566194: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x566199u); f_007751b0();
    /* 00566199: fld dword ptr [0x925f90] */ FPUSH(R_F32((u32)(0x925f90u)));
    /* 0056619f: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 005661a1: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 005661a5: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 005661aa: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005661af: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 005661b3: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 005661b7: fistp dword ptr [esp + 0x28] */ W32((u32)(r_esp+0x28u), (u32)fx_int32(ST(0))); FPOP();
    /* 005661bb: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 005661bf: movzx eax, word ptr [ebx + 0x2d8] */ r_eax = (u32)R16((u32)(r_ebx+0x2d8u));
    /* 005661c6: mov edx, dword ptr [esp + 0x28] */ r_edx = R32((u32)(r_esp+0x28u));
    /* 005661ca: add edx, 0x14 */ {  u32 a = r_edx; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005661cd: mov dword ptr [esi + 0x518], edx */ W32((u32)(r_esi+0x518u), r_edx);
    /* 005661d3: mov word ptr [esi + 0x51c], ax */ W16((u32)(r_esi+0x51cu), (u16)r_eax);
L_005661da:; BB(0x005661da);
    /* 005661da: mov edi, dword ptr [edi + 4] */ r_edi = R32((u32)(r_edi+0x4u));
    /* 005661dd: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005661df: jne 0x566171 */ if (!fZ) goto L_00566171;
L_005661e1:; BB(0x005661e1);
    /* 005661e1: mov esi, dword ptr [esp + 0x34] */ r_esi = R32((u32)(r_esp+0x34u));
    /* 005661e5: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
L_005661e9:; BB(0x005661e9);
    /* 005661e9: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005661eb: call 0x520bdc */ r_esp -= 4; W32(r_esp, 0x5661f0u); f_00520bdc();
    /* 005661f0: jmp 0x5660b6 */ goto L_005660b6;
}

