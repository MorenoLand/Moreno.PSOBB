#include "protos.h"

void f_0055f048(void) /* sub_55F048 */
{
    FN_ENTER(0x0055f048);
    /* 0055f048: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0055f049: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0055f04b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055f04d: push 0x223 */ { u32 v = 0x223u; r_esp -= 4; W32(r_esp, v); }
    /* 0055f052: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x55f057u); f_007879b8();
    /* 0055f057: mov ecx, eax */ r_ecx = r_eax;
    /* 0055f059: lea eax, [ebp + 0x300] */ r_eax = (u32)(r_ebp+0x300u);
    /* 0055f05f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0055f061: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055f062: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055f063: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055f064: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0055f065: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0055f066: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x55f06bu); f_008144b0();
    /* 0055f06b: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0055f06e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055f06f: ret  */ FN_RET(0x0055f048); r_esp += 4; return;
}

void f_0055f070(void) /* sub_55F070 */
{
    FN_ENTER(0x0055f070);
    /* 0055f070: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0055f071: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0055f073: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0055f077: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055f07a: je 0x55f0e2 */ if (fZ) goto L_0055f0e2;
L_0055f07c:; BB(0x0055f07c);
    /* 0055f07c: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055f07f: je 0x55f0ac */ if (fZ) goto L_0055f0ac;
L_0055f081:; BB(0x0055f081);
    /* 0055f081: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0055f083: jne 0x55f0c8 */ if (!fZ) goto L_0055f0c8;
L_0055f085:; BB(0x0055f085);
    /* 0055f085: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0055f087: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x55f08cu); f_007aa094();
    /* 0055f08c: mov eax, dword ptr [ebx + 0x3cc] */ r_eax = R32((u32)(r_ebx+0x3ccu));
    /* 0055f092: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055f095: je 0x55f0cc */ if (fZ) goto L_0055f0cc;
L_0055f097:; BB(0x0055f097);
    /* 0055f097: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0055f099: call 0x55fb70 */ r_esp -= 4; W32(r_esp, 0x55f09eu); f_0055fb70();
L_0055f09e:; BB(0x0055f09e);
    /* 0055f09e: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0055f0a0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0055f0a2: call dword ptr [eax + 0x168] */ { u32 t = R32((u32)(r_eax+0x168u)); r_esp -= 4; W32(r_esp, 0x55f0a8u); call_ind(t); }
    /* 0055f0a8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0055f0a9: ret 4 */ FN_RET(0x0055f070); r_esp += 8; return;
L_0055f0ac:; BB(0x0055f0ac);
    /* 0055f0ac: mov eax, dword ptr [ebx + 0x3d4] */ r_eax = R32((u32)(r_ebx+0x3d4u));
    /* 0055f0b2: lea ecx, [ebx + 0x3d4] */ r_ecx = (u32)(r_ebx+0x3d4u);
    /* 0055f0b8: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x55f0bbu); call_ind(t); }
    /* 0055f0bb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0055f0bd: je 0x55f0c8 */ if (fZ) goto L_0055f0c8;
L_0055f0bf:; BB(0x0055f0bf);
    /* 0055f0bf: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0055f0c1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0055f0c3: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x55f0c8u); f_0051f62c();
L_0055f0c8:; BB(0x0055f0c8);
    /* 0055f0c8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0055f0c9: ret 4 */ FN_RET(0x0055f070); r_esp += 8; return;
L_0055f0cc:; BB(0x0055f0cc);
    /* 0055f0cc: fld dword ptr [0x9256a8] */ FPUSH(R_F32((u32)(0x9256a8u)));
    /* 0055f0d2: fadd dword ptr [ebx + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x3cu));
    /* 0055f0d5: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0055f0d6: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0055f0d9: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0055f0db: call 0x55fb84 */ r_esp -= 4; W32(r_esp, 0x55f0e0u); f_0055fb84();
    /* 0055f0e0: jmp 0x55f09e */ goto L_0055f09e;
L_0055f0e2:; BB(0x0055f0e2);
    /* 0055f0e2: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0055f0e4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0055f0e6: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 0055f0ed: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0055f0ef: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x55f0f4u); f_0051f664();
    /* 0055f0f4: mov eax, dword ptr [ebx + 0x3d0] */ r_eax = R32((u32)(r_ebx+0x3d0u));
    /* 0055f0fa: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0055f0fc: and eax, 0xffbfffff */ {  u32 a = r_eax; u32 b = 0xffbfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0055f101: mov dword ptr [ebx + 0x3d0], eax */ W32((u32)(r_ebx+0x3d0u), r_eax);
    /* 0055f107: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0055f109: call dword ptr [edx + 0x184] */ { u32 t = R32((u32)(r_edx+0x184u)); r_esp -= 4; W32(r_esp, 0x55f10fu); call_ind(t); }
    /* 0055f10f: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 0055f112: mov dword ptr [ebx + 0x484], 1 */ W32((u32)(r_ebx+0x484u), 0x1u);
    /* 0055f11c: and eax, 0xfeffffff */ {  u32 a = r_eax; u32 b = 0xfeffffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0055f121: mov dword ptr [ebx + 0x30], eax */ W32((u32)(r_ebx+0x30u), r_eax);
    /* 0055f124: lea ecx, [ebx + 0x3d4] */ r_ecx = (u32)(r_ebx+0x3d4u);
    /* 0055f12a: call 0x576c48 */ r_esp -= 4; W32(r_esp, 0x55f12fu); f_00576c48();
    /* 0055f12f: add ebx, 0x38 */ {  u32 a = r_ebx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0055f132: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0055f133: call 0x57895c */ r_esp -= 4; W32(r_esp, 0x55f138u); f_0057895c();
    /* 0055f138: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0055f139: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0055f13a: ret 4 */ FN_RET(0x0055f070); r_esp += 8; return;
}

void f_0055f140(void) /* sub_55F140 */
{
    FN_ENTER(0x0055f140);
    /* 0055f140: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 0055f147: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0055f14a: je 0x55f158 */ if (fZ) goto L_0055f158;
L_0055f14c:; BB(0x0055f14c);
    /* 0055f14c: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0055f14f: je 0x55f158 */ if (fZ) goto L_0055f158;
L_0055f151:; BB(0x0055f151);
    /* 0055f151: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0055f153: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x55f158u); f_0051f62c();
L_0055f158:; BB(0x0055f158);
    /* 0055f158: ret  */ FN_RET(0x0055f140); r_esp += 4; return;
}

void f_0055f15c(void) /* sub_55F15C */
{
    FN_ENTER(0x0055f15c);
    /* 0055f15c: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 0055f163: cmp eax, 0xd */ {  u32 a = r_eax; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0055f166: je 0x55f16f */ if (fZ) goto L_0055f16f;
L_0055f168:; BB(0x0055f168);
    /* 0055f168: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 0055f16a: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x55f16fu); f_0051f62c();
L_0055f16f:; BB(0x0055f16f);
    /* 0055f16f: ret  */ FN_RET(0x0055f15c); r_esp += 4; return;
}

void f_0055f170(void) /* sub_55F170 */
{
    FN_ENTER(0x0055f170);
    /* 0055f170: mov eax, 1 */ r_eax = 0x1u;
    /* 0055f175: ret 4 */ FN_RET(0x0055f170); r_esp += 8; return;
}

void f_0055f178(void) /* sub_55F178 */
{
    FN_ENTER(0x0055f178);
    /* 0055f178: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0055f179: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0055f17a: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0055f17c: mov eax, dword ptr [ebx + 0x3d0] */ r_eax = R32((u32)(r_ebx+0x3d0u));
    /* 0055f182: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0055f184: je 0x55f1a0 */ if (fZ) goto L_0055f1a0;
L_0055f186:; BB(0x0055f186);
    /* 0055f186: mov dword ptr [ebx + 0x4c0], 7 */ W32((u32)(r_ebx+0x4c0u), 0x7u);
    /* 0055f190: and eax, 0xffffffef */ {  u32 a = r_eax; u32 b = 0xffffffefu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0055f193: mov dword ptr [ebx + 0x3d0], eax */ W32((u32)(r_ebx+0x3d0u), r_eax);
    /* 0055f199: mov edx, 7 */ r_edx = 0x7u;
    /* 0055f19e: jmp 0x55f1a6 */ goto L_0055f1a6;
L_0055f1a0:; BB(0x0055f1a0);
    /* 0055f1a0: mov edx, dword ptr [ebx + 0x4c0] */ r_edx = R32((u32)(r_ebx+0x4c0u));
L_0055f1a6:; BB(0x0055f1a6);
    /* 0055f1a6: cmp edx, 9 */ {  u32 a = r_edx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0055f1a9: ja 0x55f411 */ if ((!fC&&!fZ)) goto L_0055f411;
L_0055f1af:; BB(0x0055f1af);
    /* 0055f1af: mov edx, dword ptr [edx*4 + 0x925560] */ r_edx = R32((u32)(r_edx*4+0x925560u));
    /* 0055f1b6: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
L_0055f411:; BB(0x0055f411);
    /* 0055f411: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0055f412: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0055f413: ret  */ FN_RET(0x0055f178); r_esp += 4; return;
}

void f_0055f1b8(void)
{
    FN_ENTER(0x0055f1b8);
    /* 0055f1b8: mov eax, dword ptr [ebx + 0x484] */ r_eax = R32((u32)(r_ebx+0x484u));
    /* 0055f1be: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0055f1c0: jne 0x55f411 */ if (!fZ) goto L_0055f411;
L_0055f1c6:; BB(0x0055f1c6);
    /* 0055f1c6: mov edx, dword ptr [ebx + 0x49c] */ r_edx = R32((u32)(r_ebx+0x49cu));
    /* 0055f1cc: mov dword ptr [ebx + 0x4c0], 9 */ W32((u32)(r_ebx+0x4c0u), 0x9u);
    /* 0055f1d6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0055f1d8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0055f1da: mov dword ptr [ebx + 0x470], 0x3f800000 */ W32((u32)(r_ebx+0x470u), 0x3f800000u);
    /* 0055f1e4: mov dword ptr [ebx + 0x474], 0 */ W32((u32)(r_ebx+0x474u), 0x0u);
    /* 0055f1ee: mov dword ptr [ebx + 0x478], 0x3e4ccccd */ W32((u32)(r_ebx+0x478u), 0x3e4ccccdu);
    /* 0055f1f8: mov dword ptr [ebx + 0x47c], 0x3f800000 */ W32((u32)(r_ebx+0x47cu), 0x3f800000u);
    /* 0055f202: jle 0x55f228 */ if ((fZ||fS!=fO)) goto L_0055f228;
L_0055f204:; BB(0x0055f204);
    /* 0055f204: mov ecx, dword ptr [ebx + eax*4 + 0x4a0] */ r_ecx = R32((u32)(r_ebx+r_eax*4+0x4a0u));
    /* 0055f20b: mov edx, dword ptr [ecx + 0x3d0] */ r_edx = R32((u32)(r_ecx+0x3d0u));
    /* 0055f211: or edx, 0x100004 */ {  u32 a = r_edx; u32 b = 0x100004u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0055f217: mov dword ptr [ecx + 0x3d0], edx */ W32((u32)(r_ecx+0x3d0u), r_edx);
    /* 0055f21d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0055f220: cmp eax, dword ptr [ebx + 0x49c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0x49cu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055f226: jl 0x55f204 */ if ((fS!=fO)) goto L_0055f204;
L_0055f228:; BB(0x0055f228);
    /* 0055f228: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0055f22a: call 0x542084 */ r_esp -= 4; W32(r_esp, 0x55f22fu); f_00542084();
    /* 0055f22f: jmp 0x55f411 */ goto L_0055f411;
L_0055f411:; BB(0x0055f411);
    /* 0055f411: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0055f412: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0055f413: ret  */ FN_RET(0x0055f1b8); r_esp += 4; return;
}

void f_0055f234(void)
{
    FN_ENTER(0x0055f234);
    /* 0055f234: push 0x9257a4 */ { u32 v = 0x9257a4u; r_esp -= 4; W32(r_esp, v); }
    /* 0055f239: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0055f23b: call 0x55eb88 */ r_esp -= 4; W32(r_esp, 0x55f240u); f_0055eb88();
    /* 0055f240: mov dword ptr [ebx + 0x484], 3 */ W32((u32)(r_ebx+0x484u), 0x3u);
    /* 0055f24a: mov dword ptr [ebx + 0x488], 4 */ W32((u32)(r_ebx+0x488u), 0x4u);
    /* 0055f254: mov dword ptr [ebx + 0x48c], 2 */ W32((u32)(r_ebx+0x48cu), 0x2u);
    /* 0055f25e: mov dword ptr [ebx + 0x490], 0 */ W32((u32)(r_ebx+0x490u), 0x0u);
    /* 0055f268: mov dword ptr [ebx + 0x4c0], 8 */ W32((u32)(r_ebx+0x4c0u), 0x8u);
    /* 0055f272: jmp 0x55f411 */ goto L_0055f411;
L_0055f411:; BB(0x0055f411);
    /* 0055f411: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0055f412: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0055f413: ret  */ FN_RET(0x0055f234); r_esp += 4; return;
}

void f_0055f277(void)
{
    FN_ENTER(0x0055f277);
    /* 0055f277: mov eax, dword ptr [ebx + 0x484] */ r_eax = R32((u32)(r_ebx+0x484u));
    /* 0055f27d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0055f27f: jne 0x55f411 */ if (!fZ) goto L_0055f411;
L_0055f285:; BB(0x0055f285);
    /* 0055f285: mov eax, dword ptr [ebx + 0x49c] */ r_eax = R32((u32)(r_ebx+0x49cu));
    /* 0055f28b: mov dword ptr [ebx + 0x470], 0x3f800000 */ W32((u32)(r_ebx+0x470u), 0x3f800000u);
    /* 0055f295: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0055f297: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0055f299: mov dword ptr [ebx + 0x474], 0 */ W32((u32)(r_ebx+0x474u), 0x0u);
    /* 0055f2a3: mov dword ptr [ebx + 0x478], 0x3e4ccccd */ W32((u32)(r_ebx+0x478u), 0x3e4ccccdu);
    /* 0055f2ad: mov dword ptr [ebx + 0x47c], 0x3f800000 */ W32((u32)(r_ebx+0x47cu), 0x3f800000u);
    /* 0055f2b7: mov dword ptr [ebx + 0x4c0], 6 */ W32((u32)(r_ebx+0x4c0u), 0x6u);
    /* 0055f2c1: jle 0x55f411 */ if ((fZ||fS!=fO)) goto L_0055f411;
L_0055f2c7:; BB(0x0055f2c7);
    /* 0055f2c7: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
L_0055f2ca:; BB(0x0055f2ca);
    /* 0055f2ca: mov esi, dword ptr [ebx + edx*4 + 0x4a0] */ r_esi = R32((u32)(r_ebx+r_edx*4+0x4a0u));
    /* 0055f2d1: mov ecx, dword ptr [esi + 0x3d0] */ r_ecx = R32((u32)(r_esi+0x3d0u));
    /* 0055f2d7: test ecx, 0x100 */ {  u32 a = r_ecx; u32 b = 0x100u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055f2dd: je 0x55f2ee */ if (fZ) goto L_0055f2ee;
L_0055f2df:; BB(0x0055f2df);
    /* 0055f2df: or ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0055f2e2: mov dword ptr [esi + 0x3d0], ecx */ W32((u32)(r_esi+0x3d0u), r_ecx);
    /* 0055f2e8: mov eax, dword ptr [ebx + 0x49c] */ r_eax = R32((u32)(r_ebx+0x49cu));
L_0055f2ee:; BB(0x0055f2ee);
    /* 0055f2ee: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0055f2f1: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0055f2f3: jl 0x55f2ca */ if ((fS!=fO)) goto L_0055f2ca;
L_0055f2f5:; BB(0x0055f2f5);
    /* 0055f2f5: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 0055f2f8: jmp 0x55f411 */ goto L_0055f411;
L_0055f411:; BB(0x0055f411);
    /* 0055f411: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0055f412: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0055f413: ret  */ FN_RET(0x0055f277); r_esp += 4; return;
}

void f_0055f2fd(void)
{
    FN_ENTER(0x0055f2fd);
    /* 0055f2fd: push 0x9257a4 */ { u32 v = 0x9257a4u; r_esp -= 4; W32(r_esp, v); }
    /* 0055f302: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0055f304: call 0x55eb88 */ r_esp -= 4; W32(r_esp, 0x55f309u); f_0055eb88();
    /* 0055f309: mov dword ptr [ebx + 0x484], 3 */ W32((u32)(r_ebx+0x484u), 0x3u);
    /* 0055f313: mov eax, 2 */ r_eax = 0x2u;
    /* 0055f318: mov dword ptr [ebx + 0x488], eax */ W32((u32)(r_ebx+0x488u), r_eax);
    /* 0055f31e: mov dword ptr [ebx + 0x48c], eax */ W32((u32)(r_ebx+0x48cu), r_eax);
    /* 0055f324: mov dword ptr [ebx + 0x490], 0 */ W32((u32)(r_ebx+0x490u), 0x0u);
    /* 0055f32e: mov dword ptr [ebx + 0x4c0], 5 */ W32((u32)(r_ebx+0x4c0u), 0x5u);
    /* 0055f338: jmp 0x55f411 */ goto L_0055f411;
L_0055f411:; BB(0x0055f411);
    /* 0055f411: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0055f412: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0055f413: ret  */ FN_RET(0x0055f2fd); r_esp += 4; return;
}

void f_0055f33d(void)
{
    FN_ENTER(0x0055f33d);
    /* 0055f33d: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0055f33f: je 0x55f411 */ if (fZ) goto L_0055f411;
L_0055f345:; BB(0x0055f345);
    /* 0055f345: mov dword ptr [ebx + 0x4c0], 4 */ W32((u32)(r_ebx+0x4c0u), 0x4u);
    /* 0055f34f: jmp 0x55f411 */ goto L_0055f411;
L_0055f411:; BB(0x0055f411);
    /* 0055f411: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0055f412: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0055f413: ret  */ FN_RET(0x0055f33d); r_esp += 4; return;
}

void f_0055f354(void)
{
    FN_ENTER(0x0055f354);
    /* 0055f354: mov edx, dword ptr [ebx + 0x484] */ r_edx = R32((u32)(r_ebx+0x484u));
    /* 0055f35a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0055f35c: jne 0x55f411 */ if (!fZ) goto L_0055f411;
L_0055f362:; BB(0x0055f362);
    /* 0055f362: mov dword ptr [ebx + 0x4c0], 3 */ W32((u32)(r_ebx+0x4c0u), 0x3u);
    /* 0055f36c: and eax, 0xfffffff7 */ {  u32 a = r_eax; u32 b = 0xfffffff7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0055f36f: mov dword ptr [ebx + 0x3d0], eax */ W32((u32)(r_ebx+0x3d0u), r_eax);
    /* 0055f375: mov eax, dword ptr [ebx + 0x49c] */ r_eax = R32((u32)(r_ebx+0x49cu));
    /* 0055f37b: mov dword ptr [ebx + 0x470], 0x3f800000 */ W32((u32)(r_ebx+0x470u), 0x3f800000u);
    /* 0055f385: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0055f387: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0055f389: mov dword ptr [ebx + 0x474], 0 */ W32((u32)(r_ebx+0x474u), 0x0u);
    /* 0055f393: mov dword ptr [ebx + 0x478], 0x3e4ccccd */ W32((u32)(r_ebx+0x478u), 0x3e4ccccdu);
    /* 0055f39d: mov dword ptr [ebx + 0x47c], 0x3f800000 */ W32((u32)(r_ebx+0x47cu), 0x3f800000u);
    /* 0055f3a7: jle 0x55f411 */ if ((fZ||fS!=fO)) goto L_0055f411;
L_0055f3a9:; BB(0x0055f3a9);
    /* 0055f3a9: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
L_0055f3ac:; BB(0x0055f3ac);
    /* 0055f3ac: mov esi, dword ptr [ebx + edx*4 + 0x4a0] */ r_esi = R32((u32)(r_ebx+r_edx*4+0x4a0u));
    /* 0055f3b3: mov ecx, dword ptr [esi + 0x3d0] */ r_ecx = R32((u32)(r_esi+0x3d0u));
    /* 0055f3b9: test ecx, 0x200 */ {  u32 a = r_ecx; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055f3bf: je 0x55f3d0 */ if (fZ) goto L_0055f3d0;
L_0055f3c1:; BB(0x0055f3c1);
    /* 0055f3c1: or ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0055f3c4: mov dword ptr [esi + 0x3d0], ecx */ W32((u32)(r_esi+0x3d0u), r_ecx);
    /* 0055f3ca: mov eax, dword ptr [ebx + 0x49c] */ r_eax = R32((u32)(r_ebx+0x49cu));
L_0055f3d0:; BB(0x0055f3d0);
    /* 0055f3d0: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0055f3d3: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0055f3d5: jl 0x55f3ac */ if ((fS!=fO)) goto L_0055f3ac;
L_0055f3d7:; BB(0x0055f3d7);
    /* 0055f3d7: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 0055f3da: jmp 0x55f411 */ goto L_0055f411;
L_0055f411:; BB(0x0055f411);
    /* 0055f411: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0055f412: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0055f413: ret  */ FN_RET(0x0055f354); r_esp += 4; return;
}

void f_0055f3dc(void)
{
    FN_ENTER(0x0055f3dc);
    /* 0055f3dc: push 0x9257a4 */ { u32 v = 0x9257a4u; r_esp -= 4; W32(r_esp, v); }
    /* 0055f3e1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0055f3e3: call 0x55eb88 */ r_esp -= 4; W32(r_esp, 0x55f3e8u); f_0055eb88();
    /* 0055f3e8: mov dword ptr [ebx + 0x484], 3 */ W32((u32)(r_ebx+0x484u), 0x3u);
    /* 0055f3f2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0055f3f4: mov dword ptr [ebx + 0x488], eax */ W32((u32)(r_ebx+0x488u), r_eax);
    /* 0055f3fa: mov edx, 2 */ r_edx = 0x2u;
    /* 0055f3ff: mov dword ptr [ebx + 0x48c], edx */ W32((u32)(r_ebx+0x48cu), r_edx);
    /* 0055f405: mov dword ptr [ebx + 0x490], eax */ W32((u32)(r_ebx+0x490u), r_eax);
    /* 0055f40b: mov dword ptr [ebx + 0x4c0], edx */ W32((u32)(r_ebx+0x4c0u), r_edx);
    /* 0055f411: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0055f412: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0055f413: ret  */ FN_RET(0x0055f3dc); r_esp += 4; return;
}

void f_0055f411(void)
{
    FN_ENTER(0x0055f411);
    /* 0055f411: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0055f412: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0055f413: ret  */ FN_RET(0x0055f411); r_esp += 4; return;
}

void f_0055f491(void)
{
    FN_ENTER(0x0055f491);
    /* 0055f491: mov eax, dword ptr [ebp + 0x484] */ r_eax = R32((u32)(r_ebp+0x484u));
    /* 0055f497: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055f499: jne 0x55f6ea */ if (!fZ) goto L_0055f6ea;
L_0055f49f:; BB(0x0055f49f);
    /* 0055f49f: mov edx, dword ptr [ebp + 0x49c] */ r_edx = R32((u32)(r_ebp+0x49cu));
    /* 0055f4a5: mov dword ptr [ebp + 0x4c0], 9 */ W32((u32)(r_ebp+0x4c0u), 0x9u);
    /* 0055f4af: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0055f4b1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0055f4b3: mov dword ptr [ebp + 0x470], 0x3f800000 */ W32((u32)(r_ebp+0x470u), 0x3f800000u);
    /* 0055f4bd: mov dword ptr [ebp + 0x474], 0 */ W32((u32)(r_ebp+0x474u), 0x0u);
    /* 0055f4c7: mov dword ptr [ebp + 0x478], 0x3e4ccccd */ W32((u32)(r_ebp+0x478u), 0x3e4ccccdu);
    /* 0055f4d1: mov dword ptr [ebp + 0x47c], 0x3f800000 */ W32((u32)(r_ebp+0x47cu), 0x3f800000u);
    /* 0055f4db: jle 0x55f501 */ if ((fZ||fS!=fO)) goto L_0055f501;
L_0055f4dd:; BB(0x0055f4dd);
    /* 0055f4dd: mov ecx, dword ptr [ebp + eax*4 + 0x4a0] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0x4a0u));
    /* 0055f4e4: mov edx, dword ptr [ecx + 0x3d0] */ r_edx = R32((u32)(r_ecx+0x3d0u));
    /* 0055f4ea: or edx, 0x100004 */ {  u32 a = r_edx; u32 b = 0x100004u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0055f4f0: mov dword ptr [ecx + 0x3d0], edx */ W32((u32)(r_ecx+0x3d0u), r_edx);
    /* 0055f4f6: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0055f4f9: cmp eax, dword ptr [ebp + 0x49c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x49cu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055f4ff: jl 0x55f4dd */ if ((fS!=fO)) goto L_0055f4dd;
L_0055f501:; BB(0x0055f501);
    /* 0055f501: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055f503: call 0x542084 */ r_esp -= 4; W32(r_esp, 0x55f508u); f_00542084();
    /* 0055f508: jmp 0x55f6ea */ goto L_0055f6ea;
L_0055f6ea:; BB(0x0055f6ea);
    /* 0055f6ea: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055f6ec: call 0x55ce28 */ r_esp -= 4; W32(r_esp, 0x55f6f1u); f_0055ce28();
    /* 0055f6f1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055f6f3: call 0x6401f0 */ r_esp -= 4; W32(r_esp, 0x55f6f8u); f_006401f0();
    /* 0055f6f8: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0055f6fb: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055f6fd: call dword ptr [eax + 0x198] */ { u32 t = R32((u32)(r_eax+0x198u)); r_esp -= 4; W32(r_esp, 0x55f703u); call_ind(t); }
    /* 0055f703: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0055f704: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055f705: ret  */ FN_RET(0x0055f491); r_esp += 4; return;
}

void f_0055f50d(void)
{
    FN_ENTER(0x0055f50d);
    /* 0055f50d: push 0x9257a4 */ { u32 v = 0x9257a4u; r_esp -= 4; W32(r_esp, v); }
    /* 0055f512: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055f514: call 0x55eb88 */ r_esp -= 4; W32(r_esp, 0x55f519u); f_0055eb88();
    /* 0055f519: mov dword ptr [ebp + 0x484], 3 */ W32((u32)(r_ebp+0x484u), 0x3u);
    /* 0055f523: mov dword ptr [ebp + 0x488], 4 */ W32((u32)(r_ebp+0x488u), 0x4u);
    /* 0055f52d: mov dword ptr [ebp + 0x48c], 2 */ W32((u32)(r_ebp+0x48cu), 0x2u);
    /* 0055f537: mov dword ptr [ebp + 0x490], 0 */ W32((u32)(r_ebp+0x490u), 0x0u);
    /* 0055f541: mov dword ptr [ebp + 0x4c0], 8 */ W32((u32)(r_ebp+0x4c0u), 0x8u);
    /* 0055f54b: jmp 0x55f6ea */ goto L_0055f6ea;
L_0055f6ea:; BB(0x0055f6ea);
    /* 0055f6ea: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055f6ec: call 0x55ce28 */ r_esp -= 4; W32(r_esp, 0x55f6f1u); f_0055ce28();
    /* 0055f6f1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055f6f3: call 0x6401f0 */ r_esp -= 4; W32(r_esp, 0x55f6f8u); f_006401f0();
    /* 0055f6f8: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0055f6fb: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055f6fd: call dword ptr [eax + 0x198] */ { u32 t = R32((u32)(r_eax+0x198u)); r_esp -= 4; W32(r_esp, 0x55f703u); call_ind(t); }
    /* 0055f703: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0055f704: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055f705: ret  */ FN_RET(0x0055f50d); r_esp += 4; return;
}

void f_0055f550(void)
{
    FN_ENTER(0x0055f550);
    /* 0055f550: mov eax, dword ptr [ebp + 0x484] */ r_eax = R32((u32)(r_ebp+0x484u));
    /* 0055f556: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055f558: jne 0x55f6ea */ if (!fZ) goto L_0055f6ea;
L_0055f55e:; BB(0x0055f55e);
    /* 0055f55e: mov eax, dword ptr [ebp + 0x49c] */ r_eax = R32((u32)(r_ebp+0x49cu));
    /* 0055f564: mov dword ptr [ebp + 0x470], 0x3f800000 */ W32((u32)(r_ebp+0x470u), 0x3f800000u);
    /* 0055f56e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0055f570: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0055f572: mov dword ptr [ebp + 0x474], 0 */ W32((u32)(r_ebp+0x474u), 0x0u);
    /* 0055f57c: mov dword ptr [ebp + 0x478], 0x3e4ccccd */ W32((u32)(r_ebp+0x478u), 0x3e4ccccdu);
    /* 0055f586: mov dword ptr [ebp + 0x47c], 0x3f800000 */ W32((u32)(r_ebp+0x47cu), 0x3f800000u);
    /* 0055f590: mov dword ptr [ebp + 0x4c0], 6 */ W32((u32)(r_ebp+0x4c0u), 0x6u);
    /* 0055f59a: jle 0x55f6ea */ if ((fZ||fS!=fO)) goto L_0055f6ea;
L_0055f5a0:; BB(0x0055f5a0);
    /* 0055f5a0: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
L_0055f5a3:; BB(0x0055f5a3);
    /* 0055f5a3: mov ecx, dword ptr [ebp + edx*4 + 0x4a0] */ r_ecx = R32((u32)(r_ebp+r_edx*4+0x4a0u));
    /* 0055f5aa: mov ebx, dword ptr [ecx + 0x3d0] */ r_ebx = R32((u32)(r_ecx+0x3d0u));
    /* 0055f5b0: test ebx, 0x100 */ {  u32 a = r_ebx; u32 b = 0x100u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055f5b6: je 0x55f5c7 */ if (fZ) goto L_0055f5c7;
L_0055f5b8:; BB(0x0055f5b8);
    /* 0055f5b8: or ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 0055f5bb: mov dword ptr [ecx + 0x3d0], ebx */ W32((u32)(r_ecx+0x3d0u), r_ebx);
    /* 0055f5c1: mov eax, dword ptr [ebp + 0x49c] */ r_eax = R32((u32)(r_ebp+0x49cu));
L_0055f5c7:; BB(0x0055f5c7);
    /* 0055f5c7: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0055f5ca: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055f5cc: jl 0x55f5a3 */ if ((fS!=fO)) goto L_0055f5a3;
L_0055f5ce:; BB(0x0055f5ce);
    /* 0055f5ce: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 0055f5d1: jmp 0x55f6ea */ goto L_0055f6ea;
L_0055f6ea:; BB(0x0055f6ea);
    /* 0055f6ea: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055f6ec: call 0x55ce28 */ r_esp -= 4; W32(r_esp, 0x55f6f1u); f_0055ce28();
    /* 0055f6f1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055f6f3: call 0x6401f0 */ r_esp -= 4; W32(r_esp, 0x55f6f8u); f_006401f0();
    /* 0055f6f8: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0055f6fb: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055f6fd: call dword ptr [eax + 0x198] */ { u32 t = R32((u32)(r_eax+0x198u)); r_esp -= 4; W32(r_esp, 0x55f703u); call_ind(t); }
    /* 0055f703: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0055f704: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055f705: ret  */ FN_RET(0x0055f550); r_esp += 4; return;
}

void f_0055f5d6(void)
{
    FN_ENTER(0x0055f5d6);
    /* 0055f5d6: push 0x9257a4 */ { u32 v = 0x9257a4u; r_esp -= 4; W32(r_esp, v); }
    /* 0055f5db: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055f5dd: call 0x55eb88 */ r_esp -= 4; W32(r_esp, 0x55f5e2u); f_0055eb88();
    /* 0055f5e2: mov dword ptr [ebp + 0x484], 3 */ W32((u32)(r_ebp+0x484u), 0x3u);
    /* 0055f5ec: mov eax, 2 */ r_eax = 0x2u;
    /* 0055f5f1: mov dword ptr [ebp + 0x488], eax */ W32((u32)(r_ebp+0x488u), r_eax);
    /* 0055f5f7: mov dword ptr [ebp + 0x48c], eax */ W32((u32)(r_ebp+0x48cu), r_eax);
    /* 0055f5fd: mov dword ptr [ebp + 0x490], 0 */ W32((u32)(r_ebp+0x490u), 0x0u);
    /* 0055f607: mov dword ptr [ebp + 0x4c0], 5 */ W32((u32)(r_ebp+0x4c0u), 0x5u);
    /* 0055f611: jmp 0x55f6ea */ goto L_0055f6ea;
L_0055f6ea:; BB(0x0055f6ea);
    /* 0055f6ea: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055f6ec: call 0x55ce28 */ r_esp -= 4; W32(r_esp, 0x55f6f1u); f_0055ce28();
    /* 0055f6f1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055f6f3: call 0x6401f0 */ r_esp -= 4; W32(r_esp, 0x55f6f8u); f_006401f0();
    /* 0055f6f8: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0055f6fb: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055f6fd: call dword ptr [eax + 0x198] */ { u32 t = R32((u32)(r_eax+0x198u)); r_esp -= 4; W32(r_esp, 0x55f703u); call_ind(t); }
    /* 0055f703: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0055f704: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055f705: ret  */ FN_RET(0x0055f5d6); r_esp += 4; return;
}

void f_0055f616(void)
{
    FN_ENTER(0x0055f616);
    /* 0055f616: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0055f618: je 0x55f6ea */ if (fZ) goto L_0055f6ea;
L_0055f61e:; BB(0x0055f61e);
    /* 0055f61e: mov dword ptr [ebp + 0x4c0], 4 */ W32((u32)(r_ebp+0x4c0u), 0x4u);
    /* 0055f628: jmp 0x55f6ea */ goto L_0055f6ea;
L_0055f6ea:; BB(0x0055f6ea);
    /* 0055f6ea: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055f6ec: call 0x55ce28 */ r_esp -= 4; W32(r_esp, 0x55f6f1u); f_0055ce28();
    /* 0055f6f1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055f6f3: call 0x6401f0 */ r_esp -= 4; W32(r_esp, 0x55f6f8u); f_006401f0();
    /* 0055f6f8: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0055f6fb: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055f6fd: call dword ptr [eax + 0x198] */ { u32 t = R32((u32)(r_eax+0x198u)); r_esp -= 4; W32(r_esp, 0x55f703u); call_ind(t); }
    /* 0055f703: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0055f704: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055f705: ret  */ FN_RET(0x0055f616); r_esp += 4; return;
}

void f_0055f62d(void)
{
    FN_ENTER(0x0055f62d);
    /* 0055f62d: mov edx, dword ptr [ebp + 0x484] */ r_edx = R32((u32)(r_ebp+0x484u));
    /* 0055f633: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055f635: jne 0x55f6ea */ if (!fZ) goto L_0055f6ea;
L_0055f63b:; BB(0x0055f63b);
    /* 0055f63b: mov dword ptr [ebp + 0x4c0], 3 */ W32((u32)(r_ebp+0x4c0u), 0x3u);
    /* 0055f645: and eax, 0xfffffff7 */ {  u32 a = r_eax; u32 b = 0xfffffff7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0055f648: mov dword ptr [ebp + 0x3d0], eax */ W32((u32)(r_ebp+0x3d0u), r_eax);
    /* 0055f64e: mov eax, dword ptr [ebp + 0x49c] */ r_eax = R32((u32)(r_ebp+0x49cu));
    /* 0055f654: mov dword ptr [ebp + 0x470], 0x3f800000 */ W32((u32)(r_ebp+0x470u), 0x3f800000u);
    /* 0055f65e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0055f660: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0055f662: mov dword ptr [ebp + 0x474], 0 */ W32((u32)(r_ebp+0x474u), 0x0u);
    /* 0055f66c: mov dword ptr [ebp + 0x478], 0x3e4ccccd */ W32((u32)(r_ebp+0x478u), 0x3e4ccccdu);
    /* 0055f676: mov dword ptr [ebp + 0x47c], 0x3f800000 */ W32((u32)(r_ebp+0x47cu), 0x3f800000u);
    /* 0055f680: jle 0x55f6ea */ if ((fZ||fS!=fO)) goto L_0055f6ea;
L_0055f682:; BB(0x0055f682);
    /* 0055f682: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
L_0055f685:; BB(0x0055f685);
    /* 0055f685: mov ecx, dword ptr [ebp + edx*4 + 0x4a0] */ r_ecx = R32((u32)(r_ebp+r_edx*4+0x4a0u));
    /* 0055f68c: mov ebx, dword ptr [ecx + 0x3d0] */ r_ebx = R32((u32)(r_ecx+0x3d0u));
    /* 0055f692: test ebx, 0x200 */ {  u32 a = r_ebx; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055f698: je 0x55f6a9 */ if (fZ) goto L_0055f6a9;
L_0055f69a:; BB(0x0055f69a);
    /* 0055f69a: or ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 0055f69d: mov dword ptr [ecx + 0x3d0], ebx */ W32((u32)(r_ecx+0x3d0u), r_ebx);
    /* 0055f6a3: mov eax, dword ptr [ebp + 0x49c] */ r_eax = R32((u32)(r_ebp+0x49cu));
L_0055f6a9:; BB(0x0055f6a9);
    /* 0055f6a9: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0055f6ac: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055f6ae: jl 0x55f685 */ if ((fS!=fO)) goto L_0055f685;
L_0055f6b0:; BB(0x0055f6b0);
    /* 0055f6b0: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 0055f6b3: jmp 0x55f6ea */ goto L_0055f6ea;
L_0055f6ea:; BB(0x0055f6ea);
    /* 0055f6ea: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055f6ec: call 0x55ce28 */ r_esp -= 4; W32(r_esp, 0x55f6f1u); f_0055ce28();
    /* 0055f6f1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055f6f3: call 0x6401f0 */ r_esp -= 4; W32(r_esp, 0x55f6f8u); f_006401f0();
    /* 0055f6f8: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0055f6fb: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055f6fd: call dword ptr [eax + 0x198] */ { u32 t = R32((u32)(r_eax+0x198u)); r_esp -= 4; W32(r_esp, 0x55f703u); call_ind(t); }
    /* 0055f703: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0055f704: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055f705: ret  */ FN_RET(0x0055f62d); r_esp += 4; return;
}

void f_0055f6b5(void)
{
    FN_ENTER(0x0055f6b5);
    /* 0055f6b5: push 0x9257a4 */ { u32 v = 0x9257a4u; r_esp -= 4; W32(r_esp, v); }
    /* 0055f6ba: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055f6bc: call 0x55eb88 */ r_esp -= 4; W32(r_esp, 0x55f6c1u); f_0055eb88();
    /* 0055f6c1: mov dword ptr [ebp + 0x484], 3 */ W32((u32)(r_ebp+0x484u), 0x3u);
    /* 0055f6cb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0055f6cd: mov dword ptr [ebp + 0x488], eax */ W32((u32)(r_ebp+0x488u), r_eax);
    /* 0055f6d3: mov edx, 2 */ r_edx = 0x2u;
    /* 0055f6d8: mov dword ptr [ebp + 0x48c], edx */ W32((u32)(r_ebp+0x48cu), r_edx);
    /* 0055f6de: mov dword ptr [ebp + 0x490], eax */ W32((u32)(r_ebp+0x490u), r_eax);
    /* 0055f6e4: mov dword ptr [ebp + 0x4c0], edx */ W32((u32)(r_ebp+0x4c0u), r_edx);
    /* 0055f6ea: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055f6ec: call 0x55ce28 */ r_esp -= 4; W32(r_esp, 0x55f6f1u); f_0055ce28();
    /* 0055f6f1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055f6f3: call 0x6401f0 */ r_esp -= 4; W32(r_esp, 0x55f6f8u); f_006401f0();
    /* 0055f6f8: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0055f6fb: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055f6fd: call dword ptr [eax + 0x198] */ { u32 t = R32((u32)(r_eax+0x198u)); r_esp -= 4; W32(r_esp, 0x55f703u); call_ind(t); }
    /* 0055f703: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0055f704: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055f705: ret  */ FN_RET(0x0055f6b5); r_esp += 4; return;
}

void f_0055f6ea(void)
{
    FN_ENTER(0x0055f6ea);
    /* 0055f6ea: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055f6ec: call 0x55ce28 */ r_esp -= 4; W32(r_esp, 0x55f6f1u); f_0055ce28();
    /* 0055f6f1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055f6f3: call 0x6401f0 */ r_esp -= 4; W32(r_esp, 0x55f6f8u); f_006401f0();
    /* 0055f6f8: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0055f6fb: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055f6fd: call dword ptr [eax + 0x198] */ { u32 t = R32((u32)(r_eax+0x198u)); r_esp -= 4; W32(r_esp, 0x55f703u); call_ind(t); }
    /* 0055f703: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0055f704: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055f705: ret  */ FN_RET(0x0055f6ea); r_esp += 4; return;
}

void f_0055f764(void) /* sub_55F764 */
{
    FN_ENTER(0x0055f764);
    /* 0055f764: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0055f768: fld dword ptr [ecx + 0x400] */ FPUSH(R_F32((u32)(r_ecx+0x400u)));
    /* 0055f76e: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 0055f770: mov edx, dword ptr [ecx + 0x3d0] */ r_edx = R32((u32)(r_ecx+0x3d0u));
    /* 0055f776: fld dword ptr [ecx + 0x408] */ FPUSH(R_F32((u32)(r_ecx+0x408u)));
    /* 0055f77c: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 0055f77e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0055f780: and edx, 0xfff7ffff */ {  u32 a = r_edx; u32 b = 0xfff7ffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r; fO = 0; }
    /* 0055f786: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0055f787: ja 0x55f79c */ if ((!fC&&!fZ)) goto L_0055f79c;
L_0055f789:; BB(0x0055f789);
    /* 0055f789: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 0055f78b: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0055f78d: fstp dword ptr [ecx + 0x400] */ W_F32((u32)(r_ecx+0x400u), ST(0)); FPOP();
    /* 0055f793: mov dword ptr [ecx + 0x3d0], edx */ W32((u32)(r_ecx+0x3d0u), r_edx);
    /* 0055f799: ret 4 */ FN_RET(0x0055f764); r_esp += 8; return;
L_0055f79c:; BB(0x0055f79c);
    /* 0055f79c: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0055f79e: fchs  */ ST(0) = -ST(0);
    /* 0055f7a0: fcomp st(3) */ fx_compare(ST(0), ST(3)); FPOP();
    /* 0055f7a2: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0055f7a4: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0055f7a6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0055f7a8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0055f7a9: jb 0x55f7bc */ if (fC) goto L_0055f7bc;
L_0055f7ab:; BB(0x0055f7ab);
    /* 0055f7ab: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 0055f7ad: fstp dword ptr [ecx + 0x400] */ W_F32((u32)(r_ecx+0x400u), ST(0)); FPOP();
    /* 0055f7b3: mov dword ptr [ecx + 0x3d0], edx */ W32((u32)(r_ecx+0x3d0u), r_edx);
    /* 0055f7b9: ret 4 */ FN_RET(0x0055f764); r_esp += 8; return;
L_0055f7bc:; BB(0x0055f7bc);
    /* 0055f7bc: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0055f7be: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0055f7c0: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0055f7c4: or edx, 0x80000 */ {  u32 a = r_edx; u32 b = 0x80000u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0055f7ca: mov dword ptr [ecx + 0x400], eax */ W32((u32)(r_ecx+0x400u), r_eax);
    /* 0055f7d0: mov dword ptr [ecx + 0x3d0], edx */ W32((u32)(r_ecx+0x3d0u), r_edx);
    /* 0055f7d6: ret 4 */ FN_RET(0x0055f764); r_esp += 8; return;
}

void f_0055f7dc(void)
{
    FN_ENTER(0x0055f7dc);
    /* 0055f7dc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0055f7dd: mov ebp, esp */ r_ebp = r_esp;
    /* 0055f7df: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0055f7e1: push 0x8d6692 */ { u32 v = 0x8d6692u; r_esp -= 4; W32(r_esp, v); }
    /* 0055f7e6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0055f7ec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055f7ed: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0055f7f4: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0055f7f7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0055f7fa: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0055f7fd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0055f800: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0055f803: mov dword ptr [0xa73c24], 0 */ W32((u32)(0xa73c24u), 0x0u);
    /* 0055f80d: mov dword ptr [0xa73c28], 0 */ W32((u32)(0xa73c28u), 0x0u);
    /* 0055f817: mov dword ptr [0xa73c2c], 0 */ W32((u32)(0xa73c2cu), 0x0u);
    /* 0055f821: call 0x482a20 */ r_esp -= 4; W32(r_esp, 0x55f826u); f_00482a20();
    /* 0055f826: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 0055f829: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055f82b: jne 0x55f83f */ if (!fZ) goto L_0055f83f;
L_0055f82d:; BB(0x0055f82d);
    /* 0055f82d: push 0x9be010 */ { u32 v = 0x9be010u; r_esp -= 4; W32(r_esp, v); }
    /* 0055f832: call 0x51f6b0 */ r_esp -= 4; W32(r_esp, 0x55f837u); f_0051f6b0();
    /* 0055f837: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0055f838: mov dword ptr [0xa73c48], eax */ W32((u32)(0xa73c48u), r_eax);
    /* 0055f83d: jmp 0x55f84f */ goto L_0055f84f;
L_0055f83f:; BB(0x0055f83f);
    /* 0055f83f: push 0x9bdfe0 */ { u32 v = 0x9bdfe0u; r_esp -= 4; W32(r_esp, v); }
    /* 0055f844: call 0x51f6b0 */ r_esp -= 4; W32(r_esp, 0x55f849u); f_0051f6b0();
    /* 0055f849: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0055f84a: mov dword ptr [0xa73c48], eax */ W32((u32)(0xa73c48u), r_eax);
L_0055f84f:; BB(0x0055f84f);
    /* 0055f84f: call 0x5600d0 */ r_esp -= 4; W32(r_esp, 0x55f854u); f_005600d0();
    /* 0055f854: mov eax, dword ptr [0xa73c48] */ r_eax = R32((u32)(0xa73c48u));
    /* 0055f859: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0055f85b: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 0055f861: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0055f864: call 0x78e934 */ r_esp -= 4; W32(r_esp, 0x55f869u); f_0078e934();
    /* 0055f869: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055f86c: mov dword ptr [0xa73c88], eax */ W32((u32)(0xa73c88u), r_eax);
    /* 0055f871: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_0055f873:; BB(0x0055f873);
    /* 0055f873: push dword ptr [ebx*4 + 0x925624] */ { u32 v = R32((u32)(r_ebx*4+0x925624u)); r_esp -= 4; W32(r_esp, v); }
    /* 0055f87a: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x55f87fu); f_0077a684();
    /* 0055f87f: push dword ptr [ebx*4 + 0x925618] */ { u32 v = R32((u32)(r_ebx*4+0x925618u)); r_esp -= 4; W32(r_esp, v); }
    /* 0055f886: mov dword ptr [ebx*4 + 0xa73c70], eax */ W32((u32)(r_ebx*4+0xa73c70u), r_eax);
    /* 0055f88d: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x55f892u); f_0077a698();
    /* 0055f892: push dword ptr [ebx*4 + 0x92560c] */ { u32 v = R32((u32)(r_ebx*4+0x92560cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0055f899: mov dword ptr [ebx*4 + 0xa73c64], eax */ W32((u32)(r_ebx*4+0xa73c64u), r_eax);
    /* 0055f8a0: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x55f8a5u); f_0077a6b4();
    /* 0055f8a5: push dword ptr [ebx*4 + 0x925600] */ { u32 v = R32((u32)(r_ebx*4+0x925600u)); r_esp -= 4; W32(r_esp, v); }
    /* 0055f8ac: mov dword ptr [ebx*4 + 0xa73c58], eax */ W32((u32)(r_ebx*4+0xa73c58u), r_eax);
    /* 0055f8b3: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x55f8b8u); f_0077a6cc();
    /* 0055f8b8: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055f8bb: mov dword ptr [ebx*4 + 0xa73c4c], eax */ W32((u32)(r_ebx*4+0xa73c4cu), r_eax);
    /* 0055f8c2: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0055f8c5: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055f8c8: jl 0x55f873 */ if ((fS!=fO)) goto L_0055f873;
L_0055f8ca:; BB(0x0055f8ca);
    /* 0055f8ca: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0055f8cc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0055f8ce: mov dword ptr [0xa73c90], eax */ W32((u32)(0xa73c90u), r_eax);
    /* 0055f8d3: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0055f8d6: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x55f8dbu); f_008581c5();
    /* 0055f8db: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0055f8dc: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0055f8df: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055f8e1: je 0x55fa1b */ if (fZ) goto L_0055fa1b;
L_0055f8e7:; BB(0x0055f8e7);
    /* 0055f8e7: mov dword ptr [ebp - 0x38], 1 */ W32((u32)(r_ebp+0xffffffc8u), 0x1u);
    /* 0055f8ee: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0055f8f5: mov eax, dword ptr [0xa73c48] */ r_eax = R32((u32)(0xa73c48u));
    /* 0055f8fa: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0055f8fd: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 0055f903: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0055f906: call 0x511b74 */ r_esp -= 4; W32(r_esp, 0x55f90bu); f_00511b74();
    /* 0055f90b: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0055f90e: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 0055f915: mov dword ptr [0xa73c84], eax */ W32((u32)(0xa73c84u), r_eax);
    /* 0055f91a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0055f921: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0055f928: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0055f92a: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x55f92fu); f_008581c5();
    /* 0055f92f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0055f930: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0055f933: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055f935: je 0x55fa14 */ if (fZ) goto L_0055fa14;
L_0055f93b:; BB(0x0055f93b);
    /* 0055f93b: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 0055f942: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0055f949: mov eax, dword ptr [0xa73c48] */ r_eax = R32((u32)(0xa73c48u));
    /* 0055f94e: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0055f951: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 0055f957: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0055f95a: call 0x511b74 */ r_esp -= 4; W32(r_esp, 0x55f95fu); f_00511b74();
    /* 0055f95f: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0055f962: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0055f969: mov dword ptr [0xa73c80], eax */ W32((u32)(0xa73c80u), r_eax);
    /* 0055f96e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0055f975: mov eax, dword ptr [0xa73c48] */ r_eax = R32((u32)(0xa73c48u));
    /* 0055f97a: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0055f97c: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 0055f982: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0055f985: call 0x78e934 */ r_esp -= 4; W32(r_esp, 0x55f98au); f_0078e934();
    /* 0055f98a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055f98d: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 0055f990: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0055f993: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0055f996: mov dword ptr [0xa73c7c], edx */ W32((u32)(0xa73c7cu), r_edx);
    /* 0055f99c: call 0x52d360 */ r_esp -= 4; W32(r_esp, 0x55f9a1u); f_0052d360();
    /* 0055f9a1: mov eax, dword ptr [0x9255b4] */ r_eax = R32((u32)(0x9255b4u));
    /* 0055f9a6: movzx edx, word ptr [0x9255b8] */ r_edx = (u32)R16((u32)(0x9255b8u));
    /* 0055f9ad: movzx ecx, word ptr [0x9255ba] */ r_ecx = (u32)R16((u32)(0x9255bau));
    /* 0055f9b4: movzx ebx, word ptr [0x9255bc] */ r_ebx = (u32)R16((u32)(0x9255bcu));
    /* 0055f9bb: mov edi, dword ptr [0xa73c48] */ r_edi = R32((u32)(0xa73c48u));
    /* 0055f9c1: mov esi, dword ptr [edi + 0x430] */ r_esi = R32((u32)(r_edi+0x430u));
    /* 0055f9c7: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0055f9ca: mov word ptr [ebp - 0x24], dx */ W16((u32)(r_ebp+0xffffffdcu), (u16)r_edx);
    /* 0055f9ce: mov edx, dword ptr [edi + 0x42c] */ r_edx = R32((u32)(r_edi+0x42cu));
    /* 0055f9d4: mov word ptr [ebp - 0x22], cx */ W16((u32)(r_ebp+0xffffffdeu), (u16)r_ecx);
    /* 0055f9d8: mov word ptr [ebp - 0x20], bx */ W16((u32)(r_ebp+0xffffffe0u), (u16)r_ebx);
    /* 0055f9dc: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
    /* 0055f9df: lea eax, [ebp - 0x2c] */ r_eax = (u32)(r_ebp+0xffffffd4u);
    /* 0055f9e2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055f9e3: push 0x41700000 */ { u32 v = 0x41700000u; r_esp -= 4; W32(r_esp, v); }
    /* 0055f9e8: push 0x41000000 */ { u32 v = 0x41000000u; r_esp -= 4; W32(r_esp, v); }
    /* 0055f9ed: push dword ptr [edx + 0xc] */ { u32 v = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0055f9f0: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0055f9f3: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0055f9f5: call 0x608470 */ r_esp -= 4; W32(r_esp, 0x55f9fau); f_00608470();
    /* 0055f9fa: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0055f9fd: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0055fa00: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0055fa03: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0055fa06: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055fa09: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0055fa10: mov esp, ebp */ r_esp = r_ebp;
    /* 0055fa12: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055fa13: ret  */ FN_RET(0x0055f7dc); r_esp += 4; return;
L_0055fa14:; BB(0x0055fa14);
    /* 0055fa14: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0055fa16: jmp 0x55f969 */ f_0055f969(); return;
L_0055fa1b:; BB(0x0055fa1b);
    /* 0055fa1b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0055fa1d: jmp 0x55f915 */ f_0055f915(); return;
}

void f_0055fa24(void) /* sub_55FA24 */
{
    FN_ENTER(0x0055fa24);
    /* 0055fa24: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0055fa25: mov edi, ecx */ r_edi = r_ecx;
    /* 0055fa27: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0055fa2b: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055fa2e: je 0x55fac1 */ if (fZ) goto L_0055fac1;
L_0055fa34:; BB(0x0055fa34);
    /* 0055fa34: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055fa37: je 0x55fa66 */ if (fZ) goto L_0055fa66;
L_0055fa39:; BB(0x0055fa39);
    /* 0055fa39: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0055fa3b: jne 0x55fab1 */ if (!fZ) goto L_0055fab1;
L_0055fa3d:; BB(0x0055fa3d);
    /* 0055fa3d: mov eax, dword ptr [edi + 0x43c] */ r_eax = R32((u32)(r_edi+0x43cu));
    /* 0055fa43: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0055fa46: mov dword ptr [edi + 0x43c], eax */ W32((u32)(r_edi+0x43cu), r_eax);
    /* 0055fa4c: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055fa4f: je 0x55fab5 */ if (fZ) goto L_0055fab5;
L_0055fa51:; BB(0x0055fa51);
    /* 0055fa51: mov eax, dword ptr [edi + 0x3d0] */ r_eax = R32((u32)(r_edi+0x3d0u));
    /* 0055fa57: and eax, 0xfeffffff */ {  u32 a = r_eax; u32 b = 0xfeffffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0055fa5c: mov dword ptr [edi + 0x3d0], eax */ W32((u32)(r_edi+0x3d0u), r_eax);
    /* 0055fa62: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0055fa63: ret 4 */ FN_RET(0x0055fa24); r_esp += 8; return;
L_0055fa66:; BB(0x0055fa66);
    /* 0055fa66: mov eax, dword ptr [edi + 0x43c] */ r_eax = R32((u32)(r_edi+0x43cu));
    /* 0055fa6c: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0055fa6f: jl 0x55fab1 */ if ((fS!=fO)) goto L_0055fab1;
L_0055fa71:; BB(0x0055fa71);
    /* 0055fa71: mov eax, dword ptr [edi + 0x3cc] */ r_eax = R32((u32)(r_edi+0x3ccu));
    /* 0055fa77: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055fa79: jne 0x55fa8e */ if (!fZ) goto L_0055fa8e;
L_0055fa7b:; BB(0x0055fa7b);
    /* 0055fa7b: mov eax, dword ptr [edi + 0x3d0] */ r_eax = R32((u32)(r_edi+0x3d0u));
    /* 0055fa81: or eax, 0x100000 */ {  u32 a = r_eax; u32 b = 0x100000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0055fa86: mov dword ptr [edi + 0x3d0], eax */ W32((u32)(r_edi+0x3d0u), r_eax);
    /* 0055fa8c: jmp 0x55fa94 */ goto L_0055fa94;
L_0055fa8e:; BB(0x0055fa8e);
    /* 0055fa8e: mov eax, dword ptr [edi + 0x3d0] */ r_eax = R32((u32)(r_edi+0x3d0u));
L_0055fa94:; BB(0x0055fa94);
    /* 0055fa94: test eax, 0x2000000 */ {  u32 a = r_eax; u32 b = 0x2000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055fa99: je 0x55faa8 */ if (fZ) goto L_0055faa8;
L_0055fa9b:; BB(0x0055fa9b);
    /* 0055fa9b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0055fa9d: mov ecx, edi */ r_ecx = r_edi;
    /* 0055fa9f: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x55faa4u); f_0051f62c();
    /* 0055faa4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0055faa5: ret 4 */ FN_RET(0x0055fa24); r_esp += 8; return;
L_0055faa8:; BB(0x0055faa8);
    /* 0055faa8: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0055faaa: mov ecx, edi */ r_ecx = r_edi;
    /* 0055faac: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x55fab1u); f_0051f62c();
L_0055fab1:; BB(0x0055fab1);
    /* 0055fab1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0055fab2: ret 4 */ FN_RET(0x0055fa24); r_esp += 8; return;
L_0055fab5:; BB(0x0055fab5);
    /* 0055fab5: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0055fab7: mov ecx, edi */ r_ecx = r_edi;
    /* 0055fab9: call dword ptr [eax + 0x1b4] */ { u32 t = R32((u32)(r_eax+0x1b4u)); r_esp -= 4; W32(r_esp, 0x55fabfu); call_ind(t); }
    /* 0055fabf: jmp 0x55fa51 */ goto L_0055fa51;
L_0055fac1:; BB(0x0055fac1);
    /* 0055fac1: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0055fac3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0055fac5: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 0055facc: mov ecx, edi */ r_ecx = r_edi;
    /* 0055face: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x55fad3u); f_0051f664();
    /* 0055fad3: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0055fad5: mov ecx, edi */ r_ecx = r_edi;
    /* 0055fad7: call dword ptr [eax + 0x184] */ { u32 t = R32((u32)(r_eax+0x184u)); r_esp -= 4; W32(r_esp, 0x55faddu); call_ind(t); }
    /* 0055fadd: mov eax, dword ptr [edi + 0x3d0] */ r_eax = R32((u32)(r_edi+0x3d0u));
    /* 0055fae3: mov dword ptr [edi + 0x484], 1 */ W32((u32)(r_edi+0x484u), 0x1u);
    /* 0055faed: or eax, 0x400000 */ {  u32 a = r_eax; u32 b = 0x400000u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0055faf2: mov dword ptr [edi + 0x43c], 0 */ W32((u32)(r_edi+0x43cu), 0x0u);
    /* 0055fafc: mov dword ptr [edi + 0x3d0], eax */ W32((u32)(r_edi+0x3d0u), r_eax);
    /* 0055fb02: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0055fb03: ret 4 */ FN_RET(0x0055fa24); r_esp += 8; return;
}

void f_0055fb08(void) /* sub_55FB08 */
{
    FN_ENTER(0x0055fb08);
    /* 0055fb08: fld dword ptr [ecx + 0x3f4] */ FPUSH(R_F32((u32)(r_ecx+0x3f4u)));
    /* 0055fb0e: fadd dword ptr [ecx + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x3cu));
    /* 0055fb11: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0055fb12: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0055fb15: call 0x55fb1c */ r_esp -= 4; W32(r_esp, 0x55fb1au); f_0055fb1c();
    /* 0055fb1a: ret  */ FN_RET(0x0055fb08); r_esp += 4; return;
}

void f_0055fb1c(void) /* sub_55FB1C */
{
    FN_ENTER(0x0055fb1c);
    /* 0055fb1c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0055fb1d: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0055fb20: mov esi, ecx */ r_esi = r_ecx;
    /* 0055fb22: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 0055fb26: mov ecx, esi */ r_ecx = r_esi;
    /* 0055fb28: call 0x55f764 */ r_esp -= 4; W32(r_esp, 0x55fb2du); f_0055f764();
    /* 0055fb2d: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 0055fb30: mov edx, dword ptr [esi + 0x40] */ r_edx = R32((u32)(r_esi+0x40u));
    /* 0055fb33: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0055fb36: mov eax, dword ptr [esi + 0x400] */ r_eax = R32((u32)(r_esi+0x400u));
    /* 0055fb3c: mov ecx, esi */ r_ecx = r_esi;
    /* 0055fb3e: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0055fb42: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 0055fb44: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0055fb48: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0055fb4b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055fb4c: call dword ptr [edx + 0x19c] */ { u32 t = R32((u32)(r_edx+0x19cu)); r_esp -= 4; W32(r_esp, 0x55fb52u); call_ind(t); }
    /* 0055fb52: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0055fb55: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0055fb56: ret 4 */ FN_RET(0x0055fb1c); r_esp += 8; return;
}

void f_0055fb5c(void) /* sub_55FB5C */
{
    FN_ENTER(0x0055fb5c);
    /* 0055fb5c: fld dword ptr [ecx + 0x3f0] */ FPUSH(R_F32((u32)(r_ecx+0x3f0u)));
    /* 0055fb62: fadd dword ptr [ecx + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x3cu));
    /* 0055fb65: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0055fb66: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0055fb69: call 0x55fb84 */ r_esp -= 4; W32(r_esp, 0x55fb6eu); f_0055fb84();
    /* 0055fb6e: ret  */ FN_RET(0x0055fb5c); r_esp += 4; return;
}

void f_0055fb70(void) /* sub_55FB70 */
{
    FN_ENTER(0x0055fb70);
    /* 0055fb70: fld dword ptr [ecx + 0x3f4] */ FPUSH(R_F32((u32)(r_ecx+0x3f4u)));
    /* 0055fb76: fadd dword ptr [ecx + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x3cu));
    /* 0055fb79: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0055fb7a: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0055fb7d: call 0x55fb84 */ r_esp -= 4; W32(r_esp, 0x55fb82u); f_0055fb84();
    /* 0055fb82: ret  */ FN_RET(0x0055fb70); r_esp += 4; return;
}

void f_0055fb84(void) /* sub_55FB84 */
{
    FN_ENTER(0x0055fb84);
    /* 0055fb84: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0055fb85: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0055fb88: mov esi, ecx */ r_esi = r_ecx;
    /* 0055fb8a: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 0055fb8e: mov ecx, esi */ r_ecx = r_esi;
    /* 0055fb90: call 0x55d474 */ r_esp -= 4; W32(r_esp, 0x55fb95u); f_0055d474();
    /* 0055fb95: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 0055fb98: mov edx, dword ptr [esi + 0x40] */ r_edx = R32((u32)(r_esi+0x40u));
    /* 0055fb9b: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0055fb9e: mov eax, dword ptr [esi + 0x400] */ r_eax = R32((u32)(r_esi+0x400u));
    /* 0055fba4: mov ecx, esi */ r_ecx = r_esi;
    /* 0055fba6: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0055fbaa: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 0055fbac: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0055fbb0: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0055fbb3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055fbb4: call dword ptr [edx + 0x19c] */ { u32 t = R32((u32)(r_edx+0x19cu)); r_esp -= 4; W32(r_esp, 0x55fbbau); call_ind(t); }
    /* 0055fbba: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0055fbbd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0055fbbe: ret 4 */ FN_RET(0x0055fb84); r_esp += 8; return;
}

void f_0055fbc4(void) /* sub_55FBC4 */
{
    FN_ENTER(0x0055fbc4);
    /* 0055fbc4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0055fbc5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0055fbc6: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0055fbc9: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0055fbcb: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055fbcd: call 0x521840 */ r_esp -= 4; W32(r_esp, 0x55fbd2u); f_00521840();
    /* 0055fbd2: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0055fbd5: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055fbd7: call dword ptr [eax + 0x1b0] */ { u32 t = R32((u32)(r_eax+0x1b0u)); r_esp -= 4; W32(r_esp, 0x55fbddu); call_ind(t); }
    /* 0055fbdd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0055fbdf: push 0x9be044 */ { u32 v = 0x9be044u; r_esp -= 4; W32(r_esp, v); }
    /* 0055fbe4: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055fbe6: call 0x51ff3c */ r_esp -= 4; W32(r_esp, 0x55fbebu); f_0051ff3c();
    /* 0055fbeb: mov eax, dword ptr [0xa73c48] */ r_eax = R32((u32)(0xa73c48u));
    /* 0055fbf0: mov dword ptr [ebp + 0xd8], 0x9bdf80 */ W32((u32)(r_ebp+0xd8u), 0x9bdf80u);
    /* 0055fbfa: mov edx, dword ptr [eax + 0x430] */ r_edx = R32((u32)(r_eax+0x430u));
    /* 0055fc00: mov dword ptr [ebp + 0xdc], edx */ W32((u32)(r_ebp+0xdcu), r_edx);
    /* 0055fc06: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0055fc08: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0055fc09: mov word ptr [ebp + 0xb8], si */ W16((u32)(r_ebp+0xb8u), (u16)r_esi);
    /* 0055fc10: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055fc12: call 0x7aa4c8 */ r_esp -= 4; W32(r_esp, 0x55fc17u); f_007aa4c8();
    /* 0055fc17: movzx eax, word ptr [ebp + 0xb8] */ r_eax = (u32)R16((u32)(r_ebp+0xb8u));
    /* 0055fc1e: mov edx, dword ptr [ebp + 0x3cc] */ r_edx = R32((u32)(r_ebp+0x3ccu));
    /* 0055fc24: push dword ptr [edx*4 + 0xa73c58] */ { u32 v = R32((u32)(r_edx*4+0xa73c58u)); r_esp -= 4; W32(r_esp, v); }
    /* 0055fc2b: push dword ptr [edx*4 + 0xa73c64] */ { u32 v = R32((u32)(r_edx*4+0xa73c64u)); r_esp -= 4; W32(r_esp, v); }
    /* 0055fc32: push dword ptr [edx*4 + 0xa73c70] */ { u32 v = R32((u32)(r_edx*4+0xa73c70u)); r_esp -= 4; W32(r_esp, v); }
    /* 0055fc39: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 0055fc40: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055fc42: call 0x520c70 */ r_esp -= 4; W32(r_esp, 0x55fc47u); f_00520c70();
    /* 0055fc47: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055fc49: call 0x520350 */ r_esp -= 4; W32(r_esp, 0x55fc4eu); f_00520350();
    /* 0055fc4e: mov dword ptr [ebp + 0x358], 0x9be028 */ W32((u32)(r_ebp+0x358u), 0x9be028u);
    /* 0055fc58: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 0055fc5a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055fc5c: call 0x520390 */ r_esp -= 4; W32(r_esp, 0x55fc61u); f_00520390();
    /* 0055fc61: mov dword ptr [ebp + 0x384], 0x41200000 */ W32((u32)(r_ebp+0x384u), 0x41200000u);
    /* 0055fc6b: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 0055fc6d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055fc6f: call 0x521820 */ r_esp -= 4; W32(r_esp, 0x55fc74u); f_00521820();
    /* 0055fc74: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 0055fc76: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055fc78: call 0x5217fc */ r_esp -= 4; W32(r_esp, 0x55fc7du); f_005217fc();
    /* 0055fc7d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055fc7f: call 0x520bdc */ r_esp -= 4; W32(r_esp, 0x55fc84u); f_00520bdc();
    /* 0055fc84: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 0055fc87: or eax, 0x1000000 */ {  u32 a = r_eax; u32 b = 0x1000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0055fc8c: mov edx, dword ptr [ebp + 0x3cc] */ r_edx = R32((u32)(r_ebp+0x3ccu));
    /* 0055fc92: mov esi, dword ptr [edx*4 + 0xa73c4c] */ r_esi = R32((u32)(r_edx*4+0xa73c4cu));
    /* 0055fc99: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 0055fc9c: mov eax, dword ptr [ebp + 0x3d4] */ r_eax = R32((u32)(r_ebp+0x3d4u));
    /* 0055fca2: mov dword ptr [ebp + 0x434], esi */ W32((u32)(r_ebp+0x434u), r_esi);
    /* 0055fca8: lea ecx, [ebp + 0x3d4] */ r_ecx = (u32)(r_ebp+0x3d4u);
    /* 0055fcae: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x55fcb1u); call_ind(t); }
    /* 0055fcb1: mov dword ptr [ebp + 0x3f0], 0x42340000 */ W32((u32)(r_ebp+0x3f0u), 0x42340000u);
    /* 0055fcbb: mov dword ptr [ebp + 0x3f4], 0x41700000 */ W32((u32)(r_ebp+0x3f4u), 0x41700000u);
    /* 0055fcc5: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x55fccau); f_008587a5();
    /* 0055fcca: fld dword ptr [ebp + 0x3c] */ FPUSH(R_F32((u32)(r_ebp+0x3cu)));
    /* 0055fccd: fadd dword ptr [ebp + 0x3f4] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x3f4u));
    /* 0055fcd3: mov esi, dword ptr [ebp + 0x3c] */ r_esi = R32((u32)(r_ebp+0x3cu));
    /* 0055fcd6: mov edx, dword ptr [ebp + 0x38] */ r_edx = R32((u32)(r_ebp+0x38u));
    /* 0055fcd9: fstp dword ptr [ebp + 0x400] */ W_F32((u32)(r_ebp+0x400u), ST(0)); FPOP();
    /* 0055fcdf: mov dword ptr [ebp + 0x450], 0 */ W32((u32)(r_ebp+0x450u), 0x0u);
    /* 0055fce9: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0055fcec: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 0055fcef: fdiv dword ptr [0x9255f8] */ ST(0) = ST(0) / R_F32((u32)(0x9255f8u));
    /* 0055fcf5: fmul dword ptr [0x9255e0] */ ST(0) = ST(0) * R_F32((u32)(0x9255e0u));
    /* 0055fcfb: mov eax, dword ptr [ebp + 0x3f4] */ r_eax = R32((u32)(r_ebp+0x3f4u));
    /* 0055fd01: fadd dword ptr [0x9255e4] */ ST(0) = ST(0) + R_F32((u32)(0x9255e4u));
    /* 0055fd07: fstp dword ptr [ebp + 0x3f8] */ W_F32((u32)(r_ebp+0x3f8u), ST(0)); FPOP();
    /* 0055fd0d: mov dword ptr [ebp + 0x454], 0 */ W32((u32)(r_ebp+0x454u), 0x0u);
    /* 0055fd17: mov dword ptr [ebp + 0x3fc], eax */ W32((u32)(r_ebp+0x3fcu), r_eax);
    /* 0055fd1d: mov eax, dword ptr [ebp + 0x40] */ r_eax = R32((u32)(r_ebp+0x40u));
    /* 0055fd20: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0055fd22: mov dword ptr [ebp + 0x458], 0 */ W32((u32)(r_ebp+0x458u), 0x0u);
    /* 0055fd2c: mov dword ptr [ebp + 0x40c], ecx */ W32((u32)(r_ebp+0x40cu), r_ecx);
    /* 0055fd32: mov dword ptr [ebp + 0x410], ecx */ W32((u32)(r_ebp+0x410u), r_ecx);
    /* 0055fd38: mov dword ptr [ebp + 0x414], ecx */ W32((u32)(r_ebp+0x414u), r_ecx);
    /* 0055fd3e: mov dword ptr [ebp + 0x45c], 0 */ W32((u32)(r_ebp+0x45cu), 0x0u);
    /* 0055fd48: mov dword ptr [ebp + 0x418], ecx */ W32((u32)(r_ebp+0x418u), r_ecx);
    /* 0055fd4e: mov dword ptr [ebp + 0x41c], edx */ W32((u32)(r_ebp+0x41cu), r_edx);
    /* 0055fd54: mov dword ptr [ebp + 0x420], esi */ W32((u32)(r_ebp+0x420u), r_esi);
    /* 0055fd5a: mov dword ptr [ebp + 0x460], 0 */ W32((u32)(r_ebp+0x460u), 0x0u);
    /* 0055fd64: mov dword ptr [ebp + 0x424], eax */ W32((u32)(r_ebp+0x424u), r_eax);
    /* 0055fd6a: mov dword ptr [ebp + 0x428], edx */ W32((u32)(r_ebp+0x428u), r_edx);
    /* 0055fd70: mov dword ptr [ebp + 0x42c], esi */ W32((u32)(r_ebp+0x42cu), r_esi);
    /* 0055fd76: mov dword ptr [ebp + 0x464], 0 */ W32((u32)(r_ebp+0x464u), 0x0u);
    /* 0055fd80: mov dword ptr [ebp + 0x430], eax */ W32((u32)(r_ebp+0x430u), r_eax);
    /* 0055fd86: mov dword ptr [ebp + 0x438], ecx */ W32((u32)(r_ebp+0x438u), r_ecx);
    /* 0055fd8c: mov dword ptr [ebp + 0x43c], ecx */ W32((u32)(r_ebp+0x43cu), r_ecx);
    /* 0055fd92: mov dword ptr [ebp + 0x474], 0x3f800000 */ W32((u32)(r_ebp+0x474u), 0x3f800000u);
    /* 0055fd9c: mov dword ptr [ebp + 0x440], ecx */ W32((u32)(r_ebp+0x440u), r_ecx);
    /* 0055fda2: mov dword ptr [ebp + 0x444], ecx */ W32((u32)(r_ebp+0x444u), r_ecx);
    /* 0055fda8: mov dword ptr [ebp + 0x448], ecx */ W32((u32)(r_ebp+0x448u), r_ecx);
    /* 0055fdae: mov dword ptr [ebp + 0x478], 0 */ W32((u32)(r_ebp+0x478u), 0x0u);
    /* 0055fdb8: mov dword ptr [ebp + 0x44c], ecx */ W32((u32)(r_ebp+0x44cu), r_ecx);
    /* 0055fdbe: mov dword ptr [ebp + 0x468], ecx */ W32((u32)(r_ebp+0x468u), r_ecx);
    /* 0055fdc4: mov dword ptr [ebp + 0x46c], ecx */ W32((u32)(r_ebp+0x46cu), r_ecx);
    /* 0055fdca: mov dword ptr [ebp + 0x47c], 0x3e4ccccd */ W32((u32)(r_ebp+0x47cu), 0x3e4ccccdu);
    /* 0055fdd4: mov dword ptr [ebp + 0x484], ecx */ W32((u32)(r_ebp+0x484u), r_ecx);
    /* 0055fdda: mov dword ptr [ebp + 0x480], ecx */ W32((u32)(r_ebp+0x480u), r_ecx);
    /* 0055fde0: mov dword ptr [ebp + 0x488], ecx */ W32((u32)(r_ebp+0x488u), r_ecx);
    /* 0055fde6: mov dword ptr [ebp + 0x470], 0 */ W32((u32)(r_ebp+0x470u), 0x0u);
    /* 0055fdf0: mov dword ptr [ebp + 0x48c], ecx */ W32((u32)(r_ebp+0x48cu), r_ecx);
    /* 0055fdf6: mov dword ptr [ebp + 0x490], ecx */ W32((u32)(r_ebp+0x490u), r_ecx);
    /* 0055fdfc: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055fdfe: call 0x55ce28 */ r_esp -= 4; W32(r_esp, 0x55fe03u); f_0055ce28();
    /* 0055fe03: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0055fe05: push dword ptr [ebp + 0xa4] */ { u32 v = R32((u32)(r_ebp+0xa4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0055fe0b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055fe0d: call 0x5200e4 */ r_esp -= 4; W32(r_esp, 0x55fe12u); f_005200e4();
    /* 0055fe12: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0055fe14: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0055fe17: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0055fe19: mov word ptr [ebp + 0x32e], ax */ W16((u32)(r_ebp+0x32eu), (u16)r_eax);
    /* 0055fe20: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055fe22: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055fe23: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x55fe29u); call_ind(t); }
    /* 0055fe29: mov eax, dword ptr [ebp + 0x3c8] */ r_eax = R32((u32)(r_ebp+0x3c8u));
    /* 0055fe2f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055fe31: je 0x55fe44 */ if (fZ) goto L_0055fe44;
L_0055fe33:; BB(0x0055fe33);
    /* 0055fe33: movzx eax, word ptr [eax + 0x1c] */ r_eax = (u32)R16((u32)(r_eax+0x1cu));
    /* 0055fe37: mov word ptr [ebp + 0x494], ax */ W16((u32)(r_ebp+0x494u), (u16)r_eax);
    /* 0055fe3e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0055fe41: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055fe42: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0055fe43: ret  */ FN_RET(0x0055fbc4); r_esp += 4; return;
L_0055fe44:; BB(0x0055fe44);
    /* 0055fe44: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 0055fe49: mov word ptr [ebp + 0x494], ax */ W16((u32)(r_ebp+0x494u), (u16)r_eax);
    /* 0055fe50: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0055fe53: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055fe54: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0055fe55: ret  */ FN_RET(0x0055fbc4); r_esp += 4; return;
}

void f_0055fe58(void) /* sub_55FE58 */
{
    FN_ENTER(0x0055fe58);
    /* 0055fe58: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0055fe59: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0055fe5b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0055fe5d: call 0x55fe7c */ r_esp -= 4; W32(r_esp, 0x55fe62u); f_0055fe7c();
    /* 0055fe62: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0055fe66: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0055fe68: jne 0x55fe6e */ if (!fZ) goto L_0055fe6e;
L_0055fe6a:; BB(0x0055fe6a);
    /* 0055fe6a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0055fe6b: ret 4 */ FN_RET(0x0055fe58); r_esp += 8; return;
L_0055fe6e:; BB(0x0055fe6e);
    /* 0055fe6e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0055fe6f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x55fe74u); f_005c2f74();
    /* 0055fe74: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0055fe75: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0055fe76: ret 4 */ FN_RET(0x0055fe58); r_esp += 8; return;
}

void f_0055fe7c(void) /* sub_55FE7C */
{
    FN_ENTER(0x0055fe7c);
    /* 0055fe7c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0055fe7d: mov ebp, esp */ r_ebp = r_esp;
    /* 0055fe7f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0055fe81: push 0x8d66ac */ { u32 v = 0x8d66acu; r_esp -= 4; W32(r_esp, v); }
    /* 0055fe86: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0055fe8c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055fe8d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0055fe94: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0055fe97: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0055fe9a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0055fe9d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0055fea0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0055fea3: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0055fea6: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0055fea9: mov dword ptr [ecx], 0xb053c8 */ W32((u32)(r_ecx), 0xb053c8u);
    /* 0055feaf: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0055feb6: call 0x7aca8c */ r_esp -= 4; W32(r_esp, 0x55febbu); f_007aca8c();
    /* 0055febb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055febe: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0055fec5: mov esp, ebp */ r_esp = r_ebp;
    /* 0055fec7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055fec8: ret  */ FN_RET(0x0055fe7c); r_esp += 4; return;
}

void f_0055fecc(void) /* sub_55FECC */
{
    FN_ENTER(0x0055fecc);
    /* 0055fecc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0055fecd: mov edi, ecx */ r_edi = r_ecx;
    /* 0055fecf: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0055fed3: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0055fed7: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0055fedb: mov ecx, edi */ r_ecx = r_edi;
    /* 0055fedd: call 0x7acaf8 */ r_esp -= 4; W32(r_esp, 0x55fee2u); f_007acaf8();
    /* 0055fee2: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 0055fee6: mov dword ptr [edi], 0xb053c8 */ W32((u32)(r_edi), 0xb053c8u);
    /* 0055feec: mov eax, dword ptr [0x9be0c0] */ r_eax = R32((u32)(0x9be0c0u));
    /* 0055fef1: mov dword ptr [edi + 0xc0], 0x96 */ W32((u32)(r_edi+0xc0u), 0x96u);
    /* 0055fefb: mov dword ptr [edi + 4], eax */ W32((u32)(r_edi+0x4u), r_eax);
    /* 0055fefe: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0055ff02: mov dword ptr [edi + 0xb0], 1 */ W32((u32)(r_edi+0xb0u), 0x1u);
    /* 0055ff0c: mov dword ptr [edi + 0xbc], edx */ W32((u32)(r_edi+0xbcu), r_edx);
    /* 0055ff12: mov dword ptr [edi + 0xac], eax */ W32((u32)(r_edi+0xacu), r_eax);
    /* 0055ff18: mov eax, dword ptr [edi + 0x1c] */ r_eax = R32((u32)(r_edi+0x1cu));
    /* 0055ff1b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0055ff1d: je 0x55ff27 */ if (fZ) goto L_0055ff27;
L_0055ff1f:; BB(0x0055ff1f);
    /* 0055ff1f: movzx eax, word ptr [eax + 0x1c] */ r_eax = (u32)R16((u32)(r_eax+0x1cu));
    /* 0055ff23: mov word ptr [edi + 0x34], ax */ W16((u32)(r_edi+0x34u), (u16)r_eax);
L_0055ff27:; BB(0x0055ff27);
    /* 0055ff27: mov eax, edi */ r_eax = r_edi;
    /* 0055ff29: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0055ff2a: ret 0x14 */ FN_RET(0x0055fecc); r_esp += 24; return;
}

void f_0055ff30(void) /* sub_55FF30 */
{
    FN_ENTER(0x0055ff30);
    /* 0055ff30: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0055ff31: mov edi, ecx */ r_edi = r_ecx;
    /* 0055ff33: movzx eax, word ptr [edi + 0x34] */ r_eax = (u32)R16((u32)(r_edi+0x34u));
    /* 0055ff37: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055ff38: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x55ff3du); f_007b4d18();
    /* 0055ff3d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0055ff3e: mov dword ptr [edi + 0x1c], eax */ W32((u32)(r_edi+0x1cu), r_eax);
    /* 0055ff41: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055ff43: je 0x55ff72 */ if (fZ) goto L_0055ff72;
L_0055ff45:; BB(0x0055ff45);
    /* 0055ff45: mov eax, dword ptr [edi + 0xb8] */ r_eax = R32((u32)(r_edi+0xb8u));
    /* 0055ff4b: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055ff4e: jne 0x55ff69 */ if (!fZ) goto L_0055ff69;
L_0055ff50:; BB(0x0055ff50);
    /* 0055ff50: mov ecx, edi */ r_ecx = r_edi;
    /* 0055ff52: call 0x7acdc8 */ r_esp -= 4; W32(r_esp, 0x55ff57u); f_007acdc8();
    /* 0055ff57: mov ecx, edi */ r_ecx = r_edi;
    /* 0055ff59: call 0x7ace88 */ r_esp -= 4; W32(r_esp, 0x55ff5eu); f_007ace88();
    /* 0055ff5e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0055ff60: mov ecx, edi */ r_ecx = r_edi;
    /* 0055ff62: call 0x7acee8 */ r_esp -= 4; W32(r_esp, 0x55ff67u); f_007acee8();
    /* 0055ff67: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0055ff68: ret  */ FN_RET(0x0055ff30); r_esp += 4; return;
L_0055ff69:; BB(0x0055ff69);
    /* 0055ff69: mov ecx, edi */ r_ecx = r_edi;
    /* 0055ff6b: call 0x7ad670 */ r_esp -= 4; W32(r_esp, 0x55ff70u); f_007ad670();
    /* 0055ff70: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0055ff71: ret  */ FN_RET(0x0055ff30); r_esp += 4; return;
L_0055ff72:; BB(0x0055ff72);
    /* 0055ff72: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 0055ff76: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0055ff7b: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 0055ff7f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0055ff80: ret  */ FN_RET(0x0055ff30); r_esp += 4; return;
}

void f_0055ff84(void) /* sub_55FF84 */
{
    FN_ENTER(0x0055ff84);
    /* 0055ff84: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0055ff85: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0055ff87: mov eax, dword ptr [0xa73ca8] */ r_eax = R32((u32)(0xa73ca8u));
    /* 0055ff8c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055ff8e: je 0x55fff0 */ if (fZ) goto L_0055fff0;
L_0055ff90:; BB(0x0055ff90);
    /* 0055ff90: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x55ff95u); f_0082d7b0();
    /* 0055ff95: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x55ff9au); f_0082dbac();
    /* 0055ff9a: lea ecx, [ebx + 0x6c] */ r_ecx = (u32)(r_ebx+0x6cu);
    /* 0055ff9d: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x55ffa2u); f_0082d838();
    /* 0055ffa2: mov edx, dword ptr [ebx + 0xa4] */ r_edx = R32((u32)(r_ebx+0xa4u));
    /* 0055ffa8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0055ffaa: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x55ffafu); f_0082d8bc();
    /* 0055ffaf: mov edx, dword ptr [ebx + 0xa0] */ r_edx = R32((u32)(r_ebx+0xa0u));
    /* 0055ffb5: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0055ffb7: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x55ffbcu); f_0082e9e4();
    /* 0055ffbc: mov ecx, dword ptr [0xa73ca8] */ r_ecx = R32((u32)(0xa73ca8u));
    /* 0055ffc2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0055ffc4: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x55ffc9u); f_005b8624();
    /* 0055ffc9: mov ecx, eax */ r_ecx = r_eax;
    /* 0055ffcb: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x55ffd0u); f_00829cc8();
    /* 0055ffd0: mov ecx, dword ptr [0xa73ca8] */ r_ecx = R32((u32)(0xa73ca8u));
    /* 0055ffd6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0055ffd8: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x55ffddu); f_005b8610();
    /* 0055ffdd: mov ecx, eax */ r_ecx = r_eax;
    /* 0055ffdf: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x55ffe4u); f_00831758();
    /* 0055ffe4: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x55ffe9u); f_0082dab0();
    /* 0055ffe9: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x55ffeeu); f_0082da80();
    /* 0055ffee: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0055ffef: ret  */ FN_RET(0x0055ff84); r_esp += 4; return;
L_0055fff0:; BB(0x0055fff0);
    /* 0055fff0: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 0055fff4: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0055fff9: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 0055fffd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0055fffe: ret  */ FN_RET(0x0055ff84); r_esp += 4; return;
}

