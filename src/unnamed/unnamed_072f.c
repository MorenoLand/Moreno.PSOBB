#include "protos.h"

void f_0072f020(void)
{
    FN_ENTER(0x0072f020);
    /* 0072f020: les ebp, ptr [ecx - 0xe8b1800] */ UNSUP(0x0072f020, "les ebp, ptr [ecx - 0xe8b1800]");
    /* 0072f026: or byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a | b) & 0xffu; W8(ad, r);  }
    /* 0072f028: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0072f02b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072f02d: je 0x72f038 */ if (fZ) goto L_0072f038;
L_0072f02f:; BB(0x0072f02f);
    /* 0072f02f: call 0x7c00c4 */ r_esp -= 4; W32(r_esp, 0x72f034u); f_007c00c4();
    /* 0072f034: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072f036: jne 0x72f060 */ if (!fZ) goto L_0072f060;
L_0072f038:; BB(0x0072f038);
    /* 0072f038: push 0x2000000 */ { u32 v = 0x2000000u; r_esp -= 4; W32(r_esp, v); }
    /* 0072f03d: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0072f043: call 0x7be19c */ r_esp -= 4; W32(r_esp, 0x72f048u); f_007be19c();
    /* 0072f048: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0072f04b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072f04d: jne 0x72f133 */ if (!fZ) goto L_0072f133;
L_0072f053:; BB(0x0072f053);
    /* 0072f053: call 0x7c00c4 */ r_esp -= 4; W32(r_esp, 0x72f058u); f_007c00c4();
    /* 0072f058: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072f05a: jne 0x72f133 */ if (!fZ) goto L_0072f133;
L_0072f060:; BB(0x0072f060);
    /* 0072f060: call 0x791b48 */ r_esp -= 4; W32(r_esp, 0x72f065u); f_00791b48();
    /* 0072f065: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072f067: je 0x72f133 */ if (fZ) goto L_0072f133;
L_0072f06d:; BB(0x0072f06d);
    /* 0072f06d: call 0x791b48 */ r_esp -= 4; W32(r_esp, 0x72f072u); f_00791b48();
    /* 0072f072: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 0072f074: mov ecx, eax */ r_ecx = r_eax;
    /* 0072f076: call 0x78fd68 */ r_esp -= 4; W32(r_esp, 0x72f07bu); f_0078fd68();
    /* 0072f07b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072f07d: je 0x72f133 */ if (fZ) goto L_0072f133;
L_0072f083:; BB(0x0072f083);
    /* 0072f083: call 0x7c00dc */ r_esp -= 4; W32(r_esp, 0x72f088u); f_007c00dc();
    /* 0072f088: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072f08a: jne 0x72f133 */ if (!fZ) goto L_0072f133;
L_0072f090:; BB(0x0072f090);
    /* 0072f090: call 0x7c00d0 */ r_esp -= 4; W32(r_esp, 0x72f095u); f_007c00d0();
    /* 0072f095: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072f097: jne 0x72f133 */ if (!fZ) goto L_0072f133;
L_0072f09d:; BB(0x0072f09d);
    /* 0072f09d: push 0x1000000 */ { u32 v = 0x1000000u; r_esp -= 4; W32(r_esp, v); }
    /* 0072f0a2: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0072f0a8: call 0x7be19c */ r_esp -= 4; W32(r_esp, 0x72f0adu); f_007be19c();
    /* 0072f0ad: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0072f0b0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072f0b2: je 0x72f0cb */ if (fZ) goto L_0072f0cb;
L_0072f0b4:; BB(0x0072f0b4);
    /* 0072f0b4: push 0xfeffffff */ { u32 v = 0xfeffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0072f0b9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0072f0bb: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0072f0c1: call 0x7be17c */ r_esp -= 4; W32(r_esp, 0x72f0c6u); f_007be17c();
    /* 0072f0c6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0072f0c9: jmp 0x72f0e3 */ goto L_0072f0e3;
L_0072f0cb:; BB(0x0072f0cb);
    /* 0072f0cb: push 0xfeffffff */ { u32 v = 0xfeffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0072f0d0: push 0x1000000 */ { u32 v = 0x1000000u; r_esp -= 4; W32(r_esp, v); }
    /* 0072f0d5: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0072f0db: call 0x7be17c */ r_esp -= 4; W32(r_esp, 0x72f0e0u); f_007be17c();
    /* 0072f0e0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0072f0e3:; BB(0x0072f0e3);
    /* 0072f0e3: mov eax, dword ptr [ebx + 0x3f0] */ r_eax = R32((u32)(r_ebx+0x3f0u));
    /* 0072f0e9: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0072f0ec: mov dword ptr [ebx + 0x3f0], eax */ W32((u32)(r_ebx+0x3f0u), r_eax);
    /* 0072f0f2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0072f0f4: call 0x72f248 */ r_esp -= 4; W32(r_esp, 0x72f0f9u); f_0072f248();
    /* 0072f0f9: mov eax, dword ptr [ebx + 0x3f0] */ r_eax = R32((u32)(r_ebx+0x3f0u));
    /* 0072f0ff: or eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0072f102: mov dword ptr [ebx + 0x3f0], eax */ W32((u32)(r_ebx+0x3f0u), r_eax);
    /* 0072f108: call 0x793228 */ r_esp -= 4; W32(r_esp, 0x72f10du); f_00793228();
    /* 0072f10d: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 0072f110: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072f111: call 0x841978 */ r_esp -= 4; W32(r_esp, 0x72f116u); f_00841978();
    /* 0072f116: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0072f117: call 0x840b84 */ r_esp -= 4; W32(r_esp, 0x72f11cu); f_00840b84();
    /* 0072f11c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0072f11e: call 0x72ee28 */ r_esp -= 4; W32(r_esp, 0x72f123u); f_0072ee28();
    /* 0072f123: call 0x70a5ec */ r_esp -= 4; W32(r_esp, 0x72f128u); f_0070a5ec();
    /* 0072f128: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 0072f12e: call 0x7f26d4 */ r_esp -= 4; W32(r_esp, 0x72f133u); f_007f26d4();
L_0072f133:; BB(0x0072f133);
    /* 0072f133: mov eax, dword ptr [ebx + 0x3f0] */ r_eax = R32((u32)(r_ebx+0x3f0u));
    /* 0072f139: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0072f13b: je 0x72f146 */ if (fZ) goto L_0072f146;
L_0072f13d:; BB(0x0072f13d);
    /* 0072f13d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0072f13f: call 0x72fdd0 */ r_esp -= 4; W32(r_esp, 0x72f144u); f_0072fdd0();
    /* 0072f144: jmp 0x72f14d */ goto L_0072f14d;
L_0072f146:; BB(0x0072f146);
    /* 0072f146: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0072f148: call 0x72f37c */ r_esp -= 4; W32(r_esp, 0x72f14du); f_0072f37c();
L_0072f14d:; BB(0x0072f14d);
    /* 0072f14d: call 0x841720 */ r_esp -= 4; W32(r_esp, 0x72f152u); f_00841720();
    /* 0072f152: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0072f155: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072f156: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0072f157: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0072f158: ret  */ FN_RET(0x0072f020); r_esp += 4; return;
}

void f_0072f210(void) /* sub_72F210 */
{
    FN_ENTER(0x0072f210);
    /* 0072f210: mov eax, dword ptr [ecx + 0x3f8] */ r_eax = R32((u32)(r_ecx+0x3f8u));
    /* 0072f216: mov edx, dword ptr [ecx + 0x3fc] */ r_edx = R32((u32)(r_ecx+0x3fcu));
    /* 0072f21c: mov dword ptr [ecx + 0x400], eax */ W32((u32)(r_ecx+0x400u), r_eax);
    /* 0072f222: mov dword ptr [ecx + 0x404], edx */ W32((u32)(r_ecx+0x404u), r_edx);
    /* 0072f228: ret  */ FN_RET(0x0072f210); r_esp += 4; return;
}

void f_0072f22c(void) /* sub_72F22C */
{
    FN_ENTER(0x0072f22c);
    /* 0072f22c: mov eax, dword ptr [ecx + 0x3f0] */ r_eax = R32((u32)(r_ecx+0x3f0u));
    /* 0072f232: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0072f234: jne 0x72f241 */ if (!fZ) goto L_0072f241;
L_0072f236:; BB(0x0072f236);
    /* 0072f236: mov dword ptr [ecx + 0x414], 0xffffffff */ W32((u32)(r_ecx+0x414u), 0xffffffffu);
    /* 0072f240: ret  */ FN_RET(0x0072f22c); r_esp += 4; return;
L_0072f241:; BB(0x0072f241);
    /* 0072f241: call 0x7313b8 */ r_esp -= 4; W32(r_esp, 0x72f246u); f_007313b8();
    /* 0072f246: ret  */ FN_RET(0x0072f22c); r_esp += 4; return;
}

void f_0072f248(void) /* sub_72F248 */
{
    FN_ENTER(0x0072f248);
    /* 0072f248: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0072f249: mov edi, ecx */ r_edi = r_ecx;
    /* 0072f24b: movsx eax, word ptr [edi + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x20u));
    /* 0072f24f: push 0x1000000 */ { u32 v = 0x1000000u; r_esp -= 4; W32(r_esp, v); }
    /* 0072f254: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072f255: call 0x7be19c */ r_esp -= 4; W32(r_esp, 0x72f25au); f_007be19c();
    /* 0072f25a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0072f25d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072f25f: jne 0x72f279 */ if (!fZ) goto L_0072f279;
L_0072f261:; BB(0x0072f261);
    /* 0072f261: mov eax, dword ptr [edi + 0x3f0] */ r_eax = R32((u32)(r_edi+0x3f0u));
    /* 0072f267: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0072f269: je 0x72f272 */ if (fZ) goto L_0072f272;
L_0072f26b:; BB(0x0072f26b);
    /* 0072f26b: call 0x8411f8 */ r_esp -= 4; W32(r_esp, 0x72f270u); f_008411f8();
    /* 0072f270: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0072f271: ret  */ FN_RET(0x0072f248); r_esp += 4; return;
L_0072f272:; BB(0x0072f272);
    /* 0072f272: call 0x8412b4 */ r_esp -= 4; W32(r_esp, 0x72f277u); f_008412b4();
    /* 0072f277: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0072f278: ret  */ FN_RET(0x0072f248); r_esp += 4; return;
L_0072f279:; BB(0x0072f279);
    /* 0072f279: call 0x8411f8 */ r_esp -= 4; W32(r_esp, 0x72f27eu); f_008411f8();
    /* 0072f27e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0072f27f: ret  */ FN_RET(0x0072f248); r_esp += 4; return;
}

void f_0072f280(void) /* sub_72F280 */
{
    FN_ENTER(0x0072f280);
    /* 0072f280: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0072f281: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0072f283: call 0x8411f0 */ r_esp -= 4; W32(r_esp, 0x72f288u); f_008411f0();
    /* 0072f288: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072f28a: je 0x72f296 */ if (fZ) goto L_0072f296;
L_0072f28c:; BB(0x0072f28c);
    /* 0072f28c: mov eax, dword ptr [ebx + 0x620] */ r_eax = R32((u32)(r_ebx+0x620u));
    /* 0072f292: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0072f294: jg 0x72f2d1 */ if ((!fZ&&fS==fO)) goto L_0072f2d1;
L_0072f296:; BB(0x0072f296);
    /* 0072f296: call 0x82d2a4 */ r_esp -= 4; W32(r_esp, 0x72f29bu); f_0082d2a4();
    /* 0072f29b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072f29d: je 0x72f2a9 */ if (fZ) goto L_0072f2a9;
L_0072f29f:; BB(0x0072f29f);
    /* 0072f29f: mov eax, dword ptr [ebx + 0x620] */ r_eax = R32((u32)(r_ebx+0x620u));
    /* 0072f2a5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0072f2a7: jg 0x72f2d1 */ if ((!fZ&&fS==fO)) goto L_0072f2d1;
L_0072f2a9:; BB(0x0072f2a9);
    /* 0072f2a9: mov eax, dword ptr [ebx + 0x414] */ r_eax = R32((u32)(r_ebx+0x414u));
    /* 0072f2af: cmp eax, 0x4c */ {  u32 a = r_eax; u32 b = 0x4cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072f2b2: je 0x72f2c0 */ if (fZ) goto L_0072f2c0;
L_0072f2b4:; BB(0x0072f2b4);
    /* 0072f2b4: push 0x4c */ { u32 v = 0x4cu; r_esp -= 4; W32(r_esp, v); }
    /* 0072f2b6: call 0x7bfe50 */ r_esp -= 4; W32(r_esp, 0x72f2bbu); f_007bfe50();
    /* 0072f2bb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0072f2bc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072f2be: je 0x72f2d1 */ if (fZ) goto L_0072f2d1;
L_0072f2c0:; BB(0x0072f2c0);
    /* 0072f2c0: mov eax, dword ptr [ebx + 0x518] */ r_eax = R32((u32)(r_ebx+0x518u));
    /* 0072f2c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0072f2c8: jne 0x72f2d1 */ if (!fZ) goto L_0072f2d1;
L_0072f2ca:; BB(0x0072f2ca);
    /* 0072f2ca: mov eax, 1 */ r_eax = 0x1u;
    /* 0072f2cf: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072f2d0: ret  */ FN_RET(0x0072f280); r_esp += 4; return;
L_0072f2d1:; BB(0x0072f2d1);
    /* 0072f2d1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0072f2d3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072f2d4: ret  */ FN_RET(0x0072f280); r_esp += 4; return;
}

void f_0072f2d8(void) /* sub_72F2D8 */
{
    FN_ENTER(0x0072f2d8);
    /* 0072f2d8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0072f2d9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0072f2da: mov esi, ecx */ r_esi = r_ecx;
    /* 0072f2dc: call 0x8411f0 */ r_esp -= 4; W32(r_esp, 0x72f2e1u); f_008411f0();
    /* 0072f2e1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072f2e3: je 0x72f2f3 */ if (fZ) goto L_0072f2f3;
L_0072f2e5:; BB(0x0072f2e5);
    /* 0072f2e5: mov eax, dword ptr [esi + 0x620] */ r_eax = R32((u32)(r_esi+0x620u));
    /* 0072f2eb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0072f2ed: jg 0x72f377 */ if ((!fZ&&fS==fO)) goto L_0072f377;
L_0072f2f3:; BB(0x0072f2f3);
    /* 0072f2f3: call 0x82d2a4 */ r_esp -= 4; W32(r_esp, 0x72f2f8u); f_0082d2a4();
    /* 0072f2f8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072f2fa: je 0x72f306 */ if (fZ) goto L_0072f306;
L_0072f2fc:; BB(0x0072f2fc);
    /* 0072f2fc: mov eax, dword ptr [esi + 0x620] */ r_eax = R32((u32)(r_esi+0x620u));
    /* 0072f302: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0072f304: jg 0x72f377 */ if ((!fZ&&fS==fO)) goto L_0072f377;
L_0072f306:; BB(0x0072f306);
    /* 0072f306: mov eax, dword ptr [esi + 0x414] */ r_eax = R32((u32)(r_esi+0x414u));
    /* 0072f30c: cmp eax, 0x61 */ {  u32 a = r_eax; u32 b = 0x61u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072f30f: je 0x72f31d */ if (fZ) goto L_0072f31d;
L_0072f311:; BB(0x0072f311);
    /* 0072f311: push 0x61 */ { u32 v = 0x61u; r_esp -= 4; W32(r_esp, v); }
    /* 0072f313: call 0x7bfe50 */ r_esp -= 4; W32(r_esp, 0x72f318u); f_007bfe50();
    /* 0072f318: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0072f319: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072f31b: je 0x72f377 */ if (fZ) goto L_0072f377;
L_0072f31d:; BB(0x0072f31d);
    /* 0072f31d: mov ecx, esi */ r_ecx = r_esi;
    /* 0072f31f: call 0x72fd94 */ r_esp -= 4; W32(r_esp, 0x72f324u); f_0072fd94();
    /* 0072f324: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072f326: jne 0x72f377 */ if (!fZ) goto L_0072f377;
L_0072f328:; BB(0x0072f328);
    /* 0072f328: mov eax, dword ptr [esi + 0x518] */ r_eax = R32((u32)(r_esi+0x518u));
    /* 0072f32e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072f330: jne 0x72f377 */ if (!fZ) goto L_0072f377;
L_0072f332:; BB(0x0072f332);
    /* 0072f332: mov eax, dword ptr [esi + 0x3f0] */ r_eax = R32((u32)(r_esi+0x3f0u));
    /* 0072f338: test eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0072f33d: jne 0x72f347 */ if (!fZ) goto L_0072f347;
L_0072f33f:; BB(0x0072f33f);
    /* 0072f33f: mov eax, 1 */ r_eax = 0x1u;
    /* 0072f344: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072f345: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0072f346: ret  */ FN_RET(0x0072f2d8); r_esp += 4; return;
L_0072f347:; BB(0x0072f347);
    /* 0072f347: add esi, 0x2ec */ {  u32 a = r_esi; u32 b = 0x2ecu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0072f34d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0072f34f: mov ebx, esi */ r_ebx = r_esi;
    /* 0072f351: mov esi, eax */ r_esi = r_eax;
L_0072f353:; BB(0x0072f353);
    /* 0072f353: movzx edx, word ptr [ebx] */ r_edx = (u32)R16((u32)(r_ebx));
    /* 0072f356: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072f358: je 0x72f377 */ if (fZ) goto L_0072f377;
L_0072f35a:; BB(0x0072f35a);
    /* 0072f35a: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0072f35c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0072f35d: call 0x858ba3 */ r_esp -= 4; W32(r_esp, 0x72f362u); f_00858ba3();
    /* 0072f362: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0072f365: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0072f367: je 0x72f33f */ if (fZ) goto L_0072f33f;
L_0072f369:; BB(0x0072f369);
    /* 0072f369: add ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0072f36c: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0072f36f: cmp esi, 0x100 */ {  u32 a = r_esi; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0072f375: jl 0x72f353 */ if ((fS!=fO)) goto L_0072f353;
L_0072f377:; BB(0x0072f377);
    /* 0072f377: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0072f379: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072f37a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0072f37b: ret  */ FN_RET(0x0072f2d8); r_esp += 4; return;
}

void f_0072f37c(void) /* sub_72F37C */
{
    FN_ENTER(0x0072f37c);
    /* 0072f37c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0072f37d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0072f37e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0072f37f: mov edi, ecx */ r_edi = r_ecx;
    /* 0072f381: call 0x70a5ec */ r_esp -= 4; W32(r_esp, 0x72f386u); f_0070a5ec();
    /* 0072f386: call 0x840b5c */ r_esp -= 4; W32(r_esp, 0x72f38bu); f_00840b5c();
    /* 0072f38b: mov esi, eax */ r_esi = r_eax;
    /* 0072f38d: push 0x1000000 */ { u32 v = 0x1000000u; r_esp -= 4; W32(r_esp, v); }
    /* 0072f392: movsx edx, word ptr [edi + 0x20] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x20u));
    /* 0072f396: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0072f397: call 0x7be19c */ r_esp -= 4; W32(r_esp, 0x72f39cu); f_007be19c();
    /* 0072f39c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0072f39f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072f3a1: jne 0x72f3ff */ if (!fZ) goto L_0072f3ff;
L_0072f3a3:; BB(0x0072f3a3);
    /* 0072f3a3: mov ecx, edi */ r_ecx = r_edi;
    /* 0072f3a5: call 0x72fdac */ r_esp -= 4; W32(r_esp, 0x72f3aau); f_0072fdac();
    /* 0072f3aa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072f3ac: je 0x72f49d */ if (fZ) goto L_0072f49d;
L_0072f3b2:; BB(0x0072f3b2);
    /* 0072f3b2: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072f3b4: je 0x72f3db */ if (fZ) goto L_0072f3db;
L_0072f3b6:; BB(0x0072f3b6);
    /* 0072f3b6: mov eax, dword ptr [edi + 0x518] */ r_eax = R32((u32)(r_edi+0x518u));
    /* 0072f3bc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072f3be: jne 0x72f3db */ if (!fZ) goto L_0072f3db;
L_0072f3c0:; BB(0x0072f3c0);
    /* 0072f3c0: mov eax, dword ptr [edi + 0x3f0] */ r_eax = R32((u32)(r_edi+0x3f0u));
    /* 0072f3c6: mov dword ptr [edi + 0x408], 1 */ W32((u32)(r_edi+0x408u), 0x1u);
    /* 0072f3d0: or eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0072f3d5: mov dword ptr [edi + 0x3f0], eax */ W32((u32)(r_edi+0x3f0u), r_eax);
L_0072f3db:; BB(0x0072f3db);
    /* 0072f3db: call 0x840b84 */ r_esp -= 4; W32(r_esp, 0x72f3e0u); f_00840b84();
    /* 0072f3e0: call 0x84128c */ r_esp -= 4; W32(r_esp, 0x72f3e5u); f_0084128c();
    /* 0072f3e5: mov eax, dword ptr [edi + 0x3f0] */ r_eax = R32((u32)(r_edi+0x3f0u));
    /* 0072f3eb: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0072f3ee: mov dword ptr [edi + 0x3f0], eax */ W32((u32)(r_edi+0x3f0u), r_eax);
    /* 0072f3f4: mov ecx, edi */ r_ecx = r_edi;
    /* 0072f3f6: call 0x72f248 */ r_esp -= 4; W32(r_esp, 0x72f3fbu); f_0072f248();
    /* 0072f3fb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0072f3fc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0072f3fd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0072f3fe: ret  */ FN_RET(0x0072f37c); r_esp += 4; return;
L_0072f3ff:; BB(0x0072f3ff);
    /* 0072f3ff: call 0x840b14 */ r_esp -= 4; W32(r_esp, 0x72f404u); f_00840b14();
    /* 0072f404: mov ebp, eax */ r_ebp = r_eax;
    /* 0072f406: call 0x840b0c */ r_esp -= 4; W32(r_esp, 0x72f40bu); f_00840b0c();
    /* 0072f40b: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072f40d: je 0x72f426 */ if (fZ) goto L_0072f426;
L_0072f40f:; BB(0x0072f40f);
    /* 0072f40f: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072f411: je 0x72f41b */ if (fZ) goto L_0072f41b;
L_0072f413:; BB(0x0072f413);
    /* 0072f413: movzx edx, word ptr [ebp] */ r_edx = (u32)R16((u32)(r_ebp));
    /* 0072f417: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072f419: jne 0x72f457 */ if (!fZ) goto L_0072f457;
L_0072f41b:; BB(0x0072f41b);
    /* 0072f41b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072f41d: je 0x72f426 */ if (fZ) goto L_0072f426;
L_0072f41f:; BB(0x0072f41f);
    /* 0072f41f: movzx edx, word ptr [eax] */ r_edx = (u32)R16((u32)(r_eax));
    /* 0072f422: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072f424: jne 0x72f457 */ if (!fZ) goto L_0072f457;
L_0072f426:; BB(0x0072f426);
    /* 0072f426: call 0x8411f0 */ r_esp -= 4; W32(r_esp, 0x72f42bu); f_008411f0();
    /* 0072f42b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072f42d: je 0x72f438 */ if (fZ) goto L_0072f438;
L_0072f42f:; BB(0x0072f42f);
    /* 0072f42f: call 0x841050 */ r_esp -= 4; W32(r_esp, 0x72f434u); f_00841050();
    /* 0072f434: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072f436: jne 0x72f453 */ if (!fZ) goto L_0072f453;
L_0072f438:; BB(0x0072f438);
    /* 0072f438: call 0x82d2a4 */ r_esp -= 4; W32(r_esp, 0x72f43du); f_0082d2a4();
    /* 0072f43d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072f43f: je 0x72f49d */ if (fZ) goto L_0072f49d;
L_0072f441:; BB(0x0072f441);
    /* 0072f441: call 0x841050 */ r_esp -= 4; W32(r_esp, 0x72f446u); f_00841050();
    /* 0072f446: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072f448: jne 0x72f453 */ if (!fZ) goto L_0072f453;
L_0072f44a:; BB(0x0072f44a);
    /* 0072f44a: call 0x841058 */ r_esp -= 4; W32(r_esp, 0x72f44fu); f_00841058();
    /* 0072f44f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072f451: je 0x72f49d */ if (fZ) goto L_0072f49d;
L_0072f453:; BB(0x0072f453);
    /* 0072f453: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072f455: je 0x72f47c */ if (fZ) goto L_0072f47c;
L_0072f457:; BB(0x0072f457);
    /* 0072f457: mov eax, dword ptr [edi + 0x518] */ r_eax = R32((u32)(r_edi+0x518u));
    /* 0072f45d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072f45f: jne 0x72f47c */ if (!fZ) goto L_0072f47c;
L_0072f461:; BB(0x0072f461);
    /* 0072f461: mov eax, dword ptr [edi + 0x3f0] */ r_eax = R32((u32)(r_edi+0x3f0u));
    /* 0072f467: mov dword ptr [edi + 0x408], 1 */ W32((u32)(r_edi+0x408u), 0x1u);
    /* 0072f471: or eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0072f476: mov dword ptr [edi + 0x3f0], eax */ W32((u32)(r_edi+0x3f0u), r_eax);
L_0072f47c:; BB(0x0072f47c);
    /* 0072f47c: mov ecx, edi */ r_ecx = r_edi;
    /* 0072f47e: call 0x72f4a8 */ r_esp -= 4; W32(r_esp, 0x72f483u); f_0072f4a8();
    /* 0072f483: mov eax, dword ptr [edi + 0x3f0] */ r_eax = R32((u32)(r_edi+0x3f0u));
    /* 0072f489: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0072f48c: mov dword ptr [edi + 0x3f0], eax */ W32((u32)(r_edi+0x3f0u), r_eax);
    /* 0072f492: mov ecx, edi */ r_ecx = r_edi;
    /* 0072f494: call 0x72f248 */ r_esp -= 4; W32(r_esp, 0x72f499u); f_0072f248();
    /* 0072f499: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0072f49a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0072f49b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0072f49c: ret  */ FN_RET(0x0072f37c); r_esp += 4; return;
L_0072f49d:; BB(0x0072f49d);
    /* 0072f49d: call 0x84128c */ r_esp -= 4; W32(r_esp, 0x72f4a2u); f_0084128c();
    /* 0072f4a2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0072f4a3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0072f4a4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0072f4a5: ret  */ FN_RET(0x0072f37c); r_esp += 4; return;
}

void f_0072f4a8(void) /* sub_72F4A8 */
{
    FN_ENTER(0x0072f4a8);
    /* 0072f4a8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0072f4a9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0072f4aa: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0072f4ab: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0072f4ac: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0072f4af: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0072f4b1: call 0x840b5c */ r_esp -= 4; W32(r_esp, 0x72f4b6u); f_00840b5c();
    /* 0072f4b6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072f4b8: je 0x72f983 */ if (fZ) goto L_0072f983;
L_0072f4be:; BB(0x0072f4be);
    /* 0072f4be: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0072f4c0: call 0x72fd94 */ r_esp -= 4; W32(r_esp, 0x72f4c5u); f_0072fd94();
    /* 0072f4c5: mov esi, eax */ r_esi = r_eax;
    /* 0072f4c7: call 0x840b1c */ r_esp -= 4; W32(r_esp, 0x72f4ccu); f_00840b1c();
    /* 0072f4cc: mov dword ptr [ebx + 0x260], eax */ W32((u32)(r_ebx+0x260u), r_eax);
    /* 0072f4d2: call 0x840b2c */ r_esp -= 4; W32(r_esp, 0x72f4d7u); f_00840b2c();
    /* 0072f4d7: mov dword ptr [ebx + 0x2e4], eax */ W32((u32)(r_ebx+0x2e4u), r_eax);
    /* 0072f4dd: call 0x840b34 */ r_esp -= 4; W32(r_esp, 0x72f4e2u); f_00840b34();
    /* 0072f4e2: mov dword ptr [ebx + 0x2e8], eax */ W32((u32)(r_ebx+0x2e8u), r_eax);
    /* 0072f4e8: call 0x840b0c */ r_esp -= 4; W32(r_esp, 0x72f4edu); f_00840b0c();
    /* 0072f4ed: push 0x7f */ { u32 v = 0x7fu; r_esp -= 4; W32(r_esp, v); }
    /* 0072f4ef: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072f4f0: lea ebp, [ebx + 0x60] */ r_ebp = (u32)(r_ebx+0x60u);
    /* 0072f4f3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0072f4f4: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x72f4f9u); f_00857dec();
    /* 0072f4f9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0072f4fc: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0072f4fe: mov word ptr [ebx + 0x15e], dx */ W16((u32)(r_ebx+0x15eu), (u16)r_edx);
    /* 0072f505: call 0x840b14 */ r_esp -= 4; W32(r_esp, 0x72f50au); f_00840b14();
    /* 0072f50a: push 0x7f */ { u32 v = 0x7fu; r_esp -= 4; W32(r_esp, v); }
    /* 0072f50c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072f50d: lea edx, [ebx + 0x160] */ r_edx = (u32)(r_ebx+0x160u);
    /* 0072f513: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0072f514: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x72f519u); f_00857dec();
    /* 0072f519: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0072f51c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0072f51e: mov word ptr [ebx + 0x25e], dx */ W16((u32)(r_ebx+0x25eu), (u16)r_edx);
    /* 0072f525: call 0x840b24 */ r_esp -= 4; W32(r_esp, 0x72f52au); f_00840b24();
    /* 0072f52a: mov dword ptr [esp + 0x28], ebp */ W32((u32)(r_esp+0x28u), r_ebp);
    /* 0072f52e: mov dword ptr [esp + 0x24], esi */ W32((u32)(r_esp+0x24u), r_esi);
    /* 0072f532: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_0072f534:; BB(0x0072f534);
    /* 0072f534: movzx edx, byte ptr [eax] */ r_edx = (u32)R8((u32)(r_eax));
    /* 0072f537: mov byte ptr [edi + ebx + 0x264], dl */ W8((u32)(r_edi+r_ebx+0x264u), (u8)r_edx);
    /* 0072f53e: movzx edx, byte ptr [eax + 1] */ r_edx = (u32)R8((u32)(r_eax+0x1u));
    /* 0072f542: mov byte ptr [edi + ebx + 0x265], dl */ W8((u32)(r_edi+r_ebx+0x265u), (u8)r_edx);
    /* 0072f549: movzx edx, byte ptr [eax + 2] */ r_edx = (u32)R8((u32)(r_eax+0x2u));
    /* 0072f54d: mov byte ptr [edi + ebx + 0x266], dl */ W8((u32)(r_edi+r_ebx+0x266u), (u8)r_edx);
    /* 0072f554: movzx edx, byte ptr [eax + 3] */ r_edx = (u32)R8((u32)(r_eax+0x3u));
    /* 0072f558: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0072f55b: mov byte ptr [edi + ebx + 0x267], dl */ W8((u32)(r_edi+r_ebx+0x267u), (u8)r_edx);
    /* 0072f562: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0072f565: cmp edi, 0x7b */ {  u32 a = r_edi; u32 b = 0x7bu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0072f568: jl 0x72f534 */ if ((fS!=fO)) goto L_0072f534;
L_0072f56a:; BB(0x0072f56a);
    /* 0072f56a: mov ebp, dword ptr [esp + 0x28] */ r_ebp = R32((u32)(r_esp+0x28u));
    /* 0072f56e: mov esi, dword ptr [esp + 0x24] */ r_esi = R32((u32)(r_esp+0x24u));
    /* 0072f572: movzx edx, byte ptr [eax] */ r_edx = (u32)R8((u32)(r_eax));
    /* 0072f575: mov byte ptr [edi + ebx + 0x264], dl */ W8((u32)(r_edi+r_ebx+0x264u), (u8)r_edx);
    /* 0072f57c: movzx edx, byte ptr [eax + 1] */ r_edx = (u32)R8((u32)(r_eax+0x1u));
    /* 0072f580: mov byte ptr [edi + ebx + 0x265], dl */ W8((u32)(r_edi+r_ebx+0x265u), (u8)r_edx);
    /* 0072f587: movzx edx, byte ptr [eax + 2] */ r_edx = (u32)R8((u32)(r_eax+0x2u));
    /* 0072f58b: mov byte ptr [edi + ebx + 0x266], dl */ W8((u32)(r_edi+r_ebx+0x266u), (u8)r_edx);
    /* 0072f592: mov edi, dword ptr [ebx + 0x3f0] */ r_edi = R32((u32)(r_ebx+0x3f0u));
    /* 0072f598: test edi, 0x100 */ {  u32 a = r_edi; u32 b = 0x100u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072f59e: je 0x72f612 */ if (fZ) goto L_0072f612;
L_0072f5a0:; BB(0x0072f5a0);
    /* 0072f5a0: movzx edx, word ptr [ebx + 0x60] */ r_edx = (u32)R16((u32)(r_ebx+0x60u));
    /* 0072f5a4: cmp edx, 0x41 */ {  u32 a = r_edx; u32 b = 0x41u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0072f5a7: jl 0x72f5ae */ if ((fS!=fO)) goto L_0072f5ae;
L_0072f5a9:; BB(0x0072f5a9);
    /* 0072f5a9: cmp edx, 0x5a */ {  u32 a = r_edx; u32 b = 0x5au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0072f5ac: jle 0x72f5c7 */ if ((fZ||fS!=fO)) goto L_0072f5c7;
L_0072f5ae:; BB(0x0072f5ae);
    /* 0072f5ae: cmp edx, 0x61 */ {  u32 a = r_edx; u32 b = 0x61u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0072f5b1: jl 0x72f5c1 */ if ((fS!=fO)) goto L_0072f5c1;
L_0072f5b3:; BB(0x0072f5b3);
    /* 0072f5b3: cmp edx, 0x7a */ {  u32 a = r_edx; u32 b = 0x7au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0072f5b6: jg 0x72f5c1 */ if ((!fZ&&fS==fO)) goto L_0072f5c1;
L_0072f5b8:; BB(0x0072f5b8);
    /* 0072f5b8: add edx, -0x20 */ {  u32 a = r_edx; u32 b = 0xffffffe0u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0072f5bb: mov word ptr [ebx + 0x60], dx */ W16((u32)(r_ebx+0x60u), (u16)r_edx);
    /* 0072f5bf: jmp 0x72f5c7 */ goto L_0072f5c7;
L_0072f5c1:; BB(0x0072f5c1);
    /* 0072f5c1: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0072f5c3: mov word ptr [ebx + 0x60], dx */ W16((u32)(r_ebx+0x60u), (u16)r_edx);
L_0072f5c7:; BB(0x0072f5c7);
    /* 0072f5c7: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0072f5c9: mov word ptr [ebx + 0x62], dx */ W16((u32)(r_ebx+0x62u), (u16)r_edx);
    /* 0072f5cd: mov word ptr [ebx + 0x162], dx */ W16((u32)(r_ebx+0x162u), (u16)r_edx);
    /* 0072f5d4: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_0072f5d6:; BB(0x0072f5d6);
    /* 0072f5d6: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0072f5d8: mov byte ptr [edi + ebx + 0x264], dl */ W8((u32)(r_edi+r_ebx+0x264u), (u8)r_edx);
    /* 0072f5df: mov byte ptr [edi + ebx + 0x265], dl */ W8((u32)(r_edi+r_ebx+0x265u), (u8)r_edx);
    /* 0072f5e6: mov byte ptr [edi + ebx + 0x266], dl */ W8((u32)(r_edi+r_ebx+0x266u), (u8)r_edx);
    /* 0072f5ed: mov byte ptr [edi + ebx + 0x267], dl */ W8((u32)(r_edi+r_ebx+0x267u), (u8)r_edx);
    /* 0072f5f4: mov byte ptr [edi + ebx + 0x268], dl */ W8((u32)(r_edi+r_ebx+0x268u), (u8)r_edx);
    /* 0072f5fb: mov byte ptr [edi + ebx + 0x269], dl */ W8((u32)(r_edi+r_ebx+0x269u), (u8)r_edx);
    /* 0072f602: add edi, 6 */ {  u32 a = r_edi; u32 b = 0x6u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0072f605: cmp edi, 0x79 */ {  u32 a = r_edi; u32 b = 0x79u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0072f608: jl 0x72f5d6 */ if ((fS!=fO)) goto L_0072f5d6;
L_0072f60a:; BB(0x0072f60a);
    /* 0072f60a: mov byte ptr [edi + ebx + 0x264], 0 */ W8((u32)(r_edi+r_ebx+0x264u), 0x0u);
L_0072f612:; BB(0x0072f612);
    /* 0072f612: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0072f614: call 0x72fd18 */ r_esp -= 4; W32(r_esp, 0x72f619u); f_0072fd18();
    /* 0072f619: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072f61b: je 0x72f632 */ if (fZ) goto L_0072f632;
L_0072f61d:; BB(0x0072f61d);
    /* 0072f61d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0072f61f: call 0x72fd94 */ r_esp -= 4; W32(r_esp, 0x72f624u); f_0072fd94();
    /* 0072f624: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072f626: jne 0x72f632 */ if (!fZ) goto L_0072f632;
L_0072f628:; BB(0x0072f628);
    /* 0072f628: mov dword ptr [ebx + 0x518], 2 */ W32((u32)(r_ebx+0x518u), 0x2u);
L_0072f632:; BB(0x0072f632);
    /* 0072f632: call 0x840b3c */ r_esp -= 4; W32(r_esp, 0x72f637u); f_00840b3c();
    /* 0072f637: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072f639: je 0x72f976 */ if (fZ) goto L_0072f976;
L_0072f63f:; BB(0x0072f63f);
    /* 0072f63f: mov eax, dword ptr [ebx + 0x3ec] */ r_eax = R32((u32)(r_ebx+0x3ecu));
    /* 0072f645: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0072f649: lea edi, [ebx + 0x2ec] */ r_edi = (u32)(r_ebx+0x2ecu);
    /* 0072f64f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0072f650: call 0x858009 */ r_esp -= 4; W32(r_esp, 0x72f655u); f_00858009();
    /* 0072f655: mov esi, eax */ r_esi = r_eax;
    /* 0072f657: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0072f658: mov edx, dword ptr [ebx + 0x3ec] */ r_edx = R32((u32)(r_ebx+0x3ecu));
    /* 0072f65e: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0072f660: jl 0x72f664 */ if ((fS!=fO)) goto L_0072f664;
L_0072f662:; BB(0x0072f662);
    /* 0072f662: mov edx, esi */ r_edx = r_esi;
L_0072f664:; BB(0x0072f664);
    /* 0072f664: mov dword ptr [ebx + 0x3ec], edx */ W32((u32)(r_ebx+0x3ecu), r_edx);
    /* 0072f66a: sub esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0072f66c: call 0x858009 */ r_esp -= 4; W32(r_esp, 0x72f671u); f_00858009();
    /* 0072f671: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0072f675: mov edx, dword ptr [esp + 0x28] */ r_edx = R32((u32)(r_esp+0x28u));
    /* 0072f679: lea edx, [edx + edx + 2] */ r_edx = (u32)(r_edx+r_edx+0x2u);
    /* 0072f67d: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 0072f681: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0072f682: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x72f687u); f_008581c5();
    /* 0072f687: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0072f68b: lea edx, [esi + esi + 2] */ r_edx = (u32)(r_esi+r_esi+0x2u);
    /* 0072f68f: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 0072f693: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0072f694: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x72f699u); f_008581c5();
    /* 0072f699: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0072f69d: mov edx, dword ptr [esp + 0x28] */ r_edx = R32((u32)(r_esp+0x28u));
    /* 0072f6a1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0072f6a2: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x72f6a7u); f_008581c5();
    /* 0072f6a7: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 0072f6ab: mov edx, dword ptr [esp + 0x28] */ r_edx = R32((u32)(r_esp+0x28u));
    /* 0072f6af: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0072f6b0: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x72f6b5u); f_008581c5();
    /* 0072f6b5: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 0072f6b9: mov edx, dword ptr [esp + 0x28] */ r_edx = R32((u32)(r_esp+0x28u));
    /* 0072f6bd: lea edx, [edx + edx + 2] */ r_edx = (u32)(r_edx+r_edx+0x2u);
    /* 0072f6c1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0072f6c2: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x72f6c7u); f_008581c5();
    /* 0072f6c7: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 0072f6cb: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0072f6ce: call 0x840b9c */ r_esp -= 4; W32(r_esp, 0x72f6d3u); f_00840b9c();
    /* 0072f6d3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072f6d4: call 0x841950 */ r_esp -= 4; W32(r_esp, 0x72f6d9u); f_00841950();
    /* 0072f6d9: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0072f6dd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0072f6e0: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 0072f6e4: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0072f6e8: lea eax, [eax + eax] */ r_eax = (u32)(r_eax+r_eax);
    /* 0072f6eb: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0072f6ef: lea eax, [edx + eax] */ r_eax = (u32)(r_edx+r_eax);
    /* 0072f6f2: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 0072f6f6: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0072f6f8: jae 0x72f73b */ if (!fC) goto L_0072f73b;
L_0072f6fa:; BB(0x0072f6fa);
    /* 0072f6fa: sub eax, dword ptr [esp + 0x1c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x1cu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0072f6fe: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0072f701: jb 0x72f72a */ if (fC) goto L_0072f72a;
L_0072f703:; BB(0x0072f703);
    /* 0072f703: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0072f707: mov ecx, edx */ r_ecx = r_edx;
    /* 0072f709: lea eax, [eax + ecx - 0xc] */ r_eax = (u32)(r_eax+r_ecx+0xfffffff4u);
    /* 0072f70d: mov ecx, dword ptr [esp] */ r_ecx = R32((u32)(r_esp));
L_0072f710:; BB(0x0072f710);
    /* 0072f710: mov word ptr [edx], cx */ W16((u32)(r_edx), (u16)r_ecx);
    /* 0072f713: mov word ptr [edx + 2], cx */ W16((u32)(r_edx+0x2u), (u16)r_ecx);
    /* 0072f717: mov word ptr [edx + 4], cx */ W16((u32)(r_edx+0x4u), (u16)r_ecx);
    /* 0072f71b: mov word ptr [edx + 6], cx */ W16((u32)(r_edx+0x6u), (u16)r_ecx);
    /* 0072f71f: mov word ptr [edx + 8], cx */ W16((u32)(r_edx+0x8u), (u16)r_ecx);
    /* 0072f723: add edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0072f726: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0072f728: jbe 0x72f710 */ if ((fC||fZ)) goto L_0072f710;
L_0072f72a:; BB(0x0072f72a);
    /* 0072f72a: mov ecx, dword ptr [esp + 0x24] */ r_ecx = R32((u32)(r_esp+0x24u));
    /* 0072f72e: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
L_0072f731:; BB(0x0072f731);
    /* 0072f731: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
    /* 0072f734: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0072f737: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0072f739: jb 0x72f731 */ if (fC) goto L_0072f731;
L_0072f73b:; BB(0x0072f73b);
    /* 0072f73b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0072f73d: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
    /* 0072f740: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 0072f744: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0072f745: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0072f746: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 0072f74a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0072f74b: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x72f750u); f_00857dec();
    /* 0072f750: mov edx, dword ptr [esp + 0x2c] */ r_edx = R32((u32)(r_esp+0x2cu));
    /* 0072f754: lea eax, [ebx + 0x418] */ r_eax = (u32)(r_ebx+0x418u);
    /* 0072f75a: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0072f75e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0072f75f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072f760: mov edx, dword ptr [esp + 0x2c] */ r_edx = R32((u32)(r_esp+0x2cu));
    /* 0072f764: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0072f765: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x72f76au); f_00857dec();
    /* 0072f76a: mov ecx, dword ptr [esp + 0x24] */ r_ecx = R32((u32)(r_esp+0x24u));
    /* 0072f76e: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 0072f772: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0072f774: mov word ptr [ecx + eax*2], dx */ W16((u32)(r_ecx+r_eax*2), (u16)r_edx);
    /* 0072f778: mov ecx, dword ptr [esp + 0x30] */ r_ecx = R32((u32)(r_esp+0x30u));
    /* 0072f77c: mov word ptr [ecx + eax*2], dx */ W16((u32)(r_ecx+r_eax*2), (u16)r_edx);
    /* 0072f780: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0072f781: mov edx, dword ptr [ebx + 0x3ec] */ r_edx = R32((u32)(r_ebx+0x3ecu));
    /* 0072f787: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0072f789: lea edx, [ebx + edx + 0x2ec] */ r_edx = (u32)(r_ebx+r_edx+0x2ecu);
    /* 0072f790: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0072f791: mov edx, dword ptr [esp + 0x28] */ r_edx = R32((u32)(r_esp+0x28u));
    /* 0072f795: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0072f796: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x72f79bu); f_00857dec();
    /* 0072f79b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0072f79c: mov edx, dword ptr [ebx + 0x3ec] */ r_edx = R32((u32)(r_ebx+0x3ecu));
    /* 0072f7a2: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0072f7a4: lea edx, [ebx + edx + 0x418] */ r_edx = (u32)(r_ebx+r_edx+0x418u);
    /* 0072f7ab: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0072f7ac: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 0072f7b0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0072f7b1: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x72f7b6u); f_00857dec();
    /* 0072f7b6: mov edx, dword ptr [esp + 0x38] */ r_edx = R32((u32)(r_esp+0x38u));
    /* 0072f7ba: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0072f7bc: mov word ptr [edx + esi*2], ax */ W16((u32)(r_edx+r_esi*2), (u16)r_eax);
    /* 0072f7c0: mov edx, dword ptr [esp + 0x44] */ r_edx = R32((u32)(r_esp+0x44u));
    /* 0072f7c4: mov word ptr [edx + esi*2], ax */ W16((u32)(r_edx+r_esi*2), (u16)r_eax);
    /* 0072f7c8: mov edx, dword ptr [esp + 0x3c] */ r_edx = R32((u32)(r_esp+0x3cu));
    /* 0072f7cc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0072f7cd: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0072f7ce: call 0x857fed */ r_esp -= 4; W32(r_esp, 0x72f7d3u); f_00857fed();
    /* 0072f7d3: mov edx, dword ptr [esp + 0x50] */ r_edx = R32((u32)(r_esp+0x50u));
    /* 0072f7d7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0072f7d8: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 0072f7dc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0072f7dd: call 0x857fed */ r_esp -= 4; W32(r_esp, 0x72f7e2u); f_00857fed();
    /* 0072f7e2: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0072f7e5: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0072f7e9: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 0072f7ed: lea edx, [edx + eax] */ r_edx = (u32)(r_edx+r_eax);
    /* 0072f7f0: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0072f7f3: cmp edx, 0x7f */ {  u32 a = r_edx; u32 b = 0x7fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0072f7f6: jg 0x72f870 */ if ((!fZ&&fS==fO)) goto L_0072f870;
L_0072f7f8:; BB(0x0072f7f8);
    /* 0072f7f8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0072f7f9: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0072f7fa: call 0x857fc3 */ r_esp -= 4; W32(r_esp, 0x72f7ffu); f_00857fc3();
    /* 0072f7ff: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 0072f803: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0072f804: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 0072f808: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0072f809: call 0x857fc3 */ r_esp -= 4; W32(r_esp, 0x72f80eu); f_00857fc3();
    /* 0072f80e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0072f811: add esi, dword ptr [esp] */ {  u32 a = r_esi; u32 b = R32((u32)(r_esp)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0072f814: cmp esi, 0x7f */ {  u32 a = r_esi; u32 b = 0x7fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0072f817: jg 0x72f836 */ if ((!fZ&&fS==fO)) goto L_0072f836;
L_0072f819:; BB(0x0072f819);
    /* 0072f819: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0072f81d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072f81e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0072f81f: call 0x857fc3 */ r_esp -= 4; W32(r_esp, 0x72f824u); f_00857fc3();
    /* 0072f824: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0072f828: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072f829: mov edx, ebp */ r_edx = r_ebp;
    /* 0072f82b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0072f82c: call 0x857fc3 */ r_esp -= 4; W32(r_esp, 0x72f831u); f_00857fc3();
    /* 0072f831: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0072f834: jmp 0x72f8a5 */ goto L_0072f8a5;
L_0072f836:; BB(0x0072f836);
    /* 0072f836: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 0072f839: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 0072f83d: mov ebp, dword ptr [esp + 0x14] */ r_ebp = R32((u32)(r_esp+0x14u));
    /* 0072f841: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0072f842: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0072f844: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0072f845: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0072f847: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0072f849: mov word ptr [edx + esi + 0xfe], ax */ W16((u32)(r_edx+r_esi+0xfeu), (u16)r_eax);
    /* 0072f851: mov word ptr [edx + ebp + 0xfe], ax */ W16((u32)(r_edx+r_ebp+0xfeu), (u16)r_eax);
    /* 0072f859: call 0x857fc3 */ r_esp -= 4; W32(r_esp, 0x72f85eu); f_00857fc3();
    /* 0072f85e: mov eax, ebp */ r_eax = r_ebp;
    /* 0072f860: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072f861: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0072f865: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0072f866: call 0x857fc3 */ r_esp -= 4; W32(r_esp, 0x72f86bu); f_00857fc3();
    /* 0072f86b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0072f86e: jmp 0x72f8a5 */ goto L_0072f8a5;
L_0072f870:; BB(0x0072f870);
    /* 0072f870: mov esi, eax */ r_esi = r_eax;
    /* 0072f872: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 0072f876: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0072f877: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0072f879: neg esi */ { u32 x = r_esi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0072f87b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0072f87c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0072f87e: mov word ptr [ebx + esi + 0x15e], ax */ W16((u32)(r_ebx+r_esi+0x15eu), (u16)r_eax);
    /* 0072f886: mov word ptr [edx + esi + 0xfe], ax */ W16((u32)(r_edx+r_esi+0xfeu), (u16)r_eax);
    /* 0072f88e: call 0x857fc3 */ r_esp -= 4; W32(r_esp, 0x72f893u); f_00857fc3();
    /* 0072f893: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 0072f897: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072f898: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0072f89c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0072f89d: call 0x857fc3 */ r_esp -= 4; W32(r_esp, 0x72f8a2u); f_00857fc3();
    /* 0072f8a2: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0072f8a5:; BB(0x0072f8a5);
    /* 0072f8a5: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0072f8a9: add dword ptr [ebx + 0x3ec], eax */ { u32 ad = (u32)(r_ebx+0x3ecu);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0072f8af: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0072f8b0: call 0x858009 */ r_esp -= 4; W32(r_esp, 0x72f8b5u); f_00858009();
    /* 0072f8b5: mov edx, dword ptr [ebx + 0x3ec] */ r_edx = R32((u32)(r_ebx+0x3ecu));
    /* 0072f8bb: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0072f8bd: jl 0x72f8c1 */ if ((fS!=fO)) goto L_0072f8c1;
L_0072f8bf:; BB(0x0072f8bf);
    /* 0072f8bf: mov edx, eax */ r_edx = r_eax;
L_0072f8c1:; BB(0x0072f8c1);
    /* 0072f8c1: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0072f8c5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072f8c6: mov dword ptr [ebx + 0x3ec], edx */ W32((u32)(r_ebx+0x3ecu), r_edx);
    /* 0072f8cc: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x72f8d1u); f_00857e98();
    /* 0072f8d1: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0072f8d5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072f8d6: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x72f8dbu); f_00857e98();
    /* 0072f8db: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 0072f8df: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072f8e0: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x72f8e5u); f_00857e98();
    /* 0072f8e5: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 0072f8e9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072f8ea: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x72f8efu); f_00857e98();
    /* 0072f8ef: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 0072f8f3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072f8f4: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x72f8f9u); f_00857e98();
    /* 0072f8f9: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0072f8fc: mov eax, dword ptr [ebx + 0x3f0] */ r_eax = R32((u32)(r_ebx+0x3f0u));
    /* 0072f902: test eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072f907: jne 0x72f945 */ if (!fZ) goto L_0072f945;
L_0072f909:; BB(0x0072f909);
    /* 0072f909: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0072f90a: call 0x858009 */ r_esp -= 4; W32(r_esp, 0x72f90fu); f_00858009();
    /* 0072f90f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0072f910: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072f912: je 0x72f945 */ if (fZ) goto L_0072f945;
L_0072f914:; BB(0x0072f914);
    /* 0072f914: movzx ebp, word ptr [ebx + 0x418] */ r_ebp = (u32)R16((u32)(r_ebx+0x418u));
    /* 0072f91b: mov esi, 1 */ r_esi = 0x1u;
    /* 0072f920: lea edx, [ebx + 0x41a] */ r_edx = (u32)(r_ebx+0x41au);
    /* 0072f926: movzx eax, word ptr [edx] */ r_eax = (u32)R16((u32)(r_edx));
    /* 0072f929: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072f92b: je 0x72f941 */ if (fZ) goto L_0072f941;
L_0072f92d:; BB(0x0072f92d);
    /* 0072f92d: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072f92f: je 0x72f936 */ if (fZ) goto L_0072f936;
L_0072f931:; BB(0x0072f931);
    /* 0072f931: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0072f934: mov ebp, eax */ r_ebp = r_eax;
L_0072f936:; BB(0x0072f936);
    /* 0072f936: movzx eax, word ptr [edx + 2] */ r_eax = (u32)R16((u32)(r_edx+0x2u));
    /* 0072f93a: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0072f93d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072f93f: jne 0x72f92d */ if (!fZ) goto L_0072f92d;
L_0072f941:; BB(0x0072f941);
    /* 0072f941: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0072f943: jmp 0x72f947 */ goto L_0072f947;
L_0072f945:; BB(0x0072f945);
    /* 0072f945: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_0072f947:; BB(0x0072f947);
    /* 0072f947: mov ebp, dword ptr [ebx + 0x3f4] */ r_ebp = R32((u32)(r_ebx+0x3f4u));
    /* 0072f94d: sub ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 0072f94f: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0072f951: jle 0x72f976 */ if ((fZ||fS!=fO)) goto L_0072f976;
L_0072f953:; BB(0x0072f953);
    /* 0072f953: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0072f954: call 0x858009 */ r_esp -= 4; W32(r_esp, 0x72f959u); f_00858009();
    /* 0072f959: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0072f95a: cmp eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0072f95c: jbe 0x72f976 */ if ((fC||fZ)) goto L_0072f976;
L_0072f95e:; BB(0x0072f95e);
    /* 0072f95e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0072f960: mov word ptr [ebx + ebp*2 + 0x2ec], ax */ W16((u32)(r_ebx+r_ebp*2+0x2ecu), (u16)r_eax);
    /* 0072f968: mov word ptr [ebx + ebp*2 + 0x418], ax */ W16((u32)(r_ebx+r_ebp*2+0x418u), (u16)r_eax);
    /* 0072f970: mov dword ptr [ebx + 0x3ec], ebp */ W32((u32)(r_ebx+0x3ecu), r_ebp);
L_0072f976:; BB(0x0072f976);
    /* 0072f976: call 0x840b84 */ r_esp -= 4; W32(r_esp, 0x72f97bu); f_00840b84();
L_0072f97b:; BB(0x0072f97b);
    /* 0072f97b: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0072f97e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072f97f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0072f980: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0072f981: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0072f982: ret  */ FN_RET(0x0072f4a8); r_esp += 4; return;
L_0072f983:; BB(0x0072f983);
    /* 0072f983: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0072f985: call 0x72fd94 */ r_esp -= 4; W32(r_esp, 0x72f98au); f_0072fd94();
    /* 0072f98a: mov ebp, eax */ r_ebp = r_eax;
    /* 0072f98c: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072f98e: je 0x72fa31 */ if (fZ) goto L_0072fa31;
L_0072f994:; BB(0x0072f994);
    /* 0072f994: lea edx, [ebx + 0x160] */ r_edx = (u32)(r_ebx+0x160u);
    /* 0072f99a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0072f99b: call 0x858009 */ r_esp -= 4; W32(r_esp, 0x72f9a0u); f_00858009();
    /* 0072f9a0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0072f9a1: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072f9a4: jne 0x72fa31 */ if (!fZ) goto L_0072fa31;
L_0072f9aa:; BB(0x0072f9aa);
    /* 0072f9aa: mov edx, dword ptr [ebx + 0x260] */ r_edx = R32((u32)(r_ebx+0x260u));
    /* 0072f9b0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072f9b2: jne 0x72fa28 */ if (!fZ) goto L_0072fa28;
L_0072f9b4:; BB(0x0072f9b4);
    /* 0072f9b4: call 0x8411f0 */ r_esp -= 4; W32(r_esp, 0x72f9b9u); f_008411f0();
    /* 0072f9b9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072f9bb: je 0x72f9cf */ if (fZ) goto L_0072f9cf;
L_0072f9bd:; BB(0x0072f9bd);
    /* 0072f9bd: mov edx, dword ptr [ebx + 0x620] */ r_edx = R32((u32)(r_ebx+0x620u));
    /* 0072f9c3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0072f9c5: jle 0x72f9cf */ if ((fZ||fS!=fO)) goto L_0072f9cf;
L_0072f9c7:; BB(0x0072f9c7);
    /* 0072f9c7: mov edx, dword ptr [ebx + 0x260] */ r_edx = R32((u32)(r_ebx+0x260u));
    /* 0072f9cd: jmp 0x72fa28 */ goto L_0072fa28;
L_0072f9cf:; BB(0x0072f9cf);
    /* 0072f9cf: call 0x82d2a4 */ r_esp -= 4; W32(r_esp, 0x72f9d4u); f_0082d2a4();
    /* 0072f9d4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072f9d6: je 0x72f9ea */ if (fZ) goto L_0072f9ea;
L_0072f9d8:; BB(0x0072f9d8);
    /* 0072f9d8: mov edx, dword ptr [ebx + 0x620] */ r_edx = R32((u32)(r_ebx+0x620u));
    /* 0072f9de: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0072f9e0: jle 0x72f9ea */ if ((fZ||fS!=fO)) goto L_0072f9ea;
L_0072f9e2:; BB(0x0072f9e2);
    /* 0072f9e2: mov edx, dword ptr [ebx + 0x260] */ r_edx = R32((u32)(r_ebx+0x260u));
    /* 0072f9e8: jmp 0x72fa28 */ goto L_0072fa28;
L_0072f9ea:; BB(0x0072f9ea);
    /* 0072f9ea: mov edx, dword ptr [ebx + 0x414] */ r_edx = R32((u32)(r_ebx+0x414u));
    /* 0072f9f0: cmp edx, 0x4e */ {  u32 a = r_edx; u32 b = 0x4eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072f9f3: je 0x72fa01 */ if (fZ) goto L_0072fa01;
L_0072f9f5:; BB(0x0072f9f5);
    /* 0072f9f5: push 0x4e */ { u32 v = 0x4eu; r_esp -= 4; W32(r_esp, v); }
    /* 0072f9f7: call 0x7bfe50 */ r_esp -= 4; W32(r_esp, 0x72f9fcu); f_007bfe50();
    /* 0072f9fc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0072f9fd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072f9ff: je 0x72fa22 */ if (fZ) goto L_0072fa22;
L_0072fa01:; BB(0x0072fa01);
    /* 0072fa01: mov dword ptr [ebx + 0x518], 2 */ W32((u32)(r_ebx+0x518u), 0x2u);
    /* 0072fa0b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0072fa0d: mov dword ptr [ebx + 0x260], eax */ W32((u32)(r_ebx+0x260u), r_eax);
    /* 0072fa13: mov word ptr [ebx + 0x160], ax */ W16((u32)(r_ebx+0x160u), (u16)r_eax);
    /* 0072fa1a: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0072fa1d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072fa1e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0072fa1f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0072fa20: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0072fa21: ret  */ FN_RET(0x0072f4a8); r_esp += 4; return;
L_0072fa22:; BB(0x0072fa22);
    /* 0072fa22: mov edx, dword ptr [ebx + 0x260] */ r_edx = R32((u32)(r_ebx+0x260u));
L_0072fa28:; BB(0x0072fa28);
    /* 0072fa28: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072fa2b: je 0x72fc26 */ if (fZ) goto L_0072fc26;
L_0072fa31:; BB(0x0072fa31);
    /* 0072fa31: mov edx, dword ptr [ebx + 0x518] */ r_edx = R32((u32)(r_ebx+0x518u));
    /* 0072fa37: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072fa39: jne 0x72f97b */ if (!fZ) goto L_0072f97b;
L_0072fa3f:; BB(0x0072fa3f);
    /* 0072fa3f: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072fa41: jne 0x72f97b */ if (!fZ) goto L_0072f97b;
L_0072fa47:; BB(0x0072fa47);
    /* 0072fa47: lea eax, [ebx + 0x2ec] */ r_eax = (u32)(r_ebx+0x2ecu);
    /* 0072fa4d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072fa4e: call 0x858009 */ r_esp -= 4; W32(r_esp, 0x72fa53u); f_00858009();
    /* 0072fa53: mov esi, eax */ r_esi = r_eax;
    /* 0072fa55: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0072fa58: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0072fa5a: cmp esi, 0x7f */ {  u32 a = r_esi; u32 b = 0x7fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0072fa5d: jle 0x72fa74 */ if ((fZ||fS!=fO)) goto L_0072fa74;
L_0072fa5f:; BB(0x0072fa5f);
    /* 0072fa5f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0072fa61: mov word ptr [ebx + 0x3ea], ax */ W16((u32)(r_ebx+0x3eau), (u16)r_eax);
    /* 0072fa68: mov word ptr [ebx + 0x516], ax */ W16((u32)(r_ebx+0x516u), (u16)r_eax);
    /* 0072fa6f: mov esi, 0x7f */ r_esi = 0x7fu;
L_0072fa74:; BB(0x0072fa74);
    /* 0072fa74: call 0x8411f0 */ r_esp -= 4; W32(r_esp, 0x72fa79u); f_008411f0();
    /* 0072fa79: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072fa7b: je 0x72fa87 */ if (fZ) goto L_0072fa87;
L_0072fa7d:; BB(0x0072fa7d);
    /* 0072fa7d: mov edx, dword ptr [ebx + 0x620] */ r_edx = R32((u32)(r_ebx+0x620u));
    /* 0072fa83: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0072fa85: jg 0x72fab8 */ if ((!fZ&&fS==fO)) goto L_0072fab8;
L_0072fa87:; BB(0x0072fa87);
    /* 0072fa87: call 0x82d2a4 */ r_esp -= 4; W32(r_esp, 0x72fa8cu); f_0082d2a4();
    /* 0072fa8c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072fa8e: je 0x72fa9a */ if (fZ) goto L_0072fa9a;
L_0072fa90:; BB(0x0072fa90);
    /* 0072fa90: mov edx, dword ptr [ebx + 0x620] */ r_edx = R32((u32)(r_ebx+0x620u));
    /* 0072fa96: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0072fa98: jg 0x72fab8 */ if ((!fZ&&fS==fO)) goto L_0072fab8;
L_0072fa9a:; BB(0x0072fa9a);
    /* 0072fa9a: mov edx, dword ptr [ebx + 0x414] */ r_edx = R32((u32)(r_ebx+0x414u));
    /* 0072faa0: cmp edx, 0x5f */ {  u32 a = r_edx; u32 b = 0x5fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072faa3: je 0x72fab1 */ if (fZ) goto L_0072fab1;
L_0072faa5:; BB(0x0072faa5);
    /* 0072faa5: push 0x5f */ { u32 v = 0x5fu; r_esp -= 4; W32(r_esp, v); }
    /* 0072faa7: call 0x7bfe50 */ r_esp -= 4; W32(r_esp, 0x72faacu); f_007bfe50();
    /* 0072faac: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0072faad: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072faaf: je 0x72fab8 */ if (fZ) goto L_0072fab8;
L_0072fab1:; BB(0x0072fab1);
    /* 0072fab1: mov ebp, 1 */ r_ebp = 0x1u;
    /* 0072fab6: jmp 0x72fafa */ goto L_0072fafa;
L_0072fab8:; BB(0x0072fab8);
    /* 0072fab8: call 0x8411f0 */ r_esp -= 4; W32(r_esp, 0x72fabdu); f_008411f0();
    /* 0072fabd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072fabf: je 0x72facb */ if (fZ) goto L_0072facb;
L_0072fac1:; BB(0x0072fac1);
    /* 0072fac1: mov edx, dword ptr [ebx + 0x620] */ r_edx = R32((u32)(r_ebx+0x620u));
    /* 0072fac7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0072fac9: jg 0x72fafa */ if ((!fZ&&fS==fO)) goto L_0072fafa;
L_0072facb:; BB(0x0072facb);
    /* 0072facb: call 0x82d2a4 */ r_esp -= 4; W32(r_esp, 0x72fad0u); f_0082d2a4();
    /* 0072fad0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072fad2: je 0x72fade */ if (fZ) goto L_0072fade;
L_0072fad4:; BB(0x0072fad4);
    /* 0072fad4: mov edx, dword ptr [ebx + 0x620] */ r_edx = R32((u32)(r_ebx+0x620u));
    /* 0072fada: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0072fadc: jg 0x72fafa */ if ((!fZ&&fS==fO)) goto L_0072fafa;
L_0072fade:; BB(0x0072fade);
    /* 0072fade: mov edx, dword ptr [ebx + 0x414] */ r_edx = R32((u32)(r_ebx+0x414u));
    /* 0072fae4: cmp edx, 0x5c */ {  u32 a = r_edx; u32 b = 0x5cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072fae7: je 0x72faf5 */ if (fZ) goto L_0072faf5;
L_0072fae9:; BB(0x0072fae9);
    /* 0072fae9: push 0x5c */ { u32 v = 0x5cu; r_esp -= 4; W32(r_esp, v); }
    /* 0072faeb: call 0x7bfe50 */ r_esp -= 4; W32(r_esp, 0x72faf0u); f_007bfe50();
    /* 0072faf0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0072faf1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072faf3: je 0x72fafa */ if (fZ) goto L_0072fafa;
L_0072faf5:; BB(0x0072faf5);
    /* 0072faf5: mov ebp, 0xffffffff */ r_ebp = 0xffffffffu;
L_0072fafa:; BB(0x0072fafa);
    /* 0072fafa: add ebp, dword ptr [ebx + 0x3ec] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_ebx+0x3ecu)); u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0072fb00: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0072fb02: jl 0x72fd07 */ if ((fS!=fO)) goto L_0072fd07;
L_0072fb08:; BB(0x0072fb08);
    /* 0072fb08: cmp ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0072fb0a: jl 0x72fb0e */ if ((fS!=fO)) goto L_0072fb0e;
L_0072fb0c:; BB(0x0072fb0c);
    /* 0072fb0c: mov ebp, esi */ r_ebp = r_esi;
L_0072fb0e:; BB(0x0072fb0e);
    /* 0072fb0e: mov dword ptr [ebx + 0x3ec], ebp */ W32((u32)(r_ebx+0x3ecu), r_ebp);
L_0072fb14:; BB(0x0072fb14);
    /* 0072fb14: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0072fb16: jle 0x72fc89 */ if ((fZ||fS!=fO)) goto L_0072fc89;
L_0072fb1c:; BB(0x0072fb1c);
    /* 0072fb1c: call 0x8411f0 */ r_esp -= 4; W32(r_esp, 0x72fb21u); f_008411f0();
    /* 0072fb21: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072fb23: je 0x72fb2f */ if (fZ) goto L_0072fb2f;
L_0072fb25:; BB(0x0072fb25);
    /* 0072fb25: mov edx, dword ptr [ebx + 0x620] */ r_edx = R32((u32)(r_ebx+0x620u));
    /* 0072fb2b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0072fb2d: jg 0x72fb6a */ if ((!fZ&&fS==fO)) goto L_0072fb6a;
L_0072fb2f:; BB(0x0072fb2f);
    /* 0072fb2f: call 0x82d2a4 */ r_esp -= 4; W32(r_esp, 0x72fb34u); f_0082d2a4();
    /* 0072fb34: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072fb36: je 0x72fb42 */ if (fZ) goto L_0072fb42;
L_0072fb38:; BB(0x0072fb38);
    /* 0072fb38: mov edx, dword ptr [ebx + 0x620] */ r_edx = R32((u32)(r_ebx+0x620u));
    /* 0072fb3e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0072fb40: jg 0x72fb6a */ if ((!fZ&&fS==fO)) goto L_0072fb6a;
L_0072fb42:; BB(0x0072fb42);
    /* 0072fb42: mov edx, dword ptr [ebx + 0x414] */ r_edx = R32((u32)(r_ebx+0x414u));
    /* 0072fb48: cmp edx, 0x50 */ {  u32 a = r_edx; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072fb4b: je 0x72fb59 */ if (fZ) goto L_0072fb59;
L_0072fb4d:; BB(0x0072fb4d);
    /* 0072fb4d: push 0x50 */ { u32 v = 0x50u; r_esp -= 4; W32(r_esp, v); }
    /* 0072fb4f: call 0x7bfe50 */ r_esp -= 4; W32(r_esp, 0x72fb54u); f_007bfe50();
    /* 0072fb54: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0072fb55: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072fb57: je 0x72fb6a */ if (fZ) goto L_0072fb6a;
L_0072fb59:; BB(0x0072fb59);
    /* 0072fb59: mov edx, dword ptr [ebx + 0x3ec] */ r_edx = R32((u32)(r_ebx+0x3ecu));
    /* 0072fb5f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0072fb61: jle 0x72fb6a */ if ((fZ||fS!=fO)) goto L_0072fb6a;
L_0072fb63:; BB(0x0072fb63);
    /* 0072fb63: mov ebp, 1 */ r_ebp = 0x1u;
    /* 0072fb68: jmp 0x72fb6c */ goto L_0072fb6c;
L_0072fb6a:; BB(0x0072fb6a);
    /* 0072fb6a: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
L_0072fb6c:; BB(0x0072fb6c);
    /* 0072fb6c: call 0x8411f0 */ r_esp -= 4; W32(r_esp, 0x72fb71u); f_008411f0();
    /* 0072fb71: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072fb73: je 0x72fb7f */ if (fZ) goto L_0072fb7f;
L_0072fb75:; BB(0x0072fb75);
    /* 0072fb75: mov edx, dword ptr [ebx + 0x620] */ r_edx = R32((u32)(r_ebx+0x620u));
    /* 0072fb7b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0072fb7d: jg 0x72fbb8 */ if ((!fZ&&fS==fO)) goto L_0072fbb8;
L_0072fb7f:; BB(0x0072fb7f);
    /* 0072fb7f: call 0x82d2a4 */ r_esp -= 4; W32(r_esp, 0x72fb84u); f_0082d2a4();
    /* 0072fb84: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072fb86: je 0x72fb92 */ if (fZ) goto L_0072fb92;
L_0072fb88:; BB(0x0072fb88);
    /* 0072fb88: mov edx, dword ptr [ebx + 0x620] */ r_edx = R32((u32)(r_ebx+0x620u));
    /* 0072fb8e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0072fb90: jg 0x72fbb8 */ if ((!fZ&&fS==fO)) goto L_0072fbb8;
L_0072fb92:; BB(0x0072fb92);
    /* 0072fb92: mov edx, dword ptr [ebx + 0x414] */ r_edx = R32((u32)(r_ebx+0x414u));
    /* 0072fb98: cmp edx, 0x4e */ {  u32 a = r_edx; u32 b = 0x4eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072fb9b: je 0x72fba9 */ if (fZ) goto L_0072fba9;
L_0072fb9d:; BB(0x0072fb9d);
    /* 0072fb9d: push 0x4e */ { u32 v = 0x4eu; r_esp -= 4; W32(r_esp, v); }
    /* 0072fb9f: call 0x7bfe50 */ r_esp -= 4; W32(r_esp, 0x72fba4u); f_007bfe50();
    /* 0072fba4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0072fba5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072fba7: je 0x72fbb8 */ if (fZ) goto L_0072fbb8;
L_0072fba9:; BB(0x0072fba9);
    /* 0072fba9: cmp esi, dword ptr [ebx + 0x3ec] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebx+0x3ecu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0072fbaf: jle 0x72fbb8 */ if ((fZ||fS!=fO)) goto L_0072fbb8;
L_0072fbb1:; BB(0x0072fbb1);
    /* 0072fbb1: mov eax, 1 */ r_eax = 0x1u;
    /* 0072fbb6: jmp 0x72fbba */ goto L_0072fbba;
L_0072fbb8:; BB(0x0072fbb8);
    /* 0072fbb8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0072fbba:; BB(0x0072fbba);
    /* 0072fbba: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072fbbc: jne 0x72fbce */ if (!fZ) goto L_0072fbce;
L_0072fbbe:; BB(0x0072fbbe);
    /* 0072fbbe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072fbc0: je 0x72f97b */ if (fZ) goto L_0072f97b;
L_0072fbc6:; BB(0x0072fbc6);
    /* 0072fbc6: mov eax, dword ptr [ebx + 0x3ec] */ r_eax = R32((u32)(r_ebx+0x3ecu));
    /* 0072fbcc: jmp 0x72fbdd */ goto L_0072fbdd;
L_0072fbce:; BB(0x0072fbce);
    /* 0072fbce: mov eax, dword ptr [ebx + 0x3ec] */ r_eax = R32((u32)(r_ebx+0x3ecu));
    /* 0072fbd4: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0072fbd7: mov dword ptr [ebx + 0x3ec], eax */ W32((u32)(r_ebx+0x3ecu), r_eax);
L_0072fbdd:; BB(0x0072fbdd);
    /* 0072fbdd: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0072fbdf: lea ebp, [ebx + eax + 0x2ec] */ r_ebp = (u32)(r_ebx+r_eax+0x2ecu);
    /* 0072fbe6: lea edi, [ebp + 2] */ r_edi = (u32)(r_ebp+0x2u);
    /* 0072fbe9: mov esi, edi */ r_esi = r_edi;
    /* 0072fbeb: lea ecx, [ebx + eax + 0x418] */ r_ecx = (u32)(r_ebx+r_eax+0x418u);
    /* 0072fbf2: movzx ebx, word ptr [edi] */ r_ebx = (u32)R16((u32)(r_edi));
    /* 0072fbf5: lea edx, [ecx + 2] */ r_edx = (u32)(r_ecx+0x2u);
    /* 0072fbf8: mov eax, edx */ r_eax = r_edx;
    /* 0072fbfa: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072fbfc: je 0x72fc78 */ if (fZ) goto L_0072fc78;
L_0072fbfe:; BB(0x0072fbfe);
    /* 0072fbfe: movzx ebx, word ptr [edi] */ r_ebx = (u32)R16((u32)(r_edi));
    /* 0072fc01: jmp 0x72fc09 */ goto L_0072fc09;
L_0072fc03:; BB(0x0072fc03);
    /* 0072fc03: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0072fc06: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
L_0072fc09:; BB(0x0072fc09);
    /* 0072fc09: mov word ptr [ebp], bx */ W16((u32)(r_ebp), (u16)r_ebx);
    /* 0072fc0d: movzx ebx, word ptr [eax] */ r_ebx = (u32)R16((u32)(r_eax));
    /* 0072fc10: mov word ptr [ecx], bx */ W16((u32)(r_ecx), (u16)r_ebx);
    /* 0072fc13: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0072fc16: movzx ebx, word ptr [esi] */ r_ebx = (u32)R16((u32)(r_esi));
    /* 0072fc19: mov ebp, edi */ r_ebp = r_edi;
    /* 0072fc1b: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0072fc1e: mov ecx, edx */ r_ecx = r_edx;
    /* 0072fc20: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072fc22: jne 0x72fc03 */ if (!fZ) goto L_0072fc03;
L_0072fc24:; BB(0x0072fc24);
    /* 0072fc24: jmp 0x72fc78 */ goto L_0072fc78;
L_0072fc26:; BB(0x0072fc26);
    /* 0072fc26: call 0x8411f0 */ r_esp -= 4; W32(r_esp, 0x72fc2bu); f_008411f0();
    /* 0072fc2b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072fc2d: je 0x72fc3d */ if (fZ) goto L_0072fc3d;
L_0072fc2f:; BB(0x0072fc2f);
    /* 0072fc2f: mov edx, dword ptr [ebx + 0x620] */ r_edx = R32((u32)(r_ebx+0x620u));
    /* 0072fc35: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0072fc37: jg 0x72fa31 */ if ((!fZ&&fS==fO)) goto L_0072fa31;
L_0072fc3d:; BB(0x0072fc3d);
    /* 0072fc3d: call 0x82d2a4 */ r_esp -= 4; W32(r_esp, 0x72fc42u); f_0082d2a4();
    /* 0072fc42: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072fc44: je 0x72fc54 */ if (fZ) goto L_0072fc54;
L_0072fc46:; BB(0x0072fc46);
    /* 0072fc46: mov edx, dword ptr [ebx + 0x620] */ r_edx = R32((u32)(r_ebx+0x620u));
    /* 0072fc4c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0072fc4e: jg 0x72fa31 */ if ((!fZ&&fS==fO)) goto L_0072fa31;
L_0072fc54:; BB(0x0072fc54);
    /* 0072fc54: mov edx, dword ptr [ebx + 0x414] */ r_edx = R32((u32)(r_ebx+0x414u));
    /* 0072fc5a: cmp edx, 0x50 */ {  u32 a = r_edx; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072fc5d: je 0x72fa01 */ if (fZ) goto L_0072fa01;
L_0072fc63:; BB(0x0072fc63);
    /* 0072fc63: push 0x50 */ { u32 v = 0x50u; r_esp -= 4; W32(r_esp, v); }
    /* 0072fc65: call 0x7bfe50 */ r_esp -= 4; W32(r_esp, 0x72fc6au); f_007bfe50();
    /* 0072fc6a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0072fc6b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072fc6d: jne 0x72fa01 */ if (!fZ) goto L_0072fa01;
L_0072fc73:; BB(0x0072fc73);
    /* 0072fc73: jmp 0x72fa31 */ goto L_0072fa31;
L_0072fc78:; BB(0x0072fc78);
    /* 0072fc78: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0072fc7a: mov word ptr [ebp], ax */ W16((u32)(r_ebp), (u16)r_eax);
    /* 0072fc7e: mov word ptr [ecx], ax */ W16((u32)(r_ecx), (u16)r_eax);
    /* 0072fc81: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0072fc84: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072fc85: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0072fc86: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0072fc87: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0072fc88: ret  */ FN_RET(0x0072f4a8); r_esp += 4; return;
L_0072fc89:; BB(0x0072fc89);
    /* 0072fc89: call 0x8411f0 */ r_esp -= 4; W32(r_esp, 0x72fc8eu); f_008411f0();
    /* 0072fc8e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072fc90: je 0x72fca0 */ if (fZ) goto L_0072fca0;
L_0072fc92:; BB(0x0072fc92);
    /* 0072fc92: mov eax, dword ptr [ebx + 0x620] */ r_eax = R32((u32)(r_ebx+0x620u));
    /* 0072fc98: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0072fc9a: jg 0x72f97b */ if ((!fZ&&fS==fO)) goto L_0072f97b;
L_0072fca0:; BB(0x0072fca0);
    /* 0072fca0: call 0x82d2a4 */ r_esp -= 4; W32(r_esp, 0x72fca5u); f_0082d2a4();
    /* 0072fca5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072fca7: je 0x72fcb7 */ if (fZ) goto L_0072fcb7;
L_0072fca9:; BB(0x0072fca9);
    /* 0072fca9: mov eax, dword ptr [ebx + 0x620] */ r_eax = R32((u32)(r_ebx+0x620u));
    /* 0072fcaf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0072fcb1: jg 0x72f97b */ if ((!fZ&&fS==fO)) goto L_0072f97b;
L_0072fcb7:; BB(0x0072fcb7);
    /* 0072fcb7: mov eax, dword ptr [ebx + 0x414] */ r_eax = R32((u32)(r_ebx+0x414u));
    /* 0072fcbd: cmp eax, 0x50 */ {  u32 a = r_eax; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072fcc0: je 0x72fcd2 */ if (fZ) goto L_0072fcd2;
L_0072fcc2:; BB(0x0072fcc2);
    /* 0072fcc2: push 0x50 */ { u32 v = 0x50u; r_esp -= 4; W32(r_esp, v); }
    /* 0072fcc4: call 0x7bfe50 */ r_esp -= 4; W32(r_esp, 0x72fcc9u); f_007bfe50();
    /* 0072fcc9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0072fcca: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072fccc: je 0x72f97b */ if (fZ) goto L_0072f97b;
L_0072fcd2:; BB(0x0072fcd2);
    /* 0072fcd2: mov eax, dword ptr [ebx + 0x3f0] */ r_eax = R32((u32)(r_ebx+0x3f0u));
    /* 0072fcd8: or eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0072fcdb: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0072fcde: mov dword ptr [ebx + 0x3f0], eax */ W32((u32)(r_ebx+0x3f0u), r_eax);
    /* 0072fce4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0072fce6: call 0x72f248 */ r_esp -= 4; W32(r_esp, 0x72fcebu); f_0072f248();
    /* 0072fceb: call 0x793228 */ r_esp -= 4; W32(r_esp, 0x72fcf0u); f_00793228();
    /* 0072fcf0: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 0072fcf3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072fcf4: call 0x841978 */ r_esp -= 4; W32(r_esp, 0x72fcf9u); f_00841978();
    /* 0072fcf9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0072fcfa: call 0x70a5ec */ r_esp -= 4; W32(r_esp, 0x72fcffu); f_0070a5ec();
    /* 0072fcff: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0072fd02: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072fd03: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0072fd04: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0072fd05: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0072fd06: ret  */ FN_RET(0x0072f4a8); r_esp += 4; return;
L_0072fd07:; BB(0x0072fd07);
    /* 0072fd07: mov dword ptr [ebx + 0x3ec], 0 */ W32((u32)(r_ebx+0x3ecu), 0x0u);
    /* 0072fd11: jmp 0x72fb14 */ goto L_0072fb14;
}

void f_0072fd18(void) /* sub_72FD18 */
{
    FN_ENTER(0x0072fd18);
    /* 0072fd18: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0072fd19: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0072fd1a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0072fd1b: mov edi, ecx */ r_edi = r_ecx;
    /* 0072fd1d: call 0x840fc8 */ r_esp -= 4; W32(r_esp, 0x72fd22u); f_00840fc8();
    /* 0072fd22: mov ebp, eax */ r_ebp = r_eax;
    /* 0072fd24: movzx edx, word ptr [edi + 0x51c] */ r_edx = (u32)R16((u32)(r_edi+0x51cu));
    /* 0072fd2b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072fd2d: jne 0x72fd50 */ if (!fZ) goto L_0072fd50;
L_0072fd2f:; BB(0x0072fd2f);
    /* 0072fd2f: push 0x7f */ { u32 v = 0x7fu; r_esp -= 4; W32(r_esp, v); }
    /* 0072fd31: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0072fd32: lea edx, [edi + 0x51c] */ r_edx = (u32)(r_edi+0x51cu);
    /* 0072fd38: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0072fd39: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x72fd3eu); f_00857dec();
    /* 0072fd3e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0072fd40: mov word ptr [edi + 0x61a], dx */ W16((u32)(r_edi+0x61au), (u16)r_edx);
    /* 0072fd47: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0072fd49: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0072fd4c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072fd4d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0072fd4e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0072fd4f: ret  */ FN_RET(0x0072fd18); r_esp += 4; return;
L_0072fd50:; BB(0x0072fd50);
    /* 0072fd50: push 0x7f */ { u32 v = 0x7fu; r_esp -= 4; W32(r_esp, v); }
    /* 0072fd52: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0072fd53: lea ebx, [edi + 0x51c] */ r_ebx = (u32)(r_edi+0x51cu);
    /* 0072fd59: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0072fd5a: call 0x858643 */ r_esp -= 4; W32(r_esp, 0x72fd5fu); f_00858643();
    /* 0072fd5f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0072fd62: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072fd64: je 0x72fd8e */ if (fZ) goto L_0072fd8e;
L_0072fd66:; BB(0x0072fd66);
    /* 0072fd66: push 0x7f */ { u32 v = 0x7fu; r_esp -= 4; W32(r_esp, v); }
    /* 0072fd68: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0072fd69: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0072fd6a: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x72fd6fu); f_00857dec();
    /* 0072fd6f: mov dword ptr [edi + 0x61c], 1 */ W32((u32)(r_edi+0x61cu), 0x1u);
    /* 0072fd79: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0072fd7b: mov word ptr [edi + 0x61a], dx */ W16((u32)(r_edi+0x61au), (u16)r_edx);
    /* 0072fd82: mov eax, 1 */ r_eax = 0x1u;
    /* 0072fd87: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0072fd8a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072fd8b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0072fd8c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0072fd8d: ret  */ FN_RET(0x0072fd18); r_esp += 4; return;
L_0072fd8e:; BB(0x0072fd8e);
    /* 0072fd8e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0072fd90: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072fd91: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0072fd92: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0072fd93: ret  */ FN_RET(0x0072fd18); r_esp += 4; return;
}

void f_0072fd94(void) /* sub_72FD94 */
{
    FN_ENTER(0x0072fd94);
    /* 0072fd94: add ecx, 0x160 */ {  u32 a = r_ecx; u32 b = 0x160u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0072fd9a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0072fd9b: call 0x858009 */ r_esp -= 4; W32(r_esp, 0x72fda0u); f_00858009();
    /* 0072fda0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0072fda2: mov eax, 0 */ r_eax = 0x0u;
    /* 0072fda7: seta al */ r_eax = (r_eax & 0xffffff00u) | ((((!fC&&!fZ)) ? 1 : 0) & 0xffu);
    /* 0072fdaa: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0072fdab: ret  */ FN_RET(0x0072fd94); r_esp += 4; return;
}

void f_0072fdac(void) /* sub_72FDAC */
{
    FN_ENTER(0x0072fdac);
    /* 0072fdac: call 0x791b48 */ r_esp -= 4; W32(r_esp, 0x72fdb1u); f_00791b48();
    /* 0072fdb1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072fdb3: je 0x72fdc7 */ if (fZ) goto L_0072fdc7;
L_0072fdb5:; BB(0x0072fdb5);
    /* 0072fdb5: call 0x791b48 */ r_esp -= 4; W32(r_esp, 0x72fdbau); f_00791b48();
    /* 0072fdba: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0072fdbc: mov ecx, eax */ r_ecx = r_eax;
    /* 0072fdbe: call 0x78fd68 */ r_esp -= 4; W32(r_esp, 0x72fdc3u); f_0078fd68();
    /* 0072fdc3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0072fdc5: jne 0x72fdca */ if (!fZ) goto L_0072fdca;
L_0072fdc7:; BB(0x0072fdc7);
    /* 0072fdc7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0072fdc9: ret  */ FN_RET(0x0072fdac); r_esp += 4; return;
L_0072fdca:; BB(0x0072fdca);
    /* 0072fdca: mov eax, 1 */ r_eax = 0x1u;
    /* 0072fdcf: ret  */ FN_RET(0x0072fdac); r_esp += 4; return;
}

void f_0072fdd0(void) /* sub_72FDD0 */
{
    FN_ENTER(0x0072fdd0);
    /* 0072fdd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0072fdd1: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0072fdd3: call 0x70a5f8 */ r_esp -= 4; W32(r_esp, 0x72fdd8u); f_0070a5f8();
    /* 0072fdd8: push 0x1000000 */ { u32 v = 0x1000000u; r_esp -= 4; W32(r_esp, v); }
    /* 0072fddd: movsx eax, word ptr [ebp + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x20u));
    /* 0072fde1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072fde2: call 0x7be19c */ r_esp -= 4; W32(r_esp, 0x72fde7u); f_007be19c();
    /* 0072fde7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0072fdea: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072fdec: je 0x72fe23 */ if (fZ) goto L_0072fe23;
L_0072fdee:; BB(0x0072fdee);
    /* 0072fdee: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0072fdf0: call 0x72fe6c */ r_esp -= 4; W32(r_esp, 0x72fdf5u); f_0072fe6c();
    /* 0072fdf5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072fdf7: jne 0x72fe23 */ if (!fZ) goto L_0072fe23;
L_0072fdf9:; BB(0x0072fdf9);
    /* 0072fdf9: mov eax, dword ptr [ebp + 0x3f0] */ r_eax = R32((u32)(r_ebp+0x3f0u));
    /* 0072fdff: or eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0072fe02: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0072fe05: mov dword ptr [ebp + 0x3f0], eax */ W32((u32)(r_ebp+0x3f0u), r_eax);
    /* 0072fe0b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0072fe0d: call 0x72f248 */ r_esp -= 4; W32(r_esp, 0x72fe12u); f_0072f248();
    /* 0072fe12: call 0x793228 */ r_esp -= 4; W32(r_esp, 0x72fe17u); f_00793228();
    /* 0072fe17: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 0072fe1a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072fe1b: call 0x841978 */ r_esp -= 4; W32(r_esp, 0x72fe20u); f_00841978();
    /* 0072fe20: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0072fe21: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0072fe22: ret  */ FN_RET(0x0072fdd0); r_esp += 4; return;
L_0072fe23:; BB(0x0072fe23);
    /* 0072fe23: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0072fe25: call 0x72f4a8 */ r_esp -= 4; W32(r_esp, 0x72fe2au); f_0072f4a8();
    /* 0072fe2a: mov eax, dword ptr [ebp + 0x3f0] */ r_eax = R32((u32)(r_ebp+0x3f0u));
    /* 0072fe30: mov dword ptr [ebp + 0x408], 1 */ W32((u32)(r_ebp+0x408u), 0x1u);
    /* 0072fe3a: or eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0072fe3f: test eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0072fe44: jne 0x72fe62 */ if (!fZ) goto L_0072fe62;
L_0072fe46:; BB(0x0072fe46);
    /* 0072fe46: test eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0072fe4b: jne 0x72fe55 */ if (!fZ) goto L_0072fe55;
L_0072fe4d:; BB(0x0072fe4d);
    /* 0072fe4d: mov dword ptr [ebp + 0x3f0], eax */ W32((u32)(r_ebp+0x3f0u), r_eax);
    /* 0072fe53: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0072fe54: ret  */ FN_RET(0x0072fdd0); r_esp += 4; return;
L_0072fe55:; BB(0x0072fe55);
    /* 0072fe55: or eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0072fe5a: mov dword ptr [ebp + 0x3f0], eax */ W32((u32)(r_ebp+0x3f0u), r_eax);
    /* 0072fe60: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0072fe61: ret  */ FN_RET(0x0072fdd0); r_esp += 4; return;
L_0072fe62:; BB(0x0072fe62);
    /* 0072fe62: mov dword ptr [ebp + 0x3f0], eax */ W32((u32)(r_ebp+0x3f0u), r_eax);
    /* 0072fe68: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0072fe69: ret  */ FN_RET(0x0072fdd0); r_esp += 4; return;
}

void f_0072fe6c(void) /* sub_72FE6C */
{
    FN_ENTER(0x0072fe6c);
    /* 0072fe6c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0072fe6d: mov esi, ecx */ r_esi = r_ecx;
    /* 0072fe6f: lea eax, [esi + 0x2ec] */ r_eax = (u32)(r_esi+0x2ecu);
    /* 0072fe75: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072fe76: call 0x858009 */ r_esp -= 4; W32(r_esp, 0x72fe7bu); f_00858009();
    /* 0072fe7b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0072fe7c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0072fe7e: ja 0x72fec9 */ if ((!fC&&!fZ)) goto L_0072fec9;
L_0072fe80:; BB(0x0072fe80);
    /* 0072fe80: mov ecx, esi */ r_ecx = r_esi;
    /* 0072fe82: call 0x72fd94 */ r_esp -= 4; W32(r_esp, 0x72fe87u); f_0072fd94();
    /* 0072fe87: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0072fe89: jne 0x72fec9 */ if (!fZ) goto L_0072fec9;
L_0072fe8b:; BB(0x0072fe8b);
    /* 0072fe8b: call 0x841028 */ r_esp -= 4; W32(r_esp, 0x72fe90u); f_00841028();
    /* 0072fe90: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0072fe92: jne 0x72fec9 */ if (!fZ) goto L_0072fec9;
L_0072fe94:; BB(0x0072fe94);
    /* 0072fe94: mov eax, dword ptr [esi + 0x3f0] */ r_eax = R32((u32)(r_esi+0x3f0u));
    /* 0072fe9a: test eax, 0x4000 */ {  u32 a = r_eax; u32 b = 0x4000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0072fe9f: jne 0x72fec9 */ if (!fZ) goto L_0072fec9;
L_0072fea1:; BB(0x0072fea1);
    /* 0072fea1: call 0x8411f0 */ r_esp -= 4; W32(r_esp, 0x72fea6u); f_008411f0();
    /* 0072fea6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072fea8: je 0x72feb3 */ if (fZ) goto L_0072feb3;
L_0072feaa:; BB(0x0072feaa);
    /* 0072feaa: call 0x841050 */ r_esp -= 4; W32(r_esp, 0x72feafu); f_00841050();
    /* 0072feaf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0072feb1: jne 0x72fec9 */ if (!fZ) goto L_0072fec9;
L_0072feb3:; BB(0x0072feb3);
    /* 0072feb3: call 0x82d2a4 */ r_esp -= 4; W32(r_esp, 0x72feb8u); f_0082d2a4();
    /* 0072feb8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072feba: jne 0x72fec0 */ if (!fZ) goto L_0072fec0;
L_0072febc:; BB(0x0072febc);
    /* 0072febc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0072febe: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0072febf: ret  */ FN_RET(0x0072fe6c); r_esp += 4; return;
L_0072fec0:; BB(0x0072fec0);
    /* 0072fec0: call 0x841050 */ r_esp -= 4; W32(r_esp, 0x72fec5u); f_00841050();
    /* 0072fec5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0072fec7: je 0x72fed0 */ if (fZ) goto L_0072fed0;
L_0072fec9:; BB(0x0072fec9);
    /* 0072fec9: mov eax, 1 */ r_eax = 0x1u;
    /* 0072fece: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0072fecf: ret  */ FN_RET(0x0072fe6c); r_esp += 4; return;
L_0072fed0:; BB(0x0072fed0);
    /* 0072fed0: call 0x841058 */ r_esp -= 4; W32(r_esp, 0x72fed5u); f_00841058();
    /* 0072fed5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0072fed7: je 0x72fee0 */ if (fZ) goto L_0072fee0;
L_0072fed9:; BB(0x0072fed9);
    /* 0072fed9: mov eax, 1 */ r_eax = 0x1u;
    /* 0072fede: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0072fedf: ret  */ FN_RET(0x0072fe6c); r_esp += 4; return;
L_0072fee0:; BB(0x0072fee0);
    /* 0072fee0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0072fee2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0072fee3: ret  */ FN_RET(0x0072fe6c); r_esp += 4; return;
}

void f_0072fee4(void) /* sub_72FEE4 */
{
    FN_ENTER(0x0072fee4);
    /* 0072fee4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0072fee5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0072fee6: mov esi, ecx */ r_esi = r_ecx;
    /* 0072fee8: mov eax, dword ptr [esi + 0x3f0] */ r_eax = R32((u32)(r_esi+0x3f0u));
    /* 0072feee: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0072fef0: jne 0x72fef5 */ if (!fZ) goto L_0072fef5;
L_0072fef2:; BB(0x0072fef2);
    /* 0072fef2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0072fef3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0072fef4: ret  */ FN_RET(0x0072fee4); r_esp += 4; return;
L_0072fef5:; BB(0x0072fef5);
    /* 0072fef5: mov ecx, esi */ r_ecx = r_esi;
    /* 0072fef7: call 0x712644 */ r_esp -= 4; W32(r_esp, 0x72fefcu); f_00712644();
    /* 0072fefc: mov ebp, eax */ r_ebp = r_eax;
    /* 0072fefe: mov edx, dword ptr [esi + 0x3f0] */ r_edx = R32((u32)(r_esi+0x3f0u));
    /* 0072ff04: test dl, 0x40 */ {  u32 a = (u8)r_edx; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0072ff07: je 0x72ff11 */ if (fZ) goto L_0072ff11;
L_0072ff09:; BB(0x0072ff09);
    /* 0072ff09: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0072ff0a: mov ecx, esi */ r_ecx = r_esi;
    /* 0072ff0c: call 0x710f80 */ r_esp -= 4; W32(r_esp, 0x72ff11u); f_00710f80();
L_0072ff11:; BB(0x0072ff11);
    /* 0072ff11: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0072ff12: mov ecx, esi */ r_ecx = r_esi;
    /* 0072ff14: call 0x72ff2c */ r_esp -= 4; W32(r_esp, 0x72ff19u); f_0072ff2c();
    /* 0072ff19: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0072ff1a: mov ecx, esi */ r_ecx = r_esi;
    /* 0072ff1c: call 0x7308f0 */ r_esp -= 4; W32(r_esp, 0x72ff21u); f_007308f0();
    /* 0072ff21: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0072ff22: mov ecx, esi */ r_ecx = r_esi;
    /* 0072ff24: call 0x7309e0 */ r_esp -= 4; W32(r_esp, 0x72ff29u); f_007309e0();
    /* 0072ff29: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0072ff2a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0072ff2b: ret  */ FN_RET(0x0072fee4); r_esp += 4; return;
}

void f_0072ff2c(void) /* sub_72FF2C */
{
    FN_ENTER(0x0072ff2c);
    /* 0072ff2c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0072ff2d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0072ff2e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0072ff2f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0072ff30: sub esp, 0x118 */ {  u32 a = r_esp; u32 b = 0x118u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0072ff36: mov edi, ecx */ r_edi = r_ecx;
    /* 0072ff38: mov eax, dword ptr [edi + 0x3f0] */ r_eax = R32((u32)(r_edi+0x3f0u));
    /* 0072ff3e: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0072ff40: mov esi, dword ptr [esp + 0x12c] */ r_esi = R32((u32)(r_esp+0x12cu));
    /* 0072ff47: je 0x72ff54 */ if (fZ) goto L_0072ff54;
L_0072ff49:; BB(0x0072ff49);
    /* 0072ff49: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 0072ff4c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0072ff4e: jl 0x730743 */ if ((fS!=fO)) goto L_00730743;
L_0072ff54:; BB(0x0072ff54);
    /* 0072ff54: mov ecx, edi */ r_ecx = r_edi;
    /* 0072ff56: call 0x72fd94 */ r_esp -= 4; W32(r_esp, 0x72ff5bu); f_0072fd94();
    /* 0072ff5b: mov dword ptr [esp + 0x40], eax */ W32((u32)(r_esp+0x40u), r_eax);
    /* 0072ff5f: call 0x840b9c */ r_esp -= 4; W32(r_esp, 0x72ff64u); f_00840b9c();
    /* 0072ff64: mov ebx, eax */ r_ebx = r_eax;
    /* 0072ff66: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0072ff67: call 0x841978 */ r_esp -= 4; W32(r_esp, 0x72ff6cu); f_00841978();
    /* 0072ff6c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0072ff6d: call 0x841950 */ r_esp -= 4; W32(r_esp, 0x72ff72u); f_00841950();
    /* 0072ff72: mov dword ptr [esp + 0x58], eax */ W32((u32)(r_esp+0x58u), r_eax);
    /* 0072ff76: fld dword ptr [0x970fe8] */ FPUSH(R_F32((u32)(0x970fe8u)));
    /* 0072ff7c: fld dword ptr [esi + 0x10] */ FPUSH(R_F32((u32)(r_esi+0x10u)));
    /* 0072ff7f: mov edx, dword ptr [esi + 0x10] */ r_edx = R32((u32)(r_esi+0x10u));
    /* 0072ff82: fld dword ptr [esi + 0x18] */ FPUSH(R_F32((u32)(r_esi+0x18u)));
    /* 0072ff85: fld dword ptr [esi + 0x14] */ FPUSH(R_F32((u32)(r_esi+0x14u)));
    /* 0072ff88: mov ebx, dword ptr [esi + 0x14] */ r_ebx = R32((u32)(r_esi+0x14u));
    /* 0072ff8b: fld dword ptr [esi + 0x38] */ FPUSH(R_F32((u32)(r_esi+0x38u)));
    /* 0072ff8e: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0072ff90: fst dword ptr [esp + 0x5c] */ W_F32((u32)(r_esp+0x5cu), ST(0));
    /* 0072ff94: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0072ff96: fst dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0));
    /* 0072ff9a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0072ff9c: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0072ff9e: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0072ffa0: fadd st(3), st(0) */ ST(3) = ST(3) + ST(0);
    /* 0072ffa2: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0072ffa4: fdivr dword ptr [0x970fec] */ ST(0) = R_F32((u32)(0x970fecu)) / ST(0);
    /* 0072ffaa: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0072ffac: fadd dword ptr [0x970fe4] */ ST(0) = ST(0) + R_F32((u32)(0x970fe4u));
    /* 0072ffb2: fstp dword ptr [esp + 0x70] */ W_F32((u32)(r_esp+0x70u), ST(0)); FPOP();
    /* 0072ffb6: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0072ffb8: fstp dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0)); FPOP();
    /* 0072ffbc: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0072ffbe: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 0072ffc2: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 0072ffc7: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0072ffcc: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0072ffd0: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 0072ffd4: fistp dword ptr [esp + 0x28] */ W32((u32)(r_esp+0x28u), (u32)fx_int32(ST(0))); FPOP();
    /* 0072ffd8: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 0072ffdc: mov ebp, dword ptr [esp + 0x28] */ r_ebp = R32((u32)(r_esp+0x28u));
    /* 0072ffe0: fld dword ptr [esi + 0x1c] */ FPUSH(R_F32((u32)(r_esi+0x1cu)));
    /* 0072ffe3: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0072ffe5: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 0072ffe9: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 0072ffee: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0072fff3: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0072fff7: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 0072fffb: fistp dword ptr [esp + 0x28] */ W32((u32)(r_esp+0x28u), (u32)fx_int32(ST(0))); FPOP();
    /* 0072ffff: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 00730003: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 00730007: mov dword ptr [esp + 0x50], eax */ W32((u32)(r_esp+0x50u), r_eax);
    /* 0073000b: mov dword ptr [esp + 0x74], edx */ W32((u32)(r_esp+0x74u), r_edx);
    /* 0073000f: mov dword ptr [esp + 0x78], ebx */ W32((u32)(r_esp+0x78u), r_ebx);
    /* 00730013: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00730015: call 0x7ac174 */ r_esp -= 4; W32(r_esp, 0x73001au); f_007ac174();
    /* 0073001a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073001d: mov ecx, dword ptr [edi + 0x3ec] */ r_ecx = R32((u32)(r_edi+0x3ecu));
    /* 00730023: lea edx, [edi + 0x2ec] */ r_edx = (u32)(r_edi+0x2ecu);
    /* 00730029: lea eax, [edi + 0x418] */ r_eax = (u32)(r_edi+0x418u);
    /* 0073002f: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00730031: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00730033: jle 0x7301c1 */ if ((fZ||fS!=fO)) goto L_007301c1;
L_00730039:; BB(0x00730039);
    /* 00730039: mov dword ptr [esp + 0x30], ebp */ W32((u32)(r_esp+0x30u), r_ebp);
    /* 0073003d: mov ebp, eax */ r_ebp = r_eax;
    /* 0073003f: mov esi, edx */ r_esi = r_edx;
L_00730041:; BB(0x00730041);
    /* 00730041: movzx eax, word ptr [esi] */ r_eax = (u32)R16((u32)(r_esi));
    /* 00730044: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730046: je 0x7301b6 */ if (fZ) goto L_007301b6;
L_0073004c:; BB(0x0073004c);
    /* 0073004c: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 00730050: movzx edx, word ptr [ebp] */ r_edx = (u32)R16((u32)(r_ebp));
    /* 00730054: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 00730057: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730059: je 0x730071 */ if (fZ) goto L_00730071;
L_0073005b:; BB(0x0073005b);
    /* 0073005b: mov dword ptr [esp + 0x50], edx */ W32((u32)(r_esp+0x50u), r_edx);
    /* 0073005f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00730060: call 0x841a8c */ r_esp -= 4; W32(r_esp, 0x730065u); f_00841a8c();
    /* 00730065: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00730066: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00730068: jl 0x730071 */ if ((fS!=fO)) goto L_00730071;
L_0073006a:; BB(0x0073006a);
    /* 0073006a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073006b: call 0x79320c */ r_esp -= 4; W32(r_esp, 0x730070u); f_0079320c();
    /* 00730070: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00730071:; BB(0x00730071);
    /* 00730071: mov eax, dword ptr [edi + 0x3f0] */ r_eax = R32((u32)(r_edi+0x3f0u));
    /* 00730077: test eax, 0x2000 */ {  u32 a = r_eax; u32 b = 0x2000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073007c: je 0x730094 */ if (fZ) goto L_00730094;
L_0073007e:; BB(0x0073007e);
    /* 0073007e: lea eax, [esp + 0x74] */ r_eax = (u32)(r_esp+0x74u);
    /* 00730082: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00730084: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00730085: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 00730087: call 0x7ac1a0 */ r_esp -= 4; W32(r_esp, 0x73008cu); f_007ac1a0();
    /* 0073008c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073008f: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00730092: jmp 0x7300aa */ goto L_007300aa;
L_00730094:; BB(0x00730094);
    /* 00730094: lea eax, [esp + 0x74] */ r_eax = (u32)(r_esp+0x74u);
    /* 00730098: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0073009a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073009b: movzx edx, word ptr [esi] */ r_edx = (u32)R16((u32)(r_esi));
    /* 0073009e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0073009f: call 0x7ac1a0 */ r_esp -= 4; W32(r_esp, 0x7300a4u); f_007ac1a0();
    /* 007300a4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007300a7: movzx edx, al */ r_edx = (u32)(u8)r_eax;
L_007300aa:; BB(0x007300aa);
    /* 007300aa: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007300ae: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007300b2: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 007300b6: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 007300ba: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 007300be: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 007300c2: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 007300c6: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 007300ca: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 007300ce: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 007300d2: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 007300d6: fadd st(4), st(0) */ ST(4) = ST(4) + ST(0);
    /* 007300d8: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007300da: fcomp st(4) */ fx_compare(ST(0), ST(4)); FPOP();
    /* 007300dc: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007300de: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 007300e0: fstp dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0)); FPOP();
    /* 007300e4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007300e5: jae 0x730760 */ if (!fC) goto L_00730760;
L_007300eb:; BB(0x007300eb);
    /* 007300eb: mov eax, dword ptr [esp + 0x12c] */ r_eax = R32((u32)(r_esp+0x12cu));
    /* 007300f2: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 007300f6: fadd dword ptr [0x970fe0] */ ST(0) = ST(0) + R_F32((u32)(0x970fe0u));
    /* 007300fc: fld dword ptr [eax + 0x10] */ FPUSH(R_F32((u32)(r_eax+0x10u)));
    /* 007300ff: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00730101: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 00730103: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00730105: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00730107: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 0073010b: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0073010d: fstp dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 00730111: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00730112: ja 0x730144 */ if ((!fC&&!fZ)) goto L_00730144;
L_00730114:; BB(0x00730114);
    /* 00730114: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00730116: mov eax, ebp */ r_eax = r_ebp;
    /* 00730118: mov edx, esi */ r_edx = r_esi;
    /* 0073011a: mov esi, dword ptr [esp + 0x12c] */ r_esi = R32((u32)(r_esp+0x12cu));
    /* 00730121: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00730123: mov word ptr [edx], bx */ W16((u32)(r_edx), (u16)r_ebx);
    /* 00730126: mov word ptr [eax], bx */ W16((u32)(r_eax), (u16)r_ebx);
    /* 00730129: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 0073012d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073012f: jne 0x73076d */ if (!fZ) goto L_0073076d;
L_00730135:; BB(0x00730135);
    /* 00730135: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00730137: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 0073013b: fstp dword ptr [esp + 0x70] */ W_F32((u32)(r_esp+0x70u), ST(0)); FPOP();
    /* 0073013f: jmp 0x730731 */ goto L_00730731;
L_00730144:; BB(0x00730144);
    /* 00730144: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00730146: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00730148: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 0073014c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0073014e: fstp dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0)); FPOP();
L_00730152:; BB(0x00730152);
    /* 00730152: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 00730156: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 0073015a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0073015c: fstp dword ptr [esp + 0x74] */ W_F32((u32)(r_esp+0x74u), ST(0)); FPOP();
    /* 00730160: fstp dword ptr [esp + 0x78] */ W_F32((u32)(r_esp+0x78u), ST(0)); FPOP();
    /* 00730164: lea eax, [esp + 0x74] */ r_eax = (u32)(r_esp+0x74u);
    /* 00730168: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00730169: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0073016a: call 0x7ac200 */ r_esp -= 4; W32(r_esp, 0x73016fu); f_007ac200();
    /* 0073016f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00730172: lea eax, [esp + 0x74] */ r_eax = (u32)(r_esp+0x74u);
    /* 00730176: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00730177: mov ecx, dword ptr [esp + 0x130] */ r_ecx = R32((u32)(r_esp+0x130u));
    /* 0073017e: call 0x71bbb4 */ r_esp -= 4; W32(r_esp, 0x730183u); f_0071bbb4();
    /* 00730183: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00730184: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 00730188: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0073018b: lea ecx, [esp + 0x78] */ r_ecx = (u32)(r_esp+0x78u);
    /* 0073018f: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x730194u); f_0082b440();
    /* 00730194: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
    /* 00730198: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 0073019c: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0073019f: add ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007301a2: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007301a5: cmp ebx, dword ptr [edi + 0x3ec] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edi+0x3ecu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007301ab: jl 0x730041 */ if ((fS!=fO)) goto L_00730041;
L_007301b1:; BB(0x007301b1);
    /* 007301b1: jmp 0x730750 */ goto L_00730750;
L_007301b6:; BB(0x007301b6);
    /* 007301b6: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
    /* 007301ba: mov esi, dword ptr [esp + 0x12c] */ r_esi = R32((u32)(r_esp+0x12cu));
L_007301c1:; BB(0x007301c1);
    /* 007301c1: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 007301c5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007301c7: jne 0x7301db */ if (!fZ) goto L_007301db;
L_007301c9:; BB(0x007301c9);
    /* 007301c9: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007301cd: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 007301d1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007301d3: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 007301d7: fstp dword ptr [esp + 0x70] */ W_F32((u32)(r_esp+0x70u), ST(0)); FPOP();
L_007301db:; BB(0x007301db);
    /* 007301db: call 0x7ac198 */ r_esp -= 4; W32(r_esp, 0x7301e0u); f_007ac198();
    /* 007301e0: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 007301e4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007301e6: je 0x7305ac */ if (fZ) goto L_007305ac;
L_007301ec:; BB(0x007301ec);
    /* 007301ec: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007301f0: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 007301f4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007301f6: lea ebx, [edi + 0x160] */ r_ebx = (u32)(r_edi+0x160u);
    /* 007301fc: movzx ecx, word ptr [ebx] */ r_ecx = (u32)R16((u32)(r_ebx));
    /* 007301ff: mov eax, ebx */ r_eax = r_ebx;
    /* 00730201: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730203: je 0x730773 */ if (fZ) goto L_00730773;
L_00730209:; BB(0x00730209);
    /* 00730209: mov ecx, dword ptr [esp + 0x48] */ r_ecx = R32((u32)(r_esp+0x48u));
    /* 0073020d: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 00730211: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 00730215: mov dword ptr [esp + 0x28], ebp */ W32((u32)(r_esp+0x28u), r_ebp);
    /* 00730219: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 0073021d: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 00730221: mov dword ptr [esp + 0x28], ecx */ W32((u32)(r_esp+0x28u), r_ecx);
    /* 00730225: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 00730229: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 0073022d: mov dword ptr [esp + 0x4c], ebx */ W32((u32)(r_esp+0x4cu), r_ebx);
    /* 00730231: mov ebx, eax */ r_ebx = r_eax;
    /* 00730233: mov dword ptr [esp + 0x30], ebp */ W32((u32)(r_esp+0x30u), r_ebp);
    /* 00730237: mov ebp, edx */ r_ebp = r_edx;
L_00730239:; BB(0x00730239);
    /* 00730239: mov eax, dword ptr [edi + 0x3f0] */ r_eax = R32((u32)(r_edi+0x3f0u));
    /* 0073023f: test eax, 0x2000 */ {  u32 a = r_eax; u32 b = 0x2000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730244: je 0x730250 */ if (fZ) goto L_00730250;
L_00730246:; BB(0x00730246);
    /* 00730246: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 00730248: call 0x7ac24c */ r_esp -= 4; W32(r_esp, 0x73024du); f_007ac24c();
    /* 0073024d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0073024e: jmp 0x73025a */ goto L_0073025a;
L_00730250:; BB(0x00730250);
    /* 00730250: movzx eax, word ptr [ebx] */ r_eax = (u32)R16((u32)(r_ebx));
    /* 00730253: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00730254: call 0x7ac24c */ r_esp -= 4; W32(r_esp, 0x730259u); f_007ac24c();
    /* 00730259: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0073025a:; BB(0x0073025a);
    /* 0073025a: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 0073025e: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 00730262: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00730265: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 00730269: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 0073026d: fst dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0));
    /* 00730271: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00730273: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00730275: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00730277: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00730278: jae 0x7302a5 */ if (!fC) goto L_007302a5;
L_0073027a:; BB(0x0073027a);
    /* 0073027a: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 0073027e: fadd dword ptr [0x970fe0] */ ST(0) = ST(0) + R_F32((u32)(0x970fe0u));
    /* 00730284: fcom dword ptr [esp + 0x3c] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x3cu))); 
    /* 00730288: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0073028a: fld dword ptr [esi + 0x10] */ FPUSH(R_F32((u32)(r_esi+0x10u)));
    /* 0073028d: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 00730291: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 00730295: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00730296: jb 0x7302a5 */ if (fC) goto L_007302a5;
L_00730298:; BB(0x00730298);
    /* 00730298: mov ebx, dword ptr [esp + 0x4c] */ r_ebx = R32((u32)(r_esp+0x4cu));
    /* 0073029c: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
    /* 007302a0: jmp 0x7303c2 */ goto L_007303c2;
L_007302a5:; BB(0x007302a5);
    /* 007302a5: movsx eax, byte ptr [ebp + edi + 0x264] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+r_edi+0x264u));
    /* 007302ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007302ae: call 0x840b90 */ r_esp -= 4; W32(r_esp, 0x7302b3u); f_00840b90();
    /* 007302b3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007302b4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007302b6: je 0x7302bf */ if (fZ) goto L_007302bf;
L_007302b8:; BB(0x007302b8);
    /* 007302b8: mov edx, 0xc0c03040 */ r_edx = 0xc0c03040u;
    /* 007302bd: jmp 0x7302c4 */ goto L_007302c4;
L_007302bf:; BB(0x007302bf);
    /* 007302bf: mov edx, 0xc01030a0 */ r_edx = 0xc01030a0u;
L_007302c4:; BB(0x007302c4);
    /* 007302c4: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 007302c8: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
    /* 007302cc: fld dword ptr [0x970fdc] */ FPUSH(R_F32((u32)(0x970fdcu)));
    /* 007302d2: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 007302d6: fld dword ptr [esp + 0x68] */ FPUSH(R_F32((u32)(r_esp+0x68u)));
    /* 007302da: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 007302de: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007302e0: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 007302e2: fst dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0));
    /* 007302e6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007302e8: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 007302ea: mov dword ptr [esp + 0x9c], 0 */ W32((u32)(r_esp+0x9cu), 0x0u);
    /* 007302f5: lea eax, [esp + 0xa4] */ r_eax = (u32)(r_esp+0xa4u);
    /* 007302fc: mov dword ptr [esp + 0xc], 0x60 */ W32((u32)(r_esp+0xcu), 0x60u);
    /* 00730304: mov dword ptr [esp + 0x94], eax */ W32((u32)(r_esp+0x94u), r_eax);
    /* 0073030b: lea eax, [esp + 0xc4] */ r_eax = (u32)(r_esp+0xc4u);
    /* 00730312: mov dword ptr [esp + 0x98], eax */ W32((u32)(r_esp+0x98u), r_eax);
    /* 00730319: mov eax, 4 */ r_eax = 0x4u;
    /* 0073031e: mov dword ptr [esp + 0xa0], eax */ W32((u32)(r_esp+0xa0u), r_eax);
    /* 00730325: mov dword ptr [esp + 0xd0], edx */ W32((u32)(r_esp+0xd0u), r_edx);
    /* 0073032c: mov ecx, dword ptr [esp + 0x98] */ r_ecx = R32((u32)(r_esp+0x98u));
    /* 00730333: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 00730336: mov ecx, dword ptr [esp + 0x98] */ r_ecx = R32((u32)(r_esp+0x98u));
    /* 0073033d: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00730341: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 00730344: mov ecx, dword ptr [esp + 0x98] */ r_ecx = R32((u32)(r_esp+0x98u));
    /* 0073034b: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 0073034d: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0073034f: fst dword ptr [esp + 0xa4] */ W_F32((u32)(r_esp+0xa4u), ST(0));
    /* 00730356: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00730358: fst dword ptr [esp + 0xa8] */ W_F32((u32)(r_esp+0xa8u), ST(0));
    /* 0073035f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00730361: fst dword ptr [esp + 0xac] */ W_F32((u32)(r_esp+0xacu), ST(0));
    /* 00730368: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0073036a: fstp dword ptr [esp + 0xb0] */ W_F32((u32)(r_esp+0xb0u), ST(0)); FPOP();
    /* 00730371: fstp dword ptr [esp + 0xb4] */ W_F32((u32)(r_esp+0xb4u), ST(0)); FPOP();
    /* 00730378: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0073037a: fst dword ptr [esp + 0xb8] */ W_F32((u32)(r_esp+0xb8u), ST(0));
    /* 00730381: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00730383: fstp dword ptr [esp + 0xbc] */ W_F32((u32)(r_esp+0xbcu), ST(0)); FPOP();
    /* 0073038a: fstp dword ptr [esp + 0xc0] */ W_F32((u32)(r_esp+0xc0u), ST(0)); FPOP();
    /* 00730391: lea edx, [esp + 0x94] */ r_edx = (u32)(r_esp+0x94u);
    /* 00730398: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0073039b: call 0x82b5d8 */ r_esp -= 4; W32(r_esp, 0x7303a0u); f_0082b5d8();
    /* 007303a0: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
    /* 007303a4: movzx eax, word ptr [ebx + 2] */ r_eax = (u32)R16((u32)(r_ebx+0x2u));
    /* 007303a8: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 007303ac: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007303af: add ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007303b2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007303b4: jne 0x730239 */ if (!fZ) goto L_00730239;
L_007303ba:; BB(0x007303ba);
    /* 007303ba: mov ebx, dword ptr [esp + 0x4c] */ r_ebx = R32((u32)(r_esp+0x4cu));
    /* 007303be: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
L_007303c2:; BB(0x007303c2);
    /* 007303c2: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 007303c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007303c8: je 0x7305ac */ if (fZ) goto L_007305ac;
L_007303ce:; BB(0x007303ce);
    /* 007303ce: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007303d0: call 0x7ac174 */ r_esp -= 4; W32(r_esp, 0x7303d5u); f_007ac174();
    /* 007303d5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007303d6: call 0x840b9c */ r_esp -= 4; W32(r_esp, 0x7303dbu); f_00840b9c();
    /* 007303db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007303dc: call 0x841950 */ r_esp -= 4; W32(r_esp, 0x7303e1u); f_00841950();
    /* 007303e1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007303e2: mov word ptr [esp + 0xd4], ax */ W16((u32)(r_esp+0xd4u), (u16)r_eax);
    /* 007303ea: lea eax, [esp + 0xd4] */ r_eax = (u32)(r_esp+0xd4u);
    /* 007303f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007303f2: mov ecx, edi */ r_ecx = r_edi;
    /* 007303f4: mov edx, dword ptr [esp + 0x54] */ r_edx = R32((u32)(r_esp+0x54u));
    /* 007303f8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007303f9: call 0x73077c */ r_esp -= 4; W32(r_esp, 0x7303feu); f_0073077c();
    /* 007303fe: mov dword ptr [esp + 0x50], eax */ W32((u32)(r_esp+0x50u), r_eax);
    /* 00730402: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 00730406: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 0073040a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0073040c: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 00730410: fstp dword ptr [esp + 0x70] */ W_F32((u32)(r_esp+0x70u), ST(0)); FPOP();
    /* 00730414: movzx edx, word ptr [ebx] */ r_edx = (u32)R16((u32)(r_ebx));
    /* 00730417: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00730419: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073041b: je 0x73058d */ if (fZ) goto L_0073058d;
L_00730421:; BB(0x00730421);
    /* 00730421: mov edx, dword ptr [esp + 0x48] */ r_edx = R32((u32)(r_esp+0x48u));
    /* 00730425: mov dword ptr [esp + 0x28], ebp */ W32((u32)(r_esp+0x28u), r_ebp);
    /* 00730429: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 0073042d: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 00730431: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 00730435: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 00730439: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 0073043d: mov dword ptr [esp + 0x30], ebp */ W32((u32)(r_esp+0x30u), r_ebp);
    /* 00730441: mov ebp, ebx */ r_ebp = r_ebx;
    /* 00730443: mov ebx, eax */ r_ebx = r_eax;
L_00730445:; BB(0x00730445);
    /* 00730445: mov edx, dword ptr [edi + 0x3f0] */ r_edx = R32((u32)(r_edi+0x3f0u));
    /* 0073044b: test edx, 0x2000 */ {  u32 a = r_edx; u32 b = 0x2000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730451: je 0x73046c */ if (fZ) goto L_0073046c;
L_00730453:; BB(0x00730453);
    /* 00730453: lea edx, [esp + 0xd8] */ r_edx = (u32)(r_esp+0xd8u);
    /* 0073045a: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0073045c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0073045d: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 0073045f: call 0x7ac1a0 */ r_esp -= 4; W32(r_esp, 0x730464u); f_007ac1a0();
    /* 00730464: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00730467: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0073046a: jmp 0x730486 */ goto L_00730486;
L_0073046c:; BB(0x0073046c);
    /* 0073046c: lea edx, [esp + 0xd8] */ r_edx = (u32)(r_esp+0xd8u);
    /* 00730473: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00730475: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00730476: movzx eax, word ptr [ebp] */ r_eax = (u32)R16((u32)(r_ebp));
    /* 0073047a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073047b: call 0x7ac1a0 */ r_esp -= 4; W32(r_esp, 0x730480u); f_007ac1a0();
    /* 00730480: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00730483: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
L_00730486:; BB(0x00730486);
    /* 00730486: mov dword ptr [esp + 0x28], ecx */ W32((u32)(r_esp+0x28u), r_ecx);
    /* 0073048a: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 0073048e: fadd dword ptr [esp + 0x54] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x54u));
    /* 00730492: fcomp dword ptr [esp + 0x38] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x38u))); FPOP();
    /* 00730496: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00730498: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00730499: jbe 0x7304b5 */ if ((fC||fZ)) goto L_007304b5;
L_0073049b:; BB(0x0073049b);
    /* 0073049b: cmp ebx, dword ptr [edi + 0x260] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edi+0x260u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007304a1: jg 0x7304b5 */ if ((!fZ&&fS==fO)) goto L_007304b5;
L_007304a3:; BB(0x007304a3);
    /* 007304a3: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007304a7: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 007304ab: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007304ad: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 007304b1: fstp dword ptr [esp + 0x70] */ W_F32((u32)(r_esp+0x70u), ST(0)); FPOP();
L_007304b5:; BB(0x007304b5);
    /* 007304b5: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007304b9: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 007304bd: mov dword ptr [esp + 0x28], ecx */ W32((u32)(r_esp+0x28u), r_ecx);
    /* 007304c1: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 007304c5: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 007304c7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007304c9: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 007304cb: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007304cd: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007304cf: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 007304d3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007304d4: jae 0x730505 */ if (!fC) goto L_00730505;
L_007304d6:; BB(0x007304d6);
    /* 007304d6: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 007304da: fadd dword ptr [0x970fe0] */ ST(0) = ST(0) + R_F32((u32)(0x970fe0u));
    /* 007304e0: fcom dword ptr [esp + 0x34] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x34u))); 
    /* 007304e4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007304e6: fld dword ptr [esi + 0x10] */ FPUSH(R_F32((u32)(r_esi+0x10u)));
    /* 007304e9: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 007304ed: fstp dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 007304f1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007304f2: jb 0x7304fb */ if (fC) goto L_007304fb;
L_007304f4:; BB(0x007304f4);
    /* 007304f4: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007304f6: jmp 0x730731 */ goto L_00730731;
L_007304fb:; BB(0x007304fb);
    /* 007304fb: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007304ff: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00730501: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
L_00730505:; BB(0x00730505);
    /* 00730505: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00730507: cmp ebx, dword ptr [edi + 0x260] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edi+0x260u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073050d: jne 0x730521 */ if (!fZ) goto L_00730521;
L_0073050f:; BB(0x0073050f);
    /* 0073050f: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 00730513: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 00730517: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00730519: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 0073051d: fstp dword ptr [esp + 0x70] */ W_F32((u32)(r_esp+0x70u), ST(0)); FPOP();
L_00730521:; BB(0x00730521);
    /* 00730521: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 00730525: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 00730529: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0073052b: fstp dword ptr [esp + 0xd8] */ W_F32((u32)(r_esp+0xd8u), ST(0)); FPOP();
    /* 00730532: fstp dword ptr [esp + 0xdc] */ W_F32((u32)(r_esp+0xdcu), ST(0)); FPOP();
    /* 00730539: lea edx, [esp + 0xd8] */ r_edx = (u32)(r_esp+0xd8u);
    /* 00730540: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00730541: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00730542: call 0x7ac200 */ r_esp -= 4; W32(r_esp, 0x730547u); f_007ac200();
    /* 00730547: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073054a: lea edx, [esp + 0xd8] */ r_edx = (u32)(r_esp+0xd8u);
    /* 00730551: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00730552: mov ecx, esi */ r_ecx = r_esi;
    /* 00730554: call 0x71bbb4 */ r_esp -= 4; W32(r_esp, 0x730559u); f_0071bbb4();
    /* 00730559: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0073055a: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 0073055e: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00730561: lea ecx, [esp + 0xdc] */ r_ecx = (u32)(r_esp+0xdcu);
    /* 00730568: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x73056du); f_0082b440();
    /* 0073056d: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 00730571: movzx edx, word ptr [ebp + 2] */ r_edx = (u32)R16((u32)(r_ebp+0x2u));
    /* 00730575: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 00730579: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0073057c: add ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0073057f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730581: jne 0x730445 */ if (!fZ) goto L_00730445;
L_00730587:; BB(0x00730587);
    /* 00730587: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
    /* 0073058b: mov eax, ebx */ r_eax = r_ebx;
L_0073058d:; BB(0x0073058d);
    /* 0073058d: cmp eax, dword ptr [edi + 0x260] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edi+0x260u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730593: jne 0x7305a7 */ if (!fZ) goto L_007305a7;
L_00730595:; BB(0x00730595);
    /* 00730595: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 00730599: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 0073059d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0073059f: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 007305a3: fstp dword ptr [esp + 0x70] */ W_F32((u32)(r_esp+0x70u), ST(0)); FPOP();
L_007305a7:; BB(0x007305a7);
    /* 007305a7: call 0x7ac198 */ r_esp -= 4; W32(r_esp, 0x7305acu); f_007ac198();
L_007305ac:; BB(0x007305ac);
    /* 007305ac: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007305ae: call 0x7ac174 */ r_esp -= 4; W32(r_esp, 0x7305b3u); f_007ac174();
    /* 007305b3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007305b4: mov ebx, dword ptr [edi + 0x3ec] */ r_ebx = R32((u32)(r_edi+0x3ecu));
    /* 007305ba: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007305bc: lea eax, [edi + ebx + 0x2ec] */ r_eax = (u32)(r_edi+r_ebx+0x2ecu);
    /* 007305c3: movzx edx, word ptr [eax] */ r_edx = (u32)R16((u32)(r_eax));
    /* 007305c6: lea ebx, [edi + ebx + 0x418] */ r_ebx = (u32)(r_edi+r_ebx+0x418u);
    /* 007305cd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007305cf: je 0x730731 */ if (fZ) goto L_00730731;
L_007305d5:; BB(0x007305d5);
    /* 007305d5: mov edx, dword ptr [esp + 0x48] */ r_edx = R32((u32)(r_esp+0x48u));
    /* 007305d9: mov dword ptr [esp + 0x28], ebp */ W32((u32)(r_esp+0x28u), r_ebp);
    /* 007305dd: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 007305e1: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 007305e5: mov ebp, eax */ r_ebp = r_eax;
    /* 007305e7: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 007305eb: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 007305ef: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 007305f3: mov dword ptr [esp + 0x44], edi */ W32((u32)(r_esp+0x44u), r_edi);
    /* 007305f7: mov edi, dword ptr [esp + 0x50] */ r_edi = R32((u32)(r_esp+0x50u));
L_007305fb:; BB(0x007305fb);
    /* 007305fb: movzx eax, word ptr [ebx] */ r_eax = (u32)R16((u32)(r_ebx));
    /* 007305fe: movzx edx, di */ r_edx = (u32)(u16)r_edi;
    /* 00730601: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730603: je 0x730619 */ if (fZ) goto L_00730619;
L_00730605:; BB(0x00730605);
    /* 00730605: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00730606: mov edi, eax */ r_edi = r_eax;
    /* 00730608: call 0x841a8c */ r_esp -= 4; W32(r_esp, 0x73060du); f_00841a8c();
    /* 0073060d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0073060e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00730610: jl 0x730619 */ if ((fS!=fO)) goto L_00730619;
L_00730612:; BB(0x00730612);
    /* 00730612: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00730613: call 0x79320c */ r_esp -= 4; W32(r_esp, 0x730618u); f_0079320c();
    /* 00730618: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00730619:; BB(0x00730619);
    /* 00730619: mov edx, dword ptr [esp + 0x44] */ r_edx = R32((u32)(r_esp+0x44u));
    /* 0073061d: mov edx, dword ptr [edx + 0x3f0] */ r_edx = R32((u32)(r_edx+0x3f0u));
    /* 00730623: test edx, 0x2000 */ {  u32 a = r_edx; u32 b = 0x2000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730629: je 0x730644 */ if (fZ) goto L_00730644;
L_0073062b:; BB(0x0073062b);
    /* 0073062b: lea edx, [esp + 0xf8] */ r_edx = (u32)(r_esp+0xf8u);
    /* 00730632: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00730634: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00730635: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 00730637: call 0x7ac1a0 */ r_esp -= 4; W32(r_esp, 0x73063cu); f_007ac1a0();
    /* 0073063c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073063f: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00730642: jmp 0x73065e */ goto L_0073065e;
L_00730644:; BB(0x00730644);
    /* 00730644: lea edx, [esp + 0xf8] */ r_edx = (u32)(r_esp+0xf8u);
    /* 0073064b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0073064d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0073064e: movzx eax, word ptr [ebp] */ r_eax = (u32)R16((u32)(r_ebp));
    /* 00730652: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00730653: call 0x7ac1a0 */ r_esp -= 4; W32(r_esp, 0x730658u); f_007ac1a0();
    /* 00730658: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073065b: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
L_0073065e:; BB(0x0073065e);
    /* 0073065e: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 00730662: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 00730666: mov dword ptr [esp + 0x28], ecx */ W32((u32)(r_esp+0x28u), r_ecx);
    /* 0073066a: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 0073066e: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 00730670: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00730672: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 00730674: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00730676: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00730678: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 0073067c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0073067d: jae 0x7306c5 */ if (!fC) goto L_007306c5;
L_0073067f:; BB(0x0073067f);
    /* 0073067f: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 00730683: fadd dword ptr [0x970fe0] */ ST(0) = ST(0) + R_F32((u32)(0x970fe0u));
    /* 00730689: fcom dword ptr [esp + 0x3c] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x3cu))); 
    /* 0073068d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0073068f: fld dword ptr [esi + 0x10] */ FPUSH(R_F32((u32)(r_esi+0x10u)));
    /* 00730692: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 00730696: fstp dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 0073069a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0073069b: jb 0x7306bb */ if (fC) goto L_007306bb;
L_0073069d:; BB(0x0073069d);
    /* 0073069d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0073069f: mov edi, dword ptr [esp + 0x44] */ r_edi = R32((u32)(r_esp+0x44u));
    /* 007306a3: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 007306a7: mov eax, ebp */ r_eax = r_ebp;
    /* 007306a9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007306ab: jne 0x730731 */ if (!fZ) goto L_00730731;
L_007306b1:; BB(0x007306b1);
    /* 007306b1: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007306b3: mov word ptr [eax], dx */ W16((u32)(r_eax), (u16)r_edx);
    /* 007306b6: mov word ptr [ebx], dx */ W16((u32)(r_ebx), (u16)r_edx);
    /* 007306b9: jmp 0x730731 */ goto L_00730731;
L_007306bb:; BB(0x007306bb);
    /* 007306bb: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007306bf: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 007306c1: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
L_007306c5:; BB(0x007306c5);
    /* 007306c5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007306c7: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007306cb: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 007306cf: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007306d1: fstp dword ptr [esp + 0xf8] */ W_F32((u32)(r_esp+0xf8u), ST(0)); FPOP();
    /* 007306d8: fstp dword ptr [esp + 0xfc] */ W_F32((u32)(r_esp+0xfcu), ST(0)); FPOP();
    /* 007306df: lea edx, [esp + 0xf8] */ r_edx = (u32)(r_esp+0xf8u);
    /* 007306e6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007306e7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007306e8: call 0x7ac200 */ r_esp -= 4; W32(r_esp, 0x7306edu); f_007ac200();
    /* 007306ed: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007306f0: lea edx, [esp + 0xf8] */ r_edx = (u32)(r_esp+0xf8u);
    /* 007306f7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007306f8: mov ecx, esi */ r_ecx = r_esi;
    /* 007306fa: call 0x71bbb4 */ r_esp -= 4; W32(r_esp, 0x7306ffu); f_0071bbb4();
    /* 007306ff: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00730700: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 00730704: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00730707: lea ecx, [esp + 0xfc] */ r_ecx = (u32)(r_esp+0xfcu);
    /* 0073070e: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x730713u); f_0082b440();
    /* 00730713: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 00730717: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 0073071b: add ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0073071e: movzx edx, word ptr [ebp] */ r_edx = (u32)R16((u32)(r_ebp));
    /* 00730722: add ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00730725: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730727: jne 0x7305fb */ if (!fZ) goto L_007305fb;
L_0073072d:; BB(0x0073072d);
    /* 0073072d: mov edi, dword ptr [esp + 0x44] */ r_edi = R32((u32)(r_esp+0x44u));
L_00730731:; BB(0x00730731);
    /* 00730731: call 0x7ac198 */ r_esp -= 4; W32(r_esp, 0x730736u); f_007ac198();
    /* 00730736: lea eax, [esp + 0x6c] */ r_eax = (u32)(r_esp+0x6cu);
    /* 0073073a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073073b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0073073c: mov ecx, edi */ r_ecx = r_edi;
    /* 0073073e: call 0x7307a8 */ r_esp -= 4; W32(r_esp, 0x730743u); f_007307a8();
L_00730743:; BB(0x00730743);
    /* 00730743: add esp, 0x118 */ {  u32 a = r_esp; u32 b = 0x118u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00730749: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0073074a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073074b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0073074c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0073074d: ret 4 */ FN_RET(0x0072ff2c); r_esp += 8; return;
L_00730750:; BB(0x00730750);
    /* 00730750: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
    /* 00730754: mov esi, dword ptr [esp + 0x12c] */ r_esi = R32((u32)(r_esp+0x12cu));
    /* 0073075b: jmp 0x7301c1 */ goto L_007301c1;
L_00730760:; BB(0x00730760);
    /* 00730760: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00730762: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00730764: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00730766: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00730768: jmp 0x730152 */ goto L_00730152;
L_0073076d:; BB(0x0073076d);
    /* 0073076d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0073076f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00730771: jmp 0x730731 */ goto L_00730731;
L_00730773:; BB(0x00730773);
    /* 00730773: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00730775: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00730777: jmp 0x7303ce */ goto L_007303ce;
}

